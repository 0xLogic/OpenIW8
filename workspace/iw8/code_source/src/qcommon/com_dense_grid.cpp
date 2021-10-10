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
__int64 DenseGrid_ComputeCellColumn(const DenseGridImpl *impl, const float x)
{
  int numColumns; 
  int v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  numColumns = impl->numColumns;
  v4 = float_to_integral_cast<int,float>(x - impl->config.worldMin.v[0]) >> impl->powerOfTwo;
  if ( numColumns - 1 < 0 )
  {
    v9 = numColumns - 1;
    v8 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v8, v9) )
      __debugbreak();
  }
  if ( numColumns <= v4 )
    v4 = numColumns - 1;
  if ( v4 < 0 )
    v4 = 0;
  v5 = truncate_cast<unsigned short,int>(v4);
  v6 = impl->numColumns;
  if ( v5 >= v6 )
  {
    v11 = v6;
    v10 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 100, ASSERT_TYPE_ASSERT, "( column ) < ( impl.numColumns )", "%s < %s\n\t%i, %i", "column", "impl.numColumns", v10, v11) )
      __debugbreak();
  }
  return v5;
}

/*
==============
DenseGrid_ComputeCellForPos
==============
*/
__int64 DenseGrid_ComputeCellForPos(const DenseGridImpl *impl, const vec2_t *pos)
{
  __int16 v4; 
  unsigned __int16 v5; 
  unsigned __int16 numCells; 
  unsigned __int16 v7; 
  int v9; 
  int v10; 

  v4 = DenseGrid_ComputeCellColumn(impl, pos->v[0]);
  v5 = DenseGrid_ComputeCellRow(impl, pos->v[1]);
  numCells = impl->numCells;
  v7 = v4 + v5 * impl->numColumns;
  if ( v7 >= numCells )
  {
    v10 = numCells;
    v9 = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 124, ASSERT_TYPE_ASSERT, "( cellIndex ) < ( impl.numCells )", "%s < %s\n\t%i, %i", "cellIndex", "impl.numCells", v9, v10) )
      __debugbreak();
  }
  return v7;
}

