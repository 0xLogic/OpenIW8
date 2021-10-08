/*
==============
DenseGrid::GetLastAABBQuery
==============
*/

void __fastcall DenseGrid::GetLastAABBQuery(DenseGrid *this, vec2_t *outMin, vec2_t *outMax)
{
  ?GetLastAABBQuery@DenseGrid@@QEBAXAEATvec2_t@@0@Z(this, outMin, outMax);
}

/*
==============
DenseGrid::PageIterator::Advance
==============
*/

bool __fastcall DenseGrid::PageIterator::Advance(DenseGrid::PageIterator *iter)
{
  return ?Advance@PageIterator@DenseGrid@@SA_NPEAV12@@Z(iter);
}

/*
==============
DenseGrid::GetAllocationSize
==============
*/

unsigned int __fastcall DenseGrid::GetAllocationSize(const DenseGridConfig *config, const bool useOldCellSizeCalc)
{
  return ?GetAllocationSize@DenseGrid@@SAIAEBUDenseGridConfig@@_N@Z(config, useOldCellSizeCalc);
}

/*
==============
DenseGrid::GetCellBounds
==============
*/

void __fastcall DenseGrid::GetCellBounds(DenseGrid *this, const unsigned __int16 cellIndex, vec2_t *outMin, vec2_t *outMax)
{
  ?GetCellBounds@DenseGrid@@QEBAXGAEATvec2_t@@0@Z(this, cellIndex, outMin, outMax);
}

/*
==============
DenseGrid::CellIterator::Init
==============
*/

void __fastcall DenseGrid::CellIterator::Init(DenseGrid::CellIterator *iter, const DenseGrid *grid, const unsigned __int16 rowOffset, const unsigned __int16 columnOffset, const unsigned __int16 numRows, const unsigned __int16 numColumns)
{
  ?Init@CellIterator@DenseGrid@@SAXPEAV12@PEBV2@GGGG@Z(iter, grid, rowOffset, columnOffset, numRows, numColumns);
}

/*
==============
DenseGrid::Write
==============
*/

void __fastcall DenseGrid::Write(DenseGrid *this, MemoryFile *memFile)
{
  ?Write@DenseGrid@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
DenseGrid::IsInitialized
==============
*/

bool __fastcall DenseGrid::IsInitialized(DenseGrid *this)
{
  return ?IsInitialized@DenseGrid@@QEBA_NXZ(this);
}

/*
==============
DenseGrid::Init
==============
*/

void __fastcall DenseGrid::Init(DenseGrid *this, const DenseGridConfig *config, const bool useOldCellSizeCalc, HunkUser *hunkUser)
{
  ?Init@DenseGrid@@QEAAXAEBUDenseGridConfig@@_NPEAUHunkUser@@@Z(this, config, useOldCellSizeCalc, hunkUser);
}

/*
==============
DenseGrid::DenseGrid
==============
*/

void __fastcall DenseGrid::DenseGrid(DenseGrid *this)
{
  ??0DenseGrid@@QEAA@XZ(this);
}

/*
==============
DenseGrid::CellSize
==============
*/

const vec2_t *__fastcall DenseGrid::CellSize(DenseGrid *this)
{
  return ?CellSize@DenseGrid@@QEBAAEBTvec2_t@@XZ(this);
}

/*
==============
DenseGrid::Insert
==============
*/

unsigned __int16 __fastcall DenseGrid::Insert(DenseGrid *this, const unsigned int key, const vec2_t *pos)
{
  return ?Insert@DenseGrid@@QEAAGIAEBTvec2_t@@@Z(this, key, pos);
}

/*
==============
DenseGrid::NumColumns
==============
*/

unsigned __int16 __fastcall DenseGrid::NumColumns(DenseGrid *this)
{
  return ?NumColumns@DenseGrid@@QEBAGXZ(this);
}

/*
==============
DenseGrid::NumRows
==============
*/

unsigned __int16 __fastcall DenseGrid::NumRows(DenseGrid *this)
{
  return ?NumRows@DenseGrid@@QEBAGXZ(this);
}

/*
==============
DenseGrid::Config
==============
*/

const DenseGridConfig *__fastcall DenseGrid::Config(DenseGrid *this)
{
  return ?Config@DenseGrid@@QEBAAEBUDenseGridConfig@@XZ(this);
}

/*
==============
DenseGrid::Destroy
==============
*/

void __fastcall DenseGrid::Destroy(DenseGrid *this)
{
  ?Destroy@DenseGrid@@QEAAXXZ(this);
}

/*
==============
DenseGrid::CellIterator::Advance
==============
*/

bool __fastcall DenseGrid::CellIterator::Advance(DenseGrid::CellIterator *iter)
{
  return ?Advance@CellIterator@DenseGrid@@SA_NPEAV12@@Z(iter);
}

/*
==============
DenseGrid::PageIterator::GetKeys
==============
*/

unsigned int __fastcall DenseGrid::PageIterator::GetKeys(DenseGrid::PageIterator *this, const unsigned int maxOutKeys, unsigned int *outKeys)
{
  return ?GetKeys@PageIterator@DenseGrid@@QEBAIIPEAI@Z(this, maxOutKeys, outKeys);
}

/*
==============
DenseGrid::PageIterator::Init
==============
*/

void __fastcall DenseGrid::PageIterator::Init(DenseGrid::PageIterator *iter, const DenseGrid *grid, const unsigned __int16 cellIndex)
{
  ?Init@PageIterator@DenseGrid@@SAXPEAV12@PEBV2@G@Z(iter, grid, cellIndex);
}

/*
==============
DenseGrid::Read
==============
*/

void __fastcall DenseGrid::Read(DenseGrid *this, MemoryFile *memFile)
{
  ?Read@DenseGrid@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
DenseGrid::NumCells
==============
*/

unsigned __int16 __fastcall DenseGrid::NumCells(DenseGrid *this)
{
  return ?NumCells@DenseGrid@@QEBAGXZ(this);
}

/*
==============
DenseGrid::Remove
==============
*/

void __fastcall DenseGrid::Remove(DenseGrid *this, const unsigned int key, const unsigned __int16 cellIndex)
{
  ?Remove@DenseGrid@@QEAAXIG@Z(this, key, cellIndex);
}

/*
==============
DenseGrid::Update
==============
*/

unsigned __int16 __fastcall DenseGrid::Update(DenseGrid *this, const unsigned int key, const unsigned __int16 cellIndex, const vec2_t *pos)
{
  return ?Update@DenseGrid@@QEAAGIGAEBTvec2_t@@@Z(this, key, cellIndex, pos);
}

/*
==============
DenseGrid::FindInAABB
==============
*/

void __fastcall DenseGrid::FindInAABB(DenseGrid *this, const vec2_t *min, const vec2_t *max, DenseGrid::CellIterator *outIter)
{
  ?FindInAABB@DenseGrid@@QEBAXAEBTvec2_t@@0AEAVCellIterator@1@@Z(this, min, max, outIter);
}

/*
==============
DenseGrid::DenseGrid
==============
*/
void DenseGrid::DenseGrid(DenseGrid *this)
{
  this->m_impl = NULL;
}

/*
==============
DenseGrid::CellIterator::Advance
==============
*/
char DenseGrid::CellIterator::Advance(DenseGrid::CellIterator *iter)
{
  unsigned __int16 m_currentRowIndex; 
  char result; 
  unsigned __int16 m_currentColumnIndex; 
  const DenseGrid *m_grid; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  __int16 v8; 

  if ( !iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 886, ASSERT_TYPE_ASSERT, "( ( iter != nullptr ) )", "( iter ) = %p", NULL) )
    __debugbreak();
  m_currentRowIndex = iter->m_currentRowIndex;
  if ( m_currentRowIndex < iter->m_numRows )
  {
    m_currentColumnIndex = iter->m_currentColumnIndex;
    m_grid = iter->m_grid;
    v6 = m_currentRowIndex + iter->m_rowOffset;
    v7 = m_currentColumnIndex + iter->m_columnOffset;
    iter->m_currentRow = v6;
    iter->m_currentColumn = v7;
    ++m_currentColumnIndex;
    v8 = v6 * m_grid->m_impl->numColumns;
    iter->m_currentColumnIndex = m_currentColumnIndex;
    iter->m_currentCellIndex = v7 + v8;
    if ( m_currentColumnIndex >= iter->m_numColumns )
    {
      iter->m_currentColumnIndex = 0;
      iter->m_currentRowIndex = m_currentRowIndex + 1;
    }
    return 1;
  }
  else
  {
    result = 0;
    iter->m_currentCellIndex = -1;
  }
  return result;
}

/*
==============
DenseGrid::PageIterator::Advance
==============
*/
bool DenseGrid::PageIterator::Advance(DenseGrid::PageIterator *iter)
{
  unsigned __int16 m_nextPageIndex; 
  unsigned __int16 nextPageIndex; 
  bool result; 

  if ( !iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 834, ASSERT_TYPE_ASSERT, "( ( iter != nullptr ) )", "( iter ) = %p", NULL) )
    __debugbreak();
  if ( iter->m_cellIndex == 0xFFFF )
    return 0;
  if ( iter->m_currentPageIndex == 0xFFFF )
    return 0;
  m_nextPageIndex = iter->m_nextPageIndex;
  iter->m_currentPageIndex = m_nextPageIndex;
  if ( m_nextPageIndex == 0xFFFF )
    return 0;
  nextPageIndex = iter->m_grid->m_impl->pages[m_nextPageIndex].nextPageIndex;
  result = 1;
  iter->m_nextPageIndex = nextPageIndex;
  return result;
}

