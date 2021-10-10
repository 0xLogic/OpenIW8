/*
==============
CG_ClientModel_GetModel
==============
*/

const XModel *__fastcall CG_ClientModel_GetModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const unsigned int submodelIdx)
{
  return ?CG_ClientModel_GetModel@@YAPEBUXModel@@W4LocalClientNum_t@@II@Z(localClientNum, clientModelIdx, submodelIdx);
}

/*
==============
CG_ClientModel_SetRequiredModifiables
==============
*/

void __fastcall CG_ClientModel_SetRequiredModifiables(const LocalClientNum_t localClientNum, const unsigned int *clientModelIndices, const unsigned int numClientModelIndices)
{
  ?CG_ClientModel_SetRequiredModifiables@@YAXW4LocalClientNum_t@@PEBII@Z(localClientNum, clientModelIndices, numClientModelIndices);
}

/*
==============
CG_ClientModel_IsModifiable
==============
*/

bool __fastcall CG_ClientModel_IsModifiable(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_IsModifiable@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_IsInitialized
==============
*/

bool __fastcall CG_ClientModel_IsInitialized(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_IsInitialized@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_IsLoaded
==============
*/

bool __fastcall CG_ClientModel_IsLoaded(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_IsLoaded@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_SetOrigin
==============
*/

void __fastcall CG_ClientModel_SetOrigin(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *origin)
{
  ?CG_ClientModel_SetOrigin@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, clientModelIdx, origin);
}

/*
==============
CG_ClientModel_GetAnimationTreeName
==============
*/

scr_string_t __fastcall CG_ClientModel_GetAnimationTreeName(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetAnimationTreeName@@YA?AW4scr_string_t@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_SetHudOutline
==============
*/

void __fastcall CG_ClientModel_SetHudOutline(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool enabled, int colorIdx, bool fill)
{
  ?CG_ClientModel_SetHudOutline@@YAXW4LocalClientNum_t@@I_NH1@Z(localClientNum, clientModelIdx, enabled, colorIdx, fill);
}

/*
==============
CG_ClientModel_GetLocalClientNumForDobj
==============
*/

LocalClientNum_t __fastcall CG_ClientModel_GetLocalClientNumForDobj(const unsigned int clientModelIdx, const DObj *const dobj)
{
  return ?CG_ClientModel_GetLocalClientNumForDobj@@YA?AW4LocalClientNum_t@@IQEBUDObj@@@Z(clientModelIdx, dobj);
}

/*
==============
CG_ClientModel_MyChangesSaveAndShutdown
==============
*/

void CG_ClientModel_MyChangesSaveAndShutdown(void)
{
  ?CG_ClientModel_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
CG_ClientModel_GetClothInstanceIds
==============
*/

void __fastcall CG_ClientModel_GetClothInstanceIds(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, unsigned int *instanceCount, unsigned int **instanceIds)
{
  ?CG_ClientModel_GetClothInstanceIds@@YAXW4LocalClientNum_t@@IPEAIPEAPEAI@Z(localClientNum, clientModelIdx, instanceCount, instanceIds);
}

/*
==============
CG_ClientModel_SetParticleSystemHandle
==============
*/

void __fastcall CG_ClientModel_SetParticleSystemHandle(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const ParticleSystemHandle handle)
{
  ?CG_ClientModel_SetParticleSystemHandle@@YAXW4LocalClientNum_t@@IW4ParticleSystemHandle@@@Z(localClientNum, clientModelIdx, handle);
}

/*
==============
CG_ClientModel_SetAnimation
==============
*/

void __fastcall CG_ClientModel_SetAnimation(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, scr_string_t animationTreeName, XAnim_s *animations, const XAnimParts *animation, scr_anim_t animationIndex)
{
  ?CG_ClientModel_SetAnimation@@YAXW4LocalClientNum_t@@IW4scr_string_t@@PEAUXAnim_s@@PEBUXAnimParts@@Uscr_anim_t@@@Z(localClientNum, clientModelIdx, animationTreeName, animations, animation, animationIndex);
}

/*
==============
CG_ClientModel_GetPoseForDObjHandle
==============
*/

const cpose_t *__fastcall CG_ClientModel_GetPoseForDObjHandle(const LocalClientNum_t localClientNum, const int dobjHandle)
{
  return ?CG_ClientModel_GetPoseForDObjHandle@@YAPEBUcpose_t@@W4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
CG_ClientModel_SetHudOutline_CustomColor
==============
*/

void __fastcall CG_ClientModel_SetHudOutline_CustomColor(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool enabled, unsigned int colorValue, bool fill, unsigned __int8 renderMode, unsigned __int8 lineWidth)
{
  ?CG_ClientModel_SetHudOutline_CustomColor@@YAXW4LocalClientNum_t@@I_NI1EE@Z(localClientNum, clientModelIdx, enabled, colorValue, fill, renderMode, lineWidth);
}

/*
==============
CG_AllocFreeModelIndex
==============
*/

unsigned int __fastcall CG_AllocFreeModelIndex(const LocalClientNum_t localClientNum)
{
  return ?CG_AllocFreeModelIndex@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_MyChangesInitAndLoad
==============
*/

void CG_ClientModel_MyChangesInitAndLoad(void)
{
  ?CG_ClientModel_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
CG_ClientModel_GetDObj
==============
*/

DObj *__fastcall CG_ClientModel_GetDObj(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetDObj@@YAPEAUDObj@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_ResetPrevPose
==============
*/

void __fastcall CG_ClientModel_ResetPrevPose(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_ResetPrevPose@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_IsModifiableAssetRequired
==============
*/

bool __fastcall CG_ClientModel_IsModifiableAssetRequired(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_IsModifiableAssetRequired@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_NoPhysics
==============
*/

bool __fastcall CG_ClientModel_NoPhysics(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_NoPhysics@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_SetWeapon
==============
*/

void __fastcall CG_ClientModel_SetWeapon(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const Weapon *weapon)
{
  ?CG_ClientModel_SetWeapon@@YAXW4LocalClientNum_t@@IAEBUWeapon@@@Z(localClientNum, clientModelIdx, weapon);
}

/*
==============
CG_ClientModel_Update
==============
*/

void __fastcall CG_ClientModel_Update(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_GetPose
==============
*/

cpose_t *__fastcall CG_ClientModel_GetPose(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetPose@@YAPEAUcpose_t@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_ScriptableUnlink
==============
*/

void __fastcall CG_ClientModel_ScriptableUnlink(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  ?CG_ClientModel_ScriptableUnlink@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_GetAnims
==============
*/

XAnim_s *__fastcall CG_ClientModel_GetAnims(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetAnims@@YAPEAUXAnim_s@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_AddModel
==============
*/

void __fastcall CG_ClientModel_AddModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const XModel *model, scr_string_t bone)
{
  ?CG_ClientModel_AddModel@@YAXW4LocalClientNum_t@@IPEBUXModel@@W4scr_string_t@@@Z(localClientNum, clientModelIdx, model, bone);
}

/*
==============
CG_ClientModel_SetModifiable
==============
*/

void __fastcall CG_ClientModel_SetModifiable(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const bool modifiable)
{
  ?CG_ClientModel_SetModifiable@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, clientModelIdx, modifiable);
}

/*
==============
CG_ClientModel_SetNoCloth
==============
*/

void __fastcall CG_ClientModel_SetNoCloth(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool noCloth)
{
  ?CG_ClientModel_SetNoCloth@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, clientModelIdx, noCloth);
}

/*
==============
CG_ClientModel_GetStreamingWeaponIterator
==============
*/

void __fastcall CG_ClientModel_GetStreamingWeaponIterator(const LocalClientNum_t localClientNum, BitArrayIterator *outIter)
{
  ?CG_ClientModel_GetStreamingWeaponIterator@@YAXW4LocalClientNum_t@@AEAUBitArrayIterator@@@Z(localClientNum, outIter);
}

/*
==============
CG_ClientModel_NoCloth
==============
*/

bool __fastcall CG_ClientModel_NoCloth(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_NoCloth@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_SetAngles
==============
*/

void __fastcall CG_ClientModel_SetAngles(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *angles)
{
  ?CG_ClientModel_SetAngles@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, clientModelIdx, angles);
}

/*
==============
CG_ClientModel_ScriptableLink
==============
*/

void __fastcall CG_ClientModel_ScriptableLink(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *origin, const vec3_t *angles, const XModel *model, scr_string_t animationTreeName, XAnim_s *animations, const XAnimParts *animation, scr_anim_t animationIndex)
{
  ?CG_ClientModel_ScriptableLink@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@1PEBUXModel@@W4scr_string_t@@PEAUXAnim_s@@PEBUXAnimParts@@Uscr_anim_t@@@Z(localClientNum, clientModelIdx, origin, angles, model, animationTreeName, animations, animation, animationIndex);
}

/*
==============
CG_ClientModel_AreSubAssetsLoading
==============
*/

bool __fastcall CG_ClientModel_AreSubAssetsLoading(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_AreSubAssetsLoading@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_SyncLoaded
==============
*/

void __fastcall CG_ClientModel_SyncLoaded(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_SyncLoaded@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_AreSubAssetsLoadingForAnyModel
==============
*/

bool __fastcall CG_ClientModel_AreSubAssetsLoadingForAnyModel(const LocalClientNum_t localClientNum)
{
  return ?CG_ClientModel_AreSubAssetsLoadingForAnyModel@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_InitClient
==============
*/

void __fastcall CG_ClientModel_InitClient(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_InitClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_ShutdownClient
==============
*/

void __fastcall CG_ClientModel_ShutdownClient(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_ShutdownClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_GetParticleSystemHandle
==============
*/

ParticleSystemHandle __fastcall CG_ClientModel_GetParticleSystemHandle(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetParticleSystemHandle@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_GetAnimation
==============
*/

const XAnimParts *__fastcall CG_ClientModel_GetAnimation(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetAnimation@@YAPEBUXAnimParts@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_GetIndex
==============
*/

bool __fastcall CG_ClientModel_GetIndex(const LocalClientNum_t localClientNum, const scr_string_t name, unsigned int *outIndex)
{
  return ?CG_ClientModel_GetIndex@@YA_NW4LocalClientNum_t@@W4scr_string_t@@PEAI@Z(localClientNum, name, outIndex);
}

/*
==============
CG_ClientModel_SetAnimation
==============
*/

void __fastcall CG_ClientModel_SetAnimation(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const XAnimParts *animation, scr_anim_t animationIndex)
{
  ?CG_ClientModel_SetAnimation@@YAXW4LocalClientNum_t@@IPEBUXAnimParts@@Uscr_anim_t@@@Z(localClientNum, clientModelIdx, animation, animationIndex);
}

/*
==============
CG_ClientModel_GetName
==============
*/

scr_string_t __fastcall CG_ClientModel_GetName(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetName@@YA?AW4scr_string_t@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_GetCount
==============
*/

unsigned int __fastcall CG_ClientModel_GetCount(const LocalClientNum_t localClientNum)
{
  return ?CG_ClientModel_GetCount@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_SetPrevPose
==============
*/

void __fastcall CG_ClientModel_SetPrevPose(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *origin, const vec3_t *angles)
{
  ?CG_ClientModel_SetPrevPose@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@1@Z(localClientNum, clientModelIdx, origin, angles);
}

/*
==============
CG_ClientModel_IsClientInitialized
==============
*/

bool __fastcall CG_ClientModel_IsClientInitialized(const LocalClientNum_t localClientNum)
{
  return ?CG_ClientModel_IsClientInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_GetOrigin
==============
*/

void __fastcall CG_ClientModel_GetOrigin(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, vec3_t *outOrigin, scr_string_t tagName)
{
  ?CG_ClientModel_GetOrigin@@YAXW4LocalClientNum_t@@IAEATvec3_t@@W4scr_string_t@@@Z(localClientNum, clientModelIdx, outOrigin, tagName);
}

/*
==============
CG_ClientModel_SetModel
==============
*/

void __fastcall CG_ClientModel_SetModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const XModel *model)
{
  ?CG_ClientModel_SetModel@@YAXW4LocalClientNum_t@@IPEBUXModel@@@Z(localClientNum, clientModelIdx, model);
}

/*
==============
CG_ClientModel_SetNoPhysics
==============
*/

void __fastcall CG_ClientModel_SetNoPhysics(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool noPhysics)
{
  ?CG_ClientModel_SetNoPhysics@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, clientModelIdx, noPhysics);
}

/*
==============
CG_ClientModel_GetWeapon
==============
*/

const Weapon *__fastcall CG_ClientModel_GetWeapon(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetWeapon@@YAAEBUWeapon@@W4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_SetupStreamingRequest
==============
*/

unsigned int __fastcall CG_ClientModel_SetupStreamingRequest(const LocalClientNum_t localClientNum, const ClStreamingRequest **requests, const unsigned int maxRequestCount, ClStreamingRequest *requestPool, unsigned int requestIndex)
{
  return ?CG_ClientModel_SetupStreamingRequest@@YAIW4LocalClientNum_t@@QEAPEBUClStreamingRequest@@IPEAU2@I@Z(localClientNum, requests, maxRequestCount, requestPool, requestIndex);
}

/*
==============
CG_AllocFreeModelIndex
==============
*/
__int64 CG_AllocFreeModelIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClientModelCounts *v2; 
  unsigned int reserved; 
  __int64 v4; 
  bitarray<384> *v5; 
  unsigned int v6; 
  unsigned __int64 v7; 

  v1 = localClientNum;
  v2 = &s_CG_ClientModel_clientModelCounts[localClientNum];
  if ( v2->reserved > v2->total && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 817, ASSERT_TYPE_ASSERT, "( modelCounts.reserved ) <= ( modelCounts.total )", "%s <= %s\n\t%i, %i", "modelCounts.reserved", "modelCounts.total", s_CG_ClientModel_clientModelCounts[localClientNum].reserved, v2->total) )
    __debugbreak();
  reserved = v2->reserved;
  if ( v2->reserved >= 0x180 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 833, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  else
  {
    v4 = v1;
    v5 = &s_CG_ClientModel_Initialized[v1];
    while ( 1 )
    {
      v6 = 0x80000000 >> (reserved & 0x1F);
      v7 = (unsigned __int64)reserved >> 5;
      if ( (v6 & v5->array[v7]) == 0 && (v6 & s_CG_ClientModel_RequiredModifiables[v4].array[v7]) == 0 )
        break;
      if ( ++reserved >= 0x180 )
        goto LABEL_9;
    }
    if ( reserved >= v2->total )
      v2->total = reserved + 1;
    return reserved;
  }
}

/*
==============
CG_ClientModel_AddModel
==============
*/
void CG_ClientModel_AddModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const XModel *model, scr_string_t bone)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  unsigned __int16 modelCount; 
  char v10; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1382, ASSERT_TYPE_ASSERT, "(model != nullptr)", (const char *)&queryFormat, "model != nullptr") )
    __debugbreak();
  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1383, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( !RuntimeData->modelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1388, ASSERT_TYPE_ASSERT, "(runtimeData.modelCount > 0)", "%s\n\tYou need to SetModel first", "runtimeData.modelCount > 0") )
    __debugbreak();
  modelCount = RuntimeData->modelCount;
  if ( modelCount > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1389, ASSERT_TYPE_ASSERT, "( runtimeData.modelCount ) <= ( CLIENT_MODEL_MAX_XMODELS )", "%s <= %s\n\t%i, %i", "runtimeData.modelCount", "CLIENT_MODEL_MAX_XMODELS", modelCount, 16) )
    __debugbreak();
  if ( CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx) )
  {
    v10 = 1;
    if ( CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx) )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v10 = 0;
  }
  RuntimeData->models[RuntimeData->modelCount] = model;
  RuntimeData->attach_names[RuntimeData->modelCount++] = bone;
  if ( v10 )
  {
    if ( CG_ClientModel_InitClientModelDObj(localClientNum, clientModelIdx, NULL) )
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
  }
}

/*
==============
CG_ClientModel_AreSubAssetsLoading
==============
*/
bool CG_ClientModel_AreSubAssetsLoading(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  unsigned int Count; 

  v2 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1782, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1783, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v6) = 384;
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1784, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return bitarray_base<bitarray<384>>::testBit(&s_CG_ClientModel_SubAssetsLoadingState[v2], clientModelIdx);
}

/*
==============
CG_ClientModel_AreSubAssetsLoadingForAnyModel
==============
*/
char CG_ClientModel_AreSubAssetsLoadingForAnyModel(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  bitarray<384> *i; 

  v1 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1770, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = 0;
  for ( i = &s_CG_ClientModel_SubAssetsLoadingState[v1]; !i->array[0]; i = (bitarray<384> *)((char *)i + 4) )
  {
    if ( (unsigned int)++v2 >= 0xC )
      return 0;
  }
  return 1;
}

/*
==============
CG_ClientModel_GetAnimation
==============
*/
const XAnimParts *CG_ClientModel_GetAnimation(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->animation;
}

/*
==============
CG_ClientModel_GetAnimationTreeName
==============
*/
__int64 CG_ClientModel_GetAnimationTreeName(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return (unsigned int)CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->animationTreeName;
}

/*
==============
CG_ClientModel_GetAnims
==============
*/
XAnim_s *CG_ClientModel_GetAnims(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->animations;
}

/*
==============
CG_ClientModel_GetClipmapPoolSize
==============
*/
__int64 CG_ClientModel_GetClipmapPoolSize()
{
  MapEnts *mapEnts; 

  mapEnts = cm.mapEnts;
  if ( !cm.mapEnts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 165, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  return mapEnts->numClientModels;
}

/*
==============
CG_ClientModel_GetClothInstanceIds
==============
*/
void CG_ClientModel_GetClothInstanceIds(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, unsigned int *instanceCount, unsigned int **instanceIds)
{
  __int64 v8; 
  __int64 v9; 
  unsigned int Count; 

  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1243, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount(localClientNum) )
  {
    Count = CG_ClientModel_GetCount(localClientNum);
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1244, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v8, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v9) = 384;
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1245, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1246, ASSERT_TYPE_ASSERT, "(instanceCount)", (const char *)&queryFormat, "instanceCount") )
    __debugbreak();
  if ( !instanceIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1247, ASSERT_TYPE_ASSERT, "(instanceIds)", (const char *)&queryFormat, "instanceIds") )
    __debugbreak();
  CG_ClientModel_Cloth_GetInstanceIds(localClientNum, clientModelIdx, instanceCount, instanceIds);
}

/*
==============
CG_ClientModel_GetCount
==============
*/
__int64 CG_ClientModel_GetCount(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 806, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x20 )
  {
    v4 = 32;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v1 & 0x1F)) & s_CG_ClientModel_SystemInitialized.array[(unsigned __int64)(unsigned int)v1 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1055, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  return s_CG_ClientModel_clientModelCounts[v1].total;
}

/*
==============
CG_ClientModel_GetDObj
==============
*/
DObj *CG_ClientModel_GetDObj(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v8; 
  __int64 v9; 
  unsigned int Count; 

  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1172, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount(localClientNum) )
  {
    Count = CG_ClientModel_GetCount(localClientNum);
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1173, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v8, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v9) = 384;
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1174, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v4 = clientModelIdx + 2117;
  if ( v4 - 2117 > 0x17F )
  {
    LODWORD(v9) = 2117;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1177, ASSERT_TYPE_ASSERT, "( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) ) <= ( dobjHandle ) && ( dobjHandle ) <= ( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1 )", "dobjHandle not in [DOBJ_HANDLE_FIRST_CLIENTMODEL, DOBJ_HANDLE_FIRST_CLIENTMODEL + CLIENT_MODEL_MAX_COUNT - 1]\n\t%i not in [%i, %i]", v8, v9, 2500) )
      __debugbreak();
  }
  if ( v4 > 0x9E4 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v9) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = v4 + 2533 * localClientNum;
  if ( v5 >= 0x13CA )
  {
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v9) )
      __debugbreak();
  }
  v6 = clientObjMap[v5];
  if ( !v6 )
    return 0i64;
  if ( v6 >= (unsigned int)s_objCount )
  {
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v9) )
      __debugbreak();
  }
  return (DObj *)s_objBuf[v6];
}

