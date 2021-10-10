/*
==============
FX_KillEffectDef
==============
*/

void __fastcall FX_KillEffectDef(LocalClientNum_t localClientNum, const FXRegisteredDef *registeredDef)
{
  ?FX_KillEffectDef@@YAXW4LocalClientNum_t@@AEBVFXRegisteredDef@@@Z(localClientNum, registeredDef);
}

/*
==============
FX_StopBoltedEffects
==============
*/

void __fastcall FX_StopBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *defHandle, unsigned int dobjHandle, unsigned int boneIndex)
{
  ?FX_StopBoltedEffects@@YAXW4LocalClientNum_t@@PEBVFXRegisteredDef@@II@Z(localClientNum, defHandle, dobjHandle, boneIndex);
}

/*
==============
FX_GetMultipleBoneOrientations
==============
*/

void __fastcall FX_GetMultipleBoneOrientations(LocalClientNum_t localClientNum, int dobjHandle, const int boneCount, const int *boneIndices, tmat33_t<vec3_t> *outTagMatrices, vec3_t *outOrigins)
{
  ?FX_GetMultipleBoneOrientations@@YAXW4LocalClientNum_t@@HHPEBHQEAT?$tmat33_t@Tvec3_t@@@@QEATvec3_t@@@Z(localClientNum, dobjHandle, boneCount, boneIndices, outTagMatrices, outOrigins);
}

/*
==============
FX_WaitKillAllEffects
==============
*/

void __fastcall FX_WaitKillAllEffects(LocalClientNum_t localClientNum, bool immediateKill)
{
  ?FX_WaitKillAllEffects@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, immediateKill);
}

/*
==============
FX_KillBoltedEffects
==============
*/

void __fastcall FX_KillBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *defHandle, unsigned int dobjHandle, unsigned int boneIndex)
{
  ?FX_KillBoltedEffects@@YAXW4LocalClientNum_t@@PEBVFXRegisteredDef@@II@Z(localClientNum, defHandle, dobjHandle, boneIndex);
}

/*
==============
FX_IsBoneVisible
==============
*/

bool __fastcall FX_IsBoneVisible(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex)
{
  return ?FX_IsBoneVisible@@YA_NW4LocalClientNum_t@@HH@Z(localClientNum, dobjHandle, boneIndex);
}

/*
==============
FX_GetBoneOrientation
==============
*/

bool __fastcall FX_GetBoneOrientation(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, orientation_t *orient)
{
  return ?FX_GetBoneOrientation@@YA_NW4LocalClientNum_t@@HHPEAUorientation_t@@@Z(localClientNum, dobjHandle, boneIndex, orient);
}

/*
==============
FX_StopEffect
==============
*/

void __fastcall FX_StopEffect(LocalClientNum_t localClientNum, ParticleSystemHandle handle)
{
  ?FX_StopEffect@@YAXW4LocalClientNum_t@@W4ParticleSystemHandle@@@Z(localClientNum, handle);
}

/*
==============
FX_KillEffectDefNewerThan
==============
*/

void __fastcall FX_KillEffectDefNewerThan(LocalClientNum_t localClientNum, const FXRegisteredDef *registeredDef, int time)
{
  ?FX_KillEffectDefNewerThan@@YAXW4LocalClientNum_t@@AEBVFXRegisteredDef@@H@Z(localClientNum, registeredDef, time);
}

/*
==============
FX_GetDobjDebugName
==============
*/

const char *__fastcall FX_GetDobjDebugName(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, scr_string_t boneName)
{
  return ?FX_GetDobjDebugName@@YAPEBDW4LocalClientNum_t@@HHW4scr_string_t@@@Z(localClientNum, dobjHandle, boneIndex, boneName);
}

/*
==============
FX_KillEffect
==============
*/

void __fastcall FX_KillEffect(LocalClientNum_t localClientNum, ParticleSystemHandle handle)
{
  ?FX_KillEffect@@YAXW4LocalClientNum_t@@W4ParticleSystemHandle@@@Z(localClientNum, handle);
}

/*
==============
FX_GetBoneOrientation_IsDObjEntityValid
==============
*/

