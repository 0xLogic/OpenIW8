/*
==============
G_HudOutline_GetEntHudOutlineIndex
==============
*/

unsigned int __fastcall G_HudOutline_GetEntHudOutlineIndex(const gentity_s *ent)
{
  return ?G_HudOutline_GetEntHudOutlineIndex@@YAIPEBUgentity_s@@@Z(ent);
}

/*
==============
G_HudOutline_GetPerformanceData
==============
*/

void __fastcall G_HudOutline_GetPerformanceData(unsigned __int8 *outInUseCount)
{
  ?G_HudOutline_GetPerformanceData@@YAXAEAE@Z(outInUseCount);
}

/*
==============
G_HudOutline_FreeForEnt
==============
*/

void __fastcall G_HudOutline_FreeForEnt(gentity_s *ent)
{
  ?G_HudOutline_FreeForEnt@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_HudOutline_GetHudData
==============
*/

HudData *__fastcall G_HudOutline_GetHudData(gentity_s *ent)
{
  return ?G_HudOutline_GetHudData@@YAPEATHudData@@PEAUgentity_s@@@Z(ent);
}

/*
==============
G_HudOutline_DisableForClientMask
==============
*/

bool __fastcall G_HudOutline_DisableForClientMask(gentity_s *subjectEnt, ClientBits *subtractClientMask)
{
  return ?G_HudOutline_DisableForClientMask@@YA_NPEAUgentity_s@@UClientBits@@@Z(subjectEnt, subtractClientMask);
}

/*
==============
G_HudOutline_DumpOutlinedEntities
==============
*/

void G_HudOutline_DumpOutlinedEntities(void)
{
  ?G_HudOutline_DumpOutlinedEntities@@YAXXZ();
}

/*
==============
G_HudOutline_AddForNewClient
==============
*/

void __fastcall G_HudOutline_AddForNewClient(gentity_s *clientEnt)
{
  ?G_HudOutline_AddForNewClient@@YAXPEAUgentity_s@@@Z(clientEnt);
}

/*
==============
G_HudOutline_GetHudDataConst
==============
*/

const HudData *__fastcall G_HudOutline_GetHudDataConst(const gentity_s *ent)
{
  return ?G_HudOutline_GetHudDataConst@@YAPEBTHudData@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_HudOutline_IsEntHudOutlineEnabled
==============
*/

bool __fastcall G_HudOutline_IsEntHudOutlineEnabled(const gentity_s *ent)
{
  return ?G_HudOutline_IsEntHudOutlineEnabled@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_HudOutline_FreeForClient
==============
*/

void __fastcall G_HudOutline_FreeForClient(gentity_s *clientEnt)
{
  ?G_HudOutline_FreeForClient@@YAXPEAUgentity_s@@@Z(clientEnt);
}

/*
==============
G_HudOutline_EnableForClientMask
==============
*/

bool __fastcall G_HudOutline_EnableForClientMask(gentity_s *subjectEnt, ClientBits *addClientMask, const outline_client_data_t *clientData)
{
  return ?G_HudOutline_EnableForClientMask@@YA_NPEAUgentity_s@@UClientBits@@PEBUoutline_client_data_t@@@Z(subjectEnt, addClientMask, clientData);
}

/*
==============
G_HudOutline_AddForNewClient
==============
*/
void G_HudOutline_AddForNewClient(gentity_s *clientEnt)
{
  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 445, ASSERT_TYPE_ASSERT, "(clientEnt)", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  if ( !clientEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 446, ASSERT_TYPE_ASSERT, "(clientEnt->client)", (const char *)&queryFormat, "clientEnt->client") )
    __debugbreak();
  G_HudOutline_UpdateSingleClientBits(clientEnt->s.number, clientEnt->client);
}

/*
==============
G_HudOutline_CopyData
==============
*/
void G_HudOutline_CopyData(const outline_data_t *sourceData, outline_data_t *destData)
{
  __int64 v4; 

  if ( !sourceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 195, ASSERT_TYPE_ASSERT, "(sourceData)", (const char *)&queryFormat, "sourceData") )
    __debugbreak();
  if ( !destData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 196, ASSERT_TYPE_ASSERT, "(destData)", (const char *)&queryFormat, "destData") )
    __debugbreak();
  v4 = 0i64;
  destData->refCount = sourceData->refCount;
  destData->enabledForClientMask.array[0] = sourceData->enabledForClientMask.array[0];
  destData->enabledForClientMask.array[1] = sourceData->enabledForClientMask.array[1];
  destData->enabledForClientMask.array[2] = sourceData->enabledForClientMask.array[2];
  destData->enabledForClientMask.array[3] = sourceData->enabledForClientMask.array[3];
  destData->enabledForClientMask.array[4] = sourceData->enabledForClientMask.array[4];
  destData->enabledForClientMask.array[5] = sourceData->enabledForClientMask.array[5];
  for ( destData->enabledForClientMask.array[6] = sourceData->enabledForClientMask.array[6]; (unsigned int)v4 < level.maxclients; v4 = (unsigned int)(v4 + 1) )
    destData->clientData[v4] = sourceData->clientData[v4];
}

