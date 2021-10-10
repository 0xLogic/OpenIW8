/*
==============
GMovingPlatformsMP::UpdateAllPlatformTracesForAgents
==============
*/

void __fastcall GMovingPlatformsMP::UpdateAllPlatformTracesForAgents(GMovingPlatformsMP *this)
{
  ?UpdateAllPlatformTracesForAgents@GMovingPlatformsMP@@UEAAXXZ(this);
}

/*
==============
GMovingPlatformsMP::ShouldHandleAsMovingPlatformThatIsActuallyMoving
==============
*/

int __fastcall GMovingPlatformsMP::ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatformsMP *this, const gentity_s *ent)
{
  return ?ShouldHandleAsMovingPlatformThatIsActuallyMoving@GMovingPlatformsMP@@UEAAHPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatformsMP::SaveMP_Read
==============
*/

void __fastcall GMovingPlatformsMP::SaveMP_Read(MemoryFile *memFile, SaveGame *save)
{
  ?SaveMP_Read@GMovingPlatformsMP@@SAXPEAUMemoryFile@@PEAUSaveGame@@@Z(memFile, save);
}

/*
==============
GMovingPlatformsMP::SaveMP_Write
==============
*/

void __fastcall GMovingPlatformsMP::SaveMP_Write(MemoryFile *memFile)
{
  ?SaveMP_Write@GMovingPlatformsMP@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GMovingPlatformsMP::ShouldAllowPlatformMovement
==============
*/

int __fastcall GMovingPlatformsMP::ShouldAllowPlatformMovement(GMovingPlatformsMP *this, gentity_s *character)
{
  return ?ShouldAllowPlatformMovement@GMovingPlatformsMP@@UEBAHPEAUgentity_s@@@Z(this, character);
}

/*
==============
GMovingPlatformsMP::GMovingPlatformsMP
==============
*/

void __fastcall GMovingPlatformsMP::GMovingPlatformsMP(GMovingPlatformsMP *this)
{
  ??0GMovingPlatformsMP@@QEAA@XZ(this);
}

/*
==============
GMovingPlatformsMP::GetClientFromEntity
==============
*/

GMovingPlatformClient *__fastcall GMovingPlatformsMP::GetClientFromEntity(GMovingPlatformsMP *this, gentity_s *ent)
{
  return ?GetClientFromEntity@GMovingPlatformsMP@@UEAAPEAVGMovingPlatformClient@@PEAUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatformsMP::GMovingPlatformsMP
==============
*/
void GMovingPlatformsMP::GMovingPlatformsMP(GMovingPlatformsMP *this)
{
  GMovingPlatforms::GMovingPlatforms(this);
  this->__vftable = (GMovingPlatformsMP_vtbl *)&GMovingPlatformsMP::`vftable';
}

/*
==============
GMovingPlatformsMP::GetClientFromEntity
==============
*/
GMovingPlatformClient *GMovingPlatformsMP::GetClientFromEntity(GMovingPlatformsMP *this, gentity_s *ent)
{
  gagent_s *agent; 
  gclient_s *client; 

  agent = ent->agent;
  if ( agent )
    return GMovingPlatforms::GetClientFromHandle(&agent->movingPlatformHandle);
  client = ent->client;
  if ( client )
    return GMovingPlatforms::GetClientFromHandle(&client->movingPlatformHandle);
  else
    return 0i64;
}

/*
==============
GMovingPlatformsMP::SaveMP_Read
==============
*/
void GMovingPlatformsMP::SaveMP_Read(MemoryFile *memFile, SaveGame *save)
{
  GMovingPlatforms *v4; 
  unsigned int m_moverClientCount; 
  unsigned int v6; 
  const saveField_t *SaveField; 
  __m256i v8; 
  __int128 v9; 
  int m_lastValidGroundTime; 
  GHandler *Handler; 
  int p[4]; 
  GMovingPlatformClient v13; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_moving_platforms_mp.cpp", 44, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_moving_platforms_mp.cpp", 45, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v4 = GMovingPlatforms::ms_instance;
  MemFile_ReadData(memFile, 4ui64, p);
  m_moverClientCount = v4->m_moverClientCount;
  if ( p[0] != m_moverClientCount )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E4AA30);
    m_moverClientCount = v4->m_moverClientCount;
  }
  v6 = 0;
  if ( m_moverClientCount )
  {
    do
    {
      GMovingPlatformClient::GMovingPlatformClient(&v13);
      SaveField = GMovingPlatforms::GetSaveField(v4);
      G_SaveFieldMP_ReadStruct(SaveField, (unsigned __int8 *)&v13, 88, save);
      v8 = *(__m256i *)v13.m_deferredData.backupOrigin.v;
      v9 = *(_OWORD *)&v13.m_deferredData.deltaAngles.z;
      v4->m_moverClientArray[v6].m_bgHandler = v13.m_bgHandler;
      v4->m_moverClientArray[v6].m_localClientNum = v13.m_localClientNum;
      v4->m_moverClientArray[v6].m_contactEnt = v13.m_contactEnt;
      v4->m_moverClientArray[v6].m_clientID = v13.m_clientID;
      v4->m_moverClientArray[v6].paddForSaveSizeAssertBase = v13.paddForSaveSizeAssertBase;
      v4->m_moverClientArray[v6].m_moverAppliedDelta.v[2] = v13.m_moverAppliedDelta.v[2];
      m_lastValidGroundTime = v13.m_lastValidGroundTime;
      *(__m256i *)v4->m_moverClientArray[v6].m_deferredData.backupOrigin.v = v8;
      v4->m_moverClientArray[v6].m_lastValidGroundTime = m_lastValidGroundTime;
      *(_OWORD *)&v4->m_moverClientArray[v6].m_deferredData.deltaAngles.z = v9;
      Handler = GHandler::getHandler();
      BGMovingPlatformClient::SetHandler(&v4->m_moverClientArray[v6++], Handler);
    }
    while ( v6 < v4->m_moverClientCount );
  }
}

/*
==============
GMovingPlatformsMP::SaveMP_Write
==============
*/
void GMovingPlatformsMP::SaveMP_Write(MemoryFile *memFile)
{
  GMovingPlatforms *v2; 
  unsigned int i; 
  __int64 v4; 
  const unsigned __int8 *v5; 
  __m256i v6; 
  __int128 v7; 
  const saveField_t *SaveField; 
  unsigned int p[4]; 
  unsigned __int8 dest[8]; 
  const BgHandler *m_bgHandler; 
  LocalClientNum_t m_localClientNum; 
  int m_contactEnt; 
  int m_clientID; 
  int paddForSaveSizeAssertBase; 
  __m256i v16; 
  __int128 v17; 
  float v18; 
  int m_lastValidGroundTime; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_moving_platforms_mp.cpp", 26, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v2 = GMovingPlatforms::ms_instance;
  p[0] = GMovingPlatforms::ms_instance->m_moverClientCount;
  MemFile_WriteData(memFile, 4ui64, p);
  for ( i = 0; i < v2->m_moverClientCount; ++i )
  {
    v4 = i;
    m_bgHandler = v2->m_moverClientArray[v4].m_bgHandler;
    m_localClientNum = v2->m_moverClientArray[v4].m_localClientNum;
    v5 = (const unsigned __int8 *)&v2->m_moverClientArray[v4];
    v6 = *(__m256i *)v2->m_moverClientArray[v4].m_deferredData.backupOrigin.v;
    v7 = *(_OWORD *)&v2->m_moverClientArray[v4].m_deferredData.deltaAngles.z;
    m_contactEnt = v2->m_moverClientArray[v4].m_contactEnt;
    m_clientID = v2->m_moverClientArray[v4].m_clientID;
    paddForSaveSizeAssertBase = v2->m_moverClientArray[v4].paddForSaveSizeAssertBase;
    v18 = v2->m_moverClientArray[v4].m_moverAppliedDelta.v[2];
    m_lastValidGroundTime = v2->m_moverClientArray[v4].m_lastValidGroundTime;
    *(_QWORD *)dest = &GMovingPlatformClient::`vftable';
    v16 = v6;
    v17 = v7;
    SaveField = GMovingPlatforms::GetSaveField(v2);
    G_SaveFieldMP_WriteStruct(SaveField, v5, dest, 88, memFile);
  }
}

/*
==============
GMovingPlatformsMP::ShouldAllowPlatformMovement
==============
*/
__int64 GMovingPlatformsMP::ShouldAllowPlatformMovement(GMovingPlatformsMP *this, gentity_s *character)
{
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface v5; 
  AIAgentInterface *v6; 

  AIAgentInterface::AIAgentInterface(&v5);
  v6 = NULL;
  v5.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  if ( SV_IsAgentScripted(character) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(character);
    if ( ScriptedAgentInfo )
    {
      v6 = &v5;
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v5, ScriptedAgentInfo);
    }
  }
  if ( v6 )
    return ((__int64 (__fastcall *)(AIAgentInterface *))v6->ShouldApplyPlatformMovement)(v6);
  else
    return 1i64;
}

/*
==============
GMovingPlatformsMP::ShouldHandleAsMovingPlatformThatIsActuallyMoving
==============
*/
_BOOL8 GMovingPlatformsMP::ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatformsMP *this, const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_moving_platforms_mp.cpp", 120, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return BGMovingPlatforms::IsPlatformType(ent->s.eType) != 0;
}

