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
int XAnimSetCompleteGoalWeightRel(const DObj *obj, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart)
{
  return XAnimSetCompleteGoalWeightRel(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, rootIndex, goalWeight, goalTime, rate, notifyName, notifyType, bRestart, LINEAR, NULL);
}

/*
==============
XAnimGetDescendantWithGreatestWeight<1>
==============
*/
__int64 XAnimGetDescendantWithGreatestWeight<1>(unsigned __int16 infoIndex)
{
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  unsigned int v4; 
  float i; 
  unsigned __int8 *v6; 
  __int64 v7; 
  float v8; 
  unsigned int DescendantWithGreatest; 
  __int64 v10; 
  __int64 v11; 

  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7527, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( AnimInfo->animToModel )
  {
    if ( AnimInfo->state.goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7532, ASSERT_TYPE_ASSERT, "(useGoalWeight ? info->state.goalWeight : info->state.weight)", (const char *)&queryFormat, "useGoalWeight ? info->state.goalWeight : info->state.weight") )
      __debugbreak();
    return AnimInfo->animIndex;
  }
  else
  {
    children = AnimInfo->children;
    v4 = 0;
    for ( i = 0.0; children; children = *((_WORD *)v6 + 5) )
    {
      if ( (children & 0x8000u) != 0 )
      {
        v7 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v7 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v11) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v10) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v10, v11) )
            __debugbreak();
        }
        v6 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v7];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v11) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v10) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v6 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      v8 = *((float *)v6 + 14);
      if ( v8 > i )
      {
        DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<1>(children);
        if ( DescendantWithGreatest )
        {
          i = v8;
          v4 = DescendantWithGreatest;
        }
      }
    }
    return v4;
  }
}

/*
==============
XAnimGetDescendantWithGreatestWeight<0>
==============
*/
__int64 XAnimGetDescendantWithGreatestWeight<0>(unsigned __int16 infoIndex)
{
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  unsigned int v4; 
  float i; 
  unsigned __int8 *v6; 
  __int64 v7; 
  float v8; 
  unsigned int DescendantWithGreatest; 
  __int64 v10; 
  __int64 v11; 

  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7527, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( AnimInfo->animToModel )
  {
    if ( AnimInfo->state.weight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7532, ASSERT_TYPE_ASSERT, "(useGoalWeight ? info->state.goalWeight : info->state.weight)", (const char *)&queryFormat, "useGoalWeight ? info->state.goalWeight : info->state.weight") )
      __debugbreak();
    return AnimInfo->animIndex;
  }
  else
  {
    children = AnimInfo->children;
    v4 = 0;
    for ( i = 0.0; children; children = *((_WORD *)v6 + 5) )
    {
      if ( (children & 0x8000u) != 0 )
      {
        v7 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v7 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v11) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v10) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v10, v11) )
            __debugbreak();
        }
        v6 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v7];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v11) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v10) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v6 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      v8 = *((float *)v6 + 15);
      if ( v8 > i )
      {
        DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<0>(children);
        if ( DescendantWithGreatest )
        {
          i = v8;
          v4 = DescendantWithGreatest;
        }
      }
    }
    return v4;
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
  XModelNameMap *v15; 
  unsigned __int16 v16; 
  XAnimSubTreeID subTreeID; 
  XAnimInfo *v18; 
  const XAnim_s *SubTreeAnims; 
  XAnimInfo *v20; 
  unsigned __int16 children; 
  unsigned __int16 i; 
  XAnimInfo *v23; 
  unsigned __int16 next; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
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
        v15 = modelMap;
      }
      else
      {
        HasClientOnlyBones = DObjHasClientOnlyBones(obj);
        ClientBoneOffset = DObjGetClientBoneOffset(obj);
        fmt = HasClientOnlyBones;
        v15 = modelMap;
        XAnimInitModelMap(obj->models, obj->numModels, modelMap, ClientBoneOffset, fmt);
        *modelMapInitialized = 1;
      }
      animToModel = XAnimGetAnimMap(AnimInfo->parts, v15, NULL);
    }
    v16 = XAnimAllocInfoWithParent(tree, (const XAnimSubTreeID)AnimInfo->subTreeID, animToModel, AnimInfo->animIndex, toInfoParentIndex, 0);
    subTreeID = AnimInfo->subTreeID;
    toInfoIndex = v16;
    v18 = XAnimGetAnimInfo(v16);
    *(_QWORD *)&v18->state.currentAnimTime = 0i64;
    *(_QWORD *)&v18->state.cycleCount = 0i64;
    *(_QWORD *)&v18->state.goalWeight = 0i64;
    *(_QWORD *)&v18->state.rate = 0i64;
    *(_QWORD *)&v18->state.startWeight = 0i64;
    v18->notifyName = 0;
    *(_DWORD *)&v18->notifyChild = -65536;
    v18->notifyType = 0;
    v18->subTreeID = subTreeID;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(SubTreeAnims, v18) )
      v18->state.flags |= 8u;
  }
  v20 = XAnimGetAnimInfo(toInfoIndex);
  XAnimCloneAnimInfo(AnimInfo, v20);
  children = AnimInfo->children;
  for ( i = v20->children; children; children = v23->next )
  {
    v23 = XAnimGetAnimInfo(children);
    if ( v23->state.weight != 0.0 )
    {
      if ( i )
      {
        if ( !XAnimGetAnimInfo(i)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9136, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
        while ( XAnimGetAnimInfo(i)->animIndex < v23->animIndex || XAnimGetAnimInfo(i)->state.weight == 0.0 )
        {
          next = XAnimGetAnimInfo(i)->next;
          XAnimFreeInfo(tree, i, obj);
          i = next;
          if ( !next )
            goto LABEL_27;
        }
        if ( i && !XAnimGetAnimInfo(i)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9145, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
      }
LABEL_27:
      v25 = DObjCloneAnimTree_r(obj, children, i, toInfoIndex, modelMapInitialized, modelMap);
      if ( !XAnimGetAnimInfo(v25)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9151, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( toChildInfoIndex )") )
        __debugbreak();
      if ( XAnimGetAnimInfo(v25)->animIndex != v23->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9152, ASSERT_TYPE_ASSERT, "(GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex)", (const char *)&queryFormat, "GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex") )
        __debugbreak();
      i = XAnimGetAnimInfo(v25)->next;
      if ( i && !XAnimGetAnimInfo(i)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9156, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
        __debugbreak();
    }
  }
  if ( i )
  {
    if ( !XAnimGetAnimInfo(i)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9162, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
      __debugbreak();
    do
    {
      v26 = XAnimGetAnimInfo(i)->next;
      XAnimFreeInfo(tree, i, obj);
      i = v26;
    }
    while ( v26 );
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
  unsigned __int64 v4; 
  XAnimTree *tree; 
  __int128 v11; 
  __int128 v13; 
  const dvar_t *v15; 
  const char *parentColor; 
  int destPos; 

  v4 = bufferSize;
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
        Com_sprintfPos_truncate(buffer, v4, &destPos, (const char *)&queryFormat, header);
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (__int64)(__rdtsc() - g_timerTickAtBoot) < 0 )
        {
          *((_QWORD *)&v11 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v11 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v11;
        }
        *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v13 = *(double *)&_XMM0 * msecPerRawTimerTick;
        _XMM0 = v13;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        Com_sprintfPos_truncate(buffer, v4, &destPos, "gametime: %f\n", (float)(*(float *)&_XMM1 * 0.001));
        v15 = DCONST_DVARBOOL_xanim_display_tree_parameters;
        if ( !DCONST_DVARBOOL_xanim_display_tree_parameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_display_tree_parameters") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( v15->current.enabled )
          XAnimDisplayTreeParameters(obj, buffer, v4, &destPos);
        parentColor = "^2";
        if ( !r_colorTable->current.integer )
          parentColor = "^3";
        XAnimDisplay(obj, tree, tree->children, 0, buffer, v4, &destPos, parentColor);
        Com_sprintfPos_truncate(buffer, v4, &destPos, "\n");
      }
      else
      {
        Com_sprintf(buffer, v4, "%sNO ANIM\n", header);
      }
    }
    else
    {
      Com_sprintf(buffer, v4, "%sNO TREE\n", header);
    }
  }
  else
  {
    Com_sprintf(buffer, v4, "%sNO DOBJ\n", header);
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
void DObjInitServerTime(DObj *obj, float dtime)
{
  XAnimTree *tree; 
  int entnum; 
  bool parentHasSyncGroups; 
  bool childHasTimeForParent; 
  XAnimState syncState; 

  Profile_Begin(413);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6017, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree && tree->children )
  {
    entnum = obj->entnum - 1;
    syncState.cycleCount = 0;
    syncState.currentAnimTime = 0.0;
    XAnimUpdateOldTime(obj, tree->children, &syncState, dtime, 1, &childHasTimeForParent, &parentHasSyncGroups, entnum, NULL);
  }
  Profile_EndInternal(NULL);
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
void DObjTransfer(const DObj *fromObj, DObj *toObj, float dtime)
{
  unsigned int v5; 
  DObjTransferInfo *v6; 
  XAnimTree *tree; 

  if ( g_dobjInfoCheck != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5923, ASSERT_TYPE_ASSERT, "(g_dobjInfoCheck == 1)", (const char *)&queryFormat, "g_dobjInfoCheck == 1") )
    __debugbreak();
  if ( !fromObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5925, ASSERT_TYPE_ASSERT, "(fromObj)", (const char *)&queryFormat, "fromObj") )
    __debugbreak();
  if ( !toObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5926, ASSERT_TYPE_ASSERT, "(toObj)", (const char *)&queryFormat, "toObj") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5927, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  Profile_Begin(413);
  v5 = g_dobjInfoCount;
  if ( g_dobjInfoCount >= 0x400 )
  {
    g_animInfoCount = 0;
    g_dobjInfoCount = 0;
    g_xanimParameterTransferInfo.parameterCount = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AE0E0, 371i64);
    v5 = g_dobjInfoCount;
  }
  g_dobjInfoCount = v5 + 1;
  v6 = &g_dobjTransferInfo[v5];
  v6->toObj = toObj;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v6->hidePartBits, &fromObj->hidePartBits);
  tree = fromObj->tree;
  v6->fromObjHasTree = tree != NULL;
  if ( tree )
  {
    v6->clientNotifyEnabled = tree->clientNotifyEnabled;
    v6->fromObjTreeHasChildren = tree->children != 0;
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
      v6->dtime = dtime;
    }
  }
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
  XAnimTree *v6; 
  float dtime; 
  unsigned __int16 m_notifyIndex; 
  unsigned int v9; 
  const XAnimNotify *ClientNotifyFirst; 
  __int128 v11; 
  __int64 v12; 
  unsigned __int16 children; 
  unsigned __int16 v14; 
  bool *childHasTimeForParent; 
  XAnimNotifyHandle inOutNotifyHead; 
  bool parentHasSyncGroups; 
  bool v18; 
  XAnimState syncState; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5839, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  toObj = info->toObj;
  if ( !info->toObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5842, ASSERT_TYPE_ASSERT, "(toObj)", (const char *)&queryFormat, "toObj") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&toObj->hidePartBits, &info->hidePartBits);
  if ( !info->fromObjHasTree )
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
  v6 = toObj->tree;
  if ( toObj->tree )
  {
    if ( v6->children )
    {
      dtime = info->dtime;
      syncState.cycleCount = 0;
      inOutNotifyHead.m_notifyIndex = -1;
      syncState.currentAnimTime = 0.0;
      XAnimUpdateOldTime(toObj, v6->children, &syncState, dtime, 1, &v18, &parentHasSyncGroups, toObj->entnum - 1, NULL);
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6037, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( s_clientNotifyListHighWatermark < s_clientNotifyListFreeIndex )
      {
        Com_Printf(14, "DObjResetClientNotifyList: New High Watermark %i (was %i)\n", (unsigned int)s_clientNotifyListFreeIndex, (unsigned int)s_clientNotifyListHighWatermark);
        s_clientNotifyListHighWatermark = s_clientNotifyListFreeIndex;
      }
      s_clientNotifyListFreeIndex = -1;
      DebugWipe(s_clientNotifyList, 0x30000ui64);
      XAnimUpdateTimeAndNotetrack(toObj, v6->children, info->dtime, 1, &inOutNotifyHead);
      if ( !toObj->entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5872, ASSERT_TYPE_ASSERT, "(toObj->entnum > 0)", (const char *)&queryFormat, "toObj->entnum > 0") )
        __debugbreak();
      m_notifyIndex = inOutNotifyHead.m_notifyIndex;
      v9 = toObj->entnum - 1;
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5803, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5804, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      ClientNotifyFirst = DObjGetClientNotifyFirst((const XAnimNotifyHandle)m_notifyIndex);
      if ( ClientNotifyFirst )
      {
        while ( (unsigned __int64)s_missedNotifyListSize < 0x80 )
        {
          v11 = *(_OWORD *)&ClientNotifyFirst->notifyName;
          v12 = s_missedNotifyListSize++;
          *(_OWORD *)&s_missedNotifyList[v12].notify.notifyName = v11;
          s_missedNotifyList[v12].notify.animParts = ClientNotifyFirst->animParts;
          s_missedNotifyList[v12].entityNumber = v9;
          ClientNotifyFirst = DObjGetClientNotifyNext(ClientNotifyFirst);
          if ( !ClientNotifyFirst )
            goto LABEL_40;
        }
        Com_PrintWarning(19, "DObjSaveMissedNotifyList() max number of missed notetracks reached (%d)", 128i64);
      }
LABEL_40:
      if ( !info->fromObjTreeHasChildren )
      {
        children = v6->children;
        if ( children )
          XAnimClearTreeGoalWeightsNode(v6, children, 0.0, 1, LINEAR);
      }
    }
    v6->clientNotifyEnabled = info->clientNotifyEnabled;
    if ( info->fromObjTreeHasChildren )
    {
      v14 = v6->children;
      XAnimTransferParametersToClientTree(&g_xanimParameterTransferInfo, v6);
      XAnimTransferTo_r(toObj, v6, v14, 0);
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
  float v7; 
  void *v8; 
  char v10; 
  DObj *v11; 
  XAnimTree *tree; 
  double ModifiedDeltaTime_ToolUseOnly; 
  float v14; 
  XAnimTree *v15; 
  double v16; 
  const dvar_t *v17; 
  __int64 v18; 
  int v19; 
  bool v20; 
  unsigned __int16 children; 
  bool parentHasSyncGroups; 
  bool childHasTimeForParent; 
  XAnimState syncState; 
  XModelNameMap modelNameMap; 

  v8 = alloca(v5);
  modelNameMap.initialized = 0;
  v10 = entnum;
  v11 = v6;
  Profile_Begin(413);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6066, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( v7 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6067, ASSERT_TYPE_ASSERT, "(dtime >= 0)", (const char *)&queryFormat, "dtime >= 0") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6068, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  LOWORD(obj->tree) = -1;
  tree = v11->tree;
  ModifiedDeltaTime_ToolUseOnly = AnimVisualizer_GetModifiedDeltaTime_ToolUseOnly(v11->entnum, v7);
  v14 = *(float *)&ModifiedDeltaTime_ToolUseOnly;
  if ( DObjHasProceduralBones(v11) )
    XAnimBonePhysicsUpdateTime(v11, *(float *)&ModifiedDeltaTime_ToolUseOnly);
  if ( tree && tree->children )
  {
    v15 = v11->tree;
    if ( !DObjHasClientFlag(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9578, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
      __debugbreak();
    if ( v15 && *(float *)&ModifiedDeltaTime_ToolUseOnly != 0.0 )
    {
      v16 = I_fclamp(*(float *)&ModifiedDeltaTime_ToolUseOnly * 1000.0, 0.0, 32767.0);
      if ( v15->lodState.blendTimeLeft <= (__int16)(int)*(float *)&v16 )
      {
        v15->lodState.lod = v15->lodState.goalLod;
        v15->lodState.blendTimeLeft = 0;
      }
      else
      {
        v17 = DCONST_DVARFLT_xanim_lodLerpFactor;
        if ( !DCONST_DVARFLT_xanim_lodLerpFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodLerpFactor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        v18 = (__int16)(int)(float)(v17->current.value * 256.0) * (v15->lodState.goalLod - v15->lodState.lod);
        v19 = (BYTE4(v18) + (int)v18) >> 8;
        v20 = (__int16)(v15->lodState.lod + v19) < 0;
        v15->lodState.lod += v19;
        if ( v20 )
          v15->lodState.lod = 0;
        v15->lodState.blendTimeLeft -= (int)*(float *)&v16;
      }
    }
    XAnimTreeUpdateParameters(v11);
    syncState.cycleCount = 0;
    syncState.currentAnimTime = 0.0;
    XAnimUpdateOldTime(v11, tree->children, &syncState, v14, 1, &childHasTimeForParent, &parentHasSyncGroups, a5, &modelNameMap);
    children = tree->children;
    if ( children )
      XAnimUpdateTimeAndNotetrack(v11, children, v14, v10, (XAnimNotifyHandle *)obj);
  }
  Profile_EndInternal(NULL);
  return obj;
}

/*
==============
DObjUpdateServerInfo
==============
*/

__int64 __fastcall DObjUpdateServerInfo(DObj *obj, double dtime, int bNotify)
{
  __int128 v3; 
  float v6; 
  XAnimTree *tree; 
  float v11; 
  XAnimNotifyHandle inOutNotifyHead; 
  XAnimSyncGroupCalcData syncGroupCalcData; 

  v6 = *(float *)&dtime;
  Profile_Begin(413);
  if ( *(float *)&dtime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6127, ASSERT_TYPE_ASSERT, "(dtime >= 0)", (const char *)&queryFormat, "dtime >= 0") )
    __debugbreak();
  tree = obj->tree;
  s_notifyListSVSize = 0;
  if ( tree && tree->children )
  {
    inOutNotifyHead.m_notifyIndex = -1;
    XAnimTreeUpdateParameters(obj);
    if ( bNotify )
    {
      memset_0(&syncGroupCalcData, 0, sizeof(syncGroupCalcData));
      XAnimUpdateSyncGroups(obj, *(float *)&dtime, 1, &syncGroupCalcData);
      *(float *)&v3 = XAnimFindServerNoteTrack(obj, tree->children, *(float *)&dtime, &syncGroupCalcData);
      _XMM8 = v3;
      if ( *(float *)&v3 < 0.0 )
      {
        __asm { vxorpd  xmm1, xmm1, xmm1 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6158, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", *(float *)&v3, *(double *)&_XMM1) )
          __debugbreak();
      }
      __asm { vmaxss  xmm0, xmm8, xmm7 }
      if ( *(float *)&_XMM0 != 1.0 )
      {
        v11 = (float)(v6 * *(float *)&_XMM0) + 0.001;
        if ( v11 <= v6 )
        {
          XAnimUpdateTimeAndNotetrack(obj, tree->children, v11, 1, &inOutNotifyHead);
          Profile_EndInternal(NULL);
          return 1i64;
        }
      }
      XAnimUpdateLeadSyncGroupNode(obj, &syncGroupCalcData, &inOutNotifyHead);
      XAnimUpdateTimeAndNotetrackInternal(obj, tree->children, v6, 1, &syncGroupCalcData, &inOutNotifyHead);
    }
    else
    {
      XAnimUpdateTimeAndNotetrack(obj, tree->children, *(float *)&dtime, 0, &inOutNotifyHead);
    }
  }
  Profile_EndInternal(NULL);
  return 0i64;
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
void XAnimAddClientNotify(scr_string_t notifyName, scr_string_t notetrackName, float frac, unsigned __int16 notifyType, const XAnimParts *animParts, void *customData, XAnimNotifyHandle *notifyHead)
{
  unsigned __int16 v7; 
  scr_string_t v8; 
  int v9; 
  const char *v10; 
  XAnimNotifyHandle *v11; 
  int v12; 
  const XAnimNotify *i; 
  unsigned __int16 m_notifyIndex; 
  __int64 v15; 
  XAnimNotify *v16; 
  XAnimNotify *v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  float v20; 
  const XAnimNotify *j; 
  float timeFrac; 
  __int64 v23; 
  __int64 v24; 

  v7 = notifyType;
  v8 = notifyName;
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2463, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_clientNotifyListFreeIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_clientNotifyListFreeIndex) )
    __debugbreak();
  v9 = _InterlockedIncrement(&s_clientNotifyListFreeIndex);
  if ( (unsigned __int64)v9 >= 0x2000 )
  {
    if ( ((unsigned __int64)&s_clientNotifyListFreeIndex & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_clientNotifyListFreeIndex) )
      __debugbreak();
    _InterlockedDecrement(&s_clientNotifyListFreeIndex);
    v10 = SL_ConvertToStringSafe(v8);
    Com_PrintError(14, "XAnimAddClientNotify: Exceeded limit of %i notifies, ignoring '%s'\n", 0x2000i64, v10);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2473, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimAddClientNotify: Exceeded limit of note tracks per frame, please report to code") )
      __debugbreak();
    return;
  }
  v11 = notifyHead;
  v12 = 1;
  for ( i = DObjGetClientNotifyFirst((const XAnimNotifyHandle)notifyHead->m_notifyIndex); i; i = DObjGetClientNotifyNext(i) )
    ++v12;
  if ( (unsigned int)v9 >= 0x2000 )
  {
    LODWORD(v23) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2487, ASSERT_TYPE_ASSERT, "(unsigned)( notifyIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientNotifyList ) ) + 0 ) )", "notifyIndex doesn't index s_clientNotifyList\n\t%i not in [0, %i)", v23, 0x2000) )
      __debugbreak();
  }
  m_notifyIndex = notifyHead->m_notifyIndex;
  v15 = v9;
  v16 = NULL;
  if ( notifyHead->m_notifyIndex != 0xFFFF )
  {
    do
    {
      if ( m_notifyIndex >= 0x2000u )
      {
        LODWORD(v24) = 0x2000;
        LODWORD(v23) = m_notifyIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2497, ASSERT_TYPE_ASSERT, "(unsigned)( nextHandle.Index() ) < (unsigned)( ( sizeof( *array_counter( s_clientNotifyList ) ) + 0 ) )", "nextHandle.Index() doesn't index s_clientNotifyList\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v17 = &s_clientNotifyList[m_notifyIndex];
      if ( frac <= v17->timeFrac )
        break;
      m_notifyIndex = v17->nextHandle.m_notifyIndex;
      v16 = v17;
    }
    while ( m_notifyIndex != 0xFFFF );
    v15 = v9;
    v11 = notifyHead;
    v8 = notifyName;
    v7 = notifyType;
  }
  s_clientNotifyList[v15].nextHandle.m_notifyIndex = m_notifyIndex;
  if ( !v16 )
  {
    if ( v11->m_notifyIndex != m_notifyIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2515, ASSERT_TYPE_ASSERT, "(nextHandle.Equals( notifyHead ))", (const char *)&queryFormat, "nextHandle.Equals( notifyHead )") )
      __debugbreak();
    v18 = truncate_cast<unsigned short,int>(v9);
    v11->m_notifyIndex = v18;
    if ( v18 != 0xFFFF )
      goto LABEL_35;
    goto LABEL_33;
  }
  v19 = truncate_cast<unsigned short,int>(v9);
  v16->nextHandle.m_notifyIndex = v19;
  if ( v19 == 0xFFFF )
  {
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 315, ASSERT_TYPE_SANITY, "( IsValid() )", (const char *)&queryFormat, "IsValid()") )
      __debugbreak();
  }
LABEL_35:
  s_clientNotifyList[v15].noteName = notetrackName;
  s_clientNotifyList[v15].timeFrac = frac;
  s_clientNotifyList[v15].animParts = animParts;
  s_clientNotifyList[v15].notifyName = v8;
  s_clientNotifyList[v15].notifyType = v7;
  v20 = 0.0;
  for ( j = DObjGetClientNotifyFirst((const XAnimNotifyHandle)v11->m_notifyIndex); j; j = DObjGetClientNotifyNext(j) )
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2535, ASSERT_TYPE_ASSERT, "( nodeCount > 0 )", "Unexpected numer of nodes after modifying the note track list") )
      __debugbreak();
    timeFrac = j->timeFrac;
    if ( v20 > timeFrac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2536, ASSERT_TYPE_ASSERT, "( verifyFrac ) <= ( verifyNode->timeFrac )", "%s <= %s\n\t%g, %g", "verifyFrac", "verifyNode->timeFrac", v20, timeFrac) )
      __debugbreak();
    v20 = j->timeFrac;
    --v12;
  }
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
  XAnimNotifyInfo *notify; 
  int v9; 

  PartsInternal = XAnimGetPartsInternal(&anims->entries[animIndex]);
  v7 = PartsInternal;
  notify = PartsInternal->notify;
  if ( notify )
  {
    v9 = 0;
    if ( PartsInternal->notifyCount )
    {
      do
      {
        if ( notify->name == name )
        {
          Scr_AddFloat(scrContext, notify->time);
          Scr_AddArray(scrContext);
        }
        ++v9;
        ++notify;
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
  unsigned __int16 v6; 
  __int64 v8; 
  XAnimEntry *v10; 
  XAnimParts *parts; 
  const dvar_t *v12; 
  bool v13; 
  bool v14; 
  char ActiveGameMode; 
  XAnimParts *v16; 
  bool v17; 
  const char *name; 
  bool v19; 
  int v20; 
  bool v21; 
  XAnimTree *v22; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 v24; 
  unsigned __int16 children; 
  unsigned __int8 *v26; 
  __int64 v27; 
  unsigned __int8 *v28; 
  __int64 v29; 
  XAnimParts *v30; 
  __int64 result; 
  __int64 v32; 
  __int64 v33; 
  unsigned __int16 outInfoID; 
  XAnimInfo *v35; 
  XAnimSubTreeID v36; 
  XAnim_s *anims; 
  XAnimTree *treea; 
  XAnimEntry *v39; 
  XAnimToXModel *v40; 
  DLogContext context; 
  char Destination[3]; 
  char v43[1021]; 
  char buffer[4096]; 

  v6 = parentInfoIndex;
  v8 = animIndex;
  LODWORD(v35) = animIndex;
  v40 = animToModel;
  v36 = subTreeID;
  treea = tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6654, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  anims = (XAnim_s *)XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6657, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  strcpy(Destination, "NA");
  v10 = &anims->entries[v8];
  v39 = v10;
  memset_0(v43, 0, sizeof(v43));
  if ( cm.name )
    strncpy(Destination, cm.name, 0x400ui64);
  parts = v10->parts;
  if ( parts && v10->nodeType == XANIM_NODE_TYPE_ANIMPARTS && parts->name )
  {
    v12 = DCONST_DVARBOOL_xanim_trackingEnable;
    if ( !DCONST_DVARBOOL_xanim_trackingEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_trackingEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      if ( v10->parts->framerate <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6671, ASSERT_TYPE_ASSERT, "(anim->parts->framerate > 0.0f)", (const char *)&queryFormat, "anim->parts->framerate > 0.0f") )
        __debugbreak();
      v13 = (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG;
      v14 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG;
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      v16 = v10->parts;
      v17 = ActiveGameMode == 1;
      name = v16->name;
      v19 = v16->flags & 1;
      v20 = (int)(float)((float)((float)v16->numframes / v16->framerate) * 1000.0);
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
      {
        if ( DLog_IsActive() )
        {
          v21 = DLog_BeginEvent(&context, "xanim_tracking");
          context.autoEndEvent = 1;
          if ( v21 && DLog_String(&context, "animation_name", name, 0) && DLog_String(&context, "map_name", Destination, 0) && DLog_Int32(&context, "animation_duration", v20) && DLog_Bool(&context, "is_loop", v19) && DLog_Bool(&context, "is_sp", v17) && DLog_Bool(&context, "is_cp", v14) && DLog_Bool(&context, "is_mp", v13) )
            DLog_RecordContext(&context);
        }
        else
        {
          context.error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      v6 = parentInfoIndex;
      LODWORD(v8) = (_DWORD)v35;
    }
  }
  v22 = treea;
  if ( !XAnimCreateNode(v10->nodeType, treea, anims, v8, &outInfoID) )
    Sys_Error((const ObfuscateErrorText)&stru_1441AE860);
  NonRootAnimInfo = GetNonRootAnimInfo(outInfoID);
  v35 = NonRootAnimInfo;
  if ( (unsigned int)v8 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6702, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v8, anims->size) )
    __debugbreak();
  v24 = 0;
  children = XAnimGetAnimInfo(v6)->children;
  if ( after )
  {
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v29 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v29 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v33) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v32) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v32, v33) )
              __debugbreak();
          }
          v28 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v29];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v33) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v32) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          v28 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v28[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6726, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
          __debugbreak();
        if ( *((unsigned __int16 *)v28 + 3) > (unsigned int)v8 )
          break;
        v24 = children;
        children = *((_WORD *)v28 + 5);
      }
      while ( children );
      NonRootAnimInfo = v35;
      v10 = v39;
      goto LABEL_75;
    }
  }
  else if ( children )
  {
    do
    {
      if ( (children & 0x8000u) != 0 )
      {
        v27 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v27 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v33) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v32) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v32, v33) )
            __debugbreak();
        }
        v26 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v27];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v33) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v32) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v26 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      if ( !v26[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6713, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
        __debugbreak();
      if ( *((unsigned __int16 *)v26 + 3) >= (unsigned int)v8 )
        break;
      v24 = children;
      children = *((_WORD *)v26 + 5);
    }
    while ( children );
LABEL_75:
    v22 = treea;
    v6 = parentInfoIndex;
  }
  if ( (unsigned int)v8 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6734, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  NonRootAnimInfo->subTreeID = v36;
  NonRootAnimInfo->children = 0;
  NonRootAnimInfo->animToModel = v40;
  NonRootAnimInfo->prev = v24;
  NonRootAnimInfo->next = children;
  NonRootAnimInfo->animIndex = v8;
  NonRootAnimInfo->parent = v6;
  v30 = v10->parts;
  NonRootAnimInfo->parts = v30;
  if ( WORD2(v30) != v10->animParent.children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6745, ASSERT_TYPE_ASSERT, "(info->animParent.children == anim->animParent.children)", (const char *)&queryFormat, "info->animParent.children == anim->animParent.children") )
    __debugbreak();
  if ( NonRootAnimInfo->animParent.flags != v10->animParent.flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6746, ASSERT_TYPE_ASSERT, "(info->animParent.flags == anim->animParent.flags)", (const char *)&queryFormat, "info->animParent.flags == anim->animParent.flags") )
    __debugbreak();
  if ( NonRootAnimInfo->animParent.syncGroup[0] != v10->animParent.syncGroup[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6747, ASSERT_TYPE_ASSERT, "(info->animParent.syncGroup == anim->animParent.syncGroup)", (const char *)&queryFormat, "info->animParent.syncGroup == anim->animParent.syncGroup") )
    __debugbreak();
  if ( (unsigned int)v8 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6749, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  NonRootAnimInfo->inuse = 1;
  NonRootAnimInfo->tree = v22;
  if ( children )
    XAnimGetAnimInfo(children)->prev = outInfoID;
  if ( v24 )
  {
    XAnimGetAnimInfo(v24)->next = outInfoID;
    return outInfoID;
  }
  else if ( v6 )
  {
    XAnimGetAnimInfo(v6)->children = outInfoID;
    return outInfoID;
  }
  else
  {
    result = outInfoID;
    v22->children = outInfoID;
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
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  XAnimRotPos rotPos; 

  Profile_Begin(412);
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6468, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    XAnimCalcDeltaTree(obj, InfoIndex, 1.0, (const XAnimDeltaInfo)16842753, &rotPos, 0);
    v12 = rotPos.rot.v[1];
    v13 = rotPos.rot.v[2];
    v14 = rotPos.rot.v[3];
    if ( (float)((float)((float)((float)(rotPos.rot.v[0] * rotPos.rot.v[0]) + (float)(v12 * v12)) + (float)(v13 * v13)) + (float)(v14 * v14)) == 0.0 )
    {
      rot->v[3] = 1.0;
      *(_QWORD *)rot->v = 0i64;
      rot->v[2] = 0.0;
    }
    else
    {
      rot->v[0] = rotPos.rot.v[0];
      rot->v[1] = v12;
      rot->v[2] = v13;
      rot->v[3] = v14;
    }
    v15 = rotPos.pos.v[1];
    trans->v[0] = rotPos.pos.v[0];
    trans->v[2] = rotPos.pos.v[2];
    trans->v[1] = v15;
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

void __fastcall XAnimCalcAbsDeltaParts(const XAnimParts *parts, double weightScale, const float time, XAnimRotPos *rotPos)
{
  unsigned __int8 flags; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __m128 v10; 
  vec4_t rotDelta; 
  float4 posDelta; 

  flags = parts->flags;
  v6 = *(float *)&weightScale;
  if ( (flags & 2) != 0 )
  {
    XAnim_CalcDeltaForTime(parts, time, (vec2_t *)&rotDelta.xyz.z, &posDelta);
    v7 = *(float *)&weightScale * 0.000030518509;
  }
  else
  {
    if ( (flags & 4) == 0 )
      return;
    XAnim_CalcDelta3DForTime(parts, time, &rotDelta, &posDelta);
    v7 = *(float *)&weightScale * 0.000030518509;
    v8 = (float)(*(float *)&weightScale * 0.000030518509) * rotDelta.v[1];
    rotPos->rot.v[0] = (float)((float)(*(float *)&weightScale * 0.000030518509) * rotDelta.v[0]) + rotPos->rot.v[0];
    rotPos->rot.v[1] = v8 + rotPos->rot.v[1];
  }
  v9 = rotDelta.v[3];
  rotPos->rot.v[2] = (float)(v7 * rotDelta.v[2]) + rotPos->rot.v[2];
  rotPos->rot.v[3] = (float)(v9 * v7) + rotPos->rot.v[3];
  v10 = _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&weightScale, *(__m128 *)&weightScale, 0), posDelta.v);
  rotPos->posWeight = v6 + rotPos->posWeight;
  rotPos->pos.v[0] = v10.m128_f32[0] + rotPos->pos.v[0];
  rotPos->pos.v[1] = _mm_shuffle_ps(v10, v10, 85).m128_f32[0] + rotPos->pos.v[1];
  rotPos->pos.v[2] = _mm_shuffle_ps(v10, v10, 170).m128_f32[0] + rotPos->pos.v[2];
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
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  XAnimDeltaInfo deltaInfo; 
  XAnimRotPos rotPos; 

  Profile_Begin(412);
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6414, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    deltaInfo.bUseGoalWeight = bUseGoalWeight;
    *(_WORD *)&deltaInfo.bClear = 1;
    deltaInfo.bAbs = 0;
    XAnimCalcDeltaTree(obj, InfoIndex, 1.0, deltaInfo, &rotPos, 1);
    v13 = rotPos.rot.v[1];
    v14 = rotPos.rot.v[2];
    v15 = rotPos.rot.v[3];
    if ( (float)((float)((float)((float)(rotPos.rot.v[0] * rotPos.rot.v[0]) + (float)(v13 * v13)) + (float)(v14 * v14)) + (float)(v15 * v15)) == 0.0 )
    {
      rot->v[3] = 1.0;
      *(_QWORD *)rot->v = 0i64;
      rot->v[2] = 0.0;
    }
    else
    {
      rot->v[0] = rotPos.rot.v[0];
      rot->v[1] = v13;
      rot->v[2] = v14;
      rot->v[3] = v15;
    }
    v16 = rotPos.pos.v[1];
    trans->v[0] = rotPos.pos.v[0];
    trans->v[2] = rotPos.pos.v[2];
    trans->v[1] = v16;
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
  float v13; 
  float v14; 
  float v15; 
  XAnimDeltaInfo deltaInfo; 
  XAnimRotPos rotPos; 

  Profile_Begin(412);
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6361, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    deltaInfo.bUseGoalWeight = bUseGoalWeight;
    *(_WORD *)&deltaInfo.bClear = 1;
    deltaInfo.bAbs = 0;
    XAnimCalcDeltaTree(obj, InfoIndex, 1.0, deltaInfo, &rotPos, 0);
    if ( rotPos.rot.v[0] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6383, ASSERT_TYPE_ASSERT, "(!rotPos.rot[0])", (const char *)&queryFormat, "!rotPos.rot[0]") )
      __debugbreak();
    if ( rotPos.rot.v[1] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6384, ASSERT_TYPE_ASSERT, "(!rotPos.rot[1])", (const char *)&queryFormat, "!rotPos.rot[1]") )
      __debugbreak();
    v13 = rotPos.rot.v[2];
    if ( rotPos.rot.v[2] == 0.0 || (v14 = rotPos.rot.v[3], rotPos.rot.v[3] == 0.0) )
    {
      v14 = FLOAT_1_0;
      v13 = 0.0;
    }
    rot->v[0] = v13;
    rot->v[1] = v14;
    v15 = rotPos.pos.v[1];
    trans->v[0] = rotPos.pos.v[0];
    trans->v[2] = rotPos.pos.v[2];
    trans->v[1] = v15;
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
void XAnimCalcDeltaTree(const DObj *obj, const unsigned __int16 infoIndex, double weightScale, const XAnimDeltaInfo deltaInfo, XAnimRotPos *rotPos, bool b3D)
{
  __m128 *v6; 
  XAnimDeltaInfo v7; 
  XAnimInfo *NonRootAnimInfo; 
  const XAnimParts *parts; 
  float currentAnimTime; 
  float v11; 
  float oldTime; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  XAnimInfo *v15; 
  float goalWeight; 
  unsigned __int16 next; 
  XAnimInfo *v18; 
  XAnimInfo *v19; 
  float weight; 
  XAnimRotPos *v21; 
  unsigned __int16 v22; 
  XAnimInfo *v23; 
  XAnimInfo *v24; 
  float v25; 
  float v26; 
  __m128 v27; 
  float v28; 
  __m128 v29; 
  float v30; 
  float v31; 
  double v32; 
  float posWeight; 
  __int64 v34; 
  XAnimDeltaInfo deltaInfoa; 
  bool bClear; 
  char v39; 

  v6 = (__m128 *)rotPos;
  v7 = deltaInfo;
  bClear = deltaInfo.bClear;
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5223, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( NonRootAnimInfo->animToModel )
  {
    if ( v7.bClear )
    {
      rotPos->rot = 0ui64;
      *(_OWORD *)&rotPos->posWeight = 0ui64;
    }
    parts = NonRootAnimInfo->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5236, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    currentAnimTime = NonRootAnimInfo->state.currentAnimTime;
    v11 = *(float *)&weightScale;
    if ( deltaInfo.bAbs )
    {
      XAnimCalcAbsDeltaParts(parts, weightScale, NonRootAnimInfo->state.currentAnimTime, rotPos);
    }
    else
    {
      oldTime = NonRootAnimInfo->state.oldTime;
      if ( b3D )
        XAnimCalcRelDeltaParts3D(parts, v11, oldTime, currentAnimTime, rotPos, 1);
      else
        XAnimCalcRelDeltaParts(parts, v11, oldTime, currentAnimTime, rotPos, 1);
    }
  }
  else
  {
    children = NonRootAnimInfo->children;
    if ( children )
    {
      while ( 1 )
      {
        if ( !children )
        {
          LODWORD(v34) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 285, ASSERT_TYPE_ASSERT, "( infoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "infoIndex", "0", v34, 0i64) )
            __debugbreak();
        }
        AnimInfo = XAnimGetAnimInfo(children);
        v15 = AnimInfo;
        if ( deltaInfo.bUseGoalWeight )
          goalWeight = AnimInfo->state.goalWeight;
        else
          goalWeight = AnimInfo->state.weight;
        if ( goalWeight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5259, ASSERT_TYPE_ASSERT, "( ( firstWeight >= 0.0f ) )", "( firstWeight ) = %g", goalWeight) )
          __debugbreak();
        next = v15->next;
        if ( goalWeight != 0.0 )
          break;
        children = v15->next;
        if ( !next )
          goto LABEL_27;
      }
      if ( next )
      {
        while ( 1 )
        {
          v18 = XAnimGetAnimInfo(next);
          v19 = v18;
          if ( deltaInfo.bUseGoalWeight )
            weight = v18->state.goalWeight;
          else
            weight = v18->state.weight;
          if ( weight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5268, ASSERT_TYPE_ASSERT, "(weight >= 0)", (const char *)&queryFormat, "weight >= 0") )
            __debugbreak();
          if ( weight != 0.0 )
            break;
          next = v19->next;
          if ( !next )
            goto LABEL_38;
        }
        v21 = (XAnimRotPos *)&v39;
        *(_WORD *)&deltaInfoa.bAbs = *(_WORD *)&v7.bAbs;
        if ( v7.bClear )
          v21 = rotPos;
        *(_WORD *)&deltaInfoa.bClear = 257;
        XAnimCalcDeltaTree(obj, children, goalWeight, deltaInfoa, v21, b3D);
        deltaInfoa.bClear = 0;
        XAnimCalcDeltaTree(obj, next, weight, deltaInfoa, v21, b3D);
        v22 = v19->next;
        if ( v22 )
        {
          do
          {
            v23 = XAnimGetAnimInfo(v22);
            v24 = v23;
            if ( deltaInfo.bUseGoalWeight )
              v25 = v23->state.goalWeight;
            else
              v25 = v23->state.weight;
            if ( v25 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5287, ASSERT_TYPE_ASSERT, "(weight >= 0)", (const char *)&queryFormat, "weight >= 0") )
              __debugbreak();
            if ( v25 != 0.0 )
              XAnimCalcDeltaTree(obj, v22, v25, deltaInfoa, v21, b3D);
            v22 = v24->next;
          }
          while ( v22 );
          v7.bClear = bClear;
          v6 = (__m128 *)rotPos;
        }
        if ( deltaInfo.bNormQuat )
        {
          if ( v7.bClear )
          {
            v28 = (float)((float)((float)(v6->m128_f32[0] * v6->m128_f32[0]) + (float)(v6->m128_f32[1] * v6->m128_f32[1])) + (float)(v6->m128_f32[2] * v6->m128_f32[2])) + (float)(v6->m128_f32[3] * v6->m128_f32[3]);
            v27.m128_u64[1] = 0i64;
            if ( v28 != 0.0 )
            {
              *(double *)v27.m128_u64 = I_rsqrt(v28);
              v29 = v27;
              v29.m128_f32[0] = v27.m128_f32[0] * *(float *)&weightScale;
              *v6 = _mm128_mul_ps(_mm_shuffle_ps(v29, v29, 0), *v6);
            }
            v30 = v6[1].m128_f32[0];
            if ( v30 != 0.0 )
            {
              v6[1].m128_f32[1] = (float)(*(float *)&weightScale / v30) * v6[1].m128_f32[1];
              v6[1].m128_f32[2] = (float)(*(float *)&weightScale / v30) * v6[1].m128_f32[2];
              v6[1].m128_f32[3] = (float)(*(float *)&weightScale / v30) * v6[1].m128_f32[3];
              v6[1].m128_f32[0] = *(float *)&weightScale;
            }
          }
          else
          {
            v31 = (float)((float)((float)(v21->rot.v[0] * v21->rot.v[0]) + (float)(v21->rot.v[1] * v21->rot.v[1])) + (float)(v21->rot.v[2] * v21->rot.v[2])) + (float)(v21->rot.v[3] * v21->rot.v[3]);
            if ( v31 != 0.0 )
            {
              v32 = I_rsqrt(v31);
              v6->m128_f32[0] = (float)((float)(*(float *)&v32 * *(float *)&weightScale) * v21->rot.v[0]) + v6->m128_f32[0];
              v6->m128_f32[1] = (float)((float)(*(float *)&v32 * *(float *)&weightScale) * v21->rot.v[1]) + v6->m128_f32[1];
              v6->m128_f32[2] = (float)((float)(*(float *)&v32 * *(float *)&weightScale) * v21->rot.v[2]) + v6->m128_f32[2];
              v6->m128_f32[3] = (float)((float)(*(float *)&v32 * *(float *)&weightScale) * v21->rot.v[3]) + v6->m128_f32[3];
            }
            posWeight = v21->posWeight;
            if ( posWeight != 0.0 )
            {
              v6[1].m128_f32[1] = (float)((float)(*(float *)&weightScale / posWeight) * v21->pos.v[0]) + v6[1].m128_f32[1];
              v6[1].m128_f32[2] = (float)((float)(*(float *)&weightScale / posWeight) * v21->pos.v[1]) + v6[1].m128_f32[2];
              v6[1].m128_f32[3] = (float)((float)(*(float *)&weightScale / posWeight) * v21->pos.v[2]) + v6[1].m128_f32[3];
              v6[1].m128_f32[0] = *(float *)&weightScale + v6[1].m128_f32[0];
            }
          }
        }
        else
        {
          if ( !v7.bClear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5296, ASSERT_TYPE_ASSERT, "(deltaInfo.bClear)", (const char *)&queryFormat, "deltaInfo.bClear") )
            __debugbreak();
          v26 = v6[1].m128_f32[0];
          if ( v26 != 0.0 )
          {
            v6[1].m128_f32[1] = (float)(1.0 / v26) * v6[1].m128_f32[1];
            v6[1].m128_f32[2] = (float)(1.0 / v26) * v6[1].m128_f32[2];
            v6[1].m128_f32[3] = (float)(1.0 / v26) * v6[1].m128_f32[3];
          }
        }
      }
      else
      {
LABEL_38:
        XAnimCalcDeltaTree(obj, children, *(const float *)&weightScale, v7, rotPos, b3D);
      }
    }
    else
    {
LABEL_27:
      if ( v7.bClear )
      {
        rotPos->rot = 0ui64;
        *(_OWORD *)&rotPos->posWeight = 0ui64;
      }
    }
  }
}

