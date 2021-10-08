/*
==============
TempMallocSetAlign
==============
*/

void __fastcall TempMallocSetAlign(int alignment)
{
  ?TempMallocSetAlign@@YAXH@Z(alignment);
}

/*
==============
TempMalloc
==============
*/

char *__fastcall TempMalloc(unsigned __int64 len)
{
  return ?TempMalloc@@YAPEAD_K@Z(len);
}

/*
==============
TempMallocAlign
==============
*/

char *__fastcall TempMallocAlign(unsigned __int64 len)
{
  return ?TempMallocAlign@@YAPEAD_K@Z(len);
}

/*
==============
TempMemorySetPos
==============
*/

void __fastcall TempMemorySetPos(char *pos)
{
  ?TempMemorySetPos@@YAXPEAD@Z(pos);
}

/*
==============
TempMemoryReset
==============
*/

void __fastcall TempMemoryReset(HunkUser *user)
{
  ?TempMemoryReset@@YAXPEAUHunkUser@@@Z(user);
}

/*
==============
TempMallocAlignStrict
==============
*/

char *__fastcall TempMallocAlignStrict(unsigned __int64 len)
{
  return ?TempMallocAlignStrict@@YAPEAD_K@Z(len);
}

/*
==============
TempMallocAlign32
==============
*/

char *__fastcall TempMallocAlign32()
{
  return ?TempMallocAlign32@@YAPEADXZ();
}

/*
==============
TempMalloc
==============
*/
char *TempMalloc(unsigned __int64 len)
{
  if ( !s_tempMemUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 22, ASSERT_TYPE_ASSERT, "( s_tempMemUser )", (const char *)&queryFormat, "s_tempMemUser") )
    __debugbreak();
  return (char *)Mem_HunkUser_AllocInternal(s_tempMemUser, len, 1ui64, "TempMalloc");
}

/*
==============
TempMallocAlign32
==============
*/
char *TempMallocAlign32()
{
  if ( !s_tempMemUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 44, ASSERT_TYPE_ASSERT, "( s_tempMemUser )", (const char *)&queryFormat, "s_tempMemUser") )
    __debugbreak();
  return (char *)Mem_HunkUser_AllocInternal(s_tempMemUser, 0i64, 1ui64, "TempMallocAlign32");
}

/*
==============
TempMallocAlign
==============
*/
char *TempMallocAlign(unsigned __int64 len)
{
  if ( !s_tempMemUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 33, ASSERT_TYPE_ASSERT, "( s_tempMemUser )", (const char *)&queryFormat, "s_tempMemUser") )
    __debugbreak();
  return (char *)Mem_HunkUser_AllocInternal(s_tempMemUser, len, 1ui64, "TempMallocAlign");
}

/*
==============
TempMallocAlignStrict
==============
*/
char *TempMallocAlignStrict(unsigned __int64 len)
{
  if ( !s_tempMemUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 55, ASSERT_TYPE_ASSERT, "( s_tempMemUser )", (const char *)&queryFormat, "s_tempMemUser") )
    __debugbreak();
  return (char *)Mem_HunkUser_AllocInternal(s_tempMemUser, len, 1ui64, "TempMallocAlignStrict");
}

/*
==============
TempMallocSetAlign
==============
*/
void TempMallocSetAlign(int alignment)
{
  unsigned __int64 v1; 

  v1 = alignment;
  if ( !s_tempMemUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 69, ASSERT_TYPE_ASSERT, "( s_tempMemUser )", (const char *)&queryFormat, "s_tempMemUser") )
    __debugbreak();
  Mem_HunkUser_AllocInternal(s_tempMemUser, 0i64, v1, "TempMallocSetAlign");
}

/*
==============
TempMemoryReset
==============
*/
void TempMemoryReset(HunkUser *user)
{
  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 12, ASSERT_TYPE_ASSERT, "(user)", (const char *)&queryFormat, "user") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(user) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 14, ASSERT_TYPE_ASSERT, "(Mem_HunkUser_GetUsedSize( user ) == 0)", (const char *)&queryFormat, "Mem_HunkUser_GetUsedSize( user ) == 0") )
    __debugbreak();
  s_tempMemUser = user;
}

/*
==============
TempMemorySetPos
==============
*/
void TempMemorySetPos(char *pos)
{
  if ( !s_tempMemUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_tempmemory.cpp", 62, ASSERT_TYPE_ASSERT, "( s_tempMemUser )", (const char *)&queryFormat, "s_tempMemUser") )
    __debugbreak();
  Mem_HunkUser_SetPos(s_tempMemUser, pos);
}

