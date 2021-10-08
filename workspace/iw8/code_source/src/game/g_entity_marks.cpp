/*
==============
G_EntityMarks_NotifyEntityMarks
==============
*/

void __fastcall G_EntityMarks_NotifyEntityMarks(const int clientNum)
{
  ?G_EntityMarks_NotifyEntityMarks@@YAXH@Z(clientNum);
}

/*
==============
G_EntityMarks_GetMarkType
==============
*/

bool __fastcall G_EntityMarks_GetMarkType(const scr_string_t markName, EntityMarkType *outMarkType)
{
  return ?G_EntityMarks_GetMarkType@@YA_NW4scr_string_t@@PEAW4EntityMarkType@@@Z(markName, outMarkType);
}

/*
==============
G_EntityMarks_GetMarkName
==============
*/

scr_string_t __fastcall G_EntityMarks_GetMarkName(const EntityMarkType markType)
{
  return ?G_EntityMarks_GetMarkName@@YA?AW4scr_string_t@@W4EntityMarkType@@@Z(markType);
}

/*
==============
G_EntityMarks_PrintMarkTypes
==============
*/

void G_EntityMarks_PrintMarkTypes(void)
{
  ?G_EntityMarks_PrintMarkTypes@@YAXXZ();
}

/*
==============
G_EntityMarks_GetActiveFilterType
==============
*/

EntityMarkFilterType __fastcall G_EntityMarks_GetActiveFilterType()
{
  return ?G_EntityMarks_GetActiveFilterType@@YA?AW4EntityMarkFilterType@@XZ();
}

/*
==============
G_EntityMarks_ProcessEntityMarks
==============
*/

void __fastcall G_EntityMarks_ProcessEntityMarks(const int clientNum)
{
  ?G_EntityMarks_ProcessEntityMarks@@YAXH@Z(clientNum);
}

