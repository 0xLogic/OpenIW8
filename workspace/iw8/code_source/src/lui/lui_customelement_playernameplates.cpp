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
float ComputeAlphaForNameplateElement(const PlayerNameplatesOptions *options, NameplateSetting nameplateSetting, const float *distanceToEntitySquared, const bool *hasMarksmanPerk, const bool *isFriendly)
{
  const dvar_t *v13; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RSI = distanceToEntitySquared;
  _RAX = nameplateSetting;
  _RDI = options;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm6, dword ptr [rcx+rax*4+9A8h]
    vcomiss xmm6, xmm7
  }
  if ( *hasMarksmanPerk && !*isFriendly )
  {
    v13 = DVARFLT_perk_marksmanNameDistanceScale;
    if ( !DVARFLT_perk_marksmanNameDistanceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_marksmanNameDistanceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0A3Ch]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm6, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm4, xmm2, xmm3
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm3, xmm3, xmm6, xmm0
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm2, xmm0, xmm4
    vdivss  xmm0, xmm2, xmm3; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm6, xmm0
    vmulss  xmm0, xmm0, [rsp+68h+maxAlpha]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
ComputeNameplateScaleByDistance
==============
*/
float ComputeNameplateScaleByDistance(const PlayerNameplatesOptions *options, NameplateSetting *scaleSettings, const float *distanceSquared)
{
  int v36; 
  int v37; 

  _RAX = *(int *)scaleSettings;
  _RBX = distanceSquared;
  _R9 = *((int *)scaleSettings + 2);
  _R10 = *((int *)scaleSettings + 3);
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm6, dword ptr [rcx+r9*4+9A8h]
    vmovss  xmm7, dword ptr [rcx+r10*4+9A8h]
    vcomiss xmm7, xmm6
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+rax*4+9A8h]
  }
  _RAX = *((int *)scaleSettings + 1);
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm9
    vmovss  xmm9, dword ptr [rcx+rax*4+9A8h]
  }
  v37 = *((_DWORD *)scaleSettings + 2);
  v36 = *((_DWORD *)scaleSettings + 3);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1616, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Max Size Distance must be <= Min Size Distance for nameplate setting in the nameplateSettings.csv, col: %d and col: %d", v36, v37) )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm3, xmm0, xmm2
    vsubss  xmm4, xmm1, xmm2
    vxorps  xmm1, xmm1, xmm1; min
    vcmpless xmm0, xmm3, xmm1
    vblendvps xmm0, xmm3, xmm6, xmm0
    vdivss  xmm0, xmm4, xmm0; val
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vsubss  xmm1, xmm6, xmm0
    vmovaps xmm6, [rsp+88h+var_18]
    vmulss  xmm2, xmm1, xmm9
    vmovaps xmm9, [rsp+88h+var_48]
    vmulss  xmm0, xmm0, xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vaddss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
GenerateChevronVerts
==============
*/
void GenerateChevronVerts(float *outLeft, float *outRight, float *outTop, float *outBottom)
{
  char v41; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = DCONST_DVARFLT_cg_playerNameplatesChevronWidth;
  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _R12 = outLeft;
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  _RBP = outBottom;
  __asm { vmovaps xmmword ptr [r11-58h], xmm8 }
  _R15 = outTop;
  _R14 = outRight;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesChevronHeight;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm1, dword ptr [rsi]
    vmulss  xmm7, xmm0, cs:__real@3f000000
  }
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rdi]
  }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY;
  __asm { vmulss  xmm8, xmm1, dword ptr [rsi] }
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX;
  __asm { vmulss  xmm6, xmm0, dword ptr [rax] }
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vaddss  xmm0, xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [r12], xmm1
    vaddss  xmm0, xmm6, dword ptr [rbx+4]
    vsubss  xmm1, xmm0, xmm8
    vmovss  dword ptr [r15], xmm1
  }
  _RDI = DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX;
  if ( !DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vaddss  xmm1, xmm0, dword ptr [rbx]
  }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm1, xmm7
    vmovaps xmm7, [rsp+98h+var_48]
    vmovss  dword ptr [r14], xmm2
    vaddss  xmm0, xmm6, dword ptr [rbx+4]
    vmovaps xmm6, [rsp+98h+var_38]
    vmovss  dword ptr [rbp+0], xmm0
  }
}

/*
==============
GeneratePerkVerts
==============
*/
void GeneratePerkVerts(float *outLeft, float *outRight, float *outTop, float *outBottom)
{
  _RBX = DCONST_DVARFLT_cg_playerNameplatesPerkWidth;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RBP = outLeft;
  __asm { vmovaps [rsp+88h+var_48], xmm7 }
  _R15 = outBottom;
  _R14 = outTop;
  _R12 = outRight;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesPerkHeight;
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmulss  xmm7, xmm2, xmm6
  }
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm1, dword ptr [rsi]
  }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX;
  __asm { vmulss  xmm6, xmm2, xmm6 }
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vaddss  xmm0, xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rbp+0], xmm1
  }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, xmm6
    vmovss  dword ptr [r14], xmm2
  }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [r12], xmm2
  }
  _RBX = DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY;
  if ( !DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesPerkOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovaps xmm7, [rsp+88h+var_48]
    vaddss  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+88h+var_38]
    vmovss  dword ptr [r15], xmm2
  }
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
  bool v10; 
  bool v11; 

  _RSI = outDesiredAlpha;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = options;
  v10 = options == NULL;
  if ( !options )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1955, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+0A58h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( !v10 )
  {
    ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovss  xmm2, cs:__real@3f000000
      vmulss  xmm0, xmm2, dword ptr [rax+20h]
      vsubss  xmm4, xmm0, dword ptr [rdi]
      vmulss  xmm2, xmm2, dword ptr [rax+24h]
      vsubss  xmm0, xmm2, dword ptr [rdi+4]
      vmulss  xmm3, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vmulss  xmm0, xmm6, xmm6
      vdivss  xmm4, xmm2, xmm0
      vminss  xmm3, xmm4, xmm1
      vsubss  xmm0, xmm1, xmm3
      vmulss  xmm2, xmm0, dword ptr [rbx+0A5Ch]
      vmulss  xmm0, xmm3, dword ptr [rsi]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rsi], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
LUIElement_PlayerNameplates_DistanceToEntitySq
==============
*/
float LUIElement_PlayerNameplates_DistanceToEntitySq(const vec3_t *originToUse, const centity_t *const entity)
{
  vec3_t outOrigin; 
  __int64 v16; 

  v16 = -2i64;
  _RDI = originToUse;
  CG_GetPoseOrigin(&entity->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rsp+48h+outOrigin]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+48h+outOrigin+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+48h+outOrigin+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm0, xmm3, xmm0
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_PlayerNameplates_DrawBounties
==============
*/
void LUIElement_PlayerNameplates_DrawBounties(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const vec4_t *color, const int bountyCount, const vec2_t *screenPosition, const float perspectiveScale, const float unitScale, const GfxImage *bountyImage)
{
  int v18; 
  const dvar_t *v29; 
  const dvar_t *v36; 
  const dvar_t *v38; 
  const dvar_t *v43; 
  float fmt; 
  float vMin; 
  float uMax; 
  float v64; 
  vec4_t quadVerts[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  v18 = 0;
  if ( bountyCount > 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm8
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovss  xmm9, [rsp+168h+unitScale]
      vmovaps xmmword ptr [r11-98h], xmm10
      vmovss  xmm10, [rsp+168h+perspectiveScale]
      vmovaps xmmword ptr [r11-0A8h], xmm11
      vmovss  xmm11, cs:__real@3f800000
      vmovaps xmmword ptr [r11-0B8h], xmm12
      vxorps  xmm12, xmm12, xmm12
    }
    do
    {
      _RBX = DCONST_DVARFLT_cg_playerNameplatesBountyWidth;
      if ( !DCONST_DVARFLT_cg_playerNameplatesBountyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v29 = DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX;
      if ( !DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyOffsetX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm7, xmm1, dword ptr [rbx+28h]
      }
      _RBX = DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY;
      if ( !DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyOffsetY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v36 = DCONST_DVARFLT_cg_playerNameplatesBountyHeight;
      if ( !DCONST_DVARFLT_cg_playerNameplatesBountyHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      __asm { vaddss  xmm0, xmm6, dword ptr [rbx+28h] }
      v38 = DCONST_DVARFLT_cg_playerNameplatesBountyWidth;
      __asm
      {
        vmulss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm9
        vaddss  xmm8, xmm2, dword ptr [rdi+4]
      }
      if ( !DCONST_DVARFLT_cg_playerNameplatesBountyWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      __asm { vaddss  xmm0, xmm7, dword ptr [rbx+28h] }
      v43 = DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY;
      __asm
      {
        vmulss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm9
        vaddss  xmm6, xmm2, dword ptr [rdi]
      }
      if ( !DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesBountyOffsetY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      __asm
      {
        vmulss  xmm0, xmm10, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm1, xmm1, dword ptr [rdi+4]; top
        vmulss  xmm4, xmm7, xmm10
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm0, xmm0, dword ptr [rdi]; left
        vmovaps xmm3, xmm8; bottom
        vmovaps xmm2, xmm6; right
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
      __asm
      {
        vmovss  [rsp+168h+var_130], xmm11
        vmovss  [rsp+168h+uMax], xmm11
        vmovss  [rsp+168h+vMin], xmm12
        vmovss  dword ptr [rsp+168h+fmt], xmm12
      }
      LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, fmt, vMin, uMax, v64, color, bountyImage);
      ++v18;
    }
    while ( v18 < bountyCount );
    __asm
    {
      vmovaps xmm12, [rsp+168h+var_B8]
      vmovaps xmm11, [rsp+168h+var_A8]
      vmovaps xmm10, [rsp+168h+var_98]
      vmovaps xmm9, [rsp+168h+var_88]
      vmovaps xmm8, [rsp+168h+var_78]
      vmovaps xmm7, [rsp+168h+var_68]
      vmovaps xmm6, [rsp+168h+var_58]
    }
  }
}

/*
==============
LUIElement_PlayerNameplates_DrawPlayerDistance
==============
*/
void LUIElement_PlayerNameplates_DrawPlayerDistance(const centity_t *const cent, SecureVec3 *viewOrigin, vec2_t *screenPosition, const float *distanceScalar, const int *clientNum, GfxFont *fontToUse, const LocalClientNum_t *localClientNum, lua_State *luaVM, LUIElement *element, vec4_t *color, FontGlowStyle *glowStyle, const bool isRevive)
{
  const dvar_t *v56; 
  int CurrentLanguage; 
  int fontSize; 
  float v86; 
  vec3_t outOrigin; 
  vec4_t quadVerts[4]; 
  char result[128]; 
  char v90; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  _RBX = viewOrigin;
  result[0] = 0;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rsp+218h+outOrigin]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+218h+outOrigin+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm3, xmm0, dword ptr [rsp+218h+outOrigin+8]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm0, xmm0, cs:__real@3cd013a9; distance
  }
  result[0] = 0;
  CG_BuildCompassDistanceString(*(float *)&_XMM0, result, 128);
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  _RBX = DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight;
  __asm { vmovaps xmm11, xmm0 }
  if ( !DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesReviveNameFontHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+28h]
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  if ( isRevive )
  {
    _RBX = DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY;
    if ( !DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesReviveNameOffsetY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth;
    if ( !DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesReviveNameTextWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  }
  __asm
  {
    vaddss  xmm2, xmm7, dword ptr [rsi+4]
    vmovss  xmm9, cs:__real@3f000000
    vmulss  xmm10, xmm12, xmm9
    vmulss  xmm0, xmm10, dword ptr [rbp+0]
    vmulss  xmm1, xmm0, xmm11
    vsubss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm1, xmm2
    vsubss  xmm0, xmm1, xmm3
    vmulss  xmm2, xmm0, xmm9
    vaddss  xmm13, xmm2, xmm3
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( *clientNum < cls.maxClients || *clientNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    _RBX = DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX;
    if ( !DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDistanceOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  v56 = DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY;
  if ( !DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDistanceOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbp+0]
    vaddss  xmm3, xmm7, dword ptr [rsi]
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm0, xmm11, dword ptr [rbx+28h]
    vmulss  xmm2, xmm1, xmm11
    vmulss  xmm1, xmm10, dword ptr [rbp+0]
    vsubss  xmm7, xmm3, xmm2
    vaddss  xmm8, xmm2, xmm3
    vaddss  xmm3, xmm0, xmm13
    vmulss  xmm2, xmm1, xmm11
    vsubss  xmm9, xmm3, xmm2
    vaddss  xmm10, xmm3, xmm2
  }
  CurrentLanguage = SEH_GetCurrentLanguage();
  if ( CurrentLanguage == 17 )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000; scale }
    fontToUse = UI_GetFontHandle(NULL, CurrentLanguage - 8, *(float *)&_XMM2);
  }
  __asm
  {
    vmovaps xmm3, xmm10; bottom
    vmovaps xmm2, xmm8; right
    vmovaps xmm1, xmm9; top
    vmovaps xmm0, xmm7; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  __asm
  {
    vmulss  xmm0, xmm12, xmm11
    vcvttss2si r9d, xmm0
    vmovss  [rsp+218h+var_1D0], xmm6
  }
  LUI_Render_DrawText(*localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, color, fontToUse, result, 0, 0, v86, fontSize, NULL, glowStyle);
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
LUIElement_PlayerNameplates_DrawPlayerName
==============
*/
void LUIElement_PlayerNameplates_DrawPlayerName(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, lua_State *luaVM, const vec4_t *color, GfxFont *const LUI_PLAYER_NAMEPLATES_FONT, const int clientNum, const vec2_t *screenPosition, float perspectiveScale, FontGlowStyle *glowStyle, const bool isReviveName, const int alignX, const int alignY)
{
  int CharacterMaxCount; 
  char v29; 
  centity_t *Entity; 
  const dvar_t *v34; 
  const char *v35; 
  int fontSize; 
  float v85; 
  char playerNumberBuffer[8]; 
  FontGlowStyle *fontGlowStyle; 
  vec4_t quadVerts[4]; 
  char clanTagBuf[16]; 
  char nameBuf[40]; 
  char dest[56]; 
  char v93; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm13
  }
  _RBP = screenPosition;
  fontGlowStyle = glowStyle;
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm7, xmm0 }
  nameBuf[0] = 0;
  clanTagBuf[0] = 0;
  playerNumberBuffer[0] = 0;
  dest[0] = 0;
  CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
  if ( clientNum < cls.maxClients || clientNum >= CharacterMaxCount )
  {
    v29 = 0;
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
    v29 = 1;
    Entity = CG_GetEntity(localClientNum, clientNum);
    if ( CL_GetAgentName(localClientNum, clientNum, Entity->nextState.otherEntityNum, nameBuf, 0x24ui64) )
      Com_sprintf(dest, 0x34ui64, (const char *)&queryFormat, nameBuf);
    else
      Com_sprintf(dest, 0x34ui64, "?");
  }
  __asm
  {
    vmovaps [rsp+1E8h+var_78], xmm9
    vxorps  xmm8, xmm8, xmm8
  }
  if ( isReviveName )
  {
    if ( v29 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetX, "cg_playerNameplatesReviveNameOffsetX");
      __asm { vmovaps xmm6, xmm0 }
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY, "cg_playerNameplatesReviveNameOffsetY");
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight, "cg_playerNameplatesReviveNameFontHeight");
    v34 = DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth;
    v35 = "cg_playerNameplatesReviveNameTextWidth";
  }
  else
  {
    if ( v29 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetX, "cg_playerNameplatesNameOffsetX");
      __asm { vmovaps xmm6, xmm0 }
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetY, "cg_playerNameplatesNameOffsetY");
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameFontHeight, "cg_playerNameplatesNameFontHeight");
    v34 = DCONST_DVARFLT_cg_playerNameplatesNameTextWidth;
    v35 = "cg_playerNameplatesNameTextWidth";
  }
  __asm { vmovaps xmm10, xmm0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v34, v35);
  __asm
  {
    vmulss  xmm13, xmm10, cs:__real@3f000000
    vcvttss2si r9d, xmm10; textHeight
    vmovaps xmm11, xmm0
  }
  R_TextWidth(dest, 52, LUI_PLAYER_NAMEPLATES_FONT, _ER9);
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]
    vmovss  xmm5, [rsp+1E8h+perspectiveScale]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
  }
  if ( alignX == 1 )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@3f000000
      vmulss  xmm1, xmm11, cs:__real@3f000000
      vsubss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm1, xmm5
      vmulss  xmm2, xmm0, xmm7
      vsubss  xmm11, xmm3, xmm2
      vaddss  xmm6, xmm3, xmm2
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm11, xmm5
      vmulss  xmm3, xmm0, xmm7
    }
    if ( alignX == 2 )
    {
      __asm
      {
        vmulss  xmm0, xmm1, xmm5
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm11, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm11
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm6, xmm5
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm11, xmm1, xmm2
        vaddss  xmm2, xmm2, xmm6
        vaddss  xmm6, xmm2, xmm3
      }
    }
  }
  __asm { vmovss  xmm4, dword ptr [rbp+4] }
  if ( alignY == 4 )
  {
    __asm
    {
      vmulss  xmm0, xmm9, xmm5
      vmulss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm10, xmm5
      vaddss  xmm0, xmm4, xmm9
      vmulss  xmm3, xmm2, xmm7
      vaddss  xmm3, xmm3, xmm0
      vaddss  xmm1, xmm1, xmm4
    }
  }
  else if ( alignY == 12 )
  {
    __asm
    {
      vmulss  xmm0, xmm10, xmm5
      vmulss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm9, xmm5
      vmulss  xmm0, xmm2, xmm7
      vsubss  xmm3, xmm4, xmm0
      vsubss  xmm1, xmm4, xmm1
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm13, xmm5
      vmulss  xmm3, xmm1, xmm7
      vaddss  xmm4, xmm4, xmm9
      vsubss  xmm1, xmm4, xmm3; top
      vaddss  xmm3, xmm4, xmm3; bottom
    }
  }
  __asm
  {
    vmovaps xmm2, xmm6; right
    vmovaps xmm0, xmm11; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  __asm
  {
    vmulss  xmm0, xmm10, xmm7
    vcvttss2si eax, xmm0
    vmovss  [rsp+1E8h+var_1A0], xmm8
  }
  LUI_Render_DrawText(localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, color, LUI_PLAYER_NAMEPLATES_FONT, dest, 0, 0, v85, fontSize, NULL, fontGlowStyle);
  __asm { vmovaps xmm9, [rsp+1E8h+var_78] }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
LUIElement_PlayerNameplates_DrawRankIcon
==============
*/
void LUIElement_PlayerNameplates_DrawRankIcon(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, LUIElement *element, lua_State *luaVM, const vec4_t *color, const vec2_t *screenPosition, const float perspectiveScale)
{
  const GfxImage *material; 
  const dvar_t *v19; 
  const dvar_t *v22; 
  const dvar_t *v26; 
  const dvar_t *v30; 
  float fmt; 
  float vMin; 
  float uMax; 
  float v49; 
  vec4_t quadVerts[4]; 

  __asm { vmovaps [rsp+138h+var_68], xmm7 }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  material = clientInfo->rankIconHandle;
  __asm { vmovaps xmm7, xmm0 }
  if ( material )
  {
    v19 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom;
    __asm
    {
      vmovaps [rsp+138h+var_58], xmm6
      vmovaps [rsp+138h+var_78], xmm8
      vmovaps [rsp+138h+var_88], xmm9
      vmovaps [rsp+138h+var_98], xmm10
    }
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetBottom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    __asm
    {
      vmovss  xmm6, [rsp+138h+perspectiveScale]
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    }
    v22 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight;
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm10, xmm1, dword ptr [rdi+4]
    }
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetRight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm { vmulss  xmm0, xmm6, dword ptr [rbx+28h] }
    v26 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop;
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm9, xmm1, dword ptr [rdi]
    }
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetTop") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    __asm { vmulss  xmm0, xmm6, dword ptr [rbx+28h] }
    v30 = DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft;
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm8, xmm1, dword ptr [rdi+4]
    }
    if ( !DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesRankIconOffsetLeft") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmulss  xmm4, xmm0, xmm7
      vaddss  xmm0, xmm4, dword ptr [rdi]; left
      vmovaps xmm3, xmm10; bottom
      vmovaps xmm2, xmm9; right
      vmovaps xmm1, xmm8; top
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+138h+var_100], xmm0
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rsp+138h+uMax], xmm0
      vmovss  [rsp+138h+vMin], xmm1
      vmovss  dword ptr [rsp+138h+fmt], xmm1
    }
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, fmt, vMin, uMax, v49, color, material);
    __asm
    {
      vmovaps xmm10, [rsp+138h+var_98]
      vmovaps xmm9, [rsp+138h+var_88]
      vmovaps xmm8, [rsp+138h+var_78]
      vmovaps xmm6, [rsp+138h+var_58]
    }
  }
  __asm { vmovaps xmm7, [rsp+138h+var_68] }
}

