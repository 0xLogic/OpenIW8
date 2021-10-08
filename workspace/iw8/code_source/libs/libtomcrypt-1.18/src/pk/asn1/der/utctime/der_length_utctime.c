/*
==============
der_length_utctime
==============
*/
__int64 der_length_utctime(ltc_utctime *utctime, unsigned int *outlen)
{
  if ( utctime->off_hh || utctime->off_mm )
  {
    *outlen = 19;
    return 0i64;
  }
  else
  {
    *outlen = 15;
    return 0i64;
  }
}

