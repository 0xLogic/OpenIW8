/*
==============
EntityNameplate::EntityNameplate
==============
*/

void __fastcall EntityNameplate::EntityNameplate(EntityNameplate *this)
{
  ??0EntityNameplate@@QEAA@XZ(this);
}

/*
==============
LUIElement_PlayerNameplates_DistanceToEntitySq
==============
*/

double __fastcall LUIElement_PlayerNameplates_DistanceToEntitySq(const vec3_t *originToUse, const centity_t *const entity)
{
  double result; 

  *(float *)&result = ?LUIElement_PlayerNameplates_DistanceToEntitySq@@YAMAEBTvec3_t@@QEBUcentity_t@@@Z(originToUse, entity);
  return result;
}

/*
==============
LUIElement_PlayerNameplates_CalcPlayerEntityPosition
==============
*/

void __fastcall LUIElement_PlayerNameplates_CalcPlayerEntityPosition(SecureVec3 *out, LocalClientNum_t localClientNum)
{
  ?LUIElement_PlayerNameplates_CalcPlayerEntityPosition@@YAXAEAUSecureVec3@@W4LocalClientNum_t@@@Z(out, localClientNum);
}

/*
==============
LUI_LuaCall_PlayerNameplatesOptions_GC
==============
*/
__int64 LUI_LuaCall_PlayerNameplatesOptions_GC(lua_State *luaVM)
{
  char *v2; 
  char *v3; 
  CgPlayerVisibilityTestRefId v4; 
  CgPlayerVisibilityTestRefId v5; 
  LocalClientNum_t v6; 
  CgPlayerVisibilityTestRefId v7; 
  CgPlayerVisibilityTestRefId v8; 
  LocalClientNum_t v9; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = (char *)j_lua_touserdata(luaVM, 1);
  v3 = v2;
  if ( !v2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "options");
  v4 = CG_PlayerVisibilityMP_DeregisterCrosshairsTest(*((const LocalClientNum_t *)v2 + 6120), *(const CgPlayerVisibilityTestRefId *)(v2 + 24484));
  v5 = (CgPlayerVisibilityTestRefId)*((_WORD *)v3 + 12243);
  v6 = *((_DWORD *)v3 + 6120);
  *((CgPlayerVisibilityTestRefId *)v3 + 12242) = v4;
  v7 = CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v6, v5);
  v8 = (CgPlayerVisibilityTestRefId)*((_WORD *)v3 + 12244);
  v9 = *((_DWORD *)v3 + 6120);
  *((CgPlayerVisibilityTestRefId *)v3 + 12243) = v7;
  *((CgPlayerVisibilityTestRefId *)v3 + 12244) = CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v9, v8);
  return 0i64;
}

/*
==============
LUIElement_PlayerNameplates_SetEnabled
==============
*/
__int64 LUIElement_PlayerNameplates_SetEnabled(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  PlayerNameplatesOptions *Data; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetEnabled( false )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) > 0;
    Data = LUIElement_PlayerNameplates_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2912, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->nameplatesEnabled = v3;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_PlayerNameplates_ShouldDisplayRank
==============
*/
__int64 LUIElement_PlayerNameplates_ShouldDisplayRank(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  PlayerNameplatesOptions *Data; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:ShouldDisplayRank( false )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) > 0;
    Data = LUIElement_PlayerNameplates_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2931, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->shouldDisplayRank = v3;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_PlayerNameplates_ShouldDisplayChevron
==============
*/
__int64 LUIElement_PlayerNameplates_ShouldDisplayChevron(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool v3; 
  PlayerNameplatesOptions *Data; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:ShouldDisplayChevron( false )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2) > 0;
    Data = LUIElement_PlayerNameplates_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2950, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->shouldDisplayChevron = v3;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_PlayerNameplates_SetGameMode
==============
*/
__int64 LUIElement_PlayerNameplates_SetGameMode(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  PlayerNameplatesOptions *Data; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetGameMode( <gamemode> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    Data = LUIElement_PlayerNameplates_GetData(v2, luaVM);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2969, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
      __debugbreak();
    Data->gameMode = v3;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
EntityNameplate::EntityNameplate
==============
*/
void EntityNameplate::EntityNameplate(EntityNameplate *this)
{
  *(_QWORD *)&this->distanceSquared = 2139095039i64;
  this->entityNum = 2047;
  this->screenPosition = 0i64;
}

/*
==============
ComputeAlphaForNameplateElement
==============
*/
float ComputeAlphaForNameplateElement(const PlayerNameplatesOptions *options, NameplateSetting nameplateSetting, const float *distanceToEntitySquared, const bool *hasMarksmanPerk, const bool *isFriendly, const float maxAlpha)
{
  float v8; 
  const dvar_t *v10; 
  __int128 v12; 

  v8 = options->nameplateSettings[nameplateSetting];
  if ( v8 < 0.0 )
    return FLOAT_1_0;
  if ( *hasMarksmanPerk && !*isFriendly )
  {
    v10 = DVARFLT_perk_marksmanNameDistanceScale;
    if ( !DVARFLT_perk_marksmanNameDistanceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_marksmanNameDistanceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v8 = v8 * v10->current.value;
  }
  v12 = LODWORD(options->nameplateSettings[37]);
  *(float *)&v12 = options->nameplateSettings[37] * options->nameplateSettings[37];
  _XMM3 = v12;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm3, xmm3, xmm6, xmm0
  }
  *(double *)&_XMM0 = I_fclamp((float)(*distanceToEntitySquared - (float)((float)(v8 * v8) - *(float *)&v12)) / *(float *)&_XMM3, 0.0, 1.0);
  return (float)(1.0 - *(float *)&_XMM0) * maxAlpha;
}

/*
==============
ComputeNameplateScaleByDistance
==============
*/
float ComputeNameplateScaleByDistance(const PlayerNameplatesOptions *options, NameplateSetting *scaleSettings, const float *distanceSquared)
{
  __int128 v4; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v8; 

  v4 = LODWORD(options->nameplateSettings[*((int *)scaleSettings + 2)]);
  v5 = options->nameplateSettings[*((int *)scaleSettings + 3)];
  v6 = options->nameplateSettings[*(int *)scaleSettings];
  v7 = options->nameplateSettings[*((int *)scaleSettings + 1)];
  if ( v5 > *(float *)&v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1616, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Max Size Distance must be <= Min Size Distance for nameplate setting in the nameplateSettings.csv, col: %d and col: %d", *((_DWORD *)scaleSettings + 3), *((_DWORD *)scaleSettings + 2)) )
    __debugbreak();
  v8 = v4;
  *(float *)&v8 = (float)(*(float *)&v4 * *(float *)&v4) - (float)(v5 * v5);
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, xmm1
    vblendvps xmm0, xmm3, xmm6, xmm0
  }
  *(double *)&_XMM0 = I_fclamp((float)(*distanceSquared - (float)(v5 * v5)) / *(float *)&_XMM0, 0.0, 1.0);
  return (float)((float)(1.0 - *(float *)&_XMM0) * v7) + (float)(*(float *)&_XMM0 * v6);
}

/*
==============
GenerateChevronVerts
==============
*/
void GenerateChevronVerts(float *outLeft, float *outRight, float *outTop, float *outBottom, const vec2_t *screenPosition, const float *perspectiveScale, const float *unitScale, const float *offsetYScalar)
{
  const dvar_t *v8; 
  float value; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 

  v8 = DCONST_DVARFLT_cg_playerNameplatesChevronWidth;
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v14 = DCONST_DVARFLT_cg_playerNameplatesChevronHeight;
  v15 = (float)((float)(value * *perspectiveScale) * *unitScale) * 0.5;
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v16 = v14->current.value * *perspectiveScale;
  v17 = DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY;
  v18 = v16 * *unitScale;
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v19 = v17->current.value;
  v20 = DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX;
  v21 = v19 * *offsetYScalar;
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  *outLeft = (float)(v20->current.value + screenPosition->v[0]) - v15;
  *outTop = (float)(v21 + screenPosition->v[1]) - v18;
  v22 = DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX;
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  *outRight = (float)(v22->current.value + screenPosition->v[0]) + v15;
  *outBottom = v21 + screenPosition->v[1];
}

/*
==============
GeneratePerkVerts
==============
*/
void GeneratePerkVerts(float *outLeft, float *outRight, float *outTop, float *outBottom, const vec2_t *screenPosition, const float *perspectiveScale, const float *unitScale)
{
  const dvar_t *v7; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 

  v7 = DCONST_DVARFLT_cg_playerNameplatesPerkWidth;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  v13 = DCONST_DVARFLT_cg_playerNameplatesPerkHeight;
  v14 = (float)((float)(value * *perspectiveScale) * *unitScale) * 0.5;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v15 = (float)(v13->current.value * *perspectiveScale) * *unitScale;
  v16 = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX;
  v17 = v15 * 0.5;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  *outLeft = (float)(v16->current.value + screenPosition->v[0]) - v14;
  v18 = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  *outTop = (float)(v18->current.value + screenPosition->v[1]) - v17;
  v19 = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  *outRight = (float)(v19->current.value + screenPosition->v[0]) + v14;
  v20 = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  *outBottom = (float)(v20->current.value + screenPosition->v[1]) + v17;
}

/*
==============
LUIElement_PlayerNameplates_CalcPlayerEntityPosition
==============
*/
void LUIElement_PlayerNameplates_CalcPlayerEntityPosition(SecureVec3 *out, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int v5; 
  __int16 remoteControlEnt; 
  centity_t *Entity; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 676, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 679, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( LocalClientGlobals->renderingThirdPerson )
    goto LABEL_13;
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v2], &LocalClientGlobals->predictedPlayerState) )
LABEL_13:
    v5 = 1;
  else
    v5 = 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu) || (remoteControlEnt = LocalClientGlobals->predictedPlayerState.remoteControlEnt, remoteControlEnt == 2047) )
  {
    if ( v5 )
    {
      CG_GetPoseOrigin(&LocalClientGlobals->predictedPlayerEntity->pose, (vec3_t *)out);
    }
    else
    {
      out->x = LocalClientGlobals->predictedPlayerState.origin.v[0];
      out->y = LocalClientGlobals->predictedPlayerState.origin.v[1];
      out->z = LocalClientGlobals->predictedPlayerState.origin.v[2];
    }
  }
  else
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v2, remoteControlEnt);
    if ( (Entity->flags & 1) == 0 )
      Entity = LocalClientGlobals->predictedPlayerEntity;
    CG_GetPoseOrigin(&Entity->pose, (vec3_t *)out);
  }
}

/*
==============
LUIElement_PlayerNameplates_CenterFadeAlpha
==============
*/
void LUIElement_PlayerNameplates_CenterFadeAlpha(const LocalClientNum_t localClientNum, const PlayerNameplatesOptions *const options, const vec2_t *position, const bool isFriendly, float *outDesiredAlpha)
{
  float v8; 
  const ScreenPlacement *ActivePlacement; 
  float v10; 
  __int128 v11; 

  if ( !options && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1955, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  v8 = options->nameplateSettings[44];
  if ( v8 > 0.0 )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v10 = (float)(0.5 * ActivePlacement->realViewportSize.v[0]) - position->v[0];
    v11 = LODWORD(FLOAT_0_5);
    *(float *)&v11 = (float)(0.5 * ActivePlacement->realViewportSize.v[1]) - position->v[1];
    *(float *)&v11 = (float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10)) / (float)(v8 * v8);
    _XMM4 = v11;
    __asm { vminss  xmm3, xmm4, xmm1 }
    *outDesiredAlpha = (float)((float)(1.0 - *(float *)&_XMM3) * options->nameplateSettings[45]) + (float)(*(float *)&_XMM3 * *outDesiredAlpha);
  }
}

/*
==============
LUIElement_PlayerNameplates_DistanceToEntitySq
==============
*/
float LUIElement_PlayerNameplates_DistanceToEntitySq(const vec3_t *originToUse, const centity_t *const entity)
{
  float result; 
  vec3_t outOrigin; 
  __int64 v5; 

  v5 = -2i64;
  CG_GetPoseOrigin(&entity->pose, &outOrigin);
  result = (float)((float)((float)(originToUse->v[1] - outOrigin.v[1]) * (float)(originToUse->v[1] - outOrigin.v[1])) + (float)((float)(originToUse->v[0] - outOrigin.v[0]) * (float)(originToUse->v[0] - outOrigin.v[0]))) + (float)((float)(originToUse->v[2] - outOrigin.v[2]) * (float)(originToUse->v[2] - outOrigin.v[2]));
  memset(&outOrigin, 0, sizeof(outOrigin));
  return result;
}