/*
==============
CG_ClientModel_GetIndex
==============
*/
char CG_ClientModel_GetIndex(const LocalClientNum_t localClientNum, const scr_string_t name, unsigned int *outIndex)
{
  unsigned int v6; 
  unsigned int Count; 

  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1064, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1065, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1066, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  v6 = 0;
  Count = CG_ClientModel_GetCount(localClientNum);
  if ( !Count )
    return 0;
  while ( name != CG_ClientModel_GetRuntimeData(localClientNum, v6)->name )
  {
    if ( ++v6 >= Count )
      return 0;
  }
  *outIndex = v6;
  return 1;
}

/*
==============
CG_ClientModel_GetLocalClientNumForDobj
==============
*/
__int64 CG_ClientModel_GetLocalClientNumForDobj(const unsigned int clientModelIdx, const DObj *const dobj)
{
  LocalClientNum_t v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1218, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v4 = LOCAL_CLIENT_0;
  while ( 1 )
  {
    if ( CG_ClientModel_IsClientInitialized(v4) )
    {
      if ( clientModelIdx >= CG_ClientModel_GetCount(v4) )
      {
        LODWORD(v7) = CG_ClientModel_GetCount(v4);
        LODWORD(v6) = clientModelIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1227, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( CG_ClientModel_GetDObj(v4, clientModelIdx) == dobj )
        break;
    }
    if ( ++v4 >= LOCAL_CLIENT_COUNT )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v4;
}

/*
==============
CG_ClientModel_GetModel
==============
*/
const XModel *CG_ClientModel_GetModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const unsigned int submodelIdx)
{
  __int64 v3; 
  int v8; 

  v3 = submodelIdx;
  if ( submodelIdx >= 0x10 )
  {
    v8 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1104, ASSERT_TYPE_ASSERT, "(unsigned)( submodelIdx ) < (unsigned)( CLIENT_MODEL_MAX_XMODELS )", "submodelIdx doesn't index CLIENT_MODEL_MAX_XMODELS\n\t%i not in [0, %i)", submodelIdx, v8) )
      __debugbreak();
  }
  return CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->models[v3];
}

/*
==============
CG_ClientModel_GetName
==============
*/
__int64 CG_ClientModel_GetName(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return (unsigned int)CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->name;
}

/*
==============
CG_ClientModel_GetOrigin
==============
*/
void CG_ClientModel_GetOrigin(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, vec3_t *outOrigin, scr_string_t tagName)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  const cpose_t *p_pose; 
  const DObj *DObj; 
  DObjAnimMat *LocalBoneMatrix; 
  refdef_t *v12; 
  int modelIndex[14]; 
  unsigned __int8 inOutIndex; 

  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  p_pose = &RuntimeData->pose;
  if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1671, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !tagName )
    goto LABEL_15;
  DObj = CG_ClientModel_GetDObj(localClientNum, clientModelIdx);
  if ( !DObj )
    goto LABEL_15;
  if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 116, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  inOutIndex = -2;
  if ( DObjGetBoneIndexInternal_68(DObj, tagName, &inOutIndex, modelIndex) && (LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(p_pose, DObj, inOutIndex)) != NULL )
  {
    v12 = g_activeRefDef;
    outOrigin->v[0] = LocalBoneMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
    outOrigin->v[1] = LocalBoneMatrix->trans.v[1] + v12->viewOffset.v[1];
    outOrigin->v[2] = LocalBoneMatrix->trans.v[2] + v12->viewOffset.v[2];
  }
  else
  {
LABEL_15:
    CG_GetPoseOrigin(p_pose, outOrigin);
  }
}

/*
==============
CG_ClientModel_GetParticleSystemHandle
==============
*/
__int64 CG_ClientModel_GetParticleSystemHandle(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return (unsigned int)CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->particleSystemHandle;
}

/*
==============
CG_ClientModel_GetPose
==============
*/
cpose_t *CG_ClientModel_GetPose(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return &CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->pose;
}