/*
==============
DenseGrid_ComputeCellRow
==============
*/
__int64 DenseGrid_ComputeCellRow(const DenseGridImpl *impl, const float y)
{
  int numRows; 
  int v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  numRows = impl->numRows;
  v4 = float_to_integral_cast<int,float>(y - impl->config.worldMin.v[1]) >> impl->powerOfTwo;
  if ( numRows - 1 < 0 )
  {
    v9 = numRows - 1;
    v8 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v8, v9) )
      __debugbreak();
  }
  if ( numRows <= v4 )
    v4 = numRows - 1;
  if ( v4 < 0 )
    v4 = 0;
  v5 = truncate_cast<unsigned short,int>(v4);
  v6 = impl->numRows;
  if ( v5 >= v6 )
  {
    v11 = v6;
    v10 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 114, ASSERT_TYPE_ASSERT, "( row ) < ( impl.numRows )", "%s < %s\n\t%i, %i", "row", "impl.numRows", v10, v11) )
      __debugbreak();
  }
  return v5;
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
  unsigned int v2; 
  float v5; 
  __int64 v7; 
  float v12; 
  float v13; 
  float v15; 
  unsigned int powerOfTwo; 
  int v19; 
  bool v20; 
  bool v21; 
  int v23; 
  bool v24; 
  bool v25; 
  unsigned __int16 v26; 
  float v27; 
  float v28; 
  int v29; 
  int numColumns; 
  int v31; 
  int v32; 
  int numRows; 
  int v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  unsigned int numCells; 
  int populationMax; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  vec2_t v50; 

  v2 = 0;
  outImpl->config.worldMin = config->worldMin;
  v5 = config->worldMax.v[0];
  _XMM9 = LODWORD(FLOAT_N131072_0);
  outImpl->config.worldMax.v[0] = v5;
  outImpl->config.worldMax.v[1] = config->worldMax.v[1];
  outImpl->worldSize.v[0] = v5 - outImpl->config.worldMin.v[0];
  outImpl->worldSize.v[1] = outImpl->config.worldMax.v[1] - outImpl->config.worldMin.v[1];
  do
  {
    v7 = (int)v2;
    if ( outImpl->worldSize.v[v2] > 0.0 )
    {
      if ( COERCE_FLOAT(LODWORD(outImpl->worldSize.v[v2]) & _xmm) > 262144.0 )
      {
        Com_PrintWarning(15, "DenseGrid_Initialize: Initialized to overly large world bounds for Axis:%d, min:%.2f max:%.2f. Fallback behavior will clip to map limits +/- 128K. This implies an overly large or missing broadphase brush.\n", v2, config->worldMin.v[v2], config->worldMax.v[v2]);
        _XMM0 = LODWORD(outImpl->config.worldMin.v[v2]);
        __asm { vmaxss  xmm6, xmm0, xmm9 }
        outImpl->config.worldMin.v[v2] = *(float *)&_XMM6;
        _XMM0 = LODWORD(outImpl->config.worldMax.v[v2]);
        __asm { vminss  xmm6, xmm0, xmm10 }
        outImpl->config.worldMax.v[v2] = *(float *)&_XMM6;
      }
    }
    else
    {
      Com_PrintWarning(15, "DenseGrid_Initialize: Initialized to zero or negative length world bounds for Axis:%d. Fallback behavior will default to use +/- 128K (map limits). This will likely take much more memory than requried  Check the broadphase brush.\n", v2);
      outImpl->config.worldMin.v[v2] = -131072.0;
      outImpl->config.worldMax.v[v2] = 131072.0;
    }
    v12 = outImpl->config.worldMax.v[v2] - outImpl->config.worldMin.v[v2];
    ++v2;
    outImpl->worldSize.v[v7] = v12;
  }
  while ( v2 < 2 );
  v13 = outImpl->worldSize.v[0];
  __asm { vxorpd  xmm9, xmm9, xmm9 }
  if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 277, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.x", "0.f", v13, *(double *)&_XMM9) )
    __debugbreak();
  v15 = outImpl->worldSize.v[1];
  if ( v15 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 278, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.y", "0.f", v15, *(double *)&_XMM9) )
    __debugbreak();
  outImpl->config.populationMax = config->populationMax;
  powerOfTwo = 7;
  _XMM8 = 0i64;
  do
  {
    v50.v[0] = (float)(1 << (powerOfTwo + 1));
    v50.v[1] = v50.v[0];
    outImpl->cellSize = v50;
    __asm { vroundss xmm0, xmm8, xmm2, 2 }
    outImpl->powerOfTwo = powerOfTwo + 1;
    v19 = (int)*(float *)&_XMM0;
    v20 = *(float *)&_XMM0 >= 0.0 && *(float *)&_XMM0 <= 16777216.0;
    v21 = *(float *)&_XMM0 >= 0.0 && *(float *)&_XMM0 <= 65535.0;
    if ( (!v20 || !v21) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned short __cdecl float_to_integral_cast<unsigned short,float>(float)", (unsigned __int16)v19, *(float *)&_XMM0) )
      __debugbreak();
    __asm { vroundss xmm0, xmm8, xmm2, 2 }
    outImpl->numColumns = v19;
    v23 = (int)*(float *)&_XMM0;
    v24 = *(float *)&_XMM0 >= 0.0 && *(float *)&_XMM0 <= 16777216.0;
    v25 = *(float *)&_XMM0 >= 0.0 && *(float *)&_XMM0 <= 65535.0;
    if ( !v24 || !v25 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned short __cdecl float_to_integral_cast<unsigned short,float>(float)", (unsigned __int16)v23, *(float *)&_XMM0) )
        __debugbreak();
      LOWORD(v19) = outImpl->numColumns;
    }
    outImpl->numRows = v23;
    if ( (unsigned __int16)v19 * (unsigned int)(unsigned __int16)v23 <= 0x4000 )
      break;
    powerOfTwo = outImpl->powerOfTwo;
  }
  while ( powerOfTwo < 0x12 );
  v26 = truncate_cast<unsigned short,int>((unsigned __int16)v19 * (unsigned __int16)v23);
  outImpl->numCells = v26;
  if ( v26 > 0x4000u )
  {
    LODWORD(v49) = 0x4000;
    LODWORD(v48) = v26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 306, ASSERT_TYPE_ASSERT, "( outImpl.numCells ) <= ( DENSE_GRID_MAX_NUM_CELLS )", "%s <= %s\n\t%u, %u", "outImpl.numCells", "DENSE_GRID_MAX_NUM_CELLS", v48, v49) )
      __debugbreak();
  }
  if ( !outImpl->numRows )
  {
    LODWORD(v48) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 308, ASSERT_TYPE_ASSERT, "( outImpl.numRows ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numRows", "0", v48, 0i64) )
      __debugbreak();
  }
  if ( !outImpl->numColumns )
  {
    LODWORD(v48) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 309, ASSERT_TYPE_ASSERT, "( outImpl.numColumns ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numColumns", "0", v48, 0i64) )
      __debugbreak();
  }
  if ( !outImpl->numCells )
  {
    LODWORD(v48) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 310, ASSERT_TYPE_ASSERT, "( outImpl.numCells ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numCells", "0", v48, 0i64) )
      __debugbreak();
  }
  v27 = outImpl->cellSize.v[0];
  if ( v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 311, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.x", "0.f", v27, *(double *)&_XMM9) )
    __debugbreak();
  v28 = outImpl->cellSize.v[1];
  if ( v28 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 312, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.y", "0.f", v28, *(double *)&_XMM9) )
    __debugbreak();
  if ( float_to_integral_cast<int,float>(0.0) >> outImpl->powerOfTwo )
  {
    LODWORD(v48) = float_to_integral_cast<int,float>(0.0) >> outImpl->powerOfTwo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 318, ASSERT_TYPE_ASSERT, "( DenseGrid_ComputeCellColumn_Unclamped( outImpl, outImpl.config.worldMin.x ) ) == ( 0 )", "%s == %s\n\t%i, %i", "DenseGrid_ComputeCellColumn_Unclamped( outImpl, outImpl.config.worldMin.x )", "0", v48, 0i64) )
      __debugbreak();
  }
  v29 = float_to_integral_cast<int,float>(outImpl->config.worldMax.v[0] - outImpl->config.worldMin.v[0]);
  numColumns = outImpl->numColumns;
  v31 = v29 >> outImpl->powerOfTwo;
  if ( v31 != numColumns && v31 != numColumns - 1 )
  {
    LODWORD(v47) = outImpl->numColumns;
    LODWORD(v46) = v31;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 320, ASSERT_TYPE_ASSERT, "( worldMaxXColumn == outImpl.numColumns || worldMaxXColumn == outImpl.numColumns - 1 )", "DenseGrid_Init validation failed. worldMaxXColumn (%i), numColumns (%i)", v46, v47) )
      __debugbreak();
  }
  if ( float_to_integral_cast<int,float>(0.0) >> outImpl->powerOfTwo )
  {
    LODWORD(v48) = float_to_integral_cast<int,float>(0.0) >> outImpl->powerOfTwo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 322, ASSERT_TYPE_ASSERT, "( DenseGrid_ComputeCellRow_Unclamped( outImpl, outImpl.config.worldMin.y ) ) == ( 0 )", "%s == %s\n\t%i, %i", "DenseGrid_ComputeCellRow_Unclamped( outImpl, outImpl.config.worldMin.y )", "0", v48, 0i64) )
      __debugbreak();
  }
  v32 = float_to_integral_cast<int,float>(outImpl->config.worldMax.v[1] - outImpl->config.worldMin.v[1]);
  numRows = outImpl->numRows;
  v34 = v32 >> outImpl->powerOfTwo;
  if ( v34 != numRows && v34 != numRows - 1 )
  {
    LODWORD(v47) = outImpl->numRows;
    LODWORD(v46) = v34;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 324, ASSERT_TYPE_ASSERT, "( worldMaxYRow == outImpl.numRows || worldMaxYRow == outImpl.numRows - 1 )", "DenseGrid_Init validation failed. worldMaxYRow (%i), numRows (%i)", v46, v47) )
      __debugbreak();
  }
  v35 = outImpl->worldSize.v[0];
  v36 = (float)outImpl->numColumns * outImpl->cellSize.v[0];
  if ( v35 > v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 328, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.x ) <= ( outImpl.cellSize.x * outImpl.numColumns )", "%s <= %s\n\t%g, %g", "outImpl.worldSize.x", "outImpl.cellSize.x * outImpl.numColumns", v35, v36) )
    __debugbreak();
  v37 = outImpl->worldSize.v[1];
  v38 = (float)outImpl->numRows * outImpl->cellSize.v[1];
  if ( v37 > v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 329, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.y ) <= ( outImpl.cellSize.y * outImpl.numRows )", "%s <= %s\n\t%g, %g", "outImpl.worldSize.y", "outImpl.cellSize.y * outImpl.numRows", v37, v38) )
    __debugbreak();
  v39 = outImpl->config.worldMax.v[0];
  v40 = (float)outImpl->numColumns * outImpl->cellSize.v[0];
  v41 = v40 + outImpl->config.worldMin.v[0];
  outImpl->worldSize.v[1] = (float)outImpl->numRows * outImpl->cellSize.v[1];
  outImpl->worldSize.v[0] = v40;
  if ( v39 > v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 332, ASSERT_TYPE_ASSERT, "( outImpl.config.worldMax.x ) <= ( outImpl.config.worldMin.x + outImpl.worldSize.x )", "%s <= %s\n\t%g, %g", "outImpl.config.worldMax.x", "outImpl.config.worldMin.x + outImpl.worldSize.x", v39, v41) )
    __debugbreak();
  v42 = outImpl->worldSize.v[1] + outImpl->config.worldMin.v[1];
  v43 = outImpl->config.worldMax.v[1];
  if ( v43 > v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 333, ASSERT_TYPE_ASSERT, "( outImpl.config.worldMax.y ) <= ( outImpl.config.worldMin.y + outImpl.worldSize.y )", "%s <= %s\n\t%g, %g", "outImpl.config.worldMax.y", "outImpl.config.worldMin.y + outImpl.worldSize.y", v43, v42) )
    __debugbreak();
  outImpl->config.worldMax.v[0] = outImpl->config.worldMin.v[0] + outImpl->worldSize.v[0];
  outImpl->config.worldMax.v[1] = outImpl->config.worldMin.v[1] + outImpl->worldSize.v[1];
  numCells = outImpl->numCells;
  populationMax = config->populationMax;
  if ( config->populationMax >= numCells )
    populationMax = numCells + ((unsigned int)(populationMax + 31) >> 5);
  if ( populationMax < 1 )
    populationMax = 1;
  outImpl->numPages = truncate_cast<unsigned short,int>(populationMax);
  outImpl->firstFreePageIndex = 0;
  outImpl->cells = NULL;
  outImpl->pages = NULL;
  outImpl->lastAABBQueryMin = vec2_origin;
  outImpl->lastAABBQueryMax = vec2_origin;
}

