/*
==============
CG_WaitWorkerTrace
==============
*/

void __fastcall CG_WaitWorkerTrace(workerTrace_t *results)
{
  ?CG_WaitWorkerTrace@@YAXPEAUworkerTrace_t@@@Z(results);
}

/*
==============
CG_StartWorkerPointTraceInView
==============
*/

void __fastcall CG_StartWorkerPointTraceInView(const LocalClientNum_t localClientNum, workerTrace_t *workerResults, const vec3_t *start, const vec3_t *end, const int *const ignoreEnts, int ignoreEntCount, int contentMask, bool locational, bool staticModels, Physics_QueryPhaseSelection phaseSelection, unsigned __int8 *priorityMap)
{
  ?CG_StartWorkerPointTraceInView@@YAXW4LocalClientNum_t@@PEAUworkerTrace_t@@AEBTvec3_t@@2QEBHHH_N4W4Physics_QueryPhaseSelection@@PEAE@Z(localClientNum, workerResults, start, end, ignoreEnts, ignoreEntCount, contentMask, locational, staticModels, phaseSelection, priorityMap);
}

/*
==============
CG_StartWorkerGroundTrace
==============
*/

void __fastcall CG_StartWorkerGroundTrace(const LocalClientNum_t localClientNum, workerTrace_t *workerResults, const vec3_t *start, const vec3_t *end, const int *const ignoreEnts, int ignoreEntCount, int contentMask, bool locational, bool staticModels, Physics_QueryPhaseSelection phaseSelection, unsigned __int8 *priorityMap)
{
  ?CG_StartWorkerGroundTrace@@YAXW4LocalClientNum_t@@PEAUworkerTrace_t@@AEBTvec3_t@@2QEBHHH_N4W4Physics_QueryPhaseSelection@@PEAE@Z(localClientNum, workerResults, start, end, ignoreEnts, ignoreEntCount, contentMask, locational, staticModels, phaseSelection, priorityMap);
}

/*
==============
CG_CalcTraceEnd
==============
*/

int __fastcall CG_CalcTraceEnd(LocalClientNum_t localClientNum, int skelTimeStamp, const vec3_t *viewOffset, int entIndex, scr_string_t tagName, vec3_t *outEnd)
{
  return ?CG_CalcTraceEnd@@YAHW4LocalClientNum_t@@HAEBTvec3_t@@HW4scr_string_t@@AEAT2@@Z(localClientNum, skelTimeStamp, viewOffset, entIndex, tagName, outEnd);
}

/*
==============
CG_LocationTraceDobjCalcPose
==============
*/

void __fastcall CG_LocationTraceDobjCalcPose(const DObj *dobj, const cpose_t *pose, DObjPartBits *partBits)
{
  ?CG_LocationTraceDobjCalcPose@@YAXPEBUDObj@@PEBUcpose_t@@PEAUDObjPartBits@@@Z(dobj, pose, partBits);
}

/*
==============
CG_InitTraceCmd
==============
*/

void __fastcall CG_InitTraceCmd(const LocalClientNum_t localClientNum, TraceWorkerCmd *cmd)
{
  ?CG_InitTraceCmd@@YAXW4LocalClientNum_t@@PEAUTraceWorkerCmd@@@Z(localClientNum, cmd);
}

/*
==============
CG_WorkerTraceTimeout
==============
*/

bool __fastcall CG_WorkerTraceTimeout(void *__formal)
{
  return ?CG_WorkerTraceTimeout@@YA_NPEAX@Z(__formal);
}