/*
==============
LUIElement_PlayerNameplates_EntityHasNameplate
==============
*/
bool LUIElement_PlayerNameplates_EntityHasNameplate(const PlayerNameplatesOptions *const options, const cg_t *const cgameGlob, const centity_t *const cent, const bool hideNameplatesForZeroHealth)
{
  int number; 
  playerState_s *p_predictedPlayerState; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v14; 
  ClStatic *CLStatic; 
  char v23; 
  char v24; 
  __int64 v26; 
  __int64 v27; 

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
    LODWORD(v26) = cgameGlob->predictedPlayerState.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "ps->clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v26, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v27) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v26) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 346, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)cgameGlob->localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  v14 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.number);
  if ( !Com_Teams_OnSameTeam(p_predictedPlayerState, (const team_t)CharacterInfo->team, &cent->nextState, (const team_t)v14->team) )
  {
    if ( BG_HasPerk(&v14->perks, 0x2Au) )
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
    LODWORD(v27) = ComCharacterLimits::GetClientMaxCount();
    LODWORD(v26) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 370, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "cent->nextState.number doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( cent->nextState.lerp.u.player.playerFlags < 0 )
    return 0;
  if ( !hideNameplatesForZeroHealth )
    return 1;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  *(double *)&_XMM0 = ((double (__fastcall *)(CgStatic *, _QWORD))LocalClientStatics->GetClientInfo)(LocalClientStatics, (unsigned int)cent->nextState.number);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1; min
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+8Ch]
    vmulss  xmm0, xmm0, cs:__real@3c010204; val
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_38]
  }
  return !(v23 | v24);
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
  vec3_t outOrigin; 

  _RBX = viewOrigin;
  CG_GetPoseOrigin(pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rsp+58h+outOrigin]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm3, xmm0, dword ptr [rsp+58h+outOrigin+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+outOrigin+4]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm0, xmm0, cs:__real@3cd013a9; distance
  }
  *distanceString = 0;
  CG_BuildCompassDistanceString(*(float *)&_XMM0, distanceString, distanceStringBufferSize);
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
  __int64 v11; 
  CgGlobalsMP *LocalClientGlobals; 
  cg_t *v19; 
  int v21; 
  __int16 remoteControlEnt; 
  centity_t *Entity; 
  double v50; 
  vec3_t v58; 
  vec3_t outOrg; 
  __int64 v60; 
  vec3_t outOrigin; 
  vec2_t v62; 
  vec2_t outScreenPos; 
  vec3_t worldPos; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v60 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v11 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 712, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v11);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outOrigin]
    vsubss  xmm8, xmm0, dword ptr [rbp+57h+outOrg]
    vmovss  xmm1, dword ptr [rbp+57h+outOrigin+4]
    vsubss  xmm9, xmm1, dword ptr [rbp+57h+outOrg+4]
    vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
    vsubss  xmm10, xmm0, dword ptr [rbp+57h+outOrg+8]
  }
  v19 = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 676, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RDI = &v19->predictedPlayerState;
  if ( v19 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 679, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v19->renderingThirdPerson )
    goto LABEL_16;
  if ( !CgWeaponMap::ms_instance[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v11], &v19->predictedPlayerState) )
LABEL_16:
    v21 = 1;
  else
    v21 = 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v19->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu) || (remoteControlEnt = v19->predictedPlayerState.remoteControlEnt, remoteControlEnt == 2047) )
  {
    if ( !v21 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  dword ptr [rsp+110h+var_E0], xmm0
        vmovss  xmm1, dword ptr [rdi+34h]
        vmovss  dword ptr [rsp+110h+var_E0+4], xmm1
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  dword ptr [rsp+110h+var_E0+8], xmm0
      }
      goto LABEL_24;
    }
    goto LABEL_22;
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v11, remoteControlEnt);
  if ( (Entity->flags & 1) == 0 )
  {
LABEL_22:
    CG_GetPoseOrigin(&v19->predictedPlayerEntity->pose, &v58);
    goto LABEL_24;
  }
  CG_GetPoseOrigin(&Entity->pose, &v58);
LABEL_24:
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+outOrigin]
    vsubss  xmm1, xmm5, dword ptr [rsp+110h+var_E0]
    vmovss  xmm6, dword ptr [rbp+57h+outOrigin+4]
    vsubss  xmm2, xmm6, dword ptr [rsp+110h+var_E0+4]
    vmovss  xmm7, dword ptr [rbp+57h+outOrigin+8]
    vsubss  xmm0, xmm7, dword ptr [rsp+110h+var_E0+8]
    vsubss  xmm1, xmm8, xmm1
    vsubss  xmm3, xmm9, xmm2
    vsubss  xmm4, xmm10, xmm0
    vaddss  xmm0, xmm1, xmm5
    vmovss  dword ptr [rbp+57h+worldPos], xmm0
    vaddss  xmm1, xmm3, xmm6
    vmovss  dword ptr [rbp+57h+worldPos+4], xmm1
    vaddss  xmm0, xmm4, xmm7
    vmovss  dword ptr [rbp+57h+worldPos+8], xmm0
  }
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v11, scrPlace, &outOrigin, &outScreenPos);
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v11, scrPlace, &worldPos, &v62);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_A8]
    vsubss  xmm4, xmm0, dword ptr [rbp+57h+outScreenPos]
    vmovss  xmm1, dword ptr [rbp+57h+var_A8+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+57h+outScreenPos+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vdivss  xmm0, xmm2, dword ptr [r15+24h]; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  v50 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  memset(&v58, 0, sizeof(v58));
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&v50;
}

/*
==============
LUIElement_PlayerNameplates_GetScreenPosition
==============
*/
void LUIElement_PlayerNameplates_GetScreenPosition(const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const PlayerEntityData *const entityData, const int entityNum, vec2_t *outScreenPosition, const bool *useFastPosition)
{
  const dvar_t *v9; 
  CgStatic *LocalClientStatics; 
  centity_t *Entity; 
  const characterInfo_t *CharacterInfo; 
  char v16; 
  bool v17; 
  CgGlobalsMP *LocalClientGlobals; 
  const CgGlobalsMP *v22; 
  bool v26; 
  const GfxViewInfo *ViewInfo; 
  vec3_t *worldOffset; 
  vec3_t *outOffset; 
  double v64; 
  vec3_t viewHeightPosition; 
  vec3_t outWorldPosition; 
  vec3_t v68; 
  vec3_t v69; 
  dvec3_t worldPos; 
  tmat33_t<vec3_t> outLocalAxis; 

  v9 = DVARBOOL_cg_playerNameplatesFastPosition;
  _R15 = entityData;
  if ( !DVARBOOL_cg_playerNameplatesFastPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesFastPosition") )
    __debugbreak();
  __asm { vmovaps xmmword ptr [rsp+130h+var_58+8], xmm6 }
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && *useFastPosition )
  {
    __asm { vmovaps [rsp+130h+var_68+8], xmm7 }
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    Entity = CG_GetEntity(localClientNum, entityNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+20h]
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm0, xmm7
    }
    v22 = LocalClientGlobals;
    if ( v16 )
      goto LABEL_20;
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v16 | v17) )
    {
LABEL_20:
      __asm
      {
        vcvtss2sd xmm2, xmm0, xmm0
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+130h+var_F8], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+130h+outOffset], xmm1
        vmovsd  [rsp+130h+worldOffset], xmm2
      }
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 764, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( entityData->nameAlpha ) && ( entityData->nameAlpha ) <= ( 1.0f )", "entityData->nameAlpha not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&worldOffset, *(double *)&outOffset, v64);
      v16 = 0;
      v17 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+20h]
      vucomiss xmm0, xmm7
      vmovaps xmm7, [rsp+130h+var_68+8]
    }
    if ( v17 )
    {
      LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight(CharacterInfo, _R15, v22, Entity, &viewHeightPosition);
    }
    else
    {
      __asm { vcomiss xmm0, xmm6 }
      if ( v16 )
      {
        LUI_GetEntityTagPositionAndAxis(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &outLocalAxis, &outWorldPosition);
        LUI_ComputeWorldOffset(localClientNum, entityNum, &outLocalAxis, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, &v69);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+130h+outWorldPosition]
          vaddss  xmm1, xmm0, dword ptr [rsp+130h+var_B8]
          vmovss  xmm2, dword ptr [rsp+130h+outWorldPosition+4]
          vaddss  xmm0, xmm2, dword ptr [rsp+130h+var_B8+4]
          vmovss  dword ptr [rsp+130h+outWorldPosition], xmm1
          vmovss  xmm1, dword ptr [rsp+130h+outWorldPosition+8]
          vaddss  xmm2, xmm1, dword ptr [rbp+30h+var_B8+8]
          vmovss  dword ptr [rsp+130h+outWorldPosition+8], xmm2
          vmovss  dword ptr [rsp+130h+outWorldPosition+4], xmm0
        }
        LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight(CharacterInfo, _R15, v22, Entity, &v68);
        __asm
        {
          vmovss  xmm6, dword ptr [r15+20h]
          vmovss  xmm0, dword ptr [rsp+130h+outWorldPosition]
          vsubss  xmm1, xmm0, dword ptr [rsp+130h+var_C8]
          vmovss  xmm0, dword ptr [rsp+130h+outWorldPosition+4]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+130h+var_C8]
          vsubss  xmm1, xmm0, dword ptr [rsp+130h+var_C8+4]
          vmovss  xmm0, dword ptr [rsp+130h+outWorldPosition+8]
          vmulss  xmm2, xmm1, xmm6
          vsubss  xmm1, xmm0, dword ptr [rsp+130h+var_C8+8]
          vmovss  dword ptr [rsp+130h+viewHeightPosition], xmm3
          vaddss  xmm3, xmm2, dword ptr [rsp+130h+var_C8+4]
          vmulss  xmm2, xmm1, xmm6
          vmovss  dword ptr [rsp+130h+viewHeightPosition+4], xmm3
          vaddss  xmm3, xmm2, dword ptr [rsp+130h+var_C8+8]
          vmovss  dword ptr [rsp+130h+viewHeightPosition+8], xmm3
        }
      }
      else
      {
        LUI_GetEntityTagPositionAndAxis(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &outLocalAxis, &viewHeightPosition);
        LUI_ComputeWorldOffset(localClientNum, entityNum, &outLocalAxis, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, &v68);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+130h+viewHeightPosition]
          vaddss  xmm1, xmm0, dword ptr [rsp+130h+var_C8]
          vmovss  xmm2, dword ptr [rsp+130h+viewHeightPosition+4]
          vaddss  xmm0, xmm2, dword ptr [rsp+130h+var_C8+4]
          vmovss  dword ptr [rsp+130h+viewHeightPosition], xmm1
          vmovss  xmm1, dword ptr [rsp+130h+viewHeightPosition+8]
          vaddss  xmm2, xmm1, dword ptr [rsp+130h+var_C8+8]
          vmovss  dword ptr [rsp+130h+viewHeightPosition+8], xmm2
          vmovss  dword ptr [rsp+130h+viewHeightPosition+4], xmm0
        }
      }
    }
  }
  else
  {
    LUI_GetEntityTagPositionAndAxis(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &outLocalAxis, &viewHeightPosition);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+viewHeightPosition]
    vmovss  xmm1, dword ptr [rsp+130h+viewHeightPosition+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rbp+30h+worldPos], xmm0
    vmovss  xmm0, dword ptr [rsp+130h+viewHeightPosition+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  qword ptr [rbp+30h+worldPos+10h], xmm0
    vmovsd  qword ptr [rbp+30h+worldPos+8], xmm1
  }
  CG_WorldPosToScreenPosRealForScenePrecise(localClientNum, scrPlace, &worldPos, 0, outScreenPosition);
  ViewInfo = LUI_GetViewInfo();
  __asm { vmovaps xmm6, xmmword ptr [rsp+130h+var_58+8] }
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
  int v18; 
  const dvar_t *v19; 
  LerpEntityState *p_lerp; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 394, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 395, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 396, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  _RSI = outViewHeightOffset;
  *(_QWORD *)outViewHeightOffset->v = 0i64;
  outViewHeightOffset->v[2] = 0.0;
  SuitDef = BG_GetSuitDef(ci->suitIndex);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 4u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
    entityData->startStandTime = cgameGlob->time;
  v18 = cgameGlob->time - entityData->startStandTime;
  v19 = DCONST_DVARINT_cg_playerNameplateStateChangeDuration;
  if ( !DCONST_DVARINT_cg_playerNameplateStateChangeDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateStateChangeDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  p_lerp = &cent->nextState.lerp;
  if ( v18 <= v19->current.integer )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vxorps  xmm1, xmm1, xmm1
      vmovaps [rsp+98h+var_48], xmm8
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcvtsi2ss xmm1, xmm1, ebp
      vmovaps [rsp+98h+var_58], xmm9
      vdivss  xmm8, xmm1, xmm0
    }
    BG_Suit_GetProneViewHeight(SuitDef);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm9, xmm0, [rsp+98h+heightScalar]
    }
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) )
      _EBX = SuitDef->viewheight_crouch;
    else
      _EBX = SuitDef->viewheight_stand;
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm8; val
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, [rsp+98h+var_48]
      vmovd   xmm1, ebx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm2, xmm1, [rsp+98h+heightScalar]
      vmulss  xmm3, xmm2, xmm0
      vsubss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+98h+var_38]
      vmulss  xmm1, xmm0, xmm9
      vmovaps xmm9, [rsp+98h+var_58]
      vaddss  xmm1, xmm3, xmm1
    }
  }
  else
  {
    entityData->startStandTime = 0;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u) )
    {
      BG_Suit_GetProneViewHeight(SuitDef);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, [rsp+98h+heightScalar]
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) )
      {
        __asm
        {
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+204h]
          vmulss  xmm1, xmm0, [rsp+98h+heightScalar]
        }
      }
      else
      {
        __asm
        {
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+200h]
          vmulss  xmm1, xmm0, [rsp+98h+heightScalar]
        }
      }
    }
  }
  __asm { vmovss  dword ptr [rsi+8], xmm1 }
  if ( isRoot )
  {
    _RBX = DVARFLT_cg_playerNameplatesFastTraceRootXOffset;
    if ( !DVARFLT_cg_playerNameplatesFastTraceRootXOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesFastTraceRootXOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
  }
}

/*
==============
LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight
==============
*/
void LUIElement_PlayerNameplates_GetWorldPositionFromViewHeight(const characterInfo_t *const ci, const PlayerEntityData *const entityData, const CgGlobalsMP *const cgameGlob, const centity_t *const cent, vec3_t *viewHeightPosition)
{
  float fmt; 
  vec3_t outViewHeightOffset; 
  vec3_t outOrigin; 

  _RBX = viewHeightPosition;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 662, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 663, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+98h+fmt], xmm0
  }
  LUIElement_PlayerNameplates_GetViewHeightOffset(ci, entityData, cgameGlob, cent, fmt, &outViewHeightOffset, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+var_58]
    vaddss  xmm1, xmm0, dword ptr [rsp+98h+outOrigin]
    vmovss  xmm2, dword ptr [rsp+98h+var_58+4]
    vaddss  xmm0, xmm2, dword ptr [rsp+98h+outOrigin+4]
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+var_58+8]
    vmovss  dword ptr [rbx+4], xmm0
    vaddss  xmm0, xmm1, dword ptr [rsp+98h+outOrigin+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  _RDI = DCONST_DVARFLT_cg_playerNameplateViewHeightOffset;
  if ( !DCONST_DVARFLT_cg_playerNameplateViewHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateViewHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm1
  }
}

/*
==============
LUIElement_PlayerNameplates_IsCharacterUnderCrosshairs
==============
*/

__int64 __fastcall LUIElement_PlayerNameplates_IsCharacterUnderCrosshairs(const vec3_t *viewOrigin, const vec3_t *viewDir, double viewDirXYLen, const bool viewDirXYIsValid, const vec2_t *viewDirXYNormalized, const centity_t *const entity, const characterInfo_t *const entityCharacterInfo, const bool testSpawnAngle, const float cosSpawnAngle, const float sinSpawnAngle, bool *spawnAngleTestResult)
{
  __int64 result; 
  vec3_t outOrigin; 
  __int64 v71; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  v71 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps [rsp+108h+var_B8], xmm14
    vmovaps xmm12, xmm2
  }
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1701, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entityCharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1702, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
    __debugbreak();
  if ( !BG_GetSuitDef(entityCharacterInfo->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1706, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 4u) )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->nextState.lerp.eFlags, ACTIVE, 3u);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdi+220h]
    vaddss  xmm11, xmm1, cs:__real@41900000
    vmulss  xmm9, xmm11, xmm11
    vaddss  xmm13, xmm6, cs:__real@41900000
  }
  CG_GetPoseOrigin(&entity->pose, &outOrigin);
  __asm
  {
    vaddss  xmm2, xmm6, dword ptr [rsp+108h+outOrigin+8]
    vmovss  dword ptr [rsp+108h+outOrigin+8], xmm2
    vmovss  xmm0, dword ptr [rsp+108h+outOrigin]
    vsubss  xmm7, xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [rsp+108h+outOrigin+4]
    vsubss  xmm8, xmm1, dword ptr [r14+4]
    vsubss  xmm14, xmm2, dword ptr [r14+8]
  }
  if ( viewDirXYIsValid )
  {
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vcomiss xmm12, xmm10
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
    }
    _RAX = viewDirXYNormalized;
    __asm
    {
      vmovss  xmm3, dword ptr [rax+4]
      vmovss  xmm4, dword ptr [rax]
      vmulss  xmm1, xmm7, xmm4
      vmulss  xmm0, xmm8, xmm3
      vaddss  xmm6, xmm1, xmm0
      vcomiss xmm2, xmm9
      vcomiss xmm6, xmm10
      vmulss  xmm0, xmm6, xmm6
      vsubss  xmm1, xmm2, xmm0
      vcomiss xmm9, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm0, xmm0, dword ptr [r12+8]
      vdivss  xmm1, xmm0, xmm12
      vsubss  xmm2, xmm1, xmm14
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm13, xmm2
    }
    if ( testSpawnAngle )
      *spawnAngleTestResult = 1;
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm1, xmm1, xmm0
      vcomiss xmm9, xmm1
    }
    if ( testSpawnAngle )
      *spawnAngleTestResult = 1;
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  result = 1i64;
  _R11 = &v75;
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
    vmovaps xmm14, [rsp+108h+var_B8]
  }
  return result;
}