/*
==============
G_EntityMarks_AddEntityIndexScriptArray
==============
*/
void G_EntityMarks_AddEntityIndexScriptArray(scrContext_t *scrContext, bitarray<2048> *bitset)
{
  unsigned int v2; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = bitset->array[0];
  LODWORD(v5) = 0;
  while ( v2 )
  {
LABEL_5:
    v6 = __lzcnt(v2);
    if ( v6 >= 0x20 )
    {
      LODWORD(v8) = 32;
      LODWORD(v7) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v6);
    Scr_AddInt(scrContext, v6 + 32 * v5);
    Scr_AddArray(scrContext);
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x40 )
      break;
    v2 = bitset->array[v5];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_EntityMarks_AddEntityScriptArray
==============
*/
void G_EntityMarks_AddEntityScriptArray(scrContext_t *scrContext, bitarray<2048> *bitset)
{
  unsigned int v2; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = bitset->array[0];
  LODWORD(v5) = 0;
  while ( v2 )
  {
LABEL_5:
    v6 = __lzcnt(v2);
    v7 = v6 + 32 * v5;
    if ( v6 >= 0x20 )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v6);
    if ( v7 >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(v8) = v6 + 32 * v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 312, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( iterator.index ) )", (const char *)&queryFormat, "G_IsEntityInUse( iterator.index )") )
      __debugbreak();
    Scr_AddEntityNum(scrContext, v7, ENTITY_CLASS_GENTITY);
    Scr_AddArray(scrContext);
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x40 )
      break;
    v2 = bitset->array[v5];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_EntityMarks_EntityMarkedForClient
==============
*/
void G_EntityMarks_EntityMarkedForClient(const int clientNum, const gclient_s *const client, const __int16 entityIndex, const vec3_t *playerOrigin, const vec3_t *playerDir, float *inOutMarkDistSq, EntityMarkFlags *outMarkFlags)
{
  __int64 v12; 
  gentity_s *GEntity; 
  __int64 team; 
  char v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  bool v20; 
  bool v21; 
  bool v23; 
  bool v39; 
  __int64 v58; 

  _R15 = inOutMarkDistSq;
  _RDI = client;
  v12 = clientNum;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 113, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  *outMarkFlags = MARK_FLAG_NONE;
  if ( G_IsEntityInUse(entityIndex) )
  {
    GEntity = G_GetGEntity(entityIndex);
    _RBP = GEntity;
    if ( GEntity->client != _RDI && (GEntity->r.svFlags & 1) == 0 )
    {
      if ( level.teammode == TEAMMODE_FFA )
      {
        if ( (unsigned int)((int)v12 >> 5) >= 7 )
        {
          LODWORD(v58) = (int)v12 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum >> 5 ) < (unsigned)( ( sizeof( *array_counter( ent->markFilterIn ) ) + 0 ) )", "clientNum >> 5 doesn't index ARRAY_COUNT( ent->markFilterIn )\n\t%i not in [0, %i)", v58, 7) )
            __debugbreak();
        }
        v16 = v12;
        v17 = v12;
      }
      else
      {
        team = _RDI->sess.cs.team;
        if ( !(_DWORD)team || (unsigned int)(team - 201) <= 1 )
          return;
        if ( (unsigned int)((int)team >> 5) >= 7 )
        {
          LODWORD(v58) = (int)team >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( clientTeam >> 5 ) < (unsigned)( ( sizeof( *array_counter( ent->markFilterIn ) ) + 0 ) )", "clientTeam >> 5 doesn't index ARRAY_COUNT( ent->markFilterIn )\n\t%i not in [0, %i)", v58, 7) )
            __debugbreak();
        }
        v16 = team;
        v17 = team;
      }
      v18 = v17 >> 5;
      v19 = 0x80000000 >> (v16 & 0x1F);
      v20 = (v19 & _RBP->markFilterIn[v18]) != 0;
      v21 = (v19 & _RBP->markFilterOut[v18]) == 0;
      if ( v20 )
      {
        LOBYTE(_ECX) = _RBP->markFlags;
        v23 = (_BYTE)_ECX == 0;
        if ( (_BYTE)_ECX )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+130h]
            vsubss  xmm3, xmm0, dword ptr [rdi+30h]
            vmovss  xmm1, dword ptr [rbp+134h]
            vsubss  xmm2, xmm1, dword ptr [rdi+34h]
            vmovss  xmm0, dword ptr [rbp+138h]
            vsubss  xmm4, xmm0, dword ptr [rdi+38h]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm5, xmm3, xmm0
            vxorps  xmm1, xmm1, xmm1
          }
          do
          {
            _ECX = (unsigned __int8)_ECX;
            __asm { tzcnt   edx, ecx }
            _RAX = (unsigned __int8)_EDX;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rax*4+0AB44h]
              vucomiss xmm0, xmm1
            }
            if ( v23 )
              *outMarkFlags |= (unsigned __int8)(1 << _EDX) | 0x80;
            else
              __asm { vcomiss xmm5, xmm0 }
            _ECX = (unsigned __int8)_ECX ^ (1 << _EDX);
            v23 = (_BYTE)_ECX == 0;
          }
          while ( (_BYTE)_ECX );
        }
      }
      else if ( v21 )
      {
        LOBYTE(_EBX) = _RBP->markFlags & _RDI->markState.entityMarkEnable;
        v39 = (_BYTE)_EBX == 0;
        if ( (_BYTE)_EBX )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+130h]
            vsubss  xmm3, xmm0, dword ptr [rdi+30h]
            vmovss  xmm1, dword ptr [rbp+134h]
            vmovss  xmm0, dword ptr [rbp+138h]
            vsubss  xmm2, xmm1, dword ptr [rdi+34h]
            vsubss  xmm4, xmm0, dword ptr [rdi+38h]
            vmovaps [rsp+0A8h+var_58], xmm6
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vmovaps [rsp+0A8h+var_68], xmm7
            vaddss  xmm6, xmm3, xmm0
            vxorps  xmm7, xmm7, xmm7
          }
          do
          {
            _EBX = (unsigned __int8)_EBX;
            __asm { tzcnt   esi, ebx }
            _RAX = (unsigned __int8)_ESI;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rax*4+0AB38h]
              vucomiss xmm0, xmm7
            }
            if ( v39 )
              goto LABEL_37;
            __asm { vcomiss xmm6, xmm0 }
            if ( v39 )
            {
LABEL_37:
              *outMarkFlags |= 1 << _ESI;
              if ( _RDI->markState.entityMarkTargetEnable )
                __asm { vcomiss xmm6, dword ptr [r15] }
            }
            _EBX ^= 1 << _ESI;
            v39 = (_BYTE)_EBX == 0;
          }
          while ( (_BYTE)_EBX );
          __asm
          {
            vmovaps xmm7, [rsp+0A8h+var_68]
            vmovaps xmm6, [rsp+0A8h+var_58]
          }
        }
      }
    }
  }
}