/*
==============
XAnimCalcNotetrackWeight
==============
*/
double XAnimCalcNotetrackWeight(const XAnimInfo *info, scr_string_t blendInStartNotetrack, scr_string_t blendInEndNotetrack, scr_string_t blendOutStartNotetrack, scr_string_t blendOutEndNotetrack)
{
  XAnimParts *parts; 
  XAnimNotifyInfo *notify; 
  int v10; 
  float v11; 
  float time; 
  float v13; 
  float v14; 
  scr_string_t name; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  double result; 

  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3239, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  notify = parts->notify;
  if ( notify )
  {
    v10 = 0;
    v11 = FLOAT_N1_0;
    time = FLOAT_N1_0;
    v13 = FLOAT_N1_0;
    v14 = FLOAT_N1_0;
    if ( parts->notifyCount )
    {
      do
      {
        name = notify->name;
        if ( notify->name == blendInStartNotetrack )
        {
          if ( time != -1.0 )
          {
            v16 = parts->name;
            v17 = SL_ConvertToString(blendInStartNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 364i64, v17, v16);
          }
          time = notify->time;
        }
        else if ( name == blendInEndNotetrack )
        {
          if ( v13 != -1.0 )
          {
            v18 = parts->name;
            v19 = SL_ConvertToString(blendInEndNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 365i64, v19, v18);
          }
          v13 = notify->time;
        }
        else if ( name == blendOutStartNotetrack )
        {
          if ( v14 != -1.0 )
          {
            v20 = parts->name;
            v21 = SL_ConvertToString(blendOutStartNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 366i64, v21, v20);
          }
          v14 = notify->time;
        }
        else if ( name == blendOutEndNotetrack )
        {
          if ( v11 != -1.0 )
          {
            v22 = parts->name;
            v23 = SL_ConvertToString(blendOutEndNotetrack);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC640, 367i64, v23, v22);
          }
          v11 = notify->time;
        }
        ++v10;
        ++notify;
      }
      while ( v10 < parts->notifyCount );
    }
    return XAnimCalcNotetrackWeigthWithTimeRange(info, time, v13, v14, v11);
  }
  else
  {
    *(_QWORD *)&result = LODWORD(FLOAT_1_0);
  }
  return result;
}

/*
==============
XAnimCalcNotetrackWeigthWithTimeRange
==============
*/
float XAnimCalcNotetrackWeigthWithTimeRange(const XAnimInfo *info, float notifyInStartTime, float notifyInEndTime, float notifyOutStartTime, float notifyOutEndTime)
{
  XAnimParts *parts; 
  float v8; 
  float currentAnimTime; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3166, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3172, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  v8 = FLOAT_1_0;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3110, ASSERT_TYPE_ASSERT, "(!throwError || (throwError && parts))", (const char *)&queryFormat, "!throwError || (throwError && parts)") )
    __debugbreak();
  if ( notifyInStartTime == -1.0 && notifyInEndTime == -1.0 || notifyInStartTime >= 0.0 && notifyInEndTime >= 0.0 )
  {
    if ( notifyOutStartTime == -1.0 && notifyOutEndTime == -1.0 || notifyOutStartTime >= 0.0 && notifyOutEndTime >= 0.0 )
    {
      if ( notifyInStartTime == -1.0 || notifyInStartTime != notifyInEndTime )
      {
        if ( notifyOutStartTime == -1.0 || notifyOutStartTime != notifyOutEndTime )
        {
          if ( notifyInStartTime == -1.0 && notifyInEndTime == -1.0 || notifyInStartTime < notifyInEndTime )
          {
            if ( (notifyOutStartTime != -1.0 || notifyOutEndTime != -1.0) && notifyOutStartTime >= notifyOutEndTime )
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC590, 361i64, parts->name);
          }
          else
          {
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
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC3C0, 357i64, parts->name);
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC350, 356i64, parts->name);
  }
  if ( notifyOutStartTime >= 0.0 )
  {
    currentAnimTime = info->state.currentAnimTime;
    if ( currentAnimTime >= notifyOutStartTime && currentAnimTime < notifyOutEndTime )
    {
      v10 = info->state.currentAnimTime;
      if ( notifyInStartTime >= 0.0 && currentAnimTime >= notifyInStartTime && currentAnimTime < notifyInEndTime )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC5F0, 362i64, parts->name);
        v10 = info->state.currentAnimTime;
      }
      return 1.0 - (float)((float)(v10 - notifyOutStartTime) / (float)(notifyOutEndTime - notifyOutStartTime));
    }
  }
  if ( notifyInStartTime < 0.0 || (v11 = info->state.currentAnimTime, v11 < notifyInStartTime) || v11 >= notifyInEndTime )
  {
    if ( notifyOutStartTime == -1.0 && notifyInStartTime == -1.0 )
      return v8;
    v13 = info->state.currentAnimTime;
    if ( notifyOutStartTime != -1.0 )
    {
      if ( notifyInStartTime == -1.0 )
      {
        if ( v13 <= notifyOutEndTime )
          return v8;
        return 0.0;
      }
      if ( notifyInStartTime <= notifyOutStartTime )
      {
        if ( v13 >= notifyInStartTime && v13 < notifyOutEndTime )
          return v8;
        return 0.0;
      }
      if ( v13 < notifyOutEndTime )
        return v8;
    }
    if ( v13 >= notifyInStartTime )
      return v8;
    return 0.0;
  }
  v12 = info->state.currentAnimTime;
  if ( notifyOutStartTime >= 0.0 && v11 >= notifyOutStartTime && v11 < notifyOutEndTime )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC5F0, 363i64, parts->name);
    v12 = info->state.currentAnimTime;
  }
  return (float)(v12 - notifyInStartTime) / (float)(notifyInEndTime - notifyInStartTime);
}

/*
==============
XAnimCalcRelDeltaParts3D
==============
*/

void __fastcall XAnimCalcRelDeltaParts3D(const XAnimParts *parts, double weightScale, const float time1, const float time2, XAnimRotPos *rotPos, int quatIndex)
{
  unsigned __int8 flags; 
  __m128 v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  XAnimPartTrans *trans; 
  unsigned __int16 size; 
  float v36; 
  __int128 v40; 
  __m128 v; 
  float v49; 
  vec3_t in; 
  vec3_t out; 
  __int128 v52; 
  vec4_t quat; 
  float4 v54; 
  float4 posDelta; 
  vec4_t rotDelta; 
  vec4_t v57; 

  flags = parts->flags;
  v9 = *(__m128 *)&weightScale;
  if ( (flags & 2) != 0 )
  {
    XAnimCalcRelDeltaParts(parts, *(const float *)&weightScale, time1, time2, rotPos, quatIndex);
  }
  else if ( (flags & 4) != 0 )
  {
    XAnim_CalcDelta3DForTime(parts, time1, &rotDelta, &posDelta);
    XAnim_CalcDelta3DForTime(parts, time2, &v57, &v54);
    v10 = LODWORD(v57.v[3]);
    v11 = v57.v[0];
    v12 = v57.v[2];
    v13 = rotDelta.v[3];
    v14 = v57.v[1];
    LODWORD(v15) = LODWORD(rotDelta.v[1]) ^ _xmm;
    LODWORD(v16) = LODWORD(rotDelta.v[0]) ^ _xmm;
    LODWORD(v17) = LODWORD(rotDelta.v[2]) ^ _xmm;
    rotPos->rot.v[0] = (float)((float)((float)((float)((float)(v57.v[3] * COERCE_FLOAT(LODWORD(rotDelta.v[0]) ^ _xmm)) + (float)(v57.v[0] * rotDelta.v[3])) + (float)(v57.v[2] * COERCE_FLOAT(LODWORD(rotDelta.v[1]) ^ _xmm))) - (float)(v57.v[1] * COERCE_FLOAT(LODWORD(rotDelta.v[2]) ^ _xmm))) * (float)(*(float *)&weightScale * 9.3137942e-10)) + rotPos->rot.v[0];
    rotPos->rot.v[1] = (float)((float)((float)((float)((float)(v14 * v13) - (float)(v12 * v16)) + (float)(*(float *)&v10 * v15)) + (float)(v11 * v17)) * (float)(*(float *)&weightScale * 9.3137942e-10)) + rotPos->rot.v[1];
    rotPos->rot.v[2] = (float)((float)((float)((float)((float)(v14 * v16) + (float)(v12 * v13)) - (float)(v11 * v15)) + (float)(*(float *)&v10 * v17)) * (float)(*(float *)&weightScale * 9.3137942e-10)) + rotPos->rot.v[2];
    v18 = v10;
    *(float *)&v18 = (float)((float)((float)(*(float *)&v10 * v13) - (float)(v11 * v16)) - (float)(v14 * v15)) - (float)(v12 * v17);
    _XMM2 = v18;
    rotPos->rot.v[3] = (float)(*(float *)&v18 * (float)(*(float *)&weightScale * 9.3137942e-10)) + rotPos->rot.v[3];
    if ( (parts->flags & 1) != 0 && time2 < time1 && (trans = parts->deltaPart->trans) != NULL && (size = trans->size) != 0 )
    {
      _R8 = trans->u.frames.frames;
      _RDX = size;
      __asm { vlddqu  xmm0, xmmword ptr [r8] }
      if ( trans->smallTrans )
      {
        __asm { vpmovzxbd xmm0, xmm0 }
        _XMM1 = _mm_cvtepi32_ps(_XMM0);
        _RAX = &(*_R8._1)[2 * size];
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rdx+rax]
          vinsertps xmm4, xmm1, xmm1, 8
          vpmovzxbd xmm1, xmm0
        }
      }
      else
      {
        __asm
        {
          vpxor   xmm2, xmm2, xmm2
          vpunpcklwd xmm0, xmm0, xmm2
        }
        _XMM1 = _mm_cvtepi32_ps(_XMM0);
        _RAX = 3i64 * size;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [r8+rax*2]
          vinsertps xmm4, xmm1, xmm1, 8
          vpunpcklwd xmm1, xmm0, xmm2
        }
      }
      v36 = trans->u.frames.size.v[0];
      _XMM2 = _mm_cvtepi32_ps(_XMM1);
      __asm { vinsertps xmm5, xmm2, xmm2, 8 }
      HIDWORD(v52) = 0;
      v40 = v52;
      *(float *)&v40 = v36;
      _XMM3 = v40;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rcx+18h], 10h
        vinsertps xmm3, xmm3, dword ptr [rcx+1Ch], 20h ; ' '
      }
      v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM5, _XMM4), _XMM3), v54.v);
      v54.v = v;
    }
    else
    {
      v = v54.v;
    }
    _XMM2 = _mm128_mul_ps(_mm128_sub_ps(v, posDelta.v), _mm_shuffle_ps(v9, v9, 0));
    in.v[0] = _XMM2.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rsp+180h+in+4], xmm2, 1
      vextractps dword ptr [rsp+180h+in+8], xmm2, 2
    }
    _XMM4 = LODWORD(rotDelta.v[4 * quatIndex]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vinsertps xmm4, xmm4, xmm2, 10h
      vinsertps xmm4, xmm4, xmm3, 20h ; ' '
      vinsertps xmm4, xmm4, dword ptr [rbp+rax*8+80h+rotDelta+0Ch], 80h+var_50
    }
    quat = (vec4_t)_mm128_mul_ps(_XMM4, (__m128)_xmm);
    QuatTransform(&quat, &in, &out);
    _XMM2.m128_i32[0] = LODWORD(out.v[1]);
    rotPos->posWeight = v9.m128_f32[0] + rotPos->posWeight;
    rotPos->pos.v[0] = out.v[0] + rotPos->pos.v[0];
    v49 = out.v[2];
    rotPos->pos.v[1] = _XMM2.m128_f32[0] + rotPos->pos.v[1];
    rotPos->pos.v[2] = v49 + rotPos->pos.v[2];
  }
}

/*
==============
XAnimCalcRelDeltaParts
==============
*/

void __fastcall XAnimCalcRelDeltaParts(const XAnimParts *parts, double weightScale, double time1, const float time2, XAnimRotPos *rotPos, int quatIndex)
{
  __m128 v7; 
  XAnimPartTrans *trans; 
  unsigned __int16 size; 
  __int128 v26; 
  __m128 v; 
  float v31; 
  float v32; 
  __m128 v33; 
  float v34; 
  float v35; 
  __m128 v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  float4 v44; 
  float4 posDelta; 
  vec2_t v46; 
  vec2_t rotDelta; 

  v7 = *(__m128 *)&weightScale;
  if ( (parts->flags & 6) != 0 )
  {
    XAnim_CalcDeltaForTime(parts, *(const float *)&time1, &v46, &posDelta);
    XAnim_CalcDeltaForTime(parts, time2, &rotDelta, &v44);
    if ( (parts->flags & 1) != 0 && time2 < *(float *)&time1 && (trans = parts->deltaPart->trans) != NULL && (size = trans->size) != 0 )
    {
      _R8 = trans->u.frames.frames;
      _RDX = size;
      __asm { vlddqu  xmm0, xmmword ptr [r8] }
      if ( trans->smallTrans )
      {
        __asm { vpmovzxbd xmm0, xmm0 }
        _XMM1 = _mm_cvtepi32_ps(_XMM0);
        _RAX = &(*_R8._1)[2 * size];
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rdx+rax]
          vinsertps xmm4, xmm1, xmm1, 8
          vpmovzxbd xmm1, xmm0
        }
      }
      else
      {
        __asm
        {
          vpxor   xmm2, xmm2, xmm2
          vpunpcklwd xmm0, xmm0, xmm2
        }
        _XMM1 = _mm_cvtepi32_ps(_XMM0);
        _RAX = 3i64 * size;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [r8+rax*2]
          vinsertps xmm4, xmm1, xmm1, 8
          vpunpcklwd xmm1, xmm0, xmm2
        }
      }
      _XMM2 = _mm_cvtepi32_ps(_XMM1);
      HIDWORD(v43) = 0;
      v26 = v43;
      *(float *)&v26 = trans->u.frames.size.v[0];
      _XMM3 = v26;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rcx+18h], 10h
        vinsertps xmm3, xmm3, dword ptr [rcx+1Ch], 20h ; ' '
        vinsertps xmm5, xmm2, xmm2, 8
      }
      v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM5, _XMM4), _XMM3), v44.v);
    }
    else
    {
      v = v44.v;
    }
    v31 = v46.v[2 * quatIndex + 1];
    v32 = (float)((float)(rotDelta.v[0] * v46.v[0]) + (float)(rotDelta.v[1] * v46.v[1])) * (float)(v7.m128_f32[0] * 9.3137942e-10);
    v33 = _mm128_sub_ps(v, posDelta.v);
    rotPos->rot.v[2] = (float)((float)((float)(rotDelta.v[0] * v46.v[1]) - (float)(rotDelta.v[1] * v46.v[0])) * (float)(v7.m128_f32[0] * 9.3137942e-10)) + rotPos->rot.v[2];
    v34 = v32 + rotPos->rot.v[3];
    v35 = v46.v[2 * quatIndex];
    v36 = _mm128_mul_ps(v33, _mm_shuffle_ps(v7, v7, 0));
    v37 = (float)(v31 * v31) + (float)(v35 * v35);
    rotPos->rot.v[3] = v34;
    v38 = v36.m128_f32[0];
    LODWORD(v39) = _mm_shuffle_ps(v36, v36, 85).m128_u32[0];
    LODWORD(v40) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
    if ( v37 != 0.0 )
    {
      v41 = (float)(v31 * v35) * (float)(2.0 / v37);
      v42 = (float)(v35 * v35) * (float)(2.0 / v37);
      v38 = (float)((float)(1.0 - v42) * v36.m128_f32[0]) + (float)(v41 * v39);
      v39 = v39 - (float)((float)(v36.m128_f32[0] * v41) + (float)(v39 * v42));
    }
    rotPos->posWeight = v7.m128_f32[0] + rotPos->posWeight;
    rotPos->pos.v[0] = v38 + rotPos->pos.v[0];
    rotPos->pos.v[1] = v39 + rotPos->pos.v[1];
    rotPos->pos.v[2] = v40 + rotPos->pos.v[2];
  }
}

/*
==============
XAnimCheckFreeInfo
==============
*/
void XAnimCheckFreeInfo(XAnimTree *tree, unsigned __int16 infoIndex, int hasWeight, const DObj *obj)
{
  unsigned __int16 v7; 
  XAnimInfo *NonRootAnimInfo; 
  XAnimInfo *v9; 
  unsigned __int16 children; 
  bool v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned __int16 v14; 
  __int64 v15; 
  __int64 v16; 

  v7 = infoIndex;
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v9 = NonRootAnimInfo;
  if ( NonRootAnimInfo->state.weight == 0.0 )
    hasWeight = 0;
  children = NonRootAnimInfo->children;
  v11 = children == 0;
  if ( children )
  {
    do
    {
      if ( (children & 0x8000u) != 0 )
      {
        v13 = 32 * (children & 0x7FFF);
        if ( v13 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v16) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v15) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v15, v16) )
            __debugbreak();
        }
        v12 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v13];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v16) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v15) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v12 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      v14 = *((_WORD *)v12 + 5);
      XAnimCheckFreeInfo(tree, children, hasWeight, obj);
      children = v14;
    }
    while ( v14 );
    v7 = infoIndex;
    v11 = v9->children == 0;
  }
  if ( v11 && !hasWeight && v9->state.goalWeight == 0.0 )
    XAnimFreeInfo(tree, v7, obj);
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
  __int64 v12; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7463, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v12) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7464, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v12, 42) )
      __debugbreak();
  }
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7468, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7469, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
    XAnimClearChildGoalWeightsWithParent(tree, graftAnimIndex, subTreeID, InfoIndex, blendTime, curveID);
}

/*
==============
XAnimClearChildGoalWeightsWithParent
==============
*/
void XAnimClearChildGoalWeightsWithParent(XAnimTree *tree, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, float blendTime, const XAnimCurveID curveID)
{
  int v8; 
  unsigned __int16 i; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 *p_notifyChild; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7433, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v14) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7434, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v14, 42) )
      __debugbreak();
  }
  if ( !parentInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7435, ASSERT_TYPE_ASSERT, "(parentInfoIndex)", (const char *)&queryFormat, "parentInfoIndex") )
    __debugbreak();
  v8 = 0;
  v18 = 0i64;
  v19 = 0i64;
  v20 = 0;
  for ( i = XAnimGetAnimInfo(parentInfoIndex)->children; i; i = p_notifyChild[5] )
  {
    AnimInfo = XAnimGetAnimInfo(i);
    p_notifyChild = &AnimInfo->notifyChild;
    if ( AnimInfo->animIndex != v8 )
    {
      v18 = 0i64;
      v19 = 0i64;
      v20 = 0;
    }
    v12 = (unsigned __int16)AnimInfo->subTreeID;
    if ( (unsigned int)v12 >= 0xA0 )
    {
      LODWORD(v15) = 160;
      LODWORD(v14) = (unsigned __int16)AnimInfo->subTreeID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v12 & 0x1F)) & *((_DWORD *)&v18 + (v12 >> 5))) == 0 || p_notifyChild[3] != v8 )
    {
      v13 = p_notifyChild[8];
      v8 = p_notifyChild[3];
      if ( (unsigned int)v13 >= 0xA0 )
      {
        LODWORD(v17) = 160;
        LODWORD(v16) = p_notifyChild[8];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
          __debugbreak();
      }
      *((_DWORD *)&v18 + (v13 >> 5)) |= 0x80000000 >> (v13 & 0x1F);
      XAnimClearGoalWeightInternal(tree, i, blendTime, 0, curveID);
    }
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
  int v11; 
  int v12; 

  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    v12 = 42;
    v11 = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7083, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
    XAnimClearGoalWeightInternal(tree, InfoIndex, blendTime, 0, curveID);
}

/*
==============
XAnimClearGoalWeightInternal
==============
*/

void __fastcall XAnimClearGoalWeightInternal(XAnimTree *tree, unsigned __int16 infoIndex, double blendTime, int forceBlendTime, const XAnimCurveID curveID)
{
  XAnimInfo *NonRootAnimInfo; 
  scr_string_t notifyName; 

  _XMM6 = *(_OWORD *)&blendTime;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7048, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7049, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7052, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( NonRootAnimInfo->state.goalWeight != 0.0 || forceBlendTime )
    LODWORD(_XMM0) = LODWORD(blendTime);
  else
    __asm { vminss  xmm0, xmm6, dword ptr [rbx+34h] }
  NonRootAnimInfo->state.goalTime = *(float *)&_XMM0;
  NonRootAnimInfo->state.startWeight = NonRootAnimInfo->state.weight;
  NonRootAnimInfo->state.curveID = curveID;
  NonRootAnimInfo->state.goalDuration = *(float *)&_XMM0;
  NonRootAnimInfo->state.goalWeight = 0.0;
  if ( *(float *)&blendTime == 0.0 )
  {
    NonRootAnimInfo->state.weight = 0.0;
    NonRootAnimInfo->state.flags |= 1u;
  }
  notifyName = NonRootAnimInfo->notifyName;
  if ( notifyName )
  {
    SL_RemoveRefToString(notifyName);
    NonRootAnimInfo->notifyName = 0;
  }
  NonRootAnimInfo->notifyIndex = -1;
}

/*
==============
XAnimClearGoalWeightKnobInternal
==============
*/

void __fastcall XAnimClearGoalWeightKnobInternal(XAnimTree *tree, unsigned __int16 infoIndex, double goalWeight, float goalTime, const XAnimCurveID curveID)
{
  unsigned __int16 parent; 
  unsigned __int16 children; 
  unsigned __int16 next; 
  XAnimInfo *AnimInfo; 
  __int128 v13; 
  double v14; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7158, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7159, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  *(_QWORD *)&_XMM6 = 0i64;
  parent = GetNonRootAnimInfo(infoIndex)->parent;
  if ( parent )
    children = XAnimGetAnimInfo(parent)->children;
  else
    children = tree->children;
  next = children;
  while ( next )
  {
    AnimInfo = XAnimGetAnimInfo(next);
    _XMM0 = LODWORD(AnimInfo->state.weight);
    if ( next == infoIndex )
    {
      v13 = *(_OWORD *)&goalWeight;
      *(float *)&v13 = *(float *)&goalWeight - *(float *)&_XMM0;
      _XMM0 = v13 & (unsigned int)_xmm;
    }
    next = AnimInfo->next;
    __asm { vmaxss  xmm6, xmm0, xmm6 }
  }
  for ( HIDWORD(v14) = DWORD1(_XMM6); children; children = XAnimGetAnimInfo(children)->next )
  {
    if ( children != infoIndex )
    {
      *(float *)&v14 = *(float *)&_XMM6 * goalTime;
      XAnimClearGoalWeightInternal(tree, children, v14, 0, curveID);
    }
  }
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
  int v13; 
  int v14; 

  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    v14 = 42;
    v13 = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7117, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
    XAnimClearTreeGoalWeightsNode(tree, InfoIndex, blendTime, forceBlendTime, curveID);
}

/*
==============
XAnimClearTreeGoalWeightsNode
==============
*/
void XAnimClearTreeGoalWeightsNode(XAnimTree *tree, unsigned __int16 infoIndex, double blendTime, int forceBlendTime, const XAnimCurveID curveID)
{
  int v8; 
  unsigned __int16 i; 
  unsigned __int8 *v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 

  XAnimClearGoalWeightInternal(tree, infoIndex, blendTime, forceBlendTime, curveID);
  v8 = 0;
  for ( i = XAnimGetAnimInfo(infoIndex)->children; i; v8 = *((unsigned __int16 *)v10 + 3) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v11 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v11 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v14) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(v13) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v13, v14) )
          __debugbreak();
      }
      v10 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v11];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v14) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(v13) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v10 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
    }
    v12 = forceBlendTime && v8 != *((unsigned __int16 *)v10 + 3);
    XAnimClearTreeGoalWeightsNode(tree, i, *(float *)&blendTime, v12, curveID);
    i = *((_WORD *)v10 + 5);
  }
}

