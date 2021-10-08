/*
==============
DynEnt_LinkBrush
==============
*/

void __fastcall DynEnt_LinkBrush(LocalClientNum_t localClientNum, unsigned int dynEntId)
{
  ?DynEnt_LinkBrush@@YAXW4LocalClientNum_t@@I@Z(localClientNum, dynEntId);
}

/*
==============
DynEnt_UnlinkEntity
==============
*/

void __fastcall DynEnt_UnlinkEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool shutdownPhysics, bool activate)
{
  ?DynEnt_UnlinkEntity@@YAXW4LocalClientNum_t@@IW4DynEntityBasis@@_N2@Z(localClientNum, dynEntId, basis, shutdownPhysics, activate);
}

/*
==============
DynEnt_AddToSceneCmd
==============
*/

void __fastcall DynEnt_AddToSceneCmd(const void *const cmdInfo)
{
  ?DynEnt_AddToSceneCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
DynEnt_UpdatePoseModel
==============
*/

bool __fastcall DynEnt_UpdatePoseModel(LocalClientNum_t localClientNum, unsigned int dynEntId, int *dynEntTotalCount, int *dynEntSimpleCount, int *dynEntSimpleAdditionalBoneCount, int *dynEntComplexCount, int *dynEntComplexBodyCount, int *dynEntComplexAdditionalBoneCount)
{
  return ?DynEnt_UpdatePoseModel@@YA_NW4LocalClientNum_t@@IAEAH11111@Z(localClientNum, dynEntId, dynEntTotalCount, dynEntSimpleCount, dynEntSimpleAdditionalBoneCount, dynEntComplexCount, dynEntComplexBodyCount, dynEntComplexAdditionalBoneCount);
}

/*
==============
DynEnt_Linking_FreeClientMemory
==============
*/

void DynEnt_Linking_FreeClientMemory(void)
{
  ?DynEnt_Linking_FreeClientMemory@@YAXXZ();
}

/*
==============
DynEnt_LinkModel
==============
*/

void __fastcall DynEnt_LinkModel(LocalClientNum_t localClientNum, unsigned int dynEntId)
{
  ?DynEnt_LinkModel@@YAXW4LocalClientNum_t@@I@Z(localClientNum, dynEntId);
}

/*
==============
DynEnt_AddToScene
==============
*/

void __fastcall DynEnt_AddToScene(LocalClientNum_t localClientNum)
{
  ?DynEnt_AddToScene@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEnt_Linking_AllocateClientMemory
==============
*/

void __fastcall DynEnt_Linking_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  ?DynEnt_Linking_AllocateClientMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, maxLocalClients);
}

/*
==============
DynEnt_AddToScene
==============
*/
void DynEnt_AddToScene(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  DynEntityBasis i; 
  DynEntityClient *m_curNode; 
  unsigned int dynEntDefId; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  char *v10; 
  unsigned int v11; 
  char *v12; 
  __int64 v13; 
  __int64 v14; 
  DynEntCL_Active_Iterator v15; 
  char data[4]; 
  char v17; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF008008, "DynEnt_AddToScene");
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  *(_DWORD *)&v15.m_nextIndex = -1;
  *(_QWORD *)&v15.m_curBasis = 0i64;
  g_dynEntAddToSceneCount[v1] = 0;
  v2 = 0;
  v15.m_curNode = NULL;
  for ( i = DYNENT_BASIS_MODEL; (unsigned __int8)i < DYNENT_BASIS_COUNT; ++i )
  {
    DynEntCL_Active_Iterator::Init(&v15, (LocalClientNum_t)v1, i);
    if ( DynEntCL_Active_Iterator::Advance(&v15) )
    {
      while ( 1 )
      {
        m_curNode = v15.m_curNode;
        if ( !v15.m_curNode )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 142, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
            __debugbreak();
          m_curNode = v15.m_curNode;
        }
        dynEntDefId = m_curNode->dynEntDefId;
        if ( (m_curNode->flags & 3) != 3 )
          goto LABEL_21;
        if ( i )
          goto LABEL_14;
        if ( m_curNode->activeModel )
          break;
LABEL_21:
        if ( !DynEntCL_Active_Iterator::Advance(&v15) )
          goto LABEL_22;
      }
      ++v2;
LABEL_14:
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v14) = 2;
        LODWORD(v13) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !g_dynEntAddToSceneList[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 76, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum])", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum]") )
        __debugbreak();
      g_dynEntAddToSceneList[v1][g_dynEntAddToSceneCount[v1]].basis = i;
      g_dynEntAddToSceneList[v1][g_dynEntAddToSceneCount[v1]++].id = dynEntDefId;
      goto LABEL_21;
    }
