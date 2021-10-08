/*
==============
NetConstStrings_AreStringsLoaded
==============
*/

bool __fastcall NetConstStrings_AreStringsLoaded()
{
  return ?NetConstStrings_AreStringsLoaded@@YA_NXZ();
}

/*
==============
NetConstStrings_GetTypeTagName
==============
*/

const char *__fastcall NetConstStrings_GetTypeTagName(const unsigned int netConstStringType)
{
  return ?NetConstStrings_GetTypeTagName@@YAPEBDI@Z(netConstStringType);
}

/*
==============
NetConstStrings_GetClientTagIndex
==============
*/

bool __fastcall NetConstStrings_GetClientTagIndex(const char *clientTagName, unsigned int *clientTagIndex)
{
  return ?NetConstStrings_GetClientTagIndex@@YA_NPEBDPEAI@Z(clientTagName, clientTagIndex);
}

/*
==============
NetConstStrings_CallForCommonCompositeModels
==============
*/

void __fastcall NetConstStrings_CallForCommonCompositeModels(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForCommonCompositeModels@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllVehicleStrings
==============
*/

void __fastcall NetConstStrings_CallForAllVehicleStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllVehicleStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetBitsNeededForType
==============
*/

unsigned int __fastcall NetConstStrings_GetBitsNeededForType(const NetConstStringType type)
{
  return ?NetConstStrings_GetBitsNeededForType@@YAIW4NetConstStringType@@@Z(type);
}

/*
==============
NetConstStrings_GetCountForType
==============
*/

unsigned int __fastcall NetConstStrings_GetCountForType(const NetConstStringType type)
{
  return ?NetConstStrings_GetCountForType@@YAIW4NetConstStringType@@@Z(type);
}

/*
==============
NetConstStrings_CallForAllExecutionStrings
==============
*/

void __fastcall NetConstStrings_CallForAllExecutionStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllExecutionStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetAtrIndex
==============
*/

bool __fastcall NetConstStrings_GetAtrIndex(const char *atrName, unsigned int *outAtrIndex)
{
  return ?NetConstStrings_GetAtrIndex@@YA_NPEBDPEAI@Z(atrName, outAtrIndex);
}

/*
==============
NetConstStrings_BuildStringMap
==============
*/

void NetConstStrings_BuildStringMap(void)
{
  ?NetConstStrings_BuildStringMap@@YAXXZ();
}

/*
==============
NetConstStrings_CallForAllModelsOfType
==============
*/

void __fastcall NetConstStrings_CallForAllModelsOfType(const NetConstStringType filterType, const unsigned int offset, void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllModelsOfType@@YAXW4NetConstStringType@@IP6AXIPEBD@Z@Z(filterType, offset, callback);
}

/*
==============
NetConstStrings_GetClientTagName
==============
*/

bool __fastcall NetConstStrings_GetClientTagName(const unsigned int clientTagIndex, const char **outClientTagName)
{
  return ?NetConstStrings_GetClientTagName@@YA_NIPEAPEBD@Z(clientTagIndex, outClientTagName);
}

/*
==============
NetConstStrings_GetXAnimCurveIndex
==============
*/

bool __fastcall NetConstStrings_GetXAnimCurveIndex(const char *name, unsigned int *outIndex)
{
  return ?NetConstStrings_GetXAnimCurveIndex@@YA_NPEBDPEAI@Z(name, outIndex);
}

/*
==============
NetConstStrings_EnableRestrictions
==============
*/

void __fastcall NetConstStrings_EnableRestrictions(const bool enableRestrictions)
{
  ?NetConstStrings_EnableRestrictions@@YAX_N@Z(enableRestrictions);
}

/*
==============
NetConstStrings_GetVisionSetName
==============
*/

bool __fastcall NetConstStrings_GetVisionSetName(const unsigned int visionSetIndex, const char **outVisionSetName)
{
  return ?NetConstStrings_GetVisionSetName@@YA_NIPEAPEBD@Z(visionSetIndex, outVisionSetName);
}

/*
==============
NetConstStrings_GetLuiStringIndex
==============
*/

int __fastcall NetConstStrings_GetLuiStringIndex(const char *luiString, unsigned int *luiStringIndex)
{
  return ?NetConstStrings_GetLuiStringIndex@@YAHPEBDPEAI@Z(luiString, luiStringIndex);
}

/*
==============
NetConstStrings_Init
==============
*/

void NetConstStrings_Init(void)
{
  ?NetConstStrings_Init@@YAXXZ();
}

/*
==============
NetConstStrings_GetStaticMaxCount
==============
*/

unsigned int __fastcall NetConstStrings_GetStaticMaxCount(const unsigned int netConstStringType)
{
  return ?NetConstStrings_GetStaticMaxCount@@YAII@Z(netConstStringType);
}

/*
==============
NetConstStrings_GetNameFromIndexPlusOne
==============
*/

bool __fastcall NetConstStrings_GetNameFromIndexPlusOne(const NetConstStringType type, const unsigned int index, const char **outName)
{
  return ?NetConstStrings_GetNameFromIndexPlusOne@@YA_NW4NetConstStringType@@IPEAPEBD@Z(type, index, outName);
}

/*
==============
NetConstStrings_CallForLevelCompositeModels
==============
*/

void __fastcall NetConstStrings_CallForLevelCompositeModels(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForLevelCompositeModels@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetXAnimCurveName
==============
*/

bool __fastcall NetConstStrings_GetXAnimCurveName(const unsigned int index, const char **outName)
{
  return ?NetConstStrings_GetXAnimCurveName@@YA_NIPEAPEBD@Z(index, outName);
}

/*
==============
NetConstStrings_CallForAllRumbleString
==============
*/

void __fastcall NetConstStrings_CallForAllRumbleString(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllRumbleString@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllHudOutlineStrings
==============
*/

void __fastcall NetConstStrings_CallForAllHudOutlineStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllHudOutlineStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForLevelShockStrings
==============
*/

void __fastcall NetConstStrings_CallForLevelShockStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForLevelShockStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetExecutionIndex
==============
*/

int __fastcall NetConstStrings_GetExecutionIndex(const char *executionName, unsigned int *outExecutionIndex)
{
  return ?NetConstStrings_GetExecutionIndex@@YAHPEBDPEAI@Z(executionName, outExecutionIndex);
}

/*
==============
NetConstStrings_GetActualAssetType
==============
*/

XAssetType __fastcall NetConstStrings_GetActualAssetType(const unsigned int netConstStringType)
{
  return ?NetConstStrings_GetActualAssetType@@YA?AW4XAssetType@@I@Z(netConstStringType);
}

/*
==============
NetConstStrings_CallForCommonWeaponStrings
==============
*/

void __fastcall NetConstStrings_CallForCommonWeaponStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForCommonWeaponStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_BuildAssetName
==============
*/

void __fastcall NetConstStrings_BuildAssetName(char *nameBuf, const unsigned int nameBufLen, const unsigned int netConstStringType, const char *assetNameSuffix)
{
  ?NetConstStrings_BuildAssetName@@YAXPEADIIPEBD@Z(nameBuf, nameBufLen, netConstStringType, assetNameSuffix);
}

/*
==============
NetConstStrings_CallForAllGestureStrings
==============
*/

void __fastcall NetConstStrings_CallForAllGestureStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllGestureStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetAccessoryIndex
==============
*/

int __fastcall NetConstStrings_GetAccessoryIndex(const char *accessoryName, unsigned int *outAccessoryIndex)
{
  return ?NetConstStrings_GetAccessoryIndex@@YAHPEBDPEAI@Z(accessoryName, outAccessoryIndex);
}

/*
==============
NetConstStrings_CallForAllAccessoryStrings
==============
*/

void __fastcall NetConstStrings_CallForAllAccessoryStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllAccessoryStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllXAnimCurveStrings
==============
*/

void __fastcall NetConstStrings_CallForAllXAnimCurveStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllXAnimCurveStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForLevelModels
==============
*/

void __fastcall NetConstStrings_CallForLevelModels(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForLevelModels@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_SyncError
==============
*/

void __fastcall NetConstStrings_SyncError(const unsigned int index, const char *value, const char *source)
{
  ?NetConstStrings_SyncError@@YAXIPEBD0@Z(index, value, source);
}

/*
==============
NetConstStringsLookup::AddString
==============
*/

void __fastcall NetConstStringsLookup::AddString(NetConstStringsLookup *this, const NetConstStringLookupKey *ncsLookupKey, const unsigned __int64 ncsStringLen, const unsigned __int16 listIndex, const unsigned __int16 entryIndex)
{
  ?AddString@NetConstStringsLookup@@QEAAXAEBUNetConstStringLookupKey@@_KGG@Z(this, ncsLookupKey, ncsStringLen, listIndex, entryIndex);
}

/*
==============
NetConstStrings_MarkStringsLoaded
==============
*/

void NetConstStrings_MarkStringsLoaded(void)
{
  ?NetConstStrings_MarkStringsLoaded@@YAXXZ();
}

/*
==============
NetConstStrings_GetClientCharacterName
==============
*/

bool __fastcall NetConstStrings_GetClientCharacterName(const unsigned int index, const char **outName)
{
  return ?NetConstStrings_GetClientCharacterName@@YA_NIPEAPEBD@Z(index, outName);
}

/*
==============
NetConstStrings_CallForCommonModels
==============
*/

void __fastcall NetConstStrings_CallForCommonModels(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForCommonModels@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllCarryObjectStrings
==============
*/

void __fastcall NetConstStrings_CallForAllCarryObjectStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllCarryObjectStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_Clear
==============
*/

void NetConstStrings_Clear(void)
{
  ?NetConstStrings_Clear@@YAXXZ();
}

/*
==============
NetConstStrings_GetVisionSetIndex
==============
*/

bool __fastcall NetConstStrings_GetVisionSetIndex(const char *visionSetName, unsigned int *outVisionSetIndex)
{
  return ?NetConstStrings_GetVisionSetIndex@@YA_NPEBDPEAI@Z(visionSetName, outVisionSetIndex);
}

/*
==============
NetConstStrings_GetTypeDevName
==============
*/

const char *__fastcall NetConstStrings_GetTypeDevName(const unsigned int netConstStringType)
{
  return ?NetConstStrings_GetTypeDevName@@YAPEBDI@Z(netConstStringType);
}

/*
==============
NetConstStrings_CallForLevelWeaponStrings
==============
*/

void __fastcall NetConstStrings_CallForLevelWeaponStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForLevelWeaponStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllVehicleCamoStrings
==============
*/

void __fastcall NetConstStrings_CallForAllVehicleCamoStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllVehicleCamoStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetIndexPlusOneFromName
==============
*/

bool __fastcall NetConstStrings_GetIndexPlusOneFromName(const NetConstStringType type, const char *name, unsigned int *outIndex)
{
  return ?NetConstStrings_GetIndexPlusOneFromName@@YA_NW4NetConstStringType@@PEBDPEAI@Z(type, name, outIndex);
}

/*
==============
NetConstStrings_CallForAllWeaponCamoStrings
==============
*/

void __fastcall NetConstStrings_CallForAllWeaponCamoStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllWeaponCamoStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetDevTypeByName
==============
*/

bool __fastcall NetConstStrings_GetDevTypeByName(const char *name, unsigned int *outIndex)
{
  return ?NetConstStrings_GetDevTypeByName@@YA_NPEBDPEAI@Z(name, outIndex);
}

/*
==============
NetConstStrings_GetParseString
==============
*/

const char *__fastcall NetConstStrings_GetParseString(const unsigned int netConstStringType)
{
  return ?NetConstStrings_GetParseString@@YAPEBDI@Z(netConstStringType);
}

/*
==============
NetConstStringsLookup::FindString
==============
*/

bool __fastcall NetConstStringsLookup::FindString(NetConstStringsLookup *this, const NetConstStringLookupKey *ncsLookupKey, unsigned __int16 *outIndex)
{
  return ?FindString@NetConstStringsLookup@@QEBA_NAEBUNetConstStringLookupKey@@AEAG@Z(this, ncsLookupKey, outIndex);
}

/*
==============
NetConstStrings_GetAtrName
==============
*/

bool __fastcall NetConstStrings_GetAtrName(const unsigned int atrIndex, const char **outAtrName)
{
  return ?NetConstStrings_GetAtrName@@YA_NIPEAPEBD@Z(atrIndex, outAtrName);
}

/*
==============
NetConstStrings_CallForAllCinematicMotionStrings
==============
*/

void __fastcall NetConstStrings_CallForAllCinematicMotionStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllCinematicMotionStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllScriptableDefs
==============
*/

void __fastcall NetConstStrings_CallForAllScriptableDefs(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllScriptableDefs@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_IsPrecacheAllowed
==============
*/

bool __fastcall NetConstStrings_IsPrecacheAllowed()
{
  return ?NetConstStrings_IsPrecacheAllowed@@YA_NXZ();
}

/*
==============
NetConstStrings_CallForCommonShockStrings
==============
*/

void __fastcall NetConstStrings_CallForCommonShockStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForCommonShockStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllSuitStrings
==============
*/

void __fastcall NetConstStrings_CallForAllSuitStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllSuitStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetNameFromIndex
==============
*/

bool __fastcall NetConstStrings_GetNameFromIndex(const NetConstStringType type, const unsigned int index, const char **outName)
{
  return ?NetConstStrings_GetNameFromIndex@@YA_NW4NetConstStringType@@IPEAPEBD@Z(type, index, outName);
}

/*
==============
NetConstStrings_GetLuiStringCount
==============
*/

unsigned int __fastcall NetConstStrings_GetLuiStringCount()
{
  return ?NetConstStrings_GetLuiStringCount@@YAIXZ();
}

/*
==============
NetConstStrings_GetClientCharacterIndex
==============
*/

bool __fastcall NetConstStrings_GetClientCharacterIndex(const char *name, unsigned int *outIndex)
{
  return ?NetConstStrings_GetClientCharacterIndex@@YA_NPEBDPEAI@Z(name, outIndex);
}

/*
==============
NetConstStrings_CallForAllSpaceshipTargetStrings
==============
*/

void __fastcall NetConstStrings_CallForAllSpaceshipTargetStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllSpaceshipTargetStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetIndexFromName
==============
*/

bool __fastcall NetConstStrings_GetIndexFromName(const NetConstStringType type, const char *name, unsigned int *outIndex)
{
  return ?NetConstStrings_GetIndexFromName@@YA_NW4NetConstStringType@@PEBDPEAI@Z(type, name, outIndex);
}

/*
==============
NetConstStrings_GetLuiStringName
==============
*/

int __fastcall NetConstStrings_GetLuiStringName(const unsigned int luiStringIndex, const char **outLuiString)
{
  return ?NetConstStrings_GetLuiStringName@@YAHIPEAPEBD@Z(luiStringIndex, outLuiString);
}

/*
==============
NetConstStrings_GetAccessoryName
==============
*/

int __fastcall NetConstStrings_GetAccessoryName(const unsigned int accessoryIndex, const char **outAccessoryName)
{
  return ?NetConstStrings_GetAccessoryName@@YAHIPEAPEBD@Z(accessoryIndex, outAccessoryName);
}

/*
==============
NetConstStrings_GetVisionSetStringCount
==============
*/

unsigned int __fastcall NetConstStrings_GetVisionSetStringCount()
{
  return ?NetConstStrings_GetVisionSetStringCount@@YAIXZ();
}

/*
==============
NetConstStrings_CallForAllCameraStrings
==============
*/

void __fastcall NetConstStrings_CallForAllCameraStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllCameraStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_CallForAllOfType
==============
*/

void __fastcall NetConstStrings_CallForAllOfType(const NetConstStringType type, const unsigned int offset, void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllOfType@@YAXW4NetConstStringType@@IP6AXIPEBD@Z@Z(type, offset, callback);
}

/*
==============
NetConstStrings_GetSpaceshipTargetIndex
==============
*/

int __fastcall NetConstStrings_GetSpaceshipTargetIndex(const char *spaceshipTargetName, unsigned int *spaceshipTargetIndex)
{
  return ?NetConstStrings_GetSpaceshipTargetIndex@@YAHPEBDPEAI@Z(spaceshipTargetName, spaceshipTargetIndex);
}

/*
==============
NetConstStrings_CallForAllBlendSpace2DStrings
==============
*/

void __fastcall NetConstStrings_CallForAllBlendSpace2DStrings(void (__fastcall *callback)(const unsigned int, const char *))
{
  ?NetConstStrings_CallForAllBlendSpace2DStrings@@YAXP6AXIPEBD@Z@Z(callback);
}

/*
==============
NetConstStrings_GetChecksum
==============
*/

int __fastcall NetConstStrings_GetChecksum()
{
  return ?NetConstStrings_GetChecksum@@YAHXZ();
}

/*
==============
NetConstStrings_ReportMissingString
==============
*/

void __fastcall NetConstStrings_ReportMissingString(const NetConstStringType type, const char *string)
{
  ?NetConstStrings_ReportMissingString@@YAXW4NetConstStringType@@PEBD@Z(type, string);
}

/*
==============
NetConstStrings_GetStringTotalCount
==============
*/

unsigned int __fastcall NetConstStrings_GetStringTotalCount()
{
  return ?NetConstStrings_GetStringTotalCount@@YAIXZ();
}

/*
==============
NetConstStringsLookup::AddString
==============
*/
void NetConstStringsLookup::AddString(NetConstStringsLookup *this, const NetConstStringLookupKey *ncsLookupKey, const unsigned __int64 ncsStringLen, const unsigned __int16 listIndex, const unsigned __int16 entryIndex)
{
  const char *m_name; 
  unsigned int m_type; 
  const char *v11; 
  int v12; 
  unsigned __int16 v13; 
  unsigned __int16 m_tableNodeCount; 
  unsigned __int16 v15; 
  __int64 v16; 
  unsigned __int16 headNodeIndex; 
  __int64 v18; 
  unsigned __int16 *p_m_listIndex; 
  NetConstStrings *ncs; 
  const char *name; 
  __int64 v22; 
  const char *v23; 
  char *fmt; 
  NetConstStringsLookup::NcsHashTableNode *nodes; 
  __int64 v26; 

  if ( ncsLookupKey->m_type == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 565, ASSERT_TYPE_ASSERT, "( ncsLookupKey.m_type != NETCONSTSTRINGTYPE_XCOMPOSITEMODEL )", "CompositeModels share the XModel NCS Map and shouldn't be accessed.") )
    __debugbreak();
  m_name = ncsLookupKey->m_name;
  m_type = ncsLookupKey->m_type;
  v11 = m_name;
  if ( m_name > &m_name[ncsStringLen] )
    ncsStringLen = 0i64;
  if ( ncsStringLen )
  {
    do
    {
      v12 = *v11++;
      m_type = v12 + 33 * m_type;
    }
    while ( v11 - m_name != ncsStringLen );
  }
  v13 = IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>((IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher> *)this, ncsLookupKey, m_type, this->m_hashTable.buckets, 0x3FFFu, this->m_tableNodes);
  if ( v13 == 0xFFFF )
  {
    m_tableNodeCount = this->m_tableNodeCount;
    if ( m_tableNodeCount >= 0x2EE0u )
    {
      LODWORD(nodes) = m_tableNodeCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 574, ASSERT_TYPE_ASSERT, "(unsigned)( m_tableNodeCount ) < (unsigned)( ( sizeof( *array_counter( m_tableNodes ) ) + 0 ) )", "m_tableNodeCount doesn't index m_tableNodes\n\t%i not in [0, %i)", nodes, 12000) )
        __debugbreak();
    }
    v15 = this->m_tableNodeCount;
    if ( IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>((IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher> *)this, ncsLookupKey, m_type, this->m_hashTable.buckets, 0x3FFFu, this->m_tableNodes) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\hash_table.h", 372, ASSERT_TYPE_ASSERT, "(this->Find( key, hash, nodes ) == Base::s_nullNodeIndex)", (const char *)&queryFormat, "this->Find( key, hash, nodes ) == Base::s_nullNodeIndex") )
      __debugbreak();
    v16 = m_type & 0x3FFF;
    headNodeIndex = this->m_hashTable.buckets[v16].headNodeIndex;
    this->m_hashTable.buckets[v16].headNodeIndex = v15;
    this->m_tableNodes[v15].m_nextAssetIndex = headNodeIndex;
    v18 = this->m_tableNodeCount;
    this->m_tableNodes[v18].m_entryIndex = entryIndex;
    this->m_tableNodes[v18].m_listIndex = listIndex;
    ++this->m_tableNodeCount;
  }
  else
  {
    p_m_listIndex = &this->m_tableNodes[v13].m_listIndex;
    if ( *p_m_listIndex >= s_netConstStringMapListCount )
    {
      LODWORD(nodes) = *p_m_listIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( m_listIndex ) < (unsigned)( s_netConstStringMapListCount )", "m_listIndex doesn't index s_netConstStringMapListCount\n\t%i not in [0, %i)", nodes, s_netConstStringMapListCount) )
        __debugbreak();
    }
    ncs = s_netConstStringMapLists[*p_m_listIndex].ncs;
    if ( !ncs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 527, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
      __debugbreak();
    name = ncs->name;
    v22 = (unsigned int)ncsLookupKey->m_type;
    v23 = ncsLookupKey->m_name;
    if ( (unsigned int)v22 >= 0x29 )
    {
      LODWORD(v26) = 41;
      LODWORD(nodes) = ncsLookupKey->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", nodes, v26) )
        __debugbreak();
    }
    LODWORD(fmt) = v13;
    Com_PrintWarning(16, "NetConstStrings: [%s] Duplicate '%s' at index %d from '%s'\n", s_netConstStringTypeNames[v22], v23, fmt, name);
  }
}

/*
==============
NetConstStringsLookup::FindString
==============
*/
char NetConstStringsLookup::FindString(NetConstStringsLookup *this, const NetConstStringLookupKey *ncsLookupKey, unsigned __int16 *outIndex)
{
  const char *m_name; 
  unsigned int m_type; 
  int i; 
  unsigned __int16 v9; 
  unsigned __int16 m_tableNodeCount; 
  char *v12; 
  unsigned __int16 v13; 
  NetConstStrings *ncs; 
  NetConstStringType stringType; 
  NetConstStringType v16; 
  NetConstStringType v17; 
  NetConstStringType v18; 
  unsigned __int16 v19; 
  NetConstStrings *v20; 
  unsigned __int16 v21; 
  NetConstStringsLookup::NcsHashTableNode *nodes; 
  __int64 v23; 

  if ( ncsLookupKey->m_type == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 595, ASSERT_TYPE_ASSERT, "( ncsLookupKey.m_type != NETCONSTSTRINGTYPE_XCOMPOSITEMODEL )", "CompositeModels share the XModel NCS Map and shouldn't be accessed.") )
    __debugbreak();
  m_name = ncsLookupKey->m_name;
  m_type = ncsLookupKey->m_type;
  for ( i = *m_name; *m_name; i = *m_name )
  {
    ++m_name;
    m_type = i + 33 * m_type;
  }
  v9 = IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>((IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher> *)this, ncsLookupKey, m_type, this->m_hashTable.buckets, 0x3FFFu, this->m_tableNodes);
  if ( v9 == 0xFFFF )
    return 0;
  m_tableNodeCount = this->m_tableNodeCount;
  if ( v9 >= m_tableNodeCount )
  {
    LODWORD(nodes) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_tableNodeCount )", "index doesn't index m_tableNodeCount\n\t%i not in [0, %i)", nodes, m_tableNodeCount) )
      __debugbreak();
  }
  v12 = (char *)this + 6 * v9;
  v13 = *((_WORD *)v12 + 16385);
  if ( v13 >= s_netConstStringMapListCount )
  {
    LODWORD(v23) = s_netConstStringMapListCount;
    LODWORD(nodes) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( m_listIndex ) < (unsigned)( s_netConstStringMapListCount )", "m_listIndex doesn't index s_netConstStringMapListCount\n\t%i not in [0, %i)", nodes, v23) )
      __debugbreak();
  }
  ncs = s_netConstStringMapLists[*((unsigned __int16 *)v12 + 16385)].ncs;
  if ( !ncs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 481, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
    __debugbreak();
  stringType = ncs->stringType;
  v16 = NETCONSTSTRINGTYPE_XMODEL;
  v17 = ncsLookupKey->m_type;
  v18 = NETCONSTSTRINGTYPE_XMODEL;
  if ( stringType != NETCONSTSTRINGTYPE_XCOMPOSITEMODEL )
    v18 = stringType;
  if ( v18 != v17 )
  {
    v19 = *((_WORD *)v12 + 16385);
    if ( v19 >= s_netConstStringMapListCount )
    {
      LODWORD(v23) = s_netConstStringMapListCount;
      LODWORD(nodes) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( m_listIndex ) < (unsigned)( s_netConstStringMapListCount )", "m_listIndex doesn't index s_netConstStringMapListCount\n\t%i not in [0, %i)", nodes, v23) )
        __debugbreak();
    }
    v20 = s_netConstStringMapLists[*((unsigned __int16 *)v12 + 16385)].ncs;
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 481, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
      __debugbreak();
    if ( v20->stringType != NETCONSTSTRINGTYPE_XCOMPOSITEMODEL )
      v16 = v20->stringType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 608, ASSERT_TYPE_ASSERT, "( ncsNode.GetStringType() ) == ( ncsLookupKey.m_type )", "%s == %s\n\t%i, %i", "ncsNode.GetStringType()", "ncsLookupKey.m_type", v16, v17) )
      __debugbreak();
  }
  v21 = *((_WORD *)v12 + 16385);
  if ( v21 >= s_netConstStringMapListCount )
  {
    LODWORD(v23) = s_netConstStringMapListCount;
    LODWORD(nodes) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 509, ASSERT_TYPE_ASSERT, "(unsigned)( m_listIndex ) < (unsigned)( s_netConstStringMapListCount )", "m_listIndex doesn't index s_netConstStringMapListCount\n\t%i not in [0, %i)", nodes, v23) )
      __debugbreak();
  }
  if ( !s_netConstStringMapLists[*((unsigned __int16 *)v12 + 16385)].ncs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 510, ASSERT_TYPE_ASSERT, "(s_netConstStringMapLists[m_listIndex].ncs)", (const char *)&queryFormat, "s_netConstStringMapLists[m_listIndex].ncs") )
    __debugbreak();
  if ( *((unsigned __int16 *)v12 + 16386) >= s_netConstStringMapLists[*((unsigned __int16 *)v12 + 16385)].ncs->entryCount )
  {
    LODWORD(v23) = s_netConstStringMapLists[*((unsigned __int16 *)v12 + 16385)].ncs->entryCount;
    LODWORD(nodes) = *((unsigned __int16 *)v12 + 16386);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 511, ASSERT_TYPE_ASSERT, "(unsigned)( m_entryIndex ) < (unsigned)( s_netConstStringMapLists[m_listIndex].ncs->entryCount )", "m_entryIndex doesn't index s_netConstStringMapLists[m_listIndex].ncs->entryCount\n\t%i not in [0, %i)", nodes, v23) )
      __debugbreak();
  }
  *outIndex = *((_WORD *)v12 + 16386) + s_netConstStringMapLists[*((unsigned __int16 *)v12 + 16385)].ncsOffset;
  return 1;
}