/*
==============
LUIElement_PlayerNameplates_IsElementSnapping
==============
*/
bool LUIElement_PlayerNameplates_IsElementSnapping(const LocalClientNum_t localClientNum, const bool *isFriendly, float *outLeft, float *outTop, float *outRight, float *outBottom)
{
  const dvar_t *v10; 
  bool result; 
  float fmt; 
  bool snapToLocation; 
  vec2_t screenPosition; 
  vec2_t screenSnapOffset; 

  v10 = DVARBOOL_cg_friendlyNameplateSnapToEdge;
  _RSI = outTop;
  _R14 = outRight;
  _RDI = outLeft;
  _R15 = outBottom;
  if ( !DVARBOOL_cg_friendlyNameplateSnapToEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateSnapToEdge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !*isFriendly || !v10->current.enabled )
    return 0;
  __asm
  {
    vmovss  xmm1, dword ptr [r15]
    vmovss  xmm0, dword ptr [r14]
    vmovaps [rsp+0E8h+var_48], xmm6
    vsubss  xmm6, xmm0, dword ptr [rdi]
    vmovaps [rsp+0E8h+var_58], xmm7
    vsubss  xmm7, xmm1, dword ptr [rsi]
    vmovaps [rsp+0E8h+var_68], xmm8
    vmulss  xmm8, xmm6, cs:__real@3f000000
    vaddss  xmm0, xmm8, dword ptr [rdi]
    vmovaps [rsp+0E8h+var_78], xmm9
    vmulss  xmm9, xmm7, cs:__real@3f000000
    vaddss  xmm1, xmm9, dword ptr [rsi]
    vmovss  dword ptr [rsp+0E8h+var_90+4], xmm1
    vxorps  xmm1, xmm1, xmm1; snapRadius
    vmovaps xmm3, xmm7; elementHeight
    vmovaps xmm2, xmm6; elementwWidth
    vmovss  dword ptr [rsp+0E8h+fmt], xmm1
    vmovss  dword ptr [rsp+0E8h+var_90], xmm0
    vmovss  dword ptr [rsp+0E8h+var_88], xmm1
    vmovss  dword ptr [rsp+0E8h+var_88+4], xmm1
  }
  snapToLocation = 0;
  result = LUIElement_Anchored_SnapScreenPositionToEdges(localClientNum, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &screenPosition, &screenPosition, &snapToLocation, &screenSnapOffset);
  if ( result )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0E8h+var_90]
      vmovss  xmm2, dword ptr [rsp+0E8h+var_90+4]
      vsubss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi], xmm1
      vsubss  xmm0, xmm2, xmm9
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovss  dword ptr [r14], xmm1
      vaddss  xmm0, xmm7, dword ptr [rsi]
      vmovss  dword ptr [r15], xmm0
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmovaps xmm6, [rsp+0E8h+var_48]
    vmovaps xmm9, [rsp+0E8h+var_78]
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
  __int64 v12; 
  PlayerNameplatesOptions *Data; 
  CgStatic *LocalClientStatics; 
  const OmnvarDef *Def; 
  const OmnvarData *v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  CgEntitySystem *v24; 
  __int64 v25; 
  __int64 v26; 
  bool v27; 
  _BYTE *v28; 
  int v29; 
  _BYTE *v30; 
  int v31; 
  __int64 v32; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *v34; 
  char v39; 
  bool v40; 
  char v41; 
  int v42; 
  bool v43; 
  bool HasNameplate; 
  bool v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  unsigned __int8 v49; 
  _QWORD *v50; 
  unsigned __int8 v51; 
  unsigned __int8 v52; 
  unsigned __int8 v53; 
  unsigned __int8 v54; 
  unsigned __int8 v55; 
  secure_uint8_t *v56; 
  unsigned __int8 v57; 
  unsigned __int64 team; 
  bool v59; 
  bool v60; 
  unsigned int v63; 
  bool v64; 
  unsigned __int64 v65; 
  PostGameState PostGameState; 
  unsigned int infilStatusOmnvarIndex; 
  const OmnvarDef *v68; 
  OmnvarData *v69; 
  const dvar_t *v70; 
  float fmt; 
  float fmta; 
  vec3_t *outViewHeightOffset; 
  __int64 isRoot; 
  __int64 v80; 
  __int64 v81; 
  unsigned int entityNum; 
  int entityNuma; 
  bool Bool; 
  char v86; 
  CgStatic *v87; 
  CgGlobalsMP *cgameGlob; 
  characterInfo_t *oc_ci; 
  __int64 v90; 
  PlayerNameplatesOptions *options; 
  const characterInfo_t *CharacterInfo; 
  __int128 v94; 
  __int64 v95; 
  unsigned int v96; 
  vec3_t entityOffset; 
  vec3_t v98; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v12 = localClientNum;
  Data = LUIElement_PlayerNameplates_GetData(element, luaVM);
  options = Data;
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1226, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  Data->deltaTime = deltaTime;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v12);
  v87 = LocalClientStatics;
  cgameGlob = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v12);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  Def = BG_Omnvar_GetDef(Data->hideNameplatesForZeroHealthOmnvarIndex);
  v16 = CG_Omnvar_GetData(cgameGlob->localClientNum, Data->hideNameplatesForZeroHealthOmnvarIndex);
  Bool = Omnvar_GetBool(Def, v16);
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "LUIElement_PlayerNameplates_Layout");
  v17 = 0;
  v18 = v12;
  v19 = 0i64;
  __asm
  {
    vmovss  xmm8, cs:__real@3c010204
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm9, cs:__real@3f000000
  }
  while ( 1 )
  {
    v90 = v19;
    entityNum = v17;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v17 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(isRoot) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", isRoot) )
        __debugbreak();
    }
    if ( (unsigned int)v12 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(isRoot) = CgEntitySystem::ms_allocatedCount;
      LODWORD(outViewHeightOffset) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outViewHeightOffset, isRoot) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v18] )
    {
      LODWORD(isRoot) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", isRoot) )
        __debugbreak();
    }
    v24 = CgEntitySystem::ms_entitySystemArray[v18];
    if ( v17 >= 0x800 )
    {
      LODWORD(isRoot) = 2048;
      LODWORD(outViewHeightOffset) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outViewHeightOffset, isRoot) )
        __debugbreak();
    }
    v25 = (__int64)&v24->m_entities[v19];
    v26 = (__int64)&Data->playerEntities[v19];
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v27 = (int)v17 < (signed int)ComCharacterLimits::ms_gameData.m_clientCount;
    if ( (*(_BYTE *)(v25 + 648) & 1) != 0 )
    {
      v32 = *(int *)(v25 + 544);
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v32 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(isRoot) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(outViewHeightOffset) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outViewHeightOffset, isRoot) )
            __debugbreak();
        }
        v34 = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v32);
      }
      else
      {
        v34 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v32);
      }
      oc_ci = (characterInfo_t *)v34;
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1278, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
        __debugbreak();
      if ( !v27 )
        goto LABEL_54;
      *(double *)&_XMM0 = ((double (__fastcall *)(CgStatic *, _QWORD))v87->GetClientInfo)(v87, v17);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+8Ch]
        vmulss  xmm0, xmm0, xmm8; val
        vmovaps xmm2, xmm6; max
        vmovaps xmm1, xmm7; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vcomiss xmm0, xmm7 }
      if ( v39 | v40 )
        v41 = 1;
      else
LABEL_54:
        v41 = 0;
      v86 = v41;
      v42 = *(__int16 *)(v25 + 400);
      v43 = cgameGlob->predictedPlayerState.clientNum == v42 || cgameGlob->clientNum == v42;
      HasNameplate = LUIElement_PlayerNameplates_EntityHasNameplate(options, cgameGlob, (const centity_t *const)v25, Bool);
      v45 = HasNameplate;
      if ( v43 )
        goto LABEL_132;
      if ( !v27 && !HasNameplate )
        goto LABEL_89;
      if ( v41 && Bool )
      {
LABEL_132:
        v17 = entityNum;
        if ( v27 )
          bitarray_base<bitarray<224>>::resetBit(&cgameGlob->sightedEnemyFools, entityNum);
      }
      else
      {
        v46 = DVARBOOL_cg_playerNameplatesFastTrace;
        if ( !DVARBOOL_cg_playerNameplatesFastTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesFastTrace") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v46);
        if ( v46->current.enabled )
        {
          __asm { vmovss  dword ptr [rsp+160h+fmt], xmm6 }
          LUIElement_PlayerNameplates_GetViewHeightOffset(v34, (const PlayerEntityData *const)v26, cgameGlob, (const centity_t *const)v25, fmt, &entityOffset, 0);
          __asm { vmovss  dword ptr [rsp+160h+fmt], xmm9 }
          LUIElement_PlayerNameplates_GetViewHeightOffset(v34, (const PlayerEntityData *const)v26, cgameGlob, (const centity_t *const)v25, fmta, &v98, 1);
          v47 = DCONST_DVARFLT_cg_playerNameplateViewHeightOffset;
          if ( !DCONST_DVARFLT_cg_playerNameplateViewHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateViewHeightOffset") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v47);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+60h+entityOffset+8]
            vaddss  xmm1, xmm0, dword ptr [rbx+28h]
            vmovss  dword ptr [rbp+60h+entityOffset+8], xmm1
          }
          v49 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, NULL, &vec3_origin, &entityOffset, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)v26);
          if ( v49 != 1 && secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 48)) == 1 )
            secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v26 + 48), v49);
          v50 = (_QWORD *)(v26 + 8);
          v51 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, NULL, &vec3_origin, &v98, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)(v26 + 8));
        }
        else
        {
          v52 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)v26);
          if ( v52 != 1 && secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 48)) == 1 )
            secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v26 + 48), v52);
          v50 = (_QWORD *)(v26 + 8);
          v51 = LUIElement_PlayerNameplates_RunTrace(localClientNum, entityNum, LUI_PLAYER_NAMEPLATES_TRACE_TAG2, &LUI_PLAYER_NAMEPLATES_TRACES_TAG_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_ENTITY_OFFSET, &LUI_PLAYER_NAMEPLATES_TRACES_WORLD_OFFSET, (LUITraceRequest **)(v26 + 8));
        }
        v53 = v51;
        if ( v51 != 1 && secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 64)) == 1 )
          secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v26 + 64), v53);
        if ( secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 48)) == 3 || secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 64)) == 3 )
        {
          v57 = 3;
        }
        else
        {
          if ( secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 48)) == 1 || secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 64)) == 1 )
            goto LABEL_89;
          v54 = secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 64));
          v55 = secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 48));
          v56 = (secure_uint8_t *)(v26 + 48);
          if ( v55 <= v54 )
            v56 = (secure_uint8_t *)(v26 + 64);
          v57 = secure_uint8_t::secureInt8_Get(v56);
          if ( v57 == 1 )
          {
LABEL_89:
            v17 = entityNum;
            goto LABEL_90;
          }
        }
        secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v26 + 48), 1u);
        secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v26 + 64), 1u);
        *(_QWORD *)v26 = 0i64;
        *v50 = 0i64;
        secure_uint8_t::secureInt8_Set((secure_uint8_t *)(v26 + 16), v57);
        if ( secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 16)) == 2 || !v45 )
          *(_DWORD *)(v26 + 32) = 0;
        if ( !v27 )
          goto LABEL_89;
        v17 = entityNum;
        bitarray_base<bitarray<224>>::resetBit(&cgameGlob->sightedEnemyFools, entityNum);
        if ( cgameGlob->predictedPlayerState.pm_type <= 1u )
        {
          team = (unsigned int)CharacterInfo->team;
          v94 = 0ui64;
          v95 = 0i64;
          v96 = 0;
          v59 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          v60 = v59 && (_DWORD)team == 5;
          if ( (!v59 || (_DWORD)team != 4) && !v60 )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
              _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
            else
              _RAX = Com_TeamsMP_GetAllTeamFlags();
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups [rbp+60h+var_C0], xmm0
              vmovsd  xmm1, qword ptr [rax+10h]
              vmovsd  [rbp+60h+var_B0], xmm1
            }
            v63 = _RAX->array[6] & 0xFFEFFFFF;
            v96 = v63;
            if ( (_DWORD)team )
            {
              if ( (unsigned int)team >= 0xE0 )
              {
                LODWORD(v81) = 224;
                LODWORD(v80) = team;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v80, v81) )
                  __debugbreak();
              }
              *((_DWORD *)&v94 + (team >> 5)) &= ~(0x80000000 >> (team & 0x1F));
              v63 = v96;
            }
            if ( v59 )
              LODWORD(v94) = v94 & 0xF7FFFFFF;
            v96 = v63 & 0xFF9FFFFF;
          }
          v64 = entityNum == cgameGlob->crosshairClientNum || secure_uint8_t::secureInt8_Get((secure_uint8_t *)(v26 + 16)) == 3;
          v65 = (unsigned int)oc_ci->team;
          if ( (unsigned int)v65 >= 0xE0 )
          {
            LODWORD(isRoot) = 224;
            LODWORD(outViewHeightOffset) = oc_ci->team;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outViewHeightOffset, isRoot) )
              __debugbreak();
          }
          if ( !v86 && ((0x80000000 >> (v65 & 0x1F)) & *((_DWORD *)&v94 + (v65 >> 5))) != 0 )
          {
            v40 = !v64;
            LODWORD(v12) = localClientNum;
            if ( !v40 && CG_DrawMP_ShouldMarkForEyesOn(localClientNum, cgameGlob, oc_ci, entityNum) )
            {
              if ( entityNum >= 0xE0 )
              {
                LODWORD(v81) = 224;
                LODWORD(v80) = entityNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v80, v81) )
                  __debugbreak();
              }
              cgameGlob->sightedEnemyFools.array[(unsigned __int64)entityNum >> 5] |= 0x80000000 >> (entityNum & 0x1F);
            }
            goto LABEL_91;
          }
        }
      }
LABEL_90:
      LODWORD(v12) = localClientNum;