/*
==============
CG_ClientModel_GetPoseForDObjHandle
==============
*/
cpose_t *CG_ClientModel_GetPoseForDObjHandle(const LocalClientNum_t localClientNum, const int dobjHandle)
{
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1199, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)(dobjHandle - 2117) > 0x17F )
  {
    v9 = 2500;
    v8 = 2117;
    LODWORD(v6) = dobjHandle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1200, ASSERT_TYPE_ASSERT, "( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) ) <= ( dobjHandle ) && ( dobjHandle ) <= ( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1 )", "dobjHandle not in [DOBJ_HANDLE_FIRST_CLIENTMODEL, DOBJ_HANDLE_FIRST_CLIENTMODEL + CLIENT_MODEL_MAX_COUNT - 1]\n\t%i not in [%i, %i]", v6, v8, v9) )
      __debugbreak();
  }
  v4 = dobjHandle - 2117;
  if ( v4 >= CG_ClientModel_GetCount(localClientNum) )
  {
    LODWORD(v7) = CG_ClientModel_GetCount(localClientNum);
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1204, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( v4 >= 0x180 )
  {
    LODWORD(v7) = 384;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1205, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &CG_ClientModel_GetRuntimeData(localClientNum, v4)->pose;
}

/*
==============
CG_ClientModel_GetRuntimeData
==============
*/
CG_ClientModel_RuntimeData *CG_ClientModel_GetRuntimeData(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = clientModelIdx;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 141, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x180 )
  {
    LODWORD(v7) = 384;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    LODWORD(v7) = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 144, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  return &s_CG_ClientModel_RuntimeData + 384 * v2 + v3;
}

/*
==============
CG_ClientModel_GetStreamingWeaponIterator
==============
*/
void CG_ClientModel_GetStreamingWeaponIterator(const LocalClientNum_t localClientNum, BitArrayIterator *outIter)
{
  __int64 v3; 
  bitarray<384> *v4; 
  float v6; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1835, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1836, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  *(_QWORD *)&outIter->wordCount = 12i64;
  v4 = &s_CG_ClientModel_StreamingWeapons[v3];
  outIter->bitArray = (const unsigned int *)v4;
  outIter->bits = 0;
  outIter->bits = v4->array[0];
}

/*
==============
CG_ClientModel_GetWeapon
==============
*/
Weapon *CG_ClientModel_GetWeapon(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return &CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->weapon;
}

/*
==============
CG_ClientModel_InitClient
==============
*/
void CG_ClientModel_InitClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  SecureOrigin *v6; 
  unsigned __int64 *p_Get_origin; 
  void (__fastcall *Get_origin)(const vec4_t *, vec3_t *); 
  unsigned __int64 v9; 
  void (__fastcall *Set_origin)(const vec3_t *, vec4_t *); 
  unsigned __int64 v11; 
  void (__fastcall **p_origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *v13)(const vec4_t *, vec3_t *); 
  unsigned __int64 *p_z; 
  unsigned __int64 v15; 
  void (__fastcall *v16)(const vec3_t *, vec4_t *); 
  unsigned __int64 v17; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Init");
  if ( (unsigned int)v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 724, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 725, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_IsClientInitialized( localClientNum ))", "%s\n\tCG_ClientModel: Trying to Init twice for the same localclientnum %i", "!CG_ClientModel_IsClientInitialized( localClientNum )", v1) )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v1, 32) )
    __debugbreak();
  s_CG_ClientModel_SystemInitialized.array[(unsigned __int64)(unsigned int)v1 >> 5] |= 0x80000000 >> (v1 & 0x1F);
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 165, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  v2 = cm.mapEnts->numClientModels + 256;
  v3 = v1;
  s_CG_ClientModel_clientModelCounts[v1].reserved = v2;
  s_CG_ClientModel_clientModelCounts[v1].total = v2;
  *(_QWORD *)s_CG_ClientModel_Initialized[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Initialized[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Initialized[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Initialized[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Initialized[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Initialized[v3].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_SubAssetsLoadingState[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_SubAssetsLoadingState[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_SubAssetsLoadingState[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_SubAssetsLoadingState[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_SubAssetsLoadingState[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_SubAssetsLoadingState[v3].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_Modifiable[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Modifiable[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Modifiable[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Modifiable[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Modifiable[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_Modifiable[v3].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_RequiredModifiables[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_RequiredModifiables[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_RequiredModifiables[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_RequiredModifiables[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_RequiredModifiables[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_RequiredModifiables[v3].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_UnwantedModifiables[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_UnwantedModifiables[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_UnwantedModifiables[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_UnwantedModifiables[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_UnwantedModifiables[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_UnwantedModifiables[v3].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_ScriptableLinked[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_ScriptableLinked[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_ScriptableLinked[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_ScriptableLinked[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_ScriptableLinked[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_ScriptableLinked[v3].array[10] = 0i64;
  *(_QWORD *)s_CG_ClientModel_StreamingWeapons[v3].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_StreamingWeapons[v3].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_StreamingWeapons[v3].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_StreamingWeapons[v3].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_StreamingWeapons[v3].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_StreamingWeapons[v3].array[10] = 0i64;
  v4 = v1;
  *(_QWORD *)s_CG_ClientModel_NeedsPrevPoseReset[v4].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v4].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v4].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v4].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v4].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v4].array[10] = 0i64;
  *(_QWORD *)s_cg_ClientModel_PrevOriginValid[v4].array = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevOriginValid[v4].array[2] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevOriginValid[v4].array[4] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevOriginValid[v4].array[6] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevOriginValid[v4].array[8] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevOriginValid[v4].array[10] = 0i64;
  *(_QWORD *)s_cg_ClientModel_PrevAnglesValid[v4].array = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevAnglesValid[v4].array[2] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevAnglesValid[v4].array[4] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevAnglesValid[v4].array[6] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevAnglesValid[v4].array[8] = 0i64;
  *(_QWORD *)&s_cg_ClientModel_PrevAnglesValid[v4].array[10] = 0i64;
  memset_0(&s_CG_ClientModel_RuntimeData + 384 * v1, 0, 0x37800ui64);
  v5 = 384i64;
  v6 = &s_CG_ClientModel_RuntimeData.pose.origin + 7104 * v1;
  do
  {
    p_Get_origin = (unsigned __int64 *)&v6->Get_origin;
    Get_origin = v6->Get_origin;
    v9 = (unsigned __int64)GetOrigin_Vec3Copy ^ (unsigned __int64)v6 ^ s_aab_get_pointer_origin;
    if ( Get_origin && Get_origin != GetOrigin_Vec3Copy && Get_origin != (void (__fastcall *)(const vec4_t *, vec3_t *))v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Get_origin == 0 ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc ))", (const char *)&queryFormat, "( pose->origin.Get_origin == NULL ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc )") )
      __debugbreak();
    Set_origin = v6->Set_origin;
    *p_Get_origin = v9;
    v11 = (unsigned __int64)SetOrigin_Vec3Copy ^ (unsigned __int64)p_Get_origin ^ s_aab_set_pointer_origin;
    if ( Set_origin && Set_origin != SetOrigin_Vec3Copy && Set_origin != (void (__fastcall *)(const vec3_t *, vec4_t *))v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Set_origin == 0 ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc ))", (const char *)&queryFormat, "( pose->origin.Set_origin == NULL ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc )") )
      __debugbreak();
    v6->Set_origin = (void (__fastcall *)(const vec3_t *, vec4_t *))v11;
    CG_SetPoseOrigin((cpose_t *)&v6[-2].origin.secureOrigin.xyz.z, &vec3_origin);
    p_origin = (void (__fastcall **)(const vec3_t *, vec4_t *))&v6[1].origin;
    v13 = *(void (__fastcall **)(const vec4_t *, vec3_t *))&v6[1].origin.secureOrigin.xyz.z;
    p_z = (unsigned __int64 *)&v6[1].origin.secureOrigin.xyz.z;
    v15 = (unsigned __int64)GetOrigin_Vec3Copy ^ (unsigned __int64)&v6[1].origin ^ s_aab_get_pointer_prevorigin;
    if ( v13 && v13 != GetOrigin_Vec3Copy && v13 != (void (__fastcall *)(const vec4_t *, vec3_t *))v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Get_prevOrigin == 0 ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Get_prevOrigin == NULL ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc )") )
      __debugbreak();
    v16 = *p_origin;
    *p_z = v15;
    v17 = (unsigned __int64)SetOrigin_Vec3Copy ^ (unsigned __int64)p_z ^ s_aab_set_pointer_prevorigin;
    if ( v16 && v16 != SetOrigin_Vec3Copy && v16 != (void (__fastcall *)(const vec3_t *, vec4_t *))v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Set_prevOrigin == 0 ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Set_prevOrigin == NULL ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc )") )
      __debugbreak();
    *p_origin = (void (__fastcall *)(const vec3_t *, vec4_t *))v17;
    CG_SetPrevPoseOrigin((cpose_t *)&v6[-2].origin.secureOrigin.xyz.z, &vec3_origin);
    v6 = (SecureOrigin *)((char *)v6 + 592);
    --v5;
  }
  while ( v5 );
  CG_ClientModel_Physics_Init(localClientNum);
  CG_ClientModel_Cloth_Init(localClientNum);
  CG_ClientModel_ParseClipmap(localClientNum);
  CG_ClientModel_InitClientModels(localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_InitClientModelDObj
==============
*/
char CG_ClientModel_InitClientModelDObj(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, DObj *recycledDObj)
{
  __int64 v3; 
  DObj *v4; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  unsigned __int16 *p_modelCount; 
  ClGameModeApplication *ActiveClientApplication; 
  char v9; 
  bitarray_base<bitarray<384> > *v10; 
  const Weapon *p_weapon; 
  CgWeaponSystem *WeaponSystem; 
  bool v14; 
  XModel *WeaponModels; 
  const XModel *v16; 
  const Weapon *v17; 
  const char *WeaponBaseName; 
  const DObjCamoParams *camoParams; 
  int v20; 
  const XModel **v21; 
  const XModel *v22; 
  XAnimOwner v23; 
  XAnim_s *animations; 
  XAnimTree *SmallTree; 
  XAnimTree *Tree; 
  unsigned int index; 
  __int64 isUsingDetonator; 
  __int64 isUsingDetonatora; 
  __int64 isUsingCensorshipWorldModel; 
  unsigned int isUsingCensorshipWorldModela; 
  __int64 maxModels; 
  unsigned __int16 *numModels; 
  int handle; 
  scr_string_t *attach_names; 
  DObjCamoParams outLocalParams; 
  DObjStickerSlotList result; 
  DObjStickerSlotList stickerSlots; 
  DObjModel outDObjModel[16]; 

  v3 = localClientNum;
  v4 = recycledDObj;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 377, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 378, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v3) )
  {
    isUsingCensorshipWorldModela = CG_ClientModel_GetCount((const LocalClientNum_t)v3);
    LODWORD(isUsingDetonator) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModela) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(isUsingCensorshipWorldModel) = 384;
    LODWORD(isUsingDetonator) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 380, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( CG_ClientModel_IsInitialized((const LocalClientNum_t)v3, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 381, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_IsInitialized( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_IsInitialized( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_IsModifiable((const LocalClientNum_t)v3, clientModelIdx) && !CG_ClientModel_IsModifiableAssetRequired((const LocalClientNum_t)v3, clientModelIdx) )
    return 0;
  RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v3, clientModelIdx);
  p_modelCount = &RuntimeData->modelCount;
  if ( !RuntimeData->modelCount )
    return 0;
  handle = clientModelIdx + 2117;
  if ( clientModelIdx > 0x17F )
  {
    LODWORD(isUsingCensorshipWorldModel) = 2117;
    LODWORD(isUsingDetonator) = clientModelIdx + 2117;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 398, ASSERT_TYPE_ASSERT, "( ENTITYNUM_CLIENTMODEL_START ) <= ( entNum ) && ( entNum ) <= ( ENTITYNUM_CLIENTMODEL_END - 1 )", "entNum not in [ENTITYNUM_CLIENTMODEL_START, ENTITYNUM_CLIENTMODEL_END - 1]\n\t%i not in [%i, %i]", isUsingDetonator, isUsingCensorshipWorldModel, 2500) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 316, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v3) )
  {
    LODWORD(isUsingCensorshipWorldModel) = CG_ClientModel_GetCount((const LocalClientNum_t)v3);
    LODWORD(isUsingDetonator) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 317, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  if ( !ActiveClientApplication && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 321, ASSERT_TYPE_ASSERT, "(clGameApp)", (const char *)&queryFormat, "clGameApp") )
    __debugbreak();
  if ( CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v3, clientModelIdx)->models[0] )
  {
    v9 = ((__int64 (__fastcall *)(ClGameModeApplication *))ActiveClientApplication->IsModelLoaded)(ActiveClientApplication);
    v10 = &s_CG_ClientModel_SubAssetsLoadingState[v3];
    if ( v9 )
      bitarray_base<bitarray<384>>::resetBit(v10, clientModelIdx);
    else
      bitarray_base<bitarray<384>>::setBit(v10, clientModelIdx);
  }
  if ( CG_ClientModel_AreSubAssetsLoading((const LocalClientNum_t)v3, clientModelIdx) )
  {
    if ( !CG_ClientModel_IsModifiable((const LocalClientNum_t)v3, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 404, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
      __debugbreak();
    if ( !CG_ClientModel_IsModifiableAssetRequired((const LocalClientNum_t)v3, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 405, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx )") )
      __debugbreak();
    return 0;
  }
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_Initialized[v3], clientModelIdx);
  p_weapon = &RuntimeData->weapon;
  if ( RuntimeData->weapon.weaponIdx )
  {
    if ( RuntimeData->weapon.weaponCamo >= BG_Camo_GetCamoCount() )
    {
      LODWORD(isUsingCensorshipWorldModel) = BG_Camo_GetCamoCount();
      LODWORD(isUsingDetonator) = RuntimeData->weapon.weaponCamo;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 416, ASSERT_TYPE_ASSERT, "(unsigned)( runtimeData.weapon.weaponCamo ) < (unsigned)( BG_Camo_GetCamoCount() )", "runtimeData.weapon.weaponCamo doesn't index BG_Camo_GetCamoCount()\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
        __debugbreak();
    }
    WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v3);
    v14 = WeaponSystem->IsWeaponWorldModelLoaded(WeaponSystem, &RuntimeData->weapon);
    WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &RuntimeData->weapon, 0, !v14, 0, 0, 0);
    v16 = WeaponModels;
    v17 = &RuntimeData->weapon;
    if ( !WeaponModels )
    {
      WeaponBaseName = BG_GetWeaponBaseName(v17, 0);
      LODWORD(isUsingDetonatora) = clientModelIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 426, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ClientModel %d initialized with null model for weapon '%s'", isUsingDetonatora, WeaponBaseName) )
        __debugbreak();
      RuntimeData->models[0] = NULL;
      *p_modelCount = 0;
      RuntimeData->isWeaponLoaded = 0;
      return 0;
    }
    RuntimeData->models[0] = WeaponModels;
    RuntimeData->isWeaponLoaded = v14;
    *p_modelCount = 1;
    camoParams = BG_Camo_GetWeaponDObjCamoParams(v17, 0, &outLocalParams);
    DObjInitModel(v16, (scr_string_t)0, 0, 0, camoParams, outDObjModel);
    if ( RuntimeData->isWeaponLoaded )
      BG_AddWeaponAttachmentModels(&RuntimeData->weapon, WEAPON_HAND_DEFAULT, 0, 0, 1, 0, outDObjModel, 0x10u, p_modelCount, NULL, camoParams);
    if ( *p_modelCount > 0x10u )
    {
      LODWORD(numModels) = 16;
      LODWORD(maxModels) = *p_modelCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 447, ASSERT_TYPE_ASSERT, "( runtimeData.modelCount ) <= ( CLIENT_MODEL_MAX_XMODELS )", "%s <= %s\n\t%i, %i", "runtimeData.modelCount", "CLIENT_MODEL_MAX_XMODELS", maxModels, numModels) )
        __debugbreak();
    }
  }
  else
  {
    if ( !CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v3, clientModelIdx)->models[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 451, ASSERT_TYPE_ASSERT, "(CG_ClientModel_GetModel( localClientNum, clientModelIdx, 0 ))", (const char *)&queryFormat, "CG_ClientModel_GetModel( localClientNum, clientModelIdx, 0 )") )
      __debugbreak();
    if ( !CG_ClientModel_IsClientModelLoaded((const LocalClientNum_t)v3, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 452, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientModelLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsClientModelLoaded( localClientNum, clientModelIdx )") )
      __debugbreak();
    if ( *p_modelCount > 0x10u )
    {
      LODWORD(maxModels) = *p_modelCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 453, ASSERT_TYPE_ASSERT, "( runtimeData.modelCount ) <= ( CLIENT_MODEL_MAX_XMODELS )", "%s <= %s\n\t%i, %i", "runtimeData.modelCount", "CLIENT_MODEL_MAX_XMODELS", maxModels, 16) )
        __debugbreak();
    }
    v20 = 0;
    if ( *p_modelCount )
    {
      v21 = (const XModel **)RuntimeData;
      attach_names = RuntimeData->attach_names;
      do
      {
        v22 = *v21;
        if ( !*v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 460, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        DObjInitModel(v22, *attach_names++, 0, 0, NULL, &outDObjModel[v20++]);
        ++v21;
      }
      while ( v20 < *p_modelCount );
      LODWORD(v3) = localClientNum;
      v4 = recycledDObj;
    }
    p_weapon = &RuntimeData->weapon;
  }
  if ( v4 )
  {
    if ( v4->tree )
    {
      Com_XAnimFreeSmallTree(v4->tree);
      DObjSetTree(v4, NULL);
    }
    LOBYTE(isUsingDetonator) = 1;
    DObjRealloc(outDObjModel, *p_modelCount, NULL, (char *)v4, handle + 1, (XAnimOwner)isUsingDetonator);
  }
  else
  {
    if ( (unsigned int)(handle - 2117) > 0x17F )
    {
      LODWORD(maxModels) = 2500;
      LODWORD(isUsingCensorshipWorldModel) = 2117;
      LODWORD(isUsingDetonator) = handle;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 481, ASSERT_TYPE_ASSERT, "( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) ) <= ( dobjHandle ) && ( dobjHandle ) <= ( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1 )", "dobjHandle not in [DOBJ_HANDLE_FIRST_CLIENTMODEL, DOBJ_HANDLE_FIRST_CLIENTMODEL + CLIENT_MODEL_MAX_COUNT - 1]\n\t%i not in [%i, %i]", isUsingDetonator, isUsingCensorshipWorldModel, maxModels) )
        __debugbreak();
    }
    v4 = Com_ClientDObjCreate(outDObjModel, *p_modelCount, NULL, handle, (LocalClientNum_t)v3, 0, handle);
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 484, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( p_weapon->weaponIdx )
  {
    DObjSetCamoMaterialOverride(v4, outDObjModel, *p_modelCount);
    if ( RuntimeData->isWeaponLoaded )
    {
      stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v3, NULL, 0, p_weapon);
      DObjSetStickerMaterialOverrides(v4, NULL, &stickerSlots);
      BG_UpdateWeaponHidePartBitsForDObj(v4, p_weapon, 0, 0);
      BG_UpdatedWeaponBones(p_weapon, v4, 0);
    }
  }
  if ( RuntimeData->animationTreeName )
  {
    animations = RuntimeData->animations;
    if ( animations )
    {
      LOBYTE(v23) = 1;
      SmallTree = Com_XAnimCreateSmallTree(animations, v23);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 513, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
      DObjSetTree(v4, SmallTree);
    }
  }
  if ( RuntimeData->animation )
  {
    Tree = DObjGetTree(v4);
    if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 524, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    index = RuntimeData->animationIndex.index;
    XAnimSetCompleteGoalWeight(v4, 0, XANIM_SUBTREE_DEFAULT, index, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
    XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, index, 0.0);
  }
  return 1;
}

/*
==============
CG_ClientModel_InitClientModelSystems
==============
*/
char CG_ClientModel_InitClientModelSystems(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  unsigned __int64 v2; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  CG_ClientModel_RuntimeData *v5; 
  __int64 v7; 
  int v8; 

  v2 = (unsigned int)localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 544, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)v2 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 806, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x20 )
  {
    v8 = 32;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v2 & 0x1F)) & s_CG_ClientModel_SystemInitialized.array[v2 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 545, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v2, clientModelIdx);
  v5 = RuntimeData;
  if ( !RuntimeData->noPhysics && RuntimeData->models[0]->physicsAsset )
    CG_ClientModel_Physics_SetupModel((const LocalClientNum_t)v2, clientModelIdx);
  if ( !v5->noCloth && v5->models[0]->numClothAssets )
    CG_ClientModel_Cloth_SetupModel((const LocalClientNum_t)v2, clientModelIdx);
  return 1;
}

/*
==============
CG_ClientModel_InitClientModels
==============
*/
void CG_ClientModel_InitClientModels(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  unsigned int Count; 

  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 676, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 677, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = 0;
  Count = CG_ClientModel_GetCount(localClientNum);
  if ( Count )
  {
    do
    {
      if ( CG_ClientModel_IsLoaded(localClientNum, v2) )
      {
        if ( CG_ClientModel_InitClientModelDObj(localClientNum, v2, NULL) )
          CG_ClientModel_InitClientModelSystems(localClientNum, v2);
      }
      ++v2;
    }
    while ( v2 < Count );
  }
}

/*
==============
CG_ClientModel_IsClientInitialized
==============
*/
bool CG_ClientModel_IsClientInitialized(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = (unsigned int)localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 806, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x20 )
  {
    v4 = 32;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
      __debugbreak();
  }
  return ((0x80000000 >> (v1 & 0x1F)) & s_CG_ClientModel_SystemInitialized.array[v1 >> 5]) != 0;
}

/*
==============
CG_ClientModel_IsClientModelLoaded
==============
*/
bool CG_ClientModel_IsClientModelLoaded(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v5; 
  __int64 v6; 
  unsigned int Count; 

  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 352, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 353, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount(localClientNum) )
  {
    Count = CG_ClientModel_GetCount(localClientNum);
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v6) = 384;
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 355, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 165, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  return clientModelIdx < cm.mapEnts->numClientModels || clientModelIdx >= (unsigned int)CG_ClientModel_GetClipmapPoolSize() + 256 || CG_ClientModel_IsScriptableLinked(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_IsInitialized
==============
*/
bool CG_ClientModel_IsInitialized(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  unsigned int Count; 

  v2 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1091, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1092, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v6) = 384;
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1093, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return bitarray_base<bitarray<384>>::testBit(&s_CG_ClientModel_Initialized[v2], clientModelIdx);
}

/*
==============
CG_ClientModel_IsLoaded
==============
*/
bool CG_ClientModel_IsLoaded(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  bool IsClientModelLoaded; 
  bool v5; 

  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1258, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  IsClientModelLoaded = CG_ClientModel_IsClientModelLoaded(localClientNum, clientModelIdx);
  v5 = !CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx);
  return IsClientModelLoaded && v5;
}

/*
==============
CG_ClientModel_IsModifiable
==============
*/
bool CG_ClientModel_IsModifiable(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1282, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_CG_ClientModel_Modifiable ) ) + 0 ) )", "localClientNum doesn't index s_CG_ClientModel_Modifiable\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1283, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  return bitarray_base<bitarray<384>>::testBit(&s_CG_ClientModel_Modifiable[v2], clientModelIdx);
}

/*
==============
CG_ClientModel_IsModifiableAssetRequired
==============
*/
bool CG_ClientModel_IsModifiableAssetRequired(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  unsigned int Count; 

  v2 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1823, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1824, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v6) = 384;
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1825, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsModifiable((const LocalClientNum_t)v2, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1826, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  return bitarray_base<bitarray<384>>::testBit(&s_CG_ClientModel_RequiredModifiables[v2], clientModelIdx);
}

/*
==============
CG_ClientModel_IsScriptableLinked
==============
*/
bool CG_ClientModel_IsScriptableLinked(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  unsigned int Count; 

  v2 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 172, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 173, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v6) = 384;
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return bitarray_base<bitarray<384>>::testBit(&s_CG_ClientModel_ScriptableLinked[v2], clientModelIdx);
}

/*
==============
CG_ClientModel_MyChangesInitAndLoad
==============
*/
void CG_ClientModel_MyChangesInitAndLoad(void)
{
  LocalClientNum_t i; 

  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_MyChangesInitAndLoad");
  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
  {
    if ( CG_ClientModel_IsClientInitialized(i) )
      CG_ClientModel_InitClientModels(i);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_MyChangesSaveAndShutdown
==============
*/
void CG_ClientModel_MyChangesSaveAndShutdown(void)
{
  LocalClientNum_t i; 

  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_MyChangesSaveAndShutdown");
  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
  {
    if ( CG_ClientModel_IsClientInitialized(i) )
      CG_ClientModel_ShutdownClientModels(i);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_NoCloth
==============
*/
_BOOL8 CG_ClientModel_NoCloth(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->noCloth;
}

/*
==============
CG_ClientModel_NoPhysics
==============
*/
_BOOL8 CG_ClientModel_NoPhysics(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  return CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->noPhysics;
}

/*
==============
CG_ClientModel_ParseClipmap
==============
*/
void CG_ClientModel_ParseClipmap(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  CM_ClientModel *v3; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  XAnim_s *ClipmapAnims; 
  unsigned __int64 linkPointer; 
  void (__fastcall *v7)(const vec3_t *, vec4_t *); 
  int *v8; 
  XAnimParts *animation; 
  scr_anim_t animationIndex; 
  int v11[4]; 
  bitarray<384> *v12; 
  __int64 v13; 
  int v14[4]; 

  v13 = -2i64;
  v1 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 278, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( cm.mapEnts->numClientModels > 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 281, ASSERT_TYPE_ASSERT, "( cm.mapEnts->numClientModels ) <= ( CLIENT_MODEL_MAX_COUNT )", "%s <= %s\n\t%i, %i", "cm.mapEnts->numClientModels", "CLIENT_MODEL_MAX_COUNT", cm.mapEnts->numClientModels, 384) )
    __debugbreak();
  v2 = 0;
  if ( cm.mapEnts->numClientModels )
  {
    v12 = &s_CG_ClientModel_NeedsPrevPoseReset[v1];
    do
    {
      if ( v2 >= 0x180 )
      {
        animationIndex.0 = ($6CB7272563F4458FB40A4A5E123C4ABA)384;
        LODWORD(animation) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 210, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", animation, animationIndex) )
          __debugbreak();
      }
      if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 165, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
        __debugbreak();
      if ( v2 >= cm.mapEnts->numClientModels )
      {
        animationIndex.0 = ($6CB7272563F4458FB40A4A5E123C4ABA)cm.mapEnts->numClientModels;
        LODWORD(animation) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetClipmapPoolSize() )", "clientModelIdx doesn't index CG_ClientModel_GetClipmapPoolSize()\n\t%i not in [0, %i)", animation, animationIndex) )
          __debugbreak();
      }
      if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 212, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
        __debugbreak();
      v3 = &cm.mapEnts->clientModels[v2];
      if ( !v3->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 286, ASSERT_TYPE_ASSERT, "(clientModel.model)", (const char *)&queryFormat, "clientModel.model") )
        __debugbreak();
      RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v1, v2);
      ClipmapAnims = CG_ClientModel_GetClipmapAnims(v2);
      linkPointer = CG_ClientModel_GetClipmapAnimIndex(v2).linkPointer;
      CG_ClientModel_SetRuntimeDataModel((const LocalClientNum_t)v1, v2, RuntimeData, v3->model);
      CG_ClientModel_SetRuntimeDataAnim((const LocalClientNum_t)v1, v2, RuntimeData, v3->animationTreeName, ClipmapAnims, v3->animation, (scr_anim_t)linkPointer);
      CG_ClientModel_SetRuntimeDataMisc((const LocalClientNum_t)v1, v2, RuntimeData, v3->name, v3->noPhysics, v3->noCloth);
      v11[0] = LODWORD(v3->spawnOrigin.v[0]);
      v11[1] = LODWORD(v3->spawnOrigin.v[1]);
      v11[2] = LODWORD(v3->spawnOrigin.v[2]);
      RuntimeData->pose.angles = v3->spawnAngles;
      if ( v2 >= 0x180 )
      {
        animationIndex.0 = ($6CB7272563F4458FB40A4A5E123C4ABA)384;
        LODWORD(animation) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", animation, animationIndex) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v2 & 0x1F)) & v12->array[(unsigned __int64)v2 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 304, ASSERT_TYPE_ASSERT, "(!s_CG_ClientModel_NeedsPrevPoseReset[localClientNum].testBit( clientModelIdx ))", "%s\n\tShould not have any of those bits set", "!s_CG_ClientModel_NeedsPrevPoseReset[localClientNum].testBit( clientModelIdx )") )
        __debugbreak();
      CG_ClientModel_SetPrevPose((const LocalClientNum_t)v1, v2, &v3->spawnOrigin, &v3->spawnAngles);
      if ( ((v11[0] & 0x7F800000) == 2139095040 || (v11[1] & 0x7F800000) == 2139095040 || (v11[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
        __debugbreak();
      if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 412, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !RuntimeData->pose.origin.Set_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 413, ASSERT_TYPE_ASSERT, "(pose->origin.Set_origin)", (const char *)&queryFormat, "pose->origin.Set_origin") )
        __debugbreak();
      if ( RuntimeData->pose.isEntityPose )
      {
        CG_Pose_ValidateSetEntityPoseOrigin(&RuntimeData->pose);
        RuntimeData->pose.entOriginSet = 1;
        RuntimeData->pose.hasStaleEntityPose = 1;
      }
      v7 = ObfuscateSetFunctionPointer_origin(RuntimeData->pose.origin.Set_origin, &RuntimeData->pose);
      if ( RuntimeData->pose.isPosePrecise )
      {
        v14[0] = (int)(float)(4096.0 * *(float *)v11);
        v14[1] = (int)(float)(4096.0 * *(float *)&v11[1]);
        v14[2] = (int)(float)(4096.0 * *(float *)&v11[2]);
        v8 = v14;
      }
      else
      {
        v8 = v11;
      }
      v7((const vec3_t *)v8, &RuntimeData->pose.origin.origin.origin);
      RuntimeData->pose.actualOrigin.v[0] = *(float *)v11;
      RuntimeData->pose.actualOrigin.v[1] = *(float *)&v11[1];
      RuntimeData->pose.actualOrigin.v[2] = *(float *)&v11[2];
      memset(v11, 0, 0xCui64);
      ++v2;
    }
    while ( v2 < cm.mapEnts->numClientModels );
  }
}

/*
==============
CG_ClientModel_ResetPrevPose
==============
*/
void CG_ClientModel_ResetPrevPose(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bitarray<384> *v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v12; 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  int v26[6]; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_ResetPrevPose");
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1030, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = &s_CG_ClientModel_NeedsPrevPoseReset[v1];
  LODWORD(v3) = 0;
  v4 = v2->array[0];
  while ( v4 )
  {
LABEL_8:
    v5 = __lzcnt(v4);
    if ( v5 >= 0x20 )
    {
      LODWORD(v25) = 32;
      LODWORD(v24) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v5);
    RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v1, v5 + 32 * v3);
    p_pose = &RuntimeData->pose;
    if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v26);
    if ( p_pose->isPosePrecise )
    {
      _XMM0 = (unsigned int)v26[0];
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v12;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      v26[0] = _XMM2;
      _XMM0 = (unsigned int)v26[1];
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v12;
      __asm { vcvtsd2ss xmm3, xmm1, xmm1 }
      v26[1] = _XMM3;
      _XMM0 = (unsigned int)v26[2];
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v12;
      __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
      v26[2] = _XMM4;
    }
    else
    {
      LODWORD(_XMM4) = v26[2];
      LODWORD(_XMM3) = v26[1];
      LODWORD(_XMM2) = v26[0];
    }
    if ( ((_XMM2 & 0x7F800000) == 2139095040 || (_XMM3 & 0x7F800000) == 2139095040 || (_XMM4 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
      __debugbreak();
    if ( !p_pose->prevOrigin.Set_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 595, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Set_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Set_prevOrigin") )
      __debugbreak();
    Origin = ObfuscateSetFunctionPointer_prevOrigin(p_pose->prevOrigin.Set_prevOrigin, p_pose);
    Origin((const vec3_t *)v26, &p_pose->prevOrigin.prevOrigin);
    p_pose->prevAngles.v[0] = p_pose->angles.v[0];
    p_pose->prevAngles.v[1] = p_pose->angles.v[1];
    p_pose->prevAngles.v[2] = p_pose->angles.v[2];
    memset(v26, 0, 0xCui64);
  }
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0xC )
      break;
    v4 = v2->array[v3];
    if ( v4 )
      goto LABEL_8;
  }
  v23 = v1;
  *(_QWORD *)s_CG_ClientModel_NeedsPrevPoseReset[v23].array = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v23].array[2] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v23].array[4] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v23].array[6] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v23].array[8] = 0i64;
  *(_QWORD *)&s_CG_ClientModel_NeedsPrevPoseReset[v23].array[10] = 0i64;
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_ScriptableLink
==============
*/
void CG_ClientModel_ScriptableLink(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *origin, const vec3_t *angles, const XModel *model, scr_string_t animationTreeName, XAnim_s *animations, const XAnimParts *animation, scr_anim_t animationIndex)
{
  __int64 v9; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  cpose_t *p_pose; 
  CG_ClientModel_RuntimeData *v15; 
  XAnimParts *v16; 
  unsigned int Count; 

  v9 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1887, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v9) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v9);
    LODWORD(v16) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1888, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v16, Count) )
      __debugbreak();
  }
  if ( CG_ClientModel_IsScriptableLinked((const LocalClientNum_t)v9, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1889, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v9, clientModelIdx);
  p_pose = &RuntimeData->pose;
  if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1892, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v15 = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v9, clientModelIdx);
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_Modifiable[v9], clientModelIdx);
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_ScriptableLinked[v9], clientModelIdx);
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_RequiredModifiables[v9], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_UnwantedModifiables[v9], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_StreamingWeapons[v9], clientModelIdx);
  CG_ClientModel_SetRuntimeDataModel((const LocalClientNum_t)v9, clientModelIdx, v15, model);
  CG_ClientModel_SetRuntimeDataAnim((const LocalClientNum_t)v9, clientModelIdx, v15, animationTreeName, animations, animation, animationIndex);
  CG_ClientModel_SetRuntimeDataMisc((const LocalClientNum_t)v9, clientModelIdx, v15, (scr_string_t)0, 1, 1);
  CG_SetPoseOrigin(p_pose, origin);
  p_pose->angles.v[0] = angles->v[0];
  p_pose->angles.v[1] = angles->v[1];
  p_pose->angles.v[2] = angles->v[2];
  CG_ClientModel_SetPrevPose((const LocalClientNum_t)v9, clientModelIdx, origin, angles);
}

