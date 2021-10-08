/*
==============
GStaticSP::CreateDObj
==============
*/

DObj *__fastcall GStaticSP::CreateDObj(GStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  return ?CreateDObj@GStaticSP@@UEBAPEAUDObj@@PEAUDObjModel@@GPEAUXAnimTree@@HH_N@Z(this, dobjModels, numModels, tree, handle, otherClientNum, requiresIKPreCache);
}

/*
==============
GStaticSP::AttachWeapon
==============
*/

unsigned __int16 __fastcall GStaticSP::AttachWeapon(GStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, const bool useReferenceModels, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  return ?AttachWeapon@GStaticSP@@UEBAGPEAUDObjModel@@GPEBUcharacterInfo_t@@_NPEAI3PEAH44AEAY0CA@W4CharacterModelType@@@Z(this, dobjModels, numModels, ci, useReferenceModels, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
}

/*
==============
GStaticSP::GetCharacterInfo
==============
*/

const characterInfo_t *__fastcall GStaticSP::GetCharacterInfo(GStaticSP *this, const int characterIndex)
{
  return ?GetCharacterInfo@GStaticSP@@UEBAPEBUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
GStaticSP::SafeDObjFree
==============
*/

void __fastcall GStaticSP::SafeDObjFree(GStaticSP *this, int handle)
{
  ?SafeDObjFree@GStaticSP@@UEBAXH@Z(this, handle);
}

/*
==============
GStaticSP::HasCharacterInfo
==============
*/

bool __fastcall GStaticSP::HasCharacterInfo(GStaticSP *this, const int entNum)
{
  return ?HasCharacterInfo@GStaticSP@@UEBA_NH@Z(this, entNum);
}

/*
==============
GStaticSP::GetXModel
==============
*/

XModel *__fastcall GStaticSP::GetXModel(GStaticSP *this, const char *name)
{
  return ?GetXModel@GStaticSP@@UEBAPEAUXModel@@PEBD@Z(this, name);
}

/*
==============
GStaticSP::GetCharacterInfo
==============
*/

characterInfo_t *__fastcall GStaticSP::GetCharacterInfo(GStaticSP *this, const int characterIndex)
{
  return ?GetCharacterInfo@GStaticSP@@UEAAPEAUcharacterInfo_t@@H@Z(this, characterIndex);
}

/*
==============
GStaticSP::BodyModel
==============
*/

unsigned __int16 __fastcall GStaticSP::BodyModel(GStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es, const characterInfo_t *ci, const bool isReferenceModel)
{
  return ?BodyModel@GStaticSP@@UEBAGPEAUDObjModel@@GPEBUentityState_t@@PEBUcharacterInfo_t@@_N@Z(this, dobjModels, numModels, es, ci, isReferenceModel);
}

/*
==============
GStaticSP::GetPlayerEvents
==============
*/

BgPlayerEvents *__fastcall GStaticSP::GetPlayerEvents(GStaticSP *this, const int entityIndex)
{
  return ?GetPlayerEvents@GStaticSP@@UEAAPEAVBgPlayerEvents@@H@Z(this, entityIndex);
}

/*
==============
GStaticSP::GetAngles
==============
*/

void __fastcall GStaticSP::GetAngles(GStaticSP *this, int entIndex, vec3_t *outAngles)
{
  ?GetAngles@GStaticSP@@UEBAXHAEATvec3_t@@@Z(this, entIndex, outAngles);
}

/*
==============
GStaticSP::GetAttachXModel
==============
*/

XModel *__fastcall GStaticSP::GetAttachXModel(GStaticSP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  return ?GetAttachXModel@GStaticSP@@UEBAPEAUXModel@@PEBUcharacterInfo_t@@H_N@Z(this, ci, attachModelIndex, isReferenceModel);
}

/*
==============
GStaticSP::UsingLowLodClientEntityEvents
==============
*/

bool __fastcall GStaticSP::UsingLowLodClientEntityEvents(GStaticSP *this)
{
  return ?UsingLowLodClientEntityEvents@GStaticSP@@UEBA_NXZ(this);
}

/*
==============
GStaticSP::GetAnimStatics
==============
*/

BgAnimStatic *__fastcall GStaticSP::GetAnimStatics(GStaticSP *this)
{
  return ?GetAnimStatics@GStaticSP@@UEAAPEAUBgAnimStatic@@XZ(this);
}

/*
==============
GStaticSP::GStaticSP
==============
*/

void __fastcall GStaticSP::GStaticSP(GStaticSP *this)
{
  ??0GStaticSP@@QEAA@XZ(this);
}

/*
==============
GStaticSP::GetAnimStatics
==============
*/

const BgAnimStatic *__fastcall GStaticSP::GetAnimStatics(GStaticSP *this)
{
  return ?GetAnimStatics@GStaticSP@@UEBAPEBUBgAnimStatic@@XZ(this);
}

/*
==============
GStaticSP::GetCharacterAnimState
==============
*/

const characterAnimState_t *__fastcall GStaticSP::GetCharacterAnimState(GStaticSP *this, const int entNum)
{
  return ?GetCharacterAnimState@GStaticSP@@UEBAPEBUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
GStaticSP::GetCharacterAnimState
==============
*/

characterAnimState_t *__fastcall GStaticSP::GetCharacterAnimState(GStaticSP *this, const int entNum)
{
  return ?GetCharacterAnimState@GStaticSP@@UEAAPEAUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
GStaticSP::GStaticSP
==============
*/
void GStaticSP::GStaticSP(GStaticSP *this)
{
  this->__vftable = (GStaticSP_vtbl *)&GStaticSP::`vftable';
  `eh vector constructor iterator'(this->m_playerEvents, 0xD8ui64, 1ui64, (void (__fastcall *)(void *))GPlayerEventsSP::GPlayerEventsSP, (void (__fastcall *)(void *))GPlayerEventsSP::~GPlayerEventsSP);
  memset_0(&this->m_animData, 0, 0x8628ui64);
  this->m_animData.anim_user = 1;
}

/*
==============
GStaticSP::AttachWeapon
==============
*/
__int64 GStaticSP::AttachWeapon(GStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 128, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not implemented for singleplayer") )
    __debugbreak();
  return 0i64;
}

/*
==============
GStaticSP::BodyModel
==============
*/
__int64 GStaticSP::BodyModel(GStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not implemented for singleplayer") )
    __debugbreak();
  return 0i64;
}

/*
==============
GStaticSP::CreateDObj
==============
*/
DObj *GStaticSP::CreateDObj(GStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  return Com_ServerDObjCreate(dobjModels, numModels, tree, handle, requiresIKPreCache);
}

/*
==============
GStaticSP::GetAngles
==============
*/
void GStaticSP::GetAngles(GStaticSP *this, int entIndex, vec3_t *outAngles)
{
  __int64 v3; 
  gentity_s *v5; 
  int v7; 

  v3 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v7) )
      __debugbreak();
  }
  v5 = g_entities;
  outAngles->v[0] = g_entities[v3].r.currentAngles.v[0];
  outAngles->v[1] = v5[v3].r.currentAngles.v[1];
  outAngles->v[2] = v5[v3].r.currentAngles.v[2];
}

/*
==============
GStaticSP::GetAnimStatics
==============
*/
BgAnimStatic *GStaticSP::GetAnimStatics(GStaticSP *this)
{
  return &this->m_animData;
}

/*
==============
GStaticSP::GetAnimStatics
==============
*/
BgAnimStatic *GStaticSP::GetAnimStatics(GStaticSP *this)
{
  return &this->m_animData;
}

/*
==============
GStaticSP::GetAttachXModel
==============
*/
XModel *GStaticSP::GetAttachXModel(GStaticSP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  __int64 v4; 
  __int64 v8; 

  v4 = attachModelIndex;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 105, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v4 >= 9 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 106, ASSERT_TYPE_ASSERT, "(unsigned)( attachModelIndex ) < (unsigned)( 9 )", "attachModelIndex doesn't index MAX_CLIENT_ATTACH_MODELS\n\t%i not in [0, %i)", v8, 9) )
      __debugbreak();
  }
  if ( isReferenceModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 107, ASSERT_TYPE_ASSERT, "( !isReferenceModel )", "SP does not have model customization. isReferenceModel flag cannot be set to true.") )
    __debugbreak();
  return SV_Game_GetXModel(ci->attachModelNames[v4]);
}