/*
==============
G_EntityMarks_EntityMarkedTarget
==============
*/
bool G_EntityMarks_EntityMarkedTarget(const gclient_s *const client, const vec3_t *playerOrigin, const vec3_t *playerDir, const EntityMarkType markType, const gentity_s *const ent)
{
  unsigned int Instance; 
  bool v16; 
  unsigned int m_serialAndIndex; 
  char v18; 
  bool v19; 
  bool v24; 
  bool v29; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  hknpBodyId result; 
  float tmin; 
  Bounds bounds; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  vec3_t out; 
  vec3_t outTransformedPoint; 
  vec4_t outInvQuat; 
  vec3_t position; 
  vec3_t outInvTrans; 
  vec4_t orientation; 
  vec3_t outHitPoint; 

  _RBX = ent;
  _RSI = playerOrigin;
  _RDI = client;
  _R14 = playerDir;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 45, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 46, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ent);
  v16 = Instance == -1;
  if ( Instance == -1 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+118h]
      vmovsd  xmm1, qword ptr [rbx+128h]
      vmovups xmmword ptr [rsp+180h+bounds.midPoint], xmm0
      vmovss  xmm0, dword ptr [rsi]
      vmovsd  qword ptr [rsp+180h+bounds.halfSize+4], xmm1
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbp+80h+outTransformedPoint], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+80h+outTransformedPoint+4], xmm1
      vmovss  xmm1, dword ptr [r14]
      vmovss  dword ptr [rbp+80h+outTransformedPoint+8], xmm0
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rbp+80h+out], xmm1
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  dword ptr [rbp+80h+out+4], xmm0
      vmovss  dword ptr [rbp+80h+out+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+180h+var_40], xmm6
      vmovaps [rsp+180h+var_50], xmm7
      vmovaps [rsp+180h+var_60], xmm8
      vmovaps [rsp+180h+var_70], xmm9
    }
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( !g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", 0) )
      __debugbreak();
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, Instance, 0)->m_serialAndIndex;
    if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 60, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( physBodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( physBodyId )") )
      __debugbreak();
    Physics_GetRigidBodyAABB(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &aabbMin, &aabbMax, 0);
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+180h+aabbMin]
      vmovss  xmm9, dword ptr [rbp+80h+aabbMax]
      vcomiss xmm8, xmm9
    }
    if ( !(v18 | v19) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm9, xmm9
        vmovsd  [rsp+180h+var_140], xmm0
        vcvtss2sd xmm1, xmm8, xmm8
        vmovsd  [rsp+180h+var_148], xmm1
      }
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", v77, v80);
      v18 = 0;
      v19 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+180h+aabbMin+4]
      vmovss  xmm7, dword ptr [rbp+80h+aabbMax+4]
      vcomiss xmm6, xmm7
    }
    if ( !(v18 | v19) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+180h+var_140], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+180h+var_148], xmm1
      }
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v78, v81);
      v18 = 0;
      v19 = !v29;
      if ( v29 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+180h+aabbMin+8]
      vmovss  xmm5, dword ptr [rbp+80h+aabbMax+8]
      vcomiss xmm4, xmm5
    }
    if ( !(v18 | v19) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm5, xmm5
        vmovsd  [rsp+180h+var_140], xmm0
        vcvtss2sd xmm1, xmm4, xmm4
        vmovsd  [rsp+180h+var_148], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v79, v82) )
        __debugbreak();
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+180h+aabbMin+8]
        vmovss  xmm5, dword ptr [rbp+80h+aabbMax+8]
      }
    }
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmovss  xmm9, dword ptr [rbp+80h+aabbMax]
      vaddss  xmm0, xmm9, dword ptr [rsp+180h+aabbMin]
      vmovss  xmm7, dword ptr [rbp+80h+aabbMax+4]
      vmulss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rsp+180h+bounds.midPoint], xmm0
      vaddss  xmm0, xmm7, dword ptr [rsp+180h+aabbMin+4]
      vmulss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsp+180h+bounds.midPoint+4], xmm1
      vsubss  xmm1, xmm9, dword ptr [rsp+180h+aabbMin]
      vaddss  xmm2, xmm5, xmm4
      vmulss  xmm0, xmm2, xmm3
      vmulss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+180h+bounds.midPoint+8], xmm0
      vsubss  xmm0, xmm7, dword ptr [rsp+180h+aabbMin+4]
      vmulss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsp+180h+bounds.halfSize], xmm2
      vsubss  xmm2, xmm5, xmm4
      vmulss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+180h+bounds.halfSize+8], xmm0
      vmovss  dword ptr [rsp+180h+bounds.halfSize+4], xmm1
    }
    Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &orientation);
    QuatTrans_Inverse(&orientation, &position, &outInvQuat, &outInvTrans);
    QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, _RSI, &outTransformedPoint);
    QuatTransform(&outInvQuat, _R14, &out);
    __asm
    {
      vmovaps xmm9, [rsp+180h+var_70]
      vmovaps xmm8, [rsp+180h+var_60]
      vmovaps xmm7, [rsp+180h+var_50]
      vmovaps xmm6, [rsp+180h+var_40]
    }
  }
  _RAX = (unsigned __int8)markType;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vmovss  xmm2, dword ptr [rdi+rax*4+0AB20h]
    vucomiss xmm2, xmm5
  }
  if ( v16 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+180h+bounds.halfSize+8]
      vmovss  xmm3, dword ptr [rsp+180h+bounds.halfSize+4]
      vmovss  xmm1, dword ptr [rsp+180h+bounds.halfSize]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+bounds.halfSize]
      vmaxss  xmm1, xmm0, xmm2
      vmovss  xmm0, dword ptr [rsp+180h+bounds.halfSize+4]
      vmaxss  xmm3, xmm0, xmm2
      vmovss  xmm0, dword ptr [rsp+180h+bounds.halfSize+8]
      vmaxss  xmm4, xmm0, xmm2
      vmovss  dword ptr [rsp+180h+bounds.halfSize+8], xmm4
      vmovss  dword ptr [rsp+180h+bounds.halfSize], xmm1
      vmovss  dword ptr [rsp+180h+bounds.halfSize+4], xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+rax*4+0AB2Ch]
    vucomiss xmm0, xmm5
  }
  if ( !v16 )
  {
    __asm
    {
      vminss  xmm1, xmm1, xmm0
      vminss  xmm3, xmm3, xmm0
      vminss  xmm4, xmm4, xmm0
      vmovss  dword ptr [rsp+180h+bounds.halfSize], xmm1
      vmovss  dword ptr [rsp+180h+bounds.halfSize+4], xmm3
      vmovss  dword ptr [rsp+180h+bounds.halfSize+8], xmm4
    }
  }
  if ( ent->s.number == _RDI->markState.entityMarkTarget )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@40a00000
      vaddss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rsp+180h+bounds.halfSize], xmm0
      vaddss  xmm0, xmm4, xmm2
      vaddss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rsp+180h+bounds.halfSize+8], xmm0
      vmovss  dword ptr [rsp+180h+bounds.halfSize+4], xmm1
    }
  }
  return IntersectRayBounds(&outTransformedPoint, &out, &bounds, &tmin, &outHitPoint);
}

