/*
==============
ActiveSet::Clear
==============
*/

void __fastcall ActiveSet::Clear(ActiveSet *this)
{
  ?Clear@ActiveSet@@QEAAXXZ(this);
}

/*
==============
ActiveSet::MaxID
==============
*/

unsigned int __fastcall ActiveSet::MaxID(ActiveSet *this)
{
  return ?MaxID@ActiveSet@@QEAAIXZ(this);
}

/*
==============
ActiveSet::BytesAllocated
==============
*/

unsigned int __fastcall ActiveSet::BytesAllocated(ActiveSet *this)
{
  return ?BytesAllocated@ActiveSet@@QEAAIXZ(this);
}

/*
==============
ActiveSet::BroadphaseAdd
==============
*/

void __fastcall ActiveSet::BroadphaseAdd(ActiveSet *this, unsigned int id, const vec3_t *origin, float radius, const vec3_t *viewPos)
{
  ?BroadphaseAdd@ActiveSet@@AEAAXIAEBTvec3_t@@M0@Z(this, id, origin, radius, viewPos);
}

/*
==============
ActiveSet::CheckActive
==============
*/

bool __fastcall ActiveSet::CheckActive(ActiveSet *this, unsigned int id)
{
  return ?CheckActive@ActiveSet@@QEAA_NI@Z(this, id);
}

/*
==============
ActiveSet::AddGlobal
==============
*/

void __fastcall ActiveSet::AddGlobal(ActiveSet *this)
{
  ?AddGlobal@ActiveSet@@QEAAXXZ(this);
}

/*
==============
ActiveSet::Allocate
==============
*/

void __fastcall ActiveSet::Allocate(ActiveSet *this, HunkUser *hunkUser, unsigned int idMax, unsigned int countMax)
{
  ?Allocate@ActiveSet@@QEAAXPEAUHunkUser@@II@Z(this, hunkUser, idMax, countMax);
}

/*
==============
ActiveSet::DrawOverlay
==============
*/

void __fastcall ActiveSet::DrawOverlay(ActiveSet *this, const LocalClientNum_t localClientNum, float *x, float *y, const char *name)
{
  ?DrawOverlay@ActiveSet@@QEAAXW4LocalClientNum_t@@PEAM1PEBD@Z(this, localClientNum, x, y, name);
}

/*
==============
ActiveSet::Update
==============
*/

void __fastcall ActiveSet::Update(ActiveSet *this, LocalClientNum_t localClientNum, const vec3_t *viewPos, float viewRadius, bool (__fastcall *const funcValid)(const LocalClientNum_t, unsigned int), bool (__fastcall *const funcActivate)(const LocalClientNum_t, unsigned int), bool (__fastcall *funcDeactivate)(const LocalClientNum_t, unsigned int), void (__fastcall *funcGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), float (__fastcall *funcGetRadius)(const LocalClientNum_t, unsigned int), const SpatialPartition_Tree *ssrTree)
{
  ?Update@ActiveSet@@QEAAXW4LocalClientNum_t@@AEBTvec3_t@@MQ6A_NW42@I@Z3P6A_N2I@ZP6AX2IAEAT3@@ZP6AM2I@ZPEBUSpatialPartition_Tree@@@Z(this, localClientNum, viewPos, viewRadius, funcValid, funcActivate, funcDeactivate, funcGetOrigin, funcGetRadius, ssrTree);
}

/*
==============
ActiveSet::BroadphaseEnd
==============
*/

void __fastcall ActiveSet::BroadphaseEnd(ActiveSet *this)
{
  ?BroadphaseEnd@ActiveSet@@AEAAXXZ(this);
}

/*
==============
ActiveSet::BroadphaseBegin
==============
*/

void __fastcall ActiveSet::BroadphaseBegin(ActiveSet *this)
{
  ?BroadphaseBegin@ActiveSet@@AEAAXXZ(this);
}

/*
==============
ActiveSet::Draw3d
==============
*/

