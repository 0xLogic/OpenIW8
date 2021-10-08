/*
==============
Com_SurfaceTypeFromName
==============
*/

int __fastcall Com_SurfaceTypeFromName(const char *name)
{
  return ?Com_SurfaceTypeFromName@@YAHPEBD@Z(name);
}

/*
==============
Com_SurfaceTypeToName
==============
*/

const char *__fastcall Com_SurfaceTypeToName(int iTypeIndex)
{
  return ?Com_SurfaceTypeToName@@YAPEBDH@Z(iTypeIndex);
}

/*
==============
Com_IsSurfaceTypeBreakableGlass
==============
*/

bool __fastcall Com_IsSurfaceTypeBreakableGlass(int surfFlag)
{
  return ?Com_IsSurfaceTypeBreakableGlass@@YA_NH@Z(surfFlag);
}

/*
==============
Com_IsSurfaceTypeBreakableGlass
==============
*/
bool Com_IsSurfaceTypeBreakableGlass(int surfFlag)
{
  int v1; 

  v1 = surfFlag & 0x1F80000;
  return v1 == 4718592 || v1 == 20971520;
}

/*
==============
Com_SurfaceTypeFromName
==============
*/
__int64 Com_SurfaceTypeFromName(const char *name)
{
  infoParm_t *v2; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  v2 = infoParms;
  v3 = 0;
  do
  {
    v4 = v2->name;
    v5 = 0x7FFFFFFFi64;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(name - v4);
    while ( 1 )
    {
      v7 = (unsigned __int8)v4[(_QWORD)v6];
      v8 = v5;
      v9 = *(unsigned __int8 *)v4++;
      --v5;
      if ( !v8 )
        return (infoParms[v3].surfaceFlags >> 19) & 0x3F;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return (infoParms[v3].surfaceFlags >> 19) & 0x3F;
    }
    ++v3;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&infoParms[64] );
  return 0xFFFFFFFFi64;
}

/*
==============
Com_SurfaceTypeToName
==============
*/
const char *Com_SurfaceTypeToName(int iTypeIndex)
{
  __int64 v1; 

  if ( (unsigned int)(iTypeIndex - 1) > 0x3E )
    return "default";
  v1 = iTypeIndex;
  if ( ((infoParms[iTypeIndex].surfaceFlags >> 19) & 0x3F) != iTypeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\surfaceflags.cpp", 183, ASSERT_TYPE_SANITY, "( ((byte) (((infoParms[iTypeIndex].surfaceFlags) & (((1 << 6) - 1) << 19)) >> 19)) == iTypeIndex )", (const char *)&queryFormat, "SURF_TYPEINDEX( infoParms[iTypeIndex].surfaceFlags ) == iTypeIndex") )
    __debugbreak();
  return infoParms[v1].name;
}

