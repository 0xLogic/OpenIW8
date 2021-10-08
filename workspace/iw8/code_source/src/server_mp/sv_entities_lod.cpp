/*
==============
SV_EntitiesLoD_Validate
==============
*/

void __fastcall SV_EntitiesLoD_Validate(const __int16 clientEntity, const EntityLoDs *const entityLoDs)
{
  ?SV_EntitiesLoD_Validate@@YAXFQEBUEntityLoDs@@@Z(clientEntity, entityLoDs);
}

/*
==============
SV_EntitiesLoD_UseDynamicLoD
==============
*/

bool __fastcall SV_EntitiesLoD_UseDynamicLoD()
{
  return ?SV_EntitiesLoD_UseDynamicLoD@@YA_NXZ();
}

/*
==============
SV_EntitiesLoD_UpdateForcedHighLoDEntitiesList
==============
*/

void SV_EntitiesLoD_UpdateForcedHighLoDEntitiesList(void)
{
  ?SV_EntitiesLoD_UpdateForcedHighLoDEntitiesList@@YAXXZ();
}

/*
==============
SV_EntitiesLoD_PrecomputeSharedDataForAllClients
==============
*/

void SV_EntitiesLoD_PrecomputeSharedDataForAllClients(void)
{
  ?SV_EntitiesLoD_PrecomputeSharedDataForAllClients@@YAXXZ();
}

/*
==============
SV_EntitiesLoD_GetHighLoDEntitiesListForClient
==============
*/

void __fastcall SV_EntitiesLoD_GetHighLoDEntitiesListForClient(const __int16 clientIndex, EntityLoDs *const entityLoDs)
{
  ?SV_EntitiesLoD_GetHighLoDEntitiesListForClient@@YAXFQEAUEntityLoDs@@@Z(clientIndex, entityLoDs);
}

/*
==============
SV_EntitiesLoD_UseLowLodClientEntityEvents
==============
*/

bool __fastcall SV_EntitiesLoD_UseLowLodClientEntityEvents()
{
  return ?SV_EntitiesLoD_UseLowLodClientEntityEvents@@YA_NXZ();
}

/*
==============
SV_EntitiesLOD_SetupImportantDistanceEntityForAllClients
==============
*/

void __fastcall SV_EntitiesLOD_SetupImportantDistanceEntityForAllClients(const __int16 entNum, double radius, const vec3_t *position)
{
  unsigned int v4; 
  unsigned int v18; 
  int v19; 
  __int128 v20; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v4 = s_numImportantDistanceLoDEntities;
  _RBX = position;
  __asm { vmovaps xmm6, xmm1 }
  if ( s_numImportantDistanceLoDEntities < 0x800 )
    goto LABEL_6;
  v19 = 2048;
  v18 = s_numImportantDistanceLoDEntities;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( s_numImportantDistanceLoDEntities ) < (unsigned)( ( 2048 ) )", "s_numImportantDistanceLoDEntities doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
    __debugbreak();
  v4 = s_numImportantDistanceLoDEntities;
  if ( s_numImportantDistanceLoDEntities < 0x800 )
  {
LABEL_6:
    __asm { vmovss  xmm1, dword ptr [rbx] }
    _RAX = v4;
    _R8 = 0x140000000ui64;
    HIDWORD(v20) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+40h]
      vmovss  xmm3, xmm3, xmm1
      vinsertps xmm3, xmm3, dword ptr [rbx+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+8], 20h ; ' '
      vmulss  xmm0, xmm6, xmm6
      vmovss  rva s_importantDistanceRadiiSq[r8+rax*4], xmm0
    }
    s_importantDistanceEntities[v4] = entNum;
    _RAX = 2i64 * v4;
    s_numImportantDistanceLoDEntities = v4 + 1;
    __asm { vmovups xmmword ptr rva s_importantDistanceEntityPositions.v[r8+rax*8], xmm3 }
  }
  else
  {
    Com_PrintWarning(15, "Entity LOD: important distance entity array exhausted\n");
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
SV_EntitiesLoD_AddHighLoDChildren
==============
*/
void SV_EntitiesLoD_AddHighLoDChildren(const gentity_s *entity, EntityLoDs *const entityLoDs)
{
  gentity_s *i; 
  unsigned int number; 
  __int64 v6; 
  __int64 v7; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 349, ASSERT_TYPE_ASSERT, "( entity !=nullptr )", (const char *)&queryFormat, "entity !=nullptr") )
    __debugbreak();
  for ( i = entity->tagChildren; i; i = i->tagInfo->next )
  {
    SV_EntitiesLoD_AddHighLoDChildren(i, entityLoDs);
    if ( SV_SnapshotMP_CanClientsSeeEntity(i) )
    {
      number = i->s.number;
      if ( number >= 0x800 )
      {
        LODWORD(v7) = 2048;
        LODWORD(v6) = i->s.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
          __debugbreak();
      }
      entityLoDs->array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
    }
  }
}

