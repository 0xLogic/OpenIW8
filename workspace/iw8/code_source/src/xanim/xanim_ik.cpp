/*
==============
XAnimIKGetDObjDataCache
==============
*/

bool __fastcall XAnimIKGetDObjDataCache(const DObj *obj, XAnimIKData *ikData, XAnimIKDObjData *outDObjData)
{
  return ?XAnimIKGetDObjDataCache@@YA_NPEIBUDObj@@PEIAUXAnimIKData@@PEIAUXAnimIKDObjData@@@Z(obj, ikData, outDObjData);
}

/*
==============
XAnimIKGetLocatorTagName
==============
*/

scr_string_t __fastcall XAnimIKGetLocatorTagName(XAnimIKType hand)
{
  return ?XAnimIKGetLocatorTagName@@YA?AW4scr_string_t@@W4XAnimIKType@@@Z(hand);
}

/*
==============
XAnimWeaponIKModelsContainer::GetHand
==============
*/

PlayerHandIndex __fastcall XAnimWeaponIKModelsContainer::GetHand(XAnimWeaponIKModelsContainer *this, int modelIndex)
{
  return ?GetHand@XAnimWeaponIKModelsContainer@@QEBA?AW4PlayerHandIndex@@H@Z(this, modelIndex);
}

/*
==============
XAnimWeaponIKModelsContainer::AddXModel
==============
*/

bool __fastcall XAnimWeaponIKModelsContainer::AddXModel(XAnimWeaponIKModelsContainer *this, const PlayerHandIndex hand, const XModel *weaponModel)
{
  return ?AddXModel@XAnimWeaponIKModelsContainer@@QEAA_NW4PlayerHandIndex@@PEBUXModel@@@Z(this, hand, weaponModel);
}

/*
==============
XAnimIKShutdown
==============
*/

void XAnimIKShutdown(void)
{
  ?XAnimIKShutdown@@YAXXZ();
}

/*
==============
XAnimWeaponIKModelsContainer::GetXModel
==============
*/

const XModel *__fastcall XAnimWeaponIKModelsContainer::GetXModel(XAnimWeaponIKModelsContainer *this, int modelIndex)
{
  return ?GetXModel@XAnimWeaponIKModelsContainer@@QEBAPEBUXModel@@H@Z(this, modelIndex);
}

/*
==============
XAnimIKInit
==============
*/

void __fastcall XAnimIKInit(bool preCacheEnabled)
{
  ?XAnimIKInit@@YAX_N@Z(preCacheEnabled);
}

/*
==============
XAnimIKAttachTargetToWeapon
==============
*/

int __fastcall XAnimIKAttachTargetToWeapon(const XAnimIKType hand, XModel *tagIKTargetModel, const XAnimWeaponIKModelsContainer *weaponModels, const XAnimIKTagRequest *tagRequest, DObjModel *dobjModels, unsigned __int16 *numModels, CharacterModelType (*outModelTypes)[32])
{
  return ?XAnimIKAttachTargetToWeapon@@YAHW4XAnimIKType@@PEAUXModel@@PEBVXAnimWeaponIKModelsContainer@@PEBUXAnimIKTagRequest@@PEAUDObjModel@@PEAGAEAY0CA@W4CharacterModelType@@@Z(hand, tagIKTargetModel, weaponModels, tagRequest, dobjModels, numModels, outModelTypes);
}

/*
==============
XAnimIKGetCacheKey
==============
*/

int __fastcall XAnimIKGetCacheKey(const DObj *obj)
{
  return ?XAnimIKGetCacheKey@@YAHPEIBUDObj@@@Z(obj);
}

/*
==============
XAnimIKExtractDObjData
==============
*/

bool __fastcall XAnimIKExtractDObjData(const DObj *obj, XAnimIKDObjData *outDObjData)
{
  return ?XAnimIKExtractDObjData@@YA_NPEIBUDObj@@PEIAUXAnimIKDObjData@@@Z(obj, outDObjData);
}

/*
==============
XAnimIKClearPreCache
==============
*/

void XAnimIKClearPreCache(void)
{
  ?XAnimIKClearPreCache@@YAXXZ();
}

/*
==============
XAnimIKPreCalc
==============
*/

void __fastcall XAnimIKPreCalc(const DObj *obj, XAnimIKData *data, const XAnimIKDObjData *dObjData, DObjPartBits *partBits)
{
  ?XAnimIKPreCalc@@YAXPEIBUDObj@@PEIAUXAnimIKData@@PEIBUXAnimIKDObjData@@PEIAUDObjPartBits@@@Z(obj, data, dObjData, partBits);
}

/*
==============
XAnimIKAttachTargetToTag
==============
*/

void __fastcall XAnimIKAttachTargetToTag(XModel *tagIKTargetModel, scr_string_t tagName, DObjModel *dobjModels, unsigned __int16 *numModels, int *attachedModelIdx, CharacterModelType (*outModelTypes)[32])
{
  ?XAnimIKAttachTargetToTag@@YAXPEAUXModel@@W4scr_string_t@@PEAUDObjModel@@PEAGPEAHAEAY0CA@W4CharacterModelType@@@Z(tagIKTargetModel, tagName, dobjModels, numModels, attachedModelIdx, outModelTypes);
}

/*
==============
XAnimIKGetWeightsByAnimIndex
==============
*/

void __fastcall XAnimIKGetWeightsByAnimIndex(const DObj *obj, int animIndex, float *ikWeights, float *animWeights)
{
  ?XAnimIKGetWeightsByAnimIndex@@YAXPEIBUDObj@@HPEAM1@Z(obj, animIndex, ikWeights, animWeights);
}

/*
==============
XAnimIKSetupTagRequest
==============
*/

XAnimIKTagRequest *__fastcall XAnimIKSetupTagRequest(XAnimIKTagRequest *result, const Weapon *weapon, const bool isAlternate, const bool requiresRoboticIK, const bool requiresAkimboIK, const bool matchModelHands)
{
  return ?XAnimIKSetupTagRequest@@YA?AUXAnimIKTagRequest@@AEBUWeapon@@_N111@Z(result, weapon, isAlternate, requiresRoboticIK, requiresAkimboIK, matchModelHands);
}

/*
==============
XAnimIKDObjModelsGetBoneIndex
==============
*/

int __fastcall XAnimIKDObjModelsGetBoneIndex(DObjModel *dobjModels, const CharacterModelType *dobjModelTypes, unsigned __int16 numModels, const CharacterModelType modelTypeToMatch, const XModel *target, scr_string_t name, unsigned __int8 *index, int *foundModelIndex)
{
  return ?XAnimIKDObjModelsGetBoneIndex@@YAHPEAUDObjModel@@PEBW4CharacterModelType@@GW42@PEBUXModel@@W4scr_string_t@@PEAEPEAH@Z(dobjModels, dobjModelTypes, numModels, modelTypeToMatch, target, name, index, foundModelIndex);
}

/*
==============
XAnimIKGetWeights
==============
*/

void __fastcall XAnimIKGetWeights(const DObj *obj, const XAnimInfo *info, float *ikWeights, float *animWeights)
{
  ?XAnimIKGetWeights@@YAXPEIBUDObj@@PEIBUXAnimInfo@@PEAM2@Z(obj, info, ikWeights, animWeights);
}

/*
==============
XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer
==============
*/

void __fastcall XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer(XAnimWeaponIKModelsContainer *this)
{
  ??0XAnimWeaponIKModelsContainer@@QEAA@XZ(this);
}

/*
==============
XAnimIKClearPreCacheDObj
==============
*/

void __fastcall XAnimIKClearPreCacheDObj(int key)
{
  ?XAnimIKClearPreCacheDObj@@YAXH@Z(key);
}

/*
==============
XAnimIKPreCacheDObj
==============
*/

void __fastcall XAnimIKPreCacheDObj(DObj *obj, int handle, int key)
{
  ?XAnimIKPreCacheDObj@@YAXPEIAUDObj@@HH@Z(obj, handle, key);
}

/*
==============
XAnimWeaponIKModelsContainer::Reset
==============
*/

void __fastcall XAnimWeaponIKModelsContainer::Reset(XAnimWeaponIKModelsContainer *this)
{
  ?Reset@XAnimWeaponIKModelsContainer@@QEAAXXZ(this);
}

/*
==============
XAnimIKDebug_GetAllBonesPartbits
==============
*/

void __fastcall XAnimIKDebug_GetAllBonesPartbits(const DObj *obj, DObjPartBits *partBits)
{
  ?XAnimIKDebug_GetAllBonesPartbits@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
XAnimWeaponIKModelsContainer::GetXModelCount
==============
*/

int __fastcall XAnimWeaponIKModelsContainer::GetXModelCount(XAnimWeaponIKModelsContainer *this)
{
  return ?GetXModelCount@XAnimWeaponIKModelsContainer@@QEBAHXZ(this);
}

/*
==============
XAnimIK_Register
==============
*/

void XAnimIK_Register(void)
{
  ?XAnimIK_Register@@YAXXZ();
}

/*
==============
XAnimIKIsPreCacheEnabled
==============
*/

bool __fastcall XAnimIKIsPreCacheEnabled()
{
  return ?XAnimIKIsPreCacheEnabled@@YA_NXZ();
}

/*
==============
XAnimWeaponIKModelsContainer::ReplaceXModel
==============
*/

void __fastcall XAnimWeaponIKModelsContainer::ReplaceXModel(XAnimWeaponIKModelsContainer *this, int modelIndex, const PlayerHandIndex hand, const XModel *weaponModel)
{
  ?ReplaceXModel@XAnimWeaponIKModelsContainer@@QEAAXHW4PlayerHandIndex@@PEBUXModel@@@Z(this, modelIndex, hand, weaponModel);
}

/*
==============
XAnimIK_Init
==============
*/
void XAnimIK_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_QWORD *)nodeData = 0i64;
  *((_QWORD *)nodeData + 1) = 0i64;
}

/*
==============
XAnimIK_Update
==============
*/
void XAnimIK_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  *(_QWORD *)nodeData = 0i64;
  *((_QWORD *)nodeData + 1) = 0i64;
}

/*
==============
XAnimIK_Calc
==============
*/
void XAnimIK_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  XAnimIKCalcInfo *ikCalcInfo; 
  const dvar_t *v11; 
  XAnimIKData *ikData; 
  XAnimIKDObjData *dObjData; 
  int v18; 
  unsigned int *p_targetBoneIndex; 
  int v25; 

  ikCalcInfo = animCalcInfo->ikCalcInfo;
  v11 = DCONST_DVARBOOL_xanim_ik_disable;
  ikData = ikCalcInfo->ikData;
  dObjData = ikCalcInfo->dObjData;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled && dObjData )
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_60], xmm7
      vmovss  xmm7, [rbp+0B0h+weightScale]
      vmovaps xmm3, xmm7; weightScale
    }
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, animInfo, *(float *)&_XMM3, bNormQuat, destBuffer, LINEAR);
    if ( !animCalcInfo->partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2039, ASSERT_TYPE_ASSERT, "(animCalcInfo->partBits)", (const char *)&queryFormat, "animCalcInfo->partBits") )
      __debugbreak();
    if ( ikData->settingsArray->typeName )
    {
      __asm { vmovaps [rsp+1B0h+var_50], xmm6 }
      Profile_Begin(460);
      v18 = 0;
      p_targetBoneIndex = &dObjData->boneInfo[0].targetBoneIndex;
      _R13 = ikData;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r13+0]
          vmovss  [rsp+1B0h+var_170], xmm0
        }
        if ( (v25 & 0x7F800000) != 2139095040 )
          __asm { vcomiss xmm0, xmm6 }
        ++v18;
        _R13 = (XAnimIKData *)((char *)_R13 + 4);
        p_targetBoneIndex += 7;
      }
      while ( v18 < 4 );
      Profile_EndInternal(NULL);
      __asm { vmovaps xmm6, [rsp+1B0h+var_50] }
    }
    __asm { vmovaps xmm7, [rsp+1B0h+var_60] }
  }
}

/*
==============
XAnimIK_PrintDebug
==============
*/
void XAnimIK_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, __int64 depth, int *inoutPos, __int64 a7)
{
  unsigned __int64 v7; 
  const dvar_t *v11; 
  __int64 v12; 
  __int64 v13; 
  char *fmt; 

  v7 = size;
  _R14 = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2112, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2113, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v7 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2114, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2115, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2116, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_xanim_ik_disable;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    if ( (int)depth > 0 )
    {
      v12 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v7, inoutPos, "  ");
        --v12;
      }
      while ( v12 );
    }
    Com_sprintfPos_truncate(buffer, v7, inoutPos, "   ^5OFF\n", depth, inoutPos, a7);
  }
  else
  {
    if ( (int)depth > 0 )
    {
      v13 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v7, inoutPos, "  ");
        --v13;
      }
      while ( v13 );
    }
    Com_sprintfPos_truncate(buffer, v7, inoutPos, "   ^5IkType Weights: ");
    for ( _RBX = 0i64; _RBX < 4; ++_RBX )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+rbx*4]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+58h+fmt], xmm0
      }
      Com_sprintfPos_truncate(buffer, v7, inoutPos, "%.3f ", *(double *)&fmt);
    }
    Com_sprintfPos_truncate(buffer, v7, inoutPos, "\n", depth, inoutPos, a7);
  }
}

/*
==============
XAnimIKCheckForegrip
==============
*/
bool XAnimIKCheckForegrip(const XAnimIKTagRequest *request)
{
  return BG_IsForceForegripIK(&request->weapon, request->isAlternate);
}

