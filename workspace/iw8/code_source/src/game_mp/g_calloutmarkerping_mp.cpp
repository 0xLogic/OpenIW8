/*
==============
G_CalloutMarkerPing_Clear
==============
*/

void __fastcall G_CalloutMarkerPing_Clear(calloutMarkerPing_t *calloutMarkerPing)
{
  ?G_CalloutMarkerPing_Clear@@YAXPEAUcalloutMarkerPing_t@@@Z(calloutMarkerPing);
}

/*
==============
G_CalloutMarkerPing_Get
==============
*/

calloutMarkerPing_t *__fastcall G_CalloutMarkerPing_Get(const int clientNum, int localPoolIndex)
{
  return ?G_CalloutMarkerPing_Get@@YAPEAUcalloutMarkerPing_t@@HH@Z(clientNum, localPoolIndex);
}

/*
==============
G_CalloutMarkerPing_IsScriptablePingedByPlayer
==============
*/

bool __fastcall G_CalloutMarkerPing_IsScriptablePingedByPlayer(const int clientNum, const unsigned int scriptableIndex)
{
  return ?G_CalloutMarkerPing_IsScriptablePingedByPlayer@@YA_NHI@Z(clientNum, scriptableIndex);
}

/*
==============
G_CalloutMarkerPings_ProcessPredictedCommand
==============
*/

void __fastcall G_CalloutMarkerPings_ProcessPredictedCommand(const int clientNum, int parm1, int parm2, int parm3, int parm4, int parm5)
{
  ?G_CalloutMarkerPings_ProcessPredictedCommand@@YAXHHHHHH@Z(clientNum, parm1, parm2, parm3, parm4, parm5);
}

/*
==============
G_CalloutMarkerPing_Init
==============
*/

void G_CalloutMarkerPing_Init(void)
{
  ?G_CalloutMarkerPing_Init@@YAXXZ();
}

/*
==============
G_CalloutMarkerPing_SetInitialFeedback
==============
*/

void __fastcall G_CalloutMarkerPing_SetInitialFeedback(const gentity_s *const player, calloutMarkerPing_t *const ping)
{
  ?G_CalloutMarkerPing_SetInitialFeedback@@YAXQEBUgentity_s@@QEAUcalloutMarkerPing_t@@@Z(player, ping);
}

/*
==============
G_CalloutMarkerPings_Update
==============
*/

void __fastcall G_CalloutMarkerPings_Update(gentity_s *player)
{
  ?G_CalloutMarkerPings_Update@@YAXPEAUgentity_s@@@Z(player);
}

/*
==============
Scr_CalloutMarkerPing_Create
==============
*/
void Scr_CalloutMarkerPing_Create(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int clientNum; 
  int Int; 
  char v6; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  unsigned int v15; 
  __int16 v16; 
  gclient_s *client; 
  vec3_t vectorValue; 

  Entity = GetEntity(entref);
  clientNum = Entity->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  _RBX = G_CalloutMarkerPing_Get(clientNum, Int);
  *(_QWORD *)_RBX->origin.v = 0i64;
  _RBX->origin.v[2] = 0.0;
  *(_DWORD *)&_RBX->active = 0;
  *(_WORD *)(&_RBX->gscObjectiveIndex + 1) = 0;
  _RBX->createdTime = 0;
  _RBX->entNum = 2047;
  _RBX->gscGlobalObjectiveIndex = -1;
  _RBX->scriptableIndex = -1;
  *(_QWORD *)_RBX->clientMask.array = 0i64;
  *(_QWORD *)&_RBX->clientMask.array[2] = 0i64;
  *(_QWORD *)&_RBX->clientMask.array[4] = 0i64;
  _RBX->clientMask.array[6] = 0;
  Scr_GetVector(scrContext, 1u, &vectorValue);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rsp+78h+vectorValue+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [rsp+78h+vectorValue+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  *(_QWORD *)_RBX->clientMask.array = -1i64;
  *(_QWORD *)&_RBX->clientMask.array[2] = -1i64;
  *(_QWORD *)&_RBX->clientMask.array[4] = -1i64;
  _RBX->clientMask.array[6] = -1;
  if ( v6 == 12 )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6432, scrContext, "An inventory slot is required when adding a ping on any inventory slot");
      return;
    }
    v11 = Scr_GetInt(scrContext, 2u);
    _RBX->inventorySlot = truncate_cast<unsigned char,int>(v11);
  }
  else if ( (unsigned __int8)(v6 - 9) <= 2u )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6285, scrContext, "A scriptable index is required when adding a ping on any scriptable based marker pool");
      return;
    }
    v12 = Scr_GetInt(scrContext, 2u);
    if ( !ScriptableSv_GetInstanceInUse(v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(ScriptableSv_GetInstanceInUse( linkToParm ))", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( linkToParm )") )
      __debugbreak();
    _RBX->scriptableIndex = v12;
    goto LABEL_27;
  }
  if ( v6 == 8 || (unsigned __int8)(v6 - 4) <= 2u )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6286, scrContext, "An entity number is required when adding a ping on any entity based marker pool");
      return;
    }
    v15 = Scr_GetInt(scrContext, 2u);
    v16 = v15;
    if ( v15 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 596, ASSERT_TYPE_ASSERT, "(unsigned)( linkToParm ) < (unsigned)( ( 2048 ) )", "linkToParm doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
    _RBX->entNum = v16;
  }
  else if ( v6 == 7 )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6623, scrContext, "An objective index is required when adding a ping on any gsc objective based marker pool");
      return;
    }
    v13 = Scr_GetInt(scrContext, 2u);
    v14 = v13;
    if ( v13 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( 32 )", "objectiveIndex doesn't index MAX_OBJECTIVES_PER_PLAYER\n\t%i not in [0, %i)", v13, 32) )
      __debugbreak();
    _RBX->gscObjectiveIndex = v14;
  }
