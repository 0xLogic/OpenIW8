/*
==============
BG_Customization_Write
==============
*/

void __fastcall BG_Customization_Write(msg_t *msg, const ClientCustomizationInfo *customizationInfo)
{
  ?BG_Customization_Write@@YAXPEAUmsg_t@@PEBUClientCustomizationInfo@@@Z(msg, customizationInfo);
}

/*
==============
BG_Customization_GetModelNameForType
==============
*/

const char *__fastcall BG_Customization_GetModelNameForType(const CustomizationModelType customizationType, const unsigned int modelIndex, const BGCustomizationModelType modelType)
{
  return ?BG_Customization_GetModelNameForType@@YAPEBDW4CustomizationModelType@@IW4BGCustomizationModelType@@@Z(customizationType, modelIndex, modelType);
}

/*
==============
BG_Customization_ValidateInitialization
==============
*/

void BG_Customization_ValidateInitialization(void)
{
  ?BG_Customization_ValidateInitialization@@YAXXZ();
}

/*
==============
BG_Customization_IsCustomizationModel
==============
*/

int __fastcall BG_Customization_IsCustomizationModel(const CustomizationModelType customizationType, const char *modelName)
{
  return ?BG_Customization_IsCustomizationModel@@YAHW4CustomizationModelType@@PEBD@Z(customizationType, modelName);
}

/*
==============
BG_Customization_GetDefaultModelNameForCustomization
==============
*/

const char *__fastcall BG_Customization_GetDefaultModelNameForCustomization(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  return ?BG_Customization_GetDefaultModelNameForCustomization@@YAPEBDW4CustomizationModelType@@PEBUClientCustomizationInfo@@@Z(customizationType, customization);
}

/*
==============
BG_Customization_SetHeadCustomization
==============
*/

int __fastcall BG_Customization_SetHeadCustomization(ClientCustomizationInfo *outCustomizationInfo, const unsigned int headIndex)
{
  return ?BG_Customization_SetHeadCustomization@@YAHPEAUClientCustomizationInfo@@I@Z(outCustomizationInfo, headIndex);
}

/*
==============
BG_Customization_IsFemaleModelIndex
==============
*/

int __fastcall BG_Customization_IsFemaleModelIndex(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  return ?BG_Customization_IsFemaleModelIndex@@YAHW4CustomizationModelType@@I@Z(customizationType, modelIndex);
}

/*
==============
BG_Customization_IsEnabled
==============
*/

int __fastcall BG_Customization_IsEnabled()
{
  return ?BG_Customization_IsEnabled@@YAHXZ();
}

/*
==============
BG_Customization_ValidateModelEquivolence
==============
*/

void __fastcall BG_Customization_ValidateModelEquivolence(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  ?BG_Customization_ValidateModelEquivolence@@YAXW4CustomizationModelType@@I@Z(customizationType, modelIndex);
}

/*
==============
BG_Customization_BuildClientCustomization
==============
*/

void __fastcall BG_Customization_BuildClientCustomization(ClientCustomizationInfo *outCustomizationInfo, const unsigned int headIndex, const unsigned int helmetIndex, const unsigned int bodyIndex, const PartyMember *const member)
{
  ?BG_Customization_BuildClientCustomization@@YAXPEAUClientCustomizationInfo@@IIIQEBUPartyMember@@@Z(outCustomizationInfo, headIndex, helmetIndex, bodyIndex, member);
}

/*
==============
BG_Customization_GetDefaultModelName
==============
*/

const char *__fastcall BG_Customization_GetDefaultModelName(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  return ?BG_Customization_GetDefaultModelName@@YAPEBDW4CustomizationModelType@@I@Z(customizationType, modelIndex);
}

/*
==============
BG_Customization_Shutdown
==============
*/

void BG_Customization_Shutdown(void)
{
  ?BG_Customization_Shutdown@@YAXXZ();
}

/*
==============
BG_Customization_GetModelPartClassifications
==============
*/

void __fastcall BG_Customization_GetModelPartClassifications(const XModel *const model, unsigned __int8 *outClassifications)
{
  ?BG_Customization_GetModelPartClassifications@@YAXQEBUXModel@@QEAE@Z(model, outClassifications);
}

/*
==============
BG_Customization_Read
==============
*/

void __fastcall BG_Customization_Read(msg_t *msg, ClientCustomizationInfo *outCustomizationInfo)
{
  ?BG_Customization_Read@@YAXPEAUmsg_t@@PEAUClientCustomizationInfo@@@Z(msg, outCustomizationInfo);
}

/*
==============
BG_Customization_SetRandomCustomization
==============
*/

void __fastcall BG_Customization_SetRandomCustomization(ClientCustomizationInfo *outCustomizationInfo, unsigned int *randSeed)
{
  ?BG_Customization_SetRandomCustomization@@YAXPEAUClientCustomizationInfo@@PEAI@Z(outCustomizationInfo, randSeed);
}

/*
==============
BG_Customization_ModelMatchesCategory
==============
*/

int __fastcall BG_Customization_ModelMatchesCategory(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization, const unsigned int modelIndex)
{
  return ?BG_Customization_ModelMatchesCategory@@YAHW4CustomizationModelType@@PEBUClientCustomizationInfo@@I@Z(customizationType, customization, modelIndex);
}

/*
==============
BG_Customization_GetModelCount
==============
*/

unsigned int __fastcall BG_Customization_GetModelCount(const CustomizationModelType customizationType)
{
  return ?BG_Customization_GetModelCount@@YAIW4CustomizationModelType@@@Z(customizationType);
}

/*
==============
BG_Customization_GetModelIndex
==============
*/

unsigned __int16 __fastcall BG_Customization_GetModelIndex(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  return ?BG_Customization_GetModelIndex@@YAGW4CustomizationModelType@@PEBUClientCustomizationInfo@@@Z(customizationType, customization);
}

/*
==============
BG_Customization_GetModelNameForCustomization
==============
*/

const char *__fastcall BG_Customization_GetModelNameForCustomization(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  return ?BG_Customization_GetModelNameForCustomization@@YAPEBDW4CustomizationModelType@@PEBUClientCustomizationInfo@@@Z(customizationType, customization);
}

/*
==============
BG_Customization_UpdatePackageBindings
==============
*/

void __fastcall BG_Customization_UpdatePackageBindings(const char *mapName)
{
  ?BG_Customization_UpdatePackageBindings@@YAXPEBD@Z(mapName);
}

/*
==============
BG_Customization_SetSpecifiedCustomization
==============
*/

void __fastcall BG_Customization_SetSpecifiedCustomization(ClientCustomizationInfo *outCustomizationInfo, const char *modelName)
{
  ?BG_Customization_SetSpecifiedCustomization@@YAXPEAUClientCustomizationInfo@@PEBD@Z(outCustomizationInfo, modelName);
}

/*
==============
BG_Customization_GetModelIndexForName
==============
*/

bool __fastcall BG_Customization_GetModelIndexForName(const CustomizationModelType customizationType, const char *modelName, unsigned __int16 *outModelIndex)
{
  return ?BG_Customization_GetModelIndexForName@@YA_NW4CustomizationModelType@@PEBDPEAG@Z(customizationType, modelName, outModelIndex);
}

/*
==============
BG_Customization_GetModelName
==============
*/

const char *__fastcall BG_Customization_GetModelName(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  return ?BG_Customization_GetModelName@@YAPEBDW4CustomizationModelType@@I@Z(customizationType, modelIndex);
}

/*
==============
BG_Customization_GetViewhandIndexForBody
==============
*/

unsigned __int16 __fastcall BG_Customization_GetViewhandIndexForBody(const unsigned int bodyIndex)
{
  return ?BG_Customization_GetViewhandIndexForBody@@YAGI@Z(bodyIndex);
}

/*
==============
BG_Customization_SetBodyCustomization
==============
*/

int __fastcall BG_Customization_SetBodyCustomization(ClientCustomizationInfo *outCustomizationInfo, const unsigned int bodyIndex)
{
  return ?BG_Customization_SetBodyCustomization@@YAHPEAUClientCustomizationInfo@@I@Z(outCustomizationInfo, bodyIndex);
}

/*
==============
BG_Customization_SetDefaultCustomization
==============
*/

void __fastcall BG_Customization_SetDefaultCustomization(ClientCustomizationInfo *outCustomizationInfo)
{
  ?BG_Customization_SetDefaultCustomization@@YAXPEAUClientCustomizationInfo@@@Z(outCustomizationInfo);
}

/*
==============
BG_Customization_SetIsEnabled
==============
*/

void __fastcall BG_Customization_SetIsEnabled(const int enabled)
{
  ?BG_Customization_SetIsEnabled@@YAXH@Z(enabled);
}

/*
==============
BG_Customization_IsFemaleCustomization
==============
*/

int __fastcall BG_Customization_IsFemaleCustomization(const ClientCustomizationInfo *customization)
{
  return ?BG_Customization_IsFemaleCustomization@@YAHPEBUClientCustomizationInfo@@@Z(customization);
}

/*
==============
BG_Customization_Validate
==============
*/

bool __fastcall BG_Customization_Validate(const unsigned int headIndex, const unsigned int helmetIndex, const unsigned int bodyIndex)
{
  return ?BG_Customization_Validate@@YA_NIII@Z(headIndex, helmetIndex, bodyIndex);
}

/*
==============
BG_Customization_Init
==============
*/

void BG_Customization_Init(void)
{
  ?BG_Customization_Init@@YAXXZ();
}

/*
==============
BG_Customization_IsFullbodyModel
==============
*/

int __fastcall BG_Customization_IsFullbodyModel(const char *modelName)
{
  return ?BG_Customization_IsFullbodyModel@@YAHPEBD@Z(modelName);
}

/*
==============
BG_Customization_GetChecksum
==============
*/

unsigned int __fastcall BG_Customization_GetChecksum(const unsigned int initialCrc)
{
  return ?BG_Customization_GetChecksum@@YAII@Z(initialCrc);
}

