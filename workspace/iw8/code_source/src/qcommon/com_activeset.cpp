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

void __fastcall ActiveSet::BroadphaseAdd(ActiveSet *this, unsigned int id, const vec3_t *origin, double radius)
{
  __int64 v7; 
  bool v9; 
  bool v10; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RSI = origin;
  __asm { vmovaps xmm6, xmm3 }
  v7 = (int)id;
  if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 163, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
    __debugbreak();
  v9 = (unsigned int)v7 <= this->m_idMax;
  if ( (unsigned int)v7 >= this->m_idMax )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 164, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+8]
    vsubss  xmm3, xmm0, dword ptr [rax]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm2, xmm0, dword ptr [rax+4]
    vsubss  xmm4, xmm1, dword ptr [rax+8]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmovaps xmm6, [rsp+68h+var_28]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vcomiss xmm4, xmm0
  }
  if ( v9 )
  {
    if ( (unsigned int)v7 >= 0x1D4C0 )
    {
      v27 = 120000;
      LODWORD(v25) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v25, v27) )
        __debugbreak();
    }
    v24 = 1 << (v7 & 0x1F);
    if ( (v24 & s_activeSetPendingBits[v7 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 178, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( s_activeSetPendingBits, id, std::extent<decltype( s_activeSetPendingBits )>::value ? sizeof( decltype( s_activeSetPendingBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( s_activeSetPendingBits, id )") )
      __debugbreak();
    if ( (unsigned int)v7 >= 0x1D4C0 )
    {
      LODWORD(v26) = 120000;
      LODWORD(v25) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    s_activeSetPendingBits[v7 >> 5] |= v24;
    if ( !s_activeSetPendingCount || s_activeSetPendingSmallest > (unsigned int)v7 )
      s_activeSetPendingSmallest = v7;
    if ( !s_activeSetPendingCount || s_activeSetPendingBiggest < (unsigned int)v7 )
      s_activeSetPendingBiggest = v7;
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
  float (__fastcall *v16)(const LocalClientNum_t, unsigned int); 
  unsigned int v17; 
  unsigned int *m_bitsActive; 
  __int64 v40; 
  int v41; 
  unsigned int m_idMax; 
  const vec4_t *v45; 
  bool v46; 
  bool v47; 
  char v48; 
  const char *v49; 
  vec3_t start; 
  vec3_t end; 
  void *retaddr; 

  _R11 = &retaddr;
  v16 = funcGetRadius;
  v17 = 0;
  if ( this->m_idMax )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovss  xmm10, cs:__real@4b742400
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovss  xmm11, cs:__real@4a095440
      vmovaps [rsp+118h+var_A8], xmm12
      vmovss  xmm12, cs:__real@3e800000
      vmovaps [rsp+118h+var_B8], xmm13
      vmovss  xmm13, cs:__real@41a00000
      vxorps  xmm9, xmm9, xmm9
    }
    do
    {
      funcGetOrigin(localClientNum, v17, &start);
      *(double *)&_XMM0 = ((double (__fastcall *)(_QWORD, _QWORD))v16)((unsigned int)localClientNum, v17);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+118h+start]
        vsubss  xmm4, xmm1, dword ptr [r12]
        vmovss  xmm2, dword ptr [rsp+118h+start+4]
        vmovss  xmm1, dword ptr [rsp+118h+start+8]
        vsubss  xmm3, xmm2, dword ptr [r12+4]
        vsubss  xmm5, xmm1, dword ptr [r12+8]
        vmulss  xmm3, xmm3, xmm3
        vmulss  xmm2, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm6, xmm4, xmm1
        vmovaps xmm7, xmm0
        vmulss  xmm8, xmm0, xmm0
      }
      if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 115, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
        __debugbreak();
      if ( v17 >= this->m_idMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 116, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax") )
        __debugbreak();
      m_bitsActive = this->m_bitsActive;
      if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v40 = (__int64)(int)v17 >> 5;
      v41 = m_bitsActive[v40] & (1 << (v17 & 0x1F));
      if ( v41 )
        goto LABEL_14;
      __asm { vcomiss xmm6, xmm10 }
      if ( (m_bitsActive[v40] & (1 << (v17 & 0x1F))) == 0 )
      {
LABEL_14:
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+118h+start]
          vmovss  xmm1, dword ptr [rsp+118h+start+4]
          vaddss  xmm2, xmm13, dword ptr [rsp+118h+start+8]
        }
        m_idMax = this->m_idMax;
        __asm
        {
          vmovss  dword ptr [rsp+118h+end], xmm0
          vmovss  dword ptr [rsp+118h+end+4], xmm1
          vmovss  dword ptr [rsp+118h+end+8], xmm2
        }
        if ( this->m_globalCount < m_idMax )
        {
          v46 = funcValid == NULL;
          if ( !funcValid || (v47 = funcValid(localClientNum, v17), v46 = !v47, v47) )
          {
            __asm { vcomiss xmm7, xmm9 }
            if ( v46 )
            {
              v45 = &colorPurple;
            }
            else
            {
              v45 = &colorRed;
              if ( v41 )
              {
                __asm { vcomiss xmm6, xmm8 }
              }
              else
              {
                __asm { vcomiss xmm8, xmm6 }
                v45 = &colorWhite;
              }
            }
          }
          else
          {
            v45 = &colorRed;
            if ( !v41 )
              v45 = &colorBlue;
          }
        }
        else
        {
          __asm { vcomiss xmm7, xmm9 }
          if ( this->m_globalCount > m_idMax )
          {
            __asm { vcomiss xmm8, xmm6 }
            v45 = &colorGreen;
            if ( this->m_globalCount <= m_idMax )
              v45 = &colorYellow;
          }
          else
          {
            v45 = &colorPurple;
          }
        }
        CG_DebugLine(&start, &end, v45, 0, 0);
        __asm { vcomiss xmm6, xmm11 }
        if ( v48 )
        {
          v49 = j_va("%d", v17);
          __asm { vmovaps xmm2, xmm12; scale }
          CL_AddDebugStringCentered(&start, &colorWhite, *(float *)&_XMM2, v49, 0, 0);
        }
      }
      v16 = funcGetRadius;
      ++v17;
    }
    while ( v17 < this->m_idMax );
    __asm
    {
      vmovaps xmm13, [rsp+118h+var_B8]
      vmovaps xmm12, [rsp+118h+var_A8]
      vmovaps xmm11, [rsp+118h+var_98]
      vmovaps xmm10, [rsp+118h+var_88]
      vmovaps xmm9, [rsp+118h+var_78]
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_58]
      vmovaps xmm6, [rsp+118h+var_48]
    }
  }
}

