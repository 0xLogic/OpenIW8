/*
==============
HavokPhysicsFX_SwapPhysicsFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_SwapPhysicsFXPipeline(PhysicsFXPipeline *from, PhysicsFXPipeline *to)
{
  ?HavokPhysicsFX_SwapPhysicsFXPipeline@@YAXPEAUPhysicsFXPipeline@@0@Z(from, to);
}

/*
==============
HavokPhysicsFX_UnlockAssetRead
==============
*/

void HavokPhysicsFX_UnlockAssetRead(void)
{
  ?HavokPhysicsFX_UnlockAssetRead@@YAXXZ();
}

/*
==============
HavokPhysicsFX_GetFXPipelines
==============
*/

hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *__fastcall HavokPhysicsFX_GetFXPipelines()
{
  return ?HavokPhysicsFX_GetFXPipelines@@YAPEAV?$hkSet@PEAUPhysicsFXPipeline@@UhkContainerHeapAllocator@@U?$hkMapOperations@PEAUPhysicsFXPipeline@@@@@@XZ();
}

/*
==============
HavokPhysicsFX_GetShapeScales
==============
*/

hkArray<float,hkContainerHeapAllocator> *__fastcall HavokPhysicsFX_GetShapeScales(PhysicsFXShape *physicsFXShape)
{
  return ?HavokPhysicsFX_GetShapeScales@@YAPEAV?$hkArray@MUhkContainerHeapAllocator@@@@PEAUPhysicsFXShape@@@Z(physicsFXShape);
}

/*
==============
HavokPhysicsFX_GetFXHKShape
==============
*/

hknpConvexShape *__fastcall HavokPhysicsFX_GetFXHKShape(PhysicsFXShape *physicsFXShape, int scaleIndex)
{
  return ?HavokPhysicsFX_GetFXHKShape@@YAPEAVhknpConvexShape@@PEAUPhysicsFXShape@@H@Z(physicsFXShape, scaleIndex);
}

/*
==============
HavokPhysicsFX_CopyPhysicsFXShape
==============
*/

void __fastcall HavokPhysicsFX_CopyPhysicsFXShape(PhysicsFXShape *from, PhysicsFXShape *to)
{
  ?HavokPhysicsFX_CopyPhysicsFXShape@@YAXPEAUPhysicsFXShape@@0@Z(from, to);
}

/*
==============
HavokPhysicsFX_AddPhysicsFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_AddPhysicsFXPipeline(PhysicsFXPipeline *physicsFXPipeline)
{
  ?HavokPhysicsFX_AddPhysicsFXPipeline@@YAXPEAUPhysicsFXPipeline@@@Z(physicsFXPipeline);
}

/*
==============
HavokPhysicsFX_MovePhysicsFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_MovePhysicsFXPipeline(PhysicsFXPipeline *from, PhysicsFXPipeline *to)
{
  ?HavokPhysicsFX_MovePhysicsFXPipeline@@YAXPEAUPhysicsFXPipeline@@0@Z(from, to);
}

/*
==============
HavokPhysicsFX_MovePhysicsFXShape
==============
*/

void __fastcall HavokPhysicsFX_MovePhysicsFXShape(PhysicsFXShape *from, PhysicsFXShape *to)
{
  ?HavokPhysicsFX_MovePhysicsFXShape@@YAXPEAUPhysicsFXShape@@0@Z(from, to);
}

/*
==============
HavokPhysicsFX_CopyPhysicsFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_CopyPhysicsFXPipeline(PhysicsFXPipeline *from, PhysicsFXPipeline *to)
{
  ?HavokPhysicsFX_CopyPhysicsFXPipeline@@YAXPEAUPhysicsFXPipeline@@0@Z(from, to);
}

/*
==============
HavokPhysicsFX_ShutdownAssets
==============
*/

void HavokPhysicsFX_ShutdownAssets(void)
{
  ?HavokPhysicsFX_ShutdownAssets@@YAXXZ();
}

/*
==============
HavokPhysicsFX_GetNumScaledShapes
==============
*/

unsigned int __fastcall HavokPhysicsFX_GetNumScaledShapes(PhysicsFXShape *physicsFXShape)
{
  return ?HavokPhysicsFX_GetNumScaledShapes@@YAIPEAUPhysicsFXShape@@@Z(physicsFXShape);
}

/*
==============
HavokPhysicsFX_GetFXShapes
==============
*/

hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *__fastcall HavokPhysicsFX_GetFXShapes()
{
  return ?HavokPhysicsFX_GetFXShapes@@YAPEAV?$hkSet@PEAUPhysicsFXShape@@UhkContainerHeapAllocator@@U?$hkMapOperations@PEAUPhysicsFXShape@@@@@@XZ();
}

/*
==============
HavokPhysicsFX_SwapPhysicsFXShape
==============
*/

void __fastcall HavokPhysicsFX_SwapPhysicsFXShape(PhysicsFXShape *from, PhysicsFXShape *to)
{
  ?HavokPhysicsFX_SwapPhysicsFXShape@@YAXPEAUPhysicsFXShape@@0@Z(from, to);
}

/*
==============
HavokPhysicsFX_GetShapeScale
==============
*/

double __fastcall HavokPhysicsFX_GetShapeScale(PhysicsFXShape *physicsFXShape, int scaleIndex)
{
  double result; 

  *(float *)&result = ?HavokPhysicsFX_GetShapeScale@@YAMPEAUPhysicsFXShape@@H@Z(physicsFXShape, scaleIndex);
  return result;
}

/*
==============
HavokPhysicsFX_ReleasePhysicsFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_ReleasePhysicsFXPipeline(PhysicsFXPipeline *physicsFXPipeline)
{
  ?HavokPhysicsFX_ReleasePhysicsFXPipeline@@YAXPEAUPhysicsFXPipeline@@@Z(physicsFXPipeline);
}

/*
==============
HavokPhysicsFX_LockAssetWrite
==============
*/

void HavokPhysicsFX_LockAssetWrite(void)
{
  ?HavokPhysicsFX_LockAssetWrite@@YAXXZ();
}

/*
==============
HavokPhysicsFX_InitAssets
==============
*/

void HavokPhysicsFX_InitAssets(void)
{
  ?HavokPhysicsFX_InitAssets@@YAXXZ();
}

/*
==============
HavokPhysicsFX_AddPhysicsFXShape
==============
*/

