/*
==============
GVehicleEventSystem::Horn
==============
*/

void __fastcall GVehicleEventSystem::Horn(GVehicleEventSystem *this, const BgVehiclePhysics *vehObj, unsigned int sndHash, bool checkForTime)
{
  ?Horn@GVehicleEventSystem@@UEAAXAEBVBgVehiclePhysics@@I_N@Z(this, vehObj, sndHash, checkForTime);
}

/*
==============
GVehicleEventSystem::CarImpact
==============
*/

void __fastcall GVehicleEventSystem::CarImpact(GVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData, const vec3_t *normal, bool playvfx)
{
  ?CarImpact@GVehicleEventSystem@@UEAAXAEBVBgVehiclePhysicsGround@@AEBTvec3_t@@I1_N@Z(this, vehObj, impactPosWs, surfaceData, normal, playvfx);
}

/*
==============
GVehicleEventSystem::CarImpact
==============
*/
void GVehicleEventSystem::CarImpact(GVehicleEventSystem *this, const BgVehiclePhysicsGround *vehObj, const vec3_t *impactPosWs, unsigned int surfaceData)
{
  char v7; 
  int m_entityNumber; 
  gentity_s *GEntity; 
  bool v12; 
  bool v13; 
  char v56; 
  char v57; 
  int v61; 
  vec3_t a; 
  vec3_t b; 

  v7 = surfaceData;
  _RBP = impactPosWs;
  _RDI = vehObj;
  if ( vehObj->m_worldId > (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 13, ASSERT_TYPE_ASSERT, "(vehObj.IsServer())", (const char *)&queryFormat, "vehObj.IsServer()") )
    __debugbreak();
  if ( !_RDI->m_pmoveObject )
  {
    m_entityNumber = _RDI->m_entityNumber;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm8
      vmovaps [rsp+0A8h+var_48], xmm9
    }
    GEntity = G_GetGEntity(m_entityNumber);
    v12 = GEntity == NULL;
    if ( !GEntity )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 18, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt");
      v12 = !v13;
      if ( v13 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rbp+0]
      vsubss  xmm6, xmm0, dword ptr [rdi+198h]
      vmovss  xmm1, dword ptr [rbp+4]
      vsubss  xmm5, xmm1, dword ptr [rdi+19Ch]
      vmovss  xmm0, dword ptr [rbp+8]
      vsubss  xmm4, xmm0, dword ptr [rdi+1A0h]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm4, xmm6, xmm1
      vmulss  xmm5, xmm5, xmm1
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm2, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm6, xmm4, xmm1
      vmovsd  xmm4, qword ptr [rdi+174h]
      vmulss  xmm9, xmm5, xmm1
      vmovsd  qword ptr [rsp+0A8h+a], xmm4
    }
    a.v[1] = *((float *)&_RT0 + 1);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0A8h+a+4]
      vmulss  xmm0, xmm3, xmm3
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmovaps xmm8, [rsp+0A8h+var_38]
      vxorps  xmm5, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm1
      vmulss  xmm0, xmm3, xmm1
      vmovss  dword ptr [rsp+0A8h+b], xmm6
      vucomiss xmm6, xmm5
      vmovaps xmm6, [rsp+0A8h+var_28]
      vmovss  dword ptr [rsp+0A8h+a], xmm2
      vmovss  dword ptr [rsp+0A8h+a+4], xmm0
      vmovss  dword ptr [rsp+0A8h+b+4], xmm9
      vmovss  dword ptr [rsp+0A8h+b+8], xmm5
      vmovss  dword ptr [rsp+0A8h+a+8], xmm5
    }
    if ( v12 )
    {
      __asm { vucomiss xmm9, xmm5 }
      if ( v12 )
        goto LABEL_13;
    }
    __asm { vucomiss xmm2, xmm5 }
    if ( v12 )
    {
      __asm { vucomiss xmm0, xmm5 }
      if ( v12 )
        goto LABEL_13;
    }
    *(double *)&_XMM0 = SignedAngleBetween(&a, &b, &identityMatrix33.m[2]);
    __asm
    {
      vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm3, cs:degThres
      vcomiss xmm1, xmm3
      vmovaps xmm2, xmm0
    }
    if ( v56 | v57 )
    {
LABEL_13:
      v61 = 0;
    }
    else
    {
      __asm
      {
        vcomiss xmm2, cs:__real@42200000
        vmovss  xmm4, cs:__real@43340000
      }
      if ( v56 | v57 )
        goto LABEL_17;
      __asm
      {
        vsubss  xmm0, xmm4, xmm3
        vcomiss xmm2, xmm0
      }
      if ( !(v56 | v57) )
      {
LABEL_17:
        __asm
        {
          vsubss  xmm0, xmm4, xmm3
          vcomiss xmm1, xmm0
        }
        v61 = 64;
        if ( !(v56 | v57) )
          v61 = 128;
      }
      else
      {
        v61 = 192;
      }
    }
    G_Utils_AddEvent(GEntity, 0xA6u, v61 | v7 & 0x3F);
    __asm { vmovaps xmm9, [rsp+0A8h+var_48] }
  }
}

/*
==============
GVehicleEventSystem::Horn
==============
*/
void GVehicleEventSystem::Horn(GVehicleEventSystem *this, const BgVehiclePhysics *vehObj, unsigned int sndHash, bool checkForTime)
{
  const dvar_t *v4; 
  signed int v7; 
  int time; 
  __int64 v9; 
  int v10; 
  int *v11; 
  gentity_s *GEntity; 
  unsigned int v13; 

  v4 = DVARBOOL_vehicle_horn_enabled;
  if ( !DVARBOOL_vehicle_horn_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_horn_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( vehObj->m_worldId > (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 67, ASSERT_TYPE_ASSERT, "(vehObj.IsServer())", (const char *)&queryFormat, "vehObj.IsServer()") )
      __debugbreak();
    if ( !vehObj->m_pmoveObject && vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_HORN) )
    {
      v7 = vehObj->m_vehicleId - 1;
      if ( v7 < 0 )
        v7 = 0;
      if ( v7 >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 75, ASSERT_TYPE_ASSERT, "(vehicleIndex < (1 << 7))", (const char *)&queryFormat, "vehicleIndex < MAX_VEHICLES") )
        __debugbreak();
      time = level.time;
      v9 = v7;
      v10 = level.time - this->m_lastEventTimes[v7][0];
      v11 = this->m_lastEventTimes[v9];
      if ( v10 >= Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehEvHornShortTime, "bg_vehEvHornShortTime") )
      {
        GEntity = G_GetGEntity(vehObj->m_entityNumber);
        if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 86, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
          __debugbreak();
        v13 = vehObj->GetSoundHorn((BgVehiclePhysics *)vehObj);
        G_Utils_AddEvent(GEntity, 0xA9u, v13);
        *v11 = time;
      }
    }
  }
}

