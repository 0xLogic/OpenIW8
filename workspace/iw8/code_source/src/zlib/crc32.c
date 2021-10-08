/*
==============
crc32_combine64
==============
*/

unsigned int __fastcall crc32_combine64(unsigned int crc1, unsigned int crc2, __int64 len2)
{
  return ?crc32_combine64@@YAKKK_J@Z(crc1, crc2, len2);
}

/*
==============
crc32_combine64
==============
*/

unsigned int __fastcall crc32_combine64(unsigned int crc1, unsigned int crc2, __int64 len2)
{
  return crc32_combine_(crc1, crc2, len2);
}

/*
==============
crc32_combine_
==============
*/
__int64 crc32_combine_(unsigned int crc1, unsigned int crc2, __int64 len2)
{
  __int64 v3; 
  unsigned int v6; 
  unsigned int *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int *v11; 
  unsigned int v12; 
  unsigned int mat[32]; 
  unsigned int square[32]; 

  v3 = len2;
  if ( len2 > 0 )
  {
    mat[0] = -306674912;
    mat[1] = 1;
    mat[2] = 2;
    mat[3] = 4;
    mat[4] = 8;
    mat[5] = 16;
    mat[6] = 32;
    mat[7] = 64;
    mat[8] = 128;
    mat[9] = 256;
    mat[10] = 512;
    mat[11] = 1024;
    mat[12] = 2048;
    mat[13] = 4096;
    mat[14] = 0x2000;
    mat[15] = 0x4000;
    mat[16] = 0x8000;
    mat[17] = 0x10000;
    mat[18] = 0x20000;
    mat[19] = 0x40000;
    mat[20] = 0x80000;
    mat[21] = 0x100000;
    mat[22] = 0x200000;
    mat[23] = 0x400000;
    mat[24] = 0x800000;
    mat[25] = 0x1000000;
    mat[26] = 0x2000000;
    mat[27] = 0x4000000;
    mat[28] = 0x8000000;
    mat[29] = 0x10000000;
    mat[30] = 0x20000000;
    mat[31] = 0x40000000;
    gf2_matrix_square(square, mat);
    gf2_matrix_square(mat, square);
    do
    {
      gf2_matrix_square(square, mat);
      if ( (v3 & 1) != 0 )
      {
        v6 = 0;
        v7 = square;
        if ( crc1 )
        {
          do
          {
            v8 = crc1;
            if ( (crc1 & 1) != 0 )
              v6 ^= *v7;
            crc1 >>= 1;
            ++v7;
          }
          while ( v8 >= 2 );
        }
        crc1 = v6;
      }
      v9 = v3 >> 1;
      if ( !v9 )
        break;
      gf2_matrix_square(mat, square);
      if ( (v9 & 1) != 0 )
      {
        v10 = 0;
        v11 = mat;
        if ( crc1 )
        {
          do
          {
            v12 = crc1;
            if ( (crc1 & 1) != 0 )
              v10 ^= *v11;
            crc1 >>= 1;
            ++v11;
          }
          while ( v12 >= 2 );
        }
        crc1 = v10;
      }
      v3 = v9 >> 1;
    }
    while ( v3 );
    crc1 ^= crc2;
  }
  return crc1;
}

