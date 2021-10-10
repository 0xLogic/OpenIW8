/*
==============
LiveHeuristics_Finalize
==============
*/

void LiveHeuristics_Finalize(void)
{
  ?LiveHeuristics_Finalize@@YAXXZ();
}

/*
==============
ComputeBoostingScoreForPlayer
==============
*/
void ComputeBoostingScoreForPlayer(int attackingPlayerSlot)
{
  signed __int64 v1; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  void *v12; 
  unsigned int v15; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  __int16 LifeCountUpToMax; 
  int v24; 
  int *v26; 
  scr_string_t player; 
  scrContext_t *v30; 
  unsigned int v31; 
  const char *v32; 
  ComErrorCode v33; 
  DDLType Type; 
  unsigned int UInt; 
  scr_string_t attacker; 
  scrContext_t *v37; 
  unsigned int v38; 
  const char *v39; 
  ComErrorCode v40; 
  DDLType v41; 
  unsigned int v42; 
  unsigned int v43; 
  float v44; 
  float v45; 
  unsigned int v46; 
  float v47; 
  float v48; 
  unsigned int v49; 
  __int128 v50; 
  float v51; 
  unsigned int v52; 
  __int128 v53; 
  double v55; 
  int v56; 
  unsigned int v57; 
  unsigned int v58; 
  bool Bool; 
  __int128 v60; 
  __int128 v62; 
  double v63; 
  double v64; 
  double v65; 
  double v70; 
  double v71; 
  long double v72; 
  unsigned int RawHash; 
  unsigned int v80; 
  unsigned int v81; 
  int v82; 
  unsigned int v83; 
  DDLState state; 
  int v85; 
  unsigned int v86; 
  int v87; 
  DDLState fromState; 
  DDLState v89; 
  DDLState toState; 
  vec3_t vec; 
  int arr[476]; 
  int v93[476]; 
  int v94[476]; 
  int v95[476]; 
  int v96[476]; 
  __int128 v97; 
  __int128 v98; 
  __int128 v99; 
  __int128 v100; 
  __int128 v101; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 

  v12 = alloca(v1);
  v99 = _XMM13;
  v98 = _XMM14;
  v97 = _XMM15;
  v85 = attackingPlayerSlot;
  v89.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v15 = 0;
  v89.offset = 0;
  __asm { vxorpd  xmm13, xmm13, xmm13 }
  v80 = 0;
  v89.arrayIndex = -1;
  v83 = 0;
  *(double *)vec.v = *(double *)&_XMM13;
  *(_OWORD *)&v89.member = _XMM0;
  __asm
  {
    vxorpd  xmm14, xmm14, xmm14
    vxorpd  xmm15, xmm15, xmm15
  }
  v19 = 0;
  v82 = 0;
  v20 = 0i64;
  v81 = 0;
  v21 = 0;
  memset_0(arr, 0, 0x76Cui64);
  memset_0(v93, 0, 0x76Cui64);
  memset_0(v94, 0, 0x76Cui64);
  memset_0(v95, 0, 0x76Cui64);
  memset_0(v96, 0, 0x76Cui64);
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  if ( attackingPlayerSlot >= 30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 106, ASSERT_TYPE_ASSERT, "(playerSlot < 30)", (const char *)&queryFormat, "playerSlot < MATCH_DATA_MAX_PLAYERS") )
      __debugbreak();
    return;
  }
  if ( attackingPlayerSlot >= 0 && DDL_MoveToIndex(&g_playerBufferState, &toState, attackingPlayerSlot) )
  {
    v105 = v3;
    v104 = v4;
    v103 = v5;
    v102 = v6;
    v101 = v7;
    v100 = v8;
    v86 = DDLGetUInt(&toState, scr_const.mostKilledPlayer);
    LifeCountUpToMax = GetLifeCountUpToMax();
    v24 = 0;
    v87 = LifeCountUpToMax;
    LODWORD(_XMM8) = 0;
    if ( LifeCountUpToMax <= 0 )
      goto LABEL_46;
    v26 = v96;
    while ( 1 )
    {
      if ( v20 >= 1900 )
      {
LABEL_45:
        LODWORD(v20) = v82;
        v19 = v83;
        *(double *)vec.v = *(double *)&_XMM13;
LABEL_46:
        if ( v21 )
        {
          v63 = DensityAnomaly(arr, v15);
          v64 = DensityAnomaly(v93, v15);
          v65 = DensityAnomaly(v94, v15);
          _XMM1 = v15;
          __asm { vcvtdq2pd xmm1, xmm1 }
          _XMM6 = v21;
          __asm { vcvtdq2pd xmm6, xmm6 }
          v70 = 1.0 / *(double *)&_XMM1;
          v71 = DensityAnomaly(v95, v15);
          v72 = (DensityAnomaly(v96, v21) - 0.8882972002029419) * 1.406695557120301;
          _XMM2 = v19;
          __asm { vcvtdq2pd xmm2, xmm2 }
          _XMM1 = (unsigned int)v20;
          __asm { vcvtdq2pd xmm1, xmm1 }
          *(double *)&_XMM0 = exp_0(v72 - ((*(double *)&_XMM2 - 0.6952381134033203) * 0.07824676076104672 - 1.914880394935608 - (v70 * *(double *)&_XMM14 - 1617.650024414062) * 0.0005319052846211737 + (*(double *)&_XMM6 - 7.414285659790039) * 0.1259598565060783 + (*(double *)&_XMM6 * v70 - 0.6220188140869141) * 5.98438814329156 - (1.0 / *(double *)&_XMM6 * *(double *)&_XMM15 - 1537.113891601562) * 0.0006035912900829848 + (*(double *)&_XMM1 * (1.0 / *(double *)&_XMM6) - 0.06483273208141327) * 1.112603826517767 - (1.0 / *(double *)&_XMM6 * *(double *)vec.v - 44503.34375) * 0.000001588886581868211 - (v63 - 0.5772963166236877) * 1.098805960565205 - (v64 - 0.5497422218322754) * 1.17913608983989 - (v65 - 0.5733153820037842) * 2.179203014383697 - (v71 - 0.5708056688308716) * 1.933492065099632));
          _XMM1 = COERCE_UNSIGNED_INT64(1.0 / (*(double *)&_XMM0 + 1.0));
          __asm { vcvtsd2ss xmm8, xmm1, xmm1 }
        }
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&state.member = _XMM0;
        state.isValid = 0;
        state.offset = 0;
        state.arrayIndex = -1;
        RawHash = j_SL_GetRawHash(scr_const.boostingScore);
        if ( DDL_MoveToNameByHash(&toState, &state, RawHash, NULL) )
          DDL_SetFloat(&state, &s_matchdataDDLContext, *(float *)&_XMM8);
        else
          Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
        return;
      }
      fromState.isValid = 0;
      fromState.offset = 0;
      fromState.arrayIndex = -1;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&fromState.member = _XMM0;
      if ( v24 < 475 )
      {
        if ( v24 >= 0 )
          DDL_MoveToIndex(&g_lifeBufState, &fromState, v24);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 162, ASSERT_TYPE_ASSERT, "(lifeSlot < 475)", (const char *)&queryFormat, "lifeSlot < MATCH_DATA_MAX_LIVES") )
      {
        __debugbreak();
      }
      player = scr_const.player;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&state.member = _XMM0;
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v30 = ScriptContext_Server();
      v31 = j_SL_GetRawHash(player);
      if ( DDL_MoveToNameByHash(&fromState, &state, v31, NULL) )
      {
        Type = DDL_GetType(&state);
        if ( (Type & 0xFFFFFFFC) == 0 && Type != DDL_UINT_TYPE )
        {
          UInt = DDL_GetUInt(&state, &s_matchdataDDLContext);
          goto LABEL_21;
        }
        v32 = "Invalid match data definition specified. Must be a int, short or byte type";
        v33 = COM_ERR_3426;
      }
      else
      {
        v32 = "Invalid match data definition specified.";
        v33 = COM_ERR_3425;
      }
      Scr_Error(v33, v30, v32);
      UInt = 0;
LABEL_21:
      attacker = scr_const.attacker;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&state.member = _XMM0;
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v37 = ScriptContext_Server();
      v38 = j_SL_GetRawHash(attacker);
      if ( !DDL_MoveToNameByHash(&fromState, &state, v38, NULL) )
      {
        v39 = "Invalid match data definition specified.";
        v40 = COM_ERR_3425;
LABEL_27:
        Scr_Error(v40, v37, v39);
        v42 = 0;
        goto LABEL_28;
      }
      v41 = DDL_GetType(&state);
      if ( (v41 & 0xFFFFFFFC) != 0 || v41 == DDL_UINT_TYPE )
      {
        v39 = "Invalid match data definition specified. Must be a int, short or byte type";
        v40 = COM_ERR_3426;
        goto LABEL_27;
      }
      v42 = DDL_GetUInt(&state, &s_matchdataDDLContext);
LABEL_28:
      if ( v42 == v85 && v42 != UInt )
      {
        v43 = j_SL_GetRawHash(scr_const.spawnPos);
        DDL_MoveToNameByHash(&fromState, &v89, v43, NULL);
        Com_DDL_GetShortVec3(&v89, &s_matchdataDDLContext, &vec);
        v44 = vec.v[0];
        v45 = vec.v[1];
        v46 = j_SL_GetRawHash(scr_const.attackerPos);
        DDL_MoveToNameByHash(&fromState, &v89, v46, NULL);
        Com_DDL_GetShortVec3(&v89, &s_matchdataDDLContext, &vec);
        v47 = vec.v[0];
        v48 = vec.v[1];
        v49 = j_SL_GetRawHash(scr_const.deathPos);
        DDL_MoveToNameByHash(&fromState, &v89, v49, NULL);
        Com_DDL_GetShortVec3(&v89, &s_matchdataDDLContext, &vec);
        v50 = LODWORD(vec.v[0]);
        v51 = vec.v[1];
        DDLGetUInt(&fromState, scr_const.spawnTime_msFromMatchStart);
        v52 = DDLGetUInt(&fromState, scr_const.deathTime_msFromMatchStart);
        v53 = v50;
        *(float *)&v53 = fsqrt((float)((float)(*(float *)&v50 - v44) * (float)(*(float *)&v50 - v44)) + (float)((float)(v51 - v45) * (float)(v51 - v45)));
        _XMM0 = v53;
        v55 = *(float *)&v53;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&state.member = _XMM0;
        v56 = v52;
        state.isValid = 0;
        state.offset = 0;
        state.arrayIndex = -1;
        v57 = j_SL_GetRawHash(scr_const.modifiers);
        DDL_MoveToNameByHash(&fromState, &state, v57, NULL);
        v58 = j_SL_GetRawHash(scr_const.headshot);
        DDL_MoveToNameByHash(&state, &state, v58, NULL);
        Bool = DDL_GetBool(&state, &s_matchdataDDLContext);
        if ( v56 && (v47 != 0.0 || v48 != 0.0 || *(float *)&v50 != 0.0 || v51 != 0.0) )
        {
          *(int *)((char *)arr + v20) = (int)v47;
          *(int *)((char *)v93 + v20) = (int)v48;
          *(int *)((char *)v94 + v20) = (int)*(float *)&v50;
          *(int *)((char *)v95 + v20) = (int)v51;
          *((_QWORD *)&v60 + 1) = *((_QWORD *)&_XMM14 + 1);
          *(double *)&v60 = *(double *)&_XMM14 + v55;
          _XMM14 = v60;
          if ( Bool )
            ++v83;
          if ( UInt == v86 )
          {
            *v26 = v56;
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, r13d }
            *((_QWORD *)&v62 + 1) = *((_QWORD *)&_XMM13 + 1);
            *(double *)&v62 = *(double *)&_XMM13 + *(double *)&_XMM0;
            _XMM13 = v62;
            *((_QWORD *)&v62 + 1) = *((_QWORD *)&_XMM15 + 1);
            *(double *)&v62 = *(double *)&_XMM15 + v55;
            _XMM15 = v62;
            if ( Bool )
              ++v82;
            ++v26;
            v21 = v81 + 1;
            v15 = v80 + 1;
            ++v81;
            ++v80;
            v20 += 4i64;
          }
          else
          {
            v21 = v81;
            v15 = ++v80;
            v20 += 4i64;
          }
          goto LABEL_44;
        }
        v21 = v81;
      }
      v15 = v80;
