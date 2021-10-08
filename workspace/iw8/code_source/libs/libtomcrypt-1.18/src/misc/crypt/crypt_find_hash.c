/*
==============
find_hash
==============
*/
__int64 find_hash(const char *name)
{
  ltc_hash_descriptor *v2; 
  int v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  int v7; 

  v2 = hash_descriptor;
  v3 = 0;
  while ( 1 )
  {
    v4 = v2->name;
    if ( v2->name )
    {
      v5 = (const char *)(name - v4);
      do
      {
        v6 = (unsigned __int8)v5[(_QWORD)v4];
        v7 = *(unsigned __int8 *)v4 - v6;
        if ( v7 )
          break;
        ++v4;
      }
      while ( v6 );
      if ( !v7 )
        break;
    }
    ++v3;
    ++v2;
    if ( v3 >= 32 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v3;
}

