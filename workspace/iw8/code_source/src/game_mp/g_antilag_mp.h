/*
==============
GAntiLagMP::GetAntiLagMP
==============
*/

GAntiLagMP *__fastcall GAntiLagMP::GetAntiLagMP()
{
  return ?GetAntiLagMP@GAntiLagMP@@SAPEAV1@XZ();
}

/*
==============
GAntiLagMP::ShouldApplyMuzzleRewindAngles
==============
*/

bool __fastcall GAntiLagMP::ShouldApplyMuzzleRewindAngles(GAntiLagMP *this)
{
  return ?ShouldApplyMuzzleRewindAngles@GAntiLagMP@@UEBA_NXZ(this);
}

/*
==============
GAntiLagMP::ClearAntiLagMemoryMP
==============
*/

void GAntiLagMP::ClearAntiLagMemoryMP(void)
{
  ?ClearAntiLagMemoryMP@GAntiLagMP@@SAXXZ();
}

/*
==============
GAntiLagMP::ShouldApplyMuzzleRewindAngles
==============
*/
char GAntiLagMP::ShouldApplyMuzzleRewindAngles(GAntiLagMP *this)
{
  return 1;
}

/*
==============
GAntiLagMP::GetAntiLagMP
==============
*/
GAntiLagMP *GAntiLagMP::GetAntiLagMP()
{
  GAntiLagMP *result; 

  if ( BYTE1(GameScriptData::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.h", 110, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  result = (GAntiLagMP *)GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    return (GAntiLagMP *)GAntiLag::ms_gAntiLagData;
  }
  return result;
}

/*
==============
GAntiLagMP::ClearAntiLagMemoryMP
==============
*/
void GAntiLagMP::ClearAntiLagMemoryMP(void)
{
  GAntiLagMP *AntiLagMP; 
  unsigned int v1; 
  char *v2; 
  AntilagDebugCharacterInfo **v3; 
  GAntiLagMP *v4; 
  unsigned int v5; 
  char v6; 
  __int64 m_antilagDebugCharacterCount; 
  GAntiLag *v8; 
  GAntiLag *v9; 
  char *v10; 
  size_t v11; 
  AntilagDebugCharacterInfo **m_antilagDebugCharacters; 
  AntilagDebugCharacterInfo *v13; 
  char v14[8]; 
  char v15[8]; 
  char v16[8]; 

  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  v1 = 0;
  v2 = (char *)(v14 - (char *)AntiLagMP);
  v3 = &AntiLagMP->m_antilagDebugCharacters[1];
  v4 = AntiLagMP;
  v5 = 0;
  do
  {
    v5 += 3;
    *(AntilagDebugCharacterInfo **)((char *)v3 + (_QWORD)v2 - 4403296) = *(v3 - 1);
    *(AntilagDebugCharacterInfo **)((char *)v3 + v15 - (char *)AntiLagMP - 4403296) = *v3;
    *(AntilagDebugCharacterInfo **)((char *)v3 + v16 - (char *)AntiLagMP - 4403296) = v3[1];
    v3 += 3;
  }
  while ( v5 < 3 );
  v6 = BYTE1(GameScriptData::ms_allocatedType);
  m_antilagDebugCharacterCount = v4->m_antilagDebugCharacterCount;
  if ( !BYTE1(GameScriptData::ms_allocatedType) )
    goto LABEL_8;
  if ( BYTE1(GameScriptData::ms_allocatedType) != 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 265, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v6 = BYTE1(GameScriptData::ms_allocatedType);
LABEL_8:
    if ( v6 != 2 )
      goto LABEL_14;
  }
  v8 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 269, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tClearAntiLagMemoryCommon: Trying to clear game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v8 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v8->~BgAntiLag)(v8, 0i64);
  memset_0(GAntiLag::ms_gAntiLagData, 0, 0x433078ui64);
  GAntiLagMP::GAntiLagMP((GAntiLagMP *)GAntiLag::ms_gAntiLagData);
  GAntiLag::ms_gAntiLagData = v9;
LABEL_14:
  if ( v4->m_antilagDebugCharacterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.h", 182, ASSERT_TYPE_ASSERT, "( !antiLagInst->m_antilagDebugCharacterCount )", (const char *)&queryFormat, "!antiLagInst->m_antilagDebugCharacterCount") )
    __debugbreak();
  v4->m_antilagDebugCharacterCount = m_antilagDebugCharacterCount;
  v10 = v2 - 4403288;
  v11 = 10768 * m_antilagDebugCharacterCount;
  m_antilagDebugCharacters = v4->m_antilagDebugCharacters;
  do
  {
    if ( *m_antilagDebugCharacters )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.h", 188, ASSERT_TYPE_ASSERT, "( antiLagInst->m_antilagDebugCharacters[storeIndex] == nullptr )", (const char *)&queryFormat, "antiLagInst->m_antilagDebugCharacters[storeIndex] == nullptr") )
        __debugbreak();
    }
    v13 = *(AntilagDebugCharacterInfo **)((char *)m_antilagDebugCharacters + (_QWORD)v10);
    memset_0(v13, 0, v11);
    *m_antilagDebugCharacters = v13;
    ++v1;
    ++m_antilagDebugCharacters;
  }
  while ( v1 < 3 );
}