LABEL_44:
      if ( ++v24 >= v87 )
        goto LABEL_45;
    }
  }
}

/*
==============
DDLGetUInt
==============
*/
unsigned int DDLGetUInt(DDLState *searchState, scr_string_t name)
{
  scrContext_t *v7; 
  unsigned int RawHash; 
  const char *v9; 
  ComErrorCode v10; 
  DDLType Type; 
  DDLState toState; 

  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  if ( searchState )
  {
    v7 = ScriptContext_Server();
    RawHash = j_SL_GetRawHash(name);
    if ( DDL_MoveToNameByHash(searchState, &toState, RawHash, NULL) )
    {
      Type = DDL_GetType(&toState);
      if ( (Type & 0xFFFFFFFC) == 0 && Type != DDL_UINT_TYPE )
        return DDL_GetUInt(&toState, &s_matchdataDDLContext);
      v9 = "Invalid match data definition specified. Must be a int, short or byte type";
      v10 = COM_ERR_3426;
    }
    else
    {
      v9 = "Invalid match data definition specified.";
      v10 = COM_ERR_3425;
    }
    Scr_Error(v10, v7, v9);
    return 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 193, ASSERT_TYPE_ASSERT, "(searchState != 0)", (const char *)&queryFormat, "searchState != NULL", *(_QWORD *)&toState.isValid, *(_QWORD *)&toState.arrayIndex, toState.member, toState.ddlDef) )
      __debugbreak();
    Com_PrintError(16, "received NULL search state\n");
    return 0;
  }
}

