/*
==============
sha1_init
==============
*/
__int64 sha1_init(Hash_state *md)
{
  __int64 result; 

  result = 0i64;
  md->sha256.state[0] = 1732584193;
  md->sha256.state[5] = 0;
  md->sha512.length = 0i64;
  md->sha256.state[1] = -271733879;
  md->sha512.state[1] = 0x1032547698BADCFEi64;
  md->sha256.state[4] = -1009589776;
  return result;
}

/*
==============
sha1_process
==============
*/
int sha1_process(Hash_state *md, const unsigned __int8 *in, unsigned int inlen)
{
  unsigned int v4; 
  int result; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 

  v4 = inlen;
  if ( md->sha256.state[5] > 0x40 )
    return 16;
  if ( md->sha512.length + inlen < md->sha512.length )
    return 25;
  if ( inlen )
  {
    do
    {
      v7 = md->sha256.state[5];
      if ( (_DWORD)v7 || v4 < 0x40 )
      {
        v8 = v4;
        if ( v4 >= 64 - (int)v7 )
          v8 = 64 - v7;
        v9 = v8;
        memcpy_0((char *)&md->data + v7 + 32, in, v8);
        md->sha256.state[5] += v9;
        in += v9;
        v4 -= v9;
        if ( md->sha256.state[5] == 64 )
        {
          result = sha1_compress(md, md->sha1.buf);
          if ( result )
            return result;
          md->sha512.length += 512i64;
          md->sha256.state[5] = 0;
        }
      }
      else
      {
        result = sha1_compress(md, (unsigned __int8 *)in);
        if ( result )
          return result;
        md->sha512.length += 512i64;
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
sha1_done
==============
*/
__int64 sha1_done(Hash_state *md, unsigned __int8 *out)
{
  __int64 v2; 
  __int64 v6; 

  v2 = md->sha256.state[5];
  if ( (unsigned int)v2 >= 0x40 )
    return 16i64;
  md->sha512.length += (unsigned int)(8 * v2);
  md->sha1.buf[v2] = 0x80;
  v6 = ++md->sha256.state[5];
  if ( (unsigned int)v6 > 0x38 )
  {
    for ( ; (unsigned int)v6 < 0x40; v6 = md->sha256.state[5] )
    {
      md->sha1.buf[v6] = 0;
      ++md->sha256.state[5];
    }
    sha1_compress(md, md->sha1.buf);
    md->sha256.state[5] = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 < 0x38 )
  {
    do
LABEL_8:
      md->sha1.buf[md->sha256.state[5]++] = 0;
    while ( md->sha256.state[5] < 0x38 );
  }
  *((_QWORD *)&md->data + 11) = _byteswap_uint64(md->sha512.length);
  sha1_compress(md, md->sha1.buf);
  *(_DWORD *)out = _byteswap_ulong(md->sha256.state[0]);
  *((_DWORD *)out + 1) = _byteswap_ulong(md->sha256.state[1]);
  *((_DWORD *)out + 2) = _byteswap_ulong(md->sha256.state[2]);
  *((_DWORD *)out + 3) = _byteswap_ulong(md->sha256.state[3]);
  *((_DWORD *)out + 4) = _byteswap_ulong(md->sha256.state[4]);
  return 0i64;
}

/*
==============
sha1_test
==============
*/
__int64 sha1_test()
{
  return 2i64;
}

/*
==============
sha1_compress
==============
*/
__int64 sha1_compress(Hash_state *md, unsigned __int8 *buf)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  int *v8; 
  int *v9; 
  int *v10; 
  int v11; 
  int *v12; 
  int v13; 
  int *v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  int v32; 
  int v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  int v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  __int64 v54; 
  int v55; 
  int v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  __int64 v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  __int64 v75; 
  int v76; 
  int v77; 
  int v78; 
  __int64 v79; 
  int v80; 
  int v81; 
  int v82; 
  __int64 v83; 
  int v84; 
  unsigned int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  __int64 v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  __int64 v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  __int64 v101; 
  int v102; 
  int v103; 
  int v104; 
  int v106; 
  int v107; 
  unsigned __int64 v108; 
  unsigned int v109; 
  unsigned int v110; 
  unsigned int v111; 
  int v113[80]; 

  v2 = 2;
  v113[0] = _byteswap_ulong(*(_DWORD *)buf);
  v113[1] = _byteswap_ulong(*((_DWORD *)buf + 1));
  v113[2] = _byteswap_ulong(*((_DWORD *)buf + 2));
  v113[3] = _byteswap_ulong(*((_DWORD *)buf + 3));
  v113[4] = _byteswap_ulong(*((_DWORD *)buf + 4));
  v113[5] = _byteswap_ulong(*((_DWORD *)buf + 5));
  v113[6] = _byteswap_ulong(*((_DWORD *)buf + 6));
  v113[7] = _byteswap_ulong(*((_DWORD *)buf + 7));
  v113[8] = _byteswap_ulong(*((_DWORD *)buf + 8));
  v113[9] = _byteswap_ulong(*((_DWORD *)buf + 9));
  v113[10] = _byteswap_ulong(*((_DWORD *)buf + 10));
  v113[11] = _byteswap_ulong(*((_DWORD *)buf + 11));
  v113[12] = _byteswap_ulong(*((_DWORD *)buf + 12));
  v113[13] = _byteswap_ulong(*((_DWORD *)buf + 13));
  v113[14] = _byteswap_ulong(*((_DWORD *)buf + 14));
  v113[15] = _byteswap_ulong(*((_DWORD *)buf + 15));
  v111 = md->sha256.state[0];
  v110 = md->sha256.state[1];
  v108 = md->sha512.state[1];
  v109 = md->sha256.state[4];
  v106 = 2;
  do
  {
    v3 = (unsigned int)(v2 + 2);
    v4 = (unsigned int)(v2 + 8);
    v5 = v113[v2];
    v6 = v113[v2 + 11];
    v107 = v113[v2 + 6];
    v7 = __ROL4__(v107 ^ v6 ^ v5 ^ v113[v2 - 2], 1);
    v113[v2 + 14] = v7;
    v8 = &v113[v2 + 1];
    v9 = &v113[v2 + 7];
    v10 = &v113[v2 + 12];
    v11 = __ROL4__(*v10 ^ *v9 ^ *v8 ^ v113[v2 - 1], 1);
    v113[v2 + 15] = v11;
    v12 = &v113[v2 + 13];
    v13 = __ROL4__(*v12 ^ v113[v3] ^ v5 ^ v113[v4], 1);
    v113[v2 + 16] = v13;
    v14 = &v113[v2 + 3];
    v15 = __ROL4__(*v14 ^ v7 ^ *v8 ^ v113[v2 + 9], 1);
    v113[v106 + 17] = v15;
    v16 = __ROL4__(v11 ^ v113[v106 + 4] ^ v113[v3] ^ v113[v106 + 10], 1);
    v113[v106 + 18] = v16;
    v113[v106 + 19] = __ROL4__(v113[v106 + 5] ^ *v14 ^ v6 ^ v13, 1);
    v113[v106 + 20] = __ROL4__(*v10 ^ v107 ^ v15 ^ v113[v106 + 4], 1);
    v113[v106 + 21] = __ROL4__(v113[v106 + 5] ^ *v12 ^ v16 ^ *v9, 1);
    v2 = v4;
    v106 = v4;
  }
  while ( (unsigned int)(v4 + 14) < 0x50 );
  v17 = v108;
  v18 = 0i64;
  v19 = HIDWORD(v108);
  v20 = v109;
  v21 = v110;
  v22 = v111;
  do
  {
    v23 = v21 & (v17 ^ v19);
    v24 = __ROL4__(v21, 30);
    v25 = v113[v18] + (v19 ^ v23) + __ROL4__(v22, 5);
    v26 = (unsigned int)(v18 + 1);
    v27 = v17 ^ v22 & (v24 ^ v17);
    v28 = __ROL4__(v22, 30);
    v29 = v20 + v25 + 1518500249;
    v30 = v113[v26] + v27 + __ROL4__(v29, 5);
    v31 = (unsigned int)(v26 + 1);
    v32 = v24 ^ v29 & (v28 ^ v24);
    v20 = __ROL4__(v29, 30);
    v33 = v19 + v30 + 1518500249;
    v34 = v113[v31] + v32 + __ROL4__(v33, 5);
    v35 = (unsigned int)(v31 + 1);
    v36 = v28 ^ v33 & (v28 ^ v20);
    v19 = __ROL4__(v33, 30);
    v37 = v17 + v34 + 1518500249;
    v38 = v113[v35] + v36 + __ROL4__(v37, 5);
    v39 = (unsigned int)(v35 + 1);
    v40 = v20 ^ v37 & (v19 ^ v20);
    v17 = __ROL4__(v37, 30);
    v21 = v24 + v38 + 1518500249;
    v41 = v113[v39] + v40 + __ROL4__(v21, 5);
    v18 = (unsigned int)(v39 + 1);
    v22 = v28 + v41 + 1518500249;
  }
  while ( (unsigned int)v18 < 0x14 );
  for ( ; (unsigned int)v18 < 0x28; v22 = v60 + v59 + 1859775393 )
  {
    v42 = v113[v18] + __ROL4__(v22, 5);
    v43 = v20 + (v21 ^ v17 ^ v19);
    v44 = __ROL4__(v21, 30);
    v45 = (unsigned int)(v18 + 1);
    v46 = v43 + v42 + 1859775393;
    v47 = v113[v45] + __ROL4__(v46, 5);
    v48 = v19 + (v22 ^ v44 ^ v17);
    v49 = (unsigned int)(v45 + 1);
    v50 = __ROL4__(v22, 30);
    v51 = v48 + v47 + 1859775393;
    v52 = v44 ^ v46;
    v20 = __ROL4__(v46, 30);
    v53 = v113[v49] + __ROL4__(v51, 5);
    v54 = (unsigned int)(v49 + 1);
    v55 = v17 + (v50 ^ v52) + v53 + 1859775393;
    v56 = v113[v54] + __ROL4__(v55, 5);
    v57 = v44 + (v50 ^ v51 ^ v20);
    v58 = (unsigned int)(v54 + 1);
    v19 = __ROL4__(v51, 30);
    v21 = v57 + v56 + 1859775393;
    v59 = v113[v58] + __ROL4__(v21, 5);
    v60 = v50 + (v55 ^ v19 ^ v20);
    v18 = (unsigned int)(v58 + 1);
    v17 = __ROL4__(v55, 30);
  }
  for ( ; (unsigned int)v18 < 0x3C; v22 = v68 + v81 + __ROL4__(v21, 5) - 1894007588 )
  {
    v61 = v21 & v17;
    v62 = v19 & (v21 | v17);
    v63 = __ROL4__(v21, 30);
    v64 = v113[v18] + (v61 | v62);
    v65 = (unsigned int)(v18 + 1);
    v66 = v20 + v64 + __ROL4__(v22, 5) - 1894007588;
    v67 = v22 & v63 | v17 & (v22 | v63);
    v68 = __ROL4__(v22, 30);
    v69 = v19 + v113[v65] + v67;
    v70 = (unsigned int)(v65 + 1);
    v71 = v68 & v66;
    v72 = v69 + __ROL4__(v66, 5) - 1894007588;
    v73 = v68 | v66;
    v20 = __ROL4__(v66, 30);
    v74 = v113[v70] + (v71 | v63 & v73);
    v75 = (unsigned int)(v70 + 1);
    v76 = v17 + v74 + __ROL4__(v72, 5) - 1894007588;
    v77 = v72 & v20 | v68 & (v72 | v20);
    v19 = __ROL4__(v72, 30);
    v78 = v63 + v113[v75] + v77;
    v79 = (unsigned int)(v75 + 1);
    v21 = v78 + __ROL4__(v76, 5) - 1894007588;
    v80 = v76 & v19 | v20 & (v76 | v19);
    v17 = __ROL4__(v76, 30);
    v81 = v113[v79] + v80;
    v18 = (unsigned int)(v79 + 1);
  }
  for ( ; (unsigned int)v18 < 0x50; v22 = v104 + __ROL4__(v21, 5) - 899497514 )
  {
    v82 = v113[v18];
    v83 = (unsigned int)(v18 + 1);
    v84 = __ROL4__(v22, 5);
    v85 = v20 + (v21 ^ v17 ^ v19) + v82;
    v86 = __ROL4__(v21, 30);
    v87 = v22 ^ v86 ^ v17;
    v88 = __ROL4__(v22, 30);
    v89 = v85 + v84 - 899497514;
    v90 = v87 + v113[v83];
    v91 = (unsigned int)(v83 + 1);
    v92 = __ROL4__(v89, 5);
    v93 = v86 ^ v89;
    v20 = __ROL4__(v89, 30);
    v94 = v19 + v90 + v92 - 899497514;
    v95 = (v88 ^ v93) + v113[v91];
    v96 = (unsigned int)(v91 + 1);
    v97 = __ROL4__(v94, 5);
    v98 = v94 ^ v20;
    v19 = __ROL4__(v94, 30);
    v99 = v17 + v95 + v97 - 899497514;
    v100 = (v88 ^ v98) + v113[v96];
    v101 = (unsigned int)(v96 + 1);
    v102 = __ROL4__(v99, 5);
    v103 = v99 ^ v19 ^ v20;
    v17 = __ROL4__(v99, 30);
    v21 = v86 + v100 + v102 - 899497514;
    v104 = v88 + v103 + v113[v101];
    v18 = (unsigned int)(v101 + 1);
  }
  md->sha256.state[1] += v21;
  md->sha256.state[2] += v17;
  md->sha256.state[3] += v19;
  md->sha256.state[4] += v20;
  md->sha256.state[0] = v22 + v111;
  return 0i64;
}

