/*
==============
md5_init
==============
*/
__int64 md5_init(Hash_state *md)
{
  __int64 result; 

  result = 0i64;
  md->sha256.state[0] = 1732584193;
  md->sha512.length = 0i64;
  md->sha256.state[1] = -271733879;
  md->sha256.state[2] = -1732584194;
  *(unsigned __int64 *)((char *)&md->sha512.state[1] + 4) = 271733878i64;
  return result;
}

/*
==============
md5_process
==============
*/
int md5_process(Hash_state *md, const unsigned __int8 *in, unsigned int inlen)
{
  unsigned int v4; 
  int result; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 

  v4 = inlen;
  if ( md->sha256.state[4] > 0x40 )
    return 16;
  if ( md->sha512.length + inlen < md->sha512.length )
    return 25;
  if ( inlen )
  {
    do
    {
      v7 = md->sha256.state[4];
      if ( (_DWORD)v7 || v4 < 0x40 )
      {
        v8 = v4;
        if ( v4 >= 64 - (int)v7 )
          v8 = 64 - v7;
        v9 = v8;
        memcpy_0((char *)&md->data + v7 + 28, in, v8);
        md->sha256.state[4] += v9;
        in += v9;
        v4 -= v9;
        if ( md->sha256.state[4] == 64 )
        {
          result = md5_compress(md, md->md5.buf);
          if ( result )
            return result;
          md->sha512.length += 512i64;
          md->sha256.state[4] = 0;
        }
      }
      else
      {
        result = md5_compress(md, (unsigned __int8 *)in);
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
md5_done
==============
*/
__int64 md5_done(Hash_state *md, unsigned __int8 *out)
{
  __int64 v2; 
  __int64 v6; 

  v2 = md->sha256.state[4];
  if ( (unsigned int)v2 >= 0x40 )
    return 16i64;
  md->sha512.length += (unsigned int)(8 * v2);
  md->md5.buf[v2] = 0x80;
  v6 = ++md->sha256.state[4];
  if ( (unsigned int)v6 > 0x38 )
  {
    for ( ; (unsigned int)v6 < 0x40; v6 = md->sha256.state[4] )
    {
      md->md5.buf[v6] = 0;
      ++md->sha256.state[4];
    }
    md5_compress(md, md->md5.buf);
    md->sha256.state[4] = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 < 0x38 )
  {
    do
LABEL_8:
      md->md5.buf[md->sha256.state[4]++] = 0;
    while ( md->sha256.state[4] < 0x38 );
  }
  *(void **)((char *)&md->data + 84) = (void *)md->sha512.length;
  md5_compress(md, md->md5.buf);
  *(_DWORD *)out = md->sha256.state[0];
  *((_DWORD *)out + 1) = md->sha256.state[1];
  *((_DWORD *)out + 2) = md->sha256.state[2];
  *((_DWORD *)out + 3) = md->sha256.state[3];
  return 0i64;
}

/*
==============
md5_test
==============
*/
__int64 md5_test()
{
  return 2i64;
}

/*
==============
md5_compress
==============
*/
__int64 md5_compress(Hash_state *md, unsigned __int8 *buf)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
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
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 

  v2 = md->sha256.state[1];
  v3 = md->sha256.state[2];
  v4 = *((_DWORD *)buf + 4);
  v83 = *((_DWORD *)buf + 2);
  v80 = *((_DWORD *)buf + 6);
  v5 = *((_DWORD *)buf + 1);
  v84 = *((_DWORD *)buf + 9);
  v6 = *(_DWORD *)buf;
  v7 = *((_DWORD *)buf + 3);
  v8 = *((_DWORD *)buf + 5);
  v82 = *((_DWORD *)buf + 11);
  v9 = *((_DWORD *)buf + 7);
  v10 = *((_DWORD *)buf + 8);
  v11 = *((_DWORD *)buf + 10);
  v12 = *((_DWORD *)buf + 12);
  v13 = *((_DWORD *)buf + 14);
  v81 = *((_DWORD *)buf + 13);
  v14 = *((_DWORD *)buf + 15);
  v15 = md->sha256.state[3];
  v85 = v4;
  v86 = v5;
  v16 = v2 + __ROL4__(md->sha256.state[0] + (v15 ^ v2 & (v3 ^ v15)) + v6 - 680876936, 7);
  v17 = v16 + __ROL4__(v5 + (v3 ^ v16 & (v2 ^ v3)) + v15 - 389564586, 12);
  v18 = v17 + __ROL4__(v83 + (v2 ^ v17 & (v16 ^ v2)) + v3 + 606105819, 17);
  v19 = v18 + __ROL4__(v7 + (v16 ^ v18 & (v16 ^ v17)) + v2 - 1044525330, 22);
  v20 = v19 + __ROL4__(v4 + (v17 ^ v19 & (v18 ^ v17)) + v16 - 176418897, 7);
  v21 = v20 + __ROL4__(v8 + (v18 ^ v20 & (v19 ^ v18)) + v17 + 1200080426, 12);
  v22 = v21 + __ROL4__(v80 + (v19 ^ v21 & (v20 ^ v19)) + v18 - 1473231341, 17);
  v23 = v22 + __ROL4__(v9 + (v20 ^ v22 & (v20 ^ v21)) + v19 - 45705983, 22);
  v24 = v23 + __ROL4__(v10 + (v21 ^ v23 & (v22 ^ v21)) + v20 + 1770035416, 7);
  v25 = v24 + __ROL4__(v84 + (v22 ^ v24 & (v23 ^ v22)) + v21 - 1958414417, 12);
  v26 = v25 + __ROL4__(v11 + (v23 ^ v25 & (v24 ^ v23)) + v22 - 42063, 17);
  v27 = v26 + __ROL4__(v82 + (v24 ^ v26 & (v24 ^ v25)) + v23 - 1990404162, 22);
  v28 = v27 + __ROL4__(v12 + (v25 ^ v27 & (v26 ^ v25)) + v24 + 1804603682, 7);
  v29 = v28 + __ROL4__(v81 + (v26 ^ v28 & (v27 ^ v26)) + v25 - 40341101, 12);
  v30 = v29 + __ROL4__(v13 + (v27 ^ v29 & (v28 ^ v27)) + v26 - 1502002290, 17);
  v31 = v30 + __ROL4__(v14 + (v28 ^ v30 & (v28 ^ v29)) + v27 + 1236535329, 22);
  v32 = v31 + __ROL4__(v5 + (v30 ^ v29 & (v31 ^ v30)) + v28 - 165796510, 5);
  v33 = v32 + __ROL4__(v80 + (v31 ^ v30 & (v32 ^ v31)) + v29 - 1069501632, 9);
  v34 = v33 + __ROL4__(v82 + (v32 ^ v31 & (v32 ^ v33)) + v30 + 643717713, 14);
  v35 = v34 + __ROL4__(v6 + (v33 ^ v32 & (v34 ^ v33)) + v31 - 373897302, 20);
  v36 = v35 + __ROL4__(v8 + (v34 ^ v33 & (v35 ^ v34)) + v32 - 701558691, 5);
  v37 = v36 + __ROL4__(v11 + (v35 ^ v34 & (v36 ^ v35)) + v33 + 38016083, 9);
  v38 = v37 + __ROL4__(v14 + (v36 ^ v35 & (v36 ^ v37)) + v34 - 660478335, 14);
  v39 = v38 + __ROL4__(v85 + (v37 ^ v36 & (v38 ^ v37)) + v35 - 405537848, 20);
  v40 = v39 + __ROL4__(v84 + (v38 ^ v37 & (v39 ^ v38)) + v36 + 568446438, 5);
  v41 = v40 + __ROL4__(v13 + (v39 ^ v38 & (v40 ^ v39)) + v37 - 1019803690, 9);
  v42 = v41 + __ROL4__(v7 + (v40 ^ v39 & (v40 ^ v41)) + v38 - 187363961, 14);
  v43 = v42 + __ROL4__(v10 + (v41 ^ v40 & (v42 ^ v41)) + v39 + 1163531501, 20);
  v44 = v43 + __ROL4__(v81 + (v42 ^ v41 & (v43 ^ v42)) + v40 - 1444681467, 5);
  v45 = v44 + __ROL4__(v83 + (v43 ^ v42 & (v44 ^ v43)) + v41 - 51403784, 9);
  v46 = v45 + __ROL4__(v9 + (v44 ^ v43 & (v44 ^ v45)) + v42 + 1735328473, 14);
  v47 = v46 + __ROL4__(v12 + (v45 ^ v44 & (v46 ^ v45)) + v43 - 1926607734, 20);
  v48 = v47 + __ROL4__(v8 + (v47 ^ v46 ^ v45) + v44 - 378558, 4);
  v49 = v48 + __ROL4__(v10 + (v48 ^ v47 ^ v46) + v45 - 2022574463, 11);
  v50 = v49 + __ROL4__(v82 + (v48 ^ v47 ^ v49) + v46 + 1839030562, 16);
  v51 = v50 + __ROL4__(v13 + (v48 ^ v50 ^ v49) + v47 - 35309556, 23);
  v52 = v51 + __ROL4__(v86 + (v51 ^ v50 ^ v49) + v48 - 1530992060, 4);
  v53 = v52 + __ROL4__(v85 + (v52 ^ v51 ^ v50) + v49 + 1272893353, 11);
  v54 = v53 + __ROL4__(v9 + (v52 ^ v51 ^ v53) + v50 - 155497632, 16);
  v55 = v54 + __ROL4__(v11 + (v52 ^ v54 ^ v53) + v51 - 1094730640, 23);
  v56 = v55 + __ROL4__(v81 + (v55 ^ v54 ^ v53) + v52 + 681279174, 4);
  v57 = v56 + __ROL4__(v6 + (v56 ^ v55 ^ v54) + v53 - 358537222, 11);
  v58 = v57 + __ROL4__(v7 + (v56 ^ v55 ^ v57) + v54 - 722521979, 16);
  v59 = v58 + __ROL4__(v80 + (v56 ^ v58 ^ v57) + v55 + 76029189, 23);
  v60 = v59 + __ROL4__(v84 + (v59 ^ v58 ^ v57) + v56 - 640364487, 4);
  v61 = v60 + __ROL4__(v12 + (v60 ^ v59 ^ v58) + v57 - 421815835, 11);
  v62 = v61 + __ROL4__(v14 + (v60 ^ v59 ^ v61) + v58 + 530742520, 16);
  v63 = v62 + __ROL4__(v83 + (v60 ^ v62 ^ v61) + v59 - 995338651, 23);
  v64 = v63 + __ROL4__(v6 + (v62 ^ (v63 | ~v61)) + v60 - 198630844, 6);
  v65 = v64 + __ROL4__(v9 + (v63 ^ (v64 | ~v62)) + v61 + 1126891415, 10);
  v66 = v65 + __ROL4__(v13 + (v64 ^ (v65 | ~v63)) + v62 - 1416354905, 15);
  v67 = v66 + __ROL4__(v8 + (v65 ^ (v66 | ~v64)) + v63 - 57434055, 21);
  v68 = v67 + __ROL4__(v12 + (v66 ^ (v67 | ~v65)) + v64 + 1700485571, 6);
  v69 = v68 + __ROL4__(v7 + (v67 ^ (v68 | ~v66)) + v65 - 1894986606, 10);
  v70 = v69 + __ROL4__(v11 + (v68 ^ (v69 | ~v67)) + v66 - 1051523, 15);
  v71 = v70 + __ROL4__(v86 + (v69 ^ (v70 | ~v68)) + v67 - 2054922799, 21);
  v72 = v71 + __ROL4__(v10 + (v70 ^ (v71 | ~v69)) + v68 + 1873313359, 6);
  v73 = v72 + __ROL4__(v14 + (v71 ^ (v72 | ~v70)) + v69 - 30611744, 10);
  v74 = v73 + __ROL4__(v80 + (v72 ^ (v73 | ~v71)) + v70 - 1560198380, 15);
  v75 = v74 + __ROL4__(v81 + (v73 ^ (v74 | ~v72)) + v71 + 1309151649, 21);
  v76 = v75 + __ROL4__(v85 + (v74 ^ (v75 | ~v73)) + v72 - 145523070, 6);
  v77 = v76 + __ROL4__(v82 + (v75 ^ (v76 | ~v74)) + v73 - 1120210379, 10);
  md->sha256.state[0] += v76;
  md->sha256.state[3] += v77;
  v78 = v77 + __ROL4__(v83 + (v76 ^ (v77 | ~v75)) + v74 + 718787259, 15);
  md->sha256.state[2] += v78;
  md->sha256.state[1] += v78 + __ROL4__(v84 + (v77 ^ (v78 | ~v76)) + v75 - 343485551, 21);
  return 0i64;
}

