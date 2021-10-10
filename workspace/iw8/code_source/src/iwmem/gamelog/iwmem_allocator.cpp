/*
==============
IWMem_Allocator_Init
==============
*/

void IWMem_Allocator_Init(void)
{
  ?IWMem_Allocator_Init@@YAXXZ();
}

/*
==============
IWMemAllocator::GetTotalSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetTotalSize(IWMemAllocator *this)
{
  return ?GetTotalSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::PushLeakDetect
==============
*/

void __fastcall IWMemAllocator::PushLeakDetect(IWMemAllocator *this)
{
  ?PushLeakDetect@IWMemAllocator@@QEAAXXZ(this);
}

/*
==============
IWMemAllocator::MatPixCreate
==============
*/

void __fastcall IWMemAllocator::MatPixCreate(IWMemAllocator *this)
{
  ?MatPixCreate@IWMemAllocator@@AEAAXXZ(this);
}

/*
==============
IWMemAllocator::AddChildAllocator
==============
*/

void __fastcall IWMemAllocator::AddChildAllocator(IWMemAllocator *this, IWMemAllocator *childAllocator)
{
  ?AddChildAllocator@IWMemAllocator@@QEAAXAEAV1@@Z(this, childAllocator);
}

/*
==============
IWMemAllocator::UseTableLogging
==============
*/

bool __fastcall IWMemAllocator::UseTableLogging(IWMemAllocator *this)
{
  return ?UseTableLogging@IWMemAllocator@@QEBA_NXZ(this);
}

/*
==============
IWMemAllocator::ValidateTableSize
==============
*/

void __fastcall IWMemAllocator::ValidateTableSize(IWMemAllocator *this)
{
  ?ValidateTableSize@IWMemAllocator@@AEBAXXZ(this);
}

/*
==============
IWMemAllocator::SetPoolItemSize
==============
*/

void __fastcall IWMemAllocator::SetPoolItemSize(IWMemAllocator *this, const unsigned __int64 size)
{
  ?SetPoolItemSize@IWMemAllocator@@QEAAX_K@Z(this, size);
}

/*
==============
IWMemAllocator::LockThreadAccess
==============
*/

void __fastcall IWMemAllocator::LockThreadAccess(IWMemAllocator *this)
{
  ?LockThreadAccess@IWMemAllocator@@AEAAXXZ(this);
}

/*
==============
IWMemAllocator::GetMinFreeSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetMinFreeSize(IWMemAllocator *this)
{
  return ?GetMinFreeSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::MatPixFree
==============
*/

void __fastcall IWMemAllocator::MatPixFree(IWMemAllocator *this, const unsigned __int64 address)
{
  ?MatPixFree@IWMemAllocator@@AEAAX_K@Z(this, address);
}

/*
==============
IWMemAllocator::TestFlag
==============
*/

bool __fastcall IWMemAllocator::TestFlag(IWMemAllocator *this, const IWMemAllocatorFlag flag)
{
  return ?TestFlag@IWMemAllocator@@QEBA_NW4IWMemAllocatorFlag@@@Z(this, flag);
}

/*
==============
IWMemAllocator::LogFree
==============
*/

void __fastcall IWMemAllocator::LogFree(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  ?LogFree@IWMemAllocator@@QEAAX_K0@Z(this, address, size);
}

/*
==============
IWMemAllocator::GetCommitSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetCommitSize(IWMemAllocator *this)
{
  return ?GetCommitSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::LogClear
==============
*/

void __fastcall IWMemAllocator::LogClear(IWMemAllocator *this)
{
  ?LogClear@IWMemAllocator@@QEAAXXZ(this);
}

/*
==============
IWMemAllocator::UseUniqueTableEntries
==============
*/

bool __fastcall IWMemAllocator::UseUniqueTableEntries(IWMemAllocator *this)
{
  return ?UseUniqueTableEntries@IWMemAllocator@@AEAA_NXZ(this);
}

/*
==============
IWMemAllocator::UseMatPix
==============
*/

bool __fastcall IWMemAllocator::UseMatPix(IWMemAllocator *this)
{
  return ?UseMatPix@IWMemAllocator@@AEBA_NXZ(this);
}

/*
==============
IWMemAllocator::MatPixAlloc
==============
*/

void __fastcall IWMemAllocator::MatPixAlloc(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  ?MatPixAlloc@IWMemAllocator@@AEAAX_K0@Z(this, address, size);
}

/*
==============
IWMemAllocator::LogFreeRange
==============
*/

void __fastcall IWMemAllocator::LogFreeRange(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  ?LogFreeRange@IWMemAllocator@@QEAAX_K0@Z(this, address, size);
}

/*
==============
IWMemAllocator::MatPixDestroy
==============
*/

void __fastcall IWMemAllocator::MatPixDestroy(IWMemAllocator *this)
{
  ?MatPixDestroy@IWMemAllocator@@AEAAXXZ(this);
}

/*
==============
IWMemAllocator::LogAllocation
==============
*/