LABEL_91:
      LocalClientStatics = v87;
      goto LABEL_92;
    }
    *(_QWORD *)v26 = 0i64;
    *(_QWORD *)(v26 + 8) = 0i64;
    if ( !*(_BYTE *)(v26 + 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    *(_DWORD *)(v26 + 20) += *(_DWORD *)(v26 + 24);
    *(_BYTE *)(v26 + 16) = 1;
    entityNuma = (*(_DWORD *)(v26 + 20) ^ (v26 + 16)) * ((*(_DWORD *)(v26 + 20) ^ (v26 + 16)) + 2);
    *(_BYTE *)(v26 + 16) ^= (unsigned __int8)entityNuma ^ BYTE1(entityNuma);
    *(_QWORD *)(v26 + 32) = 0i64;
    *(_QWORD *)(v26 + 40) = 0i64;
    v28 = (_BYTE *)(v26 + 48);
    if ( !*(_BYTE *)(v26 + 60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    *(_DWORD *)(v26 + 52) += *(_DWORD *)(v26 + 56);
    v29 = *(_DWORD *)(v26 + 52);
    *v28 = 1;
    *v28 ^= (unsigned __int8)(((unsigned __int8)v28 ^ v29) * (((unsigned __int8)v28 ^ v29) + 2)) ^ ((unsigned __int16)(((unsigned __int16)v28 ^ v29) * (((unsigned __int16)v28 ^ v29) + 2)) >> 8);
    v30 = (_BYTE *)(v26 + 64);
    if ( !*(_BYTE *)(v26 + 76) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 435, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    *(_DWORD *)(v26 + 68) += *(_DWORD *)(v26 + 72);
    v31 = *(_DWORD *)(v26 + 68);
    *v30 = 1;
    *v30 ^= (((unsigned __int8)v30 ^ v31) * (((unsigned __int8)v30 ^ v31) + 2)) ^ ((unsigned __int16)(((unsigned __int16)v30 ^ v31) * (((unsigned __int16)v30 ^ v31) + 2)) >> 8);
    *(_DWORD *)(v26 + 80) = 0;
    if ( v27 )
    {
      if ( v17 >= 0xE0 )
      {
        LODWORD(v81) = 224;
        LODWORD(v80) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v80, v81) )
          __debugbreak();
      }
      cgameGlob->sightedEnemyFools.array[(unsigned __int64)v17 >> 5] &= ~(0x80000000 >> (v17 & 0x1F));
    }
LABEL_92:
    ++v17;
    v19 = v90 + 1;
    Data = options;
    v18 = (int)v12;
  }
  if ( CG_GetFlashbangedRemainingTime((LocalClientNum_t)v12) )
    element->currentAnimationState.flags &= ~1u;
  PostGameState = CG_MainMP_GetPostGameState((const LocalClientNum_t)v12);
  if ( (unsigned __int8)(PostGameState - 1) <= 1u || (unsigned __int8)PostGameState >= UI_POST_GAME_SCOREBOARD )
    element->currentAnimationState.flags &= ~1u;
  infilStatusOmnvarIndex = Data->infilStatusOmnvarIndex;
  if ( infilStatusOmnvarIndex != -1 )
  {
    v68 = BG_Omnvar_GetDef(infilStatusOmnvarIndex);
    v69 = CG_Omnvar_GetData((LocalClientNum_t)v12, Data->infilStatusOmnvarIndex);
    if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( v68->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
      __debugbreak();
    if ( v69->current.integer + v68->minvalue > 0 )
      element->currentAnimationState.flags &= ~1u;
  }
  v70 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  if ( v70->current.enabled )
    element->currentAnimationState.flags &= ~1u;
  Sys_ProfEndNamedEvent();
  _R11 = &v99;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
LUIElement_PlayerNameplates_Render
==============
*/
void LUIElement_PlayerNameplates_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  signed __int64 v8; 
  void *v22; 
  EntityNameplate *v25; 
  __int64 v26; 
  PlayerNameplatesOptions *Data; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  const dvar_t *v32; 
  unsigned int v33; 
  const OmnvarDef *Def; 
  const OmnvarData *v35; 
  bool Bool; 
  unsigned int hideNameplateStringsOmnvarIndex; 
  bool v38; 
  const OmnvarDef *v39; 
  const OmnvarData *v40; 
  unsigned int spawnCameraOmnvarIndex; 
  const OmnvarDef *v42; 
  const OmnvarData *v43; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 
  PostGameState PostGameState; 
  const OmnvarDef *v54; 
  const OmnvarData *v55; 
  unsigned int tacOpsMapOpenOmnvarIndex; 
  const OmnvarDef *v57; 
  const OmnvarData *v58; 
  const dvar_t *v59; 
  const dvar_t *v61; 
  const dvar_t *v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  const dvar_t *v70; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int16 i; 
  float v108; 
  __int16 v109; 
  LocalClientNum_t v113; 
  char v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  LocalClientNum_t v118; 
  CgEntitySystem *v119; 
  centity_t *v120; 
  const centity_t *v121; 
  LocalClientNum_t v122; 
  cg_t *v123; 
  const characterInfo_t *v124; 
  const characterInfo_t *v125; 
  __int16 *j; 
  team_t team; 
  team_t v128; 
  unsigned __int8 v129; 
  secure_uint8_t *p_traceState; 
  char v131; 
  bitarray_base<bitarray<224> > *v132; 
  bool v133; 
  char IsCharacterUnderCrosshairs; 
  bool v135; 
  centity_t *v136; 
  __int64 v157; 
  int renderFlags; 
  int v161; 
  int v162; 
  const dvar_t *v163; 
  __int64 v165; 
  __int64 v167; 
  __int64 v168; 
  int *v169; 
  bool v170; 
  const dvar_t *v177; 
  CgMLGCameraManager *CameraManager; 
  bool v185; 
  bool v186; 
  __int64 v188; 
  __int16 entityNum; 
  unsigned int v193; 
  int v194; 
  bool v195; 
  bool v196; 
  bool v197; 
  __int64 v198; 
  CgEntitySystem *v199; 
  char v200; 
  CgStatic *v202; 
  cg_t *v203; 
  const characterInfo_t *v204; 
  int v208; 
  bool v210; 
  int v211; 
  __int64 v212; 
  LocalClientNum_t v213; 
  CgCompassSystemMP *v214; 
  bool v215; 
  int v216; 
  unsigned __int8 v217; 
  CgGlobalsMP *v218; 
  bool v219; 
  const dvar_t *v220; 
  const char *v222; 
  const dvar_t *v228; 
  bool v231; 
  const dvar_t *v232; 
  NameplateSetting v238; 
  int v239; 
  int *v240; 
  bool v241; 
  bool v242; 
  char v244; 
  bool v245; 
  bool v246; 
  __int64 v256; 
  int v257; 
  char v258; 
  int v259; 
  char v260; 
  char v265; 
  bool IsElementSnapping; 
  __int16 v267; 
  unsigned int v268; 
  const clientInfo_t *v269; 
  char v271; 
  bool v273; 
  bool v274; 
  LocalClientNum_t v286; 
  NameplateSetting v292; 
  NameplatesGameMode gameMode; 
  PlayerNameplatesOptions *v299; 
  const GfxImage *imgMostWanted; 
  PlayerNameplatesOptions *v303; 
  bool v310; 
  bool v311; 
  NameplateSetting v315; 
  LocalClientNum_t v320; 
  bool v321; 
  PlayerNameplatesOptions *v326; 
  __int64 v327; 
  unsigned int perkIconName; 
  bool v339; 
  bool v340; 
  char v347; 
  bool v348; 
  LocalClientNum_t v349; 
  char v350; 
  bool v351; 
  int v362; 
  LUIElement *v363; 
  const clientInfo_t *v364; 
  int CharacterMaxCount; 
  int v391; 
  GfxFont *v392; 
  lua_State *v393; 
  LUIElement *v394; 
  char v395; 
  char v396; 
  const CgSnapshotMP *NextSnap; 
  centity_t *entities; 
  float v404; 
  __int64 v405; 
  LocalClientNum_t v406; 
  centity_t *v407; 
  int v408; 
  float v409; 
  cg_t *v410; 
  const characterInfo_t *v411; 
  team_t v412; 
  team_t v413; 
  cg_t *v414; 
  const clientInfo_t *v415; 
  char v416; 
  int squadIndex; 
  int v418; 
  LocalClientNum_t v419; 
  CgCompassSystemMP *v420; 
  const dvar_t *v422; 
  char v425; 
  bool v426; 
  GfxFont *v437; 
  lua_State *v438; 
  LUIElement *v439; 
  CgPlayerVisibilityTestRefId underCrosshairsTestId; 
  LocalClientNum_t v445; 
  CgPlayerVisibilityTestRefId friendlySpawnAngleTestId; 
  LocalClientNum_t v448; 
  char v449; 
  CgPlayerVisibilityTestRefId updated; 
  CgPlayerVisibilityTestRefId enemySpawnAngleTestId; 
  LocalClientNum_t v452; 
  CgPlayerVisibilityTestRefId v453; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  centity_t *entity; 
  float entitye; 
  float entityi; 
  float entityn; 
  float entityo; 
  float entityp; 
  float *entityCharacterInfo; 
  float entityCharacterInfoa; 
  float entityCharacterInfob; 
  float entityCharacterInfoc; 
  float entityCharacterInfod; 
  int entityCharacterInfoe; 
  float entityCharacterInfof; 
  float entityCharacterInfog; 
  float entityCharacterInfoh; 
  float *testSpawnAngle; 
  float testSpawnAnglea; 
  float testSpawnAngleb; 
  float testSpawnAnglec; 
  __int64 cosSpawnAngle; 
  float cosSpawnAnglea; 
  float cosSpawnAnglec; 
  float cosSpawnAngleb; 
  float cosSpawnAngled; 
  float material; 
  float materiala; 
  bool v507; 
  bool hasMarksmanPerk; 
  bool isFriendly; 
  bool spawnAngleTestResult; 
  LocalClientNum_t localClientNuma; 
  bool v512; 
  bool v513; 
  bool useFastPosition; 
  char v515; 
  PlayerNameplatesOptions *options; 
  float distanceSquared; 
  bool m_isMLGSpectator; 
  __int16 v519; 
  char v520; 
  BOOL v521; 
  int clientNum; 
  float outBottom; 
  bool v524; 
  char v525; 
  bool HasPerk; 
  bool v527; 
  bool enabled; 
  float outDesiredAlpha; 
  __int64 v530; 
  cg_t *cgameGlob; 
  centity_t *cent; 
  float outTop; 
  float outRight; 
  float offsetYScalar; 
  LocalClientNum_t v537; 
  float unitScale; 
  lua_State *v539; 
  PlayerEntityData *entityData; 
  __int64 v541; 
  vec3_t outOrg; 
  LUIElement *elementa; 
  _BYTE scaleSettings[20]; 
  bitarray_base<bitarray<224> > *CrosshairsTestResultWithWait; 
  entityType_s eType; 
  unsigned __int16 v548; 
  CgStatic *LocalClientStatics; 
  GfxFont *LUI_PLAYER_NAMEPLATES_FONT; 
  ScreenPlacement *scrPlace; 
  LUIElement *roota; 
  const characterInfo_t *CharacterInfo; 
  const clientInfo_t *v555; 
  playerState_s *ps; 
  __int64 v557; 
  vec4_t color; 
  vec2_t screenPosition; 
  vec2_t position; 
  vec3_t outOrigin; 
  vec2_t outScreenPosition; 
  vec3_t viewDir; 
  vec2_t viewDirXYNormalized[2]; 
  vec4_t v565; 
  vec4_t v566; 
  FontGlowStyle glowStyle; 
  vec4_t result; 
  _QWORD v569[5]; 
  vec4_t quadVerts[4]; 
  EntityNameplate _First[248]; 
  char distanceString[256]; 
  char v573[256]; 
  __int16 v574[252]; 
  char v585; 

  v22 = alloca(v8);
  v557 = -2i64;
  __asm
  {
    vmovaps [rsp+1AF0h+var_40], xmm6
    vmovaps [rsp+1AF0h+var_50], xmm7
    vmovaps [rsp+1AF0h+var_60], xmm8
    vmovaps [rsp+1AF0h+var_70], xmm9
    vmovaps [rsp+1AF0h+var_80], xmm10
    vmovaps [rsp+1AF0h+var_90], xmm11
    vmovaps [rsp+1AF0h+var_A0], xmm12
    vmovaps [rsp+1AF0h+var_B0], xmm13
    vmovaps [rsp+1AF0h+var_C0], xmm14
    vmovaps [rsp+1AF0h+var_D0], xmm15
  }
  roota = root;
  elementa = element;
  localClientNuma = localClientNum;
  v537 = localClientNum;
  v539 = luaVM;
  v25 = _First;
  v26 = 248i64;
  do
  {
    EntityNameplate::EntityNameplate(v25++);
    --v26;
  }
  while ( v26 );
  Data = LUIElement_PlayerNameplates_GetData(element, luaVM);
  options = Data;
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1983, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  _R15 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  cgameGlob = _R15;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.nameplates.enemyVisible");
  v548 = ModelFromPath;
  if ( Data->enemyVisibleTime == -1 )
    goto LABEL_11;
  v32 = DVARINT_cg_nameplateEnemyVisibleTimeout;
  if ( !DVARINT_cg_nameplateEnemyVisibleTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_nameplateEnemyVisibleTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( Data->enemyVisibleTime + v32->current.integer < _R15->time )
LABEL_11:
    LUI_Model_SetBool(ModelFromPath, 0);
  if ( !Data->nameplatesEnabled )
    goto LABEL_647;
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "LUIElement_PlayerNameplates_Render");
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovss  [rbp+19F0h+unitScale], xmm0 }
  v33 = _R15->predictedPlayerState.clientNum;
  m_isMLGSpectator = _R15->m_isMLGSpectator;
  Def = BG_Omnvar_GetDef(Data->alwaysShowNameplatesOmnvarIndex);
  v35 = CG_Omnvar_GetData(localClientNum, Data->alwaysShowNameplatesOmnvarIndex);
  Bool = Omnvar_GetBool(Def, v35);
  hideNameplateStringsOmnvarIndex = Data->hideNameplateStringsOmnvarIndex;
  if ( hideNameplateStringsOmnvarIndex == -1 )
  {
    v38 = 0;
  }
  else
  {
    v39 = BG_Omnvar_GetDef(hideNameplateStringsOmnvarIndex);
    v40 = CG_Omnvar_GetData(localClientNum, Data->hideNameplateStringsOmnvarIndex);
    v38 = Omnvar_GetBool(v39, v40);
  }
  v524 = v38;
  v512 = 0;
  spawnCameraOmnvarIndex = Data->spawnCameraOmnvarIndex;
  if ( spawnCameraOmnvarIndex != -1 )
  {
    v42 = BG_Omnvar_GetDef(spawnCameraOmnvarIndex);
    v43 = CG_Omnvar_GetData(localClientNum, Data->spawnCameraOmnvarIndex);
    v512 = Omnvar_GetBool(v42, v43);
  }
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v33);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2036, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
    __debugbreak();
  v555 = LocalClientStatics->GetClientInfo(LocalClientStatics, v33);
  if ( !v555 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2038, ASSERT_TYPE_ASSERT, "(myClientInfo)", (const char *)&queryFormat, "myClientInfo") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  ps = &LocalClientGlobals->predictedPlayerState;
  hasMarksmanPerk = BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x3Eu);
  HasPerk = BG_HasPerk(&p_predictedPlayerState->perks, 0x41u);
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vmovaps xmm2, xmm15; scale
  }
  LUI_PLAYER_NAMEPLATES_FONT = UI_GetFontHandle(NULL, 11, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm12, xmm12, xmm12
    vmovss  [rbp+19F0h+offsetYScalar], xmm12
    vmovss  dword ptr [rbp+19F0h+position], xmm12
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+19F0h+var_1A1C], xmm0
    vmovss  dword ptr [rbp+19F0h+position+4], xmm0
  }
  WeaponForHud = CG_GetWeaponForHud(_R15);
  UsingAltForHud = CG_GetUsingAltForHud(p_predictedPlayerState);
  BG_GetEnemyCrossHairRange(WeaponForHud, UsingAltForHud);
  if ( _R15->dualViewScope && !_R15->scopeBoundingCircleValid )
    _R15->scopeBoundingCircleValid = CG_FetchScreenSpaceScopeBoundingCircle(localClientNum, &_R15->scopeBoundingCircle);
  PostGameState = CG_MainMP_GetPostGameState(localClientNum);
  v54 = BG_Omnvar_GetDef(Data->hideNameplatesForZeroHealthOmnvarIndex);
  v55 = CG_Omnvar_GetData(_R15->localClientNum, Data->hideNameplatesForZeroHealthOmnvarIndex);
  v513 = Omnvar_GetBool(v54, v55);
  v527 = 0;
  tacOpsMapOpenOmnvarIndex = Data->tacOpsMapOpenOmnvarIndex;
  if ( tacOpsMapOpenOmnvarIndex != -1 )
  {
    v57 = BG_Omnvar_GetDef(tacOpsMapOpenOmnvarIndex);
    v58 = CG_Omnvar_GetData(localClientNum, Data->tacOpsMapOpenOmnvarIndex);
    v527 = Omnvar_GetBool(v57, v58);
  }
  v525 = 0;
  v520 = 0;
  v59 = DVARBOOL_cg_friendlyNameplateSnapToEdge;
  if ( !DVARBOOL_cg_friendlyNameplateSnapToEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateSnapToEdge") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.enabled )
  {
    v525 = 1;
    __asm { vmovss  xmm7, [rbp+19F0h+var_19A8] }
  }
  else
  {
    v61 = DVARFLT_cg_friendlyNameplateDistance;
    if ( !DVARFLT_cg_friendlyNameplateDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    _RDI = DVARFLT_cg_friendlyNameplateAngle;
    if ( !DVARFLT_cg_friendlyNameplateAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_friendlyNameplateAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+28h]
      vmovss  [rbp+19F0h+var_19A8], xmm7
    }
  }
  if ( PostGameState == UI_POST_GAME_FINAL_KILLCAM )
  {
    __asm { vmovss  xmm8, [rbp+19F0h+var_19B8] }
LABEL_43:
    v520 = 1;
    goto LABEL_44;
  }
  v70 = DVARFLT_cg_enemyNameplateDistance;
  if ( !DVARFLT_cg_enemyNameplateDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enemyNameplateDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  _RDI = DVARFLT_cg_enemyNameplateAngle;
  if ( !DVARFLT_cg_enemyNameplateAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enemyNameplateAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+28h]
    vmovss  [rbp+19F0h+var_19B8], xmm8
  }
  if ( m_isMLGSpectator || Bool )
    goto LABEL_43;
  if ( hasMarksmanPerk )
  {
    Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameDistanceScale, "perk_marksmanNameDistanceScale");
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameAngleScale, "perk_marksmanNameAngleScale");
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vminss  xmm8, xmm1, cs:__real@43340000
      vmovss  [rbp+19F0h+var_19B8], xmm8
    }
  }
