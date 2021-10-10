/*
==============
des_setup
==============
*/
__int64 des_setup(const unsigned __int8 *key, int keylen, int num_rounds, Symmetric_key *skey)
{
  if ( (num_rounds & 0xFFFFFFEF) != 0 )
    return 4i64;
  if ( keylen != 8 )
    return 3i64;
  deskey(key, 0, skey->des.ek);
  deskey(key, 1, skey->des.dk);
  return 0i64;
}

/*
==============
des_ecb_encrypt
==============
*/
__int64 des_ecb_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, Symmetric_key *skey)
{
  unsigned int block; 
  unsigned int v6; 

  block = _byteswap_ulong(*(_DWORD *)pt);
  v6 = _byteswap_ulong(*((_DWORD *)pt + 1));
  desfunc(&block, skey->des.ek);
  *(_DWORD *)ct = _byteswap_ulong(block);
  *((_DWORD *)ct + 1) = _byteswap_ulong(v6);
  return 0i64;
}

/*
==============
des_ecb_decrypt
==============
*/
__int64 des_ecb_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, Symmetric_key *skey)
{
  unsigned int block; 
  unsigned int v6; 

  block = _byteswap_ulong(*(_DWORD *)ct);
  v6 = _byteswap_ulong(*((_DWORD *)ct + 1));
  desfunc(&block, skey->des.dk);
  *(_DWORD *)pt = _byteswap_ulong(block);
  *((_DWORD *)pt + 1) = _byteswap_ulong(v6);
  return 0i64;
}

/*
==============
des_test
==============
*/
__int64 des_test()
{
  return 2i64;
}

/*
==============
des_done
==============
*/
void des_done(Symmetric_key *skey)
{
  ;
}

/*
==============
des_keysize
==============
*/
__int64 des_keysize(int *keysize)
{
  if ( *keysize < 8 )
    return 3i64;
  *keysize = 8;
  return 0i64;
}

/*
==============
des3_setup
==============
*/
__int64 des3_setup(const unsigned __int8 *key, int keylen, int num_rounds, Symmetric_key *skey)
{
  const unsigned __int8 *v6; 
  const unsigned __int8 *v8; 

  v6 = key;
  if ( (num_rounds & 0xFFFFFFEF) != 0 )
    return 4i64;
  if ( ((keylen - 16) & 0xFFFFFFF7) != 0 )
    return 3i64;
  deskey(key, 0, skey->des.ek);
  deskey(v6 + 8, 1, skey->des.dk);
  v8 = v6;
  if ( keylen == 24 )
    v8 = v6 + 16;
  deskey(v8, 0, skey->des3.ek[2]);
  deskey(v6, 1, skey->des3.dk[2]);
  deskey(v6 + 8, 0, skey->des3.dk[1]);
  if ( keylen == 24 )
    v6 += 16;
  deskey(v6, 1, skey->des3.dk[0]);
  return 0i64;
}

/*
==============
des3_ecb_encrypt
==============
*/
__int64 des3_ecb_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, Symmetric_key *skey)
{
  unsigned int block; 
  unsigned int v7; 

  block = _byteswap_ulong(*(_DWORD *)pt);
  v7 = _byteswap_ulong(*((_DWORD *)pt + 1));
  desfunc(&block, skey->des.ek);
  desfunc(&block, skey->des.dk);
  desfunc(&block, skey->des3.ek[2]);
  *(_DWORD *)ct = _byteswap_ulong(block);
  *((_DWORD *)ct + 1) = _byteswap_ulong(v7);
  return 0i64;
}

/*
==============
des3_ecb_decrypt
==============
*/
__int64 des3_ecb_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, Symmetric_key *skey)
{
  unsigned int block; 
  unsigned int v7; 

  block = _byteswap_ulong(*(_DWORD *)ct);
  v7 = _byteswap_ulong(*((_DWORD *)ct + 1));
  desfunc(&block, skey->des3.dk[0]);
  desfunc(&block, skey->des3.dk[1]);
  desfunc(&block, skey->des3.dk[2]);
  *(_DWORD *)pt = _byteswap_ulong(block);
  *((_DWORD *)pt + 1) = _byteswap_ulong(v7);
  return 0i64;
}

/*
==============
des3_test
==============
*/
__int64 des3_test()
{
  return 2i64;
}

/*
==============
des3_done
==============
*/
void des3_done(Symmetric_key *skey)
{
  ;
}