LABEL_27:
  client = Entity->client;
  if ( client )
    _RBX->feedback = 1 << (client->sess.cs.game_extrainfo & 7);
  _RBX->active = 1;
  _RBX->createdTime = level.time;
}

/*
==============
CalloutMarkerPing_SetFeedback
==============
*/
void CalloutMarkerPing_SetFeedback(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  int Int; 
  calloutMarkerPing_t *v5; 
  int v6; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  v6 = Scr_GetInt(scrContext, 1u);
  v5->feedback = truncate_cast<unsigned char,int>(v6);
}

/*
==============
Scr_CalloutMarkerPing_Delete
==============
*/
void Scr_CalloutMarkerPing_Delete(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  int Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  *(_QWORD *)v5->origin.v = 0i64;
  *(_QWORD *)&v5->origin.z = 0i64;
  *(_DWORD *)&v5->active = 0;
  *(_WORD *)(&v5->gscObjectiveIndex + 1) = 0;
  v5->createdTime = 0;
  v5->entNum = 2047;
  v5->gscGlobalObjectiveIndex = -1;
  v5->scriptableIndex = -1;
  *(_QWORD *)&v5->clientMask.array[1] = 0i64;
  *(_QWORD *)&v5->clientMask.array[3] = 0i64;
  *(_QWORD *)&v5->clientMask.array[5] = 0i64;
}

/*
==============
Scr_CalloutMarkerPing_Hide
==============
*/
void Scr_CalloutMarkerPing_Hide(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  int Int; 
  calloutMarkerPing_t *v5; 
  gentity_s *Entity; 
  unsigned __int64 v7; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Entity = GScr_GetEntity(1u);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 682, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v7 = (unsigned int)Entity->s.clientNum;
    if ( (unsigned int)v7 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, 224) )
      __debugbreak();
    v5->clientMask.array[v7 >> 5] &= ~(0x80000000 >> (v7 & 0x1F));
  }
  else
  {
    *(_QWORD *)v5->clientMask.array = 0i64;
    *(_QWORD *)&v5->clientMask.array[2] = 0i64;
    *(_QWORD *)&v5->clientMask.array[4] = 0i64;
    v5->clientMask.array[6] = 0;
  }
}

/*
==============
Scr_CalloutMarkerPing_Show
==============
*/
void Scr_CalloutMarkerPing_Show(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  int Int; 
  calloutMarkerPing_t *v5; 
  gentity_s *Entity; 
  unsigned __int64 v7; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Entity = GScr_GetEntity(1u);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 713, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v7 = (unsigned int)Entity->s.clientNum;
    if ( (unsigned int)v7 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, 224) )
      __debugbreak();
    v5->clientMask.array[v7 >> 5] |= 0x80000000 >> (v7 & 0x1F);
  }
  else
  {
    *(_QWORD *)v5->clientMask.array = -1i64;
    *(_QWORD *)&v5->clientMask.array[2] = -1i64;
    *(_QWORD *)&v5->clientMask.array[4] = -1i64;
    v5->clientMask.array[6] = -1;
  }
}

/*
==============
Scr_CalloutMarkerPing_OnEntity
==============
*/
void Scr_CalloutMarkerPing_OnEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  ;
}

