/*
==============
prng_is_valid
==============
*/
__int64 prng_is_valid(int idx)
{
  if ( (unsigned int)idx <= 0x1F && prng_descriptor[idx].name )
    return 0i64;
  else
    return 12i64;
}