void __fastcall IWMemAllocator::LogAllocation(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  ?LogAllocation@IWMemAllocator@@QEAAX_K0@Z(this, address, size);
}

/*
==============
IWMemAllocator::GetParentAllocator
==============
*/

const IWMemAllocator *__fastcall IWMemAllocator::GetParentAllocator(IWMemAllocator *this)
{
  return ?GetParentAllocator@IWMemAllocator@@QEBAPEBV1@XZ(this);
}

/*
==============
IWMemAllocator::Destroy
==============
*/

void __fastcall IWMemAllocator::Destroy(IWMemAllocator *this)
{
  ?Destroy@IWMemAllocator@@QEAAXXZ(this);
}

/*
==============
IWMemAllocator::MatPixFreeRange
==============
*/

void __fastcall IWMemAllocator::MatPixFreeRange(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  ?MatPixFreeRange@IWMemAllocator@@AEAAX_K0@Z(this, address, size);
}

/*
==============
IWMemAllocator::GetUsedSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetUsedSize(IWMemAllocator *this)
{
  return ?GetUsedSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::GetFreeSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetFreeSize(IWMemAllocator *this)
{
  return ?GetFreeSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::UnlockThreadAccess
==============
*/

void __fastcall IWMemAllocator::UnlockThreadAccess(IWMemAllocator *this)
{
  ?UnlockThreadAccess@IWMemAllocator@@AEAAXXZ(this);
}

/*
==============
IWMemAllocator::SetFlag
==============
*/

void __fastcall IWMemAllocator::SetFlag(IWMemAllocator *this, const IWMemAllocatorFlag flag)
{
  ?SetFlag@IWMemAllocator@@QEAAXW4IWMemAllocatorFlag@@@Z(this, flag);
}

/*
==============
IWMemAllocator::GetOwnedRangeReport
==============
*/

IWMemBlock *__fastcall IWMemAllocator::GetOwnedRangeReport(IWMemAllocator *this, IWMemBlock *result)
{
  return ?GetOwnedRangeReport@IWMemAllocator@@QEBA?AVIWMemBlock@@XZ(this, result);
}

/*
==============
IWMemAllocator::GetCommitFreeSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetCommitFreeSize(IWMemAllocator *this)
{
  return ?GetCommitFreeSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::PopLeakDetect
==============
*/

void __fastcall IWMemAllocator::PopLeakDetect(IWMemAllocator *this)
{
  ?PopLeakDetect@IWMemAllocator@@QEAAXXZ(this);
}

/*
==============
IWMemAllocator::SetFreeMem
==============
*/

void __fastcall IWMemAllocator::SetFreeMem(IWMemAllocator *this, const unsigned __int64 size)
{
  ?SetFreeMem@IWMemAllocator@@QEAAX_K@Z(this, size);
}

/*
==============
IWMemAllocator::Create
==============
*/

void __fastcall IWMemAllocator::Create(IWMemAllocator *this, const char *name, IWMemAllocatorType type, unsigned __int64 address, unsigned __int64 size)
{
  ?Create@IWMemAllocator@@QEAAXPEBDW4IWMemAllocatorType@@_K2@Z(this, name, type, address, size);
}

/*
==============
IWMemAllocator::GetMaxUsedSize
==============
*/

unsigned __int64 __fastcall IWMemAllocator::GetMaxUsedSize(IWMemAllocator *this)
{
  return ?GetMaxUsedSize@IWMemAllocator@@QEBA_KXZ(this);
}

/*
==============
IWMemAllocator::AddChildAllocator
==============
*/
void IWMemAllocator::AddChildAllocator(IWMemAllocator *this, IWMemAllocator *childAllocator)
{
  unsigned int AllocatorIndex; 

  if ( this->m_type && childAllocator->m_childCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 327, ASSERT_TYPE_ASSERT, "(childAllocator.m_childCount == 0)", (const char *)&queryFormat, "childAllocator.m_childCount == 0") )
    __debugbreak();
  if ( childAllocator->m_parentIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 330, ASSERT_TYPE_ASSERT, "(childAllocator.m_parentIndex == 0)", (const char *)&queryFormat, "childAllocator.m_parentIndex == 0") )
    __debugbreak();
  AllocatorIndex = IWMem_AllocatorManager_GetAllocatorIndex(this);
  childAllocator->m_parentIndex = AllocatorIndex;
  if ( !AllocatorIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 332, ASSERT_TYPE_ASSERT, "(childAllocator.m_parentIndex != 0)", (const char *)&queryFormat, "childAllocator.m_parentIndex != 0") )
    __debugbreak();
  ++this->m_childCount;
}

