/*
==============
LUIElement_AARMinimap_GetData
==============
*/
AARMinimapData *LUIElement_AARMinimap_GetData(LUIElement *element, lua_State *luaVM)
{
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 53, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 54, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (AARMinimapData *)element->customElementData;
}

/*
==============
LUIElement_AARMinimap_GetPlayerFaction
==============
*/
const char *LUIElement_AARMinimap_GetPlayerFaction(const DDLState *rootState, const DDLContext *buffer, const int clientIndex)
{
  int v4; 
  unsigned int RawHash; 
  int Int; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v14; 
  DDLState toState; 
  DDLState v16; 
  DDLState fromState; 

  v4 = 0;
  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+fromState.member], xmm0 }
  v16.isValid = 0;
  v16.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+var_40.member], xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+toState.member], xmm0 }
  fromState.arrayIndex = -1;
  v16.arrayIndex = -1;
  toState.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
  DDL_MoveToNameByHash(rootState, &toState, RawHash, NULL);
  Int = DDL_GetInt(&toState, buffer);
  v11 = j_SL_GetRawHash(scr_const.players);
  DDL_MoveToNameByHash(rootState, &fromState, v11, NULL);
  while ( 1 )
  {
    if ( v4 >= Int )
      return (char *)&queryFormat.fmt + 3;
    DDL_MoveToIndex(&fromState, &v16, v4);
    v12 = j_SL_GetRawHash(scr_const.uniqueClientId);
    DDL_MoveToNameByHash(&v16, &toState, v12, NULL);
    if ( clientIndex == DDL_GetByte(&toState, buffer) )
      break;
    if ( ++v4 >= 200 )
      return (char *)&queryFormat.fmt + 3;
  }
  v14 = j_SL_GetRawHash(scr_const.uniqueClientId);
  DDL_MoveToNameByHash(&v16, &toState, v14, NULL);
  DDL_MoveToName(&v16, &toState, "faction");
  return DDL_GetEnum(&toState, buffer);
}

/*
==============
LUIElement_AARMinimap_Render
==============
*/