/*
==============
SV_EntitiesLoD_AddHighLoDParents
==============
*/
void SV_EntitiesLoD_AddHighLoDParents(const gentity_s *entity, EntityLoDs *const entityLoDs)
{
  __int16 v4; 

  while ( 1 )
  {
    if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 368, ASSERT_TYPE_ASSERT, "( entity !=nullptr )", (const char *)&queryFormat, "entity !=nullptr") )
      __debugbreak();
    if ( (*(_DWORD *)&entity->s.clientLinkInfo & 0x7FF) == 0 )
      break;
    v4 = truncate_cast<short,unsigned int>(*(_DWORD *)&entity->s.clientLinkInfo & 0x7FF) - 1;
    entity = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v4];
    if ( !entity )
      break;
    if ( SV_SnapshotMP_CanClientsSeeEntity(entity) )
      bitarray_base<bitarray<2048>>::setBit(entityLoDs, entity->s.number);
  }
}

/*
==============
SV_EntitiesLoD_AddImportantDistanceEntitiesForClient
==============
*/
void SV_EntitiesLoD_AddImportantDistanceEntitiesForClient(const unsigned int clientIndex, EntityLoDs *const entityLoDs)
{
  __int64 v5; 
  gentity_s *v6; 
  float v8; 
  float v9; 
  unsigned int v22; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  __int128 v33[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v5 = (int)clientIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "SV_EntitiesLoD_AddImportantDistanceEntitiesForClient");
  v6 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v5];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 478, ASSERT_TYPE_ASSERT, "( clientEnt )", (const char *)&queryFormat, "clientEnt", -2i64) )
    __debugbreak();
  _RDI = &v6->s.lerp.pos;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
  {
    *(_QWORD *)&v33[0] = &v30;
    v8 = _RDI->trBase.v[0];
    v9 = _RDI->trBase.v[1];
    v32 = LODWORD(v9) ^ LODWORD(_RDI->trBase.v[2]) ^ s_trbase_aab_Z;
    v31 = LODWORD(v8) ^ LODWORD(v9) ^ s_trbase_aab_Y;
    v30 = LODWORD(v8) ^ ~s_trbase_aab_X;
    memset(v33, 0, 8ui64);
    __asm
    {
      vmovss  xmm0, [rsp+88h+var_50]
      vmovss  dword ptr [rsp+88h+var_38], xmm0
    }
    if ( (v33[0] & 0x7F800000) == 2139095040 )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm0, [rsp+88h+var_4C]
      vmovss  dword ptr [rsp+88h+var_38], xmm0
    }
    if ( (v33[0] & 0x7F800000) == 2139095040 )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm0, [rsp+88h+var_48]
      vmovss  dword ptr [rsp+88h+var_38], xmm0
    }
    if ( (v33[0] & 0x7F800000) == 2139095040 )
    {
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vmovss  [rsp+88h+var_50], xmm0
      vmovss  xmm1, dword ptr [rdi+10h]
      vmovss  [rsp+88h+var_4C], xmm1
      vmovss  xmm0, dword ptr [rdi+14h]
      vmovss  [rsp+88h+var_48], xmm0
    }
  }
  __asm { vmovss  xmm0, [rsp+88h+var_50] }
  HIDWORD(v33[0]) = 0;
  __asm
  {
    vmovups xmm6, [rsp+88h+var_38]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, [rsp+88h+var_4C], 10h
    vinsertps xmm6, xmm6, [rsp+88h+var_48], 20h
  }
  _RDI = 0i64;
  v22 = s_numImportantDistanceLoDEntities;
  if ( s_numImportantDistanceLoDEntities )
  {
    _RSI = 0x140000000ui64;
    do
    {
      __asm
      {
        vsubps  xmm1, xmm6, xmmword ptr rva s_importantDistanceEntityPositions.v[rsi+rax*8]
        vmulps  xmm2, xmm1, xmm1
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vcomiss xmm2, rva s_importantDistanceRadiiSq[rsi+rdi*4]
      }
      if ( __CFADD__((unsigned int)_RDI, (unsigned int)_RDI) || 2i64 * (unsigned int)_RDI == 0 )
      {
        bitarray_base<bitarray<2048>>::setBit(entityLoDs, s_importantDistanceEntities[_RDI]);
        v22 = s_numImportantDistanceLoDEntities;
      }
      _RDI = (unsigned int)(_RDI + 1);
    }
    while ( (unsigned int)_RDI < v22 );
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
SV_EntitiesLoD_AddOtherClientsLookingAtClient
==============
*/
void SV_EntitiesLoD_AddOtherClientsLookingAtClient(const unsigned int clientIndex, EntityLoDs *const entityLoDs)
{
  __int64 v7; 
  unsigned int v8; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  gclient_s *client; 
  char v15; 
  char v16; 
  __int64 v38; 
  __int64 v39; 
  vec3_t forward; 

  _R15 = SvGameGlobals::GetSvGameGlobalsCommon()->gentities[clientIndex].client;
  if ( _R15 )
  {
    LODWORD(v7) = 0;
    v8 = _R15->sess.sightedByPlayers.array[0];
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f7ae148
      vmovaps [rsp+0B8h+var_58], xmm8
      vmovss  xmm8, cs:__real@80000000
      vmovaps [rsp+0B8h+var_38], xmm6
    }
    while ( v8 )
    {
LABEL_6:
      v11 = __lzcnt(v8);
      v12 = v11 + 32 * v7;
      if ( v11 >= 0x20 )
      {
        LODWORD(v39) = 32;
        LODWORD(v38) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v38, v39) )
          __debugbreak();
      }
      if ( (v8 & (0x80000000 >> v11)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v8 &= ~(0x80000000 >> v11);
      if ( v12 >= 0x800 )
      {
        LODWORD(v39) = 2048;
        LODWORD(v38) = v11 + 32 * v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v38, v39) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v13 = (int)v12;
      if ( g_entities[v13].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v12] )
      {
        if ( v12 >= 0x800 )
        {
          LODWORD(v39) = 2048;
          LODWORD(v38) = v11 + 32 * v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v38, v39) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v12 & 0x1F)) & entityLoDs->array[(unsigned __int64)v12 >> 5]) == 0 )
        {
          client = SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v13].client;
          if ( client )
          {
            AngleVectors(&client->ps.viewangles, &forward, NULL, NULL);
            __asm
            {
              vmovss  xmm0, dword ptr [r15+30h]
              vsubss  xmm4, xmm0, dword ptr [rbp+30h]
              vmovss  xmm1, dword ptr [r15+34h]
              vmovss  xmm0, dword ptr [r15+38h]
              vsubss  xmm5, xmm1, dword ptr [rbp+34h]
              vsubss  xmm6, xmm0, dword ptr [rbp+38h]
              vmulss  xmm2, xmm5, xmm5
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm3, xmm2, xmm2
              vcomiss xmm3, xmm8
            }
            if ( v15 | v16 )
              goto LABEL_29;
            __asm
            {
              vmulss  xmm1, xmm5, dword ptr [rsp+0B8h+forward+4]
              vmulss  xmm0, xmm4, dword ptr [rsp+0B8h+forward]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm6, dword ptr [rsp+0B8h+forward+8]
              vaddss  xmm2, xmm2, xmm1
              vdivss  xmm0, xmm2, xmm3
              vcomiss xmm0, xmm7
            }
            if ( !(v15 | v16) )
LABEL_29:
              bitarray_base<bitarray<2048>>::setBit(entityLoDs, v12);
          }
        }
      }
    }
    while ( 1 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 7 )
        break;
      v8 = _R15->sess.sightedByPlayers.array[v7];
      if ( v8 )
        goto LABEL_6;
    }
    __asm
    {
      vmovaps xmm6, [rsp+0B8h+var_38]
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm8, [rsp+0B8h+var_58]
    }
  }
}

