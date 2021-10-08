/*
==============
LUI_Model_Init
==============
*/

void LUI_Model_Init(void)
{
  ?LUI_Model_Init@@YAXXZ();
}

/*
==============
LUI_Model_Unsubscribe
==============
*/

void __fastcall LUI_Model_Unsubscribe(const unsigned int subscription)
{
  ?LUI_Model_Unsubscribe@@YAXI@Z(subscription);
}

/*
==============
LUI_Model_SetBool
==============
*/

void __fastcall LUI_Model_SetBool(const unsigned __int16 nodeIndex, bool newValue)
{
  ?LUI_Model_SetBool@@YAXG_N@Z(nodeIndex, newValue);
}

/*
==============
LUI_Model_GetNumber
==============
*/

double __fastcall LUI_Model_GetNumber(const unsigned __int16 nodeIndex)
{
  double result; 

  *(float *)&result = ?LUI_Model_GetNumber@@YAMG@Z(nodeIndex);
  return result;
}

/*
==============
LUI_Model_UnsubscribeAndFreeFrontendModel
==============
*/

void LUI_Model_UnsubscribeAndFreeFrontendModel(void)
{
  ?LUI_Model_UnsubscribeAndFreeFrontendModel@@YAXXZ();
}

/*
==============
LUI_Model_GetNumModelsTotal
==============
*/

int __fastcall LUI_Model_GetNumModelsTotal()
{
  return ?LUI_Model_GetNumModelsTotal@@YAHXZ();
}

/*
==============
LUI_Model_SetReal
==============
*/

void __fastcall LUI_Model_SetReal(const unsigned __int16 nodeIndex, float newValue)
{
  ?LUI_Model_SetReal@@YAXGM@Z(nodeIndex, newValue);
}

/*
==============
LUI_Model_GetNumSubscriptionsTotal
==============
*/

int __fastcall LUI_Model_GetNumSubscriptionsTotal()
{
  return ?LUI_Model_GetNumSubscriptionsTotal@@YAHXZ();
}

/*
==============
LUI_Model_GetPropertyForSubscription
==============
*/

LUIDataBindingProperty __fastcall LUI_Model_GetPropertyForSubscription(unsigned int subscription)
{
  return ?LUI_Model_GetPropertyForSubscription@@YA?AW4LUIDataBindingProperty@@I@Z(subscription);
}

/*
==============
LUI_Model_GetModelFromPath
==============
*/

unsigned __int16 __fastcall LUI_Model_GetModelFromPath(const unsigned __int16 parentNodeIndex, const char *path)
{
  return ?LUI_Model_GetModelFromPath@@YAGGPEBD@Z(parentNodeIndex, path);
}

/*
==============
LUI_Model_HasSubscriptions
==============
*/

bool __fastcall LUI_Model_HasSubscriptions(unsigned __int16 model)
{
  return ?LUI_Model_HasSubscriptions@@YA_NG@Z(model);
}

/*
==============
LUI_Model_CreatePersistentModelFromPath
==============
*/

unsigned __int16 __fastcall LUI_Model_CreatePersistentModelFromPath(const unsigned __int16 parentNodeIndex, const char *path)
{
  return ?LUI_Model_CreatePersistentModelFromPath@@YAGGPEBD@Z(parentNodeIndex, path);
}

/*
==============
LUI_Model_CreateModelFromPath
==============
*/

unsigned __int16 __fastcall LUI_Model_CreateModelFromPath(const unsigned __int16 parentNodeIndex, const char *path)
{
  return ?LUI_Model_CreateModelFromPath@@YAGGPEBD@Z(parentNodeIndex, path);
}

/*
==============
LUI_Model_SetInt
==============
*/

void __fastcall LUI_Model_SetInt(const unsigned __int16 nodeIndex, int newValue)
{
  ?LUI_Model_SetInt@@YAXGH@Z(nodeIndex, newValue);
}

/*
==============
LUI_Model_GetNumModelsInUse
==============
*/

int __fastcall LUI_Model_GetNumModelsInUse()
{
  return ?LUI_Model_GetNumModelsInUse@@YAHXZ();
}

/*
==============
LUI_Model_GetGlobalModel
==============
*/

unsigned __int16 __fastcall LUI_Model_GetGlobalModel()
{
  return ?LUI_Model_GetGlobalModel@@YAGXZ();
}

/*
==============
LUI_Model_GetDataType
==============
*/

LUIModelDataType __fastcall LUI_Model_GetDataType(const unsigned __int16 model)
{
  return ?LUI_Model_GetDataType@@YA?AW4LUIModelDataType@@G@Z(model);
}

/*
==============
LUI_Model_GetModelForController
==============
*/

unsigned __int16 __fastcall LUI_Model_GetModelForController(const int controllerIndex)
{
  return ?LUI_Model_GetModelForController@@YAGH@Z(controllerIndex);
}

/*
==============
LUI_Model_UnsubscribeAndFreeInGameModel
==============
*/

void LUI_Model_UnsubscribeAndFreeInGameModel(void)
{
  ?LUI_Model_UnsubscribeAndFreeInGameModel@@YAXXZ();
}

/*
==============
LUI_Model_GetInt
==============
*/

int __fastcall LUI_Model_GetInt(const unsigned __int16 nodeIndex)
{
  return ?LUI_Model_GetInt@@YAHG@Z(nodeIndex);
}

/*
==============
LUI_Model_GetNumSubscriptionsInUse
==============
*/

int __fastcall LUI_Model_GetNumSubscriptionsInUse()
{
  return ?LUI_Model_GetNumSubscriptionsInUse@@YAHXZ();
}

/*
==============
LUI_Model_NotifyPendingSubscriptions
==============
*/

void LUI_Model_NotifyPendingSubscriptions(void)
{
  ?LUI_Model_NotifyPendingSubscriptions@@YAXXZ();
}

/*
==============
LUI_Model_SetString
==============
*/

void __fastcall LUI_Model_SetString(const unsigned __int16 nodeIndex, const char *newValue)
{
  ?LUI_Model_SetString@@YAXGPEBD@Z(nodeIndex, newValue);
}

/*
==============
LUI_Model_FreeModel
==============
*/

void __fastcall LUI_Model_FreeModel(unsigned __int16 model)
{
  ?LUI_Model_FreeModel@@YAXG@Z(model);
}

/*
==============
LUI_Model_ResetModelsAndSubscriptions
==============
*/

void LUI_Model_ResetModelsAndSubscriptions(void)
{
  ?LUI_Model_ResetModelsAndSubscriptions@@YAXXZ();
}

/*
==============
LUI_Model_ResetSubscriptions
==============
*/

void LUI_Model_ResetSubscriptions(void)
{
  ?LUI_Model_ResetSubscriptions@@YAXXZ();
}

/*
==============
LUI_Model_GetString
==============
*/

const char *__fastcall LUI_Model_GetString(const unsigned __int16 nodeIndex)
{
  return ?LUI_Model_GetString@@YAPEBDG@Z(nodeIndex);
}

/*
==============
LUI_Model_GetReal
==============
*/

double __fastcall LUI_Model_GetReal(const unsigned __int16 nodeIndex)
{
  double result; 

  *(float *)&result = ?LUI_Model_GetReal@@YAMG@Z(nodeIndex);
  return result;
}

/*
==============
LUI_Model_UpdateModelFromOmnvar
==============
*/

void __fastcall LUI_Model_UpdateModelFromOmnvar(LocalClientNum_t localClientNum, const OmnvarDef *omnvarDef, const OmnvarData *omnvar)
{
  ?LUI_Model_UpdateModelFromOmnvar@@YAXW4LocalClientNum_t@@PEBUOmnvarDef@@PEBUOmnvarData@@@Z(localClientNum, omnvarDef, omnvar);
}

/*
==============
LUI_Model_GetModelFromOmnvar
==============
*/

unsigned __int16 __fastcall LUI_Model_GetModelFromOmnvar(int controllerIndex, const OmnvarDef *omnvarDef)
{
  return ?LUI_Model_GetModelFromOmnvar@@YAGHPEBUOmnvarDef@@@Z(controllerIndex, omnvarDef);
}

/*
==============
LUI_Model_GetModelPath
==============
*/

void __fastcall LUI_Model_GetModelPath(unsigned __int16 model, unsigned __int64 bufferSize, char *outBuffer)
{
  ?LUI_Model_GetModelPath@@YAXG_KPEAD@Z(model, bufferSize, outBuffer);
}