/*
==============
DenseGrid::CellSize
==============
*/
vec2_t *DenseGrid::CellSize(DenseGrid *this)
{
  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 662, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  return &this->m_impl->cellSize;
}

/*
==============
DenseGrid::Config
==============
*/
DenseGridImpl *DenseGrid::Config(DenseGrid *this)
{
  if ( this->m_impl )
    return this->m_impl;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 669, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  return this->m_impl;
}

/*
==============
DenseGridKeyCompare
==============
*/
__int64 DenseGridKeyCompare(const void *left, const void *right)
{
  if ( *(_DWORD *)left >= *(_DWORD *)right )
    return *(_DWORD *)left > *(_DWORD *)right;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
DenseGrid_AllocPageForCell
==============
*/
DenseGridPage *DenseGrid_AllocPageForCell(DenseGridImpl *impl, DenseGridCell *cell)
{
  unsigned __int16 firstFreePageIndex; 
  DenseGridPage *pages; 
  DenseGridPage *v6; 
  __int64 nextPageIndex; 
  unsigned __int16 tail; 
  DenseGridPage *v9; 
  unsigned __int16 v10; 
  unsigned __int8 pageSize; 
  __int64 v12; 
  __int64 v13; 

  firstFreePageIndex = impl->firstFreePageIndex;
  if ( firstFreePageIndex == 0xFFFF )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED6D80, 840i64);
    return 0i64;
  }
  else
  {
    pages = impl->pages;
    v6 = &pages[firstFreePageIndex];
    nextPageIndex = v6->nextPageIndex;
    impl->firstFreePageIndex = nextPageIndex;
    pages[nextPageIndex].prevPageIndex = -1;
    v6->nextPageIndex = -1;
    tail = cell->tail;
    if ( tail == 0xFFFF || (v9 = &impl->pages[tail]) == NULL )
    {
      if ( cell->head != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 186, ASSERT_TYPE_ASSERT, "( cell.head ) == ( DenseGrid::INVALID_PAGE_INDEX )", "%s == %s\n\t%i, %i", "cell.head", "DenseGrid::INVALID_PAGE_INDEX", cell->head, 0xFFFF) )
        __debugbreak();
      v10 = cell->tail;
      if ( v10 != 0xFFFF )
      {
        LODWORD(v13) = 0xFFFF;
        LODWORD(v12) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 187, ASSERT_TYPE_ASSERT, "( cell.tail ) == ( DenseGrid::INVALID_PAGE_INDEX )", "%s == %s\n\t%i, %i", "cell.tail", "DenseGrid::INVALID_PAGE_INDEX", v12, v13) )
          __debugbreak();
      }
      v6->prevPageIndex = -1;
      cell->head = firstFreePageIndex;
    }
    else
    {
      v9->nextPageIndex = firstFreePageIndex;
      v6->prevPageIndex = cell->tail;
    }
    cell->tail = firstFreePageIndex;
    pageSize = v6->pageSize;
    if ( pageSize )
    {
      LODWORD(v12) = pageSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 199, ASSERT_TYPE_ASSERT, "( page.pageSize ) == ( 0 )", "%s == %s\n\t%u, %u", "page.pageSize", "0", v12, 0i64) )
        __debugbreak();
    }
    return v6;
  }
}

/*
==============
DenseGrid_ComputeCellColumn
==============
*/

__int64 __fastcall DenseGrid_ComputeCellColumn(const DenseGridImpl *impl, double x)
{
  int numColumns; 
  int v5; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  numColumns = impl->numColumns;
  __asm { vsubss  xmm0, xmm1, dword ptr [rcx+4]; val }
  v5 = float_to_integral_cast<int,float>(*(float *)&_XMM0) >> impl->powerOfTwo;
  if ( numColumns - 1 < 0 )
  {
    v10 = numColumns - 1;
    v9 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  if ( numColumns <= v5 )
    v5 = numColumns - 1;
  if ( v5 < 0 )
    v5 = 0;
  v6 = truncate_cast<unsigned short,int>(v5);
  v7 = impl->numColumns;
  if ( v6 >= v7 )
  {
    v12 = v7;
    v11 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 100, ASSERT_TYPE_ASSERT, "( column ) < ( impl.numColumns )", "%s < %s\n\t%i, %i", "column", "impl.numColumns", v11, v12) )
      __debugbreak();
  }
  return v6;
}

/*
==============
DenseGrid_ComputeCellForPos
==============
*/
__int64 DenseGrid_ComputeCellForPos(const DenseGridImpl *impl, const vec2_t *pos)
{
  __int16 v5; 
  __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 numCells; 
  unsigned __int16 v10; 
  int v12; 
  int v13; 

  __asm { vmovss  xmm1, dword ptr [rdx]; x }
  _RBX = pos;
  v5 = DenseGrid_ComputeCellColumn(impl, *(double *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+4]; y }
  v7 = v5;
  v8 = DenseGrid_ComputeCellRow(impl, *(const float *)&_XMM1);
  numCells = impl->numCells;
  v10 = v7 + v8 * impl->numColumns;
  if ( v10 >= numCells )
  {
    v13 = numCells;
    v12 = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 124, ASSERT_TYPE_ASSERT, "( cellIndex ) < ( impl.numCells )", "%s < %s\n\t%i, %i", "cellIndex", "impl.numCells", v12, v13) )
      __debugbreak();
  }
  return v10;
}

/*
==============
DenseGrid_ComputeCellRow
==============
*/

__int64 __fastcall DenseGrid_ComputeCellRow(const DenseGridImpl *impl, double y)
{
  int numRows; 
  int v5; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  numRows = impl->numRows;
  __asm { vsubss  xmm0, xmm1, dword ptr [rcx+8]; val }
  v5 = float_to_integral_cast<int,float>(*(float *)&_XMM0) >> impl->powerOfTwo;
  if ( numRows - 1 < 0 )
  {
    v10 = numRows - 1;
    v9 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  if ( numRows <= v5 )
    v5 = numRows - 1;
  if ( v5 < 0 )
    v5 = 0;
  v6 = truncate_cast<unsigned short,int>(v5);
  v7 = impl->numRows;
  if ( v6 >= v7 )
  {
    v12 = v7;
    v11 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 114, ASSERT_TYPE_ASSERT, "( row ) < ( impl.numRows )", "%s < %s\n\t%i, %i", "row", "impl.numRows", v11, v12) )
      __debugbreak();
  }
  return v6;
}

/*
==============
DenseGrid_FindKeyInCell
==============
*/
char DenseGrid_FindKeyInCell(const DenseGridImpl *impl, const DenseGridCell *cell, const unsigned int *key, unsigned __int16 *outPageIndex, unsigned __int16 *outKeyIndex)
{
  unsigned __int16 head; 
  DenseGridPage *v7; 
  unsigned int *keys; 
  __int64 v9; 
  __int64 v10; 
  __int64 v12; 

  head = cell->head;
  *outPageIndex = cell->head;
  if ( head == 0xFFFF )
    return 0;
  while ( 1 )
  {
    v7 = &impl->pages[head];
    keys = v7->keys;
    v9 = (4i64 * v7->pageSize) >> 2;
    while ( v9 > 0 )
    {
      v10 = v9 >> 1;
      if ( keys[v9 >> 1] >= *key )
      {
        v9 >>= 1;
      }
      else
      {
        keys += v10 + 1;
        v9 += -1 - v10;
      }
    }
    if ( keys != &v7->keys[v7->pageSize] && *keys == *key )
      break;
    head = v7->nextPageIndex;
    *outPageIndex = head;
    if ( head == 0xFFFF )
      return 0;
  }
  v12 = ((char *)keys - (char *)v7 - 8) >> 2;
  if ( (v12 < 0 || (unsigned __int64)v12 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v12, "signed", v12) )
    __debugbreak();
  *outKeyIndex = v12;
  return 1;
}

