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
  void *v13; 
  __int16 LifeCountUpToMax; 
  int v25; 
  int *v27; 
  scr_string_t player; 
  scrContext_t *v31; 
  unsigned int RawHash; 
  const char *v33; 
  ComErrorCode v34; 
  DDLType Type; 
  unsigned int UInt; 
  scr_string_t attacker; 
  scrContext_t *v38; 
  unsigned int v39; 
  const char *v40; 
  ComErrorCode v41; 
  DDLType v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v47; 
  unsigned int v50; 
  unsigned int v53; 
  int v61; 
  unsigned int v62; 
  unsigned int v63; 
  bool Bool; 
  unsigned int v128; 
  bool v129; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  DDLState state; 
  int v147; 
  unsigned int v148; 
  int v149; 
  DDLState fromState; 
  DDLState v151; 
  DDLState toState; 
  vec3_t vec; 
  int arr[476]; 
  int v155[476]; 
  int v156[476]; 
  int v157[476]; 
  int v158[476]; 
  char v169; 

  v13 = alloca(v1);
  __asm
  {
    vmovaps [rsp+26E0h+var_A0], xmm13
    vmovaps [rsp+26E0h+var_B0], xmm14
    vmovaps [rsp+26E0h+var_C0], xmm15
  }
  v147 = attackingPlayerSlot;
  v151.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  _EBX = 0;
  v151.offset = 0;
  __asm { vxorpd  xmm13, xmm13, xmm13 }
  v142 = 0;
  v151.arrayIndex = -1;
  v145 = 0;
  __asm
  {
    vmovsd  qword ptr [rbp+25E0h+vec], xmm13
    vmovdqu xmmword ptr [rbp+25E0h+var_2650.member], xmm0
    vxorpd  xmm14, xmm14, xmm14
    vxorpd  xmm15, xmm15, xmm15
  }
  _ER14 = 0;
  v144 = 0;
  _RDI = 0i64;
  v143 = 0;
  _ER13 = 0;
  memset_0(arr, 0, 0x76Cui64);
  memset_0(v155, 0, 0x76Cui64);
  memset_0(v156, 0, 0x76Cui64);
  memset_0(v157, 0, 0x76Cui64);
  memset_0(v158, 0, 0x76Cui64);
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+25E0h+toState.member], xmm0
  }
  if ( attackingPlayerSlot >= 30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 106, ASSERT_TYPE_ASSERT, "(playerSlot < 30)", (const char *)&queryFormat, "playerSlot < MATCH_DATA_MAX_PLAYERS") )
      __debugbreak();
    goto LABEL_48;
  }
  if ( attackingPlayerSlot < 0 || !DDL_MoveToIndex(&g_playerBufferState, &toState, attackingPlayerSlot) )
    goto LABEL_48;
  __asm
  {
    vmovaps [rsp+26E0h+var_30], xmm6
    vmovaps [rsp+26E0h+var_40], xmm7
    vmovaps [rsp+26E0h+var_50], xmm8
    vmovaps [rsp+26E0h+var_60], xmm9
    vmovaps [rsp+26E0h+var_70], xmm10
    vmovaps [rsp+26E0h+var_80], xmm11
    vmovaps [rsp+26E0h+var_90], xmm12
  }
  v148 = DDLGetUInt(&toState, scr_const.mostKilledPlayer);
  LifeCountUpToMax = GetLifeCountUpToMax();
  v25 = 0;
  v149 = LifeCountUpToMax;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( LifeCountUpToMax <= 0 )
    goto LABEL_42;
  v27 = v158;
  while ( _RDI < 1900 )
  {
    fromState.isValid = 0;
    fromState.offset = 0;
    fromState.arrayIndex = -1;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+25E0h+fromState.member], xmm0
    }
    if ( v25 < 475 )
    {
      if ( v25 >= 0 )
        DDL_MoveToIndex(&g_lifeBufState, &fromState, v25);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 162, ASSERT_TYPE_ASSERT, "(lifeSlot < 475)", (const char *)&queryFormat, "lifeSlot < MATCH_DATA_MAX_LIVES") )
    {
      __debugbreak();
    }
    player = scr_const.player;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+26E0h+state.member], xmm0
    }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v31 = ScriptContext_Server();
    RawHash = j_SL_GetRawHash(player);
    if ( DDL_MoveToNameByHash(&fromState, &state, RawHash, NULL) )
    {
      Type = DDL_GetType(&state);
      if ( (Type & 0xFFFFFFFC) == 0 && Type != DDL_UINT_TYPE )
      {
        UInt = DDL_GetUInt(&state, &s_matchdataDDLContext);
        goto LABEL_21;
      }
      v33 = "Invalid match data definition specified. Must be a int, short or byte type";
      v34 = COM_ERR_3426;
    }
    else
    {
      v33 = "Invalid match data definition specified.";
      v34 = COM_ERR_3425;
    }
    Scr_Error(v34, v31, v33);
    UInt = 0;