LABEL_44:
  v64 = DVARBOOL_cg_playerNameplateUsePlayerVisibilityCrosshairsTest;
  if ( !DVARBOOL_cg_playerNameplateUsePlayerVisibilityCrosshairsTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateUsePlayerVisibilityCrosshairsTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  enabled = v64->current.enabled;
  if ( enabled )
  {
    CrosshairsTestResultWithWait = (bitarray_base<bitarray<224> > *)CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(localClientNum, Data->crosshairsData.underCrosshairsTestId);
    screenPosition = (vec2_t)CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(localClientNum, Data->crosshairsData.friendlySpawnAngleTestId);
    v541 = (__int64)CG_PlayerVisibilityMP_GetCrosshairsTestResultWithWait(localClientNum, Data->crosshairsData.enemySpawnAngleTestId);
    v69 = 0i64;
  }
  else
  {
    v69 = 0i64;
    CrosshairsTestResultWithWait = NULL;
    screenPosition = 0i64;
    v541 = 0i64;
  }
  __asm { vmulss  xmm0, xmm7, cs:__real@3c8efa35 }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v66, v65, v67, v68);
  __asm
  {
    vmovups xmm7, xmm0
    vshufps xmm10, xmm0, xmm0, 1
    vmulss  xmm2, xmm8, cs:__real@3c8efa35
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, xmm1, xmm2
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v79, v78, v80, v81);
  __asm
  {
    vmovups xmm8, xmm0
    vshufps xmm11, xmm0, xmm0, 1
  }
  RefdefView_GetOrg(&_R15->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm3, dword ptr [r15+6944h]
    vmovss  dword ptr [rbp+19F0h+viewDir], xmm3
    vmovss  xmm4, dword ptr [r15+6948h]
    vmovss  dword ptr [rbp+19F0h+viewDir+4], xmm4
    vmovss  xmm0, dword ptr [r15+694Ch]
    vmovss  dword ptr [rbp+19F0h+viewDir+8], xmm0
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm6, xmm0, xmm0
    vcvtss2sd xmm2, xmm6, xmm6
    vcomisd xmm2, cs:__real@3eb0c6f7a0b5ed8d
  }
  v515 = !v244;
  if ( v244 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+19F0h+outOrigin], xmm14
      vmovss  dword ptr [rbp+19F0h+outOrigin+4], xmm14
      vmovss  dword ptr [rbp+19F0h+outOrigin+8], xmm14
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm15, xmm6
      vmulss  xmm2, xmm0, xmm4
      vmulss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+19F0h+viewDirXYNormalized+8], xmm14
      vunpcklps xmm0, xmm1, xmm2
      vmovsd  qword ptr [rbp+19F0h+outOrigin], xmm0
    }
    outOrigin.v[2] = viewDirXYNormalized[1].v[0];
  }
  _RAX = &outOrigin;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rbp+19F0h+viewDirXYNormalized], xmm0
  }
  viewDirXYNormalized[1].v[0] = outOrigin.v[2];
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu ymmword ptr [rbp+19F0h+glowStyle.glowMaxDistance], ymm0
  }
  glowStyle.outlineGlowMaxDistance = 0.0;
  _RDI = DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth;
  if ( !DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesTextOutlineStrokeWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  [rbp+19F0h+glowStyle.glowMinDistance], xmm1
  }
  _RDI = DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor;
  if ( !DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesTextOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+19F0h+glowStyle.outlineGlowColor], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rbp+19F0h+glowStyle.outlineGlowColor+4], xmm1
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rbp+19F0h+glowStyle.outlineGlowColor+8], xmm0
    vmovss  xmm1, dword ptr [rdi+34h]
    vmovss  dword ptr [rbp+19F0h+glowStyle.outlineGlowColor+0Ch], xmm1
  }
  memset_0(v574, 0, 0x1F0ui64);
  memset_0(distanceString, 0, 0xF8ui64);
  memset_0(v573, 0, 0xF8ui64);
  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v574[i] = i;
  }
  v108 = 0.0;
  outBottom = 0.0;
  v109 = 0;
  v530 = 0i64;
  __asm
  {
    vmovss  xmm9, dword ptr [rbp+19F0h+outOrg+8]
    vmovss  xmm12, dword ptr [rbp+19F0h+outOrg+4]
    vmovss  xmm13, dword ptr [rbp+19F0h+outOrg]
  }
  v113 = localClientNuma;
  while ( 1 )
  {
    v114 = v512;
    v519 = v109;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v115 = v109;
    if ( v109 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    LOWORD(outDesiredAlpha) = v574[v109];
    v116 = SLOWORD(outDesiredAlpha);
    v117 = SLOWORD(outDesiredAlpha);
    v118 = localClientNuma;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(entityCharacterInfo) = localClientNuma;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", entityCharacterInfo) )
        __debugbreak();
    }
    if ( v118 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(entityCharacterInfo) = CgEntitySystem::ms_allocatedCount;
      LODWORD(entity) = v118;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v118] )
    {
      LODWORD(entityCharacterInfo) = v118;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", entityCharacterInfo) )
        __debugbreak();
    }
    v119 = CgEntitySystem::ms_entitySystemArray[v118];
    if ( (unsigned int)v117 >= 0x800 )
    {
      LODWORD(entityCharacterInfo) = 2048;
      LODWORD(entity) = v117;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
        __debugbreak();
    }
    v120 = &v119->m_entities[v117];
    cent = v120;
    if ( LUIElement_PlayerNameplates_EntityHasNameplate(options, cgameGlob, v120, v513) )
    {
      if ( (_DWORD)v117 != v119->m_entities[v117].nextState.clientNum )
      {
        LODWORD(cosSpawnAngle) = v119->m_entities[v117].nextState.clientNum;
        LODWORD(testSpawnAngle) = v117;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2144, ASSERT_TYPE_ASSERT, "( entityNum ) == ( entity->nextState.clientNum )", "%s == %s\n\t%i, %i", "entityNum", "entity->nextState.clientNum", testSpawnAngle, cosSpawnAngle) )
          __debugbreak();
      }
      v121 = &v119->m_entities[v117];
      v122 = localClientNuma;
      if ( CG_GameInterface_PlayerNameplates_SkipRender(localClientNuma, v121) || CG_Players_ShouldHidePlayerFromLocalPlayer(v122, v120->nextState.clientNum) )
      {
        v113 = v122;
        v69 = v530;
        v109 = v519 + 1;
      }
      else
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned int)v117 >= ComCharacterLimits::ms_gameData.m_characterCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_characterCount;
          LODWORD(entity) = v117;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2156, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        v123 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v123->IsMP(v123) )
        {
          if ( (unsigned int)v117 >= v123[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(entityCharacterInfo) = v123[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(entity) = v117;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
              __debugbreak();
          }
          v124 = (const characterInfo_t *)(*(_QWORD *)&v123[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v117);
        }
        else
        {
          v124 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v123, v117);
        }
        if ( !v124 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2158, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
          __debugbreak();
        v125 = CharacterInfo;
        if ( CharacterInfo == v124 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2159, ASSERT_TYPE_ASSERT, "(myCharacterInfo != entityCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo != entityCharacterInfo") )
          __debugbreak();
        if ( CG_GameInterface_PlayerNameplates_CheckPlayerLast(v124) && !distanceString[v116] )
        {
          for ( j = &v574[v115]; ; ++j )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            if ( (int)v115 >= (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
              break;
            *j = j[1];
            LODWORD(v115) = v115 + 1;
          }
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          v574[ComCharacterLimits::ms_gameData.m_characterCount - 1] = v117;
          --v519;
          distanceString[(__int16)v117] = 1;
LABEL_134:
          v108 = outBottom;
          goto LABEL_135;
        }
        team = v124->team;
        v128 = v125->team;
        if ( cgameGlob == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
          __debugbreak();
        if ( v120 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
          __debugbreak();
        if ( v128 && v128 == team )
        {
          v129 = 1;
        }
        else
        {
          v129 = 0;
          if ( v114 )
            goto LABEL_134;
        }
        entityData = &options->playerEntities[v116];
        p_traceState = &options->playerEntities[v116].traceState;
        if ( v573[v116] )
        {
          v131 = 1;
          secure_uint8_t::secureInt8_Set(&options->playerEntities[v116].traceState, 3u);
        }
        else
        {
          v131 = v520;
          if ( v129 )
            v131 = v525;
        }
        if ( !m_isMLGSpectator && !v129 && secure_uint8_t::secureInt8_Get(p_traceState) != 3 )
          goto LABEL_134;
        v132 = (bitarray_base<bitarray<224> > *)v541;
        if ( v129 )
          v132 = (bitarray_base<bitarray<224> > *)screenPosition;
        if ( v131 || !v129 )
        {
          v133 = 0;
          if ( secure_uint8_t::secureInt8_Get(p_traceState) == 2 )
          {
            IsCharacterUnderCrosshairs = 0;
LABEL_166:
            v135 = 0;
            spawnAngleTestResult = 0;
            v136 = cent;
            goto LABEL_168;
          }
        }
        else
        {
          v133 = 1;
        }
        if ( CrosshairsTestResultWithWait && (!v133 || v132) )
        {
          IsCharacterUnderCrosshairs = bitarray_base<bitarray<224>>::testBit(CrosshairsTestResultWithWait, v117);
          if ( v133 && bitarray_base<bitarray<224>>::testBit(v132, v117) )
          {
            v135 = 1;
            spawnAngleTestResult = 1;
            v136 = cent;
            goto LABEL_168;
          }
          goto LABEL_166;
        }
        _ER12 = 0;
        __asm { vmovd   xmm1, r12d }
        _EAX = v129;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm10, xmm11, xmm2
          vmovd   xmm1, r12d
        }
        _EAX = v129;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm7, xmm8, xmm2
          vmovss  [rbp+19F0h+clientNum], xmm0
          vmovss  dword ptr [rsp+1AF0h+material], xmm0
          vmovss  [rbp+19F0h+clientNum], xmm3
          vmovss  [rsp+1AF0h+cosSpawnAngle], xmm3
        }
        v136 = cent;
        __asm { vmovaps xmm2, xmm6; viewDirXYLen }
        IsCharacterUnderCrosshairs = LUIElement_PlayerNameplates_IsCharacterUnderCrosshairs(&outOrg, &viewDir, *(double *)&_XMM2, v515, viewDirXYNormalized, cent, v124, v133, cosSpawnAnglea, material, &spawnAngleTestResult);
        v135 = spawnAngleTestResult;
LABEL_168:
        if ( m_isMLGSpectator || v131 || v129 || IsCharacterUnderCrosshairs )
        {
          if ( v133 && !v135 )
            goto LABEL_134;
          useFastPosition = 1;
          v113 = localClientNuma;
          LUIElement_PlayerNameplates_GetScreenPosition(localClientNuma, scrPlace, entityData, v117, &outScreenPosition, &useFastPosition);
          CG_GetPoseOrigin(&v136->pose, &outOrigin);
          __asm
          {
            vsubss  xmm2, xmm13, dword ptr [rbp+19F0h+outOrigin]
            vsubss  xmm0, xmm12, dword ptr [rbp+19F0h+outOrigin+4]
            vsubss  xmm3, xmm9, dword ptr [rbp+19F0h+outOrigin+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm4, xmm2, xmm1
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
          v157 = v530;
          _RCX = v530;
          _First[_RCX].entityNum = LOWORD(outDesiredAlpha);
          __asm
          {
            vmovss  [rbp+rcx*4+19F0h+_First.distanceSquared], xmm4
            vmovss  xmm0, dword ptr [rbp+19F0h+outScreenPosition]
            vmovss  dword ptr [rbp+rcx*4+19F0h+_First.screenPosition], xmm0
            vmovss  xmm1, dword ptr [rbp+19F0h+outScreenPosition+4]
            vmovss  dword ptr [rbp+rcx*4+19F0h+_First.screenPosition+4], xmm1
          }
          renderFlags = _First[_RCX].renderFlags;
          if ( v129 )
            v161 = renderFlags | 2;
          else
            v161 = renderFlags & 0xFFFFFFFD;
          _First[_RCX].renderFlags = v161;
          if ( IsCharacterUnderCrosshairs )
            v162 = v161 | 1;
          else
            v162 = v161 & 0xFFFFFFFE;
          _First[_RCX].renderFlags = v162;
          LODWORD(v108) = ++LODWORD(outBottom);
          v69 = v157 + 1;
          v530 = v69;
          v109 = v519 + 1;
        }
        else
        {
          entityData->nameAlpha = 0.0;
          v108 = outBottom;
          v113 = localClientNuma;
          v69 = v530;
          v109 = v519 + 1;
        }
      }
    }
    else
    {
LABEL_135:
      v113 = localClientNuma;
      v69 = v530;
      v109 = v519 + 1;
    }
  }
  v163 = DVARBOOL_cg_playerNameplateOverlapCullingEnabled;
  if ( !DVARBOOL_cg_playerNameplateOverlapCullingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateOverlapCullingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v163);
  __asm { vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( v163->current.enabled )
  {
    std::_Sort_unchecked<EntityNameplate *,std::less<void>>(_First, &_First[SLODWORD(v108)], 20i64 * SLODWORD(v108) / 20, (std::less<void>)enabled);
    if ( !MLG_IsCoDCasterEnabled() || !MLG_IsLocalPlayerMLGSpectator(v113) )
    {
      v165 = LODWORD(v108) - 1;
      if ( LODWORD(v108) - 1 > 0 )
      {
        _RSI = &_First[v165].renderFlags;
        while ( 1 )
        {
          v167 = v165 - 1;
          *(_QWORD *)viewDir.v = v165 - 1;
          v168 = v165 - 1;
          if ( v165 < 1 )
            goto LABEL_212;
          v169 = _RSI - 5;
          do
          {
            v170 = (*_RSI & 2) != 0;
            if ( (*_RSI & 2) != 0 )
            {
              if ( (*v169 & 2) != 0 )
                goto LABEL_210;
            }
            else if ( (*v169 & 2) == 0 )
            {
              goto LABEL_210;
            }
            *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
            __asm { vmovaps xmm6, xmm0 }
            _R14 = DCONST_DVARFLT_cg_playerNameplatesChevronHeight;
            if ( !DCONST_DVARFLT_cg_playerNameplatesChevronHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesChevronHeight") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_R14);
            __asm { vmovss  xmm7, dword ptr [r14+28h] }
            _R14 = DCONST_DVARFLT_cg_playerNameplatesNameFontHeight;
            if ( !DCONST_DVARFLT_cg_playerNameplatesNameFontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesNameFontHeight") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_R14);
            __asm
            {
              vmovss  xmm0, dword ptr [r14+28h]
              vmaxss  xmm1, xmm0, xmm7
              vmulss  xmm7, xmm1, xmm6
            }
            v177 = DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth;
            if ( !DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplateOverlapCullingWidth") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v177);
            __asm
            {
              vmulss  xmm2, xmm6, dword ptr [r14+28h]
              vmovss  xmm1, dword ptr [rsi+8]
              vsubss  xmm0, xmm1, dword ptr [rdi+8]
              vandps  xmm0, xmm0, xmm9
              vcomiss xmm2, xmm0
              vmovss  xmm0, dword ptr [rsi+0Ch]
              vsubss  xmm1, xmm0, dword ptr [rdi+0Ch]
              vandps  xmm1, xmm1, xmm9
              vcomiss xmm7, xmm1
            }
            if ( !(v244 | v245) )
            {
              if ( v170 )
                *_RSI |= 4u;
              else
                *v169 |= 4u;
            }
LABEL_210:
            v169 -= 5;
            --v168;
          }
          while ( v168 >= 0 );
          v167 = *(_QWORD *)viewDir.v;
LABEL_212:
          v165 = v167;
          _RSI -= 5;
          if ( v167 <= 0 )
          {
            v113 = localClientNuma;
            v69 = v530;
            break;
          }
        }
      }
    }
  }
  v185 = 0;
  if ( m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(cgameGlob->m_mlgSpectatorPtr);
    if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, v113) == AERIAL )
      v185 = 1;
  }
  v513 = v185;
  v186 = v69 <= 0;
  _R14 = options;
  if ( !v186 )
  {
    v188 = 0i64;
    *(_QWORD *)viewDir.v = 0i64;
    __asm
    {
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm15, cs:__real@358637be
    }
    while ( 1 )
    {
      _RBX = v188;
      entityNum = _First[v188].entityNum;
      v519 = entityNum;
      v193 = _First[v188].renderFlags;
      v194 = v193 >> 1;
      LOBYTE(v194) = (v193 & 2) != 0;
      v521 = v194;
      isFriendly = v194;
      v195 = _R14->gameMode == NAMEPLATE_MODE_BR && (v193 & 2) != 0 || v185;
      v512 = v195;
      v196 = 0;
      v197 = (v193 & 4) != 0;
      if ( !v195 )
        v196 = v197;
      if ( v196 || entityNum == 2047 || v527 && !(_BYTE)v194 )
        goto LABEL_563;
      v541 = 88i64 * entityNum;
      v198 = entityNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(entityCharacterInfo) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", entityCharacterInfo) )
          __debugbreak();
      }
      if ( v113 >= (unsigned int)CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(entityCharacterInfo) = CgEntitySystem::ms_allocatedCount;
        LODWORD(entity) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v113] )
      {
        LODWORD(entityCharacterInfo) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", entityCharacterInfo) )
          __debugbreak();
      }
      v199 = CgEntitySystem::ms_entitySystemArray[v113];
      if ( (unsigned int)v198 >= 0x800 )
      {
        LODWORD(entityCharacterInfo) = 2048;
        LODWORD(entity) = v198;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      cent = &v199->m_entities[v198];
      v200 = _First[_RBX].renderFlags & 1;
      __asm
      {
        vmovss  xmm7, [rbp+rbx*4+19F0h+_First.distanceSquared]
        vmovss  [rbp+19F0h+distanceSquared], xmm7
      }
      screenPosition = _First[_RBX].screenPosition;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned int)v198 >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_characterCount;
        LODWORD(entity) = v198;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2343, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      v202 = LocalClientStatics;
      v203 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v203 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v203->IsMP(v203) )
      {
        if ( (unsigned int)v198 >= v203[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(entityCharacterInfo) = v203[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(entity) = v198;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        v204 = (const characterInfo_t *)(*(_QWORD *)&v203[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v198);
      }
      else
      {
        v204 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v203, v198);
      }
      viewDirXYNormalized[0] = (vec2_t)v204;
      if ( !v204 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2345, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
        __debugbreak();
      __asm
      {
        vmovaps xmm12, xmm14
        vmovss  dword ptr [rbp+19F0h+outScreenPosition], xmm14
        vmovaps xmm8, xmm14
        vmovss  [rbp+19F0h+outTop], xmm14
        vmovaps xmm13, xmm14
        vmovss  [rbp+19F0h+outRight], xmm14
        vmovss  [rbp+19F0h+outBottom], xmm14
      }
      v208 = 0;
      LODWORD(CrosshairsTestResultWithWait) = -1;
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rbp+19F0h+outDesiredAlpha], xmm0
      }
      v210 = (int)v198 < cls.maxClients && v204->infoValid && Party_ClientIsInMyParty(v198);
      spawnAngleTestResult = BYTE2(cgameGlob[1].predictedPlayerState.inputTime);
      if ( cent->nextState.eType == ET_PLAYER )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v211 = v519;
        if ( v519 >= ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(entity) = v211;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2367, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
            __debugbreak();
        }
        v212 = (__int64)v202->GetClientInfo(v202, v211);
        if ( !v212 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2369, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
          __debugbreak();
        LODWORD(CrosshairsTestResultWithWait) = *(_DWORD *)(v212 + 120) & 7;
        v507 = v555->squadIndex == *(_DWORD *)(v212 + 160);
      }
      else
      {
        v507 = 0;
      }
      v213 = localClientNuma;
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
      {
        LODWORD(cosSpawnAngle) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        LODWORD(testSpawnAngle) = 2;
        LODWORD(entityCharacterInfo) = localClientNuma;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", entityCharacterInfo, testSpawnAngle, cosSpawnAngle) )
          __debugbreak();
      }
      if ( v213 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(entityCharacterInfo) = CgCompassSystem::ms_allocatedCount;
        LODWORD(entity) = v213;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v213] )
      {
        LODWORD(entityCharacterInfo) = v213;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", entityCharacterInfo) )
          __debugbreak();
      }
      v214 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v213];
      if ( m_isMLGSpectator )
      {
        if ( v204->team == TEAM_TWO )
          CgCompassSystemMP::GetFriendlyCompassLightColor(v214, &color, (CgGlobalsMP *)cgameGlob);
        else
          CgCompassSystemMP::GetEnemyCompassLightColor(v214, &color, (CgGlobalsMP *)cgameGlob);
        v215 = v521;
        goto LABEL_361;
      }
      v216 = CL_Mgr_GetControllerFromClient(v213);
      v217 = GamerProfile_ColorBlindMode(v216);
      if ( (unsigned int)(CharacterInfo->team - 201) > 1 )
        goto LABEL_335;
      v218 = (CgGlobalsMP *)cgameGlob;
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v218->predictedPlayerState.otherFlags, ACTIVE, 0x21u) )
      {
LABEL_335:
        v215 = v521;
        if ( !v521 )
        {
          if ( v217 == 2 )
          {
            _RDI = DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor;
            if ( !DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor )
            {
              v231 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDeuteranopiaEnemyColor");
LABEL_357:
              if ( v231 )
                __debugbreak();
            }
            goto LABEL_359;
          }
          v232 = DVARBOOL_lui_ui_colorblind_swap_enabled;
          if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v232);
          if ( v232->current.enabled )
          {
            CgCompassSystemMP::GetEnemyCompassColor(v214, &color, (CgGlobalsMP *)cgameGlob);
            goto LABEL_361;
          }
          _RDI = DCONST_DVARVEC4_cg_playerNameplatesEnemyColor;
          if ( !DCONST_DVARVEC4_cg_playerNameplatesEnemyColor )
          {
            v231 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesEnemyColor");
            goto LABEL_357;
          }
LABEL_359:
          Dvar_CheckFrontendServerThread(_RDI);
LABEL_360:
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vmovss  dword ptr [rbp+19F0h+color], xmm0
            vmovss  xmm1, dword ptr [rdi+2Ch]
            vmovss  dword ptr [rbp+19F0h+color+4], xmm1
            vmovss  xmm0, dword ptr [rdi+30h]
            vmovss  dword ptr [rbp+19F0h+color+8], xmm0
            vmovss  xmm1, dword ptr [rdi+34h]
            vmovss  dword ptr [rbp+19F0h+color+0Ch], xmm1
          }
          goto LABEL_361;
        }
        _RCX = options;
        if ( options->gameMode == NAMEPLATE_MODE_BR )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovups xmmword ptr [rbp+19F0h+color], xmm0
          }
          v219 = v507;
          goto LABEL_363;
        }
        v245 = !v210;
        v219 = v507;
        if ( !v245 || spawnAngleTestResult && v507 )
        {
          CgCompassSystemMP::GetPartyCompassColor(v214, &color, (CgGlobalsMP *)cgameGlob);
        }
        else if ( v217 == 2 )
        {
          Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor, "cg_playerNameplatesDeuteranopiaFriendlyColor", &color);
        }
        else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_ui_colorblind_swap_enabled, "lui_ui_colorblind_swap_enabled") )
        {
          CgCompassSystemMP::GetFriendlyCompassColor(v214, &color, (CgGlobalsMP *)cgameGlob);
        }
        else
        {
          Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor, "cg_playerNameplatesFriendlyColor", &color);
        }
      }
      else
      {
        if ( v204->team != TEAM_TWO )
        {
          if ( v217 == 2 )
          {
            _RDI = DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor;
            if ( !DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesDeuteranopiaEnemyColor") )
              __debugbreak();
          }
          else
          {
            v228 = DVARBOOL_lui_ui_colorblind_swap_enabled;
            if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v228);
            if ( v228->current.enabled )
            {
              CgCompassSystemMP::GetEnemyCompassColor(v214, &color, (CgGlobalsMP *)cgameGlob);
              v215 = v521;
LABEL_361:
              v219 = v507;
              goto LABEL_362;
            }
            _RDI = DCONST_DVARVEC4_cg_playerNameplatesEnemyColor;
            if ( !DCONST_DVARVEC4_cg_playerNameplatesEnemyColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerNameplatesEnemyColor") )
              __debugbreak();
          }
          Dvar_CheckFrontendServerThread(_RDI);
          v215 = v521;
          goto LABEL_360;
        }
        v245 = !v210;
        v219 = v507;
        if ( !v245 || spawnAngleTestResult && v507 )
        {
          CgCompassSystemMP::GetPartyCompassColor(v214, &color, v218);
          v215 = v521;
          goto LABEL_362;
        }
        v220 = DVARBOOL_lui_ui_colorblind_swap_enabled;
        if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v220);
        if ( !v220->current.enabled )
        {
          if ( v217 == 2 )
          {
            _RDI = DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor;
            if ( !DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor )
            {
              v222 = "cg_playerNameplatesDeuteranopiaFriendlyColor";
LABEL_315:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v222) )
                __debugbreak();
            }
          }
          else
          {
            _RDI = DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor;
            if ( !DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor )
            {
              v222 = "cg_playerNameplatesFriendlyColor";
              goto LABEL_315;
            }
          }
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vmovss  dword ptr [rbp+19F0h+color], xmm0
            vmovss  xmm1, dword ptr [rdi+2Ch]
            vmovss  dword ptr [rbp+19F0h+color+4], xmm1
            vmovss  xmm0, dword ptr [rdi+30h]
            vmovss  dword ptr [rbp+19F0h+color+8], xmm0
            vmovss  xmm1, dword ptr [rdi+34h]
            vmovss  dword ptr [rbp+19F0h+color+0Ch], xmm1
          }
          v215 = v521;
          goto LABEL_362;
        }
        CgCompassSystemMP::GetFriendlyCompassColor(v214, &color, (CgGlobalsMP *)cgameGlob);
        v215 = v521;
      }