/*
==============
XAnimIKCheckUnderbarrelShotgun
==============
*/
bool XAnimIKCheckUnderbarrelShotgun(const XAnimIKTagRequest *request)
{
  return BG_HasUnderbarrelShotgun(&request->weapon) != 0;
}

/*
==============
XAnimIKCheckUnderbarrelGL
==============
*/
bool XAnimIKCheckUnderbarrelGL(const XAnimIKTagRequest *request)
{
  return BG_HasUnderbarrelGL(&request->weapon) != 0;
}

/*
==============
XAnimIKCheckRobotic
==============
*/
_BOOL8 XAnimIKCheckRobotic(const XAnimIKTagRequest *request)
{
  return request->requiresRoboticIK;
}

/*
==============
XAnimIKCheckAkimbo
==============
*/
_BOOL8 XAnimIKCheckAkimbo(const XAnimIKTagRequest *request)
{
  return request->requiresAkimboIK;
}

/*
==============
XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer
==============
*/
void XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer(XAnimWeaponIKModelsContainer *this)
{
  this->m_numModels = 0;
  memset_0(this->m_models, 0, 0x90ui64);
}

/*
==============
XAnimWeaponIKModelsContainer::AddXModel
==============
*/
bool XAnimWeaponIKModelsContainer::AddXModel(XAnimWeaponIKModelsContainer *this, const PlayerHandIndex hand, const XModel *weaponModel)
{
  __int64 m_numModels; 
  bool result; 

  m_numModels = this->m_numModels;
  if ( (_DWORD)m_numModels == 12 )
    return 0;
  this->m_models[m_numModels] = weaponModel;
  this->m_modelHandIndices[this->m_numModels] = hand;
  result = 1;
  ++this->m_numModels;
  return result;
}

/*
==============
XAnimWeaponIKModelsContainer::GetHand
==============
*/
__int64 XAnimWeaponIKModelsContainer::GetHand(XAnimWeaponIKModelsContainer *this, int modelIndex)
{
  __int64 v2; 
  int v6; 

  v2 = modelIndex;
  if ( (unsigned int)modelIndex >= 0xC )
  {
    v6 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1940, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_WEAPON_IK_MODELS )", "modelIndex doesn't index MAX_WEAPON_IK_MODELS\n\t%i not in [0, %i)", modelIndex, v6) )
      __debugbreak();
  }
  if ( (int)v2 < this->m_numModels )
    return (unsigned int)this->m_modelHandIndices[v2];
  else
    return 0i64;
}

/*
==============
XAnimWeaponIKModelsContainer::GetXModel
==============
*/
const XModel *XAnimWeaponIKModelsContainer::GetXModel(XAnimWeaponIKModelsContainer *this, int modelIndex)
{
  __int64 v2; 
  int v6; 

  v2 = modelIndex;
  if ( (unsigned int)modelIndex >= 0xC )
  {
    v6 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1927, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_WEAPON_IK_MODELS )", "modelIndex doesn't index MAX_WEAPON_IK_MODELS\n\t%i not in [0, %i)", modelIndex, v6) )
      __debugbreak();
  }
  if ( (int)v2 < this->m_numModels )
    return this->m_models[v2];
  else
    return 0i64;
}

/*
==============
XAnimWeaponIKModelsContainer::GetXModelCount
==============
*/
__int64 XAnimWeaponIKModelsContainer::GetXModelCount(XAnimWeaponIKModelsContainer *this)
{
  return (unsigned int)this->m_numModels;
}

/*
==============
XAnimWeaponIKModelsContainer::ReplaceXModel
==============
*/
void XAnimWeaponIKModelsContainer::ReplaceXModel(XAnimWeaponIKModelsContainer *this, int modelIndex, const PlayerHandIndex hand, const XModel *weaponModel)
{
  __int64 v5; 
  int m_numModels; 

  v5 = modelIndex;
  if ( (unsigned int)modelIndex >= this->m_numModels )
  {
    m_numModels = this->m_numModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1918, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( m_numModels )", "modelIndex doesn't index m_numModels\n\t%i not in [0, %i)", modelIndex, m_numModels) )
      __debugbreak();
  }
  this->m_models[v5] = weaponModel;
  this->m_modelHandIndices[v5] = hand;
}

/*
==============
XAnimWeaponIKModelsContainer::Reset
==============
*/
void XAnimWeaponIKModelsContainer::Reset(XAnimWeaponIKModelsContainer *this)
{
  this->m_numModels = 0;
}

/*
==============
XAnimCalcSecondBoneRotation
==============
*/
void XAnimCalcSecondBoneRotation(const XAnimIKSettings *setting, const float4 *hingeAxis, const float4 *firstBonePos, const float4 *secondBonePos, const float4 *thirdBonePos, const float4 *targetBonePos, const float4 *firstBoneQuat, float4 *delta)
{
  const float4 *v71; 
  const float4 *v72; 
  const float4 *v73; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  const float4 *v84; 
  float4 v103; 
  float4 v104; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovups xmm0, xmmword ptr [r9]
    vsubps  xmm9, xmm0, xmmword ptr [r8]
  }
  _RAX = thirdBonePos;
  _RDI = hingeAxis;
  _RBX = delta;
  __asm
  {
    vmovups xmm1, xmm0
    vmulps  xmm3, xmm9, xmm9
    vmovups xmm0, xmmword ptr [rax]
  }
  _RAX = targetBonePos;
  __asm
  {
    vsubps  xmm10, xmm0, xmm1
    vmulps  xmm7, xmm10, xmm10
    vmovups xmm0, xmmword ptr [rax]
    vsubps  xmm2, xmm0, xmmword ptr [r8]
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm6, xmm0, xmm0
    vmulps  xmm1, xmm2, xmm2
    vhaddps xmm0, xmm7, xmm7
    vhaddps xmm5, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm4, xmm0, xmm0
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm3, xmm0
    vhaddps xmm0, xmm7, xmm7
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm2, xmm0
    vmulps  xmm0, xmm3, xmm2
    vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
    vsubps  xmm1, xmm5, xmm4
    vaddps  xmm4, xmm1, xmm6
    vxorps  xmm6, xmm6, xmm6
    vcmpeqps xmm0, xmm3, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_DWORD)_RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_0001@@3Ufloat4@@B.v; float4 const g_0001
      vmovups xmmword ptr [rbx], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmm2, xmmword ptr [rcx]
      vdivps  xmm0, xmm4, xmm3
      vminps  xmm1, xmm1, xmm0
      vmaxps  xmm0, xmm2, xmm1
      vmovaps [rsp+0C8h+var_38], xmm8
    }
    *(double *)&_XMM0 = j___vdecl_acosf4(setting, hingeAxis, firstBonePos);
    __asm
    {
      vmovups xmm8, xmm0
      vsubps  xmm4, xmm6, xmm9
      vmulps  xmm1, xmm4, xmm4
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm3, xmm2, xmm2
      vhaddps xmm1, xmm3, xmm3
      vsqrtps xmm2, xmm1
      vdivps  xmm5, xmm4, xmm2
      vinsertps xmm0, xmm7, xmm7, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm1, xmm0
      vdivps  xmm2, xmm10, xmm1
      vmulps  xmm3, xmm2, xmm5
      vmovups xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vinsertps xmm0, xmm3, xmm3, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsubps  xmm1, xmm6, xmm2
      vmovups [rsp+0C8h+var_98], xmm0
    }
    Float4Clamp(v72, v71, v73, &v103);
    __asm
    {
      vmovups xmm0, [rsp+0C8h+var_98]
      vmovdqa [rsp+0C8h+var_88], xmm0
    }
    j___vdecl_acosf4(v76, v75, v77);
    __asm
    {
      vmovups xmm7, xmmword ptr [rdi]
      vmulps  xmm2, xmm7, xmm7
      vsubps  xmm0, xmm8, xmm0
      vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
      vinsertps xmm3, xmm2, xmm2, 8
      vhaddps xmm6, xmm3, xmm3
    }
    Float4SinCos(v84, &v103, &v104);
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_38]
      vhaddps xmm0, xmm6, xmm6
      vrsqrtps xmm1, xmm0
      vmulps  xmm2, xmm1, xmm7
      vmulps  xmm3, xmm2, [rsp+0C8h+var_98]
      vblendps xmm4, xmm3, [rsp+0C8h+var_88], 8
      vmulps  xmm0, xmm4, xmm4
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm1, xmm0
      vdivps  xmm2, xmm4, xmm1
      vcmpneqps xmm0, xmm2, xmm2
      vmovmskps eax, xmm0
      vmovups xmmword ptr [rbx], xmm2
    }
    if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 805, ASSERT_TYPE_SANITY, "( !Float4IsNaN( delta ) )", (const char *)&queryFormat, "!Float4IsNaN( delta )") )
      __debugbreak();
  }
  _R11 = &v106;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
XAnimIKApplyDeltas
==============
*/
void XAnimIKApplyDeltas(const XAnimIkSolverParams *ikParams, int orientToTarget, const XAnimIKData *ikData, int ikType, const XAnimIKDObjData *dObjData, const float4 *firstBoneQuatDelta, const float4 *secondBoneQuatDelta)
{
  __int64 v14; 
  char v17; 
  __int64 v18; 
  __int128 v19; 
  unsigned int secondBoneIndex; 
  unsigned int firstBoneIndex; 
  const float4 *v34; 
  const float4 *v35; 
  const float4 *v36; 
  const float4 *v66; 
  const float4 *v67; 
  const float4 *v68; 
  unsigned int thirdBoneIndex; 
  int restoreSubmodelBoneIndex; 
  const float4 *fmt; 
  const float4 *v87; 
  float v88; 
  float4 v89; 
  float4 v90; 
  float4 v91; 
  float4 v92; 
  float4 v93; 
  float4 v94; 

  _R14 = ikData;
  v14 = ikType;
  _RBX = ikParams;
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 574, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  _RAX = v14;
  v19 = 28 * (__int128)v14;
  v18 = v14;
  __asm
  {
    vmovss  xmm1, dword ptr [r14+rax*4]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !((*((_QWORD *)&v19 + 1) != 0i64) | v17) )
  {
    _RAX = secondBoneQuatDelta;
    secondBoneIndex = dObjData->boneInfo[v18].secondBoneIndex;
    __asm
    {
      vmovaps [rsp+110h+var_60], xmm9
      vmovaps xmm9, xmm1
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups [rbp+3Fh+var_A0], xmm0
      vmovups xmm0, xmmword ptr [rbx+60h]
      vshufps xmm9, xmm9, xmm9, 0
      vmovdqa [rsp+110h+var_D0], xmm9
      vmovups [rsp+110h+var_C0], xmm0
      vmovups [rbp+3Fh+var_B0], xmm1
    }
    XAnimIKUpdateBoneFromDelta(_RBX, secondBoneIndex, &v91, &v90, &v92, &v89, &v93);
    _RAX = firstBoneQuatDelta;
    __asm { vmovups xmm1, xmmword ptr [rbx+30h] }
    firstBoneIndex = dObjData->boneInfo[v18].firstBoneIndex;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rsp+110h+var_C0], xmm0
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovdqa [rbp+3Fh+var_B0], xmm9
      vmovups [rbp+3Fh+var_A0], xmm0
      vmovups [rsp+110h+var_D0], xmm1
    }
    XAnimIKUpdateBoneFromDelta(_RBX, firstBoneIndex, &v89, &v92, &v90, &v91, &v94);
    if ( orientToTarget )
    {
      __asm
      {
        vmovups xmm4, xmmword ptr [rbx+90h]
        vmovups xmm0, xmmword ptr [rbx+70h]
        vmovaps [rsp+110h+var_30], xmm6
        vshufps xmm6, xmm4, xmm4, 0FFh
        vmovaps [rsp+110h+var_40], xmm7
        vmovaps [rsp+110h+var_50], xmm8
        vmulps  xmm8, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm8, xmm8, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm5, xmm0, xmm3
        vmulps  xmm1, xmm8, xmm4
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vmulps  xmm1, xmm8, xmm6
        vhaddps xmm3, xmm2, xmm2
        vshufps xmm7, xmm8, xmm8, 0FFh
        vmulps  xmm0, xmm7, xmm6
        vsubps  xmm2, xmm0, xmm3
        vmulps  xmm4, xmm7, xmm4
        vaddps  xmm1, xmm4, xmm1
        vaddps  xmm0, xmm5, xmm1
        vmovups xmm1, [rbp+3Fh+var_90]
        vblendps xmm6, xmm2, xmm0, 7
        vmovups xmm2, xmmword ptr [rbx+60h]
        vmovups xmm0, xmmword ptr [rbx+80h]
      }
      Float3RotateQuatAroundOrigin(v35, v34, v36, &v89);
      __asm
      {
        vmovups xmm2, xmmword ptr [rbx+40h]
        vmovups xmm1, [rbp+3Fh+var_80]
        vmovups xmm0, [rsp+110h+var_D0]
      }
      Float3RotateQuatAroundOrigin(v67, v66, v68, &v89);
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+80h]
        vmovups xmm0, [rsp+110h+var_D0]
      }
      thirdBoneIndex = dObjData->boneInfo[v18].thirdBoneIndex;
      __asm
      {
        vmovups xmm2, xmm1
        vsubps  xmm1, xmm0, xmm1
        vaddps  xmm2, xmm1, xmm2
        vshufps xmm0, xmm2, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v, 0FAh ; 'ú'; float4 const g_unit
        vshufps xmm1, xmm2, xmm0, 84h ; '„'
        vmovups xmm0, xmmword ptr [rbx+70h]
        vmovups [rsp+110h+var_C0], xmm0
        vmovdqa [rbp+3Fh+var_80], xmm9
        vmovdqa [rbp+3Fh+var_90], xmm6
        vmovdqa [rbp+3Fh+var_B0], xmm1
      }
      XAnimIKUpdateBoneFromDelta(_RBX, thirdBoneIndex, &v90, &v91, &v93, &v94, &v92);
      __asm
      {
        vmovaps xmm8, [rsp+110h+var_50]
        vmovaps xmm7, [rsp+110h+var_40]
        vmovaps xmm6, [rsp+110h+var_30]
      }
    }
    restoreSubmodelBoneIndex = dObjData->boneInfo[v18].restoreSubmodelBoneIndex;
    __asm { vmovaps xmm9, [rsp+110h+var_60] }
    if ( restoreSubmodelBoneIndex != 255 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovups xmm1, xmmword ptr [rbx+0C0h]
        vmovss  [rsp+110h+var_E0], xmm0
        vmovups xmm0, xmmword ptr [rbx+0B0h]
      }
      XAnimSetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, restoreSubmodelBoneIndex, fmt, v87, v88);
    }
  }
}