/*
==============
G_HudOutline_DisableForClientMask
==============
*/
char G_HudOutline_DisableForClientMask(gentity_s *subjectEnt, ClientBits *subtractClientMask)
{
  gentity_s *v3; 
  unsigned int EntHudOutlineIndex; 
  bool v5; 
  int v6; 
  gclient_s *clients; 
  unsigned int v8; 
  unsigned int v10; 
  unsigned int v12; 
  __int64 v13; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  unsigned int v27; 
  int v28; 
  unsigned int v29; 
  ClientBits *p_enabledForClientMask; 
  unsigned int maxclients; 
  int *p_refCount; 
  unsigned int i; 
  ClientBits *v35; 
  unsigned int v36; 
  int v37; 
  int *v38; 
  unsigned int v39; 
  int v40; 
  int j; 
  unsigned int v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int128 v47; 
  __int64 v48; 
  unsigned int v49; 
  outline_data_t destData; 

  v3 = subjectEnt;
  if ( !subjectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 548, ASSERT_TYPE_ASSERT, "(subjectEnt)", (const char *)&queryFormat, "subjectEnt") )
    __debugbreak();
  if ( !G_HudOutline_GetEntHudOutlineIndex(v3) )
    return 1;
  EntHudOutlineIndex = G_HudOutline_GetEntHudOutlineIndex(v3);
  if ( !EntHudOutlineIndex )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 234, ASSERT_TYPE_ASSERT, "(outlineIndex != 0)", (const char *)&queryFormat, "outlineIndex != 0");
    goto LABEL_9;
  }
  if ( EntHudOutlineIndex > 0x3F )
  {
    LODWORD(v43) = EntHudOutlineIndex;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 235, ASSERT_TYPE_ASSERT, "( outlineIndex ) <= ( (( 1 << 6 )-1) )", "outlineIndex not in [0, MAX_CLIENT_OUTLINES]\n\t%u not in [0, %u]", v43, 63);
LABEL_9:
    if ( v5 )
      __debugbreak();
  }
  G_HudOutline_CopyData((const outline_data_t *)&level.currentTriggerList[445].otherUseCount + EntHudOutlineIndex, &destData);
  v6 = 0;
  clients = level.clients;
  v8 = 0;
  if ( level.maxclients )
  {
    do
    {
      if ( v8 >= 0xE0 )
      {
        LODWORD(v44) = 224;
        LODWORD(v43) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v43, v44) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v8 & 0x1F)) & subtractClientMask->array[(unsigned __int64)v8 >> 5]) != 0 )
      {
        if ( !clients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 376, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
          __debugbreak();
        if ( clients->sess.connected == CON_CONNECTED )
        {
          v6 |= *(_DWORD *)&destData.clientData[v8] != 0;
          destData.clientData[v8] = 0;
        }
        else
        {
          bitarray_base<bitarray<224>>::resetBit(subtractClientMask, v8);
        }
      }
      ++v8;
      ++clients;
    }
    while ( v8 < level.maxclients );
    v3 = subjectEnt;
  }
  __asm { vmovups xmm1, xmmword ptr [rbp+310h+destData.enabledForClientMask.baseclass_0.array] }
  v10 = 0;
  __asm { vmovsd  xmm0, qword ptr [rbp+310h+destData.enabledForClientMask.baseclass_0.array+10h] }
  v12 = ~subtractClientMask->array[0];
  __asm { vmovups [rsp+410h+var_3B8], xmm1 }
  v13 = 0i64;
  __asm
  {
    vmovsd  [rsp+410h+var_3A8], xmm0
    vmovd   eax, xmm1
  }
  v15 = _EAX & v12;
  v16 = ~subtractClientMask->array[1];
  LODWORD(v47) = v15;
  v17 = v16 & DWORD1(v47);
  v18 = ~subtractClientMask->array[2];
  DWORD1(v47) = v17;
  v19 = v18 & DWORD2(v47);
  v20 = ~subtractClientMask->array[3];
  DWORD2(v47) = v19;
  v21 = v20 & HIDWORD(v47);
  v22 = ~subtractClientMask->array[4];
  HIDWORD(v47) = v21;
  v23 = v22 & v48;
  v24 = ~subtractClientMask->array[5];
  LODWORD(v48) = v23;
  v25 = v24 & HIDWORD(v48);
  v26 = ~subtractClientMask->array[6];
  HIDWORD(v48) = v25;
  v27 = v26 & destData.enabledForClientMask.array[6];
  v49 = v26 & destData.enabledForClientMask.array[6];
  while ( destData.enabledForClientMask.array[v13] == *(_DWORD *)((char *)&v47 + v13 * 4) )
  {
    ++v10;
    ++v13;
    if ( v10 >= 7 )
    {
      v28 = 0;
      goto LABEL_29;
    }
  }
  v28 = 1;
