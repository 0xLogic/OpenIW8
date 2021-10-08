/*
==============
CgDynamicMedia::ClearMediaCache
==============
*/

void __fastcall CgDynamicMedia::ClearMediaCache(CgDynamicMedia *this)
{
  ?ClearMediaCache@CgDynamicMedia@@IEAAXXZ(this);
}

/*
==============
CgDynamicMedia::GetFxId
==============
*/

unsigned int __fastcall CgDynamicMedia::GetFxId(CgDynamicMedia *this, const char *string)
{
  return ?GetFxId@CgDynamicMedia@@QEAAIPEBD@Z(this, string);
}

/*
==============
CgDynamicMedia::GetCgDynamicMedia
==============
*/

CgDynamicMedia *__fastcall CgDynamicMedia::GetCgDynamicMedia()
{
  return ?GetCgDynamicMedia@CgDynamicMedia@@SAPEAV1@XZ();
}

/*
==============
CgDynamicMedia::IsValidFx
==============
*/

bool __fastcall CgDynamicMedia::IsValidFx(CgDynamicMedia *this, int fxId)
{
  return ?IsValidFx@CgDynamicMedia@@QEBA_NH@Z(this, fxId);
}

/*
==============
CgDynamicMedia::AllocateMemory<CgDynamicMediaMP>
==============
*/

void __fastcall CgDynamicMedia::AllocateMemory<CgDynamicMediaMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VCgDynamicMediaMP@@@CgDynamicMedia@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CgDynamicMedia::CgDynamicMedia
==============
*/

void __fastcall CgDynamicMedia::CgDynamicMedia(CgDynamicMedia *this, FXRegisteredDef *inFxs, unsigned int inFxCount)
{
  ??0CgDynamicMedia@@IEAA@PEAVFXRegisteredDef@@I@Z(this, inFxs, inFxCount);
}

/*
==============
CgDynamicMedia::GetFx
==============
*/

FXRegisteredDef *__fastcall CgDynamicMedia::GetFx(CgDynamicMedia *this, int fxId)
{
  return ?GetFx@CgDynamicMedia@@QEAAPEAVFXRegisteredDef@@H@Z(this, fxId);
}

/*
==============
CgDynamicMedia::FreeMemory<CgDynamicMediaSP>
==============
*/

__int64 CgDynamicMedia::FreeMemory<CgDynamicMediaSP>()
{
  return ??$FreeMemory@VCgDynamicMediaSP@@@CgDynamicMedia@@SAXXZ();
}

/*
==============
CgDynamicMedia::~CgDynamicMedia
==============
*/

void __fastcall CgDynamicMedia::~CgDynamicMedia(CgDynamicMedia *this)
{
  ??1CgDynamicMedia@@MEAA@XZ(this);
}

/*
==============
CgDynamicMedia::AllocateMemory<CgDynamicMediaSP>
==============
*/

void __fastcall CgDynamicMedia::AllocateMemory<CgDynamicMediaSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VCgDynamicMediaSP@@@CgDynamicMedia@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CgDynamicMedia::FreeMemory<CgDynamicMediaMP>
==============
*/

__int64 CgDynamicMedia::FreeMemory<CgDynamicMediaMP>()
{
  return ??$FreeMemory@VCgDynamicMediaMP@@@CgDynamicMedia@@SAXXZ();
}

/*
==============
CgDynamicMedia::AllocateMemory<CgDynamicMediaMP>
==============
*/
void CgDynamicMedia::AllocateMemory<CgDynamicMediaMP>(HunkUser *hunkUser)
{
  CgDynamicMediaMP *v2; 
  CgDynamicMedia *v3; 

  if ( CgDynamicMedia::ms_cgDynamicMedia && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 41, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia == nullptr)", "%s\n\tCreating CgDynamicMedia when not null", "ms_cgDynamicMedia == nullptr") )
    __debugbreak();
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 42, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating CgDynamicMedia when still marked as allocated", "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v2 = (CgDynamicMediaMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x1018ui64, 8ui64, "CgDynamicMedia::AllocateMemory");
  CgDynamicMediaMP::CgDynamicMediaMP(v2);
  CgDynamicMedia::ms_cgDynamicMedia = v3;
  LOBYTE(CgDynamicMedia::ms_allocatedType) = 2;
}

/*
==============
CgDynamicMedia::AllocateMemory<CgDynamicMediaSP>
==============
*/
void CgDynamicMedia::AllocateMemory<CgDynamicMediaSP>(HunkUser *hunkUser)
{
  CgDynamicMediaSP *v2; 
  CgDynamicMedia *v3; 

  if ( CgDynamicMedia::ms_cgDynamicMedia && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 41, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia == nullptr)", "%s\n\tCreating CgDynamicMedia when not null", "ms_cgDynamicMedia == nullptr") )
    __debugbreak();
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 42, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating CgDynamicMedia when still marked as allocated", "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v2 = (CgDynamicMediaSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x2018ui64, 8ui64, "CgDynamicMedia::AllocateMemory");
  CgDynamicMediaSP::CgDynamicMediaSP(v2);
  CgDynamicMedia::ms_cgDynamicMedia = v3;
  LOBYTE(CgDynamicMedia::ms_allocatedType) = 1;
}