/*
==============
Scr_CalloutMarkerPing_EntityZOffset
==============
*/
void Scr_CalloutMarkerPing_EntityZOffset(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  const char *v7; 
  int v8; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  _RBX = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( _RBX->entNum == 2047 )
  {
    v7 = j_va("This ping does not have a required entity set for setting a zOffset.\n");
    Scr_Error(COM_ERR_6516, scrContext, v7);
  }
  v8 = Scr_GetInt(scrContext, 1u);
  truncate_cast<short,int>(v8);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
Scr_CalloutMarkerPing_GetActive
==============
*/
void Scr_CalloutMarkerPing_GetActive(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  Scr_AddInt(scrContext, v5->active);
}

/*
==============
Scr_CalloutMarkerPing_GetOrigin
==============
*/
void Scr_CalloutMarkerPing_GetOrigin(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( v5->active )
    Scr_AddVector(scrContext, v5->origin.v);
}

/*
==============
Scr_CalloutMarkerPing_GetEnt
==============
*/
void Scr_CalloutMarkerPing_GetEnt(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 
  calloutMarkerPing_t *v6; 
  __int16 entNum; 
  int v8; 
  EntityClass v9; 
  unsigned int scriptableIndex; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  v6 = v5;
  if ( v5->active )
  {
    if ( Int == 8 || (unsigned __int8)(Int - 4) <= 2u )
    {
      entNum = v5->entNum;
      if ( entNum != 2047 )
      {
        if ( G_IsEntityInUse(entNum) )
        {
          v8 = v6->entNum;
          v9 = ENTITY_CLASS_GENTITY;
LABEL_11:
          Scr_AddEntityNum(scrContext, v8, v9);
          return;
        }
      }
    }
    if ( (unsigned __int8)(Int - 9) <= 2u )
    {
      scriptableIndex = v6->scriptableIndex;
      if ( scriptableIndex != -1 && ScriptableSv_GetInstanceInUse(scriptableIndex) )
      {
        v8 = v6->scriptableIndex;
        v9 = ENTITY_CLASS_SCRIPTABLE;
        goto LABEL_11;
      }
    }
  }
}

/*
==============
Scr_CalloutMarkerPing_GetFeedback
==============
*/
void Scr_CalloutMarkerPing_GetFeedback(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( v5->active )
    Scr_AddInt(scrContext, v5->feedback);
}

/*
==============
Scr_CalloutMarkerPing_GetInventorySlot
==============
*/
void Scr_CalloutMarkerPing_GetInventorySlot(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  Scr_AddInt(scrContext, v5->inventorySlot);
}

/*
==============
Scr_CalloutMarkerPing_GetGSCObjectiveIndex
==============
*/
void Scr_CalloutMarkerPing_GetGSCObjectiveIndex(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  Scr_AddInt(scrContext, v5->gscGlobalObjectiveIndex);
}

/*
==============
Scr_CalloutMarkerPing_GetCreatedTime
==============
*/
void Scr_CalloutMarkerPing_GetCreatedTime(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( v5->active )
    Scr_AddInt(scrContext, v5->createdTime);
  else
    Scr_AddInt(scrContext, 0);
}

/*
==============
Scr_CalloutMarkerPing_GetSavedZOffset
==============
*/
void Scr_CalloutMarkerPing_GetSavedZOffset(scrContext_t *scrContext, scr_entref_t entref)
{
  int clientNum; 
  unsigned __int8 Int; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  _RAX = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( _RAX->active )
  {
    __asm { vmovss  xmm1, dword ptr [rax+8]; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
  }
}

/*
==============
G_CalloutMarkerPing_Clear
==============
*/
void G_CalloutMarkerPing_Clear(calloutMarkerPing_t *calloutMarkerPing)
{
  *(_OWORD *)calloutMarkerPing->origin.v = 0ui64;
  *(_DWORD *)&calloutMarkerPing->active = 0;
  *(_WORD *)(&calloutMarkerPing->gscObjectiveIndex + 1) = 0;
  calloutMarkerPing->createdTime = 0;
  calloutMarkerPing->entNum = 2047;
  calloutMarkerPing->gscGlobalObjectiveIndex = -1;
  calloutMarkerPing->scriptableIndex = -1;
  *(_QWORD *)&calloutMarkerPing->clientMask.array[1] = 0i64;
  *(_QWORD *)&calloutMarkerPing->clientMask.array[3] = 0i64;
  *(_QWORD *)&calloutMarkerPing->clientMask.array[5] = 0i64;
}

/*
==============
G_CalloutMarkerPing_Get
==============
*/
calloutMarkerPing_t *G_CalloutMarkerPing_Get(const int clientNum, int localPoolIndex)
{
  scrContext_t *v4; 
  const char *v5; 
  unsigned int v6; 
  __int64 v8; 

  if ( clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 480, ASSERT_TYPE_ASSERT, "( clientNum != -1 )", (const char *)&queryFormat, "clientNum != CLIENTNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)localPoolIndex > 0xC )
  {
    v4 = ScriptContext_Server();
    v5 = j_va("index %i is an illegal callout marker ping local pool index. Valid indices are 0 to %i\n", (unsigned int)localPoolIndex, 12i64);
    Scr_Error(COM_ERR_6135, v4, v5);
  }
  v6 = localPoolIndex + 13 * clientNum;
  if ( v6 >= 0xA28 )
  {
    LODWORD(v8) = localPoolIndex + 13 * clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( finalCalloutIndex ) < (unsigned)( 13 * 200 )", "finalCalloutIndex doesn't index MAX_CALLOUT_MARKER_PINGS\n\t%i not in [0, %i)", v8, 2600) )
      __debugbreak();
  }
  return &level.calloutMarkerPings[v6];
}

/*
==============
G_CalloutMarkerPing_Init
==============
*/
void G_CalloutMarkerPing_Init(void)
{
  int *p_gscGlobalObjectiveIndex; 

  p_gscGlobalObjectiveIndex = &level.calloutMarkerPings[0].gscGlobalObjectiveIndex;
  do
  {
    *(_QWORD *)(p_gscGlobalObjectiveIndex - 13) = 0i64;
    *(_QWORD *)(p_gscGlobalObjectiveIndex - 11) = 0i64;
    *(int *)((char *)p_gscGlobalObjectiveIndex - 6) = 0;
    *((_WORD *)p_gscGlobalObjectiveIndex - 1) = 0;
    p_gscGlobalObjectiveIndex[1] = 0;
    *((_WORD *)p_gscGlobalObjectiveIndex - 4) = 2047;
    *p_gscGlobalObjectiveIndex = -1;
    *(p_gscGlobalObjectiveIndex - 3) = -1;
    *(_QWORD *)(p_gscGlobalObjectiveIndex - 9) = 0i64;
    *(_QWORD *)(p_gscGlobalObjectiveIndex - 7) = 0i64;
    *(_QWORD *)(p_gscGlobalObjectiveIndex - 5) = 0i64;
    p_gscGlobalObjectiveIndex += 15;
  }
  while ( (__int64)p_gscGlobalObjectiveIndex < (__int64)&level.teamScores[13] );
}

/*
==============
G_CalloutMarkerPing_IsScriptablePingedByPlayer
==============
*/
char G_CalloutMarkerPing_IsScriptablePingedByPlayer(const int clientNum, const unsigned int scriptableIndex)
{
  unsigned int v2; 
  int v3; 
  __int16 *v4; 
  unsigned int v7; 
  scrContext_t *v8; 
  const char *v9; 
  calloutMarkerPing_t *v10; 
  __int64 v12; 
  __int64 v13; 
  __int16 v14; 
  char v15; 

  v2 = 0;
  v14 = 2569;
  v3 = 13 * clientNum;
  v4 = &v14;
  v15 = 11;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)v4;
    if ( clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 480, ASSERT_TYPE_ASSERT, "( clientNum != -1 )", (const char *)&queryFormat, "clientNum != CLIENTNUM_NONE") )
      __debugbreak();
    if ( v7 >= 0xD )
    {
      v8 = ScriptContext_Server();
      v9 = j_va("index %i is an illegal callout marker ping local pool index. Valid indices are 0 to %i\n", v7, 12i64);
      Scr_Error(COM_ERR_6135, v8, v9);
    }
    if ( v3 + v7 >= 0xA28 )
    {
      LODWORD(v13) = 2600;
      LODWORD(v12) = v3 + v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( finalCalloutIndex ) < (unsigned)( 13 * 200 )", "finalCalloutIndex doesn't index MAX_CALLOUT_MARKER_PINGS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = &level.calloutMarkerPings[v3 + v7];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 509, ASSERT_TYPE_ASSERT, "(calloutMarkerPing)", (const char *)&queryFormat, "calloutMarkerPing") )
      __debugbreak();
    if ( v10->active && v10->scriptableIndex == scriptableIndex )
      break;
    ++v2;
    v4 = (__int16 *)((char *)v4 + 1);
    if ( v2 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
G_CalloutMarkerPing_NotifyScript
==============
*/
void G_CalloutMarkerPing_NotifyScript(int ownerClientNum, int pingingClientNum, CalloutMarkerPingPool pool, const char *notifyName)
{
  const gentity_s *v8; 
  scrContext_t *v9; 
  scrContext_t *v10; 
  unsigned int v11; 
  unsigned int v12; 

  v8 = &g_entities[ownerClientNum];
  v9 = ScriptContext_Server();
  v10 = v9;
  v11 = 2;
  if ( ownerClientNum != pingingClientNum )
  {
    Scr_AddEntityNum(v9, pingingClientNum, ENTITY_CLASS_GENTITY);
    v11 = 3;
  }
  Scr_AddInt(v10, (unsigned __int8)pool);
  Scr_AddString(v10, notifyName);
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v12 = GScr_ExecEntThread(v8, GameScriptData::ms_gScriptData->lui_callback, v11);
  Scr_FreeThread(v10, v12);
}

/*
==============
G_CalloutMarkerPing_SetInitialFeedback
==============
*/
void G_CalloutMarkerPing_SetInitialFeedback(const gentity_s *const player, calloutMarkerPing_t *const ping)
{
  gclient_s *client; 

  if ( ping )
  {
    client = player->client;
    if ( client )
      ping->feedback = 1 << (client->sess.cs.game_extrainfo & 7);
  }
}

/*
==============
G_CalloutMarkerPings_ProcessPredictedCommand
==============
*/
void G_CalloutMarkerPings_ProcessPredictedCommand(const int clientNum, int parm1, int parm2, int parm3, int parm4)
{
  gentity_s *v10; 
  __int64 v11; 
  unsigned __int8 owner; 
  int v13; 
  unsigned int v14; 
  calloutMarkerPing_t *v15; 
  calloutMarkerPing_t *v16; 
  __int16 entNum; 
  calloutMarkerPing_t *v18; 
  gclient_s *client; 
  calloutMarkerPing_t *v20; 
  unsigned __int8 feedback; 
  int v22; 
  const ScriptableDef *def; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  unsigned int v25; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  unsigned __int8 type; 
  const dvar_t *v28; 
  const CalloutMarkerPingPool *v29; 
  const char *v30; 
  const dvar_t *v31; 
  int integer; 
  int Int_Internal_DebugName; 
  __int64 v34; 
  int createdTime; 
  calloutMarkerPing_t *v36; 
  char v52; 
  gentity_s *v54; 
  GHandler *Handler; 
  char v57; 
  gclient_s *v78; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  gentity_s *v82; 
  float t; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v88; 
  vec3_t outHitPoint; 
  vec4_t plane; 
  trace_t v91; 
  trace_t results; 

  v10 = &g_entities[clientNum];
  v11 = (unsigned int)parm2;
  v82 = v10;
  if ( !v10->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 195, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( parm1 == -1 )
  {
    if ( (unsigned __int8)v11 >= 0x34u )
    {
      LODWORD(skipEntity) = (unsigned __int8)v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", skipEntity, 52) )
        __debugbreak();
    }
    owner = v10->client->ps.calloutMarkerPings[(unsigned __int8)v11].origin.owner;
    if ( owner )
      v13 = owner - 1;
    else
      v13 = -1;
    if ( (unsigned __int8)v11 >= 0x34u )
    {
      LODWORD(skipChildren) = 52;
      LODWORD(skipEntity) = (unsigned __int8)v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    if ( (unsigned __int8)v11 / 0xDu >= 4 )
    {
      LODWORD(skipChildren) = 4;
      LODWORD(skipEntity) = (unsigned __int8)v11 / 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    v14 = (unsigned __int8)v11 % 0xDu;
    if ( v14 >= 0xD )
    {
      LODWORD(skipChildren) = 13;
      LODWORD(skipEntity) = (unsigned __int8)v11 % 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 181, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( 13 )", "poolIndex doesn't index CALLOUT_MARKER_PING_LOCAL_PLAYER_POOL_SIZE\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    if ( v13 != -1 )
    {
      if ( v13 == clientNum )
      {
        v15 = G_CalloutMarkerPing_Get(clientNum, (unsigned __int8)v14);
        v16 = v15;
        if ( ((_BYTE)v14 == 8 || (unsigned __int8)(v14 - 4) <= 2u) && (entNum = v15->entNum, entNum != 2047) && g_entities[entNum].client )
        {
          G_CalloutMarkerPing_NotifyScript(v13, clientNum, (CalloutMarkerPingPool)v14, "calloutmarkerping_enemy_repinged");
        }
        else
        {
          *(_QWORD *)v16->origin.v = 0i64;
          *(_QWORD *)&v16->origin.z = 0i64;
          *(_DWORD *)&v16->active = 0;
          *(_WORD *)(&v16->gscObjectiveIndex + 1) = 0;
          v16->createdTime = 0;
          v16->entNum = 2047;
          v16->gscGlobalObjectiveIndex = -1;
          v16->scriptableIndex = -1;
          *(_QWORD *)&v16->clientMask.array[1] = 0i64;
          *(_QWORD *)&v16->clientMask.array[3] = 0i64;
          *(_QWORD *)&v16->clientMask.array[5] = 0i64;
          G_CalloutMarkerPing_NotifyScript(v13, clientNum, (CalloutMarkerPingPool)v14, "calloutmarkerping_cleared");
        }
      }
      else
      {
        v18 = G_CalloutMarkerPing_Get(v13, (unsigned __int8)v14);
        client = v10->client;
        v20 = v18;
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 174, ASSERT_TYPE_ASSERT, "(calloutMarkerPing)", (const char *)&queryFormat, "calloutMarkerPing") )
          __debugbreak();
        if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
          __debugbreak();
        feedback = v20->feedback;
        v22 = 1 << (client->sess.cs.game_extrainfo & 7);
        if ( (feedback & (unsigned __int8)v22) != 0 )
        {
          v20->feedback = feedback & ~(_BYTE)v22;
          G_CalloutMarkerPing_NotifyScript(v13, clientNum, (CalloutMarkerPingPool)v14, "calloutmarkerping_acknowledged_cancel");
        }
        else
        {
          v20->feedback = v22 | feedback;
          G_CalloutMarkerPing_NotifyScript(v13, clientNum, (CalloutMarkerPingPool)v14, "calloutmarkerping_acknowledged");
        }
      }
    }
    return;
  }
  if ( (unsigned int)parm1 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 242, ASSERT_TYPE_ASSERT, "(poolIndex >= 0 && poolIndex < CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID)", (const char *)&queryFormat, "poolIndex >= 0 && poolIndex < CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID") )
    __debugbreak();
  if ( (_BYTE)parm1 == 8 || (unsigned __int8)(parm1 - 4) <= 2u )
  {
    if ( !G_IsEntityInUse((__int16)v11) )
      return;
    goto LABEL_60;
  }
  if ( (unsigned __int8)(parm1 - 9) > 2u )
    goto LABEL_60;
  if ( (_DWORD)v11 != -1 && ScriptableSv_GetInstanceInUse(v11) )
  {
    if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)v11 >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(skipEntity) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", skipEntity, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    def = g_scriptableSv_instanceContexts[v11].commonContext.def;
    if ( def )
    {
      LootItemDef = ScriptableSv_GetLootItemDef(v11);
      if ( LootItemDef )
      {
        v25 = 0;
        if ( def->numParts )
        {
          while ( !ScriptableSv_GetPartIsUsable(v11, v25) )
          {
            if ( ++v25 >= def->numParts )
              goto LABEL_56;
          }
        }
        else
        {
LABEL_56:
          LootTable = ScriptableSv_GetLootTable();
          type = LootItemDef->type;
          if ( type != LootTable->itemTypeIndexCache && type != LootTable->itemTypeIndexAttraction )
            return;
        }
      }
LABEL_60:
      if ( (unsigned __int8)(parm1 - 4) > 2u )
      {
        if ( (unsigned __int8)(parm1 - 9) <= 2u )
        {
          v31 = DVARINT_calloutmarkerping_maxScriptablePings;
          v29 = s_scriptablePools_0;
          if ( !DVARINT_calloutmarkerping_maxScriptablePings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_maxScriptablePings") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v31);
          integer = 3;
          if ( v31->current.integer < 3 )
            integer = v31->current.integer;
          goto LABEL_73;
        }
        if ( (unsigned __int8)(parm1 - 1) > 2u )
          goto LABEL_79;
        v28 = DVARINT_calloutmarkerping_maxDangerPings;
        v29 = s_dangerPools;
        v30 = "calloutmarkerping_maxDangerPings";
      }
      else
      {
        v28 = DVARINT_calloutmarkerping_maxEntityPings;
        v29 = s_entityPools_0;
        v30 = "calloutmarkerping_maxEntityPings";
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v28, v30);
      integer = 3;
      if ( Int_Internal_DebugName < 3 )
        integer = Int_Internal_DebugName;
LABEL_73:
      v34 = integer;
      createdTime = -1;
      if ( integer > 0 )
      {
        do
        {
          v36 = G_CalloutMarkerPing_Get(clientNum, *(unsigned __int8 *)v29);
          if ( createdTime == -1 || !v36->active || v36->createdTime < createdTime )
          {
            createdTime = v36->createdTime;
            SLOBYTE(parm1) = *v29;
          }
          ++v29;
          --v34;
        }
        while ( v34 );
      }
LABEL_79:
      __asm { vmovaps [rsp+1F0h+var_40], xmm6 }
      _RBX = G_CalloutMarkerPing_Get(clientNum, (unsigned __int8)parm1);
      *(_QWORD *)_RBX->origin.v = 0i64;
      _RBX->origin.v[2] = 0.0;
      *(_DWORD *)&_RBX->feedback = 0;
      *(&_RBX->gscObjectiveIndex + 2) = 0;
      _RBX->createdTime = 0;
      _RBX->entNum = 2047;
      _RBX->gscGlobalObjectiveIndex = -1;
      *(_QWORD *)&_RBX->clientMask.array[6] = -1i64;
      *(_QWORD *)_RBX->clientMask.array = -1i64;
      *(_QWORD *)&_RBX->clientMask.array[2] = -1i64;
      *(_QWORD *)&_RBX->clientMask.array[4] = -1i64;
      _RBX->active = 1;
      _RBX->createdTime = level.time;
      if ( (_BYTE)parm1 == 8 || (unsigned __int8)(parm1 - 4) <= 2u )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rsp+1F0h+var_188]
          vmovss  dword ptr [rbx], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rbp+0F0h+parm5]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, [rbp+0F0h+parm4]
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  dword ptr [rbx+4], xmm1
        }
        _RBX->entNum = v11;
        goto LABEL_99;
      }
      if ( (unsigned __int8)(parm1 - 9) <= 2u )
      {
        _RBX->scriptableIndex = v11;
LABEL_99:
        v54 = v82;
        goto LABEL_100;
      }
      if ( (_BYTE)parm1 == 7 )
      {
        _RBX->gscObjectiveIndex = v11;
        _RBX->gscGlobalObjectiveIndex = G_Objectives_GetObjectiveIndexFromPSIndex(clientNum, v11);
        goto LABEL_99;
      }
      __asm
      {
        vmovss  xmm6, cs:__real@42700000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@40000000
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@40000000
        vmovss  dword ptr [rbx+4], xmm1
      }
      if ( (_WORD)parm4 == 0xCFC7 )
      {
        __asm { vmovaps xmm0, xmm6 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
        }
      }
      __asm { vmovss  dword ptr [rbx+8], xmm0 }
      if ( (_WORD)parm4 == 0xFB2E )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx]
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rbp+0F0h+start], xmm1
          vmovss  dword ptr [rbp+0F0h+start+4], xmm0
          vmovss  dword ptr [rbp+0F0h+end], xmm1
          vmovss  xmm1, cs:__real@c59c4000
          vmovss  dword ptr [rbp+0F0h+end+4], xmm0
          vmovss  xmm0, cs:__real@461c4000
          vmovss  dword ptr [rbp+0F0h+start+8], xmm0
          vmovss  dword ptr [rbp+0F0h+end+8], xmm1
        }
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds_origin, 2047, 1, 2065, 0, NULL, All);
        __asm
        {
          vmovss  xmm0, [rbp+0F0h+results.fraction]
          vcomiss xmm0, cs:__real@3f800000
        }
        if ( v52 )
        {
          __asm
          {
            vaddss  xmm1, xmm6, dword ptr [rbp+0F0h+results.position+8]
            vmovss  dword ptr [rbx+8], xmm1
          }
          goto LABEL_99;
        }
      }
      else
      {
        if ( (_WORD)parm4 != 0xCFC7 )
          goto LABEL_99;
        v54 = v82;
        G_Client_GetViewOrigin(&v82->client->ps, &outOrigin);
        Handler = GHandler::getHandler();
        BG_GetPlayerViewDirection(&v82->client->ps, &forward, NULL, NULL, Handler, 0);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+1F0h+outOrigin+8]
          vcomiss xmm4, cs:__real@457a0000
        }
        if ( !(v52 | v57) )
        {
          __asm
          {
            vmovups xmm0, cs:__xmm@457a0000bf8000000000000000000000
            vmovups xmmword ptr [rbp+0F0h+plane], xmm0
          }
          if ( !IntersectRayPlane(&outOrigin, &forward, &plane, &t, &outHitPoint) )
            goto LABEL_97;
          __asm { vmovsd  xmm0, qword ptr [rbp+0F0h+outHitPoint] }
          outOrigin.v[2] = outHitPoint.v[2];
          __asm
          {
            vmovss  xmm4, dword ptr [rsp+1F0h+outOrigin+8]
            vmovsd  qword ptr [rsp+1F0h+outOrigin], xmm0
          }
        }
        __asm
        {
          vmovss  xmm3, cs:__real@46ea6000
          vmulss  xmm1, xmm3, dword ptr [rbp+0F0h+forward]
          vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+outOrigin]
          vmulss  xmm1, xmm3, dword ptr [rbp+0F0h+forward+4]
          vmovss  dword ptr [rbp+0F0h+var_140], xmm2
          vaddss  xmm2, xmm1, dword ptr [rsp+1F0h+outOrigin+4]
          vmulss  xmm1, xmm3, dword ptr [rbp+0F0h+forward+8]
          vmovss  dword ptr [rbp+0F0h+var_140+4], xmm2
          vaddss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rbp+0F0h+var_140+8], xmm2
        }
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &v91, &outOrigin, &v88, &bounds_origin, 2047, 1, 2065, 0, NULL, All);
        __asm
        {
          vmovss  xmm0, [rbp+0F0h+var_110.fraction]
          vcomiss xmm0, cs:__real@3f800000
        }
        if ( v52 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0F0h+var_110.position]
            vmovss  xmm1, dword ptr [rbp+0F0h+var_110.position+4]
            vaddss  xmm2, xmm6, dword ptr [rbp+0F0h+var_110.position+8]
            vmovss  dword ptr [rbx], xmm0
            vmovss  dword ptr [rbx+4], xmm1
            vmovss  dword ptr [rbx+8], xmm2
          }
