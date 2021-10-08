/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr, unsigned __int64 size)
{
  ??3@YAXPEAX_K@Z(ptr, size);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr)
{
  ??3@YAXPEAX@Z(ptr);
}

/*
==============
bdShutdownAckChunk::operator delete
==============
*/

void __fastcall bdShutdownAckChunk::operator delete(void *p)
{
  ??3bdShutdownAckChunk@@SAXPEAX@Z(p);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *__formal, void *a2)
{
  ??3@YAXPEAX0@Z(__formal, a2);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr, const std::nothrow_t *__formal)
{
  ??3@YAXPEAXAEBUnothrow_t@std@@@Z(ptr, __formal);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr, std::align_val_t align)
{
  ??3@YAXPEAXW4align_val_t@std@@@Z(ptr, align);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr, bfx::bfxMemHeap __formal, bfx::bfxMemTag a3)
{
  ??3@YAXPEAXW4bfxMemHeap@bfx@@W4bfxMemTag@1@@Z(ptr, __formal, a3);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr, std::align_val_t align, const std::nothrow_t *__formal)
{
  ??3@YAXPEAXW4align_val_t@std@@AEBUnothrow_t@1@@Z(ptr, align, __formal);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *__formal, hkPlacementNewArg *a2)
{
  ??3@YAXPEAXPEAUhkPlacementNewArg@@@Z(__formal, a2);
}

/*
==============
operator delete
==============
*/

void __fastcall operator delete(void *ptr, unsigned __int64 size, std::align_val_t align)
{
  ??3@YAXPEAX_KW4align_val_t@std@@@Z(ptr, size, align);
}

/*
==============
operator delete
==============
*/
void operator delete(void *__formal, void *a2)
{
  ;
}

/*
==============
operator delete
==============
*/
void operator delete(void *__formal, hkPlacementNewArg *a2)
{
  if ( hkAssert::Detail::assertFailed(1547727267, "c:\\workspace\\iw8\\shared\\codware\\sdk\\havok\\hk2018_2_0_r1\\source\\common\\base\\hkbase.h", 0x2Cu, "operator delete", (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat.fmt + 3, &hkVarArgs::Detail::VarArgsTypesOf<void>::typesArray, 0i64, -2i64) )
    __debugbreak();
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr)
{
  Mem_NewDeleteHeap_Free(ptr);
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr, const std::nothrow_t *__formal)
{
  Mem_NewDeleteHeap_Free(ptr);
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr, std::align_val_t align)
{
  Mem_NewDeleteHeap_Free(ptr);
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr, std::align_val_t align, const std::nothrow_t *__formal)
{
  Mem_NewDeleteHeap_Free(ptr);
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr, unsigned __int64 size)
{
  Mem_NewDeleteHeap_Free(ptr);
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr, unsigned __int64 size, std::align_val_t align)
{
  Mem_NewDeleteHeap_Free(ptr);
}

/*
==============
operator delete
==============
*/
void operator delete(void *ptr, bfx::bfxMemHeap __formal, __int64 a3)
{
  bfx::MemoryManager *m_pMemoryManager; 

  m_pMemoryManager = bfx::g_pCurInstance->m_pMemoryManager;
  if ( m_pMemoryManager->m_debugFlags )
    bfx::MemoryManager::Free(m_pMemoryManager, ptr);
  else
    ((void (__fastcall *)(bfx::CustomAllocator *, void *, __int64))m_pMemoryManager->m_pCustomAllocator->CustomFree)(m_pMemoryManager->m_pCustomAllocator, ptr, a3);
}

/*
==============
bdShutdownAckChunk::operator delete
==============
*/
void bdShutdownAckChunk::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