/*
==============
DenseGrid_Initialize
==============
*/
void DenseGrid_Initialize(const DenseGridConfig *config, DenseGridImpl *outImpl)
{
  unsigned int v9; 
  const DenseGridConfig *v11; 
  bool v21; 
  bool v27; 
  bool v31; 
  unsigned int powerOfTwo; 
  bool v37; 
  char v38; 
  char v45; 
  char v46; 
  bool v47; 
  bool v49; 
  char v53; 
  char v54; 
  unsigned __int16 v55; 
  unsigned __int16 numCells; 
  bool v57; 
  bool v58; 
  bool v61; 
  int v68; 
  int numColumns; 
  int v70; 
  int v75; 
  unsigned int numRows; 
  unsigned int v77; 
  bool v78; 
  bool v79; 
  bool v85; 
  bool v91; 
  bool v102; 
  unsigned int v112; 
  int populationMax; 
  unsigned __int16 v114; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  double v125; 
  double v126; 
  double v127; 
  double v128; 
  double v129; 
  double v130; 
  double v131; 
  double v132; 
  double v133; 
  double v134; 
  __int64 v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  char v145; 
  void *retaddr; 
  vec2_t v147; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v9 = 0;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RDI = outImpl;
  __asm { vmovaps xmmword ptr [rax-68h], xmm9 }
  v11 = config;
  __asm { vmovaps xmmword ptr [rax-78h], xmm10 }
  outImpl->config.worldMin = config->worldMin;
  __asm
  {
    vmovaps [rsp+0D8h+var_88], xmm11
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@48800000
    vmovss  xmm9, cs:__real@c8000000
    vmovss  xmm10, cs:__real@48000000
    vmovss  dword ptr [rdx+0Ch], xmm0
  }
  outImpl->config.worldMax.v[1] = config->worldMax.v[1];
  __asm
  {
    vsubss  xmm0, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rdx+1Ch], xmm0
    vmovss  xmm1, dword ptr [rdx+10h]
    vsubss  xmm0, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [rdx+20h], xmm0
    vxorps  xmm11, xmm11, xmm11
  }
  v21 = 1;
  do
  {
    _RSI = (int)v9;
    __asm { vcomiss xmm11, dword ptr [rdi+rsi*4+1Ch] }
    if ( v21 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rsi*4+1Ch]
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm8
      }
    }
    else
    {
      Com_PrintWarning(15, "DenseGrid_Initialize: Initialized to zero or negative length world bounds for Axis:%d. Fallback behavior will default to use +/- 128K (map limits). This will likely take much more memory than requried  Check the broadphase brush.\n", v9);
      _RDI->config.worldMin.v[v9] = -131072.0;
      _RDI->config.worldMax.v[v9] = 131072.0;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rsi*4+0Ch]
      vsubss  xmm6, xmm0, dword ptr [rdi+rsi*4+4]
    }
    ++v9;
    __asm { vmovss  dword ptr [rdi+rsi*4+1Ch], xmm6 }
    v21 = v9 < 2;
    v27 = v9 <= 2;
  }
  while ( v9 < 2 );
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vcomiss xmm0, xmm11
    vxorpd  xmm9, xmm9, xmm9
  }
  if ( v9 <= 2 )
  {
    __asm
    {
      vmovsd  [rsp+0D8h+var_98], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_A0], xmm0
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 277, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.x", "0.f", v125, v136);
    v27 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vcomiss xmm0, xmm11
  }
  if ( v27 )
  {
    __asm
    {
      vmovsd  [rsp+0D8h+var_98], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_A0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 278, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.y", "0.f", v126, v137) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@4b800000
    vmovss  xmm7, cs:__real@477fff00
  }
  _RDI->config.populationMax = v11->populationMax;
  powerOfTwo = 7;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    v37 = __CFSHL__(1, powerOfTwo + 1);
    v38 = v37 || 1 << (powerOfTwo + 1) == 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsp+0D8h+arg_0], xmm0
      vmovss  dword ptr [rsp+0D8h+arg_0+4], xmm0
      vmovss  xmm0, dword ptr [rdi+1Ch]
    }
    _RDI->cellSize = v147;
    __asm
    {
      vdivss  xmm2, xmm0, dword ptr [rdi+14h]
      vroundss xmm0, xmm8, xmm2, 2
      vcomiss xmm0, xmm11
    }
    _RDI->powerOfTwo = powerOfTwo + 1;
    __asm { vcvttss2si esi, xmm0 }
    if ( v37 )
      goto LABEL_16;
    __asm { vcomiss xmm0, xmm6 }
    if ( !__CFSHL__(1, powerOfTwo + 1) && 1 << (powerOfTwo + 1) != 0 )
    {
LABEL_16:
      v45 = 0;
      v37 = 0;
      v38 = 1;
    }
    else
    {
      v45 = 1;
    }
    __asm { vcomiss xmm0, xmm11 }
    if ( v37 )
      goto LABEL_20;
    __asm { vcomiss xmm0, xmm7 }
    if ( !v38 )
