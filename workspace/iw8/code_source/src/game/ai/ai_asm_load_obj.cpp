/*
==============
ASM_TranslateStateFlags
==============
*/

int __fastcall ASM_TranslateStateFlags(ASM_Mode asmMode, const char *szflags)
{
  return ?ASM_TranslateStateFlags@@YAHW4ASM_Mode@@PEBD@Z(asmMode, szflags);
}

/*
==============
AI_ASM_TranslateFunctionParams
==============
*/

ASM_Function_Param *__fastcall AI_ASM_TranslateFunctionParams(ASM_Mode mode, const ASM_Function *pFunc, const char *paramBuf, int startIdx, int *numParams, PlayerASM_ConditionMask *conditionMask, bool enforceMaskedFunctions)
{
  return ?AI_ASM_TranslateFunctionParams@@YAPEAUASM_Function_Param@@W4ASM_Mode@@PEBUASM_Function@@PEBDHPEAHPEAUPlayerASM_ConditionMask@@_N@Z(mode, pFunc, paramBuf, startIdx, numParams, conditionMask, enforceMaskedFunctions);
}

/*
==============
ASM_Load
==============
*/

ASM *__fastcall ASM_Load(const char *filename)
{
  return ?ASM_Load@@YAPEAUASM@@PEBD@Z(filename);
}

/*
==============
AI_ASM_FileOpen
==============
*/

__int64 __fastcall AI_ASM_FileOpen(const char *filename, fileHandle_t *file, ScrThreadMode threadMode)
{
  return ?AI_ASM_FileOpen@@YA_JPEBDPEAUfileHandle_t@@W4ScrThreadMode@@@Z(filename, file, threadMode);
}

/*
==============
ASM_GetStateFlagDefs
==============
*/

void __fastcall ASM_GetStateFlagDefs(ASM_Mode asmMode, const char ***flagNameArray, unsigned int *numFlags)
{
  ?ASM_GetStateFlagDefs@@YAXW4ASM_Mode@@PEAPEAPEBDPEAI@Z(asmMode, flagNameArray, numFlags);
}

/*
==============
ASM_LoadAll
==============
*/

void __fastcall ASM_LoadAll(ASM_Mode mode, ScrThreadMode threadMode)
{
  ?ASM_LoadAll@@YAXW4ASM_Mode@@W4ScrThreadMode@@@Z(mode, threadMode);
}

/*
==============
ASM_Load_FastFile
==============
*/

ASM *__fastcall ASM_Load_FastFile(const char *filename, ScrThreadMode threadMode)
{
  return ?ASM_Load_FastFile@@YAPEAUASM@@PEBDW4ScrThreadMode@@@Z(filename, threadMode);
}

/*
==============
AI_ASM_FileOpen
==============
*/
__int64 AI_ASM_FileOpen(const char *filename, fileHandle_t *file, ScrThreadMode threadMode)
{
  const dvar_t *v3; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  char ospath[256]; 

  v3 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
  if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 63, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
    __debugbreak();
  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 67, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v6 = Sys_DefaultInstallPath();
  FS_BuildOSPath(v6, "main_shared", filename, (char (*)[256])ospath);
  v7 = FS_FOpenFileRead(ospath, file);
  v8 = -1i64;
  if ( file->handle.handle != -1 )
    return v7;
  return v8;
}

/*
==============
AI_ASM_TranslateFunction
==============
*/
void AI_ASM_TranslateFunction(ASM_Mode mode, ASM_Function *pFunc, ASMB_Function *pASMBFunc, const char *paramBuf, scr_string_t stateName, PlayerASM_ConditionMask *conditionMask)
{
  int m_ID; 
  bool v9; 
  const BgPlayer_BuiltinFuncEntry *v10; 
  int v11; 
  const AI_ASM_BuiltinFuncEntry *v12; 
  const char *v13; 
  __int64 v14; 
  ASMB_Function *v15; 
  signed __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  const char *m_Name; 
  __int64 v23; 
  ASMB_Function *v24; 
  signed __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  ASM_Mode v31; 
  void (__fastcall *m_SetMaskFunc)(PlayerASM_ConditionMask *); 

  m_ID = pASMBFunc->m_ID;
  pFunc->m_FuncID = m_ID;
  pFunc->m_NumParams = pASMBFunc->m_NumParams;
  v9 = m_ID < 0 && pASMBFunc->m_Name[0];
  v10 = s_PlayerASMBuiltinFuncs_8;
  pFunc->m_bBuiltin = v9;
  pFunc->m_Flags = 0;
  if ( v9 )
  {
    v11 = 0;
    if ( mode )
    {
LABEL_23:
      m_Name = v10->m_Name;
      v23 = 0x7FFFFFFFi64;
      v24 = pASMBFunc;
      if ( !v10->m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v25 = m_Name - (const char *)pASMBFunc;
      do
      {
        v26 = (unsigned __int8)v24->m_Name[v25];
        v27 = v23;
        v28 = (unsigned __int8)v24->m_Name[0];
        v24 = (ASMB_Function *)((char *)v24 + 1);
        --v23;
        if ( !v27 )
          break;
        if ( v26 != v28 )
        {
          v29 = v26 + 32;
          if ( (unsigned int)(v26 - 65) > 0x19 )
            v29 = v26;
          v26 = v29;
          v30 = v28 + 32;
          if ( (unsigned int)(v28 - 65) > 0x19 )
            v30 = v28;
          if ( v26 != v30 )
          {
            ++v11;
            if ( (__int64)++v10 < (__int64)&unk_143D73288 )
              goto LABEL_23;
LABEL_37:
            v11 = -1;
            break;
          }
        }
      }
      while ( v26 );
    }
    else
    {
      v12 = s_ASMBuiltinFuncs_4;
LABEL_8:
      v13 = v12->m_Name;
      v14 = 0x7FFFFFFFi64;
      v15 = pASMBFunc;
      if ( !v12->m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v16 = v13 - (const char *)pASMBFunc;
      do
      {
        v17 = (unsigned __int8)v15->m_Name[v16];
        v18 = v14;
        v19 = (unsigned __int8)v15->m_Name[0];
        v15 = (ASMB_Function *)((char *)v15 + 1);
        --v14;
        if ( !v18 )
          break;
        if ( v17 != v19 )
        {
          v20 = v17 + 32;
          if ( (unsigned int)(v17 - 65) > 0x19 )
            v20 = v17;
          v17 = v20;
          v21 = v19 + 32;
          if ( (unsigned int)(v19 - 65) > 0x19 )
            v21 = v19;
          if ( v17 != v21 )
          {
            ++v11;
            if ( (__int64)++v12 < (__int64)s_PlayerASMBuiltinFuncs_8 )
              goto LABEL_8;
            goto LABEL_37;
          }
        }
      }
      while ( v17 );
    }
    v31 = mode;
    pFunc->m_FuncID = v11;
    if ( v11 == -1 )
    {
      if ( mode )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D73E00, 784i64, pASMBFunc);
        return;
      }
      Com_PrintError(1, "AI_ASM_TranslateFunction: Unable to find code function '%s'\n", pASMBFunc->m_Name);
    }
  }
  else
  {
    v31 = mode;
  }
  pFunc->m_Params = AI_ASM_TranslateFunctionParams(v31, pFunc, paramBuf, pASMBFunc->m_ParamsStartIdx, &pFunc->m_NumParams, conditionMask, 0);
  if ( v31 == ASM_MODE_PLAYER && !pFunc->m_NumParams && conditionMask )
  {
    m_SetMaskFunc = s_PlayerASMBuiltinFuncs_8[pFunc->m_FuncID].m_SetMaskFunc;
    if ( m_SetMaskFunc )
    {
      m_SetMaskFunc(conditionMask);
      if ( BG_CheckAnyOn(conditionMask->animConditions) )
        pFunc->m_Flags |= 2u;
      if ( BG_CheckAnyOn(conditionMask->animEvents) )
        pFunc->m_Flags |= 1u;
      if ( conditionMask->usesNotetrackEvents )
        pFunc->m_Flags |= 4u;
    }
    else
    {
      conditionMask->invalidMask = 1;
    }
  }
}

