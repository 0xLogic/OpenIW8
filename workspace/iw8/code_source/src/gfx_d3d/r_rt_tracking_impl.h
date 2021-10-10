/*
==============
R_RT_Tracking_RemoveSurfaceRecord
==============
*/

void __fastcall R_RT_Tracking_RemoveSurfaceRecord(R_RT_Tracking_SurfaceInfo *surfaceInfo, unsigned __int16 surfaceID, const char *name)
{
  ?R_RT_Tracking_RemoveSurfaceRecord@@YAXPEAUR_RT_Tracking_SurfaceInfo@@GPEBD@Z(surfaceInfo, surfaceID, name);
}

/*
==============
R_RT_Tracking_SurfaceRefIncrement
==============
*/

void __fastcall R_RT_Tracking_SurfaceRefIncrement(const R_RT_Surface *surface, int colorRtIndex, const char *location)
{
  ?R_RT_Tracking_SurfaceRefIncrement@@YAXPEBUR_RT_Surface@@HPEBD@Z(surface, colorRtIndex, location);
}

/*
==============
R_RT_Tracking_AssertUnreferencedImage
==============
*/

void __fastcall R_RT_Tracking_AssertUnreferencedImage(const GfxImage *image)
{
  ?R_RT_Tracking_AssertUnreferencedImage@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
R_RT_Tracking_AddSurfaceRecord
==============
*/

void __fastcall R_RT_Tracking_AddSurfaceRecord(R_RT_Tracking_SurfaceInfo *surfaceInfo, R_RT_FlagsInternal rtFlags, unsigned __int16 surfaceID, const char *name, const void *mem)
{
  ?R_RT_Tracking_AddSurfaceRecord@@YAXPEAUR_RT_Tracking_SurfaceInfo@@W4R_RT_FlagsInternal@@GPEBDPEBX@Z(surfaceInfo, rtFlags, surfaceID, name, mem);
}

/*
==============
R_RT_Tracking_RecordDecommit
==============
*/

void __fastcall R_RT_Tracking_RecordDecommit(const R_RT_Tracking_AllocRecord *allocRecord)
{
  ?R_RT_Tracking_RecordDecommit@@YAXAEBUR_RT_Tracking_AllocRecord@@@Z(allocRecord);
}

/*
==============
R_RT_Tracking_ImageRefIncrement_GPU
==============
*/

void __fastcall R_RT_Tracking_ImageRefIncrement_GPU(const GfxImage *image, const void *refAddr, GfxShaderImageSetStage shaderImageSetID, unsigned int resourceIndex, const char *location)
{
  ?R_RT_Tracking_ImageRefIncrement_GPU@@YAXPEBUGfxImage@@PEBXW4GfxShaderImageSetStage@@IPEBD@Z(image, refAddr, shaderImageSetID, resourceIndex, location);
}

/*
==============
R_RT_Tracking_ImageRefIncrement_Input
==============
*/

void __fastcall R_RT_Tracking_ImageRefIncrement_Input(const GfxImage *image, const void *refAddr, unsigned int codeTexture, const char *location)
{
  ?R_RT_Tracking_ImageRefIncrement_Input@@YAXPEBUGfxImage@@PEBXIPEBD@Z(image, refAddr, codeTexture, location);
}

/*
==============
R_RT_Tracking_RecordCommit
==============
*/

void __fastcall R_RT_Tracking_RecordCommit(const R_RT_Tracking_AllocRecord *allocRecord)
{
  ?R_RT_Tracking_RecordCommit@@YAXAEBUR_RT_Tracking_AllocRecord@@@Z(allocRecord);
}

/*
==============
R_RT_Tracking_BindSurfaceInfo
==============
*/

void __fastcall R_RT_Tracking_BindSurfaceInfo(R_RT_Tracking_SurfaceInfo *surfaceInfo, unsigned __int16 frontendPass, const char *location)
{
  ?R_RT_Tracking_BindSurfaceInfo@@YAXPEAUR_RT_Tracking_SurfaceInfo@@GPEBD@Z(surfaceInfo, frontendPass, location);
}

/*
==============
R_RT_Tracking_DumpAllSurfacePools
==============
*/

void __fastcall R_RT_Tracking_DumpAllSurfacePools(int conChannel)
{
  ?R_RT_Tracking_DumpAllSurfacePools@@YAXH@Z(conChannel);
}

/*
==============
R_RT_Tracking_AsyncGetDebugDrawStats
==============
*/

bool __fastcall R_RT_Tracking_AsyncGetDebugDrawStats(R_RT_Tracking_DebugDrawStats *outDebugDrawStats)
{
  return ?R_RT_Tracking_AsyncGetDebugDrawStats@@YA_NPEAUR_RT_Tracking_DebugDrawStats@@@Z(outDebugDrawStats);
}

/*
==============
R_RT_Tracking_GroupRefIncrement
==============
*/

void __fastcall R_RT_Tracking_GroupRefIncrement(const R_RT_Group *rtGroup, const char *location)
{
  ?R_RT_Tracking_GroupRefIncrement@@YAXAEBUR_RT_Group@@PEBD@Z(rtGroup, location);
}

/*
==============
R_RT_Tracking_ImageRefDecrement_GPU
==============
*/

void __fastcall R_RT_Tracking_ImageRefDecrement_GPU(const GfxImage *image, const void *refAddr, GfxShaderImageSetStage shaderImageSetID, unsigned int resourceIndex)
{
  ?R_RT_Tracking_ImageRefDecrement_GPU@@YAXPEBUGfxImage@@PEBXW4GfxShaderImageSetStage@@I@Z(image, refAddr, shaderImageSetID, resourceIndex);
}

/*
==============
R_RT_Tracking_BatchImageRefDecrement_GPU
==============
*/

void __fastcall R_RT_Tracking_BatchImageRefDecrement_GPU(const GfxImage **images, unsigned int imageCount, GfxShaderImageSetStage shaderImageSetID)
{
  ?R_RT_Tracking_BatchImageRefDecrement_GPU@@YAXPEAPEBUGfxImage@@IW4GfxShaderImageSetStage@@@Z(images, imageCount, shaderImageSetID);
}

/*
==============
R_RT_Tracking_SurfaceRefDecrement
==============
*/

void __fastcall R_RT_Tracking_SurfaceRefDecrement(const R_RT_Surface *surface, int colorRtIndex)
{
  ?R_RT_Tracking_SurfaceRefDecrement@@YAXPEBUR_RT_Surface@@H@Z(surface, colorRtIndex);
}

/*
==============
R_RT_Tracking_BackendFrameBegin
==============
*/

void R_RT_Tracking_BackendFrameBegin(void)
{
  ?R_RT_Tracking_BackendFrameBegin@@YAXXZ();
}

/*
==============
R_RT_Tracking_BatchImageRefDecrement_Input
==============
*/

void __fastcall R_RT_Tracking_BatchImageRefDecrement_Input(const GfxImage **images, unsigned int imageCount, const GfxImage *unrefImage, const GfxImage *badImage)
{
  ?R_RT_Tracking_BatchImageRefDecrement_Input@@YAXPEAPEBUGfxImage@@IPEBU1@1@Z(images, imageCount, unrefImage, badImage);
}

/*
==============
R_RT_Tracking_ResetSurfaceInfo
==============
*/

void __fastcall R_RT_Tracking_ResetSurfaceInfo(R_RT_Tracking_SurfaceInfo *surfaceInfo)
{
  ?R_RT_Tracking_ResetSurfaceInfo@@YAXPEAUR_RT_Tracking_SurfaceInfo@@@Z(surfaceInfo);
}

/*
==============
R_RT_Tracking_GroupRefDecrement
==============
*/

void __fastcall R_RT_Tracking_GroupRefDecrement(const R_RT_Group *rtGroup)
{
  ?R_RT_Tracking_GroupRefDecrement@@YAXAEBUR_RT_Group@@@Z(rtGroup);
}

/*
==============
R_RT_Tracking_AssertUnreferencedSurface
==============
*/

void __fastcall R_RT_Tracking_AssertUnreferencedSurface(const R_RT_Surface *surface)
{
  ?R_RT_Tracking_AssertUnreferencedSurface@@YAXPEBUR_RT_Surface@@@Z(surface);
}

/*
==============
R_RT_Tracking_Shutdown
==============
*/

void R_RT_Tracking_Shutdown(void)
{
  ?R_RT_Tracking_Shutdown@@YAXXZ();
}

/*
==============
R_RT_Tracking_BackendFrameEnd
==============
*/

void R_RT_Tracking_BackendFrameEnd(void)
{
  ?R_RT_Tracking_BackendFrameEnd@@YAXXZ();
}

/*
==============
R_RT_Tracking_UnbindSurfaceInfo
==============
*/

void __fastcall R_RT_Tracking_UnbindSurfaceInfo(R_RT_Tracking_SurfaceInfo *surfaceInfo)
{
  ?R_RT_Tracking_UnbindSurfaceInfo@@YAXPEAUR_RT_Tracking_SurfaceInfo@@@Z(surfaceInfo);
}

/*
==============
R_RT_Tracking_BatchImageRefIncrement_Input
==============
*/

void __fastcall R_RT_Tracking_BatchImageRefIncrement_Input(const GfxImage **images, unsigned int imageCount, const char *location, const GfxImage *badImage)
{
  ?R_RT_Tracking_BatchImageRefIncrement_Input@@YAXPEAPEBUGfxImage@@IPEBDPEBU1@@Z(images, imageCount, location, badImage);
}

/*
==============
R_RT_Tracking_ImageRefDecrement_Input
==============
*/

void __fastcall R_RT_Tracking_ImageRefDecrement_Input(const GfxImage *image, const void *refAddr, unsigned int codeTexture)
{
  ?R_RT_Tracking_ImageRefDecrement_Input@@YAXPEBUGfxImage@@PEBXI@Z(image, refAddr, codeTexture);
}

/*
==============
R_RT_Tracking_Startup
==============
*/

void R_RT_Tracking_Startup(void)
{
  ?R_RT_Tracking_Startup@@YAXXZ();
}

/*
==============
R_RT_Tracking_GetSurfaceRecord
==============
*/

R_RT_Tracking_SurfaceRecord *__fastcall R_RT_Tracking_GetSurfaceRecord(R_RT_Tracking_SurfacePoolID surfacePoolID, unsigned __int16 surfaceRecordIndex)
{
  return ?R_RT_Tracking_GetSurfaceRecord@@YAPEAUR_RT_Tracking_SurfaceRecord@@W4R_RT_Tracking_SurfacePoolID@@G@Z(surfacePoolID, surfaceRecordIndex);
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Index
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Index(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  __int16 *v5; 
  __int16 v6; 

  v5 = (__int16 *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3));
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 342, ASSERT_TYPE_ASSERT, "(surfaceRecord->m_surfaceID)", (const char *)&queryFormat, "surfaceRecord->m_surfaceID") )
    __debugbreak();
  v6 = *v5;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  return (unsigned int)IWString_AppendUnsignedDecimal(outText, (unsigned __int16)((v6 & 0x7FFF) - 1)) - (unsigned int)outText;
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Name
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Name(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  const char *name; 
  char *v6; 
  char i; 

  name = R_RT_GetSurface(*(_WORD *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3)))->m_image.m_base.name;
  v6 = outText;
  for ( i = *name; *name; ++v6 )
  {
    *v6 = i;
    i = *++name;
  }
  return (unsigned int)((_DWORD)v6 - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Type
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Type(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const char *v6; 
  bool v7; 
  char v8; 
  char *v9; 
  signed __int64 v10; 

  m_rtFlagsInternal = R_RT_GetSurface(*(_WORD *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3)))->m_rtFlagsInternal;
  if ( (m_rtFlagsInternal & 0x40) != 0 )
  {
    v6 = "Display";
  }
  else if ( (m_rtFlagsInternal & 0x10) != 0 )
  {
    v6 = "Depth";
  }
  else if ( (m_rtFlagsInternal & 8) != 0 )
  {
    v6 = "Buffer";
  }
  else
  {
    v7 = (m_rtFlagsInternal & 4) == 0;
    v6 = "Color";
    if ( !v7 )
      v6 = "Array";
  }
  v8 = *v6;
  v9 = outText;
  if ( *v6 )
  {
    v10 = v6 - outText;
    do
    {
      *v9++ = v8;
      v8 = v9[v10];
    }
    while ( v8 );
  }
  return (unsigned int)((_DWORD)v9 - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Dimensions
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Dimensions(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v6; 
  char *appended; 
  char *v9; 
  char *v10; 
  unsigned __int16 depth; 
  unsigned int levelCount; 
  char v13; 
  char *v14; 

  Surface = R_RT_GetSurface(*(_WORD *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3)));
  v6 = Surface;
  if ( (Surface->m_rtFlagsInternal & 8) != 0 )
  {
    appended = IWString_AppendUnsignedDecimal(outText, Surface->m_allocWidth);
    *appended = 120;
    return (unsigned int)IWString_AppendUnsignedDecimal(appended + 1, v6->m_allocHeight) - (unsigned int)outText;
  }
  else
  {
    v9 = IWString_AppendUnsignedDecimal(outText, Surface->m_image.m_base.width);
    *v9 = 120;
    v10 = IWString_AppendUnsignedDecimal(v9 + 1, v6->m_image.m_base.height);
    depth = v6->m_image.m_base.depth;
    if ( depth <= 1u )
      depth = v6->m_image.m_base.numElements;
    if ( depth > 1u )
    {
      *v10 = 120;
      v10 = IWString_AppendUnsignedDecimal(v10 + 1, depth);
    }
    levelCount = v6->m_image.m_base.levelCount;
    if ( levelCount > 1 )
    {
      *v10 = 40;
      v10 = IWString_AppendUnsignedDecimal(v10 + 1, levelCount);
      v13 = 32;
      v14 = (char *)(" mips)" - v10);
      do
      {
        *v10++ = v13;
        v13 = v10[(_QWORD)v14];
      }
      while ( v13 );
    }
    return (unsigned int)((_DWORD)v10 - (_DWORD)outText);
  }
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Format
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Format(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  const R_RT_Surface *Surface; 
  const char *Name; 
  char *v7; 
  char v8; 
  signed __int64 v9; 

  Surface = R_RT_GetSurface(*(_WORD *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3)));
  Name = PixelFormat_GetName(Surface->m_image.m_base.format);
  v7 = outText;
  v8 = *Name;
  if ( *Name )
  {
    v9 = Name - outText;
    do
    {
      *v7++ = v8;
      v8 = v7[v9];
    }
    while ( v8 );
  }
  return (unsigned int)((_DWORD)v7 - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Memory
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Memory(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  const R_RT_Surface *Surface; 
  char *appended; 
  char v7; 
  char *v8; 

  Surface = R_RT_GetSurface(*(_WORD *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3)));
  appended = IWString_AppendUnsignedDecimal(outText, (Surface->m_tracking.m_memSize + 1023) >> 10);
  v7 = 75;
  v8 = (char *)("KB" - appended);
  do
  {
    *appended++ = v7;
    v7 = appended[(_QWORD)v8];
  }
  while ( v7 );
  return (unsigned int)((_DWORD)appended - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_GetSurfaceColumnText_Location
==============
*/
__int64 R_RT_Tracking_GetSurfaceColumnText_Location(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  const char *m_location; 
  char *v6; 
  char i; 

  m_location = R_RT_GetSurface(*(_WORD *)(*(_QWORD *)userContext + 8 * (3i64 * rowIndex + 3)))->m_tracking.m_location;
  v6 = outText;
  for ( i = *m_location; *m_location; ++v6 )
  {
    *v6 = i;
    i = *++m_location;
  }
  return (unsigned int)((_DWORD)v6 - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_SurfaceIDLess_Name
==============
*/
BOOL R_RT_Tracking_SurfaceIDLess_Name(unsigned __int16 surfaceID0, unsigned __int16 surfaceID1)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v5; 
  unsigned int v6; 

  Surface = R_RT_GetSurface(surfaceID0);
  v5 = R_RT_GetSurface(surfaceID1);
  v6 = IWString_CompareCI(Surface->m_image.m_base.name, v5->m_image.m_base.name);
  if ( v6 )
    return v6 >> 31;
  else
    return surfaceID0 < surfaceID1;
}

/*
==============
R_RT_Tracking_SurfaceIDLess_Size
==============
*/
bool R_RT_Tracking_SurfaceIDLess_Size(unsigned __int16 surfaceID0, unsigned __int16 surfaceID1)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v5; 
  int v6; 
  int v7; 
  unsigned int v8; 

  Surface = R_RT_GetSurface(surfaceID0);
  v5 = R_RT_GetSurface(surfaceID1);
  v6 = Surface->m_tracking.m_memSize - v5->m_tracking.m_memSize;
  if ( v6 )
  {
    LOBYTE(v7) = v6 > 0;
  }
  else
  {
    v8 = IWString_CompareCI(Surface->m_image.m_base.name, v5->m_image.m_base.name);
    if ( v8 )
      return v8 >> 31;
    else
      return surfaceID0 < surfaceID1;
  }
  return v7;
}

/*
==============
R_RT_Tracking_SurfaceIDLess_Type
==============
*/
BOOL R_RT_Tracking_SurfaceIDLess_Type(unsigned __int16 surfaceID0, unsigned __int16 surfaceID1)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v5; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *v7; 
  R_RT_FlagsInternal v8; 
  int v9; 
  int v10; 
  unsigned int v11; 

  Surface = R_RT_GetSurface(surfaceID0);
  v5 = R_RT_GetSurface(surfaceID1);
  m_rtFlagsInternal = Surface->m_rtFlagsInternal;
  v7 = v5;
  v8 = v5->m_rtFlagsInternal;
  v9 = 0;
  if ( (m_rtFlagsInternal & 0x40) != 0 )
    v10 = 0;
  else
    v10 = ((m_rtFlagsInternal & 0x10) != 0) + 1;
  if ( (v8 & 0x40) == 0 )
  {
    LOBYTE(v9) = (v8 & 0x10) != 0;
    ++v9;
  }
  v11 = v10 - v9;
  if ( v11 )
    return v11 >> 31;
  v11 = IWString_CompareCI(Surface->m_image.m_base.name, v7->m_image.m_base.name);
  if ( v11 )
    return v11 >> 31;
  else
    return surfaceID0 < surfaceID1;
}

/*
==============
R_RT_Tracking_GetAllocColumnText_Index
==============
*/
__int64 R_RT_Tracking_GetAllocColumnText_Index(char *outText, unsigned int __formal, unsigned int rowIndex, const void *a4)
{
  return (unsigned int)IWString_AppendUnsignedDecimal(outText, rowIndex) - (unsigned int)outText;
}

/*
==============
R_RT_Tracking_GetAllocColumnText_Name
==============
*/
__int64 R_RT_Tracking_GetAllocColumnText_Name(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  __int64 v5; 
  char *v6; 
  char v7; 
  char *v8; 
  char i; 

  v5 = 32i64 * rowIndex;
  v6 = outText;
  if ( !*(_WORD *)((char *)userContext + v5 + 28) )
  {
    v7 = 91;
    do
    {
      *v6++ = v7;
      v7 = v6["[abandoned]" - outText];
    }
    while ( v7 );
  }
  v8 = *(char **)((char *)userContext + v5);
  for ( i = *v8; *v8; ++v6 )
  {
    *v6 = i;
    i = *++v8;
  }
  return (unsigned int)((_DWORD)v6 - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_GetAllocColumnText_Size
==============
*/
__int64 R_RT_Tracking_GetAllocColumnText_Size(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  int v4; 
  char *appended; 
  char v6; 
  char *v7; 

  v4 = (int)outText;
  appended = IWString_AppendUnsignedDecimal(outText, (unsigned int)(*((_DWORD *)userContext + 8 * rowIndex + 6) + 1023) >> 10);
  v6 = 75;
  v7 = (char *)("KB" - appended);
  do
  {
    *appended++ = v6;
    v6 = appended[(_QWORD)v7];
  }
  while ( v6 );
  return (unsigned int)((_DWORD)appended - v4);
}

/*
==============
R_RT_Tracking_GetAllocColumnText_Address
==============
*/
__int64 R_RT_Tracking_GetAllocColumnText_Address(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  int v4; 
  char *v5; 
  char v6; 

  v4 = (int)outText;
  v5 = outText;
  v6 = 48;
  do
  {
    *v5++ = v6;
    v6 = v5["0x" - outText];
  }
  while ( v6 );
  IWString_ToHex16(v5, *((_QWORD *)userContext + 4 * rowIndex + 2));
  return (unsigned int)((_DWORD)v5 - v4 + 16);
}

/*
==============
R_RT_Tracking_GetAllocColumnText_Location
==============
*/
__int64 R_RT_Tracking_GetAllocColumnText_Location(char *outText, unsigned int __formal, unsigned int rowIndex, const void *userContext)
{
  char *v4; 
  char *v5; 
  char i; 

  v4 = (char *)*((_QWORD *)userContext + 4 * rowIndex + 1);
  v5 = outText;
  for ( i = *v4; *v4; ++v5 )
  {
    *v5 = i;
    i = *++v4;
  }
  return (unsigned int)((_DWORD)v5 - (_DWORD)outText);
}

/*
==============
R_RT_Tracking_AllocRecordIndexLess_Name
==============
*/
bool R_RT_Tracking_AllocRecordIndexLess_Name(unsigned int allocRecordIndex0, unsigned int allocRecordIndex1, const R_RT_Tracking_AllocRecord *allocRecords)
{
  const R_RT_Tracking_AllocRecord *v5; 
  const R_RT_Tracking_AllocRecord *v6; 
  int v7; 

  v5 = &allocRecords[allocRecordIndex0];
  v6 = &allocRecords[allocRecordIndex1];
  v7 = (v5->m_surfaceID == 0) - (v6->m_surfaceID == 0);
  if ( !v7 )
    v7 = IWString_CompareCI(v5->m_name, v6->m_name);
  if ( v7 )
    return v7 < 0;
  else
    return allocRecordIndex0 < allocRecordIndex1;
}

/*
==============
R_RT_Tracking_AllocRecordIndexLess_Size
==============
*/
bool R_RT_Tracking_AllocRecordIndexLess_Size(unsigned int allocRecordIndex0, unsigned int allocRecordIndex1, const R_RT_Tracking_AllocRecord *allocRecords)
{
  __int64 v4; 
  __int64 v5; 
  signed int v7; 
  int v9; 

  v4 = allocRecordIndex0;
  v5 = allocRecordIndex1;
  v7 = allocRecords[v4].m_size - allocRecords[v5].m_size;
  if ( v7 )
    return v7 > 0;
  v9 = (allocRecords[v4].m_surfaceID == 0) - (allocRecords[v5].m_surfaceID == 0);
  if ( !v9 )
    v9 = IWString_CompareCI(allocRecords[v4].m_name, allocRecords[v5].m_name);
  if ( v9 )
    return v9 < 0;
  else
    return allocRecordIndex0 < allocRecordIndex1;
}

/*
==============
R_RT_Tracking_AllocRecordIndexLess_Address
==============
*/
bool R_RT_Tracking_AllocRecordIndexLess_Address(unsigned int allocRecordIndex0, unsigned int allocRecordIndex1, const R_RT_Tracking_AllocRecord *allocRecords)
{
  return allocRecords[allocRecordIndex0].m_address < allocRecords[allocRecordIndex1].m_address;
}

/*
==============
R_RT_Tracking_AddImageRefRecord_Input
==============
*/
void R_RT_Tracking_AddImageRefRecord_Input(R_RT_Tracking_ImageAppendix *appendix, const void *refAddr, unsigned int codeTexture, const char *location)
{
  unsigned __int16 v8; 
  unsigned int m_recordCount; 
  unsigned int v10; 
  __int128 v11; 
  R_RT_Tracking_ImageRefRecord addRecord; 

  if ( !location && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1564, ASSERT_TYPE_ASSERT, "(location)", (const char *)&queryFormat, "location") )
    __debugbreak();
  LODWORD(v11) = 0x10000;
  v8 = truncate_cast<unsigned short,unsigned int>(codeTexture);
  m_recordCount = appendix->m_recordCount;
  DWORD1(v11) = v8;
  *((_QWORD *)&v11 + 1) = location;
  *(_OWORD *)&addRecord.m_refType = v11;
  addRecord.m_refAddr = refAddr;
  v10 = R_RT_Tracking_AddRefRecord_R_RT_Tracking_ImageRefRecord_32_(m_recordCount, (R_RT_Tracking_ImageRefRecord (*)[32])appendix->m_records, &addRecord);
  truncate_store<unsigned char,unsigned int>(&appendix->m_recordCount, v10);
}

/*
==============
R_RT_Tracking_AddSurfaceRecord
==============
*/
void R_RT_Tracking_AddSurfaceRecord(R_RT_Tracking_SurfaceInfo *surfaceInfo, R_RT_FlagsInternal rtFlags, unsigned __int16 surfaceID, const char *name, const void *mem)
{
  __int16 v7; 
  R_RT_Tracking_SurfacePoolID v9; 
  R_RT_Tracking_SurfacePool *v10; 
  __int64 m_recordCount; 
  __int64 v12; 

  v7 = rtFlags;
  if ( surfaceInfo->m_surfacePoolID != R_RT_Tracking_SurfacePoolID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1261, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_surfacePoolID == R_RT_Tracking_SurfacePoolID_INVALID)", (const char *)&queryFormat, "surfaceInfo->m_surfacePoolID == R_RT_Tracking_SurfacePoolID_INVALID") )
    __debugbreak();
  if ( (v7 & 0x4000) != 0 )
  {
    v9 = R_RT_Tracking_SurfacePoolID_PlacedResource;
  }
  else if ( (v7 & 0x2000) != 0 )
  {
    if ( (v7 & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 285, ASSERT_TYPE_ASSERT, "(!( rtFlags & R_RT_FlagInternal_View ))", (const char *)&queryFormat, "!( rtFlags & R_RT_FlagInternal_View )") )
      __debugbreak();
    v9 = R_RT_Tracking_SurfacePoolID_Abandoned;
  }
  else if ( (v7 & 0x20) != 0 )
  {
    v9 = R_RT_Tracking_SurfacePoolID_View;
  }
  else
  {
    v9 = (v7 & 3u) < 2;
  }
  v10 = &s_R_RT_Tracking.m_surfacePools[(unsigned __int8)v9];
  m_recordCount = v10->m_recordCount;
  if ( (unsigned int)m_recordCount >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 260, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < ( sizeof( *array_counter( surfacePool->m_records ) ) + 0 ))", (const char *)&queryFormat, "surfaceRecordIndex < ARRAY_COUNT( surfacePool->m_records )") )
    __debugbreak();
  v12 = m_recordCount;
  v10->m_records[v12].m_mem = mem;
  v10->m_records[v12].m_name = name;
  v10->m_records[v12].m_surfaceID = surfaceID;
  v10->m_recordCount = m_recordCount + 1;
  surfaceInfo->m_surfaceRecordIndex = m_recordCount;
  surfaceInfo->m_surfacePoolID = v9;
}

/*
==============
R_RT_Tracking_AssertUnreferencedImage
==============
*/
void R_RT_Tracking_AssertUnreferencedImage(const GfxImage *image)
{
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  R_RT_Tracking_ImageAppendix *v3; 
  int v4; 
  int v5; 

  Sys_CheckAcquireLock(&s_R_RT_Tracking.m_imageRefLock);
  AcquireSRWLockShared((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
  ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(image);
  v3 = ImageRefAppendix;
  if ( ImageRefAppendix )
  {
    v4 = ImageRefAppendix->m_refCounts[0] + ImageRefAppendix->m_refCounts[1];
    if ( v4 )
    {
      R_RT_Tracking_DumpImageRefRecords(ImageRefAppendix, image->name);
      v5 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1859, ASSERT_TYPE_ASSERT, "(refCountTotal == 0)", "%s\n\tAttempting to destroy RT %simage \"%s\" while still referenced %d time(s).  See reference listing above.\n", "refCountTotal == 0", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)v3->m_which], image->name, v5) )
        __debugbreak();
    }
    ReleaseSRWLockShared((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
  }
}

/*
==============
R_RT_Tracking_AssertUnreferencedSurface
==============
*/
void R_RT_Tracking_AssertUnreferencedSurface(const R_RT_Surface *surface)
{
  int m_refCount; 
  int v3; 

  Sys_CheckAcquireLock(&s_R_RT_Tracking.m_surfaceRefLock);
  AcquireSRWLockShared((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  if ( surface->m_tracking.m_refRecordCount > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1469, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_refRecordCount <= ( sizeof( *array_counter( surfaceInfo->m_refRecords ) ) + 0 ))", (const char *)&queryFormat, "surfaceInfo->m_refRecordCount <= ARRAY_COUNT( surfaceInfo->m_refRecords )") )
    __debugbreak();
  m_refCount = surface->m_tracking.m_refCount;
  if ( surface->m_tracking.m_refCount )
  {
    R_RT_Tracking_DumpSurfaceRefRecords(&surface->m_tracking, surface->m_image.m_base.name);
    v3 = m_refCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1476, ASSERT_TYPE_ASSERT, "(refCount == 0)", "%s\n\tAttempting to destroy RT \"%s\" while still referenced %d time(s).  See reference listing above.", "refCount == 0", surface->m_image.m_base.name, v3) )
      __debugbreak();
  }
  ReleaseSRWLockShared((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  Sys_CheckReleaseLock(&s_R_RT_Tracking.m_surfaceRefLock);
}

/*
==============
R_RT_Tracking_AsyncGetDebugDrawStats
==============
*/
char R_RT_Tracking_AsyncGetDebugDrawStats(R_RT_Tracking_DebugDrawStats *outDebugDrawStats)
{
  R_RT_Tracking_DebugDrawStats *v1; 

  if ( !s_R_RT_Tracking.r_rtStats->current.enabled )
    return 0;
  v1 = &s_R_RT_Tracking.m_debugDrawStats[s_R_RT_Tracking.m_debugDrawStatsFrameIndex & 1];
  if ( !v1->m_committedMB.m_val )
    return 0;
  *outDebugDrawStats = *v1;
  return 1;
}

/*
==============
R_RT_Tracking_BackendFrameBegin
==============
*/
void R_RT_Tracking_BackendFrameBegin(void)
{
  ;
}

/*
==============
R_RT_Tracking_BackendFrameEnd
==============
*/
void R_RT_Tracking_BackendFrameEnd(void)
{
  unsigned __int16 size; 
  R_RT_Tracking_Totals *v1; 
  __int32 v2; 
  __m256i *v3; 
  __m256i v4; 
  __m256i v5; 
  __m256i v6; 
  unsigned int v7; 
  __int64 v8; 
  R_RT_Tracking_DebugDrawStats result; 

  Profile_Begin(121);
  if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared", -2i64) )
    __debugbreak();
  if ( s_R_RT_Tracking.m_totalsQueue.size == 64 )
  {
    if ( !s_R_RT_Tracking.m_totalsQueue.cleared )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_R_RT_Tracking.m_totalsQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
    }
    s_R_RT_Tracking.m_totalsQueue.start = (LOBYTE(s_R_RT_Tracking.m_totalsQueue.start) + 1) & 0x3F;
    --s_R_RT_Tracking.m_totalsQueue.size;
  }
  if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  size = s_R_RT_Tracking.m_totalsQueue.size;
  if ( s_R_RT_Tracking.m_totalsQueue.size >= 0x40u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
    __debugbreak();
  s_R_RT_Tracking.m_totalsQueue.size = size + 1;
  v1 = IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  R_RT_Tracking_GetTotals(v1);
  v2 = s_R_RT_Tracking.m_debugDrawStatsFrameIndex + 1;
  v3 = (__m256i *)R_RT_Tracking_GenerateDebugDrawStats(&result);
  v4 = v3[1];
  v5 = v3[2];
  v6 = v3[3];
  v7 = v3[4].m256i_u32[0];
  v8 = v2 & 1;
  *(__m256i *)&s_R_RT_Tracking.m_debugDrawStats[v8].m_surfaces.m_val = *v3;
  *(__m256i *)&s_R_RT_Tracking.m_debugDrawStats[v8].m_heapCommittedMB.m_val = v4;
  *(__m256i *)&s_R_RT_Tracking.m_debugDrawStats[v8].m_deadCommittedMB.m_elems[3] = v5;
  *(__m256i *)&s_R_RT_Tracking.m_debugDrawStats[v8].m_esramSuccessMB.m_elems[3] = v6;
  s_R_RT_Tracking.m_debugDrawStats[v8].m_esramSuccesses.m_avg = v7;
  if ( ((unsigned __int8)&s_R_RT_Tracking.m_debugDrawStatsFrameIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_R_RT_Tracking.m_debugDrawStatsFrameIndex) )
    __debugbreak();
  _InterlockedExchange(&s_R_RT_Tracking.m_debugDrawStatsFrameIndex, v2);
  if ( s_R_RT_Tracking.r_rtDumpQueued )
  {
    R_RT_Tracking_Dump();
    s_R_RT_Tracking.r_rtDumpQueued = 0;
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_Tracking_BatchImageRefDecrement_GPU
==============
*/
void R_RT_Tracking_BatchImageRefDecrement_GPU(const GfxImage **images, unsigned int imageCount, GfxShaderImageSetStage shaderImageSetID)
{
  char v3; 
  __int64 v5; 
  const GfxImage *v6; 
  const GfxImage **v7; 
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  const GfxImage **v12; 

  if ( imageCount )
  {
    v12 = images;
    v3 = 0;
    v5 = 0i64;
    do
    {
      v6 = images[v5];
      v7 = &images[v5];
      if ( v6 )
      {
        if ( v6->category == IMG_CATEGORY_FIRST_UNMANAGED )
        {
          ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(images[v5]);
          if ( ImageRefAppendix )
          {
            if ( !v3 )
            {
              R_RT_Tracking_LockWriteWithDBPump(&s_R_RT_Tracking.m_imageRefLock);
              v3 = 1;
            }
            v9 = ImageRefAppendix->m_refCounts[1];
            if ( !ImageRefAppendix->m_refCounts[1] )
            {
              LODWORD(v11) = v5;
              LODWORD(v10) = 32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1825, ASSERT_TYPE_ASSERT, "(refCount > 0)", "%s\n\tUnmatched RT %simage \"%s\" %s-reference decrement. refcountmax=%d, resourceIndex=%d, refAddr=0x%p\n", "refCount > 0", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], v6->name, s_R_RT_Tracking_imageRefShaderTypeNames[(unsigned __int8)shaderImageSetID], v10, v11, v7) )
                __debugbreak();
            }
            truncate_store<unsigned char,unsigned int>(&ImageRefAppendix->m_refCounts[1], v9 - 1);
            if ( v9 == 1 )
              R_RT_Tracking_RemoveAllImageRefRecords(ImageRefAppendix, R_RT_Tracking_ImageRefType_GPU);
            else
              R_RT_Tracking_RemoveImageRefRecord_GPU(ImageRefAppendix, v7, shaderImageSetID, v5);
          }
          images = v12;
        }
        *v7 = NULL;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (_DWORD)v5 != imageCount );
    if ( v3 )
    {
      s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
      Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
    }
  }
}

/*
==============
R_RT_Tracking_BatchImageRefDecrement_Input
==============
*/
void R_RT_Tracking_BatchImageRefDecrement_Input(const GfxImage **images, unsigned int imageCount, const GfxImage *unrefImage, const GfxImage *badImage)
{
  char v4; 
  __int64 v6; 
  const GfxImage *v7; 
  const GfxImage **v8; 
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  int v10; 
  const char *CodeTextureName; 
  __int64 v12; 
  const GfxImage **v13; 
  unsigned int v14; 
  const GfxImage *v15; 

  if ( imageCount )
  {
    v15 = badImage;
    v14 = imageCount;
    v13 = images;
    v4 = 0;
    v6 = 0i64;
    do
    {
      v7 = images[v6];
      v8 = &images[v6];
      if ( v7 != unrefImage )
      {
        if ( v7 && v7 != badImage && v7->category == IMG_CATEGORY_FIRST_UNMANAGED )
        {
          ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(images[v6]);
          if ( ImageRefAppendix )
          {
            if ( !v4 )
            {
              R_RT_Tracking_LockWriteWithDBPump(&s_R_RT_Tracking.m_imageRefLock);
              v4 = 1;
            }
            v10 = ImageRefAppendix->m_refCounts[0];
            if ( !ImageRefAppendix->m_refCounts[0] )
            {
              CodeTextureName = R_GetCodeTextureName(v6);
              LODWORD(v12) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1748, ASSERT_TYPE_ASSERT, "(refCount > 0)", "%s\n\tUnmatched RT %simage \"%s\" input-reference decrement.  codeTexture=%s(%d), refAddr=0x%p\n", "refCount > 0", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], v7->name, CodeTextureName, v12, v8) )
                __debugbreak();
            }
            truncate_store<unsigned char,unsigned int>(ImageRefAppendix->m_refCounts, v10 - 1);
            if ( v10 == 1 )
              R_RT_Tracking_RemoveAllImageRefRecords(ImageRefAppendix, R_RT_Tracking_ImageRefType_Input);
            else
              R_RT_Tracking_RemoveImageRefRecord_Input(ImageRefAppendix, v8, v6);
          }
          imageCount = v14;
          badImage = v15;
          images = v13;
        }
        *v8 = unrefImage;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (_DWORD)v6 != imageCount );
    if ( v4 )
    {
      s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
      Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
    }
  }
}

/*
==============
R_RT_Tracking_BatchImageRefIncrement_Input
==============
*/
void R_RT_Tracking_BatchImageRefIncrement_Input(const GfxImage **images, unsigned int imageCount, const char *location, const GfxImage *badImage)
{
  char v4; 
  __int64 v6; 
  const GfxImage *v7; 
  const GfxImage **v8; 
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  unsigned int v10; 
  const char *CodeTextureName; 
  __int64 v12; 
  __int64 v13; 
  const GfxImage **v14; 
  const GfxImage *v16; 

  if ( imageCount )
  {
    v16 = badImage;
    v14 = images;
    v4 = 0;
    v6 = 0i64;
    do
    {
      v7 = images[v6];
      v8 = &images[v6];
      if ( v7 && v7 != badImage && v7->category == IMG_CATEGORY_FIRST_UNMANAGED )
      {
        ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(images[v6]);
        if ( ImageRefAppendix )
        {
          if ( !v4 )
          {
            R_RT_Tracking_LockWriteWithDBPump(&s_R_RT_Tracking.m_imageRefLock);
            v4 = 1;
          }
          v10 = ImageRefAppendix->m_refCounts[0] + 1;
          if ( v10 > 0x20 )
          {
            CodeTextureName = R_GetCodeTextureName(v6);
            LODWORD(v13) = v6;
            LODWORD(v12) = 32;
            Com_Printf(1, "Too many RT %simage \"%s\" input-references (limit=%d) - probable leak.  codeTexture=%s(%d), location=%s, refAddr=0x%p\n", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], v7->name, v12, CodeTextureName, v13, location, v8);
            R_RT_Tracking_DumpImageRefRecords(ImageRefAppendix, v7->name);
          }
          truncate_store<unsigned char,unsigned int>(ImageRefAppendix->m_refCounts, v10);
          R_RT_Tracking_AddImageRefRecord_Input(ImageRefAppendix, v8, v6, location);
        }
        images = v14;
        badImage = v16;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (_DWORD)v6 != imageCount );
    if ( v4 )
    {
      s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
      Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
    }
  }
}

/*
==============
R_RT_Tracking_BindSurfaceInfo
==============
*/
void R_RT_Tracking_BindSurfaceInfo(R_RT_Tracking_SurfaceInfo *surfaceInfo, unsigned __int16 frontendPass, const char *location)
{
  if ( surfaceInfo->m_allocCounter )
  {
    surfaceInfo->m_frontendPass = frontendPass;
    surfaceInfo->m_location = location;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1290, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_allocCounter)", (const char *)&queryFormat, "surfaceInfo->m_allocCounter") )
      __debugbreak();
    surfaceInfo->m_frontendPass = frontendPass;
    surfaceInfo->m_location = location;
  }
}

/*
==============
R_RT_Tracking_Dump
==============
*/
void R_RT_Tracking_Dump()
{
  R_RT_Tracking_Totals *v0; 
  __int64 m_requestKB; 
  float v2; 
  float v3; 
  float m_successKB; 
  float v5; 
  __int64 m_requests; 
  float m_successes; 
  float v8; 
  int v9; 
  int i; 
  R_RT_AllocationLockSentry v11; 

  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v11);
  v0 = IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  Com_Printf(8, "\n------------ Surface Totals ------------\n");
  R_RT_Tracking_DumpSurfaceTotals(&v0->m_allSurfaceTotals, (const R_RT_Tracking_SurfaceTotals (*)[5])v0->m_surfaceTotals);
  Com_Printf(8, "\n");
  Com_Printf(8, "\n------------ Memory Totals ------------\n");
  R_RT_Tracking_DumpMemTotals((const R_RT_Tracking_MemTotals (*)[6])v0->m_memTotals);
  Com_Printf(8, "\n");
  Com_Printf(8, "\n------------ ESRAM Frame Totals ------------\n");
  Com_Printf(8, "%3d Requests:  %3dMB\n", v0->m_esramFrameTotals.m_requests, (v0->m_esramFrameTotals.m_requestKB + 1023) >> 10);
  Com_Printf(8, "%3d Successes: %3dMB\n", v0->m_esramFrameTotals.m_successes, (v0->m_esramFrameTotals.m_successKB + 1023) >> 10);
  m_requestKB = v0->m_esramFrameTotals.m_requestKB;
  v2 = 0.0;
  v3 = 0.0;
  if ( (_DWORD)m_requestKB )
  {
    m_successKB = (float)v0->m_esramFrameTotals.m_successKB;
    v5 = (float)m_requestKB;
    v3 = (float)(m_successKB * 100.0) / v5;
  }
  m_requests = v0->m_esramFrameTotals.m_requests;
  if ( (_DWORD)m_requests )
  {
    m_successes = (float)v0->m_esramFrameTotals.m_successes;
    v8 = (float)m_requests;
    v2 = (float)(m_successes * 100.0) / v8;
  }
  Com_Printf(8, "%3.0f%% Success-Rate (%3.0f%% by size)\n", v2, v3);
  Com_Printf(8, "\n");
  Com_Printf(8, "\n------------ Surface Records ------------\n\n");
  v9 = 0;
  for ( i = 0; i != 5; ++i )
  {
    R_RT_Tracking_DumpSurfacePool(8, (R_RT_Tracking_SurfacePoolID)i);
    Com_Printf(8, "\n");
  }
  Com_Printf(8, "\n------------ Heap Allocations ------------\n\n");
  do
  {
    R_RT_Tracking_DumpHeapPool((R_RT_Heap_PoolID)v9);
    Com_Printf(8, "\n");
    ++v9;
  }
  while ( v9 != 4 );
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v11);
}

/*
==============
R_RT_Tracking_DumpAllSurfacePools
==============
*/
void R_RT_Tracking_DumpAllSurfacePools(int conChannel)
{
  int i; 

  Com_Printf(conChannel, "\n------------ Surface Records ------------\n\n");
  for ( i = 0; i != 5; ++i )
  {
    R_RT_Tracking_DumpSurfacePool(conChannel, (R_RT_Tracking_SurfacePoolID)i);
    Com_Printf(conChannel, "\n");
  }
}

/*
==============
R_RT_Tracking_DumpAllocRecords
==============
*/
void R_RT_Tracking_DumpAllocRecords(const R_RT_Tracking_AllocRecord *allocRecords, unsigned int allocRecordCount)
{
  __int64 rowCount; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v16; 
  std::_Ref_fn<R_RT_Tracking_AllocRecordIndexLess> v20; 
  R_RT_Tracking_AllocRecordIndexLess _Val; 
  IWString_FormatTable_Config formatTableConfig; 
  R_RT_Tracking_AllocRecordIndexLess v23; 
  unsigned int outColumnWidths[8]; 
  unsigned int _First[4]; 
  char tempRowText[4096]; 

  if ( allocRecordCount )
  {
    rowCount = allocRecordCount;
    formatTableConfig.columnSeparator = " | ";
    formatTableConfig.lineSuffix = (char *)&queryFormat.fmt + 3;
    formatTableConfig.linePrefix = "    ";
    formatTableConfig.EmitLine = R_RT_Tracking_DumpAllocRecords_EmitLine;
    v4 = 0i64;
    *(_DWORD *)&formatTableConfig.printHeader = 2949377;
    if ( allocRecordCount >= 0x10 )
    {
      v5 = 8;
      do
      {
        v6 = v5 - 4;
        _XMM0 = (unsigned int)v4;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v4] = _XMM1;
        _XMM0 = (unsigned int)v6;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v6] = _XMM1;
        v4 = (unsigned int)(v4 + 16);
        _XMM0 = v5;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v5] = _XMM1;
        v16 = v5 + 4;
        v5 += 16;
        _XMM0 = (unsigned int)v16;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v16] = _XMM1;
      }
      while ( (_DWORD)v4 != (rowCount & 0xFFFFFFF0) );
    }
    for ( ; (_DWORD)v4 != (_DWORD)rowCount; v4 = (unsigned int)(v4 + 1) )
      _First[v4] = v4;
    _Val.m_allocRecords = allocRecords;
    _Val.m_AllocRecordIndexLess = s_R_RT_Tracking_allocOrderingLessCBs[s_R_RT_Tracking.r_rtAllocOrder->current.integer];
    v23 = _Val;
    v20._Fn = std::_Pass_fn<R_RT_Tracking_AllocRecordIndexLess,0>(&_Val)._Fn;
    std::_Sort_unchecked<unsigned int *,std::_Ref_fn<R_RT_Tracking_AllocRecordIndexLess>>(_First, &_First[rowCount], rowCount, (std::_Ref_fn<R_RT_Tracking_AllocRecordIndexLess>)v20._Fn->m_allocRecords);
    IWString_FormatTable_GetColumnWidths(outColumnWidths, tempRowText, 0x1000ui64, s_R_RT_Tracking_dumpAllocColumns, 5u, rowCount, allocRecords, formatTableConfig.printHeader);
    IWString_FormatTable(tempRowText, 0x1000ui64, s_R_RT_Tracking_dumpAllocColumns, 5u, rowCount, allocRecords, &formatTableConfig, outColumnWidths, _First);
  }
}

