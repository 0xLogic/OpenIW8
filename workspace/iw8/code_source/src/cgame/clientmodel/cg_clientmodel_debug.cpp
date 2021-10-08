/*
==============
CG_ClientModel_DebugDrawString
==============
*/

void __fastcall CG_ClientModel_DebugDrawString(const ScreenPlacement *scrPlace, float x, float y, const char *string, const vec4_t *setColor)
{
  ?CG_ClientModel_DebugDrawString@@YAXPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@@Z(scrPlace, x, y, string, setColor);
}

/*
==============
CG_ClientModel_DebugDraw
==============
*/

void __fastcall CG_ClientModel_DebugDraw(const ScreenPlacement *scrPlace)
{
  ?CG_ClientModel_DebugDraw@@YAXPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
CG_ClientModel_Debug_PrintLoadingSubAssets
==============
*/

void __fastcall CG_ClientModel_Debug_PrintLoadingSubAssets(LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Debug_PrintLoadingSubAssets@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_DebugDraw
==============
*/
void CG_ClientModel_DebugDraw(const ScreenPlacement *scrPlace)
{
  const dvar_t *v2; 
  const dvar_t *v6; 
  const dvar_t *v10; 
  const dvar_t *v12; 
  signed int integer; 
  const dvar_t *v14; 
  float y; 
  float x; 

  v2 = DVARINT_cg_ClientModel_Debug_DisplayOffsetX;
  if ( !DVARINT_cg_ClientModel_Debug_DisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_DisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v6 = DVARINT_cg_ClientModel_Debug_DisplayOffsetY;
  __asm
  {
    vaddss  xmm0, xmm0, cs:__real@41000000
    vmovss  [rsp+58h+x], xmm0
  }
  if ( !DVARINT_cg_ClientModel_Debug_DisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_DisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v10 = DVARBOOL_cg_ClientModel_Debug_ShowModels;
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  [rsp+58h+y], xmm1
  }
  if ( !DVARBOOL_cg_ClientModel_Debug_ShowModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_ShowModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    CG_ClientModel_Debug_ShowModels(scrPlace, &x, &y);
  v12 = DVARINT_cg_ClientModel_Debug_ShowModelDetails;
  if ( !DVARINT_cg_ClientModel_Debug_ShowModelDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_ShowModelDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  if ( integer >= 0 )
    CG_ClientModel_Debug_ShowModelDetails(scrPlace, &x, &y, integer);
  v14 = DVARBOOL_cg_ClientModel_Debug_Dump;
  if ( !DVARBOOL_cg_ClientModel_Debug_Dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_Dump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_cg_ClientModel_Debug_Dump, 0);
}

/*
==============
CG_ClientModel_DebugDrawString
==============
*/

void __fastcall CG_ClientModel_DebugDrawString(const ScreenPlacement *scrPlace, double x, double y, const char *string)
{
  const dvar_t *v12; 
  const dvar_t *v13; 
  char v17; 
  char v18; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm7, cs:__real@41000000
    vmovaps xmm6, xmm1
    vcomiss xmm2, cs:__real@44870000
  }
  v12 = DVARBOOL_cg_ClientModel_Debug_Dump;
  if ( !DVARBOOL_cg_ClientModel_Debug_Dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_Dump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v13 = DVARINT_cg_ClientModel_Debug_DisplayOffsetX;
    if ( !DVARINT_cg_ClientModel_Debug_DisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_DisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vaddss  xmm7, xmm0, xmm7
      vcomiss xmm6, xmm7
    }
    if ( !(v17 | v18) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm8
        vmovss  xmm8, cs:__real@c1400000
      }
      do
      {
        Com_Printf(14, " ");
        __asm
        {
          vaddss  xmm6, xmm6, xmm8
          vcomiss xmm6, xmm7
        }
      }
      while ( !(v17 | v18) );
      __asm { vmovaps xmm8, [rsp+88h+var_38] }
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
CG_ClientModel_Debug_PrintLoadingSubAssets
==============
*/
void CG_ClientModel_Debug_PrintLoadingSubAssets(LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  unsigned int Count; 
  const XModel *Model; 

  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 276, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 277, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = 0;
  Count = CG_ClientModel_GetCount(localClientNum);
  if ( Count )
  {
    do
    {
      if ( !CG_ClientModel_AreSubAssetsLoading(localClientNum, v2) )
        break;
      Model = CG_ClientModel_GetModel(localClientNum, v2, 0);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 290, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      Com_Printf(14, " Client Model %i loading model %s\n", v2++, Model->name);
    }
    while ( v2 < Count );
  }
}

/*
==============
CG_ClientModel_Debug_ShowModelDetails
==============
*/
void CG_ClientModel_Debug_ShowModelDetails(const ScreenPlacement *scrPlace, float *x, float *y, unsigned int clientModelIdx)
{
  unsigned int Count; 
  unsigned int v12; 
  const char *v13; 
  const XModel *Model; 
  scr_string_t Name; 
  const cpose_t *Pose; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v33; 
  const vec4_t *v34; 
  unsigned int v35; 
  const char *v41; 
  const char *v61; 
  const char *v65; 
  const char *v66; 
  const char *v67; 
  const char **p_name; 
  const char *v78; 
  const char *v79; 
  scr_string_t numClothAssets; 
  const char *v84; 
  __int64 v90; 
  const char **v91; 
  const char *v92; 
  vec4_t *setColor; 
  __int64 duration; 
  __int64 v104; 
  scr_string_t AnimationTreeName; 
  scr_string_t v106; 
  const cpose_t *v107; 
  unsigned int *instanceIds[2]; 
  vec3_t outOrigin; 
  char v111; 
  void *retaddr; 
  unsigned int instanceCount; 

  _RAX = &retaddr;
  instanceIds[1] = (unsigned int *)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBX = y;
  _R14 = x;
  Count = CG_ClientModel_GetCount(LOCAL_CLIENT_0);
  v12 = Count;
  if ( clientModelIdx < Count )
  {
    Model = CG_ClientModel_GetModel(LOCAL_CLIENT_0, clientModelIdx, 0);
    Name = CG_ClientModel_GetName(LOCAL_CLIENT_0, clientModelIdx);
    AnimationTreeName = CG_ClientModel_GetAnimationTreeName(LOCAL_CLIENT_0, clientModelIdx);
    instanceIds[0] = (unsigned int *)CG_ClientModel_GetAnimation(LOCAL_CLIENT_0, clientModelIdx);
    Pose = CG_ClientModel_GetPose(LOCAL_CLIENT_0, clientModelIdx);
    v107 = Pose;
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 154, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    LOBYTE(instanceCount) = CG_ClientModel_IsLoaded(LOCAL_CLIENT_0, clientModelIdx);
    CG_GetPoseOrigin(Pose, &outOrigin);
    if ( Name )
    {
      if ( Model )
        v21 = Model->name;
      else
        v21 = "Unknown";
      v22 = SL_ConvertToString(Name);
      v23 = j_va("ClientModel %i/%i - '%s' using %s", clientModelIdx, v12, v22, v21);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v23, &colorWhite);
      v26 = "UNKNOWN";
      if ( Model )
        v26 = Model->name;
      v27 = SL_ConvertToString(Name);
      v28 = j_va("%i(%i) - '%s' using %s", clientModelIdx, clientModelIdx + 2117, v27, v26);
    }
    else
    {
      if ( Model )
        v29 = Model->name;
      else
        v29 = "Unknown";
      v30 = j_va("ClientModel %i/%i - using %s", clientModelIdx, v12, v29);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v30, &colorWhite);
      v33 = "UNKNOWN";
      if ( Model )
        v33 = Model->name;
      v28 = j_va("%i(%i) - using %s", clientModelIdx, clientModelIdx + 2117, v33);
    }
    v34 = &colorRed;
    if ( (_BYTE)instanceCount )
      v34 = &colorWhite;
    v35 = 0;
    __asm { vmovss  xmm2, cs:__real@3f800000; scale }
    CL_AddDebugString(&outOrigin, v34, *(float *)&_XMM2, v28, 0, 0);
    __asm
    {
      vmovss  xmm6, cs:__real@41000000
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm7, cs:__real@41400000
      vaddss  xmm0, xmm7, dword ptr [r14]
      vmovss  dword ptr [r14], xmm0
    }
    v41 = j_va("Entity Num %i", clientModelIdx + 2117);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r14]; x
    }
    CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v41, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
    _RAX = v107;
    __asm
    {
      vmovss  xmm4, dword ptr [rax+50h]
      vcvtss2sd xmm4, xmm4, xmm4
      vmovss  xmm5, dword ptr [rax+4Ch]
      vcvtss2sd xmm5, xmm5, xmm5
      vmovss  xmm0, dword ptr [rax+48h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsp+0B8h+outOrigin+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+0B8h+outOrigin+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0B8h+var_88], xmm4
      vmovsd  qword ptr [rsp+0B8h+duration], xmm5
      vmovsd  [rsp+0B8h+setColor], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v61 = j_va("Origin(%.2f,%.2f,%.2f) Angles(%.2f,%.2f,%.2f)", _RDX, _R8, _R9, setColor, duration, v104);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r14]; x
    }
    CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v61, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
    if ( instanceIds[0] )
    {
      v65 = *(const char **)instanceIds[0];
      v66 = SL_ConvertToString(AnimationTreeName);
      v67 = j_va("AnimTree:%s Animation:%s", v66, v65);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v67, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    if ( CG_ClientModel_NoPhysics(LOCAL_CLIENT_0, clientModelIdx) )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Flagged to not spawn Physics", &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    if ( CG_ClientModel_NoCloth(LOCAL_CLIENT_0, clientModelIdx) )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Flagged to not spawn Cloth", &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    if ( CG_ClientModel_Physics_GetInstanceId(LOCAL_CLIENT_0, clientModelIdx) != -1 )
    {
      if ( Model && (p_name = &Model->physicsAsset->name) != NULL )
        v78 = *p_name;
      else
        v78 = "UNKNOWN";
      v79 = j_va("Physics setup using asset %s", v78);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v79, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    if ( CG_ClientModel_IsLoaded(LOCAL_CLIENT_0, clientModelIdx) )
    {
      instanceCount = 0;
      instanceIds[0] = NULL;
      CG_ClientModel_Cloth_GetInstanceIds(LOCAL_CLIENT_0, clientModelIdx, &instanceCount, instanceIds);
      if ( instanceCount )
      {
        numClothAssets = Model->numClothAssets;
        v106 = numClothAssets;
        if ( instanceCount != numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 220, ASSERT_TYPE_ASSERT, "(clothInstanceCount == numClothAssets)", (const char *)&queryFormat, "clothInstanceCount == numClothAssets") )
          __debugbreak();
        v84 = j_va("Cloth setup using %i assets", (unsigned int)numClothAssets);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
        }
        CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v84, &colorWhite);
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm1
          vmovss  xmm2, dword ptr [r14]
          vaddss  xmm0, xmm2, xmm7
          vmovss  dword ptr [r14], xmm0
        }
        if ( numClothAssets )
        {
          v90 = 0i64;
          do
          {
            v91 = &Model->clothAssets[v90]->name;
            if ( !v91 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 229, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
              __debugbreak();
            v92 = j_va("Cloth asset %i: %s", v35, *v91);
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]; y
              vmovss  xmm1, dword ptr [r14]; x
            }
            CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v92, &colorWhite);
            __asm
            {
              vaddss  xmm1, xmm6, dword ptr [rbx]
              vmovss  dword ptr [rbx], xmm1
            }
            ++v35;
            ++v90;
          }
          while ( v35 < v106 );
          __asm { vmovss  xmm0, dword ptr [r14] }
        }
        __asm
        {
          vsubss  xmm0, xmm0, xmm7
          vmovss  dword ptr [r14], xmm0
        }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [r14], xmm1
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    v13 = j_va("ClientModel %i/%i - Out of range", clientModelIdx, Count);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r14]; x
    }
    CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, cs:__real@41000000
      vmovss  dword ptr [rbx], xmm1
    }
  }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
}