/*
==============
DensityAnomaly
==============
*/
double DensityAnomaly(int *arr, int size)
{
  int v4; 
  int i; 
  __int64 v6; 
  int *v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned __int64 *v12; 
  __int64 v33; 
  int *v34; 
  double v40; 
  int v50; 
  int j; 
  int v52; 
  __int64 v53; 
  int v54; 
  unsigned int v55; 
  __int64 v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double *v62; 
  __int64 v63; 
  double v64; 
  double v65; 
  double v70; 
  __int64 v74; 
  __int128 v75[238]; 

  if ( size < 2 )
    return DOUBLE_1_0;
  v4 = 0;
  for ( i = size - 1; v4 < i; ++v4 )
  {
    if ( size - v4 - 1 > 0 )
    {
      v6 = (unsigned int)(size - v4 - 1);
      v7 = arr;
      v8 = *arr;
      do
      {
        v9 = v7[1];
        if ( v8 <= v9 )
        {
          v8 = v7[1];
        }
        else
        {
          *v7 = v9;
          v7[1] = v8;
        }
        ++v7;
        --v6;
      }
      while ( v6 );
    }
  }
  v10 = 0;
  if ( i > 0 && (unsigned int)i >= 8 && (v75 > (__int128 *)&arr[i] || (char *)v75 + 8 * i - 8 < (char *)arr) )
  {
    _RCX = 0i64;
    v12 = (unsigned __int64 *)(arr + 3);
    do
    {
      _XMM0 = *(v12 - 1);
      _XMM1 = *(unsigned __int64 *)((char *)v12 - 12);
      __asm
      {
        vcvtdq2pd xmm2, xmm0
        vcvtdq2pd xmm0, xmm1
      }
      _XMM1 = *(unsigned __int64 *)((char *)v12 - 4);
      __asm { vsubpd  xmm2, xmm2, xmm0 }
      _XMM0 = *v12;
      __asm
      {
        vmovupd [rsp+rcx*8+0EF8h+var_EF8], xmm2
        vcvtdq2pd xmm2, xmm0
        vcvtdq2pd xmm0, xmm1
      }
      _XMM1 = *(unsigned __int64 *)((char *)v12 + 4);
      __asm { vsubpd  xmm2, xmm2, xmm0 }
      _XMM0 = v12[1];
      __asm
      {
        vmovupd [rsp+rcx*8+0EF8h+var_EE8], xmm2
        vcvtdq2pd xmm2, xmm0
        vcvtdq2pd xmm0, xmm1
      }
      _XMM1 = *(unsigned __int64 *)((char *)v12 + 12);
      __asm { vsubpd  xmm2, xmm2, xmm0 }
      _XMM0 = v12[2];
      __asm
      {
        vmovupd [rsp+rcx*8+0EF8h+var_ED8], xmm2
        vcvtdq2pd xmm2, xmm0
        vcvtdq2pd xmm0, xmm1
        vsubpd  xmm2, xmm2, xmm0
        vmovupd [rsp+rcx*8+0EF8h+var_EC8], xmm2
      }
      _RCX += 8i64;
      v12 += 4;
      v10 += 8;
    }
    while ( _RCX < i - (i & 7) );
  }
  v33 = v10;
  if ( v10 < (__int64)i )
  {
    if ( i - (__int64)v10 >= 4 )
    {
      v34 = &arr[v10 + 2];
      do
      {
        _XMM3 = (unsigned int)*(v34 - 1);
        _XMM0 = (unsigned int)*(v34 - 2);
        _XMM2 = (unsigned int)*v34;
        __asm
        {
          vcvtdq2pd xmm3, xmm3
          vcvtdq2pd xmm0, xmm0
        }
        v40 = *(double *)&_XMM3 - *(double *)&_XMM0;
        __asm { vcvtdq2pd xmm2, xmm2 }
        *(double *)&_XMM0 = *(double *)&_XMM2 - *(double *)&_XMM3;
        _XMM3 = (unsigned int)v34[1];
        *((double *)v75 + v33 + 1) = *(double *)&_XMM0;
        _XMM0 = (unsigned int)v34[2];
        __asm { vcvtdq2pd xmm3, xmm3 }
        *((double *)v75 + v33) = v40;
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((double *)&v75[1] + v33 + 1) = *(double *)&_XMM0 - *(double *)&_XMM3;
        *((double *)&v75[1] + v33) = *(double *)&_XMM3 - *(double *)&_XMM2;
        v33 += 4i64;
        v34 += 4;
      }
      while ( v33 < i - 3i64 );
    }
    for ( ; v33 < i; ++v33 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, dword ptr [r11+rcx*4+4] }
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, dword ptr [r11+rcx*4] }
      *((double *)v75 + v33) = *(double *)&_XMM1 - *(double *)&_XMM0;
    }
  }
  v50 = i - 1;
  for ( j = 0; j < v50; ++j )
  {
    v52 = 0;
    v53 = 0i64;
    v54 = i - j - 1;
    if ( v54 >= 4 )
    {
      v55 = ((unsigned int)(i - j - 5) >> 2) + 1;
      v56 = v55;
      v52 = 4 * v55;
      do
      {
        v57 = *(double *)&v75[v53];
        v58 = *((double *)&v75[v53] + 1);
        if ( v57 > v58 )
        {
          *(double *)&v75[v53] = v58;
          v58 = v57;
          *((double *)&v75[v53] + 1) = v57;
        }
        v59 = *(double *)&v75[v53 + 1];
        if ( v58 > v59 )
        {
          *((double *)&v75[v53] + 1) = v59;
          v59 = v58;
          *(double *)&v75[v53 + 1] = v58;
        }
        v60 = *((double *)&v75[v53 + 1] + 1);
        if ( v59 > v60 )
        {
          *(double *)&v75[v53 + 1] = v60;
          v60 = v59;
          *((double *)&v75[v53 + 1] + 1) = v59;
        }
        v61 = *(double *)&v75[v53 + 2];
        if ( v60 > v61 )
        {
          *((double *)&v75[v53 + 1] + 1) = v61;
          *(double *)&v75[v53 + 2] = v60;
        }
        v53 += 2i64;
        --v56;
      }
      while ( v56 );
    }
    if ( v52 < v54 )
    {
      v62 = (double *)&v75[v53] + 1;
      v63 = (unsigned int)(v54 - v52);
      do
      {
        v64 = *(v62 - 1);
        if ( v64 > *v62 )
        {
          *(v62 - 1) = *v62;
          *v62 = v64;
        }
        ++v62;
        --v63;
      }
      while ( v63 );
    }
  }
  if ( i % 2 == 1 )
    v65 = *((double *)v75 + v50 / 2);
  else
    v65 = (*((double *)&v74 + i / 2) + *((double *)v75 + i / 2)) * 0.5;
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, dword ptr [r11+rdi*4] }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [r11] }
  v70 = *(double *)&_XMM1 - *(double *)&_XMM0;
  _XMM1 = 0i64;
  __asm
  {
    vcvtsi2sd xmm1, xmm1, ebx
    vxorpd  xmm0, xmm0, xmm0
  }
  if ( v70 / *(double *)&_XMM1 != *(double *)&_XMM0 )
    *(double *)&_XMM0 = v65 / (v70 / *(double *)&_XMM1);
  return *(double *)&_XMM0;
}

