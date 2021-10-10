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
  unsigned int *v1; 
  char *Value; 
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int id; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  DynEntityClient *Client; 
  DynEntityPose *Pose; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int *dynEntComplexCount; 
  int *dynEntComplexBodyCount; 
  int dynEntSimpleAdditionalBoneCount; 
  int v30; 
  unsigned int v31; 
  int dynEntTotalCount; 
  int dynEntSimpleCount[2]; 
  int dynEntComplexAdditionalBoneCount; 
  int v35; 
  int v36; 
  int v37; 
  unsigned int *v38; 

  v38 = (unsigned int *)cmdInfo;
  v1 = (unsigned int *)cmdInfo;
  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 760, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v3 = (int *)(Value + 23336);
  if ( (unsigned int)(*((_DWORD *)Value + 5834) + 1) >= 3 )
  {
    LODWORD(dynEntComplexCount) = *((_DWORD *)Value + 5834) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", dynEntComplexCount, 3) )
      __debugbreak();
  }
  if ( (unsigned int)++*v3 >= 3 )
  {
    LODWORD(dynEntComplexBodyCount) = 3;
    LODWORD(dynEntComplexCount) = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
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
  v9 = 0;
  dynEntSimpleAdditionalBoneCount = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 531, NULL, 0);
  v10 = (int)*v1;
  dynEntTotalCount = 0;
  v11 = 0;
  v30 = 0;
  dynEntSimpleCount[0] = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  dynEntComplexAdditionalBoneCount = 0;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "DynEnt_UpdatePoseModel and DynEnt_LinkModel list");
  v12 = v1[2];
  v13 = v1[4] - v12;
  if ( v13 < 0 )
    v13 = 0;
  if ( (int)v1[3] < v13 )
    v13 = v1[3];
  v31 = v13;
  v14 = v12 + v13;
  if ( (unsigned int)v12 < (int)v12 + v13 )
  {
    v15 = v12;
    do
    {
      if ( (unsigned int)v10 >= 2 )
      {
        LODWORD(dynEntComplexBodyCount) = 2;
        LODWORD(dynEntComplexCount) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( (unsigned int)v12 >= g_dynEntAddToSceneCount[v10] )
      {
        LODWORD(dynEntComplexBodyCount) = g_dynEntAddToSceneCount[v10];
        LODWORD(dynEntComplexCount) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( sceneListIndex ) < (unsigned)( g_dynEntAddToSceneCount[localClientNum] )", "sceneListIndex doesn't index g_dynEntAddToSceneCount[localClientNum]\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( !g_dynEntAddToSceneList[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 89, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum])", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum]") )
        __debugbreak();
      if ( g_dynEntAddToSceneList[v10][v15].basis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 90, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis)", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis") )
        __debugbreak();
      id = g_dynEntAddToSceneList[v10][v15].id;
      if ( DynEnt_UpdatePoseModel((LocalClientNum_t)v10, id, &dynEntTotalCount, dynEntSimpleCount, &dynEntSimpleAdditionalBoneCount, &v36, &v35, &dynEntComplexAdditionalBoneCount) )
        DynEnt_LinkModel((LocalClientNum_t)v10, id);
      LODWORD(v12) = v12 + 1;
      ++v15;
    }
    while ( (unsigned int)v12 < v14 );
    v9 = dynEntTotalCount;
    v11 = dynEntSimpleCount[0];
    v1 = v38;
    v13 = v31;
    dynEntSimpleAdditionalBoneCount = dynEntTotalCount;
    v30 = dynEntSimpleCount[0];
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "DynEnt_UpdatePoseBrush and DynEnt_LinkBrush list");
  v17 = v13 + v1[2];
  v31 = v1[3] + v1[2];
  if ( (unsigned int)v17 < v31 )
  {
    v18 = 8 * v17;
    *(_QWORD *)dynEntSimpleCount = 8 * v17;
    do
    {
      if ( (unsigned int)v10 >= 2 )
      {
        LODWORD(dynEntComplexBodyCount) = 2;
        LODWORD(dynEntComplexCount) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( (unsigned int)v17 >= g_dynEntAddToSceneCount[v10] )
      {
        LODWORD(dynEntComplexBodyCount) = g_dynEntAddToSceneCount[v10];
        LODWORD(dynEntComplexCount) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( sceneListIndex ) < (unsigned)( g_dynEntAddToSceneCount[localClientNum] )", "sceneListIndex doesn't index g_dynEntAddToSceneCount[localClientNum]\n\t%i not in [0, %i)", dynEntComplexCount, dynEntComplexBodyCount) )
          __debugbreak();
      }
      if ( !g_dynEntAddToSceneList[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 89, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum])", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum]") )
        __debugbreak();
      if ( *((_BYTE *)&g_dynEntAddToSceneList[v10]->basis + v18) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 90, ASSERT_TYPE_ASSERT, "(g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis)", (const char *)&queryFormat, "g_dynEntAddToSceneList[localClientNum][sceneListIndex].basis == basis") )
        __debugbreak();
      v19 = *(unsigned int *)((char *)&g_dynEntAddToSceneList[v10]->id + v18);
      Client = DynEnt_GetClient((LocalClientNum_t)v10, v19, DYNENT_BASIS_BRUSH);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 709, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (Client->flags & 3) == 3 )
      {
        Pose = DynEnt_GetPose((LocalClientNum_t)v10, v19, DYNENT_BASIS_BRUSH);
        if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 720, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        R_MDAO_ResetVolumesProcessed(Pose);
        ++v30;
        dynEntSimpleAdditionalBoneCount = v9 + 1;
        Sys_ProfBeginNamedEvent(0xFF008008, "Prep");
        Physics_GetRigidBodyTransform((const Physics_WorldId)(3 * v10 + 3), Client->singlePhysicsBody, &Pose->pose.origin, &Pose->pose.quat);
        v22 = Pose->pose.origin.v[0] - Pose->posePart0.origin.v[0];
        v23 = Pose->pose.origin.v[1] - Pose->posePart0.origin.v[1];
        v24 = Pose->pose.origin.v[2] - Pose->posePart0.origin.v[2];
        if ( (float)((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24)) > 0.000099999997 || (v25 = Pose->pose.quat.v[1] - Pose->posePart0.quat.v[1], v26 = Pose->pose.quat.v[2] - Pose->posePart0.quat.v[2], (float)((float)((float)((float)(Pose->pose.quat.v[0] - Pose->posePart0.quat.v[0]) * (float)(Pose->pose.quat.v[0] - Pose->posePart0.quat.v[0])) + (float)(v25 * v25)) + (float)(v26 * v26)) > 0.0000010000001) )
        {
          Client->flags |= 0x40u;
          Pose->posePart0.origin.v[0] = Pose->pose.origin.v[0];
          Pose->posePart0.origin.v[1] = Pose->pose.origin.v[1];
          Pose->posePart0.origin.v[2] = Pose->pose.origin.v[2];
          Pose->posePart0.quat.v[0] = Pose->pose.quat.v[0];
          Pose->posePart0.quat.v[1] = Pose->pose.quat.v[1];
          Pose->posePart0.quat.v[2] = Pose->pose.quat.v[2];
          Pose->posePart0.quat.v[3] = Pose->pose.quat.v[3];
        }
        Sys_ProfEndNamedEvent();
        DynEnt_LinkBrush((LocalClientNum_t)v10, v19);
        v18 = *(_QWORD *)dynEntSimpleCount;
      }
      v9 = dynEntSimpleAdditionalBoneCount;
      v18 += 8i64;
      LODWORD(v17) = v17 + 1;
      *(_QWORD *)dynEntSimpleCount = v18;
    }
    while ( (unsigned int)v17 < v31 );
    v11 = v30;
  }
  Sys_ProfEndNamedEvent();
  Physics_SetCGDynEntAuthoritativeDebugData((LocalClientNum_t)v10, dynEntSimpleAdditionalBoneCount, v11, v37, v36, v35, dynEntComplexAdditionalBoneCount);
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

  if ( messageCount < 100 && dynEntId != -1 && lightCount > r_linkLightWarningThreshold->current.integer )
  {
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
    Com_Printf(8, "  Pos=(%3.0f,%3.0f,%3.0f) Size=(%3.0f,%3.0f,%3.0f).\n", pos->v[0], pos->v[1], pos->v[2], (float)(halfSize->v[0] * 2.0), (float)(halfSize->v[1] * 2.0), (float)(2.0 * halfSize->v[2]));
    Com_Printf(8, "  Please enable \"no spotshadow\" checkbox in Radiant if we don't need spot shadow for this object.\n");
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

void __fastcall DynEnt_LinkModel(LocalClientNum_t localClientNum, unsigned int dynEntId, double a3)
{
  __m128 v3; 
  __int64 v5; 
  const DynEntityDef *Def; 
  unsigned __int16 v7; 
  DynEntityPose *PoseFromClientId; 
  DynEntityClient *ClientFromClientId; 
  __int128 v11; 
  __m128 v15; 
  vec4_t quat; 
  const float4 *v19; 
  vector3 *v20; 
  __m128 v21; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v30; 
  __m128 v33; 
  __m128 v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  unsigned __int16 flags; 
  unsigned int v40; 
  __int128 v41; 
  __m128 v42; 
  __m128 v43; 
  Bounds halfSize; 
  Bounds bounds; 

  v5 = localClientNum;
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 193, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v7 = Def->clientId[v5];
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v5, v7, DYNENT_BASIS_MODEL);
  ClientFromClientId = DynEnt_GetClientFromClientId((LocalClientNum_t)v5, v7, DYNENT_BASIS_MODEL);
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 197, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 198, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( ClientFromClientId->activeModel )
  {
    XModelGetBounds(ClientFromClientId->activeModel, &bounds);
    HIDWORD(v41) = 0;
    v11 = v41;
    *(float *)&v11 = bounds.midPoint.v[0];
    _XMM14 = v11;
    __asm
    {
      vinsertps xmm14, xmm14, dword ptr [rsp+130h+bounds.midPoint+4], 30h+var_20
      vinsertps xmm14, xmm14, dword ptr [rsp+130h+bounds.midPoint+8], 20h
    }
    v42 = _XMM14;
    v42.m128_i32[3] = 0;
    v15 = v42;
    v15.m128_f32[0] = bounds.halfSize.v[0];
    _XMM6 = v15;
    __asm
    {
      vinsertps xmm6, xmm6, dword ptr [rsp+130h+bounds.halfSize+4], 30h+var_20
      vinsertps xmm6, xmm6, dword ptr [rsp+130h+bounds.halfSize+8], 20h
    }
    quat = PoseFromClientId->pose.quat;
    v43 = _XMM6;
    Float4UnitQuatToAxis(v20, v19);
    v21 = (__m128)quat;
    _XMM0 = g_negativeZero.v;
    __asm
    {
      vandnps xmm7, xmm0, xmm2
      vandnps xmm5, xmm0, xmm13
    }
    v25 = _mm_shuffle_ps(_XMM6, _XMM6, 0);
    v26 = _mm_shuffle_ps(_XMM6, _XMM6, 85);
    v27 = _mm_shuffle_ps(_XMM6, _XMM6, 170);
    __asm { vandnps xmm6, xmm0, xmm1 }
    v43.m128_i32[3] = 0;
    v30 = v43;
    v30.m128_f32[0] = PoseFromClientId->pose.origin.v[0];
    _XMM11 = v30;
    __asm
    {
      vinsertps xmm11, xmm11, dword ptr [rbx+50h], 10h
      vinsertps xmm11, xmm11, dword ptr [rbx+54h], 20h ; ' '
    }
    v33 = _mm128_add_ps(_mm128_mul_ps(v21, _mm_shuffle_ps(_XMM14, _XMM14, 0)), _mm128_add_ps(_mm128_mul_ps(v3, _mm_shuffle_ps(_XMM14, _XMM14, 85)), _mm128_add_ps(_mm128_mul_ps(*(__m128 *)&a3, _mm_shuffle_ps(_XMM14, _XMM14, 170)), _XMM11)));
    v34 = _mm128_add_ps(_mm128_mul_ps(v27, _XMM7), _mm128_add_ps(_mm128_mul_ps(v26, _XMM6), _mm128_mul_ps(v25, _XMM5)));
    v35 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
    v36 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
    v37 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
    v38 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
    halfSize.halfSize.v[1] = v35;
    halfSize.halfSize.v[2] = v36;
    halfSize.midPoint.v[0] = v33.m128_f32[0];
    halfSize.midPoint.v[1] = v37;
    halfSize.midPoint.v[2] = v38;
    halfSize.halfSize.v[0] = v34.m128_f32[0];
    if ( DynEnt_IsSingleBody(ClientFromClientId, PoseFromClientId) )
    {
      PoseFromClientId->bounds.midPoint.v[0] = v33.m128_f32[0];
      PoseFromClientId->bounds.midPoint.v[1] = v37;
      PoseFromClientId->bounds.midPoint.v[2] = v38;
      PoseFromClientId->bounds.halfSize.v[0] = v34.m128_f32[0];
      PoseFromClientId->bounds.halfSize.v[1] = v35;
      PoseFromClientId->bounds.halfSize.v[2] = v36;
    }
    flags = ClientFromClientId->flags;
    if ( (flags & 0x408) != 0 )
    {
      if ( (flags & 0x800) != 0 )
      {
        R_UnLinkDynEntClient_NoCull((LocalClientNum_t)v5, v7, DYNENT_BASIS_MODEL);
        ClientFromClientId->flags &= ~0x800u;
      }
    }
    else if ( DynEnt_VisiblyChangedThisFrame((LocalClientNum_t)v5, DYNENT_BASIS_MODEL, dynEntId) || (ClientFromClientId->flags & 0x800) == 0 )
    {
      v40 = R_LinkDynEntClient((LocalClientNum_t)v5, v7, DYNENT_BASIS_MODEL, &halfSize);
      R_DynEntClientMoved((LocalClientNum_t)v5, DYNENT_BASIS_MODEL, v7);
      ClientFromClientId->flags |= 0x800u;
      DynEnt_CheckLightCount(0, dynEntId, ClientFromClientId, v40, &halfSize.midPoint, &halfSize.halfSize);
    }
    R_LinkDynEntClientToCells((LocalClientNum_t)v5, v7, DYNENT_BASIS_MODEL, &halfSize);
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
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float4 v10; 
  float v13; 
  float4 v15; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  Float4Bounds baseBounds_8; 
  Float4Bounds rotatedBounds_8; 
  tmat33_t<vec3_t> axis; 

  _RDI = R_GetBrushModel(dynEntDef->brushModel);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 289, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  v4 = _RDI->bounds.midPoint.v[0];
  v5 = dynentPose->pose.quat.v[1];
  v6 = dynentPose->pose.quat.v[0];
  v7 = dynentPose->pose.quat.v[2];
  v8 = dynentPose->pose.quat.v[3];
  rotatedBounds_8.midPoint.v.m128_i32[3] = 0;
  v10.v = (__m128)rotatedBounds_8.midPoint;
  v10.v.m128_f32[0] = v4;
  _XMM3 = v10.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
  }
  v13 = _RDI->bounds.halfSize.v[0];
  rotatedBounds_8.midPoint = (float4)_XMM3.v;
  baseBounds_8.midPoint = (float4)_XMM3.v;
  rotatedBounds_8.midPoint.v.m128_i32[3] = 0;
  v15.v = (__m128)rotatedBounds_8.midPoint;
  v15.v.m128_f32[0] = v13;
  _XMM3 = v15.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+48h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+4Ch], 20h ; ' '
  }
  rotatedBounds_8.midPoint = (float4)_XMM3.v;
  baseBounds_8.halfSize = (float4)_XMM3.v;
  v18 = (float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) + (float)(v8 * v8);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v6, v5, v7, v8, fsqrt(v18)) )
    __debugbreak();
  v19 = 2.0 * dynentPose->pose.quat.v[0];
  v20 = v19 * dynentPose->pose.quat.v[0];
  v21 = dynentPose->pose.quat.v[1];
  v22 = dynentPose->pose.quat.v[2];
  v23 = dynentPose->pose.quat.v[3];
  v24 = v21 * (float)(v21 * 2.0);
  v25 = v22 * (float)(v21 * 2.0);
  v26 = v23 * (float)(v21 * 2.0);
  v27 = v21 * v19;
  v28 = v23 * (float)(v22 * 2.0);
  v29 = v22 * (float)(v22 * 2.0);
  axis.m[0].v[0] = 1.0 - (float)(v29 + v24);
  axis.m[0].v[2] = (float)(v22 * v19) - v26;
  axis.m[0].v[1] = v28 + v27;
  axis.m[1].v[0] = v27 - v28;
  axis.m[1].v[1] = 1.0 - (float)(v29 + v20);
  axis.m[2].v[0] = v26 + (float)(v22 * v19);
  axis.m[1].v[2] = v25 + (float)(v23 * v19);
  axis.m[2].v[2] = 1.0 - (float)(v24 + v20);
  axis.m[2].v[1] = v25 - (float)(v23 * v19);
  Float4Bounds_Transform(&baseBounds_8, &dynentPose->pose.origin, &axis, &rotatedBounds_8);
  _XMM1.v = (__m128)rotatedBounds_8.midPoint;
  _RDI->writable.bounds.midPoint.v[0] = rotatedBounds_8.midPoint.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+4], xmm1, 1
    vextractps dword ptr [rdi+8], xmm1, 2
  }
  _XMM1.v = (__m128)rotatedBounds_8.halfSize;
  _RDI->writable.bounds.halfSize.v[0] = rotatedBounds_8.halfSize.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+10h], xmm1, 1
    vextractps dword ptr [rdi+14h], xmm1, 2
  }
  _RDI->writable.origin.v[0] = dynentPose->pose.origin.v[0];
  _RDI->writable.origin.v[1] = dynentPose->pose.origin.v[1];
  _RDI->writable.origin.v[2] = dynentPose->pose.origin.v[2];
  _RDI->writable.quat.v[0] = dynentPose->pose.quat.v[0];
  _RDI->writable.quat.v[1] = dynentPose->pose.quat.v[1];
  _RDI->writable.quat.v[2] = dynentPose->pose.quat.v[2];
  _RDI->writable.quat.v[3] = dynentPose->pose.quat.v[3];
  dynentPose->bounds.midPoint.v[0] = _RDI->writable.bounds.midPoint.v[0];
  dynentPose->bounds.midPoint.v[1] = _RDI->writable.bounds.midPoint.v[1];
  dynentPose->bounds.midPoint.v[2] = _RDI->writable.bounds.midPoint.v[2];
  dynentPose->bounds.halfSize.v[0] = _RDI->writable.bounds.halfSize.v[0];
  dynentPose->bounds.halfSize.v[1] = _RDI->writable.bounds.halfSize.v[1];
  dynentPose->bounds.halfSize.v[2] = _RDI->writable.bounds.halfSize.v[2];
}

