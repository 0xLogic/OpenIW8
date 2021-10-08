/*
==============
sha512_init
==============
*/
__int64 sha512_init(Hash_state *md)
{
  md->sha512.curlen = 0;
  md->sha512.length = 0i64;
  md->sha512.state[0] = 0x6A09E667F3BCC908i64;
  md->sha512.state[1] = 0xBB67AE8584CAA73Bui64;
  md->sha512.state[2] = 0x3C6EF372FE94F82Bi64;
  md->sha512.state[3] = 0xA54FF53A5F1D36F1ui64;
  md->sha512.state[4] = 0x510E527FADE682D1i64;
  md->sha512.state[5] = 0x9B05688C2B3E6C1Fui64;
  md->sha512.state[6] = 0x1F83D9ABFB41BD6Bi64;
  md->sha512.state[7] = 0x5BE0CD19137E2179i64;
  return 0i64;
}

/*
==============
sha512_process
==============
*/
int sha512_process(Hash_state *md, const unsigned __int8 *in, unsigned int inlen)
{
  unsigned int v4; 
  int result; 
  __int64 curlen; 
  unsigned int v8; 
  __int64 v9; 

  v4 = inlen;
  if ( md->sha512.curlen > 0x80 )
    return 16;
  if ( md->sha512.length + inlen < md->sha512.length )
    return 25;
  if ( inlen )
  {
    do
    {
      curlen = md->sha512.curlen;
      if ( (_DWORD)curlen || v4 < 0x80 )
      {
        v8 = v4;
        if ( v4 >= 128 - (int)curlen )
          v8 = 128 - curlen;
        v9 = v8;
        memcpy_0((char *)&md->data + curlen + 76, in, v8);
        md->sha512.curlen += v9;
        in += v9;
        v4 -= v9;
        if ( md->sha512.curlen == 128 )
        {
          result = sha512_compress(md, md->sha512.buf);
          if ( result )
            return result;
          md->sha512.length += 1024i64;
          md->sha512.curlen = 0;
        }
      }
      else
      {
        result = sha512_compress(md, (unsigned __int8 *)in);
        if ( result )
          return result;
        md->sha512.length += 1024i64;
        in += 128;
        v4 -= 128;
      }
    }
    while ( v4 );
  }
  return 0;
}

/*
==============
sha512_done
==============
*/
__int64 sha512_done(Hash_state *md, unsigned __int8 *out)
{
  __int64 curlen; 
  __int64 v6; 

  curlen = md->sha512.curlen;
  if ( (unsigned int)curlen >= 0x80 )
    return 16i64;
  md->sha512.length += 8 * curlen;
  md->sha512.buf[curlen] = 0x80;
  v6 = ++md->sha512.curlen;
  if ( (unsigned int)v6 > 0x70 )
  {
    for ( ; (unsigned int)v6 < 0x80; v6 = md->sha512.curlen )
    {
      md->sha512.buf[v6] = 0;
      ++md->sha512.curlen;
    }
    sha512_compress(md, md->sha512.buf);
    md->sha512.curlen = 0;
  }
  do
    md->sha512.buf[md->sha512.curlen++] = 0;
  while ( md->sha512.curlen < 0x78 );
  *(void **)((char *)&md->data + 196) = (void *)_byteswap_uint64(md->sha512.length);
  sha512_compress(md, md->sha512.buf);
  *(_QWORD *)out = _byteswap_uint64(md->sha512.state[0]);
  *((_QWORD *)out + 1) = _byteswap_uint64(md->sha512.state[1]);
  *((_QWORD *)out + 2) = _byteswap_uint64(md->sha512.state[2]);
  *((_QWORD *)out + 3) = _byteswap_uint64(md->sha512.state[3]);
  *((_QWORD *)out + 4) = _byteswap_uint64(md->sha512.state[4]);
  *((_QWORD *)out + 5) = _byteswap_uint64(md->sha512.state[5]);
  *((_QWORD *)out + 6) = _byteswap_uint64(md->sha512.state[6]);
  *((_QWORD *)out + 7) = _byteswap_uint64(md->sha512.state[7]);
  return 0i64;
}

/*
==============
sha512_test
==============
*/
__int64 sha512_test()
{
  return 2i64;
}