/*
==============
G_EntityMarks_GetActiveFilterType
==============
*/
bool G_EntityMarks_GetActiveFilterType()
{
  return level.teammode == TEAMMODE_FFA;
}

/*
==============
G_EntityMarks_GetMarkName
==============
*/
__int64 G_EntityMarks_GetMarkName(const EntityMarkType markType)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)markType >= ENT_MARK_TYPE_COUNT )
  {
    v4 = 3;
    v3 = (unsigned __int8)markType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( markType ) < (unsigned)( ( sizeof( *array_counter( ENTITY_MARK_NAMES ) ) + 0 ) )", "markType doesn't index ARRAY_COUNT( ENTITY_MARK_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return *(unsigned int *)ENTITY_MARK_NAMES[(unsigned __int8)markType];
}

/*
==============
G_EntityMarks_GetMarkType
==============
*/
char G_EntityMarks_GetMarkType(const scr_string_t markName, EntityMarkType *outMarkType)
{
  __int64 v2; 

  v2 = 0i64;
  while ( markName != *ENTITY_MARK_NAMES[v2] )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 3 )
      return 0;
  }
  *outMarkType = v2;
  return 1;
}

/*
==============
G_EntityMarks_NotifyEntityMarks
==============
*/
void G_EntityMarks_NotifyEntityMarks(const int clientNum)
{
  gentity_s *GEntity; 
  gclient_s *client; 
  unsigned int v3; 
  bitarray<2048> *v4; 
  unsigned int v5; 
  unsigned int v6; 
  bitarray<2048> *v7; 
  bitarray<2048> *v8; 
  scrContext_t *v9; 
  unsigned int v10; 
  bitarray<2048> *v11; 
  unsigned int v12; 
  bitarray<2048> *v13; 
  unsigned int v14; 
  bitarray<2048> *v15; 
  bitarray<2048> *p_entityMarkAddedBits; 
  unsigned int v17; 
  unsigned int v18; 
  bitarray<2048> *p_entityMarkChangedBits; 
  unsigned int v20; 
  bitarray<2048> *v21; 
  unsigned int v22; 
  bitarray<2048> *p_entityMarkRemovedBits; 
  scrContext_t *v24; 
  __int16 entityMarkTarget; 

  GEntity = G_GetGEntity(clientNum);
  client = GEntity->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 337, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  if ( client->markState.entityMarkAdded || client->markState.entityMarkChanged || client->markState.entityMarkRemoved )
  {
    v9 = ScriptContext_Server();
    if ( client->markState.entityMarkAdded || client->markState.entityMarkChanged )
    {
      v10 = 0;
      p_entityMarkAddedBits = &client->markState.entityMarkAddedBits;
      v17 = 0;
      while ( !p_entityMarkAddedBits->array[0] )
      {
        ++v17;
        p_entityMarkAddedBits = (bitarray<2048> *)((char *)p_entityMarkAddedBits + 4);
        if ( v17 >= 0x40 )
        {
          v18 = 0;
          p_entityMarkChangedBits = &client->markState.entityMarkChangedBits;
          while ( !p_entityMarkChangedBits->array[0] )
          {
            ++v18;
            p_entityMarkChangedBits = (bitarray<2048> *)((char *)p_entityMarkChangedBits + 4);
            if ( v18 >= 0x40 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 348, ASSERT_TYPE_ASSERT, "( ms.entityMarkAddedBits.anyBitsOn() || ms.entityMarkChangedBits.anyBitsOn() )", (const char *)&queryFormat, "ms.entityMarkAddedBits.anyBitsOn() || ms.entityMarkChangedBits.anyBitsOn()") )
                __debugbreak();
              goto LABEL_48;
            }
          }
          break;
        }
      }
LABEL_48:
      Scr_MakeArray(v9);
      G_EntityMarks_AddEntityScriptArray(v9, &client->markState.entityMarkAddedBits);
      v13 = &client->markState.entityMarkChangedBits;
      G_EntityMarks_AddEntityScriptArray(v9, &client->markState.entityMarkChangedBits);
    }
    else
    {
      v10 = 0;
      v11 = &client->markState.entityMarkAddedBits;
      v12 = 0;
      while ( !v11->array[0] )
      {
        ++v12;
        v11 = (bitarray<2048> *)((char *)v11 + 4);
        if ( v12 >= 0x40 )
          goto LABEL_33;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 356, ASSERT_TYPE_ASSERT, "( !ms.entityMarkAddedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkAddedBits.anyBitsOn()") )
        __debugbreak();