LABEL_362:
      _RCX = options;
LABEL_363:
      memset((char *)v569 + 4, 0, 24);
      *(_QWORD *)&scaleSettings[4] = 0i64;
      *(_QWORD *)&scaleSettings[12] = 0i64;
      if ( !v215 )
      {
        __asm { vmovdqu xmm0, cs:__xmm@000000260000001b0000001c0000001a }
        v238 = PTRDIFF|0x20;
        LODWORD(v569[2]) = -1;
        LODWORD(v569[3]) = 40;
        goto LABEL_369;
      }
      if ( spawnAngleTestResult && v219 )
      {
        __asm { vmovdqu xmm0, cs:__xmm@000000040000000b000000090000000a }
        v238 = LONG;
        LODWORD(v569[2]) = 5;
        LODWORD(v569[3]) = 34;
LABEL_369:
        HIDWORD(v569[2]) = v238;
        goto LABEL_370;
      }
      __asm { vmovdqu xmm0, cs:__xmm@00000001000000080000000600000007 }
      v238 = NONE;
      v569[2] = 2i64;
      LODWORD(v569[3]) = 33;
LABEL_370:
      __asm { vmovdqu xmmword ptr [rbp+19F0h+var_1898], xmm0 }
      v239 = 0;
      v240 = (int *)v569;
      __asm { vxorps  xmm10, xmm10, xmm10 }
      v241 = v521;
      v242 = hasMarksmanPerk;
      do
      {
        _RAX = *v240;
        if ( (_DWORD)_RAX == -1 )
          goto LABEL_378;
        __asm
        {
          vmovss  xmm6, dword ptr [rcx+rax*4+9A8h]
          vcomiss xmm6, xmm10
        }
        if ( (_DWORD)_RAX != -1 )
          goto LABEL_377;
        v244 = 0;
        v245 = !v242;
        if ( v242 )
        {
          v244 = 0;
          v245 = !v241;
          if ( !v241 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameDistanceScale, "perk_marksmanNameDistanceScale");
            __asm { vmulss  xmm6, xmm0, xmm6 }
            _RCX = options;
          }
        }
        __asm
        {
          vmulss  xmm0, xmm6, xmm6
          vcomiss xmm7, xmm0
        }
        if ( !(v244 | v245) )
LABEL_378:
          v208 &= ~(1 << v239);
        else
LABEL_377:
          v208 |= 1 << v239;
        ++v239;
        ++v240;
      }
      while ( v239 < 7 );
      LODWORD(entityData) = v208;
      v246 = v521;
      if ( v521 )
      {
        if ( spawnAngleTestResult && v507 )
        {
          __asm { vmovdqu xmm0, cs:__xmm@00000016000000170000001400000015 }
          *(_DWORD *)&scaleSettings[16] = 36;
        }
        else
        {
          __asm { vmovdqu xmm0, cs:__xmm@00000012000000130000001000000011 }
          *(_DWORD *)&scaleSettings[16] = 35;
        }
      }
      else
      {
        __asm { vmovdqu xmm0, cs:__xmm@0000001f000000200000001d0000001e }
        *(_DWORD *)&scaleSettings[16] = -1;
      }
      __asm { vmovdqu xmmword ptr [rbp+19F0h+scaleSettings], xmm0 }
      _R14 = options;
      *(float *)&_XMM0 = ComputeNameplateScaleByDistance(options, (NameplateSetting *)scaleSettings, &distanceSquared);
      __asm { vmovaps xmm11, xmm0 }
      _RAX = cgameGlob;
      if ( cgameGlob->scopeBoundingCircleValid )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rax+0B535Ch]
          vsubss  xmm5, xmm1, dword ptr [rbp+19F0h+screenPosition]
          vmovss  xmm2, dword ptr [rax+0B5360h]
          vsubss  xmm3, xmm2, dword ptr [rbp+19F0h+screenPosition+4]
          vmulss  xmm4, xmm3, xmm3
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, dword ptr [rax+0B5364h]
        }
        if ( cgameGlob->scopeBoundingCircleValid )
          goto LABEL_561;
      }
      if ( !v246 || !v200 || (useFastPosition = 1, (v208 & 6) == 0) )
        useFastPosition = 0;
      v256 = (__int64)&_R14->playerEntities[0].traceState + v541;
      if ( !*(&_R14->playerEntities[0].traceState.initialized + v541) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 462, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v257 = *(_DWORD *)(v256 + 4) ^ v256;
      clientNum = v257 * (v257 + 2);
      v258 = *(_BYTE *)v256 ^ (v257 * (v257 + 2)) ^ ((unsigned __int16)(v257 * (v257 + 2)) >> 8);
      v515 = v258;
      if ( !*(_BYTE *)(v256 + 12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 462, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v259 = ((*(_DWORD *)(v256 + 4) ^ (unsigned int)v256) * ((*(_DWORD *)(v256 + 4) ^ (unsigned int)v256) + 2)) >> 8;
      LOBYTE(v259) = ((*(_BYTE *)(v256 + 4) ^ v256) * ((*(_BYTE *)(v256 + 4) ^ v256) + 2)) ^ ((unsigned __int16)((*(_WORD *)(v256 + 4) ^ v256) * ((*(_WORD *)(v256 + 4) ^ v256) + 2)) >> 8);
      clientNum = v259;
      v260 = *(_BYTE *)v256;
      v515 = v260;
      LOBYTE(outDesiredAlpha) = v260 ^ v259;
      if ( v200 && !v521 && v258 == 3 && (_BYTE)v259 != v260 )
      {
        _R14->enemyVisibleTime = cgameGlob->time;
        LUI_Model_SetBool(v548, 1);
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r14+20h]
        vmulss  xmm1, xmm0, cs:__real@3c03126f
        vmaxss  xmm2, xmm1, cs:__real@3dcccccd
        vmovss  xmm7, cs:__real@3f800000
        vminss  xmm10, xmm2, xmm7
      }
      v265 = 0;
      IsElementSnapping = 0;
      v267 = CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead(*(const characterInfo_t *const *)viewDirXYNormalized, cent);
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v267 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
        v265 = 1;
      eType = cent->nextState.eType;
      if ( eType != ET_PLAYER )
      {
        if ( v265 )
          goto LABEL_507;
        goto LABEL_514;
      }
      if ( v265 )
        goto LABEL_507;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v268 = v519;
      if ( v519 >= ComCharacterLimits::ms_gameData.m_clientCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(entityCharacterInfo) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(entity) = v268;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2527, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "entityNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
          __debugbreak();
      }
      v269 = LocalClientStatics->GetClientInfo(LocalClientStatics, v268);
      if ( !v269 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2529, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      __asm { vmovaps xmm8, xmm11 }
      v271 = v515;
      if ( (_BYTE)v259 != v515 || !v521 || spawnAngleTestResult && v507 )
      {
        _R14 = options;
      }
      else
      {
        _R14 = options;
        __asm { vmovss  xmm7, dword ptr [r14+0A54h] }
      }
      v273 = v258 == 3 && ((unsigned __int8)entityData & 2) != 0;
      v274 = (_BYTE)v259 == v515 && ((unsigned __int8)entityData & 0x20) != 0;
      if ( useFastPosition )
      {
        _RAX = *(int *)&scaleSettings[16];
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rax*4+9A8h]
          vmaxss  xmm8, xmm0, xmm11
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rsp+1AF0h+entity], xmm0
        }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(_R14, v569[3], &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm6, xmm0 }
      }
      else if ( v273 )
      {
        __asm { vmovss  dword ptr [rsp+1AF0h+entity], xmm7 }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(_R14, SHIDWORD(v569[0]), &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm6, xmm0 }
      }
      else if ( v274 )
      {
        __asm { vmovss  dword ptr [rsp+1AF0h+entity], xmm7 }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(_R14, v238, &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      _RSI = (__int64)&_R14->playerEntities[0].scale + v541;
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm9, xmm0, xmm10
        vmulss  xmm1, xmm9, dword ptr [rsi]
        vmulss  xmm0, xmm10, xmm8
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rsi], xmm1
      }
      v286 = localClientNuma;
      *(float *)&_XMM0 = LUIElement_PlayerNameplates_GetScalarScreenOffsetY(localClientNuma, scrPlace, cent);
      __asm { vmovss  [rbp+19F0h+offsetYScalar], xmm0 }
      testSpawnAngle = &offsetYScalar;
      entityCharacterInfo = &unitScale;
      GenerateChevronVerts((float *)&outScreenPosition, &outRight, &outTop, &outBottom);
      __asm
      {
        vmovss  xmm12, [rbp+19F0h+outRight]
        vmovss  [rbp+19F0h+offsetYScalar], xmm12
        vmovss  dword ptr [rbp+19F0h+position], xmm12
        vmovss  xmm0, [rbp+19F0h+outBottom]
        vsubss  xmm1, xmm0, [rbp+19F0h+outTop]
        vmulss  xmm2, xmm1, cs:__real@3f000000
        vaddss  xmm0, xmm2, [rbp+19F0h+outTop]
        vmovss  [rbp+19F0h+var_1A1C], xmm0
        vmovss  dword ptr [rbp+19F0h+position+4], xmm0
      }
      IsElementSnapping = LUIElement_PlayerNameplates_IsElementSnapping(v286, &isFriendly, (float *)&outScreenPosition, &outTop, &outRight, &outBottom);
      if ( IsElementSnapping )
      {
        if ( !spawnAngleTestResult || (v292 = LONG_DOUBLE|SIZE_T, !v507) )
          v292 = LONG_DOUBLE|LONG_LONG;
        __asm { vmovss  dword ptr [rsp+1AF0h+entity], xmm7 }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(options, v292, &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm6, xmm0 }
      }
      __asm { vmovss  xmm7, cs:__real@3f800000 }
      if ( v512 )
      {
        __asm { vmovss  [rbp+19F0h+outDesiredAlpha], xmm7 }
        LUIElement_PlayerNameplates_CenterFadeAlpha(localClientNuma, options, &position, v521, &outDesiredAlpha);
        __asm { vmovss  xmm6, [rbp+19F0h+outDesiredAlpha] }
      }
      __asm { vmulss  xmm1, xmm10, xmm6 }
      _R10 = options;
      _RAX = v541;
      __asm
      {
        vmulss  xmm0, xmm9, dword ptr [rax+r10+0A88h]
        vaddss  xmm2, xmm1, xmm0
        vmovss  dword ptr [rax+r10+0A88h], xmm2
        vmovss  dword ptr [rbp+19F0h+color+0Ch], xmm2
        vmovss  xmm12, dword ptr [rbp+19F0h+outScreenPosition]
        vmovss  xmm8, [rbp+19F0h+outTop]
        vmovss  xmm13, [rbp+19F0h+outRight]
        vmovss  xmm14, [rbp+19F0h+outBottom]
        vxorps  xmm6, xmm6, xmm6
      }
      if ( _R10->shouldDisplayChevron )
      {
        __asm { vucomiss xmm6, dword ptr [rax+r10+0A88h] }
        if ( _R10->shouldDisplayChevron )
        {
          gameMode = _R10->gameMode;
          if ( (((gameMode - 1) & 0xFFFFFFFD) == 0 || gameMode == NAMEPLATE_MODE_GW && v507) && (int)CrosshairsTestResultWithWait > 0 && v521 )
          {
            LUI_CoD_GameMP_GetBrColorForIndex((const int)CrosshairsTestResultWithWait, &v566);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+19F0h+color+0Ch]
              vmovss  dword ptr [rbp+19F0h+var_18F0+0Ch], xmm0
            }
            v299 = options;
            gameMode = options->gameMode;
          }
          else
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+19F0h+color]
              vmovdqa xmmword ptr [rbp+19F0h+var_18F0], xmm0
            }
            v299 = _R10;
          }
          if ( gameMode == NAMEPLATE_MODE_BR && (UnpackValue(v269->game_extrainfo, 6u, 0xAu) & 0x80) != 0 )
            imgMostWanted = v299->imgMostWanted;
          else
            imgMostWanted = NULL;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+19F0h+var_18F0]
            vmovdqa xmmword ptr [rbp+19F0h+viewDirXYNormalized], xmm0
          }
          v303 = LUIElement_PlayerNameplates_GetData(elementa, v539);
          __asm
          {
            vmovaps xmm3, xmm14; bottom
            vmovaps xmm2, xmm13; right
            vmovaps xmm1, xmm8; top
            vmovaps xmm0, xmm12; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          if ( !imgMostWanted )
          {
            if ( v521 )
              imgMostWanted = v303->imgChevronFriendly;
            else
              imgMostWanted = v303->imgChevronEnemy;
          }
          __asm
          {
            vmovss  dword ptr [rsp+1AF0h+testSpawnAngle], xmm7
            vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm7
            vmovss  dword ptr [rsp+1AF0h+entity], xmm6
            vmovss  dword ptr [rsp+1AF0h+fmt], xmm6
          }
          LUI_Render_DrawImage(localClientNuma, elementa, v539, (const vec4_t (*)[4])quadVerts, fmt, entitye, entityCharacterInfoa, testSpawnAnglea, (const vec4_t *)viewDirXYNormalized, imgMostWanted);
          LOBYTE(v259) = clientNum;
          v271 = v515;
          _R10 = options;
          _RAX = v541;
        }
      }
      if ( _R10->shouldDisplayRank )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rax+r10+0A88h]
          vucomiss xmm2, xmm6
        }
        if ( _R10->shouldDisplayRank )
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
            vmovss  dword ptr [rbp+19F0h+var_1900], xmm0
            vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
            vmovss  dword ptr [rbp+19F0h+var_1900+4], xmm1
            vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
            vmovss  dword ptr [rbp+19F0h+var_1900+8], xmm0
            vmovss  dword ptr [rbp+19F0h+var_1900+0Ch], xmm2
            vmovss  xmm1, dword ptr [rsi]
            vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm1
          }
          LUIElement_PlayerNameplates_DrawRankIcon(localClientNuma, v269, elementa, v539, &v565, &screenPosition, entityCharacterInfob);
          _R10 = options;
        }
      }
      if ( v269->perkIconName )
      {
        __asm { vmovaps xmm7, xmm11 }
        v310 = v258 == 3 && ((unsigned __int8)entityData & 4) != 0;
        v311 = (_BYTE)v259 == v271 && ((unsigned __int8)entityData & 0x10) != 0;
        if ( useFastPosition )
        {
          _RAX = *(int *)&scaleSettings[16];
          __asm
          {
            vmovss  xmm0, dword ptr [r10+rax*4+9A8h]
            vmaxss  xmm7, xmm0, xmm11
          }
          v315 = v569[3];
          goto LABEL_486;
        }
        if ( v310 )
        {
          v315 = v569[1];
          goto LABEL_486;
        }
        if ( v311 )
        {
          v315 = v569[2];
LABEL_486:
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+1AF0h+entity], xmm0
          }
          *(float *)&_XMM0 = ComputeAlphaForNameplateElement(_R10, v315, &distanceSquared, &hasMarksmanPerk, &isFriendly);
          __asm { vmovaps xmm6, xmm0 }
        }
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rsi]
          vmulss  xmm0, xmm10, xmm7
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rsi], xmm1
        }
        entityCharacterInfo = &unitScale;
        GeneratePerkVerts((float *)&outScreenPosition, &outRight, &outTop, &outBottom);
        v320 = localClientNuma;
        IsElementSnapping = LUIElement_PlayerNameplates_IsElementSnapping(localClientNuma, &isFriendly, (float *)&outScreenPosition, &outTop, &outRight, &outBottom);
        v321 = !IsElementSnapping;
        if ( IsElementSnapping )
        {
          if ( spawnAngleTestResult && v507 )
          {
            __asm
            {
              vmovss  xmm7, cs:__real@3f800000
              vmovss  dword ptr [rsp+1AF0h+entity], xmm7
            }
            *(float *)&_XMM0 = ComputeAlphaForNameplateElement(options, LONG_DOUBLE|PTRDIFF, &distanceSquared, &hasMarksmanPerk, &isFriendly);
            __asm { vmovaps xmm6, xmm0 }
          }
          else
          {
            __asm
            {
              vmovss  xmm7, cs:__real@3f800000
              vmovss  dword ptr [rsp+1AF0h+entity], xmm7
            }
            *(float *)&_XMM0 = ComputeAlphaForNameplateElement(options, LONG_DOUBLE|MAX_INT, &distanceSquared, &hasMarksmanPerk, &isFriendly);
            __asm { vmovaps xmm6, xmm0 }
          }
        }
        else
        {
          __asm { vmovss  xmm7, cs:__real@3f800000 }
        }
        __asm { vmulss  xmm1, xmm10, xmm6 }
        _RAX = options;
        _RCX = v541;
        __asm
        {
          vmulss  xmm0, xmm9, dword ptr [rcx+rax+0A84h]
          vaddss  xmm2, xmm1, xmm0
          vmovss  dword ptr [rcx+rax+0A84h], xmm2
          vxorps  xmm6, xmm6, xmm6
          vucomiss xmm2, xmm6
        }
        if ( v321 )
        {
          __asm
          {
            vmovss  xmm12, dword ptr [rbp+19F0h+outScreenPosition]
            vmovss  xmm8, [rbp+19F0h+outTop]
            vmovss  xmm13, [rbp+19F0h+outRight]
            vmovss  xmm14, [rbp+19F0h+outBottom]
          }
        }
        else
        {
          __asm { vmovss  dword ptr [rbp+19F0h+color+0Ch], xmm2 }
          v326 = LUIElement_PlayerNameplates_GetData(elementa, v539);
          if ( !v326 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 1152, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options", &unitScale, testSpawnAngle) )
            __debugbreak();
          v327 = v519;
          perkIconName = v269->perkIconName;
          if ( perkIconName != v326->perkIndexCache[v519] || !v326->perkImageCache[v519] )
          {
            v326->perkIndexCache[v519] = perkIconName;
            if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_IMAGE, v269->perkIconName, (const char **)&outOrigin) && *(_QWORD *)outOrigin.v && **(_BYTE **)outOrigin.v )
              v326->perkImageCache[v327] = Image_Register(*(const char **)outOrigin.v, IMAGE_TRACK_HUD);
          }
          __asm
          {
            vmovss  xmm14, [rbp+19F0h+outBottom]
            vmovaps xmm3, xmm14; bottom
            vmovss  xmm13, [rbp+19F0h+outRight]
            vmovaps xmm2, xmm13; right
            vmovss  xmm8, [rbp+19F0h+outTop]
            vmovaps xmm1, xmm8; top
            vmovss  xmm12, dword ptr [rbp+19F0h+outScreenPosition]
            vmovaps xmm0, xmm12; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmovss  dword ptr [rsp+1AF0h+testSpawnAngle], xmm7
            vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm7
            vmovss  dword ptr [rsp+1AF0h+entity], xmm6
            vmovss  dword ptr [rsp+1AF0h+fmt], xmm6
          }
          LUI_Render_DrawImage(v320, elementa, v539, (const vec4_t (*)[4])quadVerts, fmta, entityi, entityCharacterInfoc, testSpawnAngleb, &color, v326->perkImageCache[v327]);
        }
      }
      if ( IsElementSnapping )
      {
        __asm { vmovss  xmm9, cs:__real@3f000000 }
LABEL_507:
        if ( options->gameMode == NAMEPLATE_MODE_BR && IsElementSnapping && !v265 )
        {
          __asm
          {
            vsubss  xmm0, xmm13, xmm12
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm7, xmm1, xmm12
            vmovss  [rbp+19F0h+offsetYScalar], xmm7
            vsubss  xmm2, xmm14, xmm8
            vmulss  xmm0, xmm2, xmm9
            vaddss  xmm6, xmm0, xmm8
            vmovss  [rbp+19F0h+var_1A1C], xmm6
            vsubss  xmm0, xmm12, dword ptr [rax+58h]
            vmulss  xmm1, xmm0, xmm0
            vcomiss xmm1, xmm15
            vsubss  xmm0, xmm13, dword ptr [rax+60h]
            vmulss  xmm1, xmm0, xmm0
            vcomiss xmm1, xmm15
            vmovss  dword ptr [rbp+19F0h+position], xmm7
            vsubss  xmm0, xmm8, dword ptr [rax+5Ch]
            vmulss  xmm1, xmm0, xmm0
            vcomiss xmm1, xmm15
            vmovss  [rbp+19F0h+var_1A1C], xmm8
            vmovss  dword ptr [rbp+19F0h+position+4], xmm8
          }
          screenPosition = position;
          _R14 = options;
          _RDI = (const float *)((char *)&options->playerEntities[0].scale + v541);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vmovss  [rsp+1AF0h+cosSpawnAngle], xmm0
          }
          v391 = v519;
          v392 = LUI_PLAYER_NAMEPLATES_FONT;
          v393 = v539;
          v394 = elementa;
          v113 = localClientNuma;
          LUIElement_PlayerNameplates_DrawPlayerName(localClientNuma, elementa, roota, v539, &color, LUI_PLAYER_NAMEPLATES_FONT, v519, &screenPosition, cosSpawnAngleb, &glowStyle, 0, 1, 12);
          __asm
          {
            vmovss  xmm0, dword ptr [r14+0A0Ch]
            vxorps  xmm14, xmm14, xmm14
            vcomiss xmm0, xmm14
          }
          if ( !(v395 | v396) && spawnAngleTestResult && v507 )
          {
            clientNum = v391;
            LUIElement_PlayerNameplates_DrawPlayerDistance(cent, (SecureVec3 *)&outOrg, &screenPosition, _RDI, &clientNum, v392, &v537, v393, v394, &color, &glowStyle, 0);
            v113 = v537;
            localClientNuma = v537;
          }
          goto LABEL_563;
        }
        _R14 = options;