LABEL_20:
      v46 = 0;
    else
      v46 = 1;
    if ( !v45 || (v47 = v46 == 0, !v46) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_A0], xmm0
      }
      v49 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned short __cdecl float_to_integral_cast<unsigned short,float>(float)", (unsigned __int16)_ESI, v127);
      v47 = !v49;
      if ( v49 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+20h]
      vdivss  xmm2, xmm0, dword ptr [rdi+18h]
      vroundss xmm0, xmm8, xmm2, 2
      vcomiss xmm0, xmm11
    }
    _RDI->numColumns = _ESI;
    __asm
    {
      vcvttss2si ebx, xmm0
      vcomiss xmm0, xmm6
    }
    if ( v47 )
    {
      v53 = 1;
    }
    else
    {
      v53 = 0;
      v47 = 1;
    }
    __asm
    {
      vcomiss xmm0, xmm11
      vcomiss xmm0, xmm7
    }
    v54 = v47;
    if ( !v53 || !v54 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_A0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned short __cdecl float_to_integral_cast<unsigned short,float>(float)", (unsigned __int16)_EBX, v128) )
        __debugbreak();
      LOWORD(_ESI) = _RDI->numColumns;
    }
    _RDI->numRows = _EBX;
    if ( (unsigned __int16)_ESI * (unsigned int)(unsigned __int16)_EBX <= 0x4000 )
      break;
    powerOfTwo = _RDI->powerOfTwo;
  }
  while ( powerOfTwo < 0x12 );
  v55 = truncate_cast<unsigned short,int>((unsigned __int16)_ESI * (unsigned __int16)_EBX);
  _RDI->numCells = v55;
  if ( v55 > 0x4000u )
  {
    LODWORD(v135) = 0x4000;
    LODWORD(v124) = v55;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 306, ASSERT_TYPE_ASSERT, "( outImpl.numCells ) <= ( DENSE_GRID_MAX_NUM_CELLS )", "%s <= %s\n\t%u, %u", "outImpl.numCells", "DENSE_GRID_MAX_NUM_CELLS", v124, v135) )
      __debugbreak();
  }
  if ( !_RDI->numRows )
  {
    LODWORD(v124) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 308, ASSERT_TYPE_ASSERT, "( outImpl.numRows ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numRows", "0", v124, 0i64) )
      __debugbreak();
  }
  if ( !_RDI->numColumns )
  {
    LODWORD(v124) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 309, ASSERT_TYPE_ASSERT, "( outImpl.numColumns ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numColumns", "0", v124, 0i64) )
      __debugbreak();
  }
  numCells = _RDI->numCells;
  v57 = numCells == 0;
  if ( !numCells )
  {
    LODWORD(v124) = 0;
    v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 310, ASSERT_TYPE_ASSERT, "( outImpl.numCells ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numCells", "0", v124, 0i64);
    v57 = !v58;
    if ( v58 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vcomiss xmm0, xmm11
  }
  if ( v57 )
  {
    __asm
    {
      vmovsd  [rsp+0D8h+var_98], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_A0], xmm0
    }
    v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 311, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.x", "0.f", v129, v138);
    v57 = !v61;
    if ( v61 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vcomiss xmm0, xmm11
  }
  if ( v57 )
  {
    __asm
    {
      vmovsd  [rsp+0D8h+var_98], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_A0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 312, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.y", "0.f", v130, v139) )
      __debugbreak();
  }
  __asm { vmovaps xmm0, xmm11; val }
  if ( float_to_integral_cast<int,float>(*(float *)&_XMM0) >> _RDI->powerOfTwo )
  {
    __asm { vmovaps xmm0, xmm11; val }
    LODWORD(v124) = float_to_integral_cast<int,float>(*(float *)&_XMM0) >> _RDI->powerOfTwo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 318, ASSERT_TYPE_ASSERT, "( DenseGrid_ComputeCellColumn_Unclamped( outImpl, outImpl.config.worldMin.x ) ) == ( 0 )", "%s == %s\n\t%i, %i", "DenseGrid_ComputeCellColumn_Unclamped( outImpl, outImpl.config.worldMin.x )", "0", v124, 0i64) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vsubss  xmm0, xmm0, dword ptr [rdi+4]; val
  }
  v68 = float_to_integral_cast<int,float>(*(float *)&_XMM0);
  numColumns = _RDI->numColumns;
  v70 = v68 >> _RDI->powerOfTwo;
  if ( v70 != numColumns && v70 != numColumns - 1 )
  {
    LODWORD(v123) = _RDI->numColumns;
    LODWORD(v122) = v70;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 320, ASSERT_TYPE_ASSERT, "( worldMaxXColumn == outImpl.numColumns || worldMaxXColumn == outImpl.numColumns - 1 )", "DenseGrid_Init validation failed. worldMaxXColumn (%i), numColumns (%i)", v122, v123) )
      __debugbreak();
  }
  __asm { vmovaps xmm0, xmm11; val }
  if ( float_to_integral_cast<int,float>(*(float *)&_XMM0) >> _RDI->powerOfTwo )
  {
    __asm { vmovaps xmm0, xmm11; val }
    LODWORD(v124) = float_to_integral_cast<int,float>(*(float *)&_XMM0) >> _RDI->powerOfTwo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 322, ASSERT_TYPE_ASSERT, "( DenseGrid_ComputeCellRow_Unclamped( outImpl, outImpl.config.worldMin.y ) ) == ( 0 )", "%s == %s\n\t%i, %i", "DenseGrid_ComputeCellRow_Unclamped( outImpl, outImpl.config.worldMin.y )", "0", v124, 0i64) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vsubss  xmm0, xmm0, dword ptr [rdi+8]; val
  }
  v75 = float_to_integral_cast<int,float>(*(float *)&_XMM0);
  numRows = _RDI->numRows;
  v77 = v75 >> _RDI->powerOfTwo;
  v78 = v77 <= numRows;
  if ( v77 != numRows )
  {
    v78 = v77 <= numRows - 1;
    if ( v77 != numRows - 1 )
    {
      LODWORD(v123) = _RDI->numRows;
      LODWORD(v122) = v77;
      v79 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 324, ASSERT_TYPE_ASSERT, "( worldMaxYRow == outImpl.numRows || worldMaxYRow == outImpl.numRows - 1 )", "DenseGrid_Init validation failed. worldMaxYRow (%i), numRows (%i)", v122, v123);
      v78 = !v79;
      if ( v79 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+1Ch]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rdi+14h]
    vcomiss xmm2, xmm1
  }
  if ( !v78 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_98], xmm0
      vcvtss2sd xmm1, xmm2, xmm2
      vmovsd  [rsp+0D8h+var_A0], xmm1
    }
    v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 328, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.x ) <= ( outImpl.cellSize.x * outImpl.numColumns )", "%s <= %s\n\t%g, %g", "outImpl.worldSize.x", "outImpl.cellSize.x * outImpl.numColumns", v131, v140);
    v78 = !v85;
    if ( v85 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+20h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]
    vcomiss xmm2, xmm1
  }
  if ( !v78 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_98], xmm0
      vcvtss2sd xmm1, xmm2, xmm2
      vmovsd  [rsp+0D8h+var_A0], xmm1
    }
    v91 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 329, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.y ) <= ( outImpl.cellSize.y * outImpl.numRows )", "%s <= %s\n\t%g, %g", "outImpl.worldSize.y", "outImpl.cellSize.y * outImpl.numRows", v132, v141);
    v78 = !v91;
    if ( v91 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, dword ptr [rdi+14h]
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vcomiss xmm4, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rdi+18h]
    vmovss  dword ptr [rdi+20h], xmm1
    vmovss  dword ptr [rdi+1Ch], xmm2
  }
  if ( !v78 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm3, xmm3
      vmovsd  [rsp+0D8h+var_98], xmm0
      vcvtss2sd xmm1, xmm4, xmm4
      vmovsd  [rsp+0D8h+var_A0], xmm1
    }
    v102 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 332, ASSERT_TYPE_ASSERT, "( outImpl.config.worldMax.x ) <= ( outImpl.config.worldMin.x + outImpl.worldSize.x )", "%s <= %s\n\t%g, %g", "outImpl.config.worldMax.x", "outImpl.config.worldMin.x + outImpl.worldSize.x", v133, v142);
    v78 = !v102;
    if ( v102 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  xmm2, dword ptr [rdi+10h]
    vcomiss xmm2, xmm1
  }
  if ( !v78 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_98], xmm0
      vcvtss2sd xmm1, xmm2, xmm2
      vmovsd  [rsp+0D8h+var_A0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 333, ASSERT_TYPE_ASSERT, "( outImpl.config.worldMax.y ) <= ( outImpl.config.worldMin.y + outImpl.worldSize.y )", "%s <= %s\n\t%g, %g", "outImpl.config.worldMax.y", "outImpl.config.worldMin.y + outImpl.worldSize.y", v134, v143) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  xmm2, dword ptr [rdi+8]
    vaddss  xmm0, xmm2, dword ptr [rdi+20h]
    vmovss  dword ptr [rdi+10h], xmm0
  }
  v112 = _RDI->numCells;
  populationMax = v11->populationMax;
  if ( v11->populationMax >= v112 )
    populationMax = v112 + ((unsigned int)(populationMax + 31) >> 5);
  if ( populationMax < 1 )
    populationMax = 1;
  v114 = truncate_cast<unsigned short,int>(populationMax);
  _R11 = &v145;
  _RDI->numPages = v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  _RDI->firstFreePageIndex = 0;
  _RDI->cells = NULL;
  _RDI->pages = NULL;
  _RDI->lastAABBQueryMin = vec2_origin;
  _RDI->lastAABBQueryMax = vec2_origin;
}