/*
==============
GMovingPlatformsMP::UpdateAllPlatformTracesForAgents
==============
*/
void GMovingPlatformsMP::UpdateAllPlatformTracesForAgents(GMovingPlatformsMP *this)
{
  unsigned int i; 
  signed int v2; 
  __int64 v3; 
  gentity_s *v4; 
  gagent_s *agent; 
  GMovingPlatforms *v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  for ( i = 0; (int)i < level.maxagents; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= ComCharacterLimits::ms_gameData.m_agentCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v9) = ComCharacterLimits::ms_gameData.m_agentCount;
      LODWORD(v8) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v2 = i + ComCharacterLimits::ms_gameData.m_clientCount;
    if ( i + ComCharacterLimits::ms_gameData.m_clientCount >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(v8) = i + ComCharacterLimits::ms_gameData.m_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v3 = v2;
    if ( g_entities[v3].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v2] )
    {
      v4 = &g_entities[v3];
      if ( !g_entities[v3].agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_moving_platforms_mp.cpp", 110, ASSERT_TYPE_ASSERT, "( ent->agent )", (const char *)&queryFormat, "ent->agent") )
        __debugbreak();
      agent = v4->agent;
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v6 = GMovingPlatforms::ms_instance;
      if ( !agent->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
        __debugbreak();
      v7 = agent->movingPlatformHandle.m_objIndex - 1;
      if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( v7 >= 0xF8 )
      {
        LODWORD(v9) = 248;
        LODWORD(v8) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      GMovingPlatformClient::UpdatePlatformTrace(&v6->m_moverClientArray[v7], v4, 0);
    }
  }
}