LABEL_33:
      v13 = &client->markState.entityMarkChangedBits;
      v14 = 0;
      v15 = &client->markState.entityMarkChangedBits;
      while ( !v15->array[0] )
      {
        ++v14;
        v15 = (bitarray<2048> *)((char *)v15 + 4);
        if ( v14 >= 0x40 )
          goto LABEL_36;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 357, ASSERT_TYPE_ASSERT, "( !ms.entityMarkChangedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkChangedBits.anyBitsOn()") )
        __debugbreak();
LABEL_36:
      Scr_AddUndefined(v9);
    }
    if ( client->markState.entityMarkChanged )
    {
      v20 = 0;
      v21 = v13;
      while ( !v21->array[0] )
      {
        ++v20;
        v21 = (bitarray<2048> *)((char *)v21 + 4);
        if ( v20 >= 0x40 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 364, ASSERT_TYPE_ASSERT, "( ms.entityMarkChangedBits.anyBitsOn() )", (const char *)&queryFormat, "ms.entityMarkChangedBits.anyBitsOn()") )
            __debugbreak();
          break;
        }
      }
      Scr_MakeArray(v9);
      G_EntityMarks_AddEntityIndexScriptArray(v9, v13);
    }
    else
    {
      v22 = 0;
      while ( !v13->array[0] )
      {
        ++v22;
        v13 = (bitarray<2048> *)((char *)v13 + 4);
        if ( v22 >= 0x40 )
          goto LABEL_62;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 370, ASSERT_TYPE_ASSERT, "( !ms.entityMarkChangedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkChangedBits.anyBitsOn()") )
        __debugbreak();