/*
==============
LUI_Model_UnsubscribeAndFreeModel
==============
*/

void __fastcall LUI_Model_UnsubscribeAndFreeModel(unsigned __int16 model)
{
  ?LUI_Model_UnsubscribeAndFreeModel@@YAXG@Z(model);
}

/*
==============
LUI_Model_Subscribe
==============
*/

unsigned int __fastcall LUI_Model_Subscribe(const unsigned __int16 model, int targetStackIndex, LUIDataBindingProperty bindingProperty, lua_State *luaVM)
{
  return ?LUI_Model_Subscribe@@YAIGHW4LUIDataBindingProperty@@PEAUlua_State@@@Z(model, targetStackIndex, bindingProperty, luaVM);
}

/*
==============
LUI_Model_SetUseImmediateNotifications
==============
*/

void __fastcall LUI_Model_SetUseImmediateNotifications(bool allow)
{
  ?LUI_Model_SetUseImmediateNotifications@@YAX_N@Z(allow);
}

/*
==============
LUI_Model_GetBool
==============
*/

bool __fastcall LUI_Model_GetBool(const unsigned __int16 nodeIndex)
{
  return ?LUI_Model_GetBool@@YA_NG@Z(nodeIndex);
}

/*
==============
DisplayLUIModelValue_f
==============
*/
void DisplayLUIModelValue_f()
{
  const char *v0; 
  unsigned __int16 ModelFromPath; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    ModelFromPath = LUI_Model_GetOrCreateModelFromPath(s_globalModel, v0, 0, 0);
    if ( ModelFromPath || (ModelFromPath = LUI_Model_GetOrCreateModelFromPath(s_controllerModel[0], v0, 0, 0)) != 0 )
      LUI_Model_WriteModelValue(ModelFromPath, 0, INVALID_FILE_HANDLE_0);
    else
      Com_PrintError(13, "Unknown LUI Model Path %s\n", v0);
  }
  else
  {
    Com_PrintError(13, "devGetLUIModel usage: devGetLUIModel <model>\n");
  }
}

/*
==============
DumpLUIModelValues_f
==============
*/
void DumpLUIModelValues_f()
{
  fileHandle_t v0; 
  fileHandle_t *v1; 
  const char *v2; 

  v0.handle.handle = -1i64;
  if ( Cmd_Argc() == 2 )
  {
    v1 = (fileHandle_t *)Cmd_Argv(1);
    v0.handle.handle = (__int64)FS_FOpenFileWrite(v1, v2);
    if ( v0.handle.handle == -1 )
      Com_Printf(13, "Unable to write to file %s. Output will only be written to console.", (const char *)v1);
  }
  LUI_Model_Write(v0, 13, "{\n");
  LUI_Model_WriteModelTree(s_globalModel, 1, v0);
  LUI_Model_Write(v0, 13, "}\n");
  if ( v0.handle.handle != -1 )
    FS_FCloseFile(v0);
}

/*
==============
LUI_Model_AllocateNode
==============
*/
__int64 LUI_Model_AllocateNode(const unsigned __int16 ancestorIndex, const char *key, bool persistent)
{
  unsigned __int64 v7; 
  unsigned __int16 v8; 
  bool *p_persistent; 
  unsigned __int16 i; 
  int v11; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 

  if ( key )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( key[v7] );
    if ( v7 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 91, ASSERT_TYPE_ASSERT, "(keyLen < 64)", (const char *)&queryFormat, "keyLen < MAX_LUI_MODEL_KEY_CHARS") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 92, ASSERT_TYPE_ASSERT, "(keyLen > 0)", (const char *)&queryFormat, "keyLen > 0") )
      __debugbreak();
    v8 = s_firstFreeModelNode;
    if ( s_firstFreeModelNode )
    {
      v11 = 0;
      v12 = s_firstFreeModelNode;
      s_firstFreeModelNode = s_modelNodePool[v12].nextSibling;
      s_modelNodePool[v12].nextSibling = 0;
      s_modelNodePool[v8].ancestor = ancestorIndex;
      memcpy_0(s_modelNodePool[v12].key, key, v7 + 1);
      v13 = key;
      if ( key > &key[v7] )
        v7 = 0i64;
      if ( v7 )
      {
        do
        {
          v14 = *v13++;
          v11 = v14 + 33 * v11;
        }
        while ( v13 - key != v7 );
      }
      s_modelNodePool[v12].keyHash = v11;
      s_modelNodePool[v12].persistent = persistent;
      if ( ancestorIndex == v8 )
      {
        LODWORD(v16) = ancestorIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 115, ASSERT_TYPE_ASSERT, "( ( ancestorIndex != allocatedModelNodeIndex ) )", "( ancestorIndex ) = %i", v16) )
          __debugbreak();
      }
      if ( ancestorIndex )
      {
        v15 = ancestorIndex;
        s_modelNodePool[v12].nextSibling = s_modelNodePool[v15].firstChild;
        s_modelNodePool[v15].firstChild = v8;
      }
      ++s_allocatedModels;
      return v8;
    }
    else
    {
      Com_PrintError(13, "Running out of LUI models; dump of the model tree follows:\n");
      LUI_Model_WriteModelTree(s_globalModel, 1, (const fileHandle_t)-1i64);
      LUI_Model_ResetSubscriptions();
      p_persistent = &s_modelNodePool[0].persistent;
      for ( i = 0; i < 0x2616u; ++i )
      {
        if ( *((_DWORD *)p_persistent - 9) && !*p_persistent )
          LUI_Model_FreeModel(i);
        p_persistent += 104;
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14449BCA0, 657i64, key);
      return 0i64;
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 84, ASSERT_TYPE_ASSERT, "(key != 0)", (const char *)&queryFormat, "key != NULL") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
LUI_Model_CreateModelFromPath
==============
*/
unsigned __int16 LUI_Model_CreateModelFromPath(const unsigned __int16 parentNodeIndex, const char *path)
{
  return LUI_Model_GetOrCreateModelFromPath(parentNodeIndex, path, 1, 0);
}

/*
==============
LUI_Model_CreatePersistentModelFromPath
==============
*/
unsigned __int16 LUI_Model_CreatePersistentModelFromPath(const unsigned __int16 parentNodeIndex, const char *path)
{
  return LUI_Model_GetOrCreateModelFromPath(parentNodeIndex, path, 1, 1);
}

/*
==============
LUI_Model_FreeModel
==============
*/
void LUI_Model_FreeModel(unsigned __int16 model)
{
  __int64 v2; 
  unsigned __int16 firstChild; 
  __int64 v4; 
  unsigned __int16 nextSibling; 
  char *string; 
  unsigned __int16 ancestor; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned __int16 v11; 

  if ( model )
  {
    v2 = model;
    if ( !s_modelNodePool[v2].firstSubscription )
      goto LABEL_6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 718, ASSERT_TYPE_ASSERT, "(node->firstSubscription == 0)", "%s\n\tModel still has active subscriptions! These must be removed prior to freeing the model.", "node->firstSubscription == INVALID_LUI_MODEL_SUBSCRIPTION") )
      __debugbreak();
    if ( !s_modelNodePool[v2].firstSubscription )
    {
LABEL_6:
      firstChild = s_modelNodePool[v2].firstChild;
      if ( firstChild )
      {
        do
        {
          v4 = firstChild;
          if ( !s_modelNodePool[v4].keyHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 727, ASSERT_TYPE_ASSERT, "(s_modelNodePool[child].keyHash != 0)", (const char *)&queryFormat, "s_modelNodePool[child].keyHash != 0") )
            __debugbreak();
          nextSibling = s_modelNodePool[v4].nextSibling;
          LUI_Model_FreeModel(firstChild);
          firstChild = nextSibling;
        }
        while ( nextSibling );
      }
      if ( s_modelNodePool[v2].data.dataType == LUI_MODEL_DT_STRING )
      {
        string = (char *)s_modelNodePool[v2].data.string;
        if ( string )
        {
          ntl::nxheap::free(&s_modelStringHeap.m_heap, string);
          s_modelNodePool[v2].data.string = NULL;
        }
      }
      ancestor = s_modelNodePool[v2].ancestor;
      if ( ancestor )
      {
        v8 = ancestor;
        v9 = s_modelNodePool[v8].firstChild;
        if ( v9 == model )
        {
          s_modelNodePool[v8].firstChild = s_modelNodePool[v2].nextSibling;
        }
        else if ( v9 )
        {
          while ( 1 )
          {
            v10 = v9;
            v9 = s_modelNodePool[v10].nextSibling;
            if ( v9 == model )
              break;
            if ( !v9 )
              goto LABEL_22;
          }
          s_modelNodePool[v10].nextSibling = s_modelNodePool[v2].nextSibling;
        }
      }