void __fastcall ActiveSet::Draw3d(ActiveSet *this, const LocalClientNum_t localClientNum, const vec3_t *viewPos, bool (__fastcall *const funcValid)(const LocalClientNum_t, unsigned int), void (__fastcall *funcGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), float (__fastcall *funcGetRadius)(const LocalClientNum_t, unsigned int))
{
  ?Draw3d@ActiveSet@@QEAAXW4LocalClientNum_t@@AEBTvec3_t@@Q6A_N0I@ZP6AX0IAEAT3@@ZP6AM0I@Z@Z(this, localClientNum, viewPos, funcValid, funcGetOrigin, funcGetRadius);
}

/*
==============
ActiveSet::DeltaIterate
==============
*/

void __fastcall ActiveSet::DeltaIterate(ActiveSet *this, const LocalClientNum_t localClientNum, bool (__fastcall *funcActivate)(const LocalClientNum_t, unsigned int), bool (__fastcall *funcDeactivate)(const LocalClientNum_t, unsigned int))
{
  ?DeltaIterate@ActiveSet@@AEAAXW4LocalClientNum_t@@P6A_N0I@Z1@Z(this, localClientNum, funcActivate, funcDeactivate);
}

/*
==============
ActiveSet::Count
==============
*/

unsigned int __fastcall ActiveSet::Count(ActiveSet *this)
{
  return ?Count@ActiveSet@@QEAAIXZ(this);
}

/*
==============
ActiveSet::Free
==============
*/

void __fastcall ActiveSet::Free(ActiveSet *this)
{
  ?Free@ActiveSet@@QEAAXXZ(this);
}

/*
==============
ActiveSet::AddGlobal
==============
*/
void ActiveSet::AddGlobal(ActiveSet *this)
{
  ++this->m_globalCount;
}

/*
==============
ActiveSet::Allocate
==============
*/
void ActiveSet::Allocate(ActiveSet *this, HunkUser *hunkUser, unsigned int idMax, unsigned int countMax)
{
  unsigned int v8; 
  unsigned int m_countMax; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 45, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( idMax >= 0x1D4C0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 46, ASSERT_TYPE_ASSERT, "(idMax < ( 120000 ))", (const char *)&queryFormat, "idMax < ACTIVE_SET_ID_MAX") )
    __debugbreak();
  this->m_idMax = idMax;
  this->m_words = 0;
  this->m_bitsActive = NULL;
  this->m_countMax = countMax;
  this->m_overflowActivationCount = 0;
  this->m_overflowActivationIds = NULL;
  if ( idMax )
  {
    v8 = idMax >> 5;
    this->m_words = v8 + 1;
    this->m_bitsActive = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * (v8 + 1), 4ui64, "ActiveSet::Allocate");
    m_countMax = this->m_countMax;
    if ( m_countMax )
      this->m_overflowActivationIds = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * m_countMax, 4ui64, "ActiveSet::Allocate");
    if ( this->m_bitsActive )
    {
      if ( !this->m_words && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 84, ASSERT_TYPE_ASSERT, "(m_words)", (const char *)&queryFormat, "m_words") )
        __debugbreak();
      memset_0(this->m_bitsActive, 0, 4i64 * this->m_words);
    }
  }
  this->m_count = 0;
  *(_QWORD *)&this->m_idBiggest = 0i64;
  this->m_overflowActivationCount = 0;
  this->m_globalCount = 0;
}

