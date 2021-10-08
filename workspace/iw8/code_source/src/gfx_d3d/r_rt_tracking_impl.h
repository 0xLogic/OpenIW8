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
  unsigned int v12; 
  __int128 v13; 
  const void *v14; 
  R_RT_Tracking_ImageRefRecord addRecord; 

  if ( !location && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1564, ASSERT_TYPE_ASSERT, "(location)", (const char *)&queryFormat, "location") )
    __debugbreak();
  LODWORD(v13) = 0x10000;
  v8 = truncate_cast<unsigned short,unsigned int>(codeTexture);
  m_recordCount = appendix->m_recordCount;
  DWORD1(v13) = v8;
  *((_QWORD *)&v13 + 1) = location;
  __asm { vmovups xmm0, [rsp+68h+var_38] }
  v14 = refAddr;
  __asm
  {
    vmovsd  xmm1, [rsp+68h+var_28]
    vmovups xmmword ptr [rsp+68h+addRecord.m_refType], xmm0
    vmovsd  [rsp+68h+addRecord.m_refAddr], xmm1
  }
  v12 = R_RT_Tracking_AddRefRecord_R_RT_Tracking_ImageRefRecord_32_(m_recordCount, (R_RT_Tracking_ImageRefRecord (*)[32])appendix->m_records, &addRecord);
  truncate_store<unsigned char,unsigned int>(&appendix->m_recordCount, v12);
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
  if ( !s_R_RT_Tracking.r_rtStats->current.enabled )
    return 0;
  _RDX = &s_R_RT_Tracking.m_debugDrawStats[s_R_RT_Tracking.m_debugDrawStatsFrameIndex & 1];
  if ( !_RDX->m_committedMB.m_val )
    return 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm1, ymmword ptr [rdx+60h]
    vmovups ymmword ptr [rcx+60h], ymm1
  }
  outDebugDrawStats->m_esramSuccesses.m_avg = _RDX->m_esramSuccesses.m_avg;
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
  unsigned int m_avg; 
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
  _RAX = R_RT_Tracking_GenerateDebugDrawStats(&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymm2, ymmword ptr [rax+40h]
    vmovups ymm3, ymmword ptr [rax+60h]
  }
  m_avg = _RAX->m_esramSuccesses.m_avg;
  _RCX = v2 & 1;
  _RAX = &s_R_RT_Tracking;
  __asm
  {
    vmovups ymmword ptr [rcx+rax+8EE60h], ymm0
    vmovups ymmword ptr [rcx+rax+8EE80h], ymm1
    vmovups ymmword ptr [rcx+rax+8EEA0h], ymm2
    vmovups ymmword ptr [rcx+rax+8EEC0h], ymm3
  }
  s_R_RT_Tracking.m_debugDrawStats[_RCX].m_esramSuccesses.m_avg = m_avg;
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

