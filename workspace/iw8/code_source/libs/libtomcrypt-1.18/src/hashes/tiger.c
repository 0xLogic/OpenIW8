/*
==============
tiger_init
==============
*/
__int64 tiger_init(Hash_state *md)
{
  __int64 result; 

  md->sha512.length = 0x123456789ABCDEFi64;
  md->sha512.state[0] = 0xFEDCBA9876543210ui64;
  md->sha512.state[1] = 0xF096A5B4C3B2E187ui64;
  result = 0i64;
  md->sha256.state[6] = 0;
  md->sha512.state[2] = 0i64;
  return result;
}

/*
==============
tiger_process
==============
*/
int tiger_process(Hash_state *md, const unsigned __int8 *in, unsigned int inlen)
{
  unsigned int v4; 
  int result; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 

  v4 = inlen;
  if ( md->sha256.state[6] > 0x40 )
    return 16;
  if ( md->sha512.state[2] + inlen < md->sha512.state[2] )
    return 25;
  if ( inlen )
  {
    do
    {
      v7 = md->sha256.state[6];
      if ( (_DWORD)v7 || v4 < 0x40 )
      {
        v8 = v4;
        if ( v4 >= 64 - (int)v7 )
          v8 = 64 - v7;
        v9 = v8;
        memcpy_0((char *)&md->data + v7 + 36, in, v8);
        md->sha256.state[6] += v9;
        in += v9;
        v4 -= v9;
        if ( md->sha256.state[6] == 64 )
        {
          result = tiger_compress(md, &md->sha1.buf[4]);
          if ( result )
            return result;
          md->sha512.state[2] += 512i64;
          md->sha256.state[6] = 0;
        }
      }
      else
      {
        result = tiger_compress(md, (unsigned __int8 *)in);
        if ( result )
          return result;
        md->sha512.state[2] += 512i64;
        in += 64;
        v4 -= 64;
      }
    }
    while ( v4 );
  }
  return 0;
}

/*
==============
tiger_done
==============
*/
__int64 tiger_done(Hash_state *md, unsigned __int8 *out)
{
  __int64 v2; 
  __int64 v6; 

  v2 = md->sha256.state[6];
  if ( (unsigned int)v2 >= 0x40 )
    return 16i64;
  md->sha512.state[2] += (unsigned int)(8 * v2);
  md->sha1.buf[v2 + 4] = 1;
  v6 = ++md->sha256.state[6];
  if ( (unsigned int)v6 > 0x38 )
  {
    for ( ; (unsigned int)v6 < 0x40; v6 = md->sha256.state[6] )
    {
      md->sha1.buf[v6 + 4] = 0;
      ++md->sha256.state[6];
    }
    tiger_compress(md, &md->sha1.buf[4]);
    md->sha256.state[6] = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 < 0x38 )
  {
    do
LABEL_8:
      md->sha1.buf[md->sha256.state[6]++ + 4] = 0;
    while ( md->sha256.state[6] < 0x38 );
  }
  *(void **)((char *)&md->data + 92) = (void *)md->sha512.state[2];
  tiger_compress(md, &md->sha1.buf[4]);
  *(_QWORD *)out = md->sha512.length;
  *((_QWORD *)out + 1) = md->sha512.state[0];
  *((_QWORD *)out + 2) = md->sha512.state[1];
  return 0i64;
}

/*
==============
tiger_test
==============
*/
__int64 tiger_test()
{
  return 2i64;
}