/*
==============
LUIElement_PlayerNameplates_DrawBounties
==============
*/
void LUIElement_PlayerNameplates_DrawBounties(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t *color, const int bountyCount, const vec2_t *screenPosition, const float perspectiveScale, const float unitScale, const GfxImage *bountyImage)
{
  int i; 
  const dvar_t *v14; 
  float value; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  float v26; 
  vec4_t quadVerts[4]; 

  for ( i = 0; i < bountyCount; ++i )
  {
    v14 = DCONST_DVARFLT_cg_playerNameplatesBountyWidth;
    if ( !DCONST_DVARFLT_cg_playerNameplatesBountyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    v16 = DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX;
    if ( !DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = (float)((float)i * value) + v16->current.value;
    v18 = DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY;
    if ( !DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.value;
    v20 = DCONST_DVARFLT_cg_playerNameplatesBountyHeight;
    if ( !DCONST_DVARFLT_cg_playerNameplatesBountyHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v19 + v20->current.value;
    v22 = DCONST_DVARFLT_cg_playerNameplatesBountyWidth;
    v23 = (float)((float)(v21 * perspectiveScale) * unitScale) + screenPosition->v[1];
    if ( !DCONST_DVARFLT_cg_playerNameplatesBountyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v24 = v17 + v22->current.value;
    v25 = DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY;
    v26 = (float)((float)(v24 * perspectiveScale) * unitScale) + screenPosition->v[0];
    if ( !DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    LUI_CoD_GenerateQuadVerts((float)((float)(v17 * perspectiveScale) * unitScale) + screenPosition->v[0], (float)((float)(perspectiveScale * v25->current.value) * unitScale) + screenPosition->v[1], v26, v23, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, color, bountyImage);
  }
}

/*
==============
LUIElement_PlayerNameplates_DrawPlayerDistance
==============
*/
void LUIElement_PlayerNameplates_DrawPlayerDistance(const centity_t *const cent, SecureVec3 *viewOrigin, vec2_t *screenPosition, const float *distanceScalar, const int *clientNum, GfxFont *fontToUse, const LocalClientNum_t *localClientNum, lua_State *luaVM, LUIElement *element, vec4_t *color, FontGlowStyle *glowStyle, const bool isRevive)
{
  float v16; 
  double CurrentUnitScale; 
  const dvar_t *v18; 
  float value; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  vec3_t outOrigin; 
  vec4_t quadVerts[4]; 
  char result[128]; 

  result[0] = 0;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  v16 = fsqrt((float)((float)((float)(viewOrigin->y - outOrigin.v[1]) * (float)(viewOrigin->y - outOrigin.v[1])) + (float)((float)(viewOrigin->x - outOrigin.v[0]) * (float)(viewOrigin->x - outOrigin.v[0]))) + (float)((float)(viewOrigin->z - outOrigin.v[2]) * (float)(viewOrigin->z - outOrigin.v[2]))) * 0.0254;
  result[0] = 0;
  CG_BuildCompassDistanceString(v16, result, 128);
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v18 = DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight;
  if ( !DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesReviveNameFontHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  value = v18->current.value;
  v20 = 0.0;
  v21 = 0.0;
  if ( isRevive )
  {
    v22 = DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY;
    if ( !DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesReviveNameOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v20 = v22->current.value;
    v23 = DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth;
    if ( !DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesReviveNameTextWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v21 = v23->current.value;
  }
  v24 = (float)((float)((float)((float)((float)((float)(value * 0.5) * *distanceScalar) * *(float *)&CurrentUnitScale) + (float)(v20 + screenPosition->v[1])) - (float)((float)(v20 + screenPosition->v[1]) - (float)((float)((float)(value * 0.5) * *distanceScalar) * *(float *)&CurrentUnitScale))) * 0.5) + (float)((float)(v20 + screenPosition->v[1]) - (float)((float)((float)(value * 0.5) * *distanceScalar) * *(float *)&CurrentUnitScale));
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( *clientNum < cls.maxClients || *clientNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    v26 = DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX;
    if ( !DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDistanceOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v25 = v26->current.value;
  }
  else
  {
    v25 = 0.0;
  }
  v27 = DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY;
  if ( !DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDistanceOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v28 = v25 + screenPosition->v[0];
  v29 = (float)((float)(v21 * *distanceScalar) * 0.5) * *(float *)&CurrentUnitScale;
  v30 = v28 - v29;
  v31 = v29 + v28;
  v32 = (float)(*(float *)&CurrentUnitScale * v27->current.value) + v24;
  v33 = (float)((float)(value * 0.5) * *distanceScalar) * *(float *)&CurrentUnitScale;
  if ( SEH_GetCurrentLanguage() == 17 )
    fontToUse = UI_GetFontHandle(NULL, 9, 1.0);
  LUI_CoD_GenerateQuadVerts(v30, v32 - v33, v31, v32 + v33, (vec4_t (*)[4])quadVerts);
  LUI_Render_DrawText(*localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, color, fontToUse, result, 0, 0, 0.0, (int)(float)(value * *(float *)&CurrentUnitScale), NULL, glowStyle);
}

/*
==============
LUIElement_PlayerNameplates_DrawPlayerName
==============
*/
void LUIElement_PlayerNameplates_DrawPlayerName(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, lua_State *luaVM, const vec4_t *color, GfxFont *const LUI_PLAYER_NAMEPLATES_FONT, const int clientNum, const vec2_t *screenPosition, float perspectiveScale, FontGlowStyle *glowStyle, const bool isReviveName, const int alignX, const int alignY)
{
  double CurrentUnitScale; 
  float v17; 
  int CharacterMaxCount; 
  char v19; 
  centity_t *Entity; 
  float v21; 
  double v22; 
  double v23; 
  float v24; 
  double v25; 
  const dvar_t *v26; 
  const char *v27; 
  double Float_Internal_DebugName; 
  double v29; 
  float v30; 
  double v31; 
  int v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  char playerNumberBuffer[8]; 
  FontGlowStyle *fontGlowStyle; 
  vec4_t quadVerts[4]; 
  char clanTagBuf[16]; 
  char nameBuf[40]; 
  char dest[56]; 

  fontGlowStyle = glowStyle;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v17 = *(float *)&CurrentUnitScale;
  nameBuf[0] = 0;
  clanTagBuf[0] = 0;
  playerNumberBuffer[0] = 0;
  dest[0] = 0;
  CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
  if ( clientNum < cls.maxClients || clientNum >= CharacterMaxCount )
  {
    v19 = 0;
    if ( CL_GetClientNameAndClanTag(localClientNum, clientNum, nameBuf, 0x24ui64, clanTagBuf, 0xCui64) )
    {
      LUIElement_PlayerNameplates_GetPlayerNumber(localClientNum, clientNum, playerNumberBuffer, 4ui64);
      Com_sprintf(dest, 0x34ui64, "%s%s%s", playerNumberBuffer, clanTagBuf, nameBuf);
    }
    else
    {
      Com_sprintf(dest, 0x34ui64, "?");
    }
  }
  else
  {
    v19 = 1;
    Entity = CG_GetEntity(localClientNum, clientNum);
    if ( CL_GetAgentName(localClientNum, clientNum, Entity->nextState.otherEntityNum, nameBuf, 0x24ui64) )
      Com_sprintf(dest, 0x34ui64, (const char *)&queryFormat, nameBuf);
    else
      Com_sprintf(dest, 0x34ui64, "?");
  }
  if ( isReviveName )
  {
    if ( v19 )
    {
      v21 = 0.0;
    }
    else
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetX, "cg_playerNameplatesReviveNameOffsetX");
      v21 = *(float *)&Float_Internal_DebugName;
    }
    v29 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY, "cg_playerNameplatesReviveNameOffsetY");
    v24 = *(float *)&v29;
    v25 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight, "cg_playerNameplatesReviveNameFontHeight");
    v26 = DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth;
    v27 = "cg_playerNameplatesReviveNameTextWidth";
  }
  else
  {
    if ( v19 )
    {
      v21 = 0.0;
    }
    else
    {
      v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetX, "cg_playerNameplatesNameOffsetX");
      v21 = *(float *)&v22;
    }
    v23 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetY, "cg_playerNameplatesNameOffsetY");
    v24 = *(float *)&v23;
    v25 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameFontHeight, "cg_playerNameplatesNameFontHeight");
    v26 = DCONST_DVARFLT_cg_playerNameplatesNameTextWidth;
    v27 = "cg_playerNameplatesNameTextWidth";
  }
  v30 = *(float *)&v25;
  v31 = Dvar_GetFloat_Internal_DebugName(v26, v27);
  v32 = R_TextWidth(dest, 52, LUI_PLAYER_NAMEPLATES_FONT, (int)v30);
  v33 = screenPosition->v[0];
  v35 = (float)v32;
  v34 = v35;
  if ( alignX == 1 )
  {
    v36 = v33 - (float)(v35 * 0.5);
    v37 = (float)((float)(*(float *)&v31 * 0.5) * perspectiveScale) * v17;
    v38 = v36 - v37;
    v39 = v36 + v37;
  }
  else
  {
    v40 = (float)(*(float *)&v31 * perspectiveScale) * v17;
    if ( alignX == 2 )
    {
      v38 = v33 - (float)((float)(v34 * perspectiveScale) * v17);
      v39 = v40 + v38;
    }
    else
    {
      v38 = (float)((float)(v21 * perspectiveScale) * v17) + v33;
      v39 = (float)(v33 + v21) + v40;
    }
  }
  v41 = screenPosition->v[1];
  if ( alignY == 4 )
  {
    v42 = (float)((float)(v30 * perspectiveScale) * v17) + (float)(v41 + v24);
    v43 = (float)((float)(v24 * perspectiveScale) * v17) + v41;
  }
  else if ( alignY == 12 )
  {
    v42 = v41 - (float)((float)(v24 * perspectiveScale) * v17);
    v43 = v41 - (float)((float)(v30 * perspectiveScale) * v17);
  }
  else
  {
    v44 = (float)((float)(v30 * 0.5) * perspectiveScale) * v17;
    v45 = v41 + v24;
    v43 = v45 - v44;
    v42 = v45 + v44;
  }
  LUI_CoD_GenerateQuadVerts(v38, v43, v39, v42, (vec4_t (*)[4])quadVerts);
  LUI_Render_DrawText(localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, color, LUI_PLAYER_NAMEPLATES_FONT, dest, 0, 0, 0.0, (int)(float)(v30 * v17), NULL, fontGlowStyle);
}

/*
==============
LUIElement_PlayerNameplates_DrawRankIcon
==============
*/
void LUIElement_PlayerNameplates_DrawRankIcon(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, LUIElement *element, lua_State *luaVM, const vec4_t *color, const vec2_t *screenPosition, const float perspectiveScale)
{
  double CurrentUnitScale; 
  const GfxImage *material; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  vec4_t quadVerts[4]; 

  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  material = clientInfo->rankIconHandle;
  if ( material )
  {
    v13 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom;
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetBottom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = perspectiveScale * v13->current.value;
    v15 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight;
    v16 = (float)(v14 * *(float *)&CurrentUnitScale) + screenPosition->v[1];
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetRight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v17 = perspectiveScale * v15->current.value;
    v18 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop;
    v19 = (float)(v17 * *(float *)&CurrentUnitScale) + screenPosition->v[0];
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetTop") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v20 = perspectiveScale * v18->current.value;
    v21 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft;
    v22 = (float)(v20 * *(float *)&CurrentUnitScale) + screenPosition->v[1];
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetLeft") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    LUI_CoD_GenerateQuadVerts((float)((float)(perspectiveScale * v21->current.value) * *(float *)&CurrentUnitScale) + screenPosition->v[0], v22, v19, v16, (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, color, material);
  }
}

/*
==============
LUIElement_PlayerNameplates_EntityHasNameplate
==============
*/
char LUIElement_PlayerNameplates_EntityHasNameplate(const PlayerNameplatesOptions *const options, const cg_t *const cgameGlob, const centity_t *const cent, const bool hideNameplatesForZeroHealth)
{
  int number; 
  playerState_s *p_predictedPlayerState; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v11; 
  ClStatic *CLStatic; 
  __int64 v13; 
  double v14; 
  __int64 v16; 
  __int64 v17; 

  if ( !options && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 328, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 329, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 330, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 )
    return 0;
  number = cent->nextState.number;
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  if ( cgameGlob->predictedPlayerState.clientNum == number || cgameGlob->clientNum == number )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cgameGlob->predictedPlayerState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v16) = cgameGlob->predictedPlayerState.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "ps->clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v16, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v17) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v16) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 346, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)cgameGlob->localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  v11 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
  if ( !Com_Teams_OnSameTeam(p_predictedPlayerState, (const team_t)CharacterInfo->team, &cent->nextState, (const team_t)v11->team) )
  {
    if ( BG_HasPerk(&v11->perks, 0x2Au) )
      return 0;
    CLStatic = CL_Main_GetCLStatic();
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 329, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( CLStatic->m_activeGameHardcoreSetting )
      return 0;
  }
  if ( cent->nextState.eType != ET_PLAYER )
    return 1;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.number >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    LODWORD(v17) = ComCharacterLimits::GetClientMaxCount();
    LODWORD(v16) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 370, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "cent->nextState.number doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( cent->nextState.lerp.u.player.playerFlags < 0 )
    return 0;
  if ( hideNameplatesForZeroHealth && (v13 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, cent->nextState.number), v14 = I_fclamp((float)*(int *)(v13 + 140) * 0.0078740157, 0.0, 1.0), *(float *)&v14 <= 0.0) )
    return 0;
  else
    return 1;
}

/*
==============
LUIElement_PlayerNameplates_GetData
==============
*/
PlayerNameplatesOptions *LUIElement_PlayerNameplates_GetData(LUIElement *element, lua_State *luaVM)
{
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 292, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 293, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (PlayerNameplatesOptions *)element->customElementData;
}

/*
==============
LUIElement_PlayerNameplates_GetDistanceString
==============
*/
void LUIElement_PlayerNameplates_GetDistanceString(char *distanceString, int distanceStringBufferSize, const cpose_t *pose, SecureVec3 *viewOrigin)
{
  float v7; 
  vec3_t outOrigin; 

  CG_GetPoseOrigin(pose, &outOrigin);
  v7 = fsqrt((float)((float)((float)(viewOrigin->y - outOrigin.v[1]) * (float)(viewOrigin->y - outOrigin.v[1])) + (float)((float)(viewOrigin->x - outOrigin.v[0]) * (float)(viewOrigin->x - outOrigin.v[0]))) + (float)((float)(viewOrigin->z - outOrigin.v[2]) * (float)(viewOrigin->z - outOrigin.v[2]))) * 0.0254;
  *distanceString = 0;
  CG_BuildCompassDistanceString(v7, distanceString, distanceStringBufferSize);
}

/*
==============
LUIElement_PlayerNameplates_GetPlayerNumber
==============
*/
char LUIElement_PlayerNameplates_GetPlayerNumber(const LocalClientNum_t localClientNum, int clientNum, char *playerNumberBuffer, unsigned __int64 playerNumberBufferSize)
{
  __int64 v5; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  cg_t *v10; 
  characterInfo_t *CharacterInfo; 
  CgMLGSpectator *MLGSpectator; 
  team_t team; 
  __int64 numScores; 
  __int64 v15; 
  __int64 v16; 
  score_t *scores; 
  __int64 v19; 

  v5 = clientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v10->IsMP(v10) )
  {
    if ( (unsigned int)v5 >= v10[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v19) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v19, v10[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v10[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v5);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v10, v5);
  }
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 846, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( !CgMLGSpectator::GetPlayerNumbersEnabled(MLGSpectator) || !LocalClientGlobals || !LocalClientGlobals->m_isMLGSpectator )
    return 0;
  team = CharacterInfo->team;
  numScores = LocalClientGlobals->numScores;
  v15 = 1i64;
  if ( (team & 0xFFFFFFFD) != 0 )
    v15 = 6i64;
  if ( numScores > 0 )
  {
    v16 = 0i64;
    scores = LocalClientGlobals->scores;
    do
    {
      if ( scores->team == team )
      {
        if ( scores->client == (_DWORD)v5 )
          break;
        v15 = (unsigned int)(v15 + 1);
      }
      ++v16;
      ++scores;
    }
    while ( v16 < numScores );
  }
  if ( (_DWORD)v15 == 10 )
    v15 = 0i64;
  Com_sprintf(playerNumberBuffer, playerNumberBufferSize, "%i ", v15);
  return 1;
}

/*
==============
LUIElement_PlayerNameplates_GetScalarScreenOffsetY
==============
*/
float LUIElement_PlayerNameplates_GetScalarScreenOffsetY(const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const centity_t *const cent)
{
  __int64 v5; 
  CgGlobalsMP *LocalClientGlobals; 
  float v7; 
  float v8; 
  float v9; 
  cg_t *v10; 
  int v11; 
  __int16 remoteControlEnt; 
  centity_t *Entity; 
  double v14; 
  vec3_t origin; 
  vec3_t outOrg; 
  __int64 v18; 
  vec3_t outOrigin; 
  vec2_t v20; 
  vec2_t outScreenPos; 
  vec3_t worldPos; 

  v18 = -2i64;
  v5 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 712, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v7 = outOrigin.v[0] - outOrg.v[0];
  v8 = outOrigin.v[1] - outOrg.v[1];
  v9 = outOrigin.v[2] - outOrg.v[2];
  v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 676, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v10 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 679, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v10->renderingThirdPerson )
    goto LABEL_16;
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v5], &v10->predictedPlayerState) )
LABEL_16:
    v11 = 1;
  else
    v11 = 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu) || (remoteControlEnt = v10->predictedPlayerState.remoteControlEnt, remoteControlEnt == 2047) )
  {
    if ( !v11 )
    {
      origin = v10->predictedPlayerState.origin;
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v5, remoteControlEnt);
  if ( (Entity->flags & 1) == 0 )
  {
LABEL_22:
    CG_GetPoseOrigin(&v10->predictedPlayerEntity->pose, &origin);
    goto LABEL_24;
  }
  CG_GetPoseOrigin(&Entity->pose, &origin);
LABEL_24:
  worldPos.v[0] = (float)(v7 - (float)(outOrigin.v[0] - origin.v[0])) + outOrigin.v[0];
  worldPos.v[1] = (float)(v8 - (float)(outOrigin.v[1] - origin.v[1])) + outOrigin.v[1];
  worldPos.v[2] = (float)(v9 - (float)(outOrigin.v[2] - origin.v[2])) + outOrigin.v[2];
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v5, scrPlace, &outOrigin, &outScreenPos);
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v5, scrPlace, &worldPos, &v20);
  v14 = I_fclamp(fsqrt((float)((float)(v20.v[1] - outScreenPos.v[1]) * (float)(v20.v[1] - outScreenPos.v[1])) + (float)((float)(v20.v[0] - outScreenPos.v[0]) * (float)(v20.v[0] - outScreenPos.v[0]))) / scrPlace->realViewportSize.v[1], 0.0, 1.0);
  memset(&origin, 0, sizeof(origin));
  memset(&outOrg, 0, sizeof(outOrg));
  return *(float *)&v14;
}

/*
==============
LUIElement_PlayerNameplates_GetScreenPosition
==============
*/
void LUIElement_PlayerNameplates_GetScreenPosition(const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const PlayerEntityData *const entityData, const int entityNum, vec2_t *outScreenPosition, const bool *useFastPosition)
{
  const dvar_t *v7; 
  CgStatic *LocalClientStatics; 
  centity_t *Entity; 
  const characterInfo_t *CharacterInfo; 
  CgGlobalsMP *LocalClientGlobals; 
  float nameAlpha; 
  const CgGlobalsMP *v16; 
  float v18; 
  float v19; 
  const GfxViewInfo *ViewInfo; 
  vec3_t viewHeightPosition; 
  vec3_t outWorldPosition; 
  vec3_t v24; 
  vec3_t outOffset; 
  dvec3_t worldPos; 
  tmat33_t<vec3_t> outLocalAxis; 

  v7 = DVARBOOL_cg_playerNameplatesFastPosition;
  if ( !DVARBOOL_cg_playerNameplatesFastPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesFastPosition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && *useFastPosition )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    Entity = CG_GetEntity(localClientNum, entityNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    nameAlpha = entityData->nameAlpha;
    v16 = LocalClientGlobals;
    if ( nameAlpha < 0.0 || nameAlpha > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 764, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( entityData->nameAlpha ) && ( entityData->nameAlpha ) <= ( 1.0f )", "entityData->nameAlpha not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", nameAlpha, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    v18 = entityData->nameAlpha;
    if ( v18 == 0.0 )
    {
      LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight(CharacterInfo, entityData, v16, Entity, &viewHeightPosition);
    }
    else if ( v18 >= 1.0 )
    {
      LUI_GetEntityTagPositionAndAxis(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &outLocalAxis, &viewHeightPosition);
      LUI_ComputeWorldOffset(localClientNum, entityNum, &outLocalAxis, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, &v24);
      viewHeightPosition.v[0] = viewHeightPosition.v[0] + v24.v[0];
      viewHeightPosition.v[2] = viewHeightPosition.v[2] + v24.v[2];
      viewHeightPosition.v[1] = viewHeightPosition.v[1] + v24.v[1];
    }
    else
    {
      LUI_GetEntityTagPositionAndAxis(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &outLocalAxis, &outWorldPosition);
      LUI_ComputeWorldOffset(localClientNum, entityNum, &outLocalAxis, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, &outOffset);
      outWorldPosition.v[0] = outWorldPosition.v[0] + outOffset.v[0];
      outWorldPosition.v[2] = outWorldPosition.v[2] + outOffset.v[2];
      outWorldPosition.v[1] = outWorldPosition.v[1] + outOffset.v[1];
      LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight(CharacterInfo, entityData, v16, Entity, &v24);
      v19 = entityData->nameAlpha;
      viewHeightPosition.v[0] = (float)((float)(outWorldPosition.v[0] - v24.v[0]) * v19) + v24.v[0];
      viewHeightPosition.v[1] = (float)((float)(outWorldPosition.v[1] - v24.v[1]) * v19) + v24.v[1];
      viewHeightPosition.v[2] = (float)((float)(outWorldPosition.v[2] - v24.v[2]) * v19) + v24.v[2];
    }
  }
  else
  {
    LUI_GetEntityTagPositionAndAxis(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &outLocalAxis, &viewHeightPosition);
  }
  worldPos.x = viewHeightPosition.v[0];
  worldPos.z = viewHeightPosition.v[2];
  worldPos.y = viewHeightPosition.v[1];
  CG_WorldPosToScreenPosRealForScenePrecise(localClientNum, scrPlace, &worldPos, 0, outScreenPosition);
  ViewInfo = LUI_GetViewInfo();
  if ( ViewInfo )
    R_ScopeDistortionTransform(ViewInfo, outScreenPosition, outScreenPosition);
}

/*
==============
LUIElement_PlayerNameplates_GetViewHeightOffset
==============
*/
void LUIElement_PlayerNameplates_GetViewHeightOffset(const characterInfo_t *const ci, const PlayerEntityData *const entityData, const CgGlobalsMP *const cgameGlob, const centity_t *const cent, const float heightScalar, vec3_t *outViewHeightOffset, const bool isRoot)
{
  const SuitDef *SuitDef; 
  int v12; 
  const dvar_t *v13; 
  int integer; 
  LerpEntityState *p_lerp; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int viewheight_crouch; 
  double v20; 
  const dvar_t *v21; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 394, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 395, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 396, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  *(_QWORD *)outViewHeightOffset->v = 0i64;
  outViewHeightOffset->v[2] = 0.0;
  SuitDef = BG_GetSuitDef(ci->suitIndex);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 4u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
    entityData->startStandTime = cgameGlob->time;
  v12 = cgameGlob->time - entityData->startStandTime;
  v13 = DCONST_DVARINT_cg_playerNameplateStateChangeDuration;
  if ( !DCONST_DVARINT_cg_playerNameplateStateChangeDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateStateChangeDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  p_lerp = &cent->nextState.lerp;
  if ( v12 <= integer )
  {
    if ( integer < 1 )
      integer = 1;
    v17 = (float)v12 / (float)integer;
    v18 = (float)BG_Suit_GetProneViewHeight(SuitDef) * heightScalar;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) )
      viewheight_crouch = SuitDef->viewheight_crouch;
    else
      viewheight_crouch = SuitDef->viewheight_stand;
    v20 = I_fclamp(v17, 0.0, 1.0);
    v16 = (float)((float)(_mm_cvtepi32_ps((__m128i)viewheight_crouch).m128_f32[0] * heightScalar) * *(float *)&v20) + (float)((float)(1.0 - *(float *)&v20) * v18);
  }
  else
  {
    entityData->startStandTime = 0;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u) )
    {
      v16 = (float)BG_Suit_GetProneViewHeight(SuitDef) * heightScalar;
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) )
    {
      v16 = (float)SuitDef->viewheight_crouch * heightScalar;
    }
    else
    {
      v16 = (float)SuitDef->viewheight_stand * heightScalar;
    }
  }
  outViewHeightOffset->v[2] = v16;
  if ( isRoot )
  {
    v21 = DVARFLT_cg_playerNameplatesFastTraceRootXOffset;
    if ( !DVARFLT_cg_playerNameplatesFastTraceRootXOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesFastTraceRootXOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    outViewHeightOffset->v[0] = v21->current.value + outViewHeightOffset->v[0];
  }
}