/*
==============
NetConstStringMap_GetStringAtIndex
==============
*/
bool NetConstStringMap_GetStringAtIndex(const NetConstStringType stringType, const unsigned int index, const char **outStringValue)
{
  __int64 v5; 
  NetConstStringMapList *head; 
  NetConstStrings *ncs; 
  int ncsOffset; 
  unsigned int entryCount; 
  bool result; 
  __int64 v11; 
  __int64 v12; 

  v5 = stringType;
  if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1405, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur between client and server.", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  if ( !NetConstStrings_IsSupportedType((const NetConstStringType)v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1406, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
    __debugbreak();
  if ( (_DWORD)v5 == 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1407, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  head = s_netConstStringMaps[v5].head;
  if ( head )
  {
    while ( 1 )
    {
      ncs = head->ncs;
      if ( !head->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1414, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
        __debugbreak();
      if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1415, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
        __debugbreak();
      ncsOffset = head->ncsOffset;
      entryCount = ncs->entryCount;
      if ( ncsOffset + entryCount > index )
        break;
      head = head->next;
      if ( !head )
        goto LABEL_19;
    }
    v11 = index - ncsOffset;
    if ( (unsigned int)v11 >= entryCount )
    {
      LODWORD(v12) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1424, ASSERT_TYPE_ASSERT, "(unsigned)( currentTableIndex ) < (unsigned)( netConstStringsEntry->entryCount )", "currentTableIndex doesn't index netConstStringsEntry->entryCount\n\t%i not in [0, %i)", v12, ncs->entryCount) )
        __debugbreak();
    }
    result = 1;
    *outStringValue = ncs->stringList[v11];
  }
  else
  {
LABEL_19:
    *outStringValue = NULL;
    return 0;
  }
  return result;
}