/*
==============
XAnimClearTreeGoalWeightsStrict
==============
*/
void XAnimClearTreeGoalWeightsStrict(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float blendTime, void *objID, const XAnimCurveID curveID)
{
  __int64 v8; 
  const XAnim_s *SubTreeAnims; 
  XAnimEntry *v12; 
  int v13; 
  int numAnims; 
  unsigned int v15; 
  unsigned __int16 InfoIndex; 
  __int64 v17; 
  __int64 v18; 

  v8 = animIndex;
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7133, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", (unsigned __int8)curveID, 42) )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7134, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7136, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v8 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7137, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  v12 = &SubTreeAnims->entries[v8];
  v13 = 0;
  numAnims = v12->numAnims;
  if ( v12->numAnims )
  {
    do
    {
      v15 = v13 + v12->animParent.children;
      XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v15);
      if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
      {
        LODWORD(v18) = 42;
        LODWORD(v17) = (unsigned __int8)curveID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7117, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, v15);
      if ( InfoIndex )
        XAnimClearTreeGoalWeightsNode(tree, InfoIndex, blendTime, 1, curveID);
      ++v13;
    }
    while ( v13 < numAnims );
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

  if ( to->animIndex != from->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8917, ASSERT_TYPE_ASSERT, "(to->animIndex == from->animIndex)", (const char *)&queryFormat, "to->animIndex == from->animIndex") )
    __debugbreak();
  *(__m256i *)&to->state.currentAnimTime = *(__m256i *)&from->state.currentAnimTime;
  *(double *)&to->state.startWeight = *(double *)&from->state.startWeight;
  to->notifyChild = from->notifyChild;
  to->notifyIndex = from->notifyIndex;
  notifyName = from->notifyName;
  to->notifyName = notifyName;
  to->notifyType = from->notifyType;
  to->subTreeID = from->subTreeID;
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
  unsigned __int16 v5; 

  Profile_Begin(413);
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8968, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8969, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( !from->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8970, ASSERT_TYPE_ASSERT, "(from->anims->size)", (const char *)&queryFormat, "from->anims->size") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8971, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( to->anims != from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8972, ASSERT_TYPE_ASSERT, "(to->anims == from->anims)", (const char *)&queryFormat, "to->anims == from->anims") )
    __debugbreak();
  to->clientNotifyEnabled = from->clientNotifyEnabled;
  *(double *)&to->lodState.lod = *(double *)&from->lodState.lod;
  to->lodState.distance = from->lodState.distance;
  children = to->children;
  if ( children )
  {
    XAnimFreeInfo(to, children, NULL);
    if ( to->children )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8981, ASSERT_TYPE_ASSERT, "(!to->children)", (const char *)&queryFormat, "!to->children") )
        __debugbreak();
    }
  }
  v5 = from->children;
  if ( v5 )
    XAnimCloneAnimTree_r(from, to, v5, 0);
  XAnimCloneParameterValues(from, to);
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
  XAnimInfo *NonRootAnimInfo; 
  XAnimToXModel *v10; 
  unsigned __int16 v11; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 notifyType; 
  unsigned __int16 i; 
  unsigned __int8 *v15; 
  __int64 v16; 
  __int64 after; 
  __int64 v18; 

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
  NonRootAnimInfo = GetNonRootAnimInfo(fromInfoIndex);
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9021, ASSERT_TYPE_ASSERT, "(fromInfo->inuse)", (const char *)&queryFormat, "fromInfo->inuse") )
    __debugbreak();
  v10 = XAnimCloneXAnimToXModel(NonRootAnimInfo->animToModel);
  v11 = XAnimAllocInfoWithParent(to, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID, v10, NonRootAnimInfo->animIndex, toInfoParentIndex, 1);
  AnimInfo = XAnimGetAnimInfo(v11);
  if ( !from->owner[0] )
  {
    notifyType = NonRootAnimInfo->notifyType;
    if ( notifyType )
    {
      LODWORD(after) = notifyType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9033, ASSERT_TYPE_ASSERT, "( ( !fromInfo->notifyType ) )", "( fromInfo->notifyType ) = %i", after) )
        __debugbreak();
    }
  }
  if ( AnimInfo->animIndex != NonRootAnimInfo->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8994, ASSERT_TYPE_ASSERT, "(to->animIndex == from->animIndex)", (const char *)&queryFormat, "to->animIndex == from->animIndex") )
    __debugbreak();
  *(__m256i *)&AnimInfo->state.currentAnimTime = *(__m256i *)&NonRootAnimInfo->state.currentAnimTime;
  *(double *)&AnimInfo->state.startWeight = *(double *)&NonRootAnimInfo->state.startWeight;
  AnimInfo->notifyType = noteType;
  *(_DWORD *)&AnimInfo->notifyChild = -65536;
  AnimInfo->notifyName = 0;
  AnimInfo->subTreeID = NonRootAnimInfo->subTreeID;
  if ( from->owner[0] == 1 )
    XAnimCloneCustomNodeData(NonRootAnimInfo, AnimInfo, from, to);
  for ( i = NonRootAnimInfo->children; i; i = *((_WORD *)v15 + 5) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v16 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v16 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v18) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(after) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v18) )
          __debugbreak();
      }
      v15 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v16];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v18) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(after) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v18) )
          __debugbreak();
      }
      v15 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
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
  XAnimInfo *NonRootAnimInfo; 
  unsigned int animIndex; 
  const XAnim_s *SubTreeAnims; 
  const char *AnimDebugName; 
  const char *v14; 
  unsigned __int16 i; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4754, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4755, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( tree->anims->size )
  {
    NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
    if ( NonRootAnimInfo->state.goalWeight != 0.0 )
    {
      if ( NonRootAnimInfo->animToModel )
      {
        animIndex = NonRootAnimInfo->animIndex;
        SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4774, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
        v14 = (char *)&queryFormat.fmt + 3;
        if ( *bufferPos )
          v14 = ",";
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "%s%s", v14, AnimDebugName);
      }
      else
      {
        for ( i = NonRootAnimInfo->children; i; i = XAnimGetAnimInfo(i)->next )
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
  const ObfuscateErrorText *v8; 
  const char *v9; 
  XAnimInfo *NonRootAnimInfo; 
  const XAnim_s *SubTreeAnims; 
  XAnimSubTreeID subTreeID; 
  unsigned int v15; 
  float v16; 
  double ClientLodFloat; 
  float v18; 
  const dvar_t *v20; 
  XAnimInfo *AnimInfo; 
  int v22; 
  const char *v23; 
  const char *v24; 
  __int64 v25; 
  const char *AnimDebugName; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  DObj *v32; 
  char v34; 
  const char *v35; 
  unsigned int flags; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  const char *v38; 
  __int64 i; 
  XAnimCurveID curveID; 
  const char *NameFromID; 
  XAnimParts *parts; 
  float frequency; 
  __int128 currentAnimTime_low; 
  float oldTime; 
  __int128 v50; 
  scr_string_t notifyName; 
  double v54; 
  const char *v55; 
  __int64 v56; 
  unsigned __int8 v57; 
  scr_string_t v58; 
  unsigned __int16 notifyChild; 
  const char *v61; 
  bool v62; 
  double v63; 
  XAnimTree *v64; 
  unsigned __int16 children; 
  int v66; 
  char *fmt; 
  __int64 deptha; 
  double depthb; 
  double inoutBufferPos; 
  double goalTime; 
  double v72; 
  double currentAnimTime; 
  double rate; 
  const char *v75; 
  int v76; 
  unsigned int animIndex; 
  int v78; 
  int destPos; 
  int v80; 
  int v81; 
  int v82; 
  DObj *dobj; 
  const char *v84; 
  XAnimTree *treea; 
  float ikWeights[2]; 
  __int64 v87; 
  float animWeights[2]; 
  __int64 v89; 
  char dest[8]; 
  __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  char v94[8]; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  char v102[8]; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  char v110[8]; 
  __int64 v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 

  v8 = &queryFormat;
  v9 = parentColor;
  v78 = depth;
  treea = (XAnimTree *)tree;
  dobj = (DObj *)obj;
  v76 = 0;
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
    LOBYTE(v8) = 0;
    v80 = (int)v8;
    NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4485, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4488, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
      __debugbreak();
    subTreeID = NonRootAnimInfo->subTreeID;
    v15 = NonRootAnimInfo->animIndex;
    animIndex = v15;
    XAnimAssertAnimIndex(tree, subTreeID, v15);
    v16 = 0.0;
    if ( XAnimTreeHasLods(tree) )
    {
      if ( !DObjHasClientFlag(dobj) || (ClientLodFloat = XAnimGetClientLodFloat(dobj), *(float *)&ClientLodFloat == 0.0) )
        v18 = 0.0;
      else
        v18 = FLOAT_1_0;
      LOBYTE(v8) = v18 > (float)SubTreeAnims->entries[animIndex].lod;
      v80 = (unsigned __int8)v8;
    }
    if ( NonRootAnimInfo->state.weight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4507, ASSERT_TYPE_ASSERT, "(state->weight >= 0)", (const char *)&queryFormat, "state->weight >= 0") )
      __debugbreak();
    _XMM0 = LODWORD(NonRootAnimInfo->state.weight);
    if ( *(float *)&_XMM0 != 0.0 )
    {
      if ( *(float *)&_XMM0 >= NonRootAnimInfo->state.goalWeight )
      {
        if ( *(float *)&_XMM0 > NonRootAnimInfo->state.goalWeight || (_BYTE)v8 )
          v9 = "^1";
      }
      else
      {
        v9 = "^4";
      }
      goto LABEL_46;
    }
    v20 = DCONST_DVARBOOL_xanim_displayblacktext;
    if ( !DCONST_DVARBOOL_xanim_displayblacktext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_displayblacktext") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      v9 = "^0";
LABEL_46:
      AnimInfo = XAnimGetAnimInfo(NonRootAnimInfo->parent);
      v84 = "^5";
      if ( AnimInfo->parent )
      {
        if ( *v9 == a0_2[0] && v9[1] == a0_2[1] && v9[2] == a0_2[2] )
        {
          v9 = "^7";
        }
        else if ( *v9 == a4_1[0] && v9[1] == a4_1[1] && v9[2] == a4_1[2] )
        {
          v9 = "^5";
        }
        else if ( *v9 == a1_0[0] && v9[1] == a1_0[1] && v9[2] == a1_0[2] )
        {
          v9 = "^6";
        }
        else if ( *v9 == ::parentColor[0] && v9[1] == ::parentColor[1] && v9[2] == ::parentColor[2] )
        {
          v9 = "^2";
        }
        else
        {
          v22 = *(unsigned __int8 *)v9 - (unsigned __int8)a2_0[0];
          if ( !v22 )
          {
            v22 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)a2_0[1];
            if ( !v22 )
              v22 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)a2_0[2];
          }
          v23 = "^3";
          if ( v22 )
            v23 = v9;
          v9 = v23;
        }
      }
      v24 = "^;";
      if ( !(_BYTE)v8 )
        v24 = v9;
      if ( v78 > 0 )
      {
        v25 = (unsigned int)v78;
        do
        {
          Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "  ");
          --v25;
        }
        while ( v25 );
      }
      AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
      Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, (const char *)&queryFormat, v24);
      v27 = -1i64;
      do
        ++v27;
      while ( AnimDebugName[v27] );
      v28 = *bufferPos;
      v29 = v27 - 35;
      destPos = 0;
      if ( (int)v27 < 36 )
        v29 = 0;
      v30 = v29;
      v31 = 36;
      if ( bufferSize - (int)v28 < 36 )
        v31 = bufferSize - v28;
      Com_sprintfPos_truncate(&buffer[v28], v31, &destPos, (const char *)&queryFormat, &AnimDebugName[v30]);
      *bufferPos += destPos;
      if ( !v78 && XAnimTreeHasLods(treea) )
      {
        v32 = dobj;
        if ( !DObjHasClientFlag(dobj) || (*(double *)&_XMM0 = XAnimGetClientLodFloat(v32), *(float *)&_XMM0 == 0.0) )
          __asm { vxorpd  xmm0, xmm0, xmm0 }
        else
          *(double *)&_XMM0 = DOUBLE_1_0;
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, " %s(lod %.2f)%s", "^7", *(double *)&_XMM0, v24);
      }
      v34 = v80;
      if ( (_BYTE)v80 )
      {
        LODWORD(deptha) = SubTreeAnims->entries[animIndex].lod;
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, " %s(lod cull %d)%s ", "^7", deptha, v24);
      }
      *(_QWORD *)dest = 0i64;
      v91 = 0i64;
      v92 = 0i64;
      v93 = 0i64;
      if ( !NonRootAnimInfo->animToModel )
      {
        if ( NonRootAnimInfo->state.weight == 0.0 || v34 )
        {
          v35 = v24;
          v84 = v24;
        }
        else
        {
          v35 = "^5";
        }
        flags = NonRootAnimInfo->animParent.flags;
        if ( (flags & 0x100) != 0 )
        {
          Com_sprintfPos_truncate(dest, 0x20ui64, &v76, " %soverlay%s", v35, v24);
        }
        else if ( (flags & 0x200) != 0 )
        {
          Com_sprintfPos_truncate(dest, 0x20ui64, &v76, " %sadditive mul%s", v35, v24);
        }
        else if ( (flags & 0x210) != 0 )
        {
          Com_sprintfPos_truncate(dest, 0x20ui64, &v76, " %sadditive%s", v35, v24);
        }
        else if ( XAnimIsCustomNode(SubTreeAnims, NonRootAnimInfo) )
        {
          CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, NonRootAnimInfo);
          if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4598, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
            __debugbreak();
          v38 = SL_ConvertToString((scr_string_t)*CustomNodeTypeInfo->name);
          Com_sprintfPos_truncate(dest, 0x20ui64, &v76, " %s%s%s", v84, v38, v24);
        }
      }
      v81 = 0;
      *(_QWORD *)ikWeights = 0i64;
      v87 = 0i64;
      *(_QWORD *)animWeights = 0i64;
      v89 = 0i64;
      *(_QWORD *)v94 = 0i64;
      v95 = 0i64;
      v96 = 0i64;
      v97 = 0i64;
      v98 = 0i64;
      v99 = 0i64;
      v100 = 0i64;
      v101 = 0i64;
      XAnimIKGetWeights(dobj, NonRootAnimInfo, ikWeights, animWeights);
      for ( i = 0i64; i < 4; ++i )
      {
        _XMM0 = LODWORD(ikWeights[i]);
        __asm
        {
          vmaxss  xmm0, xmm0, xmm7
          vminss  xmm6, xmm0, xmm8
        }
        if ( i )
          Com_sprintfPos_truncate(v94, 0x40ui64, &v81, ", ");
        Com_sprintfPos_truncate(v94, 0x40ui64, &v81, "%.3f", *(float *)&_XMM6);
      }
      *(_QWORD *)v102 = 0i64;
      v103 = 0i64;
      v104 = 0i64;
      v105 = 0i64;
      v106 = 0i64;
      v107 = 0i64;
      v108 = 0i64;
      v109 = 0i64;
      curveID = NonRootAnimInfo->state.curveID;
      if ( curveID != CURVE_ASSET_END && curveID && NonRootAnimInfo->state.goalTime > 0.0 )
      {
        NameFromID = XAnimCurve_GetNameFromID(curveID);
        Com_sprintf(v102, 0x40ui64, " ^5(c) %s%s", v24, NameFromID);
      }
      if ( NonRootAnimInfo->animToModel )
      {
        parts = NonRootAnimInfo->parts;
        if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4640, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
          __debugbreak();
        frequency = parts->frequency;
        currentAnimTime_low = LODWORD(NonRootAnimInfo->state.currentAnimTime);
        oldTime = NonRootAnimInfo->state.oldTime;
        v50 = currentAnimTime_low;
        *(float *)&v50 = *(float *)&currentAnimTime_low - oldTime;
        _XMM2 = v50;
        if ( frequency != 0.0 )
        {
          __asm
          {
            vcmpltss xmm0, xmm2, xmm7
            vblendvps xmm0, xmm2, xmm1, xmm0
          }
          v16 = *(float *)&_XMM0 / frequency;
        }
        notifyName = NonRootAnimInfo->notifyName;
        v54 = v16;
        if ( notifyName )
        {
          v55 = SL_ConvertToString(notifyName);
          Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ": (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (realtimedelta) %.3f, (rate) %.3f ^5(ik)%s %s '%s' %s\n", NonRootAnimInfo->state.weight, NonRootAnimInfo->state.goalWeight, NonRootAnimInfo->state.goalTime, NonRootAnimInfo->state.oldTime, NonRootAnimInfo->state.currentAnimTime, v54, NonRootAnimInfo->state.rate, v24, v94, v55, v102);
        }
        else
        {
          Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ": (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (realtimedelta) %.3f, (rate) %.3f ^5(ik)%s %s %s\n", NonRootAnimInfo->state.weight, NonRootAnimInfo->state.goalWeight, NonRootAnimInfo->state.goalTime, oldTime, *(float *)&currentAnimTime_low, v54, NonRootAnimInfo->state.rate, v24, v94, v102);
        }
      }
      else
      {
        v82 = 0;
        v56 = 16 * (animIndex + 5i64);
        *(_QWORD *)v110 = 0i64;
        v111 = 0i64;
        v112 = 0i64;
        v113 = 0i64;
        v114 = 0i64;
        v115 = 0i64;
        v116 = 0i64;
        v117 = 0i64;
        if ( (!*(_WORD *)((char *)&SubTreeAnims->size + v56 + 2) || (*((_BYTE *)&SubTreeAnims->debugName + v56) & 3) != 0) && ((__int64)NonRootAnimInfo->parts & 3) != 0 )
        {
          v57 = NonRootAnimInfo->animParent.syncGroup[0];
          if ( v57 == 4 )
          {
            Com_sprintfPos_truncate(v110, 0x40ui64, &v82, "^6(sync)%s", v24);
          }
          else
          {
            LODWORD(fmt) = v57;
            Com_sprintfPos_truncate(v110, 0x40ui64, &v82, "^6(sync %d)%s", fmt, v24);
          }
        }
        v58 = NonRootAnimInfo->notifyName;
        if ( v58 )
        {
          if ( !*(_WORD *)((char *)&SubTreeAnims->size + v56 + 2) || (*((_BYTE *)&SubTreeAnims->debugName + v56) & 3) != 0 )
          {
            notifyChild = NonRootAnimInfo->notifyChild;
            v75 = SL_ConvertToString(v58);
            rate = NonRootAnimInfo->state.rate;
            currentAnimTime = NonRootAnimInfo->state.currentAnimTime;
            v72 = NonRootAnimInfo->state.oldTime;
            goalTime = NonRootAnimInfo->state.goalTime;
            inoutBufferPos = NonRootAnimInfo->state.goalWeight;
            depthb = NonRootAnimInfo->state.weight;
            if ( notifyChild )
              Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (rate) %.3f, ^5(ik)%s %s, '%s' %s %s\n", dest, depthb, inoutBufferPos, goalTime, v72, currentAnimTime, rate, v24, v94, v75, v102, v110);
            else
              Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (rate) %.3f, ^5(ik)%s %s,'%s' %s %s\n", dest, depthb, inoutBufferPos, goalTime, v72, currentAnimTime, rate, v24, v94, v75, v102, v110);
          }
          else
          {
            v61 = SL_ConvertToString(v58);
            Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, ^5(ik)%s %s, '%s' %s\n", dest, NonRootAnimInfo->state.weight, NonRootAnimInfo->state.goalWeight, NonRootAnimInfo->state.goalTime, v24, v94, v61, v102);
          }
        }
        else
        {
          v62 = !*(_WORD *)((char *)&SubTreeAnims->size + v56 + 2) || (*((_BYTE *)&SubTreeAnims->debugName + v56) & 3) != 0;
          v63 = NonRootAnimInfo->state.rate;
          if ( v62 )
            Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (time) %.3f -> %.3f, (rate) %.3f, ^5(ik)%s %s %s %s\n", dest, NonRootAnimInfo->state.weight, NonRootAnimInfo->state.goalWeight, NonRootAnimInfo->state.goalTime, NonRootAnimInfo->state.oldTime, NonRootAnimInfo->state.currentAnimTime, v63, v24, v94, v102, v110);
          else
            Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, ":%s (weight) %.3f -> %.3f over %.3f, (rate) %.3f ^5(ik)%s %s %s\n", dest, NonRootAnimInfo->state.weight, NonRootAnimInfo->state.goalWeight, NonRootAnimInfo->state.goalTime, v63, v24, v94, v102);
        }
        v64 = treea;
        XAnimCustomNodePrintDebugInfo(treea, SubTreeAnims, NonRootAnimInfo, buffer, bufferSize, v78, bufferPos);
        children = NonRootAnimInfo->children;
        if ( children )
        {
          v66 = v78;
          do
          {
            XAnimDisplay(dobj, v64, children, v66 + 1, buffer, bufferSize, bufferPos, v24);
            children = XAnimGetAnimInfo(children)->next;
          }
          while ( children );
        }
      }
    }
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
  __int64 v13; 
  XAnimParameterValue *parameterValues; 
  const scr_string_t **gameParameterNames; 
  const char *v16; 
  const char *v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
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
      v13 = 0i64;
      v20 = 0i64;
      v19 = 0i64;
      while ( 1 )
      {
        parameterValues = tree->parameterValues;
        gameParameterNames = tree->anims->gameParameterNames;
        if ( !gameParameterNames )
          break;
        v16 = SL_ConvertToString(**(scr_string_t **)((char *)gameParameterNames + v12));
        if ( !substr || !*substr || I_stristr(v16, substr) )
        {
          Com_sprintfPos_truncate(buffer, v4, bufferPos, "%s%s = %s", "^1", v16, "^7");
          v13 = v19;
LABEL_23:
          switch ( *((_BYTE *)&parameterValues->type + v13) )
          {
            case 0:
              Com_sprintfPos_truncate(buffer, v4, bufferPos, (const char *)&EdgeOctree_BucketFlagsMask[2]);
              break;
            case 1:
              v17 = "false";
              if ( *(&parameterValues->boolValue + v13) )
                v17 = "true";
              Com_sprintfPos_truncate(buffer, v4, bufferPos, v17);
              break;
            case 2:
            case 4:
              LODWORD(fmt) = *(&parameterValues->byteValue + v13);
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "%d", fmt);
              break;
            case 3:
            case 6:
            case 8:
            case 9:
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "ptr");
              break;
            case 5:
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "%.2f", *(float *)((char *)&parameterValues->floatValue + v13));
              break;
            case 7:
              Com_sprintfPos_truncate(buffer, v4, bufferPos, "%.2f,%.2f,%.2f", *(float *)((char *)&parameterValues->floatValue + v13), *(float *)((char *)&parameterValues->vec3Value.v[1] + v13), *(float *)((char *)&parameterValues->vec3Value.v[2] + v13));
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
        v13 = v19;
LABEL_40:
        v13 += 24i64;
        v12 = v20 + 8;
        ++v11;
        v19 = v13;
        v20 += 8i64;
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
  __int64 v5; 
  __int64 result; 
  unsigned __int16 v10; 
  XAnimInfo *AnimInfo; 
  const dvar_t *v12; 
  float rate; 
  const char *AnimDebugName; 
  const XAnim_s *SubTreeAnims; 
  XAnimSubTreeID v16; 
  unsigned int parent; 
  unsigned __int16 v18; 
  unsigned __int16 children; 
  unsigned __int8 *v20; 
  __int64 v21; 
  XAnimInfo *v22; 
  const XAnim_s *v23; 
  __int64 after; 
  __int64 v25; 

  tree = obj->tree;
  v5 = animIndex;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6803, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !(_DWORD)v5 )
  {
    result = tree->children;
    if ( (_WORD)result )
      return result;
    v10 = XAnimAllocInfoWithParent(tree, subTreeID, NULL, 0, 0, 0);
    AnimInfo = XAnimGetAnimInfo(v10);
    XAnimInitInfo(AnimInfo, tree, subTreeID);
    AnimInfo->state.goalWeight = 1.0;
    AnimInfo->state.weight = 1.0;
    AnimInfo->state.goalTime = 0.0;
    *(_QWORD *)&AnimInfo->state.rate = 1065353216i64;
    AnimInfo->state.startWeight = 1.0;
    v12 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
    if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && XAnimInfoHasScrubbedNotetracks(AnimInfo) )
    {
      rate = AnimInfo->state.rate;
      if ( rate != 0.0 )
      {
        AnimDebugName = XAnimGetAnimDebugName(tree->anims, AnimInfo->animIndex);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6825, ASSERT_TYPE_ASSERT, "(info->state.rate == 0.0f)", "%s\n\tXAnimEnsureGoalWeightParent '%s': info->state.rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "info->state.rate == 0.0f", AnimDebugName, rate) )
          __debugbreak();
      }
    }
    return v10;
  }
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6833, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  v16 = subTreeID;
  parent = SubTreeAnims->entries[v5].parent;
  if ( !SubTreeAnims->entries[v5].parent && subTreeID )
  {
    XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v5);
    XAnimAssertGraftSyncNode(tree, graftAnimIndex, &SubTreeAnims->entries[v5]);
    parent = graftAnimIndex;
    v16 = XANIM_SUBTREE_DEFAULT;
  }
  v18 = XAnimEnsureGoalWeightParent(obj, graftAnimIndex, v16, parent);
  children = XAnimGetAnimInfo(v18)->children;
  if ( !children )
  {
LABEL_36:
    v10 = XAnimAllocInfoWithParent(tree, subTreeID, NULL, v5, v18, 0);
    v22 = XAnimGetAnimInfo(v10);
    *(_QWORD *)&v22->state.currentAnimTime = 0i64;
    *(_QWORD *)&v22->state.cycleCount = 0i64;
    *(_QWORD *)&v22->state.goalWeight = 0i64;
    *(_QWORD *)&v22->state.rate = 0i64;
    *(_QWORD *)&v22->state.startWeight = 0i64;
    v22->notifyName = 0;
    *(_DWORD *)&v22->notifyChild = -65536;
    v22->notifyType = 0;
    v22->subTreeID = subTreeID;
    v23 = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( XAnimIsCustomNode(v23, v22) )
      v22->state.flags |= 8u;
    return v10;
  }
  while ( 1 )
  {
    if ( (children & 0x8000u) != 0 )
    {
      v21 = 32 * (children & 0x7FFFu);
      if ( (unsigned int)v21 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v25) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(after) = 32 * (children & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v25) )
          __debugbreak();
      }
      v20 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v21];
    }
    else
    {
      if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v25) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(after) = children;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v25) )
          __debugbreak();
      }
      v20 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
    }
    if ( !v20[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6854, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
      __debugbreak();
    if ( *((unsigned __int16 *)v20 + 3) == (_DWORD)v5 && *((_WORD *)v20 + 8) == subTreeID )
      return children;
    children = *((_WORD *)v20 + 5);
    if ( !children )
      goto LABEL_36;
  }
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
float XAnimFindServerNoteTrack(const DObj *obj, unsigned __int16 infoIndex, float dtime, const XAnimSyncGroupCalcData *syncGroupCalcData)
{
  XAnimTree *tree; 
  XAnimInfo *NonRootAnimInfo; 
  XAnimInfo *v10; 
  unsigned __int8 v12; 
  float frequency; 
  float v14; 
  float oldTime; 
  float v16; 
  unsigned __int16 children; 

  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4167, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( dtime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4169, ASSERT_TYPE_ASSERT, "( dtime >= 0 )", (const char *)&queryFormat, "dtime >= 0") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4170, ASSERT_TYPE_ASSERT, "( tree->anims )", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !syncGroupCalcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4171, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v10 = NonRootAnimInfo;
  if ( NonRootAnimInfo->state.weight == 0.0 || NonRootAnimInfo->state.goalWeight == 0.0 )
    return FLOAT_1_0;
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4180, ASSERT_TYPE_ASSERT, "( info->inuse )", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( v10->animToModel )
    return XAnimFindServerNoteTrackLeafNode(obj, v10, dtime);
  if ( ((__int64)v10->parts & 3) != 0 )
  {
    v12 = v10->animParent.syncGroup[0];
    if ( v12 == 4 )
      frequency = XAnimGetAverageRateFrequency(tree, infoIndex) * v10->state.rate;
    else
      frequency = syncGroupCalcData->syncGroupInfo[v12].frequency;
    v14 = frequency * dtime;
    if ( (float)(frequency * dtime) != 0.0 )
    {
      oldTime = v10->state.oldTime;
      if ( oldTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4201, ASSERT_TYPE_ASSERT, "( ( state->oldTime >= 0 ) )", "( state->oldTime ) = %g", oldTime) )
        __debugbreak();
      return XAnimFindServerNoteTrackSyncSubTree(obj, v10, v14);
    }
    return FLOAT_1_0;
  }
  if ( obj->entnum && v10->notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4207, ASSERT_TYPE_ASSERT, "( !(obj->entnum && (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) ) )", (const char *)&queryFormat, "!(obj->entnum && (info->notifyName != NULL_SCR_STRING) )") )
    __debugbreak();
  v16 = dtime * v10->state.rate;
  if ( v16 == 0.0 )
    return FLOAT_1_0;
  children = v10->children;
  for ( *(float *)&_XMM6 = FLOAT_1_0; children; children = XAnimGetAnimInfo(children)->next )
  {
    *(float *)&_XMM0 = XAnimFindServerNoteTrack(obj, children, v16, syncGroupCalcData);
    __asm { vminss  xmm6, xmm0, xmm6 }
  }
  return *(float *)&_XMM6;
}

/*
==============
XAnimFindServerNoteTrackLeafNode
==============
*/

float __fastcall XAnimFindServerNoteTrackLeafNode(const DObj *obj, XAnimInfo *info, double dtime)
{
  XAnimParts *parts; 
  float v6; 
  __int128 v7; 
  unsigned __int16 oldCycleCount; 
  scr_string_t notifyName; 
  int notifyType; 
  const char *v12; 
  char v13; 
  __int128 v16; 
  __int128 v17; 
  float currentAnimTime; 
  XAnimState nextSyncState; 

  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4017, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4021, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  v7 = *(_OWORD *)&dtime;
  *(float *)&v7 = *(float *)&dtime * (float)(parts->frequency * info->state.rate);
  v6 = *(float *)&v7;
  if ( *(float *)&v7 == 0.0 )
    return FLOAT_1_0;
  if ( COERCE_FLOAT(v7 & _xmm) >= 32767.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4029, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", *(float *)&v7) )
    __debugbreak();
  *(float *)&v7 = *(float *)&v7 + info->state.oldTime;
  _XMM6 = v7;
  oldCycleCount = info->state.oldCycleCount;
  if ( *(float *)&v7 < 0.0 )
  {
    notifyName = info->notifyName;
    if ( notifyName || info->notifyType )
    {
      notifyType = info->notifyType;
      v12 = SL_ConvertToString(notifyName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4034, ASSERT_TYPE_ASSERT, "(!( time < 0.f && ( (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) || info->notifyType ) ))", "%s\n\tAnimation %s playing backwards with active notetrack %s and notifyType %d", "!( time < 0.f && ( (info->notifyName != NULL_SCR_STRING) || info->notifyType ) )", parts->name, v12, notifyType) )
        __debugbreak();
    }
  }
  v13 = parts->flags & 1;
  if ( v6 < 0.0 )
  {
    if ( v13 )
    {
      if ( *(float *)&v7 < 0.0 )
      {
        do
        {
          v17 = _XMM6;
          *(float *)&v17 = *(float *)&_XMM6 + 1.0;
          _XMM6 = v17;
          --oldCycleCount;
        }
        while ( *(float *)&v17 < 0.0 );
      }
    }
    else
    {
      __asm { vmaxss  xmm6, xmm6, xmm8 }
    }
  }
  else if ( *(float *)&v7 >= 1.0 )
  {
    if ( v13 )
    {
      do
      {
        v16 = _XMM6;
        *(float *)&v16 = *(float *)&_XMM6 + -1.0;
        _XMM6 = v16;
        ++oldCycleCount;
      }
      while ( *(float *)&v16 >= 1.0 );
    }
    else
    {
      _XMM1 = LODWORD(FLOAT_0_99999988);
      __asm
      {
        vcmpless xmm0, xmm1, dword ptr [rsi+2Ch]
        vblendvps xmm6, xmm1, xmm7, xmm0
      }
    }
  }
  if ( (info->notifyName || info->notifyType) && (float)(__int16)(oldCycleCount - info->state.cycleCount) < (float)(info->state.currentAnimTime - *(float *)&_XMM6) )
    return FLOAT_1_0;
  currentAnimTime = info->state.currentAnimTime;
  nextSyncState.oldCycleCount = info->state.cycleCount;
  nextSyncState.cycleCount = oldCycleCount;
  nextSyncState.oldTime = currentAnimTime;
  nextSyncState.currentAnimTime = *(float *)&_XMM6;
  return XAnimGetNextServerNotifyFrac(obj, info, &info->state, &nextSyncState, v6);
}

/*
==============
XAnimFindServerNoteTrackSyncSubTree
==============
*/

float __fastcall XAnimFindServerNoteTrackSyncSubTree(const DObj *obj, XAnimInfo *info, double dtime)
{
  __int128 v4; 
  unsigned __int16 oldCycleCount; 
  scr_string_t notifyName; 
  int notifyType; 
  const char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int128 v15; 
  int v16; 
  __int128 v17; 
  float currentAnimTime; 
  XAnimState nextSyncState; 

  v4 = *(_OWORD *)&dtime;
  *(float *)&v4 = *(float *)&dtime + info->state.oldTime;
  _XMM6 = v4;
  oldCycleCount = info->state.oldCycleCount;
  if ( *(float *)&v4 < 0.0 )
  {
    notifyName = info->notifyName;
    if ( notifyName || info->notifyType )
    {
      notifyType = info->notifyType;
      v10 = SL_ConvertToString(notifyName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4094, ASSERT_TYPE_ASSERT, "(!( time < 0.f && ( (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) || info->notifyType ) ))", "%s\n\tAnimation playing backwards with active notetrack %s and notifyType %d", "!( time < 0.f && ( (info->notifyName != NULL_SCR_STRING) || info->notifyType ) )", v10, notifyType) )
        __debugbreak();
    }
  }
  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4097, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( COERCE_FLOAT(LODWORD(dtime) & _xmm) >= 32767.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4100, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", *(float *)&dtime) )
    __debugbreak();
  v11 = info->animParent.flags & 2;
  v12 = info->animParent.flags & 1;
  if ( *(float *)&dtime < 0.0 )
  {
    if ( v11 )
    {
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4127, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_LOOP_SYNC_TIME))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_LOOP_SYNC_TIME)") )
        __debugbreak();
      __asm { vmaxss  xmm6, xmm6, xmm8 }
    }
    else
    {
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4133, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME)", (const char *)&queryFormat, "info->animParent.flags & XANIM_LOOP_SYNC_TIME") )
        __debugbreak();
      if ( *(float *)&v4 < 0.0 )
      {
        do
        {
          v17 = _XMM6;
          *(float *)&v17 = *(float *)&_XMM6 + 1.0;
          _XMM6 = v17;
          --oldCycleCount;
        }
        while ( *(float *)&v17 < 0.0 );
      }
      if ( *(float *)&_XMM6 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4140, ASSERT_TYPE_ASSERT, "( ( time < 1.f ) )", "( time ) = %g", *(float *)&_XMM6) )
        __debugbreak();
      if ( *(float *)&_XMM6 < 0.0 )
      {
        v16 = 4141;
LABEL_44:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", v16, ASSERT_TYPE_ASSERT, "( ( !(time < 0.f) ) )", "( time ) = %g", *(float *)&_XMM6) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( v11 )
    {
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4106, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_LOOP_SYNC_TIME))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_LOOP_SYNC_TIME)") )
        __debugbreak();
      if ( *(float *)&v4 >= 1.0 )
      {
        _XMM1 = LODWORD(FLOAT_0_99999988);
        __asm
        {
          vcmpless xmm0, xmm1, dword ptr [rsi+2Ch]
          vblendvps xmm6, xmm1, xmm7, xmm0
        }
      }
      goto LABEL_46;
    }
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4112, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME)", (const char *)&queryFormat, "info->animParent.flags & XANIM_LOOP_SYNC_TIME") )
      __debugbreak();
    if ( *(float *)&v4 >= 1.0 )
    {
      do
      {
        v15 = _XMM6;
        *(float *)&v15 = *(float *)&_XMM6 + -1.0;
        _XMM6 = v15;
        ++oldCycleCount;
      }
      while ( *(float *)&v15 >= 1.0 );
    }
    if ( *(float *)&_XMM6 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4119, ASSERT_TYPE_ASSERT, "( ( time < 1.f ) )", "( time ) = %g", *(float *)&_XMM6) )
      __debugbreak();
    if ( *(float *)&_XMM6 < 0.0 )
    {
      v16 = 4120;
      goto LABEL_44;
    }
  }
LABEL_46:
  if ( (info->notifyName || info->notifyType) && (float)(__int16)(oldCycleCount - info->state.cycleCount) < (float)(info->state.currentAnimTime - *(float *)&_XMM6) )
    return FLOAT_1_0;
  currentAnimTime = info->state.currentAnimTime;
  nextSyncState.oldCycleCount = info->state.cycleCount;
  nextSyncState.cycleCount = oldCycleCount;
  nextSyncState.oldTime = currentAnimTime;
  nextSyncState.currentAnimTime = *(float *)&_XMM6;
  return XAnimGetServerNotifyFracSyncTotal(obj, info, &info->state, &nextSyncState, *(float *)&dtime);
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
  __int64 v8; 
  XAnimEntry *v9; 
  const XAnimParts *PartsInternal; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  XAnimRotPos rotPos; 

  v8 = animIndex;
  Profile_Begin(412);
  v9 = &anims->entries[v8];
  if ( v9->numAnims )
  {
    rot->v[3] = 1.0;
    *(_QWORD *)rot->v = 0i64;
    rot->v[2] = 0.0;
    *(_QWORD *)trans->v = 0i64;
    trans->v[2] = 0.0;
  }
  else
  {
    PartsInternal = XAnimGetPartsInternal(v9);
    rotPos = (XAnimRotPos)0i64;
    XAnimCalcAbsDeltaParts(PartsInternal, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)), time, &rotPos);
    v11 = rotPos.rot.v[1];
    v12 = rotPos.rot.v[2];
    v13 = rotPos.rot.v[3];
    if ( (float)((float)((float)((float)(rotPos.rot.v[0] * rotPos.rot.v[0]) + (float)(v11 * v11)) + (float)(v12 * v12)) + (float)(v13 * v13)) == 0.0 )
    {
      rot->v[3] = 1.0;
      *(_QWORD *)rot->v = 0i64;
      rot->v[2] = 0.0;
    }
    else
    {
      rot->v[0] = rotPos.rot.v[0];
      rot->v[1] = v11;
      rot->v[2] = v12;
      rot->v[3] = v13;
    }
    v14 = rotPos.pos.v[1];
    trans->v[0] = rotPos.pos.v[0];
    trans->v[2] = rotPos.pos.v[2];
    trans->v[1] = v14;
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
  __int128 v2; 
  XAnimInfo *AnimInfo; 
  XAnimParts *parts; 
  unsigned __int16 children; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  XAnimInfo *v12; 
  float weight; 
  __int128 v14; 
  __int128 v15; 
  float v16; 
  __int128 v17; 
  __int128 v18; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1921, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1922, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1926, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( AnimInfo->animToModel )
  {
    parts = AnimInfo->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1932, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    return parts->frequency;
  }
  else
  {
    children = AnimInfo->children;
    v9 = 0i64;
    v10 = 0.0;
    v11 = 0i64;
    if ( children )
    {
      do
      {
        v12 = XAnimGetAnimInfo(children);
        weight = v12->state.weight;
        if ( weight < 0.0 )
        {
          *((_QWORD *)&v14 + 1) = 0i64;
          *(double *)&v14 = weight;
          v2 = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1943, ASSERT_TYPE_ASSERT, "( ( weight >= 0.0f ) )", "( weight ) = %g", weight) )
            __debugbreak();
        }
        if ( weight != 0.0 )
        {
          *(float *)&v2 = XAnimGetAverageRateFrequency(tree, children);
          if ( *(float *)&v2 != 0.0 )
          {
            v15 = v2;
            *(float *)&v15 = *(float *)&v2 * weight;
            v2 = v15;
            v16 = *(float *)&v15 * v12->state.rate;
            v17 = v9;
            *(float *)&v17 = *(float *)&v9 + v16;
            v9 = v17;
            v18 = v11;
            *(float *)&v18 = *(float *)&v11 + weight;
            v11 = v18;
          }
        }
        children = v12->next;
      }
      while ( children );
      if ( *(float *)&v11 != 0.0 )
        return *(float *)&v9 / *(float *)&v11;
    }
    return v10;
  }
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
  const dvar_t *v3; 
  const dvar_t *v4; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9712, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9713, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree || !XAnimTreeHasLods(tree) )
    return 0.0;
  v3 = DCONST_DVARFLT_xanim_lodOverride;
  if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.value < 0.0 )
    return (float)tree->lodState.lod * 0.00390625;
  v4 = DCONST_DVARFLT_xanim_lodOverride;
  if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.value;
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
  int nodeIndexPtr; 

  nodeIndexPtr = 0;
  v5 = truncate_cast<unsigned short,unsigned int>(infoIndex);
  XAnimGetDebugVisualAnimWeights_r(tree, tree->anims, v5, &nodeIndexPtr, dbgNodes, 1.0, 1.0, 0, 0);
}