/*
==============
LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight
==============
*/
void LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight(const characterInfo_t *const ci, const PlayerEntityData *const entityData, const CgGlobalsMP *const cgameGlob, const centity_t *const cent, vec3_t *viewHeightPosition)
{
  float v9; 
  float v10; 
  const dvar_t *v11; 
  vec3_t outViewHeightOffset; 
  vec3_t outOrigin; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 662, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 663, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  LUIElement_PlayerNameplates_GetViewHeightOffset(ci, entityData, cgameGlob, cent, 1.0, &outViewHeightOffset, 0);
  v9 = outViewHeightOffset.v[1] + outOrigin.v[1];
  viewHeightPosition->v[0] = outViewHeightOffset.v[0] + outOrigin.v[0];
  v10 = outViewHeightOffset.v[2];
  viewHeightPosition->v[1] = v9;
  viewHeightPosition->v[2] = v10 + outOrigin.v[2];
  v11 = DCONST_DVARFLT_cg_playerNameplateViewHeightOffset;
  if ( !DCONST_DVARFLT_cg_playerNameplateViewHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateViewHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  viewHeightPosition->v[2] = v11->current.value + viewHeightPosition->v[2];
}

/*
==============
LUIElement_PlayerNameplates_IsCharacterUnderCrosshairs
==============
*/
_BOOL8 LUIElement_PlayerNameplates_IsCharacterUnderCrosshairs(const vec3_t *viewOrigin, const vec3_t *viewDir, const float viewDirXYLen, const bool viewDirXYIsValid, const vec2_t *viewDirXYNormalized, const centity_t *const entity, const characterInfo_t *const entityCharacterInfo, const bool testSpawnAngle, const float cosSpawnAngle, const float sinSpawnAngle, bool *spawnAngleTestResult)
{
  const SuitDef *SuitDef; 
  int bounds_height_prone; 
  float v17; 
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
  bool v30; 
  float v31; 
  bool v32; 
  float v33; 
  bool v34; 
  bool v35; 
  vec3_t outOrigin; 
  __int64 v38; 

  v38 = -2i64;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1701, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entityCharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1702, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(entityCharacterInfo->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1706, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 4u) )
  {
    bounds_height_prone = SuitDef->bounds_height_prone;
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 3u) )
  {
    bounds_height_prone = SuitDef->bounds_height_crouch;
  }
  else
  {
    bounds_height_prone = SuitDef->bounds_height_stand;
  }
  v17 = (float)bounds_height_prone * 0.5;
  v18 = (float)SuitDef->bounds_radius + 18.0;
  v19 = v18 * v18;
  v20 = v17 + 18.0;
  CG_GetPoseOrigin(&entity->pose, &outOrigin);
  outOrigin.v[2] = v17 + outOrigin.v[2];
  v22 = outOrigin.v[0] - viewOrigin->v[0];
  v21 = v22;
  v23 = outOrigin.v[1] - viewOrigin->v[1];
  v24 = outOrigin.v[2] - viewOrigin->v[2];
  if ( viewDirXYIsValid )
  {
    if ( viewDirXYLen <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1735, ASSERT_TYPE_ASSERT, "(viewDirXYLen > 0.f)", (const char *)&queryFormat, "viewDirXYLen > 0.f") )
      __debugbreak();
    v25 = (float)(v22 * v22) + (float)(v23 * v23);
    v26 = viewDirXYNormalized->v[1];
    v27 = viewDirXYNormalized->v[0];
    v29 = (float)(v22 * viewDirXYNormalized->v[0]) + (float)(v23 * v26);
    v28 = v29;
    if ( v25 <= v19 )
    {
      v30 = 1;
      goto LABEL_25;
    }
    if ( v29 >= 0.0 )
    {
      v31 = v29 * v29;
      v30 = v19 >= (float)(v25 - v31);
      if ( v19 >= (float)(v25 - v31) )
        goto LABEL_25;
    }
    else
    {
      v30 = 0;
    }
    if ( !testSpawnAngle )
      goto LABEL_39;
LABEL_25:
    v32 = v20 >= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(fsqrt(v25) * viewDir->v[2]) / viewDirXYLen) - v24) & _xmm);
    if ( testSpawnAngle )
    {
      if ( !v30 )
      {
        LODWORD(v33) = LODWORD(v18) ^ _xmm;
        if ( cosSpawnAngle < 0.0 )
        {
          if ( (float)(v28 * sinSpawnAngle) >= v33 )
          {
            *spawnAngleTestResult = 1;
            goto LABEL_36;
          }
          v34 = (float)((float)(cosSpawnAngle * cosSpawnAngle) * (float)((float)((float)((float)(v26 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v23) * (float)((float)(v26 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v23)) + (float)((float)((float)(v27 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v21) * (float)((float)(v27 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v21)))) < (float)((float)((float)(v28 * sinSpawnAngle) + v18) * (float)((float)(v28 * sinSpawnAngle) + v18));
        }
        else
        {
          if ( v28 < v33 )
          {
            *spawnAngleTestResult = 0;
            goto LABEL_36;
          }
          v34 = (float)((float)((float)(v28 * sinSpawnAngle) + v18) * (float)((float)(v28 * sinSpawnAngle) + v18)) < (float)((float)(cosSpawnAngle * cosSpawnAngle) * (float)((float)((float)((float)(v26 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v23) * (float)((float)(v26 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v23)) + (float)((float)((float)(v27 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v21) * (float)((float)(v27 * COERCE_FLOAT(LODWORD(v28) ^ _xmm)) + v21))));
        }
        *spawnAngleTestResult = !v34;
        goto LABEL_36;
      }
      *spawnAngleTestResult = 1;
    }
LABEL_36:
    if ( v32 && v30 )
    {
      v35 = 1;
      goto LABEL_42;
    }
LABEL_39:
    v35 = 0;
    goto LABEL_42;
  }
  v35 = v19 >= (float)((float)(v22 * v22) + (float)((float)(outOrigin.v[1] - viewOrigin->v[1]) * (float)(outOrigin.v[1] - viewOrigin->v[1])));
  if ( testSpawnAngle )
    *spawnAngleTestResult = 1;
LABEL_42:
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v35;
}

/*
==============
LUIElement_PlayerNameplates_IsElementSnapping
==============
*/
bool LUIElement_PlayerNameplates_IsElementSnapping(const LocalClientNum_t localClientNum, const bool *isFriendly, float *outLeft, float *outTop, float *outRight, float *outBottom)
{
  const dvar_t *v6; 
  float v11; 
  float v12; 
  float v13; 
  bool result; 
  float v15; 
  bool snapToLocation; 
  vec2_t screenPosition; 
  vec2_t screenSnapOffset; 

  v6 = DVARBOOL_cg_friendlyNameplateSnapToEdge;
  if ( !DVARBOOL_cg_friendlyNameplateSnapToEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateSnapToEdge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !*isFriendly || !v6->current.enabled )
    return 0;
  v11 = *outRight - *outLeft;
  v12 = *outBottom - *outTop;
  v13 = (float)(v11 * 0.5) + *outLeft;
  screenPosition.v[1] = (float)(v12 * 0.5) + *outTop;
  screenPosition.v[0] = v13;
  screenSnapOffset.v[0] = 0.0;
  screenSnapOffset.v[1] = 0.0;
  snapToLocation = 0;
  result = LUIElement_Anchored_SnapScreenPositionToEdges(localClientNum, 0.0, v11, v12, 0.0, &screenPosition, &screenPosition, &snapToLocation, &screenSnapOffset);
  if ( result )
  {
    v15 = screenPosition.v[1];
    *outLeft = screenPosition.v[0] - (float)(v11 * 0.5);
    *outTop = v15 - (float)(v12 * 0.5);
    *outRight = v11 + *outLeft;
    *outBottom = v12 + *outTop;
  }
  return result;
}

/*
==============
LUIElement_PlayerNameplates_Layout
==============
*/
void LUIElement_PlayerNameplates_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v6; 
  PlayerNameplatesOptions *Data; 
  CgStatic *LocalClientStatics; 
  const OmnvarDef *Def; 
  const OmnvarData *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  CgEntitySystem *v14; 
  __int64 v15; 
  __int64 v16; 
  bool v17; 
  _BYTE *v18; 
  int v19; 
  _BYTE *v20; 
  int v21; 
  __int64 v22; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *v24; 
  float v25; 
  double v26; 
  bool v27; 
  int v28; 
  bool v29; 
  char HasNameplate; 
  char v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  unsigned __int8 v34; 
  _QWORD *v35; 
  unsigned __int8 v36; 
  unsigned __int8 v37; 
  unsigned __int8 v38; 
  unsigned __int8 v39; 
  unsigned __int8 v40; 
  secure_uint8_t *v41; 
  unsigned __int8 v42; 
  unsigned __int64 team; 
  bool v44; 
  bool v45; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v47; 
  bool v48; 
  unsigned __int64 v49; 
  bool v50; 
  PostGameState PostGameState; 
  unsigned int infilStatusOmnvarIndex; 
  const OmnvarDef *v53; 
  OmnvarData *v54; 
  const dvar_t *v55; 
  vec3_t *outViewHeightOffset; 
  __int64 isRoot; 
  __int64 v58; 
  __int64 v59; 
  unsigned int entityNum; 
  int entityNuma; 
  bool Bool; 
  bool v64; 
  CgStatic *v65; 
  CgGlobalsMP *cgameGlob; 
  characterInfo_t *oc_ci; 
  __int64 v68; 
  PlayerNameplatesOptions *options; 
  const characterInfo_t *CharacterInfo; 
  __int128 v72; 
  __int64 v73; 
  unsigned int v74; 
  vec3_t entityOffset; 
  vec3_t v76; 

  v6 = localClientNum;
  Data = LUIElement_PlayerNameplates_GetData(element, luaVM);
  options = Data;
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1226, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  Data->deltaTime = deltaTime;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v6);
  v65 = LocalClientStatics;
  cgameGlob = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v6);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  Def = BG_Omnvar_GetDef(Data->hideNameplatesForZeroHealthOmnvarIndex);
  v10 = CG_Omnvar_GetData(cgameGlob->localClientNum, Data->hideNameplatesForZeroHealthOmnvarIndex);
  Bool = Omnvar_GetBool(Def, v10);
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "LUIElement_PlayerNameplates_Layout");
  v11 = 0;
  v12 = v6;
  v13 = 0i64;
  while ( 1 )
  {
    v68 = v13;
    entityNum = v11;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v11 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(isRoot) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", isRoot) )
        __debugbreak();
    }
    if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(isRoot) = CgEntitySystem::ms_allocatedCount;
      LODWORD(outViewHeightOffset) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outViewHeightOffset, isRoot) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v12] )
    {
      LODWORD(isRoot) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", isRoot) )
        __debugbreak();
    }
    v14 = CgEntitySystem::ms_entitySystemArray[v12];
    if ( v11 >= 0x800 )
    {
      LODWORD(isRoot) = 2048;
      LODWORD(outViewHeightOffset) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outViewHeightOffset, isRoot) )
        __debugbreak();
    }
    v15 = (__int64)&v14->m_entities[v13];
    v16 = (__int64)&Data->playerEntities[v13];
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v17 = (int)v11 < (signed int)ComCharacterLimits::ms_gameData.m_clientCount;
    if ( (*(_BYTE *)(v15 + 648) & 1) != 0 )
    {
      v22 = *(int *)(v15 + 544);
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v22 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(isRoot) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(outViewHeightOffset) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outViewHeightOffset, isRoot) )
            __debugbreak();
        }
        v24 = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v22);
      }
      else
      {
        v24 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v22);
      }
      oc_ci = (characterInfo_t *)v24;
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1278, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
        __debugbreak();
      v27 = 0;
      if ( v17 )
      {
        v25 = (float)v65->GetClientInfo(v65, v11)->healthRatio * 0.0078740157;
        v26 = I_fclamp(v25, 0.0, 1.0);
        if ( *(float *)&v26 <= 0.0 )
          v27 = 1;
      }
      v64 = v27;
      v28 = *(__int16 *)(v15 + 400);
      v29 = cgameGlob->predictedPlayerState.clientNum == v28 || cgameGlob->clientNum == v28;
      HasNameplate = LUIElement_PlayerNameplates_EntityHasNameplate(options, cgameGlob, (const centity_t *const)v15, Bool);
      v31 = HasNameplate;
      if ( v29 )
        goto LABEL_132;
      if ( !v17 && !HasNameplate )
        goto LABEL_89;
      if ( v27 && Bool )
      {
LABEL_132:
        v11 = entityNum;
        if ( v17 )
          bitarray_base<bitarray<224>>::resetBit(&cgameGlob->sightedEnemyFools, entityNum);
      }
      else
      {
        v32 = DVARBOOL_cg_playerNameplatesFastTrace;
        if ( !DVARBOOL_cg_playerNameplatesFastTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesFastTrace") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        if ( v32->current.enabled )
        {
          LUIElement_PlayerNameplates_GetViewHeightOffset(v24, (const PlayerEntityData *const)v16, cgameGlob, (const centity_t *const)v15, 1.0, &entityOffset, 0);
          LUIElement_PlayerNameplates_GetViewHeightOffset(v24, (const PlayerEntityData *const)v16, cgameGlob, (const centity_t *const)v15, 0.5, &v76, 1);
          v33 = DCONST_DVARFLT_cg_playerNameplateViewHeightOffset;
          if ( !DCONST_DVARFLT_cg_playerNameplateViewHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateViewHeightOffset") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v33);
          entityOffset.v[2] = entityOffset.v[2] + v33->current.value;
          v34 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, NULL, &vec3_origin, &entityOffset, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)v16);
          if ( v34 != 1 && secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 48)) == 1 )
            secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v16 + 48), v34);
          v35 = (_QWORD *)(v16 + 8);
          v36 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, NULL, &vec3_origin, &v76, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)(v16 + 8));
        }
        else
        {
          v37 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)v16);
          if ( v37 != 1 && secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 48)) == 1 )
            secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v16 + 48), v37);
          v35 = (_QWORD *)(v16 + 8);
          v36 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG2, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)(v16 + 8));
        }
        v38 = v36;
        if ( v36 != 1 && secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 64)) == 1 )
          secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v16 + 64), v38);
        if ( secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 48)) == 3 || secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 64)) == 3 )
        {
          v42 = 3;
        }
        else
        {
          if ( secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 48)) == 1 || secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 64)) == 1 )
            goto LABEL_89;
          v39 = secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 64));
          v40 = secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 48));
          v41 = (secure_uint8_t *)(v16 + 48);
          if ( v40 <= v39 )
            v41 = (secure_uint8_t *)(v16 + 64);
          v42 = secure_uint8_t::secureInt8_Get(v41);
          if ( v42 == 1 )
          {
LABEL_89:
            v11 = entityNum;
            goto LABEL_90;
          }
        }
        secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v16 + 48), 1u);
        secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v16 + 64), 1u);
        *(_QWORD *)v16 = 0i64;
        *v35 = 0i64;
        secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v16 + 16), v42);
        if ( secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 16)) == 2 || !v31 )
          *(_DWORD *)(v16 + 32) = 0;
        if ( !v17 )
          goto LABEL_89;
        v11 = entityNum;
        bitarray_base<bitarray<224>>::resetBit(&cgameGlob->sightedEnemyFools, entityNum);
        if ( cgameGlob->predictedPlayerState.pm_type <= 1u )
        {
          team = (unsigned int)CharacterInfo->team;
          v72 = 0ui64;
          v73 = 0i64;
          v74 = 0;
          v44 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          v45 = v44 && (_DWORD)team == 5;
          if ( (!v44 || (_DWORD)team != 4) && !v45 )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
              AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
            else
              AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
            v72 = *(_OWORD *)AllCombatTeamFlags->array;
            v73 = *(_QWORD *)&AllCombatTeamFlags->array[4];
            v47 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
            v74 = v47;
            if ( (_DWORD)team )
            {
              if ( (unsigned int)team >= 0xE0 )
              {
                LODWORD(v59) = 224;
                LODWORD(v58) = team;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v58, v59) )
                  __debugbreak();
              }
              *((_DWORD *)&v72 + (team >> 5)) &= ~(0x80000000 >> (team & 0x1F));
              v47 = v74;
            }
            if ( v44 )
              LODWORD(v72) = v72 & 0xF7FFFFFF;
            v74 = v47 & 0xFF9FFFFF;
          }
          v48 = entityNum == cgameGlob->crosshairClientNum || secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v16 + 16)) == 3;
          v49 = (unsigned int)oc_ci->team;
          if ( (unsigned int)v49 >= 0xE0 )
          {
            LODWORD(isRoot) = 224;
            LODWORD(outViewHeightOffset) = oc_ci->team;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outViewHeightOffset, isRoot) )
              __debugbreak();
          }
          if ( !v64 && ((0x80000000 >> (v49 & 0x1F)) & *((_DWORD *)&v72 + (v49 >> 5))) != 0 )
          {
            v50 = !v48;
            LODWORD(v6) = localClientNum;
            if ( !v50 && CG_DrawMP_ShouldMarkForEyesOn(localClientNum, cgameGlob, oc_ci, entityNum) )
            {
              if ( entityNum >= 0xE0 )
              {
                LODWORD(v59) = 224;
                LODWORD(v58) = entityNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v58, v59) )
                  __debugbreak();
              }
              cgameGlob->sightedEnemyFools.array[(unsigned __int64)entityNum >> 5] |= 0x80000000 >> (entityNum & 0x1F);
            }
            goto LABEL_91;
          }
        }
      }