LABEL_29:
  if ( !(v6 | v28) )
    return 1;
  destData.enabledForClientMask.array[0] = v15;
  destData.enabledForClientMask.array[1] = v17;
  destData.enabledForClientMask.array[2] = v19;
  destData.enabledForClientMask.array[3] = v21;
  destData.enabledForClientMask.array[4] = v23;
  destData.enabledForClientMask.array[5] = v25;
  destData.enabledForClientMask.array[6] = v27;
  G_HudOutline_RemoveEntOutlineIndex(v3);
  v29 = 0;
  p_enabledForClientMask = &destData.enabledForClientMask;
  while ( !p_enabledForClientMask->array[0] )
  {
    ++v29;
    p_enabledForClientMask = (ClientBits *)((char *)p_enabledForClientMask + 4);
    if ( v29 >= 7 )
      goto LABEL_33;
  }
  maxclients = level.maxclients;
  p_refCount = &level.outlineData[0].refCount;
  for ( i = 0; i < 0x3F; ++i )
  {
    if ( *p_refCount < 0 )
    {
      LODWORD(v45) = *p_refCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 263, ASSERT_TYPE_ASSERT, "( outlineData->refCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "outlineData->refCount", "0", v45, 0i64) )
        __debugbreak();
      maxclients = level.maxclients;
    }
    v35 = &destData.enabledForClientMask;
    v36 = 0;
    while ( *(unsigned int *)((char *)v35->array + (char *)p_refCount - (char *)&destData.refCount) == v35->array[0] )
    {
      ++v36;
      v35 = (ClientBits *)((char *)v35 + 4);
      if ( v36 >= 7 )
      {
        v37 = 0;
        if ( !maxclients )
        {
LABEL_46:
          G_HudOutline_SetEntOutlineIndex(v3, i + 1);
          goto LABEL_33;
        }
        while ( p_refCount[v37 - 200] == *(_DWORD *)&destData.clientData[v37] )
        {
          if ( ++v37 >= maxclients )
            goto LABEL_46;
        }
        break;
      }
    }
    p_refCount += 209;
  }
  v38 = &level.outlineData[0].refCount;
  v39 = level.time + 1;
  v40 = -1;
  for ( j = 0; j < 63; ++j )
  {
    if ( *v38 < 0 )
    {
      LODWORD(v45) = *v38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 287, ASSERT_TYPE_ASSERT, "( outlineData->refCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "outlineData->refCount", "0", v45, 0i64) )
        __debugbreak();
    }
    if ( !*v38 && v38[8] < v39 )
    {
      v39 = v38[8];
      v40 = j;
    }
    v38 += 209;
  }
  if ( v40 >= 0 )
  {
    G_HudOutline_CopyData(&destData, &level.outlineData[v40]);
    level.mayhemEnts[209 * v40 - 12967].targetName = 0;
    v42 = v40 + 1;
    if ( G_HudOutline_GetRefCount(v40 + 1) )
    {
      LODWORD(v45) = G_HudOutline_GetRefCount(v42);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 622, ASSERT_TYPE_ASSERT, "( G_HudOutline_GetRefCount( outlineIndex ) ) == ( 0 )", "%s == %s\n\t%i, %i", "G_HudOutline_GetRefCount( outlineIndex )", "0", v45, 0i64) )
        __debugbreak();
    }
    G_HudOutline_SetEntOutlineIndex(v3, v42);
LABEL_33:
    G_HudOutline_UpdateClientBits();
    return 1;
  }
  G_Debug_PrintEntityDebugInfoToConsole(0, -1);
  G_HudOutline_DumpOutlinedEntities();
  Com_PrintError(15, "Error: HudOutlineDisableForClientMask() could not be applied because there are currently too many hud outline settings. Can we reduce color and depth test variations?\n");
  G_HudOutline_UpdateClientBits();
  return 0;
}