/*
==============
R_RT_Tracking_DumpAllocRecords_EmitLine
==============
*/
void R_RT_Tracking_DumpAllocRecords_EmitLine(const char *text, unsigned int __formal, const void *a3)
{
  Com_Printf(8, (const char *)&queryFormat, text);
}

/*
==============
R_RT_Tracking_DumpCommand
==============
*/
void R_RT_Tracking_DumpCommand()
{
  s_R_RT_Tracking.r_rtDumpQueued = 1;
}

/*
==============
R_RT_Tracking_DumpHeapPool
==============
*/
void R_RT_Tracking_DumpHeapPool(R_RT_Heap_PoolID heapPoolID)
{
  __int64 v1; 
  __int64 AllocRecords; 
  unsigned int v3; 
  int v4; 
  R_RT_Tracking_AllocRecord outAllocRecords; 

  v1 = (unsigned __int8)heapPoolID;
  AllocRecords = R_RT_Heap_GetAllocRecords(&outAllocRecords, heapPoolID);
  v4 = v1;
  v3 = (g_R_RT_Heap_poolConfigs[v1].m_blockSize + 0xFFFFF) >> 20;
  Com_Printf(8, "%d/%d %dMB-Pool%d Heap Allocations\n", AllocRecords, g_R_RT_Heap_poolConfigs[v1].m_blockCountMax, v3, v4);
  R_RT_Tracking_DumpAllocRecords(&outAllocRecords, AllocRecords);
}