/*
==============
XAnimIKAttachTargetToTag
==============
*/
void XAnimIKAttachTargetToTag(XModel *tagIKTargetModel, scr_string_t tagName, DObjModel *dobjModels, unsigned __int16 *numModels, int *attachedModelIdx, CharacterModelType (*outModelTypes)[32])
{
  unsigned __int16 v9; 
  const char *v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  DObjModel *v14; 
  const XModel *v15; 
  const char *v16; 
  __int64 v17; 
  unsigned __int8 index; 
  int v20; 

  if ( !tagIKTargetModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1759, ASSERT_TYPE_ASSERT, "( ( tagIKTargetModel ) )", "( tagIKTargetModel ) = %p", NULL) )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1760, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1761, ASSERT_TYPE_ASSERT, "(numModels)", (const char *)&queryFormat, "numModels") )
    __debugbreak();
  if ( !attachedModelIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1762, ASSERT_TYPE_ASSERT, "(attachedModelIdx)", (const char *)&queryFormat, "attachedModelIdx") )
    __debugbreak();
  v9 = *numModels;
  index = -2;
  v20 = -1;
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1690, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(tagName) )
  {
    v10 = SL_ConvertToString(tagName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1695, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v10) )
      __debugbreak();
  }
  if ( index != 0xFF )
  {
    if ( dobjModels )
    {
      v11 = 0;
      v12 = v9;
      v13 = 0;
      if ( v9 )
      {
        v14 = dobjModels;
        while ( 1 )
        {
          v15 = v14->model;
          if ( !v14->model )
          {
            LODWORD(v17) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1716, ASSERT_TYPE_ASSERT, "(model)", "%s\n\tInvalid model at index: %i", "model", v17) )
              __debugbreak();
          }
          if ( v11 + v15->numBones >= 0xFE )
            break;
          if ( XModelGetBoneIndex(v15, tagName, v11, &index) )
            goto LABEL_33;
          v11 += v15->numBones;
          ++v13;
          ++v14;
          if ( v13 >= v12 )
            goto LABEL_31;
        }
        Com_PrintError(16, "XAnimIKDObjModelsGetBoneIndex: Too many bones for model %s\n", v15->name);
      }
    }
LABEL_31:
    index = -1;
  }
  v16 = SL_ConvertToString(tagName);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441B3F98, 505i64, v16);
LABEL_33:
  DObjInitModel(tagIKTargetModel, tagName, 1, 0, NULL, &dobjModels[*numModels]);
  (*outModelTypes)[*numModels] = CHAR_MODEL_IK_TARGET;
  *attachedModelIdx = (*numModels)++;
}

/*
==============
XAnimIKAttachTargetToWeapon
==============
*/
__int64 XAnimIKAttachTargetToWeapon(const XAnimIKType hand, XModel *tagIKTargetModel, const XAnimWeaponIKModelsContainer *weaponModels, const XAnimIKTagRequest *tagRequest, DObjModel *dobjModels, unsigned __int16 *numModels, CharacterModelType (*outModelTypes)[32])
{
  const XAnimWeaponIKModelsContainer *v8; 
  XAnimIKType v9; 
  __int64 m_numModels; 
  unsigned int v11; 
  unsigned __int8 v12; 
  int *v13; 
  __int64 v14; 
  PlayerHandIndex *m_modelHandIndices; 
  const XModel **m_models; 
  const XModel *v17; 
  int v18; 
  __int64 v19; 
  scr_string_t **p_tagName; 
  bool v21; 
  scr_string_t *v22; 
  int v23; 
  int *v24; 
  scr_string_t v25; 
  int v26; 
  __int64 v27; 
  scr_string_t v28; 
  IK_TAG_PRIORITIES priority; 
  unsigned __int16 *v30; 
  __int64 v31; 
  DObjModel *v32; 
  CharacterModelType *v33; 
  __int64 result; 
  __int64 name; 
  unsigned __int8 *index; 
  unsigned __int8 v41[4]; 
  XAnimIKType v42; 
  PlayerHandIndex *v43; 
  const XModel **v44; 
  __int64 v45; 
  CharacterModelType modelTypeToMatch; 
  int v47; 
  int foundModelIndex; 
  int v49; 
  scr_string_t tag_ik_loc_le; 
  int *v51; 
  CharacterModelType *dobjModelTypes; 
  DObjModel *v53; 
  __int64 v54; 
  const XAnimWeaponIKModelsContainer *v55; 
  __int64 v56; 
  unsigned __int16 *v57; 
  const XAnimIKTagRequest *v58; 
  XModel *model; 
  int v60[2]; 
  int v61[34]; 

  v8 = weaponModels;
  v57 = numModels;
  dobjModelTypes = (CharacterModelType *)outModelTypes;
  v58 = tagRequest;
  v55 = weaponModels;
  model = tagIKTargetModel;
  v42 = hand;
  v53 = dobjModels;
  tag_ik_loc_le = scr_const.tag_ik_loc_le;
  v49 = 6;
  v47 = -1;
  v60[0] = scr_const.tag_ik_loc_le;
  v60[1] = 6;
  v61[0] = -1;
  v61[1] = scr_const.tag_ik_loc_le;
  v61[2] = 6;
  v61[3] = -1;
  v61[4] = scr_const.tag_ik_loc_le;
  v61[5] = 6;
  v61[6] = -1;
  v61[7] = scr_const.tag_ik_loc_le;
  v61[8] = 6;
  v61[9] = -1;
  v61[10] = scr_const.tag_ik_loc_le;
  v61[11] = 6;
  v61[12] = -1;
  v61[13] = scr_const.tag_ik_loc_le;
  v61[14] = 6;
  v61[15] = -1;
  v61[16] = scr_const.tag_ik_loc_le;
  v61[17] = 6;
  v61[18] = -1;
  v61[19] = scr_const.tag_ik_loc_le;
  v61[20] = 6;
  v61[21] = -1;
  v61[22] = scr_const.tag_ik_loc_le;
  v61[23] = 6;
  v61[24] = -1;
  v61[25] = scr_const.tag_ik_loc_le;
  v61[26] = 6;
  v61[27] = -1;
  v61[28] = scr_const.tag_ik_loc_le;
  v61[29] = 6;
  v61[30] = -1;
  v61[31] = scr_const.tag_ik_loc_le;
  v61[32] = 6;
  v61[33] = -1;
  if ( !tagIKTargetModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1797, ASSERT_TYPE_ASSERT, "( ( tagIKTargetModel ) )", "( tagIKTargetModel ) = %p", NULL) )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1798, ASSERT_TYPE_ASSERT, "( ( dobjModels ) )", "( dobjModels ) = %p", NULL) )
    __debugbreak();
  if ( !tagRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1799, ASSERT_TYPE_ASSERT, "(tagRequest)", (const char *)&queryFormat, "tagRequest") )
    __debugbreak();
  if ( !v8 )
    return 0xFFFFFFFFi64;
  v9 = v42;
  v41[0] = tagRequest->matchModelHands;
  modelTypeToMatch = CHAR_MODEL_COUNT;
  if ( v41[0] )
    modelTypeToMatch = 13 - (v42 != XANIM_IK_ACTOR_LEFT_HAND);
  m_numModels = v8->m_numModels;
  v11 = 0;
  v56 = m_numModels;
  if ( m_numModels <= 0 )
    return 0xFFFFFFFFi64;
  v12 = v41[0];
  v13 = v60;
  v14 = v42;
  m_modelHandIndices = v8->m_modelHandIndices;
  m_models = v8->m_models;
  v54 = v42;
  v51 = v60;
  v43 = v8->m_modelHandIndices;
  v44 = v8->m_models;
  v45 = m_numModels;
  do
  {
    if ( v11 >= 0xC )
    {
      LODWORD(index) = 12;
      LODWORD(name) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1927, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_WEAPON_IK_MODELS )", "modelIndex doesn't index MAX_WEAPON_IK_MODELS\n\t%i not in [0, %i)", name, index) )
        __debugbreak();
      m_numModels = v45;
      m_modelHandIndices = v43;
      m_models = v44;
      v9 = v42;
    }
    if ( (signed int)v11 >= v8->m_numModels )
      goto LABEL_44;
    v17 = *m_models;
    if ( !*m_models )
      goto LABEL_44;
    if ( v12 )
    {
      if ( v11 >= 0xC )
      {
        LODWORD(index) = 12;
        LODWORD(name) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1940, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_WEAPON_IK_MODELS )", "modelIndex doesn't index MAX_WEAPON_IK_MODELS\n\t%i not in [0, %i)", name, index) )
          __debugbreak();
        m_models = v44;
      }
      if ( (signed int)v11 >= v8->m_numModels )
      {
LABEL_31:
        v9 = v42;
        if ( v42 != XANIM_IK_ACTOR_RIGHT_HAND )
        {
LABEL_43:
          m_numModels = v45;
          m_modelHandIndices = v43;
          goto LABEL_44;
        }
        goto LABEL_34;
      }
      if ( *v43 == WEAPON_HAND_LEFT )
      {
        v9 = v42;
        if ( v42 )
          goto LABEL_43;
      }
      else
      {
        if ( *v43 == WEAPON_HAND_DEFAULT )
          goto LABEL_31;
        v9 = v42;
      }
    }
LABEL_34:
    v18 = 0;
    v19 = 0i64;
    p_tagName = &g_IKTagTable[v14][0].tagName;
    while ( 1 )
    {
      v21 = *p_tagName == NULL;
      v41[0] = -2;
      if ( v21 )
      {
        LODWORD(index) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1843, ASSERT_TYPE_ASSERT, "(g_IKTagTable[hand][curTag].tagName)", "%s\n\tXAnimIKAttachTargetToWeapon() called using XAnimIKType (%i) that has no attach tag.", "g_IKTagTable[hand][curTag].tagName", index) )
          __debugbreak();
      }
      if ( XAnimIKDObjModelsGetBoneIndex(v53, dobjModelTypes, *v57, modelTypeToMatch, v17, **p_tagName, v41, &foundModelIndex) )
      {
        v22 = p_tagName[1];
        if ( !v22 || ((unsigned __int8 (__fastcall *)(const XAnimIKTagRequest *))v22)(v58) )
          break;
      }
      v9 = v42;
      ++v18;
      ++v19;
      p_tagName += 3;
      if ( v18 >= 6 )
      {
        v13 = v51;
        v8 = v55;
        m_models = v44;
        goto LABEL_43;
      }
    }
    v13 = v51;
    if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1848, ASSERT_TYPE_ASSERT, "(searchResult)", (const char *)&queryFormat, "searchResult") )
      __debugbreak();
    v8 = v55;
    m_modelHandIndices = v43;
    v14 = v54;
    v27 = v19 + 6 * v54;
    v28 = *g_IKTagTable[0][v27].tagName;
    priority = g_IKTagTable[0][v27].priority;
    m_models = v44;
    v13[1] = priority;
    v13[2] = foundModelIndex;
    m_numModels = v45;
    *v13 = v28;
    v9 = v42;
LABEL_44:
    ++m_modelHandIndices;
    ++m_models;
    v43 = m_modelHandIndices;
    v13 += 3;
    v44 = m_models;
    ++v11;
    v51 = v13;
    v45 = --m_numModels;
  }
  while ( m_numModels );
  v23 = v49;
  v24 = v61;
  v25 = tag_ik_loc_le;
  do
  {
    if ( *(v24 - 1) >= v23 )
    {
      v26 = v47;
    }
    else
    {
      v26 = *v24;
      v23 = *(v24 - 1);
      v25 = *(v24 - 2);
      v47 = *v24;
    }
    v24 += 3;
    --v56;
  }
  while ( v56 );
  if ( v23 >= 6 )
    return 0xFFFFFFFFi64;
  v30 = v57;
  if ( (unsigned int)*v57 + 1 >= 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1872, ASSERT_TYPE_ASSERT, "(*numModels + 1 < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "*numModels + 1 < DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  if ( v26 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1873, ASSERT_TYPE_ASSERT, "(bestModelIndex >= 0)", (const char *)&queryFormat, "bestModelIndex >= 0") )
    __debugbreak();
  v31 = *v30;
  v32 = v53;
  v33 = dobjModelTypes;
  if ( v31 > v26 )
  {
    _RAX = &v53[v31];
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rax+50h], ymm0
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups ymmword ptr [rax+70h], ymm1
        vmovups xmmword ptr [rax+90h], xmm0
      }
      --_RAX;
      v33[v31 + 1] = v33[v31];
      --v31;
    }
    while ( v31 > v26 );
  }
  DObjInitModel(model, v25, 1, 0, NULL, &v32[v26 + 1]);
  v33[v26 + 1] = CHAR_MODEL_IK_TARGET;
  result = (unsigned int)v26;
  ++*v30;
  return result;
}