void __fastcall R_RT_Tracking_Dump(double _XMM0_8, double _XMM1_8, __int64 a3, double _XMM3_8)
{
  R_RT_Tracking_Totals *v4; 
  int v21; 
  int i; 
  R_RT_AllocationLockSentry v23; 

  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v23);
  v4 = IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  Com_Printf(8, "\n------------ Surface Totals ------------\n");
  R_RT_Tracking_DumpSurfaceTotals(&v4->m_allSurfaceTotals, (const R_RT_Tracking_SurfaceTotals (*)[5])v4->m_surfaceTotals);
  Com_Printf(8, "\n");
  Com_Printf(8, "\n------------ Memory Totals ------------\n");
  R_RT_Tracking_DumpMemTotals((const R_RT_Tracking_MemTotals (*)[6])v4->m_memTotals);
  Com_Printf(8, "\n");
  Com_Printf(8, "\n------------ ESRAM Frame Totals ------------\n");
  Com_Printf(8, "%3d Requests:  %3dMB\n", v4->m_esramFrameTotals.m_requests, (v4->m_esramFrameTotals.m_requestKB + 1023) >> 10);
  Com_Printf(8, "%3d Successes: %3dMB\n", v4->m_esramFrameTotals.m_successes, (v4->m_esramFrameTotals.m_successKB + 1023) >> 10);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vmovss  xmm4, cs:__real@42c80000
    vxorps  xmm0, xmm0, xmm0
  }
  if ( v4->m_esramFrameTotals.m_requestKB )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm2, xmm0, xmm4
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vdivss  xmm0, xmm2, xmm1
    }
  }
  __asm { vcvtss2sd xmm5, xmm0, xmm0 }
  if ( v4->m_esramFrameTotals.m_requests )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm2, xmm0, xmm4
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vdivss  xmm3, xmm2, xmm1
    }
  }
  __asm
  {
    vcvtss2sd xmm2, xmm3, xmm3
    vmovaps xmm3, xmm5
    vmovq   r9, xmm3
    vmovq   r8, xmm2
  }
  Com_Printf(8, "%3.0f%% Success-Rate (%3.0f%% by size)\n", *(double *)&_XMM2, *(double *)&_XMM3);
  Com_Printf(8, "\n");
  Com_Printf(8, "\n------------ Surface Records ------------\n\n");
  v21 = 0;
  for ( i = 0; i != 5; ++i )
  {
    R_RT_Tracking_DumpSurfacePool(8, (R_RT_Tracking_SurfacePoolID)i);
    Com_Printf(8, "\n");
  }
  Com_Printf(8, "\n------------ Heap Allocations ------------\n\n");
  do
  {
    R_RT_Tracking_DumpHeapPool((R_RT_Heap_PoolID)v21);
    Com_Printf(8, "\n");
    ++v21;
  }
  while ( v21 != 4 );
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v23);
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
  std::_Ref_fn<R_RT_Tracking_AllocRecordIndexLess> v23; 
  R_RT_Tracking_AllocRecordIndexLess _Val; 
  IWString_FormatTable_Config formatTableConfig; 
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
    _RAX = 0i64;
    *(_DWORD *)&formatTableConfig.printHeader = 2949377;
    if ( allocRecordCount >= 0x10 )
    {
      __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
      _EDX = 8;
      do
      {
        _RCX = _EDX - 4;
        __asm
        {
          vmovd   xmm0, eax
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rax*4+4FE0h+_First], xmm1
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+4FE0h+_First], xmm1
        }
        _RCX = _EDX;
        _RAX = (unsigned int)(_RAX + 16);
        __asm
        {
          vmovd   xmm0, edx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+4FE0h+_First], xmm1
        }
        _RCX = _EDX + 4;
        _EDX += 16;
        __asm
        {
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+4FE0h+_First], xmm1
        }
      }
      while ( (_DWORD)_RAX != (rowCount & 0xFFFFFFF0) );
    }
    for ( ; (_DWORD)_RAX != (_DWORD)rowCount; _RAX = (unsigned int)(_RAX + 1) )
      _First[_RAX] = _RAX;
    _Val.m_allocRecords = allocRecords;
    _Val.m_AllocRecordIndexLess = s_R_RT_Tracking_allocOrderingLessCBs[s_R_RT_Tracking.r_rtAllocOrder->current.integer];
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+50E0h+_Val.m_allocRecords]
      vmovdqa [rbp+4FE0h+var_5050], xmm0
    }
    v23._Fn = std::_Pass_fn<R_RT_Tracking_AllocRecordIndexLess,0>(&_Val)._Fn;
    std::_Sort_unchecked<unsigned int *,std::_Ref_fn<R_RT_Tracking_AllocRecordIndexLess>>(_First, &_First[rowCount], rowCount, (std::_Ref_fn<R_RT_Tracking_AllocRecordIndexLess>)v23._Fn->m_allocRecords);
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
  const unsigned int *v3; 
  __int64 v4; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  _QWORD *v33; 
  unsigned __int16 *p_m_allocLimit; 
  const char **v35; 
  __int64 v36; 
  _DWORD *v37; 
  const char **v38; 
  __int64 v39; 
  unsigned int v40; 
  __int64 v41; 
  const char *v42; 
  int v43; 
  __int64 v44; 
  char *fmt; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  R_RT_Tracking_TotalStat result; 
  R_RT_Tracking_TotalStat v58; 
  R_RT_Tracking_TotalStat v59; 
  R_RT_Tracking_TotalStat v60; 
  R_RT_Tracking_TotalStat v61; 
  R_RT_Tracking_TotalStat v62; 
  char v63; 

  _RSI = &v63;
  v3 = &(*memTotals)[0].m_committedKB[1];
  v4 = 6i64;
  do
  {
    _RAX = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&result, v3 - 1, v3);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rsp+388h+var_308], xmm0
    }
    _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&v58, v3 - 1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rsp+388h+var_2F8], xmm0
    }
    _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&v59, v3);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rsp+388h+var_2E8], xmm0
    }
    _RAX = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_short_(&v60, (const unsigned __int16 *)v3 - 6, (const unsigned __int16 *)v3 - 5);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsi-20h], xmm0
      vmovups xmm0, [rsp+388h+var_308]
      vmovq   rcx, xmm0
    }
    LODWORD(_RAX) = _RCX + 1023;
    DWORD1(v52) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    __asm { vpextrq rcx, xmm0, 1 }
    LODWORD(v52) = (unsigned int)_RAX >> 10;
    HIDWORD(v52) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    DWORD2(v52) = (unsigned int)(_RCX + 1023) >> 10;
    __asm
    {
      vmovups xmm0, [rsp+388h+var_328]
      vmovups xmmword ptr [rsi-10h], xmm0
    }
    _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&v61, (const unsigned __int16 *)v3 - 6);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsi], xmm0
      vmovups xmm0, [rsp+388h+var_2F8]
      vmovq   rcx, xmm0
    }
    LODWORD(_RAX) = _RCX + 1023;
    DWORD1(v51) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    __asm { vpextrq rcx, xmm0, 1 }
    LODWORD(v51) = (unsigned int)_RAX >> 10;
    HIDWORD(v51) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    DWORD2(v51) = (unsigned int)(_RCX + 1023) >> 10;
    __asm
    {
      vmovups xmm0, [rsp+388h+var_338]
      vmovups xmmword ptr [rsi+10h], xmm0
    }
    _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&v62, (const unsigned __int16 *)v3 - 5);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsi+20h], xmm0
      vmovups xmm0, [rsp+388h+var_2E8]
      vmovq   rcx, xmm0
    }
    LODWORD(_RAX) = _RCX + 1023;
    DWORD1(v53) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    __asm { vpextrq rcx, xmm0, 1 }
    LODWORD(v53) = (unsigned int)_RAX >> 10;
    _RSI += 96;
    v3 += 5;
    HIDWORD(v53) = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
    DWORD2(v53) = (unsigned int)(_RCX + 1023) >> 10;
    __asm
    {
      vmovups xmm0, [rsp+388h+var_318]
      vmovups xmmword ptr [rsi-30h], xmm0
    }
    --v4;
  }
  while ( v4 );
  v29 = 4i64;
  v30 = 4i64;
  v31 = 0i64;
  do
  {
    Com_Printf(8, s_poolSizeFormats[v31], g_R_RT_Heap_poolConfigs[v31].m_blockSize >> 20);
    ++v31;
    --v30;
  }
  while ( v30 );
  v32 = 64i64;
  v33 = &v44 + 32;
  p_m_allocLimit = &(*memTotals)[0].m_allocLimit;
  *(_QWORD *)&v51 = v33;
  v35 = (const char **)s_elemHeaderFormats;
  *(_QWORD *)&v52 = &(*memTotals)[0].m_allocLimit;
  do
  {
    if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    Com_Printf(8, *v35, s_R_RT_Tracking.m_totalsQueue.size);
    v36 = 6i64;
    v37 = (_DWORD *)((char *)v33 + v32 + 16);
    v38 = (const char **)s_memFilterLineFormats;
    do
    {
      v39 = *p_m_allocLimit;
      v40 = *((_DWORD *)p_m_allocLimit + 3) + 1023;
      v41 = (unsigned int)*(v37 - 16);
      v42 = *v38;
      LODWORD(v50) = v37[4];
      LODWORD(v49) = *v37;
      LODWORD(v48) = *(v37 - 4);
      LODWORD(v47) = *(v37 - 8);
      v43 = *(v37 - 12);
      LODWORD(v46) = v40 >> 10;
      LODWORD(fmt) = v43;
      Com_Printf(8, v42, v41, v39, fmt, v46, v47, v48, v49, v50);
      v37 += 24;
      p_m_allocLimit += 10;
      ++v38;
      --v36;
    }
    while ( v36 );
    v33 = (_QWORD *)v51;
    p_m_allocLimit = (unsigned __int16 *)v52;
    ++v35;
    v32 += 4i64;
    --v29;
  }
  while ( v29 );
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
  std::_Ref_fn<R_RT_Tracking_SurfaceRecordIndexLess> v24; 
  R_RT_Tracking_SurfaceRecordIndexLess _Val; 
  const R_RT_Tracking_SurfacePool *userContext; 
  int v27; 
  IWString_FormatTable_Config formatTableConfig; 
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
    _RAX = 0i64;
    userContext = v3;
    v27 = conChannel;
    if ( (unsigned int)rowCount >= 0x10 )
    {
      __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
      _EDX = 8;
      do
      {
        _RCX = _EDX - 4;
        __asm
        {
          vmovd   xmm0, eax
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rax*4+4FF0h+_First], xmm1
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+4FF0h+_First], xmm1
        }
        _RCX = _EDX;
        _RAX = (unsigned int)(_RAX + 16);
        __asm
        {
          vmovd   xmm0, edx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+4FF0h+_First], xmm1
        }
        _RCX = _EDX + 4;
        _EDX += 16;
        __asm
        {
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+4FF0h+_First], xmm1
        }
      }
      while ( (_DWORD)_RAX != (rowCount & 0xFFFFFFF0) );
    }
    for ( ; (_DWORD)_RAX != (_DWORD)rowCount; _RAX = (unsigned int)(_RAX + 1) )
      _First[_RAX] = _RAX;
    _Val.m_surfacePool = v3;
    _Val.m_SurfaceIDLess = s_R_RT_Tracking_surfaceOrderingLessCBs[s_R_RT_Tracking.r_rtSurfaceOrder->current.integer];
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+50F0h+_Val.m_surfacePool]
      vmovdqa [rbp+4FF0h+var_5050], xmm0
    }
    v24._Fn = std::_Pass_fn<R_RT_Tracking_SurfaceRecordIndexLess,0>(&_Val)._Fn;
    std::_Sort_unchecked<unsigned int *,std::_Ref_fn<R_RT_Tracking_SurfaceRecordIndexLess>>(_First, &_First[rowCount], rowCount, (std::_Ref_fn<R_RT_Tracking_SurfaceRecordIndexLess>)v24._Fn->m_surfacePool);
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
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 size; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  R_RT_Tracking_Totals *v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  const unsigned int *v24; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  __int64 v46; 
  R_RT_Tracking_Totals *v47; 
  unsigned int v48; 
  __int64 v59; 
  unsigned int v60; 
  unsigned int v68; 
  unsigned int v72; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmtg; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  unsigned int v121; 
  unsigned int v122; 
  unsigned int v123; 
  R_RT_Tracking_TotalStat result; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  unsigned int v129; 
  unsigned int v130; 
  unsigned int v131; 
  unsigned int v132; 
  unsigned __int64 v133; 
  unsigned int v134; 
  int v135; 
  __int64 v136; 
  __int128 v137; 
  __int128 v138; 
  __int128 v139; 
  __int128 v140; 
  __int128 v141; 
  __int128 v142; 
  __int128 v143; 
  __int128 v144; 
  __int128 v145; 
  __int64 v146; 
  __int64 v147; 
  __int64 v148; 
  unsigned __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  __int64 v152; 
  __int128 v153; 
  R_RT_Tracking_TotalStat v156; 
  unsigned int v158; 
  unsigned int v159; 
  unsigned int memberLa; 
  unsigned int v162; 
  unsigned int v163; 
  unsigned int v164; 
  unsigned int v165; 
  unsigned int v166; 

  v3 = allSurfaceTotals;
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)allSurfaceTotals);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_130], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[3]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_120], xmm0
  }
  v8 = (unsigned int)IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  v9 = (_DWORD)surfaceTotals - v8 + 24;
  v10 = (_DWORD)v3 - v8;
  v162 = v9;
  v165 = (_DWORD)v3 - v8;
  if ( !s_R_RT_Tracking.m_totalsQueue.cleared )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    v10 = v165;
    v9 = v162;
  }
  size = s_R_RT_Tracking.m_totalsQueue.size;
  v12 = 0;
  v121 = s_R_RT_Tracking.m_totalsQueue.size;
  v13 = -1;
  LODWORD(v136) = 0;
  v14 = -1;
  v125 = -1;
  v15 = 0;
  v166 = 0;
  v16 = 0i64;
  v17 = 0;
  if ( s_R_RT_Tracking.m_totalsQueue.size )
  {
    v18 = v9;
    v19 = v10;
    do
    {
      if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( v17 >= s_R_RT_Tracking.m_totalsQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
        __debugbreak();
      v20 = &s_R_RT_Tracking.m_totalsQueue.entries[((_BYTE)v17 + LOBYTE(s_R_RT_Tracking.m_totalsQueue.start)) & 0x3F];
      v21 = *(unsigned __int16 *)((char *)&v20->m_allSurfaceTotals.m_insts + v19) - *(unsigned __int16 *)((char *)&v20->m_allSurfaceTotals.m_insts + v18);
      size = v121;
      v136 = v21;
      if ( v21 < v14 )
        v14 = v21;
      if ( v15 < v21 )
        v15 = v21;
      v16 += v21;
      ++v17;
    }
    while ( v17 != v121 );
    v3 = allSurfaceTotals;
    v13 = -1;
    v125 = v14;
    v12 = 0;
    v166 = v15;
  }
  v22 = (unsigned int)size;
  v23 = v16 + (size >> 1);
  v24 = (const unsigned int *)surfaceTotals;
  v149 = v23 / v22;
  _RAX = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_short_(&result, (const unsigned __int16 *)surfaceTotals, (const unsigned __int16 *)&(*surfaceTotals)[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_110], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)surfaceTotals);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_100], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_F0], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[2]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_E0], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&result, (const unsigned __int16 *)&(*surfaceTotals)[4]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_D0], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, &v3->m_sizeKB);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_140], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, &(*surfaceTotals)[3].m_sizeKB);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_150], xmm0
  }
  v39 = (unsigned int)IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  v40 = (_DWORD)surfaceTotals - v39 + 28;
  v158 = (_DWORD)v3 - v39 + 4;
  v163 = v40;
  if ( !s_R_RT_Tracking.m_totalsQueue.cleared )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    v40 = v163;
  }
  v41 = s_R_RT_Tracking.m_totalsQueue.size;
  v42 = 0;
  v122 = s_R_RT_Tracking.m_totalsQueue.size;
  v43 = 0i64;
  v164 = 0;
  v44 = 0;
  LODWORD(v45) = 0;
  if ( s_R_RT_Tracking.m_totalsQueue.size )
  {
    v46 = v40;
    do
    {
      if ( !s_R_RT_Tracking.m_totalsQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( v44 >= s_R_RT_Tracking.m_totalsQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
        __debugbreak();
      v47 = &s_R_RT_Tracking.m_totalsQueue.entries[((_BYTE)v44 + LOBYTE(s_R_RT_Tracking.m_totalsQueue.start)) & 0x3F];
      v48 = *(_DWORD *)((char *)&v47->m_allSurfaceTotals.m_insts + v158) - *(_DWORD *)((char *)&v47->m_allSurfaceTotals.m_insts + v46);
      v45 = v48;
      v12 = v48;
      if ( v48 < v13 )
        v13 = *(_DWORD *)((char *)&v47->m_allSurfaceTotals.m_insts + v158) - *(_DWORD *)((char *)&v47->m_allSurfaceTotals.m_insts + v46);
      if ( v42 < v48 )
        v42 = *(_DWORD *)((char *)&v47->m_allSurfaceTotals.m_insts + v158) - *(_DWORD *)((char *)&v47->m_allSurfaceTotals.m_insts + v46);
      v41 = v122;
      v43 += v45;
      ++v44;
    }
    while ( v44 != v122 );
    v24 = (const unsigned int *)surfaceTotals;
    v164 = v42;
  }
  v133 = __PAIR64__(v13, v12);
  v135 = (v43 + (v41 >> 1)) / (unsigned int)v41;
  v134 = v42;
  _RAX = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&result, v24 + 1, v24 + 3);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_88], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, v24 + 1);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_78], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, v24 + 3);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0F0h+var_68], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&result, v24 + 5);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+1F0h+result.___u0], xmm0
  }
  _RDX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&v156, v24 + 5);
  __asm { vmovups xmm0, [rbp+0F0h+var_88] }
  v59 = (unsigned int)(v138 + 1023) >> 10;
  v147 = (unsigned int)(DWORD1(v137) + 1023) >> 10;
  memberLa = (unsigned int)(v137 + 1023) >> 10;
  v60 = (unsigned int)(DWORD1(v138) + 1023) >> 10;
  v146 = (unsigned int)(HIDWORD(v137) + 1023) >> 10;
  v123 = (unsigned int)(v45 + 1023) >> 10;
  v150 = (unsigned int)(HIDWORD(v133) + 1023) >> 10;
  v159 = (unsigned int)(DWORD2(v137) + 1023) >> 10;
  v148 = (unsigned int)(v135 + 1023) >> 10;
  __asm { vmovq   rax, xmm0 }
  v152 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  v127 = (unsigned int)(_RAX + 1023) >> 10;
  __asm
  {
    vpextrq rax, xmm0, 1
    vmovups xmm0, [rbp+0F0h+var_78]
  }
  v151 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  v126 = (unsigned int)(_RAX + 1023) >> 10;
  __asm { vmovq   rax, xmm0 }
  *(_QWORD *)&v137 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  v129 = (unsigned int)(_RAX + 1023) >> 10;
  __asm
  {
    vpextrq rax, xmm0, 1
    vmovups xmm0, [rbp+0F0h+var_68]
    vpextrq r13, xmm0, 1
  }
  v68 = _RAX + 1023;
  *(_QWORD *)&v153 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  __asm
  {
    vmovq   rax, xmm0
    vmovups xmm0, xmmword ptr [rsp+1F0h+result.___u0]
  }
  v128 = v68 >> 10;
  __asm { vpextrq rsi, xmm0, 1 }
  v72 = _RAX + 1023;
  *(_QWORD *)&v138 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  v130 = (unsigned int)(_R13 + 1023) >> 10;
  __asm
  {
    vmovq   rax, xmm0
    vmovups xmm0, xmmword ptr [rdx]
    vmovq   r15, xmm0
  }
  v131 = v72 >> 10;
  __asm { vpextrq rbx, xmm0, 1 }
  v133 = (unsigned int)(HIDWORD(_RAX) + 1023) >> 10;
  v132 = (unsigned int)(_RAX + 1023) >> 10;
  LODWORD(v85) = v60;
  LODWORD(fmt) = DWORD1(v139);
  Com_Printf(8, "%3d Surfaces:            %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v139, v59, fmt, v85, DWORD2(v139), (unsigned int)(DWORD2(v138) + 1023) >> 10, HIDWORD(v139), (unsigned int)(HIDWORD(v138) + 1023) >> 10);
  LODWORD(v114) = v146;
  LODWORD(v107) = HIDWORD(v140);
  LODWORD(v100) = v159;
  LODWORD(v93) = DWORD2(v140);
  LODWORD(v86) = v147;
  LODWORD(fmta) = DWORD1(v140);
  Com_Printf(8, "   %3d Dead:             %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v140, memberLa, fmta, v86, v93, v100, v107, v114);
  LODWORD(v115) = v148;
  LODWORD(v108) = v149;
  LODWORD(v101) = (v164 + 1023) >> 10;
  LODWORD(v94) = v166;
  LODWORD(v87) = v150;
  LODWORD(fmtb) = v125;
  Com_Printf(8, "   %3d Live:             %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v136, v123, fmtb, v87, v94, v101, v108, v115);
  LODWORD(v116) = v151;
  LODWORD(v109) = HIDWORD(v141);
  LODWORD(v102) = v126;
  LODWORD(v95) = DWORD2(v141);
  LODWORD(v88) = v152;
  LODWORD(fmtc) = DWORD1(v141);
  Com_Printf(8, "      %3d Heap:          %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v141, v127, fmtc, v88, v95, v102, v109, v116);
  LODWORD(v117) = v153;
  LODWORD(v110) = HIDWORD(v142);
  LODWORD(v103) = v128;
  LODWORD(v96) = DWORD2(v142);
  LODWORD(v89) = v137;
  LODWORD(fmtd) = DWORD1(v142);
  Com_Printf(8, "         %3d MultiFrame: %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v142, v129, fmtd, v89, v96, v103, v110, v117);
  LODWORD(v118) = (unsigned int)(HIDWORD(_R13) + 1023) >> 10;
  LODWORD(v111) = HIDWORD(v143);
  LODWORD(v104) = v130;
  LODWORD(v97) = DWORD2(v143);
  LODWORD(v90) = v138;
  LODWORD(fmte) = DWORD1(v143);
  Com_Printf(8, "         %3d InFrame:    %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v143, v131, fmte, v90, v97, v104, v111, v118);
  LODWORD(v119) = (unsigned int)(HIDWORD(_RSI) + 1023) >> 10;
  LODWORD(v112) = HIDWORD(v144);
  LODWORD(v105) = (unsigned int)(_RSI + 1023) >> 10;
  LODWORD(v98) = DWORD2(v144);
  LODWORD(v91) = v133;
  LODWORD(fmtf) = DWORD1(v144);
  Com_Printf(8, "      %3d View:          %3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v144, v132, fmtf, v91, v98, v105, v112, v119);
  LODWORD(v120) = (unsigned int)(HIDWORD(_RBX) + 1023) >> 10;
  LODWORD(v113) = HIDWORD(v145);
  LODWORD(v106) = (unsigned int)(_RBX + 1023) >> 10;
  LODWORD(v99) = DWORD2(v145);
  LODWORD(v92) = (unsigned int)(HIDWORD(_R15) + 1023) >> 10;
  LODWORD(fmtg) = DWORD1(v145);
  Com_Printf(8, "      %3d PlacedResource:%3dMB | min=%3d,%3dMB | max=%3d,%3dMB | avg=%3d,%3dMB\n", (unsigned int)v145, (unsigned int)(_R15 + 1023) >> 10, fmtg, v92, v99, v106, v113, v120);
}

/*
==============
R_RT_Tracking_GenerateDebugDrawStats
==============
*/
R_RT_Tracking_DebugDrawStats *R_RT_Tracking_GenerateDebugDrawStats(R_RT_Tracking_DebugDrawStats *result)
{
  R_RT_Tracking_Totals *v2; 
  R_RT_Tracking_TotalStat resulta; 

  _RSI = result;
  v2 = IWStaticCircularQueue<R_RT_Tracking_Totals,64,unsigned short>::Back(&s_R_RT_Tracking.m_totalsQueue);
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_short_(&resulta, (const unsigned __int16 *)&v2->m_allSurfaceTotals);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsi], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&resulta, v2->m_memTotals[0].m_committedKB, &v2->m_memTotals[0].m_committedKB[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rcx, xmm0
  }
  LODWORD(_RAX) = _RCX + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)_RAX >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+result.___u0]
    vmovups xmmword ptr [rsi+10h], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_MemberAdd_unsigned_int_(&resulta, v2->m_memTotals[1].m_committedKB, &v2->m_memTotals[1].m_committedKB[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rcx, xmm0
  }
  resulta.m_min = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_val = (unsigned int)(_RCX + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  LODWORD(_RAX) = v2->m_memTotals[1].m_reservedKB + 1023;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  __asm { vmovups xmm0, xmmword ptr [rbp+result.___u0] }
  _RSI->m_heapReservedMB = (unsigned int)_RAX >> 10;
  __asm { vmovups xmmword ptr [rsi+20h], xmm0 }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_memTotals[0].m_committedKB[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rcx, xmm0
  }
  LODWORD(_RAX) = _RCX + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)_RAX >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+result.___u0]
    vmovups xmmword ptr [rsi+34h], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_requestKB);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rcx, xmm0
  }
  LODWORD(_RAX) = _RCX + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)_RAX >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+result.___u0]
    vmovups xmmword ptr [rsi+44h], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_successKB);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovq   rcx, xmm0
  }
  LODWORD(_RAX) = _RCX + 1023;
  resulta.m_min = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  __asm { vpextrq rcx, xmm0, 1 }
  resulta.m_val = (unsigned int)_RAX >> 10;
  resulta.m_avg = (unsigned int)(HIDWORD(_RCX) + 1023) >> 10;
  resulta.m_max = (unsigned int)(_RCX + 1023) >> 10;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+result.___u0]
    vmovups xmmword ptr [rsi+54h], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_requests);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsi+64h], xmm0
  }
  _RAX = R_RT_Tracking_GetTotalStat_Member_unsigned_int_(&resulta, &v2->m_esramFrameTotals.m_successes);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsi+74h], xmm0
  }
  return _RSI;
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
  unsigned int v26; 
  int v27; 
  R_RT_AllocationLockSentry v28; 
  int v29; 
  unsigned int v30; 
  R_RT_Tracking_SurfaceRecord *v31; 
  R_RT_Tracking_SurfaceTotals *v32; 
  __int64 v33; 
  R_RT_Tracking_Totals *v34; 
  __int64 v35; 
  R_RT_Tracking_AllocRecord outAllocRecords[4096]; 

  v35 = -2i64;
  v34 = outTotals;
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v28);
  v29 = 0;
  v2 = 0;
  v26 = 0;
  m_surfaceTotals = outTotals->m_surfaceTotals;
  v32 = outTotals->m_surfaceTotals;
  m_records = s_R_RT_Tracking.m_surfacePools[0].m_records;
  v31 = s_R_RT_Tracking.m_surfacePools[0].m_records;
  v33 = 5i64;
  blocks = g_R_RT_ManagerSurfaceAllocator->blocks;
  do
  {
    v30 = *(_DWORD *)&m_records[-1].m_surfaceID;
    v6 = v30;
    v7 = 0;
    v8 = m_records;
    v9 = &m_records[v30];
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
      m_records = v31;
      m_surfaceTotals = v32;
      v6 = v30;
      v2 = v26;
    }
    m_surfaceTotals->m_insts = truncate_cast<unsigned short,unsigned int>(v6);
    m_surfaceTotals->m_sizeKB = v7;
    v11 = v6 + v29;
    v29 += v6;
    v2 += v7;
    v26 = v2;
    m_records = (R_RT_Tracking_SurfaceRecord *)((char *)m_records + 98312);
    v31 = m_records;
    v32 = ++m_surfaceTotals;
    --v33;
  }
  while ( v33 );
  v12 = truncate_cast<unsigned short,unsigned int>(v11);
  _R14 = v34;
  v34->m_allSurfaceTotals.m_insts = v12;
  _R14->m_allSurfaceTotals.m_sizeKB = v2;
  *(_DWORD *)_R14->m_memTotals[0].m_allocs = 0;
  _R14->m_memTotals[0].m_allocLimit = 0;
  *(_QWORD *)_R14->m_memTotals[0].m_committedKB = 0i64;
  *(_QWORD *)&_R14->m_memTotals[0].m_reservedKB = 0i64;
  _R14->m_memTotals[1].m_allocLimit = 0;
  *(_QWORD *)_R14->m_memTotals[1].m_committedKB = 0i64;
  _R14->m_memTotals[1].m_reservedKB = 0;
  v14 = 0;
  v27 = 0;
  v15 = g_R_RT_Heap_poolConfigs;
  v16 = &_R14->m_memTotals[2];
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
      _R14 = v34;
      v14 = v27;
    }
    _R14->m_memTotals[1].m_allocs[0] += v16->m_allocs[0];
    _R14->m_memTotals[1].m_allocs[1] += v16->m_allocs[1];
    _R14->m_memTotals[1].m_allocLimit += v16->m_allocLimit;
    _R14->m_memTotals[1].m_committedKB[0] += v16->m_committedKB[0];
    _R14->m_memTotals[1].m_committedKB[1] += v16->m_committedKB[1];
    _R14->m_memTotals[1].m_reservedKB += v16->m_reservedKB;
    v27 = ++v14;
    ++v15;
    ++v16;
  }
  while ( v14 != 4 );
  _R14->m_memTotals[0].m_allocs[0] += _R14->m_memTotals[1].m_allocs[0];
  _R14->m_memTotals[0].m_allocs[1] += _R14->m_memTotals[1].m_allocs[1];
  _R14->m_memTotals[0].m_allocLimit += _R14->m_memTotals[1].m_allocLimit;
  _R14->m_memTotals[0].m_committedKB[0] += _R14->m_memTotals[1].m_committedKB[0];
  _R14->m_memTotals[0].m_committedKB[1] += _R14->m_memTotals[1].m_committedKB[1];
  _R14->m_memTotals[0].m_reservedKB += _R14->m_memTotals[1].m_reservedKB;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_R_RT_ESRAM_Internal.m_frameTotals.m_requestKB
    vmovups xmmword ptr [r14+0A8h], xmm0
  }
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v28);
}