/*
==============
R_RT_Tracking_DumpImageRefRecords
==============
*/
void R_RT_Tracking_DumpImageRefRecords(R_RT_Tracking_ImageAppendix *appendix, const char *name)
{
  __int64 m_recordCount; 
  const char *v5; 
  __int64 v6; 
  unsigned int m_codeTexture; 
  const void *m_refAddr; 
  const char *CodeTextureName; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  R_RT_Tracking_LastUsedLess<R_RT_Tracking_ImageRefRecord> v13; 

  m_recordCount = appendix->m_recordCount;
  std::_Sort_unchecked<R_RT_Tracking_ImageRefRecord *,R_RT_Tracking_LastUsedLess<R_RT_Tracking_ImageRefRecord>>(appendix->m_records, &appendix->m_records[m_recordCount], 24 * m_recordCount / 24, v13);
  v5 = s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)appendix->m_which];
  Com_Printf(1, "Recent RT %simage \"%s\" reference listing (most-recent to least-recent order):\n", v5, name);
  v6 = 0i64;
  if ( (_DWORD)m_recordCount )
  {
    do
    {
      if ( appendix->m_records[v6].m_refType )
      {
        if ( appendix->m_records[v6].m_refType != R_RT_Tracking_ImageRefType_GPU )
        {
          CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1648, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
          JUMPOUT(0x14234D0C8i64);
        }
        LODWORD(v12) = appendix->m_records[v6].m_context.m_gpu.m_resourceIndex;
        LODWORD(v11) = appendix->m_records[v6].m_useCount;
        Com_Printf(1, "  [%d] %simage %s-referenced at %s %d time(s).  resourceIndex=%d, refAddr=0x%p\n", (unsigned int)v6, v5, s_R_RT_Tracking_imageRefShaderTypeNames[(unsigned __int8)appendix->m_records[v6].m_context.m_gpu.m_shaderImageSetID], appendix->m_records[v6].m_location, v11, v12, appendix->m_records[v6].m_refAddr);
      }
      else
      {
        m_codeTexture = appendix->m_records[v6].m_context.m_input.m_codeTexture;
        m_refAddr = appendix->m_records[v6].m_refAddr;
        CodeTextureName = R_GetCodeTextureName(m_codeTexture);
        LODWORD(v12) = m_codeTexture;
        LODWORD(v10) = appendix->m_records[v6].m_useCount;
        Com_Printf(1, "  [%d] %simage input-referenced at %s %d time(s).  codeTexture=%s(%d), refAddr=0x%p\n", (unsigned int)v6, v5, appendix->m_records[v6].m_location, v10, CodeTextureName, v12, m_refAddr);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (_DWORD)v6 != (_DWORD)m_recordCount );
  }
}