/*
==============
BG_Customization_BindPackageAsset
==============
*/
void BG_Customization_BindPackageAsset(const CustomizationModelType customizationType, const unsigned __int16 packageIndex)
{
  CustomizationPackageData *PackageData; 
  const char *v4; 
  XAssetHeader v5; 
  const char *v6; 
  XAssetHeader v7; 
  const char *PackageName; 

  if ( !s_customizationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 930, ASSERT_TYPE_ASSERT, "(s_customizationEnabled)", (const char *)&queryFormat, "s_customizationEnabled") )
    __debugbreak();
  PackageData = BG_Customization_GetPackageData(packageIndex);
  if ( !PackageData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 878, ASSERT_TYPE_ASSERT, "(customizationPackage)", (const char *)&queryFormat, "customizationPackage") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 296, ASSERT_TYPE_ASSERT, "( ( package != nullptr ) )", "( package ) = %p", NULL) )
      __debugbreak();
  }
  v4 = PackageData->modelNames[1];
  if ( CL_TransientsMP_IsRegisteredAsset(v4, ASSET_TYPE_XMODEL) || (v5.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v4, 0).physicsLibrary) == NULL || (HIDWORD(v5.physicsLibrary[1].name) & 0x18000) != 0 )
  {
    Com_PrintError(16, "Customization: Initialization failure. Default model '%s' for package '%s' is not alwaysloaded. Default models cannot be placed in transient fastfiles.\n", v4, PackageData->modelNames[0]);
  }
  else
  {
    if ( !s_customizationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 897, ASSERT_TYPE_ASSERT, "(s_customizationEnabled)", (const char *)&queryFormat, "s_customizationEnabled") )
      __debugbreak();
    v6 = PackageData->modelNames[0];
    if ( !PackageData->modelNames[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 900, ASSERT_TYPE_ASSERT, "( ( modelName != nullptr ) )", "( modelName ) = %p", NULL) )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 908, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
      __debugbreak();
    if ( CL_TransientsMP_IsRegisteredAsset(v6, ASSET_TYPE_XMODEL) || CL_TransientsMP_IsRegisteredAsset(v6, ASSET_TYPE_XMODEL) || (v7.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v6, 0).physicsLibrary) != NULL && (HIDWORD(v7.physicsLibrary[1].name) & 0x18000) == 0 )
    {
      PackageData->bindingError = 0;
      return;
    }
    PackageName = BG_Customization_GetPackageName(PackageData);
    Com_PrintError(16, "Customization: Initialization failure. InGame model '%s' for package '%s' is neither transiented nor alwaysloaded. InGame models must be transiented or alwaysloaded. They are not allowed to be loose streamed.\n", v6, PackageName);
  }
  PackageData->bindingError = 1;
}

/*
==============
BG_Customization_BuildClientCustomization
==============
*/
void BG_Customization_BuildClientCustomization(ClientCustomizationInfo *outCustomizationInfo, const unsigned int headIndex, const unsigned int helmetIndex, const unsigned int bodyIndex)
{
  unsigned __int16 PackageByPlayerDataIndex; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  CustomizationPackageData *PackageData; 
  CustomizationPackageData *v12; 
  const char *PackageName; 
  const char *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int ViewhandIndexForBody; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 

  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1657, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  PackageByPlayerDataIndex = BG_Customization_FindPackageByPlayerDataIndex(CUSTOMIZATION_TYPE_BODY, bodyIndex, 0xFFFFu);
  v9 = BG_Customization_FindPackageByPlayerDataIndex(CUSTOMIZATION_TYPE_HEAD, headIndex, helmetIndex);
  v10 = v9;
  if ( PackageByPlayerDataIndex == 0xFFFF || v9 == 0xFFFF )
  {
    LODWORD(fmt) = helmetIndex;
    Com_PrintError(16, "BG_Customization: BuildClientCustomization couldn't find head and body at indices specified (%d %d %d). Using default.\n", bodyIndex, headIndex, fmt);
    if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1271, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
      __debugbreak();
    *(_QWORD *)outCustomizationInfo->modelIndex = 0i64;
    outCustomizationInfo->modelIndex[2] = 0;
  }
  else
  {
    PackageData = BG_Customization_GetPackageData(PackageByPlayerDataIndex);
    v12 = BG_Customization_GetPackageData(v10);
    if ( PackageData->category == v12->category )
    {
      v15 = PackageByPlayerDataIndex - s_customizationPackageLists[1].firstAssetIndex;
      if ( v15 >= 0x400 )
      {
        LODWORD(v19) = PackageByPlayerDataIndex - s_customizationPackageLists[1].firstAssetIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1692, ASSERT_TYPE_ASSERT, "(unsigned)( bodyCustomizationIndex ) < (unsigned)( (1024) )", "bodyCustomizationIndex doesn't index STREAM_SYNC_BODY_MODEL_COUNT\n\t%i not in [0, %i)", v19, 1024) )
          __debugbreak();
      }
      v16 = v10 - s_customizationPackageLists[0].firstAssetIndex;
      if ( v16 >= 0x17FF )
      {
        LODWORD(v20) = 6143;
        LODWORD(v19) = v10 - s_customizationPackageLists[0].firstAssetIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1695, ASSERT_TYPE_ASSERT, "(unsigned)( headCustomizationIndex ) < (unsigned)( (6143) )", "headCustomizationIndex doesn't index STREAM_SYNC_HEAD_MODEL_COUNT\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1297, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
        __debugbreak();
      if ( v15 < 0x400 )
      {
        outCustomizationInfo->modelIndex[1] = truncate_cast<unsigned short,unsigned int>(v15);
        ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(v15);
      }
      else
      {
        outCustomizationInfo->modelIndex[1] = 0;
        ViewhandIndexForBody = 0;
      }
      outCustomizationInfo->modelIndex[2] = ViewhandIndexForBody;
      if ( v16 < 0x17FF )
        outCustomizationInfo->modelIndex[0] = truncate_cast<unsigned short,unsigned int>(v16);
      else
        outCustomizationInfo->modelIndex[0] = 0;
    }
    else
    {
      PackageName = BG_Customization_GetPackageName(PackageData);
      v14 = BG_Customization_GetPackageName(v12);
      Com_PrintError(16, "BG_Customization: BuildClientCustomization body category (%d) does not match head category (%d)). Body name='%s' Head name='%s'. Using default.\n", (unsigned int)PackageData->category, (unsigned int)v12->category, PackageName, v14);
      BG_Customization_SetDefaultCustomization(outCustomizationInfo);
    }
  }
}

/*
==============
BG_Customization_DisablePackageRandomAvailability
==============
*/
void BG_Customization_DisablePackageRandomAvailability(const CustomizationModelType customizationType, const unsigned __int16 customizationAssetIndex)
{
  __int64 v2; 
  CustomizationPackageData *PackageData; 
  CustomizationPackageList *v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = customizationType;
  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT )
  {
    v9 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 456, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageLists ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( s_customizationPackageLists )\n\t%i not in [0, %i)", customizationType, v9) )
      __debugbreak();
  }
  PackageData = BG_Customization_GetPackageData(customizationAssetIndex);
  v5 = &s_customizationPackageLists[v2];
  if ( !PackageData->availableForRandom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 461, ASSERT_TYPE_ASSERT, "(customizationPackage->availableForRandom)", "%s\n\tShould only call this once per package", "customizationPackage->availableForRandom") )
    __debugbreak();
  if ( PackageData->category >= (unsigned int)CUSTOMIZATION_CATEGORY_RANDOM_COUNT )
  {
    LODWORD(v8) = 2;
    LODWORD(v6) = PackageData->category;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(unsigned)( customizationPackage->category ) < (unsigned)( ( sizeof( *array_counter( packageInfo->availableRandomPackageCount ) ) + 0 ) )", "customizationPackage->category doesn't index ARRAY_COUNT( packageInfo->availableRandomPackageCount )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( !v5->availableRandomPackageCount[PackageData->category] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 463, ASSERT_TYPE_ASSERT, "(packageInfo->availableRandomPackageCount[customizationPackage->category] > 0)", (const char *)&queryFormat, "packageInfo->availableRandomPackageCount[customizationPackage->category] > 0") )
    __debugbreak();
  --v5->availableRandomPackageCount[PackageData->category];
  PackageData->availableForRandom = 0;
}

/*
==============
BG_Customization_FindGlobalModelIndexByName
==============
*/
__int64 BG_Customization_FindGlobalModelIndexByName(const CustomizationModelType customizationType, const char *modelName, unsigned __int16 *outPackageIndex)
{
  const char *v4; 
  unsigned __int8 v6; 
  unsigned int v7; 
  int v8; 
  unsigned __int16 PackageByHash; 
  __int64 v11; 

  v4 = modelName;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1040, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1041, ASSERT_TYPE_ASSERT, "(modelName[0])", (const char *)&queryFormat, "modelName[0]") )
    __debugbreak();
  if ( !outPackageIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1042, ASSERT_TYPE_ASSERT, "(outPackageIndex)", (const char *)&queryFormat, "outPackageIndex") )
    __debugbreak();
  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT )
  {
    LODWORD(v11) = customizationType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1043, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageLists ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( s_customizationPackageLists )\n\t%i not in [0, %i)", v11, 3) )
      __debugbreak();
  }
  if ( !s_customizationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1044, ASSERT_TYPE_ASSERT, "(s_customizationEnabled)", (const char *)&queryFormat, "s_customizationEnabled") )
    __debugbreak();
  v6 = *v4;
  v7 = 0;
  v8 = 0;
  if ( !*v4 )
    goto LABEL_24;
  do
  {
    ++v4;
    v8 = v6 ^ (16777619 * v8);
    v6 = *v4;
  }
  while ( *v4 );
  if ( !v8 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1047, ASSERT_TYPE_ASSERT, "(modelNameHash != 0)", (const char *)&queryFormat, "modelNameHash != 0") )
      __debugbreak();
  }
  PackageByHash = BG_Customization_FindPackageByHash(v8);
  LOBYTE(v7) = PackageByHash != 0xFFFF;
  *outPackageIndex = PackageByHash;
  return v7;
}

/*
==============
BG_Customization_FindPackageByHash
==============
*/
__int64 BG_Customization_FindPackageByHash(const unsigned int hashName)
{
  unsigned __int16 v2; 
  __int64 v3; 
  unsigned __int16 nextHashTablePackageIndex; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = s_customizationHashTable[hashName % 0x185];
  if ( v2 == 0xFFFF )
    return 0xFFFFi64;
  while ( 1 )
  {
    if ( v2 >= 0x1FFFu )
    {
      LODWORD(v7) = 0x1FFF;
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v3 = v2;
    if ( !s_customizationPackageData[v3].nameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(package->nameHash != 0)", "%s\n\tAccessing uninitialized hash table entry", "package->nameHash != 0") )
      __debugbreak();
    if ( s_customizationPackageData[v3].nameHash == hashName )
      break;
    nextHashTablePackageIndex = s_customizationPackageData[v3].nextHashTablePackageIndex;
    if ( nextHashTablePackageIndex == v2 )
    {
      LODWORD(v9) = v2;
      LODWORD(v8) = nextHashTablePackageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 266, ASSERT_TYPE_ASSERT, "( package->nextHashTablePackageIndex ) != ( packageIndex )", "%s != %s\n\t%i, %i", "package->nextHashTablePackageIndex", "packageIndex", v8, v9) )
        __debugbreak();
    }
    v2 = s_customizationPackageData[v3].nextHashTablePackageIndex;
    if ( v2 == 0xFFFF )
      return 0xFFFFi64;
  }
  return v2;
}

