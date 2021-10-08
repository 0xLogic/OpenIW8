/*
==============
der_length_generalizedtime
==============
*/
__int64 der_length_generalizedtime(ltc_generalizedtime *gtime, unsigned int *outlen)
{
  unsigned int fs; 
  int v5; 
  int v7; 

  fs = gtime->fs;
  v5 = 17;
  if ( fs )
  {
    do
    {
      ++v5;
      fs /= 0xAu;
    }
    while ( fs );
    if ( gtime->off_hh || (v7 = 1, gtime->off_mm) )
      v7 = 5;
    *outlen = v5 + v7;
    return 0i64;
  }
  else
  {
    *outlen = 17;
    return 0i64;
  }
}