/*
==============
SV_EntitiesLoD_AddVisibleClients
==============
*/
void SV_EntitiesLoD_AddVisibleClients(const unsigned int clientIndex, EntityLoDs *const entityLoDs)
{
  gclient_s *client; 
  __int64 v4; 
  ClientBits *p_sightedPlayers; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  client = SvGameGlobals::GetSvGameGlobalsCommon()->gentities[clientIndex].client;
  if ( client )
  {
    LODWORD(v4) = 0;
    p_sightedPlayers = &client->sess.sightedPlayers;
    v6 = client->sess.sightedPlayers.array[0];
    while ( v6 )
    {
LABEL_6:
      v7 = __lzcnt(v6);
      v8 = v7 + 32 * v4;
      if ( v7 >= 0x20 )
      {
        LODWORD(v10) = 32;
        LODWORD(v9) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( (v6 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v6 &= ~(0x80000000 >> v7);
      if ( v8 >= 0x800 )
      {
        LODWORD(v10) = 2048;
        LODWORD(v9) = v7 + 32 * v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v8] )
      {
        if ( v8 >= 0x800 )
        {
          LODWORD(v12) = 2048;
          LODWORD(v11) = v7 + 32 * v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
            __debugbreak();
        }
        entityLoDs->array[(unsigned __int64)v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
      }
    }
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 7 )
        break;
      v6 = p_sightedPlayers->array[v4];
      if ( v6 )
        goto LABEL_6;
    }
  }
}

/*
==============
SV_EntitiesLoD_GetHighLoDEntitiesListForClient
==============
*/
void SV_EntitiesLoD_GetHighLoDEntitiesListForClient(const __int16 clientIndex, EntityLoDs *const entityLoDs)
{
  __int16 v3; 
  __int16 v4; 
  unsigned int v5; 
  EntityLoDs *v6; 
  __int64 v7; 
  gentity_s *v8; 
  gclient_s *client; 
  int spectatorClient; 
  int entity; 
  unsigned int v12; 
  __int64 v13; 
  __int16 *v14; 
  __int64 v15; 
  __int64 v16; 
  gentity_s *v17; 
  __int16 v18; 
  __int64 v19; 
  __int64 v20; 
  __int16 v21; 
  __int16 v22; 
  __int16 nearbyEntities[2052]; 

  v3 = clientIndex;
  v21 = clientIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "SV_EntitiesLoD_GetHighLoDEntitiesListForClient");
  if ( (!Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) || g_svSnapshotData.forceNetfieldLoD == 1 || Com_FrontEnd_IsInFrontEnd()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 515, ASSERT_TYPE_ASSERT, "( SV_EntitiesLoD_UseDynamicLoD() )", (const char *)&queryFormat, "SV_EntitiesLoD_UseDynamicLoD()") )
    __debugbreak();
  v4 = 2047;
  v22 = 2047;
  v5 = 0;
  v6 = entityLoDs;
  v7 = 4i64;
  do
  {
    *(_QWORD *)v6->array = 0i64;
    *(_QWORD *)&v6->array[2] = 0i64;
    *(_QWORD *)&v6->array[4] = 0i64;
    v6 = (EntityLoDs *)((char *)v6 + 64);
    *(_QWORD *)&v6[-1].array[54] = 0i64;
    *(_QWORD *)&v6[-1].array[56] = 0i64;
    *(_QWORD *)&v6[-1].array[58] = 0i64;
    *(_QWORD *)&v6[-1].array[60] = 0i64;
    *(_QWORD *)&v6[-1].array[62] = 0i64;
    --v7;
  }
  while ( v7 );
  v8 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v3];
  if ( v8 )
  {
    client = v8->client;
    if ( client )
    {
      spectatorClient = client->spectatorClient;
      if ( spectatorClient == -1 )
      {
        entity = client->ps.vehicleState.entity;
        if ( entity != 2047 )
        {
          v4 = truncate_cast<short,int>(entity);
          v22 = v4;
        }
      }
      else
      {
        v3 = truncate_cast<short,int>(spectatorClient);
        v21 = v3;
      }
    }
  }
  v12 = SV_EntitiesPartitioning_GetNearbyEntities(v3, nearbyEntities);
  v13 = v12;
  if ( v12 > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 551, ASSERT_TYPE_ASSERT, "( numNearbyEntities <= ( sizeof( *array_counter( nearbyEntities ) ) + 0 ) )", (const char *)&queryFormat, "numNearbyEntities <= ARRAY_COUNT( nearbyEntities )") )
    __debugbreak();
  if ( (_DWORD)v13 )
  {
    v14 = nearbyEntities;
    v15 = v13;
    do
    {
      v16 = *v14;
      v17 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v16];
      if ( SV_SnapshotMP_CanClientsSeeEntity(v17) )
      {
        if ( v17->s.number != (_WORD)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 558, ASSERT_TYPE_ASSERT, "( ent->s.number == entityNum )", (const char *)&queryFormat, "ent->s.number == entityNum") )
          __debugbreak();
        if ( (unsigned int)(__int16)v16 >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = (__int16)v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v19, v20) )
            __debugbreak();
        }
        entityLoDs->array[(unsigned __int64)(unsigned int)(__int16)v16 >> 5] |= 0x80000000 >> (v16 & 0x1F);
      }
      SV_EntitiesLoD_AddHighLoDChildren(v17, entityLoDs);
      SV_EntitiesLoD_AddHighLoDParents(v17, entityLoDs);
      ++v14;
      --v15;
    }
    while ( v15 );
    v5 = 0;
    v3 = v21;
    v4 = v22;
  }
  if ( s_numForcedHighLoDEntities )
  {
    do
    {
      v18 = s_forcedHighLoDEntities[v5];
      if ( v18 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 574, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
        __debugbreak();
      if ( (unsigned int)v18 >= 0x800 )
      {
        LODWORD(v20) = 2048;
        LODWORD(v19) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v19, v20) )
          __debugbreak();
      }
      entityLoDs->array[(unsigned __int64)(unsigned int)v18 >> 5] |= 0x80000000 >> (v18 & 0x1F);
      ++v5;
    }
    while ( v5 < s_numForcedHighLoDEntities );
    v3 = v21;
    v4 = v22;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "SV_EntitiesLoD_AddFarImportantHighLoDEntities");
  if ( !entityLoDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 498, ASSERT_TYPE_ASSERT, "( entityLoDs )", (const char *)&queryFormat, "entityLoDs") )
    __debugbreak();
  if ( (!Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) || g_svSnapshotData.forceNetfieldLoD == 1 || Com_FrontEnd_IsInFrontEnd()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 499, ASSERT_TYPE_ASSERT, "( SV_EntitiesLoD_UseDynamicLoD() )", (const char *)&queryFormat, "SV_EntitiesLoD_UseDynamicLoD()") )
    __debugbreak();
  G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs(v3, entityLoDs);
  SV_EntitiesLoD_AddImportantDistanceEntitiesForClient(v3, entityLoDs);
  SV_EntitiesLoD_AddOtherClientsLookingAtClient(v3, entityLoDs);
  SV_EntitiesLoD_AddVisibleClients(v3, entityLoDs);
  Sys_ProfEndNamedEvent();
  if ( v4 != 2047 )
    bitarray_base<bitarray<2048>>::setBit(entityLoDs, v4);
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_EntitiesLoD_PrecomputeSharedDataForAllClients
==============
*/
void SV_EntitiesLoD_PrecomputeSharedDataForAllClients(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  s_numImportantDistanceLoDEntities = 0;
  G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients();
  v0 = DVARBOOL_sv_netfieldHighLoDMissilesEnable;
  if ( !DVARBOOL_sv_netfieldHighLoDMissilesEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_netfieldHighLoDMissilesEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    SV_EntitiesLoD_SetupImportantMissileEntitiesForAllClients();
  v1 = DVARBOOL_sv_netfieldHighLoDScriptablesEnable;
  if ( !DVARBOOL_sv_netfieldHighLoDScriptablesEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_netfieldHighLoDScriptablesEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    SV_EntitiesLoD_SetupImportantScriptableEntitiesForAllClients();
}

/*
==============
SV_EntitiesLoD_SetupImportantMissileEntitiesForAllClients
==============
*/
void SV_EntitiesLoD_SetupImportantMissileEntitiesForAllClients()
{
  const bitarray<2048> *MissileEntities; 
  __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  const bitarray<2048> *MissileEventEntities; 

  Sys_ProfBeginNamedEvent(0xFF808080, "SV_EntitiesLoD_SetupImportantMissileEntitiesForAllClients");
  MissileEntities = GMissile::GetMissileEntities();
  MissileEventEntities = GMissile::GetMissileEventEntities();
  LODWORD(v1) = 0;
  v2 = MissileEntities->array[0];
  while ( v2 )
  {
LABEL_5:
    v3 = __lzcnt(v2);
    v4 = v3 + 32 * v1;
    if ( v3 >= 0x20 )
    {
      LODWORD(v10) = 32;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v3)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v3);
    if ( (v4 > 0x7FFFFFFF || v4 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)(v3 + 32 * v1), "unsigned", v4) )
      __debugbreak();
    SV_EntitiesLoD_SetupImportantMissileEntityForAllClients(v3 + 32 * v1);
  }
  while ( 1 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x40 )
      break;
    v2 = MissileEntities->array[v1];
    if ( v2 )
      goto LABEL_5;
  }
  v5 = MissileEventEntities->array[0];
  LODWORD(v6) = 0;
  while ( v5 )
  {
LABEL_20:
    v7 = __lzcnt(v5);
    v8 = v7 + 32 * v6;
    if ( v7 >= 0x20 )
    {
      LODWORD(v10) = 32;
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v5 &= ~(0x80000000 >> v7);
    if ( (v8 > 0x7FFFFFFF || v8 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)(v7 + 32 * v6), "unsigned", v8) )
      __debugbreak();
    SV_EntitiesLoD_SetupImportantMissileEntityForAllClients(v7 + 32 * v6);
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x40 )
      break;
    v5 = MissileEventEntities->array[v6];
    if ( v5 )
      goto LABEL_20;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_EntitiesLoD_SetupImportantMissileEntityForAllClients