/*
==============
IWMemAllocator::Create
==============
*/
void IWMemAllocator::Create(IWMemAllocator *this, const char *name, IWMemAllocatorType type, unsigned __int64 address, unsigned __int64 size)
{
  unsigned __int64 m_matPixId; 
  unsigned __int64 v10; 
  IWMemBlock v11; 

  memset_0(this, 0, sizeof(IWMemAllocator));
  this->m_type = type;
  v11.m_address = address;
  v11.m_size = size;
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
    __debugbreak();
  if ( address >= size + address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
    __debugbreak();
  this->m_ownedRange = v11;
  Core_strcpy(this->m_name, 0x40ui64, name);
  IWMemAllocatorTable::Init(&this->m_table);
  if ( this->m_type == NormalSpace )
    this->m_maxUsedSize = -1i64;
  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    m_matPixId = 0i64;
    while ( 1 )
    {
      if ( (unsigned int)m_matPixId >= 0x80ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( ((0x8000000000000000ui64 >> (m_matPixId & 0x3F)) & s_iwMemAllocatorGlob.pixIDs.m_data[(unsigned __int64)(unsigned int)m_matPixId >> 6]) == 0 )
        break;
      m_matPixId = (unsigned int)(m_matPixId + 1);
      if ( (unsigned int)m_matPixId >= 0x80 )
      {
        m_matPixId = this->m_matPixId;
        goto LABEL_19;
      }
    }
    this->m_matPixId = m_matPixId;
LABEL_19:
    if ( m_matPixId >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (m_matPixId & 0x3F)) & s_iwMemAllocatorGlob.pixIDs.m_data[m_matPixId >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 755, ASSERT_TYPE_ASSERT, "(!s_iwMemAllocatorGlob.pixIDs.test( m_matPixId ))", (const char *)&queryFormat, "!s_iwMemAllocatorGlob.pixIDs.test( m_matPixId )") )
      __debugbreak();
    v10 = this->m_matPixId;
    if ( v10 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_iwMemAllocatorGlob.pixIDs.m_data[v10 >> 6] |= 0x8000000000000000ui64 >> (v10 & 0x3F);
  }
}

/*
==============
IWMemAllocator::Destroy
==============
*/
void IWMemAllocator::Destroy(IWMemAllocator *this)
{
  unsigned int m_parentIndex; 
  IWMemAllocator *AllocatorByIndex; 
  unsigned __int64 m_size; 
  const void *m_address; 
  unsigned __int16 v6; 
  unsigned __int64 m_matPixId; 
  unsigned __int64 v8; 

  if ( this->m_childCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 119, ASSERT_TYPE_ASSERT, "(m_childCount == 0)", (const char *)&queryFormat, "m_childCount == 0") )
    __debugbreak();
  m_parentIndex = this->m_parentIndex;
  if ( m_parentIndex )
  {
    AllocatorByIndex = IWMem_AllocatorManager_GetAllocatorByIndex(m_parentIndex);
    if ( !AllocatorByIndex->m_childCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 125, ASSERT_TYPE_ASSERT, "(parent.m_childCount > 0)", (const char *)&queryFormat, "parent.m_childCount > 0") )
      __debugbreak();
    --AllocatorByIndex->m_childCount;
  }
  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    m_size = this->m_ownedRange.m_size;
    m_address = (const void *)this->m_ownedRange.m_address;
    v6 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryFree, v6, m_address, m_size, 0i64);
    m_matPixId = this->m_matPixId;
    if ( m_matPixId >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (m_matPixId & 0x3F)) & s_iwMemAllocatorGlob.pixIDs.m_data[m_matPixId >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 773, ASSERT_TYPE_ASSERT, "(s_iwMemAllocatorGlob.pixIDs.test( m_matPixId ))", (const char *)&queryFormat, "s_iwMemAllocatorGlob.pixIDs.test( m_matPixId )") )
      __debugbreak();
    v8 = this->m_matPixId;
    if ( v8 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_iwMemAllocatorGlob.pixIDs.m_data[v8 >> 6] &= ~(0x8000000000000000ui64 >> (v8 & 0x3F));
  }
}

/*
==============
IWMemAllocator::GetCommitFreeSize
==============
*/
unsigned __int64 IWMemAllocator::GetCommitFreeSize(IWMemAllocator *this)
{
  unsigned int m_parentIndex; 
  unsigned int v3; 
  unsigned __int64 v4; 
  IWMemAllocator *AllocatorByIndex; 
  unsigned int v6; 
  IWMemAllocator *v7; 
  unsigned __int64 m_simpleUsed; 
  IWMemAllocatorType m_type; 

  if ( this->m_type <= 4u )
    return 0i64;
  m_parentIndex = this->m_parentIndex;
  if ( !m_parentIndex || !IWMem_AllocatorManager_GetAllocatorByIndex(m_parentIndex) )
    return 0i64;
  v3 = this->m_parentIndex;
  v4 = 0i64;
  if ( v3 )
    AllocatorByIndex = IWMem_AllocatorManager_GetAllocatorByIndex(v3);
  else
    AllocatorByIndex = NULL;
  if ( AllocatorByIndex->m_type == 4 )
  {
    v6 = this->m_parentIndex;
    if ( v6 )
      v7 = IWMem_AllocatorManager_GetAllocatorByIndex(v6);
    else
      v7 = NULL;
    if ( v7->m_type > (unsigned int)NormalSpace )
      m_simpleUsed = v7->m_simpleUsed;
    else
      m_simpleUsed = 0i64;
    if ( this->m_type > (unsigned int)NormalSpace )
      v4 = this->m_simpleUsed;
    if ( m_simpleUsed > v4 )
      return m_simpleUsed - v4;
    return 0i64;
  }
  m_type = this->m_type;
  switch ( m_type )
  {
    case All:
      return v4;
    case NormalSpace:
      return this->m_simpleUsed;
    case PhaseSpace:
      return v4;
  }
  if ( (unsigned int)(m_type - 1) <= 1 || (this->m_flags & 4) != 0 )
    return 0i64;
  _XMM0 = this->m_ownedRange;
  __asm { vpextrq rbx, xmm0, 1 }
  return _RBX - this->m_simpleUsed;
}