LABEL_90:
      LODWORD(v6) = localClientNum;
LABEL_91:
      LocalClientStatics = v65;
      goto LABEL_92;
    }
    *(_QWORD *)v16 = 0i64;
    *(_QWORD *)(v16 + 8) = 0i64;
    if ( !*(_BYTE *)(v16 + 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    *(_DWORD *)(v16 + 20) += *(_DWORD *)(v16 + 24);
    *(_BYTE *)(v16 + 16) = 1;
    entityNuma = (*(_DWORD *)(v16 + 20) ^ (v16 + 16)) * ((*(_DWORD *)(v16 + 20) ^ (v16 + 16)) + 2);
    *(_BYTE *)(v16 + 16) ^= (unsigned __int8)entityNuma ^ BYTE1(entityNuma);
    *(_QWORD *)(v16 + 32) = 0i64;
    *(_QWORD *)(v16 + 40) = 0i64;
    v18 = (_BYTE *)(v16 + 48);
    if ( !*(_BYTE *)(v16 + 60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    *(_DWORD *)(v16 + 52) += *(_DWORD *)(v16 + 56);
    v19 = *(_DWORD *)(v16 + 52);
    *v18 = 1;
    *v18 ^= (unsigned __int8)(((unsigned __int8)v18 ^ v19) * (((unsigned __int8)v18 ^ v19) + 2)) ^ ((unsigned __int16)(((unsigned __int16)v18 ^ v19) * (((unsigned __int16)v18 ^ v19) + 2)) >> 8);
    v20 = (_BYTE *)(v16 + 64);
    if ( !*(_BYTE *)(v16 + 76) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    *(_DWORD *)(v16 + 68) += *(_DWORD *)(v16 + 72);
    v21 = *(_DWORD *)(v16 + 68);
    *v20 = 1;
    *v20 ^= (((unsigned __int8)v20 ^ v21) * (((unsigned __int8)v20 ^ v21) + 2)) ^ ((unsigned __int16)(((unsigned __int16)v20 ^ v21) * (((unsigned __int16)v20 ^ v21) + 2)) >> 8);
    *(_DWORD *)(v16 + 80) = 0;
    if ( v17 )
    {
      if ( v11 >= 0xE0 )
      {
        LODWORD(v59) = 224;
        LODWORD(v58) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v58, v59) )
          __debugbreak();
      }
      cgameGlob->sightedEnemyFools.array[(unsigned __int64)v11 >> 5] &= ~(0x80000000 >> (v11 & 0x1F));
    }
LABEL_92:
    ++v11;
    v13 = v68 + 1;
    Data = options;
    v12 = (int)v6;
  }
  if ( CG_GetFlashbangedRemainingTime((LocalClientNum_t)v6) )
    element->currentAnimationState.flags &= ~1u;
  PostGameState = CG_MainMP_GetPostGameState((const LocalClientNum_t)v6);
  if ( (unsigned __int8)(PostGameState - 1) <= 1u || (unsigned __int8)PostGameState >= UI_POST_GAME_SCOREBOARD )
    element->currentAnimationState.flags &= ~1u;
  infilStatusOmnvarIndex = Data->infilStatusOmnvarIndex;
  if ( infilStatusOmnvarIndex != -1 )
  {
    v53 = BG_Omnvar_GetDef(infilStatusOmnvarIndex);
    v54 = CG_Omnvar_GetData((LocalClientNum_t)v6, Data->infilStatusOmnvarIndex);
    if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( v53->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
      __debugbreak();
    if ( v54->current.integer + v53->minvalue > 0 )
      element->currentAnimationState.flags &= ~1u;
  }
  v55 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  if ( v55->current.enabled )
    element->currentAnimationState.flags &= ~1u;
  Sys_ProfEndNamedEvent();
}

/*
==============
LUIElement_PlayerNameplates_Render
==============
*/
void LUIElement_PlayerNameplates_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  signed __int64 v8; 
  void *v9; 
  EntityNameplate *v12; 
  __int64 v13; 
  PlayerNameplatesOptions *Data; 
  CgGlobalsMP *LocalClientGlobals; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  const dvar_t *v19; 
  double CurrentUnitScale; 
  unsigned int v21; 
  const OmnvarDef *Def; 
  const OmnvarData *v23; 
  bool Bool; 
  unsigned int hideNameplateStringsOmnvarIndex; 
  bool v26; 
  const OmnvarDef *v27; 
  const OmnvarData *v28; 
  unsigned int spawnCameraOmnvarIndex; 
  const OmnvarDef *v30; 
  const OmnvarData *v31; 
  cg_t *v32; 
  const playerState_s *p_predictedPlayerState; 
  float v34; 
  float v35; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 
  __int128 v38; 
  PostGameState PostGameState; 
  const OmnvarDef *v40; 
  const OmnvarData *v41; 
  unsigned int tacOpsMapOpenOmnvarIndex; 
  const OmnvarDef *v43; 
  const OmnvarData *v44; 
  const dvar_t *v45; 
  __int128 unsignedInt; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  float value; 
  __int128 v59; 
  __m128 v61; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  float v68; 
  __int128 v69; 
  const dvar_t *v74; 
  const dvar_t *v75; 
  __int16 i; 
  float v78; 
  __int16 v79; 
  float v80; 
  float v81; 
  float v82; 
  LocalClientNum_t v83; 
  char v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  LocalClientNum_t v88; 
  CgEntitySystem *v89; 
  centity_t *v90; 
  const centity_t *v91; 
  LocalClientNum_t v92; 
  cg_t *v93; 
  const characterInfo_t *v94; 
  const characterInfo_t *v95; 
  __int16 *j; 
  team_t team; 
  team_t v98; 
  unsigned __int8 v99; 
  secure_uint8_t *p_traceState; 
  char v101; 
  bitarray_base<bitarray<224> > *v102; 
  bool v103; 
  bool IsCharacterUnderCrosshairs; 
  bool v105; 
  centity_t *v106; 
  float v112; 
  __int64 v113; 
  __int64 v114; 
  int renderFlags; 
  int v116; 
  int v117; 
  const dvar_t *v118; 
  int v119; 
  __int64 v120; 
  int *p_renderFlags; 
  __int64 v122; 
  __int64 v123; 
  int *v124; 
  bool v125; 
  double v126; 
  float v127; 
  const dvar_t *v128; 
  const dvar_t *v129; 
  const dvar_t *v132; 
  CgMLGCameraManager *CameraManager; 
  bool v134; 
  bool v135; 
  PlayerNameplatesOptions *v136; 
  __int64 v137; 
  float v138; 
  __int64 v139; 
  __int16 entityNum; 
  unsigned int v141; 
  int v142; 
  bool v143; 
  bool v144; 
  bool v145; 
  __int64 v146; 
  CgEntitySystem *v147; 
  char v148; 
  float v149; 
  CgStatic *v150; 
  cg_t *v151; 
  const characterInfo_t *v152; 
  __int128 v153; 
  float v154; 
  float v155; 
  int v156; 
  bool v157; 
  int v158; 
  __int64 v159; 
  LocalClientNum_t v160; 
  CgCompassSystemMP *v161; 
  bool v162; 
  int v163; 
  unsigned __int8 v164; 
  CgGlobalsMP *v165; 
  bool v166; 
  bool v167; 
  const dvar_t *v168; 
  const dvar_t *v169; 
  const char *v170; 
  const dvar_t *v171; 
  const dvar_t *v172; 
  PlayerNameplatesOptions *v173; 
  bool v174; 
  const dvar_t *v175; 
  __int128 v176; 
  NameplateSetting v177; 
  int v178; 
  int *v179; 
  bool v180; 
  bool v181; 
  __int64 v182; 
  __int128 v183; 
  __int128 v184; 
  bool v185; 
  float v186; 
  __int64 v187; 
  int v188; 
  char v189; 
  int v190; 
  char v191; 
  __int128 v192; 
  __int128 v195; 
  char v197; 
  bool IsElementSnapping; 
  __int16 v199; 
  unsigned int v200; 
  const clientInfo_t *v201; 
  char v203; 
  PlayerNameplatesOptions *v204; 
  bool v205; 
  bool v206; 
  float v208; 
  float *v209; 
  __int128 v210; 
  __int128 v211; 
  LocalClientNum_t v212; 
  NameplateSetting v213; 
  PlayerNameplatesOptions *v214; 
  __int64 v215; 
  float v216; 
  NameplatesGameMode gameMode; 
  PlayerNameplatesOptions *v218; 
  const GfxImage *material; 
  PlayerNameplatesOptions *v220; 
  float v221; 
  bool v223; 
  bool v224; 
  NameplateSetting v226; 
  LocalClientNum_t v227; 
  float v228; 
  float v229; 
  PlayerNameplatesOptions *v230; 
  __int64 v231; 
  unsigned int perkIconName; 
  int alignX; 
  int alignY; 
  bool v236; 
  bool v237; 
  float v239; 
  char v240; 
  bool v241; 
  LocalClientNum_t v242; 
  __int64 v243; 
  float *v244; 
  float v245; 
  int v246; 
  LUIElement *v247; 
  const clientInfo_t *v248; 
  int CharacterMaxCount; 
  float v250; 
  double Float_Internal_DebugName; 
  float v252; 
  __int128 v253; 
  float v254; 
  float v255; 
  float *v256; 
  int v257; 
  GfxFont *v258; 
  lua_State *v259; 
  LUIElement *v260; 
  const CgSnapshotMP *NextSnap; 
  centity_t *entities; 
  float v263; 
  __int64 v264; 
  LocalClientNum_t v265; 
  centity_t *v266; 
  int v267; 
  float v268; 
  cg_t *v269; 
  const characterInfo_t *v270; 
  team_t v271; 
  team_t v272; 
  cg_t *v273; 
  const clientInfo_t *v274; 
  char v275; 
  int squadIndex; 
  int v277; 
  LocalClientNum_t v278; 
  CgCompassSystemMP *v279; 
  cg_t *v280; 
  const dvar_t *v281; 
  double v282; 
  float v283; 
  __int128 v284; 
  __int128 v285; 
  float v286; 
  float v287; 
  float v288; 
  GfxFont *v289; 
  lua_State *v290; 
  LUIElement *v291; 
  float v292; 
  float v293; 
  CgPlayerVisibilityTestRefId underCrosshairsTestId; 
  LocalClientNum_t v295; 
  CgPlayerVisibilityTestRefId friendlySpawnAngleTestId; 
  LocalClientNum_t v297; 
  CgPlayerVisibilityTestRefId updated; 
  CgPlayerVisibilityTestRefId enemySpawnAngleTestId; 
  LocalClientNum_t v300; 
  CgPlayerVisibilityTestRefId v301; 
  centity_t *entity; 
  characterInfo_t *entityCharacterInfo; 
  int entityCharacterInfoa; 
  __int64 testSpawnAngle; 
  __int64 cosSpawnAngle; 
  bool v307; 
  bool hasMarksmanPerk; 
  bool isFriendly; 
  bool spawnAngleTestResult; 
  LocalClientNum_t localClientNuma; 
  bool v312; 
  bool v313; 
  bool useFastPosition; 
  char v315; 
  PlayerNameplatesOptions *options; 
  float distanceSquared; 
  bool m_isMLGSpectator; 
  __int16 v319; 
  char v320; 
  BOOL v321; 
  int clientNum; 
  float outBottom; 
  bool v324; 
  char v325; 
  bool HasPerk; 
  bool v327; 
  bool enabled; 
  float outDesiredAlpha; 
  __int64 v330; 
  cg_t *cgameGlob; 
  centity_t *cent; 
  float outTop; 
  float outRight; 
  float offsetYScalar; 
  float v336; 
  LocalClientNum_t v337; 
  float unitScale; 
  lua_State *v339; 
  PlayerEntityData *entityData; 
  __int64 v341; 
  vec3_t outOrg; 
  LUIElement *elementa; 
  _BYTE scaleSettings[20]; 
  bitarray_base<bitarray<224> > *CrosshairsTestResultWithWait; 
  float v346; 
  entityType_s eType; 
  unsigned __int16 v348; 
  CgStatic *LocalClientStatics; 
  unsigned int v350; 
  GfxFont *LUI_PLAYER_NAMEPLATES_FONT; 
  ScreenPlacement *scrPlace; 
  LUIElement *roota; 
  const characterInfo_t *CharacterInfo; 
  const clientInfo_t *v355; 
  playerState_s *ps; 
  __int64 v357; 
  vec4_t color; 
  vec2_t screenPosition; 
  vec2_t position; 
  vec3_t outOrigin; 
  vec2_t outScreenPosition; 
  vec3_t viewDir; 
  vec2_t viewDirXYNormalized[2]; 
  vec4_t v365; 
  vec4_t v366; 
  FontGlowStyle glowStyle; 
  vec4_t result; 
  _OWORD v369[2]; 
  vec4_t quadVerts[4]; 
  EntityNameplate _First[248]; 
  char distanceString[256]; 
  char v373[256]; 
  __int16 v374[252]; 

  v9 = alloca(v8);
  v357 = -2i64;
  roota = root;
  elementa = element;
  localClientNuma = localClientNum;
  v337 = localClientNum;
  v339 = luaVM;
  v12 = _First;
  v13 = 248i64;
  do
  {
    EntityNameplate::EntityNameplate(v12++);
    --v13;
  }
  while ( v13 );
  Data = LUIElement_PlayerNameplates_GetData(element, luaVM);
  options = Data;
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1983, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  cgameGlob = LocalClientGlobals;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.nameplates.enemyVisible");
  v348 = ModelFromPath;
  if ( Data->enemyVisibleTime == -1 )
    goto LABEL_11;
  v19 = DVARINT_cg_nameplateEnemyVisibleTimeout;
  if ( !DVARINT_cg_nameplateEnemyVisibleTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_nameplateEnemyVisibleTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( Data->enemyVisibleTime + v19->current.integer < LocalClientGlobals->time )
LABEL_11:
    LUI_Model_SetBool(ModelFromPath, 0);
  if ( Data->nameplatesEnabled )
  {
    Sys_ProfBeginNamedEvent(0xFFEE82EE, "LUIElement_PlayerNameplates_Render");
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
    CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
    unitScale = *(float *)&CurrentUnitScale;
    v21 = LocalClientGlobals->predictedPlayerState.clientNum;
    m_isMLGSpectator = LocalClientGlobals->m_isMLGSpectator;
    Def = BG_Omnvar_GetDef(Data->alwaysShowNameplatesOmnvarIndex);
    v23 = CG_Omnvar_GetData(localClientNum, Data->alwaysShowNameplatesOmnvarIndex);
    Bool = Omnvar_GetBool(Def, v23);
    hideNameplateStringsOmnvarIndex = Data->hideNameplateStringsOmnvarIndex;
    if ( hideNameplateStringsOmnvarIndex == -1 )
    {
      v26 = 0;
    }
    else
    {
      v27 = BG_Omnvar_GetDef(hideNameplateStringsOmnvarIndex);
      v28 = CG_Omnvar_GetData(localClientNum, Data->hideNameplateStringsOmnvarIndex);
      v26 = Omnvar_GetBool(v27, v28);
    }
    v324 = v26;
    v312 = 0;
    spawnCameraOmnvarIndex = Data->spawnCameraOmnvarIndex;
    if ( spawnCameraOmnvarIndex != -1 )
    {
      v30 = BG_Omnvar_GetDef(spawnCameraOmnvarIndex);
      v31 = CG_Omnvar_GetData(localClientNum, Data->spawnCameraOmnvarIndex);
      v312 = Omnvar_GetBool(v30, v31);
    }
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v21);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2036, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
      __debugbreak();
    v355 = LocalClientStatics->GetClientInfo(LocalClientStatics, v21);
    if ( !v355 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2038, ASSERT_TYPE_ASSERT, "(myClientInfo)", (const char *)&queryFormat, "myClientInfo") )
      __debugbreak();
    v32 = CG_GetLocalClientGlobals(localClientNum);
    p_predictedPlayerState = &v32->predictedPlayerState;
    ps = &v32->predictedPlayerState;
    hasMarksmanPerk = BG_HasPerk(&v32->predictedPlayerState.perks, 0x3Eu);
    HasPerk = BG_HasPerk(&p_predictedPlayerState->perks, 0x41u);
    v34 = FLOAT_1_0;
    LUI_PLAYER_NAMEPLATES_FONT = UI_GetFontHandle(NULL, 11, 1.0);
    v35 = 0.0;
    offsetYScalar = 0.0;
    position.v[0] = 0.0;
    v38 = 0i64;
    v336 = 0.0;
    position.v[1] = 0.0;
    WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
    UsingAltForHud = CG_GetUsingAltForHud(p_predictedPlayerState);
    BG_GetEnemyCrossHairRange(WeaponForHud, UsingAltForHud);
    if ( LocalClientGlobals->dualViewScope && !LocalClientGlobals->scopeBoundingCircleValid )
      LocalClientGlobals->scopeBoundingCircleValid = CG_FetchScreenSpaceScopeBoundingCircle(localClientNum, &LocalClientGlobals->scopeBoundingCircle);
    PostGameState = CG_MainMP_GetPostGameState(localClientNum);
    v40 = BG_Omnvar_GetDef(Data->hideNameplatesForZeroHealthOmnvarIndex);
    v41 = CG_Omnvar_GetData(LocalClientGlobals->localClientNum, Data->hideNameplatesForZeroHealthOmnvarIndex);
    v313 = Omnvar_GetBool(v40, v41);
    v327 = 0;
    tacOpsMapOpenOmnvarIndex = Data->tacOpsMapOpenOmnvarIndex;
    if ( tacOpsMapOpenOmnvarIndex != -1 )
    {
      v43 = BG_Omnvar_GetDef(tacOpsMapOpenOmnvarIndex);
      v44 = CG_Omnvar_GetData(localClientNum, Data->tacOpsMapOpenOmnvarIndex);
      v327 = Omnvar_GetBool(v43, v44);
    }
    v325 = 0;
    v320 = 0;
    v45 = DVARBOOL_cg_friendlyNameplateSnapToEdge;
    if ( !DVARBOOL_cg_friendlyNameplateSnapToEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateSnapToEdge") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.enabled )
    {
      v325 = 1;
      unsignedInt = v350;
    }
    else
    {
      v47 = DVARFLT_cg_friendlyNameplateDistance;
      if ( !DVARFLT_cg_friendlyNameplateDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      v48 = DVARFLT_cg_friendlyNameplateAngle;
      if ( !DVARFLT_cg_friendlyNameplateAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      unsignedInt = v48->current.unsignedInt;
      v350 = v48->current.unsignedInt;
    }
    if ( PostGameState == UI_POST_GAME_FINAL_KILLCAM )
      goto LABEL_42;
    v55 = DVARFLT_cg_enemyNameplateDistance;
    if ( !DVARFLT_cg_enemyNameplateDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enemyNameplateDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v56 = DVARFLT_cg_enemyNameplateAngle;
    if ( !DVARFLT_cg_enemyNameplateAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enemyNameplateAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    value = v56->current.value;
    v346 = value;
    if ( m_isMLGSpectator || Bool )
    {
LABEL_42:
      v320 = 1;
    }
    else if ( hasMarksmanPerk )
    {
      Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameDistanceScale, "perk_marksmanNameDistanceScale");
      *(double *)&v38 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameAngleScale, "perk_marksmanNameAngleScale");
      v59 = v38;
      *(float *)&v59 = *(float *)&v38 * value;
      _XMM1 = v59;
      __asm { vminss  xmm8, xmm1, cs:__real@43340000 }
      v346 = *(float *)&_XMM8;
    }
    v49 = DVARBOOL_cg_playerNameplateUsePlayerVisibilityCrosshairsTest;
    if ( !DVARBOOL_cg_playerNameplateUsePlayerVisibilityCrosshairsTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateUsePlayerVisibilityCrosshairsTest") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    enabled = v49->current.enabled;
    if ( enabled )
    {
      CrosshairsTestResultWithWait = (bitarray_base<bitarray<224> > *)CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(localClientNum, Data->crosshairsData.underCrosshairsTestId);
      screenPosition = (vec2_t)CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(localClientNum, Data->crosshairsData.friendlySpawnAngleTestId);
      v341 = (__int64)CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(localClientNum, Data->crosshairsData.enemySpawnAngleTestId);
      v54 = 0i64;
    }
    else
    {
      v54 = 0i64;
      CrosshairsTestResultWithWait = NULL;
      screenPosition = 0i64;
      v341 = 0i64;
    }
    v61.m128_u64[1] = *((_QWORD *)&unsignedInt + 1);
    *(double *)v61.m128_u64 = j___libm_sse2_sincosf_(v51, v50, v52, v53);
    _XMM7 = v61;
    _XMM10 = _mm_shuffle_ps(v61, v61, 1);
    *(double *)v61.m128_u64 = j___libm_sse2_sincosf_(v65, v64, v66, v67);
    _mm_shuffle_ps((__m128)v61.m128_u64[0], (__m128)v61.m128_u64[0], 1);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    viewDir = LocalClientGlobals->refdef.view.axis.m[0];
    v68 = fsqrt((float)(viewDir.v[1] * viewDir.v[1]) + (float)(viewDir.v[0] * viewDir.v[0]));
    v315 = v68 >= 0.000001;
    if ( v68 < 0.000001 )
    {
      outOrigin.v[0] = 0.0;
      outOrigin.v[1] = 0.0;
    }
    else
    {
      v69 = LODWORD(FLOAT_1_0);
      *(float *)&v69 = (float)(1.0 / v68) * viewDir.v[0];
      _XMM1 = v69;
      viewDirXYNormalized[1].v[0] = 0.0;
      __asm { vunpcklps xmm0, xmm1, xmm2 }
      *(double *)outOrigin.v = *(double *)&_XMM0;
    }
    outOrigin.v[2] = 0.0;
    _XMM0 = *(unsigned __int64 *)outOrigin.v;
    viewDirXYNormalized[0] = *(vec2_t *)outOrigin.v;
    viewDirXYNormalized[1].v[0] = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(__m256i *)&glowStyle.glowMaxDistance = (__m256i)*(unsigned __int64 *)outOrigin.v;
    glowStyle.outlineGlowMaxDistance = 0.0;
    v74 = DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth;
    if ( !DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesTextOutlineStrokeWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v74);
    LODWORD(glowStyle.glowMinDistance) = v74->current.integer ^ _xmm;
    v75 = DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor;
    if ( !DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesTextOutlineColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v75);
    *(_QWORD *)glowStyle.outlineGlowColor.v = v75->current.integer64;
    _XMM0 = LODWORD(v75->current.vector.v[2]);
    *(_QWORD *)&glowStyle.outlineGlowColor.xyz.z = *((_QWORD *)&v75->current.string + 1);
    memset_0(v374, 0, 0x1F0ui64);
    memset_0(distanceString, 0, 0xF8ui64);
    memset_0(v373, 0, 0xF8ui64);
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v374[i] = i;
    }
    v78 = 0.0;
    outBottom = 0.0;
    v79 = 0;
    v330 = 0i64;
    v80 = outOrg.v[2];
    v81 = outOrg.v[1];
    v82 = outOrg.v[0];
    v83 = localClientNuma;
    while ( 1 )
    {
      v84 = v312;
      v319 = v79;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v85 = v79;
      if ( v79 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      LOWORD(outDesiredAlpha) = v374[v79];
      v86 = SLOWORD(outDesiredAlpha);
      v87 = SLOWORD(outDesiredAlpha);
      v88 = localClientNuma;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(entityCharacterInfo) = localClientNuma;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", entityCharacterInfo) )
          __debugbreak();
      }
      if ( v88 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(entityCharacterInfo) = CgEntitySystem::ms_allocatedCount;
        LODWORD(entity) = v88;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v88] )
      {
        LODWORD(entityCharacterInfo) = v88;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", entityCharacterInfo) )
          __debugbreak();
      }
      v89 = CgEntitySystem::ms_entitySystemArray[v88];
      if ( (unsigned int)v87 >= 0x800 )
      {
        LODWORD(entityCharacterInfo) = 2048;
        LODWORD(entity) = v87;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      v90 = &v89->m_entities[v87];
      cent = v90;
      if ( LUIElement_PlayerNameplates_EntityHasNameplate(options, cgameGlob, v90, v313) )
      {
        if ( (_DWORD)v87 != v89->m_entities[v87].nextState.clientNum )
        {
          LODWORD(cosSpawnAngle) = v89->m_entities[v87].nextState.clientNum;
          LODWORD(testSpawnAngle) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2144, ASSERT_TYPE_ASSERT, "( entityNum ) == ( entity->nextState.clientNum )", "%s == %s\n\t%i, %i", "entityNum", "entity->nextState.clientNum", testSpawnAngle, cosSpawnAngle) )
            __debugbreak();
        }
        v91 = &v89->m_entities[v87];
        v92 = localClientNuma;
        if ( CG_GameInterface_PlayerNameplates_SkipRender(localClientNuma, v91) || CG_Players_ShouldHidePlayerFromLocalPlayer(v92, v90->nextState.clientNum) )
        {
          v83 = v92;
          v54 = v330;
          v79 = v319 + 1;
        }
        else
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( (unsigned int)v87 >= ComCharacterLimits::ms_gameData.m_characterCount )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_characterCount;
            LODWORD(entity) = v87;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2156, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
              __debugbreak();
          }
          v93 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
          if ( !v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( v93->IsMP(v93) )
          {
            if ( (unsigned int)v87 >= v93[1].predictedPlayerState.rxvOmnvars[64].timeModified )
            {
              LODWORD(entityCharacterInfo) = v93[1].predictedPlayerState.rxvOmnvars[64].timeModified;
              LODWORD(entity) = v87;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
                __debugbreak();
            }
            v94 = (const characterInfo_t *)(*(_QWORD *)&v93[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v87);
          }
          else
          {
            v94 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v93, v87);
          }
          if ( !v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2158, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
            __debugbreak();
          v95 = CharacterInfo;
          if ( CharacterInfo == v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2159, ASSERT_TYPE_ASSERT, "(myCharacterInfo != entityCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo != entityCharacterInfo") )
            __debugbreak();
          if ( CG_GameInterface_PlayerNameplates_CheckPlayerLast(v94) && !distanceString[v86] )
          {
            for ( j = &v374[v85]; ; ++j )
            {
              if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
                __debugbreak();
              if ( (int)v85 >= (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
                break;
              *j = j[1];
              LODWORD(v85) = v85 + 1;
            }
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            v374[ComCharacterLimits::ms_gameData.m_characterCount - 1] = v87;
            --v319;
            distanceString[(__int16)v87] = 1;
LABEL_133:
            v78 = outBottom;
            goto LABEL_134;
          }
          team = v94->team;
          v98 = v95->team;
          if ( cgameGlob == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
            __debugbreak();
          if ( v90 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
            __debugbreak();
          if ( v98 && v98 == team )
          {
            v99 = 1;
          }
          else
          {
            v99 = 0;
            if ( v84 )
              goto LABEL_133;
          }
          entityData = &options->playerEntities[v86];
          p_traceState = &options->playerEntities[v86].traceState;
          if ( v373[v86] )
          {
            v101 = 1;
            secure_uint8_t::secureInt8_Set(&options->playerEntities[v86].traceState, 3u);
          }
          else
          {
            v101 = v320;
            if ( v99 )
              v101 = v325;
          }
          if ( !m_isMLGSpectator && !v99 && secure_uint8_t::secureInt8_Get(p_traceState) != 3 )
            goto LABEL_133;
          v102 = (bitarray_base<bitarray<224> > *)v341;
          if ( v99 )
            v102 = (bitarray_base<bitarray<224> > *)screenPosition;
          if ( v101 || !v99 )
          {
            v103 = 0;
            if ( secure_uint8_t::secureInt8_Get(p_traceState) == 2 )
            {
              IsCharacterUnderCrosshairs = 0;
LABEL_165:
              v105 = 0;
              spawnAngleTestResult = 0;
              v106 = cent;
              goto LABEL_167;
            }
          }
          else
          {
            v103 = 1;
          }
          if ( CrosshairsTestResultWithWait && (!v103 || v102) )
          {
            IsCharacterUnderCrosshairs = bitarray_base<bitarray<224>>::testBit(CrosshairsTestResultWithWait, v87);
            if ( v103 && bitarray_base<bitarray<224>>::testBit(v102, v87) )
            {
              v105 = 1;
              spawnAngleTestResult = 1;
              v106 = cent;
              goto LABEL_167;
            }
            goto LABEL_165;
          }
          _XMM0 = v99;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm10, xmm11, xmm2
          }
          _XMM0 = v99;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm7, xmm8, xmm2
          }
          clientNum = _XMM3;
          v106 = cent;
          IsCharacterUnderCrosshairs = LUIElement_PlayerNameplates_IsCharacterUnderCrosshairs(&outOrg, &viewDir, v68, v315, viewDirXYNormalized, cent, v94, v103, *(const float *)&_XMM3, *(const float *)&_XMM0, &spawnAngleTestResult);
          v105 = spawnAngleTestResult;
LABEL_167:
          if ( m_isMLGSpectator || v101 || v99 || IsCharacterUnderCrosshairs )
          {
            if ( v103 && !v105 )
              goto LABEL_133;
            useFastPosition = 1;
            v83 = localClientNuma;
            LUIElement_PlayerNameplates_GetScreenPosition(localClientNuma, scrPlace, entityData, v87, &outScreenPosition, &useFastPosition);
            CG_GetPoseOrigin(&v106->pose, &outOrigin);
            v112 = (float)((float)((float)(v81 - outOrigin.v[1]) * (float)(v81 - outOrigin.v[1])) + (float)((float)(v82 - outOrigin.v[0]) * (float)(v82 - outOrigin.v[0]))) + (float)((float)(v80 - outOrigin.v[2]) * (float)(v80 - outOrigin.v[2]));
            memset(&outOrigin, 0, sizeof(outOrigin));
            v113 = v330;
            v114 = v330;
            _First[v114].entityNum = LOWORD(outDesiredAlpha);
            _First[v114].distanceSquared = v112;
            _XMM0 = LODWORD(outScreenPosition.v[0]);
            _First[v114].screenPosition.v[0] = outScreenPosition.v[0];
            _First[v114].screenPosition.v[1] = outScreenPosition.v[1];
            renderFlags = _First[v114].renderFlags;
            if ( v99 )
              v116 = renderFlags | 2;
            else
              v116 = renderFlags & 0xFFFFFFFD;
            _First[v114].renderFlags = v116;
            if ( IsCharacterUnderCrosshairs )
              v117 = v116 | 1;
            else
              v117 = v116 & 0xFFFFFFFE;
            _First[v114].renderFlags = v117;
            LODWORD(v78) = ++LODWORD(outBottom);
            v54 = v113 + 1;
            v330 = v54;
            v79 = v319 + 1;
          }
          else
          {
            entityData->nameAlpha = 0.0;
            v78 = outBottom;
            v83 = localClientNuma;
            v54 = v330;
            v79 = v319 + 1;
          }
        }
      }
      else
      {
LABEL_134:
        v83 = localClientNuma;
        v54 = v330;
        v79 = v319 + 1;
      }
    }
    v118 = DVARBOOL_cg_playerNameplateOverlapCullingEnabled;
    if ( !DVARBOOL_cg_playerNameplateOverlapCullingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateOverlapCullingEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v118);
    v119 = _xmm;
    if ( v118->current.enabled )
    {
      std::_Sort_unchecked<EntityNameplate *,std::less<void>>(_First, &_First[SLODWORD(v78)], 20i64 * SLODWORD(v78) / 20, (std::less<void>)enabled);
      if ( !MLG_IsCoDCasterEnabled() || !MLG_IsLocalPlayerMLGSpectator(v83) )
      {
        v120 = LODWORD(v78) - 1;
        if ( LODWORD(v78) - 1 > 0 )
        {
          p_renderFlags = &_First[v120].renderFlags;
          while ( 1 )
          {
            v122 = v120 - 1;
            *(_QWORD *)viewDir.v = v120 - 1;
            v123 = v120 - 1;
            if ( v120 < 1 )
              goto LABEL_212;
            v124 = p_renderFlags - 5;
            do
            {
              v125 = (*p_renderFlags & 2) != 0;
              if ( (*p_renderFlags & 2) != 0 )
              {
                if ( (*v124 & 2) != 0 )
                  goto LABEL_210;
              }
              else if ( (*v124 & 2) == 0 )
              {
                goto LABEL_210;
              }
              v126 = LUI_Render_GetCurrentUnitScale();
              v127 = *(float *)&v126;
              v128 = DCONST_DVARFLT_cg_playerNameplatesChevronHeight;
              if ( !DCONST_DVARFLT_cg_playerNameplatesChevronHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronHeight") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v128);
              v129 = DCONST_DVARFLT_cg_playerNameplatesNameFontHeight;
              if ( !DCONST_DVARFLT_cg_playerNameplatesNameFontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesNameFontHeight") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v129);
              _XMM0 = v129->current.unsignedInt;
              __asm { vmaxss  xmm1, xmm0, xmm7 }
              v132 = DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth;
              if ( !DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateOverlapCullingWidth") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v132);
              _XMM0 = (unsigned int)p_renderFlags[3];
              if ( (float)(v127 * v132->current.value) > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)p_renderFlags + 2) - *((float *)v124 + 2)) & _xmm) && (float)(*(float *)&_XMM1 * v127) > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM0 - *((float *)v124 + 3)) & _xmm) )
              {
                if ( v125 )
                  *p_renderFlags |= 4u;
                else
                  *v124 |= 4u;
              }
LABEL_210:
              v124 -= 5;
              --v123;
            }
            while ( v123 >= 0 );
            v122 = *(_QWORD *)viewDir.v;
LABEL_212:
            v120 = v122;
            p_renderFlags -= 5;
            if ( v122 <= 0 )
            {
              v83 = localClientNuma;
              v54 = v330;
              break;
            }
          }
        }
      }
    }
    v134 = 0;
    if ( m_isMLGSpectator )
    {
      CameraManager = CgMLGSpectator::GetCameraManager(cgameGlob->m_mlgSpectatorPtr);
      if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, v83) == AERIAL )
        v134 = 1;
    }
    v313 = v134;
    v135 = v54 <= 0;
    v136 = options;
    if ( !v135 )
    {
      v137 = 0i64;
      *(_QWORD *)viewDir.v = 0i64;
      v138 = FLOAT_0_5;
      while ( 1 )
      {
        v139 = v137;
        entityNum = _First[v137].entityNum;
        v319 = entityNum;
        v141 = _First[v137].renderFlags;
        v142 = v141 >> 1;
        LOBYTE(v142) = (v141 & 2) != 0;
        v321 = v142;
        isFriendly = v142;
        v143 = v136->gameMode == NAMEPLATE_MODE_BR && (v141 & 2) != 0 || v134;
        v312 = v143;
        v144 = 0;
        v145 = (v141 & 4) != 0;
        if ( !v143 )
          v144 = v145;
        if ( v144 || entityNum == 2047 || v327 && !(_BYTE)v142 )
          goto LABEL_569;
        v341 = 88i64 * entityNum;
        v146 = entityNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(entityCharacterInfo) = v83;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", entityCharacterInfo) )
            __debugbreak();
        }
        if ( v83 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(entityCharacterInfo) = CgEntitySystem::ms_allocatedCount;
          LODWORD(entity) = v83;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v83] )
        {
          LODWORD(entityCharacterInfo) = v83;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", entityCharacterInfo) )
            __debugbreak();
        }
        v147 = CgEntitySystem::ms_entitySystemArray[v83];
        if ( (unsigned int)v146 >= 0x800 )
        {
          LODWORD(entityCharacterInfo) = 2048;
          LODWORD(entity) = v146;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        cent = &v147->m_entities[v146];
        v148 = _First[v139].renderFlags & 1;
        v149 = _First[v139].distanceSquared;
        distanceSquared = v149;
        screenPosition = _First[v139].screenPosition;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned int)v146 >= ComCharacterLimits::ms_gameData.m_characterCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_characterCount;
          LODWORD(entity) = v146;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2343, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        v150 = LocalClientStatics;
        v151 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !v151 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v151->IsMP(v151) )
        {
          if ( (unsigned int)v146 >= v151[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(entityCharacterInfo) = v151[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(entity) = v146;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
              __debugbreak();
          }
          v152 = (const characterInfo_t *)(*(_QWORD *)&v151[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v146);
        }
        else
        {
          v152 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v151, v146);
        }
        viewDirXYNormalized[0] = (vec2_t)v152;
        if ( !v152 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2345, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
          __debugbreak();
        LODWORD(v153) = 0;
        outScreenPosition.v[0] = 0.0;
        v154 = 0.0;
        outTop = 0.0;
        v155 = 0.0;
        outRight = 0.0;
        outBottom = 0.0;
        v156 = 0;
        LODWORD(CrosshairsTestResultWithWait) = -1;
        outDesiredAlpha = FLOAT_1_0;
        v157 = (int)v146 < cls.maxClients && v152->infoValid && Party_ClientIsInMyParty(v146);
        spawnAngleTestResult = BYTE2(cgameGlob[1].predictedPlayerState.inputTime);
        if ( cent->nextState.eType == ET_PLAYER )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          v158 = v319;
          if ( v319 >= ComCharacterLimits::ms_gameData.m_clientCount )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_clientCount;
            LODWORD(entity) = v158;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2367, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
              __debugbreak();
          }
          v159 = (__int64)v150->GetClientInfo(v150, v158);
          if ( !v159 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2369, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
            __debugbreak();
          LODWORD(CrosshairsTestResultWithWait) = *(_DWORD *)(v159 + 120) & 7;
          v307 = v355->squadIndex == *(_DWORD *)(v159 + 160);
        }
        else
        {
          v307 = 0;
        }
        v160 = localClientNuma;
        if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
        {
          LODWORD(cosSpawnAngle) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
          LODWORD(testSpawnAngle) = 2;
          LODWORD(entityCharacterInfo) = localClientNuma;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", entityCharacterInfo, testSpawnAngle, cosSpawnAngle) )
            __debugbreak();
        }
        if ( v160 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
        {
          LODWORD(entityCharacterInfo) = CgCompassSystem::ms_allocatedCount;
          LODWORD(entity) = v160;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        if ( !CgCompassSystem::ms_compassSystemArray[v160] )
        {
          LODWORD(entityCharacterInfo) = v160;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", entityCharacterInfo) )
            __debugbreak();
        }
        v161 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v160];
        if ( m_isMLGSpectator )
        {
          if ( v152->team == TEAM_TWO )
            CgCompassSystemMP::GetFriendlyCompassLightColor(v161, &color, (CgGlobalsMP *)cgameGlob);
          else
            CgCompassSystemMP::GetEnemyCompassLightColor(v161, &color, (CgGlobalsMP *)cgameGlob);
          v162 = v321;
          goto LABEL_361;
        }
        v163 = CL_Mgr_GetControllerFromClient(v160);
        v164 = GamerProfile_ColorBlindMode(v163);
        if ( (unsigned int)(CharacterInfo->team - 201) > 1 )
          goto LABEL_335;
        v165 = (CgGlobalsMP *)cgameGlob;
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v165->predictedPlayerState.otherFlags, ACTIVE, 0x21u) )
        {
LABEL_335:
          v162 = v321;
          if ( !v321 )
          {
            if ( v164 == 2 )
            {
              v171 = DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor;
              if ( !DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor )
              {
                v174 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDeuteranopiaEnemyColor");
LABEL_357:
                if ( v174 )
                  __debugbreak();
              }
              goto LABEL_359;
            }
            v175 = DVARBOOL_lui_ui_colorblind_swap_enabled;
            if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v175);
            if ( v175->current.enabled )
            {
              CgCompassSystemMP::GetEnemyCompassColor(v161, &color, (CgGlobalsMP *)cgameGlob);
              goto LABEL_361;
            }
            v171 = DCONST_DVARVEC4_cg_playerNameplatesEnemyColor;
            if ( !DCONST_DVARVEC4_cg_playerNameplatesEnemyColor )
            {
              v174 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesEnemyColor");
              goto LABEL_357;
            }
LABEL_359:
            Dvar_CheckFrontendServerThread(v171);
LABEL_360:
            color = v171->current.vector;
            goto LABEL_361;
          }
          v173 = options;
          if ( options->gameMode == NAMEPLATE_MODE_BR )
          {
            color = colorWhite;
            v167 = v307;
            goto LABEL_363;
          }
          v166 = !v157;
          v167 = v307;
          if ( !v166 || spawnAngleTestResult && v307 )
          {
            CgCompassSystemMP::GetPartyCompassColor(v161, &color, (CgGlobalsMP *)cgameGlob);
          }
          else if ( v164 == 2 )
          {
            Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor, "cg_playerNameplatesDeuteranopiaFriendlyColor", &color);
          }
          else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_ui_colorblind_swap_enabled, "lui_ui_colorblind_swap_enabled") )
          {
            CgCompassSystemMP::GetFriendlyCompassColor(v161, &color, (CgGlobalsMP *)cgameGlob);
          }
          else
          {
            Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor, "cg_playerNameplatesFriendlyColor", &color);
          }
        }
        else
        {
          if ( v152->team != TEAM_TWO )
          {
            if ( v164 == 2 )
            {
              v171 = DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor;
              if ( !DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDeuteranopiaEnemyColor") )
                __debugbreak();
            }
            else
            {
              v172 = DVARBOOL_lui_ui_colorblind_swap_enabled;
              if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v172);
              if ( v172->current.enabled )
              {
                CgCompassSystemMP::GetEnemyCompassColor(v161, &color, (CgGlobalsMP *)cgameGlob);
                v162 = v321;
LABEL_361:
                v167 = v307;
                goto LABEL_362;
              }
              v171 = DCONST_DVARVEC4_cg_playerNameplatesEnemyColor;
              if ( !DCONST_DVARVEC4_cg_playerNameplatesEnemyColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesEnemyColor") )
                __debugbreak();
            }
            Dvar_CheckFrontendServerThread(v171);
            v162 = v321;
            goto LABEL_360;
          }
          v166 = !v157;
          v167 = v307;
          if ( !v166 || spawnAngleTestResult && v307 )
          {
            CgCompassSystemMP::GetPartyCompassColor(v161, &color, v165);
            v162 = v321;
            goto LABEL_362;
          }
          v168 = DVARBOOL_lui_ui_colorblind_swap_enabled;
          if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v168);
          if ( !v168->current.enabled )
          {
            if ( v164 == 2 )
            {
              v169 = DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor;
              if ( !DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor )
              {
                v170 = "cg_playerNameplatesDeuteranopiaFriendlyColor";
LABEL_315:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v170) )
                  __debugbreak();
              }
            }
            else
            {
              v169 = DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor;
              if ( !DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor )
              {
                v170 = "cg_playerNameplatesFriendlyColor";
                goto LABEL_315;
              }
            }
            Dvar_CheckFrontendServerThread(v169);
            color = v169->current.vector;
            v162 = v321;
            goto LABEL_362;
          }
          CgCompassSystemMP::GetFriendlyCompassColor(v161, &color, (CgGlobalsMP *)cgameGlob);
          v162 = v321;
        }