/*
==============
G_HudOutline_DumpOutlinedEntities
==============
*/
void G_HudOutline_DumpOutlinedEntities(void)
{
  gentity_s *v0; 
  int i; 
  unsigned int v2; 
  char *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  char *v7; 
  char *v8; 
  char v9; 
  signed __int64 v10; 
  __int64 v11; 
  char v12[1024]; 

  Com_Printf(15, "\n -- Begin HUD Outlined Entity Dump -- \n");
  Com_Printf(15, "DumpOutlinedEntities: Entity Number, HudOutlineInfoIndex, Ref Count, Client Mask(hex)\n");
  v0 = g_entities;
  for ( i = 0; i < level.num_entities; ++v0 )
  {
    v2 = G_HudOutline_GetHudData(v0)->data & 0x3F;
    if ( v2 )
    {
      v3 = v12;
      v4 = 836i64 * v2;
      v5 = 0i64;
      v6 = 7i64;
      do
      {
        v7 = j_va("%08X ", *(unsigned int *)((char *)&level.scriptPrintChannel + v4 + v5));
        v8 = v3;
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v7 - v3;
          do
          {
            *v8++ = v9;
            v9 = v8[v10];
          }
          while ( v9 );
        }
        v5 += 4i64;
        v3 = v8;
        --v6;
      }
      while ( v6 );
      *v8 = 0;
      LODWORD(v11) = *(int *)((char *)&level.currentTriggerListSize + v4);
      Com_Printf(15, "DumpOutlinedEntities: %d, %d, %d, %s\n", (unsigned int)i, v2, v11, v12);
    }
    ++i;
  }
  Com_Printf(15, "\n -- End HUD Outlined Entity Dump -- \n");
}

/*
==============
G_HudOutline_EnableForClientMask
==============
*/
char G_HudOutline_EnableForClientMask(gentity_s *subjectEnt, ClientBits *addClientMask, const outline_client_data_t *clientData)
{
  unsigned int EntHudOutlineIndex; 
  BOOL v7; 
  unsigned int v8; 
  bool v9; 
  int v10; 
  gclient_s *clients; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int *v14; 
  BOOL v15; 
  unsigned int v17; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  int v29; 
  unsigned int v30; 
  signed __int64 v31; 
  ClientBits *p_enabledForClientMask; 
  unsigned int v33; 
  ClientBits *v34; 
  unsigned int v35; 
  unsigned int v36; 
  int *p_refCount; 
  unsigned int v38; 
  int v39; 
  int i; 
  outline_data_t *v41; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  __int128 v49; 
  unsigned __int64 v50; 
  unsigned int v51; 
  outline_data_t destData; 

  if ( !subjectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 461, ASSERT_TYPE_ASSERT, "(subjectEnt)", (const char *)&queryFormat, "subjectEnt") )
    __debugbreak();
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 462, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  EntHudOutlineIndex = G_HudOutline_GetEntHudOutlineIndex(subjectEnt);
  v7 = EntHudOutlineIndex != 0;
  if ( EntHudOutlineIndex )
  {
    v8 = G_HudOutline_GetEntHudOutlineIndex(subjectEnt);
    if ( v8 )
    {
      if ( v8 <= 0x3F )
      {
LABEL_14:
        G_HudOutline_CopyData((const outline_data_t *)&level.currentTriggerList[445].otherUseCount + v8, &destData);
        goto LABEL_16;
      }
      LODWORD(v43) = v8;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 235, ASSERT_TYPE_ASSERT, "( outlineIndex ) <= ( (( 1 << 6 )-1) )", "outlineIndex not in [0, MAX_CLIENT_OUTLINES]\n\t%u not in [0, %u]", v43, 63);
    }
    else
    {
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 234, ASSERT_TYPE_ASSERT, "(outlineIndex != 0)", (const char *)&queryFormat, "outlineIndex != 0");
    }
    if ( v9 )
      __debugbreak();
    goto LABEL_14;
  }
  memset(&destData.refCount, 0, 32);
  memset_0(&destData, 0, 0x320ui64);
