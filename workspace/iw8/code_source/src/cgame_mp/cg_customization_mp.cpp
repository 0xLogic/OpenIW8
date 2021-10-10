/*
==============
CG_CustomizationMP_HasAnyLatchedCustomization
==============
*/

int __fastcall CG_CustomizationMP_HasAnyLatchedCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CG_CustomizationMP_HasAnyLatchedCustomization@@YAHW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_CustomizationMP_ResetAllCustomizationLatch
==============
*/

void __fastcall CG_CustomizationMP_ResetAllCustomizationLatch(const LocalClientNum_t localClientNum)
{
  ?CG_CustomizationMP_ResetAllCustomizationLatch@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CustomizationMP_GetMaxLatchDistanceSq
==============
*/

double __fastcall CG_CustomizationMP_GetMaxLatchDistanceSq()
{
  double result; 

  *(float *)&result = ?CG_CustomizationMP_GetMaxLatchDistanceSq@@YAMXZ();
  return result;
}

/*
==============
CG_CustomizationMP_GetTypeName
==============
*/

const char *__fastcall CG_CustomizationMP_GetTypeName(const CustomizationModelType customizationType)
{
  return ?CG_CustomizationMP_GetTypeName@@YAPEBDW4CustomizationModelType@@@Z(customizationType);
}

/*
==============
CG_CustomizationMP_HasLatchedCustomization
==============
*/

int __fastcall CG_CustomizationMP_HasLatchedCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelType customizationType)
{
  return ?CG_CustomizationMP_HasLatchedCustomization@@YAHW4LocalClientNum_t@@IW4CustomizationModelType@@@Z(localClientNum, clientIndex, customizationType);
}

/*
==============
CG_CustomizationMP_Shutdown
==============
*/

void CG_CustomizationMP_Shutdown(void)
{
  ?CG_CustomizationMP_Shutdown@@YAXXZ();
}

/*
==============
CG_CustomizationMP_GetActiveModel
==============
*/

const char *__fastcall CG_CustomizationMP_GetActiveModel(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, const characterInfo_t *characterInfo, const CustomizationModelType customizationType, bool *outIsModelLoaded)
{
  return ?CG_CustomizationMP_GetActiveModel@@YAPEBDW4LocalClientNum_t@@PEBUclientInfo_t@@PEBUcharacterInfo_t@@W4CustomizationModelType@@PEA_N@Z(localClientNum, clientInfo, characterInfo, customizationType, outIsModelLoaded);
}

/*
==============
CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient
==============
*/

void __fastcall CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  ?CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_CustomizationMP_IsModelValid
==============
*/

int __fastcall CG_CustomizationMP_IsModelValid(const LocalClientNum_t localClientNum, const CustomizationModelType customizationType, const char *desiredModelName)
{
  return ?CG_CustomizationMP_IsModelValid@@YAHW4LocalClientNum_t@@W4CustomizationModelType@@PEBD@Z(localClientNum, customizationType, desiredModelName);
}

/*
==============
CG_CustomizationMP_IsLatchedToDefaultCustomization
==============
*/

int __fastcall CG_CustomizationMP_IsLatchedToDefaultCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelType customizationType)
{
  return ?CG_CustomizationMP_IsLatchedToDefaultCustomization@@YAHW4LocalClientNum_t@@IW4CustomizationModelType@@@Z(localClientNum, clientIndex, customizationType);
}

/*
==============
CG_CustomizationMP_ResetCustomizationLatchForClient
==============
*/

