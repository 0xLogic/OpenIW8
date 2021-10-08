/*
==============
bdiff
==============
*/

bool __fastcall bdiff(DBBinaryPatchStream *stream, BDiffState *diffState, unsigned __int8 *(__fastcall *sourceDataCB)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64), unsigned __int8 *(__fastcall *patchDataCB)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64, unsigned __int64 *), unsigned __int8 *(__fastcall *destDataCB)(DBBinaryPatchStream *, unsigned __int64))
{
  return ?bdiff@@YA_NPEAUDBBinaryPatchStream@@PEAUBDiffState@@P6APEAE0_K2@ZP6APEAE022PEA_K@ZP6APEAE02@Z@Z(stream, diffState, sourceDataCB, patchDataCB, destDataCB);
}

/*
==============
VcdState::addr_decode
==============
*/

unsigned __int64 __fastcall VcdState::addr_decode(VcdState *this, unsigned __int64 here, unsigned __int16 mode)
{
  return ?addr_decode@VcdState@@QEAA_K_KG@Z(this, here, mode);
}

/*
==============
vcdiff
==============
*/

bool __fastcall vcdiff(const void *_old, const void *_vcdiff, unsigned __int64 diffSize, void *_output)
{
  return ?vcdiff@@YA_NPEBX0_KPEAX@Z(_old, _vcdiff, diffSize, _output);
}

/*
==============
VcdState::addr_decode
==============
*/
unsigned __int64 VcdState::addr_decode(VcdState *this, unsigned __int64 here, unsigned __int16 mode)
{
  unsigned __int64 v5; 
  unsigned __int8 *v6; 
  char v7; 
  __int64 v8; 
  unsigned __int8 *pAddr; 
  char v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  char v13; 
  unsigned __int8 *v14; 
  int v15; 
  unsigned __int64 result; 

  if ( mode )
  {
    if ( mode == 1 )
    {
      v8 = 0i64;
      do
      {
        pAddr = this->pAddr;
        v10 = *pAddr;
        this->pAddr = pAddr + 1;
        v8 = (v8 << 7) | v10 & 0x7F;
      }
      while ( v10 < 0 );
      v5 = here - v8;
    }
    else if ( mode >= 6u )
    {
      v14 = this->pAddr;
      v15 = *v14;
      this->pAddr = v14 + 1;
      v5 = *((_QWORD *)&this[-1] + 256 * mode + v15 - 757);
    }
    else
    {
      v11 = 0i64;
      do
      {
        v12 = this->pAddr;
        v13 = *v12;
        this->pAddr = v12 + 1;
        v11 = (v11 << 7) | v13 & 0x7F;
      }
      while ( v13 < 0 );
      v5 = *((_QWORD *)this + mode - 1) + v11;
    }
  }
  else
  {
    v5 = 0i64;
    do
    {
      v6 = this->pAddr;
      v7 = *v6;
      this->pAddr = v6 + 1;
      v5 = (v5 << 7) | v7 & 0x7F;
    }
    while ( v7 < 0 );
  }
  this->anear[this->next_slot] = v5;
  this->next_slot = ((unsigned __int8)this->next_slot + 1) & 3;
  result = v5;
  this->asame[v5 % 0x300] = v5;
  return result;
}