/*
==============
DenseGrid_Initialize_OldVersion
==============
*/
void DenseGrid_Initialize_OldVersion(const DenseGridConfig *config, DenseGridImpl *outImpl)
{
  unsigned int v9; 
  const DenseGridConfig *v11; 
  bool v21; 
  bool v27; 
  bool v31; 
  unsigned int v35; 
  int v36; 
  bool v37; 
  bool v38; 
  bool v39; 
  unsigned int v53; 
  unsigned __int16 numRows; 
  unsigned __int16 numColumns; 
  bool v56; 
  bool v57; 
  bool v60; 
  int populationMax; 
  unsigned int numCells; 
  unsigned __int16 v65; 
  __int64 v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  __int64 v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v9 = 0;
  __asm { vmovaps xmmword ptr [rax-68h], xmm8 }
  _RDI = outImpl;
  __asm { vmovaps xmmword ptr [rax-78h], xmm9 }
  v11 = config;
  outImpl->config.worldMin = config->worldMin;
  __asm
  {
    vmovaps [rsp+0E8h+var_88], xmm10
    vmovaps [rsp+0E8h+var_98], xmm11
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@48800000
    vmovss  xmm9, cs:__real@c8000000
    vmovss  xmm10, cs:__real@48000000
    vmovss  dword ptr [rdx+0Ch], xmm0
  }
  outImpl->config.worldMax.v[1] = config->worldMax.v[1];
  __asm
  {
    vsubss  xmm0, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rdx+1Ch], xmm0
    vmovss  xmm1, dword ptr [rdx+10h]
    vsubss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [rdx+20h], xmm2
    vxorps  xmm11, xmm11, xmm11
  }
  v21 = 0;
  do
  {
    _RSI = (int)v9;
    __asm { vucomiss xmm11, dword ptr [rdi+rsi*4+1Ch] }
    if ( v21 )
    {
      Com_PrintWarning(15, "DenseGrid_Initialize: Initialized to zero length world bounds for Axis:%d. Fallback behavior will default to use +/- 128K (map limits). This will likely take much more memory than requried  Check the broadphase brush.\n", v9);
      _RDI->config.worldMin.v[v9] = -131072.0;
      _RDI->config.worldMax.v[v9] = 131072.0;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rsi*4+1Ch]
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm8
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rsi*4+0Ch]
      vsubss  xmm6, xmm0, dword ptr [rdi+rsi*4+4]
    }
    ++v9;
    __asm { vmovss  dword ptr [rdi+rsi*4+1Ch], xmm6 }
    v21 = v9 == 2;
    v27 = v9 <= 2;
  }
  while ( v9 < 2 );
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vcomiss xmm0, xmm11
    vxorpd  xmm7, xmm7, xmm7
  }
  if ( v9 <= 2 )
  {
    __asm
    {
      vmovsd  [rsp+0E8h+var_A8], xmm7
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm0
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 381, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.x", "0.f", v74, v79);
    v27 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vcomiss xmm0, xmm11
  }
  if ( v27 )
  {
    __asm
    {
      vmovsd  [rsp+0E8h+var_A8], xmm7
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 382, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.y", "0.f", v75, v80) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm6, cs:__real@43800000
  }
  v35 = 7;
  _RDI->config.populationMax = v11->populationMax;
  v36 = 128;
  do
  {
    if ( v36 < 0 || (v37 = (unsigned int)v36 < 0xFFFF, v38 = (unsigned int)v36 <= 0xFFFF, (unsigned int)v36 > 0xFFFF) )
    {
      v39 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v36, "signed", v36);
      v37 = 0;
      v38 = !v39;
      if ( v39 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm2, xmm1, dword ptr [rdi+1Ch]
      vcomiss xmm2, xmm6
      vmovss  dword ptr [rdi+14h], xmm2
      vmulss  xmm0, xmm1, dword ptr [rdi+20h]
      vmovss  dword ptr [rdi+18h], xmm0
    }
    if ( !v37 )
    {
      __asm { vcomiss xmm6, xmm0 }
      if ( v38 )
        break;
    }
    v36 = __ROR4__(v36, 1);
    --v35;
  }
  while ( v35 );
  if ( v35 > 7 )
  {
    LODWORD(v78) = 7;
    LODWORD(v73) = v35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 408, ASSERT_TYPE_ASSERT, "( rowsPowerOfTwo ) <= ( DENSE_GRID_MAX_NUM_ROWS_POWER )", "%s <= %s\n\t%i, %i", "rowsPowerOfTwo", "DENSE_GRID_MAX_NUM_ROWS_POWER", v73, v78) )
      __debugbreak();
  }
  _RDI->numColumns = truncate_cast<unsigned short,int>(1 << v35);
  _RDI->numRows = truncate_cast<unsigned short,int>(1 << v35);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rdi+14h], xmm1
    vmovss  xmm0, dword ptr [rdi+20h]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ecx
    vdivss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rdi+18h], xmm1
    vmovss  xmm0, dword ptr [rdi+14h]; val
  }
  _RDI->numCells = _RDI->numRows * _RDI->numColumns;
  v53 = float_to_integral_cast<int,float>(*(float *)&_XMM0);
  if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  numRows = _RDI->numRows;
  _RDI->powerOfTwo = 31 - __lzcnt(v53);
  if ( !numRows )
  {
    LODWORD(v73) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 418, ASSERT_TYPE_ASSERT, "( outImpl.numRows ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numRows", "0", v73, 0i64) )
      __debugbreak();
  }
  numColumns = _RDI->numColumns;
  v56 = numColumns == 0;
  if ( !numColumns )
  {
    LODWORD(v73) = 0;
    v57 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 419, ASSERT_TYPE_ASSERT, "( outImpl.numColumns ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numColumns", "0", v73, 0i64);
    v56 = !v57;
    if ( v57 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vcomiss xmm0, xmm11
  }
  if ( v56 )
  {
    __asm
    {
      vmovsd  [rsp+0E8h+var_A8], xmm7
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm0
    }
    v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 420, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.x", "0.f", v76, v81);
    v56 = !v60;
    if ( v60 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vcomiss xmm0, xmm11
  }
  if ( v56 )
  {
    __asm
    {
      vmovsd  [rsp+0E8h+var_A8], xmm7
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 421, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.y", "0.f", v77, v82) )
      __debugbreak();
  }
  populationMax = v11->populationMax;
  numCells = _RDI->numCells;
  if ( v11->populationMax >= numCells )
    populationMax = numCells + (v11->populationMax >> 5);
  if ( populationMax < 1 )
    populationMax = 1;
  v65 = truncate_cast<unsigned short,int>(populationMax);
  _R11 = &v85;
  _RDI->numPages = v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  _RDI->firstFreePageIndex = 0;
  _RDI->cells = NULL;
  _RDI->pages = NULL;
  _RDI->lastAABBQueryMin = vec2_origin;
  _RDI->lastAABBQueryMax = vec2_origin;
}

/*
==============
DenseGrid_Reset
==============
*/
void DenseGrid_Reset(DenseGridImpl *impl)
{
  unsigned __int16 numPages; 
  unsigned __int16 v3; 
  __int16 i; 
  DenseGridPage *v5; 

  memset_0(impl->cells, 0xFFFF, 4i64 * impl->numCells);
  numPages = impl->numPages;
  v3 = 0;
  impl->firstFreePageIndex = 0;
  for ( i = -1; v3 < numPages; ++v3 )
  {
    v5 = &impl->pages[v3];
    v5->prevPageIndex = i;
    v5->nextPageIndex = v3 + 1;
    v5->pageSize = 0;
    DebugWipe(v5->keys, 0x80ui64);
    numPages = impl->numPages;
    i = v3;
  }
  impl->pages[numPages - 1].nextPageIndex = -1;
}

/*
==============
DenseGrid::Destroy
==============
*/
void DenseGrid::Destroy(DenseGrid *this)
{
  this->m_impl = NULL;
}

/*
==============
DenseGrid::FindInAABB
==============
*/
void DenseGrid::FindInAABB(DenseGrid *this, const vec2_t *min, const vec2_t *max, DenseGrid::CellIterator *outIter)
{
  bool v12; 
  unsigned __int16 v18; 
  unsigned __int16 v20; 
  __int16 v22; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 

  _RDI = (vec2_t *)max;
  _RSI = (vec2_t *)min;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r8]
    vcomiss xmm1, xmm0
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+88h+var_48], xmm0
    vmovsd  [rsp+88h+var_50], xmm1
  }
  v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 788, ASSERT_TYPE_ASSERT, "( min.x ) <= ( max.x )", "%s <= %s\n\t%g, %g", "min.x", "max.x", v26, v28);
  if ( v12 )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm1, xmm0
  }
  if ( v12 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+88h+var_48], xmm0
      vmovsd  [rsp+88h+var_50], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 789, ASSERT_TYPE_ASSERT, "( min.y ) <= ( max.y )", "%s <= %s\n\t%g, %g", "min.y", "max.y", v27, v29) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "DenseGrid_FindNInAABB");
  __asm { vmovss  xmm1, dword ptr [rsi+4]; y }
  v18 = DenseGrid_ComputeCellRow(this->m_impl, *(double *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rsi]; x }
  v20 = DenseGrid_ComputeCellColumn(this->m_impl, *(double *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rdi+4]; y }
  v22 = DenseGrid_ComputeCellRow(this->m_impl, *(double *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rdi]; x }
  v24 = DenseGrid_ComputeCellColumn(this->m_impl, *(double *)&_XMM1) - v20 + 1;
  v25 = v22 - v18 + 1;
  if ( !outIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 870, ASSERT_TYPE_ASSERT, "( ( iter != nullptr ) )", "( iter ) = %p", NULL) )
    __debugbreak();
  outIter->m_grid = this;
  *(_DWORD *)&outIter->m_currentRowIndex = 0;
  outIter->m_rowOffset = v18;
  outIter->m_columnOffset = v20;
  outIter->m_numRows = v25;
  outIter->m_numColumns = v24;
  outIter->m_currentCellIndex = -1;
  this->m_impl->lastAABBQueryMin = *_RSI;
  this->m_impl->lastAABBQueryMax = *_RDI;
  Sys_ProfEndNamedEvent();
}