/*
==============
R_RT_Tracking_DumpMemTotals
==============
*/
void R_RT_Tracking_DumpMemTotals(const R_RT_Tracking_MemTotals (*memTotals)[6])
{
  char *v2; 
  const unsigned int *v3; 
  __int64 v4; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  _QWORD *v15; 
  unsigned __int16 *p_m_allocLimit; 
  const char **v17; 
  __int64 v18; 
  _DWORD *v19; 
  const char **v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  const char *v24; 
  int v25; 
  __int64 v26; 
  char *fmt; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  R_RT_Tracking_TotalStat result; 
  R_RT_Tracking_TotalStat v40; 
  R_RT_Tracking_TotalStat v41; 
  R_RT_Tracking_TotalStat v42; 
  R_RT_Tracking_TotalStat v43; 
  R_RT_Tracking_TotalStat v44; 
  char v45; 

  v2 = &v45;
  v3 = &(*memTotals)[0].m_committedKB[1];
  v4 = 6i64;
  do
  {
    v36 = (__int128)*R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&result, v3 - 1, v3);
    v37 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&v40, v3 - 1);
    v38 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&v41, v3);
    *((R_RT_Tracking_TotalStat *)v2 - 2) = *R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_short_(&v42, (const unsigned __int16 *)v3 - 6, (const unsigned __int16 *)v3 - 5);
    _XMM0 = v36;
    DWORD1(v34) = (unsigned int)(DWORD1(v36) + 1023) >> 10;
    __asm { vpextrq rcx, xmm0, 1 }
    LODWORD(v34) = (unsigned int)(v36 + 1023) >> 10;
    HIDWORD(v34) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    DWORD2(v34) = (unsigned int)(_RCX + 1023) >> 10;
    *((_OWORD *)v2 - 1) = v34;
    *(R_RT_Tracking_TotalStat *)v2 = *R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&v43, (const unsigned __int16 *)v3 - 6);
    _XMM0 = v37;
    DWORD1(v33) = (unsigned int)(DWORD1(v37) + 1023) >> 10;
    __asm { vpextrq rcx, xmm0, 1 }
    LODWORD(v33) = (unsigned int)(v37 + 1023) >> 10;
    HIDWORD(v33) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    DWORD2(v33) = (unsigned int)(_RCX + 1023) >> 10;
    *((_OWORD *)v2 + 1) = v33;
    *((R_RT_Tracking_TotalStat *)v2 + 2) = *R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&v44, (const unsigned __int16 *)v3 - 5);
    _XMM0 = v38;
    DWORD1(v35) = (unsigned int)(DWORD1(v38) + 1023) >> 10;
    __asm { vpextrq rcx, xmm0, 1 }
    LODWORD(v35) = (unsigned int)(v38 + 1023) >> 10;
    v2 += 96;
    v3 += 5;
    HIDWORD(v35) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    DWORD2(v35) = (unsigned int)(_RCX + 1023) >> 10;
    *((_OWORD *)v2 - 3) = v35;
    --v4;
  }
  while ( v4 );
  v11 = 4i64;
  v12 = 4i64;
  v13 = 0i64;
  do
  {
    Com_Printf(8, s_poolSizeFormats[v13], g_R_RT_Heap_poolConfigs[v13].m_blockSize >> 20);
    ++v13;
    --v12;
  }
  while ( v12 );
  v14 = 64i64;
  v15 = &v26 + 32;
  p_m_allocLimit = &(*memTotals)[0].m_allocLimit;
  *(_QWORD *)&v33 = v15;
  v17 = (const char **)s_elemHeaderFormats;
  *(_QWORD *)&v34 = &(*memTotals)[0].m_allocLimit;
  do
  {
    if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    Com_Printf(8, *v17, s_R_RT_Tracking.m_totalsQueue.size);
    v18 = 6i64;
    v19 = (_DWORD *)((char *)v15 + v14 + 16);
    v20 = (const char **)s_memFilterLineFormats;
    do
    {
      v21 = *p_m_allocLimit;
      v22 = *((_DWORD *)p_m_allocLimit + 3) + 1023;
      v23 = (unsigned int)*(v19 - 16);
      v24 = *v20;
      LODWORD(v32) = v19[4];
      LODWORD(v31) = *v19;
      LODWORD(v30) = *(v19 - 4);
      LODWORD(v29) = *(v19 - 8);
      v25 = *(v19 - 12);
      LODWORD(v28) = v22 >> 10;
      LODWORD(fmt) = v25;
      Com_Printf(8, v24, v23, v21, fmt, v28, v29, v30, v31, v32);
      v19 += 24;
      p_m_allocLimit += 10;
      ++v20;
      --v18;
    }
    while ( v18 );
    v15 = (_QWORD *)v33;
    p_m_allocLimit = (unsigned __int16 *)v34;
    ++v17;
    v14 += 4i64;
    --v11;
  }
  while ( v11 );
}

/*
==============
R_RT_Tracking_DumpSurfacePool
==============
*/
void R_RT_Tracking_DumpSurfacePool(int conChannel, R_RT_Tracking_SurfacePoolID surfacePoolID)
{
  const R_RT_Tracking_SurfacePool *v3; 
  __int64 rowCount; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v17; 
  std::_Ref_fn<R_RT_Tracking_SurfaceRecordIndexLess> v21; 
  R_RT_Tracking_SurfaceRecordIndexLess _Val; 
  const R_RT_Tracking_SurfacePool *userContext; 
  int v24; 
  IWString_FormatTable_Config formatTableConfig; 
  R_RT_Tracking_SurfaceRecordIndexLess v26; 
  unsigned int outColumnWidths[8]; 
  unsigned int _First[4]; 
  char tempRowText[4096]; 

  v3 = &s_R_RT_Tracking.m_surfacePools[surfacePoolID];
  rowCount = v3->m_recordCount;
  Com_Printf(conChannel, "%d %s Surface Records\n", rowCount, s_R_RT_Tracking_surfacePoolNames[surfacePoolID]);
  if ( (_DWORD)rowCount )
  {
    *(_DWORD *)&formatTableConfig.printHeader = 2949377;
    formatTableConfig.columnSeparator = " | ";
    formatTableConfig.lineSuffix = (char *)&queryFormat.fmt + 3;
    formatTableConfig.linePrefix = "    ";
    formatTableConfig.EmitLine = R_RT_Tracking_DumpSurfacePool_EmitLine;
    v5 = 0i64;
    userContext = v3;
    v24 = conChannel;
    if ( (unsigned int)rowCount >= 0x10 )
    {
      v6 = 8;
      do
      {
        v7 = v6 - 4;
        _XMM0 = (unsigned int)v5;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v5] = _XMM1;
        _XMM0 = (unsigned int)v7;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v7] = _XMM1;
        v5 = (unsigned int)(v5 + 16);
        _XMM0 = v6;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v6] = _XMM1;
        v17 = v6 + 4;
        v6 += 16;
        _XMM0 = (unsigned int)v17;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v17] = _XMM1;
      }
      while ( (_DWORD)v5 != (rowCount & 0xFFFFFFF0) );
    }
    for ( ; (_DWORD)v5 != (_DWORD)rowCount; v5 = (unsigned int)(v5 + 1) )
      _First[v5] = v5;
    _Val.m_surfacePool = v3;
    _Val.m_SurfaceIDLess = s_R_RT_Tracking_surfaceOrderingLessCBs[s_R_RT_Tracking.r_rtSurfaceOrder->current.integer];
    v26 = _Val;
    v21._Fn = std::_Pass_fn<R_RT_Tracking_SurfaceRecordIndexLess,0>(&_Val)._Fn;
    std::_Sort_unchecked<unsigned int *,std::_Ref_fn<R_RT_Tracking_SurfaceRecordIndexLess>>(_First, &_First[rowCount], rowCount, (std::_Ref_fn<R_RT_Tracking_SurfaceRecordIndexLess>)v21._Fn->m_surfacePool);
    IWString_FormatTable_GetColumnWidths(outColumnWidths, tempRowText, 0x1000ui64, s_R_RT_Tracking_dumpSurfaceColumns, 7u, rowCount, &userContext, formatTableConfig.printHeader);
    IWString_FormatTable(tempRowText, 0x1000ui64, s_R_RT_Tracking_dumpSurfaceColumns, 7u, rowCount, &userContext, &formatTableConfig, outColumnWidths, _First);
  }
}

/*
==============
R_RT_Tracking_DumpSurfacePool_EmitLine
==============
*/
void R_RT_Tracking_DumpSurfacePool_EmitLine(const char *text, unsigned int __formal, const void *userContext)
{
  Com_Printf(*((_DWORD *)userContext + 2), (const char *)&queryFormat, text);
}