==============
*/
void SV_EntitiesLoD_SetupImportantMissileEntityForAllClients(const __int16 entNum)
{
  gentity_s *v2; 
  GWeaponMap *Instance; 
  __int64 v6; 

  v2 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[entNum];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 204, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  LODWORD(Instance) = BgWeaponMap::GetWeapon(Instance, v2->s.weaponHandle)->weaponIdx;
  if ( (unsigned int)Instance > bg_lastParsedWeaponIndex )
  {
    LODWORD(v6) = (_DWORD)Instance;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v6, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  Instance = (GWeaponMap *)(unsigned __int16)Instance;
  if ( !bg_weaponDefs[(unsigned __int16)Instance] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  _RAX = bg_weaponDefs[(_QWORD)Instance];
  if ( _RAX )
  {
    if ( _RAX->networkLODRangeOverride )
    {
      __asm { vmovss  xmm1, dword ptr [rax+1F0h]; radius }
      SV_EntitiesLOD_SetupImportantDistanceEntityForAllClients(entNum, *(double *)&_XMM1, &v2->r.currentOrigin);
    }
  }
}

/*
==============
SV_EntitiesLoD_SetupImportantScriptableEntitiesForAllClients
==============
*/
void SV_EntitiesLoD_SetupImportantScriptableEntitiesForAllClients()
{
  const bitarray<2048> *NetworkLODRangeOverrideEntities; 
  __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  gentity_s *v5; 
  unsigned int ScriptableIndexForEntityNum; 
  __int64 v9; 
  __int64 v10; 

  Sys_ProfBeginNamedEvent(0xFF808080, "SV_EntitiesLoD_SetupImportantScriptableEntitiesForAllClients");
  NetworkLODRangeOverrideEntities = ScriptableSv_GetNetworkLODRangeOverrideEntities();
  LODWORD(v1) = 0;
  v2 = NetworkLODRangeOverrideEntities->array[0];
  while ( v2 )
  {
LABEL_5:
    v3 = __lzcnt(v2);
    v4 = v3 + 32 * v1;
    if ( v3 >= 0x20 )
    {
      LODWORD(v10) = 32;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v3)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v3);
    if ( (v4 > 0x7FFFFFFF || v4 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)(v3 + 32 * v1), "unsigned", v4) )
      __debugbreak();
    v5 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[(__int16)v4];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 255, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    ScriptableIndexForEntityNum = ScriptableSv_GetScriptableIndexForEntityNum((__int16)v4);
    if ( ScriptableIndexForEntityNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 259, ASSERT_TYPE_ASSERT, "( scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX )", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
      __debugbreak();
    _RSI = ScriptableSv_GetDef(ScriptableIndexForEntityNum);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 263, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
      __debugbreak();
    if ( !_RSI->networkLODRangeOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 264, ASSERT_TYPE_ASSERT, "( scriptableDef->networkLODRangeOverride )", (const char *)&queryFormat, "scriptableDef->networkLODRangeOverride") )
      __debugbreak();
    __asm { vmovss  xmm1, dword ptr [rsi+60h]; radius }
    SV_EntitiesLOD_SetupImportantDistanceEntityForAllClients(v4, *(double *)&_XMM1, &v5->r.currentOrigin);
  }
  while ( 1 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x40 )
      break;
    v2 = NetworkLODRangeOverrideEntities->array[v1];
    if ( v2 )
      goto LABEL_5;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_EntitiesLoD_UpdateForcedHighLoDEntitiesList
==============
*/
void SV_EntitiesLoD_UpdateForcedHighLoDEntitiesList(void)
{
  int v0; 
  SvGameGlobals *SvGameGlobalsCommon; 
  __int64 i; 
  gentity_s *v3; 
  __int16 eType; 
  unsigned int ScriptableIndexForEntity; 
  const ScriptableDef *Def; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int16 number; 
  __int64 v14; 
  __int64 v15; 

  if ( (!Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) || g_svSnapshotData.forceNetfieldLoD == 1 || Com_FrontEnd_IsInFrontEnd()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 165, ASSERT_TYPE_ASSERT, "( SV_EntitiesLoD_UseDynamicLoD() )", (const char *)&queryFormat, "SV_EntitiesLoD_UseDynamicLoD()") )
    __debugbreak();
  v0 = 0;
  s_numForcedHighLoDEntities = 0;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
    __debugbreak();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( SvGameGlobalsCommon->num_entities > 0 )
  {
    for ( i = 0i64; ; ++i )
    {
      v3 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[i];
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 101, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( !SV_SnapshotMP_CanClientsSeeEntity(v3) )
        goto LABEL_46;
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v3->s.lerp.eFlags, ACTIVE, 0x1Eu) )
        goto LABEL_38;
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( (v3->flags.m_flags[1] & 0x20) != 0 )
        goto LABEL_38;
      eType = v3->s.eType;
      if ( eType != 6 )
        break;
      if ( (unsigned __int16)(v3->s.un.scriptMoverType - 9) <= 1u )
        goto LABEL_38;
      ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(v3);
      if ( ScriptableIndexForEntity != -1 )
      {
        Def = ScriptableSv_GetDef(ScriptableIndexForEntity);
        if ( Def )
        {
          if ( (Def->flags & 0x200000) != 0 )
            goto LABEL_38;
        }
      }
LABEL_46:
      if ( ++v0 >= SvGameGlobalsCommon->num_entities )
        return;
    }
    if ( eType < 29 )
      goto LABEL_46;
    v7 = eType - 29;
    if ( v7 >= 0xE3 )
    {
      LODWORD(v15) = 227;
      LODWORD(v14) = eType - 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 138, ASSERT_TYPE_ASSERT, "(unsigned)( eventId ) < (unsigned)( EV_MAX_EVENTS )", "eventId doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v8 = v7 - 154;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 40;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
              goto LABEL_46;
          }
        }
      }
    }