LABEL_16:
  v10 = 0;
  clients = level.clients;
  v12 = 0;
  v47 = 0;
  if ( level.maxclients )
  {
    while ( 1 )
    {
      if ( v12 >= 0xE0 )
      {
        LODWORD(v44) = 224;
        LODWORD(v43) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v43, v44) )
          __debugbreak();
      }
      v13 = 0x80000000 >> (v12 & 0x1F);
      v14 = &addClientMask->array[(unsigned __int64)v12 >> 5];
      if ( (v13 & *v14) == 0 )
        goto LABEL_30;
      if ( !clients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 376, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( clients->sess.connected != CON_CONNECTED )
        break;
      v15 = *clientData != *(_DWORD *)&destData.clientData[v12];
      destData.clientData[v12] = *clientData;
      v10 = v15 | v47;
      v47 |= v15;
LABEL_31:
      ++v12;
      ++clients;
      if ( v12 >= level.maxclients )
        goto LABEL_32;
    }
    if ( v12 >= 0xE0 )
    {
      LODWORD(v46) = 224;
      LODWORD(v45) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v45, v46) )
        __debugbreak();
    }
    *v14 &= ~v13;
LABEL_30:
    v10 = v47;
    goto LABEL_31;
  }
LABEL_32:
  __asm { vmovups xmm1, xmmword ptr [rbp+310h+destData.enabledForClientMask.baseclass_0.array] }
  v17 = addClientMask->array[0];
  __asm { vmovsd  xmm0, qword ptr [rbp+310h+destData.enabledForClientMask.baseclass_0.array+10h] }
  v19 = addClientMask->array[6] | destData.enabledForClientMask.array[6];
  __asm { vmovups [rsp+410h+var_3B0], xmm1 }
  v20 = addClientMask->array[1] | DWORD1(v49);
  v21 = addClientMask->array[2] | DWORD2(v49);
  v22 = addClientMask->array[3] | HIDWORD(v49);
  __asm { vmovsd  [rsp+410h+var_3A0], xmm0 }
  v23 = addClientMask->array[4] | v50;
  v24 = addClientMask->array[5] | HIDWORD(v50);
  __asm { vmovd   eax, xmm1 }
  v26 = _EAX | v17;
  *(_QWORD *)&v49 = __PAIR64__(v20, v26);
  v27 = 0;
  *((_QWORD *)&v49 + 1) = __PAIR64__(v22, v21);
  v28 = 0i64;
  v50 = __PAIR64__(v24, v23);
  v51 = v19;
  while ( destData.enabledForClientMask.array[v28] == *(_DWORD *)((char *)&v49 + v28 * 4) )
  {
    ++v27;
    ++v28;
    if ( v27 >= 7 )
    {
      v29 = 0;
      goto LABEL_37;
    }
  }
  v29 = 1;
LABEL_37:
  if ( !(v10 | v29) )
    return 1;
  destData.enabledForClientMask.array[0] = v26;
  destData.enabledForClientMask.array[1] = v20;
  destData.enabledForClientMask.array[2] = v21;
  destData.enabledForClientMask.array[3] = v22;
  destData.enabledForClientMask.array[4] = v23;
  destData.enabledForClientMask.array[5] = v24;
  destData.enabledForClientMask.array[6] = v19;
  if ( v7 )
    G_HudOutline_RemoveEntOutlineIndex(subjectEnt);
  v30 = 0;
  v31 = (char *)&destData - (char *)level.outlineData;
  p_enabledForClientMask = &level.outlineData[0].enabledForClientMask;
  while ( 2 )
  {
    if ( (p_enabledForClientMask[-1].array[6] & 0x80000000) != 0 )
    {
      LODWORD(v45) = p_enabledForClientMask[-1].array[6];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 263, ASSERT_TYPE_ASSERT, "( outlineData->refCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "outlineData->refCount", "0", v45, 0i64) )
        __debugbreak();
    }
    v33 = 0;
    v34 = p_enabledForClientMask;
    do
    {
      if ( v34->array[0] != *(unsigned int *)((char *)v34->array + v31) )
        goto LABEL_51;
      ++v33;
      v34 = (ClientBits *)((char *)v34 + 4);
    }
    while ( v33 < 7 );
    v35 = 0;
    if ( !level.maxclients )
    {
LABEL_50:
      v36 = v30 + 1;
LABEL_64:
      G_HudOutline_SetEntOutlineIndex(subjectEnt, v36);
      G_HudOutline_UpdateClientBits();
      return 1;
    }
    while ( *((_DWORD *)&p_enabledForClientMask[-28] + v35 - 5) == *(_DWORD *)&destData.clientData[v35] )
    {
      if ( ++v35 >= level.maxclients )
        goto LABEL_50;
    }
LABEL_51:
    ++v30;
    v31 -= 836i64;
    p_enabledForClientMask = (ClientBits *)((char *)p_enabledForClientMask + 836);
    if ( v30 < 0x3F )
      continue;
    break;
  }
  p_refCount = &level.outlineData[0].refCount;
  v38 = level.time + 1;
  v39 = -1;
  for ( i = 0; i < 63; ++i )
  {
    if ( *p_refCount < 0 )
    {
      LODWORD(v45) = *p_refCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 287, ASSERT_TYPE_ASSERT, "( outlineData->refCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "outlineData->refCount", "0", v45, 0i64) )
        __debugbreak();
    }
    if ( !*p_refCount && p_refCount[8] < v38 )
    {
      v38 = p_refCount[8];
      v39 = i;
    }
    p_refCount += 209;
  }
  if ( v39 >= 0 )
  {
    v41 = &level.outlineData[v39];
    G_HudOutline_CopyData(&destData, v41);
    v36 = v39 + 1;
    v41->refCount = 0;
    if ( G_HudOutline_GetRefCount(v36) )
    {
      LODWORD(v45) = G_HudOutline_GetRefCount(v36);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 528, ASSERT_TYPE_ASSERT, "( G_HudOutline_GetRefCount( outlineIndex ) ) == ( 0 )", "%s == %s\n\t%i, %i", "G_HudOutline_GetRefCount( outlineIndex )", "0", v45, 0i64) )
        __debugbreak();
    }
    goto LABEL_64;
  }
  G_Debug_PrintEntityDebugInfoToConsole(0, -1);
  G_HudOutline_DumpOutlinedEntities();
  Com_PrintError(15, "Error: HudOutlineEnableForClient() could not be applied because there are currently too many hud outline settings, see log for more details. Can we reduce color and depth test variations?\n");
  G_HudOutline_UpdateClientBits();
  return 0;
}