/*
==============
CG_CalcTraceEnd
==============
*/
__int64 CG_CalcTraceEnd(LocalClientNum_t localClientNum, int skelTimeStamp, const vec3_t *viewOffset, int entIndex, scr_string_t tagName, vec3_t *outEnd)
{
  vec3_t *v6; 
  __int64 v8; 
  __int64 v10; 
  CgEntitySystem *v11; 
  __int64 v12; 
  scr_string_t v13; 
  unsigned int v14; 
  unsigned int v15; 
  const DObj *v16; 
  DObjAnimMat *RotTransArray; 
  __int64 v18; 
  int v19; 
  float v20; 
  float v21; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v27; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  v6 = outEnd;
  v8 = localClientNum;
  v10 = entIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x800 )
  {
    LODWORD(v38) = 2048;
    LODWORD(v37) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 58, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v38) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v38) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v38) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v37) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v37, v38) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v8] )
  {
    LODWORD(v38) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v38) )
      __debugbreak();
  }
  v11 = CgEntitySystem::ms_entitySystemArray[v8];
  if ( (unsigned int)v10 >= 0x800 )
  {
    LODWORD(v38) = 2048;
    LODWORD(v37) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v37, v38) )
      __debugbreak();
  }
  v12 = (__int64)&v11->m_entities[v10];
  if ( (*(_BYTE *)(v12 + 648) & 1) == 0 )
    return 0i64;
  v13 = tagName;
  g_cent = (centity_t *)v12;
  if ( tagName )
  {
    g_dobj = NULL;
    if ( (unsigned int)v10 > 0x9E4 )
    {
      LODWORD(v38) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v38) )
        __debugbreak();
    }
    if ( (unsigned int)v8 >= 2 )
    {
      LODWORD(v38) = 2;
      LODWORD(v37) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v37, v38) )
        __debugbreak();
    }
    v14 = v10 + 2533 * v8;
    if ( v14 >= 0x13CA )
    {
      LODWORD(v38) = v10 + 2533 * v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v38) )
        __debugbreak();
    }
    v15 = clientObjMap[v14];
    if ( v15 )
    {
      if ( v15 >= (unsigned int)s_objCount )
      {
        LODWORD(v38) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v38) )
          __debugbreak();
      }
      v16 = (const DObj *)s_objBuf[v15];
      if ( v16 )
      {
        g_dobj = (DObj *)v16;
        DObjLock(v16);
        if ( DObjSkelExistsConst(v16, skelTimeStamp) )
        {
          g_boneIndex = -1;
          inOutIndex = -2;
          if ( DObjGetBoneIndexInternal_67(v16, v13, &inOutIndex, &modelIndex) )
          {
            g_boneIndex = inOutIndex;
            if ( DObjSkelIsBoneUpToDate(v16, inOutIndex) )
            {
              g_mat = NULL;
              RotTransArray = DObjGetRotTransArray(v16);
              if ( RotTransArray )
              {
                g_mat = RotTransArray;
                v18 = inOutIndex;
                *(float *)&v19 = viewOffset->v[0] + RotTransArray[v18].trans.v[0];
                v6->v[0] = *(float *)&v19;
                v20 = RotTransArray[v18].trans.v[1] + viewOffset->v[1];
                v6->v[1] = v20;
                v21 = RotTransArray[v18].trans.v[2] + viewOffset->v[2];
                modelIndex = v19;
                v6->v[2] = v21;
                if ( (v19 & 0x7F800000) == 2139095040 || (*(float *)&modelIndex = v20, (LODWORD(v20) & 0x7F800000) == 2139095040) || (*(float *)&modelIndex = v21, (LODWORD(v21) & 0x7F800000) == 2139095040) )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 126, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outEnd )[0] ) && !IS_NAN( ( outEnd )[1] ) && !IS_NAN( ( outEnd )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outEnd )[0] ) && !IS_NAN( ( outEnd )[1] ) && !IS_NAN( ( outEnd )[2] )") )
                    __debugbreak();
                }
                DObjUnlock(v16);
                return 1i64;
              }
            }
          }
        }
        DObjUnlock(v16);
      }
    }
    return 0i64;
  }
  if ( !*(_QWORD *)(v12 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v12 + 48), (const cpose_t *)v12);
  FunctionPointer_origin((const vec4_t *)(v12 + 56), v6);
  if ( *(_BYTE *)(v12 + 2) )
  {
    _XMM0 = LODWORD(v6->v[0]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v27 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v27;
    __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
    _XMM0 = LODWORD(v6->v[1]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v27 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v27;
    _XMM0 = LODWORD(v6->v[2]);
    __asm
    {
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
    }
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v27 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v27;
    v6->v[1] = *(float *)&_XMM2;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    v6->v[2] = *(float *)&_XMM2;
    v6->v[0] = *(float *)&_XMM4;
  }
  else
  {
    *(float *)&_XMM4 = v6->v[0];
  }
  modelIndex = _XMM4;
  if ( (_XMM4 & 0x7F800000) == 2139095040 || (modelIndex = SLODWORD(v6->v[1]), (modelIndex & 0x7F800000) == 2139095040) || (modelIndex = SLODWORD(v6->v[2]), (modelIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 136, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outEnd )[0] ) && !IS_NAN( ( outEnd )[1] ) && !IS_NAN( ( outEnd )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outEnd )[0] ) && !IS_NAN( ( outEnd )[1] ) && !IS_NAN( ( outEnd )[2] )") )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
CG_InitTraceCmd
==============
*/
void CG_InitTraceCmd(const LocalClientNum_t localClientNum, TraceWorkerCmd *cmd)
{
  __int64 v2; 
  cg_t *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 

  v2 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 147, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  memset_0(cmd, 0, sizeof(TraceWorkerCmd));
  if ( (unsigned int)v2 >= cg_t::ms_allocatedCount )
  {
    v7 = cg_t::ms_allocatedCount;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v2] )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v6) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v6) )
      __debugbreak();
  }
  v4 = cg_t::ms_cgArray[v2];
  cmd->localClientNum = v2;
  cmd->skelTimeStamp = CL_Pose_GetSkelTimeStamp();
  cmd->viewOffset.v[0] = v4->refdef.viewOffset.v[0];
  cmd->viewOffset.v[1] = v4->refdef.viewOffset.v[1];
  cmd->viewOffset.v[2] = v4->refdef.viewOffset.v[2];
  cmd->boundsCylinder = 0;
  cmd->ps = NULL;
}

