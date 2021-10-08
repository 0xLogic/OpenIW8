/*
==============
rijndael_setup
==============
*/
int rijndael_setup(const unsigned __int8 *key, int keylen, int num_rounds, Symmetric_key *skey)
{
  if ( ((keylen - 16) & 0xFFFFFFE7) != 0 || keylen == 40 )
    return 3;
  if ( num_rounds && num_rounds != 2 * (keylen / 8) + 6 )
    return 4;
  skey->des3.dk[0][24] = 2 * (keylen / 8) + 6;
  if ( j_aesni_supported() )
    return rijndael_setup(key, keylen, num_rounds, skey);
  else
    return j_aes_ni_setup(key, keylen, num_rounds, skey);
}

/*
==============
rijndael_ecb_encrypt
==============
*/
int rijndael_ecb_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, Symmetric_key *skey)
{
  if ( j_aesni_supported() )
    return _rijndael_ecb_encrypt(pt, ct, skey);
  else
    return j_aes_ni_ecb_encrypt(pt, ct, skey);
}

/*
==============
rijndael_ecb_decrypt
==============
*/
int rijndael_ecb_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, Symmetric_key *skey)
{
  if ( j_aesni_supported() )
    return _rijndael_ecb_decrypt(ct, pt, skey);
  else
    return j_aes_ni_ecb_decrypt(ct, pt, skey);
}

/*
==============
rijndael_test
==============
*/
__int64 rijndael_test()
{
  return 2i64;
}

/*
==============
rijndael_done
==============
*/
void rijndael_done(Symmetric_key *skey)
{
  ;
}

/*
==============
rijndael_keysize
==============
*/
__int64 rijndael_keysize(int *keysize)
{
  int v1; 

  v1 = *keysize;
  if ( *keysize < 16 )
    return 3i64;
  if ( v1 >= 24 )
  {
    if ( v1 >= 32 )
      *keysize = 32;
    else
      *keysize = 24;
    return 0i64;
  }
  else
  {
    *keysize = 16;
    return 0i64;
  }
}

