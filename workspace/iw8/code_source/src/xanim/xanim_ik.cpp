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
  const dvar_t *v9; 
  const XAnimIKData *v12; 
  XAnimIKDObjData *v13; 
  int v14; 
  unsigned int *p_targetBoneIndex; 
  const XAnimIKData *i; 
  bitarray_base<bitarray<256> > *partBits; 
  int v18; 
  int v19; 
  int v20; 
  float4 v25; 
  float4 v30; 
  float4 v36; 
  XAnimIKData *ikData; 
  XAnimIKDObjData *dObjData; 
  XAnimIkSolverParams ikParams; 

  ikCalcInfo = animCalcInfo->ikCalcInfo;
  v9 = DCONST_DVARBOOL_xanim_ik_disable;
  v12 = ikCalcInfo->ikData;
  v13 = ikCalcInfo->dObjData;
  ikData = ikCalcInfo->ikData;
  dObjData = v13;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled && v13 )
  {
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer, LINEAR);
    if ( !animCalcInfo->partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 2039, ASSERT_TYPE_ASSERT, "(animCalcInfo->partBits)", (const char *)&queryFormat, "animCalcInfo->partBits") )
      __debugbreak();
    if ( v12->settingsArray->typeName )
    {
      Profile_Begin(460);
      v14 = 0;
      p_targetBoneIndex = &v13->boneInfo[0].targetBoneIndex;
      for ( i = v12; (LODWORD(i->weights[0]) & 0x7F800000) == 2139095040 || i->weights[0] <= 0.0; i = (const XAnimIKData *)((char *)i + 4) )
      {
LABEL_24:
        ++v14;
        p_targetBoneIndex += 7;
        if ( v14 >= 4 )
        {
          Profile_EndInternal(NULL);
          return;
        }
      }
      if ( v12->settingsArray->typeName && *(p_targetBoneIndex - 4) )
      {
        partBits = animCalcInfo->partBits;
        if ( bitarray_base<bitarray<256>>::testBit(partBits, *(p_targetBoneIndex - 3)) && bitarray_base<bitarray<256>>::testBit(partBits, *p_targetBoneIndex) )
        {
          v12 = ikData;
          v18 = 1;
          goto LABEL_20;
        }
        v12 = ikData;
      }
      v18 = 0;
LABEL_20:
      if ( v18 )
      {
        v19 = *(p_targetBoneIndex - 3);
        ikParams.animInfo = animInfo;
        ikParams.bNormQuat = bNormQuat;
        ikParams.weightScale = weightScale;
        ikParams.animCalcInfo = animCalcInfo;
        ikParams.destBuffer = destBuffer;
        ikParams.obj = obj;
        XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v19, &ikParams.firstBoneQuat, &ikParams.firstBoneTrans);
        XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *(p_targetBoneIndex - 2), &ikParams.secondBoneQuat, &ikParams.secondBoneTrans);
        XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *(p_targetBoneIndex - 1), &ikParams.thirdBoneQuat, &ikParams.thirdBoneTrans);
        XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *p_targetBoneIndex, &ikParams.targetBoneQuat, &ikParams.targetBoneTrans);
        v20 = p_targetBoneIndex[1];
        if ( v20 != 255 )
          XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v20, &ikParams.restoreSubmodelBoneQuat, &ikParams.restoreSubmodelBoneTrans);
        _XMM0 = _mm128_mul_ps(ikParams.firstBoneQuat.v, ikParams.firstBoneQuat.v);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vrsqrtps xmm1, xmm0
        }
        v25.v = _mm128_mul_ps(_XMM1, ikParams.firstBoneQuat.v);
        _XMM0 = _mm128_mul_ps(ikParams.secondBoneQuat.v, ikParams.secondBoneQuat.v);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vrsqrtps xmm1, xmm0
        }
        ikParams.firstBoneQuat = (float4)v25.v;
        v30.v = _mm128_mul_ps(_XMM1, ikParams.secondBoneQuat.v);
        _XMM0 = _mm128_mul_ps(ikParams.thirdBoneQuat.v, ikParams.thirdBoneQuat.v);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vrsqrtps xmm1, xmm0
        }
        _XMM0 = _mm128_mul_ps(ikParams.targetBoneQuat.v, ikParams.targetBoneQuat.v);
        ikParams.secondBoneQuat = (float4)v30.v;
        v36.v = _mm128_mul_ps(_XMM1, ikParams.thirdBoneQuat.v);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vrsqrtps xmm1, xmm0
        }
        ikParams.thirdBoneQuat = (float4)v36.v;
        ikParams.targetBoneQuat.v = _mm128_mul_ps(_XMM1, ikParams.targetBoneQuat.v);
        Sys_ProfBeginNamedEvent(0xFF800080, "XAnimIKCalc");
        XAnimIKSolve2Bone(obj, v12, v14, dObjData, &ikParams);
        Sys_ProfEndNamedEvent();
        *(_OWORD *)nodeData = *(_OWORD *)v12->weights;
      }
      goto LABEL_24;
    }
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
  __int64 i; 

  v7 = size;
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
    for ( i = 0i64; i < 4; ++i )
      Com_sprintfPos_truncate(buffer, v7, inoutPos, "%.3f ", *((float *)nodeData + i));
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
  float4 v8; 
  __m128 v9; 
  __m128 v12; 
  __m128 v14; 
  __m128 v24; 
  __m128 v28; 
  __m128 v35; 
  __m128 v36; 
  __m128 v41; 
  const float4 *v49; 
  const float4 *v50; 
  const float4 *v51; 
  __m128 v; 
  const float4 *v56; 
  float4 v67; 
  float4 v68[8]; 

  v9 = _mm128_sub_ps(secondBonePos->v, firstBonePos->v);
  _XMM3 = _mm128_mul_ps(v9, v9);
  v12 = _mm128_sub_ps(thirdBonePos->v, secondBonePos->v);
  _XMM7 = _mm128_mul_ps(v12, v12);
  v14 = _mm128_sub_ps(targetBonePos->v, firstBonePos->v);
  __asm
  {
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm6, xmm0, xmm0
  }
  _XMM1 = _mm128_mul_ps(v14, v14);
  __asm
  {
    vhaddps xmm0, xmm7, xmm7
    vhaddps xmm5, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm4, xmm0, xmm0
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm0, xmm0, xmm0
  }
  v24 = _mm_sqrt_ps(_XMM0);
  __asm
  {
    vhaddps xmm0, xmm7, xmm7
    vhaddps xmm0, xmm0, xmm0
  }
  _XMM3 = _mm128_mul_ps(_mm128_mul_ps(v24, _mm_sqrt_ps(_XMM0)), g_two.v);
  v28 = _mm128_add_ps(_mm128_sub_ps(_XMM5, _XMM4), _XMM6);
  __asm
  {
    vcmpeqps xmm0, xmm3, xmm6
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    *delta = (float4)g_0001.v;
  }
  else
  {
    _XMM1.v = (__m128)setting->cosineMinHingeAngle;
    _XMM2.v = (__m128)setting->cosineMaxHingeAngle;
    _mm128_div_ps(v28, _XMM3);
    __asm
    {
      vminps  xmm1, xmm1, xmm0
      vmaxps  xmm0, xmm2, xmm1
    }
    v68[5] = (float4)v8.v;
    *(double *)_XMM0.m128_u64 = j___vdecl_acosf4();
    v35 = _XMM0;
    v36 = _mm128_sub_ps((__m128)0i64, v9);
    _XMM1 = _mm128_mul_ps(v36, v36);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm3, xmm2, xmm2
      vhaddps xmm1, xmm3, xmm3
    }
    v41 = _mm128_div_ps(v36, _mm_sqrt_ps(_XMM1));
    __asm
    {
      vinsertps xmm0, xmm7, xmm7, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    _XMM3 = _mm128_mul_ps(_mm128_div_ps(v12, _mm_sqrt_ps(_XMM0)), v41);
    __asm
    {
      vinsertps xmm0, xmm3, xmm3, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    _mm128_sub_ps((__m128)0i64, g_one.v);
    v67.v = _XMM0;
    Float4Clamp(v50, v49, v51, &v67);
    _XMM0.m128_u64[1] = v67.v.m128_u64[1];
    v68[0] = (float4)v67.v;
    *(double *)_XMM0.m128_u64 = j___vdecl_acosf4();
    v = hingeAxis->v;
    _XMM2 = _mm128_mul_ps(v, v);
    _mm128_mul_ps(_mm128_sub_ps(v35, _XMM0), g_oneHalf.v);
    __asm
    {
      vinsertps xmm3, xmm2, xmm2, 8
      vhaddps xmm6, xmm3, xmm3
    }
    Float4SinCos(v56, &v67, v68);
    __asm
    {
      vhaddps xmm0, xmm6, xmm6
      vrsqrtps xmm1, xmm0
    }
    _XMM3 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, v), v67.v);
    __asm { vblendps xmm4, xmm3, [rsp+0C8h+var_88], 8 }
    _XMM0 = _mm128_mul_ps(_XMM4, _XMM4);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    _XMM2.v = _mm128_div_ps(_XMM4, _mm_sqrt_ps(_XMM0));
    __asm
    {
      vcmpneqps xmm0, xmm2, xmm2
      vmovmskps eax, xmm0
    }
    *delta = (float4)_XMM2.v;
    if ( _EAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 805, ASSERT_TYPE_SANITY, "( !Float4IsNaN( delta ) )", (const char *)&queryFormat, "!Float4IsNaN( delta )") )
        __debugbreak();
    }
  }
}