/*
==============
bdiff
==============
*/
char bdiff(DBBinaryPatchStream *stream, BDiffState *diffState, unsigned __int8 *(*sourceDataCB)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64), unsigned __int8 *(*patchDataCB)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64, unsigned __int64 *), unsigned __int8 *(*destDataCB)(DBBinaryPatchStream *, unsigned __int64))
{
  bool v5; 
  DBBinaryPatchStream *v9; 
  unsigned __int8 *v10; 
  unsigned int v11; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int8 v19; 
  char *v20; 
  char v21; 
  unsigned int v22; 
  const ObfuscateErrorText *v23; 
  __int64 v24; 
  char v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  char v28; 
  unsigned int v29; 
  unsigned __int64 v30; 
  char v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  unsigned __int8 *v36; 
  char v37; 
  unsigned int v38; 
  __int64 v39; 
  char *v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned __int64 v43; 
  char v44; 
  unsigned int v45; 
  unsigned __int8 *v46; 
  unsigned __int8 *v47; 
  unsigned int v48; 
  char v49; 
  char *v50; 
  unsigned int v51; 
  __int64 v52; 
  char v53; 
  unsigned int v54; 
  __int64 v55; 
  char v56; 
  unsigned int v57; 
  __int64 v58; 
  char v59; 
  unsigned int v60; 
  char *v61; 
  unsigned __int8 *pAddr; 
  unsigned __int8 *v63; 
  unsigned __int8 *v64; 
  bool v65; 
  __int64 v66; 
  DoubleInstruction *v67; 
  __int64 v68; 
  DoubleInstruction::Instruction v69; 
  unsigned __int64 v70; 
  char v71; 
  unsigned int v72; 
  char *v73; 
  char v74; 
  unsigned __int64 v75; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  unsigned int v78; 
  int v79; 
  unsigned __int64 v80; 
  unsigned int v81; 
  __int64 v82; 
  unsigned __int8 v83; 
  unsigned __int64 v84; 
  unsigned __int8 *input; 
  __int64 v86; 
  __int64 v87; 
  unsigned __int8 *v88; 
  unsigned __int64 v89; 
  __int64 v90; 
  DBBinaryPatchStream *v91; 
  unsigned __int8 *(__fastcall *v92)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64, unsigned __int64 *); 
  DoubleInstruction *v93; 
  unsigned __int8 *v94; 
  unsigned __int64 len; 
  VcdState v96; 

  v5 = !diffState->headerRead;
  v92 = patchDataCB;
  v9 = stream;
  v91 = stream;
  if ( v5 )
  {
    v10 = patchDataCB(stream, 0i64, 1029ui64, NULL);
    if ( !v10 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 662, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      v11 = (diffState->error_code << 8) | 0x90;
      *(_WORD *)&diffState->error = 257;
      diffState->error_code = v11;
      return 0;
    }
    if ( *(_WORD *)vcdMagic != *(_WORD *)v10 || vcdMagic[2] != v10[2] )
    {
      v18 = (diffState->error_code << 8) | 0x91;
      *(_WORD *)&diffState->error = 257;
      diffState->error_code = v18;
      return 0;
    }
    v13 = v10[4];
    if ( (v13 & 0xFFFFFFF3) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 680, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      v14 = (diffState->error_code << 8) | 0x92;
      *(_WORD *)&diffState->error = 257;
      diffState->error_code = v14;
      return 0;
    }
    diffState->features = v13;
    ((void (__fastcall *)(DBBinaryPatchStream *, __int64, _QWORD))patchDataCB)(v9, 5i64, 0i64);
    diffState->headerRead = 1;
  }
  v15 = patchDataCB(v9, 0i64, 1024ui64, (unsigned __int64 *)&v86);
  v16 = v15;
  if ( !v15 )
  {
    v17 = (diffState->error_code << 8) | 0x93;
    *(_WORD *)&diffState->error = 257;
    diffState->error_code = v17;
    return 0;
  }
  v19 = *v15;
  v20 = (char *)(v15 + 1);
  v83 = *v15;
  v21 = *v15 & 3;
  if ( v21 == 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 706, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
      __debugbreak();
    v22 = (diffState->error_code << 8) | 0x94;
    *(_WORD *)&diffState->error = 257;
    diffState->error_code = v22;
    return 0;
  }
  v23 = &queryFormat;
  v24 = 0i64;
  v87 = 0i64;
  v84 = 0i64;
  if ( !v21 )
  {
LABEL_33:
    v36 = NULL;
    do
    {
      v37 = *v20;
      v38 = *v20++ & 0x7F;
      v36 = (unsigned __int8 *)(((_QWORD)v36 << 7) | v38);
    }
    while ( v37 < 0 );
    v39 = (__int64)v92(v9, v86 + v20 - (char *)v16, (unsigned __int64)&v36[((unsigned __int64)v19 >> 1) & 4], (unsigned __int64 *)&v86);
    v40 = (char *)v39;
    if ( !v39 )
    {
      v41 = (diffState->error_code << 8) | 0x96;
      *(_WORD *)&diffState->error = 257;
      diffState->error_code = v41;
      return 0;
    }
    v90 = v39;
    v43 = 0i64;
    do
    {
      v44 = *v40;
      v45 = *v40++ & 0x7F;
      v43 = (v43 << 7) | v45;
    }
    while ( v44 < 0 );
    len = v43;
    v46 = destDataCB(v9, v43);
    v47 = v46;
    if ( !v46 )
    {
      v48 = (diffState->error_code << 8) | 0x97;
      *(_WORD *)&diffState->error = 257;
      diffState->error_code = v48;
      return 0;
    }
    input = v46;
    v49 = *v40;
    v50 = v40 + 1;
    if ( v49 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 774, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      v51 = (diffState->error_code << 8) | 0x98;
      *(_WORD *)&diffState->error = 257;
      diffState->error_code = v51;
      return 0;
    }
    memset_0(&v96, 0, sizeof(v96));
    v52 = 0i64;
    do
    {
      v53 = *v50;
      v54 = *v50++ & 0x7F;
      v52 = (v52 << 7) | v54;
    }
    while ( v53 < 0 );
    v55 = 0i64;
    do
    {
      v56 = *v50;
      v57 = *v50++ & 0x7F;
      v55 = (v55 << 7) | v57;
    }
    while ( v56 < 0 );
    v58 = 0i64;
    do
    {
      v59 = *v50;
      v60 = *v50++ & 0x7F;
      v58 = (v58 << 7) | v60;
    }
    while ( v59 < 0 );
    v89 = (unsigned __int64)&v50[v52];
    v61 = &v50[v52];
    v88 = (unsigned __int8 *)&v50[v52 + v55];
    pAddr = v88;
    v96.pAddr = v88;
    v63 = &v88[v58];
    v94 = &v88[v58];
    if ( &v88[v58 - v90] != v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 795, ASSERT_TYPE_ASSERT, "(pDiff - pDiffStart == ptrdiff_t( deltaEncodingLen ))", (const char *)&queryFormat, "pDiff - pDiffStart == ptrdiff_t( deltaEncodingLen )") )
      __debugbreak();
    v64 = pAddr;
    v65 = v61 < (char *)pAddr;
