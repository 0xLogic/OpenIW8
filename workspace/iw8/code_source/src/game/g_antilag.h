/*
==============
GAntiLag::DrawDebugCharacterPoses
==============
*/

void __fastcall GAntiLag::DrawDebugCharacterPoses(GAntiLag *this, GAntilagDebugStoreType storeType)
{
  ?DrawDebugCharacterPoses@GAntiLag@@MEAAXW4GAntilagDebugStoreType@@@Z(this, storeType);
}

/*
==============
GAntiLag::GetAntiLag
==============
*/

GAntiLag *__fastcall GAntiLag::GetAntiLag()
{
  return ?GetAntiLag@GAntiLag@@SAPEAV1@XZ();
}

/*
==============
GAntiLag::ClearAntiLagMemoryCommon<GAntiLagMP>
==============
*/

__int64 GAntiLag::ClearAntiLagMemoryCommon<GAntiLagMP>()
{
  return ??$ClearAntiLagMemoryCommon@VGAntiLagMP@@@GAntiLag@@KAXXZ();
}

/*
==============
GAntiLag::FreeAntiLagMemoryCommon<GAntiLagMP>
==============
*/

__int64 GAntiLag::FreeAntiLagMemoryCommon<GAntiLagMP>()
{
  return ??$FreeAntiLagMemoryCommon@VGAntiLagMP@@@GAntiLag@@KAXXZ();
}

/*
==============
GAntiLag::SaveDebugCharacterPoses
==============
*/

void __fastcall GAntiLag::SaveDebugCharacterPoses(GAntiLag *this, GAntilagDebugStoreType storeType)
{
  ?SaveDebugCharacterPoses@GAntiLag@@MEAAXW4GAntilagDebugStoreType@@@Z(this, storeType);
}

/*
==============
GAntiLag::FreeAntiLagMemoryCommon<GAntiLagSP>
==============
*/

__int64 GAntiLag::FreeAntiLagMemoryCommon<GAntiLagSP>()
{
  return ??$FreeAntiLagMemoryCommon@VGAntiLagSP@@@GAntiLag@@KAXXZ();
}

/*
==============
GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagSP>
==============
*/