/*
==============
XAnimGetDebugVisualAnimWeights_r
==============
*/
__int64 XAnimGetDebugVisualAnimWeights_r(const XAnimTree *tree, const XAnim_s *anims, unsigned __int16 infoIndex, int *nodeIndexPtr, XAnimTreeDebugNode *dbgNodes, float childWeight, float globalWeight, bool underAdditive, bool underOverlay)
{
  __int64 v9; 
  XAnimTreeDebugNode *v13; 
  XAnimInfo *AnimInfo; 
  XAnimTreeDebugNode *v15; 
  bool v16; 
  scr_string_t notifyName; 
  const char *v18; 
  float rate; 
  const char *AnimDebugName; 
  int v21; 
  bool v22; 
  bool v23; 
  char v24; 
  bool v25; 
  unsigned __int16 children; 
  __int128 v27; 
  unsigned __int8 *v28; 
  __int64 v29; 
  __int128 v30; 
  unsigned __int16 next; 
  char i; 
  unsigned __int8 *v33; 
  __int64 v34; 
  float v35; 
  const XAnim_s *SubTreeAnims; 
  int DebugVisualAnimWeights_r; 
  int v38; 
  __int64 v39; 
  char v40; 
  char v41; 
  char v42; 
  char v43; 
  __int64 v44; 
  __int64 v45; 
  bool v46; 

  v9 = *nodeIndexPtr;
  if ( (_DWORD)v9 == 63 )
    return 0xFFFFFFFFi64;
  *nodeIndexPtr = v9 + 1;
  if ( tree->info_usage && !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5060, ASSERT_TYPE_ASSERT, "( ( ( tree->info_usage == 0 ) || infoIndex ) )", "( infoIndex ) = %i", 0) )
    __debugbreak();
  v13 = dbgNodes;
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  v15 = &dbgNodes[v9];
  if ( globalWeight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5064, ASSERT_TYPE_ASSERT, "( ( globalWeight >= 0.0f ) )", "( globalWeight ) = %g", globalWeight) )
    __debugbreak();
  *((_BYTE *)v15 + 88) &= ~0x40u;
  v15->relativeChildWeight = childWeight;
  v15->globalWeight = globalWeight;
  v15->nodeIndex = v9;
  v16 = !anims->entries[AnimInfo->animIndex].numAnims || ((__int64)anims->entries[AnimInfo->animIndex].parts & 3) != 0;
  v15->localWeight = AnimInfo->state.weight;
  v15->goalWeight = AnimInfo->state.goalWeight;
  notifyName = AnimInfo->notifyName;
  if ( notifyName )
    v18 = SL_ConvertToString(notifyName);
  else
    v18 = (char *)&queryFormat.fmt + 3;
  v15->notifyName = v18;
  *((_BYTE *)v15 + 88) &= ~1u;
  *((_BYTE *)v15 + 88) |= v16;
  if ( v16 )
  {
    v15->goalTime = AnimInfo->state.goalTime;
    v15->oldTime = AnimInfo->state.oldTime;
    v15->currentTime = AnimInfo->state.currentAnimTime;
    rate = AnimInfo->state.rate;
  }
  else
  {
    *(_QWORD *)&v15->goalTime = 0i64;
    v15->currentTime = 0.0;
    rate = 0.0;
  }
  v15->rate = rate;
  AnimDebugName = XAnimGetAnimDebugName(anims, AnimInfo->animIndex);
  *(_QWORD *)&v15->numChildren = 0i64;
  v21 = -1;
  v15->animName = AnimDebugName;
  *(_QWORD *)&v15->firstChildIndex = -1i64;
  *(_QWORD *)&v15->nextSiblingIndex = -1i64;
  v15->nodeId = AnimInfo;
  if ( AnimInfo->animToModel )
  {
    *((_BYTE *)v15 + 88) = (8 * underOverlay) | (4 * underAdditive) & 0xF7 | *((_BYTE *)v15 + 88) & 0xE3 | 0x22;
  }
  else
  {
    if ( XAnimIsCustomNode(anims, AnimInfo) )
    {
      *((_BYTE *)v15 + 88) = *((_BYTE *)v15 + 88) & 0xED | 0x10;
      v22 = underAdditive || IsInfoAdditive(AnimInfo);
      *((_BYTE *)v15 + 88) &= ~4u;
      *((_BYTE *)v15 + 88) |= 4 * v22;
      v46 = v22;
      v23 = underOverlay || IsInfoOverlay(AnimInfo);
      v24 = *((_BYTE *)v15 + 88) & 0xF7 | (8 * (v23 | 4));
    }
    else
    {
      *((_BYTE *)v15 + 88) &= 0xEDu;
      v25 = underAdditive || IsInfoAdditive(AnimInfo);
      *((_BYTE *)v15 + 88) &= ~4u;
      *((_BYTE *)v15 + 88) |= 4 * v25;
      v46 = v25;
      v23 = underOverlay || IsInfoOverlay(AnimInfo);
      v24 = (8 * v23) & 0xDF | *((_BYTE *)v15 + 88) & 0xD7;
    }
    *((_BYTE *)v15 + 88) = v24;
    children = AnimInfo->children;
    v27 = 0i64;
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v29 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v29 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v45) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v44) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v44, v45) )
              __debugbreak();
          }
          v28 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v29];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v45) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v44) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v44, v45) )
              __debugbreak();
          }
          v28 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( !*((_QWORD *)v28 + 3) && (*((_DWORD *)v28 + 8) & 0x210) != 0 )
          break;
        v30 = v27;
        *(float *)&v30 = *(float *)&v27 + *((float *)v28 + 15);
        v27 = v30;
        children = XAnimGetAnimInfo(children)->next;
      }
      while ( children );
      v15 = &dbgNodes[v9];
      v13 = dbgNodes;
      v21 = -1;
    }
    next = AnimInfo->children;
    for ( i = 1; next; next = XAnimGetAnimInfo(next)->next )
    {
      if ( (next & 0x8000u) != 0 )
      {
        v34 = 32 * (next & 0x7FFFu);
        if ( (unsigned int)v34 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v45) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v44) = 32 * (next & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v44, v45) )
            __debugbreak();
        }
        v33 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v34];
      }
      else
      {
        if ( (unsigned int)next >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v45) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v44) = next;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        v33 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[next];
      }
      v35 = *((float *)v33 + 15);
      SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)v33 + 8));
      if ( *((_QWORD *)v33 + 3) || (*((_DWORD *)v33 + 8) & 0x210) == 0 )
      {
        if ( *(float *)&v27 == 0.0 )
          v35 = 0.0;
        else
          v35 = v35 / *(float *)&v27;
      }
      DebugVisualAnimWeights_r = XAnimGetDebugVisualAnimWeights_r(tree, SubTreeAnims, next, nodeIndexPtr, v13, v35, v35 * globalWeight, v46, v23);
      v38 = DebugVisualAnimWeights_r;
      if ( i )
      {
        v15->firstChildIndex = DebugVisualAnimWeights_r;
        i = 0;
      }
      else
      {
        if ( DebugVisualAnimWeights_r != -1 )
          v13[DebugVisualAnimWeights_r].prevSiblingIndex = v21;
        if ( v21 != -1 )
          v13[v21].nextSiblingIndex = DebugVisualAnimWeights_r;
      }
      if ( DebugVisualAnimWeights_r == -1 )
      {
        *((_BYTE *)v15 + 88) |= 0x40u;
      }
      else
      {
        v39 = DebugVisualAnimWeights_r;
        v13[v39].parentIndex = v9;
        v40 = *((_BYTE *)v15 + 88);
        if ( (v40 & 0x20) != 0 || (*((_BYTE *)&v13[v39] + 88) & 0x20) != 0 )
          v41 = 32;
        else
          v41 = 0;
        v42 = v41 | v40 & 0xDF;
        *((_BYTE *)v15 + 88) = v42;
        if ( (v42 & 0x40) != 0 || (*((_BYTE *)&v13[v39] + 88) & 0x40) != 0 )
          v43 = 64;
        else
          v43 = 0;
        ++v15->numChildren;
        *((_BYTE *)v15 + 88) = v43 | v42 & 0xBF;
        if ( (*((_BYTE *)&v13[v39] + 88) & 0x20) != 0 )
          ++v15->numChildrenWithLeafOrCustomNodeBelow;
      }
      v21 = v38;
    }
  }
  return (unsigned int)v9;
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
    return XAnimGetAnimInfo(InfoIndex)->state.goalTime;
  else
    return 0.0;
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
    return XAnimGetAnimInfo(InfoIndex)->state.goalWeight;
  else
    return 0.0;
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
  __int64 v2; 
  const XAnimEntry *v4; 
  XAnimParts *PartsInternal; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5377, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5378, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", v2, anims->size) )
    __debugbreak();
  v4 = &anims->entries[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5381, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  PartsInternal = XAnimGetPartsInternal(v4);
  if ( !PartsInternal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5351, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  return (float)PartsInternal->numframes / PartsInternal->framerate;
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
  return (float)animParts->numframes / animParts->framerate;
}

/*
==============
XAnimGetLengthFromPartsMsec
==============
*/
__int64 XAnimGetLengthFromPartsMsec(const XAnimParts *animParts)
{
  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5351, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  return (unsigned int)(int)(float)((float)((float)animParts->numframes / animParts->framerate) * 1000.0);
}

/*
==============
XAnimGetLengthMsec
==============
*/
__int64 XAnimGetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  double Length; 

  Length = XAnimGetLength(anims, anim);
  return (unsigned int)(int)(float)(*(float *)&Length * 1000.0);
}

/*
==============
XAnimGetLodForDistance
==============
*/
unsigned __int8 XAnimGetLodForDistance(const DObj *obj, float distance)
{
  XAnimTree *tree; 
  XAnim_s *anims; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  float v12; 
  unsigned __int8 v13; 
  unsigned __int8 numLods; 
  unsigned __int8 v15; 
  float v16; 
  float v18; 
  __int128 v19; 
  __int128 v22; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9517, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( distance < 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9518, ASSERT_TYPE_ASSERT, "( distance ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "distance", "0.0f", distance, *(double *)&_XMM0) )
      __debugbreak();
  }
  tree = obj->tree;
  if ( !tree )
    return 0;
  anims = tree->anims;
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9528, ASSERT_TYPE_ASSERT, "(anims != nullptr)", (const char *)&queryFormat, "anims != nullptr") )
    __debugbreak();
  v9 = DCONST_DVARFLT_xanim_lodHysteresisMaxPercent;
  if ( !DCONST_DVARFLT_xanim_lodHysteresisMaxPercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodHysteresisMaxPercent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v11 = DCONST_DVARFLT_xanim_lodHysteresisDistance;
  v12 = value * 0.0099999998;
  if ( !DCONST_DVARFLT_xanim_lodHysteresisDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodHysteresisDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v13 = truncate_cast<unsigned char,int>(SHIBYTE(tree->lodState.lod));
  numLods = anims->numLods;
  v15 = 0;
  v16 = 0.0;
  if ( numLods )
  {
    while ( 1 )
    {
      LODWORD(_XMM0) = 0;
      v18 = anims->lodDistances[v15];
      if ( v13 == v15 + 1 )
      {
        v19 = LODWORD(anims->lodDistances[v15]);
        *(float *)&v19 = (float)(v18 - v16) * v12;
        _XMM1 = v19;
        __asm { vminss  xmm2, xmm1, xmm6 }
        LODWORD(_XMM0) = _XMM2 ^ _xmm;
      }
      else if ( v13 == v15 )
      {
        v22 = LODWORD(anims->lodDistances[v15]);
        *(float *)&v22 = (float)(v18 - v16) * v12;
        _XMM1 = v22;
        __asm { vminss  xmm0, xmm1, xmm6 }
      }
      if ( distance < (float)(*(float *)&_XMM0 + v18) )
        break;
      ++v15;
      v16 = v18;
      if ( v15 >= numLods )
        return numLods;
    }
    return v15;
  }
  return numLods;
}

/*
==============
XAnimGetNextNotifyIndex
==============
*/
__int64 XAnimGetNextNotifyIndex(const XAnimParts *parts, float time)
{
  XAnimNotifyInfo *notify; 
  XAnimNotifyInfo *v4; 
  float v5; 
  int v6; 
  float v7; 

  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2220, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( time < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2222, ASSERT_TYPE_ASSERT, "( ( !(time < 0.f) ) )", "( time ) = %g", time) )
    __debugbreak();
  if ( time >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2223, ASSERT_TYPE_ASSERT, "( ( time < 1.f ) )", "( time ) = %g", time) )
    __debugbreak();
  notify = parts->notify;
  v4 = NULL;
  v5 = FLOAT_2_0;
  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2229, ASSERT_TYPE_ASSERT, "(notifyInfo)", (const char *)&queryFormat, "notifyInfo") )
    __debugbreak();
  v6 = 0;
  if ( !parts->notifyCount )
    goto LABEL_31;
  do
  {
    v7 = notify->time;
    if ( v7 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2233, ASSERT_TYPE_ASSERT, "(testTime >= 0)", (const char *)&queryFormat, "testTime >= 0") )
      __debugbreak();
    if ( v7 >= time && v7 < v5 )
    {
      v5 = v7;
      v4 = notify;
    }
    ++v6;
    ++notify;
  }
  while ( v6 < parts->notifyCount );
  if ( !v4 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2243, ASSERT_TYPE_ASSERT, "(bestNotifyInfo)", (const char *)&queryFormat, "bestNotifyInfo") )
      __debugbreak();
  }
  if ( v4 != parts->notify && v4[-1].time >= v4->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2244, ASSERT_TYPE_ASSERT, "(bestNotifyInfo == parts->notify || bestNotifyInfo->time > (bestNotifyInfo - 1)->time)", (const char *)&queryFormat, "bestNotifyInfo == parts->notify || bestNotifyInfo->time > (bestNotifyInfo - 1)->time") )
    __debugbreak();
  return (__int64)(unsigned int)((_DWORD)v4 - LODWORD(parts->notify)) >> 3;
}

/*
==============
XAnimGetNextServerNotifyFrac
==============
*/
float XAnimGetNextServerNotifyFrac(const DObj *obj, XAnimInfo *info, const XAnimState *syncState, const XAnimState *nextSyncState, float dtime)
{
  XAnimTree *tree; 
  const XAnimParts *PartsFromInfo; 
  __int16 notifyIndex; 

  if ( info->state.goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2425, ASSERT_TYPE_ASSERT, "(info->state.goalWeight)", (const char *)&queryFormat, "info->state.goalWeight") )
    __debugbreak();
  if ( dtime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2426, ASSERT_TYPE_ASSERT, "(dtime)", (const char *)&queryFormat, "dtime") )
    __debugbreak();
  if ( !obj->entnum || !info->notifyName )
    return FLOAT_1_0;
  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2432, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2436, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  PartsFromInfo = XAnimGetPartsFromInfo(tree, info);
  if ( PartsFromInfo && ((notifyIndex = info->notifyIndex, notifyIndex >= 0) || (XAnimUpdateServerNotifyIndex(info, PartsFromInfo), notifyIndex = info->notifyIndex, notifyIndex >= 0)) )
    return XAnimGetNotifyFracLeaf(syncState, nextSyncState, PartsFromInfo->notify[notifyIndex].time, dtime);
  else
    return XAnimGetNotifyFracLeaf(syncState, nextSyncState, 1.0, dtime);
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
  XAnimNotifyInfo *notify; 
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
  notify = Parts->notify;
  if ( !notify )
    return FLOAT_N1_0;
  v7 = 0;
  if ( Parts->notifyCount )
  {
    do
    {
      v8 = 0x7FFFFFFFi64;
      v9 = notetrackName;
      v10 = SL_ConvertToString(notify->name);
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
          return notify->time;
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
          return notify->time;
      }
      ++v7;
      ++notify;
    }
    while ( v7 < Parts->notifyCount );
  }
  return FLOAT_N1_0;
}

/*
==============
XAnimGetNotetrackTimeFromParts
==============
*/
float XAnimGetNotetrackTimeFromParts(const XAnimParts *animParts, scr_string_t name)
{
  XAnimNotifyInfo *notify; 
  int v5; 

  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8633, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  notify = animParts->notify;
  if ( !notify )
    return FLOAT_N1_0;
  v5 = 0;
  if ( !animParts->notifyCount )
    return FLOAT_N1_0;
  while ( notify->name != name )
  {
    ++v5;
    ++notify;
    if ( v5 >= animParts->notifyCount )
      return FLOAT_N1_0;
  }
  return notify->time;
}

/*
==============
XAnimGetNotetrackTimeFromPartsCharString
==============
*/
float XAnimGetNotetrackTimeFromPartsCharString(const XAnimParts *animParts, const char *notetrackName)
{
  XAnimNotifyInfo *notify; 
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
  notify = animParts->notify;
  if ( notify )
  {
    v5 = 0;
    if ( animParts->notifyCount )
    {
      do
      {
        v6 = 0x7FFFFFFFi64;
        v7 = notetrackName;
        v8 = SL_ConvertToString(notify->name);
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
            return notify->time;
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
            return notify->time;
        }
        ++v5;
        ++notify;
      }
      while ( v5 < animParts->notifyCount );
    }
  }
  return FLOAT_N1_0;
}

/*
==============
XAnimGetNotifyFracLeaf
==============
*/
float XAnimGetNotifyFracLeaf(const XAnimState *state, const XAnimState *nextState, float noteTime, float dtime)
{
  unsigned __int16 v7; 
  float oldTime; 
  float v9; 
  float currentAnimTime; 
  __int128 v12; 
  float v13; 
  float v14; 
  __int128 v18; 
  float v19; 
  __int128 v22; 
  float v23; 

  if ( dtime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2259, ASSERT_TYPE_ASSERT, "(dtime)", (const char *)&queryFormat, "dtime") )
    __debugbreak();
  v7 = nextState->oldCycleCount - state->oldCycleCount;
  oldTime = nextState->oldTime;
  v9 = state->oldTime;
  currentAnimTime = nextState->currentAnimTime;
  if ( oldTime != 1.0 )
  {
    if ( currentAnimTime >= oldTime )
    {
      if ( (currentAnimTime > noteTime || currentAnimTime == 1.0) && oldTime <= noteTime )
      {
        v22 = 0i64;
        *(float *)&v22 = (float)v7;
        _XMM0 = v22;
        v23 = (float)((float)(noteTime - v9) + *(float *)&v22) / dtime;
        v13 = v23;
        if ( v23 < 0.0 )
        {
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2302, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v23, *(double *)&_XMM0) )
            goto LABEL_14;
        }
        return v13;
      }
    }
    else
    {
      if ( currentAnimTime > noteTime )
      {
        v12 = 0i64;
        *(float *)&v12 = (float)v7;
        _XMM0 = v12;
        v14 = (float)((float)((float)(1.0 - v9) + *(float *)&v12) + noteTime) / dtime;
        v13 = v14;
        if ( v14 < 0.0 )
        {
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2279, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v14, *(double *)&_XMM0) )
            __debugbreak();
        }
        return v13;
      }
      if ( oldTime <= noteTime )
      {
        v18 = 0i64;
        *(float *)&v18 = (float)v7;
        _XMM0 = v18;
        v19 = (float)((float)(noteTime - v9) + *(float *)&v18) / dtime;
        v13 = v19;
        if ( v19 < 0.0 )
        {
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2289, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v19, *(double *)&_XMM0) )
          {
LABEL_14:
            __debugbreak();
            return v13;
          }
        }
        return v13;
      }
    }
  }
  return FLOAT_1_0;
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
    return XAnimGetAnimInfo(InfoIndex)->state.oldTime;
  else
    return 0.0;
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
    return XAnimGetAnimInfo(InfoIndex)->state.rate;
  else
    return 0.0;
}

/*
==============
XAnimGetRelDelta3D
==============
*/
void XAnimGetRelDelta3D(const XAnim_s *anims, unsigned int animIndex, vec4_t *rot, vec3_t *trans, float time1, float time2)
{
  __int64 v8; 
  XAnimEntry *v10; 
  const XAnimParts *PartsInternal; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  XAnimRotPos rotPos; 

  v8 = animIndex;
  Profile_Begin(412);
  v10 = &anims->entries[v8];
  if ( v10->numAnims )
  {
    rot->v[3] = 1.0;
    *(_QWORD *)rot->v = 0i64;
    rot->v[2] = 0.0;
    *(_QWORD *)trans->v = 0i64;
    trans->v[2] = 0.0;
  }
  else
  {
    PartsInternal = XAnimGetPartsInternal(v10);
    rotPos = (XAnimRotPos)0i64;
    XAnimCalcRelDeltaParts3D(PartsInternal, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)), time1, time2, &rotPos, 0);
    v12 = rotPos.rot.v[1];
    v13 = rotPos.rot.v[2];
    v14 = rotPos.rot.v[3];
    if ( (float)((float)((float)((float)(rotPos.rot.v[0] * rotPos.rot.v[0]) + (float)(v12 * v12)) + (float)(v13 * v13)) + (float)(v14 * v14)) == 0.0 )
    {
      *(_QWORD *)rot->v = 0i64;
      rot->v[2] = 0.0;
      rot->v[3] = 1.0;
    }
    else
    {
      rot->v[0] = rotPos.rot.v[0];
      rot->v[1] = v12;
      rot->v[2] = v13;
      rot->v[3] = v14;
    }
    v15 = rotPos.pos.v[1];
    trans->v[0] = rotPos.pos.v[0];
    trans->v[2] = rotPos.pos.v[2];
    trans->v[1] = v15;
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
  __int64 v8; 
  XAnimEntry *v10; 
  const XAnimParts *PartsInternal; 
  float v12; 
  float v13; 
  float v14; 
  XAnimRotPos rotPos; 

  v8 = animIndex;
  Profile_Begin(412);
  v10 = &anims->entries[v8];
  if ( v10->numAnims )
  {
    rot->v[1] = 1.0;
    rot->v[0] = 0.0;
    *(_QWORD *)trans->v = 0i64;
    trans->v[2] = 0.0;
  }
  else
  {
    PartsInternal = XAnimGetPartsInternal(v10);
    v12 = FLOAT_1_0;
    rotPos = (XAnimRotPos)0i64;
    XAnimCalcRelDeltaParts(PartsInternal, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)), COERCE_DOUBLE((unsigned __int64)LODWORD(time1)), time2, &rotPos, 0);
    v13 = 0.0;
    if ( rotPos.rot.v[0] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6525, ASSERT_TYPE_ASSERT, "(!rotPos.rot[0])", (const char *)&queryFormat, "!rotPos.rot[0]") )
      __debugbreak();
    if ( rotPos.rot.v[1] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 6526, ASSERT_TYPE_ASSERT, "(!rotPos.rot[1])", (const char *)&queryFormat, "!rotPos.rot[1]") )
      __debugbreak();
    if ( rotPos.rot.v[2] != 0.0 || rotPos.rot.v[3] != 0.0 )
    {
      v12 = rotPos.rot.v[3];
      v13 = rotPos.rot.v[2];
    }
    rot->v[0] = v13;
    rot->v[1] = v12;
    v14 = rotPos.pos.v[1];
    trans->v[0] = rotPos.pos.v[0];
    trans->v[2] = rotPos.pos.v[2];
    trans->v[1] = v14;
  }
  Profile_EndInternal(NULL);
}

/*
==============
XAnimGetScrubbedBackwardNotifyFracLeaf
==============
*/
float XAnimGetScrubbedBackwardNotifyFracLeaf(const XAnimState *state, float noteTime, float dtime, bool hasWrapped)
{
  float oldTime; 
  float currentAnimTime; 
  float v9; 
  float v10; 
  float v14; 
  float v17; 

  if ( dtime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2323, ASSERT_TYPE_ASSERT, "(dtime)", (const char *)&queryFormat, "dtime") )
    __debugbreak();
  if ( (state->flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2324, ASSERT_TYPE_ASSERT, "(state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS)", (const char *)&queryFormat, "state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS") )
    __debugbreak();
  oldTime = state->oldTime;
  currentAnimTime = state->currentAnimTime;
  if ( state->currentAnimTime < oldTime )
  {
    if ( !hasWrapped )
    {
      _XMM0 = LODWORD(FLOAT_N1_0);
      v10 = (float)(noteTime - oldTime) * (float)(-1.0 / dtime);
      v9 = v10;
      if ( v10 < 0.0 )
      {
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2339, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v10, *(double *)&_XMM0) )
          __debugbreak();
      }
      return v9;
    }
    return FLOAT_1_0;
  }
  if ( hasWrapped )
  {
    if ( (state->flags & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2348, ASSERT_TYPE_ASSERT, "(state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS_WRAPPED)", (const char *)&queryFormat, "state->flags & XANIMSTATE_SCRUBBED_NOTETRACKS_WRAPPED") )
      __debugbreak();
    if ( oldTime >= noteTime )
    {
      _XMM0 = LODWORD(FLOAT_N1_0);
      v14 = (float)(noteTime - oldTime) * (float)(-1.0 / dtime);
      v9 = v14;
      if ( v14 < 0.0 )
      {
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2358, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v14, *(double *)&_XMM0) )
        {
LABEL_20:
          __debugbreak();
          return v9;
        }
      }
      return v9;
    }
    if ( noteTime >= currentAnimTime )
    {
      _XMM0 = LODWORD(FLOAT_1_0);
      v17 = (float)((float)(1.0 - noteTime) + oldTime) / dtime;
      v9 = v17;
      if ( v17 < 0.0 )
      {
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2367, ASSERT_TYPE_ASSERT, "( frac ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "frac", "0.f", v17, *(double *)&_XMM0) )
          goto LABEL_20;
      }
      return v9;
    }
  }
  return FLOAT_1_0;
}

/*
==============
XAnimGetServerNotifyFracSyncTotal
==============
*/
float XAnimGetServerNotifyFracSyncTotal(const DObj *obj, XAnimInfo *info, const XAnimState *syncState, const XAnimState *nextSyncState, float dtime)
{
  float result; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  XAnimInfo *v14; 

  result = XAnimGetNextServerNotifyFrac(obj, info, syncState, nextSyncState, dtime);
  children = info->children;
  *(float *)&_XMM7 = result;
  if ( children )
  {
    do
    {
      AnimInfo = XAnimGetAnimInfo(children);
      v14 = AnimInfo;
      if ( AnimInfo->state.weight != 0.0 && AnimInfo->state.goalWeight != 0.0 )
      {
        *(float *)&_XMM0 = XAnimGetServerNotifyFracSyncTotal(obj, AnimInfo, syncState, nextSyncState, dtime);
        __asm { vminss  xmm7, xmm0, xmm7 }
      }
      children = v14->next;
    }
    while ( children );
    return *(float *)&_XMM7;
  }
  return result;
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
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  float *v14; 
  XAnimInfo *AnimInfo; 
  XAnimParts *parts; 
  XAnimInfo *v19; 
  bool v20; 
  unsigned __int16 children; 
  __int64 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  XAnimInfo *v30; 
  float weight; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  float *p_leadWeight; 
  __int64 v42; 
  float v43; 
  float v44; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  float frequenciesa[2]; 
  __int64 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 

  v14 = frequencies;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1970, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1971, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1972, ASSERT_TYPE_ASSERT, "(frequencies)", (const char *)&queryFormat, "frequencies") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1976, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( AnimInfo->animToModel )
  {
    parts = AnimInfo->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1983, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    v19 = XAnimGetAnimInfo(AnimInfo->parent);
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1986, ASSERT_TYPE_ASSERT, "(parentInfo)", (const char *)&queryFormat, "parentInfo") )
      __debugbreak();
    if ( v19->animParent.syncGroup[0] >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1987, ASSERT_TYPE_ASSERT, "(parentInfo->animParent.syncGroup < XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "parentInfo->animParent.syncGroup < XAnimSyncGroupID::COUNT") )
      __debugbreak();
    v14[(unsigned __int8)v19->animParent.syncGroup[0]] = parts->frequency;
  }
  else
  {
    v20 = AnimInfo->state.goalWeight != 0.0 && bNotify;
    children = AnimInfo->children;
    v22 = 0i64;
    v50 = 0i64;
    v51 = 0i64;
    v48 = 0i64;
    v49 = 0i64;
    if ( children )
    {
      v60 = v7;
      v23 = HIDWORD(v51);
      v59 = v8;
      v24 = (unsigned int)v51;
      v58 = v9;
      v25 = HIDWORD(v50);
      v57 = v10;
      v26 = (unsigned int)v50;
      v56 = v11;
      v27 = HIDWORD(v49);
      v55 = v12;
      v28 = (unsigned int)v49;
      v54 = v13;
      v29 = HIDWORD(v48);
      do
      {
        v30 = XAnimGetAnimInfo(children);
        weight = v30->state.weight;
        if ( weight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2007, ASSERT_TYPE_ASSERT, "( ( childWeight >= 0.0f ) )", "( childWeight ) = %g", weight) )
          __debugbreak();
        if ( weight != 0.0 && (((__int64)v30->parts & 4) == 0 || v30->animParent.syncGroup[0] != 4) && !(v30->animToModel ? AnimInfo->animParent.syncGroup[0] == 4 : !XAnimInfoHasSyncGroups(v30)) )
        {
          *(_QWORD *)frequenciesa = 0i64;
          v53 = 0i64;
          XAnimGetSyncGroupData_r(tree, children, syncGroupCalcData, frequenciesa, weight * accumWeight, parentAccumTime * AnimInfo->state.rate, v20);
          if ( frequenciesa[0] != 0.0 )
          {
            v33 = (float)(frequenciesa[0] * weight) * v30->state.rate;
            *(float *)&v48 = weight + *(float *)&v48;
            v34 = v26;
            *(float *)&v34 = *(float *)&v26 + v33;
            v26 = v34;
          }
          if ( frequenciesa[1] != 0.0 )
          {
            v35 = v25;
            *(float *)&v35 = *(float *)&v25 + (float)((float)(frequenciesa[1] * weight) * v30->state.rate);
            v25 = v35;
            v36 = v29;
            *(float *)&v36 = *(float *)&v29 + weight;
            v29 = v36;
          }
          if ( *(float *)&v53 != 0.0 )
          {
            v37 = v24;
            *(float *)&v37 = *(float *)&v24 + (float)((float)(*(float *)&v53 * weight) * v30->state.rate);
            v24 = v37;
            v38 = v28;
            *(float *)&v38 = *(float *)&v28 + weight;
            v28 = v38;
          }
          if ( *((float *)&v53 + 1) != 0.0 )
          {
            v39 = v23;
            *(float *)&v39 = *(float *)&v23 + (float)((float)(*((float *)&v53 + 1) * weight) * v30->state.rate);
            v23 = v39;
            v40 = v27;
            *(float *)&v40 = *(float *)&v27 + weight;
            v27 = v40;
          }
        }
        children = v30->next;
      }
      while ( children );
      v14 = frequencies;
      *((float *)&v51 + 1) = *(float *)&v23;
      *(float *)&v51 = *(float *)&v24;
      *((float *)&v50 + 1) = *(float *)&v25;
      *(float *)&v50 = *(float *)&v26;
      *((float *)&v49 + 1) = *(float *)&v27;
      *(float *)&v49 = *(float *)&v28;
      *((float *)&v48 + 1) = *(float *)&v29;
    }
    p_leadWeight = &syncGroupCalcData->syncGroupInfo[0].leadWeight;
    v42 = 4i64;
    do
    {
      v43 = *(float *)((char *)&v48 + v22 * 4);
      if ( v43 != 0.0 )
      {
        v44 = *(float *)((char *)&v50 + v22 * 4) / v43;
        if ( ((__int64)AnimInfo->parts & 4) != 0 )
        {
          if ( AnimInfo->animParent.syncGroup[0] == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2061, ASSERT_TYPE_ASSERT, "(info->animParent.syncGroup != XAnimSyncGroupID::NONE)", (const char *)&queryFormat, "info->animParent.syncGroup != XAnimSyncGroupID::NONE") )
            __debugbreak();
          if ( accumWeight > *p_leadWeight )
          {
            p_leadWeight[1] = parentAccumTime;
            *p_leadWeight = accumWeight;
            *((_WORD *)p_leadWeight - 2) = infoIndex;
            *((_BYTE *)p_leadWeight + 8) = v20;
          }
        }
        v14[v22] = v44;
      }
      p_leadWeight += 5;
      ++v22;
      --v42;
    }
    while ( v42 );
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
    return XAnimGetAnimInfo(InfoIndex)->state.currentAnimTime;
  else
    return 0.0;
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
    return XAnimGetAnimInfo(InfoIndex)->state.weight;
  else
    return 0.0;
}

/*
==============
XAnimHasFinished
==============
*/
bool XAnimHasFinished(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  unsigned __int16 InfoIndex; 
  XAnimInfo *NonRootAnimInfo; 
  float currentAnimTime; 
  float oldTime; 
  __int16 v12; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5659, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( !InfoIndex )
    return 1;
  NonRootAnimInfo = GetNonRootAnimInfo(InfoIndex);
  currentAnimTime = NonRootAnimInfo->state.currentAnimTime;
  oldTime = NonRootAnimInfo->state.oldTime;
  if ( NonRootAnimInfo->state.rate < 0.0 )
  {
    if ( currentAnimTime > oldTime || currentAnimTime == 0.0 )
      return 1;
    v12 = NonRootAnimInfo->state.oldCycleCount - NonRootAnimInfo->state.cycleCount;
  }
  else
  {
    if ( currentAnimTime < oldTime || currentAnimTime == 1.0 )
      return 1;
    v12 = NonRootAnimInfo->state.cycleCount - NonRootAnimInfo->state.oldCycleCount;
  }
  return v12 > 0;
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
__int64 XAnimInitTime(XAnimTree *tree, unsigned __int16 infoIndex, float goalTime)
{
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 inited; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( (NonRootAnimInfo->state.currentAnimTime != 0.0 || NonRootAnimInfo->state.cycleCount) && NonRootAnimInfo->state.cycleCount == NonRootAnimInfo->state.oldCycleCount )
  {
    if ( goalTime != 0.0 && NonRootAnimInfo->state.weight != 0.0 )
    {
      inited = XAnimCloneInitTime(tree, infoIndex, NonRootAnimInfo->parent);
      XAnimClearTreeGoalWeightsNode(tree, infoIndex, goalTime, 1, LINEAR);
      return inited;
    }
    XAnimResetTime(infoIndex);
  }
  return infoIndex;
}

/*
==============
XAnimInitTimeFullRestart
==============
*/
__int64 XAnimInitTimeFullRestart(XAnimTree *tree, unsigned __int16 infoIndex, float goalTime)
{
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 inited; 
  XAnimInfo *v7; 
  XAnimInfo *v9; 
  unsigned __int16 i; 

  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 611, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( (NonRootAnimInfo->animToModel || (NonRootAnimInfo->animParent.flags & 0x1000) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3839, ASSERT_TYPE_ASSERT, "(IsInfoInstantFullRestart( info ))", (const char *)&queryFormat, "IsInfoInstantFullRestart( info )") )
    __debugbreak();
  if ( NonRootAnimInfo->animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3840, ASSERT_TYPE_ASSERT, "(!IsLeafInfo( info ))", (const char *)&queryFormat, "!IsLeafInfo( info )") )
    __debugbreak();
  if ( NonRootAnimInfo->state.weight == 0.0 )
  {
    v9 = GetNonRootAnimInfo(infoIndex);
    *(_QWORD *)&v9->state.currentAnimTime = 0i64;
    *(_DWORD *)&v9->state.cycleCount = 0;
    v9->notifyIndex = -1;
    for ( i = XAnimGetAnimInfo(infoIndex)->children; i; i = XAnimGetAnimInfo(i)->next )
      XAnimResetTime(i);
    return infoIndex;
  }
  else
  {
    inited = XAnimCloneInitTime(tree, infoIndex, NonRootAnimInfo->parent);
    XAnimClearTreeGoalWeightsNode(tree, infoIndex, goalTime, 1, LINEAR);
    if ( goalTime == 0.0 )
    {
      v7 = GetNonRootAnimInfo(inited);
      if ( !v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3850, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
      }
      v7->state.flags |= 4u;
    }
    return inited;
  }
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
  XAnimInfo *AnimInfo; 
  XAnimParts *parts; 
  unsigned int v7; 
  scr_string_t *names; 
  unsigned int v9; 
  unsigned int i; 
  const char *v11; 
  unsigned __int16 children; 
  XAnimInfo *v14; 
  unsigned __int16 next; 

  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8184, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( AnimInfo->state.weight == 0.0 || AnimInfo->state.goalWeight == 0.0 || IsInfoAdditive(AnimInfo) )
    return 0i64;
  if ( AnimInfo->animToModel )
  {
    parts = AnimInfo->parts;
    if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8204, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    v7 = parts->boneCount[9];
    names = parts->names;
    if ( printBoneNames )
      Com_Printf(19, "Printing bone names for anim: %s\n", parts->name);
    v9 = 0;
    for ( i = 0; i < v7; ++names )
    {
      if ( *names == boneName )
      {
        if ( !printBoneNames )
          return 1i64;
        Com_Printf(19, "Found bone at index %d\n", i);
        v9 = 1;
      }
      if ( printBoneNames )
      {
        v11 = SL_ConvertToString(*names);
        Com_Printf(19, "Bone %d: %s\n", i, v11);
      }
      ++i;
    }
    return v9;
  }
  children = AnimInfo->children;
  if ( !children )
    return 0i64;
  while ( 1 )
  {
    v14 = XAnimGetAnimInfo(children);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8236, ASSERT_TYPE_ASSERT, "(nextInfo)", (const char *)&queryFormat, "nextInfo") )
      __debugbreak();
    next = v14->next;
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
  int nodeIndexPtr[6]; 

  nodeIndexPtr[0] = 0;
  XAnimMarkDebugVisualShow_r(tree, anims, infoIndex, nodeIndexPtr, nodeIndexShowMask, 1.0, 0);
}