/*
==============
CgDynamicMedia::FreeMemory<CgDynamicMediaMP>
==============
*/
void CgDynamicMedia::FreeMemory<CgDynamicMediaMP>()
{
  unsigned __int8 v0; 
  CgDynamicMedia *v1; 
  __int64 v2; 
  int v3; 
  int v4; 

  v0 = CgDynamicMedia::ms_allocatedType;
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType )
  {
    if ( (_BYTE)CgDynamicMedia::ms_allocatedType == HALF_HALF )
    {
LABEL_7:
      v1 = CgDynamicMedia::ms_cgDynamicMedia;
      if ( !CgDynamicMedia::ms_cgDynamicMedia )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", (_DWORD)CgDynamicMedia::ms_cgDynamicMedia + 68, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia != nullptr)", "%s\n\tAttempting to destroy CgDynamicMedia when object is null", "ms_cgDynamicMedia != nullptr") )
          __debugbreak();
        v1 = CgDynamicMedia::ms_cgDynamicMedia;
      }
      ((void (__fastcall *)(CgDynamicMedia *, _QWORD))v1->~CgDynamicMedia)(v1, 0i64);
      DebugWipe(CgDynamicMedia::ms_cgDynamicMedia, 0x1018ui64);
      LOBYTE(CgDynamicMedia::ms_allocatedType) = 0;
      CgDynamicMedia::ms_cgDynamicMedia = NULL;
      return;
    }
    v4 = 2;
    v3 = (unsigned __int8)CgDynamicMedia::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 64, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE)", "%s\n\tAttempting to destroy CgDynamicMedia with mismatching mode %d != %d", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgDynamicMedia::ms_allocatedType;
  }
  if ( v0 == 2 )
    goto LABEL_7;
  if ( v0 )
  {
    LODWORD(v2) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 78, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tFailed to properly destroy CgDynamicMedia : mode remains %d", "ms_allocatedType == GameModeType::NONE", v2) )
      __debugbreak();
  }
  if ( CgDynamicMedia::ms_cgDynamicMedia && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 79, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia == nullptr)", "%s\n\tFailed to properly destroy CgDynamicMedia : pointer remains %p", "ms_cgDynamicMedia == nullptr", CgDynamicMedia::ms_cgDynamicMedia) )
    __debugbreak();
}

/*
==============
CgDynamicMedia::FreeMemory<CgDynamicMediaSP>
==============
*/
void CgDynamicMedia::FreeMemory<CgDynamicMediaSP>()
{
  unsigned __int8 v0; 
  CgDynamicMedia *v1; 
  __int64 v2; 
  int v3; 
  int v4; 

  v0 = CgDynamicMedia::ms_allocatedType;
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType )
  {
    if ( (_BYTE)CgDynamicMedia::ms_allocatedType == HALF )
    {
LABEL_7:
      v1 = CgDynamicMedia::ms_cgDynamicMedia;
      if ( !CgDynamicMedia::ms_cgDynamicMedia )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", (_DWORD)CgDynamicMedia::ms_cgDynamicMedia + 68, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia != nullptr)", "%s\n\tAttempting to destroy CgDynamicMedia when object is null", "ms_cgDynamicMedia != nullptr") )
          __debugbreak();
        v1 = CgDynamicMedia::ms_cgDynamicMedia;
      }
      ((void (__fastcall *)(CgDynamicMedia *, _QWORD))v1->~CgDynamicMedia)(v1, 0i64);
      DebugWipe(CgDynamicMedia::ms_cgDynamicMedia, 0x2018ui64);
      LOBYTE(CgDynamicMedia::ms_allocatedType) = 0;
      CgDynamicMedia::ms_cgDynamicMedia = NULL;
      return;
    }
    v4 = 1;
    v3 = (unsigned __int8)CgDynamicMedia::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 64, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE)", "%s\n\tAttempting to destroy CgDynamicMedia with mismatching mode %d != %d", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgDynamicMedia::ms_allocatedType;
  }
  if ( v0 == 1 )
    goto LABEL_7;
  if ( v0 )
  {
    LODWORD(v2) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 78, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tFailed to properly destroy CgDynamicMedia : mode remains %d", "ms_allocatedType == GameModeType::NONE", v2) )
      __debugbreak();
  }
  if ( CgDynamicMedia::ms_cgDynamicMedia && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 79, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia == nullptr)", "%s\n\tFailed to properly destroy CgDynamicMedia : pointer remains %p", "ms_cgDynamicMedia == nullptr", CgDynamicMedia::ms_cgDynamicMedia) )
    __debugbreak();
}