/*
==============
FindMostKilledPlayerForPlayer
==============
*/
void FindMostKilledPlayerForPlayer(int player)
{
  __int64 v2; 
  int PlayerCount; 
  signed int v4; 
  __int16 v5; 
  unsigned int v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  scr_string_t v13; 
  scrContext_t *v15; 
  unsigned int RawHash; 
  const char *v17; 
  ComErrorCode v18; 
  DDLType Type; 
  unsigned __int8 UInt; 
  scr_string_t attacker; 
  scrContext_t *v22; 
  unsigned int v23; 
  const char *v24; 
  ComErrorCode v25; 
  DDLType v26; 
  unsigned __int8 v27; 
  unsigned int v28; 
  signed int v29; 
  int *v30; 
  signed int v31; 
  bool v32; 
  unsigned int v33; 
  unsigned int v36; 
  bool v37; 
  unsigned int v39; 
  int v41; 
  unsigned int v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  __int16 LifeCountUpToMax; 
  DDLState toState; 
  DDLState state; 
  __int64 v50; 
  DDLState fromState; 
  int v52[200]; 
  int v53[200]; 

  v2 = player;
  memset_0(v52, 0, sizeof(v52));
  memset_0(v53, 0, sizeof(v53));
  PlayerCount = GetPlayerCount();
  v4 = 0;
  LifeCountUpToMax = GetLifeCountUpToMax();
  v46 = PlayerCount;
  v5 = LifeCountUpToMax;
  v6 = 0;
  if ( PlayerCount > 0 )
  {
    v7 = PlayerCount;
    v8 = 0i64;
    v50 = 0i64;
    v9 = v2;
    v10 = 0i64;
    do
    {
      if ( v10 != v9 )
      {
        if ( v6 >= 0x800 )
        {
          LODWORD(v45) = 2048;
          LODWORD(v44) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( *(&g_entities->r.isInUse + v8) != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v10] )
        {
          v11 = 0;
          if ( v5 > 0 )
          {
            while ( 1 )
            {
              toState.isValid = 0;
              toState.offset = 0;
              toState.arrayIndex = -1;
              __asm { vpxor   xmm0, xmm0, xmm0 }
              *(_OWORD *)&toState.member = _XMM0;
              if ( v11 < 475 )
              {
                if ( v11 >= 0 )
                  DDL_MoveToIndex(&g_lifeBufState, &toState, v11);
              }
              else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 162, ASSERT_TYPE_ASSERT, "(lifeSlot < 475)", (const char *)&queryFormat, "lifeSlot < MATCH_DATA_MAX_LIVES") )
              {
                __debugbreak();
              }
              v13 = scr_const.player;
              __asm { vpxor   xmm0, xmm0, xmm0 }
              *(_OWORD *)&state.member = _XMM0;
              state.isValid = 0;
              state.offset = 0;
              state.arrayIndex = -1;
              v15 = ScriptContext_Server();
              RawHash = j_SL_GetRawHash(v13);
              if ( DDL_MoveToNameByHash(&toState, &state, RawHash, NULL) )
              {
                Type = DDL_GetType(&state);
                if ( (Type & 0xFFFFFFFC) == 0 && Type != DDL_UINT_TYPE )
                {
                  UInt = DDL_GetUInt(&state, &s_matchdataDDLContext);
                  goto LABEL_27;
                }
                v17 = "Invalid match data definition specified. Must be a int, short or byte type";
                v18 = COM_ERR_3426;
              }
              else
              {
                v17 = "Invalid match data definition specified.";
                v18 = COM_ERR_3425;
              }
              Scr_Error(v18, v15, v17);
              UInt = 0;
LABEL_27:
              attacker = scr_const.attacker;
              __asm { vpxor   xmm0, xmm0, xmm0 }
              *(_OWORD *)&state.member = _XMM0;
              state.isValid = 0;
              state.offset = 0;
              state.arrayIndex = -1;
              v22 = ScriptContext_Server();
              v23 = j_SL_GetRawHash(attacker);
              if ( DDL_MoveToNameByHash(&toState, &state, v23, NULL) )
              {
                v26 = DDL_GetType(&state);
                if ( (v26 & 0xFFFFFFFC) == 0 && v26 != DDL_UINT_TYPE )
                {
                  v27 = DDL_GetUInt(&state, &s_matchdataDDLContext);
                  v4 = 0;
                  goto LABEL_34;
                }
                v24 = "Invalid match data definition specified. Must be a int, short or byte type";
                v25 = COM_ERR_3426;
              }
              else
              {
                v24 = "Invalid match data definition specified.";
                v25 = COM_ERR_3425;
              }
              Scr_Error(v25, v22, v24);
              v4 = 0;
              v27 = 0;
LABEL_34:
              if ( UInt == v6 && v27 == (_DWORD)v2 )
                ++v52[v10];
              if ( UInt == (_DWORD)v2 && v27 == v6 )
                ++v53[v10];
              v5 = LifeCountUpToMax;
              if ( ++v11 >= LifeCountUpToMax )
              {
                v8 = v50;
                break;
              }
            }
          }
        }
        v7 = v46;
        v9 = v2;
      }
      v8 += 1456i64;
      ++v6;
      ++v10;
      v50 = v8;
    }
    while ( (int)v6 < v7 );
  }
  v28 = -1;
  v29 = 0;
  if ( GetPlayerCount() > 0 )
  {
    v30 = v52;
    do
    {
      v31 = *v30++;
      v32 = v31 <= v29;
      v33 = v4;
      if ( v31 <= v29 )
        v31 = v29;
      if ( v32 )
        v33 = v28;
      v28 = v33;
      v29 = v31;
      ++v4;
    }
    while ( v4 < GetPlayerCount() );
  }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  if ( (int)v2 >= 30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 106, ASSERT_TYPE_ASSERT, "(playerSlot < 30)", (const char *)&queryFormat, "playerSlot < MATCH_DATA_MAX_PLAYERS") )
      __debugbreak();
    return;
  }
  if ( (int)v2 >= 0 && DDL_MoveToIndex(&g_playerBufferState, &fromState, v2) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&toState.member = _XMM0;
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    v36 = j_SL_GetRawHash(scr_const.mostKilledPlayer);
    v37 = DDL_MoveToNameByHash(&fromState, &toState, v36, NULL);
    if ( v28 == -1 )
    {
      if ( v37 )
      {
        v43 = 255;
        goto LABEL_67;
      }
    }
    else
    {
      if ( v37 )
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v28);
      else
        Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&toState.member = _XMM0;
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      v39 = j_SL_GetRawHash(scr_const.mostKilledPlayerKills);
      if ( DDL_MoveToNameByHash(&fromState, &toState, v39, NULL) )
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v29);
      else
        Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
      __asm { vpxor   xmm0, xmm0, xmm0 }
      toState.isValid = 0;
      toState.offset = 0;
      v41 = v53[v28];
      toState.arrayIndex = -1;
      *(_OWORD *)&toState.member = _XMM0;
      v42 = j_SL_GetRawHash(scr_const.mostKilledPlayerDeaths);
      if ( DDL_MoveToNameByHash(&fromState, &toState, v42, NULL) )
      {
        v43 = v41;
LABEL_67:
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v43);
        return;
      }
    }
    Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
  }
}

