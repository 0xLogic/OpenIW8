/*
==============
XAnimCustomNodeInstantInit
==============
*/

void __fastcall XAnimCustomNodeInstantInit(const DObj *obj, XAnimTree *tree, XAnimInfo *animInfo, unsigned __int16 infoIndex, XModelNameMap *modelNameMap)
{
  ?XAnimCustomNodeInstantInit@@YAXPEBUDObj@@PEAUXAnimTree@@PEAUXAnimInfo@@GPEAUXModelNameMap@@@Z(obj, tree, animInfo, infoIndex, modelNameMap);
}

/*
==============
XAnimWriteConstString
==============
*/

void __fastcall XAnimWriteConstString(MemoryFile *memFile, scr_string_t str)
{
  ?XAnimWriteConstString@@YAXPEAUMemoryFile@@W4scr_string_t@@@Z(memFile, str);
}

/*
==============
XAnimBindUInt32ToNodeParameter
==============
*/

bool __fastcall XAnimBindUInt32ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, unsigned int value)
{
  return ?XAnimBindUInt32ToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@I@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimCustomNodeVisitBindingsByParameterName
==============
*/

void __fastcall XAnimCustomNodeVisitBindingsByParameterName(XAnim_s *anims, scr_string_t gameParameterName, XAnimBindingType bindingType, void (__fastcall *visitorFunc)(const XAnim_s *, scr_string_t, const XAnimParameterBinding *, void *), void *visitorFuncData)
{
  ?XAnimCustomNodeVisitBindingsByParameterName@@YAXPEAUXAnim_s@@W4scr_string_t@@W4XAnimBindingType@@P6AXPEBU1@1PEBUXAnimParameterBinding@@PEAX@Z5@Z(anims, gameParameterName, bindingType, visitorFunc, visitorFuncData);
}

/*
==============
XAnimBindInt32ToNodeParameter
==============
*/

bool __fastcall XAnimBindInt32ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, int value)
{
  return ?XAnimBindInt32ToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@H@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimSetIntGameParameterByIndex
==============
*/

void __fastcall XAnimSetIntGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, int value)
{
  ?XAnimSetIntGameParameterByIndex@@YAXPEAUDObj@@GH@Z(obj, parameterIndex, value);
}

/*
==============
XAnimFindPublicNode
==============
*/

bool __fastcall XAnimFindPublicNode(const XAnim_s *anims, scr_string_t name, unsigned __int16 *outAnimIndex)
{
  return ?XAnimFindPublicNode@@YA_NPEBUXAnim_s@@W4scr_string_t@@PEAG@Z(anims, name, outAnimIndex);
}

/*
==============
XAnimSetByteGameParameterByName
==============
*/

bool __fastcall XAnimSetByteGameParameterByName(DObj *obj, scr_string_t name, unsigned __int8 value)
{
  return ?XAnimSetByteGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@E@Z(obj, name, value);
}

/*
==============
XAnimBindInt16ToNodeParameter
==============
*/

bool __fastcall XAnimBindInt16ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, __int16 value)
{
  return ?XAnimBindInt16ToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@F@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimBindPointerToNodeParameter
==============
*/

bool __fastcall XAnimBindPointerToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, const void *value)
{
  return ?XAnimBindPointerToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@PEBX@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimWriteCustomNode
==============
*/

void __fastcall XAnimWriteCustomNode(const XAnimTree *tree, XAnimInfo *animInfo, MemoryFile *memFile)
{
  ?XAnimWriteCustomNode@@YAXPEBUXAnimTree@@PEAUXAnimInfo@@PEAUMemoryFile@@@Z(tree, animInfo, memFile);
}

/*
==============
XAnimBindVec2ToNodeParameter
==============
*/

bool __fastcall XAnimBindVec2ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, const vec2_t *value)
{
  return ?XAnimBindVec2ToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@AEBTvec2_t@@@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimFindConstantBindParameterByFieldNameNonConst
==============
*/

XAnimParameterBinding *__fastcall XAnimFindConstantBindParameterByFieldNameNonConst(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return ?XAnimFindConstantBindParameterByFieldNameNonConst@@YAPEAUXAnimParameterBinding@@PEBUXAnim_s@@IW4scr_string_t@@PEBUXAnimTypeFields@@@Z(anims, animIndex, fieldName, typeFields);
}

/*
==============
XAnimRegisterStructTypeInternal
==============
*/

unsigned __int8 __fastcall XAnimRegisterStructTypeInternal(XAnimGameStructTypeInfo *typeInfo)
{
  return ?XAnimRegisterStructTypeInternal@@YAEPEAUXAnimGameStructTypeInfo@@@Z(typeInfo);
}

/*
==============
XAnimGetCustomNodeTypeInfo
==============
*/

const XAnimNodeTypeInfo *__fastcall XAnimGetCustomNodeTypeInfo(const XAnim_s *anims, const XAnimInfo *animInfo)
{
  return ?XAnimGetCustomNodeTypeInfo@@YAPEBUXAnimNodeTypeInfo@@PEBUXAnim_s@@PEBUXAnimInfo@@@Z(anims, animInfo);
}

/*
==============
XAnimSetIndirectVec3GameParameterByName
==============
*/

bool __fastcall XAnimSetIndirectVec3GameParameterByName(DObj *obj, scr_string_t name, const vec3_t *valuePointer)
{
  return ?XAnimSetIndirectVec3GameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@PEBTvec3_t@@@Z(obj, name, valuePointer);
}

/*
==============
XAnimFindGameParameterIndexByName
==============
*/

bool __fastcall XAnimFindGameParameterIndexByName(XAnim_s *anims, scr_string_t name, unsigned __int16 *outParameterIndex)
{
  return ?XAnimFindGameParameterIndexByName@@YA_NPEAUXAnim_s@@W4scr_string_t@@PEAG@Z(anims, name, outParameterIndex);
}

/*
==============
XAnimReadCustomNode
==============
*/

void __fastcall XAnimReadCustomNode(XAnimTree *tree, XAnimInfo *animInfo, MemoryFile *memFile)
{
  ?XAnimReadCustomNode@@YAXPEAUXAnimTree@@PEAUXAnimInfo@@PEAUMemoryFile@@@Z(tree, animInfo, memFile);
}

/*
==============
XAnimCloneParameterValuesFromServerToClient
==============
*/

void __fastcall XAnimCloneParameterValuesFromServerToClient(const XAnimTree *serverTree, XAnimTree *clientTree)
{
  ?XAnimCloneParameterValuesFromServerToClient@@YAXPEBUXAnimTree@@PEAU1@@Z(serverTree, clientTree);
}

/*
==============
XAnimFindPublicNodeByTypeName
==============
*/

bool __fastcall XAnimFindPublicNodeByTypeName(const XAnim_s *anims, scr_string_t typeName, unsigned __int16 *outAnimIndex)
{
  return ?XAnimFindPublicNodeByTypeName@@YA_NPEBUXAnim_s@@W4scr_string_t@@PEAG@Z(anims, typeName, outAnimIndex);
}

/*
==============
XAnimDestroyNode
==============
*/

void __fastcall XAnimDestroyNode(const XAnimTree *tree, XAnimInfo *animInfo)
{
  ?XAnimDestroyNode@@YAXPEBUXAnimTree@@PEAUXAnimInfo@@@Z(tree, animInfo);
}

/*
==============
XAnimInitNodeTypes
==============
*/

void XAnimInitNodeTypes(void)
{
  ?XAnimInitNodeTypes@@YAXXZ();
}

/*
==============
XAnimCustomNodeCalc
==============
*/

void __fastcall XAnimCustomNodeCalc(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  ?XAnimCustomNodeCalc@@YAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimInfo@@M_NPEAUXAnimCalcBuffer@@@Z(animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer);
}

/*
==============
XAnimSetIndirectByteGameParameterByName
==============
*/

bool __fastcall XAnimSetIndirectByteGameParameterByName(DObj *obj, scr_string_t name, const unsigned __int8 *valuePointer)
{
  return ?XAnimSetIndirectByteGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@PEBE@Z(obj, name, valuePointer);
}

/*
==============
XAnimFindDynamicBindParameterByFieldNameAllBindings
==============
*/

const XAnimParameterBinding *__fastcall XAnimFindDynamicBindParameterByFieldNameAllBindings(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return ?XAnimFindDynamicBindParameterByFieldNameAllBindings@@YAPEBUXAnimParameterBinding@@PEBUXAnim_s@@IW4scr_string_t@@PEBUXAnimTypeFields@@@Z(anims, animIndex, fieldName, typeFields);
}

/*
==============
XAnimSetIndirectFloatGameParameterByName
==============
*/

bool __fastcall XAnimSetIndirectFloatGameParameterByName(DObj *obj, scr_string_t name, const float *valuePointer)
{
  return ?XAnimSetIndirectFloatGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@PEBM@Z(obj, name, valuePointer);
}

/*
==============
XAnimBindByteToNodeParameter
==============
*/

bool __fastcall XAnimBindByteToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, unsigned __int8 value)
{
  return ?XAnimBindByteToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@E@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimFindCustomNodeParameter
==============
*/

bool __fastcall XAnimFindCustomNodeParameter(XAnimNodeTypeID nodeTypeID, scr_string_t parameterName, XAnimFieldType *outParameterType)
{
  return ?XAnimFindCustomNodeParameter@@YA_NW4XAnimNodeTypeID@@W4scr_string_t@@PEAW4XAnimFieldType@@@Z(nodeTypeID, parameterName, outParameterType);
}

/*
==============
XAnimSetVec3GameParameterByIndex
==============
*/

void __fastcall XAnimSetVec3GameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const vec3_t *value)
{
  ?XAnimSetVec3GameParameterByIndex@@YAXPEAUDObj@@GAEBTvec3_t@@@Z(obj, parameterIndex, value);
}

/*
==============
XAnimReadConstStringOfSize
==============
*/

scr_string_t __fastcall XAnimReadConstStringOfSize(MemoryFile *memFile)
{
  return ?XAnimReadConstStringOfSize@@YA?AW4scr_string_t@@PEAUMemoryFile@@@Z(memFile);
}

/*
==============
XAnimIsClientOnlyNode
==============
*/

bool __fastcall XAnimIsClientOnlyNode(const XAnimInfo *animInfo)
{
  return ?XAnimIsClientOnlyNode@@YA_NPEBUXAnimInfo@@@Z(animInfo);
}

/*
==============
XAnimTreeUpdateParameters
==============
*/

void __fastcall XAnimTreeUpdateParameters(const DObj *obj)
{
  ?XAnimTreeUpdateParameters@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
XAnimBindGameParameterToNodeParameterByIndex
==============
*/

bool __fastcall XAnimBindGameParameterToNodeParameterByIndex(XAnim_s *anims, unsigned int animIndex, unsigned __int16 gameParameterIndex, scr_string_t nodeParameterName)
{
  return ?XAnimBindGameParameterToNodeParameterByIndex@@YA_NPEAUXAnim_s@@IGW4scr_string_t@@@Z(anims, animIndex, gameParameterIndex, nodeParameterName);
}

/*
==============
XAnimIsCustomCalcNode
==============
*/

bool __fastcall XAnimIsCustomCalcNode(const XAnim_s *anims, const XAnimInfo *animInfo)
{
  return ?XAnimIsCustomCalcNode@@YA_NPEBUXAnim_s@@PEBUXAnimInfo@@@Z(anims, animInfo);
}

/*
==============
XAnimSetBoolGameParameterByIndex
==============
*/

void __fastcall XAnimSetBoolGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, bool value)
{
  ?XAnimSetBoolGameParameterByIndex@@YAXPEAUDObj@@G_N@Z(obj, parameterIndex, value);
}

/*
==============
XAnimIsCustomNodeByName
==============
*/

bool __fastcall XAnimIsCustomNodeByName(const XAnim_s *anims, unsigned int animIndex, scr_string_t customNodeName)
{
  return ?XAnimIsCustomNodeByName@@YA_NPEBUXAnim_s@@IW4scr_string_t@@@Z(anims, animIndex, customNodeName);
}

/*
==============
XAnimIsCustomNodeType
==============
*/

bool __fastcall XAnimIsCustomNodeType(XAnimNodeTypeID nodeType)
{
  return ?XAnimIsCustomNodeType@@YA_NW4XAnimNodeTypeID@@@Z(nodeType);
}

/*
==============
XAnimBindUInt16ToNodeParameter
==============
*/

bool __fastcall XAnimBindUInt16ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, unsigned __int16 value)
{
  return ?XAnimBindUInt16ToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@G@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimWriteParameterValues
==============
*/

void __fastcall XAnimWriteParameterValues(const XAnimTree *tree, MemoryFile *memFile)
{
  ?XAnimWriteParameterValues@@YAXPEBUXAnimTree@@PEAUMemoryFile@@@Z(tree, memFile);
}

/*
==============
XAnimReadConstString
==============
*/

scr_string_t __fastcall XAnimReadConstString(MemoryFile *memFile)
{
  return ?XAnimReadConstString@@YA?AW4scr_string_t@@PEAUMemoryFile@@@Z(memFile);
}

/*
==============
XAnimBindArrayToNodeParameter
==============
*/

bool __fastcall XAnimBindArrayToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, scr_string_t value, const XAnimFieldType fieldType)
{
  return ?XAnimBindArrayToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@1W4XAnimFieldType@@@Z(anims, animIndex, nodeParameterName, value, fieldType);
}

/*
==============
XAnimGetTypeFieldsForNodeType
==============
*/

const XAnimTypeFields *__fastcall XAnimGetTypeFieldsForNodeType(XAnimNodeTypeID typeID)
{
  return ?XAnimGetTypeFieldsForNodeType@@YAPEBUXAnimTypeFields@@W4XAnimNodeTypeID@@@Z(typeID);
}

/*
==============
XAnimSetFloatGameParameterByIndex
==============
*/

void __fastcall XAnimSetFloatGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, float value)
{
  ?XAnimSetFloatGameParameterByIndex@@YAXPEAUDObj@@GM@Z(obj, parameterIndex, value);
}

/*
==============
XAnimBindStringToNodeParameter
==============
*/

bool __fastcall XAnimBindStringToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, scr_string_t value)
{
  return ?XAnimBindStringToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@1@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimBindGameParameterFieldToNodeParameterByName
==============
*/

bool __fastcall XAnimBindGameParameterFieldToNodeParameterByName(XAnim_s *anims, unsigned int animIndex, scr_string_t gameParameterName, scr_string_t gameParameterFieldName, scr_string_t nodeParameterName)
{
  return ?XAnimBindGameParameterFieldToNodeParameterByName@@YA_NPEAUXAnim_s@@IW4scr_string_t@@11@Z(anims, animIndex, gameParameterName, gameParameterFieldName, nodeParameterName);
}

/*
==============
XAnimGetNumGameParameters
==============
*/

unsigned __int16 __fastcall XAnimGetNumGameParameters(const XAnim_s *anims)
{
  return ?XAnimGetNumGameParameters@@YAGPEBUXAnim_s@@@Z(anims);
}

/*
==============
XAnimSetGameParameterName
==============
*/

void __fastcall XAnimSetGameParameterName(XAnim_s *anims, unsigned __int16 parameterIndex, const scr_string_t *name)
{
  ?XAnimSetGameParameterName@@YAXPEAUXAnim_s@@GPEBW4scr_string_t@@@Z(anims, parameterIndex, name);
}

/*
==============
XAnimCustomNode
==============
*/

void __fastcall XAnimCustomNode(scr_string_t customNodeTypeName, XAnim_s *anims, unsigned int animIndex, const char *name, unsigned int children, unsigned int num, unsigned int flags, const XAnimSyncGroupID syncGroup, bool allowAllocs)
{
  ?XAnimCustomNode@@YAXW4scr_string_t@@PEAUXAnim_s@@IPEBDIIIW4XAnimSyncGroupID@@_N@Z(customNodeTypeName, anims, animIndex, name, children, num, flags, syncGroup, allowAllocs);
}

/*
==============
XAnimCloneCustomNodeData
==============
*/

void __fastcall XAnimCloneCustomNodeData(const XAnimInfo *fromInfo, XAnimInfo *toInfo, const XAnimTree *fromTree, const XAnimTree *toTree)
{
  ?XAnimCloneCustomNodeData@@YAXPEBUXAnimInfo@@PEAU1@PEBUXAnimTree@@2@Z(fromInfo, toInfo, fromTree, toTree);
}

/*
==============
XAnimSetStructGameParameterByIndex
==============
*/

void __fastcall XAnimSetStructGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, unsigned __int8 structureTypeID, const void *valuePointer)
{
  ?XAnimSetStructGameParameterByIndex@@YAXPEAUDObj@@GEPEBX@Z(obj, parameterIndex, structureTypeID, valuePointer);
}

/*
==============
XAnimBindGameParameterToNodeParameterByName
==============
*/

bool __fastcall XAnimBindGameParameterToNodeParameterByName(XAnim_s *anims, unsigned int animIndex, scr_string_t gameParameterName, scr_string_t nodeParameterName)
{
  return ?XAnimBindGameParameterToNodeParameterByName@@YA_NPEAUXAnim_s@@IW4scr_string_t@@1@Z(anims, animIndex, gameParameterName, nodeParameterName);
}

/*
==============
XAnimIsClientAuthNode
==============
*/

bool __fastcall XAnimIsClientAuthNode(const XAnimInfo *animInfo)
{
  return ?XAnimIsClientAuthNode@@YA_NPEBUXAnimInfo@@@Z(animInfo);
}

/*
==============
XAnimBindGameParameterFieldToNodeParameterByIndex
==============
*/

bool __fastcall XAnimBindGameParameterFieldToNodeParameterByIndex(XAnim_s *anims, unsigned int animIndex, unsigned __int16 gameParameterIndex, scr_string_t gameParameterFieldName, scr_string_t nodeParameterName)
{
  return ?XAnimBindGameParameterFieldToNodeParameterByIndex@@YA_NPEAUXAnim_s@@IGW4scr_string_t@@1@Z(anims, animIndex, gameParameterIndex, gameParameterFieldName, nodeParameterName);
}

/*
==============
XAnimFindNodeTypeByName
==============
*/

bool __fastcall XAnimFindNodeTypeByName(scr_string_t nodeTypeName, XAnimNodeTypeID *outNodeTypeID)
{
  return ?XAnimFindNodeTypeByName@@YA_NW4scr_string_t@@PEAW4XAnimNodeTypeID@@@Z(nodeTypeName, outNodeTypeID);
}

/*
==============
AddNodeParameterBinding
==============
*/

XAnimParameterBinding *__fastcall AddNodeParameterBinding(XAnim_s *anims, XAnimBindingType type, unsigned int animIndex, const XAnimField *nodeField)
{
  return ?AddNodeParameterBinding@@YAPEAUXAnimParameterBinding@@PEAUXAnim_s@@W4XAnimBindingType@@IPEBUXAnimField@@@Z(anims, type, animIndex, nodeField);
}