/*
==============
NetConstString_ForEachCommonFiltered_Internal
==============
*/
void NetConstString_ForEachCommonFiltered_Internal(void (*callback)(const unsigned int, const char *), const NetConstStringType stringType, const NetConstStringType filterType, const unsigned int startIndex)
{
  NetConstStringType v4; 
  unsigned int v7; 
  NetConstStringMap *v8; 
  unsigned int v9; 
  NetConstStringMapList *head; 
  NetConstStrings *ncs; 
  __int64 i; 
  NetConstStringMap *v13; 
  unsigned int v15; 

  v15 = startIndex;
  v4 = stringType;
  v7 = 0;
  v8 = &s_netConstStringMaps[stringType];
  v13 = v8;
  do
  {
    v9 = startIndex;
    if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 766, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
      __debugbreak();
    if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 768, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
      __debugbreak();
    if ( !NetConstStrings_IsSupportedType(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 769, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
      __debugbreak();
    if ( v4 == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 770, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
      __debugbreak();
    head = v8->head;
    if ( v8->head )
    {
      do
      {
        ncs = head->ncs;
        if ( !head->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 777, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
          __debugbreak();
        if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 778, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
          __debugbreak();
        if ( ncs->stringType == filterType && ncs->sourceType == v7 )
        {
          for ( i = 0i64; (unsigned int)i < ncs->entryCount; i = (unsigned int)(i + 1) )
            callback(i + v9, ncs->stringList[i]);
        }
        head = head->next;
        v9 += ncs->entryCount;
      }
      while ( head );
      v4 = stringType;
      v8 = v13;
    }
    startIndex = v15;
    ++v7;
  }
  while ( v7 < 2 );
}

/*
==============
NetConstString_ForEachCommon_Internal
==============
*/
void NetConstString_ForEachCommon_Internal(void (*callback)(const unsigned int, const char *), const NetConstStringType stringType, const unsigned int startIndex)
{
  unsigned int v4; 
  unsigned int v6; 
  NetConstStringMap *v7; 
  unsigned int v8; 
  NetConstStringMapList *head; 
  NetConstStrings *ncs; 
  __int64 i; 
  NetConstStringMap *v13; 

  v4 = startIndex;
  v6 = 0;
  v7 = &s_netConstStringMaps[stringType];
  v13 = v7;
  do
  {
    v8 = v4;
    if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 766, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
      __debugbreak();
    if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 768, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
      __debugbreak();
    if ( !NetConstStrings_IsSupportedType(stringType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 769, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
      __debugbreak();
    if ( stringType == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 770, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
      __debugbreak();
    head = v7->head;
    if ( v7->head )
    {
      do
      {
        ncs = head->ncs;
        if ( !head->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 777, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
          __debugbreak();
        if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 778, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
          __debugbreak();
        if ( ncs->stringType == stringType && ncs->sourceType == v6 )
        {
          for ( i = 0i64; (unsigned int)i < ncs->entryCount; i = (unsigned int)(i + 1) )
            callback(i + v8, ncs->stringList[i]);
        }
        head = head->next;
        v8 += ncs->entryCount;
      }
      while ( head );
      v4 = startIndex;
      v7 = v13;
    }
    ++v6;
  }
  while ( v6 < 2 );
}

/*
==============
NetConstString_ForEachLevelFiltered_Internal
==============
*/
void NetConstString_ForEachLevelFiltered_Internal(void (*callback)(const unsigned int, const char *), const NetConstStringType stringType, const NetConstStringType filterType, const unsigned int startIndex)
{
  NetConstStringType v4; 
  unsigned int v7; 
  NetConstStringMap *v8; 
  unsigned int v9; 
  NetConstStringMapList *head; 
  NetConstStrings *ncs; 
  __int64 i; 
  NetConstStringMap *v13; 
  unsigned int v15; 

  v15 = startIndex;
  v4 = stringType;
  v7 = 2;
  v8 = &s_netConstStringMaps[stringType];
  v13 = v8;
  do
  {
    v9 = startIndex;
    if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 766, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
      __debugbreak();
    if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 768, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
      __debugbreak();
    if ( !NetConstStrings_IsSupportedType(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 769, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
      __debugbreak();
    if ( v4 == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 770, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
      __debugbreak();
    head = v8->head;
    if ( v8->head )
    {
      do
      {
        ncs = head->ncs;
        if ( !head->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 777, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
          __debugbreak();
        if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 778, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
          __debugbreak();
        if ( ncs->stringType == filterType && ncs->sourceType == v7 )
        {
          for ( i = 0i64; (unsigned int)i < ncs->entryCount; i = (unsigned int)(i + 1) )
            callback(i + v9, ncs->stringList[i]);
        }
        head = head->next;
        v9 += ncs->entryCount;
      }
      while ( head );
      v4 = stringType;
      v8 = v13;
    }
    startIndex = v15;
    ++v7;
  }
  while ( v7 < 5 );
}

/*
==============
NetConstString_ForEachLevel_Internal
==============
*/
void NetConstString_ForEachLevel_Internal(void (*callback)(const unsigned int, const char *), const NetConstStringType stringType, const unsigned int startIndex)
{
  unsigned int v4; 
  unsigned int v6; 
  NetConstStringMap *v7; 
  unsigned int v8; 
  NetConstStringMapList *head; 
  NetConstStrings *ncs; 
  __int64 i; 
  NetConstStringMap *v13; 

  v4 = startIndex;
  v6 = 2;
  v7 = &s_netConstStringMaps[stringType];
  v13 = v7;
  do
  {
    v8 = v4;
    if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 766, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
      __debugbreak();
    if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 768, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
      __debugbreak();
    if ( !NetConstStrings_IsSupportedType(stringType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 769, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
      __debugbreak();
    if ( stringType == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 770, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
      __debugbreak();
    head = v7->head;
    if ( v7->head )
    {
      do
      {
        ncs = head->ncs;
        if ( !head->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 777, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
          __debugbreak();
        if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 778, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
          __debugbreak();
        if ( ncs->stringType == stringType && ncs->sourceType == v6 )
        {
          for ( i = 0i64; (unsigned int)i < ncs->entryCount; i = (unsigned int)(i + 1) )
            callback(i + v8, ncs->stringList[i]);
        }
        head = head->next;
        v8 += ncs->entryCount;
      }
      while ( head );
      v4 = startIndex;
      v7 = v13;
    }
    ++v6;
  }
  while ( v6 < 5 );
}

/*
==============
NetConstString_GetAdjustedType
==============
*/
__int64 NetConstString_GetAdjustedType(const NetConstStrings *const ncsAsset)
{
  __int64 result; 

  if ( !ncsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 481, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
    __debugbreak();
  result = (unsigned int)ncsAsset->stringType;
  if ( (_DWORD)result == 36 )
    return 0i64;
  return result;
}

/*
==============
NetConstString_GetIndexForString
==============
*/
char NetConstString_GetIndexForString(const NetConstStringType stringType, const char *string, const unsigned int offset, unsigned int *out_index)
{
  char *v9; 
  __int64 v10; 
  const char *v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  NetConstStringLookupKey ncsLookupKey; 
  unsigned __int16 outIndex; 
  char *outStringValue; 

  if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1471, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  if ( !NetConstStrings_IsSupportedType(stringType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1472, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
    __debugbreak();
  if ( stringType == NETCONSTSTRINGTYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1473, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  ncsLookupKey.m_type = stringType;
  ncsLookupKey.m_name = string;
  if ( NetConstStringsLookup::FindString(&s_netConstStringLookupTable, &ncsLookupKey, &outIndex) )
  {
    if ( !NetConstStringMap_GetStringAtIndex(stringType, outIndex, (const char **)&outStringValue) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1490, ASSERT_TYPE_ASSERT, "(NetConstStringMap_GetStringAtIndex( stringType, stringIndex, &validateString ))", (const char *)&queryFormat, "NetConstStringMap_GetStringAtIndex( stringType, stringIndex, &validateString )") )
      __debugbreak();
    v9 = outStringValue;
    v10 = 0x7FFFFFFFi64;
    v11 = string;
    if ( !outStringValue && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v12 = v11[v9 - string];
      v13 = v10;
      v14 = *v11++;
      --v10;
      if ( !v13 )
        break;
      if ( v12 != v14 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1491, ASSERT_TYPE_ASSERT, "( !I_strcmp( validateString, string ) )", "Index mismatch: %s (expected) vs %s (found)", string, v9) )
          __debugbreak();
        break;
      }
    }
    while ( v12 );
    if ( !NetConstString_GetIndexForStringLegacy(stringType, string, offset, out_index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1494, ASSERT_TYPE_ASSERT, "(NetConstString_GetIndexForStringLegacy( stringType, string, offset, out_index ))", (const char *)&queryFormat, "NetConstString_GetIndexForStringLegacy( stringType, string, offset, out_index )") )
      __debugbreak();
    if ( *out_index != offset + outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1495, ASSERT_TYPE_ASSERT, "( *out_index ) == ( offset + stringIndex )", "%s == %s\n\t%i, %i", "*out_index", "offset + stringIndex", *out_index, offset + outIndex) )
      __debugbreak();
    *out_index = offset + outIndex;
    return 1;
  }
  else
  {
    if ( NetConstString_GetIndexForStringLegacy(stringType, string, offset, out_index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1483, ASSERT_TYPE_ASSERT, "(!NetConstString_GetIndexForStringLegacy( stringType, string, offset, out_index ))", (const char *)&queryFormat, "!NetConstString_GetIndexForStringLegacy( stringType, string, offset, out_index )") )
      __debugbreak();
    return 0;
  }
}

/*
==============
NetConstString_GetIndexForStringLegacy
==============
*/
char NetConstString_GetIndexForStringLegacy(const NetConstStringType stringType, const char *string, const unsigned int offset, unsigned int *out_index)
{
  NetConstStringMapList *i; 
  NetConstStrings *ncs; 
  __int64 j; 
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 

  for ( i = s_netConstStringMaps[stringType].head; i; i = i->next )
  {
    ncs = i->ncs;
    if ( !i->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1447, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
      __debugbreak();
    if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1448, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
      __debugbreak();
    for ( j = 0i64; (unsigned int)j < ncs->entryCount; j = (unsigned int)(j + 1) )
    {
      v9 = 0x7FFFFFFFi64;
      v10 = string;
      v11 = ncs->stringList[j];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v12 = v11 - string;
      while ( 1 )
      {
        v13 = v10[v12];
        v14 = v9;
        v15 = *v10++;
        --v9;
        if ( !v14 )
        {
LABEL_20:
          *out_index = offset;
          return 1;
        }
        if ( v13 != v15 )
          break;
        if ( !v13 )
          goto LABEL_20;
      }
      ++offset;
    }
  }
  return 0;
}

/*
==============
NetConstStrings_AreStringsLoaded
==============
*/
_BOOL8 NetConstStrings_AreStringsLoaded()
{
  return s_netConstStringsLoaded;
}

/*
==============
NetConstStrings_BuildAssetName
==============
*/
void NetConstStrings_BuildAssetName(char *nameBuf, const unsigned int nameBufLen, const unsigned int netConstStringType, const char *assetNameSuffix)
{
  __int64 v4; 
  unsigned __int64 v6; 
  __int64 v8; 

  v4 = netConstStringType;
  v6 = nameBufLen;
  if ( !nameBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 468, ASSERT_TYPE_ASSERT, "(nameBuf)", (const char *)&queryFormat, "nameBuf") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 469, ASSERT_TYPE_ASSERT, "(nameBufLen)", (const char *)&queryFormat, "nameBufLen") )
    __debugbreak();
  if ( !assetNameSuffix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 470, ASSERT_TYPE_ASSERT, "(assetNameSuffix)", (const char *)&queryFormat, "assetNameSuffix") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x29 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeAssetData ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeAssetData )\n\t%i not in [0, %i)", v8, 41) )
      __debugbreak();
  }
  Com_sprintf(nameBuf, v6, "ncs_%s_%s", s_netConstStringTypeAssetData[v4].constStringTypeTag, assetNameSuffix);
}

/*
==============
NetConstStrings_BuildStringMap
==============
*/
void NetConstStrings_BuildStringMap(void)
{
  bool v0; 
  unsigned int DvarChecksum; 
  unsigned int v2; 
  NetConstStringType v3; 
  const char **p_constStringTypeTag; 
  unsigned int v5; 
  DB_AssetEntryFlags *p_m_headEntries; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v8; 
  unsigned int assetCount; 
  unsigned int v10; 
  char *v11; 
  __int64 v12; 
  const char *v13; 
  __int64 v14; 
  const dvar_t *v15; 
  unsigned int *p_ncsBits; 
  const unsigned int *v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  GetAllXAssetFunctor functor; 
  char Base[1280]; 
  char dest[64]; 

  if ( s_netConstStringsLoaded )
  {
    Com_Printf(16, "NetConstStrings: Rebuilding the string map that was previously generated.\n");
    NetConstStrings_Clear();
  }
  v0 = Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE);
  DvarChecksum = NetConstStrings_GetDvarChecksum();
  v2 = 0;
  if ( !v0 )
  {
    if ( DvarChecksum )
    {
      v21 = NetConstStrings_GetDvarChecksum();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1299, ASSERT_TYPE_ASSERT, "( NetConstStrings_GetDvarChecksum() ) == ( 0 )", "%s == %s\n\t%i, %i", "NetConstStrings_GetDvarChecksum()", "0", v21, 0i64) )
        __debugbreak();
    }
    DvarChecksum = 0;
  }
  s_netConstStringChecksum = DvarChecksum;
  Com_Printf(16, "NetConstStrings: [Dvars] Checksum 0x%x\n", DvarChecksum);
  v3 = NETCONSTSTRINGTYPE_XMODEL;
  p_constStringTypeTag = &s_netConstStringTypeAssetData[0].constStringTypeTag;
  do
  {
    if ( NetConstStrings_IsSupportedType(v3) )
    {
      Com_sprintf(dest, 0x40ui64, "ncs_%s_%s", *p_constStringTypeTag, "level");
      if ( !DB_FindXAssetHeader(ASSET_TYPE_NET_CONST_STRINGS, dest, 0).physicsLibrary )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F015C0, 16i64, dest);
    }
    ++v3;
    p_constStringTypeTag += 3;
  }
  while ( (unsigned int)v3 < NETCONSTSTRINGTYPE_ASSET_COUNT );
  functor.type = ASSET_TYPE_NET_CONST_STRINGS;
  functor.assets = (XAssetHeader *)Base;
  functor.assetCount = 0;
  functor.maxCount = 160;
  DB_LockHashRead();
  v5 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  AssetEntryPool = DB_GetAssetEntryPool();
  v8 = 0;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v8, &functor);
    v8 += 64;
    ++v5;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  while ( v5 < 0x1768 );
  DB_UnlockHashRead();
  assetCount = functor.assetCount;
  qsort(Base, (unsigned int)functor.assetCount, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)NetConstStrings_BuildStringMap_SortCompare);
  v10 = 0;
  if ( assetCount )
  {
    v11 = Base;
    do
    {
      v12 = *(_QWORD *)v11;
      if ( !*(_QWORD *)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1330, ASSERT_TYPE_ASSERT, "(ncs != nullptr)", (const char *)&queryFormat, "ncs != nullptr") )
        __debugbreak();
      if ( !Com_FrontEndScene_IsActive() )
        goto LABEL_29;
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1258, ASSERT_TYPE_ASSERT, "(netConstStringsAsset)", (const char *)&queryFormat, "netConstStringsAsset") )
        __debugbreak();
      if ( *(_DWORD *)(v12 + 12) == 1 )
      {
        v13 = *(const char **)v12;
        v14 = *(unsigned int *)(v12 + 8);
        if ( (unsigned int)v14 >= 0x29 )
        {
          LODWORD(v20) = 41;
          LODWORD(v19) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        Com_Printf(16, "NetConstStrings: [%s] Skipping '%s'\n", s_netConstStringTypeNames[v14], v13);
      }
      else
      {
LABEL_29:
        if ( !NetConstStrings_ProcessNetConstStringMap((NetConstStrings *)v12) )
        {
          Com_PrintError(14, "NetConstStrings: Load Error: %s.\n", "ProcessNetConstStringMap");
          NetConstStrings_Clear();
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F004A0, 15i64, "ProcessNetConstStringMap");
          return;
        }
      }
      ++v10;
      v11 += 8;
    }
    while ( v10 < assetCount );
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) )
    goto LABEL_36;
  v15 = DCONST_DVARBOOL_netconststrings_enforcement_override;
  if ( !DCONST_DVARBOOL_netconststrings_enforcement_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netconststrings_enforcement_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
LABEL_36:
    p_ncsBits = &s_netConstStringMaps[0].ncsBits;
    v17 = S_NCS_RUNTIME_GROWTH_BIT_EXPANSION;
    do
    {
      v18 = *v17;
      if ( *v17 )
      {
        if ( v2 == 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1247, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
          __debugbreak();
        if ( *p_ncsBits > v18 )
          v18 = *p_ncsBits;
        *p_ncsBits = v18;
      }
      ++v2;
      ++v17;
      p_ncsBits += 6;
    }
    while ( v2 < 0x29 );
  }
  s_netConstStringsLoaded = 1;
}

/*
==============
NetConstStrings_BuildStringMap_SortCompare
==============
*/
int NetConstStrings_BuildStringMap_SortCompare(const void *e0, const void *e1)
{
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 

  if ( !e0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1210, ASSERT_TYPE_ASSERT, "(asset0)", (const char *)&queryFormat, "asset0") )
    __debugbreak();
  if ( !*(_QWORD *)e0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1211, ASSERT_TYPE_ASSERT, "(asset0->netConstStrings)", (const char *)&queryFormat, "asset0->netConstStrings") )
    __debugbreak();
  if ( !**(_QWORD **)e0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1212, ASSERT_TYPE_ASSERT, "(asset0->netConstStrings->name)", (const char *)&queryFormat, "asset0->netConstStrings->name") )
    __debugbreak();
  if ( !e1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1213, ASSERT_TYPE_ASSERT, "(asset1)", (const char *)&queryFormat, "asset1") )
    __debugbreak();
  if ( !*(_QWORD *)e1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1214, ASSERT_TYPE_ASSERT, "(asset1->netConstStrings)", (const char *)&queryFormat, "asset1->netConstStrings") )
    __debugbreak();
  if ( !**(_QWORD **)e1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1215, ASSERT_TYPE_ASSERT, "(asset1->netConstStrings->name)", (const char *)&queryFormat, "asset1->netConstStrings->name") )
    __debugbreak();
  v4 = *(_QWORD *)e0;
  v5 = *(_QWORD *)e1;
  v6 = *(_DWORD *)(*(_QWORD *)e0 + 8i64);
  v7 = *(_DWORD *)(*(_QWORD *)e1 + 8i64);
  if ( v6 != v7 )
    return v6 - v7;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = *(_DWORD *)(v5 + 12);
  if ( v6 != v7 )
    return v6 - v7;
  v9 = *(_BYTE *)(v4 + 16) & 1;
  v10 = *(_BYTE *)(v5 + 16) & 1;
  if ( v9 == v10 )
    return I_strcmp(*(const char **)v4, *(const char **)v5);
  else
    return v9 - v10;
}