LABEL_62:
      Scr_AddUndefined(v9);
    }
    p_entityMarkRemovedBits = &client->markState.entityMarkRemovedBits;
    if ( client->markState.entityMarkRemoved )
    {
      while ( !p_entityMarkRemovedBits->array[0] )
      {
        ++v10;
        p_entityMarkRemovedBits = (bitarray<2048> *)((char *)p_entityMarkRemovedBits + 4);
        if ( v10 >= 0x40 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 377, ASSERT_TYPE_ASSERT, "( ms.entityMarkRemovedBits.anyBitsOn() )", (const char *)&queryFormat, "ms.entityMarkRemovedBits.anyBitsOn()") )
            __debugbreak();
          break;
        }
      }
      Scr_MakeArray(v9);
      G_EntityMarks_AddEntityIndexScriptArray(v9, &client->markState.entityMarkRemovedBits);
    }
    else
    {
      while ( !p_entityMarkRemovedBits->array[0] )
      {
        ++v10;
        p_entityMarkRemovedBits = (bitarray<2048> *)((char *)p_entityMarkRemovedBits + 4);
        if ( v10 >= 0x40 )
          goto LABEL_74;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 383, ASSERT_TYPE_ASSERT, "( !ms.entityMarkRemovedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkRemovedBits.anyBitsOn()") )
        __debugbreak();