/*
==============
BG_Customization_FindPackageByPlayerDataIndex
==============
*/
__int64 BG_Customization_FindPackageByPlayerDataIndex(const CustomizationModelType customizationType, const unsigned int primaryIndex, const unsigned int secondaryIndex)
{
  __int64 v3; 
  int v6; 
  CustomizationPackageList *v7; 
  unsigned __int16 v8; 
  __int64 v10; 
  __int64 v12; 
  int v13; 

  v3 = customizationType;
  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT )
  {
    v13 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 278, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageLists ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( s_customizationPackageLists )\n\t%i not in [0, %i)", customizationType, v13) )
      __debugbreak();
  }
  v6 = 0;
  v7 = &s_customizationPackageLists[v3];
  if ( !v7->packageCount )
    return 0xFFFFi64;
  while ( 1 )
  {
    v8 = v6 + v7->firstAssetIndex;
    if ( v8 >= 0x1FFFu )
    {
      LODWORD(v12) = 0x1FFF;
      LODWORD(v10) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v10, v12) )
        __debugbreak();
    }
    if ( s_customizationPackageData[v8].primaryIndex == primaryIndex && s_customizationPackageData[v8].secondaryIndex == secondaryIndex )
      break;
    if ( ++v6 >= v7->packageCount )
      return 0xFFFFi64;
  }
  return v8;
}

/*
==============
BG_Customization_GetAvailableRandomIndex
==============
*/
__int64 BG_Customization_GetAvailableRandomIndex(const CustomizationCategory category, const CustomizationPackageList *customizationList, unsigned int *randSeed)
{
  __int64 v5; 
  unsigned int v6; 
  int i; 
  unsigned __int16 v8; 
  __int64 v10; 
  __int64 v11; 

  v5 = category;
  if ( !customizationList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1356, ASSERT_TYPE_ASSERT, "(customizationList)", (const char *)&queryFormat, "customizationList") )
    __debugbreak();
  if ( !customizationList->availableRandomPackageCount[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1357, ASSERT_TYPE_ASSERT, "(customizationList->availableRandomPackageCount[category])", "%s\n\tNo packages available for the category specified", "customizationList->availableRandomPackageCount[category]") )
    __debugbreak();
  v6 = 0;
  for ( i = BG_irand(0, customizationList->availableRandomPackageCount[v5], randSeed); v6 < customizationList->packageCount; ++v6 )
  {
    v8 = v6 + customizationList->firstAssetIndex;
    if ( v8 >= 0x1FFFu )
    {
      LODWORD(v11) = 0x1FFF;
      LODWORD(v10) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( s_customizationPackageData[v8].availableForRandom && s_customizationPackageData[v8].category == (_DWORD)v5 )
    {
      if ( !i )
        break;
      --i;
    }
  }
  if ( v6 >= customizationList->packageCount )
  {
    LODWORD(v11) = customizationList->packageCount;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( customizationList->packageCount )", "packageIndex doesn't index customizationList->packageCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return v6;
}

/*
==============
BG_Customization_GetChecksum
==============
*/
unsigned int BG_Customization_GetChecksum(const unsigned int initialCrc)
{
  bool IsAltLaunchMode; 
  const char *v3; 
  unsigned int v4; 
  bool v5; 
  const char *v6; 
  StringTable *tablePtr[2]; 
  char outTablePath[64]; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
    return initialCrc;
  IsAltLaunchMode = Com_FastFile_IsAltLaunchMode();
  v3 = "cac/alt_heads.csv";
  if ( !IsAltLaunchMode )
    v3 = "cac/heads.csv";
  BG_Customization_GetTableFilePath(v3, outTablePath);
  StringTable_GetAsset(outTablePath, (const StringTable **)tablePtr);
  v4 = StringTable_Checksum(tablePtr[0], initialCrc);
  v5 = Com_FastFile_IsAltLaunchMode();
  v6 = "cac/alt_bodies.csv";
  if ( !v5 )
    v6 = "cac/bodies.csv";
  BG_Customization_GetTableFilePath(v6, outTablePath);
  StringTable_GetAsset(outTablePath, (const StringTable **)tablePtr);
  return StringTable_Checksum(tablePtr[0], v4);
}

/*
==============
BG_Customization_GetDefaultModelName
==============
*/
const char *BG_Customization_GetDefaultModelName(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  return BG_Customization_GetModelNameForType(customizationType, modelIndex, NormalSpace);
}

/*
==============
BG_Customization_GetDefaultModelNameForCustomization
==============
*/
const char *BG_Customization_GetDefaultModelNameForCustomization(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  __int64 v2; 
  __int64 v5; 

  v2 = customizationType;
  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1788, ASSERT_TYPE_ASSERT, "(customization)", (const char *)&queryFormat, "customization") )
    __debugbreak();
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1790, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( customization->modelIndex ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( customization->modelIndex )\n\t%i not in [0, %i)", v5, 3) )
      __debugbreak();
  }
  return BG_Customization_GetModelNameForType((const CustomizationModelType)v2, customization->modelIndex[v2], NormalSpace);
}

/*
==============
BG_Customization_GetGlobalIndexForModelIndex
==============
*/
unsigned __int16 BG_Customization_GetGlobalIndexForModelIndex(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  __int64 v2; 
  StreamSyncClientType StreamTypeForCustomization; 
  StreamSyncClientType v5; 
  CustomizationPackageList *v6; 
  __int64 packageCount; 
  unsigned int v9; 
  unsigned int ModelLimit; 

  v2 = customizationType;
  StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(customizationType);
  if ( modelIndex >= Com_StreamSync_GetModelLimit(StreamTypeForCustomization) )
  {
    v5 = Com_StreamSync_GetStreamTypeForCustomization((CustomizationModelType)v2);
    ModelLimit = Com_StreamSync_GetModelLimit(v5);
    v9 = modelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1059, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( Com_StreamSync_GetModelLimit( Com_StreamSync_GetStreamTypeForCustomization( customizationType ) ) )", "modelIndex doesn't index Com_StreamSync_GetModelLimit( Com_StreamSync_GetStreamTypeForCustomization( customizationType ) )\n\t%i not in [0, %i)", v9, ModelLimit) )
      __debugbreak();
  }
  v6 = &s_customizationPackageLists[v2];
  if ( !v6->packageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1062, ASSERT_TYPE_ASSERT, "(customizationList->packageCount)", "%s\n\tMissing models, lists should not be empty", "customizationList->packageCount") )
    __debugbreak();
  packageCount = v6->packageCount;
  if ( modelIndex < (unsigned int)packageCount )
    return modelIndex + v6->firstAssetIndex;
  Com_PrintWarning(16, "BG_Customization_GetGlobalIndexForModelIndex: Index '%i' is not valid (%i max). Using default.\n", modelIndex, packageCount);
  return v6->firstAssetIndex;
}

/*
==============
BG_Customization_GetModelCount
==============
*/
__int64 BG_Customization_GetModelCount(const CustomizationModelType customizationType)
{
  __int64 v1; 
  int v4; 

  v1 = customizationType;
  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( CUSTOMIZATION_TYPE_COUNT )", "customizationType doesn't index CUSTOMIZATION_TYPE_COUNT\n\t%i not in [0, %i)", customizationType, v4) )
      __debugbreak();
  }
  return s_customizationPackageLists[v1].packageCount;
}

/*
==============
BG_Customization_GetModelIndex
==============
*/
__int64 BG_Customization_GetModelIndex(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  __int64 v2; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 v7; 
  __int64 v8; 

  v2 = customizationType;
  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1716, ASSERT_TYPE_ASSERT, "(customization)", (const char *)&queryFormat, "customization") )
    __debugbreak();
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1717, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( customization->modelIndex ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( customization->modelIndex )\n\t%i not in [0, %i)", v7, 3) )
      __debugbreak();
  }
  v4 = truncate_cast<unsigned short,unsigned int>(customization->modelIndex[v2]);
  v5 = v4;
  if ( v4 >= s_customizationPackageLists[v2].packageCount )
  {
    LODWORD(v8) = s_customizationPackageLists[v2].packageCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1723, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( customizationList->packageCount )", "modelIndex doesn't index customizationList->packageCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return v5;
}

/*
==============
BG_Customization_GetModelIndexForName
==============
*/
char BG_Customization_GetModelIndexForName(const CustomizationModelType customizationType, const char *modelName, unsigned __int16 *outModelIndex)
{
  __int64 v3; 
  CustomizationPackageList *v6; 
  int v7; 
  char result; 
  __int64 v9; 
  unsigned __int16 outPackageIndex; 

  v3 = customizationType;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1752, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( (unsigned int)BG_Customization_FindGlobalModelIndexByName((const CustomizationModelType)v3, modelName, &outPackageIndex) )
  {
    v6 = &s_customizationPackageLists[v3];
    v7 = truncate_cast<unsigned short,int>(outPackageIndex - v6->firstAssetIndex);
    *outModelIndex = v7;
    if ( (unsigned __int16)v7 > v6->packageCount )
    {
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1758, ASSERT_TYPE_ASSERT, "( *outModelIndex ) <= ( packageList->packageCount )", "*outModelIndex not in [0, packageList->packageCount]\n\t%u not in [0, %u]", v9, v6->packageCount) )
        __debugbreak();
    }
    return 1;
  }
  else
  {
    result = 0;
    *outModelIndex = 0;
  }
  return result;
}

/*
==============
BG_Customization_GetModelName
==============
*/
const char *BG_Customization_GetModelName(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  return BG_Customization_GetModelNameForType(customizationType, modelIndex, All);
}

/*
==============
BG_Customization_GetModelNameForCustomization
==============
*/
const char *BG_Customization_GetModelNameForCustomization(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization)
{
  __int64 v2; 
  __int64 v5; 

  v2 = customizationType;
  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1773, ASSERT_TYPE_ASSERT, "(customization)", (const char *)&queryFormat, "customization") )
    __debugbreak();
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1775, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( customization->modelIndex ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( customization->modelIndex)\n\t%i not in [0, %i)", v5, 3) )
      __debugbreak();
  }
  return BG_Customization_GetModelNameForType((const CustomizationModelType)v2, customization->modelIndex[v2], All);
}