/*
==============
FindNemesisForPlayer
==============
*/
void FindNemesisForPlayer(int player)
{
  __int128 v2; 
  __int128 v3; 
  __int64 v4; 
  int PlayerCount; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  scr_string_t v13; 
  scrContext_t *v15; 
  unsigned int RawHash; 
  const char *v17; 
  ComErrorCode v18; 
  DDLType Type; 
  unsigned __int8 UInt; 
  scr_string_t attacker; 
  scrContext_t *v22; 
  unsigned int v23; 
  const char *v24; 
  ComErrorCode v25; 
  DDLType v26; 
  unsigned __int8 v27; 
  int v28; 
  float v29; 
  float v30; 
  int v31; 
  unsigned int v32; 
  int v34; 
  __int64 v35; 
  char *v36; 
  __int64 v37; 
  unsigned int v40; 
  bool v41; 
  unsigned int v43; 
  unsigned int v45; 
  unsigned int v46; 
  __int64 v47; 
  __int64 v48; 
  __int16 LifeCountUpToMax; 
  DDLState toState; 
  int v51; 
  int v52; 
  __int64 v53; 
  DDLState state; 
  DDLState fromState; 
  int v56; 
  char v57; 
  unsigned int val[200]; 
  int v59[200]; 
  __int128 v60; 
  __int128 v61; 

  v4 = player;
  v51 = player;
  memset_0(&v56, 0, 0x320ui64);
  memset_0(val, 0, sizeof(val));
  memset_0(v59, 0, sizeof(v59));
  PlayerCount = GetPlayerCount();
  v6 = 0;
  LifeCountUpToMax = GetLifeCountUpToMax();
  v52 = PlayerCount;
  v7 = v4;
  v8 = PlayerCount;
  if ( PlayerCount <= 0 )
    goto LABEL_44;
  v61 = v2;
  v9 = 0i64;
  v60 = v3;
  v10 = 0i64;
  v53 = 0i64;
  do
  {
    if ( v9 == v7 )
      goto LABEL_43;
    if ( v6 >= 0x800 )
    {
      LODWORD(v48) = 2048;
      LODWORD(v47) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v47, v48) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( *(&g_entities->r.isInUse + v10) != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v9] )
      goto LABEL_43;
    v11 = LifeCountUpToMax;
    v12 = 0;
    if ( LifeCountUpToMax <= 0 )
      goto LABEL_42;
    do
    {
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&toState.member = _XMM0;
      if ( v12 >= 475 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 162, ASSERT_TYPE_ASSERT, "(lifeSlot < 475)", (const char *)&queryFormat, "lifeSlot < MATCH_DATA_MAX_LIVES") )
          __debugbreak();
        goto LABEL_40;
      }
      if ( v12 < 0 || !DDL_MoveToIndex(&g_lifeBufState, &toState, v12) )
        goto LABEL_40;
      v13 = scr_const.player;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&state.member = _XMM0;
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v15 = ScriptContext_Server();
      RawHash = j_SL_GetRawHash(v13);
      if ( DDL_MoveToNameByHash(&toState, &state, RawHash, NULL) )
      {
        Type = DDL_GetType(&state);
        if ( (Type & 0xFFFFFFFC) == 0 && Type != DDL_UINT_TYPE )
        {
          UInt = DDL_GetUInt(&state, &s_matchdataDDLContext);
          goto LABEL_27;
        }
        v17 = "Invalid match data definition specified. Must be a int, short or byte type";
        v18 = COM_ERR_3426;
      }
      else
      {
        v17 = "Invalid match data definition specified.";
        v18 = COM_ERR_3425;
      }
      Scr_Error(v18, v15, v17);
      UInt = 0;