LABEL_58:
    if ( v65 )
    {
      v66 = (unsigned __int8)*v61++;
      v67 = &instructions[v66];
      v93 = v67;
      v68 = 0i64;
      while ( 1 )
      {
        v69 = v67->instruction[v68];
        if ( v69 )
          break;
LABEL_77:
        v67 = v93;
        if ( ++v68 >= 2 )
        {
          v64 = v88;
          if ( v61 > (char *)v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 850, ASSERT_TYPE_ASSERT, "(pInst <= pInstEnd)", (const char *)&queryFormat, "pInst <= pInstEnd") )
            __debugbreak();
          if ( (unsigned __int64)v50 > v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 851, ASSERT_TYPE_ASSERT, "(pAdd <= pAddEnd)", (const char *)&queryFormat, "pAdd <= pAddEnd") )
            __debugbreak();
          pAddr = v96.pAddr;
          v63 = v94;
          if ( v96.pAddr > v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 852, ASSERT_TYPE_ASSERT, "(state.pAddr <= pDiff)", (const char *)&queryFormat, "state.pAddr <= pDiff") )
            __debugbreak();
          v65 = v61 < (char *)v64;
          goto LABEL_58;
        }
      }
      v70 = HIDWORD(*(unsigned __int64 *)&v69);
      if ( !HIDWORD(*(unsigned __int64 *)&v69) )
      {
        v70 = 0i64;
        do
        {
          v71 = *v61;
          v72 = *v61++ & 0x7F;
          v70 = (v70 << 7) | v72;
        }
        while ( v71 < 0 );
      }
      if ( v69 == 1 )
      {
        v73 = v50;
        v50 += v70;
      }
      else
      {
        if ( v69 == 2 )
        {
          v74 = *v50++;
          memset(v47, v74, v70);
LABEL_76:
          v47 += v70;
          goto LABEL_77;
        }
        v75 = v87;
        v76 = VcdState::addr_decode(&v96, v87 + v47 - input, *((unsigned __int16 *)&v69 + 1));
        v77 = v76;
        if ( v76 < v75 )
        {
          if ( !v84 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 831, ASSERT_TYPE_ASSERT, "(pSource)", (const char *)&queryFormat, "pSource") )
              __debugbreak();
            v78 = (diffState->error_code << 8) | 0x99;
            *(_WORD *)&diffState->error = 257;
            diffState->error_code = v78;
            return 0;
          }
          if ( v70 + v76 > v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 834, ASSERT_TYPE_ASSERT, "(addr + size <= sourceSegmentSize)", (const char *)&queryFormat, "addr + size <= sourceSegmentSize") )
            __debugbreak();
          v73 = (char *)(v84 + v77);
        }
        else
        {
          v73 = (char *)&input[v76 - v75];
        }
      }
      qmemcpy(v47, v73, v70);
      goto LABEL_76;
    }
    if ( pAddr != v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 854, ASSERT_TYPE_ASSERT, "(state.pAddr == pDiff)", (const char *)&queryFormat, "state.pAddr == pDiff") )
      __debugbreak();
    if ( v61 != (char *)v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 855, ASSERT_TYPE_ASSERT, "(pInst == pInstEnd)", (const char *)&queryFormat, "pInst == pInstEnd") )
      __debugbreak();
    if ( v50 != (char *)v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 856, ASSERT_TYPE_ASSERT, "(pAdd == pAddEnd)", (const char *)&queryFormat, "pAdd == pAddEnd") )
      __debugbreak();
    if ( (v83 & 8) != 0 )
    {
      v79 = *v63 | ((v63[1] | (*((unsigned __int16 *)v63 + 1) << 8)) << 8);
      v80 = j_CoD_XXH64(input, len, diffState->checksum);
      if ( v79 != ((unsigned int)v80 ^ HIDWORD(v80)) )
      {
        LODWORD(v82) = v79;
        diffState->error_code = (diffState->error_code << 8) | 0x9A;
        *(_WORD *)&diffState->error = 257;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 868, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BDiff checksum failed %08x != %08x", v82, v80 ^ HIDWORD(v80)) )
          __debugbreak();
        return 0;
      }
      diffState->checksum = v80 ^ HIDWORD(v80);
      v63 += 4;
    }
    if ( (__int64)v92(v91, (unsigned __int64)&v63[v86 - v90], 0i64, NULL) )
      return 1;
    v81 = (diffState->error_code << 8) | 0x9B;
    *(_WORD *)&diffState->error = 257;
    diffState->error_code = v81;
    return 0;
  }
  do
  {
    v25 = *v20;
    v26 = *v20++ & 0x7F;
    v24 = (v24 << 7) | v26;
  }
  while ( v25 < 0 );
  v87 = v24;
  v27 = 0i64;
  do
  {
    v28 = *v20;
    v29 = *v20++ & 0x7F;
    v27 = (v27 << 7) | v29;
  }
  while ( v28 < 0 );
  if ( v21 == 1 )
  {
    if ( (v19 & 4) != 0 )
    {
      v30 = 0i64;
      do
      {
        v31 = *v20;
        v32 = *v20++ & 0x7F;
        v30 = (v30 << 7) | v32;
      }
      while ( v31 < 0 );
      if ( v30 > v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 731, ASSERT_TYPE_ASSERT, "(sourceSegmentLocationEx <= sourceSegmentLocation)", (const char *)&queryFormat, "sourceSegmentLocationEx <= sourceSegmentLocation") )
        __debugbreak();
    }
    else
    {
      v30 = v27;
    }
    v33 = v27 - v30;
    v34 = v30;
    v9 = v91;
    v35 = ((__int64 (__fastcall *)(DBBinaryPatchStream *, unsigned __int64, unsigned __int64, const ObfuscateErrorText *))sourceDataCB)(v91, v34, v33 + v24, v23);
    v19 = v83;
    v84 = v33 + v35;
    goto LABEL_33;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 738, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
    __debugbreak();
  v42 = (diffState->error_code << 8) | 0x95;
  *(_WORD *)&diffState->error = 257;
  diffState->error_code = v42;
  return 0;
}

