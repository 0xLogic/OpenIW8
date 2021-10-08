/*
==============
CgGlobalsSP::IsClientValid
==============
*/

int __fastcall CgGlobalsSP::IsClientValid(CgGlobalsSP *this)
{
  return ?IsClientValid@CgGlobalsSP@@UEBAHXZ(this);
}

/*
==============
CgGlobalsSP::GetCgCharacterInfo
==============
*/

const CgCharacterInfo *__fastcall CgGlobalsSP::GetCgCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  return ?GetCgCharacterInfo@CgGlobalsSP@@UEBAPEBUCgCharacterInfo@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsSP::HasCharacterInfo
==============
*/

bool __fastcall CgGlobalsSP::HasCharacterInfo(CgGlobalsSP *this, const int entNum)
{
  return ?HasCharacterInfo@CgGlobalsSP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgGlobalsSP::GetCharacterInfo
==============
*/

const characterInfo_t *__fastcall CgGlobalsSP::GetCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  return ?GetCharacterInfo@CgGlobalsSP@@QEBAPEBUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsSP::IsMP
==============
*/

bool __fastcall CgGlobalsSP::IsMP(CgGlobalsSP *this)
{
  return ?IsMP@CgGlobalsSP@@UEBA_NXZ(this);
}

/*
==============
CgGlobalsSP::GetCgCharacterInfo
==============
*/

CgCharacterInfo *__fastcall CgGlobalsSP::GetCgCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  return ?GetCgCharacterInfo@CgGlobalsSP@@UEAAPEAUCgCharacterInfo@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsSP::GetPIPViewCount
==============
*/

int __fastcall CgGlobalsSP::GetPIPViewCount(CgGlobalsSP *this)
{
  return ?GetPIPViewCount@CgGlobalsSP@@UEBAHXZ(this);
}

/*
==============
CgGlobalsSP::SetSkyOverride
==============
*/

void __fastcall CgGlobalsSP::SetSkyOverride(CgGlobalsSP *this, const SkyOverride *skyOverride)
{
  ?SetSkyOverride@CgGlobalsSP@@QEAAXPEBUSkyOverride@@@Z(this, skyOverride);
}

/*
==============
CgGlobalsSP::ClearLocalClientGlobals
==============
*/

void __fastcall CgGlobalsSP::ClearLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  ?ClearLocalClientGlobals@CgGlobalsSP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgGlobalsSP::ClearCharacterAnimState
==============
*/

void __fastcall CgGlobalsSP::ClearCharacterAnimState(CgGlobalsSP *this, const int entNum)
{
  ?ClearCharacterAnimState@CgGlobalsSP@@UEAAXH@Z(this, entNum);
}

/*
==============
CgGlobalsSP::GetTeamColors
==============
*/

void __fastcall CgGlobalsSP::GetTeamColors(CgGlobalsSP *this, vec4_t *outMyTeamColor, vec4_t *outEnemyTeamColor)
{
  ?GetTeamColors@CgGlobalsSP@@UEBAXAEATvec4_t@@0@Z(this, outMyTeamColor, outEnemyTeamColor);
}

/*
==============
CgGlobalsSP::GetPIPVisionSetData
==============
*/

ClientVisionSetData *__fastcall CgGlobalsSP::GetPIPVisionSetData(CgGlobalsSP *this, int pipViewIndex)
{
  return ?GetPIPVisionSetData@CgGlobalsSP@@UEAAPEAUClientVisionSetData@@H@Z(this, pipViewIndex);
}

/*
==============
CgGlobalsSP::FreeLocalClientGlobals
==============
*/

void CgGlobalsSP::FreeLocalClientGlobals(void)
{
  ?FreeLocalClientGlobals@CgGlobalsSP@@SAXXZ();
}

/*
==============
CgGlobalsSP::GetInUseHudElems
==============
*/

unsigned int __fastcall CgGlobalsSP::GetInUseHudElems(CgGlobalsSP *this, const hudelem_t **elems)
{
  return ?GetInUseHudElems@CgGlobalsSP@@UEAAIQEAPEBUhudelem_t@@@Z(this, elems);
}

/*
==============
CgGlobalsSP::IsClientGamePaused
==============
*/

int __fastcall CgGlobalsSP::IsClientGamePaused(CgGlobalsSP *this)
{
  return ?IsClientGamePaused@CgGlobalsSP@@UEBAHXZ(this);
}

/*
==============
CgGlobalsSP::HasCgCharacterInfo
==============
*/

bool __fastcall CgGlobalsSP::HasCgCharacterInfo(CgGlobalsSP *this, const int entNum)
{
  return ?HasCgCharacterInfo@CgGlobalsSP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgGlobalsSP::CgGlobalsSP
==============
*/

void __fastcall CgGlobalsSP::CgGlobalsSP(CgGlobalsSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgGlobalsSP@@AEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgGlobalsSP::GetShaderOverrideData
==============
*/

shaderOverride_t *__fastcall CgGlobalsSP::GetShaderOverrideData(CgGlobalsSP *this, shaderOverride_t *result, const int characterIndex, const Weapon *r_weapon)
{
  return ?GetShaderOverrideData@CgGlobalsSP@@UEBA?AUshaderOverride_t@@HAEBUWeapon@@@Z(this, result, characterIndex, r_weapon);
}

/*
==============
CgGlobalsSP::GetCharacterInfo
==============
*/

characterInfo_t *__fastcall CgGlobalsSP::GetCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  return ?GetCharacterInfo@CgGlobalsSP@@QEAAPEAUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
CgGlobalsSP::GetPIPScreenCoordinates
==============
*/

bool __fastcall CgGlobalsSP::GetPIPScreenCoordinates(CgGlobalsSP *this, float *x, float *y, float *width, float *height)
{
  return ?GetPIPScreenCoordinates@CgGlobalsSP@@UEBA_NPEAM000@Z(this, x, y, width, height);
}

/*
==============
CgGlobalsSP::GetSkyOverride
==============
*/

SkyOverride *__fastcall CgGlobalsSP::GetSkyOverride(CgGlobalsSP *this)
{
  return ?GetSkyOverride@CgGlobalsSP@@UEAAPEAUSkyOverride@@XZ(this);
}

/*
==============
CgGlobalsSP::GetCharacterAnimState
==============
*/

characterAnimState_t *__fastcall CgGlobalsSP::GetCharacterAnimState(CgGlobalsSP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgGlobalsSP@@UEAAPEAUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgGlobalsSP::AllocateLocalClientGlobals
==============
*/

void __fastcall CgGlobalsSP::AllocateLocalClientGlobals(HunkUser *hunkUser, const int maxLocalClients)
{
  ?AllocateLocalClientGlobals@CgGlobalsSP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgGlobalsSP::GetCharacterAnimState
==============
*/

const characterAnimState_t *__fastcall CgGlobalsSP::GetCharacterAnimState(CgGlobalsSP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgGlobalsSP@@UEBAPEBUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgGlobalsSP::CgGlobalsSP
==============
*/
void CgGlobalsSP::CgGlobalsSP(CgGlobalsSP *this, const LocalClientNum_t localClientNum)
{
  __int64 v4; 

  cg_t::cg_t(this, localClientNum);
  this->__vftable = (CgGlobalsSP_vtbl *)&CgGlobalsSP::`vftable';
  PipDef::PipDef(this->pipViews);
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )", -2i64) )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( localClientNum )
  {
    LODWORD(v4) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 23, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", v4) )
      __debugbreak();
  }
}

/*
==============
CgGlobalsSP::AllocateLocalClientGlobals
==============
*/
void CgGlobalsSP::AllocateLocalClientGlobals(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  int v3; 
  CgGlobalsSP *v5; 
  cg_t **v6; 
  cg_t *v7; 
  int v9; 

  v2 = maxLocalClients;
  v3 = 0;
  if ( (unsigned int)maxLocalClients > 2 )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 31, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", maxLocalClients, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgGlobalsSP *)Mem_HunkUser_AllocInternal(hunkUser, 952512 * v2, 0x80ui64, "CgGlobalsSP::AllocateLocalClientGlobals");
  memset_0(v5, 0, 952512 * v2);
  if ( (int)v2 > 0 )
  {
    v6 = cg_t::ms_cgArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 43, ASSERT_TYPE_ASSERT, "(!ms_cgArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgArray[localClientIndex]") )
        __debugbreak();
      CgGlobalsSP::CgGlobalsSP(v5, (const LocalClientNum_t)v3);
      *v6 = v7;
      ++v3;
      ++v6;
      ++v5;
    }
    while ( v3 < (int)v2 );
  }
  cg_t::ms_allocatedType = GLOB_TYPE_SP;
  cg_t::ms_allocatedCount = v2;
}

/*
==============
CgGlobalsSP::ClearCharacterAnimState
==============
*/
void CgGlobalsSP::ClearCharacterAnimState(CgGlobalsSP *this, const int entNum)
{
  int v2; 
  characterAnimStateWithEntNum_t *m_charAnimState; 
  __int64 v4; 

  v2 = 0;
  m_charAnimState = this->m_charAnimState;
  v4 = 0i64;
  while ( m_charAnimState->entNum != entNum )
  {
    ++v2;
    ++v4;
    ++m_charAnimState;
    if ( v4 >= 38 )
      return;
  }
  this->m_charAnimState[v2].entNum = 0;
}

/*
==============
CgGlobalsSP::ClearLocalClientGlobals
==============
*/
void CgGlobalsSP::ClearLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgGlobalsSP *v2; 
  int foliageSoundTime; 
  __int64 v5; 
  int v6; 
  char Src[14800]; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v6 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
  {
    LODWORD(v5) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 96, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::ClearLocalClientGlobals: Trying to clear single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", v5) )
      __debugbreak();
  }
  v2 = (CgGlobalsSP *)((char *)cg_t::ms_cgArray[v1] + 952512 * v1);
  memcpy_0(Src, v2->m_characterInfo, 0x39C8ui64);
  foliageSoundTime = v2->m_clientCharacterInfo[0].foliageInfo.foliageSoundTime;
  ((void (__fastcall *)(CgGlobalsSP *, _QWORD))v2->~cg_tDummy)(v2, 0i64);
  memset_0(v2, 0, sizeof(CgGlobalsSP));
  CgGlobalsSP::CgGlobalsSP(v2, (const LocalClientNum_t)v1);
  memcpy_0(v2->m_characterInfo, Src, sizeof(v2->m_characterInfo));
  v2->m_clientCharacterInfo[0].foliageInfo.foliageSoundTime = foliageSoundTime;
  v2->m_characterInfo[0].team = TEAM_TWO;
  cg_t::ResetLocalClientGlobalsObufscation((const LocalClientNum_t)v1);
  if ( v2->m_usingLowLodClientEntityEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 130, ASSERT_TYPE_ASSERT, "(currentGlobals[localClientNum].m_usingLowLodClientEntityEvents == false)", (const char *)&queryFormat, "currentGlobals[localClientNum].m_usingLowLodClientEntityEvents == false") )
    __debugbreak();
}

/*
==============
CgGlobalsSP::FreeLocalClientGlobals
==============
*/
void CgGlobalsSP::FreeLocalClientGlobals(void)
{
  cg_t *v0; 
  __int64 i; 

  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 58, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() != CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tTrying to free single-player client globals but multiplayer client globals are allocated\n", "CG_Globals_GetType() != CgGlobalsType::GLOB_TYPE_MP") )
    __debugbreak();
  v0 = cg_t::ms_cgArray[0];
  if ( cg_t::ms_allocatedType == GLOB_TYPE_SP )
  {
    if ( cg_t::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 69, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgGlobalsSP::FreeLocalClientGlobals: Trying to free single-player client globals but no client globals have been allocated\n", "ms_allocatedCount > 0") )
      __debugbreak();
    for ( i = cg_t::ms_allocatedCount - 1; i >= 0; cg_t::ms_cgArray[i--] = NULL )
      ((void (__fastcall *)(cg_t *, _QWORD))cg_t::ms_cgArray[i]->~cg_tDummy)(cg_t::ms_cgArray[i], 0i64);
    DebugWipe(v0, 952512i64 * cg_t::ms_allocatedCount);
  }
  cg_t::ms_allocatedType = GLOB_TYPE_UNKNOWN;
  cg_t::ms_allocatedCount = 0;
}

/*
==============
CgGlobalsSP::GetCgCharacterInfo
==============
*/
CgCharacterInfo *CgGlobalsSP::GetCgCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  __int64 v3; 

  v3 = characterIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 263, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (int)v3 >= 1 )
    return 0i64;
  else
    return &this->m_clientCharacterInfo[v3];
}

/*
==============
CgGlobalsSP::GetCgCharacterInfo
==============
*/
CgCharacterInfo *CgGlobalsSP::GetCgCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  __int64 v3; 

  v3 = characterIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 276, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (int)v3 >= 1 )
    return 0i64;
  else
    return &this->m_clientCharacterInfo[v3];
}

/*
==============
CgGlobalsSP::GetCharacterAnimState
==============
*/
characterAnimState_t *CgGlobalsSP::GetCharacterAnimState(CgGlobalsSP *this, const int entNum)
{
  int v2; 
  characterAnimStateWithEntNum_t *m_charAnimState; 
  int v4; 

  if ( !entNum )
    return 0i64;
  v2 = 0;
  m_charAnimState = this->m_charAnimState;
  v4 = -1;
  do
  {
    if ( m_charAnimState->entNum == entNum )
      return &this->m_charAnimState[v2].animState;
    if ( v4 == -1 && !m_charAnimState->entNum )
      v4 = v2;
    ++v2;
    ++m_charAnimState;
  }
  while ( v2 < 38 );
  if ( v4 == -1 )
    return 0i64;
  this->m_charAnimState[v4].entNum = entNum;
  return &this->m_charAnimState[v4].animState;
}

/*
==============
CgGlobalsSP::GetCharacterAnimState
==============
*/
characterAnimState_t *CgGlobalsSP::GetCharacterAnimState(CgGlobalsSP *this, const int entNum)
{
  int v2; 
  characterAnimStateWithEntNum_t *m_charAnimState; 
  __int64 v4; 

  if ( !entNum )
    return 0i64;
  v2 = 0;
  m_charAnimState = this->m_charAnimState;
  v4 = 0i64;
  while ( m_charAnimState->entNum != entNum )
  {
    ++v2;
    ++v4;
    ++m_charAnimState;
    if ( v4 >= 38 )
      return 0i64;
  }
  return &this->m_charAnimState[v2].animState;
}

/*
==============
CgGlobalsSP::GetCharacterInfo
==============
*/
characterInfo_t *CgGlobalsSP::GetCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  __int64 v3; 

  v3 = characterIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 231, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (int)v3 >= 1 )
    return 0i64;
  else
    return &this->m_characterInfo[v3];
}

/*
==============
CgGlobalsSP::GetCharacterInfo
==============
*/
characterInfo_t *CgGlobalsSP::GetCharacterInfo(CgGlobalsSP *this, const int characterIndex)
{
  __int64 v3; 

  v3 = characterIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 244, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (int)v3 >= 1 )
    return 0i64;
  else
    return &this->m_characterInfo[v3];
}

/*
==============
CgGlobalsSP::GetInUseHudElems
==============
*/
__int64 CgGlobalsSP::GetInUseHudElems(CgGlobalsSP *this, const hudelem_t **elems)
{
  const hudelem_t *v4; 
  CgSnapshotType SnapshotType; 
  unsigned int elemCount; 

  if ( !this->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 174, ASSERT_TYPE_ASSERT, "(nextSnap != nullptr)", "%s\n\tGetInUseHudElems: Null next snapshot getting HudElems", "nextSnap != nullptr") )
    __debugbreak();
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_SP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 175, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tGetInUseHudElems: Trying to retrieve a single-player snapshot but single-player snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_SP", SnapshotType) )
      __debugbreak();
  }
  v4 = (const hudelem_t *)((char *)&this->nextSnap[1714].__vftable + 4);
  elemCount = 0;
  CG_Globals_CopyInUseHudElems(elems, &elemCount, v4, 256);
  return elemCount;
}

/*
==============
CgGlobalsSP::GetPIPScreenCoordinates
==============
*/
char CgGlobalsSP::GetPIPScreenCoordinates(CgGlobalsSP *this, float *x, float *y, float *width, float *height)
{
  _RSI = width;
  _RBP = y;
  _R14 = x;
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 202, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 203, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 204, ASSERT_TYPE_ASSERT, "(width)", (const char *)&queryFormat, "width") )
    __debugbreak();
  _RBX = height;
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 205, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  if ( !CG_PIP_IsActive(this->localClientNum) )
    return 0;
  *(double *)&_XMM0 = CG_PIP_GetViewX(this->localClientNum);
  __asm { vmovss  dword ptr [r14], xmm0 }
  *(double *)&_XMM0 = CG_PIP_GetViewY(this->localClientNum);
  __asm { vmovss  dword ptr [rbp+0], xmm0 }
  *(double *)&_XMM0 = CG_PIP_GetViewWidth(this->localClientNum);
  __asm { vmovss  dword ptr [rsi], xmm0 }
  *(double *)&_XMM0 = CG_PIP_GetViewHeight(this->localClientNum);
  __asm { vmovss  dword ptr [rbx], xmm0 }
  return 1;
}

/*
==============
CgGlobalsSP::GetPIPViewCount
==============
*/
__int64 CgGlobalsSP::GetPIPViewCount(CgGlobalsSP *this)
{
  return 1i64;
}

/*
==============
CgGlobalsSP::GetPIPVisionSetData
==============
*/
ClientVisionSetData *CgGlobalsSP::GetPIPVisionSetData(CgGlobalsSP *this, int pipViewIndex)
{
  __int64 v2; 
  int v6; 

  v2 = pipViewIndex;
  if ( pipViewIndex )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 195, ASSERT_TYPE_ASSERT, "(unsigned)( pipViewIndex ) < (unsigned)( 1 )", "pipViewIndex doesn't index MAX_PIP_VIEWS_PER_CLIENT\n\t%i not in [0, %i)", pipViewIndex, v6) )
      __debugbreak();
  }
  return &this->pipViews[v2].cvsData;
}

/*
==============
CgGlobalsSP::GetShaderOverrideData
==============
*/
shaderOverride_t *CgGlobalsSP::GetShaderOverrideData(CgGlobalsSP *this, shaderOverride_t *result, const int characterIndex, const Weapon *r_weapon)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_13.scrollRateX
    vmovups ymmword ptr [rdx], ymm0
  }
  result->atlasTime = NULL_SHADER_OVERRIDE_13.atlasTime;
  return result;
}

/*
==============
CgGlobalsSP::GetSkyOverride
==============
*/
SkyOverride *CgGlobalsSP::GetSkyOverride(CgGlobalsSP *this)
{
  return &this->m_skyOverride;
}

/*
==============
CgGlobalsSP::GetTeamColors
==============
*/
void CgGlobalsSP::GetTeamColors(CgGlobalsSP *this, vec4_t *outMyTeamColor, vec4_t *outEnemyTeamColor)
{
  CL_LookupColor(this->localClientNum, 0x36u, outMyTeamColor);
  CL_LookupColor(this->localClientNum, 0x36u, outEnemyTeamColor);
}

/*
==============
CgGlobalsSP::HasCgCharacterInfo
==============
*/
bool CgGlobalsSP::HasCgCharacterInfo(CgGlobalsSP *this, const int entNum)
{
  return entNum == 0;
}

/*
==============
CgGlobalsSP::HasCharacterInfo
==============
*/
bool CgGlobalsSP::HasCharacterInfo(CgGlobalsSP *this, const int entNum)
{
  return entNum == 0;
}

/*
==============
CgGlobalsSP::IsClientGamePaused
==============
*/
_BOOL8 CgGlobalsSP::IsClientGamePaused(CgGlobalsSP *this)
{
  return CL_Pause_IsGamePaused();
}

/*
==============
CgGlobalsSP::IsClientValid
==============
*/
__int64 CgGlobalsSP::IsClientValid(CgGlobalsSP *this)
{
  return 1i64;
}

/*
==============
CgGlobalsSP::IsMP
==============
*/
bool CgGlobalsSP::IsMP(CgGlobalsSP *this)
{
  return 0;
}

/*
==============
CgGlobalsSP::SetSkyOverride
==============
*/
void CgGlobalsSP::SetSkyOverride(CgGlobalsSP *this, const SkyOverride *skyOverride)
{
  _RBX = skyOverride;
  _RDI = this;
  if ( !skyOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.cpp", 165, ASSERT_TYPE_ASSERT, "(skyOverride)", (const char *)&queryFormat, "skyOverride") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi+0E4C68h], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rdi+0E4C78h], xmm1
  }
  _RDI->m_skyOverride.ambientColor.v[2] = _RBX->ambientColor.v[2];
}