/*
==============
XAnimIKCalcAnimWeights
==============
*/
bool XAnimIKCalcAnimWeights(const XAnimInfo *info, const XAnimIKData *ikData, const XAnimIKDObjData *dObjData, float *animWeights)
{
  XAnimToXModel *animToModel; 
  int v9; 
  unsigned int *p_secondBoneIndex; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  __int64 v22; 
  __int64 v23; 

  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  if ( !info->parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 870, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 871, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 872, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  animToModel = info->animToModel;
  if ( !animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 877, ASSERT_TYPE_ASSERT, "(animToModel)", (const char *)&queryFormat, "animToModel") )
    __debugbreak();
  v9 = 0;
  _R15 = 0i64;
  p_secondBoneIndex = &dObjData->boneInfo[0].secondBoneIndex;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    v13 = *(p_secondBoneIndex - 1);
    v14 = *p_secondBoneIndex;
    v15 = p_secondBoneIndex[1];
    v16 = p_secondBoneIndex[2];
    if ( (unsigned int)v13 >= 0x100 )
    {
      LODWORD(v23) = 256;
      LODWORD(v22) = *(p_secondBoneIndex - 1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v13 & 0x1F)) & animToModel->partBits.array[v13 >> 5]) != 0 )
      goto LABEL_31;
    if ( (unsigned int)v14 >= 0x100 )
    {
      LODWORD(v23) = 256;
      LODWORD(v22) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v14 & 0x1F)) & animToModel->partBits.array[v14 >> 5]) != 0 )
      goto LABEL_31;
    if ( (unsigned int)v15 >= 0x100 )
    {
      LODWORD(v23) = 256;
      LODWORD(v22) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v15 & 0x1F)) & animToModel->partBits.array[v15 >> 5]) != 0 )
      goto LABEL_31;
    if ( (unsigned int)v16 >= 0x100 )
    {
      LODWORD(v23) = 256;
      LODWORD(v22) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v16 & 0x1F)) & animToModel->partBits.array[v16 >> 5]) != 0 )
    {
LABEL_31:
      _RAX = info;
      v9 = 1;
      __asm { vmovss  xmm0, dword ptr [rax+3Ch] }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    _RAX = animWeights;
    p_secondBoneIndex += 7;
    __asm { vmovss  dword ptr [rax+r15*4], xmm0 }
    ++_R15;
  }
  while ( _R15 < 4 );
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
  return v9 != 0;
}

/*
==============
XAnimIKCalcFirstBoneRotation
==============
*/
void XAnimIKCalcFirstBoneRotation(const DObj *obj, const float4 *firstBonePos, const float4 *thirdBonePos, const float4 *targetBonePos, float4 *delta)
{
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovups xmm0, xmmword ptr [r8]
    vsubps  xmm3, xmm0, xmmword ptr [rdx]
    vmovups xmm4, xmmword ptr [r9]
    vsubps  xmm4, xmm4, xmmword ptr [rdx]
    vmovdqa xmm8, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
    vmovdqa xmm9, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
  }
  _RBX = delta;
  __asm
  {
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm6, xmm3, xmm1
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm4, xmm1
    vmulps  xmm0, xmm7, xmm6
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vaddps  xmm10, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vcmpltps xmm0, xmm8, xmm9
    vmovmskps eax, xmm0
  }
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmovups xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmaxps  xmm0, xmm10, xmm9
    vminps  xmm10, xmm0, xmm8
    vmulps  xmm0, xmm10, xmm1
    vsqrtps xmm8, xmm0
    vdivps  xmm4, xmm1, xmm8
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
    vshufps xmm2, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm9, xmm0, xmm3
    vmovups xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vmulps  xmm1, xmm4, xmm9
    vblendvps xmm2, xmm1, xmm8, xmm0
    vmulps  xmm1, xmm2, xmm2
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm2, xmm1
    vcmpneqps xmm0, xmm2, xmm2
    vmovmskps eax, xmm0
    vmovups xmmword ptr [rbx], xmm2
  }
  if ( _EAX )
  {
    Com_Printf(19, "==== [ IK CRASH LOG, PLEASE COPY FROM HERE DOWN ] ====\n");
    DObjDisplayAnim(obj, (const char *)&queryFormat.fmt + 3);
    __asm
    {
      vshufps xmm1, xmm6, xmm6, 55h ; 'U'
      vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
      vcvtss2sd xmm3, xmm1, xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vcvtss2sd xmm4, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+98h+fmt], xmm4
    }
    Com_Printf(19, "firstToEndNormalized: (%f, %f, %f)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
    __asm
    {
      vshufps xmm1, xmm7, xmm7, 55h ; 'U'
      vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
      vcvtss2sd xmm3, xmm1, xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm4, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+98h+fmt], xmm4
    }
    Com_Printf(19, "firstToTargetNormalized: (%f, %f, %f)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
    __asm
    {
      vshufps xmm1, xmm9, xmm9, 55h ; 'U'
      vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
      vcvtss2sd xmm3, xmm1, xmm1
      vcvtss2sd xmm2, xmm9, xmm9
      vcvtss2sd xmm4, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+98h+fmt], xmm4
    }
    Com_Printf(19, "cross: (%f, %f, %f)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtb);
    __asm
    {
      vcvtss2sd xmm2, xmm10, xmm10
      vmovq   r8, xmm2
    }
    Com_Printf(19, "cosThetaPlusOne: %f\n", *(double *)&_XMM2);
    __asm
    {
      vcvtss2sd xmm2, xmm8, xmm8
      vmovq   r8, xmm2
    }
    Com_Printf(19, "cosHalfTheta: %f\n", *(double *)&_XMM2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 713, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "!Float4IsNaN( delta ): Please copy log above.") )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 717, ASSERT_TYPE_SANITY, "( !Float4IsNaN( delta ) )", (const char *)&queryFormat, "!Float4IsNaN( delta )") )
    __debugbreak();
  _R11 = &v98;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
XAnimIKCalcNeeded
==============
*/
int XAnimIKCalcNeeded(const DObj *obj, const XAnimIKSettings *settingsArray, const XAnimIKBoneInfo *boneInfo, const DObjPartBits *partBits, bool checkPartBits)
{
  int result; 
  unsigned int firstBoneIndex; 
  bitarray_base<bitarray<256> > *p_skel; 
  unsigned int secondBoneIndex; 

  if ( !settingsArray->typeName )
    return 0;
  firstBoneIndex = boneInfo->firstBoneIndex;
  if ( !checkPartBits || bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, firstBoneIndex) )
  {
    p_skel = (bitarray_base<bitarray<256> > *)&obj->skel;
    if ( !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, firstBoneIndex) )
      return 1;
  }
  else
  {
    p_skel = (bitarray_base<bitarray<256> > *)&obj->skel;
  }
  secondBoneIndex = boneInfo->secondBoneIndex;
  if ( (!checkPartBits || bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, secondBoneIndex)) && !bitarray_base<bitarray<256>>::testBit(p_skel, secondBoneIndex) )
    return 1;
  if ( XAnimIKCalcNeededByBone(obj, boneInfo->thirdBoneIndex, partBits, checkPartBits) )
    return 1;
  result = XAnimIKCalcNeededByBone(obj, boneInfo->targetBoneIndex, partBits, checkPartBits);
  if ( result )
    return 1;
  return result;
}

/*
==============
XAnimIKCalcNeededByBone
==============
*/
_BOOL8 XAnimIKCalcNeededByBone(const DObj *obj, const unsigned int currentBoneIndex, const DObjPartBits *partBits, bool checkPartBits)
{
  return (!checkPartBits || bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, currentBoneIndex)) && !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, currentBoneIndex);
}

/*
==============
XAnimIKClearPreCache
==============
*/
void XAnimIKClearPreCache(void)
{
  const dvar_t *v0; 
  ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v3; 

  v0 = DCONST_DVARBOOL_xanim_ik_disable;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled && XAnimIKIsPreCacheEnabled() )
  {
    Sys_LockWrite(&s_fastCriticalSection);
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_ikCacheHashMap.m_buckets;
    do
    {
      for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_ikCacheHashMap.m_freelist.m_head.mp_next = v3 )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v3 = i;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        i = i->mp_next;
        v3->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_ikCacheHashMap.m_freelist.m_head;
      }
      *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
      p_m_buckets = (ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
    }
    while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_ikCacheHashMap.m_currentNumItems );
    s_ikCacheHashMap.m_currentNumItems = 0i64;
    Sys_UnlockWrite(&s_fastCriticalSection);
  }
}

/*
==============
XAnimIKClearPreCacheDObj
==============
*/
void XAnimIKClearPreCacheDObj(int key)
{
  const dvar_t *v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned int r_keyVal; 

  v1 = DCONST_DVARBOOL_xanim_ik_disable;
  v2 = (unsigned int)key;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && XAnimIKIsPreCacheEnabled() )
  {
    Sys_LockWrite(&s_fastCriticalSection);
    r_keyVal = v2;
    if ( v2 % 0x607 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v3 = ntl::internal::hash_table<unsigned int,XAnimIKDObjData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>,744,16>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>>,1543>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1>>::find_and_remove_nodes(&s_ikCacheHashMap, &s_ikCacheHashMap.m_buckets.ntl::internal::hash_table<unsigned int,XAnimIKDObjData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>,744,16>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> >,1543>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2 % 0x607], &r_keyVal, (ntl::integral_constant<bool,1>)r_keyVal);
    if ( v3 > s_ikCacheHashMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 192, ASSERT_TYPE_ASSERT, "( removed <= m_currentNumItems )", (const char *)&queryFormat, "removed <= m_currentNumItems") )
      __debugbreak();
    s_ikCacheHashMap.m_currentNumItems -= v3;
    Sys_UnlockWrite(&s_fastCriticalSection);
  }
}

/*
==============
XAnimIKDObjModelsGetBoneIndex
==============
*/
__int64 XAnimIKDObjModelsGetBoneIndex(DObjModel *dobjModels, const CharacterModelType *dobjModelTypes, unsigned __int16 numModels, const CharacterModelType modelTypeToMatch, const XModel *target, scr_string_t name, unsigned __int8 *index, int *foundModelIndex)
{
  const char *v13; 
  unsigned int v14; 
  int v15; 
  const XModel *model; 
  __int64 v18; 
  int indexa; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1690, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1691, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  if ( !foundModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1692, ASSERT_TYPE_ASSERT, "(foundModelIndex)", (const char *)&queryFormat, "foundModelIndex") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v13 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1695, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v13) )
      __debugbreak();
  }
  if ( *index == 0xFF )
  {
    *foundModelIndex = -1;
  }
  else
  {
    if ( dobjModels )
    {
      v14 = 0;
      indexa = numModels;
      v15 = 0;
      if ( numModels )
      {
        do
        {
          model = dobjModels->model;
          if ( !dobjModels->model )
          {
            LODWORD(v18) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1716, ASSERT_TYPE_ASSERT, "(model)", "%s\n\tInvalid model at index: %i", "model", v18) )
              __debugbreak();
          }
          if ( (modelTypeToMatch >= CHAR_MODEL_COUNT || *dobjModelTypes == modelTypeToMatch) && (!target || target == model) )
          {
            if ( v14 + model->numBones >= 0xFE )
            {
              Com_PrintError(16, "XAnimIKDObjModelsGetBoneIndex: Too many bones for model %s\n", model->name);
              break;
            }
            if ( XModelGetBoneIndex(model, name, v14, index) )
            {
              *foundModelIndex = v15;
              return 1i64;
            }
          }
          v14 += model->numBones;
          ++v15;
          ++dobjModels;
          ++dobjModelTypes;
        }
        while ( v15 < indexa );
      }
    }
    *index = -1;
    *foundModelIndex = -1;
  }
  return 0i64;
}

/*
==============
XAnimIKDebug_GetAllBonesPartbits
==============
*/
void XAnimIKDebug_GetAllBonesPartbits(const DObj *obj, DObjPartBits *partBits)
{
  const char **p_targetBone; 
  scr_string_t String; 
  scr_string_t v6; 
  scr_string_t **p_tagName; 
  __int64 v8; 
  scr_string_t *v9; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1966, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1967, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(partBits);
  p_targetBone = &xanimIKChainDefs[0].targetBone;
  do
  {
    String = SL_FindString(*(p_targetBone - 1));
    if ( String )
    {
      inOutIndex = -2;
      if ( DObjGetBoneIndexInternal_37(obj, String, &inOutIndex, &modelIndex) )
        partBits->array[(unsigned __int64)inOutIndex >> 5] |= 0x80000000 >> (inOutIndex & 0x1F);
    }
    v6 = SL_FindString(*p_targetBone);
    if ( v6 )
    {
      inOutIndex = -2;
      if ( DObjGetBoneIndexInternal_37(obj, v6, &inOutIndex, &modelIndex) )
        partBits->array[(unsigned __int64)inOutIndex >> 5] |= 0x80000000 >> (inOutIndex & 0x1F);
    }
    p_targetBone += 9;
  }
  while ( (__int64)p_targetBone < (__int64)&unk_1441B30E0 );
  DObjCompleteHierarchyBits(obj, partBits);
  p_tagName = &g_IKTagTable[0][0].tagName;
  do
  {
    v8 = 6i64;
    do
    {
      v9 = *p_tagName;
      inOutIndex = -2;
      if ( DObjGetBoneIndexInternal_37(obj, *v9, &inOutIndex, &modelIndex) )
        partBits->array[(unsigned __int64)inOutIndex >> 5] |= 0x80000000 >> (inOutIndex & 0x1F);
      p_tagName += 3;
      --v8;
    }
    while ( v8 );
  }
  while ( (__int64)p_tagName < (__int64)&xanimIKChainDefs[0].firstBone );
}

