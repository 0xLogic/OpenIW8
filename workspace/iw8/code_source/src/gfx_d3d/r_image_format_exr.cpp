/*
==============
EXR_GetVersionNumber
==============
*/

unsigned __int8 __fastcall EXR_GetVersionNumber(const ExrVersion *exrVersion)
{
  return ?EXR_GetVersionNumber@@YAEPEBUExrVersion@@@Z(exrVersion);
}

/*
==============
EXR_TempAlloc
==============
*/

void *__fastcall EXR_TempAlloc(const unsigned __int64 size)
{
  return ?EXR_TempAlloc@@YAPEAX_K@Z(size);
}

/*
==============
EXR_GetVersionLongName
==============
*/

bool __fastcall EXR_GetVersionLongName(const ExrVersion *exrVersion)
{
  return ?EXR_GetVersionLongName@@YA_NPEBUExrVersion@@@Z(exrVersion);
}

/*
==============
EXR_GetScanlinesPerBlock
==============
*/

unsigned int __fastcall EXR_GetScanlinesPerBlock(const ExrCompression compression)
{
  return ?EXR_GetScanlinesPerBlock@@YAIW4ExrCompression@@@Z(compression);
}

/*
==============
EXR_GetVersionNonImage
==============
*/

bool __fastcall EXR_GetVersionNonImage(const ExrVersion *exrVersion)
{
  return ?EXR_GetVersionNonImage@@YA_NPEBUExrVersion@@@Z(exrVersion);
}

/*
==============
EXR_HeaderFindAttribute
==============
*/

ExrAttribute *__fastcall EXR_HeaderFindAttribute(const ExrHeader *exrHeader, const char *searchName)
{
  return ?EXR_HeaderFindAttribute@@YAPEAUExrAttribute@@PEBUExrHeader@@PEBD@Z(exrHeader, searchName);
}

/*
==============
EXR_GetSizeofPixelType
==============
*/

unsigned int __fastcall EXR_GetSizeofPixelType(const ExrPixelType pixelType)
{
  return ?EXR_GetSizeofPixelType@@YAIW4ExrPixelType@@@Z(pixelType);
}

/*
==============
EXR_GetBox2iWidth
==============
*/

int __fastcall EXR_GetBox2iWidth(const ExrBox2i *exrBox2i)
{
  return ?EXR_GetBox2iWidth@@YAHPEBUExrBox2i@@@Z(exrBox2i);
}

/*
==============
EXR_HeaderIsNull
==============
*/

bool __fastcall EXR_HeaderIsNull(const ExrHeader *exrHeader)
{
  return ?EXR_HeaderIsNull@@YA_NPEBUExrHeader@@@Z(exrHeader);
}

/*
==============
EXR_TempFree
==============
*/

void __fastcall EXR_TempFree(void *buffer)
{
  ?EXR_TempFree@@YAXPEAX@Z(buffer);
}

/*
==============
EXR_GetVersionTiled
==============
*/

bool __fastcall EXR_GetVersionTiled(const ExrVersion *exrVersion)
{
  return ?EXR_GetVersionTiled@@YA_NPEBUExrVersion@@@Z(exrVersion);
}

/*
==============
EXR_GetStatusString
==============
*/

const char *__fastcall EXR_GetStatusString(const ExrStatus status)
{
  return ?EXR_GetStatusString@@YAPEBDW4ExrStatus@@@Z(status);
}

/*
==============
EXR_GetVersionMultipart
==============
*/

bool __fastcall EXR_GetVersionMultipart(const ExrVersion *exrVersion)
{
  return ?EXR_GetVersionMultipart@@YA_NPEBUExrVersion@@@Z(exrVersion);
}

/*
==============
EXR_GetBox2iHeight
==============
*/

int __fastcall EXR_GetBox2iHeight(const ExrBox2i *exrBox2i)
{
  return ?EXR_GetBox2iHeight@@YAHPEBUExrBox2i@@@Z(exrBox2i);
}