LABEL_74:
      Scr_AddUndefined(v9);
    }
    *(_WORD *)&client->markState.entityMarkRemoved = 0;
    client->markState.entityMarkAdded = 0;
    GScr_Notify(GEntity, scr_const.marks_changed, 3u);
  }
  else
  {
    v3 = 0;
    v4 = &client->markState.entityMarkRemovedBits;
    v5 = 0;
    while ( !v4->array[0] )
    {
      ++v5;
      v4 = (bitarray<2048> *)((char *)v4 + 4);
      if ( v5 >= 0x40 )
        goto LABEL_13;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 395, ASSERT_TYPE_ASSERT, "( !ms.entityMarkRemovedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkRemovedBits.anyBitsOn()") )
      __debugbreak();
LABEL_13:
    v6 = 0;
    v7 = &client->markState.entityMarkChangedBits;
    while ( !v7->array[0] )
    {
      ++v6;
      v7 = (bitarray<2048> *)((char *)v7 + 4);
      if ( v6 >= 0x40 )
        goto LABEL_19;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 396, ASSERT_TYPE_ASSERT, "( !ms.entityMarkChangedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkChangedBits.anyBitsOn()") )
      __debugbreak();
LABEL_19:
    v8 = &client->markState.entityMarkAddedBits;
    while ( !v8->array[0] )
    {
      ++v3;
      v8 = (bitarray<2048> *)((char *)v8 + 4);
      if ( v3 >= 0x40 )
        goto LABEL_76;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 397, ASSERT_TYPE_ASSERT, "( !ms.entityMarkAddedBits.anyBitsOn() )", (const char *)&queryFormat, "!ms.entityMarkAddedBits.anyBitsOn()") )
      __debugbreak();
  }
LABEL_76:
  if ( client->markState.entityMarkTargetChanged )
  {
    v24 = ScriptContext_Server();
    entityMarkTarget = client->markState.entityMarkTarget;
    if ( entityMarkTarget == 2047 )
      Scr_AddUndefined(v24);
    else
      Scr_AddEntityNum(v24, entityMarkTarget, ENTITY_CLASS_GENTITY);
    GScr_Notify(GEntity, scr_const.marks_target_changed, 1u);
    client->markState.entityMarkTargetChanged = 0;
  }
}

/*
==============
G_EntityMarks_PrintMarkTypes
==============
*/
void G_EntityMarks_PrintMarkTypes(void)
{
  unsigned int v0; 
  scr_string_t **v1; 
  const char *v2; 

  Com_Printf(16, ">---- Begin Valid Entity Marks:\n");
  v0 = 0;
  v1 = (scr_string_t **)ENTITY_MARK_NAMES;
  do
  {
    v2 = SL_ConvertToString(**v1);
    Com_Printf(16, "[%d] %s\n", v0++, v2);
    ++v1;
  }
  while ( v0 < 3 );
  Com_Printf(16, "<---- End Valid Entity Marks\n");
}