/*
==============
XAnimIKExtractDObjData
==============
*/
__int64 XAnimIKExtractDObjData(const DObj *obj, XAnimIKDObjData *outDObjData)
{
  unsigned __int8 v2; 

  v2 = 0;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1319, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !outDObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1320, ASSERT_TYPE_ASSERT, "(outDObjData)", (const char *)&queryFormat, "outDObjData") )
    __debugbreak();
  memset_0(outDObjData, 0, sizeof(XAnimIKDObjData));
  Profile_Begin(463);
  if ( g_xanimIKSettings[0].typeName && XAnimIKPreCalcInitBones(obj, g_xanimIKSettings, outDObjData) )
  {
    XAnimIKUpdatePartBits(obj, g_xanimIKSettings, outDObjData);
    v2 = 1;
  }
  Profile_EndInternal(NULL);
  return v2;
}

/*
==============
XAnimIKGetCacheKey
==============
*/
int XAnimIKGetCacheKey(const DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1248, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return Com_GetObjBufIndex(obj);
}

/*
==============
XAnimIKGetDObjDataCache
==============
*/
char XAnimIKGetDObjDataCache(const DObj *obj, XAnimIKData *ikData, XAnimIKDObjData *outDObjData)
{
  char v3; 
  int ObjBufIndex; 
  unsigned __int64 v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *mp_next; 
  __int64 v13; 

  v3 = 0;
  _RBX = outDObjData;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1348, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1349, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1350, ASSERT_TYPE_ASSERT, "(outDObjData)", (const char *)&queryFormat, "outDObjData") )
    __debugbreak();
  *(_QWORD *)ikData->weights = 0i64;
  *(_QWORD *)&ikData->weights[2] = 0i64;
  if ( (unsigned __int16)(obj->entnum - 2534) > 0x1Fu )
  {
    ObjBufIndex = Com_GetObjBufIndex(obj);
    v9 = (unsigned int)ObjBufIndex;
    if ( ObjBufIndex >= 0 )
    {
      Profile_Begin(464);
      if ( s_fastCriticalSection.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
        __debugbreak();
      if ( ((unsigned __int8)&s_fastCriticalSection & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fastCriticalSection) )
        __debugbreak();
      _InterlockedIncrement((volatile signed __int32 *)&s_fastCriticalSection);
      while ( s_fastCriticalSection.writeCount )
        Sys_Sleep(0);
      if ( v9 % 0x607 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v10 = &s_ikCacheHashMap.m_buckets.ntl::internal::hash_table<unsigned int,XAnimIKDObjData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>,744,16>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> >,1543>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v9 % 0x607];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *)v10->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *)v10->m_listHead.m_sentinel.mp_next == v10 )
      {
LABEL_30:
        mp_next = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[2].m_listHead.m_sentinel.mp_next) == (_DWORD)v9 )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v10 )
            goto LABEL_30;
        }
      }
      if ( mp_next )
      {
        _RAX = mp_next + 4;
        v13 = 2i64;
        do
        {
          _RBX = (XAnimIKDObjData *)((char *)_RBX + 128);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+70h]
          }
          _RAX += 16;
          __asm
          {
            vmovups ymmword ptr [rbx-80h], ymm0
            vmovups ymm0, ymmword ptr [rax-60h]
            vmovups ymmword ptr [rbx-60h], ymm0
            vmovups ymm0, ymmword ptr [rax-40h]
            vmovups ymmword ptr [rbx-40h], ymm0
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rbx-20h], xmm0
            vmovups xmmword ptr [rbx-10h], xmm1
          }
          --v13;
        }
        while ( v13 );
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rbx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rbx+40h], ymm0
        }
        v3 = 1;
      }
      if ( s_fastCriticalSection.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_fastCriticalSection.readCount, 0i64) )
        __debugbreak();
      if ( ((unsigned __int64)&s_fastCriticalSection & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fastCriticalSection) )
        __debugbreak();
      _InterlockedDecrement((volatile signed __int32 *)&s_fastCriticalSection);
      Profile_EndInternal(NULL);
    }
    return v3;
  }
  else
  {
    XAnimIKExtractDObjData(obj, _RBX);
    return 1;
  }
}

/*
==============
XAnimIKGetIKBones
==============
*/
_BOOL8 XAnimIKGetIKBones(const DObj *obj, const scr_string_t first, const scr_string_t second, const scr_string_t third, const scr_string_t target, const scr_string_t restore, const scr_string_t floatTrack, unsigned int *firstIndex, unsigned int *secondIndex, unsigned int *thirdIndex, unsigned int *targetIndex, unsigned int *restoreSubmodelIndex, unsigned int *outFloatTrackIndex)
{
  unsigned int numModels; 
  const XModel **models; 
  __int64 v16; 
  int v17; 
  scr_string_t v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  __int64 i; 
  const XModel *v25; 
  unsigned int numBones; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  unsigned __int64 v32; 
  unsigned int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  unsigned int *v38; 
  unsigned int v39; 
  _DWORD *v40; 
  unsigned __int16 outBoneIndex[2]; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int outModelIndex[3]; 
  scr_string_t v48; 
  scr_string_t v49; 
  DObj *obja; 
  unsigned int *v51; 
  unsigned int *v52; 
  unsigned int *v53; 
  unsigned int *v54; 
  unsigned int *v55; 
  unsigned int *v56; 
  int v57[764]; 

  v55 = restoreSubmodelIndex;
  v56 = outFloatTrackIndex;
  outModelIndex[0] = third;
  v49 = second;
  v48 = first;
  obja = (DObj *)obj;
  v51 = firstIndex;
  v52 = secondIndex;
  v53 = thirdIndex;
  v54 = targetIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1047, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !firstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1048, ASSERT_TYPE_ASSERT, "(firstIndex)", (const char *)&queryFormat, "firstIndex") )
    __debugbreak();
  if ( !secondIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1049, ASSERT_TYPE_ASSERT, "(secondIndex)", (const char *)&queryFormat, "secondIndex") )
    __debugbreak();
  if ( !thirdIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1050, ASSERT_TYPE_ASSERT, "(thirdIndex)", (const char *)&queryFormat, "thirdIndex") )
    __debugbreak();
  if ( !targetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1051, ASSERT_TYPE_ASSERT, "(targetIndex)", (const char *)&queryFormat, "targetIndex") )
    __debugbreak();
  numModels = obj->numModels;
  models = obj->models;
  v16 = numModels;
  v45 = numModels;
  v17 = 255;
  v18 = floatTrack;
  v19 = 255;
  v44 = 255;
  v20 = 255;
  outBoneIndex[0] = 255;
  v21 = 255;
  v43 = 0;
  v22 = 255;
  v23 = 4;
  if ( v16 )
  {
    for ( i = 0i64; i < v16; ++i )
    {
      v25 = models[i];
      *(_QWORD *)&v57[2 * i + 256] = v25->boneNames;
      numBones = v25->numBones;
      v57[i] = numBones;
      if ( numBones >= 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1073, ASSERT_TYPE_ASSERT, "(numBones[j] < DOBJ_MAX_PARTS)", (const char *)&queryFormat, "numBones[j] < DOBJ_MAX_PARTS") )
        __debugbreak();
    }
    v27 = v45;
    v28 = 0i64;
    v29 = 1;
    v46 = 1;
    v30 = 0;
    v21 = 255;
    v20 = 255;
    while ( 1 )
    {
      if ( v23 <= 0 )
      {
LABEL_57:
        v22 = v44;
        v18 = floatTrack;
        break;
      }
      if ( v29 < v27 )
      {
        _RDX = *(_QWORD *)&v57[2 * v28 + 258];
        v32 = 4i64 * (unsigned int)v57[v28 + 1];
        if ( v32 > 0x200 )
        {
          v32 = 512i64;
LABEL_28:
          for ( _RAX = 0i64; _RAX < v32; _RAX += 64i64 )
            __asm { prefetcht0 byte ptr [rax+rdx] }
          goto LABEL_30;
        }
        if ( v32 )
          goto LABEL_28;
      }
LABEL_30:
      v34 = v57[v28];
      if ( v34 )
      {
        v35 = v30;
        v36 = -v30;
        do
        {
          if ( v23 <= 0 )
            break;
          v37 = *(_DWORD *)(*(_QWORD *)&v57[2 * v28 + 256] + 4i64 * (v36 + v35));
          if ( v48 == v37 && v17 == 255 )
          {
            v17 = v35;
            --v23;
          }
          else if ( v49 == v37 && v19 == 255 )
          {
            v19 = v35;
            --v23;
          }
          else if ( outModelIndex[0] == v37 && v20 == 255 )
          {
            v20 = v35;
            --v23;
          }
          else if ( target == v37 && v21 == 255 )
          {
            v21 = v35;
            --v23;
          }
          else if ( restore == v37 && v44 == 255 )
          {
            v44 = v35;
          }
          else if ( floatTrack == v37 && outBoneIndex[0] == 255 )
          {
            if ( v35 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v35, "unsigned", v35) )
              __debugbreak();
            outBoneIndex[0] = v35;
          }
          v34 = v57[v28];
          ++v35;
        }
        while ( v36 + v35 < v34 );
        v29 = v46;
        v30 = v43;
        v27 = v45;
      }
      v30 += v34;
      ++v29;
      v43 = v30;
      ++v28;
      v46 = v29;
      if ( v28 >= v27 )
        goto LABEL_57;
    }
  }
  if ( v18 && outBoneIndex[0] == 255 )
    DObjGetBoneAndModelIndexClient(obja, v18, outBoneIndex, outModelIndex);
  if ( v23 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1124, ASSERT_TYPE_ASSERT, "(numBonesLeft >= 0)", (const char *)&queryFormat, "numBonesLeft >= 0") )
    __debugbreak();
  if ( (v17 & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1126, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( firstBoneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( firstBoneIndex )") )
    __debugbreak();
  if ( (v19 & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1127, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( secondBoneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( secondBoneIndex )") )
    __debugbreak();
  if ( (v20 & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1128, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( thirdBoneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( thirdBoneIndex )") )
    __debugbreak();
  if ( (v21 & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1129, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( targetBoneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( targetBoneIndex )") )
    __debugbreak();
  v38 = v56;
  v39 = outBoneIndex[0];
  *v51 = v17;
  v40 = v52;
  *v38 = v39;
  *v40 = v19;
  *v53 = v20;
  *v54 = v21;
  *v55 = v22;
  return v17 != 255 && v19 != 255 && v20 != 255 && v21 != 255;
}

/*
==============
XAnimIKGetLocatorTagName
==============
*/
__int64 XAnimIKGetLocatorTagName(XAnimIKType hand)
{
  __int64 result; 

  if ( (unsigned int)hand >= XANIM_IK_ACTOR_LEFT_FOOT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1751, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( XANIM_IK_NUM_HAND_TYPES )", "hand doesn't index XANIM_IK_NUM_HAND_TYPES\n\t%i not in [0, %i)", hand, 2) )
    __debugbreak();
  result = (unsigned int)scr_const.tag_ik_loc_ri;
  if ( hand == XANIM_IK_ACTOR_LEFT_HAND )
    return (unsigned int)scr_const.tag_ik_loc_le;
  return result;
}

/*
==============
XAnimIKGetWeights
==============
*/
void XAnimIKGetWeights(const DObj *obj, const XAnimInfo *info, float *ikWeights, float *animWeights)
{
  bool v8; 
  __int64 v9; 
  XAnimIKBoneInfo *i; 
  XAnimIKNotetrackLeafFunctor v12; 
  XAnimIKData ikData; 
  XAnimIKDObjData outDObjData; 

  if ( !ikWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1528, ASSERT_TYPE_ASSERT, "(ikWeights)", (const char *)&queryFormat, "ikWeights") )
    __debugbreak();
  if ( !animWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1529, ASSERT_TYPE_ASSERT, "(animWeights)", (const char *)&queryFormat, "animWeights") )
    __debugbreak();
  ikData.settingsArray = g_xanimIKSettings;
  if ( g_xanimIKSettings[0].typeName )
  {
    if ( XAnimIKIsPreCacheEnabled() )
    {
      v8 = XAnimIKGetDObjDataCache(obj, &ikData, &outDObjData);
    }
    else
    {
      v8 = 0;
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1319, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      memset_0(&outDObjData, 0, sizeof(outDObjData));
      Profile_Begin(463);
      if ( g_xanimIKSettings[0].typeName )
      {
        if ( XAnimIKPreCalcInitBones(obj, g_xanimIKSettings, &outDObjData) )
        {
          XAnimIKUpdatePartBits(obj, g_xanimIKSettings, &outDObjData);
          v8 = 1;
        }
      }
      Profile_EndInternal(NULL);
    }
    if ( v8 )
    {
      v9 = 0i64;
      for ( i = outDObjData.boneInfo; !i->allBonesFound; ++i )
      {
        if ( ++v9 >= 4 )
          return;
      }
      v12.m_ikData = &ikData;
      v12.m_dObjData = &outDObjData;
      __asm
      {
        vmovups xmm0, [rsp+208h+var_1D8]
        vmovdqa [rsp+208h+var_1D8], xmm0
      }
      XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(info, ikWeights, animWeights, &v12);
    }
  }
}

/*
==============
XAnimIKGetWeightsByAnimIndex
==============
*/
void XAnimIKGetWeightsByAnimIndex(const DObj *obj, int animIndex, float *ikWeights, float *animWeights)
{
  const XAnimTree *Tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v10; 
  const XAnimInfo *v11; 
  __int64 v12; 
  bool v13; 
  __int64 v14; 
  XAnimIKBoneInfo *i; 
  __int64 v17; 
  XAnimIKNotetrackLeafFunctor v18; 
  XAnimIKData ikData; 
  XAnimIKDObjData outDObjData; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1551, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ikWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1552, ASSERT_TYPE_ASSERT, "(ikWeights)", (const char *)&queryFormat, "ikWeights") )
    __debugbreak();
  if ( !animWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1553, ASSERT_TYPE_ASSERT, "(animWeights)", (const char *)&queryFormat, "animWeights") )
    __debugbreak();
  Tree = DObjGetTree(obj);
  if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1558, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(Tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  v10 = InfoIndex;
  if ( InfoIndex )
  {
    if ( (InfoIndex & 0x8000u) != 0 )
    {
      v12 = 32 * (InfoIndex & 0x7FFFu);
      if ( (unsigned int)v12 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v17) = 32 * (InfoIndex & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v17, g_xanimMemoryGlobals.bucketAllocatorMaxOffset) )
          __debugbreak();
      }
      v11 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v12];
    }
    else
    {
      if ( (unsigned int)InfoIndex >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v17) = InfoIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v17, g_xanimMemoryGlobals.infoPoolSize) )
          __debugbreak();
      }
      v11 = &g_xanimMemoryGlobals.infoPool[v10];
    }
    if ( v11 )
    {
      if ( !ikWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1528, ASSERT_TYPE_ASSERT, "(ikWeights)", (const char *)&queryFormat, "ikWeights") )
        __debugbreak();
      if ( !animWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1529, ASSERT_TYPE_ASSERT, "(animWeights)", (const char *)&queryFormat, "animWeights") )
        __debugbreak();
      ikData.settingsArray = g_xanimIKSettings;
      if ( g_xanimIKSettings[0].typeName )
      {
        if ( XAnimIKIsPreCacheEnabled() )
        {
          v13 = XAnimIKGetDObjDataCache(obj, &ikData, &outDObjData);
        }
        else
        {
          v13 = 0;
          if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1319, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
            __debugbreak();
          memset_0(&outDObjData, 0, sizeof(outDObjData));
          Profile_Begin(463);
          if ( g_xanimIKSettings[0].typeName )
          {
            if ( XAnimIKPreCalcInitBones(obj, g_xanimIKSettings, &outDObjData) )
            {
              XAnimIKUpdatePartBits(obj, g_xanimIKSettings, &outDObjData);
              v13 = 1;
            }
          }
          Profile_EndInternal(NULL);
        }
        if ( v13 )
        {
          v14 = 0i64;
          for ( i = outDObjData.boneInfo; !i->allBonesFound; ++i )
          {
            if ( ++v14 >= 4 )
              return;
          }
          v18.m_ikData = &ikData;
          v18.m_dObjData = &outDObjData;
          __asm
          {
            vmovups xmm0, [rsp+228h+var_1E8]
            vmovdqa [rsp+228h+var_1E8], xmm0
          }
          XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(v11, ikWeights, animWeights, &v18);
        }
      }
    }
  }
}

