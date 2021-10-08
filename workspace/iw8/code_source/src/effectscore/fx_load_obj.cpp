/*
==============
FX_RegisterVectorField
==============
*/

VectorField *__fastcall FX_RegisterVectorField(const char *name)
{
  return ?FX_RegisterVectorField@@YAPEAUVectorField@@PEBD@Z(name);
}

/*
==============
FX_RegisterVectorField_FastFile
==============
*/

VectorField *__fastcall FX_RegisterVectorField_FastFile(const char *name)
{
  return ?FX_RegisterVectorField_FastFile@@YAPEAUVectorField@@PEBD@Z(name);
}

/*
==============
FX_RegisterVectorField
==============
*/
VectorField *FX_RegisterVectorField(const char *name)
{
  const char *v1; 
  const char *v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  char dest[272]; 

  v1 = "vectorfields/";
  v2 = name;
  v3 = 12i64;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v4 = (unsigned __int8)v1[v2 - "vectorfields/"];
    v5 = v3;
    v6 = *(unsigned __int8 *)v1++;
    --v3;
    if ( !v5 )
      break;
    if ( v4 != v6 )
    {
      v7 = v4 + 32;
      if ( (unsigned int)(v4 - 65) > 0x19 )
        v7 = v4;
      v4 = v7;
      v8 = v6 + 32;
      if ( (unsigned int)(v6 - 65) > 0x19 )
        v8 = v6;
      if ( v4 != v8 )
      {
        Com_sprintf(dest, 0x104ui64, "vectorfields/%s", v2);
        v2 = dest;
        break;
      }
    }
  }
  while ( v4 );
  return DB_FindXAssetHeader(ASSET_TYPE_VECTORFIELD, v2, 1).vectorField;
}

/*
==============
FX_RegisterVectorField_FastFile
==============
*/
VectorField *FX_RegisterVectorField_FastFile(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_VECTORFIELD, name, 1).vectorField;
}

