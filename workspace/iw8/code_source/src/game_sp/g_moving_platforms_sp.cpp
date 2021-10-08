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
  unsigned int Instance; 
  Bounds bounds; 
  tmat33_t<vec3_t> out; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = hit;
  if ( hit->r.modelType != 4 || (hit->c.trigger.flags & 1) == 0 || !ent->client )
    return 0i64;
  __asm
  {
    vmovups xmm0, xmmword ptr [r9]
    vmovsd  xmm1, qword ptr [r9+10h]
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovups xmmword ptr [rsp+130h+bounds.midPoint+8], xmm0
    vmovsd  qword ptr [rsp+130h+var_F0], xmm1
  }
  AnglesToAxis(&hit->r.currentAngles, &axis);
  MatrixTranspose(&axis, &out);
  __asm
  {
    vmovss  xmm8, dword ptr [rsi+130h]
    vmovss  xmm9, dword ptr [rsi+134h]
    vmovss  xmm10, dword ptr [rsi+138h]
    vmovss  xmm0, dword ptr [rsp+130h+bounds.midPoint+8]
    vmovss  xmm11, dword ptr [rsi+144h]
    vmovss  xmm1, dword ptr [rsp+130h+bounds.halfSize]
    vsubss  xmm7, xmm0, xmm8
    vmovss  xmm0, dword ptr [rsp+130h+bounds.halfSize+4]
    vmulss  xmm3, xmm7, dword ptr [rsp+130h+out]
    vsubss  xmm6, xmm0, xmm10
    vmulss  xmm0, xmm6, dword ptr [rsp+130h+out+18h]
    vsubss  xmm5, xmm1, xmm9
    vmulss  xmm2, xmm5, dword ptr [rsp+130h+out+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rsp+130h+out+4]
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+130h+out+1Ch]
    vmovss  dword ptr [rsp+130h+bounds.midPoint+8], xmm2
    vmulss  xmm2, xmm5, dword ptr [rsp+130h+out+10h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm7, dword ptr [rsp+130h+out+8]
    vmovss  xmm7, dword ptr [rsi+140h]
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+130h+out+20h]
    vmovss  xmm6, dword ptr [rsi+13Ch]
    vmovss  dword ptr [rsp+130h+bounds.halfSize], xmm2
    vmulss  xmm2, xmm5, dword ptr [rsp+130h+out+14h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
  }
  *(_QWORD *)_RSI->r.currentOrigin.v = 0i64;
  *(_QWORD *)&_RSI->r.currentOrigin.z = 0i64;
  __asm { vmovss  dword ptr [rsp+130h+bounds.halfSize+4], xmm2 }
  *(_QWORD *)&_RSI->r.currentAngles.y = 0i64;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RSI);
  if ( Instance != -1 )
  {
    AnglesToQuat(&_RSI->r.currentAngles, &quat);
    Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, Instance, &_RSI->r.currentOrigin, &quat, 1);
  }
  *result = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, (Bounds *)&bounds.midPoint.z, Instance, _RSI);
  __asm
  {
    vmovss  dword ptr [rsi+130h], xmm8
    vmovaps xmm8, [rsp+130h+var_58+8]
    vmovss  dword ptr [rsi+134h], xmm9
    vmovaps xmm9, [rsp+130h+var_68+8]
    vmovss  dword ptr [rsi+138h], xmm10
    vmovaps xmm10, [rsp+130h+var_78+8]
    vmovss  dword ptr [rsi+13Ch], xmm6
    vmovaps xmm6, [rsp+130h+var_38+8]
    vmovss  dword ptr [rsi+140h], xmm7
    vmovaps xmm7, [rsp+130h+var_48+8]
    vmovss  dword ptr [rsi+144h], xmm11
    vmovaps xmm11, [rsp+130h+var_88+8]
  }
  if ( Instance != -1 )
  {
    AnglesToQuat(&_RSI->r.currentAngles, &quat);
    Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, Instance, &_RSI->r.currentOrigin, &quat, 1);
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
  int m_lastValidGroundTime; 
  GHandler *Handler; 
  int p[4]; 
  GMovingPlatformClient v14; 

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
      _RBX = &v4->m_moverClientArray[v6];
      GMovingPlatformClient::GMovingPlatformClient(&v14);
      SaveField = GMovingPlatforms::GetSaveField(v4);
      G_SaveFieldSP_ReadStruct(SaveField, (unsigned __int8 *)&v14, 88, save);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0C8h+var_88.m_deferredData.backupOrigin]
        vmovaps xmm1, xmmword ptr [rsp+0C8h+var_88.m_deferredData.deltaAngles+8]
      }
      v4->m_moverClientArray[v6].m_bgHandler = v14.m_bgHandler;
      v4->m_moverClientArray[v6].m_localClientNum = v14.m_localClientNum;
      v4->m_moverClientArray[v6].m_contactEnt = v14.m_contactEnt;
      v4->m_moverClientArray[v6].m_clientID = v14.m_clientID;
      v4->m_moverClientArray[v6].paddForSaveSizeAssertBase = v14.paddForSaveSizeAssertBase;
      v4->m_moverClientArray[v6].m_moverAppliedDelta.v[2] = v14.m_moverAppliedDelta.v[2];
      m_lastValidGroundTime = v14.m_lastValidGroundTime;
      __asm { vmovups ymmword ptr [rbx+20h], ymm0 }
      v4->m_moverClientArray[v6].m_lastValidGroundTime = m_lastValidGroundTime;
      __asm { vmovups xmmword ptr [rbx+40h], xmm1 }
      Handler = GHandler::getHandler();
      BGMovingPlatformClient::SetHandler(_RBX, Handler);
      ++v6;
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
  const saveField_t *SaveField; 
  unsigned int p[4]; 
  unsigned __int8 dest[8]; 
  const BgHandler *m_bgHandler; 
  LocalClientNum_t m_localClientNum; 
  int m_contactEnt; 
  int m_clientID; 
  int paddForSaveSizeAssertBase; 
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
    _RBX = (const unsigned __int8 *)&v2->m_moverClientArray[v4];
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+20h]
      vmovups xmm1, xmmword ptr [rbx+40h]
    }
    m_contactEnt = v2->m_moverClientArray[v4].m_contactEnt;
    m_clientID = v2->m_moverClientArray[v4].m_clientID;
    paddForSaveSizeAssertBase = v2->m_moverClientArray[v4].paddForSaveSizeAssertBase;
    v18 = v2->m_moverClientArray[v4].m_moverAppliedDelta.v[2];
    m_lastValidGroundTime = v2->m_moverClientArray[v4].m_lastValidGroundTime;
    *(_QWORD *)dest = &GMovingPlatformClient::`vftable';
    __asm
    {
      vmovups [rsp+0C8h+var_68], ymm0
      vmovaps [rsp+0C8h+var_48], xmm1
    }
    SaveField = GMovingPlatforms::GetSaveField(v2);
    G_SaveFieldSP_WriteStruct(SaveField, _RBX, dest, 88, memFile);
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