/*
==============
IWMemAllocator::GetCommitSize
==============
*/
unsigned __int64 IWMemAllocator::GetCommitSize(IWMemAllocator *this)
{
  unsigned __int64 result; 
  unsigned int m_parentIndex; 
  unsigned int v4; 
  unsigned __int64 m_simpleUsed; 
  IWMemAllocator *AllocatorByIndex; 
  unsigned int v7; 
  IWMemAllocator *v8; 

  switch ( this->m_type )
  {
    case 1:
    case 2:
    case 4:
      result = this->m_simpleUsed;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      m_parentIndex = this->m_parentIndex;
      if ( !m_parentIndex || !IWMem_AllocatorManager_GetAllocatorByIndex(m_parentIndex) )
        goto $LN11_18;
      v4 = this->m_parentIndex;
      m_simpleUsed = 0i64;
      if ( v4 )
        AllocatorByIndex = IWMem_AllocatorManager_GetAllocatorByIndex(v4);
      else
        AllocatorByIndex = NULL;
      if ( AllocatorByIndex->m_type == 4 )
      {
        if ( this->m_type == (Count|0x4) )
        {
          v7 = this->m_parentIndex;
          if ( v7 )
            v8 = IWMem_AllocatorManager_GetAllocatorByIndex(v7);
          else
            v8 = NULL;
          if ( v8->m_type > (unsigned int)NormalSpace )
            m_simpleUsed = v8->m_simpleUsed;
          result = m_simpleUsed;
        }
        else
        {
          result = this->m_simpleUsed;
        }
      }
      else
      {
        result = IWMemAllocator::GetTotalSize(this);
      }
      break;
    default:
$LN11_18:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
IWMemAllocator::GetFreeSize
==============
*/
unsigned __int64 IWMemAllocator::GetFreeSize(IWMemAllocator *this)
{
  IWMemAllocatorType m_type; 

  m_type = this->m_type;
  switch ( m_type )
  {
    case All:
      return 0i64;
    case NormalSpace:
      return this->m_simpleUsed;
    case PhaseSpace:
      return 0i64;
  }
  if ( (unsigned int)(m_type - 1) <= 1 || (this->m_flags & 4) != 0 )
    return 0i64;
  _XMM0 = this->m_ownedRange;
  __asm { vpextrq rax, xmm0, 1 }
  return _RAX - this->m_simpleUsed;
}

/*
==============
IWMemAllocator::GetMaxUsedSize
==============
*/
unsigned __int64 IWMemAllocator::GetMaxUsedSize(IWMemAllocator *this)
{
  if ( this->m_type > (unsigned int)NormalSpace )
    return this->m_maxUsedSize;
  else
    return 0i64;
}

/*
==============
IWMemAllocator::GetMinFreeSize
==============
*/
unsigned __int64 IWMemAllocator::GetMinFreeSize(IWMemAllocator *this)
{
  IWMemAllocatorType m_type; 
  unsigned __int64 m_maxUsedSize; 

  m_type = this->m_type;
  if ( m_type )
  {
    if ( m_type == NormalSpace )
      return this->m_maxUsedSize;
    if ( m_type != PhaseSpace )
    {
      if ( (unsigned int)(m_type - 1) > 1 )
      {
        if ( (this->m_flags & 4) != 0 )
        {
          _RAX = this->m_simpleUsed;
        }
        else
        {
          _XMM0 = this->m_ownedRange;
          __asm { vpextrq rax, xmm0, 1 }
        }
      }
      else
      {
        _RAX = this->m_simpleUsed;
      }
      m_maxUsedSize = this->m_maxUsedSize;
      if ( m_maxUsedSize <= _RAX )
        return _RAX - m_maxUsedSize;
    }
  }
  return 0i64;
}

/*
==============
IWMemAllocator::GetOwnedRangeReport
==============
*/
IWMemBlock *IWMemAllocator::GetOwnedRangeReport(IWMemAllocator *this, IWMemBlock *result)
{
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 
  unsigned __int64 m_address; 

  m_flags = this->m_flags;
  if ( (m_flags & 4) != 0 )
  {
    if ( (m_flags & 2) == 0 && ((m_flags & 0x10) == 0 || IWMem_UseMaxTracking()) )
    {
      m_type = this->m_type;
      if ( m_type != (Count|0x4) && m_type != NormalSpace && this->m_table.m_allocs.m_count )
      {
        IWMemAllocatorTable::GetUsedRange(&this->m_table, result);
        return result;
      }
    }
    m_address = this->m_ownedRange.m_address;
    result->m_address = m_address;
    result->m_size = 1i64;
    if ( m_address >= m_address + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
    {
      __debugbreak();
      return result;
    }
  }
  else
  {
    *result = this->m_ownedRange;
  }
  return result;
}

/*
==============
IWMemAllocator::GetParentAllocator
==============
*/
IWMemAllocator *IWMemAllocator::GetParentAllocator(IWMemAllocator *this)
{
  unsigned int m_parentIndex; 

  m_parentIndex = this->m_parentIndex;
  if ( m_parentIndex )
    return IWMem_AllocatorManager_GetAllocatorByIndex(m_parentIndex);
  else
    return 0i64;
}

/*
==============
IWMemAllocator::GetTotalSize
==============
*/
unsigned __int64 IWMemAllocator::GetTotalSize(IWMemAllocator *this)
{
  IWMemAllocatorType m_type; 
  unsigned __int64 result; 

  m_type = this->m_type;
  if ( m_type == All )
    return 0i64;
  if ( (unsigned int)(m_type - 1) <= 1 || (this->m_flags & 4) != 0 )
    return this->m_simpleUsed;
  _XMM0 = this->m_ownedRange;
  __asm { vpextrq rax, xmm0, 1 }
  return result;
}

/*
==============
IWMemAllocator::GetUsedSize
==============
*/
unsigned __int64 IWMemAllocator::GetUsedSize(IWMemAllocator *this)
{
  if ( this->m_type > (unsigned int)NormalSpace )
    return this->m_simpleUsed;
  else
    return 0i64;
}

/*
==============
IWMem_Allocator_Init
==============
*/
void IWMem_Allocator_Init(void)
{
  InitializeCriticalSection(&s_iwMemAllocatorGlob.critSect);
  s_iwMemAllocatorGlob.pixIDs.m_data[0] = 0i64;
  s_iwMemAllocatorGlob.pixIDs.m_data[1] = 0i64;
}

/*
==============
IWMemAllocator::LockThreadAccess
==============
*/
void IWMemAllocator::LockThreadAccess(IWMemAllocator *this)
{
  if ( (this->m_flags & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 655, ASSERT_TYPE_ASSERT, "(TestFlag( IWMemAllocatorFlag::RequiresLock ))", (const char *)&queryFormat, "TestFlag( IWMemAllocatorFlag::RequiresLock )") )
    __debugbreak();
  EnterCriticalSection(&s_iwMemAllocatorGlob.critSect);
}

/*
==============
IWMemAllocator::LogAllocation
==============
*/
void IWMemAllocator::LogAllocation(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int64 m_address; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 m_simpleUsed; 
  bool v10; 
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 
  unsigned __int16 v13; 

  if ( !address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 141, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  m_address = this->m_ownedRange.m_address;
  if ( (address < m_address || address >= this->m_ownedRange.m_size + m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 142, ASSERT_TYPE_ASSERT, "(m_ownedRange.IsAddressWithin( address ))", (const char *)&queryFormat, "m_ownedRange.IsAddressWithin( address )") )
    __debugbreak();
  v7 = this->m_ownedRange.m_address;
  v8 = address + size - 1;
  if ( (v8 < v7 || v8 >= this->m_ownedRange.m_size + v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 143, ASSERT_TYPE_ASSERT, "(m_ownedRange.IsAddressWithin( address + size - 1 ))", (const char *)&queryFormat, "m_ownedRange.IsAddressWithin( address + size - 1 )") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 155, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  this->m_simpleUsed += size;
  m_simpleUsed = this->m_simpleUsed;
  if ( this->m_maxUsedSize > m_simpleUsed )
    m_simpleUsed = this->m_maxUsedSize;
  v10 = this->m_type == (Count|0x4);
  this->m_maxUsedSize = m_simpleUsed;
  if ( v10 && !this->m_poolItemSize )
    this->m_poolItemSize = size;
  m_flags = this->m_flags;
  if ( (m_flags & 2) == 0 && ((m_flags & 0x10) == 0 || IWMem_UseMaxTracking()) )
  {
    m_type = this->m_type;
    if ( m_type != (Count|0x4) && m_type != NormalSpace )
    {
      IWMemAllocatorTable::Allocate(&this->m_table, address, size, this->m_pushedLeakDetect, (this->m_flags & 8) == 0, this->m_flags & 1);
      if ( IWMem_HasHadInternalError() )
        return;
      IWMemAllocator::ValidateTableSize(this);
    }
  }
  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    v13 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryAllocation, v13, (const void *)address, size, 0i64);
  }
}

/*
==============
IWMemAllocator::LogClear
==============
*/
void IWMemAllocator::LogClear(IWMemAllocator *this)
{
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 

  this->m_simpleUsed = 0i64;
  m_flags = this->m_flags;
  if ( (m_flags & 2) == 0 && ((m_flags & 0x10) == 0 || IWMem_UseMaxTracking()) )
  {
    m_type = this->m_type;
    if ( m_type != (Count|0x4) && m_type != NormalSpace )
    {
      IWMemAllocatorTable::Clear(&this->m_table);
      IWMemAllocator::ValidateTableSize(this);
    }
  }
  IWMemAllocator::MatPixFreeRange(this, this->m_ownedRange.m_address, this->m_ownedRange.m_size);
}

/*
==============
IWMemAllocator::LogFree
==============
*/
void IWMemAllocator::LogFree(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int64 m_address; 
  const char *v7; 
  int v8; 
  const char *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 
  unsigned __int64 v14; 
  unsigned __int16 v15; 

  if ( !address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 194, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 195, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  m_address = this->m_ownedRange.m_address;
  if ( (address < m_address || address >= this->m_ownedRange.m_size + m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 196, ASSERT_TYPE_ASSERT, "(m_ownedRange.IsAddressWithin( address ))", (const char *)&queryFormat, "m_ownedRange.IsAddressWithin( address )") )
    __debugbreak();
  if ( size == -1i64 )
  {
    if ( (this->m_flags & 1) != 0 )
      goto LABEL_19;
    v7 = "UseUniqueTableEntries()";
    v8 = 200;
    v9 = "(UseUniqueTableEntries())";
  }
  else
  {
    v10 = this->m_ownedRange.m_address;
    v11 = address + size - 1;
    if ( v11 >= v10 && v11 < this->m_ownedRange.m_size + v10 )
      goto LABEL_19;
    v7 = "m_ownedRange.IsAddressWithin( address + size - 1 )";
    v8 = 204;
    v9 = "(m_ownedRange.IsAddressWithin( address + size - 1 ))";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
    __debugbreak();
LABEL_19:
  m_flags = this->m_flags;
  if ( (m_flags & 2) != 0 || (m_flags & 0x10) != 0 && !IWMem_UseMaxTracking() || (m_type = this->m_type, m_type == (Count|0x4)) || m_type == NormalSpace )
  {
    if ( size == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 225, ASSERT_TYPE_ASSERT, "(size != IWMEM_UNKNOWN_SIZE)", (const char *)&queryFormat, "size != IWMEM_UNKNOWN_SIZE") )
      __debugbreak();
    if ( this->m_simpleUsed < size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 227, ASSERT_TYPE_ASSERT, "(m_simpleUsed >= size)", (const char *)&queryFormat, "m_simpleUsed >= size") )
      __debugbreak();
    this->m_simpleUsed -= size;
  }
  else
  {
    v14 = IWMemAllocatorTable::Free(&this->m_table, address, size, this->m_flags & 1);
    if ( IWMem_HasHadInternalError() )
      return;
    if ( this->m_simpleUsed < v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 216, ASSERT_TYPE_ASSERT, "(m_simpleUsed >= retSize)", (const char *)&queryFormat, "m_simpleUsed >= retSize") )
      __debugbreak();
    this->m_simpleUsed -= v14;
    IWMemAllocator::ValidateTableSize(this);
  }
  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    v15 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryFree, v15, (const void *)address, 0i64, 0i64);
  }
}