/*
==============
XAnimIKApplyDeltas
==============
*/
void XAnimIKApplyDeltas(const XAnimIkSolverParams *ikParams, int orientToTarget, const XAnimIKData *ikData, int ikType, const XAnimIKDObjData *dObjData, const float4 *firstBoneQuatDelta, const float4 *secondBoneQuatDelta)
{
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  unsigned int secondBoneIndex; 
  __m128 v14; 
  __m128 v; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  unsigned int firstBoneIndex; 
  __m128 v20; 
  const float4 *v21; 
  const float4 *v22; 
  const float4 *v23; 
  float4 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v31; 
  const float4 *v34; 
  const float4 *v35; 
  const float4 *v36; 
  unsigned int thirdBoneIndex; 
  __m128 v38; 
  int restoreSubmodelBoneIndex; 
  const float4 *fmt; 
  const float4 *v41; 
  float4 v42; 
  float4 v43; 
  float4 v44; 
  float4 v45; 
  float4 v46; 
  float4 v47; 

  v9 = ikType;
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 574, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  v11 = v9;
  v12 = v9;
  if ( ikData->weights[v11] > 0.0 )
  {
    secondBoneIndex = dObjData->boneInfo[v12].secondBoneIndex;
    v14 = (__m128)LODWORD(ikData->weights[v11]);
    v = ikParams->secondBoneQuat.v;
    v45.v = secondBoneQuatDelta->v;
    v16 = ikParams->secondBoneTrans.v;
    v17 = _mm_shuffle_ps(v14, v14, 0);
    v42.v = v17;
    v43.v = v16;
    v44.v = v;
    XAnimIKUpdateBoneFromDelta(ikParams, secondBoneIndex, &v44, &v43, &v45, &v42, &v46);
    v18 = ikParams->firstBoneQuat.v;
    firstBoneIndex = dObjData->boneInfo[v12].firstBoneIndex;
    v43.v = firstBoneQuatDelta->v;
    v20 = ikParams->firstBoneTrans.v;
    v44.v = v17;
    v45.v = v20;
    v42.v = v18;
    XAnimIKUpdateBoneFromDelta(ikParams, firstBoneIndex, &v42, &v45, &v43, &v44, &v47);
    if ( orientToTarget )
    {
      v24.v = (__m128)ikParams->targetBoneQuat;
      v25 = _mm_shuffle_ps(v24.v, v24.v, 255);
      v26 = _mm128_mul_ps(ikParams->thirdBoneQuat.v, (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v26, v24.v);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm3, xmm2, xmm2
      }
      v31 = _mm_shuffle_ps(v26, v26, 255);
      _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v31, v25), _XMM3);
      _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v26, v26, 210), _mm_shuffle_ps(v24.v, v24.v, 201)), _mm128_mul_ps(_mm_shuffle_ps(v26, v26, 201), _mm_shuffle_ps(v24.v, v24.v, 210))), _mm128_add_ps(_mm128_mul_ps(v31, v24.v), _mm128_mul_ps(v26, v25)));
      __asm { vblendps xmm6, xmm2, xmm0, 7 }
      Float3RotateQuatAroundOrigin(v22, v21, v23, &v42);
      Float3RotateQuatAroundOrigin(v35, v34, v36, &v42);
      thirdBoneIndex = dObjData->boneInfo[v12].thirdBoneIndex;
      v38 = _mm128_add_ps(_mm128_sub_ps(v42.v, ikParams->thirdBoneTrans.v), ikParams->thirdBoneTrans.v);
      v43.v = (__m128)ikParams->thirdBoneQuat;
      v47.v = v17;
      v46.v = _XMM6;
      v44.v = _mm_shuffle_ps(v38, _mm_shuffle_ps(v38, g_unit.v, 250), 132);
      XAnimIKUpdateBoneFromDelta(ikParams, thirdBoneIndex, &v43, &v44, &v46, &v47, &v45);
    }
    restoreSubmodelBoneIndex = dObjData->boneInfo[v12].restoreSubmodelBoneIndex;
    if ( restoreSubmodelBoneIndex != 255 )
      XAnimSetLocalBoneTransform(ikParams->animCalcInfo, ikParams->obj, ikParams->destBuffer, restoreSubmodelBoneIndex, fmt, v41, 1.0);
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
  DObjModel *v34; 
  __m256i v35; 
  __int128 v36; 
  __int64 result; 
  __int64 name; 
  unsigned __int8 *index; 
  unsigned __int8 v40[4]; 
  XAnimIKType v41; 
  PlayerHandIndex *v42; 
  const XModel **v43; 
  __int64 v44; 
  CharacterModelType modelTypeToMatch; 
  int v46; 
  int foundModelIndex; 
  int v48; 
  scr_string_t tag_ik_loc_le; 
  int *v50; 
  CharacterModelType *dobjModelTypes; 
  DObjModel *v52; 
  __int64 v53; 
  const XAnimWeaponIKModelsContainer *v54; 
  __int64 v55; 
  unsigned __int16 *v56; 
  const XAnimIKTagRequest *v57; 
  XModel *model; 
  int v59[2]; 
  int v60[34]; 

  v8 = weaponModels;
  v56 = numModels;
  dobjModelTypes = (CharacterModelType *)outModelTypes;
  v57 = tagRequest;
  v54 = weaponModels;
  model = tagIKTargetModel;
  v41 = hand;
  v52 = dobjModels;
  tag_ik_loc_le = scr_const.tag_ik_loc_le;
  v48 = 6;
  v46 = -1;
  v59[0] = scr_const.tag_ik_loc_le;
  v59[1] = 6;
  v60[0] = -1;
  v60[1] = scr_const.tag_ik_loc_le;
  v60[2] = 6;
  v60[3] = -1;
  v60[4] = scr_const.tag_ik_loc_le;
  v60[5] = 6;
  v60[6] = -1;
  v60[7] = scr_const.tag_ik_loc_le;
  v60[8] = 6;
  v60[9] = -1;
  v60[10] = scr_const.tag_ik_loc_le;
  v60[11] = 6;
  v60[12] = -1;
  v60[13] = scr_const.tag_ik_loc_le;
  v60[14] = 6;
  v60[15] = -1;
  v60[16] = scr_const.tag_ik_loc_le;
  v60[17] = 6;
  v60[18] = -1;
  v60[19] = scr_const.tag_ik_loc_le;
  v60[20] = 6;
  v60[21] = -1;
  v60[22] = scr_const.tag_ik_loc_le;
  v60[23] = 6;
  v60[24] = -1;
  v60[25] = scr_const.tag_ik_loc_le;
  v60[26] = 6;
  v60[27] = -1;
  v60[28] = scr_const.tag_ik_loc_le;
  v60[29] = 6;
  v60[30] = -1;
  v60[31] = scr_const.tag_ik_loc_le;
  v60[32] = 6;
  v60[33] = -1;
  if ( !tagIKTargetModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1797, ASSERT_TYPE_ASSERT, "( ( tagIKTargetModel ) )", "( tagIKTargetModel ) = %p", NULL) )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1798, ASSERT_TYPE_ASSERT, "( ( dobjModels ) )", "( dobjModels ) = %p", NULL) )
    __debugbreak();
  if ( !tagRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1799, ASSERT_TYPE_ASSERT, "(tagRequest)", (const char *)&queryFormat, "tagRequest") )
    __debugbreak();
  if ( !v8 )
    return 0xFFFFFFFFi64;
  v9 = v41;
  v40[0] = tagRequest->matchModelHands;
  modelTypeToMatch = CHAR_MODEL_COUNT;
  if ( v40[0] )
    modelTypeToMatch = 13 - (v41 != XANIM_IK_ACTOR_LEFT_HAND);
  m_numModels = v8->m_numModels;
  v11 = 0;
  v55 = m_numModels;
  if ( m_numModels <= 0 )
    return 0xFFFFFFFFi64;
  v12 = v40[0];
  v13 = v59;
  v14 = v41;
  m_modelHandIndices = v8->m_modelHandIndices;
  m_models = v8->m_models;
  v53 = v41;
  v50 = v59;
  v42 = v8->m_modelHandIndices;
  v43 = v8->m_models;
  v44 = m_numModels;
  do
  {
    if ( v11 >= 0xC )
    {
      LODWORD(index) = 12;
      LODWORD(name) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1927, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_WEAPON_IK_MODELS )", "modelIndex doesn't index MAX_WEAPON_IK_MODELS\n\t%i not in [0, %i)", name, index) )
        __debugbreak();
      m_numModels = v44;
      m_modelHandIndices = v42;
      m_models = v43;
      v9 = v41;
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
        m_models = v43;
      }
      if ( (signed int)v11 >= v8->m_numModels )
      {
LABEL_31:
        v9 = v41;
        if ( v41 != XANIM_IK_ACTOR_RIGHT_HAND )
        {
LABEL_43:
          m_numModels = v44;
          m_modelHandIndices = v42;
          goto LABEL_44;
        }
        goto LABEL_34;
      }
      if ( *v42 == WEAPON_HAND_LEFT )
      {
        v9 = v41;
        if ( v41 )
          goto LABEL_43;
      }
      else
      {
        if ( *v42 == WEAPON_HAND_DEFAULT )
          goto LABEL_31;
        v9 = v41;
      }
    }