/*
==============
XAnimFindConstantBindParameterByFieldName
==============
*/

const XAnimParameterBinding *__fastcall XAnimFindConstantBindParameterByFieldName(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return ?XAnimFindConstantBindParameterByFieldName@@YAPEBUXAnimParameterBinding@@PEBUXAnim_s@@IW4scr_string_t@@PEBUXAnimTypeFields@@@Z(anims, animIndex, fieldName, typeFields);
}

/*
==============
XAnimCustomNodeUpdate
==============
*/

void __fastcall XAnimCustomNodeUpdate(const DObj *obj, XAnimInfo *animInfo, unsigned __int16 infoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  ?XAnimCustomNodeUpdate@@YAXPEBUDObj@@PEAUXAnimInfo@@GM_NPEAUXModelNameMap@@@Z(obj, animInfo, infoIndex, dtime, isInstantInit, modelNameMap);
}

/*
==============
XAnimSetStructGameParameterByName
==============
*/

bool __fastcall XAnimSetStructGameParameterByName(DObj *obj, scr_string_t name, unsigned __int8 structureTypeID, const void *valuePointer)
{
  return ?XAnimSetStructGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@EPEBX@Z(obj, name, structureTypeID, valuePointer);
}

/*
==============
XAnimIsCustomNode
==============
*/

bool __fastcall XAnimIsCustomNode(const XAnim_s *anims, const XAnimInfo *animInfo)
{
  return ?XAnimIsCustomNode@@YA_NPEBUXAnim_s@@PEBUXAnimInfo@@@Z(anims, animInfo);
}

/*
==============
XAnimTreeIsParameterUsed
==============
*/

bool __fastcall XAnimTreeIsParameterUsed(const DObj *obj, unsigned __int16 parameterIndex)
{
  return ?XAnimTreeIsParameterUsed@@YA_NPEBUDObj@@G@Z(obj, parameterIndex);
}

/*
==============
XAnimFindConstantBindParameterByFieldNameAllBindings
==============
*/

const XAnimParameterBinding *__fastcall XAnimFindConstantBindParameterByFieldNameAllBindings(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return ?XAnimFindConstantBindParameterByFieldNameAllBindings@@YAPEBUXAnimParameterBinding@@PEBUXAnim_s@@IW4scr_string_t@@PEBUXAnimTypeFields@@@Z(anims, animIndex, fieldName, typeFields);
}

/*
==============
XAnimGetCustomNodeName
==============
*/

scr_string_t __fastcall XAnimGetCustomNodeName(XAnimNodeTypeID typeID)
{
  return ?XAnimGetCustomNodeName@@YA?AW4scr_string_t@@W4XAnimNodeTypeID@@@Z(typeID);
}

/*
==============
XAnimShouldIgnoreClientOnlyNode
==============
*/

bool __fastcall XAnimShouldIgnoreClientOnlyNode(const XAnimTree *tree, const XAnimInfo *nodeInfo)
{
  return ?XAnimShouldIgnoreClientOnlyNode@@YA_NPEBUXAnimTree@@PEBUXAnimInfo@@@Z(tree, nodeInfo);
}

/*
==============
XAnimCreateNode
==============
*/

bool __fastcall XAnimCreateNode(XAnimNodeTypeID nodeType, XAnimTree *tree, const XAnim_s *anims, unsigned int animIndex, unsigned __int16 *outInfoID)
{
  return ?XAnimCreateNode@@YA_NW4XAnimNodeTypeID@@PEAUXAnimTree@@PEBUXAnim_s@@IPEAG@Z(nodeType, tree, anims, animIndex, outInfoID);
}

/*
==============
XAnimSetNumGameParameters
==============
*/

void __fastcall XAnimSetNumGameParameters(XAnim_s *anims, unsigned __int16 numParameters)
{
  ?XAnimSetNumGameParameters@@YAXPEAUXAnim_s@@G@Z(anims, numParameters);
}

/*
==============
XAnimSetIntGameParameterByName
==============
*/

bool __fastcall XAnimSetIntGameParameterByName(DObj *obj, scr_string_t name, int value)
{
  return ?XAnimSetIntGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@H@Z(obj, name, value);
}

/*
==============
XAnimCloneParameterValues
==============
*/

void __fastcall XAnimCloneParameterValues(const XAnimTree *from, XAnimTree *to)
{
  ?XAnimCloneParameterValues@@YAXPEBUXAnimTree@@PEAU1@@Z(from, to);
}

/*
==============
XAnimWriteConstStringOfSize
==============
*/

void __fastcall XAnimWriteConstStringOfSize(MemoryFile *memFile, scr_string_t str)
{
  ?XAnimWriteConstStringOfSize@@YAXPEAUMemoryFile@@W4scr_string_t@@@Z(memFile, str);
}

/*
==============
XAnimRegisterNodeTypeInternal
==============
*/

XAnimNodeTypeID __fastcall XAnimRegisterNodeTypeInternal(XAnimNodeTypeInfo *typeInfo)
{
  return ?XAnimRegisterNodeTypeInternal@@YA?AW4XAnimNodeTypeID@@PEAUXAnimNodeTypeInfo@@@Z(typeInfo);
}

/*
==============
XAnimBindBoolToNodeParameter
==============
*/

bool __fastcall XAnimBindBoolToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, bool value)
{
  return ?XAnimBindBoolToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@_N@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimGetCustomNodeData
==============
*/

void *__fastcall XAnimGetCustomNodeData(const XAnim_s *anims, XAnimInfo *animInfo, unsigned int animIndex)
{
  return ?XAnimGetCustomNodeData@@YAPEAXPEBUXAnim_s@@PEAUXAnimInfo@@I@Z(anims, animInfo, animIndex);
}

/*
==============
XAnimSetIndirectByteGameParameterByIndex
==============
*/

void __fastcall XAnimSetIndirectByteGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const unsigned __int8 *valuePointer)
{
  ?XAnimSetIndirectByteGameParameterByIndex@@YAXPEAUDObj@@GPEBE@Z(obj, parameterIndex, valuePointer);
}

/*
==============
XAnimBindFieldValuesToMatchingNodeParameters
==============
*/

bool __fastcall XAnimBindFieldValuesToMatchingNodeParameters(XAnim_s *anims, unsigned int animIndex, unsigned __int8 typeID, const void *structPointer)
{
  return ?XAnimBindFieldValuesToMatchingNodeParameters@@YA_NPEAUXAnim_s@@IEPEBX@Z(anims, animIndex, typeID, structPointer);
}

/*
==============
XAnimBindFloatToNodeParameter
==============
*/

bool __fastcall XAnimBindFloatToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, float value)
{
  return ?XAnimBindFloatToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@M@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimReadParameterValues
==============
*/

void __fastcall XAnimReadParameterValues(XAnimTree *tree, MemoryFile *memFile)
{
  ?XAnimReadParameterValues@@YAXPEAUXAnimTree@@PEAUMemoryFile@@@Z(tree, memFile);
}

/*
==============
XAnimCustomNodeUpdateParameters
==============
*/

void __fastcall XAnimCustomNodeUpdateParameters(XAnimTree *tree, unsigned __int16 infoIndex)
{
  ?XAnimCustomNodeUpdateParameters@@YAXPEAUXAnimTree@@G@Z(tree, infoIndex);
}

/*
==============
XAnimCustomNodePrintDebugInfo
==============
*/

bool __fastcall XAnimCustomNodePrintDebugInfo(const XAnimTree *tree, const XAnim_s *anims, XAnimInfo *info, char *buffer, const int bufferSize, const int depth, int *inoutBufferPos)
{
  return ?XAnimCustomNodePrintDebugInfo@@YA_NPEBUXAnimTree@@PEBUXAnim_s@@PEAUXAnimInfo@@PEADHHPEAH@Z(tree, anims, info, buffer, bufferSize, depth, inoutBufferPos);
}

/*
==============
XAnimSetBoolGameParameterByName
==============
*/

bool __fastcall XAnimSetBoolGameParameterByName(DObj *obj, scr_string_t name, bool value)
{
  return ?XAnimSetBoolGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@_N@Z(obj, name, value);
}

/*
==============
XAnimShutdownNodeTypes
==============
*/

void XAnimShutdownNodeTypes(void)
{
  ?XAnimShutdownNodeTypes@@YAXXZ();
}

/*
==============
XAnimFindDynamicBindParameterByFieldName
==============
*/

const XAnimParameterBinding *__fastcall XAnimFindDynamicBindParameterByFieldName(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return ?XAnimFindDynamicBindParameterByFieldName@@YAPEBUXAnimParameterBinding@@PEBUXAnim_s@@IW4scr_string_t@@PEBUXAnimTypeFields@@@Z(anims, animIndex, fieldName, typeFields);
}

/*
==============
XAnimSetFloatGameParameterByName
==============
*/

bool __fastcall XAnimSetFloatGameParameterByName(DObj *obj, scr_string_t name, float value)
{
  return ?XAnimSetFloatGameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@M@Z(obj, name, value);
}

/*
==============
XAnimSetVec3GameParameterByName
==============
*/

bool __fastcall XAnimSetVec3GameParameterByName(DObj *obj, scr_string_t name, const vec3_t *value)
{
  return ?XAnimSetVec3GameParameterByName@@YA_NPEAUDObj@@W4scr_string_t@@AEBTvec3_t@@@Z(obj, name, value);
}

/*
==============
XAnimSetIndirectFloatGameParameterByIndex
==============
*/

void __fastcall XAnimSetIndirectFloatGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const float *valuePointer)
{
  ?XAnimSetIndirectFloatGameParameterByIndex@@YAXPEAUDObj@@GPEBM@Z(obj, parameterIndex, valuePointer);
}

/*
==============
XAnimCustomNodeInit
==============
*/

void __fastcall XAnimCustomNodeInit(const XAnim_s *anims, const XAnimOwner owner, unsigned int animIndex, XAnimInfo *animInfo, XAnimNodeTypeID nodeType)
{
  ?XAnimCustomNodeInit@@YAXPEBUXAnim_s@@W4XAnimOwner@@IPEAUXAnimInfo@@W4XAnimNodeTypeID@@@Z(anims, owner, animIndex, animInfo, nodeType);
}

/*
==============
XAnimBindVec3ToNodeParameter
==============
*/

bool __fastcall XAnimBindVec3ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, const vec3_t *value)
{
  return ?XAnimBindVec3ToNodeParameter@@YA_NPEAUXAnim_s@@IW4scr_string_t@@AEBTvec3_t@@@Z(anims, animIndex, nodeParameterName, value);
}

/*
==============
XAnimCustomNodeRestart
==============
*/

void __fastcall XAnimCustomNodeRestart(XAnimTree *tree, XAnimInfo *info)
{
  ?XAnimCustomNodeRestart@@YAXPEAUXAnimTree@@PEAUXAnimInfo@@@Z(tree, info);
}

/*
==============
XAnimCustomNodePostParse
==============
*/

bool __fastcall XAnimCustomNodePostParse(XAnim_s *anims, unsigned int animIndex)
{
  return ?XAnimCustomNodePostParse@@YA_NPEAUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimSetGameParameterNames
==============
*/

void __fastcall XAnimSetGameParameterNames(XAnim_s *anims, const scr_string_t **names, unsigned __int16 numParameters)
{
  ?XAnimSetGameParameterNames@@YAXPEAUXAnim_s@@PEAPEBW4scr_string_t@@G@Z(anims, names, numParameters);
}

/*
==============
XAnimSetIndirectVec3GameParameterByIndex
==============
*/

void __fastcall XAnimSetIndirectVec3GameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const vec3_t *valuePointer)
{
  ?XAnimSetIndirectVec3GameParameterByIndex@@YAXPEAUDObj@@GPEBTvec3_t@@@Z(obj, parameterIndex, valuePointer);
}

/*
==============
XAnimAddPublicNode
==============
*/

void __fastcall XAnimAddPublicNode(XAnim_s *anims, scr_string_t name, unsigned __int16 animIndex)
{
  ?XAnimAddPublicNode@@YAXPEAUXAnim_s@@W4scr_string_t@@G@Z(anims, name, animIndex);
}

/*
==============
XAnimSetByteGameParameterByIndex
==============
*/

void __fastcall XAnimSetByteGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, unsigned __int8 value)
{
  ?XAnimSetByteGameParameterByIndex@@YAXPEAUDObj@@GE@Z(obj, parameterIndex, value);
}

/*
==============
AddNodeParameterBinding
==============
*/
XAnimParameterBinding *AddNodeParameterBinding(XAnim_s *anims, XAnimBindingType type, unsigned int animIndex, const XAnimField *nodeField)
{
  const char *AnimTreeDebugName; 
  XAnimParameterBinding *v9; 
  XAnimParameterBinding *result; 
  __int64 v12; 
  unsigned int size; 

  if ( animIndex >= anims->size )
  {
    size = anims->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1591, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, size) )
      __debugbreak();
  }
  if ( (unsigned int)anims->numBindings + 1 > anims->maxBindings )
  {
    AnimTreeDebugName = XAnimGetAnimTreeDebugName(anims);
    LODWORD(v12) = anims->maxBindings;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1592, ASSERT_TYPE_ASSERT, "(anims->numBindings + 1 <= anims->maxBindings)", "%s\n\tMax anim parameter bindings (%d) reached for anim tree '%s'. If this is the viewmodel, do you need to increase MAX_WEAP_ANIM_TREE_BINDINGS ?", "anims->numBindings + 1 <= anims->maxBindings", v12, AnimTreeDebugName) )
      __debugbreak();
  }
  v9 = &anims->bindings[anims->numBindings++];
  v9->type = type;
  v9->destAnimIndex = truncate_cast<unsigned short,unsigned int>(animIndex);
  v9->destParameterOffset = truncate_cast<unsigned short,unsigned int>(nodeField->offset);
  result = v9;
  v9->destParameterSize = nodeField->size;
  anims->dirtyBindings = 1;
  return result;
}

/*
==============
CheckFieldIsNotBound
==============
*/
void CheckFieldIsNotBound(const XAnim_s *anims, unsigned int animIndex, const XAnimField *field)
{
  __int64 v4; 
  __int64 i; 
  XAnimParameterBinding *v7; 
  unsigned int offset; 
  XAnimNodeTypeID nodeType; 
  unsigned int v10; 
  const XAnimNodeTypeInfo *v11; 
  const char *v12; 
  XAnimNodeTypeID nodeTypeID; 
  const char *v14; 
  __int64 v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v19; 
  unsigned int size; 
  __int64 v21; 

  v4 = animIndex;
  if ( animIndex >= anims->size )
  {
    size = anims->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1570, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, size) )
      __debugbreak();
  }
  for ( i = 0i64; (unsigned int)i < anims->numBindings; i = (unsigned int)(i + 1) )
  {
    v7 = &anims->bindings[i];
    if ( v7->destAnimIndex == (_DWORD)v4 )
    {
      offset = field->offset;
      if ( offset > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)offset, "unsigned", field->offset) )
        __debugbreak();
      if ( v7->destParameterOffset == (_WORD)offset )
      {
        nodeType = anims->entries[v4].nodeType;
        if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 290, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
          __debugbreak();
        v10 = (unsigned __int8)nodeType - 2;
        if ( v10 >= s_xAnimTypeRegistry.numNodeTypes )
        {
          LODWORD(v19) = s_xAnimTypeRegistry.numNodeTypes;
          LODWORD(v17) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v17, v19) )
            __debugbreak();
        }
        v11 = s_xAnimTypeRegistry.nodeTypes[v10];
        v12 = SL_ConvertToString((scr_string_t)*field->name);
        nodeTypeID = v11->nodeTypeID;
        v14 = v12;
        if ( (unsigned __int8)(nodeTypeID - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
          __debugbreak();
        v15 = (unsigned int)(unsigned __int8)nodeTypeID - 2;
        if ( (unsigned int)v15 >= s_xAnimTypeRegistry.numNodeTypes )
        {
          LODWORD(v19) = s_xAnimTypeRegistry.numNodeTypes;
          LODWORD(v17) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v17, v19) )
            __debugbreak();
        }
        v16 = SL_ConvertToString((scr_string_t)*s_xAnimTypeRegistry.nodeTypes[v15]->name);
        LODWORD(v21) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1580, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "multiple game parameters bound to node parameter '%s.%s' (animIndex %d)", v16, v14, v21) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CopyGameParameterToNode
==============
*/
void CopyGameParameterToNode(const XAnimTree *tree, const XAnim_s *anims, XAnimInfo *const animInfo, const XAnimParameterBinding *binding, void *destNodeParameterPointer)
{
  __int64 sourceParameterIndex; 
  unsigned int maxParameters; 
  bool v11; 
  bool v12; 
  const char *AnimTreeDebugName; 
  const char *AnimDebugName; 
  const scr_string_t **gameParameterNames; 
  const char *v20; 
  bool boolValue; 
  int intValue; 
  _DWORD *structPointer; 
  __int64 v27; 
  __int64 v28; 
  int numGameParameters; 

  sourceParameterIndex = binding->dynamic.sourceParameterIndex;
  if ( binding->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 901, ASSERT_TYPE_ASSERT, "(binding->type == XAnimBindingType::DYNAMIC)", (const char *)&queryFormat, "binding->type == XAnimBindingType::DYNAMIC") )
    __debugbreak();
  if ( (unsigned int)sourceParameterIndex >= anims->numGameParameters )
  {
    numGameParameters = anims->numGameParameters;
    LODWORD(v27) = sourceParameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 902, ASSERT_TYPE_ASSERT, "(unsigned)( gameParamIndex ) < (unsigned)( anims->numGameParameters )", "gameParamIndex doesn't index anims->numGameParameters\n\t%i not in [0, %i)", v27, numGameParameters) )
      __debugbreak();
  }
  maxParameters = tree->maxParameters;
  v11 = (unsigned int)sourceParameterIndex < maxParameters;
  if ( (unsigned int)sourceParameterIndex >= maxParameters )
  {
    LODWORD(v28) = tree->maxParameters;
    LODWORD(v27) = sourceParameterIndex;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( gameParamIndex ) < (unsigned)( tree->maxParameters )", "gameParamIndex doesn't index tree->maxParameters\n\t%i not in [0, %i)", v27, v28);
    v11 = 0;
    if ( v12 )
      __debugbreak();
  }
  _RDI = tree->parameterValues;
  _RBX = 3 * sourceParameterIndex;
  switch ( _RDI[sourceParameterIndex].type )
  {
    case INVALID:
      _RBX = animInfo;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rbx+38h]
      }
      if ( v11 && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_silenceParamWarn, "xanim_silenceParamWarn") )
      {
        AnimTreeDebugName = XAnimGetAnimTreeDebugName(anims);
        AnimDebugName = XAnimGetAnimDebugName(anims, animInfo->animIndex);
        gameParameterNames = anims->gameParameterNames;
        if ( gameParameterNames )
          v20 = SL_ConvertToString((scr_string_t)*gameParameterNames[sourceParameterIndex]);
        else
          v20 = (char *)&queryFormat.fmt + 3;
        Com_PrintWarning(19, "Anim tree parameter (%2d) - '%s' has not been set for node '%s' in '%s' tree.\n", (unsigned int)sourceParameterIndex, v20, AnimDebugName, AnimTreeDebugName);
      }
      break;
    case BOOL_VALUE:
      boolValue = _RDI[sourceParameterIndex].boolValue;
      if ( binding->destParameterSize != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 833, ASSERT_TYPE_ASSERT, "(binding->destParameterSize == sizeof( T ))", (const char *)&queryFormat, "binding->destParameterSize == sizeof( T )") )
        __debugbreak();
      *(_BYTE *)destNodeParameterPointer = boolValue;
      break;
    case BYTE_VALUE:
      SetBoundValue_unsigned_char_(binding, destNodeParameterPointer, _RDI[sourceParameterIndex].byteValue);
      break;
    case BYTE_POINTER:
      SetBoundValue_unsigned_char_(binding, destNodeParameterPointer, *(_BYTE *)_RDI[sourceParameterIndex].structPointer);
      break;
    case INT_VALUE:
      intValue = _RDI[sourceParameterIndex].intValue;
      if ( binding->destParameterSize != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 833, ASSERT_TYPE_ASSERT, "(binding->destParameterSize == sizeof( T ))", (const char *)&queryFormat, "binding->destParameterSize == sizeof( T )") )
        __debugbreak();
      *(_DWORD *)destNodeParameterPointer = intValue;
      goto $LN33_42;
    case FLOAT_VALUE:
