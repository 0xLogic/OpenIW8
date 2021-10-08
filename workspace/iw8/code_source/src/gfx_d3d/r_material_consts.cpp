/*
==============
R_GetCodeRWBufferName
==============
*/

const char *__fastcall R_GetCodeRWBufferName(unsigned int codeRWBuffer)
{
  return ?R_GetCodeRWBufferName@@YAPEBDI@Z(codeRWBuffer);
}

/*
==============
R_GetCodeBufferName
==============
*/

const char *__fastcall R_GetCodeBufferName(unsigned int codeBuffer)
{
  return ?R_GetCodeBufferName@@YAPEBDI@Z(codeBuffer);
}

/*
==============
R_GetStreamSourceName
==============
*/

const char *__fastcall R_GetStreamSourceName(MaterialStreamSource streamSource)
{
  return ?R_GetStreamSourceName@@YAPEBDW4MaterialStreamSource@@@Z(streamSource);
}

/*
==============
R_GetStreamSourceSemanticIndex
==============
*/

unsigned int __fastcall R_GetStreamSourceSemanticIndex(MaterialStreamSource streamSource)
{
  return ?R_GetStreamSourceSemanticIndex@@YAIW4MaterialStreamSource@@@Z(streamSource);
}

/*
==============
R_GetCodeTextureIndexFromName
==============
*/

MaterialCodeTexture __fastcall R_GetCodeTextureIndexFromName(const char *name)
{
  return ?R_GetCodeTextureIndexFromName@@YA?AW4MaterialCodeTexture@@PEBD@Z(name);
}

/*
==============
R_GetCustomSamplerName
==============
*/

const char *__fastcall R_GetCustomSamplerName(unsigned int customSampler)
{
  return ?R_GetCustomSamplerName@@YAPEBDI@Z(customSampler);
}

/*
==============
R_GetConstantBufferName
==============
*/

const char *__fastcall R_GetConstantBufferName(unsigned int constantBuffer)
{
  return ?R_GetConstantBufferName@@YAPEBDI@Z(constantBuffer);
}

/*
==============
R_GetCustomBufferName
==============
*/

const char *__fastcall R_GetCustomBufferName(unsigned int customBuffer)
{
  return ?R_GetCustomBufferName@@YAPEBDI@Z(customBuffer);
}

/*
==============
R_GetCodePersistentTextureName
==============
*/

const char *__fastcall R_GetCodePersistentTextureName(unsigned int codePersistentTexture)
{
  return ?R_GetCodePersistentTextureName@@YAPEBDI@Z(codePersistentTexture);
}

/*
==============
R_GetConstantLayoutName
==============
*/

const char *__fastcall R_GetConstantLayoutName(MaterialConstantLayout precompiledIndex)
{
  return ?R_GetConstantLayoutName@@YAPEBDW4MaterialConstantLayout@@@Z(precompiledIndex);
}

/*
==============
R_GetCodePersistentBufferName
==============
*/

const char *__fastcall R_GetCodePersistentBufferName(unsigned int codePersistentBuffer)
{
  return ?R_GetCodePersistentBufferName@@YAPEBDI@Z(codePersistentBuffer);
}

/*
==============
R_GetCodeDescriptorTableName
==============
*/

const char *__fastcall R_GetCodeDescriptorTableName(const unsigned int descriptorArrayIndex)
{
  return ?R_GetCodeDescriptorTableName@@YAPEBDI@Z(descriptorArrayIndex);
}

/*
==============
R_GetStreamSourceSemanticName
==============
*/

const char *__fastcall R_GetStreamSourceSemanticName(MaterialStreamSource streamSource)
{
  return ?R_GetStreamSourceSemanticName@@YAPEBDW4MaterialStreamSource@@@Z(streamSource);
}

/*
==============
R_GetCodeTextureName
==============
*/

const char *__fastcall R_GetCodeTextureName(unsigned int codeTexture)
{
  return ?R_GetCodeTextureName@@YAPEBDI@Z(codeTexture);
}

/*
==============
R_GetCodeConstantName
==============
*/

const char *__fastcall R_GetCodeConstantName(unsigned int codeConstant)
{
  return ?R_GetCodeConstantName@@YAPEBDI@Z(codeConstant);
}

/*
==============
R_GetCodeBufferName
==============
*/
const char *R_GetCodeBufferName(unsigned int codeBuffer)
{
  __int64 v1; 
  int v4; 

  v1 = codeBuffer;
  if ( codeBuffer >= 0x34 )
  {
    v4 = 52;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 997, ASSERT_TYPE_ASSERT, "(unsigned)( codeBuffer ) < (unsigned)( ( sizeof( *array_counter( s_codeBufferName ) ) + 0 ) )", "codeBuffer doesn't index ARRAY_COUNT( s_codeBufferName )\n\t%i not in [0, %i)", codeBuffer, v4) )
      __debugbreak();
  }
  return s_codeBufferName[v1];
}