LABEL_22:
    ;
  }
  v6 = 0;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v14) = 2;
    LODWORD(v13) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v7 = g_dynEntAddToSceneCount[v1];
  v8 = (v7 - 1) / 0x32 + 1;
  if ( (int)v8 > 4 )
    v8 = 4i64;
  memset_0(data, 0, 0x50ui64);
  v9 = 0;
  v10 = &v17;
  do
  {
    *(_DWORD *)v10 = v9;
    *((_DWORD *)v10 + 1) = v6;
    v11 = v7 - v6;
    *((_DWORD *)v10 - 1) = v1;
    *((_DWORD *)v10 + 3) = v2;
    v10 += 20;
    if ( v9 != (_DWORD)v8 - 1 )
      v11 = v7 / (unsigned int)v8;
    ++v9;
    v6 += v11;
    *((_DWORD *)v10 - 3) = v11;
  }
  while ( v9 < (unsigned int)v8 );
  Physics_ToggleCGDynEntAuthoritativeDebugData((LocalClientNum_t)v1);
  v12 = data;
  do
  {
    Sys_AddWorkerCmd(WRKCMD_LINK_DYNENTS, v12);
    v12 += 20;
    --v8;
  }
  while ( v8 );
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_AddToSceneCmd
==============
*/
void DynEnt_AddToSceneCmd(const void *const cmdInfo)
{
  unsigned int *v3; 
  char *Value; 
  int *v5; 
  _QWORD *v6; 
  char *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  ThreadContext CurrentThreadContext; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int id; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v23; 
  DynEntityClient *Client; 
  char v26; 
  char v27; 
  int *dynEntComplexCount; 
  int *dynEntComplexBodyCount; 
  int dynEntSimpleAdditionalBoneCount; 
  int v55; 
  unsigned int v56; 
  int dynEntTotalCount; 
  int dynEntSimpleCount[2]; 
  int dynEntComplexAdditionalBoneCount; 
  int v60; 
  int v61; 
  int v62; 
  unsigned int *v63; 

  v63 = (unsigned int *)cmdInfo;
  v3 = (unsigned int *)cmdInfo;
  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 760, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v5 = (int *)(Value + 23336);
  if ( (unsigned int)(*((_DWORD *)Value + 5834) + 1) >= 3 )
  {
    LODWORD(dynEntComplexCount) = *((_DWORD *)Value + 5834) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", dynEntComplexCount, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v5 >= 3 )
  {
    LODWORD(dynEntComplexBodyCount) = 3;
    LODWORD(dynEntComplexCount) = *v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
      __debugbreak();
  }
  v6 = Value + 2088;
  v7 = Value + 40;
  if ( *v6 < (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v6 += 8i64;
  if ( *v6 >= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v6 = v5;
  if ( *v6 <= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v8 = *v5;
  v9 = __rdtsc();
  v5[v8 + 2] = v9;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v11 = 0;
  dynEntSimpleAdditionalBoneCount = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 531, NULL, 0);
  v12 = (int)*v3;
  dynEntTotalCount = 0;
  v13 = 0;
  v55 = 0;
  dynEntSimpleCount[0] = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  dynEntComplexAdditionalBoneCount = 0;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "DynEnt_UpdatePoseModel and DynEnt_LinkModel list");
  v14 = v3[2];
  v15 = v3[4] - v14;
  if ( v15 < 0 )
    v15 = 0;
  if ( (int)v3[3] < v15 )
    v15 = v3[3];
  v56 = v15;
  v16 = v14 + v15;
  if ( (unsigned int)v14 < (int)v14 + v15 )
  {
    v17 = v14;
    do
    {
      if ( (unsigned int)v12 >= 2 )
      {
        LODWORD(dynEntComplexBodyCount) = 2;
        LODWORD(dynEntComplexCount) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( (unsigned int)v14 >= g_dynEntAddToSceneCount[v12] )
      {
        LODWORD(dynEntComplexBodyCount) = g_dynEntAddToSceneCount[v12];
        LODWORD(dynEntComplexCount) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( sceneListIndex ) < (unsigned)( g_dynEntAddToSceneCount[localClientNum] )", "sceneListIndex doesn't index g_dynEntAddToSceneCount[localClientNum]\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( !g_dynEntAddToSceneList[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 89, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum])", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum]") )
        __debugbreak();
      if ( g_dynEntAddToSceneList[v12][v17].basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 90, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis)", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis") )
        __debugbreak();
      id = g_dynEntAddToSceneList[v12][v17].id;
      if ( DynEnt_UpdatePoseModel((LocalClientNum_t)v12, id, &dynEntTotalCount, dynEntSimpleCount, &dynEntSimpleAdditionalBoneCount, &v61, &v60, &dynEntComplexAdditionalBoneCount) )
        DynEnt_LinkModel((LocalClientNum_t)v12, id);
      LODWORD(v14) = v14 + 1;
      ++v17;
    }
    while ( (unsigned int)v14 < v16 );
    v11 = dynEntTotalCount;
    v13 = dynEntSimpleCount[0];
    v3 = v63;
    v15 = v56;
    dynEntSimpleAdditionalBoneCount = dynEntTotalCount;
    v55 = dynEntSimpleCount[0];
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "DynEnt_UpdatePoseBrush and DynEnt_LinkBrush list");
  v19 = v15 + v3[2];
  v56 = v3[3] + v3[2];
  if ( (unsigned int)v19 < v56 )
  {
    __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
    v20 = 8 * v19;
    __asm
    {
      vmovss  xmm6, cs:__real@358637be
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovss  xmm7, cs:__real@38d1b717
    }
    *(_QWORD *)dynEntSimpleCount = 8 * v19;
    do
    {
      if ( (unsigned int)v12 >= 2 )
      {
        LODWORD(dynEntComplexBodyCount) = 2;
        LODWORD(dynEntComplexCount) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( (unsigned int)v19 >= g_dynEntAddToSceneCount[v12] )
      {
        LODWORD(dynEntComplexBodyCount) = g_dynEntAddToSceneCount[v12];
        LODWORD(dynEntComplexCount) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( sceneListIndex ) < (unsigned)( g_dynEntAddToSceneCount[localClientNum] )", "sceneListIndex doesn't index g_dynEntAddToSceneCount[localClientNum]\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( !g_dynEntAddToSceneList[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 89, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum])", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum]") )
        __debugbreak();
      if ( *((_BYTE *)&g_dynEntAddToSceneList[v12]->basis + v20) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 90, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis)", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis") )
        __debugbreak();
      v23 = *(unsigned int *)((char *)&g_dynEntAddToSceneList[v12]->id + v20);
      Client = DynEnt_GetClient((LocalClientNum_t)v12, v23, DYNENT_BASIS_BRUSH);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 709, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (Client->flags & 3) == 3 )
      {
        _RBX = DynEnt_GetPose((LocalClientNum_t)v12, v23, DYNENT_BASIS_BRUSH);
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 720, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        R_MDAO_ResetVolumesProcessed(_RBX);
        ++v55;
        dynEntSimpleAdditionalBoneCount = v11 + 1;
        Sys_ProfBeginNamedEvent(0xFF008008, "Prep");
        Physics_GetRigidBodyTransform((const Physics_WorldId)(3 * v12 + 3), Client->singlePhysicsBody, &_RBX->pose.origin, &_RBX->pose.quat);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4Ch]
          vsubss  xmm3, xmm0, dword ptr [rbx+10h]
          vmovss  xmm1, dword ptr [rbx+50h]
          vsubss  xmm2, xmm1, dword ptr [rbx+14h]
          vmovss  xmm0, dword ptr [rbx+54h]
          vsubss  xmm4, xmm0, dword ptr [rbx+18h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm7
        }
        if ( !(v26 | v27) )
          goto LABEL_67;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+3Ch]
          vsubss  xmm2, xmm0, dword ptr [rbx]
          vmovss  xmm0, dword ptr [rbx+40h]
          vsubss  xmm3, xmm0, dword ptr [rbx+4]
          vmovss  xmm0, dword ptr [rbx+44h]
          vsubss  xmm4, xmm0, dword ptr [rbx+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm1
          vcomiss xmm2, xmm6
        }
        if ( !(v26 | v27) )
        {
LABEL_67:
          Client->flags |= 0x40u;
          _RBX->posePart0.origin.v[0] = _RBX->pose.origin.v[0];
          _RBX->posePart0.origin.v[1] = _RBX->pose.origin.v[1];
          _RBX->posePart0.origin.v[2] = _RBX->pose.origin.v[2];
          _RBX->posePart0.quat.v[0] = _RBX->pose.quat.v[0];
          _RBX->posePart0.quat.v[1] = _RBX->pose.quat.v[1];
          _RBX->posePart0.quat.v[2] = _RBX->pose.quat.v[2];
          _RBX->posePart0.quat.v[3] = _RBX->pose.quat.v[3];
        }
        Sys_ProfEndNamedEvent();
        DynEnt_LinkBrush((LocalClientNum_t)v12, v23);
        v20 = *(_QWORD *)dynEntSimpleCount;
      }
      v11 = dynEntSimpleAdditionalBoneCount;
      v20 += 8i64;
      LODWORD(v19) = v19 + 1;
      *(_QWORD *)dynEntSimpleCount = v20;
    }
    while ( (unsigned int)v19 < v56 );
    v13 = v55;
    __asm
    {
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
  Sys_ProfEndNamedEvent();
  Physics_SetCGDynEntAuthoritativeDebugData((LocalClientNum_t)v12, dynEntSimpleAdditionalBoneCount, v13, v62, v61, v60, dynEntComplexAdditionalBoneCount);
  Profile_EndInternal(NULL);
}

/*
==============
DynEnt_CheckLightCount
==============
*/
void DynEnt_CheckLightCount(unsigned int basis, unsigned int dynEntId, const DynEntityClient *dynEntClient, unsigned int lightCount, const vec3_t *pos, const vec3_t *halfSize)
{
  const char *name; 
  char *fmt; 
  double v30; 
  double v31; 
  double v32; 

  if ( messageCount < 100 && dynEntId != -1 && lightCount > r_linkLightWarningThreshold->current.integer )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    name = "unknown";
    if ( basis )
    {
      name = "BSP brushmodel";
    }
    else if ( dynEntClient->activeModel )
    {
      name = dynEntClient->activeModel->name;
    }
    Com_Printf(8, "Warning: dynEnt(%d) model %s linked to %d lights.\n", dynEntId, name, lightCount);
    __asm { vmovss  xmm3, cs:__real@40000000 }
    _RAX = halfSize;
    __asm
    {
      vmulss  xmm0, xmm3, dword ptr [rax+8]
      vmovss  xmm1, dword ptr [rax+4]
      vmulss  xmm2, xmm1, xmm3
      vcvtss2sd xmm6, xmm0, xmm0
      vmovss  xmm0, dword ptr [rax]
    }
    _RAX = pos;
    __asm
    {
      vmulss  xmm1, xmm0, xmm3
      vcvtss2sd xmm5, xmm2, xmm2
      vmovsd  [rsp+58h+var_20], xmm6
      vmovss  xmm3, dword ptr [rax+4]
      vmovss  xmm2, dword ptr [rax]
      vmovss  xmm0, dword ptr [rax+8]
      vmovsd  [rsp+58h+var_28], xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm4, xmm1, xmm1
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+58h+var_30], xmm4
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+58h+fmt], xmm0
    }
    Com_Printf(8, "  Pos=(%3.0f,%3.0f,%3.0f) Size=(%3.0f,%3.0f,%3.0f).\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v30, v31, v32);
    Com_Printf(8, "  Please enable \"no spotshadow\" checkbox in Radiant if we don't need spot shadow for this object.\n");
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    if ( ((unsigned __int8)&messageCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&messageCount) )
      __debugbreak();
    if ( _InterlockedIncrement(&messageCount) >= 100 )
      Com_Printf(8, "  Maximum dynEnt light linking messages (%d) reached. No more messages will be printed.\n", 100i64);
  }
}