$LN33_42:
      __asm { vmovss  xmm2, dword ptr [rdi+rbx*8+8]; jumptable 0000000141978B05 case 5 }
      SetBoundValue_float_(binding, destNodeParameterPointer, *(float *)&_XMM2);
      break;
    case FLOAT_POINTER:
      _RAX = _RDI[sourceParameterIndex].structPointer;
      __asm { vmovss  xmm2, dword ptr [rax]; value }
      SetBoundValue_float_(binding, destNodeParameterPointer, *(float *)&_XMM2);
      break;
    case VEC3_VALUE:
      if ( binding->destParameterSize != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 943, ASSERT_TYPE_ASSERT, "(binding->destParameterSize == sizeof( vec3_t ))", (const char *)&queryFormat, "binding->destParameterSize == sizeof( vec3_t )") )
        __debugbreak();
      *(_DWORD *)destNodeParameterPointer = _RDI[sourceParameterIndex].intValue;
      *((_DWORD *)destNodeParameterPointer + 1) = LODWORD(_RDI[sourceParameterIndex].vec3Value.v[1]);
      *((_DWORD *)destNodeParameterPointer + 2) = LODWORD(_RDI[sourceParameterIndex].vec3Value.v[2]);
      break;
    case VEC3_POINTER:
      if ( binding->destParameterSize != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 948, ASSERT_TYPE_ASSERT, "(binding->destParameterSize == sizeof( vec3_t ))", (const char *)&queryFormat, "binding->destParameterSize == sizeof( vec3_t )") )
        __debugbreak();
      structPointer = _RDI[sourceParameterIndex].structPointer;
      *(_DWORD *)destNodeParameterPointer = *structPointer;
      *((_DWORD *)destNodeParameterPointer + 1) = structPointer[1];
      *((_DWORD *)destNodeParameterPointer + 2) = structPointer[2];
      break;
    case STRUCT_POINTER:
      CopyParameterFromStructField(tree, anims, binding, destNodeParameterPointer);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 957, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported input parameter type") )
        __debugbreak();
      break;
  }
}

/*
==============
CopyParameterFromStructField
==============
*/
void CopyParameterFromStructField(const XAnimTree *tree, const XAnim_s *anims, const XAnimParameterBinding *binding, void *destNodeParameterPointer)
{
  unsigned __int16 sourceParameterIndex; 
  unsigned __int16 numGameParameters; 
  unsigned __int16 v10; 
  unsigned __int16 maxParameters; 
  __int64 v12; 
  __int64 v13; 
  XAnimParameterValue *parameterValues; 
  const void *v15; 
  unsigned int gameStructTypeID; 
  const XAnimGameStructTypeInfo *v17; 
  scr_string_t fieldName; 
  int v19; 
  unsigned int numFields; 
  const XAnimField *fields; 
  const XAnimField *v22; 
  const char *v23; 
  __int64 v24; 
  __int64 destParameterSize; 
  const cpose_t *structPointer; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  unsigned __int16 size; 
  unsigned __int16 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int Src[6]; 
  const XAnimField *v47; 

  if ( binding->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 844, ASSERT_TYPE_ASSERT, "(binding->type == XAnimBindingType::DYNAMIC)", (const char *)&queryFormat, "binding->type == XAnimBindingType::DYNAMIC") )
    __debugbreak();
  sourceParameterIndex = binding->dynamic.sourceParameterIndex;
  numGameParameters = anims->numGameParameters;
  if ( sourceParameterIndex >= numGameParameters )
  {
    LODWORD(v43) = sourceParameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 846, ASSERT_TYPE_ASSERT, "(unsigned)( binding->dynamic.sourceParameterIndex ) < (unsigned)( anims->numGameParameters )", "binding->dynamic.sourceParameterIndex doesn't index anims->numGameParameters\n\t%i not in [0, %i)", v43, numGameParameters) )
      __debugbreak();
  }
  v10 = binding->dynamic.sourceParameterIndex;
  maxParameters = tree->maxParameters;
  if ( v10 >= maxParameters )
  {
    LODWORD(v44) = maxParameters;
    LODWORD(v43) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 847, ASSERT_TYPE_ASSERT, "(unsigned)( binding->dynamic.sourceParameterIndex ) < (unsigned)( tree->maxParameters )", "binding->dynamic.sourceParameterIndex doesn't index tree->maxParameters\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  v12 = binding->dynamic.sourceParameterIndex;
  v13 = v12;
  parameterValues = tree->parameterValues;
  if ( parameterValues[v12].gameStructTypeID == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 850, ASSERT_TYPE_ASSERT, "(inputParam->gameStructTypeID != XANIM_GAME_STRUCT_TYPE_ID_INVALID)", "%s\n\tunrecognized type for game parameter", "inputParam->gameStructTypeID != XANIM_GAME_STRUCT_TYPE_ID_INVALID") )
    __debugbreak();
  if ( binding->constant.uint32Value )
  {
    gameStructTypeID = parameterValues[v13].gameStructTypeID;
    if ( gameStructTypeID >= s_xAnimTypeRegistry.numGameTypes )
    {
      LODWORD(v44) = s_xAnimTypeRegistry.numGameTypes;
      LODWORD(v43) = parameterValues[v13].gameStructTypeID;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( typeID ) < (unsigned)( registry->numGameTypes )", "typeID doesn't index registry->numGameTypes\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    v17 = s_xAnimTypeRegistry.gameTypes[(unsigned __int8)gameStructTypeID];
    fieldName = binding->dynamic.fieldName;
    v19 = 0;
    numFields = v17->fields.numFields;
    if ( numFields )
    {
      fields = v17->fields.fields;
      while ( 1 )
      {
        v22 = &fields[v19];
        if ( *v22->name == fieldName )
          break;
        if ( ++v19 >= numFields )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v23 = SL_ConvertToString(fieldName);
      v24 = parameterValues[v13].gameStructTypeID;
      if ( (unsigned int)v24 >= s_xAnimTypeRegistry.numGameTypes )
      {
        LODWORD(v44) = s_xAnimTypeRegistry.numGameTypes;
        LODWORD(v43) = parameterValues[v13].gameStructTypeID;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 269, ASSERT_TYPE_ASSERT, "(unsigned)( typeID ) < (unsigned)( registry->numGameTypes )", "typeID doesn't index registry->numGameTypes\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      LODWORD(v44) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 863, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "game parameter structure of type '%s' (index %d) has no field '%s'", s_xAnimTypeRegistry.gameTypes[v24]->debugName, v44, v23) )
        __debugbreak();
      v22 = v47;
    }
    if ( *(_WORD *)v22->type == 10 )
    {
      destParameterSize = binding->destParameterSize;
      if ( v22->size != destParameterSize + 4 )
      {
        LODWORD(v45) = v22->size;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 869, ASSERT_TYPE_ASSERT, "( field->size ) == ( binding->destParameterSize + sizeof(vec_t) )", "%s == %s\n\t%i, %i", "field->size", "binding->destParameterSize + sizeof(vec_t)", v45, destParameterSize + 4) )
          __debugbreak();
      }
      structPointer = (const cpose_t *)parameterValues[v13].structPointer;
      if ( !structPointer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !structPointer->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(structPointer->origin.Get_origin, structPointer);
      FunctionPointer_origin(&structPointer->origin.origin.origin, (vec3_t *)Src);
      if ( structPointer->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, [rsp+98h+Src]
          vcvtdq2pd xmm0, xmm0
          vmovsd  xmm3, cs:__real@3f30000000000000
          vmulsd  xmm0, xmm0, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  [rsp+98h+Src], xmm1
          vmovd   xmm2, [rsp+98h+var_3C]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  [rsp+98h+var_3C], xmm1
          vmovd   xmm2, [rsp+98h+var_38]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  [rsp+98h+var_38], xmm1
        }
      }
      memcpy_0(destNodeParameterPointer, Src, binding->destParameterSize);
      memset(Src, 0, 0xCui64);
    }
    else
    {
      size = v22->size;
      v42 = binding->destParameterSize;
      if ( size != v42 )
      {
        LODWORD(v45) = size;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 877, ASSERT_TYPE_ASSERT, "( field->size ) == ( binding->destParameterSize )", "%s == %s\n\t%i, %i", "field->size", "binding->destParameterSize", v45, v42) )
          __debugbreak();
      }
      memcpy_0(destNodeParameterPointer, (char *)parameterValues[v13].structPointer + v22->offset, v22->size);
    }
  }
  else
  {
    v15 = parameterValues[v13].structPointer;
    if ( binding->destParameterSize != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 833, ASSERT_TYPE_ASSERT, "(binding->destParameterSize == sizeof( T ))", (const char *)&queryFormat, "binding->destParameterSize == sizeof( T )") )
      __debugbreak();
    *(_QWORD *)destNodeParameterPointer = v15;
  }
}

/*
==============
GetGameParameterValue
==============
*/
XAnimParameterValue *GetGameParameterValue(DObj *obj, unsigned __int16 parameterIndex)
{
  unsigned __int16 numGameParameters; 
  unsigned __int16 maxParameters; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 

  numGameParameters = obj->tree->anims->numGameParameters;
  if ( parameterIndex >= numGameParameters )
  {
    v10 = numGameParameters;
    v8 = parameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1880, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( obj->tree->anims->numGameParameters )", "parameterIndex doesn't index obj->tree->anims->numGameParameters\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  maxParameters = obj->tree->maxParameters;
  if ( parameterIndex >= maxParameters )
  {
    LODWORD(v9) = maxParameters;
    LODWORD(v7) = parameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1881, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( obj->tree->maxParameters )", "parameterIndex doesn't index obj->tree->maxParameters\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return &obj->tree->parameterValues[parameterIndex];
}

/*
==============
SetConstantNodeParameterByName
==============
*/
char SetConstantNodeParameterByName(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeFieldName, const void *value, unsigned __int64 valueSize, XAnimFieldType expectedFieldType)
{
  __int64 v7; 
  XAnimNodeTypeID nodeType; 
  __int64 v11; 
  const XAnimNodeTypeInfo *v12; 
  int v13; 
  unsigned int numFields; 
  const XAnimField *fields; 
  const XAnimField *v16; 
  const char *v17; 
  XAnimNodeTypeID v18; 
  const char *v19; 
  __int64 v20; 
  const char *v21; 
  XAnimParameterBinding *v23; 
  __int64 v24; 
  __int64 v25; 

  v7 = animIndex;
  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1733, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, anims->size) )
    __debugbreak();
  if ( valueSize > 0xC )
  {
    LODWORD(v25) = 12;
    LODWORD(v24) = valueSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1734, ASSERT_TYPE_ASSERT, "( valueSize ) <= ( sizeof( binding->constant.rawBytes ) )", "valueSize not in [0, sizeof( binding->constant.rawBytes )]\n\t%u not in [0, %u]", v24, v25) )
      __debugbreak();
  }
  nodeType = anims->entries[v7].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v11 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v11 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v25) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v24) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v12 = s_xAnimTypeRegistry.nodeTypes[v11];
  v13 = 0;
  numFields = v12->fields.numFields;
  if ( numFields )
  {
    fields = v12->fields.fields;
    while ( 1 )
    {
      v16 = &fields[v13];
      if ( *v16->name == nodeFieldName )
        break;
      if ( ++v13 >= numFields )
        goto LABEL_17;
    }
    CheckFieldIsNotBound(anims, v7, &fields[v13]);
    if ( *(_WORD *)v16->type != (_WORD)expectedFieldType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1745, ASSERT_TYPE_ASSERT, "(nodeField->type == expectedFieldType)", (const char *)&queryFormat, "nodeField->type == expectedFieldType") )
      __debugbreak();
    v23 = AddNodeParameterBinding(anims, CONSTANT, v7, v16);
    memcpy_0(&v23->8, value, valueSize);
    return 1;
  }
  else
  {
LABEL_17:
    v17 = SL_ConvertToString(nodeFieldName);
    v18 = anims->entries[v7].nodeType;
    v19 = v17;
    if ( (unsigned __int8)(v18 - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
      __debugbreak();
    v20 = (unsigned int)(unsigned __int8)v18 - 2;
    if ( (unsigned int)v20 >= s_xAnimTypeRegistry.numNodeTypes )
    {
      LODWORD(v25) = s_xAnimTypeRegistry.numNodeTypes;
      LODWORD(v24) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v21 = SL_ConvertToString((scr_string_t)*s_xAnimTypeRegistry.nodeTypes[v20]->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1740, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "missing custom node parameter '%s.%s'", v21, v19) )
      __debugbreak();
    return 0;
  }
}

/*
==============
XAnimAddPublicNode
==============
*/
void XAnimAddPublicNode(XAnim_s *anims, scr_string_t name, unsigned __int16 animIndex)
{
  unsigned __int16 numPublicNodes; 
  unsigned __int16 maxPublicNodes; 
  const scr_string_t *v8; 
  int v9; 
  int v10; 
  const scr_string_t *v11; 
  __int64 v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 675, ASSERT_TYPE_ASSERT, "(anims != 0)", (const char *)&queryFormat, "anims != NULL") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 676, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  numPublicNodes = anims->numPublicNodes;
  maxPublicNodes = anims->maxPublicNodes;
  if ( numPublicNodes >= maxPublicNodes )
  {
    LODWORD(v15) = numPublicNodes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 677, ASSERT_TYPE_ASSERT, "(unsigned)( anims->numPublicNodes ) < (unsigned)( anims->maxPublicNodes )", "anims->numPublicNodes doesn't index anims->maxPublicNodes\n\t%i not in [0, %i)", v15, maxPublicNodes) )
      __debugbreak();
  }
  if ( animIndex >= anims->size )
  {
    LODWORD(v16) = anims->size;
    LODWORD(v15) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 678, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v8 = XAnimRegisterConstString(name);
  LOWORD(v9) = anims->numPublicNodes;
  v10 = 0;
  v11 = v8;
  if ( (_WORD)v9 )
  {
    v12 = 0i64;
    do
    {
      if ( anims->publicNodes[v12].name == v11 )
      {
        v13 = SL_ConvertToString((scr_string_t)*v11);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 685, ASSERT_TYPE_ASSERT, "(anims->publicNodes[i].name != constName)", "%s\n\tfound duplicate public node name '%s'", "anims->publicNodes[i].name != constName", v13) )
          __debugbreak();
      }
      v9 = anims->numPublicNodes;
      ++v10;
      ++v12;
    }
    while ( v10 < v9 );
  }
  v14 = (unsigned __int16)v9;
  anims->publicNodes[v14].name = v11;
  anims->publicNodes[v14].nodeIndex = animIndex;
  anims->publicNodes[v14].nodeType = anims->entries[animIndex].nodeType;
  ++anims->numPublicNodes;
}

/*
==============
XAnimAllocateNodeMemory
==============
*/
_BOOL8 XAnimAllocateNodeMemory(XAnimTree *tree, unsigned __int64 allocationSize, unsigned __int16 *outInfoID)
{
  bool v6; 
  ScopedCriticalSection v8; 

  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_XANIM_ALLOC, SCOPED_CRITSECT_NORMAL);
  v6 = XAnimAllocInfoMemory(allocationSize, outInfoID);
  if ( v6 )
    XAnimTrackInfoAllocation(tree);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
  return v6;
}

/*
==============
XAnimBindArrayToNodeParameter
==============
*/
char XAnimBindArrayToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, scr_string_t value, const XAnimFieldType fieldType)
{
  XAnimFieldType expectedFieldType; 
  scr_string_t valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = fieldType;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 4ui64, expectedFieldType);
}

/*
==============
XAnimBindBoolToNodeParameter
==============
*/
char XAnimBindBoolToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, bool value)
{
  XAnimFieldType expectedFieldType; 
  bool valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 1;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 1ui64, expectedFieldType);
}

/*
==============
XAnimBindByteToNodeParameter
==============
*/
char XAnimBindByteToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, unsigned __int8 value)
{
  XAnimFieldType expectedFieldType; 
  unsigned __int8 valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 2;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 1ui64, expectedFieldType);
}