LABEL_22:
      memset_0(&s_modelNodePool[v2], 0, sizeof(LUIModelNode));
      v11 = s_firstFreeModelNode;
      --s_allocatedModels;
      s_modelNodePool[v2].index = model;
      s_modelNodePool[v2].nextSibling = v11;
      s_firstFreeModelNode = model;
    }
  }
}

/*
==============
LUI_Model_GetBool
==============
*/
bool LUI_Model_GetBool(const unsigned __int16 nodeIndex)
{
  __int64 v2; 

  if ( !nodeIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 886, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
    {
      __debugbreak();
      return 0;
    }
    return 0;
  }
  v2 = nodeIndex;
  if ( s_modelNodePool[v2].data.dataType != LUI_MODEL_DT_BOOL )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 892, ASSERT_TYPE_ASSERT, "(s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_BOOL)", (const char *)&queryFormat, "s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_BOOL") )
      __debugbreak();
    if ( s_modelNodePool[v2].data.dataType != LUI_MODEL_DT_BOOL )
      return 0;
  }
  return s_modelNodePool[v2].data.boolean;
}

/*
==============
LUI_Model_GetDataType
==============
*/
__int64 LUI_Model_GetDataType(const unsigned __int16 model)
{
  if ( model )
    return (unsigned int)s_modelNodePool[model].data.dataType;
  else
    return 0i64;
}

/*
==============
LUI_Model_GetGlobalModel
==============
*/
__int64 LUI_Model_GetGlobalModel()
{
  return s_globalModel;
}

/*
==============
LUI_Model_GetInt
==============
*/
__int64 LUI_Model_GetInt(const unsigned __int16 nodeIndex)
{
  __int64 v2; 

  if ( !nodeIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 835, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
    {
      __debugbreak();
      return 0i64;
    }
    return 0i64;
  }
  v2 = nodeIndex;
  if ( s_modelNodePool[v2].data.dataType != LUI_MODEL_DT_INT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 841, ASSERT_TYPE_ASSERT, "(s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_INT)", (const char *)&queryFormat, "s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_INT") )
      __debugbreak();
    if ( s_modelNodePool[v2].data.dataType != LUI_MODEL_DT_INT )
      return 0i64;
  }
  return (unsigned int)s_modelNodePool[v2].data.integer;
}

/*
==============
LUI_Model_GetModel
==============
*/
__int64 LUI_Model_GetModel(const unsigned __int16 nodeIndex, const char *key)
{
  const char *v2; 
  int v5; 
  int v6; 
  const char *i; 
  unsigned __int16 firstChild; 
  __int64 v9; 
  __int64 v10; 
  char *v11; 
  char v12; 
  __int64 v13; 
  char v14; 

  v2 = key;
  if ( !nodeIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 133, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
      __debugbreak();
    return 0i64;
  }
  v5 = *key;
  v6 = 0;
  for ( i = v2; *i; v5 = *i )
  {
    ++i;
    v6 = v5 + 33 * v6;
  }
  firstChild = s_modelNodePool[nodeIndex].firstChild;
  if ( !firstChild )
    return 0i64;
  while ( 1 )
  {
    v9 = firstChild;
    if ( v6 == s_modelNodePool[v9].keyHash )
      break;
    firstChild = s_modelNodePool[v9].nextSibling;
    if ( !firstChild )
      return 0i64;
  }
  v10 = 0x7FFFFFFFi64;
  if ( &s_modelNodePool[v9] == (LUIModelNode *)-38i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v11 = &s_modelNodePool[0].key[104i64 * firstChild - (_QWORD)v2];
  while ( 1 )
  {
    v12 = v2[(_QWORD)v11];
    v13 = v10;
    v14 = *v2++;
    --v10;
    if ( !v13 )
      break;
    if ( v12 != v14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 146, ASSERT_TYPE_ASSERT, "(!I_strcmp( s_modelNodePool[currentNodeIndex].key, key ))", (const char *)&queryFormat, "!I_strcmp( s_modelNodePool[currentNodeIndex].key, key )") )
        __debugbreak();
      return firstChild;
    }
    if ( !v12 )
      return firstChild;
  }
  return firstChild;
}

/*
==============
LUI_Model_GetModelForController
==============
*/
__int64 LUI_Model_GetModelForController(const int controllerIndex)
{
  return s_controllerModel[controllerIndex];
}

/*
==============
LUI_Model_GetModelFromOmnvar
==============
*/
__int64 LUI_Model_GetModelFromOmnvar(int controllerIndex, const OmnvarDef *omnvarDef)
{
  unsigned __int16 v4; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  unsigned int IndexByName; 
  const OmnvarData *Data; 
  LocalClientNum_t outLocalClientNum[4]; 
  char dest[64]; 

  if ( (omnvarDef->flags & 2) != 0 )
    v4 = s_controllerModel[controllerIndex];
  else
    v4 = s_globalModel;
  Com_sprintf(dest, 0x40ui64, "%s.%s", "cg.omnvar", omnvarDef->name);
  ModelFromPath = LUI_Model_GetOrCreateModelFromPath(v4, dest, 0, 0);
  if ( ModelFromPath || !CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) )
    return ModelFromPath;
  v6 = LUI_Model_GetOrCreateModelFromPath(v4, dest, 1, 0);
  v7 = outLocalClientNum[0];
  v8 = v6;
  if ( outLocalClientNum[0] >= (unsigned int)LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outLocalClientNum[0], 2) )
    __debugbreak();
  if ( clientUIActives[v7].connectionState >= CA_CONNECTED )
  {
    IndexByName = BG_Omnvar_GetIndexByName(omnvarDef->name);
    Data = CG_Omnvar_GetData(outLocalClientNum[0], IndexByName);
    LUI_Model_UpdateModelFromOmnvar(outLocalClientNum[0], omnvarDef, Data);
  }
  return v8;
}

/*
==============
LUI_Model_GetModelFromPath
==============
*/
unsigned __int16 LUI_Model_GetModelFromPath(const unsigned __int16 parentNodeIndex, const char *path)
{
  return LUI_Model_GetOrCreateModelFromPath(parentNodeIndex, path, 0, 0);
}

/*
==============
LUI_Model_GetModelPath
==============
*/
void LUI_Model_GetModelPath(unsigned __int16 model, unsigned __int64 bufferSize, char *outBuffer)
{
  __int64 v5; 
  char *key; 
  char dest[512]; 

  for ( *outBuffer = 0; model; model = s_modelNodePool[v5].ancestor )
  {
    v5 = model;
    Core_strcpy(dest, 0x200ui64, outBuffer);
    key = s_modelNodePool[v5].key;
    if ( *outBuffer )
      Com_sprintf_truncate(outBuffer, bufferSize, "%s.%s", key, dest);
    else
      Com_sprintf_truncate(outBuffer, bufferSize, (const char *)&queryFormat, key);
  }
}

/*
==============
LUI_Model_GetNumModelsInUse
==============
*/
__int64 LUI_Model_GetNumModelsInUse()
{
  return (unsigned int)s_allocatedModels;
}

/*
==============
LUI_Model_GetNumModelsTotal
==============
*/
__int64 LUI_Model_GetNumModelsTotal()
{
  return 9750i64;
}

/*
==============
LUI_Model_GetNumSubscriptionsInUse
==============
*/
__int64 LUI_Model_GetNumSubscriptionsInUse()
{
  return (unsigned int)s_allocatedSubscriptions;
}

/*
==============
LUI_Model_GetNumSubscriptionsTotal
==============
*/
__int64 LUI_Model_GetNumSubscriptionsTotal()
{
  return 3000i64;
}