LABEL_561:
        __asm { vxorps  xmm14, xmm14, xmm14 }
        goto LABEL_562;
      }
      __asm { vmovss  xmm7, cs:__real@3f800000 }
      LOBYTE(v259) = clientNum;
      v260 = v515;
LABEL_514:
      __asm { vmovaps xmm6, xmm11 }
      v339 = v258 == 3 && ((unsigned __int8)entityData & 1) != 0;
      v340 = (_BYTE)v259 == v260 && ((unsigned __int8)entityData & 8) != 0;
      _R14 = options;
      if ( useFastPosition )
      {
        _RAX = *(int *)&scaleSettings[16];
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rax*4+9A8h]
          vmaxss  xmm6, xmm0, xmm11
          vmovss  dword ptr [rsp+1AF0h+entity], xmm7
        }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(options, v569[3], &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm2, xmm0 }
      }
      else if ( v339 )
      {
        __asm { vmovss  dword ptr [rsp+1AF0h+entity], xmm7 }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(options, v569[0], &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm2, xmm0 }
      }
      else if ( v340 )
      {
        __asm { vmovss  dword ptr [rsp+1AF0h+entity], xmm7 }
        *(float *)&_XMM0 = ComputeAlphaForNameplateElement(options, SHIDWORD(v569[1]), &distanceSquared, &hasMarksmanPerk, &isFriendly);
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      __asm { vxorps  xmm14, xmm14, xmm14 }
      v347 = v512;
      v348 = v521;
      v349 = localClientNuma;
      v350 = 0;
      v351 = !v512;
      if ( v512 )
      {
        __asm { vmovss  [rbp+19F0h+outDesiredAlpha], xmm7 }
        LUIElement_PlayerNameplates_CenterFadeAlpha(localClientNuma, _R14, &position, v521, &outDesiredAlpha);
        __asm { vmovss  xmm2, [rbp+19F0h+outDesiredAlpha] }
        v347 = v512;
      }
      _R15 = v541;
      _RDI = (const float *)((char *)&_R14->playerEntities[0].scale + v541);
      __asm
      {
        vsubss  xmm3, xmm7, xmm10
        vmulss  xmm1, xmm3, dword ptr [rdi]
        vmulss  xmm0, xmm10, xmm6
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm2, xmm10, xmm2
        vmulss  xmm0, xmm3, dword ptr [r15+r14+0A80h]
        vaddss  xmm1, xmm2, xmm0
        vmovss  dword ptr [r15+r14+0A80h], xmm1
        vcomiss xmm1, cs:__real@3a83126f
      }
      if ( v350 | v351 || v524 )
      {
        if ( v347 && !v524 )
        {
          distanceString[0] = 0;
          LUIElement_PlayerNameplates_GetDistanceString(distanceString, 128, &cent->pose, (SecureVec3 *)&outOrg);
          CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
          if ( v519 < cls.maxClients || v519 >= CharacterMaxCount )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetX, "cg_playerNameplatesNameOffsetX");
            __asm { vmovaps xmm11, xmm0 }
          }
          else
          {
            __asm { vxorps  xmm11, xmm11, xmm11 }
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameOffsetY, "cg_playerNameplatesNameOffsetY");
          __asm { vmovaps xmm9, xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameFontHeight, "cg_playerNameplatesNameFontHeight");
          __asm { vmovaps xmm10, xmm0 }
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_playerNameplatesNameTextWidth, "cg_playerNameplatesNameTextWidth");
          __asm
          {
            vmovss  xmm7, dword ptr [rdi]
            vmulss  xmm6, xmm10, cs:__real@3f000000
          }
          screenPosition = position;
          __asm
          {
            vmulss  xmm1, xmm7, xmm11
            vmovss  xmm12, [rbp+19F0h+unitScale]
            vmulss  xmm2, xmm1, xmm12
            vaddss  xmm8, xmm2, [rbp+19F0h+offsetYScalar]
            vmulss  xmm3, xmm7, xmm0
            vmulss  xmm4, xmm3, xmm12
            vaddss  xmm1, xmm11, [rbp+19F0h+offsetYScalar]
            vaddss  xmm2, xmm4, xmm1; right
            vaddss  xmm5, xmm9, [rbp+19F0h+var_1A1C]
            vmulss  xmm3, xmm6, xmm7
            vmulss  xmm4, xmm3, xmm12
            vsubss  xmm1, xmm5, xmm4; top
            vaddss  xmm3, xmm4, xmm5; bottom
            vmovaps xmm0, xmm8; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmulss  xmm0, xmm10, xmm12
            vcvttss2si eax, xmm0
            vxorps  xmm14, xmm14, xmm14
            vmovss  dword ptr [rsp+1AF0h+material], xmm14
          }
          LUI_Render_DrawText(v349, v539, elementa, (const vec4_t (*)[4])quadVerts, &color, LUI_PLAYER_NAMEPLATES_FONT, distanceString, 0, 0, materiala, _EAX, NULL, &glowStyle);
          v113 = localClientNuma;
          goto LABEL_563;
        }
      }
      else
      {
        __asm { vmovss  dword ptr [rbp+19F0h+color+0Ch], xmm1 }
        screenPosition = position;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  [rsp+1AF0h+cosSpawnAngle], xmm0
        }
        v362 = v519;
        v363 = elementa;
        LUIElement_PlayerNameplates_DrawPlayerName(v349, elementa, roota, v539, &color, LUI_PLAYER_NAMEPLATES_FONT, v519, &screenPosition, cosSpawnAnglec, &glowStyle, v524, 0, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [r14+0A0Ch]
          vcomiss xmm0, xmm14
        }
        if ( !(v244 | v245) && spawnAngleTestResult && v507 )
        {
          clientNum = v362;
          LUIElement_PlayerNameplates_DrawPlayerDistance(cent, (SecureVec3 *)&outOrg, &screenPosition, _RDI, &clientNum, LUI_PLAYER_NAMEPLATES_FONT, &v537, v539, v363, &color, &glowStyle, 0);
          v349 = v537;
          localClientNuma = v537;
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v362 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
        {
          v364 = LocalClientStatics->GetClientInfo(LocalClientStatics, (unsigned int)v362);
          if ( !v364 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2685, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
            __debugbreak();
          if ( !v348 && eType == ET_PLAYER && HasPerk && v364->bountyCount > 0 )
          {
            Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesBountyIconColor, "cg_playerNameplatesBountyIconColor", &result);
            __asm
            {
              vmovss  xmm0, dword ptr [r15+r14+0A80h]
              vmovss  dword ptr [rbp+19F0h+result+0Ch], xmm0
              vmovss  xmm0, [rbp+19F0h+unitScale]
              vmovss  dword ptr [rsp+1AF0h+testSpawnAngle], xmm0
              vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm11
            }
            LUIElement_PlayerNameplates_DrawBounties(v349, v363, v539, &result, v364->bountyCount, &screenPosition, entityCharacterInfod, testSpawnAnglec, _R14->imgBounty);
          }
        }
      }
LABEL_562:
      v113 = localClientNuma;
LABEL_563:
      v188 = *(_QWORD *)viewDir.v + 1i64;
      *(_QWORD *)viewDir.v = v188;
      __asm { vmovss  xmm9, cs:__real@3f000000 }
      v185 = v513;
      if ( v188 >= v530 )
      {
        __asm
        {
          vmovss  xmm12, dword ptr [rbp+19F0h+outOrg+4]
          vmovss  xmm13, dword ptr [rbp+19F0h+outOrg]
          vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm15, cs:__real@3f800000
        }
        break;
      }
    }
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_friendlyReviveNameplateEnabled, "cg_friendlyReviveNameplateEnabled") && !CG_GameInterface_PlayingGroundWar() )
  {
    NextSnap = CG_SnapshotMP_GetNextSnap(v113);
    v530 = (__int64)NextSnap;
    distanceSquared = 0.0;
    if ( NextSnap->numEntities > 0 )
    {
      entities = (centity_t *)NextSnap->entities;
      cent = (centity_t *)NextSnap->entities;
      __asm { vmovss  xmm8, cs:__real@40000000 }
      v404 = distanceSquared;
      v405 = v530;
      while ( *(_WORD *)&entities->pose.ragdollFlags == 2 )
      {
LABEL_629:
        ++LODWORD(v404);
        distanceSquared = v404;
        entities = (centity_t *)((char *)entities + 248);
        cent = entities;
        if ( SLODWORD(v404) >= *(_DWORD *)(v405 + 24) )
          goto LABEL_630;
      }
      LODWORD(CrosshairsTestResultWithWait) = *(__int16 *)&entities->pose.eType;
      v406 = localClientNuma;
      v407 = CG_GetEntity(localClientNuma, (const int)CrosshairsTestResultWithWait);
      if ( (v407->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2819, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      if ( !CG_Entity_IsNoDraw(v406, &v407->nextState, ps) && v407->nextState.eType == ET_SCRIPTMOVER )
      {
        v408 = v407->nextState.clientNum;
        if ( v408 )
        {
          LODWORD(v409) = v408 - 1;
          unitScale = v409;
          if ( SLODWORD(v409) < cls.maxClients )
          {
            v410 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
            if ( !v410 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
              __debugbreak();
            if ( v410->IsMP(v410) )
            {
              if ( LODWORD(v409) >= v410[1].predictedPlayerState.rxvOmnvars[64].timeModified )
              {
                LODWORD(entityCharacterInfo) = v410[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                *(float *)&entity = v409;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
                  __debugbreak();
              }
              v411 = (const characterInfo_t *)(*(_QWORD *)&v410[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * SLODWORD(v409));
            }
            else
            {
              v411 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v410, SLODWORD(v409));
            }
            v412 = v411->team;
            v413 = CharacterInfo->team;
            v414 = cgameGlob;
            if ( cgameGlob == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
              __debugbreak();
            if ( v407 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
              __debugbreak();
            if ( v413 && v413 == v412 )
            {
              v513 = 1;
              v415 = LocalClientStatics->GetClientInfo(LocalClientStatics, LODWORD(v409));
              if ( !v415 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 2851, ASSERT_TYPE_ASSERT, "(reviveClientInfo)", (const char *)&queryFormat, "reviveClientInfo") )
                __debugbreak();
              v416 = BYTE2(v414[1].predictedPlayerState.inputTime);
              squadIndex = v555->squadIndex;
              v418 = v415->squadIndex;
              v419 = localClientNuma;
              if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
              {
                LODWORD(cosSpawnAngle) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
                LODWORD(testSpawnAngle) = 2;
                LODWORD(entityCharacterInfo) = localClientNuma;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", entityCharacterInfo, testSpawnAngle, cosSpawnAngle) )
                  __debugbreak();
              }
              if ( v419 >= (unsigned int)CgCompassSystem::ms_allocatedCount )
              {
                LODWORD(entityCharacterInfo) = CgCompassSystem::ms_allocatedCount;
                LODWORD(entity) = v419;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", entity, entityCharacterInfo) )
                  __debugbreak();
              }
              if ( !CgCompassSystem::ms_compassSystemArray[v419] )
              {
                LODWORD(entityCharacterInfo) = v419;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", entityCharacterInfo) )
                  __debugbreak();
              }
              v420 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v419];
              if ( v416 && squadIndex == v418 )
              {
                _RDI = cgameGlob;
                CgCompassSystemMP::GetPartyCompassColor(v420, &color, (CgGlobalsMP *)cgameGlob);
              }
              else
              {
                v422 = DVARBOOL_lui_ui_colorblind_swap_enabled;
                if ( !DVARBOOL_lui_ui_colorblind_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_swap_enabled") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v422);
                if ( v422->current.enabled )
                {
                  _RDI = cgameGlob;
                  CgCompassSystemMP::GetFriendlyCompassColor(v420, &color, (CgGlobalsMP *)cgameGlob);
                }
                else
                {
                  Dvar_GetVec4_Internal_DebugName(DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor, "cg_playerNameplatesFriendlyColor", &color);
                  _RDI = cgameGlob;
                }
              }
              *(double *)&_XMM0 = LUIElement_PlayerNameplates_DistanceToEntitySq(&outOrg, v407);
              __asm
              {
                vmovaps xmm7, xmm0
                vmovss  [rbp+19F0h+clientNum], xmm0
              }
              _R14 = options;
              __asm
              {
                vmovss  xmm6, dword ptr [r14+0A4Ch]
                vcomiss xmm6, xmm14
              }
              if ( v244 )
                goto LABEL_619;
              v425 = 0;
              v426 = !hasMarksmanPerk;
              if ( !hasMarksmanPerk )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_marksmanNameDistanceScale, "perk_marksmanNameDistanceScale");
                __asm { vmulss  xmm6, xmm0, xmm6 }
              }
              __asm
              {
                vmulss  xmm0, xmm6, xmm6
                vcomiss xmm7, xmm0
              }
              if ( v425 | v426 )
              {
LABEL_619:
                CG_GetPoseOrigin(&v407->pose, &outOrigin);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+19F0h+outOrigin]
                  vsubss  xmm1, xmm0, xmm13
                  vmovss  dword ptr [rbp+19F0h+viewDir], xmm1
                  vmovss  xmm2, dword ptr [rbp+19F0h+outOrigin+4]
                  vsubss  xmm0, xmm2, xmm12
                  vmovss  dword ptr [rbp+19F0h+viewDir+4], xmm0
                }
                *(double *)&_XMM0 = vectoyaw((const vec2_t *)&viewDir);
                __asm
                {
                  vmovss  xmm6, dword ptr [r14+0A50h]
                  vmovaps xmm1, xmm0; angle2
                  vmovss  xmm0, dword ptr [rdi+1E4h]; angle1
                }
                *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
                __asm
                {
                  vmulss  xmm1, xmm0, xmm8
                  vandps  xmm1, xmm1, xmm9
                }
                memset(&outOrigin, 0, sizeof(outOrigin));
                __asm
                {
                  vcomiss xmm1, xmm6
                  vmovss  dword ptr [rsp+1AF0h+entity], xmm15
                }
                *(float *)&_XMM0 = ComputeAlphaForNameplateElement(_R14, LONG_DOUBLE|HALF|0x20, (const float *)&clientNum, &hasMarksmanPerk, &v513);
                __asm { vmovss  dword ptr [rbp+19F0h+color+0Ch], xmm0 }
                *(_QWORD *)&scaleSettings[4] = 0i64;
                *(_QWORD *)&scaleSettings[12] = 0i64;
                if ( v416 && squadIndex == v418 )
                {
                  __asm { vmovdqu xmm0, cs:__xmm@00000016000000170000001400000015 }
                  *(_DWORD *)&scaleSettings[16] = 36;
                }
                else
                {
                  __asm { vmovdqu xmm0, cs:__xmm@00000012000000130000001000000011 }
                  *(_DWORD *)&scaleSettings[16] = 35;
                }
                __asm { vmovdqu xmmword ptr [rbp+19F0h+scaleSettings], xmm0 }
                *(float *)&_XMM0 = ComputeNameplateScaleByDistance(_R14, (NameplateSetting *)scaleSettings, (const float *)&clientNum);
                __asm
                {
                  vmovaps xmm6, xmm0
                  vmovss  [rbp+19F0h+clientNum], xmm0
                }
                HasPerk = 0;
                LUIElement_PlayerNameplates_GetScreenPosition(localClientNuma, scrPlace, &_R14->playerEntities[SLODWORD(v409)], (const int)CrosshairsTestResultWithWait, viewDirXYNormalized, &HasPerk);
                __asm { vmovss  [rsp+1AF0h+cosSpawnAngle], xmm6 }
                entityCharacterInfoe = LODWORD(v409);
                v437 = LUI_PLAYER_NAMEPLATES_FONT;
                v438 = v539;
                v439 = elementa;
                LUIElement_PlayerNameplates_DrawPlayerName(localClientNuma, elementa, roota, v539, &color, LUI_PLAYER_NAMEPLATES_FONT, entityCharacterInfoe, viewDirXYNormalized, cosSpawnAngled, &glowStyle, 1, 0, 1);
                LUIElement_PlayerNameplates_DrawPlayerDistance(v407, (SecureVec3 *)&outOrg, viewDirXYNormalized, (const float *)&clientNum, (const int *)&unitScale, v437, &v537, v438, v439, &color, &glowStyle, 1);
                __asm
                {
                  vmovss  xmm12, dword ptr [rbp+19F0h+outOrg+4]
                  vmovss  xmm13, dword ptr [rbp+19F0h+outOrg]
                }
                localClientNuma = v537;
                entities = cent;
              }
              else
              {
                entities = cent;
              }
              goto LABEL_628;
            }
            v513 = 0;
          }
        }
      }
      _R14 = options;
LABEL_628:
      v405 = v530;
      v404 = distanceSquared;
      goto LABEL_629;
    }
  }
LABEL_630:
  if ( !enabled || v520 )
    __asm { vmovaps xmm7, xmm14 }
  else
    __asm { vmovss  xmm7, [rbp+19F0h+var_19B8] }
  if ( !enabled || v525 )
    __asm { vmovaps xmm8, xmm14 }
  else
    __asm { vmovss  xmm8, [rbp+19F0h+var_19A8] }
  underCrosshairsTestId = _R14->crosshairsData.underCrosshairsTestId;
  v445 = _R14->crosshairsData.localClientNum;
  if ( enabled )
  {
    __asm
    {
      vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm14
      vmovss  dword ptr [rsp+1AF0h+entity], xmm14
      vmovss  xmm6, cs:__real@41900000
      vmovss  dword ptr [rsp+1AF0h+fmt], xmm6
    }
    _R14->crosshairsData.underCrosshairsTestId = CG_PlayerVisibilityMP_UpdateCrosshairsTest(v445, underCrosshairsTestId, 1, 1, fmtb, entityn, entityCharacterInfof);
    friendlySpawnAngleTestId = _R14->crosshairsData.friendlySpawnAngleTestId;
    v448 = _R14->crosshairsData.localClientNum;
    __asm { vucomiss xmm8, xmm14 }
    if ( v245 )
    {
      CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v448, friendlySpawnAngleTestId);
      updated = CG_PlayerVisibilityMP_CopyCrosshairsTest((const LocalClientNum_t)_R14->crosshairsData.localClientNum, _R14->crosshairsData.underCrosshairsTestId);
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm8
        vmovss  dword ptr [rsp+1AF0h+entity], xmm14
        vmovss  dword ptr [rsp+1AF0h+fmt], xmm6
      }
      updated = CG_PlayerVisibilityMP_UpdateCrosshairsTest(v448, friendlySpawnAngleTestId, 1, 0, fmtc, entityo, entityCharacterInfog);
    }
    _R14->crosshairsData.friendlySpawnAngleTestId = updated;
    enemySpawnAngleTestId = _R14->crosshairsData.enemySpawnAngleTestId;
    v452 = _R14->crosshairsData.localClientNum;
    __asm { vucomiss xmm7, xmm14 }
    if ( v449 )
    {
      CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v452, enemySpawnAngleTestId);
      v453 = CG_PlayerVisibilityMP_CopyCrosshairsTest((const LocalClientNum_t)_R14->crosshairsData.localClientNum, _R14->crosshairsData.underCrosshairsTestId);
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsp+1AF0h+entityCharacterInfo], xmm7
        vmovss  dword ptr [rsp+1AF0h+entity], xmm14
        vmovss  dword ptr [rsp+1AF0h+fmt], xmm6
      }
      v453 = CG_PlayerVisibilityMP_UpdateCrosshairsTest(v452, enemySpawnAngleTestId, 0, 1, fmtd, entityp, entityCharacterInfoh);
    }
  }
  else
  {
    _R14->crosshairsData.underCrosshairsTestId = CG_PlayerVisibilityMP_DeregisterCrosshairsTest(v445, underCrosshairsTestId);
    _R14->crosshairsData.friendlySpawnAngleTestId = CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)_R14->crosshairsData.localClientNum, _R14->crosshairsData.friendlySpawnAngleTestId);
    v453 = CG_PlayerVisibilityMP_DeregisterCrosshairsTest((const LocalClientNum_t)_R14->crosshairsData.localClientNum, _R14->crosshairsData.enemySpawnAngleTestId);
  }
  _R14->crosshairsData.enemySpawnAngleTestId = v453;
  memset(&outOrg, 0, sizeof(outOrg));
  Sys_ProfEndNamedEvent();
