/*
==============
BG_BlendSpace2D_InitDefs
==============
*/

void __fastcall BG_BlendSpace2D_InitDefs(bool isFullInit)
{
  ?BG_BlendSpace2D_InitDefs@@YAX_N@Z(isFullInit);
}

/*
==============
BG_BlendSpace2D_ClearDefs
==============
*/

void BG_BlendSpace2D_ClearDefs(void)
{
  ?BG_BlendSpace2D_ClearDefs@@YAXXZ();
}

/*
==============
BG_BlendSpace2D_ClearDefs
==============
*/
void BG_BlendSpace2D_ClearDefs(void)
{
  s_bgBlendSpace2DDefsInitialized = 0;
  memset_0(s_bgBlendSpace2DDefs, 0, sizeof(s_bgBlendSpace2DDefs));
}

/*
==============
BG_BlendSpace2D_InitDefs
==============
*/
void BG_BlendSpace2D_InitDefs(bool isFullInit)
{
  if ( isFullInit )
  {
    if ( s_bgBlendSpace2DDefsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 52, ASSERT_TYPE_ASSERT, "(!s_bgBlendSpace2DDefsInitialized)", (const char *)&queryFormat, "!s_bgBlendSpace2DDefsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllBlendSpace2DStrings(BG_BlendSpace2D_LoadCache_Callback);
    s_bgBlendSpace2DDefsInitialized = 1;
  }
  else
  {
    if ( !s_bgBlendSpace2DDefsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 64, ASSERT_TYPE_ASSERT, "(s_bgBlendSpace2DDefsInitialized)", (const char *)&queryFormat, "s_bgBlendSpace2DDefsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllBlendSpace2DStrings(BG_BlendSpace2D_Validate_Callback);
  }
}

/*
==============
BG_BlendSpace2D_LoadCache_Callback
==============
*/
void BG_BlendSpace2D_LoadCache_Callback(const unsigned int blendSpace2DIndex, const char *blendSpace2DName)
{
  BlendSpace2DDef *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = blendSpace2DIndex;
  if ( !blendSpace2DName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 32, ASSERT_TYPE_ASSERT, "(blendSpace2DName)", (const char *)&queryFormat, "blendSpace2DName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x3F )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9EEB0, 186i64);
  if ( *blendSpace2DName )
    v2 = BlendSpace2D_Register(blendSpace2DName);
  s_bgBlendSpace2DDefs[v3] = v2;
}

/*
==============
BG_BlendSpace2D_Validate_Callback
==============
*/
void BG_BlendSpace2D_Validate_Callback(const unsigned int blendSpace2DIndex, const char *blendSpace2DName)
{
  __int64 v2; 
  const char *v3; 
  BlendSpace2DDef **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = blendSpace2DIndex;
  v3 = blendSpace2DName;
  if ( !blendSpace2DName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 20, ASSERT_TYPE_ASSERT, "(blendSpace2DName)", (const char *)&queryFormat, "blendSpace2DName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x3F )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 21, ASSERT_TYPE_ASSERT, "(unsigned)( blendSpace2DIndex ) < (unsigned)( ((1<<6) - 1) )", "blendSpace2DIndex doesn't index INVALID_BLENDSPACE2D_DEF\n\t%i not in [0, %i)", v13, 63) )
      __debugbreak();
  }
  v4 = &s_bgBlendSpace2DDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 23, ASSERT_TYPE_ASSERT, "(s_bgBlendSpace2DDefs[blendSpace2DIndex])", (const char *)&queryFormat, "s_bgBlendSpace2DDefs[blendSpace2DIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_blendspace2d.cpp", 24, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_bgBlendSpace2DDefs[blendSpace2DIndex]->name, blendSpace2DName ))", "%s\n\tInvalid blend space 2D asset mapping", "!I_stricmp( s_bgBlendSpace2DDefs[blendSpace2DIndex]->name, blendSpace2DName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