/*
==============
IWMemAllocator::LogFreeRange
==============
*/
void IWMemAllocator::LogFreeRange(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int64 m_address; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 

  if ( !address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 243, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 244, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  m_address = this->m_ownedRange.m_address;
  if ( (address < m_address || address >= this->m_ownedRange.m_size + m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 245, ASSERT_TYPE_ASSERT, "(m_ownedRange.IsAddressWithin( address ))", (const char *)&queryFormat, "m_ownedRange.IsAddressWithin( address )") )
    __debugbreak();
  if ( size == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 246, ASSERT_TYPE_ASSERT, "(size != IWMEM_UNKNOWN_SIZE)", (const char *)&queryFormat, "size != IWMEM_UNKNOWN_SIZE") )
    __debugbreak();
  v7 = this->m_ownedRange.m_address;
  v8 = address + size - 1;
  if ( (v8 < v7 || v8 >= this->m_ownedRange.m_size + v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 247, ASSERT_TYPE_ASSERT, "(m_ownedRange.IsAddressWithin( address + size - 1 ))", (const char *)&queryFormat, "m_ownedRange.IsAddressWithin( address + size - 1 )") )
    __debugbreak();
  if ( this->m_simpleUsed < size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 249, ASSERT_TYPE_ASSERT, "(m_simpleUsed >= size)", (const char *)&queryFormat, "m_simpleUsed >= size") )
    __debugbreak();
  m_flags = this->m_flags;
  this->m_simpleUsed -= size;
  if ( (m_flags & 2) == 0 && ((m_flags & 0x10) == 0 || IWMem_UseMaxTracking()) )
  {
    m_type = this->m_type;
    if ( m_type != (Count|0x4) && m_type != NormalSpace )
    {
      IWMemAllocatorTable::FreeRange(&this->m_table, address, size);
      if ( IWMem_HasHadInternalError() )
        return;
      IWMemAllocator::ValidateTableSize(this);
    }
  }
  IWMemAllocator::MatPixFreeRange(this, address, size);
}