LABEL_647:
  _R11 = &v585;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
LUIElement_PlayerNameplates_RunTrace
==============
*/
char LUIElement_PlayerNameplates_RunTrace(const LocalClientNum_t localClientNum, const int entityNum, const char *tagName, const vec3_t *tagOffset, const vec3_t *entityOffset, const vec3_t *worldOffset, LUITraceRequest **activeTraceRequest)
{
  __int64 v14; 
  char result; 
  LUITraceRequest *v17; 
  const cpose_t *PoseExtended; 
  char v26; 
  bool v27; 
  bool v50; 
  bool v56; 
  LUITraceRequest *v59; 
  bool outHit[4]; 
  vec3_t outOrg; 
  __int64 v67; 
  vec3_t position; 
  vec3_t outOrigin; 
  vec3_t outOffset; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  v67 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v14 = entityNum;
  if ( !*activeTraceRequest || !LUITraceRunner::HasActiveRequests(localClientNum) )
  {
    if ( tagName )
    {
      v17 = LUITraceRunner::RequestTraceToEntityOffset(localClientNum, v14, tagName, tagOffset, entityOffset, worldOffset, 0, 0, outHit, 1);
      *activeTraceRequest = v17;
      if ( v17 )
        goto LABEL_25;
      if ( outHit[0] )
      {
        result = 2;
        goto LABEL_26;
      }
    }
    else
    {
      LUI_ComputeWorldOffset(localClientNum, v14, &identityMatrix33, tagOffset, entityOffset, worldOffset, &outOffset);
      PoseExtended = CG_GetPoseExtended(localClientNum, v14, 0);
      CG_GetPoseOrigin(PoseExtended, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+3Fh+outOrigin]
        vaddss  xmm1, xmm0, dword ptr [rbp+3Fh+outOffset]
        vmovss  dword ptr [rsp+130h+position], xmm1
        vmovss  xmm2, dword ptr [rbp+3Fh+outOrigin+4]
        vaddss  xmm0, xmm2, dword ptr [rbp+3Fh+outOffset+4]
        vmovss  dword ptr [rbp+3Fh+position+4], xmm0
        vmovss  xmm1, dword ptr [rbp+3Fh+outOrigin+8]
        vaddss  xmm2, xmm1, dword ptr [rbp+3Fh+outOffset+8]
        vmovss  dword ptr [rbp+3Fh+position+8], xmm2
      }
      _RDI = CG_GetLocalClientGlobals(localClientNum);
      RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+130h+position]
        vsubss  xmm5, xmm0, dword ptr [rsp+130h+outOrg]
        vmovss  xmm1, dword ptr [rbp+3Fh+position+4]
        vsubss  xmm3, xmm1, dword ptr [rsp+130h+outOrg+4]
        vmovss  xmm0, dword ptr [rbp+3Fh+position+8]
        vsubss  xmm4, xmm0, dword ptr [rsp+130h+outOrg+8]
        vmulss  xmm1, xmm3, dword ptr [rdi+6948h]
        vmulss  xmm0, xmm5, dword ptr [rdi+6944h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdi+694Ch]
        vaddss  xmm6, xmm2, xmm1
        vmulss  xmm1, xmm3, dword ptr [rdi+6954h]
        vmulss  xmm0, xmm5, dword ptr [rdi+6950h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdi+6958h]
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm1, xmm3, dword ptr [rdi+6960h]
        vmulss  xmm0, xmm5, dword ptr [rdi+695Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdi+6964h]
        vaddss  xmm9, xmm2, xmm1
        vxorps  xmm8, xmm8, xmm8
        vcomiss xmm6, xmm8
      }
      if ( v26 | v27 )
        goto LABEL_20;
      __asm { vucomiss xmm8, dword ptr [rdi+6930h] }
      if ( v27 )
      {
        v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 476, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovX != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovX != 0.0f");
        v26 = 0;
        v27 = !v50;
        if ( v50 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm6, xmm0, xmm6
        vmulss  xmm1, xmm7, xmm6
        vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm1, xmm1, xmm7
        vcomiss xmm1, dword ptr [rdi+6930h]
      }
      if ( !(v26 | v27) )
        goto LABEL_20;
      __asm { vucomiss xmm8, dword ptr [rdi+6934h] }
      if ( v27 )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 484, ASSERT_TYPE_ASSERT, "(cgameGlob->refdef.view.tanHalfFovY != 0.0f)", (const char *)&queryFormat, "cgameGlob->refdef.view.tanHalfFovY != 0.0f");
        v26 = 0;
        v27 = !v56;
        if ( v56 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm9, xmm6
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, dword ptr [rdi+6934h]
      }
      if ( !(v26 | v27) )
      {
LABEL_20:
        result = 2;
        memset(&outOrg, 0, sizeof(outOrg));
        goto LABEL_26;
      }
      memset(&outOrg, 0, sizeof(outOrg));
      if ( ((0x80000000 >> (v14 & 0x1F)) & CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_characterCullIn[v14 >> 5]) == 0 )
      {
        result = 0;
        goto LABEL_26;
      }
      v59 = LUITraceRunner::RequestTraceToPosition(localClientNum, &position, v14, 0, 1);
      *activeTraceRequest = v59;
      if ( v59 )
      {
LABEL_25:
        result = 1;
        goto LABEL_26;
      }
    }
    Com_PrintWarning(13, "LUI_Traces queue is full");
    goto LABEL_25;
  }
  if ( !LUITraceRunner::GetTraceResult(localClientNum, *activeTraceRequest, outHit) )
    goto LABEL_25;
  *activeTraceRequest = NULL;
  result = 3;
  if ( outHit[0] )
    result = 0;
LABEL_26:
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
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
  int v3; 
  int v4; 
  int v8; 
  CgPlayerVisibilityTestRefId *v9; 
  CgPlayerVisibilityTestRefId *v10; 
  __int64 v11; 
  unsigned __int8 ActiveGameMode; 
  bool v13; 
  const dvar_t *v14; 
  bool enabled; 
  const dvar_t *v16; 
  unsigned int IndexByName; 
  unsigned int v18; 
  char m_val; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  bool v23; 
  int RowCount; 
  bool v25; 
  const dvar_t *v26; 
  int integer; 
  const char *v28; 
  int v29; 
  __int64 v30; 
  const char *ColumnValueForRow; 
  __int64 v34; 
  bdRandom v35; 
  LocalClientNum_t ClientFromController; 
  StringTable *tablePtr; 
  unsigned __int8 in[8]; 
  unsigned __int8 v39[8]; 
  unsigned __int8 v40[8]; 
  __int64 v41; 
  bdRandom v42; 
  bool v43; 
  bdRandom v44; 

  v41 = -2i64;
  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 4");
  v3 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  if ( j_lua_type(luaVM, 4) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 4 )");
  v4 = lua_tointeger32(luaVM, 3);
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  _RDI = LUI_ToElement(luaVM, 1);
  v43 = j_lua_toboolean(luaVM, 4) != 0;
  LUIElement_InitTextLikeElement(_RDI);
  FontCache_GetMinHeightForDistanceField();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rdi+11Ch], xmm0
  }
  _RDI->usageFlags |= 3u;
  _RDI->layoutFunction = LUIElement_PlayerNameplates_Layout;
  _RDI->renderFunction = LUIElement_PlayerNameplates_Render;
  v8 = -1;
  j_lua_getfield(luaVM, 2, "nameplateSetting");
  if ( j_lua_isnumber(luaVM, -1) )
    v8 = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  LUI_LUIElement_RegisterMethods(_RDI, luaVM, s_anchoredMethods_0);
  if ( !LUI_ElementHasWeakTableEntry(_RDI, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 65, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(_RDI, luaVM);
  v9 = (CgPlayerVisibilityTestRefId *)j_lua_newuserdata(luaVM, 0x5FB0ui64);
  j_lua_createtable(luaVM, 0, 2);
  j_luaL_register(luaVM, NULL, LUIPlayerNameplatesOptions_metatable);
  j_lua_setmetatable(luaVM, -2);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( _RDI->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 76, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  _RDI->customElementData = v9;
  memset_0(v9, 0, 0x5FB0ui64);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3074, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  memset_0(v9, 0, 0x5FB0ui64);
  v10 = v9 + 1340;
  v11 = 248i64;
  do
  {
    bdRandom::bdRandom(&v42);
    bdRandom::nextUBytes(&v42, in, 8);
    *(_DWORD *)&v10[-2].id = *(_DWORD *)in;
    *(_DWORD *)&v10->id = *(_DWORD *)&in[4];
    memset(in, 0, sizeof(in));
    v10[2].id = 1;
    secure_uint8_t::secureInt8_Set((secure_uint8_t *)&v10[-4], 0);
    bdRandom::~bdRandom(&v42);
    bdRandom::bdRandom(&v44);
    bdRandom::nextUBytes(&v44, v39, 8);
    *(_DWORD *)&v10[14].id = *(_DWORD *)v39;
    *(_DWORD *)&v10[16].id = *(_DWORD *)&v39[4];
    memset(v39, 0, sizeof(v39));
    v10[18].id = 1;
    secure_uint8_t::secureInt8_Set((secure_uint8_t *)&v10[12], 0);
    bdRandom::~bdRandom(&v44);
    bdRandom::bdRandom(&v35);
    bdRandom::nextUBytes(&v35, v40, 8);
    *(_DWORD *)&v10[22].id = *(_DWORD *)v40;
    *(_DWORD *)&v10[24].id = *(_DWORD *)&v40[4];
    memset(v40, 0, sizeof(v40));
    v10[26].id = 1;
    secure_uint8_t::secureInt8_Set((secure_uint8_t *)&v10[20], 0);
    bdRandom::~bdRandom(&v35);
    v10 += 44;
    --v11;
  }
  while ( v11 );
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  LOBYTE(v42.m_val) = BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode);
  v13 = 0;
  v14 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  enabled = v14->current.enabled;
  v16 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( enabled )
    v13 = !v16->current.enabled;
  IndexByName = BG_Omnvar_GetIndexByName("ui_always_show_nameplates");
  *(_DWORD *)&v9[4].id = IndexByName;
  if ( IndexByName == -1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "options->alwaysShowNameplatesOmnvarIndex != OMNVAR_NONE");
  v18 = BG_Omnvar_GetIndexByName("ui_hide_nameplates_for_zero_health");
  *(_DWORD *)&v9[6].id = v18;
  if ( v18 == -1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "options->hideNameplatesForZeroHealthOmnvarIndex != OMNVAR_NONE");
  *(_DWORD *)&v9[10].id = BG_Omnvar_GetIndexByName("ui_hide_nameplate_strings");
  m_val = v42.m_val;
  if ( LOBYTE(v42.m_val) )
  {
    v20 = BG_Omnvar_GetIndexByName("ui_in_spawn_camera");
    *(_DWORD *)&v9[8].id = v20;
    if ( v20 == -1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "options->spawnCameraOmnvarIndex != OMNVAR_NONE");
    v21 = BG_Omnvar_GetIndexByName("ui_in_infil");
    *(_DWORD *)&v9[12].id = v21;
    if ( v21 == -1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "options->infilStatusOmnvarIndex != OMNVAR_NONE");
    v22 = BG_Omnvar_GetIndexByName("ui_tac_ops_map_open");
    *(_DWORD *)&v9[14].id = v22;
    if ( v22 == -1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "options->tacOpsMapOpenOmnvarIndex != OMNVAR_NONE");
  }
  else
  {
    *(_DWORD *)&v9[8].id = -1;
    *(_QWORD *)&v9[12].id = -1i64;
  }
  *(_QWORD *)&v9[1220].id = Image_Register("icon_obit_died", IMAGE_TRACK_HUD);
  *(_QWORD *)&v9[1224].id = Image_Register("hud_icon_nameplate_chevron", IMAGE_TRACK_HUD);
  *(_QWORD *)&v9[1228].id = Image_Register("hud_icon_nameplate_chevron_enemy", IMAGE_TRACK_HUD);
  *(_QWORD *)&v9[1232].id = Image_Register("hud_icon_nameplate_chevron_most_wanted", IMAGE_TRACK_HUD);
  v23 = m_val && v13;
  v9->generation = v23;
  v9[1].id = 1;
  *(_DWORD *)&v9[2].id = 0;
  v9->id = 1;
  *(_DWORD *)&v9[18].id = -1;
  StringTable_GetAsset("nameplateSettings.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3139, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  v25 = 0;
  j_lua_getfield(luaVM, 2, "tacOpsMap");
  if ( j_lua_type(luaVM, -1) == 1 )
    v25 = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  if ( !v25 )
  {
    v26 = DVARINT_cg_nameplateSettingOverride;
    if ( !DVARINT_cg_nameplateSettingOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_nameplateSettingOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    integer = v26->current.integer;
    if ( integer >= 0 )
    {
      if ( integer > RowCount - 1 )
      {
        LODWORD(v34) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3160, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The current nameplate setting value: %d, is outside of the range of possible values, please check the nameplateSettings.csv file for valid rows", v34) )
          __debugbreak();
      }
      v8 = integer;
    }
    if ( v43 )
    {
      v8 = 9;
      goto LABEL_65;
    }
  }
  if ( v8 >= 0 )
  {
LABEL_65:
    if ( v8 <= RowCount - 1 )
      goto LABEL_71;
  }
  v28 = "cp_default";
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
    v28 = "mp_default";
  v8 = StringTable_LookupRowNumForValue(tablePtr, 0, v28);
  if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_playernameplates.cpp", 3182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The current nameplate setting %s does not exist, please check the nameplateSettings.csv file", v28) )
    __debugbreak();
LABEL_71:
  v29 = StringTable_GetColumnCount(tablePtr) - 1;
  v30 = v29;
  if ( v29 > 0 )
  {
    _RDI = v9 + 1236;
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v8, v3);
      *(float *)&_XMM0 = strtof(ColumnValueForRow, NULL);
      __asm { vmovss  dword ptr [rdi], xmm0 }
      ++v3;
      _RDI += 2;
      --v30;
    }
    while ( v30 );
  }
  *(_DWORD *)&v9[12240].id = ClientFromController;
  v9[12242] = CG_PLAYER_VISIBILITY_INVALID_ID_1;
  v9[12243] = CG_PLAYER_VISIBILITY_INVALID_ID_1;
  v9[12244] = CG_PLAYER_VISIBILITY_INVALID_ID_1;
  return 0i64;
}