/*
==============
XAnimBindFieldValuesToMatchingNodeParameters
==============
*/
bool XAnimBindFieldValuesToMatchingNodeParameters(XAnim_s *anims, unsigned int animIndex, unsigned __int8 typeID, const void *structPointer)
{
  __int64 v5; 
  const XAnimGameStructTypeInfo *v7; 
  XAnimNodeTypeID nodeType; 
  __int64 v9; 
  const XAnimNodeTypeInfo *v10; 
  int v11; 
  unsigned int v12; 
  unsigned int i; 
  unsigned int numFields; 
  int v15; 
  __int64 v16; 
  const XAnimField *v17; 
  char *v18; 
  XAnimParameterBinding *v19; 
  __int64 v21; 
  __int64 v23; 
  unsigned int size; 
  int v26; 

  v5 = animIndex;
  if ( animIndex >= anims->size )
  {
    size = anims->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1836, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, size) )
      __debugbreak();
  }
  if ( typeID >= s_xAnimTypeRegistry.numGameTypes )
  {
    LODWORD(v23) = s_xAnimTypeRegistry.numGameTypes;
    LODWORD(v21) = typeID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( typeID ) < (unsigned)( registry->numGameTypes )", "typeID doesn't index registry->numGameTypes\n\t%i not in [0, %i)", v21, v23) )
      __debugbreak();
  }
  v7 = s_xAnimTypeRegistry.gameTypes[typeID];
  nodeType = anims->entries[v5].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v9 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v9 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v23) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v21) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v21, v23) )
      __debugbreak();
  }
  v10 = s_xAnimTypeRegistry.nodeTypes[v9];
  v11 = 0;
  v12 = 0;
  v26 = 0;
  for ( i = 0; i < v7->fields.numFields; ++i )
  {
    numFields = v10->fields.numFields;
    v15 = 0;
    v16 = (__int64)&v7->fields.fields[i];
    if ( numFields )
    {
      while ( 1 )
      {
        v17 = &v10->fields.fields[(v15 + v12) % numFields];
        if ( *v17->name == **(_DWORD **)v16 )
          break;
        if ( ++v15 >= numFields )
        {
          v11 = v26;
          goto LABEL_19;
        }
      }
      v12 = (v15 + v12) % numFields + 1;
      v18 = (char *)structPointer + *(unsigned int *)(v16 + 8);
      CheckFieldIsNotBound(anims, v5, v17);
      v19 = AddNodeParameterBinding(anims, CONSTANT, v5, v17);
      memcpy_0(&v19->8, v18, *(unsigned __int16 *)(v16 + 12));
      v11 = ++v26;
    }
LABEL_19:
    ;
  }
  return v11 != 0;
}

/*
==============
XAnimBindFloatToNodeParameter
==============
*/

char __fastcall XAnimBindFloatToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, double value)
{
  XAnimFieldType expectedFieldType; 
  int valuea; 

  __asm { vmovss  [rsp+value], xmm3 }
  LOWORD(expectedFieldType) = 7;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 4ui64, expectedFieldType);
}

/*
==============
XAnimBindGameParameterFieldToNodeParameterByIndex
==============
*/

bool __fastcall XAnimBindGameParameterFieldToNodeParameterByIndex(XAnim_s *anims, unsigned int animIndex, unsigned __int16 gameParameterIndex, scr_string_t gameParameterFieldName, scr_string_t nodeParameterName)
{
  return XAnimBindGameParameterToNodeParameterInternal(anims, animIndex, gameParameterIndex, gameParameterFieldName, nodeParameterName);
}

/*
==============
XAnimBindGameParameterFieldToNodeParameterByName
==============
*/
bool XAnimBindGameParameterFieldToNodeParameterByName(XAnim_s *anims, unsigned int animIndex, scr_string_t gameParameterName, scr_string_t gameParameterFieldName, scr_string_t nodeParameterName)
{
  const char *v9; 
  unsigned __int16 outParameterIndex[12]; 

  if ( XAnimFindGameParameterIndexByName(anims, gameParameterName, outParameterIndex) )
    return XAnimBindGameParameterToNodeParameterInternal(anims, animIndex, outParameterIndex[0], gameParameterFieldName, nodeParameterName);
  v9 = SL_ConvertToString(gameParameterName);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1668, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "missing game parameter '%s'", v9) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimBindGameParameterToNodeParameterByIndex
==============
*/
bool XAnimBindGameParameterToNodeParameterByIndex(XAnim_s *anims, unsigned int animIndex, unsigned __int16 gameParameterIndex, scr_string_t nodeParameterName)
{
  return XAnimBindGameParameterToNodeParameterInternal(anims, animIndex, gameParameterIndex, (scr_string_t)0, nodeParameterName);
}

/*
==============
XAnimBindGameParameterToNodeParameterByName
==============
*/
bool XAnimBindGameParameterToNodeParameterByName(XAnim_s *anims, unsigned int animIndex, scr_string_t gameParameterName, scr_string_t nodeParameterName)
{
  const char *v8; 
  unsigned __int16 outParameterIndex[12]; 

  if ( XAnimFindGameParameterIndexByName(anims, gameParameterName, outParameterIndex) )
    return XAnimBindGameParameterToNodeParameterInternal(anims, animIndex, outParameterIndex[0], (scr_string_t)0, nodeParameterName);
  v8 = SL_ConvertToString(gameParameterName);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1648, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "missing game parameter '%s'", v8) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimBindGameParameterToNodeParameterInternal
==============
*/
char XAnimBindGameParameterToNodeParameterInternal(XAnim_s *anims, unsigned int animIndex, unsigned __int16 gameParameterIndex, scr_string_t gameParameterFieldName, scr_string_t nodeParameterName)
{
  unsigned __int16 numGameParameters; 
  __int64 v7; 
  XAnimNodeTypeID nodeType; 
  __int64 v11; 
  const XAnimNodeTypeInfo *v12; 
  int v13; 
  unsigned int numFields; 
  const XAnimField *fields; 
  const XAnimField *v16; 
  const char *v17; 
  XAnimNodeTypeID v18; 
  const char *v19; 
  __int64 v20; 
  const char *v21; 
  XAnimParameterBinding *v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 

  numGameParameters = anims->numGameParameters;
  v7 = animIndex;
  if ( gameParameterIndex >= numGameParameters )
  {
    v27 = numGameParameters;
    v25 = gameParameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1616, ASSERT_TYPE_ASSERT, "(unsigned)( gameParameterIndex ) < (unsigned)( anims->numGameParameters )", "gameParameterIndex doesn't index anims->numGameParameters\n\t%i not in [0, %i)", v25, v27) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= anims->size )
  {
    LODWORD(v26) = anims->size;
    LODWORD(v24) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1617, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v24, v26) )
      __debugbreak();
  }
  nodeType = anims->entries[v7].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v11 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v11 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v26) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v24) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v24, v26) )
      __debugbreak();
  }
  v12 = s_xAnimTypeRegistry.nodeTypes[v11];
  v13 = 0;
  numFields = v12->fields.numFields;
  if ( numFields )
  {
    fields = v12->fields.fields;
    while ( 1 )
    {
      v16 = &fields[v13];
      if ( *v16->name == nodeParameterName )
        break;
      if ( ++v13 >= numFields )
        goto LABEL_17;
    }
    CheckFieldIsNotBound(anims, v7, &fields[v13]);
    v23 = AddNodeParameterBinding(anims, DYNAMIC, v7, v16);
    v23->constant.uint32Value = gameParameterFieldName;
    if ( gameParameterIndex > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)gameParameterIndex, "unsigned", gameParameterIndex) )
      __debugbreak();
    v23->dynamic.sourceParameterIndex = (unsigned __int8)gameParameterIndex;
    return 1;
  }
  else
  {
LABEL_17:
    v17 = SL_ConvertToString(nodeParameterName);
    v18 = anims->entries[v7].nodeType;
    v19 = v17;
    if ( (unsigned __int8)(v18 - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
      __debugbreak();
    v20 = (unsigned int)(unsigned __int8)v18 - 2;
    if ( (unsigned int)v20 >= s_xAnimTypeRegistry.numNodeTypes )
    {
      LODWORD(v26) = s_xAnimTypeRegistry.numNodeTypes;
      LODWORD(v24) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v24, v26) )
        __debugbreak();
    }
    v21 = SL_ConvertToString((scr_string_t)*s_xAnimTypeRegistry.nodeTypes[v20]->name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "attempt to bind game parameter to missing custom node parameter '%s.%s'", v21, v19) )
      __debugbreak();
    return 0;
  }
}

/*
==============
XAnimBindInt16ToNodeParameter
==============
*/
char XAnimBindInt16ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, __int16 value)
{
  XAnimFieldType expectedFieldType; 
  __int16 valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 6;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 2ui64, expectedFieldType);
}

/*
==============
XAnimBindInt32ToNodeParameter
==============
*/
char XAnimBindInt32ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, int value)
{
  XAnimFieldType expectedFieldType; 
  int valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 4;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 4ui64, expectedFieldType);
}

/*
==============
XAnimBindPointerToNodeParameter
==============
*/
char XAnimBindPointerToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, const void *value)
{
  XAnimFieldType expectedFieldType; 
  const void *valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 0;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 8ui64, expectedFieldType);
}

/*
==============
XAnimBindStringToNodeParameter
==============
*/
char XAnimBindStringToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, scr_string_t value)
{
  XAnimFieldType expectedFieldType; 
  scr_string_t valuea; 

  valuea = value;
  XAnimRegisterConstString(value);
  LOWORD(expectedFieldType) = 11;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 4ui64, expectedFieldType);
}

/*
==============
XAnimBindUInt16ToNodeParameter
==============
*/
char XAnimBindUInt16ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, unsigned __int16 value)
{
  XAnimFieldType expectedFieldType; 
  unsigned __int16 valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 5;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 2ui64, expectedFieldType);
}

/*
==============
XAnimBindUInt32ToNodeParameter
==============
*/
char XAnimBindUInt32ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, unsigned int value)
{
  XAnimFieldType expectedFieldType; 
  unsigned int valuea; 

  valuea = value;
  LOWORD(expectedFieldType) = 3;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, &valuea, 4ui64, expectedFieldType);
}

/*
==============
XAnimBindVec2ToNodeParameter
==============
*/
char XAnimBindVec2ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, const vec2_t *value)
{
  XAnimFieldType expectedFieldType; 

  LOWORD(expectedFieldType) = 8;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, value, 8ui64, expectedFieldType);
}

/*
==============
XAnimBindVec3ToNodeParameter
==============
*/
char XAnimBindVec3ToNodeParameter(XAnim_s *anims, unsigned int animIndex, scr_string_t nodeParameterName, const vec3_t *value)
{
  XAnimFieldType expectedFieldType; 

  LOWORD(expectedFieldType) = 9;
  return SetConstantNodeParameterByName(anims, animIndex, nodeParameterName, value, 0xCui64, expectedFieldType);
}

/*
==============
XAnimCloneCustomNodeData
==============
*/
void XAnimCloneCustomNodeData(const XAnimInfo *fromInfo, XAnimInfo *toInfo, const XAnimTree *fromTree, const XAnimTree *toTree)
{
  const XAnim_s *SubTreeAnims; 
  XAnimEntry *v8; 
  XAnimNodeTypeID nodeType; 
  const XAnim_s *v10; 
  XAnimEntry *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  SubTreeAnims = XAnimGetSubTreeAnims(fromTree, (const XAnimSubTreeID)fromInfo->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 420, ASSERT_TYPE_ASSERT, "(fromAnims)", (const char *)&queryFormat, "fromAnims") )
    __debugbreak();
  if ( fromInfo->animIndex >= SubTreeAnims->size )
  {
    LODWORD(v13) = fromInfo->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 421, ASSERT_TYPE_ASSERT, "(unsigned)( fromInfo->animIndex ) < (unsigned)( fromAnims->size )", "fromInfo->animIndex doesn't index fromAnims->size\n\t%i not in [0, %i)", v13, SubTreeAnims->size) )
      __debugbreak();
  }
  v8 = &SubTreeAnims->entries[fromInfo->animIndex];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 423, ASSERT_TYPE_ASSERT, "(fromAnim)", (const char *)&queryFormat, "fromAnim") )
    __debugbreak();
  nodeType = v8->nodeType;
  if ( (unsigned __int8)(v8->nodeType - 2) <= 0xFCu )
  {
    v10 = XAnimGetSubTreeAnims(toTree, (const XAnimSubTreeID)toInfo->subTreeID);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 430, ASSERT_TYPE_ASSERT, "(toAnims)", (const char *)&queryFormat, "toAnims") )
      __debugbreak();
    if ( toInfo->animIndex >= v10->size )
    {
      LODWORD(v14) = v10->size;
      LODWORD(v13) = toInfo->animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 431, ASSERT_TYPE_ASSERT, "(unsigned)( toInfo->animIndex ) < (unsigned)( toAnims->size )", "toInfo->animIndex doesn't index toAnims->size\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v11 = &v10->entries[toInfo->animIndex];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 433, ASSERT_TYPE_ASSERT, "(toAnim)", (const char *)&queryFormat, "toAnim") )
      __debugbreak();
    if ( nodeType != v11->nodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 435, ASSERT_TYPE_ASSERT, "(fromNodeType == toAnim->nodeType)", (const char *)&queryFormat, "fromNodeType == toAnim->nodeType") )
      __debugbreak();
    v12 = (unsigned int)(unsigned __int8)nodeType - 2;
    if ( (unsigned int)v12 >= s_xAnimTypeRegistry.numNodeTypes )
    {
      LODWORD(v14) = s_xAnimTypeRegistry.numNodeTypes;
      LODWORD(v13) = (unsigned __int8)nodeType - 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    memcpy_0((char *)toInfo + s_xAnimTypeRegistry.nodeTypes[v12]->dataOffset, (char *)fromInfo + s_xAnimTypeRegistry.nodeTypes[v12]->dataOffset, s_xAnimTypeRegistry.nodeTypes[v12]->nodeDataSize);
  }
}

/*
==============
XAnimCloneParameterValues
==============
*/
void XAnimCloneParameterValues(const XAnimTree *from, XAnimTree *to)
{
  XAnimCloneParameterValuesInternal(from, to, 0);
}

/*
==============
XAnimCloneParameterValuesFromServerToClient
==============
*/
void XAnimCloneParameterValuesFromServerToClient(const XAnimTree *serverTree, XAnimTree *clientTree)
{
  if ( serverTree->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1289, ASSERT_TYPE_ASSERT, "(serverTree->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "serverTree->owner == XAnimOwner::SERVER") )
    __debugbreak();
  if ( clientTree->owner[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1290, ASSERT_TYPE_ASSERT, "(clientTree->owner == XAnimOwner::CLIENT)", (const char *)&queryFormat, "clientTree->owner == XAnimOwner::CLIENT") )
    __debugbreak();
  XAnimCloneParameterValuesInternal(serverTree, clientTree, 1);
}

/*
==============
XAnimCloneParameterValuesInternal
==============
*/
void XAnimCloneParameterValuesInternal(const XAnimTree *from, const XAnimTree *to, bool fromServerToClient)
{
  XAnim_s *anims; 
  unsigned __int16 maxParameters; 
  unsigned __int16 numGameParameters; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  __int64 v13; 
  int v14; 
  unsigned int type; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  int v23; 

  anims = from->anims;
  maxParameters = from->maxParameters;
  numGameParameters = anims->numGameParameters;
  v9 = to->maxParameters;
  if ( maxParameters != v9 )
  {
    v23 = v9;
    v22 = maxParameters;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1259, ASSERT_TYPE_ASSERT, "( from->maxParameters ) == ( to->maxParameters )", "%s == %s\n\t%i, %i", "from->maxParameters", "to->maxParameters", v22, v23) )
      __debugbreak();
  }
  v10 = from->anims->numGameParameters;
  v11 = from->maxParameters;
  if ( v10 > v11 )
  {
    LODWORD(v21) = v11;
    LODWORD(v20) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1260, ASSERT_TYPE_ASSERT, "( from->anims->numGameParameters ) <= ( from->maxParameters )", "from->anims->numGameParameters not in [0, from->maxParameters]\n\t%u not in [0, %u]", v20, v21) )
      __debugbreak();
  }
  _RAX = 0i64;
  if ( numGameParameters )
  {
    v13 = numGameParameters;
    v14 = 840;
    do
    {
      _R8 = from->parameterValues;
      _R9 = to->parameterValues;
      if ( !fromServerToClient || ((type = (unsigned __int8)_R8[_RAX].type, (unsigned __int8)type > 9u) || !_bittest(&v14, type)) && (_BYTE)type )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r8+rax]
          vmovups xmmword ptr [r9+rax], xmm0
          vmovsd  xmm1, qword ptr [r8+rax+10h]
          vmovsd  qword ptr [r9+rax+10h], xmm1
        }
      }
      ++_RAX;
      --v13;
    }
    while ( v13 );
  }
}

/*
==============
XAnimCreateNode
==============
*/
bool XAnimCreateNode(XAnimNodeTypeID nodeType, XAnimTree *tree, const XAnim_s *anims, unsigned int animIndex, unsigned __int16 *outInfoID)
{
  __int64 v5; 
  unsigned __int8 v9; 
  bool v10; 
  const XAnimNodeTypeInfo *NodeTypeInfo; 
  bool result; 
  XAnimInfo *AnimInfo; 
  bool v14; 
  ScopedCriticalSection v15; 

  v5 = animIndex;
  if ( !outInfoID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1096, ASSERT_TYPE_ASSERT, "(outInfoID != 0)", (const char *)&queryFormat, "outInfoID != NULL", -2i64) )
    __debugbreak();
  v9 = tree->owner[0];
  v10 = v9 != 1 && ((__int64)anims->entries[v5].parts & 0x40) != 0;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu || v10 )
  {
    ScopedCriticalSection::ScopedCriticalSection(&v15, CRITSECT_XANIM_ALLOC, SCOPED_CRITSECT_NORMAL);
    v14 = XAnimAllocInfoMemory(0x60ui64, outInfoID);
    if ( v14 )
      XAnimTrackInfoAllocation(tree);
    ScopedCriticalSection::~ScopedCriticalSection(&v15);
    return v14;
  }
  else
  {
    NodeTypeInfo = XAnimTypeRegistry_GetNodeTypeInfo(&s_xAnimTypeRegistry, nodeType);
    result = XAnimAllocateNodeMemory(tree, NodeTypeInfo->nodeAllocationSize, outInfoID);
    if ( result )
    {
      AnimInfo = XAnimGetAnimInfo(*outInfoID);
      XAnimCustomNodeInit(anims, (const XAnimOwner)v9, v5, AnimInfo, nodeType);
      tree->parametersDirty = 1;
      return 1;
    }
  }
  return result;
}

/*
==============
XAnimCustomNode
==============
*/
void XAnimCustomNode(scr_string_t customNodeTypeName, XAnim_s *anims, unsigned int animIndex, const char *name, unsigned int children, unsigned int num, unsigned int flags, const XAnimSyncGroupID syncGroup, bool allowAllocs)
{
  __int64 v10; 
  __int64 v13; 
  const XAnimNodeTypeInfo *v14; 
  const char *v15; 
  XAnimNodeTypeID nodeTypeID; 
  XAnimSyncGroupID v17; 

  v10 = animIndex;
  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2105, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, anims->size) )
    __debugbreak();
  v13 = 0i64;
  if ( s_xAnimTypeRegistry.numNodeTypes )
  {
    while ( 1 )
    {
      v14 = s_xAnimTypeRegistry.nodeTypes[v13];
      if ( *v14->name == customNodeTypeName )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= s_xAnimTypeRegistry.numNodeTypes )
        goto LABEL_7;
    }
    nodeTypeID = v14->nodeTypeID;
    LOBYTE(v17) = syncGroup;
    XAnimBlend(anims, v10, name, children, num, flags, v17, allowAllocs);
    anims->entries[v10].nodeType = nodeTypeID;
  }
  else
  {
LABEL_7:
    v15 = SL_ConvertToString(customNodeTypeName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441B7278, 279i64, v15);
  }
}