/*
==============
des3_keysize
==============
*/
__int64 des3_keysize(int *keysize)
{
  if ( *keysize < 24 )
    return 3i64;
  *keysize = 24;
  return 0i64;
}

/*
==============
desfunc
==============
*/
void desfunc(unsigned int *block, const unsigned int *keys)
{
  unsigned int v2; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 

  v2 = block[1];
  v5 = 2i64;
  v6 = des_ip[0][(unsigned __int8)*block] ^ des_ip[4][(unsigned __int8)v2] ^ des_ip[1][(unsigned __int8)BYTE1(*block)] ^ des_ip[2][(unsigned __int8)BYTE2(*block)] ^ des_ip[5][BYTE1(v2)] ^ des_ip[3][(unsigned __int64)*block >> 24] ^ des_ip[6][BYTE2(v2)] ^ des_ip[7][(unsigned __int64)v2 >> 24];
  v7 = HIDWORD(v6);
  do
  {
    v8 = v6 ^ keys[1];
    v9 = *keys ^ __ROR4__(v6, 4);
    v10 = SP7[v9 & 0x3F] ^ SP8[v8 & 0x3F] ^ SP5[(v9 >> 8) & 0x3F] ^ SP3[HIWORD(v9) & 0x3F] ^ SP1[HIBYTE(v9) & 0x3F] ^ SP6[(v8 >> 8) & 0x3F] ^ SP4[HIWORD(v8) & 0x3F] ^ SP2[HIBYTE(v8) & 0x3F] ^ v7;
    v11 = v10 ^ keys[3];
    v12 = keys[2] ^ __ROR4__(v10, 4);
    v13 = SP7[v12 & 0x3F] ^ SP8[v11 & 0x3F] ^ SP5[(v12 >> 8) & 0x3F] ^ SP3[HIWORD(v12) & 0x3F] ^ SP1[HIBYTE(v12) & 0x3F] ^ SP6[(v11 >> 8) & 0x3F] ^ SP4[HIWORD(v11) & 0x3F] ^ SP2[HIBYTE(v11) & 0x3F] ^ v6;
    v14 = keys[4] ^ __ROR4__(v13, 4);
    v15 = SP7[v14 & 0x3F] ^ SP8[(v13 ^ keys[5]) & 0x3F] ^ SP5[(v14 >> 8) & 0x3F] ^ SP3[HIWORD(v14) & 0x3F] ^ SP1[HIBYTE(v14) & 0x3F] ^ SP6[((v13 ^ keys[5]) >> 8) & 0x3F] ^ SP4[((v13 ^ keys[5]) >> 16) & 0x3F] ^ SP2[((v13 ^ keys[5]) >> 24) & 0x3F] ^ v10;
    v16 = keys[6] ^ __ROR4__(v15, 4);
    v17 = SP8[(v15 ^ keys[7]) & 0x3F] ^ SP6[((v15 ^ keys[7]) >> 8) & 0x3F] ^ SP4[((v15 ^ keys[7]) >> 16) & 0x3F] ^ SP2[((v15 ^ keys[7]) >> 24) & 0x3F] ^ SP7[v16 & 0x3F] ^ SP5[((unsigned int)v16 >> 8) & 0x3F] ^ SP3[(v16 >> 16) & 0x3F] ^ SP1[((unsigned __int64)(unsigned int)v16 >> 24) & 0x3F] ^ v13;
    v18 = keys[8] ^ __ROR4__(v17, 4);
    v19 = SP8[(v17 ^ keys[9]) & 0x3F] ^ SP6[((v17 ^ keys[9]) >> 8) & 0x3F] ^ SP4[((v17 ^ keys[9]) >> 16) & 0x3F] ^ SP2[((v17 ^ keys[9]) >> 24) & 0x3F] ^ SP7[v18 & 0x3F] ^ SP5[((unsigned int)v18 >> 8) & 0x3F] ^ SP3[(v18 >> 16) & 0x3F] ^ SP1[((unsigned __int64)(unsigned int)v18 >> 24) & 0x3F] ^ v15;
    v20 = keys[10] ^ __ROR4__(v19, 4);
    v21 = SP8[(v19 ^ keys[11]) & 0x3F] ^ SP6[((v19 ^ keys[11]) >> 8) & 0x3F] ^ SP4[((v19 ^ keys[11]) >> 16) & 0x3F] ^ SP2[((v19 ^ keys[11]) >> 24) & 0x3F] ^ SP7[v20 & 0x3F] ^ SP5[((unsigned int)v20 >> 8) & 0x3F] ^ SP3[(v20 >> 16) & 0x3F] ^ SP1[((unsigned __int64)(unsigned int)v20 >> 24) & 0x3F] ^ v17;
    v22 = keys[12] ^ __ROR4__(v21, 4);
    LODWORD(v7) = SP8[(v21 ^ keys[13]) & 0x3F] ^ SP6[((v21 ^ keys[13]) >> 8) & 0x3F] ^ SP4[((v21 ^ keys[13]) >> 16) & 0x3F] ^ SP2[((v21 ^ keys[13]) >> 24) & 0x3F] ^ SP7[v22 & 0x3F] ^ SP5[((unsigned int)v22 >> 8) & 0x3F] ^ SP3[(v22 >> 16) & 0x3F] ^ SP1[((unsigned __int64)(unsigned int)v22 >> 24) & 0x3F] ^ v19;
    v23 = keys[14] ^ __ROR4__(v7, 4);
    keys += 16;
    LODWORD(v6) = SP8[((unsigned __int8)v7 ^ *((_BYTE *)keys - 4)) & 0x3F] ^ SP6[(((unsigned int)v7 ^ *(keys - 1)) >> 8) & 0x3F] ^ SP4[(((unsigned int)v7 ^ *(keys - 1)) >> 16) & 0x3F] ^ SP2[(((unsigned int)v7 ^ *(keys - 1)) >> 24) & 0x3F] ^ SP7[v23 & 0x3F] ^ SP5[((unsigned int)v23 >> 8) & 0x3F] ^ SP3[(v23 >> 16) & 0x3F] ^ SP1[((unsigned __int64)(unsigned int)v23 >> 24) & 0x3F] ^ v21;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)block = des_fp[4][(unsigned __int8)v6] ^ des_fp[0][(unsigned __int8)v7] ^ des_fp[1][BYTE1(v7)] ^ des_fp[2][BYTE2(v7)] ^ des_fp[5][BYTE1(v6)] ^ des_fp[3][(unsigned __int64)(unsigned int)v7 >> 24] ^ des_fp[6][BYTE2(v6)] ^ des_fp[7][(unsigned __int64)(unsigned int)v6 >> 24];
}