/*
==============
CgDynamicMedia::CgDynamicMedia
==============
*/
void CgDynamicMedia::CgDynamicMedia(CgDynamicMedia *this, FXRegisteredDef *inFxs, unsigned int inFxCount)
{
  this->m_fxsPtr = inFxs;
  this->__vftable = (CgDynamicMedia_vtbl *)&CgDynamicMedia::`vftable';
  this->m_fxCount = inFxCount;
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 25, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating CgDynamicMedia when still marked as allocated by %d", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgDynamicMedia::ms_allocatedType) )
    __debugbreak();
  if ( CgDynamicMedia::ms_cgDynamicMedia && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 26, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia == nullptr)", "%s\n\tCreating CgDynamicMedia when singleton already exists", "ms_cgDynamicMedia == nullptr") )
    __debugbreak();
  if ( !inFxs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 27, ASSERT_TYPE_ASSERT, "(inFxs != nullptr)", "%s\n\tCreating CgDynamicMedia with no FX memory", "inFxs != nullptr") )
    __debugbreak();
  if ( !inFxCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 28, ASSERT_TYPE_ASSERT, "(inFxCount != 0)", "%s\n\tCreating CgDynamicMedia with no FX", "inFxCount != 0") )
    __debugbreak();
}

/*
==============
CgDynamicMedia::~CgDynamicMedia
==============
*/
void CgDynamicMedia::~CgDynamicMedia(CgDynamicMedia *this)
{
  this->__vftable = (CgDynamicMedia_vtbl *)&CgDynamicMedia::`vftable';
  if ( CgDynamicMedia::ms_cgDynamicMedia != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 34, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia == this)", "%s\n\tDeleting CgDynamicMedia that is not the singleton", "ms_cgDynamicMedia == this") )
    __debugbreak();
}

/*
==============
CgDynamicMedia::ClearMediaCache
==============
*/
void CgDynamicMedia::ClearMediaCache(CgDynamicMedia *this)
{
  if ( !this->m_fxsPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 122, ASSERT_TYPE_ASSERT, "(m_fxsPtr)", (const char *)&queryFormat, "m_fxsPtr") )
    __debugbreak();
  if ( !this->m_fxCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 123, ASSERT_TYPE_ASSERT, "(m_fxCount)", (const char *)&queryFormat, "m_fxCount") )
    __debugbreak();
  memset_0(this->m_fxsPtr, 0, 8i64 * this->m_fxCount);
}

/*
==============
CgDynamicMedia::GetCgDynamicMedia
==============
*/
CgDynamicMedia *CgDynamicMedia::GetCgDynamicMedia()
{
  CgDynamicMedia *result; 

  result = CgDynamicMedia::ms_cgDynamicMedia;
  if ( !CgDynamicMedia::ms_cgDynamicMedia )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 16, ASSERT_TYPE_ASSERT, "(ms_cgDynamicMedia)", "%s\n\tCgDynamicMedia accessed when not allocated", "ms_cgDynamicMedia") )
      __debugbreak();
    return CgDynamicMedia::ms_cgDynamicMedia;
  }
  return result;
}

/*
==============
CgDynamicMedia::GetFx
==============
*/
FXRegisteredDef *CgDynamicMedia::GetFx(CgDynamicMedia *this, int fxId)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int m_fxCount; 

  v3 = fxId;
  if ( !this->m_fxsPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 103, ASSERT_TYPE_ASSERT, "(m_fxsPtr)", (const char *)&queryFormat, "m_fxsPtr") )
    __debugbreak();
  if ( (unsigned int)v3 >= this->m_fxCount )
  {
    m_fxCount = this->m_fxCount;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( fxId ) < (unsigned)( m_fxCount )", "fxId doesn't index m_fxCount\n\t%i not in [0, %i)", v5, m_fxCount) )
      __debugbreak();
  }
  return &this->m_fxsPtr[v3];
}

/*
==============
CgDynamicMedia::GetFxId
==============
*/
__int64 CgDynamicMedia::GetFxId(CgDynamicMedia *this, const char *string)
{
  ClConfigStrings *ClConfigStrings; 

  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  if ( !ClConfigStrings->AreConfigStringsReady(ClConfigStrings) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_dynamic_media.cpp", 112, ASSERT_TYPE_ASSERT, "(cs->AreConfigStringsReady())", (const char *)&queryFormat, "cs->AreConfigStringsReady()") )
    __debugbreak();
  return ((__int64 (__fastcall *)(ClConfigStrings *, const char *))ClConfigStrings->GetEffectId)(ClConfigStrings, string);
}

/*
==============
CgDynamicMedia::IsValidFx
==============
*/
bool CgDynamicMedia::IsValidFx(CgDynamicMedia *this, int fxId)
{
  return fxId > 0 && fxId < this->m_fxCount && this->m_fxsPtr[fxId].m_particleSystemDef != NULL;
}