/*
==============
R_GetCodeConstantName
==============
*/
const char *R_GetCodeConstantName(unsigned int codeConstant)
{
  __int64 v1; 
  int v4; 

  v1 = codeConstant;
  if ( codeConstant >= 0xAE )
  {
    v4 = 174;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 976, ASSERT_TYPE_ASSERT, "(unsigned)( codeConstant ) < (unsigned)( ( sizeof( *array_counter( s_codeConstantName ) ) + 0 ) )", "codeConstant doesn't index ARRAY_COUNT( s_codeConstantName )\n\t%i not in [0, %i)", codeConstant, v4) )
      __debugbreak();
  }
  return s_codeConstantName[v1];
}

/*
==============
R_GetCodeDescriptorTableName
==============
*/
const char *R_GetCodeDescriptorTableName(const unsigned int descriptorArrayIndex)
{
  __int64 v1; 
  int v4; 

  v1 = descriptorArrayIndex;
  if ( descriptorArrayIndex )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1019, ASSERT_TYPE_ASSERT, "(unsigned)( descriptorArrayIndex ) < (unsigned)( ( sizeof( *array_counter( s_codeTextureDescriptorArrayName ) ) + 0 ) )", "descriptorArrayIndex doesn't index ARRAY_COUNT( s_codeTextureDescriptorArrayName )\n\t%i not in [0, %i)", descriptorArrayIndex, v4) )
      __debugbreak();
  }
  return s_codeTextureDescriptorArrayName[v1];
}

/*
==============
R_GetCodePersistentBufferName
==============
*/
const char *R_GetCodePersistentBufferName(unsigned int codePersistentBuffer)
{
  __int64 v1; 
  int v4; 

  v1 = codePersistentBuffer;
  if ( codePersistentBuffer >= 0x29 )
  {
    v4 = 41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentBuffer ) < (unsigned)( ( sizeof( *array_counter( s_codePersistentBufferName ) ) + 0 ) )", "codePersistentBuffer doesn't index ARRAY_COUNT( s_codePersistentBufferName )\n\t%i not in [0, %i)", codePersistentBuffer, v4) )
      __debugbreak();
  }
  return s_codePersistentBufferName[v1];
}

/*
==============
R_GetCodePersistentTextureName
==============
*/
const char *R_GetCodePersistentTextureName(unsigned int codePersistentTexture)
{
  __int64 v1; 
  int v4; 

  v1 = codePersistentTexture;
  if ( codePersistentTexture >= 0x2A )
  {
    v4 = 42;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 990, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentTexture ) < (unsigned)( ( sizeof( *array_counter( s_codePersistentTextureName ) ) + 0 ) )", "codePersistentTexture doesn't index ARRAY_COUNT( s_codePersistentTextureName )\n\t%i not in [0, %i)", codePersistentTexture, v4) )
      __debugbreak();
  }
  return s_codePersistentTextureName[v1];
}

/*
==============
R_GetCodeRWBufferName
==============
*/
const char *R_GetCodeRWBufferName(unsigned int codeRWBuffer)
{
  __int64 v1; 
  int v4; 

  v1 = codeRWBuffer;
  if ( codeRWBuffer )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1011, ASSERT_TYPE_ASSERT, "(unsigned)( codeRWBuffer ) < (unsigned)( ( sizeof( *array_counter( s_codeRWBufferName ) ) + 0 ) )", "codeRWBuffer doesn't index ARRAY_COUNT( s_codeRWBufferName )\n\t%i not in [0, %i)", codeRWBuffer, v4) )
      __debugbreak();
  }
  return s_codeRWBufferName[v1];
}

/*
==============
R_GetCodeTextureIndexFromName
==============
*/
char R_GetCodeTextureIndexFromName(const char *name)
{
  __int64 v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  v2 = 0i64;
  do
  {
    v3 = s_codeTextureName[v2];
    v4 = 0x7FFFFFFFi64;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v5 = (const char *)(name - v3);
    while ( 1 )
    {
      v6 = (unsigned __int8)v3[(_QWORD)v5];
      v7 = v4;
      v8 = *(unsigned __int8 *)v3++;
      --v4;
      if ( !v7 )
        return v2;
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
          break;
      }
      if ( !v6 )
        return v2;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 0x56 );
  return 86;
}

/*
==============
R_GetCodeTextureName
==============
*/
const char *R_GetCodeTextureName(unsigned int codeTexture)
{
  __int64 v1; 
  int v4; 

  v1 = codeTexture;
  if ( codeTexture >= 0x56 )
  {
    v4 = 86;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 983, ASSERT_TYPE_ASSERT, "(unsigned)( codeTexture ) < (unsigned)( ( sizeof( *array_counter( s_codeTextureName ) ) + 0 ) )", "codeTexture doesn't index ARRAY_COUNT( s_codeTextureName )\n\t%i not in [0, %i)", codeTexture, v4) )
      __debugbreak();
  }
  return s_codeTextureName[v1];
}

