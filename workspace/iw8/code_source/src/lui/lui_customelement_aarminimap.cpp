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
  *(_OWORD *)&fromState.member = _XMM0;
  v16.isValid = 0;
  v16.offset = 0;
  *(_OWORD *)&v16.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
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
void LUIElement_AARMinimap_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  AARMinimapData *Data; 
  __int64 numDeaths; 
  bool playerOnly; 
  __int64 v13; 
  AARMinimapDeath *deaths; 
  int v15; 
  AARMinimapData *v16; 
  __int64 v17; 
  double CurrentUnitScale; 
  float v19; 
  float v20; 
  vec2_t location; 
  char v23; 
  vec4_t color; 
  vec4_t verts[4]; 
  vec4_t quadVerts[4]; 

  color.v[0] = red;
  color.v[2] = blue;
  color.v[1] = green;
  color.v[3] = alpha;
  Data = LUIElement_AARMinimap_GetData(element, luaVM);
  LUI_CoD_GenerateQuadVerts(element->left, element->top, element->right, element->bottom, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &color, Data->mapMaterial);
  numDeaths = Data->numDeaths;
  playerOnly = Data->playerOnly;
  if ( Data->numDeaths )
  {
    v13 = 0i64;
    deaths = Data->deaths;
    do
    {
      v15 = *(_DWORD *)&deaths->isKill;
      v23 = v15;
      location = deaths->location;
      if ( !playerOnly || BYTE1(v15) )
      {
        v16 = LUIElement_AARMinimap_GetData(element, luaVM);
        v17 = 2436i64;
        if ( v23 )
          v17 = 2420i64;
        CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
        v19 = (float)((float)((float)(element->right - element->left) * (float)(0.0039215689 * location.v[0])) + element->left) - (float)(*(float *)&CurrentUnitScale * 5.0);
        v20 = (float)((float)((float)(element->bottom - element->top) * (float)(0.0039215689 * location.v[1])) + element->top) - (float)(*(float *)&CurrentUnitScale * 5.0);
        LUI_CoD_GenerateQuadVerts(v19, v20, (float)(*(float *)&CurrentUnitScale * 10.0) + v19, (float)(*(float *)&CurrentUnitScale * 10.0) + v20, (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, (const vec4_t *)((char *)v16 + v17), v16->mapMarkerMaterial);
      }
      ++v13;
      ++deaths;
    }
    while ( v13 < numDeaths );
  }
}