/*
==============
DynEnt_IsSingleBody
==============
*/
bool DynEnt_IsSingleBody(const DynEntityClient *dynEntClient, const DynEntityPose *dynEntPose)
{
  unsigned __int8 numBones; 

  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 178, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !dynEntClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 179, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !dynEntClient->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 180, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
    __debugbreak();
  numBones = dynEntClient->activeModel->numBones;
  if ( numBones > dynEntPose->numParts )
    numBones = dynEntPose->numParts;
  return numBones == 1 && dynEntClient->numPhysicsBodies == 1;
}

/*
==============
DynEnt_LinkBrush
==============
*/
void DynEnt_LinkBrush(LocalClientNum_t localClientNum, unsigned int dynEntId)
{
  __int64 v3; 
  const DynEntityDef *Def; 
  unsigned __int16 v5; 
  DynEntityPose *PoseFromClientId; 
  DynEntityClient *ClientFromClientId; 
  unsigned __int16 flags; 
  GfxBrushModel *BrushModel; 
  unsigned int v10; 
  GfxBrushModel *v11; 

  v3 = localClientNum;
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_BRUSH);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 322, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v5 = Def->clientId[v3];
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v3, v5, DYNENT_BASIS_BRUSH);
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v3, v5, DYNENT_BASIS_BRUSH);
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 326, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 327, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( Def->baseModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 330, ASSERT_TYPE_ASSERT, "(!dynEntDef->baseModel)", (const char *)&queryFormat, "!dynEntDef->baseModel") )
    __debugbreak();
  DynEnt_UpdateBModelWorldBounds(Def, PoseFromClientId);
  flags = ClientFromClientId->flags;
  if ( (flags & 0x408) != 0 )
  {
    if ( (flags & 0x800) != 0 )
    {
      R_UnLinkDynEntClient_NoCull((LocalClientNum_t)v3, v5, DYNENT_BASIS_BRUSH);
      ClientFromClientId->flags &= ~0x800u;
    }
  }
  else if ( DynEnt_VisiblyChangedThisFrame((LocalClientNum_t)v3, DYNENT_BASIS_BRUSH, dynEntId) || (ClientFromClientId->flags & 0x800) == 0 )
  {
    BrushModel = R_GetBrushModel(Def->brushModel);
    v10 = R_LinkDynEntClient((LocalClientNum_t)v3, v5, DYNENT_BASIS_BRUSH, &BrushModel->writable.bounds);
    R_DynEntClientMoved((LocalClientNum_t)v3, DYNENT_BASIS_BRUSH, v5);
    ClientFromClientId->flags |= 0x800u;
    DynEnt_CheckLightCount(1u, dynEntId, ClientFromClientId, v10, &BrushModel->writable.bounds.midPoint, &BrushModel->writable.bounds.halfSize);
  }
  v11 = R_GetBrushModel(Def->brushModel);
  R_LinkDynEntClientToCells((LocalClientNum_t)v3, v5, DYNENT_BASIS_BRUSH, &v11->writable.bounds);
}

/*
==============
DynEnt_LinkModel
==============
*/