/*
==============
ActiveSet::BroadphaseAdd
==============
*/
void ActiveSet::BroadphaseAdd(ActiveSet *this, unsigned int id, const vec3_t *origin, float radius, const vec3_t *viewPos)
{
  __int64 v6; 
  float v8; 
  float v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v6 = (int)id;
  if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 163, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
    __debugbreak();
  if ( (unsigned int)v6 >= this->m_idMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 164, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax") )
    __debugbreak();
  v8 = origin->v[1] - viewPos->v[1];
  v9 = origin->v[2] - viewPos->v[2];
  if ( (float)((float)((float)(v8 * v8) + (float)((float)(origin->v[0] - viewPos->v[0]) * (float)(origin->v[0] - viewPos->v[0]))) + (float)(v9 * v9)) <= (float)(radius * radius) )
  {
    if ( (unsigned int)v6 >= 0x1D4C0 )
    {
      v13 = 120000;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v11, v13) )
        __debugbreak();
    }
    v10 = 1 << (v6 & 0x1F);
    if ( (v10 & s_activeSetPendingBits[v6 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 178, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( s_activeSetPendingBits, id, std::extent<decltype( s_activeSetPendingBits )>::value ? sizeof( decltype( s_activeSetPendingBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( s_activeSetPendingBits, id )") )
      __debugbreak();
    if ( (unsigned int)v6 >= 0x1D4C0 )
    {
      LODWORD(v12) = 120000;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    s_activeSetPendingBits[v6 >> 5] |= v10;
    if ( !s_activeSetPendingCount || s_activeSetPendingSmallest > (unsigned int)v6 )
      s_activeSetPendingSmallest = v6;
    if ( !s_activeSetPendingCount || s_activeSetPendingBiggest < (unsigned int)v6 )
      s_activeSetPendingBiggest = v6;
    ++s_activeSetPendingCount;
  }
}

/*
==============
ActiveSet::BroadphaseBegin
==============
*/
void ActiveSet::BroadphaseBegin(ActiveSet *this)
{
  if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 141, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
    __debugbreak();
  if ( !this->m_words && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 142, ASSERT_TYPE_ASSERT, "(m_words)", (const char *)&queryFormat, "m_words") )
    __debugbreak();
  if ( s_activeSetPendingInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 143, ASSERT_TYPE_ASSERT, "(!s_activeSetPendingInUse)", (const char *)&queryFormat, "!s_activeSetPendingInUse") )
    __debugbreak();
  if ( this->m_idMax >= 0x1D4C0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 144, ASSERT_TYPE_ASSERT, "(m_idMax < ( 120000 ))", (const char *)&queryFormat, "m_idMax < ACTIVE_SET_ID_MAX") )
    __debugbreak();
  if ( this->m_words >= 0xEA6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 145, ASSERT_TYPE_ASSERT, "(m_words < ( ( 120000 ) / ( 32 ) ))", (const char *)&queryFormat, "m_words < ACTIVE_SET_WORD_MAX") )
    __debugbreak();
  memset_0(s_activeSetPendingBits, 0, 4i64 * this->m_words);
  s_activeSetPendingCount = 0;
  s_activeSetPendingSmallest = 0;
  s_activeSetPendingBiggest = 0;
  s_activeSetPendingInUse = 1;
}

/*
==============
ActiveSet::BroadphaseEnd
==============
*/
void ActiveSet::BroadphaseEnd(ActiveSet *this)
{
  s_activeSetPendingInUse = 0;
}

/*
==============
ActiveSet::BytesAllocated
==============
*/
__int64 ActiveSet::BytesAllocated(ActiveSet *this)
{
  return (this->m_words + this->m_countMax) >> 2;
}

/*
==============
ActiveSet::CheckActive
==============
*/
unsigned __int8 ActiveSet::CheckActive(ActiveSet *this, unsigned int id)
{
  __int64 v2; 
  unsigned int *m_bitsActive; 
  unsigned int v5; 

  v2 = (int)id;
  if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 115, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
    __debugbreak();
  if ( (unsigned int)v2 >= this->m_idMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 116, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax") )
    __debugbreak();
  m_bitsActive = this->m_bitsActive;
  if ( !m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = m_bitsActive[v2 >> 5];
  return _bittest((const int *)&v5, v2 & 0x1F);
}

/*
==============
ActiveSet::Clear
==============
*/
void ActiveSet::Clear(ActiveSet *this)
{
  if ( this->m_bitsActive )
  {
    if ( !this->m_words && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 84, ASSERT_TYPE_ASSERT, "(m_words)", (const char *)&queryFormat, "m_words") )
      __debugbreak();
    memset_0(this->m_bitsActive, 0, 4i64 * this->m_words);
  }
  this->m_count = 0;
  *(_QWORD *)&this->m_idBiggest = 0i64;
  this->m_overflowActivationCount = 0;
  this->m_globalCount = 0;
}

/*
==============
ActiveSet::Count
==============
*/
__int64 ActiveSet::Count(ActiveSet *this)
{
  return this->m_count;
}

/*
==============
ActiveSet::DeltaIterate
==============
*/
void ActiveSet::DeltaIterate(ActiveSet *this, const LocalClientNum_t localClientNum, bool (*funcActivate)(const LocalClientNum_t, unsigned int), bool (*funcDeactivate)(const LocalClientNum_t, unsigned int))
{
  bool (__fastcall *v5)(const LocalClientNum_t, unsigned int); 
  __int64 v8; 
  bool v9; 
  unsigned int m_count; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  unsigned int *m_overflowActivationIds; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int *v29; 
  __int64 v30; 
  unsigned int v31; 

  v5 = funcActivate;
  if ( !funcActivate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 205, ASSERT_TYPE_ASSERT, "(funcActivate)", (const char *)&queryFormat, "funcActivate") )
    __debugbreak();
  if ( !funcDeactivate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 206, ASSERT_TYPE_ASSERT, "(funcDeactivate)", (const char *)&queryFormat, "funcDeactivate") )
    __debugbreak();
  if ( s_activeSetPendingBiggest < s_activeSetPendingSmallest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 207, ASSERT_TYPE_ASSERT, "(s_activeSetPendingBiggest >= s_activeSetPendingSmallest)", (const char *)&queryFormat, "s_activeSetPendingBiggest >= s_activeSetPendingSmallest") )
    __debugbreak();
  if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 208, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
    __debugbreak();
  if ( !this->m_words && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 209, ASSERT_TYPE_ASSERT, "(m_words)", (const char *)&queryFormat, "m_words") )
    __debugbreak();
  if ( this->m_idBiggest < this->m_idSmallest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 210, ASSERT_TYPE_ASSERT, "(m_idBiggest >= m_idSmallest)", (const char *)&queryFormat, "m_idBiggest >= m_idSmallest") )
    __debugbreak();
  v8 = 0i64;
  v9 = s_activeSetPendingCount == 0;
  this->m_overflowActivationCount = 0;
  if ( !v9 || this->m_count )
  {
    m_count = this->m_count;
    if ( s_activeSetPendingCount )
    {
      v11 = s_activeSetPendingSmallest >> 5;
      v12 = s_activeSetPendingBiggest >> 5;
      v31 = s_activeSetPendingSmallest >> 5;
      v26 = s_activeSetPendingBiggest >> 5;
      if ( m_count )
      {
        v13 = this->m_idSmallest >> 5;
        if ( v11 <= v13 )
          v13 = s_activeSetPendingSmallest >> 5;
        v31 = v13;
        v11 = v13;
        if ( v12 < this->m_idBiggest >> 5 )
        {
          v12 = this->m_idBiggest >> 5;
          v26 = v12;
          v31 = v13;
        }
      }
    }
    else
    {
      if ( !m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 257, ASSERT_TYPE_ASSERT, "(m_count)", (const char *)&queryFormat, "m_count") )
        __debugbreak();
      v11 = this->m_idSmallest >> 5;
      v12 = this->m_idBiggest >> 5;
      v26 = v12;
      v31 = v11;
    }
    if ( v11 <= v12 )
      goto LABEL_35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 261, ASSERT_TYPE_ASSERT, "(wordBiggest >= wordSmallest)", (const char *)&queryFormat, "wordBiggest >= wordSmallest") )
      __debugbreak();
    if ( v11 <= v12 )
    {
LABEL_35:
      v14 = 32 * v11;
      do
      {
        v15 = v11;
        v16 = s_activeSetPendingBits[v15];
        v29 = &s_activeSetPendingBits[v15];
        v30 = v15 * 4;
        v27 = v16;
        v17 = this->m_bitsActive[v15];
        v18 = v16 ^ v17;
        v28 = v17;
        if ( v16 != v17 )
        {
          do
          {
            v19 = __lzcnt(v18);
            v20 = 0x80000000 >> (v19 & 0x1F);
            v21 = v17 & v20;
            v22 = v14 - v19 + 31;
            if ( (v17 & v20) == (v16 & v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 292, ASSERT_TYPE_ASSERT, "((active & nextBitMask) != (pending & nextBitMask))", (const char *)&queryFormat, "(active & nextBitMask) != (pending & nextBitMask)") )
              __debugbreak();
            if ( v22 >= this->m_idMax )
            {
              LODWORD(v25) = this->m_idMax;
              LODWORD(v24) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_idMax )", "index doesn't index m_idMax\n\t%i not in [0, %i)", v24, v25) )
                __debugbreak();
            }
            if ( v22 >= this->m_idMax )
              break;
            v18 &= ~v20;
            if ( v21 )
            {
              funcDeactivate(localClientNum, v22);
            }
            else if ( !funcActivate(localClientNum, v22) )
            {
              m_overflowActivationIds = this->m_overflowActivationIds;
              if ( m_overflowActivationIds )
                m_overflowActivationIds[this->m_overflowActivationCount++] = v22;
            }
            v16 = v27;
            v17 = v28;
          }
          while ( v18 );
          v11 = v31;
          v12 = v26;
          *(unsigned int *)((char *)this->m_bitsActive + v30) = *v29;
        }
        ++v11;
        v14 += 32;
        v31 = v11;
      }
      while ( v11 <= v12 );
      v5 = funcActivate;
      v8 = 0i64;
    }
    if ( this->m_overflowActivationCount )
    {
      do
      {
        v5(localClientNum, this->m_overflowActivationIds[v8]);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < this->m_overflowActivationCount );
    }
    this->m_idSmallest = s_activeSetPendingSmallest;
    this->m_idBiggest = s_activeSetPendingBiggest;
    this->m_count = s_activeSetPendingCount;
  }
}

