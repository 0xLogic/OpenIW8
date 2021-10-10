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
  calloutMarkerPing_t *v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 v11; 
  unsigned int v12; 
  __int16 v13; 
  gclient_s *client; 
  vec3_t vectorValue; 

  Entity = GetEntity(entref);
  clientNum = Entity->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  v7 = G_CalloutMarkerPing_Get(clientNum, Int);
  *(_QWORD *)v7->origin.v = 0i64;
  v7->origin.v[2] = 0.0;
  *(_DWORD *)&v7->active = 0;
  *(_WORD *)(&v7->gscObjectiveIndex + 1) = 0;
  v7->createdTime = 0;
  v7->entNum = 2047;
  v7->gscGlobalObjectiveIndex = -1;
  v7->scriptableIndex = -1;
  *(_QWORD *)v7->clientMask.array = 0i64;
  *(_QWORD *)&v7->clientMask.array[2] = 0i64;
  *(_QWORD *)&v7->clientMask.array[4] = 0i64;
  v7->clientMask.array[6] = 0;
  Scr_GetVector(scrContext, 1u, &vectorValue);
  v7->origin = vectorValue;
  *(_QWORD *)v7->clientMask.array = -1i64;
  *(_QWORD *)&v7->clientMask.array[2] = -1i64;
  *(_QWORD *)&v7->clientMask.array[4] = -1i64;
  v7->clientMask.array[6] = -1;
  if ( v6 == 12 )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6432, scrContext, "An inventory slot is required when adding a ping on any inventory slot");
      return;
    }
    v8 = Scr_GetInt(scrContext, 2u);
    v7->inventorySlot = truncate_cast<unsigned char,int>(v8);
  }
  else if ( (unsigned __int8)(v6 - 9) <= 2u )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6285, scrContext, "A scriptable index is required when adding a ping on any scriptable based marker pool");
      return;
    }
    v9 = Scr_GetInt(scrContext, 2u);
    if ( !ScriptableSv_GetInstanceInUse(v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(ScriptableSv_GetInstanceInUse( linkToParm ))", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( linkToParm )") )
      __debugbreak();
    v7->scriptableIndex = v9;
    goto LABEL_27;
  }
  if ( v6 == 8 || (unsigned __int8)(v6 - 4) <= 2u )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6286, scrContext, "An entity number is required when adding a ping on any entity based marker pool");
      return;
    }
    v12 = Scr_GetInt(scrContext, 2u);
    v13 = v12;
    if ( v12 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 596, ASSERT_TYPE_ASSERT, "(unsigned)( linkToParm ) < (unsigned)( ( 2048 ) )", "linkToParm doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
      __debugbreak();
    v7->entNum = v13;
  }
  else if ( v6 == 7 )
  {
    if ( Scr_GetNumParam(scrContext) != 3 )
    {
      Scr_Error(COM_ERR_6623, scrContext, "An objective index is required when adding a ping on any gsc objective based marker pool");
      return;
    }
    v10 = Scr_GetInt(scrContext, 2u);
    v11 = v10;
    if ( v10 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(unsigned)( objectiveIndex ) < (unsigned)( 32 )", "objectiveIndex doesn't index MAX_OBJECTIVES_PER_PLAYER\n\t%i not in [0, %i)", v10, 32) )
      __debugbreak();
    v7->gscObjectiveIndex = v11;
  }
LABEL_27:
  client = Entity->client;
  if ( client )
    v7->feedback = 1 << (client->sess.cs.game_extrainfo & 7);
  v7->active = 1;
  v7->createdTime = level.time;
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
  calloutMarkerPing_t *v5; 
  const char *v6; 
  int v7; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( v5->entNum == 2047 )
  {
    v6 = j_va("This ping does not have a required entity set for setting a zOffset.\n");
    Scr_Error(COM_ERR_6516, scrContext, v6);
  }
  v7 = Scr_GetInt(scrContext, 1u);
  v5->origin.v[2] = (float)truncate_cast<short,int>(v7);
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
  calloutMarkerPing_t *v5; 

  clientNum = GetEntity(entref)->s.clientNum;
  Int = Scr_GetInt(scrContext, 0);
  v5 = G_CalloutMarkerPing_Get(clientNum, Int);
  if ( v5->active )
    Scr_AddFloat(scrContext, v5->origin.v[2]);
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
void G_CalloutMarkerPings_ProcessPredictedCommand(const int clientNum, int parm1, int parm2, int parm3, int parm4, int parm5)
{
  gentity_s *v8; 
  __int64 v9; 
  unsigned __int8 owner; 
  int v11; 
  unsigned int v12; 
  calloutMarkerPing_t *v13; 
  calloutMarkerPing_t *v14; 
  __int16 entNum; 
  calloutMarkerPing_t *v16; 
  gclient_s *client; 
  calloutMarkerPing_t *v18; 
  unsigned __int8 feedback; 
  int v20; 
  const ScriptableDef *def; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  unsigned int v23; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  unsigned __int8 type; 
  const dvar_t *v26; 
  const CalloutMarkerPingPool *v27; 
  const char *v28; 
  const dvar_t *v29; 
  int integer; 
  int Int_Internal_DebugName; 
  __int64 v32; 
  int createdTime; 
  calloutMarkerPing_t *v34; 
  calloutMarkerPing_t *v35; 
  float v36; 
  float v37; 
  gentity_s *v38; 
  GHandler *Handler; 
  float v40; 
  float v41; 
  float v42; 
  gclient_s *v43; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  gentity_s *v46; 
  float t; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v53; 
  vec3_t outHitPoint; 
  vec4_t plane; 
  trace_t v56; 
  trace_t results; 

  v8 = &g_entities[clientNum];
  v9 = (unsigned int)parm2;
  v46 = v8;
  if ( !v8->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 195, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( parm1 == -1 )
  {
    if ( (unsigned __int8)v9 >= 0x34u )
    {
      LODWORD(skipEntity) = (unsigned __int8)v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", skipEntity, 52) )
        __debugbreak();
    }
    owner = v8->client->ps.calloutMarkerPings[(unsigned __int8)v9].origin.owner;
    if ( owner )
      v11 = owner - 1;
    else
      v11 = -1;
    if ( (unsigned __int8)v9 >= 0x34u )
    {
      LODWORD(skipChildren) = 52;
      LODWORD(skipEntity) = (unsigned __int8)v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    if ( (unsigned __int8)v9 / 0xDu >= 4 )
    {
      LODWORD(skipChildren) = 4;
      LODWORD(skipEntity) = (unsigned __int8)v9 / 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    v12 = (unsigned __int8)v9 % 0xDu;
    if ( v12 >= 0xD )
    {
      LODWORD(skipChildren) = 13;
      LODWORD(skipEntity) = (unsigned __int8)v9 % 0xDu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 181, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( 13 )", "poolIndex doesn't index CALLOUT_MARKER_PING_LOCAL_PLAYER_POOL_SIZE\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    if ( v11 != -1 )
    {
      if ( v11 == clientNum )
      {
        v13 = G_CalloutMarkerPing_Get(clientNum, (unsigned __int8)v12);
        v14 = v13;
        if ( ((_BYTE)v12 == 8 || (unsigned __int8)(v12 - 4) <= 2u) && (entNum = v13->entNum, entNum != 2047) && g_entities[entNum].client )
        {
          G_CalloutMarkerPing_NotifyScript(v11, clientNum, (CalloutMarkerPingPool)v12, "calloutmarkerping_enemy_repinged");
        }
        else
        {
          *(_QWORD *)v14->origin.v = 0i64;
          *(_QWORD *)&v14->origin.z = 0i64;
          *(_DWORD *)&v14->active = 0;
          *(_WORD *)(&v14->gscObjectiveIndex + 1) = 0;
          v14->createdTime = 0;
          v14->entNum = 2047;
          v14->gscGlobalObjectiveIndex = -1;
          v14->scriptableIndex = -1;
          *(_QWORD *)&v14->clientMask.array[1] = 0i64;
          *(_QWORD *)&v14->clientMask.array[3] = 0i64;
          *(_QWORD *)&v14->clientMask.array[5] = 0i64;
          G_CalloutMarkerPing_NotifyScript(v11, clientNum, (CalloutMarkerPingPool)v12, "calloutmarkerping_cleared");
        }
      }
      else
      {
        v16 = G_CalloutMarkerPing_Get(v11, (unsigned __int8)v12);
        client = v8->client;
        v18 = v16;
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 174, ASSERT_TYPE_ASSERT, "(calloutMarkerPing)", (const char *)&queryFormat, "calloutMarkerPing") )
          __debugbreak();
        if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
          __debugbreak();
        feedback = v18->feedback;
        v20 = 1 << (client->sess.cs.game_extrainfo & 7);
        if ( (feedback & (unsigned __int8)v20) != 0 )
        {
          v18->feedback = feedback & ~(_BYTE)v20;
          G_CalloutMarkerPing_NotifyScript(v11, clientNum, (CalloutMarkerPingPool)v12, "calloutmarkerping_acknowledged_cancel");
        }
        else
        {
          v18->feedback = v20 | feedback;
          G_CalloutMarkerPing_NotifyScript(v11, clientNum, (CalloutMarkerPingPool)v12, "calloutmarkerping_acknowledged");
        }
      }
    }
    return;
  }
  if ( (unsigned int)parm1 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 242, ASSERT_TYPE_ASSERT, "(poolIndex >= 0 && poolIndex < CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID)", (const char *)&queryFormat, "poolIndex >= 0 && poolIndex < CalloutMarkerPingPool::CONST_CALLOUT_POOL_INVALID") )
    __debugbreak();
  if ( (_BYTE)parm1 == 8 || (unsigned __int8)(parm1 - 4) <= 2u )
  {
    if ( !G_IsEntityInUse((__int16)v9) )
      return;
    goto LABEL_60;
  }
  if ( (unsigned __int8)(parm1 - 9) > 2u )
    goto LABEL_60;
  if ( (_DWORD)v9 != -1 && ScriptableSv_GetInstanceInUse(v9) )
  {
    if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)v9 >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(skipEntity) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", skipEntity, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    def = g_scriptableSv_instanceContexts[v9].commonContext.def;
    if ( def )
    {
      LootItemDef = ScriptableSv_GetLootItemDef(v9);
      if ( LootItemDef )
      {
        v23 = 0;
        if ( def->numParts )
        {
          while ( !ScriptableSv_GetPartIsUsable(v9, v23) )
          {
            if ( ++v23 >= def->numParts )
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
          v29 = DVARINT_calloutmarkerping_maxScriptablePings;
          v27 = s_scriptablePools_0;
          if ( !DVARINT_calloutmarkerping_maxScriptablePings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_maxScriptablePings") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v29);
          integer = 3;
          if ( v29->current.integer < 3 )
            integer = v29->current.integer;
          goto LABEL_73;
        }
        if ( (unsigned __int8)(parm1 - 1) > 2u )
          goto LABEL_79;
        v26 = DVARINT_calloutmarkerping_maxDangerPings;
        v27 = s_dangerPools;
        v28 = "calloutmarkerping_maxDangerPings";
      }
      else
      {
        v26 = DVARINT_calloutmarkerping_maxEntityPings;
        v27 = s_entityPools_0;
        v28 = "calloutmarkerping_maxEntityPings";
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v26, v28);
      integer = 3;
      if ( Int_Internal_DebugName < 3 )
        integer = Int_Internal_DebugName;
LABEL_73:
      v32 = integer;
      createdTime = -1;
      if ( integer > 0 )
      {
        do
        {
          v34 = G_CalloutMarkerPing_Get(clientNum, *(unsigned __int8 *)v27);
          if ( createdTime == -1 || !v34->active || v34->createdTime < createdTime )
          {
            createdTime = v34->createdTime;
            SLOBYTE(parm1) = *v27;
          }
          ++v27;
          --v32;
        }
        while ( v32 );
      }
LABEL_79:
      v35 = G_CalloutMarkerPing_Get(clientNum, (unsigned __int8)parm1);
      *(_QWORD *)v35->origin.v = 0i64;
      v35->origin.v[2] = 0.0;
      *(_DWORD *)&v35->feedback = 0;
      *(&v35->gscObjectiveIndex + 2) = 0;
      v35->createdTime = 0;
      v35->entNum = 2047;
      v35->gscGlobalObjectiveIndex = -1;
      *(_QWORD *)&v35->clientMask.array[6] = -1i64;
      *(_QWORD *)v35->clientMask.array = -1i64;
      *(_QWORD *)&v35->clientMask.array[2] = -1i64;
      *(_QWORD *)&v35->clientMask.array[4] = -1i64;
      v35->active = 1;
      v35->createdTime = level.time;
      if ( (_BYTE)parm1 == 8 || (unsigned __int8)(parm1 - 4) <= 2u )
      {
        v35->origin.v[0] = (float)parm3;
        v35->origin.v[2] = (float)parm5;
        v35->origin.v[1] = (float)parm4;
        v35->entNum = v9;
        goto LABEL_99;
      }
      if ( (unsigned __int8)(parm1 - 9) <= 2u )
      {
        v35->scriptableIndex = v9;
LABEL_99:
        v38 = v46;
        goto LABEL_100;
      }
      if ( (_BYTE)parm1 == 7 )
      {
        v35->gscObjectiveIndex = v9;
        v35->gscGlobalObjectiveIndex = G_Objectives_GetObjectiveIndexFromPSIndex(clientNum, v9);
        goto LABEL_99;
      }
      v35->origin.v[0] = (float)(__int16)v9 * 2.0;
      v35->origin.v[1] = (float)(__int16)parm3 * 2.0;
      if ( (_WORD)parm4 == 0xCFC7 )
        v36 = FLOAT_60_0;
      else
        v36 = (float)(__int16)parm4;
      v35->origin.v[2] = v36;
      if ( (_WORD)parm4 == 0xFB2E )
      {
        v37 = v35->origin.v[1];
        start.v[0] = v35->origin.v[0];
        start.v[1] = v37;
        end.v[0] = start.v[0];
        end.v[1] = v37;
        start.v[2] = FLOAT_10000_0;
        end.v[2] = FLOAT_N5000_0;
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds_origin, 2047, 1, 2065, 0, NULL, All);
        if ( results.fraction < 1.0 )
        {
          v35->origin.v[2] = results.position.v[2] + 60.0;
          goto LABEL_99;
        }
      }
      else
      {
        if ( (_WORD)parm4 != 0xCFC7 )
          goto LABEL_99;
        v38 = v46;
        G_Client_GetViewOrigin(&v46->client->ps, &outOrigin);
        Handler = GHandler::getHandler();
        BG_GetPlayerViewDirection(&v46->client->ps, &forward, NULL, NULL, Handler, 0);
        v40 = outOrigin.v[2];
        if ( outOrigin.v[2] > 4000.0 )
        {
          plane = (vec4_t)_xmm;
          if ( !IntersectRayPlane(&outOrigin, &forward, &plane, &t, &outHitPoint) )
            goto LABEL_97;
          outOrigin = outHitPoint;
          v40 = outHitPoint.v[2];
        }
        v53.v[0] = (float)(30000.0 * forward.v[0]) + outOrigin.v[0];
        v53.v[1] = (float)(30000.0 * forward.v[1]) + outOrigin.v[1];
        v53.v[2] = (float)(30000.0 * forward.v[2]) + v40;
        PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &v56, &outOrigin, &v53, &bounds_origin, 2047, 1, 2065, 0, NULL, All);
        if ( v56.fraction < 1.0 )
        {
          v41 = v56.position.v[1];
          v42 = v56.position.v[2] + 60.0;
          v35->origin.v[0] = v56.position.v[0];
          v35->origin.v[1] = v41;
          v35->origin.v[2] = v42;
LABEL_100:
          v43 = v38->client;
          if ( v43 )
            v35->feedback = 1 << (v43->sess.cs.game_extrainfo & 7);
          G_CalloutMarkerPing_NotifyScript(clientNum, clientNum, (CalloutMarkerPingPool)parm1, "calloutmarkerping_added");
          return;
        }
      }
LABEL_97:
      *(_QWORD *)v35->origin.v = 0i64;
      *(_QWORD *)&v35->origin.z = 0i64;
      *(_DWORD *)&v35->active = 0;
      *(_WORD *)(&v35->gscObjectiveIndex + 1) = 0;
      v35->createdTime = 0;
      v35->entNum = 2047;
      v35->gscGlobalObjectiveIndex = -1;
      v35->scriptableIndex = -1;
      *(_QWORD *)&v35->clientMask.array[1] = 0i64;
      *(_QWORD *)&v35->clientMask.array[3] = 0i64;
      *(_QWORD *)&v35->clientMask.array[5] = 0i64;
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
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  __int64 v9; 
  playerState_s *EntityPlayerState; 
  __int64 clientNum; 
  gentity_s *v12; 
  gclient_s *client; 
  int squadIndex; 
  int v15; 
  __int64 v16; 
  GHandler *Handler; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  char *v22; 
  _DWORD *v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  int *v29; 
  char *p_yOffset; 
  unsigned int v31; 
  char v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned int clientIndex; 
  int v43; 
  team_t outTeam; 
  unsigned int v45; 
  playerState_s *v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  __int64 v51; 
  int v52; 

  v49 = -2i64;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 25, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v3 = (int *)(Value + 15776);
  if ( (unsigned int)(*((_DWORD *)Value + 3944) + 1) >= 3 )
  {
    LODWORD(v40) = *((_DWORD *)Value + 3944) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v40, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v3 >= 3 )
  {
    LODWORD(v41) = 3;
    LODWORD(v40) = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v40, v41) )
      __debugbreak();
  }
  v4 = Value + 2088;
  v5 = Value + 40;
  if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v4 += 8i64;
  if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v4 = v3;
  if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = *v3;
  v7 = __rdtsc();
  v3[v6 + 2] = v7;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v9 = 0i64;
  v47 = 0i64;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 342, NULL, 0);
  EntityPlayerState = G_GetEntityPlayerState(player);
  v46 = EntityPlayerState;
  v51 = -1i64;
  v52 = -1;
  clientNum = EntityPlayerState->clientNum;
  if ( (unsigned int)clientNum >= 0x800 )
  {
    LODWORD(v41) = 2048;
    LODWORD(v40) = EntityPlayerState->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v40, v41) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[clientNum].r.isInUse != g_entityIsInUse[clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 58, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( ps->clientNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( ps->clientNum )") )
    __debugbreak();
  v12 = &g_entities[EntityPlayerState->clientNum];
  if ( (!v12 || !v12->client) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 60, ASSERT_TYPE_ASSERT, "( pEnt && pEnt->client )", (const char *)&queryFormat, "pEnt && pEnt->client") )
    __debugbreak();
  client = v12->client;
  squadIndex = client->sess.cs.squadIndex;
  clientIndex = client->sess.cs.clientIndex;
  v50 = clientIndex;
  v15 = 1;
  v16 = (int)SvClient::ms_clientCount;
  Handler = GHandler::getHandler();
  GHandler::GetPlayerTeam(Handler, EntityPlayerState->clientNum, &outTeam);
  v18 = 0;
  v19 = v16;
  if ( (int)v16 > 0 )
  {
    v20 = 0i64;
    v21 = 1i64;
    do
    {
      if ( v21 >= 4 )
        break;
      if ( v18 >= 0x800 )
      {
        LODWORD(v41) = 2048;
        LODWORD(v40) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( *(&g_entities->r.isInUse + v9) != g_entityIsInUse[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v20] && v18 != v46->clientNum )
      {
        v22 = (char *)g_entities + v9;
        if ( (!(gentity_s *)((char *)g_entities + v9) || !*((_QWORD *)v22 + 42)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 75, ASSERT_TYPE_ASSERT, "( pEnt && pEnt->client )", (const char *)&queryFormat, "pEnt && pEnt->client") )
          __debugbreak();
        v23 = (_DWORD *)*((_QWORD *)v22 + 42);
        if ( v23[5518] == outTeam && v23[5592] == squadIndex )
        {
          *(&v50 + v21) = v23[5517];
          ++v15;
          ++v21;
        }
      }
      ++v18;
      ++v20;
      v9 += 1456i64;
    }
    while ( v20 < v19 );
    v9 = 0i64;
    EntityPlayerState = v46;
  }
  memset_0(EntityPlayerState->calloutMarkerPings, 0, sizeof(EntityPlayerState->calloutMarkerPings));
  if ( v15 > 0 )
  {
    v24 = clientIndex;
    v45 = clientIndex & 0x1F;
    v48 = v15;
    v25 = 0;
    v43 = 0;
    v26 = 0;
    do
    {
      v27 = *(&v50 + v9);
      if ( v27 == -1 )
        break;
      v28 = v25;
      v29 = &level.teamScores[195 * v27 - 38988];
      p_yOffset = &EntityPlayerState->calloutMarkerPings[v25].entity.yOffset;
      v31 = 13 * v27 - v25;
      do
      {
        v32 = v26 + v28;
        if ( v28 + v31 >= 0xA28 )
        {
          LODWORD(v41) = 2600;
          LODWORD(v40) = v28 + v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( globalIndex ) < (unsigned)( 13 * 200 )", "globalIndex doesn't index MAX_CALLOUT_MARKER_PINGS\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( *((_BYTE *)v29 - 2) )
        {
          if ( (unsigned int)v24 >= 0xE0 )
          {
            LODWORD(v41) = 224;
            LODWORD(v40) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v40, v41) )
              __debugbreak();
          }
          if ( ((0x80000000 >> v45) & v29[(v24 >> 5) - 9]) != 0 )
          {
            if ( v28 >= 0x34 )
            {
              LODWORD(v41) = 52;
              LODWORD(v40) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_calloutmarkerping_mp.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( localCalloutMarkerPingPSViewIndex ) < (unsigned)( 13 * 4 )", "localCalloutMarkerPingPSViewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v40, v41) )
                __debugbreak();
            }
            if ( v32 == 12 )
            {
              *p_yOffset = *(_BYTE *)v29;
              v33 = (int)*((float *)v29 - 10);
              if ( (unsigned int)(v33 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v33, "signed", v33) )
                __debugbreak();
              *((_WORD *)p_yOffset - 2) = v33;
            }
            else if ( v32 == 8 || (unsigned __int8)(v32 - 4) <= 2u )
            {
              *((_WORD *)p_yOffset - 2) = *((_WORD *)v29 - 2);
              v37 = (int)(float)(0.25 * *((float *)v29 - 12));
              if ( (unsigned int)(v37 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)v37, "signed", v37) )
                __debugbreak();
              p_yOffset[1] = v37;
              v38 = (int)(float)(0.25 * *((float *)v29 - 11));
              if ( (unsigned int)(v38 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)v38, "signed", v38) )
                __debugbreak();
              *p_yOffset = v38;
              v39 = (int)*((float *)v29 - 10);
              if ( (unsigned int)(v39 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v39, "signed", v39) )
                __debugbreak();
              *((_WORD *)p_yOffset - 1) = v39;
            }
            else if ( (unsigned __int8)(v32 - 9) > 2u )
            {
              if ( v32 == 7 )
              {
                *((_WORD *)p_yOffset - 2) = *((unsigned __int8 *)v29 + 1);
              }
              else
              {
                v34 = (int)(float)(0.5 * *((float *)v29 - 12));
                if ( v34 > 0x7FFF )
                  v34 = 0x7FFF;
                if ( v34 < -32768 )
                  LOWORD(v34) = 0x8000;
                *((_WORD *)p_yOffset - 2) = v34;
                v35 = (int)(float)(0.5 * *((float *)v29 - 11));
                if ( v35 > 0x7FFF )
                  v35 = 0x7FFF;
                if ( v35 < -32768 )
                  LOWORD(v35) = 0x8000;
                *((_WORD *)p_yOffset - 1) = v35;
                v36 = (int)*((float *)v29 - 10);
                if ( v36 > 0x7FFF )
                  v36 = 0x7FFF;
                if ( v36 < -32768 )
                  LOWORD(v36) = 0x8000;
                *(_WORD *)p_yOffset = v36;
              }
            }
            else
            {
              *((_DWORD *)p_yOffset - 1) = *(v29 - 2);
            }
            p_yOffset[2] = v27 + 1;
            p_yOffset[3] = *((_BYTE *)v29 - 1);
          }
        }
        v29 += 15;
        ++v28;
        p_yOffset += 8;
      }
      while ( (int)(v28 + v26) < 13 );
      v25 = v43 + 13;
      v43 += 13;
      v26 -= 13;
      v9 = v47 + 1;
      v47 = v9;
      EntityPlayerState = v46;
    }
    while ( v9 < v48 );
  }
  Profile_EndInternal(NULL);
}

