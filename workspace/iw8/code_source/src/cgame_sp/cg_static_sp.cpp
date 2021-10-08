/*
==============
CgStaticSP::GetAnimStatics
==============
*/

const BgAnimStatic *__fastcall CgStaticSP::GetAnimStatics(CgStaticSP *this)
{
  return ?GetAnimStatics@CgStaticSP@@UEBAPEBUBgAnimStatic@@XZ(this);
}

/*
==============
CgStaticSP::GetXModel
==============
*/

XModel *__fastcall CgStaticSP::GetXModel(CgStaticSP *this, const char *name)
{
  return ?GetXModel@CgStaticSP@@UEBAPEAUXModel@@PEBD@Z(this, name);
}

/*
==============
CgStaticSP::GetAnimStatics
==============
*/

BgAnimStatic *__fastcall CgStaticSP::GetAnimStatics(CgStaticSP *this)
{
  return ?GetAnimStatics@CgStaticSP@@UEAAPEAUBgAnimStatic@@XZ(this);
}

/*
==============
CgStaticSP::GetCharacterAnimState
==============
*/

const characterAnimState_t *__fastcall CgStaticSP::GetCharacterAnimState(CgStaticSP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgStaticSP@@UEBAPEBUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgStaticSP::CreateDObj
==============
*/

DObj *__fastcall CgStaticSP::CreateDObj(CgStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  return ?CreateDObj@CgStaticSP@@UEBAPEAUDObj@@PEAUDObjModel@@GPEAUXAnimTree@@HH_N@Z(this, dobjModels, numModels, tree, handle, otherClientNum, requiresIKPreCache);
}

/*
==============
CgStaticSP::GetCharacterAngles
==============
*/

bool __fastcall CgStaticSP::GetCharacterAngles(CgStaticSP *this, const int entityIndex, vec3_t *outAngles)
{
  return ?GetCharacterAngles@CgStaticSP@@UEBA_NHAEATvec3_t@@@Z(this, entityIndex, outAngles);
}

/*
==============
CgStaticSP::HasCharacterInfo
==============
*/

bool __fastcall CgStaticSP::HasCharacterInfo(CgStaticSP *this, const int entNum)
{
  return ?HasCharacterInfo@CgStaticSP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgStaticSP::WeaponModelLoadStatusMaybeDirtyThisFrame
==============
*/

bool __fastcall CgStaticSP::WeaponModelLoadStatusMaybeDirtyThisFrame(CgStaticSP *this)
{
  return ?WeaponModelLoadStatusMaybeDirtyThisFrame@CgStaticSP@@UEBA_NXZ(this);
}

/*
==============
CgStaticSP::GetClientInfo
==============
*/

clientInfo_t *__fastcall CgStaticSP::GetClientInfo(CgStaticSP *this, const int clientIndex)
{
  return ?GetClientInfo@CgStaticSP@@UEAAPEAUclientInfo_t@@H@Z(this, clientIndex);
}

/*
==============
CgStaticSP::~CgStaticSP
==============
*/

void __fastcall CgStaticSP::~CgStaticSP(CgStaticSP *this)
{
  ??1CgStaticSP@@UEAA@XZ(this);
}

/*
==============
CgStaticSP::AttachWeapon
==============
*/

unsigned __int16 __fastcall CgStaticSP::AttachWeapon(CgStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, const bool useReferenceModels, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  return ?AttachWeapon@CgStaticSP@@UEBAGPEAUDObjModel@@GPEBUcharacterInfo_t@@_NPEAI3PEAH44AEAY0CA@W4CharacterModelType@@@Z(this, dobjModels, numModels, ci, useReferenceModels, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
}

/*
==============
CgStaticSP::SafeDObjFree
==============
*/

void __fastcall CgStaticSP::SafeDObjFree(CgStaticSP *this, int handle)
{
  ?SafeDObjFree@CgStaticSP@@UEBAXH@Z(this, handle);
}

/*
==============
CgStaticSP::GetClientInfo
==============
*/

const clientInfo_t *__fastcall CgStaticSP::GetClientInfo(CgStaticSP *this, const int clientIndex)
{
  return ?GetClientInfo@CgStaticSP@@UEBAPEBUclientInfo_t@@H@Z(this, clientIndex);
}

/*
==============
CgStaticSP::CgStaticSP
==============
*/

void __fastcall CgStaticSP::CgStaticSP(CgStaticSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgStaticSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgStaticSP::BodyModel
==============
*/

unsigned __int16 __fastcall CgStaticSP::BodyModel(CgStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es, const characterInfo_t *ci, const bool isReferenceModel)
{
  return ?BodyModel@CgStaticSP@@UEBAGPEAUDObjModel@@GPEBUentityState_t@@PEBUcharacterInfo_t@@_N@Z(this, dobjModels, numModels, es, ci, isReferenceModel);
}

/*
==============
CgStaticSP::GetAngles
==============
*/

void __fastcall CgStaticSP::GetAngles(CgStaticSP *this, int entIndex, vec3_t *outAngles)
{
  ?GetAngles@CgStaticSP@@UEBAXHAEATvec3_t@@@Z(this, entIndex, outAngles);
}

/*
==============
CgStaticSP::GetAttachXModel
==============
*/

XModel *__fastcall CgStaticSP::GetAttachXModel(CgStaticSP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  return ?GetAttachXModel@CgStaticSP@@UEBAPEAUXModel@@PEBUcharacterInfo_t@@H_N@Z(this, ci, attachModelIndex, isReferenceModel);
}

/*
==============
CgStaticSP::GetCharacterAnimState
==============
*/

characterAnimState_t *__fastcall CgStaticSP::GetCharacterAnimState(CgStaticSP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgStaticSP@@UEAAPEAUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgStaticSP::CgStaticSP
==============
*/
void CgStaticSP::CgStaticSP(CgStaticSP *this, const LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgStaticSP_vtbl *)&CgStaticSP::`vftable';
  memset_0(&this->m_animData, 0, sizeof(this->m_animData));
  this->m_animData.anim_user = 0;
}

/*
==============
CgStaticSP::~CgStaticSP
==============
*/
void CgStaticSP::~CgStaticSP(CgStaticSP *this)
{
  this->__vftable = (CgStaticSP_vtbl *)&CgStaticSP::`vftable';
  DebugWipe(&this->m_animData, 0x4C60ui64);
  this->__vftable = (CgStaticSP_vtbl *)&CgStatic::`vftable';
  this->m_localClientNum = LOCAL_CLIENT_INVALID;
  BgStatic::~BgStatic(this);
}

/*
==============
CgStaticSP::AttachWeapon
==============
*/
__int64 CgStaticSP::AttachWeapon(CgStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 161, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not implemented for singleplayer") )
    __debugbreak();
  return numModels;
}

/*
==============
CgStaticSP::BodyModel
==============
*/
__int64 CgStaticSP::BodyModel(CgStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 168, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not implemented for singleplayer") )
    __debugbreak();
  return numModels;
}

/*
==============
CgStaticSP::CreateDObj
==============
*/
DObj *CgStaticSP::CreateDObj(CgStaticSP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  DObj *v10; 
  centity_t *Entity; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int *v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v29; 
  __int64 entnum; 
  int v31[2]; 
  int v32; 
  int v33; 
  int v34; 

  v10 = Com_ClientDObjCreate(dobjModels, numModels, tree, handle, this->m_localClientNum, requiresIKPreCache, handle);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, handle);
  if ( CG_Entity_ShouldCreatePhysicsOnInit(this->m_localClientNum, handle) )
    CG_Entity_CreatePhysics(this->m_localClientNum, handle, 1);
  if ( CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)this->m_localClientNum, Entity->nextState.number) )
    CG_Entity_CreateCloth((const LocalClientNum_t)this->m_localClientNum, Entity->nextState.number);
  __asm { vmovss  xmm0, cs:__real@48000000 }
  m_localClientNum = this->m_localClientNum;
  __asm
  {
    vmovss  [rsp+0A8h+var_60], xmm0
    vmovss  [rsp+0A8h+var_5C], xmm0
    vmovss  [rsp+0A8h+var_58], xmm0
  }
  _RBX = CgEntitySystem::GetEntitySystem(m_localClientNum);
  if ( (unsigned int)otherClientNum >= 0x800 )
  {
    LODWORD(entnum) = 2048;
    LODWORD(v29) = otherClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v29, entnum) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  __asm { vmovss  xmm0, [rsp+0A8h+var_60] }
  if ( otherClientNum > (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    _RCX = 3i64 * otherClientNum + 389124;
    __asm
    {
      vmovss  dword ptr [rbx+rcx*4], xmm0
      vmovss  xmm1, [rsp+0A8h+var_5C]
      vmovss  dword ptr [rbx+rcx*4+4], xmm1
      vmovss  xmm0, [rsp+0A8h+var_58]
      vmovss  dword ptr [rbx+rcx*4+8], xmm0
    }
  }
  else
  {
    v16 = s_entity_aab_X;
    v17 = s_entity_aab_Z;
    __asm { vmovss  [rsp+0A8h+var_68], xmm0 }
    v18 = s_entity_aab_Y;
    if ( (v31[0] & 0x7F800000) == 2139095040 )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+var_5C]
      vmovss  [rsp+0A8h+var_68], xmm0
    }
    if ( (v31[0] & 0x7F800000) == 2139095040 )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+var_58]
      vmovss  [rsp+0A8h+var_68], xmm0
    }
    if ( (v31[0] & 0x7F800000) == 2139095040 )
    {
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v21 = (unsigned int *)&_RBX->m_entityOrigin[otherClientNum];
    v22 = v32 ^ (unsigned int)v21 ^ ~v16;
    v23 = v34 ^ (unsigned int)v21;
    v24 = v18 ^ v22 ^ v33 ^ (unsigned int)v21;
    *v21 = v22;
    v21[1] = v24;
    v21[2] = v17 ^ v24 ^ v23;
    memset(v31, 0, sizeof(v31));
  }
  DObjSetCamoMaterialOverride(v10, dobjModels, numModels);
  return v10;
}

/*
==============
CgStaticSP::GetAngles
==============
*/
void CgStaticSP::GetAngles(CgStaticSP *this, int entIndex, vec3_t *outAngles)
{
  centity_t *Entity; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 176, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  outAngles->v[0] = Entity->pose.angles.v[0];
  outAngles->v[1] = Entity->pose.angles.v[1];
  outAngles->v[2] = Entity->pose.angles.v[2];
}

/*
==============
CgStaticSP::GetAnimStatics
==============
*/
BgAnimStatic *CgStaticSP::GetAnimStatics(CgStaticSP *this)
{
  return &this->m_animData;
}

/*
==============
CgStaticSP::GetAnimStatics
==============
*/
BgAnimStatic *CgStaticSP::GetAnimStatics(CgStaticSP *this)
{
  return &this->m_animData;
}

/*
==============
CgStaticSP::GetAttachXModel
==============
*/
XModel *CgStaticSP::GetAttachXModel(CgStaticSP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  __int64 v4; 
  __int64 v8; 

  v4 = attachModelIndex;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 107, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v4 >= 9 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( attachModelIndex ) < (unsigned)( 9 )", "attachModelIndex doesn't index MAX_CLIENT_ATTACH_MODELS\n\t%i not in [0, %i)", v8, 9) )
      __debugbreak();
  }
  if ( isReferenceModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 109, ASSERT_TYPE_ASSERT, "( !isReferenceModel )", "SP does not have model customization. isReferenceModel flag cannot be set to true.") )
    __debugbreak();
  return R_RegisterModel(ci->attachModelNames[v4]);
}

/*
==============
CgStaticSP::GetCharacterAngles
==============
*/
char CgStaticSP::GetCharacterAngles(CgStaticSP *this, const int entityIndex, vec3_t *outAngles)
{
  *outAngles = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityIndex)->pose.angles;
  return 1;
}

/*
==============
CgStaticSP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *CgStaticSP::GetCharacterAnimState(CgStaticSP *this, const int entNum)
{
  __int64 v2; 
  bool HasCharacterInfo; 
  cg_t *LocalClientGlobals; 
  cg_t *v6; 
  characterInfo_t *CharacterInfo; 
  __int64 v9; 

  v2 = entNum;
  HasCharacterInfo = CgStaticSP::HasCharacterInfo(this, entNum);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v6 = LocalClientGlobals;
  if ( HasCharacterInfo )
  {
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v6->IsMP(v6) )
    {
      if ( (unsigned int)v2 >= v6[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v9, v6[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v6[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v2);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v6, v2);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 66, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( CharacterInfo->usingAnimState )
      return &CharacterInfo->14780;
    else
      return 0i64;
  }
  else
  {
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 74, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    return ($08CBA61D1816DE37C73E05DB6D8FE339 *)v6->GetCharacterAnimState(v6, v2);
  }
}

/*
==============
CgStaticSP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *CgStaticSP::GetCharacterAnimState(CgStaticSP *this, const int entNum)
{
  __int64 v2; 
  bool HasCharacterInfo; 
  cg_t *LocalClientGlobals; 
  cg_t *v6; 
  const characterInfo_t *CharacterInfo; 
  __int64 v9; 

  v2 = entNum;
  HasCharacterInfo = CgStaticSP::HasCharacterInfo(this, entNum);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v6 = LocalClientGlobals;
  if ( HasCharacterInfo )
  {
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v6->IsMP(v6) )
    {
      if ( (unsigned int)v2 >= v6[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v9, v6[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v6[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v2);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v6, v2);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 85, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( CharacterInfo->usingAnimState )
      return &CharacterInfo->14780;
    else
      return 0i64;
  }
  else
  {
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 93, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    return ($08CBA61D1816DE37C73E05DB6D8FE339 *)v6->GetCharacterAnimState(v6, v2);
  }
}

/*
==============
CgStaticSP::GetClientInfo
==============
*/
clientInfo_t *CgStaticSP::GetClientInfo(CgStaticSP *this, const int clientIndex)
{
  return 0i64;
}

/*
==============
CgStaticSP::GetClientInfo
==============
*/
const clientInfo_t *CgStaticSP::GetClientInfo(CgStaticSP *this, const int clientIndex)
{
  return 0i64;
}

/*
==============
CgStaticSP::GetXModel
==============
*/
XModel *CgStaticSP::GetXModel(CgStaticSP *this, const char *name)
{
  return R_RegisterModel(name);
}

/*
==============
CgStaticSP::HasCharacterInfo
==============
*/
__int64 CgStaticSP::HasCharacterInfo(CgStaticSP *this, const int entNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_static_sp.cpp", 56, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return ((__int64 (__fastcall *)(cg_t *, _QWORD))LocalClientGlobals->HasCharacterInfo)(LocalClientGlobals, (unsigned int)entNum);
}

/*
==============
CgStaticSP::SafeDObjFree
==============
*/
void CgStaticSP::SafeDObjFree(CgStaticSP *this, int handle)
{
  CG_Entity_DestroyCloth((const LocalClientNum_t)this->m_localClientNum, handle);
  Com_SafeClientDObjFree(handle, this->m_localClientNum);
}

/*
==============
CgStaticSP::WeaponModelLoadStatusMaybeDirtyThisFrame
==============
*/
char CgStaticSP::WeaponModelLoadStatusMaybeDirtyThisFrame(CgStaticSP *this)
{
  return 1;
}

