/*
==============
find_hash_id
==============
*/
__int64 find_hash_id(unsigned __int8 ID)
{
  unsigned int v1; 
  unsigned __int8 *p_ID; 

  v1 = 0;
  p_ID = &hash_descriptor[0].ID;
  while ( *p_ID != ID )
  {
    ++v1;
    p_ID += 128;
    if ( (__int64)p_ID >= (__int64)&unk_156675828 )
      return 0xFFFFFFFFi64;
  }
  if ( !hash_descriptor[(__int64)(int)v1].name )
    return (unsigned int)-1;
  return v1;
}