LABEL_34:
    v18 = 0;
    v19 = 0i64;
    p_tagName = &g_IKTagTable[v14][0].tagName;
    while ( 1 )
    {
      v21 = *p_tagName == NULL;
      v40[0] = -2;
      if ( v21 )
      {
        LODWORD(index) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1843, ASSERT_TYPE_ASSERT, "(g_IKTagTable[hand][curTag].tagName)", "%s\n\tXAnimIKAttachTargetToWeapon() called using XAnimIKType (%i) that has no attach tag.", "g_IKTagTable[hand][curTag].tagName", index) )
          __debugbreak();
      }
      if ( XAnimIKDObjModelsGetBoneIndex(v52, dobjModelTypes, *v56, modelTypeToMatch, v17, **p_tagName, v40, &foundModelIndex) )
      {
        v22 = p_tagName[1];
        if ( !v22 || ((unsigned __int8 (__fastcall *)(const XAnimIKTagRequest *))v22)(v57) )
          break;
      }
      v9 = v41;
      ++v18;
      ++v19;
      p_tagName += 3;
      if ( v18 >= 6 )
      {
        v13 = v50;
        v8 = v54;
        m_models = v43;
        goto LABEL_43;
      }
    }
    v13 = v50;
    if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1848, ASSERT_TYPE_ASSERT, "(searchResult)", (const char *)&queryFormat, "searchResult") )
      __debugbreak();
    v8 = v54;
    m_modelHandIndices = v42;
    v14 = v53;
    v27 = v19 + 6 * v53;
    v28 = *g_IKTagTable[0][v27].tagName;
    priority = g_IKTagTable[0][v27].priority;
    m_models = v43;
    v13[1] = priority;
    v13[2] = foundModelIndex;
    m_numModels = v44;
    *v13 = v28;
    v9 = v41;
