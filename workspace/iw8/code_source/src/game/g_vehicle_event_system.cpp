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
  char v4; 
  gentity_s *GEntity; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  float v15; 
  __int128 v16; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v26; 
  float v27; 
  double v28; 
  int v29; 
  vec3_t a; 
  vec3_t b; 

  v4 = surfaceData;
  if ( vehObj->m_worldId > (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 13, ASSERT_TYPE_ASSERT, "(vehObj.IsServer())", (const char *)&queryFormat, "vehObj.IsServer()") )
    __debugbreak();
  if ( !vehObj->m_pmoveObject )
  {
    GEntity = G_GetGEntity(vehObj->m_entityNumber);
    if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_event_system.cpp", 18, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
      __debugbreak();
    v8 = impactPosWs->v[0] - vehObj->m_transform.m[3].v[0];
    v10 = LODWORD(impactPosWs->v[1]);
    *(float *)&v10 = impactPosWs->v[1] - vehObj->m_transform.m[3].v[1];
    v9 = v10;
    v11 = impactPosWs->v[2] - vehObj->m_transform.m[3].v[2];
    *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v8 * v8)) + (float)(v11 * v11));
    _XMM1 = v10;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm8, xmm0
    }
    v15 = v8 * (float)(1.0 / *(float *)&_XMM0);
    v16 = v9;
    *(float *)&v9 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v16 = fsqrt((float)(*(float *)&v9 * *(float *)&v9) + (float)(v15 * v15));
    _XMM3 = v16;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v20 = v15 * (float)(1.0 / *(float *)&_XMM0);
    v21 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
    *(_QWORD *)a.v = *(_QWORD *)vehObj->m_transform.m[0].v;
    v22 = *(unsigned __int64 *)a.v;
    *(float *)&v22 = fsqrt((float)(*(float *)&v22 * *(float *)&v22) + (float)(a.v[1] * a.v[1]));
    _XMM2 = v22;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    v26 = a.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v27 = a.v[1] * (float)(1.0 / *(float *)&_XMM0);
    b.v[0] = v20;
    a.v[0] = v26;
    a.v[1] = v27;
    b.v[1] = v21;
    b.v[2] = 0.0;
    a.v[2] = 0.0;
    if ( v20 == 0.0 && v21 == 0.0 || v26 == 0.0 && v27 == 0.0 || (v28 = SignedAngleBetween(&a, &b, &identityMatrix33.m[2]), COERCE_FLOAT(LODWORD(v28) & _xmm) <= degThres) )
    {
      v29 = 0;
    }
    else if ( *(float *)&v28 <= 40.0 || *(float *)&v28 > (float)(180.0 - degThres) )
    {
      v29 = 64;
      if ( COERCE_FLOAT(LODWORD(v28) & _xmm) > (float)(180.0 - degThres) )
        v29 = 128;
    }
    else
    {
      v29 = 192;
    }
    G_Utils_AddEvent(GEntity, 0xA6u, v29 | v4 & 0x3F);
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