LABEL_21:
    attacker = scr_const.attacker;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+26E0h+state.member], xmm0
    }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v38 = ScriptContext_Server();
    v39 = j_SL_GetRawHash(attacker);
    if ( !DDL_MoveToNameByHash(&fromState, &state, v39, NULL) )
    {
      v40 = "Invalid match data definition specified.";
      v41 = COM_ERR_3425;
LABEL_27:
      Scr_Error(v41, v38, v40);
      v43 = 0;
      goto LABEL_28;
    }
    v42 = DDL_GetType(&state);
    if ( (v42 & 0xFFFFFFFC) != 0 || v42 == DDL_UINT_TYPE )
    {
      v40 = "Invalid match data definition specified. Must be a int, short or byte type";
      v41 = COM_ERR_3426;
      goto LABEL_27;
    }
    v43 = DDL_GetUInt(&state, &s_matchdataDDLContext);
LABEL_28:
    if ( v43 == v147 && v43 != UInt )
    {
      v44 = j_SL_GetRawHash(scr_const.spawnPos);
      DDL_MoveToNameByHash(&fromState, &v151, v44, NULL);
      Com_DDL_GetShortVec3(&v151, &s_matchdataDDLContext, &vec);
      __asm
      {
        vmovss  xmm7, dword ptr [rbp+25E0h+vec]
        vmovss  xmm6, dword ptr [rbp+25E0h+vec+4]
      }
      v47 = j_SL_GetRawHash(scr_const.attackerPos);
      DDL_MoveToNameByHash(&fromState, &v151, v47, NULL);
      Com_DDL_GetShortVec3(&v151, &s_matchdataDDLContext, &vec);
      __asm
      {
        vmovss  xmm11, dword ptr [rbp+25E0h+vec]
        vmovss  xmm12, dword ptr [rbp+25E0h+vec+4]
      }
      v50 = j_SL_GetRawHash(scr_const.deathPos);
      DDL_MoveToNameByHash(&fromState, &v151, v50, NULL);
      Com_DDL_GetShortVec3(&v151, &s_matchdataDDLContext, &vec);
      __asm
      {
        vmovss  xmm9, dword ptr [rbp+25E0h+vec]
        vmovss  xmm10, dword ptr [rbp+25E0h+vec+4]
      }
      DDLGetUInt(&fromState, scr_const.spawnTime_msFromMatchStart);
      v53 = DDLGetUInt(&fromState, scr_const.deathTime_msFromMatchStart);
      __asm
      {
        vsubss  xmm1, xmm10, xmm6
        vsubss  xmm0, xmm9, xmm7
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vcvtss2sd xmm6, xmm0, xmm0
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+26E0h+state.member], xmm0
      }
      v61 = v53;
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v62 = j_SL_GetRawHash(scr_const.modifiers);
      DDL_MoveToNameByHash(&fromState, &state, v62, NULL);
      v63 = j_SL_GetRawHash(scr_const.headshot);
      DDL_MoveToNameByHash(&state, &state, v63, NULL);
      Bool = DDL_GetBool(&state, &s_matchdataDDLContext);
      if ( v61 )
      {
        __asm
        {
          vucomiss xmm11, xmm8
          vcvttss2si eax, xmm11
        }
        *(int *)((char *)arr + _RDI) = _EAX;
        __asm { vcvttss2si eax, xmm12 }
        *(int *)((char *)v155 + _RDI) = _EAX;
        __asm { vcvttss2si eax, xmm9 }
        *(int *)((char *)v156 + _RDI) = _EAX;
        __asm { vcvttss2si eax, xmm10 }
        *(int *)((char *)v157 + _RDI) = _EAX;
        __asm { vaddsd  xmm14, xmm14, xmm6 }
        if ( Bool )
          ++v145;
        if ( UInt == v148 )
        {
          *v27 = v61;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, r13d
            vaddsd  xmm13, xmm13, xmm0
            vaddsd  xmm15, xmm15, xmm6
          }
          if ( Bool )
            ++v144;
          ++v27;
          _ER13 = v143 + 1;
          _EBX = v142 + 1;
          ++v143;
          ++v142;
          _RDI += 4i64;
        }
        else
        {
          _ER13 = v143;
          _EBX = ++v142;
          _RDI += 4i64;
        }
        goto LABEL_40;
      }
      _ER13 = v143;
    }
    _EBX = v142;