LABEL_27:
      attacker = scr_const.attacker;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&state.member = _XMM0;
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v22 = ScriptContext_Server();
      v23 = j_SL_GetRawHash(attacker);
      if ( DDL_MoveToNameByHash(&toState, &state, v23, NULL) )
      {
        v26 = DDL_GetType(&state);
        if ( (v26 & 0xFFFFFFFC) == 0 && v26 != DDL_UINT_TYPE )
        {
          v27 = DDL_GetUInt(&state, &s_matchdataDDLContext);
          goto LABEL_34;
        }
        v24 = "Invalid match data definition specified. Must be a int, short or byte type";
        v25 = COM_ERR_3426;
      }
      else
      {
        v24 = "Invalid match data definition specified.";
        v25 = COM_ERR_3425;
      }
      Scr_Error(v25, v22, v24);
      v27 = 0;
LABEL_34:
      v28 = UInt;
      LODWORD(v4) = v51;
      if ( v28 == v51 && v27 == v6 )
      {
        v29 = *((float *)&v56 + v9) + 1.5;
        ++val[v9];
        *((float *)&v56 + v9) = v29;
      }
      v11 = LifeCountUpToMax;
      if ( v28 == v6 && v27 == (_DWORD)v4 )
      {
        v30 = *((float *)&v56 + v9) + 1.0;
        ++v59[v9];
        *((float *)&v56 + v9) = v30;
      }