/*
==============
crc32_little
==============
*/
__int64 crc32_little(unsigned int crc, const unsigned __int8 *buf, unsigned int len)
{
  unsigned int v3; 
  unsigned int i; 
  unsigned __int8 v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  char v20; 

  v3 = len;
  for ( i = ~crc; v3; --v3 )
  {
    if ( ((unsigned __int8)buf & 3) == 0 )
      break;
    v6 = i ^ *buf++;
    i = (i >> 8) ^ crc_table[0][v6];
  }
  if ( v3 >= 0x20 )
  {
    v7 = (unsigned __int64)v3 >> 5;
    do
    {
      v8 = *((_DWORD *)buf + 1) ^ crc_table[3][(unsigned __int8)(i ^ *(_DWORD *)buf)] ^ crc_table[0][(i ^ (unsigned __int64)*(unsigned int *)buf) >> 24] ^ crc_table[2][(unsigned __int8)((unsigned __int16)(i ^ *(_DWORD *)buf) >> 8)] ^ crc_table[1][(unsigned __int8)((i ^ *(_DWORD *)buf) >> 16)];
      v9 = *((unsigned int *)buf + 2) ^ (unsigned int)crc_table[3][(unsigned __int8)v8] ^ (unsigned int)crc_table[0][(*((unsigned int *)buf + 1) ^ (unsigned int)crc_table[3][(unsigned __int8)(i ^ *(_DWORD *)buf)] ^ (unsigned int)crc_table[0][(i ^ (unsigned __int64)*(unsigned int *)buf) >> 24] ^ (unsigned int)crc_table[2][(unsigned __int8)((unsigned __int16)(i ^ *(_DWORD *)buf) >> 8)] ^ (unsigned __int64)crc_table[1][(unsigned __int8)((i ^ *(_DWORD *)buf) >> 16)]) >> 24] ^ (unsigned int)crc_table[2][BYTE1(v8)] ^ (unsigned __int64)crc_table[1][BYTE2(v8)];
      v10 = *((unsigned int *)buf + 5);
      v11 = *((unsigned int *)buf + 3) ^ (unsigned int)crc_table[3][(unsigned __int8)v9] ^ (unsigned int)crc_table[0][v9 >> 24] ^ (unsigned int)crc_table[2][BYTE1(v9)] ^ (unsigned __int64)crc_table[1][BYTE2(v9)];
      v12 = *((unsigned int *)buf + 6);
      v13 = *((unsigned int *)buf + 4) ^ (unsigned int)crc_table[3][(unsigned __int8)v11] ^ (unsigned int)crc_table[0][v11 >> 24] ^ (unsigned int)crc_table[2][(unsigned __int8)((unsigned __int16)(*((_DWORD *)buf + 3) ^ crc_table[3][(unsigned __int8)v9] ^ crc_table[0][v9 >> 24] ^ crc_table[2][BYTE1(v9)] ^ crc_table[1][BYTE2(v9)]) >> 8)] ^ (unsigned __int64)crc_table[1][(unsigned __int8)((*((_DWORD *)buf + 3) ^ crc_table[3][(unsigned __int8)v9] ^ crc_table[0][v9 >> 24] ^ crc_table[2][BYTE1(v9)] ^ crc_table[1][BYTE2(v9)]) >> 16)];
      v14 = *((unsigned int *)buf + 7);
      buf += 32;
      v3 -= 32;
      v15 = v10 ^ (unsigned int)crc_table[3][(unsigned __int8)v13] ^ (unsigned int)crc_table[0][v13 >> 24] ^ (unsigned int)crc_table[2][BYTE1(v13)] ^ (unsigned __int64)crc_table[1][BYTE2(v13)];
      v16 = v12 ^ (unsigned int)crc_table[3][(unsigned __int8)v15] ^ (unsigned int)crc_table[0][v15 >> 24] ^ (unsigned int)crc_table[2][(unsigned __int8)((unsigned __int16)(v10 ^ crc_table[3][(unsigned __int8)v13] ^ crc_table[0][v13 >> 24] ^ crc_table[2][BYTE1(v13)] ^ crc_table[1][BYTE2(v13)]) >> 8)] ^ (unsigned __int64)crc_table[1][(unsigned __int8)(((unsigned int)v10 ^ crc_table[3][(unsigned __int8)v13] ^ crc_table[0][v13 >> 24] ^ crc_table[2][BYTE1(v13)] ^ crc_table[1][BYTE2(v13)]) >> 16)];
      v17 = v14 ^ (unsigned int)crc_table[3][(unsigned __int8)v16] ^ (unsigned int)crc_table[0][v16 >> 24] ^ (unsigned int)crc_table[2][BYTE1(v16)] ^ (unsigned __int64)crc_table[1][BYTE2(v16)];
      i = crc_table[3][(unsigned __int8)v17] ^ crc_table[0][v17 >> 24] ^ crc_table[2][(unsigned __int8)((unsigned __int16)(v14 ^ crc_table[3][(unsigned __int8)v16] ^ crc_table[0][v16 >> 24] ^ crc_table[2][BYTE1(v16)] ^ crc_table[1][BYTE2(v16)]) >> 8)] ^ crc_table[1][(unsigned __int8)(((unsigned int)v14 ^ crc_table[3][(unsigned __int8)v16] ^ crc_table[0][v16 >> 24] ^ crc_table[2][BYTE1(v16)] ^ crc_table[1][BYTE2(v16)]) >> 16)];
      --v7;
    }
    while ( v7 );
  }
  if ( v3 >= 4 )
  {
    v18 = (unsigned __int64)v3 >> 2;
    do
    {
      v19 = *(unsigned int *)buf;
      v3 -= 4;
      buf += 4;
      i = crc_table[3][(unsigned __int8)(i ^ v19)] ^ crc_table[0][(i ^ v19) >> 24] ^ crc_table[2][(unsigned __int8)((unsigned __int16)(i ^ v19) >> 8)] ^ crc_table[1][(unsigned __int8)((i ^ (unsigned int)v19) >> 16)];
      --v18;
    }
    while ( v18 );
  }
  for ( ; v3; --v3 )
  {
    v20 = *buf++;
    i = (i >> 8) ^ crc_table[0][(unsigned __int8)(i ^ v20)];
  }
  return ~i;
}