/*
==============
GStaticSP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *GStaticSP::GetCharacterAnimState(GStaticSP *this, const int entNum)
{
  __int64 v2; 
  characterInfo_t *m_characterInfo; 
  actor_s *actor; 

  v2 = entNum;
  if ( entNum )
  {
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
      __debugbreak();
    if ( G_IsEntityInUse(v2) )
    {
      actor = g_entities[v2].actor;
      if ( actor )
        return ($08CBA61D1816DE37C73E05DB6D8FE339 *)&actor->charAnimState;
    }
  }
  else
  {
    m_characterInfo = this->m_characterInfo;
    if ( this == (GStaticSP *)-19560i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 58, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( m_characterInfo->usingAnimState )
      return &m_characterInfo->14780;
  }
  return 0i64;
}

/*
==============
GStaticSP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *GStaticSP::GetCharacterAnimState(GStaticSP *this, const int entNum)
{
  __int64 v2; 
  characterInfo_t *m_characterInfo; 
  actor_s *actor; 

  v2 = entNum;
  if ( entNum )
  {
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
      __debugbreak();
    if ( G_IsEntityInUse(v2) )
    {
      actor = g_entities[v2].actor;
      if ( actor )
        return ($08CBA61D1816DE37C73E05DB6D8FE339 *)&actor->charAnimState;
    }
  }
  else
  {
    m_characterInfo = this->m_characterInfo;
    if ( this == (GStaticSP *)-19560i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 80, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( m_characterInfo->usingAnimState )
      return &m_characterInfo->14780;
  }
  return 0i64;
}

/*
==============
GStaticSP::GetCharacterInfo
==============
*/
characterInfo_t *GStaticSP::GetCharacterInfo(GStaticSP *this, const int characterIndex)
{
  __int64 v2; 
  int v6; 

  v2 = characterIndex;
  if ( characterIndex )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (1) )", "characterIndex doesn't index MAX_CHARACTERS_SP\n\t%i not in [0, %i)", characterIndex, v6) )
      __debugbreak();
  }
  return &this->m_characterInfo[v2];
}