void __fastcall CG_CustomizationMP_ResetCustomizationLatchForClient(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  ?CG_CustomizationMP_ResetCustomizationLatchForClient@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_CustomizationMP_Init
==============
*/

void CG_CustomizationMP_Init(void)
{
  ?CG_CustomizationMP_Init@@YAXXZ();
}

/*
==============
CG_CustomizationMP_GetClientModelFromServerIndex
==============
*/

const char *__fastcall CG_CustomizationMP_GetClientModelFromServerIndex(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, const characterInfo_t *characterInfo, const CustomizationModelType customizationType, const unsigned int modelIndex, bool *outIsModelLoaded, bool *outIsCustomModel)
{
  return ?CG_CustomizationMP_GetClientModelFromServerIndex@@YAPEBDW4LocalClientNum_t@@PEBUclientInfo_t@@PEBUcharacterInfo_t@@W4CustomizationModelType@@IPEA_N4@Z(localClientNum, clientInfo, characterInfo, customizationType, modelIndex, outIsModelLoaded, outIsCustomModel);
}

/*
==============
CG_CustomizationMP_ResetCustomizationLatchForFarCharacters
==============
*/

void __fastcall CG_CustomizationMP_ResetCustomizationLatchForFarCharacters(const LocalClientNum_t localClientNum)
{
  ?CG_CustomizationMP_ResetCustomizationLatchForFarCharacters@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CustomizationMP_ClearModelCustomizationLatch
==============
*/
void CG_CustomizationMP_ClearModelCustomizationLatch(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  CgCustomizationData *v3; 
  int v4; 
  CgCustomizationData *v5; 
  bool v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  Com_Printf(14, "[%i] CG_CustomizationMP: Clearing all model latching information.\n", (unsigned int)v1);
  v2 = 0;
  v3 = &s_customizationData[v1];
  do
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v9) = 2;
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_customizationData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_customizationData )\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    v4 = 0;
    v5 = v3;
    v6 = 1;
    do
    {
      if ( !v6 )
      {
        LODWORD(v9) = 3;
        LODWORD(v7) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( customizationTypeIndex ) < (unsigned)( ( sizeof( *array_counter( latch.latchedItems ) ) + 0 ) )", "customizationTypeIndex doesn't index ARRAY_COUNT( latch.latchedItems )\n\t%i not in [0, %i)", v7, v9) )
          __debugbreak();
      }
      v5->itemLatch[0].latchedItems[0] = (char *)&queryFormat.fmt + 3;
      ++v4;
      v5 = (CgCustomizationData *)((char *)v5 + 8);
      v6 = (unsigned int)v4 < 3;
    }
    while ( v4 < 3 );
    *(_QWORD *)v3->itemLatch[0].hasItemLatch = 0i64;
    *(_QWORD *)v3->itemLatch[0].isDefault = 0i64;
    ++v2;
    v3 = (CgCustomizationData *)((char *)v3 + 40);
  }
  while ( v2 < 0xC8 );
}

/*
==============
CG_CustomizationMP_DevLatchModels
==============
*/
void CG_CustomizationMP_DevLatchModels()
{
  LocalClientNum_t v0; 
  CustomizationModelSetType v1; 
  unsigned int v2; 
  int isDefault; 

  v0 = Cmd_LocalClientNum();
  v1 = CUSTOMIZATION_WORLD_MODEL_SET_TYPE;
  if ( Cmd_Argc() < 2 )
    v2 = 0;
  else
    v2 = Cmd_ArgInt(1);
  do
  {
    isDefault = CG_CustomizationMP_GetClientLatchIsDefaultModel(v0, v2, v1);
    CG_CustomizationMP_SetClientHasLatchedCustomization(v0, v2, v1++, 1, isDefault);
  }
  while ( (unsigned int)v1 < CUSTOMIZATION_MODEL_SET_TYPE_COUNT );
}