/*
==============
LUI_Model_GetNumber
==============
*/
float LUI_Model_GetNumber(const unsigned __int16 nodeIndex)
{
  if ( !nodeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 871, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
    __debugbreak();
  _RDI = s_modelNodePool;
  _RBX = nodeIndex;
  if ( (unsigned int)(s_modelNodePool[_RBX].data.dataType - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 872, ASSERT_TYPE_ASSERT, "(s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_REAL || s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_INT)", (const char *)&queryFormat, "s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_REAL || s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_INT") )
    __debugbreak();
  if ( s_modelNodePool[_RBX].data.dataType == LUI_MODEL_DT_REAL )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+rdi+10h] }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+rdi+10h]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Model_GetOrCreateModelFromPath
==============
*/
__int64 LUI_Model_GetOrCreateModelFromPath(__int64 parentNodeIndex, const char *path, const bool createIfNotFound, const bool createAsPersistent)
{
  unsigned __int16 v7; 
  unsigned __int64 v8; 
  __int64 result; 
  char v10; 
  __int64 v11; 
  __int64 v12; 
  char key[64]; 

  v7 = parentNodeIndex;
  v8 = 0i64;
  if ( (_WORD)parentNodeIndex )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *path;
        if ( *path )
        {
          if ( v10 != 46 )
            break;
        }
        if ( v8 >= 0x40 )
        {
          j___report_rangecheckfailure(parentNodeIndex);
          JUMPOUT(0x14261634Ci64);
        }
        key[v8] = 0;
        result = LUI_Model_GetModel(v7, key);
        if ( !(_WORD)result && createIfNotFound )
          result = LUI_Model_AllocateNode(v7, key, createAsPersistent);
        if ( !*path )
          return result;
        if ( !(_WORD)result )
          return 0i64;
        v7 = result;
        v8 = 0i64;
LABEL_18:
        ++path;
      }
      key[v8++] = v10;
      if ( (unsigned int)v8 < 0x40 )
        goto LABEL_18;
      LODWORD(v12) = 64;
      LODWORD(v11) = v8;
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( keySize ) < (unsigned)( 64 )", "keySize doesn't index MAX_LUI_MODEL_KEY_CHARS\n\t%i not in [0, %i)", v11, v12) )
        goto LABEL_18;
      __debugbreak();
      ++path;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 165, ASSERT_TYPE_ASSERT, "(parentNodeIndex != 0)", (const char *)&queryFormat, "parentNodeIndex != INVALID_LUI_MODEL") )
    __debugbreak();
  return 0i64;
}

/*
==============
LUI_Model_GetPropertyForSubscription
==============
*/
__int64 LUI_Model_GetPropertyForSubscription(unsigned int subscription)
{
  __int64 v2; 

  if ( !subscription )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 242, ASSERT_TYPE_ASSERT, "(subscription != 0)", (const char *)&queryFormat, "subscription != INVALID_LUI_MODEL_SUBSCRIPTION") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 232, ASSERT_TYPE_ASSERT, "(subscription != 0)", (const char *)&queryFormat, "subscription != INVALID_LUI_MODEL_SUBSCRIPTION") )
      __debugbreak();
  }
  v2 = subscription & 0xFFF;
  if ( (subscription & 0xFFF000) != s_subscriptionPool[v2].useCount << 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 243, ASSERT_TYPE_ASSERT, "(!LUI_Model_IsStaleSubscription( subscription ))", (const char *)&queryFormat, "!LUI_Model_IsStaleSubscription( subscription )") )
    __debugbreak();
  return (unsigned __int8)s_subscriptionPool[v2].bindingProperty;
}

/*
==============
LUI_Model_GetReal
==============
*/
float LUI_Model_GetReal(const unsigned __int16 nodeIndex)
{
  if ( nodeIndex )
  {
    _RDI = s_modelNodePool;
    _RBX = nodeIndex;
    if ( s_modelNodePool[_RBX].data.dataType == LUI_MODEL_DT_REAL )
      goto LABEL_9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 859, ASSERT_TYPE_ASSERT, "(s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_REAL)", (const char *)&queryFormat, "s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_REAL") )
      __debugbreak();
    if ( s_modelNodePool[_RBX].data.dataType == LUI_MODEL_DT_REAL )
    {
LABEL_9:
      __asm { vmovss  xmm0, dword ptr [rbx+rdi+10h] }
      return *(float *)&_XMM0;
    }
    goto LABEL_8;
  }
  if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 853, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
  {
LABEL_8:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    return *(float *)&_XMM0;
  }
  __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Model_GetString
==============
*/
const char *LUI_Model_GetString(const unsigned __int16 nodeIndex)
{
  __int64 v2; 

  if ( !nodeIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 904, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
    {
      __debugbreak();
      return (char *)&queryFormat.fmt + 3;
    }
    return (char *)&queryFormat.fmt + 3;
  }
  v2 = nodeIndex;
  if ( s_modelNodePool[v2].data.dataType != LUI_MODEL_DT_STRING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 910, ASSERT_TYPE_ASSERT, "(s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_STRING)", (const char *)&queryFormat, "s_modelNodePool[nodeIndex].data.dataType == LUI_MODEL_DT_STRING") )
      __debugbreak();
    if ( s_modelNodePool[v2].data.dataType != LUI_MODEL_DT_STRING )
      return (char *)&queryFormat.fmt + 3;
  }
  return s_modelNodePool[v2].data.string;
}

/*
==============
LUI_Model_HasSubscriptions
==============
*/
bool LUI_Model_HasSubscriptions(unsigned __int16 model)
{
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 225, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != INVALID_LUI_MODEL") )
    __debugbreak();
  return s_modelNodePool[model].firstSubscription != 0;
}

/*
==============
LUI_Model_Init
==============
*/
void LUI_Model_Init(void)
{
  int v0; 
  unsigned __int16 *p_ancestor; 
  unsigned __int16 i; 
  unsigned __int16 *v3; 
  char dest[64]; 

  v0 = 0;
  p_ancestor = &s_modelNodePool[0].ancestor;
  for ( i = 0; i < 0x2616u; *(p_ancestor - 49) = i )
  {
    memset_0(p_ancestor - 12, 0, 0x68ui64);
    p_ancestor[2] = i;
    p_ancestor += 52;
    ++i;
  }
  s_modelNodePool[9749].nextSibling = 0;
  s_firstFreeModelNode = 1;
  LUI_Model_ResetSubscriptions();
  s_globalModel = LUI_Model_AllocateNode(0, "global", 1);
  v3 = s_controllerModel;
  do
  {
    Com_sprintf(dest, 0x40ui64, "controller%d", (unsigned int)v0++);
    *v3++ = LUI_Model_AllocateNode(s_globalModel, dest, 1);
  }
  while ( v0 < 8 );
  Cmd_AddCommandInternal("devGetLUIModel", Cbuf_AddServerText_f, &DisplayLUIModelValue_f_VAR);
  Cmd_AddServerCommandInternal("devGetLUIModel", DisplayLUIModelValue_f, &DisplayLUIModelValue_f_VAR_SERVER);
  Cmd_AddCommandInternal("devDumpLUIModels", Cbuf_AddServerText_f, &DumpLUIModelValues_f_VAR);
  Cmd_AddServerCommandInternal("devDumpLUIModels", DumpLUIModelValues_f, &DumpLUIModelValues_f_VAR_SERVER);
}

/*
==============
LUI_Model_IsStaleSubscription
==============
*/
bool LUI_Model_IsStaleSubscription(unsigned int subscription)
{
  if ( !subscription && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 232, ASSERT_TYPE_ASSERT, "(subscription != 0)", (const char *)&queryFormat, "subscription != INVALID_LUI_MODEL_SUBSCRIPTION") )
    __debugbreak();
  return (subscription & 0xFFF000) != s_subscriptionPool[subscription & 0xFFF].useCount << 12;
}

