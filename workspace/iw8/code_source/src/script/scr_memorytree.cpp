/*
==============
Scr_GetStringUsagePercent
==============
*/

unsigned int __fastcall Scr_GetStringUsagePercent()
{
  return ?Scr_GetStringUsagePercent@@YAIXZ();
}

/*
==============
MT_Realloc
==============
*/
void MT_Realloc(unsigned __int64,unsigned __int64)
{
	//Failed decompiling
}

/*
==============
MT_DumpTreeToCSV
==============
*/
void MT_DumpTreeToCSV(void)
{
	//Failed decompiling
}

/*
==============
MT_AllocIndex
==============
*/
void MT_AllocIndex(unsigned __int64,int)
{
	//Failed decompiling
}

/*
==============
MT_FreeIndex
==============
*/
void MT_FreeIndex(uint,unsigned __int64)
{
	//Failed decompiling
}

/*
==============
MT_Alloc
==============
*/
void MT_Alloc(unsigned __int64,int)
{
	//Failed decompiling
}

/*
==============
MT_DumpTree
==============
*/
void MT_DumpTree(void)
{
	//Failed decompiling
}

/*
==============
Scr_GetStringUsageMaxPercent
==============
*/

unsigned int __fastcall Scr_GetStringUsageMaxPercent()
{
  return ?Scr_GetStringUsageMaxPercent@@YAIXZ();
}

/*
==============
MT_Free
==============
*/
void MT_Free(void *,unsigned __int64)
{
	//Failed decompiling
}

/*
==============
MT_Init
==============
*/
void MT_Init(void)
{
	//Failed decompiling
}

/*
==============
Scr_GetStringUsage
==============
*/

unsigned int __fastcall Scr_GetStringUsage()
{
  return ?Scr_GetStringUsage@@YAIXZ();
}

/*
==============
MT_Reset
==============
*/
void MT_Reset(void)
{
	//Failed decompiling
}

/*
==============
MT_Alloc
==============
*/
void MT_Alloc(unsigned __int64,int)
{
	//Failed decompiling
}

/*
==============
MT_AllocIndex
==============
*/
void MT_AllocIndex(unsigned __int64,int)
{
	//Failed decompiling
}

/*
==============
MT_DumpTree
==============
*/
void MT_DumpTree(void)
{
	//Failed decompiling
}

/*
==============
MT_DumpTreeToCSV
==============
*/
void MT_DumpTreeToCSV(void)
{
	//Failed decompiling
}

/*
==============
MT_Error
==============
*/
void MT_Error
{
	//Failed decompiling
}

/*
==============
MT_Free
==============
*/
void MT_Free(void *,unsigned __int64)
{
	//Failed decompiling
}

/*
==============
MT_FreeIndex
==============
*/
void MT_FreeIndex(uint,unsigned __int64)
{
	//Failed decompiling
}

/*
==============
MT_GetSize
==============
*/
void MT_GetSize
{
	//Failed decompiling
}

/*
==============
MT_Init
==============
*/
void MT_Init(void)
{
	//Failed decompiling
}

/*
==============
MT_NodeInfoString
==============
*/
void MT_NodeInfoString
{
	//Failed decompiling
}

/*
==============
MT_Realloc
==============
*/
void MT_Realloc(unsigned __int64,unsigned __int64)
{
	//Failed decompiling
}

/*
==============
MT_Reset
==============
*/
void MT_Reset(void)
{
	//Failed decompiling
}

/*
==============
Scr_GetStringUsage
==============
*/
__int64 Scr_GetStringUsage()
{
  return (unsigned int)scrMemTreeGlob.totalAllocBuckets;
}

/*
==============
Scr_GetStringUsageMaxPercent
==============
*/
__int64 Scr_GetStringUsageMaxPercent()
{
  return (unsigned int)(100 * scrMemTreeGlob.totalAllocBucketsMax + 0x7FFFF) >> 19;
}

/*
==============
Scr_GetStringUsagePercent
==============
*/
__int64 Scr_GetStringUsagePercent()
{
  return (unsigned int)(100 * scrMemTreeGlob.totalAllocBuckets + 0x7FFFF) >> 19;
}