/*
==============
XAnimMarkDebugVisualShow_r
==============
*/
void XAnimMarkDebugVisualShow_r(const XAnimTree *tree, const XAnim_s *anims, unsigned __int16 infoIndex, int *nodeIndexPtr, unsigned __int64 nodeIndexShowMask, float globalWeight, bool showSubTree)
{
  int *v7; 
  const XAnimTree *v10; 
  unsigned __int64 v11; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int64 v13; 
  XAnimToXModel *animToModel; 
  bool v16; 
  bool IsCustomNode; 
  __int128 v21; 
  bool ShouldNormalizeChildren; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  __int128 v25; 
  unsigned __int16 i; 
  XAnimInfo *v27; 
  const XAnim_s *SubTreeAnims; 
  float weight; 
  __int64 v30; 

  v7 = nodeIndexPtr;
  v10 = tree;
  if ( !nodeIndexPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4898, ASSERT_TYPE_ASSERT, "(nodeIndexPtr)", (const char *)&queryFormat, "nodeIndexPtr") )
    __debugbreak();
  v11 = (unsigned int)*v7;
  *v7 = v11 + 1;
  if ( (unsigned int)v11 >= 0x40 )
  {
    LODWORD(v30) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4900, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( 64 )", "nodeIndex doesn't index MAX_ANIM_DEBUG_VISUAL_NODES\n\t%i not in [0, %i)", v30, 64) )
      __debugbreak();
  }
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4903, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( NonRootAnimInfo->state.weight == 0.0 )
    NonRootAnimInfo->state.weight = 1.0;
  v13 = nodeIndexShowMask;
  animToModel = NonRootAnimInfo->animToModel;
  _XMM8 = LODWORD(globalWeight);
  if ( _bittest64((const __int64 *)&v13, v11) )
  {
    if ( animToModel )
    {
      v16 = showSubTree;
      NonRootAnimInfo->state.weight = 1.0;
    }
    else
    {
      IsCustomNode = XAnimIsCustomNode(anims, NonRootAnimInfo);
      v16 = 1;
      if ( IsCustomNode )
        NonRootAnimInfo->state.weight = 1.0;
    }
  }
  else if ( animToModel || XAnimIsCustomNode(anims, NonRootAnimInfo) )
  {
    v16 = showSubTree;
    _XMM0 = showSubTree;
    __asm
    {
      vpcmpeqd xmm1, xmm0, xmm1
      vblendvps xmm0, xmm8, xmm7, xmm1
    }
    NonRootAnimInfo->state.weight = *(float *)&_XMM0;
  }
  else
  {
    v16 = showSubTree;
  }
  if ( (LODWORD(NonRootAnimInfo->state.weight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4943, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->weight ))", (const char *)&queryFormat, "!IS_NAN( state->weight )") )
    __debugbreak();
  v21 = 0i64;
  ShouldNormalizeChildren = XAnim_ShouldNormalizeChildren(NonRootAnimInfo);
  if ( ShouldNormalizeChildren )
  {
    children = NonRootAnimInfo->children;
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
        {
LABEL_32:
          v25 = v21;
          *(float *)&v25 = *(float *)&v21 + AnimInfo->state.weight;
          v21 = v25;
        }
        children = AnimInfo->next;
      }
      while ( children );
      v7 = nodeIndexPtr;
      v10 = tree;
      v13 = nodeIndexShowMask;
    }
  }
  for ( i = NonRootAnimInfo->children; i; i = v27->next )
  {
    v27 = XAnimGetAnimInfo(i);
    SubTreeAnims = XAnimGetSubTreeAnims(v10, (const XAnimSubTreeID)v27->subTreeID);
    weight = v27->state.weight;
    if ( (v27->animToModel || (v27->animParent.flags & 0x210) == 0 && (v27->animParent.flags & 0x100) == 0) && ShouldNormalizeChildren )
    {
      if ( *(float *)&v21 <= 0.0 )
        weight = 0.0;
      else
        weight = weight / *(float *)&v21;
    }
    XAnimMarkDebugVisualShow_r(v10, SubTreeAnims, i, v7, v13, weight * globalWeight, v16);
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
  double NotetrackTimeFromParts; 

  Parts = XAnimGetParts(anims, animIndex);
  NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(Parts, name);
  return *(float *)&NotetrackTimeFromParts >= 0.0;
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
  double NotetrackTimeFromParts; 
  unsigned __int16 children; 
  XAnimInfo *NonRootAnimInfo; 

  if ( !infoIndex )
    return 0;
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
  if ( AnimInfo->animToModel )
  {
    Parts = XAnimGetParts(SubTreeAnims, AnimInfo->animIndex);
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(Parts, name);
    return *(float *)&NotetrackTimeFromParts >= 0.0;
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
void XAnimPlaySimpleBlendTreeAnim(const DObj *obj, float oldAnimTime, float oldPlaybackRate, float newAnimTime, float newPlaybackRate, float blendTime, scr_string_t notifyName, unsigned int notifyType)
{
  XAnimTree *tree; 
  XAnimTree *v12; 
  unsigned __int16 children; 
  unsigned __int16 InfoIndex_r; 
  double Length; 
  __int128 v17; 
  double v20; 
  __int128 v21; 

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
  _XMM6 = 0i64;
  if ( oldAnimTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( (oldAnimTime >= 0.0f) ) )", "( oldAnimTime ) = %g", oldAnimTime) )
    __debugbreak();
  if ( newAnimTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1158, ASSERT_TYPE_ASSERT, "( ( (newAnimTime >= 0.0f) ) )", "( newAnimTime ) = %g", newAnimTime) )
    __debugbreak();
  if ( blendTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1159, ASSERT_TYPE_ASSERT, "( ( (blendTime >= 0.0f) ) )", "( blendTime ) = %g", blendTime) )
    __debugbreak();
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 1u, 1.0, 0.0, oldPlaybackRate, notifyName, notifyType, 0, LINEAR, NULL);
  Profile_Begin(456);
  v12 = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8386, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(v12, 0, XANIM_SUBTREE_DEFAULT, 1u);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 5456, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  children = v12->children;
  if ( children )
  {
    InfoIndex_r = XAnimGetInfoIndex_r(XANIM_SUBTREE_DEFAULT, 1u, children);
    if ( InfoIndex_r )
      XAnimSetGoalWeightNode(obj, v12, InfoIndex_r, 0.0, blendTime, oldPlaybackRate, (scr_string_t)0, 0, LINEAR, NULL);
  }
  Profile_EndInternal(NULL);
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 2u, 1.0, blendTime, newPlaybackRate, notifyName, notifyType, 1, LINEAR, NULL);
  Length = XAnimGetLength(tree->anims, 1u);
  if ( *(float *)&Length > 0.0 )
  {
    v17 = LODWORD(FLOAT_1_0);
    *(float *)&v17 = 1.0 / *(float *)&Length;
    if ( XAnimIsLooped(tree->anims, 1u) )
    {
      *(float *)&_XMM1 = fmodf_0(oldAnimTime, *(float *)&Length) * *(float *)&v17;
    }
    else
    {
      __asm { vcmpless xmm1, xmm6, xmm0 }
      *(float *)&v17 = *(float *)&v17 * oldAnimTime;
      _XMM2 = v17;
      __asm { vblendvps xmm1, xmm2, xmm9, xmm1 }
    }
  }
  else
  {
    LODWORD(_XMM1) = 0;
  }
  XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, 1u, *(float *)&_XMM1);
  v20 = XAnimGetLength(tree->anims, 2u);
  if ( *(float *)&v20 > 0.0 )
  {
    v21 = LODWORD(FLOAT_1_0);
    *(float *)&v21 = 1.0 / *(float *)&v20;
    if ( XAnimIsLooped(tree->anims, 2u) )
    {
      *(float *)&_XMM6 = fmodf_0(newAnimTime, *(float *)&v20) * *(float *)&v21;
    }
    else
    {
      __asm { vcmpless xmm1, xmm6, xmm0 }
      *(float *)&v21 = *(float *)&v21 * newAnimTime;
      _XMM2 = v21;
      __asm { vblendvps xmm6, xmm2, xmm9, xmm1 }
    }
  }
  XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, 2u, *(float *)&_XMM6);
}

/*
==============
XAnimPlaySimpleTreeAnim
==============
*/
void XAnimPlaySimpleTreeAnim(const DObj *obj, float animTime, float playbackRate, scr_string_t notifyName, unsigned int notifyType)
{
  XAnimTree *tree; 
  double Length; 
  __int128 v11; 

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
  _XMM6 = 0i64;
  if ( animTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 1038, ASSERT_TYPE_ASSERT, "( ( !(animTime < 0.0f) ) )", "( animTime ) = %g", animTime) )
    __debugbreak();
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 1u, 1.0, 1.0, playbackRate, notifyName, notifyType, 1, LINEAR, NULL);
  Length = XAnimGetLength(tree->anims, 1u);
  if ( *(float *)&Length > 0.0 )
  {
    v11 = LODWORD(FLOAT_1_0);
    *(float *)&v11 = 1.0 / *(float *)&Length;
    if ( XAnimIsLooped(tree->anims, 1u) )
    {
      *(float *)&_XMM6 = fmodf_0(animTime, *(float *)&Length) * *(float *)&v11;
    }
    else
    {
      __asm { vcmpless xmm1, xmm6, xmm0 }
      *(float *)&v11 = *(float *)&v11 * animTime;
      _XMM2 = v11;
      __asm { vblendvps xmm6, xmm2, xmm10, xmm1 }
    }
  }
  XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, 1u, *(float *)&_XMM6);
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
void XAnimProcessClientNotify(const DObj *obj, const XAnimInfo *info, float dtime, XAnimNotifyHandle *inOutNotifyHead)
{
  unsigned __int16 notifyType; 
  float oldTime; 
  float currentAnimTime; 
  float NotifyFracLeaf; 
  XAnimParts *PartsFromInfo; 

  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2681, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  if ( dtime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2685, ASSERT_TYPE_ASSERT, "(dtime)", (const char *)&queryFormat, "dtime") )
    __debugbreak();
  notifyType = info->notifyType;
  if ( (notifyType || obj->tree->clientNotifyEnabled) && (!obj->tree->clientNotifyEnabled || info->state.oldCycleCount < info->state.cycleCount || dtime >= 0.0) )
  {
    if ( info->state.goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2701, ASSERT_TYPE_ASSERT, "(state->goalWeight)", (const char *)&queryFormat, "state->goalWeight") )
      __debugbreak();
    oldTime = info->state.oldTime;
    if ( oldTime == 1.0 )
      goto LABEL_19;
    if ( info->animToModel )
    {
      if ( info->notifyName )
        PartsFromInfo = XAnimGetPartsFromInfo(obj->tree, info);
      else
        PartsFromInfo = info->parts;
      if ( !PartsFromInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2726, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
        __debugbreak();
      XAnimProcessNotify(PartsFromInfo, &info->state, info->notifyName, notifyType, dtime, NULL, XAnimAddClientNotify, inOutNotifyHead);
    }
    else
    {
      currentAnimTime = info->state.currentAnimTime;
      if ( currentAnimTime < oldTime || currentAnimTime == 1.0 )
      {
LABEL_19:
        NotifyFracLeaf = XAnimGetNotifyFracLeaf(&info->state, &info->state, 1.0, dtime);
        XAnimAddClientNotify(info->notifyName, g_endNotetrackName, NotifyFracLeaf, notifyType, NULL, NULL, inOutNotifyHead);
      }
    }
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
  XAnimNotifyInfo *notify; 
  signed __int8 flags; 
  float *v14; 
  char v15; 
  bool v16; 
  float v17; 
  float currentAnimTime; 
  float oldTime; 
  unsigned __int16 v20; 
  XAnimNotifyInfo *k; 
  float v22; 
  __int64 v23; 
  float v24; 
  __int64 v25; 
  __int64 v26; 
  XAnimNotifyInfo *v27; 
  __int16 v28; 
  float j; 
  __int64 v30; 
  float v31; 
  float *v32; 
  __int64 v33; 
  float v34; 
  unsigned __int16 i; 
  float time; 
  __int64 v37; 
  __int64 v38; 

  if ( !notifyFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2549, ASSERT_TYPE_ASSERT, "(notifyFunc)", (const char *)&queryFormat, "notifyFunc") )
    __debugbreak();
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2550, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  NextNotifyIndex = XAnimGetNextNotifyIndex(parts, state->oldTime);
  if ( NextNotifyIndex >= parts->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2553, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
    __debugbreak();
  notify = parts->notify;
  flags = state->flags;
  v14 = (float *)&notify[NextNotifyIndex];
  v15 = flags & 0x10;
  v16 = (flags & 0x10) != 0 && flags < 0;
  v17 = dtime;
  if ( v15 )
    LODWORD(v17) = LODWORD(dtime) & _xmm;
  currentAnimTime = state->currentAnimTime;
  oldTime = state->oldTime;
  if ( state->currentAnimTime >= oldTime )
  {
    if ( currentAnimTime == 1.0 )
    {
      if ( (parts->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2627, ASSERT_TYPE_ASSERT, "(!(parts->flags & ANIM_LOOP))", (const char *)&queryFormat, "!(parts->flags & ANIM_LOOP)") )
        __debugbreak();
      v31 = v14[1];
      v32 = v14 + 1;
      if ( v31 >= state->oldTime )
      {
        do
        {
          if ( *v32 < state->oldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2634, ASSERT_TYPE_ASSERT, "(state->oldTime <= notifyInfo->time)", (const char *)&queryFormat, "state->oldTime <= notifyInfo->time") )
            __debugbreak();
          XAnimGetNotifyFracLeaf(state, state, *v32, v17);
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, *((unsigned int *)v32 - 1), v33, notifyType, parts, customData, inOutNotifyHead);
          v32 += 2;
          ++NextNotifyIndex;
        }
        while ( NextNotifyIndex < parts->notifyCount );
      }
    }
    else
    {
      v34 = v14[1];
      if ( currentAnimTime > v34 && oldTime <= v34 )
      {
        if ( v16 )
        {
          for ( i = 0; i < parts->notifyCount; ++notify )
          {
            time = notify->time;
            if ( time >= state->currentAnimTime || time < state->oldTime )
            {
              XAnimGetScrubbedBackwardNotifyFracLeaf(state, time, v17, v16);
              ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, (unsigned int)notify->name, v37, notifyType, parts, customData, inOutNotifyHead);
            }
            ++i;
          }
        }
        else
        {
          do
          {
            if ( v34 < state->oldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2668, ASSERT_TYPE_ASSERT, "(state->oldTime <= notifyInfo->time)", (const char *)&queryFormat, "state->oldTime <= notifyInfo->time") )
              __debugbreak();
            XAnimGetNotifyFracLeaf(state, state, v14[1], v17);
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, *(unsigned int *)v14, v38, notifyType, parts, customData, inOutNotifyHead);
            v14 += 2;
            if ( ++NextNotifyIndex >= parts->notifyCount )
              break;
            v34 = v14[1];
          }
          while ( v34 < state->currentAnimTime );
        }
      }
    }
  }
  else if ( !v15 || v16 )
  {
    v24 = v14[1];
    if ( currentAnimTime <= v24 )
    {
      if ( oldTime <= v24 )
      {
        do
        {
          if ( v14[1] < state->oldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2604, ASSERT_TYPE_ASSERT, "(state->oldTime <= notifyInfo->time)", (const char *)&queryFormat, "state->oldTime <= notifyInfo->time") )
            __debugbreak();
          XAnimGetNotifyFracLeaf(state, state, v14[1], v17);
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, *(unsigned int *)v14, v26, notifyType, parts, customData, inOutNotifyHead);
          v14 += 2;
          ++NextNotifyIndex;
        }
        while ( NextNotifyIndex < parts->notifyCount );
        v27 = parts->notify;
        v28 = 0;
        for ( j = v27->time; j < state->currentAnimTime; ++v27 )
        {
          XAnimGetNotifyFracLeaf(state, state, j, v17);
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, (unsigned int)v27->name, v30, notifyType, parts, customData, inOutNotifyHead);
          if ( (unsigned __int16)++v28 >= parts->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2618, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
            __debugbreak();
          j = v27[1].time;
        }
      }
    }
    else
    {
      do
      {
        XAnimGetNotifyFracLeaf(state, state, v24, v17);
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, *(unsigned int *)v14, v25, notifyType, parts, customData, inOutNotifyHead);
        v14 += 2;
        if ( ++NextNotifyIndex >= parts->notifyCount )
          break;
        v24 = v14[1];
      }
      while ( v24 < state->currentAnimTime );
    }
  }
  else
  {
    v20 = XAnimGetNextNotifyIndex(parts, currentAnimTime);
    for ( k = &parts->notify[v20]; v20 < parts->notifyCount; ++v20 )
    {
      v22 = k->time;
      if ( v22 >= state->oldTime )
        break;
      XAnimGetScrubbedBackwardNotifyFracLeaf(state, v22, v17, 0);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, const XAnimParts *, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, (unsigned int)k->name, v23, notifyType, parts, customData, inOutNotifyHead);
      ++k;
    }
  }
}

/*
==============
XAnimProcessNotifyFromParts
==============
*/
void XAnimProcessNotifyFromParts(const XAnimParts *parts, float oldTime, float currentTime, unsigned __int16 cycleCount, scr_string_t notifyName, unsigned __int16 notifyType, float dtime, void *customData, void (*notifyFunc)(scr_string_t, scr_string_t, float, unsigned __int16, const XAnimParts *, void *, XAnimNotifyHandle *), XAnimNotifyHandle *inOutNotifyHead)
{
  __int64 v12; 
  XAnimState state; 

  if ( !notifyFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2735, ASSERT_TYPE_ASSERT, "(notifyFunc)", (const char *)&queryFormat, "notifyFunc") )
    __debugbreak();
  state.oldTime = oldTime;
  state.currentAnimTime = currentTime;
  *(_QWORD *)&state.cycleCount = cycleCount;
  memset(&state.goalWeight, 0, 24);
  if ( oldTime == 1.0 )
  {
    XAnimGetNotifyFracLeaf(&state, &state, 1.0, dtime);
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, void *, XAnimNotifyHandle *))notifyFunc)((unsigned int)notifyName, (unsigned int)g_endNotetrackName, v12, notifyType, 0i64, customData, inOutNotifyHead);
  }
  else
  {
    XAnimProcessNotify(parts, &state, notifyName, notifyType, dtime, customData, notifyFunc, inOutNotifyHead);
  }
}

/*
==============
XAnimProcessServerNotify
==============
*/
void XAnimProcessServerNotify(const DObj *obj, XAnimInfo *info, float time)
{
  scrContext_t *v5; 
  scrContext_t *v6; 
  XAnimTree *tree; 
  XAnimParts *PartsFromInfo; 
  XAnimParts *v9; 
  __int64 notifyIndex; 
  float currentAnimTime; 
  __int64 v12; 
  float v13; 
  XAnimNotifyInfo *notify; 
  int i; 
  float v16; 
  float v17; 

  if ( info->state.goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4244, ASSERT_TYPE_ASSERT, "(info->state.goalWeight)", (const char *)&queryFormat, "info->state.goalWeight") )
    __debugbreak();
  if ( time > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4245, ASSERT_TYPE_ASSERT, "( ( time <= 1.f ) )", "( time ) = %g", time) )
    __debugbreak();
  if ( obj->tree && obj->tree->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4246, ASSERT_TYPE_ASSERT, "(!obj->tree || obj->tree->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "!obj->tree || obj->tree->owner == XAnimOwner::SERVER") )
    __debugbreak();
  if ( obj->entnum && info->notifyName )
  {
    v5 = ScriptContext_Server();
    v6 = v5;
    if ( 1.0 == info->state.currentAnimTime )
    {
      Scr_AddConstString(v5, g_endNotetrackName);
      Scr_NotifyNum(v6, obj->entnum - 1, ENTITY_CLASS_GENTITY, info->notifyName, 1u, LOCAL_CLIENT_0);
      XAnimAddServerNotify(info->notifyName, g_endNotetrackName);
      return;
    }
    tree = obj->tree;
    if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4264, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    PartsFromInfo = XAnimGetPartsFromInfo(tree, info);
    v9 = PartsFromInfo;
    if ( PartsFromInfo )
    {
      if ( info->notifyIndex >= 0 || (XAnimUpdateServerNotifyIndex(info, PartsFromInfo), info->notifyIndex >= 0) )
      {
        if ( info->state.currentAnimTime >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4293, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime < 1.f)", (const char *)&queryFormat, "info->state.currentAnimTime < 1.f") )
          __debugbreak();
        if ( !v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4294, ASSERT_TYPE_ASSERT, "(parts->notifyCount > 0)", (const char *)&queryFormat, "parts->notifyCount > 0") )
          __debugbreak();
        if ( v9->notify->time > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4295, ASSERT_TYPE_ASSERT, "(parts->notify[0].time <= 1.f)", (const char *)&queryFormat, "parts->notify[0].time <= 1.f") )
          __debugbreak();
        notifyIndex = info->notifyIndex;
        if ( (int)notifyIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4298, ASSERT_TYPE_ASSERT, "(notifyIndex >= 0)", (const char *)&queryFormat, "notifyIndex >= 0") )
          __debugbreak();
        if ( (int)notifyIndex >= v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4299, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
          __debugbreak();
        currentAnimTime = info->state.currentAnimTime;
        v12 = (__int64)&v9->notify[notifyIndex];
        if ( time >= currentAnimTime )
        {
          if ( time == 1.0 && currentAnimTime <= *(float *)(v12 + 4) )
          {
            if ( (v9->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4350, ASSERT_TYPE_ASSERT, "(!(parts->flags & ANIM_LOOP))", (const char *)&queryFormat, "!(parts->flags & ANIM_LOOP)") )
              __debugbreak();
            if ( (int)notifyIndex >= v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4351, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v6);
            do
            {
              if ( *(float *)(v12 + 4) < info->state.currentAnimTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4355, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime <= notifyInfo->time)", (const char *)&queryFormat, "info->state.currentAnimTime <= notifyInfo->time") )
                __debugbreak();
              Scr_AddConstString(v6, *(scr_string_t *)v12);
              Scr_AddArray(v6);
              XAnimAddServerNotify(info->notifyName, *(scr_string_t *)v12);
              v12 += 8i64;
              LODWORD(notifyIndex) = notifyIndex + 1;
            }
            while ( (int)notifyIndex < v9->notifyCount );
          }
          else
          {
            v16 = *(float *)(v12 + 4);
            if ( time <= v16 || currentAnimTime > v16 )
              return;
            if ( (int)notifyIndex >= v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4366, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v6);
            v17 = *(float *)(v12 + 4);
            do
            {
              if ( v17 < info->state.currentAnimTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4370, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime <= notifyInfo->time)", (const char *)&queryFormat, "info->state.currentAnimTime <= notifyInfo->time") )
                __debugbreak();
              Scr_AddConstString(v6, *(scr_string_t *)v12);
              Scr_AddArray(v6);
              XAnimAddServerNotify(info->notifyName, *(scr_string_t *)v12);
              v12 += 8i64;
              LODWORD(notifyIndex) = notifyIndex + 1;
              if ( (int)notifyIndex >= v9->notifyCount )
                break;
              v17 = *(float *)(v12 + 4);
            }
            while ( time > v17 );
          }
        }
        else
        {
          v13 = *(float *)(v12 + 4);
          if ( time <= v13 )
          {
            if ( currentAnimTime > v13 )
              return;
            if ( (int)notifyIndex >= v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4320, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v6);
            do
            {
              if ( *(float *)(v12 + 4) < info->state.currentAnimTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4324, ASSERT_TYPE_ASSERT, "(info->state.currentAnimTime <= notifyInfo->time)", (const char *)&queryFormat, "info->state.currentAnimTime <= notifyInfo->time") )
                __debugbreak();
              Scr_AddConstString(v6, *(scr_string_t *)v12);
              Scr_AddArray(v6);
              XAnimAddServerNotify(info->notifyName, *(scr_string_t *)v12);
              v12 += 8i64;
              LODWORD(notifyIndex) = notifyIndex + 1;
            }
            while ( (int)notifyIndex < v9->notifyCount );
            notify = v9->notify;
            for ( i = 0; time > notify->time; ++i )
            {
              if ( i >= v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4337, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
                __debugbreak();
              Scr_AddConstString(v6, notify->name);
              Scr_AddArray(v6);
              XAnimAddServerNotify(info->notifyName, notify->name);
              ++notify;
            }
          }
          else
          {
            if ( (int)notifyIndex >= v9->notifyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 4306, ASSERT_TYPE_ASSERT, "(notifyIndex < parts->notifyCount)", (const char *)&queryFormat, "notifyIndex < parts->notifyCount") )
              __debugbreak();
            Scr_MakeArray(v6);
            do
            {
              Scr_AddConstString(v6, *(scr_string_t *)v12);
              Scr_AddArray(v6);
              XAnimAddServerNotify(info->notifyName, *(scr_string_t *)v12);
              v12 += 8i64;
              LODWORD(notifyIndex) = notifyIndex + 1;
            }
            while ( (int)notifyIndex < v9->notifyCount && time > *(float *)(v12 + 4) );
          }
        }
        Scr_NotifyNum(v6, obj->entnum - 1, ENTITY_CLASS_GENTITY, info->notifyName, 1u, LOCAL_CLIENT_0);
        return;
      }
    }
    if ( time < info->state.currentAnimTime || time == 1.0 )
    {
      Scr_AddConstString(v6, g_endNotetrackName);
      Scr_NotifyNum(v6, obj->entnum - 1, ENTITY_CLASS_GENTITY, info->notifyName, 1u, LOCAL_CLIENT_0);
      XAnimAddServerNotify(info->notifyName, g_endNotetrackName);
    }
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
void XAnimRegisterDvars(void)
{
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
  DCONST_DVARFLT_xanim_analogClock_balanceWheelMaxHalfAngleDeg = Dvar_RegisterFloat("xanim_analogClock_balanceWheelMaxHalfAngleDeg", 180.0, 0.0, 1080.0, 0x40004u, "Maximum angular displacement of a clock's balance wheel from center.");
  DCONST_DVARFLT_xanim_analogClock_springScaleFactor = Dvar_RegisterFloat("xanim_analogClock_springScaleFactor", 0.25, 0.0, 3.4028235e38, 0x40004u, "Scale factor to apply to bones in the spring rig.");
  DCONST_DVARBOOL_xanim_disableMountNodes = Dvar_RegisterBool("xanim_disableMountNodes", 0, 0x40004u, "Disable Mount animation tree nodes");
  DCONST_DVARFLT_xanim_lookatSpeedMultiplier = Dvar_RegisterFloat("xanim_lookatSpeedMultiplier", 1.0, 0.0, 3.4028235e38, 0x40004u, "Speed multiplier for the lookat catching up");
  DCONST_DVARFLT_xanim_lookatRollMax = Dvar_RegisterFloat("xanim_lookatRollMax", 12.0, -180.0, 180.0, 0x40004u, "Max roll applied at max yaw");
  DCONST_DVARBOOL_xanim_lookatDrawChain = Dvar_RegisterBool("xanim_lookatDrawChain", 0, 0x40004u, "Enable drawing the spine - neck - head chain pre and post lookat");
  DCONST_DVARBOOL_xanim_lookatExtendedAnimInfo = Dvar_RegisterBool("xanim_lookatExtendedAnimInfo", 0, 0x40004u, "Add more info to the the anim tree display");
  DCONST_DVARBOOL_xanim_ladder_climb_enable_grabs = Dvar_RegisterBool("xanim_ladder_climb_enable_grabs", 1, 0x40004u, "Enables grabbing from mid-rungs when climbing.");
  DCONST_DVARFLT_xanim_ladder_climb_grab_time = Dvar_RegisterFloat("xanim_ladder_climb_grab_time", 0.40000001, 0.0, 10.0, 0x40004u, "Max time a grab from one mid-rung to another rung will take.");
  DCONST_DVARFLT_xanim_ladder_climb_grab_begin_percent = Dvar_RegisterFloat("xanim_ladder_climb_grab_begin_percent", 0.2, 0.0, 10.0, 0x40004u, "The percentage of the grab from one rung to the next that the grab animation begins playing.");
  DCONST_DVARVEC3_xanim_ladder_rung_ankle_ik_offset = Dvar_RegisterVec3("xanim_ladder_rung_ankle_ik_offset", 5.5999999, 0.0, 3.5999999, -100.0, 100.0, 0x40004u, "The offset the ankle joint will be from the ladder rung when fully seated.");
  DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset = Dvar_RegisterVec3("xanim_ladder_rung_wrist_ik_offset", 1.4, 0.0, -2.0, -100.0, 100.0, 0x40004u, "The offset the wrist joint will be from the ladder rung when fully seated.");
  DCONST_DVARFLT_xanim_ladder_ik_dist_ratio = Dvar_RegisterFloat("xanim_ladder_ik_dist_ratio", 0.30000001, 0.0, 1.0, 0x40004u, "The percent of the total rung distance (currently 12) the hand must be to a rung before it becomes a valid IK target.");
  DCONST_DVARFLT_xanim_ladder_wrist_query_offset = Dvar_RegisterFloat("xanim_ladder_wrist_query_offset", 3.0, 0.0, 20.0, 0x40004u, "The distance from the wrist joint to the middle finger joint.  Allows for more accurate IK targeting.");
  DCONST_DVARFLT_xanim_ladder_ankle_query_offset = Dvar_RegisterFloat("xanim_ladder_ankle_query_offset", 7.8000002, 0.0, 20.0, 0x40004u, "The distance from the ankle joint to the ball joint.  Allows for more accurate IK targeting.");
  DCONST_DVARFLT_xanim_ladder_aim_rung_one_time = Dvar_RegisterFloat("xanim_ladder_aim_rung_one_time", 0.34999999, 0.0, 1.0, 0x40004u, "If the climb animation time is below this threshold, grab the 1st rung.");
  DCONST_DVARFLT_xanim_ladder_aim_rung_two_time = Dvar_RegisterFloat("xanim_ladder_aim_rung_two_time", 0.55500001, 0.0, 1.0, 0x40004u, "If the climb animation time is below this threshold, grab the 2nd rung.");
  DCONST_DVARFLT_xanim_ladder_aim_rung_three_time = Dvar_RegisterFloat("xanim_ladder_aim_rung_three_time", 0.88, 0.0, 1.0, 0x40004u, "If the climb animation time is below this threshold, grab the 3rd rung.");
  DCONST_DVARFLT_xanim_ladder_aim_rung_four_time = Dvar_RegisterFloat("xanim_ladder_aim_rung_four_time", 1.0, 0.0, 1.0, 0x40004u, "If the climb animation time is below this threshold, grab the 4th rung.  Any time above this grabs the 5th rung.");
  DCONST_DVARFLT_xanim_physicsBonesUpdateRate = Dvar_RegisterFloat("xanim_physicsBonesUpdateRate", 60.0, 5.0, 120.0, 0x40004u, "Number of physics bones updates to run per second");
  DCONST_DVARINT_xanim_physicsMaxPositionSolverIterations = Dvar_RegisterInt("xanim_physicsMaxPositionSolverIterations", 5, 0, 100, 0x40004u, "Maximum number of physics position solver iterations to run per update");
  DCONST_DVARINT_xanim_physicsMaxSettlePositionSolverIterations = Dvar_RegisterInt("xanim_physicsMaxSettlePositionSolverIterations", 4, 0, 100, 0x40004u, "Maximum number of physics position solver iterations to run per settle update");
  DCONST_DVARINT_xanim_physicsMaxVelocitySolverIterations = Dvar_RegisterInt("xanim_physicsMaxVelocitySolverIterations", 3, 0, 100, 0x40004u, "Maximum number of physics velocity solver iterations to run per update");
  DCONST_DVARINT_xanim_physicsMaxSettleIterations = Dvar_RegisterInt("xanim_physicsMaxSettleIterations", 15, 0, 100, 0x40004u, "Maximum number of physics simulation updates used to settle physics bones when first created");
  DCONST_DVARFLT_xanim_physicsVelocityDamping = Dvar_RegisterFloat("xanim_physicsVelocityDamping", 0.0099999998, 0.0, 0.2, 0x40004u, "Linear velocity damping factor applied per update");
  DCONST_DVARFLT_xanim_physicsAngularVelocityDamping = Dvar_RegisterFloat("xanim_physicsAngularVelocityDamping", 0.050000001, 0.0, 0.2, 0x40004u, "Angular velocity damping factor applied per update");
  DVARFLT_xanim_physicsGravity = Dvar_RegisterFloat("NRKSORMLRM", 800.0, 0.0, 100000.0, 0x40u, "Gravity");
  DCONST_DVARBOOL_xanim_silenceParamWarn = Dvar_RegisterBool("xanim_silenceParamWarn", 1, 0x40004u, "Dvar to Disable Animation tree game parameter x has not been set.");
  DCONST_DVARBOOL_xanim_physicsForceSettle = Dvar_RegisterBool("xanim_physicsForceSettle", 0, 0x40004u, "Force settle every update (for performance debug)");
  DCONST_DVARBOOL_xanim_physicsNoiseEnable = Dvar_RegisterBool("xanim_physicsNoiseEnable", 1, 0x40004u, "Enable noise on physics bones.");
  DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing = Dvar_RegisterFloat("xanim_physicsNoiseAccelSmoothing", 0.85000002, 0.0, 1.0, 0x40004u, "Noise acceleration smoothing.");
  DCONST_DVARFLT_xanim_physicsAccelSmoothing = Dvar_RegisterFloat("xanim_physicsAccelSmoothing", 0.94999999, 0.0, 1.0, 0x40004u, "World acceleration smoothing");
  DCONST_DVARFLT_xanim_physicsAccelScale = Dvar_RegisterFloat("xanim_physicsAccelScale", 1.0, 0.0, 10000.0, 0x40004u, "World acceleration scale (non gravity)");
  DCONST_DVARFLT_xanim_physicsMaxWorldAccel = Dvar_RegisterFloat("xanim_physicsMaxWorldAccel", 50.0, 0.0, 10000.0, 0x40004u, "Maximum acceleration inherited from world movement");
  DCONST_DVARFLT_xanim_physicsWorldAccelDeadZone = Dvar_RegisterFloat("xanim_physicsWorldAccelDeadZone", 0.1, 0.0, 100.0, 0x40004u, "Minimum acceleration threshold for world movement");
  DCONST_DVARBOOL_xanim_physicsEnableCollisions = Dvar_RegisterBool("xanim_physicsEnableCollisions", 1, 0x40004u, "Enable collision detection");
  DCONST_DVARBOOL_xanim_physicsEnableSwingLimits = Dvar_RegisterBool("xanim_physicsEnableSwingLimits", 1, 0x40004u, "Enable joint swing limits");
  DCONST_DVARBOOL_xanim_physicsEnableTwistLimits = Dvar_RegisterBool("xanim_physicsEnableTwistLimits", 1, 0x40004u, "Enable joint twist limits");
  DCONST_DVARBOOL_xanim_physicsEnableSprings = Dvar_RegisterBool("xanim_physicsEnableSprings", 1, 0x40004u, "Enable joint springs");
  DCONST_DVARBOOL_xanim_physicsEnableMaxDistanceConstraint = Dvar_RegisterBool("xanim_physicsEnableMaxDistanceConstraint", 1, 0x40004u, "Enable max distance constraint");
  DCONST_DVARBOOL_xanim_physicsEnableInterpolation = Dvar_RegisterBool("xanim_physicsEnableInterpolation", 1, 0x40004u, "Enable interpolation of physics bone transorms");
  DCONST_DVARFLT_xanim_physicsTwistStiffness = Dvar_RegisterFloat("xanim_physicsTwistStiffness", 1.0, 0.0, 1.0, 0x40004u, "Stiffness of joint twist constraint");
  DCONST_DVARFLT_xanim_physicsMaxTwistAdjustment = Dvar_RegisterFloat("xanim_physicsMaxTwistAdjustment", 3.141592, 0.0, 3.2, 0x40004u, "Max adjustment applied by joint twist constraint");
  DCONST_DVARFLT_xanim_physicsSwingStiffness = Dvar_RegisterFloat("xanim_physicsSwingStiffness", 1.0, 0.0, 1.0, 0x40004u, "Stiffness of joint swing constraint");
  DCONST_DVARFLT_xanim_physicsMaxSwingAdjustment = Dvar_RegisterFloat("xanim_physicsMaxSwingAdjustment", 3.141592, 0.0, 3.2, 0x40004u, "Max adjustment applied by joint swing constraint");
  DCONST_DVARFLT_xanim_physicsMaxVelocity = Dvar_RegisterFloat("xanim_physicsMaxVelocity", 50.0, 0.0, 1000.0, 0x40004u, "Maximum physics bone velocity");
  DCONST_DVARFLT_xanim_physicsMaxAngularVelocity = Dvar_RegisterFloat("xanim_physicsMaxAngularVelocity", 8.0, 0.0, 100.0, 0x40004u, "Maximum physics bone angular velocity");
  DCONST_DVARBOOL_xanim_physicsMaintainBindPoseTranslation = Dvar_RegisterBool("xanim_physicsMaintainBindPoseTranslation", 1, 0x40004u, "Ensure each physics bone maintains its local bind pose translation (prevents joints drifting apart)");
  DCONST_DVARFLT_xanim_physicsSettleVelocityThreshold = Dvar_RegisterFloat("xanim_physicsSettleVelocityThreshold", 0.1, 0.0, 100.0, 0x40004u, "Settle velocity threshold");
  DCONST_DVARBOOL_xanim_physicsDebugCollisions = Dvar_RegisterBool("xanim_physicsDebugCollisions", 0, 0x40004u, "Enable collision detection debug rendering");
  DCONST_DVARBOOL_xanim_physicsDebugCustomPinConstraints = Dvar_RegisterBool("xanim_physicsDebugCustomPinConstraints", 1, 0x40004u, "Enable debug render of custom pin constraints");
  DCONST_DVARINT_xanim_physicsAudioEventWaitTime = Dvar_RegisterInt("xanim_physicsAudioEventWaitTime", 3, 1, 100, 0x40004u, "Number of physics updates to wait before retriggering audio events");
  DCONST_DVARFLT_xanim_physicsAudioMinHitDistance = Dvar_RegisterFloat("xanim_physicsAudioMinHitDistance", 0.0099999998, 0.0, 10.0, 0x40004u, "Minimum intersection depth required to generate audio event");
  DCONST_DVARFLT_xanim_physicsIdleVelocityScale = Dvar_RegisterFloat("xanim_physicsIdleVelocityScale", 1.0, 0.0, 5.0, 0x40004u, "Idle velocity scale (increases effect of idle weapon bob)");
  DCONST_DVARFLT_xanim_physicsIdleAngularVelocityThreshold = Dvar_RegisterFloat("xanim_physicsIdleAngularVelocityThreshold", 0.050000001, 0.0, 0.2, 0x40004u, "Idle angular velocity threshold");
  DCONST_DVARFLT_xanim_physicsIdleVelocitySmoothing = Dvar_RegisterFloat("xanim_physicsIdleVelocitySmoothing", 0.050000001, 0.0, 1.0, 0x40004u, "Idle angular velocity smoothing");
  DCONST_DVARFLT_xanim_physicsExtAngularAccelScale = Dvar_RegisterFloat("xanim_physicsExtAngularAccelScale", 0.40000001, 0.0, 100.0, 0x40004u, "Scale factor applied to external angular acceleration after cap applied");
  DCONST_DVARFLT_xanim_physicsExtAngularAccelCap = Dvar_RegisterFloat("xanim_physicsExtAngularAccelCap", 10.0, 0.0, 20.0, 0x40004u, "Maximum external angular acceleration to apply to dynamic bones");
  DCONST_DVARFLT_xanim_physicsExtVelocityScale = Dvar_RegisterFloat("xanim_physicsExtVelocityScale", 0.30000001, 0.0, 5.0, 0x40004u, "Scale factor applied to external velocity after cap applied");
  DCONST_DVARFLT_xanim_physicsExtVelocitySmoothing = Dvar_RegisterFloat("xanim_physicsExtVelocitySmoothing", 0.94999999, 0.0, 1.0, 0x40004u, "External velocity smoothing");
  DCONST_DVARFLT_xanim_physicsExtVelocityCap = Dvar_RegisterFloat("xanim_physicsExtVelocityCap", 1.0, 0.0, 50.0, 0x40004u, "Maximum external velocity to apply to dynamic bones");
  DCONST_DVARBOOL_xanim_physicsEnable = Dvar_RegisterBool("xanim_physicsEnable", 1, 0x40004u, "Enable bone physics");
  DCONST_DVARFLT_xanim_physicsGroundPlaneFriction = Dvar_RegisterFloat("xanim_physicsGroundPlaneFriction", 0.2, 0.0, 1.0, 0x40004u, "Strength of ground plane friction");
  DCONST_DVARBOOL_xanim_physicsDebugDrawGroundPlane = Dvar_RegisterBool("xanim_physicsDebugDrawGroundPlane", 1, 0x40004u, "Show ground plane when drawing dynamic bones");
  DCONST_DVARBOOL_xanim_trackingEnable = Dvar_RegisterBool("xanim_trackingEnable", 0, 0x40004u, "Dvar to enable BlackBox tracking of xanim plays.");
  DCONST_DVARVEC4_xanim_ik_antislide_height_thresholds = Dvar_RegisterVec4("xanim_ik_antislide_height_thresholds", 3.5999999, 3.5999999, 3.8, 4.1999998, -100.0, 100.0, 0x40004u, "IK anti-slide height thresholds for walk, run, and sprint states");
  DCONST_DVARVEC4_xanim_ik_antislide_blendoutTimes = Dvar_RegisterVec4("xanim_ik_antislide_blendoutTimes", 500.0, 300.0, 150.0, 100.0, 0.0, 2000.0, 0x40004u, "IK anti-slide blendout times for walk, run, and sprint states");
  DCONST_DVARFLT_xanim_ik_antislide_max_distance = Dvar_RegisterFloat("xanim_ik_antislide_max_distance", 7.5, 0.0, 100.0, 0x40004u, "IK anti-slide max absolute distance separating anim target position vs world-locked target position.");
  DCONST_DVARFLT_xanim_ik_antislide_max_distance_crouch = Dvar_RegisterFloat("xanim_ik_antislide_max_distance_crouch", 4.5, 0.0, 100.0, 0x40004u, "IK anti-slide max absolute distance separating anim target position vs world-locked target position when crouched.");
  DCONST_DVARFLT_xanim_ik_antislide_max_distance_knee_target = Dvar_RegisterFloat("xanim_ik_antislide_max_distance_knee_target", 19.0, 0.0, 100.0, 0x40004u, "IK anti-slide max distance between knee and world-locked target position.");
  DCONST_DVARFLT_xanim_ik_antislide_max_angle_knee_target = Dvar_RegisterFloat("xanim_ik_antislide_max_angle_knee_target", 3.0, 0.0, 100.0, 0x40004u, "IK anti-slide max angle between knee and world-locked target position.");
  DCONST_DVARFLT_xanim_ik_antislide_adjust_angle_knee_target = Dvar_RegisterFloat("xanim_ik_antislide_adjust_angle_knee_target", 15.0, 0.0, 100.0, 0x40004u, "IK anti-slide max angle to rotate the hip to align it with the knee and the world-locked target.");
  DCONST_DVARFLT_xanim_ik_antislide_slope_threshold = Dvar_RegisterFloat("xanim_ik_antislide_slope_threshold", 0.02, 0.0, 100.0, 0x40004u, "IK anti-slide threshold to blendout the world-locked targetif the player is on a slope.");
  DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold = Dvar_RegisterFloat("xanim_ik_antislide_crouch_threshold", 28.0, 0.0, 100.0, 0x40004u, "IK anti-slide height threshold when the character is crouched.");
  DCONST_DVARFLT_xanim_ik_antislide_move_threshold = Dvar_RegisterFloat("xanim_ik_antislide_move_threshold", 0.0, 0.0, 100.0, 0x40004u, "IK anti-slide distance threshold to keep the system running even tough the character stopped moving.");
  DCONST_DVARFLT_xanim_ik_antislide_strafe_cosine_angle = Dvar_RegisterFloat("xanim_ik_antislide_strafe_cosine_angle", 0.70709997, 0.0, 90.0, 0x40004u, "IK anti-slide strafe cosine angle to decide which foot to unlock when start moving.");
  DCONST_DVARFLT_xanim_ik_antislide_capsule_radius = Dvar_RegisterFloat("xanim_ik_antislide_capsule_radius", 2.7, 0.0, 10.0, 0x40004u, "IK anti-slide leg capsule radius to test for collision between the legs.");
  DCONST_DVARINT_xanim_ik_antislide_collision_blendout_time = Dvar_RegisterInt("xanim_ik_antislide_collision_blendout_time", 400, 0, 1000, 0x40004u, "IK anti-slide blendout to unlock the foot when legs are colliding between each other.");
  DCONST_DVARBOOL_xanim_ik_antislide_collision_show_capsules = Dvar_RegisterBool("xanim_ik_antislide_collision_show_capsules", 0, 0x40004u, "Show IK anti-slide collision capsules for legs.");
  DCONST_DVARFLT_xanim_ik_antislide_floatTrackThresholdFraction = Dvar_RegisterFloat("xanim_ik_antislide_floatTrackThresholdFraction", 0.94999999, 0.0, 1.0, 0x40004u, "Normalized translation threshold after which a foot is considered to be locked.");
  DCONST_DVARFLT_xanim_ik_antislide_floatTrackRange = Dvar_RegisterFloat("xanim_ik_antislide_floatTrackRange", 10.0, 1.0, 30.0, 0x40004u, "Range of antislide bone translation along positive X and Y axes.");
  DCONST_DVARVEC3_xanim_ik_antislide_foot_pin_offset = Dvar_RegisterVec3("xanim_ik_antislide_foot_pin_offset", 6.0, 1.0, 0.0, -20.0, 20.0, 0x40004u, "Location of antislide pin point relative to ankle bone (e.g. ball of foot)");
  DCONST_DVARBOOL_xanim_ik_antislide_enable_foot_pin_offset = Dvar_RegisterBool("xanim_ik_antislide_enable_foot_pin_offset", 1, 0x40004u, "Enable antislide foot pin offset adjustment when using float tracks");
  DCONST_DVARBOOL_xanim_ik_antislide_fast_blendout_enabled = Dvar_RegisterBool("xanim_ik_antislide_fast_blendout_enabled", 1, 0x40004u, "Enable faster blend out if distance between world locked target position and anim target position exceeds threshold.");
  DCONST_DVARFLT_xanim_ik_antislide_fast_blendout_threshold = Dvar_RegisterFloat("xanim_ik_antislide_fast_blendout_threshold", 2.0, 0.0, 100.0, 0x40004u, "Distance threshold used to trigger faster blend out, relative to current anti-slide max distance.");
  DCONST_DVARINT_xanim_ik_antislide_fast_blendout_time = Dvar_RegisterInt("xanim_ik_antislide_fast_blendout_time", 200, 0, 2000, 0x40004u, "Reduced blend out time to use for locked foot that has exceeded max distance.");
  DVARBOOL_xanim_ik_antislide_enable = Dvar_RegisterBool("TMTPTQNMN", 1, 0x40u, "Enable IK anti-slide anim node.");
  DCONST_DVARBOOL_xanim_custom_node_instant_update = Dvar_RegisterBool("xanim_custom_node_instant_update", 1, 0x40004u, "Enable immediate update/initialization of custom anim nodes when they are created.");
  DCONST_DVARFLT_xanim_lodOverride = Dvar_RegisterFloat("xanim_lodOverride", -1.0, -1.0, 4.0, 0x40004u, "Force xanim LOD level for all entities.");
  DCONST_DVARBOOL_xanim_lodEnable = Dvar_RegisterBool("xanim_lodEnable", 1, 0x40004u, "Enable xanim LOD culling for client entities.");
  DCONST_DVARFLT_xanim_lodHysteresisMaxPercent = Dvar_RegisterFloat("xanim_lodHysteresisMaxPercent", 60.0, 0.0, 100.0, 0x40004u, "Maximum LOD distance change as fraction of distance between adjacent LOD levels.");
  DCONST_DVARFLT_xanim_lodHysteresisDistance = Dvar_RegisterFloat("xanim_lodHysteresisDistance", 200.0, 0.0, 2000.0, 0x40004u, "Minimum LOD distance change before transitioning to an adjacent LOD level.");
  DCONST_DVARINT_xanim_lodBlendTime = Dvar_RegisterInt("xanim_lodBlendTime", 120, 0, 3000, 0x40004u, "Duration of blends between xanim LOD transitions, in milliseconds.");
  DCONST_DVARFLT_xanim_lodLerpFactor = Dvar_RegisterFloat("xanim_lodLerpFactor", 0.28, 0.0, 1.0, 0x40004u, "Lerp factor to use when transitioning between LODS.");
  DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget = Dvar_RegisterInt("xanim_proceduralBonesDebugMemoryBudget", -1, -1, 512, 0x40004u, "Debug memory budget for procedural bones allocator");
  DVARBOOL_dobj_assert_on_root_meld_failure = Dvar_RegisterBool("LPMMPQNMLQ", 0, 0x40u, "Asserts if dobj root meld operation fails for a model when this dvar is set to true. Otherwise a warning message is added to the log.");
  DVARBOOL_dobj_hide_models_with_root_meld_failure = Dvar_RegisterBool("NTTPTKNNKM", 0, 0, "Hide models where the root meld operation fails. Note that in non-cheats builds, the model is always hidden when the root meld operation fails.");
  DVARBOOL_dobj_assert_on_free_submitted = Dvar_RegisterBool("MPNNKNTRMK", 1, 0x40u, "Asserts if dobj is freed while the renderer frontend is holding a reference.");
  DVARBOOL_dobj_assert_on_free_submitted_dump = Dvar_RegisterBool("NQRTQPSKRT", 0, 0x40u, "Asserts if dobj is freed while the renderer frontend is holding a reference, even in non-development builds.");
  DCONST_DVARBOOL_xanim_silence_parse_parameter_validation = Dvar_RegisterBool("xanim_silence_parse_parameter_validation", 0, 0x40004u, "Silence error when the number of parameters does not match the registered list for AI( after gold build. )");
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
__int64 XAnimRestart(XAnimTree *tree, unsigned int graftAnimIndex, unsigned __int16 infoIndex, float goalTime)
{
  unsigned __int16 parent; 
  bool i; 
  XAnimInfo *AnimInfo; 
  __int64 animIndex; 
  const XAnim_s *SubTreeAnims; 
  XAnimInfo *v12; 
  unsigned __int16 v13; 
  XAnimInfo *v14; 
  XAnimInfo *v16; 
  __int64 v17; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8314, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8315, ASSERT_TYPE_ASSERT, "(infoIndex != 0)", (const char *)&queryFormat, "infoIndex != 0") )
    __debugbreak();
  parent = infoIndex;
  for ( i = infoIndex == 0; !i; i = parent == 0 )
  {
    if ( !parent )
    {
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 285, ASSERT_TYPE_ASSERT, "( infoIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "infoIndex", "0", v17, 0i64) )
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
      XAnimInitTime(tree, parent, goalTime);
      v12 = XAnimGetAnimInfo(infoIndex);
      v13 = XAnimGetInfoIndex(tree, graftAnimIndex, (const XAnimSubTreeID)v12->subTreeID, v12->animIndex);
      if ( v13 )
        infoIndex = v13;
      v14 = XAnimGetAnimInfo(infoIndex);
      XAnimCustomNodeRestart(tree, v14);
      return infoIndex;
    }
    parent = AnimInfo->parent;
  }
  v16 = XAnimGetAnimInfo(infoIndex);
  if ( !v16->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8350, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( IsInfoInstantFullRestart(v16) )
    return XAnimInitTimeFullRestart(tree, infoIndex, goalTime);
  if ( v16->animToModel )
    return XAnimInitTime(tree, infoIndex, goalTime);
  XAnimCustomNodeRestart(tree, v16);
  return infoIndex;
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
    XAnimSetAnimRateNode(tree, InfoIndex, rate);
}