LABEL_100:
          v78 = v54->client;
          if ( v78 )
            _RBX->feedback = 1 << (v78->sess.cs.game_extrainfo & 7);
          G_CalloutMarkerPing_NotifyScript(clientNum, clientNum, (CalloutMarkerPingPool)parm1, "calloutmarkerping_added");
          goto LABEL_103;
        }
      }
LABEL_97:
      *(_QWORD *)_RBX->origin.v = 0i64;
      *(_QWORD *)&_RBX->origin.z = 0i64;
      *(_DWORD *)&_RBX->active = 0;
      *(_WORD *)(&_RBX->gscObjectiveIndex + 1) = 0;
      _RBX->createdTime = 0;
      _RBX->entNum = 2047;
      _RBX->gscGlobalObjectiveIndex = -1;
      _RBX->scriptableIndex = -1;
      *(_QWORD *)&_RBX->clientMask.array[1] = 0i64;
      *(_QWORD *)&_RBX->clientMask.array[3] = 0i64;
      *(_QWORD *)&_RBX->clientMask.array[5] = 0i64;
LABEL_103:
      __asm { vmovaps xmm6, [rsp+1F0h+var_40] }
    }
  }
}

/*
==============
G_CalloutMarkerPings_Update
==============
*/
void G_CalloutMarkerPings_Update(gentity_s *player)
{
  char *Value; 
  int *v6; 
  _QWORD *v7; 
  char *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  __int64 v12; 
  playerState_s *EntityPlayerState; 
  __int64 clientNum; 
  gentity_s *v15; 
  gclient_s *client; 
  int squadIndex; 
  int v18; 
  __int64 v19; 
  GHandler *Handler; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  char *v25; 
  _DWORD *v26; 
  unsigned __int64 v27; 
  unsigned int v28; 
  int v29; 
  int v32; 
  unsigned int v33; 
  char *p_yOffset; 
  unsigned int v36; 
  char v37; 
  __int64 v52; 
  __int64 v53; 
  unsigned int clientIndex; 
  int v55; 
  team_t outTeam; 
  unsigned int v57; 
  playerState_s *v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  unsigned int v62; 
  __int64 v63; 
  int v64; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v61 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 25, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v6 = (int *)(Value + 15776);
  if ( (unsigned int)(*((_DWORD *)Value + 3944) + 1) >= 3 )
  {
    LODWORD(v52) = *((_DWORD *)Value + 3944) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v52, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v6 >= 3 )
  {
    LODWORD(v53) = 3;
    LODWORD(v52) = *v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v52, v53) )
      __debugbreak();
  }
  v7 = Value + 2088;
  v8 = Value + 40;
  if ( *v7 < (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v7 += 8i64;
  if ( *v7 >= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v7 = v6;
  if ( *v7 <= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v9 = *v6;
  v10 = __rdtsc();
  v6[v9 + 2] = v10;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v12 = 0i64;
  v59 = 0i64;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 342, NULL, 0);
  EntityPlayerState = G_GetEntityPlayerState(player);
  v58 = EntityPlayerState;
  v63 = -1i64;
  v64 = -1;
  clientNum = EntityPlayerState->clientNum;
  if ( (unsigned int)clientNum >= 0x800 )
  {
    LODWORD(v53) = 2048;
    LODWORD(v52) = EntityPlayerState->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v52, v53) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[clientNum].r.isInUse != g_entityIsInUse[clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 58, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ps->clientNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( ps->clientNum )") )
    __debugbreak();
  v15 = &g_entities[EntityPlayerState->clientNum];
  if ( (!v15 || !v15->client) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 60, ASSERT_TYPE_ASSERT, "( pEnt && pEnt->client )", (const char *)&queryFormat, "pEnt && pEnt->client") )
    __debugbreak();
  client = v15->client;
  squadIndex = client->sess.cs.squadIndex;
  clientIndex = client->sess.cs.clientIndex;
  v62 = clientIndex;
  v18 = 1;
  v19 = (int)SvClient::ms_clientCount;
  Handler = GHandler::getHandler();
  GHandler::GetPlayerTeam(Handler, EntityPlayerState->clientNum, &outTeam);
  v21 = 0;
  v22 = v19;
  if ( (int)v19 > 0 )
  {
    v23 = 0i64;
    v24 = 1i64;
    do
    {
      if ( v24 >= 4 )
        break;
      if ( v21 >= 0x800 )
      {
        LODWORD(v53) = 2048;
        LODWORD(v52) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v52, v53) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( *(&g_entities->r.isInUse + v12) != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v23] && v21 != v58->clientNum )
      {
        v25 = (char *)g_entities + v12;
        if ( (!(gentity_s *)((char *)g_entities + v12) || !*((_QWORD *)v25 + 42)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 75, ASSERT_TYPE_ASSERT, "( pEnt && pEnt->client )", (const char *)&queryFormat, "pEnt && pEnt->client") )
          __debugbreak();
        v26 = (_DWORD *)*((_QWORD *)v25 + 42);
        if ( v26[5518] == outTeam && v26[5592] == squadIndex )
        {
          *(&v62 + v24) = v26[5517];
          ++v18;
          ++v24;
        }
      }
      ++v21;
      ++v23;
      v12 += 1456i64;
    }
    while ( v23 < v22 );
    v12 = 0i64;
    EntityPlayerState = v58;
  }
  memset_0(EntityPlayerState->calloutMarkerPings, 0, sizeof(EntityPlayerState->calloutMarkerPings));
  if ( v18 > 0 )
  {
    v27 = clientIndex;
    v57 = clientIndex & 0x1F;
    v60 = v18;
    v28 = 0;
    v55 = 0;
    v29 = 0;
    __asm
    {
      vmovss  xmm7, cs:__real@3f000000
      vmovss  xmm6, cs:__real@3e800000
    }
    do
    {
      v32 = *(&v62 + v12);
      if ( v32 == -1 )
        break;
      v33 = v28;
      _RBX = &level.teamScores[195 * v32 - 38988];
      p_yOffset = &EntityPlayerState->calloutMarkerPings[v28].entity.yOffset;
      v36 = 13 * v32 - v28;
      do
      {
        v37 = v29 + v33;
        if ( v33 + v36 >= 0xA28 )
        {
          LODWORD(v53) = 2600;
          LODWORD(v52) = v33 + v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( globalIndex ) < (unsigned)( 13 * 200 )", "globalIndex doesn't index MAX_CALLOUT_MARKER_PINGS\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        if ( *((_BYTE *)_RBX - 2) )
        {
          if ( (unsigned int)v27 >= 0xE0 )
          {
            LODWORD(v53) = 224;
            LODWORD(v52) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v52, v53) )
              __debugbreak();
          }
          if ( ((0x80000000 >> v57) & _RBX[(v27 >> 5) - 9]) != 0 )
          {
            if ( v33 >= 0x34 )
            {
              LODWORD(v53) = 52;
              LODWORD(v52) = v33;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( localCalloutMarkerPingPSViewIndex ) < (unsigned)( 13 * 4 )", "localCalloutMarkerPingPSViewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v52, v53) )
                __debugbreak();
            }
            if ( v37 == 12 )
            {
              *p_yOffset = *(_BYTE *)_RBX;
              __asm { vcvttss2si esi, dword ptr [rbx-28h] }
              if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                __debugbreak();
              *((_WORD *)p_yOffset - 2) = _ESI;
            }
            else if ( v37 == 8 || (unsigned __int8)(v37 - 4) <= 2u )
            {
              *((_WORD *)p_yOffset - 2) = *((_WORD *)_RBX - 2);
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rbx-30h]
                vcvttss2si esi, xmm1
              }
              if ( (unsigned int)(_ESI + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)_ESI, "signed", _ESI) )
                __debugbreak();
              p_yOffset[1] = _ESI;
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rbx-2Ch]
                vcvttss2si esi, xmm1
              }
              if ( (unsigned int)(_ESI + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)_ESI, "signed", _ESI) )
                __debugbreak();
              *p_yOffset = _ESI;
              __asm { vcvttss2si esi, dword ptr [rbx-28h] }
              if ( (unsigned int)(_ESI + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)_ESI, "signed", _ESI) )
                __debugbreak();
              *((_WORD *)p_yOffset - 1) = _ESI;
            }
            else if ( (unsigned __int8)(v37 - 9) > 2u )
            {
              if ( v37 == 7 )
              {
                *((_WORD *)p_yOffset - 2) = *((unsigned __int8 *)_RBX + 1);
              }
              else
              {
                __asm
                {
                  vmulss  xmm1, xmm7, dword ptr [rbx-30h]
                  vcvttss2si eax, xmm1
                }
                if ( _EAX > 0x7FFF )
                  _EAX = 0x7FFF;
                if ( _EAX < -32768 )
                  LOWORD(_EAX) = 0x8000;
                *((_WORD *)p_yOffset - 2) = _EAX;
                __asm
                {
                  vmulss  xmm1, xmm7, dword ptr [rbx-2Ch]
                  vcvttss2si eax, xmm1
                }
                if ( _EAX > 0x7FFF )
                  _EAX = 0x7FFF;
                if ( _EAX < -32768 )
                  LOWORD(_EAX) = 0x8000;
                *((_WORD *)p_yOffset - 1) = _EAX;
                __asm { vcvttss2si eax, dword ptr [rbx-28h] }
                if ( _EAX > 0x7FFF )
                  _EAX = 0x7FFF;
                if ( _EAX < -32768 )
                  LOWORD(_EAX) = 0x8000;
                *(_WORD *)p_yOffset = _EAX;
              }
            }
            else
            {
              *((_DWORD *)p_yOffset - 1) = *(_RBX - 2);
            }
            p_yOffset[2] = v32 + 1;
            p_yOffset[3] = *((_BYTE *)_RBX - 1);
          }
        }
        _RBX += 15;
        ++v33;
        p_yOffset += 8;
      }
      while ( (int)(v33 + v29) < 13 );
      v28 = v55 + 13;
      v55 += 13;
      v29 -= 13;
      v12 = v59 + 1;
      v59 = v12;
      EntityPlayerState = v58;
    }
    while ( v12 < v60 );
  }
  Profile_EndInternal(NULL);
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

