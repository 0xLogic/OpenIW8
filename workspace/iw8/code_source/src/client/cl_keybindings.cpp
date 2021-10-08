/*
==============
CL_KeyBindings::GetKey
==============
*/

keyNum_t __fastcall CL_KeyBindings::GetKey(CL_KeyBindings *this, InputContext inputContext, Bind action, CL_KeyBindSlot slot)
{
  return ?GetKey@CL_KeyBindings@@QEBA?AW4keyNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@@Z(this, inputContext, action, slot);
}

/*
==============
CL_KeyBindings_Save
==============
*/

void __fastcall CL_KeyBindings_Save(int controllerIndex, const CL_KeyBindings *keyBindings, const char *fileName)
{
  ?CL_KeyBindings_Save@@YAXHAEBVCL_KeyBindings@@PEBD@Z(controllerIndex, keyBindings, fileName);
}

/*
==============
CL_KeyBindings::GetKeyBind
==============
*/

CL_KeyBind *__fastcall CL_KeyBindings::GetKeyBind(CL_KeyBindings *this, CL_KeyBind *result, InputContext inputContext, keyNum_t key)
{
  return ?GetKeyBind@CL_KeyBindings@@QEBA?AUCL_KeyBind@@W4InputContext@@W4keyNum_t@@@Z(this, result, inputContext, key);
}

/*
==============
CL_KeyBindings::SetAction
==============
*/

CL_KeyBindSlot __fastcall CL_KeyBindings::SetAction(CL_KeyBindings *this, InputContext inputContext, keyNum_t key, Bind action, CL_KeyBind *unbound)
{
  return ?SetAction@CL_KeyBindings@@QEAA?AW4CL_KeyBindSlot@@W4InputContext@@W4keyNum_t@@W4Bind@@AEAUCL_KeyBind@@@Z(this, inputContext, key, action, unbound);
}

/*
==============
CL_KeyBindings::SetKey
==============
*/

void __fastcall CL_KeyBindings::SetKey(CL_KeyBindings *this, InputContext inputContext, Bind action, CL_KeyBindSlot slot, keyNum_t key, CL_KeyBind *unbound)
{
  ?SetKey@CL_KeyBindings@@QEAAXW4InputContext@@W4Bind@@W4CL_KeyBindSlot@@W4keyNum_t@@AEAUCL_KeyBind@@@Z(this, inputContext, action, slot, key, unbound);
}

/*
==============
CL_KeyBindings_SetAnyUnusedKey
==============
*/

void __fastcall CL_KeyBindings_SetAnyUnusedKey(CL_KeyBindings *keyBindings, InputContext inputContext, Bind action, CL_KeyBindSlot slot)
{
  ?CL_KeyBindings_SetAnyUnusedKey@@YAXAEAVCL_KeyBindings@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@@Z(keyBindings, inputContext, action, slot);
}

/*
==============
CL_KeyBindings::IsLinked
==============
*/

bool __fastcall CL_KeyBindings::IsLinked(CL_KeyBindings *this, InputContext inputContext, Bind action, InputMethod inputMethod)
{
  return ?IsLinked@CL_KeyBindings@@QEBA_NW4InputContext@@W4Bind@@W4InputMethod@@@Z(this, inputContext, action, inputMethod);
}

/*
==============
CL_KeyBindings_Load
==============
*/

bool __fastcall CL_KeyBindings_Load(int controllerIndex, CL_KeyBindings *keyBindings, const char *fileName, EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext> *outLoadResult)
{
  return ?CL_KeyBindings_Load@@YA_NHAEAVCL_KeyBindings@@PEBDAEAV?$EnumIndexedArray@$$BY0PP@V?$EnumIndexedArray@UCL_KeyBindings_LoadResultData@@W4CL_KeyBindSlot@@@@W4InputContext@@@@@Z(controllerIndex, keyBindings, fileName, outLoadResult);
}

/*
==============
CL_Keybindings_Save_CleanupObject::~CL_Keybindings_Save_CleanupObject
==============
*/