/*
==============
tiger_compress
==============
*/
__int64 tiger_compress(Hash_state *md, unsigned __int8 *buf)
{
  __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  unsigned __int64 v56; 
  unsigned __int64 v57; 
  unsigned __int64 v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  unsigned __int64 v61; 
  unsigned __int64 v62; 
  __int64 v63; 
  unsigned __int64 v64; 
  unsigned __int64 v65; 
  unsigned __int64 v66; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  unsigned __int64 v71; 
  unsigned __int64 v72; 
  unsigned __int64 v73; 
  __int64 v74; 
  unsigned __int64 length; 

  v2 = *((_QWORD *)buf + 1);
  v3 = *(_QWORD *)buf ^ md->sha512.state[1];
  v4 = *((_QWORD *)buf + 2);
  v5 = *((_QWORD *)buf + 3);
  v6 = *((_QWORD *)buf + 5);
  v7 = *((_QWORD *)buf + 6);
  v71 = *((_QWORD *)buf + 4);
  v68 = *((_QWORD *)buf + 7);
  v8 = table[BYTE5(v3) + 256];
  length = md->sha512.length;
  v9 = v2 ^ (md->sha512.length - (table[(unsigned __int8)v3] ^ table[BYTE2(v3) + 256] ^ table[BYTE4(v3) + 512] ^ table[BYTE6(v3) + 768]));
  v10 = v4 ^ (5 * (md->sha512.state[0] + (table[HIBYTE(v3)] ^ table[BYTE1(v3) + 768] ^ table[BYTE3(v3) + 512] ^ v8)) - (table[(unsigned __int8)v9] ^ table[BYTE2(v9) + 256] ^ table[BYTE4(v9) + 512] ^ table[BYTE6(v9) + 768]));
  v11 = v5 ^ (5 * ((table[HIBYTE(v9)] ^ table[BYTE1(v9) + 768] ^ table[BYTE3(v9) + 512] ^ table[BYTE5(v9) + 256]) + v3) - (table[(unsigned __int8)v10] ^ table[BYTE2(v10) + 256] ^ table[BYTE4(v10) + 512] ^ table[BYTE6(v10) + 768]));
  v12 = v71 ^ (5 * ((table[HIBYTE(v10)] ^ table[BYTE1(v10) + 768] ^ table[(((unsigned int)v4 ^ (5 * (md->sha256.state[0] + (LODWORD(table[HIBYTE(v3)]) ^ LODWORD(table[BYTE1(v3) + 768]) ^ LODWORD(table[BYTE3(v3) + 512]) ^ (unsigned int)v8)) - (LODWORD(table[(unsigned __int8)v9]) ^ LODWORD(table[BYTE2(v9) + 256]) ^ LODWORD(table[BYTE4(v9) + 512]) ^ LODWORD(table[BYTE6(v9) + 768])))) >> 24) + 512] ^ table[BYTE5(v10) + 256]) + v9) - (table[(unsigned __int8)v11] ^ table[BYTE2(v11) + 256] ^ table[BYTE4(v11) + 512] ^ table[BYTE6(v11) + 768]));
  v13 = v6 ^ (5 * ((table[HIBYTE(v11)] ^ table[BYTE1(v11) + 768] ^ table[BYTE3(v11) + 512] ^ table[BYTE5(v11) + 256]) + v10) - (table[(unsigned __int8)v12] ^ table[BYTE2(v12) + 256] ^ table[BYTE4(v12) + 512] ^ table[BYTE6(v12) + 768]));
  v14 = v7 ^ (5 * ((table[HIBYTE(v12)] ^ table[BYTE1(v12) + 768] ^ table[BYTE3(v12) + 512] ^ table[BYTE5(v12) + 256]) + v11) - (table[(unsigned __int8)v13] ^ table[BYTE2(v13) + 256] ^ table[BYTE4(v13) + 512] ^ table[BYTE6(v13) + 768]));
  v15 = v68 ^ (5 * ((table[HIBYTE(v13)] ^ table[BYTE1(v13) + 768] ^ table[BYTE3(v13) + 512] ^ table[BYTE5(v13) + 256]) + v12) - (table[(unsigned __int8)v14] ^ table[BYTE2(v14) + 256] ^ table[BYTE4(v14) + 512] ^ table[BYTE6(v14) + 768]));
  v16 = 5 * ((table[HIBYTE(v14)] ^ table[BYTE1(v14) + 768] ^ table[BYTE3(v14) + 512] ^ table[BYTE5(v14) + 256]) + v13);
  v17 = *(_QWORD *)buf - (v68 ^ 0xA5A5A5A5A5A5A5A5ui64);
  v18 = 5 * ((table[HIBYTE(v15)] ^ table[BYTE1(v15) + 768] ^ table[BYTE3(v15) + 512] ^ table[BYTE5(v15) + 256]) + v14);
  v19 = v2 ^ v17;
  v20 = v4 + (v2 ^ v17);
  v21 = v5 - ((v4 + v19) ^ (~v19 << 19));
  v22 = v6 + (v21 ^ v71);
  v23 = v7 - (v22 ^ (~(v21 ^ v71) >> 23));
  v24 = (v23 ^ v68) + v17;
  v73 = v19 - (v24 ^ (~(v23 ^ v68) << 19));
  v72 = (v21 ^ v71) - (((v20 ^ v73) + v21) ^ (~(v20 ^ v73) >> 23));
  v25 = (v22 ^ v72) + v23;
  v74 = v25;
  v69 = (v23 ^ v68) - (v25 ^ 0x123456789ABCDEFi64);
  v26 = v24 ^ (v16 - (table[(unsigned __int8)v15] ^ table[BYTE2(v15) + 256] ^ table[BYTE4(v15) + 512] ^ table[BYTE6(v15) + 768]));
  v27 = v73 ^ (v18 - (table[(unsigned __int8)v26] ^ table[BYTE2(v26) + 256] ^ table[BYTE4(v26) + 512] ^ table[BYTE6(v26) + 768]));
  v28 = v20 ^ v73 ^ (7 * ((table[HIBYTE(v26)] ^ table[BYTE1(v26) + 768] ^ table[BYTE3(v26) + 512] ^ table[BYTE5(v26) + 256]) + v15) - (table[(unsigned __int8)v27] ^ table[BYTE2(v27) + 256] ^ table[BYTE4(v27) + 512] ^ table[BYTE6(v27) + 768]));
  v29 = (v20 ^ v73) + v21;
  v30 = v29 ^ (7 * ((table[HIBYTE(v27)] ^ table[BYTE1(v27) + 768] ^ table[BYTE3(v27) + 512] ^ table[BYTE5(v27) + 256]) + v26) - (table[(unsigned __int8)v28] ^ table[BYTE2(v28) + 256] ^ table[BYTE4(v28) + 512] ^ table[BYTE6(v28) + 768]));
  v31 = v72 ^ (7 * ((table[HIBYTE(v28)] ^ table[BYTE1(v28) + 768] ^ table[BYTE3(v28) + 512] ^ table[BYTE5(v28) + 256]) + v27) - (table[(unsigned __int8)v30] ^ table[BYTE2(v30) + 256] ^ table[BYTE4(v30) + 512] ^ table[BYTE6(v30) + 768]));
  v32 = v22 ^ v72 ^ (7 * ((table[HIBYTE(v30)] ^ table[BYTE1(v30) + 768] ^ table[BYTE3(v30) + 512] ^ table[BYTE5(v30) + 256]) + v28) - (table[(unsigned __int8)v31] ^ table[BYTE2(v31) + 256] ^ table[BYTE4(v31) + 512] ^ table[BYTE6(v31) + 768]));
  v33 = v25 ^ (7 * ((table[HIBYTE(v31)] ^ table[BYTE1(v31) + 768] ^ table[BYTE3(v31) + 512] ^ table[BYTE5(v31) + 256]) + v30) - (table[(unsigned __int8)v32] ^ table[BYTE2(v32) + 256] ^ table[BYTE4(v32) + 512] ^ table[BYTE6(v32) + 768]));
  v34 = 7 * ((table[HIBYTE(v33)] ^ table[BYTE1(v33) + 768] ^ table[BYTE3(v33) + 512] ^ table[BYTE5(v33) + 256]) + v32);
  v35 = v69 ^ (7 * ((table[HIBYTE(v32)] ^ table[BYTE1(v32) + 768] ^ table[BYTE3(v32) + 512] ^ table[BYTE5(v32) + 256]) + v31) - (table[(unsigned __int8)v33] ^ table[BYTE2(v33) + 256] ^ table[BYTE4(v33) + 512] ^ table[BYTE6(v33) + 768]));
  v36 = v24 - (v69 ^ 0xA5A5A5A5A5A5A5A5ui64);
  v37 = v36 ^ v73;
  v38 = 7 * ((table[HIBYTE(v35)] ^ table[BYTE1(v35) + 768] ^ table[BYTE3(v35) + 512] ^ table[BYTE5(v35) + 256]) + v33);
  v39 = v36;
  v40 = (v20 ^ v73) + (v36 ^ v73);
  v41 = v29 - (v40 ^ (~(v36 ^ v73) << 19));
  v42 = v41 ^ v72;
  v43 = (v22 ^ v72) + (v41 ^ v72);
  v44 = v74 - (v43 ^ (~(v41 ^ v72) >> 23));
  v45 = v44 ^ v69;
  v46 = (v44 ^ v69) + v39;
  v47 = v37 - (v46 ^ (~(v44 ^ v69) << 19));
  v48 = v47 ^ v40;
  v49 = v48 + v41;
  v50 = v42 - (v49 ^ ((unsigned __int64)~v48 >> 23));
  v51 = v50 ^ v43;
  v52 = v51 + v44;
  v70 = v45 - (v52 ^ 0x123456789ABCDEFi64);
  v53 = v46 ^ (v34 - (table[(unsigned __int8)v35] ^ table[BYTE2(v35) + 256] ^ table[BYTE4(v35) + 512] ^ table[BYTE6(v35) + 768]));
  v54 = v47 ^ (v38 - (table[(unsigned __int8)v53] ^ table[BYTE2(v53) + 256] ^ table[BYTE4(v53) + 512] ^ table[BYTE6(v53) + 768]));
  v55 = v48 ^ (9 * ((table[HIBYTE(v53)] ^ table[BYTE1(v53) + 768] ^ table[BYTE3(v53) + 512] ^ table[BYTE5(v53) + 256]) + v35) - (table[(unsigned __int8)v54] ^ table[BYTE2(v54) + 256] ^ table[BYTE4(v54) + 512] ^ table[BYTE6(v54) + 768]));
  v56 = v49 ^ (9 * ((table[HIBYTE(v54)] ^ table[BYTE1(v54) + 768] ^ table[BYTE3(v54) + 512] ^ table[BYTE5(v54) + 256]) + v53) - (table[(unsigned __int8)v55] ^ table[BYTE2(v55) + 256] ^ table[BYTE4(v55) + 512] ^ table[BYTE6(v55) + 768]));
  v57 = v50 ^ (9 * ((table[HIBYTE(v55)] ^ table[BYTE1(v55) + 768] ^ table[BYTE3(v55) + 512] ^ table[BYTE5(v55) + 256]) + v54) - (table[(unsigned __int8)v56] ^ table[BYTE2(v56) + 256] ^ table[BYTE4(v56) + 512] ^ table[BYTE6(v56) + 768]));
  v58 = v51 ^ (9 * ((table[HIBYTE(v56)] ^ table[BYTE1(v56) + 768] ^ table[BYTE3(v56) + 512] ^ table[BYTE5(v56) + 256]) + v55) - (table[(unsigned __int8)v57] ^ table[BYTE2(v57) + 256] ^ table[BYTE4(v57) + 512] ^ table[BYTE6(v57) + 768]));
  v59 = v52 ^ (9 * ((table[HIBYTE(v57)] ^ table[BYTE1(v57) + 768] ^ table[BYTE3(v57) + 512] ^ table[BYTE5(v57) + 256]) + v56) - (table[(unsigned __int8)v58] ^ table[BYTE2(v58) + 256] ^ table[BYTE4(v58) + 512] ^ table[BYTE6(v58) + 768]));
  v60 = v70 ^ (9 * ((table[HIBYTE(v58)] ^ table[BYTE1(v58) + 768] ^ table[BYTE3(v58) + 512] ^ table[BYTE5(v58) + 256]) + v57) - (table[(unsigned __int8)v59] ^ table[BYTE2(v59) + 256] ^ table[BYTE4(v59) + 512] ^ table[BYTE6(v59) + 768]));
  v61 = 9 * ((table[HIBYTE(v59)] ^ table[BYTE1(v59) + 768] ^ table[BYTE3(v59) + 512] ^ table[BYTE5(v59) + 256]) + v58) - (table[(unsigned __int8)v60] ^ table[BYTE2(v60) + 256] ^ table[BYTE4(v60) + 512] ^ table[BYTE6(v60) + 768]);
  v62 = table[BYTE3(v60) + 512] ^ table[BYTE5(v60) + 256];
  v63 = BYTE1(v60);
  v64 = HIBYTE(v60);
  v65 = v60 - md->sha512.state[0];
  v66 = table[v64] ^ table[v63 + 768] ^ v62;
  md->sha512.state[1] += v61;
  md->sha512.state[0] = v65;
  md->sha512.length = (9 * (v66 + v59)) ^ length;
  return 0i64;
}

