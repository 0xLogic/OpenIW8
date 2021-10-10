/*
==============
sha384_init
==============
*/
__int64 sha384_init(Hash_state *md)
{
  md->sha512.curlen = 0;
  md->sha512.length = 0i64;
  md->sha512.state[0] = 0xCBBB9D5DC1059ED8ui64;
  md->sha512.state[1] = 0x629A292A367CD507i64;
  md->sha512.state[2] = 0x9159015A3070DD17ui64;
  md->sha512.state[3] = 0x152FECD8F70E5939i64;
  md->sha512.state[4] = 0x67332667FFC00B31i64;
  md->sha512.state[5] = 0x8EB44A8768581511ui64;
  md->sha512.state[6] = 0xDB0C2E0D64F98FA7ui64;
  md->sha512.state[7] = 0x47B5481DBEFA4FA4i64;
  return 0i64;
}

/*
==============
sha384_done
==============
*/
__int64 sha384_done(Hash_state *md, unsigned __int8 *out)
{
  __int128 v4; 
  unsigned __int8 outa[32]; 
  __int128 v6; 

  if ( md->sha512.curlen >= 0x80 )
    return 16i64;
  j_sha512_done(md, outa);
  v4 = v6;
  *(__m256i *)out = *(__m256i *)outa;
  *((_OWORD *)out + 2) = v4;
  return 0i64;
}

/*
==============
sha384_test
==============
*/
__int64 sha384_test()
{
  return 2i64;
}