LABEL_362:
        v173 = options;
LABEL_363:
        memset((char *)v369 + 4, 0, 24);
        *(_QWORD *)&scaleSettings[4] = 0i64;
        *(_QWORD *)&scaleSettings[12] = 0i64;
        if ( !v162 )
        {
          v176 = _xmm;
          v177 = PTRDIFF|0x20;
          LODWORD(v369[1]) = -1;
          DWORD2(v369[1]) = 40;
          goto LABEL_369;
        }
        if ( spawnAngleTestResult && v167 )
        {
          v176 = _xmm;
          v177 = LONG;
          LODWORD(v369[1]) = 5;
          DWORD2(v369[1]) = 34;
LABEL_369:
          DWORD1(v369[1]) = v177;
          goto LABEL_370;
        }
        v176 = _xmm;
        v177 = NONE;
        *(_QWORD *)&v369[1] = 2i64;
        DWORD2(v369[1]) = 33;
LABEL_370:
        v369[0] = v176;
        v178 = 0;
        v179 = (int *)v369;
        v180 = v321;
        v181 = hasMarksmanPerk;
        do
        {
          v182 = *v179;
          if ( (_DWORD)v182 == -1 )
            goto LABEL_378;
          v183 = LODWORD(v173->nameplateSettings[v182]);
          if ( *(float *)&v183 < 0.0 )
            goto LABEL_377;
          if ( v181 && !v180 )
          {
            *(double *)&v176 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameDistanceScale, "perk_marksmanNameDistanceScale");
            v184 = v176;
            *(float *)&v184 = *(float *)&v176 * *(float *)&v183;
            v183 = v184;
            v173 = options;
          }
          *((_QWORD *)&v176 + 1) = *((_QWORD *)&v183 + 1);
          if ( v149 > (float)(*(float *)&v183 * *(float *)&v183) )