/*
==============
LUIElement_AARMinimap_SetupMinimapData
==============
*/
void LUIElement_AARMinimap_SetupMinimapData(lua_State *luaVM, LUIElement *element, AARMinimapData *minimapData, const int controllerIndex)
{
  AARMinimapData *v6; 
  bool v7; 
  const char *UsernameForLocalClient; 
  int v9; 
  const char *v11; 
  const char *PlayerFaction; 
  const DDLDef *Asset; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  const DDLDef *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  const char *String; 
  unsigned int v22; 
  int Int; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  const char *v29; 
  signed __int64 v30; 
  char v31; 
  __int64 v32; 
  char v33; 
  unsigned int v34; 
  unsigned __int8 Byte; 
  bool v36; 
  int v37; 
  __int64 v38; 
  char v39; 
  int numDeaths; 
  AARMinimapDeath *deaths; 
  int v42; 
  unsigned int v43; 
  unsigned int v44; 
  int v45; 
  int v46; 
  const char *v47; 
  unsigned int v48; 
  int v49; 
  GfxImage *v50; 
  lua_State *v51; 
  lua_State *v52; 
  const char *v53; 
  int v54; 
  int v55; 
  bool v56; 
  unsigned __int8 v57; 
  int v58; 
  DDLState state; 
  const char *v60; 
  AARMinimapData *v61; 
  const char *v62; 
  DDLState rootState; 
  lua_State *L; 
  DDLState v65; 
  DDLState v66; 
  DDLState v67; 
  DDLContext context; 
  DDLState result; 
  DDLState fromState; 
  DDLState toState; 
  DDLState v72; 
  DDLState v73; 
  DDLState v74; 
  vec2_t vec; 
  int v76; 
  char dest[64]; 

  v61 = minimapData;
  v62 = (char *)&queryFormat.fmt + 3;
  v6 = minimapData;
  L = luaVM;
  v7 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG;
  v56 = v7;
  UsernameForLocalClient = CL_GetUsernameForLocalClient(controllerIndex);
  v9 = 0;
  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v11 = UsernameForLocalClient;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  v60 = "none";
  PlayerFaction = "none";
  toState.isValid = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  v74.isValid = 0;
  v74.offset = 0;
  v74.arrayIndex = -1;
  *(_OWORD *)&v74.member = _XMM0;
  v65.isValid = 0;
  v65.offset = 0;
  v65.arrayIndex = -1;
  *(_OWORD *)&v65.member = _XMM0;
  rootState.isValid = 0;
  rootState.offset = 0;
  rootState.arrayIndex = -1;
  *(_OWORD *)&rootState.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  *(_OWORD *)&state.member = _XMM0;
  v73.isValid = 0;
  v73.offset = 0;
  v73.arrayIndex = -1;
  *(_OWORD *)&v73.member = _XMM0;
  v66.isValid = 0;
  v66.offset = 0;
  v66.arrayIndex = -1;
  *(_OWORD *)&v66.member = _XMM0;
  Asset = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
  fromState = *DDL_GetRootState(&result, Asset);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_COMMON);
  DDL_MoveToName(&fromState, &toState, "commonData");
  RawHash = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&toState, &v74, RawHash, NULL);
  if ( cls.matchData.def[0] )
  {
    v16 = Com_DDL_LoadAsset(cls.matchData.def);
    Com_DDL_CreateContext(cls.matchData.data, 24000, v16, &context, NULL, NULL);
    rootState = *DDL_GetRootState(&v67, v16);
    v17 = j_SL_GetRawHash(scr_const.deathCount);
    DDL_MoveToNameByHash(&rootState, &state, v17, NULL);
    v6->numDeaths = DDL_GetShort(&state, &context);
    v18 = j_SL_GetRawHash(scr_const.deaths);
    DDL_MoveToNameByHash(&rootState, &v73, v18, NULL);
    v19 = j_SL_GetRawHash(scr_const.map);
    DDL_MoveToNameByHash(&rootState, &state, v19, NULL);
    String = DDL_GetString(&state, &context);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v72.member = _XMM0;
    v62 = String;
    v72.isValid = 0;
    v72.offset = 0;
    v72.arrayIndex = -1;
    v22 = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
    DDL_MoveToNameByHash(&rootState, &v72, v22, NULL);
    Int = DDL_GetInt(&v72, &context);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&result.member = _XMM0;
    v58 = Int;
    result.isValid = 0;
    result.offset = 0;
    result.arrayIndex = -1;
    v25 = j_SL_GetRawHash(scr_const.players);
    DDL_MoveToNameByHash(&rootState, &result, v25, NULL);
    v26 = 0;
    while ( v26 < Int )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v67.isValid = 0;
      v67.offset = 0;
      v67.arrayIndex = -1;
      *(_OWORD *)&v67.member = _XMM0;
      DDL_MoveToIndex(&result, &v67, v26);
      v27 = j_SL_GetRawHash(scr_const.username);
      DDL_MoveToNameByHash(&v67, &v65, v27, NULL);
      v28 = 0x7FFFFFFFi64;
      v29 = DDL_GetString(&v65, &context);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v30 = v11 - v29;
      while ( 1 )
      {
        v31 = v29[v30];
        v32 = v28;
        v33 = *v29++;
        --v28;
        if ( !v32 )
        {
LABEL_14:
          v34 = j_SL_GetRawHash(scr_const.uniqueClientId);
          DDL_MoveToNameByHash(&v67, &v65, v34, NULL);
          Byte = DDL_GetByte(&v65, &context);
          v7 = v56;
          v57 = Byte;
          if ( !v56 )
          {
            PlayerFaction = LUIElement_AARMinimap_GetPlayerFaction(&rootState, &context, Byte);
            v60 = PlayerFaction;
            Byte = v57;
          }
          goto LABEL_16;
        }
        if ( v31 != v33 )
          break;
        if ( !v31 )
          goto LABEL_14;
      }
      if ( ++v26 >= 200 )
        break;
      Int = v58;
    }
    v7 = v56;
    Byte = 0;
  }
  else
  {
    Byte = 0;
  }
