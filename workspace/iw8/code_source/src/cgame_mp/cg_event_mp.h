/*
==============
CG_EventMP_FinalizeEventLodData
==============
*/

void __fastcall CG_EventMP_FinalizeEventLodData(CgEventLodData *eventLodData)
{
  ?CG_EventMP_FinalizeEventLodData@@YAXAEAUCgEventLodData@@@Z(eventLodData);
}

/*
==============
CgEventSystemMP::ClearEventSystem
==============
*/

void __fastcall CgEventSystemMP::ClearEventSystem(const LocalClientNum_t localClientNum)
{
  ?ClearEventSystem@CgEventSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_EventMP_FinalizeEventLodData
==============
*/
void CG_EventMP_FinalizeEventLodData(CgEventLodData *eventLodData)
{
  const dvar_t *v1; 
  CgEventLod enabled; 
  const dvar_t *v4; 
  CgEventLodFOV v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  double Float_Internal_DebugName; 

  v1 = DCONST_DVARINT_cg_event_forceLod;
  if ( !DCONST_DVARINT_cg_event_forceLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_forceLod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  enabled = v1->current.enabled;
  if ( enabled == CG_EVENT_LOD_FULL_RES || g_cgEventCosHalfNarrowFOVAngle < eventLodData->cosAngleFromLookAt )
    goto LABEL_11;
  v4 = DCONST_DVARFLT_cg_eventLod_FOVbubble;
  if ( !DCONST_DVARFLT_cg_eventLod_FOVbubble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_eventLod_FOVbubble") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.value < eventLodData->distance )
    v5 = (eventLodData->cosAngleFromLookAt <= 0.5) + 1;
  else
LABEL_11:
    v5 = CG_EVENT_LOD_NARROW_FOV;
  eventLodData->fovLod = v5;
  if ( enabled == CG_EVENT_LOD_COUNT )
  {
    v6 = DCONST_DVARFLT_cg_eventLodDistance_Lod0;
    if ( !DCONST_DVARFLT_cg_eventLodDistance_Lod0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_eventLodDistance_Lod0") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.value < eventLodData->distance )
    {
      v7 = DCONST_DVARFLT_cg_eventLodDistance_Lod1;
      if ( !DCONST_DVARFLT_cg_eventLodDistance_Lod1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_eventLodDistance_Lod1") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.value < eventLodData->distance )
      {
        v8 = DCONST_DVARFLT_cg_eventLodDistance_Lod2;
        if ( !DCONST_DVARFLT_cg_eventLodDistance_Lod2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_eventLodDistance_Lod2") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.value < eventLodData->distance )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_eventLodDistance_Lod3, "cg_eventLodDistance_Lod3");
          if ( *(float *)&Float_Internal_DebugName < eventLodData->distance )
            eventLodData->distanceLod = CG_EVENT_LOD4;
          else
            eventLodData->distanceLod = CG_EVENT_LOD3;
        }
        else
        {
          eventLodData->distanceLod = CG_EVENT_LOD2;
        }
      }
      else
      {
        eventLodData->distanceLod = CG_EVENT_LOD1;
      }
    }
    else
    {
      eventLodData->distanceLod = CG_EVENT_LOD0;
    }
  }
  else
  {
    eventLodData->distanceLod = enabled;
  }
}

/*
==============
CgEventSystemMP::ClearEventSystem
==============
*/
void CgEventSystemMP::ClearEventSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgEventSystem **v2; 
  CgEventSystem *v3; 
  CgEventSystem *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 

  v1 = localClientNum;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF_HALF )
  {
    v8 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 300, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tCgEventSystem::ClearEventSystemCommon: Trying to clear event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v7, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgEventSystem::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = &CgEventSystem::ms_eventSystemArray[v1];
  ((void (__fastcall *)(CgEventSystem *, _QWORD))(*v2)->~CgEventSystem)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  v4 = *v2;
  v4->__vftable = (CgEventSystem_vtbl *)&CgEventSystemMP::`vftable';
  v4->m_localClientNum = v1;
  CG_Event_Debug_Init((LocalClientNum_t)v1);
}

