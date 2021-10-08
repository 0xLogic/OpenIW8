/*
==============
ltc_ecc_mul2add
==============
*/
__int64 ltc_ecc_mul2add(ecc_point *A, void *kA, ecc_point *B, void *kB, ecc_point *C, void *modulus)
{
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 *v13; 
  ecc_point *v14; 
  unsigned int v15; 
  ecc_point *v16; 
  ecc_point *v17; 
  ecc_point *v18; 
  ecc_point *v19; 
  ecc_point *v20; 
  ecc_point *v21; 
  unsigned int v22; 
  ecc_point **v23; 
  unsigned int v24; 
  ecc_point *v25; 
  unsigned __int8 *v26; 
  int v27; 
  unsigned __int8 *v28; 
  int v29; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  ecc_point *v37; 
  void *x; 
  void *v39; 
  int v40; 
  ecc_point **v41; 
  __int64 v42; 
  ecc_point **v43; 
  void *mp; 
  void *v45; 
  unsigned int v46; 
  void *Block; 
  void *v48; 
  unsigned int v49; 
  __int64 v50; 
  unsigned int v51; 
  ecc_point *v52; 
  ecc_point *v53; 
  __int64 v54; 
  void **v55; 
  ecc_point *v56; 
  ecc_point *v57; 
  void **v58; 
  ecc_point *v59; 
  ecc_point *v60; 

  v53 = A;
  v52 = B;
  v50 = 1i64;
  Block = ltc_calloc(1ui64, 0x100ui64);
  if ( !Block )
    return 13i64;
  v48 = ltc_calloc(1ui64, 0x100ui64);
  if ( !v48 )
  {
    ltc_free(Block);
    return 13i64;
  }
  v9 = ltc_mp.unsigned_size(kA);
  v10 = ltc_mp.unsigned_size(kB);
  v11 = v10;
  if ( v9 > v10 )
    v10 = v9;
  v49 = v10;
  if ( v9 > 0x100 || v11 > 0x100 )
  {
    v15 = 16;
  }
  else
  {
    ltc_mp.unsigned_write(kA, (unsigned __int8 *)Block + v10 - v9);
    ltc_mp.unsigned_write(kB, (unsigned __int8 *)v48 + v49 - v11);
    v12 = 0i64;
    v13 = &v54;
    do
    {
      v14 = j_ltc_ecc_new_point();
      *v13 = (__int64)v14;
      if ( !v14 )
      {
        if ( (_DWORD)v12 )
        {
          v43 = (ecc_point **)&v54;
          do
          {
            j_ltc_ecc_del_point(*v43++);
            --v12;
          }
          while ( v12 );
        }
        v15 = 13;
        goto $ERR_T;
      }
      v12 = (unsigned int)(v12 + 1);
      ++v13;
    }
    while ( (unsigned int)v12 < 0x10 );
    v15 = ltc_mp.montgomery_setup(modulus, &mp);
    if ( !v15 )
    {
      v15 = ltc_mp.init(&v45);
      if ( !v15 )
      {
        v15 = ltc_mp.montgomery_normalization(v45, modulus);
        if ( !v15 )
        {
          v16 = (ecc_point *)v55;
          v17 = v53;
          v15 = ltc_mp.mulmod(v53->x, v45, modulus, *v55);
          if ( !v15 )
          {
            v15 = ltc_mp.mulmod(v17->y, v45, modulus, v16->y);
            if ( !v15 )
            {
              v15 = ltc_mp.mulmod(v17->z, v45, modulus, v16->z);
              if ( !v15 )
              {
                v18 = (ecc_point *)v58;
                v19 = v52;
                v15 = ltc_mp.mulmod(v52->x, v45, modulus, *v58);
                if ( !v15 )
                {
                  v15 = ltc_mp.mulmod(v19->y, v45, modulus, v18->y);
                  if ( !v15 )
                  {
                    v15 = ltc_mp.mulmod(v19->z, v45, modulus, v18->z);
                    if ( !v15 )
                    {
                      v20 = v56;
                      v15 = ltc_mp.ecc_ptdbl(v16, v56, modulus, mp);
                      if ( !v15 )
                      {
                        v15 = ltc_mp.ecc_ptadd(v16, v20, v57, modulus, mp);
                        if ( !v15 )
                        {
                          v21 = v59;
                          v15 = ltc_mp.ecc_ptdbl(v18, v59, modulus, mp);
                          if ( !v15 )
                          {
                            v15 = ltc_mp.ecc_ptadd(v18, v21, v60, modulus, mp);
                            if ( !v15 )
                            {
                              v22 = 1;
                              v23 = (ecc_point **)&v55;
                              do
                              {
                                v24 = 1;
                                v25 = *v23;
                                do
                                {
                                  v15 = ltc_mp.ecc_ptadd(v25, (ecc_point *)*(&v54 + 4 * v24), (ecc_point *)*(&v54 + 4 * v24 + v22), modulus, mp);
                                  if ( v15 )
                                    goto $ERR_MU;
                                  ++v24;
                                }
                                while ( v24 < 4 );
                                ++v22;
                                ++v23;
                              }
                              while ( v22 < 4 );
                              v26 = (unsigned __int8 *)Block;
                              v27 = 3;
                              v28 = (unsigned __int8 *)v48;
                              v29 = 1;
                              v30 = 0i64;
                              v31 = *(unsigned __int8 *)Block;
                              v32 = *(unsigned __int8 *)v48;
                              while ( 2 )
                              {
                                if ( ++v27 == 4 )
                                {
                                  if ( (_DWORD)v30 == v49 )
                                  {
                                    v15 = j_ltc_ecc_map(C, modulus, mp);
                                    break;
                                  }
                                  v31 = v26[v30];
                                  v27 = 0;
                                  v32 = v28[v30];
                                  v30 = (unsigned int)(v30 + 1);
                                }
                                v33 = v31;
                                v34 = v31 >> 6;
                                v35 = v32;
                                v36 = v32 >> 6;
                                v51 = v31;
                                v31 = 4 * (v31 & 0x3F);
                                v32 = 4 * (v32 & 0x3F);
                                LODWORD(v52) = v34;
                                LODWORD(v53) = v36;
                                v46 = v32;
                                if ( v51 < 0x40 && v35 < 0x40 && v29 == 1 )
                                {
LABEL_31:
                                  v26 = (unsigned __int8 *)Block;
                                }
                                else
                                {
                                  if ( !v29 )
                                  {
                                    v15 = ltc_mp.ecc_ptdbl(C, C, modulus, mp);
                                    if ( v15 )
                                      break;
                                    v15 = ltc_mp.ecc_ptdbl(C, C, modulus, mp);
                                    if ( v15 )
                                      break;
                                    v32 = v46;
                                    v29 = v50;
                                    v33 = v51;
                                    v34 = (unsigned int)v52;
                                    v36 = (unsigned int)v53;
                                  }
                                  if ( v33 >= 0x40 || (v26 = (unsigned __int8 *)Block, v35 >= 0x40) )
                                  {
                                    v37 = (ecc_point *)*(&v54 + 4 * v36 + v34);
                                    if ( v29 == 1 )
                                    {
                                      x = C->x;
                                      v39 = v37->x;
                                      LODWORD(v50) = 0;
                                      v15 = ltc_mp.copy(v39, x);
                                      if ( v15 )
                                        break;
                                      v15 = ltc_mp.copy(v37->y, C->y);
                                      if ( v15 )
                                        break;
                                      v40 = ltc_mp.copy(v37->z, C->z);
                                    }
                                    else
                                    {
                                      v40 = ltc_mp.ecc_ptadd(C, v37, C, modulus, mp);
                                    }
                                    v15 = v40;
                                    if ( v40 )
                                      break;
                                    v32 = v46;
                                    v29 = v50;
                                    goto LABEL_31;
                                  }
                                }
                                v28 = (unsigned __int8 *)v48;
                                continue;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
$ERR_MU:
        ltc_mp.deinit(v45);
      }
      ltc_mp.montgomery_deinit(mp);
    }
    v41 = (ecc_point **)&v54;
    v42 = 16i64;
    do
    {
      j_ltc_ecc_del_point(*v41++);
      --v42;
    }
    while ( v42 );
  }
$ERR_T:
  ltc_free(Block);
  ltc_free(v48);
  return v15;
}