/*
==============
G_HudOutline_FreeForClient
==============
*/
void G_HudOutline_FreeForClient(gentity_s *clientEnt)
{
  unsigned int number; 
  int v3; 
  gentity_s *gentities; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v10; 
  __int64 v11; 
  ClientBits v12; 
  __int128 v13; 
  __int64 v14; 
  unsigned int v15; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 414, ASSERT_TYPE_ASSERT, "(clientEnt)", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  number = clientEnt->s.number;
  v3 = 0;
  v13 = 0ui64;
  v14 = 0i64;
  v15 = 0;
  if ( number >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 224) )
    __debugbreak();
  gentities = level.gentities;
  *((_DWORD *)&v13 + ((unsigned __int64)number >> 5)) |= 0x80000000 >> (number & 0x1F);
  if ( level.num_entities > 0 )
  {
    v5 = 0i64;
    v6 = 0i64;
    v7 = v15;
    do
    {
      if ( (unsigned int)v3 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v6].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v5] )
      {
        __asm
        {
          vmovups xmm0, [rsp+0C8h+var_58]
          vmovups [rsp+0C8h+var_78], xmm0
          vmovsd  xmm0, [rsp+0C8h+var_48]
        }
        v12.array[6] = v7;
        __asm { vmovsd  [rsp+0C8h+var_68], xmm0 }
        G_HudOutline_DisableForClientMask(gentities, &v12);
      }
      ++v3;
      ++v5;
      ++v6;
      ++gentities;
    }
    while ( v3 < level.num_entities );
  }
}

/*
==============
G_HudOutline_FreeForEnt
==============
*/
void G_HudOutline_FreeForEnt(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 400, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !G_HudOutline_GetEntHudOutlineIndex(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 401, ASSERT_TYPE_ASSERT, "(G_HudOutline_IsEntHudOutlineEnabled( ent ))", (const char *)&queryFormat, "G_HudOutline_IsEntHudOutlineEnabled( ent )") )
    __debugbreak();
  G_HudOutline_RemoveEntOutlineIndex(ent);
  G_HudOutline_UpdateClientBits();
}

/*
==============
G_HudOutline_GetEntHudOutlineIndex
==============
*/
__int64 G_HudOutline_GetEntHudOutlineIndex(const gentity_s *ent)
{
  gclient_s *client; 
  HudData *p_hudData; 
  HudData *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 171, ASSERT_TYPE_ASSERT, "( ent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent", "nullptr", NULL, NULL) )
    __debugbreak();
  client = ent->client;
  p_hudData = &ent->s.hudData;
  v4 = &client->sess.hudData;
  if ( !client )
    v4 = p_hudData;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 186, ASSERT_TYPE_ASSERT, "( hudData ) != ( nullptr )", "%s != %s\n\t%p, %p", "hudData", "nullptr", NULL, NULL) )
    __debugbreak();
  return v4->data & 0x3F;
}