/*
==============
BG_Customization_GetModelNameForPackage
==============
*/
const char *BG_Customization_GetModelNameForPackage(const CustomizationPackageData *const package, const BGCustomizationModelType modelType)
{
  __int64 v2; 
  __int64 v5; 

  v2 = (unsigned int)modelType;
  if ( !package && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 296, ASSERT_TYPE_ASSERT, "( ( package != nullptr ) )", "( package ) = %p", NULL) )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 298, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>(modelType) ) < (unsigned)( ( sizeof( *array_counter( package->modelNames ) ) + 0 ) )", "static_cast<uint>(modelType) doesn't index ARRAY_COUNT( package->modelNames )\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return package->modelNames[v2];
}

/*
==============
BG_Customization_GetModelNameForType
==============
*/
const char *BG_Customization_GetModelNameForType(const CustomizationModelType customizationType, const unsigned int modelIndex, const BGCustomizationModelType modelType)
{
  __int64 v3; 
  const char *ModelNameForPackage; 
  const char *v7; 
  int v8; 
  const char *v9; 
  unsigned __int16 GlobalIndexForModelIndex; 
  const CustomizationPackageData *PackageData; 

  v3 = customizationType;
  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1169, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( CUSTOMIZATION_TYPE_COUNT )", "customizationType doesn't index CUSTOMIZATION_TYPE_COUNT\n\t%i not in [0, %i)", customizationType, 3) )
    __debugbreak();
  if ( !s_customizationEnabled )
  {
    ModelNameForPackage = S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[v3];
    if ( ModelNameForPackage )
      return ModelNameForPackage;
    v7 = "fallbackModelName";
    v8 = 1174;
    v9 = "(fallbackModelName)";
    goto LABEL_12;
  }
  GlobalIndexForModelIndex = BG_Customization_GetGlobalIndexForModelIndex((const CustomizationModelType)v3, modelIndex);
  PackageData = BG_Customization_GetPackageData(GlobalIndexForModelIndex);
  if ( !PackageData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1181, ASSERT_TYPE_ASSERT, "( ( customizationPackage != nullptr ) )", "( customizationPackage ) = %p", NULL) )
    __debugbreak();
  ModelNameForPackage = BG_Customization_GetModelNameForPackage(PackageData, modelType);
  if ( !ModelNameForPackage )
  {
    v7 = "modelName";
    v8 = 1184;
    v9 = "(modelName)";
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
      __debugbreak();
  }
  return ModelNameForPackage;
}

/*
==============
BG_Customization_GetModelPartClassifications
==============
*/
void BG_Customization_GetModelPartClassifications(const XModel *const model, unsigned __int8 *outClassifications)
{
  unsigned __int8 i; 
  __int64 v5; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1806, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !outClassifications && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1807, ASSERT_TYPE_ASSERT, "(outClassifications)", (const char *)&queryFormat, "outClassifications") )
    __debugbreak();
  for ( i = 0; i < model->numBones; outClassifications[v5] = v6 )
  {
    v5 = i;
    v6 = model->partClassification[i];
    if ( v6 >= 0x16u )
    {
      LODWORD(v9) = 22;
      LODWORD(v8) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1812, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( v6 == 1 )
    {
      v7 = model->parentList[i];
      if ( v7 == 0xFF )
        v6 = 0;
      else
        v6 = outClassifications[v7];
    }
    ++i;
  }
}

/*
==============
BG_Customization_GetPackageData
==============
*/
CustomizationPackageData *BG_Customization_GetPackageData(const unsigned __int16 packageIndex)
{
  int v3; 
  int v4; 

  if ( packageIndex >= 0x1FFFu )
  {
    v4 = 0x1FFF;
    v3 = packageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_customizationPackageData[packageIndex];
}

/*
==============
BG_Customization_GetPackageName
==============
*/
const char *BG_Customization_GetPackageName(const CustomizationPackageData *const package)
{
  if ( package )
    return package->modelNames[0];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 296, ASSERT_TYPE_ASSERT, "( ( package != nullptr ) )", "( package ) = %p", NULL) )
    __debugbreak();
  return (const char *)MEMORY[0];
}

/*
==============
BG_Customization_GetTableFilePath
==============
*/
void BG_Customization_GetTableFilePath(const char *tableName, char *outTablePath)
{
  const char *ActiveGameModeStr; 

  if ( !tableName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 233, ASSERT_TYPE_ASSERT, "(tableName)", (const char *)&queryFormat, "tableName") )
    __debugbreak();
  if ( !outTablePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 234, ASSERT_TYPE_ASSERT, "(outTablePath)", (const char *)&queryFormat, "outTablePath") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    ActiveGameModeStr = Com_GameMode_GetActiveGameModeStr();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 236, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME ))", "%s\n\tCustomization is not supported in the current game mode(%s). The customization asset %s/%s may not exist for this mode.", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME )", ActiveGameModeStr, "mp", tableName) )
      __debugbreak();
  }
  Com_sprintf(outTablePath, 0x40ui64, "%s/%s", "mp", tableName);
}

/*
==============
BG_Customization_GetViewhandIndexForBody
==============
*/
__int64 BG_Customization_GetViewhandIndexForBody(const unsigned int bodyIndex)
{
  unsigned __int16 v1; 
  int v3; 
  int v4; 

  if ( bodyIndex >= s_customizationPackageLists[1].packageCount )
    return 0i64;
  v1 = BG_Customization_GetPackageData((unsigned __int16)bodyIndex + s_customizationPackageLists[1].firstAssetIndex)->otherPackageIndex - s_customizationPackageLists[2].firstAssetIndex;
  if ( v1 >= 0x400u )
  {
    v4 = 1024;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1218, ASSERT_TYPE_ASSERT, "(unsigned)( viewHandsIndex ) < (unsigned)( (1024) )", "viewHandsIndex doesn't index STREAM_SYNC_VIEWARMS_MODEL_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return v1;
}

/*
==============
BG_Customization_Init
==============
*/
void BG_Customization_Init(void)
{
  bool IsAltLaunchMode; 
  const char *v1; 
  bool v2; 
  const char *v3; 
  unsigned int v4; 
  unsigned int *availableRandomPackageCount; 
  __int64 v6; 
  __int64 v7; 
  char outTablePath[64]; 

  BG_Customization_Reset();
  DVARBOOL_bg_customization_forceFemale = Dvar_RegisterBool("NOKQLRTMRS", 0, 4u, "When set, animations and script calls that check whether customization is female will succeed. This will not change the models");
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    IsAltLaunchMode = Com_FastFile_IsAltLaunchMode();
    v1 = "cac/alt_heads.csv";
    if ( !IsAltLaunchMode )
      v1 = "cac/heads.csv";
    BG_Customization_GetTableFilePath(v1, outTablePath);
    BG_Customization_RegisterHeadPackagesInternal(outTablePath);
    v2 = Com_FastFile_IsAltLaunchMode();
    v3 = "cac/alt_bodies.csv";
    if ( !v2 )
      v3 = "cac/bodies.csv";
    BG_Customization_GetTableFilePath(v3, outTablePath);
    BG_Customization_RegisterBodyAndViewhandPackagesInternal(outTablePath);
    v4 = 0;
    availableRandomPackageCount = s_customizationPackageLists[1].availableRandomPackageCount;
    do
    {
      v6 = *(availableRandomPackageCount - 4);
      v7 = *availableRandomPackageCount;
      if ( !(_DWORD)v6 || !(_DWORD)v7 )
        Sys_Error((const ObfuscateErrorText)&stru_143EF5E90, v4, v6, v7);
      ++v4;
      ++availableRandomPackageCount;
    }
    while ( v4 < 2 );
    if ( s_customizationPackageLists[2].availableRandomPackageCount[0] != s_customizationPackageLists[2].packageCount )
      Sys_Error((const ObfuscateErrorText)&stru_143EF5F20);
    BG_Customization_ResetBindings();
    CL_PlayerData_InitCustomization();
    if ( !s_customizationTotalPackageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 797, ASSERT_TYPE_ASSERT, "(s_customizationTotalPackageCount > 0)", (const char *)&queryFormat, "s_customizationTotalPackageCount > 0") )
      __debugbreak();
    Com_Printf(16, "Character Customization: Initialized package lists (total package count = %d, using %d bytes of memory)\n", s_customizationTotalPackageCount, 328470i64);
  }
}

/*
==============
BG_Customization_IsCustomizationModel
==============
*/
__int64 BG_Customization_IsCustomizationModel(const CustomizationModelType customizationType, const char *modelName)
{
  unsigned __int16 outPackageIndex; 

  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1082, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( s_customizationEnabled && *modelName )
    return BG_Customization_FindGlobalModelIndexByName(customizationType, modelName, &outPackageIndex);
  else
    return 0i64;
}

/*
==============
BG_Customization_IsEnabled
==============
*/
__int64 BG_Customization_IsEnabled()
{
  return (unsigned int)s_customizationEnabled;
}

/*
==============
BG_Customization_IsFemaleCustomization
==============
*/
_BOOL8 BG_Customization_IsFemaleCustomization(const ClientCustomizationInfo *customization)
{
  const dvar_t *v3; 
  unsigned __int16 ModelIndex; 
  unsigned __int16 GlobalIndexForModelIndex; 

  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1112, ASSERT_TYPE_ASSERT, "(customization)", (const char *)&queryFormat, "customization") )
    __debugbreak();
  if ( !s_customizationEnabled )
    return 0i64;
  v3 = DVARBOOL_bg_customization_forceFemale;
  if ( !DVARBOOL_bg_customization_forceFemale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_customization_forceFemale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 1i64;
  ModelIndex = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_BODY, customization);
  GlobalIndexForModelIndex = BG_Customization_GetGlobalIndexForModelIndex(CUSTOMIZATION_TYPE_BODY, ModelIndex);
  return BG_Customization_GetPackageData(GlobalIndexForModelIndex)->category == CUSTOMIZATION_CATEGORY_FEMALE;
}