/*
==============
R_RT_Tracking_DumpSurfaceRefRecords
==============
*/
void R_RT_Tracking_DumpSurfaceRefRecords(R_RT_Tracking_SurfaceInfo *surfaceInfo, const char *name)
{
  int m_refRecordCount; 
  unsigned int v5; 
  __int64 v6; 
  R_RT_Tracking_LastUsedLess<R_RT_Tracking_SurfaceRefRecord> v7; 

  m_refRecordCount = surfaceInfo->m_refRecordCount;
  std::_Sort_unchecked<R_RT_Tracking_SurfaceRefRecord *,R_RT_Tracking_LastUsedLess<R_RT_Tracking_SurfaceRefRecord>>(surfaceInfo->m_refRecords, &surfaceInfo->m_refRecords[surfaceInfo->m_refRecordCount], (16i64 * surfaceInfo->m_refRecordCount) >> 4, v7);
  Com_Printf(1, "Recent RT \"%s\" reference listing (most-recent to least-recent order):\n", name);
  v5 = 0;
  if ( m_refRecordCount )
  {
    do
    {
      LODWORD(v6) = surfaceInfo->m_refRecords[v5].m_colorRtIndex;
      Com_Printf(1, "  [%d] Referenced at %s.  colorRtIndex=%d\n", v5, surfaceInfo->m_refRecords[v5].m_location, v6);
      ++v5;
    }
    while ( v5 != m_refRecordCount );
  }
}

/*
==============
R_RT_Tracking_DumpSurfaceTotals
==============
*/
void R_RT_Tracking_DumpSurfaceTotals(const R_RT_Tracking_SurfaceTotals *allSurfaceTotals, const R_RT_Tracking_SurfaceTotals (*surfaceTotals)[5])
{
  const R_RT_Tracking_SurfaceTotals *v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned __int64 size; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  R_RT_Tracking_Totals *v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  const unsigned int *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  R_RT_Tracking_Totals *v29; 
  unsigned int v30; 
  R_RT_Tracking_TotalStat *TotalStat_Member_unsigned_int; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v43; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmtg; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  R_RT_Tracking_TotalStat result; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned __int64 v101; 
  unsigned int v102; 
  int v103; 
  __int64 v104; 
  __int128 v105; 
  __int128 v106; 
  __int128 v107; 
  __int128 v108; 
  __int128 v109; 
  __int128 v110; 
  __int128 v111; 
  __int128 v112; 
  __int128 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  unsigned __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  __int128 v121; 
  __int128 v122; 
  __int128 v123; 
  R_RT_Tracking_TotalStat v124; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int memberLa; 
  unsigned int v130; 
  unsigned int v131; 
  unsigned int v132; 
  unsigned int v133; 
  unsigned int v134; 

  v3 = allSurfaceTotals;
  v107 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)allSurfaceTotals);
  v108 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[3]);
  v4 = (unsigned int)IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  v5 = (_DWORD)surfaceTotals - v4 + 24;
  v6 = (_DWORD)v3 - v4;
  v130 = v5;
  v133 = (_DWORD)v3 - v4;
  if ( !s_R_RT_Tracking.m_totalsQueue.cleared )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    v6 = v133;
    v5 = v130;
  }
  size = s_R_RT_Tracking.m_totalsQueue.size;
  v8 = 0;
  v89 = s_R_RT_Tracking.m_totalsQueue.size;
  v9 = -1;
  LODWORD(v104) = 0;
  v10 = -1;
  v93 = -1;
  v11 = 0;
  v134 = 0;
  v12 = 0i64;
  v13 = 0;
  if ( s_R_RT_Tracking.m_totalsQueue.size )
  {
    v14 = v5;
    v15 = v6;
    do
    {
      if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( v13 >= s_R_RT_Tracking.m_totalsQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
        __debugbreak();
      v16 = &s_R_RT_Tracking.m_totalsQueue.entries[((_BYTE)v13 + LOBYTE(s_R_RT_Tracking.m_totalsQueue.start)) & 0x3F];
      v17 = *(unsigned __int16 *)((char *)&v16->m_allSurfaceTotals.m_insts + v15) - *(unsigned __int16 *)((char *)&v16->m_allSurfaceTotals.m_insts + v14);
      size = v89;
      v104 = v17;
      if ( v17 < v10 )
        v10 = v17;
      if ( v11 < v17 )
        v11 = v17;
      v12 += v17;
      ++v13;
    }
    while ( v13 != v89 );
    v3 = allSurfaceTotals;
    v9 = -1;
    v93 = v10;
    v8 = 0;
    v134 = v11;
  }
  v18 = (unsigned int)size;
  v19 = v12 + (size >> 1);
  v20 = (const unsigned int *)surfaceTotals;
  v117 = v19 / v18;
  v109 = (__int128)*R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_short_(&result, (const unsigned __int16 *)surfaceTotals, (const unsigned __int16 *)&(*surfaceTotals)[1]);
  v110 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)surfaceTotals);
  v111 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[1]);
  v112 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[2]);
  v113 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[4]);
  v106 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, &v3->m_sizeKB);
  v105 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, &(*surfaceTotals)[3].m_sizeKB);
  v21 = (unsigned int)IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  v22 = (_DWORD)surfaceTotals - v21 + 28;
  v126 = (_DWORD)v3 - v21 + 4;
  v131 = v22;
  if ( !s_R_RT_Tracking.m_totalsQueue.cleared )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    v22 = v131;
  }
  v23 = s_R_RT_Tracking.m_totalsQueue.size;
  v24 = 0;
  v90 = s_R_RT_Tracking.m_totalsQueue.size;
  v25 = 0i64;
  v132 = 0;
  v26 = 0;
  LODWORD(v27) = 0;
  if ( s_R_RT_Tracking.m_totalsQueue.size )
  {
    v28 = v22;
    do
    {
      if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( v26 >= s_R_RT_Tracking.m_totalsQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
        __debugbreak();
      v29 = &s_R_RT_Tracking.m_totalsQueue.entries[((_BYTE)v26 + LOBYTE(s_R_RT_Tracking.m_totalsQueue.start)) & 0x3F];
      v30 = *(_DWORD *)((char *)&v29->m_allSurfaceTotals.m_insts + v126) - *(_DWORD *)((char *)&v29->m_allSurfaceTotals.m_insts + v28);
      v27 = v30;
      v8 = v30;
      if ( v30 < v9 )
        v9 = *(_DWORD *)((char *)&v29->m_allSurfaceTotals.m_insts + v126) - *(_DWORD *)((char *)&v29->m_allSurfaceTotals.m_insts + v28);
      if ( v24 < v30 )
        v24 = *(_DWORD *)((char *)&v29->m_allSurfaceTotals.m_insts + v126) - *(_DWORD *)((char *)&v29->m_allSurfaceTotals.m_insts + v28);
      v23 = v90;
      v25 += v27;
      ++v26;
    }
    while ( v26 != v90 );
    v20 = (const unsigned int *)surfaceTotals;
    v132 = v24;
  }
  v101 = __PAIR64__(v9, v8);
  v103 = (v25 + (v23 >> 1)) / (unsigned int)v23;
  v102 = v24;
  v121 = (__int128)*R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&result, v20 + 1, v20 + 3);
  v122 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, v20 + 1);
  v123 = (__int128)*R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, v20 + 3);
  result = *R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, v20 + 5);
  TotalStat_Member_unsigned_int = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&v124, v20 + 5);
  _XMM0 = v121;
  v33 = (unsigned int)(v106 + 1023) >> 10;
  v115 = (unsigned int)(DWORD1(v105) + 1023) >> 10;
  memberLa = (unsigned int)(v105 + 1023) >> 10;
  v34 = (unsigned int)(DWORD1(v106) + 1023) >> 10;
  v114 = (unsigned int)(HIDWORD(v105) + 1023) >> 10;
  v91 = (unsigned int)(v27 + 1023) >> 10;
  v118 = (unsigned int)(HIDWORD(v101) + 1023) >> 10;
  v127 = (unsigned int)(DWORD2(v105) + 1023) >> 10;
  v116 = (unsigned int)(v103 + 1023) >> 10;
  v120 = (unsigned int)(DWORD1(v121) + 1023) >> 10;
  v95 = (unsigned int)(v121 + 1023) >> 10;
  __asm { vpextrq rax, xmm0, 1 }
  _XMM0 = v122;
  v119 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  v94 = (unsigned int)(_RAX + 1023) >> 10;
  *(_QWORD *)&v105 = (unsigned int)(DWORD1(v122) + 1023) >> 10;
  v97 = (unsigned int)(v122 + 1023) >> 10;
  __asm { vpextrq rax, xmm0, 1 }
  _XMM0 = v123;
  __asm { vpextrq r13, xmm0, 1 }
  *(_QWORD *)&v121 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  _XMM0 = result;
  v96 = (unsigned int)(_RAX + 1023) >> 10;
  __asm { vpextrq rsi, xmm0, 1 }
  *(_QWORD *)&v106 = (unsigned int)(DWORD1(v123) + 1023) >> 10;
  v98 = (unsigned int)(_R13 + 1023) >> 10;
  _XMM0 = *TotalStat_Member_unsigned_int;
  v43 = *(_QWORD *)&TotalStat_Member_unsigned_int->m_val;
  v99 = (unsigned int)(v123 + 1023) >> 10;
  __asm { vpextrq rbx, xmm0, 1 }
  v101 = (result.m_min + 1023) >> 10;
  v100 = (result.m_val + 1023) >> 10;
  LODWORD(v53) = v34;
  LODWORD(fmt) = DWORD1(v107);
  Com_Printf(8, "%3d Surfaces:            %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v107, v33, fmt, v53, DWORD2(v107), (unsigned int)(DWORD2(v106) + 1023) >> 10, HIDWORD(v107), (unsigned int)(HIDWORD(v106) + 1023) >> 10);
  LODWORD(v82) = v114;
  LODWORD(v75) = HIDWORD(v108);
  LODWORD(v68) = v127;
  LODWORD(v61) = DWORD2(v108);
  LODWORD(v54) = v115;
  LODWORD(fmta) = DWORD1(v108);
  Com_Printf(8, "   %3d Dead:             %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v108, memberLa, fmta, v54, v61, v68, v75, v82);
  LODWORD(v83) = v116;
  LODWORD(v76) = v117;
  LODWORD(v69) = (v132 + 1023) >> 10;
  LODWORD(v62) = v134;
  LODWORD(v55) = v118;
  LODWORD(fmtb) = v93;
  Com_Printf(8, "   %3d Live:             %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v104, v91, fmtb, v55, v62, v69, v76, v83);
  LODWORD(v84) = v119;
  LODWORD(v77) = HIDWORD(v109);
  LODWORD(v70) = v94;
  LODWORD(v63) = DWORD2(v109);
  LODWORD(v56) = v120;
  LODWORD(fmtc) = DWORD1(v109);
  Com_Printf(8, "      %3d Heap:          %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v109, v95, fmtc, v56, v63, v70, v77, v84);
  LODWORD(v85) = v121;
  LODWORD(v78) = HIDWORD(v110);
  LODWORD(v71) = v96;
  LODWORD(v64) = DWORD2(v110);
  LODWORD(v57) = v105;
  LODWORD(fmtd) = DWORD1(v110);
  Com_Printf(8, "         %3d MultiFrame: %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v110, v97, fmtd, v57, v64, v71, v78, v85);
  LODWORD(v86) = (unsigned int)(HIDWORD(_R13) + 1023) >> 10;
  LODWORD(v79) = HIDWORD(v111);
  LODWORD(v72) = v98;
  LODWORD(v65) = DWORD2(v111);
  LODWORD(v58) = v106;
  LODWORD(fmte) = DWORD1(v111);
  Com_Printf(8, "         %3d InFrame:    %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v111, v99, fmte, v58, v65, v72, v79, v86);
  LODWORD(v87) = (unsigned int)(HIDWORD(_RSI) + 1023) >> 10;
  LODWORD(v80) = HIDWORD(v112);
  LODWORD(v73) = (unsigned int)(_RSI + 1023) >> 10;
  LODWORD(v66) = DWORD2(v112);
  LODWORD(v59) = v101;
  LODWORD(fmtf) = DWORD1(v112);
  Com_Printf(8, "      %3d View:          %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v112, v100, fmtf, v59, v66, v73, v80, v87);
  LODWORD(v88) = (unsigned int)(HIDWORD(_RBX) + 1023) >> 10;
  LODWORD(v81) = HIDWORD(v113);
  LODWORD(v74) = (unsigned int)(_RBX + 1023) >> 10;
  LODWORD(v67) = DWORD2(v113);
  LODWORD(v60) = (unsigned int)(HIDWORD(v43) + 1023) >> 10;
  LODWORD(fmtg) = DWORD1(v113);
  Com_Printf(8, "      %3d PlacedResource:%3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v113, (unsigned int)(v43 + 1023) >> 10, fmtg, v60, v67, v74, v81, v88);
}

/*
==============
R_RT_Tracking_GenerateDebugDrawStats
==============
*/
R_RT_Tracking_DebugDrawStats *R_RT_Tracking_GenerateDebugDrawStats(R_RT_Tracking_DebugDrawStats *result)
{
  R_RT_Tracking_Totals *v2; 
  R_RT_Tracking_TotalStat *TotalStat_MemberAdd_unsigned_int; 
  __int64 v5; 
  R_RT_Tracking_TotalStat *v7; 
  __int64 v9; 
  R_RT_Tracking_TotalStat v11; 
  R_RT_Tracking_TotalStat *TotalStat_Member_unsigned_int; 
  __int64 v14; 
  R_RT_Tracking_TotalStat *v16; 
  __int64 v18; 
  R_RT_Tracking_TotalStat *v20; 
  __int64 v22; 
  R_RT_Tracking_TotalStat resulta; 

  v2 = IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  result->m_surfaces = *R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&resulta, (const unsigned __int16 *)&v2->m_allSurfaceTotals);
  TotalStat_MemberAdd_unsigned_int = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&resulta, v2->m_memTotals[0].m_committedKB, &v2->m_memTotals[0].m_committedKB[1]);
  _XMM0 = *TotalStat_MemberAdd_unsigned_int;
  v5 = *(_QWORD *)&TotalStat_MemberAdd_unsigned_int->m_val;
  LODWORD(TotalStat_MemberAdd_unsigned_int) = *(_QWORD *)&TotalStat_MemberAdd_unsigned_int->m_val + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(v5) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)TotalStat_MemberAdd_unsigned_int >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  result->m_committedMB = resulta;
  v7 = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&resulta, v2->m_memTotals[1].m_committedKB, &v2->m_memTotals[1].m_committedKB[1]);
  _XMM0 = *v7;
  v9 = *(_QWORD *)&v7->m_val;
  resulta.m_min = (unsigned int)(HIDWORD(*(_QWORD *)&v7->m_val) + 1023) >> 10;
  resulta.m_val = (unsigned int)(v9 + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  LODWORD(v7) = v2->m_memTotals[1].m_reservedKB + 1023;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  v11 = resulta;
  result->m_heapReservedMB = (unsigned int)v7 >> 10;
  result->m_heapCommittedMB = v11;
  TotalStat_Member_unsigned_int = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_memTotals[0].m_committedKB[1]);
  _XMM0 = *TotalStat_Member_unsigned_int;
  v14 = *(_QWORD *)&TotalStat_Member_unsigned_int->m_val;
  LODWORD(TotalStat_Member_unsigned_int) = *(_QWORD *)&TotalStat_Member_unsigned_int->m_val + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(v14) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)TotalStat_Member_unsigned_int >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  result->m_deadCommittedMB = resulta;
  v16 = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_requestKB);
  _XMM0 = *v16;
  v18 = *(_QWORD *)&v16->m_val;
  LODWORD(v16) = *(_QWORD *)&v16->m_val + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(v18) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)v16 >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  result->m_esramRequestMB = resulta;
  v20 = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_successKB);
  _XMM0 = *v20;
  v22 = *(_QWORD *)&v20->m_val;
  LODWORD(v20) = *(_QWORD *)&v20->m_val + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(v22) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)v20 >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  result->m_esramSuccessMB = resulta;
  result->m_esramRequests = *R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_requests);
  result->m_esramSuccesses = *R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_successes);
  return result;
}