/*
==============
GStaticSP::GetCharacterInfo
==============
*/
characterInfo_t *GStaticSP::GetCharacterInfo(GStaticSP *this, const int characterIndex)
{
  __int64 v2; 
  int v6; 

  v2 = characterIndex;
  if ( characterIndex )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (1) )", "characterIndex doesn't index MAX_CHARACTERS_SP\n\t%i not in [0, %i)", characterIndex, v6) )
      __debugbreak();
  }
  return &this->m_characterInfo[v2];
}

/*
==============
GStaticSP::GetPlayerEvents
==============
*/
GPlayerEventsSP *GStaticSP::GetPlayerEvents(GStaticSP *this, const int entityIndex)
{
  __int64 v2; 
  int v6; 

  v2 = entityIndex;
  if ( entityIndex )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 150, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (1) )", "entityIndex doesn't index MAX_CHARACTERS_SP\n\t%i not in [0, %i)", entityIndex, v6) )
      __debugbreak();
  }
  return &this->m_playerEvents[v2];
}

/*
==============
GStaticSP::GetXModel
==============
*/
XModel *GStaticSP::GetXModel(GStaticSP *this, const char *name)
{
  return SV_Game_GetXModel(name);
}

/*
==============
GStaticSP::HasCharacterInfo
==============
*/
bool GStaticSP::HasCharacterInfo(GStaticSP *this, const int entNum)
{
  return entNum == 0;
}

/*
==============
GStaticSP::SafeDObjFree
==============
*/
void GStaticSP::SafeDObjFree(GStaticSP *this, int handle)
{
  __int64 v2; 
  int v4; 

  v2 = handle;
  if ( (unsigned int)handle >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( 2048 ) )", "handle doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", handle, v4) )
      __debugbreak();
  }
  G_Utils_DObjSafeFree(&g_entities[v2]);
}

/*
==============
GStaticSP::UsingLowLodClientEntityEvents
==============
*/
bool GStaticSP::UsingLowLodClientEntityEvents(GStaticSP *this)
{
  return 0;
}