/*
==============
DenseGrid::GetAllocationSize
==============
*/
__int64 DenseGrid::GetAllocationSize(const DenseGridConfig *config, const bool useOldCellSizeCalc)
{
  DenseGridImpl outImpl; 

  if ( useOldCellSizeCalc )
    DenseGrid_Initialize_OldVersion(config, &outImpl);
  else
    DenseGrid_Initialize(config, &outImpl);
  return 4 * (outImpl.numCells + 34 * (unsigned int)outImpl.numPages) + 88;
}

/*
==============
DenseGrid::GetCellBounds
==============
*/
void DenseGrid::GetCellBounds(DenseGrid *this, const unsigned __int16 cellIndex, vec2_t *outMin, vec2_t *outMax)
{
  _RDI = outMax;
  _RSI = outMin;
  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 1117, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vaddss  xmm1, xmm0, dword ptr [r8+4]
    vmovss  dword ptr [rsi], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rsi+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rdi], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rdi+4], xmm1
  }
}

/*
==============
DenseGrid::PageIterator::GetKeys
==============
*/
__int64 DenseGrid::PageIterator::GetKeys(DenseGrid::PageIterator *this, const unsigned int maxOutKeys, unsigned int *outKeys)
{
  DenseGridPage *v6; 
  unsigned int pageSize; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 

  if ( this->m_currentPageIndex == 0xFFFF )
  {
    v12 = 0xFFFF;
    v10 = 0xFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 857, ASSERT_TYPE_ASSERT, "( m_currentPageIndex ) != ( INVALID_PAGE_INDEX )", "%s != %s\n\t%i, %i", "m_currentPageIndex", "INVALID_PAGE_INDEX", v10, v12) )
      __debugbreak();
  }
  if ( maxOutKeys < 0x20 )
  {
    LODWORD(v11) = 32;
    LODWORD(v9) = maxOutKeys;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 858, ASSERT_TYPE_ASSERT, "( maxOutKeys ) >= ( DenseGrid::KEYS_PER_PAGE )", "%s >= %s\n\t%i, %i", "maxOutKeys", "DenseGrid::KEYS_PER_PAGE", v9, v11) )
      __debugbreak();
  }
  v6 = &this->m_grid->m_impl->pages[this->m_currentPageIndex];
  pageSize = v6->pageSize;
  memcpy_0(outKeys, v6->keys, 4 * pageSize);
  return pageSize;
}

/*
==============
DenseGrid::GetLastAABBQuery
==============
*/
void DenseGrid::GetLastAABBQuery(DenseGrid *this, vec2_t *outMin, vec2_t *outMax)
{
  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 1109, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  *outMin = this->m_impl->lastAABBQueryMin;
  *outMax = this->m_impl->lastAABBQueryMax;
}

/*
==============
DenseGrid::CellIterator::Init
==============
*/
void DenseGrid::CellIterator::Init(DenseGrid::CellIterator *iter, const DenseGrid *grid, const unsigned __int16 rowOffset, const unsigned __int16 columnOffset, const unsigned __int16 numRows, const unsigned __int16 numColumns)
{
  if ( !iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 870, ASSERT_TYPE_ASSERT, "( ( iter != nullptr ) )", "( iter ) = %p", NULL) )
    __debugbreak();
  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 871, ASSERT_TYPE_ASSERT, "( ( grid != nullptr ) )", "( grid ) = %p", NULL) )
    __debugbreak();
  iter->m_numRows = numRows;
  iter->m_numColumns = numColumns;
  iter->m_grid = grid;
  iter->m_rowOffset = rowOffset;
  iter->m_columnOffset = columnOffset;
  iter->m_currentCellIndex = -1;
  *(_DWORD *)&iter->m_currentRowIndex = 0;
}

/*
==============
DenseGrid::Init
==============
*/
void DenseGrid::Init(DenseGrid *this, const DenseGridConfig *config, const bool useOldCellSizeCalc, HunkUser *hunkUser)
{
  DenseGridImpl *m_impl; 

  _RBX = config;
  if ( this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 595, ASSERT_TYPE_ASSERT, "( ( m_impl == nullptr ) )", "( m_impl ) = %p", this->m_impl) )
    __debugbreak();
  _RAX = (DenseGridImpl *)Mem_HunkUser_AllocInternal(hunkUser, 0x58ui64, 8ui64, "DenseGrid::Init");
  this->m_impl = _RAX;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rax], xmm0
  }
  _RAX->config.worldMax.v[1] = _RBX->worldMax.v[1];
  m_impl = this->m_impl;
  if ( useOldCellSizeCalc )
    DenseGrid_Initialize_OldVersion(_RBX, m_impl);
  else
    DenseGrid_Initialize(_RBX, m_impl);
  this->m_impl->cells = (DenseGridCell *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * this->m_impl->numCells, 2ui64, "DenseGrid::Init");
  this->m_impl->pages = (DenseGridPage *)Mem_HunkUser_AllocInternal(hunkUser, 136i64 * this->m_impl->numPages, 4ui64, "DenseGrid::Init");
  DenseGrid_Reset(this->m_impl);
}

/*
==============
DenseGrid::PageIterator::Init
==============
*/
void DenseGrid::PageIterator::Init(DenseGrid::PageIterator *iter, const DenseGrid *grid, const unsigned __int16 cellIndex)
{
  DenseGridCell *cells; 

  if ( !iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 812, ASSERT_TYPE_ASSERT, "( ( iter != nullptr ) )", "( iter ) = %p", NULL) )
    __debugbreak();
  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 813, ASSERT_TYPE_ASSERT, "( ( grid != nullptr ) )", "( grid ) = %p", NULL) )
    __debugbreak();
  iter->m_grid = grid;
  iter->m_cellIndex = cellIndex;
  if ( cellIndex == 0xFFFF )
  {
    *(_DWORD *)&iter->m_nextPageIndex = -1;
  }
  else
  {
    cells = grid->m_impl->cells;
    iter->m_currentPageIndex = cells[cellIndex].head;
    iter->m_nextPageIndex = cells[cellIndex].head;
  }
}

/*
==============
DenseGrid::Insert
==============
*/
__int64 DenseGrid::Insert(DenseGrid *this, const unsigned int key, const vec2_t *pos)
{
  __int64 v6; 
  DenseGridCell *v7; 
  unsigned __int16 tail; 
  DenseGridImpl *m_impl; 
  DenseGridPage *v10; 
  unsigned __int8 pageSize; 
  unsigned __int16 outKeyIndex; 
  unsigned int keya; 
  unsigned __int16 outPageIndex; 

  keya = key;
  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 676, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  v6 = (unsigned __int16)DenseGrid_ComputeCellForPos(this->m_impl, pos);
  v7 = &this->m_impl->cells[v6];
  if ( !DenseGrid_FindKeyInCell(this->m_impl, v7, &keya, &outPageIndex, &outKeyIndex) )
  {
    tail = v7->tail;
    m_impl = this->m_impl;
    if ( tail == 0xFFFF || (v10 = &m_impl->pages[tail]) == NULL || v10->pageSize == 32 )
      v10 = DenseGrid_AllocPageForCell(m_impl, v7);
    pageSize = v10->pageSize;
    if ( pageSize >= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 696, ASSERT_TYPE_ASSERT, "( lastPage->pageSize ) < ( KEYS_PER_PAGE )", "%s < %s\n\t%u, %u", "lastPage->pageSize", "KEYS_PER_PAGE", pageSize, 32) )
      __debugbreak();
    v10->keys[v10->pageSize++] = key;
    qsort(v10->keys, v10->pageSize, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)DenseGridKeyCompare);
  }
  return (unsigned __int16)v6;
}

/*
==============
DenseGrid::IsInitialized
==============
*/
bool DenseGrid::IsInitialized(DenseGrid *this)
{
  DenseGridImpl *m_impl; 

  m_impl = this->m_impl;
  return this->m_impl && m_impl->cells && m_impl->pages;
}

/*
==============
DenseGrid::NumCells
==============
*/
__int64 DenseGrid::NumCells(DenseGrid *this)
{
  if ( this->m_impl )
    return this->m_impl->numCells;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 641, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  return this->m_impl->numCells;
}