void __fastcall HavokPhysicsFX_AddPhysicsFXShape(PhysicsFXShape *physicsFXShape)
{
  ?HavokPhysicsFX_AddPhysicsFXShape@@YAXPEAUPhysicsFXShape@@@Z(physicsFXShape);
}

/*
==============
HavokPhysicsFX_ReleasePhysicsFXShape
==============
*/

void __fastcall HavokPhysicsFX_ReleasePhysicsFXShape(PhysicsFXShape *physicsFXShape, bool unloadPackFileData)
{
  ?HavokPhysicsFX_ReleasePhysicsFXShape@@YAXPEAUPhysicsFXShape@@_N@Z(physicsFXShape, unloadPackFileData);
}

/*
==============
HavokPhysicsFX_UnlockAssetWrite
==============
*/

void HavokPhysicsFX_UnlockAssetWrite(void)
{
  ?HavokPhysicsFX_UnlockAssetWrite@@YAXXZ();
}

/*
==============
HavokPhysicsFX_LockAssetRead
==============
*/

void HavokPhysicsFX_LockAssetRead(void)
{
  ?HavokPhysicsFX_LockAssetRead@@YAXXZ();
}

/*
==============
HavokPhysicsFX_GetFXHKShapes
==============
*/

hkArray<hknpConvexShape *,hkContainerHeapAllocator> *__fastcall HavokPhysicsFX_GetFXHKShapes(PhysicsFXShape *physicsFXShape)
{
  return ?HavokPhysicsFX_GetFXHKShapes@@YAPEAV?$hkArray@PEAVhknpConvexShape@@UhkContainerHeapAllocator@@@@PEAUPhysicsFXShape@@@Z(physicsFXShape);
}

/*
==============
HavokPhysicsFX_AddPhysicsFXPipeline
==============
*/
void HavokPhysicsFX_AddPhysicsFXPipeline(PhysicsFXPipeline *physicsFXPipeline)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v2; 
  int m_size; 
  int v4; 
  int v5; 
  unsigned __int32 v6; 
  unsigned __int32 v7; 
  int v8; 
  PhysicsFXPipeline *v9; 
  int newcap; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 119, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling AddPhysicsFXPipeline when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  v2 = s_havokPhysicsFXPipelines;
  if ( !s_havokPhysicsFXPipelines )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", (_DWORD)s_havokPhysicsFXPipelines + 122, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX - calling AddPhysicsFXPipeline but pipeline set is NULL", "s_havokPhysicsFXPipelines") )
      __debugbreak();
    v2 = s_havokPhysicsFXPipelines;
  }
  m_size = v2->m_elem.m_size;
  if ( 2 * v2->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::resizeTable(v2, (int)&newcap);
    m_size = v2->m_elem.m_size;
  }
  v4 = m_size - 1;
  v5 = 1;
  v6 = _byteswap_ulong(-1640531535 * (_DWORD)physicsFXPipeline);
  v7 = _byteswap_ulong(-1640531535 * HIDWORD(physicsFXPipeline));
  v8 = v4 & (v7 ^ ((v6 >> 2) + v6 + (v7 << 6) - 1640531527));
  v9 = v2->m_elem.m_data[v8];
  if ( v9 != (PhysicsFXPipeline *)-1i64 )
  {
    while ( v9 != physicsFXPipeline )
    {
      v8 = v4 & (v8 + 1);
      v9 = v2->m_elem.m_data[v8];
      if ( v9 == (PhysicsFXPipeline *)-1i64 )
        goto LABEL_15;
    }
    v5 = 0;
  }
LABEL_15:
  v2->m_numElems += v5;
  v2->m_elem.m_data[v8] = physicsFXPipeline;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 123, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->insert( physicsFXPipeline ))", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->insert( physicsFXPipeline )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_AddPhysicsFXShape