/*
==============
XAnimIKHasAnyIKBones
==============
*/
__int64 XAnimIKHasAnyIKBones(const XAnimIKDObjData *dObjData)
{
  __int64 v2; 
  XAnimIKBoneInfo *i; 

  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1017, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  v2 = 0i64;
  for ( i = dObjData->boneInfo; !i->allBonesFound; ++i )
  {
    if ( ++v2 >= 4 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
XAnimIKInit
==============
*/
void XAnimIKInit(bool preCacheEnabled)
{
  scr_string_t String; 
  scr_string_t v13; 
  scr_string_t v14; 
  scr_string_t v15; 
  const char *v16; 
  scr_string_t v17; 
  const char *v18; 
  char v23; 
  bool v24; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  scr_string_t NotetrackConstString; 
  __m256i v44; 
  __m256i v45; 
  void *retaddr; 

  _RAX = &retaddr;
  if ( !g_xanimIKSettings[0].typeName )
  {
    _R12 = g_xanimIKSettings;
    _R14 = &xanimIKChainDefs[0].secondBone;
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vmovaps xmmword ptr [rax-58h], xmm8
      vmovss  xmm8, cs:__real@bf800000
      vmovaps xmmword ptr [rax-68h], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps xmmword ptr [rax-78h], xmm10
      vmovss  xmm10, cs:__real@3c8efa35
    }
    do
    {
      v44.m256i_i64[0] = (__int64)*(_R14 - 2);
      String = SL_GetString(*(_R14 - 1), 0);
      v44.m256i_i32[2] = String;
      v13 = SL_GetString(*_R14, 0);
      v44.m256i_i32[3] = v13;
      v14 = SL_GetString(_R14[1], 0);
      v44.m256i_i32[4] = v14;
      v15 = SL_GetString(_R14[2], 0);
      v16 = _R14[3];
      v17 = v15;
      v44.m256i_i32[5] = v15;
      if ( v16 )
        v44.m256i_i32[6] = SL_GetString(v16, 0);
      else
        v44.m256i_i32[6] = 0;
      v18 = _R14[4];
      if ( v18 )
        v44.m256i_i32[7] = SL_GetString(v18, 0);
      else
        v44.m256i_i32[7] = 0;
      if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1607, ASSERT_TYPE_ASSERT, "(ret.firstBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.firstBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1608, ASSERT_TYPE_ASSERT, "(ret.secondBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.secondBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1609, ASSERT_TYPE_ASSERT, "(ret.thirdBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.thirdBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1610, ASSERT_TYPE_ASSERT, "(ret.targetBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.targetBoneName != NULL_SCR_STRING") )
        __debugbreak();
      __asm { vmulss  xmm0, xmm10, dword ptr [r14+28h]; X }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, dword ptr [r14+2Ch]
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm1, xmm10; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vcomiss xmm6, xmm0
        vmovaps xmm7, xmm0
      }
      if ( !v23 )
      {
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1615, ASSERT_TYPE_ASSERT, "(cosineMaxHingeAngle < cosineMinHingeAngle)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMaxHingeAngle < cosineMinHingeAngle");
        v23 = 0;
        v24 = !v26;
        if ( v26 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm8 }
      if ( v23 )
      {
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1616, ASSERT_TYPE_ASSERT, "(cosineMaxHingeAngle >= -1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMaxHingeAngle >= -1.0f");
        v23 = 0;
        v24 = !v27;
        if ( v27 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, xmm8 }
      if ( v23 )
      {
        v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1617, ASSERT_TYPE_ASSERT, "(cosineMinHingeAngle >= -1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMinHingeAngle >= -1.0f");
        v23 = 0;
        v24 = !v28;
        if ( v28 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm9 }
      if ( !(v23 | v24) )
      {
        v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1618, ASSERT_TYPE_ASSERT, "(cosineMaxHingeAngle <= 1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMaxHingeAngle <= 1.0f");
        v23 = 0;
        v24 = !v29;
        if ( v29 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, xmm9 }
      if ( !(v23 | v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1619, ASSERT_TYPE_ASSERT, "(cosineMinHingeAngle <= 1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMinHingeAngle <= 1.0f") )
        __debugbreak();
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm1, xmm7
        vshufps xmm0, xmm0, xmm0, 0
        vshufps xmm1, xmm1, xmm1, 0
        vmovups xmmword ptr [rsp+108h+var_D8], xmm0
        vmovups xmmword ptr [rsp+108h+var_D8+10h], xmm1
      }
      v45.m256i_i32[0] = *((unsigned __int8 *)_R14 + 48);
      v45.m256i_i32[1] = XAnimIK_GetNotetrackConstString("ik_in_start_", *(_R14 - 2));
      v45.m256i_i32[2] = XAnimIK_GetNotetrackConstString("ik_in_end_", *(_R14 - 2));
      v45.m256i_i32[3] = XAnimIK_GetNotetrackConstString("ik_out_start_", *(_R14 - 2));
      NotetrackConstString = XAnimIK_GetNotetrackConstString("ik_out_end_", *(_R14 - 2));
      __asm
      {
        vmovups ymm0, [rsp+108h+var_D8]
        vmovups ymm1, [rsp+108h+var_B8]
        vmovups ymmword ptr [r12], ymm0
      }
      v45.m256i_i32[4] = NotetrackConstString;
      _R14 += 9;
      __asm
      {
        vmovups ymm0, [rsp+108h+var_98]
        vmovups ymmword ptr [r12+20h], ymm1
        vmovups ymmword ptr [r12+40h], ymm0
      }
      ++_R12;
    }
    while ( (__int64)_R14 < (__int64)&unk_1441B30D0 );
    __asm
    {
      vmovaps xmm10, [rsp+108h+var_78]
      vmovaps xmm9, [rsp+108h+var_68]
      vmovaps xmm8, [rsp+108h+var_58]
      vmovaps xmm7, [rsp+108h+var_48]
      vmovaps xmm6, [rsp+108h+var_38]
    }
    s_xanimIKPreCacheActive = preCacheEnabled;
  }
}

/*
==============
XAnimIKIsPreCacheEnabled
==============
*/
_BOOL8 XAnimIKIsPreCacheEnabled()
{
  const dvar_t *v0; 
  bool v1; 
  const dvar_t *v2; 
  bool v3; 
  bool v4; 
  _BOOL8 result; 

  v0 = DCONST_DVARBOOL_xanim_ik_disable;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = !v0->current.enabled;
  v2 = DCONST_DVARBOOL_xanim_ik_precache_disable;
  v3 = v1;
  if ( !DCONST_DVARBOOL_xanim_ik_precache_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_precache_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v4 = 0;
  if ( !v2->current.enabled )
    v4 = v3;
  result = v4;
  if ( !s_xanimIKPreCacheActive )
    return 0i64;
  return result;
}

/*
==============
XAnimIKPreCacheDObj
==============
*/
void XAnimIKPreCacheDObj(DObj *obj, int handle, int key)
{
  const dvar_t *v3; 
  unsigned __int64 v5; 
  __int64 v7; 
  XAnimIKBoneInfo *i; 
  unsigned __int64 v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *mp_next; 
  __int64 v12; 
  __int64 v14; 
  __int64 v36; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v45; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v46; 
  int v47; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v48; 
  XAnimIKDObjData dObjData; 
  int v61[4]; 
  char v62; 

  v3 = DCONST_DVARBOOL_xanim_ik_disable;
  v5 = (unsigned int)key;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled && XAnimIKIsPreCacheEnabled() )
  {
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1397, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( g_xanimIKSettings[0].typeName )
    {
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1319, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      memset_0(&dObjData, 0, sizeof(dObjData));
      Profile_Begin(463);
      if ( g_xanimIKSettings[0].typeName && XAnimIKPreCalcInitBones(obj, g_xanimIKSettings, &dObjData) )
        XAnimIKUpdatePartBits(obj, g_xanimIKSettings, &dObjData);
      Profile_EndInternal(NULL);
      v7 = 0i64;
      dObjData.handle = handle;
      for ( i = dObjData.boneInfo; !i->allBonesFound; ++i )
      {
        if ( ++v7 >= 4 )
        {
          obj->flags &= ~2u;
          return;
        }
      }
      Sys_LockWrite(&s_fastCriticalSection);
      v9 = v5 % 0x607;
      if ( v5 % 0x607 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v10 = &s_ikCacheHashMap.m_buckets.ntl::internal::hash_table<unsigned int,XAnimIKDObjData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>,744,16>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> >,1543>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v9];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *)v10->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *)v10->m_listHead.m_sentinel.mp_next == v10 )
      {
LABEL_29:
        mp_next = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[2].m_listHead.m_sentinel.mp_next) == (_DWORD)v5 )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v10 )
            goto LABEL_29;
        }
      }
      v12 = 2i64;
      if ( mp_next )
      {
        _RAX = v61;
        v14 = 2i64;
        _RCX = &dObjData;
        do
        {
          _RAX += 32;
          __asm
          {
            vmovups ymm0, ymmword ptr [rcx]
            vmovups xmm1, xmmword ptr [rcx+70h]
          }
          _RCX = (XAnimIKDObjData *)((char *)_RCX + 128);
          __asm
          {
            vmovups ymmword ptr [rax-80h], ymm0
            vmovups ymm0, ymmword ptr [rcx-60h]
            vmovups ymmword ptr [rax-60h], ymm0
            vmovups ymm0, ymmword ptr [rcx-40h]
            vmovups ymmword ptr [rax-40h], ymm0
            vmovups xmm0, xmmword ptr [rcx-20h]
            vmovups xmmword ptr [rax-20h], xmm0
            vmovups xmmword ptr [rax-10h], xmm1
          }
          --v14;
        }
        while ( v14 );
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rax+40h], ymm0
        }
        _RAX = mp_next + 4;
        _RCX = v61;
        do
        {
          _RAX += 16;
          __asm
          {
            vmovups ymm0, ymmword ptr [rcx]
            vmovups xmm1, xmmword ptr [rcx+70h]
          }
          _RCX += 32;
          __asm
          {
            vmovups ymmword ptr [rax-80h], ymm0
            vmovups ymm0, ymmword ptr [rcx-60h]
            vmovups ymmword ptr [rax-60h], ymm0
            vmovups ymm0, ymmword ptr [rcx-40h]
            vmovups ymmword ptr [rax-40h], ymm0
            vmovups xmm0, xmmword ptr [rcx-20h]
            vmovups xmmword ptr [rax-20h], xmm0
            vmovups xmmword ptr [rax-10h], xmm1
          }
          --v12;
        }
        while ( v12 );
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rax+40h], ymm0
        }
      }
      else
      {
        v61[0] = v5;
        _RAX = &v62;
        _R8 = &dObjData;
        v36 = 2i64;
        do
        {
          _RAX += 128;
          __asm
          {
            vmovups ymm0, ymmword ptr [r8]
            vmovups xmm1, xmmword ptr [r8+70h]
          }
          _R8 = (XAnimIKDObjData *)((char *)_R8 + 128);
          __asm
          {
            vmovups ymmword ptr [rax-80h], ymm0
            vmovups ymm0, ymmword ptr [r8-60h]
            vmovups ymmword ptr [rax-60h], ymm0
            vmovups ymm0, ymmword ptr [r8-40h]
            vmovups ymmword ptr [rax-40h], ymm0
            vmovups xmm0, xmmword ptr [r8-20h]
            vmovups xmmword ptr [rax-20h], xmm0
            vmovups xmmword ptr [rax-10h], xmm1
          }
          --v36;
        }
        while ( v36 );
        __asm
        {
          vmovups ymm0, ymmword ptr [r8]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [r8+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [r8+40h]
          vmovups ymmword ptr [rax+40h], ymm0
        }
        if ( v9 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v45 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_ikCacheHashMap.m_buckets.ntl::internal::hash_table<unsigned int,XAnimIKDObjData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>,744,16>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> >,1543>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v9];
        v46 = *v45;
        if ( *v45 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v45 )
        {
LABEL_48:
          if ( !s_ikCacheHashMap.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !s_ikCacheHashMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<384> *)s_ikCacheHashMap.m_freelist.m_head.mp_next == &s_ikCacheHashMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x180ui64, 0x2E8ui64) )
            __debugbreak();
          v48 = s_ikCacheHashMap.m_freelist.m_head.mp_next;
          _RDX = v61;
          s_ikCacheHashMap.m_freelist.m_head.mp_next = s_ikCacheHashMap.m_freelist.m_head.mp_next->mp_next;
          _RAX = v48 + 2;
          v48->mp_next = NULL;
          do
          {
            _RAX += 16;
            __asm
            {
              vmovups ymm0, ymmword ptr [rdx]
              vmovups xmm1, xmmword ptr [rdx+70h]
            }
            _RDX += 32;
            __asm
            {
              vmovups ymmword ptr [rax-80h], ymm0
              vmovups ymm0, ymmword ptr [rdx-60h]
              vmovups ymmword ptr [rax-60h], ymm0
              vmovups ymm0, ymmword ptr [rdx-40h]
              vmovups ymmword ptr [rax-40h], ymm0
              vmovups xmm0, xmmword ptr [rdx-20h]
              vmovups xmmword ptr [rax-20h], xmm0
              vmovups xmmword ptr [rax-10h], xmm1
            }
            --v12;
          }
          while ( v12 );
          __asm
          {
            vmovups ymm0, ymmword ptr [rdx]
            vmovups ymmword ptr [rax], ymm0
            vmovups ymm0, ymmword ptr [rdx+20h]
            vmovups ymmword ptr [rax+20h], ymm0
            vmovups ymm0, ymmword ptr [rdx+40h]
            vmovups ymmword ptr [rax+40h], ymm0
            vmovups xmm0, xmmword ptr [rdx+60h]
            vmovups xmmword ptr [rax+60h], xmm0
          }
          v48->mp_next = *v45;
          *v45 = v48;
          ++s_ikCacheHashMap.m_currentNumItems;
        }
        else
        {
          v47 = v61[0];
          while ( 1 )
          {
            if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v46[2].mp_next) == v47 )
              break;
            v46 = v46->mp_next;
            if ( v46 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v45 )
              goto LABEL_48;
          }
        }
      }
      Sys_UnlockWrite(&s_fastCriticalSection);
      obj->flags |= 2u;
    }
  }
}