LABEL_38:
    if ( v0 != v3->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 175, ASSERT_TYPE_ASSERT, "( i == ent->s.number )", (const char *)&queryFormat, "i == ent->s.number") )
      __debugbreak();
    v12 = s_numForcedHighLoDEntities;
    if ( s_numForcedHighLoDEntities >= 0x800 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 176, ASSERT_TYPE_ASSERT, "( s_numForcedHighLoDEntities < ( sizeof( *array_counter( s_forcedHighLoDEntities ) ) + 0 ) )", (const char *)&queryFormat, "s_numForcedHighLoDEntities < ARRAY_COUNT( s_forcedHighLoDEntities )") )
        __debugbreak();
      v12 = s_numForcedHighLoDEntities;
    }
    number = v3->s.number;
    s_numForcedHighLoDEntities = v12 + 1;
    s_forcedHighLoDEntities[v12] = number;
    goto LABEL_46;
  }
}

/*
==============
SV_EntitiesLoD_UseDynamicLoD
==============
*/
bool SV_EntitiesLoD_UseDynamicLoD()
{
  return Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) && g_svSnapshotData.forceNetfieldLoD != 1 && !Com_FrontEnd_IsInFrontEnd();
}

/*
==============
SV_EntitiesLoD_UseLowLodClientEntityEvents
==============
*/
bool SV_EntitiesLoD_UseLowLodClientEntityEvents()
{
  const dvar_t *v0; 
  int integer; 
  int v2; 
  const dvar_t *v3; 
  __int64 v5; 

  v0 = DVARINT_sv_useLowLodEntityEvents;
  if ( !DVARINT_sv_useLowLodEntityEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_useLowLodEntityEvents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  if ( integer )
  {
    v2 = integer - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
      {
        v3 = DVARINT_sv_useLowLodEntityEvents;
        if ( !DVARINT_sv_useLowLodEntityEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_useLowLodEntityEvents") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v3);
        LODWORD(v5) = v3->current.integer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 92, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown value for sv_useLowLodEntityEvents %d", v5) )
          __debugbreak();
      }
      return 0;
    }
    return 1;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)256) || g_svSnapshotData.forceNetfieldLoD == 1 )
      return 0;
    return !Com_FrontEnd_IsInFrontEnd();
  }
}