/*
==============
LUI_Model_NotifyPendingSubscriptions
==============
*/
void LUI_Model_NotifyPendingSubscriptions(void)
{
  char *Value; 
  int *v1; 
  _QWORD *v2; 
  char *v3; 
  int *v4; 
  unsigned __int64 v5; 
  ThreadContext CurrentThreadContext; 
  __int64 i; 
  unsigned __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  Value = (char *)Sys_GetValue(0);
  v1 = (int *)(Value + 25176);
  if ( (unsigned int)(*((_DWORD *)Value + 6294) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 6294) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v1 >= 3 )
  {
    LODWORD(v11) = 3;
    LODWORD(v10) = *v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v2 = Value + 2088;
  v3 = Value + 40;
  if ( *v2 < (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v2 += 8i64;
  if ( *v2 >= (unsigned __int64)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v2 = v1;
  if ( *v2 <= (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v4 = &v1[*v1 + 2];
  v5 = __rdtsc();
  *v4 = v5;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 577, NULL, 0);
  s_processingSubscriptions = 1;
  for ( i = s_numDirtyModels - 1; i >= 0; --i )
  {
    v8 = s_dirtyModels[i];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1286, ASSERT_TYPE_ASSERT, "(modelNodeIndex != 0)", (const char *)&queryFormat, "modelNodeIndex != INVALID_LUI_MODEL") )
      __debugbreak();
    --s_numDirtyModels;
    v9 = v8;
    if ( s_modelNodePool[v9].dirty )
    {
      if ( !s_modelNodePool[v9].keyHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1292, ASSERT_TYPE_ASSERT, "(s_modelNodePool[modelNodeIndex].keyHash != 0)", (const char *)&queryFormat, "s_modelNodePool[modelNodeIndex].keyHash != 0") )
        __debugbreak();
      LUI_Model_NotifySubscriptions(v8);
    }
  }
  s_processingSubscriptions = 0;
  Profile_EndInternal(NULL);
}

/*
==============
LUI_Model_NotifySubscriptions
==============
*/
void LUI_Model_NotifySubscriptions(unsigned __int16 model)
{
  __int64 v2; 
  unsigned int *p_firstSubscription; 
  bool *p_dirty; 
  int v5; 
  int v6; 
  unsigned __int16 *v7; 
  unsigned int i; 
  __int64 v9; 
  lua_State *luaVM; 
  int v11; 
  int v12; 
  lua_State *v13; 
  LUIElement *v14; 
  char outBuffer[128]; 
  char v16[512]; 
  char dest[512]; 

  if ( model )
  {
    v2 = model;
    p_firstSubscription = &s_modelNodePool[v2].firstSubscription;
    if ( s_processingSubscriptions )
    {
      s_modelNodePool[v2].dirty = 0;
      LUI_EnterCriticalSection("LUI_Model_NotifySubscriptions");
      for ( i = *p_firstSubscription; i; i = s_subscriptionPool[v9].next )
      {
        v9 = i & 0xFFF;
        if ( !s_subscriptionPool[v9].model )
          break;
        luaVM = s_subscriptionPool[v9].luaVM;
        LUI_PushViaWeakReference(&s_subscriptionPool[v9], luaVM);
        if ( j_lua_type(luaVM, -1) == 6 )
        {
          if ( s_subscriptionPool[v9].bindingProperty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 353, ASSERT_TYPE_ASSERT, "(s_subscriptionPool[subscriptionIndex].bindingProperty == LUIDataBindingProperty::LUA_CALLBACK)", (const char *)&queryFormat, "s_subscriptionPool[subscriptionIndex].bindingProperty == LUIDataBindingProperty::LUA_CALLBACK") )
            __debugbreak();
          j_lua_pushlightuserdata(luaVM, (void *)model);
          v11 = LuaShared_PCall(luaVM, 1, 0);
          if ( v11 )
          {
            LUI_Model_GetModelPath(model, 0x200ui64, v16);
            Com_sprintf(dest, 0x200ui64, "Error while handling model subscription: %s\n", v16);
            LUI_ReportError(dest, LUI_luaVM);
            LUI_HandleLuaError(v11);
          }
        }
        else
        {
          v12 = j_lua_isuserdata(luaVM, -1);
          v13 = luaVM;
          if ( v12 )
          {
            v14 = LUI_ToElement(luaVM, -1);
            LUI_LUIElement_UpdatePropertyBinding(v14, s_subscriptionPool[v9].bindingProperty, model, luaVM);
            v13 = luaVM;
          }
          j_lua_settop(v13, -2);
        }
      }
      LUI_LeaveCriticalSection();
    }
    else if ( *p_firstSubscription )
    {
      p_dirty = &s_modelNodePool[v2].dirty;
      if ( !s_modelNodePool[v2].dirty )
      {
        v5 = s_numDirtyModels;
        if ( s_numDirtyModels >= 800 )
        {
          v6 = 0;
          v7 = s_dirtyModels;
          do
          {
            LUI_Model_GetModelPath(*v7, 0x80ui64, outBuffer);
            Com_Printf(13, "Dirty model #%d: %s\n", (unsigned int)v6++, outBuffer);
            ++v7;
          }
          while ( v6 < 800 );
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14449BFE0, 658i64);
          v5 = s_numDirtyModels;
        }
        *p_dirty = 1;
        s_numDirtyModels = v5 + 1;
        s_dirtyModels[v5] = model;
      }
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 325, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != INVALID_LUI_MODEL") )
  {
    __debugbreak();
  }
}

/*
==============
LUI_Model_ResetModelsAndSubscriptions
==============
*/
void LUI_Model_ResetModelsAndSubscriptions(void)
{
  unsigned __int16 v0; 
  bool *p_persistent; 

  LUI_Model_ResetSubscriptions();
  v0 = 0;
  p_persistent = &s_modelNodePool[0].persistent;
  do
  {
    if ( *((_DWORD *)p_persistent - 9) )
    {
      if ( !*p_persistent )
        LUI_Model_FreeModel(v0);
    }
    ++v0;
    p_persistent += 104;
  }
  while ( v0 < 0x2616u );
}

/*
==============
LUI_Model_ResetSubscriptions
==============
*/
void LUI_Model_ResetSubscriptions(void)
{
  unsigned __int16 *p_useCount; 
  unsigned __int16 i; 
  int v2; 
  int v3; 
  bool *p_dirty; 
  __int64 v5; 

  p_useCount = &s_subscriptionPool[0].useCount;
  for ( i = 0; i < 0xBB8u; ++i )
  {
    v2 = *p_useCount;
    *((_QWORD *)p_useCount - 2) = 0i64;
    *(p_useCount - 4) = 0;
    p_useCount += 12;
    v3 = i + 1;
    *(p_useCount - 12) = (v2 + 1) % 0xFFFu;
    *((_DWORD *)p_useCount - 7) = v3;
  }
  p_dirty = &s_modelNodePool[0].dirty;
  v5 = 9750i64;
  do
  {
    *(_DWORD *)(p_dirty - 5) = 0;
    *p_dirty = 0;
    p_dirty += 104;
    --v5;
  }
  while ( v5 );
  s_subscriptionPool[2999].next = 0;
  s_firstFreeSubscriptionIndex = 1;
  s_numDirtyModels = 0;
  s_allocatedSubscriptions = 0;
}

/*
==============
LUI_Model_SetBool
==============
*/
void LUI_Model_SetBool(const unsigned __int16 nodeIndex, bool newValue)
{
  __int64 v4; 
  char *string; 

  if ( nodeIndex )
  {
    v4 = nodeIndex;
    if ( s_modelNodePool[v4].data.dataType != LUI_MODEL_DT_BOOL || s_modelNodePool[v4].data.boolean != newValue )
    {
      if ( s_modelNodePool[v4].data.dataType == LUI_MODEL_DT_STRING )
      {
        string = (char *)s_modelNodePool[v4].data.string;
        if ( string )
        {
          ntl::nxheap::free(&s_modelStringHeap.m_heap, string);
          s_modelNodePool[v4].data.string = NULL;
        }
      }
      s_modelNodePool[v4].data.dataType = LUI_MODEL_DT_BOOL;
      s_modelNodePool[v4].data.boolean = newValue;
      LUI_Model_NotifySubscriptions(nodeIndex);
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 965, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
  {
    __debugbreak();
  }
}

/*
==============
LUI_Model_SetInt
==============
*/
void LUI_Model_SetInt(const unsigned __int16 nodeIndex, int newValue)
{
  __int64 v4; 
  char *string; 

  if ( nodeIndex )
  {
    v4 = nodeIndex;
    if ( s_modelNodePool[v4].data.dataType != LUI_MODEL_DT_INT || s_modelNodePool[v4].data.integer != newValue )
    {
      if ( s_modelNodePool[v4].data.dataType == LUI_MODEL_DT_STRING )
      {
        string = (char *)s_modelNodePool[v4].data.string;
        if ( string )
        {
          ntl::nxheap::free(&s_modelStringHeap.m_heap, string);
          s_modelNodePool[v4].data.string = NULL;
        }
      }
      s_modelNodePool[v4].data.dataType = LUI_MODEL_DT_INT;
      s_modelNodePool[v4].data.integer = newValue;
      LUI_Model_NotifySubscriptions(nodeIndex);
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 922, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
  {
    __debugbreak();
  }
}

/*
==============
LUI_Model_SetReal
==============
*/

void __fastcall LUI_Model_SetReal(const unsigned __int16 nodeIndex, double newValue)
{
  char *string; 
  float Px; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  [rsp+48h+Px], xmm1
    vmovaps xmm6, xmm1
  }
  if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 943, ASSERT_TYPE_ASSERT, "(!isnan( newValue ))", (const char *)&queryFormat, "!isnan( newValue )") )
    __debugbreak();
  if ( nodeIndex )
  {
    _RBX = nodeIndex;
    _RSI = s_modelNodePool;
    if ( s_modelNodePool[_RBX].data.dataType != LUI_MODEL_DT_REAL )
      goto LABEL_9;
    __asm { vucomiss xmm6, dword ptr [rbx+rsi+10h] }
    if ( s_modelNodePool[_RBX].data.dataType != LUI_MODEL_DT_REAL )
    {
LABEL_9:
      if ( s_modelNodePool[_RBX].data.dataType == LUI_MODEL_DT_STRING )
      {
        string = (char *)s_modelNodePool[_RBX].data.string;
        if ( string )
        {
          ntl::nxheap::free(&s_modelStringHeap.m_heap, string);
          s_modelNodePool[_RBX].data.string = NULL;
        }
      }
      s_modelNodePool[_RBX].data.dataType = LUI_MODEL_DT_REAL;
      __asm { vmovss  dword ptr [rbx+rsi+10h], xmm6 }
      LUI_Model_NotifySubscriptions(nodeIndex);
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 944, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
  {
    __debugbreak();
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    return;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
LUI_Model_SetString
==============
*/
void LUI_Model_SetString(const unsigned __int16 nodeIndex, const char *newValue)
{
  const char *v4; 
  int v5; 
  const char *v6; 
  __int64 v7; 
  const char *string; 
  __int64 v9; 
  unsigned __int64 v10; 
  void *v11; 

  if ( !nodeIndex )
  {
    v4 = "nodeIndex != INVALID_LUI_MODEL";
    v5 = 986;
    v6 = "(nodeIndex != 0)";
    goto LABEL_5;
  }
  if ( !newValue )
  {
    v4 = "newValue != NULL";
    v5 = 992;
    v6 = "(newValue != 0)";
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", v5, ASSERT_TYPE_ASSERT, v6, (const char *)&queryFormat, v4) )
      __debugbreak();
    return;
  }
  v7 = nodeIndex;
  if ( s_modelNodePool[v7].data.dataType != LUI_MODEL_DT_STRING || (string = s_modelNodePool[v7].data.string) == NULL || I_strcmp(string, newValue) )
  {
    LUI_Model_WipeData(nodeIndex);
    v9 = -1i64;
    do
      ++v9;
    while ( newValue[v9] );
    v10 = (unsigned int)(v9 + 1);
    v11 = ntl::nxheap::allocate(&s_modelStringHeap.m_heap, v10, 4ui64, 1);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1010, ASSERT_TYPE_ASSERT, "(newString)", (const char *)&queryFormat, "newString") )
      __debugbreak();
    memcpy_0(v11, newValue, v10);
    s_modelNodePool[v7].data.dataType = LUI_MODEL_DT_STRING;
    s_modelNodePool[v7].data.string = (const char *)v11;
    LUI_Model_NotifySubscriptions(nodeIndex);
  }
}

/*
==============
LUI_Model_SetUseImmediateNotifications
==============
*/
void LUI_Model_SetUseImmediateNotifications(bool allow)
{
  s_processingSubscriptions = allow;
}

/*
==============
LUI_Model_Subscribe
==============
*/
__int64 LUI_Model_Subscribe(const unsigned __int16 model, int targetStackIndex, LUIDataBindingProperty bindingProperty, lua_State *luaVM)
{
  __int64 v8; 
  __int64 v9; 
  int useCount; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int firstSubscription; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1022, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != INVALID_LUI_MODEL") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1023, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !s_firstFreeSubscriptionIndex )
  {
    LUI_EmergencyFullGC(luaVM, "LUI_Model_Subscribe model limit (%i)", 3000i64);
    if ( !s_firstFreeSubscriptionIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1030, ASSERT_TYPE_ASSERT, "(s_firstFreeSubscriptionIndex != 0)", (const char *)&queryFormat, "s_firstFreeSubscriptionIndex != INVALID_LUI_MODEL_SUBSCRIPTION") )
      __debugbreak();
  }
  v8 = s_firstFreeSubscriptionIndex;
  v9 = s_firstFreeSubscriptionIndex;
  useCount = s_subscriptionPool[v9].useCount;
  s_firstFreeSubscriptionIndex = s_subscriptionPool[v9].next & 0xFFF;
  s_subscriptionPool[v8].model = model;
  v11 = model;
  v12 = v8 + (useCount << 12);
  firstSubscription = s_modelNodePool[v11].firstSubscription;
  s_subscriptionPool[v9].next = firstSubscription;
  s_modelNodePool[v11].firstSubscription = v12;
  if ( firstSubscription && s_subscriptionPool[firstSubscription & 0xFFF].model != model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1041, ASSERT_TYPE_ASSERT, "(s_subscriptionPool[subscriptionIndex].next == 0 || s_subscriptionPool[s_subscriptionPool[subscriptionIndex].next & ( ( 1 << 12 ) - 1 )].model == model)", (const char *)&queryFormat, "s_subscriptionPool[subscriptionIndex].next == INVALID_LUI_MODEL_SUBSCRIPTION || s_subscriptionPool[s_subscriptionPool[subscriptionIndex].next & MODEL_SUBSCRIPTION_INDEX_MASK].model == model") )
    __debugbreak();
  s_subscriptionPool[v9].luaVM = luaVM;
  s_subscriptionPool[v9].bindingProperty = bindingProperty;
  j_lua_pushvalue(luaVM, targetStackIndex);
  LUI_CreateWeakReference(&s_subscriptionPool[v9], luaVM);
  j_lua_settop(luaVM, -2);
  ++s_allocatedSubscriptions;
  return v12;
}

/*
==============
LUI_Model_Unsubscribe
==============
*/
void LUI_Model_Unsubscribe(const unsigned int subscription)
{
  __int64 v2; 
  unsigned __int16 model; 
  __int64 v4; 
  unsigned int firstSubscription; 
  unsigned int *p_next; 
  int useCount; 
  unsigned int v8; 

  if ( !subscription && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1060, ASSERT_TYPE_ASSERT, "(subscription != 0)", (const char *)&queryFormat, "subscription != INVALID_LUI_MODEL_SUBSCRIPTION") )
    __debugbreak();
  if ( !LUI_Model_IsStaleSubscription(subscription) )
  {
    v2 = subscription & 0xFFF;
    model = s_subscriptionPool[v2].model;
    if ( model )
    {
      v4 = model;
      firstSubscription = s_modelNodePool[v4].firstSubscription;
      if ( firstSubscription == subscription )
      {
        s_modelNodePool[v4].firstSubscription = s_subscriptionPool[v2].next;
      }
      else if ( firstSubscription )
      {
        while ( 1 )
        {
          p_next = &s_subscriptionPool[firstSubscription & 0xFFF].next;
          firstSubscription = *p_next;
          if ( *p_next == subscription )
            break;
          if ( !firstSubscription )
            goto LABEL_13;
        }
        *p_next = s_subscriptionPool[v2].next;
      }
LABEL_13:
      useCount = s_subscriptionPool[v2].useCount;
      s_subscriptionPool[v2].luaVM = NULL;
      s_subscriptionPool[v2].model = 0;
      v8 = s_firstFreeSubscriptionIndex;
      --s_allocatedSubscriptions;
      s_subscriptionPool[v2].useCount = (useCount + 1) % 0xFFFu;
      s_subscriptionPool[v2].next = v8;
      s_firstFreeSubscriptionIndex = subscription & 0xFFF;
    }
  }
}

/*
==============
LUI_Model_UnsubscribeAndFreeFrontendModel
==============
*/
void LUI_Model_UnsubscribeAndFreeFrontendModel(void)
{
  unsigned __int16 Model; 
  const unsigned __int16 *v1; 
  unsigned __int16 v2; 

  Model = LUI_Model_GetModel(s_globalModel, "frontEnd");
  if ( Model )
    LUI_Model_UnsubscribeAndFreeModel(Model);
  v1 = s_controllerModel;
  do
  {
    v2 = LUI_Model_GetModel(*v1, "frontEnd");
    if ( v2 )
      LUI_Model_UnsubscribeAndFreeModel(v2);
    ++v1;
  }
  while ( (__int64)v1 < (__int64)&s_numDirtyModels );
}

/*
==============
LUI_Model_UnsubscribeAndFreeInGameModel
==============
*/
void LUI_Model_UnsubscribeAndFreeInGameModel(void)
{
  unsigned __int16 Model; 
  const unsigned __int16 *v1; 
  unsigned __int16 v2; 

  Model = LUI_Model_GetModel(s_globalModel, "cg");
  if ( Model )
    LUI_Model_UnsubscribeAndFreeModel(Model);
  v1 = s_controllerModel;
  do
  {
    v2 = LUI_Model_GetModel(*v1, "cg");
    if ( v2 )
      LUI_Model_UnsubscribeAndFreeModel(v2);
    ++v1;
  }
  while ( (__int64)v1 < (__int64)&s_numDirtyModels );
}

/*
==============
LUI_Model_UnsubscribeAndFreeModel
==============
*/
void LUI_Model_UnsubscribeAndFreeModel(unsigned __int16 model)
{
  unsigned __int16 v1; 
  __int64 v2; 
  unsigned int firstSubscription; 
  __int64 v4; 
  unsigned int next; 
  __int64 v6; 
  unsigned __int16 v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int *p_next; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int16 firstChild; 
  __int64 v14; 
  unsigned __int16 nextSibling; 

  v1 = model;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 671, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != INVALID_LUI_MODEL") )
    __debugbreak();
  v2 = v1;
  firstSubscription = s_modelNodePool[v2].firstSubscription;
  if ( firstSubscription )
  {
    do
    {
      v4 = firstSubscription & 0xFFF;
      next = s_subscriptionPool[v4].next;
      if ( !firstSubscription )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1060, ASSERT_TYPE_ASSERT, "(subscription != 0)", (const char *)&queryFormat, "subscription != INVALID_LUI_MODEL_SUBSCRIPTION") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 232, ASSERT_TYPE_ASSERT, "(subscription != 0)", (const char *)&queryFormat, "subscription != INVALID_LUI_MODEL_SUBSCRIPTION") )
          __debugbreak();
      }
      if ( (firstSubscription & 0xFFF000) == s_subscriptionPool[v4].useCount << 12 )
      {
        v6 = firstSubscription & 0xFFF;
        v7 = s_subscriptionPool[v6].model;
        if ( v7 )
        {
          v8 = v7;
          v9 = s_modelNodePool[v8].firstSubscription;
          if ( v9 == firstSubscription )
          {
            s_modelNodePool[v8].firstSubscription = s_subscriptionPool[v6].next;
          }
          else if ( v9 )
          {
            while ( 1 )
            {
              p_next = &s_subscriptionPool[v9 & 0xFFF].next;
              v9 = *p_next;
              if ( *p_next == firstSubscription )
                break;
              if ( !v9 )
                goto LABEL_19;
            }
            *p_next = s_subscriptionPool[v6].next;
          }
LABEL_19:
          v11 = s_subscriptionPool[v6].useCount + 1;
          s_subscriptionPool[v6].luaVM = NULL;
          s_subscriptionPool[v6].model = 0;
          v12 = s_firstFreeSubscriptionIndex;
          --s_allocatedSubscriptions;
          s_subscriptionPool[v6].useCount = v11 % 0xFFF;
          s_subscriptionPool[v6].next = v12;
          s_firstFreeSubscriptionIndex = firstSubscription & 0xFFF;
        }
      }
      firstSubscription = next;
    }
    while ( next );
    v1 = model;
  }
  firstChild = s_modelNodePool[v2].firstChild;
  if ( firstChild )
  {
    do
    {
      v14 = firstChild;
      if ( !s_modelNodePool[v14].keyHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 685, ASSERT_TYPE_ASSERT, "(s_modelNodePool[child].keyHash != 0)", (const char *)&queryFormat, "s_modelNodePool[child].keyHash != 0") )
        __debugbreak();
      nextSibling = s_modelNodePool[v14].nextSibling;
      LUI_Model_UnsubscribeAndFreeModel(firstChild);
      firstChild = nextSibling;
    }
    while ( nextSibling );
  }
  LUI_Model_FreeModel(v1);
}