/*
==============
__rijndael_ecb_decrypt
==============
*/
__int64 _rijndael_ecb_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, Symmetric_key *skey)
{
  unsigned __int32 v3; 
  unsigned __int32 v4; 
  unsigned __int32 v5; 
  unsigned __int32 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  void **v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 result; 

  v3 = skey->des.dk[31] ^ _byteswap_ulong(*((_DWORD *)ct + 3));
  v4 = skey->des.dk[30] ^ _byteswap_ulong(*((_DWORD *)ct + 2));
  v5 = skey->des.dk[29] ^ _byteswap_ulong(*((_DWORD *)ct + 1));
  v6 = skey->des.dk[28] ^ _byteswap_ulong(*(_DWORD *)ct);
  v7 = skey->des3.ek[2][0] ^ TD3[(unsigned __int8)v5] ^ TD0[(unsigned __int64)v6 >> 24] ^ TD2[BYTE1(v4)] ^ TD1[BYTE2(v3)];
  v8 = skey->des3.ek[2][1] ^ TD3[(unsigned __int8)v4] ^ TD1[BYTE2(v6)] ^ TD0[(unsigned __int64)v5 >> 24] ^ TD2[BYTE1(v3)];
  v9 = skey->des3.ek[2][2] ^ TD3[(unsigned __int8)v3] ^ TD2[BYTE1(v6)] ^ TD1[BYTE2(v5)] ^ TD0[(unsigned __int64)v4 >> 24];
  v10 = skey->des3.ek[2][3] ^ TD3[(unsigned __int8)v6] ^ TD2[BYTE1(v5)] ^ TD1[BYTE2(v4)] ^ TD0[(unsigned __int64)v3 >> 24];
  v11 = &skey->data + 34;
  v12 = (skey->rijndael.Nr >> 1) - 1;
  if ( skey->rijndael.Nr >> 1 != 1 )
  {
    do
    {
      v13 = *(_DWORD *)v11 ^ TD3[(unsigned __int8)v8] ^ TD0[(unsigned __int64)v7 >> 24] ^ TD2[BYTE1(v9)] ^ TD1[BYTE2(v10)];
      v14 = *((_DWORD *)v11 + 1) ^ TD3[(unsigned __int8)v9] ^ TD1[BYTE2(v7)] ^ TD0[(unsigned __int64)v8 >> 24] ^ TD2[BYTE1(v10)];
      v15 = *((_DWORD *)v11 + 2) ^ TD3[(unsigned __int8)v10] ^ TD2[BYTE1(v7)] ^ TD1[BYTE2(v8)] ^ TD0[(unsigned __int64)v9 >> 24];
      v16 = *((_DWORD *)v11 + 3) ^ TD3[(unsigned __int8)v7] ^ TD2[BYTE1(v8)] ^ TD1[BYTE2(v9)] ^ TD0[(unsigned __int64)v10 >> 24];
      v7 = *((_DWORD *)v11 + 4) ^ TD3[(unsigned __int8)v14] ^ TD0[(unsigned __int64)v13 >> 24] ^ TD2[BYTE1(v15)] ^ TD1[BYTE2(v16)];
      v8 = *((_DWORD *)v11 + 5) ^ TD3[(unsigned __int8)v15] ^ TD1[BYTE2(v13)] ^ TD0[(unsigned __int64)v14 >> 24] ^ TD2[BYTE1(v16)];
      v9 = *((_DWORD *)v11 + 6) ^ TD3[(unsigned __int8)v16] ^ TD2[BYTE1(v13)] ^ TD1[BYTE2(v14)] ^ TD0[(unsigned __int64)v15 >> 24];
      v10 = *((_DWORD *)v11 + 7) ^ TD3[(unsigned __int8)v13] ^ TD2[BYTE1(v14)] ^ TD1[BYTE2(v15)] ^ TD0[(unsigned __int64)v16 >> 24];
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  *(_DWORD *)pt = _byteswap_ulong(*(_DWORD *)v11 ^ LOBYTE(Td4[(unsigned __int8)v8]) ^ Td4[(unsigned __int64)v7 >> 24] & 0xFF000000 ^ Td4[BYTE1(v9)] & 0xFF00 ^ Td4[BYTE2(v10)] & 0xFF0000);
  *((_DWORD *)pt + 1) = _byteswap_ulong(*((_DWORD *)v11 + 1) ^ LOBYTE(Td4[(unsigned __int8)v9]) ^ Td4[(unsigned __int64)v8 >> 24] & 0xFF000000 ^ Td4[BYTE1(v10)] & 0xFF00 ^ Td4[BYTE2(v7)] & 0xFF0000);
  *((_DWORD *)pt + 2) = _byteswap_ulong(*((_DWORD *)v11 + 2) ^ LOBYTE(Td4[(unsigned __int8)v10]) ^ Td4[BYTE1(v7)] & 0xFF00 ^ Td4[(unsigned __int64)v9 >> 24] & 0xFF000000 ^ Td4[BYTE2(v8)] & 0xFF0000);
  v17 = *((_DWORD *)v11 + 3) ^ LOBYTE(Td4[(unsigned __int8)v7]) ^ Td4[BYTE1(v8)] & 0xFF00 ^ Td4[(unsigned __int64)v10 >> 24] & 0xFF000000 ^ Td4[BYTE2(v9)] & 0xFF0000;
  result = 0i64;
  *((_DWORD *)pt + 3) = _byteswap_ulong(v17);
  return result;
}

/*
==============
__rijndael_ecb_encrypt
==============
*/
__int64 _rijndael_ecb_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, Symmetric_key *skey)
{
  unsigned __int32 v4; 
  unsigned __int32 v5; 
  void **v6; 
  unsigned __int32 v7; 
  unsigned __int32 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int i; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 

  v4 = skey->des.ek[1] ^ _byteswap_ulong(*((_DWORD *)pt + 1));
  v5 = skey->des.ek[0] ^ _byteswap_ulong(*(_DWORD *)pt);
  v6 = &skey->data + 4;
  v7 = skey->des.ek[2] ^ _byteswap_ulong(*((_DWORD *)pt + 2));
  v8 = skey->des.ek[3] ^ _byteswap_ulong(*((_DWORD *)pt + 3));
  v9 = skey->des.ek[4] ^ TE3[(unsigned __int8)v8] ^ TE0[(unsigned __int64)v5 >> 24] ^ TE1[BYTE2(v4)] ^ TE2[BYTE1(v7)];
  v10 = skey->des.ek[5] ^ TE3[(unsigned __int8)v5] ^ TE0[(unsigned __int64)v4 >> 24] ^ TE1[BYTE2(v7)] ^ TE2[BYTE1(v8)];
  v11 = skey->des.ek[6] ^ TE3[(unsigned __int8)v4] ^ TE2[BYTE1(v5)] ^ TE0[(unsigned __int64)v7 >> 24] ^ TE1[BYTE2(v8)];
  v12 = skey->des.ek[7] ^ TE3[(unsigned __int8)v7] ^ TE1[BYTE2(v5)] ^ TE2[BYTE1(v4)] ^ TE0[(unsigned __int64)v8 >> 24];
  for ( i = (skey->rijndael.Nr >> 1) - 1; i; --i )
  {
    v14 = *(_DWORD *)v6 ^ TE3[(unsigned __int8)v12] ^ TE0[(unsigned __int64)v9 >> 24] ^ TE1[BYTE2(v10)] ^ TE2[BYTE1(v11)];
    v15 = *((_DWORD *)v6 + 1) ^ TE3[(unsigned __int8)v9] ^ TE0[(unsigned __int64)v10 >> 24] ^ TE1[BYTE2(v11)] ^ TE2[BYTE1(v12)];
    v16 = *((_DWORD *)v6 + 2) ^ TE3[(unsigned __int8)v10] ^ TE2[BYTE1(v9)] ^ TE0[(unsigned __int64)v11 >> 24] ^ TE1[BYTE2(v12)];
    v17 = *((_DWORD *)v6 + 3) ^ TE3[(unsigned __int8)v11] ^ TE1[BYTE2(v9)] ^ TE2[BYTE1(v10)] ^ TE0[(unsigned __int64)v12 >> 24];
    v9 = *((_DWORD *)v6 + 4) ^ TE3[(unsigned __int8)(*((_BYTE *)v6 + 12) ^ LOBYTE(TE3[(unsigned __int8)v11]) ^ LOBYTE(TE1[BYTE2(v9)]) ^ LOBYTE(TE2[BYTE1(v10)]) ^ LOBYTE(TE0[(unsigned __int64)v12 >> 24]))] ^ TE0[(unsigned __int64)v14 >> 24] ^ TE1[BYTE2(v15)] ^ TE2[(unsigned __int8)((unsigned __int16)(*((_WORD *)v6 + 4) ^ LOWORD(TE3[(unsigned __int8)v10]) ^ LOWORD(TE2[BYTE1(v9)]) ^ LOWORD(TE0[(unsigned __int64)v11 >> 24]) ^ LOWORD(TE1[BYTE2(v12)])) >> 8)];
    v10 = *((_DWORD *)v6 + 5) ^ TE3[(unsigned __int8)v14] ^ TE0[(unsigned __int64)v15 >> 24] ^ TE1[BYTE2(v16)] ^ TE2[BYTE1(v17)];
    v11 = *((_DWORD *)v6 + 6) ^ TE3[(unsigned __int8)v15] ^ TE2[BYTE1(v14)] ^ TE0[(unsigned __int64)v16 >> 24] ^ TE1[BYTE2(v17)];
    v12 = *((_DWORD *)v6 + 7) ^ TE3[(unsigned __int8)v16] ^ TE1[BYTE2(v14)] ^ TE2[BYTE1(v15)] ^ TE0[(unsigned __int64)v17 >> 24];
    v6 += 4;
  }
  *(_DWORD *)ct = _byteswap_ulong(*(_DWORD *)v6 ^ Te4_0[(unsigned __int8)v12] ^ Te4_3[(unsigned __int64)v9 >> 24] ^ Te4_2[BYTE2(v10)] ^ Te4_1[BYTE1(v11)]);
  v18 = Te4_2[BYTE2(v12)];
  *((_DWORD *)ct + 1) = _byteswap_ulong(*((_DWORD *)v6 + 1) ^ Te4_0[(unsigned __int8)v9] ^ Te4_3[(unsigned __int64)v10 >> 24] ^ Te4_2[BYTE2(v11)] ^ Te4_1[BYTE1(v12)]);
  *((_DWORD *)ct + 2) = _byteswap_ulong(*((_DWORD *)v6 + 2) ^ Te4_0[(unsigned __int8)v10] ^ Te4_1[BYTE1(v9)] ^ Te4_3[(unsigned __int64)v11 >> 24] ^ v18);
  *((_DWORD *)ct + 3) = _byteswap_ulong(*((_DWORD *)v6 + 3) ^ Te4_0[(unsigned __int8)v11] ^ Te4_2[BYTE2(v9)] ^ Te4_1[BYTE1(v10)] ^ Te4_3[(unsigned __int64)v12 >> 24]);
  return 0i64;
}

/*
==============
_rijndael_setup
==============
*/
__int64 rijndael_setup(const unsigned __int8 *key, int keylen, int num_rounds, Symmetric_key *skey)
{
  __int64 v4; 
  unsigned __int32 v7; 
  unsigned __int32 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned __int32 v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  unsigned __int32 v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v92; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned int v107; 
  unsigned int v108; 
  unsigned int v109; 
  unsigned int v110; 
  unsigned int v111; 
  unsigned int v112; 
  unsigned int v113; 
  unsigned int v114; 
  unsigned int v115; 
  unsigned int v116; 
  unsigned int v117; 
  unsigned int v118; 
  unsigned int v119; 
  unsigned int v120; 
  unsigned int v121; 
  unsigned int v122; 
  unsigned int v123; 
  unsigned int v124; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  unsigned int v129; 
  unsigned int v130; 
  unsigned int v131; 
  unsigned int v132; 
  unsigned int v133; 
  unsigned int v134; 
  unsigned int v135; 
  unsigned int v136; 
  unsigned int v137; 
  unsigned int v138; 
  unsigned int v139; 
  int v140; 
  unsigned int v141; 
  unsigned int v142; 
  unsigned int v143; 
  unsigned int v144; 
  unsigned int v145; 
  unsigned int v146; 
  unsigned int *v147; 
  void **v148; 
  signed int v149; 
  unsigned int v150; 

  v4 = keylen;
  if ( ((keylen - 16) & 0xFFFFFFE7) != 0 || keylen == 40 )
    return 3i64;
  if ( num_rounds && num_rounds != 2 * (keylen / 8) + 6 )
    return 4i64;
  skey->des3.dk[0][24] = 2 * (keylen / 8) + 6;
  v7 = _byteswap_ulong(*(_DWORD *)key);
  skey->des.ek[0] = v7;
  skey->des.ek[1] = _byteswap_ulong(*((_DWORD *)key + 1));
  skey->des.ek[2] = _byteswap_ulong(*((_DWORD *)key + 2));
  v8 = _byteswap_ulong(*((_DWORD *)key + 3));
  skey->des.ek[3] = v8;
  switch ( keylen )
  {
    case 16:
      v9 = v7 ^ Te4_1[(unsigned __int8)v8] ^ Te4_2[BYTE1(v8)] ^ Te4_3[BYTE2(v8)] ^ Te4_0[(unsigned __int64)v8 >> 24] ^ 0x1000000;
      skey->des.ek[4] = v9;
      v10 = skey->des.ek[1] ^ v9;
      skey->des.ek[5] = v10;
      v11 = skey->des.ek[2] ^ v10;
      skey->des.ek[6] = v11;
      v12 = v8 ^ v11;
      skey->des.ek[7] = v12;
      v13 = v9 ^ Te4_1[(unsigned __int8)v12] ^ Te4_2[BYTE1(v12)] ^ Te4_3[BYTE2(v12)] ^ Te4_0[(unsigned __int64)v12 >> 24] ^ 0x2000000;
      skey->des.ek[8] = v13;
      v14 = v13 ^ skey->des.ek[5];
      skey->des.ek[9] = v14;
      v15 = v14 ^ skey->des.ek[6];
      skey->des.ek[10] = v15;
      v16 = skey->des.ek[7] ^ v15;
      skey->des.ek[11] = v16;
      v17 = skey->des.ek[8] ^ Te4_1[(unsigned __int8)v16] ^ Te4_2[BYTE1(v16)] ^ Te4_3[BYTE2(v16)] ^ Te4_0[(unsigned __int64)v16 >> 24] ^ 0x4000000;
      skey->des.ek[12] = v17;
      v18 = v17 ^ skey->des.ek[9];
      skey->des.ek[13] = v18;
      v19 = v18 ^ skey->des.ek[10];
      skey->des.ek[14] = v19;
      v20 = v19 ^ skey->des.ek[11];
      skey->des.ek[15] = v20;
      v21 = skey->des.ek[12] ^ Te4_1[(unsigned __int8)v20] ^ Te4_2[BYTE1(v20)] ^ Te4_3[BYTE2(v20)] ^ Te4_0[(unsigned __int64)v20 >> 24] ^ 0x8000000;
      skey->des.ek[16] = v21;
      v22 = v21 ^ skey->des.ek[13];
      skey->des.ek[17] = v22;
      v23 = skey->des.ek[14] ^ v22;
      skey->des.ek[18] = v23;
      v24 = v23 ^ skey->des.ek[15];
      skey->des.ek[19] = v24;
      v25 = skey->des.ek[16] ^ Te4_1[(unsigned __int8)v24] ^ Te4_2[BYTE1(v24)] ^ Te4_3[BYTE2(v24)] ^ Te4_0[(unsigned __int64)v24 >> 24] ^ 0x10000000;
      skey->des.ek[20] = v25;
      v26 = skey->des.ek[17] ^ v25;
      skey->des.ek[21] = v26;
      v27 = skey->des.ek[18] ^ v26;
      skey->des.ek[22] = v27;
      v28 = v27 ^ skey->des.ek[19];
      skey->des.ek[23] = v28;
      v29 = skey->des.ek[20] ^ Te4_1[(unsigned __int8)v28] ^ Te4_2[BYTE1(v28)] ^ Te4_3[BYTE2(v28)] ^ Te4_0[(unsigned __int64)v28 >> 24] ^ 0x20000000;
      skey->des.ek[24] = v29;
      v30 = skey->des.ek[21] ^ v29;
      skey->des.ek[25] = v30;
      v31 = skey->des.ek[22] ^ v30;
      skey->des.ek[26] = v31;
      v32 = v31 ^ skey->des.ek[23];
      skey->des.ek[27] = v32;
      v33 = skey->des.ek[24] ^ Te4_1[(unsigned __int8)v32] ^ Te4_2[BYTE1(v32)] ^ Te4_3[BYTE2(v32)] ^ Te4_0[(unsigned __int64)v32 >> 24] ^ 0x40000000;
      skey->des.ek[28] = v33;
      v34 = skey->des.ek[25] ^ v33;
      skey->des.ek[29] = v34;
      v35 = v34 ^ skey->des.ek[26];
      skey->des.ek[30] = v35;
      v36 = v35 ^ skey->des.ek[27];
      skey->des.ek[31] = v36;
      v37 = skey->des.ek[28] ^ Te4_1[(unsigned __int8)v36] ^ Te4_2[BYTE1(v36)] ^ Te4_3[BYTE2(v36)] ^ Te4_0[(unsigned __int64)v36 >> 24] ^ 0x80000000;
      skey->des.dk[0] = v37;
      v38 = skey->des.ek[29] ^ v37;
      skey->des.dk[1] = v38;
      v39 = v38 ^ skey->des.ek[30];
      skey->des.dk[2] = v39;
      v40 = v39 ^ skey->des.ek[31];
      skey->des.dk[3] = v40;
      v41 = skey->des.dk[0] ^ Te4_1[(unsigned __int8)v40] ^ Te4_2[BYTE1(v40)] ^ Te4_3[BYTE2(v40)] ^ Te4_0[(unsigned __int64)v40 >> 24] ^ 0x1B000000;
      skey->des.dk[4] = v41;
      v42 = skey->des.dk[1] ^ v41;
      skey->des.dk[5] = v42;
      v43 = v42 ^ skey->des.dk[2];
      skey->des.dk[6] = v43;
      v44 = v43 ^ skey->des.dk[3];
      skey->des.dk[7] = v44;
      v45 = skey->des.dk[4] ^ Te4_1[(unsigned __int8)v44] ^ Te4_2[BYTE1(v44)] ^ Te4_3[BYTE2(v44)] ^ Te4_0[(unsigned __int64)v44 >> 24] ^ 0x36000000;
      skey->des.dk[8] = v45;
      v46 = skey->des.dk[5] ^ v45;
      skey->des.dk[9] = v46;
      v47 = v46 ^ skey->des.dk[6];
      skey->des.dk[10] = v47;
      skey->des.dk[11] = v47 ^ skey->des.dk[7];
      break;
    case 24:
      skey->des.ek[4] = _byteswap_ulong(*((_DWORD *)key + 4));
      v48 = _byteswap_ulong(*((_DWORD *)key + 5));
      skey->des.ek[5] = v48;
      v49 = Te4_3[BYTE2(v48)] ^ Te4_0[(unsigned __int64)v48 >> 24];
      v50 = BYTE1(v48);
      v51 = (unsigned __int8)v48;
      v52 = skey->des.ek[5];
      v53 = Te4_1[v51] ^ Te4_2[v50] ^ v49;
      LODWORD(v50) = skey->des.ek[3];
      v54 = v7 ^ v53 ^ 0x1000000;
      skey->des.ek[6] = v54;
      LODWORD(v51) = skey->des.ek[1] ^ v54;
      skey->des.ek[7] = v51;
      LODWORD(v51) = skey->des.ek[2] ^ v51;
      LODWORD(v50) = v51 ^ v50;
      skey->des.ek[8] = v51;
      skey->des.ek[9] = v50;
      LODWORD(v50) = skey->des.ek[4] ^ v50;
      v55 = v50 ^ v52;
      skey->des.ek[10] = v50;
      skey->des.ek[11] = v55;
      v56 = v54 ^ Te4_1[(unsigned __int8)v55] ^ Te4_2[BYTE1(v55)] ^ Te4_3[BYTE2(v55)] ^ Te4_0[(unsigned __int64)v55 >> 24] ^ 0x2000000;
      skey->des.ek[12] = v56;
      v57 = skey->des.ek[7] ^ v56;
      skey->des.ek[13] = v57;
      LODWORD(v51) = v57 ^ skey->des.ek[8];
      skey->des.ek[14] = v51;
      LODWORD(v50) = v51 ^ skey->des.ek[9];
      skey->des.ek[15] = v50;
      LODWORD(v50) = skey->des.ek[10] ^ v50;
      v58 = v50 ^ skey->des.ek[11];
      skey->des.ek[16] = v50;
      skey->des.ek[17] = v58;
      v59 = skey->des.ek[12] ^ Te4_1[(unsigned __int8)v58] ^ Te4_2[BYTE1(v58)] ^ Te4_3[BYTE2(v58)] ^ Te4_0[(unsigned __int64)v58 >> 24] ^ 0x4000000;
      skey->des.ek[18] = v59;
      LODWORD(v51) = v59 ^ skey->des.ek[13];
      skey->des.ek[19] = v51;
      LODWORD(v51) = skey->des.ek[14] ^ v51;
      skey->des.ek[20] = v51;
      LODWORD(v50) = v51 ^ skey->des.ek[15];
      skey->des.ek[21] = v50;
      LODWORD(v50) = skey->des.ek[16] ^ v50;
      v60 = skey->des.ek[17];
      skey->des.ek[22] = v50;
      v61 = v50 ^ v60;
      skey->des.ek[23] = v61;
      v62 = skey->des.ek[18] ^ Te4_1[(unsigned __int8)v61] ^ Te4_2[BYTE1(v61)] ^ Te4_3[BYTE2(v61)] ^ Te4_0[(unsigned __int64)v61 >> 24] ^ 0x8000000;
      skey->des.ek[24] = v62;
      v63 = skey->des.ek[19] ^ v62;
      skey->des.ek[25] = v63;
      v64 = skey->des.ek[20] ^ v63;
      skey->des.ek[26] = v64;
      LODWORD(v51) = v64 ^ skey->des.ek[21];
      skey->des.ek[27] = v51;
      LODWORD(v51) = skey->des.ek[22] ^ v51;
      v65 = skey->des.ek[23];
      skey->des.ek[28] = v51;
      v66 = v51 ^ v65;
      skey->des.ek[29] = v66;
      v67 = skey->des.ek[24] ^ Te4_1[(unsigned __int8)v66] ^ Te4_2[BYTE1(v66)] ^ Te4_3[BYTE2(v66)] ^ Te4_0[(unsigned __int64)v66 >> 24] ^ 0x10000000;
      skey->des.ek[30] = v67;
      v68 = skey->des.ek[25] ^ v67;
      skey->des.ek[31] = v68;
      LODWORD(v51) = v68 ^ skey->des.ek[26];
      skey->des.dk[0] = v51;
      v69 = v51 ^ skey->des.ek[27];
      skey->des.dk[1] = v69;
      v70 = skey->des.ek[28] ^ v69;
      skey->des.dk[2] = v70;
      v71 = skey->des.ek[29] ^ v70;
      skey->des.dk[3] = v71;
      v72 = skey->des.ek[30] ^ Te4_1[(unsigned __int8)v71] ^ Te4_2[BYTE1(v71)] ^ Te4_3[BYTE2(v71)] ^ Te4_0[(unsigned __int64)v71 >> 24] ^ 0x20000000;
      skey->des.dk[4] = v72;
      v73 = skey->des.ek[31] ^ v72;
      skey->des.dk[5] = v73;
      LODWORD(v51) = v73 ^ skey->des.dk[0];
      skey->des.dk[6] = v51;
      v74 = v51 ^ skey->des.dk[1];
      skey->des.dk[7] = v74;
      v75 = skey->des.dk[2] ^ v74;
      skey->des.dk[8] = v75;
      v76 = skey->des.dk[3] ^ v75;
      skey->des.dk[9] = v76;
      v77 = skey->des.dk[4] ^ Te4_1[(unsigned __int8)v76] ^ Te4_2[BYTE1(v76)] ^ Te4_3[BYTE2(v76)] ^ Te4_0[(unsigned __int64)v76 >> 24] ^ 0x40000000;
      skey->des.dk[10] = v77;
      v78 = skey->des.dk[5] ^ v77;
      skey->des.dk[11] = v78;
      LODWORD(v51) = v78 ^ skey->des.dk[6];
      skey->des.dk[12] = v51;
      v79 = v51 ^ skey->des.dk[7];
      skey->des.dk[13] = v79;
      v80 = skey->des.dk[8] ^ v79;
      skey->des.dk[14] = v80;
      v81 = skey->des.dk[9] ^ v80;
      skey->des.dk[15] = v81;
      v82 = skey->des.dk[10] ^ Te4_1[(unsigned __int8)v81] ^ Te4_2[BYTE1(v81)] ^ Te4_3[BYTE2(v81)] ^ Te4_0[(unsigned __int64)v81 >> 24] ^ 0x80000000;
      skey->des.dk[16] = v82;
      v83 = skey->des.dk[11] ^ v82;
      skey->des.dk[17] = v83;
      v84 = skey->des.dk[12] ^ v83;
      skey->des.dk[18] = v84;
      skey->des.dk[19] = v84 ^ skey->des.dk[13];
      break;
    case 32:
      skey->des.ek[4] = _byteswap_ulong(*((_DWORD *)key + 4));
      skey->des.ek[5] = _byteswap_ulong(*((_DWORD *)key + 5));
      skey->des.ek[6] = _byteswap_ulong(*((_DWORD *)key + 6));
      v85 = _byteswap_ulong(*((_DWORD *)key + 7));
      skey->des.ek[7] = v85;
      v86 = v7 ^ Te4_1[(unsigned __int8)v85] ^ Te4_2[BYTE1(v85)] ^ Te4_3[BYTE2(v85)] ^ Te4_0[(unsigned __int64)v85 >> 24] ^ 0x1000000;
      skey->des.ek[8] = v86;
      v87 = skey->des.ek[1] ^ v86;
      skey->des.ek[9] = v87;
      v88 = skey->des.ek[2] ^ v87;
      skey->des.ek[10] = v88;
      v89 = skey->des.ek[3] ^ v88;
      skey->des.ek[11] = v89;
      v90 = __ROR4__(v89, 8);
      v91 = skey->des.ek[4] ^ Te4_1[(unsigned __int8)v90] ^ Te4_2[BYTE1(v90)] ^ Te4_3[BYTE2(v90)] ^ Te4_0[(unsigned __int64)v90 >> 24];
      skey->des.ek[12] = v91;
      v92 = skey->des.ek[5] ^ v91;
      skey->des.ek[13] = v92;
      v93 = skey->des.ek[6] ^ v92;
      skey->des.ek[14] = v93;
      v94 = skey->des.ek[7] ^ v93;
      skey->des.ek[15] = v94;
      v95 = v86 ^ Te4_1[(unsigned __int8)v94] ^ Te4_2[BYTE1(v94)] ^ Te4_3[BYTE2(v94)] ^ Te4_0[(unsigned __int64)v94 >> 24] ^ 0x2000000;
      skey->des.ek[16] = v95;
      v96 = v95 ^ skey->des.ek[9];
      skey->des.ek[17] = v96;
      v97 = skey->des.ek[10] ^ v96;
      skey->des.ek[18] = v97;
      v98 = v97 ^ skey->des.ek[11];
      skey->des.ek[19] = v98;
      v99 = __ROR4__(v98, 8);
      v100 = skey->des.ek[12] ^ Te4_1[(unsigned __int8)v99] ^ Te4_2[BYTE1(v99)] ^ Te4_3[BYTE2(v99)] ^ Te4_0[(unsigned __int64)v99 >> 24];
      skey->des.ek[20] = v100;
      v101 = skey->des.ek[13] ^ v100;
      skey->des.ek[21] = v101;
      v102 = skey->des.ek[14] ^ v101;
      skey->des.ek[22] = v102;
      v103 = skey->des.ek[15] ^ v102;
      skey->des.ek[23] = v103;
      v104 = skey->des.ek[16] ^ Te4_1[(unsigned __int8)v103] ^ Te4_2[BYTE1(v103)] ^ Te4_3[BYTE2(v103)] ^ Te4_0[(unsigned __int64)v103 >> 24] ^ 0x4000000;
      skey->des.ek[24] = v104;
      v105 = skey->des.ek[17] ^ v104;
      skey->des.ek[25] = v105;
      v106 = skey->des.ek[18] ^ v105;
      skey->des.ek[26] = v106;
      v107 = v106 ^ skey->des.ek[19];
      skey->des.ek[27] = v107;
      v108 = __ROR4__(v107, 8);
      v109 = skey->des.ek[20] ^ Te4_1[(unsigned __int8)v108] ^ Te4_2[BYTE1(v108)] ^ Te4_3[BYTE2(v108)] ^ Te4_0[(unsigned __int64)v108 >> 24];
      skey->des.ek[28] = v109;
      v110 = skey->des.ek[21] ^ v109;
      skey->des.ek[29] = v110;
      v111 = skey->des.ek[22] ^ v110;
      skey->des.ek[30] = v111;
      v112 = skey->des.ek[23] ^ v111;
      skey->des.ek[31] = v112;
      v113 = skey->des.ek[24] ^ Te4_1[(unsigned __int8)v112] ^ Te4_2[BYTE1(v112)] ^ Te4_3[BYTE2(v112)] ^ Te4_0[(unsigned __int64)v112 >> 24] ^ 0x8000000;
      skey->des.dk[0] = v113;
      v114 = v113 ^ skey->des.ek[25];
      skey->des.dk[1] = v114;
      v115 = v114 ^ skey->des.ek[26];
      skey->des.dk[2] = v115;
      v116 = v115 ^ skey->des.ek[27];
      skey->des.dk[3] = v116;
      v117 = __ROR4__(v116, 8);
      v118 = skey->des.ek[28] ^ Te4_1[(unsigned __int8)v117] ^ Te4_2[BYTE1(v117)] ^ Te4_3[BYTE2(v117)] ^ Te4_0[(unsigned __int64)v117 >> 24];
      skey->des.dk[4] = v118;
      v119 = skey->des.ek[29] ^ v118;
      skey->des.dk[5] = v119;
      v120 = skey->des.ek[30] ^ v119;
      skey->des.dk[6] = v120;
      v121 = skey->des.ek[31] ^ v120;
      skey->des.dk[7] = v121;
      v122 = skey->des.dk[0] ^ Te4_1[(unsigned __int8)v121] ^ Te4_2[BYTE1(v121)] ^ Te4_3[BYTE2(v121)] ^ Te4_0[(unsigned __int64)v121 >> 24] ^ 0x10000000;
      skey->des.dk[8] = v122;
      v123 = skey->des.dk[1] ^ v122;
      skey->des.dk[9] = v123;
      v124 = v123 ^ skey->des.dk[2];
      skey->des.dk[10] = v124;
      v125 = v124 ^ skey->des.dk[3];
      skey->des.dk[11] = v125;
      v126 = __ROR4__(v125, 8);
      v127 = skey->des.dk[4] ^ Te4_1[(unsigned __int8)v126] ^ Te4_2[BYTE1(v126)] ^ Te4_3[BYTE2(v126)] ^ Te4_0[(unsigned __int64)v126 >> 24];
      v128 = v127 ^ skey->des.dk[5];
      v129 = v128 ^ skey->des.dk[6];
      skey->des.dk[12] = v127;
      v130 = skey->des.dk[7];
      skey->des.dk[14] = v129;
      skey->des.dk[13] = v128;
      v131 = v129 ^ v130;
      skey->des.dk[15] = v131;
      v132 = skey->des.dk[8] ^ Te4_1[(unsigned __int8)v131] ^ Te4_2[BYTE1(v131)] ^ Te4_3[BYTE2(v131)] ^ Te4_0[(unsigned __int64)v131 >> 24] ^ 0x20000000;
      skey->des.dk[16] = v132;
      v133 = skey->des.dk[9] ^ v132;
      skey->des.dk[17] = v133;
      v134 = v133 ^ skey->des.dk[10];
      skey->des.dk[18] = v134;
      v135 = v134 ^ skey->des.dk[11];
      skey->des.dk[19] = v135;
      v136 = __ROR4__(v135, 8);
      v137 = skey->des.dk[12] ^ Te4_1[(unsigned __int8)v136] ^ Te4_2[BYTE1(v136)] ^ Te4_3[BYTE2(v136)] ^ Te4_0[(unsigned __int64)v136 >> 24];
      v138 = skey->des.dk[14];
      v139 = v137 ^ skey->des.dk[13];
      skey->des.dk[21] = v139;
      v140 = v139 ^ v138;
      skey->des.dk[20] = v137;
      v141 = skey->des.dk[15];
      skey->des.dk[22] = v140;
      v142 = v140 ^ v141;
      skey->des.dk[23] = v142;
      v143 = skey->des.dk[16] ^ Te4_1[(unsigned __int8)v142] ^ Te4_2[BYTE1(v142)] ^ Te4_3[BYTE2(v142)] ^ Te4_0[(unsigned __int64)v142 >> 24] ^ 0x40000000;
      skey->des.dk[24] = v143;
      v144 = skey->des.dk[17] ^ v143;
      skey->des.dk[25] = v144;
      v145 = skey->des.dk[18] ^ v144;
      skey->des.dk[26] = v145;
      skey->des.dk[27] = skey->des.dk[19] ^ v145;
      break;
    default:
      return 1i64;
  }
  v146 = skey->des.ek[v4 + 24];
  v147 = &skey->des.ek[v4 + 24];
  skey->des.dk[28] = v146;
  v148 = &skey->data + 30;
  v149 = 1;
  skey->des.dk[29] = v147[1];
  skey->des.dk[30] = v147[2];
  for ( skey->des.dk[31] = v147[3]; v149 < (signed int)skey->des3.dk[0][24]; *((_DWORD *)v148 + 3) = Tks3[(unsigned __int8)v147[3]] ^ Tks2[(unsigned __int8)BYTE1(v147[3])] ^ Tks1[(unsigned __int8)BYTE2(v147[3])] ^ Tks0[(unsigned __int64)v147[3] >> 24] )
  {
    v150 = *(v147 - 4);
    v147 -= 4;
    v148 += 2;
    ++v149;
    *(_DWORD *)v148 = Tks3[(unsigned __int8)v150] ^ Tks2[BYTE1(v150)] ^ Tks1[BYTE2(v150)] ^ Tks0[(unsigned __int64)v150 >> 24];
    *((_DWORD *)v148 + 1) = Tks3[(unsigned __int8)v147[1]] ^ Tks2[(unsigned __int8)BYTE1(v147[1])] ^ Tks1[(unsigned __int8)BYTE2(v147[1])] ^ Tks0[(unsigned __int64)v147[1] >> 24];
    *((_DWORD *)v148 + 2) = Tks3[(unsigned __int8)v147[2]] ^ Tks2[(unsigned __int8)BYTE1(v147[2])] ^ Tks1[(unsigned __int8)BYTE2(v147[2])] ^ Tks0[(unsigned __int64)v147[2] >> 24];
  }
  *((_DWORD *)v148 + 4) = *(v147 - 4);
  *((_DWORD *)v148 + 5) = *(v147 - 3);
  *((_DWORD *)v148 + 6) = *(v147 - 2);
  *((_DWORD *)v148 + 7) = *(v147 - 1);
  return 0i64;
}