/*
==============
CG_CustomizationMP_GenerateActiveModel
==============
*/
__int64 CG_CustomizationMP_GenerateActiveModel(const LocalClientNum_t localClientNum, const char **latchedModelName, const clientInfo_t *clientInfo, const characterInfo_t *characterInfo, const CustomizationModelType customizationType, const int forceDefault)
{
  __int64 v6; 
  ClientCustomizationInfo *p_customization; 
  const char *ModelNameForCustomization; 
  unsigned __int64 v12; 
  const char *DefaultModelNameForCustomization; 
  bool IsTransientAsset; 
  int v16; 
  int *v17; 
  unsigned __int64 v18; 

  v6 = localClientNum;
  if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 270, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 271, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !*latchedModelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 272, ASSERT_TYPE_ASSERT, "(latchedModelName)", (const char *)&queryFormat, "latchedModelName") )
    __debugbreak();
  p_customization = &clientInfo->customization;
  if ( forceDefault || (ModelNameForCustomization = BG_Customization_GetModelNameForCustomization(customizationType, p_customization), !CL_TransientsMP_IsXModelNameLoaded(ModelNameForCustomization)) )
  {
    if ( !p_customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 238, ASSERT_TYPE_ASSERT, "(customization)", (const char *)&queryFormat, "customization") )
      __debugbreak();
    if ( !*latchedModelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 239, ASSERT_TYPE_ASSERT, "(updatedModelNameBuf)", (const char *)&queryFormat, "updatedModelNameBuf") )
      __debugbreak();
    DefaultModelNameForCustomization = BG_Customization_GetDefaultModelNameForCustomization(customizationType, p_customization);
    if ( !DefaultModelNameForCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 243, ASSERT_TYPE_ASSERT, "(defaultModel)", (const char *)&queryFormat, "defaultModel") )
      __debugbreak();
    IsTransientAsset = CL_TransientsMP_IsTransientAsset(DefaultModelNameForCustomization, ASSET_TYPE_XMODEL);
    v16 = Sys_Milliseconds();
    if ( IsTransientAsset )
    {
      if ( v16 - *((_DWORD *)&unk_148C553E8 + 3 * v6) > 2000 )
      {
        *((_DWORD *)&unk_148C553E8 + 3 * v6) = v16;
        Com_PrintError(14, "[%i] CG_CustomizationMP: Trying to override model to default, but '%s' a transient model! Not using any model.\n", (unsigned int)v6, DefaultModelNameForCustomization);
      }
      DefaultModelNameForCustomization = (char *)&queryFormat.fmt + 3;
    }
    else
    {
      v17 = (int *)((char *)&unk_148C553E8 + 12 * v6 + 4);
      if ( v16 - *v17 > 2000 )
      {
        *v17 = v16;
        Com_Printf(14, "[%i] CG_CustomizationMP: Couldn't find any loaded model, using default model '%s'.\n", (unsigned int)v6, DefaultModelNameForCustomization);
      }
    }
    *latchedModelName = DefaultModelNameForCustomization;
    if ( !*DefaultModelNameForCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 290, ASSERT_TYPE_ASSERT, "(latchedModelName[0] != '\\0')", (const char *)&queryFormat, "latchedModelName[0] != '\\0'") )
      __debugbreak();
    v18 = -1i64;
    do
      ++v18;
    while ( (*latchedModelName)[v18] );
    if ( v18 > 0x50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 291, ASSERT_TYPE_ASSERT, "(strlen( latchedModelName ) <= MAX_STREAM_NAME_LENGTH)", "%s\n\tLatched model name is too long, possible nonterminated string or buffer overflow", "strlen( latchedModelName ) <= MAX_STREAM_NAME_LENGTH") )
      __debugbreak();
    return 1i64;
  }
  else
  {
    *latchedModelName = ModelNameForCustomization;
    v12 = -1i64;
    do
      ++v12;
    while ( ModelNameForCustomization[v12] );
    if ( v12 > 0x50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 283, ASSERT_TYPE_ASSERT, "(strlen( latchedModelName ) <= MAX_STREAM_NAME_LENGTH)", "%s\n\tLatched model name is too long, possible nonterminated string or buffer overflow", "strlen( latchedModelName ) <= MAX_STREAM_NAME_LENGTH") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
CG_CustomizationMP_GetActiveModel
==============
*/
const char *CG_CustomizationMP_GetActiveModel(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, const characterInfo_t *characterInfo, const CustomizationModelType customizationType, bool *outIsModelLoaded)
{
  __int64 v5; 
  __int64 v7; 
  CustomizationModelType v8; 
  CustomizationModelSetType v9; 
  CustomizationModelSetType v11; 
  const char **ClientLatchedModelBuf; 
  unsigned __int64 v13; 
  int v14; 
  const char *v15; 
  const clientInfo_t *v16; 
  int ActiveModel; 
  const char **v18; 
  int v19; 
  __int64 entityNum; 
  const char *v21; 
  const char *v22; 
  char *fmt; 
  __int64 forceDefault; 
  int v26; 
  int v27; 

  v5 = customizationType;
  v7 = localClientNum;
  if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 337, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 338, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !outIsModelLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 339, ASSERT_TYPE_ASSERT, "(outIsModelLoaded)", (const char *)&queryFormat, "outIsModelLoaded") )
    __debugbreak();
  if ( !BG_Customization_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(BG_Customization_IsEnabled())", (const char *)&queryFormat, "BG_Customization_IsEnabled()") )
    __debugbreak();
  v8 = CUSTOMIZATION_TYPE_HEAD;
  *outIsModelLoaded = 1;
  v9 = CUSTOMIZATION_VIEW_MODEL_SET_TYPE;
  if ( !(_DWORD)v5 )
  {
    if ( BG_Customization_IsFullbodyModel(characterInfo->model) )
      return (char *)&queryFormat.fmt + 3;
    goto LABEL_22;
  }
  if ( (int)v5 < 0 )
    goto LABEL_70;
  if ( (int)v5 <= 1 )
  {
LABEL_22:
    v11 = CUSTOMIZATION_WORLD_MODEL_SET_TYPE;
    goto LABEL_23;
  }
  if ( (_DWORD)v5 != 2 )
  {
LABEL_70:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 84, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown customizationType") )
      __debugbreak();
    goto LABEL_22;
  }
  v11 = CUSTOMIZATION_VIEW_MODEL_SET_TYPE;
LABEL_23:
  ClientLatchedModelBuf = CG_CustomizationMP_GetClientLatchedModelBuf((const LocalClientNum_t)v7, (const CustomizationModelType)v5, characterInfo->entityNum);
  if ( !*ClientLatchedModelBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 354, ASSERT_TYPE_ASSERT, "( ( latchedModelName != nullptr ) )", "( latchedModelName ) = %p", NULL) )
    __debugbreak();
  if ( !**ClientLatchedModelBuf )
  {
    v16 = clientInfo;
LABEL_48:
    ActiveModel = CG_CustomizationMP_GenerateActiveModel((const LocalClientNum_t)v7, ClientLatchedModelBuf, v16, characterInfo, (const CustomizationModelType)v5, 0);
    v27 = ActiveModel;
    if ( !**ClientLatchedModelBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 372, ASSERT_TYPE_ASSERT, "(latchedModelName[0] != '\\0')", (const char *)&queryFormat, "latchedModelName[0] != '\\0'") )
      __debugbreak();
    if ( ActiveModel )
    {
      *outIsModelLoaded = 0;
      if ( v11 == CUSTOMIZATION_WORLD_MODEL_SET_TYPE )
      {
        LOBYTE(v8) = (_DWORD)v5 != 1;
        v18 = CG_CustomizationMP_GetClientLatchedModelBuf((const LocalClientNum_t)v7, v8, characterInfo->entityNum);
        if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 384, ASSERT_TYPE_ASSERT, "(otherLatchedModelName)", (const char *)&queryFormat, "otherLatchedModelName") )
          __debugbreak();
        v19 = Sys_Milliseconds();
        if ( v19 - dword_148C553F0[3 * v7] > 2000 )
        {
          entityNum = (unsigned int)characterInfo->entityNum;
          dword_148C553F0[3 * v7] = v19;
          v21 = "HEAD";
          v22 = "HEAD";
          if ( (_DWORD)v5 == 1 )
            v21 = "BODY";
          if ( (_DWORD)v5 != 1 )
            v22 = "BODY";
          Com_Printf(14, "[%i] CL_StreamSync: Customization_ValidateModel: Client %i uses default %s model, overriding %s to default (from '%s').\n", (unsigned int)v7, entityNum, v21, v22, *v18);
        }
        CG_CustomizationMP_GenerateActiveModel((const LocalClientNum_t)v7, v18, clientInfo, characterInfo, v8, 1);
        if ( !**v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 392, ASSERT_TYPE_ASSERT, "(otherLatchedModelName[0] != '\\0')", (const char *)&queryFormat, "otherLatchedModelName[0] != '\\0'") )
          __debugbreak();
        ActiveModel = v27;
      }
    }
    CG_CustomizationMP_SetClientHasLatchedCustomization((const LocalClientNum_t)v7, characterInfo->entityNum, v11, 1, ActiveModel);
    return *ClientLatchedModelBuf;
  }
  if ( !CG_CustomizationMP_GetClientHasLatchedModel((const LocalClientNum_t)v7, characterInfo->entityNum, v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 358, ASSERT_TYPE_ASSERT, "(CG_CustomizationMP_GetClientHasLatchedModel( localClientNum, characterInfo->entityNum, modelSetType ))", "%s\n\tLatched model set but we arent tracking it correctly", "CG_CustomizationMP_GetClientHasLatchedModel( localClientNum, characterInfo->entityNum, modelSetType )") )
    __debugbreak();
  v13 = -1i64;
  do
    ++v13;
  while ( (*ClientLatchedModelBuf)[v13] );
  if ( v13 > 0x50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 359, ASSERT_TYPE_ASSERT, "(strlen( latchedModelName ) <= MAX_STREAM_NAME_LENGTH)", "%s\n\tLatched model name is too long, possible nonterminated string or buffer overflow", "strlen( latchedModelName ) <= MAX_STREAM_NAME_LENGTH") )
    __debugbreak();
  if ( !CL_TransientsMP_IsXModelNameLoaded(*ClientLatchedModelBuf) )
  {
    v15 = *ClientLatchedModelBuf;
    v26 = characterInfo->entityNum;
    if ( (unsigned int)v5 >= 3 )
    {
      LODWORD(forceDefault) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( S_CUSTOMIZATION_TYPE_NAMES ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( S_CUSTOMIZATION_TYPE_NAMES )\n\t%i not in [0, %i)", forceDefault, 3) )
        __debugbreak();
    }
    LODWORD(fmt) = v26;
    Com_Printf(14, "[%i] CL_StreamSync: Customization_ValidateModel: (%s) Client %i latched model '%s' is not valid anymore.\n", (unsigned int)v7, S_CUSTOMIZATION_TYPE_NAMES[v5], fmt, v15);
    v16 = clientInfo;
    CG_CustomizationMP_ResetCustomizationLatchForClientModelSetType((const LocalClientNum_t)v7, clientInfo->clientNum, v11);
    goto LABEL_48;
  }
  v14 = characterInfo->entityNum;
  if ( (int)v5 < 0 )
    goto LABEL_71;
  if ( (int)v5 <= 1 )
  {
LABEL_41:
    v9 = CUSTOMIZATION_WORLD_MODEL_SET_TYPE;
    goto LABEL_42;
  }
  if ( (_DWORD)v5 != 2 )
  {
LABEL_71:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 84, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown customizationType") )
      __debugbreak();
    goto LABEL_41;
  }
LABEL_42:
  *outIsModelLoaded = CG_CustomizationMP_GetClientLatchIsDefaultModel((const LocalClientNum_t)v7, v14, v9) == 0;
  return *ClientLatchedModelBuf;
}