/*
==============
XAnimCustomNodeCalc
==============
*/

void __fastcall XAnimCustomNodeCalc(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, double weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const XAnim_s *SubTreeAnims; 
  const XAnim_s *v12; 
  XAnimNodeTypeID nodeType; 
  __int64 v14; 
  const XAnimNodeTypeInfo *v15; 
  void (__fastcall *calc)(void *, XAnimCalcAnimInfo *, const DObj *, const XAnimInfo *, float, bool, XAnimCalcBuffer *); 
  int fmt; 
  __int64 v19; 
  int animIndex; 
  __int64 v21; 
  unsigned int size; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
  v12 = SubTreeAnims;
  if ( animInfo->animIndex >= SubTreeAnims->size )
  {
    size = SubTreeAnims->size;
    animIndex = animInfo->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 499, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, size) )
      __debugbreak();
  }
  nodeType = v12->entries[animInfo->animIndex].nodeType;
  if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
  {
    v14 = (unsigned int)(unsigned __int8)nodeType - 2;
    if ( (unsigned int)v14 >= s_xAnimTypeRegistry.numNodeTypes )
    {
      LODWORD(v21) = s_xAnimTypeRegistry.numNodeTypes;
      LODWORD(v19) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v19, v21) )
        __debugbreak();
    }
    v15 = s_xAnimTypeRegistry.nodeTypes[v14];
    calc = v15->functions.calc;
    if ( calc )
    {
      LOBYTE(v19) = bNormQuat;
      __asm { vmovss  dword ptr [rsp+58h+fmt], xmm6 }
      ((void (__fastcall *)(char *, XAnimCalcAnimInfo *, const DObj *, const XAnimInfo *, int, _DWORD, XAnimCalcBuffer *))calc)((char *)animInfo + v15->dataOffset, animCalcInfo, obj, animInfo, fmt, v19, destBuffer);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
XAnimCustomNodeInit
==============
*/
void XAnimCustomNodeInit(const XAnim_s *anims, const XAnimOwner owner, unsigned int animIndex, XAnimInfo *animInfo, XAnimNodeTypeID nodeType)
{
  __int64 v7; 
  __int64 v8; 
  const XAnimNodeTypeInfo *v9; 
  __int64 dataOffset; 
  char *v11; 
  unsigned int numBindings; 
  unsigned __int16 bindingIndex; 
  unsigned int v14; 
  __int64 v15; 
  XAnimParameterBinding *v16; 
  void (__fastcall *init)(void *, const XAnim_s *, unsigned int); 
  __int64 v18; 
  __int64 v19; 
  char v20; 

  v20 = owner;
  v7 = animIndex;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 290, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v8 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v8 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v18) = (unsigned __int8)nodeType - 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v18, s_xAnimTypeRegistry.numNodeTypes) )
      __debugbreak();
  }
  v9 = s_xAnimTypeRegistry.nodeTypes[v8];
  dataOffset = v9->dataOffset;
  v11 = (char *)animInfo + dataOffset;
  memset_0((char *)animInfo + dataOffset, 0, v9->nodeAllocationSize - dataOffset);
  if ( anims )
  {
    if ( (unsigned int)v7 >= anims->size )
    {
      LODWORD(v19) = anims->size;
      LODWORD(v18) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 989, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    numBindings = anims->numBindings;
    if ( anims->numBindings )
    {
      bindingIndex = anims->entries[v7].bindingIndex;
      if ( bindingIndex != 0xFFFF )
      {
        v14 = bindingIndex;
        if ( bindingIndex < numBindings )
        {
          v15 = bindingIndex;
          do
          {
            v16 = &anims->bindings[v15];
            if ( v16->destAnimIndex != (_DWORD)v7 )
              break;
            if ( v16->type )
            {
              if ( v16->type != CONSTANT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 975, ASSERT_TYPE_ASSERT, "(binding->type == XAnimBindingType::CONSTANT)", (const char *)&queryFormat, "binding->type == XAnimBindingType::CONSTANT") )
                __debugbreak();
              if ( v20 != 1 && ((__int64)anims->entries[v16->destAnimIndex].parts & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 976, ASSERT_TYPE_ASSERT, "(!(owner != XAnimOwner::CLIENT && (anims->entries[binding->destAnimIndex].animParent.flags & XANIM_CLIENT_ONLY)))", (const char *)&queryFormat, "!(owner != XAnimOwner::CLIENT && (anims->entries[binding->destAnimIndex].animParent.flags & XANIM_CLIENT_ONLY))") )
                __debugbreak();
              memcpy_0(&v11[v16->destParameterOffset], &v16->8, v16->destParameterSize);
            }
            ++v14;
            ++v15;
          }
          while ( v14 < numBindings );
        }
      }
    }
  }
  init = v9->functions.init;
  if ( init )
    init(v11, anims, v7);
}

/*
==============
XAnimCustomNodeInstantInit
==============
*/
void XAnimCustomNodeInstantInit(const DObj *obj, XAnimTree *tree, XAnimInfo *animInfo, unsigned __int16 infoIndex, XModelNameMap *modelNameMap)
{
  const dvar_t *v10; 
  const XAnim_s *SubTreeAnims; 
  XAnimNodeTypeID nodeType; 
  __int64 v13; 
  const XAnimNodeTypeInfo *v14; 
  void (__fastcall *update)(void *, const DObj *, XAnimInfo *, unsigned __int16, float, const bool, XModelNameMap *); 
  int fmt; 
  __int64 v18; 
  __int64 v19; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2308, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2309, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2310, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_xanim_custom_node_instant_update;
  if ( !DCONST_DVARBOOL_xanim_custom_node_instant_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_custom_node_instant_update") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 618, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( !animInfo->animToModel && (animInfo->animParent.flags & 0x10000) == 0 && infoIndex && (animInfo->state.flags & 8) != 0 )
    {
      XAnimCustomNodeUpdateParameters(tree, infoIndex);
      SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1216, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      if ( animInfo->animIndex >= SubTreeAnims->size )
      {
        LODWORD(v19) = SubTreeAnims->size;
        LODWORD(v18) = animInfo->animIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1217, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( XAnimIsCustomNode(SubTreeAnims, animInfo) )
        animInfo->state.flags &= ~8u;
      if ( !XAnimShouldIgnoreClientOnlyNode(obj->tree, animInfo) )
      {
        nodeType = SubTreeAnims->entries[animInfo->animIndex].nodeType;
        if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
        {
          v13 = (unsigned int)(unsigned __int8)nodeType - 2;
          if ( (unsigned int)v13 >= s_xAnimTypeRegistry.numNodeTypes )
          {
            LODWORD(v19) = s_xAnimTypeRegistry.numNodeTypes;
            LODWORD(v18) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v14 = s_xAnimTypeRegistry.nodeTypes[v13];
          update = v14->functions.update;
          if ( update )
          {
            __asm { vxorps  xmm0, xmm0, xmm0 }
            LOBYTE(v18) = 1;
            __asm { vmovss  dword ptr [rsp+58h+fmt], xmm0 }
            ((void (__fastcall *)(char *, const DObj *, XAnimInfo *, _QWORD, int, _DWORD, XModelNameMap *))update)((char *)animInfo + v14->dataOffset, obj, animInfo, infoIndex, fmt, v18, modelNameMap);
          }
        }
      }
    }
  }
}

/*
==============
XAnimCustomNodePostParse
==============
*/
char XAnimCustomNodePostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  XAnimNodeTypeID nodeType; 
  __int64 v5; 
  bool (__fastcall *postParse)(XAnim_s *, unsigned int); 
  __int64 v8; 
  __int64 v9; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1677, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1678, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v8, anims->size) )
      __debugbreak();
  }
  nodeType = anims->entries[v2].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu )
    return 1;
  v5 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v5 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v9) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v8) = (unsigned __int8)nodeType - 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  postParse = s_xAnimTypeRegistry.nodeTypes[v5]->functions.postParse;
  return !postParse || postParse(anims, v2);
}

/*
==============
XAnimCustomNodePrintDebugInfo
==============
*/
char XAnimCustomNodePrintDebugInfo(const XAnimTree *tree, const XAnim_s *anims, XAnimInfo *info, char *buffer, const int bufferSize, const int depth, int *inoutBufferPos)
{
  XAnimNodeTypeID nodeType; 
  unsigned int v12; 
  const XAnimNodeTypeInfo *v13; 
  void (__fastcall *printDebug)(void *, const XAnimInfo *, char *, const int, const int, int *); 
  void *CustomNodeData; 
  __int64 v17; 
  __int64 v18; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1701, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1702, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1703, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1704, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !inoutBufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1705, ASSERT_TYPE_ASSERT, "(inoutBufferPos)", (const char *)&queryFormat, "inoutBufferPos") )
    __debugbreak();
  if ( XAnimIsCustomNode(anims, info) && !XAnimShouldIgnoreClientOnlyNode(tree, info) )
  {
    if ( info->animIndex >= anims->size )
    {
      LODWORD(v17) = info->animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 410, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", v17, anims->size) )
        __debugbreak();
    }
    nodeType = anims->entries[info->animIndex].nodeType;
    if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 290, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
      __debugbreak();
    v12 = (unsigned __int8)nodeType - 2;
    if ( v12 >= s_xAnimTypeRegistry.numNodeTypes )
    {
      LODWORD(v18) = s_xAnimTypeRegistry.numNodeTypes;
      LODWORD(v17) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v13 = s_xAnimTypeRegistry.nodeTypes[v12];
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1718, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
      __debugbreak();
    printDebug = v13->functions.printDebug;
    if ( printDebug )
    {
      CustomNodeData = XAnimGetCustomNodeData(anims, info, info->animIndex);
      printDebug(CustomNodeData, info, buffer, bufferSize, depth, inoutBufferPos);
    }
  }
  return 1;
}

/*
==============
XAnimCustomNodeRestart
==============
*/
void XAnimCustomNodeRestart(XAnimTree *tree, XAnimInfo *info)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int8 flags; 
  __int64 v6; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1034, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1035, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1038, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( XAnimIsCustomNode(SubTreeAnims, info) && !XAnimShouldIgnoreClientOnlyNode(tree, info) )
  {
    flags = info->state.flags;
    if ( (flags & 0x20) == 0 )
    {
      if ( info->animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1053, ASSERT_TYPE_ASSERT, "( info->animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "info->animIndex", "anims->size", info->animIndex, SubTreeAnims->size) )
        __debugbreak();
      v6 = 2 * (info->animIndex + 5i64);
      XAnimDestroyNode(tree, info);
      XAnimCustomNodeInit(SubTreeAnims, (const XAnimOwner)(unsigned __int8)tree->owner[0], info->animIndex, info, *((XAnimNodeTypeID *)&SubTreeAnims->size + 8 * v6));
      tree->parametersDirty = 1;
      flags = info->state.flags;
    }
    info->state.flags = flags & 0xD7 | 8;
  }
}

/*
==============
XAnimCustomNodeUpdate
==============
*/

void __fastcall XAnimCustomNodeUpdate(const DObj *obj, XAnimInfo *animInfo, unsigned __int16 infoIndex, double dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  const XAnim_s *SubTreeAnims; 
  XAnimNodeTypeID nodeType; 
  __int64 v13; 
  const XAnimNodeTypeInfo *v14; 
  void (__fastcall *update)(void *, const DObj *, XAnimInfo *, unsigned __int16, float, const bool, XModelNameMap *); 
  int fmt; 
  __int64 v18; 
  __int64 v19; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1216, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animInfo->animIndex >= SubTreeAnims->size )
  {
    LODWORD(v18) = animInfo->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1217, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, SubTreeAnims->size) )
      __debugbreak();
  }
  if ( XAnimIsCustomNode(SubTreeAnims, animInfo) )
    animInfo->state.flags &= ~8u;
  if ( !XAnimShouldIgnoreClientOnlyNode(obj->tree, animInfo) )
  {
    nodeType = SubTreeAnims->entries[animInfo->animIndex].nodeType;
    if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
    {
      v13 = (unsigned int)(unsigned __int8)nodeType - 2;
      if ( (unsigned int)v13 >= s_xAnimTypeRegistry.numNodeTypes )
      {
        LODWORD(v19) = s_xAnimTypeRegistry.numNodeTypes;
        LODWORD(v18) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v14 = s_xAnimTypeRegistry.nodeTypes[v13];
      update = v14->functions.update;
      if ( update )
      {
        LOBYTE(v18) = isInstantInit;
        __asm { vmovss  dword ptr [rsp+58h+fmt], xmm6 }
        ((void (__fastcall *)(char *, const DObj *, XAnimInfo *, _QWORD, int, _DWORD, XModelNameMap *))update)((char *)animInfo + v14->dataOffset, obj, animInfo, infoIndex, fmt, v18, modelNameMap);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
XAnimCustomNodeUpdateParameters
==============
*/
void XAnimCustomNodeUpdateParameters(XAnimTree *tree, unsigned __int16 infoIndex)
{
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 numBindings; 
  unsigned __int16 bindingIndex; 
  const XAnimParameterBinding *v7; 
  unsigned __int16 destAnimIndex; 
  char *CustomNodeData; 
  unsigned __int16 sourceParameterIndex; 
  char *v11; 
  unsigned __int16 maxParameters; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 children; 
  unsigned __int8 *v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( infoIndex )
  {
    AnimInfo = XAnimGetAnimInfo(infoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2202, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
      __debugbreak();
    if ( !XAnimShouldIgnoreClientOnlyNode(tree, AnimInfo) && !AnimInfo->animToModel )
    {
      SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2216, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
      {
        numBindings = SubTreeAnims->numBindings;
        if ( AnimInfo->animIndex >= SubTreeAnims->size )
        {
          LODWORD(v19) = AnimInfo->animIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2222, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", v19, SubTreeAnims->size) )
            __debugbreak();
        }
        if ( numBindings )
        {
          bindingIndex = SubTreeAnims->entries[AnimInfo->animIndex].bindingIndex;
          if ( bindingIndex != 0xFFFF && bindingIndex < numBindings )
          {
            do
            {
              v7 = &SubTreeAnims->bindings[bindingIndex];
              destAnimIndex = v7->destAnimIndex;
              if ( destAnimIndex != AnimInfo->animIndex || v7->type )
                break;
              CustomNodeData = (char *)XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, destAnimIndex);
              sourceParameterIndex = v7->dynamic.sourceParameterIndex;
              v11 = CustomNodeData;
              if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2181, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
                __debugbreak();
              maxParameters = tree->maxParameters;
              if ( sourceParameterIndex >= maxParameters )
              {
                LODWORD(v20) = maxParameters;
                LODWORD(v19) = sourceParameterIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2183, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( tree->maxParameters )", "parameterIndex doesn't index tree->maxParameters\n\t%i not in [0, %i)", v19, v20) )
                  __debugbreak();
              }
              if ( (tree->parameterValues[sourceParameterIndex].flags & 2) != 0 )
                AnimInfo->state.flags |= 8u;
              if ( v7->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 966, ASSERT_TYPE_ASSERT, "(binding->type == XAnimBindingType::DYNAMIC)", (const char *)&queryFormat, "binding->type == XAnimBindingType::DYNAMIC") )
                __debugbreak();
              if ( tree->owner[0] != 1 && ((__int64)SubTreeAnims->entries[v7->destAnimIndex].parts & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 967, ASSERT_TYPE_ASSERT, "(!(tree->owner != XAnimOwner::CLIENT && (anims->entries[binding->destAnimIndex].animParent.flags & XANIM_CLIENT_ONLY)))", (const char *)&queryFormat, "!(tree->owner != XAnimOwner::CLIENT && (anims->entries[binding->destAnimIndex].animParent.flags & XANIM_CLIENT_ONLY))") )
                __debugbreak();
              CopyGameParameterToNode(tree, SubTreeAnims, AnimInfo, v7, &v11[v7->destParameterOffset]);
              v13 = tree->maxParameters;
              v14 = v7->dynamic.sourceParameterIndex;
              if ( v14 >= v13 )
              {
                LODWORD(v20) = v13;
                LODWORD(v19) = v14;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2126, ASSERT_TYPE_ASSERT, "(unsigned)( binding->dynamic.sourceParameterIndex ) < (unsigned)( tree->maxParameters )", "binding->dynamic.sourceParameterIndex doesn't index tree->maxParameters\n\t%i not in [0, %i)", v19, v20) )
                  __debugbreak();
              }
              ++bindingIndex;
              tree->parameterValues[v14].flags |= 1u;
            }
            while ( bindingIndex < numBindings );
          }
        }
      }
      children = AnimInfo->children;
      if ( children )
      {
        do
        {
          if ( (children & 0x8000u) != 0 )
          {
            v17 = 32 * (children & 0x7FFFu);
            if ( (unsigned int)v17 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
            {
              LODWORD(v20) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
              LODWORD(v19) = 32 * (children & 0x7FFF);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v19, v20) )
                __debugbreak();
            }
            v16 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v17];
          }
          else
          {
            if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
            {
              LODWORD(v20) = g_xanimMemoryGlobals.infoPoolSize;
              LODWORD(v19) = children;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            v16 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
          }
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2264, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
            __debugbreak();
          v18 = *((_WORD *)v16 + 5);
          XAnimCustomNodeUpdateParameters(tree, children);
          children = v18;
        }
        while ( v18 );
      }
    }
  }
}

/*
==============
XAnimCustomNodeVisitBindingsByParameterName
==============
*/
void XAnimCustomNodeVisitBindingsByParameterName(XAnim_s *anims, scr_string_t gameParameterName, XAnimBindingType bindingType, void (*visitorFunc)(const XAnim_s *, scr_string_t, const XAnimParameterBinding *, void *), void *visitorFuncData)
{
  __int64 v9; 
  unsigned __int16 v10; 
  void *v11; 
  XAnimParameterBinding *v12; 
  unsigned __int16 outParameterIndex; 

  if ( !visitorFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 784, ASSERT_TYPE_ASSERT, "(visitorFunc)", (const char *)&queryFormat, "visitorFunc") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 785, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !gameParameterName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 787, ASSERT_TYPE_ASSERT, "(gameParameterName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "gameParameterName != NULL_SCR_STRING") )
    __debugbreak();
  if ( XAnimFindGameParameterIndexByName(anims, gameParameterName, &outParameterIndex) )
  {
    v9 = 0i64;
    if ( anims->numBindings )
    {
      v10 = outParameterIndex;
      v11 = visitorFuncData;
      do
      {
        v12 = &anims->bindings[v9];
        if ( v12->dynamic.sourceParameterIndex == v10 && v12->type == bindingType )
          visitorFunc(anims, gameParameterName, v12, v11);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < anims->numBindings );
    }
  }
}