bool __fastcall FX_GetBoneOrientation_IsDObjEntityValid(LocalClientNum_t localClientNum, int dobjHandle)
{
  return ?FX_GetBoneOrientation_IsDObjEntityValid@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
FX_GetBoneOrientation
==============
*/
char FX_GetBoneOrientation(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, orientation_t *orient)
{
  const char *v8; 
  int v9; 
  const char *v10; 
  const DObj *ClientDObj; 
  const DObj *v12; 
  const cpose_t *Pose; 

  if ( (unsigned int)dobjHandle >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, 2533) )
    __debugbreak();
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 222, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DETONATING) || (unsigned int)dobjHandle >= 0x7FE || (CG_GetEntity(localClientNum, dobjHandle)->flags & 1) != 0 && CG_Entity_CanUseDObj(localClientNum, dobjHandle) )
  {
    if ( boneIndex < 0 )
    {
      CG_Utils_GetDObjOrientation(localClientNum, dobjHandle, &orient->axis, &orient->origin);
      if ( ((LODWORD(orient->axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 232, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] )") )
        __debugbreak();
      if ( ((LODWORD(orient->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 233, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] )") )
        __debugbreak();
      if ( ((LODWORD(orient->axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 234, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] )") )
        __debugbreak();
      if ( (LODWORD(orient->origin.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(orient->origin.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(orient->origin.v[2]) & 0x7F800000) != 2139095040 )
        return 1;
      v8 = "!IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] )";
      v9 = 235;
      v10 = "( !IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] ) )";
LABEL_55:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", v9, ASSERT_TYPE_SANITY, v10, (const char *)&queryFormat, v8) )
        __debugbreak();
      return 1;
    }
    if ( !Mayhem_IsMayhem(dobjHandle) || !Mayhem_IsHidden(localClientNum, dobjHandle) )
    {
      ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
      v12 = ClientDObj;
      if ( ClientDObj )
      {
        if ( DObjIsValidBoneIndex(ClientDObj, boneIndex) )
        {
          Pose = CG_GetPose(localClientNum, dobjHandle);
          if ( CG_DObjGetWorldBoneMatrix(Pose, v12, boneIndex, &orient->axis, &orient->origin) )
          {
            if ( ((LODWORD(orient->origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->origin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 270, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] )") )
              __debugbreak();
            if ( ((LODWORD(orient->axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 271, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] )") )
              __debugbreak();
            if ( ((LODWORD(orient->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 272, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] )") )
              __debugbreak();
            if ( (LODWORD(orient->axis.m[2].v[0]) & 0x7F800000) != 2139095040 && (LODWORD(orient->axis.m[2].v[1]) & 0x7F800000) != 2139095040 && (LODWORD(orient->axis.m[2].v[2]) & 0x7F800000) != 2139095040 )
              return 1;
            v8 = "!IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] )";
            v9 = 273;
            v10 = "( !IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] ) )";
            goto LABEL_55;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
FX_GetBoneOrientation_IsDObjEntityValid
==============
*/
bool FX_GetBoneOrientation_IsDObjEntityValid(LocalClientNum_t localClientNum, int dobjHandle)
{
  return Com_GameMode_SupportsFeature(WEAPON_DETONATING) || (unsigned int)dobjHandle >= 0x7FE || (CG_GetEntity(localClientNum, dobjHandle)->flags & 1) != 0 && CG_Entity_CanUseDObj(localClientNum, dobjHandle);
}

/*
==============
FX_GetDobjDebugName
==============
*/
char *FX_GetDobjDebugName(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, scr_string_t boneName)
{
  const char *v8; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  DObj *ClientDObj; 
  const char *v14; 
  const char *v15; 

  if ( Com_GameMode_SupportsFeature(WEAPON_DETONATING) || (unsigned int)dobjHandle >= 0x7FE || (CG_GetEntity(localClientNum, dobjHandle)->flags & 1) != 0 && CG_Entity_CanUseDObj(localClientNum, dobjHandle) )
  {
    if ( boneIndex >= 0 )
    {
      if ( Mayhem_IsMayhem(dobjHandle) )
      {
        v11 = SL_ConvertToString(boneName);
        v12 = Mayhem_DebugName(localClientNum, dobjHandle);
        return j_va("mayhem %s, dobjHandle %d, boneIndex %d, boneName %s", v12, (unsigned int)dobjHandle, (unsigned int)boneIndex, v11);
      }
      else
      {
        ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
        v14 = SL_ConvertToString(boneName);
        if ( ClientDObj )
        {
          if ( ClientDObj->numModels )
            v15 = **(const char ***)ClientDObj->models;
          else
            v15 = "numModels=0";
          return j_va("model0 %s, dobjHandle %d, boneIndex %d, boneName %s", v15, (unsigned int)dobjHandle, (unsigned int)boneIndex, v14);
        }
        else
        {
          return j_va("client dobj invalid: dobjHandle %d, boneIndex %d, boneName %s", (unsigned int)dobjHandle, (unsigned int)boneIndex, v14);
        }
      }
    }
    else
    {
      v10 = SL_ConvertToString(boneName);
      return j_va("dobjHandle %d, boneIndex %d, boneName %s", (unsigned int)dobjHandle, (unsigned int)boneIndex, v10);
    }
  }
  else
  {
    v8 = SL_ConvertToString(boneName);
    return j_va("dobj entity invalid: dobjHandle %d, boneIndex %d, boneName %s", (unsigned int)dobjHandle, (unsigned int)boneIndex, v8);
  }
}

/*
==============
FX_GetMultipleBoneOrientations
==============
*/
void FX_GetMultipleBoneOrientations(LocalClientNum_t localClientNum, int dobjHandle, const int boneCount, const int *boneIndices, tmat33_t<vec3_t> *outTagMatrices, vec3_t *outOrigins)
{
  __int64 v6; 
  vec3_t *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 i; 
  const DObj *ClientDObj; 
  const cpose_t *Pose; 
  float *v16; 
  _DWORD *v17; 

  v6 = boneCount;
  if ( (unsigned int)dobjHandle >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, 2533) )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 155, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 156, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outTagMatrices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 157, ASSERT_TYPE_ASSERT, "(outTagMatrices)", (const char *)&queryFormat, "outTagMatrices") )
    __debugbreak();
  v10 = outOrigins;
  if ( !outOrigins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 158, ASSERT_TYPE_ASSERT, "(outOrigins)", (const char *)&queryFormat, "outOrigins") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DETONATING) && (unsigned int)dobjHandle < 0x7FE && ((CG_GetEntity(localClientNum, dobjHandle)->flags & 1) == 0 || !CG_Entity_CanUseDObj(localClientNum, dobjHandle)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 160, ASSERT_TYPE_ASSERT, "(FX_GetBoneOrientation_IsDObjEntityValid( localClientNum, dobjHandle ))", (const char *)&queryFormat, "FX_GetBoneOrientation_IsDObjEntityValid( localClientNum, dobjHandle )") )
    __debugbreak();
  v11 = 0i64;
  v12 = v6;
  if ( (int)v6 > 0 )
  {
    for ( i = 0i64; i < v6; ++i )
    {
      if ( boneIndices[i] < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 165, ASSERT_TYPE_ASSERT, "(boneIndices[i] >= 0)", (const char *)&queryFormat, "boneIndices[i] >= 0") )
        __debugbreak();
    }
    LODWORD(v6) = boneCount;
    v10 = outOrigins;
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 172, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( v12 > 0 )
  {
    do
    {
      if ( !DObjIsValidBoneIndex(ClientDObj, boneIndices[v11]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 177, ASSERT_TYPE_ASSERT, "(DObjIsValidBoneIndex( obj, boneIndices[i] ))", (const char *)&queryFormat, "DObjIsValidBoneIndex( obj, boneIndices[i] )") )
        __debugbreak();
      ++v11;
    }
    while ( v11 < v12 );
    LODWORD(v6) = boneCount;
    v10 = outOrigins;
  }
  Pose = CG_GetPose(localClientNum, dobjHandle);
  CG_DObjGetWorldBoneMatrices(Pose, ClientDObj, v6, boneIndices, outTagMatrices, v10);
  if ( v12 > 0 )
  {
    v16 = &outTagMatrices->m[0].v[2];
    v17 = (_DWORD *)&v10->v[2];
    do
    {
      if ( ((*(v17 - 2) & 0x7F800000) == 2139095040 || (*(v17 - 1) & 0x7F800000) == 2139095040 || (*v17 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 187, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outOrigins[i] )[0] ) && !IS_NAN( ( outOrigins[i] )[1] ) && !IS_NAN( ( outOrigins[i] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outOrigins[i] )[0] ) && !IS_NAN( ( outOrigins[i] )[1] ) && !IS_NAN( ( outOrigins[i] )[2] )") )
        __debugbreak();
      if ( ((*(_DWORD *)(v16 - 2) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v16 - 1) & 0x7F800000) == 2139095040 || (*(_DWORD *)v16 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outTagMatrices[i][0] )[0] ) && !IS_NAN( ( outTagMatrices[i][0] )[1] ) && !IS_NAN( ( outTagMatrices[i][0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outTagMatrices[i][0] )[0] ) && !IS_NAN( ( outTagMatrices[i][0] )[1] ) && !IS_NAN( ( outTagMatrices[i][0] )[2] )") )
        __debugbreak();
      if ( (((_DWORD)v16[1] & 0x7F800000) == 2139095040 || ((_DWORD)v16[2] & 0x7F800000) == 2139095040 || ((_DWORD)v16[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 189, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outTagMatrices[i][1] )[0] ) && !IS_NAN( ( outTagMatrices[i][1] )[1] ) && !IS_NAN( ( outTagMatrices[i][1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outTagMatrices[i][1] )[0] ) && !IS_NAN( ( outTagMatrices[i][1] )[1] ) && !IS_NAN( ( outTagMatrices[i][1] )[2] )") )
        __debugbreak();
      if ( (((_DWORD)v16[4] & 0x7F800000) == 2139095040 || ((_DWORD)v16[5] & 0x7F800000) == 2139095040 || ((_DWORD)v16[6] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 190, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outTagMatrices[i][2] )[0] ) && !IS_NAN( ( outTagMatrices[i][2] )[1] ) && !IS_NAN( ( outTagMatrices[i][2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outTagMatrices[i][2] )[0] ) && !IS_NAN( ( outTagMatrices[i][2] )[1] ) && !IS_NAN( ( outTagMatrices[i][2] )[2] )") )
        __debugbreak();
      v17 += 3;
      v16 += 9;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
FX_IsBoneVisible
==============
*/
bool FX_IsBoneVisible(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex)
{
  const DObj *ClientDObj; 
  const DObj *v7; 

  if ( (unsigned int)dobjHandle >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, 2533) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DETONATING) && (unsigned int)dobjHandle < 0x7FE && ((CG_GetEntity(localClientNum, dobjHandle)->flags & 1) == 0 || !CG_Entity_CanUseDObj(localClientNum, dobjHandle)) )
    return 0;
  if ( boneIndex < 0 )
    return 0;
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  v7 = ClientDObj;
  if ( !ClientDObj || !DObjIsValidBoneIndex(ClientDObj, boneIndex) )
    return 0;
  if ( (boneIndex & 0x8000) != 0 )
    return (v7->hidePartBits.array[7] & 2) == 0;
  return !bitarray_base<bitarray<256>>::testBit(&v7->hidePartBits, boneIndex);
}

/*
==============
FX_KillBoltedEffects
==============
*/
void FX_KillBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *defHandle, unsigned int dobjHandle, unsigned int boneIndex)
{
  __int64 v4; 
  int v9; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  ParticleManager::KillBoltedSystem(&g_particleManager[v4], defHandle->m_particleSystemDef, dobjHandle, boneIndex);
}

/*
==============
FX_KillEffect
==============
*/
void FX_KillEffect(LocalClientNum_t localClientNum, ParticleSystemHandle handle)
{
  __int64 v2; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  ParticleManager::KillSystem(&g_particleManager[v2], handle);
}

/*
==============
FX_KillEffectDef
==============
*/
void FX_KillEffectDef(LocalClientNum_t localClientNum, const FXRegisteredDef *registeredDef)
{
  FxSystem *System; 
  ParticleManager *ParticleManager; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 108, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( (System->systemFlags & 0x10) != 0 )
  {
    if ( registeredDef->m_particleSystemDef )
    {
      ParticleManager = ParticleManager::GetParticleManager(localClientNum);
      ParticleManager::KillSystemDefNewerThan(ParticleManager, registeredDef->m_particleSystemDef, -1);
    }
  }
}

/*
==============
FX_KillEffectDefNewerThan
==============
*/
void FX_KillEffectDefNewerThan(LocalClientNum_t localClientNum, const FXRegisteredDef *registeredDef, int time)
{
  FxSystem *System; 
  ParticleManager *ParticleManager; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 108, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( (System->systemFlags & 0x10) != 0 )
  {
    if ( registeredDef->m_particleSystemDef )
    {
      ParticleManager = ParticleManager::GetParticleManager(localClientNum);
      ParticleManager::KillSystemDefNewerThan(ParticleManager, registeredDef->m_particleSystemDef, time);
    }
  }
}

/*
==============
FX_StopBoltedEffects
==============
*/
void FX_StopBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *defHandle, unsigned int dobjHandle, unsigned int boneIndex)
{
  __int64 v4; 
  int v9; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  ParticleManager::StopBoltedSystem(&g_particleManager[v4], defHandle->m_particleSystemDef, dobjHandle, boneIndex);
}

/*
==============
FX_StopEffect
==============
*/
void FX_StopEffect(LocalClientNum_t localClientNum, ParticleSystemHandle handle)
{
  __int64 v2; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  ParticleManager::StopSystem(&g_particleManager[v2], handle);
}

/*
==============
FX_WaitKillAllEffects
==============
*/
void FX_WaitKillAllEffects(LocalClientNum_t localClientNum, bool immediateKill)
{
  __int64 v2; 
  bool v3; 
  FxSystem *v4; 
  FxSystemCommand *command; 
  int v6; 
  ClientFxEntity *v7; 
  bool v8; 
  int v9; 
  CgEntitySystem **v10; 
  __int64 v11; 
  CgEntitySystem *v12; 
  __int64 v13; 
  __int64 v14; 
  FxSystem *System; 

  v2 = localClientNum;
  v3 = immediateKill;
  System = FX_GetSystem(localClientNum);
  v4 = System;
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 52, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( (System->systemFlags & 0x10) != 0 )
  {
    command = System->command;
    if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api.cpp", 58, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
      __debugbreak();
    FX_WaitEnterWriteSystemLock(System->lock);
    if ( Com_GameMode_SupportsFeature(WEAPON_DETONATING) )
    {
      v6 = 0;
      v7 = cg_fxEntitiesArray;
      v8 = 1;
      do
      {
        if ( !v8 )
        {
          LODWORD(v14) = 1280;
          LODWORD(v13) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        CG_FXEntitiesShutdownEnt(v7);
        ++v6;
        ++v7;
        v8 = (unsigned int)v6 < 0x500;
      }
      while ( v6 < 1280 );
    }
    else
    {
      v9 = 0;
      v10 = &CgEntitySystem::ms_entitySystemArray[v2];
      v11 = 0i64;
      do
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v14) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v13) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( !*v10 )
        {
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v14) )
            __debugbreak();
        }
        v12 = *v10;
        if ( (unsigned int)v9 >= 0x800 )
        {
          LODWORD(v14) = 2048;
          LODWORD(v13) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( (unsigned __int16)(v12->m_entities[v11].nextState.eType - 8) <= 1u )
          v12->m_entities[v11].pose.player.control = NULL;
        ++v9;
        ++v11;
      }
      while ( v9 < 2048 );
      v4 = System;
      v3 = immediateKill;
    }
    FXW_SystemFlush(v4, (const LocalClientNum_t)v2);
    *(_QWORD *)&command->numUpdatePass0 = 0i64;
    FX_ExitWriteSystemLock(v4->lock);
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v14) = 2;
      LODWORD(v13) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    ParticleManager::RemoveAllSystems(&g_particleManager[v2], v3);
  }
}

