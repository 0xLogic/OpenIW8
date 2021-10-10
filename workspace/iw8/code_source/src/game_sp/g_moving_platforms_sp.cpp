/*
==============
GMovingPlatformsSP::GetClientFromEntity
==============
*/

GMovingPlatformClient *__fastcall GMovingPlatformsSP::GetClientFromEntity(GMovingPlatformsSP *this, gentity_s *ent)
{
  return ?GetClientFromEntity@GMovingPlatformsSP@@UEAAPEAVGMovingPlatformClient@@PEAUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatformsSP::SaveSP_Write
==============
*/

void __fastcall GMovingPlatformsSP::SaveSP_Write(MemoryFile *memFile)
{
  ?SaveSP_Write@GMovingPlatformsSP@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GMovingPlatformsSP::ShouldUseImprovedAimAlgorithm
==============
*/

int __fastcall GMovingPlatformsSP::ShouldUseImprovedAimAlgorithm(GMovingPlatformsSP *this)
{
  return ?ShouldUseImprovedAimAlgorithm@GMovingPlatformsSP@@UEAAHXZ(this);
}

/*
==============
GMovingPlatformsSP::HandleTrigger
==============
*/

int __fastcall GMovingPlatformsSP::HandleTrigger(GMovingPlatformsSP *this, gentity_s *ent, gentity_s *hit, Bounds *box, int *result)
{
  return ?HandleTrigger@GMovingPlatformsSP@@UEAAHPEAUgentity_s@@0PEAUBounds@@PEAH@Z(this, ent, hit, box, result);
}

/*
==============
GMovingPlatformsSP::ActorUpdateEntityMoverTracking
==============
*/

void __fastcall GMovingPlatformsSP::ActorUpdateEntityMoverTracking(GMovingPlatformsSP *this, gentity_s *ent, gentity_s *parent)
{
  ?ActorUpdateEntityMoverTracking@GMovingPlatformsSP@@UEAAXPEAUgentity_s@@0@Z(this, ent, parent);
}

/*
==============
GMovingPlatformsSP::ShouldHandleAsMovingPlatformThatIsActuallyMoving
==============
*/

int __fastcall GMovingPlatformsSP::ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatformsSP *this, const gentity_s *ent)
{
  return ?ShouldHandleAsMovingPlatformThatIsActuallyMoving@GMovingPlatformsSP@@UEAAHPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatformsSP::SaveSP_Read
==============
*/

void __fastcall GMovingPlatformsSP::SaveSP_Read(MemoryFile *memFile, SaveGame *save)
{
  ?SaveSP_Read@GMovingPlatformsSP@@SAXPEAUMemoryFile@@PEAUSaveGame@@@Z(memFile, save);
}

/*
==============
GMovingPlatformsSP::ActorUpdateEntityMoverTracking
==============
*/
void GMovingPlatformsSP::ActorUpdateEntityMoverTracking(GMovingPlatformsSP *this, gentity_s *ent, gentity_s *parent)
{
  __int64 groundEntNum; 
  gentity_s *v5; 

  if ( parent->s.eType == ET_ACTOR )
  {
    groundEntNum = parent->actor->Physics.groundEntNum;
    if ( (_DWORD)groundEntNum != 2047 )
    {
      if ( (!parent->actor->Physics.groundEntNum || (unsigned int)groundEntNum >= 0x7FF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_moving_platforms_sp.cpp", 143, ASSERT_TYPE_ASSERT, "( ( groundEnt >= 1 && groundEnt < ENTITYNUM_NONE ) )", "( groundEnt ) = %i", parent->actor->Physics.groundEntNum) )
        __debugbreak();
      v5 = &g_entities[groundEntNum];
      if ( G_IsEntityInUse(groundEntNum) )
      {
        if ( BGMovingPlatforms::IsPlatformType(v5->s.eType) )
          EntHandle::setEnt(&ent->movingPlatformTrack.m_trackEnt, v5);
      }
    }
  }
}

/*
==============
GMovingPlatformsSP::GetClientFromEntity
==============
*/
GMovingPlatformClient *GMovingPlatformsSP::GetClientFromEntity(GMovingPlatformsSP *this, gentity_s *ent)
{
  gclient_s *client; 
  GMovingPlatforms *v3; 
  unsigned int v4; 
  __int64 v6; 

  client = ent->client;
  if ( !client )
    return 0i64;
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v3 = GMovingPlatforms::ms_instance;
  if ( !client->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
    __debugbreak();
  v4 = client->movingPlatformHandle.m_objIndex - 1;
  if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( v4 >= 0xF8 )
  {
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v6, 248) )
      __debugbreak();
  }
  return &v3->m_moverClientArray[v4];
}

/*
==============
GMovingPlatformsSP::HandleTrigger
==============
*/
__int64 GMovingPlatformsSP::HandleTrigger(GMovingPlatformsSP *this, gentity_s *ent, gentity_s *hit, Bounds *box, int *result)
{
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  unsigned int Instance; 
  Bounds bounds; 
  double v21; 
  tmat33_t<vec3_t> out; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  if ( hit->r.modelType != 4 || (hit->c.trigger.flags & 1) == 0 || !ent->client )
    return 0i64;
  v6 = *(double *)&box->halfSize.y;
  *(_OWORD *)&bounds.midPoint.z = *(_OWORD *)box->midPoint.v;
  v21 = v6;
  AnglesToAxis(&hit->r.currentAngles, &axis);
  MatrixTranspose(&axis, &out);
  v7 = hit->r.currentOrigin.v[0];
  v8 = hit->r.currentOrigin.v[1];
  v9 = hit->r.currentOrigin.v[2];
  v10 = hit->r.currentAngles.v[2];
  v11 = bounds.midPoint.v[2] - v7;
  v12 = bounds.halfSize.v[0] - v8;
  bounds.midPoint.v[2] = (float)((float)((float)(bounds.midPoint.v[2] - v7) * out.m[0].v[0]) + (float)((float)(bounds.halfSize.v[0] - v8) * out.m[1].v[0])) + (float)((float)(bounds.halfSize.v[1] - v9) * out.m[2].v[0]);
  v13 = (float)(v11 * out.m[0].v[1]) + (float)((float)(bounds.halfSize.v[0] - v8) * out.m[1].v[1]);
  v14 = v11 * out.m[0].v[2];
  v15 = hit->r.currentAngles.v[1];
  v16 = hit->r.currentAngles.v[0];
  bounds.halfSize.v[0] = v13 + (float)((float)(bounds.halfSize.v[1] - v9) * out.m[2].v[1]);
  v17 = (float)(v14 + (float)(v12 * out.m[1].v[2])) + (float)((float)(bounds.halfSize.v[1] - v9) * out.m[2].v[2]);
  *(_QWORD *)hit->r.currentOrigin.v = 0i64;
  *(_QWORD *)&hit->r.currentOrigin.z = 0i64;
  bounds.halfSize.v[1] = v17;
  *(_QWORD *)&hit->r.currentAngles.y = 0i64;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, hit);
  if ( Instance != -1 )
  {
    AnglesToQuat(&hit->r.currentAngles, &quat);
    Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, Instance, &hit->r.currentOrigin, &quat, 1);
  }
  *result = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, (Bounds *)&bounds.midPoint.z, Instance, hit);
  hit->r.currentOrigin.v[0] = v7;
  hit->r.currentOrigin.v[1] = v8;
  hit->r.currentOrigin.v[2] = v9;
  hit->r.currentAngles.v[0] = v16;
  hit->r.currentAngles.v[1] = v15;
  hit->r.currentAngles.v[2] = v10;
  if ( Instance != -1 )
  {
    AnglesToQuat(&hit->r.currentAngles, &quat);
    Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, Instance, &hit->r.currentOrigin, &quat, 1);
  }
  return 1i64;
}

