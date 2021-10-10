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
  const dvar_t *v1; 
  float integer; 
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  signed int v8; 
  const dvar_t *v9; 
  float y; 
  float x; 

  v1 = DVARINT_cg_ClientModel_Debug_DisplayOffsetX;
  if ( !DVARINT_cg_ClientModel_Debug_DisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_DisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = (float)v1->current.integer;
  v4 = DVARINT_cg_ClientModel_Debug_DisplayOffsetY;
  x = integer + 8.0;
  if ( !DVARINT_cg_ClientModel_Debug_DisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_DisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = (float)v4->current.integer;
  v6 = DVARBOOL_cg_ClientModel_Debug_ShowModels;
  y = v5 + 8.0;
  if ( !DVARBOOL_cg_ClientModel_Debug_ShowModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_ShowModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    CG_ClientModel_Debug_ShowModels(scrPlace, &x, &y);
  v7 = DVARINT_cg_ClientModel_Debug_ShowModelDetails;
  if ( !DVARINT_cg_ClientModel_Debug_ShowModelDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_ShowModelDetails") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  if ( v8 >= 0 )
    CG_ClientModel_Debug_ShowModelDetails(scrPlace, &x, &y, v8);
  v9 = DVARBOOL_cg_ClientModel_Debug_Dump;
  if ( !DVARBOOL_cg_ClientModel_Debug_Dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_Dump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_cg_ClientModel_Debug_Dump, 0);
}

/*
==============
CG_ClientModel_DebugDrawString
==============
*/

void __fastcall CG_ClientModel_DebugDrawString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor)
{
  __int128 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 v10; 

  v6 = *(_OWORD *)&x;
  if ( y > 0.0 && y < 1080.0 )
    CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, 0, 1, 8.0, 0);
  v7 = DVARBOOL_cg_ClientModel_Debug_Dump;
  if ( !DVARBOOL_cg_ClientModel_Debug_Dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_Dump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = DVARINT_cg_ClientModel_Debug_DisplayOffsetX;
    if ( !DVARINT_cg_ClientModel_Debug_DisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_ClientModel_Debug_DisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = (float)v8->current.integer + 8.0;
    if ( *(float *)&x > v9 )
    {
      do
      {
        Com_Printf(14, " ");
        v10 = v6;
        *(float *)&v10 = *(float *)&v6 + -12.0;
        v6 = v10;
      }
      while ( *(float *)&v10 > v9 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
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
  unsigned int v9; 
  const char *v10; 
  const XModel *Model; 
  scr_string_t Name; 
  const cpose_t *Pose; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const vec4_t *v23; 
  unsigned int v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char **p_name; 
  const char *v31; 
  const char *v32; 
  scr_string_t numClothAssets; 
  const char *v34; 
  float v35; 
  __int64 v36; 
  const char **v37; 
  const char *v38; 
  scr_string_t AnimationTreeName; 
  scr_string_t v40; 
  float *p_eType; 
  unsigned int *instanceIds[2]; 
  vec3_t outOrigin; 
  unsigned int instanceCount; 

  instanceIds[1] = (unsigned int *)-2i64;
  Count = CG_ClientModel_GetCount(LOCAL_CLIENT_0);
  v9 = Count;
  if ( clientModelIdx < Count )
  {
    Model = CG_ClientModel_GetModel(LOCAL_CLIENT_0, clientModelIdx, 0);
    Name = CG_ClientModel_GetName(LOCAL_CLIENT_0, clientModelIdx);
    AnimationTreeName = CG_ClientModel_GetAnimationTreeName(LOCAL_CLIENT_0, clientModelIdx);
    instanceIds[0] = (unsigned int *)CG_ClientModel_GetAnimation(LOCAL_CLIENT_0, clientModelIdx);
    Pose = CG_ClientModel_GetPose(LOCAL_CLIENT_0, clientModelIdx);
    p_eType = (float *)&Pose->eType;
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 154, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    LOBYTE(instanceCount) = CG_ClientModel_IsLoaded(LOCAL_CLIENT_0, clientModelIdx);
    CG_GetPoseOrigin(Pose, &outOrigin);
    if ( Name )
    {
      if ( Model )
        v14 = Model->name;
      else
        v14 = "Unknown";
      v15 = SL_ConvertToString(Name);
      v16 = j_va("ClientModel %i/%i - '%s' using %s", clientModelIdx, v9, v15, v14);
      CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v16, &colorWhite);
      v17 = "UNKNOWN";
      if ( Model )
        v17 = Model->name;
      v18 = SL_ConvertToString(Name);
      v19 = j_va("%i(%i) - '%s' using %s", clientModelIdx, clientModelIdx + 2117, v18, v17);
    }
    else
    {
      if ( Model )
        v20 = Model->name;
      else
        v20 = "Unknown";
      v21 = j_va("ClientModel %i/%i - using %s", clientModelIdx, v9, v20);
      CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v21, &colorWhite);
      v22 = "UNKNOWN";
      if ( Model )
        v22 = Model->name;
      v19 = j_va("%i(%i) - using %s", clientModelIdx, clientModelIdx + 2117, v22);
    }
    v23 = &colorRed;
    if ( (_BYTE)instanceCount )
      v23 = &colorWhite;
    v24 = 0;
    CL_AddDebugString(&outOrigin, v23, 1.0, v19, 0, 0);
    *y = *y + 8.0;
    *x = *x + 12.0;
    v25 = j_va("Entity Num %i", clientModelIdx + 2117);
    CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v25, &colorWhite);
    *y = *y + 8.0;
    v26 = j_va("Origin(%.2f,%.2f,%.2f) Angles(%.2f,%.2f,%.2f)", outOrigin.v[0], outOrigin.v[1], outOrigin.v[2], p_eType[18], p_eType[19], p_eType[20]);
    CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v26, &colorWhite);
    *y = *y + 8.0;
    if ( instanceIds[0] )
    {
      v27 = *(const char **)instanceIds[0];
      v28 = SL_ConvertToString(AnimationTreeName);
      v29 = j_va("AnimTree:%s Animation:%s", v28, v27);
      CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v29, &colorWhite);
      *y = *y + 8.0;
    }
    if ( CG_ClientModel_NoPhysics(LOCAL_CLIENT_0, clientModelIdx) )
    {
      CG_ClientModel_DebugDrawString(scrPlace, *x, *y, "Flagged to not spawn Physics", &colorWhite);
      *y = *y + 8.0;
    }
    if ( CG_ClientModel_NoCloth(LOCAL_CLIENT_0, clientModelIdx) )
    {
      CG_ClientModel_DebugDrawString(scrPlace, *x, *y, "Flagged to not spawn Cloth", &colorWhite);
      *y = *y + 8.0;
    }
    if ( CG_ClientModel_Physics_GetInstanceId(LOCAL_CLIENT_0, clientModelIdx) != -1 )
    {
      if ( Model && (p_name = &Model->physicsAsset->name) != NULL )
        v31 = *p_name;
      else
        v31 = "UNKNOWN";
      v32 = j_va("Physics setup using asset %s", v31);
      CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v32, &colorWhite);
      *y = *y + 8.0;
    }
    if ( CG_ClientModel_IsLoaded(LOCAL_CLIENT_0, clientModelIdx) )
    {
      instanceCount = 0;
      instanceIds[0] = NULL;
      CG_ClientModel_Cloth_GetInstanceIds(LOCAL_CLIENT_0, clientModelIdx, &instanceCount, instanceIds);
      if ( instanceCount )
      {
        numClothAssets = Model->numClothAssets;
        v40 = numClothAssets;
        if ( instanceCount != numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 220, ASSERT_TYPE_ASSERT, "(clothInstanceCount == numClothAssets)", (const char *)&queryFormat, "clothInstanceCount == numClothAssets") )
          __debugbreak();
        v34 = j_va("Cloth setup using %i assets", (unsigned int)numClothAssets);
        CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v34, &colorWhite);
        *y = *y + 8.0;
        v35 = *x + 12.0;
        *x = v35;
        if ( numClothAssets )
        {
          v36 = 0i64;
          do
          {
            v37 = &Model->clothAssets[v36]->name;
            if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 229, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
              __debugbreak();
            v38 = j_va("Cloth asset %i: %s", v24, *v37);
            CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v38, &colorWhite);
            *y = *y + 8.0;
            ++v24;
            ++v36;
          }
          while ( v24 < v40 );
          v35 = *x;
        }
        *x = v35 - 12.0;
      }
    }
    *x = *x - 12.0;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    v10 = j_va("ClientModel %i/%i - Out of range", clientModelIdx, Count);
    CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v10, &colorWhite);
    *y = *y + 8.0;
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
  const char *v7; 
  float v8; 
  unsigned int v9; 
  const XModel *Model; 
  scr_string_t Name; 
  cpose_t *Pose; 
  bool IsLoaded; 
  bool v14; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v19; 
  const vec4_t *setColor; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  __int64 v40; 
  vec3_t xyz; 
  unsigned int v43; 

  v40 = -2i64;
  Count = CG_ClientModel_GetCount(LOCAL_CLIENT_0);
  v43 = Count;
  v7 = j_va("ClientModels - %i entries found", Count);
  CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v7, &colorWhite);
  *y = *y + 8.0;
  v8 = *x + 24.0;
  *x = v8;
  v9 = 0;
  if ( Count )
  {
    do
    {
      Model = CG_ClientModel_GetModel(LOCAL_CLIENT_0, v9, 0);
      Name = CG_ClientModel_GetName(LOCAL_CLIENT_0, v9);
      Pose = CG_ClientModel_GetPose(LOCAL_CLIENT_0, v9);
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_debug.cpp", 98, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose", v40) )
        __debugbreak();
      IsLoaded = CG_ClientModel_IsLoaded(LOCAL_CLIENT_0, v9);
      v14 = IsLoaded;
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
          _XMM0 = LODWORD(xyz.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v19 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v19;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          xyz.v[0] = *(float *)&_XMM2;
          _XMM0 = LODWORD(xyz.v[1]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v19 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v19;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          xyz.v[1] = *(float *)&_XMM2;
          _XMM0 = LODWORD(xyz.v[2]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v19 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v19;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          xyz.v[2] = *(float *)&_XMM2;
        }
        setColor = &colorRed;
        if ( Name )
        {
          if ( v14 )
            setColor = &colorWhite;
          if ( Model )
            v30 = Model->name;
          else
            v30 = "UNKNOWN";
          v31 = SL_ConvertToString(Name);
          v32 = j_va("%i(entNum %i) - '%s' using %s", v9, v9 + 2117, v31, v30);
          CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v32, setColor);
          if ( Model )
            v33 = Model->name;
          else
            v33 = "UNKNOWN";
          v34 = SL_ConvertToString(Name);
          v35 = j_va("%i(%i) - '%s' using %s", v9, v9 + 2117, v34, v33);
          CL_AddDebugString(&xyz, setColor, 1.0, v35, 0, 0);
          Count = v43;
        }
        else
        {
          if ( v14 )
            setColor = &colorWhite;
          if ( Model )
            v36 = Model->name;
          else
            v36 = "UNKNOWN";
          v37 = j_va("%i(entNum %i) - using %s", v9, v9 + 2117, v36);
          CG_ClientModel_DebugDrawString(scrPlace, *x, *y, v37, setColor);
          if ( Model )
            v38 = Model->name;
          else
            v38 = "UNKNOWN";
          v39 = j_va("%i(%i) - using %s", v9, v9 + 2117, v38);
          CL_AddDebugString(&xyz, setColor, 1.0, v39, 0, 0);
        }
        *y = *y + 8.0;
        memset(&xyz, 0, sizeof(xyz));
      }
      ++v9;
    }
    while ( v9 < Count );
    v8 = *x;
  }
  *x = v8 - 24.0;
}