/*
==============
CG_ClientModel_Debug_ShowModels
==============
*/
void CG_ClientModel_Debug_ShowModels(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int Count; 
  const char *v11; 
  unsigned int v18; 
  const XModel *Model; 
  scr_string_t Name; 
  cpose_t *Pose; 
  bool IsLoaded; 
  bool v25; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const vec4_t *setColor; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v49; 
  const char *v50; 
  const char *v53; 
  const char *v54; 
  __int64 v61; 
  vec3_t xyz; 
  void *retaddr; 
  unsigned int v68; 

  _RAX = &retaddr;
  v61 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _R12 = y;
  _R13 = x;
  Count = CG_ClientModel_GetCount(LOCAL_CLIENT_0);
  v68 = Count;
  v11 = j_va("ClientModels - %i entries found", Count);
  __asm
  {
    vmovss  xmm2, dword ptr [r12]; y
    vmovss  xmm1, dword ptr [r13+0]; x
  }
  CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v11, &colorWhite);
  __asm
  {
    vmovss  xmm9, cs:__real@41000000
    vaddss  xmm0, xmm9, dword ptr [r12]
    vmovss  dword ptr [r12], xmm0
    vmovss  xmm1, dword ptr [r13+0]
    vaddss  xmm0, xmm1, cs:__real@41c00000
    vmovss  dword ptr [r13+0], xmm0
  }
  v18 = 0;
  if ( Count )
  {
    __asm
    {
      vmovsd  xmm6, cs:__real@3f30000000000000
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      Model = CG_ClientModel_GetModel(LOCAL_CLIENT_0, v18, 0);
      Name = CG_ClientModel_GetName(LOCAL_CLIENT_0, v18);
      Pose = CG_ClientModel_GetPose(LOCAL_CLIENT_0, v18);
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 98, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose", v61) )
        __debugbreak();
      IsLoaded = CG_ClientModel_IsLoaded(LOCAL_CLIENT_0, v18);
      v25 = IsLoaded;
      if ( Model || Name || IsLoaded )
      {
        if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
        FunctionPointer_origin(&Pose->origin.origin.origin, &xyz);
        if ( Pose->isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rsp+0B8h+xyz]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm6
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+0B8h+xyz], xmm2
            vmovd   xmm0, dword ptr [rsp+0B8h+xyz+4]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm6
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+0B8h+xyz+4], xmm2
            vmovd   xmm0, dword ptr [rsp+0B8h+xyz+8]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm6
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+0B8h+xyz+8], xmm2
          }
        }
        setColor = &colorRed;
        if ( Name )
        {
          if ( v25 )
            setColor = &colorWhite;
          if ( Model )
            v40 = Model->name;
          else
            v40 = "UNKNOWN";
          v41 = SL_ConvertToString(Name);
          v42 = j_va("%i(entNum %i) - '%s' using %s", v18, v18 + 2117, v41, v40);
          __asm
          {
            vmovss  xmm2, dword ptr [r12]; y
            vmovss  xmm1, dword ptr [r13+0]; x
          }
          CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v42, setColor);
          if ( Model )
            v45 = Model->name;
          else
            v45 = "UNKNOWN";
          v46 = SL_ConvertToString(Name);
          v47 = j_va("%i(%i) - '%s' using %s", v18, v18 + 2117, v46, v45);
          __asm { vmovaps xmm2, xmm7; scale }
          CL_AddDebugString(&xyz, setColor, *(float *)&_XMM2, v47, 0, 0);
          Count = v68;
        }
        else
        {
          if ( v25 )
            setColor = &colorWhite;
          if ( Model )
            v49 = Model->name;
          else
            v49 = "UNKNOWN";
          v50 = j_va("%i(entNum %i) - using %s", v18, v18 + 2117, v49);
          __asm
          {
            vmovss  xmm2, dword ptr [r12]; y
            vmovss  xmm1, dword ptr [r13+0]; x
          }
          CG_ClientModel_DebugDrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v50, setColor);
          if ( Model )
            v53 = Model->name;
          else
            v53 = "UNKNOWN";
          v54 = j_va("%i(%i) - using %s", v18, v18 + 2117, v53);
          __asm { vmovaps xmm2, xmm7; scale }
          CL_AddDebugString(&xyz, setColor, *(float *)&_XMM2, v54, 0, 0);
        }
        __asm
        {
          vaddss  xmm1, xmm9, dword ptr [r12]
          vmovss  dword ptr [r12], xmm1
        }
        memset(&xyz, 0, sizeof(xyz));
      }
      ++v18;
    }
    while ( v18 < Count );
    __asm { vmovss  xmm0, dword ptr [r13+0] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@41c00000
    vmovss  dword ptr [r13+0], xmm1
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm9, [rsp+0B8h+var_68]
  }
}

