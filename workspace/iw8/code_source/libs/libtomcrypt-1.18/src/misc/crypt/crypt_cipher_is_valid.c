/*
==============
cipher_is_valid
==============
*/
__int64 cipher_is_valid(int idx)
{
  if ( (unsigned int)idx <= 0x1F && cipher_descriptor[idx].name )
    return 0i64;
  else
    return 10i64;
}