/*
==============
EXR_GetBox2iHeight
==============
*/
__int64 EXR_GetBox2iHeight(const ExrBox2i *exrBox2i)
{
  if ( !exrBox2i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr.cpp", 100, ASSERT_TYPE_SANITY, "( exrBox2i )", (const char *)&queryFormat, "exrBox2i") )
    __debugbreak();
  return (unsigned int)(exrBox2i->yMax - exrBox2i->yMin + 1);
}

/*
==============
EXR_GetBox2iWidth
==============
*/
__int64 EXR_GetBox2iWidth(const ExrBox2i *exrBox2i)
{
  if ( !exrBox2i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr.cpp", 93, ASSERT_TYPE_SANITY, "( exrBox2i )", (const char *)&queryFormat, "exrBox2i") )
    __debugbreak();
  return (unsigned int)(exrBox2i->xMax - exrBox2i->xMin + 1);
}

/*
==============
EXR_GetScanlinesPerBlock
==============
*/
__int64 EXR_GetScanlinesPerBlock(const ExrCompression compression)
{
  __int64 result; 

  switch ( compression )
  {
    case EXR_ZIP_COMPRESSION:
    case EXR_PXR24_COMPRESSION:
      result = 16i64;
      break;
    case EXR_PIZ_COMPRESSION:
    case EXR_B44_COMPRESSION:
    case EXR_B44A_COMPRESSION:
      result = 32i64;
      break;
    default:
      result = 1i64;
      break;
  }
  return result;
}

/*
==============
EXR_GetSizeofPixelType
==============
*/
__int64 EXR_GetSizeofPixelType(const ExrPixelType pixelType)
{
  __int32 v1; 

  if ( pixelType )
  {
    v1 = pixelType - 1;
    if ( !v1 )
      return 2i64;
    if ( v1 != 1 )
      return 0i64;
  }
  return 4i64;
}

/*
==============
EXR_GetStatusString
==============
*/
const char *EXR_GetStatusString(int status)
{
  const char *result; 

  switch ( status )
  {
    case 0:
      result = "Success";
      break;
    case 1:
      result = "Unknown Error";
      break;
    case 2:
      result = "Unexpected End of File";
      break;
    case 3:
      result = "Not an EXR file";
      break;
    case 4:
      result = "Unsupported EXR file version";
      break;
    case 5:
      result = "Unsupported EXR format feature: NonImage";
      break;
    case 6:
      result = "Unsupported EXR format feature: Tiled Images";
      break;
    case 7:
      result = "Unsupported EXR format feature: Multipart Images";
      break;
    case 8:
      result = "Unsupported EXR format feature: Line Order";
      break;
    case 9:
      result = "Unsupported EXR pixel sampling rate";
      break;
    case 10:
      result = "Unsupported EXR compression format";
      break;
    case 11:
      result = "Attribute Limit Exceeded";
      break;
    case 12:
      result = "Header Limit Exceeded";
      break;
    case 13:
      result = "No Headers Found";
      break;
    case 14:
      result = "Expected Attribute Not Found";
      break;
    case 15:
      result = "Channel Limit Exceeded";
      break;
    case 16:
      result = "Offset Limit Exceeded";
      break;
    case 17:
      result = "Unsupported Channel List";
      break;
    case 18:
      result = "Unsupported pixel format conversion";
      break;
    case 19:
      result = "Compression error";
      break;
    case 20:
      result = "Decompression error";
      break;
    case 21:
      result = "Unexpected scanline Y co-ordinate.";
      break;
    default:
      result = "Status Unknown";
      break;
  }
  return result;
}

/*
==============
EXR_GetVersionLongName
==============
*/
bool EXR_GetVersionLongName(const ExrVersion *exrVersion)
{
  return (exrVersion->version & 0x400) != 0;
}

/*
==============
EXR_GetVersionMultipart
==============
*/
bool EXR_GetVersionMultipart(const ExrVersion *exrVersion)
{
  return (exrVersion->version & 0x1000) != 0;
}

/*
==============
EXR_GetVersionNonImage
==============
*/
bool EXR_GetVersionNonImage(const ExrVersion *exrVersion)
{
  return (exrVersion->version & 0x800) != 0;
}

/*
==============
EXR_GetVersionNumber
==============
*/
__int64 EXR_GetVersionNumber(const ExrVersion *exrVersion)
{
  return LOBYTE(exrVersion->version);
}

/*
==============
EXR_GetVersionTiled
==============
*/
bool EXR_GetVersionTiled(const ExrVersion *exrVersion)
{
  return (exrVersion->version & 0x200) != 0;
}

/*
==============
EXR_HeaderFindAttribute
==============
*/
ExrAttribute *EXR_HeaderFindAttribute(const ExrHeader *exrHeader, const char *searchName)
{
  unsigned int i; 
  unsigned __int64 v5; 
  __int64 v6; 
  const char *v7; 
  ExrAttribute *v8; 
  char v9; 
  __int64 v10; 
  char v11; 

  if ( !searchName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr.cpp", 197, ASSERT_TYPE_SANITY, "( searchName )", (const char *)&queryFormat, "searchName") )
    __debugbreak();
  for ( i = 0; i < exrHeader->attributeCount; ++i )
  {
    v5 = 528i64 * i;
    v6 = 256i64;
    v7 = searchName;
    v8 = &exrHeader->attributes[v5 / 0x210];
    if ( (const ExrHeader *)((char *)exrHeader + v5) == (const ExrHeader *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)(v5 + (_DWORD)exrHeader + 9), "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !searchName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v9 = v7[(char *)v8 - searchName];
      v10 = v6;
      v11 = *v7++;
      --v6;
      if ( !v10 )
        return v8;
      if ( v9 != v11 )
        break;
      if ( !v9 )
        return v8;
    }
  }
  return 0i64;
}

/*
==============
EXR_HeaderIsNull
==============
*/
bool EXR_HeaderIsNull(const ExrHeader *exrHeader)
{
  return exrHeader->attributeCount == 0;
}

/*
==============
EXR_TempAlloc
==============
*/
void *EXR_TempAlloc(const unsigned __int64 size)
{
  return Mem_Virtual_Alloc(size, "exr", TRACK_RENDERER_MISC);
}

/*
==============
EXR_TempFree
==============
*/

void __fastcall EXR_TempFree(void *buffer)
{
  Mem_Virtual_Free(buffer);
}