/*
==============
GMovingPlatformsSP::SaveSP_Read
==============
*/
void GMovingPlatformsSP::SaveSP_Read(MemoryFile *memFile, SaveGame *save)
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

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_moving_platforms_sp.cpp", 43, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_moving_platforms_sp.cpp", 44, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v4 = GMovingPlatforms::ms_instance;
  MemFile_ReadData(memFile, 4ui64, p);
  m_moverClientCount = v4->m_moverClientCount;
  if ( p[0] != m_moverClientCount )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E4AA30, 849i64);
    m_moverClientCount = v4->m_moverClientCount;
  }
  v6 = 0;
  if ( m_moverClientCount )
  {
    do
    {
      GMovingPlatformClient::GMovingPlatformClient(&v13);
      SaveField = GMovingPlatforms::GetSaveField(v4);
      G_SaveFieldSP_ReadStruct(SaveField, (unsigned __int8 *)&v13, 88, save);
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
GMovingPlatformsSP::SaveSP_Write
==============
*/
void GMovingPlatformsSP::SaveSP_Write(MemoryFile *memFile)
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

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_moving_platforms_sp.cpp", 23, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
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
    G_SaveFieldSP_WriteStruct(SaveField, v5, dest, 88, memFile);
  }
}

/*
==============
GMovingPlatformsSP::ShouldHandleAsMovingPlatformThatIsActuallyMoving
==============
*/
__int64 GMovingPlatformsSP::ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatformsSP *this, const gentity_s *ent)
{
  if ( ent && BGMovingPlatforms::IsPlatformType(ent->s.eType) )
    return (ent->flags.m_flags[0] >> 5) & 1;
  else
    return 0i64;
}

/*
==============
GMovingPlatformsSP::ShouldUseImprovedAimAlgorithm
==============
*/
__int64 GMovingPlatformsSP::ShouldUseImprovedAimAlgorithm(GMovingPlatformsSP *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARMPBOOL_moving_platform_improved_aim;
  if ( !DCONST_DVARMPBOOL_moving_platform_improved_aim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moving_platform_improved_aim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