void __fastcall GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagSP>(HunkUser *hunkUser)
{
  ??$AllocateAntiLagMemoryCommon@VGAntiLagSP@@@GAntiLag@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagSP>
==============
*/

unsigned int __fastcall GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagSP>()
{
  return ??$GetAntiLagMemorySizeCommon@VGAntiLagSP@@@GAntiLag@@KAIXZ();
}

/*
==============
GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagMP>
==============
*/

void __fastcall GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagMP>(HunkUser *hunkUser)
{
  ??$AllocateAntiLagMemoryCommon@VGAntiLagMP@@@GAntiLag@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GAntiLag::OnlyUseWarningsForMarkAssert
==============
*/

bool __fastcall GAntiLag::OnlyUseWarningsForMarkAssert(GAntiLag *this)
{
  return ?OnlyUseWarningsForMarkAssert@GAntiLag@@MEBA_NXZ(this);
}

/*
==============
GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagMP>
==============
*/

unsigned int __fastcall GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagMP>()
{
  return ??$GetAntiLagMemorySizeCommon@VGAntiLagMP@@@GAntiLag@@KAIXZ();
}

/*
==============
GAntiLag::ClearAntiLagMemoryCommon<GAntiLagSP>
==============
*/

__int64 GAntiLag::ClearAntiLagMemoryCommon<GAntiLagSP>()
{
  return ??$ClearAntiLagMemoryCommon@VGAntiLagSP@@@GAntiLag@@KAXXZ();
}

/*
==============
GAntiLag::GetAntiLag
==============
*/
GAntiLag *GAntiLag::GetAntiLag()
{
  GAntiLag *result; 

  result = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    return GAntiLag::ms_gAntiLagData;
  }
  return result;
}

/*
==============
GAntiLag::DrawDebugCharacterPoses
==============
*/
void GAntiLag::DrawDebugCharacterPoses(GAntiLag *this, GAntilagDebugStoreType storeType)
{
  ;
}

/*
==============
GAntiLag::OnlyUseWarningsForMarkAssert
==============
*/
bool GAntiLag::OnlyUseWarningsForMarkAssert(GAntiLag *this)
{
  return 0;
}

/*
==============
GAntiLag::SaveDebugCharacterPoses
==============
*/
void GAntiLag::SaveDebugCharacterPoses(GAntiLag *this, GAntilagDebugStoreType storeType)
{
  ;
}

/*
==============
GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagMP>
==============
*/
void GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagMP>(HunkUser *hunkUser)
{
  GAntiLagMP *v2; 
  GAntiLag *v3; 

  if ( BYTE1(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 227, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 228, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL") )
    __debugbreak();
  v2 = (GAntiLagMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x433078ui64, 8ui64, "GAntiLag::AllocateAntiLagMemoryCommon");
  GAntiLagMP::GAntiLagMP(v2);
  GAntiLag::ms_gAntiLagData = v3;
  BYTE1(GameScriptData::ms_allocatedType) = 2;
}

/*
==============
GAntiLag::ClearAntiLagMemoryCommon<GAntiLagMP>
==============
*/
void GAntiLag::ClearAntiLagMemoryCommon<GAntiLagMP>()
{
  char v0; 
  GAntiLag *v1; 
  GAntiLag *v2; 

  v0 = BYTE1(GameScriptData::ms_allocatedType);
  if ( !BYTE1(GameScriptData::ms_allocatedType) )
    goto LABEL_6;
  if ( BYTE1(GameScriptData::ms_allocatedType) != 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 265, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE1(GameScriptData::ms_allocatedType);
LABEL_6:
    if ( v0 != 2 )
      return;
  }
  v1 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 269, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tClearAntiLagMemoryCommon: Trying to clear game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v1 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v1->~BgAntiLag)(v1, 0i64);
  memset_0(GAntiLag::ms_gAntiLagData, 0, 0x433078ui64);
  GAntiLagMP::GAntiLagMP((GAntiLagMP *)GAntiLag::ms_gAntiLagData);
  GAntiLag::ms_gAntiLagData = v2;
}

/*
==============
GAntiLag::FreeAntiLagMemoryCommon<GAntiLagMP>
==============
*/
char GAntiLag::FreeAntiLagMemoryCommon<GAntiLagMP>()
{
  char v0; 
  GAntiLag *v1; 
  GAntiLag *v2; 

  v0 = BYTE1(GameScriptData::ms_allocatedType);
  if ( BYTE1(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE1(GameScriptData::ms_allocatedType) == 2 )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 242, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE1(GameScriptData::ms_allocatedType);
  }
  if ( v0 != 2 )
  {
    v2 = GAntiLag::ms_gAntiLagData;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 246, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tFreeAntiLagMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v1 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v1->~BgAntiLag)(v1, 0i64);
  DebugWipe(GAntiLag::ms_gAntiLagData, 0x433078ui64);
  v2 = NULL;
  GAntiLag::ms_gAntiLagData = NULL;
LABEL_13:
  BYTE1(GameScriptData::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 258, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagMP>
==============
*/
__int64 GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagMP>()
{
  return 4403320i64;
}

/*
==============
GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagSP>
==============
*/
void GAntiLag::AllocateAntiLagMemoryCommon<GAntiLagSP>(HunkUser *hunkUser)
{
  GAntiLagSP *v2; 
  GAntiLag *v3; 

  if ( BYTE1(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 227, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 228, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL") )
    __debugbreak();
  v2 = (GAntiLagSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x195400ui64, 8ui64, "GAntiLag::AllocateAntiLagMemoryCommon");
  GAntiLagSP::GAntiLagSP(v2);
  GAntiLag::ms_gAntiLagData = v3;
  BYTE1(GameScriptData::ms_allocatedType) = 1;
}

/*
==============
GAntiLag::ClearAntiLagMemoryCommon<GAntiLagSP>
==============
*/
void GAntiLag::ClearAntiLagMemoryCommon<GAntiLagSP>()
{
  char v0; 
  GAntiLag *v1; 
  GAntiLag *v2; 

  v0 = BYTE1(GameScriptData::ms_allocatedType);
  if ( !BYTE1(GameScriptData::ms_allocatedType) )
    goto LABEL_6;
  if ( BYTE1(GameScriptData::ms_allocatedType) != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 265, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE1(GameScriptData::ms_allocatedType);
LABEL_6:
    if ( v0 != 1 )
      return;
  }
  v1 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 269, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tClearAntiLagMemoryCommon: Trying to clear game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v1 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v1->~BgAntiLag)(v1, 0i64);
  memset_0(GAntiLag::ms_gAntiLagData, 0, 0x195400ui64);
  GAntiLagSP::GAntiLagSP((GAntiLagSP *)GAntiLag::ms_gAntiLagData);
  GAntiLag::ms_gAntiLagData = v2;
}

/*
==============
GAntiLag::FreeAntiLagMemoryCommon<GAntiLagSP>
==============
*/
char GAntiLag::FreeAntiLagMemoryCommon<GAntiLagSP>()
{
  char v0; 
  GAntiLag *v1; 
  GAntiLag *v2; 

  v0 = BYTE1(GameScriptData::ms_allocatedType);
  if ( BYTE1(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE1(GameScriptData::ms_allocatedType) == 1 )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 242, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE1(GameScriptData::ms_allocatedType);
  }
  if ( v0 != 1 )
  {
    v2 = GAntiLag::ms_gAntiLagData;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 246, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tFreeAntiLagMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v1 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v1->~BgAntiLag)(v1, 0i64);
  DebugWipe(GAntiLag::ms_gAntiLagData, 0x195400ui64);
  v2 = NULL;
  GAntiLag::ms_gAntiLagData = NULL;
LABEL_13:
  BYTE1(GameScriptData::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 258, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagSP>
==============
*/
__int64 GAntiLag::GetAntiLagMemorySizeCommon<GAntiLagSP>()
{
  return 1659904i64;
}