/*
==============
IWMemAllocator::MatPixAlloc
==============
*/
void IWMemAllocator::MatPixAlloc(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int16 v6; 

  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    v6 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryAllocation, v6, (const void *)address, size, 0i64);
  }
}

/*
==============
IWMemAllocator::MatPixCreate
==============
*/
void IWMemAllocator::MatPixCreate(IWMemAllocator *this)
{
  unsigned __int64 m_matPixId; 
  unsigned __int64 v3; 

  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    m_matPixId = 0i64;
    while ( 1 )
    {
      if ( (unsigned int)m_matPixId >= 0x80ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( ((0x8000000000000000ui64 >> (m_matPixId & 0x3F)) & s_iwMemAllocatorGlob.pixIDs.m_data[(unsigned __int64)(unsigned int)m_matPixId >> 6]) == 0 )
        break;
      m_matPixId = (unsigned int)(m_matPixId + 1);
      if ( (unsigned int)m_matPixId >= 0x80 )
      {
        m_matPixId = this->m_matPixId;
        goto LABEL_11;
      }
    }
    this->m_matPixId = m_matPixId;
LABEL_11:
    if ( m_matPixId >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (m_matPixId & 0x3F)) & s_iwMemAllocatorGlob.pixIDs.m_data[m_matPixId >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 755, ASSERT_TYPE_ASSERT, "(!s_iwMemAllocatorGlob.pixIDs.test( m_matPixId ))", (const char *)&queryFormat, "!s_iwMemAllocatorGlob.pixIDs.test( m_matPixId )") )
      __debugbreak();
    v3 = this->m_matPixId;
    if ( v3 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_iwMemAllocatorGlob.pixIDs.m_data[v3 >> 6] |= 0x8000000000000000ui64 >> (v3 & 0x3F);
  }
}