/*
==============
NetConstStrings_CallForAllAccessoryStrings
==============
*/
void NetConstStrings_CallForAllAccessoryStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_ACCESSORY, NETCONSTSTRINGTYPE_ACCESSORY, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllBlendSpace2DStrings
==============
*/
void NetConstStrings_CallForAllBlendSpace2DStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_BLENDSPACE2D, NETCONSTSTRINGTYPE_BLENDSPACE2D, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllCameraStrings
==============
*/
void NetConstStrings_CallForAllCameraStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_CAMERA, NETCONSTSTRINGTYPE_CAMERA, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllCarryObjectStrings
==============
*/
void NetConstStrings_CallForAllCarryObjectStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_CARRYOBJECT, NETCONSTSTRINGTYPE_CARRYOBJECT, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllCinematicMotionStrings
==============
*/
void NetConstStrings_CallForAllCinematicMotionStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_CINEMATICMOTION, NETCONSTSTRINGTYPE_CINEMATICMOTION, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllExecutionStrings
==============
*/
void NetConstStrings_CallForAllExecutionStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_EXECUTION, NETCONSTSTRINGTYPE_EXECUTION, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllGestureStrings
==============
*/
void NetConstStrings_CallForAllGestureStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_GESTURE, NETCONSTSTRINGTYPE_GESTURE, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllHudOutlineStrings
==============
*/
void NetConstStrings_CallForAllHudOutlineStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_HUDOUTLINE, NETCONSTSTRINGTYPE_HUDOUTLINE, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllModelsOfType
==============
*/
void NetConstStrings_CallForAllModelsOfType(const NetConstStringType filterType, const unsigned int offset, void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_XMODEL, filterType, NETCONSTSTRINGSOURCE_COUNT, offset);
}