/*
==============
R_RT_Tracking_GroupRefDecrement
==============
*/
void R_RT_Tracking_GroupRefDecrement(const R_RT_Group *rtGroup)
{
  unsigned int v3; 
  int m_colorRtCount; 
  __int64 v5; 
  unsigned __int16 m_surfaceID; 
  __int64 v7; 
  unsigned __int16 v8; 
  R_RT_Surface *v9; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  __int64 v14; 
  __int64 v15; 
  R_RT_Handle v16; 

  _RBP = rtGroup;
  v3 = 0;
  m_colorRtCount = rtGroup->m_colorRtCount;
  if ( rtGroup->m_colorRtCount )
  {
    do
    {
      v5 = v3;
      m_surfaceID = _RBP->m_colorRts[v5].m_surfaceID;
      v7 = (__int64)&_RBP->m_colorRts[v5];
      if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v8 = (m_surfaceID & 0x7FFF) - 1;
      if ( v8 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
        __debugbreak();
      v9 = &g_R_RT_ManagerSurfaceAllocator->blocks[v8];
      if ( v9->m_tracking.m_allocCounter != *(_DWORD *)(v7 + 8) )
      {
        LODWORD(v15) = *(_DWORD *)(v7 + 8);
        LODWORD(v14) = v9->m_tracking.m_allocCounter;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v14, v15, *(const char **)(v7 + 16), *(const char **)(v7 + 24)) )
          __debugbreak();
      }
      m_rtFlagsInternal = v9->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x3000) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
        __debugbreak();
      R_RT_Tracking_SurfaceRefDecrement(v9, v3++);
    }
    while ( v3 != m_colorRtCount );
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+88h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v16);
    Surface = R_RT_Handle::GetSurface(&v16);
    R_RT_Tracking_SurfaceRefDecrement(Surface, -1);
  }
  else if ( v16.m_tracking.m_allocCounter )
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
  unsigned int v4; 
  int m_colorRtCount; 
  __int64 v7; 
  unsigned __int16 m_surfaceID; 
  __int64 v9; 
  unsigned __int16 v10; 
  R_RT_Surface *v11; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  __int64 v16; 
  __int64 v17; 
  R_RT_Handle v18; 

  v4 = 0;
  m_colorRtCount = rtGroup->m_colorRtCount;
  _RBP = rtGroup;
  if ( rtGroup->m_colorRtCount )
  {
    do
    {
      v7 = v4;
      m_surfaceID = _RBP->m_colorRts[v7].m_surfaceID;
      v9 = (__int64)&_RBP->m_colorRts[v7];
      if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
        __debugbreak();
      v10 = (m_surfaceID & 0x7FFF) - 1;
      if ( v10 >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 239, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
        __debugbreak();
      v11 = &g_R_RT_ManagerSurfaceAllocator->blocks[v10];
      if ( v11->m_tracking.m_allocCounter != *(_DWORD *)(v9 + 8) )
      {
        LODWORD(v17) = *(_DWORD *)(v9 + 8);
        LODWORD(v16) = v11->m_tracking.m_allocCounter;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 241, ASSERT_TYPE_ASSERT, "(surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter)", "%s\n\tStale handle access: surface->m_allocCounter=%u, allocCounter=%u, name=%s, location=%s", "surface->m_tracking.m_allocCounter == this->m_tracking.m_allocCounter", v16, v17, *(const char **)(v9 + 16), *(const char **)(v9 + 24)) )
          __debugbreak();
      }
      m_rtFlagsInternal = v11->m_rtFlagsInternal;
      if ( (m_rtFlagsInternal & 0x3000) != 4096 && (m_rtFlagsInternal & 0x4000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 242, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Allocated | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Allocated || surface->m_rtFlagsInternal & R_RT_FlagInternal_Placement") )
        __debugbreak();
      R_RT_Tracking_SurfaceRefIncrement(v11, v4++, location);
    }
    while ( v4 != m_colorRtCount );
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+88h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v18);
    Surface = R_RT_Handle::GetSurface(&v18);
    R_RT_Tracking_SurfaceRefIncrement(Surface, -1, location);
  }
  else if ( v18.m_tracking.m_allocCounter )
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
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int8 outValue[16]; 
  const void *v18; 
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
      LODWORD(v16) = resourceIndex;
      LODWORD(v15) = 32;
      Com_Printf(1, "Too many RT %simage \"%s\" %s-references (limit=%d) - probable leak.  resourceIndex=%d, location=%s, refAddr=0x%p\n", s_R_RT_Tracking_whichImagePrefixes[(unsigned __int8)ImageRefAppendix->m_which], image->name, s_R_RT_Tracking_imageRefShaderTypeNames[(unsigned __int8)shaderImageSetID], v15, v16, location, refAddr);
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
    __asm { vmovups xmm0, xmmword ptr [rsp+0A8h+outValue] }
    v18 = refAddr;
    __asm
    {
      vmovsd  xmm1, [rsp+0A8h+var_48]
      vmovups xmmword ptr [rsp+0A8h+addRecord.m_refType], xmm0
      vmovsd  [rsp+0A8h+addRecord.m_refAddr], xmm1
    }
    v14 = R_RT_Tracking_AddRefRecord_R_RT_Tracking_ImageRefRecord_32_(m_recordCount, (R_RT_Tracking_ImageRefRecord (*)[32])ImageRefAppendix->m_records, &addRecord);
    truncate_store<unsigned char,unsigned int>(&ImageRefAppendix->m_recordCount, v14);
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
  R_RT_Tracking_ImageAppendix *v6; 
  __int64 v9; 

  m_recordCount = appendix->m_recordCount;
  _R10 = appendix->m_records;
  _RAX = appendix->m_records;
  v6 = (R_RT_Tracking_ImageAppendix *)&appendix->m_records[m_recordCount];
  if ( appendix->m_records != (R_RT_Tracking_ImageRefRecord *)v6 )
  {
    do
    {
      if ( _RAX->m_refType != imageRefType )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [r10], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vmovsd  qword ptr [r10+10h], xmm1
        }
        ++_R10;
      }
      ++_RAX;
    }
    while ( _RAX != (R_RT_Tracking_ImageRefRecord *)v6 );
  }
  v9 = ((char *)_R10 - (char *)appendix - 8) / 24;
  if ( (_DWORD)v9 != (_DWORD)m_recordCount )
  {
    DebugWipe(_R10, 24i64 * (unsigned int)(m_recordCount - v9));
    if ( (unsigned int)v9 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v9, "unsigned", (unsigned int)v9) )
      __debugbreak();
    appendix->m_recordCount = v9;
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
  unsigned int v6; 
  __int64 v10; 
  __int128 v15; 
  const void *v16; 

  m_recordCount = appendix->m_recordCount;
  _RSI = appendix;
  if ( keyRecord->m_location && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1363, ASSERT_TYPE_ASSERT, "(keyRecord->m_location == 0)", (const char *)&queryFormat, "keyRecord->m_location == NULL") )
    __debugbreak();
  v5 = -1;
  v6 = 0;
  if ( m_recordCount )
  {
    do
    {
      _RCX = 3i64 * v6;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+rcx*8+8]
        vmovsd  xmm1, qword ptr [rsi+rcx*8+18h]
        vmovups [rsp+58h+var_28], xmm0
        vmovsd  [rsp+58h+var_18], xmm1
      }
      if ( !keyRecord->m_location && v16 == keyRecord->m_refAddr && WORD2(v15) == keyRecord->m_context.m_input.m_codeTexture )
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
      v10 = (unsigned int)(m_recordCount - 1);
      _RCX = &_RSI->m_records[v10];
      if ( v5 != (_DWORD)v10 )
      {
        __asm { vmovups xmm0, xmmword ptr [rcx] }
        _R8 = 3i64 * v5;
        __asm
        {
          vmovups xmmword ptr [rsi+r8*8+8], xmm0
          vmovsd  xmm1, qword ptr [rcx+10h]
          vmovsd  qword ptr [rsi+r8*8+18h], xmm1
        }
      }
      DebugWipe(_RCX, 0x18ui64);
      truncate_store<unsigned char,unsigned int>(&_RSI->m_recordCount, v10);
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
  __int128 v8; 
  const void *v9; 
  R_RT_Tracking_ImageRefRecord keyRecord; 

  LODWORD(v8) = 65537;
  BYTE4(v8) = shaderImageSetID;
  *(_WORD *)((char *)&v8 + 5) = 0;
  BYTE7(v8) = 0;
  truncate_store<unsigned char,unsigned int>((unsigned __int8 *)&v8 + 5, resourceIndex);
  *((_QWORD *)&v8 + 1) = 0i64;
  __asm { vmovups xmm0, xmmword ptr [rsp+20h] }
  v9 = refAddr;
  __asm
  {
    vmovsd  xmm1, [rsp+58h+var_28]
    vmovups xmmword ptr [rsp+58h+keyRecord.m_refType], xmm0
    vmovsd  [rsp+58h+keyRecord.m_refAddr], xmm1
  }
  R_RT_Tracking_RemoveImageRefRecord(appendix, &keyRecord);
}