/*
==============
IWMemAllocator::MatPixDestroy
==============
*/
void IWMemAllocator::MatPixDestroy(IWMemAllocator *this)
{
  const void *m_address; 
  unsigned __int64 _Arg2; 
  unsigned __int16 v4; 
  unsigned __int64 m_matPixId; 
  unsigned __int64 v6; 

  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    m_address = (const void *)this->m_ownedRange.m_address;
    _Arg2 = this->m_ownedRange.m_size;
    v4 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryFree, v4, m_address, _Arg2, 0i64);
    m_matPixId = this->m_matPixId;
    if ( m_matPixId >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (m_matPixId & 0x3F)) & s_iwMemAllocatorGlob.pixIDs.m_data[m_matPixId >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 773, ASSERT_TYPE_ASSERT, "(s_iwMemAllocatorGlob.pixIDs.test( m_matPixId ))", (const char *)&queryFormat, "s_iwMemAllocatorGlob.pixIDs.test( m_matPixId )") )
      __debugbreak();
    v6 = this->m_matPixId;
    if ( v6 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_iwMemAllocatorGlob.pixIDs.m_data[v6 >> 6] &= ~(0x8000000000000000ui64 >> (v6 & 0x3F));
  }
}

/*
==============
IWMemAllocator::MatPixFree
==============
*/
void IWMemAllocator::MatPixFree(IWMemAllocator *this, const unsigned __int64 address)
{
  unsigned __int16 v4; 

  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    v4 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryFree, v4, (const void *)address, 0i64, 0i64);
  }
}

/*
==============
IWMemAllocator::MatPixFreeRange
==============
*/
void IWMemAllocator::MatPixFreeRange(IWMemAllocator *this, const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int16 v6; 

  if ( IWMem_UsingMATorPIX() && this->m_type == 4 )
  {
    v6 = truncate_cast<unsigned short,unsigned int>(this->m_matPixId);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryFree, v6, (const void *)address, size, 0i64);
  }
}

/*
==============
IWMemAllocator::PopLeakDetect
==============
*/
void IWMemAllocator::PopLeakDetect(IWMemAllocator *this)
{
  if ( !this->m_pushedLeakDetect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 312, ASSERT_TYPE_ASSERT, "(m_pushedLeakDetect)", (const char *)&queryFormat, "m_pushedLeakDetect") )
    __debugbreak();
  this->m_pushedLeakDetect = 0;
  IWMem_Dump_Detail_Allocator_Leaks(this);
}

/*
==============
IWMemAllocator::PushLeakDetect
==============
*/
void IWMemAllocator::PushLeakDetect(IWMemAllocator *this)
{
  if ( this->m_pushedLeakDetect )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 301, ASSERT_TYPE_ASSERT, "(!m_pushedLeakDetect)", (const char *)&queryFormat, "!m_pushedLeakDetect") )
      __debugbreak();
    this->m_pushedLeakDetect = 1;
  }
  else
  {
    this->m_pushedLeakDetect = 1;
  }
}