/*
==============
R_RT_Tracking_GetImageRefAppendix
==============
*/
R_RT_Tracking_ImageAppendix *R_RT_Tracking_GetImageRefAppendix(const GfxImage *image)
{
  unsigned __int16 *v2; 
  const R_RT_Surface *Surface; 

  if ( image->category != IMG_CATEGORY_FIRST_UNMANAGED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1514, ASSERT_TYPE_ASSERT, "(image->category == IMG_CATEGORY_RENDERTARGET)", (const char *)&queryFormat, "image->category == IMG_CATEGORY_RENDERTARGET") )
    __debugbreak();
  v2 = (unsigned __int16 *)&image[1];
  if ( !LOWORD(image[1].name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1518, ASSERT_TYPE_ASSERT, "(rtImage->m_tracking.m_surfaceID)", (const char *)&queryFormat, "rtImage->m_tracking.m_surfaceID") )
    __debugbreak();
  if ( BYTE3(image[1].name) > 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1519, ASSERT_TYPE_ASSERT, "(rtImage->m_tracking.m_recordCount <= ( sizeof( *array_counter( rtImage->m_tracking.m_records ) ) + 0 ))", (const char *)&queryFormat, "rtImage->m_tracking.m_recordCount <= ARRAY_COUNT( rtImage->m_tracking.m_records )") )
    __debugbreak();
  Surface = R_RT_GetSurface(*v2);
  if ( BYTE2(image[1].name) >= 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1521, ASSERT_TYPE_ASSERT, "(rtImage->m_tracking.m_which < ( sizeof( *array_counter( s_R_RT_Tracking_surfaceImageOffsets ) ) + 0 ))", (const char *)&queryFormat, "rtImage->m_tracking.m_which < ARRAY_COUNT( s_R_RT_Tracking_surfaceImageOffsets )") )
    __debugbreak();
  if ( Surface != (const R_RT_Surface *)((char *)image - s_R_RT_Tracking_surfaceImageOffsets[BYTE2(image[1].name)]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1524, ASSERT_TYPE_ASSERT, "(surface == verifySurface)", (const char *)&queryFormat, "surface == verifySurface") )
    __debugbreak();
  if ( (Surface->m_rtFlagsInternal & 3) == 3 )
    return 0i64;
  return (R_RT_Tracking_ImageAppendix *)v2;
}

/*
==============
R_RT_Tracking_GetSurfaceRecord
==============
*/
R_RT_Tracking_SurfaceRecord *R_RT_Tracking_GetSurfaceRecord(R_RT_Tracking_SurfacePoolID surfacePoolID, unsigned __int16 surfaceRecordIndex)
{
  __int64 v3; 

  v3 = 98312i64 * surfacePoolID;
  if ( surfaceRecordIndex >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1253, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < ( sizeof( *array_counter( surfacePool->m_records ) ) + 0 ))", (const char *)&queryFormat, "surfaceRecordIndex < ARRAY_COUNT( surfacePool->m_records )") )
    __debugbreak();
  return (R_RT_Tracking_SurfaceRecord *)((char *)&s_R_RT_Tracking.m_surfacePools[0].m_records[surfaceRecordIndex] + v3);
}

/*
==============
R_RT_Tracking_GetTotals
==============
*/
void R_RT_Tracking_GetTotals(R_RT_Tracking_Totals *outTotals)
{
  unsigned int v2; 
  R_RT_Tracking_SurfaceTotals *m_surfaceTotals; 
  R_RT_Tracking_SurfaceRecord *m_records; 
  R_RT_Surface *blocks; 
  unsigned int v6; 
  unsigned int v7; 
  R_RT_Tracking_SurfaceRecord *v8; 
  R_RT_Tracking_SurfaceRecord *v9; 
  unsigned __int16 m_surfaceID; 
  unsigned int v11; 
  unsigned __int16 v12; 
  R_RT_Tracking_Totals *v13; 
  int v14; 
  R_RT_Heap_PoolConfig *v15; 
  R_RT_Tracking_MemTotals *v16; 
  unsigned int AllocRecords; 
  unsigned int m_blockSize; 
  unsigned int m_blockCountMax; 
  R_RT_Tracking_AllocRecord *v20; 
  unsigned int *p_m_size; 
  __int16 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  int v26; 
  R_RT_AllocationLockSentry v27; 
  int v28; 
  unsigned int v29; 
  R_RT_Tracking_SurfaceRecord *v30; 
  R_RT_Tracking_SurfaceTotals *v31; 
  __int64 v32; 
  R_RT_Tracking_Totals *v33; 
  __int64 v34; 
  R_RT_Tracking_AllocRecord outAllocRecords[4096]; 

  v34 = -2i64;
  v33 = outTotals;
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v27);
  v28 = 0;
  v2 = 0;
  v25 = 0;
  m_surfaceTotals = outTotals->m_surfaceTotals;
  v31 = outTotals->m_surfaceTotals;
  m_records = s_R_RT_Tracking.m_surfacePools[0].m_records;
  v30 = s_R_RT_Tracking.m_surfacePools[0].m_records;
  v32 = 5i64;
  blocks = g_R_RT_ManagerSurfaceAllocator->blocks;
  do
  {
    v29 = *(_DWORD *)&m_records[-1].m_surfaceID;
    v6 = v29;
    v7 = 0;
    v8 = m_records;
    v9 = &m_records[v29];
    if ( m_records != v9 )
    {
      do
      {
        m_surfaceID = v8->m_surfaceID;
        if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
          __debugbreak();
        v7 += blocks[(unsigned __int16)((m_surfaceID & 0x7FFF) - 1)].m_tracking.m_memSize >> 10;
        ++v8;
      }
      while ( v8 != v9 );
      m_records = v30;
      m_surfaceTotals = v31;
      v6 = v29;
      v2 = v25;
    }
    m_surfaceTotals->m_insts = truncate_cast<unsigned short,unsigned int>(v6);
    m_surfaceTotals->m_sizeKB = v7;
    v11 = v6 + v28;
    v28 += v6;
    v2 += v7;
    v25 = v2;
    m_records = (R_RT_Tracking_SurfaceRecord *)((char *)m_records + 98312);
    v30 = m_records;
    v31 = ++m_surfaceTotals;
    --v32;
  }
  while ( v32 );
  v12 = truncate_cast<unsigned short,unsigned int>(v11);
  v13 = v33;
  v33->m_allSurfaceTotals.m_insts = v12;
  v13->m_allSurfaceTotals.m_sizeKB = v2;
  *(_DWORD *)v13->m_memTotals[0].m_allocs = 0;
  v13->m_memTotals[0].m_allocLimit = 0;
  *(_QWORD *)v13->m_memTotals[0].m_committedKB = 0i64;
  *(_QWORD *)&v13->m_memTotals[0].m_reservedKB = 0i64;
  v13->m_memTotals[1].m_allocLimit = 0;
  *(_QWORD *)v13->m_memTotals[1].m_committedKB = 0i64;
  v13->m_memTotals[1].m_reservedKB = 0;
  v14 = 0;
  v26 = 0;
  v15 = g_R_RT_Heap_poolConfigs;
  v16 = &v13->m_memTotals[2];
  do
  {
    AllocRecords = R_RT_Heap_GetAllocRecords(outAllocRecords, (R_RT_Heap_PoolID)v14);
    m_blockSize = v15->m_blockSize;
    m_blockCountMax = v15->m_blockCountMax;
    v16->m_allocLimit = truncate_cast<unsigned short,unsigned int>(m_blockCountMax);
    v16->m_reservedKB = m_blockCountMax * (m_blockSize >> 10);
    *(_DWORD *)v16->m_allocs = 0;
    *(_QWORD *)v16->m_committedKB = 0i64;
    v20 = &outAllocRecords[AllocRecords];
    if ( outAllocRecords != v20 )
    {
      p_m_size = &outAllocRecords[0].m_size;
      do
      {
        v22 = *((_WORD *)p_m_size + 2);
        v23 = 0i64;
        if ( !v22 )
          v23 = 1i64;
        ++v16->m_allocs[v23];
        v24 = 0i64;
        if ( !v22 )
          v24 = 1i64;
        v16->m_committedKB[v24] += (*p_m_size + 1023) >> 10;
        p_m_size += 8;
      }
      while ( p_m_size - 6 != (unsigned int *)v20 );
      v13 = v33;
      v14 = v26;
    }
    v13->m_memTotals[1].m_allocs[0] += v16->m_allocs[0];
    v13->m_memTotals[1].m_allocs[1] += v16->m_allocs[1];
    v13->m_memTotals[1].m_allocLimit += v16->m_allocLimit;
    v13->m_memTotals[1].m_committedKB[0] += v16->m_committedKB[0];
    v13->m_memTotals[1].m_committedKB[1] += v16->m_committedKB[1];
    v13->m_memTotals[1].m_reservedKB += v16->m_reservedKB;
    v26 = ++v14;
    ++v15;
    ++v16;
  }
  while ( v14 != 4 );
  v13->m_memTotals[0].m_allocs[0] += v13->m_memTotals[1].m_allocs[0];
  v13->m_memTotals[0].m_allocs[1] += v13->m_memTotals[1].m_allocs[1];
  v13->m_memTotals[0].m_allocLimit += v13->m_memTotals[1].m_allocLimit;
  v13->m_memTotals[0].m_committedKB[0] += v13->m_memTotals[1].m_committedKB[0];
  v13->m_memTotals[0].m_committedKB[1] += v13->m_memTotals[1].m_committedKB[1];
  v13->m_memTotals[0].m_reservedKB += v13->m_memTotals[1].m_reservedKB;
  v13->m_esramFrameTotals = s_R_RT_ESRAM_Internal.m_frameTotals;
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v27);
}

/*
==============
R_RT_Tracking_GroupRefDecrement
==============
*/
void R_RT_Tracking_GroupRefDecrement(const R_RT_Group *rtGroup)
{
  __int16 v1; 
  unsigned int v3; 
  int m_colorRtCount; 
  __int64 v5; 
  unsigned __int16 m_surfaceID; 
  R_RT_ColorHandle *v7; 
  unsigned __int16 v8; 
  R_RT_Surface *v9; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  __int64 v12; 
  __int64 v13; 
  R_RT_Handle m_depthRt; 

  v3 = 0;
  m_colorRtCount = rtGroup->m_colorRtCount;
  if ( rtGroup->m_colorRtCount )
  {
    do
    {
      v5 = v3;
      m_surfaceID = rtGroup->m_colorRts[v5].m_surfaceID;
      v7 = &rtGroup->m_colorRts[v5];
      if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v8 = (m_surfaceID & 0x7FFF) - 1;
      if ( v8 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
        __debugbreak();
      v9 = &g_R_RT_ManagerSurfaceAllocator->blocks[v8];
      if ( v9->m_tracking.m_allocCounter != v7->m_tracking.m_allocCounter )
      {
        LODWORD(v13) = v7->m_tracking.m_allocCounter;
        LODWORD(v12) = v9->m_tracking.m_allocCounter;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v12, v13, v7->m_tracking.m_name, v7->m_tracking.m_location) )
          __debugbreak();
      }
      m_rtFlagsInternal = v9->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x3000) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
        __debugbreak();
      R_RT_Tracking_SurfaceRefDecrement(v9, v3++);
    }
    while ( v3 != m_colorRtCount );
  }
  m_depthRt = (R_RT_Handle)rtGroup->m_depthRt;
  if ( v1 )
  {
    R_RT_Handle::GetSurface(&m_depthRt);
    Surface = R_RT_Handle::GetSurface(&m_depthRt);
    R_RT_Tracking_SurfaceRefDecrement(Surface, -1);
  }
  else if ( m_depthRt.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
}

/*
==============
R_RT_Tracking_GroupRefIncrement
==============
*/
void R_RT_Tracking_GroupRefIncrement(const R_RT_Group *rtGroup, const char *location)
{
  __int16 v2; 
  unsigned int v4; 
  int m_colorRtCount; 
  __int64 v7; 
  unsigned __int16 m_surfaceID; 
  R_RT_ColorHandle *v9; 
  unsigned __int16 v10; 
  R_RT_Surface *v11; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  __int64 v14; 
  __int64 v15; 
  R_RT_Handle m_depthRt; 

  v4 = 0;
  m_colorRtCount = rtGroup->m_colorRtCount;
  if ( rtGroup->m_colorRtCount )
  {
    do
    {
      v7 = v4;
      m_surfaceID = rtGroup->m_colorRts[v7].m_surfaceID;
      v9 = &rtGroup->m_colorRts[v7];
      if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v10 = (m_surfaceID & 0x7FFF) - 1;
      if ( v10 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
        __debugbreak();
      v11 = &g_R_RT_ManagerSurfaceAllocator->blocks[v10];
      if ( v11->m_tracking.m_allocCounter != v9->m_tracking.m_allocCounter )
      {
        LODWORD(v15) = v9->m_tracking.m_allocCounter;
        LODWORD(v14) = v11->m_tracking.m_allocCounter;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v14, v15, v9->m_tracking.m_name, v9->m_tracking.m_location) )
          __debugbreak();
      }
      m_rtFlagsInternal = v11->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x3000) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
        __debugbreak();
      R_RT_Tracking_SurfaceRefIncrement(v11, v4++, location);
    }
    while ( v4 != m_colorRtCount );
  }
  m_depthRt = (R_RT_Handle)rtGroup->m_depthRt;
  if ( v2 )
  {
    R_RT_Handle::GetSurface(&m_depthRt);
    Surface = R_RT_Handle::GetSurface(&m_depthRt);
    R_RT_Tracking_SurfaceRefIncrement(Surface, -1, location);
  }
  else if ( m_depthRt.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
}