/*
==============
LUI_Model_UpdateModelFromOmnvar
==============
*/
void LUI_Model_UpdateModelFromOmnvar(LocalClientNum_t localClientNum, const OmnvarDef *omnvarDef, const OmnvarData *omnvar)
{
  int ControllerFromClient; 
  unsigned __int16 ModelFromOmnvar; 
  bool enabled; 
  __int64 v11; 
  char *string; 
  char *v16; 
  int Time; 
  const char *v18; 
  const char *v19; 
  int v20; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  void *v25; 
  const char *Px; 

  _RSI = omnvar;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ModelFromOmnvar = LUI_Model_GetModelFromOmnvar(ControllerFromClient, omnvarDef);
  if ( !Com_GeneratingConstBaselines() )
  {
    _R12 = 0x140000000ui64;
    switch ( omnvarDef->type )
    {
      case OMNVAR_TYPE_BOOL:
        enabled = _RSI->current.enabled;
        if ( ModelFromOmnvar )
        {
          v11 = ModelFromOmnvar;
          if ( s_modelNodePool[v11].data.dataType != LUI_MODEL_DT_BOOL || s_modelNodePool[v11].data.boolean != enabled )
          {
            if ( s_modelNodePool[v11].data.dataType == LUI_MODEL_DT_STRING )
            {
              string = (char *)s_modelNodePool[v11].data.string;
              if ( string )
              {
                ntl::nxheap::free(&s_modelStringHeap.m_heap, string);
                s_modelNodePool[v11].data.string = NULL;
              }
            }
            s_modelNodePool[v11].data.dataType = LUI_MODEL_DT_BOOL;
            s_modelNodePool[v11].data.boolean = enabled;
            LUI_Model_NotifySubscriptions(ModelFromOmnvar);
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 965, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
        {
          goto LABEL_53;
        }
        return;
      case OMNVAR_TYPE_FLOAT:
        __asm
        {
          vmovaps [rsp+68h+var_38], xmm6; jumptable 0000000142618096 case 1
          vmovss  xmm6, dword ptr [rsi+4]
          vmovss  dword ptr [rsp+68h+Px], xmm6
        }
        if ( _fdtest((float *)&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 943, ASSERT_TYPE_ASSERT, "(!isnan( newValue ))", (const char *)&queryFormat, "!isnan( newValue )") )
          __debugbreak();
        if ( ModelFromOmnvar )
        {
          _RDI = ModelFromOmnvar;
          if ( s_modelNodePool[_RDI].data.dataType != LUI_MODEL_DT_REAL )
            goto LABEL_56;
          __asm { vucomiss xmm6, dword ptr [rdi+r12+147E4B60h] }
          if ( s_modelNodePool[_RDI].data.dataType != LUI_MODEL_DT_REAL )
          {
LABEL_56:
            if ( s_modelNodePool[_RDI].data.dataType == LUI_MODEL_DT_STRING )
            {
              v16 = (char *)s_modelNodePool[_RDI].data.string;
              if ( v16 )
              {
                ntl::nxheap::free(&s_modelStringHeap.m_heap, v16);
                s_modelNodePool[_RDI].data.string = NULL;
              }
            }
            s_modelNodePool[_RDI].data.dataType = LUI_MODEL_DT_REAL;
            __asm { vmovss  dword ptr [rdi+r12+147E4B60h], xmm6 }
            LUI_Model_NotifySubscriptions(ModelFromOmnvar);
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 944, ASSERT_TYPE_ASSERT, "(nodeIndex != 0)", (const char *)&queryFormat, "nodeIndex != INVALID_LUI_MODEL") )
        {
          __debugbreak();
        }
        __asm { vmovaps xmm6, [rsp+68h+var_38] }
        return;
      case OMNVAR_TYPE_INT:
        if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
          __debugbreak();
        if ( omnvarDef->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
          __debugbreak();
        LUI_Model_SetInt(ModelFromOmnvar, _RSI->current.integer + omnvarDef->minvalue);
        return;
      case OMNVAR_TYPE_UINT:
        LUI_Model_SetInt(ModelFromOmnvar, _RSI->current.integer);
        return;
      case OMNVAR_TYPE_TIME:
        Time = CG_Omnvar_GetTime(omnvarDef, _RSI, localClientNum);
        LUI_Model_SetInt(ModelFromOmnvar, Time);
        return;
      case OMNVAR_TYPE_NCS_LUI:
        if ( !BG_Omnvar_GetNCString(omnvarDef, _RSI, &Px) )
          return;
        v18 = Px;
        if ( ModelFromOmnvar )
        {
          if ( Px )
          {
            if ( s_modelNodePool[ModelFromOmnvar].data.dataType != LUI_MODEL_DT_STRING || (v22 = s_modelNodePool[ModelFromOmnvar].data.string) == NULL || I_strcmp(v22, Px) )
            {
              LUI_Model_WipeData(ModelFromOmnvar);
              v23 = -1i64;
              do
                ++v23;
              while ( v18[v23] );
              v24 = (unsigned int)(v23 + 1);
              v25 = ntl::nxheap::allocate(&s_modelStringHeap.m_heap, v24, 4ui64, 1);
              if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1010, ASSERT_TYPE_ASSERT, "(newString)", (const char *)&queryFormat, "newString") )
                __debugbreak();
              memcpy_0(v25, v18, v24);
              s_modelNodePool[ModelFromOmnvar].data.dataType = LUI_MODEL_DT_STRING;
              s_modelNodePool[ModelFromOmnvar].data.string = (const char *)v25;
              LUI_Model_NotifySubscriptions(ModelFromOmnvar);
            }
            return;
          }
          v19 = "newValue != NULL";
          v20 = 992;
          v21 = "(newValue != 0)";
        }
        else
        {
          v19 = "nodeIndex != INVALID_LUI_MODEL";
          v20 = 986;
          v21 = "(nodeIndex != 0)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", v20, ASSERT_TYPE_ASSERT, v21, (const char *)&queryFormat, v19) )
          goto LABEL_53;
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 1228, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected omnvar type for omnvar %s", omnvarDef->name) )
LABEL_53:
          __debugbreak();
        return;
    }
  }
}