/*
==============
XAnimSetAnimRateNode
==============
*/
void XAnimSetAnimRateNode(XAnimTree *tree, unsigned __int16 infoIndex, float rate)
{
  XAnimInfo *NonRootAnimInfo; 
  const dvar_t *v6; 
  const char *AnimDebugName; 

  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8531, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8534, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8535, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( NonRootAnimInfo->notifyName && rate < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8537, ASSERT_TYPE_ASSERT, "((info->notifyName == ( static_cast< scr_string_t >( 0 ) )) || rate >= 0)", (const char *)&queryFormat, "(info->notifyName == NULL_SCR_STRING) || rate >= 0") )
    __debugbreak();
  if ( NonRootAnimInfo->notifyType && rate < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8538, ASSERT_TYPE_ASSERT, "(!info->notifyType || rate >= 0)", (const char *)&queryFormat, "!info->notifyType || rate >= 0") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
  if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && (NonRootAnimInfo->state.flags & 0x10) != 0 && rate != 0.0 )
  {
    AnimDebugName = XAnimGetAnimDebugName(tree->anims, NonRootAnimInfo->animIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8543, ASSERT_TYPE_ASSERT, "(rate == 0.0f)", "%s\n\tXAnimSetAnimRate '%s': rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "rate == 0.0f", AnimDebugName, rate) )
      __debugbreak();
  }
  NonRootAnimInfo->state.rate = rate;
}

/*
==============
XAnimSetChildGoalWeights
==============
*/
void XAnimSetChildGoalWeights(const DObj *obj, XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  float v15; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 i; 
  unsigned __int8 *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8024, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v15 = goalWeight;
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8025, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  if ( notifyType && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8026, ASSERT_TYPE_ASSERT, "(!notifyType || goalWeight)", (const char *)&queryFormat, "!notifyType || goalWeight") )
    __debugbreak();
  if ( goalWeight < 0.001 )
  {
    if ( notifyName || notifyType )
      v15 = FLOAT_0_001;
    else
      v15 = 0.0;
  }
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8036, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8037, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v21) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8038, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v21, 42) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    for ( i = GetNonRootAnimInfo(InfoIndex)->children; i; i = *((_WORD *)v19 + 5) )
    {
      if ( (i & 0x8000u) != 0 )
      {
        v20 = 32 * (i & 0x7FFFu);
        if ( (unsigned int)v20 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v22) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v21) = 32 * (i & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v21, v22) )
            __debugbreak();
        }
        v19 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v20];
      }
      else
      {
        if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v22) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v21) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v19 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
      }
      XAnimSetGoalWeightNode(obj, tree, i, v15, goalTime, rate, notifyName, notifyType, curveID, cachedModelNameMap);
    }
  }
}

/*
==============
XAnimSetChildTimes
==============
*/
void XAnimSetChildTimes(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  __int64 v5; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *NonRootAnimInfo; 
  unsigned __int16 i; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  const XAnim_s *v15; 
  XAnimEntry *v16; 
  const char *AnimDebugName; 
  XAnimParts *parts; 
  int v19; 
  XAnimParts *v20; 
  int v21; 
  const char *v22; 
  unsigned __int8 flags; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  v5 = animIndex;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8068, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v5);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8072, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v5 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8073, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, v5);
  if ( InfoIndex )
  {
    if ( !SubTreeAnims->entries[v5].numAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8082, ASSERT_TYPE_ASSERT, "(!IsLeafNode( anim ))", (const char *)&queryFormat, "!IsLeafNode( anim )") )
      __debugbreak();
    if ( (time < 0.0 || time > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8084, ASSERT_TYPE_ASSERT, "( ( !(time < 0.0f) && time <= 1.0f ) )", "( time ) = %g", time) )
      __debugbreak();
    NonRootAnimInfo = GetNonRootAnimInfo(InfoIndex);
    for ( i = NonRootAnimInfo->children; i; i = *((_WORD *)v13 + 5) )
    {
      if ( (i & 0x8000u) != 0 )
      {
        v14 = 32 * (i & 0x7FFF);
        if ( v14 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v25) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v24) = 32 * (i & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v24, v25) )
            __debugbreak();
        }
        v13 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v14];
      }
      else
      {
        if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v25) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v24) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        v13 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
      }
      v15 = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)v13 + 8));
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8095, ASSERT_TYPE_ASSERT, "(childAnims)", (const char *)&queryFormat, "childAnims") )
        __debugbreak();
      v16 = &v15->entries[*((unsigned __int16 *)v13 + 3)];
      if ( v16->numAnims )
      {
        AnimDebugName = XAnimGetAnimDebugName(v15, *((unsigned __int16 *)v13 + 3));
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8098, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", "%s\n\tAnim name: '%s', time: %f", "IsLeafNode( anim )", AnimDebugName, time) )
          __debugbreak();
        if ( v16->numAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
          __debugbreak();
      }
      parts = v16->parts;
      if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
        __debugbreak();
      v19 = 0;
      if ( (parts->flags & 1) != 0 )
        LOBYTE(v19) = time < 1.0;
      else
        LOBYTE(v19) = time <= 1.0;
      if ( !v19 )
      {
        if ( v16->numAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
          __debugbreak();
        v20 = v16->parts;
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
          __debugbreak();
        v21 = v20->flags & 1;
        v22 = XAnimGetAnimDebugName(v15, *((unsigned __int16 *)v13 + 3));
        LODWORD(v26) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8099, ASSERT_TYPE_ASSERT, "((XAnimGetPartsInternal( anim )->flags & ANIM_LOOP) ? (time < 1.0f) : (time <= 1.0f))", "%s\n\tname: '%s', time: %f, loop: %d", "(XAnimGetPartsInternal( anim )->flags & ANIM_LOOP) ? (time < 1.0f) : (time <= 1.0f)", v22, time, v26) )
          __debugbreak();
      }
      *((float *)v13 + 10) = time;
      *((_WORD *)v13 + 24) = 0;
      flags = NonRootAnimInfo->state.flags;
      if ( (flags & 0x10) != 0 )
      {
        if ( (flags & 0x40) == 0 )
        {
          *((float *)v13 + 11) = time;
          *((_WORD *)v13 + 25) = 0;
          NonRootAnimInfo->state.flags |= 0x40u;
        }
      }
      else
      {
        *((float *)v13 + 11) = time;
        *((_WORD *)v13 + 25) = 0;
      }
      *((_WORD *)v13 + 1) = -1;
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
void XAnimSetClientLodByDistance(const DObj *obj, float distance)
{
  unsigned __int8 LodForDistance; 
  XAnimTree *tree; 
  const dvar_t *v5; 
  double v6; 

  LodForDistance = XAnimGetLodForDistance(obj, distance);
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
    XAnimTreeSetGoalLod(tree, LodForDistance, v5->current.integer);
    tree = obj->tree;
  }
  if ( tree )
  {
    v6 = I_fclamp(distance, 0.0, 65535.0);
    tree->lodState.distance = (int)*(float *)&v6;
  }
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
  float v16; 
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v19; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v22; 
  XModelNameMap *modelNameMap; 

  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8799, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v16 = goalWeight;
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8800, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  if ( notifyType && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8801, ASSERT_TYPE_ASSERT, "(!notifyType || goalWeight)", (const char *)&queryFormat, "!notifyType || goalWeight") )
    __debugbreak();
  if ( goalWeight < 0.001 )
  {
    if ( notifyName || notifyType )
      v16 = FLOAT_0_001;
    else
      v16 = 0.0;
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
  v19 = InfoIndex;
  if ( InfoIndex )
  {
    if ( bRestart )
      v19 = XAnimRestart(tree, graftAnimIndex, InfoIndex, goalTime);
  }
  else
  {
    v19 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, cachedModelNameMap);
    AnimInfo = XAnimGetAnimInfo(v19);
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
  v22 = XAnimSetCompleteGoalWeightNode(obj, tree, v19, v16, goalTime, rate, notifyName, notifyType, curveID, cachedModelNameMap);
  Profile_EndInternal(NULL);
  return v22;
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
  unsigned __int16 v21; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  XModelNameMap *modelNameMap; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7245, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  *(_QWORD *)&_XMM6 = LODWORD(goalWeight);
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7246, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  _XMM3 = LODWORD(FLOAT_0_001);
  if ( goalWeight < 0.001 )
  {
    _XMM0 = (unsigned int)notifyName;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm6, xmm3, xmm7, xmm2
    }
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
  v21 = InfoIndex;
  if ( InfoIndex )
  {
    if ( bRestart )
      v21 = XAnimRestart(tree, graftAnimIndex, InfoIndex, goalTime);
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
  XAnimClearGoalWeightKnobInternal(tree, v21, *(double *)&_XMM6, goalTime, curveID);
  return XAnimSetCompleteGoalWeightNode(obj, tree, v21, *(float *)&_XMM6, goalTime, rate, notifyName, 0, curveID, NULL);
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
  unsigned __int8 *v20; 
  unsigned int v21; 
  __int64 v23; 
  __int64 v24; 
  unsigned int curveIDa; 

  if ( !graftAnimIndex && animIndex == rootIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7335, ASSERT_TYPE_ASSERT, "((graftAnimIndex != 0) || (animIndex != rootIndex))", (const char *)&queryFormat, "(graftAnimIndex != XANIM_DEFAULT_GRAFT_ANIM_INDEX) || (animIndex != rootIndex)") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7336, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  curveIDa = XAnimSetGoalWeightKnob(obj, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, bRestart, curveID);
  Profile_Begin(456);
  tree = obj->tree;
  XAnimAssertGraftAnimIndex(obj->tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, rootSubTreeID, rootIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v24) = 42;
    LODWORD(v23) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7347, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( !InfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7351, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  parent = XAnimGetAnimInfo(InfoIndex)->parent;
  if ( parent )
  {
    while ( 1 )
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v21 = 32 * (parent & 0x7FFF);
        if ( v21 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v23) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v23, v24) )
            __debugbreak();
        }
        v20 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v21];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v23) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v20 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
      }
      if ( *((unsigned __int16 *)v20 + 3) == rootIndex && *((_WORD *)v20 + 8) == rootSubTreeID )
        break;
      if ( bRestart )
        parent = XAnimRestart(tree, graftAnimIndex, parent, goalTime);
      XAnimClearGoalWeightKnobInternal(tree, parent, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)), goalTime, curveID);
      XAnimSetCompleteGoalWeightNode(obj, tree, parent, 1.0, goalTime, 1.0, (scr_string_t)0, 0, curveID, NULL);
      parent = XAnimGetAnimInfo(parent)->parent;
      if ( !parent )
        goto LABEL_29;
    }
    Profile_EndInternal(NULL);
    return curveIDa;
  }
  else
  {
LABEL_29:
    Profile_EndInternal(NULL);
    return 1i64;
  }
}

/*
==============
XAnimSetCompleteGoalWeightNode
==============
*/
__int64 XAnimSetCompleteGoalWeightNode(const DObj *obj, XAnimTree *tree, unsigned __int16 infoIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  unsigned __int16 parent; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 

  v19 = XAnimSetGoalWeightNode(obj, tree, infoIndex, goalWeight, goalTime, rate, notifyName, notifyType, curveID, modelNameMap);
  parent = XAnimGetAnimInfo(infoIndex)->parent;
  if ( !parent )
    return v19;
  do
  {
    if ( (parent & 0x8000u) != 0 )
    {
      v15 = 32 * (parent & 0x7FFF);
      if ( v15 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v18) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(v17) = 32 * (parent & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v17, v18) )
          __debugbreak();
      }
      v14 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v15];
    }
    else
    {
      if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v18) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(v17) = parent;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v14 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
    }
    if ( *((float *)v14 + 14) == 0.0 )
      XAnimSetGoalWeightNode(obj, tree, parent, 1.0, goalTime, 1.0, (scr_string_t)0, 0, curveID, modelNameMap);
    parent = XAnimGetAnimInfo(parent)->parent;
  }
  while ( parent );
  return v19;
}

/*
==============
XAnimSetCompleteGoalWeightRel
==============
*/
__int64 XAnimSetCompleteGoalWeightRel(const DObj *obj, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, unsigned int rootIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  float v17; 
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v21; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v24; 
  unsigned __int16 parent; 
  unsigned __int8 *v26; 
  unsigned int v27; 
  XModelNameMap *modelNameMap; 
  XModelNameMap *modelNameMapa; 
  __int64 v31; 
  int curveIDa; 

  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8841, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v17 = goalWeight;
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8842, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  if ( notifyType && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8843, ASSERT_TYPE_ASSERT, "(!notifyType || goalWeight)", (const char *)&queryFormat, "!notifyType || goalWeight") )
    __debugbreak();
  if ( goalWeight < 0.001 )
  {
    if ( notifyName || notifyType )
      v17 = FLOAT_0_001;
    else
      v17 = 0.0;
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
  v21 = InfoIndex;
  if ( InfoIndex )
  {
    if ( bRestart )
      v21 = XAnimRestart(tree, graftAnimIndex, InfoIndex, goalTime);
  }
  else
  {
    v21 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, cachedModelNameMap);
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
  curveIDa = XAnimSetGoalWeightNode(obj, tree, v21, v17, goalTime, rate, notifyName, notifyType, curveID, cachedModelNameMap);
  v24 = curveIDa;
  parent = XAnimGetAnimInfo(v21)->parent;
  if ( parent )
  {
    do
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v27 = 32 * (parent & 0x7FFF);
        if ( v27 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v31) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(modelNameMapa) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", modelNameMapa, v31) )
            __debugbreak();
        }
        v26 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v27];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v31) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(modelNameMapa) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", modelNameMapa, v31) )
            __debugbreak();
        }
        v26 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
      }
      if ( *((unsigned __int16 *)v26 + 3) == rootIndex )
        break;
      if ( *((float *)v26 + 14) == 0.0 )
        XAnimSetGoalWeightNode(obj, tree, parent, 1.0, goalTime, 1.0, (scr_string_t)0, 0, curveID, cachedModelNameMap);
      parent = XAnimGetAnimInfo(parent)->parent;
    }
    while ( parent );
    v24 = curveIDa;
  }
  Profile_EndInternal(NULL);
  return v24;
}

/*
==============
XAnimSetGoalWeight
==============
*/
__int64 XAnimSetGoalWeight(const DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  float v16; 
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v19; 
  XAnimInfo *AnimInfo; 
  unsigned int v22; 
  XModelNameMap *modelNameMap; 

  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8378, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v16 = goalWeight;
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8379, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  if ( notifyType && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8380, ASSERT_TYPE_ASSERT, "(!notifyType || goalWeight)", (const char *)&queryFormat, "!notifyType || goalWeight") )
    __debugbreak();
  if ( goalWeight < 0.001 )
  {
    if ( notifyName || notifyType )
      v16 = FLOAT_0_001;
    else
      v16 = 0.0;
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
  v19 = InfoIndex;
  if ( InfoIndex )
  {
    if ( bRestart )
      v19 = XAnimRestart(tree, graftAnimIndex, InfoIndex, goalTime);
  }
  else
  {
    if ( v16 == 0.0 )
    {
      Profile_EndInternal(NULL);
      return 0i64;
    }
    v19 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, cachedModelNameMap);
    AnimInfo = XAnimGetAnimInfo(v19);
    XAnimInitInfo(AnimInfo, tree, subTreeID);
  }
  v22 = XAnimSetGoalWeightNode(obj, tree, v19, v16, goalTime, rate, notifyName, notifyType, curveID, cachedModelNameMap);
  Profile_EndInternal(NULL);
  return v22;
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
  unsigned __int16 v20; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v23; 
  XModelNameMap *modelNameMap; 

  Profile_Begin(456);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7391, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  *(_QWORD *)&_XMM6 = LODWORD(goalWeight);
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7392, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  _XMM3 = LODWORD(FLOAT_0_001);
  if ( goalWeight < 0.001 )
  {
    _XMM0 = (unsigned int)notifyName;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm6, xmm3, xmm7, xmm2
    }
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
  v20 = InfoIndex;
  if ( InfoIndex )
  {
    if ( bRestart )
      v20 = XAnimRestart(tree, graftAnimIndex, InfoIndex, goalTime);
  }
  else
  {
    v20 = XAnimAllocInfoIndex(obj, graftAnimIndex, subTreeID, animIndex, 0, NULL);
    AnimInfo = XAnimGetAnimInfo(v20);
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
  XAnimClearGoalWeightKnobInternal(tree, v20, *(double *)&_XMM6, goalTime, curveID);
  v23 = XAnimSetGoalWeightNode(obj, tree, v20, *(float *)&_XMM6, goalTime, rate, notifyName, 0, curveID, NULL);
  Profile_EndInternal(NULL);
  return v23;
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
  unsigned __int8 *v20; 
  unsigned int v21; 
  __int64 v23; 
  __int64 v24; 
  unsigned int curveIDa; 

  if ( !graftAnimIndex && animIndex == rootIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7282, ASSERT_TYPE_ASSERT, "((graftAnimIndex != 0) || (animIndex != rootIndex))", (const char *)&queryFormat, "(graftAnimIndex != XANIM_DEFAULT_GRAFT_ANIM_INDEX) || (animIndex != rootIndex)") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7283, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  curveIDa = XAnimSetGoalWeightKnob(obj, graftAnimIndex, subTreeID, animIndex, goalWeight, goalTime, rate, notifyName, bRestart, curveID);
  Profile_Begin(456);
  tree = obj->tree;
  XAnimAssertGraftAnimIndex(obj->tree, graftAnimIndex, subTreeID, animIndex);
  XAnimAssertAnimIndex(tree, rootSubTreeID, rootIndex);
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END )
  {
    LODWORD(v24) = 42;
    LODWORD(v23) = (unsigned __int8)curveID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7294, ASSERT_TYPE_ASSERT, "(unsigned)( curveID ) < (unsigned)( XAnimCurveID::MAX )", "curveID doesn't index XAnimCurveID::MAX\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( !InfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7298, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  parent = XAnimGetAnimInfo(InfoIndex)->parent;
  if ( parent )
  {
    while ( 1 )
    {
      if ( (parent & 0x8000u) != 0 )
      {
        v21 = 32 * (parent & 0x7FFF);
        if ( v21 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v23) = 32 * (parent & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v23, v24) )
            __debugbreak();
        }
        v20 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v21];
      }
      else
      {
        if ( (unsigned int)parent >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v23) = parent;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v20 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[parent];
      }
      if ( *((unsigned __int16 *)v20 + 3) == rootIndex && *((_WORD *)v20 + 8) == rootSubTreeID )
        break;
      if ( bRestart )
        parent = XAnimRestart(tree, graftAnimIndex, parent, goalTime);
      XAnimClearGoalWeightKnobInternal(tree, parent, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)), goalTime, curveID);
      XAnimSetGoalWeightNode(obj, tree, parent, 1.0, goalTime, 1.0, (scr_string_t)0, 0, curveID, NULL);
      parent = XAnimGetAnimInfo(parent)->parent;
      if ( !parent )
        goto LABEL_29;
    }
    Profile_EndInternal(NULL);
    return curveIDa;
  }
  else
  {
LABEL_29:
    Profile_EndInternal(NULL);
    return 1i64;
  }
}

/*
==============
XAnimSetGoalWeightNode
==============
*/