/*
==============
XAnimDestroyNode
==============
*/
void XAnimDestroyNode(const XAnimTree *tree, XAnimInfo *animInfo)
{
  const XAnim_s *SubTreeAnims; 
  XAnimNodeTypeID nodeType; 
  __int64 v6; 
  const XAnimNodeTypeInfo *v7; 
  void (__fastcall *destroy)(void *); 
  __int64 v9; 
  __int64 v10; 

  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1134, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !XAnimShouldIgnoreClientOnlyNode(tree, animInfo) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)animInfo->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1142, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( animInfo->animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1143, ASSERT_TYPE_ASSERT, "( animInfo->animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animInfo->animIndex", "anims->size", animInfo->animIndex, SubTreeAnims->size) )
      __debugbreak();
    nodeType = SubTreeAnims->entries[animInfo->animIndex].nodeType;
    if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
    {
      v6 = (unsigned int)(unsigned __int8)nodeType - 2;
      if ( (unsigned int)v6 >= s_xAnimTypeRegistry.numNodeTypes )
      {
        LODWORD(v10) = s_xAnimTypeRegistry.numNodeTypes;
        LODWORD(v9) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      v7 = s_xAnimTypeRegistry.nodeTypes[v6];
      destroy = v7->functions.destroy;
      if ( destroy )
        destroy((char *)animInfo + v7->dataOffset);
    }
  }
}

/*
==============
XAnimFindBindParameterByFieldName
==============
*/
XAnimParameterBinding *XAnimFindBindParameterByFieldName(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, XAnimBindingType bindingType, const XAnimTypeFields *typeFields)
{
  __int64 v5; 
  unsigned int numFields; 
  int v10; 
  const XAnimField *fields; 
  const XAnimField *v13; 
  unsigned int numBindings; 
  __int64 bindingIndex; 
  __int64 v16; 
  XAnimParameterBinding *v17; 
  __int64 v18; 

  v5 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 743, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !fieldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 744, ASSERT_TYPE_ASSERT, "(fieldName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "fieldName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !typeFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 745, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  numFields = typeFields->numFields;
  v10 = 0;
  if ( numFields )
  {
    fields = typeFields->fields;
    while ( *fields[v10].name != fieldName )
    {
      if ( ++v10 >= numFields )
        return 0i64;
    }
    v13 = &fields[v10];
    numBindings = anims->numBindings;
    if ( (unsigned int)v5 >= anims->size )
    {
      LODWORD(v18) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 754, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, anims->size) )
        __debugbreak();
    }
    if ( anims->entries[v5].bindingIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 758, ASSERT_TYPE_ASSERT, "(animEntry->bindingIndex != (0xffffui16))", "%s\n\tXAnimFindBindParameterByFieldName: anim tree parameter binding was not setup correctly. Did you forget to call XAnimSetupBindingIndexes() for anim tree '%s'.", "animEntry->bindingIndex != XANIM_NODE_INVALID_BINDING_INDEX", anims->debugName) )
      __debugbreak();
    bindingIndex = anims->entries[v5].bindingIndex;
    if ( (unsigned int)bindingIndex < numBindings )
    {
      v16 = bindingIndex;
      do
      {
        v17 = &anims->bindings[v16];
        if ( v17->destAnimIndex != (_DWORD)v5 )
          break;
        if ( bindingType == v17->type && v17->destParameterOffset == truncate_cast<unsigned short,unsigned int>(v13->offset) && v17->destParameterSize == v13->size )
          return v17;
        LODWORD(bindingIndex) = bindingIndex + 1;
        ++v16;
      }
      while ( (unsigned int)bindingIndex < numBindings );
    }
  }
  return 0i64;
}

/*
==============
XAnimFindBindParameterByFieldNameAllBindings
==============
*/
XAnimParameterBinding *XAnimFindBindParameterByFieldNameAllBindings(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, XAnimBindingType bindingType, const XAnimTypeFields *typeFields)
{
  unsigned int numFields; 
  int v10; 
  int v11; 
  const XAnimField *fields; 
  unsigned int numBindings; 
  const XAnimField *v15; 
  __int64 i; 
  XAnimParameterBinding *v17; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 713, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !fieldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 714, ASSERT_TYPE_ASSERT, "(fieldName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "fieldName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !typeFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 715, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  numFields = typeFields->numFields;
  v10 = 0;
  v11 = 0;
  if ( !numFields )
    return 0i64;
  fields = typeFields->fields;
  while ( *fields[v11].name != fieldName )
  {
    if ( ++v11 >= numFields )
      return 0i64;
  }
  numBindings = anims->numBindings;
  v15 = &fields[v11];
  if ( !anims->numBindings )
    return 0i64;
  for ( i = 0i64; ; ++i )
  {
    v17 = &anims->bindings[i];
    if ( v17->destAnimIndex == animIndex && bindingType == v17->type && v17->destParameterOffset == truncate_cast<unsigned short,unsigned int>(v15->offset) && v17->destParameterSize == v15->size )
      break;
    if ( ++v10 >= numBindings )
      return 0i64;
  }
  return v17;
}

/*
==============
XAnimFindConstantBindParameterByFieldName
==============
*/
XAnimParameterBinding *XAnimFindConstantBindParameterByFieldName(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return XAnimFindBindParameterByFieldName(anims, animIndex, fieldName, CONSTANT, typeFields);
}

/*
==============
XAnimFindConstantBindParameterByFieldNameAllBindings
==============
*/
XAnimParameterBinding *XAnimFindConstantBindParameterByFieldNameAllBindings(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return XAnimFindBindParameterByFieldNameAllBindings(anims, animIndex, fieldName, CONSTANT, typeFields);
}

/*
==============
XAnimFindConstantBindParameterByFieldNameNonConst
==============
*/
XAnimParameterBinding *XAnimFindConstantBindParameterByFieldNameNonConst(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return XAnimFindBindParameterByFieldNameAllBindings(anims, animIndex, fieldName, CONSTANT, typeFields);
}

/*
==============
XAnimFindCustomNodeParameter
==============
*/
char XAnimFindCustomNodeParameter(XAnimNodeTypeID nodeTypeID, scr_string_t parameterName, XAnimFieldType *outParameterType)
{
  unsigned __int8 v6; 
  __int64 v7; 
  const XAnimNodeTypeInfo *v8; 
  int v9; 
  unsigned int numFields; 
  const XAnimField *fields; 
  __int64 v13; 
  unsigned int numNodeTypes; 

  v6 = nodeTypeID - 2;
  if ( (unsigned __int8)(nodeTypeID - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1191, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( nodeTypeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( nodeTypeID )") )
    __debugbreak();
  if ( !parameterName )
    return 0;
  if ( v6 > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v7 = (unsigned int)(unsigned __int8)nodeTypeID - 2;
  if ( (unsigned int)v7 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    numNodeTypes = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v13) = (unsigned __int8)nodeTypeID - 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v13, numNodeTypes) )
      __debugbreak();
  }
  v8 = s_xAnimTypeRegistry.nodeTypes[v7];
  v9 = 0;
  numFields = v8->fields.numFields;
  if ( !numFields )
    return 0;
  fields = v8->fields.fields;
  while ( *fields[v9].name != parameterName )
  {
    if ( ++v9 >= numFields )
      return 0;
  }
  *(_WORD *)outParameterType = *(_WORD *)fields[v9].type;
  return 1;
}

/*
==============
XAnimFindDynamicBindParameterByFieldName
==============
*/
XAnimParameterBinding *XAnimFindDynamicBindParameterByFieldName(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return XAnimFindBindParameterByFieldName(anims, animIndex, fieldName, DYNAMIC, typeFields);
}

/*
==============
XAnimFindDynamicBindParameterByFieldNameAllBindings
==============
*/
XAnimParameterBinding *XAnimFindDynamicBindParameterByFieldNameAllBindings(const XAnim_s *anims, unsigned int animIndex, scr_string_t fieldName, const XAnimTypeFields *typeFields)
{
  return XAnimFindBindParameterByFieldNameAllBindings(anims, animIndex, fieldName, DYNAMIC, typeFields);
}

/*
==============
XAnimFindGameParameterIndexByName
==============
*/
char XAnimFindGameParameterIndexByName(XAnim_s *anims, scr_string_t name, unsigned __int16 *outParameterIndex)
{
  unsigned __int16 numGameParameters; 
  unsigned __int16 v7; 
  const scr_string_t **gameParameterNames; 
  __int64 v9; 

  if ( !SL_IsLowercaseString(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1545, ASSERT_TYPE_ASSERT, "(SL_IsLowercaseString( name ))", (const char *)&queryFormat, "SL_IsLowercaseString( name )") )
    __debugbreak();
  if ( !anims->gameParameterNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1547, ASSERT_TYPE_ASSERT, "(anims->gameParameterNames != 0)", (const char *)&queryFormat, "anims->gameParameterNames != NULL") )
    __debugbreak();
  numGameParameters = anims->numGameParameters;
  v7 = 0;
  if ( !numGameParameters )
    return 0;
  gameParameterNames = anims->gameParameterNames;
  while ( 1 )
  {
    v9 = v7;
    if ( !*gameParameterNames[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1553, ASSERT_TYPE_ASSERT, "(*anims->gameParameterNames[gameParameterIndex] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*anims->gameParameterNames[gameParameterIndex] != NULL_SCR_STRING") )
      __debugbreak();
    gameParameterNames = anims->gameParameterNames;
    if ( *gameParameterNames[v9] == name )
      break;
    if ( ++v7 >= numGameParameters )
      return 0;
  }
  *outParameterIndex = v7;
  return 1;
}

/*
==============
XAnimFindNodeTypeByName
==============
*/
char XAnimFindNodeTypeByName(scr_string_t nodeTypeName, XAnimNodeTypeID *outNodeTypeID)
{
  __int64 v2; 
  const XAnimNodeTypeInfo *v3; 

  v2 = 0i64;
  if ( !s_xAnimTypeRegistry.numNodeTypes )
    return 0;
  while ( 1 )
  {
    v3 = s_xAnimTypeRegistry.nodeTypes[v2];
    if ( *v3->name == nodeTypeName )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= s_xAnimTypeRegistry.numNodeTypes )
      return 0;
  }
  *outNodeTypeID = v3->nodeTypeID;
  return 1;
}

/*
==============
XAnimFindPublicNode
==============
*/
char XAnimFindPublicNode(const XAnim_s *anims, scr_string_t name, unsigned __int16 *outAnimIndex)
{
  XAnimPublicNode *publicNodes; 
  unsigned __int16 numPublicNodes; 
  __int64 v8; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 613, ASSERT_TYPE_ASSERT, "(anims != 0)", (const char *)&queryFormat, "anims != NULL") )
    __debugbreak();
  publicNodes = anims->publicNodes;
  if ( !publicNodes )
    return 0;
  if ( !name )
    return 0;
  numPublicNodes = anims->numPublicNodes;
  v8 = 0i64;
  if ( !numPublicNodes )
    return 0;
  while ( *publicNodes->name != name )
  {
    ++v8;
    ++publicNodes;
    if ( v8 >= numPublicNodes )
      return 0;
  }
  if ( outAnimIndex )
    *outAnimIndex = publicNodes->nodeIndex;
  return 1;
}

/*
==============
XAnimFindPublicNodeByTypeName
==============
*/
char XAnimFindPublicNodeByTypeName(const XAnim_s *anims, scr_string_t typeName, unsigned __int16 *outAnimIndex)
{
  unsigned __int16 numPublicNodes; 
  unsigned __int16 v7; 
  XAnimPublicNode *v8; 
  XAnimNodeTypeID nodeType; 
  __int64 v10; 
  const XAnimNodeTypeInfo *v11; 
  __int64 v13; 
  __int64 v14; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 640, ASSERT_TYPE_ASSERT, "(anims != 0)", (const char *)&queryFormat, "anims != NULL") )
    __debugbreak();
  if ( !anims->publicNodes )
    return 0;
  if ( !typeName )
    return 0;
  numPublicNodes = anims->numPublicNodes;
  v7 = 0;
  if ( !numPublicNodes )
    return 0;
  while ( 1 )
  {
    v8 = &anims->publicNodes[v7];
    nodeType = v8->nodeType;
    if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
    {
      v10 = (unsigned int)(unsigned __int8)nodeType - 2;
      if ( (unsigned int)v10 >= s_xAnimTypeRegistry.numNodeTypes )
      {
        LODWORD(v14) = s_xAnimTypeRegistry.numNodeTypes;
        LODWORD(v13) = (unsigned __int8)nodeType - 2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v11 = s_xAnimTypeRegistry.nodeTypes[v10];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 656, ASSERT_TYPE_ASSERT, "(typeInfo != nullptr)", (const char *)&queryFormat, "typeInfo != nullptr") )
        __debugbreak();
      if ( *v11->name == typeName )
        break;
    }
    if ( ++v7 >= numPublicNodes )
      return 0;
  }
  if ( outAnimIndex )
    *outAnimIndex = v8->nodeIndex;
  return 1;
}

/*
==============
XAnimGetCustomNodeData
==============
*/
char *XAnimGetCustomNodeData(const XAnim_s *anims, XAnimInfo *animInfo, unsigned int animIndex)
{
  XAnimNodeTypeID nodeType; 
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  unsigned int size; 

  if ( animIndex >= anims->size )
  {
    size = anims->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 400, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, size) )
      __debugbreak();
  }
  nodeType = anims->entries[animInfo->animIndex].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 290, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v6 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v6 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v10) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return (char *)animInfo + s_xAnimTypeRegistry.nodeTypes[v6]->dataOffset;
}

/*
==============
XAnimGetCustomNodeName
==============
*/
__int64 XAnimGetCustomNodeName(XAnimNodeTypeID typeID)
{
  return *s_xAnimTypeRegistry.nodeTypes[XAnimTypeRegistry_GetNodeTypeIndexFromID(&s_xAnimTypeRegistry, typeID)]->name;
}

/*
==============
XAnimGetCustomNodeTypeInfo
==============
*/
const XAnimNodeTypeInfo *XAnimGetCustomNodeTypeInfo(const XAnim_s *anims, const XAnimInfo *animInfo)
{
  unsigned int size; 
  XAnimNodeTypeID nodeType; 
  __int64 v6; 
  __int64 v8; 
  int animIndex; 
  __int64 v10; 
  unsigned int v11; 

  size = anims->size;
  if ( animInfo->animIndex >= size )
  {
    v11 = size;
    animIndex = animInfo->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 410, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, v11) )
      __debugbreak();
  }
  nodeType = anims->entries[animInfo->animIndex].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 290, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v6 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v6 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v10) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return s_xAnimTypeRegistry.nodeTypes[v6];
}

/*
==============
XAnimGetNumGameParameters
==============
*/
__int64 XAnimGetNumGameParameters(const XAnim_s *anims)
{
  return anims->numGameParameters;
}

/*
==============
XAnimGetTypeFieldsForNodeType
==============
*/
XAnimTypeFields *XAnimGetTypeFieldsForNodeType(XAnimNodeTypeID typeID)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int numNodeTypes; 

  if ( (unsigned __int8)(typeID - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v2 = (unsigned int)(unsigned __int8)typeID - 2;
  if ( (unsigned int)v2 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    numNodeTypes = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v4, numNodeTypes) )
      __debugbreak();
  }
  return &s_xAnimTypeRegistry.nodeTypes[v2]->fields;
}

/*
==============
XAnimInitNodeTypes
==============
*/
void XAnimInitNodeTypes(void)
{
  *(_QWORD *)&s_xAnimTypeRegistry.numNodeTypes = 0i64;
}

/*
==============
XAnimIsClientAuthNode
==============
*/
bool XAnimIsClientAuthNode(const XAnimInfo *animInfo)
{
  return !animInfo->animToModel && (animInfo->animParent.flags & 0x800) != 0;
}

/*
==============
XAnimIsClientOnlyNode
==============
*/
bool XAnimIsClientOnlyNode(const XAnimInfo *animInfo)
{
  return !animInfo->animToModel && ((__int64)animInfo->parts & 0x40) != 0;
}

/*
==============
XAnimIsCustomCalcNode
==============
*/
bool XAnimIsCustomCalcNode(const XAnim_s *anims, const XAnimInfo *animInfo)
{
  unsigned int size; 
  XAnimNodeTypeID nodeType; 
  __int64 v7; 
  __int64 v8; 
  int animIndex; 
  __int64 v10; 
  unsigned int v11; 

  size = anims->size;
  if ( animInfo->animIndex >= size )
  {
    v11 = size;
    animIndex = animInfo->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 480, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, v11) )
      __debugbreak();
  }
  nodeType = anims->entries[animInfo->animIndex].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu )
    return 0;
  v7 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v7 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v10) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v8) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return s_xAnimTypeRegistry.nodeTypes[v7]->functions.calc != NULL;
}

/*
==============
XAnimIsCustomNode
==============
*/
bool XAnimIsCustomNode(const XAnim_s *anims, const XAnimInfo *animInfo)
{
  unsigned int size; 
  int animIndex; 
  unsigned int v7; 

  size = anims->size;
  if ( animInfo->animIndex >= size )
  {
    v7 = size;
    animIndex = animInfo->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 448, ASSERT_TYPE_ASSERT, "(unsigned)( animInfo->animIndex ) < (unsigned)( anims->size )", "animInfo->animIndex doesn't index anims->size\n\t%i not in [0, %i)", animIndex, v7) )
      __debugbreak();
  }
  return (unsigned __int8)(anims->entries[animInfo->animIndex].nodeType - 2) <= 0xFCu;
}