void __fastcall DynEnt_LinkModel(LocalClientNum_t localClientNum, unsigned int dynEntId, double _XMM2_8)
{
  __int64 v14; 
  const DynEntityDef *Def; 
  unsigned __int16 v16; 
  DynEntityClient *ClientFromClientId; 
  const XModel *activeModel; 
  const float4 *v31; 
  vector3 *v32; 
  bool IsSingleBody; 
  unsigned __int16 flags; 
  unsigned int v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  Bounds halfSize; 
  Bounds bounds; 

  v14 = localClientNum;
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 193, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v16 = Def->clientId[v14];
  _RBX = DynEnt_GetPoseFromClientId((LocalClientNum_t)v14, v16, DYNENT_BASIS_MODEL);
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v14, v16, DYNENT_BASIS_MODEL);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 197, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 198, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  activeModel = ClientFromClientId->activeModel;
  if ( ClientFromClientId->activeModel )
  {
    __asm
    {
      vmovaps [rsp+130h+var_30], xmm6
      vmovaps [rsp+130h+var_40], xmm7
      vmovaps [rsp+130h+var_50], xmm8
      vmovaps [rsp+130h+var_60], xmm9
      vmovaps [rsp+130h+var_70], xmm10
      vmovaps [rsp+130h+var_80], xmm11
      vmovaps [rsp+130h+var_90], xmm12
      vmovaps [rsp+130h+var_A0], xmm13
      vmovaps [rsp+130h+var_B0], xmm14
    }
    XModelGetBounds(activeModel, &bounds);
    __asm { vmovss  xmm0, dword ptr [rsp+130h+bounds.midPoint] }
    HIDWORD(v77) = 0;
    __asm
    {
      vmovups xmm14, xmmword ptr [rsp+30h]
      vmovss  xmm14, xmm14, xmm0
      vmovss  xmm0, dword ptr [rsp+130h+bounds.halfSize]
      vinsertps xmm14, xmm14, dword ptr [rsp+130h+bounds.midPoint+4], 30h+var_20
      vinsertps xmm14, xmm14, dword ptr [rsp+130h+bounds.midPoint+8], 20h
      vmovups xmmword ptr [rsp+30h], xmm14
    }
    HIDWORD(v78) = 0;
    __asm
    {
      vmovups xmm6, xmmword ptr [rsp+30h]
      vmovss  xmm6, xmm6, xmm0
      vinsertps xmm6, xmm6, dword ptr [rsp+130h+bounds.halfSize+4], 30h+var_20
      vinsertps xmm6, xmm6, dword ptr [rsp+130h+bounds.halfSize+8], 20h
      vmovups xmm0, xmmword ptr [rbx+3Ch]
      vmovups xmmword ptr [rsp+30h], xmm6
    }
    Float4UnitQuatToAxis(v32, v31);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+4Ch]
      vmovups xmm13, xmm0
      vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vandnps xmm7, xmm0, xmm2
      vmovups xmm12, xmm1
      vandnps xmm5, xmm0, xmm13
      vshufps xmm8, xmm6, xmm6, 0
      vshufps xmm9, xmm6, xmm6, 55h ; 'U'
      vshufps xmm10, xmm6, xmm6, 0AAh ; 'ª'
      vandnps xmm6, xmm0, xmm1
      vshufps xmm1, xmm14, xmm14, 0AAh ; 'ª'
      vmulps  xmm0, xmm2, xmm1
    }
    HIDWORD(v79) = 0;
    __asm
    {
      vmovups xmm11, xmmword ptr [rsp+30h]
      vmovss  xmm11, xmm11, xmm3
      vinsertps xmm11, xmm11, dword ptr [rbx+50h], 10h
      vinsertps xmm11, xmm11, dword ptr [rbx+54h], 20h ; ' '
      vaddps  xmm2, xmm0, xmm11
      vshufps xmm3, xmm14, xmm14, 55h ; 'U'
      vmulps  xmm1, xmm12, xmm3
      vaddps  xmm3, xmm1, xmm2
      vmulps  xmm1, xmm8, xmm5
      vshufps xmm4, xmm14, xmm14, 0
      vmulps  xmm0, xmm13, xmm4
      vaddps  xmm11, xmm0, xmm3
      vmulps  xmm0, xmm9, xmm6
      vaddps  xmm2, xmm0, xmm1
      vmulps  xmm1, xmm10, xmm7
      vaddps  xmm6, xmm1, xmm2
      vshufps xmm9, xmm6, xmm6, 55h ; 'U'
      vshufps xmm10, xmm6, xmm6, 0AAh ; 'ª'
      vshufps xmm7, xmm11, xmm11, 55h ; 'U'
      vshufps xmm8, xmm11, xmm11, 0AAh ; 'ª'
      vmovss  dword ptr [rsp+130h+var_F0.halfSize+4], xmm9
      vmovss  dword ptr [rsp+130h+var_F0.halfSize+8], xmm10
      vmovss  dword ptr [rsp+130h+var_F0.midPoint], xmm11
      vmovss  dword ptr [rsp+130h+var_F0.midPoint+4], xmm7
      vmovss  dword ptr [rsp+130h+var_F0.midPoint+8], xmm8
      vmovss  dword ptr [rsp+130h+var_F0.halfSize], xmm6
    }
    IsSingleBody = DynEnt_IsSingleBody(ClientFromClientId, _RBX);
    __asm
    {
      vmovaps xmm14, [rsp+130h+var_B0]
      vmovaps xmm13, [rsp+130h+var_A0]
      vmovaps xmm12, [rsp+130h+var_90]
    }
    if ( IsSingleBody )
    {
      __asm
      {
        vmovss  dword ptr [rbx+24h], xmm11
        vmovss  dword ptr [rbx+28h], xmm7
        vmovss  dword ptr [rbx+2Ch], xmm8
        vmovss  dword ptr [rbx+30h], xmm6
        vmovss  dword ptr [rbx+34h], xmm9
        vmovss  dword ptr [rbx+38h], xmm10
      }
    }
    flags = ClientFromClientId->flags;
    __asm
    {
      vmovaps xmm11, [rsp+130h+var_80]
      vmovaps xmm10, [rsp+130h+var_70]
      vmovaps xmm9, [rsp+130h+var_60]
      vmovaps xmm8, [rsp+130h+var_50]
      vmovaps xmm7, [rsp+130h+var_40]
      vmovaps xmm6, [rsp+130h+var_30]
    }
    if ( (flags & 0x408) != 0 )
    {
      if ( (flags & 0x800) != 0 )
      {
        R_UnLinkDynEntClient_NoCull((LocalClientNum_t)v14, v16, DYNENT_BASIS_MODEL);
        ClientFromClientId->flags &= ~0x800u;
      }
    }
    else if ( DynEnt_VisiblyChangedThisFrame((LocalClientNum_t)v14, DYNENT_BASIS_MODEL, dynEntId) || (ClientFromClientId->flags & 0x800) == 0 )
    {
      v76 = R_LinkDynEntClient((LocalClientNum_t)v14, v16, DYNENT_BASIS_MODEL, &halfSize);
      R_DynEntClientMoved((LocalClientNum_t)v14, DYNENT_BASIS_MODEL, v16);
      ClientFromClientId->flags |= 0x800u;
      DynEnt_CheckLightCount(0, dynEntId, ClientFromClientId, v76, &halfSize.midPoint, &halfSize.halfSize);
    }
    R_LinkDynEntClientToCells((LocalClientNum_t)v14, v16, DYNENT_BASIS_MODEL, &halfSize);
  }
}

/*
==============
DynEnt_Linking_AllocateClientMemory
==============
*/
void DynEnt_Linking_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  unsigned int v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  unsigned __int16 *v8; 
  unsigned __int8 i; 
  DynEntityGlobalId *v10; 
  __int64 v11; 
  __int64 v12; 
  DynEntityGlobalId **v15; 

  if ( maxLocalClients > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 100, ASSERT_TYPE_ASSERT, "( maxLocalClients ) <= ( 2 )", "%s <= %s\n\t%u, %u", "maxLocalClients", "STATIC_MAX_LOCAL_CLIENTS", maxLocalClients, 2) )
    __debugbreak();
  v3 = 0;
  if ( maxLocalClients )
  {
    v4 = 1;
    v15 = g_dynEntAddToSceneList;
    v5 = 0i64;
    v6 = s_dynEntsLinkingAllocated;
    do
    {
      if ( (v4 & v6) != 0 )
      {
        LODWORD(v12) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 103, ASSERT_TYPE_ASSERT, "(!(s_dynEntsLinkingAllocated & (1 << localClientNum)))", "%s\n\tTrying to allocate DynEnt_Linking client memory for already allocated local client number %u.\n", "!(s_dynEntsLinkingAllocated & (1 << localClientNum))", v12) )
          __debugbreak();
      }
      v7 = 0;
      v8 = g_dynEntClientEntsAllocCount[v5];
      for ( i = 0; i < 2u; ++i )
      {
        if ( v3 >= 2 )
        {
          LODWORD(v12) = 2;
          LODWORD(v11) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        v7 += *v8++;
      }
      if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
        __debugbreak();
      if ( v7 )
      {
        v10 = (DynEntityGlobalId *)Mem_HunkUser_AllocInternal(hunkUser, 8i64 * v7, 4ui64, "DynEnt_AllocBuf");
        memset_0(v10, 0, 8i64 * v7);
      }
      else
      {
        v10 = NULL;
      }
      v6 = s_dynEntsLinkingAllocated | (1 << v3);
      v4 = __ROL4__(v4, 1);
      ++v3;
      s_dynEntsLinkingAllocated = v6;
      *v15++ = v10;
      g_dynEntAddToSceneCount[v5++] = 0;
    }
    while ( v3 < maxLocalClients );
  }
}

/*
==============
DynEnt_Linking_FreeClientMemory
==============
*/
void DynEnt_Linking_FreeClientMemory(void)
{
  s_dynEntsLinkingAllocated = 0;
  g_dynEntAddToSceneList[0] = NULL;
  qword_1515E3D58 = 0i64;
  *(_QWORD *)g_dynEntAddToSceneCount = 0i64;
}