/*
==============
CG_ClientModel_ScriptableUnlink
==============
*/
void CG_ClientModel_ScriptableUnlink(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int Count; 

  v2 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1917, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v5) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1918, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v5, Count) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsScriptableLinked((const LocalClientNum_t)v2, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1919, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( !CG_ClientModel_IsModifiableAssetRequired((const LocalClientNum_t)v2, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1920, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_IsInitialized((const LocalClientNum_t)v2, clientModelIdx) && CG_ClientModel_ShutdownClientModelSystems((const LocalClientNum_t)v2, clientModelIdx) )
    CG_ClientModel_ShutdownClientModelDObj((const LocalClientNum_t)v2, clientModelIdx);
  v4 = v2;
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_Modifiable[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_ScriptableLinked[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_RequiredModifiables[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_StreamingWeapons[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_NeedsPrevPoseReset[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_cg_ClientModel_PrevOriginValid[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_cg_ClientModel_PrevAnglesValid[v4], clientModelIdx);
}

/*
==============
CG_ClientModel_SetAngles
==============
*/
void CG_ClientModel_SetAngles(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *angles)
{
  __int64 v3; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  float *p_eType; 
  __int64 v8; 
  bitarray_base<bitarray<384> > *v9; 

  v3 = localClientNum;
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  p_eType = (float *)&RuntimeData->pose.eType;
  if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1697, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v8 = v3;
  v9 = &s_cg_ClientModel_PrevAnglesValid[v3];
  if ( !bitarray_base<bitarray<384>>::testBit(v9, clientModelIdx) )
  {
    bitarray_base<bitarray<384>>::setBit(v9, clientModelIdx);
    p_eType[30] = angles->v[0];
    p_eType[31] = angles->v[1];
    p_eType[32] = angles->v[2];
  }
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_NeedsPrevPoseReset[v8], clientModelIdx);
  p_eType[18] = angles->v[0];
  p_eType[19] = angles->v[1];
  p_eType[20] = angles->v[2];
}

/*
==============
CG_ClientModel_SetAnimation
==============
*/
void CG_ClientModel_SetAnimation(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const XAnimParts *animation, scr_anim_t animationIndex)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  char v9; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1485, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx) )
  {
    v9 = 1;
    if ( CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx) )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v9 = 0;
  }
  RuntimeData->animation = animation;
  RuntimeData->animationIndex = animationIndex;
  if ( v9 )
  {
    if ( CG_ClientModel_InitClientModelDObj(localClientNum, clientModelIdx, NULL) )
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
  }
}

/*
==============
CG_ClientModel_SetAnimation
==============
*/
void CG_ClientModel_SetAnimation(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, scr_string_t animationTreeName, XAnim_s *animations, const XAnimParts *animation, scr_anim_t animationIndex)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  char v11; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1457, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx) )
  {
    v11 = 1;
    if ( CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx) )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v11 = 0;
  }
  CG_ClientModel_SetRuntimeDataAnim(localClientNum, clientModelIdx, RuntimeData, animationTreeName, animations, animation, animationIndex);
  if ( v11 )
  {
    if ( CG_ClientModel_InitClientModelDObj(localClientNum, clientModelIdx, NULL) )
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
  }
}