LABEL_378:
            v156 &= ~(1 << v178);
          else
LABEL_377:
            v156 |= 1 << v178;
          ++v178;
          ++v179;
        }
        while ( v178 < 7 );
        LODWORD(entityData) = v156;
        v185 = v321;
        if ( v321 )
        {
          if ( spawnAngleTestResult && v307 )
          {
            _XMM0 = _xmm;
            *(_DWORD *)&scaleSettings[16] = 36;
          }
          else
          {
            _XMM0 = _xmm;
            *(_DWORD *)&scaleSettings[16] = 35;
          }
        }
        else
        {
          _XMM0 = _xmm;
          *(_DWORD *)&scaleSettings[16] = -1;
        }
        *(_OWORD *)scaleSettings = _XMM0;
        v136 = options;
        v186 = ComputeNameplateScaleByDistance(options, (NameplateSetting *)scaleSettings, &distanceSquared);
        if ( cgameGlob->scopeBoundingCircleValid && (float)((float)((float)(cgameGlob->scopeBoundingCircle.v[1] - screenPosition.v[1]) * (float)(cgameGlob->scopeBoundingCircle.v[1] - screenPosition.v[1])) + (float)((float)(cgameGlob->scopeBoundingCircle.v[0] - screenPosition.v[0]) * (float)(cgameGlob->scopeBoundingCircle.v[0] - screenPosition.v[0]))) > cgameGlob->scopeBoundingCircle.v[2] )
          goto LABEL_567;
        if ( !v185 || !v148 || (useFastPosition = 1, (v156 & 6) == 0) )
          useFastPosition = 0;
        v187 = (__int64)&v136->playerEntities[0].traceState + v341;
        if ( !*(&v136->playerEntities[0].traceState.initialized + v341) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 462, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        v188 = *(_DWORD *)(v187 + 4) ^ v187;
        clientNum = v188 * (v188 + 2);
        v189 = *(_BYTE *)v187 ^ (v188 * (v188 + 2)) ^ ((unsigned __int16)(v188 * (v188 + 2)) >> 8);
        v315 = v189;
        if ( !*(_BYTE *)(v187 + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 462, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        v190 = ((*(_DWORD *)(v187 + 4) ^ (unsigned int)v187) * ((*(_DWORD *)(v187 + 4) ^ (unsigned int)v187) + 2)) >> 8;
        LOBYTE(v190) = ((*(_BYTE *)(v187 + 4) ^ v187) * ((*(_BYTE *)(v187 + 4) ^ v187) + 2)) ^ ((unsigned __int16)((*(_WORD *)(v187 + 4) ^ v187) * ((*(_WORD *)(v187 + 4) ^ v187) + 2)) >> 8);
        clientNum = v190;
        v191 = *(_BYTE *)v187;
        v315 = v191;
        LOBYTE(outDesiredAlpha) = v191 ^ v190;
        if ( v148 && !v321 && v189 == 3 && (_BYTE)v190 != v191 )
        {
          v136->enemyVisibleTime = cgameGlob->time;
          LUI_Model_SetBool(v348, 1);
        }
        v192 = 0i64;
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *(float *)&v192 = (float)v136->deltaTime * 0.0080000004;
        _XMM1 = v192;
        __asm { vmaxss  xmm2, xmm1, cs:__real@3dcccccd }
        v195 = LODWORD(FLOAT_1_0);
        __asm { vminss  xmm10, xmm2, xmm7 }
        v197 = 0;
        IsElementSnapping = 0;
        v199 = CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead(*(const characterInfo_t *const *)viewDirXYNormalized, cent);
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v199 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
          v197 = 1;
        eType = cent->nextState.eType;
        if ( eType != ET_PLAYER )
        {
          if ( v197 )
            goto LABEL_507;
          goto LABEL_515;
        }
        if ( v197 )
          goto LABEL_507;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v200 = v319;
        if ( v319 >= ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(entity) = v200;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2527, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        v201 = LocalClientStatics->GetClientInfo(LocalClientStatics, v200);
        if ( !v201 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2529, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
          __debugbreak();
        *(float *)&_XMM8 = v186;
        v203 = v315;
        if ( (_BYTE)v190 != v315 || !v321 || spawnAngleTestResult && v307 )
        {
          v204 = options;
        }
        else
        {
          v204 = options;
          *(float *)&v195 = options->nameplateSettings[43];
        }
        v205 = v189 == 3 && ((unsigned __int8)entityData & 2) != 0;
        v206 = (_BYTE)v190 == v315 && ((unsigned __int8)entityData & 0x20) != 0;
        if ( useFastPosition )
        {
          _XMM0 = LODWORD(v204->nameplateSettings[*(int *)&scaleSettings[16]]);
          __asm { vmaxss  xmm8, xmm0, xmm11 }
          v208 = ComputeAlphaForNameplateElement(v204, SDWORD2(v369[1]), &distanceSquared, &hasMarksmanPerk, &isFriendly, 1.0);
        }
        else if ( v205 )
        {
          v208 = ComputeAlphaForNameplateElement(v204, SDWORD1(v369[0]), &distanceSquared, &hasMarksmanPerk, &isFriendly, *(const float *)&v195);
        }
        else if ( v206 )
        {
          v208 = ComputeAlphaForNameplateElement(v204, v177, &distanceSquared, &hasMarksmanPerk, &isFriendly, *(const float *)&v195);
        }
        else
        {
          v208 = 0.0;
        }
        v209 = (float *)((char *)&v204->playerEntities[0].scale + v341);
        v211 = LODWORD(FLOAT_1_0);
        *(float *)&v211 = 1.0 - *(float *)&_XMM10;
        v210 = v211;
        *v209 = (float)((float)(1.0 - *(float *)&_XMM10) * *v209) + (float)(*(float *)&_XMM10 * *(float *)&_XMM8);
        v212 = localClientNuma;
        offsetYScalar = LUIElement_PlayerNameplates_GetScalarScreenOffsetY(localClientNuma, scrPlace, cent);
        GenerateChevronVerts((float *)&outScreenPosition, &outRight, &outTop, &outBottom, &screenPosition, v209, &unitScale, &offsetYScalar);
        offsetYScalar = outRight;
        position.v[0] = outRight;
        v336 = (float)((float)(outBottom - outTop) * 0.5) + outTop;
        position.v[1] = v336;
        IsElementSnapping = LUIElement_PlayerNameplates_IsElementSnapping(v212, &isFriendly, (float *)&outScreenPosition, &outTop, &outRight, &outBottom);
        if ( IsElementSnapping )
        {
          if ( !spawnAngleTestResult || (v213 = LONG_DOUBLE|SIZE_T, !v307) )
            v213 = LONG_DOUBLE|LONG_LONG;
          v208 = ComputeAlphaForNameplateElement(options, v213, &distanceSquared, &hasMarksmanPerk, &isFriendly, *(const float *)&v195);
        }
        if ( v312 )
        {
          outDesiredAlpha = FLOAT_1_0;
          LUIElement_PlayerNameplates_CenterFadeAlpha(localClientNuma, options, &position, v321, &outDesiredAlpha);
          v208 = outDesiredAlpha;
        }
        v214 = options;
        v215 = v341;
        *(float *)&v211 = *(float *)&v211 * *(float *)((char *)&options->playerEntities[0].chevronAlpha + v341);
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v211 + 1);
        *(float *)((char *)&options->playerEntities[0].chevronAlpha + v341) = (float)(*(float *)&_XMM10 * v208) + *(float *)&v211;
        color.v[3] = (float)(*(float *)&_XMM10 * v208) + *(float *)&v211;
        v153 = LODWORD(outScreenPosition.v[0]);
        v154 = outTop;
        v155 = outRight;
        v35 = outBottom;
        v216 = 0.0;
        if ( v214->shouldDisplayChevron && *(float *)((char *)&v214->playerEntities[0].chevronAlpha + v215) != 0.0 )
        {
          gameMode = v214->gameMode;
          if ( (((gameMode - 1) & 0xFFFFFFFD) == 0 || gameMode == NAMEPLATE_MODE_GW && v307) && (int)CrosshairsTestResultWithWait > 0 && v321 )
          {
            LUI_CoD_GameMP_GetBrColorForIndex((const int)CrosshairsTestResultWithWait, &v366);
            v366.v[3] = color.v[3];
            v218 = options;
            gameMode = options->gameMode;
          }
          else
          {
            v366 = color;
            v218 = v214;
          }
          if ( gameMode == NAMEPLATE_MODE_BR && (UnpackValue(v201->game_extrainfo, 6u, 0xAu) & 0x80) != 0 )
            material = v218->imgMostWanted;
          else
            material = NULL;
          *(vec4_t *)viewDirXYNormalized[0].v = v366;
          v220 = LUIElement_PlayerNameplates_GetData(elementa, v339);
          *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v153 + 1);
          LUI_CoD_GenerateQuadVerts(*(float *)&v153, v154, v155, v35, (vec4_t (*)[4])quadVerts);
          if ( !material )
          {
            if ( v321 )
              material = v220->imgChevronFriendly;
            else
              material = v220->imgChevronEnemy;
          }
          LUI_Render_DrawImage(localClientNuma, elementa, v339, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, (const vec4_t *)viewDirXYNormalized, material);
          LOBYTE(v190) = clientNum;
          v203 = v315;
          v214 = options;
          v215 = v341;
        }
        if ( v214->shouldDisplayRank )
        {
          v221 = *(float *)((char *)&v214->playerEntities[0].chevronAlpha + v215);
          if ( v221 != 0.0 )
          {
            v365.v[0] = colorWhite.v[0];
            v365.v[1] = colorWhite.v[1];
            _XMM0 = LODWORD(colorWhite.v[2]);
            v365.v[2] = colorWhite.v[2];
            v365.v[3] = v221;
            LUIElement_PlayerNameplates_DrawRankIcon(localClientNuma, v201, elementa, v339, &v365, &screenPosition, *v209);
            v214 = options;
          }
        }
        if ( v201->perkIconName )
        {
          *(float *)&_XMM7 = v186;
          v223 = v189 == 3 && ((unsigned __int8)entityData & 4) != 0;
          v224 = (_BYTE)v190 == v203 && ((unsigned __int8)entityData & 0x10) != 0;
          if ( useFastPosition )
          {
            _XMM0 = LODWORD(v214->nameplateSettings[*(int *)&scaleSettings[16]]);
            __asm { vmaxss  xmm7, xmm0, xmm11 }
            v226 = DWORD2(v369[1]);
            goto LABEL_486;
          }
          if ( v223 )
          {
            v226 = DWORD2(v369[0]);
            goto LABEL_486;
          }
          if ( v224 )
          {
            v226 = v369[1];
LABEL_486:
            v216 = ComputeAlphaForNameplateElement(v214, v226, &distanceSquared, &hasMarksmanPerk, &isFriendly, 1.0);
          }
          *v209 = (float)(*(float *)&v210 * *v209) + (float)(*(float *)&_XMM10 * *(float *)&_XMM7);
          GeneratePerkVerts((float *)&outScreenPosition, &outRight, &outTop, &outBottom, &screenPosition, v209, &unitScale);
          v227 = localClientNuma;
          IsElementSnapping = LUIElement_PlayerNameplates_IsElementSnapping(localClientNuma, &isFriendly, (float *)&outScreenPosition, &outTop, &outRight, &outBottom);
          if ( IsElementSnapping )
          {
            if ( spawnAngleTestResult && v307 )
            {
              v228 = FLOAT_1_0;
              v216 = ComputeAlphaForNameplateElement(options, LONG_DOUBLE|PTRDIFF, &distanceSquared, &hasMarksmanPerk, &isFriendly, 1.0);
            }
            else
            {
              v228 = FLOAT_1_0;
              v216 = ComputeAlphaForNameplateElement(options, LONG_DOUBLE|MAX_INT, &distanceSquared, &hasMarksmanPerk, &isFriendly, 1.0);
            }
          }
          else
          {
            v228 = FLOAT_1_0;
          }
          *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v210 + 1);
          v229 = (float)(*(float *)&_XMM10 * v216) + (float)(*(float *)&v210 * *(float *)((char *)&options->playerEntities[0].perkAlpha + v341));
          *(float *)((char *)&options->playerEntities[0].perkAlpha + v341) = v229;
          if ( v229 == 0.0 )
          {
            *(float *)&v153 = outScreenPosition.v[0];
            v154 = outTop;
            v155 = outRight;
            v35 = outBottom;
          }
          else
          {
            color.v[3] = v229;
            v230 = LUIElement_PlayerNameplates_GetData(elementa, v339);
            if ( !v230 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1152, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
              __debugbreak();
            v231 = v319;
            perkIconName = v201->perkIconName;
            if ( perkIconName != v230->perkIndexCache[v319] || !v230->perkImageCache[v319] )
            {
              v230->perkIndexCache[v319] = perkIconName;
              if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_IMAGE, v201->perkIconName, (const char **)&outOrigin) && *(_QWORD *)outOrigin.v && **(_BYTE **)outOrigin.v )
                v230->perkImageCache[v231] = Image_Register(*(const char **)outOrigin.v, IMAGE_TRACK_HUD);
            }
            v35 = outBottom;
            v155 = outRight;
            v154 = outTop;
            *(float *)&v153 = outScreenPosition.v[0];
            _XMM0 = LODWORD(outScreenPosition.v[0]);
            LUI_CoD_GenerateQuadVerts(outScreenPosition.v[0], outTop, outRight, outBottom, (vec4_t (*)[4])quadVerts);
            LUI_Render_DrawImage(v227, elementa, v339, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, v228, v228, &color, v230->perkImageCache[v231]);
          }
        }
        if ( IsElementSnapping )
        {
          v138 = FLOAT_0_5;
LABEL_507:
          if ( options->gameMode == NAMEPLATE_MODE_BR && IsElementSnapping && !v197 )
          {
            offsetYScalar = (float)((float)(v155 - *(float *)&v153) * v138) + *(float *)&v153;
            v336 = (float)((float)(v35 - v154) * v138) + v154;
            alignX = 0;
            alignY = 1;
            if ( (float)((float)(*(float *)&v153 - scrPlace->realAdjustableMin.v[0]) * (float)(*(float *)&v153 - scrPlace->realAdjustableMin.v[0])) >= 0.0000010000001 )
            {
              if ( (float)((float)(v155 - scrPlace->realAdjustableMax.v[0]) * (float)(v155 - scrPlace->realAdjustableMax.v[0])) >= 0.0000010000001 )
              {
                alignX = 1;
                position.v[0] = (float)((float)(v155 - *(float *)&v153) * v138) + *(float *)&v153;
                if ( (float)((float)(v154 - scrPlace->realAdjustableMin.v[1]) * (float)(v154 - scrPlace->realAdjustableMin.v[1])) >= 0.0000010000001 )
                {
                  v336 = v154;
                  position.v[1] = v154;
                  alignY = 12;
                }
                else
                {
                  v336 = v35;
                  position.v[1] = v35;
                  alignY = 4;
                }
              }
              else
              {
                offsetYScalar = *(float *)&v153;
                position.v[0] = *(float *)&v153;
                v336 = (float)((float)(v35 - v154) * v138) + v154;
                position.v[1] = v336;
                alignX = 2;
              }
            }
            else
            {
              offsetYScalar = v155;
              position.v[0] = v155;
              position.v[1] = (float)((float)(v35 - v154) * v138) + v154;
            }
            screenPosition = position;
            v136 = options;
            v256 = (float *)((char *)&options->playerEntities[0].scale + v341);
            v257 = v319;
            v258 = LUI_PLAYER_NAMEPLATES_FONT;
            v259 = v339;
            v260 = elementa;
            v83 = localClientNuma;
            LUIElement_PlayerNameplates_DrawPlayerName(localClientNuma, elementa, roota, v339, &color, LUI_PLAYER_NAMEPLATES_FONT, v319, &screenPosition, *v256, &glowStyle, 0, alignX, alignY);
            _XMM0 = LODWORD(v136->nameplateSettings[25]);
            v35 = 0.0;
            if ( *(float *)&_XMM0 > 0.0 && spawnAngleTestResult && v307 )
            {
              clientNum = v257;
              LUIElement_PlayerNameplates_DrawPlayerDistance(cent, (SecureVec3 *)&outOrg, &screenPosition, v256, &clientNum, v258, &v337, v259, v260, &color, &glowStyle, 0);
              v83 = v337;
              localClientNuma = v337;
            }
            goto LABEL_569;
          }
          v136 = options;
LABEL_567:
          v35 = 0.0;
          goto LABEL_568;
        }
        v195 = LODWORD(FLOAT_1_0);
        LOBYTE(v190) = clientNum;
        v191 = v315;
LABEL_515:
        *(float *)&_XMM6 = v186;
        v236 = v189 == 3 && ((unsigned __int8)entityData & 1) != 0;
        v237 = (_BYTE)v190 == v191 && ((unsigned __int8)entityData & 8) != 0;
        v136 = options;
        if ( useFastPosition )
        {
          _XMM0 = LODWORD(options->nameplateSettings[*(int *)&scaleSettings[16]]);
          __asm { vmaxss  xmm6, xmm0, xmm11 }
          v239 = ComputeAlphaForNameplateElement(options, SDWORD2(v369[1]), &distanceSquared, &hasMarksmanPerk, &isFriendly, *(const float *)&v195);
        }
        else if ( v236 )
        {
          v239 = ComputeAlphaForNameplateElement(options, v369[0], &distanceSquared, &hasMarksmanPerk, &isFriendly, *(const float *)&v195);
        }
        else if ( v237 )
        {
          v239 = ComputeAlphaForNameplateElement(options, SHIDWORD(v369[0]), &distanceSquared, &hasMarksmanPerk, &isFriendly, *(const float *)&v195);
        }
        else
        {
          v239 = 0.0;
        }
        v35 = 0.0;
        v240 = v312;
        v241 = v321;
        v242 = localClientNuma;
        if ( v312 )
        {
          outDesiredAlpha = *(float *)&v195;
          LUIElement_PlayerNameplates_CenterFadeAlpha(localClientNuma, v136, &position, v321, &outDesiredAlpha);
          v239 = outDesiredAlpha;
          v240 = v312;
        }
        v243 = v341;
        v244 = (float *)((char *)&v136->playerEntities[0].scale + v341);
        *v244 = (float)((float)(*(float *)&v195 - *(float *)&_XMM10) * *v244) + (float)(*(float *)&_XMM10 * *(float *)&_XMM6);
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v195 + 1);
        v245 = (float)(*(float *)&_XMM10 * v239) + (float)((float)(*(float *)&v195 - *(float *)&_XMM10) * *(float *)((char *)&v136->playerEntities[0].nameAlpha + v243));
        *(float *)((char *)&v136->playerEntities[0].nameAlpha + v243) = v245;
        if ( v245 <= 0.001 || v324 )
        {
          if ( v240 && !v324 )
          {
            distanceString[0] = 0;
            LUIElement_PlayerNameplates_GetDistanceString(distanceString, 128, &cent->pose, (SecureVec3 *)&outOrg);
            CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
            if ( v319 < cls.maxClients || v319 >= CharacterMaxCount )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetX, "cg_playerNameplatesNameOffsetX");
              v250 = *(float *)&Float_Internal_DebugName;
            }
            else
            {
              v250 = 0.0;
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetY, "cg_playerNameplatesNameOffsetY");
            v252 = *(float *)&_XMM0;
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameFontHeight, "cg_playerNameplatesNameFontHeight");
            v253 = _XMM0;
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameTextWidth, "cg_playerNameplatesNameTextWidth");
            v254 = *v244;
            screenPosition = position;
            v255 = unitScale;
            LUI_CoD_GenerateQuadVerts((float)((float)(v254 * v250) * unitScale) + offsetYScalar, (float)(v252 + v336) - (float)((float)((float)(*(float *)&v253 * 0.5) * v254) * unitScale), (float)((float)(v254 * *(float *)&_XMM0) * unitScale) + (float)(v250 + offsetYScalar), (float)((float)((float)(*(float *)&v253 * 0.5) * v254) * unitScale) + (float)(v252 + v336), (vec4_t (*)[4])quadVerts);
            *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v253 + 1);
            v35 = 0.0;
            LUI_Render_DrawText(v242, v339, elementa, (const vec4_t (*)[4])quadVerts, &color, LUI_PLAYER_NAMEPLATES_FONT, distanceString, 0, 0, 0.0, (int)(float)(*(float *)&v253 * v255), NULL, &glowStyle);
            v83 = localClientNuma;
            goto LABEL_569;
          }
        }
        else
        {
          color.v[3] = v245;
          screenPosition = position;
          v246 = v319;
          v247 = elementa;
          LUIElement_PlayerNameplates_DrawPlayerName(v242, elementa, roota, v339, &color, LUI_PLAYER_NAMEPLATES_FONT, v319, &screenPosition, *v244, &glowStyle, 0, 0, 1);
          _XMM0 = LODWORD(v136->nameplateSettings[25]);
          if ( *(float *)&_XMM0 > 0.0 && spawnAngleTestResult && v307 )
          {
            clientNum = v246;
            LUIElement_PlayerNameplates_DrawPlayerDistance(cent, (SecureVec3 *)&outOrg, &screenPosition, v244, &clientNum, LUI_PLAYER_NAMEPLATES_FONT, &v337, v339, v247, &color, &glowStyle, 0);
            v242 = v337;
            localClientNuma = v337;
          }
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v246 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
          {
            v248 = LocalClientStatics->GetClientInfo(LocalClientStatics, (unsigned int)v246);
            if ( !v248 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2685, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
              __debugbreak();
            if ( !v241 && eType == ET_PLAYER && HasPerk && v248->bountyCount > 0 )
            {
              Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesBountyIconColor, "cg_playerNameplatesBountyIconColor", &result);
              result.v[3] = *(float *)((char *)&v136->playerEntities[0].nameAlpha + v243);
              _XMM0 = LODWORD(unitScale);
              LUIElement_PlayerNameplates_DrawBounties(v242, v247, v339, &result, v248->bountyCount, &screenPosition, v186, unitScale, v136->imgBounty);
            }
          }
        }