/*
==============
NetConstStrings_CallForAllOfType
==============
*/
void NetConstStrings_CallForAllOfType(const NetConstStringType type, const unsigned int offset, void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, type, type, NETCONSTSTRINGSOURCE_COUNT, offset);
}

/*
==============
NetConstStrings_CallForAllRumbleString
==============
*/
void NetConstStrings_CallForAllRumbleString(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_RUMBLE, NETCONSTSTRINGTYPE_RUMBLE, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllScriptableDefs
==============
*/
void NetConstStrings_CallForAllScriptableDefs(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_SCRIPTABLEDEF, NETCONSTSTRINGTYPE_SCRIPTABLEDEF, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllSpaceshipTargetStrings
==============
*/
void NetConstStrings_CallForAllSpaceshipTargetStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_SPACESHIPTARGET, NETCONSTSTRINGTYPE_SPACESHIPTARGET, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllSuitStrings
==============
*/
void NetConstStrings_CallForAllSuitStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_SUIT, NETCONSTSTRINGTYPE_SUIT, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllVehicleCamoStrings
==============
*/
void NetConstStrings_CallForAllVehicleCamoStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_VEHICLE_CAMO, NETCONSTSTRINGTYPE_VEHICLE_CAMO, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllVehicleStrings
==============
*/
void NetConstStrings_CallForAllVehicleStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_VEHICLES, NETCONSTSTRINGTYPE_VEHICLES, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllWeaponCamoStrings
==============
*/
void NetConstStrings_CallForAllWeaponCamoStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_CAMO, NETCONSTSTRINGTYPE_CAMO, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForAllXAnimCurveStrings
==============
*/
void NetConstStrings_CallForAllXAnimCurveStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstStrings_ForEach_Internal(callback, NETCONSTSTRINGTYPE_XANIMCURVE, NETCONSTSTRINGTYPE_XANIMCURVE, NETCONSTSTRINGSOURCE_COUNT, 0);
}

/*
==============
NetConstStrings_CallForCommonCompositeModels
==============
*/
void NetConstStrings_CallForCommonCompositeModels(void (*callback)(const unsigned int, const char *))
{
  NetConstString_ForEachCommonFiltered_Internal(callback, NETCONSTSTRINGTYPE_XMODEL, NETCONSTSTRINGTYPE_XCOMPOSITEMODEL, 1u);
}

/*
==============
NetConstStrings_CallForCommonModels
==============
*/
void NetConstStrings_CallForCommonModels(void (*callback)(const unsigned int, const char *))
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 850, ASSERT_TYPE_ASSERT, "(NetConstStrings_AutoPrecacheEnabled())", (const char *)&queryFormat, "NetConstStrings_AutoPrecacheEnabled()") )
    __debugbreak();
  NetConstString_ForEachCommonFiltered_Internal(callback, NETCONSTSTRINGTYPE_XMODEL, NETCONSTSTRINGTYPE_XMODEL, 1u);
}

/*
==============
NetConstStrings_CallForCommonShockStrings
==============
*/
void NetConstStrings_CallForCommonShockStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstString_ForEachCommon_Internal(callback, NETCONSTSTRINGTYPE_SHOCK, 1u);
}

/*
==============
NetConstStrings_CallForCommonWeaponStrings
==============
*/
void NetConstStrings_CallForCommonWeaponStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstString_ForEachCommon_Internal(callback, NETCONSTSTRINGTYPE_WEAPON, 1u);
}

/*
==============
NetConstStrings_CallForLevelCompositeModels
==============
*/
void NetConstStrings_CallForLevelCompositeModels(void (*callback)(const unsigned int, const char *))
{
  NetConstString_ForEachLevelFiltered_Internal(callback, NETCONSTSTRINGTYPE_XMODEL, NETCONSTSTRINGTYPE_XCOMPOSITEMODEL, 1u);
}

/*
==============
NetConstStrings_CallForLevelModels
==============
*/
void NetConstStrings_CallForLevelModels(void (*callback)(const unsigned int, const char *))
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 858, ASSERT_TYPE_ASSERT, "(NetConstStrings_AutoPrecacheEnabled())", (const char *)&queryFormat, "NetConstStrings_AutoPrecacheEnabled()") )
    __debugbreak();
  NetConstString_ForEachLevelFiltered_Internal(callback, NETCONSTSTRINGTYPE_XMODEL, NETCONSTSTRINGTYPE_XMODEL, 1u);
}

/*
==============
NetConstStrings_CallForLevelShockStrings
==============
*/
void NetConstStrings_CallForLevelShockStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstString_ForEachLevel_Internal(callback, NETCONSTSTRINGTYPE_SHOCK, 1u);
}

/*
==============
NetConstStrings_CallForLevelWeaponStrings
==============
*/
void NetConstStrings_CallForLevelWeaponStrings(void (*callback)(const unsigned int, const char *))
{
  NetConstString_ForEachLevel_Internal(callback, NETCONSTSTRINGTYPE_WEAPON, 1u);
}