void __fastcall CL_Keybindings_Save_CleanupObject::~CL_Keybindings_Save_CleanupObject(CL_Keybindings_Save_CleanupObject *this)
{
  ??1CL_Keybindings_Save_CleanupObject@@QEAA@XZ(this);
}

/*
==============
CL_Keybindings_Save_CleanupObject::~CL_Keybindings_Save_CleanupObject
==============
*/
void CL_Keybindings_Save_CleanupObject::~CL_Keybindings_Save_CleanupObject(CL_Keybindings_Save_CleanupObject *this)
{
  MemCard_CloseFile(this->m_handle, 1);
}

/*
==============
CL_KeyBindings_Load
==============
*/
char CL_KeyBindings_Load(int controllerIndex, CL_KeyBindings *keyBindings, const char *fileName, EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext> *outLoadResult)
{
  CL_KeyBindings *v4; 
  MemCardFileHandle *v5; 
  const char *v7; 
  char v8; 
  CL_KeyBind action; 
  char v10; 
  int v11; 
  int v12; 
  keyNum_t v13; 
  InputContext v14; 
  Bind v15; 
  const CL_KeyBindSlot *v16; 
  CL_KeyBindSlot v17; 
  Bind v18; 
  EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> (*v19)[255]; 
  CL_KeyBindings_LoadResultData *v20; 
  EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> (*v21)[255]; 
  const char *CommandForBinding; 
  const char *v23; 
  int key; 
  CL_KeyBind unbound; 
  const char *v26; 
  MemCardFileHandle file; 
  MemcardError v28; 
  EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext> *v29; 
  MemcardError error; 
  CL_KeyBindings *v31; 
  __int64 v32; 
  MemcardError *v33; 
  const char **v34; 
  MemCardFileHandle *p_file; 
  int data; 
  char v37; 

  v32 = -2i64;
  v29 = outLoadResult;
  v4 = keyBindings;
  v31 = keyBindings;
  v26 = fileName;
  v5 = MemCard_OpenFile((MemCardFileHandle *)fileName, NULL, MEMCARD_READ, (MemcardSizeHint)controllerIndex, key);
  file.handle = (__int64)v5;
  if ( !v5 )
  {
    Com_PrintError(10, "Key bindings file \"%s\" could not be opened for reading.\n", v26);
    return 0;
  }
  *(_QWORD *)&v28.isError = 0i64;
  v28.errorString = NULL;
  v33 = &v28;
  v34 = &v26;
  p_file = &file;
  v7 = v26;
  MemCard_ReadFile((MemCardFileHandle)v5, &data, 5ui64, &error);
  if ( error.isError )
    goto LABEL_6;
  if ( data != *(_DWORD *)MAGIC )
  {
    Com_PrintError(10, "Invalid key bindings file magic \"%s\".\n", v7);
    goto LABEL_6;
  }
  if ( v37 == 1 )
  {
    MemCard_ReadFile((MemCardFileHandle)v5, &unbound, 1ui64, &error);
    if ( error.isError )
      goto LABEL_6;
    action = (CL_KeyBind)(unsigned __int8)unbound.action;
    goto LABEL_17;
  }
  if ( (unsigned __int8)(v37 - 2) > 1u )
  {
    Com_PrintError(10, "Unknown key bindings file version in \"%s\".\n", v7);
    goto LABEL_6;
  }
  MemCard_ReadFile((MemCardFileHandle)v5, &unbound, 2ui64, &error);
  if ( !error.isError )
  {
    action = unbound;
LABEL_17:
    v10 = v37;
    if ( !v37 )
      goto LABEL_6;
    v11 = 0;
    v12 = (unsigned __int16)action;
    if ( !*(_WORD *)&action )
    {
LABEL_43:
      v8 = 1;
      goto LABEL_7;
    }
    while ( 1 )
    {
      MemCard_ReadFile(file, &data, 4ui64, &v28);
      if ( v28.isError )
        break;
      v13 = HIBYTE(data);
      if ( HIBYTE(data) == 35 )
        v13 = K_BACKSLASH;
      HIBYTE(data) = v13;
      v14 = (char)data;
      if ( (unsigned __int8)data < 0xFu )
      {
        v15 = BYTE1(data);
        if ( (unsigned __int8)(BYTE1(data) - 1) <= 0xFDu )
        {
          v16 = SLOTS;
          v17 = BYTE2(data);
          while ( *v16 != BYTE2(data) )
          {
            if ( ++v16 == (const CL_KeyBindSlot *)&unk_143D06BE2 )
              goto LABEL_42;
          }
          if ( v16 != (const CL_KeyBindSlot *)&unk_143D06BE2 && (unsigned __int8)v13 < (unsigned int)K_INHERIT )
          {
            if ( BYTE1(data) == 111 )
            {
              v15 = BIND_MELEE_ZOOM1;
              v14 = BYTE_POINTER;
            }
            else if ( ((BYTE1(data) + 121) & 0xFC) != 0 || BYTE1(data) == 0x89 )
            {
              if ( BYTE1(data) == 0x85 )
              {
                v15 = BIND_PING1;
              }
              else if ( BYTE1(data) == 0x86 && (unsigned __int8)v10 < 3u )
              {
                goto LABEL_42;
              }
            }
            else
            {
              v14 = FLOAT_POINTER;
            }
            unbound = (CL_KeyBind)512;
            CL_KeyBindings::SetKey(v4, v14, v15, SBYTE2(data), v13, &unbound);
            v18 = unbound.action;
            if ( unbound.action )
            {
              v19 = EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext>::operator[](v29, v14);
              v20 = EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot>::operator[](&(*v19)[(unsigned __int8)v18], unbound.slot);
              v20->unbound = 1;
              if ( v20->bound )
              {
                CommandForBinding = Com_Keys_GetCommandForBinding((unsigned __int8)v15);
                v23 = Com_Keys_GetCommandForBinding((unsigned __int8)v18);
                Com_PrintError(10, "Corrupted key bindings file \"%s\". Conflict between \"%s\" and \"%s\".\n", v26, v23, CommandForBinding);
                break;
              }
            }
            v21 = EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext>::operator[](v29, v14);
            *EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot>::operator[](&(*v21)[(unsigned __int8)v15], v17) = (CL_KeyBindings_LoadResultData)1;
            v4 = v31;
          }
        }
      }
LABEL_42:
      if ( ++v11 >= v12 )
        goto LABEL_43;
    }
  }
LABEL_6:
  v8 = 0;
LABEL_7:
  if ( v28.isError )
    Com_PrintError(10, "Error reading key bindings file \"%s\": %s.\n", v26, v28.errorString);
  MemCard_CloseFile(file, 1);
  return v8;
}