/*
==============
AI_ASM_TranslateFunctionParams
==============
*/
ASM_Function_Param *AI_ASM_TranslateFunctionParams(ASM_Mode mode, const ASM_Function *pFunc, const char *paramBuf, int startIdx, int *numParams, PlayerASM_ConditionMask *conditionMask, bool enforceMaskedFunctions)
{
  int *v8; 
  const ASM_Function *v10; 
  __int64 v11; 
  ASM_Function_Param *result; 
  __int64 m_FuncID; 
  unsigned int v15; 
  unsigned int v16; 
  ASM_Function_Param_Type *p_m_Type; 
  const char *v18; 
  const char *v19; 
  __int64 *v20; 
  ASM_Function_Param *v21; 
  int v22; 
  int v23; 
  ASM_Function_Param_Value v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  PlayerASM_ConditionMask *v31; 
  __int64 v32; 
  void (__fastcall *m_SetMaskFunc)(PlayerASM_ConditionMask *); 
  char v34; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  unsigned int v39; 
  ASM_Function_Param *v41; 
  __int64 v43[4]; 

  v8 = numParams;
  v10 = pFunc;
  v11 = startIdx;
  if ( !*numParams )
    return 0i64;
  if ( !paramBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 190, ASSERT_TYPE_ASSERT, "(paramBuf)", (const char *)&queryFormat, "paramBuf") )
    __debugbreak();
  if ( mode == ASM_MODE_PLAYER && v10 && v10->m_bBuiltin && (m_FuncID = v10->m_FuncID, (_DWORD)m_FuncID != -1) && s_PlayerASMBuiltinFuncs_8[m_FuncID].m_SetConditionFunc )
  {
    v38 = 1;
    memset(v43, 0, sizeof(v43));
    v15 = 8;
  }
  else
  {
    v15 = *numParams;
    v38 = 0;
  }
  result = (ASM_Function_Param *)ASM_Load_Alloc(8i64 * (int)v15);
  v16 = 0;
  v41 = result;
  v39 = 0;
  if ( *numParams > 0 )
  {
    p_m_Type = &result->m_Type;
    v18 = &paramBuf[80 * v11];
    v19 = "undefined";
    do
    {
      if ( v38 )
      {
        if ( v10->m_FuncID >= 0xC7u )
        {
          LODWORD(v37) = 199;
          LODWORD(v36) = v10->m_FuncID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v36, v37) )
            __debugbreak();
        }
        s_PlayerASMBuiltinFuncs_8[v10->m_FuncID].m_SetConditionFunc(v18, (unsigned int *)v43);
        v20 = v43;
        v21 = v41;
        v22 = (s_PlayerASMBuiltinFuncs_8[v10->m_FuncID].m_SetConditionFunc != PlayerASM_SetConditionString<1>) + 2;
        v23 = 0;
        do
        {
          if ( v23 >= v15 )
          {
            LODWORD(v37) = v15;
            LODWORD(v36) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( condVal ) < (unsigned)( numParamsStored )", "condVal doesn't index numParamsStored\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          v21->m_Type = v22;
          ++v23;
          v24 = *(ASM_Function_Param_Value *)v20;
          v20 = (__int64 *)((char *)v20 + 4);
          v21->u = v24;
          ++v21;
        }
        while ( v23 < 8 );
        v10 = pFunc;
        v16 = v39;
        v8 = numParams;
      }
      else
      {
        if ( v16 >= v15 )
        {
          LODWORD(v37) = v15;
          LODWORD(v36) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( iParam ) < (unsigned)( numParamsStored )", "iParam doesn't index numParamsStored\n\t%i not in [0, %i)", v36, v37) )
            __debugbreak();
        }
        v25 = 0x7FFFFFFFi64;
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v26 = (unsigned __int8)v19[v18 - "undefined"];
          v27 = v25;
          v28 = *(unsigned __int8 *)v19++;
          --v25;
          if ( !v27 )
          {
LABEL_39:
            *p_m_Type = ParamType_Undefined;
            goto LABEL_40;
          }
          if ( v26 != v28 )
          {
            v29 = v26 + 32;
            if ( (unsigned int)(v26 - 65) > 0x19 )
              v29 = v26;
            v26 = v29;
            v30 = v28 + 32;
            if ( (unsigned int)(v28 - 65) > 0x19 )
              v30 = v28;
            if ( v26 != v30 )
              break;
          }
          if ( !v26 )
            goto LABEL_39;
        }
        if ( I_stricmp(v18, "true") )
        {
          if ( I_stricmp(v18, "false") )
          {
            v34 = *v18;
            if ( (unsigned __int8)(*v18 - 48) > 9u && (((v34 - 43) & 0xFC) != 0 || v34 == 44) )
            {
              *p_m_Type = ParamType_String;
              if ( *v18 )
                *((_DWORD *)p_m_Type - 1) = SL_GetString(v18, 0);
              else
                *((_DWORD *)p_m_Type - 1) = 0;
            }
            else if ( I_stristr(v18, ".") )
            {
              *p_m_Type = ParamType_Float;
              *(double *)&_XMM0 = atof(v18);
              __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
              *(p_m_Type - 1) = _XMM1;
            }
            else
            {
              *p_m_Type = ParamType_Int;
              *((_DWORD *)p_m_Type - 1) = atoi(v18);
            }
          }
          else
          {
            *p_m_Type = ParamType_Bool;
            *((_BYTE *)p_m_Type - 4) = 0;
          }
        }
        else
        {
          *p_m_Type = ParamType_Bool;
          *((_BYTE *)p_m_Type - 4) = 1;
        }
      }