LABEL_16:
  v36 = 0;
  v37 = 255;
  v38 = 0i64;
  while ( 1 )
  {
    v39 = PlayerFaction[v38++];
    if ( v39 != val[v38 - 1] )
      break;
    if ( v38 == 5 )
    {
      v36 = !v7;
      break;
    }
  }
  numDeaths = v6->numDeaths;
  if ( v6->numDeaths )
  {
    deaths = v61->deaths;
    v42 = Byte;
    while ( 1 )
    {
      DDL_MoveToIndex(&v73, &v66, v9);
      if ( !v7 )
      {
        v43 = j_SL_GetRawHash(scr_const.attacker);
        DDL_MoveToNameByHash(&v66, &state, v43, NULL);
        v37 = DDL_GetInt(&state, &context);
      }
      v44 = j_SL_GetRawHash(scr_const.player);
      DDL_MoveToNameByHash(&v66, &state, v44, NULL);
      v45 = DDL_GetInt(&state, &context);
      v46 = v45;
      if ( v56 || !v36 && (v47 = LUIElement_AARMinimap_GetPlayerFaction(&rootState, &context, v45), LOBYTE(v76) = 1, !strcmp(v60, v47)) )
        LOBYTE(v76) = 0;
      if ( v42 == v46 || v42 == v37 )
        break;
      if ( !v36 )
      {
        BYTE1(v76) = 0;
LABEL_37:
        v48 = j_SL_GetRawHash(scr_const.deathPos);
        DDL_MoveToNameByHash(&v66, &state, v48, NULL);
        Com_DDL_GetByteVec2(&state, &context, &vec);
        v49 = v76;
        deaths->location = vec;
        *(_DWORD *)&deaths->isKill = v49;
      }
      v7 = v56;
      ++v9;
      ++deaths;
      if ( v9 >= numDeaths )
      {
        v6 = v61;
        goto LABEL_40;
      }
    }
    BYTE1(v76) = 1;
    goto LABEL_37;
  }
LABEL_40:
  Com_sprintf(dest, 0x40ui64, "compass_map_%s", v62);
  v50 = Image_Register(dest, IMAGE_TRACK_UI);
  v51 = L;
  v52 = L;
  v6->mapMaterial = v50;
  j_lua_getfield(v52, 2, "markerMaterial");
  if ( !j_lua_isstring(v51, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 248, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  v53 = j_lua_tolstring(v51, -1, NULL);
  j_lua_settop(v51, -2);
  v6->mapMarkerMaterial = Image_Register(v53, IMAGE_TRACK_UI);
  j_lua_getfield(v51, 2, "killMarkerColor");
  if ( !j_lua_isnumber(v51, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 257, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v54 = lui_tointeger32(v51, -1);
  v6->killMarkerColor.v[3] = 1.0;
  v6->killMarkerColor.v[0] = (float)BYTE2(v54) * 0.0039215689;
  v6->killMarkerColor.v[1] = (float)BYTE1(v54) * 0.0039215689;
  v6->killMarkerColor.v[2] = (float)(unsigned __int8)v54 * 0.0039215689;
  j_lua_settop(v51, -2);
  j_lua_getfield(v51, 2, "deathMarkerColor");
  if ( !j_lua_isnumber(v51, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_aarminimap.cpp", 267, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v55 = lui_tointeger32(v51, -1);
  v6->deathMarkerColor.v[3] = 1.0;
  v6->deathMarkerColor.v[0] = (float)BYTE2(v55) * 0.0039215689;
  v6->deathMarkerColor.v[1] = (float)BYTE1(v55) * 0.0039215689;
  v6->deathMarkerColor.v[2] = (float)(unsigned __int8)v55 * 0.0039215689;
  j_lua_settop(v51, -2);
  v6->playerOnly = 0;
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
  v2->renderFunction = LUIElement_AARMinimap_Render;
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