__int64 __fastcall XAnimSetGoalWeightNode(const DObj *obj, XAnimTree *tree, unsigned __int16 infoIndex, double goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  XAnimInfo *NonRootAnimInfo; 
  scr_string_t v17; 
  unsigned int animIndex; 
  float weight; 
  float v29; 
  float v31; 
  __int128 v33; 
  const dvar_t *v35; 
  const char *AnimDebugName; 
  unsigned __int16 v37; 
  bool v38; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 DescendantWithGreatest; 
  float goalTimea; 
  float ratea; 

  _XMM6 = *(_OWORD *)&goalWeight;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7565, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( *(float *)&goalWeight != 0.0 && *(float *)&goalWeight < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7567, ASSERT_TYPE_ASSERT, "(!goalWeight || goalWeight >= 0.001f)", (const char *)&queryFormat, "!goalWeight || goalWeight >= WEIGHT_EPSILON") )
    __debugbreak();
  _XMM10 = LODWORD(goalTime);
  if ( goalTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7568, ASSERT_TYPE_ASSERT, "(goalTime >= 0)", (const char *)&queryFormat, "goalTime >= 0") )
    __debugbreak();
  _XMM8 = LODWORD(rate);
  if ( notifyName && rate < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7569, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || rate >= 0)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || rate >= 0") )
    __debugbreak();
  if ( notifyType && rate < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7570, ASSERT_TYPE_ASSERT, "(!notifyType || rate >= 0)", (const char *)&queryFormat, "!notifyType || rate >= 0") )
    __debugbreak();
  if ( notifyName && *(float *)&goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7571, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  if ( notifyType && *(float *)&goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7572, ASSERT_TYPE_ASSERT, "(!notifyType || goalWeight)", (const char *)&queryFormat, "!notifyType || goalWeight") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v17 = NonRootAnimInfo->notifyName;
  if ( v17 )
  {
    SL_RemoveRefToString(v17);
    NonRootAnimInfo->notifyName = 0;
  }
  NonRootAnimInfo->notifyIndex = -1;
  if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7579, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  animIndex = NonRootAnimInfo->animIndex;
  XAnimAssertAnimIndex(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID, animIndex);
  _XMM0 = animIndex;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm3, xmm2
  }
  goalTimea = *(float *)&_XMM0;
  _XMM0 = animIndex;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm5, xmm10, xmm7, xmm2
  }
  _XMM0 = animIndex;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm8, xmm3, xmm2
  }
  ratea = *(float *)&_XMM0;
  if ( *(float *)&_XMM5 == 0.0 )
  {
    NonRootAnimInfo->state.weight = goalTimea;
    NonRootAnimInfo->state.goalTime = 0.0;
    NonRootAnimInfo->state.flags |= 1u;
  }
  else
  {
    weight = NonRootAnimInfo->state.weight;
    if ( weight == 0.0 )
    {
      weight = goalTimea * 0.001;
      NonRootAnimInfo->state.weight = goalTimea * 0.001;
    }
    v29 = weight - goalTimea;
    if ( (float)(weight - goalTimea) == 0.0 || (float)((float)(NonRootAnimInfo->state.goalWeight - goalTimea) * v29) > 0.0 )
      LODWORD(_XMM1) = _XMM5;
    else
      __asm { vminss  xmm1, xmm5, dword ptr [rbx+34h] }
    NonRootAnimInfo->state.goalTime = *(float *)&_XMM1;
    if ( goalTimea != 0.0 )
    {
      if ( goalTimea < weight )
        v31 = v29 / weight;
      else
        v31 = (float)(goalTimea - weight) / goalTimea;
      v33 = _XMM5;
      *(float *)&v33 = *(float *)&_XMM5 * v31;
      _XMM0 = v33;
      __asm { vmaxss  xmm1, xmm0, xmm1 }
      NonRootAnimInfo->state.goalTime = *(float *)&_XMM1;
    }
  }
  v35 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
  if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.enabled && (NonRootAnimInfo->state.flags & 0x10) != 0 && ratea != 0.0 )
  {
    AnimDebugName = XAnimGetAnimDebugName(tree->anims, animIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7627, ASSERT_TYPE_ASSERT, "(rate == 0.0f)", "%s\n\tXAnimSetGoalWeightNode '%s', animIndex %i: rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "rate == 0.0f", AnimDebugName, animIndex, ratea) )
      __debugbreak();
  }
  NonRootAnimInfo->state.goalDuration = NonRootAnimInfo->state.goalTime;
  NonRootAnimInfo->state.startWeight = NonRootAnimInfo->state.weight;
  NonRootAnimInfo->state.curveID = curveID;
  NonRootAnimInfo->state.goalWeight = goalTimea;
  NonRootAnimInfo->state.rate = ratea;
  NonRootAnimInfo->notifyName = notifyName;
  if ( notifyName )
    SL_AddRefToString(notifyName);
  v37 = truncate_cast<unsigned short,unsigned int>(notifyType);
  v38 = NonRootAnimInfo->notifyIndex == -1;
  NonRootAnimInfo->notifyType = v37;
  if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7644, ASSERT_TYPE_ASSERT, "(info->notifyIndex == -1)", (const char *)&queryFormat, "info->notifyIndex == -1") )
    __debugbreak();
  XAnimCustomNodeInstantInit(obj, tree, NonRootAnimInfo, infoIndex, modelNameMap);
  if ( !notifyName || NonRootAnimInfo->animToModel || ((__int64)NonRootAnimInfo->parts & 3) == 0 || (SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID), XAnimIsCustomNode(SubTreeAnims, NonRootAnimInfo)) )
  {
    NonRootAnimInfo->notifyChild = 0;
  }
  else
  {
    if ( goalTimea == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7650, ASSERT_TYPE_ASSERT, "(goalWeight)", (const char *)&queryFormat, "goalWeight") )
      __debugbreak();
    DescendantWithGreatest = XAnimGetDescendantWithGreatestWeight<1>(infoIndex);
    NonRootAnimInfo->notifyChild = DescendantWithGreatest;
    if ( !DescendantWithGreatest )
      return 2i64;
  }
  return 0i64;
}

/*
==============
XAnimSetGoalWeightWithParent
==============
*/
__int64 XAnimSetGoalWeightWithParent(const DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned __int16 parentInfoIndex, unsigned int animIndex, float goalWeight, float goalTime, float rate, scr_string_t notifyName, unsigned int notifyType, int bRestart, const XAnimCurveID curveID, XModelNameMap *cachedModelNameMap)
{
  float v16; 
  XAnimTree *tree; 
  unsigned __int16 InfoIndex_r; 
  unsigned __int16 v19; 
  XAnimInfo *AnimInfo; 
  unsigned int v21; 
  const XAnim_s *SubTreeAnims; 
  XAnimToXModel *AnimToModel; 
  XAnimInfo *v24; 
  __int64 after; 
  __int64 v27; 

  Sys_ProfBeginNamedEvent(0xFF44CCFF, "XAnimSetGoalWeightWithParent");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8468, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v16 = goalWeight;
  if ( notifyName && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8469, ASSERT_TYPE_ASSERT, "((notifyName == ( static_cast< scr_string_t >( 0 ) )) || goalWeight)", (const char *)&queryFormat, "(notifyName == NULL_SCR_STRING) || goalWeight") )
    __debugbreak();
  if ( notifyType && goalWeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8470, ASSERT_TYPE_ASSERT, "(!notifyType || goalWeight)", (const char *)&queryFormat, "!notifyType || goalWeight") )
    __debugbreak();
  if ( !animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8471, ASSERT_TYPE_ASSERT, "(animIndex)", (const char *)&queryFormat, "animIndex") )
    __debugbreak();
  if ( goalWeight < 0.001 )
  {
    if ( notifyName || notifyType )
      v16 = FLOAT_0_001;
    else
      v16 = 0.0;
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
  v19 = InfoIndex_r;
  if ( InfoIndex_r )
  {
    AnimInfo = XAnimGetAnimInfo(InfoIndex_r);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8493, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
      __debugbreak();
    if ( AnimInfo->subTreeID != subTreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8494, ASSERT_TYPE_ASSERT, "(animInfo->subTreeID == subTreeID)", "%s\n\tParent and child nodes must be in the same subtree.", "animInfo->subTreeID == subTreeID") )
      __debugbreak();
    if ( bRestart )
      v19 = XAnimRestart(tree, graftAnimIndex, v19, goalTime);
LABEL_47:
    v21 = XAnimSetGoalWeightNode(obj, tree, v19, v16, goalTime, rate, notifyName, notifyType, curveID, cachedModelNameMap);
    goto LABEL_48;
  }
  if ( v16 != 0.0 )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8512, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( animIndex >= SubTreeAnims->size )
    {
      LODWORD(v27) = SubTreeAnims->size;
      LODWORD(after) = animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8513, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", after, v27) )
        __debugbreak();
    }
    AnimToModel = XAnimGetAnimToModel(obj, &SubTreeAnims->entries[animIndex], cachedModelNameMap);
    v19 = XAnimAllocInfoWithParent(tree, subTreeID, AnimToModel, animIndex, parentInfoIndex, 0);
    v24 = XAnimGetAnimInfo(v19);
    XAnimInitInfo(v24, tree, subTreeID);
    goto LABEL_47;
  }
  v21 = 0;
LABEL_48:
  Sys_ProfEndNamedEvent();
  return v21;
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
    XAnimSetTimeNode(tree, InfoIndex, time);
}

/*
==============
XAnimSetTimeInSeconds
==============
*/
void XAnimSetTimeInSeconds(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float timeSeconds)
{
  double Length; 
  __int128 v11; 

  Length = XAnimGetLength(tree->anims, animIndex);
  _XMM6 = 0i64;
  if ( *(float *)&Length > 0.0 )
  {
    v11 = LODWORD(FLOAT_1_0);
    *(float *)&v11 = 1.0 / *(float *)&Length;
    if ( XAnimIsLooped(tree->anims, animIndex) )
    {
      *(float *)&_XMM6 = fmodf_0(timeSeconds, *(float *)&Length) * *(float *)&v11;
    }
    else
    {
      __asm { vcmpless xmm2, xmm6, xmm1 }
      *(float *)&v11 = *(float *)&v11 * timeSeconds;
      _XMM3 = v11;
      __asm { vblendvps xmm6, xmm3, xmm9, xmm2 }
    }
  }
  XAnimSetTime(tree, graftAnimIndex, subTreeID, animIndex, *(float *)&_XMM6);
}

/*
==============
XAnimSetTimeNode
==============
*/
void XAnimSetTimeNode(XAnimTree *tree, unsigned __int16 infoIndex, float time)
{
  XAnimInfo *NonRootAnimInfo; 
  const XAnim_s *SubTreeAnims; 
  __int64 animIndex; 
  __int64 v8; 
  const char *AnimDebugName; 
  __int64 v10; 
  bool v11; 
  unsigned __int8 flags; 
  const char *v13; 
  const char *v14; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7892, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !infoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7893, ASSERT_TYPE_ASSERT, "(infoIndex)", (const char *)&queryFormat, "infoIndex") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  if ( !NonRootAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7896, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7901, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7903, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( NonRootAnimInfo->animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7905, ASSERT_TYPE_ASSERT, "(info->animIndex < anims->size)", (const char *)&queryFormat, "info->animIndex < anims->size") )
    __debugbreak();
  animIndex = NonRootAnimInfo->animIndex;
  v8 = 2 * (animIndex + 5);
  if ( SubTreeAnims->entries[animIndex].numAnims )
  {
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, NonRootAnimInfo->animIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7907, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", "%s\n\tAnim name: '%s', time: %f", "IsLeafNode( anim )", AnimDebugName, time) )
      __debugbreak();
  }
  if ( (time < 0.0 || time > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7909, ASSERT_TYPE_ASSERT, "( ( !(time < 0.0f) && time <= 1.0f ) )", "( time ) = %g", time) )
    __debugbreak();
  if ( *((_WORD *)&SubTreeAnims->size + 4 * v8 + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2380, ASSERT_TYPE_ASSERT, "(IsLeafNode( anim ))", (const char *)&queryFormat, "IsLeafNode( anim )") )
    __debugbreak();
  v10 = *((_QWORD *)&SubTreeAnims->debugName + v8);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2384, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( (*(_BYTE *)(v10 + 120) & 1) != 0 )
  {
    if ( time < 1.0 )
      goto LABEL_39;
    v13 = XAnimGetAnimDebugName(SubTreeAnims, NonRootAnimInfo->animIndex);
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7913, ASSERT_TYPE_ASSERT, "(time < 1.0f)", "%s\n\tLooping anim '%s' needs time < 1.0 (time: %f)", "time < 1.0f", v13, time);
  }
  else
  {
    if ( time <= 1.0 )
      goto LABEL_39;
    v14 = XAnimGetAnimDebugName(SubTreeAnims, NonRootAnimInfo->animIndex);
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 7917, ASSERT_TYPE_ASSERT, "(time <= 1.0f)", "%s\n\tNon-looping anim '%s' needs time <= 1.0 (time: %f)", "time <= 1.0f", v14, time);
  }
  if ( v11 )
    __debugbreak();
LABEL_39:
  flags = NonRootAnimInfo->state.flags;
  if ( (flags & 0x10) != 0 )
  {
    if ( (flags & 0x40) == 0 )
    {
      NonRootAnimInfo->state.oldTime = NonRootAnimInfo->state.currentAnimTime;
      NonRootAnimInfo->state.oldCycleCount = 0;
      NonRootAnimInfo->state.flags |= 0x40u;
    }
  }
  else
  {
    NonRootAnimInfo->state.oldCycleCount = 0;
    NonRootAnimInfo->state.oldTime = time;
    NonRootAnimInfo->notifyIndex = -1;
  }
  NonRootAnimInfo->state.currentAnimTime = time;
  NonRootAnimInfo->state.cycleCount = 0;
}

/*
==============
XAnimSetTreeChildTimes
==============
*/
void XAnimSetTreeChildTimes(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex, float time)
{
  __int64 v5; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v11; 
  unsigned __int16 i; 
  unsigned __int8 *v13; 
  __int64 v14; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 *v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 

  v5 = animIndex;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8135, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, v5);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8140, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v5 >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8141, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, v5);
  v11 = InfoIndex;
  if ( InfoIndex )
  {
    if ( SubTreeAnims->entries[v5].numAnims )
    {
      if ( (time < 0.0 || time > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8160, ASSERT_TYPE_ASSERT, "( ( !(time < 0.0f) && time <= 1.0f ) )", "( time ) = %g", time) )
        __debugbreak();
      for ( i = GetNonRootAnimInfo(v11)->children; i; i = *((_WORD *)v13 + 5) )
      {
        if ( (i & 0x8000u) != 0 )
        {
          v14 = 32 * (i & 0x7FFFu);
          if ( (unsigned int)v14 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v19) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v18) = 32 * (i & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v18, v19) )
              __debugbreak();
          }
          v13 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v14];
        }
        else
        {
          if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v19) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v18) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v13 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
        }
        AnimInfo = XAnimGetAnimInfo(i);
        if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9295, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( AnimInfo->subTreeID )
        {
          while ( 1 )
          {
            v16 = (unsigned __int16 *)XAnimGetAnimInfo(i);
            if ( v16[8] != AnimInfo->subTreeID )
              break;
            i = v16[7];
            if ( !i )
              goto LABEL_33;
          }
          v17 = v16[3];
        }
        else
        {
LABEL_33:
          v17 = 0;
        }
        XAnimSetTreeChildTimes(tree, v17, *((const XAnimSubTreeID *)v13 + 8), *((unsigned __int16 *)v13 + 3), time);
      }
    }
    else
    {
      XAnimSetTimeNode(tree, InfoIndex, time);
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
    XAnimSetTimeNode(tree, v12, time);
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
  XAnimInfo *NonRootAnimInfo; 
  unsigned int v5; 
  unsigned __int16 children; 
  XAnimTransferInfo *v7; 
  XAnimToXModel *v8; 
  float weight; 
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
  NonRootAnimInfo = GetNonRootAnimInfo(fromInfoIndex);
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
  children = NonRootAnimInfo->children;
  g_animInfoCount = v5 + 1;
  v7 = &g_xanimTransferInfo[v5];
  v8 = XAnimCloneXAnimToXModel(NonRootAnimInfo->animToModel);
  v7->hasChildren = children != 0;
  v7->hasNext = NonRootAnimInfo->prev != 0;
  v7->animIndex = NonRootAnimInfo->animIndex;
  v7->subTreeID = NonRootAnimInfo->subTreeID;
  v7->animToModel = v8;
  v7->oldCycleCount = NonRootAnimInfo->state.oldCycleCount;
  v7->oldTime = NonRootAnimInfo->state.oldTime;
  v7->goalTime = NonRootAnimInfo->state.goalTime;
  v7->goalWeight = NonRootAnimInfo->state.goalWeight;
  if ( (NonRootAnimInfo->state.flags & 1) != 0 )
    weight = NonRootAnimInfo->state.weight;
  else
    weight = FLOAT_N1_0;
  v7->weight = weight;
  v7->rate = NonRootAnimInfo->state.rate;
  v7->hasSyncGroups = (NonRootAnimInfo->state.flags & 2) != 0;
  v7->startWeight = NonRootAnimInfo->state.startWeight;
  v7->goalDuration = NonRootAnimInfo->state.goalDuration;
  v7->curveID = NonRootAnimInfo->state.curveID;
  v7->isInstantFullRestart = (NonRootAnimInfo->state.flags & 4) != 0;
  transferStatus = v7->transferStatus;
  if ( transferStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3637, ASSERT_TYPE_ASSERT, "( toInfo->transferStatus ) == ( INVALID_XANIM_TRANSFER_DATA )", "%s == %s\n\t%u, %u", "toInfo->transferStatus", "INVALID_XANIM_TRANSFER_DATA", transferStatus, 0i64) )
    __debugbreak();
  v7->transferStatus = 1;
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
  XAnimParameterValue *v10; 
  __int64 validParameterCount; 
  unsigned __int64 dobjCount; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3664, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !from->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3665, ASSERT_TYPE_ASSERT, "(from->anims)", (const char *)&queryFormat, "from->anims") )
    __debugbreak();
  if ( from->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3666, ASSERT_TYPE_ASSERT, "(from->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "from->owner == XAnimOwner::SERVER") )
    __debugbreak();
  numGameParameters = from->anims->numGameParameters;
  v16 = from->anims->numGameParameters;
  if ( from->anims->numGameParameters )
  {
    parameterCount = transferInfo->parameterCount;
    v6 = 0;
    if ( parameterCount + (unsigned int)numGameParameters >= 0xA80 )
    {
      g_animInfoCount = 0;
      g_dobjInfoCount = 0;
      transferInfo->parameterCount = 0;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441ACCE0, 370i64);
    }
    if ( (unsigned int)numGameParameters >= (unsigned int)from->maxParameters + 1 )
    {
      LODWORD(v13) = numGameParameters;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3688, ASSERT_TYPE_ASSERT, "(unsigned)( numParameters ) < (unsigned)( from->maxParameters + 1 )", "numParameters doesn't index from->maxParameters + 1\n\t%i not in [0, %i)", v13, from->maxParameters + 1) )
        __debugbreak();
    }
    if ( (_DWORD)numGameParameters )
    {
      v7 = 841;
      v8 = numGameParameters;
      v9 = 0i64;
      do
      {
        v10 = &from->parameterValues[v9];
        if ( v10->type <= STRUCT_POINTER && _bittest(&v7, (unsigned __int8)v10->type) )
        {
          if ( parameterCount >= 0xA80 )
          {
            LODWORD(v15) = 2688;
            LODWORD(v14) = parameterCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
              __debugbreak();
          }
          transferInfo->validParameterBits.array[(unsigned __int64)parameterCount >> 5] &= ~(0x80000000 >> (parameterCount & 0x1F));
        }
        else
        {
          ++v6;
          validParameterCount = transferInfo->validParameterCount;
          *(_OWORD *)&transferInfo->parameters[validParameterCount].type = *(_OWORD *)&v10->type;
          *((double *)&transferInfo->parameters[validParameterCount].intValue + 1) = *((double *)&v10->intValue + 1);
          ++transferInfo->validParameterCount;
          if ( parameterCount >= 0xA80 )
          {
            LODWORD(v15) = 2688;
            LODWORD(v14) = parameterCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
              __debugbreak();
          }
          transferInfo->validParameterBits.array[(unsigned __int64)parameterCount >> 5] |= 0x80000000 >> (parameterCount & 0x1F);
        }
        ++parameterCount;
        ++v9;
        v7 = 841;
        --v8;
      }
      while ( v8 );
      LODWORD(numGameParameters) = v16;
    }
    dobjCount = transferInfo->dobjCount;
    if ( v6 )
    {
      if ( (unsigned int)dobjCount >= 0x400 )
      {
        LODWORD(v15) = 1024;
        LODWORD(v14) = transferInfo->dobjCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
          __debugbreak();
      }
      transferInfo->dobjHasValidParametersBits.array[dobjCount >> 5] |= 0x80000000 >> (dobjCount & 0x1F);
      transferInfo->parameterCount += numGameParameters;
    }
    else
    {
      if ( (unsigned int)dobjCount >= 0x400 )
      {
        LODWORD(v15) = 1024;
        LODWORD(v14) = transferInfo->dobjCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
          __debugbreak();
      }
      transferInfo->dobjHasValidParametersBits.array[dobjCount >> 5] &= ~(0x80000000 >> (dobjCount & 0x1F));
    }
    ++transferInfo->dobjCount;
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
  __int64 v7; 
  __int64 v8; 
  __int64 transferredValidParameterCount; 
  XAnimParameterValue *parameterValues; 
  __int64 v11; 
  __int64 v12; 

  if ( !toTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3534, ASSERT_TYPE_ASSERT, "(toTree)", (const char *)&queryFormat, "toTree") )
    __debugbreak();
  if ( !toTree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3535, ASSERT_TYPE_ASSERT, "(toTree->anims)", (const char *)&queryFormat, "toTree->anims") )
    __debugbreak();
  numGameParameters = toTree->anims->numGameParameters;
  if ( toTree->anims->numGameParameters )
  {
    transferredDObjCount = transferInfo->transferredDObjCount;
    transferInfo->transferredDObjCount = transferredDObjCount + 1;
    if ( (unsigned int)transferredDObjCount >= 0x400 )
    {
      LODWORD(v11) = transferredDObjCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, 1024) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (transferredDObjCount & 0x1F)) & transferInfo->dobjHasValidParametersBits.array[transferredDObjCount >> 5]) != 0 )
    {
      if ( (unsigned int)(numGameParameters + transferInfo->transferredParameterCount) > transferInfo->parameterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3552, ASSERT_TYPE_ASSERT, "( transferInfo->transferredParameterCount + numParameters ) <= ( transferInfo->parameterCount )", "%s <= %s\n\t%i, %i", "transferInfo->transferredParameterCount + numParameters", "transferInfo->parameterCount", numGameParameters + transferInfo->transferredParameterCount, transferInfo->parameterCount) )
        __debugbreak();
      transferredParameterCount = transferInfo->transferredParameterCount;
      v7 = 0i64;
      if ( transferredParameterCount + (unsigned int)numGameParameters > transferInfo->parameterCount )
      {
        g_animInfoCount = 0;
        g_dobjInfoCount = 0;
        transferInfo->transferredParameterCount = 0;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441ACCE0, 368i64);
        transferredParameterCount = transferInfo->transferredParameterCount;
      }
      if ( (_DWORD)numGameParameters )
      {
        v8 = numGameParameters;
        do
        {
          if ( transferredParameterCount >= 0xA80 )
          {
            LODWORD(v12) = 2688;
            LODWORD(v11) = transferredParameterCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (transferredParameterCount & 0x1F)) & transferInfo->validParameterBits.array[(unsigned __int64)transferredParameterCount >> 5]) != 0 )
          {
            if ( transferInfo->transferredValidParameterCount > transferInfo->validParameterCount )
            {
              LODWORD(v12) = transferInfo->validParameterCount;
              LODWORD(v11) = transferInfo->transferredValidParameterCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3568, ASSERT_TYPE_ASSERT, "( transferInfo->transferredValidParameterCount ) <= ( transferInfo->validParameterCount )", "transferInfo->transferredValidParameterCount not in [0, transferInfo->validParameterCount]\n\t%u not in [0, %u]", v11, v12) )
                __debugbreak();
            }
            transferredValidParameterCount = transferInfo->transferredValidParameterCount;
            parameterValues = toTree->parameterValues;
            *(_OWORD *)&parameterValues[v7].type = *(_OWORD *)&transferInfo->parameters[transferInfo->transferredValidParameterCount].type;
            *((double *)&parameterValues[v7].intValue + 1) = *((double *)&transferInfo->parameters[transferredValidParameterCount].intValue + 1);
            ++transferInfo->transferredValidParameterCount;
          }
          ++transferredParameterCount;
          ++v7;
          --v8;
        }
        while ( v8 );
        transferredParameterCount = transferInfo->transferredParameterCount;
      }
      transferInfo->transferredParameterCount = transferredParameterCount + numGameParameters;
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
  unsigned __int16 v6; 
  unsigned int v8; 
  XAnimTransferInfo *v9; 
  unsigned __int8 transferStatus; 
  XAnimInfo *AnimInfo; 
  bool v12; 
  unsigned __int8 v13; 
  XAnimToXModel *animToModel; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 v16; 
  XAnimSubTreeID subTreeID; 
  XAnimInfo *v18; 
  const XAnim_s *v19; 
  XAnimInfo *v20; 
  __int16 notifyIndex; 
  const dvar_t *v22; 
  float rate; 
  const char *AnimDebugName; 
  float weight; 
  bool hasChildren; 
  unsigned __int16 children; 
  __int64 v28; 
  XAnimInfo *v29; 
  const XAnimInfo *v30; 
  unsigned int v31; 
  unsigned __int16 v32; 
  const XAnimInfo *v33; 
  unsigned int v34; 
  __int64 after; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned __int16 v40; 

  v40 = toInfoIndex;
  v6 = toInfoIndex;
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3403, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  v8 = g_animInfoCount;
  if ( g_animInfoCount >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3405, ASSERT_TYPE_ASSERT, "(g_animInfoCount < ( sizeof( *array_counter( g_xanimTransferInfo ) ) + 0 ))", (const char *)&queryFormat, "g_animInfoCount < ARRAY_COUNT( g_xanimTransferInfo )") )
      __debugbreak();
    v8 = g_animInfoCount;
  }
  g_animInfoCount = v8 + 1;
  v9 = &g_xanimTransferInfo[v8];
  transferStatus = v9->transferStatus;
  if ( transferStatus != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3409, ASSERT_TYPE_ASSERT, "( fromInfo->transferStatus ) == ( XANIM_READY_FOR_TRANSFER )", "%s == %s\n\t%u, %u", "fromInfo->transferStatus", "XANIM_READY_FOR_TRANSFER", transferStatus, 1) )
    __debugbreak();
  v9->transferStatus = 2;
  if ( v6 )
  {
    AnimInfo = XAnimGetAnimInfo(v6);
    v12 = AnimInfo->animIndex == v9->animIndex && AnimInfo->subTreeID != v9->subTreeID;
    if ( XAnimGetAnimInfo(v6)->animIndex >= v9->animIndex )
    {
      if ( v9->isInstantFullRestart )
      {
LABEL_24:
        XAnimClearTreeGoalWeightsNode(to, v6, 0.0, 1, LINEAR);
        goto LABEL_25;
      }
      if ( !v12 )
      {
        if ( v9->animToModel )
        {
          XAnimFreeXAnimToXModel(&v9->animToModel);
          if ( v9->animToModel )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3437, ASSERT_TYPE_ASSERT, "(fromInfo->animToModel == nullptr)", (const char *)&queryFormat, "fromInfo->animToModel == nullptr") )
              __debugbreak();
          }
        }
        goto LABEL_42;
      }
    }
    if ( v9->isInstantFullRestart )
      goto LABEL_24;
  }
LABEL_25:
  v13 = v9->transferStatus;
  if ( v13 != 2 )
  {
    LODWORD(v39) = 2;
    LODWORD(v38) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3332, ASSERT_TYPE_ASSERT, "( fromInfo->transferStatus ) == ( XANIM_TRANSFER_IN_PROGRESS )", "%s == %s\n\t%u, %u", "fromInfo->transferStatus", "XANIM_TRANSFER_IN_PROGRESS", v38, v39) )
      __debugbreak();
  }
  animToModel = v9->animToModel;
  v9->animToModel = NULL;
  if ( !DObjHasClientOnlyBones(obj) )
    goto LABEL_40;
  if ( !animToModel )
    goto LABEL_32;
  if ( animToModel->missingBoneCount )
  {
    MT_Free(animToModel, 2 * (animToModel->boneCount + (unsigned __int64)animToModel->blendShapeWeightCount) + 36);
    animToModel = NULL;
LABEL_32:
    if ( v9->animIndex )
    {
      SubTreeAnims = XAnimGetSubTreeAnims(to, (const XAnimSubTreeID)v9->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3366, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      if ( v9->animIndex >= SubTreeAnims->size )
      {
        LODWORD(v39) = SubTreeAnims->size;
        LODWORD(v38) = v9->animIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3367, ASSERT_TYPE_ASSERT, "( fromInfo->animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "fromInfo->animIndex", "anims->size", v38, v39) )
          __debugbreak();
      }
      animToModel = XAnimGetAnimToModel(obj, &SubTreeAnims->entries[v9->animIndex], NULL);
    }
  }
LABEL_40:
  v16 = XAnimAllocInfoWithParent(to, (const XAnimSubTreeID)v9->subTreeID, animToModel, v9->animIndex, toInfoParentIndex, 0);
  subTreeID = v9->subTreeID;
  v6 = v16;
  v40 = v16;
  v18 = XAnimGetAnimInfo(v16);
  *(_QWORD *)&v18->state.currentAnimTime = 0i64;
  *(_QWORD *)&v18->state.cycleCount = 0i64;
  *(_QWORD *)&v18->state.goalWeight = 0i64;
  *(_QWORD *)&v18->state.rate = 0i64;
  *(_QWORD *)&v18->state.startWeight = 0i64;
  v18->notifyName = 0;
  *(_DWORD *)&v18->notifyChild = -65536;
  v18->notifyType = 0;
  v18->subTreeID = subTreeID;
  v19 = XAnimGetSubTreeAnims(to, subTreeID);
  if ( XAnimIsCustomNode(v19, v18) )
    v18->state.flags |= 8u;
LABEL_42:
  v20 = XAnimGetAnimInfo(v6);
  if ( XAnimIsClientAuthNode(v20) )
  {
    v9->transferStatus = 3;
  }
  else
  {
    notifyIndex = v20->notifyIndex;
    if ( notifyIndex != -1 )
    {
      LODWORD(after) = notifyIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3449, ASSERT_TYPE_ASSERT, "( ( toInfo->notifyIndex == -1 ) )", "( toInfo->notifyIndex ) = %i", after) )
        __debugbreak();
    }
    v22 = DCONST_DVARBOOL_xanim_debugScrubbedNotetracks;
    if ( !DCONST_DVARBOOL_xanim_debugScrubbedNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugScrubbedNotetracks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled && XAnimInfoHasScrubbedNotetracks(v20) )
    {
      rate = v9->rate;
      if ( rate != 0.0 )
      {
        AnimDebugName = XAnimGetAnimDebugName(to->anims, v20->animIndex);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3454, ASSERT_TYPE_ASSERT, "(fromInfo->rate == 0.0f)", "%s\n\tXAnimTransferTo_r '%s': fromInfo->rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "fromInfo->rate == 0.0f", AnimDebugName, rate) )
          __debugbreak();
      }
    }
    v20->state.currentAnimTime = v9->oldTime;
    v20->state.cycleCount = v9->oldCycleCount;
    v20->state.goalWeight = v9->goalWeight;
    v20->state.rate = v9->rate;
    v20->state.goalTime = v9->goalTime;
    v20->state.startWeight = v9->startWeight;
    v20->state.goalDuration = v9->goalDuration;
    v20->state.curveID = v9->curveID;
    InfoSetStateFlag(v20, XANIMSTATE_HAS_SYNC_GROUPS, v9->hasSyncGroups);
    v20->state.flags &= ~4u;
    weight = v9->weight;
    if ( weight >= 0.0 )
      v20->state.weight = weight;
    hasChildren = v9->hasChildren;
    v9->transferStatus = 3;
    children = v20->children;
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
        v28 = g_animInfoCount;
        if ( children )
        {
          if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3490, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
            __debugbreak();
          while ( 1 )
          {
            if ( XAnimGetAnimInfo(children)->animIndex <= g_xanimTransferInfo[v28].animIndex && XAnimGetAnimInfo(children)->state.weight != 0.0 )
            {
              v29 = XAnimGetAnimInfo(children);
              if ( v29->animIndex != g_xanimTransferInfo[v28].animIndex || v29->subTreeID == g_xanimTransferInfo[v28].subTreeID )
                break;
            }
            if ( (children & 0x8000u) != 0 )
            {
              v31 = 32 * (children & 0x7FFF);
              if ( v31 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
              {
                LODWORD(v37) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
                LODWORD(after) = 32 * (children & 0x7FFF);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v37) )
                  __debugbreak();
              }
              v30 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v31];
            }
            else
            {
              if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
              {
                LODWORD(v37) = g_xanimMemoryGlobals.infoPoolSize;
                LODWORD(after) = children;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v37) )
                  __debugbreak();
              }
              v30 = &g_xanimMemoryGlobals.infoPool[children];
            }
            if ( !XAnimIsClientAuthNode(v30) )
              XAnimClearTreeGoalWeightsNode(to, children, 0.0, 1, LINEAR);
            children = XAnimGetAnimInfo(children)->prev;
            if ( !children )
              goto LABEL_85;
          }
          if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3502, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
            __debugbreak();
        }
LABEL_85:
        v32 = XAnimTransferTo_r(obj, to, children, v6);
        if ( !XAnimGetAnimInfo(v32)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3506, ASSERT_TYPE_ASSERT, "(XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
        if ( XAnimGetAnimInfo(v32)->animIndex != g_xanimTransferInfo[v28].animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3507, ASSERT_TYPE_ASSERT, "(GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex)", (const char *)&queryFormat, "GetInfoAnimIndex( toChildInfoIndex ) == fromInfo->animIndex") )
          __debugbreak();
        children = XAnimGetAnimInfo(v32)->prev;
        if ( children && !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3511, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
          __debugbreak();
      }
      while ( g_xanimTransferInfo[v28].hasNext );
    }
    if ( children )
    {
      if ( !XAnimGetAnimInfo(children)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3516, ASSERT_TYPE_ASSERT, "(!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex ))", (const char *)&queryFormat, "!toChildInfoIndex || XAnimInfoIsInUse( toChildInfoIndex )") )
        __debugbreak();
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v34 = 32 * (children & 0x7FFF);
          if ( v34 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v37) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(after) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", after, v37) )
              __debugbreak();
          }
          v33 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v34];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v37) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(after) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", after, v37) )
              __debugbreak();
          }
          v33 = &g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !XAnimIsClientAuthNode(v33) )
          XAnimClearTreeGoalWeightsNode(to, children, 0.0, 1, LINEAR);
        children = XAnimGetAnimInfo(children)->prev;
      }
      while ( children );
      return v40;
    }
  }
  return v6;
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
  XAnim_s *anims; 
  unsigned __int8 numLods; 
  __int16 v8; 
  __int16 blendTimeLeft; 
  __int64 v10; 
  double v11; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9621, ASSERT_TYPE_ASSERT, "(tree != nullptr)", (const char *)&queryFormat, "tree != nullptr") )
    __debugbreak();
  anims = tree->anims;
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9624, ASSERT_TYPE_ASSERT, "(anims != nullptr)", (const char *)&queryFormat, "anims != nullptr") )
    __debugbreak();
  numLods = lod;
  if ( anims->numLods < lod )
    numLods = anims->numLods;
  v8 = numLods << 8;
  if ( tree->lodState.lod == v8 )
  {
    tree->lodState.lod = v8;
    tree->lodState.blendTimeLeft = 0;
    tree->lodState.goalLod = v8;
  }
  else
  {
    blendTimeLeft = tree->lodState.blendTimeLeft;
    if ( tree->lodState.goalLod == v8 )
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
      tree->lodState.goalLod = v8;
    }
    v10 = (unsigned int)anims->numLods - 1;
    if ( numLods < (unsigned int)v10 )
      v10 = numLods;
    v11 = I_fclamp(anims->lodDistances[v10], 0.0, 65535.0);
    tree->lodState.distance = (int)*(float *)&v11;
  }
}