/*
==============
NetConstStrings_Clear
==============
*/
void NetConstStrings_Clear(void)
{
  NetConstStringsLookup *v0; 
  __int64 i; 

  s_netConstStringsLoaded = 0;
  s_netConstStringChecksum = 0;
  s_netConstStringMapListCount = 0;
  s_netConstStringTotalCount = 0;
  memset_0(s_netConstStringMaps, 0, sizeof(s_netConstStringMaps));
  memset_0(s_netConstStringMapLists, 0, sizeof(s_netConstStringMapLists));
  v0 = &s_netConstStringLookupTable;
  for ( i = 0x4000i64; i; --i )
  {
    v0->m_hashTable.buckets[0].headNodeIndex = -1;
    v0 = (NetConstStringsLookup *)((char *)v0 + 2);
  }
  s_netConstStringLookupTable.m_tableNodeCount = 0;
  DebugWipe(s_netConstStringLookupTable.m_tableNodes, 0x11940ui64);
}

/*
==============
NetConstStrings_DumpAllStringsOfType
==============
*/
void NetConstStrings_DumpAllStringsOfType(const NetConstStringType type)
{
  __int64 v1; 
  int v2; 
  int v3; 

  v1 = (unsigned int)type;
  if ( s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1030, ASSERT_TYPE_ASSERT, "( !NetConstStrings_AreStringsLoaded() )", "Expected to call this function only when we fail during registration") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x29 )
  {
    v3 = 41;
    v2 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  Com_Printf(16, "NetConstStrings (%s): Dumping all registered strings:\n", s_netConstStringTypeNames[v1]);
  s_netConstStringsLoaded = 1;
  NetConstStrings_ForEach_Internal(NetConstStrings_DumpAllStringsOfType_Callback, (const NetConstStringType)v1, (const NetConstStringType)v1, NETCONSTSTRINGSOURCE_COUNT, 0);
  s_netConstStringsLoaded = 0;
}

/*
==============
NetConstStrings_DumpAllStringsOfType_Callback
==============
*/
void NetConstStrings_DumpAllStringsOfType_Callback(const unsigned int index, const char *string)
{
  Com_Printf(16, "%i: %s\n", index, string);
}

/*
==============
NetConstStrings_EnableRestrictions
==============
*/
void NetConstStrings_EnableRestrictions(const bool enableRestrictions)
{
  if ( enableRestrictions )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 674, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_CONFIG_STRINGS ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_CONFIG_STRINGS )") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 675, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS )") )
      __debugbreak();
  }
  Com_Printf(14, "NetConstStrings: Setting restrictions to %i\n", enableRestrictions);
  s_netConstStringsTypeRestrictionsEnabled = enableRestrictions;
}

/*
==============
NetConstStrings_ForEach_Internal
==============
*/
void NetConstStrings_ForEach_Internal(void (*callback)(const unsigned int, const char *), const NetConstStringType stringType, const NetConstStringType filterType, const NetConstStringSource stringSource, unsigned int startIndex)
{
  __int64 v5; 
  NetConstStringMapList *i; 
  NetConstStrings *ncs; 
  __int64 j; 

  v5 = stringType;
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 766, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 768, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  if ( !NetConstStrings_IsSupportedType((const NetConstStringType)v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 769, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
    __debugbreak();
  if ( (_DWORD)v5 == 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 770, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  for ( i = s_netConstStringMaps[v5].head; i; startIndex += ncs->entryCount )
  {
    ncs = i->ncs;
    if ( !i->ncs->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 777, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->entryCount)", (const char *)&queryFormat, "netConstStringsEntry->entryCount") )
      __debugbreak();
    if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 778, ASSERT_TYPE_ASSERT, "(netConstStringsEntry->stringList)", (const char *)&queryFormat, "netConstStringsEntry->stringList") )
      __debugbreak();
    if ( ncs->stringType == filterType && (stringSource == NETCONSTSTRINGSOURCE_COUNT || ncs->sourceType == stringSource) )
    {
      for ( j = 0i64; (unsigned int)j < ncs->entryCount; j = (unsigned int)(j + 1) )
        callback(j + startIndex, ncs->stringList[j]);
    }
    i = i->next;
  }
}

/*
==============
NetConstStrings_GetAccessoryIndex
==============
*/
__int64 NetConstStrings_GetAccessoryIndex(const char *accessoryName, unsigned int *outAccessoryIndex)
{
  return (unsigned __int8)NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_ACCESSORY, accessoryName, 0, outAccessoryIndex);
}

/*
==============
NetConstStrings_GetAccessoryName
==============
*/
_BOOL8 NetConstStrings_GetAccessoryName(const unsigned int accessoryIndex, const char **outAccessoryName)
{
  if ( !outAccessoryName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1554, ASSERT_TYPE_ASSERT, "(outAccessoryName)", (const char *)&queryFormat, "outAccessoryName") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_ACCESSORY, accessoryIndex, outAccessoryName);
}

/*
==============
NetConstStrings_GetActualAssetType
==============
*/
__int64 NetConstStrings_GetActualAssetType(const unsigned int netConstStringType)
{
  __int64 v1; 
  int v4; 

  v1 = netConstStringType;
  if ( netConstStringType >= 0x29 )
  {
    v4 = 41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 448, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeAssetData ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeAssetData )\n\t%i not in [0, %i)", netConstStringType, v4) )
      __debugbreak();
  }
  return (unsigned int)s_netConstStringTypeAssetData[v1].actualAssetType;
}

/*
==============
NetConstStrings_GetAtrIndex
==============
*/
char NetConstStrings_GetAtrIndex(const char *atrName, unsigned int *outAtrIndex)
{
  return NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_ATR, atrName, 0, outAtrIndex);
}

/*
==============
NetConstStrings_GetAtrName
==============
*/
bool NetConstStrings_GetAtrName(const unsigned int atrIndex, const char **outAtrName)
{
  if ( !outAtrName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1639, ASSERT_TYPE_ASSERT, "(outAtrName)", (const char *)&queryFormat, "outAtrName") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_ATR, atrIndex, outAtrName);
}

/*
==============
NetConstStrings_GetBitsNeededForType
==============
*/
__int64 NetConstStrings_GetBitsNeededForType(const NetConstStringType type)
{
  __int64 v1; 
  __int64 v3; 

  v1 = type;
  if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1392, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x29 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1393, ASSERT_TYPE_ASSERT, "(unsigned)( stringType ) < (unsigned)( NETCONSTSTRINGTYPE_COUNT )", "stringType doesn't index NETCONSTSTRINGTYPE_COUNT\n\t%i not in [0, %i)", v3, 41) )
      __debugbreak();
  }
  if ( !NetConstStrings_IsSupportedType((const NetConstStringType)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1394, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
    __debugbreak();
  if ( (_DWORD)v1 == 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1395, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  return s_netConstStringMaps[v1].ncsBits;
}

/*
==============
NetConstStrings_GetChecksum
==============
*/
__int64 NetConstStrings_GetChecksum()
{
  if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1356, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded before fetching the checksum.", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  return (unsigned int)s_netConstStringChecksum;
}

/*
==============
NetConstStrings_GetClientCharacterIndex
==============
*/
char NetConstStrings_GetClientCharacterIndex(const char *name, unsigned int *outIndex)
{
  return NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_CLIENTCHARACTER, name, 0, outIndex);
}

/*
==============
NetConstStrings_GetClientCharacterName
==============
*/
bool NetConstStrings_GetClientCharacterName(const unsigned int index, const char **outName)
{
  if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1652, ASSERT_TYPE_ASSERT, "(outName)", (const char *)&queryFormat, "outName") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_CLIENTCHARACTER, index, outName);
}

/*
==============
NetConstStrings_GetClientTagIndex
==============
*/
char NetConstStrings_GetClientTagIndex(const char *clientTagName, unsigned int *clientTagIndex)
{
  return NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_CLIENT_TAGS, clientTagName, 0, clientTagIndex);
}

/*
==============
NetConstStrings_GetClientTagName
==============
*/
bool NetConstStrings_GetClientTagName(const unsigned int clientTagIndex, const char **outClientTagName)
{
  if ( !outClientTagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1603, ASSERT_TYPE_ASSERT, "(outClientTagName)", (const char *)&queryFormat, "outClientTagName") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_CLIENT_TAGS, clientTagIndex, outClientTagName);
}

/*
==============
NetConstStrings_GetCountForType
==============
*/

unsigned int __fastcall NetConstStrings_GetCountForType(const NetConstStringType type)
{
  return NetConstStrings_GetStringCountForType(type);
}

/*
==============
NetConstStrings_GetDevTypeByName
==============
*/
char NetConstStrings_GetDevTypeByName(const char *name, unsigned int *outIndex)
{
  unsigned int v4; 
  const char **v5; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 414, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 415, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  v4 = 0;
  v5 = s_netConstStringTypeNames;
  do
  {
    v6 = *v5;
    v7 = 0x7FFFFFFFi64;
    v8 = name;
    if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = v6 - name;
    while ( 1 )
    {
      v10 = v8[v9];
      v11 = v7;
      v12 = *v8++;
      --v7;
      if ( !v11 )
      {
LABEL_18:
        *outIndex = v4;
        return 1;
      }
      if ( v10 != v12 )
        break;
      if ( !v10 )
        goto LABEL_18;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x29 );
  return 0;
}

/*
==============
NetConstStrings_GetExecutionIndex
==============
*/
__int64 NetConstStrings_GetExecutionIndex(const char *executionName, unsigned int *outExecutionIndex)
{
  return (unsigned __int8)NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_EXECUTION, executionName, 0, outExecutionIndex);
}

/*
==============
NetConstStrings_GetIndexFromName
==============
*/
char NetConstStrings_GetIndexFromName(const NetConstStringType type, const char *name, unsigned int *outIndex)
{
  return NetConstString_GetIndexForString(type, name, 0, outIndex);
}

/*
==============
NetConstStrings_GetIndexPlusOneFromName
==============
*/
char NetConstStrings_GetIndexPlusOneFromName(const NetConstStringType type, const char *name, unsigned int *outIndex)
{
  return NetConstString_GetIndexForString(type, name, 1u, outIndex);
}

/*
==============
NetConstStrings_GetLuiStringCount
==============
*/
unsigned int NetConstStrings_GetLuiStringCount()
{
  return NetConstStrings_GetStringCountForType(NETCONSTSTRINGTYPE_LUI);
}

/*
==============
NetConstStrings_GetLuiStringIndex
==============
*/
__int64 NetConstStrings_GetLuiStringIndex(const char *luiString, unsigned int *luiStringIndex)
{
  return (unsigned __int8)NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_LUI, luiString, 0, luiStringIndex);
}

/*
==============
NetConstStrings_GetLuiStringName
==============
*/
__int64 NetConstStrings_GetLuiStringName(const unsigned int luiStringIndex, const char **outLuiString)
{
  if ( !outLuiString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1573, ASSERT_TYPE_ASSERT, "(outLuiString)", (const char *)&queryFormat, "outLuiString") )
    __debugbreak();
  if ( NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_LUI, luiStringIndex, outLuiString) )
    return 1i64;
  *outLuiString = NULL;
  return 0i64;
}

/*
==============
NetConstStrings_GetNameFromIndex
==============
*/

bool __fastcall NetConstStrings_GetNameFromIndex(const NetConstStringType type, const unsigned int index, const char **outName)
{
  return NetConstStringMap_GetStringAtIndex(type, index, outName);
}