/*
==============
DenseGrid::NumColumns
==============
*/
__int64 DenseGrid::NumColumns(DenseGrid *this)
{
  if ( this->m_impl )
    return this->m_impl->numColumns;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 648, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  return this->m_impl->numColumns;
}

/*
==============
DenseGrid::NumRows
==============
*/
__int64 DenseGrid::NumRows(DenseGrid *this)
{
  if ( this->m_impl )
    return this->m_impl->numRows;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 655, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  return this->m_impl->numRows;
}

/*
==============
DenseGrid::Read
==============
*/
void DenseGrid::Read(DenseGrid *this, MemoryFile *memFile)
{
  DenseGridImpl *m_impl; 
  DenseGridImpl *v5; 
  unsigned __int16 v6; 
  unsigned __int16 numCells; 
  unsigned __int16 numPages; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  DenseGridCell *v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  DenseGridImpl *v15; 
  unsigned __int16 firstFreePageIndex; 
  DenseGridPage *v17; 
  DenseGridPage *pages; 
  __int64 nextPageIndex; 
  unsigned __int16 tail; 
  __int64 v21; 
  unsigned __int16 v22; 
  unsigned __int8 pageSize; 
  unsigned __int8 v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int16 v28[2]; 
  unsigned __int16 p; 
  unsigned __int16 v30[2]; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  unsigned __int16 v33[2]; 
  unsigned __int16 v34[6]; 
  unsigned __int8 v35; 
  __int16 v36; 
  unsigned __int16 i; 

  m_impl = this->m_impl;
  if ( !m_impl )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED81A0, 6207i64);
    m_impl = this->m_impl;
  }
  DenseGrid_Reset(m_impl);
  MemFile_ReadData(memFile, 2ui64, &p);
  MemFile_ReadData(memFile, 2ui64, v28);
  v5 = this->m_impl;
  v6 = v28[0];
  v32 = v28[0];
  numCells = v5->numCells;
  if ( numCells != p )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED8220, 5886i64, numCells, p);
    v5 = this->m_impl;
  }
  numPages = v5->numPages;
  if ( numPages != v6 )
  {
    LODWORD(fmt) = v6;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED8290, 5887i64, numPages, fmt);
    v5 = this->m_impl;
  }
  v9 = 0;
  v36 = 0;
  v10 = 0;
  v11 = 0;
  for ( i = 0; v11 < v5->numCells; i = v11 )
  {
    v12 = &v5->cells[v11];
    MemFile_ReadData(memFile, 2ui64, v30);
    v13 = v30[0];
    if ( v30[0] > v6 )
    {
      LODWORD(fmt) = this->m_impl->numPages;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED8300, 6208i64, v30[0], fmt);
    }
    if ( v13 )
    {
      v14 = v13;
      v31 = v13 + v10;
      do
      {
        v15 = this->m_impl;
        firstFreePageIndex = this->m_impl->firstFreePageIndex;
        if ( firstFreePageIndex == 0xFFFF )
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED6D80, 840i64);
          v17 = NULL;
        }
        else
        {
          pages = v15->pages;
          v17 = &pages[firstFreePageIndex];
          nextPageIndex = v17->nextPageIndex;
          v15->firstFreePageIndex = nextPageIndex;
          pages[nextPageIndex].prevPageIndex = -1;
          v17->nextPageIndex = -1;
          tail = v12->tail;
          if ( tail == 0xFFFF || (v21 = (__int64)&v15->pages[tail]) == 0 )
          {
            if ( v12->head != 0xFFFF )
            {
              LODWORD(v27) = 0xFFFF;
              LODWORD(v26) = v12->head;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 186, ASSERT_TYPE_ASSERT, "( cell.head ) == ( DenseGrid::INVALID_PAGE_INDEX )", "%s == %s\n\t%i, %i", "cell.head", "DenseGrid::INVALID_PAGE_INDEX", v26, v27) )
                __debugbreak();
            }
            v22 = v12->tail;
            if ( v22 != 0xFFFF )
            {
              LODWORD(v27) = 0xFFFF;
              LODWORD(v26) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 187, ASSERT_TYPE_ASSERT, "( cell.tail ) == ( DenseGrid::INVALID_PAGE_INDEX )", "%s == %s\n\t%i, %i", "cell.tail", "DenseGrid::INVALID_PAGE_INDEX", v26, v27) )
                __debugbreak();
            }
            v17->prevPageIndex = -1;
            v12->head = firstFreePageIndex;
          }
          else
          {
            *(_WORD *)(v21 + 2) = firstFreePageIndex;
            v17->prevPageIndex = v12->tail;
          }
          v12->tail = firstFreePageIndex;
          pageSize = v17->pageSize;
          if ( pageSize )
          {
            LODWORD(v26) = pageSize;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 199, ASSERT_TYPE_ASSERT, "( page.pageSize ) == ( 0 )", "%s == %s\n\t%u, %u", "page.pageSize", "0", v26, 0i64) )
              __debugbreak();
          }
        }
        MemFile_ReadData(memFile, 1ui64, &v35);
        v24 = v35;
        v17->pageSize = v35;
        if ( v24 > 0x20u )
        {
          LODWORD(fmt) = 32;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED8360, 6209i64, v24, fmt);
          v24 = v17->pageSize;
        }
        MemFile_ReadData(memFile, 4i64 * v24, v17->keys);
        --v14;
      }
      while ( v14 );
      v11 = i;
      v10 = v31;
      v6 = v32;
      v9 = ++v36;
    }
    v5 = this->m_impl;
    ++v11;
  }
  MemFile_ReadData(memFile, 2ui64, v33);
  if ( v9 != v33[0] )
  {
    LODWORD(fmt) = v33[0];
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED83C0, 6210i64, v9, fmt);
  }
  MemFile_ReadData(memFile, 2ui64, v34);
  if ( v10 != v34[0] )
  {
    LODWORD(fmt) = v34[0];
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED8430, 6211i64, v10, fmt);
  }
}