LABEL_40:
    if ( ++v25 >= v149 )
      break;
  }
  LODWORD(_RDI) = v144;
  _ER14 = v145;
  __asm { vmovsd  qword ptr [rbp+25E0h+vec], xmm13 }
LABEL_42:
  if ( _ER13 )
  {
    *(double *)&_XMM0 = DensityAnomaly(arr, _EBX);
    __asm { vmovaps xmm12, xmm0 }
    *(double *)&_XMM0 = DensityAnomaly(v155, _EBX);
    __asm { vmovaps xmm11, xmm0 }
    *(double *)&_XMM0 = DensityAnomaly(v156, _EBX);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = DensityAnomaly(v157, _EBX);
    __asm
    {
      vmovsd  xmm13, cs:__real@3ff0000000000000
      vmovd   xmm1, ebx
      vcvtdq2pd xmm1, xmm1
      vmovd   xmm6, r13d
      vcvtdq2pd xmm6, xmm6
      vdivsd  xmm7, xmm13, xmm1
      vmovaps xmm9, xmm0
      vdivsd  xmm8, xmm13, xmm6
    }
    *(double *)&_XMM0 = DensityAnomaly(v158, _ER13);
    __asm
    {
      vsubsd  xmm1, xmm0, cs:__real@3fec6cee40000000
      vmulsd  xmm5, xmm1, cs:__real@3ff681d3335429bf
      vmovd   xmm2, r14d
      vcvtdq2pd xmm2, xmm2
      vsubsd  xmm0, xmm2, cs:__real@3fe63f6400000000
      vmulsd  xmm1, xmm0, cs:__real@3fb407face7c93e6
      vsubsd  xmm3, xmm1, cs:__real@3ffea359a0000000
      vmulsd  xmm2, xmm7, xmm14
      vsubsd  xmm0, xmm2, cs:__real@40994699a0000000
      vmulsd  xmm1, xmm0, cs:__real@3f416df1e6a88286
      vsubsd  xmm2, xmm6, cs:__real@401da83a80000000
      vmulsd  xmm0, xmm2, cs:__real@3fc01f73dc26b6fb
      vsubsd  xmm3, xmm3, xmm1
      vaddsd  xmm4, xmm3, xmm0
      vmulsd  xmm1, xmm6, xmm7
      vsubsd  xmm2, xmm1, cs:__real@3fe3e79400000000
      vmulsd  xmm0, xmm2, cs:__real@4017f00372080797
      vaddsd  xmm3, xmm4, xmm0
      vmulsd  xmm1, xmm8, xmm15
      vsubsd  xmm2, xmm1, cs:__real@40980474a0000000
      vmulsd  xmm0, xmm2, cs:__real@3f43c74a6cef6e75
      vsubsd  xmm4, xmm3, xmm0
      vmovd   xmm1, edi
      vcvtdq2pd xmm1, xmm1
      vmulsd  xmm2, xmm1, xmm8
      vsubsd  xmm0, xmm2, cs:__real@3fb098e0c0000000
      vmulsd  xmm3, xmm0, cs:__real@3ff1cd39ab84c5b4
      vmulsd  xmm1, xmm8, qword ptr [rbp+25E0h+vec]
      vsubsd  xmm0, xmm1, cs:__real@40e5baeb00000000
      vmulsd  xmm2, xmm0, cs:__real@3ebaa83745a0920c
      vsubsd  xmm1, xmm12, cs:__real@3fe2793620000000
      vmulsd  xmm0, xmm1, cs:__real@3ff194b58f147053
      vaddsd  xmm4, xmm4, xmm3
      vsubsd  xmm3, xmm4, xmm2
      vsubsd  xmm2, xmm11, cs:__real@3fe1977d00000000
      vmulsd  xmm1, xmm2, cs:__real@3ff2ddbdcdf65491
      vsubsd  xmm4, xmm3, xmm0
      vsubsd  xmm0, xmm10, cs:__real@3fe2589980000000
      vmulsd  xmm2, xmm0, cs:__real@40016f01fd70fb13
      vsubsd  xmm3, xmm4, xmm1
      vsubsd  xmm1, xmm9, cs:__real@3fe2440a40000000
      vmulsd  xmm0, xmm1, cs:__real@3ffeef95602adad2
      vsubsd  xmm4, xmm3, xmm2
      vsubsd  xmm2, xmm4, xmm0
      vsubsd  xmm0, xmm5, xmm2; X
    }
    *(double *)&_XMM0 = exp_0(*(double *)&_XMM0);
    __asm
    {
      vaddsd  xmm1, xmm0, xmm13
      vdivsd  xmm1, xmm13, xmm1
      vcvtsd2ss xmm8, xmm1, xmm1
    }
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+26E0h+state.member], xmm0
  }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v128 = j_SL_GetRawHash(scr_const.boostingScore);
  v129 = DDL_MoveToNameByHash(&toState, &state, v128, NULL);
  __asm
  {
    vmovaps xmm12, [rsp+26E0h+var_90]
    vmovaps xmm11, [rsp+26E0h+var_80]
    vmovaps xmm10, [rsp+26E0h+var_70]
    vmovaps xmm9, [rsp+26E0h+var_60]
    vmovaps xmm7, [rsp+26E0h+var_40]
    vmovaps xmm6, [rsp+26E0h+var_30]
  }
  if ( v129 )
  {
    __asm { vmovaps xmm2, xmm8; val }
    DDL_SetFloat(&state, &s_matchdataDDLContext, *(float *)&_XMM2);
  }
  else
  {
    Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
  }
  __asm { vmovaps xmm8, [rsp+26E0h+var_50] }