/*
==============
NetConstStrings_GetNameFromIndexPlusOne
==============
*/
bool NetConstStrings_GetNameFromIndexPlusOne(const NetConstStringType type, const unsigned int index, const char **outName)
{
  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1523, ASSERT_TYPE_ASSERT, "(index != 0)", (const char *)&queryFormat, "index != 0") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(type, index - 1, outName);
}

/*
==============
NetConstStrings_GetParseString
==============
*/
const char *NetConstStrings_GetParseString(const unsigned int netConstStringType)
{
  __int64 v1; 
  int v4; 

  v1 = netConstStringType;
  if ( netConstStringType >= 0x29 )
  {
    v4 = 41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 454, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeAssetData ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeAssetData )\n\t%i not in [0, %i)", netConstStringType, v4) )
      __debugbreak();
  }
  return s_netConstStringTypeAssetData[v1].assetParseString;
}

/*
==============
NetConstStrings_GetSpaceshipTargetIndex
==============
*/
__int64 NetConstStrings_GetSpaceshipTargetIndex(const char *spaceshipTargetName, unsigned int *spaceshipTargetIndex)
{
  return (unsigned __int8)NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_SPACESHIPTARGET, spaceshipTargetName, 0, spaceshipTargetIndex);
}

/*
==============
NetConstStrings_GetStaticMaxCount
==============
*/
__int64 NetConstStrings_GetStaticMaxCount(const unsigned int netConstStringType)
{
  __int64 v1; 
  bool v2; 

  v1 = netConstStringType;
  if ( netConstStringType == 36 )
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 749, ASSERT_TYPE_ASSERT, "(netConstStringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "netConstStringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL");
  }
  else
  {
    if ( netConstStringType < 0x29 )
      return S_NCS_STATIC_CAP[v1];
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 750, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( S_NCS_STATIC_CAP ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( S_NCS_STATIC_CAP )\n\t%i not in [0, %i)", netConstStringType, 41);
  }
  if ( v2 )
    __debugbreak();
  return S_NCS_STATIC_CAP[v1];
}

/*
==============
NetConstStrings_GetStringCountForType
==============
*/
__int64 NetConstStrings_GetStringCountForType(const NetConstStringType stringType)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = stringType;
  if ( !s_netConstStringsLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1381, ASSERT_TYPE_ASSERT, "(NetConstStrings_AreStringsLoaded())", "%s\n\tNet const strings should be loaded at all times when doing lookups, otherwise inconsistent results will occur.", "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x29 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1382, ASSERT_TYPE_ASSERT, "(unsigned)( stringType ) < (unsigned)( NETCONSTSTRINGTYPE_COUNT )", "stringType doesn't index NETCONSTSTRINGTYPE_COUNT\n\t%i not in [0, %i)", v3, 41) )
      __debugbreak();
  }
  if ( s_netConstStringsTypeRestrictionsEnabled )
  {
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 700, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tReview the list below if this were to change", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
      __debugbreak();
    if ( (unsigned int)v1 >= 0x29 )
    {
      LODWORD(v4) = 41;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 686, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( S_NCS_ALLOWED_IN_SP ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( S_NCS_ALLOWED_IN_SP )\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( !S_NCS_ALLOWED_IN_SP[(unsigned int)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1383, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsSupportedType( stringType ))", (const char *)&queryFormat, "NetConstStrings_IsSupportedType( stringType )") )
      __debugbreak();
  }
  if ( (_DWORD)v1 == 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1384, ASSERT_TYPE_ASSERT, "(stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "stringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  return s_netConstStringMaps[v1].ncsCount;
}

/*
==============
NetConstStrings_GetStringTotalCount
==============
*/
__int64 NetConstStrings_GetStringTotalCount()
{
  return s_netConstStringTotalCount;
}

/*
==============
NetConstStrings_GetTypeDevName
==============
*/
const char *NetConstStrings_GetTypeDevName(const unsigned int netConstStringType)
{
  __int64 v1; 
  int v4; 

  v1 = netConstStringType;
  if ( netConstStringType >= 0x29 )
  {
    v4 = 41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", netConstStringType, v4) )
      __debugbreak();
  }
  return s_netConstStringTypeNames[v1];
}

/*
==============
NetConstStrings_GetTypeTagName
==============
*/
const char *NetConstStrings_GetTypeTagName(const unsigned int netConstStringType)
{
  __int64 v1; 
  int v4; 

  v1 = netConstStringType;
  if ( netConstStringType >= 0x29 )
  {
    v4 = 41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeAssetData ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeAssetData )\n\t%i not in [0, %i)", netConstStringType, v4) )
      __debugbreak();
  }
  return s_netConstStringTypeAssetData[v1].constStringTypeTag;
}

/*
==============
NetConstStrings_GetVisionSetIndex
==============
*/
char NetConstStrings_GetVisionSetIndex(const char *visionSetName, unsigned int *outVisionSetIndex)
{
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, "vision/%s.vision", visionSetName);
  return NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_VISIONSET, dest, 1u, outVisionSetIndex);
}

/*
==============
NetConstStrings_GetVisionSetName
==============
*/
bool NetConstStrings_GetVisionSetName(const unsigned int visionSetIndex, const char **outVisionSetName)
{
  if ( !outVisionSetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1619, ASSERT_TYPE_ASSERT, "(outVisionSetName)", (const char *)&queryFormat, "outVisionSetName") )
    __debugbreak();
  if ( !visionSetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1620, ASSERT_TYPE_ASSERT, "(visionSetIndex != 0)", (const char *)&queryFormat, "visionSetIndex != 0") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_VISIONSET, visionSetIndex - 1, outVisionSetName);
}

/*
==============
NetConstStrings_GetVisionSetStringCount
==============
*/
__int64 NetConstStrings_GetVisionSetStringCount()
{
  return NetConstStrings_GetStringCountForType(NETCONSTSTRINGTYPE_VISIONSET);
}

/*
==============
NetConstStrings_GetXAnimCurveIndex
==============
*/
char NetConstStrings_GetXAnimCurveIndex(const char *name, unsigned int *outIndex)
{
  return NetConstString_GetIndexForString(NETCONSTSTRINGTYPE_XANIMCURVE, name, 0, outIndex);
}

/*
==============
NetConstStrings_GetXAnimCurveName
==============
*/
bool NetConstStrings_GetXAnimCurveName(const unsigned int index, const char **outName)
{
  if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1665, ASSERT_TYPE_ASSERT, "(outName)", (const char *)&queryFormat, "outName") )
    __debugbreak();
  return NetConstStringMap_GetStringAtIndex(NETCONSTSTRINGTYPE_XANIMCURVE, index, outName);
}

/*
==============
NetConstStrings_Init
==============
*/
void NetConstStrings_Init(void)
{
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_netconststrings_debug_checksum = Dvar_RegisterBool("netconststrings_debug_checksum", 0, 0x40004u, "Log every string that contributes to the NCS checksum");
  DCONST_DVARBOOL_netconststrings_enforcement_override = Dvar_RegisterBool("netconststrings_enforcement_override", 0, 0x40004u, "When set to true, will not give error on misconfigured asset / precache issues");
  Dvar_EndPermanentRegistration();
  NetConstStrings_Clear();
}