/*
==============
ActiveSet::Draw3d
==============
*/
void ActiveSet::Draw3d(ActiveSet *this, const LocalClientNum_t localClientNum, const vec3_t *viewPos, bool (*const funcValid)(const LocalClientNum_t, unsigned int), void (*funcGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), float (*funcGetRadius)(const LocalClientNum_t, unsigned int))
{
  float (__fastcall *v6)(const LocalClientNum_t, unsigned int); 
  unsigned int i; 
  double v12; 
  float v13; 
  float v14; 
  unsigned int *m_bitsActive; 
  int v16; 
  unsigned int m_idMax; 
  const vec4_t *v18; 
  const char *v19; 
  vec3_t start; 
  vec3_t end; 

  v6 = funcGetRadius;
  for ( i = 0; i < this->m_idMax; ++i )
  {
    funcGetOrigin(localClientNum, i, &start);
    v12 = ((double (__fastcall *)(_QWORD, _QWORD))v6)((unsigned int)localClientNum, i);
    v13 = (float)((float)((float)(start.v[1] - viewPos->v[1]) * (float)(start.v[1] - viewPos->v[1])) + (float)((float)(start.v[0] - viewPos->v[0]) * (float)(start.v[0] - viewPos->v[0]))) + (float)((float)(start.v[2] - viewPos->v[2]) * (float)(start.v[2] - viewPos->v[2]));
    v14 = *(float *)&v12 * *(float *)&v12;
    if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 115, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
      __debugbreak();
    if ( i >= this->m_idMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 116, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax") )
      __debugbreak();
    m_bitsActive = this->m_bitsActive;
    if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v16 = m_bitsActive[(__int64)(int)i >> 5] & (1 << (i & 0x1F));
    if ( v16 || v13 <= 16000000.0 )
    {
      m_idMax = this->m_idMax;
      end.v[0] = start.v[0];
      end.v[1] = start.v[1];
      end.v[2] = start.v[2] + 20.0;
      if ( this->m_globalCount < m_idMax )
      {
        if ( !funcValid || funcValid(localClientNum, i) )
        {
          if ( *(float *)&v12 > 0.0 )
          {
            v18 = &colorRed;
            if ( v16 )
            {
              if ( v13 <= v14 )
                v18 = &colorGreen;
            }
            else if ( v14 <= v13 )
            {
              v18 = &colorWhite;
            }
          }
          else
          {
            v18 = &colorPurple;
          }
        }
        else
        {
          v18 = &colorRed;
          if ( !v16 )
            v18 = &colorBlue;
        }
      }
      else if ( *(float *)&v12 > 0.0 )
      {
        v18 = &colorGreen;
        if ( v14 <= v13 )
          v18 = &colorYellow;
      }
      else
      {
        v18 = &colorPurple;
      }
      CG_DebugLine(&start, &end, v18, 0, 0);
      if ( v13 < 2250000.0 )
      {
        v19 = j_va("%d", i);
        CL_AddDebugStringCentered(&start, &colorWhite, 0.25, v19, 0, 0);
      }
    }
    v6 = funcGetRadius;
  }
}

/*
==============
ActiveSet::DrawOverlay
==============
*/
void ActiveSet::DrawOverlay(ActiveSet *this, const LocalClientNum_t localClientNum, float *x, float *y, const char *name)
{
  bool v8; 
  const ScreenPlacement *v9; 
  unsigned int m_countMax; 
  unsigned int v11; 
  char *fmt; 
  __int64 forceColor; 
  vec4_t setColor; 
  char dest[256]; 

  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v9 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v8 )
      __debugbreak();
    goto LABEL_7;
  }
  v9 = &scrPlaceViewDisplay[localClientNum];