/*
==============
XAnimIKPreCalc
==============
*/
void XAnimIKPreCalc(const DObj *obj, XAnimIKData *data, const XAnimIKDObjData *dObjData, DObjPartBits *partBits)
{
  const dvar_t *v5; 
  bool v9; 
  const XAnimIKSettings *v10; 
  unsigned int *v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  XAnimIKBoneInfo *v15; 
  bool v16; 
  XAnimIKBoneInfo *v18; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 next; 
  const XAnimIKDObjData *v23; 
  __int64 v25; 
  DObjPartBits *v26; 
  __int64 v28; 
  XAnimIKBoneInfo *boneInfo[2]; 
  const XAnimIKSettings **p_settingsArray; 
  __int64 v35[2]; 

  v5 = DCONST_DVARBOOL_xanim_ik_disable;
  v35[0] = (__int64)data;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1443, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
      __debugbreak();
    if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1444, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
      __debugbreak();
    v9 = g_xanimIKSettings[0].typeName == NULL;
    v10 = g_xanimIKSettings;
    p_settingsArray = &data->settingsArray;
    data->settingsArray = g_xanimIKSettings;
    if ( !v9 )
    {
      Profile_Begin(459);
      if ( (unsigned int)XAnimIKHasAnyIKBones(dObjData) )
      {
        v11 = &dObjData->partBits[0].array[7];
        v12 = 0;
        v13 = 4i64;
        v14 = 0;
        boneInfo[0] = dObjData->boneInfo;
        v15 = dObjData->boneInfo;
        do
        {
          if ( v15->allBonesFound )
          {
            v16 = XAnimIKCalcNeeded(obj, v10, v15, partBits, 1) != 0;
            if ( v12 || v16 )
            {
              v12 = 1;
              if ( v16 && (v14 || (*v11 & 2) != 0) )
                v14 = 1;
            }
          }
          ++v10;
          ++v15;
          v11 += 8;
          --v13;
        }
        while ( v13 );
        _RBX = v35[0];
        v18 = boneInfo[0];
        if ( !*(_BYTE *)(v35[0] + 24) )
        {
          *(_QWORD *)v35[0] = 0i64;
          *(_QWORD *)(_RBX + 8) = 0i64;
        }
        if ( v12 )
        {
          v9 = *(_BYTE *)(_RBX + 24) == 0;
          __asm { vmovaps [rsp+0E8h+var_58], xmm6 }
          if ( v9 && obj->tree && (children = obj->tree->children) != 0 )
          {
            v35[0] = 0i64;
            v35[1] = 0i64;
            AnimInfo = GetAnimInfo(children);
            next = AnimInfo->next;
            if ( next )
            {
              _RAX = GetAnimInfo(next);
              __asm { prefetcht0 byte ptr [rax] }
            }
            Profile_Begin(462);
            v23 = dObjData;
            boneInfo[1] = (XAnimIKBoneInfo *)dObjData;
            boneInfo[0] = (XAnimIKBoneInfo *)_RBX;
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+0E8h+boneInfo]
              vmovdqa xmmword ptr [rsp+0E8h+boneInfo], xmm0
            }
            XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(AnimInfo, (float *)_RBX, (float *)v35, (XAnimIKNotetrackLeafFunctor *)boneInfo);
            Profile_EndInternal(NULL);
            *(_BYTE *)(_RBX + 24) = 1;
          }
          else
          {
            v23 = dObjData;
          }
          v25 = 0i64;
          v26 = v23->partBits;
          __asm { vxorps  xmm6, xmm6, xmm6 }
          v28 = 4i64;
          do
          {
            if ( v18->allBonesFound )
              __asm { vcomiss xmm6, dword ptr [rbx] }
            v25 += 96i64;
            ++v26;
            ++v18;
            _RBX += 4i64;
            --v28;
          }
          while ( v28 );
          __asm { vmovaps xmm6, [rsp+0E8h+var_58] }
        }
      }
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
XAnimIKPreCalcInitBones
==============
*/
bool XAnimIKPreCalcInitBones(const DObj *obj, const XAnimIKSettings *settings, XAnimIKDObjData *dObjData)
{
  unsigned int *restoreSubmodelIndex; 
  scr_string_t *p_secondBoneName; 
  const XModel **models; 
  const char **v11; 
  bool result; 
  __int128 v28; 

  __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
  _R13 = dObjData;
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1144, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3a83126f }
  _R15 = 0i64;
  restoreSubmodelIndex = &_R13->boneInfo[0].restoreSubmodelBoneIndex;
  p_secondBoneName = &settings->secondBoneName;
  while ( !XAnimIKGetIKBones(obj, (const scr_string_t)*((_DWORD *)p_secondBoneName - 1), (const scr_string_t)*p_secondBoneName, (const scr_string_t)*((_DWORD *)p_secondBoneName + 1), (const scr_string_t)*((_DWORD *)p_secondBoneName + 2), (const scr_string_t)*((_DWORD *)p_secondBoneName + 3), (const scr_string_t)*((_DWORD *)p_secondBoneName + 4), restoreSubmodelIndex - 4, restoreSubmodelIndex - 3, restoreSubmodelIndex - 2, restoreSubmodelIndex - 1, restoreSubmodelIndex, restoreSubmodelIndex + 1) )
  {
    *(restoreSubmodelIndex - 5) = 0;
LABEL_9:
    restoreSubmodelIndex += 7;
    p_secondBoneName += 24;
    _R15 += 12i64;
    _R13 = (XAnimIKDObjData *)((char *)_R13 + 16);
    if ( _R15 >= 48 )
    {
      result = 1;
      goto LABEL_12;
    }
  }
  models = obj->models;
  *(restoreSubmodelIndex - 5) = 1;
  v11 = (const char **)*models;
  if ( (*models)->ikHingeAxis )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r15+rax+4]
      vmovss  xmm4, dword ptr [r15+rax]
      vmovss  xmm5, dword ptr [r15+rax+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm6
    }
    HIDWORD(v28) = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+80h]
      vmovss  xmm0, xmm0, xmm4
      vinsertps xmm0, xmm0, xmm3, 10h
      vinsertps xmm0, xmm0, xmm5, 20h ; ' '
      vmovups xmmword ptr [rsp+80h], xmm0
      vmovups xmmword ptr [r13+0], xmm0
    }
    goto LABEL_9;
  }
  Com_PrintError(1, "XModel %s doesn't have an ikHingeAxis, but we're expecting it to. Check linker for warnings regarding ik.", *v11);
  result = 0;
  *(restoreSubmodelIndex - 5) = 0;
LABEL_12:
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  return result;
}

/*
==============
XAnimIKSetupTagRequest
==============
*/
XAnimIKTagRequest *XAnimIKSetupTagRequest(XAnimIKTagRequest *result, const Weapon *weapon, const bool isAlternate, const bool requiresRoboticIK, const bool requiresAkimboIK, const bool matchModelHands)
{
  int v6; 
  XAnimIKTagRequest *v10; 

  v6 = *(_DWORD *)&weapon->weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups xmm1, xmmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx], ymm0
    vmovsd  xmm0, qword ptr [rdx+30h]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)&result->weapon.weaponCamo = v6;
  result->requiresAkimboIK = requiresAkimboIK;
  result->matchModelHands = matchModelHands;
  v10 = result;
  result->isAlternate = isAlternate;
  result->requiresRoboticIK = requiresRoboticIK;
  return v10;
}

/*
==============
XAnimIKShutdown
==============
*/
void XAnimIKShutdown(void)
{
  scr_string_t *p_secondBoneName; 
  __int64 v1; 
  scr_string_t v2; 
  scr_string_t v3; 
  scr_string_t v4; 
  scr_string_t v5; 
  scr_string_t v6; 
  ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v9; 

  if ( g_xanimIKSettings[0].typeName )
  {
    p_secondBoneName = &g_xanimIKSettings[0].secondBoneName;
    v1 = 4i64;
    do
    {
      v2 = *((_DWORD *)p_secondBoneName - 1);
      if ( v2 )
        SL_RemoveRefToString(v2);
      if ( *p_secondBoneName )
        SL_RemoveRefToString(*p_secondBoneName);
      v3 = *((_DWORD *)p_secondBoneName + 1);
      if ( v3 )
        SL_RemoveRefToString(v3);
      v4 = *((_DWORD *)p_secondBoneName + 2);
      if ( v4 )
        SL_RemoveRefToString(v4);
      v5 = *((_DWORD *)p_secondBoneName + 3);
      if ( v5 )
        SL_RemoveRefToString(v5);
      v6 = *((_DWORD *)p_secondBoneName + 4);
      if ( v6 )
        SL_RemoveRefToString(v6);
      p_secondBoneName += 24;
      --v1;
    }
    while ( v1 );
    memset_0(g_xanimIKSettings, 0, sizeof(g_xanimIKSettings));
    Sys_LockWrite(&s_fastCriticalSection);
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_ikCacheHashMap.m_buckets;
    do
    {
      for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_ikCacheHashMap.m_freelist.m_head.mp_next = v9 )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v9 = i;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        i = i->mp_next;
        v9->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_ikCacheHashMap.m_freelist.m_head;
      }
      *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
      p_m_buckets = (ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
    }
    while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,XAnimIKDObjData,744,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_ikCacheHashMap.m_currentNumItems );
    s_ikCacheHashMap.m_currentNumItems = 0i64;
    Sys_UnlockWrite(&s_fastCriticalSection);
    s_xanimIKPreCacheActive = 0;
  }
}