/*
==============
XAnimUpdateClientLodBlending
==============
*/
void XAnimUpdateClientLodBlending(const DObj *obj, float deltaTime)
{
  XAnimTree *tree; 
  double v4; 
  const dvar_t *v5; 
  __int64 v6; 
  int v7; 
  bool v8; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9576, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  tree = obj->tree;
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9578, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  if ( tree && deltaTime != 0.0 )
  {
    v4 = I_fclamp(deltaTime * 1000.0, 0.0, 32767.0);
    if ( tree->lodState.blendTimeLeft <= (__int16)(int)*(float *)&v4 )
    {
      tree->lodState.lod = tree->lodState.goalLod;
      tree->lodState.blendTimeLeft = 0;
    }
    else
    {
      v5 = DCONST_DVARFLT_xanim_lodLerpFactor;
      if ( !DCONST_DVARFLT_xanim_lodLerpFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodLerpFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      v6 = (__int16)(int)(float)(v5->current.value * 256.0) * (tree->lodState.goalLod - tree->lodState.lod);
      v7 = (BYTE4(v6) + (int)v6) >> 8;
      v8 = (__int16)(tree->lodState.lod + v7) < 0;
      tree->lodState.lod += v7;
      if ( v8 )
        tree->lodState.lod = 0;
      tree->lodState.blendTimeLeft -= (int)*(float *)&v4;
    }
  }
}

/*
==============
XAnimUpdateDirtyCustomNodes
==============
*/
char XAnimUpdateDirtyCustomNodes(const DObj *obj, unsigned __int16 infoIndex, float dtime)
{
  XAnimTree *tree; 
  XAnimInfo *NonRootAnimInfo; 
  char v7; 
  unsigned __int16 children; 
  unsigned __int16 next; 
  const XAnim_s *SubTreeAnims; 

  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9423, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9424, ASSERT_TYPE_ASSERT, "( tree->anims )", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( dtime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9425, ASSERT_TYPE_ASSERT, "( ( dtime >= 0 ) )", "%s\n\t( dtime ) = %g", "( dtime >= 0 )", dtime) )
    __debugbreak();
  if ( !infoIndex )
    return 0;
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v7 = 0;
  if ( !XAnimGetAnimInfo(infoIndex)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 9435, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( infoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
    __debugbreak();
  if ( NonRootAnimInfo->animToModel )
    return 0;
  children = NonRootAnimInfo->children;
  if ( children )
  {
    do
    {
      next = XAnimGetAnimInfo(children)->next;
      v7 |= XAnimUpdateDirtyCustomNodes(obj, children, dtime);
      children = next;
    }
    while ( next );
  }
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)NonRootAnimInfo->subTreeID);
  if ( XAnimIsCustomNode(SubTreeAnims, NonRootAnimInfo) && (NonRootAnimInfo->state.flags & 8) != 0 )
  {
    XAnimCustomNodeUpdate(obj, NonRootAnimInfo, infoIndex, dtime, 0, NULL);
    return 1;
  }
  return v7;
}

/*
==============
XAnimUpdateInfoSync
==============
*/
void XAnimUpdateInfoSync(const DObj *obj, unsigned __int16 infoIndex, bool bNotify, const XAnimState *syncState, float dtime, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimInfo *NonRootAnimInfo; 
  XAnimInfo *v11; 
  float oldTime; 
  unsigned __int16 children; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  unsigned __int16 v16; 
  XAnimNotifyHandle *v17; 
  __int64 v18; 

  if ( dtime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2759, ASSERT_TYPE_ASSERT, "(dtime > 0)", (const char *)&queryFormat, "dtime > 0") )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(infoIndex);
  v11 = NonRootAnimInfo;
  if ( NonRootAnimInfo->state.weight == 0.0 )
  {
    XAnimCheckFreeInfo(obj->tree, infoIndex, 0, obj);
  }
  else
  {
    if ( NonRootAnimInfo->state.goalWeight == 0.0 )
      bNotify = 0;
    if ( !NonRootAnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2773, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
      __debugbreak();
    oldTime = syncState->oldTime;
    if ( oldTime != v11->state.oldTime || v11->state.oldCycleCount != syncState->oldCycleCount )
    {
      v11->state.currentAnimTime = oldTime;
      v11->state.cycleCount = syncState->oldCycleCount;
      v11->state.oldTime = syncState->oldTime;
      v11->state.oldCycleCount = syncState->oldCycleCount;
      v11->notifyIndex = -1;
    }
    if ( bNotify && (!obj->tree || !obj->tree->owner[0]) )
      XAnimProcessServerNotify(obj, v11, syncState->currentAnimTime);
    v11->state.currentAnimTime = syncState->currentAnimTime;
    v11->state.cycleCount = syncState->cycleCount;
    v11->notifyIndex = -1;
    if ( bNotify && DObjHasClientFlag(obj) )
      XAnimProcessClientNotify(obj, v11, dtime, inOutNotifyHead);
    children = v11->children;
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v15 = 32 * (children & 0x7FFF);
          if ( v15 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v18) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v17) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v17, v18) )
              __debugbreak();
          }
          v14 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v15];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v18) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v17) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v14 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        v16 = *((_WORD *)v14 + 5);
        XAnimUpdateInfoSync(obj, children, bNotify, syncState, dtime, inOutNotifyHead);
        children = v16;
      }
      while ( v16 );
    }
  }
}

/*
==============
XAnimUpdateLeadSyncGroupNode
==============
*/
void XAnimUpdateLeadSyncGroupNode(const DObj *obj, const XAnimSyncGroupCalcData *syncGroupCalcData, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimTree *tree; 
  int v7; 
  float *i; 
  float v9; 
  unsigned __int16 v10; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2116, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !syncGroupCalcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2117, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2120, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v7 = 0;
  for ( i = &syncGroupCalcData->syncGroupInfo[0].leadAccumDeltaTime; ; i += 5 )
  {
    v9 = *(i - 3);
    if ( v9 == 0.0 )
      goto LABEL_15;
    v10 = *((_WORD *)i - 4);
    if ( !v10 )
      goto LABEL_15;
    if ( *i == 0.0 )
      break;
    XAnimUpdateTimeAndNotetrackSyncSubTree(obj, v10, v9 * *i, *((_BYTE *)i + 4), inOutNotifyHead);
LABEL_15:
    if ( (unsigned int)++v7 >= 4 )
      return;
  }
  XAnimCheckFreeInfo(tree, v10, 1, obj);
}

/*
==============
XAnimUpdateOldTime
==============
*/
void XAnimUpdateOldTime(DObj *obj, unsigned __int16 infoIndex, XAnimState *syncState, float dtime, bool parentHasWeight, bool *childHasTimeForParent, bool *parentHasSyncGroups, int entnum, XModelNameMap *modelNameMap)
{
  bool *v9; 
  XAnimTree *tree; 
  unsigned __int16 v12; 
  __int64 v13; 
  bool v14; 
  float *p_currentAnimTime; 
  float goalTime; 
  double Value; 
  float *p_weight; 
  float goalWeight; 
  bool v20; 
  char v21; 
  __int64 v22; 
  bool v23; 
  int v24; 
  unsigned __int16 v25; 
  XModelNameMap *v26; 
  int v27; 
  bool v28; 
  unsigned __int16 next; 
  char v30; 
  char v31; 
  bool v32; 
  XAnimInfo *NonRootAnimInfo; 
  XAnimTree *v34; 
  bool v37; 

  v9 = parentHasSyncGroups;
  tree = obj->tree;
  v12 = infoIndex;
  v34 = obj->tree;
  if ( !parentHasSyncGroups && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3876, ASSERT_TYPE_ASSERT, "(parentHasSyncGroups)", (const char *)&queryFormat, "parentHasSyncGroups") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3877, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3878, ASSERT_TYPE_ASSERT, "( tree->anims )", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( dtime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3879, ASSERT_TYPE_ASSERT, "( ( dtime >= 0 ) )", "%s\n\t( dtime ) = %g", "( dtime >= 0 )", dtime) )
    __debugbreak();
  NonRootAnimInfo = GetNonRootAnimInfo(v12);
  v13 = (__int64)NonRootAnimInfo;
  if ( !XAnimGetAnimInfo(v12)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3883, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( infoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
    __debugbreak();
  v14 = parentHasWeight;
  p_currentAnimTime = &NonRootAnimInfo->state.currentAnimTime;
  if ( parentHasWeight && (goalTime = NonRootAnimInfo->state.goalTime, goalTime > dtime) )
  {
    Value = XAnimCurve_GetValue((const XAnimCurveID)NonRootAnimInfo->state.curveID, (float)(NonRootAnimInfo->state.goalDuration - goalTime) + dtime, NonRootAnimInfo->state.goalDuration, NonRootAnimInfo->state.startWeight, NonRootAnimInfo->state.goalWeight);
    p_weight = &NonRootAnimInfo->state.weight;
    NonRootAnimInfo->state.weight = *(float *)&Value;
    if ( *(float *)&Value < 0.0000010000001 )
      *p_weight = *(float *)(v13 + 56) * 0.001;
    *(float *)(v13 + 52) = *(float *)(v13 + 52) - dtime;
  }
  else
  {
    goalWeight = NonRootAnimInfo->state.goalWeight;
    p_weight = &NonRootAnimInfo->state.weight;
    NonRootAnimInfo->state.weight = goalWeight;
    *(float *)(v13 + 72) = goalWeight;
    *(_DWORD *)(v13 + 52) = 0;
    *(_DWORD *)(v13 + 68) = 0;
  }
  if ( !v14 || (v20 = *p_weight == 0.0, parentHasWeight = 1, v20) )
    parentHasWeight = 0;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(v13 + 77) &= ~1u;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(v13 + 77) &= ~4u;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(v13 + 77) &= ~0x20u;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  *(_BYTE *)(v13 + 77) &= ~0x80u;
  if ( !XAnimGetAnimInfo(v12)->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3912, ASSERT_TYPE_ASSERT, "( XAnimInfoIsInUse( infoIndex ) )", (const char *)&queryFormat, "XAnimInfoIsInUse( infoIndex )") )
    __debugbreak();
  v21 = 0;
  if ( *(_QWORD *)(v13 + 24) )
  {
    v22 = *(_QWORD *)(v13 + 32);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3919, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
      __debugbreak();
    if ( *(float *)(v22 + 104) == 0.0 )
    {
      v23 = 0;
      v37 = 0;
    }
    else
    {
      v23 = 1;
      v37 = 1;
    }
  }
  else
  {
    v37 = 0;
    v24 = *(_DWORD *)(v13 + 32);
    if ( (v24 & 4) != 0 )
      syncState = (XAnimState *)(v13 + 40);
    if ( (v24 & 3) != 0 )
      v21 = *(_BYTE *)(v13 + 38) != 4;
    v25 = *(_WORD *)(v13 + 12);
    v26 = modelNameMap;
    if ( v25 )
    {
      v27 = entnum;
      v28 = parentHasWeight;
      do
      {
        next = XAnimGetAnimInfo(v25)->next;
        XAnimUpdateOldTime(obj, v25, syncState, dtime, v28, &v37, &v32, v27, v26);
        v21 |= v32;
        v25 = next;
      }
      while ( next );
      v13 = (__int64)NonRootAnimInfo;
      v9 = parentHasSyncGroups;
      p_currentAnimTime = &NonRootAnimInfo->state.currentAnimTime;
    }
    v12 = infoIndex;
    XAnimCustomNodeUpdate(obj, (XAnimInfo *)v13, infoIndex, dtime, 0, v26);
    v23 = v37;
    tree = v34;
  }
  if ( parentHasWeight && v23 )
  {
    *childHasTimeForParent = 1;
  }
  else if ( *(_QWORD *)(v13 + 24) || (*(_BYTE *)(v13 + 32) & 4) == 0 )
  {
    if ( syncState->currentAnimTime != *p_currentAnimTime || *(_WORD *)(v13 + 48) != syncState->cycleCount )
    {
      *p_currentAnimTime = syncState->currentAnimTime;
      *(_WORD *)(v13 + 48) = syncState->cycleCount;
      *(_WORD *)(v13 + 2) = -1;
    }
  }
  else
  {
    XAnimInitTime(tree, v12, 0.0);
  }
  v30 = *(_BYTE *)(v13 + 77);
  if ( (v30 & 0x10) == 0 || (v31 = *(_BYTE *)(v13 + 77), *(_QWORD *)(v13 + 24)) && (v30 & 0x40) == 0 )
  {
    *(float *)(v13 + 44) = *p_currentAnimTime;
    *(_WORD *)(v13 + 50) = *(_WORD *)(v13 + 48);
    v31 = *(_BYTE *)(v13 + 77);
  }
  *(_BYTE *)(v13 + 77) = v31 & 0xBF;
  InfoSetStateFlag((XAnimInfo *)v13, XANIMSTATE_HAS_SYNC_GROUPS, v21);
  *v9 = v21;
}

/*
==============
XAnimUpdateServerNotifyIndex
==============
*/
void XAnimUpdateServerNotifyIndex(XAnimInfo *info, const XAnimParts *parts)
{
  float currentAnimTime; 

  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8295, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( !info->notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8296, ASSERT_TYPE_ASSERT, "(info->notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "info->notifyName != NULL_SCR_STRING") )
    __debugbreak();
  if ( info->notifyIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 8297, ASSERT_TYPE_ASSERT, "(info->notifyIndex == -1)", (const char *)&queryFormat, "info->notifyIndex == -1") )
    __debugbreak();
  currentAnimTime = info->state.currentAnimTime;
  if ( currentAnimTime != 1.0 )
    info->notifyIndex = XAnimGetNextNotifyIndex(parts, currentAnimTime);
}

/*
==============
XAnimUpdateSyncGroups
==============
*/
void XAnimUpdateSyncGroups(const DObj *obj, float dtime, bool bNotify, XAnimSyncGroupCalcData *syncGroupCalcData)
{
  XAnimTree *tree; 
  XAnimInfo *AnimInfo; 
  float weight; 
  unsigned __int16 children; 
  float v11; 
  float v12; 
  float v13; 
  float frequencies[2]; 
  __int64 v15; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2086, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !syncGroupCalcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2087, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2090, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(tree->children);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2094, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  weight = AnimInfo->state.weight;
  children = tree->children;
  *(_QWORD *)frequencies = 0i64;
  v15 = 0i64;
  XAnimGetSyncGroupData_r(tree, children, syncGroupCalcData, frequencies, weight, dtime, bNotify);
  v11 = frequencies[1];
  syncGroupCalcData->syncGroupInfo[0].frequency = frequencies[0];
  v12 = *(float *)&v15;
  syncGroupCalcData->syncGroupInfo[1].frequency = v11;
  v13 = *((float *)&v15 + 1);
  syncGroupCalcData->syncGroupInfo[2].frequency = v12;
  syncGroupCalcData->syncGroupInfo[3].frequency = v13;
}

/*
==============
XAnimUpdateTimeAndNotetrack
==============
*/
void XAnimUpdateTimeAndNotetrack(const DObj *obj, unsigned __int16 infoIndex, float dtime, bool bNotify, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimSyncGroupCalcData syncGroupCalcData; 

  memset_0(&syncGroupCalcData, 0, sizeof(syncGroupCalcData));
  XAnimUpdateSyncGroups(obj, dtime, bNotify, &syncGroupCalcData);
  XAnimUpdateLeadSyncGroupNode(obj, &syncGroupCalcData, inOutNotifyHead);
  XAnimUpdateTimeAndNotetrackInternal(obj, infoIndex, dtime, bNotify, &syncGroupCalcData, inOutNotifyHead);
}

/*
==============
XAnimUpdateTimeAndNotetrackInternal
==============
*/
void XAnimUpdateTimeAndNotetrackInternal(const DObj *obj, unsigned __int16 infoIndex, float dtime, bool bNotify, const XAnimSyncGroupCalcData *syncGroupCalcData, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimTree *tree; 
  XAnimInfo *AnimInfo; 
  unsigned int flags; 
  unsigned __int8 v13; 
  __int64 v14; 
  unsigned __int16 leadInfoIndex; 
  float v16; 
  XAnimInfo *v17; 
  const XAnimState *p_state; 
  const char *AnimDebugName; 
  const char *v20; 
  float v21; 
  float v22; 
  float v23; 
  unsigned __int16 children; 
  unsigned __int16 next; 

  if ( !syncGroupCalcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3001, ASSERT_TYPE_ASSERT, "(syncGroupCalcData)", (const char *)&queryFormat, "syncGroupCalcData") )
    __debugbreak();
  tree = obj->tree;
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3004, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( dtime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3006, ASSERT_TYPE_ASSERT, "( ( dtime >= 0 ) )", "%s\n\t( dtime ) = %g", "( dtime >= 0 )", dtime) )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3009, ASSERT_TYPE_ASSERT, "( info->inuse )", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  if ( AnimInfo->state.weight == 0.0 )
  {
    XAnimCheckFreeInfo(obj->tree, infoIndex, 0, obj);
    return;
  }
  if ( AnimInfo->state.goalWeight == 0.0 )
    bNotify = 0;
  if ( AnimInfo->animToModel )
  {
    XAnimUpdateTimeAndNotetrackLeaf(obj, AnimInfo->parts, infoIndex, dtime, bNotify, inOutNotifyHead);
    return;
  }
  flags = AnimInfo->animParent.flags;
  if ( (flags & 3) != 0 )
  {
    v13 = AnimInfo->animParent.syncGroup[0];
    if ( v13 == 4 )
    {
      v21 = XAnimGetAverageRateFrequency(tree, infoIndex) * AnimInfo->state.rate;
      v22 = dtime * v21;
      if ( (float)(dtime * v21) != 0.0 )
      {
        XAnimUpdateTimeAndNotetrackSyncSubTree(obj, infoIndex, v22, bNotify, inOutNotifyHead);
        return;
      }
      goto LABEL_37;
    }
    if ( v13 >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3032, ASSERT_TYPE_ASSERT, "(info->animParent.syncGroup < XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "info->animParent.syncGroup < XAnimSyncGroupID::COUNT") )
      __debugbreak();
    v14 = (unsigned __int8)AnimInfo->animParent.syncGroup[0];
    leadInfoIndex = syncGroupCalcData->syncGroupInfo[v14].leadInfoIndex;
    if ( infoIndex != leadInfoIndex )
    {
      v16 = dtime * syncGroupCalcData->syncGroupInfo[v14].frequency;
      if ( v16 != 0.0 )
      {
        if ( !leadInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3051, ASSERT_TYPE_ASSERT, "(leadInfoIndex)", (const char *)&queryFormat, "leadInfoIndex") )
          __debugbreak();
        v17 = XAnimGetAnimInfo(leadInfoIndex);
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3053, ASSERT_TYPE_ASSERT, "(leadInfo)", (const char *)&queryFormat, "leadInfo") )
          __debugbreak();
        p_state = &v17->state;
        if ( ((LOBYTE(AnimInfo->parts) ^ LOBYTE(v17->parts)) & 1) != 0 )
        {
          AnimDebugName = XAnimGetAnimDebugName(tree->anims, v17->animIndex);
          v20 = XAnimGetAnimDebugName(tree->anims, AnimInfo->animIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3057, ASSERT_TYPE_ASSERT, "((leadInfo->animParent.flags & XANIM_LOOP_SYNC_TIME) == (info->animParent.flags & XANIM_LOOP_SYNC_TIME))", "%s\n\tNodes ( '%s','%s' ) share the same sync group number but they use different loopsync/nonloopsync keywords.", "(leadInfo->animParent.flags & XANIM_LOOP_SYNC_TIME) == (info->animParent.flags & XANIM_LOOP_SYNC_TIME)", v20, AnimDebugName) )
            __debugbreak();
        }
        XAnimUpdateInfoSync(obj, infoIndex, bNotify, p_state, v16, inOutNotifyHead);
        return;
      }
LABEL_37:
      XAnimCheckFreeInfo(obj->tree, infoIndex, 1, obj);
    }
  }
  else
  {
    if ( (flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3077, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_SYNC_ROOT))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_SYNC_ROOT)") )
      __debugbreak();
    if ( obj->entnum && !tree->owner[0] && AnimInfo->notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3078, ASSERT_TYPE_ASSERT, "(!obj->entnum || !(tree->owner == XAnimOwner::SERVER && (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) ))", (const char *)&queryFormat, "!obj->entnum || !(tree->owner == XAnimOwner::SERVER && (info->notifyName != NULL_SCR_STRING) )") )
      __debugbreak();
    v23 = dtime * AnimInfo->state.rate;
    if ( v23 == 0.0 )
      goto LABEL_37;
    children = AnimInfo->children;
    if ( children )
    {
      do
      {
        next = XAnimGetAnimInfo(children)->next;
        XAnimUpdateTimeAndNotetrackInternal(obj, children, v23, bNotify, syncGroupCalcData, inOutNotifyHead);
        children = next;
      }
      while ( next );
    }
  }
}

/*
==============
XAnimUpdateTimeAndNotetrackLeaf
==============
*/

void __fastcall XAnimUpdateTimeAndNotetrackLeaf(const DObj *obj, const XAnimParts *parts, unsigned __int16 infoIndex, double dtime, bool bNotify, XAnimNotifyHandle *inOutNotifyHead)
{
  XAnimInfo *AnimInfo; 
  __int128 v10; 
  __int128 v11; 
  float currentAnimTime; 
  const char *AnimDebugName; 
  float rate; 
  const char *v15; 
  const char *v16; 
  __int128 currentAnimTime_low; 
  __int128 v19; 
  unsigned __int16 cycleCount; 
  scr_string_t notifyName; 
  int notifyType; 
  const char *v23; 
  __int128 v26; 
  int v27; 
  bool v29; 
  __int128 v30; 
  unsigned __int8 flags; 
  int v34; 
  int v35; 
  float v36; 
  unsigned __int8 v37; 
  float v38; 
  __int64 v39; 

  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2821, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  AnimInfo = XAnimGetAnimInfo(infoIndex);
  if ( AnimInfo->state.oldTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2826, ASSERT_TYPE_ASSERT, "(state->oldTime >= 0)", (const char *)&queryFormat, "state->oldTime >= 0") )
    __debugbreak();
  v11 = *(_OWORD *)&dtime;
  *(float *)&v11 = *(float *)&dtime * (float)(parts->frequency * AnimInfo->state.rate);
  v10 = v11;
  if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 653, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( (AnimInfo->state.flags & 0x10) != 0 )
  {
    currentAnimTime = AnimInfo->state.currentAnimTime;
    if ( currentAnimTime < 0.0 )
    {
      AnimDebugName = XAnimGetAnimDebugName(obj->tree->anims, AnimInfo->animIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2832, ASSERT_TYPE_ASSERT, "(0.0f <= state->currentAnimTime)", "%s\n\tXAnimUpdateTimeAndNotetrackLeaf '%s': state->currentAnimTime (%.2f) must be non-negative.", "0.0f <= state->currentAnimTime", AnimDebugName, currentAnimTime) )
        __debugbreak();
    }
    rate = AnimInfo->state.rate;
    if ( rate != 0.0 )
    {
      v15 = XAnimGetAnimDebugName(obj->tree->anims, AnimInfo->animIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2833, ASSERT_TYPE_ASSERT, "(state->rate == 0.0f)", "%s\n\tXAnimUpdateTimeAndNotetrackLeaf '%s': state->rate (%.2f) must be 0.0f if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "state->rate == 0.0f", v15, rate) )
        __debugbreak();
    }
    if ( (parts->flags & 1) != 0 )
    {
      v16 = XAnimGetAnimDebugName(obj->tree->anims, AnimInfo->animIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2834, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) == 0)", "%s\n\tXAnimUpdateTimeAndNotetrackLeaf '%s': (parts->flags & ANIM_LOOP) must be false if XANIMSTATE_SCRUBBED_NOTETRACKS is set.", "(parts->flags & ANIM_LOOP) == 0", v16) )
        __debugbreak();
    }
    currentAnimTime_low = LODWORD(AnimInfo->state.currentAnimTime);
    *(float *)&currentAnimTime_low = AnimInfo->state.currentAnimTime - AnimInfo->state.oldTime;
    v10 = currentAnimTime_low;
  }
  if ( *(float *)&v10 != 0.0 )
  {
    if ( COERCE_FLOAT(v10 & _xmm) >= 32767.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2841, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", *(float *)&v10) )
      __debugbreak();
    v19 = v10;
    *(float *)&v19 = *(float *)&v10 + AnimInfo->state.oldTime;
    _XMM6 = v19;
    cycleCount = AnimInfo->state.cycleCount;
    if ( *(float *)&v19 < 0.0 )
    {
      notifyName = AnimInfo->notifyName;
      if ( notifyName || AnimInfo->notifyType )
      {
        notifyType = AnimInfo->notifyType;
        v23 = SL_ConvertToString(notifyName);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2846, ASSERT_TYPE_ASSERT, "(!( time < 0.f && ( (info->notifyName != ( static_cast< scr_string_t >( 0 ) )) || info->notifyType ) ))", "%s\n\tAnimation %s playing backwards with active notetrack %s and notifyType %d", "!( time < 0.f && ( (info->notifyName != NULL_SCR_STRING) || info->notifyType ) )", parts->name, v23, notifyType) )
          __debugbreak();
      }
    }
    if ( *(float *)&v10 < 0.0 )
    {
      if ( *(float *)&v19 >= 0.0 )
        goto LABEL_48;
      if ( (parts->flags & 1) == 0 )
      {
        LODWORD(_XMM6) = 0;
        goto LABEL_48;
      }
      do
      {
        _XMM0 = _XMM6;
        --cycleCount;
        v29 = *(float *)&_XMM6 <= -1.0;
        v30 = _XMM6;
        *(float *)&v30 = *(float *)&_XMM6 + 1.0;
        _XMM6 = v30;
      }
      while ( v29 );
      __asm
      {
        vcmpeqss xmm0, xmm0, xmm8
        vblendvps xmm1, xmm6, xmm1, xmm0
      }
      LODWORD(_XMM6) = _XMM1;
      if ( *(float *)&_XMM1 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2888, ASSERT_TYPE_ASSERT, "( ( time < 1.f ) )", "( time ) = %g", *(float *)&_XMM1) )
        __debugbreak();
      if ( *(float *)&_XMM1 >= 0.0 )
        goto LABEL_48;
      v27 = 2889;
    }
    else
    {
      if ( *(float *)&v19 < 1.0 )
      {
LABEL_48:
        flags = parts->flags;
        v34 = 0;
        v35 = 0;
        if ( (flags & 1) != 0 )
          LOBYTE(v35) = *(float *)&_XMM6 < 1.0;
        else
          LOBYTE(v35) = *(float *)&_XMM6 <= 1.0;
        if ( !v35 )
        {
          LODWORD(v39) = flags & 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2894, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f))", "%s\n\ttime: %f, loop: %d", "(parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f)", *(float *)&_XMM6, v39) )
            __debugbreak();
        }
        if ( !AnimInfo->notifyName && !AnimInfo->notifyType || (float)(__int16)(cycleCount - AnimInfo->state.cycleCount) >= (float)(AnimInfo->state.currentAnimTime - *(float *)&_XMM6) )
        {
          if ( bNotify && (!obj->tree || !obj->tree->owner[0]) )
            XAnimProcessServerNotify(obj, AnimInfo, *(float *)&_XMM6);
          AnimInfo->state.currentAnimTime = *(float *)&_XMM6;
          AnimInfo->state.cycleCount = cycleCount;
          AnimInfo->notifyIndex = -1;
          if ( bNotify && DObjHasClientFlag(obj) )
            XAnimProcessClientNotify(obj, AnimInfo, *(float *)&v10, inOutNotifyHead);
          v36 = AnimInfo->state.currentAnimTime;
          if ( v36 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2914, ASSERT_TYPE_ASSERT, "( ( state->currentAnimTime >= 0 ) )", "( state->currentAnimTime ) = %g", v36) )
            __debugbreak();
          v37 = parts->flags;
          v38 = AnimInfo->state.currentAnimTime;
          if ( (v37 & 1) != 0 )
            LOBYTE(v34) = v38 < 1.0;
          else
            LOBYTE(v34) = v38 <= 1.0;
          if ( !v34 )
          {
            LODWORD(v39) = v37 & 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2915, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f))", "%s\n\ttime: %f, loop: %d", "(parts->flags & ANIM_LOOP) ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f)", v38, v39) )
              __debugbreak();
          }
        }
        return;
      }
      if ( (parts->flags & 1) == 0 )
      {
        _XMM1 = LODWORD(FLOAT_0_99999988);
        __asm
        {
          vcmpless xmm0, xmm1, dword ptr [rdi+2Ch]
          vblendvps xmm6, xmm1, xmm7, xmm0
        }
        goto LABEL_48;
      }
      do
      {
        v26 = _XMM6;
        *(float *)&v26 = *(float *)&_XMM6 + -1.0;
        _XMM6 = v26;
        ++cycleCount;
      }
      while ( *(float *)&v26 >= 1.0 );
      if ( *(float *)&v26 >= 0.0 )
        goto LABEL_48;
      v27 = 2865;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", v27, ASSERT_TYPE_ASSERT, "( ( !(time < 0.f) ) )", "( time ) = %g", *(float *)&_XMM6) )
      __debugbreak();
    goto LABEL_48;
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
  XAnimState *p_state; 
  float oldTime; 
  __int128 v13; 
  unsigned __int16 oldCycleCount; 
  int v15; 
  __int128 v18; 
  int v19; 
  BOOL v20; 
  float currentAnimTime; 
  unsigned __int16 children; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  unsigned __int16 v25; 
  XAnimNotifyHandle *v26; 
  __int64 v27; 
  __int64 v28; 

  AnimInfo = XAnimGetAnimInfo(infoIndex);
  p_state = &AnimInfo->state;
  if ( ((__int64)AnimInfo->parts & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2930, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_SYNC_ROOT)", (const char *)&queryFormat, "info->animParent.flags & XANIM_SYNC_ROOT") )
    __debugbreak();
  oldTime = AnimInfo->state.oldTime;
  if ( oldTime < 0.0 || oldTime > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2932, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( state->oldTime ) && ( state->oldTime ) <= ( 1.0f )", "state->oldTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", oldTime, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(LODWORD(dtime) & _xmm) >= 32767.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2934, ASSERT_TYPE_ASSERT, "( ( I_fabs( dtime ) < 32767.0f ) )", "( dtime ) = %g", *(float *)&dtime) )
    __debugbreak();
  v13 = *(_OWORD *)&dtime;
  *(float *)&v13 = *(float *)&dtime + AnimInfo->state.oldTime;
  _XMM6 = v13;
  oldCycleCount = AnimInfo->state.oldCycleCount;
  if ( *(float *)&v13 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2939, ASSERT_TYPE_ASSERT, "( ( !(time < 0.f) ) )", "( time ) = %g", *(float *)&v13) )
    __debugbreak();
  if ( *(float *)&v13 >= 1.0 )
  {
    v15 = AnimInfo->animParent.flags & 1;
    if ( (AnimInfo->animParent.flags & 2) != 0 )
    {
      if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2945, ASSERT_TYPE_ASSERT, "(!(info->animParent.flags & XANIM_LOOP_SYNC_TIME))", (const char *)&queryFormat, "!(info->animParent.flags & XANIM_LOOP_SYNC_TIME)") )
        __debugbreak();
      _XMM1 = LODWORD(FLOAT_0_99999988);
      __asm
      {
        vcmpless xmm0, xmm1, dword ptr [rbp+4]
        vblendvps xmm6, xmm1, xmm7, xmm0
      }
    }
    else
    {
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2950, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME)", (const char *)&queryFormat, "info->animParent.flags & XANIM_LOOP_SYNC_TIME") )
        __debugbreak();
      do
      {
        v18 = _XMM6;
        *(float *)&v18 = *(float *)&_XMM6 + -1.0;
        _XMM6 = v18;
        ++oldCycleCount;
      }
      while ( *(float *)&v18 >= 1.0 );
      if ( *(float *)&v18 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2958, ASSERT_TYPE_ASSERT, "( ( !(time < 0.f) ) )", "( time ) = %g", *(float *)&v18) )
        __debugbreak();
    }
  }
  v19 = 0;
  if ( (AnimInfo->animParent.flags & 1) != 0 )
    v20 = *(float *)&_XMM6 < 1.0;
  else
    v20 = *(float *)&_XMM6 <= 1.0;
  if ( !v20 )
  {
    LODWORD(v28) = AnimInfo->animParent.flags & 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2962, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (time < 1.f) : (time <= 1.f))", "%s\n\ttime: %f, info->animParent.flags & XANIM_LOOP_SYNC_TIME: %d", "info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (time < 1.f) : (time <= 1.f)", *(float *)&_XMM6, v28) )
      __debugbreak();
  }
  if ( !AnimInfo->notifyName && !AnimInfo->notifyType || (float)(__int16)(oldCycleCount - AnimInfo->state.cycleCount) >= (float)(AnimInfo->state.currentAnimTime - *(float *)&_XMM6) )
  {
    if ( bNotify && (!obj->tree || !obj->tree->owner[0]) )
      XAnimProcessServerNotify(obj, AnimInfo, *(float *)&_XMM6);
    AnimInfo->state.cycleCount = oldCycleCount;
    p_state->currentAnimTime = *(float *)&_XMM6;
    AnimInfo->notifyIndex = -1;
    if ( bNotify && DObjHasClientFlag(obj) )
      XAnimProcessClientNotify(obj, AnimInfo, *(float *)&dtime, inOutNotifyHead);
    if ( p_state->currentAnimTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2982, ASSERT_TYPE_ASSERT, "( ( state->currentAnimTime >= 0 ) )", "( state->currentAnimTime ) = %g", p_state->currentAnimTime) )
      __debugbreak();
    currentAnimTime = p_state->currentAnimTime;
    if ( (AnimInfo->animParent.flags & 1) != 0 )
      LOBYTE(v19) = currentAnimTime < 1.0;
    else
      LOBYTE(v19) = currentAnimTime <= 1.0;
    if ( !v19 )
    {
      LODWORD(v28) = AnimInfo->animParent.flags & 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 2983, ASSERT_TYPE_ASSERT, "(info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f))", "%s\n\ttime: %f, info->animParent.flags & XANIM_LOOP_SYNC_TIME: %d", "info->animParent.flags & XANIM_LOOP_SYNC_TIME ? (state->currentAnimTime < 1.f) : (state->currentAnimTime <= 1.f)", currentAnimTime, v28) )
        __debugbreak();
    }
    children = AnimInfo->children;
    if ( children )
    {
      do
      {
        if ( (children & 0x8000u) != 0 )
        {
          v24 = 32 * (children & 0x7FFF);
          if ( v24 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v27) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(v26) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v26, v27) )
              __debugbreak();
          }
          v23 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v24];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v27) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(v26) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v23 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        v25 = *((_WORD *)v23 + 5);
        XAnimUpdateInfoSync(obj, children, bNotify, p_state, *(float *)&dtime, inOutNotifyHead);
        children = v25;
      }
      while ( v25 );
    }
  }
}

/*
==============
XAnimValidateNotetrackTimes
==============
*/
char XAnimValidateNotetrackTimes(const XAnimParts *parts, float notifyInStartTime, float notifyInEndTime, float notifyOutStartTime, float notifyOutEndTime, bool throwError)
{
  if ( throwError && !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim.cpp", 3110, ASSERT_TYPE_ASSERT, "(!throwError || (throwError && parts))", (const char *)&queryFormat, "!throwError || (throwError && parts)") )
    __debugbreak();
  if ( notifyInStartTime == -1.0 && notifyInEndTime == -1.0 || notifyInStartTime >= 0.0 && notifyInEndTime >= 0.0 )
  {
    if ( notifyOutStartTime == -1.0 && notifyOutEndTime == -1.0 || notifyOutStartTime >= 0.0 && notifyOutEndTime >= 0.0 )
    {
      if ( notifyInStartTime == -1.0 || notifyInStartTime != notifyInEndTime )
      {
        if ( notifyOutStartTime == -1.0 || notifyOutStartTime != notifyOutEndTime )
        {
          if ( notifyInStartTime == -1.0 && notifyInEndTime == -1.0 || notifyInStartTime < notifyInEndTime )
          {
            if ( notifyOutStartTime == -1.0 && notifyOutEndTime == -1.0 || notifyOutStartTime < notifyOutEndTime )
              return 1;
            if ( throwError )
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC590, 361i64, parts->name);
          }
          else if ( throwError )
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC530, 360i64, parts->name);
          }
        }
        else if ( throwError )
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC4B0, 359i64, parts->name);
        }
      }
      else if ( throwError )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC440, 358i64, parts->name);
      }
    }
    else if ( throwError )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_1441AC3C0, 357i64, parts->name);
    }
  }
  else if ( throwError )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441AC350, 356i64, parts->name);
  }
  return 0;
}

/*
==============
XAnimWillBeLodCulled
==============
*/
bool XAnimWillBeLodCulled(const XAnimTree *tree, unsigned __int16 animIndex)
{
  __int16 calcLod; 
  unsigned __int8 v5; 
  const dvar_t *v6; 
  unsigned __int8 v7; 
  double Float_Internal_DebugName; 
  double v9; 

  if ( !tree )
    return 0;
  if ( !tree->owner[0] )
    return 0;
  calcLod = tree->lodState.calcLod;
  if ( !calcLod )
    return 0;
  v5 = truncate_cast<unsigned char,int>(calcLod / 256);
  v6 = DCONST_DVARBOOL_xanim_lodEnable;
  v7 = v5;
  if ( !DCONST_DVARBOOL_xanim_lodEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 0;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_lodOverride, "xanim_lodOverride");
  if ( *(float *)&Float_Internal_DebugName >= 0.0 )
  {
    v9 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_lodOverride, "xanim_lodOverride");
    v7 = truncate_cast<unsigned char,int>((int)*(float *)&v9);
  }
  return v7 && tree->anims->entries[animIndex].lod < v7;
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