/*
==============
G_HudOutline_GetHudData
==============
*/
HudData *G_HudOutline_GetHudData(gentity_s *ent)
{
  gclient_s *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 157, ASSERT_TYPE_ASSERT, "( ent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent", "nullptr", NULL, NULL) )
    __debugbreak();
  client = ent->client;
  if ( client )
    return &client->sess.hudData;
  else
    return &ent->s.hudData;
}

/*
==============
G_HudOutline_GetHudDataConst
==============
*/
HudData *G_HudOutline_GetHudDataConst(const gentity_s *ent)
{
  gclient_s *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 171, ASSERT_TYPE_ASSERT, "( ent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent", "nullptr", NULL, NULL) )
    __debugbreak();
  client = ent->client;
  if ( client )
    return &client->sess.hudData;
  else
    return &ent->s.hudData;
}

/*
==============
G_HudOutline_GetPerformanceData
==============
*/
void G_HudOutline_GetPerformanceData(unsigned __int8 *outInUseCount)
{
  __int64 i; 
  __int64 v3; 

  *outInUseCount = 0;
  for ( i = 0i64; i < 13167; i += 209i64 )
  {
    if ( level.mayhemEnts[i - 12967].targetName < 0 )
    {
      LODWORD(v3) = level.mayhemEnts[i - 12967].targetName;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 323, ASSERT_TYPE_ASSERT, "( outlineData.refCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "outlineData.refCount", "0", v3, 0i64) )
        __debugbreak();
    }
    if ( level.mayhemEnts[i - 12967].targetName > 0 )
      ++*outInUseCount;
  }
}

/*
==============
G_HudOutline_GetRefCount
==============
*/
__int64 G_HudOutline_GetRefCount(unsigned int outlineIndex)
{
  bool v2; 

  if ( outlineIndex )
  {
    if ( outlineIndex <= 0x3F )
      return *((unsigned int *)&level.currentTriggerListSize + 209 * outlineIndex);
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 77, ASSERT_TYPE_ASSERT, "( outlineIndex ) <= ( (( 1 << 6 )-1) )", "outlineIndex not in [0, MAX_CLIENT_OUTLINES]\n\t%u not in [0, %u]", outlineIndex, 63);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 76, ASSERT_TYPE_ASSERT, "(outlineIndex != 0)", (const char *)&queryFormat, "outlineIndex != 0");
  }
  if ( v2 )
    __debugbreak();
  return *((unsigned int *)&level.currentTriggerListSize + 209 * outlineIndex);
}

/*
==============
G_HudOutline_IsEntHudOutlineEnabled
==============
*/
bool G_HudOutline_IsEntHudOutlineEnabled(const gentity_s *ent)
{
  return G_HudOutline_GetEntHudOutlineIndex(ent) != 0;
}

/*
==============
G_HudOutline_RemoveEntOutlineIndex
==============
*/
void G_HudOutline_RemoveEntOutlineIndex(gentity_s *ent)
{
  HudData *HudData; 
  int v2; 
  __int64 v3; 
  int refCount; 
  int v5; 
  __int64 v6; 

  HudData = G_HudOutline_GetHudData(ent);
  v2 = HudData->data & 0x3F;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 117, ASSERT_TYPE_ASSERT, "( hudData->hudOutlineInfo ) != ( 0 )", "%s != %s\n\t%i, %i", "hudData->hudOutlineInfo", "0", 0, 0i64) )
    __debugbreak();
  HudData->data &= 0xFFFFFFC0;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 32, ASSERT_TYPE_ASSERT, "(outlineIndex != 0)", (const char *)&queryFormat, "outlineIndex != 0") )
    __debugbreak();
  v3 = (unsigned int)(v2 - 1);
  refCount = level.outlineData[v3].refCount;
  if ( refCount > 0 )
  {
    v5 = refCount - 1;
    level.outlineData[v3].refCount = v5;
    if ( v5 < 0 )
    {
      LODWORD(v6) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 43, ASSERT_TYPE_ASSERT, "( outlineData->refCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "outlineData->refCount", "0", v6, 0i64) )
        __debugbreak();
    }
    if ( !level.outlineData[v3].refCount )
      level.outlineData[v3].lastUsed = level.time;
  }
}