/*
==============
LUI_Model_WipeData
==============
*/
void LUI_Model_WipeData(const unsigned __int16 model)
{
  __int64 v1; 
  char *string; 

  v1 = model;
  if ( s_modelNodePool[v1].data.dataType == LUI_MODEL_DT_STRING )
  {
    string = (char *)s_modelNodePool[v1].data.string;
    if ( string )
    {
      ntl::nxheap::free(&s_modelStringHeap.m_heap, string);
      s_modelNodePool[v1].data.string = NULL;
    }
  }
}

/*
==============
LUI_Model_Write
==============
*/
void LUI_Model_Write(const fileHandle_t fileHandle, const int channel, const char *fmt, ...)
{
  unsigned __int64 v5; 
  char dest[512]; 
  va_list ap; 

  va_start(ap, fmt);
  Com_vsprintf(dest, 0x200ui64, fmt, ap);
  if ( fileHandle.handle.handle == -1 )
  {
    Com_Printf(channel, (const char *)&queryFormat, dest);
  }
  else
  {
    v5 = -1i64;
    do
      ++v5;
    while ( dest[v5] );
    FS_Write(dest, v5, fileHandle);
  }
}

/*
==============
LUI_Model_WriteModelTree
==============
*/
void LUI_Model_WriteModelTree(const unsigned __int16 model, const int indentLevel, const fileHandle_t fileHandle)
{
  __int64 v5; 
  unsigned __int16 firstChild; 
  unsigned __int16 *p_firstChild; 
  __int64 v8; 
  __int64 v9; 
  char *key; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  __int64 v15; 
  const char *v16; 
  unsigned __int16 nextSibling; 
  LUIModelDataType dataType; 

  v5 = model;
  firstChild = s_modelNodePool[v5].firstChild;
  p_firstChild = &s_modelNodePool[v5].firstChild;
  v8 = (unsigned int)indentLevel;
  dataType = s_modelNodePool[v5].data.dataType;
  nextSibling = s_modelNodePool[v5].nextSibling;
  if ( indentLevel > 0 )
  {
    v9 = (unsigned int)indentLevel;
    do
    {
      LUI_Model_Write(fileHandle, 13, "    ");
      --v9;
    }
    while ( v9 );
  }
  key = s_modelNodePool[v5].key;
  LUI_Model_Write(fileHandle, 13, "\"%s\" : ", key);
  if ( dataType )
  {
    if ( firstChild )
    {
      LUI_Model_Write(fileHandle, 13, "{\n", key);
      if ( (int)v8 + 1 > 0 )
      {
        v11 = (unsigned int)(v8 + 1);
        do
        {
          LUI_Model_Write(fileHandle, 13, "    ");
          --v11;
        }
        while ( v11 );
      }
      LUI_Model_Write(fileHandle, 13, "\"_parentValue (%s)\" : ", key);
      LUI_Model_WriteModelValue(model, 1, fileHandle);
    }
    else
    {
      LUI_Model_WriteModelValue(model, nextSibling != 0, fileHandle);
    }
  }
  else
  {
    LUI_Model_Write(fileHandle, 13, "{");
  }
  LUI_Model_Write(fileHandle, 13, "\n");
  v12 = *p_firstChild;
  if ( *p_firstChild )
  {
    do
    {
      v13 = v12;
      if ( !s_modelNodePool[v13].keyHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 531, ASSERT_TYPE_ASSERT, "(s_modelNodePool[child].keyHash != 0)", (const char *)&queryFormat, "s_modelNodePool[child].keyHash != 0") )
        __debugbreak();
      v14 = s_modelNodePool[v13].nextSibling;
      LUI_Model_WriteModelTree(v12, v8 + 1, fileHandle);
      v12 = v14;
    }
    while ( v14 );
  }
  if ( dataType == LUI_MODEL_DT_INVALID || firstChild )
  {
    if ( (int)v8 > 0 )
    {
      v15 = v8;
      do
      {
        LUI_Model_Write(fileHandle, 13, "    ");
        --v15;
      }
      while ( v15 );
    }
    v16 = (char *)&queryFormat.fmt + 3;
    if ( nextSibling )
      v16 = ",";
    LUI_Model_Write(fileHandle, 13, "}%s\n", v16);
  }
}