/*
==============
XAnimIsCustomNodeByName
==============
*/
bool XAnimIsCustomNodeByName(const XAnim_s *anims, unsigned int animIndex, scr_string_t customNodeName)
{
  __int64 v3; 
  XAnimNodeTypeID nodeType; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 455, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v3 >= anims->size )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 456, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v9, anims->size) )
      __debugbreak();
  }
  if ( !customNodeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 457, ASSERT_TYPE_ASSERT, "(customNodeName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "customNodeName != NULL_SCR_STRING") )
    __debugbreak();
  nodeType = anims->entries[v3].nodeType;
  if ( (unsigned __int8)(nodeType - 2) > 0xFCu )
    return 0;
  v7 = (unsigned int)(unsigned __int8)nodeType - 2;
  if ( (unsigned int)v7 >= s_xAnimTypeRegistry.numNodeTypes )
  {
    LODWORD(v10) = s_xAnimTypeRegistry.numNodeTypes;
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return *s_xAnimTypeRegistry.nodeTypes[v7]->name == customNodeName;
}

/*
==============
XAnimIsCustomNodeType
==============
*/
bool XAnimIsCustomNodeType(XAnimNodeTypeID nodeType)
{
  return (unsigned __int8)(nodeType - 2) <= 0xFCu;
}

/*
==============
XAnimReadConstString
==============
*/
const char *XAnimReadConstString(MemoryFile *memFile)
{
  const char *result; 
  scr_string_t String; 

  result = MemFile_ReadCString(memFile);
  if ( result )
  {
    String = SL_GetString(result, 0);
    XAnimRegisterConstString(String);
    SL_RemoveRefToString(String);
    return (const char *)(unsigned int)String;
  }
  return result;
}

/*
==============
XAnimReadConstStringOfSize
==============
*/
const char *XAnimReadConstStringOfSize(MemoryFile *memFile)
{
  unsigned __int64 v2; 
  const char *result; 
  scr_string_t StringOfSize; 
  unsigned int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  v2 = p;
  if ( !p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1470, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  result = MemFile_ReadCString(memFile, v2);
  if ( result )
  {
    StringOfSize = j_SL_GetStringOfSize(result, 0, v2, 4);
    XAnimRegisterConstString(StringOfSize, v2);
    SL_RemoveRefToString(StringOfSize);
    return (const char *)(unsigned int)StringOfSize;
  }
  return result;
}

/*
==============
XAnimReadCustomNode
==============
*/
void XAnimReadCustomNode(XAnimTree *tree, XAnimInfo *animInfo, MemoryFile *memFile)
{
  const XAnim_s *SubTreeAnims; 
  XAnimNodeTypeID nodeType; 
  __int64 v8; 
  const XAnimNodeTypeInfo *v9; 
  void (__fastcall *read)(void *, MemoryFile *); 
  __int64 v11; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 566, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 567, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 568, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !XAnimShouldIgnoreClientOnlyNode(tree, animInfo) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)animInfo->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 577, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    nodeType = SubTreeAnims->entries[animInfo->animIndex].nodeType;
    if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
    {
      v8 = (unsigned int)(unsigned __int8)nodeType - 2;
      if ( (unsigned int)v8 >= s_xAnimTypeRegistry.numNodeTypes )
      {
        LODWORD(v11) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v11, s_xAnimTypeRegistry.numNodeTypes) )
          __debugbreak();
      }
      v9 = s_xAnimTypeRegistry.nodeTypes[v8];
      read = v9->functions.read;
      if ( read )
        read((char *)animInfo + v9->dataOffset, memFile);
      else
        MemFile_ReadData(memFile, v9->nodeDataSize, (char *)animInfo + v9->dataOffset);
    }
  }
}

/*
==============
XAnimReadParameterValues
==============
*/
void XAnimReadParameterValues(XAnimTree *tree, MemoryFile *memFile)
{
  unsigned int numGameParameters; 
  __int64 v7; 
  char v9[4]; 
  int v10[3]; 
  unsigned int p; 
  bool v12; 
  bool v13; 

  numGameParameters = tree->anims->numGameParameters;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p <= numGameParameters )
  {
    if ( p )
    {
      _RBX = 0i64;
      v7 = p;
      do
      {
        _RDI = tree->parameterValues;
        MemFile_ReadData(memFile, 1ui64, &p);
        switch ( (char)p )
        {
          case 0:
            _RDI[_RBX].type = INVALID;
            break;
          case 1:
            *(_WORD *)&_RDI[_RBX].type = -255;
            MemFile_ReadData(memFile, 1ui64, &v12);
            _RDI[_RBX].boolValue = v12;
            break;
          case 2:
            *(_WORD *)&_RDI[_RBX].type = -254;
            MemFile_ReadData(memFile, 1ui64, &v13);
            _RDI[_RBX].boolValue = v13;
            break;
          case 3:
            *(_WORD *)&_RDI[_RBX].type = -251;
            *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
            __asm { vmovss  dword ptr [rbx+rdi+8], xmm0 }
            break;
          case 4:
            *(_WORD *)&_RDI[_RBX].type = -249;
            *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
            __asm { vmovss  dword ptr [rbx+rdi+8], xmm0 }
            *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
            __asm { vmovss  dword ptr [rbx+rdi+0Ch], xmm0 }
            *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
            __asm { vmovss  dword ptr [rbx+rdi+10h], xmm0 }
            break;
          case 5:
            *(_WORD *)&_RDI[_RBX].type = -252;
            MemFile_ReadData(memFile, 4ui64, v10);
            _RDI[_RBX].intValue = v10[0];
            break;
          default:
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441B6880, 278i64);
            break;
        }
        MemFile_ReadData(memFile, 1ui64, v9);
        _RDI[_RBX++].flags = v9[0];
        --v7;
      }
      while ( v7 );
    }
    tree->parametersDirty = 1;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441B6810, 277i64, numGameParameters, p);
  }
}

/*
==============
XAnimRegisterNodeTypeInternal
==============
*/
XAnimNodeTypeID XAnimRegisterNodeTypeInternal(XAnimNodeTypeInfo *typeInfo)
{
  return XAnimTypeRegistry_RegisterNodeType(&s_xAnimTypeRegistry, typeInfo);
}

/*
==============
XAnimRegisterStructTypeInternal
==============
*/
__int64 XAnimRegisterStructTypeInternal(XAnimGameStructTypeInfo *typeInfo)
{
  unsigned int numGameTypes; 
  unsigned int v3; 
  int v4; 
  const XAnimField *fields; 
  __int64 v6; 
  const char *debugName; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 

  numGameTypes = s_xAnimTypeRegistry.numGameTypes;
  if ( s_xAnimTypeRegistry.numGameTypes >= 0x40 )
  {
    v11 = 64;
    v9 = s_xAnimTypeRegistry.numGameTypes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 218, ASSERT_TYPE_ASSERT, "(unsigned)( registry->numGameTypes ) < (unsigned)( XANIM_MAX_GAME_STRUCT_TYPES )", "registry->numGameTypes doesn't index XANIM_MAX_GAME_STRUCT_TYPES\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
    numGameTypes = s_xAnimTypeRegistry.numGameTypes;
  }
  v3 = 0;
  v4 = 0;
  if ( !numGameTypes )
  {
LABEL_8:
    fields = typeInfo->fields.fields;
    typeInfo->typeID = v4;
    if ( fields && fields->name )
    {
      do
      {
        ++v3;
        ++fields;
      }
      while ( fields->name );
    }
    typeInfo->fields.numFields = v3;
    v6 = s_xAnimTypeRegistry.numGameTypes++;
    s_xAnimTypeRegistry.gameTypes[v6] = typeInfo;
    XAnimTypeRegistry_CheckFields(&typeInfo->fields);
    return (unsigned __int8)v4;
  }
  while ( s_xAnimTypeRegistry.gameTypes[v4] != typeInfo )
  {
    if ( ++v4 >= numGameTypes )
      goto LABEL_8;
  }
  debugName = "unknown";
  LODWORD(v10) = v4;
  if ( typeInfo->debugName )
    debugName = typeInfo->debugName;
  if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 231, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "game structure type '%s' (index %d) already registered", debugName, v10) )
    return (unsigned __int8)v4;
  __debugbreak();
  return (unsigned __int8)v4;
}

/*
==============
XAnimSetBoolGameParameterByIndex
==============
*/
void XAnimSetBoolGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, bool value)
{
  XAnimParameterValue *GameParameterValue; 
  XAnimParameterValue *v7; 

  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  v7 = GameParameterValue;
  if ( GameParameterValue->type != BOOL_VALUE || GameParameterValue->boolValue != value )
    XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  *(_WORD *)&v7->type = -255;
  v7->boolValue = value;
}

/*
==============
XAnimSetBoolGameParameterByName
==============
*/
bool XAnimSetBoolGameParameterByName(DObj *obj, scr_string_t name, bool value)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  XAnimParameterValue *v7; 
  bool result; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  v7 = GameParameterValue;
  if ( GameParameterValue->type != BOOL_VALUE || GameParameterValue->boolValue != value )
    XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  *(_WORD *)&v7->type = -255;
  result = 1;
  v7->boolValue = value;
  return result;
}

/*
==============
XAnimSetByteGameParameterByIndex
==============
*/
void XAnimSetByteGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, unsigned __int8 value)
{
  XAnimParameterValue *GameParameterValue; 
  XAnimParameterValue *v7; 

  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  v7 = GameParameterValue;
  if ( GameParameterValue->type != BYTE_VALUE || GameParameterValue->boolValue != value )
    XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  *(_WORD *)&v7->type = -254;
  v7->boolValue = value;
}

/*
==============
XAnimSetByteGameParameterByName
==============
*/
bool XAnimSetByteGameParameterByName(DObj *obj, scr_string_t name, unsigned __int8 value)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  XAnimParameterValue *v7; 
  bool result; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  v7 = GameParameterValue;
  if ( GameParameterValue->type != BYTE_VALUE || GameParameterValue->boolValue != value )
    XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  *(_WORD *)&v7->type = -254;
  result = 1;
  v7->boolValue = value;
  return result;
}

/*
==============
XAnimSetFloatGameParameterByIndex
==============
*/

void __fastcall XAnimSetFloatGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, double value)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  _RAX = GetGameParameterValue(obj, parameterIndex);
  _RBX = _RAX;
  if ( _RAX->type != FLOAT_VALUE )
    goto LABEL_3;
  __asm { vucomiss xmm6, dword ptr [rax+8] }
  if ( _RAX->type != FLOAT_VALUE )
LABEL_3:
    XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  *(_WORD *)&_RBX->type = -251;
}

/*
==============
XAnimSetFloatGameParameterByName
==============
*/

bool __fastcall XAnimSetFloatGameParameterByName(DObj *obj, scr_string_t name, double value)
{
  XAnimTree *tree; 
  bool result; 
  unsigned __int16 outParameterIndex; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  tree = obj->tree;
  __asm { vmovaps xmm6, xmm2 }
  if ( tree && XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
  {
    _RAX = GetGameParameterValue(obj, outParameterIndex);
    _RBX = _RAX;
    if ( _RAX->type != FLOAT_VALUE )
      goto LABEL_5;
    __asm { vucomiss xmm6, dword ptr [rax+8] }
    if ( _RAX->type != FLOAT_VALUE )
LABEL_5:
      XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
    __asm { vmovss  dword ptr [rbx+8], xmm6 }
    *(_WORD *)&_RBX->type = -251;
    result = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return 0;
  }
  return result;
}

/*
==============
XAnimSetGameParameterName
==============
*/
void XAnimSetGameParameterName(XAnim_s *anims, unsigned __int16 parameterIndex, const scr_string_t *name)
{
  unsigned __int16 numGameParameters; 
  int v7; 
  int v8; 

  numGameParameters = anims->numGameParameters;
  if ( parameterIndex >= numGameParameters )
  {
    v8 = numGameParameters;
    v7 = parameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1514, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( anims->numGameParameters )", "parameterIndex doesn't index anims->numGameParameters\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1515, ASSERT_TYPE_ASSERT, "(*name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(*name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1517, ASSERT_TYPE_ASSERT, "(SL_IsLowercaseString( *name ))", (const char *)&queryFormat, "SL_IsLowercaseString( *name )") )
    __debugbreak();
  if ( !anims->gameParameterNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1519, ASSERT_TYPE_ASSERT, "(anims->gameParameterNames != 0)", (const char *)&queryFormat, "anims->gameParameterNames != NULL") )
    __debugbreak();
  anims->gameParameterNames[parameterIndex] = name;
}

/*
==============
XAnimSetGameParameterNames
==============
*/
void XAnimSetGameParameterNames(XAnim_s *anims, const scr_string_t **names, unsigned __int16 numParameters)
{
  unsigned __int16 maxGameParameters; 
  unsigned __int16 v7; 
  __int64 v8; 
  unsigned __int16 numGameParameters; 
  const scr_string_t *v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 

  maxGameParameters = anims->maxGameParameters;
  if ( numParameters > maxGameParameters )
  {
    v14 = maxGameParameters;
    v12 = numParameters;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1527, ASSERT_TYPE_ASSERT, "( numParameters ) <= ( anims->maxGameParameters )", "numParameters not in [0, anims->maxGameParameters]\n\t%u not in [0, %u]", v12, v14) )
      __debugbreak();
  }
  if ( !anims->gameParameterNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1528, ASSERT_TYPE_ASSERT, "(anims->gameParameterNames != 0)", (const char *)&queryFormat, "anims->gameParameterNames != NULL") )
    __debugbreak();
  v7 = 0;
  anims->numGameParameters = numParameters;
  if ( numParameters )
  {
    v8 = 0i64;
    do
    {
      numGameParameters = anims->numGameParameters;
      v10 = names[v8];
      if ( v7 >= numGameParameters )
      {
        LODWORD(v13) = numGameParameters;
        LODWORD(v11) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1514, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( anims->numGameParameters )", "parameterIndex doesn't index anims->numGameParameters\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1515, ASSERT_TYPE_ASSERT, "(*name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*name != NULL_SCR_STRING") )
        __debugbreak();
      if ( !SL_IsLowercaseString(*v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1517, ASSERT_TYPE_ASSERT, "(SL_IsLowercaseString( *name ))", (const char *)&queryFormat, "SL_IsLowercaseString( *name )") )
        __debugbreak();
      if ( !anims->gameParameterNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1519, ASSERT_TYPE_ASSERT, "(anims->gameParameterNames != 0)", (const char *)&queryFormat, "anims->gameParameterNames != NULL") )
        __debugbreak();
      ++v7;
      anims->gameParameterNames[v8++] = v10;
    }
    while ( v7 < numParameters );
  }
}

/*
==============
XAnimSetIndirectByteGameParameterByIndex
==============
*/
void XAnimSetIndirectByteGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const unsigned __int8 *valuePointer)
{
  XAnimParameterValue *GameParameterValue; 

  XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  GameParameterValue->structPointer = valuePointer;
  *(_WORD *)&GameParameterValue->type = -253;
}

/*
==============
XAnimSetIndirectByteGameParameterByName
==============
*/
char XAnimSetIndirectByteGameParameterByName(DObj *obj, scr_string_t name, const unsigned __int8 *valuePointer)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  *(_WORD *)&GameParameterValue->type = -253;
  GameParameterValue->structPointer = valuePointer;
  return 1;
}

/*
==============
XAnimSetIndirectFloatGameParameterByIndex
==============
*/
void XAnimSetIndirectFloatGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const float *valuePointer)
{
  XAnimParameterValue *GameParameterValue; 

  XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  GameParameterValue->structPointer = valuePointer;
  *(_WORD *)&GameParameterValue->type = -250;
}

/*
==============
XAnimSetIndirectFloatGameParameterByName
==============
*/
char XAnimSetIndirectFloatGameParameterByName(DObj *obj, scr_string_t name, const float *valuePointer)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  *(_WORD *)&GameParameterValue->type = -250;
  GameParameterValue->structPointer = valuePointer;
  return 1;
}

/*
==============
XAnimSetIndirectVec3GameParameterByIndex
==============
*/
void XAnimSetIndirectVec3GameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const vec3_t *valuePointer)
{
  XAnimParameterValue *GameParameterValue; 

  XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  GameParameterValue->structPointer = valuePointer;
  *(_WORD *)&GameParameterValue->type = -248;
}

/*
==============
XAnimSetIndirectVec3GameParameterByName
==============
*/
char XAnimSetIndirectVec3GameParameterByName(DObj *obj, scr_string_t name, const vec3_t *valuePointer)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  *(_WORD *)&GameParameterValue->type = -248;
  GameParameterValue->structPointer = valuePointer;
  return 1;
}

/*
==============
XAnimSetIntGameParameterByIndex
==============
*/
void XAnimSetIntGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, int value)
{
  XAnimParameterValue *GameParameterValue; 
  XAnimParameterValue *v7; 

  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  v7 = GameParameterValue;
  if ( GameParameterValue->type != INT_VALUE || GameParameterValue->intValue != value )
    XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  *(_WORD *)&v7->type = -252;
  v7->intValue = value;
}

/*
==============
XAnimSetIntGameParameterByName
==============
*/
bool XAnimSetIntGameParameterByName(DObj *obj, scr_string_t name, int value)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  XAnimParameterValue *v7; 
  bool result; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  v7 = GameParameterValue;
  if ( GameParameterValue->type != INT_VALUE || GameParameterValue->intValue != value )
    XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  *(_WORD *)&v7->type = -252;
  result = 1;
  v7->intValue = value;
  return result;
}

/*
==============
XAnimSetNumGameParameters
==============
*/
void XAnimSetNumGameParameters(XAnim_s *anims, unsigned __int16 numParameters)
{
  unsigned __int16 maxGameParameters; 
  int v5; 
  int v6; 

  maxGameParameters = anims->maxGameParameters;
  if ( numParameters <= maxGameParameters )
  {
    anims->numGameParameters = numParameters;
  }
  else
  {
    v6 = maxGameParameters;
    v5 = numParameters;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1507, ASSERT_TYPE_ASSERT, "( numParameters ) <= ( anims->maxGameParameters )", "numParameters not in [0, anims->maxGameParameters]\n\t%u not in [0, %u]", v5, v6) )
      __debugbreak();
    anims->numGameParameters = numParameters;
  }
}

/*
==============
XAnimSetStructGameParameterByIndex
==============
*/
void XAnimSetStructGameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, unsigned __int8 structureTypeID, const void *valuePointer)
{
  XAnimParameterValue *GameParameterValue; 

  XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  GameParameterValue = GetGameParameterValue(obj, parameterIndex);
  GameParameterValue->structPointer = valuePointer;
  GameParameterValue->gameStructTypeID = structureTypeID;
  GameParameterValue->type = STRUCT_POINTER;
}

/*
==============
XAnimSetStructGameParameterByName
==============
*/
char XAnimSetStructGameParameterByName(DObj *obj, scr_string_t name, unsigned __int8 structureTypeID, const void *valuePointer)
{
  XAnimTree *tree; 
  XAnimParameterValue *GameParameterValue; 
  unsigned __int16 outParameterIndex; 

  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  GameParameterValue = GetGameParameterValue(obj, outParameterIndex);
  GameParameterValue->type = STRUCT_POINTER;
  GameParameterValue->structPointer = valuePointer;
  GameParameterValue->gameStructTypeID = structureTypeID;
  return 1;
}

/*
==============
XAnimSetVec3GameParameterByIndex
==============
*/
void XAnimSetVec3GameParameterByIndex(DObj *obj, unsigned __int16 parameterIndex, const vec3_t *value)
{
  XAnimParameterValue *v7; 

  _RDI = value;
  _RAX = GetGameParameterValue(obj, parameterIndex);
  v7 = _RAX;
  if ( _RAX->type != VEC3_VALUE )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vucomiss xmm0, dword ptr [rax+8]
  }
  if ( _RAX->type != VEC3_VALUE )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vucomiss xmm0, dword ptr [rax+0Ch]
  }
  if ( _RAX->type != VEC3_VALUE )
    goto LABEL_5;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vucomiss xmm0, dword ptr [rax+10h]
  }
  if ( _RAX->type != VEC3_VALUE )