/*
==============
BG_Customization_IsFemaleModelIndex
==============
*/
_BOOL8 BG_Customization_IsFemaleModelIndex(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  const dvar_t *v5; 
  unsigned __int16 GlobalIndexForModelIndex; 

  if ( !s_customizationEnabled )
    return 0i64;
  v5 = DVARBOOL_bg_customization_forceFemale;
  if ( !DVARBOOL_bg_customization_forceFemale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_customization_forceFemale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    return 1i64;
  GlobalIndexForModelIndex = BG_Customization_GetGlobalIndexForModelIndex(customizationType, modelIndex);
  return BG_Customization_GetPackageData(GlobalIndexForModelIndex)->category == CUSTOMIZATION_CATEGORY_FEMALE;
}

/*
==============
BG_Customization_IsFullbodyModel
==============
*/
_BOOL8 BG_Customization_IsFullbodyModel(const char *modelName)
{
  unsigned __int16 outPackageIndex; 

  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1134, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  return s_customizationEnabled && *modelName && (unsigned int)BG_Customization_FindGlobalModelIndexByName(CUSTOMIZATION_TYPE_BODY, modelName, &outPackageIndex) && BG_Customization_GetPackageData(outPackageIndex)->category == CUSTOMIZATION_CATEGORY_RANDOM_COUNT;
}

/*
==============
BG_Customization_ModelMatchesCategory
==============
*/
_BOOL8 BG_Customization_ModelMatchesCategory(const CustomizationModelType customizationType, const ClientCustomizationInfo *customization, const unsigned int modelIndex)
{
  unsigned __int16 v6; 
  unsigned __int16 GlobalIndexForModelIndex; 
  CustomizationPackageData *PackageData; 
  unsigned __int16 v9; 

  if ( !s_customizationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1152, ASSERT_TYPE_ASSERT, "(s_customizationEnabled)", (const char *)&queryFormat, "s_customizationEnabled") )
    __debugbreak();
  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1153, ASSERT_TYPE_ASSERT, "(customization)", (const char *)&queryFormat, "customization") )
    __debugbreak();
  v6 = BG_Customization_GetModelIndex(customizationType, customization);
  GlobalIndexForModelIndex = BG_Customization_GetGlobalIndexForModelIndex(customizationType, v6);
  PackageData = BG_Customization_GetPackageData(GlobalIndexForModelIndex);
  v9 = BG_Customization_GetGlobalIndexForModelIndex(customizationType, modelIndex);
  return PackageData->category == BG_Customization_GetPackageData(v9)->category;
}

/*
==============
BG_Customization_Read
==============
*/
void BG_Customization_Read(msg_t *msg, ClientCustomizationInfo *outCustomizationInfo)
{
  CustomizationModelType v4; 
  StreamSyncClientType StreamTypeForCustomization; 
  unsigned int BitCount; 
  __int64 Bits; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  const char *TypeName; 

  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1245, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1246, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v4 = CUSTOMIZATION_TYPE_HEAD;
  while ( 1 )
  {
    StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(v4);
    BitCount = Com_StreamSync_GetBitCount(StreamTypeForCustomization);
    Bits = MSG_ReadBits(msg, BitCount);
    v8 = Bits;
    if ( Bits < 0 || (unsigned __int64)Bits > 0xFFFFFFFF )
    {
      v9 = (unsigned int)Bits;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)Bits, "signed", Bits) )
        __debugbreak();
    }
    else
    {
      v9 = (unsigned int)Bits;
    }
    if ( v8 >= Com_StreamSync_GetModelLimit(StreamTypeForCustomization) )
      break;
    if ( v8 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v8, "unsigned", v9) )
      __debugbreak();
    v10 = v4++;
    outCustomizationInfo->modelIndex[v10] = (unsigned __int16)v8;
    if ( (unsigned int)v4 >= CUSTOMIZATION_TYPE_COUNT )
      return;
  }
  TypeName = Com_StreamSync_GetTypeName(StreamTypeForCustomization);
  Com_PrintError(16, "BG_Customization_Read: Invalid item index '%i' for type %s\n", v8, TypeName);
  MSG_Discard(msg);
}

/*
==============
BG_Customization_RegisterBodyAndViewhandPackagesInternal
==============
*/
void BG_Customization_RegisterBodyAndViewhandPackagesInternal(char *bodyTablePath)
{
  char *v1; 
  unsigned int v2; 
  unsigned int RowCount; 
  const char *ColumnValueForRow; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  __int64 packageCount; 
  __int64 v14; 
  __int64 v15; 
  StringTable *table; 
  char *categoryStr; 

  v1 = bodyTablePath;
  StringTable_GetAsset(bodyTablePath, (const StringTable **)&table);
  v2 = 0;
  RowCount = StringTable_GetRowCount(table);
  if ( RowCount )
  {
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(table, v2, 0);
      v5 = StringTable_GetColumnValueForRow(table, v2, 1);
      v6 = StringTable_GetColumnValueForRow(table, v2, 3);
      categoryStr = (char *)StringTable_GetColumnValueForRow(table, v2, 4);
      v7 = StringTable_GetColumnValueForRow(table, v2, 9);
      v8 = StringTable_GetColumnValueForRow(table, v2, 10);
      v9 = StringTable_GetColumnValueForRow(table, v2, 11);
      if ( *v5 && *v6 )
      {
        if ( !*v8 )
        {
          v8 = S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[1];
          Com_PrintError(16, "BG_Customization_RegisterBodyAndViewhandPackagesInternal: Empty body default model specified for %s at index %d. Fallback model %s will be used.\n", v5, v2, S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[1]);
        }
        if ( !*v9 )
        {
          v9 = S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[2];
          Com_PrintError(16, "BG_Customization_RegisterBodyAndViewhandPackagesInternal: Empty viewhands default model specified for %s at index %d. Fallback model %s will be used.\n", v5, v2, S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[2]);
        }
        v10 = BG_Customization_RegisterPackage(v5, v8, CUSTOMIZATION_TYPE_BODY);
        v11 = BG_Customization_RegisterPackage(v6, v9, CUSTOMIZATION_TYPE_VIEWHANDS);
        v12 = v11;
        if ( v11 >= 0x1FFFu )
        {
          LODWORD(v15) = 0x1FFF;
          LODWORD(v14) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 447, ASSERT_TYPE_ASSERT, "(unsigned)( otherPackageIndex ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageData ) ) + 0 ) )", "otherPackageIndex doesn't index ARRAY_COUNT( s_customizationPackageData )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( v10 >= 0x1FFFu )
        {
          LODWORD(v15) = 0x1FFF;
          LODWORD(v14) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        s_customizationPackageData[v10].otherPackageIndex = v12;
        BG_Customization_SetPackagePrimaryIndex(v10, ColumnValueForRow);
        if ( *v7 == 49 )
          BG_Customization_DisablePackageRandomAvailability(CUSTOMIZATION_TYPE_BODY, v10);
        BG_Customization_SetPackageCategory(CUSTOMIZATION_TYPE_BODY, v10, categoryStr);
      }
      ++v2;
    }
    while ( v2 < RowCount );
    v1 = bodyTablePath;
  }
  if ( !s_customizationPackageLists[1].packageCount )
    Sys_Error((const ObfuscateErrorText)&stru_143EF5BA0, v1);
  packageCount = s_customizationPackageLists[2].packageCount;
  if ( !s_customizationPackageLists[2].packageCount )
  {
    Sys_Error((const ObfuscateErrorText)&stru_143EF5DC0, v1);
    packageCount = s_customizationPackageLists[2].packageCount;
  }
  Com_Printf(16, "Character Customization: Initializing... Body Package Count = %d. Hands Package Count = %d.\n", s_customizationPackageLists[1].packageCount, packageCount);
}

/*
==============
BG_Customization_RegisterHeadPackagesInternal
==============
*/
void BG_Customization_RegisterHeadPackagesInternal(char *headTablePath)
{
  char *v1; 
  unsigned int v2; 
  unsigned int RowCount; 
  const char *ColumnValueForRow; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  unsigned __int16 v9; 
  CustomizationPackageData *v10; 
  unsigned int v11; 
  __int64 packageCount; 
  __int64 v13; 
  __int64 v14; 
  StringTable *table; 
  char *categoryStr; 
  const char *v18; 

  v1 = headTablePath;
  StringTable_GetAsset(headTablePath, (const StringTable **)&table);
  v2 = 0;
  RowCount = StringTable_GetRowCount(table);
  if ( RowCount )
  {
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(table, v2, 0);
      v5 = StringTable_GetColumnValueForRow(table, v2, 1);
      v6 = StringTable_GetColumnValueForRow(table, v2, 8);
      categoryStr = (char *)StringTable_GetColumnValueForRow(table, v2, 3);
      v18 = StringTable_GetColumnValueForRow(table, v2, 4);
      v7 = StringTable_GetColumnValueForRow(table, v2, 9);
      v8 = v7;
      if ( *v5 )
      {
        if ( !*v7 )
        {
          v8 = S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[0];
          Com_PrintError(16, "BG_Customization_RegisterHeadPackagesInternal: Empty head default model specified for %s at index %d. Fallback model %s will be used.\n", v5, v2, S_CUSTOMIZATION_FALLBACK_MODEL_NAMES[0]);
        }
        v9 = BG_Customization_RegisterPackage(v5, v8, CUSTOMIZATION_TYPE_HEAD);
        BG_Customization_SetPackagePrimaryIndex(v9, ColumnValueForRow);
        if ( v9 >= 0x1FFFu )
        {
          LODWORD(v14) = 0x1FFF;
          LODWORD(v13) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        v10 = &s_customizationPackageData[v9];
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 538, ASSERT_TYPE_ASSERT, "(customizationPackage)", (const char *)&queryFormat, "customizationPackage") )
          __debugbreak();
        v11 = atoi("0");
        if ( v11 >= 0xFFFF )
          Sys_Error((const ObfuscateErrorText)&stru_143EF5910, v9, "0");
        if ( v10->secondaryIndex != 0xFFFF )
          Sys_Error((const ObfuscateErrorText)&stru_143EF59A0, v9, "0");
        v10->secondaryIndex = v11;
        if ( *v6 == 49 )
          BG_Customization_DisablePackageRandomAvailability(CUSTOMIZATION_TYPE_HEAD, v9);
        BG_Customization_SetPackageCategory(CUSTOMIZATION_TYPE_HEAD, v9, categoryStr);
        if ( *v18 == 49 )
          Sys_Error((const ObfuscateErrorText)&stru_143EF5B40, v5);
      }
      else
      {
        Com_Printf(16, "BG_Customization_RegisterHeadPackagesInternal: Empty head model name at index %d\n", v2);
      }
      ++v2;
    }
    while ( v2 < RowCount );
    v1 = headTablePath;
  }
  packageCount = s_customizationPackageLists[0].packageCount;
  if ( !s_customizationPackageLists[0].packageCount )
  {
    Sys_Error((const ObfuscateErrorText)&stru_143EF5BA0, v1);
    packageCount = s_customizationPackageLists[0].packageCount;
  }
  Com_Printf(16, "Character Customization: Initializing... Head Package Count = %d.\n", packageCount);
}