LABEL_568:
        v83 = localClientNuma;
LABEL_569:
        v137 = *(_QWORD *)viewDir.v + 1i64;
        *(_QWORD *)viewDir.v = v137;
        v138 = FLOAT_0_5;
        v134 = v313;
        if ( v137 >= v330 )
        {
          v81 = outOrg.v[1];
          v82 = outOrg.v[0];
          v119 = _xmm;
          v34 = FLOAT_1_0;
          break;
        }
      }
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_friendlyReviveNameplateEnabled, "cg_friendlyReviveNameplateEnabled") && !CG_GameInterface_PlayingGroundWar() )
    {
      NextSnap = CG_SnapshotMP_GetNextSnap(v83);
      v330 = (__int64)NextSnap;
      distanceSquared = 0.0;
      if ( NextSnap->numEntities > 0 )
      {
        entities = (centity_t *)NextSnap->entities;
        cent = (centity_t *)NextSnap->entities;
        v263 = distanceSquared;
        v264 = v330;
        while ( *(_WORD *)&entities->pose.ragdollFlags == 2 )
        {
LABEL_635:
          ++LODWORD(v263);
          distanceSquared = v263;
          entities = (centity_t *)((char *)entities + 248);
          cent = entities;
          if ( SLODWORD(v263) >= *(_DWORD *)(v264 + 24) )
            goto LABEL_636;
        }
        LODWORD(CrosshairsTestResultWithWait) = *(__int16 *)&entities->pose.eType;
        v265 = localClientNuma;
        v266 = CG_GetEntity(localClientNuma, (const int)CrosshairsTestResultWithWait);
        if ( (v266->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2819, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( !CG_Entity_IsNoDraw(v265, &v266->nextState, ps) && v266->nextState.eType == ET_SCRIPTMOVER )
        {
          v267 = v266->nextState.clientNum;
          if ( v267 )
          {
            LODWORD(v268) = v267 - 1;
            unitScale = v268;
            if ( SLODWORD(v268) < cls.maxClients )
            {
              v269 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
              if ( !v269 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( v269->IsMP(v269) )
              {
                if ( LODWORD(v268) >= v269[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(entityCharacterInfo) = v269[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  *(float *)&entity = v268;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
                    __debugbreak();
                }
                v270 = (const characterInfo_t *)(*(_QWORD *)&v269[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * SLODWORD(v268));
              }
              else
              {
                v270 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v269, SLODWORD(v268));
              }
              v271 = v270->team;
              v272 = CharacterInfo->team;
              v273 = cgameGlob;
              if ( cgameGlob == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
                __debugbreak();
              if ( v266 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v272 && v272 == v271 )
              {
                v313 = 1;
                v274 = LocalClientStatics->GetClientInfo(LocalClientStatics, LODWORD(v268));
                if ( !v274 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2851, ASSERT_TYPE_ASSERT, "(reviveClientInfo)", (const char *)&queryFormat, "reviveClientInfo") )
                  __debugbreak();
                v275 = BYTE2(v273[1].predictedPlayerState.inputTime);
                squadIndex = v355->squadIndex;
                v277 = v274->squadIndex;
                v278 = localClientNuma;
                if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
                {
                  LODWORD(cosSpawnAngle) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
                  LODWORD(testSpawnAngle) = 2;
                  LODWORD(entityCharacterInfo) = localClientNuma;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", entityCharacterInfo, testSpawnAngle, cosSpawnAngle) )
                    __debugbreak();
                }
                if ( v278 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
                {
                  LODWORD(entityCharacterInfo) = CgCompassSystem::ms_allocatedCount;
                  LODWORD(entity) = v278;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
                    __debugbreak();
                }
                if ( !CgCompassSystem::ms_compassSystemArray[v278] )
                {
                  LODWORD(entityCharacterInfo) = v278;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", entityCharacterInfo) )
                    __debugbreak();
                }
                v279 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v278];
                if ( v275 && squadIndex == v277 )
                {
                  v280 = cgameGlob;
                  CgCompassSystemMP::GetPartyCompassColor(v279, &color, (CgGlobalsMP *)cgameGlob);
                }
                else
                {
                  v281 = DVARBOOL_lui_ui_colorblind_swap_enabled;
                  if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v281);
                  if ( v281->current.enabled )
                  {
                    v280 = cgameGlob;
                    CgCompassSystemMP::GetFriendlyCompassColor(v279, &color, (CgGlobalsMP *)cgameGlob);
                  }
                  else
                  {
                    Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor, "cg_playerNameplatesFriendlyColor", &color);
                    v280 = cgameGlob;
                  }
                }
                v282 = LUIElement_PlayerNameplates_DistanceToEntitySq(&outOrg, v266);
                v283 = *(float *)&v282;
                clientNum = SLODWORD(v282);
                v136 = options;
                v284 = LODWORD(options->nameplateSettings[41]);
                if ( *(float *)&v284 >= 0.0 )
                {
                  if ( !hasMarksmanPerk )
                  {
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameDistanceScale, "perk_marksmanNameDistanceScale");
                    v285 = _XMM0;
                    *(float *)&v285 = *(float *)&_XMM0 * *(float *)&v284;
                    v284 = v285;
                  }
                  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v284 + 1);
                  if ( v283 > (float)(*(float *)&v284 * *(float *)&v284) )
                    goto LABEL_626;
                }
                CG_GetPoseOrigin(&v266->pose, &outOrigin);
                viewDir.v[0] = outOrigin.v[0] - v82;
                v286 = outOrigin.v[1] - v81;
                viewDir.v[1] = outOrigin.v[1] - v81;
                vectoyaw((const vec2_t *)&viewDir);
                v287 = v136->nameplateSettings[42];
                _XMM0 = LODWORD(v280->predictedPlayerState.viewangles.v[1]);
                *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, v286);
                memset(&outOrigin, 0, sizeof(outOrigin));
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM0 * 2.0) & v119) <= v287 )
                {
                  color.v[3] = ComputeAlphaForNameplateElement(v136, LONG_DOUBLE|HALF|0x20, (const float *)&clientNum, &hasMarksmanPerk, &v313, v34);
                  *(_QWORD *)&scaleSettings[4] = 0i64;
                  *(_QWORD *)&scaleSettings[12] = 0i64;
                  if ( v275 && squadIndex == v277 )
                  {
                    _XMM0 = _xmm;
                    *(_DWORD *)&scaleSettings[16] = 36;
                  }
                  else
                  {
                    _XMM0 = _xmm;
                    *(_DWORD *)&scaleSettings[16] = 35;
                  }
                  *(_OWORD *)scaleSettings = _XMM0;
                  v288 = ComputeNameplateScaleByDistance(v136, (NameplateSetting *)scaleSettings, (const float *)&clientNum);
                  *(float *)&clientNum = v288;
                  HasPerk = 0;
                  LUIElement_PlayerNameplates_GetScreenPosition(localClientNuma, scrPlace, &v136->playerEntities[SLODWORD(v268)], (const int)CrosshairsTestResultWithWait, viewDirXYNormalized, &HasPerk);
                  entityCharacterInfoa = LODWORD(v268);
                  v289 = LUI_PLAYER_NAMEPLATES_FONT;
                  v290 = v339;
                  v291 = elementa;
                  LUIElement_PlayerNameplates_DrawPlayerName(localClientNuma, elementa, roota, v339, &color, LUI_PLAYER_NAMEPLATES_FONT, entityCharacterInfoa, viewDirXYNormalized, v288, &glowStyle, 1, 0, 1);
                  LUIElement_PlayerNameplates_DrawPlayerDistance(v266, (SecureVec3 *)&outOrg, viewDirXYNormalized, (const float *)&clientNum, (const int *)&unitScale, v289, &v337, v290, v291, &color, &glowStyle, 1);
                  v81 = outOrg.v[1];
                  v82 = outOrg.v[0];
                  localClientNuma = v337;
                  entities = cent;
                }
                else
                {
LABEL_626:
                  entities = cent;
                }
                goto LABEL_634;
              }
              v313 = 0;
            }
          }
        }
        v136 = options;