/*
==============
R_GetConstantBufferName
==============
*/
const char *R_GetConstantBufferName(unsigned int constantBuffer)
{
  __int64 v1; 
  int v4; 

  v1 = constantBuffer;
  if ( constantBuffer >= 3 )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 969, ASSERT_TYPE_ASSERT, "(unsigned)( constantBuffer ) < (unsigned)( ( sizeof( *array_counter( s_constantBufferName ) ) + 0 ) )", "constantBuffer doesn't index ARRAY_COUNT( s_constantBufferName )\n\t%i not in [0, %i)", constantBuffer, v4) )
      __debugbreak();
  }
  return s_constantBufferName[v1];
}

/*
==============
R_GetConstantLayoutName
==============
*/
const char *R_GetConstantLayoutName(MaterialConstantLayout precompiledIndex)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)precompiledIndex >= MTL_CONSTANT_LAYOUT_COUNT )
  {
    v4 = 118;
    v3 = (unsigned __int8)precompiledIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 962, ASSERT_TYPE_ASSERT, "(unsigned)( precompiledIndex ) < (unsigned)( ( sizeof( *array_counter( s_precompiledIndexNames ) ) + 0 ) )", "precompiledIndex doesn't index ARRAY_COUNT( s_precompiledIndexNames )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_precompiledIndexNames[(unsigned __int8)precompiledIndex];
}

/*
==============
R_GetCustomBufferName
==============
*/
const char *R_GetCustomBufferName(unsigned int customBuffer)
{
  __int64 v1; 
  int v4; 

  v1 = customBuffer;
  if ( customBuffer >= 0x12 )
  {
    v4 = 18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1027, ASSERT_TYPE_ASSERT, "(unsigned)( customBuffer ) < (unsigned)( ( sizeof( *array_counter( s_customBufferName ) ) + 0 ) )", "customBuffer doesn't index ARRAY_COUNT( s_customBufferName )\n\t%i not in [0, %i)", customBuffer, v4) )
      __debugbreak();
  }
  return s_customBufferName[v1];
}

/*
==============
R_GetCustomSamplerName
==============
*/
const char *R_GetCustomSamplerName(unsigned int customSampler)
{
  __int64 v1; 
  int v4; 

  v1 = customSampler;
  if ( customSampler >= 0xB )
  {
    v4 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1034, ASSERT_TYPE_ASSERT, "(unsigned)( customSampler ) < (unsigned)( ( sizeof( *array_counter( s_customSamplerName ) ) + 0 ) )", "customSampler doesn't index ARRAY_COUNT( s_customSamplerName )\n\t%i not in [0, %i)", customSampler, v4) )
      __debugbreak();
  }
  return s_customSamplerName[v1];
}

/*
==============
R_GetStreamSourceName
==============
*/
const char *R_GetStreamSourceName(MaterialStreamSource streamSource)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)streamSource >= STREAM_SRC_COUNT )
  {
    v4 = 15;
    v3 = (unsigned __int8)streamSource;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1041, ASSERT_TYPE_ASSERT, "(unsigned)( streamSource ) < (unsigned)( ( sizeof( *array_counter( s_streamSrcDesc ) ) + 0 ) )", "streamSource doesn't index ARRAY_COUNT( s_streamSrcDesc )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_streamSrcDesc[(unsigned __int8)streamSource].name;
}

/*
==============
R_GetStreamSourceSemanticIndex
==============
*/
__int64 R_GetStreamSourceSemanticIndex(MaterialStreamSource streamSource)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)streamSource >= STREAM_SRC_COUNT )
  {
    v4 = 15;
    v3 = (unsigned __int8)streamSource;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1055, ASSERT_TYPE_ASSERT, "(unsigned)( streamSource ) < (unsigned)( ( sizeof( *array_counter( s_streamSrcDesc ) ) + 0 ) )", "streamSource doesn't index ARRAY_COUNT( s_streamSrcDesc )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_streamSrcDesc[(unsigned __int8)streamSource].index;
}

/*
==============
R_GetStreamSourceSemanticName
==============
*/
const char *R_GetStreamSourceSemanticName(MaterialStreamSource streamSource)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)streamSource >= STREAM_SRC_COUNT )
  {
    v4 = 15;
    v3 = (unsigned __int8)streamSource;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_consts.cpp", 1048, ASSERT_TYPE_ASSERT, "(unsigned)( streamSource ) < (unsigned)( ( sizeof( *array_counter( s_streamSrcDesc ) ) + 0 ) )", "streamSource doesn't index ARRAY_COUNT( s_streamSrcDesc )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_streamSrcDesc[(unsigned __int8)streamSource].semantic;
}