/*
==============
CG_ClientModel_SetHudOutline
==============
*/
void CG_ClientModel_SetHudOutline(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool enabled, int colorIdx, bool fill)
{
  unsigned int HudOutlineColor; 
  const dvar_t *v9; 
  unsigned int v10; 
  int value; 
  CG_ClientModel_RuntimeData *RuntimeData; 

  HudOutlineColor = CG_Utils_GetHudOutlineColor(colorIdx + 1);
  v9 = DVARFLT_r_hudOutlineWidth;
  v10 = HudOutlineColor;
  if ( !DVARFLT_r_hudOutlineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = (int)v9->current.value;
  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1538, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  RuntimeData->hudOutlineEnabled = enabled;
  RuntimeData->hudOutlineLineWidth = value;
  RuntimeData->hudOutlineRenderMode = 0;
  RuntimeData->hudOutlineColor = v10;
  RuntimeData->hudOutlineFill = fill;
}

/*
==============
CG_ClientModel_SetHudOutline_CustomColor
==============
*/
void CG_ClientModel_SetHudOutline_CustomColor(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool enabled, unsigned int colorValue, bool fill, unsigned __int8 renderMode, unsigned __int8 lineWidth)
{
  CG_ClientModel_RuntimeData *RuntimeData; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1538, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  RuntimeData->hudOutlineRenderMode = renderMode;
  RuntimeData->hudOutlineLineWidth = lineWidth;
  RuntimeData->hudOutlineEnabled = enabled;
  RuntimeData->hudOutlineColor = colorValue;
  RuntimeData->hudOutlineFill = fill;
}

/*
==============
CG_ClientModel_SetModel
==============
*/
void CG_ClientModel_SetModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const XModel *model)
{
  __int128 v3; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  bool v8; 
  const DObj *DObj; 
  DObj *v10; 
  char v11; 
  unsigned int v12; 
  DObjPartBits *p_partBits; 
  DObjPartBits partBits; 
  __int128 v15; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1292, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_IsScriptableLinked(localClientNum, clientModelIdx) && !CG_ClientModel_IsModifiableAssetRequired(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1293, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx ) || CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx ) || CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  v8 = CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx);
  DObj = CG_ClientModel_GetDObj(localClientNum, clientModelIdx);
  v10 = (DObj *)DObj;
  if ( v8 )
  {
    if ( model && DObj )
    {
      DObjLock(DObj);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx);
    if ( !model && v10 )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v11 = 0;
  }
  CG_ClientModel_SetRuntimeDataModel(localClientNum, clientModelIdx, RuntimeData, model);
  if ( model )
  {
    if ( !CG_ClientModel_IsScriptableLinked(localClientNum, clientModelIdx) || CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) )
    {
      if ( !v8 )
        goto LABEL_35;
    }
    else if ( !v8 && v10 )
    {
      DObjLock(v10);
    }
    if ( CG_ClientModel_InitClientModelDObj(localClientNum, clientModelIdx, v10) )
    {
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
      if ( v11 )
      {
        v12 = 0;
        v15 = v3;
        p_partBits = &partBits;
        do
        {
          *(_OWORD *)p_partBits->array = _xmm_ffffffffffffffffffffffffffffffff;
          p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
          ++v12;
        }
        while ( v12 < 2 );
        CL_Pose_DObjCreateSkelForBones(v10, &partBits);
        v10->skel.timeStamp = 0;
      }
    }
    if ( v10 )
    {
      DObjUnlock(v10);
LABEL_35:
      if ( v10 )
      {
        if ( v10 != CG_ClientModel_GetDObj(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1371, ASSERT_TYPE_ASSERT, "(dobj == CG_ClientModel_GetDObj( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "dobj == CG_ClientModel_GetDObj( localClientNum, clientModelIdx )") )
          __debugbreak();
        if ( !v10->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1373, ASSERT_TYPE_ASSERT, "(dobj->models)", (const char *)&queryFormat, "dobj->models") )
          __debugbreak();
        if ( !*v10->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1374, ASSERT_TYPE_ASSERT, "(dobj->models[0])", (const char *)&queryFormat, "dobj->models[0]") )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_ClientModel_SetModifiable
==============
*/
void CG_ClientModel_SetModifiable(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const bool modifiable)
{
  __int64 v3; 
  __int64 v6; 
  bitarray_base<bitarray<384> > *v7; 
  bitarray_base<bitarray<384> > *v8; 

  v3 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1272, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v6 = v3;
  v7 = &s_CG_ClientModel_Modifiable[v6];
  if ( modifiable )
    bitarray_base<bitarray<384>>::setBit(v7, clientModelIdx);
  else
    bitarray_base<bitarray<384>>::resetBit(v7, clientModelIdx);
  v8 = &s_CG_ClientModel_UnwantedModifiables[v6];
  if ( modifiable )
    bitarray_base<bitarray<384>>::setBit(v8, clientModelIdx);
  else
    bitarray_base<bitarray<384>>::resetBit(v8, clientModelIdx);
}

/*
==============
CG_ClientModel_SetNoCloth
==============
*/
void CG_ClientModel_SetNoCloth(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool noCloth)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  char v7; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1582, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx) )
  {
    v7 = 1;
    if ( CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx) )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v7 = 0;
  }
  RuntimeData->noCloth = noCloth;
  if ( v7 )
  {
    if ( CG_ClientModel_InitClientModelDObj(localClientNum, clientModelIdx, NULL) )
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
  }
}