LABEL_48:
  _R11 = &v169;
  __asm
  {
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+58h+toState.member], xmm0
  }
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
long double DensityAnomaly(int *arr, int size)
{
  int v6; 
  int i; 
  __int64 v8; 
  int *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v50; 
  int j; 
  int v52; 
  int v54; 
  bool v55; 
  unsigned int v56; 
  __int64 v57; 
  bool v61; 
  bool v62; 
  unsigned int v63; 
  __int64 v65; 
  bool v66; 
  __int128 v80[238]; 

  if ( size >= 2 )
  {
    v6 = 0;
    for ( i = size - 1; v6 < i; ++v6 )
    {
      if ( size - v6 - 1 > 0 )
      {
        v8 = (unsigned int)(size - v6 - 1);
        v9 = arr;
        v10 = *arr;
        do
        {
          v11 = v9[1];
          if ( v10 <= v11 )
          {
            v10 = v9[1];
          }
          else
          {
            *v9 = v11;
            v9[1] = v10;
          }
          ++v9;
          --v8;
        }
        while ( v8 );
      }
    }
    v12 = 0;
    if ( i > 0 && (unsigned int)i >= 8 && (v80 > (__int128 *)&arr[i] || (char *)v80 + 8 * i - 8 < (char *)arr) )
    {
      _RCX = 0i64;
      _RAX = arr + 3;
      do
      {
        __asm
        {
          vmovq   xmm0, qword ptr [rax-8]
          vmovq   xmm1, qword ptr [rax-0Ch]
          vcvtdq2pd xmm2, xmm0
          vcvtdq2pd xmm0, xmm1
          vmovq   xmm1, qword ptr [rax-4]
          vsubpd  xmm2, xmm2, xmm0
          vmovq   xmm0, qword ptr [rax]
          vmovupd [rsp+rcx*8+0EF8h+var_EF8], xmm2
          vcvtdq2pd xmm2, xmm0
          vcvtdq2pd xmm0, xmm1
          vmovq   xmm1, qword ptr [rax+4]
          vsubpd  xmm2, xmm2, xmm0
          vmovq   xmm0, qword ptr [rax+8]
          vmovupd [rsp+rcx*8+0EF8h+var_EE8], xmm2
          vcvtdq2pd xmm2, xmm0
          vcvtdq2pd xmm0, xmm1
          vmovq   xmm1, qword ptr [rax+0Ch]
          vsubpd  xmm2, xmm2, xmm0
          vmovq   xmm0, qword ptr [rax+10h]
          vmovupd [rsp+rcx*8+0EF8h+var_ED8], xmm2
          vcvtdq2pd xmm2, xmm0
          vcvtdq2pd xmm0, xmm1
          vsubpd  xmm2, xmm2, xmm0
          vmovupd [rsp+rcx*8+0EF8h+var_EC8], xmm2
        }
        _RCX += 8i64;
        _RAX += 8;
        v12 += 8;
      }
      while ( _RCX < i - (i & 7) );
    }
    _RCX = v12;
    if ( v12 < (__int64)i )
    {
      if ( i - (__int64)v12 >= 4 )
      {
        _RAX = &arr[v12 + 2];
        do
        {
          __asm
          {
            vmovd   xmm3, dword ptr [rax-4]
            vmovd   xmm0, dword ptr [rax-8]
            vmovd   xmm2, dword ptr [rax]
            vcvtdq2pd xmm3, xmm3
            vcvtdq2pd xmm0, xmm0
            vsubsd  xmm1, xmm3, xmm0
            vcvtdq2pd xmm2, xmm2
            vsubsd  xmm0, xmm2, xmm3
            vmovd   xmm3, dword ptr [rax+4]
            vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EF8+8], xmm0
            vmovd   xmm0, dword ptr [rax+8]
            vcvtdq2pd xmm3, xmm3
            vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EF8], xmm1
            vsubsd  xmm1, xmm3, xmm2
            vcvtdq2pd xmm0, xmm0
            vsubsd  xmm2, xmm0, xmm3
            vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EE8+8], xmm2
            vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EE8], xmm1
          }
          _RCX += 4i64;
          _RAX += 4;
        }
        while ( _RCX < i - 3i64 );
      }
      for ( ; _RCX < i; ++_RCX )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, dword ptr [r11+rcx*4+4]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, dword ptr [r11+rcx*4]
          vsubsd  xmm1, xmm1, xmm0
          vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EF8], xmm1
        }
      }
    }
    v50 = i - 1;
    for ( j = 0; j < v50; ++j )
    {
      v52 = 0;
      _RCX = 0i64;
      v54 = i - j - 1;
      if ( v54 >= 4 )
      {
        v56 = ((unsigned int)(i - j - 5) >> 2) + 1;
        v55 = __CFSHR__(i - j - 5, 2) || v56 == 0;
        v57 = v56;
        v52 = 4 * v56;
        do
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+rcx*8+0EF8h+var_EF8]
            vmovsd  xmm1, qword ptr [rsp+rcx*8+0EF8h+var_EF8+8]
            vcomisd xmm0, xmm1
          }
          if ( !v55 )
          {
            __asm
            {
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EF8], xmm1
              vmovaps xmm1, xmm0
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EF8+8], xmm0
            }
          }
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+rcx*8+0EF8h+var_EE8]
            vcomisd xmm1, xmm0
          }
          if ( !v55 )
          {
            __asm
            {
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EF8+8], xmm0
              vmovaps xmm0, xmm1
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EE8], xmm1
            }
          }
          __asm
          {
            vmovsd  xmm1, qword ptr [rsp+rcx*8+0EF8h+var_EE8+8]
            vcomisd xmm0, xmm1
          }
          if ( !v55 )
          {
            __asm
            {
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EE8], xmm1
              vmovaps xmm1, xmm0
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EE8+8], xmm0
            }
          }
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+rcx*8+0EF8h+var_ED8]
            vcomisd xmm1, xmm0
          }
          if ( !v55 )
          {
            __asm
            {
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_EE8+8], xmm0
              vmovsd  qword ptr [rsp+rcx*8+0EF8h+var_ED8], xmm1
            }
          }
          _RCX += 2i64;
          v61 = v57-- == 0;
          v55 = v61 || v57 == 0;
        }
        while ( v57 );
      }
      if ( v52 < v54 )
      {
        v61 = v54 < (unsigned int)v52;
        v63 = v54 - v52;
        v62 = v61 || v63 == 0;
        _RAX = (char *)&v80[_RCX] + 8;
        v65 = v63;
        do
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rax-8]
            vmovsd  xmm1, qword ptr [rax]
            vcomisd xmm0, xmm1
          }
          if ( !v62 )
          {
            __asm
            {
              vmovsd  qword ptr [rax-8], xmm1
              vmovsd  qword ptr [rax], xmm0
            }
          }
          _RAX += 8;
          v61 = v65-- == 0;
          v62 = v61 || v65 == 0;
        }
        while ( v65 );
      }
    }
    if ( i % 2 == 1 )
    {
      v66 = v50 / 2 == 0;
      _RCX = v50 / 2;
      __asm { vmovsd  xmm4, qword ptr [rsp+rcx*8+0EF8h+var_EF8] }
    }
    else
    {
      v66 = i / 2 == 0;
      _RCX = i / 2;
      __asm
      {
        vmovsd  xmm0, [rsp+rcx*8+0EF8h+var_F00]
        vaddsd  xmm1, xmm0, qword ptr [rsp+rcx*8+0EF8h+var_EF8]
        vmulsd  xmm4, xmm1, cs:__real@3fe0000000000000
      }
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, dword ptr [r11+rdi*4]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, dword ptr [r11]
      vsubsd  xmm2, xmm1, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, ebx
      vdivsd  xmm3, xmm2, xmm1
      vxorpd  xmm0, xmm0, xmm0
      vucomisd xmm3, xmm0
    }
    if ( !v66 )
      __asm { vdivsd  xmm0, xmm4, xmm3 }
  }
  else
  {
    __asm { vmovsd  xmm0, cs:__real@3ff0000000000000 }
  }
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
              __asm
              {
                vpxor   xmm0, xmm0, xmm0
                vmovdqu xmmword ptr [rsp+720h+toState.member], xmm0
              }
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
              __asm
              {
                vpxor   xmm0, xmm0, xmm0
                vmovdqu xmmword ptr [rsp+720h+state.member], xmm0
              }
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
              __asm
              {
                vpxor   xmm0, xmm0, xmm0
                vmovdqu xmmword ptr [rsp+720h+state.member], xmm0
              }
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+620h+fromState.member], xmm0
  }
  if ( (int)v2 >= 30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 106, ASSERT_TYPE_ASSERT, "(playerSlot < 30)", (const char *)&queryFormat, "playerSlot < MATCH_DATA_MAX_PLAYERS") )
      __debugbreak();
    return;
  }
  if ( (int)v2 >= 0 && DDL_MoveToIndex(&g_playerBufferState, &fromState, v2) )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+720h+toState.member], xmm0
    }
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
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+720h+toState.member], xmm0
      }
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
      __asm { vmovdqu xmmword ptr [rsp+720h+toState.member], xmm0 }
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
  unsigned __int64 v4; 
  int PlayerCount; 
  unsigned int v6; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v12; 
  int v13; 
  int v14; 
  scr_string_t v15; 
  scrContext_t *v17; 
  unsigned int RawHash; 
  const char *v19; 
  ComErrorCode v20; 
  DDLType Type; 
  unsigned __int8 UInt; 
  scr_string_t attacker; 
  scrContext_t *v24; 
  unsigned int v25; 
  const char *v26; 
  ComErrorCode v27; 
  DDLType v28; 
  unsigned __int8 v29; 
  int v30; 
  int v35; 
  unsigned int v36; 
  int v38; 
  unsigned __int64 v39; 
  unsigned int v49; 
  bool v50; 
  unsigned int v52; 
  unsigned int v54; 
  unsigned int v55; 
  __int64 v56; 
  __int64 v57; 
  __int16 LifeCountUpToMax; 
  DDLState toState; 
  int v60; 
  int v61; 
  __int64 v62; 
  DDLState state; 
  DDLState fromState; 
  int v65; 
  char v66; 
  unsigned int val[200]; 
  int v68[200]; 

  v4 = player;
  v60 = player;
  memset_0(&v65, 0, 0x320ui64);
  memset_0(val, 0, sizeof(val));
  memset_0(v68, 0, sizeof(v68));
  PlayerCount = GetPlayerCount();
  v6 = 0;
  LifeCountUpToMax = GetLifeCountUpToMax();
  v61 = PlayerCount;
  v7 = v4;
  v8 = PlayerCount;
  if ( PlayerCount > 0 )
  {
    __asm
    {
      vmovaps [rsp+0A70h+var_38+8], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    _R15 = 0i64;
    __asm
    {
      vmovaps [rsp+0A70h+var_48+8], xmm7
      vmovss  xmm7, cs:__real@3fc00000
    }
    v12 = 0i64;
    v62 = 0i64;
    while ( 1 )
    {
      if ( _R15 == v7 )
        goto LABEL_43;
      if ( v6 >= 0x800 )
      {
        LODWORD(v57) = 2048;
        LODWORD(v56) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v56, v57) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( *(&g_entities->r.isInUse + v12) != g_entityIsInUse[_R15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[_R15] )
        goto LABEL_43;
      v13 = LifeCountUpToMax;
      v14 = 0;
      if ( LifeCountUpToMax <= 0 )
        goto LABEL_42;
      do
      {
        toState.isValid = 0;
        toState.offset = 0;
        toState.arrayIndex = -1;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+0A70h+toState.member], xmm0
        }
        if ( v14 >= 475 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 162, ASSERT_TYPE_ASSERT, "(lifeSlot < 475)", (const char *)&queryFormat, "lifeSlot < MATCH_DATA_MAX_LIVES") )
            __debugbreak();
          goto LABEL_40;
        }
        if ( v14 < 0 || !DDL_MoveToIndex(&g_lifeBufState, &toState, v14) )
          goto LABEL_40;
        v15 = scr_const.player;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+970h+state.member], xmm0
        }
        state.isValid = 0;
        state.offset = 0;
        state.arrayIndex = -1;
        v17 = ScriptContext_Server();
        RawHash = j_SL_GetRawHash(v15);
        if ( DDL_MoveToNameByHash(&toState, &state, RawHash, NULL) )
        {
          Type = DDL_GetType(&state);
          if ( (Type & 0xFFFFFFFC) == 0 && Type != DDL_UINT_TYPE )
          {
            UInt = DDL_GetUInt(&state, &s_matchdataDDLContext);
            goto LABEL_27;
          }
          v19 = "Invalid match data definition specified. Must be a int, short or byte type";
          v20 = COM_ERR_3426;
        }
        else
        {
          v19 = "Invalid match data definition specified.";
          v20 = COM_ERR_3425;
        }
        Scr_Error(v20, v17, v19);
        UInt = 0;