/*
==============
CG_CustomizationMP_GetClientHasLatchedModel
==============
*/
__int64 CG_CustomizationMP_GetClientHasLatchedModel(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelSetType setType)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  v4 = setType;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v9) = 200;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_customizationData[localClientNum].itemLatch )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( setType ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch[clientIndex].hasItemLatch ) ) + 0 ) )", "setType doesn't index s_customizationData[localClientNum].itemLatch[clientIndex].hasItemLatch\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (unsigned int)s_customizationData[v3].itemLatch[v5].hasItemLatch[v4];
}

/*
==============
CG_CustomizationMP_GetClientLatchIsDefaultModel
==============
*/
__int64 CG_CustomizationMP_GetClientLatchIsDefaultModel(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelSetType setType)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  v4 = setType;
  v5 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v9) = 200;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_customizationData[localClientNum].itemLatch )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( setType ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch[clientIndex].isDefault ) ) + 0 ) )", "setType doesn't index s_customizationData[localClientNum].itemLatch[clientIndex].isDefault\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (unsigned int)s_customizationData[v3].itemLatch[v5].isDefault[v4];
}

/*
==============
CG_CustomizationMP_GetClientLatchedModelBuf
==============
*/
const char **CG_CustomizationMP_GetClientLatchedModelBuf(const LocalClientNum_t localClientNum, const CustomizationModelType customizationType, const unsigned int clientIndex)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  v4 = clientIndex;
  v5 = customizationType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v9) = 200;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 94, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_customizationData[localClientNum].itemLatch )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 3 )
  {
    LODWORD(v9) = 3;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch[clientIndex].latchedItems ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( s_customizationData[localClientNum].itemLatch[clientIndex].latchedItems )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (const char **)((char *)&s_customizationData[v3] + 40 * v4 + 8 * v5);
}