/*
==============
DynEnt_UnlinkEntity
==============
*/
void DynEnt_UnlinkEntity(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis, bool shutdownPhysics, bool activate)
{
  __int64 v6; 
  const DynEntityDef *Def; 
  unsigned __int16 v10; 
  DynEntityClient *ClientFromClientId; 
  unsigned __int16 v12; 

  v6 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_UnlinkEntity");
  Def = DynEnt_GetDef(dynEntId, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 371, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v10 = Def->clientId[v6];
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v6, v10, basis);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 374, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  DynEntCL_Lock(ClientFromClientId);
  v12 = ClientFromClientId->flags | 0x40;
  ClientFromClientId->flags = v12;
  if ( shutdownPhysics && (v12 & 2) != 0 )
    DynEnt_ShutdownPhysics((LocalClientNum_t)v6, dynEntId, basis, activate);
  R_UnlinkDynEntClient((LocalClientNum_t)v6, v10, basis);
  DynEntCL_Unlock(ClientFromClientId);
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_UpdateBModelWorldBounds
==============
*/
void DynEnt_UpdateBModelWorldBounds(const DynEntityDef *dynEntDef, DynEntityPose *dynentPose)
{
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  double baseBounds; 
  Float4Bounds baseBounds_8; 
  Float4Bounds rotatedBounds_8; 
  tmat33_t<vec3_t> axis; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
  }
  _RSI = dynentPose;
  _RDI = R_GetBrushModel(dynEntDef->brushModel);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 289, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  xmm4, dword ptr [rsi+40h]
    vmovss  xmm5, dword ptr [rsi+3Ch]
    vmovss  xmm6, dword ptr [rsi+44h]
    vmovss  xmm7, dword ptr [rsi+48h]
    vmovss  xmm13, cs:__real@3f800000
  }
  rotatedBounds_8.midPoint.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+150h+rotatedBounds+8]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
    vmovss  xmm0, dword ptr [rdi+44h]
    vmovups xmmword ptr [rsp+150h+rotatedBounds+8], xmm3
    vmovups xmmword ptr [rsp+150h+baseBounds.midPoint.v+8], xmm3
  }
  rotatedBounds_8.midPoint.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+150h+rotatedBounds+8]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+48h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+4Ch], 20h ; ' '
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vmovups xmmword ptr [rsp+150h+rotatedBounds+8], xmm3
    vmovups xmmword ptr [rsp+150h+baseBounds.halfSize.v+8], xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm13
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  qword ptr [rsp+150h+baseBounds.midPoint.v], xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcvtss2sd xmm2, xmm7, xmm7
    vmovsd  [rsp+150h+var_110], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+150h+var_118], xmm3
    vmovsd  [rsp+150h+var_120], xmm0
    vcvtss2sd xmm4, xmm5, xmm5
    vmovsd  [rsp+150h+var_128], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v82, v83, v84, v85, baseBounds) )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, cs:__real@40000000
    vmulss  xmm1, xmm5, dword ptr [rsi+3Ch]
    vmulss  xmm12, xmm1, dword ptr [rsi+3Ch]
    vmovss  xmm2, dword ptr [rsi+40h]
    vmovss  xmm4, dword ptr [rsi+44h]
    vmovss  xmm3, dword ptr [rsi+48h]
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm8, xmm4, xmm0
    vmulss  xmm7, xmm3, xmm0
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm10, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm5, xmm4, xmm0
    vaddss  xmm1, xmm5, xmm11
    vsubss  xmm0, xmm13, xmm1
    vmovss  dword ptr [rbp+50h+axis], xmm0
    vsubss  xmm0, xmm9, xmm7
    vmovss  dword ptr [rbp+50h+axis+8], xmm0
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rbp+50h+axis+4], xmm1
    vsubss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+50h+axis+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm5, xmm12
    vsubss  xmm0, xmm13, xmm0
    vmovss  dword ptr [rbp+50h+axis+10h], xmm0
    vaddss  xmm0, xmm7, xmm9
    vmovss  dword ptr [rbp+50h+axis+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovss  dword ptr [rbp+50h+axis+14h], xmm1
    vsubss  xmm0, xmm13, xmm0
    vsubss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rbp+50h+axis+20h], xmm0
    vmovss  dword ptr [rbp+50h+axis+1Ch], xmm1
  }
  Float4Bounds_Transform(&baseBounds_8, &_RSI->pose.origin, &axis, &rotatedBounds_8);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+150h+rotatedBounds+8]
    vmovss  dword ptr [rdi], xmm1
    vextractps dword ptr [rdi+4], xmm1, 1
    vextractps dword ptr [rdi+8], xmm1, 2
    vmovups xmm1, xmmword ptr [rbp+50h+rotatedBounds+18h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vextractps dword ptr [rdi+10h], xmm1, 1
    vextractps dword ptr [rdi+14h], xmm1, 2
  }
  _RDI->writable.origin.v[0] = _RSI->pose.origin.v[0];
  _RDI->writable.origin.v[1] = _RSI->pose.origin.v[1];
  _RDI->writable.origin.v[2] = _RSI->pose.origin.v[2];
  _RDI->writable.quat.v[0] = _RSI->pose.quat.v[0];
  _RDI->writable.quat.v[1] = _RSI->pose.quat.v[1];
  _RDI->writable.quat.v[2] = _RSI->pose.quat.v[2];
  _RDI->writable.quat.v[3] = _RSI->pose.quat.v[3];
  _RSI->bounds.midPoint.v[0] = _RDI->writable.bounds.midPoint.v[0];
  _RSI->bounds.midPoint.v[1] = _RDI->writable.bounds.midPoint.v[1];
  _RSI->bounds.midPoint.v[2] = _RDI->writable.bounds.midPoint.v[2];
  _RSI->bounds.halfSize.v[0] = _RDI->writable.bounds.halfSize.v[0];
  _RSI->bounds.halfSize.v[1] = _RDI->writable.bounds.halfSize.v[1];
  _RSI->bounds.halfSize.v[2] = _RDI->writable.bounds.halfSize.v[2];
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
DynEnt_UpdatePoseModel
==============
*/
char DynEnt_UpdatePoseModel(LocalClientNum_t localClientNum, unsigned int dynEntId, int *dynEntTotalCount, int *dynEntSimpleCount, int *dynEntSimpleAdditionalBoneCount, int *dynEntComplexCount, int *dynEntComplexBodyCount, int *dynEntComplexAdditionalBoneCount)
{
  LocalClientNum_t v18; 
  const DynEntityClient *v22; 
  unsigned __int8 numBones; 
  char v27; 
  bool v28; 
  unsigned __int8 v54; 
  LocalClientNum_t v56; 
  __int64 v57; 
  __int32 v58; 
  unsigned int physicsSystemId; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 numParts; 
  const vec4_t *p_quat; 
  vec3_t *p_origin; 
  unsigned __int8 v105; 
  unsigned __int8 v106; 
  DObjAnimMat *baseMat; 
  unsigned __int8 v149; 
  DynEnt_ExtraPosePart *v150; 
  unsigned int posePart1FirstIndex; 
  __int64 v211; 
  __int64 v212; 
  __int64 v213; 
  __int64 v214; 
  unsigned __int8 numPhysicsBodies; 
  LocalClientNum_t localClientNumb; 
  LocalClientNum_t localClientNumc; 
  LocalClientNum_t localClientNumd; 
  LocalClientNum_t localClientNume; 
  LocalClientNum_t localClientNumf; 
  const XModel *activeModel; 
  unsigned __int8 v223; 
  DObjAnimMat *v224; 
  hknpBodyId result; 
  int *v226; 
  DynEntityClient *Client; 
  Bounds bounds; 
  Bounds rotatedBounds; 
  __int128 v230; 
  __int128 v231; 
  __int128 v232; 
  __int128 v233; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> v239; 

  v18 = localClientNum;
  v226 = dynEntComplexAdditionalBoneCount;
  Client = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  v22 = Client;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 513, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( (Client->flags & 3) != 3 )
    return 0;
  _RBX = DynEnt_GetPose(v18, dynEntId, DYNENT_BASIS_MODEL);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 524, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  R_MDAO_ResetVolumesProcessed(_RBX);
  ++*dynEntTotalCount;
  _R13 = v22->activeModel;
  activeModel = v22->activeModel;
  if ( !v22->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 536, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numBones = _R13->numBones;
  if ( numBones > _RBX->numParts )
    numBones = _RBX->numParts;
  v223 = numBones;
  if ( DynEnt_IsSingleBody(v22, _RBX) )
  {
    ++*dynEntSimpleCount;
    Physics_GetRigidBodyTransform((const Physics_WorldId)(3 * (v18 + 1)), v22->singlePhysicsBody, &_RBX->pose.origin, &_RBX->pose.quat);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vsubss  xmm3, xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [rbx+50h]
      vsubss  xmm2, xmm1, dword ptr [rbx+14h]
      vmovss  xmm0, dword ptr [rbx+54h]
      vsubss  xmm4, xmm0, dword ptr [rbx+18h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@38d1b717
    }
    if ( !(v27 | v28) )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vsubss  xmm2, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+40h]
      vmovss  xmm0, dword ptr [rbx+44h]
      vsubss  xmm3, xmm1, dword ptr [rbx+4]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@358637be
    }
    if ( !(v27 | v28) )
    {
LABEL_17:
      v22->flags |= 0x40u;
      _RBX->posePart0.origin.v[0] = _RBX->pose.origin.v[0];
      _RBX->posePart0.origin.v[1] = _RBX->pose.origin.v[1];
      _RBX->posePart0.origin.v[2] = _RBX->pose.origin.v[2];
      _RBX->posePart0.quat.v[0] = _RBX->pose.quat.v[0];
      _RBX->posePart0.quat.v[1] = _RBX->pose.quat.v[1];
      _RBX->posePart0.quat.v[2] = _RBX->pose.quat.v[2];
      _RBX->posePart0.quat.v[3] = _RBX->pose.quat.v[3];
    }
  }
  else
  {
    __asm { vmovss  xmm1, cs:__real@ff7fffff }
    ++*dynEntComplexCount;
    v28 = v22->physicsSystemId == -1;
    __asm
    {
      vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
      vmovaps [rsp+2C0h+var_50], xmm6
      vmovaps [rsp+2C0h+var_D0], xmm14
      vmovaps [rsp+2C0h+var_E0], xmm15
      vmovss  xmm15, cs:__real@3c23d70a
      vmovss  dword ptr [rbp+1C0h+bounds.halfSize+4], xmm1
      vmovss  dword ptr [rbp+1C0h+bounds.halfSize+8], xmm1
      vmovups xmmword ptr [rbp+1C0h+bounds.midPoint], xmm0
    }
    if ( v28 )
    {
      p_origin = &_RBX->posePart0.origin;
      numPhysicsBodies = 1;
      __asm
      {
        vmovaps xmm2, xmm15; epsilon
        vmovss  xmm14, cs:__real@3a83126f
      }
      if ( !VecNCompareCustomEpsilon(_RBX->pose.origin.v, _RBX->posePart0.origin.v, *(float *)&_XMM2, 3) )
        goto LABEL_57;
      p_quat = &_RBX->pose.quat;
      __asm { vmovaps xmm2, xmm14; epsilon }
      if ( !VecNCompareCustomEpsilon(_RBX->pose.quat.v, _RBX->posePart0.quat.v, *(float *)&_XMM2, 4) )
      {
LABEL_57:
        v22->flags |= 0x40u;
        p_quat = &_RBX->pose.quat;
        p_origin->v[0] = _RBX->pose.origin.v[0];
        _RBX->posePart0.origin.v[1] = _RBX->pose.origin.v[1];
        _RBX->posePart0.origin.v[2] = _RBX->pose.origin.v[2];
        _RBX->posePart0.quat.v[0] = _RBX->pose.quat.v[0];
        _RBX->posePart0.quat.v[1] = _RBX->pose.quat.v[1];
        _RBX->posePart0.quat.v[2] = _RBX->pose.quat.v[2];
        _RBX->posePart0.quat.v[3] = _RBX->pose.quat.v[3];
      }
      if ( _R13->boneInfo->radiusSquaredAsInt )
      {
        QuatToAxis(&_RBX->posePart0.quat, &axis);
        Bounds_Transform(&_R13->boneInfo->bounds, p_origin, &axis, &rotatedBounds);
        Bounds_Expand(&bounds, &rotatedBounds);
      }
    }
    else
    {
      v54 = 0;
      numPhysicsBodies = v22->numPhysicsBodies;
      __asm { vmovss  xmm14, cs:__real@3a83126f }
      if ( numPhysicsBodies )
      {
        v56 = localClientNum;
        v57 = 0i64;
        v58 = 3 * localClientNum + 3;
        do
        {
          ++*dynEntComplexBodyCount;
          physicsSystemId = v22->physicsSystemId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v58 > 7 )
          {
            LODWORD(v212) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v212) )
              __debugbreak();
          }
          if ( physicsSystemId == -1 )
          {
            LODWORD(v212) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v212) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum + 1) <= 5 )
          {
            LODWORD(v212) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v212) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v58 <= 1 )
          {
            LODWORD(v212) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v212) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v58, physicsSystemId, v54)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 588, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransform((const Physics_WorldId)v58, m_serialAndIndex, &position, &orientation);
          numParts = _RBX->numParts;
          if ( v54 >= numParts )
          {
            LODWORD(v214) = numParts;
            LODWORD(v213) = numPhysicsBodies;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 595, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", activeModel->name, v213, v214) )
              __debugbreak();
          }
          _RDI = DynEnt_GetPosePartFromPose(v56, _RBX, v54);
          if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 597, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          __asm { vmovaps xmm2, xmm15; epsilon }
          if ( !VecNCompareCustomEpsilon(position.v, _RDI->origin.v, *(float *)&_XMM2, 3) )
            goto LABEL_49;
          __asm { vmovaps xmm2, xmm14; epsilon }
          if ( !VecNCompareCustomEpsilon(orientation.v, _RDI->quat.v, *(float *)&_XMM2, 4) )
          {
LABEL_49:
            __asm { vmovss  xmm0, dword ptr [rbp+1C0h+position] }
            v22->flags |= 0x40u;
            __asm
            {
              vmovss  dword ptr [rdi+10h], xmm0
              vmovss  xmm1, dword ptr [rbp+1C0h+position+4]
              vmovss  dword ptr [rdi+14h], xmm1
              vmovss  xmm0, dword ptr [rbp+1C0h+position+8]
              vmovss  dword ptr [rdi+18h], xmm0
              vmovss  xmm1, dword ptr [rbp+1C0h+orientation]
              vmovss  dword ptr [rdi], xmm1
              vmovss  xmm0, dword ptr [rbp+1C0h+orientation+4]
              vmovss  dword ptr [rdi+4], xmm0
              vmovss  xmm1, dword ptr [rbp+1C0h+orientation+8]
              vmovss  dword ptr [rdi+8], xmm1
              vmovss  xmm0, dword ptr [rbp+1C0h+orientation+0Ch]
              vmovss  dword ptr [rdi+0Ch], xmm0
            }
          }
          if ( activeModel->boneInfo[v57].radiusSquaredAsInt )
          {
            QuatToAxis(&_RDI->quat, &axis);
            Bounds_Transform(&activeModel->boneInfo[v57].bounds, &_RDI->origin, &axis, &rotatedBounds);
            __asm { vmovss  xmm0, dword ptr [rbp+1C0h+bounds.midPoint] }
            HIDWORD(v230) = 0;
            __asm
            {
              vmovups xmm6, xmmword ptr [rbp-40h]
              vmovss  xmm6, xmm6, xmm0
              vmovss  xmm0, dword ptr [rbp+1C0h+bounds.halfSize]
              vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+4], 1C0h+orientation
              vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+8], 1C0h+in1
            }
            HIDWORD(v231) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rbp-30h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+4], 1C0h+orientation
              vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+8], 1C0h+in1
              vmovss  xmm0, dword ptr [rbp+1C0h+rotatedBounds.midPoint]
              vsubps  xmm2, xmm6, xmm3
            }
            HIDWORD(v232) = 0;
            __asm
            {
              vmovups xmm5, xmmword ptr [rbp-20h]
              vmovss  xmm5, xmm5, xmm0
              vmovss  xmm0, dword ptr [rbp+1C0h+rotatedBounds.halfSize]
              vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+4], 1C0h+orientation
              vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+8], 1C0h+in1
            }
            HIDWORD(v233) = 0;
            __asm
            {
              vmovups xmm4, xmmword ptr [rbp-10h]
              vmovss  xmm4, xmm4, xmm0
              vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+4], 1C0h+orientation
              vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+8], 1C0h+in1
              vaddps  xmm1, xmm5, xmm4
              vsubps  xmm0, xmm5, xmm4
              vmovups xmmword ptr [rbp-30h], xmm3
              vaddps  xmm3, xmm6, xmm3
              vmovups xmmword ptr [rbp-10h], xmm4
              vminps  xmm4, xmm0, xmm2
              vmaxps  xmm0, xmm1, xmm3
              vaddps  xmm1, xmm0, xmm4
              vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
              vsubps  xmm3, xmm2, xmm4
              vmovss  dword ptr [rbp+1C0h+bounds.halfSize], xmm3
              vextractps dword ptr [rbp+1C0h+bounds.halfSize+4], xmm3, 1
              vextractps dword ptr [rbp+1C0h+bounds.halfSize+8], xmm3, 2
              vmovss  dword ptr [rbp+1C0h+bounds.midPoint], xmm2
              vextractps dword ptr [rbp+1C0h+bounds.midPoint+4], xmm2, 1
              vextractps dword ptr [rbp+1C0h+bounds.midPoint+8], xmm2, 2
              vmovups xmmword ptr [rbp-40h], xmm6
              vmovups xmmword ptr [rbp-20h], xmm5
            }
          }
          v56 = localClientNum;
          ++v54;
          ++v57;
        }
        while ( v54 < numPhysicsBodies );
        _R13 = activeModel;
      }
      v18 = localClientNum;
      p_quat = &_RBX->pose.quat;
    }
    v105 = numPhysicsBodies;
    v106 = numPhysicsBodies;
    baseMat = _R13->baseMat;
    v224 = baseMat;
    if ( numPhysicsBodies < v223 )
    {
      __asm
      {
        vmovaps [rsp+2C0h+var_60], xmm7
        vmovaps [rsp+2C0h+var_70], xmm8
        vmovaps [rsp+2C0h+var_80], xmm9
        vmovaps [rsp+2C0h+var_90], xmm10
        vmovaps [rsp+2C0h+var_A0], xmm11
        vmovaps [rsp+2C0h+var_B0], xmm12
        vmovaps [rsp+2C0h+var_C0], xmm13
        vmovss  xmm13, cs:__real@3f800000
      }
      do
      {
        _RDI = &baseMat[v106];
        ++*v226;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  [rsp+2C0h+localClientNum], xmm0
        }
        if ( (localClientNumb & 0x7F800000) == 2139095040 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  [rsp+2C0h+localClientNum], xmm0
        }
        if ( (localClientNumc & 0x7F800000) == 2139095040 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  [rsp+2C0h+localClientNum], xmm0
        }
        if ( (localClientNumd & 0x7F800000) == 2139095040 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmovss  [rsp+2C0h+localClientNum], xmm0
        }
        if ( (localClientNume & 0x7F800000) == 2139095040 )
        {
LABEL_96:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1Ch]
          vmovss  [rsp+2C0h+localClientNum], xmm0
        }
        if ( (localClientNumf & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1Ch]
          vmulss  xmm2, xmm0, dword ptr [rdi]
          vmovss  xmm3, dword ptr [rdi+4]
          vmovss  xmm5, dword ptr [rdi+8]
          vmulss  xmm12, xmm2, dword ptr [rdi]
          vmulss  xmm4, xmm3, xmm0
          vmulss  xmm6, xmm5, xmm0
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmulss  xmm10, xmm0, xmm2
          vmulss  xmm7, xmm3, xmm2
          vmulss  xmm11, xmm3, xmm4
          vmulss  xmm9, xmm5, xmm2
          vmulss  xmm2, xmm0, xmm6
          vmulss  xmm8, xmm5, xmm4
          vmulss  xmm4, xmm0, xmm4
          vmulss  xmm3, xmm5, xmm6
          vaddss  xmm1, xmm2, xmm7
          vmovss  dword ptr [rbp+1C0h+in1+4], xmm1
          vsubss  xmm1, xmm7, xmm2
          vmovss  dword ptr [rbp+1C0h+in1+0Ch], xmm1
          vaddss  xmm1, xmm8, xmm10
          vmovss  dword ptr [rbp+1C0h+in1+14h], xmm1
          vsubss  xmm1, xmm8, xmm10
          vmovss  dword ptr [rbp+1C0h+in1+1Ch], xmm1
          vmovss  xmm1, dword ptr [rdi+10h]
          vaddss  xmm0, xmm3, xmm11
          vsubss  xmm0, xmm13, xmm0
          vmovss  dword ptr [rbp+1C0h+in1], xmm0
          vsubss  xmm0, xmm9, xmm4
          vmovss  dword ptr [rbp+1C0h+in1+8], xmm0
          vaddss  xmm0, xmm3, xmm12
          vsubss  xmm0, xmm13, xmm0
          vmovss  dword ptr [rbp+1C0h+in1+10h], xmm0
          vaddss  xmm0, xmm4, xmm9
          vmovss  dword ptr [rbp+1C0h+in1+18h], xmm0
          vaddss  xmm0, xmm11, xmm12
          vsubss  xmm0, xmm13, xmm0
          vmovss  dword ptr [rbp+1C0h+in1+20h], xmm0
          vmovss  xmm0, dword ptr [rdi+14h]
          vmovss  dword ptr [rbp+1C0h+in1+24h], xmm1
          vmovss  xmm1, dword ptr [rdi+18h]
          vmovss  dword ptr [rbp+1C0h+in1+28h], xmm0
          vmovss  dword ptr [rbp+1C0h+in1+2Ch], xmm1
        }
        QuatToAxis(p_quat, (tmat33_t<vec3_t> *)&v239);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4Ch]
          vmovss  xmm1, dword ptr [rbx+50h]
          vmovss  [rbp+1C0h+var_F4], xmm0
          vmovss  xmm0, dword ptr [rbx+54h]
          vmovss  [rbp+1C0h+var_EC], xmm0
          vmovss  [rbp+1C0h+var_F0], xmm1
        }
        MatrixMultiply43(&in1, &v239, &out);
        v149 = _RBX->numParts;
        if ( v106 >= v149 )
        {
          LODWORD(v212) = v149;
          LODWORD(v211) = v106;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v211, v212) )
            __debugbreak();
        }
        if ( v106 )
        {
          posePart1FirstIndex = _RBX->posePart1FirstIndex;
          if ( posePart1FirstIndex + v106 - 1 >= g_dynEntExtraPosePartsAllocCount[v18] )
          {
            LODWORD(v212) = g_dynEntExtraPosePartsAllocCount[v18];
            LODWORD(v211) = posePart1FirstIndex + v106 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v211, v212) )
              __debugbreak();
          }
          v150 = &g_dynEntPoseExtraParts[v18][v106 - 1 + _RBX->posePart1FirstIndex];
        }
        else
        {
          v150 = (DynEnt_ExtraPosePart *)_RBX;
        }
        if ( !v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 657, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
          __debugbreak();
        AxisToQuat((const tmat33_t<vec3_t> *)&out, &v150->posePart.quat);
        __asm { vmovss  xmm0, dword ptr [rbp+1C0h+out+24h] }
        _RDX = (unsigned int *)v150->posePart.origin.v;
        __asm
        {
          vmovss  dword ptr [rdx], xmm0
          vmovss  xmm1, dword ptr [rbp+1C0h+out+28h]
          vmovss  dword ptr [rdx+4], xmm1
          vmovss  xmm0, dword ptr [rbp+1C0h+out+2Ch]
          vmovss  dword ptr [rdx+8], xmm0
        }
        Bounds_Transform(&activeModel->boneInfo[v106].bounds, &v150->posePart.origin, (const tmat33_t<vec3_t> *)&out, &rotatedBounds);
        __asm { vmovss  xmm0, dword ptr [rbp+1C0h+bounds.midPoint] }
        HIDWORD(v233) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rbp-10h]
          vmovss  xmm6, xmm6, xmm0
          vmovss  xmm0, dword ptr [rbp+1C0h+bounds.halfSize]
          vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+4], 1C0h+orientation
          vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+8], 1C0h+in1
        }
        HIDWORD(v232) = 0;
        ++v106;
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp-20h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+4], 1C0h+orientation
          vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+8], 1C0h+in1
          vmovss  xmm0, dword ptr [rbp+1C0h+rotatedBounds.midPoint]
          vsubps  xmm2, xmm6, xmm3
        }
        HIDWORD(v231) = 0;
        __asm
        {
          vmovups xmm5, xmmword ptr [rbp-30h]
          vmovss  xmm5, xmm5, xmm0
          vmovss  xmm0, dword ptr [rbp+1C0h+rotatedBounds.halfSize]
          vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+4], 1C0h+orientation
          vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+8], 1C0h+in1
        }
        HIDWORD(v230) = 0;
        __asm { vmovups xmm4, xmmword ptr [rbp-40h] }
        baseMat = v224;
        __asm
        {
          vmovss  xmm4, xmm4, xmm0
          vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+4], 1C0h+orientation
          vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+8], 1C0h+in1
          vaddps  xmm1, xmm5, xmm4
          vsubps  xmm0, xmm5, xmm4
          vmovups xmmword ptr [rbp-20h], xmm3
          vaddps  xmm3, xmm6, xmm3
          vmovups xmmword ptr [rbp-40h], xmm4
          vminps  xmm4, xmm0, xmm2
          vmaxps  xmm0, xmm1, xmm3
          vaddps  xmm1, xmm0, xmm4
          vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
          vsubps  xmm3, xmm2, xmm4
          vmovss  dword ptr [rbp+1C0h+bounds.halfSize], xmm3
          vextractps dword ptr [rbp+1C0h+bounds.halfSize+4], xmm3, 1
          vextractps dword ptr [rbp+1C0h+bounds.halfSize+8], xmm3, 2
          vmovss  dword ptr [rbp+1C0h+bounds.midPoint], xmm2
          vextractps dword ptr [rbp+1C0h+bounds.midPoint+4], xmm2, 1
          vextractps dword ptr [rbp+1C0h+bounds.midPoint+8], xmm2, 2
          vmovups xmmword ptr [rbp-10h], xmm6
          vmovups xmmword ptr [rbp-30h], xmm5
        }
      }
      while ( v106 < v223 );
      v22 = Client;
      _R13 = activeModel;
      v105 = numPhysicsBodies;
      __asm
      {
        vmovaps xmm13, [rsp+2C0h+var_C0]
        vmovaps xmm12, [rsp+2C0h+var_B0]
        vmovaps xmm11, [rsp+2C0h+var_A0]
        vmovaps xmm10, [rsp+2C0h+var_90]
        vmovaps xmm9, [rsp+2C0h+var_80]
        vmovaps xmm8, [rsp+2C0h+var_70]
        vmovaps xmm7, [rsp+2C0h+var_60]
      }
    }
    __asm { vmovaps xmm6, [rsp+2C0h+var_50] }
    if ( v22->physicsSystemId == -1 )
      goto LABEL_89;
    __asm { vmovaps xmm2, xmm15; epsilon }
    if ( !VecNCompareCustomEpsilon(bounds.midPoint.v, _RBX->bounds.midPoint.v, *(float *)&_XMM2, 3) )
      goto LABEL_89;
    if ( v105 == 1 )
    {
      __asm { vmovaps xmm2, xmm14; epsilon }
      if ( !VecNCompareCustomEpsilon(_RBX->posePart0.quat.v, p_quat->v, *(float *)&_XMM2, 4) )
      {
LABEL_89:
        v22->flags |= 0x40u;
        _RBX->pose.origin.v[0] = _RBX->posePart0.origin.v[0];
        _RBX->pose.origin.v[1] = _RBX->posePart0.origin.v[1];
        _RBX->pose.origin.v[2] = _RBX->posePart0.origin.v[2];
        if ( v105 == 1 )
        {
          _RBX->pose.quat.v[0] = _RBX->posePart0.quat.v[0];
          _RBX->pose.quat.v[1] = _RBX->posePart0.quat.v[1];
          _RBX->pose.quat.v[2] = _RBX->posePart0.quat.v[2];
          _RBX->pose.quat.v[3] = _RBX->posePart0.quat.v[3];
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1C0h+bounds.halfSize+4]
            vmovss  xmm1, dword ptr [rbp+1C0h+bounds.halfSize]
            vmulss  xmm3, xmm0, xmm0
            vmovss  xmm0, dword ptr [rbp+1C0h+bounds.halfSize+8]
            vmulss  xmm2, xmm1, xmm1
          }
          _RBX->pose.quat.v[3] = 1.0;
          __asm
          {
            vmulss  xmm1, xmm0, xmm0
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
          }
          *(_QWORD *)_RBX->pose.quat.v = 0i64;
          _RBX->pose.quat.v[2] = 0.0;
          __asm
          {
            vmovss  xmm0, dword ptr [r13+28h]
            vmulss  xmm1, xmm0, cs:__real@41200000
            vsqrtss xmm3, xmm2, xmm2
            vcomiss xmm3, xmm1
          }
        }
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+1C0h+bounds.midPoint]
      vmovss  xmm1, dword ptr [rbp+1C0h+bounds.halfSize+8]
      vmovaps xmm15, [rsp+2C0h+var_E0]
      vmovaps xmm14, [rsp+2C0h+var_D0]
      vmovups xmmword ptr [rbx+24h], xmm0
      vmovss  xmm0, dword ptr [rbp+1C0h+bounds.halfSize+4]
      vmovss  dword ptr [rbx+34h], xmm0
      vmovss  dword ptr [rbx+38h], xmm1
    }
  }
  return 1;
}