/*
==============
BG_Customization_RegisterPackage
==============
*/
__int64 BG_Customization_RegisterPackage(const char *const packageName, const char *const defaultModel, const CustomizationModelType modelType)
{
  __int64 v3; 
  StreamSyncClientType StreamTypeForCustomization; 
  unsigned int ModelLimit; 
  unsigned __int8 v8; 
  unsigned int v9; 
  const char *v10; 
  __int64 result; 
  unsigned int v12; 
  unsigned __int16 v13; 
  CustomizationPackageData *PackageData; 
  __int64 v15; 
  unsigned __int16 nextHashTablePackageIndex; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = modelType;
  if ( !packageName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 339, ASSERT_TYPE_ASSERT, "(packageName)", (const char *)&queryFormat, "packageName") )
    __debugbreak();
  if ( !*packageName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(packageName[0])", (const char *)&queryFormat, "packageName[0]") )
    __debugbreak();
  if ( !defaultModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 341, ASSERT_TYPE_ASSERT, "(defaultModel)", (const char *)&queryFormat, "defaultModel") )
    __debugbreak();
  if ( !*defaultModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(defaultModel[0])", (const char *)&queryFormat, "defaultModel[0]") )
    __debugbreak();
  if ( (unsigned int)v3 >= 3 )
  {
    LODWORD(v18) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 343, ASSERT_TYPE_ASSERT, "(unsigned)( modelType ) < (unsigned)( CUSTOMIZATION_TYPE_COUNT )", "modelType doesn't index CUSTOMIZATION_TYPE_COUNT\n\t%i not in [0, %i)", v18, 3) )
      __debugbreak();
  }
  if ( !DB_IsAssetNameValid(packageName) )
    Sys_Error((const ObfuscateErrorText)&stru_143EF4D20, packageName);
  if ( !DB_IsAssetNameValid(defaultModel) )
    Sys_Error((const ObfuscateErrorText)&stru_143EF4DD0, defaultModel);
  StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization((CustomizationModelType)v3);
  if ( s_customizationPackageLists[v3].packageCount == Com_StreamSync_GetModelLimit(StreamTypeForCustomization) )
  {
    ModelLimit = Com_StreamSync_GetModelLimit(StreamTypeForCustomization);
    Sys_Error((const ObfuscateErrorText)&stru_143EF4E80, (unsigned int)v3, ModelLimit);
  }
  v8 = *packageName;
  v9 = 0;
  v10 = packageName;
  if ( !*packageName )
    goto LABEL_59;
  do
  {
    ++v10;
    v9 = v8 ^ (16777619 * v9);
    v8 = *v10;
  }
  while ( *v10 );
  if ( !v9 )
  {
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(newNameHash != 0)", (const char *)&queryFormat, "newNameHash != 0") )
      __debugbreak();
  }
  result = BG_Customization_FindPackageByHash(v9);
  if ( (_WORD)result != 0xFFFF )
  {
    if ( (_DWORD)v3 == 2 )
      return result;
    Sys_Error((const ObfuscateErrorText)&stru_143EF4F30, packageName, (unsigned int)v3);
  }
  v12 = s_customizationTotalPackageCount;
  if ( s_customizationTotalPackageCount >= 0x1FFF )
  {
    LODWORD(v19) = 0x1FFF;
    LODWORD(v18) = s_customizationTotalPackageCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( s_customizationTotalPackageCount ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "s_customizationTotalPackageCount doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
    v12 = s_customizationTotalPackageCount;
  }
  s_customizationTotalPackageCount = v12 + 1;
  v13 = s_customizationPackageLists[v3].firstAssetIndex + LOWORD(s_customizationPackageLists[v3].packageCount);
  ++s_customizationPackageLists[v3].packageCount;
  ++s_customizationPackageLists[v3].availableRandomPackageCount[0];
  PackageData = BG_Customization_GetPackageData(v13);
  if ( !PackageData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( ( customization != nullptr ) )", "( customization ) = %p", NULL) )
    __debugbreak();
  PackageData->modelNames[0] = packageName;
  PackageData->modelNames[1] = defaultModel;
  *(_DWORD *)&PackageData->primaryIndex = -1;
  PackageData->category = CUSTOMIZATION_CATEGORY_MALE;
  PackageData->otherPackageIndex = -1;
  PackageData->availableForRandom = 1;
  PackageData->nameHash = v9;
  v15 = v9 % 0x185;
  PackageData->nextHashTablePackageIndex = -1;
  if ( (unsigned int)v15 >= 0x185 )
  {
    LODWORD(v19) = 389;
    LODWORD(v18) = v9 % 0x185;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 410, ASSERT_TYPE_ASSERT, "(unsigned)( hashTableIndex ) < (unsigned)( S_NAME_HASH_SIZE )", "hashTableIndex doesn't index S_NAME_HASH_SIZE\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  nextHashTablePackageIndex = s_customizationHashTable[v15];
  if ( nextHashTablePackageIndex == 0xFFFF )
  {
    s_customizationHashTable[v15] = v13;
  }
  else
  {
    do
    {
      if ( nextHashTablePackageIndex >= 0x1FFFu )
      {
        LODWORD(v19) = 0x1FFF;
        LODWORD(v18) = nextHashTablePackageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v17 = nextHashTablePackageIndex;
      if ( s_customizationPackageData[v17].nameHash == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 427, ASSERT_TYPE_ASSERT, "(lookupPackage->nameHash != newNameHash)", "%s\n\tHash collision", "lookupPackage->nameHash != newNameHash") )
        __debugbreak();
      nextHashTablePackageIndex = s_customizationPackageData[v17].nextHashTablePackageIndex;
    }
    while ( nextHashTablePackageIndex != 0xFFFF );
    s_customizationPackageData[v17].nextHashTablePackageIndex = v13;
    if ( (_DWORD)v15 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 437, ASSERT_TYPE_ASSERT, "(hashTableIndex != S_UNUSED_PACKAGE_INDEX)", (const char *)&queryFormat, "hashTableIndex != S_UNUSED_PACKAGE_INDEX") )
      __debugbreak();
  }
  if ( (unsigned __int16)BG_Customization_FindPackageByHash(v9) != v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(BG_Customization_FindPackageByHash( newNameHash ) == newPackageIndex)", (const char *)&queryFormat, "BG_Customization_FindPackageByHash( newNameHash ) == newPackageIndex") )
    __debugbreak();
  return v13;
}

/*
==============
BG_Customization_Reset
==============
*/
char BG_Customization_Reset()
{
  CustomizationPackageList *v0; 
  unsigned __int16 *v1; 
  __int64 v2; 
  unsigned int *availableRandomPackageCount; 
  unsigned int v4; 
  CustomizationModelType i; 
  StreamSyncClientType StreamTypeForCustomization; 
  unsigned int ModelLimit; 
  __int64 v9; 
  __int64 v10; 

  v0 = s_customizationPackageLists;
  s_customizationTotalPackageCount = 0;
  DebugWipe(s_customizationPackageLists, 0x30ui64);
  DebugWipe(s_customizationHashTable, 0x30Aui64);
  DebugWipe(s_customizationPackageData, 0x4FFD8ui64);
  s_customizationEnabled = 0;
  v1 = s_customizationHashTable;
  v2 = 389i64;
  availableRandomPackageCount = s_customizationPackageLists[0].availableRandomPackageCount;
  while ( v2 )
  {
    *v1++ = -1;
    --v2;
  }
  v4 = 0;
  for ( i = CUSTOMIZATION_TYPE_HEAD; (unsigned int)i < CUSTOMIZATION_TYPE_COUNT; ++i )
  {
    v0->packageCount = 0;
    *(_QWORD *)availableRandomPackageCount = 0i64;
    if ( v4 >= 0x1FFF )
    {
      LODWORD(v10) = 0x1FFF;
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 747, ASSERT_TYPE_ASSERT, "(unsigned)( customizationAssetOffset ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageData ) ) + 0 ) )", "customizationAssetOffset doesn't index ARRAY_COUNT( s_customizationPackageData )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v0->firstAssetIndex = v4;
    StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(i);
    ModelLimit = Com_StreamSync_GetModelLimit(StreamTypeForCustomization);
    v4 += ModelLimit;
    availableRandomPackageCount += 4;
    ++v0;
  }
  if ( v4 != 0x1FFF )
  {
    LOBYTE(ModelLimit) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 754, ASSERT_TYPE_ASSERT, "( customizationAssetOffset ) == ( ( sizeof( *array_counter( s_customizationPackageData ) ) + 0 ) )", "%s == %s\n\t%i, %i", "customizationAssetOffset", "ARRAY_COUNT( s_customizationPackageData )", v4, 0x1FFF);
    if ( (_BYTE)ModelLimit )
      __debugbreak();
  }
  return ModelLimit;
}

/*
==============
BG_Customization_ResetBindings
==============
*/
void BG_Customization_ResetBindings()
{
  unsigned int *p_packageCount; 
  __int64 v1; 
  unsigned int i; 
  unsigned __int16 v3; 
  __int64 v4; 
  __int64 v5; 

  Com_Printf(16, "Customization: Resetting bindings\n");
  p_packageCount = &s_customizationPackageLists[0].packageCount;
  v1 = 3i64;
  do
  {
    for ( i = 0; i < *p_packageCount; s_customizationPackageData[v3].bindingError = 0 )
    {
      v3 = i + *((_WORD *)p_packageCount - 2);
      if ( v3 >= 0x1FFFu )
      {
        LODWORD(v5) = 0x1FFF;
        LODWORD(v4) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      ++i;
    }
    p_packageCount += 4;
    --v1;
  }
  while ( v1 );
}

/*
==============
BG_Customization_SetBodyCustomization
==============
*/
__int64 BG_Customization_SetBodyCustomization(ClientCustomizationInfo *outCustomizationInfo, const unsigned int bodyIndex)
{
  __int64 result; 

  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1297, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  if ( bodyIndex < 0x400 )
  {
    outCustomizationInfo->modelIndex[1] = truncate_cast<unsigned short,unsigned int>(bodyIndex);
    outCustomizationInfo->modelIndex[2] = BG_Customization_GetViewhandIndexForBody(bodyIndex);
    return 1i64;
  }
  else
  {
    result = 0i64;
    *(_QWORD *)&outCustomizationInfo->modelIndex[1] = 0i64;
  }
  return result;
}

/*
==============
BG_Customization_SetByName_LookupInternalIndex
==============
*/
__int64 BG_Customization_SetByName_LookupInternalIndex(ClientCustomizationInfo *outCustomizationInfo, const char *modelName, const unsigned __int16 globalPackageIndex, const CustomizationModelType customizationType)
{
  __int64 v4; 
  CustomizationPackageList *v8; 
  unsigned __int16 firstAssetIndex; 
  unsigned int v11; 
  StreamSyncClientType StreamTypeForCustomization; 
  StreamSyncClientType v13; 
  StreamSyncClientType v14; 
  const char *TypeName; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 

  v4 = customizationType;
  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1448, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  if ( (unsigned int)v4 >= 3 )
  {
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1449, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageLists ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( s_customizationPackageLists )\n\t%i not in [0, %i)", v17, 3) )
      __debugbreak();
  }
  v8 = &s_customizationPackageLists[v4];
  firstAssetIndex = v8->firstAssetIndex;
  if ( globalPackageIndex < v8->firstAssetIndex || globalPackageIndex >= v8->packageCount + firstAssetIndex )
    return 0i64;
  if ( (_DWORD)v4 == 2 )
  {
    Com_PrintError(16, "BG_Customization: SetByName can't set view arms '%s' directly, set a matching body instead.\n", modelName);
    return 0i64;
  }
  v11 = (unsigned __int16)(globalPackageIndex - firstAssetIndex);
  StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization((CustomizationModelType)v4);
  if ( v11 >= Com_StreamSync_GetModelLimit(StreamTypeForCustomization) )
  {
    v13 = Com_StreamSync_GetStreamTypeForCustomization((CustomizationModelType)v4);
    LODWORD(v18) = Com_StreamSync_GetModelLimit(v13);
    LODWORD(v17) = (unsigned __int16)v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1470, ASSERT_TYPE_ASSERT, "(unsigned)( localPackageIndex ) < (unsigned)( Com_StreamSync_GetModelLimit( Com_StreamSync_GetStreamTypeForCustomization( customizationType ) ) )", "localPackageIndex doesn't index Com_StreamSync_GetModelLimit( Com_StreamSync_GetStreamTypeForCustomization( customizationType ) )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( outCustomizationInfo->modelIndex ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( outCustomizationInfo->modelIndex )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( outCustomizationInfo->modelIndex[v4] != v11 )
  {
    v14 = Com_StreamSync_GetStreamTypeForCustomization((CustomizationModelType)v4);
    TypeName = Com_StreamSync_GetTypeName(v14);
    LODWORD(fmt) = (unsigned __int16)v11;
    Com_Printf(16, "BG_Customization: SetByName changed to model '%s' for type %s (id %d).\n", modelName, TypeName, fmt);
  }
  outCustomizationInfo->modelIndex[v4] = v11;
  return 1i64;
}

/*
==============
BG_Customization_SetDefaultCustomization
==============
*/
void BG_Customization_SetDefaultCustomization(ClientCustomizationInfo *outCustomizationInfo)
{
  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1271, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  *(_QWORD *)outCustomizationInfo->modelIndex = 0i64;
  outCustomizationInfo->modelIndex[2] = 0;
}

/*
==============
BG_Customization_SetHeadCustomization
==============
*/
__int64 BG_Customization_SetHeadCustomization(ClientCustomizationInfo *outCustomizationInfo, const unsigned int headIndex)
{
  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1280, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  if ( headIndex < 0x17FF )
  {
    outCustomizationInfo->modelIndex[0] = truncate_cast<unsigned short,unsigned int>(headIndex);
    return 1i64;
  }
  else
  {
    outCustomizationInfo->modelIndex[0] = 0;
    return 0i64;
  }
}

/*
==============
BG_Customization_SetIsEnabled
==============
*/
void BG_Customization_SetIsEnabled(const int enabled)
{
  if ( s_customizationEnabled != enabled )
    Com_Printf(16, "BG_Customization SetIsEnabled: %d -> %d\n", (unsigned int)s_customizationEnabled, (unsigned int)enabled);
  s_customizationEnabled = enabled;
}

/*
==============
BG_Customization_SetPackageCategory
==============
*/
void BG_Customization_SetPackageCategory(const CustomizationModelType customizationType, const unsigned __int16 customizationAssetIndex, const char *categoryStr)
{
  __int64 v3; 
  CustomizationPackageData *PackageData; 
  const char *v7; 
  unsigned int i; 
  unsigned int category; 
  CustomizationPackageList *v10; 
  __int64 v11; 
  __int64 v12; 

  v3 = customizationType;
  if ( !categoryStr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 474, ASSERT_TYPE_ASSERT, "(categoryStr)", (const char *)&queryFormat, "categoryStr") )
    __debugbreak();
  if ( (unsigned int)v3 >= 3 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 475, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( s_customizationPackageLists ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( s_customizationPackageLists )\n\t%i not in [0, %i)", v11, 3) )
      __debugbreak();
  }
  PackageData = BG_Customization_GetPackageData(customizationAssetIndex);
  if ( !PackageData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 478, ASSERT_TYPE_ASSERT, "(customizationPackage)", (const char *)&queryFormat, "customizationPackage") )
    __debugbreak();
  v7 = S_CUSTOMIZATION_CATEGORY_FIELDS;
  for ( i = 0; i < 0xC; ++i )
  {
    if ( *categoryStr == *v7 )
      break;
    ++v7;
  }
  if ( i == 12 )
  {
    Com_PrintWarning(16, "BG_Customization_SetPackageCategory: Error parsing '%s', not a valid category. Using default (male).\n", categoryStr);
    i = 0;
  }
  if ( PackageData->availableForRandom )
  {
    category = PackageData->category;
    if ( i != category )
    {
      v10 = &s_customizationPackageLists[v3];
      if ( category >= 2 )
      {
        LODWORD(v12) = 2;
        LODWORD(v11) = PackageData->category;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 497, ASSERT_TYPE_ASSERT, "(unsigned)( customizationPackage->category ) < (unsigned)( ( sizeof( *array_counter( packageInfo->availableRandomPackageCount ) ) + 0 ) )", "customizationPackage->category doesn't index ARRAY_COUNT( packageInfo->availableRandomPackageCount )\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      --v10->availableRandomPackageCount[PackageData->category];
      if ( i >= 2 )
      {
        Com_PrintWarning(16, "BG_Customization_SetPackageCategory: Category '%s' for model '%s' does not support random selection, forcefully turning off.\n", categoryStr, PackageData->modelNames[0]);
        PackageData->availableForRandom = 0;
      }
      else
      {
        ++v10->availableRandomPackageCount[i];
      }
    }
  }
  PackageData->category = i;
}

/*
==============
BG_Customization_SetPackagePrimaryIndex
==============
*/
void BG_Customization_SetPackagePrimaryIndex(const unsigned __int16 customizationAssetIndex, const char *primaryIndexStr)
{
  CustomizationPackageData *PackageData; 
  unsigned int v5; 
  unsigned __int16 v6; 

  PackageData = BG_Customization_GetPackageData(customizationAssetIndex);
  if ( !PackageData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 522, ASSERT_TYPE_ASSERT, "(customizationPackage)", (const char *)&queryFormat, "customizationPackage") )
    __debugbreak();
  v5 = atoi(primaryIndexStr);
  v6 = v5;
  if ( v5 >= 0xFFFF )
    Sys_Error((const ObfuscateErrorText)&stru_143EF5810, customizationAssetIndex, primaryIndexStr);
  if ( PackageData->primaryIndex != 0xFFFF )
    Sys_Error((const ObfuscateErrorText)&stru_143EF5890, customizationAssetIndex, primaryIndexStr);
  PackageData->primaryIndex = v6;
}

/*
==============
BG_Customization_SetRandomCustomization
==============
*/
void BG_Customization_SetRandomCustomization(ClientCustomizationInfo *outCustomizationInfo, unsigned int *randSeed)
{
  unsigned int v4; 
  CustomizationCategory v5; 
  unsigned int AvailableRandomIndex; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int16 GlobalIndexForModelIndex; 
  CustomizationPackageData *PackageData; 
  unsigned __int16 v11; 
  CustomizationPackageData *v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1410, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  if ( !randSeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1411, ASSERT_TYPE_ASSERT, "(randSeed)", (const char *)&queryFormat, "randSeed") )
    __debugbreak();
  BG_srand(randSeed);
  v4 = BG_irand(0, 100, randSeed);
  if ( v4 >= 0x46 )
  {
    if ( v4 >= 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1400, ASSERT_TYPE_ASSERT, "( categoryRoll ) < ( CATEGORY_FEMALE_ROLL )", "%s < %s\n\t%i, %i", "categoryRoll", "CATEGORY_FEMALE_ROLL", v4, 100) )
      __debugbreak();
    v5 = CUSTOMIZATION_CATEGORY_FEMALE;
  }
  else
  {
    v5 = CUSTOMIZATION_CATEGORY_MALE;
  }
  AvailableRandomIndex = BG_Customization_GetAvailableRandomIndex(v5, s_customizationPackageLists, randSeed);
  v7 = BG_Customization_GetAvailableRandomIndex(v5, &s_customizationPackageLists[1], randSeed);
  outCustomizationInfo->modelIndex[0] = AvailableRandomIndex;
  v8 = v7;
  outCustomizationInfo->modelIndex[1] = v7;
  outCustomizationInfo->modelIndex[2] = BG_Customization_GetViewhandIndexForBody(v7);
  GlobalIndexForModelIndex = BG_Customization_GetGlobalIndexForModelIndex(CUSTOMIZATION_TYPE_HEAD, AvailableRandomIndex);
  PackageData = BG_Customization_GetPackageData(GlobalIndexForModelIndex);
  v11 = BG_Customization_GetGlobalIndexForModelIndex(CUSTOMIZATION_TYPE_BODY, v8);
  v12 = BG_Customization_GetPackageData(v11);
  if ( v5 != PackageData->category )
  {
    LODWORD(v14) = PackageData->category;
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1437, ASSERT_TYPE_ASSERT, "( category ) == ( headPackage->category )", "%s == %s\n\t%i, %i", "category", "headPackage->category", v13, v14) )
      __debugbreak();
  }
  if ( PackageData->category != v12->category )
  {
    LODWORD(v14) = v12->category;
    LODWORD(v13) = PackageData->category;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1438, ASSERT_TYPE_ASSERT, "( headPackage->category ) == ( bodyPackage->category )", "%s == %s\n\t%i, %i", "headPackage->category", "bodyPackage->category", v13, v14) )
      __debugbreak();
  }
  if ( !PackageData->availableForRandom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1439, ASSERT_TYPE_ASSERT, "(headPackage->availableForRandom)", (const char *)&queryFormat, "headPackage->availableForRandom") )
    __debugbreak();
  if ( !v12->availableForRandom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1440, ASSERT_TYPE_ASSERT, "(bodyPackage->availableForRandom)", (const char *)&queryFormat, "bodyPackage->availableForRandom") )
    __debugbreak();
}