LABEL_8:
  Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, name);
  CG_DrawStringExt(v9, *x, *y, dest, &colorWhite, 0, 1, 8.0, 0);
  *y = *y + 8.0;
  *x = *x + 16.0;
  m_countMax = this->m_countMax;
  setColor = colorWhite;
  if ( !m_countMax )
    m_countMax = this->m_idMax;
  LODWORD(forceColor) = m_countMax;
  LODWORD(fmt) = this->m_globalCount;
  Com_sprintf(dest, 0x100ui64, "active = %d local + %d global / %d max", this->m_count, fmt, forceColor);
  v11 = this->m_countMax;
  if ( v11 && this->m_count == v11 )
  {
    I_strcat(dest, 0x100ui64, " <WARNING> max active reached, results will be erratic");
    setColor = colorRed;
  }
  CG_DrawStringExt(v9, *x, *y, dest, &setColor, 0, 1, 8.0, 0);
  *y = *y + 8.0;
  *x = *x - 16.0;
}

/*
==============
ActiveSet::Free
==============
*/
void ActiveSet::Free(ActiveSet *this)
{
  this->m_overflowActivationCount = 0;
  this->m_bitsActive = NULL;
  this->m_idMax = 0;
  this->m_words = 0;
}

/*
==============
ActiveSet::MaxID
==============
*/
__int64 ActiveSet::MaxID(ActiveSet *this)
{
  return this->m_idMax;
}