/*
==============
R_RT_Tracking_ImageRefDecrement_GPU
==============
*/
void R_RT_Tracking_ImageRefDecrement_GPU(const GfxImage *image, const void *refAddr, GfxShaderImageSetStage shaderImageSetID, unsigned int resourceIndex)
{
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  int v9; 

  ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(image);
  if ( ImageRefAppendix )
  {
    Sys_CheckAcquireLock(&s_R_RT_Tracking.m_imageRefLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_R_RT_Tracking.m_imageRefLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
    v9 = ImageRefAppendix->m_refCounts[1];
    if ( !ImageRefAppendix->m_refCounts[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1792, ASSERT_TYPE_ASSERT, "(refCount > 0)", "%s\n\tUnmatched RT %simage \"%s\" %s-reference decrement. refcountmax=%d, resourceIndex=%d, refAddr=0x%p\n", "refCount > 0", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], image->name, s_R_RT_Tracking_imageRefShaderTypeNames[(unsigned __int8)shaderImageSetID], 32, resourceIndex, refAddr) )
      __debugbreak();
    truncate_store<unsigned char,unsigned int>(&ImageRefAppendix->m_refCounts[1], v9 - 1);
    if ( v9 == 1 )
      R_RT_Tracking_RemoveAllImageRefRecords(ImageRefAppendix, R_RT_Tracking_ImageRefType_GPU);
    else
      R_RT_Tracking_RemoveImageRefRecord_GPU(ImageRefAppendix, refAddr, shaderImageSetID, resourceIndex);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
  }
}

/*
==============
R_RT_Tracking_ImageRefDecrement_Input
==============
*/
void R_RT_Tracking_ImageRefDecrement_Input(const GfxImage *image, const void *refAddr, unsigned int codeTexture)
{
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  int v7; 
  const char *CodeTextureName; 

  ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(image);
  if ( ImageRefAppendix )
  {
    Sys_CheckAcquireLock(&s_R_RT_Tracking.m_imageRefLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_R_RT_Tracking.m_imageRefLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
    v7 = ImageRefAppendix->m_refCounts[0];
    if ( !ImageRefAppendix->m_refCounts[0] )
    {
      CodeTextureName = R_GetCodeTextureName(codeTexture);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1682, ASSERT_TYPE_ASSERT, "(refCount > 0)", "%s\n\tUnmatched RT %simage \"%s\" input-reference decrement.  codeTexture=%s(%d), refAddr=0x%p\n", "refCount > 0", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], image->name, CodeTextureName, codeTexture, refAddr) )
        __debugbreak();
    }
    truncate_store<unsigned char,unsigned int>(ImageRefAppendix->m_refCounts, v7 - 1);
    if ( v7 == 1 )
      R_RT_Tracking_RemoveAllImageRefRecords(ImageRefAppendix, R_RT_Tracking_ImageRefType_Input);
    else
      R_RT_Tracking_RemoveImageRefRecord_Input(ImageRefAppendix, refAddr, codeTexture);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
  }
}

/*
==============
R_RT_Tracking_ImageRefIncrement_GPU
==============
*/
void R_RT_Tracking_ImageRefIncrement_GPU(const GfxImage *image, const void *refAddr, GfxShaderImageSetStage shaderImageSetID, unsigned int resourceIndex, const char *location)
{
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  unsigned int v10; 
  unsigned int m_recordCount; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 outValue[16]; 
  const void *v16; 
  R_RT_Tracking_ImageRefRecord addRecord; 

  ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(image);
  if ( ImageRefAppendix )
  {
    Sys_CheckAcquireLock(&s_R_RT_Tracking.m_imageRefLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_R_RT_Tracking.m_imageRefLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
    v10 = ImageRefAppendix->m_refCounts[1] + 1;
    if ( v10 > 0x20 )
    {
      LODWORD(v14) = resourceIndex;
      LODWORD(v13) = 32;
      Com_Printf(1, "Too many RT %simage \"%s\" %s-references (limit=%d) - probable leak.  resourceIndex=%d, location=%s, refAddr=0x%p\n", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], image->name, s_R_RT_Tracking_imageRefShaderTypeNames[(unsigned __int8)shaderImageSetID], v13, v14, location, refAddr);
      R_RT_Tracking_DumpImageRefRecords(ImageRefAppendix, image->name);
    }
    truncate_store<unsigned char,unsigned int>(&ImageRefAppendix->m_refCounts[1], v10);
    if ( !location && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1573, ASSERT_TYPE_ASSERT, "(location)", (const char *)&queryFormat, "location") )
      __debugbreak();
    *(_DWORD *)outValue = 65537;
    *(_WORD *)&outValue[5] = 0;
    outValue[7] = 0;
    outValue[4] = shaderImageSetID;
    truncate_store<unsigned char,unsigned int>(&outValue[5], resourceIndex);
    m_recordCount = ImageRefAppendix->m_recordCount;
    *(_QWORD *)&outValue[8] = location;
    v16 = refAddr;
    *(_OWORD *)&addRecord.m_refType = *(_OWORD *)outValue;
    addRecord.m_refAddr = refAddr;
    v12 = R_RT_Tracking_AddRefRecord_R_RT_Tracking_ImageRefRecord_32_(m_recordCount, (R_RT_Tracking_ImageRefRecord (*)[32])ImageRefAppendix->m_records, &addRecord);
    truncate_store<unsigned char,unsigned int>(&ImageRefAppendix->m_recordCount, v12);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
  }
}

/*
==============
R_RT_Tracking_ImageRefIncrement_Input
==============
*/
void R_RT_Tracking_ImageRefIncrement_Input(const GfxImage *image, const void *refAddr, unsigned int codeTexture, const char *location)
{
  R_RT_Tracking_ImageAppendix *ImageRefAppendix; 
  unsigned int v9; 
  const char *CodeTextureName; 
  char *fmt; 
  __int64 v12; 
  int v13; 

  ImageRefAppendix = R_RT_Tracking_GetImageRefAppendix(image);
  if ( ImageRefAppendix )
  {
    Sys_CheckAcquireLock(&s_R_RT_Tracking.m_imageRefLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_R_RT_Tracking.m_imageRefLock.writeThreadId )
    {
      v13 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v13, 0i64) )
        __debugbreak();
    }
    v9 = ImageRefAppendix->m_refCounts[0] + 1;
    if ( v9 > 0x20 )
    {
      CodeTextureName = R_GetCodeTextureName(codeTexture);
      LODWORD(v12) = codeTexture;
      LODWORD(fmt) = 32;
      Com_Printf(1, "Too many RT %simage \"%s\" input-references (limit=%d) - probable leak.  codeTexture=%s(%d), location=%s, refAddr=0x%p\n", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], image->name, fmt, CodeTextureName, v12, location, refAddr);
      R_RT_Tracking_DumpImageRefRecords(ImageRefAppendix, image->name);
    }
    truncate_store<unsigned char,unsigned int>(ImageRefAppendix->m_refCounts, v9);
    R_RT_Tracking_AddImageRefRecord_Input(ImageRefAppendix, refAddr, codeTexture, location);
    s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
    Sys_CheckReleaseLock(&s_R_RT_Tracking.m_imageRefLock);
  }
}

/*
==============
R_RT_Tracking_LockWriteWithDBPump
==============
*/
void R_RT_Tracking_LockWriteWithDBPump(RWLock *lock)
{
  int v2; 
  threadId_t CurrentThreadId; 

  while ( 1 )
  {
    if ( !lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 184, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
      __debugbreak();
    Sys_CheckAcquireLock(lock);
    if ( TryAcquireSRWLockExclusive((PSRWLOCK)lock) )
      break;
    v2 = 1 << Sys_GetCurrentThreadContext();
    if ( (((_BYTE)lock + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &lock->acquireLock) )
      __debugbreak();
    _InterlockedAnd(&lock->acquireLock, ~v2);
    if ( GetCurrentProcessorNumber() == 1 )
    {
      Sys_PushUnblockDatabaseThread();
      Sys_Sleep(1);
      Sys_PopUnblockDatabaseThread();
    }
  }
  CurrentThreadId = Sys_GetCurrentThreadId();
  lock->writeThreadId = CurrentThreadId;
  if ( !CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 207, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
    __debugbreak();
}

/*
==============
R_RT_Tracking_RecordCommit
==============
*/
void R_RT_Tracking_RecordCommit(const R_RT_Tracking_AllocRecord *allocRecord)
{
  R_RT_Tracking_CommitRecord *v2; 

  if ( !s_R_RT_Tracking.m_commitRecordQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_RT_Tracking.m_commitRecordQueue.size == 1024 )
    IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PopFront(&s_R_RT_Tracking.m_commitRecordQueue);
  IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PushBack(&s_R_RT_Tracking.m_commitRecordQueue);
  v2 = IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::Back(&s_R_RT_Tracking.m_commitRecordQueue);
  v2->m_address = allocRecord->m_address;
  v2->m_size = allocRecord->m_size;
  v2->m_name = allocRecord->m_name;
  v2->m_surfaceID = allocRecord->m_surfaceID;
  v2->m_location = allocRecord->m_location;
}

/*
==============
R_RT_Tracking_RecordDecommit
==============
*/
void R_RT_Tracking_RecordDecommit(const R_RT_Tracking_AllocRecord *allocRecord)
{
  R_RT_Tracking_CommitRecord *v2; 

  if ( !s_R_RT_Tracking.m_decommitRecordQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_RT_Tracking.m_decommitRecordQueue.size == 1024 )
    IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PopFront(&s_R_RT_Tracking.m_decommitRecordQueue);
  IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PushBack(&s_R_RT_Tracking.m_decommitRecordQueue);
  v2 = IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::Back(&s_R_RT_Tracking.m_decommitRecordQueue);
  v2->m_address = allocRecord->m_address;
  v2->m_size = allocRecord->m_size;
  v2->m_name = allocRecord->m_name;
  v2->m_surfaceID = allocRecord->m_surfaceID;
  v2->m_location = allocRecord->m_location;
}

/*
==============
R_RT_Tracking_RemoveAllImageRefRecords
==============
*/
void R_RT_Tracking_RemoveAllImageRefRecords(R_RT_Tracking_ImageAppendix *appendix, R_RT_Tracking_ImageRefType imageRefType)
{
  __int64 m_recordCount; 
  R_RT_Tracking_ImageRefRecord *m_records; 
  R_RT_Tracking_ImageRefRecord *v5; 
  R_RT_Tracking_ImageAppendix *v6; 
  __int64 v7; 

  m_recordCount = appendix->m_recordCount;
  m_records = appendix->m_records;
  v5 = appendix->m_records;
  v6 = (R_RT_Tracking_ImageAppendix *)&appendix->m_records[m_recordCount];
  if ( appendix->m_records != (R_RT_Tracking_ImageRefRecord *)v6 )
  {
    do
    {
      if ( v5->m_refType != imageRefType )
      {
        *(_OWORD *)&m_records->m_refType = *(_OWORD *)&v5->m_refType;
        m_records->m_refAddr = v5->m_refAddr;
        ++m_records;
      }
      ++v5;
    }
    while ( v5 != (R_RT_Tracking_ImageRefRecord *)v6 );
  }
  v7 = ((char *)m_records - (char *)appendix - 8) / 24;
  if ( (_DWORD)v7 != (_DWORD)m_recordCount )
  {
    DebugWipe(m_records, 24i64 * (unsigned int)(m_recordCount - v7));
    if ( (unsigned int)v7 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v7, "unsigned", (unsigned int)v7) )
      __debugbreak();
    appendix->m_recordCount = v7;
  }
}

/*
==============
R_RT_Tracking_RemoveImageRefRecord
==============
*/
void R_RT_Tracking_RemoveImageRefRecord(R_RT_Tracking_ImageAppendix *appendix, const R_RT_Tracking_ImageRefRecord *keyRecord)
{
  int m_recordCount; 
  int v5; 
  int v6; 
  __int64 v7; 
  R_RT_Tracking_ImageRefRecord *v8; 
  __int64 v9; 

  m_recordCount = appendix->m_recordCount;
  if ( keyRecord->m_location && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1363, ASSERT_TYPE_ASSERT, "(keyRecord->m_location == 0)", (const char *)&queryFormat, "keyRecord->m_location == NULL") )
    __debugbreak();
  v5 = -1;
  v6 = 0;
  if ( m_recordCount )
  {
    do
    {
      if ( !keyRecord->m_location && appendix->m_records[v6].m_refAddr == keyRecord->m_refAddr && (unsigned __int16)WORD2(*(_QWORD *)&appendix->m_records[v6].m_refType) == keyRecord->m_context.m_input.m_codeTexture )
      {
        if ( v5 != -1 )
          return;
        v5 = v6;
      }
      ++v6;
    }
    while ( v6 != m_recordCount );
    if ( v5 >= 0 )
    {
      v7 = (unsigned int)(m_recordCount - 1);
      v8 = &appendix->m_records[v7];
      if ( v5 != (_DWORD)v7 )
      {
        v9 = v5;
        *(_OWORD *)&appendix->m_records[v9].m_refType = *(_OWORD *)&v8->m_refType;
        appendix->m_records[v9].m_refAddr = appendix->m_records[v7].m_refAddr;
      }
      DebugWipe(v8, 0x18ui64);
      truncate_store<unsigned char,unsigned int>(&appendix->m_recordCount, v7);
    }
  }
}

/*
==============
R_RT_Tracking_RemoveImageRefRecord_GPU
==============
*/
void R_RT_Tracking_RemoveImageRefRecord_GPU(R_RT_Tracking_ImageAppendix *appendix, const void *refAddr, GfxShaderImageSetStage shaderImageSetID, unsigned int resourceIndex)
{
  _QWORD v6[3]; 
  R_RT_Tracking_ImageRefRecord keyRecord; 

  LODWORD(v6[0]) = 65537;
  BYTE4(v6[0]) = shaderImageSetID;
  *(_WORD *)((char *)v6 + 5) = 0;
  HIBYTE(v6[0]) = 0;
  truncate_store<unsigned char,unsigned int>((unsigned __int8 *)v6 + 5, resourceIndex);
  v6[1] = 0i64;
  v6[2] = refAddr;
  *(_OWORD *)&keyRecord.m_refType = v6[0];
  keyRecord.m_refAddr = refAddr;
  R_RT_Tracking_RemoveImageRefRecord(appendix, &keyRecord);
}

/*
==============
R_RT_Tracking_RemoveImageRefRecord_Input
==============
*/
void R_RT_Tracking_RemoveImageRefRecord_Input(R_RT_Tracking_ImageAppendix *appendix, const void *refAddr, unsigned int codeTexture)
{
  unsigned __int64 v5; 
  R_RT_Tracking_ImageRefRecord keyRecord; 

  LODWORD(v5) = 0x10000;
  HIDWORD(v5) = truncate_cast<unsigned short,unsigned int>(codeTexture);
  *(_OWORD *)&keyRecord.m_refType = v5;
  keyRecord.m_refAddr = refAddr;
  R_RT_Tracking_RemoveImageRefRecord(appendix, &keyRecord);
}

/*
==============
R_RT_Tracking_RemoveSurfaceRecord
==============
*/
void R_RT_Tracking_RemoveSurfaceRecord(R_RT_Tracking_SurfaceInfo *surfaceInfo, unsigned __int16 surfaceID, const char *name)
{
  R_RT_Tracking_SurfacePoolID m_surfacePoolID; 
  __int64 m_surfaceRecordIndex; 
  R_RT_Tracking_SurfacePool *v7; 
  __int64 v8; 
  unsigned int m_recordCount; 
  __int64 v10; 
  R_RT_Tracking_SurfaceRecord *v11; 
  unsigned __int16 v12; 
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v13; 
  __int64 v14; 
  __int64 v15; 

  m_surfacePoolID = surfaceInfo->m_surfacePoolID;
  m_surfaceRecordIndex = surfaceInfo->m_surfaceRecordIndex;
  if ( m_surfacePoolID == R_RT_Tracking_SurfacePoolID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1274, ASSERT_TYPE_ASSERT, "(surfacePoolID != R_RT_Tracking_SurfacePoolID_INVALID)", (const char *)&queryFormat, "surfacePoolID != R_RT_Tracking_SurfacePoolID_INVALID") )
    __debugbreak();
  v7 = &s_R_RT_Tracking.m_surfacePools[m_surfacePoolID];
  if ( (unsigned int)m_surfaceRecordIndex >= v7->m_recordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1278, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < surfaceRecordCount)", (const char *)&queryFormat, "surfaceRecordIndex < surfaceRecordCount") )
    __debugbreak();
  v8 = m_surfaceRecordIndex;
  if ( v7->m_records[m_surfaceRecordIndex].m_surfaceID != surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1280, ASSERT_TYPE_ASSERT, "(surfaceRecord->m_surfaceID == surfaceID)", (const char *)&queryFormat, "surfaceRecord->m_surfaceID == surfaceID") )
    __debugbreak();
  surfaceInfo->m_surfacePoolID = R_RT_Tracking_SurfacePoolID_INVALID;
  surfaceInfo->m_surfaceRecordIndex = 0;
  m_recordCount = v7->m_recordCount;
  if ( (unsigned int)m_surfaceRecordIndex >= v7->m_recordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 240, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < oldSurfaceRecordCount)", (const char *)&queryFormat, "surfaceRecordIndex < oldSurfaceRecordCount") )
    __debugbreak();
  v10 = m_recordCount - 1;
  v11 = &v7->m_records[v10];
  if ( (_DWORD)m_surfaceRecordIndex != (_DWORD)v10 )
  {
    v12 = R_RT_WritableSurfaceIDToIndex(v7->m_records[v10].m_surfaceID);
    v13 = g_R_RT_ManagerSurfaceAllocator;
    v14 = v12;
    if ( v12 >= 0x1000ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 51, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
      __debugbreak();
    v15 = v14;
    if ( v13->blocks[v15].m_tracking.m_surfacePoolID != m_surfacePoolID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 246, ASSERT_TYPE_ASSERT, "(lastSurface->m_tracking.m_surfacePoolID == surfacePoolID)", (const char *)&queryFormat, "lastSurface->m_tracking.m_surfacePoolID == surfacePoolID") )
      __debugbreak();
    if ( v13->blocks[v15].m_tracking.m_surfaceRecordIndex != (_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 247, ASSERT_TYPE_ASSERT, "(lastSurface->m_tracking.m_surfaceRecordIndex == lastSurfaceRecordIndex)", (const char *)&queryFormat, "lastSurface->m_tracking.m_surfaceRecordIndex == lastSurfaceRecordIndex") )
      __debugbreak();
    v13->blocks[v15].m_tracking.m_surfaceRecordIndex = m_surfaceRecordIndex;
    *(_OWORD *)&v7->m_records[v8].m_name = *(_OWORD *)&v11->m_name;
    *(double *)&v7->m_records[v8].m_surfaceID = *(double *)&v7->m_records[v10].m_surfaceID;
  }
  v11->m_name = NULL;
  v7->m_records[v10].m_mem = NULL;
  v7->m_records[v10].m_surfaceID = 0;
  v7->m_recordCount = v10;
}