/*
==============
CG_ClientModel_SetNoPhysics
==============
*/
void CG_ClientModel_SetNoPhysics(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, bool noPhysics)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  char v7; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1554, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx) )
  {
    v7 = 1;
    if ( CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx) )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v7 = 0;
  }
  RuntimeData->noPhysics = noPhysics;
  if ( v7 )
  {
    if ( CG_ClientModel_InitClientModelDObj(localClientNum, clientModelIdx, NULL) )
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
  }
}

/*
==============
CG_ClientModel_SetOrigin
==============
*/
void CG_ClientModel_SetOrigin(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *origin)
{
  __int64 v3; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  cpose_t *p_pose; 
  __int64 v8; 

  v3 = localClientNum;
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  p_pose = &RuntimeData->pose;
  if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1652, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v8 = v3;
  if ( !bitarray_base<bitarray<384>>::testBit(&s_cg_ClientModel_PrevOriginValid[v8], clientModelIdx) )
  {
    bitarray_base<bitarray<384>>::setBit(&s_cg_ClientModel_PrevOriginValid[v8], clientModelIdx);
    CG_SetPrevPoseOrigin(p_pose, origin);
  }
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_NeedsPrevPoseReset[v8], clientModelIdx);
  CG_SetPoseOrigin(p_pose, origin);
}

/*
==============
CG_ClientModel_SetParticleSystemHandle
==============
*/
void CG_ClientModel_SetParticleSystemHandle(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const ParticleSystemHandle handle)
{
  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1610, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx)->particleSystemHandle = handle;
}

/*
==============
CG_ClientModel_SetPrevPose
==============
*/
void CG_ClientModel_SetPrevPose(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const vec3_t *origin, const vec3_t *angles)
{
  __int64 v4; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  cpose_t *p_pose; 
  unsigned int v10; 

  v4 = localClientNum;
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  p_pose = &RuntimeData->pose;
  if ( RuntimeData == (CG_ClientModel_RuntimeData *)-304i64 )
  {
    v10 = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1633, ASSERT_TYPE_ASSERT, "( ( pose ) )", "( clientModelIdx ) = %u", v10) )
      __debugbreak();
  }
  CG_SetPrevPoseOrigin(p_pose, origin);
  p_pose->prevAngles.v[0] = angles->v[0];
  p_pose->prevAngles.v[1] = angles->v[1];
  p_pose->prevAngles.v[2] = angles->v[2];
  bitarray_base<bitarray<384>>::setBit(&s_cg_ClientModel_PrevOriginValid[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::setBit(&s_cg_ClientModel_PrevAnglesValid[v4], clientModelIdx);
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_NeedsPrevPoseReset[v4], clientModelIdx);
}

/*
==============
CG_ClientModel_SetRequiredModifiables
==============
*/
void CG_ClientModel_SetRequiredModifiables(const LocalClientNum_t localClientNum, const unsigned int *clientModelIndices, const unsigned int numClientModelIndices)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  bitarray<384> *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  bitarray<384> *v17; 
  __int64 v18; 
  bitarray<384> *v19; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 

  v3 = localClientNum;
  v5 = numClientModelIndices;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1796, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v6 = v3;
  v7 = 48 * v3 + 4;
  v8 = 48 * v3 + 8;
  v9 = 48 * v3 + 12;
  v10 = 48 * v3 + 16;
  v11 = 48 * v3 + 20;
  v12 = 48 * v3 + 24;
  v13 = v3;
  s_CG_ClientModel_RequiredModifiables[v3].array[0] = s_CG_ClientModel_ScriptableLinked[v3].array[0];
  v14 = &s_CG_ClientModel_RequiredModifiables[v3];
  v14->array[1] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v7);
  v14->array[2] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v8);
  v14->array[3] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v9);
  v14->array[4] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v10);
  v14->array[5] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v11);
  v14->array[6] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v12);
  v26 = 48 * v3 + 28;
  v14->array[7] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v26);
  v27 = 48 * v3 + 32;
  v14->array[8] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v27);
  v28 = 48 * v3 + 36;
  v14->array[9] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v28);
  v29 = 48 * v3 + 40;
  v14->array[10] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v29);
  v30 = 48 * v3 + 44;
  v14->array[11] = *(unsigned int *)((char *)s_CG_ClientModel_ScriptableLinked[0].array + v30);
  if ( (_DWORD)v5 )
  {
    v15 = v5;
    do
    {
      v16 = *clientModelIndices;
      if ( (unsigned int)v16 >= CG_ClientModel_GetCount((const LocalClientNum_t)v3) )
      {
        LODWORD(v23) = CG_ClientModel_GetCount((const LocalClientNum_t)v3);
        LODWORD(v22) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1806, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      if ( (unsigned int)v16 >= 0x180 )
      {
        LODWORD(v23) = 384;
        LODWORD(v22) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1807, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      if ( !CG_ClientModel_IsModifiable((const LocalClientNum_t)v3, v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1808, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
        __debugbreak();
      if ( (unsigned int)v16 >= 0x180 )
      {
        LODWORD(v25) = 384;
        LODWORD(v24) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v24, v25) )
          __debugbreak();
      }
      ++clientModelIndices;
      v14->array[v16 >> 5] |= 0x80000000 >> (v16 & 0x1F);
      --v15;
    }
    while ( v15 );
    v13 = v3;
    v6 = v3;
    v7 = 48 * v3 + 4;
    v8 = 48 * v3 + 8;
    v9 = 48 * v3 + 12;
    v10 = 48 * v3 + 16;
    v11 = 48 * v3 + 20;
    v12 = 48 * v3 + 24;
  }
  v17 = &s_CG_ClientModel_UnwantedModifiables[v13];
  v17->array[0] = s_CG_ClientModel_RequiredModifiables[v6].array[0];
  v17->array[1] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v7);
  v17->array[2] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v8);
  v17->array[3] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v9);
  v17->array[4] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v10);
  v17->array[5] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v11);
  v17->array[6] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v12);
  v17->array[7] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v26);
  v17->array[8] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v27);
  v17->array[9] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v28);
  v17->array[10] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v29);
  v18 = 3i64;
  v17->array[11] = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v30);
  v19 = &s_CG_ClientModel_UnwantedModifiables[v13];
  do
  {
    _XMM0 = *(_OWORD *)v19->array;
    v19 = (bitarray<384> *)((char *)v19 + 16);
    __asm { vpandn  xmm1, xmm0, xmm2 }
    *(_OWORD *)&v19[-1].array[8] = _XMM1;
    --v18;
  }
  while ( v18 );
  v17->array[0] &= s_CG_ClientModel_Modifiable[v6].array[0];
  v17->array[1] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v7);
  v17->array[2] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v8);
  v17->array[3] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v9);
  v17->array[4] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v10);
  v17->array[5] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v11);
  v17->array[6] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v12);
  v17->array[7] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v26);
  v17->array[8] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v27);
  v17->array[9] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v28);
  v17->array[10] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v29);
  v17->array[11] &= *(unsigned int *)((char *)s_CG_ClientModel_Modifiable[0].array + v30);
}

/*
==============
CG_ClientModel_SetRuntimeDataAnim
==============
*/
void CG_ClientModel_SetRuntimeDataAnim(const LocalClientNum_t localClientNum, unsigned int clientModelIdx, CG_ClientModel_RuntimeData *runtimeData, scr_string_t animationTreeName, XAnim_s *animations, const XAnimParts *animation, scr_anim_t animationIndex)
{
  unsigned __int64 v7; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v7 = (unsigned int)localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 806, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x20 )
  {
    v13 = 32;
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v13) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v7 & 0x1F)) & s_CG_ClientModel_SystemInitialized.array[v7 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 254, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v12) = 384;
    LODWORD(v11) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  runtimeData->animations = animations;
  runtimeData->animation = animation;
  runtimeData->animationTreeName = animationTreeName;
  runtimeData->animationIndex = animationIndex;
}

/*
==============
CG_ClientModel_SetRuntimeDataMisc
==============
*/
void CG_ClientModel_SetRuntimeDataMisc(const LocalClientNum_t localClientNum, unsigned int clientModelIdx, CG_ClientModel_RuntimeData *runtimeData, scr_string_t name, bool noPhysics, bool noCloth)
{
  unsigned __int64 v6; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  v6 = (unsigned int)localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 806, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x20 )
  {
    v12 = 32;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v12) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v6 & 0x1F)) & s_CG_ClientModel_SystemInitialized.array[v6 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 266, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v11) = 384;
    LODWORD(v10) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  runtimeData->noPhysics = noPhysics;
  runtimeData->name = name;
  runtimeData->noCloth = noCloth;
}

/*
==============
CG_ClientModel_SetRuntimeDataModel
==============
*/
void CG_ClientModel_SetRuntimeDataModel(const LocalClientNum_t localClientNum, unsigned int clientModelIdx, CG_ClientModel_RuntimeData *runtimeData, const XModel *model)
{
  __int64 v4; 
  const dvar_t *v8; 
  __int64 v9; 

  v4 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 221, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v9) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v9, 384) )
      __debugbreak();
  }
  runtimeData->models[0] = model;
  runtimeData->attach_names[0] = 0;
  runtimeData->modelCount = model != NULL;
  runtimeData->weapon = NULL_WEAPON;
  runtimeData->isWeaponLoaded = 0;
  runtimeData->hudOutlineEnabled = 0;
  v8 = DVARFLT_r_hudOutlineWidth;
  if ( !DVARFLT_r_hudOutlineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  runtimeData->hudOutlineLineWidth = (int)v8->current.value;
  runtimeData->hudOutlineRenderMode = 0;
  bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_StreamingWeapons[v4], clientModelIdx);
}

/*
==============
CG_ClientModel_SetRuntimeDataWeapon
==============
*/
void CG_ClientModel_SetRuntimeDataWeapon(const LocalClientNum_t localClientNum, unsigned int clientModelIdx, CG_ClientModel_RuntimeData *runtimeData, const Weapon *weapon)
{
  __int64 v4; 
  CgWeaponSystem *WeaponSystem; 
  bool v9; 
  const XModel *WeaponModels; 
  const dvar_t *v11; 
  __int64 isUsingDetonator; 
  int isUsingCensorshipWorldModel; 

  v4 = localClientNum;
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 238, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= 0x180 )
  {
    isUsingCensorshipWorldModel = 384;
    LODWORD(isUsingDetonator) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 193, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 194, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
    __debugbreak();
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v4);
  v9 = WeaponSystem->IsWeaponWorldModelLoaded(WeaponSystem, weapon);
  runtimeData->isWeaponLoaded = v9;
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, weapon, 0, !v9, 0, 0, 0);
  runtimeData->models[0] = WeaponModels;
  runtimeData->attach_names[0] = 0;
  runtimeData->modelCount = WeaponModels != NULL;
  *(__m256i *)&runtimeData->weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)&runtimeData->weapon.attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(double *)&runtimeData->weapon.attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
  *(_DWORD *)&runtimeData->weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
  runtimeData->hudOutlineEnabled = 0;
  v11 = DVARFLT_r_hudOutlineWidth;
  if ( !DVARFLT_r_hudOutlineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  runtimeData->hudOutlineLineWidth = (int)v11->current.value;
  runtimeData->hudOutlineRenderMode = 0;
  bitarray_base<bitarray<384>>::setBit(&s_CG_ClientModel_StreamingWeapons[v4], clientModelIdx);
}