/*
==============
CG_CustomizationMP_GetClientModelFromServerIndex
==============
*/
const char *CG_CustomizationMP_GetClientModelFromServerIndex(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, const characterInfo_t *characterInfo, const CustomizationModelType customizationType, const unsigned int modelIndex, bool *outIsModelLoaded, bool *outIsCustomModel)
{
  ClConfigStrings *ClConfigStrings; 
  const char *ActiveModel; 

  if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 402, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 403, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !outIsModelLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 404, ASSERT_TYPE_ASSERT, "(outIsModelLoaded)", (const char *)&queryFormat, "outIsModelLoaded") )
    __debugbreak();
  if ( !outIsCustomModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 405, ASSERT_TYPE_ASSERT, "(outIsCustomModel)", (const char *)&queryFormat, "outIsCustomModel") )
    __debugbreak();
  *outIsModelLoaded = 1;
  *outIsCustomModel = 0;
  if ( !modelIndex )
    return (char *)&queryFormat.fmt + 3;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  ActiveModel = ClConfigStrings->GetModelString(ClConfigStrings, modelIndex);
  if ( CL_TransientsMP_IsTransientAsset(ActiveModel, ASSET_TYPE_XMODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 418, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_IsTransientAsset( modelName, ASSET_TYPE_XMODEL ))", "%s\n\tServer should not specify transient models, only the default custom model", "!CL_TransientsMP_IsTransientAsset( modelName, ASSET_TYPE_XMODEL )") )
    __debugbreak();
  if ( *ActiveModel && BG_Customization_IsEnabled() && BG_Customization_IsCustomizationModel(customizationType, ActiveModel) )
  {
    ActiveModel = CG_CustomizationMP_GetActiveModel(localClientNum, clientInfo, characterInfo, customizationType, outIsModelLoaded);
    if ( !ActiveModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 432, ASSERT_TYPE_ASSERT, "(clientModelName)", (const char *)&queryFormat, "clientModelName") )
      __debugbreak();
    *outIsCustomModel = 1;
  }
  return ActiveModel;
}