/*
==============
BG_Customization_SetSpecifiedCustomization
==============
*/
void BG_Customization_SetSpecifiedCustomization(ClientCustomizationInfo *outCustomizationInfo, const char *modelName)
{
  unsigned __int8 v4; 
  const char *v5; 
  CustomizationModelType v6; 
  int v7; 
  unsigned __int16 PackageByHash; 

  if ( !outCustomizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1487, ASSERT_TYPE_ASSERT, "(outCustomizationInfo)", (const char *)&queryFormat, "outCustomizationInfo") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1488, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  v4 = *modelName;
  if ( *modelName )
  {
    v5 = modelName;
    v6 = CUSTOMIZATION_TYPE_HEAD;
    v7 = 0;
    do
    {
      ++v5;
      v7 = v4 ^ (16777619 * v7);
      v4 = *v5;
    }
    while ( *v5 );
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1494, ASSERT_TYPE_ASSERT, "(modelNameHash != 0)", (const char *)&queryFormat, "modelNameHash != 0") )
      __debugbreak();
    PackageByHash = BG_Customization_FindPackageByHash(v7);
    if ( PackageByHash == 0xFFFF )
    {
      Com_PrintError(16, "BG_Customization: SetByName model '%s' not fund.\n", modelName);
    }
    else
    {
      while ( !(unsigned int)BG_Customization_SetByName_LookupInternalIndex(outCustomizationInfo, modelName, PackageByHash, v6) )
      {
        if ( (unsigned int)++v6 >= CUSTOMIZATION_TYPE_COUNT )
        {
          Com_PrintError(16, "BG_Customization: SetByName model '%s' invalid index %d.\n", modelName, PackageByHash);
          return;
        }
      }
    }
  }
}