/*
==============
gf2_matrix_square
==============
*/
void gf2_matrix_square(unsigned int *square, unsigned int *mat)
{
  unsigned int *v2; 
  signed __int64 v3; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int *v8; 
  unsigned int v9; 
  unsigned int *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int *v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int *v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int *v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int *v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int *v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int *v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int *v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int *v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int *v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int *v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int *v58; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int *v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int *v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 

  v2 = square + 1;
  v3 = (char *)mat - (char *)square;
  v5 = 2i64;
  do
  {
    v6 = *(unsigned int *)((char *)v2 + v3 - 4);
    v7 = 0;
    v8 = mat;
    if ( v6 )
    {
      do
      {
        v9 = v6;
        if ( (v6 & 1) != 0 )
          v7 ^= *v8;
        v6 >>= 1;
        ++v8;
      }
      while ( v9 >= 2 );
    }
    *(v2 - 1) = v7;
    v10 = mat;
    v11 = *(unsigned int *)((char *)v2 + v3);
    v12 = 0;
    if ( v11 )
    {
      do
      {
        v13 = v11;
        if ( (v11 & 1) != 0 )
          v12 ^= *v10;
        v11 >>= 1;
        ++v10;
      }
      while ( v13 >= 2 );
    }
    *v2 = v12;
    v14 = mat;
    v15 = *(unsigned int *)((char *)v2 + v3 + 4);
    v16 = 0;
    if ( v15 )
    {
      do
      {
        v17 = v15;
        if ( (v15 & 1) != 0 )
          v16 ^= *v14;
        v15 >>= 1;
        ++v14;
      }
      while ( v17 >= 2 );
    }
    v2[1] = v16;
    v18 = mat;
    v19 = *(unsigned int *)((char *)v2 + v3 + 8);
    v20 = 0;
    if ( v19 )
    {
      do
      {
        v21 = v19;
        if ( (v19 & 1) != 0 )
          v20 ^= *v18;
        v19 >>= 1;
        ++v18;
      }
      while ( v21 >= 2 );
    }
    v2[2] = v20;
    v22 = mat;
    v23 = *(unsigned int *)((char *)v2 + v3 + 12);
    v24 = 0;
    if ( v23 )
    {
      do
      {
        v25 = v23;
        if ( (v23 & 1) != 0 )
          v24 ^= *v22;
        v23 >>= 1;
        ++v22;
      }
      while ( v25 >= 2 );
    }
    v2[3] = v24;
    v26 = mat;
    v27 = *(unsigned int *)((char *)v2 + v3 + 16);
    v28 = 0;
    if ( v27 )
    {
      do
      {
        v29 = v27;
        if ( (v27 & 1) != 0 )
          v28 ^= *v26;
        v27 >>= 1;
        ++v26;
      }
      while ( v29 >= 2 );
    }
    v2[4] = v28;
    v30 = mat;
    v31 = *(unsigned int *)((char *)v2 + v3 + 20);
    v32 = 0;
    if ( v31 )
    {
      do
      {
        v33 = v31;
        if ( (v31 & 1) != 0 )
          v32 ^= *v30;
        v31 >>= 1;
        ++v30;
      }
      while ( v33 >= 2 );
    }
    v2[5] = v32;
    v34 = mat;
    v35 = *(unsigned int *)((char *)v2 + v3 + 24);
    v36 = 0;
    if ( v35 )
    {
      do
      {
        v37 = v35;
        if ( (v35 & 1) != 0 )
          v36 ^= *v34;
        v35 >>= 1;
        ++v34;
      }
      while ( v37 >= 2 );
    }
    v2[6] = v36;
    v38 = mat;
    v39 = *(unsigned int *)((char *)v2 + v3 + 28);
    v40 = 0;
    if ( v39 )
    {
      do
      {
        v41 = v39;
        if ( (v39 & 1) != 0 )
          v40 ^= *v38;
        v39 >>= 1;
        ++v38;
      }
      while ( v41 >= 2 );
    }
    v2[7] = v40;
    v42 = mat;
    v43 = *(unsigned int *)((char *)v2 + v3 + 32);
    v44 = 0;
    if ( v43 )
    {
      do
      {
        v45 = v43;
        if ( (v43 & 1) != 0 )
          v44 ^= *v42;
        v43 >>= 1;
        ++v42;
      }
      while ( v45 >= 2 );
    }
    v2[8] = v44;
    v46 = mat;
    v47 = *(unsigned int *)((char *)v2 + v3 + 36);
    v48 = 0;
    if ( v47 )
    {
      do
      {
        v49 = v47;
        if ( (v47 & 1) != 0 )
          v48 ^= *v46;
        v47 >>= 1;
        ++v46;
      }
      while ( v49 >= 2 );
    }
    v2[9] = v48;
    v50 = mat;
    v51 = *(unsigned int *)((char *)v2 + v3 + 40);
    v52 = 0;
    if ( v51 )
    {
      do
      {
        v53 = v51;
        if ( (v51 & 1) != 0 )
          v52 ^= *v50;
        v51 >>= 1;
        ++v50;
      }
      while ( v53 >= 2 );
    }
    v2[10] = v52;
    v54 = mat;
    v55 = *(unsigned int *)((char *)v2 + v3 + 44);
    v56 = 0;
    if ( v55 )
    {
      do
      {
        v57 = v55;
        if ( (v55 & 1) != 0 )
          v56 ^= *v54;
        v55 >>= 1;
        ++v54;
      }
      while ( v57 >= 2 );
    }
    v2[11] = v56;
    v58 = mat;
    v59 = *(unsigned int *)((char *)v2 + v3 + 48);
    v60 = 0;
    if ( v59 )
    {
      do
      {
        v61 = v59;
        if ( (v59 & 1) != 0 )
          v60 ^= *v58;
        v59 >>= 1;
        ++v58;
      }
      while ( v61 >= 2 );
    }
    v2[12] = v60;
    v62 = mat;
    v63 = *(unsigned int *)((char *)v2 + v3 + 52);
    v64 = 0;
    if ( v63 )
    {
      do
      {
        v65 = v63;
        if ( (v63 & 1) != 0 )
          v64 ^= *v62;
        v63 >>= 1;
        ++v62;
      }
      while ( v65 >= 2 );
    }
    v2[13] = v64;
    v66 = mat;
    v67 = *(unsigned int *)((char *)v2 + v3 + 56);
    v68 = 0;
    if ( v67 )
    {
      do
      {
        v69 = v67;
        if ( (v67 & 1) != 0 )
          v68 ^= *v66;
        v67 >>= 1;
        ++v66;
      }
      while ( v69 >= 2 );
    }
    v2[14] = v68;
    v2 += 16;
    --v5;
  }
  while ( v5 );
}

/*
==============
crc32
==============
*/
__int64 crc32(unsigned int crc, const unsigned __int8 *buf, unsigned int len)
{
  if ( buf )
    return crc32_little(crc, buf, len);
  else
    return 0i64;
}

/*
==============
crc32_combine
==============
*/
__int64 crc32_combine(unsigned int crc1, unsigned int crc2, int len2)
{
  return crc32_combine_(crc1, crc2, len2);
}

/*
==============
get_crc_table
==============
*/
const unsigned int *get_crc_table()
{
  return crc_table[0];
}