LABEL_634:
        v264 = v330;
        v263 = distanceSquared;
        goto LABEL_635;
      }
    }
LABEL_636:
    if ( !enabled || v320 )
      v292 = 0.0;
    else
      v292 = v346;
    if ( !enabled || v325 )
      v293 = 0.0;
    else
      v293 = *(float *)&v350;
    underCrosshairsTestId = v136->crosshairsData.underCrosshairsTestId;
    v295 = v136->crosshairsData.localClientNum;
    if ( enabled )
    {
      v136->crosshairsData.underCrosshairsTestId = CG_PlayerVisibilityMP_UpdateCrosshairsTest(v295, underCrosshairsTestId, 1, 1, 18.0, 0.0, 0.0);
      friendlySpawnAngleTestId = v136->crosshairsData.friendlySpawnAngleTestId;
      v297 = v136->crosshairsData.localClientNum;
      if ( v293 == 0.0 )
      {
        CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v297, friendlySpawnAngleTestId);
        updated = CG_PlayerVisibilityMP_CopyCrosshairsTest((const LocalClientNum_t)v136->crosshairsData.localClientNum, v136->crosshairsData.underCrosshairsTestId);
      }
      else
      {
        updated = CG_PlayerVisibilityMP_UpdateCrosshairsTest(v297, friendlySpawnAngleTestId, 1, 0, 18.0, 0.0, v293);
      }
      v136->crosshairsData.friendlySpawnAngleTestId = updated;
      enemySpawnAngleTestId = v136->crosshairsData.enemySpawnAngleTestId;
      v300 = v136->crosshairsData.localClientNum;
      if ( v292 == 0.0 )
      {
        CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v300, enemySpawnAngleTestId);
        v301 = CG_PlayerVisibilityMP_CopyCrosshairsTest((const LocalClientNum_t)v136->crosshairsData.localClientNum, v136->crosshairsData.underCrosshairsTestId);
      }
      else
      {
        v301 = CG_PlayerVisibilityMP_UpdateCrosshairsTest(v300, enemySpawnAngleTestId, 0, 1, 18.0, 0.0, v292);
      }
    }
    else
    {
      v136->crosshairsData.underCrosshairsTestId = CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v295, underCrosshairsTestId);
      v136->crosshairsData.friendlySpawnAngleTestId = CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)v136->crosshairsData.localClientNum, v136->crosshairsData.friendlySpawnAngleTestId);
      v301 = CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)v136->crosshairsData.localClientNum, v136->crosshairsData.enemySpawnAngleTestId);
    }
    v136->crosshairsData.enemySpawnAngleTestId = v301;
    memset(&outOrg, 0, sizeof(outOrg));
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
LUIElement_PlayerNameplates_RunTrace
==============
*/
char LUIElement_PlayerNameplates_RunTrace(const LocalClientNum_t localClientNum, const int entityNum, const char *tagName, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, LUITraceRequest **activeTraceRequest)
{
  __int64 v9; 
  char result; 
  LUITraceRequest *v12; 
  const cpose_t *PoseExtended; 
  cg_t *LocalClientGlobals; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  LUITraceRequest *v19; 
  bool outHit[4]; 
  vec3_t outOrg; 
  __int64 v22; 
  vec3_t position; 
  vec3_t outOrigin; 
  vec3_t outOffset; 

  v22 = -2i64;
  v9 = entityNum;
  if ( !*activeTraceRequest || !LUITraceRunner::HasActiveRequests(localClientNum) )
  {
    if ( tagName )
    {
      v12 = LUITraceRunner::RequestTraceToEntityOffset(localClientNum, v9, tagName, tagOffset, entityOffset, worldOffset, 0, 0, outHit, 1);
      *activeTraceRequest = v12;
      if ( v12 )
        return 1;
      if ( outHit[0] )
        return 2;
    }
    else
    {
      LUI_ComputeWorldOffset(localClientNum, v9, &identityMatrix33, tagOffset, entityOffset, worldOffset, &outOffset);
      PoseExtended = CG_GetPoseExtended(localClientNum, v9, 0);
      CG_GetPoseOrigin(PoseExtended, &outOrigin);
      position.v[0] = outOrigin.v[0] + outOffset.v[0];
      position.v[1] = outOrigin.v[1] + outOffset.v[1];
      position.v[2] = outOrigin.v[2] + outOffset.v[2];
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      v15 = (float)((float)((float)(position.v[1] - outOrg.v[1]) * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + (float)((float)(position.v[0] - outOrg.v[0]) * LocalClientGlobals->refdef.view.axis.m[0].v[0])) + (float)((float)(position.v[2] - outOrg.v[2]) * LocalClientGlobals->refdef.view.axis.m[0].v[2]);
      v16 = (float)((float)((float)(position.v[1] - outOrg.v[1]) * LocalClientGlobals->refdef.view.axis.m[1].v[1]) + (float)((float)(position.v[0] - outOrg.v[0]) * LocalClientGlobals->refdef.view.axis.m[1].v[0])) + (float)((float)(position.v[2] - outOrg.v[2]) * LocalClientGlobals->refdef.view.axis.m[1].v[2]);
      v17 = (float)((float)((float)(position.v[1] - outOrg.v[1]) * LocalClientGlobals->refdef.view.axis.m[2].v[1]) + (float)((float)(position.v[0] - outOrg.v[0]) * LocalClientGlobals->refdef.view.axis.m[2].v[0])) + (float)((float)(position.v[2] - outOrg.v[2]) * LocalClientGlobals->refdef.view.axis.m[2].v[2]);
      if ( v15 <= 0.0 )
        goto LABEL_20;
      if ( LocalClientGlobals->refdef.view.fov.tanHalfFovX == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 476, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovX != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovX != 0.0f") )
        __debugbreak();
      v18 = 1.0 / v15;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 * v18) & _xmm) > LocalClientGlobals->refdef.view.fov.tanHalfFovX )
        goto LABEL_20;
      if ( LocalClientGlobals->refdef.view.fov.tanHalfFovY == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 484, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovY != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovY != 0.0f") )
        __debugbreak();
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 * v18) & _xmm) > LocalClientGlobals->refdef.view.fov.tanHalfFovY )
      {
LABEL_20:
        result = 2;
        memset(&outOrg, 0, sizeof(outOrg));
        return result;
      }
      memset(&outOrg, 0, sizeof(outOrg));
      if ( ((0x80000000 >> (v9 & 0x1F)) & CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_characterCullIn[v9 >> 5]) == 0 )
        return 0;
      v19 = LUITraceRunner::RequestTraceToPosition(localClientNum, &position, v9, 0, 1);
      *activeTraceRequest = v19;
      if ( v19 )
        return 1;
    }
    Com_PrintWarning(13, "LUI_Traces queue is full");
    return 1;
  }
  if ( !LUITraceRunner::GetTraceResult(localClientNum, *activeTraceRequest, outHit) )
    return 1;
  *activeTraceRequest = NULL;
  result = 3;
  if ( outHit[0] )
    return 0;
  return result;
}

/*
==============
LUI_LuaCall_LUIElement_SetupPlayerNameplates
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupPlayerNameplates(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupPlayerNameplates_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupPlayerNameplates_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupPlayerNameplates_impl(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  LUIElement *v4; 
  int v5; 
  _BYTE *v6; 
  _BYTE *v7; 
  __int64 v8; 
  unsigned __int8 ActiveGameMode; 
  bool v10; 
  const dvar_t *v11; 
  bool enabled; 
  const dvar_t *v13; 
  unsigned int IndexByName; 
  unsigned int v15; 
  char m_val; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  bool v20; 
  int RowCount; 
  bool v22; 
  const dvar_t *v23; 
  int integer; 
  const char *v25; 
  int v26; 
  __int64 v27; 
  float *v28; 
  const char *ColumnValueForRow; 
  __int64 v31; 
  bdRandom v32; 
  LocalClientNum_t ClientFromController; 
  StringTable *tablePtr; 
  unsigned __int8 in[8]; 
  unsigned __int8 v36[8]; 
  unsigned __int8 v37[8]; 
  __int64 v38; 
  bdRandom v39; 
  bool v40; 
  bdRandom v41; 

  v38 = -2i64;
  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 4");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  if ( j_lua_type(luaVM, 4) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 4 )");
  v3 = lua_tointeger32(luaVM, 3);
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  v4 = LUI_ToElement(luaVM, 1);
  v40 = j_lua_toboolean(luaVM, 4) != 0;
  LUIElement_InitTextLikeElement(v4);
  v4->imageData.uMax = (float)FontCache_GetMinHeightForDistanceField();
  v4->usageFlags |= 3u;
  v4->layoutFunction = LUIElement_PlayerNameplates_Layout;
  v4->renderFunction = LUIElement_PlayerNameplates_Render;
  v5 = -1;
  j_lua_getfield(luaVM, 2, "nameplateSetting");
  if ( j_lua_isnumber(luaVM, -1) )
    v5 = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  LUI_LUIElement_RegisterMethods(v4, luaVM, s_anchoredMethods_0);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 65, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v4, luaVM);
  v6 = j_lua_newuserdata(luaVM, 0x5FB0ui64);
  j_lua_createtable(luaVM, 0, 2);
  j_luaL_register(luaVM, NULL, LUIPlayerNameplatesOptions_metatable);
  j_lua_setmetatable(luaVM, -2);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 76, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v4->customElementData = v6;
  memset_0(v6, 0, 0x5FB0ui64);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3074, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  memset_0(v6, 0, 0x5FB0ui64);
  v7 = v6 + 2680;
  v8 = 248i64;
  do
  {
    bdRandom::bdRandom(&v39);
    bdRandom::nextUBytes(&v39, in, 8);
    *((_DWORD *)v7 - 1) = *(_DWORD *)in;
    *(_DWORD *)v7 = *(_DWORD *)&in[4];
    memset(in, 0, sizeof(in));
    v7[4] = 1;
    secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v7 - 8), 0);
    bdRandom::~bdRandom(&v39);
    bdRandom::bdRandom(&v41);
    bdRandom::nextUBytes(&v41, v36, 8);
    *((_DWORD *)v7 + 7) = *(_DWORD *)v36;
    *((_DWORD *)v7 + 8) = *(_DWORD *)&v36[4];
    memset(v36, 0, sizeof(v36));
    v7[36] = 1;
    secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v7 + 24), 0);
    bdRandom::~bdRandom(&v41);
    bdRandom::bdRandom(&v32);
    bdRandom::nextUBytes(&v32, v37, 8);
    *((_DWORD *)v7 + 11) = *(_DWORD *)v37;
    *((_DWORD *)v7 + 12) = *(_DWORD *)&v37[4];
    memset(v37, 0, sizeof(v37));
    v7[52] = 1;
    secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v7 + 40), 0);
    bdRandom::~bdRandom(&v32);
    v7 += 88;
    --v8;
  }
  while ( v8 );
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  LOBYTE(v39.m_val) = BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode);
  v10 = 0;
  v11 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  v13 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( enabled )
    v10 = !v13->current.enabled;
  IndexByName = BG_Omnvar_GetIndexByName("ui_always_show_nameplates");
  *((_DWORD *)v6 + 2) = IndexByName;
  if ( IndexByName == -1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "options->alwaysShowNameplatesOmnvarIndex != OMNVAR_NONE");
  v15 = BG_Omnvar_GetIndexByName("ui_hide_nameplates_for_zero_health");
  *((_DWORD *)v6 + 3) = v15;
  if ( v15 == -1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "options->hideNameplatesForZeroHealthOmnvarIndex != OMNVAR_NONE");
  *((_DWORD *)v6 + 5) = BG_Omnvar_GetIndexByName("ui_hide_nameplate_strings");
  m_val = v39.m_val;
  if ( LOBYTE(v39.m_val) )
  {
    v17 = BG_Omnvar_GetIndexByName("ui_in_spawn_camera");
    *((_DWORD *)v6 + 4) = v17;
    if ( v17 == -1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "options->spawnCameraOmnvarIndex != OMNVAR_NONE");
    v18 = BG_Omnvar_GetIndexByName("ui_in_infil");
    *((_DWORD *)v6 + 6) = v18;
    if ( v18 == -1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "options->infilStatusOmnvarIndex != OMNVAR_NONE");
    v19 = BG_Omnvar_GetIndexByName("ui_tac_ops_map_open");
    *((_DWORD *)v6 + 7) = v19;
    if ( v19 == -1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "options->tacOpsMapOpenOmnvarIndex != OMNVAR_NONE");
  }
  else
  {
    *((_DWORD *)v6 + 4) = -1;
    *((_QWORD *)v6 + 3) = -1i64;
  }
  *((_QWORD *)v6 + 305) = Image_Register("icon_obit_died", IMAGE_TRACK_HUD);
  *((_QWORD *)v6 + 306) = Image_Register("hud_icon_nameplate_chevron", IMAGE_TRACK_HUD);
  *((_QWORD *)v6 + 307) = Image_Register("hud_icon_nameplate_chevron_enemy", IMAGE_TRACK_HUD);
  *((_QWORD *)v6 + 308) = Image_Register("hud_icon_nameplate_chevron_most_wanted", IMAGE_TRACK_HUD);
  v20 = m_val && v10;
  v6[1] = v20;
  v6[2] = 1;
  *((_DWORD *)v6 + 1) = 0;
  *v6 = 1;
  *((_DWORD *)v6 + 9) = -1;
  StringTable_GetAsset("nameplateSettings.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3139, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  v22 = 0;
  j_lua_getfield(luaVM, 2, "tacOpsMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    v22 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  if ( !v22 )
  {
    v23 = DVARINT_cg_nameplateSettingOverride;
    if ( !DVARINT_cg_nameplateSettingOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_nameplateSettingOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    integer = v23->current.integer;
    if ( integer >= 0 )
    {
      if ( integer > RowCount - 1 )
      {
        LODWORD(v31) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3160, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The current nameplate setting value: %d, is outside of the range of possible values, please check the nameplateSettings.csv file for valid rows", v31) )
          __debugbreak();
      }
      v5 = integer;
    }
    if ( v40 )
    {
      v5 = 9;
      goto LABEL_65;
    }
  }
  if ( v5 >= 0 )
  {
LABEL_65:
    if ( v5 <= RowCount - 1 )
      goto LABEL_71;
  }
  v25 = "cp_default";
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
    v25 = "mp_default";
  v5 = StringTable_LookupRowNumForValue(tablePtr, 0, v25);
  if ( v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The current nameplate setting %s does not exist, please check the nameplateSettings.csv file", v25) )
    __debugbreak();
LABEL_71:
  v26 = StringTable_GetColumnCount(tablePtr) - 1;
  v27 = v26;
  if ( v26 > 0 )
  {
    v28 = (float *)(v6 + 2472);
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, v2);
      *v28 = strtof(ColumnValueForRow, NULL);
      ++v2;
      ++v28;
      --v27;
    }
    while ( v27 );
  }
  *((_DWORD *)v6 + 6120) = ClientFromController;
  *((CgPlayerVisibilityTestRefId *)v6 + 12242) = CG_PLAYER_VISIBILITY_INVALID_ID_1;
  *((CgPlayerVisibilityTestRefId *)v6 + 12243) = CG_PLAYER_VISIBILITY_INVALID_ID_1;
  *((CgPlayerVisibilityTestRefId *)v6 + 12244) = CG_PLAYER_VISIBILITY_INVALID_ID_1;
  return 0i64;
}