/*
==============
CG_CustomizationMP_GetMaxLatchDistanceSq
==============
*/

double __fastcall CG_CustomizationMP_GetMaxLatchDistanceSq()
{
  double result; 

  *(float *)&result = CG_CustomizationMP_GetMaxLatchDistanceSqFromDvar();
  return result;
}

/*
==============
CG_CustomizationMP_GetMaxLatchDistanceSqFromDvar
==============
*/
float CG_CustomizationMP_GetMaxLatchDistanceSqFromDvar()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_cg_customizationMP_latchMaxDistance;
  if ( !DCONST_DVARFLT_cg_customizationMP_latchMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationMP_latchMaxDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value * v0->current.value;
}

/*
==============
CG_CustomizationMP_GetTypeName
==============
*/
const char *CG_CustomizationMP_GetTypeName(const CustomizationModelType customizationType)
{
  __int64 v1; 
  int v4; 

  v1 = customizationType;
  if ( (unsigned int)customizationType >= CUSTOMIZATION_TYPE_COUNT )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( customizationType ) < (unsigned)( ( sizeof( *array_counter( S_CUSTOMIZATION_TYPE_NAMES ) ) + 0 ) )", "customizationType doesn't index ARRAY_COUNT( S_CUSTOMIZATION_TYPE_NAMES )\n\t%i not in [0, %i)", customizationType, v4) )
      __debugbreak();
  }
  return S_CUSTOMIZATION_TYPE_NAMES[v1];
}

/*
==============
CG_CustomizationMP_HasAnyLatchedCustomization
==============
*/
__int64 CG_CustomizationMP_HasAnyLatchedCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  int v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v4 = 0;
  v5 = clientIndex + 200i64 * (int)localClientNum;
  while ( 1 )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( clientIndex >= 0xC8 )
    {
      LODWORD(v8) = 200;
      LODWORD(v7) = clientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_customizationData[localClientNum].itemLatch )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( s_customizationData[0].itemLatch[v5].hasItemLatch[v4] )
      break;
    if ( (unsigned int)++v4 >= 2 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
CG_CustomizationMP_HasLatchedCustomization
==============
*/
__int64 CG_CustomizationMP_HasLatchedCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelType customizationType)
{
  CustomizationModelSetType v5; 

  if ( customizationType < CUSTOMIZATION_TYPE_HEAD )
    goto LABEL_11;
  if ( customizationType <= CUSTOMIZATION_TYPE_BODY )
  {
LABEL_7:
    v5 = CUSTOMIZATION_WORLD_MODEL_SET_TYPE;
    return CG_CustomizationMP_GetClientHasLatchedModel(localClientNum, clientIndex, v5);
  }
  if ( customizationType != CUSTOMIZATION_TYPE_VIEWHANDS )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 84, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown customizationType") )
      __debugbreak();
    goto LABEL_7;
  }
  v5 = CUSTOMIZATION_VIEW_MODEL_SET_TYPE;
  return CG_CustomizationMP_GetClientHasLatchedModel(localClientNum, clientIndex, v5);
}

/*
==============
CG_CustomizationMP_Init
==============
*/
void CG_CustomizationMP_Init(void)
{
  int i; 
  const dvar_t *v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 648, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
    __debugbreak();
  DebugWipe(s_customizationData, 0x3E80ui64);
  Cmd_AddCommandInternal("cg_customization_devLatchModels", CG_CustomizationMP_DevLatchModels, &stru_148C55408);
  for ( i = 0; i < 2; ++i )
    CG_CustomizationMP_ClearModelCustomizationLatch((const LocalClientNum_t)i);
  v1 = DCONST_DVARFLT_cg_customizationMP_latchMaxDistance;
  if ( !DCONST_DVARFLT_cg_customizationMP_latchMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationMP_latchMaxDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  s_customizationMaxLatchDistanceSq = v1->current.value * v1->current.value;
}

/*
==============
CG_CustomizationMP_IsLatchedToDefaultCustomization
==============
*/
__int64 CG_CustomizationMP_IsLatchedToDefaultCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelType customizationType)
{
  CustomizationModelSetType v5; 

  if ( customizationType < CUSTOMIZATION_TYPE_HEAD )
    goto LABEL_11;
  if ( customizationType <= CUSTOMIZATION_TYPE_BODY )
  {
LABEL_7:
    v5 = CUSTOMIZATION_WORLD_MODEL_SET_TYPE;
    return CG_CustomizationMP_GetClientLatchIsDefaultModel(localClientNum, clientIndex, v5);
  }
  if ( customizationType != CUSTOMIZATION_TYPE_VIEWHANDS )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 84, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown customizationType") )
      __debugbreak();
    goto LABEL_7;
  }
  v5 = CUSTOMIZATION_VIEW_MODEL_SET_TYPE;
  return CG_CustomizationMP_GetClientLatchIsDefaultModel(localClientNum, clientIndex, v5);
}

