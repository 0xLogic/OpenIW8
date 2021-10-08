/*
==============
hash_is_valid
==============
*/
__int64 hash_is_valid(int idx)
{
  if ( (unsigned int)idx <= 0x1F && hash_descriptor[(__int64)idx].name )
    return 0i64;
  else
    return 11i64;
}