/*
==============
NetConstStrings_IsPrecacheAllowed
==============
*/
char NetConstStrings_IsPrecacheAllowed()
{
  const dvar_t *v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) )
    return 1;
  v1 = DCONST_DVARBOOL_netconststrings_enforcement_override;
  if ( !DCONST_DVARBOOL_netconststrings_enforcement_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netconststrings_enforcement_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
NetConstStrings_IsSupportedType
==============
*/
bool NetConstStrings_IsSupportedType(const NetConstStringType netConstStringType)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = (unsigned int)netConstStringType;
  if ( !s_netConstStringsTypeRestrictionsEnabled )
    return 1;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 700, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tReview the list below if this were to change", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x29 )
  {
    v4 = 41;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 686, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( S_NCS_ALLOWED_IN_SP ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( S_NCS_ALLOWED_IN_SP )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return S_NCS_ALLOWED_IN_SP[v1];
}

/*
==============
NetConstStrings_MarkStringsLoaded
==============
*/
void NetConstStrings_MarkStringsLoaded(void)
{
  s_netConstStringsLoaded = 1;
}

/*
==============
NetConstStrings_ProcessNetConstStringMap
==============
*/
char NetConstStrings_ProcessNetConstStringMap(NetConstStrings *netConstStringsAsset)
{
  const char *name; 
  const char *v3; 
  __int64 v4; 
  signed __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  unsigned int AdjustedType; 
  __int64 v10; 
  NetConstStringMap *v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  NetConstStringMapList *v16; 
  NetConstStringMapList *tail; 
  int ncsCount; 
  unsigned int entryCount; 
  unsigned int v20; 
  const char *v21; 
  const char *TypeDevName; 
  const char *v23; 
  const char *v25; 
  unsigned int MinBitCountForNum; 
  NetConstStringType stringType; 
  const char *v28; 
  NetConstStringType v29; 
  const char *v30; 
  unsigned int v31; 
  const char **stringList; 
  unsigned __int64 v33; 
  const char *v34; 
  const char *v35; 
  unsigned int v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  unsigned __int16 v39; 
  const dvar_t *v40; 
  unsigned __int16 v41; 
  NetConstStringType v42; 
  unsigned int v43; 
  const char *v44; 
  char *fmt; 
  char *fmta; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  NetConstStringLookupKey ncsLookupKey; 
  unsigned __int16 v51; 

  if ( !netConstStringsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1089, ASSERT_TYPE_ASSERT, "(netConstStringsAsset)", (const char *)&queryFormat, "netConstStringsAsset") )
    __debugbreak();
  NetConstStrings_RemoveDuplicates(netConstStringsAsset);
  if ( !netConstStringsAsset->entryCount || !NetConstStrings_IsSupportedType((const NetConstStringType)netConstStringsAsset->stringType) )
    return 1;
  if ( !netConstStringsAsset->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1099, ASSERT_TYPE_ASSERT, "(netConstStringsAsset->stringList)", (const char *)&queryFormat, "netConstStringsAsset->stringList") )
    __debugbreak();
  name = netConstStringsAsset->name;
  v3 = "void";
  v4 = 0x7FFFFFFFi64;
  if ( !netConstStringsAsset->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = name - "void";
  do
  {
    v6 = v3[v5];
    v7 = v4;
    v8 = *v3++;
    --v4;
    if ( !v7 )
      break;
    if ( v6 != v8 )
      goto LABEL_18;
  }
  while ( v6 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1100, ASSERT_TYPE_ASSERT, "(I_strcmp( netConstStringsAsset->name, \"void\" ))", (const char *)&queryFormat, "I_strcmp( netConstStringsAsset->name, NETCONSTSTRING_DEFAULT_NAME )") )
    __debugbreak();
LABEL_18:
  AdjustedType = NetConstString_GetAdjustedType(netConstStringsAsset);
  v10 = AdjustedType;
  if ( AdjustedType >= 0x29 )
  {
    LODWORD(v47) = AdjustedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1105, ASSERT_TYPE_ASSERT, "(unsigned)( adjustedStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringMaps ) ) + 0 ) )", "adjustedStringType doesn't index ARRAY_COUNT( s_netConstStringMaps )\n\t%i not in [0, %i)", v47, 41) )
      __debugbreak();
  }
  v11 = &s_netConstStringMaps[(int)v10];
  if ( s_netConstStringMapListCount > 0xA0u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1108, ASSERT_TYPE_ASSERT, "( s_netConstStringMapListCount ) <= ( ( sizeof( *array_counter( s_netConstStringMapLists ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "s_netConstStringMapListCount", "ARRAY_COUNT( s_netConstStringMapLists )", s_netConstStringMapListCount, 160) )
    __debugbreak();
  if ( (_DWORD)v10 == 36 )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 749, ASSERT_TYPE_ASSERT, "(netConstStringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL)", "%s\n\tXCompositeModels share the XModel NCS Map and shouldn't be accessed.", "netConstStringType != NetConstStringType::NETCONSTSTRINGTYPE_XCOMPOSITEMODEL");
    goto LABEL_28;
  }
  if ( (unsigned int)v10 >= 0x29 )
  {
    LODWORD(v49) = 41;
    LODWORD(v47) = v10;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 750, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( S_NCS_STATIC_CAP ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( S_NCS_STATIC_CAP )\n\t%i not in [0, %i)", v47, v49);
LABEL_28:
    if ( v12 )
      __debugbreak();
  }
  v13 = 0;
  v14 = S_NCS_STATIC_CAP[v10];
  v51 = s_netConstStringMapListCount;
  v15 = s_netConstStringMapListCount++;
  v16 = &s_netConstStringMapLists[v15];
  v16->ncsOffset = v11->ncsCount;
  tail = v11->tail;
  v16->next = NULL;
  v16->ncs = netConstStringsAsset;
  if ( v11->head )
  {
    if ( !tail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1128, ASSERT_TYPE_ASSERT, "(ncsMaps->tail != nullptr)", (const char *)&queryFormat, "ncsMaps->tail != nullptr") )
      __debugbreak();
    v11->tail->next = v16;
  }
  else
  {
    if ( tail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1123, ASSERT_TYPE_ASSERT, "(ncsMaps->tail == nullptr)", (const char *)&queryFormat, "ncsMaps->tail == nullptr") )
      __debugbreak();
    v11->head = v16;
  }
  ncsCount = v11->ncsCount;
  v11->tail = v16;
  entryCount = netConstStringsAsset->entryCount;
  v20 = entryCount + ncsCount;
  v21 = netConstStringsAsset->name;
  TypeDevName = NetConstStrings_GetTypeDevName(netConstStringsAsset->stringType);
  LODWORD(v47) = entryCount;
  LODWORD(fmt) = v14;
  Com_Printf(16, "NetConstStrings: [%s] %i (max %i) - Adding %i from '%s'\n", TypeDevName, v20, fmt, v47, v21);
  if ( v20 > 0x2EE0 )
  {
    v23 = NetConstStrings_GetTypeDevName(netConstStringsAsset->stringType);
    Com_PrintError(14, "\nNetConstStrings: [%s] Too many strings for this type (%d). Need to increase the total capacity (NCS_MAX_STRING_COUNT)\n", v23, 12000i64);
LABEL_41:
    NetConstStrings_DumpAllStringsOfType((const NetConstStringType)netConstStringsAsset->stringType);
    return 0;
  }
  if ( netConstStringsAsset->entryCount + s_netConstStringTotalCount > 0x2EE0 )
  {
    v25 = NetConstStrings_GetTypeDevName(netConstStringsAsset->stringType);
    Com_PrintError(14, "\nNetConstStrings: [%s] Too many global strings (%d). Need to increase the total capacity (NCS_MAX_STRING_COUNT)\n", v25, 12000i64);
    goto LABEL_41;
  }
  MinBitCountForNum = GetMinBitCountForNum(v20);
  if ( !MinBitCountForNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1157, ASSERT_TYPE_ASSERT, "(projectedStringBits > 0)", (const char *)&queryFormat, "projectedStringBits > 0") )
    __debugbreak();
  if ( v14 && v20 > v14 )
  {
    stringType = netConstStringsAsset->stringType;
    v28 = NetConstStrings_GetTypeDevName(stringType);
    LODWORD(v48) = stringType;
    LODWORD(fmta) = v14;
    Com_PrintError(14, "\nNetConstStrings: [%s] Too many strings (%i/%i). Need to increase the asset limit for type %i\n", v28, v20, fmta, v48);
    goto LABEL_41;
  }
  if ( MinBitCountForNum > 0x20 )
  {
    v29 = netConstStringsAsset->stringType;
    v30 = NetConstStrings_GetTypeDevName(v29);
    Com_PrintError(14, "\nNetConstStrings: [%s] Bit count overflow. Need to review message write code for type %i\n", v30, (unsigned int)v29);
    goto LABEL_41;
  }
  v11->ncsCount = truncate_cast<unsigned short,unsigned int>(v20);
  v11->ncsBits = MinBitCountForNum;
  v31 = netConstStringsAsset->entryCount;
  ncsLookupKey.m_type = v10;
  if ( v31 )
  {
    do
    {
      stringList = netConstStringsAsset->stringList;
      v33 = -1i64;
      v34 = stringList[v13];
      do
        ++v33;
      while ( v34[v33] );
      v35 = stringList[v13];
      v36 = ~s_netConstStringChecksum;
      if ( v33 )
      {
        v37 = v33;
        do
        {
          v38 = *(unsigned __int8 *)v35++;
          v36 = (v36 >> 8) ^ g_crc32Table[v38 ^ (unsigned __int8)v36];
          --v37;
        }
        while ( v37 );
      }
      ncsLookupKey.m_name = v34;
      s_netConstStringChecksum = ~v36;
      v39 = truncate_cast<unsigned short,unsigned int>(v13);
      NetConstStringsLookup::AddString(&s_netConstStringLookupTable, &ncsLookupKey, v33, v51, v39);
      v40 = DCONST_DVARBOOL_netconststrings_debug_checksum;
      if ( !DCONST_DVARBOOL_netconststrings_debug_checksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netconststrings_debug_checksum") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( v40->current.enabled )
        Com_Printf(16, "NCSDEBUG: %s\n", v34);
      v31 = netConstStringsAsset->entryCount;
      ++v13;
    }
    while ( v13 < v31 );
  }
  v41 = truncate_cast<unsigned short,unsigned int>(v31 + s_netConstStringTotalCount);
  v42 = netConstStringsAsset->stringType;
  v43 = s_netConstStringChecksum;
  s_netConstStringTotalCount = v41;
  v44 = NetConstStrings_GetTypeDevName(v42);
  Com_Printf(16, "NetConstStrings: [%s] Checksum 0x%x\n", v44, v43);
  return 1;
}

/*
==============
NetConstStrings_RemoveDuplicates
==============
*/
void NetConstStrings_RemoveDuplicates(NetConstStrings *ncsAsset)
{
  NetConstStringType stringType; 
  unsigned int entryCount; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  __int64 v7; 
  const char *v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  NetConstStringLookupKey ncsLookupKey; 
  unsigned __int16 outIndex; 
  unsigned int v17; 

  if ( !ncsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1047, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
    __debugbreak();
  if ( ncsAsset->sourceType == NETCONSTSTRINGSOURCE_MYCHANGES )
  {
    stringType = NETCONSTSTRINGTYPE_XMODEL;
    if ( ncsAsset->stringType != NETCONSTSTRINGTYPE_XCOMPOSITEMODEL )
      stringType = ncsAsset->stringType;
    entryCount = ncsAsset->entryCount;
    v4 = entryCount;
    ncsLookupKey.m_type = stringType;
    v17 = entryCount;
    v5 = entryCount - 1;
    if ( (int)(entryCount - 1) >= 0 )
    {
      v6 = entryCount;
      v7 = v5;
      do
      {
        v8 = ncsAsset->stringList[v7];
        ncsLookupKey.m_name = v8;
        if ( NetConstStringsLookup::FindString(&s_netConstStringLookupTable, &ncsLookupKey, &outIndex) )
        {
          v9 = (unsigned int)ncsAsset->stringType;
          if ( (unsigned int)v9 >= 0x29 )
          {
            LODWORD(v14) = 41;
            LODWORD(v13) = ncsAsset->stringType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", v13, v14) )
              __debugbreak();
          }
          Com_Printf(16, "NetConstStrings: [%s] MyChanges Dupe Removed '%s'\n", s_netConstStringTypeNames[v9], v8);
          v10 = ncsAsset->entryCount;
          if ( (int)(v10 - v5 - 1) > 0 )
          {
            memmove_0(&ncsAsset->stringList[v5], &ncsAsset->stringList[v6], 8i64 * (ncsAsset->entryCount - v5 - 1));
            v10 = ncsAsset->entryCount;
          }
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 1073, ASSERT_TYPE_ASSERT, "(ncsAsset->entryCount > 0)", (const char *)&queryFormat, "ncsAsset->entryCount > 0") )
            __debugbreak();
          ncsAsset->stringList[--ncsAsset->entryCount] = NULL;
        }
        v4 = ncsAsset->entryCount;
        --v6;
        --v7;
        --v5;
      }
      while ( v5 >= 0 );
      entryCount = v17;
    }
    if ( entryCount > v4 )
    {
      v11 = (unsigned int)ncsAsset->stringType;
      if ( (unsigned int)v11 >= 0x29 )
      {
        LODWORD(v14) = 41;
        LODWORD(v13) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      LODWORD(v13) = v4;
      LODWORD(fmt) = entryCount;
      Com_Printf(16, "NetConstStrings: [%s] MyChanges Total Removed: %i (entryCount %i -> %i)\n", s_netConstStringTypeNames[v11], entryCount - v4, fmt, v13);
    }
  }
}

/*
==============
NetConstStrings_ReportMissingString
==============
*/
void NetConstStrings_ReportMissingString(const NetConstStringType type, const char *string)
{
  __int64 v2; 
  int v5; 

  v2 = (unsigned int)type;
  if ( (unsigned int)type >= NETCONSTSTRINGTYPE_ASSET_COUNT )
  {
    v5 = 41;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( netConstStringType ) < (unsigned)( ( sizeof( *array_counter( s_netConstStringTypeNames ) ) + 0 ) )", "netConstStringType doesn't index ARRAY_COUNT( s_netConstStringTypeNames )\n\t%i not in [0, %i)", type, v5) )
      __debugbreak();
  }
  Com_PrintError(15, "NetConstStrings: Missing lookup '%s' of type '%s' (net const strings are enforced)\n", string, s_netConstStringTypeNames[v2]);
}

/*
==============
NetConstStrings_SyncError
==============
*/
void NetConstStrings_SyncError(const unsigned int index, const char *value, const char *source)
{
  __int64 v6; 

  Com_PrintError(14, "NetConstStrings: Sync Error: %s. Config string index %i is constant, should not be able to be set to '%s'.\n", source, index, value);
  NetConstStrings_Clear();
  LODWORD(v6) = index;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F000A0, 14i64, source, v6, value);
}