LABEL_40:
      ++v12;
    }
    while ( v12 < v11 );
    v8 = v52;
    v7 = (int)v4;
LABEL_42:
    v10 = v53;
LABEL_43:
    v10 += 1456i64;
    ++v6;
    ++v9;
    v53 = v10;
  }
  while ( (int)v6 < v8 );
LABEL_44:
  v31 = 0;
  v32 = -1;
  _XMM0 = 0i64;
  if ( v8 >= 4 )
  {
    v34 = 2;
    v35 = 2i64;
    v36 = &v57;
    do
    {
      if ( v35 - 2 != v7 && *((float *)v36 - 1) > *(float *)&_XMM0 )
      {
        v32 = v31;
        _XMM0 = *((unsigned int *)v36 - 1);
      }
      if ( v35 - 1 != v7 && *(float *)v36 > *(float *)&_XMM0 )
      {
        v32 = v34 - 1;
        _XMM0 = *(unsigned int *)v36;
      }
      if ( v35 != v7 && *((float *)v36 + 1) > *(float *)&_XMM0 )
      {
        v32 = v34;
        _XMM0 = *((unsigned int *)v36 + 1);
      }
      if ( v35 + 1 != v7 && *((float *)v36 + 2) > *(float *)&_XMM0 )
      {
        v32 = v34 + 1;
        _XMM0 = *((unsigned int *)v36 + 2);
      }
      v35 += 4i64;
      v36 += 16;
      v31 += 4;
      v34 += 4;
    }
    while ( v31 < v8 - 3 );
  }
  if ( v31 < v8 )
  {
    v37 = v31;
    do
    {
      if ( v37 != v7 && *((float *)&v56 + v37) > *(float *)&_XMM0 )
      {
        v32 = v31;
        _XMM0 = (unsigned int)*(&v56 + v37);
      }
      ++v37;
      ++v31;
    }
    while ( v31 < v8 );
  }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  if ( (int)v4 >= 30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 106, ASSERT_TYPE_ASSERT, "(playerSlot < 30)", (const char *)&queryFormat, "playerSlot < MATCH_DATA_MAX_PLAYERS") )
      __debugbreak();
    return;
  }
  if ( (int)v4 >= 0 && DDL_MoveToIndex(&g_playerBufferState, &fromState, v4) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&toState.member = _XMM0;
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    v40 = j_SL_GetRawHash(scr_const.nemesis);
    v41 = DDL_MoveToNameByHash(&fromState, &toState, v40, NULL);
    if ( v32 == -1 )
    {
      if ( v41 )
      {
        v46 = 255;
        goto LABEL_81;
      }
    }
    else
    {
      if ( v41 )
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v32);
      else
        Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&toState.member = _XMM0;
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      v43 = j_SL_GetRawHash(scr_const.nemesisDeaths);
      if ( DDL_MoveToNameByHash(&fromState, &toState, v43, NULL) )
        DDL_SetUInt(&toState, &s_matchdataDDLContext, val[v32]);
      else
        Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&toState.member = _XMM0;
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      v45 = j_SL_GetRawHash(scr_const.nemesisKills);
      if ( DDL_MoveToNameByHash(&fromState, &toState, v45, NULL) )
      {
        v46 = v59[v32];
LABEL_81:
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v46);
        return;
      }
    }
    Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
  }
}

/*
==============
GetLifeCountUpToMax
==============
*/