void __fastcall LUIElement_AARMinimap_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  AARMinimapData *Data; 
  AARMinimapData *v27; 
  __int64 numDeaths; 
  bool playerOnly; 
  __int64 v32; 
  int v37; 
  AARMinimapData *v41; 
  __int64 v42; 
  float quadVerts; 
  float quadVertsa; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  char v80; 
  vec4_t color; 
  vec4_t verts[4]; 
  vec4_t v83[4]; 
  char v93; 

  __asm
  {
    vmovaps [rsp+1D8h+var_88], xmm10
    vmovaps [rsp+1D8h+var_98], xmm11
    vmovss  xmm0, [rsp+1D8h+red]
    vmovss  xmm1, [rsp+1D8h+green]
  }
  _R14 = element;
  __asm
  {
    vmovss  dword ptr [rsp+1D8h+var_170], xmm0
    vmovss  xmm0, [rsp+1D8h+blue]
    vmovss  dword ptr [rsp+1D8h+var_170+8], xmm0
    vmovss  dword ptr [rsp+1D8h+var_170+4], xmm1
    vmovss  dword ptr [rsp+1D8h+var_170+0Ch], xmm3
  }
  Data = LUIElement_AARMinimap_GetData(element, luaVM);
  __asm
  {
    vmovss  xmm3, dword ptr [r14+0D8h]; bottom
    vmovss  xmm2, dword ptr [r14+0D4h]; right
    vmovss  xmm1, dword ptr [r14+0D0h]; top
    vmovss  xmm0, dword ptr [r14+0CCh]; left
  }
  v27 = Data;
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  [rsp+1D8h+var_1A0], xmm10
    vxorps  xmm11, xmm11, xmm11
    vmovss  [rsp+1D8h+var_1A8], xmm10
    vmovss  [rsp+1D8h+var_1B0], xmm11
    vmovss  dword ptr [rsp+1D8h+quadVerts], xmm11
  }
  LUI_Render_DrawImage(localClientNum, _R14, luaVM, (const vec4_t (*)[4])verts, quadVerts, v72, v74, v76, &color, v27->mapMaterial);
  numDeaths = v27->numDeaths;
  playerOnly = v27->playerOnly;
  if ( v27->numDeaths )
  {
    v32 = 0i64;
    __asm { vmovaps [rsp+1D8h+var_A8], xmm12 }
    _RSI = v27->deaths;
    __asm
    {
      vmovss  xmm12, cs:__real@3b808081
      vmovaps [rsp+1D8h+var_B8], xmm13
      vmovss  xmm13, cs:__real@40a00000
      vmovaps [rsp+1D8h+var_C8], xmm14
      vmovss  xmm14, cs:__real@41200000
      vmovaps [rsp+1D8h+var_48], xmm6
      vmovaps [rsp+1D8h+var_58], xmm7
      vmovaps [rsp+1D8h+var_68], xmm8
      vmovaps [rsp+1D8h+var_78], xmm9
    }
    do
    {
      v37 = *(_DWORD *)&_RSI->isKill;
      v80 = v37;
      __asm
      {
        vmovsd  xmm0, qword ptr [rsi]
        vmovsd  [rsp+1D8h+var_180], xmm0
      }
      if ( !playerOnly || BYTE1(v37) )
      {
        __asm
        {
          vmulss  xmm8, xmm12, dword ptr [rsp+1D8h+var_180]
          vmulss  xmm9, xmm12, dword ptr [rsp+1D8h+var_180+4]
        }
        v41 = LUIElement_AARMinimap_GetData(_R14, luaVM);
        v42 = 2436i64;
        if ( v80 )
          v42 = 2420i64;
        *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
        __asm
        {
          vmovss  xmm4, dword ptr [r14+0CCh]
          vmovss  xmm1, dword ptr [r14+0D4h]
          vmovss  xmm5, dword ptr [r14+0D0h]
          vsubss  xmm2, xmm1, xmm4
          vmovss  xmm1, dword ptr [r14+0D8h]
          vmulss  xmm3, xmm2, xmm8
          vaddss  xmm4, xmm3, xmm4
          vsubss  xmm2, xmm1, xmm5
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm6, xmm0, xmm13
          vmovaps xmm7, xmm0
          vsubss  xmm0, xmm4, xmm6; left
          vaddss  xmm4, xmm3, xmm5
          vmulss  xmm2, xmm7, xmm14
          vsubss  xmm1, xmm4, xmm6; top
          vaddss  xmm3, xmm2, xmm1; bottom
          vaddss  xmm2, xmm2, xmm0; right
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v83);
        __asm
        {
          vmovss  [rsp+1D8h+var_1A0], xmm10
          vmovss  [rsp+1D8h+var_1A8], xmm10
          vmovss  [rsp+1D8h+var_1B0], xmm11
          vmovss  dword ptr [rsp+1D8h+quadVerts], xmm11
        }
        LUI_Render_DrawImage(localClientNum, _R14, luaVM, (const vec4_t (*)[4])v83, quadVertsa, v73, v75, v77, (const vec4_t *)((char *)v41 + v42), v41->mapMarkerMaterial);
      }
      ++v32;
      ++_RSI;
    }
    while ( v32 < numDeaths );
    __asm
    {
      vmovaps xmm14, [rsp+1D8h+var_C8]
      vmovaps xmm13, [rsp+1D8h+var_B8]
      vmovaps xmm12, [rsp+1D8h+var_A8]
      vmovaps xmm9, [rsp+1D8h+var_78]
      vmovaps xmm8, [rsp+1D8h+var_68]
      vmovaps xmm7, [rsp+1D8h+var_58]
      vmovaps xmm6, [rsp+1D8h+var_48]
    }
  }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