LABEL_44:
    ++m_modelHandIndices;
    ++m_models;
    v42 = m_modelHandIndices;
    v13 += 3;
    v43 = m_models;
    ++v11;
    v50 = v13;
    v44 = --m_numModels;
  }
  while ( m_numModels );
  v23 = v48;
  v24 = v60;
  v25 = tag_ik_loc_le;
  do
  {
    if ( *(v24 - 1) >= v23 )
    {
      v26 = v46;
    }
    else
    {
      v26 = *v24;
      v23 = *(v24 - 1);
      v25 = *(v24 - 2);
      v46 = *v24;
    }
    v24 += 3;
    --v55;
  }
  while ( v55 );
  if ( v23 >= 6 )
    return 0xFFFFFFFFi64;
  v30 = v56;
  if ( (unsigned int)*v56 + 1 >= 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1872, ASSERT_TYPE_ASSERT, "(*numModels + 1 < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "*numModels + 1 < DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  if ( v26 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1873, ASSERT_TYPE_ASSERT, "(bestModelIndex >= 0)", (const char *)&queryFormat, "bestModelIndex >= 0") )
    __debugbreak();
  v31 = *v30;
  v32 = v52;
  v33 = dobjModelTypes;
  if ( v31 > v26 )
  {
    v34 = &v52[v31];
    do
    {
      v35 = *(__m256i *)&v34->quat.xyz.y;
      *(__m256i *)&v34[1].model = *(__m256i *)&v34->model;
      v36 = *(_OWORD *)&v34->camoParams.materialOverrideDstWhitelist;
      *(__m256i *)&v34[1].quat.xyz.y = v35;
      *(_OWORD *)&v34[1].camoParams.materialOverrideDstWhitelist = v36;
      --v34;
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
  int v8; 
  __int64 v9; 
  unsigned int *p_secondBoneIndex; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  float weight; 
  __int64 v17; 
  __int64 v18; 

  if ( !info->parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 870, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 871, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 872, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  animToModel = info->animToModel;
  if ( !animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 877, ASSERT_TYPE_ASSERT, "(animToModel)", (const char *)&queryFormat, "animToModel") )
    __debugbreak();
  v8 = 0;
  v9 = 0i64;
  p_secondBoneIndex = &dObjData->boneInfo[0].secondBoneIndex;
  do
  {
    v11 = *(p_secondBoneIndex - 1);
    v12 = *p_secondBoneIndex;
    v13 = p_secondBoneIndex[1];
    v14 = p_secondBoneIndex[2];
    if ( (unsigned int)v11 >= 0x100 )
    {
      LODWORD(v18) = 256;
      LODWORD(v17) = *(p_secondBoneIndex - 1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v11 & 0x1F)) & animToModel->partBits.array[v11 >> 5]) != 0 )
      goto LABEL_31;
    if ( (unsigned int)v12 >= 0x100 )
    {
      LODWORD(v18) = 256;
      LODWORD(v17) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v12 & 0x1F)) & animToModel->partBits.array[v12 >> 5]) != 0 )
      goto LABEL_31;
    if ( (unsigned int)v13 >= 0x100 )
    {
      LODWORD(v18) = 256;
      LODWORD(v17) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v13 & 0x1F)) & animToModel->partBits.array[v13 >> 5]) != 0 )
      goto LABEL_31;
    if ( (unsigned int)v14 >= 0x100 )
    {
      LODWORD(v18) = 256;
      LODWORD(v17) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v14 & 0x1F)) & animToModel->partBits.array[v14 >> 5]) != 0 )
    {
LABEL_31:
      v8 = 1;
      weight = info->state.weight;
    }
    else
    {
      weight = 0.0;
    }
    p_secondBoneIndex += 7;
    animWeights[v9++] = weight;
  }
  while ( v9 < 4 );
  return v8 != 0;
}