/*
==============
deskey
==============
*/
void deskey(const unsigned __int8 *key, __int16 edf, unsigned int *keyout)
{
  __int16 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  int v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  int v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  int v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned int v27; 
  int v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned __int64 v32; 
  unsigned int v33; 
  int v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  int v37; 
  unsigned __int64 v38; 
  unsigned int v39; 
  int v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  int v43; 
  unsigned __int64 v44; 
  unsigned int v45; 
  unsigned int v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  char v62; 
  char v63; 
  char v64; 
  char v65; 
  char v66; 
  char v67; 
  char v68; 
  char v69; 
  char v70; 
  __int64 v71; 
  char v72; 
  __int64 v73; 
  char v74; 
  __int64 v75; 
  char v76; 
  __int64 v77; 
  char v78; 
  __int64 v79; 
  char v80; 
  __int64 v81; 
  char v82; 
  __int64 v83; 
  char v84; 
  __int64 v85; 
  char v86; 
  __int64 v87; 
  char v88; 
  __int64 v89; 
  char v90; 
  __int64 v91; 
  char v92; 
  __int64 v93; 
  char v94; 
  __int64 v95; 
  char v96; 
  __int64 v97; 
  char v98; 
  __int64 v99; 
  char v100; 
  __int64 v101; 
  char v102; 
  __int64 v103; 
  char v104; 
  __int64 v105; 
  char v106; 
  __int64 v107; 
  char v108; 
  __int64 v109; 
  char v110; 
  __int64 v111; 
  char v112; 
  __int64 v113; 
  char v114; 
  __int64 v115; 
  char v116; 
  __int64 v117; 
  char v118; 
  __int64 v119; 
  char v120; 
  __int64 v121; 
  char v122; 
  __int64 v123; 
  char v124; 
  __int64 v125; 
  char v126; 
  __int64 v127; 
  char v128; 
  __int64 v129; 
  char v130; 
  __int64 v131; 
  char v132; 
  __int64 v133; 
  char v134; 
  __int64 v135; 
  char v136; 
  __int64 v137; 
  char v138; 
  __int64 v139; 
  char v140; 
  __int64 v141; 
  char v142; 
  __int64 v143; 
  char v144; 
  __int64 v145; 
  char v146; 
  __int64 v147; 
  char v148; 
  __int64 v149; 
  char v150; 
  __int64 v151; 
  char v152; 
  __int64 v153; 
  char v154; 
  __int64 v155; 
  char v156; 
  __int64 v157; 
  char v158; 
  __int64 v159; 
  char v160; 
  __int64 v161; 
  int v162; 
  __int64 v163; 
  __int64 v164; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  __int64 v168; 
  __int64 v169; 
  __int64 v170; 
  __int64 v171; 
  __int64 v172; 
  __int64 v173; 
  int *v174; 
  _BYTE *v175; 
  __int64 v176; 
  int v177; 
  unsigned int v178; 
  __m256i v179; 
  __m256i v180; 
  __m256i v181; 
  unsigned int v183; 
  __int64 v184; 
  int v186[32]; 
  _BYTE v187[96]; 
  _BYTE v188[64]; 
  char v189[56]; 

  v3 = edf;
  v5 = 0i64;
  v6 = 4i64;
  do
  {
    v7 = bytebit[pc1[v5] & 7];
    v8 = pc1[v5 + 1];
    v188[v5 + 32] = (v7 & key[(unsigned __int64)pc1[v5] >> 3]) == v7;
    v9 = bytebit[v8 & 7];
    v10 = v9 & key[v8 >> 3];
    v11 = pc1[v5 + 2];
    v188[v5 + 33] = v10 == v9;
    v12 = bytebit[v11 & 7];
    v13 = v12 & key[v11 >> 3];
    v14 = pc1[v5 + 3];
    v188[v5 + 34] = v13 == v12;
    v15 = bytebit[v14 & 7];
    v16 = key[v14 >> 3];
    v17 = pc1[v5 + 4];
    v188[v5 + 35] = (v15 & v16) == v15;
    v18 = bytebit[v17 & 7];
    v19 = key[v17 >> 3];
    v20 = pc1[v5 + 5];
    v188[v5 + 36] = (v18 & v19) == v18;
    v21 = bytebit[v20 & 7];
    v22 = key[v20 >> 3];
    v23 = pc1[v5 + 6];
    v188[v5 + 37] = (v21 & v22) == v21;
    v24 = bytebit[v23 & 7];
    v25 = key[v23 >> 3];
    v26 = pc1[v5 + 7];
    v188[v5 + 38] = (v24 & v25) == v24;
    v27 = bytebit[v26 & 7];
    v28 = key[v26 >> 3];
    v29 = pc1[v5 + 8];
    v188[v5 + 39] = (v27 & v28) == v27;
    v5 += 14i64;
    v30 = bytebit[v29 & 7];
    v31 = v30 & key[v29 >> 3];
    v32 = *((unsigned __int8 *)&bigbyte[22] + v5 + 3);
    v188[v5 + 26] = v31 == v30;
    v33 = bytebit[v32 & 7];
    v34 = key[v32 >> 3];
    v35 = *((unsigned __int8 *)&bigbyte[23] + v5);
    v188[v5 + 27] = (v33 & v34) == v33;
    v36 = bytebit[v35 & 7];
    v37 = key[v35 >> 3];
    v38 = *((unsigned __int8 *)&bigbyte[23] + v5 + 1);
    v188[v5 + 28] = (v36 & v37) == v36;
    v39 = bytebit[v38 & 7];
    v40 = key[v38 >> 3];
    v41 = *((unsigned __int8 *)&bigbyte[23] + v5 + 2);
    v188[v5 + 29] = (v39 & v40) == v39;
    v42 = bytebit[v41 & 7];
    v43 = key[v41 >> 3];
    v44 = *((unsigned __int8 *)&bigbyte[23] + v5 + 3);
    v188[v5 + 30] = (v42 & v43) == v42;
    v45 = bytebit[v44 & 7];
    v188[v5 + 31] = (v45 & key[v44 >> 3]) == v45;
    --v6;
  }
  while ( v6 );
  v46 = 0;
  v184 = 0i64;
  v183 = 0;
  v47 = 0i64;
  do
  {
    if ( v3 == 1 )
      v48 = 2 * (15 - v46);
    else
      v48 = 2 * v46;
    v49 = (unsigned int)(v48 + 1);
    v50 = v48;
    v51 = totrot[v47];
    v52 = v49;
    v186[v49] = 0;
    v186[v50] = 0;
    v53 = (unsigned int)(v51 + 1);
    v54 = (unsigned int)(v51 + 2);
    v55 = (unsigned int)(v51 + 3);
    v56 = (unsigned int)(v51 + 4);
    v57 = (unsigned int)(v51 + 5);
    v58 = (unsigned int)(v51 + 6);
    v59 = (unsigned int)(v51 + 7);
    v60 = (unsigned int)(v51 + 8);
    v61 = (unsigned int)(v51 + 9);
    if ( (unsigned int)v51 >= 0x1C )
      v189[0] = v188[(unsigned int)(v51 - 28) + 32];
    else
      v189[0] = v188[v51 + 32];
    if ( (unsigned int)v53 >= 0x1C )
      v62 = v188[(unsigned int)(v51 - 27) + 32];
    else
      v62 = v188[v53 + 32];
    v189[1] = v62;
    if ( (unsigned int)v54 >= 0x1C )
      v63 = v188[(unsigned int)(v51 - 26) + 32];
    else
      v63 = v188[v54 + 32];
    v189[2] = v63;
    if ( (unsigned int)v55 >= 0x1C )
      v64 = v188[(unsigned int)(v51 - 25) + 32];
    else
      v64 = v188[v55 + 32];
    v189[3] = v64;
    if ( (unsigned int)v56 >= 0x1C )
      v65 = v188[(unsigned int)(v51 - 24) + 32];
    else
      v65 = v188[v56 + 32];
    v189[4] = v65;
    if ( (unsigned int)v57 >= 0x1C )
      v66 = v188[(unsigned int)(v51 - 23) + 32];
    else
      v66 = v188[v57 + 32];
    v189[5] = v66;
    if ( (unsigned int)v58 >= 0x1C )
      v67 = v188[(unsigned int)(v51 - 22) + 32];
    else
      v67 = v188[v58 + 32];
    v189[6] = v67;
    if ( (unsigned int)v59 >= 0x1C )
      v68 = v188[(unsigned int)(v51 - 21) + 32];
    else
      v68 = v188[v59 + 32];
    v189[7] = v68;
    if ( (unsigned int)v60 >= 0x1C )
      v69 = v188[(unsigned int)(v51 - 20) + 32];
    else
      v69 = v188[v60 + 32];
    v189[8] = v69;
    if ( (unsigned int)v61 >= 0x1C )
      v70 = v188[(unsigned int)(v51 - 19) + 32];
    else
      v70 = v188[v61 + 32];
    v71 = (unsigned int)(v51 + 10);
    v189[9] = v70;
    if ( (unsigned int)v71 >= 0x1C )
      v71 = (unsigned int)(v51 - 18);
    v72 = v188[v71 + 32];
    v73 = (unsigned int)(v51 + 11);
    v189[10] = v72;
    if ( (unsigned int)v73 >= 0x1C )
      v73 = (unsigned int)(v51 - 17);
    v74 = v188[v73 + 32];
    v75 = (unsigned int)(v51 + 12);
    v189[11] = v74;
    if ( (unsigned int)v75 >= 0x1C )
      v75 = (unsigned int)(v51 - 16);
    v76 = v188[v75 + 32];
    v77 = (unsigned int)(v51 + 13);
    v189[12] = v76;
    if ( (unsigned int)v77 >= 0x1C )
      v77 = (unsigned int)(v51 - 15);
    v78 = v188[v77 + 32];
    v79 = (unsigned int)(v51 + 14);
    v189[13] = v78;
    if ( (unsigned int)v79 >= 0x1C )
      v79 = (unsigned int)(v51 - 14);
    v80 = v188[v79 + 32];
    v81 = (unsigned int)(v51 + 15);
    v189[14] = v80;
    if ( (unsigned int)v81 >= 0x1C )
      v81 = (unsigned int)(v51 - 13);
    v82 = v188[v81 + 32];
    v83 = (unsigned int)(v51 + 16);
    v189[15] = v82;
    if ( (unsigned int)v83 >= 0x1C )
      v83 = (unsigned int)(v51 - 12);
    v84 = v188[v83 + 32];
    v85 = (unsigned int)(v51 + 17);
    v189[16] = v84;
    if ( (unsigned int)v85 >= 0x1C )
      v85 = (unsigned int)(v51 - 11);
    v86 = v188[v85 + 32];
    v87 = (unsigned int)(v51 + 18);
    v189[17] = v86;
    if ( (unsigned int)v87 >= 0x1C )
      v87 = (unsigned int)(v51 - 10);
    v88 = v188[v87 + 32];
    v89 = (unsigned int)(v51 + 19);
    v189[18] = v88;
    if ( (unsigned int)v89 >= 0x1C )
      v89 = (unsigned int)(v51 - 9);
    v90 = v188[v89 + 32];
    v91 = (unsigned int)(v51 + 20);
    v189[19] = v90;
    if ( (unsigned int)v91 >= 0x1C )
      v91 = (unsigned int)(v51 - 8);
    v92 = v188[v91 + 32];
    v93 = (unsigned int)(v51 + 21);
    v189[20] = v92;
    if ( (unsigned int)v93 >= 0x1C )
      v93 = (unsigned int)(v51 - 7);
    v94 = v188[v93 + 32];
    v95 = (unsigned int)(v51 + 22);
    v189[21] = v94;
    if ( (unsigned int)v95 >= 0x1C )
      v95 = (unsigned int)(v51 - 6);
    v96 = v188[v95 + 32];
    v97 = (unsigned int)(v51 + 23);
    v189[22] = v96;
    if ( (unsigned int)v97 >= 0x1C )
      v97 = (unsigned int)(v51 - 5);
    v98 = v188[v97 + 32];
    v99 = (unsigned int)(v51 + 24);
    v189[23] = v98;
    if ( (unsigned int)v99 >= 0x1C )
      v99 = (unsigned int)(v51 - 4);
    v100 = v188[v99 + 32];
    v101 = (unsigned int)(v51 + 25);
    v189[24] = v100;
    if ( (unsigned int)v101 >= 0x1C )
      v101 = (unsigned int)(v51 - 3);
    v102 = v188[v101 + 32];
    v103 = (unsigned int)(v51 + 26);
    v189[25] = v102;
    if ( (unsigned int)v103 >= 0x1C )
      v103 = (unsigned int)(v51 - 2);
    v104 = v188[v103 + 32];
    v105 = (unsigned int)(v51 + 27);
    v189[26] = v104;
    if ( (unsigned int)v105 >= 0x1C )
      v105 = (unsigned int)(v51 - 1);
    v106 = v188[v105 + 32];
    v107 = (unsigned int)(v51 + 28);
    v189[27] = v106;
    if ( (unsigned int)v107 >= 0x38 )
      v107 = (unsigned int)v51;
    v108 = v188[v107 + 32];
    v109 = (unsigned int)(v51 + 29);
    v189[28] = v108;
    if ( (unsigned int)v109 >= 0x38 )
      v109 = (unsigned int)(v51 + 1);
    v110 = v188[v109 + 32];
    v111 = (unsigned int)(v51 + 30);
    v189[29] = v110;
    if ( (unsigned int)v111 >= 0x38 )
      v111 = (unsigned int)(v51 + 2);
    v112 = v188[v111 + 32];
    v113 = (unsigned int)(v51 + 31);
    v189[30] = v112;
    if ( (unsigned int)v113 >= 0x38 )
      v113 = (unsigned int)(v51 + 3);
    v114 = v188[v113 + 32];
    v115 = (unsigned int)(v51 + 32);
    v189[31] = v114;
    if ( (unsigned int)v115 >= 0x38 )
      v115 = (unsigned int)(v51 + 4);
    v116 = v188[v115 + 32];
    v117 = (unsigned int)(v51 + 33);
    v189[32] = v116;
    if ( (unsigned int)v117 >= 0x38 )
      v117 = (unsigned int)(v51 + 5);
    v118 = v188[v117 + 32];
    v119 = (unsigned int)(v51 + 34);
    v189[33] = v118;
    if ( (unsigned int)v119 >= 0x38 )
      v119 = (unsigned int)(v51 + 6);
    v120 = v188[v119 + 32];
    v121 = (unsigned int)(v51 + 35);
    v189[34] = v120;
    if ( (unsigned int)v121 >= 0x38 )
      v121 = (unsigned int)(v51 + 7);
    v122 = v188[v121 + 32];
    v123 = (unsigned int)(v51 + 36);
    v189[35] = v122;
    if ( (unsigned int)v123 >= 0x38 )
      v123 = (unsigned int)(v51 + 8);
    v124 = v188[v123 + 32];
    v125 = (unsigned int)(v51 + 37);
    v189[36] = v124;
    if ( (unsigned int)v125 >= 0x38 )
      v125 = (unsigned int)(v51 + 9);
    v126 = v188[v125 + 32];
    v127 = (unsigned int)(v51 + 38);
    v189[37] = v126;
    if ( (unsigned int)v127 >= 0x38 )
      v127 = (unsigned int)(v51 + 10);
    v128 = v188[v127 + 32];
    v129 = (unsigned int)(v51 + 39);
    v189[38] = v128;
    if ( (unsigned int)v129 >= 0x38 )
      v129 = (unsigned int)(v51 + 11);
    v130 = v188[v129 + 32];
    v131 = (unsigned int)(v51 + 40);
    v189[39] = v130;
    if ( (unsigned int)v131 >= 0x38 )
      v131 = (unsigned int)(v51 + 12);
    v132 = v188[v131 + 32];
    v133 = (unsigned int)(v51 + 41);
    v189[40] = v132;
    if ( (unsigned int)v133 >= 0x38 )
      v133 = (unsigned int)(v51 + 13);
    v134 = v188[v133 + 32];
    v135 = (unsigned int)(v51 + 42);
    v189[41] = v134;
    if ( (unsigned int)v135 >= 0x38 )
      v135 = (unsigned int)(v51 + 14);
    v136 = v188[v135 + 32];
    v137 = (unsigned int)(v51 + 43);
    v189[42] = v136;
    if ( (unsigned int)v137 >= 0x38 )
      v137 = (unsigned int)(v51 + 15);
    v138 = v188[v137 + 32];
    v139 = (unsigned int)(v51 + 44);
    v189[43] = v138;
    if ( (unsigned int)v139 >= 0x38 )
      v139 = (unsigned int)(v51 + 16);
    v140 = v188[v139 + 32];
    v141 = (unsigned int)(v51 + 45);
    v189[44] = v140;
    if ( (unsigned int)v141 >= 0x38 )
      v141 = (unsigned int)(v51 + 17);
    v142 = v188[v141 + 32];
    v143 = (unsigned int)(v51 + 46);
    v189[45] = v142;
    if ( (unsigned int)v143 >= 0x38 )
      v143 = (unsigned int)(v51 + 18);
    v144 = v188[v143 + 32];
    v145 = (unsigned int)(v51 + 47);
    v189[46] = v144;
    if ( (unsigned int)v145 >= 0x38 )
      v145 = (unsigned int)(v51 + 19);
    v146 = v188[v145 + 32];
    v147 = (unsigned int)(v51 + 48);
    v189[47] = v146;
    if ( (unsigned int)v147 >= 0x38 )
      v147 = (unsigned int)(v51 + 20);
    v148 = v188[v147 + 32];
    v149 = (unsigned int)(v51 + 49);
    v189[48] = v148;
    if ( (unsigned int)v149 >= 0x38 )
      v149 = (unsigned int)(v51 + 21);
    v150 = v188[v149 + 32];
    v151 = (unsigned int)(v51 + 50);
    v189[49] = v150;
    if ( (unsigned int)v151 >= 0x38 )
      v151 = (unsigned int)(v51 + 22);
    v152 = v188[v151 + 32];
    v153 = (unsigned int)(v51 + 51);
    v189[50] = v152;
    if ( (unsigned int)v153 >= 0x38 )
      v153 = (unsigned int)(v51 + 23);
    v154 = v188[v153 + 32];
    v155 = (unsigned int)(v51 + 52);
    v189[51] = v154;
    if ( (unsigned int)v155 >= 0x38 )
      v155 = (unsigned int)(v51 + 24);
    v156 = v188[v155 + 32];
    v157 = (unsigned int)(v51 + 53);
    v189[52] = v156;
    if ( (unsigned int)v157 >= 0x38 )
      v157 = (unsigned int)(v51 + 25);
    v158 = v188[v157 + 32];
    v159 = (unsigned int)(v51 + 54);
    v189[53] = v158;
    if ( (unsigned int)v159 >= 0x38 )
      v159 = (unsigned int)(v51 + 26);
    v160 = v188[v159 + 32];
    v161 = (unsigned int)(v51 + 55);
    v189[54] = v160;
    if ( (unsigned int)v161 >= 0x38 )
      v161 = (unsigned int)(v51 + 27);
    v189[55] = v188[v161 + 32];
    v162 = 1;
    do
    {
      v163 = (unsigned int)(v162 - 1);
      if ( v189[pc2[v163]] )
        v186[v50] |= bigbyte[v163];
      if ( v189[pc2[v162 + 23]] )
        v186[v52] |= bigbyte[v163];
      if ( v189[pc2[v162]] )
        v186[v50] |= bigbyte[v162];
      if ( v189[pc2[v162 + 24]] )
        v186[v52] |= bigbyte[v162];
      v164 = (unsigned int)(v162 + 1);
      if ( v189[pc2[v164]] )
        v186[v50] |= bigbyte[v164];
      if ( v189[pc2[v162 + 25]] )
        v186[v52] |= bigbyte[v164];
      v165 = (unsigned int)(v162 + 2);
      if ( v189[pc2[v165]] )
        v186[v50] |= bigbyte[v165];
      if ( v189[pc2[v162 + 26]] )
        v186[v52] |= bigbyte[v165];
      v166 = (unsigned int)(v162 + 3);
      if ( v189[pc2[v166]] )
        v186[v50] |= bigbyte[v166];
      if ( v189[pc2[v162 + 27]] )
        v186[v52] |= bigbyte[v166];
      v167 = (unsigned int)(v162 + 4);
      if ( v189[pc2[v167]] )
        v186[v50] |= bigbyte[v167];
      if ( v189[pc2[v162 + 28]] )
        v186[v52] |= bigbyte[v167];
      v168 = (unsigned int)(v162 + 5);
      if ( v189[pc2[v168]] )
        v186[v50] |= bigbyte[v168];
      if ( v189[pc2[v162 + 29]] )
        v186[v52] |= bigbyte[v168];
      v169 = (unsigned int)(v162 + 6);
      if ( v189[pc2[v169]] )
        v186[v50] |= bigbyte[v169];
      if ( v189[pc2[v162 + 30]] )
        v186[v52] |= bigbyte[v169];
      v170 = (unsigned int)(v162 + 7);
      if ( v189[pc2[v170]] )
        v186[v50] |= bigbyte[v170];
      if ( v189[pc2[v162 + 31]] )
        v186[v52] |= bigbyte[v170];
      v171 = (unsigned int)(v162 + 8);
      if ( v189[pc2[v171]] )
        v186[v50] |= bigbyte[v171];
      if ( v189[pc2[v162 + 32]] )
        v186[v52] |= bigbyte[v171];
      v172 = (unsigned int)(v162 + 9);
      if ( v189[pc2[v172]] )
        v186[v50] |= bigbyte[v172];
      if ( v189[pc2[v162 + 33]] )
        v186[v52] |= bigbyte[v172];
      v173 = (unsigned int)(v162 + 10);
      if ( v189[pc2[v173]] )
        v186[v50] |= bigbyte[v173];
      if ( v189[pc2[v162 + 34]] )
        v186[v52] |= bigbyte[v173];
      v162 += 12;
    }
    while ( (unsigned int)(v162 - 1) < 0x18 );
    v46 = v183 + 1;
    v3 = edf;
    v47 = v184 + 1;
    v183 = v46;
    ++v184;
  }
  while ( v46 < 0x10 );
  v174 = v186;
  v175 = v187;
  v176 = 16i64;
  do
  {
    v177 = *v174;
    v175 += 8;
    v178 = v174[1];
    v174 += 2;
    *((_DWORD *)v175 - 2) = ((v178 & 0xFC0 | (v178 >> 4) & 0xFC000) >> 6) | ((v177 & 0xFC0000 | (16 * (v177 & 0xFC0))) << 6);
    *((_DWORD *)v175 - 1) = v178 & 0x3F | (v178 >> 4) & 0x3F00 | ((v177 & 0x3F000 | (16 * (v177 & 0x3F))) << 12);
    --v176;
  }
  while ( v176 );
  v179 = *(__m256i *)&v187[32];
  *(__m256i *)keyout = *(__m256i *)v187;
  v180 = *(__m256i *)&v187[64];
  *((__m256i *)keyout + 1) = v179;
  v181 = *(__m256i *)v188;
  *((__m256i *)keyout + 2) = v180;
  *((__m256i *)keyout + 3) = v181;
}