==============
*/
void HavokPhysicsFX_AddPhysicsFXShape(PhysicsFXShape *physicsFXShape)
{
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v2; 
  int m_size; 
  int v4; 
  int v5; 
  unsigned __int32 v6; 
  unsigned __int32 v7; 
  int v8; 
  PhysicsFXShape **m_data; 
  PhysicsFXShape *v10; 
  hkSerialize::InplaceLoad *v11; 
  void *m_addr; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v13; 
  hkMemoryAllocator *v14; 
  hkSerialize::InplaceLoad v15; 
  hkReflect::Var result; 
  void *newcap; 
  unsigned __int64 key; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 201, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling AddPhysicsFXShape when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  if ( !s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 205, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX - calling AddPhysicsFXShape but Shape pointer map is NULL", "s_havokPhysicsFXShapes") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 206, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling AddPhysicsFXShape but HK Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  if ( !physicsFXShape->havokData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 207, ASSERT_TYPE_ASSERT, "(physicsFXShape->havokData)", "%s\n\tTrying to add a Physics Asset with NULL data", "physicsFXShape->havokData") )
    __debugbreak();
  if ( !physicsFXShape->havokDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 208, ASSERT_TYPE_ASSERT, "(physicsFXShape->havokDataSize > 0)", "%s\n\tTrying to add a Physics Asset with 0 data size", "physicsFXShape->havokDataSize > 0") )
    __debugbreak();
  v2 = s_havokPhysicsFXShapes;
  m_size = s_havokPhysicsFXShapes->m_elem.m_size;
  if ( 2 * s_havokPhysicsFXShapes->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::resizeTable(s_havokPhysicsFXShapes, (int)&newcap);
    m_size = v2->m_elem.m_size;
  }
  v4 = m_size - 1;
  v5 = 1;
  v6 = _byteswap_ulong(-1640531535 * (_DWORD)physicsFXShape);
  v7 = _byteswap_ulong(-1640531535 * HIDWORD(physicsFXShape));
  v8 = v4 & (v7 ^ ((v6 >> 2) + v6 + (v7 << 6) - 1640531527));
  m_data = v2->m_elem.m_data;
  v10 = v2->m_elem.m_data[v8];
  if ( v10 != (PhysicsFXShape *)-1i64 )
  {
    while ( v10 != physicsFXShape )
    {
      v8 = v4 & (v8 + 1);
      v10 = m_data[v8];
      if ( v10 == (PhysicsFXShape *)-1i64 )
        goto LABEL_23;
    }
    v5 = 0;
  }
LABEL_23:
  v2->m_numElems += v5;
  m_data[v8] = physicsFXShape;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 211, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->insert( physicsFXShape ))", (const char *)&queryFormat, "s_havokPhysicsFXShapes->insert( physicsFXShape )", -2i64) )
    __debugbreak();
  hkSerialize::InplaceLoad::InplaceLoad(&v15);
  hkSerialize::InplaceLoad::toVar(v11, &result, physicsFXShape->havokData, physicsFXShape->havokDataSize, (const hkReflect::QualifiedType<hkReflect::Type>)&hkReflect::ReflectionOf<hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void>>::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &hkReflect::ReflectionOf<hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void>>::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    m_addr = NULL;
  }
  hkSerialize::InplaceLoad::~InplaceLoad(&v15);
  if ( !m_addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 215, ASSERT_TYPE_ASSERT, "(shapeTuple)", (const char *)&queryFormat, "shapeTuple") )
    __debugbreak();
  v13 = s_havokPhysicsFXHKShapes;
  newcap = m_addr;
  key = (unsigned __int64)physicsFXShape;
  v14 = hkMemHeapAllocator();
  if ( !hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&v13->m_map, v14, &key, (const unsigned __int64 *)&newcap) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 218, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->insert( physicsFXShape, shapeTuple ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->insert( physicsFXShape, shapeTuple )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_CopyPhysicsFXPipeline
==============
*/
void HavokPhysicsFX_CopyPhysicsFXPipeline(PhysicsFXPipeline *from, PhysicsFXPipeline *to)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v4; 
  int m_size; 
  int v6; 
  int v7; 
  unsigned __int32 v8; 
  unsigned __int32 v9; 
  int v10; 
  PhysicsFXPipeline *v11; 
  int newcap; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 184, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling CopyPhysicsFXPipeline when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  v4 = s_havokPhysicsFXPipelines;
  if ( !s_havokPhysicsFXPipelines )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 188, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX - calling CopyPhysicsFXPipeline but pipeline set is NULL", "s_havokPhysicsFXPipelines") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  if ( (int)hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::findElement(v4, from) > v4->m_elem.m_size - 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 191, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->contains( from ))", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->contains( from )") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  m_size = v4->m_elem.m_size;
  if ( 2 * v4->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::resizeTable(v4, (int)&newcap);
    m_size = v4->m_elem.m_size;
  }
  v6 = m_size - 1;
  v7 = 1;
  v8 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v9 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v10 = v6 & (v9 ^ ((v8 >> 2) + v8 + (v9 << 6) - 1640531527));
  v11 = v4->m_elem.m_data[v10];
  if ( v11 != (PhysicsFXPipeline *)-1i64 )
  {
    while ( v11 != to )
    {
      v10 = v6 & (v10 + 1);
      v11 = v4->m_elem.m_data[v10];
      if ( v11 == (PhysicsFXPipeline *)-1i64 )
        goto LABEL_19;
    }
    v7 = 0;
  }
LABEL_19:
  v4->m_numElems += v7;
  v4->m_elem.m_data[v10] = to;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 192, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->insert( to ))", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->insert( to )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_CopyPhysicsFXShape
==============
*/
void HavokPhysicsFX_CopyPhysicsFXShape(PhysicsFXShape *from, PhysicsFXShape *to)
{
  int v4; 
  __int64 v5; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v6; 
  int m_size; 
  unsigned __int64 val; 
  int v9; 
  int v10; 
  unsigned __int32 v11; 
  unsigned __int32 v12; 
  int v13; 
  PhysicsFXShape **m_data; 
  int v15; 
  PhysicsFXShape *v16; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v17; 
  hkMemoryAllocator *v18; 
  unsigned __int64 newcap; 
  unsigned __int64 key; 
  unsigned __int64 v21; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 329, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling CopyPhysicsFXShape when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  if ( !s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 333, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX - calling CopyPhysicsFXShape but Shape pointer map is NULL", "s_havokPhysicsFXShapes") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 334, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling CopyPhysicsFXShape but HK Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)from;
  v4 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( v4 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 338, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( fromIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( fromIt )") )
    __debugbreak();
  v5 = v4;
  v6 = s_havokPhysicsFXShapes;
  m_size = s_havokPhysicsFXShapes->m_elem.m_size;
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v5].val;
  if ( 2 * s_havokPhysicsFXShapes->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::resizeTable(s_havokPhysicsFXShapes, (int)&newcap);
    m_size = v6->m_elem.m_size;
  }
  v9 = m_size - 1;
  v10 = 1;
  v11 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v12 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v13 = v12 ^ ((v11 >> 2) + v11 + (v12 << 6) - 1640531527);
  m_data = v6->m_elem.m_data;
  v15 = v9 & v13;
  v16 = v6->m_elem.m_data[v15];
  if ( v16 != (PhysicsFXShape *)-1i64 )
  {
    while ( v16 != to )
    {
      v15 = v9 & (v15 + 1);
      v16 = m_data[v15];
      if ( v16 == (PhysicsFXShape *)-1i64 )
        goto LABEL_20;
    }
    v10 = 0;
  }
LABEL_20:
  v6->m_numElems += v10;
  m_data[v15] = to;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 343, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->insert( to ))", (const char *)&queryFormat, "s_havokPhysicsFXShapes->insert( to )") )
    __debugbreak();
  v17 = s_havokPhysicsFXHKShapes;
  newcap = val;
  v21 = (unsigned __int64)to;
  v18 = hkMemHeapAllocator();
  if ( !hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&v17->m_map, v18, &v21, &newcap) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 345, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->insert( to, fromShapeTuple ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->insert( to, fromShapeTuple )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_GetFXHKShape
==============
*/
hknpConvexShape *HavokPhysicsFX_GetFXHKShape(PhysicsFXShape *physicsFXShape, int scaleIndex)
{
  __int64 v2; 
  int v4; 
  unsigned __int64 val; 
  __int64 v7; 
  unsigned __int64 key; 

  v2 = scaleIndex;
  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 407, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 408, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes but Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)physicsFXShape;
  v4 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( v4 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 412, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( shapeIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( shapeIt )") )
    __debugbreak();
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v4].val;
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 414, ASSERT_TYPE_ASSERT, "(shapeTuple)", (const char *)&queryFormat, "shapeTuple") )
    __debugbreak();
  if ( (unsigned int)v2 >= *(_DWORD *)(val + 8) )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 417, ASSERT_TYPE_ASSERT, "(unsigned)( scaleIndex ) < (unsigned)( shapeTuple->m_0.getSize() )", "scaleIndex doesn't index shapeTuple->m_0.getSize()\n\t%i not in [0, %i)", v7, *(_DWORD *)(val + 8)) )
      __debugbreak();
  }
  return *(hknpConvexShape **)(*(_QWORD *)val + 8 * v2);
}