/*
==============
XAnimIKCalcFirstBoneRotation
==============
*/
void XAnimIKCalcFirstBoneRotation(const DObj *obj, const float4 *firstBonePos, const float4 *thirdBonePos, const float4 *targetBonePos, float4 *delta)
{
  __m128 v5; 
  __m128 v6; 
  __m128 v12; 
  __m128 v17; 
  __m128 v28; 
  __m128 v29; 

  v5 = _mm128_sub_ps(thirdBonePos->v, firstBonePos->v);
  v6 = _mm128_sub_ps(targetBonePos->v, firstBonePos->v);
  _XMM8 = g_two.v;
  _XMM0 = _mm128_mul_ps(v5, v5);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v12 = _mm128_div_ps(v5, _mm_sqrt_ps(_XMM0));
  _XMM0 = _mm128_mul_ps(v6, v6);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v17 = _mm128_div_ps(v6, _mm_sqrt_ps(_XMM0));
  _XMM0 = _mm128_mul_ps(v17, v12);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM10 = _mm128_add_ps(_XMM0, g_one.v);
  __asm
  {
    vcmpltps xmm0, xmm8, xmm9
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm10, xmm9
    vminps  xmm10, xmm0, xmm8
  }
  v28 = _mm_sqrt_ps(_mm128_mul_ps(_XMM10, g_oneHalf.v));
  v29 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 210), _mm_shuffle_ps(v12, v12, 201)), _mm128_mul_ps(_mm_shuffle_ps(v17, v17, 201), _mm_shuffle_ps(v12, v12, 210)));
  _XMM1 = _mm128_mul_ps(_mm128_div_ps(g_oneHalf.v, v28), v29);
  __asm { vblendvps xmm2, xmm1, xmm8, xmm0 }
  _XMM1 = _mm128_mul_ps(_XMM2, _XMM2);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  _XMM2.v = _mm128_div_ps(_XMM2, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm2, xmm2
    vmovmskps eax, xmm0
  }
  *delta = (float4)_XMM2.v;
  if ( _EAX )
  {
    Com_Printf(19, "==== [ IK CRASH LOG, PLEASE COPY FROM HERE DOWN ] ====\n");
    DObjDisplayAnim(obj, (const char *)&queryFormat.fmt + 3);
    Com_Printf(19, "firstToEndNormalized: (%f, %f, %f)\n", v12.m128_f32[0], _mm_shuffle_ps(v12, v12, 85).m128_f32[0], _mm_shuffle_ps(v12, v12, 170).m128_f32[0]);
    Com_Printf(19, "firstToTargetNormalized: (%f, %f, %f)\n", v17.m128_f32[0], _mm_shuffle_ps(v17, v17, 85).m128_f32[0], _mm_shuffle_ps(v17, v17, 170).m128_f32[0]);
    Com_Printf(19, "cross: (%f, %f, %f)\n", v29.m128_f32[0], _mm_shuffle_ps(v29, v29, 85).m128_f32[0], _mm_shuffle_ps(v29, v29, 170).m128_f32[0]);
    Com_Printf(19, "cosThetaPlusOne: %f\n", _XMM10.m128_f32[0]);
    Com_Printf(19, "cosHalfTheta: %f\n", v28.m128_f32[0]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 713, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "!Float4IsNaN( delta ): Please copy log above.") )
      __debugbreak();
  }
  _XMM0 = delta->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 717, ASSERT_TYPE_SANITY, "( !Float4IsNaN( delta ) )", (const char *)&queryFormat, "!Float4IsNaN( delta )") )
      __debugbreak();
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
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> > *v12; 
  __int64 v13; 
  __m256i v14; 
  __int128 v15; 

  v3 = 0;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1348, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1349, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  if ( !outDObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1350, ASSERT_TYPE_ASSERT, "(outDObjData)", (const char *)&queryFormat, "outDObjData") )
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
        v12 = mp_next + 4;
        v13 = 2i64;
        do
        {
          outDObjData = (XAnimIKDObjData *)((char *)outDObjData + 128);
          v14 = *(__m256i *)&v12->m_listHead.m_sentinel.mp_next;
          v15 = *(_OWORD *)&v12[14].m_listHead.m_sentinel.mp_next;
          v12 += 16;
          *(__m256i *)((char *)&outDObjData[-1].partBits[1] + 12) = v14;
          *(DObjPartBits *)((char *)&outDObjData[-1].partBits[2] + 12) = *(DObjPartBits *)&v12[-12].m_listHead.m_sentinel.mp_next;
          *(DObjPartBits *)((char *)&outDObjData[-1].partBits[3] + 12) = *(DObjPartBits *)&v12[-8].m_listHead.m_sentinel.mp_next;
          *(_OWORD *)&outDObjData[-1].combinedPartBits.array[3] = *(_OWORD *)&v12[-4].m_listHead.m_sentinel.mp_next;
          *(_OWORD *)&outDObjData[-1].combinedPartBits.array[7] = v15;
          --v13;
        }
        while ( v13 );
        *(__m256i *)outDObjData->hingeAxis[0].v.m128_f32 = *(__m256i *)&v12->m_listHead.m_sentinel.mp_next;
        *(__m256i *)outDObjData->hingeAxis[2].v.m128_f32 = *(__m256i *)&v12[4].m_listHead.m_sentinel.mp_next;
        *(__m256i *)&outDObjData->handle = *(__m256i *)&v12[8].m_listHead.m_sentinel.mp_next;
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
    XAnimIKExtractDObjData(obj, outDObjData);
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
  XAnimIKNotetrackLeafFunctor v11; 
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
      v11.m_ikData = &ikData;
      v11.m_dObjData = &outDObjData;
      XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(info, ikWeights, animWeights, &v11);
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
  __int64 v16; 
  XAnimIKNotetrackLeafFunctor v17; 
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
        LODWORD(v16) = 32 * (InfoIndex & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v16, g_xanimMemoryGlobals.bucketAllocatorMaxOffset) )
          __debugbreak();
      }
      v11 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v12];
    }
    else
    {
      if ( (unsigned int)InfoIndex >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v16) = InfoIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v16, g_xanimMemoryGlobals.infoPoolSize) )
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
          v17.m_ikData = &ikData;
          v17.m_dObjData = &outDObjData;
          XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(v11, ikWeights, animWeights, &v17);
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
  __m256i *v1; 
  const char **p_secondBone; 
  scr_string_t String; 
  scr_string_t v4; 
  scr_string_t v5; 
  scr_string_t v6; 
  const char *v7; 
  scr_string_t v8; 
  const char *v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  scr_string_t NotetrackConstString; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 

  if ( !g_xanimIKSettings[0].typeName )
  {
    v1 = (__m256i *)g_xanimIKSettings;
    p_secondBone = &xanimIKChainDefs[0].secondBone;
    do
    {
      v18.m256i_i64[0] = (__int64)*(p_secondBone - 2);
      String = SL_GetString(*(p_secondBone - 1), 0);
      v18.m256i_i32[2] = String;
      v4 = SL_GetString(*p_secondBone, 0);
      v18.m256i_i32[3] = v4;
      v5 = SL_GetString(p_secondBone[1], 0);
      v18.m256i_i32[4] = v5;
      v6 = SL_GetString(p_secondBone[2], 0);
      v7 = p_secondBone[3];
      v8 = v6;
      v18.m256i_i32[5] = v6;
      if ( v7 )
        v18.m256i_i32[6] = SL_GetString(v7, 0);
      else
        v18.m256i_i32[6] = 0;
      v9 = p_secondBone[4];
      if ( v9 )
        v18.m256i_i32[7] = SL_GetString(v9, 0);
      else
        v18.m256i_i32[7] = 0;
      if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1607, ASSERT_TYPE_ASSERT, "(ret.firstBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.firstBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1608, ASSERT_TYPE_ASSERT, "(ret.secondBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.secondBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1609, ASSERT_TYPE_ASSERT, "(ret.thirdBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.thirdBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1610, ASSERT_TYPE_ASSERT, "(ret.targetBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ret.targetBoneName != NULL_SCR_STRING") )
        __debugbreak();
      v11 = (__m128)LODWORD(FLOAT_0_017453292);
      v11.m128_f32[0] = 0.017453292 * *((float *)p_secondBone + 10);
      v10 = v11;
      v10.m128_f32[0] = cosf_0(v11.m128_f32[0]);
      v12 = (__m128)*((unsigned int *)p_secondBone + 11);
      v13 = v10;
      v14 = v12;
      v14.m128_f32[0] = v12.m128_f32[0] * 0.017453292;
      v15 = v14;
      v15.m128_f32[0] = cosf_0(v12.m128_f32[0] * 0.017453292);
      if ( v13.m128_f32[0] >= v15.m128_f32[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1615, ASSERT_TYPE_ASSERT, "(cosineMaxHingeAngle < cosineMinHingeAngle)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMaxHingeAngle < cosineMinHingeAngle") )
        __debugbreak();
      if ( v13.m128_f32[0] < -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1616, ASSERT_TYPE_ASSERT, "(cosineMaxHingeAngle >= -1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMaxHingeAngle >= -1.0f") )
        __debugbreak();
      if ( v15.m128_f32[0] < -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1617, ASSERT_TYPE_ASSERT, "(cosineMinHingeAngle >= -1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMinHingeAngle >= -1.0f") )
        __debugbreak();
      if ( v13.m128_f32[0] > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1618, ASSERT_TYPE_ASSERT, "(cosineMaxHingeAngle <= 1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMaxHingeAngle <= 1.0f") )
        __debugbreak();
      if ( v15.m128_f32[0] > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1619, ASSERT_TYPE_ASSERT, "(cosineMinHingeAngle <= 1.0f)", "%s\n\tLimit angles for secondJoint are inconsistent", "cosineMinHingeAngle <= 1.0f") )
        __debugbreak();
      *(__m128 *)v17.m256i_i8 = _mm_shuffle_ps(v13, v13, 0);
      *(__m128 *)&v17.m256i_u64[2] = _mm_shuffle_ps(v15, v15, 0);
      v19.m256i_i32[0] = *((unsigned __int8 *)p_secondBone + 48);
      v19.m256i_i32[1] = XAnimIK_GetNotetrackConstString("ik_in_start_", *(p_secondBone - 2));
      v19.m256i_i32[2] = XAnimIK_GetNotetrackConstString("ik_in_end_", *(p_secondBone - 2));
      v19.m256i_i32[3] = XAnimIK_GetNotetrackConstString("ik_out_start_", *(p_secondBone - 2));
      NotetrackConstString = XAnimIK_GetNotetrackConstString("ik_out_end_", *(p_secondBone - 2));
      *v1 = v17;
      v19.m256i_i32[4] = NotetrackConstString;
      p_secondBone += 9;
      v1[1] = v18;
      v1[2] = v19;
      v1 += 3;
    }
    while ( (__int64)p_secondBone < (__int64)&unk_1441B30D0 );
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
  __m256i *mp_next; 
  __int64 v12; 
  __m256i *v13; 
  __int64 v14; 
  XAnimIKDObjData *p_dObjData; 
  __m256i v16; 
  __int128 v17; 
  __m256i *v18; 
  int *v19; 
  __m256i v20; 
  __int128 v21; 
  __m256i *v22; 
  XAnimIKDObjData *v23; 
  __int64 v24; 
  __m256i v25; 
  __int128 v26; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v27; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v28; 
  int v29; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v30; 
  int *v31; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v32; 
  __m256i v33; 
  __int128 v34; 
  XAnimIKDObjData dObjData; 
  int v36[4]; 
  char v37; 

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
      mp_next = (__m256i *)v10->m_listHead.m_sentinel.mp_next;
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
          if ( mp_next->m256i_i32[4] == (_DWORD)v5 )
            break;
          mp_next = (__m256i *)mp_next->m256i_i64[0];
          if ( mp_next == (__m256i *)v10 )
            goto LABEL_29;
        }
      }
      v12 = 2i64;
      if ( mp_next )
      {
        v13 = (__m256i *)v36;
        v14 = 2i64;
        p_dObjData = &dObjData;
        do
        {
          v13 += 4;
          v16 = *(__m256i *)p_dObjData->hingeAxis[0].v.m128_f32;
          v17 = *(_OWORD *)&p_dObjData->boneInfo[1].targetBoneIndex;
          p_dObjData = (XAnimIKDObjData *)((char *)p_dObjData + 128);
          v13[-4] = v16;
          v13[-3] = *(__m256i *)((char *)&p_dObjData[-1].partBits[2] + 12);
          v13[-2] = *(__m256i *)((char *)&p_dObjData[-1].partBits[3] + 12);
          *(_OWORD *)v13[-1].m256i_i8 = *(_OWORD *)&p_dObjData[-1].combinedPartBits.array[3];
          *(_OWORD *)&v13[-1].m256i_u64[2] = v17;
          --v14;
        }
        while ( v14 );
        *v13 = *(__m256i *)p_dObjData->hingeAxis[0].v.m128_f32;
        v13[1] = *(__m256i *)p_dObjData->hingeAxis[2].v.m128_f32;
        v13[2] = *(__m256i *)&p_dObjData->handle;
        v18 = mp_next + 1;
        v19 = v36;
        do
        {
          v18 += 4;
          v20 = *(__m256i *)v19;
          v21 = *((_OWORD *)v19 + 7);
          v19 += 32;
          v18[-4] = v20;
          v18[-3] = *((__m256i *)v19 - 3);
          v18[-2] = *((__m256i *)v19 - 2);
          *(_OWORD *)v18[-1].m256i_i8 = *((_OWORD *)v19 - 2);
          *(_OWORD *)&v18[-1].m256i_u64[2] = v21;
          --v12;
        }
        while ( v12 );
        *v18 = *(__m256i *)v19;
        v18[1] = *((__m256i *)v19 + 1);
        v18[2] = *((__m256i *)v19 + 2);
      }
      else
      {
        v36[0] = v5;
        v22 = (__m256i *)&v37;
        v23 = &dObjData;
        v24 = 2i64;
        do
        {
          v22 += 4;
          v25 = *(__m256i *)v23->hingeAxis[0].v.m128_f32;
          v26 = *(_OWORD *)&v23->boneInfo[1].targetBoneIndex;
          v23 = (XAnimIKDObjData *)((char *)v23 + 128);
          v22[-4] = v25;
          v22[-3] = *(__m256i *)((char *)&v23[-1].partBits[2] + 12);
          v22[-2] = *(__m256i *)((char *)&v23[-1].partBits[3] + 12);
          *(_OWORD *)v22[-1].m256i_i8 = *(_OWORD *)&v23[-1].combinedPartBits.array[3];
          *(_OWORD *)&v22[-1].m256i_u64[2] = v26;
          --v24;
        }
        while ( v24 );
        *v22 = *(__m256i *)v23->hingeAxis[0].v.m128_f32;
        v22[1] = *(__m256i *)v23->hingeAxis[2].v.m128_f32;
        v22[2] = *(__m256i *)&v23->handle;
        if ( v9 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v27 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_ikCacheHashMap.m_buckets.ntl::internal::hash_table<unsigned int,XAnimIKDObjData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData>,744,16>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,XAnimIKDObjData> >,1543>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v9];
        v28 = *v27;
        if ( *v27 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v27 )
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
          v30 = s_ikCacheHashMap.m_freelist.m_head.mp_next;
          v31 = v36;
          s_ikCacheHashMap.m_freelist.m_head.mp_next = s_ikCacheHashMap.m_freelist.m_head.mp_next->mp_next;
          v32 = v30 + 2;
          v30->mp_next = NULL;
          do
          {
            v32 += 16;
            v33 = *(__m256i *)v31;
            v34 = *((_OWORD *)v31 + 7);
            v31 += 32;
            *(__m256i *)&v32[-16].mp_next = v33;
            *(__m256i *)&v32[-12].mp_next = *((__m256i *)v31 - 3);
            *(__m256i *)&v32[-8].mp_next = *((__m256i *)v31 - 2);
            *(_OWORD *)&v32[-4].mp_next = *((_OWORD *)v31 - 2);
            *(_OWORD *)&v32[-2].mp_next = v34;
            --v12;
          }
          while ( v12 );
          *(__m256i *)&v32->mp_next = *(__m256i *)v31;
          *(__m256i *)&v32[4].mp_next = *((__m256i *)v31 + 1);
          *(__m256i *)&v32[8].mp_next = *((__m256i *)v31 + 2);
          *(_OWORD *)&v32[12].mp_next = *((_OWORD *)v31 + 6);
          v30->mp_next = *v27;
          *v27 = v30;
          ++s_ikCacheHashMap.m_currentNumItems;
        }
        else
        {
          v29 = v36[0];
          while ( 1 )
          {
            if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v28[2].mp_next) == v29 )
              break;
            v28 = v28->mp_next;
            if ( v28 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v27 )
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
  const dvar_t *v4; 
  bool v8; 
  const XAnimIKSettings *v9; 
  unsigned int *v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  XAnimIKBoneInfo *v14; 
  bool v15; 
  __int64 v16; 
  const XAnimIKBoneInfo *v17; 
  const DObj *v18; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 next; 
  const XAnimIKDObjData *v23; 
  __int64 v24; 
  const bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v25; 
  const XAnimIKSettings **v26; 
  __int64 v27; 
  __int64 v31; 
  XAnimIKBoneInfo *boneInfo[2]; 
  const XAnimIKSettings **p_settingsArray; 
  __int64 v34[2]; 

  v4 = DCONST_DVARBOOL_xanim_ik_disable;
  v34[0] = (__int64)data;
  if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
  {
    if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1443, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
      __debugbreak();
    if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1444, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
      __debugbreak();
    v8 = g_xanimIKSettings[0].typeName == NULL;
    v9 = g_xanimIKSettings;
    p_settingsArray = &data->settingsArray;
    data->settingsArray = g_xanimIKSettings;
    if ( !v8 )
    {
      Profile_Begin(459);
      if ( !(unsigned int)XAnimIKHasAnyIKBones(dObjData) )
        goto LABEL_41;
      v10 = &dObjData->partBits[0].array[7];
      v11 = 0;
      v12 = 4i64;
      v13 = 0;
      v31 = 4i64;
      boneInfo[0] = dObjData->boneInfo;
      v14 = dObjData->boneInfo;
      do
      {
        if ( v14->allBonesFound )
        {
          v15 = XAnimIKCalcNeeded(obj, v9, v14, partBits, 1) != 0;
          if ( v11 || v15 )
          {
            v11 = 1;
            if ( v15 && (v13 || (*v10 & 2) != 0) )
              v13 = 1;
          }
        }
        ++v9;
        ++v14;
        v10 += 8;
        --v12;
      }
      while ( v12 );
      v16 = v34[0];
      v17 = boneInfo[0];
      if ( !*(_BYTE *)(v34[0] + 24) )
      {
        *(_QWORD *)v34[0] = 0i64;
        *(_QWORD *)(v16 + 8) = 0i64;
      }
      if ( !v11 )
        goto LABEL_41;
      v18 = obj;
      if ( !*(_BYTE *)(v16 + 24) && obj->tree )
      {
        children = obj->tree->children;
        if ( children )
        {
          v34[0] = 0i64;
          v34[1] = 0i64;
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
          boneInfo[0] = (XAnimIKBoneInfo *)v16;
          XAnimCalcNotetrackWeights<4,XAnimIKNotetrackLeafFunctor>(AnimInfo, (float *)v16, (float *)v34, (XAnimIKNotetrackLeafFunctor *)boneInfo);
          Profile_EndInternal(NULL);
          v18 = obj;
          *(_BYTE *)(v16 + 24) = 1;
          goto LABEL_33;
        }
        v18 = obj;
      }
      v23 = dObjData;
LABEL_33:
      v24 = 0i64;
      v25 = v23->partBits;
      v26 = p_settingsArray;
      v27 = 4i64;
      do
      {
        if ( v17->allBonesFound && *(float *)v16 > 0.0 )
        {
          if ( v13 || XAnimIKCalcNeeded(v18, &(*v26)[v24], v17, partBits, 1) )
            bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(partBits, v25);
          v27 = v31;
        }
        v18 = obj;
        ++v24;
        ++v25;
        ++v17;
        v16 += 4i64;
        v31 = --v27;
      }
      while ( v27 );
LABEL_41:
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
XAnimIKPreCalcInitBones
==============
*/
char XAnimIKPreCalcInitBones(const DObj *obj, const XAnimIKSettings *settings, XAnimIKDObjData *dObjData)
{
  XAnimIKDObjData *v3; 
  __int64 v5; 
  unsigned int *restoreSubmodelIndex; 
  scr_string_t *p_secondBoneName; 
  const XModel **models; 
  const char **v9; 
  vec3_t *ikHingeAxis; 
  float v11; 
  __m128 v13; 
  char result; 
  __m128 v; 

  v3 = dObjData;
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1144, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  v5 = 0i64;
  restoreSubmodelIndex = &v3->boneInfo[0].restoreSubmodelBoneIndex;
  p_secondBoneName = &settings->secondBoneName;
  while ( !XAnimIKGetIKBones(obj, (const scr_string_t)*((_DWORD *)p_secondBoneName - 1), (const scr_string_t)*p_secondBoneName, (const scr_string_t)*((_DWORD *)p_secondBoneName + 1), (const scr_string_t)*((_DWORD *)p_secondBoneName + 2), (const scr_string_t)*((_DWORD *)p_secondBoneName + 3), (const scr_string_t)*((_DWORD *)p_secondBoneName + 4), restoreSubmodelIndex - 4, restoreSubmodelIndex - 3, restoreSubmodelIndex - 2, restoreSubmodelIndex - 1, restoreSubmodelIndex, restoreSubmodelIndex + 1) )
  {
    *(restoreSubmodelIndex - 5) = 0;
LABEL_10:
    restoreSubmodelIndex += 7;
    p_secondBoneName += 24;
    ++v5;
    v3 = (XAnimIKDObjData *)((char *)v3 + 16);
    if ( v5 >= 4 )
      return 1;
  }
  models = obj->models;
  *(restoreSubmodelIndex - 5) = 1;
  v9 = (const char **)*models;
  ikHingeAxis = (*models)->ikHingeAxis;
  if ( ikHingeAxis )
  {
    v11 = ikHingeAxis[v5].v[0];
    if ( (float)((float)((float)(v11 * v11) + (float)(ikHingeAxis[v5].v[1] * ikHingeAxis[v5].v[1])) + (float)(ikHingeAxis[v5].v[2] * ikHingeAxis[v5].v[2])) >= 0.001 )
    {
      v.m128_i32[3] = 0;
      v13 = v;
      v13.m128_f32[0] = v11;
      _XMM0 = v13;
      __asm
      {
        vinsertps xmm0, xmm0, xmm3, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
      }
      v = _XMM0.v;
      v3->hingeAxis[0] = (float4)_XMM0.v;
      goto LABEL_10;
    }
  }
  Com_PrintError(1, "XModel %s doesn't have an ikHingeAxis, but we're expecting it to. Check linker for warnings regarding ik.", *v9);
  result = 0;
  *(restoreSubmodelIndex - 5) = 0;
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
  __int128 v7; 
  double v8; 
  XAnimIKTagRequest *v9; 

  v6 = *(_DWORD *)&weapon->weaponCamo;
  v7 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(__m256i *)&result->weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
  v8 = *(double *)&weapon->attachmentVariationIndices[21];
  *(_OWORD *)&result->weapon.attachmentVariationIndices[5] = v7;
  *(double *)&result->weapon.attachmentVariationIndices[21] = v8;
  *(_DWORD *)&result->weapon.weaponCamo = v6;
  result->requiresAkimboIK = requiresAkimboIK;
  result->matchModelHands = matchModelHands;
  v9 = result;
  result->isAlternate = isAlternate;
  result->requiresRoboticIK = requiresRoboticIK;
  return v9;
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
  __int64 v6; 
  const XAnimIKSettings *v8; 
  float4 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v; 
  __m128 v14; 
  __m128 v15; 
  const float4 *v16; 
  const float4 *v17; 
  const float4 *v18; 
  float4 hingeAxis; 
  float4 secondBoneQuatDelta; 
  float4 firstBoneQuatDelta; 

  v6 = ikType;
  if ( !ikData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 816, ASSERT_TYPE_ASSERT, "(ikData)", (const char *)&queryFormat, "ikData") )
    __debugbreak();
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 817, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  v8 = &ikData->settingsArray[v6];
  if ( dObjData->boneInfo[v6].allBonesFound )
  {
    v9.v = (__m128)ikParams->secondBoneQuat;
    v10 = _mm_shuffle_ps(v9.v, v9.v, 255);
    v11 = _mm_shuffle_ps(v9.v, v9.v, 201);
    v12 = _mm_shuffle_ps(v9.v, v9.v, 210);
    v = dObjData->hingeAxis[v6].v;
    v14 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 210), v11), _mm128_mul_ps(_mm_shuffle_ps(v, v, 201), v12));
    v15 = _mm128_add_ps(v14, v14);
    hingeAxis.v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v15, v15, 210), v11), _mm128_mul_ps(_mm_shuffle_ps(v15, v15, 201), v12)), _mm128_add_ps(_mm128_mul_ps(v10, v15), v));
    XAnimCalcSecondBoneRotation(v8, &hingeAxis, &ikParams->firstBoneTrans, &ikParams->secondBoneTrans, &ikParams->thirdBoneTrans, &ikParams->targetBoneTrans, &ikParams->firstBoneQuat, &secondBoneQuatDelta);
    Float3RotateQuatAroundOrigin(v17, v16, v18, &hingeAxis);
    XAnimIKCalcFirstBoneRotation(obj, &ikParams->firstBoneTrans, &hingeAxis, &ikParams->targetBoneTrans, &firstBoneQuatDelta);
    XAnimIKApplyDeltas(ikParams, v8->rotateToTarget, ikData, v6, dObjData, &firstBoneQuatDelta, &secondBoneQuatDelta);
  }
}

