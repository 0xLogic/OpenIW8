/*
==============
ParticleSystem_Register
==============
*/

const ParticleSystemDef *__fastcall ParticleSystem_Register(const char *name)
{
  return ?ParticleSystem_Register@@YAPEBUParticleSystemDef@@PEBD@Z(name);
}

/*
==============
Particle_HashString
==============
*/

ParticleStringHash __fastcall Particle_HashString(const char *name, unsigned __int64 nameLen)
{
  return ?Particle_HashString@@YA?AW4ParticleStringHash@@PEBD_K@Z(name, nameLen);
}

/*
==============
ParticleSystem_Register
==============
*/
const ParticleSystemDef *ParticleSystem_Register(const char *name)
{
  const char *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 

  if ( name && *name && isspace(*name) )
  {
    Com_PrintError(21, "ERROR: Effect name starts with a white-space character: '%s'. The default effect will be used instead.\n", name);
    return ParticleSystem_Register_FastFile("vfx/code/missing_vfx");
  }
  else
  {
    v3 = "vfx/";
    v4 = 4i64;
    v5 = 4i64;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v6 = (unsigned __int8)v3[name - "vfx/"];
      v7 = v5;
      v8 = *(unsigned __int8 *)v3++;
      --v5;
      if ( !v7 )
        break;
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
        {
          v11 = "vfx\\";
          if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v12 = (unsigned __int8)v11[name - "vfx\\"];
            v13 = v4;
            v14 = *(unsigned __int8 *)v11++;
            --v4;
            if ( !v13 )
              break;
            if ( v12 != v14 )
            {
              v15 = v12 + 32;
              if ( (unsigned int)(v12 - 65) > 0x19 )
                v15 = v12;
              v12 = v15;
              v16 = v14 + 32;
              if ( (unsigned int)(v14 - 65) > 0x19 )
                v16 = v14;
              if ( v12 != v16 )
              {
                v17 = "default";
                v18 = 0x7FFFFFFFi64;
                v19 = 0x7FFFFFFFi64;
                if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                while ( 1 )
                {
                  v20 = (unsigned __int8)v17[name - "default"];
                  v21 = v19;
                  v22 = *(unsigned __int8 *)v17++;
                  --v19;
                  if ( !v21 )
                    break;
                  if ( v20 != v22 )
                  {
                    v23 = v20 + 32;
                    if ( (unsigned int)(v20 - 65) > 0x19 )
                      v23 = v20;
                    v20 = v23;
                    v24 = v22 + 32;
                    if ( (unsigned int)(v22 - 65) > 0x19 )
                      v24 = v22;
                    if ( v20 != v24 )
                    {
                      v25 = "void";
                      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                        __debugbreak();
                      while ( 1 )
                      {
                        v26 = (unsigned __int8)v25[name - "void"];
                        v27 = v18;
                        v28 = *(unsigned __int8 *)v25++;
                        --v18;
                        if ( !v27 )
                          break;
                        if ( v26 != v28 )
                        {
                          v29 = v26 + 32;
                          if ( (unsigned int)(v26 - 65) > 0x19 )
                            v29 = v26;
                          v26 = v29;
                          v30 = v28 + 32;
                          if ( (unsigned int)(v28 - 65) > 0x19 )
                            v30 = v28;
                          if ( v26 != v30 )
                          {
                            Com_PrintError(21, "ERROR: Trying to register an invalid effect: '%s'. The default effect will be used instead.\n", name);
                            return ParticleSystem_Register_FastFile("vfx/code/missing_vfx");
                          }
                        }
                        if ( !v26 )
                          return ParticleSystem_Register_FastFile(name);
                      }
                      return ParticleSystem_Register_FastFile(name);
                    }
                  }
                  if ( !v20 )
                    return ParticleSystem_Register_FastFile(name);
                }
                return ParticleSystem_Register_FastFile(name);
              }
            }
            if ( !v12 )
              return ParticleSystem_Register_FastFile(name);
          }
          return ParticleSystem_Register_FastFile(name);
        }
      }
    }
    while ( v6 );
    return ParticleSystem_Register_FastFile(name);
  }
}

/*
==============
ParticleSystem_Register_FastFile
==============
*/
const ParticleSystemDef *ParticleSystem_Register_FastFile(const char *name)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 

  v1 = "vfx/";
  v3 = 4i64;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v4 = (unsigned __int8)v1[name - "vfx/"];
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
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleloadobj.cpp", 207, ASSERT_TYPE_ASSERT, "( ( !I_strnicmp( name, \"vfx/\", 4 ) ) )", "( name ) = %s", name) )
          __debugbreak();
        break;
      }
    }
  }
  while ( v4 );
  return DB_FindXAssetHeader(ASSET_TYPE_VFX, name, 1).vfx;
}

/*
==============
Particle_HashString
==============
*/
__int64 Particle_HashString(const char *name, unsigned __int64 nameLen)
{
  unsigned __int64 v4; 
  char dest[272]; 

  if ( !nameLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleloadobj.cpp", 277, ASSERT_TYPE_ASSERT, "(nameLen > 0)", (const char *)&queryFormat, "nameLen > 0") )
    __debugbreak();
  Core_strncpy(dest, 0x104ui64, name, nameLen);
  I_strlwr(dest);
  v4 = j_CoD_XXH64(dest, nameLen, 0i64);
  return HIDWORD(v4) ^ (unsigned int)v4;
}