/*
==============
DenseGrid::Remove
==============
*/
void DenseGrid::Remove(DenseGrid *this, const unsigned int key, const unsigned __int16 cellIndex)
{
  unsigned __int16 numCells; 
  DenseGridCell *v7; 
  unsigned __int16 v8; 
  unsigned __int16 numPages; 
  unsigned __int16 tail; 
  DenseGridPage *v11; 
  unsigned __int8 pageSize; 
  DenseGridPage *v13; 
  unsigned int *v14; 
  unsigned int v15; 
  unsigned __int16 v17; 
  DenseGridImpl *m_impl; 
  unsigned __int8 v19; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int16 outPageIndex; 
  unsigned int keya; 
  unsigned __int16 outKeyIndex; 

  keya = key;
  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 735, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  if ( cellIndex == 0xFFFF )
  {
    Com_PrintWarning(15, "DenseGrid::Remove: Attempted to remove key %d from INVALID_CELL_INDEX in DenseGrid", key);
    return;
  }
  numCells = this->m_impl->numCells;
  if ( cellIndex >= numCells && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 743, ASSERT_TYPE_ASSERT, "( cellIndex ) < ( m_impl->numCells )", "%s < %s\n\t%i, %i", "cellIndex", "m_impl->numCells", cellIndex, numCells) )
    __debugbreak();
  v7 = &this->m_impl->cells[cellIndex];
  if ( !DenseGrid_FindKeyInCell(this->m_impl, v7, &keya, &outPageIndex, &outKeyIndex) )
  {
    LODWORD(fmt) = cellIndex;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED7CE0, 841i64, key, fmt);
  }
  v8 = outPageIndex;
  numPages = this->m_impl->numPages;
  if ( outPageIndex >= numPages )
  {
    LODWORD(v22) = numPages;
    LODWORD(v21) = outPageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 754, ASSERT_TYPE_ASSERT, "( pageIndex ) < ( m_impl->numPages )", "%s < %s\n\t%i, %i", "pageIndex", "m_impl->numPages", v21, v22) )
      __debugbreak();
  }
  if ( v8 == 0xFFFF )
  {
    LODWORD(v22) = 0xFFFF;
    LODWORD(v21) = 0xFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 755, ASSERT_TYPE_ASSERT, "( pageIndex ) != ( INVALID_PAGE_INDEX )", "%s != %s\n\t%i, %i", "pageIndex", "INVALID_PAGE_INDEX", v21, v22) )
      __debugbreak();
  }
  if ( outKeyIndex >= 0x20u )
  {
    LODWORD(v22) = 32;
    LODWORD(v21) = outKeyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 756, ASSERT_TYPE_ASSERT, "( keyIndex ) < ( KEYS_PER_PAGE )", "%s < %s\n\t%i, %i", "keyIndex", "KEYS_PER_PAGE", v21, v22) )
      __debugbreak();
  }
  tail = v7->tail;
  if ( tail == 0xFFFF )
  {
    v11 = NULL;
    goto LABEL_24;
  }
  v11 = &this->m_impl->pages[tail];
  if ( !v11 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 760, ASSERT_TYPE_ASSERT, "( ( lastPage != nullptr ) )", "( lastPage ) = %p", NULL) )
      __debugbreak();
  }
  if ( !v11->pageSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 761, ASSERT_TYPE_ASSERT, "(!DenseGrid_IsPageEmpty( *lastPage ))", (const char *)&queryFormat, "!DenseGrid_IsPageEmpty( *lastPage )") )
    __debugbreak();
  pageSize = v11->pageSize;
  if ( pageSize > 0x20u )
  {
    LODWORD(v22) = 32;
    LODWORD(v21) = pageSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 764, ASSERT_TYPE_ASSERT, "( lastPageSize ) <= ( DenseGrid::KEYS_PER_PAGE )", "%s <= %s\n\t%i, %i", "lastPageSize", "DenseGrid::KEYS_PER_PAGE", v21, v22) )
      __debugbreak();
  }
  if ( !pageSize )
  {
    LODWORD(v21) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 765, ASSERT_TYPE_ASSERT, "( lastPageSize ) > ( 0 )", "%s > %s\n\t%i, %i", "lastPageSize", "0", v21, 0i64) )
      __debugbreak();
  }
  v13 = &this->m_impl->pages[v8];
  v14 = (unsigned int *)(&v11->pageSize + 4 * pageSize);
  v15 = v13->keys[outKeyIndex];
  v13->keys[outKeyIndex] = *v14;
  *v14 = v15;
  if ( v11->pageSize-- == 1 )
  {
    v17 = v7->tail;
    m_impl = this->m_impl;
    if ( v11->prevPageIndex != 0xFFFF )
      m_impl->pages[v11->prevPageIndex].nextPageIndex = -1;
    if ( v17 == v7->head )
      v7->head = v11->nextPageIndex;
    v7->tail = v11->prevPageIndex;
    v11->prevPageIndex = -1;
    v11->nextPageIndex = m_impl->firstFreePageIndex;
    m_impl->firstFreePageIndex = v17;
  }
  v19 = v13->pageSize;
  if ( v19 > 0x20u )
  {
    LODWORD(v22) = 32;
    LODWORD(v21) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 777, ASSERT_TYPE_ASSERT, "( pageSize ) <= ( DenseGrid::KEYS_PER_PAGE )", "%s <= %s\n\t%i, %i", "pageSize", "DenseGrid::KEYS_PER_PAGE", v21, v22) )
      __debugbreak();
  }
  qsort(v13->keys, v19, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)DenseGridKeyCompare);
}

/*
==============
DenseGrid::Update
==============
*/
__int64 DenseGrid::Update(DenseGrid *this, const unsigned int key, const unsigned __int16 cellIndex, const vec2_t *pos)
{
  unsigned __int16 numCells; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  bool v12; 
  __int64 v13; 
  DenseGridCell *v14; 
  unsigned __int16 tail; 
  DenseGridImpl *m_impl; 
  DenseGridPage *v17; 
  unsigned __int8 pageSize; 
  __int64 v19; 
  __int64 v20; 
  unsigned int keya[14]; 
  unsigned __int16 outPageIndex; 
  unsigned __int16 outKeyIndex; 

  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 711, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  if ( cellIndex == 0xFFFF )
  {
    Com_PrintWarning(15, "DenseGrid::Update: Attempted to remove key %d from INVALID_CELL_INDEX in DenseGrid", key);
    return 0xFFFFi64;
  }
  else
  {
    numCells = this->m_impl->numCells;
    if ( cellIndex >= numCells && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 719, ASSERT_TYPE_ASSERT, "( cellIndex ) < ( m_impl->numCells )", "%s < %s\n\t%i, %i", "cellIndex", "m_impl->numCells", cellIndex, numCells) )
      __debugbreak();
    v10 = DenseGrid_ComputeCellForPos(this->m_impl, pos);
    v11 = this->m_impl->numCells;
    if ( v10 >= v11 )
    {
      LODWORD(v20) = v11;
      LODWORD(v19) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 722, ASSERT_TYPE_ASSERT, "( computedCellIndex ) < ( m_impl->numCells )", "%s < %s\n\t%i, %i", "computedCellIndex", "m_impl->numCells", v19, v20) )
        __debugbreak();
    }
    if ( cellIndex == v10 )
    {
      return cellIndex;
    }
    else
    {
      DenseGrid::Remove(this, key, cellIndex);
      v12 = this->m_impl == NULL;
      keya[0] = key;
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 676, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
        __debugbreak();
      v13 = (unsigned __int16)DenseGrid_ComputeCellForPos(this->m_impl, pos);
      v14 = &this->m_impl->cells[v13];
      if ( !DenseGrid_FindKeyInCell(this->m_impl, v14, keya, &outPageIndex, &outKeyIndex) )
      {
        tail = v14->tail;
        m_impl = this->m_impl;
        if ( tail == 0xFFFF || (v17 = &m_impl->pages[tail]) == NULL || v17->pageSize == 32 )
          v17 = DenseGrid_AllocPageForCell(m_impl, v14);
        pageSize = v17->pageSize;
        if ( pageSize >= 0x20u )
        {
          LODWORD(v20) = 32;
          LODWORD(v19) = pageSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 696, ASSERT_TYPE_ASSERT, "( lastPage->pageSize ) < ( KEYS_PER_PAGE )", "%s < %s\n\t%u, %u", "lastPage->pageSize", "KEYS_PER_PAGE", v19, v20) )
            __debugbreak();
        }
        v17->keys[v17->pageSize++] = key;
        qsort(v17->keys, v17->pageSize, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)DenseGridKeyCompare);
      }
      return (unsigned __int16)v13;
    }
  }
}

/*
==============
DenseGrid::Write
==============
*/
void DenseGrid::Write(DenseGrid *this, MemoryFile *memFile)
{
  DenseGridImpl *m_impl; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  unsigned __int16 i; 
  DenseGridCell *v9; 
  unsigned __int16 j; 
  unsigned __int16 head; 
  DenseGridPage *v12; 
  unsigned __int8 pageSize; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int16 p; 

  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 958, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  p = this->m_impl->numCells;
  MemFile_WriteData(memFile, 2ui64, &p);
  p = this->m_impl->numPages;
  MemFile_WriteData(memFile, 2ui64, &p);
  m_impl = this->m_impl;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  for ( i = 0; i < this->m_impl->numCells; v5 = 0 )
  {
    v9 = &m_impl->cells[i];
    for ( j = v9->head; j != 0xFFFF; j = m_impl->pages[j].nextPageIndex )
      ++v5;
    p = v5;
    MemFile_WriteData(memFile, 2ui64, &p);
    head = v9->head;
    if ( v9->head != 0xFFFF )
    {
      do
      {
        v12 = &this->m_impl->pages[head];
        pageSize = v12->pageSize;
        if ( pageSize > 0x20u )
        {
          LODWORD(v15) = 32;
          LODWORD(v14) = pageSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 983, ASSERT_TYPE_ASSERT, "( page.pageSize ) <= ( DenseGrid::KEYS_PER_PAGE )", "page.pageSize not in [0, DenseGrid::KEYS_PER_PAGE]\n\t%u not in [0, %u]", v14, v15) )
            __debugbreak();
        }
        LOBYTE(p) = v12->pageSize;
        MemFile_WriteData(memFile, 1ui64, &p);
        MemFile_WriteData(memFile, 4i64 * v12->pageSize, v12->keys);
        head = v12->nextPageIndex;
        ++v7;
      }
      while ( head != 0xFFFF );
      ++v6;
    }
    m_impl = this->m_impl;
    ++i;
  }
  p = v6;
  MemFile_WriteData(memFile, 2ui64, &p);
  p = v7;
  MemFile_WriteData(memFile, 2ui64, &p);
}