/*
==============
ActiveSet::Update
==============
*/
void ActiveSet::Update(ActiveSet *this, LocalClientNum_t localClientNum, const vec3_t *viewPos, float viewRadius, bool (*const funcValid)(const LocalClientNum_t, unsigned int), bool (*const funcActivate)(const LocalClientNum_t, unsigned int), bool (*funcDeactivate)(const LocalClientNum_t, unsigned int), void (*funcGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), float (*funcGetRadius)(const LocalClientNum_t, unsigned int), const SpatialPartition_Tree *ssrTree)
{
  signed __int64 v10; 
  void *v11; 
  unsigned __int64 v12; 
  void (__fastcall *v15)(const LocalClientNum_t, unsigned int, vec3_t *); 
  float (__fastcall *v17)(const LocalClientNum_t, unsigned int); 
  unsigned int m_idMax; 
  double v19; 
  float v20; 
  const char *v21; 
  unsigned int m_countMax; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  double v26; 
  float v27; 
  float v28; 
  __int64 v29; 
  int v30; 
  bool v31; 
  bool (__fastcall *v32)(const LocalClientNum_t, unsigned int); 
  bool (__fastcall *v33)(const LocalClientNum_t, unsigned int); 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  char v37[4432]; 

  v11 = alloca(v10);
  v12 = (unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v12 + 4416) = (unsigned __int64)&v34 ^ _security_cookie;
  v15 = funcGetOrigin;
  v17 = funcGetRadius;
  *(_QWORD *)v12 = funcDeactivate;
  *(_QWORD *)(v12 + 24) = funcActivate;
  *(_QWORD *)(v12 + 8) = funcGetOrigin;
  *(_QWORD *)(v12 + 16) = funcGetRadius;
  if ( !funcActivate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 366, ASSERT_TYPE_ASSERT, "(funcActivate)", (const char *)&queryFormat, "funcActivate") )
    __debugbreak();
  if ( !*(_QWORD *)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 367, ASSERT_TYPE_ASSERT, "(funcDeactivate)", (const char *)&queryFormat, "funcDeactivate") )
    __debugbreak();
  if ( !funcGetOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 368, ASSERT_TYPE_ASSERT, "(funcGetOrigin)", (const char *)&queryFormat, "funcGetOrigin") )
    __debugbreak();
  if ( !funcGetRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 369, ASSERT_TYPE_ASSERT, "(funcGetRadius)", (const char *)&queryFormat, "funcGetRadius") )
    __debugbreak();
  if ( !ssrTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 370, ASSERT_TYPE_ASSERT, "(ssrTree)", (const char *)&queryFormat, "ssrTree") )
    __debugbreak();
  m_idMax = this->m_idMax;
  if ( m_idMax && this->m_globalCount < m_idMax )
  {
    if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 141, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
      __debugbreak();
    if ( !this->m_words && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 142, ASSERT_TYPE_ASSERT, "(m_words)", (const char *)&queryFormat, "m_words") )
      __debugbreak();
    if ( s_activeSetPendingInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 143, ASSERT_TYPE_ASSERT, "(!s_activeSetPendingInUse)", (const char *)&queryFormat, "!s_activeSetPendingInUse") )
      __debugbreak();
    if ( this->m_idMax >= 0x1D4C0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 144, ASSERT_TYPE_ASSERT, "(m_idMax < ( 120000 ))", (const char *)&queryFormat, "m_idMax < ACTIVE_SET_ID_MAX") )
      __debugbreak();
    if ( this->m_words >= 0xEA6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 145, ASSERT_TYPE_ASSERT, "(m_words < ( ( 120000 ) / ( 32 ) ))", (const char *)&queryFormat, "m_words < ACTIVE_SET_WORD_MAX") )
      __debugbreak();
    memset_0(s_activeSetPendingBits, 0, 4i64 * this->m_words);
    s_activeSetPendingInUse = 1;
    s_activeSetPendingCount = 0;
    s_activeSetPendingSmallest = 0;
    s_activeSetPendingBiggest = 0;
    if ( !ssrTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 388, ASSERT_TYPE_ASSERT, "(ssrTree)", (const char *)&queryFormat, "ssrTree") )
      __debugbreak();
    v19 = *(double *)viewPos->v;
    v20 = viewPos->v[2];
    *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128) = 0;
    *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = 0i64;
    *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) = 0i64;
    *(double *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = v19;
    *(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3C) = viewRadius;
    *(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = viewRadius;
    *(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) = viewRadius;
    *(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = v20;
    *(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = 0i64;
    SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(v12 + 96), ssrTree, (const Bounds *)(v12 + 48));
    if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v12 + 96)) )
    {
      v21 = "m_alwaysIndex < m_spatialTree->alwaysListLength";
      do
      {
        m_countMax = this->m_countMax;
        if ( m_countMax && s_activeSetPendingCount >= m_countMax )
          break;
        if ( !*(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
            __debugbreak();
          v21 = "m_alwaysIndex < m_spatialTree->alwaysListLength";
        }
        v23 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 20i64);
        v24 = *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
        if ( v24 == v23 )
        {
          if ( !*(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
            __debugbreak();
          if ( (**(_BYTE **)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
            __debugbreak();
          if ( *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) >= **(unsigned __int8 **)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
            __debugbreak();
          v25 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) + 4i64 * *(unsigned int *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) + 4);
        }
        else
        {
          if ( v24 >= v23 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
              __debugbreak();
            v24 = *(_DWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
          }
          v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 8i64) + 4i64 * v24);
        }
        if ( v25 < this->m_idMax && (!funcValid || ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, const char *))funcValid)((unsigned int)localClientNum, v25, v21)) )
        {
          v15((const LocalClientNum_t)localClientNum, v25, (vec3_t *)(v12 + 32));
          v26 = ((double (__fastcall *)(_QWORD, _QWORD))v17)((unsigned int)localClientNum, v25);
          if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 163, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
            __debugbreak();
          if ( v25 >= this->m_idMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 164, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax") )
            __debugbreak();
          v27 = *(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x24) - viewPos->v[1];
          v28 = *(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) - viewPos->v[2];
          if ( (float)((float)((float)(v27 * v27) + (float)((float)(*(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) - viewPos->v[0]) * (float)(*(float *)(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) - viewPos->v[0]))) + (float)(v28 * v28)) <= (float)(*(float *)&v26 * *(float *)&v26) )
          {
            if ( v25 >= 0x1D4C0 )
            {
              LODWORD(v36) = 120000;
              LODWORD(v35) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v35, v36) )
                __debugbreak();
            }
            v29 = (__int64)(int)v25 >> 5;
            v30 = 1 << (v25 & 0x1F);
            if ( (v30 & s_activeSetPendingBits[v29]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 178, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( s_activeSetPendingBits, id, std::extent<decltype( s_activeSetPendingBits )>::value ? sizeof( decltype( s_activeSetPendingBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( s_activeSetPendingBits, id )") )
              __debugbreak();
            if ( v25 >= 0x1D4C0 )
            {
              LODWORD(v36) = 120000;
              LODWORD(v35) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v35, v36) )
                __debugbreak();
            }
            s_activeSetPendingBits[v29] |= v30;
            if ( !s_activeSetPendingCount || s_activeSetPendingSmallest > v25 )
              s_activeSetPendingSmallest = v25;
            if ( !s_activeSetPendingCount || s_activeSetPendingBiggest < v25 )
              s_activeSetPendingBiggest = v25;
            v15 = *(void (__fastcall **)(const LocalClientNum_t, unsigned int, vec3_t *))(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
            v17 = *(float (__fastcall **)(const LocalClientNum_t, unsigned int))(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            ++s_activeSetPendingCount;
          }
        }
        v31 = SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v12 + 96));
        v21 = "m_alwaysIndex < m_spatialTree->alwaysListLength";
      }
      while ( v31 );
    }
    v32 = *(bool (__fastcall **)(const LocalClientNum_t, unsigned int))v12;
    v33 = *(bool (__fastcall **)(const LocalClientNum_t, unsigned int))(((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    s_activeSetPendingInUse = 0;
    ActiveSet::DeltaIterate(this, localClientNum, v33, v32);
  }
}