/*
==============
R_RT_Tracking_ResetSurfaceInfo
==============
*/
void R_RT_Tracking_ResetSurfaceInfo(R_RT_Tracking_SurfaceInfo *surfaceInfo)
{
  DebugWipe(surfaceInfo, 0x58ui64);
  surfaceInfo->m_allocCounter = 1;
  *(_WORD *)&surfaceInfo->m_surfacePoolID = 255;
  surfaceInfo->m_refRecordCount = 0;
}

/*
==============
R_RT_Tracking_Shutdown
==============
*/
void R_RT_Tracking_Shutdown(void)
{
  __int64 v0; 
  volatile int acquireLock; 

  s_R_RT_Tracking.m_surfaceRefLock.initialized = 0;
  if ( s_R_RT_Tracking.m_surfaceRefLock.acquireLock )
  {
    acquireLock = s_R_RT_Tracking.m_surfaceRefLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
      __debugbreak();
  }
  if ( s_R_RT_Tracking.m_surfaceRefLock.writeThreadId )
  {
    LODWORD(v0) = s_R_RT_Tracking.m_surfaceRefLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
  s_R_RT_Tracking.m_imageRefLock.initialized = 0;
  if ( s_R_RT_Tracking.m_imageRefLock.acquireLock )
  {
    LODWORD(v0) = s_R_RT_Tracking.m_imageRefLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", v0, 0i64) )
      __debugbreak();
  }
  if ( s_R_RT_Tracking.m_imageRefLock.writeThreadId )
  {
    LODWORD(v0) = s_R_RT_Tracking.m_imageRefLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
R_RT_Tracking_Startup
==============
*/
void R_RT_Tracking_Startup(void)
{
  R_RT_Tracking_SurfaceRecord *m_records; 
  __int64 v1; 
  __int64 v2; 
  R_RT_Tracking_SurfaceRecord *v3; 
  R_RT_Tracking_SurfaceRecord *v4; 

  m_records = s_R_RT_Tracking.m_surfacePools[0].m_records;
  v1 = 5i64;
  do
  {
    v2 = *(unsigned int *)&m_records[-1].m_surfaceID;
    v3 = m_records;
    *(_DWORD *)&m_records[-1].m_surfaceID = 0;
    v4 = &m_records[v2];
    if ( m_records != v4 )
    {
      do
      {
        v3->m_name = NULL;
        v3->m_mem = NULL;
        v3->m_surfaceID = 0;
        ++v3;
      }
      while ( v3 != v4 );
    }
    m_records = (R_RT_Tracking_SurfaceRecord *)((char *)m_records + 98312);
    --v1;
  }
  while ( v1 );
  Cmd_AddCommandInternal("r_rtDump", R_RT_Tracking_DumpCommand, &stru_153B7E258);
  Dvar_BeginPermanentRegistration();
  s_R_RT_Tracking.r_rtStats = Dvar_RegisterBool("NRKMKLNNP", 0, 4u, "Show RT allocation stats.");
  s_R_RT_Tracking.r_rtSurfaceOrder = Dvar_RegisterEnum("NNTQSSRMSP", s_R_RT_Tracking_surfaceOrderingEnumNames, 0, 4u, "RT surface dump row ordering mode.");
  s_R_RT_Tracking.r_rtAllocOrder = Dvar_RegisterEnum("LQNSTNPPMT", s_R_RT_Tracking_allocOrderingEnumNames, 0, 4u, "RT allocation dump row ordering mode.");
  Dvar_EndPermanentRegistration();
  s_R_RT_Tracking.m_commitRecordQueue.cleared = 1;
  *(_DWORD *)&s_R_RT_Tracking.m_commitRecordQueue.start = 0;
  s_R_RT_Tracking.m_decommitRecordQueue.cleared = 1;
  *(_DWORD *)&s_R_RT_Tracking.m_decommitRecordQueue.start = 0;
  s_R_RT_Tracking.m_totalsQueue.cleared = 1;
  *(_DWORD *)&s_R_RT_Tracking.m_totalsQueue.start = 0;
  InitializeSRWLock((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  s_R_RT_Tracking.m_surfaceRefLock.initialized = -1412623820;
  s_R_RT_Tracking.m_surfaceRefLock.acquireLock = 0;
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = 0;
  InitializeSRWLock((PSRWLOCK)&s_R_RT_Tracking.m_imageRefLock);
  s_R_RT_Tracking.m_imageRefLock.initialized = -1412623820;
  s_R_RT_Tracking.m_imageRefLock.acquireLock = 0;
  s_R_RT_Tracking.m_imageRefLock.writeThreadId = 0;
}

/*
==============
R_RT_Tracking_SurfaceRefDecrement
==============
*/
void R_RT_Tracking_SurfaceRefDecrement(const R_RT_Surface *surface, int colorRtIndex)
{
  int m_refCount; 
  __int64 v5; 

  Sys_CheckAcquireLock(&s_R_RT_Tracking.m_surfaceRefLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_R_RT_Tracking.m_surfaceRefLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
    __debugbreak();
  if ( surface->m_tracking.m_refRecordCount > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1429, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_refRecordCount <= ( sizeof( *array_counter( surfaceInfo->m_refRecords ) ) + 0 ))", (const char *)&queryFormat, "surfaceInfo->m_refRecordCount <= ARRAY_COUNT( surfaceInfo->m_refRecords )") )
    __debugbreak();
  m_refCount = surface->m_tracking.m_refCount;
  if ( !surface->m_tracking.m_refCount )
  {
    LODWORD(v5) = colorRtIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1431, ASSERT_TYPE_ASSERT, "(refCount > 0)", "%s\n\tUnmatched RT \"%s\" reference decrement.  colorRtIndex=%d.  Created at %s.\n", "refCount > 0", surface->m_image.m_base.name, v5, surface->m_tracking.m_location) )
      __debugbreak();
  }
  truncate_store<unsigned char,unsigned int>(&surface->m_tracking.m_refCount, m_refCount - 1);
  if ( m_refCount == 1 )
  {
    DebugWipe(surface->m_tracking.m_refRecords, 16i64 * surface->m_tracking.m_refRecordCount);
    surface->m_tracking.m_refRecordCount = 0;
  }
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  Sys_CheckReleaseLock(&s_R_RT_Tracking.m_surfaceRefLock);
}

/*
==============
R_RT_Tracking_SurfaceRefIncrement
==============
*/
void R_RT_Tracking_SurfaceRefIncrement(const R_RT_Surface *surface, int colorRtIndex, const char *location)
{
  __int64 v4; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int m_refRecordCount; 
  R_RT_Tracking_SurfaceRefRecord *m_refRecords; 
  unsigned int v10; 
  char v11; 
  __int64 v12; 
  int v13; 
  R_RT_Tracking_SurfaceRefRecord *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  char *fmt; 
  int v19; 
  R_RT_Tracking_SurfaceRefRecord v20; 

  v4 = colorRtIndex;
  Sys_CheckAcquireLock(&s_R_RT_Tracking.m_surfaceRefLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_R_RT_Tracking.m_surfaceRefLock.writeThreadId )
  {
    v19 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v19, 0i64) )
      __debugbreak();
  }
  if ( surface->m_tracking.m_refRecordCount > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1400, ASSERT_TYPE_ASSERT, "(surfaceInfo->m_refRecordCount <= ( sizeof( *array_counter( surfaceInfo->m_refRecords ) ) + 0 ))", (const char *)&queryFormat, "surfaceInfo->m_refRecordCount <= ARRAY_COUNT( surfaceInfo->m_refRecords )") )
    __debugbreak();
  v6 = 1;
  v7 = surface->m_tracking.m_refCount + 1;
  if ( v7 > 0x20 )
  {
    LODWORD(fmt) = v4;
    Com_Printf(1, "Too many RT \"%s\" references (limit=%d) - probable leak.  colorRtIndex=%d.  Referenced at %s.  Created at %s.\n", surface->m_image.m_base.name, 32i64, fmt, location, surface->m_tracking.m_location);
    R_RT_Tracking_DumpSurfaceRefRecords(&surface->m_tracking, surface->m_image.m_base.name);
  }
  truncate_store<unsigned char,unsigned int>(&surface->m_tracking.m_refCount, v7);
  if ( location )
  {
    *(_DWORD *)(&v20.m_useCount + 1) = 0;
    if ( (unsigned int)(v4 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v4, "signed", v4) )
      __debugbreak();
    m_refRecordCount = surface->m_tracking.m_refRecordCount;
    m_refRecords = surface->m_tracking.m_refRecords;
    v10 = 0;
    *(_WORD *)&v20.m_colorRtIndex = (unsigned __int8)v4;
    v20.m_useCount = 1;
    v20.m_location = location;
    if ( surface->m_tracking.m_refRecordCount )
    {
      do
      {
        v11 = -1;
        v12 = v10;
        if ( (unsigned int)m_refRecords[v10].m_lastUsed + 1 < 0xFF )
          v11 = m_refRecords[v10].m_lastUsed + 1;
        ++v10;
        m_refRecords[v12].m_lastUsed = v11;
      }
      while ( v10 != m_refRecordCount );
    }
    v13 = 0;
    if ( m_refRecordCount )
    {
      while ( 1 )
      {
        v14 = &m_refRecords[v13];
        if ( v14->m_location == location && v14->m_colorRtIndex == (_BYTE)v4 )
          break;
        if ( ++v13 == m_refRecordCount )
          goto LABEL_21;
      }
      v16 = v14->m_useCount + 1;
      v14->m_lastUsed = 0;
      v14->m_useCount = truncate_cast<unsigned short,unsigned int>(v16);
    }
    else
    {
LABEL_21:
      if ( m_refRecordCount >= 4 )
      {
        v15 = 0;
        do
        {
          v17 = v6;
          if ( m_refRecords[v6].m_lastUsed <= m_refRecords[v15].m_lastUsed )
            v17 = v15;
          ++v6;
          v15 = v17;
        }
        while ( v6 != m_refRecordCount );
      }
      else
      {
        v15 = m_refRecordCount++;
      }
      m_refRecords[v15] = v20;
    }
    truncate_store<unsigned char,unsigned int>(&surface->m_tracking.m_refRecordCount, m_refRecordCount);
  }
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  Sys_CheckReleaseLock(&s_R_RT_Tracking.m_surfaceRefLock);
}

/*
==============
R_RT_Tracking_UnbindSurfaceInfo
==============
*/
void R_RT_Tracking_UnbindSurfaceInfo(R_RT_Tracking_SurfaceInfo *surfaceInfo)
{
  unsigned int m_allocCounter; 
  unsigned int v3; 

  m_allocCounter = surfaceInfo->m_allocCounter;
  if ( !surfaceInfo->m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1299, ASSERT_TYPE_ASSERT, "(oldAllocCounter)", (const char *)&queryFormat, "oldAllocCounter") )
    __debugbreak();
  v3 = 1;
  if ( m_allocCounter != -1 )
    v3 = m_allocCounter + 1;
  surfaceInfo->m_allocCounter = v3;
}