/*
==============
CG_CustomizationMP_IsModelValid
==============
*/
_BOOL8 CG_CustomizationMP_IsModelValid(const LocalClientNum_t localClientNum, const CustomizationModelType customizationType, const char *desiredModelName)
{
  return CL_TransientsMP_IsXModelNameLoaded(desiredModelName);
}

/*
==============
CG_CustomizationMP_ResetAllCustomizationLatch
==============
*/
void CG_CustomizationMP_ResetAllCustomizationLatch(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARBOOL_cg_customization_devVerbose;
  if ( !DCONST_DVARBOOL_cg_customization_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customization_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    Com_Printf(14, "[%i] CG_CustomizationMP: Resetting customization latch for all clients.\n", (unsigned int)localClientNum);
  CG_CustomizationMP_ClearModelCustomizationLatch(localClientNum);
}

/*
==============
CG_CustomizationMP_ResetCustomizationLatchForClient
==============
*/
void CG_CustomizationMP_ResetCustomizationLatchForClient(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  CustomizationModelSetType v3; 
  const dvar_t *v5; 
  CustomizationModelType i; 
  const char **ClientLatchedModelBuf; 
  CustomizationModelSetType j; 

  v3 = CUSTOMIZATION_WORLD_MODEL_SET_TYPE;
  while ( !(unsigned int)CG_CustomizationMP_GetClientHasLatchedModel(localClientNum, clientIndex, v3) )
  {
    if ( (unsigned int)++v3 >= CUSTOMIZATION_MODEL_SET_TYPE_COUNT )
      return;
  }
  v5 = DCONST_DVARBOOL_cg_customization_devVerbose;
  if ( !DCONST_DVARBOOL_cg_customization_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customization_devVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    Com_Printf(14, "[%i] CG_CustomizationMP: Resetting customization latch for client %d\n", (unsigned int)localClientNum, clientIndex);
  for ( i = CUSTOMIZATION_TYPE_HEAD; (unsigned int)i < CUSTOMIZATION_TYPE_COUNT; ++i )
  {
    ClientLatchedModelBuf = CG_CustomizationMP_GetClientLatchedModelBuf(localClientNum, i, clientIndex);
    *ClientLatchedModelBuf = (char *)&queryFormat.fmt + 3;
  }
  for ( j = CUSTOMIZATION_WORLD_MODEL_SET_TYPE; (unsigned int)j < CUSTOMIZATION_MODEL_SET_TYPE_COUNT; ++j )
    CG_CustomizationMP_SetClientHasLatchedCustomization(localClientNum, clientIndex, j, 0, 0);
}

/*
==============
CG_CustomizationMP_ResetCustomizationLatchForClientModelSetType
==============
*/
void CG_CustomizationMP_ResetCustomizationLatchForClientModelSetType(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelSetType setType)
{
  const char **ClientLatchedModelBuf; 

  if ( setType == CUSTOMIZATION_WORLD_MODEL_SET_TYPE )
  {
    *CG_CustomizationMP_GetClientLatchedModelBuf(localClientNum, CUSTOMIZATION_TYPE_BODY, clientIndex) = (char *)&queryFormat.fmt + 3;
    ClientLatchedModelBuf = CG_CustomizationMP_GetClientLatchedModelBuf(localClientNum, CUSTOMIZATION_TYPE_HEAD, clientIndex);
    goto LABEL_7;
  }
  if ( setType == CUSTOMIZATION_VIEW_MODEL_SET_TYPE )
  {
    ClientLatchedModelBuf = CG_CustomizationMP_GetClientLatchedModelBuf(localClientNum, CUSTOMIZATION_TYPE_VIEWHANDS, clientIndex);
LABEL_7:
    *ClientLatchedModelBuf = (char *)&queryFormat.fmt + 3;
    goto LABEL_8;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 155, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown customization model set type") )
    __debugbreak();
LABEL_8:
  CG_CustomizationMP_SetClientHasLatchedCustomization(localClientNum, clientIndex, setType, 0, 0);
}

/*
==============
CG_CustomizationMP_ResetCustomizationLatchForFarCharacters
==============
*/
void CG_CustomizationMP_ResetCustomizationLatchForFarCharacters(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgStatic **v2; 
  const CgStatic *v3; 
  CgDistanceCacheMpRing v4; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *FriendlyPlayerCache; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *EnemyPlayerCache; 
  __int64 v7; 
  __int64 v8; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_CustomizationMP_ResetCustomizationLatchForFarCharacters");
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v1) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v8 = CgStatic::ms_allocatedCount;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v2 = &CgStatic::ms_cgameStaticsArray[v1];
  if ( !*v2 )
  {
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v8) )
      __debugbreak();
  }
  v3 = *v2;
  v4 = CG_DISTANCE_CACHE_RING_0;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 600, ASSERT_TYPE_ASSERT, "( ( cgStatic != nullptr ) )", "( cgStatic ) = %p", NULL) )
    __debugbreak();
  do
  {
    FriendlyPlayerCache = CG_DistanceCacheMP_GetFriendlyPlayerCache((const LocalClientNum_t)v1);
    CG_CustomizationMP_ResetCustomizationLatchForCharactersInDistanceCache<OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey>>((const LocalClientNum_t)v1, v3, FriendlyPlayerCache, v4);
    EnemyPlayerCache = CG_DistanceCacheMP_GetEnemyPlayerCache((const LocalClientNum_t)v1);
    CG_CustomizationMP_ResetCustomizationLatchForCharactersInDistanceCache<OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey>>((const LocalClientNum_t)v1, v3, EnemyPlayerCache, v4++);
  }
  while ( (unsigned __int16)v4 < CG_DISTANCE_CACHE_RING_COUNT );
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient
==============
*/
void CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  const dvar_t *v4; 

  if ( (unsigned int)CG_CustomizationMP_GetClientHasLatchedModel(localClientNum, clientIndex, CUSTOMIZATION_VIEW_MODEL_SET_TYPE) )
  {
    v4 = DCONST_DVARBOOL_cg_customization_devVerbose;
    if ( !DCONST_DVARBOOL_cg_customization_devVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customization_devVerbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      Com_Printf(14, "[%i] CG_CustomizationMP: Resetting viewhands latch for client %d\n", (unsigned int)localClientNum, clientIndex);
    *CG_CustomizationMP_GetClientLatchedModelBuf(localClientNum, CUSTOMIZATION_TYPE_VIEWHANDS, clientIndex) = (char *)&queryFormat.fmt + 3;
    CG_CustomizationMP_SetClientHasLatchedCustomization(localClientNum, clientIndex, CUSTOMIZATION_VIEW_MODEL_SET_TYPE, 0, 0);
  }
}