/*
==============
SV_EntitiesLoD_Validate
==============
*/
void SV_EntitiesLoD_Validate(const __int16 clientEntity, const EntityLoDs *const entityLoDs)
{
  const dvar_t *v2; 
  unsigned int v4; 
  SvGameGlobals *SvGameGlobalsCommon; 
  unsigned int v6; 
  __int16 v7; 
  __int64 v8; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  __int64 v10; 
  __int64 v11; 

  v2 = DVARBOOL_sv_netfieldHighLoDValidation;
  if ( !DVARBOOL_sv_netfieldHighLoDValidation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_netfieldHighLoDValidation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v4 = 0;
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    v6 = 0;
    if ( s_numForcedHighLoDEntities )
    {
      do
      {
        v7 = s_forcedHighLoDEntities[v6];
        if ( v7 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 640, ASSERT_TYPE_ASSERT, "( entityNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
          __debugbreak();
        if ( (unsigned int)v7 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v7 & 0x1F)) & entityLoDs->array[(unsigned __int64)(unsigned int)v7 >> 5]) == 0 )
          G_Debug_PrintEntityLineWithMessage(0x20000, &SvGameGlobalsCommon->gentities[v7].s, "is in s_forcedHighLoDEntities but missing from entityLoDs");
        ++v6;
      }
      while ( v6 < s_numForcedHighLoDEntities );
      v4 = 0;
    }
    if ( SvGameGlobalsCommon->num_entities >= 0x800u )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = SvGameGlobalsCommon->num_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_entities_lod.cpp", 647, ASSERT_TYPE_ASSERT, "(unsigned)( sv->num_entities ) < (unsigned)( ( 2048 ) )", "sv->num_entities doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( SvGameGlobalsCommon->num_entities )
    {
      do
      {
        v8 = v4;
        p_eFlags = &SvGameGlobalsCommon->gentities[v8].s.lerp.eFlags;
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 0x1Eu) )
        {
          if ( v4 >= 0x800 )
          {
            LODWORD(v11) = 2048;
            LODWORD(v10) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v4 & 0x1F)) & entityLoDs->array[(unsigned __int64)v4 >> 5]) == 0 )
            G_Debug_PrintEntityLineWithMessage(0x20000, &SvGameGlobalsCommon->gentities[v8].s, "is NEVERCHANGES but missing from entityLoDs");
        }
        ++v4;
      }
      while ( v4 < SvGameGlobalsCommon->num_entities );
    }
  }
}