/*
==============
CG_LocationTraceDobjCalcPose
==============
*/
void CG_LocationTraceDobjCalcPose(const DObj *dobj, const cpose_t *pose, DObjPartBits *partBits)
{
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 31, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 32, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 33, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  DObjLock(dobj);
  CG_Pose_CalcDObjPose(pose, dobj, partBits);
  DObjUnlock(dobj);
  if ( !DObjSkelAreBonesUpToDate(dobj, partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 45, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( dobj, partBits ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( dobj, partBits )") )
    __debugbreak();
}

/*
==============
CG_StartWorkerGroundTrace
==============
*/
void CG_StartWorkerGroundTrace(const LocalClientNum_t localClientNum, workerTrace_t *workerResults, const vec3_t *start, const vec3_t *end, const int *const ignoreEnts, int ignoreEntCount, int contentMask, bool locational, bool staticModels, Physics_QueryPhaseSelection phaseSelection, unsigned __int8 *priorityMap)
{
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  workerTrace_t *data; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  Bounds v29; 
  int v30; 
  LocalClientNum_t v31; 
  TraceExtents extents; 
  char v33[32]; 
  int v34; 
  int v35; 
  BOOL v36; 
  int v37; 
  unsigned __int8 *v38; 
  __int64 v39; 
  Physics_QueryPhaseSelection v40; 
  char v41; 
  __int64 v42; 

  if ( ((unsigned __int8)workerResults & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 197, ASSERT_TYPE_ASSERT, "(( (uintptr_t)workerResults & 127 ) == 0)", (const char *)&queryFormat, "( (uintptr_t)workerResults & 127 ) == 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 198, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( ignoreEntCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 199, ASSERT_TYPE_ASSERT, "(ignoreEntCount <= 8)", (const char *)&queryFormat, "ignoreEntCount <= MAX_WORKER_IGNORE_ENTS") )
    __debugbreak();
  v15 = end->v[0];
  v16 = end->v[1];
  v17 = end->v[2];
  v18 = start->v[0];
  v19 = start->v[1];
  v20 = start->v[2];
  v30 = contentMask;
  v35 = contentMask;
  v22 = (2 * staticModels) | 0x11;
  v36 = locational;
  v23 = v18;
  v24 = v19;
  v25 = v20;
  v26 = v15;
  v27 = v16;
  v28 = v17;
  v31 = localClientNum;
  v39 = -1i64;
  v37 = 0;
  memcpy_0(v33, ignoreEnts, 4i64 * ignoreEntCount);
  v34 = ignoreEntCount;
  extents.start.v[0] = v18;
  extents.start.v[1] = v19;
  extents.start.v[2] = v20;
  extents.end.v[0] = v15;
  extents.end.v[1] = v16;
  extents.end.v[2] = v17;
  v38 = priorityMap;
  CM_CalcTraceExtents(&extents);
  v29 = bounds_origin;
  v40 = phaseSelection;
  data = workerResults;
  v41 = 0;
  v42 = 0i64;
  workerResults->state = 1;
  Sys_AddWorkerCmd(WRKCMD_TRACE_GROUND, &data);
}

/*
==============
CG_StartWorkerPointTraceInView
==============
*/
void CG_StartWorkerPointTraceInView(const LocalClientNum_t localClientNum, workerTrace_t *workerResults, const vec3_t *start, const vec3_t *end, const int *const ignoreEnts, int ignoreEntCount, int contentMask, bool locational, bool staticModels, Physics_QueryPhaseSelection phaseSelection, unsigned __int8 *priorityMap)
{
  __int64 v14; 
  cg_t *v15; 
  int SkelTimeStamp; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  __int64 v25; 
  workerTrace_t *data; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  Bounds v34; 
  int v35; 
  float v36; 
  float v37; 
  float v38; 
  int v39; 
  int v40; 
  TraceExtents extents; 
  char v42[32]; 
  int v43; 
  int v44; 
  BOOL v45; 
  int v46; 
  unsigned __int8 *v47; 
  __int64 v48; 
  Physics_QueryPhaseSelection v49; 
  char v50; 
  __int64 v51; 

  v14 = localClientNum;
  if ( ((unsigned __int8)workerResults & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 242, ASSERT_TYPE_ASSERT, "(( (uintptr_t)workerResults & 127 ) == 0)", (const char *)&queryFormat, "( (uintptr_t)workerResults & 127 ) == 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 243, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( ignoreEntCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 244, ASSERT_TYPE_ASSERT, "(ignoreEntCount <= 8)", (const char *)&queryFormat, "ignoreEntCount <= MAX_WORKER_IGNORE_ENTS") )
    __debugbreak();
  if ( workerResults->state == 1 && workerResults->state != 2 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "wait trace");
    if ( g_mainThreadWaitTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 174, ASSERT_TYPE_ASSERT, "(g_mainThreadWaitTrace == 0)", (const char *)&queryFormat, "g_mainThreadWaitTrace == NULL") )
      __debugbreak();
    g_mainThreadWaitTrace = workerResults;
    Sys_ProcessWorkerCmdsWithTimeout(CG_WorkerTraceTimeout, NULL);
    g_mainThreadWaitTrace = NULL;
    Sys_ProfEndNamedEvent();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 147, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  memset_0(&data, 0, 0x120ui64);
  if ( (unsigned int)v14 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v24, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v14] )
  {
    LODWORD(v25) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v25) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v25) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v25) )
      __debugbreak();
  }
  v39 = v14;
  v15 = cg_t::ms_cgArray[v14];
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  v17 = start->v[0];
  v18 = start->v[1];
  v19 = start->v[2];
  v20 = end->v[0];
  v21 = end->v[1];
  v22 = end->v[2];
  v40 = SkelTimeStamp;
  v36 = v15->refdef.viewOffset.v[0];
  v37 = v15->refdef.viewOffset.v[1];
  v23 = v15->refdef.viewOffset.v[2];
  v27 = (2 * staticModels) | 0x11;
  v35 = contentMask;
  v44 = contentMask;
  v45 = locational;
  v38 = v23;
  v28 = v17;
  v29 = v18;
  v30 = v19;
  v31 = v20;
  v32 = v21;
  v33 = v22;
  v50 = 0;
  v51 = 0i64;
  v48 = -1i64;
  v46 = 0;
  memcpy_0(v42, ignoreEnts, 4i64 * ignoreEntCount);
  v47 = priorityMap;
  extents.start.v[0] = v17;
  extents.start.v[1] = v18;
  extents.start.v[2] = v19;
  extents.end.v[0] = v20;
  extents.end.v[1] = v21;
  extents.end.v[2] = v22;
  v43 = ignoreEntCount;
  CM_CalcTraceExtents(&extents);
  v34 = bounds_origin;
  v50 = 0;
  v51 = 0i64;
  v49 = phaseSelection;
  data = workerResults;
  workerResults->state = 1;
  Sys_AddWorkerCmd(WRKCMD_TRACE, &data);
}

/*
==============
CG_WaitWorkerTrace
==============
*/
void CG_WaitWorkerTrace(workerTrace_t *results)
{
  if ( results->state != 1 && results->state != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 168, ASSERT_TYPE_ASSERT, "(results->state == WORKER_TRACE_STARTED || results->state == WORKER_TRACE_FINISHED)", (const char *)&queryFormat, "results->state == WORKER_TRACE_STARTED || results->state == WORKER_TRACE_FINISHED") )
    __debugbreak();
  if ( results->state != 2 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "wait trace");
    if ( g_mainThreadWaitTrace )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 174, ASSERT_TYPE_ASSERT, "(g_mainThreadWaitTrace == 0)", (const char *)&queryFormat, "g_mainThreadWaitTrace == NULL") )
        __debugbreak();
    }
    g_mainThreadWaitTrace = results;
    Sys_ProcessWorkerCmdsWithTimeout(CG_WorkerTraceTimeout, NULL);
    g_mainThreadWaitTrace = NULL;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CG_WorkerTraceTimeout
==============
*/
bool CG_WorkerTraceTimeout(void *__formal)
{
  return g_mainThreadWaitTrace->state == 2;
}

