/*
==============
DB_GetCompressionDestBufferMaxBySettings
==============
*/

unsigned __int64 __fastcall DB_GetCompressionDestBufferMaxBySettings(const XCompressionSettings *settings, unsigned __int64 sourceSize)
{
  return ?DB_GetCompressionDestBufferMaxBySettings@@YA_KPEBUXCompressionSettings@@_K@Z(settings, sourceSize);
}

/*
==============
DB_GetCompressionNameByBlockType
==============
*/

const char *__fastcall DB_GetCompressionNameByBlockType(XBlockCompressionType blockType)
{
  return ?DB_GetCompressionNameByBlockType@@YAPEBDW4XBlockCompressionType@@@Z(blockType);
}

/*
==============
DB_GetCompressionDestBufferMaxByBlockType
==============
*/

unsigned __int64 __fastcall DB_GetCompressionDestBufferMaxByBlockType(XBlockCompressionType blockType, unsigned __int64 sourceSize)
{
  return ?DB_GetCompressionDestBufferMaxByBlockType@@YA_KW4XBlockCompressionType@@_K@Z(blockType, sourceSize);
}

/*
==============
DB_GetCompressionDestBufferMaxByBlockType
==============
*/
unsigned __int64 DB_GetCompressionDestBufferMaxByBlockType(XBlockCompressionType blockType, unsigned __int64 sourceSize)
{
  int v2; 
  unsigned __int64 result; 

  v2 = sourceSize;
  switch ( blockType )
  {
    case XBLOCK_COMPRESSION_NONE:
      result = sourceSize;
      break;
    case XBLOCK_COMPRESSION_ZLIB_SIZE:
    case XBLOCK_COMPRESSION_ZLIB_SPEED:
      result = (sourceSize >> 14) + sourceSize + 4 * (sourceSize >> 14) + 11;
      break;
    case XBLOCK_COMPRESSION_LZ4HC:
    case XBLOCK_COMPRESSION_LZ4:
      if ( sourceSize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)sourceSize, "unsigned", sourceSize) )
        __debugbreak();
      result = j_LZ4_compressBound(v2);
      break;
    case XBLOCK_COMPRESSION_OODLE_KRAKEN_OPTIMAL:
    case XBLOCK_COMPRESSION_OODLE_LEVIATHAN_OPTIMAL:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&unk_143D1D9F0, 5815i64, (unsigned int)blockType);
      goto LABEL_11;
    case XBLOCK_COMPRESSION_HW_ZLIB_SIZE:
    case XBLOCK_COMPRESSION_HW_ZLIB_SPEED:
      result = (sourceSize >> 3) + sourceSize + (sourceSize >> 14) + 4 * (sourceSize >> 14) + 11;
      break;
    default:
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143D1DA40, 5816i64, (unsigned int)blockType);
LABEL_11:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
DB_GetCompressionDestBufferMaxBySettings
==============
*/
unsigned __int64 DB_GetCompressionDestBufferMaxBySettings(const XCompressionSettings *settings, unsigned __int64 sourceSize)
{
  if ( !settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_common.cpp", 86, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings") )
    __debugbreak();
  if ( settings->compType != 1 )
  {
    if ( settings->compType != 2 )
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143D1DAC8, 142i64);
      return 0i64;
    }
    switch ( settings->blockType )
    {
      case 1u:
        return sourceSize;
      case 2u:
      case 3u:
        return (sourceSize >> 14) + sourceSize + 4 * (sourceSize >> 14) + 11;
      case 4u:
      case 5u:
        if ( sourceSize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)sourceSize, "unsigned", sourceSize) )
          __debugbreak();
        return j_LZ4_compressBound(sourceSize);
      case 6u:
      case 7u:
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&unk_143D1D9F0, 5815i64);
        goto LABEL_16;
      case 8u:
      case 9u:
        return (sourceSize >> 3) + sourceSize + (sourceSize >> 14) + 4 * (sourceSize >> 14) + 11;
      default:
        Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143D1DA40, 5816i64);
LABEL_16:
        sourceSize = 0i64;
        break;
    }
  }
  return sourceSize;
}

/*
==============
DB_GetCompressionNameByBlockType
==============
*/
const char *DB_GetCompressionNameByBlockType(XBlockCompressionType blockType)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)blockType;
  if ( (unsigned int)blockType >= XBLOCK_COMPRESSION_NTYPES )
  {
    v4 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_cmp_common.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( blockType ) < (unsigned)( ( sizeof( *array_counter( BLOCK_COMPRESSION_NAME ) ) + 0 ) )", "blockType doesn't index ARRAY_COUNT( BLOCK_COMPRESSION_NAME )\n\t%i not in [0, %i)", blockType, v4) )
      __debugbreak();
  }
  return BLOCK_COMPRESSION_NAME[v1];
}