/*
==============
sha512_compress
==============
*/
__int64 sha512_compress(Hash_state *md, unsigned __int8 *buf)
{
  __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  __int64 *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int64 v33; 
  __int64 v34; 
  unsigned __int64 v36; 
  __int128 v37; 
  __int128 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  unsigned __int64 v42; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  __int64 v46[7]; 
  __int64 v47[66]; 

  v2 = 16i64;
  v36 = md->sha512.state[2];
  v37 = *(_OWORD *)(&md->data + 5);
  v38 = *(_OWORD *)(&md->data + 7);
  v3 = *((_QWORD *)buf + 14);
  v4 = md->sha512.state[0];
  v5 = md->sha512.state[1];
  v6 = md->sha512.state[3];
  v39 = _byteswap_uint64(*(_QWORD *)buf);
  v40 = _byteswap_uint64(*((_QWORD *)buf + 1));
  v41 = _byteswap_uint64(*((_QWORD *)buf + 2));
  v42 = _byteswap_uint64(*((_QWORD *)buf + 3));
  v43 = _byteswap_uint64(*((_QWORD *)buf + 4));
  v44 = _byteswap_uint64(*((_QWORD *)buf + 5));
  v45 = _byteswap_uint64(*((_QWORD *)buf + 6));
  v46[0] = _byteswap_uint64(*((_QWORD *)buf + 7));
  v46[1] = _byteswap_uint64(*((_QWORD *)buf + 8));
  v46[2] = _byteswap_uint64(*((_QWORD *)buf + 9));
  v46[3] = _byteswap_uint64(*((_QWORD *)buf + 10));
  v46[4] = _byteswap_uint64(*((_QWORD *)buf + 11));
  v46[5] = _byteswap_uint64(*((_QWORD *)buf + 12));
  v46[6] = _byteswap_uint64(*((_QWORD *)buf + 13));
  v7 = _byteswap_uint64(v3);
  v47[1] = _byteswap_uint64(*((_QWORD *)buf + 15));
  v8 = v47;
  v47[0] = v7;
  do
  {
    v9 = *(v8 - 13);
    v8 += 4;
    v10 = *(v8 - 9) + *(v8 - 18) + ((v7 >> 6) ^ __ROL8__(v7, 3) ^ __ROR8__(v7, 19)) + ((v9 >> 7) ^ __ROR8__(v9, 1) ^ __ROR8__(v9, 8));
    *(v8 - 2) = v10;
    v11 = *(v8 - 8) + (((unsigned __int64)*(v8 - 16) >> 7) ^ __ROR8__(*(v8 - 16), 1) ^ __ROR8__(*(v8 - 16), 8)) + (((unsigned __int64)*(v8 - 3) >> 6) ^ __ROL8__(*(v8 - 3), 3) ^ __ROR8__(*(v8 - 3), 19)) + v9;
    *(v8 - 1) = v11;
    v7 = *(v8 - 16) + *(v8 - 7) + (((unsigned __int64)*(v8 - 15) >> 7) ^ __ROR8__(*(v8 - 15), 1) ^ __ROR8__(*(v8 - 15), 8)) + ((v10 >> 6) ^ __ROL8__(v10, 3) ^ __ROR8__(v10, 19));
    *v8 = v7;
    v8[1] = *(v8 - 15) + *(v8 - 6) + (((unsigned __int64)*(v8 - 14) >> 7) ^ __ROR8__(*(v8 - 14), 1) ^ __ROR8__(*(v8 - 14), 8)) + ((v11 >> 6) ^ __ROL8__(v11, 3) ^ __ROR8__(v11, 19));
    --v2;
  }
  while ( v2 );
  v12 = v36;
  v13 = v37;
  v14 = 0i64;
  v15 = *((_QWORD *)&v37 + 1);
  v16 = *((_QWORD *)&v38 + 1);
  v17 = v38;
  do
  {
    v18 = v16 + *(unsigned __int64 *)((char *)&v39 + v14 * 8) + K[v14] + (v17 ^ v13 & (v17 ^ v15)) + (__ROR8__(v13, 14) ^ __ROR8__(v13, 18) ^ __ROL8__(v13, 23));
    v19 = v18 + v6;
    v20 = v18 + (__ROL8__(v4, 25) ^ __ROR8__(v4, 28) ^ __ROL8__(v4, 30)) + (v4 & v5 | v12 & (v4 | v5));
    v21 = v17 + *(unsigned __int64 *)((char *)&v40 + v14 * 8) + K[v14 + 1] + (v15 ^ v19 & (v13 ^ v15)) + (__ROR8__(v19, 14) ^ __ROR8__(v19, 18) ^ __ROL8__(v19, 23));
    v22 = v12 + v21;
    v23 = v21 + (__ROL8__(v20, 25) ^ __ROR8__(v20, 28) ^ __ROL8__(v20, 30)) + (v20 & v4 | v5 & (v20 | v4));
    v24 = v15 + *(unsigned __int64 *)((char *)&v41 + v14 * 8) + K[v14 + 2] + (v13 ^ v22 & (v13 ^ v19)) + (__ROR8__(v22, 14) ^ __ROR8__(v22, 18) ^ __ROL8__(v22, 23));
    v25 = v24 + v5;
    v26 = v24 + (__ROL8__(v23, 25) ^ __ROR8__(v23, 28) ^ __ROL8__(v23, 30)) + (v20 & v23 | v4 & (v20 | v23));
    v27 = v13 + *(unsigned __int64 *)((char *)&v42 + v14 * 8) + K[v14 + 3] + (v19 ^ v25 & (v22 ^ v19)) + (__ROR8__(v25, 14) ^ __ROR8__(v25, 18) ^ __ROL8__(v25, 23));
    v28 = v27 + v4;
    v29 = v27 + (__ROL8__(v26, 25) ^ __ROR8__(v26, 28) ^ __ROL8__(v26, 30)) + (v23 & v26 | v20 & (v23 | v26));
    v30 = v19 + K[v14 + 4] + *(unsigned __int64 *)((char *)&v43 + v14 * 8) + (v22 ^ v28 & (v22 ^ v25)) + (__ROR8__(v28, 14) ^ __ROR8__(v28, 18) ^ __ROL8__(v28, 23));
    v16 = v30 + v20;
    v6 = v30 + (__ROL8__(v29, 25) ^ __ROR8__(v29, 28) ^ __ROL8__(v29, 30)) + (v29 & v26 | v23 & (v29 | v26));
    v31 = v22 + K[v14 + 5] + *(unsigned __int64 *)((char *)&v44 + v14 * 8) + (v25 ^ v16 & (v28 ^ v25)) + (__ROR8__(v16, 14) ^ __ROR8__(v16, 18) ^ __ROL8__(v16, 23));
    v17 = v23 + v31;
    v12 = v31 + (__ROL8__(v6, 25) ^ __ROR8__(v6, 28) ^ __ROL8__(v6, 30)) + (v29 & v6 | v26 & (v29 | v6));
    v32 = v25 + K[v14 + 6] + v46[v14 - 1] + (v28 ^ v17 & (v16 ^ v28)) + (__ROR8__(v17, 14) ^ __ROR8__(v17, 18) ^ __ROL8__(v17, 23));
    v15 = v32 + v26;
    v5 = v32 + (__ROL8__(v12, 25) ^ __ROR8__(v12, 28) ^ __ROL8__(v12, 30)) + (v6 & v12 | v29 & (v6 | v12));
    v33 = K[v14 + 7] + v46[v14] + (v16 ^ v15 & (v17 ^ v16)) + (__ROR8__(v15, 14) ^ __ROR8__(v15, 18) ^ __ROL8__(v15, 23));
    v14 += 8i64;
    v34 = v28 + v33;
    v13 = v34 + v29;
    v4 = v34 + (__ROL8__(v5, 25) ^ __ROR8__(v5, 28) ^ __ROL8__(v5, 30)) + (v5 & v12 | v6 & (v5 | v12));
  }
  while ( v14 < 80 );
  md->sha512.state[0] += v4;
  md->sha512.state[1] += v5;
  md->sha512.state[2] += v12;
  md->sha512.state[3] += v6;
  md->sha512.state[4] += v13;
  md->sha512.state[5] += v15;
  md->sha512.state[6] += v17;
  md->sha512.state[7] += v16;
  return 0i64;
}