/*
==============
DenseGrid_Initialize_OldVersion
==============
*/
void DenseGrid_Initialize_OldVersion(const DenseGridConfig *config, DenseGridImpl *outImpl)
{
  unsigned int v2; 
  float v5; 
  __int64 v7; 
  float v12; 
  float v13; 
  float v15; 
  unsigned int v16; 
  int v17; 
  float v18; 
  float v19; 
  bool v20; 
  float v21; 
  int v22; 
  int numColumns; 
  float v24; 
  unsigned int v25; 
  unsigned __int16 numRows; 
  float v27; 
  float v28; 
  int populationMax; 
  unsigned int numCells; 
  __int64 v31; 
  __int64 v32; 

  v2 = 0;
  outImpl->config.worldMin = config->worldMin;
  v5 = config->worldMax.v[0];
  _XMM7 = (unsigned int)_xmm;
  outImpl->config.worldMax.v[0] = v5;
  outImpl->config.worldMax.v[1] = config->worldMax.v[1];
  outImpl->worldSize.v[0] = v5 - outImpl->config.worldMin.v[0];
  outImpl->worldSize.v[1] = outImpl->config.worldMax.v[1] - outImpl->config.worldMin.v[1];
  do
  {
    v7 = (int)v2;
    if ( outImpl->worldSize.v[v2] == 0.0 )
    {
      Com_PrintWarning(15, "DenseGrid_Initialize: Initialized to zero length world bounds for Axis:%d. Fallback behavior will default to use +/- 128K (map limits). This will likely take much more memory than requried  Check the broadphase brush.\n", v2);
      outImpl->config.worldMin.v[v2] = -131072.0;
      outImpl->config.worldMax.v[v2] = 131072.0;
    }
    else if ( COERCE_FLOAT(LODWORD(outImpl->worldSize.v[v2]) & _xmm) > 262144.0 )
    {
      Com_PrintWarning(15, "DenseGrid_Initialize: Initialized to overly large world bounds for Axis:%d, min:%.2f max:%.2f. Fallback behavior will clip to map limits +/- 128K. This implies an overly large or missing broadphase brush.\n", v2, config->worldMin.v[v2], config->worldMax.v[v2]);
      _XMM0 = LODWORD(outImpl->config.worldMin.v[v2]);
      __asm { vmaxss  xmm6, xmm0, xmm9 }
      outImpl->config.worldMin.v[v2] = *(float *)&_XMM6;
      _XMM0 = LODWORD(outImpl->config.worldMax.v[v2]);
      __asm { vminss  xmm6, xmm0, xmm10 }
      outImpl->config.worldMax.v[v2] = *(float *)&_XMM6;
    }
    v12 = outImpl->config.worldMax.v[v2] - outImpl->config.worldMin.v[v2];
    ++v2;
    outImpl->worldSize.v[v7] = v12;
  }
  while ( v2 < 2 );
  v13 = outImpl->worldSize.v[0];
  __asm { vxorpd  xmm7, xmm7, xmm7 }
  if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 381, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.x", "0.f", v13, *(double *)&_XMM7) )
    __debugbreak();
  v15 = outImpl->worldSize.v[1];
  if ( v15 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 382, ASSERT_TYPE_ASSERT, "( outImpl.worldSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.worldSize.y", "0.f", v15, *(double *)&_XMM7) )
    __debugbreak();
  v16 = 7;
  outImpl->config.populationMax = config->populationMax;
  v17 = 128;
  do
  {
    if ( (v17 < 0 || (unsigned int)v17 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v17, "signed", v17) )
      __debugbreak();
    v18 = 1.0 / (float)(unsigned __int16)v17;
    v19 = v18 * outImpl->worldSize.v[0];
    v20 = v19 < 256.0;
    outImpl->cellSize.v[0] = v19;
    v21 = v18 * outImpl->worldSize.v[1];
    outImpl->cellSize.v[1] = v21;
    if ( !v20 && v21 >= 256.0 )
      break;
    v17 = __ROR4__(v17, 1);
    --v16;
  }
  while ( v16 );
  if ( v16 > 7 )
  {
    LODWORD(v32) = 7;
    LODWORD(v31) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 408, ASSERT_TYPE_ASSERT, "( rowsPowerOfTwo ) <= ( DENSE_GRID_MAX_NUM_ROWS_POWER )", "%s <= %s\n\t%i, %i", "rowsPowerOfTwo", "DENSE_GRID_MAX_NUM_ROWS_POWER", v31, v32) )
      __debugbreak();
  }
  outImpl->numColumns = truncate_cast<unsigned short,int>(1 << v16);
  v22 = truncate_cast<unsigned short,int>(1 << v16);
  numColumns = outImpl->numColumns;
  outImpl->numRows = v22;
  outImpl->cellSize.v[0] = outImpl->worldSize.v[0] / (float)numColumns;
  outImpl->cellSize.v[1] = outImpl->worldSize.v[1] / (float)v22;
  v24 = outImpl->cellSize.v[0];
  outImpl->numCells = outImpl->numRows * outImpl->numColumns;
  v25 = float_to_integral_cast<int,float>(v24);
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  numRows = outImpl->numRows;
  outImpl->powerOfTwo = 31 - __lzcnt(v25);
  if ( !numRows )
  {
    LODWORD(v31) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 418, ASSERT_TYPE_ASSERT, "( outImpl.numRows ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numRows", "0", v31, 0i64) )
      __debugbreak();
  }
  if ( !outImpl->numColumns )
  {
    LODWORD(v31) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 419, ASSERT_TYPE_ASSERT, "( outImpl.numColumns ) > ( 0 )", "%s > %s\n\t%i, %i", "outImpl.numColumns", "0", v31, 0i64) )
      __debugbreak();
  }
  v27 = outImpl->cellSize.v[0];
  if ( v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 420, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.x ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.x", "0.f", v27, *(double *)&_XMM7) )
    __debugbreak();
  v28 = outImpl->cellSize.v[1];
  if ( v28 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 421, ASSERT_TYPE_ASSERT, "( outImpl.cellSize.y ) > ( 0.f )", "%s > %s\n\t%g, %g", "outImpl.cellSize.y", "0.f", v28, *(double *)&_XMM7) )
    __debugbreak();
  populationMax = config->populationMax;
  numCells = outImpl->numCells;
  if ( config->populationMax >= numCells )
    populationMax = numCells + (config->populationMax >> 5);
  if ( populationMax < 1 )
    populationMax = 1;
  outImpl->numPages = truncate_cast<unsigned short,int>(populationMax);
  outImpl->firstFreePageIndex = 0;
  outImpl->cells = NULL;
  outImpl->pages = NULL;
  outImpl->lastAABBQueryMin = vec2_origin;
  outImpl->lastAABBQueryMax = vec2_origin;
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
  float v8; 
  float v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 

  if ( min->v[0] > max->v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 788, ASSERT_TYPE_ASSERT, "( min.x ) <= ( max.x )", "%s <= %s\n\t%g, %g", "min.x", "max.x", min->v[0], max->v[0]) )
    __debugbreak();
  v8 = min->v[1];
  v9 = max->v[1];
  if ( v8 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 789, ASSERT_TYPE_ASSERT, "( min.y ) <= ( max.y )", "%s <= %s\n\t%g, %g", "min.y", "max.y", v8, v9) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "DenseGrid_FindNInAABB");
  v10 = DenseGrid_ComputeCellRow(this->m_impl, min->v[1]);
  v11 = DenseGrid_ComputeCellColumn(this->m_impl, min->v[0]);
  v12 = DenseGrid_ComputeCellRow(this->m_impl, max->v[1]);
  v13 = DenseGrid_ComputeCellColumn(this->m_impl, max->v[0]) - v11 + 1;
  v14 = v12 - v10 + 1;
  if ( !outIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 870, ASSERT_TYPE_ASSERT, "( ( iter != nullptr ) )", "( iter ) = %p", NULL) )
    __debugbreak();
  outIter->m_grid = this;
  *(_DWORD *)&outIter->m_currentRowIndex = 0;
  outIter->m_rowOffset = v10;
  outIter->m_columnOffset = v11;
  outIter->m_numRows = v14;
  outIter->m_numColumns = v13;
  outIter->m_currentCellIndex = -1;
  this->m_impl->lastAABBQueryMin = *min;
  this->m_impl->lastAABBQueryMax = *max;
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
  unsigned int numColumns; 
  int v9; 
  int v10; 

  if ( !this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 1117, ASSERT_TYPE_ASSERT, "( ( m_impl != nullptr ) )", "( m_impl ) = %p", NULL) )
    __debugbreak();
  numColumns = this->m_impl->numColumns;
  v9 = (unsigned __int16)(cellIndex % this->m_impl->numColumns);
  outMin->v[0] = (float)(v9 << this->m_impl->powerOfTwo) + this->m_impl->config.worldMin.v[0];
  v10 = (unsigned __int16)(cellIndex / numColumns);
  outMin->v[1] = (float)(v10 << this->m_impl->powerOfTwo) + this->m_impl->config.worldMin.v[1];
  outMax->v[0] = (float)((v9 + 1) << this->m_impl->powerOfTwo) + this->m_impl->config.worldMin.v[0];
  outMax->v[1] = (float)((v10 + 1) << this->m_impl->powerOfTwo) + this->m_impl->config.worldMin.v[1];
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
  DenseGridImpl *v8; 
  DenseGridImpl *m_impl; 

  if ( this->m_impl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dense_grid.cpp", 595, ASSERT_TYPE_ASSERT, "( ( m_impl == nullptr ) )", "( m_impl ) = %p", this->m_impl) )
    __debugbreak();
  v8 = (DenseGridImpl *)Mem_HunkUser_AllocInternal(hunkUser, 0x58ui64, 8ui64, "DenseGrid::Init");
  this->m_impl = v8;
  *(_OWORD *)&v8->config.populationMax = *(_OWORD *)&config->populationMax;
  v8->config.worldMax.v[1] = config->worldMax.v[1];
  m_impl = this->m_impl;
  if ( useOldCellSizeCalc )
    DenseGrid_Initialize_OldVersion(config, m_impl);
  else
    DenseGrid_Initialize(config, m_impl);
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