/*
==============
BG_Customization_Shutdown
==============
*/
void BG_Customization_Shutdown(void)
{
  BG_Customization_Reset();
  DVARBOOL_bg_customization_forceFemale = Dvar_Deregister(DVARBOOL_bg_customization_forceFemale);
}

/*
==============
BG_Customization_UpdatePackageBindings
==============
*/
void BG_Customization_UpdatePackageBindings(const char *mapName)
{
  int v2; 
  unsigned int *p_packageCount; 
  CustomizationModelType i; 
  unsigned int j; 
  unsigned int v6; 
  int v7; 

  if ( s_customizationEnabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 968, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CHARACTER_CUSTOMIZATION_INGAME )") )
      __debugbreak();
    v2 = 0;
    p_packageCount = &s_customizationPackageLists[0].packageCount;
    for ( i = CUSTOMIZATION_TYPE_HEAD; (unsigned int)i < CUSTOMIZATION_TYPE_COUNT; ++i )
    {
      for ( j = 0; j < *p_packageCount; ++j )
      {
        BG_Customization_BindPackageAsset(i, j + *((_WORD *)p_packageCount - 2));
        ++v2;
      }
      p_packageCount += 4;
    }
    if ( s_customizationTotalPackageCount != v2 )
    {
      v7 = v2;
      v6 = s_customizationTotalPackageCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 991, ASSERT_TYPE_ASSERT, "( s_customizationTotalPackageCount ) == ( processedPackageCount )", "%s == %s\n\t%i, %i", "s_customizationTotalPackageCount", "processedPackageCount", v6, v7) )
        __debugbreak();
    }
    Com_Printf(16, "Character Customization: Initialized package bindings (customization enabled)(%s)\n", mapName);
  }
  else
  {
    BG_Customization_ResetBindings();
    Com_Printf(16, "Character Customization: Not using customization bindings (%s)\n", mapName);
  }
}

/*
==============
BG_Customization_Validate
==============
*/
bool BG_Customization_Validate(const unsigned int headIndex, const unsigned int helmetIndex, const unsigned int bodyIndex)
{
  unsigned __int16 PackageByPlayerDataIndex; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  CustomizationPackageData *PackageData; 
  bool result; 

  PackageByPlayerDataIndex = BG_Customization_FindPackageByPlayerDataIndex(CUSTOMIZATION_TYPE_BODY, bodyIndex, 0xFFFFu);
  v6 = BG_Customization_FindPackageByPlayerDataIndex(CUSTOMIZATION_TYPE_HEAD, headIndex, helmetIndex);
  v7 = v6;
  result = 0;
  if ( PackageByPlayerDataIndex != 0xFFFF && v6 != 0xFFFF )
  {
    PackageData = BG_Customization_GetPackageData(PackageByPlayerDataIndex);
    if ( PackageData->category == BG_Customization_GetPackageData(v7)->category )
      return 1;
  }
  return result;
}

/*
==============
BG_Customization_ValidateInitialization
==============
*/
void BG_Customization_ValidateInitialization(void)
{
  unsigned int v0; 
  unsigned int *p_packageCount; 
  unsigned int v2; 
  unsigned __int16 v3; 
  CustomizationPackageData *v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 

  if ( !s_customizationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1904, ASSERT_TYPE_ASSERT, "(s_customizationEnabled)", "%s\n\tCustomization has not been enabled, validation will be using invalid data", "s_customizationEnabled") )
    __debugbreak();
  v7 = 0;
  v0 = 0;
  p_packageCount = &s_customizationPackageLists[0].packageCount;
  do
  {
    if ( !s_customizationPackageLists[v0].packageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1912, ASSERT_TYPE_ASSERT, "(BG_Customization_GetModelCount( static_cast<CustomizationModelType>( customizationTypeIndex ) ) > 0)", "%s\n\tCustomization has not been initialized correctly", "BG_Customization_GetModelCount( static_cast<CustomizationModelType>( customizationTypeIndex ) ) > 0") )
      __debugbreak();
    v2 = 0;
    if ( *p_packageCount )
    {
      do
      {
        v3 = v2 + *((_WORD *)p_packageCount - 2);
        if ( v3 >= 0x1FFFu )
        {
          LODWORD(v6) = 0x1FFF;
          LODWORD(v5) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( packageIndex ) < (unsigned)( S_CUSTOMIZATION_MAX_PACKAGE_COUNT )", "packageIndex doesn't index S_CUSTOMIZATION_MAX_PACKAGE_COUNT\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v4 = &s_customizationPackageData[v3];
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1920, ASSERT_TYPE_ASSERT, "( ( packageData != nullptr ) )", "( packageData ) = %p", NULL) )
          __debugbreak();
        if ( v4->bindingError )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF7E60, 5814i64, v4->modelNames[0]);
        ++v2;
      }
      while ( v2 < *p_packageCount );
      v0 = v7;
    }
    ++v0;
    p_packageCount += 4;
    v7 = v0;
  }
  while ( v0 < 3 );
}

/*
==============
BG_Customization_ValidateModelEquivolence
==============
*/
void BG_Customization_ValidateModelEquivolence(const CustomizationModelType customizationType, const unsigned int modelIndex)
{
  const char *ModelNameForType; 
  const char *v5; 
  const XModel *model; 
  const XModel *v7; 
  unsigned __int8 i; 
  unsigned __int8 v9; 
  scr_string_t v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 outClassifications[256]; 
  unsigned __int8 v19[256]; 

  ModelNameForType = BG_Customization_GetModelNameForType(customizationType, modelIndex, All);
  v5 = BG_Customization_GetModelNameForType(customizationType, modelIndex, NormalSpace);
  if ( !CL_TransientsMP_IsXModelNameLoaded(ModelNameForType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1838, ASSERT_TYPE_ASSERT, "(CL_TransientsMP_IsXModelNameLoaded( loadedModelName ))", (const char *)&queryFormat, "CL_TransientsMP_IsXModelNameLoaded( loadedModelName )") )
    __debugbreak();
  model = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v5, 0).model;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1842, ASSERT_TYPE_ASSERT, "(defaultHeader.data != nullptr)", (const char *)&queryFormat, "defaultHeader.data != nullptr") )
    __debugbreak();
  v7 = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, ModelNameForType, 0).model;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1845, ASSERT_TYPE_ASSERT, "(loadedHeader.data != nullptr)", (const char *)&queryFormat, "loadedHeader.data != nullptr") )
    __debugbreak();
  BG_Customization_GetModelPartClassifications(model, outClassifications);
  BG_Customization_GetModelPartClassifications(v7, v19);
  for ( i = 0; i < model->numBones; ++i )
  {
    v9 = outClassifications[i];
    if ( v9 >= 0x16u )
    {
      LODWORD(v17) = 22;
      LODWORD(v16) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1856, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( model->boneInfo[i].radiusSquaredAsInt && v9 >= 2u )
    {
      v10 = model->boneNames[i];
      if ( i >= v7->numBones )
      {
        v15 = SL_ConvertToString(v10);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF7970, 117i64, v5, v15, ModelNameForType);
        return;
      }
      if ( v10 != v7->boneNames[i] )
      {
        v13 = SL_ConvertToString(v10);
        v14 = SL_ConvertToString(v7->boneNames[i]);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF7A60, 118i64, v5, v13, ModelNameForType, v14);
        return;
      }
      if ( v9 != v19[i] )
      {
        v11 = SL_ConvertToString(v10);
        v12 = SL_ConvertToString(v7->boneNames[i]);
        LODWORD(v16) = v9;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF7B60, 119i64, v5, v11, v16, ModelNameForType, v12, v7->partClassification[i]);
        return;
      }
    }
  }
}

/*
==============
BG_Customization_Write
==============
*/
void BG_Customization_Write(msg_t *msg, const ClientCustomizationInfo *customizationInfo)
{
  const ClientCustomizationInfo *v2; 
  CustomizationModelType i; 
  StreamSyncClientType StreamTypeForCustomization; 
  unsigned int BitCount; 

  v2 = customizationInfo;
  if ( !customizationInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1230, ASSERT_TYPE_ASSERT, "(customizationInfo)", (const char *)&queryFormat, "customizationInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_customization_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  for ( i = CUSTOMIZATION_TYPE_HEAD; (unsigned int)i < CUSTOMIZATION_TYPE_COUNT; ++i )
  {
    StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(i);
    BitCount = Com_StreamSync_GetBitCount(StreamTypeForCustomization);
    MSG_WriteBits(msg, v2->modelIndex[0], BitCount);
    v2 = (const ClientCustomizationInfo *)((char *)v2 + 4);
  }
}