LABEL_27:
        attacker = scr_const.attacker;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+970h+state.member], xmm0
        }
        state.isValid = 0;
        state.offset = 0;
        state.arrayIndex = -1;
        v24 = ScriptContext_Server();
        v25 = j_SL_GetRawHash(attacker);
        if ( DDL_MoveToNameByHash(&toState, &state, v25, NULL) )
        {
          v28 = DDL_GetType(&state);
          if ( (v28 & 0xFFFFFFFC) == 0 && v28 != DDL_UINT_TYPE )
          {
            v29 = DDL_GetUInt(&state, &s_matchdataDDLContext);
            goto LABEL_34;
          }
          v26 = "Invalid match data definition specified. Must be a int, short or byte type";
          v27 = COM_ERR_3426;
        }
        else
        {
          v26 = "Invalid match data definition specified.";
          v27 = COM_ERR_3425;
        }
        Scr_Error(v27, v24, v26);
        v29 = 0;
LABEL_34:
        v30 = UInt;
        LODWORD(v4) = v60;
        if ( v30 == v60 && v29 == v6 )
        {
          __asm { vaddss  xmm1, xmm7, [rbp+r15*4+970h+var_9B0] }
          ++val[_R15];
          __asm { vmovss  [rbp+r15*4+970h+var_9B0], xmm1 }
        }
        v13 = LifeCountUpToMax;
        if ( v30 == v6 && v29 == (_DWORD)v4 )
        {
          __asm { vaddss  xmm1, xmm6, [rbp+r15*4+970h+var_9B0] }
          ++v68[_R15];
          __asm { vmovss  [rbp+r15*4+970h+var_9B0], xmm1 }
        }