/*
==============
XAnimIKUpdateBoneFromDelta
==============
*/
void XAnimIKUpdateBoneFromDelta(const XAnimIkSolverParams *ikParams, const unsigned int boneIndex, const float4 *quat, const float4 *trans, const float4 *delta, const float4 *weight, float4 *deltaWeighted)
{
  __m128 v; 
  int v10; 
  int v12; 
  __m128 v15; 
  __m128 v19; 
  __m128 v20; 
  float4 v21; 
  int v22; 
  __int128 v23; 
  const float4 *fmt; 
  const float4 *v29; 
  __m128 v30; 

  v = quat->v;
  v30 = quat->v;
  v10 = quat->v.m128_u64[1];
  _XMM0 = _mm128_mul_ps(delta->v, g_unit.v);
  v12 = HIDWORD(quat->v.m128_u64[0]);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v15 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps((__m128)(_XMM0 & *(_OWORD *)&g_negativeZero.v | _xmm), weight->v), delta->v), _mm128_mul_ps(_mm128_sub_ps(g_one.v, weight->v), g_unit.v));
  _XMM0 = _mm128_mul_ps(v15, v15);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v19 = _mm_sqrt_ps(_XMM0);
  v20 = trans->v;
  v21.v = _mm128_div_ps(v15, v19);
  v22 = *(_OWORD *)quat & 0x7F800000;
  *deltaWeighted = (float4)v21.v;
  if ( (v22 == 2139095040 || (v12 & 0x7F800000) == 2139095040 || (v10 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 564, ASSERT_TYPE_SANITY, "( !IS_NAN( ( quatV )[0] ) && !IS_NAN( ( quatV )[1] ) && !IS_NAN( ( quatV )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( quatV )[0] ) && !IS_NAN( ( quatV )[1] ) && !IS_NAN( ( quatV )[2] )") )
    __debugbreak();
  if ( ((v20.m128_i32[0] & 0x7F800000) == 2139095040 || (v20.m128_i32[1] & 0x7F800000) == 2139095040 || (v20.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 565, ASSERT_TYPE_SANITY, "( !IS_NAN( ( transV )[0] ) && !IS_NAN( ( transV )[1] ) && !IS_NAN( ( transV )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( transV )[0] ) && !IS_NAN( ( transV )[1] ) && !IS_NAN( ( transV )[2] )") )
    __debugbreak();
  v23 = v21.v.m128_u32[0];
  *(float *)&v23 = (float)((float)((float)(v21.v.m128_f32[0] * v30.m128_f32[3]) + (float)(v21.v.m128_f32[3] * v.m128_f32[0])) + (float)(v21.v.m128_f32[1] * v.m128_f32[2])) - (float)(v21.v.m128_f32[2] * v.m128_f32[1]);
  _XMM0 = v23;
  __asm
  {
    vinsertps xmm0, xmm0, xmm6, 10h
    vinsertps xmm0, xmm0, xmm5, 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
  }
  XAnimSetLocalBoneTransform(ikParams->animCalcInfo, ikParams->obj, ikParams->destBuffer, boneIndex, fmt, v29, ikParams->weightScale);
}

/*
==============
XAnimIKUpdatePartBits
==============
*/
void XAnimIKUpdatePartBits(const DObj *obj, const XAnimIKSettings *const settings, XAnimIKDObjData *dObjData)
{
  const DObj *v5; 
  DObjPartBits *p_combinedPartBits; 
  DObjPartBits *partBits; 
  __int64 v9; 
  XAnimIKBoneInfo *boneInfo; 
  unsigned int v11; 
  DObjPartBits *v12; 
  unsigned __int64 targetBoneIndex; 
  unsigned __int64 firstBoneIndex; 
  unsigned __int64 secondBoneIndex; 
  unsigned __int64 thirdBoneIndex; 
  unsigned __int64 restoreSubmodelBoneIndex; 
  unsigned __int64 floatTrackBoneIndex; 
  unsigned int v19; 
  __int64 v25; 
  __int64 v26; 

  v5 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1209, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !dObjData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_ik.cpp", 1210, ASSERT_TYPE_ASSERT, "(dObjData)", (const char *)&queryFormat, "dObjData") )
    __debugbreak();
  p_combinedPartBits = &dObjData->combinedPartBits;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&dObjData->combinedPartBits);
  __asm { vpxor   xmm7, xmm7, xmm7 }
  partBits = dObjData->partBits;
  v9 = 4i64;
  boneInfo = dObjData->boneInfo;
  do
  {
    v11 = 0;
    v12 = partBits;
    do
    {
      *(_OWORD *)v12->array = _XMM7;
      v12 = (DObjPartBits *)((char *)v12 + 16);
      ++v11;
    }
    while ( v11 < 2 );
    if ( boneInfo->allBonesFound && settings->typeName && (!bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v5->skel, boneInfo->firstBoneIndex) || !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v5->skel, boneInfo->secondBoneIndex) || !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v5->skel, boneInfo->thirdBoneIndex) || !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&v5->skel, boneInfo->targetBoneIndex)) )
    {
      targetBoneIndex = boneInfo->targetBoneIndex;
      if ( (unsigned int)targetBoneIndex >= 0x100 )
      {
        LODWORD(v26) = 256;
        LODWORD(v25) = boneInfo->targetBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      partBits->array[targetBoneIndex >> 5] |= 0x80000000 >> (targetBoneIndex & 0x1F);
      firstBoneIndex = boneInfo->firstBoneIndex;
      if ( (unsigned int)firstBoneIndex >= 0x100 )
      {
        LODWORD(v26) = 256;
        LODWORD(v25) = boneInfo->firstBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      partBits->array[firstBoneIndex >> 5] |= 0x80000000 >> (firstBoneIndex & 0x1F);
      secondBoneIndex = boneInfo->secondBoneIndex;
      if ( (unsigned int)secondBoneIndex >= 0x100 )
      {
        LODWORD(v26) = 256;
        LODWORD(v25) = boneInfo->secondBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      partBits->array[secondBoneIndex >> 5] |= 0x80000000 >> (secondBoneIndex & 0x1F);
      thirdBoneIndex = boneInfo->thirdBoneIndex;
      if ( (unsigned int)thirdBoneIndex >= 0x100 )
      {
        LODWORD(v26) = 256;
        LODWORD(v25) = boneInfo->thirdBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      partBits->array[thirdBoneIndex >> 5] |= 0x80000000 >> (thirdBoneIndex & 0x1F);
      restoreSubmodelBoneIndex = boneInfo->restoreSubmodelBoneIndex;
      if ( (_DWORD)restoreSubmodelBoneIndex != 255 )
      {
        if ( (unsigned int)restoreSubmodelBoneIndex >= 0x100 )
        {
          LODWORD(v26) = 256;
          LODWORD(v25) = boneInfo->restoreSubmodelBoneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
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
            LODWORD(v26) = 256;
            LODWORD(v25) = boneInfo->floatTrackBoneIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
              __debugbreak();
          }
          partBits->array[floatTrackBoneIndex >> 5] |= 0x80000000 >> (floatTrackBoneIndex & 0x1F);
        }
      }
      DObjCompleteHierarchyBits(v5, partBits);
      v19 = 0;
      _RSI = (char *)partBits - (char *)p_combinedPartBits;
      _RDI = p_combinedPartBits;
      do
      {
        __asm
        {
          vlddqu  xmm6, xmmword ptr [rsi+rdi]
          vlddqu  xmm0, xmmword ptr [rdi]
          vpor    xmm6, xmm0, xmm6
        }
        *(_OWORD *)_RDI->array = _XMM6;
        _RDI = (DObjPartBits *)((char *)_RDI + 16);
        ++v19;
      }
      while ( v19 < 2 );
      v5 = obj;
    }
    ++boneInfo;
    partBits = v12;
    --v9;
  }
  while ( v9 );
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