/*
==============
HavokPhysicsFX_GetFXHKShapes
==============
*/
hkArray<hknpConvexShape *,hkContainerHeapAllocator> *HavokPhysicsFX_GetFXHKShapes(PhysicsFXShape *physicsFXShape)
{
  int v2; 
  unsigned __int64 val; 
  unsigned __int64 key; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 390, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 391, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes but Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)physicsFXShape;
  v2 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( v2 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 395, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( shapeIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( shapeIt )") )
    __debugbreak();
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v2].val;
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 397, ASSERT_TYPE_ASSERT, "(shapeTuple)", (const char *)&queryFormat, "shapeTuple") )
    __debugbreak();
  return (hkArray<hknpConvexShape *,hkContainerHeapAllocator> *)val;
}

/*
==============
HavokPhysicsFX_GetFXPipelines
==============
*/
hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *HavokPhysicsFX_GetFXPipelines()
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *result; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 354, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXPipelines when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  result = s_havokPhysicsFXPipelines;
  if ( !s_havokPhysicsFXPipelines )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 355, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXPipelines but pipeline set is NULL", "s_havokPhysicsFXPipelines") )
      __debugbreak();
    return s_havokPhysicsFXPipelines;
  }
  return result;
}

/*
==============
HavokPhysicsFX_GetFXShapes
==============
*/
hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *HavokPhysicsFX_GetFXShapes()
{
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *result; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 364, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  result = s_havokPhysicsFXShapes;
  if ( !s_havokPhysicsFXShapes )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 365, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes but Shape pointer map is NULL", "s_havokPhysicsFXShapes") )
      __debugbreak();
    return s_havokPhysicsFXShapes;
  }
  return result;
}

/*
==============
HavokPhysicsFX_GetNumScaledShapes
==============
*/
__int64 HavokPhysicsFX_GetNumScaledShapes(PhysicsFXShape *physicsFXShape)
{
  int v2; 
  unsigned __int64 val; 
  unsigned __int64 key; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 374, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 375, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes but Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)physicsFXShape;
  v2 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( v2 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 379, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( shapeIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( shapeIt )") )
    __debugbreak();
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v2].val;
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 381, ASSERT_TYPE_ASSERT, "(shapeTuple)", (const char *)&queryFormat, "shapeTuple") )
    __debugbreak();
  return *(unsigned int *)(val + 8);
}

/*
==============
HavokPhysicsFX_GetShapeScale
==============
*/
float HavokPhysicsFX_GetShapeScale(PhysicsFXShape *physicsFXShape, int scaleIndex)
{
  __int64 v2; 
  int v4; 
  unsigned __int64 val; 
  __int64 v7; 
  unsigned __int64 key; 

  v2 = scaleIndex;
  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 445, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 446, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes but Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)physicsFXShape;
  v4 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( v4 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 450, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( shapeIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( shapeIt )") )
    __debugbreak();
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v4].val;
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 452, ASSERT_TYPE_ASSERT, "(shapeTuple)", (const char *)&queryFormat, "shapeTuple") )
    __debugbreak();
  if ( (unsigned int)v2 >= *(_DWORD *)(val + 24) )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 455, ASSERT_TYPE_ASSERT, "(unsigned)( scaleIndex ) < (unsigned)( shapeTuple->m_1.getSize() )", "scaleIndex doesn't index shapeTuple->m_1.getSize()\n\t%i not in [0, %i)", v7, *(_DWORD *)(val + 24)) )
      __debugbreak();
  }
  return *(float *)(*(_QWORD *)(val + 16) + 4 * v2);
}

/*
==============
HavokPhysicsFX_GetShapeScales
==============
*/
hkArray<float,hkContainerHeapAllocator> *HavokPhysicsFX_GetShapeScales(PhysicsFXShape *physicsFXShape)
{
  int v2; 
  unsigned __int64 val; 
  unsigned __int64 key; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 428, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 429, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling HavokPhysicsFX_GetFXShapes but Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)physicsFXShape;
  v2 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( v2 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 433, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( shapeIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( shapeIt )") )
    __debugbreak();
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v2].val;
  if ( !val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 435, ASSERT_TYPE_ASSERT, "(shapeTuple)", (const char *)&queryFormat, "shapeTuple") )
    __debugbreak();
  return (hkArray<float,hkContainerHeapAllocator> *)(val + 16);
}

/*
==============
HavokPhysicsFX_InitAssets
==============
*/
void HavokPhysicsFX_InitAssets(void)
{
  hkMemoryRouter *Value; 
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v1; 
  hkMemoryRouter *v2; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v3; 
  hkMemoryRouter *v4; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v5; 

  InitializeSRWLock((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  s_havokPhysicsFXAssetLock.initialized = -1412623820;
  s_havokPhysicsFXAssetLock.acquireLock = 0;
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  if ( s_havokPhysicsFXPipelines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 83, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines == nullptr)", "%s\n\tHavokPhysicsFX Init: havok physics fx pipelines should be NULL", "s_havokPhysicsFXPipelines == HK_NULL") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v1 = (hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *)Value->m_heap->blockAlloc(Value->m_heap, 24i64);
  if ( v1 )
  {
    v1->m_elem.m_data = NULL;
    v1->m_elem.m_size = 0;
    v1->m_elem.m_capacityAndFlags = 0x80000000;
    v1->m_numElems = 0;
  }
  else
  {
    v1 = NULL;
  }
  s_havokPhysicsFXPipelines = v1;
  if ( s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 86, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes == nullptr)", "%s\n\tHavokPhysicsFX Init: havok physics fx shapes should be NULL", "s_havokPhysicsFXShapes == HK_NULL") )
    __debugbreak();
  v2 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v2 )
    v2 = hkMemoryRouter::s_fallbackRouter;
  v3 = (hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *)v2->m_heap->blockAlloc(v2->m_heap, 24i64);
  if ( v3 )
  {
    v3->m_elem.m_data = NULL;
    v3->m_elem.m_size = 0;
    v3->m_elem.m_capacityAndFlags = 0x80000000;
    v3->m_numElems = 0;
  }
  else
  {
    v3 = NULL;
  }
  s_havokPhysicsFXShapes = v3;
  if ( s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 89, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes == nullptr)", "%s\n\tHavokPhysicsFX Init: havok physics fx hk shapes should be NULL", "s_havokPhysicsFXHKShapes == HK_NULL") )
    __debugbreak();
  v4 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v4 )
    v4 = hkMemoryRouter::s_fallbackRouter;
  v5 = (hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *)v4->m_heap->blockAlloc(v4->m_heap, 16i64);
  if ( v5 )
  {
    v5->m_map.m_elem = NULL;
    v5->m_map.m_numElems = 0;
    v5->m_map.m_hashMod = -1;
    s_havokPhysicsFXHKShapes = v5;
  }
  else
  {
    s_havokPhysicsFXHKShapes = NULL;
  }
}