LABEL_40:
      v31 = conditionMask;
      if ( conditionMask )
      {
        if ( v10->m_FuncID >= 0xC7u )
        {
          LODWORD(v37) = 199;
          LODWORD(v36) = v10->m_FuncID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 272, ASSERT_TYPE_ASSERT, "(unsigned)( pFunc->m_FuncID ) < (unsigned)( ( sizeof( *array_counter( s_PlayerASMBuiltinFuncs ) ) + 0 ) )", "pFunc->m_FuncID doesn't index ARRAY_COUNT( s_PlayerASMBuiltinFuncs )\n\t%i not in [0, %i)", v36, v37) )
            __debugbreak();
          v31 = conditionMask;
        }
        if ( mode == ASM_MODE_PLAYER && v10->m_bBuiltin && (v32 = v10->m_FuncID, (_DWORD)v32 != -1) && (m_SetMaskFunc = s_PlayerASMBuiltinFuncs_8[v32].m_SetMaskFunc) != NULL )
        {
          m_SetMaskFunc(v31);
        }
        else
        {
          v31->invalidMask = 1;
          if ( enforceMaskedFunctions )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D73CC0, 783i64, s_PlayerASMBuiltinFuncs_8[v10->m_FuncID].m_Name);
        }
      }
      ++v16;
      v19 = "undefined";
      v18 += 80;
      v39 = v16;
      p_m_Type += 2;
    }
    while ( (int)v16 < *v8 );
    result = v41;
  }
  *v8 = v15;
  return result;
}

/*
==============
ASM_GetStateFlagDefs
==============
*/
void ASM_GetStateFlagDefs(ASM_Mode asmMode, const char ***flagNameArray, unsigned int *numFlags)
{
  __int64 v6; 

  if ( !flagNameArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 767, ASSERT_TYPE_ASSERT, "(flagNameArray)", (const char *)&queryFormat, "flagNameArray") )
    __debugbreak();
  if ( !numFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 768, ASSERT_TYPE_ASSERT, "(numFlags)", (const char *)&queryFormat, "numFlags") )
    __debugbreak();
  if ( (unsigned int)asmMode >= ASM_MODE_COUNT )
  {
    LODWORD(v6) = asmMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 769, ASSERT_TYPE_ASSERT, "(unsigned)( asmMode ) < (unsigned)( ASM_MODE_COUNT )", "asmMode doesn't index ASM_MODE_COUNT\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  if ( asmMode )
  {
    if ( asmMode == ASM_MODE_PLAYER )
    {
      *flagNameArray = g_PlayerASMStateFlagNames;
      *numFlags = 3;
    }
  }
  else
  {
    *flagNameArray = g_AIASMFlagNames;
    *numFlags = 4;
  }
}

/*
==============
ASM_Load
==============
*/
ASM *ASM_Load(const char *filename)
{
  ASM *result; 

  result = DB_FindXAssetHeader(ASSET_TYPE_ASM, filename, 0).asmAsset;
  if ( !result )
  {
    Com_PrintError(1, "File %s not found!", filename);
    return 0i64;
  }
  return result;
}

