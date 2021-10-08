/*
==============
StreamerMemPageCounts::PagesForPool
==============
*/

unsigned int __fastcall StreamerMemPageCounts::PagesForPool(StreamerMemPageCounts *this, StreamMemPool pool)
{
  return ?PagesForPool@StreamerMemPageCounts@@QEBAIW4StreamMemPool@@@Z(this, pool);
}

/*
==============
StreamerMemPageCounts::RemovePages
==============
*/

void __fastcall StreamerMemPageCounts::RemovePages(StreamerMemPageCounts *this, StreamMemPool pool, unsigned int pageCount)
{
  ?RemovePages@StreamerMemPageCounts@@QEAAXW4StreamMemPool@@I@Z(this, pool, pageCount);
}

/*
==============
StreamerMemPageCounts::AddPages
==============
*/

void __fastcall StreamerMemPageCounts::AddPages(StreamerMemPageCounts *this, StreamMemPool pool, unsigned int pageCount)
{
  ?AddPages@StreamerMemPageCounts@@QEAAXW4StreamMemPool@@I@Z(this, pool, pageCount);
}

/*
==============
StreamerMemPageCounts::AddPages
==============
*/
void StreamerMemPageCounts::AddPages(StreamerMemPageCounts *this, StreamMemPool pool, unsigned int pageCount)
{
  __int64 v3; 
  int v7; 

  v3 = (unsigned int)pool;
  if ( (unsigned int)pool >= COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", pool, v7) )
      __debugbreak();
  }
  this->pages[v3] += pageCount;
}

/*
==============
StreamerMemPageCounts::PagesForPool
==============
*/
__int64 StreamerMemPageCounts::PagesForPool(StreamerMemPageCounts *this, StreamMemPool pool)
{
  __int64 v2; 
  int v6; 

  v2 = (unsigned int)pool;
  if ( (unsigned int)pool < COUNT )
    return this->pages[pool];
  v6 = 2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", pool, v6) )
    __debugbreak();
  return this->pages[v2];
}

/*
==============
StreamerMemPageCounts::RemovePages
==============
*/
void StreamerMemPageCounts::RemovePages(StreamerMemPageCounts *this, StreamMemPool pool, unsigned int pageCount)
{
  __int64 v3; 
  unsigned int v6; 
  _DWORD *v7; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v3 = (unsigned int)pool;
  if ( (unsigned int)pool >= COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", pool, v9) )
      __debugbreak();
  }
  v6 = this->pages[v3];
  v7 = (_DWORD *)this + v3;
  if ( v6 < pageCount )
  {
    v11 = pageCount;
    v10 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 63, ASSERT_TYPE_ASSERT, "( pages[static_cast<size_t>( pool )] ) >= ( pageCount )", "%s >= %s\n\t%u, %u", "pages[static_cast<size_t>( pool )]", "pageCount", v10, v11) )
      __debugbreak();
  }
  *v7 -= pageCount;
}