/*
==============
CL_KeyBindings_Save
==============
*/
void CL_KeyBindings_Save(int controllerIndex, const CL_KeyBindings *keyBindings, const char *fileName)
{
  MemCardFileHandle *v6; 
  MemCardFileHandle v7; 
  int v8; 
  int i; 
  int v10; 
  CL_KeyBindSlot *v11; 
  int j; 
  const CL_KeyBindSlot *v13; 
  __int64 v14; 
  char v15; 
  keyNum_t Key; 
  int v17; 
  char v18[4]; 
  __int64 v19; 
  MemCardFileHandle *v20; 
  int v21; 
  const char *v22; 
  int data; 
  char v24; 

  v19 = -2i64;
  v6 = MemCard_OpenFile((MemCardFileHandle *)fileName, (const char *)1, MEMCARD_READ, (MemcardSizeHint)controllerIndex, v17);
  v7.handle = (__int64)v6;
  if ( v6 )
  {
    v20 = v6;
    v21 = controllerIndex;
    v22 = fileName;
    data = *(_DWORD *)MAGIC;
    v24 = 3;
    MemCard_WriteFile((MemCardFileHandle)v6, &data, 5u);
    v8 = 0;
    LOWORD(v17) = 0;
    for ( i = 0; i < 15; ++i )
    {
      v10 = 1;
      while ( 2 )
      {
        v11 = (CL_KeyBindSlot *)SLOTS;
        do
        {
          if ( CL_KeyBindings::GetKey((CL_KeyBindings *)keyBindings, (InputContext)i, (Bind)v10, *v11) != K_INHERIT )
          {
            if ( (_WORD)v17 == 0xFFFF )
            {
              Com_PrintError(10, "Too many bindings for key bindings file \"%s\".\n", fileName);
              goto LABEL_20;
            }
            LOWORD(v17) = v17 + 1;
          }
          ++v11;
        }
        while ( v11 != (CL_KeyBindSlot *)&unk_143D06BE2 );
        if ( ++v10 < 255 )
          continue;
        break;
      }
    }
    MemCard_WriteFile(v7, &v17, 2u);
    do
    {
      for ( j = 1; j < 255; ++j )
      {
        v13 = SLOTS;
        v14 = 2i64;
        do
        {
          v15 = *v13;
          Key = CL_KeyBindings::GetKey((CL_KeyBindings *)keyBindings, (InputContext)v8, (Bind)j, *v13);
          if ( Key != K_INHERIT )
          {
            v18[0] = v8;
            v18[1] = j;
            v18[2] = v15;
            v18[3] = Key;
            MemCard_WriteFile(v7, v18, 4u);
          }
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      ++v8;
    }
    while ( v8 < 15 );
LABEL_20:
    MemCard_CloseFile(v7, 1);
  }
  else
  {
    Com_PrintError(10, "Key bindings file \"%s\" could not be opened for writing.\n", fileName);
  }
}

/*
==============
CL_KeyBindings_SetAnyUnusedKey
==============
*/
void CL_KeyBindings_SetAnyUnusedKey(CL_KeyBindings *keyBindings, InputContext inputContext, Bind action, CL_KeyBindSlot slot)
{
  __int64 Conflicting; 
  keyNum_t *v6; 
  keyNum_t v7; 
  __int64 v8; 
  __int64 v9; 
  bool v10; 
  CL_KeyBind *unbound; 
  __int64 v12; 
  CL_KeyBind v16; 
  int v17[25]; 
  char v18; 
  char v19; 
  InputContext conflictingContexts[15]; 

  v17[0] = 1684234849;
  v17[1] = 1751606885;
  v17[2] = 1818978921;
  v17[3] = 1886350957;
  v17[4] = 1953722993;
  v17[5] = 2021095029;
  v17[6] = -1970767239;
  v17[7] = 537725324;
  v17[8] = 774712359;
  v17[9] = 842084399;
  v17[10] = 909456435;
  v17[11] = -1992738761;
  v17[12] = 1027313035;
  v17[13] = 2136824923;
  v17[14] = -2071756159;
  v17[15] = -1803057531;
  v17[16] = -1734895979;
  v17[17] = -1667523943;
  v17[18] = -1600151907;
  v17[19] = -1532779871;
  v17[20] = -1414878811;
  v17[21] = -1347506772;
  v17[22] = -1280134736;
  v17[23] = -1212762700;
  v17[24] = -2135246408;
  v18 = 96;
  Conflicting = CL_InputContext_GetConflicting(inputContext, (InputContext (*)[15])conflictingContexts);
  v6 = (keyNum_t *)v17;
  v7 = K_A;
  while ( 2 )
  {
    v8 = 0i64;
    if ( Conflicting <= 0 )
    {
LABEL_17:
      v16 = (CL_KeyBind)512;
      CL_KeyBindings::SetKey(keyBindings, inputContext, action, slot, v7, &v16);
      if ( v16.action )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 521, ASSERT_TYPE_ASSERT, "(unbound.action == BIND_VOID)", (const char *)&queryFormat, "unbound.action == BIND_VOID") )
          __debugbreak();
      }
      return;
    }
    while ( 1 )
    {
      SLOBYTE(v9) = conflictingContexts[v8];
      if ( v7 )
      {
        if ( (unsigned __int8)v7 < (unsigned int)K_INHERIT )
          goto LABEL_9;
        LODWORD(v12) = 222;
        LODWORD(unbound) = (unsigned __int8)v7;
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( K_LAST_KEY )", "key doesn't index K_LAST_KEY\n\t%i not in [0, %i)", unbound, v12);
      }
      else
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 131, ASSERT_TYPE_ASSERT, "(key != K_NONE)", (const char *)&queryFormat, "key != K_NONE");
      }
      if ( v10 )
        __debugbreak();