/*
==============
ASM_LoadAll
==============
*/
void ASM_LoadAll(ASM_Mode mode, ScrThreadMode threadMode)
{
  __int64 v3; 
  unsigned int v4; 
  DB_AssetEntryFlags *p_m_headEntries; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v7; 
  __int64 assetCount; 
  ASM *LoadObj; 
  ASM_Mode m_Mode; 
  int v12; 
  GetAllXAssetFunctor functor; 
  __int64 v15[32]; 

  if ( (unsigned int)mode >= ASM_MODE_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 721, ASSERT_TYPE_ASSERT, "(unsigned)( mode ) < (unsigned)( ASM_Mode::ASM_MODE_COUNT )", "mode doesn't index ASM_Mode::ASM_MODE_COUNT\n\t%i not in [0, %i)", mode, v12) )
      __debugbreak();
  }
  functor.type = ASSET_TYPE_ASM;
  v3 = 0i64;
  functor.assets = (XAssetHeader *)v15;
  functor.assetCount = 0;
  functor.maxCount = 32;
  DB_LockHashRead();
  v4 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  AssetEntryPool = DB_GetAssetEntryPool();
  v7 = 0;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v7, &functor);
    v7 += 64;
    ++v4;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  while ( v4 < 0x1768 );
  DB_UnlockHashRead();
  assetCount = functor.assetCount;
  if ( functor.assetCount > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v15[v3] + 64) == mode )
      {
        if ( !Common_Asm::ShouldLooseFileLoad() || (Mem_Ownership_AllocAcquire(MOVEMENT), LoadObj = ASM_Load_LoadObj(*(const char **)v15[v3], threadMode), Mem_Ownership_AllocRelease(MOVEMENT), !LoadObj) )
          LoadObj = (ASM *)v15[v3];
        memset_0(LoadObj->m_FuncIDs, -1, 4i64 * LoadObj->m_NumFuncIDs);
        m_Mode = LoadObj->m_Mode;
        if ( m_Mode )
        {
          if ( m_Mode == ASM_MODE_PLAYER )
            BgPlayer_Asm::Register(LoadObj, LoadObj != (ASM *)v15[v3]);
        }
        else
        {
          LoadObj->u.m_AIASM->m_ScriptHandler = -1;
          Ai_Asm::Register(LoadObj, LoadObj != (ASM *)v15[v3]);
        }
      }
      ++v3;
    }
    while ( v3 < assetCount );
  }
}

/*
==============
ASM_Load_Alloc
==============
*/
void *ASM_Load_Alloc(unsigned __int64 size)
{
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 43, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  return Mem_HunkDebug_Alloc(size, "ASM_LoadAlloc");
}

/*
==============
ASM_Load_FastFile
==============
*/
ASM *ASM_Load_FastFile(const char *filename, ScrThreadMode threadMode)
{
  ASM *result; 

  result = DB_FindXAssetHeader(ASSET_TYPE_ASM, filename, 0).asmAsset;
  if ( !result )
  {
    Com_PrintError(1, "File %s not found!", filename);
    return 0i64;
  }
  return result;
}

/*
==============
ASM_Load_LoadObj
==============
*/
ASM *ASM_Load_LoadObj(const char *name, ScrThreadMode threadMode)
{
  const dvar_t *v3; 
  const char *v4; 
  ASM *v5; 
  __int64 handle; 
  int *Alloc; 
  unsigned __int64 v8; 
  ASM_Mode v9; 
  unsigned __int64 v10; 
  const char **v11; 
  char *v12; 
  __int64 v13; 
  char *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  void *v20; 
  char *v21; 
  __int64 v22; 
  ASM_Union v23; 
  __int64 m_NumServices; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  fileHandle_t file; 
  int buffer; 
  int v33; 
  int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  char *paramBuf; 
  char v39[8]; 
  char dest[64]; 
  char v41[80]; 
  char ospath[256]; 

  if ( Com_sprintf_truncate<64>((char (*)[64])dest, "aiasm/%s.asmb", name) < 0 )
    return 0i64;
  v3 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
  if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 63, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
    __debugbreak();
  v4 = Sys_DefaultInstallPath();
  FS_BuildOSPath(v4, "main_shared", dest, (char (*)[256])ospath);
  FS_FOpenFileRead(ospath, &file);
  if ( file.handle.handle == -1 )
    return 0i64;
  v5 = (ASM *)Mem_HunkDebug_Alloc(0x50ui64, "ASM_LoadAlloc");
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 660, ASSERT_TYPE_ASSERT, "(pASM)", (const char *)&queryFormat, "pASM") )
    __debugbreak();
  v5->m_szName = name;
  v5->m_Name = SL_GetString(name, 0);
  handle = file.handle.handle;
  FS_Read(&buffer, 4ui64, file);
  Alloc = NULL;
  if ( buffer )
  {
    v8 = 80 * buffer;
    paramBuf = (char *)ASM_Load_Alloc(v8);
    FS_Read(paramBuf, v8, (fileHandle_t)handle);
  }
  else
  {
    paramBuf = NULL;
  }
  FS_Read(v41, 0x50ui64, file);
  v9 = ASM_MODE_AI;
  v10 = 1i64;
  v11 = g_ASMModeNames;