/*
==============
R_RT_Tracking_RemoveImageRefRecord_Input
==============
*/
void R_RT_Tracking_RemoveImageRefRecord_Input(R_RT_Tracking_ImageAppendix *appendix, const void *refAddr, unsigned int codeTexture)
{
  __int128 v7; 
  const void *v8; 
  R_RT_Tracking_ImageRefRecord keyRecord; 

  LODWORD(v7) = 0x10000;
  DWORD1(v7) = truncate_cast<unsigned short,unsigned int>(codeTexture);
  *((_QWORD *)&v7 + 1) = 0i64;
  __asm { vmovups xmm0, [rsp+58h+var_38] }
  v8 = refAddr;
  __asm
  {
    vmovsd  xmm1, [rsp+58h+var_28]
    vmovups xmmword ptr [rsp+58h+keyRecord.m_refType], xmm0
    vmovsd  [rsp+58h+keyRecord.m_refAddr], xmm1
  }
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
  unsigned int m_recordCount; 
  __int64 v10; 
  unsigned __int16 v12; 
  IWIndexedBlockAllocatorN<R_RT_Surface,unsigned short,4096,IWIndexedBlockAllocator_DefaultNextAccessor<R_RT_Surface,unsigned short> > *v13; 
  __int64 v14; 
  __int64 v15; 

  m_surfacePoolID = surfaceInfo->m_surfacePoolID;
  m_surfaceRecordIndex = surfaceInfo->m_surfaceRecordIndex;
  if ( m_surfacePoolID == R_RT_Tracking_SurfacePoolID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1274, ASSERT_TYPE_ASSERT, "(surfacePoolID != R_RT_Tracking_SurfacePoolID_INVALID)", (const char *)&queryFormat, "surfacePoolID != R_RT_Tracking_SurfacePoolID_INVALID") )
    __debugbreak();
  _RDI = &s_R_RT_Tracking.m_surfacePools[m_surfacePoolID];
  if ( (unsigned int)m_surfaceRecordIndex >= _RDI->m_recordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1278, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < surfaceRecordCount)", (const char *)&queryFormat, "surfaceRecordIndex < surfaceRecordCount") )
    __debugbreak();
  _R13 = 24 * m_surfaceRecordIndex;
  if ( _RDI->m_records[m_surfaceRecordIndex].m_surfaceID != surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 1280, ASSERT_TYPE_ASSERT, "(surfaceRecord->m_surfaceID == surfaceID)", (const char *)&queryFormat, "surfaceRecord->m_surfaceID == surfaceID") )
    __debugbreak();
  surfaceInfo->m_surfacePoolID = R_RT_Tracking_SurfacePoolID_INVALID;
  surfaceInfo->m_surfaceRecordIndex = 0;
  m_recordCount = _RDI->m_recordCount;
  if ( (unsigned int)m_surfaceRecordIndex >= _RDI->m_recordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_tracking_impl.h", 240, ASSERT_TYPE_ASSERT, "(surfaceRecordIndex < oldSurfaceRecordCount)", (const char *)&queryFormat, "surfaceRecordIndex < oldSurfaceRecordCount") )
    __debugbreak();
  v10 = m_recordCount - 1;
  _RBX = &_RDI->m_records[v10];
  if ( (_DWORD)m_surfaceRecordIndex != (_DWORD)v10 )
  {
    v12 = R_RT_WritableSurfaceIDToIndex(_RDI->m_records[v10].m_surfaceID);
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rdi+r13+8], xmm0
      vmovsd  xmm1, qword ptr [rbx+10h]
      vmovsd  qword ptr [rdi+r13+18h], xmm1
    }
  }
  _RBX->m_name = NULL;
  _RDI->m_records[v10].m_mem = NULL;
  _RDI->m_records[v10].m_surfaceID = 0;
  _RDI->m_recordCount = v10;
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
  unsigned int v10; 
  char v11; 
  __int64 v12; 
  int v13; 
  R_RT_Tracking_SurfaceRefRecord *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  char *fmt; 
  int v21; 
  __int128 v22; 

  v4 = colorRtIndex;
  Sys_CheckAcquireLock(&s_R_RT_Tracking.m_surfaceRefLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_R_RT_Tracking.m_surfaceRefLock);
  s_R_RT_Tracking.m_surfaceRefLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_R_RT_Tracking.m_surfaceRefLock.writeThreadId )
  {
    v21 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v21, 0i64) )
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
    DWORD1(v22) = 0;
    if ( (unsigned int)(v4 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v4, "signed", v4) )
      __debugbreak();
    m_refRecordCount = surface->m_tracking.m_refRecordCount;
    _R9 = surface->m_tracking.m_refRecords;
    v10 = 0;
    LOWORD(v22) = (unsigned __int8)v4;
    WORD1(v22) = 1;
    *((_QWORD *)&v22 + 1) = location;
    if ( surface->m_tracking.m_refRecordCount )
    {
      do
      {
        v11 = -1;
        v12 = v10;
        if ( (unsigned int)_R9[v10].m_lastUsed + 1 < 0xFF )
          v11 = _R9[v10].m_lastUsed + 1;
        ++v10;
        _R9[v12].m_lastUsed = v11;
      }
      while ( v10 != m_refRecordCount );
    }
    v13 = 0;
    if ( m_refRecordCount )
    {
      while ( 1 )
      {
        v14 = &_R9[v13];
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
          if ( _R9[v6].m_lastUsed <= _R9[v15].m_lastUsed )
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
      __asm { vmovups xmm0, [rsp+88h+var_38] }
      _RAX = 2i64 * v15;
      __asm { vmovups xmmword ptr [r9+rax*8], xmm0 }
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