/*
==============
CG_ClientModel_SetWeapon
==============
*/
void CG_ClientModel_SetWeapon(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const Weapon *weapon)
{
  CG_ClientModel_RuntimeData *RuntimeData; 
  char v7; 
  DObj *DObj; 
  DObj *v9; 
  unsigned int v10; 
  LocalClientNum_t v11; 
  DObj *v12; 

  if ( !CG_ClientModel_IsModifiable(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1416, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_IsScriptableLinked(localClientNum, clientModelIdx) && !CG_ClientModel_IsModifiableAssetRequired(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1417, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx ) || CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_IsScriptableLinked( localClientNum, clientModelIdx ) || CG_ClientModel_IsModifiableAssetRequired( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1418, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) || CG_ClientModel_AreSubAssetsLoading(localClientNum, clientModelIdx) )
  {
    v7 = 1;
    if ( CG_ClientModel_ShutdownClientModelSystems(localClientNum, clientModelIdx) )
      CG_ClientModel_ShutdownClientModelDObj(localClientNum, clientModelIdx);
  }
  else
  {
    v7 = 0;
  }
  CG_ClientModel_SetRuntimeDataWeapon(localClientNum, clientModelIdx, RuntimeData, weapon);
  DObj = CG_ClientModel_GetDObj(localClientNum, clientModelIdx);
  v9 = DObj;
  v10 = clientModelIdx;
  v11 = localClientNum;
  if ( v7 )
  {
    v12 = DObj;
LABEL_24:
    if ( CG_ClientModel_InitClientModelDObj(v11, v10, v12) )
      CG_ClientModel_InitClientModelSystems(localClientNum, clientModelIdx);
    return;
  }
  if ( CG_ClientModel_IsScriptableLinked(localClientNum, clientModelIdx) && !CG_ClientModel_IsInitialized(localClientNum, clientModelIdx) )
  {
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1447, ASSERT_TYPE_ASSERT, "(dobj == nullptr)", (const char *)&queryFormat, "dobj == nullptr") )
      __debugbreak();
    v12 = NULL;
    v10 = clientModelIdx;
    v11 = localClientNum;
    goto LABEL_24;
  }
}

/*
==============
CG_ClientModel_SetupStreamingRequest
==============
*/
__int64 CG_ClientModel_SetupStreamingRequest(const LocalClientNum_t localClientNum, const ClStreamingRequest **requests, const unsigned int maxRequestCount, ClStreamingRequest *requestPool, unsigned int requestIndex)
{
  __int64 v5; 
  unsigned int v9; 
  bitarray<384> *v10; 
  unsigned int v11; 
  unsigned int v12; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  const char *const *p_name; 
  __int64 v15; 
  ClStreamingRequest *v16; 
  AssetStreamingPriority v17; 
  __int64 v19; 
  __int64 v20; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1716, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1717, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( !requests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1718, ASSERT_TYPE_ASSERT, "(requests)", (const char *)&queryFormat, "requests") )
    __debugbreak();
  if ( !requestPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1719, ASSERT_TYPE_ASSERT, "(requestPool)", (const char *)&queryFormat, "requestPool") )
    __debugbreak();
  v9 = requestIndex;
  if ( requestIndex > maxRequestCount )
  {
    LODWORD(v19) = requestIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1720, ASSERT_TYPE_ASSERT, "( requestIndex ) <= ( maxRequestCount )", "requestIndex not in [0, maxRequestCount]\n\t%u not in [0, %u]", v19, maxRequestCount) )
      __debugbreak();
  }
  v10 = &s_CG_ClientModel_RequiredModifiables[v5];
  LODWORD(v5) = 0;
  v11 = v10->array[0];
  while ( v11 )
  {
LABEL_20:
    v12 = __lzcnt(v11);
    if ( v12 >= 0x20 )
    {
      LODWORD(v20) = 32;
      LODWORD(v19) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( (v11 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v11 &= ~(0x80000000 >> v12);
    RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, v12 + 32 * v5);
    if ( !RuntimeData->weapon.weaponIdx )
    {
      p_name = &RuntimeData->models[0]->name;
      if ( !RuntimeData->models[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1743, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( v9 >= maxRequestCount )
        return v9;
      v15 = v9++;
      v16 = &requestPool[v15];
      requests[v15] = v16;
      v17.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_NONE, v9, ASSET_STREAMING_REQUEST_FLAGS_UI).raw;
      CL_Streaming_GetSingleModelRequest(*p_name, v17, v16);
    }
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0xC )
      return v9;
    v11 = v10->array[v5];
    if ( v11 )
      goto LABEL_20;
  }
}

/*
==============
CG_ClientModel_ShutdownClient
==============
*/
void CG_ClientModel_ShutdownClient(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  int v2; 
  int v3; 
  int v4; 

  v1 = (unsigned int)localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Shutdown");
  if ( (unsigned int)v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 780, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) )
  {
    v2 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 781, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", "%s\n\tCG_ClientModel: Trying to Shutdown when not initialized for localclientnum %i", "CG_ClientModel_IsClientInitialized( localClientNum )", v2) )
      __debugbreak();
  }
  CG_ClientModel_ShutdownClientModels((const LocalClientNum_t)v1);
  CG_ClientModel_Cloth_Shutdown((const LocalClientNum_t)v1);
  CG_ClientModel_Physics_Shutdown((const LocalClientNum_t)v1);
  s_CG_ClientModel_clientModelCounts[(int)v1] = 0i64;
  if ( (unsigned int)v1 >= 0x20 )
  {
    v4 = 32;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, v4) )
      __debugbreak();
  }
  s_CG_ClientModel_SystemInitialized.array[v1 >> 5] &= ~(0x80000000 >> (v1 & 0x1F));
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_ShutdownClientModelDObj
==============
*/
void CG_ClientModel_ShutdownClientModelDObj(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  const DObj *DObj; 
  DObj *v5; 
  XAnimTree *Tree; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int Count; 

  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 629, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 630, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount(localClientNum) )
  {
    Count = CG_ClientModel_GetCount(localClientNum);
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 631, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v8, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v9) = 384;
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 632, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientModelLoaded(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 633, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientModelLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsClientModelLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  DObj = CG_ClientModel_GetDObj(localClientNum, clientModelIdx);
  v5 = (DObj *)DObj;
  if ( DObj )
  {
    Tree = DObjGetTree(DObj);
    if ( Tree )
    {
      Com_XAnimFreeSmallTree(Tree);
      DObjSetTree(v5, NULL);
    }
    v7 = clientModelIdx + 2117;
    if ( (unsigned int)(v7 - 2117) > 0x17F )
    {
      LODWORD(v9) = 2117;
      LODWORD(v8) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 658, ASSERT_TYPE_ASSERT, "( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) ) <= ( dobjHandle ) && ( dobjHandle ) <= ( ((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1 )", "dobjHandle not in [DOBJ_HANDLE_FIRST_CLIENTMODEL, DOBJ_HANDLE_FIRST_CLIENTMODEL + CLIENT_MODEL_MAX_COUNT - 1]\n\t%i not in [%i, %i]", v8, v9, 2500) )
        __debugbreak();
    }
    Com_SafeClientDObjFree(v7, localClientNum);
  }
  else
  {
    LODWORD(v8) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 641, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ClientModel attempted to shutdown a null dobj for index %d", v8) )
      __debugbreak();
  }
}

/*
==============
CG_ClientModel_ShutdownClientModelSystems
==============
*/
char CG_ClientModel_ShutdownClientModelSystems(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  const XModel *v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int Count; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 580, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 581, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
  {
    Count = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
    LODWORD(v7) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 582, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v7, Count) )
      __debugbreak();
  }
  if ( clientModelIdx >= 0x180 )
  {
    LODWORD(v8) = 384;
    LODWORD(v7) = clientModelIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 583, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CLIENT_MODEL_MAX_COUNT )", "clientModelIdx doesn't index CLIENT_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !CG_ClientModel_IsClientModelLoaded((const LocalClientNum_t)v2, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 584, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientModelLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsClientModelLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( !CG_ClientModel_IsInitialized((const LocalClientNum_t)v2, clientModelIdx) && !CG_ClientModel_AreSubAssetsLoading((const LocalClientNum_t)v2, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 585, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsInitialized( localClientNum, clientModelIdx ) || CG_ClientModel_AreSubAssetsLoading( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsInitialized( localClientNum, clientModelIdx ) || CG_ClientModel_AreSubAssetsLoading( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_AreSubAssetsLoading((const LocalClientNum_t)v2, clientModelIdx) )
  {
    if ( !CG_ClientModel_IsModifiable((const LocalClientNum_t)v2, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 590, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsModifiable( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsModifiable( localClientNum, clientModelIdx )") )
      __debugbreak();
    if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 341, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
      __debugbreak();
    if ( clientModelIdx >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) )
    {
      LODWORD(v8) = CG_ClientModel_GetCount((const LocalClientNum_t)v2);
      LODWORD(v7) = clientModelIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 342, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( CG_ClientModel_GetCount( localClientNum ) )", "clientModelIdx doesn't index CG_ClientModel_GetCount( localClientNum )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_SubAssetsLoadingState[v2], clientModelIdx);
    return 0;
  }
  else
  {
    RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v2, clientModelIdx);
    bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_Initialized[v2], clientModelIdx);
    bitarray_base<bitarray<384>>::resetBit(&s_CG_ClientModel_NeedsPrevPoseReset[v2], clientModelIdx);
    bitarray_base<bitarray<384>>::resetBit(&s_cg_ClientModel_PrevOriginValid[v2], clientModelIdx);
    bitarray_base<bitarray<384>>::resetBit(&s_cg_ClientModel_PrevAnglesValid[v2], clientModelIdx);
    v6 = RuntimeData->models[0];
    if ( RuntimeData->models[0] && !RuntimeData->noCloth && RuntimeData->models[0]->numClothAssets )
    {
      CG_ClientModel_Cloth_ShutdownModel((const LocalClientNum_t)v2, clientModelIdx);
      v6 = RuntimeData->models[0];
    }
    if ( v6 && !RuntimeData->noPhysics && v6->physicsAsset )
      CG_ClientModel_Physics_ShutdownModel((const LocalClientNum_t)v2, clientModelIdx);
    return 1;
  }
}

/*
==============
CG_ClientModel_ShutdownClientModels
==============
*/
void CG_ClientModel_ShutdownClientModels(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned int Count; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 698, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 699, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v2 = 0;
  Count = CG_ClientModel_GetCount((const LocalClientNum_t)v1);
  if ( Count )
  {
    v4 = 0i64;
    do
    {
      if ( CG_ClientModel_IsInitialized((const LocalClientNum_t)v1, v2) && CG_ClientModel_ShutdownClientModelSystems((const LocalClientNum_t)v1, v2) )
        CG_ClientModel_ShutdownClientModelDObj((const LocalClientNum_t)v1, v2);
      if ( CG_ClientModel_IsScriptableLinked((const LocalClientNum_t)v1, v2) )
      {
        if ( v2 >= 0x180 )
        {
          LODWORD(v8) = 384;
          LODWORD(v7) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, v8) )
            __debugbreak();
        }
        v5 = ~(0x80000000 >> (v2 & 0x1F));
        v6 = v4 >> 5;
        s_CG_ClientModel_ScriptableLinked[v1].array[v6] &= v5;
        if ( v2 >= 0x180 )
        {
          LODWORD(v8) = 384;
          LODWORD(v7) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, v8) )
            __debugbreak();
        }
        s_CG_ClientModel_RequiredModifiables[v1].array[v6] &= v5;
      }
      ++v2;
      ++v4;
    }
    while ( v2 < Count );
  }
}

