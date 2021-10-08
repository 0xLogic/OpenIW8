/*
==============
CgGlobalsMP::GetCharacterInfo
==============
*/

const characterInfo_t *__fastcall CgGlobalsMP::GetCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  return ?GetCharacterInfo@CgGlobalsMP@@QEBAPEBUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsMP::GetCharacterInfo
==============
*/

characterInfo_t *__fastcall CgGlobalsMP::GetCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  return ?GetCharacterInfo@CgGlobalsMP@@QEAAPEAUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsMP::ClearLocalClientGlobals
==============
*/

void __fastcall CgGlobalsMP::ClearLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  ?ClearLocalClientGlobals@CgGlobalsMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgGlobalsMP::AllocateLocalClientGlobals
==============
*/

void __fastcall CgGlobalsMP::AllocateLocalClientGlobals(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  ?AllocateLocalClientGlobals@CgGlobalsMP@@SAXPEAUHunkUser@@HH@Z(hunkUser, maxLocalClients, maxCharacters);
}

/*
==============
CgGlobalsMP::GetCharacterInfo
==============
*/
characterInfo_t *CgGlobalsMP::GetCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  __int64 v3; 
  unsigned int m_characterInfoCount; 

  v3 = characterIndex;
  if ( characterIndex >= this->m_characterInfoCount )
  {
    m_characterInfoCount = this->m_characterInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", characterIndex, m_characterInfoCount) )
      __debugbreak();
  }
  return &this->m_characterInfo[v3];
}

/*
==============
CgGlobalsMP::GetCharacterInfo
==============
*/
characterInfo_t *CgGlobalsMP::GetCharacterInfo(CgGlobalsMP *this, const int characterIndex)
{
  __int64 v3; 
  unsigned int m_characterInfoCount; 

  v3 = characterIndex;
  if ( characterIndex >= this->m_characterInfoCount )
  {
    m_characterInfoCount = this->m_characterInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", characterIndex, m_characterInfoCount) )
      __debugbreak();
  }
  return &this->m_characterInfo[v3];
}

/*
==============
CgGlobalsMP::AllocateLocalClientGlobals
==============
*/
void CgGlobalsMP::AllocateLocalClientGlobals(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  __int64 v3; 
  int v4; 
  __int64 v5; 
  CgGlobalsMP *v7; 
  characterInfo_t *v8; 
  CgCharacterInfo *v9; 
  cg_t **v10; 
  cg_t *v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 
  int v16; 

  v3 = maxLocalClients;
  v4 = 0;
  v5 = maxCharacters;
  if ( (unsigned int)maxLocalClients > 2 )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 28, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", maxLocalClients, 0i64, v16) )
      __debugbreak();
  }
  if ( (unsigned int)(v5 - 1) > 0xF7 )
  {
    LODWORD(v15) = 248;
    LODWORD(v14) = 1;
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 29, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxCharacters ) && ( maxCharacters ) <= ( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "maxCharacters not in [1, MAX_CHARACTERS_STATIC]\n\t%i not in [%i, %i]", v12, v14, v15) )
      __debugbreak();
  }
  v7 = (CgGlobalsMP *)Mem_HunkUser_AllocInternal(hunkUser, 955184 * v3, 0x80ui64, "CgGlobalsMP::AllocateLocalClientGlobals");
  memset_0(v7, 0, 955184 * v3);
  cg_t::ms_allocatedCount = v3;
  v8 = (characterInfo_t *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(14792 * v5 * v3), 0x80ui64, "CgGlobalsMP::AllocateLocalClientGlobals");
  memset_0(v8, 0, (unsigned int)(14792 * v5 * v3));
  v9 = (CgCharacterInfo *)Mem_HunkUser_AllocInternal(hunkUser, 4 * v3 * v5, 0x80ui64, "CgGlobalsMP::AllocateLocalClientGlobals");
  memset_0(v9, 0, 4 * v3 * v5);
  if ( (int)v3 > 0 )
  {
    v10 = cg_t::ms_cgArray;
    do
    {
      if ( *v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 58, ASSERT_TYPE_ASSERT, "(!ms_cgArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgArray[localClientIndex]") )
        __debugbreak();
      CgGlobalsMP::CgGlobalsMP(v7, (const LocalClientNum_t)v4, v8, v9, v5);
      *v10 = v11;
      ++v4;
      v9 += v5;
      v8 += v5;
      ++v7;
      ++v10;
    }
    while ( v4 < (int)v3 );
  }
  cg_t::ms_allocatedType = GLOB_TYPE_MP;
}

/*
==============
CgGlobalsMP::ClearLocalClientGlobals
==============
*/
void CgGlobalsMP::ClearLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgGlobalsMP *v2; 
  characterInfo_t *m_characterInfo; 
  CgCharacterInfo *m_clientCharacterInfo; 
  __int64 m_characterInfoCount; 
  __int64 v7; 
  int v8; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v8 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 74, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(v7) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 75, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::ClearLocalClientGlobals: Trying to clear multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v7) )
      __debugbreak();
  }
  v2 = (CgGlobalsMP *)cg_t::ms_cgArray[v1];
  m_characterInfo = v2->m_characterInfo;
  m_clientCharacterInfo = v2->m_clientCharacterInfo;
  m_characterInfoCount = v2->m_characterInfoCount;
  ((void (__fastcall *)(CgGlobalsMP *, _QWORD))v2->~cg_tDummy)(v2, 0i64);
  memset_0(v2, 0, sizeof(CgGlobalsMP));
  memset_0(m_characterInfo, 0, 14792 * m_characterInfoCount);
  memset_0(m_clientCharacterInfo, 0, 4 * m_characterInfoCount);
  CgGlobalsMP::CgGlobalsMP(v2, (const LocalClientNum_t)v1, m_characterInfo, m_clientCharacterInfo, m_characterInfoCount);
  cg_t::ResetLocalClientGlobalsObufscation((const LocalClientNum_t)v1);
  if ( v2->m_usingLowLodClientEntityEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 102, ASSERT_TYPE_ASSERT, "(currentGlobals->m_usingLowLodClientEntityEvents == false)", (const char *)&queryFormat, "currentGlobals->m_usingLowLodClientEntityEvents == false") )
    __debugbreak();
}

