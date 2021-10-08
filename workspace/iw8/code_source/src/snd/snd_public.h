/*
==============
SND_HashName
==============
*/

unsigned int __fastcall SND_HashName(const char *name)
{
  return ?SND_HashName@@YAIPEBD@Z(name);
}

/*
==============
SND_HashName
==============
*/
__int64 SND_HashName(const char *name)
{
  const char *v1; 
  char v2; 
  unsigned int v3; 
  char v4; 

  v1 = name;
  if ( !name )
    return 0i64;
  v2 = *name;
  if ( !*name )
    return 0i64;
  v3 = 5381;
  do
  {
    ++v1;
    v4 = v2 | 0x20;
    if ( (unsigned int)(v2 - 65) >= 0x1A )
      v4 = v2;
    v3 = 65599 * v3 + v4;
    v2 = *v1;
  }
  while ( *v1 );
  if ( !v3 )
    return 1;
  return v3;
}