LABEL_16:
  v12 = (char *)*v11;
  v13 = 0x7FFFFFFFi64;
  if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v14 = (char *)(v41 - v12);
  do
  {
    v15 = (unsigned __int8)v12[(_QWORD)v14];
    v16 = v13;
    v17 = (unsigned __int8)*v12++;
    --v13;
    if ( !v16 )
      break;
    if ( v15 != v17 )
    {
      v18 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v18 = v15;
      v15 = v18;
      v19 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v19 = v17;
      if ( v15 != v19 )
      {
        ++v9;
        if ( (__int64)++v11 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_260 )
          goto LABEL_16;
        v9 = ASM_MODE_AI;
        break;
      }
    }
  }
  while ( v15 );
  v5->m_Mode = v9;
  if ( v9 )
  {
    if ( v9 != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 678, ASSERT_TYPE_ASSERT, "(pASM->m_Mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "pASM->m_Mode == ASM_MODE_PLAYER") )
      __debugbreak();
  }
  else
  {
    v10 = 16i64;
  }
  v20 = Mem_HunkDebug_Alloc(v10, "ASM_LoadAlloc");
  v21 = paramBuf;
  v5->u.m_AIASM = (AI_ASM *)v20;
  ASM_ReadStates(file, v5, v21);
  ASM_ReadTransitions(file, v5, v21);
  v22 = file.handle.handle;
  if ( v5->m_Mode )
  {
    FS_Read(&v35, 4ui64, file);
    if ( (int)v35 > 0 )
    {
      v27 = v35;
      do
      {
        FS_Read(v39, 4ui64, (fileHandle_t)v22);
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    FS_Read(&v33, 4ui64, file);
    v5->u.m_AIASM->m_NumServices = v33;
    v23.m_AIASM = (AI_ASM *)v5->u;
    m_NumServices = v23.m_AIASM->m_NumServices;
    if ( (_DWORD)m_NumServices )
    {
      v25 = 0;
      v5->u.m_AIASM->m_Services = (int *)ASM_Load_Alloc(4 * m_NumServices);
      if ( v5->u.m_AIASM->m_NumServices > 0 )
      {
        v26 = 0i64;
        do
        {
          FS_Read(&v34, 4ui64, (fileHandle_t)v22);
          ++v26;
          ++v25;
          v5->u.m_AIASM->m_Services[v26 - 1] = v34;
        }
        while ( v25 < v5->u.m_AIASM->m_NumServices );
      }
    }
    else
    {
      v23.m_AIASM->m_Services = NULL;
    }
  }
  ASM_ReadServices_Dummy(file);
  ASM_ReadLogicGroups(file, v5, v21);
  v28 = file.handle.handle;
  FS_Read(&v36, 4ui64, file);
  v5->m_StartState = v36;
  FS_Read(&v37, 4ui64, (fileHandle_t)v28);
  v29 = v37;
  v5->m_NumFuncIDs = v37;
  if ( (int)v29 > 0 )
    Alloc = (int *)ASM_Load_Alloc(4 * v29);
  v5->m_FuncIDs = Alloc;
  FS_FCloseFile(file);
  return v5;
}

/*
==============
ASM_ReadLogicGroups
==============
*/
void ASM_ReadLogicGroups(fileHandle_t file, ASM *pASM, char *paramBuf)
{
  int v6; 
  ASM_LogicGroup *Alloc; 
  int v8; 
  ASMB_Function *p_pASMBFunc; 
  __int64 v10; 
  ASM_LogicGroup *v11; 
  int buffer[4]; 
  char v13[8]; 
  ASMB_Function pASMBFunc; 

  FS_Read(buffer, 4ui64, file);
  v6 = buffer[0];
  pASM->m_NumLogicGroups = buffer[0];
  if ( v6 )
  {
    if ( v6 >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 594, ASSERT_TYPE_ASSERT, "(pASM->m_NumLogicGroups < cMaxLogicGroups)", "%s\n\texceeded max number of logic groups %d", "pASM->m_NumLogicGroups < cMaxLogicGroups", 64) )
      __debugbreak();
    FS_Read(v13, 192 * pASM->m_NumLogicGroups, file);
    Alloc = (ASM_LogicGroup *)ASM_Load_Alloc(72i64 * pASM->m_NumLogicGroups);
    pASM->m_LogicGroups = Alloc;
    if ( !Alloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 600, ASSERT_TYPE_ASSERT, "(pASM->m_LogicGroups)", (const char *)&queryFormat, "pASM->m_LogicGroups") )
      __debugbreak();
    v8 = 0;
    if ( pASM->m_NumLogicGroups > 0 )
    {
      p_pASMBFunc = &pASMBFunc;
      v10 = 0i64;
      do
      {
        v11 = &pASM->m_LogicGroups[v10];
        v11->m_ID = p_pASMBFunc[-1].m_NumParams;
        v11->m_ParentID = p_pASMBFunc[-1].m_ID;
        AI_ASM_TranslateFunction(pASM->m_Mode, &v11->m_InitFunc, p_pASMBFunc, paramBuf, (scr_string_t)0, NULL);
        AI_ASM_TranslateFunction(pASM->m_Mode, &v11->m_TerminateFunc, p_pASMBFunc + 1, paramBuf, (scr_string_t)0, NULL);
        ++v8;
        ++v10;
        p_pASMBFunc = (ASMB_Function *)((char *)p_pASMBFunc + 192);
      }
      while ( v8 < pASM->m_NumLogicGroups );
    }
  }
  else
  {
    pASM->m_LogicGroups = NULL;
  }
}