/*
==============
DynEnt_UpdatePoseModel
==============
*/
char DynEnt_UpdatePoseModel(LocalClientNum_t localClientNum, unsigned int dynEntId, int *dynEntTotalCount, int *dynEntSimpleCount, int *dynEntSimpleAdditionalBoneCount, int *dynEntComplexCount, int *dynEntComplexBodyCount, int *dynEntComplexAdditionalBoneCount)
{
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  LocalClientNum_t v16; 
  const DynEntityClient *v20; 
  DynEntityPose *Pose; 
  const XModel *activeModel; 
  unsigned __int8 numBones; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  bool v30; 
  unsigned __int8 v31; 
  float v32; 
  LocalClientNum_t v33; 
  __int64 v34; 
  __int32 v35; 
  unsigned int physicsSystemId; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 numParts; 
  GfxPlacement *PosePartFromPose; 
  float v40; 
  __m128 v42; 
  __m128 v46; 
  __m128 v50; 
  __m128 v54; 
  const vec4_t *p_quat; 
  vec3_t *p_origin; 
  unsigned __int8 v65; 
  unsigned __int8 v66; 
  DObjAnimMat *baseMat; 
  DObjAnimMat *v68; 
  float transWeight; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  unsigned __int8 v84; 
  DynEnt_ExtraPosePart *v85; 
  unsigned int posePart1FirstIndex; 
  __m128 v88; 
  __m128 v92; 
  __m128 v96; 
  __m128 v100; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  unsigned __int8 numPhysicsBodies; 
  const XModel *v119; 
  unsigned __int8 v120; 
  DObjAnimMat *v121; 
  hknpBodyId result; 
  int *v123; 
  DynEntityClient *Client; 
  Bounds bounds; 
  Bounds rotatedBounds; 
  __m128 v127; 
  __m128 v128; 
  __m128 v129; 
  __m128 v130; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> v136; 
  __int128 v137; 
  __int128 v138; 
  __int128 v139; 
  __int128 v140; 
  __int128 v141; 
  __int128 v142; 
  __int128 v143; 
  __int128 v144; 

  v16 = localClientNum;
  v123 = dynEntComplexAdditionalBoneCount;
  Client = DynEnt_GetClient(localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  v20 = Client;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 513, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( (Client->flags & 3) != 3 )
    return 0;
  Pose = DynEnt_GetPose(v16, dynEntId, DYNENT_BASIS_MODEL);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 524, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  R_MDAO_ResetVolumesProcessed(Pose);
  ++*dynEntTotalCount;
  activeModel = v20->activeModel;
  v119 = v20->activeModel;
  if ( !v20->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 536, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numBones = activeModel->numBones;
  if ( numBones > Pose->numParts )
    numBones = Pose->numParts;
  v120 = numBones;
  if ( DynEnt_IsSingleBody(v20, Pose) )
  {
    ++*dynEntSimpleCount;
    Physics_GetRigidBodyTransform((const Physics_WorldId)(3 * (v16 + 1)), v20->singlePhysicsBody, &Pose->pose.origin, &Pose->pose.quat);
    v25 = Pose->pose.origin.v[0] - Pose->posePart0.origin.v[0];
    v26 = Pose->pose.origin.v[1] - Pose->posePart0.origin.v[1];
    v27 = Pose->pose.origin.v[2] - Pose->posePart0.origin.v[2];
    if ( (float)((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27)) > 0.000099999997 || (v28 = Pose->pose.quat.v[1] - Pose->posePart0.quat.v[1], v29 = Pose->pose.quat.v[2] - Pose->posePart0.quat.v[2], (float)((float)((float)((float)(Pose->pose.quat.v[0] - Pose->posePart0.quat.v[0]) * (float)(Pose->pose.quat.v[0] - Pose->posePart0.quat.v[0])) + (float)(v28 * v28)) + (float)(v29 * v29)) > 0.0000010000001) )
    {
      v20->flags |= 0x40u;
      Pose->posePart0.origin.v[0] = Pose->pose.origin.v[0];
      Pose->posePart0.origin.v[1] = Pose->pose.origin.v[1];
      Pose->posePart0.origin.v[2] = Pose->pose.origin.v[2];
      Pose->posePart0.quat.v[0] = Pose->pose.quat.v[0];
      Pose->posePart0.quat.v[1] = Pose->pose.quat.v[1];
      Pose->posePart0.quat.v[2] = Pose->pose.quat.v[2];
      Pose->posePart0.quat.v[3] = Pose->pose.quat.v[3];
    }
  }
  else
  {
    ++*dynEntComplexCount;
    v30 = v20->physicsSystemId == -1;
    v144 = v8;
    bounds.halfSize.v[1] = FLOAT_N3_4028235e38;
    bounds.halfSize.v[2] = FLOAT_N3_4028235e38;
    *(_OWORD *)bounds.midPoint.v = _xmm_ff7fffff000000000000000000000000;
    if ( v30 )
    {
      p_origin = &Pose->posePart0.origin;
      numPhysicsBodies = 1;
      v32 = FLOAT_0_001;
      if ( !VecNCompareCustomEpsilon(Pose->pose.origin.v, Pose->posePart0.origin.v, 0.0099999998, 3) || (p_quat = &Pose->pose.quat, !VecNCompareCustomEpsilon(Pose->pose.quat.v, Pose->posePart0.quat.v, 0.001, 4)) )
      {
        v20->flags |= 0x40u;
        p_quat = &Pose->pose.quat;
        p_origin->v[0] = Pose->pose.origin.v[0];
        Pose->posePart0.origin.v[1] = Pose->pose.origin.v[1];
        Pose->posePart0.origin.v[2] = Pose->pose.origin.v[2];
        Pose->posePart0.quat.v[0] = Pose->pose.quat.v[0];
        Pose->posePart0.quat.v[1] = Pose->pose.quat.v[1];
        Pose->posePart0.quat.v[2] = Pose->pose.quat.v[2];
        Pose->posePart0.quat.v[3] = Pose->pose.quat.v[3];
      }
      if ( activeModel->boneInfo->radiusSquaredAsInt )
      {
        QuatToAxis(&Pose->posePart0.quat, &axis);
        Bounds_Transform(&activeModel->boneInfo->bounds, p_origin, &axis, &rotatedBounds);
        Bounds_Expand(&bounds, &rotatedBounds);
      }
    }
    else
    {
      v31 = 0;
      numPhysicsBodies = v20->numPhysicsBodies;
      v32 = FLOAT_0_001;
      if ( numPhysicsBodies )
      {
        v33 = localClientNum;
        v34 = 0i64;
        v35 = 3 * localClientNum + 3;
        do
        {
          ++*dynEntComplexBodyCount;
          physicsSystemId = v20->physicsSystemId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v35 > 7 )
          {
            LODWORD(v114) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v114) )
              __debugbreak();
          }
          if ( physicsSystemId == -1 )
          {
            LODWORD(v114) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v114) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * localClientNum + 1) <= 5 )
          {
            LODWORD(v114) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v114) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v35 <= 1 )
          {
            LODWORD(v114) = 3 * localClientNum + 3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v114) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v35, physicsSystemId, v31)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 588, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransform((const Physics_WorldId)v35, m_serialAndIndex, &position, &orientation);
          numParts = Pose->numParts;
          if ( v31 >= numParts )
          {
            LODWORD(v116) = numParts;
            LODWORD(v115) = numPhysicsBodies;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 595, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v119->name, v115, v116) )
              __debugbreak();
          }
          PosePartFromPose = DynEnt_GetPosePartFromPose(v33, Pose, v31);
          if ( !PosePartFromPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 597, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          if ( !VecNCompareCustomEpsilon(position.v, PosePartFromPose->origin.v, 0.0099999998, 3) || !VecNCompareCustomEpsilon(orientation.v, PosePartFromPose->quat.v, 0.001, 4) )
          {
            v40 = position.v[0];
            v20->flags |= 0x40u;
            PosePartFromPose->origin.v[0] = v40;
            PosePartFromPose->origin.v[1] = position.v[1];
            PosePartFromPose->origin.v[2] = position.v[2];
            PosePartFromPose->quat = orientation;
          }
          if ( v119->boneInfo[v34].radiusSquaredAsInt )
          {
            QuatToAxis(&PosePartFromPose->quat, &axis);
            Bounds_Transform(&v119->boneInfo[v34].bounds, &PosePartFromPose->origin, &axis, &rotatedBounds);
            v127.m128_i32[3] = 0;
            v42 = v127;
            v42.m128_f32[0] = bounds.midPoint.v[0];
            _XMM6 = v42;
            __asm
            {
              vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+4], 1C0h+orientation
              vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+8], 1C0h+in1
            }
            v128.m128_i32[3] = 0;
            v46 = v128;
            v46.m128_f32[0] = bounds.halfSize.v[0];
            _XMM3 = v46;
            __asm
            {
              vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+4], 1C0h+orientation
              vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+8], 1C0h+in1
            }
            _mm128_sub_ps(_XMM6, _XMM3);
            v129.m128_i32[3] = 0;
            v50 = v129;
            v50.m128_f32[0] = rotatedBounds.midPoint.v[0];
            _XMM5 = v50;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+4], 1C0h+orientation
              vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+8], 1C0h+in1
            }
            v130.m128_i32[3] = 0;
            v54 = v130;
            v54.m128_f32[0] = rotatedBounds.halfSize.v[0];
            _XMM4 = v54;
            __asm
            {
              vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+4], 1C0h+orientation
              vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+8], 1C0h+in1
            }
            _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
            _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
            v128 = _XMM3;
            _mm128_add_ps(_XMM6, _XMM3);
            v130 = _XMM4;
            __asm
            {
              vminps  xmm4, xmm0, xmm2
              vmaxps  xmm0, xmm1, xmm3
            }
            _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
            _XMM3 = _mm128_sub_ps(_XMM2, _XMM4);
            bounds.halfSize.v[0] = _XMM3.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rbp+1C0h+bounds.halfSize+4], xmm3, 1
              vextractps dword ptr [rbp+1C0h+bounds.halfSize+8], xmm3, 2
            }
            bounds.midPoint.v[0] = _XMM2.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rbp+1C0h+bounds.midPoint+4], xmm2, 1
              vextractps dword ptr [rbp+1C0h+bounds.midPoint+8], xmm2, 2
            }
            v127 = _XMM6;
            v129 = _XMM5;
          }
          v33 = localClientNum;
          ++v31;
          ++v34;
        }
        while ( v31 < numPhysicsBodies );
        activeModel = v119;
      }
      v16 = localClientNum;
      p_quat = &Pose->pose.quat;
    }
    v65 = numPhysicsBodies;
    v66 = numPhysicsBodies;
    baseMat = activeModel->baseMat;
    v121 = baseMat;
    if ( numPhysicsBodies < v120 )
    {
      v143 = v9;
      v142 = v10;
      v141 = v11;
      v140 = v12;
      v139 = v13;
      v138 = v14;
      v137 = v15;
      do
      {
        v68 = &baseMat[v66];
        ++*v123;
        if ( ((LODWORD(v68->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v68->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v68->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v68->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
        if ( (LODWORD(v68->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        transWeight = v68->transWeight;
        v70 = transWeight * v68->quat.v[0];
        v71 = v68->quat.v[1];
        v72 = v68->quat.v[2];
        v73 = v70 * v68->quat.v[0];
        v74 = v71 * transWeight;
        v75 = v72 * transWeight;
        v76 = v68->quat.v[3];
        v77 = v71 * v74;
        v78 = v72 * v74;
        v79 = v76 * v74;
        in1.m[0].v[1] = (float)(v76 * v75) + (float)(v71 * v70);
        in1.m[1].v[0] = (float)(v71 * v70) - (float)(v76 * v75);
        in1.m[1].v[2] = v78 + (float)(v76 * v70);
        in1.m[2].v[1] = v78 - (float)(v76 * v70);
        v80 = v68->trans.v[0];
        in1.m[0].v[0] = 1.0 - (float)((float)(v72 * v75) + v77);
        in1.m[0].v[2] = (float)(v72 * v70) - v79;
        in1.m[1].v[1] = 1.0 - (float)((float)(v72 * v75) + v73);
        in1.m[2].v[0] = v79 + (float)(v72 * v70);
        in1.m[2].v[2] = 1.0 - (float)(v77 + v73);
        v81 = v68->trans.v[1];
        in1.m[3].v[0] = v80;
        v82 = v68->trans.v[2];
        in1.m[3].v[1] = v81;
        in1.m[3].v[2] = v82;
        QuatToAxis(p_quat, (tmat33_t<vec3_t> *)&v136);
        v83 = Pose->pose.origin.v[1];
        v136.m[3].v[0] = Pose->pose.origin.v[0];
        v136.m[3].v[2] = Pose->pose.origin.v[2];
        v136.m[3].v[1] = v83;
        MatrixMultiply43(&in1, &v136, &out);
        v84 = Pose->numParts;
        if ( v66 >= v84 )
        {
          LODWORD(v114) = v84;
          LODWORD(v113) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v113, v114) )
            __debugbreak();
        }
        if ( v66 )
        {
          posePart1FirstIndex = Pose->posePart1FirstIndex;
          if ( posePart1FirstIndex + v66 - 1 >= g_dynEntExtraPosePartsAllocCount[v16] )
          {
            LODWORD(v114) = g_dynEntExtraPosePartsAllocCount[v16];
            LODWORD(v113) = posePart1FirstIndex + v66 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v113, v114) )
              __debugbreak();
          }
          v85 = &g_dynEntPoseExtraParts[v16][v66 - 1 + Pose->posePart1FirstIndex];
        }
        else
        {
          v85 = (DynEnt_ExtraPosePart *)Pose;
        }
        if ( !v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_linking.cpp", 657, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
          __debugbreak();
        AxisToQuat((const tmat33_t<vec3_t> *)&out, &v85->posePart.quat);
        v85->posePart.origin = out.m[3];
        Bounds_Transform(&v119->boneInfo[v66].bounds, &v85->posePart.origin, (const tmat33_t<vec3_t> *)&out, &rotatedBounds);
        v130.m128_i32[3] = 0;
        v88 = v130;
        v88.m128_f32[0] = bounds.midPoint.v[0];
        _XMM6 = v88;
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+4], 1C0h+orientation
          vinsertps xmm6, xmm6, dword ptr [rbp+1C0h+bounds.midPoint+8], 1C0h+in1
        }
        v129.m128_i32[3] = 0;
        ++v66;
        v92 = v129;
        v92.m128_f32[0] = bounds.halfSize.v[0];
        _XMM3 = v92;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+4], 1C0h+orientation
          vinsertps xmm3, xmm3, dword ptr [rbp+1C0h+bounds.halfSize+8], 1C0h+in1
        }
        _mm128_sub_ps(_XMM6, _XMM3);
        v128.m128_i32[3] = 0;
        v96 = v128;
        v96.m128_f32[0] = rotatedBounds.midPoint.v[0];
        _XMM5 = v96;
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+4], 1C0h+orientation
          vinsertps xmm5, xmm5, dword ptr [rbp+1C0h+rotatedBounds.midPoint+8], 1C0h+in1
        }
        v127.m128_i32[3] = 0;
        baseMat = v121;
        v100 = v127;
        v100.m128_f32[0] = rotatedBounds.halfSize.v[0];
        _XMM4 = v100;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+4], 1C0h+orientation
          vinsertps xmm4, xmm4, dword ptr [rbp+1C0h+rotatedBounds.halfSize+8], 1C0h+in1
        }
        _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
        _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
        v129 = _XMM3;
        _mm128_add_ps(_XMM6, _XMM3);
        v127 = _XMM4;
        __asm
        {
          vminps  xmm4, xmm0, xmm2
          vmaxps  xmm0, xmm1, xmm3
        }
        _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
        _XMM3 = _mm128_sub_ps(_XMM2, _XMM4);
        bounds.halfSize.v[0] = _XMM3.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbp+1C0h+bounds.halfSize+4], xmm3, 1
          vextractps dword ptr [rbp+1C0h+bounds.halfSize+8], xmm3, 2
        }
        bounds.midPoint.v[0] = _XMM2.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbp+1C0h+bounds.midPoint+4], xmm2, 1
          vextractps dword ptr [rbp+1C0h+bounds.midPoint+8], xmm2, 2
        }
        v130 = _XMM6;
        v128 = _XMM5;
      }
      while ( v66 < v120 );
      v20 = Client;
      activeModel = v119;
      v65 = numPhysicsBodies;
    }
    if ( v20->physicsSystemId == -1 || !VecNCompareCustomEpsilon(bounds.midPoint.v, Pose->bounds.midPoint.v, 0.0099999998, 3) || v65 == 1 && !VecNCompareCustomEpsilon(Pose->posePart0.quat.v, p_quat->v, v32, 4) )
    {
      v20->flags |= 0x40u;
      Pose->pose.origin.v[0] = Pose->posePart0.origin.v[0];
      Pose->pose.origin.v[1] = Pose->posePart0.origin.v[1];
      Pose->pose.origin.v[2] = Pose->posePart0.origin.v[2];
      if ( v65 == 1 )
      {
        Pose->pose.quat.v[0] = Pose->posePart0.quat.v[0];
        Pose->pose.quat.v[1] = Pose->posePart0.quat.v[1];
        Pose->pose.quat.v[2] = Pose->posePart0.quat.v[2];
        Pose->pose.quat.v[3] = Pose->posePart0.quat.v[3];
      }
      else
      {
        v109 = bounds.halfSize.v[1] * bounds.halfSize.v[1];
        v110 = bounds.halfSize.v[2];
        v111 = bounds.halfSize.v[0] * bounds.halfSize.v[0];
        Pose->pose.quat.v[3] = 1.0;
        *(_QWORD *)Pose->pose.quat.v = 0i64;
        Pose->pose.quat.v[2] = 0.0;
        if ( fsqrt((float)(v109 + v111) + (float)(v110 * v110)) > (float)(activeModel->radius * 10.0) )
          R_WarnOncePerFrame(R_WARN_DYNENT_SEPARATION, activeModel->name);
      }
    }
    v112 = bounds.halfSize.v[2];
    *(_OWORD *)Pose->bounds.midPoint.v = *(_OWORD *)bounds.midPoint.v;
    Pose->bounds.halfSize.v[1] = bounds.halfSize.v[1];
    Pose->bounds.halfSize.v[2] = v112;
  }
  return 1;
}