LUIElement_AARMinimap_SetupMinimapData
==============
*/
void LUIElement_AARMinimap_SetupMinimapData(lua_State *luaVM, LUIElement *element, AARMinimapData *minimapData, const int controllerIndex)
{
  bool v8; 
  const char *UsernameForLocalClient; 
  int v10; 
  const char *v12; 
  const char *PlayerFaction; 
  const DDLDef *Asset; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  const DDLDef *v19; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  const char *String; 
  unsigned int v27; 
  int Int; 
  unsigned int v29; 
  int v30; 
  unsigned int v31; 
  __int64 v32; 
  const char *v33; 
  signed __int64 v34; 
  char v35; 
  __int64 v36; 
  char v37; 
  unsigned int v38; 
  unsigned __int8 Byte; 
  bool v40; 
  int v41; 
  __int64 v42; 
  char v43; 
  int numDeaths; 
  int v46; 
  unsigned int v47; 
  unsigned int v48; 
  int v49; 
  int v50; 
  const char *v51; 
  unsigned int v52; 
  int v53; 
  GfxImage *v54; 
  lua_State *v55; 
  lua_State *v56; 
  const char *v57; 
  bool v78; 
  unsigned __int8 v79; 
  int v80; 
  DDLState state; 
  const char *v82; 
  AARMinimapData *v83; 
  const char *v84; 
  DDLState rootState; 
  lua_State *L; 
  DDLState v87; 
  DDLState v88; 
  DDLState v89; 
  DDLContext context; 
  DDLState result; 
  DDLState fromState; 
  DDLState toState; 
  DDLState v94; 
  DDLState v95; 
  DDLState v96; 
  vec2_t vec; 
  int v98; 
  char dest[64]; 

  __asm { vmovaps [rsp+290h+var_40], xmm6 }
  v83 = minimapData;
  v84 = (char *)&queryFormat.fmt + 3;
  _R15 = minimapData;
  L = luaVM;
  v8 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG;
  v78 = v8;
  UsernameForLocalClient = CL_GetUsernameForLocalClient(controllerIndex);
  v10 = 0;
  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v12 = UsernameForLocalClient;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  v82 = "none";
  PlayerFaction = "none";
  toState.isValid = 0;
  __asm { vmovdqu xmmword ptr [rbp+190h+fromState.member], xmm0 }
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+190h+toState.member], xmm0 }
  v96.isValid = 0;
  v96.offset = 0;
  v96.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+190h+var_C8.member], xmm0 }
  v87.isValid = 0;
  v87.offset = 0;
  v87.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+190h+var_1F8.member], xmm0 }
  rootState.isValid = 0;
  rootState.offset = 0;
  rootState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+190h+rootState.member], xmm0 }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+290h+state.member], xmm0 }
  v95.isValid = 0;
  v95.offset = 0;
  v95.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+190h+var_E8.member], xmm0 }
  v88.isValid = 0;
  v88.offset = 0;
  v88.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+190h+var_1D8.member], xmm0 }
  Asset = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
  _RAX = DDL_GetRootState(&result, Asset);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+190h+fromState.isValid], ymm0
  }
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON);
  DDL_MoveToName(&fromState, &toState, "commonData");
  RawHash = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&toState, &v96, RawHash, NULL);
  if ( cls.matchData.def[0] )
  {
    v19 = Com_DDL_LoadAsset(cls.matchData.def);
    Com_DDL_CreateContext(cls.matchData.data, 24000, v19, &context, NULL, NULL);
    _RAX = DDL_GetRootState(&v89, v19);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+290h+rootState.isValid], ymm0
    }
    v22 = j_SL_GetRawHash(scr_const.deathCount);
    DDL_MoveToNameByHash(&rootState, &state, v22, NULL);
    _R15->numDeaths = DDL_GetShort(&state, &context);
    v23 = j_SL_GetRawHash(scr_const.deaths);
    DDL_MoveToNameByHash(&rootState, &v95, v23, NULL);
    v24 = j_SL_GetRawHash(scr_const.map);
    DDL_MoveToNameByHash(&rootState, &state, v24, NULL);
    String = DDL_GetString(&state, &context);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+190h+var_108.member], xmm0
    }
    v84 = String;
    v94.isValid = 0;
    v94.offset = 0;
    v94.arrayIndex = -1;
    v27 = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
    DDL_MoveToNameByHash(&rootState, &v94, v27, NULL);
    Int = DDL_GetInt(&v94, &context);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+190h+result.member], xmm0
    }
    v80 = Int;
    result.isValid = 0;
    result.offset = 0;
    result.arrayIndex = -1;
    v29 = j_SL_GetRawHash(scr_const.players);
    DDL_MoveToNameByHash(&rootState, &result, v29, NULL);
    v30 = 0;
    while ( v30 < Int )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v89.isValid = 0;
      v89.offset = 0;
      v89.arrayIndex = -1;
      __asm { vmovdqu xmmword ptr [rbp+190h+var_1B8.member], xmm0 }
      DDL_MoveToIndex(&result, &v89, v30);
      v31 = j_SL_GetRawHash(scr_const.username);
      DDL_MoveToNameByHash(&v89, &v87, v31, NULL);
      v32 = 0x7FFFFFFFi64;
      v33 = DDL_GetString(&v87, &context);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v34 = v12 - v33;
      while ( 1 )
      {
        v35 = v33[v34];
        v36 = v32;
        v37 = *v33++;
        --v32;
        if ( !v36 )
        {
LABEL_14:
          v38 = j_SL_GetRawHash(scr_const.uniqueClientId);
          DDL_MoveToNameByHash(&v89, &v87, v38, NULL);
          Byte = DDL_GetByte(&v87, &context);
          v8 = v78;
          v79 = Byte;
          if ( !v78 )
          {
            PlayerFaction = LUIElement_AARMinimap_GetPlayerFaction(&rootState, &context, Byte);
            v82 = PlayerFaction;
            Byte = v79;
          }
          goto LABEL_16;
        }
        if ( v35 != v37 )
          break;
        if ( !v35 )
          goto LABEL_14;
      }
      if ( ++v30 >= 200 )
        break;
      Int = v80;
    }
    v8 = v78;
    Byte = 0;
  }
  else
  {
    Byte = 0;
  }