/*
==============
ASM_ReadServices_Dummy
==============
*/
void ASM_ReadServices_Dummy(fileHandle_t file)
{
  __int64 v2; 
  unsigned int buffer; 

  FS_Read(&buffer, 4ui64, file);
  if ( (int)buffer > 0 )
  {
    v2 = buffer;
    do
    {
      FS_Read(&buffer, 4ui64, file);
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
ASM_ReadStates
==============
*/
void ASM_ReadStates(fileHandle_t file, ASM *pASM, char *paramBuf, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  ASM *v7; 
  int v9; 
  const char *v10; 
  unsigned __int64 v11; 
  char *v12; 
  ASM_State *v13; 
  __int64 v14; 
  char *v15; 
  const char *v16; 
  __int64 v17; 
  scr_string_t String; 
  const char **v19; 
  int v20; 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  const char **v30; 
  const char *v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  __int64 v39; 
  unsigned __int64 v40; 
  int v41; 
  __int64 v42; 
  const char *v43; 
  scr_string_t v44; 
  const char *v45; 
  scr_string_t v46; 
  const char *v47; 
  scr_string_t v48; 
  ASM_Mode m_Mode; 
  _DWORD *v50; 
  const char *v51; 
  scr_string_t v52; 
  const char *v53; 
  scr_string_t v54; 
  const char *v55; 
  scr_string_t v56; 
  const char *v57; 
  _QWORD *v58; 
  bool v59; 
  __int64 v60; 
  char *Alloc; 
  int buffer; 

  v7 = pASM;
  FS_Read(&buffer, 4ui64, file);
  v9 = buffer;
  v7->m_NumStates = buffer;
  if ( v9 )
  {
    if ( v7->m_Mode == ASM_MODE_PLAYER && v9 >= 320 )
    {
      v10 = SL_ConvertToString(v7->m_Name);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D73E70, 6171i64, v10, a5, a6, a7);
    }
    else
    {
      v11 = 1896 * v9;
      Alloc = (char *)ASM_Load_Alloc(v11);
      v12 = Alloc;
      FS_Read(Alloc, v11, file);
      v13 = (ASM_State *)ASM_Load_Alloc(248i64 * v7->m_NumStates);
      v7->m_States = v13;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 404, ASSERT_TYPE_ASSERT, "(pASM->m_States)", (const char *)&queryFormat, "pASM->m_States") )
        __debugbreak();
      buffer = 0;
      if ( v7->m_NumStates > 0 )
      {
        v14 = 0i64;
        v60 = 0i64;
        do
        {
          v15 = &v12[1896 * v14];
          v16 = v15 + 100;
          v17 = (__int64)&v7->m_States[v14];
          if ( v15 == (char *)-100i64 || !*v16 )
            String = 0;
          else
            String = SL_GetString(v16, 0);
          *(_DWORD *)(v17 + 12) = String;
          v19 = g_ASMStateTypeNames;
          *(_DWORD *)(v17 + 16) = *((_DWORD *)v15 + 45);
          v20 = 0;
          *(_DWORD *)(v17 + 8) = *((_DWORD *)v15 + 24);
          *(_QWORD *)v17 = 0i64;
LABEL_16:
          v21 = *v19;
          v22 = 0x7FFFFFFFi64;
          if ( v15 == (char *)-184i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v23 = v15 + 184 - v21;
          do
          {
            v24 = (unsigned __int8)v21[v23];
            v25 = v22;
            v26 = *(unsigned __int8 *)v21++;
            --v22;
            if ( !v25 )
              break;
            if ( v24 != v26 )
            {
              v27 = v24 + 32;
              if ( (unsigned int)(v24 - 65) > 0x19 )
                v27 = v24;
              v24 = v27;
              v28 = v26 + 32;
              if ( (unsigned int)(v26 - 65) > 0x19 )
                v28 = v26;
              if ( v24 != v28 )
              {
                ++v20;
                if ( (__int64)++v19 < (__int64)g_ASMStanceNames_0 )
                  goto LABEL_16;
                v20 = 0;
                break;
              }
            }
          }
          while ( v24 );
          *(_DWORD *)(v17 + 20) = v20;
          v29 = 0;
          v30 = g_ASMStanceNames_0;
LABEL_35:
          v31 = *v30;
          v32 = 0x7FFFFFFFi64;
          if ( v15 == (char *)-264i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v33 = v15 + 264 - v31;
          do
          {
            v34 = (unsigned __int8)v31[v33];
            v35 = v32;
            v36 = *(unsigned __int8 *)v31++;
            --v32;
            if ( !v35 )
              break;
            if ( v34 != v36 )
            {
              v37 = v34 + 32;
              if ( (unsigned int)(v34 - 65) > 0x19 )
                v37 = v34;
              v34 = v37;
              v38 = v36 + 32;
              if ( (unsigned int)(v36 - 65) > 0x19 )
                v38 = v36;
              if ( v34 != v38 )
              {
                ++v29;
                if ( (__int64)++v30 < (__int64)g_AIASMFlagNames )
                  goto LABEL_35;
                v29 = 0;
                break;
              }
            }
          }
          while ( v34 );
          *(_DWORD *)(v17 + 24) = v29;
          v7 = pASM;
          *(_DWORD *)(v17 + 28) = ASM_TranslateStateFlags(pASM->m_Mode, v15 + 344);
          *(_DWORD *)(v17 + 32) = *((_DWORD *)v15 + 126);
          v39 = *((int *)v15 + 207);
          *(_DWORD *)(v17 + 48) = v39;
          if ( (_DWORD)v39 )
          {
            v40 = 4 * v39;
            if ( !(4 * v39) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 43, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
              __debugbreak();
            v41 = 0;
            *(_QWORD *)(v17 + 40) = Mem_HunkDebug_Alloc(v40, "ASM_LoadAlloc");
            if ( *(int *)(v17 + 48) > 0 )
            {
              v42 = 0i64;
              v43 = v15 + 508;
              do
              {
                if ( v43 && *v43 )
                  v44 = SL_GetString(v43, 0);
                else
                  v44 = 0;
                ++v41;
                v43 += 80;
                *(_DWORD *)(v42 + *(_QWORD *)(v17 + 40)) = v44;
                v42 += 4i64;
              }
              while ( v41 < *(_DWORD *)(v17 + 48) );
            }
          }
          else
          {
            *(_QWORD *)(v17 + 40) = 0i64;
          }
          AI_ASM_TranslateFunction(pASM->m_Mode, (ASM_Function *)(v17 + 56), (ASMB_Function *)(v15 + 832), paramBuf, (scr_string_t)0, NULL);
          AI_ASM_TranslateFunction(pASM->m_Mode, (ASM_Function *)(v17 + 88), (ASMB_Function *)(v15 + 924), paramBuf, (scr_string_t)0, NULL);
          AI_ASM_TranslateFunction(pASM->m_Mode, (ASM_Function *)(v17 + 120), (ASMB_Function *)(v15 + 1016), paramBuf, (scr_string_t)0, NULL);
          AI_ASM_TranslateFunction(pASM->m_Mode, (ASM_Function *)(v17 + 152), (ASMB_Function *)(v15 + 1108), paramBuf, (scr_string_t)0, NULL);
          v45 = v15 + 1200;
          if ( v15 == (char *)-1200i64 || !*v45 )
            v46 = 0;
          else
            v46 = SL_GetString(v45, 0);
          v47 = v15 + 1280;
          *(_DWORD *)(v17 + 184) = v46;
          if ( v15 == (char *)-1280i64 || !*v47 )
            v48 = 0;
          else
            v48 = SL_GetString(v47, 0);
          *(_DWORD *)(v17 + 188) = v48;
          *(_DWORD *)(v17 + 192) = *((_DWORD *)v15 + 340);
          *(_DWORD *)(v17 + 196) = *((_DWORD *)v15 + 344);
          *(_QWORD *)(v17 + 200) = AI_ASM_TranslateFunctionParams(pASM->m_Mode, NULL, paramBuf, *((_DWORD *)v15 + 345), (int *)(v17 + 196), NULL, 0);
          *(_DWORD *)(v17 + 208) = *((_DWORD *)v15 + 346);
          *(_DWORD *)(v17 + 212) = *((_DWORD *)v15 + 350);
          *(_QWORD *)(v17 + 216) = AI_ASM_TranslateFunctionParams(pASM->m_Mode, NULL, paramBuf, *((_DWORD *)v15 + 351), (int *)(v17 + 212), NULL, 0);
          *(_DWORD *)(v17 + 224) = *((_DWORD *)v15 + 352);
          *(_DWORD *)(v17 + 228) = *((_DWORD *)v15 + 356);
          *(_QWORD *)(v17 + 232) = AI_ASM_TranslateFunctionParams(pASM->m_Mode, NULL, paramBuf, *((_DWORD *)v15 + 357), (int *)(v17 + 228), NULL, 0);
          m_Mode = pASM->m_Mode;
          if ( m_Mode )
          {
            if ( m_Mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 472, ASSERT_TYPE_ASSERT, "(pASM->m_Mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "pASM->m_Mode == ASM_MODE_PLAYER") )
              __debugbreak();
            v58 = Mem_HunkDebug_Alloc(0x40ui64, "ASM_LoadAlloc");
            *(_QWORD *)(v17 + 240) = v58;
            *v58 = 0i64;
            AI_ASM_TranslateFunction(pASM->m_Mode, *(ASM_Function **)(v17 + 240), (ASMB_Function *)(v15 + 1776), paramBuf, (scr_string_t)0, NULL);
            *(_DWORD *)(*(_QWORD *)(v17 + 240) + 32i64) = *((_DWORD *)v15 + 468);
            *(_DWORD *)(*(_QWORD *)(v17 + 240) + 36i64) = *((_DWORD *)v15 + 472);
            *(_QWORD *)(*(_QWORD *)(v17 + 240) + 40i64) = AI_ASM_TranslateFunctionParams(pASM->m_Mode, NULL, paramBuf, *((_DWORD *)v15 + 473), (int *)(*(_QWORD *)(v17 + 240) + 36i64), NULL, 0);
          }
          else
          {
            v50 = Mem_HunkDebug_Alloc(0x20ui64, "ASM_LoadAlloc");
            *(_QWORD *)(v17 + 240) = v50;
            *v50 = *((_DWORD *)v15 + 358);
            *(_DWORD *)(*(_QWORD *)(v17 + 240) + 4i64) = *((_DWORD *)v15 + 362);
            *(_QWORD *)(*(_QWORD *)(v17 + 240) + 8i64) = AI_ASM_TranslateFunctionParams(pASM->m_Mode, NULL, paramBuf, *((_DWORD *)v15 + 363), (int *)(*(_QWORD *)(v17 + 240) + 4i64), NULL, 0);
            v51 = v15 + 1456;
            if ( v15 == (char *)-1456i64 || !*v51 )
              v52 = 0;
            else
              v52 = SL_GetString(v51, 0);
            *(_DWORD *)(*(_QWORD *)(v17 + 240) + 16i64) = v52;
            v53 = v15 + 1536;
            if ( v15 == (char *)-1536i64 || !*v53 )
              v54 = 0;
            else
              v54 = SL_GetString(v53, 0);
            *(_DWORD *)(*(_QWORD *)(v17 + 240) + 20i64) = v54;
            v55 = v15 + 1616;
            if ( v15 == (char *)-1616i64 || !*v55 )
              v56 = 0;
            else
              v56 = SL_GetString(v55, 0);
            *(_DWORD *)(*(_QWORD *)(v17 + 240) + 24i64) = v56;
            v57 = v15 + 1696;
            if ( v15 == (char *)-1696i64 || !*v57 )
              *(_DWORD *)(*(_QWORD *)(v17 + 240) + 28i64) = 0;
            else
              *(_DWORD *)(*(_QWORD *)(v17 + 240) + 28i64) = SL_GetString(v57, 0);
          }
          v12 = Alloc;
          v14 = v60 + 1;
          v59 = ++buffer < pASM->m_NumStates;
          ++v60;
        }
        while ( v59 );
      }
    }
  }
  else
  {
    v7->m_States = NULL;
  }
}

/*
==============
ASM_ReadTransitions
==============
*/
void ASM_ReadTransitions(fileHandle_t file, ASM *pASM, char *paramBuf)
{
  char *v3; 
  __int64 v5; 
  unsigned __int64 v6; 
  char *v7; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  __int64 v11; 
  ASM_Mode m_Mode; 
  PlayerASM_ConditionMask *v13; 
  ASM_Function *v14; 
  char *v15; 
  __int64 v16; 
  int (__fastcall *BuiltinFunc)(const PlayerASM_Context *, const PlayerASM_Parameters *); 
  ASM_Function_Param *m_Params; 
  int m_NumParams; 
  char v20; 
  int i; 
  char *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  PlayerASM_ConditionMask *conditionMask; 
  __int64 v28; 
  int buffer; 
  ASM *v30; 
  __int64 v31; 
  char *v32; 
  char *v33; 
  char v34[80]; 

  v3 = paramBuf;
  v33 = paramBuf;
  v30 = pASM;
  FS_Read(&buffer, 4ui64, file);
  v5 = buffer;
  v6 = 108 * buffer;
  if ( !(108 * buffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 43, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  v32 = (char *)Mem_HunkDebug_Alloc(v6, "ASM_LoadAlloc");
  v7 = v32;
  FS_Read(v32, v6, file);
  v8 = v5;
  if ( !(48 * v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 43, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  v9 = (char *)Mem_HunkDebug_Alloc(48 * v5, "ASM_LoadAlloc");
  v10 = (__int64)v30;
  v31 = (__int64)v9;
  v11 = (__int64)v9;
  m_Mode = v30->m_Mode;
  if ( (int)v5 > 0 )
  {
    v13 = (PlayerASM_ConditionMask *)v34;
    v14 = (ASM_Function *)(v9 + 8);
    if ( m_Mode != ASM_MODE_PLAYER )
      v13 = NULL;
    v15 = v7 + 8;
    do
    {
      memset_0(v34, 0, sizeof(v34));
      *(_DWORD *)&v14[-1].padding[2] = *((_DWORD *)v15 - 1);
      v16 = *(_QWORD *)(v10 + 16) + 248i64 * *((int *)v15 - 2);
      AI_ASM_TranslateFunction(*(ASM_Mode *)(v10 + 64), v14, (ASMB_Function *)v15, v3, *(scr_string_t *)(v16 + 12), v13);
      if ( m_Mode == ASM_MODE_PLAYER && v34[1] && (*(_DWORD *)(v16 + 28) & 4) == 0 && v14->m_bBuiltin && v14->m_FuncID != -1 )
      {
        BuiltinFunc = PlayerASM_GetBuiltinFunc(v14->m_FuncID);
        if ( BuiltinFunc == PlayerASM_AnimationFinished )
          goto LABEL_28;
        if ( BuiltinFunc == PlayerASM_EventFired )
        {
          m_Params = v14->m_Params;
          m_NumParams = v14->m_NumParams;
          if ( !m_Params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 702, ASSERT_TYPE_ASSERT, "(pParams)", (const char *)&queryFormat, "pParams") )
            __debugbreak();
          if ( !m_NumParams )
          {
            LODWORD(v28) = 0;
            LODWORD(conditionMask) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 703, ASSERT_TYPE_ASSERT, "(unsigned)( iParam ) < (unsigned)( numParams )", "iParam doesn't index numParams\n\t%i not in [0, %i)", conditionMask, v28) )
              __debugbreak();
          }
          if ( m_Params->m_Type != ParamType_String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_builtin.h", 704, ASSERT_TYPE_ASSERT, "(pParams[iParam].m_Type == ParamType_String)", (const char *)&queryFormat, "pParams[iParam].m_Type == ParamType_String") )
            __debugbreak();
          if ( m_Params->u.m_Int == scr_const.end )
LABEL_28:
            *(_DWORD *)(v16 + 28) |= 2u;
        }
      }
      v3 = v33;
      v10 = (__int64)v30;
      v14[1].m_FuncID = *((_DWORD *)v15 + 23);
      v20 = v15[96];
      v15 += 108;
      v14->m_bNegate = v20;
      v14 = (ASM_Function *)((char *)v14 + 48);
      --v8;
    }
    while ( v8 );
    LODWORD(v5) = buffer;
    v7 = v32;
    v11 = v31;
  }
  for ( i = 0; i < (int)v5; v7 = v32 )
  {
    v22 = &v7[108 * i];
    v23 = *(int *)v22;
    v24 = *(_QWORD *)(v10 + 16) + 248 * v23;
    v25 = 0;
    *(_QWORD *)v24 = v11 + 48i64 * i;
    v26 = *(_DWORD *)(v24 + 8);
    if ( v26 > 0 )
    {
      do
      {
        if ( *(_DWORD *)v22 != (_DWORD)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 543, ASSERT_TYPE_ASSERT, "(pASMBTransitions[ iTransition + i ].m_FromStateID == fromStateID)", (const char *)&queryFormat, "pASMBTransitions[ iTransition + i ].m_FromStateID == fromStateID") )
          __debugbreak();
        v26 = *(_DWORD *)(v24 + 8);
        ++v25;
        v22 += 108;
      }
      while ( v25 < v26 );
      LODWORD(v5) = buffer;
      v11 = v31;
    }
    v10 = (__int64)v30;
    i += v26;
  }
}

/*
==============
ASM_TranslateStateFlags
==============
*/
__int64 ASM_TranslateStateFlags(ASM_Mode asmMode, const char *szflags)
{
  unsigned int v3; 
  const char **v4; 
  unsigned int v5; 
  char *i; 
  __int64 j; 
  char *v8; 
  __int64 v9; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  const char **v17; 
  char dest[256]; 

  Core_strcpy(dest, 0x100ui64, szflags);
  v3 = 0;
  if ( (unsigned int)asmMode >= ASM_MODE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_load_obj.cpp", 769, ASSERT_TYPE_ASSERT, "(unsigned)( asmMode ) < (unsigned)( ASM_MODE_COUNT )", "asmMode doesn't index ASM_MODE_COUNT\n\t%i not in [0, %i)", asmMode, 2) )
    __debugbreak();
  if ( asmMode )
  {
    if ( asmMode == ASM_MODE_PLAYER )
    {
      v4 = g_PlayerASMStateFlagNames;
      v5 = 3;
    }
    else
    {
      v5 = (unsigned int)v17;
      v4 = v17;
    }
  }
  else
  {
    v4 = g_AIASMFlagNames;
    v5 = 4;
  }
  for ( i = strtok(dest, "|"); i; i = strtok(NULL, "|") )
  {
    for ( j = 0i64; (unsigned int)j < v5; j = (unsigned int)(j + 1) )
    {
      v8 = (char *)v4[j];
      v9 = 0x7FFFFFFFi64;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v10 = i - v8;
      do
      {
        v11 = (unsigned __int8)v8[v10];
        v12 = v9;
        v13 = (unsigned __int8)*v8++;
        --v9;
        if ( !v12 )
          break;
        if ( v11 != v13 )
        {
          v14 = v11 + 32;
          if ( (unsigned int)(v11 - 65) > 0x19 )
            v14 = v11;
          v11 = v14;
          v15 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v15 = v13;
          if ( v11 != v15 )
            goto LABEL_24;
        }
      }
      while ( v11 );
      v3 |= 1 << j;
LABEL_24:
      ;
    }
  }
  return v3;
}