/*
==============
ActiveSet::DrawOverlay
==============
*/
void ActiveSet::DrawOverlay(ActiveSet *this, const LocalClientNum_t localClientNum, float *x, float *y, const char *name)
{
  bool v9; 
  const ScreenPlacement *v10; 
  unsigned int m_countMax; 
  unsigned int v19; 
  char *fmt; 
  __int64 forceColor; 
  float v29; 
  float v30; 
  vec4_t setColor; 
  char dest[256]; 

  __asm { vmovaps [rsp+1A8h+var_38], xmm6 }
  _RBP = y;
  _RSI = x;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v10 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v9 )
      __debugbreak();
    goto LABEL_7;
  }
  v10 = &scrPlaceViewDisplay[localClientNum];
LABEL_8:
  Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, name);
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rsi]; x
    vmovss  [rsp+1A8h+var_170], xmm6
  }
  CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v29, 0);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm2, dword ptr [rsi]
    vaddss  xmm0, xmm2, cs:__real@41800000
    vmovss  dword ptr [rsi], xmm0
    vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
  }
  m_countMax = this->m_countMax;
  __asm { vmovups xmmword ptr [rsp+1A8h+setColor], xmm1 }
  if ( !m_countMax )
    m_countMax = this->m_idMax;
  LODWORD(forceColor) = m_countMax;
  LODWORD(fmt) = this->m_globalCount;
  Com_sprintf(dest, 0x100ui64, "active = %d local + %d global / %d max", this->m_count, fmt, forceColor);
  v19 = this->m_countMax;
  if ( v19 && this->m_count == v19 )
  {
    I_strcat(dest, 0x100ui64, " <WARNING> max active reached, results will be erratic");
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vmovups xmmword ptr [rsp+1A8h+setColor], xmm0
    }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rsi]; x
    vmovss  [rsp+1A8h+var_170], xmm6
  }
  CG_DrawStringExt(v10, *(float *)&_XMM1, *(float *)&_XMM2, dest, &setColor, 0, 1, v30, 0);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm2, dword ptr [rsi]
    vsubss  xmm0, xmm2, cs:__real@41800000
    vmovss  dword ptr [rsi], xmm0
    vmovaps xmm6, [rsp+1A8h+var_38]
  }
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