/*
==============
vcdiff
==============
*/
char vcdiff(const void *_old, const void *_vcdiff, unsigned __int64 diffSize, void *_output)
{
  char *v5; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 v8; 
  char *v9; 
  unsigned __int64 v10; 
  char v11; 
  unsigned int v12; 
  __int64 v13; 
  char v14; 
  unsigned int v15; 
  char v16; 
  char v17; 
  char v18; 
  char *v19; 
  __int64 v20; 
  char v21; 
  unsigned int v22; 
  __int64 v23; 
  char v24; 
  unsigned int v25; 
  __int64 v26; 
  char v27; 
  unsigned int v28; 
  char *v29; 
  char *v30; 
  char *v31; 
  __int64 v32; 
  DoubleInstruction *v33; 
  __int64 v34; 
  DoubleInstruction::Instruction v35; 
  unsigned __int64 v36; 
  char v37; 
  unsigned int v38; 
  char *v39; 
  char v40; 
  unsigned int v41; 
  unsigned __int64 v42; 
  char v43; 
  unsigned int v44; 
  __int64 v45; 
  char v46; 
  unsigned int v47; 
  unsigned __int64 v48; 
  char *v49; 
  __int64 v50; 
  char v51; 
  unsigned int v52; 
  const char *v53; 
  const char *v54; 
  char *v56; 
  unsigned __int64 v57; 
  char *v58; 
  DoubleInstruction *v59; 
  char *v60; 
  unsigned __int8 *v61; 
  int v64[1546]; 
  unsigned __int8 *v65; 

  v5 = (char *)_old;
  if ( !*((_BYTE *)_vcdiff + 4) )
  {
    v7 = (unsigned __int8 *)_vcdiff + 5;
    v61 = (unsigned __int8 *)_vcdiff + diffSize;
    if ( (char *)_vcdiff + 5 >= (char *)_vcdiff + diffSize )
      return 1;
LABEL_4:
    v8 = *v7;
    v9 = (char *)(v7 + 1);
    if ( v8 > 2u )
    {
      v6 = 261;
      goto LABEL_62;
    }
    v57 = 0i64;
    v58 = NULL;
    v56 = (char *)_output;
    if ( v8 )
    {
      v10 = 0i64;
      do
      {
        v11 = *v9;
        v12 = *v9++ & 0x7F;
        v10 = (v10 << 7) | v12;
      }
      while ( v11 < 0 );
      v57 = v10;
      v13 = 0i64;
      do
      {
        v14 = *v9;
        v15 = *v9++ & 0x7F;
        v13 = (v13 << 7) | v15;
      }
      while ( v14 < 0 );
      if ( v8 != 1 )
      {
        v6 = 278;
        goto LABEL_62;
      }
      v58 = &v5[v13];
    }
    do
      v16 = *v9++;
    while ( v16 < 0 );
    do
      v17 = *v9++;
    while ( v17 < 0 );
    v18 = *v9;
    v19 = v9 + 1;
    if ( v18 )
    {
      v6 = 291;
      goto LABEL_62;
    }
    memset_0(v64, 0, 0x1830ui64);
    v20 = 0i64;
    do
    {
      v21 = *v19;
      v22 = *v19++ & 0x7F;
      v20 = (v20 << 7) | v22;
    }
    while ( v21 < 0 );
    v23 = 0i64;
    do
    {
      v24 = *v19;
      v25 = *v19++ & 0x7F;
      v23 = (v23 << 7) | v25;
    }
    while ( v24 < 0 );
    v26 = 0i64;
    do
    {
      v27 = *v19;
      v28 = *v19++ & 0x7F;
      v26 = (v26 << 7) | v28;
    }
    while ( v27 < 0 );
    v29 = &v19[v20];
    v30 = v19;
    v31 = &v19[v20 + v23];
    v60 = v31;
    v7 = (unsigned __int8 *)&v31[v26];
    if ( v29 >= v31 )
      goto LABEL_56;
LABEL_22:
    v32 = (unsigned __int8)*v29++;
    v33 = &instructions[v32];
    v59 = v33;
    v34 = 0i64;
    while ( 1 )
    {
      v35 = v33->instruction[v34];
      if ( v35 )
        break;
LABEL_54:
      v33 = v59;
      if ( ++v34 >= 2 )
      {
        if ( v29 < v60 )
          goto LABEL_22;
LABEL_56:
        if ( v7 >= v61 )
          return 1;
        v5 = (char *)_old;
        goto LABEL_4;
      }
    }
    v36 = HIDWORD(*(unsigned __int64 *)&v35);
    if ( !HIDWORD(*(unsigned __int64 *)&v35) )
    {
      v36 = 0i64;
      do
      {
        v37 = *v29;
        v38 = *v29++ & 0x7F;
        v36 = (v36 << 7) | v38;
      }
      while ( v37 < 0 );
    }
    if ( v35 == 1 )
    {
      v39 = v30;
      v30 += v36;
LABEL_52:
      qmemcpy(_output, v39, v36);
      goto LABEL_53;
    }
    if ( v35 == 2 )
    {
      v40 = *v30++;
      memset(_output, v40, v36);
LABEL_53:
      _output = (char *)_output + v36;
      goto LABEL_54;
    }
    v41 = HIWORD(*(_DWORD *)&v35);
    if ( v41 )
    {
      if ( (_WORD)v41 == 1 )
      {
        v45 = 0i64;
        do
        {
          v46 = *v31;
          v47 = *v31++ & 0x7F;
          v45 = (v45 << 7) | v47;
        }
        while ( v46 < 0 );
        v48 = v57 - v45;
        v65 = (unsigned __int8 *)v31;
        v49 = v56;
        v42 = (unsigned __int64)_output + v48 - (_QWORD)v56;
        goto LABEL_45;
      }
      if ( (unsigned __int16)v41 >= 6u )
      {
        v65 = (unsigned __int8 *)(v31 + 1);
        v42 = *(_QWORD *)&v64[512 * (unsigned __int16)v41 - 3062 + 2 * (unsigned __int8)*v31];
      }
      else
      {
        v50 = 0i64;
        do
        {
          v51 = *v31;
          v52 = *v31++ & 0x7F;
          v50 = (v50 << 7) | v52;
        }
        while ( v51 < 0 );
        v65 = (unsigned __int8 *)v31;
        v42 = v50 + *(_QWORD *)&v64[2 * (unsigned __int16)v41 - 2];
      }
    }
    else
    {
      v42 = 0i64;
      do
      {
        v43 = *v31;
        v44 = *v31++ & 0x7F;
        v42 = (v42 << 7) | v44;
      }
      while ( v43 < 0 );
      v65 = (unsigned __int8 *)v31;
    }
    v49 = v56;
LABEL_45:
    *(_QWORD *)&v64[2 * v64[0] + 2] = v42;
    v64[0] = (LOBYTE(v64[0]) + 1) & 3;
    *(_QWORD *)&v64[2 * (v42 % 0x300) + 10] = v42;
    if ( v42 < v57 )
    {
      v49 = v58;
      if ( !v58 )
      {
        v53 = "pSource";
        v6 = 393;
        v54 = "(pSource)";
        goto LABEL_63;
      }
      if ( v42 + v36 > v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 396, ASSERT_TYPE_ASSERT, "(addr + size <= sourceSegmentSize)", (const char *)&queryFormat, "addr + size <= sourceSegmentSize") )
        __debugbreak();
    }
    else
    {
      v42 -= v57;
    }
    v31 = (char *)v65;
    v39 = &v49[v42];
    goto LABEL_52;
  }
  v6 = 245;
LABEL_62:
  v54 = "(0)";
  v53 = "0";
LABEL_63:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", v6, ASSERT_TYPE_ASSERT, v54, (const char *)&queryFormat, v53) )
    __debugbreak();
  return 0;
}