/*
==============
LUI_Model_WriteModelValue
==============
*/
void LUI_Model_WriteModelValue(const unsigned __int16 model, const bool trailingComma, const fileHandle_t fileHandle)
{
  LUIModelDataType dataType; 
  __int32 v8; 
  __int32 v9; 
  __int32 v10; 
  const char *v14; 

  _R10 = model;
  _RDX = s_modelNodePool;
  dataType = s_modelNodePool[_R10].data.dataType;
  if ( dataType )
  {
    v8 = dataType - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            LUI_Model_Write(fileHandle, 13, "\"%s\"", s_modelNodePool[_R10].data.string);
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel.cpp", 484, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Model Index %d has unkown data type\n", model) )
          {
            __debugbreak();
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm3, dword ptr [r10+rdx+10h]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovq   r9, xmm3
          }
          LUI_Model_Write(fileHandle, 13, "\"%f\"", _R9);
        }
      }
      else
      {
        LUI_Model_Write(fileHandle, 13, "\"%d\"", (unsigned int)s_modelNodePool[_R10].data.integer);
      }
    }
    else
    {
      v14 = "false";
      if ( s_modelNodePool[_R10].data.boolean )
        v14 = "true";
      LUI_Model_Write(fileHandle, 13, "\"%s\"", v14);
    }
  }
  else
  {
    LUI_Model_Write(fileHandle, 13, "\"No value - Data type LUI_MODEL_DT_INVALID\"");
  }
  if ( trailingComma )
    LUI_Model_Write(fileHandle, 13, ",");
}