unsigned __int16 __fastcall GetLifeCountUpToMax(double _XMM0_8)
{
  unsigned int RawHash; 
  scrContext_t *v3; 
  unsigned __int16 result; 
  scrContext_t *v5; 
  DDLState toState; 
  DDLState fromState; 
  DDLState v8; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  fromState = *DDL_GetRootState(&v8, s_matchdataDDLDef);
  RawHash = j_SL_GetRawHash(scr_const.lifeCount);
  if ( DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL) )
  {
    if ( DDL_GetType(&toState) == DDL_SHORT_TYPE )
    {
      result = DDL_GetShort(&toState, &s_matchdataDDLContext);
      if ( (__int16)result > 475 )
        return 475;
    }
    else
    {
      v5 = ScriptContext_Server();
      Scr_Error(COM_ERR_3424, v5, "Invalid match data definition specified. lifeCount must be a short");
      return 0;
    }
  }
  else
  {
    v3 = ScriptContext_Server();
    Scr_Error(COM_ERR_3423, v3, "Invalid match data definition specified. Must contain a lifeCount field.");
    return 0;
  }
  return result;
}

/*
==============
LiveHeuristics_Finalize
==============
*/

void __fastcall LiveHeuristics_Finalize(double _XMM0_8)
{
  char v1; 
  SvGameGlobals *v2; 
  unsigned int RawHash; 
  scrContext_t *v4; 
  unsigned int v5; 
  scrContext_t *v6; 
  unsigned int i; 
  const PartyData *ServerLobby; 
  const PartyData *v9; 
  const XUID *v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  const char *String; 
  const XUID *v16; 
  int v17; 
  DDLState toState; 
  DDLState fromState; 
  XUID v20; 
  DDLState result; 
  DDLState v22; 
  XUID v23; 
  XUID xuid; 
  XUID v25; 
  XUID v26; 

  XUID::XUID(&v23);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 715, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_IsGameLocalServerRunning() && Com_GameMode_SupportsFeature(WEAPON_RAISING) )
  {
    v1 = SvGameGlobals::ms_allocatedType;
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
    {
      v17 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v17) )
        __debugbreak();
      v1 = SvGameGlobals::ms_allocatedType;
    }
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    v2 = SvGameGlobals::ms_svGameGlobals;
    if ( *((_BYTE *)&SvGameGlobals::ms_svGameGlobals[4].num_entities + 4) )
    {
      s_matchdataDDLDef = Com_DDL_LoadAsset((const char *)&SvGameGlobals::ms_svGameGlobals[4].num_entities + 4);
      Com_DDL_CreateContext(&v2[4].m_mapname[40], 2048, s_matchdataDDLDef, &s_matchdataDDLContext, NULL, NULL);
      DDL_GetRootState(&result, s_matchdataDDLDef);
      RawHash = j_SL_GetRawHash(scr_const.lives);
      if ( !DDL_MoveToNameByHash(&result, &g_lifeBufState, RawHash, NULL) )
      {
        v4 = ScriptContext_Server();
        Scr_Error(COM_ERR_3427, v4, "Invalid match data definition specified. The lives field must be an indexed array of life structures");
      }
      v5 = j_SL_GetRawHash(scr_const.players);
      if ( !DDL_MoveToNameByHash(&result, &g_playerBufferState, v5, NULL) )
      {
        v6 = ScriptContext_Server();
        Scr_Error(COM_ERR_3428, v6, "Invalid match data definition specified. The players field must be an indexed array of player structures");
      }
      for ( i = 0; i < SvClient::ms_clientCount; ++i )
      {
        ServerLobby = SV_MainMP_GetServerLobby();
        if ( Party_IsMemberRegistered(ServerLobby, i) )
        {
          v9 = SV_MainMP_GetServerLobby();
          v10 = Party_GetXuid(&v26, v9, i);
          XUID::operator=(&v23, v10);
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v25.m_id = v23.m_id;
          *(_OWORD *)&fromState.member = *(_OWORD *)&_XMM0_8;
          *(_OWORD *)&toState.member = *(_OWORD *)&_XMM0_8;
          fromState.isValid = 0;
          fromState.offset = 0;
          fromState.arrayIndex = -1;
          toState.isValid = 0;
          toState.offset = 0;
          toState.arrayIndex = -1;
          XUID::XUID(&xuid);
          fromState = *DDL_GetRootState(&v22, s_matchdataDDLContext.def);
          v11 = j_SL_GetRawHash(scr_const.players);
          DDL_MoveToNameByHash(&fromState, &fromState, v11, NULL);
          v12 = 0;
          while ( 1 )
          {
            DDL_MoveToIndex(&fromState, &toState, v12);
            v13 = j_SL_GetRawHash(scr_const.playerID);
            DDL_MoveToNameByHash(&toState, &toState, v13, NULL);
            v14 = j_SL_GetRawHash(scr_const.xuid);
            DDL_MoveToNameByHash(&toState, &toState, v14, NULL);
            String = DDL_GetString(&toState, &s_matchdataDDLContext);
            if ( String )
            {
              if ( *String )
              {
                v16 = XUID::FromHexString(&v20, String);
                XUID::operator=(&xuid, v16);
                if ( XUID::IsValid(&v25) && XUID::operator==(&v25, &xuid) )
                  break;
              }
            }
            if ( ++v12 >= 30 )
              goto LABEL_33;
          }
          if ( v12 != -1 )
          {
            FindMostKilledPlayerForPlayer(v12);
            FindNemesisForPlayer(v12);
            ComputeBoostingScoreForPlayer(v12);
          }
        }
LABEL_33:
        ;
      }
    }
    else
    {
      Com_PrintWarning(25, "Matchdata def not set.  Unable to send matchdata.\n");
    }
  }
}

