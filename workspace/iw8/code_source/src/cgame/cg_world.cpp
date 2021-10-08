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
  __int64 v8; 
  __int64 v10; 
  CgEntitySystem *v11; 
  __int64 v12; 
  scr_string_t v13; 
  unsigned int v14; 
  unsigned int v15; 
  const DObj *v16; 
  int v25; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v43; 
  __int64 v44; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  _RDI = outEnd;
  _R15 = viewOffset;
  v8 = localClientNum;
  v10 = entIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x800 )
  {
    LODWORD(v44) = 2048;
    LODWORD(v43) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 58, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v44) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v44) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v44) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v43) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v8] )
  {
    LODWORD(v44) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v44) )
      __debugbreak();
  }
  v11 = CgEntitySystem::ms_entitySystemArray[v8];
  if ( (unsigned int)v10 >= 0x800 )
  {
    LODWORD(v44) = 2048;
    LODWORD(v43) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v43, v44) )
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
      LODWORD(v44) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v44) )
        __debugbreak();
    }
    if ( (unsigned int)v8 >= 2 )
    {
      LODWORD(v44) = 2;
      LODWORD(v43) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    v14 = v10 + 2533 * v8;
    if ( v14 >= 0x13CA )
    {
      LODWORD(v44) = v10 + 2533 * v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v44) )
        __debugbreak();
    }
    v15 = clientObjMap[v14];
    if ( v15 )
    {
      if ( v15 >= (unsigned int)s_objCount )
      {
        LODWORD(v44) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v44) )
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
              _RAX = DObjGetRotTransArray(v16);
              if ( _RAX )
              {
                g_mat = _RAX;
                __asm { vmovss  xmm0, dword ptr [r15] }
                _RCX = 32i64 * inOutIndex;
                __asm
                {
                  vaddss  xmm2, xmm0, dword ptr [rcx+rax+10h]
                  vmovss  dword ptr [rdi], xmm2
                  vmovss  xmm1, dword ptr [rcx+rax+14h]
                  vaddss  xmm3, xmm1, dword ptr [r15+4]
                  vmovss  dword ptr [rdi+4], xmm3
                  vmovss  xmm0, dword ptr [rcx+rax+18h]
                  vaddss  xmm1, xmm0, dword ptr [r15+8]
                  vmovss  [rsp+78h+modelIndex], xmm2
                }
                v25 = modelIndex & 0x7F800000;
                __asm { vmovss  dword ptr [rdi+8], xmm1 }
                if ( v25 == 2139095040 )
                  goto LABEL_64;
                __asm { vmovss  [rsp+78h+modelIndex], xmm3 }
                if ( (modelIndex & 0x7F800000) == 2139095040 )
                  goto LABEL_64;
                __asm { vmovss  [rsp+78h+modelIndex], xmm1 }
                if ( (modelIndex & 0x7F800000) == 2139095040 )
                {
LABEL_64:
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
  FunctionPointer_origin((const vec4_t *)(v12 + 56), _RDI);
  if ( *(_BYTE *)(v12 + 2) )
  {
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, dword ptr [rdi]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm4, xmm0, xmm0
      vmovd   xmm0, dword ptr [rdi+4]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm1, xmm0, xmm3
      vmovd   xmm0, dword ptr [rdi+8]
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm1, xmm0, xmm3
      vmovss  dword ptr [rdi+4], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  dword ptr [rdi], xmm4
    }
  }
  else
  {
    __asm { vmovss  xmm4, dword ptr [rdi] }
  }
  __asm { vmovss  [rsp+78h+modelIndex], xmm4 }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_65;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+78h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_65;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+78h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
  {
LABEL_65:
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
  workerTrace_t *data; 
  int v38; 
  int v45; 
  LocalClientNum_t v46; 
  TraceExtents extents; 
  char v48[32]; 
  int v49; 
  int v50; 
  BOOL v51; 
  int v52; 
  unsigned __int8 *v53; 
  __int64 v54; 
  Physics_QueryPhaseSelection v55; 
  char v56; 
  __int64 v57; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RSI = end;
  _R14 = start;
  if ( ((unsigned __int8)workerResults & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 197, ASSERT_TYPE_ASSERT, "(( (uintptr_t)workerResults & 127 ) == 0)", (const char *)&queryFormat, "( (uintptr_t)workerResults & 127 ) == 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 198, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( ignoreEntCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_world.cpp", 199, ASSERT_TYPE_ASSERT, "(ignoreEntCount <= 8)", (const char *)&queryFormat, "ignoreEntCount <= MAX_WORKER_IGNORE_ENTS") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rsi]
    vmovss  xmm7, dword ptr [rsi+4]
    vmovss  xmm6, dword ptr [rsi+8]
    vmovss  xmm11, dword ptr [r14]
    vmovss  xmm10, dword ptr [r14+4]
    vmovss  xmm9, dword ptr [r14+8]
  }
  v45 = contentMask;
  v50 = contentMask;
  v38 = (2 * staticModels) | 0x11;
  v51 = locational;
  __asm
  {
    vmovss  [rsp+1F0h+var_1B4], xmm11
    vmovss  [rsp+1F0h+var_1B0], xmm10
    vmovss  [rsp+1F0h+var_1AC], xmm9
    vmovss  [rsp+1F0h+var_1A8], xmm8
    vmovss  dword ptr [rsp+1F0h+var_1A4], xmm7
    vmovss  dword ptr [rsp+1F0h+var_1A4+4], xmm6
  }
  v46 = localClientNum;
  v54 = -1i64;
  v52 = 0;
  memcpy_0(v48, ignoreEnts, 4i64 * ignoreEntCount);
  v49 = ignoreEntCount;
  __asm
  {
    vmovss  dword ptr [rbp+0F0h+extents.start], xmm11
    vmovss  dword ptr [rbp+0F0h+extents.start+4], xmm10
    vmovss  dword ptr [rbp+0F0h+extents.start+8], xmm9
    vmovss  dword ptr [rbp+0F0h+extents.end], xmm8
    vmovss  dword ptr [rbp+0F0h+extents.end+4], xmm7
    vmovss  dword ptr [rbp+0F0h+extents.end+8], xmm6
  }
  v53 = priorityMap;
  CM_CalcTraceExtents(&extents);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
    vmovsd  xmm1, qword ptr cs:?bounds_origin@@3UBounds@@B.halfSize+4; Bounds const bounds_origin
    vmovups xmmword ptr [rsp+1F0h+var_1A4+8], xmm0
    vmovsd  [rsp+1F0h+var_18C], xmm1
  }
  v55 = phaseSelection;
  data = workerResults;
  v56 = 0;
  v57 = 0i64;
  workerResults->state = 1;
  Sys_AddWorkerCmd(WRKCMD_TRACE_GROUND, &data);
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_StartWorkerPointTraceInView
==============
*/
void CG_StartWorkerPointTraceInView(const LocalClientNum_t localClientNum, workerTrace_t *workerResults, const vec3_t *start, const vec3_t *end, const int *const ignoreEnts, int ignoreEntCount, int contentMask, bool locational, bool staticModels, Physics_QueryPhaseSelection phaseSelection, unsigned __int8 *priorityMap)
{
  __int64 v21; 
  int SkelTimeStamp; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  workerTrace_t *data; 
  int v46; 
  int v53; 
  int v57; 
  int v58; 
  TraceExtents extents; 
  char v60[32]; 
  int v61; 
  int v62; 
  BOOL v63; 
  int v64; 
  unsigned __int8 *v65; 
  __int64 v66; 
  Physics_QueryPhaseSelection v67; 
  char v68; 
  __int64 v69; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _R15 = end;
  _R12 = start;
  v21 = localClientNum;
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
  if ( (unsigned int)v21 >= cg_t::ms_allocatedCount )
  {
    v44 = cg_t::ms_allocatedCount;
    LODWORD(v42) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v42, v44) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v21] )
  {
    LODWORD(v43) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v43) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v43) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v43) )
      __debugbreak();
  }
  v57 = v21;
  _RBX = cg_t::ms_cgArray[v21];
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  __asm
  {
    vmovss  xmm11, dword ptr [r12]
    vmovss  xmm10, dword ptr [r12+4]
    vmovss  xmm9, dword ptr [r12+8]
    vmovss  xmm8, dword ptr [r15]
    vmovss  xmm7, dword ptr [r15+4]
    vmovss  xmm6, dword ptr [r15+8]
  }
  v58 = SkelTimeStamp;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+699Ch]
    vmovss  [rbp+110h+var_180], xmm0
    vmovss  xmm1, dword ptr [rbx+69A0h]
    vmovss  [rbp+110h+var_17C], xmm1
    vmovss  xmm0, dword ptr [rbx+69A4h]
  }
  v46 = (2 * staticModels) | 0x11;
  v53 = contentMask;
  v62 = contentMask;
  v63 = locational;
  __asm
  {
    vmovss  [rbp+110h+var_178], xmm0
    vmovss  [rsp+210h+var_1B4], xmm11
    vmovss  [rsp+210h+var_1B0], xmm10
    vmovss  [rsp+210h+var_1AC], xmm9
    vmovss  [rsp+210h+var_1A8], xmm8
    vmovss  dword ptr [rsp+210h+var_1A4], xmm7
    vmovss  dword ptr [rsp+210h+var_1A4+4], xmm6
  }
  v68 = 0;
  v69 = 0i64;
  v66 = -1i64;
  v64 = 0;
  memcpy_0(v60, ignoreEnts, 4i64 * ignoreEntCount);
  v65 = priorityMap;
  __asm
  {
    vmovss  dword ptr [rbp+110h+extents.start], xmm11
    vmovss  dword ptr [rbp+110h+extents.start+4], xmm10
    vmovss  dword ptr [rbp+110h+extents.start+8], xmm9
    vmovss  dword ptr [rbp+110h+extents.end], xmm8
    vmovss  dword ptr [rbp+110h+extents.end+4], xmm7
    vmovss  dword ptr [rbp+110h+extents.end+8], xmm6
  }
  v61 = ignoreEntCount;
  CM_CalcTraceExtents(&extents);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
    vmovsd  xmm1, qword ptr cs:?bounds_origin@@3UBounds@@B.halfSize+4; Bounds const bounds_origin
    vmovups xmmword ptr [rsp+210h+var_1A4+8], xmm0
    vmovsd  [rbp+110h+var_18C], xmm1
  }
  v68 = 0;
  v69 = 0i64;
  v67 = phaseSelection;
  data = workerResults;
  workerResults->state = 1;
  Sys_AddWorkerCmd(WRKCMD_TRACE, &data);
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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

