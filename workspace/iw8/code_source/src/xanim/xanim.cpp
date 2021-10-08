/*
==============
XAnimGetTime
==============
*/

double __fastcall XAnimGetTime(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetTime@@YAMPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
  return result;
}

/*
==============
XAnimGetNumChildInfos
==============
*/

unsigned __int16 __fastcall XAnimGetNumChildInfos(const XAnimTree *tree, const XAnimInfo *info)
{
  return ?XAnimGetNumChildInfos@@YAGPEBUXAnimTree@@PEBUXAnimInfo@@@Z(tree, info);
}

/*
==============
XAnimGetAbsDelta
==============
*/

void __fastcall XAnimGetAbsDelta(const XAnim_s *anims, unsigned int animIndex, vec4_t *rot, vec3_t *trans, float time)
{
  ?XAnimGetAbsDelta@@YAXPEBUXAnim_s@@IAEATvec4_t@@AEATvec3_t@@M@Z(anims, animIndex, rot, trans, time);
}

/*
==============
XAnimIsGraftNode
==============
*/

bool __fastcall XAnimIsGraftNode(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimIsGraftNode@@YA_NPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimFreeSimpleTree
==============
*/

void __fastcall XAnimFreeSimpleTree(XAnimTree *tree)
{
  ?XAnimFreeSimpleTree@@YAXPEAUXAnimTree@@@Z(tree);
}

/*
==============
XAnimRegisterConstString
==============
*/

const scr_string_t *__fastcall XAnimRegisterConstString(scr_string_t str, unsigned int size)
{
  return ?XAnimRegisterConstString@@YAPEBW4scr_string_t@@W41@I@Z(str, size);
}

/*
==============
XAnimGetDescendantWithGreatestWeight<1>
==============
*/

unsigned int __fastcall XAnimGetDescendantWithGreatestWeight<1>(unsigned __int16 infoIndex)
{
  return ??$XAnimGetDescendantWithGreatestWeight@$00@@YAIG@Z(infoIndex);
}

/*
==============
XAnimAssertValidParentInfoIndex
==============
*/

void __fastcall XAnimAssertValidParentInfoIndex(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, unsigned int animIndex)
{
  ?XAnimAssertValidParentInfoIndex@@YAXPEBUXAnimTree@@IW4XAnimSubTreeID@@GI@Z(tree, graftAnimIndex, subTreeID, parentInfoIndex, animIndex);
}

/*
==============
XAnimGetGoalWeight
==============
*/

double __fastcall XAnimGetGoalWeight(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetGoalWeight@@YAMPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
  return result;
}

/*
==============
XAnimGetAnimTreeDebugName
==============
*/

const char *__fastcall XAnimGetAnimTreeDebugName(const XAnim_s *anims)
{
  return ?XAnimGetAnimTreeDebugName@@YAPEBDPEBUXAnim_s@@@Z(anims);
}

/*
==============
XAnimSetupNodeLod
==============
*/

void __fastcall XAnimSetupNodeLod(XAnim_s *anims, unsigned int animIndex, unsigned int lod)
{
  ?XAnimSetupNodeLod@@YAXPEAUXAnim_s@@II@Z(anims, animIndex, lod);
}

/*
==============
XAnimClearTreeGoalWeightsNode
==============
*/

void __fastcall XAnimClearTreeGoalWeightsNode(XAnimTree *tree, unsigned __int16 infoIndex, float blendTime, int forceBlendTime, const XAnimCurveID curveID)
{
  ?XAnimClearTreeGoalWeightsNode@@YAXPEAUXAnimTree@@GMHW4XAnimCurveID@@@Z(tree, infoIndex, blendTime, forceBlendTime, curveID);
}

/*
==============
XAnimSetChildGoalWeights
==============
*/

void __fastcall XAnimSetChildGoalWeights(const DObj *obj, XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  ?XAnimSetChildGoalWeights@@YAXPEBUDObj@@PEAUXAnimTree@@IW4XAnimSubTreeID@@IMMMW4scr_string_t@@IW4XAnimCurveID@@PEAUXModelNameMap@@@Z(obj, tree, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, curveID, cachedModelNameMap);
}

/*
==============
DObjClearClientMissedNotifyList
==============
*/

void DObjClearClientMissedNotifyList(void)
{
  ?DObjClearClientMissedNotifyList@@YAXXZ();
}

/*
==============
XAnimNotetrackExists
==============
*/

bool __fastcall XAnimNotetrackExists(const XAnim_s *anims, unsigned int animIndex, scr_string_t name)
{
  return ?XAnimNotetrackExists@@YA_NPEBUXAnim_s@@IW4scr_string_t@@@Z(anims, animIndex, name);
}

/*
==============
XAnimGetParts
==============
*/

const XAnimParts *__fastcall XAnimGetParts(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimGetParts@@YAPEBUXAnimParts@@PEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
DObjGetClientNotifyFirst
==============
*/

const XAnimNotify *__fastcall DObjGetClientNotifyFirst(const XAnimNotifyHandle notifyHandle)
{
  return ?DObjGetClientNotifyFirst@@YAPEBUXAnimNotify@@VXAnimNotifyHandle@@@Z(notifyHandle);
}

/*
==============
XAnimMarkDebugVisualShow
==============
*/

void __fastcall XAnimMarkDebugVisualShow(const XAnimTree *tree, const XAnim_s *anims, unsigned __int16 infoIndex, unsigned __int64 nodeIndexShowMask)
{
  ?XAnimMarkDebugVisualShow@@YAXPEBUXAnimTree@@PEBUXAnim_s@@G_K@Z(tree, anims, infoIndex, nodeIndexShowMask);
}

/*
==============
XAnimIsLooped
==============
*/

bool __fastcall XAnimIsLooped(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimIsLooped@@YA_NPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimInit
==============
*/

void XAnimInit(void)
{
  ?XAnimInit@@YAXXZ();
}

/*
==============
XAnimPushCheckFatalErrorFlag
==============
*/

void XAnimPushCheckFatalErrorFlag(void)
{
  ?XAnimPushCheckFatalErrorFlag@@YAXXZ();
}

/*
==============
DObjGetServerNotifyList
==============
*/

int __fastcall DObjGetServerNotifyList(XAnimNotifySV **notifyList)
{
  return ?DObjGetServerNotifyList@@YAHPEAPEAUXAnimNotifySV@@@Z(notifyList);
}

/*
==============
XAnimNotetrackExistsInTree
==============
*/

bool __fastcall XAnimNotetrackExistsInTree(const XAnimTree *tree, scr_string_t name)
{
  return ?XAnimNotetrackExistsInTree@@YA_NPEBUXAnimTree@@W4scr_string_t@@@Z(tree, name);
}

/*
==============
XAnimProcessNotifyFromParts
==============
*/

void __fastcall XAnimProcessNotifyFromParts(const XAnimParts *parts, float oldTime, float currentTime, unsigned __int16 cycleCount, scr_string_t notifyName, unsigned __int16 notifyType, float dtime, void *customData, void (__fastcall *notifyFunc)(scr_string_t, scr_string_t, float, unsigned __int16, const XAnimParts *, void *, XAnimNotifyHandle *), XAnimNotifyHandle *inOutNotifyHead)
{
  ?XAnimProcessNotifyFromParts@@YAXPEBUXAnimParts@@MMGW4scr_string_t@@GMPEAXP6AX11MG02AEAVXAnimNotifyHandle@@@Z3@Z(parts, oldTime, currentTime, cycleCount, notifyName, notifyType, dtime, customData, notifyFunc, inOutNotifyHead);
}

/*
==============
XAnimShouldSaveNode
==============
*/

bool __fastcall XAnimShouldSaveNode(const XAnimTree *tree, const XAnimInfo *info)
{
  return ?XAnimShouldSaveNode@@YA_NPEBUXAnimTree@@PEBUXAnimInfo@@@Z(tree, info);
}

/*
==============
XAnimSetAnimRateNode
==============
*/

void __fastcall XAnimSetAnimRateNode(XAnimTree *tree, unsigned __int16 infoIndex, float rate)
{
  ?XAnimSetAnimRateNode@@YAXPEAUXAnimTree@@GM@Z(tree, infoIndex, rate);
}

/*
==============
XAnimIsSimpleTree
==============
*/

int __fastcall XAnimIsSimpleTree(const XAnimTree *tree)
{
  return ?XAnimIsSimpleTree@@YAHPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimSetClientLod
==============
*/

void __fastcall XAnimSetClientLod(const DObj *obj, unsigned __int8 lod)
{
  ?XAnimSetClientLod@@YAXPEBUDObj@@E@Z(obj, lod);
}

/*
==============
XAnimRegisterConstString
==============
*/

const scr_string_t *__fastcall XAnimRegisterConstString(scr_string_t str)
{
  return ?XAnimRegisterConstString@@YAPEBW4scr_string_t@@W41@@Z(str);
}

/*
==============
XAnimGetRelDelta3D
==============
*/

void __fastcall XAnimGetRelDelta3D(const XAnim_s *anims, unsigned int animIndex, vec4_t *rot, vec3_t *trans, float time1, float time2)
{
  ?XAnimGetRelDelta3D@@YAXPEBUXAnim_s@@IAEATvec4_t@@AEATvec3_t@@MM@Z(anims, animIndex, rot, trans, time1, time2);
}

/*
==============
XAnimUpdateClientLodBlending
==============
*/

void __fastcall XAnimUpdateClientLodBlending(const DObj *obj, float deltaTime)
{
  ?XAnimUpdateClientLodBlending@@YAXPEBUDObj@@M@Z(obj, deltaTime);
}

/*
==============
XAnimCalcNotetrackWeight
==============
*/

double __fastcall XAnimCalcNotetrackWeight(const XAnimInfo *info, scr_string_t blendInStartNotetrack, scr_string_t blendInEndNotetrack, scr_string_t blendOutStartNotetrack, scr_string_t blendOutEndNotetrack)
{
  double result; 

  *(float *)&result = ?XAnimCalcNotetrackWeight@@YAMPEIBUXAnimInfo@@W4scr_string_t@@111@Z(info, blendInStartNotetrack, blendInEndNotetrack, blendOutStartNotetrack, blendOutEndNotetrack);
  return result;
}

/*
==============
XAnimCreateFromParts
==============
*/

void __fastcall XAnimCreateFromParts(XAnim_s *anims, unsigned int animIndex, XAnimParts *parts, bool allowAllocs)
{
  ?XAnimCreateFromParts@@YAXPEAUXAnim_s@@IPEAUXAnimParts@@_N@Z(anims, animIndex, parts, allowAllocs);
}

/*
==============
XAnimSetTime
==============
*/

void __fastcall XAnimSetTime(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  ?XAnimSetTime@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IM@Z(tree, graftAnimIndex, subTreeID, animIndex, time);
}

/*
==============
XAnimGetAnimTreeSize
==============
*/

unsigned int __fastcall XAnimGetAnimTreeSize(const XAnim_s *anims)
{
  return ?XAnimGetAnimTreeSize@@YAIPEBUXAnim_s@@@Z(anims);
}

/*
==============
XAnimGetAnimName
==============
*/

const char *__fastcall XAnimGetAnimName(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimGetAnimName@@YAPEBDPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
DObjGetClientMissedNotifyList
==============
*/

int __fastcall DObjGetClientMissedNotifyList(const XAnimMissedNotify **notifyList)
{
  return ?DObjGetClientMissedNotifyList@@YAHPEAPEBUXAnimMissedNotify@@@Z(notifyList);
}

/*
==============
XAnimGetInfoIndex
==============
*/

unsigned __int16 __fastcall XAnimGetInfoIndex(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  return ?XAnimGetInfoIndex@@YAGPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
}

/*
==============
XAnimMoveAnimTree
==============
*/

void __fastcall XAnimMoveAnimTree(XAnimTree *from, XAnimTree *to)
{
  ?XAnimMoveAnimTree@@YAXPEAUXAnimTree@@0@Z(from, to);
}

/*
==============
XAnimGetNotetrackTime
==============
*/

double __fastcall XAnimGetNotetrackTime(const XAnim_s *anims, unsigned int animIndex, scr_string_t name)
{
  double result; 

  *(float *)&result = ?XAnimGetNotetrackTime@@YAMPEBUXAnim_s@@IW4scr_string_t@@@Z(anims, animIndex, name);
  return result;
}

/*
==============
XAnimCalcAbsDelta
==============
*/

void __fastcall XAnimCalcAbsDelta(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, vec4_t *rot, vec3_t *trans)
{
  ?XAnimCalcAbsDelta@@YAXPEBUDObj@@IW4XAnimSubTreeID@@IAEATvec4_t@@AEATvec3_t@@@Z(obj, graftAnimIndex, subTreeID, animIndex, rot, trans);
}

/*
==============
XAnimCalcDelta
==============
*/

void __fastcall XAnimCalcDelta(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, vec2_t *rot, vec3_t *trans, bool bUseGoalWeight)
{
  ?XAnimCalcDelta@@YAXPEBUDObj@@IW4XAnimSubTreeID@@IAEATvec2_t@@AEATvec3_t@@_N@Z(obj, graftAnimIndex, subTreeID, animIndex, rot, trans, bUseGoalWeight);
}

/*
==============
XAnimHasTime
==============
*/

bool __fastcall XAnimHasTime(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimHasTime@@YA_NPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimCalcNotetrackWeigthWithTimeRange
==============
*/

double __fastcall XAnimCalcNotetrackWeigthWithTimeRange(const XAnimInfo *info, float notifyInStartTime, float notifyInEndTime, float notifyOutStartTime, float notifyOutEndTime)
{
  double result; 

  *(float *)&result = ?XAnimCalcNotetrackWeigthWithTimeRange@@YAMPEIBUXAnimInfo@@MMMM@Z(info, notifyInStartTime, notifyInEndTime, notifyOutStartTime, notifyOutEndTime);
  return result;
}

/*
==============
XAnimPublicNodeWillBeLodCulled
==============
*/

bool __fastcall XAnimPublicNodeWillBeLodCulled(const XAnimTree *tree, const scr_string_t publicNodeName)
{
  return ?XAnimPublicNodeWillBeLodCulled@@YA_NPEBUXAnimTree@@W4scr_string_t@@@Z(tree, publicNodeName);
}

/*
==============
XAnimResetAnimMap
==============
*/

void __fastcall XAnimResetAnimMap(const DObj *obj)
{
  ?XAnimResetAnimMap@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
XAnimSetGoalWeightNode
==============
*/

int __fastcall XAnimSetGoalWeightNode(const DObj *obj, XAnimTree *tree, unsigned __int16 infoIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  return ?XAnimSetGoalWeightNode@@YAHPEBUDObj@@PEAUXAnimTree@@GMMMW4scr_string_t@@IW4XAnimCurveID@@PEAUXModelNameMap@@@Z(obj, tree, infoIndex, goalWeight, goalTime, rate, notifyName, notifyType, curveID, modelNameMap);
}

/*
==============
XAnimClearTreeNoObj
==============
*/

void __fastcall XAnimClearTreeNoObj(XAnimTree *tree)
{
  ?XAnimClearTreeNoObj@@YAXPEAUXAnimTree@@@Z(tree);
}

/*
==============
XAnimSetTimeInSeconds
==============
*/

void __fastcall XAnimSetTimeInSeconds(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float timeSeconds)
{
  ?XAnimSetTimeInSeconds@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IM@Z(tree, graftAnimIndex, subTreeID, animIndex, timeSeconds);
}

/*
==============
XAnimSetCompleteGoalWeightRel
==============
*/

int __fastcall XAnimSetCompleteGoalWeightRel(const DObj *obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart)
{
  return ?XAnimSetCompleteGoalWeightRel@@YAHPEBUDObj@@IIMMMW4scr_string_t@@IH@Z(obj, animIndex, rootIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart);
}

/*
==============
XAnimSubTreeRegistry_Register
==============
*/

void __fastcall XAnimSubTreeRegistry_Register(const XAnim_s *anims, const XAnimOwner owner)
{
  ?XAnimSubTreeRegistry_Register@@YAXPEBUXAnim_s@@W4XAnimOwner@@@Z(anims, owner);
}

/*
==============
XAnimCreateTree
==============
*/

XAnimTree *__fastcall XAnimCreateTree(XAnim_s *anims, void *(__fastcall *Alloc)(unsigned __int64), XAnimOwner owner)
{
  return ?XAnimCreateTree@@YAPEAUXAnimTree@@PEAUXAnim_s@@P6APEAX_K@ZW4XAnimOwner@@@Z(anims, Alloc, owner);
}

/*
==============
DObjCloneAnimTree
==============
*/

void __fastcall DObjCloneAnimTree(DObj *obj, const XAnimTree *from)
{
  ?DObjCloneAnimTree@@YAXPEAUDObj@@PEBUXAnimTree@@@Z(obj, from);
}

/*
==============
XAnimGetAnimDebugName
==============
*/

const char *__fastcall XAnimGetAnimDebugName(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimGetAnimDebugName@@YAPEBDPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
DObjUpdateClientInfo
==============
*/

XAnimNotifyHandle __fastcall DObjUpdateClientInfo(DObj *obj, float dtime, bool notify, int entnum)
{
  return ?DObjUpdateClientInfo@@YA?AVXAnimNotifyHandle@@PEAUDObj@@M_NH@Z(obj, dtime, notify, entnum);
}

/*
==============
DObjInitServerTime
==============
*/

void __fastcall DObjInitServerTime(DObj *obj, float dtime)
{
  ?DObjInitServerTime@@YAXPEAUDObj@@M@Z(obj, dtime);
}

/*
==============
XAnimClearTreeGoalWeightsStrict
==============
*/

void __fastcall XAnimClearTreeGoalWeightsStrict(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, void *objID, const XAnimCurveID curveID)
{
  ?XAnimClearTreeGoalWeightsStrict@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IMPEAXW4XAnimCurveID@@@Z(tree, graftAnimIndex, subTreeID, animIndex, blendTime, objID, curveID);
}

/*
==============
XAnimCreateSimpleTree
==============
*/

XAnimTree *__fastcall XAnimCreateSimpleTree(const char *name, XAnimOwner owner)
{
  return ?XAnimCreateSimpleTree@@YAPEAUXAnimTree@@PEBDW4XAnimOwner@@@Z(name, owner);
}

/*
==============
XAnimSubTreeRegistry_Remove
==============
*/

void __fastcall XAnimSubTreeRegistry_Remove(const XAnim_s *anims, const XAnimOwner owner)
{
  ?XAnimSubTreeRegistry_Remove@@YAXPEBUXAnim_s@@W4XAnimOwner@@@Z(anims, owner);
}

/*
==============
XAnimGetLength
==============
*/

double __fastcall XAnimGetLength(const XAnim_s *anims, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetLength@@YAMPEBUXAnim_s@@I@Z(anims, animIndex);
  return result;
}

/*
==============
XAnimSetInstantClientLod
==============
*/

void __fastcall XAnimSetInstantClientLod(const DObj *obj, unsigned __int8 lod)
{
  ?XAnimSetInstantClientLod@@YAXPEBUDObj@@E@Z(obj, lod);
}

/*
==============
XAnimGetNotetrackTimeFromParts
==============
*/

double __fastcall XAnimGetNotetrackTimeFromParts(const XAnimParts *animParts, scr_string_t name)
{
  double result; 

  *(float *)&result = ?XAnimGetNotetrackTimeFromParts@@YAMPEBUXAnimParts@@W4scr_string_t@@@Z(animParts, name);
  return result;
}

/*
==============
XAnimIsSimpleBlendTree
==============
*/

int __fastcall XAnimIsSimpleBlendTree(const XAnimTree *tree)
{
  return ?XAnimIsSimpleBlendTree@@YAHPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimGetTreeHighMemUsage
==============
*/

int __fastcall XAnimGetTreeHighMemUsage()
{
  return ?XAnimGetTreeHighMemUsage@@YAHXZ();
}

/*
==============
XAnimGetSimpleBlendTreeToAnimName
==============
*/

const char *__fastcall XAnimGetSimpleBlendTreeToAnimName(const XAnimTree *tree)
{
  return ?XAnimGetSimpleBlendTreeToAnimName@@YAPEBDPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimClearConstStrings
==============
*/

void XAnimClearConstStrings(void)
{
  ?XAnimClearConstStrings@@YAXXZ();
}

/*
==============
XAnimSetGoalWeightWithParent
==============
*/

int __fastcall XAnimSetGoalWeightWithParent(const DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  return ?XAnimSetGoalWeightWithParent@@YAHPEBUDObj@@IW4XAnimSubTreeID@@GIMMMW4scr_string_t@@IHW4XAnimCurveID@@PEAUXModelNameMap@@@Z(obj, graftAnimIndex, subTreeID, parentInfoIndex, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, curveID, cachedModelNameMap);
}

/*
==============
DObjInitTransfer
==============
*/

void DObjInitTransfer(void)
{
  ?DObjInitTransfer@@YAXXZ();
}

/*
==============
XAnimCreateAnimsInPlaceWithParameters
==============
*/

void __fastcall XAnimCreateAnimsInPlaceWithParameters(const XAnimSubTreeID subTreeID, XAnim_s *anims, int numAnims, int maxParameters, const scr_string_t **parameterArrayMemory, int maxBindings, XAnimParameterBinding *bindingArrayMemory, int maxPublicNodes, XAnimPublicNode *publicNodeMemory)
{
  ?XAnimCreateAnimsInPlaceWithParameters@@YAXW4XAnimSubTreeID@@PEAUXAnim_s@@HHPEAPEBW4scr_string_t@@HPEAUXAnimParameterBinding@@HPEAUXAnimPublicNode@@@Z(subTreeID, anims, numAnims, maxParameters, parameterArrayMemory, maxBindings, bindingArrayMemory, maxPublicNodes, publicNodeMemory);
}

/*
==============
XAnimGetGraftAnimIndex
==============
*/

unsigned int __fastcall XAnimGetGraftAnimIndex(unsigned __int16 infoIndex)
{
  return ?XAnimGetGraftAnimIndex@@YAIG@Z(infoIndex);
}

/*
==============
XAnimClearTree
==============
*/

void __fastcall XAnimClearTree(const DObj *obj)
{
  ?XAnimClearTree@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
XAnimIsLeafNode
==============
*/

int __fastcall XAnimIsLeafNode(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimIsLeafNode@@YAHPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimDisableLeakCheck
==============
*/

void XAnimDisableLeakCheck(void)
{
  ?XAnimDisableLeakCheck@@YAXXZ();
}

/*
==============
XAnimGetClientLodFloat
==============
*/

double __fastcall XAnimGetClientLodFloat(const DObj *obj)
{
  double result; 

  *(float *)&result = ?XAnimGetClientLodFloat@@YAMPEBUDObj@@@Z(obj);
  return result;
}

/*
==============
XAnimGetNumChildren
==============
*/

int __fastcall XAnimGetNumChildren(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimGetNumChildren@@YAHPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimPopCheckFatalErrorFlag
==============
*/

bool __fastcall XAnimPopCheckFatalErrorFlag()
{
  return ?XAnimPopCheckFatalErrorFlag@@YA_NXZ();
}

/*
==============
XAnimGetLengthFromPartsMsec
==============
*/

int __fastcall XAnimGetLengthFromPartsMsec(const XAnimParts *animParts)
{
  return ?XAnimGetLengthFromPartsMsec@@YAHPEBUXAnimParts@@@Z(animParts);
}

/*
==============
XAnimPlaySimpleTreeAnim
==============
*/

void __fastcall XAnimPlaySimpleTreeAnim(const DObj *obj, float animTime, float playbackRate, scr_string_t notifyName, unsigned int notifyType)
{
  ?XAnimPlaySimpleTreeAnim@@YAXPEBUDObj@@MMW4scr_string_t@@I@Z(obj, animTime, playbackRate, notifyName, notifyType);
}

/*
==============
XAnimCreateSimpleBlendTree
==============
*/

XAnimTree *__fastcall XAnimCreateSimpleBlendTree(const char *oldAnimName, const char *newAnimName, XAnimOwner owner)
{
  return ?XAnimCreateSimpleBlendTree@@YAPEAUXAnimTree@@PEBD0W4XAnimOwner@@@Z(oldAnimName, newAnimName, owner);
}

/*
==============
XAnimGetOldTime
==============
*/

double __fastcall XAnimGetOldTime(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetOldTime@@YAMPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
  return result;
}

/*
==============
XAnimAllocInfo
==============
*/

XAnimInfo *__fastcall XAnimAllocInfo(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, int after)
{
  return ?XAnimAllocInfo@@YAPEAUXAnimInfo@@PEBUDObj@@IW4XAnimSubTreeID@@IH@Z(obj, graftAnimIndex, subTreeID, animIndex, after);
}

/*
==============
XAnimClearGoalWeight
==============
*/

void __fastcall XAnimClearGoalWeight(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, const XAnimCurveID curveID)
{
  ?XAnimClearGoalWeight@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IMW4XAnimCurveID@@@Z(tree, graftAnimIndex, subTreeID, animIndex, blendTime, curveID);
}

/*
==============
XAnimSetTreeChildTimes
==============
*/

void __fastcall XAnimSetTreeChildTimes(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  ?XAnimSetTreeChildTimes@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IM@Z(tree, graftAnimIndex, subTreeID, animIndex, time);
}

/*
==============
XAnimSetCompleteGoalWeightKnob
==============
*/

int __fastcall XAnimSetCompleteGoalWeightKnob(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID)
{
  return ?XAnimSetCompleteGoalWeightKnob@@YAHPEBUDObj@@IW4XAnimSubTreeID@@IMMMW4scr_string_t@@IHW4XAnimCurveID@@@Z(obj, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, curveID);
}

/*
==============
XAnimFreeAnimTreeByType
==============
*/

void __fastcall XAnimFreeAnimTreeByType(XAnimTree *animTree)
{
  ?XAnimFreeAnimTreeByType@@YAXPEAUXAnimTree@@@Z(animTree);
}

/*
==============
XAnimGetLodForDistance
==============
*/

unsigned __int8 __fastcall XAnimGetLodForDistance(const DObj *obj, float distance)
{
  return ?XAnimGetLodForDistance@@YAEPEBUDObj@@M@Z(obj, distance);
}

/*
==============
XanimReleaseMemoryLocks
==============
*/

void XanimReleaseMemoryLocks(void)
{
  ?XanimReleaseMemoryLocks@@YAXXZ();
}

/*
==============
XAnimGetTreeMemUsage
==============
*/

int __fastcall XAnimGetTreeMemUsage()
{
  return ?XAnimGetTreeMemUsage@@YAHXZ();
}

/*
==============
XAnimCreateAnims
==============
*/

XAnim_s *__fastcall XAnimCreateAnims(const char *debugName, int size, void *(__fastcall *Alloc)(unsigned __int64))
{
  return ?XAnimCreateAnims@@YAPEAUXAnim_s@@PEBDHP6APEAX_K@Z@Z(debugName, size, Alloc);
}

/*
==============
XAnimGetRate
==============
*/

double __fastcall XAnimGetRate(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetRate@@YAMPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
  return result;
}

/*
==============
XAnimSetGoalWeightKnob
==============
*/

int __fastcall XAnimSetGoalWeightKnob(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, int bRestart, const XAnimCurveID curveID)
{
  return ?XAnimSetGoalWeightKnob@@YAHPEBUDObj@@IW4XAnimSubTreeID@@IMMMW4scr_string_t@@HW4XAnimCurveID@@@Z(obj, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, bRestart, curveID);
}

/*
==============
XAnimSetClientLodByDistance
==============
*/

void __fastcall XAnimSetClientLodByDistance(const DObj *obj, float distance)
{
  ?XAnimSetClientLodByDistance@@YAXPEBUDObj@@M@Z(obj, distance);
}

/*
==============
XAnimGetLengthFromParts
==============
*/

double __fastcall XAnimGetLengthFromParts(const XAnimParts *animParts)
{
  double result; 

  *(float *)&result = ?XAnimGetLengthFromParts@@YAMPEBUXAnimParts@@@Z(animParts);
  return result;
}

/*
==============
XAnimCloneAnimTree
==============
*/

void __fastcall XAnimCloneAnimTree(const XAnimTree *from, XAnimTree *to)
{
  ?XAnimCloneAnimTree@@YAXPEBUXAnimTree@@PEAU1@@Z(from, to);
}

/*
==============
DObjTransfer
==============
*/

void __fastcall DObjTransfer(const DObj *fromObj, DObj *toObj, float dtime)
{
  ?DObjTransfer@@YAXPEBUDObj@@PEAU1@M@Z(fromObj, toObj, dtime);
}

/*
==============
XAnimSetAnimRate
==============
*/

void __fastcall XAnimSetAnimRate(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float rate)
{
  ?XAnimSetAnimRate@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IM@Z(tree, graftAnimIndex, subTreeID, animIndex, rate);
}

/*
==============
XAnimUpdateDirtyCustomNodes
==============
*/

bool __fastcall XAnimUpdateDirtyCustomNodes(const DObj *obj, unsigned __int16 infoIndex, float dtime)
{
  return ?XAnimUpdateDirtyCustomNodes@@YA_NPEBUDObj@@GM@Z(obj, infoIndex, dtime);
}

/*
==============
XAnimSetGoalWeightKnobAll
==============
*/

int __fastcall XAnimSetGoalWeightKnobAll(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const XAnimSubTreeID rootSubTreeID, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, int bRestart, const XAnimCurveID curveID)
{
  return ?XAnimSetGoalWeightKnobAll@@YAHPEBUDObj@@IW4XAnimSubTreeID@@I1IMMMW4scr_string_t@@HW4XAnimCurveID@@@Z(obj, graftAnimIndex, subTreeID, animIndex, rootSubTreeID, rootIndex, goalWeight, goalTime, rate, notifyName, bRestart, curveID);
}

/*
==============
XAnimTrackInfoAllocation
==============
*/

void __fastcall XAnimTrackInfoAllocation(XAnimTree *tree)
{
  ?XAnimTrackInfoAllocation@@YAXPEAUXAnimTree@@@Z(tree);
}

/*
==============
XAnimResetSyncGroupChildren
==============
*/

void __fastcall XAnimResetSyncGroupChildren(XAnimTree *tree, const unsigned __int16 parentInfoIndex, const XAnimSyncGroupID currentSyncGroup, const XAnimSyncGroupID newSyncGroup)
{
  ?XAnimResetSyncGroupChildren@@YAXPEAUXAnimTree@@GW4XAnimSyncGroupID@@1@Z(tree, parentInfoIndex, currentSyncGroup, newSyncGroup);
}

/*
==============
XAnimSetupSyncNodes
==============
*/

void __fastcall XAnimSetupSyncNodes(XAnim_s *anims)
{
  ?XAnimSetupSyncNodes@@YAXPEAUXAnim_s@@@Z(anims);
}

/*
==============
XAnimGetConstStringSize
==============
*/

unsigned int __fastcall XAnimGetConstStringSize(scr_string_t str)
{
  return ?XAnimGetConstStringSize@@YAIW4scr_string_t@@@Z(str);
}

/*
==============
DObjTransferAll
==============
*/

void DObjTransferAll(void)
{
  ?DObjTransferAll@@YAXXZ();
}

/*
==============
XAnimCreate
==============
*/

void __fastcall XAnimCreate(XAnim_s *anims, unsigned int animIndex, const char *name, bool allowAllocs)
{
  ?XAnimCreate@@YAXPEAUXAnim_s@@IPEBD_N@Z(anims, animIndex, name, allowAllocs);
}

/*
==============
XAnimTreeHasLods
==============
*/

bool __fastcall XAnimTreeHasLods(const XAnimTree *tree)
{
  return ?XAnimTreeHasLods@@YA_NPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimGetSimpleTreeAnimName
==============
*/

const char *__fastcall XAnimGetSimpleTreeAnimName(const XAnimTree *tree)
{
  return ?XAnimGetSimpleTreeAnimName@@YAPEBDPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimPlaySimpleBlendTreeAnim
==============
*/

void __fastcall XAnimPlaySimpleBlendTreeAnim(const DObj *obj, float oldAnimTime, float oldPlaybackRate, float newAnimTime, float newPlaybackRate, float blendTime, scr_string_t notifyName, unsigned int notifyType)
{
  ?XAnimPlaySimpleBlendTreeAnim@@YAXPEBUDObj@@MMMMMW4scr_string_t@@I@Z(obj, oldAnimTime, oldPlaybackRate, newAnimTime, newPlaybackRate, blendTime, notifyName, notifyType);
}

/*
==============
XAnimGetInfoIndexStartFrom
==============
*/

unsigned __int16 __fastcall XAnimGetInfoIndexStartFrom(const XAnimSubTreeID subTreeID, unsigned __int16 rootInfoID, unsigned int animIndex)
{
  return ?XAnimGetInfoIndexStartFrom@@YAGW4XAnimSubTreeID@@GI@Z(subTreeID, rootInfoID, animIndex);
}

/*
==============
XAnimGetTreeParent
==============
*/

unsigned int __fastcall XAnimGetTreeParent(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimGetTreeParent@@YAIPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimSetClientNotifyFlag
==============
*/

void __fastcall XAnimSetClientNotifyFlag(XAnimTree *animTree, bool clientNotifiesEnabled)
{
  ?XAnimSetClientNotifyFlag@@YAXPEAUXAnimTree@@_N@Z(animTree, clientNotifiesEnabled);
}

/*
==============
XAnimSubTreeRegistry_CloneServerToClient
==============
*/

void __fastcall XAnimSubTreeRegistry_CloneServerToClient(unsigned __int16 startIndex, unsigned __int16 endIndex)
{
  ?XAnimSubTreeRegistry_CloneServerToClient@@YAXGG@Z(startIndex, endIndex);
}

/*
==============
XAnimAcquireMemoryLocks
==============
*/

void XAnimAcquireMemoryLocks(void)
{
  ?XAnimAcquireMemoryLocks@@YAXXZ();
}

/*
==============
XAnimSetCompleteGoalWeightKnobAll
==============
*/

int __fastcall XAnimSetCompleteGoalWeightKnobAll(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const XAnimSubTreeID rootSubTreeID, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, int bRestart, const XAnimCurveID curveID)
{
  return ?XAnimSetCompleteGoalWeightKnobAll@@YAHPEBUDObj@@IW4XAnimSubTreeID@@I1IMMMW4scr_string_t@@HW4XAnimCurveID@@@Z(obj, graftAnimIndex, subTreeID, animIndex, rootSubTreeID, rootIndex, goalWeight, goalTime, rate, notifyName, bRestart, curveID);
}

/*
==============
XAnimFreeSimpleBlendTree
==============
*/

void __fastcall XAnimFreeSimpleBlendTree(XAnimTree *tree)
{
  ?XAnimFreeSimpleBlendTree@@YAXPEAUXAnimTree@@@Z(tree);
}

/*
==============
XAnimGetSubTreeAnims
==============
*/

const XAnim_s *__fastcall XAnimGetSubTreeAnims(const XAnimTree *tree, const XAnimSubTreeID subTreeID)
{
  return ?XAnimGetSubTreeAnims@@YAPEBUXAnim_s@@PEBUXAnimTree@@W4XAnimSubTreeID@@@Z(tree, subTreeID);
}

/*
==============
XAnimGetNotetrackTimeFromCharString
==============
*/

double __fastcall XAnimGetNotetrackTimeFromCharString(const XAnim_s *anims, unsigned int animIndex, const char *notetrackName)
{
  double result; 

  *(float *)&result = ?XAnimGetNotetrackTimeFromCharString@@YAMPEBUXAnim_s@@IPEBD@Z(anims, animIndex, notetrackName);
  return result;
}

/*
==============
XAnimRegisterDvars
==============
*/

void XAnimRegisterDvars(void)
{
  ?XAnimRegisterDvars@@YAXXZ();
}

/*
==============
XAnimSetCompleteGoalWeightRel
==============
*/

int __fastcall XAnimSetCompleteGoalWeightRel(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  return ?XAnimSetCompleteGoalWeightRel@@YAHPEBUDObj@@IW4XAnimSubTreeID@@IIMMMW4scr_string_t@@IHW4XAnimCurveID@@PEAUXModelNameMap@@@Z(obj, graftAnimIndex, subTreeID, animIndex, rootIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, curveID, cachedModelNameMap);
}

/*
==============
XAnimSetTimeNode
==============
*/

void __fastcall XAnimSetTimeNode(XAnimTree *tree, unsigned __int16 infoIndex, float time)
{
  ?XAnimSetTimeNode@@YAXPEAUXAnimTree@@GM@Z(tree, infoIndex, time);
}

/*
==============
XAnimIsPrimitive
==============
*/

bool __fastcall XAnimIsPrimitive(XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimIsPrimitive@@YA_NPEAUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimBlend
==============
*/

void __fastcall XAnimBlend(XAnim_s *anims, unsigned int animIndex, const char *name, unsigned int children, unsigned int num, unsigned int flags, const XAnimSyncGroupID syncGroup, bool allowAllocs)
{
  ?XAnimBlend@@YAXPEAUXAnim_s@@IPEBDIIIW4XAnimSyncGroupID@@_N@Z(anims, animIndex, name, children, num, flags, syncGroup, allowAllocs);
}

/*
==============
XAnimSetCompleteGoalWeight
==============
*/

int __fastcall XAnimSetCompleteGoalWeight(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  return ?XAnimSetCompleteGoalWeight@@YAHPEBUDObj@@IW4XAnimSubTreeID@@IMMMW4scr_string_t@@IHW4XAnimCurveID@@PEAUXModelNameMap@@@Z(obj, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, curveID, cachedModelNameMap);
}

/*
==============
XAnimAddNotetrackTimesToScriptArray
==============
*/

void __fastcall XAnimAddNotetrackTimesToScriptArray(scrContext_t *scrContext, const XAnim_s *anims, unsigned int animIndex, scr_string_t name)
{
  ?XAnimAddNotetrackTimesToScriptArray@@YAXAEAUscrContext_t@@PEBUXAnim_s@@IW4scr_string_t@@@Z(scrContext, anims, animIndex, name);
}

/*
==============
XAnimGetWeight
==============
*/

double __fastcall XAnimGetWeight(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetWeight@@YAMPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
  return result;
}

/*
==============
XAnimGetRelDelta
==============
*/

void __fastcall XAnimGetRelDelta(const XAnim_s *anims, unsigned int animIndex, vec2_t *rot, vec3_t *trans, float time1, float time2)
{
  ?XAnimGetRelDelta@@YAXPEBUXAnim_s@@IAEATvec2_t@@AEATvec3_t@@MM@Z(anims, animIndex, rot, trans, time1, time2);
}

/*
==============
XAnimMoveAnimTree_r
==============
*/

void __fastcall XAnimMoveAnimTree_r(XAnimTree *from, XAnimTree *to, unsigned __int16 infoIndex)
{
  ?XAnimMoveAnimTree_r@@YAXPEAUXAnimTree@@0G@Z(from, to, infoIndex);
}

/*
==============
XAnimSetWrappedTime
==============
*/

void __fastcall XAnimSetWrappedTime(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time, bool timeWrapped)
{
  ?XAnimSetWrappedTime@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IM_N@Z(tree, graftAnimIndex, subTreeID, animIndex, time, timeWrapped);
}

/*
==============
GetAnimInfo
==============
*/

XAnimInfo *__fastcall GetAnimInfo(unsigned __int16 infoIndex)
{
  return ?GetAnimInfo@@YAPEAUXAnimInfo@@G@Z(infoIndex);
}

/*
==============
DObjDebugGetCurrentLeafAnims
==============
*/

void __fastcall DObjDebugGetCurrentLeafAnims(const DObj *obj, char *buffer, int bufferSize)
{
  ?DObjDebugGetCurrentLeafAnims@@YAXPEBUDObj@@PEADH@Z(obj, buffer, bufferSize);
}

/*
==============
XAnimGetDebugVisualAnimWeights
==============
*/

void __fastcall XAnimGetDebugVisualAnimWeights(const XAnimTree *tree, unsigned int infoIndex, XAnimTreeDebugNode *dbgNodes)
{
  ?XAnimGetDebugVisualAnimWeights@@YAXPEBUXAnimTree@@IPEAUXAnimTreeDebugNode@@@Z(tree, infoIndex, dbgNodes);
}

/*
==============
XAnimCreateAnimsInPlace
==============
*/

void __fastcall XAnimCreateAnimsInPlace(const XAnimSubTreeID subTreeID, XAnim_s *anims, int numAnims)
{
  ?XAnimCreateAnimsInPlace@@YAXW4XAnimSubTreeID@@PEAUXAnim_s@@H@Z(subTreeID, anims, numAnims);
}

/*
==============
XAnimValidateNotetrackTimes
==============
*/

bool __fastcall XAnimValidateNotetrackTimes(const XAnimParts *parts, float notifyInStartTime, float notifyInEndTime, float notifyOutStartTime, float notifyOutEndTime, bool throwError)
{
  return ?XAnimValidateNotetrackTimes@@YA_NPEBUXAnimParts@@MMMM_N@Z(parts, notifyInStartTime, notifyInEndTime, notifyOutStartTime, notifyOutEndTime, throwError);
}

/*
==============
DObjUpdateServerInfo
==============
*/

int __fastcall DObjUpdateServerInfo(DObj *obj, float dtime, int bNotify)
{
  return ?DObjUpdateServerInfo@@YAHPEAUDObj@@MH@Z(obj, dtime, bNotify);
}

/*
==============
XAnimSubTreeRegistry_Init
==============
*/

void __fastcall XAnimSubTreeRegistry_Init(const XAnimOwner owner)
{
  ?XAnimSubTreeRegistry_Init@@YAXW4XAnimOwner@@@Z(owner);
}

/*
==============
XAnimGetChildAt
==============
*/

unsigned int __fastcall XAnimGetChildAt(const XAnim_s *anims, unsigned int animIndex, unsigned int childIndex)
{
  return ?XAnimGetChildAt@@YAIPEBUXAnim_s@@II@Z(anims, animIndex, childIndex);
}

/*
==============
XAnimGetClientNotifyFlag
==============
*/

bool __fastcall XAnimGetClientNotifyFlag(const XAnimTree *tree)
{
  return ?XAnimGetClientNotifyFlag@@YA_NPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimSetScrubbedNotetracks
==============
*/

bool __fastcall XAnimSetScrubbedNotetracks(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const bool scrubbedNotetracks)
{
  return ?XAnimSetScrubbedNotetracks@@YA_NPEAUXAnimTree@@IW4XAnimSubTreeID@@I_N@Z(tree, graftAnimIndex, subTreeID, animIndex, scrubbedNotetracks);
}

/*
==============
XAnimCloneClientAnimTree
==============
*/

void __fastcall XAnimCloneClientAnimTree(const XAnimTree *from, XAnimTree *to, __int16 noteType)
{
  ?XAnimCloneClientAnimTree@@YAXPEBUXAnimTree@@PEAU1@F@Z(from, to, noteType);
}

/*
==============
XAnimFindData
==============
*/

XAnimParts *__fastcall XAnimFindData(const char *name)
{
  return ?XAnimFindData@@YAPEAUXAnimParts@@PEBD@Z(name);
}

/*
==============
XAnimSetAnimCurve
==============
*/

void __fastcall XAnimSetAnimCurve(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const XAnimCurveID curveID)
{
  ?XAnimSetAnimCurve@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IW4XAnimCurveID@@@Z(tree, graftAnimIndex, subTreeID, animIndex, curveID);
}

/*
==============
XAnimSetGoalWeight
==============
*/

int __fastcall XAnimSetGoalWeight(const DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  return ?XAnimSetGoalWeight@@YAHPEBUDObj@@IW4XAnimSubTreeID@@IMMMW4scr_string_t@@IHW4XAnimCurveID@@PEAUXModelNameMap@@@Z(obj, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, curveID, cachedModelNameMap);
}

/*
==============
XAnimSetupLodDistances
==============
*/

void __fastcall XAnimSetupLodDistances(XAnim_s *anims, unsigned int numLods, const float *lodDistances)
{
  ?XAnimSetupLodDistances@@YAXPEAUXAnim_s@@IPEBM@Z(anims, numLods, lodDistances);
}

/*
==============
XAnimSetupBindingIndexes
==============
*/

void __fastcall XAnimSetupBindingIndexes(XAnim_s *anims)
{
  ?XAnimSetupBindingIndexes@@YAXPEAUXAnim_s@@@Z(anims);
}

/*
==============
XAnimGetGoalTime
==============
*/

double __fastcall XAnimGetGoalTime(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimGetGoalTime@@YAMPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
  return result;
}

/*
==============
XAnimClearChildGoalWeights
==============
*/

void __fastcall XAnimClearChildGoalWeights(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, const XAnimCurveID curveID)
{
  ?XAnimClearChildGoalWeights@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IMW4XAnimCurveID@@@Z(tree, graftAnimIndex, subTreeID, animIndex, blendTime, curveID);
}

/*
==============
XAnimCalcDelta3D
==============
*/

void __fastcall XAnimCalcDelta3D(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, vec4_t *rot, vec3_t *trans, bool bUseGoalWeight)
{
  ?XAnimCalcDelta3D@@YAXPEBUDObj@@IW4XAnimSubTreeID@@IAEATvec4_t@@AEATvec3_t@@_N@Z(obj, graftAnimIndex, subTreeID, animIndex, rot, trans, bUseGoalWeight);
}

/*
==============
XAnimResetCheckFatalErrorFlag
==============
*/

void XAnimResetCheckFatalErrorFlag(void)
{
  ?XAnimResetCheckFatalErrorFlag@@YAXXZ();
}

/*
==============
XAnimGetLengthMsec
==============
*/

int __fastcall XAnimGetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  return ?XAnimGetLengthMsec@@YAHPEBUXAnim_s@@I@Z(anims, anim);
}

/*
==============
XAnimSetChildTimes
==============
*/

void __fastcall XAnimSetChildTimes(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  ?XAnimSetChildTimes@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IM@Z(tree, graftAnimIndex, subTreeID, animIndex, time);
}

/*
==============
XAnimGetAssetType
==============
*/

unsigned __int8 __fastcall XAnimGetAssetType(XAnimTree *tree, unsigned int index)
{
  return ?XAnimGetAssetType@@YAEPEAUXAnimTree@@I@Z(tree, index);
}

/*
==============
XAnimIsPlayingNonAdditiveAnimHavingBone
==============
*/

int __fastcall XAnimIsPlayingNonAdditiveAnimHavingBone(const XAnimTree *tree, scr_string_t boneName, int printBoneNames)
{
  return ?XAnimIsPlayingNonAdditiveAnimHavingBone@@YAHPEBUXAnimTree@@W4scr_string_t@@H@Z(tree, boneName, printBoneNames);
}

/*
==============
XAnimHasFinished
==============
*/

bool __fastcall XAnimHasFinished(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  return ?XAnimHasFinished@@YA_NPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
}

/*
==============
XAnimFreeAnims
==============
*/

void __fastcall XAnimFreeAnims(XAnim_s *anims, void (__fastcall *optionalFree)(void *, unsigned __int64))
{
  ?XAnimFreeAnims@@YAXPEAUXAnim_s@@P6AXPEAX_K@Z@Z(anims, optionalFree);
}

/*
==============
XAnimGetAnims
==============
*/

XAnim_s *__fastcall XAnimGetAnims(const XAnimTree *tree)
{
  return ?XAnimGetAnims@@YAPEAUXAnim_s@@PEBUXAnimTree@@@Z(tree);
}

/*
==============
DObjDisplayAnim
==============
*/

void __fastcall DObjDisplayAnim(const DObj *obj, const char *header)
{
  ?DObjDisplayAnim@@YAXPEBUDObj@@PEBD@Z(obj, header);
}

/*
==============
XAnimGetSubTreeID
==============
*/

XAnimSubTreeID __fastcall XAnimGetSubTreeID(const XAnim_s *anims)
{
  return ?XAnimGetSubTreeID@@YA?AW4XAnimSubTreeID@@PEBUXAnim_s@@@Z(anims);
}

/*
==============
DObjResetClientNotifyList
==============
*/

void DObjResetClientNotifyList(void)
{
  ?DObjResetClientNotifyList@@YAXXZ();
}

/*
==============
XAnimGetNotetrackTimeFromPartsCharString
==============
*/

double __fastcall XAnimGetNotetrackTimeFromPartsCharString(const XAnimParts *animParts, const char *notetrackName)
{
  double result; 

  *(float *)&result = ?XAnimGetNotetrackTimeFromPartsCharString@@YAMPEBUXAnimParts@@PEBD@Z(animParts, notetrackName);
  return result;
}

/*
==============
XAnimSubTreeRegistry_GetAnims
==============
*/

const XAnim_s *__fastcall XAnimSubTreeRegistry_GetAnims(const XAnimSubTreeID subTreeID, const XAnimOwner owner)
{
  return ?XAnimSubTreeRegistry_GetAnims@@YAPEBUXAnim_s@@W4XAnimSubTreeID@@W4XAnimOwner@@@Z(subTreeID, owner);
}

/*
==============
XAnimGetDescendantWithGreatestWeight<0>
==============
*/

unsigned int __fastcall XAnimGetDescendantWithGreatestWeight<0>(unsigned __int16 infoIndex)
{
  return ??$XAnimGetDescendantWithGreatestWeight@$0A@@@YAIG@Z(infoIndex);
}

/*
==============
XAnimGetSimpleBlendTreeFromAnimName
==============
*/

const char *__fastcall XAnimGetSimpleBlendTreeFromAnimName(const XAnimTree *tree)
{
  return ?XAnimGetSimpleBlendTreeFromAnimName@@YAPEBDPEBUXAnimTree@@@Z(tree);
}

/*
==============
XAnimShutdown
==============
*/

void XAnimShutdown(void)
{
  ?XAnimShutdown@@YAXXZ();
}

/*
==============
DObjDisplayAnimToBuffer
==============
*/

void __fastcall DObjDisplayAnimToBuffer(const DObj *obj, const char *header, char *buffer, int bufferSize)
{
  ?DObjDisplayAnimToBuffer@@YAXPEBUDObj@@PEBDPEADH@Z(obj, header, buffer, bufferSize);
}

/*
==============
XAnimIsValidNode
==============
*/

bool __fastcall XAnimIsValidNode(const XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimIsValidNode@@YA_NPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
DObjGetClientNotifyNext
==============
*/

const XAnimNotify *__fastcall DObjGetClientNotifyNext(const XAnimNotify *notifyNode)
{
  return ?DObjGetClientNotifyNext@@YAPEBUXAnimNotify@@PEBU1@@Z(notifyNode);
}

/*
==============
XAnimClearTreeGoalWeights
==============
*/

void __fastcall XAnimClearTreeGoalWeights(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, int forceBlendTime, void *objID, const XAnimCurveID curveID)
{
  ?XAnimClearTreeGoalWeights@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@IMHPEAXW4XAnimCurveID@@@Z(tree, graftAnimIndex, subTreeID, animIndex, blendTime, forceBlendTime, objID, curveID);
}

/*
==============
XAnimAllocChildInfoIndex
==============
*/

unsigned __int16 __fastcall XAnimAllocChildInfoIndex(const DObj *obj, const XAnimSubTreeID subTreeID, unsigned int animIndex, unsigned __int16 parentInfoIndex)
{
  return ?XAnimAllocChildInfoIndex@@YAGPEBUDObj@@W4XAnimSubTreeID@@IG@Z(obj, subTreeID, animIndex, parentInfoIndex);
}

/*
==============
XAnimPublicNodeOfTypeWillBeLodCulled
==============
*/

bool __fastcall XAnimPublicNodeOfTypeWillBeLodCulled(const XAnimTree *tree, const scr_string_t publicNodeTypeName)
{
  return ?XAnimPublicNodeOfTypeWillBeLodCulled@@YA_NPEBUXAnimTree@@W4scr_string_t@@@Z(tree, publicNodeTypeName);
}

/*
==============
XAnimCreateAnimsWithParameters
==============
*/

XAnim_s *__fastcall XAnimCreateAnimsWithParameters(const char *debugName, const XAnimSubTreeID subTreeID, int size, int maxParameters, int maxBindings, int maxPublicNodes, void *(__fastcall *Alloc)(unsigned __int64))
{
  return ?XAnimCreateAnimsWithParameters@@YAPEAUXAnim_s@@PEBDW4XAnimSubTreeID@@HHHHP6APEAX_K@Z@Z(debugName, subTreeID, size, maxParameters, maxBindings, maxPublicNodes, Alloc);
}

/*
==============
XAnimFreeTree
==============
*/

void __fastcall XAnimFreeTree(XAnimTree *tree, void (__fastcall *Free)(void *, unsigned __int64))
{
  ?XAnimFreeTree@@YAXPEAUXAnimTree@@P6AXPEAX_K@Z@Z(tree, Free);
}

/*
==============
XAnimClearChildGoalWeightsWithParent
==============
*/

void __fastcall XAnimClearChildGoalWeightsWithParent(XAnimTree *tree, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, float blendTime, const XAnimCurveID curveID)
{
  ?XAnimClearChildGoalWeightsWithParent@@YAXPEAUXAnimTree@@IW4XAnimSubTreeID@@GMW4XAnimCurveID@@@Z(tree, graftAnimIndex, subTreeID, parentInfoIndex, blendTime, curveID);
}

/*
==============
XAnimSetCompleteGoalWeightRel
==============
*/

int __fastcall XAnimSetCompleteGoalWeightRel(const DObj *obj, unsigned int animIndex, unsigned int rootIndex, double goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart)
{
  float v12; 
  float v13; 
  float v14; 

  __asm
  {
    vmovss  xmm0, [rsp+78h+rate]
    vmovss  xmm1, [rsp+78h+goalTime]
    vmovss  [rsp+78h+var_40], xmm0
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  [rsp+78h+var_50], xmm3
  }
  return XAnimSetCompleteGoalWeightRel(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, rootIndex, v12, v13, v14, notifyName, notifyType, bRestart, LINEAR, NULL);
}

/*
==============
XAnimGetDescendantWithGreatestWeight<1>
==============
*/
__int64 XAnimGetDescendantWithGreatestWeight<1>(unsigned __int16 infoIndex)
{
  unsigned __int16 children; 
  unsigned int v8; 
  __int64 v10; 
  bool v11; 
  __int64 v13; 
  unsigned int DescendantWithGreatest; 
  __int64 v18; 
  __int64 v19; 

  _RBX = XAnimGetAnimInfo(infoIndex);
  if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7527, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( _RBX->animToModel )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+38h]
    }
    if ( !_RBX->animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7532, ASSERT_TYPE_ASSERT, "(useGoalWeight ? info->state.goalWeight : info->state.weight)", (const char *)&queryFormat, "useGoalWeight ? info->state.goalWeight : info->state.weight") )
      __debugbreak();
    return _RBX->animIndex;
  }
  else
  {
    children = _RBX->children;
    v8 = 0;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    if ( children )
    {
      __asm { vmovaps [rsp+68h+var_18], xmm6 }
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v13 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v13 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v19) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v18) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v18, v19) )
              __debugbreak();
          }
          v11 = __CFADD__(g_xanimMemoryGlobals.bucketAllocatorBasePointer, v13) || &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v13] == NULL;
          _RBX = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v13];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v19) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v18) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v10 = children;
          v11 = __CFADD__(g_xanimMemoryGlobals.infoPool, v10 * 96) || &g_xanimMemoryGlobals.infoPool[v10] == NULL;
          _RBX = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[v10];
        }
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+38h]
          vcomiss xmm6, xmm7
        }
        if ( !v11 )
        {
          DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<1>(children);
          if ( DescendantWithGreatest )
          {
            __asm { vmovaps xmm7, xmm6 }
            v8 = DescendantWithGreatest;
          }
        }
        children = *((_WORD *)_RBX + 5);
      }
      while ( children );
      __asm { vmovaps xmm6, [rsp+68h+var_18] }
    }
    __asm { vmovaps xmm7, [rsp+68h+var_28] }
    return v8;
  }
}

/*
==============
XAnimGetDescendantWithGreatestWeight<0>
==============
*/
__int64 XAnimGetDescendantWithGreatestWeight<0>(unsigned __int16 infoIndex)
{
  unsigned __int16 children; 
  unsigned int v8; 
  __int64 v10; 
  bool v11; 
  __int64 v13; 
  unsigned int DescendantWithGreatest; 
  __int64 v18; 
  __int64 v19; 

  _RBX = XAnimGetAnimInfo(infoIndex);
  if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7527, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( _RBX->animToModel )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+3Ch]
    }
    if ( !_RBX->animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7532, ASSERT_TYPE_ASSERT, "(useGoalWeight ? info->state.goalWeight : info->state.weight)", (const char *)&queryFormat, "useGoalWeight ? info->state.goalWeight : info->state.weight") )
      __debugbreak();
    return _RBX->animIndex;
  }
  else
  {
    children = _RBX->children;
    v8 = 0;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    if ( children )
    {
      __asm { vmovaps [rsp+68h+var_18], xmm6 }
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v13 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v13 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v19) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v18) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v18, v19) )
              __debugbreak();
          }
          v11 = __CFADD__(g_xanimMemoryGlobals.bucketAllocatorBasePointer, v13) || &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v13] == NULL;
          _RBX = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v13];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v19) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v18) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v10 = children;
          v11 = __CFADD__(g_xanimMemoryGlobals.infoPool, v10 * 96) || &g_xanimMemoryGlobals.infoPool[v10] == NULL;
          _RBX = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[v10];
        }
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+3Ch]
          vcomiss xmm6, xmm7
        }
        if ( !v11 )
        {
          DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(children);
          if ( DescendantWithGreatest )
          {
            __asm { vmovaps xmm7, xmm6 }
            v8 = DescendantWithGreatest;
          }
        }
        children = *((_WORD *)_RBX + 5);
      }
      while ( children );
      __asm { vmovaps xmm6, [rsp+68h+var_18] }
    }
    __asm { vmovaps xmm7, [rsp+68h+var_28] }
    return v8;
  }
}

/*
==============
DObjClearClientMissedNotifyList
==============
*/
void DObjClearClientMissedNotifyList(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6229, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6230, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  s_missedNotifyListSize = 0;
}

/*
==============
DObjCloneAnimTree
==============
*/
void DObjCloneAnimTree(DObj *obj, const XAnimTree *from)
{
  XAnimTree *tree; 
  unsigned __int16 children; 
  unsigned __int16 v6; 
  bool modelMapInitialized; 
  XModelNameMap modelMap; 

  Profile_Begin(413);
  tree = obj->tree;
  modelMap.initialized = 0;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9185, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9186, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9187, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9190, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( tree->anims != from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9191, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  if ( tree->owner[0] != from->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9192, ASSERT_TYPE_ASSERT, "(to->owner == from->owner)", (const char *)&queryFormat, "to->owner == from->owner") )
    __debugbreak();
  children = from->children;
  modelMapInitialized = 0;
  v6 = tree->children;
  if ( children )
  {
    DObjCloneAnimTree_r(obj, children, v6, 0, &modelMapInitialized, &modelMap);
  }
  else if ( v6 )
  {
    XAnimFreeInfo(tree, v6, NULL);
    tree->children = 0;
  }
  tree->clientNotifyEnabled = from->clientNotifyEnabled;
  XAnimCloneParameterValues(from, tree);
  Profile_EndInternal(NULL);
}

/*
==============
DObjCloneAnimTree_r
==============
*/
__int64 DObjCloneAnimTree_r(DObj *obj, unsigned __int16 fromInfoIndex, unsigned __int16 toInfoIndex, unsigned __int16 toInfoParentIndex, bool *modelMapInitialized, XModelNameMap *modelMap)
{
  XAnimTree *tree; 
  XAnimInfo *AnimInfo; 
  XAnimToXModel *animToModel; 
  bool HasClientOnlyBones; 
  unsigned int ClientBoneOffset; 
  XModelNameMap *v16; 
  unsigned __int16 v17; 
  XAnimSubTreeID subTreeID; 
  XAnimInfo *v19; 
  const XAnim_s *SubTreeAnims; 
  XAnimInfo *v21; 
  unsigned __int16 children; 
  unsigned __int16 v23; 
  char v26; 
  unsigned __int16 next; 
  unsigned __int16 v29; 
  unsigned __int16 v31; 
  bool fmt; 

  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9095, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(fromInfoIndex);
  animToModel = AnimInfo->animToModel;
  if ( !toInfoIndex || XAnimGetAnimInfo(toInfoIndex)->animIndex > AnimInfo->animIndex )
  {
    if ( animToModel )
    {
      if ( *modelMapInitialized )
      {
        v16 = modelMap;
      }
      else
      {
        HasClientOnlyBones = DObjHasClientOnlyBones(obj);
        ClientBoneOffset = DObjGetClientBoneOffset(obj);
        fmt = HasClientOnlyBones;
        v16 = modelMap;
        XAnimInitModelMap(obj->models, obj->numModels, modelMap, ClientBoneOffset, fmt);
        *modelMapInitialized = 1;
      }
      animToModel = XAnimGetAnimMap(AnimInfo->parts, v16, NULL);
    }
    v17 = XAnimAllocInfoWithParent(tree, (const XAnimSubTreeID)AnimInfo->subTreeID, animToModel, AnimInfo->animIndex, toInfoParentIndex, 0);
    subTreeID = AnimInfo->subTreeID;
    toInfoIndex = v17;
    v19 = XAnimGetAnimInfo(v17);
    *(_QWORD *)&v19->state.currentAnimTime = 0i64;
    *(_QWORD *)&v19->state.cycleCount = 0i64;
    *(_QWORD *)&v19->state.goalWeight = 0i64;
    *(_QWORD *)&v19->state.rate = 0i64;
    *(_QWORD *)&v19->state.startWeight = 0i64;
    v19->notifyName = 0;
    *(_DWORD *)&v19->notifyChild = -65536;
    v19->notifyType = 0;
    v19->subTreeID = subTreeID;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, v19) )
      v19->state.flags |= 8u;
  }
  v21 = XAnimGetAnimInfo(toInfoIndex);
  XAnimCloneAnimInfo(AnimInfo, v21);
  children = AnimInfo->children;
  v23 = v21->children;
  if ( children )
  {
    __asm
    {
      vmovaps [rsp+68h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      _RSI = XAnimGetAnimInfo(children);
      __asm { vucomiss xmm6, dword ptr [rax+3Ch] }
      if ( !v26 )
      {
        if ( v23 )
        {
          if ( !XAnimGetAnimInfo(v23)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9136, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
            __debugbreak();
          while ( 1 )
          {
            if ( XAnimGetAnimInfo(v23)->animIndex >= _RSI->animIndex )
            {
              _RAX = XAnimGetAnimInfo(v23);
              __asm { vucomiss xmm6, dword ptr [rax+3Ch] }
              if ( !v26 )
                break;
            }
            next = XAnimGetAnimInfo(v23)->next;
            XAnimFreeInfo(tree, v23, obj);
            v23 = next;
            if ( !next )
              goto LABEL_28;
          }
          if ( v23 && !XAnimGetAnimInfo(v23)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9145, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
            __debugbreak();
        }
LABEL_28:
        v29 = DObjCloneAnimTree_r(obj, children, v23, toInfoIndex, modelMapInitialized, modelMap);
        if ( !XAnimGetAnimInfo(v29)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9151, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
        if ( XAnimGetAnimInfo(v29)->animIndex != _RSI->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9152, ASSERT_TYPE_ASSERT, "(GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex)", (const char *)&queryFormat, "GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex") )
          __debugbreak();
        v23 = XAnimGetAnimInfo(v29)->next;
        if ( v23 && !XAnimGetAnimInfo(v23)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9156, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
      }
      children = _RSI->next;
    }
    while ( children );
    __asm { vmovaps xmm6, [rsp+68h+var_38] }
  }
  if ( v23 )
  {
    if ( !XAnimGetAnimInfo(v23)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9162, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
      __debugbreak();
    do
    {
      v31 = XAnimGetAnimInfo(v23)->next;
      XAnimFreeInfo(tree, v23, obj);
      v23 = v31;
    }
    while ( v31 );
  }
  return toInfoIndex;
}

/*
==============
DObjDebugGetCurrentLeafAnims
==============
*/
void DObjDebugGetCurrentLeafAnims(const DObj *obj, char *buffer, int bufferSize)
{
  unsigned __int64 v3; 
  XAnimTree *tree; 
  unsigned __int16 children; 
  int destPos; 

  v3 = bufferSize;
  destPos = 0;
  Com_sprintfPos_truncate(buffer, bufferSize, &destPos, (const char *)&queryFormat.fmt + 3);
  if ( obj )
  {
    tree = obj->tree;
    if ( obj->tree )
    {
      children = tree->children;
      if ( children )
        XAnimDebugGetCurrentLeafAnims(obj, tree, children, buffer, v3, &destPos);
      else
        Com_sprintfPos_truncate(buffer, v3, &destPos, "<no anim>");
    }
    else
    {
      Com_sprintfPos_truncate(buffer, v3, &destPos, "<no tree>");
    }
  }
  else
  {
    Com_sprintfPos_truncate(buffer, v3, &destPos, "<null dobj>");
  }
}

/*
==============
DObjDisplayAnim
==============
*/
void DObjDisplayAnim(const DObj *obj, const char *header)
{
  char buffer[8192]; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6309, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  DObjDisplayAnimToBuffer(obj, header, buffer, 0x2000);
  Com_Printf(19, (const char *)&queryFormat, buffer);
}

/*
==============
DObjDisplayAnimToBuffer
==============
*/
void DObjDisplayAnimToBuffer(const DObj *obj, const char *header, char *buffer, int bufferSize)
{
  unsigned __int64 v5; 
  XAnimTree *tree; 
  const dvar_t *v16; 
  const char *parentColor; 
  char *fmt; 
  int destPos; 

  v5 = bufferSize;
  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6255, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6256, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( obj )
  {
    tree = obj->tree;
    if ( obj->tree )
    {
      if ( tree->children )
      {
        destPos = 0;
        Com_sprintfPos_truncate(buffer, v5, &destPos, (const char *)&queryFormat, header);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rax
        }
        if ( (__int64)(__rdtsc() - g_timerTickAtBoot) < 0 )
          __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
        __asm
        {
          vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
          vcvtsd2ss xmm1, xmm0, xmm0
          vmulss  xmm2, xmm1, cs:__real@3a83126f
          vcvtss2sd xmm3, xmm2, xmm2
          vmovsd  [rsp+68h+fmt], xmm3
        }
        Com_sprintfPos_truncate(buffer, v5, &destPos, "gametime: %f\n", *(double *)&fmt);
        v16 = DCONST_DVARBOOL_xanim_display_tree_parameters;
        if ( !DCONST_DVARBOOL_xanim_display_tree_parameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_display_tree_parameters") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
          XAnimDisplayTreeParameters(obj, buffer, v5, &destPos);
        parentColor = "^2";
        if ( !r_colorTable->current.integer )
          parentColor = "^3";
        XAnimDisplay(obj, tree, tree->children, 0, buffer, v5, &destPos, parentColor);
        Com_sprintfPos_truncate(buffer, v5, &destPos, "\n");
      }
      else
      {
        Com_sprintf(buffer, v5, "%sNO ANIM\n", header);
      }
    }
    else
    {
      Com_sprintf(buffer, v5, "%sNO TREE\n", header);
    }
  }
  else
  {
    Com_sprintf(buffer, v5, "%sNO DOBJ\n", header);
  }
}

/*
==============
DObjGetClientMissedNotifyList
==============
*/
__int64 DObjGetClientMissedNotifyList(const XAnimMissedNotify **notifyList)
{
  if ( !notifyList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6213, ASSERT_TYPE_ASSERT, "(notifyList)", (const char *)&queryFormat, "notifyList") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6214, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6215, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  *notifyList = s_missedNotifyList;
  return (unsigned int)s_missedNotifyListSize;
}

/*
==============
DObjGetClientNotifyFirst
==============
*/
XAnimNotify *DObjGetClientNotifyFirst(const XAnimNotifyHandle notifyHandle)
{
  __int64 v3; 
  __int64 v4; 

  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6184, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( notifyHandle.m_notifyIndex == 0xFFFF )
    return 0i64;
  if ( notifyHandle.m_notifyIndex > s_clientNotifyListFreeIndex )
  {
    LODWORD(v3) = notifyHandle.m_notifyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6192, ASSERT_TYPE_ASSERT, "( 0 ) <= ( notifyIndex ) && ( notifyIndex ) <= ( s_clientNotifyListFreeIndex )", "notifyIndex not in [0, s_clientNotifyListFreeIndex]\n\t%i not in [%i, %i]", v3, 0i64, s_clientNotifyListFreeIndex) )
      __debugbreak();
  }
  if ( notifyHandle.m_notifyIndex >= 0x2000u )
  {
    LODWORD(v4) = 0x2000;
    LODWORD(v3) = notifyHandle.m_notifyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6193, ASSERT_TYPE_ASSERT, "(unsigned)( notifyIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientNotifyList ) ) + 0 ) )", "notifyIndex doesn't index s_clientNotifyList\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_clientNotifyList[notifyHandle.m_notifyIndex];
}

/*
==============
DObjGetClientNotifyNext
==============
*/
const XAnimNotify *DObjGetClientNotifyNext(const XAnimNotify *notifyNode)
{
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6200, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( !notifyNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6201, ASSERT_TYPE_ASSERT, "(notifyNode != nullptr)", (const char *)&queryFormat, "notifyNode != nullptr") )
    __debugbreak();
  return DObjGetClientNotifyFirst(notifyNode->nextHandle);
}

/*
==============
DObjGetServerNotifyList
==============
*/
__int64 DObjGetServerNotifyList(XAnimNotifySV **notifyList)
{
  *notifyList = s_notifyListSV;
  return (unsigned int)s_notifyListSVSize;
}

/*
==============
DObjInitServerTime
==============
*/

void __fastcall DObjInitServerTime(DObj *obj, double dtime)
{
  XAnimTree *tree; 
  int entnum; 
  bool parentHasSyncGroups; 
  bool childHasTimeForParent; 
  XAnimState syncState; 

  __asm
  {
    vmovaps [rsp+0A8h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Profile_Begin(413);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6017, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree && tree->children )
  {
    entnum = obj->entnum - 1;
    syncState.cycleCount = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0A8h+syncState.currentAnimTime], xmm0
      vmovaps xmm3, xmm6; dtime
    }
    XAnimUpdateOldTime(obj, tree->children, &syncState, *(float *)&_XMM3, 1, &childHasTimeForParent, &parentHasSyncGroups, entnum, NULL);
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
}

/*
==============
DObjInitTransfer
==============
*/
void DObjInitTransfer(void)
{
  if ( ((unsigned __int8)&g_dobjInfoCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_dobjInfoCheck) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_dobjInfoCheck) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5893, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_dobjInfoCheck ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_dobjInfoCheck ) == 1") )
    __debugbreak();
  memset_0(g_xanimTransferInfo, 0, sizeof(g_xanimTransferInfo));
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5896, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  g_animInfoCount = 0;
  g_dobjInfoCount = 0;
  *(_QWORD *)&g_xanimParameterTransferInfo.parameterCount = 0i64;
  *(_QWORD *)&g_xanimParameterTransferInfo.transferredParameterCount = 0i64;
  g_xanimParameterTransferInfo.dobjCount = 0;
  g_xanimParameterTransferInfo.transferredDObjCount = 0;
}

/*
==============
DObjResetClientNotifyList
==============
*/
void DObjResetClientNotifyList(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6037, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_clientNotifyListHighWatermark < s_clientNotifyListFreeIndex )
  {
    Com_Printf(14, "DObjResetClientNotifyList: New High Watermark %i (was %i)\n", (unsigned int)s_clientNotifyListFreeIndex, (unsigned int)s_clientNotifyListHighWatermark);
    s_clientNotifyListHighWatermark = s_clientNotifyListFreeIndex;
  }
  s_clientNotifyListFreeIndex = -1;
  DebugWipe(s_clientNotifyList, 0x30000ui64);
}

/*
==============
DObjTransfer
==============
*/

void __fastcall DObjTransfer(const DObj *fromObj, DObj *toObj, double dtime)
{
  unsigned int v7; 
  XAnimTree *tree; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( g_dobjInfoCheck != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5923, ASSERT_TYPE_ASSERT, "(g_dobjInfoCheck == 1)", (const char *)&queryFormat, "g_dobjInfoCheck == 1") )
    __debugbreak();
  if ( !fromObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5925, ASSERT_TYPE_ASSERT, "(fromObj)", (const char *)&queryFormat, "fromObj") )
    __debugbreak();
  if ( !toObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5926, ASSERT_TYPE_ASSERT, "(toObj)", (const char *)&queryFormat, "toObj") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5927, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  Profile_Begin(413);
  v7 = g_dobjInfoCount;
  if ( g_dobjInfoCount >= 0x400 )
  {
    g_animInfoCount = 0;
    g_dobjInfoCount = 0;
    g_xanimParameterTransferInfo.parameterCount = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AE0E0, 371i64);
    v7 = g_dobjInfoCount;
  }
  g_dobjInfoCount = v7 + 1;
  _RDI = &g_dobjTransferInfo[v7];
  _RDI->toObj = toObj;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&_RDI->hidePartBits, &fromObj->hidePartBits);
  tree = fromObj->tree;
  _RDI->fromObjHasTree = tree != NULL;
  if ( tree )
  {
    _RDI->clientNotifyEnabled = tree->clientNotifyEnabled;
    _RDI->fromObjTreeHasChildren = tree->children != 0;
    if ( toObj->tree )
    {
      if ( tree->children )
      {
        if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3736, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
          __debugbreak();
        if ( !tree->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3737, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
          __debugbreak();
        XAnimTransferParametersFromServerTree(&g_xanimParameterTransferInfo, tree);
        XAnimTransferFrom_r(tree, tree->children);
      }
      __asm { vmovss  dword ptr [rdi+28h], xmm6 }
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  Profile_EndInternal(NULL);
}

/*
==============
DObjTransferAll
==============
*/
void DObjTransferAll(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  __int64 v3; 
  unsigned int transferredParameterCount; 
  __int64 v5; 
  unsigned int parameterCount; 

  v0 = g_animInfoCount;
  Profile_Begin(413);
  if ( ((unsigned __int8)&g_dobjInfoCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_dobjInfoCheck) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_dobjInfoCheck, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5977, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_dobjInfoCheck ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_dobjInfoCheck ) == 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5979, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  v1 = 0;
  v2 = 0;
  g_animInfoCount = 0;
  *(_QWORD *)&g_xanimParameterTransferInfo.transferredParameterCount = 0i64;
  g_xanimParameterTransferInfo.transferredDObjCount = 0;
  for ( s_missedNotifyListSize = 0; v2 < g_dobjInfoCount; ++v2 )
  {
    if ( v1 > v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5990, ASSERT_TYPE_ASSERT, "(g_animInfoCount <= animInfoCount)", (const char *)&queryFormat, "g_animInfoCount <= animInfoCount") )
      __debugbreak();
    DObjTransferTo(&g_dobjTransferInfo[v2]);
    v1 = g_animInfoCount;
  }
  if ( v1 != v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5994, ASSERT_TYPE_ASSERT, "(g_animInfoCount == animInfoCount)", (const char *)&queryFormat, "g_animInfoCount == animInfoCount") )
    __debugbreak();
  if ( g_xanimParameterTransferInfo.transferredParameterCount != g_xanimParameterTransferInfo.parameterCount )
  {
    parameterCount = g_xanimParameterTransferInfo.parameterCount;
    transferredParameterCount = g_xanimParameterTransferInfo.transferredParameterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5995, ASSERT_TYPE_ASSERT, "( g_xanimParameterTransferInfo.transferredParameterCount ) == ( g_xanimParameterTransferInfo.parameterCount )", "%s == %s\n\t%i, %i", "g_xanimParameterTransferInfo.transferredParameterCount", "g_xanimParameterTransferInfo.parameterCount", transferredParameterCount, parameterCount) )
      __debugbreak();
  }
  if ( g_xanimParameterTransferInfo.transferredValidParameterCount != g_xanimParameterTransferInfo.validParameterCount )
  {
    LODWORD(v5) = g_xanimParameterTransferInfo.validParameterCount;
    LODWORD(v3) = g_xanimParameterTransferInfo.transferredValidParameterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5996, ASSERT_TYPE_ASSERT, "( g_xanimParameterTransferInfo.transferredValidParameterCount ) == ( g_xanimParameterTransferInfo.validParameterCount )", "%s == %s\n\t%i, %i", "g_xanimParameterTransferInfo.transferredValidParameterCount", "g_xanimParameterTransferInfo.validParameterCount", v3, v5) )
      __debugbreak();
  }
  if ( g_xanimParameterTransferInfo.transferredDObjCount != g_xanimParameterTransferInfo.dobjCount )
  {
    LODWORD(v5) = g_xanimParameterTransferInfo.dobjCount;
    LODWORD(v3) = g_xanimParameterTransferInfo.transferredDObjCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5997, ASSERT_TYPE_ASSERT, "( g_xanimParameterTransferInfo.transferredDObjCount ) == ( g_xanimParameterTransferInfo.dobjCount )", "%s == %s\n\t%i, %i", "g_xanimParameterTransferInfo.transferredDObjCount", "g_xanimParameterTransferInfo.dobjCount", v3, v5) )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
}

/*
==============
DObjTransferTo
==============
*/
void DObjTransferTo(const DObjTransferInfo *info)
{
  DObj *toObj; 
  XAnimTree *tree; 
  unsigned __int16 maxParameters; 
  unsigned __int16 numGameParameters; 
  XAnimTree *v7; 
  unsigned __int16 m_notifyIndex; 
  unsigned int v12; 
  unsigned __int16 children; 
  unsigned __int16 v21; 
  bool *childHasTimeForParent; 
  XAnimNotifyHandle inOutNotifyHead; 
  bool parentHasSyncGroups; 
  bool v25; 
  XAnimState syncState; 

  _R14 = info;
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5839, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  toObj = _R14->toObj;
  if ( !_R14->toObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5842, ASSERT_TYPE_ASSERT, "(toObj)", (const char *)&queryFormat, "toObj") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&toObj->hidePartBits, &_R14->hidePartBits);
  if ( !_R14->fromObjHasTree )
  {
    tree = toObj->tree;
    if ( toObj->tree )
    {
      if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 942, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
        __debugbreak();
      XAnimClearTreeNoObj(tree);
      if ( tree->info_usage )
      {
        LODWORD(childHasTimeForParent) = tree->info_usage;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 947, ASSERT_TYPE_ASSERT, "( ( !tree->info_usage ) )", "( tree->info_usage ) = %i", childHasTimeForParent) )
          __debugbreak();
      }
      maxParameters = tree->maxParameters;
      numGameParameters = tree->anims->numGameParameters;
      if ( maxParameters < numGameParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 955, ASSERT_TYPE_ASSERT, "( tree->maxParameters ) >= ( tree->anims->numGameParameters )", "%s >= %s\n\t%i, %i", "tree->maxParameters", "tree->anims->numGameParameters", maxParameters, numGameParameters) )
        __debugbreak();
      MT_Free(tree, 8 * (3i64 * tree->maxParameters + 6));
      DObjSetTree(toObj, NULL);
    }
  }
  v7 = toObj->tree;
  if ( toObj->tree )
  {
    if ( v7->children )
    {
      __asm { vmovss  xmm3, dword ptr [r14+28h]; dtime }
      syncState.cycleCount = 0;
      inOutNotifyHead.m_notifyIndex = -1;
      __asm
      {
        vmovaps [rsp+0C8h+var_38], xmm6
        vxorps  xmm6, xmm6, xmm6
        vmovss  [rsp+0C8h+syncState.currentAnimTime], xmm6
      }
      XAnimUpdateOldTime(toObj, v7->children, &syncState, *(float *)&_XMM3, 1, &v25, &parentHasSyncGroups, toObj->entnum - 1, NULL);
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6037, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( s_clientNotifyListHighWatermark < s_clientNotifyListFreeIndex )
      {
        Com_Printf(14, "DObjResetClientNotifyList: New High Watermark %i (was %i)\n", (unsigned int)s_clientNotifyListFreeIndex, (unsigned int)s_clientNotifyListHighWatermark);
        s_clientNotifyListHighWatermark = s_clientNotifyListFreeIndex;
      }
      s_clientNotifyListFreeIndex = -1;
      DebugWipe(s_clientNotifyList, 0x30000ui64);
      __asm { vmovss  xmm2, dword ptr [r14+28h]; dtime }
      XAnimUpdateTimeAndNotetrack(toObj, v7->children, *(float *)&_XMM2, 1, &inOutNotifyHead);
      if ( !toObj->entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5872, ASSERT_TYPE_ASSERT, "(toObj->entnum > 0)", (const char *)&queryFormat, "toObj->entnum > 0") )
        __debugbreak();
      m_notifyIndex = inOutNotifyHead.m_notifyIndex;
      v12 = toObj->entnum - 1;
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5803, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5804, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      _RAX = DObjGetClientNotifyFirst((const XAnimNotifyHandle)m_notifyIndex);
      if ( _RAX )
      {
        _RBX = s_missedNotifyList;
        while ( (unsigned __int64)s_missedNotifyListSize < 0x80 )
        {
          __asm { vmovups xmm0, xmmword ptr [rax] }
          _RCX = s_missedNotifyListSize++;
          __asm
          {
            vmovups xmmword ptr [rcx+rbx], xmm0
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovsd  qword ptr [rcx+rbx+10h], xmm1
          }
          s_missedNotifyList[_RCX].entityNumber = v12;
          _RAX = DObjGetClientNotifyNext(_RAX);
          if ( !_RAX )
            goto LABEL_41;
        }
        Com_PrintWarning(19, "DObjSaveMissedNotifyList() max number of missed notetracks reached (%d)", 128i64);
      }
LABEL_41:
      if ( !_R14->fromObjTreeHasChildren )
      {
        children = v7->children;
        if ( children )
        {
          __asm { vmovaps xmm2, xmm6; blendTime }
          XAnimClearTreeGoalWeightsNode(v7, children, *(float *)&_XMM2, 1, LINEAR);
        }
      }
      __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
    }
    v7->clientNotifyEnabled = _R14->clientNotifyEnabled;
    if ( _R14->fromObjTreeHasChildren )
    {
      v21 = v7->children;
      XAnimTransferParametersToClientTree(&g_xanimParameterTransferInfo, v7);
      XAnimTransferTo_r(toObj, v7, v21, 0);
    }
  }
}

/*
==============
DObjUpdateClientInfo
==============
*/
DObj *DObjUpdateClientInfo(DObj *obj, float dtime, bool notify, int entnum, int a5)
{
  signed __int64 v5; 
  DObj *v6; 
  void *v11; 
  char v13; 
  DObj *v15; 
  XAnimTree *tree; 
  XAnimTree *v20; 
  __int64 v29; 
  int v30; 
  bool v31; 
  unsigned __int16 children; 
  DObj *result; 
  bool parentHasSyncGroups; 
  bool childHasTimeForParent; 
  XAnimState syncState; 
  XModelNameMap modelNameMap; 

  v11 = alloca(v5);
  __asm
  {
    vmovaps [rsp+3108h+var_58], xmm6
    vmovaps [rsp+3108h+var_68], xmm7
  }
  modelNameMap.initialized = 0;
  v13 = entnum;
  __asm { vmovaps xmm6, xmm2 }
  v15 = v6;
  Profile_Begin(413);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6066, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6068, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  LOWORD(obj->tree) = -1;
  tree = v15->tree;
  __asm { vmovaps xmm1, xmm6; deltaTime }
  *(double *)&_XMM0 = AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly(v15->entnum, *(float *)&_XMM1);
  __asm { vmovaps xmm6, xmm0 }
  if ( DObjHasProceduralBones(v15) )
  {
    __asm { vmovaps xmm1, xmm6; deltaTime }
    XAnimBonePhysicsUpdateTime(v15, *(float *)&_XMM1);
  }
  if ( tree && tree->children )
  {
    v20 = v15->tree;
    if ( !DObjHasClientFlag(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9578, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
      __debugbreak();
    if ( v20 )
    {
      __asm
      {
        vucomiss xmm6, xmm7
        vmulss  xmm0, xmm6, cs:__real@447a0000; val
        vmovss  xmm2, cs:__real@46fffe00; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vcvttss2si r15d, xmm0 }
      if ( v20->lodState.blendTimeLeft <= (__int16)_ER15 )
      {
        v20->lodState.lod = v20->lodState.goalLod;
        v20->lodState.blendTimeLeft = 0;
      }
      else
      {
        _RBP = DCONST_DVARFLT_xanim_lodLerpFactor;
        if ( !DCONST_DVARFLT_xanim_lodLerpFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodLerpFactor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBP);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+28h]
          vmulss  xmm1, xmm0, cs:__real@43800000
          vcvttss2si ecx, xmm1
        }
        v29 = (__int16)_ECX * (v20->lodState.goalLod - v20->lodState.lod);
        v30 = (BYTE4(v29) + (int)v29) >> 8;
        v31 = (__int16)(v20->lodState.lod + v30) < 0;
        v20->lodState.lod += v30;
        if ( v31 )
          v20->lodState.lod = 0;
        v20->lodState.blendTimeLeft -= _ER15;
      }
    }
    XAnimTreeUpdateParameters(v15);
    syncState.cycleCount = 0;
    __asm
    {
      vmovss  [rsp+3108h+syncState.currentAnimTime], xmm7
      vmovaps xmm3, xmm6; dtime
    }
    XAnimUpdateOldTime(v15, tree->children, &syncState, *(float *)&_XMM3, 1, &childHasTimeForParent, &parentHasSyncGroups, a5, &modelNameMap);
    children = tree->children;
    if ( children )
    {
      __asm { vmovaps xmm2, xmm6; dtime }
      XAnimUpdateTimeAndNotetrack(v15, children, *(float *)&_XMM2, v13, (XAnimNotifyHandle *)obj);
    }
  }
  Profile_EndInternal(NULL);
  result = obj;
  __asm
  {
    vmovaps xmm6, [rsp+3108h+var_58]
    vmovaps xmm7, [rsp+3108h+var_68]
  }
  return result;
}

/*
==============
DObjUpdateServerInfo
==============
*/

__int64 __fastcall DObjUpdateServerInfo(DObj *obj, double dtime, int bNotify)
{
  XAnimTree *tree; 
  char v16; 
  bool v17; 
  bool v21; 
  __int64 result; 
  double v31; 
  double v32; 
  XAnimNotifyHandle inOutNotifyHead; 
  XAnimSyncGroupCalcData syncGroupCalcData; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm6, xmm1
  }
  Profile_Begin(413);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6127, ASSERT_TYPE_ASSERT, "(dtime >= 0)", (const char *)&queryFormat, "dtime >= 0") )
    __debugbreak();
  tree = obj->tree;
  s_notifyListSVSize = 0;
  if ( !tree || !tree->children )
    goto LABEL_15;
  inOutNotifyHead.m_notifyIndex = -1;
  XAnimTreeUpdateParameters(obj);
  if ( !bNotify )
  {
    __asm { vmovaps xmm2, xmm6; dtime }
    XAnimUpdateTimeAndNotetrack(obj, tree->children, *(float *)&_XMM2, 0, &inOutNotifyHead);
LABEL_15:
    Profile_EndInternal(NULL);
    result = 0i64;
    goto LABEL_16;
  }
  __asm { vmovaps [rsp+0F8h+var_38], xmm8 }
  memset_0(&syncGroupCalcData, 0, sizeof(syncGroupCalcData));
  __asm { vmovaps xmm1, xmm6; dtime }
  XAnimUpdateSyncGroups(obj, *(float *)&_XMM1, 1, &syncGroupCalcData);
  __asm { vmovaps xmm2, xmm6; dtime }
  *(float *)&_XMM0 = XAnimFindServerNoteTrack(obj, tree->children, *(float *)&_XMM2, &syncGroupCalcData);
  __asm
  {
    vcomiss xmm0, xmm7
    vmovaps xmm8, xmm0
  }
  if ( v16 )
  {
    __asm
    {
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0F8h+var_B8], xmm1
      vcvtss2sd xmm2, xmm8, xmm0
      vmovsd  [rsp+0F8h+var_C0], xmm2
    }
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6158, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v31, v32);
    v16 = 0;
    v17 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmaxss  xmm0, xmm8, xmm7
    vucomiss xmm0, cs:__real@3f800000
    vmovaps xmm8, [rsp+0F8h+var_38]
  }
  if ( v17 )
    goto LABEL_14;
  __asm
  {
    vmulss  xmm0, xmm6, xmm0
    vaddss  xmm2, xmm0, cs:__real@3a83126f; dtime
    vcomiss xmm2, xmm6
  }
  if ( !(v16 | v17) )
  {
LABEL_14:
    XAnimUpdateLeadSyncGroupNode(obj, &syncGroupCalcData, &inOutNotifyHead);
    __asm { vmovaps xmm2, xmm6; dtime }
    XAnimUpdateTimeAndNotetrackInternal(obj, tree->children, *(float *)&_XMM2, 1, &syncGroupCalcData, &inOutNotifyHead);
    goto LABEL_15;
  }
  XAnimUpdateTimeAndNotetrack(obj, tree->children, *(float *)&_XMM2, 1, &inOutNotifyHead);
  Profile_EndInternal(NULL);
  result = 1i64;
LABEL_16:
  _R11 = &v36;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
GetAnimInfo
==============
*/

XAnimInfo *__fastcall GetAnimInfo(unsigned __int16 infoIndex)
{
  return XAnimGetAnimInfo(infoIndex);
}

/*
==============
GetNonRootAnimInfo
==============
*/
XAnimInfo *GetNonRootAnimInfo(unsigned __int16 infoIndex)
{
  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 285, ASSERT_TYPE_ASSERT, "( infoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "infoIndex", "0", 0, 0i64) )
    __debugbreak();
  return XAnimGetAnimInfo(infoIndex);
}

/*
==============
XAnimAcquireMemoryLocks
==============
*/
void XAnimAcquireMemoryLocks(void)
{
  Mem_Ownership_AllocAcquire(MOVEMENT);
}

/*
==============
XAnimAddClientNotify
==============
*/

void __fastcall XAnimAddClientNotify(scr_string_t notifyName, scr_string_t notetrackName, double frac, unsigned __int16 notifyType, const XAnimParts *animParts, void *customData, XAnimNotifyHandle *notifyHead)
{
  unsigned __int16 v8; 
  scr_string_t v10; 
  int v11; 
  const char *v12; 
  XAnimNotifyHandle *v13; 
  int v14; 
  const XAnimNotify *i; 
  unsigned __int16 m_notifyIndex; 
  unsigned __int16 v20; 
  bool v24; 
  bool v25; 
  __int64 v30; 
  __int64 v31; 
  double v32; 
  double v33; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  v8 = notifyType;
  __asm { vmovaps xmm6, xmm2 }
  v10 = notifyName;
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2463, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_clientNotifyListFreeIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_clientNotifyListFreeIndex) )
    __debugbreak();
  v11 = _InterlockedIncrement(&s_clientNotifyListFreeIndex);
  if ( (unsigned __int64)v11 < 0x2000 )
  {
    v13 = notifyHead;
    v14 = 1;
    for ( i = DObjGetClientNotifyFirst((const XAnimNotifyHandle)notifyHead->m_notifyIndex); i; i = DObjGetClientNotifyNext(i) )
      ++v14;
    if ( (unsigned int)v11 >= 0x2000 )
    {
      LODWORD(v30) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2487, ASSERT_TYPE_ASSERT, "(unsigned)( notifyIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientNotifyList ) ) + 0 ) )", "notifyIndex doesn't index s_clientNotifyList\n\t%i not in [0, %i)", v30, 0x2000) )
        __debugbreak();
    }
    m_notifyIndex = notifyHead->m_notifyIndex;
    _RSI = v11;
    if ( notifyHead->m_notifyIndex != 0xFFFF )
    {
      _R15 = s_clientNotifyList;
      if ( m_notifyIndex >= 0x2000u )
      {
        LODWORD(v31) = 0x2000;
        LODWORD(v30) = m_notifyIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2497, ASSERT_TYPE_ASSERT, "(unsigned)( nextHandle.Index() ) < (unsigned)( ( sizeof( *array_counter( s_clientNotifyList ) ) + 0 ) )", "nextHandle.Index() doesn't index s_clientNotifyList\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      _RCX = 3i64 * m_notifyIndex;
      __asm { vcomiss xmm6, dword ptr [r15+rcx*8+0Ch] }
      _RSI = v11;
      v13 = notifyHead;
      v10 = notifyName;
      v8 = notifyType;
    }
    s_clientNotifyList[_RSI].nextHandle.m_notifyIndex = m_notifyIndex;
    if ( v13->m_notifyIndex != m_notifyIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2515, ASSERT_TYPE_ASSERT, "(nextHandle.Equals( notifyHead ))", (const char *)&queryFormat, "nextHandle.Equals( notifyHead )") )
      __debugbreak();
    v20 = truncate_cast<unsigned short,int>(v11);
    v13->m_notifyIndex = v20;
    if ( v20 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 315, ASSERT_TYPE_SANITY, "( IsValid() )", (const char *)&queryFormat, "IsValid()") )
      __debugbreak();
    _RCX = s_clientNotifyList;
    s_clientNotifyList[_RSI].noteName = notetrackName;
    __asm { vmovss  dword ptr [rcx+rsi*8+0Ch], xmm6 }
    s_clientNotifyList[_RSI].animParts = animParts;
    s_clientNotifyList[_RSI].notifyName = v10;
    s_clientNotifyList[_RSI].notifyType = v8;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    for ( _RBX = DObjGetClientNotifyFirst((const XAnimNotifyHandle)v13->m_notifyIndex); _RBX; _RBX = DObjGetClientNotifyNext(_RBX) )
    {
      v24 = v14 == 0;
      if ( !v14 )
      {
        v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2535, ASSERT_TYPE_ASSERT, "( nodeCount > 0 )", "Unexpected numer of nodes after modifying the note track list");
        v24 = !v25;
        if ( v25 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vcomiss xmm6, xmm0
      }
      if ( !v24 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A8h+var_68], xmm0
          vcvtss2sd xmm1, xmm6, xmm6
          vmovsd  [rsp+0A8h+var_70], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2536, ASSERT_TYPE_ASSERT, "( verifyFrac ) <= ( verifyNode->timeFrac )", "%s <= %s\n\t%g, %g", "verifyFrac", "verifyNode->timeFrac", v32, v33) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rbx+0Ch] }
      --v14;
    }
  }
  else
  {
    if ( ((unsigned __int64)&s_clientNotifyListFreeIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_clientNotifyListFreeIndex) )
      __debugbreak();
    _InterlockedDecrement(&s_clientNotifyListFreeIndex);
    v12 = SL_ConvertToStringSafe(v10);
    Com_PrintError(14, "XAnimAddClientNotify: Exceeded limit of %i notifies, ignoring '%s'\n", 0x2000i64, v12);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2473, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimAddClientNotify: Exceeded limit of note tracks per frame, please report to code") )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
XAnimAddNotetrackTimesToScriptArray
==============
*/
void XAnimAddNotetrackTimesToScriptArray(scrContext_t *scrContext, const XAnim_s *anims, unsigned int animIndex, scr_string_t name)
{
  XAnimParts *PartsInternal; 
  XAnimParts *v7; 
  int v9; 

  PartsInternal = XAnimGetPartsInternal(&anims->entries[animIndex]);
  v7 = PartsInternal;
  _RBX = PartsInternal->notify;
  if ( _RBX )
  {
    v9 = 0;
    if ( PartsInternal->notifyCount )
    {
      do
      {
        if ( _RBX->name == name )
        {
          __asm { vmovss  xmm1, dword ptr [rbx+4]; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArray(scrContext);
        }
        ++v9;
        ++_RBX;
      }
      while ( v9 < v7->notifyCount );
    }
  }
}

/*
==============
XAnimAddServerNotify
==============
*/
void XAnimAddServerNotify(scr_string_t notifyName, scr_string_t notetrackName)
{
  int v2; 
  int v5; 
  int v6; 

  v2 = s_notifyListSVSize;
  if ( (unsigned int)s_notifyListSVSize >= 0x80 )
  {
    v6 = 128;
    v5 = s_notifyListSVSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4226, ASSERT_TYPE_ASSERT, "(unsigned)( s_notifyListSVSize ) < (unsigned)( ( sizeof( *array_counter( s_notifyListSV ) ) + 0 ) )", "s_notifyListSVSize doesn't index s_notifyListSV\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
    v2 = s_notifyListSVSize;
  }
  s_notifyListSVSize = v2 + 1;
  s_notifyListSV[v2].noteName = notetrackName;
  s_notifyListSV[v2].notifyName = notifyName;
}

/*
==============
XAnimAllocChildInfoIndex
==============
*/
unsigned __int16 XAnimAllocChildInfoIndex(const DObj *obj, const XAnimSubTreeID subTreeID, unsigned int animIndex, unsigned __int16 parentInfoIndex)
{
  XAnimTree *tree; 
  __int64 v5; 
  XAnimToXModel *AnimToModel; 
  const XAnim_s *SubTreeAnims; 

  tree = obj->tree;
  v5 = animIndex;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6978, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  AnimToModel = NULL;
  if ( (_DWORD)v5 )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6985, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( (unsigned int)v5 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6986, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v5, SubTreeAnims->size) )
      __debugbreak();
    AnimToModel = XAnimGetAnimToModel(obj, &SubTreeAnims->entries[v5], NULL);
  }
  return XAnimAllocInfoWithParent(tree, subTreeID, AnimToModel, v5, parentInfoIndex, 1);
}

/*
==============
XAnimAllocInfo
==============
*/
XAnimInfo *XAnimAllocInfo(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, int after)
{
  unsigned __int16 v5; 

  v5 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, after, NULL);
  return XAnimGetAnimInfo(v5);
}

/*
==============
XAnimAllocInfoIndex
==============
*/
unsigned __int16 XAnimAllocInfoIndex(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, int after, XModelNameMap *modelNameMap)
{
  XAnimTree *tree; 
  __int64 v7; 
  const XAnim_s *SubTreeAnims; 
  XAnimSubTreeID v12; 
  unsigned __int16 parent; 
  unsigned int v14; 
  unsigned __int16 v15; 
  const XAnimEntry *v16; 
  unsigned __int16 v17; 
  XAnimToXModel *AnimToModel; 

  tree = obj->tree;
  v7 = animIndex;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6917, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (_DWORD)v7 )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6922, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    v12 = subTreeID;
    parent = SubTreeAnims->entries[v7].parent;
    if ( subTreeID && !parent )
    {
      XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v7);
      XAnimAssertGraftSyncNode(tree, graftAnimIndex, &SubTreeAnims->entries[v7]);
      v12 = XANIM_SUBTREE_DEFAULT;
      v14 = graftAnimIndex;
    }
    else
    {
      v14 = parent;
    }
    v15 = XAnimEnsureGoalWeightParent(obj, graftAnimIndex, v12, v14);
    v16 = &SubTreeAnims->entries[v7];
    v17 = v15;
    AnimToModel = XAnimGetAnimToModel(obj, v16, modelNameMap);
  }
  else
  {
    AnimToModel = NULL;
    v17 = 0;
  }
  return XAnimAllocInfoWithParent(tree, subTreeID, AnimToModel, v7, v17, after);
}

/*
==============
XAnimAllocInfoWithParent
==============
*/
__int64 XAnimAllocInfoWithParent(XAnimTree *tree, const XAnimSubTreeID subTreeID, XAnimToXModel *animToModel, unsigned int animIndex, unsigned __int16 parentInfoIndex, int after)
{
  unsigned __int16 v7; 
  __int64 v9; 
  XAnimEntry *v11; 
  XAnimParts *parts; 
  const dvar_t *v13; 
  bool v16; 
  bool v17; 
  char ActiveGameMode; 
  XAnimParts *v19; 
  bool v21; 
  const char *name; 
  bool v23; 
  bool v28; 
  XAnimTree *v29; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 v31; 
  unsigned __int16 children; 
  unsigned __int8 *v33; 
  __int64 v34; 
  unsigned __int8 *v35; 
  __int64 v36; 
  XAnimParts *v37; 
  __int64 result; 
  __int64 v39; 
  __int64 v40; 
  unsigned __int16 outInfoID; 
  XAnimInfo *v42; 
  XAnimSubTreeID v43; 
  XAnim_s *anims; 
  XAnimTree *treea; 
  XAnimEntry *v46; 
  XAnimToXModel *v47; 
  DLogContext context; 
  char Destination[3]; 
  char v50[1021]; 
  char buffer[4096]; 

  v7 = parentInfoIndex;
  v9 = animIndex;
  LODWORD(v42) = animIndex;
  v47 = animToModel;
  v43 = subTreeID;
  treea = tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6654, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  anims = (XAnim_s *)XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6657, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  strcpy(Destination, "NA");
  v11 = &anims->entries[v9];
  v46 = v11;
  memset_0(v50, 0, sizeof(v50));
  if ( cm.name )
    strncpy(Destination, cm.name, 0x400ui64);
  parts = v11->parts;
  if ( parts && v11->nodeType == XANIM_NODE_TYPE_ANIMPARTS && parts->name )
  {
    v13 = DCONST_DVARBOOL_xanim_trackingEnable;
    if ( !DCONST_DVARBOOL_xanim_trackingEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_trackingEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      _RAX = v11->parts;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rax+64h]
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6671, ASSERT_TYPE_ASSERT, "(anim->parts->framerate > 0.0f)", (const char *)&queryFormat, "anim->parts->framerate > 0.0f") )
        __debugbreak();
      v16 = (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG;
      v17 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG;
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      v19 = v11->parts;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      v21 = ActiveGameMode == 1;
      name = v19->name;
      v23 = v19->flags & 1;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm0, dword ptr [rcx+64h]
        vmulss  xmm2, xmm1, cs:__real@447a0000
        vcvttss2si r14d, xmm2
      }
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
      {
        if ( DLog_IsActive() )
        {
          v28 = DLog_BeginEvent(&context, "xanim_tracking");
          context.autoEndEvent = 1;
          if ( v28 && DLog_String(&context, "animation_name", name, 0) && DLog_String(&context, "map_name", Destination, 0) && DLog_Int32(&context, "animation_duration", _ER14) && DLog_Bool(&context, "is_loop", v23) && DLog_Bool(&context, "is_sp", v21) && DLog_Bool(&context, "is_cp", v17) && DLog_Bool(&context, "is_mp", v16) )
            DLog_RecordContext(&context);
        }
        else
        {
          context.error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      v7 = parentInfoIndex;
      LODWORD(v9) = (_DWORD)v42;
    }
  }
  v29 = treea;
  if ( !XAnimCreateNode(v11->nodeType, treea, anims, v9, &outInfoID) )
    Sys_Error((const ObfuscateErrorText)&stru_1441AE860);
  NonRootAnimInfo = GetNonRootAnimInfo(outInfoID);
  v42 = NonRootAnimInfo;
  if ( (unsigned int)v9 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6702, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v9, anims->size) )
    __debugbreak();
  v31 = 0;
  children = XAnimGetAnimInfo(v7)->children;
  if ( after )
  {
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v36 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v36 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v40) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v39) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v39, v40) )
              __debugbreak();
          }
          v35 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v36];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v40) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v39) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v39, v40) )
              __debugbreak();
          }
          v35 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v35[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6726, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
          __debugbreak();
        if ( *((unsigned __int16 *)v35 + 3) > (unsigned int)v9 )
          break;
        v31 = children;
        children = *((_WORD *)v35 + 5);
      }
      while ( children );
      NonRootAnimInfo = v42;
      v11 = v46;
      goto LABEL_74;
    }
  }
  else if ( children )
  {
    do
    {
      if ( (children & 0x8000u) != 0 )
      {
        v34 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v34 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v40) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v39) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v39, v40) )
            __debugbreak();
        }
        v33 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v34];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v40) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v39) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        v33 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      if ( !v33[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6713, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
        __debugbreak();
      if ( *((unsigned __int16 *)v33 + 3) >= (unsigned int)v9 )
        break;
      v31 = children;
      children = *((_WORD *)v33 + 5);
    }
    while ( children );
LABEL_74:
    v29 = treea;
    v7 = parentInfoIndex;
  }
  if ( (unsigned int)v9 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6734, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  NonRootAnimInfo->subTreeID = v43;
  NonRootAnimInfo->children = 0;
  NonRootAnimInfo->animToModel = v47;
  NonRootAnimInfo->prev = v31;
  NonRootAnimInfo->next = children;
  NonRootAnimInfo->animIndex = v9;
  NonRootAnimInfo->parent = v7;
  v37 = v11->parts;
  NonRootAnimInfo->parts = v37;
  if ( WORD2(v37) != v11->animParent.children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6745, ASSERT_TYPE_ASSERT, "(info->animParent.children == anim->animParent.children)", (const char *)&queryFormat, "info->animParent.children == anim->animParent.children") )
    __debugbreak();
  if ( NonRootAnimInfo->animParent.flags != v11->animParent.flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6746, ASSERT_TYPE_ASSERT, "(info->animParent.flags == anim->animParent.flags)", (const char *)&queryFormat, "info->animParent.flags == anim->animParent.flags") )
    __debugbreak();
  if ( NonRootAnimInfo->animParent.syncGroup[0] != v11->animParent.syncGroup[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6747, ASSERT_TYPE_ASSERT, "(info->animParent.syncGroup == anim->animParent.syncGroup)", (const char *)&queryFormat, "info->animParent.syncGroup == anim->animParent.syncGroup") )
    __debugbreak();
  if ( (unsigned int)v9 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6749, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  NonRootAnimInfo->inuse = 1;
  NonRootAnimInfo->tree = v29;
  if ( children )
    XAnimGetAnimInfo(children)->prev = outInfoID;
  if ( v31 )
  {
    XAnimGetAnimInfo(v31)->next = outInfoID;
    return outInfoID;
  }
  else if ( v7 )
  {
    XAnimGetAnimInfo(v7)->children = outInfoID;
    return outInfoID;
  }
  else
  {
    result = outInfoID;
    v29->children = outInfoID;
  }
  return result;
}

/*
==============
XAnimAssertValidParentInfoIndex
==============
*/
void XAnimAssertValidParentInfoIndex(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, unsigned int animIndex)
{
  const XAnim_s *SubTreeAnims; 
  XAnimEntry *v10; 
  XAnimInfo *AnimInfo; 
  const char *v12; 
  int v13; 
  const char *v14; 
  unsigned __int16 parent; 
  unsigned __int16 v16; 
  __int64 v17; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8421, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8422, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !parentInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8423, ASSERT_TYPE_ASSERT, "(parentInfoIndex)", (const char *)&queryFormat, "parentInfoIndex") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8428, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= SubTreeAnims->size )
  {
    LODWORD(v17) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8429, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v17, SubTreeAnims->size) )
      __debugbreak();
  }
  v10 = &SubTreeAnims->entries[animIndex];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8432, ASSERT_TYPE_ASSERT, "(anim)", (const char *)&queryFormat, "anim") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(parentInfoIndex);
  if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8435, ASSERT_TYPE_ASSERT, "(parentInfo)", (const char *)&queryFormat, "parentInfo") )
    __debugbreak();
  if ( subTreeID )
  {
    parent = v10->parent;
    v16 = AnimInfo->animIndex;
    if ( parent )
    {
      if ( v16 == parent )
        return;
      v12 = "parentInfo->animIndex == anim->parent";
      v13 = 8448;
      v14 = "(parentInfo->animIndex == anim->parent)";
    }
    else
    {
      if ( v16 == graftAnimIndex )
        return;
      v12 = "parentInfo->animIndex == graftAnimIndex";
      v13 = 8453;
      v14 = "(parentInfo->animIndex == graftAnimIndex)";
    }
  }
  else
  {
    if ( AnimInfo->animIndex == v10->parent )
      return;
    v12 = "parentInfo->animIndex == anim->parent";
    v13 = 8441;
    v14 = "(parentInfo->animIndex == anim->parent)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", v13, ASSERT_TYPE_ASSERT, v14, (const char *)&queryFormat, v12) )
    __debugbreak();
}

/*
==============
XAnimBlend
==============
*/
void XAnimBlend(XAnim_s *anims, unsigned int animIndex, const char *name, unsigned int children, unsigned int num, unsigned int flags, const XAnimSyncGroupID syncGroup, bool allowAllocs)
{
  __int64 v8; 
  const char *v10; 
  XAnimEntry *v12; 
  unsigned __int16 parent; 
  unsigned __int8 lod; 
  unsigned int v15; 
  int v16; 
  XAnimEntry *v17; 
  __int64 v18; 
  char *v20; 
  char *v21; 
  char v22; 

  v8 = animIndex;
  v10 = name;
  if ( !num && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 649, ASSERT_TYPE_ASSERT, "(num > 0)", (const char *)&queryFormat, "num > 0") )
    __debugbreak();
  v12 = &anims->entries[v8];
  v12->numAnims = num;
  if ( num != (unsigned __int16)num && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 653, ASSERT_TYPE_ASSERT, "(num == anim->numAnims)", (const char *)&queryFormat, "num == anim->numAnims") )
    __debugbreak();
  v12->animParent.flags = flags;
  v12->animParent.syncGroup[0] = syncGroup;
  if ( (_BYTE)syncGroup != 4 && (flags & 3) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 659, ASSERT_TYPE_ASSERT, "((syncGroup == XAnimSyncGroupID::NONE) || (flags & XANIM_ANY_SYNC_NODE))", (const char *)&queryFormat, "(syncGroup == XAnimSyncGroupID::NONE) || (flags & XANIM_ANY_SYNC_NODE)") )
    __debugbreak();
  v12->animParent.children = children;
  if ( children != (unsigned __int16)children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 662, ASSERT_TYPE_ASSERT, "(children == anim->animParent.children)", (const char *)&queryFormat, "children == anim->animParent.children") )
    __debugbreak();
  if ( num + v12->animParent.children > anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 663, ASSERT_TYPE_ASSERT, "(anim->animParent.children + num <= anims->size)", (const char *)&queryFormat, "anim->animParent.children + num <= anims->size") )
    __debugbreak();
  v12->nodeType = XANIM_NODE_TYPE_BLEND;
  v12->bindingIndex = -1;
  if ( (_DWORD)v8 && (parent = v12->parent) != 0 )
    lod = anims->entries[parent].lod;
  else
    lod = 5;
  v15 = 0;
  v12->lod = lod;
  if ( num )
  {
    do
    {
      anims->entries[v15 + v12->animParent.children].parent = v8;
      if ( (_DWORD)v8 != anims->entries[v15 + v12->animParent.children].parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 680, ASSERT_TYPE_ASSERT, "(animIndex == anims->entries[anim->animParent.children + i].parent)", (const char *)&queryFormat, "animIndex == anims->entries[anim->animParent.children + i].parent") )
        __debugbreak();
      ++v15;
    }
    while ( v15 < num );
    v10 = name;
  }
  if ( v12->numAnims )
  {
    if ( (v12->animParent.flags & 0x210) != 0 )
    {
      v16 = v12->parent;
      if ( v12->parent )
      {
        do
        {
          v17 = &anims->entries[v16];
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 298, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( v17->numAnims && (v17->animParent.flags & 0x210) != 0 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441A9F18, 352i64);
          v16 = v17->parent;
        }
        while ( v17->parent );
      }
    }
  }
  if ( allowAllocs )
  {
    if ( !anims->debugAnimNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 702, ASSERT_TYPE_ASSERT, "(anims->debugAnimNames)", (const char *)&queryFormat, "anims->debugAnimNames") )
      __debugbreak();
    if ( anims->debugAnimNames[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 703, ASSERT_TYPE_ASSERT, "(!anims->debugAnimNames[animIndex])", (const char *)&queryFormat, "!anims->debugAnimNames[animIndex]") )
      __debugbreak();
    v18 = -1i64;
    while ( v10[++v18] != 0 )
      ;
    v20 = (char *)Mem_HunkDebug_AllocAligned(v18 + 1, 1ui64, "XAnimBlend");
    Core_strcpy(v20, v18 + 1, v10);
    anims->debugAnimNames[v8] = v20;
  }
  else
  {
    v21 = anims->debugAnimNames[v8];
    do
    {
      v22 = *v10++;
      *v21++ = v22;
    }
    while ( v22 );
  }
}

/*
==============
XAnimCalcAbsDelta
==============
*/
void XAnimCalcAbsDelta(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, vec4_t *rot, vec3_t *trans)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  char v29; 
  XAnimRotPos rotPos; 

  _RBX = rot;
  _RDI = trans;
  Profile_Begin(412);
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6468, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; weightScale
      vmovaps [rsp+0B8h+var_48], xmm6
      vmovaps [rsp+0B8h+var_58], xmm7
    }
    XAnimCalcDeltaTree(obj, InfoIndex, *(const float *)&_XMM2, (const XAnimDeltaInfo)16842753, &rotPos, 0);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0B8h+rotPos.rot]
      vmovss  xmm5, dword ptr [rsp+0B8h+rotPos.rot+4]
      vmovss  xmm6, dword ptr [rsp+0B8h+rotPos.rot+8]
      vmovss  xmm7, dword ptr [rsp+0B8h+rotPos.rot+0Ch]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm2, xmm1
    }
    if ( v29 )
    {
      rot->v[3] = 1.0;
      *(_QWORD *)rot->v = 0i64;
      rot->v[2] = 0.0;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbx], xmm4
        vmovss  dword ptr [rbx+4], xmm5
        vmovss  dword ptr [rbx+8], xmm6
        vmovss  dword ptr [rbx+0Ch], xmm7
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.pos]
      vmovss  xmm1, dword ptr [rsp+0B8h+rotPos.pos+4]
      vmovaps xmm7, [rsp+0B8h+var_58]
      vmovaps xmm6, [rsp+0B8h+var_48]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.pos+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
  }
  else
  {
    rot->v[3] = 1.0;
    *(_QWORD *)rot->v = 0i64;
    rot->v[2] = 0.0;
    *(_QWORD *)trans->v = 0i64;
    trans->v[2] = 0.0;
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimCalcAbsDeltaParts
==============
*/

void __fastcall XAnimCalcAbsDeltaParts(const XAnimParts *parts, double weightScale, double time, XAnimRotPos *rotPos)
{
  unsigned __int8 flags; 
  vec4_t rotDelta; 
  float4 posDelta; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  flags = parts->flags;
  _RBX = rotPos;
  __asm { vmovaps xmm6, xmm1 }
  if ( (flags & 2) != 0 )
  {
    __asm { vmovaps xmm1, xmm2; time }
    XAnim_CalcDeltaForTime(parts, *(const float *)&_XMM1, (vec2_t *)&rotDelta.xyz.z, &posDelta);
    __asm { vmulss  xmm3, xmm6, cs:__real@38000100 }
LABEL_5:
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rsp+68h+rotDelta+8]
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  xmm0, dword ptr [rsp+68h+rotDelta+0Ch]
      vmovss  dword ptr [rbx+8], xmm2
      vmulss  xmm1, xmm0, xmm3
      vaddss  xmm2, xmm1, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rbx+0Ch], xmm2
      vmovaps xmm0, xmm6
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm1, xmm0, xmmword ptr [rsp+68h+posDelta.v]
      vaddss  xmm0, xmm6, dword ptr [rbx+10h]
      vmovss  dword ptr [rbx+10h], xmm0
      vaddss  xmm0, xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+14h], xmm0
      vshufps xmm3, xmm1, xmm1, 0AAh ; 'ª'
      vshufps xmm2, xmm1, xmm1, 55h ; 'U'
      vaddss  xmm1, xmm2, dword ptr [rbx+18h]
      vmovss  dword ptr [rbx+18h], xmm1
      vaddss  xmm0, xmm3, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rbx+1Ch], xmm0
    }
    goto LABEL_6;
  }
  if ( (flags & 4) != 0 )
  {
    __asm { vmovaps xmm1, xmm2; time }
    XAnim_CalcDelta3DForTime(parts, *(const float *)&_XMM1, &rotDelta, &posDelta);
    __asm
    {
      vmulss  xmm3, xmm6, cs:__real@38000100
      vmulss  xmm1, xmm3, dword ptr [rsp+68h+rotDelta]
      vaddss  xmm2, xmm1, dword ptr [rbx]
      vmulss  xmm1, xmm3, dword ptr [rsp+68h+rotDelta+4]
      vmovss  dword ptr [rbx], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm2
    }
    goto LABEL_5;
  }
LABEL_6:
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
XAnimCalcDelta3D
==============
*/
void XAnimCalcDelta3D(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, vec4_t *rot, vec3_t *trans, bool bUseGoalWeight)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  char v30; 
  XAnimDeltaInfo deltaInfo; 
  XAnimRotPos rotPos; 

  _RBX = rot;
  _RDI = trans;
  Profile_Begin(412);
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6414, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000; weightScale }
    deltaInfo.bUseGoalWeight = bUseGoalWeight;
    *(_WORD *)&deltaInfo.bClear = 1;
    deltaInfo.bAbs = 0;
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm6
      vmovaps [rsp+0B8h+var_58], xmm7
    }
    XAnimCalcDeltaTree(obj, InfoIndex, *(const float *)&_XMM2, deltaInfo, &rotPos, 1);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0B8h+rotPos.rot]
      vmovss  xmm5, dword ptr [rsp+0B8h+rotPos.rot+4]
      vmovss  xmm6, dword ptr [rsp+0B8h+rotPos.rot+8]
      vmovss  xmm7, dword ptr [rsp+0B8h+rotPos.rot+0Ch]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm2, xmm1
    }
    if ( v30 )
    {
      rot->v[3] = 1.0;
      *(_QWORD *)rot->v = 0i64;
      rot->v[2] = 0.0;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbx], xmm4
        vmovss  dword ptr [rbx+4], xmm5
        vmovss  dword ptr [rbx+8], xmm6
        vmovss  dword ptr [rbx+0Ch], xmm7
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.pos]
      vmovss  xmm1, dword ptr [rsp+0B8h+rotPos.pos+4]
      vmovaps xmm7, [rsp+0B8h+var_58]
      vmovaps xmm6, [rsp+0B8h+var_48]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.pos+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
  }
  else
  {
    rot->v[3] = 1.0;
    *(_QWORD *)rot->v = 0i64;
    rot->v[2] = 0.0;
    *(_QWORD *)trans->v = 0i64;
    trans->v[2] = 0.0;
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimCalcDelta
==============
*/
void XAnimCalcDelta(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, vec2_t *rot, vec3_t *trans, bool bUseGoalWeight)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  bool v17; 
  bool v20; 
  bool v22; 
  XAnimDeltaInfo deltaInfo; 
  XAnimRotPos rotPos; 

  _RDI = rot;
  _RBX = trans;
  Profile_Begin(412);
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6361, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000; weightScale }
    deltaInfo.bUseGoalWeight = bUseGoalWeight;
    *(_WORD *)&deltaInfo.bClear = 1;
    deltaInfo.bAbs = 0;
    __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
    XAnimCalcDeltaTree(obj, InfoIndex, *(const float *)&_XMM2, deltaInfo, &rotPos, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.rot]
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm0, xmm6
    }
    if ( !v17 )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6383, ASSERT_TYPE_ASSERT, "(!rotPos.rot[0])", (const char *)&queryFormat, "!rotPos.rot[0]");
      v17 = !v20;
      if ( v20 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.rot+4]
      vucomiss xmm0, xmm6
    }
    if ( !v17 )
    {
      v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6384, ASSERT_TYPE_ASSERT, "(!rotPos.rot[1])", (const char *)&queryFormat, "!rotPos.rot[1]");
      v17 = !v22;
      if ( v22 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.rot+8]
      vucomiss xmm0, xmm6
    }
    if ( v17 )
      goto LABEL_14;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0B8h+rotPos.rot+0Ch]
      vucomiss xmm1, xmm6
    }
    if ( v17 )
    {
LABEL_14:
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
      }
    }
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.pos]
      vmovss  xmm1, dword ptr [rsp+0B8h+rotPos.pos+4]
      vmovaps xmm6, [rsp+0B8h+var_58]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+rotPos.pos+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  else
  {
    rot->v[1] = 1.0;
    rot->v[0] = 0.0;
    *(_QWORD *)trans->v = 0i64;
    trans->v[2] = 0.0;
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimCalcDeltaTree
==============
*/

void __fastcall XAnimCalcDeltaTree(const DObj *obj, const unsigned __int16 infoIndex, double weightScale, const XAnimDeltaInfo deltaInfo, XAnimRotPos *rotPos, bool b3D)
{
  XAnimDeltaInfo v11; 
  const XAnimParts *parts; 
  unsigned __int16 children; 
  unsigned __int16 next; 
  unsigned __int16 v34; 
  bool v38; 
  bool v39; 
  __int64 v77; 
  XAnimDeltaInfo deltaInfoa; 
  bool bClear; 
  char v82; 

  __asm { vmovaps [rsp+128h+var_88], xmm9 }
  _RSI = rotPos;
  v11 = deltaInfo;
  bClear = deltaInfo.bClear;
  __asm { vmovaps xmm9, xmm2 }
  _RBX = GetNonRootAnimInfo(infoIndex);
  if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5223, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( _RBX->animToModel )
  {
    if ( v11.bClear )
    {
      rotPos->rot = 0ui64;
      *(_OWORD *)&rotPos->posWeight = 0ui64;
    }
    parts = _RBX->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5236, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+28h]; time2
      vmovaps xmm1, xmm9; weightScale
    }
    if ( deltaInfo.bAbs )
    {
      __asm { vmovaps xmm2, xmm3; time }
      XAnimCalcAbsDeltaParts(parts, *(double *)&_XMM1, *(double *)&_XMM2, rotPos);
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rbx+2Ch]; time1 }
      if ( b3D )
        XAnimCalcRelDeltaParts3D(parts, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, rotPos, 1);
      else
        XAnimCalcRelDeltaParts(parts, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, rotPos, 1);
    }
  }
  else
  {
    children = _RBX->children;
    __asm
    {
      vmovaps [rsp+128h+var_68], xmm7
      vmovaps [rsp+128h+var_78], xmm8
    }
    if ( children )
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
      while ( 1 )
      {
        if ( !children )
        {
          LODWORD(v77) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 285, ASSERT_TYPE_ASSERT, "( infoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "infoIndex", "0", v77, 0i64) )
            __debugbreak();
        }
        _RAX = XAnimGetAnimInfo(children);
        if ( deltaInfo.bUseGoalWeight )
          __asm { vmovss  xmm7, dword ptr [rax+38h] }
        else
          __asm { vmovss  xmm7, dword ptr [rax+3Ch] }
        __asm
        {
          vcomiss xmm7, xmm8
          vucomiss xmm7, xmm8
        }
        next = _RAX->next;
        if ( deltaInfo.bUseGoalWeight )
          break;
        children = _RAX->next;
        if ( !next )
          goto LABEL_25;
      }
      __asm { vmovaps [rsp+128h+var_58], xmm6 }
      if ( next )
      {
        _R15 = XAnimGetAnimInfo(next);
        __asm
        {
          vmovss  xmm6, dword ptr [rax+38h]
          vcomiss xmm6, xmm8
          vucomiss xmm6, xmm8
        }
        _R13 = (XAnimRotPos *)&v82;
        *(_WORD *)&deltaInfoa.bAbs = *(_WORD *)&v11.bAbs;
        if ( v11.bClear )
          _R13 = rotPos;
        *(_WORD *)&deltaInfoa.bClear = 257;
        __asm { vmovaps xmm2, xmm7; weightScale }
        XAnimCalcDeltaTree(obj, children, *(const float *)&_XMM2, deltaInfoa, _R13, b3D);
        deltaInfoa.bClear = 0;
        __asm { vmovaps xmm2, xmm6; weightScale }
        XAnimCalcDeltaTree(obj, next, *(const float *)&_XMM2, deltaInfoa, _R13, b3D);
        v34 = _R15->next;
        if ( v34 )
        {
          do
          {
            _R15 = XAnimGetAnimInfo(v34);
            __asm
            {
              vmovss  xmm6, dword ptr [rax+38h]
              vcomiss xmm6, xmm8
              vucomiss xmm6, xmm8
              vmovaps xmm2, xmm6; weightScale
            }
            XAnimCalcDeltaTree(obj, v34, *(const float *)&_XMM2, deltaInfoa, _R13, b3D);
            v34 = _R15->next;
          }
          while ( v34 );
          v11.bClear = bClear;
          _RSI = rotPos;
        }
        if ( deltaInfo.bNormQuat )
        {
          if ( v11.bClear )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi]
              vmovss  xmm2, dword ptr [rsi+4]
              vmovss  xmm3, dword ptr [rsi+8]
              vmovss  xmm4, dword ptr [rsi+0Ch]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm0, xmm3, xmm0; val
              vucomiss xmm0, xmm8
            }
            *(double *)&_XMM0 = I_rsqrt(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm2, xmm0, xmm9
              vshufps xmm2, xmm2, xmm2, 0
              vmulps  xmm1, xmm2, xmmword ptr [rsi]
              vmovups xmmword ptr [rsi], xmm1
              vmovss  xmm0, dword ptr [rsi+10h]
              vucomiss xmm0, xmm8
            }
            if ( !v38 )
            {
              __asm
              {
                vdivss  xmm2, xmm9, xmm0
                vmulss  xmm0, xmm2, dword ptr [rsi+14h]
                vmovss  dword ptr [rsi+14h], xmm0
                vmulss  xmm1, xmm2, dword ptr [rsi+18h]
                vmovss  dword ptr [rsi+18h], xmm1
                vmulss  xmm0, xmm2, dword ptr [rsi+1Ch]
                vmovss  dword ptr [rsi+1Ch], xmm0
                vmovss  dword ptr [rsi+10h], xmm9
              }
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r13+0]
              vmovss  xmm2, dword ptr [r13+4]
              vmovss  xmm3, dword ptr [r13+8]
              vmovss  xmm4, dword ptr [r13+0Ch]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm0, xmm3, xmm0; val
              vucomiss xmm0, xmm8
              vmovss  xmm0, dword ptr [r13+10h]
              vucomiss xmm0, xmm8
            }
          }
        }
        else
        {
          v38 = !v11.bClear;
          if ( !v11.bClear )
          {
            v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5296, ASSERT_TYPE_ASSERT, "(deltaInfo.bClear)", (const char *)&queryFormat, "deltaInfo.bClear");
            v38 = !v39;
            if ( v39 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+10h]
            vucomiss xmm1, xmm8
          }
          if ( !v38 )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vdivss  xmm2, xmm0, xmm1
              vmulss  xmm0, xmm2, dword ptr [rsi+14h]
              vmovss  dword ptr [rsi+14h], xmm0
              vmulss  xmm1, xmm2, dword ptr [rsi+18h]
              vmovss  dword ptr [rsi+18h], xmm1
              vmulss  xmm0, xmm2, dword ptr [rsi+1Ch]
              vmovss  dword ptr [rsi+1Ch], xmm0
            }
          }
        }
      }
      else
      {
        __asm { vmovaps xmm2, xmm9; weightScale }
        XAnimCalcDeltaTree(obj, children, *(const float *)&_XMM2, v11, rotPos, b3D);
      }
      __asm { vmovaps xmm6, [rsp+128h+var_58] }
    }
    else
    {
LABEL_25:
      if ( v11.bClear )
      {
        rotPos->rot = 0ui64;
        *(_OWORD *)&rotPos->posWeight = 0ui64;
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+128h+var_68]
      vmovaps xmm8, [rsp+128h+var_78]
    }
  }
  __asm { vmovaps xmm9, [rsp+128h+var_88] }
}

/*
==============
XAnimCalcNotetrackWeight
==============
*/
double XAnimCalcNotetrackWeight(const XAnimInfo *info, scr_string_t blendInStartNotetrack, scr_string_t blendInEndNotetrack, scr_string_t blendOutStartNotetrack, scr_string_t blendOutEndNotetrack)
{
  XAnimParts *parts; 
  int v15; 
  scr_string_t name; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  float blendOutEndNotetracka; 

  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3239, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  _RDI = parts->notify;
  if ( _RDI )
  {
    v15 = 0;
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, cs:__real@bf800000
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
      vmovaps [rsp+0A8h+var_68], xmm9
      vmovaps [rsp+0A8h+var_78], xmm10
      vmovaps xmm10, xmm6
      vmovaps xmm7, xmm6
      vmovaps xmm8, xmm6
      vmovaps xmm9, xmm6
    }
    if ( parts->notifyCount )
    {
      do
      {
        name = _RDI->name;
        if ( _RDI->name == blendInStartNotetrack )
        {
          __asm { vucomiss xmm7, xmm6 }
          if ( name != blendInStartNotetrack )
          {
            v22 = parts->name;
            v23 = SL_ConvertToString(blendInStartNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 364i64, v23, v22);
          }
          __asm { vmovss  xmm7, dword ptr [rdi+4] }
        }
        else if ( name == blendInEndNotetrack )
        {
          __asm { vucomiss xmm8, xmm6 }
          if ( name != blendInEndNotetrack )
          {
            v24 = parts->name;
            v25 = SL_ConvertToString(blendInEndNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 365i64, v25, v24);
          }
          __asm { vmovss  xmm8, dword ptr [rdi+4] }
        }
        else if ( name == blendOutStartNotetrack )
        {
          __asm { vucomiss xmm9, xmm6 }
          if ( name != blendOutStartNotetrack )
          {
            v26 = parts->name;
            v27 = SL_ConvertToString(blendOutStartNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 366i64, v27, v26);
          }
          __asm { vmovss  xmm9, dword ptr [rdi+4] }
        }
        else if ( name == blendOutEndNotetrack )
        {
          __asm { vucomiss xmm10, xmm6 }
          if ( name != blendOutEndNotetrack )
          {
            v28 = parts->name;
            v29 = SL_ConvertToString(blendOutEndNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 367i64, v29, v28);
          }
          __asm { vmovss  xmm10, dword ptr [rdi+4] }
        }
        ++v15;
        ++_RDI;
      }
      while ( v15 < parts->notifyCount );
    }
    __asm
    {
      vmovaps xmm3, xmm9; notifyOutStartTime
      vmovaps xmm2, xmm8; notifyInEndTime
      vmovaps xmm1, xmm7; notifyInStartTime
      vmovss  [rsp+0A8h+blendOutEndNotetrack], xmm10
      vmovaps xmm10, [rsp+0A8h+var_78]
      vmovaps xmm9, [rsp+0A8h+var_68]
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
    *(double *)&_XMM0 = XAnimCalcNotetrackWeigthWithTimeRange(info, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, blendOutEndNotetracka);
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(double *)&_XMM0;
}

/*
==============
XAnimCalcNotetrackWeigthWithTimeRange
==============
*/

float __fastcall XAnimCalcNotetrackWeigthWithTimeRange(const XAnimInfo *info, double notifyInStartTime, double notifyInEndTime, double notifyOutStartTime, float notifyOutEndTime)
{
  XAnimParts *parts; 
  char v19; 
  bool v20; 
  bool v21; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = info;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm12, xmm2
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm1
  }
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3166, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  parts = _RDI->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3172, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v19 = 0;
  v20 = parts == NULL;
  if ( !parts )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3110, ASSERT_TYPE_ASSERT, "(!throwError || (throwError && parts))", (const char *)&queryFormat, "!throwError || (throwError && parts)");
    v19 = 0;
    v20 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@bf800000
    vucomiss xmm6, xmm7
    vmovss  xmm11, [rsp+0A8h+notifyOutEndTime]
    vxorps  xmm9, xmm9, xmm9
  }
  if ( !v20 )
    goto LABEL_12;
  __asm { vucomiss xmm12, xmm7 }
  if ( !v20 )
  {
LABEL_12:
    __asm
    {
      vcomiss xmm6, xmm9
      vcomiss xmm12, xmm9
    }
  }
  __asm { vucomiss xmm8, xmm7 }
  if ( !v20 )
    goto LABEL_15;
  __asm { vucomiss xmm11, xmm7 }
  if ( !v20 )
  {
LABEL_15:
    __asm
    {
      vcomiss xmm8, xmm9
      vcomiss xmm11, xmm9
    }
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( v20 )
    goto LABEL_19;
  __asm { vucomiss xmm6, xmm12 }
  if ( !v20 )
  {
LABEL_19:
    __asm { vucomiss xmm8, xmm7 }
    if ( v20 )
      goto LABEL_22;
    __asm { vucomiss xmm8, xmm11 }
    if ( !v20 )
    {
LABEL_22:
      __asm { vucomiss xmm6, xmm7 }
      if ( !v20 )
        goto LABEL_24;
      __asm { vucomiss xmm12, xmm7 }
      if ( v20 )
      {
        __asm { vucomiss xmm8, xmm7 }
        if ( v20 )
        {
          __asm { vucomiss xmm11, xmm7 }
        }
        else
        {
          __asm { vcomiss xmm8, xmm11 }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC590, 361i64, parts->name);
        }
      }
      else
      {
LABEL_24:
        __asm { vcomiss xmm6, xmm12 }
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC530, 360i64, parts->name);
      }
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC4B0, 359i64, parts->name);
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC440, 358i64, parts->name);
  }
  __asm { vcomiss xmm8, xmm9 }
  if ( !v19 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, xmm8
      vcomiss xmm0, xmm11
    }
    if ( v19 )
    {
      __asm
      {
        vcomiss xmm6, xmm9
        vmovaps xmm1, xmm0
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm12
      }
      if ( v19 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC5F0, 362i64, parts->name);
        __asm { vmovss  xmm1, dword ptr [rdi+28h] }
      }
      __asm
      {
        vsubss  xmm1, xmm1, xmm8
        vsubss  xmm0, xmm11, xmm8
        vdivss  xmm2, xmm1, xmm0
        vsubss  xmm10, xmm10, xmm2
      }
      goto LABEL_57;
    }
  }
  __asm { vcomiss xmm6, xmm9 }
  if ( v19 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vcomiss xmm0, xmm6
    vcomiss xmm0, xmm12
  }
  if ( !v19 )
  {
LABEL_44:
    __asm { vucomiss xmm8, xmm7 }
    if ( v20 )
    {
      __asm { vucomiss xmm6, xmm7 }
      if ( v20 )
        goto LABEL_57;
    }
    __asm
    {
      vucomiss xmm8, xmm7
      vmovss  xmm0, dword ptr [rdi+28h]
    }
    if ( !v20 )
    {
      __asm { vucomiss xmm6, xmm7 }
      if ( v20 )
      {
        __asm { vcomiss xmm0, xmm11 }
        if ( v19 | v20 )
          goto LABEL_57;
LABEL_56:
        __asm { vxorps  xmm10, xmm10, xmm10 }
        goto LABEL_57;
      }
      __asm { vcomiss xmm6, xmm8 }
      if ( v19 | v20 )
      {
        __asm { vcomiss xmm0, xmm6 }
        if ( !v19 )
          __asm { vcomiss xmm0, xmm11 }
        goto LABEL_56;
      }
      __asm { vcomiss xmm0, xmm11 }
      if ( v19 )
        goto LABEL_57;
    }
    __asm { vcomiss xmm0, xmm6 }
    if ( !v19 )
      goto LABEL_57;
    goto LABEL_56;
  }
  __asm
  {
    vcomiss xmm8, xmm9
    vmovaps xmm1, xmm0
    vcomiss xmm0, xmm8
    vcomiss xmm0, xmm11
  }
  if ( v19 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC5F0, 363i64, parts->name);
    __asm { vmovss  xmm1, dword ptr [rdi+28h] }
  }
  __asm
  {
    vsubss  xmm1, xmm1, xmm6
    vsubss  xmm0, xmm12, xmm6
    vdivss  xmm10, xmm1, xmm0
  }
LABEL_57:
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm0, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCalcRelDeltaParts3D
==============
*/

void __fastcall XAnimCalcRelDeltaParts3D(const XAnimParts *parts, double weightScale, double time1, double time2, XAnimRotPos *rotPos, int quatIndex)
{
  unsigned __int8 flags; 
  vec3_t in; 
  vec3_t out; 
  vec4_t quat; 
  float4 v111; 
  float4 posDelta; 
  vec4_t rotDelta; 
  vec4_t v114; 
  char v125; 

  __asm
  {
    vmovaps [rsp+180h+var_90], xmm13
    vmovaps [rsp+180h+var_A0], xmm14
    vmovaps [rsp+180h+var_B0], xmm15
  }
  flags = parts->flags;
  _RBX = rotPos;
  __asm
  {
    vmovaps xmm14, xmm3
    vmovaps xmm13, xmm2
    vmovaps xmm15, xmm1
  }
  if ( (flags & 2) != 0 )
  {
    XAnimCalcRelDeltaParts(parts, *(const float *)&weightScale, *(const float *)&time1, *(const float *)&time2, rotPos, quatIndex);
  }
  else if ( (flags & 4) != 0 )
  {
    __asm
    {
      vmovaps [rsp+180h+var_20], xmm6
      vmovaps [rsp+180h+var_30], xmm7
      vmovaps [rsp+180h+var_40], xmm8
      vmovaps [rsp+180h+var_50], xmm9
      vmovaps [rsp+180h+var_60], xmm10
      vmovaps [rsp+180h+var_70], xmm11
      vmovaps [rsp+180h+var_80], xmm12
      vmulss  xmm12, xmm15, cs:__real@30800200
      vmovaps xmm1, xmm13; time
    }
    XAnim_CalcDelta3DForTime(parts, *(const float *)&_XMM1, &rotDelta, &posDelta);
    __asm { vmovaps xmm1, xmm14; time }
    XAnim_CalcDelta3DForTime(parts, *(const float *)&_XMM1, &v114, &v111);
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+80h+var_D0+0Ch]
      vmovss  xmm6, dword ptr [rbp+80h+var_D0]
      vmovss  xmm7, dword ptr [rbp+80h+var_D0+8]
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm5, dword ptr [rbp+80h+rotDelta+0Ch]
      vmovss  xmm4, dword ptr [rbp+80h+var_D0+4]
      vmovss  xmm0, dword ptr [rbp+80h+rotDelta]
      vmovss  xmm1, dword ptr [rbp+80h+rotDelta+4]
      vxorps  xmm10, xmm1, xmm2
      vxorps  xmm9, xmm0, xmm2
      vmovss  xmm0, dword ptr [rbp+80h+rotDelta+8]
      vxorps  xmm11, xmm0, xmm2
      vmulss  xmm1, xmm8, xmm9
      vmulss  xmm0, xmm6, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm10
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm11
      vsubss  xmm1, xmm3, xmm0
      vmulss  xmm2, xmm1, xmm12
      vaddss  xmm3, xmm2, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm3
      vmulss  xmm0, xmm7, xmm9
      vmulss  xmm1, xmm4, xmm5
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm10
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm11
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, xmm12
      vaddss  xmm3, xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm3
      vmulss  xmm1, xmm4, xmm9
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm10
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm8, xmm11
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, xmm12
      vaddss  xmm3, xmm1, dword ptr [rbx+8]
      vmulss  xmm0, xmm6, xmm9
      vmovaps xmm9, [rsp+180h+var_50]
      vmovaps xmm6, [rsp+180h+var_20]
      vmovss  dword ptr [rbx+8], xmm3
      vmulss  xmm1, xmm8, xmm5
      vmovaps xmm8, [rsp+180h+var_40]
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm10
      vmovaps xmm10, [rsp+180h+var_60]
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm11
      vmovaps xmm11, [rsp+180h+var_70]
      vmovaps xmm7, [rsp+180h+var_30]
      vsubss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, xmm12
      vaddss  xmm3, xmm1, dword ptr [rbx+0Ch]
      vmovaps xmm12, [rsp+180h+var_80]
      vmovss  dword ptr [rbx+0Ch], xmm3
    }
    if ( (parts->flags & 1) != 0 )
      __asm { vcomiss xmm14, xmm13 }
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp+80h+var_100.v]
      vsubps  xmm1, xmm2, xmmword ptr [rbp+80h+posDelta.v]
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps xmm0, xmm15
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm2, xmm1, xmm0
      vmovss  dword ptr [rsp+180h+in], xmm2
      vextractps dword ptr [rsp+180h+in+4], xmm2, 1
      vextractps dword ptr [rsp+180h+in+8], xmm2, 2
    }
    _RAX = 2i64 * quatIndex;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rax*8+80h+rotDelta]
      vmovss  xmm1, dword ptr [rbp+rax*8+80h+rotDelta+4]
      vxorps  xmm4, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbp+rax*8+80h+rotDelta+8]
      vxorps  xmm2, xmm1, xmm3
      vxorps  xmm3, xmm0, xmm3
      vinsertps xmm4, xmm4, xmm2, 10h
      vinsertps xmm4, xmm4, xmm3, 20h ; ' '
      vinsertps xmm4, xmm4, dword ptr [rbp+rax*8+80h+rotDelta+0Ch], 80h+var_50
      vmulps  xmm0, xmm4, cs:__xmm@38000100380001003800010038000100
      vmovups xmmword ptr [rsp+180h+quat], xmm0
    }
    QuatTransform(&quat, &in, &out);
    __asm
    {
      vaddss  xmm0, xmm15, dword ptr [rbx+10h]
      vmovss  xmm2, dword ptr [rsp+180h+out+4]
      vmovss  dword ptr [rbx+10h], xmm0
      vmovss  xmm0, dword ptr [rsp+180h+out]
      vaddss  xmm1, xmm0, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+14h], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+18h]
      vmovss  xmm1, dword ptr [rsp+180h+out+8]
      vmovss  dword ptr [rbx+18h], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rbx+1Ch], xmm2
    }
  }
  _R11 = &v125;
  __asm
  {
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
XAnimCalcRelDeltaParts
==============
*/

void __fastcall XAnimCalcRelDeltaParts(const XAnimParts *parts, double weightScale, double time1, double time2, XAnimRotPos *rotPos, int quatIndex)
{
  bool v19; 
  float4 v70; 
  float4 posDelta; 
  vec2_t v72; 
  vec2_t rotDelta; 
  char v76; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm10
  }
  _RBX = rotPos;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm10, xmm1
  }
  if ( (parts->flags & 6) != 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovaps xmm1, xmm2; time
    }
    XAnim_CalcDeltaForTime(parts, *(const float *)&_XMM1, &v72, &posDelta);
    __asm { vmovaps xmm1, xmm7; time }
    XAnim_CalcDeltaForTime(parts, *(const float *)&_XMM1, &rotDelta, &v70);
    v19 = (parts->flags & 1) == 0;
    if ( (parts->flags & 1) != 0 )
      __asm { vcomiss xmm7, xmm6 }
    __asm
    {
      vmovups xmm9, xmmword ptr [rsp+0C8h+var_98.v]
      vmovss  xmm6, dword ptr [rsp+0C8h+rotDelta]
      vmovss  xmm5, dword ptr [rsp+0C8h+rotDelta+4]
      vmulss  xmm1, xmm6, [rsp+0C8h+var_74]
      vmulss  xmm0, xmm5, [rsp+0C8h+var_78]
      vmulss  xmm8, xmm10, cs:__real@30800200
    }
    _RAX = quatIndex;
    __asm
    {
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm5, [rsp+0C8h+var_74]
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, dword ptr [rbx+8]
      vmulss  xmm1, xmm6, [rsp+0C8h+var_78]
      vmovss  xmm4, [rsp+rax*8+0C8h+var_74]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm8
      vsubps  xmm1, xmm9, xmmword ptr [rsp+0C8h+posDelta.v]
      vmovss  dword ptr [rbx+8], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbx+0Ch]
      vmovss  xmm2, [rsp+rax*8+0C8h+var_78]
      vmovaps xmm0, xmm10
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm7, xmm1, xmm0
      vmulss  xmm5, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm9, xmm0, xmm5
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm9, xmm1
      vmovss  dword ptr [rbx+0Ch], xmm3
      vmovaps xmm3, xmm7
      vshufps xmm6, xmm7, xmm7, 55h ; 'U'
      vshufps xmm8, xmm7, xmm7, 0AAh ; 'ª'
    }
    if ( !v19 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@40000000
        vdivss  xmm1, xmm0, xmm9
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm4, xmm0, xmm1
        vmulss  xmm5, xmm5, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm2, xmm1, xmm5
        vmulss  xmm0, xmm4, xmm6
        vmulss  xmm3, xmm2, xmm7
        vmulss  xmm1, xmm6, xmm5
        vmulss  xmm2, xmm7, xmm4
        vaddss  xmm3, xmm3, xmm0
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm6, xmm6, xmm0
      }
    }
    __asm
    {
      vaddss  xmm0, xmm10, dword ptr [rbx+10h]
      vmovaps xmm9, [rsp+0C8h+var_48]
      vmovss  dword ptr [rbx+10h], xmm0
      vaddss  xmm0, xmm3, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+14h], xmm0
      vaddss  xmm1, xmm6, dword ptr [rbx+18h]
      vmovss  dword ptr [rbx+18h], xmm1
      vaddss  xmm0, xmm8, dword ptr [rbx+1Ch]
      vmovaps xmm8, [rsp+0C8h+var_38]
      vmovss  dword ptr [rbx+1Ch], xmm0
    }
  }
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
XAnimCheckFreeInfo
==============
*/
void XAnimCheckFreeInfo(XAnimTree *tree, unsigned __int16 infoIndex, int hasWeight, const DObj *obj)
{
  unsigned __int16 v8; 
  unsigned __int16 children; 
  bool v13; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  unsigned __int16 v16; 
  __int64 v18; 
  __int64 v19; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  v8 = infoIndex;
  _RAX = GetNonRootAnimInfo(infoIndex);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RBP = _RAX;
  __asm { vucomiss xmm6, dword ptr [rax+3Ch] }
  if ( v13 )
    hasWeight = 0;
  children = _RAX->children;
  v13 = children == 0;
  if ( children )
  {
    do
    {
      if ( (children & 0x8000u) != 0 )
      {
        v15 = 32 * (children & 0x7FFF);
        if ( v15 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v19) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v18) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v18, v19) )
            __debugbreak();
        }
        v14 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v15];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v19) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v18) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v14 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      v16 = *((_WORD *)v14 + 5);
      XAnimCheckFreeInfo(tree, children, hasWeight, obj);
      children = v16;
    }
    while ( v16 );
    v8 = infoIndex;
    v13 = _RBP->children == 0;
  }
  if ( v13 && !hasWeight )
  {
    __asm { vucomiss xmm6, dword ptr [rbp+38h] }
    XAnimFreeInfo(tree, v8, obj);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
XAnimClearChildGoalWeights
==============
*/
void XAnimClearChildGoalWeights(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, const XAnimCurveID curveID)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  float fmt; 
  __int64 v14; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7463, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v14) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7464, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v14, 42) )
      __debugbreak();
  }
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7468, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7469, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm
    {
      vmovss  xmm0, [rsp+58h+blendTime]
      vmovss  dword ptr [rsp+58h+fmt], xmm0
    }
    XAnimClearChildGoalWeightsWithParent(tree, graftAnimIndex, subTreeID, InfoIndex, fmt, curveID);
  }
}

/*
==============
XAnimClearChildGoalWeightsWithParent
==============
*/
void XAnimClearChildGoalWeightsWithParent(XAnimTree *tree, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, float blendTime, const XAnimCurveID curveID)
{
  int v9; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 *p_notifyChild; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  int v24; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7433, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v18) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7434, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v18, 42) )
      __debugbreak();
  }
  if ( !parentInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7435, ASSERT_TYPE_ASSERT, "(parentInfoIndex)", (const char *)&queryFormat, "parentInfoIndex") )
    __debugbreak();
  v9 = 0;
  v22 = 0i64;
  v23 = 0i64;
  v24 = 0;
  children = XAnimGetAnimInfo(parentInfoIndex)->children;
  if ( children )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, [rsp+0A8h+blendTime]
    }
    do
    {
      AnimInfo = XAnimGetAnimInfo(children);
      p_notifyChild = &AnimInfo->notifyChild;
      if ( AnimInfo->animIndex != v9 )
      {
        v22 = 0i64;
        v23 = 0i64;
        v24 = 0;
      }
      v14 = (unsigned __int16)AnimInfo->subTreeID;
      if ( (unsigned int)v14 >= 0xA0 )
      {
        LODWORD(v19) = 160;
        LODWORD(v18) = (unsigned __int16)AnimInfo->subTreeID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v14 & 0x1F)) & *((_DWORD *)&v22 + (v14 >> 5))) == 0 || p_notifyChild[3] != v9 )
      {
        v15 = p_notifyChild[8];
        v9 = p_notifyChild[3];
        if ( (unsigned int)v15 >= 0xA0 )
        {
          LODWORD(v21) = 160;
          LODWORD(v20) = p_notifyChild[8];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v20, v21) )
            __debugbreak();
        }
        __asm { vmovaps xmm2, xmm6; blendTime }
        *((_DWORD *)&v22 + (v15 >> 5)) |= 0x80000000 >> (v15 & 0x1F);
        XAnimClearGoalWeightInternal(tree, children, *(float *)&_XMM2, 0, curveID);
      }
      children = p_notifyChild[5];
    }
    while ( children );
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  }
}

/*
==============
XAnimClearConstStrings
==============
*/
void XAnimClearConstStrings(void)
{
  unsigned int i; 
  scr_string_t v1; 
  scr_string_t *v2; 
  unsigned int *v3; 

  for ( i = 0; i < s_xAnimConstStrings.numStrings; *v3 = 0 )
  {
    v1 = s_xAnimConstStrings.strings[i];
    v2 = &s_xAnimConstStrings.strings[i];
    v3 = &s_xAnimConstStrings.size[i];
    if ( *v3 )
      SL_RemoveRefToStringOfSize(v1, *v3);
    else
      SL_RemoveRefToString(v1);
    ++i;
    *v2 = 0;
  }
  s_xAnimConstStrings.numStrings = 0;
}

/*
==============
XAnimClearGoalWeight
==============
*/
void XAnimClearGoalWeight(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, const XAnimCurveID curveID)
{
  unsigned __int16 InfoIndex; 
  int v12; 
  int v13; 

  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    v13 = 42;
    v12 = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7083, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm { vmovss  xmm2, [rsp+48h+blendTime]; blendTime }
    XAnimClearGoalWeightInternal(tree, InfoIndex, *(float *)&_XMM2, 0, curveID);
  }
}

/*
==============
XAnimClearGoalWeightInternal
==============
*/

void __fastcall XAnimClearGoalWeightInternal(XAnimTree *tree, unsigned __int16 infoIndex, double blendTime, int forceBlendTime, const XAnimCurveID curveID)
{
  bool v12; 
  bool v13; 
  scr_string_t notifyName; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7048, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7049, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  _RBX = GetNonRootAnimInfo(infoIndex);
  v12 = !_RBX->inuse;
  if ( !_RBX->inuse )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7052, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm1, dword ptr [rbx+38h]
  }
  if ( !v12 || forceBlendTime )
    __asm { vmovaps xmm0, xmm6 }
  else
    __asm { vminss  xmm0, xmm6, dword ptr [rbx+34h] }
  __asm
  {
    vmovss  dword ptr [rbx+34h], xmm0
    vucomiss xmm6, xmm1
  }
  _RBX->state.startWeight = _RBX->state.weight;
  _RBX->state.curveID = curveID;
  __asm { vmovss  dword ptr [rbx+44h], xmm0 }
  _RBX->state.goalWeight = 0.0;
  _RBX->state.weight = 0.0;
  _RBX->state.flags |= 1u;
  notifyName = _RBX->notifyName;
  if ( notifyName )
  {
    SL_RemoveRefToString(notifyName);
    _RBX->notifyName = 0;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  _RBX->notifyIndex = -1;
}

/*
==============
XAnimClearGoalWeightKnobInternal
==============
*/

void __fastcall XAnimClearGoalWeightKnobInternal(XAnimTree *tree, unsigned __int16 infoIndex, double goalWeight, double goalTime, const XAnimCurveID curveID)
{
  unsigned __int16 parent; 
  unsigned __int16 children; 
  unsigned __int16 next; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_58], xmm8
    vmovaps [rsp+0B8h+var_68], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
  }
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7158, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7159, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  parent = GetNonRootAnimInfo(infoIndex)->parent;
  if ( parent )
    children = XAnimGetAnimInfo(parent)->children;
  else
    children = tree->children;
  next = children;
  if ( children )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    do
    {
      _RAX = XAnimGetAnimInfo(next);
      __asm { vmovss  xmm0, dword ptr [rax+3Ch] }
      if ( next == infoIndex )
      {
        __asm
        {
          vsubss  xmm0, xmm8, xmm0
          vandps  xmm0, xmm0, xmm7
        }
      }
      next = _RAX->next;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
    }
    while ( next );
    __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  }
  __asm
  {
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmulss  xmm6, xmm6, xmm9
    vmovaps xmm9, [rsp+0B8h+var_68]
  }
  for ( ; children; children = XAnimGetAnimInfo(children)->next )
  {
    if ( children != infoIndex )
    {
      __asm { vmovaps xmm2, xmm6; blendTime }
      XAnimClearGoalWeightInternal(tree, children, *(double *)&_XMM2, 0, curveID);
    }
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
}

/*
==============
XAnimClearTree
==============
*/
void XAnimClearTree(const DObj *obj)
{
  XAnimTree *tree; 
  unsigned __int16 children; 
  __int64 v4; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7502, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7503, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  tree = obj->tree;
  children = obj->tree->children;
  if ( children )
  {
    XAnimFreeInfo(tree, children, obj);
    if ( obj->tree->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7508, ASSERT_TYPE_ASSERT, "(!obj->tree->children)", (const char *)&queryFormat, "!obj->tree->children") )
      __debugbreak();
    tree = obj->tree;
  }
  if ( tree->info_usage )
  {
    LODWORD(v4) = tree->info_usage;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7512, ASSERT_TYPE_ASSERT, "( ( !obj->tree->info_usage ) )", "( obj->tree->info_usage ) = %i", v4) )
      __debugbreak();
  }
}

/*
==============
XAnimClearTreeGoalWeights
==============
*/
void XAnimClearTreeGoalWeights(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, int forceBlendTime, void *objID, const XAnimCurveID curveID)
{
  unsigned __int16 InfoIndex; 
  int v14; 
  int v15; 

  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    v15 = 42;
    v14 = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7117, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm { vmovss  xmm2, [rsp+48h+blendTime]; blendTime }
    XAnimClearTreeGoalWeightsNode(tree, InfoIndex, *(float *)&_XMM2, forceBlendTime, curveID);
  }
}

/*
==============
XAnimClearTreeGoalWeightsNode
==============
*/

void __fastcall XAnimClearTreeGoalWeightsNode(XAnimTree *tree, unsigned __int16 infoIndex, double blendTime, int forceBlendTime, const XAnimCurveID curveID)
{
  int v10; 
  unsigned __int16 i; 
  unsigned __int8 *v12; 
  __int64 v13; 
  int v14; 
  __int64 v17; 
  __int64 v18; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  XAnimClearGoalWeightInternal(tree, infoIndex, blendTime, forceBlendTime, curveID);
  v10 = 0;
  for ( i = XAnimGetAnimInfo(infoIndex)->children; i; v10 = *((unsigned __int16 *)v12 + 3) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v13 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v13 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v18) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(v17) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v17, v18) )
          __debugbreak();
      }
      v12 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v13];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v18) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(v17) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v12 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
    }
    v14 = forceBlendTime && v10 != *((unsigned __int16 *)v12 + 3);
    __asm { vmovaps xmm2, xmm6; blendTime }
    XAnimClearTreeGoalWeightsNode(tree, i, *(float *)&_XMM2, v14, curveID);
    i = *((_WORD *)v12 + 5);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
XAnimClearTreeGoalWeightsStrict
==============
*/
void XAnimClearTreeGoalWeightsStrict(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, void *objID, const XAnimCurveID curveID)
{
  __int64 v9; 
  const XAnim_s *SubTreeAnims; 
  XAnimEntry *v13; 
  int v14; 
  int numAnims; 
  unsigned int v17; 
  unsigned __int16 InfoIndex; 
  __int64 v21; 
  __int64 v22; 

  v9 = animIndex;
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7133, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", (unsigned __int8)curveID, 42) )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7134, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7136, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v9 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7137, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  v13 = &SubTreeAnims->entries[v9];
  v14 = 0;
  numAnims = v13->numAnims;
  if ( v13->numAnims )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovss  xmm6, [rsp+78h+blendTime]
    }
    do
    {
      v17 = v14 + v13->animParent.children;
      XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v17);
      if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
      {
        LODWORD(v22) = 42;
        LODWORD(v21) = (unsigned __int8)curveID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7117, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, v17);
      if ( InfoIndex )
      {
        __asm { vmovaps xmm2, xmm6; blendTime }
        XAnimClearTreeGoalWeightsNode(tree, InfoIndex, *(float *)&_XMM2, 1, curveID);
      }
      ++v14;
    }
    while ( v14 < numAnims );
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
}

/*
==============
XAnimClearTreeNoObj
==============
*/
void XAnimClearTreeNoObj(XAnimTree *tree)
{
  unsigned __int16 children; 
  __int64 v3; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7486, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  children = tree->children;
  if ( children )
  {
    XAnimFreeInfo(tree, children, NULL);
    if ( tree->children )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7491, ASSERT_TYPE_ASSERT, "(!tree->children)", (const char *)&queryFormat, "!tree->children") )
        __debugbreak();
    }
  }
  if ( tree->info_usage )
  {
    LODWORD(v3) = tree->info_usage;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7495, ASSERT_TYPE_ASSERT, "( ( !tree->info_usage ) )", "( tree->info_usage ) = %i", v3) )
      __debugbreak();
  }
}

/*
==============
XAnimCloneAnimInfo
==============
*/
void XAnimCloneAnimInfo(const XAnimInfo *from, XAnimInfo *to)
{
  scr_string_t notifyName; 

  _RBX = to;
  _RDI = from;
  if ( to->animIndex != from->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8917, ASSERT_TYPE_ASSERT, "(to->animIndex == from->animIndex)", (const char *)&queryFormat, "to->animIndex == from->animIndex") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+28h]
    vmovups ymmword ptr [rbx+28h], ymm0
    vmovsd  xmm1, qword ptr [rdi+48h]
    vmovsd  qword ptr [rbx+48h], xmm1
  }
  _RBX->notifyChild = _RDI->notifyChild;
  _RBX->notifyIndex = _RDI->notifyIndex;
  notifyName = _RDI->notifyName;
  _RBX->notifyName = notifyName;
  _RBX->notifyType = _RDI->notifyType;
  _RBX->subTreeID = _RDI->subTreeID;
  if ( notifyName )
    SL_AddRefToString(notifyName);
}

/*
==============
XAnimCloneAnimTree
==============
*/
void XAnimCloneAnimTree(const XAnimTree *from, XAnimTree *to)
{
  unsigned __int16 children; 
  unsigned __int16 v6; 

  _RBX = from;
  _RDI = to;
  Profile_Begin(413);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8968, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !_RBX->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8969, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !_RBX->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8970, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8971, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( _RDI->anims != _RBX->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8972, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  _RDI->clientNotifyEnabled = _RBX->clientNotifyEnabled;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+1Ch]
    vmovsd  qword ptr [rdi+1Ch], xmm0
  }
  _RDI->lodState.distance = _RBX->lodState.distance;
  children = _RDI->children;
  if ( children )
  {
    XAnimFreeInfo(_RDI, children, NULL);
    if ( _RDI->children )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8981, ASSERT_TYPE_ASSERT, "(!to->children)", (const char *)&queryFormat, "!to->children") )
        __debugbreak();
    }
  }
  v6 = _RBX->children;
  if ( v6 )
    XAnimCloneAnimTree_r(_RBX, _RDI, v6, 0);
  XAnimCloneParameterValues(_RBX, _RDI);
  Profile_EndInternal(NULL);
}

/*
==============
XAnimCloneAnimTree_r
==============
*/
void XAnimCloneAnimTree_r(const XAnimTree *from, XAnimTree *to, unsigned __int16 fromInfoIndex, unsigned __int16 toInfoParentIndex)
{
  XAnimInfo *NonRootAnimInfo; 
  XAnimToXModel *v9; 
  unsigned __int16 v10; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 i; 
  unsigned __int8 *v13; 
  __int64 v14; 
  __int64 after; 
  __int64 v16; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8938, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8939, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8940, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8941, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( to->anims != from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8942, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(fromInfoIndex);
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8946, ASSERT_TYPE_ASSERT, "(fromInfo->inuse)", (const char *)&queryFormat, "fromInfo->inuse") )
    __debugbreak();
  v9 = XAnimCloneXAnimToXModel(NonRootAnimInfo->animToModel);
  v10 = XAnimAllocInfoWithParent(to, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID, v9, NonRootAnimInfo->animIndex, toInfoParentIndex, 1);
  AnimInfo = XAnimGetAnimInfo(v10);
  XAnimCloneAnimInfo(NonRootAnimInfo, AnimInfo);
  for ( i = NonRootAnimInfo->children; i; i = *((_WORD *)v13 + 5) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v14 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v14 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v16) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(after) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v16) )
          __debugbreak();
      }
      v13 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v14];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v16) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(after) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v16) )
          __debugbreak();
      }
      v13 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
    }
    XAnimCloneAnimTree_r(from, to, i, v10);
  }
}

/*
==============
XAnimCloneClientAnimTree
==============
*/
void XAnimCloneClientAnimTree(const XAnimTree *from, XAnimTree *to, __int16 noteType)
{
  unsigned __int16 children; 
  unsigned __int16 maxParameters; 
  unsigned __int16 v8; 

  Profile_Begin(413);
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9055, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9056, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9057, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9058, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( to->anims != from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9059, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  if ( to->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9060, ASSERT_TYPE_ASSERT, "(!to->children)", (const char *)&queryFormat, "!to->children") )
    __debugbreak();
  to->clientNotifyEnabled = from->clientNotifyEnabled;
  children = from->children;
  if ( children )
    XAnimCloneClientAnimTree_r(from, to, children, 0, noteType);
  if ( from->owner[0] || to->owner[0] != 1 )
  {
    maxParameters = from->maxParameters;
    v8 = to->maxParameters;
    if ( maxParameters != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9073, ASSERT_TYPE_ASSERT, "( from->maxParameters ) == ( to->maxParameters )", "%s == %s\n\t%i, %i", "from->maxParameters", "to->maxParameters", maxParameters, v8) )
      __debugbreak();
    if ( from->maxParameters )
    {
      if ( !to->parameterValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9076, ASSERT_TYPE_ASSERT, "(to->parameterValues)", (const char *)&queryFormat, "to->parameterValues") )
        __debugbreak();
      if ( !from->parameterValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9077, ASSERT_TYPE_ASSERT, "(from->parameterValues)", (const char *)&queryFormat, "from->parameterValues") )
        __debugbreak();
      memcpy_0(to->parameterValues, from->parameterValues, 24i64 * from->maxParameters);
    }
  }
  else
  {
    XAnimCloneParameterValuesFromServerToClient(from, to);
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimCloneClientAnimTree_r
==============
*/
void XAnimCloneClientAnimTree_r(const XAnimTree *from, XAnimTree *to, unsigned __int16 fromInfoIndex, unsigned __int16 toInfoParentIndex, __int16 noteType)
{
  XAnimToXModel *v10; 
  unsigned __int16 v11; 
  unsigned __int16 notifyType; 
  unsigned __int16 i; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int64 after; 
  __int64 v20; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9013, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9014, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9015, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9016, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( to->anims != from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9017, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  _RBX = GetNonRootAnimInfo(fromInfoIndex);
  if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9021, ASSERT_TYPE_ASSERT, "(fromInfo->inuse)", (const char *)&queryFormat, "fromInfo->inuse") )
    __debugbreak();
  v10 = XAnimCloneXAnimToXModel(_RBX->animToModel);
  v11 = XAnimAllocInfoWithParent(to, (const XAnimSubTreeID)_RBX->subTreeID, v10, _RBX->animIndex, toInfoParentIndex, 1);
  _RDI = XAnimGetAnimInfo(v11);
  if ( !from->owner[0] )
  {
    notifyType = _RBX->notifyType;
    if ( notifyType )
    {
      LODWORD(after) = notifyType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9033, ASSERT_TYPE_ASSERT, "( ( !fromInfo->notifyType ) )", "( fromInfo->notifyType ) = %i", after) )
        __debugbreak();
    }
  }
  if ( _RDI->animIndex != _RBX->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8994, ASSERT_TYPE_ASSERT, "(to->animIndex == from->animIndex)", (const char *)&queryFormat, "to->animIndex == from->animIndex") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+28h]
    vmovups ymmword ptr [rdi+28h], ymm0
    vmovsd  xmm1, qword ptr [rbx+48h]
    vmovsd  qword ptr [rdi+48h], xmm1
  }
  _RDI->notifyType = noteType;
  *(_DWORD *)&_RDI->notifyChild = -65536;
  _RDI->notifyName = 0;
  _RDI->subTreeID = _RBX->subTreeID;
  if ( from->owner[0] == 1 )
    XAnimCloneCustomNodeData(_RBX, _RDI, from, to);
  for ( i = _RBX->children; i; i = *((_WORD *)v17 + 5) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v18 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v18 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v20) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(after) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v20) )
          __debugbreak();
      }
      v17 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v18];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v20) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(after) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v20) )
          __debugbreak();
      }
      v17 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
    }
    XAnimCloneClientAnimTree_r(from, to, i, v11, noteType);
  }
}

/*
==============
XAnimCloneInitTime
==============
*/
__int64 XAnimCloneInitTime(XAnimTree *tree, unsigned __int16 infoIndex, unsigned __int16 parentIndex)
{
  XAnimInfo *NonRootAnimInfo; 
  XAnimToXModel *v7; 
  unsigned __int16 v8; 
  XAnimInfo *AnimInfo; 
  XAnimInfo *v10; 
  unsigned __int16 i; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v7 = XAnimCloneXAnimToXModel(NonRootAnimInfo->animToModel);
  v8 = XAnimAllocInfoWithParent(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID, v7, NonRootAnimInfo->animIndex, parentIndex, 0);
  AnimInfo = XAnimGetAnimInfo(v8);
  XAnimCloneAnimInfo(NonRootAnimInfo, AnimInfo);
  v10 = GetNonRootAnimInfo(v8);
  *(_QWORD *)&v10->state.currentAnimTime = 0i64;
  *(_DWORD *)&v10->state.cycleCount = 0;
  v10->notifyIndex = -1;
  if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  AnimInfo->state.flags |= 0x21u;
  AnimInfo->state.weight = 0.0;
  for ( i = XAnimGetAnimInfo(infoIndex)->children; i; i = XAnimGetAnimInfo(i)->next )
    XAnimCloneInitTime(tree, i, v8);
  return v8;
}

/*
==============
XAnimCloneXAnimToXModel
==============
*/
XAnimToXModel *XAnimCloneXAnimToXModel(const XAnimToXModel *fromAnimToModel)
{
  unsigned __int64 v3; 
  void *v4; 

  if ( !fromAnimToModel )
    return 0i64;
  v3 = 2 * (fromAnimToModel->boneCount + (unsigned __int64)fromAnimToModel->blendShapeWeightCount) + 36;
  v4 = MT_Alloc(v3, 11);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8891, ASSERT_TYPE_ASSERT, "(toAnimToModel)", (const char *)&queryFormat, "toAnimToModel") )
    __debugbreak();
  memcpy_0(v4, fromAnimToModel, v3);
  return (XAnimToXModel *)v4;
}

/*
==============
XAnimCreate
==============
*/
void XAnimCreate(XAnim_s *anims, unsigned int animIndex, const char *name, bool allowAllocs)
{
  XAnimParts *parts; 

  parts = DB_FindXAssetHeader(ASSET_TYPE_XANIMPARTS, name, 1).parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 639, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  XAnimCreateFromParts(anims, animIndex, parts, allowAllocs);
}

/*
==============
XAnimCreateAnims
==============
*/
XAnim_s *XAnimCreateAnims(const char *debugName, int size, void *(*Alloc)(unsigned __int64))
{
  __int64 v3; 
  const char *v5; 
  unsigned __int64 v6; 
  _QWORD *v7; 
  __int64 v8; 
  _BYTE *v10; 
  signed __int64 v11; 
  char v12; 

  v3 = size;
  v5 = debugName;
  if ( !debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 796, ASSERT_TYPE_ASSERT, "(debugName)", (const char *)&queryFormat, "debugName") )
    __debugbreak();
  if ( !Alloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 797, ASSERT_TYPE_ASSERT, "(Alloc)", (const char *)&queryFormat, "Alloc") )
    __debugbreak();
  v6 = 2 * (v3 + 5);
  v7 = (_QWORD *)Alloc(v6 * 8);
  *(_DWORD *)v7 = v3;
  v7[5] = &v7[v6];
  v7[4] = &v7[v6];
  v7[6] = &v7[v6];
  v7[3] = 0i64;
  *((_DWORD *)v7 + 14) = 0;
  *((_WORD *)v7 + 2) = 1;
  v7[1] = 0i64;
  v7[2] = 0i64;
  *((_BYTE *)v7 + 62) = 0;
  *((_WORD *)v7 + 30) = 0;
  v7[2] = Mem_HunkDebug_AllocAligned(8 * v3, 8ui64, "XAnimCreateAnims");
  v8 = -1i64;
  while ( v5[++v8] != 0 )
    ;
  v10 = Mem_HunkDebug_AllocAligned((unsigned int)(v8 + 1), 1ui64, "XAnimCreateAnims");
  v11 = v10 - v5;
  do
  {
    v12 = *v5;
    v5[v11] = *v5;
    ++v5;
  }
  while ( v12 );
  v7[1] = v10;
  return (XAnim_s *)v7;
}

/*
==============
XAnimCreateAnimsInPlace
==============
*/
void XAnimCreateAnimsInPlace(const XAnimSubTreeID subTreeID, XAnim_s *anims, int numAnims)
{
  anims->size = numAnims;
  *(_QWORD *)&anims->numGameParameters = 0i64;
  anims->bindings = NULL;
  anims->gameParameterNames = NULL;
  *(_DWORD *)&anims->numPublicNodes = 0;
  anims->publicNodes = NULL;
  anims->debugName = NULL;
  anims->debugAnimNames = NULL;
  anims->numLods = 0;
  *(_WORD *)&anims->initialized = 1;
  anims->subTreeID = subTreeID;
}

/*
==============
XAnimCreateAnimsInPlaceWithParameters
==============
*/
void XAnimCreateAnimsInPlaceWithParameters(const XAnimSubTreeID subTreeID, XAnim_s *anims, int numAnims, int maxParameters, const scr_string_t **parameterArrayMemory, int maxBindings, XAnimParameterBinding *bindingArrayMemory, int maxPublicNodes, XAnimPublicNode *publicNodeMemory)
{
  anims->size = numAnims;
  anims->numBindings = 0;
  anims->maxBindings = truncate_cast<unsigned short,int>(maxBindings);
  anims->bindings = bindingArrayMemory;
  anims->numGameParameters = 0;
  anims->maxGameParameters = truncate_cast<unsigned short,int>(maxParameters);
  anims->gameParameterNames = parameterArrayMemory;
  anims->numPublicNodes = 0;
  anims->maxPublicNodes = truncate_cast<unsigned short,int>(maxPublicNodes);
  anims->debugName = NULL;
  anims->debugAnimNames = NULL;
  anims->numLods = 0;
  anims->publicNodes = publicNodeMemory;
  *(_WORD *)&anims->initialized = 1;
  anims->subTreeID = subTreeID;
}

/*
==============
XAnimCreateAnimsWithParameters
==============
*/
XAnim_s *XAnimCreateAnimsWithParameters(const char *debugName, const XAnimSubTreeID subTreeID, int size, int maxParameters, int maxBindings, int maxPublicNodes, void *(*Alloc)(unsigned __int64))
{
  __int64 v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  XAnim_s *v13; 
  __int64 v14; 
  char *v16; 
  signed __int64 v17; 
  char v18; 

  v7 = maxParameters;
  v8 = debugName;
  v9 = size;
  if ( !debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 796, ASSERT_TYPE_ASSERT, "(debugName)", (const char *)&queryFormat, "debugName") )
    __debugbreak();
  if ( !Alloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 797, ASSERT_TYPE_ASSERT, "(Alloc)", (const char *)&queryFormat, "Alloc") )
    __debugbreak();
  v10 = 16 * (v9 + 5);
  v11 = v10 + 8 * v7;
  v12 = v11 + 24i64 * maxBindings;
  v13 = (XAnim_s *)Alloc(v12 + 16i64 * maxPublicNodes);
  XAnimCreateAnimsInPlaceWithParameters(subTreeID, v13, size, maxParameters, (const scr_string_t **)((char *)v13 + v10), maxBindings, (XAnimParameterBinding *)((char *)v13 + v11), maxPublicNodes, (XAnimPublicNode *)((char *)v13 + v12));
  v13->debugAnimNames = (char **)Mem_HunkDebug_AllocAligned(8 * v9, 8ui64, "XAnimCreateAnims");
  v14 = -1i64;
  while ( v8[++v14] != 0 )
    ;
  v16 = (char *)Mem_HunkDebug_AllocAligned((unsigned int)(v14 + 1), 1ui64, "XAnimCreateAnims");
  v17 = v16 - v8;
  do
  {
    v18 = *v8;
    v8[v17] = *v8;
    ++v8;
  }
  while ( v18 );
  v13->debugName = v16;
  return v13;
}

/*
==============
XAnimCreateFromParts
==============
*/
void XAnimCreateFromParts(XAnim_s *anims, unsigned int animIndex, XAnimParts *parts, bool allowAllocs)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  bool v12; 
  char *v13; 
  const char *name; 
  unsigned __int64 v15; 

  v4 = animIndex;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 581, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  v8 = 2 * (v4 + 5);
  v9 = v4;
  *(&anims->size + 2 * v8) = 1281;
  *((_QWORD *)&anims->debugName + v8) = parts;
  *(_WORD *)(&anims->dirtyBindings + 8 * v8 + 1) = -1;
  if ( allowAllocs )
  {
    if ( !anims->debugAnimNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 593, ASSERT_TYPE_ASSERT, "(anims->debugAnimNames)", (const char *)&queryFormat, "anims->debugAnimNames") )
      __debugbreak();
    if ( anims->debugAnimNames[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 594, ASSERT_TYPE_ASSERT, "(!anims->debugAnimNames[animIndex])", (const char *)&queryFormat, "!anims->debugAnimNames[animIndex]") )
      __debugbreak();
    if ( !parts->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 595, ASSERT_TYPE_ASSERT, "(parts->name)", (const char *)&queryFormat, "parts->name") )
      __debugbreak();
    v10 = -1i64;
    do
      ++v10;
    while ( parts->name[v10] );
    v12 = v10 == -1;
    v11 = v10 + 1;
    if ( (v12 || v11 == 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 598, ASSERT_TYPE_ASSERT, "(debugNameBufLen > 1)", (const char *)&queryFormat, "debugNameBufLen > 1") )
      __debugbreak();
    v13 = (char *)Mem_HunkDebug_AllocAligned(v11, 1ui64, "XAnimCreate");
    Core_strcpy(v13, v11, parts->name);
    anims->debugAnimNames[v9] = v13;
  }
  else
  {
    name = parts->name;
    v15 = -1i64;
    do
      ++v15;
    while ( name[v15] );
    if ( v15 )
    {
      if ( v15 >= 0x24 )
        name = &name[v15 - 35];
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 608, ASSERT_TYPE_ASSERT, "(debugNameLen)", (const char *)&queryFormat, "debugNameLen") )
    {
      __debugbreak();
    }
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 616, ASSERT_TYPE_ASSERT, "(nameOffset)", (const char *)&queryFormat, "nameOffset") )
      __debugbreak();
    Core_strcpy(anims->debugAnimNames[v9], 0x24ui64, name);
  }
}

/*
==============
XAnimCreateSimpleBlendTree
==============
*/
XAssetHeader *XAnimCreateSimpleBlendTree(const char *oldAnimName, const char *newAnimName, XAnimOwner owner)
{
  char v3; 
  XAssetHeader *v6; 
  XAssetHeader *physicsLibrary; 
  XAssetHeader v8; 
  XAssetHeader *result; 

  v3 = owner;
  if ( !oldAnimName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1080, ASSERT_TYPE_ASSERT, "(oldAnimName)", (const char *)&queryFormat, "oldAnimName") )
    __debugbreak();
  if ( !*oldAnimName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1081, ASSERT_TYPE_ASSERT, "(oldAnimName[0])", (const char *)&queryFormat, "oldAnimName[0]") )
    __debugbreak();
  if ( !newAnimName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1082, ASSERT_TYPE_ASSERT, "(newAnimName)", (const char *)&queryFormat, "newAnimName") )
    __debugbreak();
  if ( !*newAnimName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1083, ASSERT_TYPE_ASSERT, "(newAnimName[0])", (const char *)&queryFormat, "newAnimName[0]") )
    __debugbreak();
  v6 = (XAssetHeader *)MT_Alloc(0xB0ui64, 6);
  memset_0(v6, 0, 0xB0ui64);
  BYTE2(v6[3].physicsSFXEventAsset) = v3;
  physicsLibrary = (XAssetHeader *)DB_FindXAssetHeader(ASSET_TYPE_XANIMPARTS, oldAnimName, 1).physicsLibrary;
  v8.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XANIMPARTS, newAnimName, 1).physicsLibrary;
  if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1102, ASSERT_TYPE_ASSERT, "(oldParts)", (const char *)&queryFormat, "oldParts") )
    __debugbreak();
  if ( !v8.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1103, ASSERT_TYPE_ASSERT, "(newParts)", (const char *)&queryFormat, "newParts") )
    __debugbreak();
  WORD2(v6[6].physicsAsset) = 1;
  v6[9].physicsLibrary = NULL;
  v6[11].physicsLibrary = NULL;
  v6[10].physicsLibrary = NULL;
  LODWORD(v6[13].physicsLibrary) = 0;
  v6[12].physicsLibrary = NULL;
  v6[7].physicsLibrary = NULL;
  v6[8].physicsLibrary = NULL;
  BYTE6(v6[13].physicsFXShape) = 0;
  WORD2(v6[13].physicsAsset) = 0;
  LODWORD(v6[6].physicsLibrary) = 3;
  LODWORD(v6[17].physicsLibrary) |= 0x80u;
  WORD1(v6[16].physicsSFXEventAsset) = 2;
  WORD2(v6[17].physicsAsset) = 1;
  v6[19].physicsLibrary = (PhysicsLibrary *)physicsLibrary;
  v6[21].physicsLibrary = v8.physicsLibrary;
  v6[7].physicsLibrary = physicsLibrary->physicsLibrary;
  result = v6;
  v6->physicsLibrary = (PhysicsLibrary *)&v6[6];
  return result;
}

/*
==============
XAnimCreateSimpleTree
==============
*/
XAnimTree *XAnimCreateSimpleTree(const char *name, XAnimOwner owner)
{
  char v2; 
  XAnimTree *v4; 
  _QWORD *physicsLibrary; 
  XAnimTree *result; 

  v2 = owner;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 969, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 970, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]") )
    __debugbreak();
  v4 = (XAnimTree *)MT_Alloc(0xA0ui64, 6);
  memset_0(v4, 0, 0xA0ui64);
  v4->owner[0] = v2;
  physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XANIMPARTS, name, 1).physicsLibrary;
  if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 986, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  WORD2(v4[1].anims) = 1;
  *(_QWORD *)&v4[1].parametersDirty = 0i64;
  v4[1].parameterValues = NULL;
  *(_QWORD *)&v4[1].lodState.blendTimeLeft = 0i64;
  v4[2].info_usage = 0;
  v4[2].anims = NULL;
  *(_QWORD *)&v4[1].info_usage = 0i64;
  *(_QWORD *)&v4[1].modifyRefCount = 0i64;
  BYTE2(v4[2].calcRefCount) = 0;
  LOWORD(v4[2].calcRefCount) = 0;
  LODWORD(v4[1].anims) = 2;
  LODWORD(v4[2].parameterValues) |= 0x80u;
  v4[2].lodState.calcLod = 1;
  WORD2(v4[2].parameterValues) = 1;
  *(_QWORD *)&v4[3].info_usage = physicsLibrary;
  *(_QWORD *)&v4[1].info_usage = *physicsLibrary;
  result = v4;
  v4->anims = (XAnim_s *)&v4[1];
  return result;
}

/*
==============
XAnimCreateTree
==============
*/
XAnim_s **XAnimCreateTree(XAnim_s *anims, void *(*Alloc)(unsigned __int64), XAnimOwner owner)
{
  char v3; 
  unsigned __int64 v6; 
  XAnim_s **v7; 
  __int16 v8; 
  __int64 v10; 

  v3 = owner;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 911, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !anims->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 912, ASSERT_TYPE_ASSERT, "(anims->initialized)", (const char *)&queryFormat, "anims->initialized") )
    __debugbreak();
  v6 = 8 * (3i64 * anims->maxGameParameters + 6);
  v7 = (XAnim_s **)Alloc(v6);
  memset_0(v7, 0, v6);
  v8 = *((_WORD *)v7 + 14);
  *v7 = anims;
  *((_BYTE *)v7 + 26) = v3;
  *((_WORD *)v7 + 11) = anims->maxGameParameters;
  v7[5] = (XAnim_s *)(v7 + 6);
  *((_BYTE *)v7 + 24) = 1;
  if ( v8 )
  {
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 928, ASSERT_TYPE_ASSERT, "( ( tree->lodState.lod == 0 ) )", "( tree->lodState.lod ) = %i", v10) )
      __debugbreak();
  }
  if ( *((_DWORD *)v7 + 2) )
  {
    LODWORD(v10) = *((_DWORD *)v7 + 2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 932, ASSERT_TYPE_ASSERT, "( ( !tree->info_usage ) )", "( tree->info_usage ) = %i", v10) )
      __debugbreak();
  }
  return v7;
}

/*
==============
XAnimDebugGetCurrentLeafAnims
==============
*/
void XAnimDebugGetCurrentLeafAnims(const DObj *obj, const XAnimTree *tree, unsigned __int16 infoIndex, char *buffer, int bufferSize, int *bufferPos)
{
  char v13; 
  unsigned int animIndex; 
  const XAnim_s *SubTreeAnims; 
  const char *AnimDebugName; 
  const char *v17; 
  unsigned __int16 i; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4754, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4755, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( tree->anims->size )
  {
    _RAX = GetNonRootAnimInfo(infoIndex);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rax+38h]
    }
    if ( !v13 )
    {
      if ( _RAX->animToModel )
      {
        animIndex = _RAX->animIndex;
        SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RAX->subTreeID);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4774, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
        v17 = (char *)&queryFormat.fmt + 3;
        if ( *bufferPos )
          v17 = ",";
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "%s%s", v17, AnimDebugName);
      }
      else
      {
        for ( i = _RAX->children; i; i = XAnimGetAnimInfo(i)->next )
          XAnimDebugGetCurrentLeafAnims(obj, tree, i, buffer, bufferSize, bufferPos);
      }
    }
  }
}

/*
==============
XAnimDisableLeakCheck
==============
*/
void XAnimDisableLeakCheck(void)
{
  g_disableLeakCheck = 1;
}

/*
==============
XAnimDisplay
==============
*/
void XAnimDisplay(const DObj *obj, const XAnimTree *tree, unsigned __int16 infoIndex, int depth, char *buffer, int bufferSize, int *bufferPos, const char *parentColor)
{
  const ObfuscateErrorText *v13; 
  const char *v14; 
  const XAnim_s *SubTreeAnims; 
  XAnimSubTreeID subTreeID; 
  unsigned int v20; 
  bool HasLods; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v30; 
  const dvar_t *v32; 
  unsigned __int16 parent; 
  int v34; 
  const char *v35; 
  const char *v36; 
  __int64 v37; 
  const char *AnimDebugName; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  DObj *v44; 
  char v46; 
  const char *v47; 
  unsigned int flags; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  const char *v50; 
  XAnimCurveID curveID; 
  bool v58; 
  bool v59; 
  scr_string_t notifyName; 
  const char *v69; 
  __int64 v92; 
  unsigned __int8 v93; 
  scr_string_t v94; 
  unsigned __int16 notifyChild; 
  const char *v109; 
  const char *v110; 
  bool v111; 
  XAnimTree *v130; 
  unsigned __int16 children; 
  int v132; 
  char *fmta; 
  char *fmt; 
  char *fmtb; 
  char *fmtc; 
  __int64 deptha; 
  double depthc; 
  double depthd; 
  double depthe; 
  double depthb; 
  double depthf; 
  __int64 depthg; 
  int *inoutBufferPosa; 
  int *inoutBufferPosb; 
  int *inoutBufferPos; 
  int *inoutBufferPosc; 
  int *inoutBufferPosd; 
  char *v152; 
  char *v153; 
  char *v154; 
  char *v155; 
  char *v156; 
  double v157; 
  double v158; 
  double v159; 
  const char *v160; 
  double v161; 
  double v162; 
  double v163; 
  double v164; 
  char *v165; 
  double v166; 
  double v167; 
  double v168; 
  double v169; 
  char *v170; 
  double v171; 
  const char *v172; 
  int v173; 
  unsigned int animIndex; 
  int v175; 
  int destPos; 
  int v177; 
  int v178; 
  int v179; 
  DObj *dobj; 
  const char *v181; 
  XAnimTree *treea; 
  float ikWeights[2]; 
  __int64 v184; 
  float animWeights[2]; 
  __int64 v186; 
  char dest[8]; 
  __int64 v188; 
  __int64 v189; 
  __int64 v190; 
  char v191[8]; 
  __int64 v192; 
  __int64 v193; 
  __int64 v194; 
  __int64 v195; 
  __int64 v196; 
  __int64 v197; 
  __int64 v198; 
  char v199[8]; 
  __int64 v200; 
  __int64 v201; 
  __int64 v202; 
  __int64 v203; 
  __int64 v204; 
  __int64 v205; 
  __int64 v206; 
  char v207[8]; 
  __int64 v208; 
  __int64 v209; 
  __int64 v210; 
  __int64 v211; 
  __int64 v212; 
  __int64 v213; 
  __int64 v214; 

  v13 = &queryFormat;
  v14 = parentColor;
  v175 = depth;
  treea = (XAnimTree *)tree;
  dobj = (DObj *)obj;
  v173 = 0;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4469, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4470, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4471, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4472, ASSERT_TYPE_ASSERT, "(bufferPos)", (const char *)&queryFormat, "bufferPos") )
    __debugbreak();
  if ( bufferSize <= *bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4473, ASSERT_TYPE_ASSERT, "(bufferSize > *bufferPos)", (const char *)&queryFormat, "bufferSize > *bufferPos") )
    __debugbreak();
  if ( !parentColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4474, ASSERT_TYPE_ASSERT, "(parentColor)", (const char *)&queryFormat, "parentColor") )
    __debugbreak();
  if ( tree->anims->size )
  {
    LOBYTE(v13) = 0;
    __asm
    {
      vmovaps [rsp+240h+var_60], xmm7
      vmovaps [rsp+240h+var_70], xmm8
    }
    v177 = (int)v13;
    _RDI = GetNonRootAnimInfo(infoIndex);
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RDI->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4485, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( !_RDI->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4488, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
      __debugbreak();
    subTreeID = _RDI->subTreeID;
    v20 = _RDI->animIndex;
    animIndex = v20;
    XAnimAssertAnimIndex(tree, subTreeID, v20);
    HasLods = XAnimTreeHasLods(tree);
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    v24 = 0;
    v25 = !HasLods;
    v26 = !HasLods;
    if ( HasLods )
    {
      if ( !DObjHasClientFlag(dobj) )
        goto LABEL_30;
      *(double *)&_XMM0 = XAnimGetClientLodFloat(dobj);
      __asm { vucomiss xmm0, xmm7 }
      if ( v25 )
LABEL_30:
        __asm { vxorps  xmm1, xmm1, xmm1 }
      else
        __asm { vmovaps xmm1, xmm8 }
      v24 = __CFADD__(animIndex, animIndex);
      v25 = 2i64 * animIndex == 0;
      v26 = v24 || v25;
      LODWORD(v13) = 0;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcomiss xmm1, xmm0
      }
      if ( !v24 && !v25 )
        LODWORD(v13) = 1;
      v177 = (int)v13;
    }
    __asm { vcomiss xmm7, dword ptr [rdi+3Ch] }
    if ( !v26 )
    {
      v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4507, ASSERT_TYPE_ASSERT, "(state->weight >= 0)", (const char *)&queryFormat, "state->weight >= 0");
      v24 = 0;
      v25 = !v30;
      v26 = !v30;
      if ( v30 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3Ch]
      vucomiss xmm0, xmm7
    }
    if ( v25 )
    {
      v32 = DCONST_DVARBOOL_xanim_displayblacktext;
      if ( !DCONST_DVARBOOL_xanim_displayblacktext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_displayblacktext") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      if ( !v32->current.enabled )
        goto LABEL_152;
      v14 = "^0";
    }
    else
    {
      __asm { vcomiss xmm0, dword ptr [rdi+38h] }
      if ( v24 )
      {
        v14 = "^4";
      }
      else if ( !v26 || (_BYTE)v13 )
      {
        v14 = "^1";
      }
    }
    parent = _RDI->parent;
    __asm { vmovaps [rsp+240h+var_50], xmm6 }
    v181 = "^5";
    if ( XAnimGetAnimInfo(parent)->parent )
    {
      if ( *v14 == a0_2[0] && v14[1] == a0_2[1] && v14[2] == a0_2[2] )
      {
        v14 = "^7";
      }
      else if ( *v14 == a4_1[0] && v14[1] == a4_1[1] && v14[2] == a4_1[2] )
      {
        v14 = "^5";
      }
      else if ( *v14 == a1_0[0] && v14[1] == a1_0[1] && v14[2] == a1_0[2] )
      {
        v14 = "^6";
      }
      else if ( *v14 == ::parentColor[0] && v14[1] == ::parentColor[1] && v14[2] == ::parentColor[2] )
      {
        v14 = "^2";
      }
      else
      {
        v34 = *(unsigned __int8 *)v14 - (unsigned __int8)a2_0[0];
        if ( !v34 )
        {
          v34 = *((unsigned __int8 *)v14 + 1) - (unsigned __int8)a2_0[1];
          if ( !v34 )
            v34 = *((unsigned __int8 *)v14 + 2) - (unsigned __int8)a2_0[2];
        }
        v35 = "^3";
        if ( v34 )
          v35 = v14;
        v14 = v35;
      }
    }
    v36 = "^;";
    if ( !(_BYTE)v13 )
      v36 = v14;
    if ( v175 > 0 )
    {
      v37 = (unsigned int)v175;
      do
      {
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "  ");
        --v37;
      }
      while ( v37 );
    }
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
    Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, (const char *)&queryFormat, v36);
    v39 = -1i64;
    do
      ++v39;
    while ( AnimDebugName[v39] );
    v40 = *bufferPos;
    v41 = v39 - 35;
    destPos = 0;
    if ( (int)v39 < 36 )
      v41 = 0;
    v42 = v41;
    v43 = 36;
    if ( bufferSize - (int)v40 < 36 )
      v43 = bufferSize - v40;
    Com_sprintfPos_truncate(&buffer[v40], v43, &destPos, (const char *)&queryFormat, &AnimDebugName[v42]);
    *bufferPos += destPos;
    if ( !v175 && XAnimTreeHasLods(treea) )
    {
      v44 = dobj;
      if ( !DObjHasClientFlag(dobj) )
        goto LABEL_87;
      *(double *)&_XMM0 = XAnimGetClientLodFloat(v44);
      __asm { vucomiss xmm0, xmm7 }
      if ( v25 )
LABEL_87:
        __asm { vxorpd  xmm0, xmm0, xmm0 }
      else
        __asm { vmovsd  xmm0, cs:__real@3ff0000000000000 }
      __asm { vmovsd  qword ptr [rsp+240h+depth], xmm0 }
      Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, " %s(lod %.2f)%s", "^7", depthc, v36);
    }
    v46 = v177;
    if ( (_BYTE)v177 )
    {
      LODWORD(deptha) = SubTreeAnims->entries[animIndex].lod;
      Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, " %s(lod cull %d)%s ", "^7", deptha, v36);
    }
    *(_QWORD *)dest = 0i64;
    v188 = 0i64;
    v189 = 0i64;
    v190 = 0i64;
    if ( !_RDI->animToModel )
    {
      __asm { vucomiss xmm7, dword ptr [rdi+3Ch] }
      if ( !_RDI->animToModel || v46 )
      {
        v47 = v36;
        v181 = v36;
      }
      else
      {
        v47 = "^5";
      }
      flags = _RDI->animParent.flags;
      if ( (flags & 0x100) != 0 )
      {
        Com_sprintfPos_truncate(dest, 0x20ui64, &v173, " %soverlay%s", v47, v36);
      }
      else if ( (flags & 0x200) != 0 )
      {
        Com_sprintfPos_truncate(dest, 0x20ui64, &v173, " %sadditive mul%s", v47, v36);
      }
      else if ( (flags & 0x210) != 0 )
      {
        Com_sprintfPos_truncate(dest, 0x20ui64, &v173, " %sadditive%s", v47, v36);
      }
      else if ( XAnimIsCustomNode(SubTreeAnims, _RDI) )
      {
        CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, _RDI);
        if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4598, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
          __debugbreak();
        v50 = SL_ConvertToString((scr_string_t)*CustomNodeTypeInfo->name);
        Com_sprintfPos_truncate(dest, 0x20ui64, &v173, " %s%s%s", v181, v50, v36);
      }
    }
    v178 = 0;
    *(_QWORD *)ikWeights = 0i64;
    v184 = 0i64;
    *(_QWORD *)animWeights = 0i64;
    v186 = 0i64;
    *(_QWORD *)v191 = 0i64;
    v192 = 0i64;
    v193 = 0i64;
    v194 = 0i64;
    v195 = 0i64;
    v196 = 0i64;
    v197 = 0i64;
    v198 = 0i64;
    XAnimIKGetWeights(dobj, _RDI, ikWeights, animWeights);
    for ( _RBX = 0i64; _RBX < 4; ++_RBX )
    {
      __asm
      {
        vmovss  xmm0, [rbp+rbx*4+140h+ikWeights]
        vmaxss  xmm0, xmm0, xmm7
        vminss  xmm6, xmm0, xmm8
      }
      if ( _RBX )
        Com_sprintfPos_truncate(v191, 0x40ui64, &v178, ", ");
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+240h+fmt], xmm0
      }
      Com_sprintfPos_truncate(v191, 0x40ui64, &v178, "%.3f", *(double *)&fmta);
    }
    *(_QWORD *)v199 = 0i64;
    v200 = 0i64;
    v201 = 0i64;
    v202 = 0i64;
    v203 = 0i64;
    v204 = 0i64;
    v205 = 0i64;
    v206 = 0i64;
    curveID = _RDI->state.curveID;
    if ( curveID != CURVE_ASSET_END && curveID )
      __asm { vcomiss xmm7, dword ptr [rdi+34h] }
    if ( _RDI->animToModel )
    {
      _RBX = _RDI->parts;
      v58 = _RBX == NULL;
      if ( !_RBX )
      {
        v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4640, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts");
        v58 = !v59;
        if ( v59 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+68h]
        vucomiss xmm3, xmm7
        vmovss  xmm4, dword ptr [rdi+28h]
        vmovss  xmm5, dword ptr [rdi+2Ch]
        vsubss  xmm2, xmm4, xmm5
      }
      if ( !v58 )
      {
        __asm
        {
          vcmpltss xmm0, xmm2, xmm7
          vaddss  xmm1, xmm2, xmm8
          vblendvps xmm0, xmm2, xmm1, xmm0
          vdivss  xmm7, xmm0, xmm3
        }
      }
      notifyName = _RDI->notifyName;
      __asm { vcvtss2sd xmm6, xmm7, xmm7 }
      if ( notifyName )
      {
        v69 = SL_ConvertToString(notifyName);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+40h]
          vmovss  xmm1, dword ptr [rdi+28h]
          vmovss  xmm2, dword ptr [rdi+2Ch]
          vmovss  xmm3, dword ptr [rdi+34h]
          vmovss  xmm4, dword ptr [rdi+38h]
          vmovss  xmm5, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+240h+var_1F0], xmm0
          vmovsd  [rsp+240h+var_1F8], xmm6
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+240h+var_200], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+240h+var_208], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+240h+inoutBufferPos], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+240h+depth], xmm4
          vmovsd  [rsp+240h+fmt], xmm5
        }
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ": (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (realtimedelta) %.3f, (rate) %.3f ^5(ik)%s %s '%s' %s\n", *(double *)&fmtb, depthd, *(double *)&inoutBufferPosa, *(double *)&v152, v157, v162, v167, v36, v191, v69, v199);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+40h]
          vmovss  xmm3, dword ptr [rdi+34h]
          vcvtss2sd xmm1, xmm4, xmm4
          vmovss  xmm4, dword ptr [rdi+38h]
          vcvtss2sd xmm2, xmm5, xmm5
          vmovss  xmm5, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+240h+var_1F0], xmm0
          vmovsd  [rsp+240h+var_1F8], xmm6
          vmovsd  [rsp+240h+var_200], xmm1
          vmovsd  [rsp+240h+var_208], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+240h+inoutBufferPos], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+240h+depth], xmm4
          vmovsd  [rsp+240h+fmt], xmm5
        }
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ": (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (realtimedelta) %.3f, (rate) %.3f ^5(ik)%s %s %s\n", *(double *)&fmtc, depthe, *(double *)&inoutBufferPosb, *(double *)&v153, v158, v163, v168, v36, v191, v199);
      }
LABEL_151:
      __asm { vmovaps xmm6, [rsp+240h+var_50] }
LABEL_152:
      __asm
      {
        vmovaps xmm7, [rsp+240h+var_60]
        vmovaps xmm8, [rsp+240h+var_70]
      }
      return;
    }
    v179 = 0;
    v92 = 16 * (animIndex + 5i64);
    *(_QWORD *)v207 = 0i64;
    v208 = 0i64;
    v209 = 0i64;
    v210 = 0i64;
    v211 = 0i64;
    v212 = 0i64;
    v213 = 0i64;
    v214 = 0i64;
    if ( (!*(_WORD *)((char *)&SubTreeAnims->size + v92 + 2) || (*((_BYTE *)&SubTreeAnims->debugName + v92) & 3) != 0) && ((__int64)_RDI->parts & 3) != 0 )
    {
      v93 = _RDI->animParent.syncGroup[0];
      if ( v93 == 4 )
      {
        Com_sprintfPos_truncate(v207, 0x40ui64, &v179, "^6(sync)%s", v36);
      }
      else
      {
        LODWORD(fmt) = v93;
        Com_sprintfPos_truncate(v207, 0x40ui64, &v179, "^6(sync %d)%s", fmt, v36);
      }
    }
    v94 = _RDI->notifyName;
    if ( v94 )
    {
      if ( !*(_WORD *)((char *)&SubTreeAnims->size + v92 + 2) || (*((_BYTE *)&SubTreeAnims->debugName + v92) & 3) != 0 )
      {
        notifyChild = _RDI->notifyChild;
        v172 = SL_ConvertToString(v94);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+40h]
          vmovss  xmm1, dword ptr [rdi+28h]
          vmovss  xmm2, dword ptr [rdi+2Ch]
          vmovss  xmm3, dword ptr [rdi+34h]
          vmovss  xmm4, dword ptr [rdi+38h]
          vmovss  xmm5, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+240h+var_1F0], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+240h+var_1F8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+240h+var_200], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+240h+var_208], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  [rsp+240h+inoutBufferPos], xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+240h+depth], xmm5
        }
        if ( notifyChild )
          Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (rate) %.3f, ^5(ik)%s %s, '%s' %s %s\n", dest, depthb, *(double *)&inoutBufferPos, *(double *)&v154, v159, v164, v169, v36, v191, v172, v199, v207);
        else
          Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (rate) %.3f, ^5(ik)%s %s,'%s' %s %s\n", dest, depthb, *(double *)&inoutBufferPos, *(double *)&v154, v159, v164, v169, v36, v191, v172, v199, v207);
LABEL_148:
        v130 = treea;
        XAnimCustomNodePrintDebugInfo(treea, SubTreeAnims, _RDI, buffer, bufferSize, v175, bufferPos);
        children = _RDI->children;
        if ( children )
        {
          v132 = v175;
          do
          {
            XAnimDisplay(dobj, v130, children, v132 + 1, buffer, bufferSize, bufferPos, v36);
            children = XAnimGetAnimInfo(children)->next;
          }
          while ( children );
        }
        goto LABEL_151;
      }
      v109 = SL_ConvertToString(v94);
      v110 = ":%s (weight) %.3f -> %.3f over %.3f, ^5(ik)%s %s, '%s' %s\n";
      v170 = (char *)v109;
      v165 = v191;
      v160 = v36;
    }
    else
    {
      v111 = !*(_WORD *)((char *)&SubTreeAnims->size + v92 + 2) || (*((_BYTE *)&SubTreeAnims->debugName + v92) & 3) != 0;
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+40h]
        vcvtss2sd xmm5, xmm5, xmm5
      }
      if ( v111 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  xmm1, dword ptr [rdi+2Ch]
          vmovss  xmm2, dword ptr [rdi+34h]
          vmovss  xmm3, dword ptr [rdi+38h]
          vmovss  xmm4, dword ptr [rdi+3Ch]
          vmovsd  [rsp+240h+var_1F0], xmm5
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+240h+var_1F8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+240h+var_200], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+240h+var_208], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+240h+inoutBufferPos], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  qword ptr [rsp+240h+depth], xmm4
        }
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (rate) %.3f, ^5(ik)%s %s %s %s\n", dest, depthf, *(double *)&inoutBufferPosc, *(double *)&v155, v161, v166, v171, v36, v191, v199, v207);
        goto LABEL_148;
      }
      v110 = ":%s (weight) %.3f -> %.3f over %.3f, (rate) %.3f ^5(ik)%s %s %s\n";
      v170 = v191;
      v165 = (char *)v36;
      __asm { vmovsd  [rsp+240h+var_200], xmm5 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+34h]
      vmovss  xmm1, dword ptr [rdi+38h]
      vmovss  xmm2, dword ptr [rdi+3Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+240h+var_208], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+240h+inoutBufferPos], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  qword ptr [rsp+240h+depth], xmm2
    }
    Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, v110, dest, depthg, inoutBufferPosd, v156, v160, v165, v170, v199);
    goto LABEL_148;
  }
}

/*
==============
XAnimDisplayTreeParameters
==============
*/
void XAnimDisplayTreeParameters(const DObj *obj, char *buffer, int bufferSize, int *bufferPos)
{
  unsigned __int64 v4; 
  const dvar_t *v8; 
  XAnimTree *tree; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  const scr_string_t **gameParameterNames; 
  const char *v16; 
  const char *v17; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  double v29; 
  double v30; 
  __int64 v31; 
  __int64 v32; 
  char *substr; 

  v4 = bufferSize;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4793, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4794, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4795, ASSERT_TYPE_ASSERT, "(bufferPos)", (const char *)&queryFormat, "bufferPos") )
    __debugbreak();
  if ( obj->tree && obj->tree->maxParameters )
  {
    v8 = DCONST_DVARSTR_xanim_display_tree_parameters_name_filter;
    if ( !DCONST_DVARSTR_xanim_display_tree_parameters_name_filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_display_tree_parameters_name_filter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    substr = (char *)v8->current.integer64;
    Com_sprintfPos_truncate(buffer, v4, bufferPos, "parameters:\n");
    tree = obj->tree;
    v10 = 0;
    v11 = 0;
    if ( obj->tree->maxParameters )
    {
      v12 = 0i64;
      _RBX = 0i64;
      v32 = 0i64;
      v31 = 0i64;
      while ( 1 )
      {
        _RDI = tree->parameterValues;
        gameParameterNames = tree->anims->gameParameterNames;
        if ( !gameParameterNames )
          break;
        v16 = SL_ConvertToString(**(scr_string_t **)((char *)gameParameterNames + v12));
        if ( !substr || !*substr || I_stristr(v16, substr) )
        {
          Com_sprintfPos_truncate(buffer, v4, bufferPos, "%s%s = %s", "^1", v16, "^7");
          _RBX = v31;
LABEL_23:
          switch ( *((_BYTE *)&_RDI->type + _RBX) )
          {
            case 0:
              Com_sprintfPos_truncate(buffer, v4, bufferPos, (const char *)&EdgeOctree_BucketFlagsMask[2]);
              break;
            case 1:
              v17 = "false";
              if ( *(&_RDI->boolValue + _RBX) )
                v17 = "true";
              Com_sprintfPos_truncate(buffer, v4, bufferPos, v17);
              break;
            case 2:
            case 4:
              LODWORD(fmt) = *(&_RDI->byteValue + _RBX);
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "%d", fmt);
              break;
            case 3:
            case 6:
            case 8:
            case 9:
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "ptr");
              break;
            case 5:
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+rdi+8]; jumptable 000000014193BB95 case 5
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+78h+fmt], xmm0
              }
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "%.2f", *(double *)&fmta);
              break;
            case 7:
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+rdi+10h]; jumptable 000000014193BB95 case 7
                vmovss  xmm1, dword ptr [rbx+rdi+0Ch]
                vmovss  xmm2, dword ptr [rbx+rdi+8]
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+78h+var_48], xmm0
                vcvtss2sd xmm1, xmm1, xmm1
                vcvtss2sd xmm2, xmm2, xmm2
                vmovsd  [rsp+78h+var_50], xmm1
                vmovsd  [rsp+78h+fmt], xmm2
              }
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "%.2f,%.2f,%.2f", *(double *)&fmtb, v29, v30);
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4865, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported input parameter type") )
                __debugbreak();
              break;
          }
          if ( v11 != tree->maxParameters - 1 )
            Com_sprintfPos_truncate(buffer, v4, bufferPos, ", ");
          if ( v10 == 6 * (v10 / 6) )
            Com_sprintfPos_truncate(buffer, v4, bufferPos, "\n\t");
          ++v10;
          goto LABEL_40;
        }
        _RBX = v31;
LABEL_40:
        _RBX += 24i64;
        v12 = v32 + 8;
        ++v11;
        v31 = _RBX;
        v32 += 8i64;
        if ( v11 >= tree->maxParameters )
          goto LABEL_41;
      }
      LODWORD(fmt) = v11;
      Com_sprintfPos_truncate(buffer, v4, bufferPos, "[%d] = ", fmt);
      goto LABEL_23;
    }
LABEL_41:
    Com_sprintfPos_truncate(buffer, v4, bufferPos, "\n");
  }
}

/*
==============
XAnimEnsureGoalWeightParent
==============
*/
__int64 XAnimEnsureGoalWeightParent(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  XAnimTree *tree; 
  __int64 v7; 
  __int64 result; 
  unsigned __int16 v12; 
  const dvar_t *v14; 
  const char *AnimDebugName; 
  const XAnim_s *SubTreeAnims; 
  XAnimSubTreeID v20; 
  unsigned int parent; 
  unsigned __int16 v22; 
  unsigned __int16 children; 
  unsigned __int8 *v24; 
  __int64 v25; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *v27; 
  __int64 after; 
  __int64 v30; 
  double v31; 

  tree = obj->tree;
  v7 = animIndex;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6803, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  if ( (_DWORD)v7 )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6833, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    v20 = subTreeID;
    parent = SubTreeAnims->entries[v7].parent;
    if ( !SubTreeAnims->entries[v7].parent && subTreeID )
    {
      XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v7);
      XAnimAssertGraftSyncNode(tree, graftAnimIndex, &SubTreeAnims->entries[v7]);
      parent = graftAnimIndex;
      v20 = XANIM_SUBTREE_DEFAULT;
    }
    v22 = XAnimEnsureGoalWeightParent(obj, graftAnimIndex, v20, parent);
    children = XAnimGetAnimInfo(v22)->children;
    if ( !children )
    {
LABEL_35:
      v12 = XAnimAllocInfoWithParent(tree, subTreeID, NULL, v7, v22, 0);
      AnimInfo = XAnimGetAnimInfo(v12);
      *(_QWORD *)&AnimInfo->state.currentAnimTime = 0i64;
      *(_QWORD *)&AnimInfo->state.cycleCount = 0i64;
      *(_QWORD *)&AnimInfo->state.goalWeight = 0i64;
      *(_QWORD *)&AnimInfo->state.rate = 0i64;
      *(_QWORD *)&AnimInfo->state.startWeight = 0i64;
      AnimInfo->notifyName = 0;
      *(_DWORD *)&AnimInfo->notifyChild = -65536;
      AnimInfo->notifyType = 0;
      AnimInfo->subTreeID = subTreeID;
      v27 = XAnimGetSubTreeAnims(tree, subTreeID);
      if ( XAnimIsCustomNode(v27, AnimInfo) )
        AnimInfo->state.flags |= 8u;
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( (children & 0x8000u) != 0 )
      {
        v25 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v25 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v30) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(after) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v30) )
            __debugbreak();
        }
        v24 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v25];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v30) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(after) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v30) )
            __debugbreak();
        }
        v24 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      if ( !v24[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6854, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
        __debugbreak();
      if ( *((unsigned __int16 *)v24 + 3) == (_DWORD)v7 && *((_WORD *)v24 + 8) == subTreeID )
        break;
      children = *((_WORD *)v24 + 5);
      if ( !children )
        goto LABEL_35;
    }
    result = children;
  }
  else
  {
    result = tree->children;
    if ( !(_WORD)result )
    {
      v12 = XAnimAllocInfoWithParent(tree, subTreeID, NULL, 0, 0, 0);
      _RBX = XAnimGetAnimInfo(v12);
      XAnimInitInfo(_RBX, tree, subTreeID);
      _RBX->state.goalWeight = 1.0;
      _RBX->state.weight = 1.0;
      _RBX->state.goalTime = 0.0;
      *(_QWORD *)&_RBX->state.rate = 1065353216i64;
      _RBX->state.startWeight = 1.0;
      v14 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
      if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled && XAnimInfoHasScrubbedNotetracks(_RBX) )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+40h]
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm6, xmm0
        }
        AnimDebugName = XAnimGetAnimDebugName(tree->anims, _RBX->animIndex);
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+78h+var_40], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6825, ASSERT_TYPE_ASSERT, "(info->state.rate == 0.0f)", "%s\n\tXAnimEnsureGoalWeightParent '%s': info->state.rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "info->state.rate == 0.0f", AnimDebugName, v31) )
          __debugbreak();
      }
LABEL_37:
      result = v12;
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
  return result;
}

/*
==============
XAnimFillInSyncNodes_r
==============
*/
void XAnimFillInSyncNodes_r(XAnim_s *anims, unsigned int animIndex, bool bLoop, const XAnimSyncGroupID syncGroup)
{
  unsigned __int8 v5; 
  XAnimEntry *v8; 
  XAnimParts *PartsInternal; 
  const char *name; 
  const char *v11; 
  const char *v12; 
  int v13; 
  int v14; 
  const char *AnimDebugName; 
  int numAnims; 
  char *fmt; 
  ThreadContext CurrentThreadContext; 

  v5 = syncGroup;
  v8 = &anims->entries[animIndex];
  if ( v8->numAnims )
  {
    v13 = 0;
    if ( ((__int64)v8->parts & 3) != 0 )
    {
      v14 = 0;
      do
      {
        ++v14;
        v8 = &anims->entries[v8->animParent.children];
      }
      while ( v8->numAnims );
      AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AF590, 377i64, anims->debugName, v14, AnimDebugName);
    }
    numAnims = v8->numAnims;
    v8->animParent.syncGroup[0] = v5;
    v8->animParent.flags |= !bLoop + 1;
    if ( numAnims )
    {
      do
      {
        XAnimFillInSyncNodes_r(anims, v13 + v8->animParent.children, bLoop, (const XAnimSyncGroupID)v5);
        ++v13;
      }
      while ( v13 < numAnims );
    }
  }
  else
  {
    PartsInternal = XAnimGetPartsInternal(&anims->entries[animIndex]);
    if ( DB_IsXAssetDefault(ASSET_TYPE_XANIMPARTS, PartsInternal->name) )
    {
      name = PartsInternal->name;
      v11 = XAnimGetAnimDebugName(anims, animIndex);
      Com_PrintError(1, "ERROR: Cannot find 'xanim/%s', xanimparts '%s'. Animations within loopsync/nonloopsync tags are required.\n", v11, name);
      if ( DB_IsXAssetTransient(ASSET_TYPE_XANIMPARTS, PartsInternal->name) )
        Com_PrintError(1, "ERROR: \t'%s' appears to be transient. You should add this to a 'include_no_transient' csv.\n", PartsInternal->name);
      if ( s_fatalXAnimErrorCheckThread != Sys_GetCurrentThreadContext() )
      {
        CurrentThreadContext = Sys_GetCurrentThreadContext();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7722, ASSERT_TYPE_ASSERT, "( s_fatalXAnimErrorCheckThread ) == ( Sys_GetCurrentThreadContext() )", "%s == %s\n\t%u, %u", "s_fatalXAnimErrorCheckThread", "Sys_GetCurrentThreadContext()", s_fatalXAnimErrorCheckThread, CurrentThreadContext) )
          __debugbreak();
      }
      s_fatalXAnimLoadError = 1;
    }
    else if ( (PartsInternal->flags & 1) != bLoop )
    {
      fmt = anims->debugName;
      v12 = XAnimGetAnimDebugName(anims, animIndex);
      if ( bLoop )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AF4D0, 373i64, v12, fmt);
      else
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AF530, 375i64, v12, fmt);
    }
  }
}

/*
==============
XAnimFindData
==============
*/
XAnimParts *XAnimFindData(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_XANIMPARTS, name, 1).parts;
}

/*
==============
XAnimFindServerNoteTrack
==============
*/

float __fastcall XAnimFindServerNoteTrack(const DObj *obj, unsigned __int16 infoIndex, double dtime, const XAnimSyncGroupCalcData *syncGroupCalcData)
{
  XAnimTree *tree; 
  unsigned __int8 v17; 
  bool v18; 
  bool v19; 
  bool v26; 
  bool v27; 
  unsigned __int16 children; 
  double v35; 

  tree = obj->tree;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RSI = syncGroupCalcData;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4167, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4170, ASSERT_TYPE_ASSERT, "( tree->anims )", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4171, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  _RAX = GetNonRootAnimInfo(infoIndex);
  _RBX = _RAX;
  __asm { vucomiss xmm6, dword ptr [rax+3Ch] }
  if ( v19 )
    goto LABEL_34;
  __asm { vucomiss xmm6, dword ptr [rax+38h] }
  if ( !_RAX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4180, ASSERT_TYPE_ASSERT, "( info->inuse )", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( _RBX->animToModel )
  {
    __asm { vmovaps xmm2, xmm7; dtime }
    *(float *)&_XMM0 = XAnimFindServerNoteTrackLeafNode(obj, _RBX, *(float *)&_XMM2);
    goto LABEL_35;
  }
  if ( ((__int64)_RBX->parts & 3) != 0 )
  {
    v17 = _RBX->animParent.syncGroup[0];
    v18 = v17 < 4u;
    v19 = v17 == 4;
    if ( v17 == 4 )
    {
      *(float *)&_XMM0 = XAnimGetAverageRateFrequency(tree, infoIndex);
      __asm { vmulss  xmm0, xmm0, dword ptr [rbx+40h] }
    }
    else
    {
      _RCX = 5i64 * v17;
      __asm { vmovss  xmm0, dword ptr [rsi+rcx*4] }
    }
    __asm
    {
      vmulss  xmm7, xmm0, xmm7
      vucomiss xmm7, xmm6
    }
    if ( !v19 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vcomiss xmm0, xmm6
      }
      if ( v18 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+68h+var_40], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4201, ASSERT_TYPE_ASSERT, "( ( state->oldTime >= 0 ) )", "( state->oldTime ) = %g", v35) )
          __debugbreak();
      }
      __asm { vmovaps xmm2, xmm7; dtime }
      *(float *)&_XMM0 = XAnimFindServerNoteTrackSyncSubTree(obj, _RBX, *(float *)&_XMM2);
      goto LABEL_35;
    }
LABEL_34:
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    goto LABEL_35;
  }
  v26 = obj->entnum == 0;
  if ( obj->entnum )
  {
    v26 = _RBX->notifyName == 0;
    if ( _RBX->notifyName )
    {
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4207, ASSERT_TYPE_ASSERT, "( !(obj->entnum && (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) ) )", (const char *)&queryFormat, "!(obj->entnum && (info->notifyName != NULL_SCR_STRING) )");
      v26 = !v27;
      if ( v27 )
        __debugbreak();
    }
  }
  __asm
  {
    vmulss  xmm7, xmm7, dword ptr [rbx+40h]
    vucomiss xmm7, xmm6
  }
  if ( v26 )
    goto LABEL_34;
  children = _RBX->children;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  for ( ; children; children = XAnimGetAnimInfo(children)->next )
  {
    __asm { vmovaps xmm2, xmm7; dtime }
    *(float *)&_XMM0 = XAnimFindServerNoteTrack(obj, children, *(float *)&_XMM2, _RSI);
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  __asm { vmovaps xmm0, xmm6 }
LABEL_35:
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimFindServerNoteTrackLeafNode
==============
*/

float __fastcall XAnimFindServerNoteTrackLeafNode(const DObj *obj, XAnimInfo *info, double dtime)
{
  bool v12; 
  bool v13; 
  unsigned __int16 oldCycleCount; 
  float fmt; 
  double v39; 
  XAnimState nextSyncState; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  v12 = !info->inuse;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RSI = info;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm6, xmm2
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4017, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  _R14 = _RSI->parts;
  v12 = _R14 == NULL;
  if ( !_R14 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4021, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+68h]
    vmulss  xmm1, xmm0, dword ptr [rsi+40h]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm9, xmm6, xmm1
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm9, xmm8
  }
  if ( v12 )
    goto LABEL_18;
  __asm
  {
    vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@46fffe00
    vcvtss2sd xmm0, xmm9, xmm9
    vmovsd  [rsp+0D8h+var_B0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4029, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", v39) )
    __debugbreak();
  __asm
  {
    vaddss  xmm6, xmm9, dword ptr [rsi+2Ch]
    vcomiss xmm6, xmm8
  }
  oldCycleCount = _RSI->state.oldCycleCount;
  __asm
  {
    vcomiss xmm9, xmm8
    vcomiss xmm6, xmm7
  }
  if ( (_R14->flags & 1) != 0 )
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
    while ( 1 )
    {
      __asm { vaddss  xmm6, xmm6, xmm0 }
      ++oldCycleCount;
      __asm { vcomiss xmm6, xmm7 }
    }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f7ffffe
    vcmpless xmm0, xmm1, dword ptr [rsi+2Ch]
    vblendvps xmm6, xmm1, xmm7, xmm0
  }
  if ( !_RSI->notifyName && !_RSI->notifyType )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vsubss  xmm1, xmm0, xmm6
    vcomiss xmm2, xmm1
  }
  if ( oldCycleCount < _RSI->state.cycleCount )
  {
LABEL_18:
    __asm { vmovaps xmm0, xmm7 }
  }
  else
  {
LABEL_17:
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    nextSyncState.oldCycleCount = _RSI->state.cycleCount;
    nextSyncState.cycleCount = oldCycleCount;
    __asm
    {
      vmovss  [rsp+0D8h+nextSyncState.oldTime], xmm0
      vmovss  [rsp+0D8h+nextSyncState.currentAnimTime], xmm6
      vmovss  dword ptr [rsp+0D8h+fmt], xmm9
    }
    *(float *)&_XMM0 = XAnimGetNextServerNotifyFrac(obj, _RSI, &_RSI->state, &nextSyncState, fmt);
  }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimFindServerNoteTrackSyncSubTree
==============
*/

float __fastcall XAnimFindServerNoteTrackSyncSubTree(const DObj *obj, XAnimInfo *info, double dtime, double _XMM3_8)
{
  unsigned __int16 oldCycleCount; 
  int v18; 
  float fmt; 
  double v35; 
  XAnimState nextSyncState; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vaddss  xmm6, xmm2, dword ptr [rdx+2Ch]
  }
  oldCycleCount = info->state.oldCycleCount;
  _RSI = info;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vmovaps xmm9, xmm2
  }
  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4097, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  __asm
  {
    vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@46fffe00
    vcvtss2sd xmm0, xmm9, xmm9
    vmovsd  [rsp+0E8h+var_C0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4100, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", v35) )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v18 = _RSI->animParent.flags & 1;
  __asm { vcomiss xmm9, xmm8 }
  if ( (_RSI->animParent.flags & 2) == 0 )
  {
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4112, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME)", (const char *)&queryFormat, "info->animParent.flags & XANIM_LOOP_SYNC_TIME") )
      __debugbreak();
    __asm
    {
      vcomiss xmm6, xmm7
      vmovss  xmm0, cs:__real@bf800000
    }
    while ( 1 )
    {
      __asm { vaddss  xmm6, xmm6, xmm0 }
      ++oldCycleCount;
      __asm { vcomiss xmm6, xmm7 }
    }
  }
  if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4106, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_LOOP_SYNC_TIME))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_LOOP_SYNC_TIME)") )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm7
    vmovss  xmm1, cs:__real@3f7ffffe
    vcmpless xmm0, xmm1, dword ptr [rsi+2Ch]
    vblendvps xmm6, xmm1, xmm7, xmm0
  }
  if ( !_RSI->notifyName && !_RSI->notifyType )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+28h]
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax
    vsubss  xmm2, xmm1, xmm6
    vcomiss xmm3, xmm2
  }
  if ( oldCycleCount < _RSI->state.cycleCount )
  {
    __asm { vmovaps xmm0, xmm7 }
  }
  else
  {
LABEL_20:
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    nextSyncState.oldCycleCount = _RSI->state.cycleCount;
    nextSyncState.cycleCount = oldCycleCount;
    __asm
    {
      vmovss  [rsp+0E8h+nextSyncState.oldTime], xmm0
      vmovss  [rsp+0E8h+nextSyncState.currentAnimTime], xmm6
      vmovss  dword ptr [rsp+0E8h+fmt], xmm9
    }
    *(float *)&_XMM0 = XAnimGetServerNotifyFracSyncTotal(obj, _RSI, &_RSI->state, &nextSyncState, fmt);
  }
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimFreeAnimTreeByType
==============
*/
void XAnimFreeAnimTreeByType(XAnimTree *animTree)
{
  XAnim_s *anims; 
  unsigned __int64 v3; 

  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1240, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( XAnimIsSimpleTree(animTree) )
  {
    if ( !XAnimIsSimpleTree(animTree) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1254, ASSERT_TYPE_ASSERT, "(XAnimIsSimpleTree( animTree ))", (const char *)&queryFormat, "XAnimIsSimpleTree( animTree )") )
      __debugbreak();
    if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1230, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    if ( !animTree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1231, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
      __debugbreak();
    if ( SLOBYTE(animTree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1232, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
      __debugbreak();
    anims = animTree->anims;
    if ( animTree->anims->entries[0].numAnims == 2 )
    {
      if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1128, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
        __debugbreak();
      if ( SLOBYTE(animTree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1129, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
        __debugbreak();
      if ( animTree->anims->entries[0].numAnims != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1130, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 2)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 2") )
        __debugbreak();
      XAnimClearTreeNoObj(animTree);
      v3 = 176i64;
    }
    else
    {
      if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1010, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
        __debugbreak();
      if ( SLOBYTE(animTree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1011, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
        __debugbreak();
      if ( animTree->anims->entries[0].numAnims != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1012, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 1)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 1") )
        __debugbreak();
      XAnimClearTreeNoObj(animTree);
      v3 = 160i64;
    }
    MT_Free(animTree, v3);
  }
  else
  {
    Com_XAnimFreeSmallTree(animTree);
  }
}

/*
==============
XAnimFreeAnims
==============
*/
void XAnimFreeAnims(XAnim_s *anims, void (*optionalFree)(void *, unsigned __int64))
{
  if ( anims->initialized )
  {
    *(_WORD *)&anims->initialized = 0;
    anims->numBindings = 0;
    anims->numGameParameters = 0;
    anims->numPublicNodes = 0;
    anims->size = 0;
    if ( optionalFree )
      optionalFree(anims, 8 * (anims->maxGameParameters + 3i64 * anims->maxBindings + 2i64 * anims->maxPublicNodes + 10));
  }
}

/*
==============
XAnimFreeInfo
==============
*/
void XAnimFreeInfo(XAnimTree *tree, unsigned __int16 infoIndex, const DObj *obj)
{
  volatile int *p_modifyRefCount; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 children; 
  XAnimToXModel *animToModel; 
  unsigned __int16 prev; 
  unsigned __int16 next; 
  unsigned __int16 parent; 
  scr_string_t notifyName; 

  p_modifyRefCount = &tree->modifyRefCount;
  if ( (((_BYTE)tree + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &tree->modifyRefCount) )
    __debugbreak();
  _InterlockedIncrement(p_modifyRefCount);
  if ( tree->calcRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1788, ASSERT_TYPE_ASSERT, "(!tree->calcRefCount)", (const char *)&queryFormat, "!tree->calcRefCount") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1794, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  XAnimDestroyNode(tree, NonRootAnimInfo);
  if ( NonRootAnimInfo->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1799, ASSERT_TYPE_ASSERT, "(info->tree == tree)", (const char *)&queryFormat, "info->tree == tree") )
    __debugbreak();
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1800, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  children = NonRootAnimInfo->children;
  NonRootAnimInfo->inuse = 0;
  if ( NonRootAnimInfo->animToModel )
  {
    if ( children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1806, ASSERT_TYPE_ASSERT, "(!info->children)", (const char *)&queryFormat, "!info->children") )
      __debugbreak();
    if ( !NonRootAnimInfo->parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1810, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    if ( !NonRootAnimInfo->animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1813, ASSERT_TYPE_ASSERT, "(info->animToModel != nullptr)", (const char *)&queryFormat, "info->animToModel != nullptr") )
      __debugbreak();
    animToModel = NonRootAnimInfo->animToModel;
    if ( animToModel )
    {
      MT_Free(animToModel, 2 * (animToModel->boneCount + (unsigned __int64)animToModel->blendShapeWeightCount) + 36);
      NonRootAnimInfo->animToModel = NULL;
    }
  }
  else if ( children )
  {
    do
      XAnimFreeInfo(tree, NonRootAnimInfo->children, obj);
    while ( NonRootAnimInfo->children );
  }
  prev = NonRootAnimInfo->prev;
  next = NonRootAnimInfo->next;
  if ( prev )
  {
    XAnimGetAnimInfo(prev)->next = next;
  }
  else
  {
    parent = NonRootAnimInfo->parent;
    if ( parent )
      XAnimGetAnimInfo(parent)->children = NonRootAnimInfo->next;
    else
      tree->children = next;
  }
  if ( next )
    XAnimGetAnimInfo(next)->prev = prev;
  notifyName = NonRootAnimInfo->notifyName;
  if ( notifyName )
  {
    SL_RemoveRefToString(notifyName);
    NonRootAnimInfo->notifyName = 0;
  }
  NonRootAnimInfo->prev = 0;
  NonRootAnimInfo->notifyIndex = -1;
  Sys_EnterCriticalSection(CRITSECT_XANIM_ALLOC);
  XAnimFreeInfoMemory(infoIndex);
  if ( !g_info_usage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1863, ASSERT_TYPE_ASSERT, "(g_info_usage)", (const char *)&queryFormat, "g_info_usage") )
    __debugbreak();
  --g_info_usage;
  if ( !tree->info_usage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1866, ASSERT_TYPE_ASSERT, "(tree->info_usage)", (const char *)&queryFormat, "tree->info_usage") )
    __debugbreak();
  --tree->info_usage;
  Sys_LeaveCriticalSection(CRITSECT_XANIM_ALLOC);
  if ( tree->calcRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1875, ASSERT_TYPE_ASSERT, "(!tree->calcRefCount)", (const char *)&queryFormat, "!tree->calcRefCount") )
    __debugbreak();
  if ( ((unsigned __int8)p_modifyRefCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_modifyRefCount) )
    __debugbreak();
  _InterlockedDecrement(p_modifyRefCount);
}

/*
==============
XAnimFreeSimpleBlendTree
==============
*/
void XAnimFreeSimpleBlendTree(XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1127, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1128, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1129, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1130, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 2)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 2") )
    __debugbreak();
  XAnimClearTreeNoObj(tree);
  MT_Free(tree, 0xB0ui64);
}

/*
==============
XAnimFreeSimpleTree
==============
*/
void XAnimFreeSimpleTree(XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1009, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1010, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1011, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1012, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 1)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 1") )
    __debugbreak();
  XAnimClearTreeNoObj(tree);
  MT_Free(tree, 0xA0ui64);
}

/*
==============
XAnimFreeTree
==============
*/
void XAnimFreeTree(XAnimTree *tree, void (*Free)(void *, unsigned __int64))
{
  unsigned __int16 maxParameters; 
  unsigned __int16 numGameParameters; 
  __int64 v6; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 941, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 942, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  XAnimClearTreeNoObj(tree);
  if ( tree->info_usage )
  {
    LODWORD(v6) = tree->info_usage;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 947, ASSERT_TYPE_ASSERT, "( ( !tree->info_usage ) )", "( tree->info_usage ) = %i", v6) )
      __debugbreak();
  }
  if ( Free )
  {
    maxParameters = tree->maxParameters;
    numGameParameters = tree->anims->numGameParameters;
    if ( maxParameters < numGameParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 955, ASSERT_TYPE_ASSERT, "( tree->maxParameters ) >= ( tree->anims->numGameParameters )", "%s >= %s\n\t%i, %i", "tree->maxParameters", "tree->anims->numGameParameters", maxParameters, numGameParameters) )
      __debugbreak();
    Free(tree, 8 * (3i64 * tree->maxParameters + 6));
  }
}

/*
==============
XAnimFreeXAnimToXModel
==============
*/
void XAnimFreeXAnimToXModel(XAnimToXModel **animToModel)
{
  XAnimToXModel *v2; 

  v2 = *animToModel;
  if ( v2 )
  {
    MT_Free(v2, 2 * (v2->boneCount + (unsigned __int64)v2->blendShapeWeightCount) + 36);
    *animToModel = NULL;
  }
}

/*
==============
XAnimGetAbsDelta
==============
*/
void XAnimGetAbsDelta(const XAnim_s *anims, unsigned int animIndex, vec4_t *rot, vec3_t *trans, float time)
{
  __int64 v12; 
  XAnimEntry *v13; 
  const XAnimParts *PartsInternal; 
  char v30; 
  XAnimRotPos rotPos; 

  _R14 = trans;
  _RSI = rot;
  v12 = animIndex;
  Profile_Begin(412);
  v13 = &anims->entries[v12];
  if ( v13->numAnims )
  {
    _RSI->v[3] = 1.0;
    *(_QWORD *)_RSI->v = 0i64;
    _RSI->v[2] = 0.0;
    *(_QWORD *)_R14->v = 0i64;
    _R14->v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovaps [rsp+98h+var_48], xmm7
    }
    PartsInternal = XAnimGetPartsInternal(v13);
    __asm
    {
      vmovss  xmm2, [rsp+98h+time]; time
      vmovss  xmm1, cs:__real@3f800000; weightScale
      vxorps  xmm0, xmm0, xmm0
      vmovups ymmword ptr [rsp+98h+rotPos.rot], ymm0
    }
    XAnimCalcAbsDeltaParts(PartsInternal, *(double *)&_XMM1, *(double *)&_XMM2, &rotPos);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+98h+rotPos.rot]
      vmovss  xmm5, dword ptr [rsp+98h+rotPos.rot+4]
      vmovss  xmm6, dword ptr [rsp+98h+rotPos.rot+8]
      vmovss  xmm7, dword ptr [rsp+98h+rotPos.rot+0Ch]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm2, xmm1
    }
    if ( v30 )
    {
      _RSI->v[3] = 1.0;
      *(_QWORD *)_RSI->v = 0i64;
      _RSI->v[2] = 0.0;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsi], xmm4
        vmovss  dword ptr [rsi+4], xmm5
        vmovss  dword ptr [rsi+8], xmm6
        vmovss  dword ptr [rsi+0Ch], xmm7
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+rotPos.pos]
      vmovss  xmm1, dword ptr [rsp+98h+rotPos.pos+4]
      vmovaps xmm7, [rsp+98h+var_48]
      vmovaps xmm6, [rsp+98h+var_38]
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [rsp+98h+rotPos.pos+8]
      vmovss  dword ptr [r14+8], xmm0
      vmovss  dword ptr [r14+4], xmm1
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimGetAnimDebugName
==============
*/
char *XAnimGetAnimDebugName(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  char **debugAnimNames; 
  XAnimEntry *v5; 
  const char *v6; 
  XAnimParts *PartsInternal; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5753, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5754, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v2, anims->size) )
    __debugbreak();
  debugAnimNames = anims->debugAnimNames;
  v5 = &anims->entries[v2];
  if ( debugAnimNames )
  {
    if ( !debugAnimNames[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5761, ASSERT_TYPE_ASSERT, "(anims->debugAnimNames[animIndex])", (const char *)&queryFormat, "anims->debugAnimNames[animIndex]") )
      __debugbreak();
    v6 = anims->debugAnimNames[v2];
    if ( !v5->numAnims )
    {
      PartsInternal = XAnimGetPartsInternal(v5);
      if ( DB_IsXAssetDefault(ASSET_TYPE_XANIMPARTS, PartsInternal->name) )
        return j_va("^3%s (missing)", v6);
    }
    return (char *)v6;
  }
  else if ( v5->numAnims )
  {
    return j_va("%i", (unsigned int)v2);
  }
  else
  {
    return (char *)XAnimGetPartsInternal(&anims->entries[v2])->name;
  }
}

/*
==============
XAnimGetAnimMap
==============
*/
XAnimToXModel *XAnimGetAnimMap(const XAnimParts *parts, const XModelNameMap *modelMap, XAnimToXModel *oldAnimToModelToFree)
{
  XAnimToXModel *v3; 
  const XAnimParts *v5; 
  __int64 v6; 
  scr_string_t *names; 
  unsigned int v8; 
  _WORD *v9; 
  __int64 v10; 
  scr_string_t v11; 
  __int64 blendShapeWeightCount; 
  scr_string_t *blendShapeWeightNames; 
  char *v14; 
  __int64 v15; 
  __int64 v16; 
  scr_string_t v17; 
  unsigned __int16 v18; 
  unsigned __int8 v19; 
  int v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  unsigned int v24; 
  unsigned __int64 v25; 
  size_t v26; 
  void *v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  __int64 v33[3]; 
  __int64 v34; 
  unsigned __int8 v35; 
  unsigned __int8 v36; 
  unsigned __int16 v37; 
  _WORD v38[1282]; 
  char Src[2048]; 

  v3 = oldAnimToModelToFree;
  v5 = parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1466, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  v6 = v5->boneCount[9];
  names = v5->names;
  v8 = 0;
  memset(v33, 0, sizeof(v33));
  v34 = 0i64;
  v30 = v6;
  if ( (_DWORD)v6 )
  {
    v9 = v38;
    do
    {
      v10 = (-7 * (unsigned __int16)*names) & 0x3FF;
      v11 = modelMap->boneNames[v10];
      if ( v11 )
      {
        while ( *names != v11 )
        {
          v10 = ((_WORD)v10 + 1) & 0x3FF;
          v11 = modelMap->boneNames[v10];
          if ( !v11 )
            goto LABEL_9;
        }
        v24 = modelMap->boneIndices[v10];
        *v9 = v24;
        v25 = v24;
        if ( (unsigned __int8)(v24 >> 15) )
        {
          HIDWORD(v34) |= 2u;
        }
        else
        {
          if ( v24 >= 0x100 )
          {
            LODWORD(v29) = 256;
            LODWORD(v28) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v28, v29) )
              __debugbreak();
          }
          *((_DWORD *)v33 + (v25 >> 5)) |= 0x80000000 >> (v25 & 0x1F);
        }
      }
      else
      {
LABEL_9:
        *v9 = 255;
        ++v8;
      }
      ++names;
      ++v9;
      --v6;
    }
    while ( v6 );
    v5 = parts;
    v3 = oldAnimToModelToFree;
    LODWORD(v6) = v30;
  }
  blendShapeWeightCount = v5->blendShapeWeightCount;
  blendShapeWeightNames = v5->blendShapeWeightNames;
  if ( v5->blendShapeWeightCount )
  {
    v14 = Src;
    v15 = v5->blendShapeWeightCount;
    do
    {
      v16 = *blendShapeWeightNames & 0x3FF;
      v17 = modelMap->blendshapeNames[v16];
      if ( v17 )
      {
        while ( *blendShapeWeightNames != v17 )
        {
          v16 = ((_WORD)v16 + 1) & 0x3FF;
          v17 = modelMap->blendshapeNames[v16];
          if ( !v17 )
            goto LABEL_17;
        }
        v18 = modelMap->blendshapeIndices[v16];
      }
      else
      {
LABEL_17:
        v18 = 1023;
      }
      *(_WORD *)v14 = v18;
      ++blendShapeWeightNames;
      v14 += 2;
      --v15;
    }
    while ( v15 );
  }
  memcpy_0(&v38[(unsigned int)v6], Src, 2 * blendShapeWeightCount);
  v19 = truncate_cast<unsigned char,unsigned int>(v6);
  v20 = v19;
  v35 = v19;
  v36 = truncate_cast<unsigned char,unsigned int>(v8);
  if ( v20 != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1531, ASSERT_TYPE_ASSERT, "(animToModel.boneCount == boneCount)", (const char *)&queryFormat, "animToModel.boneCount == boneCount") )
    __debugbreak();
  v21 = 2 * (blendShapeWeightCount + v6) + 36;
  v37 = truncate_cast<unsigned short,unsigned int>(blendShapeWeightCount);
  if ( v3 )
  {
    v22 = 2 * (v3->boneCount + (unsigned int)v3->blendShapeWeightCount) + 36;
    if ( v21 == (_DWORD)v22 )
    {
      memcpy_0(v3, v33, (unsigned int)v22);
      return v3;
    }
    MT_Free(v3, v22);
  }
  v26 = v21;
  v27 = MT_Alloc(v21, 11);
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1559, ASSERT_TYPE_ASSERT, "(animToModelBuf)", (const char *)&queryFormat, "animToModelBuf") )
    __debugbreak();
  memcpy_0(v27, v33, v26);
  return (XAnimToXModel *)v27;
}

/*
==============
XAnimGetAnimName
==============
*/
const char *XAnimGetAnimName(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  XAnimEntry *v4; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5722, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5723, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v2, anims->size) )
    __debugbreak();
  v4 = &anims->entries[v2];
  if ( v4->numAnims )
    return (char *)&queryFormat.fmt + 3;
  else
    return XAnimGetPartsInternal(v4)->name;
}

/*
==============
XAnimGetAnimToModel
==============
*/
XAnimToXModel *XAnimGetAnimToModel(const DObj *obj, const XAnimEntry *anim, XModelNameMap *modelNameMap)
{
  bool v3; 
  XModelNameMap *v7; 
  bool includeClientBones; 
  unsigned int ClientBoneOffset; 
  const XAnimParts *PartsInternal; 
  XAnimToXModel *AnimMap; 
  char v13[12304]; 

  v3 = anim->numAnims == 0;
  v13[12288] = 0;
  if ( !v3 )
    return 0i64;
  Profile_Begin(451);
  v7 = (XModelNameMap *)v13;
  if ( modelNameMap )
    v7 = modelNameMap;
  if ( !v7->initialized )
  {
    includeClientBones = DObjHasClientOnlyBones(obj);
    ClientBoneOffset = DObjGetClientBoneOffset(obj);
    XAnimInitModelMap(obj->models, obj->numModels, v7, ClientBoneOffset, includeClientBones);
  }
  PartsInternal = XAnimGetPartsInternal(anim);
  AnimMap = XAnimGetAnimMap(PartsInternal, v7, NULL);
  Profile_EndInternal(NULL);
  return AnimMap;
}

/*
==============
XAnimGetAnimTreeDebugName
==============
*/
char *XAnimGetAnimTreeDebugName(const XAnim_s *anims)
{
  if ( anims )
    return anims->debugName;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5779, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  return (char *)MEMORY[8];
}

/*
==============
XAnimGetAnimTreeSize
==============
*/
__int64 XAnimGetAnimTreeSize(const XAnim_s *anims)
{
  if ( anims )
    return anims->size;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5794, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
XAnimGetAnims
==============
*/
XAnim_s *XAnimGetAnims(const XAnimTree *tree)
{
  if ( tree )
    return tree->anims;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1326, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  return (XAnim_s *)MEMORY[0];
}

/*
==============
XAnimGetAssetType
==============
*/
__int64 XAnimGetAssetType(XAnimTree *tree, unsigned int index)
{
  __int64 v2; 
  const XAnimEntry *v4; 

  v2 = index;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8263, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8264, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= tree->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8265, ASSERT_TYPE_ASSERT, "( index ) < ( tree->anims->size )", "%s < %s\n\t%i, %i", "index", "tree->anims->size", v2, tree->anims->size) )
    __debugbreak();
  v4 = &tree->anims->entries[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8268, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  return XAnimGetPartsInternal(v4)->assetType;
}

/*
==============
XAnimGetAverageRateFrequency
==============
*/
float XAnimGetAverageRateFrequency(const XAnimTree *tree, unsigned __int16 infoIndex)
{
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  bool v16; 
  char v19; 
  bool v20; 
  double v27; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1921, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1922, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1926, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( AnimInfo->animToModel )
  {
    _RBX = AnimInfo->parts;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1932, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+68h] }
  }
  else
  {
    children = AnimInfo->children;
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
      vmovaps [rsp+0B8h+var_68], xmm9
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
    }
    if ( children )
    {
      __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
      do
      {
        _RDI = XAnimGetAnimInfo(children);
        __asm
        {
          vmovss  xmm6, dword ptr [rax+3Ch]
          vcomiss xmm6, xmm7
        }
        if ( v19 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+0B8h+var_90], xmm0
          }
          v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1943, ASSERT_TYPE_ASSERT, "( ( weight >= 0.0f ) )", "( weight ) = %g", v27);
          v16 = !v20;
          if ( v20 )
            __debugbreak();
        }
        __asm { vucomiss xmm6, xmm7 }
        if ( !v16 )
        {
          *(float *)&_XMM0 = XAnimGetAverageRateFrequency(tree, children);
          __asm { vucomiss xmm0, xmm7 }
          if ( !v16 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm6
              vmulss  xmm1, xmm0, dword ptr [rdi+40h]
              vaddss  xmm9, xmm9, xmm1
              vaddss  xmm8, xmm8, xmm6
            }
          }
        }
        children = _RDI->next;
      }
      while ( children );
      __asm
      {
        vucomiss xmm8, xmm7
        vmovaps xmm6, [rsp+0B8h+var_38]
      }
    }
    __asm
    {
      vmovaps xmm9, [rsp+0B8h+var_68]
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+0B8h+var_48]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetChildAt
==============
*/
__int64 XAnimGetChildAt(const XAnim_s *anims, unsigned int animIndex, unsigned int childIndex)
{
  __int64 v3; 
  char *v6; 
  __int64 v8; 
  __int64 v9; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5705, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v3 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5706, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v3, anims->size) )
    __debugbreak();
  v6 = (char *)anims + 16 * v3;
  if ( childIndex >= *((unsigned __int16 *)v6 + 41) )
  {
    LODWORD(v9) = *((unsigned __int16 *)v6 + 41);
    LODWORD(v8) = childIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5707, ASSERT_TYPE_ASSERT, "( childIndex ) < ( anims->entries[animIndex].numAnims )", "%s < %s\n\t%i, %i", "childIndex", "anims->entries[animIndex].numAnims", v8, v9) )
      __debugbreak();
  }
  return childIndex + *((unsigned __int16 *)v6 + 46);
}

/*
==============
XAnimGetClientLodFloat
==============
*/
float XAnimGetClientLodFloat(const DObj *obj)
{
  XAnimTree *tree; 
  char v6; 
  char v7; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9712, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9713, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  tree = obj->tree;
  if ( tree && XAnimTreeHasLods(tree) )
  {
    _RDI = DCONST_DVARFLT_xanim_lodOverride;
    if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+28h]
    }
    if ( v6 | v7 )
    {
      _RBX = DCONST_DVARFLT_xanim_lodOverride;
      if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3b800000
      }
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetClientNotifyFlag
==============
*/
__int64 XAnimGetClientNotifyFlag(const XAnimTree *tree)
{
  if ( tree )
    return tree->clientNotifyEnabled;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9470, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  return MEMORY[0x19];
}

/*
==============
XAnimGetConstStringSize
==============
*/
__int64 XAnimGetConstStringSize(scr_string_t str)
{
  unsigned int *size; 
  XAnimConstStrings *v2; 
  scr_string_t *strings; 

  size = s_xAnimConstStrings.size;
  v2 = (XAnimConstStrings *)&s_xAnimConstStrings.strings[s_xAnimConstStrings.numStrings];
  if ( s_xAnimConstStrings.strings == (scr_string_t *)v2 )
    return 0i64;
  strings = s_xAnimConstStrings.strings;
  while ( *strings != str )
  {
    ++size;
    if ( ++strings == (scr_string_t *)v2 )
      return 0i64;
  }
  return *size;
}

/*
==============
XAnimGetDebugVisualAnimWeights
==============
*/
void XAnimGetDebugVisualAnimWeights(const XAnimTree *tree, unsigned int infoIndex, XAnimTreeDebugNode *dbgNodes)
{
  unsigned __int16 v5; 
  float v7; 
  float v8; 
  int nodeIndexPtr; 

  nodeIndexPtr = 0;
  v5 = truncate_cast<unsigned short,unsigned int>(infoIndex);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+58h+var_28], xmm0
    vmovss  [rsp+58h+var_30], xmm0
  }
  XAnimGetDebugVisualAnimWeights_r(tree, tree->anims, v5, &nodeIndexPtr, dbgNodes, v7, v8, 0, 0);
}

/*
==============
XAnimGetDebugVisualAnimWeights_r
==============
*/
__int64 XAnimGetDebugVisualAnimWeights_r(const XAnimTree *tree, const XAnim_s *anims, unsigned __int16 infoIndex, int *nodeIndexPtr, XAnimTreeDebugNode *dbgNodes, float childWeight, float globalWeight, bool underAdditive, bool underOverlay)
{
  __int64 v13; 
  __int64 result; 
  XAnimTreeDebugNode *v17; 
  bool v24; 
  scr_string_t notifyName; 
  const char *v26; 
  const char *AnimDebugName; 
  int v29; 
  bool v30; 
  bool v31; 
  char v32; 
  bool v33; 
  unsigned __int16 children; 
  unsigned __int8 *v36; 
  __int64 v37; 
  unsigned __int16 next; 
  char v39; 
  __int64 v41; 
  const XAnim_s *SubTreeAnims; 
  bool v44; 
  int DebugVisualAnimWeights_r; 
  int v47; 
  __int64 v48; 
  char v49; 
  char v50; 
  char v51; 
  char v52; 
  __int64 v57; 
  double v58; 
  float v59; 
  __int64 v60; 
  float v61; 
  bool v62; 

  v13 = *nodeIndexPtr;
  if ( (_DWORD)v13 == 63 )
    return 0xFFFFFFFFi64;
  *nodeIndexPtr = v13 + 1;
  __asm
  {
    vmovaps [rsp+0D8h+var_68], xmm8
    vmovaps [rsp+0D8h+var_78], xmm9
  }
  if ( tree->info_usage && !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5060, ASSERT_TYPE_ASSERT, "( ( ( tree->info_usage == 0 ) || infoIndex ) )", "( infoIndex ) = %i", 0) )
    __debugbreak();
  v17 = dbgNodes;
  __asm { vmovss  xmm9, [rsp+0D8h+globalWeight] }
  _RSI = XAnimGetAnimInfo(infoIndex);
  _RBX = &dbgNodes[v13];
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm9, xmm8
  }
  if ( __CFADD__(dbgNodes, 96 * v13) )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  qword ptr [rsp+0D8h+var_B0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5064, ASSERT_TYPE_ASSERT, "( ( globalWeight >= 0.0f ) )", "( globalWeight ) = %g", v58) )
      __debugbreak();
  }
  *((_BYTE *)_RBX + 88) &= ~0x40u;
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+childWeight]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  dword ptr [rbx+8], xmm9
  }
  _RBX->nodeIndex = v13;
  v24 = !anims->entries[_RSI->animIndex].numAnims || ((__int64)anims->entries[_RSI->animIndex].parts & 3) != 0;
  _RBX->localWeight = _RSI->state.weight;
  _RBX->goalWeight = _RSI->state.goalWeight;
  notifyName = _RSI->notifyName;
  if ( notifyName )
    v26 = SL_ConvertToString(notifyName);
  else
    v26 = (char *)&queryFormat.fmt + 3;
  _RBX->notifyName = v26;
  *((_BYTE *)_RBX + 88) &= ~1u;
  *((_BYTE *)_RBX + 88) |= v24;
  if ( v24 )
  {
    _RBX->goalTime = _RSI->state.goalTime;
    _RBX->oldTime = _RSI->state.oldTime;
    _RBX->currentTime = _RSI->state.currentAnimTime;
    __asm { vmovss  xmm0, dword ptr [rsi+40h] }
  }
  else
  {
    *(_QWORD *)&_RBX->goalTime = 0i64;
    _RBX->currentTime = 0.0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  dword ptr [rbx+24h], xmm0 }
  AnimDebugName = XAnimGetAnimDebugName(anims, _RSI->animIndex);
  *(_QWORD *)&_RBX->numChildren = 0i64;
  v29 = -1;
  _RBX->animName = AnimDebugName;
  *(_QWORD *)&_RBX->firstChildIndex = -1i64;
  *(_QWORD *)&_RBX->nextSiblingIndex = -1i64;
  _RBX->nodeId = _RSI;
  if ( _RSI->animToModel )
  {
    *((_BYTE *)_RBX + 88) = (8 * underOverlay) | (4 * underAdditive) & 0xF7 | *((_BYTE *)_RBX + 88) & 0xE3 | 0x22;
  }
  else
  {
    __asm { vmovaps [rsp+0D8h+var_58], xmm7 }
    if ( XAnimIsCustomNode(anims, _RSI) )
    {
      *((_BYTE *)_RBX + 88) = *((_BYTE *)_RBX + 88) & 0xED | 0x10;
      v30 = underAdditive || IsInfoAdditive(_RSI);
      *((_BYTE *)_RBX + 88) &= ~4u;
      *((_BYTE *)_RBX + 88) |= 4 * v30;
      v62 = v30;
      v31 = underOverlay || IsInfoOverlay(_RSI);
      v32 = *((_BYTE *)_RBX + 88) & 0xF7 | (8 * (v31 | 4));
    }
    else
    {
      *((_BYTE *)_RBX + 88) &= 0xEDu;
      v33 = underAdditive || IsInfoAdditive(_RSI);
      *((_BYTE *)_RBX + 88) &= ~4u;
      *((_BYTE *)_RBX + 88) |= 4 * v33;
      v62 = v33;
      v31 = underOverlay || IsInfoOverlay(_RSI);
      v32 = (8 * v31) & 0xDF | *((_BYTE *)_RBX + 88) & 0xD7;
    }
    *((_BYTE *)_RBX + 88) = v32;
    children = _RSI->children;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v37 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v37 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v60) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v57) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v57, v60) )
              __debugbreak();
          }
          v36 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v37];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v60) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v57) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v57, v60) )
              __debugbreak();
          }
          v36 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( !*((_QWORD *)v36 + 3) && (*((_DWORD *)v36 + 8) & 0x210) != 0 )
          break;
        __asm { vaddss  xmm7, xmm7, dword ptr [rdi+3Ch] }
        children = XAnimGetAnimInfo(children)->next;
      }
      while ( children );
      _RBX = &dbgNodes[v13];
      v17 = dbgNodes;
      v29 = -1;
    }
    next = _RSI->children;
    v39 = 1;
    if ( next )
    {
      __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
      do
      {
        if ( (next & 0x8000u) != 0 )
        {
          v41 = 32 * (next & 0x7FFFu);
          if ( (unsigned int)v41 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v60) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v57) = 32 * (next & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v57, v60) )
              __debugbreak();
          }
          _RDI = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v41];
        }
        else
        {
          if ( (unsigned int)next >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v60) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v57) = next;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v57, v60) )
              __debugbreak();
          }
          _RDI = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[next];
        }
        __asm { vmovss  xmm6, dword ptr [rdi+3Ch] }
        SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)_RDI + 8));
        v44 = *((_QWORD *)_RDI + 3) == 0i64;
        if ( *((_QWORD *)_RDI + 3) || (v44 = (*((_DWORD *)_RDI + 8) & 0x210) == 0) )
        {
          __asm { vucomiss xmm7, xmm8 }
          if ( v44 )
            __asm { vmovaps xmm6, xmm8 }
          else
            __asm { vdivss  xmm6, xmm6, xmm7 }
        }
        __asm
        {
          vmulss  xmm0, xmm6, xmm9
          vmovss  [rsp+0D8h+var_A8], xmm0
          vmovss  [rsp+0D8h+var_B0], xmm6
        }
        DebugVisualAnimWeights_r = XAnimGetDebugVisualAnimWeights_r(tree, SubTreeAnims, next, nodeIndexPtr, v17, v59, v61, v62, v31);
        v47 = DebugVisualAnimWeights_r;
        if ( v39 )
        {
          _RBX->firstChildIndex = DebugVisualAnimWeights_r;
          v39 = 0;
        }
        else
        {
          if ( DebugVisualAnimWeights_r != -1 )
            v17[DebugVisualAnimWeights_r].prevSiblingIndex = v29;
          if ( v29 != -1 )
            v17[v29].nextSiblingIndex = DebugVisualAnimWeights_r;
        }
        if ( DebugVisualAnimWeights_r == -1 )
        {
          *((_BYTE *)_RBX + 88) |= 0x40u;
        }
        else
        {
          v48 = DebugVisualAnimWeights_r;
          v17[v48].parentIndex = v13;
          v49 = *((_BYTE *)_RBX + 88);
          if ( (v49 & 0x20) != 0 || (*((_BYTE *)&v17[v48] + 88) & 0x20) != 0 )
            v50 = 32;
          else
            v50 = 0;
          v51 = v50 | v49 & 0xDF;
          *((_BYTE *)_RBX + 88) = v51;
          if ( (v51 & 0x40) != 0 || (*((_BYTE *)&v17[v48] + 88) & 0x40) != 0 )
            v52 = 64;
          else
            v52 = 0;
          ++_RBX->numChildren;
          *((_BYTE *)_RBX + 88) = v52 | v51 & 0xBF;
          if ( (*((_BYTE *)&v17[v48] + 88) & 0x20) != 0 )
            ++_RBX->numChildrenWithLeafOrCustomNodeBelow;
        }
        v29 = v47;
        next = XAnimGetAnimInfo(next)->next;
      }
      while ( next );
      __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
    }
    __asm { vmovaps xmm7, [rsp+0D8h+var_58] }
  }
  __asm { vmovaps xmm8, [rsp+0D8h+var_68] }
  result = (unsigned int)v13;
  __asm { vmovaps xmm9, [rsp+0D8h+var_78] }
  return result;
}

/*
==============
XAnimGetGoalTime
==============
*/
float XAnimGetGoalTime(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5575, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    _RAX = XAnimGetAnimInfo(InfoIndex);
    __asm { vmovss  xmm0, dword ptr [rax+34h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetGoalWeight
==============
*/
float XAnimGetGoalWeight(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5602, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    _RAX = XAnimGetAnimInfo(InfoIndex);
    __asm { vmovss  xmm0, dword ptr [rax+38h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetGraftAnimIndex
==============
*/
__int64 XAnimGetGraftAnimIndex(unsigned __int16 infoIndex)
{
  unsigned __int16 v1; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 *v3; 

  v1 = infoIndex;
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9295, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( AnimInfo->subTreeID == XANIM_SUBTREE_DEFAULT || !v1 )
    return 0i64;
  while ( 1 )
  {
    v3 = (unsigned __int16 *)XAnimGetAnimInfo(v1);
    if ( v3[8] != AnimInfo->subTreeID )
      break;
    v1 = v3[7];
    if ( !v1 )
      return 0i64;
  }
  return v3[3];
}

/*
==============
XAnimGetInfoIndex
==============
*/
unsigned __int16 XAnimGetInfoIndex(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 children; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5456, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  children = tree->children;
  if ( graftAnimIndex )
    children = XAnimGetInfoIndex(tree, 0, XANIM_SUBTREE_DEFAULT, graftAnimIndex);
  if ( children )
    return XAnimGetInfoIndex_r(subTreeID, animIndex, children);
  else
    return 0;
}

/*
==============
XAnimGetInfoIndexStartFrom
==============
*/
unsigned __int16 XAnimGetInfoIndexStartFrom(const XAnimSubTreeID subTreeID, unsigned __int16 rootInfoID, unsigned int animIndex)
{
  if ( !rootInfoID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5476, ASSERT_TYPE_ASSERT, "(rootInfoID)", (const char *)&queryFormat, "rootInfoID") )
    __debugbreak();
  return XAnimGetInfoIndex_r(subTreeID, animIndex, rootInfoID);
}

/*
==============
XAnimGetInfoIndex_r
==============
*/
unsigned __int16 XAnimGetInfoIndex_r(const XAnimSubTreeID subTreeID, unsigned int animIndex, unsigned __int16 infoIndex)
{
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 result; 
  unsigned __int16 children; 
  int v9; 
  XAnimInfo *AnimInfo; 
  XAnimInfo *v11; 
  int v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int i; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5416, ASSERT_TYPE_ASSERT, "( info->inuse )", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( NonRootAnimInfo->subTreeID == subTreeID && NonRootAnimInfo->animIndex == animIndex )
    return infoIndex;
  children = NonRootAnimInfo->children;
  v9 = 0;
  v19 = 0i64;
  v20 = 0i64;
  for ( i = 0; children; children = XAnimGetAnimInfo(children)->next )
  {
    AnimInfo = XAnimGetAnimInfo(children);
    v11 = AnimInfo;
    v12 = AnimInfo->animIndex;
    if ( v12 != v9 )
    {
      v19 = 0i64;
      v20 = 0i64;
      i = 0;
    }
    v13 = (unsigned __int16)AnimInfo->subTreeID;
    if ( (unsigned int)v13 >= 0xA0 )
    {
      LODWORD(v16) = 160;
      LODWORD(v15) = (unsigned __int16)AnimInfo->subTreeID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v13 & 0x1F)) & *((_DWORD *)&v19 + (v13 >> 5))) == 0 || v12 != v9 )
    {
      result = XAnimGetInfoIndex_r(subTreeID, animIndex, children);
      if ( result )
        return result;
      v14 = (unsigned __int16)v11->subTreeID;
      v9 = v12;
      if ( (unsigned int)v14 >= 0xA0 )
      {
        LODWORD(v18) = 160;
        LODWORD(v17) = (unsigned __int16)v11->subTreeID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
          __debugbreak();
      }
      *((_DWORD *)&v19 + (v14 >> 5)) |= 0x80000000 >> (v14 & 0x1F);
    }
  }
  return 0;
}

/*
==============
XAnimGetLength
==============
*/
float XAnimGetLength(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const XAnimEntry *v5; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5377, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v3 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5378, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v3, anims->size) )
    __debugbreak();
  v5 = &anims->entries[v3];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5381, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  if ( !XAnimGetPartsInternal(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5351, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm0, dword ptr [rbx+64h]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetLengthFromParts
==============
*/
float XAnimGetLengthFromParts(const XAnimParts *animParts)
{
  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5351, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm0, dword ptr [rbx+64h]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetLengthFromPartsMsec
==============
*/
int XAnimGetLengthFromPartsMsec(const XAnimParts *animParts)
{
  int result; 

  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5351, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm1, xmm0, dword ptr [rbx+64h]
    vmulss  xmm2, xmm1, cs:__real@447a0000
    vcvttss2si eax, xmm2
  }
  return result;
}

/*
==============
XAnimGetLengthMsec
==============
*/
int XAnimGetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  int result; 

  *(double *)&_XMM0 = XAnimGetLength(anims, anim);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
XAnimGetLodForDistance
==============
*/

unsigned __int8 __fastcall XAnimGetLodForDistance(const DObj *obj, double distance)
{
  XAnimTree *tree; 
  unsigned __int8 result; 
  unsigned __int8 v17; 
  unsigned __int8 numLods; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  unsigned int v23; 
  unsigned int v25; 
  bool v28; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps [rsp+98h+var_48], xmm9
    vmovaps xmm8, xmm1
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9517, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm8, xmm9
  }
  tree = obj->tree;
  if ( tree )
  {
    _RSI = tree->anims;
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovaps [rsp+98h+var_28], xmm7
    }
    if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9528, ASSERT_TYPE_ASSERT, "(anims != nullptr)", (const char *)&queryFormat, "anims != nullptr") )
      __debugbreak();
    _RDI = DCONST_DVARFLT_xanim_lodHysteresisMaxPercent;
    if ( !DCONST_DVARFLT_xanim_lodHysteresisMaxPercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodHysteresisMaxPercent") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_xanim_lodHysteresisDistance;
    __asm { vmulss  xmm7, xmm0, cs:__real@3c23d70a }
    if ( !DCONST_DVARFLT_xanim_lodHysteresisDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodHysteresisDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    v17 = truncate_cast<unsigned char,int>(SHIBYTE(tree->lodState.lod));
    numLods = _RSI->numLods;
    v19 = 0;
    v20 = v17;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( numLods )
    {
      __asm { vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000 }
      v23 = v17;
      while ( 1 )
      {
        _RCX = v19;
        v25 = v19 + 1;
        __asm
        {
          vmovaps xmm0, xmm9
          vmovss  xmm3, dword ptr [rsi+rcx*4+40h]
        }
        v28 = v23 < v25;
        if ( v23 == v25 )
        {
          __asm
          {
            vsubss  xmm0, xmm3, xmm1
            vmulss  xmm1, xmm0, xmm7
            vminss  xmm2, xmm1, xmm6
            vxorps  xmm0, xmm2, xmm4
          }
        }
        else
        {
          v28 = v20 < v19;
          if ( v20 == v19 )
          {
            __asm
            {
              vsubss  xmm0, xmm3, xmm1
              vmulss  xmm1, xmm0, xmm7
              vminss  xmm0, xmm1, xmm6
            }
          }
        }
        __asm
        {
          vaddss  xmm0, xmm0, xmm3
          vcomiss xmm8, xmm0
        }
        if ( v28 )
          break;
        ++v19;
        __asm { vmovaps xmm1, xmm3 }
        if ( v19 >= numLods )
          goto LABEL_25;
      }
      numLods = v19;
    }
LABEL_25:
    __asm { vmovaps xmm7, [rsp+98h+var_28] }
    result = numLods;
    __asm { vmovaps xmm6, [rsp+98h+var_18] }
  }
  else
  {
    result = 0;
  }
  __asm
  {
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
  return result;
}

/*
==============
XAnimGetNextNotifyIndex
==============
*/

__int64 __fastcall XAnimGetNextNotifyIndex(const XAnimParts *parts, double time)
{
  unsigned int v14; 
  bool v15; 
  bool v17; 
  unsigned int notifyCount; 
  double v25; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmm7, xmm1
  }
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2220, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
    vcomiss xmm7, cs:__real@3f800000
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+88h+var_60], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2223, ASSERT_TYPE_ASSERT, "( ( time < 1.f ) )", "( time ) = %g", v25) )
    __debugbreak();
  _RBX = parts->notify;
  _RDI = NULL;
  __asm { vmovss  xmm8, cs:__real@40000000 }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2229, ASSERT_TYPE_ASSERT, "(notifyInfo)", (const char *)&queryFormat, "notifyInfo") )
    __debugbreak();
  v14 = 0;
  v15 = 0;
  if ( !parts->notifyCount )
    goto LABEL_28;
  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  do
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vcomiss xmm6, xmm9
    }
    if ( v15 )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2233, ASSERT_TYPE_ASSERT, "(testTime >= 0)", (const char *)&queryFormat, "testTime >= 0");
      v15 = 0;
      if ( v17 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, xmm7 }
    if ( !v15 )
    {
      __asm { vcomiss xmm6, xmm8 }
      if ( v15 )
      {
        __asm { vmovaps xmm8, xmm6 }
        _RDI = _RBX;
      }
    }
    notifyCount = parts->notifyCount;
    ++v14;
    ++_RBX;
    v15 = v14 < notifyCount;
  }
  while ( (int)v14 < (int)notifyCount );
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  if ( !_RDI )
  {
LABEL_28:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2243, ASSERT_TYPE_ASSERT, "(bestNotifyInfo)", (const char *)&queryFormat, "bestNotifyInfo") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm9, [rsp+88h+var_58]
    vmovaps xmm8, [rsp+88h+var_48]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  if ( _RDI != parts->notify )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi-4]
      vcomiss xmm0, dword ptr [rdi+4]
    }
    if ( _RDI >= parts->notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2244, ASSERT_TYPE_ASSERT, "(bestNotifyInfo == parts->notify || bestNotifyInfo->time > (bestNotifyInfo - 1)->time)", (const char *)&queryFormat, "bestNotifyInfo == parts->notify || bestNotifyInfo->time > (bestNotifyInfo - 1)->time") )
      __debugbreak();
  }
  return (__int64)(unsigned int)((_DWORD)_RDI - LODWORD(parts->notify)) >> 3;
}

/*
==============
XAnimGetNextServerNotifyFrac
==============
*/
float XAnimGetNextServerNotifyFrac(const DObj *obj, XAnimInfo *info, const XAnimState *syncState, const XAnimState *nextSyncState, float dtime)
{
  XAnimInfo *v10; 
  XAnimTree *tree; 
  const XAnimParts *PartsFromInfo; 
  __int16 notifyIndex; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm7, dword ptr [rdx+38h]
  }
  v10 = info;
  __asm
  {
    vmovss  xmm6, [rsp+58h+dtime]
    vucomiss xmm6, xmm7
  }
  if ( obj->entnum && info->notifyName )
  {
    if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2432, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
      __debugbreak();
    tree = obj->tree;
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2436, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    PartsFromInfo = XAnimGetPartsFromInfo(tree, v10);
    if ( PartsFromInfo && ((notifyIndex = v10->notifyIndex, notifyIndex >= 0) || (XAnimUpdateServerNotifyIndex(v10, PartsFromInfo), notifyIndex = v10->notifyIndex, notifyIndex >= 0)) )
    {
      _RCX = notifyIndex;
      _RAX = PartsFromInfo->notify;
      __asm
      {
        vmovaps xmm3, xmm6; dtime
        vmovss  xmm2, dword ptr [rax+rcx*8+4]; noteTime
      }
      *(float *)&_XMM0 = XAnimGetNotifyFracLeaf(syncState, nextSyncState, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    else
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; noteTime
        vmovaps xmm3, xmm6; dtime
      }
      *(float *)&_XMM0 = XAnimGetNotifyFracLeaf(syncState, nextSyncState, *(float *)&_XMM2, *(float *)&_XMM3);
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetNotetrackTime
==============
*/
double XAnimGetNotetrackTime(const XAnim_s *anims, unsigned int animIndex, scr_string_t name)
{
  const XAnimParts *Parts; 

  Parts = XAnimGetParts(anims, animIndex);
  return XAnimGetNotetrackTimeFromParts(Parts, name);
}

/*
==============
XAnimGetNotetrackTimeFromCharString
==============
*/
float XAnimGetNotetrackTimeFromCharString(const XAnim_s *anims, unsigned int animIndex, const char *notetrackName)
{
  const XAnimParts *Parts; 
  int v7; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 

  Parts = XAnimGetParts(anims, animIndex);
  if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8657, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  _R14 = (scr_string_t *)Parts->notify;
  if ( _R14 )
  {
    v7 = 0;
    if ( Parts->notifyCount )
    {
      do
      {
        v8 = 0x7FFFFFFFi64;
        v9 = notetrackName;
        v10 = SL_ConvertToString(*_R14);
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !notetrackName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v11 = v10 - notetrackName;
        while ( 1 )
        {
          v12 = (unsigned __int8)v9[v11];
          v13 = v8;
          v14 = *(unsigned __int8 *)v9++;
          --v8;
          if ( !v13 )
          {
LABEL_22:
            __asm { vmovss  xmm0, dword ptr [r14+4] }
            return *(float *)&_XMM0;
          }
          if ( v12 != v14 )
          {
            v15 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v15 = v12;
            v12 = v15;
            v16 = v14 + 32;
            if ( (unsigned int)(v14 - 65) > 0x19 )
              v16 = v14;
            if ( v12 != v16 )
              break;
          }
          if ( !v12 )
            goto LABEL_22;
        }
        ++v7;
        _R14 += 2;
      }
      while ( v7 < Parts->notifyCount );
    }
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetNotetrackTimeFromParts
==============
*/
float XAnimGetNotetrackTimeFromParts(const XAnimParts *animParts, scr_string_t name)
{
  int v5; 

  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8633, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  _RAX = animParts->notify;
  if ( _RAX && (v5 = 0, animParts->notifyCount) )
  {
    while ( _RAX->name != name )
    {
      ++v5;
      ++_RAX;
      if ( v5 >= animParts->notifyCount )
        goto LABEL_8;
    }
    __asm { vmovss  xmm0, dword ptr [rax+4] }
  }
  else
  {
LABEL_8:
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetNotetrackTimeFromPartsCharString
==============
*/
float XAnimGetNotetrackTimeFromPartsCharString(const XAnimParts *animParts, const char *notetrackName)
{
  int v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8657, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  _R14 = animParts->notify;
  if ( _R14 )
  {
    v5 = 0;
    if ( animParts->notifyCount )
    {
      do
      {
        v6 = 0x7FFFFFFFi64;
        v7 = notetrackName;
        v8 = SL_ConvertToString(_R14->name);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !notetrackName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v9 = v8 - notetrackName;
        while ( 1 )
        {
          v10 = (unsigned __int8)v7[v9];
          v11 = v6;
          v12 = *(unsigned __int8 *)v7++;
          --v6;
          if ( !v11 )
          {
LABEL_21:
            __asm { vmovss  xmm0, dword ptr [r14+4] }
            return *(float *)&_XMM0;
          }
          if ( v10 != v12 )
          {
            v13 = v10 + 32;
            if ( (unsigned int)(v10 - 65) > 0x19 )
              v13 = v10;
            v10 = v13;
            v14 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v14 = v12;
            if ( v10 != v14 )
              break;
          }
          if ( !v10 )
            goto LABEL_21;
        }
        ++v5;
        ++_R14;
      }
      while ( v5 < animParts->notifyCount );
    }
  }
  __asm { vmovss  xmm0, cs:__real@bf800000 }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetNotifyFracLeaf
==============
*/

float __fastcall XAnimGetNotifyFracLeaf(const XAnimState *state, const XAnimState *nextState, double noteTime, double dtime)
{
  unsigned __int16 oldCycleCount; 
  bool v13; 
  __int16 v14; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RBX = nextState;
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  _RDI = state;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm8
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm3, xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  oldCycleCount = nextState->oldCycleCount;
  v13 = oldCycleCount < state->oldCycleCount;
  v14 = oldCycleCount - state->oldCycleCount;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm2, cs:__real@3f800000
    vucomiss xmm1, xmm2
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx]
  }
  if ( !v14 )
    goto LABEL_18;
  __asm { vcomiss xmm0, xmm1 }
  if ( !v13 )
  {
    __asm { vcomiss xmm0, xmm6 }
    if ( v13 || v14 == 0 )
    {
      __asm { vucomiss xmm0, xmm2 }
    }
    else
    {
      __asm { vcomiss xmm1, xmm6 }
      if ( v13 || v14 == 0 )
      {
        __asm
        {
          vsubss  xmm1, xmm6, xmm3
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm1, xmm1, xmm0
          vdivss  xmm6, xmm1, xmm7
          vcomiss xmm6, xmm8
        }
        if ( v13 )
        {
          __asm
          {
            vxorpd  xmm0, xmm0, xmm0
            vmovsd  [rsp+88h+var_48], xmm0
            vcvtss2sd xmm1, xmm6, xmm6
            vmovsd  [rsp+88h+var_50], xmm1
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2302, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v46, v49) )
          {
            __debugbreak();
            __asm { vmovaps xmm0, xmm6 }
            goto LABEL_19;
          }
        }
        goto LABEL_7;
      }
    }
    goto LABEL_18;
  }
  __asm { vcomiss xmm0, xmm6 }
  if ( !v13 && v14 != 0 )
  {
    __asm
    {
      vsubss  xmm1, xmm2, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm1, xmm0
      vaddss  xmm2, xmm1, xmm6
      vdivss  xmm6, xmm2, xmm7
      vcomiss xmm6, xmm8
    }
    if ( v13 )
    {
      __asm
      {
        vxorpd  xmm0, xmm0, xmm0
        vmovsd  [rsp+88h+var_48], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+88h+var_50], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2279, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v44, v47) )
        __debugbreak();
    }
    goto LABEL_7;
  }
  __asm { vcomiss xmm1, xmm6 }
  if ( !v13 && v14 != 0 )
  {
LABEL_18:
    __asm { vmovaps xmm0, xmm2 }
    goto LABEL_19;
  }
  __asm
  {
    vsubss  xmm1, xmm6, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm1, xmm0
    vdivss  xmm6, xmm1, xmm7
    vcomiss xmm6, xmm8
  }
  if ( v13 )
  {
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_48], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+88h+var_50], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2289, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v45, v48) )
    {
      __debugbreak();
      __asm { vmovaps xmm0, xmm6 }
      goto LABEL_19;
    }
  }
LABEL_7:
  __asm { vmovaps xmm0, xmm6 }
LABEL_19:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetNumChildInfos
==============
*/
unsigned __int16 XAnimGetNumChildInfos(const XAnimTree *tree, const XAnimInfo *info)
{
  unsigned __int16 v3; 
  unsigned __int16 children; 
  unsigned __int16 *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  __int64 v7; 
  bool v8; 
  bool v9; 
  unsigned __int16 result; 
  __int64 v11; 
  __int64 v12; 

  v3 = 0;
  children = info->children;
  if ( !children )
    return 0;
  do
  {
    AnimInfo = (unsigned __int16 *)XAnimGetAnimInfo(children);
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6999, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7000, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo[8]);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7003, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( AnimInfo[3] >= SubTreeAnims->size )
    {
      LODWORD(v12) = SubTreeAnims->size;
      LODWORD(v11) = AnimInfo[3];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7004, ASSERT_TYPE_ASSERT, "(unsigned)( info->animIndex ) < (unsigned)( anims->size )", "info->animIndex doesn't index anims->size\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v7 = AnimInfo[3];
    v8 = !SubTreeAnims->entries[v7].numAnims || (SubTreeAnims->entries[v7].animParent.flags & 0x20000) == 0;
    v9 = !v8;
    result = v3 + 1;
    children = AnimInfo[5];
    if ( v9 )
      result = v3;
    v3 = result;
  }
  while ( children );
  return result;
}

/*
==============
XAnimGetNumChildren
==============
*/
__int64 XAnimGetNumChildren(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5691, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5692, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v2, anims->size) )
    __debugbreak();
  return anims->entries[v2].numAnims;
}

/*
==============
XAnimGetOldTime
==============
*/
float XAnimGetOldTime(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5519, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    _RAX = XAnimGetAnimInfo(InfoIndex);
    __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetParts
==============
*/
XAnimParts *XAnimGetParts(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8679, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8680, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, anims->size) )
      __debugbreak();
  }
  return XAnimGetPartsInternal(&anims->entries[v2]);
}

/*
==============
XAnimGetPartsFromInfo
==============
*/
XAnimParts *XAnimGetPartsFromInfo(const XAnimTree *tree, const XAnimInfo *info)
{
  XAnimParts *parts; 
  const XAnim_s *SubTreeAnims; 

  if ( info->animToModel )
  {
    parts = info->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2396, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    return parts;
  }
  else if ( info->notifyChild )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2406, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    return XAnimGetPartsInternal(&SubTreeAnims->entries[info->notifyChild]);
  }
  else
  {
    return 0i64;
  }
}

/*
==============
XAnimGetPartsInternal
==============
*/
XAnimParts *XAnimGetPartsInternal(const XAnimEntry *anim)
{
  XAnimParts *parts; 

  if ( anim->numAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
    __debugbreak();
  parts = anim->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  return parts;
}

/*
==============
XAnimGetRate
==============
*/
float XAnimGetRate(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5630, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    _RAX = XAnimGetAnimInfo(InfoIndex);
    __asm { vmovss  xmm0, dword ptr [rax+40h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetRelDelta3D
==============
*/
void XAnimGetRelDelta3D(const XAnim_s *anims, unsigned int animIndex, vec4_t *rot, vec3_t *trans, float time1, float time2)
{
  __int64 v12; 
  XAnimEntry *v14; 
  const XAnimParts *PartsInternal; 
  char v32; 
  XAnimRotPos rotPos; 

  _R14 = trans;
  v12 = animIndex;
  _RSI = rot;
  Profile_Begin(412);
  v14 = &anims->entries[v12];
  if ( v14->numAnims )
  {
    _RSI->v[3] = 1.0;
    *(_QWORD *)_RSI->v = 0i64;
    _RSI->v[2] = 0.0;
    *(_QWORD *)_R14->v = 0i64;
    _R14->v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
    }
    PartsInternal = XAnimGetPartsInternal(v14);
    __asm
    {
      vmovss  xmm3, [rsp+0A8h+time2]; time2
      vmovss  xmm2, [rsp+0A8h+time1]; time1
      vmovss  xmm1, cs:__real@3f800000; weightScale
      vxorps  xmm0, xmm0, xmm0
      vmovups ymmword ptr [rsp+0A8h+var_78.rot], ymm0
    }
    XAnimCalcRelDeltaParts3D(PartsInternal, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &rotPos, 0);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0A8h+var_78.rot]
      vmovss  xmm5, dword ptr [rsp+0A8h+var_78.rot+4]
      vmovss  xmm6, dword ptr [rsp+0A8h+var_78.rot+8]
      vmovss  xmm7, dword ptr [rsp+0A8h+var_78.rot+0Ch]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm2, xmm1
    }
    if ( v32 )
    {
      *(_QWORD *)_RSI->v = 0i64;
      _RSI->v[2] = 0.0;
      _RSI->v[3] = 1.0;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsi], xmm4
        vmovss  dword ptr [rsi+4], xmm5
        vmovss  dword ptr [rsi+8], xmm6
        vmovss  dword ptr [rsi+0Ch], xmm7
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.pos]
      vmovss  xmm1, dword ptr [rsp+0A8h+var_78.pos+4]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.pos+8]
      vmovss  dword ptr [r14+8], xmm0
      vmovss  dword ptr [r14+4], xmm1
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimGetRelDelta
==============
*/
void XAnimGetRelDelta(const XAnim_s *anims, unsigned int animIndex, vec2_t *rot, vec3_t *trans, float time1, float time2)
{
  __int64 v12; 
  XAnimEntry *v14; 
  const XAnimParts *PartsInternal; 
  bool v21; 
  bool v24; 
  bool v26; 
  XAnimRotPos rotPos; 

  _RSI = trans;
  v12 = animIndex;
  _R14 = rot;
  Profile_Begin(412);
  v14 = &anims->entries[v12];
  if ( v14->numAnims )
  {
    _R14->v[1] = 1.0;
    _R14->v[0] = 0.0;
    *(_QWORD *)_RSI->v = 0i64;
    _RSI->v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
    }
    PartsInternal = XAnimGetPartsInternal(v14);
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vmovss  xmm3, [rsp+0A8h+time2]; time2
      vmovss  xmm2, [rsp+0A8h+time1]; time1
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm1, xmm7; weightScale
      vmovups ymmword ptr [rsp+0A8h+var_78.rot], ymm0
    }
    XAnimCalcRelDeltaParts(PartsInternal, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &rotPos, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.rot]
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm0, xmm6
    }
    if ( !v21 )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6525, ASSERT_TYPE_ASSERT, "(!rotPos.rot[0])", (const char *)&queryFormat, "!rotPos.rot[0]");
      v21 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.rot+4]
      vucomiss xmm0, xmm6
    }
    if ( !v21 )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6526, ASSERT_TYPE_ASSERT, "(!rotPos.rot[1])", (const char *)&queryFormat, "!rotPos.rot[1]");
      v21 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0A8h+var_78.rot+8]
      vucomiss xmm1, xmm6
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.rot+0Ch]
    }
    if ( !v21 )
      goto LABEL_10;
    __asm { vucomiss xmm0, xmm6 }
    if ( !v21 )
    {
LABEL_10:
      __asm
      {
        vmovaps xmm7, xmm0
        vmovaps xmm6, xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [r14], xmm6
      vmovss  dword ptr [r14+4], xmm7
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.pos]
      vmovss  xmm1, dword ptr [rsp+0A8h+var_78.pos+4]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm0, dword ptr [rsp+0A8h+var_78.pos+8]
      vmovss  dword ptr [rsi+8], xmm0
      vmovss  dword ptr [rsi+4], xmm1
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimGetScrubbedBackwardNotifyFracLeaf
==============
*/

float __fastcall XAnimGetScrubbedBackwardNotifyFracLeaf(const XAnimState *state, double noteTime, double dtime, bool hasWrapped)
{
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = state;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm2, xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm1
  }
  if ( (state->flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2324, ASSERT_TYPE_ASSERT, "(state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS)", (const char *)&queryFormat, "state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm10, dword ptr [rbx]
    vcomiss xmm10, xmm6
  }
  if ( hasWrapped )
  {
    if ( (_RBX->flags & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2348, ASSERT_TYPE_ASSERT, "(state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS_WRAPPED)", (const char *)&queryFormat, "state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS_WRAPPED") )
      __debugbreak();
    __asm
    {
      vcomiss xmm6, xmm7
      vmovss  xmm0, cs:__real@bf800000
      vdivss  xmm1, xmm0, xmm8
      vsubss  xmm2, xmm7, xmm6
      vmulss  xmm6, xmm2, xmm1
      vcomiss xmm6, xmm9
      vmovaps xmm0, xmm6
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetServerNotifyFracSyncTotal
==============
*/
float XAnimGetServerNotifyFracSyncTotal(const DObj *obj, XAnimInfo *info, const XAnimState *syncState, const XAnimState *nextSyncState, float dtime)
{
  unsigned __int16 children; 
  XAnimInfo *v18; 
  char v19; 
  float fmt; 
  float fmta; 

  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovss  xmm8, [rsp+0A8h+dtime]
    vmovss  dword ptr [rsp+0A8h+fmt], xmm8
  }
  *(float *)&_XMM0 = XAnimGetNextServerNotifyFrac(obj, info, syncState, nextSyncState, fmt);
  children = info->children;
  __asm { vmovaps xmm7, xmm0 }
  if ( children )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      _RAX = XAnimGetAnimInfo(children);
      v18 = _RAX;
      __asm { vucomiss xmm6, dword ptr [rax+3Ch] }
      if ( !v19 )
      {
        __asm
        {
          vucomiss xmm6, dword ptr [rax+38h]
          vmovss  dword ptr [rsp+0A8h+fmt], xmm8
        }
        *(float *)&_XMM0 = XAnimGetServerNotifyFracSyncTotal(obj, _RAX, syncState, nextSyncState, fmta);
        __asm { vminss  xmm7, xmm0, xmm7 }
      }
      children = v18->next;
    }
    while ( children );
    __asm
    {
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovaps xmm0, xmm7
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm8, [rsp+0A8h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetSimpleBlendTreeFromAnimName
==============
*/
const char *XAnimGetSimpleBlendTreeFromAnimName(const XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1199, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1200, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1201, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1202, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 2)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 2") )
    __debugbreak();
  if ( !tree->anims[1].debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1203, ASSERT_TYPE_ASSERT, "(tree->anims->entries[1].parts)", (const char *)&queryFormat, "tree->anims->entries[1].parts") )
    __debugbreak();
  return *(const char **)tree->anims[1].debugName;
}

/*
==============
XAnimGetSimpleBlendTreeToAnimName
==============
*/
const char *XAnimGetSimpleBlendTreeToAnimName(const XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1211, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1212, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1213, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1214, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 2)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 2") )
    __debugbreak();
  if ( !*(_QWORD *)&tree->anims[1].numGameParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1215, ASSERT_TYPE_ASSERT, "(tree->anims->entries[2].parts)", (const char *)&queryFormat, "tree->anims->entries[2].parts") )
    __debugbreak();
  return **(const char ***)&tree->anims[1].numGameParameters;
}

/*
==============
XAnimGetSimpleTreeAnimName
==============
*/
const char *XAnimGetSimpleTreeAnimName(const XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1061, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1062, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1063, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1064, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 1)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 1") )
    __debugbreak();
  if ( !tree->anims[1].debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1065, ASSERT_TYPE_ASSERT, "(tree->anims->entries[1].parts)", (const char *)&queryFormat, "tree->anims->entries[1].parts") )
    __debugbreak();
  return *(const char **)tree->anims[1].debugName;
}

/*
==============
XAnimGetSubTreeAnims
==============
*/
XAnim_s *XAnimGetSubTreeAnims(const XAnimTree *tree, const XAnimSubTreeID subTreeID)
{
  unsigned __int8 v4; 
  XAnimSubTreeRegistry *v5; 
  const XAnim_s *v6; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9371, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (unsigned __int16)subTreeID >= XANIM_MAX_SUBTREES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9372, ASSERT_TYPE_ASSERT, "(subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES)", (const char *)&queryFormat, "subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES") )
    __debugbreak();
  if ( subTreeID == XANIM_SUBTREE_DEFAULT )
    return tree->anims;
  v4 = tree->owner[0];
  if ( (unsigned __int16)subTreeID >= XANIM_MAX_SUBTREES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9333, ASSERT_TYPE_ASSERT, "(subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES)", (const char *)&queryFormat, "subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES") )
    __debugbreak();
  v5 = &s_xAnimSubTreeRegistry[v4];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9336, ASSERT_TYPE_ASSERT, "(registry)", (const char *)&queryFormat, "registry") )
    __debugbreak();
  v6 = v5->subTrees[(unsigned __int16)subTreeID];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9377, ASSERT_TYPE_ASSERT, "(anims)", "%s\n\tXAnimGetSubTreeAnims: sub tree with subTreeID (%u) not registered - owner (%i)", "anims", (unsigned __int16)subTreeID, (unsigned __int8)tree->owner[0]) )
    __debugbreak();
  return (XAnim_s *)v6;
}

/*
==============
XAnimGetSubTreeID
==============
*/
__int64 XAnimGetSubTreeID(const XAnim_s *anims)
{
  if ( anims )
    return (unsigned __int16)anims->subTreeID;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9387, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  return MEMORY[0x3C];
}

/*
==============
XAnimGetSyncGroupData_r
==============
*/
void XAnimGetSyncGroupData_r(const XAnimTree *tree, unsigned __int16 infoIndex, XAnimSyncGroupCalcData *syncGroupCalcData, float *frequencies, float accumWeight, float parentAccumTime, bool bNotify)
{
  bool v21; 
  XAnimParts *parts; 
  XAnimInfo *AnimInfo; 
  bool v25; 
  unsigned __int16 children; 
  bool v36; 
  char v39; 
  bool v41; 
  char v46; 
  bool v67; 
  __int64 v69; 
  bool v73; 
  bool v74; 
  float fmt; 
  double v80; 
  float v81; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  float frequenciesa[2]; 
  __int64 v90; 

  _R12 = frequencies;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1970, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1971, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1972, ASSERT_TYPE_ASSERT, "(frequencies)", (const char *)&queryFormat, "frequencies") )
    __debugbreak();
  _R14 = XAnimGetAnimInfo(infoIndex);
  if ( !_R14->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1976, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  v21 = _R14->animToModel == NULL;
  if ( _R14->animToModel )
  {
    parts = _R14->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1983, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    AnimInfo = XAnimGetAnimInfo(_R14->parent);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1986, ASSERT_TYPE_ASSERT, "(parentInfo)", (const char *)&queryFormat, "parentInfo") )
      __debugbreak();
    if ( AnimInfo->animParent.syncGroup[0] >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1987, ASSERT_TYPE_ASSERT, "(parentInfo->animParent.syncGroup < XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "parentInfo->animParent.syncGroup < XAnimSyncGroupID::COUNT") )
      __debugbreak();
    _R12[(unsigned __int8)AnimInfo->animParent.syncGroup[0]] = parts->frequency;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+180h+var_60], xmm7
      vxorps  xmm7, xmm7, xmm7
      vucomiss xmm7, dword ptr [r14+38h]
      vmovaps [rsp+180h+var_70], xmm8
    }
    v25 = !v21 && bNotify;
    children = _R14->children;
    __asm { vmovss  xmm8, [rbp+80h+accumWeight] }
    _RDI = 0i64;
    __asm { vmovaps [rsp+180h+var_50], xmm6 }
    v87 = 0i64;
    v88 = 0i64;
    v85 = 0i64;
    v86 = 0i64;
    if ( children )
    {
      __asm
      {
        vmovaps [rsp+180h+var_80], xmm9
        vmovss  xmm9, dword ptr [rbp+80h+var_100+4]
        vmovaps [rsp+180h+var_90], xmm10
        vmovss  xmm10, dword ptr [rbp+80h+var_100]
        vmovaps [rsp+180h+var_A0], xmm11
        vmovss  xmm11, dword ptr [rsp+180h+var_108+4]
        vmovaps [rsp+180h+var_B0], xmm12
        vmovss  xmm12, dword ptr [rsp+180h+var_108]
        vmovaps [rsp+180h+var_C0], xmm13
        vmovss  xmm13, dword ptr [rsp+180h+var_110+4]
        vmovaps [rsp+180h+var_D0], xmm14
        vmovss  xmm14, dword ptr [rsp+180h+var_110]
        vmovaps [rsp+180h+var_E0], xmm15
        vmovss  xmm15, dword ptr [rsp+180h+var_118+4]
      }
      do
      {
        _RBX = XAnimGetAnimInfo(children);
        __asm
        {
          vmovss  xmm6, dword ptr [rax+3Ch]
          vcomiss xmm6, xmm7
        }
        if ( v39 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  qword ptr [rsp+180h+var_158], xmm0
          }
          v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2007, ASSERT_TYPE_ASSERT, "( ( childWeight >= 0.0f ) )", "( childWeight ) = %g", v80);
          v36 = !v41;
          if ( v41 )
            __debugbreak();
        }
        __asm { vucomiss xmm6, xmm7 }
        if ( !v36 && (((__int64)_RBX->parts & 4) == 0 || _RBX->animParent.syncGroup[0] != 4) && !(_RBX->animToModel ? _R14->animParent.syncGroup[0] == 4 : !XAnimInfoHasSyncGroups(_RBX)) )
        {
          __asm { vmovss  xmm0, [rbp+80h+parentAccumTime] }
          *(_QWORD *)frequenciesa = 0i64;
          v90 = 0i64;
          __asm
          {
            vmulss  xmm0, xmm0, dword ptr [r14+40h]
            vmulss  xmm1, xmm6, xmm8
            vmovss  [rsp+180h+var_158], xmm0
            vmovss  dword ptr [rsp+180h+fmt], xmm1
          }
          XAnimGetSyncGroupData_r(tree, children, syncGroupCalcData, frequenciesa, fmt, v81, v25);
          __asm
          {
            vmovss  xmm0, [rbp+80h+frequencies]
            vucomiss xmm0, xmm7
          }
          if ( !v46 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm6
              vmulss  xmm1, xmm0, dword ptr [rbx+40h]
              vaddss  xmm0, xmm6, dword ptr [rsp+180h+var_118]
              vmovss  dword ptr [rsp+180h+var_118], xmm0
              vaddss  xmm12, xmm12, xmm1
            }
          }
          __asm
          {
            vmovss  xmm0, [rbp+80h+frequencies+4]
            vucomiss xmm0, xmm7
          }
          if ( !v46 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm6
              vmulss  xmm1, xmm0, dword ptr [rbx+40h]
              vaddss  xmm11, xmm11, xmm1
              vaddss  xmm15, xmm15, xmm6
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+80h+var_F0]
            vucomiss xmm0, xmm7
          }
          if ( !v46 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm6
              vmulss  xmm1, xmm0, dword ptr [rbx+40h]
              vaddss  xmm10, xmm10, xmm1
              vaddss  xmm14, xmm14, xmm6
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+80h+var_F0+4]
            vucomiss xmm0, xmm7
          }
          if ( !v46 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm6
              vmulss  xmm1, xmm0, dword ptr [rbx+40h]
              vaddss  xmm9, xmm9, xmm1
              vaddss  xmm13, xmm13, xmm6
            }
          }
        }
        children = _RBX->next;
      }
      while ( children );
      _R12 = frequencies;
      __asm
      {
        vmovss  dword ptr [rbp+80h+var_100+4], xmm9
        vmovaps xmm9, [rsp+180h+var_80]
        vmovss  dword ptr [rbp+80h+var_100], xmm10
        vmovaps xmm10, [rsp+180h+var_90]
        vmovss  dword ptr [rsp+180h+var_108+4], xmm11
        vmovaps xmm11, [rsp+180h+var_A0]
        vmovss  dword ptr [rsp+180h+var_108], xmm12
        vmovaps xmm12, [rsp+180h+var_B0]
        vmovss  dword ptr [rsp+180h+var_110+4], xmm13
        vmovaps xmm13, [rsp+180h+var_C0]
        vmovss  dword ptr [rsp+180h+var_110], xmm14
        vmovaps xmm14, [rsp+180h+var_D0]
        vmovss  dword ptr [rsp+180h+var_118+4], xmm15
        vmovaps xmm15, [rsp+180h+var_E0]
      }
    }
    v67 = (XAnimSyncGroupCalcData *)&syncGroupCalcData->syncGroupInfo[0].leadWeight == NULL;
    _RBX = &syncGroupCalcData->syncGroupInfo[0].leadWeight;
    v69 = 4i64;
    do
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+rdi+180h+var_118]
        vucomiss xmm1, xmm7
      }
      if ( !v67 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+rdi+180h+var_108]
          vdivss  xmm6, xmm0, xmm1
        }
        if ( ((__int64)_R14->parts & 4) != 0 )
        {
          v73 = _R14->animParent.syncGroup[0] <= 4u;
          if ( _R14->animParent.syncGroup[0] == 4 )
          {
            v74 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2061, ASSERT_TYPE_ASSERT, "(info->animParent.syncGroup != XAnimSyncGroupID::NONE)", (const char *)&queryFormat, "info->animParent.syncGroup != XAnimSyncGroupID::NONE");
            v73 = !v74;
            if ( v74 )
              __debugbreak();
          }
          __asm { vcomiss xmm8, dword ptr [rbx] }
          if ( !v73 )
          {
            __asm
            {
              vmovss  xmm0, [rbp+80h+parentAccumTime]
              vmovss  dword ptr [rbx+4], xmm0
              vmovss  dword ptr [rbx], xmm8
            }
            *((_WORD *)_RBX - 2) = infoIndex;
            *((_BYTE *)_RBX + 8) = v25;
          }
        }
        __asm { vmovss  dword ptr [rdi+r12], xmm6 }
      }
      _RBX += 5;
      _RDI += 4i64;
      v67 = --v69 == 0;
    }
    while ( v69 );
    __asm
    {
      vmovaps xmm8, [rsp+180h+var_70]
      vmovaps xmm7, [rsp+180h+var_60]
      vmovaps xmm6, [rsp+180h+var_50]
    }
  }
}

/*
==============
XAnimGetTime
==============
*/
float XAnimGetTime(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5491, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    _RAX = XAnimGetAnimInfo(InfoIndex);
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimGetTreeHighMemUsage
==============
*/
__int64 XAnimGetTreeHighMemUsage()
{
  return (unsigned int)(96 * g_info_high_usage);
}

/*
==============
XAnimGetTreeMemUsage
==============
*/
__int64 XAnimGetTreeMemUsage()
{
  return (unsigned int)(96 * g_info_usage);
}

/*
==============
XAnimGetTreeParent
==============
*/
__int64 XAnimGetTreeParent(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  XAnimEntry *v4; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8283, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8284, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v2, anims->size) )
    __debugbreak();
  v4 = &anims->entries[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8287, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  return v4->parent;
}

/*
==============
XAnimGetWeight
==============
*/
float XAnimGetWeight(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5547, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    _RAX = XAnimGetAnimInfo(InfoIndex);
    __asm { vmovss  xmm0, dword ptr [rax+3Ch] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimHasFinished
==============
*/
bool XAnimHasFinished(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 
  char v10; 
  char v11; 
  __int16 v16; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5659, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( !InfoIndex )
    return 1;
  _RAX = GetNonRootAnimInfo(InfoIndex);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm2, dword ptr [rax+40h]
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  xmm1, dword ptr [rax+2Ch]
  }
  if ( v10 | v11 )
  {
    __asm { vcomiss xmm0, xmm1 }
    if ( v10 )
      return 1;
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    if ( v11 )
      return 1;
    v16 = _RAX->state.cycleCount - _RAX->state.oldCycleCount;
  }
  else
  {
    __asm { vcomiss xmm0, xmm1 }
    if ( !(v10 | v11) )
      return 1;
    __asm { vucomiss xmm0, xmm2 }
    if ( v11 )
      return 1;
    v16 = _RAX->state.oldCycleCount - _RAX->state.cycleCount;
  }
  return v16 > 0;
}

/*
==============
XAnimHasTime
==============
*/
bool XAnimHasTime(const XAnim_s *anims, unsigned int animIndex)
{
  XAnimEntry *v2; 

  v2 = &anims->entries[animIndex];
  return !v2->numAnims || ((__int64)v2->parts & 3) != 0;
}

/*
==============
XAnimInit
==============
*/
void XAnimInit(void)
{
  unsigned int numStrings; 

  XAnimInitNodeTypes();
  if ( s_xAnimConstStrings.numStrings )
  {
    numStrings = s_xAnimConstStrings.numStrings;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 417, ASSERT_TYPE_ASSERT, "( s_xAnimConstStrings.numStrings ) == ( 0 )", "%s == %s\n\t%i, %i", "s_xAnimConstStrings.numStrings", "0", numStrings, 0i64) )
      __debugbreak();
  }
  g_endNotetrackName = j_SL_GetString_("end", 0, 3);
  g_info_usage = 1;
  g_info_high_usage = 1;
}

/*
==============
XAnimInitInfo
==============
*/
void XAnimInitInfo(XAnimInfo *info, const XAnimTree *tree, const XAnimSubTreeID subTreeID)
{
  const XAnim_s *SubTreeAnims; 

  *(_QWORD *)&info->state.currentAnimTime = 0i64;
  *(_QWORD *)&info->state.cycleCount = 0i64;
  *(_QWORD *)&info->state.goalWeight = 0i64;
  *(_QWORD *)&info->state.rate = 0i64;
  *(_QWORD *)&info->state.startWeight = 0i64;
  info->notifyName = 0;
  info->notifyType = 0;
  *(_DWORD *)&info->notifyChild = -65536;
  info->subTreeID = subTreeID;
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( XAnimIsCustomNode(SubTreeAnims, info) )
    info->state.flags |= 8u;
}

/*
==============
XAnimInitModelMap
==============
*/
void XAnimInitModelMap(const XModel **models, unsigned int numModels, XModelNameMap *modelMap, unsigned int clientBoneOffset, bool includeClientBones)
{
  __int64 v6; 
  const XModel **v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  const XModel *v11; 
  __int64 numBones; 
  scr_string_t *boneNames; 
  __int64 v14; 
  scr_string_t *v15; 
  scr_string_t v16; 
  __int64 v17; 
  __int64 v18; 
  scr_string_t v19; 
  unsigned int numClientBones; 
  unsigned int v21; 
  unsigned int v22; 
  scr_string_t v23; 
  __int64 v24; 
  __int64 v25; 
  scr_string_t v26; 
  unsigned int v27; 
  XModelBlendShapeInfo *blendShapeInfo; 
  unsigned int v29; 
  scr_string_t v30; 
  __int64 v31; 
  __int64 v32; 
  scr_string_t v33; 
  bool v34; 
  const XModel *v35; 
  scr_string_t *v36; 
  __int64 v37; 
  const XModel **v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 

  v41 = clientBoneOffset;
  v38 = models;
  v6 = numModels;
  v7 = models;
  v8 = clientBoneOffset;
  memset_0(modelMap, 0, sizeof(XModelNameMap));
  v9 = 0;
  modelMap->initialized = 1;
  v10 = 0;
  v39 = 0;
  v40 = 0;
  if ( (_DWORD)v6 )
  {
    v37 = v6;
    do
    {
      v11 = *v7;
      v35 = *v7;
      numBones = (*v7)->numBones;
      boneNames = (*v7)->boneNames;
      v36 = boneNames;
      if ( (unsigned int)numBones >= 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1382, ASSERT_TYPE_ASSERT, "(boneCount < DOBJ_MAX_PARTS)", (const char *)&queryFormat, "boneCount < DOBJ_MAX_PARTS") )
        __debugbreak();
      if ( (_DWORD)numBones )
      {
        v14 = numBones;
        v15 = boneNames;
        do
        {
          v16 = *v15;
          if ( !*v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1387, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
            __debugbreak();
          v17 = (-7 * (_WORD)v16) & 0x3FF;
          v18 = v17;
          v19 = modelMap->boneNames[v17];
          if ( v19 != v16 )
          {
            while ( v19 )
            {
              v17 = ((_WORD)v17 + 1) & 0x3FF;
              v18 = (unsigned int)v17;
              v19 = modelMap->boneNames[v17];
              if ( v19 == v16 )
                goto LABEL_19;
            }
            if ( v9 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v9, "unsigned", v9) )
              __debugbreak();
            modelMap->boneIndices[v18] = v9;
            modelMap->boneNames[v18] = v16;
          }
LABEL_19:
          ++v15;
          ++v9;
          --v14;
        }
        while ( v14 );
        boneNames = v36;
        v10 = v40;
        v8 = v41;
        v11 = v35;
        v39 = v9;
      }
      if ( includeClientBones )
      {
        numClientBones = v11->numClientBones;
        if ( numClientBones + v8 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1402, ASSERT_TYPE_ASSERT, "(clientBoneIndex + clientBoneCount < 1024)", (const char *)&queryFormat, "clientBoneIndex + clientBoneCount < MODEL_MAP_COUNT") )
          __debugbreak();
        v21 = 0;
        if ( numClientBones )
        {
          v22 = v41;
          do
          {
            v23 = boneNames[v21 + (unsigned int)numBones];
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1407, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
              __debugbreak();
            v24 = (-7 * (_WORD)v23) & 0x3FF;
            v25 = v24;
            v26 = modelMap->boneNames[v24];
            if ( v26 != v23 )
            {
              while ( v26 )
              {
                v24 = ((_WORD)v24 + 1) & 0x3FF;
                v25 = (unsigned int)v24;
                v26 = modelMap->boneNames[v24];
                if ( v26 == v23 )
                  goto LABEL_38;
              }
              v27 = v22 | 0x8000;
              if ( (v22 | 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v27, "unsigned", v27) )
                __debugbreak();
              modelMap->boneIndices[v25] = v27;
              modelMap->boneNames[v25] = v23;
            }
LABEL_38:
            boneNames = v36;
            ++v21;
            ++v22;
          }
          while ( v21 < numClientBones );
          v9 = v39;
          v11 = v35;
          v41 = v22;
          v10 = v40;
        }
        else
        {
          v9 = v39;
          v11 = v35;
        }
      }
      blendShapeInfo = v11->blendShapeInfo;
      if ( blendShapeInfo )
      {
        v29 = 0;
        if ( blendShapeInfo->numberOfWeights )
        {
          do
          {
            v30 = blendShapeInfo->weightNames[v29];
            if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1428, ASSERT_TYPE_ASSERT, "(weightName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "weightName != NULL_SCR_STRING") )
              __debugbreak();
            v31 = v30 & 0x3FF;
            v32 = v31;
            v33 = modelMap->blendshapeNames[v31];
            if ( v33 != v30 )
            {
              while ( v33 )
              {
                v31 = ((_WORD)v31 + 1) & 0x3FF;
                v32 = (unsigned int)v31;
                v33 = modelMap->blendshapeNames[v31];
                if ( v33 == v30 )
                  goto LABEL_54;
              }
              if ( v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v10, "unsigned", v10) )
                __debugbreak();
              modelMap->blendshapeIndices[v32] = v10;
              modelMap->blendshapeNames[v32] = v30;
            }
LABEL_54:
            blendShapeInfo = v11->blendShapeInfo;
            ++v29;
            ++v10;
          }
          while ( v29 < blendShapeInfo->numberOfWeights );
          v9 = v39;
          v40 = v10;
        }
      }
      v8 = v41;
      v7 = v38 + 1;
      v34 = v37-- == 1;
      ++v38;
    }
    while ( !v34 );
  }
}

/*
==============
XAnimInitTime
==============
*/

__int64 __fastcall XAnimInitTime(XAnimTree *tree, unsigned __int16 infoIndex, double goalTime)
{
  char v10; 
  unsigned __int16 oldCycleCount; 
  unsigned __int16 inited; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  _RAX = GetNonRootAnimInfo(infoIndex);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+28h]
  }
  if ( !v10 || _RAX->state.cycleCount )
  {
    oldCycleCount = _RAX->state.oldCycleCount;
    if ( _RAX->state.cycleCount == oldCycleCount )
    {
      __asm { vucomiss xmm6, xmm0 }
      if ( _RAX->state.cycleCount != oldCycleCount )
      {
        __asm { vucomiss xmm0, dword ptr [rax+3Ch] }
        if ( _RAX->state.cycleCount != oldCycleCount )
        {
          __asm { vmovaps xmm2, xmm6; blendTime }
          inited = XAnimCloneInitTime(tree, infoIndex, _RAX->parent);
          XAnimClearTreeGoalWeightsNode(tree, infoIndex, *(float *)&_XMM2, 1, LINEAR);
          result = inited;
          __asm { vmovaps xmm6, [rsp+48h+var_18] }
          return result;
        }
      }
      XAnimResetTime(infoIndex);
    }
  }
  result = infoIndex;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
XAnimInitTimeFullRestart
==============
*/

__int64 __fastcall XAnimInitTimeFullRestart(XAnimTree *tree, unsigned __int16 infoIndex, double goalTime)
{
  bool v9; 
  bool v10; 
  unsigned __int16 inited; 
  XAnimInfo *v14; 
  __int64 result; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 i; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  _RBX = GetNonRootAnimInfo(infoIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 611, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( (_RBX->animToModel || (_RBX->animParent.flags & 0x1000) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3839, ASSERT_TYPE_ASSERT, "(IsInfoInstantFullRestart( info ))", (const char *)&queryFormat, "IsInfoInstantFullRestart( info )") )
    __debugbreak();
  v9 = _RBX->animToModel == NULL;
  if ( _RBX->animToModel )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3840, ASSERT_TYPE_ASSERT, "(!IsLeafInfo( info ))", (const char *)&queryFormat, "!IsLeafInfo( info )");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx+3Ch]
  }
  if ( v9 )
  {
    NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
    *(_QWORD *)&NonRootAnimInfo->state.currentAnimTime = 0i64;
    *(_DWORD *)&NonRootAnimInfo->state.cycleCount = 0;
    NonRootAnimInfo->notifyIndex = -1;
    for ( i = XAnimGetAnimInfo(infoIndex)->children; i; i = XAnimGetAnimInfo(i)->next )
      XAnimResetTime(i);
    result = infoIndex;
  }
  else
  {
    __asm { vmovaps xmm2, xmm7; blendTime }
    inited = XAnimCloneInitTime(tree, infoIndex, _RBX->parent);
    XAnimClearTreeGoalWeightsNode(tree, infoIndex, *(float *)&_XMM2, 1, LINEAR);
    __asm { vucomiss xmm7, xmm6 }
    if ( v9 )
    {
      v14 = GetNonRootAnimInfo(inited);
      if ( !v14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3850, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
      }
      v14->state.flags |= 4u;
    }
    result = inited;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  return result;
}

/*
==============
XAnimIsGraftNode
==============
*/
bool XAnimIsGraftNode(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8613, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8614, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  return (anims->entries[v2].animParent.flags & 0x400) != 0;
}

/*
==============
XAnimIsLeafNode
==============
*/
_BOOL8 XAnimIsLeafNode(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8622, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  return anims->entries[v2].numAnims == 0;
}

/*
==============
XAnimIsLooped
==============
*/
bool XAnimIsLooped(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  XAnimEntry *v4; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8601, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  v4 = &anims->entries[v2];
  if ( v4->numAnims )
    return (__int64)v4->parts & 1;
  else
    return XAnimGetPartsInternal(v4)->flags & 1;
}

/*
==============
XAnimIsPlayingNonAdditiveAnimHavingBone
==============
*/
int XAnimIsPlayingNonAdditiveAnimHavingBone(const XAnimTree *tree, scr_string_t boneName, int printBoneNames)
{
  unsigned __int16 children; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8249, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8250, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
    __debugbreak();
  children = tree->children;
  if ( children )
    return XAnimIsPlayingNonAdditiveAnimHavingBoneInternal(children, boneName, printBoneNames);
  else
    return 0;
}

/*
==============
XAnimIsPlayingNonAdditiveAnimHavingBoneInternal
==============
*/
__int64 XAnimIsPlayingNonAdditiveAnimHavingBoneInternal(unsigned __int16 infoIndex, scr_string_t boneName, int printBoneNames)
{
  bool v7; 
  bool v8; 
  XAnimParts *parts; 
  unsigned int v11; 
  scr_string_t *names; 
  unsigned int v13; 
  unsigned int i; 
  const char *v15; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 next; 

  _RBX = XAnimGetAnimInfo(infoIndex);
  v7 = _RBX == NULL;
  if ( !_RBX )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8184, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+3Ch]
  }
  if ( v7 )
    return 0i64;
  __asm { vucomiss xmm0, dword ptr [rbx+38h] }
  if ( IsInfoAdditive(_RBX) )
    return 0i64;
  if ( _RBX->animToModel )
  {
    parts = _RBX->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8204, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    v11 = parts->boneCount[9];
    names = parts->names;
    if ( printBoneNames )
      Com_Printf(19, "Printing bone names for anim: %s\n", parts->name);
    v13 = 0;
    for ( i = 0; i < v11; ++names )
    {
      if ( *names == boneName )
      {
        if ( !printBoneNames )
          return 1i64;
        Com_Printf(19, "Found bone at index %d\n", i);
        v13 = 1;
      }
      if ( printBoneNames )
      {
        v15 = SL_ConvertToString(*names);
        Com_Printf(19, "Bone %d: %s\n", i, v15);
      }
      ++i;
    }
    return v13;
  }
  children = _RBX->children;
  if ( !children )
    return 0i64;
  while ( 1 )
  {
    AnimInfo = XAnimGetAnimInfo(children);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8236, ASSERT_TYPE_ASSERT, "(nextInfo)", (const char *)&queryFormat, "nextInfo") )
      __debugbreak();
    next = AnimInfo->next;
    if ( XAnimIsPlayingNonAdditiveAnimHavingBoneInternal(children, boneName, printBoneNames) )
      break;
    children = next;
    if ( !next )
      return 0i64;
  }
  return 1i64;
}

/*
==============
XAnimIsPrimitive
==============
*/
bool XAnimIsPrimitive(XAnim_s *anims, unsigned int animIndex)
{
  return anims->entries[animIndex].numAnims == 0;
}

/*
==============
XAnimIsSimpleBlendTree
==============
*/
_BOOL8 XAnimIsSimpleBlendTree(const XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1230, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1231, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1232, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  return tree->anims->entries[0].numAnims == 2;
}

/*
==============
XAnimIsSimpleTree
==============
*/
__int64 XAnimIsSimpleTree(const XAnimTree *tree)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1222, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1223, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  return (tree->anims->entries[0].animParent.flags >> 7) & 1;
}

/*
==============
XAnimIsValidNode
==============
*/
bool XAnimIsValidNode(const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  unsigned int size; 

  v3 = animIndex;
  if ( animIndex >= anims->size )
  {
    size = anims->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 738, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, size) )
      __debugbreak();
  }
  return anims->entries[v3].nodeType != XANIM_NODE_TYPE_INVALID;
}

/*
==============
XAnimMarkDebugVisualShow
==============
*/
void XAnimMarkDebugVisualShow(const XAnimTree *tree, const XAnim_s *anims, unsigned __int16 infoIndex, unsigned __int64 nodeIndexShowMask)
{
  float v5; 
  int nodeIndexPtr[6]; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+58h+var_30], xmm0
  }
  nodeIndexPtr[0] = 0;
  XAnimMarkDebugVisualShow_r(tree, anims, infoIndex, nodeIndexPtr, nodeIndexShowMask, v5, 0);
}

/*
==============
XAnimMarkDebugVisualShow_r
==============
*/
void XAnimMarkDebugVisualShow_r(const XAnimTree *tree, const XAnim_s *anims, unsigned __int16 infoIndex, int *nodeIndexPtr, unsigned __int64 nodeIndexShowMask, float globalWeight, bool showSubTree)
{
  int *v11; 
  const XAnimTree *v14; 
  unsigned __int64 v15; 
  bool v17; 
  bool v18; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  XAnimToXModel *animToModel; 
  bool IsCustomNode; 
  bool ShouldNormalizeChildren; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 i; 
  const XAnim_s *SubTreeAnims; 
  __int64 v44; 
  float v45; 
  int v46; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v11 = nodeIndexPtr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RSI = anims;
  v14 = tree;
  if ( !nodeIndexPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4898, ASSERT_TYPE_ASSERT, "(nodeIndexPtr)", (const char *)&queryFormat, "nodeIndexPtr") )
    __debugbreak();
  v15 = (unsigned int)*v11;
  *v11 = v15 + 1;
  if ( (unsigned int)v15 >= 0x40 )
  {
    LODWORD(v44) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4900, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( 64 )", "nodeIndex doesn't index MAX_ANIM_DEBUG_VISUAL_NODES\n\t%i not in [0, %i)", v44, 64) )
      __debugbreak();
  }
  _RDI = GetNonRootAnimInfo(infoIndex);
  v17 = _RDI == NULL;
  if ( !_RDI )
  {
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4903, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info");
    v17 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm7, dword ptr [rdi+3Ch]
  }
  if ( v17 )
    _RDI->state.weight = 1.0;
  v20 = nodeIndexShowMask;
  v21 = v15;
  animToModel = _RDI->animToModel;
  _EBX = 0;
  __asm { vmovss  xmm8, [rsp+0C8h+globalWeight] }
  if ( _bittest64((const __int64 *)&v20, v21) )
  {
    if ( animToModel )
    {
      LOBYTE(_RSI) = showSubTree;
      _RDI->state.weight = 1.0;
    }
    else
    {
      IsCustomNode = XAnimIsCustomNode(_RSI, _RDI);
      LOBYTE(_RSI) = 1;
      if ( IsCustomNode )
        _RDI->state.weight = 1.0;
    }
  }
  else if ( animToModel || XAnimIsCustomNode(_RSI, _RDI) )
  {
    LODWORD(_RSI) = showSubTree;
    __asm
    {
      vmovd   xmm0, esi
      vmovd   xmm1, ebx
      vpcmpeqd xmm1, xmm0, xmm1
      vblendvps xmm0, xmm8, xmm7, xmm1
      vmovss  dword ptr [rdi+3Ch], xmm0
    }
  }
  else
  {
    LOBYTE(_RSI) = showSubTree;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  [rsp+0C8h+var_74], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4943, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->weight ))", (const char *)&queryFormat, "!IS_NAN( state->weight )") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  ShouldNormalizeChildren = XAnim_ShouldNormalizeChildren(_RDI);
  if ( ShouldNormalizeChildren )
  {
    children = _RDI->children;
    if ( children )
    {
      do
      {
        AnimInfo = XAnimGetAnimInfo(children);
        if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( AnimInfo->animToModel )
          goto LABEL_32;
        if ( (AnimInfo->animParent.flags & 0x210) != 0 )
          break;
        if ( (AnimInfo->animParent.flags & 0x100) == 0 )
LABEL_32:
          __asm { vaddss  xmm6, xmm6, dword ptr [rbx+3Ch] }
        children = AnimInfo->next;
      }
      while ( children );
      v11 = nodeIndexPtr;
      v14 = tree;
      v20 = nodeIndexShowMask;
    }
  }
  for ( i = _RDI->children; i; i = _RBX->next )
  {
    _RBX = XAnimGetAnimInfo(i);
    SubTreeAnims = XAnimGetSubTreeAnims(v14, (const XAnimSubTreeID)_RBX->subTreeID);
    __asm { vmovss  xmm0, dword ptr [rbx+3Ch] }
    if ( (_RBX->animToModel || (_RBX->animParent.flags & 0x210) == 0 && (_RBX->animParent.flags & 0x100) == 0) && ShouldNormalizeChildren )
    {
      __asm
      {
        vcomiss xmm6, xmm7
        vdivss  xmm0, xmm0, xmm6
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm8
      vmovss  [rsp+0C8h+var_A0], xmm0
    }
    XAnimMarkDebugVisualShow_r(v14, SubTreeAnims, i, v11, v20, v45, (bool)_RSI);
  }
  __asm { vmovaps xmm7, [rsp+0C8h+var_58] }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
XAnimMoveAnimTree
==============
*/
void XAnimMoveAnimTree(XAnimTree *from, XAnimTree *to)
{
  unsigned __int16 children; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9243, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9244, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9245, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9246, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( to->anims != from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9247, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  if ( to->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9248, ASSERT_TYPE_ASSERT, "(!to->children)", (const char *)&queryFormat, "!to->children") )
    __debugbreak();
  to->clientNotifyEnabled = from->clientNotifyEnabled;
  XAnimCloneParameterValues(from, to);
  to->info_usage = from->info_usage;
  children = from->children;
  if ( children )
  {
    XAnimMoveAnimTree_r(from, to, children);
    to->children = from->children;
    from->children = 0;
  }
  from->info_usage = 0;
}

/*
==============
XAnimMoveAnimTree_r
==============
*/
void XAnimMoveAnimTree_r(XAnimTree *from, XAnimTree *to, unsigned __int16 infoIndex)
{
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 children; 
  unsigned __int8 *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9224, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9225, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( NonRootAnimInfo->tree != from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9226, ASSERT_TYPE_ASSERT, "(info->tree == from)", (const char *)&queryFormat, "info->tree == from") )
    __debugbreak();
  children = NonRootAnimInfo->children;
  for ( NonRootAnimInfo->tree = to; children; children = *((_WORD *)v7 + 5) )
  {
    if ( (children & 0x8000u) != 0 )
    {
      v8 = 32 * (children & 0x7FFFu);
      if ( (unsigned int)v8 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v10) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(v9) = 32 * (children & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v9, v10) )
          __debugbreak();
      }
      v7 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v8];
    }
    else
    {
      if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v10) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(v9) = children;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      v7 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
    }
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9233, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    XAnimMoveAnimTree_r(from, to, children);
  }
}

/*
==============
XAnimNotetrackExists
==============
*/
bool XAnimNotetrackExists(const XAnim_s *anims, unsigned int animIndex, scr_string_t name)
{
  const XAnimParts *Parts; 
  char v8; 

  Parts = XAnimGetParts(anims, animIndex);
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, name);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  return !v8;
}

/*
==============
XAnimNotetrackExistsInTree
==============
*/
bool XAnimNotetrackExistsInTree(const XAnimTree *tree, scr_string_t name)
{
  unsigned __int16 children; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8730, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  return name && (children = tree->children) != 0 && XAnimNotetrackExistsInTree_r(tree, children, name);
}

/*
==============
XAnimNotetrackExistsInTree_r
==============
*/
bool XAnimNotetrackExistsInTree_r(const XAnimTree *tree, unsigned __int16 infoIndex, scr_string_t name)
{
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  const XAnimParts *Parts; 
  char v11; 
  unsigned __int16 children; 
  XAnimInfo *NonRootAnimInfo; 

  if ( !infoIndex )
    return 0;
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
  if ( AnimInfo->animToModel )
  {
    Parts = XAnimGetParts(SubTreeAnims, AnimInfo->animIndex);
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(Parts, name);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    return !v11;
  }
  children = AnimInfo->children;
  if ( !children )
    return 0;
  while ( 1 )
  {
    NonRootAnimInfo = GetNonRootAnimInfo(children);
    if ( XAnimNotetrackExistsInTree_r(tree, children, name) )
      break;
    children = NonRootAnimInfo->next;
    if ( !children )
      return 0;
  }
  return 1;
}

/*
==============
XAnimParameterBindingCompareFunc
==============
*/
__int64 XAnimParameterBindingCompareFunc(const void *e0, const void *e1)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 

  v2 = *((_WORD *)e0 + 1);
  v3 = *((_WORD *)e1 + 1);
  if ( v2 < v3 || v2 == v3 && *(_BYTE *)e0 < *(_BYTE *)e1 )
    return 0xFFFFFFFFi64;
  else
    return 1i64;
}

/*
==============
XAnimPlaySimpleBlendTreeAnim
==============
*/

void __fastcall XAnimPlaySimpleBlendTreeAnim(const DObj *obj, double oldAnimTime, double oldPlaybackRate, double newAnimTime, float newPlaybackRate, float blendTime, scr_string_t notifyName, unsigned int notifyType)
{
  XAnimTree *tree; 
  XAnimTree *v23; 
  unsigned __int16 children; 
  unsigned __int16 InfoIndex_r; 
  char v29; 
  char v30; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float v57; 
  float v58; 
  char v60; 
  void *retaddr; 
  float newPlaybackRatea; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
    vmovaps xmm11, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm10, xmm1
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1147, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1151, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1152, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1153, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1154, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 2)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 2") )
    __debugbreak();
  if ( !tree->anims[1].debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1155, ASSERT_TYPE_ASSERT, "(tree->anims->entries[1].parts)", (const char *)&queryFormat, "tree->anims->entries[1].parts") )
    __debugbreak();
  if ( !*(_QWORD *)&tree->anims[1].numGameParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1156, ASSERT_TYPE_ASSERT, "(tree->anims->entries[2].parts)", (const char *)&queryFormat, "tree->anims->entries[2].parts") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm10, xmm6
    vcomiss xmm11, xmm6
    vmovss  xmm7, [rsp+0E8h+blendTime]
    vcomiss xmm7, xmm6
    vmovss  xmm9, cs:__real@3f800000
    vmovss  [rsp+0E8h+var_B8], xmm8
    vmovss  [rsp+0E8h+goalTime], xmm6
    vmovss  dword ptr [rsp+0E8h+fmt], xmm9
  }
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 1u, fmt, goalTime, v57, notifyName, notifyType, 0, LINEAR, NULL);
  Profile_Begin(456);
  v23 = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8386, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(v23, 0, XANIM_SUBTREE_DEFAULT, 1u);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5456, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  children = v23->children;
  if ( children )
  {
    InfoIndex_r = XAnimGetInfoIndex_r(XANIM_SUBTREE_DEFAULT, 1u, children);
    if ( InfoIndex_r )
    {
      __asm
      {
        vmovss  [rsp+0E8h+goalTime], xmm8
        vxorps  xmm3, xmm3, xmm3; goalWeight
        vmovss  dword ptr [rsp+0E8h+fmt], xmm7
      }
      XAnimSetGoalWeightNode(obj, v23, InfoIndex_r, *(float *)&_XMM3, fmta, goalTimea, (scr_string_t)0, 0, LINEAR, NULL);
    }
  }
  Profile_EndInternal(NULL);
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+newPlaybackRate]
    vmovss  [rsp+0E8h+var_B8], xmm0
    vmovss  [rsp+0E8h+goalTime], xmm7
    vmovss  dword ptr [rsp+0E8h+fmt], xmm9
  }
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 2u, fmtb, goalTimeb, v58, notifyName, notifyType, 1, LINEAR, NULL);
  *(double *)&_XMM0 = XAnimGetLength(tree->anims, 1u);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( v29 | v30 )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm { vdivss  xmm8, xmm9, xmm7 }
    if ( XAnimIsLooped(tree->anims, 1u) )
    {
      __asm
      {
        vmovaps xmm1, xmm7; Y
        vmovaps xmm0, xmm10; X
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmulss  xmm1, xmm0, xmm8 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm10, xmm7
        vcmpless xmm1, xmm6, xmm0
        vmulss  xmm2, xmm8, xmm10
        vblendvps xmm1, xmm2, xmm9, xmm1
      }
    }
  }
  __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm1 }
  XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, 1u, fmtc);
  *(double *)&_XMM0 = XAnimGetLength(tree->anims, 2u);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( !(v29 | v30) )
  {
    __asm { vdivss  xmm8, xmm9, xmm0 }
    if ( XAnimIsLooped(tree->anims, 2u) )
    {
      __asm
      {
        vmovaps xmm1, xmm7; Y
        vmovaps xmm0, xmm11; X
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmulss  xmm6, xmm0, xmm8 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm11, xmm7
        vcmpless xmm1, xmm6, xmm0
        vmulss  xmm2, xmm8, xmm11
        vblendvps xmm6, xmm2, xmm9, xmm1
      }
    }
  }
  __asm { vmovss  [rsp+0E8h+newPlaybackRate], xmm6 }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, 2u, newPlaybackRatea);
}

/*
==============
XAnimPlaySimpleTreeAnim
==============
*/

void __fastcall XAnimPlaySimpleTreeAnim(const DObj *obj, double animTime, double playbackRate, scr_string_t notifyName, unsigned int notifyType)
{
  XAnimTree *tree; 
  char v20; 
  char v21; 
  const XAnim_s *anims; 
  float fmt; 
  float goalTime; 
  float v37; 
  char v39; 
  void *retaddr; 
  float notifyTypea; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm1
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1029, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1033, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1034, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( SLOBYTE(tree->anims->entries[0].parts) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1035, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE)", (const char *)&queryFormat, "tree->anims->entries[0].animParent.flags & XANIM_SIMPLE_TREE") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1036, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 1)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 1") )
    __debugbreak();
  if ( !tree->anims[1].debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1037, ASSERT_TYPE_ASSERT, "(tree->anims->entries[1].parts)", (const char *)&queryFormat, "tree->anims->entries[1].parts") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
    vmovss  xmm10, cs:__real@3f800000
    vmovss  [rsp+0B8h+var_88], xmm8
    vmovss  [rsp+0B8h+goalTime], xmm10
    vmovss  dword ptr [rsp+0B8h+fmt], xmm10
  }
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 1u, fmt, goalTime, v37, notifyName, notifyType, 1, LINEAR, NULL);
  *(double *)&_XMM0 = XAnimGetLength(tree->anims, 1u);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm8, xmm0
  }
  if ( !(v20 | v21) )
  {
    anims = tree->anims;
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm9
      vdivss  xmm9, xmm10, xmm0
    }
    if ( XAnimIsLooped(anims, 1u) )
    {
      __asm
      {
        vmovaps xmm1, xmm8; Y
        vmovaps xmm0, xmm7; X
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmulss  xmm6, xmm0, xmm9 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm7, xmm8
        vcmpless xmm1, xmm6, xmm0
        vmulss  xmm2, xmm9, xmm7
        vblendvps xmm6, xmm2, xmm10, xmm1
      }
    }
    __asm { vmovaps xmm9, [rsp+0B8h+var_48] }
  }
  __asm { vmovss  [rsp+0B8h+notifyType], xmm6 }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, 1u, notifyTypea);
}

/*
==============
XAnimPopCheckFatalErrorFlag
==============
*/
_BOOL8 XAnimPopCheckFatalErrorFlag()
{
  bool v0; 
  signed __int32 CurrentThreadContext; 
  signed __int32 v3; 
  signed __int32 v4; 

  v0 = s_fatalXAnimLoadError;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_fatalXAnimErrorCheckThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_fatalXAnimErrorCheckThread) )
    __debugbreak();
  if ( CurrentThreadContext != _InterlockedCompareExchange(&s_fatalXAnimErrorCheckThread, 28, CurrentThreadContext) )
  {
    if ( ((unsigned __int64)&s_fatalXAnimErrorCheckThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_fatalXAnimErrorCheckThread) )
      __debugbreak();
    v4 = CurrentThreadContext;
    v3 = _InterlockedCompareExchange(&s_fatalXAnimErrorCheckThread, 28, CurrentThreadContext);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7681, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_fatalXAnimErrorCheckThread, INVALID_THREAD_CONTEXT, ctx ) ) == ( ctx )", "%s == %s\n\t%u, %u", "Sys_InterlockedCompareExchange( &s_fatalXAnimErrorCheckThread, INVALID_THREAD_CONTEXT, ctx )", "ctx", v3, v4) )
      __debugbreak();
  }
  return v0;
}

/*
==============
XAnimProcessClientNotify
==============
*/

void __fastcall XAnimProcessClientNotify(const DObj *obj, const XAnimInfo *info, double dtime, XAnimNotifyHandle *inOutNotifyHead)
{
  bool HasClientFlag; 
  bool v12; 
  bool v13; 
  unsigned __int16 notifyType; 
  bool v16; 
  unsigned __int16 cycleCount; 
  bool v18; 
  XAnimParts *PartsFromInfo; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  _RDI = info;
  __asm { vmovaps xmm7, xmm2 }
  HasClientFlag = DObjHasClientFlag(obj);
  v12 = !HasClientFlag;
  if ( !HasClientFlag )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2681, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm7, xmm6
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2685, ASSERT_TYPE_ASSERT, "(dtime)", (const char *)&queryFormat, "dtime") )
    __debugbreak();
  notifyType = _RDI->notifyType;
  if ( notifyType || obj->tree->clientNotifyEnabled )
  {
    v16 = !obj->tree->clientNotifyEnabled;
    if ( !obj->tree->clientNotifyEnabled )
      goto LABEL_12;
    cycleCount = _RDI->state.cycleCount;
    v16 = _RDI->state.oldCycleCount == cycleCount;
    if ( _RDI->state.oldCycleCount < cycleCount )
      goto LABEL_12;
    __asm { vcomiss xmm7, xmm6 }
    if ( _RDI->state.oldCycleCount >= cycleCount )
    {
LABEL_12:
      __asm { vucomiss xmm6, dword ptr [rdi+38h] }
      if ( v16 )
      {
        v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2701, ASSERT_TYPE_ASSERT, "(state->goalWeight)", (const char *)&queryFormat, "state->goalWeight");
        v16 = !v18;
        if ( v18 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+2Ch]
        vmovss  xmm2, cs:__real@3f800000; noteTime
        vucomiss xmm1, xmm2
      }
      if ( v16 )
        goto LABEL_18;
      if ( _RDI->animToModel )
      {
        if ( _RDI->notifyName )
          PartsFromInfo = XAnimGetPartsFromInfo(obj->tree, _RDI);
        else
          PartsFromInfo = _RDI->parts;
        if ( !PartsFromInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2726, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
          __debugbreak();
        __asm { vmovss  dword ptr [rsp+78h+fmt], xmm7 }
        XAnimProcessNotify(PartsFromInfo, &_RDI->state, _RDI->notifyName, notifyType, fmt, NULL, (void (__fastcall *)(scr_string_t, scr_string_t, float, unsigned __int16, const XAnimParts *, void *, XAnimNotifyHandle *))XAnimAddClientNotify, inOutNotifyHead);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vcomiss xmm0, xmm1
          vucomiss xmm0, xmm2
        }
        if ( !_RDI->animToModel )
        {
LABEL_18:
          __asm { vmovaps xmm3, xmm7; dtime }
          *(float *)&_XMM0 = XAnimGetNotifyFracLeaf(&_RDI->state, &_RDI->state, *(double *)&_XMM2, *(double *)&_XMM3);
          __asm { vmovaps xmm2, xmm0; frac }
          XAnimAddClientNotify(_RDI->notifyName, g_endNotetrackName, *(double *)&_XMM2, notifyType, NULL, NULL, inOutNotifyHead);
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
XAnimProcessNotify
==============
*/
void XAnimProcessNotify(const XAnimParts *parts, const XAnimState *state, scr_string_t notifyName, unsigned __int16 notifyType, float dtime, void *customData, void (*notifyFunc)(scr_string_t, scr_string_t, float, unsigned __int16, const XAnimParts *, void *, XAnimNotifyHandle *), XAnimNotifyHandle *inOutNotifyHead)
{
  unsigned __int16 NextNotifyIndex; 
  char v15; 
  bool v20; 
  __int64 v26; 
  unsigned __int16 notifyCount; 

  _RBX = state;
  if ( !notifyFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2549, ASSERT_TYPE_ASSERT, "(notifyFunc)", (const char *)&queryFormat, "notifyFunc") )
    __debugbreak();
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2550, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  __asm { vmovss  xmm1, dword ptr [rbx+4]; time }
  NextNotifyIndex = XAnimGetNextNotifyIndex(parts, *(double *)&_XMM1);
  if ( NextNotifyIndex >= parts->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2553, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
    __debugbreak();
  _RSI = &parts->notify[NextNotifyIndex];
  v15 = _RBX->flags & 0x10;
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm6
    vmovss  xmm6, [rsp+88h+dtime]
  }
  if ( v15 )
    __asm { vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]; time
    vmovss  xmm2, dword ptr [rbx+4]
    vcomiss xmm1, xmm2
    vucomiss xmm1, cs:__real@3f800000
  }
  if ( v15 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vcomiss xmm1, xmm0
      vcomiss xmm2, xmm0
    }
  }
  else
  {
    if ( (parts->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2627, ASSERT_TYPE_ASSERT, "(!(parts->flags & ANIM_LOOP))", (const char *)&queryFormat, "!(parts->flags & ANIM_LOOP)") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rsi+4] }
    v20 = __CFADD__(_RSI, 4i64);
    _RSI = &_RSI->time;
    __asm { vcomiss xmm0, dword ptr [rbx+4] }
    if ( !v20 )
    {
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vcomiss xmm0, dword ptr [rbx+4]
        }
        if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2634, ASSERT_TYPE_ASSERT, "(state->oldTime <= notifyInfo->time)", (const char *)&queryFormat, "state->oldTime <= notifyInfo->time") )
          __debugbreak();
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; noteTime
          vmovaps xmm3, xmm6; dtime
        }
        *(float *)&_XMM0 = XAnimGetNotifyFracLeaf(_RBX, _RBX, *(double *)&_XMM2, *(double *)&_XMM3);
        __asm { vmovaps xmm2, xmm0 }
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, *((unsigned int *)_RSI - 1), v26, notifyType, parts, customData, inOutNotifyHead);
        notifyCount = parts->notifyCount;
        _RSI += 2;
        v20 = ++NextNotifyIndex < notifyCount;
      }
      while ( NextNotifyIndex < notifyCount );
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
XAnimProcessNotifyFromParts
==============
*/

void __fastcall XAnimProcessNotifyFromParts(const XAnimParts *parts, double oldTime, double currentTime, unsigned __int16 cycleCount, scr_string_t notifyName, unsigned __int16 notifyType, float dtime, void *customData, void (__fastcall *notifyFunc)(scr_string_t, scr_string_t, float, unsigned __int16, const XAnimParts *, void *, XAnimNotifyHandle *), XAnimNotifyHandle *inOutNotifyHead)
{
  __int64 v20; 
  XAnimState state; 
  char v26; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !notifyFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2735, ASSERT_TYPE_ASSERT, "(notifyFunc)", (const char *)&queryFormat, "notifyFunc") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; noteTime
    vucomiss xmm6, xmm2
    vmovss  [rsp+98h+state.oldTime], xmm6
    vmovss  [rsp+98h+state.currentAnimTime], xmm7
  }
  *(_QWORD *)&state.cycleCount = cycleCount;
  memset(&state.goalWeight, 0, 24);
  __asm { vmovss  xmm3, [rsp+98h+dtime]; dtime }
  *(float *)&_XMM0 = XAnimGetNotifyFracLeaf(&state, &state, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm { vmovaps xmm2, xmm0 }
  ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, (unsigned int)g_endNotetrackName, v20, notifyType, 0i64, customData, inOutNotifyHead);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v26;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
XAnimProcessServerNotify
==============
*/

void __fastcall XAnimProcessServerNotify(const DObj *obj, XAnimInfo *info, double time)
{
  scrContext_t *v12; 
  scrContext_t *v13; 
  XAnimTree *tree; 
  XAnimParts *PartsFromInfo; 
  XAnimParts *v16; 
  bool v17; 
  __int64 notifyIndex; 
  unsigned int notifyCount; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  int v28; 
  bool v29; 
  int v31; 
  bool v33; 
  int v35; 
  bool v37; 
  unsigned int v39; 
  double localClientNum; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx+38h]
    vmovaps [rsp+78h+var_48], xmm7
  }
  _RDI = info;
  __asm
  {
    vmovaps xmm6, xmm2
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm6, xmm7
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  qword ptr [rsp+78h+localClientNum], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4245, ASSERT_TYPE_ASSERT, "( ( time <= 1.f ) )", "( time ) = %g", localClientNum) )
    __debugbreak();
  if ( obj->tree && obj->tree->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4246, ASSERT_TYPE_ASSERT, "(!obj->tree || obj->tree->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "!obj->tree || obj->tree->owner == XAnimOwner::SERVER") )
    __debugbreak();
  if ( obj->entnum && _RDI->notifyName )
  {
    v12 = ScriptContext_Server();
    __asm { vucomiss xmm7, dword ptr [rdi+28h] }
    v13 = v12;
    if ( v17 )
    {
      Scr_AddConstString(v12, g_endNotetrackName);
      Scr_NotifyNum(v13, obj->entnum - 1, ENTITY_CLASS_GENTITY, _RDI->notifyName, 1u, LOCAL_CLIENT_0);
      XAnimAddServerNotify(_RDI->notifyName, g_endNotetrackName);
      goto LABEL_77;
    }
    tree = obj->tree;
    if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4264, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    PartsFromInfo = XAnimGetPartsFromInfo(tree, _RDI);
    v16 = PartsFromInfo;
    v17 = PartsFromInfo == NULL;
    if ( PartsFromInfo )
    {
      v17 = _RDI->notifyIndex == 0;
      if ( _RDI->notifyIndex >= 0 || (XAnimUpdateServerNotifyIndex(_RDI, PartsFromInfo), v17 = _RDI->notifyIndex == 0, _RDI->notifyIndex >= 0) )
      {
        __asm { vcomiss xmm7, dword ptr [rdi+28h] }
        if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4293, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime < 1.f)", (const char *)&queryFormat, "info->state.currentAnimTime < 1.f") )
          __debugbreak();
        if ( !v16->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4294, ASSERT_TYPE_ASSERT, "(parts->notifyCount > 0)", (const char *)&queryFormat, "parts->notifyCount > 0") )
          __debugbreak();
        _RAX = v16->notify;
        __asm { vcomiss xmm7, dword ptr [rax+4] }
        notifyIndex = _RDI->notifyIndex;
        if ( (int)notifyIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4298, ASSERT_TYPE_ASSERT, "(notifyIndex >= 0)", (const char *)&queryFormat, "notifyIndex >= 0") )
          __debugbreak();
        notifyCount = v16->notifyCount;
        v21 = (unsigned int)notifyIndex < notifyCount;
        v22 = (_DWORD)notifyIndex == notifyCount;
        v23 = (unsigned int)notifyIndex <= notifyCount;
        if ( (int)notifyIndex >= (int)notifyCount )
        {
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4299, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount");
          v21 = 0;
          v22 = !v24;
          v23 = !v24;
          if ( v24 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vcomiss xmm6, xmm0
        }
        _RBX = (scr_string_t *)&v16->notify[notifyIndex];
        if ( v21 )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+4]
            vcomiss xmm6, xmm1
          }
          if ( v23 )
          {
            __asm { vcomiss xmm0, xmm1 }
            if ( !v23 )
              goto LABEL_77;
            if ( (int)notifyIndex >= v16->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4320, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v13);
            do
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+4]
                vcomiss xmm0, dword ptr [rdi+28h]
              }
              if ( v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4324, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime <= notifyInfo->time)", (const char *)&queryFormat, "info->state.currentAnimTime <= notifyInfo->time") )
                __debugbreak();
              Scr_AddConstString(v13, *_RBX);
              Scr_AddArray(v13);
              XAnimAddServerNotify(_RDI->notifyName, *_RBX);
              v31 = v16->notifyCount;
              _RBX += 2;
              LODWORD(notifyIndex) = notifyIndex + 1;
              v29 = (unsigned int)notifyIndex < v31;
            }
            while ( (int)notifyIndex < v31 );
            _RBX = v16->notify;
            __asm { vcomiss xmm6, dword ptr [rbx+4] }
          }
          else
          {
            if ( (int)notifyIndex >= v16->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4306, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v13);
            do
            {
              Scr_AddConstString(v13, *_RBX);
              Scr_AddArray(v13);
              XAnimAddServerNotify(_RDI->notifyName, *_RBX);
              v28 = v16->notifyCount;
              _RBX += 2;
              LODWORD(notifyIndex) = notifyIndex + 1;
              if ( (int)notifyIndex >= v28 )
                break;
              __asm { vcomiss xmm6, dword ptr [rbx+4] }
            }
            while ( (unsigned int)notifyIndex > v28 );
          }
        }
        else
        {
          __asm { vucomiss xmm6, xmm7 }
          if ( !v22 )
            goto LABEL_65;
          __asm { vcomiss xmm0, dword ptr [rbx+4] }
          if ( v23 )
          {
            if ( (v16->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4350, ASSERT_TYPE_ASSERT, "(!(parts->flags & ANIM_LOOP))", (const char *)&queryFormat, "!(parts->flags & ANIM_LOOP)") )
              __debugbreak();
            if ( (int)notifyIndex >= v16->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4351, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v13);
            do
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+4]
                vcomiss xmm0, dword ptr [rdi+28h]
              }
              if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4355, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime <= notifyInfo->time)", (const char *)&queryFormat, "info->state.currentAnimTime <= notifyInfo->time") )
                __debugbreak();
              Scr_AddConstString(v13, *_RBX);
              Scr_AddArray(v13);
              XAnimAddServerNotify(_RDI->notifyName, *_RBX);
              v35 = v16->notifyCount;
              _RBX += 2;
              LODWORD(notifyIndex) = notifyIndex + 1;
              v33 = (unsigned int)notifyIndex < v35;
            }
            while ( (int)notifyIndex < v35 );
          }
          else
          {
LABEL_65:
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+4]
              vcomiss xmm6, xmm1
            }
            if ( v23 )
              goto LABEL_77;
            __asm { vcomiss xmm0, xmm1 }
            if ( !v23 )
              goto LABEL_77;
            if ( (int)notifyIndex >= v16->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4366, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v13);
            __asm { vmovss  xmm0, dword ptr [rbx+4] }
            do
            {
              __asm { vcomiss xmm0, dword ptr [rdi+28h] }
              if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4370, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime <= notifyInfo->time)", (const char *)&queryFormat, "info->state.currentAnimTime <= notifyInfo->time") )
                __debugbreak();
              Scr_AddConstString(v13, *_RBX);
              Scr_AddArray(v13);
              XAnimAddServerNotify(_RDI->notifyName, *_RBX);
              v39 = v16->notifyCount;
              _RBX += 2;
              LODWORD(notifyIndex) = notifyIndex + 1;
              v37 = (unsigned int)notifyIndex < v39;
              if ( (int)notifyIndex >= (int)v39 )
                break;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+4]
                vcomiss xmm6, xmm0
              }
            }
            while ( (unsigned int)notifyIndex > v39 );
          }
        }
        Scr_NotifyNum(v13, obj->entnum - 1, ENTITY_CLASS_GENTITY, _RDI->notifyName, 1u, LOCAL_CLIENT_0);
        goto LABEL_77;
      }
    }
    __asm
    {
      vcomiss xmm6, dword ptr [rdi+28h]
      vucomiss xmm6, xmm7
    }
    if ( v17 )
    {
      Scr_AddConstString(v13, g_endNotetrackName);
      Scr_NotifyNum(v13, obj->entnum - 1, ENTITY_CLASS_GENTITY, _RDI->notifyName, 1u, LOCAL_CLIENT_0);
      XAnimAddServerNotify(_RDI->notifyName, g_endNotetrackName);
    }
  }
LABEL_77:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
  }
}

/*
==============
XAnimPublicNodeOfTypeWillBeLodCulled
==============
*/
bool XAnimPublicNodeOfTypeWillBeLodCulled(const XAnimTree *tree, const scr_string_t publicNodeTypeName)
{
  unsigned __int16 outAnimIndex; 

  return tree && tree->owner[0] && tree->lodState.calcLod && XAnimFindPublicNodeByTypeName(tree->anims, publicNodeTypeName, &outAnimIndex) && XAnimWillBeLodCulled(tree, outAnimIndex);
}

/*
==============
XAnimPublicNodeWillBeLodCulled
==============
*/
bool XAnimPublicNodeWillBeLodCulled(const XAnimTree *tree, const scr_string_t publicNodeName)
{
  unsigned __int16 outAnimIndex; 

  return tree && tree->owner[0] && tree->lodState.calcLod && XAnimFindPublicNode(tree->anims, publicNodeName, &outAnimIndex) && XAnimWillBeLodCulled(tree, outAnimIndex);
}

/*
==============
XAnimPushCheckFatalErrorFlag
==============
*/
void XAnimPushCheckFatalErrorFlag(void)
{
  signed __int32 CurrentThreadContext; 
  signed __int32 v1; 
  int v2; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_fatalXAnimErrorCheckThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_fatalXAnimErrorCheckThread) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_fatalXAnimErrorCheckThread, CurrentThreadContext, 28) != 28 )
  {
    if ( ((unsigned __int64)&s_fatalXAnimErrorCheckThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_fatalXAnimErrorCheckThread) )
      __debugbreak();
    v2 = 28;
    v1 = _InterlockedCompareExchange(&s_fatalXAnimErrorCheckThread, CurrentThreadContext, 28);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7669, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_fatalXAnimErrorCheckThread, ctx, INVALID_THREAD_CONTEXT ) ) == ( INVALID_THREAD_CONTEXT )", "%s == %s\n\t%u, %u", "Sys_InterlockedCompareExchange( &s_fatalXAnimErrorCheckThread, ctx, INVALID_THREAD_CONTEXT )", "INVALID_THREAD_CONTEXT", v1, v2) )
      __debugbreak();
  }
  s_fatalXAnimLoadError = 0;
}

/*
==============
XAnimRegisterConstString
==============
*/
const scr_string_t *XAnimRegisterConstString(scr_string_t str)
{
  return XAnimRegisterConstString(str, 0);
}

/*
==============
XAnimRegisterConstString
==============
*/
scr_string_t *XAnimRegisterConstString(scr_string_t str, unsigned int size)
{
  scr_string_t *strings; 
  unsigned int numStrings; 
  unsigned int *v5; 
  XAnimConstStrings *v7; 

  strings = s_xAnimConstStrings.strings;
  numStrings = s_xAnimConstStrings.numStrings;
  v5 = s_xAnimConstStrings.size;
  v7 = (XAnimConstStrings *)&s_xAnimConstStrings.strings[s_xAnimConstStrings.numStrings];
  if ( s_xAnimConstStrings.strings == (scr_string_t *)v7 )
  {
LABEL_4:
    if ( s_xAnimConstStrings.numStrings >= 0x300 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441A7190, 349i64, 768i64);
      numStrings = s_xAnimConstStrings.numStrings;
    }
    s_xAnimConstStrings.numStrings = numStrings + 1;
    SL_AddRefToString(str);
    *strings = str;
    *v5 = size;
  }
  else
  {
    while ( *strings != str )
    {
      ++strings;
      ++v5;
      if ( strings == (scr_string_t *)v7 )
        goto LABEL_4;
    }
  }
  return strings;
}

/*
==============
XAnimRegisterDvars
==============
*/

void __fastcall XAnimRegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v15; 
  const dvar_t *v23; 
  const dvar_t *v30; 
  const dvar_t *v40; 
  const dvar_t *v44; 
  const dvar_t *v48; 
  const dvar_t *v52; 
  const dvar_t *v56; 
  const dvar_t *v60; 
  const dvar_t *v64; 
  const dvar_t *v71; 
  const dvar_t *v82; 
  const dvar_t *v93; 
  const dvar_t *v97; 
  const dvar_t *v102; 
  const dvar_t *v109; 
  const dvar_t *v113; 
  const dvar_t *v117; 
  const dvar_t *v121; 
  const dvar_t *v125; 
  const dvar_t *v136; 
  const dvar_t *v143; 
  const dvar_t *v147; 
  const dvar_t *v157; 
  const dvar_t *v176; 
  const dvar_t *v181; 
  const dvar_t *v185; 
  const dvar_t *v189; 
  const dvar_t *v193; 
  const dvar_t *v197; 
  const dvar_t *v201; 
  const dvar_t *v205; 
  const dvar_t *v212; 
  const dvar_t *v216; 
  const dvar_t *v223; 
  const dvar_t *v227; 
  const dvar_t *v241; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 
  float descriptiond; 
  float max; 
  float maxa; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm14
    vmovaps [rsp+0D8h+var_88], xmm15
  }
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_xanim_nonAnimatedBonesWarning = Dvar_RegisterBool("xanim_nonAnimatedBonesWarning", 0, 0x40004u, "Enable warnings about non-animated bones affected by additive animations");
  DCONST_DVARBOOL_xanim_displayblacktext = Dvar_RegisterBool("xanim_displayblacktext", 0, 0x40004u, "Displays black text with animation text output.");
  DCONST_DVARBOOL_xanim_missingProceduralBonesWarning = Dvar_RegisterBool("xanim_missingProceduralBonesWarning", 0, 0x40004u, "Enable warnings about procedural bones missing from DObjs");
  DCONST_DVARBOOL_xanim_dynamicServerBonesWarning = Dvar_RegisterBool("xanim_dynamicServerBonesWarning", 0, 0x40004u, "Enable warnings about dynamic bones that are not client-only (these will not be dynamic on the server)");
  DCONST_DVARBOOL_xanim_display_tree_parameters = Dvar_RegisterBool("xanim_display_tree_parameters", 0, 0x40004u, "Displays custom node tree parameters.");
  DCONST_DVARSTR_xanim_display_tree_parameters_name_filter = Dvar_RegisterString("xanim_display_tree_parameters_name_filter", (const char *)&queryFormat.fmt + 3, 0x40004u, "Use a sub-string search for parameter names.");
  DCONST_DVARBOOL_xanim_display_blendspaces_info = Dvar_RegisterBool("xanim_display_blendspaces_info", 0, 0x40004u, "Displays internal debug info for blendspace nodes.");
  DCONST_DVARBOOL_xanim_dumpPostPhysicsConstraints = Dvar_RegisterBool("xanim_dumpPostPhysicsConstraints", 0, 0x40004u, "Displays a list of post-physics constraints when initializing DObj procedural bones data.");
  DCONST_DVARBOOL_xanim_disableClientOnlyNodes = Dvar_RegisterBool("xanim_disableClientOnlyNodes", 0, 0x40004u, "Disable client only animation tree nodes");
  DCONST_DVARBOOL_xanim_enableClientOnlyBoneAnimation = Dvar_RegisterBool("xanim_enableClientOnlyBoneAnimation", 1, 0x40004u, "Enable animation of client bones");
  DCONST_DVARBOOL_xanim_enableProceduralBones = Dvar_RegisterBool("xanim_enableProceduralBones", 1, 0x40004u, "Enable procedural bones");
  DCONST_DVARBOOL_xanim_enableConstraints = Dvar_RegisterBool("xanim_enableConstraints", 1, 0x40004u, "Enable procedural bones constraints");
  DCONST_DVARBOOL_xanim_debugLookAtPos = Dvar_RegisterBool("xanim_debugLookAtPos", 0, 0x40004u, "Draws the target and chase target for the lookat node.");
  DCONST_DVARBOOL_xanim_enableTransformCache = Dvar_RegisterBool("xanim_enableTransformCache", 1, 0x40004u, "Enable transform cache optimization");
  DCONST_DVARINT_xanim_drawEntityDynamicBones = Dvar_RegisterInt("xanim_drawEntityDynamicBones", -1, -1, 2560, 0x40004u, "Draw dynamic bones for entity number.");
  DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents = Dvar_RegisterInt("xanim_drawEntityDynamicBoneAudioEvents", -1, -1, 2560, 0x40004u, "Show audio events generated by entity dynamic bones.");
  DCONST_DVARBOOL_xanim_drawViewModelDynamicBones = Dvar_RegisterBool("xanim_drawViewModelDynamicBones", 0, 0x40004u, "Show dynamic bones on viewmodel.");
  DCONST_DVARBOOL_xanim_drawViewmodelDynamicBoneAudioEvents = Dvar_RegisterBool("xanim_drawViewmodelDynamicBoneAudioEvents", 0, 0x40004u, "Show audio events generated by viewmodel dynamic bones");
  DCONST_DVARINT_xanim_debugReplicationOnEnt = Dvar_RegisterInt("xanim_debugReplicationOnEnt", -1, -1, 2048, 0x40004u, "Show debug output for replicated values on entity.");
  DCONST_DVARBOOL_xanim_drawMemoryStats = Dvar_RegisterBool("xanim_drawMemoryStats", 0, 0x40004u, "Draw XAnim memory allocation stats.");
  DCONST_DVARBOOL_xanim_debugScrubbedNotetracks = Dvar_RegisterBool("xanim_debugScrubbedNotetracks", 0, 0x40004u, "If true, will assert when code attempts to set a non-zero rate on an animation with scrubbed notetrack handling.");
  DCONST_DVARBOOL_xanim_disableLookAtNodes = Dvar_RegisterBool("xanim_disableLookAtNodes", 0, 0x40004u, "Disable Look At animation tree nodes");
  DCONST_DVARBOOL_xanim_disableWobbleNodes = Dvar_RegisterBool("xanim_disableWobbleNodes", 0, 0x40004u, "Disable Wobble animation tree nodes");
  DCONST_DVARBOOL_xanim_disableAnalogClockNodes = Dvar_RegisterBool("xanim_disableAnalogClockNodes", 0, 0x40004u, "Disable Analog Clock animation tree nodes");
  __asm
  {
    vmovss  xmm3, cs:__real@44870000; max
    vmovss  xmm1, cs:__real@43340000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v15 = Dvar_RegisterFloat("xanim_analogClock_balanceWheelMaxHalfAngleDeg", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum angular displacement of a clock's balance wheel from center.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@3e800000; value
  }
  DCONST_DVARFLT_xanim_analogClock_balanceWheelMaxHalfAngleDeg = v15;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_xanim_analogClock_springScaleFactor = Dvar_RegisterFloat("xanim_analogClock_springScaleFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scale factor to apply to bones in the spring rig.");
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  DCONST_DVARBOOL_xanim_disableMountNodes = Dvar_RegisterBool("xanim_disableMountNodes", 0, 0x40004u, "Disable Mount animation tree nodes");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v23 = Dvar_RegisterFloat("xanim_lookatSpeedMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier for the lookat catching up");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm2, cs:__real@c3340000; min
    vmovss  xmm1, cs:__real@41400000; value
  }
  DCONST_DVARFLT_xanim_lookatSpeedMultiplier = v23;
  DCONST_DVARFLT_xanim_lookatRollMax = Dvar_RegisterFloat("xanim_lookatRollMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max roll applied at max yaw");
  DCONST_DVARBOOL_xanim_lookatDrawChain = Dvar_RegisterBool("xanim_lookatDrawChain", 0, 0x40004u, "Enable drawing the spine - neck - head chain pre and post lookat");
  DCONST_DVARBOOL_xanim_lookatExtendedAnimInfo = Dvar_RegisterBool("xanim_lookatExtendedAnimInfo", 0, 0x40004u, "Add more info to the the anim tree display");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3ecccccd; value
  }
  DCONST_DVARBOOL_xanim_ladder_climb_enable_grabs = Dvar_RegisterBool("xanim_ladder_climb_enable_grabs", 1, 0x40004u, "Enables grabbing from mid-rungs when climbing.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v30 = Dvar_RegisterFloat("xanim_ladder_climb_grab_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max time a grab from one mid-rung to another rung will take.");
  __asm
  {
    vmovss  xmm6, cs:__real@3e4ccccd
    vmovss  xmm3, cs:__real@41200000; max
  }
  DCONST_DVARFLT_xanim_ladder_climb_grab_time = v30;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_xanim_ladder_climb_grab_begin_percent = Dvar_RegisterFloat("xanim_ladder_climb_grab_begin_percent", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The percentage of the grab from one rung to the next that the grab animation begins playing.");
  __asm
  {
    vmovss  xmm8, cs:__real@42c80000
    vmovss  xmm7, cs:__real@c2c80000
    vmovss  xmm3, cs:__real@40666666; z
    vmovss  xmm1, cs:__real@40b33333; x
    vmovss  dword ptr [rsp+0D8h+description], xmm8
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  [rsp+0D8h+flags], xmm7
  }
  v40 = Dvar_RegisterVec3("xanim_ladder_rung_ankle_ik_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, 0x40004u, "The offset the ankle joint will be from the ladder rung when fully seated.");
  __asm
  {
    vmovss  xmm3, cs:__real@c0000000; z
    vmovss  xmm1, cs:__real@3fb33333; x
  }
  DCONST_DVARVEC3_xanim_ladder_rung_ankle_ik_offset = v40;
  __asm
  {
    vmovss  dword ptr [rsp+0D8h+description], xmm8
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  [rsp+0D8h+flags], xmm7
  }
  v44 = Dvar_RegisterVec3("xanim_ladder_rung_wrist_ik_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, 0x40004u, "The offset the wrist joint will be from the ladder rung when fully seated.");
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset = v44;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v48 = Dvar_RegisterFloat("xanim_ladder_ik_dist_ratio", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The percent of the total rung distance (currently 12) the hand must be to a rung before it becomes a valid IK target.");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@40400000; value
  }
  DCONST_DVARFLT_xanim_ladder_ik_dist_ratio = v48;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v52 = Dvar_RegisterFloat("xanim_ladder_wrist_query_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance from the wrist joint to the middle finger joint.  Allows for more accurate IK targeting.");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@40f9999a; value
  }
  DCONST_DVARFLT_xanim_ladder_wrist_query_offset = v52;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v56 = Dvar_RegisterFloat("xanim_ladder_ankle_query_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance from the ankle joint to the ball joint.  Allows for more accurate IK targeting.");
  __asm { vmovss  xmm1, cs:__real@3eb33333; value }
  DCONST_DVARFLT_xanim_ladder_ankle_query_offset = v56;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v60 = Dvar_RegisterFloat("xanim_ladder_aim_rung_one_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "If the climb animation time is below this threshold, grab the 1st rung.");
  __asm { vmovss  xmm1, cs:__real@3f0e147b; value }
  DCONST_DVARFLT_xanim_ladder_aim_rung_one_time = v60;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v64 = Dvar_RegisterFloat("xanim_ladder_aim_rung_two_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "If the climb animation time is below this threshold, grab the 2nd rung.");
  __asm { vmovss  xmm1, cs:__real@3f6147ae; value }
  DCONST_DVARFLT_xanim_ladder_aim_rung_two_time = v64;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_ladder_aim_rung_three_time = Dvar_RegisterFloat("xanim_ladder_aim_rung_three_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "If the climb animation time is below this threshold, grab the 3rd rung.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v71 = Dvar_RegisterFloat("xanim_ladder_aim_rung_four_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "If the climb animation time is below this threshold, grab the 4th rung.  Any time above this grabs the 5th rung.");
  __asm
  {
    vmovss  xmm3, cs:__real@42f00000; max
    vmovss  xmm2, cs:__real@40a00000; min
    vmovss  xmm1, cs:__real@42700000; value
  }
  DCONST_DVARFLT_xanim_ladder_aim_rung_four_time = v71;
  DCONST_DVARFLT_xanim_physicsBonesUpdateRate = Dvar_RegisterFloat("xanim_physicsBonesUpdateRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Number of physics bones updates to run per second");
  DCONST_DVARINT_xanim_physicsMaxPositionSolverIterations = Dvar_RegisterInt("xanim_physicsMaxPositionSolverIterations", 5, 0, 100, 0x40004u, "Maximum number of physics position solver iterations to run per update");
  DCONST_DVARINT_xanim_physicsMaxSettlePositionSolverIterations = Dvar_RegisterInt("xanim_physicsMaxSettlePositionSolverIterations", 4, 0, 100, 0x40004u, "Maximum number of physics position solver iterations to run per settle update");
  DCONST_DVARINT_xanim_physicsMaxVelocitySolverIterations = Dvar_RegisterInt("xanim_physicsMaxVelocitySolverIterations", 3, 0, 100, 0x40004u, "Maximum number of physics velocity solver iterations to run per update");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  DCONST_DVARINT_xanim_physicsMaxSettleIterations = Dvar_RegisterInt("xanim_physicsMaxSettleIterations", 15, 0, 100, 0x40004u, "Maximum number of physics simulation updates used to settle physics bones when first created");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm11, cs:__real@3d4ccccd
  }
  DCONST_DVARFLT_xanim_physicsVelocityDamping = Dvar_RegisterFloat("xanim_physicsVelocityDamping", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Linear velocity damping factor applied per update");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v82 = Dvar_RegisterFloat("xanim_physicsAngularVelocityDamping", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Angular velocity damping factor applied per update");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@44480000; value
  }
  DCONST_DVARFLT_xanim_physicsAngularVelocityDamping = v82;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_xanim_physicsGravity = Dvar_RegisterFloat("NRKSORMLRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Gravity");
  DCONST_DVARBOOL_xanim_silenceParamWarn = Dvar_RegisterBool("xanim_silenceParamWarn", 1, 0x40004u, "Dvar to Disable Animation tree game parameter x has not been set.");
  DCONST_DVARBOOL_xanim_physicsForceSettle = Dvar_RegisterBool("xanim_physicsForceSettle", 0, 0x40004u, "Force settle every update (for performance debug)");
  __asm { vmovss  xmm1, cs:__real@3f59999a; value }
  DCONST_DVARBOOL_xanim_physicsNoiseEnable = Dvar_RegisterBool("xanim_physicsNoiseEnable", 1, 0x40004u, "Enable noise on physics bones.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm14, cs:__real@3f733333
  }
  DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing = Dvar_RegisterFloat("xanim_physicsNoiseAccelSmoothing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Noise acceleration smoothing.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v93 = Dvar_RegisterFloat("xanim_physicsAccelSmoothing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "World acceleration smoothing");
  __asm { vmovss  xmm3, cs:__real@461c4000; max }
  DCONST_DVARFLT_xanim_physicsAccelSmoothing = v93;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v97 = Dvar_RegisterFloat("xanim_physicsAccelScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "World acceleration scale (non gravity)");
  __asm
  {
    vmovss  xmm9, cs:__real@42480000
    vmovss  xmm3, cs:__real@461c4000; max
  }
  DCONST_DVARFLT_xanim_physicsAccelScale = v97;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v102 = Dvar_RegisterFloat("xanim_physicsMaxWorldAccel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum acceleration inherited from world movement");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DCONST_DVARFLT_xanim_physicsMaxWorldAccel = v102;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_physicsWorldAccelDeadZone = Dvar_RegisterFloat("xanim_physicsWorldAccelDeadZone", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum acceleration threshold for world movement");
  DCONST_DVARBOOL_xanim_physicsEnableCollisions = Dvar_RegisterBool("xanim_physicsEnableCollisions", 1, 0x40004u, "Enable collision detection");
  DCONST_DVARBOOL_xanim_physicsEnableSwingLimits = Dvar_RegisterBool("xanim_physicsEnableSwingLimits", 1, 0x40004u, "Enable joint swing limits");
  DCONST_DVARBOOL_xanim_physicsEnableTwistLimits = Dvar_RegisterBool("xanim_physicsEnableTwistLimits", 1, 0x40004u, "Enable joint twist limits");
  DCONST_DVARBOOL_xanim_physicsEnableSprings = Dvar_RegisterBool("xanim_physicsEnableSprings", 1, 0x40004u, "Enable joint springs");
  DCONST_DVARBOOL_xanim_physicsEnableMaxDistanceConstraint = Dvar_RegisterBool("xanim_physicsEnableMaxDistanceConstraint", 1, 0x40004u, "Enable max distance constraint");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  DCONST_DVARBOOL_xanim_physicsEnableInterpolation = Dvar_RegisterBool("xanim_physicsEnableInterpolation", 1, 0x40004u, "Enable interpolation of physics bone transorms");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm3; value
  }
  v109 = Dvar_RegisterFloat("xanim_physicsTwistStiffness", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Stiffness of joint twist constraint");
  __asm
  {
    vmovss  xmm3, cs:__real@404ccccd; max
    vmovss  xmm1, cs:__real@40490fd8; value
  }
  DCONST_DVARFLT_xanim_physicsTwistStiffness = v109;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v113 = Dvar_RegisterFloat("xanim_physicsMaxTwistAdjustment", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max adjustment applied by joint twist constraint");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  DCONST_DVARFLT_xanim_physicsMaxTwistAdjustment = v113;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm3; value
  }
  v117 = Dvar_RegisterFloat("xanim_physicsSwingStiffness", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Stiffness of joint swing constraint");
  __asm
  {
    vmovss  xmm3, cs:__real@404ccccd; max
    vmovss  xmm1, cs:__real@40490fd8; value
  }
  DCONST_DVARFLT_xanim_physicsSwingStiffness = v117;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v121 = Dvar_RegisterFloat("xanim_physicsMaxSwingAdjustment", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max adjustment applied by joint swing constraint");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  DCONST_DVARFLT_xanim_physicsMaxSwingAdjustment = v121;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v125 = Dvar_RegisterFloat("xanim_physicsMaxVelocity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum physics bone velocity");
  __asm { vmovss  xmm1, cs:__real@41000000; value }
  DCONST_DVARFLT_xanim_physicsMaxVelocity = v125;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_physicsMaxAngularVelocity = Dvar_RegisterFloat("xanim_physicsMaxAngularVelocity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum physics bone angular velocity");
  DCONST_DVARBOOL_xanim_physicsMaintainBindPoseTranslation = Dvar_RegisterBool("xanim_physicsMaintainBindPoseTranslation", 1, 0x40004u, "Ensure each physics bone maintains its local bind pose translation (prevents joints drifting apart)");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovss  xmm1, cs:__real@3dcccccd; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_physicsSettleVelocityThreshold = Dvar_RegisterFloat("xanim_physicsSettleVelocityThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Settle velocity threshold");
  DCONST_DVARBOOL_xanim_physicsDebugCollisions = Dvar_RegisterBool("xanim_physicsDebugCollisions", 0, 0x40004u, "Enable collision detection debug rendering");
  DCONST_DVARBOOL_xanim_physicsDebugCustomPinConstraints = Dvar_RegisterBool("xanim_physicsDebugCustomPinConstraints", 1, 0x40004u, "Enable debug render of custom pin constraints");
  __asm
  {
    vmovss  xmm8, cs:__real@41200000
    vmovss  xmm1, cs:__real@3c23d70a; value
  }
  DCONST_DVARINT_xanim_physicsAudioEventWaitTime = Dvar_RegisterInt("xanim_physicsAudioEventWaitTime", 3, 1, 100, 0x40004u, "Number of physics updates to wait before retriggering audio events");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v136 = Dvar_RegisterFloat("xanim_physicsAudioMinHitDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum intersection depth required to generate audio event");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vmovss  xmm1, cs:__real@3f800000; value
  }
  DCONST_DVARFLT_xanim_physicsAudioMinHitDistance = v136;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_xanim_physicsIdleVelocityScale = Dvar_RegisterFloat("xanim_physicsIdleVelocityScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Idle velocity scale (increases effect of idle weapon bob)");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v143 = Dvar_RegisterFloat("xanim_physicsIdleAngularVelocityThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Idle angular velocity threshold");
  __asm { vmovss  xmm3, cs:__real@3f800000; max }
  DCONST_DVARFLT_xanim_physicsIdleAngularVelocityThreshold = v143;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v147 = Dvar_RegisterFloat("xanim_physicsIdleVelocitySmoothing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Idle angular velocity smoothing");
  __asm
  {
    vmovss  xmm10, cs:__real@42c80000
    vmovss  xmm1, cs:__real@3ecccccd; value
  }
  DCONST_DVARFLT_xanim_physicsIdleVelocitySmoothing = v147;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm7, cs:__real@41a00000
  }
  DCONST_DVARFLT_xanim_physicsExtAngularAccelScale = Dvar_RegisterFloat("xanim_physicsExtAngularAccelScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scale factor applied to external angular acceleration after cap applied");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm15, xmm15, xmm15
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v157 = Dvar_RegisterFloat("xanim_physicsExtAngularAccelCap", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum external angular acceleration to apply to dynamic bones");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vmovss  xmm1, cs:__real@3e99999a; value
  }
  DCONST_DVARFLT_xanim_physicsExtAngularAccelCap = v157;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm11, cs:__real@3f800000
  }
  DCONST_DVARFLT_xanim_physicsExtVelocityScale = Dvar_RegisterFloat("xanim_physicsExtVelocityScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scale factor applied to external velocity after cap applied");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_xanim_physicsExtVelocitySmoothing = Dvar_RegisterFloat("xanim_physicsExtVelocitySmoothing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "External velocity smoothing");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  DCONST_DVARFLT_xanim_physicsExtVelocityCap = Dvar_RegisterFloat("xanim_physicsExtVelocityCap", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum external velocity to apply to dynamic bones");
  DCONST_DVARBOOL_xanim_physicsEnable = Dvar_RegisterBool("xanim_physicsEnable", 1, 0x40004u, "Enable bone physics");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_xanim_physicsGroundPlaneFriction = Dvar_RegisterFloat("xanim_physicsGroundPlaneFriction", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Strength of ground plane friction");
  DCONST_DVARBOOL_xanim_physicsDebugDrawGroundPlane = Dvar_RegisterBool("xanim_physicsDebugDrawGroundPlane", 1, 0x40004u, "Show ground plane when drawing dynamic bones");
  __asm
  {
    vmovss  xmm0, cs:__real@c2c80000
    vmovss  xmm1, cs:__real@40666666; x
    vmovss  xmm3, cs:__real@40733333; z
  }
  DCONST_DVARBOOL_xanim_trackingEnable = Dvar_RegisterBool("xanim_trackingEnable", 0, 0x40004u, "Dvar to enable BlackBox tracking of xanim plays.");
  __asm
  {
    vmovss  [rsp+0D8h+max], xmm10
    vmovss  dword ptr [rsp+0D8h+description], xmm0
    vmovss  xmm0, cs:__real@40866666
    vmovaps xmm2, xmm1; y
    vmovss  [rsp+0D8h+flags], xmm0
  }
  v176 = Dvar_RegisterVec4("xanim_ik_antislide_height_thresholds", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, descriptionb, max, 0x40004u, "IK anti-slide height thresholds for walk, run, and sprint states");
  __asm
  {
    vmovss  xmm6, cs:__real@44fa0000
    vmovss  xmm3, cs:__real@43160000; z
    vmovss  xmm2, cs:__real@43960000; y
  }
  DCONST_DVARVEC4_xanim_ik_antislide_height_thresholds = v176;
  __asm
  {
    vmovss  [rsp+0D8h+max], xmm6
    vmovss  dword ptr [rsp+0D8h+description], xmm15
    vmovss  [rsp+0D8h+flags], xmm10
    vmovss  xmm1, cs:__real@43fa0000; x
  }
  v181 = Dvar_RegisterVec4("xanim_ik_antislide_blendoutTimes", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, descriptionc, maxa, 0x40004u, "IK anti-slide blendout times for walk, run, and sprint states");
  __asm { vmovss  xmm1, cs:__real@40f00000; value }
  DCONST_DVARVEC4_xanim_ik_antislide_blendoutTimes = v181;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v185 = Dvar_RegisterFloat("xanim_ik_antislide_max_distance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide max absolute distance separating anim target position vs world-locked target position.");
  __asm { vmovss  xmm1, cs:__real@40900000; value }
  DCONST_DVARFLT_xanim_ik_antislide_max_distance = v185;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v189 = Dvar_RegisterFloat("xanim_ik_antislide_max_distance_crouch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide max absolute distance separating anim target position vs world-locked target position when crouched.");
  __asm { vmovss  xmm1, cs:__real@41980000; value }
  DCONST_DVARFLT_xanim_ik_antislide_max_distance_crouch = v189;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v193 = Dvar_RegisterFloat("xanim_ik_antislide_max_distance_knee_target", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide max distance between knee and world-locked target position.");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  DCONST_DVARFLT_xanim_ik_antislide_max_distance_knee_target = v193;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v197 = Dvar_RegisterFloat("xanim_ik_antislide_max_angle_knee_target", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide max angle between knee and world-locked target position.");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  DCONST_DVARFLT_xanim_ik_antislide_max_angle_knee_target = v197;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v201 = Dvar_RegisterFloat("xanim_ik_antislide_adjust_angle_knee_target", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide max angle to rotate the hip to align it with the knee and the world-locked target.");
  __asm { vmovss  xmm1, cs:__real@3ca3d70a; value }
  DCONST_DVARFLT_xanim_ik_antislide_adjust_angle_knee_target = v201;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v205 = Dvar_RegisterFloat("xanim_ik_antislide_slope_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide threshold to blendout the world-locked targetif the player is on a slope.");
  __asm { vmovss  xmm1, cs:__real@41e00000; value }
  DCONST_DVARFLT_xanim_ik_antislide_slope_threshold = v205;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold = Dvar_RegisterFloat("xanim_ik_antislide_crouch_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide height threshold when the character is crouched.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v212 = Dvar_RegisterFloat("xanim_ik_antislide_move_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide distance threshold to keep the system running even tough the character stopped moving.");
  __asm { vmovss  xmm3, cs:__real@42b40000; max }
  DCONST_DVARFLT_xanim_ik_antislide_move_threshold = v212;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm1, cs:__real@3f350481; value
  }
  v216 = Dvar_RegisterFloat("xanim_ik_antislide_strafe_cosine_angle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide strafe cosine angle to decide which foot to unlock when start moving.");
  __asm { vmovss  xmm1, cs:__real@402ccccd; value }
  DCONST_DVARFLT_xanim_ik_antislide_strafe_cosine_angle = v216;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_ik_antislide_capsule_radius = Dvar_RegisterFloat("xanim_ik_antislide_capsule_radius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "IK anti-slide leg capsule radius to test for collision between the legs.");
  DCONST_DVARINT_xanim_ik_antislide_collision_blendout_time = Dvar_RegisterInt("xanim_ik_antislide_collision_blendout_time", 400, 0, 1000, 0x40004u, "IK anti-slide blendout to unlock the foot when legs are colliding between each other.");
  DCONST_DVARBOOL_xanim_ik_antislide_collision_show_capsules = Dvar_RegisterBool("xanim_ik_antislide_collision_show_capsules", 0, 0x40004u, "Show IK anti-slide collision capsules for legs.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v223 = Dvar_RegisterFloat("xanim_ik_antislide_floatTrackThresholdFraction", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Normalized translation threshold after which a foot is considered to be locked.");
  __asm { vmovss  xmm3, cs:__real@41f00000; max }
  DCONST_DVARFLT_xanim_ik_antislide_floatTrackThresholdFraction = v223;
  __asm
  {
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm8; value
  }
  v227 = Dvar_RegisterFloat("xanim_ik_antislide_floatTrackRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Range of antislide bone translation along positive X and Y axes.");
  __asm
  {
    vmovss  xmm0, cs:__real@c1a00000
    vmovss  xmm1, cs:__real@40c00000; x
  }
  DCONST_DVARFLT_xanim_ik_antislide_floatTrackRange = v227;
  __asm
  {
    vmovss  dword ptr [rsp+0D8h+description], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vmovaps xmm2, xmm11; y
    vmovss  [rsp+0D8h+flags], xmm0
  }
  DCONST_DVARVEC3_xanim_ik_antislide_foot_pin_offset = Dvar_RegisterVec3("xanim_ik_antislide_foot_pin_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, descriptiond, 0x40004u, "Location of antislide pin point relative to ankle bone (e.g. ball of foot)");
  DCONST_DVARBOOL_xanim_ik_antislide_enable_foot_pin_offset = Dvar_RegisterBool("xanim_ik_antislide_enable_foot_pin_offset", 1, 0x40004u, "Enable antislide foot pin offset adjustment when using float tracks");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  DCONST_DVARBOOL_xanim_ik_antislide_fast_blendout_enabled = Dvar_RegisterBool("xanim_ik_antislide_fast_blendout_enabled", 1, 0x40004u, "Enable faster blend out if distance between world locked target position and anim target position exceeds threshold.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_ik_antislide_fast_blendout_threshold = Dvar_RegisterFloat("xanim_ik_antislide_fast_blendout_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance threshold used to trigger faster blend out, relative to current anti-slide max distance.");
  DCONST_DVARINT_xanim_ik_antislide_fast_blendout_time = Dvar_RegisterInt("xanim_ik_antislide_fast_blendout_time", 200, 0, 2000, 0x40004u, "Reduced blend out time to use for locked foot that has exceeded max distance.");
  DVARBOOL_xanim_ik_antislide_enable = Dvar_RegisterBool("TMTPTQNMN", 1, 0x40u, "Enable IK anti-slide anim node.");
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; value
    vmovss  xmm3, cs:__real@40800000; max
  }
  DCONST_DVARBOOL_xanim_custom_node_instant_update = Dvar_RegisterBool("xanim_custom_node_instant_update", 1, 0x40004u, "Enable immediate update/initialization of custom anim nodes when they are created.");
  __asm { vmovaps xmm2, xmm1; min }
  DCONST_DVARFLT_xanim_lodOverride = Dvar_RegisterFloat("xanim_lodOverride", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Force xanim LOD level for all entities.");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DCONST_DVARBOOL_xanim_lodEnable = Dvar_RegisterBool("xanim_lodEnable", 1, 0x40004u, "Enable xanim LOD culling for client entities.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v241 = Dvar_RegisterFloat("xanim_lodHysteresisMaxPercent", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum LOD distance change as fraction of distance between adjacent LOD levels.");
  __asm { vmovss  xmm1, cs:__real@43480000; value }
  DCONST_DVARFLT_xanim_lodHysteresisMaxPercent = v241;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_lodHysteresisDistance = Dvar_RegisterFloat("xanim_lodHysteresisDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum LOD distance change before transitioning to an adjacent LOD level.");
  __asm { vmovss  xmm1, cs:__real@3e8f5c29; value }
  DCONST_DVARINT_xanim_lodBlendTime = Dvar_RegisterInt("xanim_lodBlendTime", 120, 0, 3000, 0x40004u, "Duration of blends between xanim LOD transitions, in milliseconds.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_xanim_lodLerpFactor = Dvar_RegisterFloat("xanim_lodLerpFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Lerp factor to use when transitioning between LODS.");
  DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget = Dvar_RegisterInt("xanim_proceduralBonesDebugMemoryBudget", -1, -1, 512, 0x40004u, "Debug memory budget for procedural bones allocator");
  DVARBOOL_dobj_assert_on_root_meld_failure = Dvar_RegisterBool("LPMMPQNMLQ", 0, 0x40u, "Asserts if dobj root meld operation fails for a model when this dvar is set to true. Otherwise a warning message is added to the log.");
  DVARBOOL_dobj_hide_models_with_root_meld_failure = Dvar_RegisterBool("NTTPTKNNKM", 0, 0, "Hide models where the root meld operation fails. Note that in non-cheats builds, the model is always hidden when the root meld operation fails.");
  DVARBOOL_dobj_assert_on_free_submitted = Dvar_RegisterBool("MPNNKNTRMK", 1, 0x40u, "Asserts if dobj is freed while the renderer frontend is holding a reference.");
  DVARBOOL_dobj_assert_on_free_submitted_dump = Dvar_RegisterBool("NQRTQPSKRT", 0, 0x40u, "Asserts if dobj is freed while the renderer frontend is holding a reference, even in non-development builds.");
  DCONST_DVARBOOL_xanim_silence_parse_parameter_validation = Dvar_RegisterBool("xanim_silence_parse_parameter_validation", 0, 0x40004u, "Silence error when the number of parameters does not match the registered list for AI( after gold build. )");
  __asm { vmovaps xmm15, [rsp+0D8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm14, xmmword ptr [r11-78h]
  }
  Dvar_EndPermanentRegistration();
}

/*
==============
XAnimResetAnimMap
==============
*/
void XAnimResetAnimMap(const DObj *obj)
{
  bool includeClientBones; 
  unsigned int ClientBoneOffset; 
  XModelNameMap modelMap; 

  modelMap.initialized = 0;
  Profile_Begin(451);
  includeClientBones = DObjHasClientFlag(obj);
  ClientBoneOffset = DObjGetClientBoneOffset(obj);
  XAnimInitModelMap(obj->models, obj->numModels, &modelMap, ClientBoneOffset, includeClientBones);
  XAnimResetAnimMap_r(&modelMap, obj->tree->children);
  Profile_EndInternal(NULL);
}

/*
==============
XAnimResetAnimMap_r
==============
*/
void XAnimResetAnimMap_r(XModelNameMap *modelMap, unsigned __int16 infoIndex)
{
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 children; 
  XAnimInfo *v6; 
  XAnimInfo *AnimInfo; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4402, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  children = NonRootAnimInfo->children;
  if ( NonRootAnimInfo->animToModel )
  {
    if ( children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4407, ASSERT_TYPE_ASSERT, "(!info->children)", (const char *)&queryFormat, "!info->children") )
      __debugbreak();
    if ( !XAnimGetAnimInfo(infoIndex)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4386, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( infoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
      __debugbreak();
    v6 = GetNonRootAnimInfo(infoIndex);
    v6->animToModel = XAnimGetAnimMap(v6->parts, modelMap, v6->animToModel);
  }
  else
  {
    for ( ; children; children = AnimInfo->next )
    {
      AnimInfo = XAnimGetAnimInfo(children);
      if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4417, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
        __debugbreak();
      XAnimResetAnimMap_r(modelMap, children);
    }
  }
}

/*
==============
XAnimResetCheckFatalErrorFlag
==============
*/
void XAnimResetCheckFatalErrorFlag(void)
{
  s_fatalXAnimLoadError = 0;
  s_fatalXAnimErrorCheckThread = 28;
}

/*
==============
XAnimResetSyncGroupChildren
==============
*/
void XAnimResetSyncGroupChildren(XAnimTree *tree, const unsigned __int16 parentInfoIndex, const XAnimSyncGroupID currentSyncGroup, const XAnimSyncGroupID newSyncGroup)
{
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 i; 
  XAnimInfo *v10; 

  v4 = newSyncGroup;
  v5 = currentSyncGroup;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2192, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2193, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( v4 > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2194, ASSERT_TYPE_ASSERT, "(newSyncGroup <= XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "newSyncGroup <= XAnimSyncGroupID::COUNT") )
    __debugbreak();
  if ( v5 > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2195, ASSERT_TYPE_ASSERT, "(currentSyncGroup <= XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "currentSyncGroup <= XAnimSyncGroupID::COUNT") )
    __debugbreak();
  if ( !parentInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2196, ASSERT_TYPE_ASSERT, "(parentInfoIndex)", (const char *)&queryFormat, "parentInfoIndex") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(parentInfoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2200, ASSERT_TYPE_ASSERT, "(parentInfo->inuse)", (const char *)&queryFormat, "parentInfo->inuse") )
    __debugbreak();
  for ( i = AnimInfo->children; i; i = v10->next )
  {
    v10 = XAnimGetAnimInfo(i);
    XAnimSetSyncGroup(tree, i, (const XAnimSyncGroupID)v5, (const XAnimSyncGroupID)v4);
  }
}

/*
==============
XAnimResetTime
==============
*/
void XAnimResetTime(unsigned __int16 infoIndex)
{
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 i; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  *(_QWORD *)&NonRootAnimInfo->state.currentAnimTime = 0i64;
  *(_DWORD *)&NonRootAnimInfo->state.cycleCount = 0;
  NonRootAnimInfo->notifyIndex = -1;
  for ( i = XAnimGetAnimInfo(infoIndex)->children; i; i = XAnimGetAnimInfo(i)->next )
    XAnimResetTime(i);
}

/*
==============
XAnimRestart
==============
*/

__int64 __fastcall XAnimRestart(XAnimTree *tree, unsigned int graftAnimIndex, unsigned __int16 infoIndex, double goalTime)
{
  unsigned __int16 parent; 
  bool i; 
  XAnimInfo *AnimInfo; 
  __int64 animIndex; 
  const XAnim_s *SubTreeAnims; 
  XAnimInfo *v15; 
  unsigned __int16 v16; 
  XAnimInfo *v17; 
  __int64 result; 
  XAnimInfo *v19; 
  __int64 v23; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8314, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8315, ASSERT_TYPE_ASSERT, "(infoIndex != 0)", (const char *)&queryFormat, "infoIndex != 0") )
    __debugbreak();
  parent = infoIndex;
  for ( i = infoIndex == 0; !i; i = parent == 0 )
  {
    if ( !parent )
    {
      LODWORD(v23) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 285, ASSERT_TYPE_ASSERT, "( infoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "infoIndex", "0", v23, 0i64) )
        __debugbreak();
    }
    AnimInfo = XAnimGetAnimInfo(parent);
    if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8322, ASSERT_TYPE_ASSERT, "(parentInfo->inuse)", (const char *)&queryFormat, "parentInfo->inuse") )
      __debugbreak();
    animIndex = AnimInfo->animIndex;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8327, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( (unsigned int)animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8328, ASSERT_TYPE_ASSERT, "(parentAnimIndex < anims->size)", (const char *)&queryFormat, "parentAnimIndex < anims->size") )
      __debugbreak();
    if ( SubTreeAnims->entries[animIndex].numAnims && ((__int64)SubTreeAnims->entries[animIndex].parts & 4) != 0 )
    {
      __asm { vmovaps xmm2, xmm6; goalTime }
      XAnimInitTime(tree, parent, *(double *)&_XMM2);
      v15 = XAnimGetAnimInfo(infoIndex);
      v16 = XAnimGetInfoIndex(tree, graftAnimIndex, (const XAnimSubTreeID)v15->subTreeID, v15->animIndex);
      if ( v16 )
        infoIndex = v16;
      v17 = XAnimGetAnimInfo(infoIndex);
      XAnimCustomNodeRestart(tree, v17);
      result = infoIndex;
      goto LABEL_35;
    }
    parent = AnimInfo->parent;
  }
  v19 = XAnimGetAnimInfo(infoIndex);
  if ( !v19->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8350, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( IsInfoInstantFullRestart(v19) )
  {
    __asm { vmovaps xmm2, xmm6; goalTime }
    result = XAnimInitTimeFullRestart(tree, infoIndex, *(double *)&_XMM2);
  }
  else if ( v19->animToModel )
  {
    __asm { vmovaps xmm2, xmm6; goalTime }
    result = XAnimInitTime(tree, infoIndex, *(double *)&_XMM2);
  }
  else
  {
    XAnimCustomNodeRestart(tree, v19);
    result = infoIndex;
  }
LABEL_35:
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return result;
}

/*
==============
XAnimSetAnimCurve
==============
*/
void XAnimSetAnimCurve(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const XAnimCurveID curveID)
{
  unsigned __int16 InfoIndex; 
  XAnimInfo *NonRootAnimInfo; 

  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8577, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", (unsigned __int8)curveID, 42) )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    NonRootAnimInfo = GetNonRootAnimInfo(InfoIndex);
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8586, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
    XAnimAssertAnimIndex(tree, subTreeID, animIndex);
    NonRootAnimInfo->state.curveID = curveID;
  }
}

/*
==============
XAnimSetAnimRate
==============
*/
void XAnimSetAnimRate(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float rate)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8553, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm { vmovss  xmm2, [rsp+38h+rate]; rate }
    XAnimSetAnimRateNode(tree, InfoIndex, *(float *)&_XMM2);
  }
}

/*
==============
XAnimSetAnimRateNode
==============
*/

void __fastcall XAnimSetAnimRateNode(XAnimTree *tree, unsigned __int16 infoIndex, double rate)
{
  const dvar_t *v10; 
  const char *AnimDebugName; 
  double v15; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8531, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  _RBX = GetNonRootAnimInfo(infoIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8534, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8535, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( _RBX->notifyName )
    __asm { vcomiss xmm7, xmm6 }
  if ( _RBX->notifyType )
    __asm { vcomiss xmm7, xmm6 }
  v10 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
  if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && (_RBX->state.flags & 0x10) != 0 )
  {
    __asm { vucomiss xmm7, xmm6 }
    if ( (_RBX->state.flags & 0x10) != 0 )
    {
      __asm { vcvtss2sd xmm6, xmm7, xmm7 }
      AnimDebugName = XAnimGetAnimDebugName(tree->anims, _RBX->animIndex);
      __asm { vmovsd  [rsp+68h+var_30], xmm6 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8543, ASSERT_TYPE_ASSERT, "(rate == 0.0f)", "%s\n\tXAnimSetAnimRate '%s': rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "rate == 0.0f", AnimDebugName, v15) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rbx+40h], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
XAnimSetChildGoalWeights
==============
*/
void XAnimSetChildGoalWeights(const DObj *obj, XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 children; 
  unsigned __int8 *v26; 
  __int64 v27; 
  float fmt; 
  __int64 v33; 
  float v34; 
  __int64 v35; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8024, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, [rsp+0A8h+goalWeight]
    vxorps  xmm6, xmm6, xmm6
  }
  if ( notifyName )
    __asm { vucomiss xmm7, xmm6 }
  if ( notifyType )
    __asm { vucomiss xmm7, xmm6 }
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm7, xmm0
  }
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8036, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8037, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v33) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8038, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v33, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    children = GetNonRootAnimInfo(InfoIndex)->children;
    if ( children )
    {
      __asm
      {
        vmovss  xmm6, [rsp+0A8h+rate]
        vmovaps [rsp+0A8h+var_58], xmm8
        vmovss  xmm8, [rsp+0A8h+goalTime]
      }
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v27 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v27 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v35) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v33) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v33, v35) )
              __debugbreak();
          }
          v26 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v27];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v35) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v33) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v33, v35) )
              __debugbreak();
          }
          v26 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        __asm
        {
          vmovss  [rsp+0A8h+var_80], xmm6
          vmovaps xmm3, xmm7; goalWeight
          vmovss  dword ptr [rsp+0A8h+fmt], xmm8
        }
        XAnimSetGoalWeightNode(obj, tree, children, *(float *)&_XMM3, fmt, v34, notifyName, notifyType, curveID, cachedModelNameMap);
        children = *((_WORD *)v26 + 5);
      }
      while ( children );
      __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
XAnimSetChildTimes
==============
*/
void XAnimSetChildTimes(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  __int64 v9; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  bool v15; 
  bool v16; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 children; 
  unsigned int v24; 
  const XAnim_s *v25; 
  XAnimEntry *v26; 
  const char *AnimDebugName; 
  XAnimParts *parts; 
  int v30; 
  XAnimParts *v31; 
  int v32; 
  const char *v33; 
  unsigned __int8 flags; 
  __int64 v39; 
  double v40; 
  __int64 v41; 
  double v42; 
  double v43; 
  __int64 v44; 

  v9 = animIndex;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8068, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v9);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8072, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v9 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8073, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, v9);
  if ( InfoIndex )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
    }
    v15 = SubTreeAnims->entries[v9].numAnims == 0;
    if ( !SubTreeAnims->entries[v9].numAnims )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8082, ASSERT_TYPE_ASSERT, "(!IsLeafNode( anim ))", (const char *)&queryFormat, "!IsLeafNode( anim )");
      v15 = !v16;
      if ( v16 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, [rsp+0A8h+time]
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm7, xmm0
      vcomiss xmm7, xmm8
    }
    if ( !v15 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8084, ASSERT_TYPE_ASSERT, "( ( !(time < 0.0f) && time <= 1.0f ) )", "( time ) = %g", v40) )
        __debugbreak();
    }
    NonRootAnimInfo = GetNonRootAnimInfo(InfoIndex);
    children = NonRootAnimInfo->children;
    if ( children )
    {
      __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v24 = 32 * (children & 0x7FFF);
          if ( v24 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v41) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v39) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v39, v41) )
              __debugbreak();
          }
          _RDI = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v24];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v41) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v39) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v39, v41) )
              __debugbreak();
          }
          _RDI = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        v25 = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)_RDI + 8));
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8095, ASSERT_TYPE_ASSERT, "(childAnims)", (const char *)&queryFormat, "childAnims") )
          __debugbreak();
        v26 = &v25->entries[*((unsigned __int16 *)_RDI + 3)];
        if ( v26->numAnims )
        {
          __asm { vcvtss2sd xmm6, xmm7, xmm7 }
          AnimDebugName = XAnimGetAnimDebugName(v25, *((unsigned __int16 *)_RDI + 3));
          __asm { vmovsd  [rsp+0A8h+var_70], xmm6 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8098, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", "%s\n\tAnim name: '%s', time: %f", "IsLeafNode( anim )", AnimDebugName, v42) )
            __debugbreak();
          if ( v26->numAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
            __debugbreak();
        }
        parts = v26->parts;
        if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
          __debugbreak();
        v30 = 0;
        if ( (parts->flags & 1) != 0 )
        {
          __asm { vcomiss xmm7, xmm8 }
          LOBYTE(v30) = 0;
        }
        else
        {
          __asm { vcomiss xmm7, xmm8 }
          LOBYTE(v30) = (parts->flags & 1) == 0;
        }
        if ( !v30 )
        {
          if ( v26->numAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
            __debugbreak();
          v31 = v26->parts;
          if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
            __debugbreak();
          v32 = v31->flags & 1;
          v33 = XAnimGetAnimDebugName(v25, *((unsigned __int16 *)_RDI + 3));
          LODWORD(v44) = v32;
          __asm
          {
            vcvtss2sd xmm0, xmm7, xmm7
            vmovsd  [rsp+0A8h+var_70], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8099, ASSERT_TYPE_ASSERT, "((XAnimGetPartsInternal( anim )->flags & ANIM_LOOP) ? (time < 1.0f) : (time <= 1.0f))", "%s\n\tname: '%s', time: %f, loop: %d", "(XAnimGetPartsInternal( anim )->flags & ANIM_LOOP) ? (time < 1.0f) : (time <= 1.0f)", v33, v43, v44) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi+28h], xmm7 }
        *((_WORD *)_RDI + 24) = 0;
        flags = NonRootAnimInfo->state.flags;
        if ( (flags & 0x10) != 0 )
        {
          if ( (flags & 0x40) == 0 )
          {
            __asm { vmovss  dword ptr [rdi+2Ch], xmm7 }
            *((_WORD *)_RDI + 25) = 0;
            NonRootAnimInfo->state.flags |= 0x40u;
          }
        }
        else
        {
          __asm { vmovss  dword ptr [rdi+2Ch], xmm7 }
          *((_WORD *)_RDI + 25) = 0;
        }
        *((_WORD *)_RDI + 1) = -1;
        children = *((_WORD *)_RDI + 5);
      }
      while ( children );
      __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm8, [rsp+0A8h+var_58]
    }
  }
}

/*
==============
XAnimSetClientLod
==============
*/
void XAnimSetClientLod(const DObj *obj, unsigned __int8 lod)
{
  XAnimTree *tree; 
  const dvar_t *v5; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9686, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9687, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    v5 = DCONST_DVARINT_xanim_lodBlendTime;
    if ( !DCONST_DVARINT_xanim_lodBlendTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodBlendTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    XAnimTreeSetGoalLod(tree, lod, v5->current.integer);
  }
}

/*
==============
XAnimSetClientLodByDistance
==============
*/

void __fastcall XAnimSetClientLodByDistance(const DObj *obj, double distance)
{
  unsigned __int8 LodForDistance; 
  XAnimTree *tree; 
  const dvar_t *v7; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  LodForDistance = XAnimGetLodForDistance(obj, *(float *)&distance);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9686, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9687, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    v7 = DCONST_DVARINT_xanim_lodBlendTime;
    if ( !DCONST_DVARINT_xanim_lodBlendTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodBlendTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    XAnimTreeSetGoalLod(tree, LodForDistance, v7->current.integer);
    tree = obj->tree;
  }
  if ( tree )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@477fff00; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcvttss2si eax, xmm0 }
    tree->lodState.distance = _EAX;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
XAnimSetClientNotifyFlag
==============
*/
void XAnimSetClientNotifyFlag(XAnimTree *animTree, bool clientNotifiesEnabled)
{
  if ( animTree )
  {
    animTree->clientNotifyEnabled = clientNotifiesEnabled;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9463, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    MEMORY[0x19] = clientNotifiesEnabled;
  }
}

/*
==============
XAnimSetCompleteGoalWeight
==============
*/
__int64 XAnimSetCompleteGoalWeight(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v23; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v30; 
  __int64 result; 
  float fmt; 
  XModelNameMap *modelNameMap; 
  float modelNameMapa; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8799, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+98h+goalWeight]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  if ( notifyType )
    __asm { vucomiss xmm6, xmm7 }
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm0
  }
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8807, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(modelNameMap) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8811, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", modelNameMap, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  v23 = InfoIndex;
  __asm { vmovss  xmm7, [rsp+98h+goalTime] }
  if ( InfoIndex )
  {
    if ( bRestart )
    {
      __asm { vmovaps xmm3, xmm7; goalTime }
      v23 = XAnimRestart(tree, graftAnimIndex, InfoIndex, *(double *)&_XMM3);
    }
  }
  else
  {
    v23 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, cachedModelNameMap);
    AnimInfo = XAnimGetAnimInfo(v23);
    *(_QWORD *)&AnimInfo->state.currentAnimTime = 0i64;
    *(_QWORD *)&AnimInfo->state.cycleCount = 0i64;
    *(_QWORD *)&AnimInfo->state.goalWeight = 0i64;
    *(_QWORD *)&AnimInfo->state.rate = 0i64;
    *(_QWORD *)&AnimInfo->state.startWeight = 0i64;
    AnimInfo->notifyName = 0;
    AnimInfo->notifyType = 0;
    *(_DWORD *)&AnimInfo->notifyChild = -65536;
    AnimInfo->subTreeID = subTreeID;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
      AnimInfo->state.flags |= 8u;
  }
  __asm
  {
    vmovss  xmm0, [rsp+98h+rate]
    vmovss  dword ptr [rsp+98h+modelNameMap], xmm0
    vmovaps xmm3, xmm6; goalWeight
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  v30 = XAnimSetCompleteGoalWeightNode(obj, tree, v23, *(float *)&_XMM3, fmt, modelNameMapa, notifyName, notifyType, curveID, cachedModelNameMap);
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  result = v30;
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
  return result;
}

/*
==============
XAnimSetCompleteGoalWeightKnob
==============
*/
int XAnimSetCompleteGoalWeightKnob(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v22; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  XModelNameMap *modelNameMap; 
  float goalWeighta; 
  float goalTimea; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7245, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+98h+goalWeight]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  __asm
  {
    vmovss  xmm3, cs:__real@3a83126f
    vcomiss xmm6, xmm3
  }
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7252, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(modelNameMap) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7256, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", modelNameMap, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  v22 = InfoIndex;
  __asm { vmovss  xmm7, [rsp+98h+goalTime] }
  if ( InfoIndex )
  {
    if ( bRestart )
    {
      __asm { vmovaps xmm3, xmm7; goalTime }
      v22 = XAnimRestart(tree, graftAnimIndex, InfoIndex, *(double *)&_XMM3);
    }
  }
  else
  {
    v22 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, NULL);
    AnimInfo = XAnimGetAnimInfo(v22);
    *(_QWORD *)&AnimInfo->state.currentAnimTime = 0i64;
    *(_QWORD *)&AnimInfo->state.cycleCount = 0i64;
    *(_QWORD *)&AnimInfo->state.goalWeight = 0i64;
    *(_QWORD *)&AnimInfo->state.rate = 0i64;
    *(_QWORD *)&AnimInfo->state.startWeight = 0i64;
    AnimInfo->notifyName = 0;
    AnimInfo->notifyType = 0;
    *(_DWORD *)&AnimInfo->notifyChild = -65536;
    AnimInfo->subTreeID = subTreeID;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
      AnimInfo->state.flags |= 8u;
  }
  __asm
  {
    vmovaps xmm3, xmm7; goalTime
    vmovaps xmm2, xmm6; goalWeight
  }
  XAnimClearGoalWeightKnobInternal(tree, v22, *(double *)&_XMM2, *(double *)&_XMM3, curveID);
  __asm
  {
    vmovss  xmm0, [rsp+98h+rate]
    vmovss  [rsp+98h+goalTime], xmm0
    vmovaps xmm3, xmm6
    vmovss  [rsp+98h+goalWeight], xmm7
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
  return XAnimSetCompleteGoalWeightNode(obj, tree, v22, *(float *)&_XMM3, goalWeighta, goalTimea, notifyName, 0, curveID, NULL);
}

/*
==============
XAnimSetCompleteGoalWeightKnobAll
==============
*/
__int64 XAnimSetCompleteGoalWeightKnobAll(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const XAnimSubTreeID rootSubTreeID, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, int bRestart, const XAnimCurveID curveID)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 parent; 
  unsigned __int8 *v26; 
  unsigned int v27; 
  __int64 result; 
  float fmt; 
  float fmta; 
  float v37; 
  __int64 v38; 
  float v39; 
  float v40; 
  __int64 v41; 
  unsigned int curveIDa; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  if ( !graftAnimIndex && animIndex == rootIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7335, ASSERT_TYPE_ASSERT, "((graftAnimIndex != 0) || (animIndex != rootIndex))", (const char *)&queryFormat, "(graftAnimIndex != XANIM_DEFAULT_GRAFT_ANIM_INDEX) || (animIndex != rootIndex)") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7336, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+98h+rate]
    vmovss  xmm6, [rsp+98h+goalTime]
    vmovss  dword ptr [rsp+98h+var_68], xmm0
    vmovss  xmm0, [rsp+98h+goalWeight]
    vmovss  [rsp+98h+var_70], xmm6
    vmovss  dword ptr [rsp+98h+fmt], xmm0
  }
  curveIDa = XAnimSetGoalWeightKnob(obj, graftAnimIndex, subTreeID, animIndex, fmt, v37, v40, notifyName, bRestart, curveID);
  Profile_Begin(456);
  tree = obj->tree;
  XAnimAssertGraftAnimIndex(obj->tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, rootSubTreeID, rootIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v41) = 42;
    LODWORD(v38) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7347, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v38, v41) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( !InfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7351, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  parent = XAnimGetAnimInfo(InfoIndex)->parent;
  if ( parent )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    while ( 1 )
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v27 = 32 * (parent & 0x7FFF);
        if ( v27 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v41) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v38) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v38, v41) )
            __debugbreak();
        }
        v26 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v27];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v41) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v38) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v38, v41) )
            __debugbreak();
        }
        v26 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
      }
      if ( *((unsigned __int16 *)v26 + 3) == rootIndex && *((_WORD *)v26 + 8) == rootSubTreeID )
        break;
      if ( bRestart )
      {
        __asm { vmovaps xmm3, xmm6; goalTime }
        parent = XAnimRestart(tree, graftAnimIndex, parent, *(double *)&_XMM3);
      }
      __asm
      {
        vmovaps xmm3, xmm6; goalTime
        vmovaps xmm2, xmm7; goalWeight
      }
      XAnimClearGoalWeightKnobInternal(tree, parent, *(double *)&_XMM2, *(double *)&_XMM3, curveID);
      __asm
      {
        vmovss  [rsp+98h+var_70], xmm7
        vmovaps xmm3, xmm7; goalWeight
        vmovss  dword ptr [rsp+98h+fmt], xmm6
      }
      XAnimSetCompleteGoalWeightNode(obj, tree, parent, *(float *)&_XMM3, fmta, v39, (scr_string_t)0, 0, curveID, NULL);
      parent = XAnimGetAnimInfo(parent)->parent;
      if ( !parent )
        goto LABEL_30;
    }
    Profile_EndInternal(NULL);
    result = curveIDa;
  }
  else
  {
LABEL_30:
    Profile_EndInternal(NULL);
    result = 1i64;
  }
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_48]
    vmovaps xmm6, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
XAnimSetCompleteGoalWeightNode
==============
*/
__int64 XAnimSetCompleteGoalWeightNode(const DObj *obj, XAnimTree *tree, unsigned __int16 infoIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  unsigned __int16 parent; 
  __int64 v21; 
  bool v22; 
  unsigned int v24; 
  __int64 result; 
  float fmt; 
  float fmta; 
  float v33; 
  __int64 v34; 
  float v35; 
  __int64 v36; 
  char v40; 
  unsigned int v41; 

  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rate]
    vmovss  [rsp+0A8h+var_80], xmm0
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovss  xmm8, [rsp+0A8h+goalTime]
    vmovss  dword ptr [rsp+0A8h+fmt], xmm8
  }
  v41 = XAnimSetGoalWeightNode(obj, tree, infoIndex, goalWeight, fmt, v33, notifyName, notifyType, curveID, modelNameMap);
  parent = XAnimGetAnimInfo(infoIndex)->parent;
  if ( parent )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps [rsp+0A8h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v24 = 32 * (parent & 0x7FFF);
        if ( v24 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v36) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v34) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v34, v36) )
            __debugbreak();
        }
        v22 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v24] == NULL;
        _RCX = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v24];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v36) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v34) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v34, v36) )
            __debugbreak();
        }
        v21 = parent;
        v22 = &g_xanimMemoryGlobals.infoPool[v21] == NULL;
        _RCX = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[v21];
      }
      __asm { vucomiss xmm7, dword ptr [rcx+38h] }
      if ( v22 )
      {
        __asm
        {
          vmovss  [rsp+0A8h+var_80], xmm6
          vmovaps xmm3, xmm6; goalWeight
          vmovss  dword ptr [rsp+0A8h+fmt], xmm8
        }
        XAnimSetGoalWeightNode(obj, tree, parent, *(float *)&_XMM3, fmta, v35, (scr_string_t)0, 0, curveID, modelNameMap);
      }
      parent = XAnimGetAnimInfo(parent)->parent;
    }
    while ( parent );
    result = v41;
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
  else
  {
    result = v41;
  }
  _R11 = &v40;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
  return result;
}

/*
==============
XAnimSetCompleteGoalWeightRel
==============
*/
__int64 XAnimSetCompleteGoalWeightRel(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v27; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v34; 
  unsigned __int16 parent; 
  unsigned int v38; 
  int v39; 
  __int64 result; 
  float fmt; 
  float fmta; 
  XModelNameMap *modelNameMap; 
  float modelNameMapb; 
  XModelNameMap *modelNameMapa; 
  float modelNameMapc; 
  __int64 v52; 
  char v55; 
  void *retaddr; 
  int curveIDa; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8841, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+0A8h+goalWeight]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  if ( notifyType )
    __asm { vucomiss xmm6, xmm7 }
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm0
  }
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8849, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(modelNameMap) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8853, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", modelNameMap, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  v27 = InfoIndex;
  __asm { vmovss  xmm8, [rsp+0A8h+goalTime] }
  if ( InfoIndex )
  {
    if ( bRestart )
    {
      __asm { vmovaps xmm3, xmm8; goalTime }
      v27 = XAnimRestart(tree, graftAnimIndex, InfoIndex, *(double *)&_XMM3);
    }
  }
  else
  {
    v27 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, cachedModelNameMap);
    AnimInfo = XAnimGetAnimInfo(v27);
    *(_QWORD *)&AnimInfo->state.currentAnimTime = 0i64;
    *(_QWORD *)&AnimInfo->state.cycleCount = 0i64;
    *(_QWORD *)&AnimInfo->state.goalWeight = 0i64;
    *(_QWORD *)&AnimInfo->state.rate = 0i64;
    *(_QWORD *)&AnimInfo->state.startWeight = 0i64;
    AnimInfo->notifyName = 0;
    AnimInfo->notifyType = 0;
    *(_DWORD *)&AnimInfo->notifyChild = -65536;
    AnimInfo->subTreeID = subTreeID;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
      AnimInfo->state.flags |= 8u;
  }
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+rate]
    vmovss  dword ptr [rsp+0A8h+modelNameMap], xmm0
    vmovaps xmm3, xmm6; goalWeight
    vmovss  dword ptr [rsp+0A8h+fmt], xmm8
  }
  curveIDa = XAnimSetGoalWeightNode(obj, tree, v27, *(float *)&_XMM3, fmt, modelNameMapb, notifyName, notifyType, curveID, cachedModelNameMap);
  v34 = curveIDa;
  parent = XAnimGetAnimInfo(v27)->parent;
  if ( parent )
  {
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    do
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v38 = 32 * (parent & 0x7FFF);
        if ( v38 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v52) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(modelNameMapa) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", modelNameMapa, v52) )
            __debugbreak();
        }
        _RCX = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v38];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v52) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(modelNameMapa) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", modelNameMapa, v52) )
            __debugbreak();
        }
        _RCX = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
      }
      v39 = *((unsigned __int16 *)_RCX + 3);
      if ( v39 == rootIndex )
        break;
      __asm { vucomiss xmm7, dword ptr [rcx+38h] }
      if ( v39 == rootIndex )
      {
        __asm
        {
          vmovss  dword ptr [rsp+0A8h+modelNameMap], xmm6
          vmovaps xmm3, xmm6; goalWeight
          vmovss  dword ptr [rsp+0A8h+fmt], xmm8
        }
        XAnimSetGoalWeightNode(obj, tree, parent, *(float *)&_XMM3, fmta, modelNameMapc, (scr_string_t)0, 0, curveID, cachedModelNameMap);
      }
      parent = XAnimGetAnimInfo(parent)->parent;
    }
    while ( parent );
    v34 = curveIDa;
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v55;
  result = v34;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  return result;
}

/*
==============
XAnimSetGoalWeight
==============
*/
__int64 XAnimSetGoalWeight(const DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v24; 
  __int64 result; 
  unsigned int v30; 
  float fmt; 
  XModelNameMap *modelNameMap; 
  float modelNameMapa; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
    vmovaps [rsp+0B8h+var_68], xmm8
  }
  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8378, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+0B8h+goalWeight]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  if ( notifyType )
    __asm { vucomiss xmm6, xmm7 }
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm0
  }
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8386, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(modelNameMap) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8390, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", modelNameMap, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  v24 = InfoIndex;
  __asm { vmovss  xmm8, [rsp+0B8h+goalTime] }
  if ( InfoIndex )
  {
    if ( bRestart )
    {
      __asm { vmovaps xmm3, xmm8; goalTime }
      v24 = XAnimRestart(tree, graftAnimIndex, InfoIndex, *(double *)&_XMM3);
    }
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+rate]
      vmovss  dword ptr [rsp+0B8h+modelNameMap], xmm0
      vmovaps xmm3, xmm6; goalWeight
      vmovss  dword ptr [rsp+0B8h+fmt], xmm8
    }
    v30 = XAnimSetGoalWeightNode(obj, tree, v24, *(float *)&_XMM3, fmt, modelNameMapa, notifyName, notifyType, curveID, cachedModelNameMap);
    Profile_EndInternal(NULL);
    result = v30;
  }
  else
  {
    __asm { vucomiss xmm6, xmm7 }
    Profile_EndInternal(NULL);
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
  }
  return result;
}

/*
==============
XAnimSetGoalWeightKnob
==============
*/
__int64 XAnimSetGoalWeightKnob(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, int bRestart, const XAnimCurveID curveID)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v21; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v30; 
  __int64 result; 
  float fmt; 
  XModelNameMap *modelNameMap; 
  float modelNameMapa; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7391, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+98h+goalWeight]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  __asm
  {
    vmovss  xmm3, cs:__real@3a83126f
    vcomiss xmm6, xmm3
  }
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7398, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(modelNameMap) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7402, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", modelNameMap, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  v21 = InfoIndex;
  __asm { vmovss  xmm7, [rsp+98h+goalTime] }
  if ( InfoIndex )
  {
    if ( bRestart )
    {
      __asm { vmovaps xmm3, xmm7; goalTime }
      v21 = XAnimRestart(tree, graftAnimIndex, InfoIndex, *(double *)&_XMM3);
    }
  }
  else
  {
    v21 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, NULL);
    AnimInfo = XAnimGetAnimInfo(v21);
    *(_QWORD *)&AnimInfo->state.currentAnimTime = 0i64;
    *(_QWORD *)&AnimInfo->state.cycleCount = 0i64;
    *(_QWORD *)&AnimInfo->state.goalWeight = 0i64;
    *(_QWORD *)&AnimInfo->state.rate = 0i64;
    *(_QWORD *)&AnimInfo->state.startWeight = 0i64;
    AnimInfo->notifyName = 0;
    AnimInfo->notifyType = 0;
    *(_DWORD *)&AnimInfo->notifyChild = -65536;
    AnimInfo->subTreeID = subTreeID;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
      AnimInfo->state.flags |= 8u;
  }
  __asm
  {
    vmovaps xmm3, xmm7; goalTime
    vmovaps xmm2, xmm6; goalWeight
  }
  XAnimClearGoalWeightKnobInternal(tree, v21, *(double *)&_XMM2, *(double *)&_XMM3, curveID);
  __asm
  {
    vmovss  xmm0, [rsp+98h+rate]
    vmovss  dword ptr [rsp+98h+modelNameMap], xmm0
    vmovaps xmm3, xmm6; goalWeight
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  v30 = XAnimSetGoalWeightNode(obj, tree, v21, *(float *)&_XMM3, fmt, modelNameMapa, notifyName, 0, curveID, NULL);
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  result = v30;
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
  return result;
}

/*
==============
XAnimSetGoalWeightKnobAll
==============
*/
__int64 XAnimSetGoalWeightKnobAll(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const XAnimSubTreeID rootSubTreeID, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, int bRestart, const XAnimCurveID curveID)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 parent; 
  unsigned __int8 *v26; 
  unsigned int v27; 
  __int64 result; 
  float fmt; 
  float fmta; 
  float v37; 
  __int64 v38; 
  float v39; 
  float v40; 
  __int64 v41; 
  unsigned int curveIDa; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  if ( !graftAnimIndex && animIndex == rootIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7282, ASSERT_TYPE_ASSERT, "((graftAnimIndex != 0) || (animIndex != rootIndex))", (const char *)&queryFormat, "(graftAnimIndex != XANIM_DEFAULT_GRAFT_ANIM_INDEX) || (animIndex != rootIndex)") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7283, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+98h+rate]
    vmovss  xmm6, [rsp+98h+goalTime]
    vmovss  dword ptr [rsp+98h+var_68], xmm0
    vmovss  xmm0, [rsp+98h+goalWeight]
    vmovss  [rsp+98h+var_70], xmm6
    vmovss  dword ptr [rsp+98h+fmt], xmm0
  }
  curveIDa = XAnimSetGoalWeightKnob(obj, graftAnimIndex, subTreeID, animIndex, fmt, v37, v40, notifyName, bRestart, curveID);
  Profile_Begin(456);
  tree = obj->tree;
  XAnimAssertGraftAnimIndex(obj->tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, rootSubTreeID, rootIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v41) = 42;
    LODWORD(v38) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7294, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v38, v41) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( !InfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7298, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  parent = XAnimGetAnimInfo(InfoIndex)->parent;
  if ( parent )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    while ( 1 )
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v27 = 32 * (parent & 0x7FFF);
        if ( v27 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v41) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v38) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v38, v41) )
            __debugbreak();
        }
        v26 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v27];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v41) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v38) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v38, v41) )
            __debugbreak();
        }
        v26 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
      }
      if ( *((unsigned __int16 *)v26 + 3) == rootIndex && *((_WORD *)v26 + 8) == rootSubTreeID )
        break;
      if ( bRestart )
      {
        __asm { vmovaps xmm3, xmm6; goalTime }
        parent = XAnimRestart(tree, graftAnimIndex, parent, *(double *)&_XMM3);
      }
      __asm
      {
        vmovaps xmm3, xmm6; goalTime
        vmovaps xmm2, xmm7; goalWeight
      }
      XAnimClearGoalWeightKnobInternal(tree, parent, *(double *)&_XMM2, *(double *)&_XMM3, curveID);
      __asm
      {
        vmovss  [rsp+98h+var_70], xmm7
        vmovaps xmm3, xmm7; goalWeight
        vmovss  dword ptr [rsp+98h+fmt], xmm6
      }
      XAnimSetGoalWeightNode(obj, tree, parent, *(float *)&_XMM3, fmta, v39, (scr_string_t)0, 0, curveID, NULL);
      parent = XAnimGetAnimInfo(parent)->parent;
      if ( !parent )
        goto LABEL_30;
    }
    Profile_EndInternal(NULL);
    result = curveIDa;
  }
  else
  {
LABEL_30:
    Profile_EndInternal(NULL);
    result = 1i64;
  }
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_48]
    vmovaps xmm6, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
XAnimSetGoalWeightNode
==============
*/

__int64 __fastcall XAnimSetGoalWeightNode(const DObj *obj, XAnimTree *tree, unsigned __int16 infoIndex, double goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  bool v20; 
  bool v21; 
  scr_string_t v27; 
  const dvar_t *v45; 
  const char *AnimDebugName; 
  unsigned __int16 v49; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 DescendantWithGreatest; 
  __int64 result; 
  double v59; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm6, xmm3
  }
  v20 = tree == NULL;
  if ( !tree )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7565, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree");
    v20 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@3a83126f
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( !v20 )
    __asm { vcomiss xmm6, xmm9 }
  __asm
  {
    vmovss  xmm10, [rsp+0C8h+goalTime]
    vcomiss xmm10, xmm7
    vmovss  xmm8, [rsp+0C8h+rate]
  }
  if ( notifyName )
    __asm { vcomiss xmm8, xmm7 }
  if ( notifyType )
    __asm { vcomiss xmm8, xmm7 }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  if ( notifyType )
    __asm { vucomiss xmm6, xmm7 }
  _RBX = GetNonRootAnimInfo(infoIndex);
  v27 = _RBX->notifyName;
  if ( v27 )
  {
    SL_RemoveRefToString(v27);
    _RBX->notifyName = 0;
  }
  _RBX->notifyIndex = -1;
  if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7579, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  _ER12 = _RBX->animIndex;
  XAnimAssertAnimIndex(tree, (const XAnimSubTreeID)_RBX->subTreeID, _ER12);
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  _EAX = 0;
  __asm
  {
    vmovd   xmm0, r12d
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm3, xmm2
    vmovss  [rsp+0C8h+goalTime], xmm0
    vmovd   xmm0, r12d
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm5, xmm10, xmm7, xmm2
    vucomiss xmm5, xmm7
    vmovd   xmm0, r12d
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm8, xmm3, xmm2
    vmovss  xmm8, [rsp+0C8h+goalTime]
    vmovss  [rsp+0C8h+rate], xmm5
    vmovss  [rsp+0C8h+rate], xmm0
    vmovss  dword ptr [rbx+3Ch], xmm8
  }
  _RBX->state.goalTime = 0.0;
  _RBX->state.flags |= 1u;
  v45 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
  if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  __asm { vmovss  xmm9, [rsp+0C8h+rate] }
  if ( v45->current.enabled && (_RBX->state.flags & 0x10) != 0 )
  {
    __asm { vucomiss xmm9, xmm7 }
    if ( (_RBX->state.flags & 0x10) != 0 )
    {
      __asm { vcvtss2sd xmm6, xmm9, xmm9 }
      AnimDebugName = XAnimGetAnimDebugName(tree->anims, _ER12);
      __asm { vmovsd  [rsp+0C8h+var_88], xmm6 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7627, ASSERT_TYPE_ASSERT, "(rate == 0.0f)", "%s\n\tXAnimSetGoalWeightNode '%s', animIndex %i: rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "rate == 0.0f", AnimDebugName, _ER12, v59) )
        __debugbreak();
    }
  }
  _RBX->state.goalDuration = _RBX->state.goalTime;
  _RBX->state.startWeight = _RBX->state.weight;
  _RBX->state.curveID = curveID;
  __asm
  {
    vmovss  dword ptr [rbx+38h], xmm8
    vmovss  dword ptr [rbx+40h], xmm9
  }
  _RBX->notifyName = notifyName;
  if ( notifyName )
    SL_AddRefToString(notifyName);
  v49 = truncate_cast<unsigned short,unsigned int>(notifyType);
  v20 = _RBX->notifyIndex == -1;
  _RBX->notifyType = v49;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7644, ASSERT_TYPE_ASSERT, "(info->notifyIndex == -1)", (const char *)&queryFormat, "info->notifyIndex == -1") )
    __debugbreak();
  XAnimCustomNodeInstantInit(obj, tree, _RBX, infoIndex, modelNameMap);
  if ( !notifyName || _RBX->animToModel || ((__int64)_RBX->parts & 3) == 0 || (SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RBX->subTreeID), XAnimIsCustomNode(SubTreeAnims, _RBX)) )
  {
    _RBX->notifyChild = 0;
LABEL_42:
    result = 0i64;
    goto LABEL_43;
  }
  __asm { vucomiss xmm8, xmm7 }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7650, ASSERT_TYPE_ASSERT, "(goalWeight)", (const char *)&queryFormat, "goalWeight") )
    __debugbreak();
  DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<1>(infoIndex);
  _RBX->notifyChild = DescendantWithGreatest;
  if ( DescendantWithGreatest )
    goto LABEL_42;
  result = 2i64;
LABEL_43:
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
XAnimSetGoalWeightWithParent
==============
*/
__int64 XAnimSetGoalWeightWithParent(const DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex_r; 
  unsigned __int16 v25; 
  XAnimInfo *AnimInfo; 
  unsigned int v29; 
  __int64 result; 
  float fmt; 
  __int64 after; 
  int aftera; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "XAnimSetGoalWeightWithParent");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8468, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+0C8h+goalWeight]
    vxorps  xmm7, xmm7, xmm7
  }
  if ( notifyName )
    __asm { vucomiss xmm6, xmm7 }
  if ( notifyType )
    __asm { vucomiss xmm6, xmm7 }
  if ( !animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8471, ASSERT_TYPE_ASSERT, "(animIndex)", (const char *)&queryFormat, "animIndex") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm0
  }
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8479, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(after) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8482, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", after, 42) )
      __debugbreak();
  }
  XAnimAssertValidParentInfoIndex(tree, graftAnimIndex, subTreeID, parentInfoIndex, animIndex);
  if ( !parentInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5476, ASSERT_TYPE_ASSERT, "(rootInfoID)", (const char *)&queryFormat, "rootInfoID") )
    __debugbreak();
  InfoIndex_r = XAnimGetInfoIndex_r(subTreeID, animIndex, parentInfoIndex);
  v25 = InfoIndex_r;
  __asm { vmovss  xmm8, [rsp+0C8h+goalTime] }
  if ( InfoIndex_r )
  {
    AnimInfo = XAnimGetAnimInfo(InfoIndex_r);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8493, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
      __debugbreak();
    if ( AnimInfo->subTreeID != subTreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8494, ASSERT_TYPE_ASSERT, "(animInfo->subTreeID == subTreeID)", "%s\n\tParent and child nodes must be in the same subtree.", "animInfo->subTreeID == subTreeID") )
      __debugbreak();
    if ( bRestart )
    {
      __asm { vmovaps xmm3, xmm8; goalTime }
      v25 = XAnimRestart(tree, graftAnimIndex, v25, *(double *)&_XMM3);
    }
    __asm
    {
      vmovss  xmm0, [rsp+0C8h+rate]
      vmovss  [rsp+0C8h+after], xmm0
      vmovss  dword ptr [rsp+0C8h+fmt], xmm8
      vmovaps xmm3, xmm6; goalWeight
    }
    v29 = XAnimSetGoalWeightNode(obj, tree, v25, *(float *)&_XMM3, fmt, *(float *)&aftera, notifyName, notifyType, curveID, cachedModelNameMap);
  }
  else
  {
    __asm { vucomiss xmm6, xmm7 }
    v29 = 0;
  }
  Sys_ProfEndNamedEvent();
  result = v29;
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
XAnimSetInstantClientLod
==============
*/
void XAnimSetInstantClientLod(const DObj *obj, unsigned __int8 lod)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9670, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9671, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  if ( obj->tree )
    XAnimTreeSetGoalLod(obj->tree, lod, 0);
}

/*
==============
XAnimSetScrubbedNotetracks
==============
*/
bool XAnimSetScrubbedNotetracks(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, const bool scrubbedNotetracks)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9479, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9484, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9486, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    AnimInfo = XAnimGetAnimInfo(InfoIndex);
    InfoSetStateFlag(AnimInfo, XANIMSTATE_SCRUBBED_NOTETRACKS, scrubbedNotetracks);
    LOBYTE(InfoIndex) = 1;
  }
  return InfoIndex;
}

/*
==============
XAnimSetSyncGroup
==============
*/
void XAnimSetSyncGroup(const XAnimTree *tree, unsigned __int16 infoIndex, const XAnimSyncGroupID oldSyncGroup, const XAnimSyncGroupID newSyncGroup)
{
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  XAnimInfo *NonRootAnimInfo; 

  v4 = newSyncGroup;
  v5 = oldSyncGroup;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2150, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2151, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2155, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( !AnimInfo->animToModel && (AnimInfo->animParent.flags & 3) != 0 && (AnimInfo->animParent.flags & 4) != 0 && AnimInfo->animParent.syncGroup[0] == v5 )
  {
    children = AnimInfo->children;
    for ( AnimInfo->animParent.syncGroup[0] = v4; children; children = NonRootAnimInfo->next )
    {
      NonRootAnimInfo = GetNonRootAnimInfo(children);
      XAnimSetSyncGroup(tree, children, (const XAnimSyncGroupID)v5, (const XAnimSyncGroupID)v4);
    }
  }
}

/*
==============
XAnimSetTime
==============
*/
void XAnimSetTime(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7950, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7954, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7956, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    __asm { vmovss  xmm2, [rsp+48h+time]; time }
    XAnimSetTimeNode(tree, InfoIndex, *(float *)&_XMM2);
  }
}

/*
==============
XAnimSetTimeInSeconds
==============
*/
void XAnimSetTimeInSeconds(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float timeSeconds)
{
  char v16; 
  char v17; 
  float timeSecondsa; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  *(double *)&_XMM0 = XAnimGetLength(tree->anims, animIndex);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( !(v16 | v17) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm8
      vmovaps [rsp+78h+var_48], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vdivss  xmm8, xmm9, xmm0
      vmovss  xmm0, [rsp+78h+timeSeconds]; X
    }
    if ( XAnimIsLooped(tree->anims, animIndex) )
    {
      __asm { vmovaps xmm1, xmm7; Y }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmulss  xmm6, xmm0, xmm8 }
    }
    else
    {
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vcmpless xmm2, xmm6, xmm1
        vmulss  xmm3, xmm8, xmm0
        vblendvps xmm6, xmm3, xmm9, xmm2
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+78h+var_38]
      vmovaps xmm9, [rsp+78h+var_48]
    }
  }
  __asm
  {
    vmovss  [rsp+78h+timeSeconds], xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  XAnimSetTime(tree, graftAnimIndex, subTreeID, animIndex, timeSecondsa);
}

/*
==============
XAnimSetTimeNode
==============
*/

void __fastcall XAnimSetTimeNode(XAnimTree *tree, unsigned __int16 infoIndex, double time)
{
  const XAnim_s *SubTreeAnims; 
  __int64 animIndex; 
  __int64 v13; 
  bool v14; 
  const char *AnimDebugName; 
  bool v17; 
  __int64 v21; 
  bool v23; 
  unsigned __int8 flags; 
  double v28; 
  const char *v29; 
  const char *v30; 
  double v31; 
  __int64 v32; 
  __int64 v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7892, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7893, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  _RBX = GetNonRootAnimInfo(infoIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7896, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7901, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RBX->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7903, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( _RBX->animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7905, ASSERT_TYPE_ASSERT, "(info->animIndex < anims->size)", (const char *)&queryFormat, "info->animIndex < anims->size") )
    __debugbreak();
  animIndex = _RBX->animIndex;
  v13 = 2 * (animIndex + 5);
  v14 = SubTreeAnims->entries[animIndex].numAnims == 0;
  if ( SubTreeAnims->entries[animIndex].numAnims )
  {
    __asm { vcvtss2sd xmm6, xmm7, xmm7 }
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, _RBX->animIndex);
    __asm { vmovsd  [rsp+68h+var_30], xmm6 }
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7907, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", "%s\n\tAnim name: '%s', time: %f", "IsLeafNode( anim )", AnimDebugName, v31);
    v14 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
    vcomiss xmm7, xmm6
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+68h+var_40], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7909, ASSERT_TYPE_ASSERT, "( ( !(time < 0.0f) && time <= 1.0f ) )", "( time ) = %g", v28) )
      __debugbreak();
  }
  if ( *((_WORD *)&SubTreeAnims->size + 4 * v13 + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
    __debugbreak();
  v21 = *((_QWORD *)&SubTreeAnims->debugName + v13);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( (*(_BYTE *)(v21 + 120) & 1) != 0 )
  {
    __asm
    {
      vcomiss xmm7, xmm6
      vcvtss2sd xmm6, xmm7, xmm7
      vmovsd  [rsp+68h+var_30], xmm6
    }
    v29 = XAnimGetAnimDebugName(SubTreeAnims, _RBX->animIndex);
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7913, ASSERT_TYPE_ASSERT, "(time < 1.0f)", "%s\n\tLooping anim '%s' needs time < 1.0 (time: %f)", "time < 1.0f", v29, v32);
  }
  else
  {
    __asm { vcomiss xmm7, xmm6 }
    if ( (*(_BYTE *)(v21 + 120) & 1) == 0 )
      goto LABEL_37;
    __asm
    {
      vcvtss2sd xmm6, xmm7, xmm7
      vmovsd  [rsp+68h+var_30], xmm6
    }
    v30 = XAnimGetAnimDebugName(SubTreeAnims, _RBX->animIndex);
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7917, ASSERT_TYPE_ASSERT, "(time <= 1.0f)", "%s\n\tNon-looping anim '%s' needs time <= 1.0 (time: %f)", "time <= 1.0f", v30, v33);
  }
  if ( v23 )
    __debugbreak();
LABEL_37:
  flags = _RBX->state.flags;
  if ( (flags & 0x10) != 0 )
  {
    if ( (flags & 0x40) == 0 )
    {
      _RBX->state.oldTime = _RBX->state.currentAnimTime;
      _RBX->state.oldCycleCount = 0;
      _RBX->state.flags |= 0x40u;
    }
  }
  else
  {
    _RBX->state.oldCycleCount = 0;
    __asm { vmovss  dword ptr [rbx+2Ch], xmm7 }
    _RBX->notifyIndex = -1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rbx+28h], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  _RBX->state.cycleCount = 0;
}

/*
==============
XAnimSetTreeChildTimes
==============
*/
void XAnimSetTreeChildTimes(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  __int64 v7; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v13; 
  unsigned __int16 i; 
  unsigned __int8 *v19; 
  __int64 v20; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 *v22; 
  unsigned int v23; 
  float fmt; 
  __int64 v26; 
  double v27; 
  __int64 v28; 

  v7 = animIndex;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8135, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v7);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8140, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v7 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8141, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, v7);
  v13 = InfoIndex;
  if ( InfoIndex )
  {
    if ( SubTreeAnims->entries[v7].numAnims )
    {
      __asm
      {
        vmovaps [rsp+78h+var_38], xmm6
        vmovss  xmm6, [rsp+78h+time]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
        vcomiss xmm6, cs:__real@3f800000
      }
      if ( SubTreeAnims->entries[v7].numAnims )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+78h+var_50], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8160, ASSERT_TYPE_ASSERT, "( ( !(time < 0.0f) && time <= 1.0f ) )", "( time ) = %g", v27) )
          __debugbreak();
      }
      for ( i = GetNonRootAnimInfo(v13)->children; i; i = *((_WORD *)v19 + 5) )
      {
        if ( (i & 0x8000u) != 0 )
        {
          v20 = 32 * (i & 0x7FFFu);
          if ( (unsigned int)v20 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v28) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v26) = 32 * (i & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v26, v28) )
              __debugbreak();
          }
          v19 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v20];
        }
        else
        {
          if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v28) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v26) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v26, v28) )
              __debugbreak();
          }
          v19 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
        }
        AnimInfo = XAnimGetAnimInfo(i);
        if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9295, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( AnimInfo->subTreeID )
        {
          while ( 1 )
          {
            v22 = (unsigned __int16 *)XAnimGetAnimInfo(i);
            if ( v22[8] != AnimInfo->subTreeID )
              break;
            i = v22[7];
            if ( !i )
              goto LABEL_32;
          }
          v23 = v22[3];
        }
        else
        {
LABEL_32:
          v23 = 0;
        }
        __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
        XAnimSetTreeChildTimes(tree, v23, *((const XAnimSubTreeID *)v19 + 8), *((unsigned __int16 *)v19 + 3), fmt);
      }
      __asm { vmovaps xmm6, [rsp+78h+var_38] }
    }
    else
    {
      __asm { vmovss  xmm2, [rsp+78h+time]; time }
      XAnimSetTimeNode(tree, InfoIndex, *(float *)&_XMM2);
    }
  }
}

/*
==============
XAnimSetWrappedTime
==============
*/
void XAnimSetWrappedTime(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time, bool timeWrapped)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v12; 
  XAnimInfo *NonRootAnimInfo; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7973, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7977, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7979, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  v12 = InfoIndex;
  if ( InfoIndex )
  {
    NonRootAnimInfo = GetNonRootAnimInfo(InfoIndex);
    if ( !NonRootAnimInfo )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7991, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 653, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
    }
    if ( (NonRootAnimInfo->state.flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7992, ASSERT_TYPE_ASSERT, "(XAnimInfoHasScrubbedNotetracks( info ))", "%s\n\tXAnimSetWrappedTime() can be used with scrubbed notetrack nodes only.", "XAnimInfoHasScrubbedNotetracks( info )") )
      __debugbreak();
    __asm { vmovss  xmm2, [rsp+48h+time]; time }
    XAnimSetTimeNode(tree, v12, *(float *)&_XMM2);
    InfoSetStateFlag(NonRootAnimInfo, XANIMSTATE_SCRUBBED_NOTETRACKS_WRAPPED, timeWrapped);
  }
}

/*
==============
XAnimSetupBindingIndexes
==============
*/
void XAnimSetupBindingIndexes(XAnim_s *anims)
{
  unsigned __int16 numBindings; 
  unsigned __int16 i; 
  XAnimParameterBinding *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7845, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  numBindings = anims->numBindings;
  anims->dirtyBindings = 0;
  if ( numBindings )
  {
    qsort(anims->bindings, numBindings, 0x18ui64, (_CoreCrtNonSecureSearchSortCompareFunction)XAnimParameterBindingCompareFunc);
    for ( i = 0; i < anims->numBindings; ++i )
    {
      v4 = &anims->bindings[i];
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7862, ASSERT_TYPE_ASSERT, "(bindings)", (const char *)&queryFormat, "bindings") )
        __debugbreak();
      if ( v4->destAnimIndex >= anims->size )
      {
        LODWORD(v6) = anims->size;
        LODWORD(v5) = v4->destAnimIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7863, ASSERT_TYPE_ASSERT, "(unsigned)( bindings->destAnimIndex ) < (unsigned)( anims->size )", "bindings->destAnimIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( anims->entries[v4->destAnimIndex].bindingIndex == 0xFFFF )
        anims->entries[v4->destAnimIndex].bindingIndex = i;
    }
  }
}

/*
==============
XAnimSetupLodDistances
==============
*/
void XAnimSetupLodDistances(XAnim_s *anims, unsigned int numLods, const float *lodDistances)
{
  __int64 v3; 

  v3 = numLods;
  if ( numLods >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 720, ASSERT_TYPE_ASSERT, "(numLods < XANIM_LOD_MAX)", (const char *)&queryFormat, "numLods < XANIM_LOD_MAX") )
    __debugbreak();
  anims->numLods = truncate_cast<unsigned char,unsigned int>(v3);
  memcpy_0(anims->lodDistances, lodDistances, 4 * v3);
}

/*
==============
XAnimSetupNodeLod
==============
*/
void XAnimSetupNodeLod(XAnim_s *anims, unsigned int animIndex, unsigned int lod)
{
  __int64 v3; 
  __int64 v6; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 729, ASSERT_TYPE_ASSERT, "(anims != nullptr)", (const char *)&queryFormat, "anims != nullptr") )
    __debugbreak();
  if ( (unsigned int)v3 >= anims->size )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 730, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v6, anims->size) )
      __debugbreak();
  }
  anims->entries[v3].lod = truncate_cast<unsigned char,unsigned int>(lod);
}

/*
==============
XAnimSetupSyncNodes
==============
*/
void XAnimSetupSyncNodes(XAnim_s *anims)
{
  XAnimSetupSyncNodes_r(anims, 0);
}

/*
==============
XAnimSetupSyncNodes_r
==============
*/
void XAnimSetupSyncNodes_r(XAnim_s *anims, unsigned int animIndex)
{
  XAnimEntry *v3; 
  unsigned __int16 numAnims; 
  int v5; 
  unsigned int flags; 
  int v7; 
  bool v8; 
  int i; 
  int j; 

  v3 = &anims->entries[animIndex];
  numAnims = v3->numAnims;
  if ( numAnims )
  {
    v5 = numAnims;
    flags = v3->animParent.flags;
    v7 = flags & 3;
    if ( (flags & 3) != 0 )
    {
      if ( v7 == 3 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AF600, 379i64);
        flags = v3->animParent.flags;
      }
      v3->animParent.flags = flags | 4;
      v8 = v7 == 1;
      for ( i = 0; i < v5; ++i )
        XAnimFillInSyncNodes_r(anims, i + v3->animParent.children, v8, (const XAnimSyncGroupID)(unsigned __int8)v3->animParent.syncGroup[0]);
    }
    else
    {
      for ( j = 0; j < v5; ++j )
        XAnimSetupSyncNodes_r(anims, j + v3->animParent.children);
    }
  }
}

/*
==============
XAnimShouldSaveNode
==============
*/
bool XAnimShouldSaveNode(const XAnimTree *tree, const XAnimInfo *info)
{
  const XAnim_s *SubTreeAnims; 
  __int64 animIndex; 
  __int64 v7; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6999, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7000, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7003, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( info->animIndex >= SubTreeAnims->size )
  {
    LODWORD(v7) = info->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7004, ASSERT_TYPE_ASSERT, "(unsigned)( info->animIndex ) < (unsigned)( anims->size )", "info->animIndex doesn't index anims->size\n\t%i not in [0, %i)", v7, SubTreeAnims->size) )
      __debugbreak();
  }
  animIndex = info->animIndex;
  return !SubTreeAnims->entries[animIndex].numAnims || (SubTreeAnims->entries[animIndex].animParent.flags & 0x20000) == 0;
}

/*
==============
XAnimShutdown
==============
*/
void XAnimShutdown(void)
{
  unsigned int i; 
  scr_string_t v1; 
  scr_string_t *v2; 
  unsigned int *v3; 
  int v4; 

  XAnimShutdownNodeTypes();
  if ( g_endNotetrackName )
  {
    if ( !g_disableLeakCheck && g_info_usage != 1 )
    {
      v4 = g_info_usage;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1305, ASSERT_TYPE_ASSERT, "( ( g_info_usage == 1 ) )", "( g_info_usage ) = %i", v4) )
        __debugbreak();
    }
    SL_RemoveRefToString(g_endNotetrackName);
    g_endNotetrackName = 0;
  }
  for ( i = 0; i < s_xAnimConstStrings.numStrings; *v3 = 0 )
  {
    v1 = s_xAnimConstStrings.strings[i];
    v2 = &s_xAnimConstStrings.strings[i];
    v3 = &s_xAnimConstStrings.size[i];
    if ( *v3 )
      SL_RemoveRefToStringOfSize(v1, *v3);
    else
      SL_RemoveRefToString(v1);
    ++i;
    *v2 = 0;
  }
  s_xAnimConstStrings.numStrings = 0;
}

/*
==============
XAnimSubTreeRegistry_CloneServerToClient
==============
*/
void XAnimSubTreeRegistry_CloneServerToClient(unsigned __int16 startIndex, unsigned __int16 endIndex)
{
  const XAnim_s **v4; 
  __int64 v5; 

  if ( startIndex >= endIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9394, ASSERT_TYPE_ASSERT, "(startIndex < endIndex)", (const char *)&queryFormat, "startIndex < endIndex") )
    __debugbreak();
  if ( endIndex >= 0x82u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9395, ASSERT_TYPE_ASSERT, "(static_cast<XAnimSubTreeID>( endIndex ) < XAnimSubTreeID::XANIM_MAX_SUBTREES)", (const char *)&queryFormat, "static_cast<XAnimSubTreeID>( endIndex ) < XAnimSubTreeID::XANIM_MAX_SUBTREES") )
    __debugbreak();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9397, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( startIndex < (unsigned int)endIndex )
  {
    v4 = &s_xAnimSubTreeRegistry[1].subTrees[startIndex];
    v5 = endIndex - (unsigned int)startIndex;
    do
    {
      if ( !*v4 )
        *v4 = *(v4 - 130);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
XAnimSubTreeRegistry_GetAnims
==============
*/
const XAnim_s *XAnimSubTreeRegistry_GetAnims(const XAnimSubTreeID subTreeID, const XAnimOwner owner)
{
  unsigned __int8 v2; 
  const char *v4; 
  int v5; 
  const char *v6; 
  XAnimSubTreeRegistry *v7; 

  v2 = owner;
  if ( subTreeID )
  {
    if ( (unsigned __int16)subTreeID < XANIM_MAX_SUBTREES )
      goto LABEL_7;
    v4 = "subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES";
    v5 = 9333;
    v6 = "(subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES)";
  }
  else
  {
    v4 = "subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT";
    v5 = 9332;
    v6 = "(subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", v5, ASSERT_TYPE_ASSERT, v6, (const char *)&queryFormat, v4) )
    __debugbreak();
LABEL_7:
  v7 = &s_xAnimSubTreeRegistry[v2];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9336, ASSERT_TYPE_ASSERT, "(registry)", (const char *)&queryFormat, "registry") )
    __debugbreak();
  return v7->subTrees[(unsigned __int16)subTreeID];
}

/*
==============
XAnimSubTreeRegistry_Init
==============
*/
void XAnimSubTreeRegistry_Init(const XAnimOwner owner)
{
  XAnimSubTreeRegistry *v1; 

  v1 = &s_xAnimSubTreeRegistry[(unsigned __int8)owner];
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9324, ASSERT_TYPE_ASSERT, "(registry)", (const char *)&queryFormat, "registry") )
    __debugbreak();
  memset_0(v1, 0, sizeof(XAnimSubTreeRegistry));
}

/*
==============
XAnimSubTreeRegistry_Register
==============
*/
void XAnimSubTreeRegistry_Register(const XAnim_s *anims, const XAnimOwner owner)
{
  unsigned __int8 v2; 
  XAnimSubTreeRegistry *v4; 

  v2 = owner;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9357, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( anims->subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9358, ASSERT_TYPE_ASSERT, "(anims->subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "anims->subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
    __debugbreak();
  if ( anims->subTreeID >= XANIM_MAX_SUBTREES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9359, ASSERT_TYPE_ASSERT, "(anims->subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES)", (const char *)&queryFormat, "anims->subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES") )
    __debugbreak();
  v4 = &s_xAnimSubTreeRegistry[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9362, ASSERT_TYPE_ASSERT, "(registry)", (const char *)&queryFormat, "registry") )
    __debugbreak();
  if ( v4->subTrees[(unsigned __int16)anims->subTreeID] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9363, ASSERT_TYPE_ASSERT, "(!registry->subTrees[static_cast<uint16_t>(anims->subTreeID)])", (const char *)&queryFormat, "!registry->subTrees[static_cast<uint16_t>(anims->subTreeID)]") )
    __debugbreak();
  v4->subTrees[(unsigned __int16)anims->subTreeID] = anims;
}

/*
==============
XAnimSubTreeRegistry_Remove
==============
*/
void XAnimSubTreeRegistry_Remove(const XAnim_s *anims, const XAnimOwner owner)
{
  unsigned __int8 v2; 
  XAnimSubTreeRegistry *v4; 

  v2 = owner;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9344, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( anims->subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9345, ASSERT_TYPE_ASSERT, "(anims->subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "anims->subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
    __debugbreak();
  if ( anims->subTreeID >= XANIM_MAX_SUBTREES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9346, ASSERT_TYPE_ASSERT, "(anims->subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES)", (const char *)&queryFormat, "anims->subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES") )
    __debugbreak();
  v4 = &s_xAnimSubTreeRegistry[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9349, ASSERT_TYPE_ASSERT, "(registry)", (const char *)&queryFormat, "registry") )
    __debugbreak();
  v4->subTrees[(unsigned __int16)anims->subTreeID] = NULL;
}

/*
==============
XAnimTrackInfoAllocation
==============
*/
void XAnimTrackInfoAllocation(XAnimTree *tree)
{
  bool v1; 
  int v2; 
  int v4; 

  v1 = g_info_usage == -1;
  v2 = ++g_info_usage;
  if ( v1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1312, ASSERT_TYPE_ASSERT, "(g_info_usage)", (const char *)&queryFormat, "g_info_usage") )
      __debugbreak();
    v2 = g_info_usage;
  }
  v4 = g_info_high_usage;
  if ( v2 > g_info_high_usage )
    v4 = v2;
  v1 = tree->info_usage++ == -1;
  g_info_high_usage = v4;
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1318, ASSERT_TYPE_ASSERT, "(tree->info_usage)", (const char *)&queryFormat, "tree->info_usage") )
    __debugbreak();
}

/*
==============
XAnimTransferFrom_r
==============
*/
void XAnimTransferFrom_r(const XAnimTree *from, unsigned __int16 fromInfoIndex)
{
  unsigned int v5; 
  unsigned __int16 children; 
  XAnimToXModel *v8; 
  unsigned __int8 transferStatus; 
  unsigned __int8 *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3597, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3598, ASSERT_TYPE_ASSERT, "( from->anims )", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3599, ASSERT_TYPE_ASSERT, "( from->anims->size )", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  _RSI = GetNonRootAnimInfo(fromInfoIndex);
  if ( !XAnimGetAnimInfo(fromInfoIndex)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3602, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( fromInfoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( fromInfoIndex )") )
    __debugbreak();
  v5 = g_animInfoCount;
  if ( g_animInfoCount >= 0x800 )
  {
    g_animInfoCount = 0;
    g_dobjInfoCount = 0;
    g_xanimParameterTransferInfo.parameterCount = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441ACEF8, 369i64);
    v5 = g_animInfoCount;
  }
  children = _RSI->children;
  g_animInfoCount = v5 + 1;
  _RDI = &g_xanimTransferInfo[v5];
  v8 = XAnimCloneXAnimToXModel(_RSI->animToModel);
  _RDI->hasChildren = children != 0;
  _RDI->hasNext = _RSI->prev != 0;
  _RDI->animIndex = _RSI->animIndex;
  _RDI->subTreeID = _RSI->subTreeID;
  _RDI->animToModel = v8;
  _RDI->oldCycleCount = _RSI->state.oldCycleCount;
  _RDI->oldTime = _RSI->state.oldTime;
  _RDI->goalTime = _RSI->state.goalTime;
  _RDI->goalWeight = _RSI->state.goalWeight;
  if ( (_RSI->state.flags & 1) != 0 )
    __asm { vmovss  xmm0, dword ptr [rsi+3Ch] }
  else
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  __asm { vmovss  dword ptr [rdi+18h], xmm0 }
  _RDI->rate = _RSI->state.rate;
  _RDI->hasSyncGroups = (_RSI->state.flags & 2) != 0;
  _RDI->startWeight = _RSI->state.startWeight;
  _RDI->goalDuration = _RSI->state.goalDuration;
  _RDI->curveID = _RSI->state.curveID;
  _RDI->isInstantFullRestart = (_RSI->state.flags & 4) != 0;
  transferStatus = _RDI->transferStatus;
  if ( transferStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3637, ASSERT_TYPE_ASSERT, "( toInfo->transferStatus ) == ( INVALID_XANIM_TRANSFER_DATA )", "%s == %s\n\t%u, %u", "toInfo->transferStatus", "INVALID_XANIM_TRANSFER_DATA", transferStatus, 0i64) )
    __debugbreak();
  _RDI->transferStatus = 1;
  if ( children )
  {
    for ( ; XAnimGetAnimInfo(children)->next; children = XAnimGetAnimInfo(children)->next )
      ;
    do
    {
      if ( (children & 0x8000u) != 0 )
      {
        v12 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v12 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v14) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v13) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v13, v14) )
            __debugbreak();
        }
        v11 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v12];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v14) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v13) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        v11 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3649, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( fromChildInfoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( fromChildInfoIndex )") )
        __debugbreak();
      XAnimTransferFrom_r(from, children);
      if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3653, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( fromChildInfoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( fromChildInfoIndex )") )
        __debugbreak();
      children = *((_WORD *)v11 + 4);
    }
    while ( children );
  }
}

/*
==============
XAnimTransferParametersFromServerTree
==============
*/
void XAnimTransferParametersFromServerTree(XAnimParameterTransferInfo *transferInfo, const XAnimTree *from)
{
  __int64 numGameParameters; 
  unsigned int parameterCount; 
  int v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 dobjCount; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 

  _RDI = transferInfo;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3664, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3665, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( from->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3666, ASSERT_TYPE_ASSERT, "(from->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "from->owner == XAnimOwner::SERVER") )
    __debugbreak();
  numGameParameters = from->anims->numGameParameters;
  v18 = from->anims->numGameParameters;
  if ( from->anims->numGameParameters )
  {
    parameterCount = _RDI->parameterCount;
    v6 = 0;
    if ( parameterCount + (unsigned int)numGameParameters >= 0xA80 )
    {
      g_animInfoCount = 0;
      g_dobjInfoCount = 0;
      _RDI->parameterCount = 0;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441ACCE0, 370i64);
    }
    if ( (unsigned int)numGameParameters >= (unsigned int)from->maxParameters + 1 )
    {
      LODWORD(v15) = numGameParameters;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3688, ASSERT_TYPE_ASSERT, "(unsigned)( numParameters ) < (unsigned)( from->maxParameters + 1 )", "numParameters doesn't index from->maxParameters + 1\n\t%i not in [0, %i)", v15, from->maxParameters + 1) )
        __debugbreak();
    }
    if ( (_DWORD)numGameParameters )
    {
      v7 = 841;
      v8 = numGameParameters;
      v9 = 0i64;
      do
      {
        _RDX = &from->parameterValues[v9];
        if ( _RDX->type <= STRUCT_POINTER && _bittest(&v7, (unsigned __int8)_RDX->type) )
        {
          if ( parameterCount >= 0xA80 )
          {
            LODWORD(v17) = 2688;
            LODWORD(v16) = parameterCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
              __debugbreak();
          }
          _RDI->validParameterBits.array[(unsigned __int64)parameterCount >> 5] &= ~(0x80000000 >> (parameterCount & 0x1F));
        }
        else
        {
          ++v6;
          __asm { vmovups xmm0, xmmword ptr [rdx] }
          _RCX = 3i64 * _RDI->validParameterCount;
          __asm
          {
            vmovups xmmword ptr [rdi+rcx*8], xmm0
            vmovsd  xmm1, qword ptr [rdx+10h]
            vmovsd  qword ptr [rdi+rcx*8+10h], xmm1
          }
          ++_RDI->validParameterCount;
          if ( parameterCount >= 0xA80 )
          {
            LODWORD(v17) = 2688;
            LODWORD(v16) = parameterCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
              __debugbreak();
          }
          _RDI->validParameterBits.array[(unsigned __int64)parameterCount >> 5] |= 0x80000000 >> (parameterCount & 0x1F);
        }
        ++parameterCount;
        ++v9;
        v7 = 841;
        --v8;
      }
      while ( v8 );
      LODWORD(numGameParameters) = v18;
    }
    dobjCount = _RDI->dobjCount;
    if ( v6 )
    {
      if ( (unsigned int)dobjCount >= 0x400 )
      {
        LODWORD(v17) = 1024;
        LODWORD(v16) = _RDI->dobjCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
          __debugbreak();
      }
      _RDI->dobjHasValidParametersBits.array[dobjCount >> 5] |= 0x80000000 >> (dobjCount & 0x1F);
      _RDI->parameterCount += numGameParameters;
    }
    else
    {
      if ( (unsigned int)dobjCount >= 0x400 )
      {
        LODWORD(v17) = 1024;
        LODWORD(v16) = _RDI->dobjCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
          __debugbreak();
      }
      _RDI->dobjHasValidParametersBits.array[dobjCount >> 5] &= ~(0x80000000 >> (dobjCount & 0x1F));
    }
    ++_RDI->dobjCount;
  }
}

/*
==============
XAnimTransferParametersToClientTree
==============
*/
void XAnimTransferParametersToClientTree(XAnimParameterTransferInfo *transferInfo, XAnimTree *toTree)
{
  __int64 numGameParameters; 
  unsigned __int64 transferredDObjCount; 
  unsigned int transferredParameterCount; 
  __int64 v8; 
  __int64 v13; 
  __int64 v14; 

  _RBX = transferInfo;
  if ( !toTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3534, ASSERT_TYPE_ASSERT, "(toTree)", (const char *)&queryFormat, "toTree") )
    __debugbreak();
  if ( !toTree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3535, ASSERT_TYPE_ASSERT, "(toTree->anims)", (const char *)&queryFormat, "toTree->anims") )
    __debugbreak();
  numGameParameters = toTree->anims->numGameParameters;
  if ( toTree->anims->numGameParameters )
  {
    transferredDObjCount = _RBX->transferredDObjCount;
    _RBX->transferredDObjCount = transferredDObjCount + 1;
    if ( (unsigned int)transferredDObjCount >= 0x400 )
    {
      LODWORD(v13) = transferredDObjCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v13, 1024) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (transferredDObjCount & 0x1F)) & _RBX->dobjHasValidParametersBits.array[transferredDObjCount >> 5]) != 0 )
    {
      if ( (unsigned int)(numGameParameters + _RBX->transferredParameterCount) > _RBX->parameterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3552, ASSERT_TYPE_ASSERT, "( transferInfo->transferredParameterCount + numParameters ) <= ( transferInfo->parameterCount )", "%s <= %s\n\t%i, %i", "transferInfo->transferredParameterCount + numParameters", "transferInfo->parameterCount", numGameParameters + _RBX->transferredParameterCount, _RBX->parameterCount) )
        __debugbreak();
      transferredParameterCount = _RBX->transferredParameterCount;
      _RSI = 0i64;
      if ( transferredParameterCount + (unsigned int)numGameParameters > _RBX->parameterCount )
      {
        g_animInfoCount = 0;
        g_dobjInfoCount = 0;
        _RBX->transferredParameterCount = 0;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441ACCE0, 368i64);
        transferredParameterCount = _RBX->transferredParameterCount;
      }
      if ( (_DWORD)numGameParameters )
      {
        v8 = numGameParameters;
        do
        {
          if ( transferredParameterCount >= 0xA80 )
          {
            LODWORD(v14) = 2688;
            LODWORD(v13) = transferredParameterCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v13, v14) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (transferredParameterCount & 0x1F)) & _RBX->validParameterBits.array[(unsigned __int64)transferredParameterCount >> 5]) != 0 )
          {
            if ( _RBX->transferredValidParameterCount > _RBX->validParameterCount )
            {
              LODWORD(v14) = _RBX->validParameterCount;
              LODWORD(v13) = _RBX->transferredValidParameterCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3568, ASSERT_TYPE_ASSERT, "( transferInfo->transferredValidParameterCount ) <= ( transferInfo->validParameterCount )", "transferInfo->transferredValidParameterCount not in [0, transferInfo->validParameterCount]\n\t%u not in [0, %u]", v13, v14) )
                __debugbreak();
            }
            _RCX = 3i64 * _RBX->transferredValidParameterCount;
            _RAX = toTree->parameterValues;
            __asm
            {
              vmovups xmm0, xmmword ptr [rbx+rcx*8]
              vmovups xmmword ptr [rax+rsi], xmm0
              vmovsd  xmm1, qword ptr [rbx+rcx*8+10h]
              vmovsd  qword ptr [rax+rsi+10h], xmm1
            }
            ++_RBX->transferredValidParameterCount;
          }
          ++transferredParameterCount;
          _RSI += 24i64;
          --v8;
        }
        while ( v8 );
        transferredParameterCount = _RBX->transferredParameterCount;
      }
      _RBX->transferredParameterCount = transferredParameterCount + numGameParameters;
    }
  }
}

/*
==============
XAnimTransferTo_r
==============
*/
__int64 XAnimTransferTo_r(DObj *obj, XAnimTree *to, unsigned __int16 toInfoIndex, unsigned __int16 toInfoParentIndex)
{
  unsigned __int16 v9; 
  unsigned int v11; 
  unsigned __int8 transferStatus; 
  XAnimInfo *AnimInfo; 
  bool v16; 
  unsigned __int8 v18; 
  XAnimToXModel *animToModel; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 v21; 
  XAnimSubTreeID subTreeID; 
  XAnimInfo *v23; 
  const XAnim_s *v24; 
  __int16 notifyIndex; 
  const dvar_t *v27; 
  const char *AnimDebugName; 
  bool hasChildren; 
  unsigned __int16 children; 
  __int64 v35; 
  char v37; 
  XAnimInfo *v38; 
  const XAnimInfo *v39; 
  unsigned int v40; 
  unsigned __int16 v42; 
  const XAnimInfo *v43; 
  unsigned int v44; 
  __int64 after; 
  __int64 v49; 
  __int64 v50; 
  double v51; 
  __int64 v52; 
  unsigned __int16 v55; 

  v55 = toInfoIndex;
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  v9 = toInfoIndex;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3403, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  v11 = g_animInfoCount;
  if ( g_animInfoCount >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3405, ASSERT_TYPE_ASSERT, "(g_animInfoCount < ( sizeof( *array_counter( g_xanimTransferInfo ) ) + 0 ))", (const char *)&queryFormat, "g_animInfoCount < ARRAY_COUNT( g_xanimTransferInfo )") )
      __debugbreak();
    v11 = g_animInfoCount;
  }
  g_animInfoCount = v11 + 1;
  _RDI = &g_xanimTransferInfo[v11];
  transferStatus = _RDI->transferStatus;
  if ( transferStatus != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3409, ASSERT_TYPE_ASSERT, "( fromInfo->transferStatus ) == ( XANIM_READY_FOR_TRANSFER )", "%s == %s\n\t%u, %u", "fromInfo->transferStatus", "XANIM_READY_FOR_TRANSFER", transferStatus, 1) )
    __debugbreak();
  _RDI->transferStatus = 2;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v9 )
  {
    AnimInfo = XAnimGetAnimInfo(v9);
    v16 = AnimInfo->animIndex == _RDI->animIndex && AnimInfo->subTreeID != _RDI->subTreeID;
    if ( XAnimGetAnimInfo(v9)->animIndex >= _RDI->animIndex )
    {
      if ( _RDI->isInstantFullRestart )
      {
LABEL_24:
        __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
        XAnimClearTreeGoalWeightsNode(to, v9, *(float *)&_XMM2, 1, LINEAR);
        goto LABEL_25;
      }
      if ( !v16 )
      {
        if ( _RDI->animToModel )
        {
          XAnimFreeXAnimToXModel(&_RDI->animToModel);
          if ( _RDI->animToModel )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3437, ASSERT_TYPE_ASSERT, "(fromInfo->animToModel == nullptr)", (const char *)&queryFormat, "fromInfo->animToModel == nullptr") )
              __debugbreak();
          }
        }
        goto LABEL_42;
      }
    }
    if ( _RDI->isInstantFullRestart )
      goto LABEL_24;
  }
LABEL_25:
  v18 = _RDI->transferStatus;
  if ( v18 != 2 )
  {
    LODWORD(v52) = 2;
    LODWORD(v50) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3332, ASSERT_TYPE_ASSERT, "( fromInfo->transferStatus ) == ( XANIM_TRANSFER_IN_PROGRESS )", "%s == %s\n\t%u, %u", "fromInfo->transferStatus", "XANIM_TRANSFER_IN_PROGRESS", v50, v52) )
      __debugbreak();
  }
  animToModel = _RDI->animToModel;
  _RDI->animToModel = NULL;
  if ( !DObjHasClientOnlyBones(obj) )
    goto LABEL_40;
  if ( !animToModel )
    goto LABEL_32;
  if ( animToModel->missingBoneCount )
  {
    MT_Free(animToModel, 2 * (animToModel->boneCount + (unsigned __int64)animToModel->blendShapeWeightCount) + 36);
    animToModel = NULL;
LABEL_32:
    if ( _RDI->animIndex )
    {
      SubTreeAnims = XAnimGetSubTreeAnims(to, (const XAnimSubTreeID)_RDI->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3366, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      if ( _RDI->animIndex >= SubTreeAnims->size )
      {
        LODWORD(v52) = SubTreeAnims->size;
        LODWORD(v50) = _RDI->animIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3367, ASSERT_TYPE_ASSERT, "( fromInfo->animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "fromInfo->animIndex", "anims->size", v50, v52) )
          __debugbreak();
      }
      animToModel = XAnimGetAnimToModel(obj, &SubTreeAnims->entries[_RDI->animIndex], NULL);
    }
  }
LABEL_40:
  v21 = XAnimAllocInfoWithParent(to, (const XAnimSubTreeID)_RDI->subTreeID, animToModel, _RDI->animIndex, toInfoParentIndex, 0);
  subTreeID = _RDI->subTreeID;
  v9 = v21;
  v55 = v21;
  v23 = XAnimGetAnimInfo(v21);
  *(_QWORD *)&v23->state.currentAnimTime = 0i64;
  *(_QWORD *)&v23->state.cycleCount = 0i64;
  *(_QWORD *)&v23->state.goalWeight = 0i64;
  *(_QWORD *)&v23->state.rate = 0i64;
  *(_QWORD *)&v23->state.startWeight = 0i64;
  v23->notifyName = 0;
  *(_DWORD *)&v23->notifyChild = -65536;
  v23->notifyType = 0;
  v23->subTreeID = subTreeID;
  v24 = XAnimGetSubTreeAnims(to, subTreeID);
  if ( XAnimIsCustomNode(v24, v23) )
    v23->state.flags |= 8u;
LABEL_42:
  _RBX = XAnimGetAnimInfo(v9);
  if ( XAnimIsClientAuthNode(_RBX) )
  {
    _RDI->transferStatus = 3;
  }
  else
  {
    notifyIndex = _RBX->notifyIndex;
    if ( notifyIndex != -1 )
    {
      LODWORD(after) = notifyIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3449, ASSERT_TYPE_ASSERT, "( ( toInfo->notifyIndex == -1 ) )", "( toInfo->notifyIndex ) = %i", after) )
        __debugbreak();
    }
    v27 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
    if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled && XAnimInfoHasScrubbedNotetracks(_RBX) )
    {
      __asm
      {
        vmovaps [rsp+98h+var_38], xmm6
        vmovss  xmm6, dword ptr [rdi+1Ch]
        vucomiss xmm6, xmm7
      }
      AnimDebugName = XAnimGetAnimDebugName(to->anims, _RBX->animIndex);
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+98h+var_60], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3454, ASSERT_TYPE_ASSERT, "(fromInfo->rate == 0.0f)", "%s\n\tXAnimTransferTo_r '%s': fromInfo->rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "fromInfo->rate == 0.0f", AnimDebugName, v51) )
        __debugbreak();
      __asm { vmovaps xmm6, [rsp+98h+var_38] }
    }
    _RBX->state.currentAnimTime = _RDI->oldTime;
    _RBX->state.cycleCount = _RDI->oldCycleCount;
    _RBX->state.goalWeight = _RDI->goalWeight;
    _RBX->state.rate = _RDI->rate;
    _RBX->state.goalTime = _RDI->goalTime;
    _RBX->state.startWeight = _RDI->startWeight;
    _RBX->state.goalDuration = _RDI->goalDuration;
    _RBX->state.curveID = _RDI->curveID;
    InfoSetStateFlag(_RBX, XANIMSTATE_HAS_SYNC_GROUPS, _RDI->hasSyncGroups);
    _RBX->state.flags &= ~4u;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vcomiss xmm0, xmm7
      vmovss  dword ptr [rbx+3Ch], xmm0
    }
    hasChildren = _RDI->hasChildren;
    _RDI->transferStatus = 3;
    children = _RBX->children;
    if ( children && XAnimGetAnimInfo(children)->next )
    {
      do
        children = XAnimGetAnimInfo(children)->next;
      while ( XAnimGetAnimInfo(children)->next );
    }
    if ( hasChildren )
    {
      do
      {
        v35 = g_animInfoCount;
        if ( children )
        {
          if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3490, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
            __debugbreak();
          while ( 1 )
          {
            if ( XAnimGetAnimInfo(children)->animIndex <= g_xanimTransferInfo[v35].animIndex )
            {
              _RAX = XAnimGetAnimInfo(children);
              __asm { vucomiss xmm7, dword ptr [rax+3Ch] }
              if ( !v37 )
              {
                v38 = XAnimGetAnimInfo(children);
                if ( v38->animIndex != g_xanimTransferInfo[v35].animIndex || v38->subTreeID == g_xanimTransferInfo[v35].subTreeID )
                  break;
              }
            }
            if ( (children & 0x8000u) != 0 )
            {
              v40 = 32 * (children & 0x7FFF);
              if ( v40 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
              {
                LODWORD(v49) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
                LODWORD(after) = 32 * (children & 0x7FFF);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v49) )
                  __debugbreak();
              }
              v39 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v40];
            }
            else
            {
              if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
              {
                LODWORD(v49) = g_xanimMemoryGlobals.infoPoolSize;
                LODWORD(after) = children;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v49) )
                  __debugbreak();
              }
              v39 = &g_xanimMemoryGlobals.infoPool[children];
            }
            if ( !XAnimIsClientAuthNode(v39) )
            {
              __asm { vmovaps xmm2, xmm7; blendTime }
              XAnimClearTreeGoalWeightsNode(to, children, *(float *)&_XMM2, 1, LINEAR);
            }
            children = XAnimGetAnimInfo(children)->prev;
            if ( !children )
              goto LABEL_83;
          }
          if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3502, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
            __debugbreak();
        }
LABEL_83:
        v42 = XAnimTransferTo_r(obj, to, children, v9);
        if ( !XAnimGetAnimInfo(v42)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3506, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
        if ( XAnimGetAnimInfo(v42)->animIndex != g_xanimTransferInfo[v35].animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3507, ASSERT_TYPE_ASSERT, "(GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex)", (const char *)&queryFormat, "GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex") )
          __debugbreak();
        children = XAnimGetAnimInfo(v42)->prev;
        if ( children && !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3511, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
      }
      while ( g_xanimTransferInfo[v35].hasNext );
    }
    if ( children )
    {
      if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3516, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
        __debugbreak();
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v44 = 32 * (children & 0x7FFF);
          if ( v44 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v49) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(after) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v49) )
              __debugbreak();
          }
          v43 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v44];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v49) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(after) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v49) )
              __debugbreak();
          }
          v43 = &g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !XAnimIsClientAuthNode(v43) )
        {
          __asm { vmovaps xmm2, xmm7; blendTime }
          XAnimClearTreeGoalWeightsNode(to, children, *(float *)&_XMM2, 1, LINEAR);
        }
        children = XAnimGetAnimInfo(children)->prev;
      }
      while ( children );
      v9 = v55;
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
  return v9;
}

/*
==============
XAnimTreeHasLods
==============
*/
bool XAnimTreeHasLods(const XAnimTree *tree)
{
  if ( !tree )
    return 0;
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9508, ASSERT_TYPE_ASSERT, "(tree->anims != nullptr)", (const char *)&queryFormat, "tree->anims != nullptr") )
    __debugbreak();
  return tree->anims->numLods != 0;
}

/*
==============
XAnimTreeSetGoalLod
==============
*/
void XAnimTreeSetGoalLod(XAnimTree *tree, unsigned __int8 lod, __int16 goalTimeMsec)
{
  unsigned __int8 numLods; 
  __int16 v9; 
  __int16 blendTimeLeft; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9621, ASSERT_TYPE_ASSERT, "(tree != nullptr)", (const char *)&queryFormat, "tree != nullptr") )
    __debugbreak();
  _RSI = tree->anims;
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9624, ASSERT_TYPE_ASSERT, "(anims != nullptr)", (const char *)&queryFormat, "anims != nullptr") )
    __debugbreak();
  numLods = lod;
  if ( _RSI->numLods < lod )
    numLods = _RSI->numLods;
  v9 = numLods << 8;
  if ( tree->lodState.lod == v9 )
  {
    tree->lodState.lod = v9;
    tree->lodState.blendTimeLeft = 0;
    tree->lodState.goalLod = v9;
  }
  else
  {
    blendTimeLeft = tree->lodState.blendTimeLeft;
    if ( tree->lodState.goalLod == v9 )
    {
      if ( goalTimeMsec < blendTimeLeft )
        blendTimeLeft = goalTimeMsec;
      tree->lodState.blendTimeLeft = blendTimeLeft;
    }
    else
    {
      if ( blendTimeLeft )
      {
        if ( goalTimeMsec < blendTimeLeft )
          blendTimeLeft = goalTimeMsec;
        goalTimeMsec = blendTimeLeft;
      }
      tree->lodState.blendTimeLeft = goalTimeMsec;
      tree->lodState.goalLod = v9;
    }
    __asm { vmovss  xmm2, cs:__real@477fff00; max }
    _RCX = (unsigned int)_RSI->numLods - 1;
    __asm { vxorps  xmm1, xmm1, xmm1; min }
    if ( numLods < (unsigned int)_RCX )
      _RCX = numLods;
    __asm { vmovss  xmm0, dword ptr [rsi+rcx*4+40h]; val }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcvttss2si eax, xmm0 }
    tree->lodState.distance = _EAX;
  }
}

/*
==============
XAnimUpdateClientLodBlending
==============
*/

void __fastcall XAnimUpdateClientLodBlending(const DObj *obj, double deltaTime)
{
  XAnimTree *tree; 
  __int64 v14; 
  int v15; 
  bool v16; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9576, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  tree = obj->tree;
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9578, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  if ( tree )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; min
      vucomiss xmm6, xmm1
      vmulss  xmm0, xmm6, cs:__real@447a0000; val
      vmovss  xmm2, cs:__real@46fffe00; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcvttss2si esi, xmm0 }
    if ( tree->lodState.blendTimeLeft <= (__int16)_ESI )
    {
      tree->lodState.lod = tree->lodState.goalLod;
      tree->lodState.blendTimeLeft = 0;
    }
    else
    {
      _RDI = DCONST_DVARFLT_xanim_lodLerpFactor;
      if ( !DCONST_DVARFLT_xanim_lodLerpFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodLerpFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, cs:__real@43800000
        vcvttss2si ecx, xmm1
      }
      v14 = (__int16)_ECX * (tree->lodState.goalLod - tree->lodState.lod);
      v15 = (BYTE4(v14) + (int)v14) >> 8;
      v16 = (__int16)(tree->lodState.lod + v15) < 0;
      tree->lodState.lod += v15;
      if ( v16 )
        tree->lodState.lod = 0;
      tree->lodState.blendTimeLeft -= _ESI;
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
XAnimUpdateDirtyCustomNodes
==============
*/

char __fastcall XAnimUpdateDirtyCustomNodes(const DObj *obj, unsigned __int16 infoIndex, double dtime)
{
  XAnimTree *tree; 
  XAnimInfo *NonRootAnimInfo; 
  char v11; 
  unsigned __int16 children; 
  unsigned __int16 next; 
  const XAnim_s *SubTreeAnims; 
  char result; 

  tree = obj->tree;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9423, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9424, ASSERT_TYPE_ASSERT, "( tree->anims )", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( !infoIndex )
    goto LABEL_18;
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v11 = 0;
  if ( !XAnimGetAnimInfo(infoIndex)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9435, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( infoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
    __debugbreak();
  if ( NonRootAnimInfo->animToModel )
  {
LABEL_18:
    result = 0;
  }
  else
  {
    children = NonRootAnimInfo->children;
    if ( children )
    {
      do
      {
        __asm { vmovaps xmm2, xmm6; dtime }
        next = XAnimGetAnimInfo(children)->next;
        v11 |= XAnimUpdateDirtyCustomNodes(obj, children, *(float *)&_XMM2);
        children = next;
      }
      while ( next );
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, NonRootAnimInfo) && (NonRootAnimInfo->state.flags & 8) != 0 )
    {
      __asm { vmovaps xmm3, xmm6; dtime }
      XAnimCustomNodeUpdate(obj, NonRootAnimInfo, infoIndex, *(float *)&_XMM3, 0, NULL);
      v11 = 1;
    }
    result = v11;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
XAnimUpdateInfoSync
==============
*/
void XAnimUpdateInfoSync(const DObj *obj, unsigned __int16 infoIndex, bool bNotify, const XAnimState *syncState, float dtime, XAnimNotifyHandle *inOutNotifyHead)
{
  char v14; 
  bool v17; 
  bool v18; 
  unsigned __int16 children; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  unsigned __int16 v25; 
  float fmt; 
  XAnimNotifyHandle *v29; 
  __int64 v30; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  _RSI = syncState;
  __asm
  {
    vmovss  xmm7, [rsp+88h+dtime]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  _RAX = GetNonRootAnimInfo(infoIndex);
  _RBX = _RAX;
  __asm { vucomiss xmm6, dword ptr [rax+3Ch] }
  if ( v14 )
  {
    XAnimCheckFreeInfo(obj->tree, infoIndex, 0, obj);
  }
  else
  {
    __asm { vucomiss xmm6, dword ptr [rax+38h] }
    if ( v14 )
      bNotify = 0;
    v17 = !_RAX->inuse;
    if ( !_RAX->inuse )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2773, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse");
      v17 = !v18;
      if ( v18 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vucomiss xmm0, dword ptr [rbx+2Ch]
    }
    if ( !v17 || _RBX->state.oldCycleCount != _RSI->oldCycleCount )
    {
      __asm { vmovss  dword ptr [rbx+28h], xmm0 }
      _RBX->state.cycleCount = _RSI->oldCycleCount;
      _RBX->state.oldTime = _RSI->oldTime;
      _RBX->state.oldCycleCount = _RSI->oldCycleCount;
      _RBX->notifyIndex = -1;
    }
    if ( bNotify && (!obj->tree || !obj->tree->owner[0]) )
    {
      __asm { vmovss  xmm2, dword ptr [rsi]; time }
      XAnimProcessServerNotify(obj, _RBX, *(double *)&_XMM2);
    }
    _RBX->state.currentAnimTime = _RSI->currentAnimTime;
    _RBX->state.cycleCount = _RSI->cycleCount;
    _RBX->notifyIndex = -1;
    if ( bNotify && DObjHasClientFlag(obj) )
    {
      __asm { vmovaps xmm2, xmm7; dtime }
      XAnimProcessClientNotify(obj, _RBX, *(double *)&_XMM2, inOutNotifyHead);
    }
    children = _RBX->children;
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v24 = 32 * (children & 0x7FFF);
          if ( v24 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v30) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v29) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v29, v30) )
              __debugbreak();
          }
          v23 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v24];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v30) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v29) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          v23 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        v25 = *((_WORD *)v23 + 5);
        __asm { vmovss  dword ptr [rsp+88h+fmt], xmm7 }
        XAnimUpdateInfoSync(obj, children, bNotify, _RSI, fmt, inOutNotifyHead);
        children = v25;
      }
      while ( v25 );
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
XAnimUpdateLeadSyncGroupNode
==============
*/
void XAnimUpdateLeadSyncGroupNode(const DObj *obj, const XAnimSyncGroupCalcData *syncGroupCalcData, XAnimNotifyHandle *inOutNotifyHead)
{
  unsigned int v7; 
  bool v8; 
  unsigned __int16 v12; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2116, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !syncGroupCalcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2117, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2120, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v7 = 0;
  v8 = (const XAnimSyncGroupCalcData *)&syncGroupCalcData->syncGroupInfo[0].leadAccumDeltaTime == NULL;
  _RBX = &syncGroupCalcData->syncGroupInfo[0].leadAccumDeltaTime;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx-0Ch]
      vucomiss xmm0, xmm6
    }
    if ( !v8 )
    {
      v12 = *((_WORD *)_RBX - 4);
      if ( v12 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx]
          vucomiss xmm1, xmm6
          vmulss  xmm2, xmm0, xmm1; dtime
        }
        XAnimUpdateTimeAndNotetrackSyncSubTree(obj, v12, *(float *)&_XMM2, *((_BYTE *)_RBX + 4), inOutNotifyHead);
      }
    }
    ++v7;
    _RBX += 5;
    v8 = v7 == 4;
  }
  while ( v7 < 4 );
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
XAnimUpdateOldTime
==============
*/

void __fastcall XAnimUpdateOldTime(DObj *obj, unsigned __int16 infoIndex, XAnimState *syncState, double dtime, bool parentHasWeight, bool *childHasTimeForParent, bool *parentHasSyncGroups, int entnum, XModelNameMap *modelNameMap)
{
  bool *v12; 
  XAnimTree *tree; 
  unsigned __int16 v15; 
  bool v19; 
  char v29; 
  char v35; 
  bool v37; 
  bool v38; 
  bool v39; 
  int v40; 
  unsigned __int16 v41; 
  XModelNameMap *v42; 
  int v43; 
  bool v44; 
  unsigned __int16 next; 
  bool v48; 
  char v51; 
  char v52; 
  float fmt; 
  bool v56; 
  XAnimInfo *NonRootAnimInfo; 
  XAnimTree *v58; 
  void *retaddr; 
  bool v64; 

  _RAX = &retaddr;
  v12 = parentHasSyncGroups;
  tree = obj->tree;
  _R13 = syncState;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v15 = infoIndex;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  v58 = tree;
  __asm { vmovaps xmm6, xmm3 }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3876, ASSERT_TYPE_ASSERT, "(parentHasSyncGroups)", (const char *)&queryFormat, "parentHasSyncGroups") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3877, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3878, ASSERT_TYPE_ASSERT, "( tree->anims )", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  NonRootAnimInfo = GetNonRootAnimInfo(v15);
  _RDI = (__int64)NonRootAnimInfo;
  if ( !XAnimGetAnimInfo(v15)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3883, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( infoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
    __debugbreak();
  v19 = parentHasWeight;
  _R14 = (_DWORD *)&NonRootAnimInfo->state.currentAnimTime;
  if ( parentHasWeight )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0Ch]
      vcomiss xmm0, xmm6
      vmovss  xmm4, dword ptr [r14+1Ch]
      vmovss  xmm2, dword ptr [r14+10h]
      vmovss  xmm3, dword ptr [r14+20h]; start
      vsubss  xmm0, xmm4, xmm0
      vmovss  dword ptr [rsp+0C8h+fmt], xmm2
      vaddss  xmm1, xmm0, xmm6; time
      vmovaps xmm2, xmm4; goalTime
    }
    *(double *)&_XMM0 = XAnimCurve_GetValue((const XAnimCurveID)NonRootAnimInfo->state.curveID, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
    __asm { vcomiss xmm0, cs:__real@358637be }
    _RAX = &NonRootAnimInfo->state.weight;
    __asm { vmovss  dword ptr [rax], xmm0 }
    if ( v29 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+10h]
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vmovss  dword ptr [rax], xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0Ch]
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [r14+0Ch], xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+38h] }
    _RAX = &NonRootAnimInfo->state.weight;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  dword ptr [rdi+48h], xmm0
    }
    *(_DWORD *)(_RDI + 52) = 0;
    *(_DWORD *)(_RDI + 68) = 0;
  }
  if ( v19 )
  {
    __asm { vucomiss xmm7, dword ptr [rax] }
    parentHasWeight = 1;
  }
  else
  {
    parentHasWeight = 0;
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(_RDI + 77) &= ~1u;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(_RDI + 77) &= ~4u;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(_RDI + 77) &= ~0x20u;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(_RDI + 77) &= ~0x80u;
  if ( !XAnimGetAnimInfo(v15)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3912, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( infoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
    __debugbreak();
  v35 = 0;
  if ( *(_QWORD *)(_RDI + 24) )
  {
    _RBX = *(_QWORD *)(_RDI + 32);
    v37 = _RBX == 0;
    if ( !_RBX )
    {
      v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3919, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts");
      v37 = !v38;
      if ( v38 )
        __debugbreak();
    }
    __asm { vucomiss xmm7, dword ptr [rbx+68h] }
    if ( v37 )
    {
      v39 = 0;
      v64 = 0;
    }
    else
    {
      v39 = 1;
      v64 = 1;
    }
  }
  else
  {
    v64 = 0;
    v40 = *(_DWORD *)(_RDI + 32);
    if ( (v40 & 4) != 0 )
      _R13 = (XAnimState *)(_RDI + 40);
    if ( (v40 & 3) != 0 )
      v35 = *(_BYTE *)(_RDI + 38) != 4;
    v41 = *(_WORD *)(_RDI + 12);
    v42 = modelNameMap;
    if ( v41 )
    {
      v43 = entnum;
      v44 = parentHasWeight;
      do
      {
        __asm { vmovaps xmm3, xmm6; dtime }
        next = XAnimGetAnimInfo(v41)->next;
        XAnimUpdateOldTime(obj, v41, _R13, *(float *)&_XMM3, v44, &v64, &v56, v43, v42);
        v35 |= v56;
        v41 = next;
      }
      while ( next );
      _RDI = (__int64)NonRootAnimInfo;
      v12 = parentHasSyncGroups;
      _R14 = (_DWORD *)&NonRootAnimInfo->state.currentAnimTime;
    }
    v15 = infoIndex;
    __asm { vmovaps xmm3, xmm6; dtime }
    XAnimCustomNodeUpdate(obj, (XAnimInfo *)_RDI, infoIndex, *(float *)&_XMM3, 0, v42);
    v39 = v64;
    tree = v58;
  }
  if ( parentHasWeight && v39 )
  {
    *childHasTimeForParent = 1;
  }
  else
  {
    v48 = *(_QWORD *)(_RDI + 24) == 0i64;
    if ( *(_QWORD *)(_RDI + 24) || (v48 = (*(_BYTE *)(_RDI + 32) & 4) == 0) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vucomiss xmm0, dword ptr [r14]
      }
      if ( !v48 || *(_WORD *)(_RDI + 48) != _R13->cycleCount )
      {
        __asm { vmovss  dword ptr [r14], xmm0 }
        *(_WORD *)(_RDI + 48) = _R13->cycleCount;
        *(_WORD *)(_RDI + 2) = -1;
      }
    }
    else
    {
      __asm { vmovaps xmm2, xmm7; goalTime }
      XAnimInitTime(tree, v15, *(double *)&_XMM2);
    }
  }
  v51 = *(_BYTE *)(_RDI + 77);
  if ( (v51 & 0x10) == 0 || (v52 = *(_BYTE *)(_RDI + 77), *(_QWORD *)(_RDI + 24)) && (v51 & 0x40) == 0 )
  {
    *(_DWORD *)(_RDI + 44) = *_R14;
    *(_WORD *)(_RDI + 50) = *(_WORD *)(_RDI + 48);
    v52 = *(_BYTE *)(_RDI + 77);
  }
  *(_BYTE *)(_RDI + 77) = v52 & 0xBF;
  InfoSetStateFlag((XAnimInfo *)_RDI, XANIMSTATE_HAS_SYNC_GROUPS, v35);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_58]
  }
  *v12 = v35;
}

/*
==============
XAnimUpdateServerNotifyIndex
==============
*/
void XAnimUpdateServerNotifyIndex(XAnimInfo *info, const XAnimParts *parts)
{
  bool v4; 
  bool v5; 

  _RBX = info;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8295, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( !_RBX->notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8296, ASSERT_TYPE_ASSERT, "(info->notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "info->notifyName != NULL_SCR_STRING") )
    __debugbreak();
  v4 = _RBX->notifyIndex == -1;
  if ( _RBX->notifyIndex != -1 )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8297, ASSERT_TYPE_ASSERT, "(info->notifyIndex == -1)", (const char *)&queryFormat, "info->notifyIndex == -1");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]; time
    vucomiss xmm1, cs:__real@3f800000
  }
  if ( !v4 )
    _RBX->notifyIndex = XAnimGetNextNotifyIndex(parts, *(double *)&_XMM1);
}

/*
==============
XAnimUpdateSyncGroups
==============
*/

void __fastcall XAnimUpdateSyncGroups(const DObj *obj, double dtime, bool bNotify, XAnimSyncGroupCalcData *syncGroupCalcData)
{
  XAnimTree *tree; 
  unsigned __int16 children; 
  float fmt; 
  float parentAccumTime; 
  float frequencies[2]; 
  __int64 v21; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RDI = syncGroupCalcData;
  __asm { vmovaps xmm6, xmm1 }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2086, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2087, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2090, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  _RSI = XAnimGetAnimInfo(tree->children);
  if ( !_RSI->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2094, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rsi+3Ch] }
  children = tree->children;
  __asm { vmovss  [rsp+88h+parentAccumTime], xmm6 }
  *(_QWORD *)frequencies = 0i64;
  v21 = 0i64;
  __asm { vmovss  dword ptr [rsp+88h+fmt], xmm0 }
  XAnimGetSyncGroupData_r(tree, children, _RDI, frequencies, fmt, parentAccumTime, bNotify);
  __asm
  {
    vmovss  xmm0, [rsp+88h+frequencies]
    vmovss  xmm1, [rsp+88h+frequencies+4]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rsp+88h+var_40]
    vmovss  dword ptr [rdi+14h], xmm1
    vmovss  xmm1, dword ptr [rsp+88h+var_40+4]
    vmovss  dword ptr [rdi+28h], xmm0
    vmovss  dword ptr [rdi+3Ch], xmm1
    vmovaps xmm6, [rsp+88h+var_28]
  }
}

/*
==============
XAnimUpdateTimeAndNotetrack
==============
*/

void __fastcall XAnimUpdateTimeAndNotetrack(const DObj *obj, unsigned __int16 infoIndex, double dtime, bool bNotify, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimSyncGroupCalcData syncGroupCalcData; 

  __asm
  {
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  memset_0(&syncGroupCalcData, 0, sizeof(syncGroupCalcData));
  __asm { vmovaps xmm1, xmm6; dtime }
  XAnimUpdateSyncGroups(obj, *(double *)&_XMM1, bNotify, &syncGroupCalcData);
  XAnimUpdateLeadSyncGroupNode(obj, &syncGroupCalcData, inOutNotifyHead);
  __asm { vmovaps xmm2, xmm6; dtime }
  XAnimUpdateTimeAndNotetrackInternal(obj, infoIndex, *(float *)&_XMM2, bNotify, &syncGroupCalcData, inOutNotifyHead);
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
}

/*
==============
XAnimUpdateTimeAndNotetrackInternal
==============
*/

void __fastcall XAnimUpdateTimeAndNotetrackInternal(const DObj *obj, unsigned __int16 infoIndex, double dtime, bool bNotify, const XAnimSyncGroupCalcData *syncGroupCalcData, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimTree *tree; 
  bool v16; 
  bool v17; 
  unsigned int flags; 
  unsigned __int8 v20; 
  unsigned __int16 leadInfoIndex; 
  XAnimInfo *AnimInfo; 
  const XAnimState *p_state; 
  const char *AnimDebugName; 
  const char *v26; 
  bool v29; 
  bool v30; 
  unsigned __int16 children; 
  unsigned __int16 next; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
    vmovaps xmm6, xmm2
  }
  if ( !syncGroupCalcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3001, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3004, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  _RSI = XAnimGetAnimInfo(infoIndex);
  v16 = !_RSI->inuse;
  if ( !_RSI->inuse )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3009, ASSERT_TYPE_ASSERT, "( info->inuse )", (const char *)&queryFormat, "info->inuse");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm { vucomiss xmm7, dword ptr [rsi+3Ch] }
  if ( v16 )
  {
    XAnimCheckFreeInfo(obj->tree, infoIndex, 0, obj);
    goto LABEL_48;
  }
  __asm { vucomiss xmm7, dword ptr [rsi+38h] }
  if ( v16 )
    bNotify = 0;
  if ( _RSI->animToModel )
  {
    __asm { vmovaps xmm3, xmm6; dtime }
    XAnimUpdateTimeAndNotetrackLeaf(obj, _RSI->parts, infoIndex, *(float *)&_XMM3, bNotify, inOutNotifyHead);
    goto LABEL_48;
  }
  flags = _RSI->animParent.flags;
  if ( (flags & 3) != 0 )
  {
    v20 = _RSI->animParent.syncGroup[0];
    if ( v20 == 4 )
    {
      *(float *)&_XMM0 = XAnimGetAverageRateFrequency(tree, infoIndex);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rsi+40h]
        vmulss  xmm2, xmm6, xmm1; dtime
        vucomiss xmm2, xmm7
      }
      if ( !v16 )
      {
        XAnimUpdateTimeAndNotetrackSyncSubTree(obj, infoIndex, *(float *)&_XMM2, bNotify, inOutNotifyHead);
        goto LABEL_48;
      }
      goto LABEL_34;
    }
    if ( v20 >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3032, ASSERT_TYPE_ASSERT, "(info->animParent.syncGroup < XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "info->animParent.syncGroup < XAnimSyncGroupID::COUNT") )
      __debugbreak();
    leadInfoIndex = syncGroupCalcData->syncGroupInfo[(unsigned __int8)_RSI->animParent.syncGroup[0]].leadInfoIndex;
    if ( infoIndex != leadInfoIndex )
    {
      __asm
      {
        vmulss  xmm6, xmm6, dword ptr [r15+rcx*4]
        vucomiss xmm6, xmm7
      }
      if ( infoIndex != leadInfoIndex )
      {
        if ( !leadInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3051, ASSERT_TYPE_ASSERT, "(leadInfoIndex)", (const char *)&queryFormat, "leadInfoIndex") )
          __debugbreak();
        AnimInfo = XAnimGetAnimInfo(leadInfoIndex);
        if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3053, ASSERT_TYPE_ASSERT, "(leadInfo)", (const char *)&queryFormat, "leadInfo") )
          __debugbreak();
        p_state = &AnimInfo->state;
        if ( ((LOBYTE(_RSI->parts) ^ LOBYTE(AnimInfo->parts)) & 1) != 0 )
        {
          AnimDebugName = XAnimGetAnimDebugName(tree->anims, AnimInfo->animIndex);
          v26 = XAnimGetAnimDebugName(tree->anims, _RSI->animIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3057, ASSERT_TYPE_ASSERT, "((leadInfo->animParent.flags & XANIM_LOOP_SYNC_TIME) == (info->animParent.flags & XANIM_LOOP_SYNC_TIME))", "%s\n\tNodes ( '%s','%s' ) share the same sync group number but they use different loopsync/nonloopsync keywords.", "(leadInfo->animParent.flags & XANIM_LOOP_SYNC_TIME) == (info->animParent.flags & XANIM_LOOP_SYNC_TIME)", v26, AnimDebugName) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
        XAnimUpdateInfoSync(obj, infoIndex, bNotify, p_state, fmt, inOutNotifyHead);
        goto LABEL_48;
      }
LABEL_34:
      XAnimCheckFreeInfo(obj->tree, infoIndex, 1, obj);
    }
  }
  else
  {
    if ( (flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3077, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_SYNC_ROOT))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_SYNC_ROOT)") )
      __debugbreak();
    v29 = obj->entnum == 0;
    if ( obj->entnum )
    {
      v29 = tree->owner[0] == 0;
      if ( !tree->owner[0] )
      {
        v29 = _RSI->notifyName == 0;
        if ( _RSI->notifyName )
        {
          v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3078, ASSERT_TYPE_ASSERT, "(!obj->entnum || !(tree->owner == XAnimOwner::SERVER && (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) ))", (const char *)&queryFormat, "!obj->entnum || !(tree->owner == XAnimOwner::SERVER && (info->notifyName != NULL_SCR_STRING) )");
          v29 = !v30;
          if ( v30 )
            __debugbreak();
        }
      }
    }
    __asm
    {
      vmulss  xmm6, xmm6, dword ptr [rsi+40h]
      vucomiss xmm6, xmm7
    }
    if ( v29 )
      goto LABEL_34;
    children = _RSI->children;
    if ( children )
    {
      do
      {
        __asm { vmovaps xmm2, xmm6; dtime }
        next = XAnimGetAnimInfo(children)->next;
        XAnimUpdateTimeAndNotetrackInternal(obj, children, *(float *)&_XMM2, bNotify, syncGroupCalcData, inOutNotifyHead);
        children = next;
      }
      while ( next );
    }
  }
LABEL_48:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
XAnimUpdateTimeAndNotetrackLeaf
==============
*/

void __fastcall XAnimUpdateTimeAndNotetrackLeaf(const DObj *obj, const XAnimParts *parts, unsigned __int16 infoIndex, double dtime, bool bNotify, XAnimNotifyHandle *inOutNotifyHead)
{
  bool v21; 
  const char *AnimDebugName; 
  const char *v26; 
  bool v27; 
  unsigned __int16 cycleCount; 
  unsigned __int8 flags; 
  int v39; 
  int v40; 
  char v47; 
  bool HasClientFlag; 
  unsigned __int8 v52; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  __int64 v64; 
  double v65; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _R14 = parts;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm6, xmm3
  }
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2821, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  __asm { vxorps  xmm8, xmm8, xmm8 }
  _RDI = XAnimGetAnimInfo(infoIndex);
  __asm { vcomiss xmm8, dword ptr [rax+2Ch] }
  if ( !(v47 | v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2826, ASSERT_TYPE_ASSERT, "(state->oldTime >= 0)", (const char *)&queryFormat, "state->oldTime >= 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14+68h]
    vmulss  xmm1, xmm0, dword ptr [rdi+40h]
    vmulss  xmm9, xmm6, xmm1
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 653, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  v21 = (_RDI->state.flags & 0x10) == 0;
  if ( (_RDI->state.flags & 0x10) != 0 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vcomiss xmm6, xmm8
      vmovss  xmm6, dword ptr [rdi+40h]
      vucomiss xmm6, xmm8
    }
    if ( (_RDI->state.flags & 0x10) != 0 )
    {
      AnimDebugName = XAnimGetAnimDebugName(obj->tree->anims, _RDI->animIndex);
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_70], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2833, ASSERT_TYPE_ASSERT, "(state->rate == 0.0f)", "%s\n\tXAnimUpdateTimeAndNotetrackLeaf '%s': state->rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "state->rate == 0.0f", AnimDebugName, v65) )
        __debugbreak();
    }
    v21 = (_R14->flags & 1) == 0;
    if ( (_R14->flags & 1) != 0 )
    {
      v26 = XAnimGetAnimDebugName(obj->tree->anims, _RDI->animIndex);
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2834, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) == 0)", "%s\n\tXAnimUpdateTimeAndNotetrackLeaf '%s': (parts->flags & ANIM_LOOP) must be false if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "(parts->flags & ANIM_LOOP) == 0", v26);
      v21 = !v27;
      if ( v27 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vsubss  xmm9, xmm0, dword ptr [rdi+2Ch]
    }
  }
  __asm { vucomiss xmm9, xmm8 }
  if ( !v21 )
  {
    __asm
    {
      vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@46fffe00
      vmovaps [rsp+0A8h+var_38], xmm7
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2841, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", v60) )
      __debugbreak();
    __asm
    {
      vaddss  xmm6, xmm9, dword ptr [rdi+2Ch]
      vcomiss xmm6, xmm8
    }
    cycleCount = _RDI->state.cycleCount;
    __asm
    {
      vcomiss xmm9, xmm8
      vmovss  xmm7, cs:__real@3f800000
      vcomiss xmm6, xmm7
    }
    if ( (_R14->flags & 1) != 0 )
    {
      __asm { vmovss  xmm0, cs:__real@bf800000 }
      while ( 1 )
      {
        __asm { vaddss  xmm6, xmm6, xmm0 }
        ++cycleCount;
        __asm { vcomiss xmm6, xmm7 }
      }
    }
    __asm
    {
      vmovss  xmm1, cs:__real@3f7ffffe
      vcmpless xmm0, xmm1, dword ptr [rdi+2Ch]
      vblendvps xmm6, xmm1, xmm7, xmm0
    }
    flags = _R14->flags;
    v39 = 0;
    v40 = 0;
    if ( (flags & 1) != 0 )
    {
      __asm { vcomiss xmm6, xmm7 }
      LOBYTE(v40) = 0;
    }
    else
    {
      __asm { vcomiss xmm6, xmm7 }
      LOBYTE(v40) = (flags & 1) == 0;
    }
    if ( !v40 )
    {
      LODWORD(v64) = flags & 1;
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_78], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2894, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f))", "%s\n\ttime: %f, loop: %d", "(parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f)", v62, v64) )
        __debugbreak();
    }
    if ( !_RDI->notifyName && !_RDI->notifyType )
      goto LABEL_54;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax
      vsubss  xmm1, xmm0, xmm6
      vcomiss xmm2, xmm1
    }
    if ( cycleCount >= _RDI->state.cycleCount )
    {
LABEL_54:
      if ( bNotify && (!obj->tree || !obj->tree->owner[0]) )
      {
        __asm { vmovaps xmm2, xmm6; time }
        XAnimProcessServerNotify(obj, _RDI, *(double *)&_XMM2);
      }
      v47 = 0;
      __asm { vmovss  dword ptr [rdi+28h], xmm6 }
      _RDI->state.cycleCount = cycleCount;
      _RDI->notifyIndex = -1;
      if ( bNotify )
      {
        HasClientFlag = DObjHasClientFlag(obj);
        v47 = 0;
        if ( HasClientFlag )
        {
          __asm { vmovaps xmm2, xmm9; dtime }
          XAnimProcessClientNotify(obj, _RDI, *(double *)&_XMM2, inOutNotifyHead);
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vcomiss xmm0, xmm8
      }
      if ( v47 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A8h+var_80], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2914, ASSERT_TYPE_ASSERT, "( ( state->currentAnimTime >= 0 ) )", "( state->currentAnimTime ) = %g", v61) )
          __debugbreak();
      }
      v52 = _R14->flags;
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
      if ( (v52 & 1) != 0 )
      {
        __asm { vcomiss xmm0, xmm7 }
        LOBYTE(v39) = 0;
      }
      else
      {
        __asm { vcomiss xmm0, xmm7 }
        LOBYTE(v39) = (v52 & 1) == 0;
      }
      if ( !v39 )
      {
        LODWORD(v64) = v52 & 1;
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A8h+var_78], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2915, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f))", "%s\n\ttime: %f, loop: %d", "(parts->flags & ANIM_LOOP) ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f)", v63, v64) )
          __debugbreak();
      }
    }
    __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
XAnimUpdateTimeAndNotetrackSyncSubTree
==============
*/

void __fastcall XAnimUpdateTimeAndNotetrackSyncSubTree(const DObj *obj, unsigned __int16 infoIndex, double dtime, bool bNotify, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimInfo *AnimInfo; 
  bool v15; 
  bool v17; 
  unsigned __int16 oldCycleCount; 
  int v27; 
  int v32; 
  int v33; 
  char v40; 
  bool HasClientFlag; 
  unsigned __int16 children; 
  unsigned __int8 *v48; 
  unsigned int v49; 
  unsigned __int16 v50; 
  float fmt; 
  XAnimNotifyHandle *v57; 
  XAnimNotifyHandle *v58; 
  XAnimNotifyHandle *v59; 
  XAnimNotifyHandle *v60; 
  __int64 v61; 
  double v62; 
  double v63; 
  double v64; 
  __int64 v65; 
  double v66; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmm9, xmm2
  }
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  v15 = ((__int64)AnimInfo->parts & 4) == 0;
  _RBP = &AnimInfo->state;
  if ( ((__int64)AnimInfo->parts & 4) == 0 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2930, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_SYNC_ROOT)", (const char *)&queryFormat, "info->animParent.flags & XANIM_SYNC_ROOT");
    v15 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vcomiss xmm0, xmm7
  }
  if ( !v15 )
  {
    __asm
    {
      vcvtss2sd xmm2, xmm0, xmm0
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0A8h+var_70], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0A8h+var_78], xmm1
      vmovsd  [rsp+0A8h+var_80], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2932, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( state->oldTime ) && ( state->oldTime ) <= ( 1.0f )", "state->oldTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v57, v62, v66) )
      __debugbreak();
  }
  __asm
  {
    vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@46fffe00
    vcvtss2sd xmm0, xmm9, xmm9
    vmovsd  [rsp+0A8h+var_80], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2934, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", *(double *)&v58) )
    __debugbreak();
  __asm
  {
    vaddss  xmm6, xmm9, dword ptr [rbp+4]
    vcomiss xmm6, xmm8
  }
  oldCycleCount = AnimInfo->state.oldCycleCount;
  __asm { vcomiss xmm6, xmm7 }
  v27 = AnimInfo->animParent.flags & 1;
  if ( (AnimInfo->animParent.flags & 2) == 0 )
  {
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2950, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME)", (const char *)&queryFormat, "info->animParent.flags & XANIM_LOOP_SYNC_TIME") )
      __debugbreak();
    __asm { vmovss  xmm0, cs:__real@bf800000 }
    while ( 1 )
    {
      __asm { vaddss  xmm6, xmm6, xmm0 }
      ++oldCycleCount;
      __asm { vcomiss xmm6, xmm7 }
    }
  }
  if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2945, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_LOOP_SYNC_TIME))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_LOOP_SYNC_TIME)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f7ffffe
    vcmpless xmm0, xmm1, dword ptr [rbp+4]
    vblendvps xmm6, xmm1, xmm7, xmm0
  }
  v32 = 0;
  if ( (AnimInfo->animParent.flags & 1) != 0 )
  {
    __asm { vcomiss xmm6, xmm7 }
    v33 = 0;
  }
  else
  {
    __asm { vcomiss xmm6, xmm7 }
    v33 = 1;
  }
  if ( !v33 )
  {
    LODWORD(v65) = AnimInfo->animParent.flags & 1;
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_78], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2962, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (time < 1.f) : (time <= 1.f))", "%s\n\ttime: %f, info->animParent.flags & XANIM_LOOP_SYNC_TIME: %d", "info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (time < 1.f) : (time <= 1.f)", v63, v65) )
      __debugbreak();
  }
  if ( !AnimInfo->notifyName && !AnimInfo->notifyType )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vsubss  xmm1, xmm0, xmm6
    vcomiss xmm2, xmm1
  }
  if ( oldCycleCount >= AnimInfo->state.cycleCount )
  {
LABEL_58:
    if ( bNotify && (!obj->tree || !obj->tree->owner[0]) )
    {
      __asm { vmovaps xmm2, xmm6; time }
      XAnimProcessServerNotify(obj, AnimInfo, *(double *)&_XMM2);
    }
    AnimInfo->state.cycleCount = oldCycleCount;
    __asm { vmovss  dword ptr [rbp+0], xmm6 }
    AnimInfo->notifyIndex = -1;
    v40 = 0;
    if ( bNotify )
    {
      HasClientFlag = DObjHasClientFlag(obj);
      v40 = 0;
      if ( HasClientFlag )
      {
        __asm { vmovaps xmm2, xmm9; dtime }
        XAnimProcessClientNotify(obj, AnimInfo, *(double *)&_XMM2, inOutNotifyHead);
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vcomiss xmm0, xmm8
    }
    if ( v40 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2982, ASSERT_TYPE_ASSERT, "( ( state->currentAnimTime >= 0 ) )", "( state->currentAnimTime ) = %g", *(double *)&v60) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rbp+0] }
    if ( (AnimInfo->animParent.flags & 1) != 0 )
    {
      __asm { vcomiss xmm0, xmm7 }
      LOBYTE(v32) = 0;
    }
    else
    {
      __asm { vcomiss xmm0, xmm7 }
      LOBYTE(v32) = (AnimInfo->animParent.flags & 1) == 0;
    }
    if ( !v32 )
    {
      LODWORD(v65) = AnimInfo->animParent.flags & 1;
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_78], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2983, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f))", "%s\n\ttime: %f, info->animParent.flags & XANIM_LOOP_SYNC_TIME: %d", "info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f)", v64, v65) )
        __debugbreak();
    }
    children = AnimInfo->children;
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v49 = 32 * (children & 0x7FFF);
          if ( v49 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v61) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v59) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v59, v61) )
              __debugbreak();
          }
          v48 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v49];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v61) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v59) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v59, v61) )
              __debugbreak();
          }
          v48 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        v50 = *((_WORD *)v48 + 5);
        __asm { vmovss  dword ptr [rsp+0A8h+fmt], xmm9 }
        XAnimUpdateInfoSync(obj, children, bNotify, _RBP, fmt, inOutNotifyHead);
        children = v50;
      }
      while ( v50 );
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
XAnimValidateNotetrackTimes
==============
*/

bool __fastcall XAnimValidateNotetrackTimes(const XAnimParts *parts, double notifyInStartTime, double notifyInEndTime, double notifyOutStartTime, float notifyOutEndTime, bool throwError)
{
  bool v13; 
  bool v14; 
  bool result; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm1
  }
  v13 = !throwError;
  if ( throwError )
  {
    v13 = parts == NULL;
    if ( !parts )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3110, ASSERT_TYPE_ASSERT, "(!throwError || (throwError && parts))", (const char *)&queryFormat, "!throwError || (throwError && parts)");
      v13 = !v14;
      if ( v14 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vucomiss xmm7, xmm0
    vxorps  xmm2, xmm2, xmm2
  }
  if ( !v13 )
    goto LABEL_7;
  __asm { vucomiss xmm8, xmm0 }
  if ( !v13 )
  {
LABEL_7:
    __asm
    {
      vcomiss xmm7, xmm2
      vcomiss xmm8, xmm2
    }
  }
  __asm
  {
    vucomiss xmm6, xmm0
    vmovss  xmm1, [rsp+68h+notifyOutEndTime]
  }
  if ( !v13 )
    goto LABEL_10;
  __asm { vucomiss xmm1, xmm0 }
  if ( !v13 )
  {
LABEL_10:
    __asm
    {
      vcomiss xmm6, xmm2
      vcomiss xmm1, xmm2
    }
  }
  __asm { vucomiss xmm7, xmm0 }
  if ( !v13 )
  {
    __asm { vucomiss xmm7, xmm8 }
    if ( v13 )
    {
      if ( throwError )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC440, 358i64, parts->name);
LABEL_28:
      result = 0;
      goto LABEL_29;
    }
  }
  __asm { vucomiss xmm6, xmm0 }
  if ( !v13 )
  {
    __asm { vucomiss xmm6, xmm1 }
    if ( v13 )
    {
      if ( throwError )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC4B0, 359i64, parts->name);
      goto LABEL_28;
    }
  }
  __asm { vucomiss xmm7, xmm0 }
  if ( !v13 )
    goto LABEL_21;
  __asm { vucomiss xmm8, xmm0 }
  if ( !v13 )
  {
LABEL_21:
    __asm { vcomiss xmm7, xmm8 }
    if ( throwError )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC530, 360i64, parts->name);
    goto LABEL_28;
  }
  __asm { vucomiss xmm6, xmm0 }
  if ( !v13 )
  {
    __asm { vcomiss xmm6, xmm1 }
    if ( throwError )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC590, 361i64, parts->name);
    goto LABEL_28;
  }
  __asm { vucomiss xmm1, xmm0 }
  result = 1;
LABEL_29:
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return result;
}

/*
==============
XAnimWillBeLodCulled
==============
*/
bool XAnimWillBeLodCulled(const XAnimTree *tree, unsigned __int16 animIndex)
{
  __int16 calcLod; 
  unsigned __int8 v7; 
  const dvar_t *v8; 
  unsigned __int8 v9; 
  char v11; 

  if ( !tree )
    return 0;
  if ( !tree->owner[0] )
    return 0;
  calcLod = tree->lodState.calcLod;
  if ( !calcLod )
    return 0;
  v7 = truncate_cast<unsigned char,int>(calcLod / 256);
  v8 = DCONST_DVARBOOL_xanim_lodEnable;
  v9 = v7;
  if ( !DCONST_DVARBOOL_xanim_lodEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return 0;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_lodOverride, "xanim_lodOverride");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( !v11 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_lodOverride, "xanim_lodOverride");
    __asm { vcvttss2si ecx, xmm0; val }
    v9 = truncate_cast<unsigned char,int>(_ECX);
  }
  return v9 && tree->anims->entries[animIndex].lod < v9;
}

/*
==============
XanimReleaseMemoryLocks
==============
*/
void XanimReleaseMemoryLocks(void)
{
  Mem_Ownership_AllocRelease(MOVEMENT);
}

