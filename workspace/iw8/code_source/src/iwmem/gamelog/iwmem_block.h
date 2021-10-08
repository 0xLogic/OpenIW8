/*
==============
IWMemBlock::IWMemBlock
==============
*/

void __fastcall IWMemBlock::IWMemBlock(IWMemBlock *this, const unsigned __int64 address, const unsigned __int64 size)
{
  ??0IWMemBlock@@QEAA@_K0@Z(this, address, size);
}

/*
==============
IWMemBlock::IWMemBlock
==============
*/
void IWMemBlock::IWMemBlock(IWMemBlock *this, const unsigned __int64 address, const unsigned __int64 size)
{
  this->m_address = address;
  this->m_size = size;
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
    __debugbreak();
  if ( this->m_address >= this->m_address + this->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
    __debugbreak();
}