/*
==============
IWMemAllocator::SetFlag
==============
*/
void IWMemAllocator::SetFlag(IWMemAllocator *this, const IWMemAllocatorFlag flag)
{
  if ( ((flag - 1) & flag) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 369, ASSERT_TYPE_ASSERT, "( ( IsPowerOf2( static_cast<uint>( flag ) ) ) )", "( flag ) = %i", flag) )
      __debugbreak();
    this->m_flags |= flag;
  }
  else
  {
    this->m_flags |= flag;
  }
}

/*
==============
IWMemAllocator::SetFreeMem
==============
*/
void IWMemAllocator::SetFreeMem(IWMemAllocator *this, const unsigned __int64 size)
{
  unsigned __int64 m_maxUsedSize; 

  if ( this->m_type != NormalSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 357, ASSERT_TYPE_ASSERT, "(m_type == IWMemAllocatorType::FreeMemory)", (const char *)&queryFormat, "m_type == IWMemAllocatorType::FreeMemory") )
    __debugbreak();
  m_maxUsedSize = this->m_maxUsedSize;
  this->m_simpleUsed = size;
  if ( m_maxUsedSize > size )
    m_maxUsedSize = size;
  this->m_maxUsedSize = m_maxUsedSize;
}

/*
==============
IWMemAllocator::SetPoolItemSize
==============
*/
void IWMemAllocator::SetPoolItemSize(IWMemAllocator *this, const unsigned __int64 size)
{
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 344, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( this->m_type != (Count|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 345, ASSERT_TYPE_ASSERT, "(m_type == IWMemAllocatorType::Pool)", (const char *)&queryFormat, "m_type == IWMemAllocatorType::Pool") )
    __debugbreak();
  if ( this->m_poolItemSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 346, ASSERT_TYPE_ASSERT, "(m_poolItemSize == 0)", (const char *)&queryFormat, "m_poolItemSize == 0") )
    __debugbreak();
  this->m_poolItemSize = size;
}

/*
==============
IWMemAllocator::TestFlag
==============
*/
bool IWMemAllocator::TestFlag(IWMemAllocator *this, const IWMemAllocatorFlag flag)
{
  if ( ((flag - 1) & flag) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 381, ASSERT_TYPE_ASSERT, "( ( IsPowerOf2( static_cast<uint>( flag ) ) ) )", "( flag ) = %i", flag) )
    __debugbreak();
  return (flag & this->m_flags) != 0;
}

/*
==============
IWMemAllocator::UnlockThreadAccess
==============
*/
void IWMemAllocator::UnlockThreadAccess(IWMemAllocator *this)
{
  if ( (this->m_flags & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 672, ASSERT_TYPE_ASSERT, "(TestFlag( IWMemAllocatorFlag::RequiresLock ))", (const char *)&queryFormat, "TestFlag( IWMemAllocatorFlag::RequiresLock )") )
    __debugbreak();
  LeaveCriticalSection(&s_iwMemAllocatorGlob.critSect);
}

/*
==============
IWMemAllocator::UseMatPix
==============
*/
bool IWMemAllocator::UseMatPix(IWMemAllocator *this)
{
  bool result; 

  result = IWMem_UsingMATorPIX();
  if ( result )
    return this->m_type == 4;
  return result;
}

/*
==============
IWMemAllocator::UseTableLogging
==============
*/
bool IWMemAllocator::UseTableLogging(IWMemAllocator *this)
{
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 
  bool result; 

  m_flags = this->m_flags;
  result = 0;
  if ( (m_flags & 2) == 0 && ((m_flags & 0x10) == 0 || IWMem_UseMaxTracking()) )
  {
    m_type = this->m_type;
    if ( m_type != (Count|0x4) && m_type != NormalSpace )
      return 1;
  }
  return result;
}

/*
==============
IWMemAllocator::UseUniqueTableEntries
==============
*/
bool IWMemAllocator::UseUniqueTableEntries(IWMemAllocator *this)
{
  return this->m_flags & 1;
}

/*
==============
IWMemAllocator::ValidateTableSize
==============
*/
void IWMemAllocator::ValidateTableSize(IWMemAllocator *this)
{
  IWMemAllocatorFlag m_flags; 
  IWMemAllocatorType m_type; 
  unsigned __int64 m_usedSize; 
  bool v5; 
  unsigned __int64 m_simpleUsed; 

  m_flags = this->m_flags;
  if ( (m_flags & 2) == 0 && ((m_flags & 0x10) == 0 || IWMem_UseMaxTracking()) )
  {
    m_type = this->m_type;
    if ( m_type != (Count|0x4) && m_type != NormalSpace )
    {
      m_usedSize = this->m_table.m_usedSize;
      if ( this->m_simpleUsed != m_usedSize )
      {
        m_simpleUsed = this->m_simpleUsed;
        if ( (this->m_flags & 0x20) != 0 )
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 710, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ValidateTableSize: %zu != %zu. Allocator '%s'.", m_simpleUsed, m_usedSize, this);
        else
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator.cpp", 706, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ValidateTableSize: %zu != %zu. Allocator '%s' likely needs the 'RequiresLock' flag.", m_simpleUsed, m_usedSize, this);
        if ( v5 )
          __debugbreak();
      }
    }
  }
}