LABEL_16:
  v40 = 0;
  v41 = 255;
  v42 = 0i64;
  while ( 1 )
  {
    v43 = PlayerFaction[v42++];
    if ( v43 != val[v42 - 1] )
      break;
    if ( v42 == 5 )
    {
      v40 = !v8;
      break;
    }
  }
  numDeaths = _R15->numDeaths;
  if ( _R15->numDeaths )
  {
    _RBX = v83->deaths;
    v46 = Byte;
    while ( 1 )
    {
      DDL_MoveToIndex(&v95, &v88, v10);
      if ( !v8 )
      {
        v47 = j_SL_GetRawHash(scr_const.attacker);
        DDL_MoveToNameByHash(&v88, &state, v47, NULL);
        v41 = DDL_GetInt(&state, &context);
      }
      v48 = j_SL_GetRawHash(scr_const.player);
      DDL_MoveToNameByHash(&v88, &state, v48, NULL);
      v49 = DDL_GetInt(&state, &context);
      v50 = v49;
      if ( v78 || !v40 && (v51 = LUIElement_AARMinimap_GetPlayerFaction(&rootState, &context, v49), LOBYTE(v98) = 1, !strcmp(v82, v51)) )
        LOBYTE(v98) = 0;
      if ( v46 == v50 || v46 == v41 )
        break;
      if ( !v40 )
      {
        BYTE1(v98) = 0;
LABEL_37:
        v52 = j_SL_GetRawHash(scr_const.deathPos);
        DDL_MoveToNameByHash(&v88, &state, v52, NULL);
        Com_DDL_GetByteVec2(&state, &context, &vec);
        __asm { vmovsd  xmm0, qword ptr [rbp+190h+vec] }
        v53 = v98;
        __asm { vmovsd  qword ptr [rbx], xmm0 }
        *(_DWORD *)&_RBX->isKill = v53;
      }
      v8 = v78;
      ++v10;
      ++_RBX;
      if ( v10 >= numDeaths )
      {
        _R15 = v83;
        goto LABEL_40;
      }
    }
    BYTE1(v98) = 1;
    goto LABEL_37;
  }
LABEL_40:
  Com_sprintf(dest, 0x40ui64, "compass_map_%s", v84);
  v54 = Image_Register(dest, IMAGE_TRACK_UI);
  v55 = L;
  v56 = L;
  _R15->mapMaterial = v54;
  j_lua_getfield(v56, 2, "markerMaterial");
  if ( !j_lua_isstring(v55, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 248, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  v57 = j_lua_tolstring(v55, -1, NULL);
  j_lua_settop(v55, -2);
  _R15->mapMarkerMaterial = Image_Register(v57, IMAGE_TRACK_UI);
  j_lua_getfield(v55, 2, "killMarkerColor");
  if ( !j_lua_isnumber(v55, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 257, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  lui_tointeger32(v55, -1);
  __asm
  {
    vmovss  xmm6, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
  }
  _R15->killMarkerColor.v[3] = 1.0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r15+974h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r15+978h], xmm1
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r15+97Ch], xmm1
  }
  j_lua_settop(v55, -2);
  j_lua_getfield(v55, 2, "deathMarkerColor");
  if ( !j_lua_isnumber(v55, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 267, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  lui_tointeger32(v55, -1);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _R15->deathMarkerColor.v[3] = 1.0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [r15+984h], xmm1
    vcvtsi2ss xmm0, xmm0, r8d
    vmulss  xmm1, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [r15+988h], xmm1
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r15+98Ch], xmm1
  }
  j_lua_settop(v55, -2);
  _R15->playerOnly = 0;
  __asm { vmovaps xmm6, [rsp+290h+var_40] }
}

/*
==============
LUI_LuaCall_LUIElement_SetupAARMinimap
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupAARMinimap(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupAARMinimap_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupAARMinimap_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupAARMinimap_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  AARMinimapData *v4; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_AARMinimap_Render;
  j_lua_getfield(luaVM, 2, "controllerIndex");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 365, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v3 = lui_tointeger32(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( v3 < 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "controllerIndex >= 0");
  if ( v3 >= 8 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "controllerIndex < MAX_GPAD_COUNT");
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v4 = (AARMinimapData *)j_lua_newuserdata(luaVM, 0x998ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v4;
  memset_0(v4, 0, sizeof(AARMinimapData));
  LUIElement_AARMinimap_SetupMinimapData(luaVM, v2, v4, v3);
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ShowPlayerOnlyAARMinimap
==============
*/
__int64 LUI_LuaCall_LUIElement_ShowPlayerOnlyAARMinimap(lua_State *luaVM)
{
  LUIElement *v2; 
  AARMinimapData *Data; 
  unsigned int v4; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  Data = LUIElement_AARMinimap_GetData(v2, luaVM);
  Data->playerOnly = j_lua_toboolean(luaVM, 2) != 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