/*
==============
CG_ClientModel_SyncLoaded
==============
*/
void CG_ClientModel_SyncLoaded(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v7; 
  unsigned int *v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int128 *v20; 
  unsigned int *v28; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  __int64 v40; 
  unsigned int v41; 
  unsigned int v42; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  CgWeaponSystem *WeaponSystem; 
  DObj *DObj; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int128 v51; 
  __int128 v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_SyncLoaded");
  if ( (unsigned int)v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 948, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 949, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  v50 = 48 * v1 + 16;
  _XMM0 = s_CG_ClientModel_UnwantedModifiables[v1].array[0];
  __asm { vpinsrd xmm0, xmm0, dword ptr [r11+r12+1139E580h], 1 }
  LODWORD(v51) = s_CG_ClientModel_Initialized[v1].array[0];
  __asm
  {
    vpinsrd xmm0, xmm0, dword ptr [r15+r12+1139E580h], 2
    vpinsrd xmm0, xmm0, dword ptr rva s_CG_ClientModel_UnwantedModifiables.array[r12+r13], 3
  }
  DWORD1(v51) = s_CG_ClientModel_Initialized[v1].array[1];
  DWORD2(v51) = s_CG_ClientModel_Initialized[v1].array[2];
  HIDWORD(v51) = s_CG_ClientModel_Initialized[v1].array[3];
  __asm { vpand   xmm0, xmm0, [rbp+57h+var_60] }
  LODWORD(v52) = *(unsigned int *)((char *)s_CG_ClientModel_Initialized[0].array + v50);
  DWORD1(v52) = s_CG_ClientModel_Initialized[v1].array[5];
  DWORD2(v52) = s_CG_ClientModel_Initialized[v1].array[6];
  HIDWORD(v52) = s_CG_ClientModel_Initialized[v1].array[7];
  v53 = s_CG_ClientModel_Initialized[v1].array[8];
  v54 = s_CG_ClientModel_Initialized[v1].array[9];
  v7 = s_CG_ClientModel_Initialized[v1].array[10];
  v51 = _XMM0;
  _XMM0 = *(unsigned int *)((char *)s_CG_ClientModel_UnwantedModifiables[0].array + v50);
  __asm
  {
    vpinsrd xmm0, xmm0, dword ptr [rbx+r12+1139E580h], 1
    vpinsrd xmm0, xmm0, dword ptr [rdi+r12+1139E580h], 2
    vpinsrd xmm0, xmm0, dword ptr [rsi+r12+1139E580h], 3
    vpand   xmm0, xmm0, [rbp+57h+var_50]
  }
  v55 = v7;
  v56 = s_CG_ClientModel_Initialized[v1].array[11];
  v48 = v1;
  v13 = &v53;
  v49 = v1;
  v14 = 4i64;
  v52 = _XMM0;
  do
  {
    *v13 &= *(unsigned int *)((char *)v13 + (_QWORD)s_CG_ClientModel_UnwantedModifiables + 48 * v1 - (_QWORD)&v51);
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = v51;
  LODWORD(v16) = 0;
  while ( v15 )
  {
LABEL_13:
    v17 = __lzcnt(v15);
    v18 = v17 + 32 * v16;
    if ( v17 >= 0x20 )
    {
      LODWORD(v47) = 32;
      LODWORD(v46) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    if ( (v15 & (0x80000000 >> v17)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v15 &= ~(0x80000000 >> v17);
    if ( CG_ClientModel_ShutdownClientModelSystems((const LocalClientNum_t)v1, v18) )
      CG_ClientModel_ShutdownClientModelDObj((const LocalClientNum_t)v1, v18);
  }
  while ( 1 )
  {
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= 0xC )
      break;
    v15 = *((_DWORD *)&v51 + v16);
    if ( v15 )
      goto LABEL_13;
  }
  v19 = 3i64;
  LODWORD(v51) = s_CG_ClientModel_Initialized[v49].array[0];
  DWORD1(v51) = s_CG_ClientModel_Initialized[v1].array[1];
  DWORD2(v51) = s_CG_ClientModel_Initialized[v1].array[2];
  HIDWORD(v51) = s_CG_ClientModel_Initialized[v1].array[3];
  LODWORD(v52) = *(unsigned int *)((char *)s_CG_ClientModel_Initialized[0].array + v50);
  DWORD1(v52) = s_CG_ClientModel_Initialized[v1].array[5];
  DWORD2(v52) = s_CG_ClientModel_Initialized[v1].array[6];
  HIDWORD(v52) = s_CG_ClientModel_Initialized[v1].array[7];
  v53 = s_CG_ClientModel_Initialized[v1].array[8];
  v54 = s_CG_ClientModel_Initialized[v1].array[9];
  v55 = s_CG_ClientModel_Initialized[v1].array[10];
  v56 = s_CG_ClientModel_Initialized[v1].array[11];
  v20 = &v51;
  do
  {
    _XMM0 = *v20++;
    __asm { vpandn  xmm1, xmm0, xmm2 }
    *(v20 - 1) = _XMM1;
    --v19;
  }
  while ( v19 );
  _XMM0 = s_CG_ClientModel_RequiredModifiables[v49].array[0];
  __asm
  {
    vpinsrd xmm0, xmm0, dword ptr [r11+r12+1139E520h], 1
    vpinsrd xmm0, xmm0, dword ptr [r15+r12+1139E520h], 2
    vpinsrd xmm0, xmm0, dword ptr rva s_CG_ClientModel_RequiredModifiables.array[r12+r13], 3
    vpand   xmm0, xmm0, [rbp+57h+var_60]
  }
  v28 = &v53;
  v51 = _XMM0;
  _XMM0 = *(unsigned int *)((char *)s_CG_ClientModel_RequiredModifiables[0].array + v50);
  __asm
  {
    vpinsrd xmm0, xmm0, dword ptr [r8+r12+1139E520h], 1
    vpinsrd xmm0, xmm0, dword ptr [r9+r12+1139E520h], 2
    vpinsrd xmm0, xmm0, dword ptr [rbx+r12+1139E520h], 3
    vpand   xmm0, xmm0, [rbp+57h+var_50]
  }
  v34 = 4i64;
  v52 = _XMM0;
  do
  {
    *v28 &= *(unsigned int *)((char *)v28 + (_QWORD)s_CG_ClientModel_RequiredModifiables + v48 * 48 - (_QWORD)&v51);
    ++v28;
    --v34;
  }
  while ( v34 );
  v35 = v51;
  LODWORD(v36) = 0;
  while ( v35 )
  {
LABEL_29:
    v37 = __lzcnt(v35);
    v38 = v37 + 32 * v36;
    if ( v37 >= 0x20 )
    {
      LODWORD(v47) = 32;
      LODWORD(v46) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    if ( (v35 & (0x80000000 >> v37)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v35 &= ~(0x80000000 >> v37);
    if ( CG_ClientModel_InitClientModelDObj((const LocalClientNum_t)v1, v38, NULL) )
      CG_ClientModel_InitClientModelSystems((const LocalClientNum_t)v1, v38);
  }
  while ( 1 )
  {
    v36 = (unsigned int)(v36 + 1);
    if ( (unsigned int)v36 >= 0xC )
      break;
    v35 = *((_DWORD *)&v51 + v36);
    if ( v35 )
      goto LABEL_29;
  }
  v39 = s_CG_ClientModel_StreamingWeapons[v48].array[0];
  LODWORD(v40) = 0;
  while ( v39 )
  {
LABEL_41:
    v41 = __lzcnt(v39);
    v42 = v41 + 32 * v40;
    if ( v41 >= 0x20 )
    {
      LODWORD(v47) = 32;
      LODWORD(v46) = v41;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    if ( (v39 & (0x80000000 >> v41)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v39 &= ~(0x80000000 >> v41);
    RuntimeData = CG_ClientModel_GetRuntimeData((const LocalClientNum_t)v1, v42);
    if ( RuntimeData->weapon.weaponIdx )
    {
      if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 183, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
        __debugbreak();
      if ( !RuntimeData->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 184, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
        __debugbreak();
      WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v1);
      if ( WeaponSystem->IsWeaponWorldModelLoaded(WeaponSystem, &RuntimeData->weapon) != RuntimeData->isWeaponLoaded )
      {
        if ( CG_ClientModel_ShutdownClientModelSystems((const LocalClientNum_t)v1, v42) )
          CG_ClientModel_ShutdownClientModelDObj((const LocalClientNum_t)v1, v42);
        DObj = CG_ClientModel_GetDObj((const LocalClientNum_t)v1, v42);
        if ( CG_ClientModel_InitClientModelDObj((const LocalClientNum_t)v1, v42, DObj) )
          CG_ClientModel_InitClientModelSystems((const LocalClientNum_t)v1, v42);
      }
    }
  }
  while ( 1 )
  {
    v40 = (unsigned int)(v40 + 1);
    if ( (unsigned int)v40 >= 0xC )
      break;
    v39 = s_CG_ClientModel_StreamingWeapons[v48].array[v40];
    if ( v39 )
      goto LABEL_41;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_Update
==============
*/
void CG_ClientModel_Update(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  bitarray<384> *v3; 
  float v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "CG_ClientModel_Update");
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1001, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v8, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v9) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v9) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 1005, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v3 = &s_CG_ClientModel_Initialized[v1];
  v4 = (float)v2->frametime * 0.001;
  v5 = v3->array[0];
  LODWORD(v6) = 0;
  while ( v5 )
  {
LABEL_20:
    v7 = __lzcnt(v5);
    if ( v7 >= 0x20 )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v5 &= ~(0x80000000 >> v7);
    CG_ClientModel_UpdateClientModel((const LocalClientNum_t)v1, v7 + 32 * v6, v4);
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0xC )
      break;
    v5 = v3->array[v6];
    if ( v5 )
      goto LABEL_20;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ClientModel_UpdateClientModel
==============
*/
void CG_ClientModel_UpdateClientModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const float deltaTime)
{
  float v3; 
  CG_ClientModel_RuntimeData *RuntimeData; 
  const DObj *DObj; 
  const DObj *v8; 
  const char *v9; 
  unsigned int v10; 
  bool v11; 
  unsigned int v12; 
  const char ***models; 
  vec3_t *lightingOrigin; 
  DObj obj; 
  unsigned int v16; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  *(_QWORD *)&obj.ignoreCollision.array[1] = -2i64;
  if ( !CG_ClientModel_IsLoaded(localClientNum, clientModelIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 841, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  RuntimeData = CG_ClientModel_GetRuntimeData(localClientNum, clientModelIdx);
  if ( RuntimeData->modelCount )
  {
    DObj = CG_ClientModel_GetDObj(localClientNum, clientModelIdx);
    v8 = DObj;
    if ( !DObj )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 852, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
        __debugbreak();
      goto LABEL_8;
    }
    if ( !DObjVerifyNumBones(DObj) )
    {
      models = (const char ***)v8->models;
      if ( *models )
      {
        v9 = **models;
LABEL_9:
        LODWORD(lightingOrigin) = clientModelIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 857, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DObjVerifyNumBones failed for ClientModel at index %d and model %s", lightingOrigin, v9) )
          __debugbreak();
        return;
      }
LABEL_8:
      v9 = "unknown";
      goto LABEL_9;
    }
    v10 = clientModelIdx + 2117;
    if ( clientModelIdx > 0x17F )
    {
      LODWORD(lightingOrigin) = clientModelIdx + 2117;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel.cpp", 866, ASSERT_TYPE_ASSERT, "( ENTITYNUM_CLIENTMODEL_START ) <= ( entNum ) && ( entNum ) <= ( ENTITYNUM_CLIENTMODEL_END - 1 )", "entNum not in [ENTITYNUM_CLIENTMODEL_START, ENTITYNUM_CLIENTMODEL_END - 1]\n\t%i not in [%i, %i]", lightingOrigin, 2117, 2500) )
        __debugbreak();
    }
    CG_ClientModel_Cloth_UpdateClientModel(localClientNum, clientModelIdx, deltaTime);
    DObjUpdateClientInfo(&obj, v3, v11, 0);
    CG_GetPoseOrigin(&RuntimeData->pose, (vec3_t *)&obj.duplicateParts);
    memset(&obj.modelHasBadRootBoneMeld, 0, sizeof(obj.modelHasBadRootBoneMeld));
    v16 = 0;
    if ( RuntimeData->hudOutlineEnabled )
    {
      obj.modelHasBadRootBoneMeld.array[0] = RuntimeData->hudOutlineColor;
      BYTE2(obj.modelHasBadRootBoneMeld.array[2]) = RuntimeData->hudOutlineFill;
      LOWORD(obj.modelHasBadRootBoneMeld.array[2]) = 256;
      HIBYTE(obj.modelHasBadRootBoneMeld.array[3]) = RuntimeData->hudOutlineLineWidth;
      BYTE2(obj.modelHasBadRootBoneMeld.array[3]) = RuntimeData->hudOutlineRenderMode;
    }
    CG_Entity_UpdateCharacterEvOffset(localClientNum, v10, (GfxSceneHudOutlineInfo *)&obj.modelHasBadRootBoneMeld);
    memset(&obj.ignoreCollision.array[3], 0, 36);
    *(DObjModelBits *)((char *)&obj.skel.partBits.anim + 24) = obj.modelHasBadRootBoneMeld;
    obj.skel.partBits.control.array[6] = v16;
    entityMutableShaderData = *CG_Entity_GetMutableShaderData((GfxSceneEntityMutableShaderData *)&obj.skel.partBits.worldCtrl.array[2], localClientNum, v8, 0, (GfxSceneHudOutlineInfo *)&obj.skel.partBits.anim.array[6], (shaderOverride_t *)&obj.ignoreCollision.array[3], 0.0);
    R_AddDObjToScene(v8, &RuntimeData->pose, v10, 0, &entityMutableShaderData, (const vec3_t *)&obj.duplicateParts, 0.0);
    v12 = R_LinkDObjEntity(localClientNum, v10, (const vec3_t *)&obj.duplicateParts, v8->radius);
    CG_Entity_CheckLightCount(v10, v8, v12, (const vec3_t *)&obj.duplicateParts, v8->radius);
    if ( (v8->flags & 4) != 0 )
      R_EntityHasSkinningAnimation(localClientNum, v10);
    memset(&obj.duplicateParts, 0, 0xCui64);
  }
}

