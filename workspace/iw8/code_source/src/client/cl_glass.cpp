/*
==============
CL_Glass_GetChangesBuffer
==============
*/

CG_GlassPieceChangeWithIndex *__fastcall CL_Glass_GetChangesBuffer(const LocalClientNum_t localClientNum)
{
  return ?CL_Glass_GetChangesBuffer@@YAPEAUCG_GlassPieceChangeWithIndex@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Glass_GetChangesBufferSize
==============
*/

unsigned int __fastcall CL_Glass_GetChangesBufferSize()
{
  return ?CL_Glass_GetChangesBufferSize@@YAIXZ();
}

/*
==============
CL_Glass_AllocateClientMemory
==============
*/

void __fastcall CL_Glass_AllocateClientMemory(HunkUser *const hunkUser, const unsigned int initPieceCount)
{
  ?CL_Glass_AllocateClientMemory@@YAXQEAUHunkUser@@I@Z(hunkUser, initPieceCount);
}

/*
==============
CL_Glass_FreeClientMemory
==============
*/

void CL_Glass_FreeClientMemory(void)
{
  ?CL_Glass_FreeClientMemory@@YAXXZ();
}

/*
==============
CL_Glass_AllocateClientMemory
==============
*/
void CL_Glass_AllocateClientMemory(HunkUser *const hunkUser, const unsigned int initPieceCount)
{
  int v3; 
  unsigned __int64 v5; 
  CG_GlassPieceChangeWithIndex **v6; 

  v3 = 0;
  v5 = 6i64 * initPieceCount;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v6 = s_clientGlassPieceChanges;
    do
    {
      ++v3;
      *v6++ = (CG_GlassPieceChangeWithIndex *)Mem_HunkUser_AllocInternal(hunkUser, v5, 2ui64, "CL_Glass_AllocateClientMemory");
    }
    while ( v3 < SLODWORD(cl_maxLocalClients) );
  }
  s_clientGlassPieceChangesSize = initPieceCount;
}

/*
==============
CL_Glass_FreeClientMemory
==============
*/
void CL_Glass_FreeClientMemory(void)
{
  if ( SLODWORD(cl_maxLocalClients) > 0 )
    memset(s_clientGlassPieceChanges, 0, 8i64 * SLODWORD(cl_maxLocalClients));
  s_clientGlassPieceChangesSize = 0;
}

/*
==============
CL_Glass_GetChangesBuffer
==============
*/
CG_GlassPieceChangeWithIndex *CL_Glass_GetChangesBuffer(const LocalClientNum_t localClientNum)
{
  CG_GlassPieceChangeWithIndex **v1; 

  v1 = &s_clientGlassPieceChanges[localClientNum];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_glass.cpp", 41, ASSERT_TYPE_ASSERT, "(s_clientGlassPieceChanges[localClientNum])", (const char *)&queryFormat, "s_clientGlassPieceChanges[localClientNum]") )
    __debugbreak();
  return *v1;
}

/*
==============
CL_Glass_GetChangesBufferSize
==============
*/
__int64 CL_Glass_GetChangesBufferSize()
{
  return s_clientGlassPieceChangesSize;
}