LABEL_40:
        ++v14;
      }
      while ( v14 < v13 );
      v8 = v61;
      v7 = (int)v4;
LABEL_42:
      v12 = v62;
LABEL_43:
      v12 += 1456i64;
      ++v6;
      ++_R15;
      v62 = v12;
      if ( (int)v6 >= v8 )
      {
        __asm
        {
          vmovaps xmm7, [rsp+0A70h+var_48+8]
          vmovaps xmm6, [rsp+0A70h+var_38+8]
        }
        break;
      }
    }
  }
  v35 = 0;
  v36 = -1;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( v8 >= 4 )
  {
    v38 = 2;
    v39 = 2i64;
    _R8 = &v66;
    do
    {
      if ( v39 - 2 != v7 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r8-4]
          vcomiss xmm1, xmm0
        }
        if ( v39 - 2 > v7 )
        {
          v36 = v35;
          __asm { vmovaps xmm0, xmm1 }
        }
      }
      if ( v39 - 1 != v7 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r8]
          vcomiss xmm1, xmm0
        }
        if ( v39 - 1 > v7 )
        {
          v36 = v38 - 1;
          __asm { vmovaps xmm0, xmm1 }
        }
      }
      if ( v39 != v7 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r8+4]
          vcomiss xmm1, xmm0
        }
        if ( v39 > v7 )
        {
          v36 = v38;
          __asm { vmovaps xmm0, xmm1 }
        }
      }
      if ( v39 + 1 != v7 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r8+8]
          vcomiss xmm1, xmm0
        }
        if ( v39 + 1 > v7 )
        {
          v36 = v38 + 1;
          __asm { vmovaps xmm0, xmm1 }
        }
      }
      v39 += 4i64;
      _R8 += 16;
      v35 += 4;
      v38 += 4;
    }
    while ( v35 < v8 - 3 );
  }
  if ( v35 < v8 )
  {
    _RAX = v35;
    do
    {
      if ( _RAX != v7 )
      {
        __asm
        {
          vmovss  xmm1, [rbp+rax*4+970h+var_9B0]
          vcomiss xmm1, xmm0
        }
        if ( _RAX > v7 )
        {
          v36 = v35;
          __asm { vmovaps xmm0, xmm1 }
        }
      }
      ++_RAX;
      ++v35;
    }
    while ( v35 < v8 );
  }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+970h+fromState.member], xmm0
  }
  if ( (int)v4 >= 30 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 106, ASSERT_TYPE_ASSERT, "(playerSlot < 30)", (const char *)&queryFormat, "playerSlot < MATCH_DATA_MAX_PLAYERS") )
      __debugbreak();
    return;
  }
  if ( (v4 & 0x80000000) == 0i64 && DDL_MoveToIndex(&g_playerBufferState, &fromState, v4) )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0A70h+toState.member], xmm0
    }
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    v49 = j_SL_GetRawHash(scr_const.nemesis);
    v50 = DDL_MoveToNameByHash(&fromState, &toState, v49, NULL);
    if ( v36 == -1 )
    {
      if ( v50 )
      {
        v55 = 255;
        goto LABEL_82;
      }
    }
    else
    {
      if ( v50 )
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v36);
      else
        Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+0A70h+toState.member], xmm0
      }
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      v52 = j_SL_GetRawHash(scr_const.nemesisDeaths);
      if ( DDL_MoveToNameByHash(&fromState, &toState, v52, NULL) )
        DDL_SetUInt(&toState, &s_matchdataDDLContext, val[v36]);
      else
        Com_PrintError(16, "Unable to navigate to correct leaf in matchrecorder\n");
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+0A70h+toState.member], xmm0
      }
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      v54 = j_SL_GetRawHash(scr_const.nemesisKills);
      if ( DDL_MoveToNameByHash(&fromState, &toState, v54, NULL) )
      {
        v55 = v68[v36];
LABEL_82:
        DDL_SetUInt(&toState, &s_matchdataDDLContext, v55);
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
  const DDLDef *v2; 
  unsigned int RawHash; 
  scrContext_t *v7; 
  unsigned __int16 result; 
  scrContext_t *v9; 
  DDLState toState; 
  DDLState fromState; 
  DDLState v12; 
  void *retaddr; 

  _RAX = &retaddr;
  v2 = s_matchdataDDLDef;
  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rax-38h], xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rax-58h], xmm0 }
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  _RAX = DDL_GetRootState(&v12, v2);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+88h+fromState.isValid], ymm0
  }
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
      v9 = ScriptContext_Server();
      Scr_Error(COM_ERR_3424, v9, "Invalid match data definition specified. lifeCount must be a short");
      return 0;
    }
  }
  else
  {
    v7 = ScriptContext_Server();
    Scr_Error(COM_ERR_3423, v7, "Invalid match data definition specified. Must contain a lifeCount field.");
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
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  const char *String; 
  const XUID *v18; 
  int v19; 
  DDLState toState; 
  DDLState fromState; 
  XUID v22; 
  DDLState result; 
  DDLState v24; 
  XUID v25; 
  XUID xuid; 
  XUID v27; 
  XUID v28; 

  XUID::XUID(&v25);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_heuristics.cpp", 715, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_IsGameLocalServerRunning() && Com_GameMode_SupportsFeature(WEAPON_RAISING) )
  {
    v1 = SvGameGlobals::ms_allocatedType;
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
    {
      v19 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v19) )
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
          v10 = Party_GetXuid(&v28, v9, i);
          XUID::operator=(&v25, v10);
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v27.m_id = v25.m_id;
          __asm
          {
            vmovdqu xmmword ptr [rbp+57h+fromState.member], xmm0
            vmovdqu xmmword ptr [rbp+57h+toState.member], xmm0
          }
          fromState.isValid = 0;
          fromState.offset = 0;
          fromState.arrayIndex = -1;
          toState.isValid = 0;
          toState.offset = 0;
          toState.arrayIndex = -1;
          XUID::XUID(&xuid);
          _RAX = DDL_GetRootState(&v24, s_matchdataDDLContext.def);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+57h+fromState.isValid], ymm0
          }
          v13 = j_SL_GetRawHash(scr_const.players);
          DDL_MoveToNameByHash(&fromState, &fromState, v13, NULL);
          v14 = 0;
          while ( 1 )
          {
            DDL_MoveToIndex(&fromState, &toState, v14);
            v15 = j_SL_GetRawHash(scr_const.playerID);
            DDL_MoveToNameByHash(&toState, &toState, v15, NULL);
            v16 = j_SL_GetRawHash(scr_const.xuid);
            DDL_MoveToNameByHash(&toState, &toState, v16, NULL);
            String = DDL_GetString(&toState, &s_matchdataDDLContext);
            if ( String )
            {
              if ( *String )
              {
                v18 = XUID::FromHexString(&v22, String);
                XUID::operator=(&xuid, v18);
                if ( XUID::IsValid(&v27) && XUID::operator==(&v27, &xuid) )
                  break;
              }
            }
            if ( ++v14 >= 30 )
              goto LABEL_33;
          }
          if ( v14 != -1 )
          {
            FindMostKilledPlayerForPlayer(v14);
            FindNemesisForPlayer(v14);
            ComputeBoostingScoreForPlayer(v14);
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