/*
==============
HavokPhysicsFX_LockAssetRead
==============
*/
void HavokPhysicsFX_LockAssetRead(void)
{
  Sys_CheckAcquireLock(&s_havokPhysicsFXAssetLock);
  AcquireSRWLockShared((PSRWLOCK)&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_LockAssetWrite
==============
*/
void HavokPhysicsFX_LockAssetWrite(void)
{
  int v0; 

  Sys_CheckAcquireLock(&s_havokPhysicsFXAssetLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  s_havokPhysicsFXAssetLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_havokPhysicsFXAssetLock.writeThreadId )
  {
    v0 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
HavokPhysicsFX_MovePhysicsFXPipeline
==============
*/
void HavokPhysicsFX_MovePhysicsFXPipeline(PhysicsFXPipeline *from, PhysicsFXPipeline *to)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v4; 
  int *v5; 
  int m_size; 
  int v7; 
  int v8; 
  unsigned __int32 v9; 
  unsigned __int32 v10; 
  int v11; 
  PhysicsFXPipeline *v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 164, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling MovePhysicsFXPipeline when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  v4 = s_havokPhysicsFXPipelines;
  if ( !s_havokPhysicsFXPipelines )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 168, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX - calling MovePhysicsFXPipeline but pipeline set is NULL", "s_havokPhysicsFXPipelines") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  LODWORD(v5) = hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::remove(v4, (PhysicsFXPipeline *)&v13);
  if ( *v5 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 170, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->remove( from ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->remove( from ).isSuccess()") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::remove(v4, (PhysicsFXPipeline *)&v14);
  *(__m256i *)&to->name = *(__m256i *)&from->name;
  *(_OWORD *)&to->integrator.u.basicIntegrator = *(_OWORD *)&from->integrator.u.basicIntegrator;
  m_size = v4->m_elem.m_size;
  if ( 2 * v4->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::resizeTable(v4, (int)&v13);
    m_size = v4->m_elem.m_size;
  }
  v7 = m_size - 1;
  v8 = 1;
  v9 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v10 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v11 = v7 & (v10 ^ ((v9 >> 2) + v9 + (v10 << 6) - 1640531527));
  v12 = v4->m_elem.m_data[v11];
  if ( v12 != (PhysicsFXPipeline *)-1i64 )
  {
    while ( v12 != to )
    {
      v11 = v7 & (v11 + 1);
      v12 = v4->m_elem.m_data[v11];
      if ( v12 == (PhysicsFXPipeline *)-1i64 )
        goto LABEL_19;
    }
    v8 = 0;
  }
LABEL_19:
  v4->m_numElems += v8;
  v4->m_elem.m_data[v11] = to;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 175, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->insert( to ))", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->insert( to )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_MovePhysicsFXShape
==============
*/
void HavokPhysicsFX_MovePhysicsFXShape(PhysicsFXShape *from, PhysicsFXShape *to)
{
  int Key; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v5; 
  int v6; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  unsigned __int64 val; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v9; 
  int *v10; 
  int *v11; 
  int m_size; 
  int v13; 
  int v14; 
  unsigned __int32 v15; 
  unsigned __int32 v16; 
  int v17; 
  PhysicsFXShape **m_data; 
  int v19; 
  PhysicsFXShape *v20; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v21; 
  hkMemoryAllocator *v22; 
  unsigned __int64 v23; 
  PhysicsFXShape *v24; 
  PhysicsFXShape *v25; 
  PhysicsFXShape *v26; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 294, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling MovePhysicsFXShape when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  if ( !s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 298, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX - calling MovePhysicsFXShape but Shape pointer map is NULL", "s_havokPhysicsFXShapes") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 299, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling MovePhysicsFXShape but HK Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  v24 = from;
  Key = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, (const unsigned __int64 *)&v24);
  v5 = s_havokPhysicsFXHKShapes;
  v6 = Key;
  if ( Key > s_havokPhysicsFXHKShapes->m_map.m_hashMod )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 303, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( fromIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( fromIt )") )
      __debugbreak();
    v5 = s_havokPhysicsFXHKShapes;
  }
  m_elem = v5->m_map.m_elem;
  v25 = from;
  val = m_elem[v6].val;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&v5->m_map, &v23);
  if ( (v23 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 308, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->remove( from ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->remove( from ).isSuccess()") )
    __debugbreak();
  v26 = to;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokPhysicsFXHKShapes->m_map, (const unsigned __int64 *)&v24);
  if ( (int)v24 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 309, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->remove( to ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->remove( to ).isSuccess()") )
    __debugbreak();
  v9 = s_havokPhysicsFXShapes;
  LODWORD(v10) = hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::remove(s_havokPhysicsFXShapes, (PhysicsFXShape *)&v23);
  if ( *v10 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 311, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->remove( from ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXShapes->remove( from ).isSuccess()") )
      __debugbreak();
    v9 = s_havokPhysicsFXShapes;
  }
  LODWORD(v11) = hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::remove(v9, (PhysicsFXShape *)&v24);
  if ( *v11 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 312, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->remove( to ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXShapes->remove( to ).isSuccess()") )
      __debugbreak();
    v9 = s_havokPhysicsFXShapes;
  }
  *(__m256i *)&to->name = *(__m256i *)&from->name;
  *(_OWORD *)&to->soundMinImpulse = *(_OWORD *)&from->soundMinImpulse;
  m_size = v9->m_elem.m_size;
  if ( 2 * v9->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::resizeTable(v9, (int)&v23);
    m_size = v9->m_elem.m_size;
  }
  v13 = m_size - 1;
  v14 = 1;
  v15 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v16 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v17 = v16 ^ ((v15 >> 2) + v15 + (v16 << 6) - 1640531527);
  m_data = v9->m_elem.m_data;
  v19 = v13 & v17;
  v20 = v9->m_elem.m_data[v19];
  if ( v20 != (PhysicsFXShape *)-1i64 )
  {
    while ( v20 != to )
    {
      v19 = v13 & (v19 + 1);
      v20 = m_data[v19];
      if ( v20 == (PhysicsFXShape *)-1i64 )
        goto LABEL_35;
    }
    v14 = 0;
  }
LABEL_35:
  v9->m_numElems += v14;
  m_data[v19] = to;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 318, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->insert( to ))", (const char *)&queryFormat, "s_havokPhysicsFXShapes->insert( to )") )
    __debugbreak();
  v21 = s_havokPhysicsFXHKShapes;
  v23 = val;
  v25 = to;
  v22 = hkMemHeapAllocator();
  if ( !hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&v21->m_map, v22, (const unsigned __int64 *)&v25, &v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 320, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->insert( to, fromShapeTuple ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->insert( to, fromShapeTuple )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_ReleasePhysicsFXPipeline
==============
*/
void HavokPhysicsFX_ReleasePhysicsFXPipeline(PhysicsFXPipeline *physicsFXPipeline)
{
  int *v1; 
  __int64 v2; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 131, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling ReleasePhysicsFXPipeline when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  if ( !s_havokPhysicsFXPipelines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 134, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX - calling ReleasePhysicsFXPipeline but pipeline set is NULL", "s_havokPhysicsFXPipelines") )
    __debugbreak();
  LODWORD(v1) = hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::remove(s_havokPhysicsFXPipelines, (PhysicsFXPipeline *)&v2);
  if ( *v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 135, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->remove( physicsFXPipeline ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->remove( physicsFXPipeline ).isSuccess()") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_ReleasePhysicsFXShape
==============
*/
void HavokPhysicsFX_ReleasePhysicsFXShape(PhysicsFXShape *physicsFXShape, bool unloadPackFileData)
{
  int *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  PhysicsFXShape *v7; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 227, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling ReleasePhysicsFXShape when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  if ( !s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 231, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX - calling ReleasePhysicsFXShape but Shape pointer map is NULL", "s_havokPhysicsFXShapes") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 232, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling ReleasePhysicsFXShape but the HK Shape pointermap is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  v7 = physicsFXShape;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokPhysicsFXHKShapes->m_map, &v6);
  if ( (v6 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 235, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->remove( physicsFXShape ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->remove( physicsFXShape ).isSuccess()") )
    __debugbreak();
  if ( unloadPackFileData )
    HavokPhysics_InplaceUnload(physicsFXShape->havokData, physicsFXShape->havokDataSize);
  LODWORD(v4) = hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::remove(s_havokPhysicsFXShapes, (PhysicsFXShape *)&v5);
  if ( *v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 245, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->remove( physicsFXShape ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXShapes->remove( physicsFXShape ).isSuccess()") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_ShutdownAssets
==============
*/
void HavokPhysicsFX_ShutdownAssets(void)
{
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v0; 
  hkMemoryAllocator *v1; 
  hkMemoryRouter *Value; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v3; 
  hkMemoryAllocator *v4; 
  int m_capacityAndFlags; 
  hkMemoryRouter *v6; 
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v7; 
  hkMemoryAllocator *v8; 
  int v9; 
  hkMemoryRouter *v10; 
  __int64 v11; 
  volatile int acquireLock; 

  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 97, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX Shutdown: havok physics fx hk shapes is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  if ( (s_havokPhysicsFXHKShapes->m_map.m_numElems & 0x7FFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 98, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->getSize() == 0)", "%s\n\tHavokPhysics Shutdown: havok physics physics fx hk shapes should be empty", "s_havokPhysicsFXHKShapes->getSize() == 0") )
    __debugbreak();
  v0 = s_havokPhysicsFXHKShapes;
  if ( s_havokPhysicsFXHKShapes )
  {
    v1 = hkMemHeapAllocator();
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&v0->m_map, v1);
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&v0->m_map);
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, v0, 16);
  }
  s_havokPhysicsFXHKShapes = NULL;
  if ( !s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 102, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX Shutdown: havok physics fx shapes is NULL", "s_havokPhysicsFXShapes") )
    __debugbreak();
  if ( (s_havokPhysicsFXShapes->m_numElems & 0x7FFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 103, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->getSize() == 0)", "%s\n\tHavokPhysics Shutdown: havok physics physics fx shapes should be empty", "s_havokPhysicsFXShapes->getSize() == 0") )
    __debugbreak();
  v3 = s_havokPhysicsFXShapes;
  if ( s_havokPhysicsFXShapes )
  {
    v4 = hkMemHeapAllocator();
    v3->m_elem.m_size = 0;
    m_capacityAndFlags = v3->m_elem.m_capacityAndFlags;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v4, v3->m_elem.m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
    v3->m_elem.m_data = NULL;
    v3->m_elem.m_capacityAndFlags = 0x80000000;
    v6 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v6 )
      v6 = hkMemoryRouter::s_fallbackRouter;
    v6->m_heap->blockFree(v6->m_heap, v3, 24);
  }
  s_havokPhysicsFXShapes = NULL;
  if ( !s_havokPhysicsFXPipelines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 107, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX Shutdown: havok physics fx pipelines is NULL", "s_havokPhysicsFXPipelines") )
    __debugbreak();
  if ( (s_havokPhysicsFXPipelines->m_numElems & 0x7FFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 108, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->getSize() == 0)", "%s\n\tHavokPhysics Shutdown: havok physics physics fx pipelines should be empty", "s_havokPhysicsFXPipelines->getSize() == 0") )
    __debugbreak();
  v7 = s_havokPhysicsFXPipelines;
  if ( s_havokPhysicsFXPipelines )
  {
    v8 = hkMemHeapAllocator();
    v7->m_elem.m_size = 0;
    v9 = v7->m_elem.m_capacityAndFlags;
    if ( v9 >= 0 )
      hkMemoryAllocator::bufFree2(v8, v7->m_elem.m_data, 8, v9 & 0x3FFFFFFF);
    v7->m_elem.m_data = NULL;
    v7->m_elem.m_capacityAndFlags = 0x80000000;
    v10 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v10 )
      v10 = hkMemoryRouter::s_fallbackRouter;
    v10->m_heap->blockFree(v10->m_heap, v7, 24);
  }
  s_havokPhysicsFXPipelines = NULL;
  s_havokPhysicsFXAssetLock.initialized = 0;
  if ( s_havokPhysicsFXAssetLock.acquireLock )
  {
    acquireLock = s_havokPhysicsFXAssetLock.acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
      __debugbreak();
  }
  if ( s_havokPhysicsFXAssetLock.writeThreadId )
  {
    LODWORD(v11) = s_havokPhysicsFXAssetLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v11, 0i64) )
      __debugbreak();
  }
}

/*
==============
HavokPhysicsFX_SwapPhysicsFXPipeline
==============
*/
void HavokPhysicsFX_SwapPhysicsFXPipeline(PhysicsFXPipeline *from, PhysicsFXPipeline *to)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v4; 
  int *v5; 
  int *v6; 
  __m256i v7; 
  __int128 v8; 
  int m_size; 
  int *p_m_numElems; 
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned __int32 v15; 
  unsigned __int32 v16; 
  int v17; 
  PhysicsFXPipeline *v18; 
  int v19; 
  int v20; 
  unsigned __int32 v21; 
  unsigned __int32 v22; 
  int v23; 
  PhysicsFXPipeline *v24; 
  __int64 v25; 
  __int64 v26; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 143, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling SwapPhysicsFXPipeline when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  v4 = s_havokPhysicsFXPipelines;
  if ( !s_havokPhysicsFXPipelines )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 147, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines)", "%s\n\tHavokPhysicsFX - calling SwapPhysicsFXPipeline but pipeline set is NULL", "s_havokPhysicsFXPipelines") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  LODWORD(v5) = hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::remove(v4, (PhysicsFXPipeline *)&v25);
  if ( *v5 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 149, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->remove( from ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->remove( from ).isSuccess()") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  LODWORD(v6) = hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::remove(v4, (PhysicsFXPipeline *)&v26);
  if ( *v6 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 150, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->remove( to ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->remove( to ).isSuccess()") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  v7 = *(__m256i *)&from->name;
  v8 = *(_OWORD *)&from->integrator.u.basicIntegrator;
  *(__m256i *)&from->name = *(__m256i *)&to->name;
  *(_OWORD *)&from->integrator.u.basicIntegrator = *(_OWORD *)&to->integrator.u.basicIntegrator;
  *(__m256i *)&to->name = v7;
  *(_OWORD *)&to->integrator.u.basicIntegrator = v8;
  m_size = v4->m_elem.m_size;
  p_m_numElems = &v4->m_numElems;
  v11 = v4;
  if ( 2 * v4->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::resizeTable(v4, (int)&v25);
    m_size = v4->m_elem.m_size;
    v4 = s_havokPhysicsFXPipelines;
  }
  v12 = m_size - 1;
  v13 = 1;
  v14 = 1;
  v15 = _byteswap_ulong(-1640531535 * (_DWORD)from);
  v16 = _byteswap_ulong(-1640531535 * HIDWORD(from));
  v17 = v12 & (v16 ^ ((v15 >> 2) + v15 + (v16 << 6) - 1640531527));
  v18 = v11->m_elem.m_data[v17];
  if ( v18 != (PhysicsFXPipeline *)-1i64 )
  {
    while ( v18 != from )
    {
      v17 = v12 & (v17 + 1);
      v18 = v11->m_elem.m_data[v17];
      if ( v18 == (PhysicsFXPipeline *)-1i64 )
        goto LABEL_23;
    }
    v14 = 0;
  }
LABEL_23:
  *p_m_numElems += v14;
  v11->m_elem.m_data[v17] = from;
  if ( !v14 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 154, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->insert( from ))", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->insert( from )") )
      __debugbreak();
    v4 = s_havokPhysicsFXPipelines;
  }
  v19 = v4->m_elem.m_size;
  if ( 2 * v4->m_numElems > v19 - 1 )
  {
    hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *>>::resizeTable(v4, (int)&v25);
    v19 = v4->m_elem.m_size;
  }
  v20 = v19 - 1;
  v21 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v22 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v23 = v20 & (v22 ^ ((v21 >> 2) + v21 + (v22 << 6) - 1640531527));
  v24 = v4->m_elem.m_data[v23];
  if ( v24 != (PhysicsFXPipeline *)-1i64 )
  {
    while ( v24 != to )
    {
      v23 = v20 & (v23 + 1);
      v24 = v4->m_elem.m_data[v23];
      if ( v24 == (PhysicsFXPipeline *)-1i64 )
        goto LABEL_34;
    }
    v13 = 0;
  }
LABEL_34:
  v4->m_numElems += v13;
  v4->m_elem.m_data[v23] = to;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 155, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXPipelines->insert( to ))", (const char *)&queryFormat, "s_havokPhysicsFXPipelines->insert( to )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_SwapPhysicsFXShape
==============
*/
void HavokPhysicsFX_SwapPhysicsFXShape(PhysicsFXShape *from, PhysicsFXShape *to)
{
  int v4; 
  int v5; 
  unsigned __int64 val; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v7; 
  int *v8; 
  int *v9; 
  __m256i v10; 
  __int128 v11; 
  int m_size; 
  int *p_m_numElems; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned __int32 v18; 
  unsigned __int32 v19; 
  int v20; 
  PhysicsFXShape *v21; 
  int v22; 
  int v23; 
  unsigned __int32 v24; 
  unsigned __int32 v25; 
  int v26; 
  PhysicsFXShape **m_data; 
  int v28; 
  PhysicsFXShape *v29; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v30; 
  hkMemoryAllocator *v31; 
  hkPointerMap<PhysicsFXShape *,hkTuple<hkArray<hknpConvexShape *,hkContainerHeapAllocator>,hkArray<float,hkContainerHeapAllocator>,void,void,void,void,void,void> *,hkContainerHeapAllocator> *v32; 
  hkMemoryAllocator *v33; 
  unsigned __int64 v34; 
  unsigned __int64 key; 
  PhysicsFXShape *v36; 
  PhysicsFXShape *v37; 
  PhysicsFXShape *v38; 

  if ( !HavokPhysicsFX_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 254, ASSERT_TYPE_ASSERT, "(HavokPhysicsFX_IsInitialized())", "%s\n\tHavokPhysicsFX - calling SwapPhysicsFXShape when system is not initialized", "HavokPhysicsFX_IsInitialized()") )
    __debugbreak();
  HavokPhysicsFX_LockAssetWrite();
  if ( !s_havokPhysicsFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 258, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes)", "%s\n\tHavokPhysicsFX - calling SwapPhysicsFXShape but Shape pointer map is NULL", "s_havokPhysicsFXShapes") )
    __debugbreak();
  if ( !s_havokPhysicsFXHKShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 259, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes)", "%s\n\tHavokPhysicsFX - calling SwapPhysicsFXShape but HK Shape pointer map is NULL", "s_havokPhysicsFXHKShapes") )
    __debugbreak();
  key = (unsigned __int64)from;
  v4 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, &key);
  v36 = to;
  v5 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsFXHKShapes->m_map, (const unsigned __int64 *)&v36);
  if ( v4 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 264, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( fromIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( fromIt )") )
    __debugbreak();
  if ( v5 > s_havokPhysicsFXHKShapes->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 265, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->isValid( toIt ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->isValid( toIt )") )
    __debugbreak();
  v37 = from;
  val = s_havokPhysicsFXHKShapes->m_map.m_elem[v4].val;
  v34 = s_havokPhysicsFXHKShapes->m_map.m_elem[v5].val;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokPhysicsFXHKShapes->m_map, &key);
  if ( (key & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 271, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->remove( from ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->remove( from ).isSuccess()") )
    __debugbreak();
  v38 = to;
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokPhysicsFXHKShapes->m_map, (const unsigned __int64 *)&v36);
  if ( (int)v36 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 272, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->remove( to ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->remove( to ).isSuccess()") )
    __debugbreak();
  v7 = s_havokPhysicsFXShapes;
  LODWORD(v8) = hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::remove(s_havokPhysicsFXShapes, (PhysicsFXShape *)&key);
  if ( *v8 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 274, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->remove( from ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXShapes->remove( from ).isSuccess()") )
      __debugbreak();
    v7 = s_havokPhysicsFXShapes;
  }
  LODWORD(v9) = hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::remove(v7, (PhysicsFXShape *)&v36);
  if ( *v9 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 275, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->remove( to ).isSuccess())", (const char *)&queryFormat, "s_havokPhysicsFXShapes->remove( to ).isSuccess()") )
      __debugbreak();
    v7 = s_havokPhysicsFXShapes;
  }
  v10 = *(__m256i *)&from->name;
  v11 = *(_OWORD *)&from->soundMinImpulse;
  *(__m256i *)&from->name = *(__m256i *)&to->name;
  *(_OWORD *)&from->soundMinImpulse = *(_OWORD *)&to->soundMinImpulse;
  *(__m256i *)&to->name = v10;
  *(_OWORD *)&to->soundMinImpulse = v11;
  m_size = v7->m_elem.m_size;
  p_m_numElems = &v7->m_numElems;
  v14 = v7;
  if ( 2 * v7->m_numElems > m_size - 1 )
  {
    hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::resizeTable(v7, (int)&key);
    m_size = v7->m_elem.m_size;
    v7 = s_havokPhysicsFXShapes;
  }
  v15 = m_size - 1;
  v16 = 1;
  v17 = 1;
  v18 = _byteswap_ulong(-1640531535 * (_DWORD)from);
  v19 = _byteswap_ulong(-1640531535 * HIDWORD(from));
  v20 = v15 & (v19 ^ ((v18 >> 2) + v18 + (v19 << 6) - 1640531527));
  v21 = v14->m_elem.m_data[v20];
  if ( v21 != (PhysicsFXShape *)-1i64 )
  {
    while ( v21 != from )
    {
      v20 = v15 & (v20 + 1);
      v21 = v14->m_elem.m_data[v20];
      if ( v21 == (PhysicsFXShape *)-1i64 )
        goto LABEL_37;
    }
    v17 = 0;
  }
LABEL_37:
  *p_m_numElems += v17;
  v14->m_elem.m_data[v20] = from;
  if ( !v17 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 281, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->insert( from ))", (const char *)&queryFormat, "s_havokPhysicsFXShapes->insert( from )") )
      __debugbreak();
    v7 = s_havokPhysicsFXShapes;
  }
  v22 = v7->m_elem.m_size;
  if ( 2 * v7->m_numElems > v22 - 1 )
  {
    hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *>>::resizeTable(v7, (int)&key);
    v22 = v7->m_elem.m_size;
  }
  v23 = v22 - 1;
  v24 = _byteswap_ulong(-1640531535 * (_DWORD)to);
  v25 = _byteswap_ulong(-1640531535 * HIDWORD(to));
  v26 = v25 ^ ((v24 >> 2) + v24 + (v25 << 6) - 1640531527);
  m_data = v7->m_elem.m_data;
  v28 = v23 & v26;
  v29 = v7->m_elem.m_data[v28];
  if ( v29 != (PhysicsFXShape *)-1i64 )
  {
    while ( v29 != to )
    {
      v28 = v23 & (v28 + 1);
      v29 = m_data[v28];
      if ( v29 == (PhysicsFXShape *)-1i64 )
        goto LABEL_48;
    }
    v16 = 0;
  }
LABEL_48:
  v7->m_numElems += v16;
  m_data[v28] = to;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 282, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXShapes->insert( to ))", (const char *)&queryFormat, "s_havokPhysicsFXShapes->insert( to )") )
    __debugbreak();
  v30 = s_havokPhysicsFXHKShapes;
  key = val;
  v37 = to;
  v31 = hkMemHeapAllocator();
  if ( !hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&v30->m_map, v31, (const unsigned __int64 *)&v37, &key) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 284, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->insert( to, fromShapeTuple ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->insert( to, fromShapeTuple )") )
    __debugbreak();
  v32 = s_havokPhysicsFXHKShapes;
  v36 = (PhysicsFXShape *)v34;
  v38 = from;
  v33 = hkMemHeapAllocator();
  if ( !hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&v32->m_map, v33, (const unsigned __int64 *)&v38, (const unsigned __int64 *)&v36) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxassets.cpp", 285, ASSERT_TYPE_ASSERT, "(s_havokPhysicsFXHKShapes->insert( from, toShapeTuple ))", (const char *)&queryFormat, "s_havokPhysicsFXHKShapes->insert( from, toShapeTuple )") )
    __debugbreak();
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_UnlockAssetRead
==============
*/
void HavokPhysicsFX_UnlockAssetRead(void)
{
  ReleaseSRWLockShared((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

/*
==============
HavokPhysicsFX_UnlockAssetWrite
==============
*/
void HavokPhysicsFX_UnlockAssetWrite(void)
{
  s_havokPhysicsFXAssetLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_havokPhysicsFXAssetLock);
  Sys_CheckReleaseLock(&s_havokPhysicsFXAssetLock);
}