LABEL_5:
    XAnimTreeSetParameterDirtyFlag(obj, parameterIndex);
  v7->type = VEC3_VALUE;
  v7->intValue = LODWORD(_RDI->v[0]);
  v7->vec3Value.v[1] = _RDI->v[1];
  v7->vec3Value.v[2] = _RDI->v[2];
  v7->gameStructTypeID = -1;
}

/*
==============
XAnimSetVec3GameParameterByName
==============
*/
bool XAnimSetVec3GameParameterByName(DObj *obj, scr_string_t name, const vec3_t *value)
{
  XAnimTree *tree; 
  XAnimParameterValue *v7; 
  bool result; 
  unsigned __int16 outParameterIndex; 

  _RDI = value;
  tree = obj->tree;
  if ( !tree || !XAnimFindGameParameterIndexByName(tree->anims, name, &outParameterIndex) )
    return 0;
  _RAX = GetGameParameterValue(obj, outParameterIndex);
  v7 = _RAX;
  if ( _RAX->type != VEC3_VALUE )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vucomiss xmm0, dword ptr [rax+8]
  }
  if ( _RAX->type != VEC3_VALUE )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vucomiss xmm0, dword ptr [rax+0Ch]
  }
  if ( _RAX->type != VEC3_VALUE )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vucomiss xmm0, dword ptr [rax+10h]
  }
  if ( _RAX->type != VEC3_VALUE )
LABEL_7:
    XAnimTreeSetParameterDirtyFlag(obj, outParameterIndex);
  v7->type = VEC3_VALUE;
  v7->intValue = LODWORD(_RDI->v[0]);
  v7->vec3Value.v[1] = _RDI->v[1];
  v7->vec3Value.v[2] = _RDI->v[2];
  result = 1;
  v7->gameStructTypeID = -1;
  return result;
}

/*
==============
XAnimShouldIgnoreClientOnlyNode
==============
*/
bool XAnimShouldIgnoreClientOnlyNode(const XAnimTree *tree, const XAnimInfo *nodeInfo)
{
  const dvar_t *v2; 

  v2 = DCONST_DVARBOOL_xanim_disableClientOnlyNodes;
  if ( !DCONST_DVARBOOL_xanim_disableClientOnlyNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableClientOnlyNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return (v2->current.enabled || tree->owner[0] != 1) && !nodeInfo->animToModel && ((__int64)nodeInfo->parts & 0x40) != 0;
}

/*
==============
XAnimShutdownNodeTypes
==============
*/
void XAnimShutdownNodeTypes(void)
{
  *(_QWORD *)&s_xAnimTypeRegistry.numNodeTypes = 0i64;
}

/*
==============
XAnimTreeIsParameterUsed
==============
*/
bool XAnimTreeIsParameterUsed(const DObj *obj, unsigned __int16 parameterIndex)
{
  XAnimTree *tree; 
  unsigned __int16 maxParameters; 
  __int64 v7; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2159, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree || !tree->children )
    return 0;
  maxParameters = tree->maxParameters;
  if ( parameterIndex >= maxParameters )
  {
    LODWORD(v7) = parameterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2173, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( tree->maxParameters )", "parameterIndex doesn't index tree->maxParameters\n\t%i not in [0, %i)", v7, maxParameters) )
      __debugbreak();
  }
  return tree->parameterValues[parameterIndex].flags & 1;
}

/*
==============
XAnimTreeSetParameterDirtyFlag
==============
*/
void XAnimTreeSetParameterDirtyFlag(DObj *obj, unsigned int parameterIndex)
{
  __int64 v2; 
  __int64 v4; 

  v2 = parameterIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1869, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1870, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  if ( (unsigned int)v2 >= obj->tree->maxParameters )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1871, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( obj->tree->maxParameters )", "parameterIndex doesn't index obj->tree->maxParameters\n\t%i not in [0, %i)", v4, obj->tree->maxParameters) )
      __debugbreak();
  }
  obj->tree->parametersDirty = 1;
  obj->tree->parameterValues[v2].flags |= 2u;
}

/*
==============
XAnimTreeUpdateParameters
==============
*/
void XAnimTreeUpdateParameters(const DObj *obj)
{
  XAnimTree *tree; 
  char *Value; 
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  int *v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  __int64 v9; 
  unsigned int i; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 

  tree = obj->tree;
  if ( obj->tree && tree->children )
  {
    Value = (char *)Sys_GetValue(0);
    v3 = (int *)(Value + 19496);
    if ( (unsigned int)(*((_DWORD *)Value + 4874) + 1) >= 3 )
    {
      v16 = 3;
      v14 = *((_DWORD *)Value + 4874) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    if ( (unsigned int)++*v3 >= 3 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = *v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    v4 = Value + 2088;
    v5 = Value + 40;
    if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v4 += 8i64;
    if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v4 = v3;
    if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v6 = &v3[*v3 + 2];
    v7 = __rdtsc();
    *v6 = v7;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    v9 = 0i64;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 435, NULL, 0);
    for ( i = 0; i < tree->maxParameters; tree->parameterValues[v11].flags &= ~1u )
      v11 = i++;
    if ( tree->anims->dirtyBindings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 2293, ASSERT_TYPE_ASSERT, "(!tree->anims->dirtyBindings)", "%s\n\tXAnimTreeUpdateParameters(): Binding indexes not set on anim nodes. Forgot to call XAnimSetupBindingIndexes()?.", "!tree->anims->dirtyBindings") )
      __debugbreak();
    XAnimCustomNodeUpdateParameters(tree, tree->children);
    if ( tree->maxParameters )
    {
      do
      {
        v12 = v9;
        v9 = (unsigned int)(v9 + 1);
        tree->parameterValues[v12].flags &= ~2u;
      }
      while ( (unsigned int)v9 < tree->maxParameters );
    }
    tree->parametersDirty = 0;
    Profile_EndInternal(NULL);
  }
}

/*
==============
XAnimTypeRegistry_CheckFields
==============
*/
void XAnimTypeRegistry_CheckFields(const XAnimTypeFields *typeFields)
{
  unsigned int i; 
  const XAnimField *v3; 
  __int64 v4; 
  int v5; 
  int size; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  for ( i = 0; i < typeFields->numFields; ++i )
  {
    v3 = &typeFields->fields[i];
    v4 = *(unsigned __int16 *)v3->type;
    v5 = s_xanimFieldTypeSizes[v4];
    if ( (unsigned int)v4 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 137, ASSERT_TYPE_ASSERT, "(field->type < XAnimFieldType::COUNT)", "%s\n\tinvalid field type", "field->type < XAnimFieldType::COUNT") )
      __debugbreak();
    size = v3->size;
    if ( size != v5 )
    {
      v7 = SL_ConvertToString((scr_string_t)*v3->name);
      LODWORD(v10) = v5;
      LODWORD(v9) = size;
      LODWORD(v8) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 140, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "custom node field %d ('%s') has size %d, but %d was expected - registered with wrong type?", v8, v7, v9, v10) )
        __debugbreak();
    }
  }
}

/*
==============
XAnimTypeRegistry_GetNodeTypeIndexFromID
==============
*/
__int64 XAnimTypeRegistry_GetNodeTypeIndexFromID(const XAnimTypeRegistry *registry, XAnimNodeTypeID typeID)
{
  unsigned int v4; 
  __int64 v6; 
  unsigned int numNodeTypes; 

  if ( (unsigned __int8)(typeID - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 258, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v4 = (unsigned __int8)typeID - 2;
  if ( v4 >= registry->numNodeTypes )
  {
    numNodeTypes = registry->numNodeTypes;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v6, numNodeTypes) )
      __debugbreak();
  }
  return v4;
}

/*
==============
XAnimTypeRegistry_GetNodeTypeInfo
==============
*/
const XAnimNodeTypeInfo *XAnimTypeRegistry_GetNodeTypeInfo(const XAnimTypeRegistry *registry, XAnimNodeTypeID typeID)
{
  __int64 v4; 
  __int64 v6; 
  unsigned int numNodeTypes; 

  if ( (unsigned __int8)(typeID - 2) > 0xFCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 290, ASSERT_TYPE_ASSERT, "(XAnimIsCustomNodeType( typeID ))", (const char *)&queryFormat, "XAnimIsCustomNodeType( typeID )") )
    __debugbreak();
  v4 = (unsigned int)(unsigned __int8)typeID - 2;
  if ( (unsigned int)v4 >= registry->numNodeTypes )
  {
    numNodeTypes = registry->numNodeTypes;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v6, numNodeTypes) )
      __debugbreak();
  }
  return registry->nodeTypes[v4];
}

/*
==============
XAnimTypeRegistry_NodeTypeHasSerializableParameters
==============
*/
char XAnimTypeRegistry_NodeTypeHasSerializableParameters(const XAnimNodeTypeInfo *nodeTypeInfo)
{
  unsigned int numFields; 
  int v2; 
  __int16 v3; 

  numFields = nodeTypeInfo->fields.numFields;
  v2 = 0;
  if ( !numFields )
    return 1;
  while ( 1 )
  {
    v3 = *(_WORD *)nodeTypeInfo->fields.fields[v2].type;
    if ( !v3 || v3 == 11 )
      break;
    if ( ++v2 >= numFields )
      return 1;
  }
  return 0;
}

/*
==============
XAnimTypeRegistry_RegisterNodeType
==============
*/
__int64 XAnimTypeRegistry_RegisterNodeType(XAnimTypeRegistry *registry, XAnimNodeTypeInfo *typeInfo)
{
  unsigned __int16 dataOffset; 
  unsigned __int16 nodeAllocationSize; 
  unsigned __int16 v6; 
  unsigned __int16 nodeDataSize; 
  __int64 numNodeTypes; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  const XAnimNodeTypeInfo *v12; 
  unsigned __int8 v13; 
  const XAnimField *fields; 
  void (__fastcall *write)(void *, MemoryFile *); 
  bool v16; 
  __int64 v18; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 

  dataOffset = typeInfo->dataOffset;
  if ( dataOffset < 0x60u )
  {
    v25 = 96;
    v23 = dataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 171, ASSERT_TYPE_ASSERT, "( typeInfo->dataOffset ) >= ( sizeof( XAnimInfo ) )", "%s >= %s\n\t%i, %i", "typeInfo->dataOffset", "sizeof( XAnimInfo )", v23, v25) )
      __debugbreak();
  }
  if ( registry->numNodeTypes >= 0x20 )
  {
    LODWORD(v19) = 32;
    LODWORD(v18) = registry->numNodeTypes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 172, ASSERT_TYPE_ASSERT, "(unsigned)( registry->numNodeTypes ) < (unsigned)( XANIM_MAX_CUSTOM_NODE_TYPES )", "registry->numNodeTypes doesn't index XANIM_MAX_CUSTOM_NODE_TYPES\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  nodeAllocationSize = typeInfo->nodeAllocationSize;
  if ( (nodeAllocationSize & 0x1F) != 0 )
  {
    LODWORD(v22) = 32;
    LODWORD(v19) = nodeAllocationSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 173, ASSERT_TYPE_ASSERT, "((typeInfo->nodeAllocationSize & (32 - 1)) == 0)", "%s\n\tnodeAllocationSize %d is not a multiple of %d", "(typeInfo->nodeAllocationSize & (XANIM_ALLOC_ALIGNMENT - 1)) == 0", v19, v22) )
      __debugbreak();
  }
  v6 = typeInfo->nodeAllocationSize;
  nodeDataSize = typeInfo->nodeDataSize;
  if ( nodeDataSize > v6 )
  {
    LODWORD(v24) = v6;
    LODWORD(v22) = nodeDataSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 174, ASSERT_TYPE_ASSERT, "( typeInfo->nodeDataSize ) <= ( typeInfo->nodeAllocationSize )", "%s <= %s\n\t%i, %i", "typeInfo->nodeDataSize", "typeInfo->nodeAllocationSize", v22, v24) )
      __debugbreak();
  }
  numNodeTypes = registry->numNodeTypes;
  v9 = 0;
  v10 = 0;
  if ( !(_DWORD)numNodeTypes )
  {
LABEL_17:
    registry->numNodeTypes = numNodeTypes + 1;
    v13 = numNodeTypes + 2;
    registry->nodeTypes[numNodeTypes] = typeInfo;
    fields = typeInfo->fields.fields;
    typeInfo->nodeTypeID = numNodeTypes + 2;
    if ( fields && fields->name )
    {
      do
      {
        ++v9;
        ++fields;
      }
      while ( fields->name );
    }
    typeInfo->fields.numFields = v9;
    XAnimTypeRegistry_CheckFields(&typeInfo->fields);
    write = typeInfo->functions.write;
    if ( typeInfo->functions.read )
    {
      if ( write )
        return v13;
    }
    else if ( !write )
    {
      if ( !XAnimTypeRegistry_NodeTypeHasSerializableParameters(typeInfo) )
      {
        v20 = SL_ConvertToString((scr_string_t)*typeInfo->name);
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 205, ASSERT_TYPE_ASSERT, "(XAnimTypeRegistry_NodeTypeHasSerializableParameters( typeInfo ))", "%s\n\tCustom node '%s' requires read/write functions as it contains pointers or scr_string_t parameters", "XAnimTypeRegistry_NodeTypeHasSerializableParameters( typeInfo )", v20);
        goto LABEL_29;
      }
      return v13;
    }
    v21 = SL_ConvertToString((scr_string_t)*typeInfo->name);
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 200, ASSERT_TYPE_ASSERT, "(typeInfo->functions.read != 0 && typeInfo->functions.write != 0)", "%s\n\tCustom node '%s' must provide both read and write functions", "typeInfo->functions.read != NULL && typeInfo->functions.write != NULL", v21);
LABEL_29:
    if ( v16 )
      __debugbreak();
    return v13;
  }
  while ( 1 )
  {
    v11 = v10;
    v12 = registry->nodeTypes[v10];
    if ( v12->name == typeInfo->name || v12 == typeInfo )
      break;
    if ( ++v10 >= (unsigned int)numNodeTypes )
      goto LABEL_17;
  }
  LODWORD(v18) = v10;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 180, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "custom node type (%d) already registered", v18) )
    __debugbreak();
  return (unsigned __int8)registry->nodeTypes[v11]->nodeTypeID;
}

/*
==============
XAnimWriteConstString
==============
*/
void XAnimWriteConstString(MemoryFile *memFile, scr_string_t str)
{
  const char *v3; 

  v3 = SL_ConvertToString(str);
  MemFile_WriteCString(memFile, v3);
}

/*
==============
XAnimWriteConstStringOfSize
==============
*/
void XAnimWriteConstStringOfSize(MemoryFile *memFile, scr_string_t str)
{
  const char *v4; 
  unsigned int ConstStringSize; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1430, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1431, ASSERT_TYPE_ASSERT, "(str != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "str != NULL_SCR_STRING") )
    __debugbreak();
  v4 = SL_ConvertToString(str);
  ConstStringSize = XAnimGetConstStringSize(str);
  if ( !ConstStringSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 1435, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  p = ConstStringSize;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteCString(memFile, v4, ConstStringSize);
}

/*
==============
XAnimWriteCustomNode
==============
*/
void XAnimWriteCustomNode(const XAnimTree *tree, XAnimInfo *animInfo, MemoryFile *memFile)
{
  const XAnim_s *SubTreeAnims; 
  XAnimNodeTypeID nodeType; 
  __int64 v8; 
  const XAnimNodeTypeInfo *v9; 
  void (__fastcall *write)(void *, MemoryFile *); 
  __int64 v11; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 532, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 533, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 534, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !XAnimShouldIgnoreClientOnlyNode(tree, animInfo) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)animInfo->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 543, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    nodeType = SubTreeAnims->entries[animInfo->animIndex].nodeType;
    if ( (unsigned __int8)(nodeType - 2) <= 0xFCu )
    {
      v8 = (unsigned int)(unsigned __int8)nodeType - 2;
      if ( (unsigned int)v8 >= s_xAnimTypeRegistry.numNodeTypes )
      {
        LODWORD(v11) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( registry->numNodeTypes )", "index doesn't index registry->numNodeTypes\n\t%i not in [0, %i)", v11, s_xAnimTypeRegistry.numNodeTypes) )
          __debugbreak();
      }
      v9 = s_xAnimTypeRegistry.nodeTypes[v8];
      write = v9->functions.write;
      if ( write )
        write((char *)animInfo + v9->dataOffset, memFile);
      else
        MemFile_WriteData(memFile, v9->nodeDataSize, (char *)animInfo + v9->dataOffset);
    }
  }
}

/*
==============
XAnimWriteParameterValues
==============
*/
void XAnimWriteParameterValues(const XAnimTree *tree, MemoryFile *memFile)
{
  unsigned int numGameParameters; 
  __int64 v5; 
  int *p_p; 
  unsigned __int64 v9; 
  MemoryFile *v10; 
  unsigned int p; 

  numGameParameters = tree->anims->numGameParameters;
  p = numGameParameters;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( numGameParameters )
  {
    v5 = numGameParameters;
    for ( _RDI = 0i64; ; ++_RDI )
    {
      _RSI = tree->parameterValues;
      if ( _RSI[_RDI].type == BOOL_VALUE )
        break;
      if ( _RSI[_RDI].type == BYTE_VALUE )
      {
        LOBYTE(p) = 2;
LABEL_14:
        MemFile_WriteData(memFile, 1ui64, &p);
        p_p = (int *)&p;
        LOBYTE(p) = _RSI[_RDI].boolValue;
        v9 = 1i64;
        goto LABEL_15;
      }
      p_p = (int *)&p;
      v9 = 1i64;
      if ( _RSI[_RDI].type == INT_VALUE )
      {
        LOBYTE(p) = 5;
        MemFile_WriteData(memFile, 1ui64, &p);
        p_p = (int *)&p;
        p = _RSI[_RDI].intValue;
        v9 = 4i64;
        goto LABEL_15;
      }
      if ( _RSI[_RDI].type != FLOAT_VALUE )
      {
        v10 = memFile;
        if ( _RSI[_RDI].type != VEC3_VALUE )
        {
          LOBYTE(p) = 0;
LABEL_16:
          MemFile_WriteData(v10, v9, p_p);
          goto LABEL_17;
        }
        LOBYTE(p) = 4;
        MemFile_WriteData(memFile, 1ui64, &p);
        p_p = (int *)&_RSI[_RDI].8;
        v9 = 12i64;
LABEL_15:
        v10 = memFile;
        goto LABEL_16;
      }
      LOBYTE(p) = 3;
      MemFile_WriteData(memFile, 1ui64, &p);
      __asm { vmovss  xmm1, dword ptr [rdi+rsi+8]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
LABEL_17:
      LOBYTE(p) = _RSI[_RDI].flags;
      MemFile_WriteData(memFile, 1ui64, &p);
      if ( !--v5 )
        return;
    }
    LOBYTE(p) = 1;
    goto LABEL_14;
  }
}