/*
==============
XAnimIKSolve2Bone
==============
*/
void XAnimIKSolve2Bone(const DObj *obj, const XAnimIKData *ikData, int ikType, const XAnimIKDObjData *dObjData, const XAnimIkSolverParams *ikParams)
{
  __int64 v10; 
  const XAnimIKSettings *v12; 
  const float4 *v37; 
  const float4 *v38; 
  const float4 *v39; 
  float4 hingeAxis; 
  float4 secondBoneQuatDelta; 
  float4 firstBoneQuatDelta; 

  _RSI = ikParams;
  _R15 = dObjData;
  v10 = ikType;
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 816, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 817, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  v12 = &ikData->settingsArray[v10];
  if ( _R15->boneInfo[v10].allBonesFound )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+50h]
      vshufps xmm5, xmm0, xmm0, 0FFh
    }
    _RCX = 2 * v10;
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm6
      vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
      vmovaps [rsp+0F8h+var_58], xmm7
    }
    _RDI = &ikParams->thirdBoneTrans;
    __asm
    {
      vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
      vmovaps [rsp+0F8h+var_68], xmm8
      vmovups xmm8, xmmword ptr [r15+rcx*8]
      vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm6
      vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm7
      vsubps  xmm0, xmm3, xmm2
      vaddps  xmm4, xmm0, xmm0
      vmulps  xmm0, xmm5, xmm4
      vaddps  xmm5, xmm0, xmm8
      vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm6
      vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm0, xmm7
      vsubps  xmm1, xmm3, xmm2
      vaddps  xmm3, xmm1, xmm5
      vmovups xmmword ptr [rsp+0F8h+hingeAxis.v], xmm3
    }
    XAnimCalcSecondBoneRotation(v12, &hingeAxis, &ikParams->firstBoneTrans, &ikParams->secondBoneTrans, &ikParams->thirdBoneTrans, &ikParams->targetBoneTrans, &ikParams->firstBoneQuat, &secondBoneQuatDelta);
    __asm
    {
      vmovups xmm2, xmmword ptr [rsi+60h]
      vmovups xmm1, xmmword ptr [rsp+0F8h+secondBoneQuatDelta.v]
      vmovups xmm0, xmmword ptr [rdi]
    }
    Float3RotateQuatAroundOrigin(v38, v37, v39, &hingeAxis);
    XAnimIKCalcFirstBoneRotation(obj, &ikParams->firstBoneTrans, &hingeAxis, &ikParams->targetBoneTrans, &firstBoneQuatDelta);
    XAnimIKApplyDeltas(ikParams, v12->rotateToTarget, ikData, v10, _R15, &firstBoneQuatDelta, &secondBoneQuatDelta);
    __asm
    {
      vmovaps xmm8, [rsp+0F8h+var_68]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_48]
    }
  }
}

/*
==============
XAnimIKUpdateBoneFromDelta
==============
*/
void XAnimIKUpdateBoneFromDelta(const XAnimIkSolverParams *ikParams, const unsigned int boneIndex, const float4 *quat, const float4 *trans, const float4 *delta, const float4 *weight, float4 *deltaWeighted)
{
  const float4 *fmt; 
  const float4 *v98; 
  float v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovups xmm15, xmmword ptr [r8]
  }
  _RBX = ikParams;
  _RCX = delta;
  _RDI = trans;
  _RDX = deltaWeighted;
  __asm
  {
    vmovups [rsp+158h+var_E8], xmm15
    vmovss  xmm13, dword ptr [rsp+158h+var_E8+8]
    vmovups xmm0, xmmword ptr [rcx]
    vmulps  xmm0, xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmovss  xmm14, dword ptr [rsp+158h+var_E8+4]
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vandps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vorps   xmm4, xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
    vmulps  xmm1, xmm4, xmmword ptr [rax]
    vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vsubps  xmm2, xmm0, xmmword ptr [rax]
    vmulps  xmm0, xmm1, xmmword ptr [rcx]
    vmulps  xmm3, xmm2, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vaddps  xmm2, xmm0, xmm3
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vmovups xmm0, xmmword ptr [r9]
    vdivps  xmm2, xmm2, xmm1
    vmovss  [rsp+158h+var_118], xmm15
    vmovups xmmword ptr [rdx], xmm2
    vmovaps [rsp+158h+var_108], xmm2
    vmovups [rsp+158h+var_F8], xmm0
  }
  if ( (v100 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm { vmovss  [rsp+158h+var_118], xmm14 }
  if ( (v101 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm { vmovss  [rsp+158h+var_118], xmm13 }
  if ( (v102 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 564, ASSERT_TYPE_SANITY, "( !IS_NAN( ( quatV )[0] ) && !IS_NAN( ( quatV )[1] ) && !IS_NAN( ( quatV )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( quatV )[0] ) && !IS_NAN( ( quatV )[1] ) && !IS_NAN( ( quatV )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+158h+var_F8]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v103 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+158h+var_F8+4]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v104 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+158h+var_F8+8]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v105 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 565, ASSERT_TYPE_SANITY, "( !IS_NAN( ( transV )[0] ) && !IS_NAN( ( transV )[1] ) && !IS_NAN( ( transV )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( transV )[0] ) && !IS_NAN( ( transV )[1] ) && !IS_NAN( ( transV )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, dword ptr [rsp+158h+var_108]
    vmovss  xmm11, dword ptr [rsp+158h+var_E8+0Ch]
    vmovss  xmm9, dword ptr [rsp+158h+var_108+0Ch]
    vmovss  xmm10, dword ptr [rsp+158h+var_108+4]
    vmovss  xmm7, dword ptr [rsp+158h+var_108+8]
    vmulss  xmm1, xmm12, xmm11
    vmulss  xmm0, xmm9, xmm15
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm13
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm14
    vsubss  xmm8, xmm3, xmm0
    vmulss  xmm2, xmm9, xmm14
    vmulss  xmm1, xmm12, xmm13
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm11
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm15
    vaddss  xmm6, xmm4, xmm1
    vmulss  xmm0, xmm12, xmm14
    vmulss  xmm2, xmm9, xmm13
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm10, xmm15
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm7, xmm11
    vaddss  xmm5, xmm4, xmm0
    vmulss  xmm1, xmm12, xmm15
    vmulss  xmm2, xmm11, xmm9
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm14
    vsubss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm13
    vsubss  xmm2, xmm4, xmm1
    vmovss  xmm1, dword ptr [rbx+18h]
    vmovaps xmm0, xmm8
    vinsertps xmm0, xmm0, xmm6, 10h
    vinsertps xmm0, xmm0, xmm5, 20h ; ' '
    vmovss  [rsp+158h+var_128], xmm1
    vmovups xmm1, xmmword ptr [rdi]
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
  }
  XAnimSetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, boneIndex, fmt, v98, v99);
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
XAnimIKUpdatePartBits
==============
*/
void XAnimIKUpdatePartBits(const DObj *obj, const XAnimIKSettings *const settings, XAnimIKDObjData *dObjData)
{
  const DObj *v6; 
  DObjPartBits *p_combinedPartBits; 
  DObjPartBits *partBits; 
  __int64 v10; 
  XAnimIKBoneInfo *boneInfo; 
  unsigned int v12; 
  unsigned __int64 targetBoneIndex; 
  unsigned __int64 firstBoneIndex; 
  unsigned __int64 secondBoneIndex; 
  unsigned __int64 thirdBoneIndex; 
  unsigned __int64 restoreSubmodelBoneIndex; 
  unsigned __int64 floatTrackBoneIndex; 
  unsigned int v20; 
  __int64 v28; 
  __int64 v29; 

  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps [rsp+0A8h+var_58], xmm7
  }
  v6 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1209, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1210, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  p_combinedPartBits = &dObjData->combinedPartBits;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&dObjData->combinedPartBits);
  __asm { vpxor   xmm7, xmm7, xmm7 }
  partBits = dObjData->partBits;
  v10 = 4i64;
  boneInfo = dObjData->boneInfo;
  do
  {
    v12 = 0;
    _RBP = partBits;
    do
    {
      __asm { vmovdqu xmmword ptr [rbp+0], xmm7 }
      _RBP = (DObjPartBits *)((char *)_RBP + 16);
      ++v12;
    }
    while ( v12 < 2 );
    if ( boneInfo->allBonesFound && settings->typeName && (!bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v6->skel, boneInfo->firstBoneIndex) || !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v6->skel, boneInfo->secondBoneIndex) || !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v6->skel, boneInfo->thirdBoneIndex) || !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v6->skel, boneInfo->targetBoneIndex)) )
    {
      targetBoneIndex = boneInfo->targetBoneIndex;
      if ( (unsigned int)targetBoneIndex >= 0x100 )
      {
        LODWORD(v29) = 256;
        LODWORD(v28) = boneInfo->targetBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
          __debugbreak();
      }
      partBits->array[targetBoneIndex >> 5] |= 0x80000000 >> (targetBoneIndex & 0x1F);
      firstBoneIndex = boneInfo->firstBoneIndex;
      if ( (unsigned int)firstBoneIndex >= 0x100 )
      {
        LODWORD(v29) = 256;
        LODWORD(v28) = boneInfo->firstBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
          __debugbreak();
      }
      partBits->array[firstBoneIndex >> 5] |= 0x80000000 >> (firstBoneIndex & 0x1F);
      secondBoneIndex = boneInfo->secondBoneIndex;
      if ( (unsigned int)secondBoneIndex >= 0x100 )
      {
        LODWORD(v29) = 256;
        LODWORD(v28) = boneInfo->secondBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
          __debugbreak();
      }
      partBits->array[secondBoneIndex >> 5] |= 0x80000000 >> (secondBoneIndex & 0x1F);
      thirdBoneIndex = boneInfo->thirdBoneIndex;
      if ( (unsigned int)thirdBoneIndex >= 0x100 )
      {
        LODWORD(v29) = 256;
        LODWORD(v28) = boneInfo->thirdBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
          __debugbreak();
      }
      partBits->array[thirdBoneIndex >> 5] |= 0x80000000 >> (thirdBoneIndex & 0x1F);
      restoreSubmodelBoneIndex = boneInfo->restoreSubmodelBoneIndex;
      if ( (_DWORD)restoreSubmodelBoneIndex != 255 )
      {
        if ( (unsigned int)restoreSubmodelBoneIndex >= 0x100 )
        {
          LODWORD(v29) = 256;
          LODWORD(v28) = boneInfo->restoreSubmodelBoneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
            __debugbreak();
        }
        partBits->array[restoreSubmodelBoneIndex >> 5] |= 0x80000000 >> (restoreSubmodelBoneIndex & 0x1F);
      }
      floatTrackBoneIndex = boneInfo->floatTrackBoneIndex;
      if ( (_DWORD)floatTrackBoneIndex != 255 )
      {
        if ( (floatTrackBoneIndex & 0x8000) != 0 )
        {
          partBits->array[7] |= 2u;
        }
        else
        {
          if ( (unsigned int)floatTrackBoneIndex >= 0x100 )
          {
            LODWORD(v29) = 256;
            LODWORD(v28) = boneInfo->floatTrackBoneIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
              __debugbreak();
          }
          partBits->array[floatTrackBoneIndex >> 5] |= 0x80000000 >> (floatTrackBoneIndex & 0x1F);
        }
      }
      DObjCompleteHierarchyBits(v6, partBits);
      v20 = 0;
      _RSI = (char *)partBits - (char *)p_combinedPartBits;
      _RDI = p_combinedPartBits;
      do
      {
        __asm
        {
          vlddqu  xmm6, xmmword ptr [rsi+rdi]
          vlddqu  xmm0, xmmword ptr [rdi]
          vpor    xmm6, xmm0, xmm6
          vmovdqu xmmword ptr [rdi], xmm6
        }
        _RDI = (DObjPartBits *)((char *)_RDI + 16);
        ++v20;
      }
      while ( v20 < 2 );
      v6 = obj;
    }
    ++boneInfo;
    partBits = _RBP;
    --v10;
  }
  while ( v10 );
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
  }
}

/*
==============
XAnimIK_GetNotetrackConstString
==============
*/
scr_string_t XAnimIK_GetNotetrackConstString(const char *prefix, const char *ikTypeName)
{
  char dest[32]; 

  if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1578, ASSERT_TYPE_ASSERT, "(prefix)", (const char *)&queryFormat, "prefix") )
    __debugbreak();
  if ( !ikTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1579, ASSERT_TYPE_ASSERT, "(ikTypeName)", (const char *)&queryFormat, "ikTypeName") )
    __debugbreak();
  Com_sprintf(dest, 0x20ui64, "%s%s", prefix, ikTypeName);
  return SL_FindString(dest);
}

/*
==============
XAnimIK_Register
==============
*/
void XAnimIK_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimIkNodeData>::ms_typeInfo);
}