/*
==============
CG_CustomizationMP_SetClientHasLatchedCustomization
==============
*/
void CG_CustomizationMP_SetClientHasLatchedCustomization(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const CustomizationModelSetType setType, const int setHasModelLatch, const int isDefault)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 

  v5 = localClientNum;
  v7 = setType;
  v8 = clientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= 0xC8 )
  {
    LODWORD(v13) = 200;
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_customizationData[localClientNum].itemLatch )\n\t%i not in [0, %i)", v10, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v13) = 2;
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 106, ASSERT_TYPE_ASSERT, "(unsigned)( setType ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch[clientIndex].hasItemLatch ) ) + 0 ) )", "setType doesn't index s_customizationData[localClientNum].itemLatch[clientIndex].hasItemLatch\n\t%i not in [0, %i)", v10, v13) )
      __debugbreak();
    LODWORD(v15) = 2;
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_mp.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( setType ) < (unsigned)( ( sizeof( *array_counter( s_customizationData[localClientNum].itemLatch[clientIndex].isDefault ) ) + 0 ) )", "setType doesn't index s_customizationData[localClientNum].itemLatch[clientIndex].isDefault\n\t%i not in [0, %i)", v12, v15) )
      __debugbreak();
  }
  v9 = v7 + 10 * (v8 + 200 * v5);
  s_customizationData[0].itemLatch[0].hasItemLatch[v9] = setHasModelLatch;
  s_customizationData[0].itemLatch[0].isDefault[v9] = isDefault;
}

/*
==============
CG_CustomizationMP_Shutdown
==============
*/
void CG_CustomizationMP_Shutdown(void)
{
  Cmd_RemoveCommand("cg_customization_devLatchModels");
}

