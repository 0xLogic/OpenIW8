/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareData
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_PrepareData(hkArray<char,hkContainerHeapAllocator> *data, const hkArray<hkReflect::Type const *,hkContainerHeapAllocator> *types, const char *saveTarget)
{
  ?HavokPhysics_GlobalTypeCompendium_PrepareData@@YAXAEAV?$hkArray@DUhkContainerHeapAllocator@@@@AEBV?$hkArray@PEBVType@hkReflect@@UhkContainerHeapAllocator@@@@PEBD@Z(data, types, saveTarget);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareInplaceLoad
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_PrepareInplaceLoad(hkSerialize::InplaceLoad *load, hkArray<char,hkContainerHeapAllocator> *data)
{
  ?HavokPhysics_GlobalTypeCompendium_PrepareInplaceLoad@@YAXAEAVInplaceLoad@hkSerialize@@AEAV?$hkArray@DUhkContainerHeapAllocator@@@@@Z(load, data);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_GetTypes
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_GetTypes(hkArray<hkReflect::Type const *,hkContainerHeapAllocator> *types)
{
  ?HavokPhysics_GlobalTypeCompendium_GetTypes@@YAXAEAV?$hkArray@PEBVType@hkReflect@@UhkContainerHeapAllocator@@@@@Z(types);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareData
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_PrepareData(hkArray<char,hkContainerHeapAllocator> *data, const char *saveTarget)
{
  ?HavokPhysics_GlobalTypeCompendium_PrepareData@@YAXAEAV?$hkArray@DUhkContainerHeapAllocator@@@@PEBD@Z(data, saveTarget);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareLoad
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_PrepareLoad(hkSerialize::Load *load, const hkArray<char,hkContainerHeapAllocator> *data)
{
  ?HavokPhysics_GlobalTypeCompendium_PrepareLoad@@YAXAEAVLoad@hkSerialize@@AEBV?$hkArray@DUhkContainerHeapAllocator@@@@@Z(load, data);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PopulateSave
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_PopulateSave(hkSerialize::Save *save)
{
  ?HavokPhysics_GlobalTypeCompendium_PopulateSave@@YAXAEAVSave@hkSerialize@@@Z(save);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_BuildTypes
==============
*/
void HavokPhysics_GlobalTypeCompendium_BuildTypes(hkArray<hkReflect::Type const *,hkContainerHeapAllocator> *types)
{
  hkReflect::MutableTypeReg *TypeReg; 
  int v3; 
  int v4; 
  int m_size; 
  __int64 v6; 
  __int64 v7; 
  hkMemoryAllocator *v8; 
  hkMemoryAllocator *v9; 
  hkSet<hkReflect::Type const *,hkContainerHeapAllocator,hkMapOperations<hkReflect::Type const *> > checkedTypes; 
  int v11; 

  TypeReg = hkReflect::getTypeReg();
  TypeReg->appendAllTypesToArray(TypeReg, types);
  v3 = 0;
  v4 = 0;
  m_size = types->m_size;
  if ( m_size > 0 )
  {
    v6 = 0i64;
    do
    {
      checkedTypes.m_elem.m_data = NULL;
      checkedTypes.m_elem.m_size = 0;
      checkedTypes.m_elem.m_capacityAndFlags = 0x80000000;
      checkedTypes.m_numElems = 0;
      if ( HavokPhysics_GlobalTypeCompendium_ShouldAddToCompendium(types->m_data[v6], &checkedTypes, 1) )
      {
        ++v4;
        ++v6;
        v9 = hkMemHeapAllocator();
        checkedTypes.m_elem.m_size = 0;
        if ( checkedTypes.m_elem.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v9, checkedTypes.m_elem.m_data, 8, checkedTypes.m_elem.m_capacityAndFlags & 0x3FFFFFFF);
      }
      else
      {
        v7 = types->m_size;
        types->m_size = v7 - 1;
        if ( (_DWORD)v7 - 1 != v4 )
          types->m_data[v6] = types->m_data[v7 - 1];
        v8 = hkMemHeapAllocator();
        checkedTypes.m_elem.m_size = 0;
        if ( checkedTypes.m_elem.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v8, checkedTypes.m_elem.m_data, 8, checkedTypes.m_elem.m_capacityAndFlags & 0x3FFFFFFF);
      }
      m_size = types->m_size;
    }
    while ( v4 < m_size );
  }
  if ( m_size > 1 )
    hkAlgorithm::quickSortRecursive<hkReflect::Type const *,HavokPhysics_GlobalTypeCompendium_TypeCompare>(types->m_data, 0, m_size - 1, (HavokPhysics_GlobalTypeCompendium_TypeCompare)v11);
  if ( printTypes_0 )
  {
    v11 = types->m_size;
    HavokPhysics_GlobalTypeCompendium_PrintText("Num Types: {}", (const hkVarArgs::Detail::VarArgsTypeArray<0> *)((char *)&stru_143ED3684.m_numTypes + 4), &v11, 0i64, -2i64);
    if ( types->m_size > 0 )
    {
      do
        HavokPhysics_GlobalTypeCompendium_PrintText((const char *)&stru_143ED3684, (const hkVarArgs::Detail::VarArgsTypeArray<0> *)&hkVarArgs::Detail::VarArgsTypesOf<void,hkReflect::Type const *>::typesArray, &types->m_data[v3++], 0i64);
      while ( v3 < types->m_size );
    }
  }
}

/*
==============
HavokPhysics_GlobalTypeCompendium_GetTypes
==============
*/

void __fastcall HavokPhysics_GlobalTypeCompendium_GetTypes(hkArray<hkReflect::Type const *,hkContainerHeapAllocator> *types)
{
  HavokPhysics_GlobalTypeCompendium_BuildTypes(types);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PopulateSave
==============
*/
void HavokPhysics_GlobalTypeCompendium_PopulateSave(hkSerialize::Save *save)
{
  hkIo::Detail::WriteBufferImpl *v3; 
  __int64 *v4; 
  hkIo::Detail::WriteBufferImpl **v6; 
  __int64 Impl; 
  hkMemoryAllocator *v10; 
  hkArrayBase<char> arr; 
  hkArray<hkReflect::Type const *,hkContainerHeapAllocator> types; 
  hkReflect::Detail::AddrAndType result; 
  hkIo::Detail::WriteBufferAdapter wba; 
  __int128 v15; 
  __int64 v16; 
  hkReflect::Var v; 

  types.m_data = NULL;
  types.m_size = 0;
  types.m_capacityAndFlags = 0x80000000;
  HavokPhysics_GlobalTypeCompendium_BuildTypes(&types);
  arr.m_data = NULL;
  arr.m_size = 0;
  arr.m_capacityAndFlags = 0x80000000;
  wba.m_dataUsedSizeOut = NULL;
  v3 = hkIo::Detail::WriteBufferImpl::createFromArray(&arr, &hkContainerTempAllocator::s_alloc);
  v4 = (__int64 *)v3;
  if ( v3 )
    hkReferencedObject::addReference(v3);
  if ( wba.m_dataUsedSizeOut )
    hkReferencedObject::removeReference((hkReferencedObject *)wba.m_dataUsedSizeOut);
  wba.m_dataUsedSizeOut = v4;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v15 = _XMM0;
  v16 = 0i64;
  *(_OWORD *)&wba.m_data = _XMM0;
  v6 = (hkIo::Detail::WriteBufferImpl **)hkReflect::exactObj(&result, &types, &hkReflect::ReflectionOf<hkArray<hkReflect::Type const *,hkContainerHeapAllocator>>::typeData);
  _XMM0 = *(_OWORD *)v6;
  wba.m_impl.m_ptr = *v6;
  __asm { vpextrq rcx, xmm0, 1; this }
  wba.m_data = _RCX;
  if ( _RCX )
    Impl = (__int64)hkReflect::Type::getImpl(_RCX);
  else
    Impl = 0i64;
  v.m_type.m_type = (const hkReflect::Type *)Impl;
  if ( (Impl & 1) != 0 )
    hkReflect::Detail::Impl::addReference((hkReflect::Detail::Impl *)(Impl & 0xFFFFFFFFFFFFFFFEui64));
  if ( (wba.m_dataSize & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(wba.m_dataSize & 0xFFFFFFFFFFFFFFFEui64));
  wba.m_dataSize = Impl;
  hkSerialize::Save::contentsVar(save, &v, &wba);
  if ( (wba.m_dataSize & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(wba.m_dataSize & 0xFFFFFFFFFFFFFFFEui64));
  if ( wba.m_dataUsedSizeOut )
    hkReferencedObject::removeReference((hkReferencedObject *)wba.m_dataUsedSizeOut);
  arr.m_size = 0;
  if ( arr.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, arr.m_data, 1, arr.m_capacityAndFlags & 0x3FFFFFFF);
  arr.m_data = NULL;
  arr.m_capacityAndFlags = 0x80000000;
  v10 = hkMemHeapAllocator();
  types.m_size = 0;
  if ( types.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v10, types.m_data, 8, types.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareData
==============
*/
void HavokPhysics_GlobalTypeCompendium_PrepareData(hkArray<char,hkContainerHeapAllocator> *data, const hkArray<hkReflect::Type const *,hkContainerHeapAllocator> *types, const char *saveTarget)
{
  hkMemoryAllocator *v7; 
  hkIo::Detail::WriteBufferImpl *v8; 
  hkIo::Detail::WriteBufferImpl *v9; 
  hkIo::Detail::WriteBufferImpl *v11; 
  hkReferencedObject *v12; 
  hkReflect::Detail::AddrAndType *p_result; 
  __int64 Impl; 
  hkArrayBase<char> arr; 
  hkIo::Detail::WriteBufferAdapter sink; 
  hkReferencedObject *v20; 
  hkReflect::Detail::AddrAndType v21; 
  __int64 v22; 
  hkReflect::Detail::AddrAndType result; 
  hkSerialize::Save v24; 
  __int64 v25; 
  hkReflect::Var v; 

  v25 = -2i64;
  hkSerialize::Save::Save(&v24);
  hkSerialize::Save::withTarget(&v24, saveTarget);
  sink.m_impl.m_ptr = NULL;
  v7 = hkMemHeapAllocator();
  v8 = hkIo::Detail::WriteBufferImpl::createFromArray(data, v7);
  v9 = v8;
  if ( v8 )
    hkReferencedObject::addReference(v8);
  sink.m_impl.m_ptr = v9;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&sink.m_data = _XMM0;
  sink.m_dataUsedSizeOut = NULL;
  hkSerialize::Save::beginTypeCompendium(&v24, &sink);
  if ( sink.m_impl.m_ptr )
    hkReferencedObject::removeReference(sink.m_impl.m_ptr);
  arr.m_data = NULL;
  arr.m_size = 0;
  arr.m_capacityAndFlags = 0x80000000;
  v20 = NULL;
  v11 = hkIo::Detail::WriteBufferImpl::createFromArray(&arr, &hkContainerTempAllocator::s_alloc);
  v12 = v11;
  if ( v11 )
    hkReferencedObject::addReference(v11);
  if ( v20 )
    hkReferencedObject::removeReference(v20);
  v20 = v12;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v21 = _XMM0;
  v22 = 0i64;
  *(hkReflect::Detail::AddrAndType *)&sink.m_data = _XMM0;
  if ( types )
  {
    p_result = hkReflect::exactObj(&result, types, &hkReflect::ReflectionOf<hkArray<hkReflect::Type const *,hkContainerHeapAllocator>>::typeData);
  }
  else
  {
    result = _XMM0;
    p_result = &result;
  }
  _XMM0 = *p_result;
  sink.m_impl.m_ptr = (hkIo::Detail::WriteBufferImpl *)p_result->m_addr;
  __asm { vpextrq rcx, xmm0, 1; this }
  sink.m_data = _RCX;
  if ( _RCX )
    Impl = (__int64)hkReflect::Type::getImpl(_RCX);
  else
    Impl = 0i64;
  v.m_type.m_type = (const hkReflect::Type *)Impl;
  if ( (Impl & 1) != 0 )
    hkReflect::Detail::Impl::addReference((hkReflect::Detail::Impl *)(Impl & 0xFFFFFFFFFFFFFFFEui64));
  if ( (sink.m_dataSize & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(sink.m_dataSize & 0xFFFFFFFFFFFFFFFEui64));
  sink.m_dataSize = Impl;
  hkSerialize::Save::contentsVar(&v24, &v, &sink);
  if ( (sink.m_dataSize & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(sink.m_dataSize & 0xFFFFFFFFFFFFFFFEui64));
  if ( v20 )
    hkReferencedObject::removeReference(v20);
  hkSerialize::Save::endTypeCompendium(&v24);
  arr.m_size = 0;
  if ( arr.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, arr.m_data, 1, arr.m_capacityAndFlags & 0x3FFFFFFF);
  arr.m_data = NULL;
  arr.m_capacityAndFlags = 0x80000000;
  hkSerialize::Save::~Save(&v24);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareData
==============
*/
void HavokPhysics_GlobalTypeCompendium_PrepareData(hkArray<char,hkContainerHeapAllocator> *data, const char *saveTarget)
{
  hkMemoryAllocator *v5; 
  hkIo::Detail::WriteBufferImpl *v6; 
  hkIo::Detail::WriteBufferImpl *v7; 
  hkIo::Detail::WriteBufferImpl *v9; 
  hkReferencedObject *v10; 
  hkIo::Detail::WriteBufferImpl **v12; 
  __int64 Impl; 
  hkMemoryAllocator *v16; 
  hkArray<hkReflect::Type const *,hkContainerHeapAllocator> types; 
  hkArrayBase<char> arr; 
  hkIo::Detail::WriteBufferAdapter sink; 
  hkReferencedObject *v20; 
  __int128 v21; 
  __int64 v22; 
  hkSerialize::Save v23; 
  __int64 v24; 
  hkReflect::Detail::AddrAndType result; 
  hkReflect::Var v; 

  v24 = -2i64;
  hkSerialize::Save::Save(&v23);
  hkSerialize::Save::withTarget(&v23, saveTarget);
  sink.m_impl.m_ptr = NULL;
  v5 = hkMemHeapAllocator();
  v6 = hkIo::Detail::WriteBufferImpl::createFromArray(data, v5);
  v7 = v6;
  if ( v6 )
    hkReferencedObject::addReference(v6);
  sink.m_impl.m_ptr = v7;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&sink.m_data = _XMM0;
  sink.m_dataUsedSizeOut = NULL;
  hkSerialize::Save::beginTypeCompendium(&v23, &sink);
  if ( sink.m_impl.m_ptr )
    hkReferencedObject::removeReference(sink.m_impl.m_ptr);
  types.m_data = NULL;
  types.m_size = 0;
  types.m_capacityAndFlags = 0x80000000;
  HavokPhysics_GlobalTypeCompendium_BuildTypes(&types);
  arr.m_data = NULL;
  arr.m_size = 0;
  arr.m_capacityAndFlags = 0x80000000;
  v20 = NULL;
  v9 = hkIo::Detail::WriteBufferImpl::createFromArray(&arr, &hkContainerTempAllocator::s_alloc);
  v10 = v9;
  if ( v9 )
    hkReferencedObject::addReference(v9);
  if ( v20 )
    hkReferencedObject::removeReference(v20);
  v20 = v10;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v21 = _XMM0;
  v22 = 0i64;
  *(_OWORD *)&sink.m_data = _XMM0;
  v12 = (hkIo::Detail::WriteBufferImpl **)hkReflect::exactObj(&result, &types, &hkReflect::ReflectionOf<hkArray<hkReflect::Type const *,hkContainerHeapAllocator>>::typeData);
  _XMM0 = *(_OWORD *)v12;
  sink.m_impl.m_ptr = *v12;
  __asm { vpextrq rcx, xmm0, 1; this }
  sink.m_data = _RCX;
  if ( _RCX )
    Impl = (__int64)hkReflect::Type::getImpl(_RCX);
  else
    Impl = 0i64;
  v.m_impl.m_ptrAndInt = (hkReflect::Detail::Impl *)Impl;
  if ( (Impl & 1) != 0 )
    hkReflect::Detail::Impl::addReference((hkReflect::Detail::Impl *)(Impl & 0xFFFFFFFFFFFFFFFEui64));
  if ( (sink.m_dataSize & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(sink.m_dataSize & 0xFFFFFFFFFFFFFFFEui64));
  sink.m_dataSize = Impl;
  hkSerialize::Save::contentsVar(&v23, &v, &sink);
  if ( (sink.m_dataSize & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(sink.m_dataSize & 0xFFFFFFFFFFFFFFFEui64));
  if ( v20 )
    hkReferencedObject::removeReference(v20);
  hkSerialize::Save::endTypeCompendium(&v23);
  arr.m_size = 0;
  if ( arr.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, arr.m_data, 1, arr.m_capacityAndFlags & 0x3FFFFFFF);
  arr.m_data = NULL;
  arr.m_capacityAndFlags = 0x80000000;
  v16 = hkMemHeapAllocator();
  types.m_size = 0;
  if ( types.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v16, types.m_data, 8, types.m_capacityAndFlags & 0x3FFFFFFF);
  types.m_data = NULL;
  types.m_capacityAndFlags = 0x80000000;
  hkSerialize::Save::~Save(&v23);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareInplaceLoad
==============
*/
void HavokPhysics_GlobalTypeCompendium_PrepareInplaceLoad(hkSerialize::InplaceLoad *load, hkArray<char,hkContainerHeapAllocator> *data)
{
  hkSerialize::InplaceLoad::withCompendium(load, data->m_data, data->m_size);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrepareLoad
==============
*/
void HavokPhysics_GlobalTypeCompendium_PrepareLoad(hkSerialize::Load *load, const hkArray<char,hkContainerHeapAllocator> *data)
{
  hkIo::Detail::ReadBufferAdapter rba; 

  hkSerialize::Load::loadCompendium(load, &rba);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_PrintText
==============
*/
void HavokPhysics_GlobalTypeCompendium_PrintText(const char *fmt, const hkVarArgs::Detail::VarArgsTypeArray<0> *argTypes, ...)
{
  hkReflect::Detail::AddrAndType *v3; 
  __int64 v4; 
  unsigned __int64 v5; 
  char *args; 
  __int64 v7[2]; 
  hkStringBuf v8; 
  hkVarArgs::Vector v9; 
  hkReflect::Detail::AddrAndType v10; 
  __int64 v11; 
  va_list va; 

  va_start(va, argTypes);
  v7[1] = -2i64;
  v9.m_begin = &v10;
  v9.m_end = (hkReflect::Detail::AddrAndType *)&v11;
  v3 = &v10;
  v4 = 10i64;
  do
  {
    hkReflect::Detail::AddrAndType::AddrAndType(v3++);
    --v4;
  }
  while ( v4 );
  va_copy(args, va);
  v5 = hkVarArgs::Vector::unpack(&v9, argTypes, &args);
  if ( v5 > 0xA )
  {
    v7[0] = 10i64;
    if ( hkAssert::Detail::assertFailed(0, "c:\\workspace\\iw8\\shared\\codware\\sdk\\havok\\hk2018_2_0_r1\\source\\common\\base\\types\\hkvarargsv.h", 0x4Eu, "hkVarArgs::FixedArray<10>::setSize", "size <= N", "Invalid FixedArray size {} greater than array capacity {}.", (const hkVarArgs::Detail::VarArgsTypeArray<0> *)&hkVarArgs::Detail::VarArgsTypesOf<void,unsigned __int64,unsigned __int64>::typesArray, &v5, v7, 0i64) )
      __debugbreak();
  }
  if ( !v9.m_begin && v5 && hkAssert::Detail::assertFailed(0, "c:\\workspace\\iw8\\shared\\codware\\sdk\\havok\\hk2018_2_0_r1\\source\\common\\base\\types\\hkvarargsv.h", 0x4Fu, "hkVarArgs::FixedArray<10>::setSize", "m_begin || (size == 0)", "Cannot setSize({}) with m_begin={}.", (const hkVarArgs::Detail::VarArgsTypeArray<0> *)&hkVarArgs::Detail::VarArgsTypesOf<void,unsigned __int64,void const *>::typesArray, &v5, &v9, 0i64) )
    __debugbreak();
  v9.m_end = &v9.m_begin[v5];
  v8.m_string.m_data = (char *)&v8.m_string.m_storage;
  v8.m_string.m_capacityAndFlags = -2147483520;
  v8.m_string.m_size = 1;
  v8.m_string.m_storage.m_storage.m_storage[0] = 0;
  hkStringBuf::formatV(&v8, fmt, &v9);
  Com_Printf(20, "%s\n", v8.m_string.m_data);
  v8.m_string.m_size = 0;
  if ( v8.m_string.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v8.m_string.m_data, 1, v8.m_string.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
HavokPhysics_GlobalTypeCompendium_ShouldAddToCompendium
==============
*/
char HavokPhysics_GlobalTypeCompendium_ShouldAddToCompendium(const hkReflect::Type *type, hkSet<hkReflect::Type const *,hkContainerHeapAllocator,hkMapOperations<hkReflect::Type const *> > *checkedTypes, bool isRoot)
{
  int v6; 
  int v7; 
  unsigned __int64 *v8; 
  unsigned __int64 v9; 
  hkReflect::Type *v11; 
  unsigned __int64 *v12; 
  unsigned __int64 v13; 
  hkReflect::Type **v14; 
  unsigned __int64 *v15; 
  unsigned __int64 v16; 
  hkReflect::Type *v17; 
  int m_size; 
  int v19; 
  unsigned __int32 v20; 
  unsigned __int32 v21; 
  int v22; 
  const hkReflect::Type **m_data; 
  hkReflect::Type *v24; 
  hkReflect::Type *v25; 
  const hkReflect::Template *Template; 
  const hkReflect::Template *v27; 
  int v28; 
  const hkReflect::Template *v29; 
  unsigned __int64 *v30; 
  __int16 *v31; 
  const hkReflect::Type *v32; 
  hkReflect::Type *v33; 
  hkFlags<enum hkReflect::Type::FlagBits,unsigned int> result[2]; 
  __int64 v35; 
  hkStringBuf nameBuf; 

  v35 = -2i64;
  v33 = (hkReflect::Type *)type;
  if ( (int)hkSet<hkReflect::Type const *,hkContainerHeapAllocator,hkMapOperations<hkReflect::Type const *>>::findElement(checkedTypes, type) <= checkedTypes->m_elem.m_size - 1 )
    return 1;
  if ( (hkReflect::Type::getTypeFlags((hkReflect::Type *)type, result)->m_storage & 0x200) != 0 )
    return 0;
  v6 = 1;
  v7 = 0;
  if ( isRoot )
  {
    if ( (hkReflect::Type::getTypeFlags(v33, result)->m_storage & 1) != 0 )
      return 0;
    nameBuf.m_string.m_data = (char *)&nameBuf.m_string.m_storage;
    nameBuf.m_string.m_capacityAndFlags = -2147483520;
    nameBuf.m_string.m_size = 1;
    nameBuf.m_string.m_storage.m_storage.m_storage[0] = 0;
    hkReflect::Type::getFullName(v33, &nameBuf, NULL, NULL);
    if ( !hkString::strCmp(nameBuf.m_string.m_data, "const char[N]< 64 >") || !hkString::strCmp(nameBuf.m_string.m_data, "UnitTestClang::DefaultArgsWithDependentType") || !hkString::strCmp(nameBuf.m_string.m_data, "TestSimpleRecord") || !hkString::strCmp(nameBuf.m_string.m_data, "TestSimpleExRecord") || !hkString::strCmp(nameBuf.m_string.m_data, "TestSimpleContainerRecord") || !hkString::strCmp(nameBuf.m_string.m_data, "TestSimpleContainerExRecord") || !hkString::strCmp(nameBuf.m_string.m_data, "hkpGroupFilterBase") || !hkString::strCmp(nameBuf.m_string.m_data, "hkpGroupFilter64Layers") || !hkString::strCmp(nameBuf.m_string.m_data, "RemoteUiDemoTestObject") || !hkString::strCmp(nameBuf.m_string.m_data, "hkAlignSceneToNodeOptions") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< hkColor::Argb >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkColor::Argb, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< T*< void > >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< hkInt32, 3 >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< hkInt32, 9 >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< int, 3 >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< int, 9 >") || !hkString::strCmp(nameBuf.m_string.m_data, "char[N]< 12 >") || !hkString::strCmp(nameBuf.m_string.m_data, "char[N]< 256 >") || !hkString::strCmp(nameBuf.m_string.m_data, "char[N]< 28 >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< T*< void >, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkReflect::Detail::Opaque, hkContainerDebugAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkReflect::Detail::Opaque, hkContainerTempAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkEnum< hkJobType, unsigned char >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkRelArray< int >") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< hkArray< hkHandle< hkUint32, 2147483647 >, hkContainerHeapAllocator > >") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< hkArray< hkHandle< unsigned int, 2147483647 >, hkContainerHeapAllocator > >") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< hkHandle< hkUint32, 2147483647 > >") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< hkHandle< unsigned int, 2147483647 > >") || !hkString::strCmp(nameBuf.m_string.m_data, "T*< hkInt32 >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkArray< hkHandle< hkUint32, 2147483647 >, hkContainerHeapAllocator >, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkHandle< hkUint32, 2147483647 >, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkArray< hkHandle< unsigned int, 2147483647 >, hkContainerHeapAllocator >, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkHandle< unsigned int, 2147483647 >, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "hkArray< hkInt32, hkContainerHeapAllocator >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< hkPackedVector3, 16 >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< hkVector4, 16 >") || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< hkVector4f, 16 >") || !hkString::strNcmp(nameBuf.m_string.m_data, "T[N]< hkUint16, ", 16) || !hkString::strNcmp(nameBuf.m_string.m_data, "T[N]< hkUint8, ", 15) || !hkString::strNcmp(nameBuf.m_string.m_data, "T[N]< unsigned char, ", 21) || !hkString::strNcmp(nameBuf.m_string.m_data, "T[N]< unsigned short, ", 22) || !hkString::strCmp(nameBuf.m_string.m_data, "T[N]< int, 6 >") || hkString::strStr(nameBuf.m_string.m_data, "hkx") || hkString::strStr(nameBuf.m_string.m_data, "hka") || hkString::strStr(nameBuf.m_string.m_data, "hcl") || hkString::strStr(nameBuf.m_string.m_data, "hkRefVariant") || hkString::strStr(nameBuf.m_string.m_data, "Test") || hkString::strStr(nameBuf.m_string.m_data, "Command") )
    {
      nameBuf.m_string.m_size = 0;
      if ( nameBuf.m_string.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, nameBuf.m_string.m_data, 1, nameBuf.m_string.m_capacityAndFlags & 0x3FFFFFFF);
      return 0;
    }
    nameBuf.m_string.m_size = 0;
    if ( nameBuf.m_string.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, nameBuf.m_string.m_data, 1, nameBuf.m_string.m_capacityAndFlags & 0x3FFFFFFF);
  }
  v8 = hkReflect::Type::addressGlobal(v33, HALF);
  if ( v8 )
    v9 = *v8;
  else
    LOBYTE(v9) = 0;
  v11 = NULL;
  if ( (v9 & 0xF) == 8 )
    v11 = v33;
  if ( v11 )
  {
    v12 = hkReflect::Type::addressDecorator(v11, HALF);
    v13 = v12 ? *v12 : 0i64;
    if ( (int)(v13 >> 8) > 0 )
    {
      v14 = (hkReflect::Type **)hkReflect::Type::addressDecorator(v11, HALF_HALF);
      if ( v14 )
      {
        if ( *v14 )
        {
          v15 = hkReflect::Type::addressDecorator(*v14, HALF);
          if ( v15 )
            v16 = *v15;
          else
            LODWORD(v16) = 0;
          if ( (_DWORD)v16 == 3431941 || (_DWORD)v16 == 66052 || (_DWORD)v16 == 65540 )
            return 0;
        }
      }
    }
  }
  v17 = v33;
  m_size = checkedTypes->m_elem.m_size;
  if ( 2 * checkedTypes->m_numElems > m_size - 1 )
  {
    hkSet<hkReflect::Type const *,hkContainerHeapAllocator,hkMapOperations<hkReflect::Type const *>>::resizeTable(checkedTypes, (int)result);
    m_size = checkedTypes->m_elem.m_size;
  }
  v19 = m_size - 1;
  v20 = _byteswap_ulong(-1640531535 * (_DWORD)v33);
  v21 = _byteswap_ulong(-1640531535 * HIDWORD(v33));
  v22 = v19 & (v21 ^ ((v20 >> 2) + v20 + (v21 << 6) - 1640531527));
  m_data = checkedTypes->m_elem.m_data;
  v24 = (hkReflect::Type *)checkedTypes->m_elem.m_data[v22];
  if ( v24 != (hkReflect::Type *)-1i64 )
  {
    while ( v24 != v33 )
    {
      v22 = v19 & (v22 + 1);
      v24 = (hkReflect::Type *)m_data[v22];
      if ( v24 == (hkReflect::Type *)-1i64 )
        goto LABEL_84;
    }
    v6 = 0;
  }
LABEL_84:
  checkedTypes->m_numElems += v6;
  m_data[v22] = v17;
  if ( isRoot && printTypes )
    HavokPhysics_GlobalTypeCompendium_PrintText((const char *)&stru_143ED3684, (const hkVarArgs::Detail::VarArgsTypeArray<0> *)&hkVarArgs::Detail::VarArgsTypesOf<void,hkReflect::Type const *>::typesArray, &v33, 0i64);
  v25 = v33;
  if ( v33->m_parent )
  {
    if ( HavokPhysics_GlobalTypeCompendium_ShouldAddToCompendium(v33->m_parent, checkedTypes, 0) )
    {
      v25 = v33;
      goto LABEL_90;
    }
    return 0;
  }
LABEL_90:
  Template = hkReflect::Type::getTemplate(v25);
  v27 = Template;
  if ( Template )
  {
    v28 = 0;
    if ( LOWORD(Template->m_numParams) )
    {
      v29 = Template + 1;
      while ( *(_BYTE *)v29->m_numParams != 116 || HavokPhysics_GlobalTypeCompendium_ShouldAddToCompendium(v29->m_undecoratedType, checkedTypes, 0) )
      {
        ++v28;
        ++v29;
        if ( v28 >= LOWORD(v27->m_numParams) )
          goto LABEL_96;
      }
      return 0;
    }
  }
LABEL_96:
  v30 = hkReflect::Type::addressGlobal(v33, (hkReflect::Opt::Values)0x4000000);
  if ( v30 )
  {
    v31 = (__int16 *)*v30;
    if ( *v30 )
    {
      if ( v31[1] + *v31 > 0 )
      {
        while ( 1 )
        {
          hkReflect::Decl::Decl((hkReflect::Decl *)result, *(hkReflect::QualifiedType<hkReflect::Type> *)&v31[4 * v7 + 4]);
          if ( hkReflect::Decl::getName((hkReflect::Decl *)result) )
          {
            v32 = *(const hkReflect::Type **)(*(_QWORD *)&result[0].m_storage + 8i64);
            if ( v32 )
            {
              if ( !HavokPhysics_GlobalTypeCompendium_ShouldAddToCompendium(v32, checkedTypes, 0) )
                break;
            }
          }
          if ( ++v7 >= v31[1] + *v31 )
            return 1;
        }
        return 0;
      }
    }
  }
  return 1;
}