/*
==============
G_EntityMarks_ProcessEntityMarks
==============
*/
void G_EntityMarks_ProcessEntityMarks(const int clientNum)
{
  gentity_s *GEntity; 
  gclient_s *client; 
  __int16 v7; 
  EntityMarkFlags *entityMarkFlags; 
  EntityMarkFlags v9; 
  EntityMarkFlags v10; 
  __int64 v14; 
  __int64 v15; 
  EntityMarkFlags outMarkFlags[4]; 
  float inOutMarkDistSq; 
  __int64 v18; 
  vec3_t outForward; 
  vec3_t outOrigin; 
  char v21; 
  void *retaddr; 

  _RAX = &retaddr;
  v18 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF9ACD32, "EntityMarks");
  GEntity = G_GetGEntity(clientNum);
  client = GEntity->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 237, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  [rsp+0C8h+var_74], xmm6
  }
  *(_WORD *)&client->markState.entityMarkAdded = 0;
  client->markState.entityMarkChanged = 0;
  *(_QWORD *)client->markState.entityMarkAddedBits.array = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[2] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[4] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[6] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[8] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[10] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[12] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[14] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[16] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[18] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[20] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[22] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[24] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[26] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[28] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[30] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[32] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[34] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[36] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[38] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[40] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[42] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[44] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[46] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[48] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[50] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[52] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[54] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[56] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[58] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[60] = 0i64;
  *(_QWORD *)&client->markState.entityMarkAddedBits.array[62] = 0i64;
  *(_QWORD *)client->markState.entityMarkChangedBits.array = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[2] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[4] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[6] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[8] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[10] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[12] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[14] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[16] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[18] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[20] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[22] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[24] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[26] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[28] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[30] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[32] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[34] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[36] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[38] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[40] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[42] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[44] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[46] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[48] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[50] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[52] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[54] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[56] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[58] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[60] = 0i64;
  *(_QWORD *)&client->markState.entityMarkChangedBits.array[62] = 0i64;
  *(_QWORD *)client->markState.entityMarkRemovedBits.array = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[2] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[4] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[6] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[8] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[10] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[12] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[14] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[16] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[18] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[20] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[22] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[24] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[26] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[28] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[30] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[32] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[34] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[36] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[38] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[40] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[42] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[44] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[46] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[48] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[50] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[52] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[54] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[56] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[58] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[60] = 0i64;
  *(_QWORD *)&client->markState.entityMarkRemovedBits.array[62] = 0i64;
  client->markState.entityMarkTargetChanged = 0;
  G_Client_GetViewOrigin(&client->ps, &outOrigin);
  G_Client_GetViewDirection(GEntity, &outForward, NULL, NULL);
  v7 = 0;
  entityMarkFlags = client->markState.entityMarkFlags;
  do
  {
    G_EntityMarks_EntityMarkedForClient(clientNum, client, v7, &outOrigin, &outForward, &inOutMarkDistSq, outMarkFlags);
    v9 = *entityMarkFlags;
    v10 = outMarkFlags[0];
    if ( outMarkFlags[0] != *entityMarkFlags )
    {
      if ( outMarkFlags[0] )
      {
        if ( v9 )
        {
          if ( (unsigned int)v7 >= 0x800 )
          {
            LODWORD(v15) = 2048;
            LODWORD(v14) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
              __debugbreak();
          }
          client->markState.entityMarkChangedBits.array[(unsigned __int64)(unsigned int)v7 >> 5] |= 0x80000000 >> (v7 & 0x1F);
          client->markState.entityMarkChanged = 1;
        }
        else
        {
          if ( (unsigned int)v7 >= 0x800 )
          {
            LODWORD(v15) = 2048;
            LODWORD(v14) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
              __debugbreak();
          }
          client->markState.entityMarkAddedBits.array[(unsigned __int64)(unsigned int)v7 >> 5] |= 0x80000000 >> (v7 & 0x1F);
          client->markState.entityMarkAdded = 1;
        }
      }
      else
      {
        if ( v9 == MARK_FLAG_NONE )
        {
          LODWORD(v14) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_marks.cpp", 280, ASSERT_TYPE_ASSERT, "( curMarkFlags ) != ( EntityMarkFlags::MARK_FLAG_NONE )", "%s != %s\n\t%i, %i", "curMarkFlags", "EntityMarkFlags::MARK_FLAG_NONE", v14, 0i64) )
            __debugbreak();
        }
        if ( (unsigned int)v7 >= 0x800 )
        {
          LODWORD(v15) = 2048;
          LODWORD(v14) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
            __debugbreak();
        }
        client->markState.entityMarkRemovedBits.array[(unsigned __int64)(unsigned int)v7 >> 5] |= 0x80000000 >> (v7 & 0x1F);
        client->markState.entityMarkRemoved = 1;
      }
      *entityMarkFlags = v10;
      v9 = v10;
    }
    if ( v9 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0C8h+var_74]
        vcomiss xmm0, xmm6
      }
    }
    ++v7;
    ++entityMarkFlags;
  }
  while ( v7 < 2048 );
  if ( client->markState.entityMarkTarget != 2047 )
  {
    client->markState.entityMarkTargetChanged = 1;
    client->markState.entityMarkTarget = 2047;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v21;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

