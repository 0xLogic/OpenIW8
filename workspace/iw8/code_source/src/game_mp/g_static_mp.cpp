/*
==============
GStaticMP::OverridePlayerHideParts
==============
*/

void __fastcall GStaticMP::OverridePlayerHideParts(GStaticMP *this, const int entNum, const DObjPartBits *hidePartBits)
{
  ?OverridePlayerHideParts@GStaticMP@@UEBAXHPEIBUDObjPartBits@@@Z(this, entNum, hidePartBits);
}

/*
==============
GStaticMP::AttachWeapon
==============
*/

unsigned __int16 __fastcall GStaticMP::AttachWeapon(GStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, const bool useReferenceModels, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  return ?AttachWeapon@GStaticMP@@UEBAGPEAUDObjModel@@GPEBUcharacterInfo_t@@_NPEAI3PEAH44AEAY0CA@W4CharacterModelType@@@Z(this, dobjModels, numModels, ci, useReferenceModels, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
}

/*
==============
GStaticMP::GetCharacterInfo
==============
*/

characterInfo_t *__fastcall GStaticMP::GetCharacterInfo(GStaticMP *this, const int characterIndex)
{
  return ?GetCharacterInfo@GStaticMP@@UEAAPEAUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
GStaticMP::GetCharacterAnimState
==============
*/

characterAnimState_t *__fastcall GStaticMP::GetCharacterAnimState(GStaticMP *this, const int entNum)
{
  return ?GetCharacterAnimState@GStaticMP@@UEAAPEAUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
GStaticMP::GetPlayerWorldIkStatus
==============
*/

void __fastcall GStaticMP::GetPlayerWorldIkStatus(GStaticMP *this, const int entNum, bool (*outWorldIKEnabled)[2])
{
  ?GetPlayerWorldIkStatus@GStaticMP@@UEAAXHAEAY01_N@Z(this, entNum, outWorldIKEnabled);
}

/*
==============
GStaticMP::GStaticMP
==============
*/

void __fastcall GStaticMP::GStaticMP(GStaticMP *this, characterInfo_t *characterInfos, GPlayerEventsMP *playerEvents, const unsigned int characterCount, const unsigned int playerCount)
{
  ??0GStaticMP@@QEAA@PEAUcharacterInfo_t@@PEAVGPlayerEventsMP@@II@Z(this, characterInfos, playerEvents, characterCount, playerCount);
}

/*
==============
GStaticMP::GetXModel
==============
*/

XModel *__fastcall GStaticMP::GetXModel(GStaticMP *this, const char *name)
{
  return ?GetXModel@GStaticMP@@UEBAPEAUXModel@@PEBD@Z(this, name);
}

/*
==============
GStaticMP::UsingLowLodClientEntityEvents
==============
*/

bool __fastcall GStaticMP::UsingLowLodClientEntityEvents(GStaticMP *this)
{
  return ?UsingLowLodClientEntityEvents@GStaticMP@@UEBA_NXZ(this);
}

/*
==============
GStaticMP::GetPlayerEvents
==============
*/

BgPlayerEvents *__fastcall GStaticMP::GetPlayerEvents(GStaticMP *this, const int entityIndex)
{
  return ?GetPlayerEvents@GStaticMP@@UEAAPEAVBgPlayerEvents@@H@Z(this, entityIndex);
}

/*
==============
GStaticMP::SafeDObjFree
==============
*/

void __fastcall GStaticMP::SafeDObjFree(GStaticMP *this, int handle)
{
  ?SafeDObjFree@GStaticMP@@UEBAXH@Z(this, handle);
}

/*
==============
GStaticMP::GetAttachXModel
==============
*/

XModel *__fastcall GStaticMP::GetAttachXModel(GStaticMP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  return ?GetAttachXModel@GStaticMP@@UEBAPEAUXModel@@PEBUcharacterInfo_t@@H_N@Z(this, ci, attachModelIndex, isReferenceModel);
}

/*
==============
GStaticMP::BodyModel
==============
*/

unsigned __int16 __fastcall GStaticMP::BodyModel(GStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es, const characterInfo_t *ci, const bool isReferenceModel)
{
  return ?BodyModel@GStaticMP@@UEBAGPEAUDObjModel@@GPEBUentityState_t@@PEBUcharacterInfo_t@@_N@Z(this, dobjModels, numModels, es, ci, isReferenceModel);
}

/*
==============
GStaticMP::GetAngles
==============
*/

void __fastcall GStaticMP::GetAngles(GStaticMP *this, int entIndex, vec3_t *outAngles)
{
  ?GetAngles@GStaticMP@@UEBAXHAEATvec3_t@@@Z(this, entIndex, outAngles);
}

/*
==============
GStaticMP::GetCharacterAnimState
==============
*/

const characterAnimState_t *__fastcall GStaticMP::GetCharacterAnimState(GStaticMP *this, const int entNum)
{
  return ?GetCharacterAnimState@GStaticMP@@UEBAPEBUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
GStaticMP::GetAnimStatics
==============
*/

BgAnimStatic *__fastcall GStaticMP::GetAnimStatics(GStaticMP *this)
{
  return ?GetAnimStatics@GStaticMP@@UEAAPEAUBgAnimStatic@@XZ(this);
}

/*
==============
GStaticMP::CreateDObj
==============
*/

DObj *__fastcall GStaticMP::CreateDObj(GStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  return ?CreateDObj@GStaticMP@@UEBAPEAUDObj@@PEAUDObjModel@@GPEAUXAnimTree@@HH_N@Z(this, dobjModels, numModels, tree, handle, otherClientNum, requiresIKPreCache);
}

/*
==============
GStaticMP::HasCharacterInfo
==============
*/

bool __fastcall GStaticMP::HasCharacterInfo(GStaticMP *this, const int entNum)
{
  return ?HasCharacterInfo@GStaticMP@@UEBA_NH@Z(this, entNum);
}

/*
==============
GStaticMP::GetCharacterInfo
==============
*/

const characterInfo_t *__fastcall GStaticMP::GetCharacterInfo(GStaticMP *this, const int characterIndex)
{
  return ?GetCharacterInfo@GStaticMP@@UEBAPEBUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
GStaticMP::GetAnimStatics
==============
*/

const BgAnimStatic *__fastcall GStaticMP::GetAnimStatics(GStaticMP *this)
{
  return ?GetAnimStatics@GStaticMP@@UEBAPEBUBgAnimStatic@@XZ(this);
}

/*
==============
GStaticMP::GStaticMP
==============
*/
void GStaticMP::GStaticMP(GStaticMP *this, characterInfo_t *characterInfos, GPlayerEventsMP *playerEvents, const unsigned int characterCount, const unsigned int playerCount)
{
  __int64 v5; 

  v5 = characterCount;
  this->__vftable = (GStaticMP_vtbl *)&GStaticMP::`vftable';
  this->m_characterInfo = characterInfos;
  this->m_playerEvents = playerEvents;
  this->m_characterCount = characterCount;
  this->m_playerCount = playerCount;
  if ( !characterInfos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 20, ASSERT_TYPE_ASSERT, "( characterInfos != nullptr )", (const char *)&queryFormat, "characterInfos != nullptr", -2i64) )
    __debugbreak();
  if ( !playerEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 21, ASSERT_TYPE_ASSERT, "( playerEvents != nullptr )", (const char *)&queryFormat, "playerEvents != nullptr") )
    __debugbreak();
  memset_0(&this->m_animData, 0, sizeof(this->m_animData));
  memset_0(characterInfos, 0, 14792 * v5);
  this->m_animData.anim_user = 1;
}

/*
==============
GStaticMP::AttachWeapon
==============
*/
unsigned __int16 GStaticMP::AttachWeapon(GStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, const bool useReferenceModels, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  return BgStatic::AttachWeaponDefaultModelsMinimal(this, dobjModels, numModels, ci, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
}

/*
==============
GStaticMP::BodyModel
==============
*/
__int64 GStaticMP::BodyModel(GStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es, const characterInfo_t *ci)
{
  int v5; 
  const XModel *XModel; 
  int outDObjModel; 
  int v10; 

  v5 = numModels;
  if ( numModels > 0xFEu )
  {
    v10 = 254;
    outDObjModel = numModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 123, ASSERT_TYPE_ASSERT, "( numModels ) <= ( ( DOBJ_MAX_PARTS ) )", "numModels not in [0, DOBJ_MAX_SUBMODELS]\n\t%u not in [0, %u]", outDObjModel, v10) )
      __debugbreak();
  }
  XModel = SV_Game_GetXModel(ci->model);
  DObjInitModel(XModel, (scr_string_t)0, 0, 0, NULL, &dobjModels[(unsigned __int16)v5]);
  return (unsigned int)(v5 + 1);
}

/*
==============
GStaticMP::CreateDObj
==============
*/
DObj *GStaticMP::CreateDObj(GStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  return Com_ServerDObjCreate(dobjModels, numModels, tree, handle, requiresIKPreCache);
}

/*
==============
GStaticMP::GetAngles
==============
*/
void GStaticMP::GetAngles(GStaticMP *this, int entIndex, vec3_t *outAngles)
{
  __int64 v3; 
  gentity_s *v5; 
  int v7; 

  v3 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 133, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v7) )
      __debugbreak();
  }
  v5 = g_entities;
  outAngles->v[0] = g_entities[v3].r.currentAngles.v[0];
  outAngles->v[1] = v5[v3].r.currentAngles.v[1];
  outAngles->v[2] = v5[v3].r.currentAngles.v[2];
}

/*
==============
GStaticMP::GetAnimStatics
==============
*/
BgAnimStatic *GStaticMP::GetAnimStatics(GStaticMP *this)
{
  return &this->m_animData;
}

/*
==============
GStaticMP::GetAnimStatics
==============
*/
BgAnimStatic *GStaticMP::GetAnimStatics(GStaticMP *this)
{
  return &this->m_animData;
}

/*
==============
GStaticMP::GetAttachXModel
==============
*/
XModel *GStaticMP::GetAttachXModel(GStaticMP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  __int64 v4; 
  __int64 v7; 

  v4 = attachModelIndex;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 95, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v4 >= 9 )
  {
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( attachModelIndex ) < (unsigned)( 9 )", "attachModelIndex doesn't index MAX_CLIENT_ATTACH_MODELS\n\t%i not in [0, %i)", v7, 9) )
      __debugbreak();
  }
  return SV_Game_GetXModel(ci->attachModelNames[v4]);
}

/*
==============
GStaticMP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *GStaticMP::GetCharacterAnimState(GStaticMP *this, const int entNum)
{
  characterInfo_t *CharacterInfo; 

  if ( entNum < 0 || entNum >= (signed int)this->m_characterCount )
    return 0i64;
  CharacterInfo = GStaticMP::GetCharacterInfo(this, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 68, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( CharacterInfo->usingAnimState )
    return &CharacterInfo->14780;
  else
    return 0i64;
}

/*
==============
GStaticMP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *GStaticMP::GetCharacterAnimState(GStaticMP *this, const int entNum)
{
  __int64 v2; 
  unsigned int m_characterCount; 
  characterInfo_t *v5; 

  v2 = entNum;
  if ( entNum < 0 )
    return 0i64;
  m_characterCount = this->m_characterCount;
  if ( entNum >= (int)m_characterCount )
    return 0i64;
  if ( entNum >= m_characterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterCount ) )", "characterIndex doesn't index static_cast<int>( m_characterCount )\n\t%i not in [0, %i)", entNum, this->m_characterCount) )
    __debugbreak();
  v5 = &this->m_characterInfo[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( v5->usingAnimState )
    return &v5->14780;
  else
    return 0i64;
}

/*
==============
GStaticMP::GetCharacterInfo
==============
*/
characterInfo_t *GStaticMP::GetCharacterInfo(GStaticMP *this, const int characterIndex)
{
  __int64 v3; 
  unsigned int m_characterCount; 

  v3 = characterIndex;
  if ( characterIndex >= this->m_characterCount )
  {
    m_characterCount = this->m_characterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterCount ) )", "characterIndex doesn't index static_cast<int>( m_characterCount )\n\t%i not in [0, %i)", characterIndex, m_characterCount) )
      __debugbreak();
  }
  return &this->m_characterInfo[v3];
}

/*
==============
GStaticMP::GetCharacterInfo
==============
*/
characterInfo_t *GStaticMP::GetCharacterInfo(GStaticMP *this, const int characterIndex)
{
  __int64 v3; 
  unsigned int m_characterCount; 

  v3 = characterIndex;
  if ( characterIndex >= this->m_characterCount )
  {
    m_characterCount = this->m_characterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterCount ) )", "characterIndex doesn't index static_cast<int>( m_characterCount )\n\t%i not in [0, %i)", characterIndex, m_characterCount) )
      __debugbreak();
  }
  return &this->m_characterInfo[v3];
}

/*
==============
GStaticMP::GetPlayerEvents
==============
*/
GPlayerEventsMP *GStaticMP::GetPlayerEvents(GStaticMP *this, const int entityIndex)
{
  __int64 v3; 
  unsigned int m_characterCount; 

  v3 = entityIndex;
  if ( entityIndex >= this->m_characterCount )
  {
    m_characterCount = this->m_characterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 141, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", entityIndex, m_characterCount) )
      __debugbreak();
  }
  if ( (int)v3 >= (signed int)this->m_playerCount )
    return 0i64;
  else
    return &this->m_playerEvents[v3];
}

/*
==============
GStaticMP::GetPlayerWorldIkStatus
==============
*/
void GStaticMP::GetPlayerWorldIkStatus(GStaticMP *this, const int entNum, bool (*outWorldIKEnabled)[2])
{
  __int64 v3; 
  gentity_s *v6; 
  const DObj *ServerDObjForEnt; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v9; 
  float *control; 
  bool v11; 
  bool v12; 
  bool v13; 
  CEntPlayerInfo info; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  BgStatic::GetPlayerWorldIkStatus(this, v3, outWorldIKEnabled);
  v6 = &g_entities[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v6->s.eType - 1) & 0xFFEF) == 0 )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v6);
    if ( ServerDObjForEnt )
    {
      CharacterInfo = GStaticMP::GetCharacterInfo(this, v3);
      v9 = CharacterInfo;
      if ( (!CharacterInfo || !CharacterInfo->infoValid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 172, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
        __debugbreak();
      if ( !v9->usingAnimState )
      {
        BG_Player_SetPlayerInfo(ServerDObjForEnt, &v9->control, &info);
        control = (float *)info.control;
        v11 = info.IKHandBone[0] != 0xFE && (info.control->hand_ik_local_pos[0].v[0] != 0.0 || info.control->hand_ik_local_pos[0].v[1] != 0.0 || info.control->hand_ik_local_pos[0].v[2] != 0.0);
        v12 = info.IKHandBone[1] == 0xFE;
        (*outWorldIKEnabled)[0] = v11;
        v13 = !v12 && (control[21] != 0.0 || control[22] != 0.0 || control[23] != 0.0);
        (*outWorldIKEnabled)[1] = v13;
      }
    }
  }
}

/*
==============
GStaticMP::GetXModel
==============
*/
XModel *GStaticMP::GetXModel(GStaticMP *this, const char *name)
{
  return SV_Game_GetXModel(name);
}

/*
==============
GStaticMP::HasCharacterInfo
==============
*/
bool GStaticMP::HasCharacterInfo(GStaticMP *this, const int entNum)
{
  return entNum >= 0 && entNum < (signed int)this->m_characterCount;
}

/*
==============
GStaticMP::OverridePlayerHideParts
==============
*/
void GStaticMP::OverridePlayerHideParts(GStaticMP *this, const int entNum, const DObjPartBits *hidePartBits)
{
  __int64 v3; 
  gentity_s *v5; 

  v3 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 189, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v5 = &g_entities[v3];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v5->s.eType - 1) & 0xFFEE) == 0 )
  {
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    GUtils::ms_gUtils->EntityStateSetPartBits(GUtils::ms_gUtils, v5, hidePartBits);
  }
}

/*
==============
GStaticMP::SafeDObjFree
==============
*/
void GStaticMP::SafeDObjFree(GStaticMP *this, int handle)
{
  __int64 v2; 
  int v4; 

  v2 = handle;
  if ( (unsigned int)handle >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( 2048 ) )", "handle doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", handle, v4) )
      __debugbreak();
  }
  G_Utils_DObjSafeFree(&g_entities[v2]);
}

/*
==============
GStaticMP::UsingLowLodClientEntityEvents
==============
*/

bool __fastcall GStaticMP::UsingLowLodClientEntityEvents(GStaticMP *this)
{
  return SV_EntitiesLoD_UseLowLodClientEntityEvents();
}