LABEL_9:
      v9 = (unsigned __int8)v9;
      if ( (unsigned __int8)v9 >= 0xFu )
      {
        LODWORD(v12) = 15;
        LODWORD(unbound) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", unbound, v12) )
          __debugbreak();
      }
      if ( keyBindings->m_contextData.data[v9].keyBinds[(unsigned __int8)v7].action )
        break;
      if ( ++v8 >= Conflicting )
        goto LABEL_17;
    }
    if ( ++v6 != (keyNum_t *)&v19 )
    {
      v7 = *v6;
      continue;
    }
    break;
  }
}

/*
==============
CL_KeyBindings::GetKey
==============
*/
__int64 CL_KeyBindings::GetKey(CL_KeyBindings *this, InputContext inputContext, Bind action, CL_KeyBindSlot slot)
{
  __int64 v6; 
  bool v8; 
  char *v9; 
  __int64 v11; 
  __int64 v12; 

  LOBYTE(v6) = inputContext;
  if ( action )
  {
    if ( action != BIND_COUNT )
      goto LABEL_7;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( action ) < (unsigned)( BIND_COUNT )", "action doesn't index BIND_COUNT\n\t%i not in [0, %i)", 255, 255);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 117, ASSERT_TYPE_ASSERT, "(action != BIND_VOID)", (const char *)&queryFormat, "action != BIND_VOID");
  }
  if ( v8 )
    __debugbreak();
LABEL_7:
  v6 = (unsigned __int8)v6;
  if ( (unsigned __int8)v6 >= 0xFu )
  {
    LODWORD(v12) = 15;
    LODWORD(v11) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v9 = (char *)this + 806 * v6 + 403 * v6 + 2 * (unsigned __int8)action + (unsigned __int8)action;
  if ( (unsigned __int8)slot >= BYTE_VALUE )
  {
    LODWORD(v12) = 2;
    LODWORD(v11) = (unsigned __int8)slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return (unsigned __int8)v9[(unsigned __int8)slot];
}

/*
==============
CL_KeyBindings::GetKeyBind
==============
*/
CL_KeyBind *CL_KeyBindings::GetKeyBind(CL_KeyBindings *this, CL_KeyBind *result, InputContext inputContext, keyNum_t key)
{
  __int64 v5; 
  bool v8; 
  __int64 v10; 
  __int64 v11; 

  LOBYTE(v5) = inputContext;
  if ( key )
  {
    if ( (unsigned __int8)key < (unsigned int)K_INHERIT )
      goto LABEL_7;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( K_LAST_KEY )", "key doesn't index K_LAST_KEY\n\t%i not in [0, %i)", (unsigned __int8)key, 222);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 131, ASSERT_TYPE_ASSERT, "(key != K_NONE)", (const char *)&queryFormat, "key != K_NONE");
  }
  if ( v8 )
    __debugbreak();
LABEL_7:
  v5 = (unsigned __int8)v5;
  if ( (unsigned __int8)v5 >= 0xFu )
  {
    LODWORD(v11) = 15;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  *result = this->m_contextData.data[v5].keyBinds[(unsigned __int8)key];
  return result;
}

/*
==============
CL_KeyBindings::IsLinked
==============
*/
bool CL_KeyBindings::IsLinked(CL_KeyBindings *this, InputContext inputContext, Bind action, InputMethod inputMethod)
{
  unsigned __int8 v4; 
  __int64 v6; 
  bool v8; 
  __int64 v10; 
  __int64 v11; 

  v4 = inputMethod;
  LOBYTE(v6) = inputContext;
  if ( action )
  {
    if ( action != BIND_COUNT )
      goto LABEL_7;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( action ) < (unsigned)( BIND_COUNT )", "action doesn't index BIND_COUNT\n\t%i not in [0, %i)", 255, 255);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 124, ASSERT_TYPE_ASSERT, "(action != BIND_VOID)", (const char *)&queryFormat, "action != BIND_VOID");
  }
  if ( v8 )
    __debugbreak();
LABEL_7:
  v6 = (unsigned __int8)v6;
  if ( (unsigned __int8)v6 >= 0xFu )
  {
    LODWORD(v11) = 15;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return (v4 & this->m_contextData.data[0].actionData[0].inherit[806 * v6 + 403 * v6 + 2 * (unsigned __int8)action + (unsigned __int8)action]) != 0;
}

/*
==============
CL_KeyBindings::SetAction
==============
*/
__int64 CL_KeyBindings::SetAction(CL_KeyBindings *this, InputContext inputContext, keyNum_t key, Bind action, CL_KeyBind *unbound)
{
  __int64 v6; 
  bool IsGamepadKey; 
  CL_KeyBindings::ContextData *v10; 
  __int64 v11; 
  bool v12; 
  char *v13; 
  const CL_KeyBindSlot *v14; 
  CL_KeyBindSlot v15; 
  keyNum_t v16; 
  unsigned __int8 InputMethod; 
  Bind v18; 
  CL_KeyBindSlot slot; 
  char *v20; 
  char *v21; 
  CL_KeyBindSlot v22; 
  __int64 v24; 
  __int64 v25; 

  v6 = (unsigned __int8)inputContext;
  IsGamepadKey = KeyCodes_IsGamepadKey(key);
  if ( (unsigned int)v6 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 13, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", v6, 15) )
    __debugbreak();
  v10 = &this->m_contextData.data[v6];
  v11 = (__int64)v10 + 2 * (unsigned __int8)action + (unsigned __int8)action;
  if ( key == K_NONE || (v12 = (unsigned __int8)key < (unsigned int)K_INHERIT, key == K_INHERIT) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 63, ASSERT_TYPE_ASSERT, "(key != K_NONE && key != K_INHERIT)", (const char *)&queryFormat, "key != K_NONE && key != K_INHERIT") )
      __debugbreak();
    v12 = (unsigned __int8)key < (unsigned int)K_INHERIT;
  }
  if ( !v12 )
  {
    LODWORD(v25) = 222;
    LODWORD(v24) = (unsigned __int8)key;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( K_LAST_KEY )", "key doesn't index K_LAST_KEY\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v13 = (char *)v10 + 2 * (unsigned __int8)key;
  if ( v13[765] == action )
  {
    *unbound = (CL_KeyBind)512;
  }
  else
  {
    *unbound = *(CL_KeyBind *)(v13 + 765);
    v13[765] = action;
    if ( action )
    {
      if ( v13[766] == 2 && !IsGamepadKey )
      {
        v14 = SLOTS;
        while ( 1 )
        {
          v15 = *v14;
          v16 = EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot>::operator[]((EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot> *)v11, (CL_KeyBindSlot)*v14)->key;
          if ( v16 == K_NONE || v16 == K_INHERIT )
            break;
          if ( ++v14 == (const CL_KeyBindSlot *)&unk_143D06BE2 )
            goto LABEL_24;
        }
        v13[766] = v15;
      }
    }
    else
    {
      v13[766] = 2;
    }
LABEL_24:
    InputMethod = KeyCodes_GetInputMethod(key);
    v18 = unbound->action;
    if ( unbound->action )
    {
      slot = unbound->slot;
      v20 = (char *)v10 + 2 * (unsigned __int8)v18;
      v21 = &v20[(unsigned __int8)v18];
      if ( slot != BYTE_VALUE )
        EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot>::operator[]((EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot> *)&v20[(unsigned __int8)v18], slot)->key = K_NONE;
      if ( (InputMethod & (unsigned __int8)~v21[2]) != InputMethod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 100, ASSERT_TYPE_ASSERT, "(( ~r_unboundActionData.inherit & inputMethod ) == inputMethod)", (const char *)&queryFormat, "( ~r_unboundActionData.inherit & inputMethod ) == inputMethod") )
        __debugbreak();
    }
    if ( action )
    {
      v22 = v13[766];
      if ( v22 != BYTE_VALUE )
        EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot>::operator[]((EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot> *)v11, v22)->key = key;
      *(_BYTE *)(v11 + 2) &= ~InputMethod;
    }
  }
  return (unsigned __int8)v13[766];
}

/*
==============
CL_KeyBindings::SetKey
==============
*/
void CL_KeyBindings::SetKey(CL_KeyBindings *this, InputContext inputContext, Bind action, CL_KeyBindSlot slot, keyNum_t key, CL_KeyBind *unbound)
{
  __int64 v6; 
  CL_KeyBindings::ContextData *v10; 
  bool v11; 
  __int64 v12; 
  CL_KeyBindings::SlotData *v13; 
  keyNum_t v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v6 = (unsigned __int8)inputContext;
  if ( (unsigned __int8)inputContext >= (STRUCT_POINTER|FLOAT_POINTER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 13, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", (unsigned __int8)inputContext, 15) )
    __debugbreak();
  v10 = &this->m_contextData.data[v6];
  if ( action )
  {
    if ( action != BIND_COUNT )
      goto LABEL_10;
    LODWORD(v17) = 255;
    LODWORD(v16) = 255;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 23, ASSERT_TYPE_ASSERT, "(unsigned)( action ) < (unsigned)( BIND_COUNT )", "action doesn't index BIND_COUNT\n\t%i not in [0, %i)", v16, v17);
  }
  else
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 22, ASSERT_TYPE_ASSERT, "(action != BIND_VOID)", (const char *)&queryFormat, "action != BIND_VOID");
  }
  if ( v11 )
    __debugbreak();
LABEL_10:
  v12 = (__int64)v10 + 2 * (unsigned __int8)action + (unsigned __int8)action;
  v13 = EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot>::operator[]((EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot> *)v12, slot);
  v14 = v13->key;
  v13->key = key;
  if ( v14 && v14 != K_INHERIT )
    v10->keyBinds[(unsigned __int8)v14] = (CL_KeyBind)512;
  if ( key == K_INHERIT )
  {
    *(_BYTE *)(v12 + 2) |= KeyCodes_GetInputMethod(K_INHERIT);
  }
  else
  {
    if ( key )
    {
      if ( (unsigned __int8)key >= (unsigned int)K_INHERIT )
      {
        LODWORD(v17) = 222;
        LODWORD(v16) = (unsigned __int8)key;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keybindings.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( K_LAST_KEY )", "key doesn't index K_LAST_KEY\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v15 = (__int64)&v10->keyBinds[(unsigned __int8)key];
      *unbound = *(CL_KeyBind *)v15;
      *(_BYTE *)v15 = action;
      *(_BYTE *)(v15 + 1) = slot;
      if ( unbound->action )
        EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot>::operator[]((EnumIndexedArray<CL_KeyBindings::SlotData,enum CL_KeyBindSlot> *)((char *)v10 + 2 * (unsigned __int8)unbound->action + (unsigned __int8)unbound->action), unbound->slot)->key = K_NONE;
    }
    *(_BYTE *)(v12 + 2) &= ~(unsigned __int8)KeyCodes_GetInputMethod(key);
  }
}

