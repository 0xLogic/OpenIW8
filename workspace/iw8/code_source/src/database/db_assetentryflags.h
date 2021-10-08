/*
==============
DB_AssetEntryFlags::Reset
==============
*/

void __fastcall DB_AssetEntryFlags::Reset(DB_AssetEntryFlags *this, unsigned int index)
{
  ?Reset@DB_AssetEntryFlags@@QEAAXI@Z(this, index);
}

/*
==============
DB_AssetEntryFlags::Test
==============
*/

bool __fastcall DB_AssetEntryFlags::Test(DB_AssetEntryFlags *this, unsigned int index)
{
  return ?Test@DB_AssetEntryFlags@@QEBA_NI@Z(this, index);
}

/*
==============
DB_AssetEntryFlags::Set
==============
*/

void __fastcall DB_AssetEntryFlags::Set(DB_AssetEntryFlags *this, unsigned int index)
{
  ?Set@DB_AssetEntryFlags@@QEAAXI@Z(this, index);
}

/*
==============
DB_AssetEntryFlags::Reset
==============
*/
void DB_AssetEntryFlags::Reset(DB_AssetEntryFlags *this, unsigned int index)
{
  unsigned __int64 v2; 

  v2 = index;
  if ( index >= 0x5DA00ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  this->m_flags.m_data[v2 >> 6] &= ~(0x8000000000000000ui64 >> (v2 & 0x3F));
}

/*
==============
DB_AssetEntryFlags::Set
==============
*/
void DB_AssetEntryFlags::Set(DB_AssetEntryFlags *this, unsigned int index)
{
  unsigned __int64 v2; 

  v2 = index;
  if ( index >= 0x5DA00ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  this->m_flags.m_data[v2 >> 6] |= 0x8000000000000000ui64 >> (v2 & 0x3F);
}

/*
==============
DB_AssetEntryFlags::Test
==============
*/
bool DB_AssetEntryFlags::Test(DB_AssetEntryFlags *this, unsigned int index)
{
  unsigned __int64 v2; 

  v2 = index;
  if ( index >= 0x5DA00ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return ((0x8000000000000000ui64 >> (v2 & 0x3F)) & this->m_flags.m_data[v2 >> 6]) != 0;
}