void __fastcall ActiveSet::Update(ActiveSet *this, LocalClientNum_t localClientNum, const vec3_t *viewPos, double viewRadius, bool (__fastcall *const funcValid)(const LocalClientNum_t, unsigned int), bool (__fastcall *const funcActivate)(const LocalClientNum_t, unsigned int), bool (__fastcall *funcDeactivate)(const LocalClientNum_t, unsigned int), void (__fastcall *funcGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), float (__fastcall *funcGetRadius)(const LocalClientNum_t, unsigned int), const SpatialPartition_Tree *ssrTree)
{
  signed __int64 v10; 
  void *v12; 
  void (__fastcall *v16)(const LocalClientNum_t, unsigned int, vec3_t *); 
  float (__fastcall *v18)(const LocalClientNum_t, unsigned int); 
  unsigned int m_idMax; 
  float v22; 
  const char *v23; 
  unsigned int m_countMax; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  bool v29; 
  bool v30; 
  __int64 v42; 
  int v43; 
  bool v44; 
  bool (__fastcall *v45)(const LocalClientNum_t, unsigned int); 
  bool (__fastcall *v46)(const LocalClientNum_t, unsigned int); 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  char v51[4432]; 

  v12 = alloca(v10);
  __asm { vmovaps [rsp+1208h+var_58], xmm6 }
  _RBP = (unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4416) = (unsigned __int64)&v48 ^ _security_cookie;
  _R13 = viewPos;
  v16 = funcGetOrigin;
  v18 = funcGetRadius;
  *(_QWORD *)_RBP = funcDeactivate;
  *(_QWORD *)(_RBP + 24) = funcActivate;
  *(_QWORD *)(_RBP + 8) = funcGetOrigin;
  *(_QWORD *)(_RBP + 16) = funcGetRadius;
  __asm { vmovaps xmm6, xmm3 }
  if ( !funcActivate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 366, ASSERT_TYPE_ASSERT, "(funcActivate)", (const char *)&queryFormat, "funcActivate") )
    __debugbreak();
  if ( !*(_QWORD *)_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 367, ASSERT_TYPE_ASSERT, "(funcDeactivate)", (const char *)&queryFormat, "funcDeactivate") )
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
    __asm { vmovsd  xmm0, qword ptr [r13+0] }
    v22 = _R13->v[2];
    *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128) = 0;
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = 0i64;
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) = 0i64;
    __asm
    {
      vmovsd  qword ptr [rbp+30h], xmm0
      vmovss  dword ptr [rbp+3Ch], xmm6
      vmovss  dword ptr [rbp+40h], xmm6
      vmovss  dword ptr [rbp+44h], xmm6
    }
    *(float *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = v22;
    *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = 0i64;
    SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 96), ssrTree, (const Bounds *)(_RBP + 48));
    if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 96)) )
    {
      v23 = "m_alwaysIndex < m_spatialTree->alwaysListLength";
      do
      {
        m_countMax = this->m_countMax;
        if ( m_countMax && s_activeSetPendingCount >= m_countMax )
          break;
        if ( !*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
            __debugbreak();
          v23 = "m_alwaysIndex < m_spatialTree->alwaysListLength";
        }
        v25 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 20i64);
        v26 = *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
        if ( v26 == v25 )
        {
          if ( !*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
            __debugbreak();
          if ( (**(_BYTE **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
            __debugbreak();
          if ( *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) >= **(unsigned __int8 **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
            __debugbreak();
          v27 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) + 4i64 * *(unsigned int *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) + 4);
        }
        else
        {
          if ( v26 >= v25 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
              __debugbreak();
            v26 = *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
          }
          v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 8i64) + 4i64 * v26);
        }
        if ( v27 < this->m_idMax && (!funcValid || ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, const char *))funcValid)((unsigned int)localClientNum, v27, v23)) )
        {
          v16((const LocalClientNum_t)localClientNum, v27, (vec3_t *)(_RBP + 32));
          *(double *)&_XMM0 = ((double (__fastcall *)(_QWORD, _QWORD))v18)((unsigned int)localClientNum, v27);
          __asm { vmovaps xmm6, xmm0 }
          if ( !this->m_bitsActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 163, ASSERT_TYPE_ASSERT, "(m_bitsActive)", (const char *)&queryFormat, "m_bitsActive") )
            __debugbreak();
          v29 = v27 <= this->m_idMax;
          if ( v27 >= this->m_idMax )
          {
            v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 164, ASSERT_TYPE_ASSERT, "(id < m_idMax)", (const char *)&queryFormat, "id < m_idMax");
            v29 = !v30;
            if ( v30 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+20h]
            vsubss  xmm3, xmm0, dword ptr [r13+0]
            vmovss  xmm1, dword ptr [rbp+24h]
            vsubss  xmm2, xmm1, dword ptr [r13+4]
            vmovss  xmm0, dword ptr [rbp+28h]
            vsubss  xmm4, xmm0, dword ptr [r13+8]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm2, xmm2, xmm2
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm6, xmm6
            vcomiss xmm4, xmm1
          }
          if ( v29 )
          {
            if ( v27 >= 0x1D4C0 )
            {
              LODWORD(v50) = 120000;
              LODWORD(v49) = v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v49, v50) )
                __debugbreak();
            }
            v42 = (__int64)(int)v27 >> 5;
            v43 = 1 << (v27 & 0x1F);
            if ( (v43 & s_activeSetPendingBits[v42]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_activeset.cpp", 178, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( s_activeSetPendingBits, id, std::extent<decltype( s_activeSetPendingBits )>::value ? sizeof( decltype( s_activeSetPendingBits ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( s_activeSetPendingBits, id )") )
              __debugbreak();
            if ( v27 >= 0x1D4C0 )
            {
              LODWORD(v50) = 120000;
              LODWORD(v49) = v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v49, v50) )
                __debugbreak();
            }
            s_activeSetPendingBits[v42] |= v43;
            if ( !s_activeSetPendingCount || s_activeSetPendingSmallest > v27 )
              s_activeSetPendingSmallest = v27;
            if ( !s_activeSetPendingCount || s_activeSetPendingBiggest < v27 )
              s_activeSetPendingBiggest = v27;
            v16 = *(void (__fastcall **)(const LocalClientNum_t, unsigned int, vec3_t *))(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
            v18 = *(float (__fastcall **)(const LocalClientNum_t, unsigned int))(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            ++s_activeSetPendingCount;
          }
        }
        v44 = SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 96));
        v23 = "m_alwaysIndex < m_spatialTree->alwaysListLength";
      }
      while ( v44 );
    }
    v45 = *(bool (__fastcall **)(const LocalClientNum_t, unsigned int))_RBP;
    v46 = *(bool (__fastcall **)(const LocalClientNum_t, unsigned int))(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    s_activeSetPendingInUse = 0;
    ActiveSet::DeltaIterate(this, localClientNum, v46, v45);
  }
  __asm { vmovaps xmm6, [rsp+1208h+var_58] }
}