/*
==============
G_HudOutline_SetEntOutlineIndex
==============
*/
void G_HudOutline_SetEntOutlineIndex(gentity_s *ent, unsigned int outlineIndex)
{
  bool v4; 
  HudData *HudData; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 86, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( outlineIndex )
  {
    if ( outlineIndex <= 0x3F )
      goto LABEL_10;
    LODWORD(v7) = outlineIndex;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 88, ASSERT_TYPE_ASSERT, "( outlineIndex ) <= ( (( 1 << 6 )-1) )", "outlineIndex not in [0, MAX_CLIENT_OUTLINES]\n\t%u not in [0, %u]", v7, 63);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 87, ASSERT_TYPE_ASSERT, "(outlineIndex != 0)", (const char *)&queryFormat, "outlineIndex != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  HudData = G_HudOutline_GetHudData(ent);
  if ( (HudData->data & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 91, ASSERT_TYPE_ASSERT, "( hudData->hudOutlineInfo ) == ( 0 )", "%s == %s\n\t%i, %i", "hudData->hudOutlineInfo", "0", HudData->data & 0x3F, 0i64) )
    __debugbreak();
  HudData->data &= 0xFFFFFFC0;
  HudData->data |= outlineIndex & 0x3F;
  if ( outlineIndex )
  {
    if ( outlineIndex <= 0x3F )
      goto LABEL_19;
    LODWORD(v8) = 63;
    LODWORD(v7) = outlineIndex;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 67, ASSERT_TYPE_ASSERT, "( outlineIndex ) <= ( (( 1 << 6 )-1) )", "outlineIndex not in [0, MAX_CLIENT_OUTLINES]\n\t%u not in [0, %u]", v7, v8);
  }
  else
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 66, ASSERT_TYPE_ASSERT, "(outlineIndex != 0)", (const char *)&queryFormat, "outlineIndex != 0");
  }
  if ( v6 )
    __debugbreak();
LABEL_19:
  ++*(&level.currentTriggerListSize + 209 * outlineIndex);
}

/*
==============
G_HudOutline_UpdateClientBits
==============
*/
void G_HudOutline_UpdateClientBits()
{
  unsigned int i; 
  gclient_s *v1; 

  for ( i = 0; i < level.maxclients; ++i )
  {
    v1 = &level.clients[i];
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 376, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( v1->sess.connected == CON_CONNECTED )
      G_HudOutline_UpdateSingleClientBits(i, v1);
  }
}

/*
==============
G_HudOutline_UpdateSingleClientBits
==============
*/
void G_HudOutline_UpdateSingleClientBits(int clientIndex, gclient_s *client)
{
  __int64 v3; 
  outline_data_t *outlineData; 
  unsigned int v5; 
  outline_client_data_t v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = clientIndex;
  if ( (unsigned int)clientIndex >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 359, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( level.maxclients )", "clientIndex doesn't index level.maxclients\n\t%i not in [0, %i)", clientIndex, level.maxclients) )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 360, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  *(_QWORD *)client->ps.outlineData.bits = 0i64;
  outlineData = level.outlineData;
  *(_QWORD *)&client->ps.outlineData.bits[2] = 0i64;
  *(_QWORD *)&client->ps.outlineData.bits[4] = 0i64;
  *(_QWORD *)&client->ps.outlineData.bits[6] = 0i64;
  v5 = 7;
  *(_QWORD *)&client->ps.outlineData.bits[8] = 0i64;
  *(_QWORD *)&client->ps.outlineData.bits[10] = 0i64;
  do
  {
    if ( (unsigned int)v3 >= 0xE0 )
    {
      LODWORD(v8) = 224;
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v3 & 0x1F)) & outlineData->enabledForClientMask.array[(unsigned __int64)(unsigned int)v3 >> 5]) != 0 )
    {
      v6 = outlineData->clientData[v3];
      if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_hudoutlines.cpp", 338, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Com_BitSetValueAssert(client->ps.outlineData.bits, v5 - 1, *(_BYTE *)&v6 & 1, 48);
      Com_BitSetValueAssert(client->ps.outlineData.bits, v5, (*(_BYTE *)&v6 & 2) != 0, 48);
      Com_BitSetValueAssert(client->ps.outlineData.bits, v5 + 1, (*(_BYTE *)&v6 & 4) != 0, 48);
      Com_BitSetValueAssert(client->ps.outlineData.bits, v5 + 2, (*(_BYTE *)&v6 & 8) != 0, 48);
      Com_BitSetValueAssert(client->ps.outlineData.bits, v5 + 3, (*(_BYTE *)&v6 & 0x10) != 0, 48);
      Com_BitSetValueAssert(client->ps.outlineData.bits, v5 + 4, (*(_BYTE *)&v6 & 0x20) != 0, 48);
    }
    ++outlineData;
    v5 += 6;
  }
  while ( v5 < 0x181 );
}

