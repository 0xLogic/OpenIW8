/*
==============
SaveMemory_SaveWriteImmediateBufFlush
==============
*/

void __fastcall SaveMemory_SaveWriteImmediateBufFlush(SaveImmediate *save)
{
  ?SaveMemory_SaveWriteImmediateBufFlush@@YAXPEAUSaveImmediate@@@Z(save);
}

/*
==============
Scr_ConvertThreadToSave
==============
*/

unsigned int __fastcall Scr_ConvertThreadToSave(scrContext_t *scrContext, unsigned int handle)
{
  return ?Scr_ConvertThreadToSave@@YAIAEAUscrContext_t@@I@Z(scrContext, handle);
}

/*
==============
Scr_SavePre
==============
*/

void __fastcall Scr_SavePre(scrContext_t *scrContext, int scriptRunning)
{
  ?Scr_SavePre@@YAXAEAUscrContext_t@@H@Z(scrContext, scriptRunning);
}

/*
==============
SaveMemory_SaveWriteImmediate
==============
*/

void __fastcall SaveMemory_SaveWriteImmediate(const void *buffer, int len, SaveImmediate *save)
{
  ?SaveMemory_SaveWriteImmediate@@YAXPEBXHPEAUSaveImmediate@@@Z(buffer, len, save);
}

/*
==============
Scr_LoadSource
==============
*/

void __fastcall Scr_LoadSource(scrContext_t *scrContext, MemoryFile *memFile, MemCardFileHandle fileHandle, bool saveGameHasScriptSource)
{
  ?Scr_LoadSource@@YAXAEAUscrContext_t@@PEAUMemoryFile@@UMemCardFileHandle@@_N@Z(scrContext, memFile, fileHandle, saveGameHasScriptSource);
}

/*
==============
Scr_SavePost
==============
*/

void __fastcall Scr_SavePost(scrContext_t *scrContext, MemoryFile *memFile, int scriptRunning)
{
  ?Scr_SavePost@@YAXAEAUscrContext_t@@PEAUMemoryFile@@H@Z(scrContext, memFile, scriptRunning);
}

/*
==============
Scr_ReadString
==============
*/

scr_string_t __fastcall Scr_ReadString(MemoryFile *memFile)
{
  return ?Scr_ReadString@@YA?AW4scr_string_t@@PEAUMemoryFile@@@Z(memFile);
}

/*
==============
Scr_LoadShutdown
==============
*/

void __fastcall Scr_LoadShutdown(scrContext_t *scrContext, int scriptRunning, const ScrThreadMode scrThreadMode)
{
  ?Scr_LoadShutdown@@YAXAEAUscrContext_t@@HW4ScrThreadMode@@@Z(scrContext, scriptRunning, scrThreadMode);
}

/*
==============
Scr_ConvertObjectFromLoad
==============
*/

unsigned int __fastcall Scr_ConvertObjectFromLoad(scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_ConvertObjectFromLoad@@YAIAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_ConvertObjectToSave
==============
*/

unsigned int __fastcall Scr_ConvertObjectToSave(scrContext_t *scrContext, unsigned int id)
{
  return ?Scr_ConvertObjectToSave@@YAIAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
SaveMemory_SaveWriteFileImmediate
==============
*/

void __fastcall SaveMemory_SaveWriteFileImmediate(sysFileHandle_t file, int len, SaveImmediate *save)
{
  ?SaveMemory_SaveWriteFileImmediate@@YAXUsysFileHandle_t@@HPEAUSaveImmediate@@@Z(file, len, save);
}

/*
==============
Scr_ConvertThreadFromLoad
==============
*/

unsigned int __fastcall Scr_ConvertThreadFromLoad(scrContext_t *scrContext, unsigned int handle)
{
  return ?Scr_ConvertThreadFromLoad@@YAIAEAUscrContext_t@@I@Z(scrContext, handle);
}

/*
==============
Scr_SaveSourceImmediate
==============
*/

void __fastcall Scr_SaveSourceImmediate(const scrContext_t *scrContext, SaveImmediate *save)
{
  ?Scr_SaveSourceImmediate@@YAXAEBUscrContext_t@@PEAUSaveImmediate@@@Z(scrContext, save);
}

/*
==============
Scr_SaveShutdown
==============
*/

void __fastcall Scr_SaveShutdown(scrContext_t *scrContext, bool savegame, int scriptRunning)
{
  ?Scr_SaveShutdown@@YAXAEAUscrContext_t@@_NH@Z(scrContext, savegame, scriptRunning);
}

/*
==============
Scr_SaveSource
==============
*/

void __fastcall Scr_SaveSource(const scrContext_t *scrContext, MemoryFile *memFile)
{
  ?Scr_SaveSource@@YAXAEBUscrContext_t@@PEAUMemoryFile@@@Z(scrContext, memFile);
}

/*
==============
Scr_SkipSource
==============
*/

void __fastcall Scr_SkipSource(scrContext_t *scrContext, MemoryFile *memFile, MemCardFileHandle fileHandle, bool saveGameHasScriptSource)
{
  ?Scr_SkipSource@@YAXAEAUscrContext_t@@PEAUMemoryFile@@UMemCardFileHandle@@_N@Z(scrContext, memFile, fileHandle, saveGameHasScriptSource);
}

/*
==============
Scr_LoadPre
==============
*/

void __fastcall Scr_LoadPre(scrContext_t *scrContext, MemoryFile *memFile, int scriptRunning)
{
  ?Scr_LoadPre@@YAXAEAUscrContext_t@@PEAUMemoryFile@@H@Z(scrContext, memFile, scriptRunning);
}

/*
==============
Scr_SavePre2
==============
*/

void __fastcall Scr_SavePre2(scrContext_t *scrContext, int scriptRunning)
{
  ?Scr_SavePre2@@YAXAEAUscrContext_t@@H@Z(scrContext, scriptRunning);
}

/*
==============
AddSaveObject
==============
*/
void AddSaveObject(scrContext_t *scrContext, unsigned int parentId)
{
  unsigned int savecount; 
  unsigned int v3; 
  unsigned int *saveIdMap; 
  bool v6; 
  unsigned int *v7; 

  savecount = scrContext->m_varPub.savecount;
  v3 = savecount;
  if ( parentId )
  {
    saveIdMap = scrContext->m_varPub.saveIdMap;
    v6 = saveIdMap[parentId] == 0;
    v7 = &saveIdMap[parentId];
    v3 = savecount;
    if ( v6 )
    {
      scrContext->m_varPub.savecount = savecount + 1;
      *v7 = savecount + 1;
      scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = parentId;
      v3 = scrContext->m_varPub.savecount;
    }
  }
  if ( savecount < v3 )
  {
    do
      AddSaveObjectChildren(scrContext, scrContext->m_varPub.saveIdMapRev[++savecount]);
    while ( savecount < scrContext->m_varPub.savecount );
  }
}

/*
==============
AddSaveObjectChildren
==============
*/
void AddSaveObjectChildren(scrContext_t *scrContext, unsigned int parentId)
{
  ObjectVariableValue *v4; 
  unsigned __int8 type; 
  unsigned int i; 
  ChildVariableValue *v7; 
  int intValue; 
  unsigned int *v9; 
  ChildVariableValue::FreeListOrVariableUnion u; 
  unsigned int *saveIdMap; 
  unsigned int v12; 
  unsigned int *v13; 
  __int64 next; 
  unsigned int *v15; 
  VariableValue out; 

  v4 = &scrContext->m_varGlob.objectVariableValue[parentId];
  if ( !IsValidObject(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 788, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  type = v4->w.type;
  for ( i = FindLastSibling(scrContext, parentId); i; i = FindPrevSibling(scrContext, i) )
  {
    v7 = &scrContext->m_varGlob.childVariableValue[i];
    if ( !IsValidChild(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 796, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
      __debugbreak();
    if ( type == 24 )
    {
      if ( v7->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
        __debugbreak();
      Scr_GetArrayIndexValue_Out(((v7->k.match & 0x3FFF) << 10) + (*(_WORD *)&v7->tn >> 6), &out);
      if ( out.type == VAR_POINTER )
      {
        intValue = out.u.intValue;
        if ( out.u.intValue )
        {
          v9 = &scrContext->m_varPub.saveIdMap[out.u.uintValue];
          if ( !*v9 )
          {
            *v9 = ++scrContext->m_varPub.savecount;
            scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = intValue;
          }
        }
      }
    }
    u = v7->u;
    if ( (*(_BYTE *)&v7->tn & 0x3F) == 1 )
    {
      if ( u.f.prev )
      {
        saveIdMap = scrContext->m_varPub.saveIdMap;
        if ( !saveIdMap[u.f.prev] )
        {
          saveIdMap[u.f.prev] = ++scrContext->m_varPub.savecount;
          scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = u.f.prev;
        }
      }
    }
    else if ( (*(_BYTE *)&v7->tn & 0x3F) == 12 )
    {
      AddSaveStackInternal(scrContext, v7->u.u.stackValue);
    }
  }
  if ( type >= 0x11u )
  {
    if ( type > 0x13u )
    {
      if ( type == 20 )
      {
        v12 = v4->w.type >> 8;
        if ( v12 )
        {
          v13 = scrContext->m_varPub.saveIdMap;
          if ( !v13[v12] )
          {
            v13[v12] = ++scrContext->m_varPub.savecount;
            scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = v12;
          }
        }
      }
      else if ( type != 22 )
      {
        return;
      }
    }
    next = v4->u.f.next;
    if ( (_DWORD)next )
    {
      v15 = scrContext->m_varPub.saveIdMap;
      if ( !v15[next] )
      {
        v15[next] = ++scrContext->m_varPub.savecount;
        scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = next;
      }
    }
  }
}

/*
==============
AddSaveStackInternal
==============
*/
void AddSaveStackInternal(scrContext_t *scrContext, const VariableStackBuffer *stackBuf)
{
  __int64 localId; 
  unsigned int *v4; 
  unsigned __int16 size; 
  char *buf; 
  int v7; 
  const VariableStackBuffer *v8; 
  int v9; 
  unsigned int *v10; 

  localId = stackBuf->localId;
  if ( (_DWORD)localId )
  {
    v4 = &scrContext->m_varPub.saveIdMap[localId];
    if ( !*v4 )
    {
      *v4 = ++scrContext->m_varPub.savecount;
      scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = localId;
    }
  }
  size = stackBuf->size;
  buf = stackBuf->buf;
  while ( size )
  {
    v7 = (unsigned __int8)*buf;
    --size;
    v8 = *(const VariableStackBuffer **)(buf + 1);
    buf += 9;
    v9 = v7 - 1;
    if ( v9 )
    {
      if ( v9 == 11 )
        AddSaveStackInternal(scrContext, v8);
    }
    else if ( (_DWORD)v8 )
    {
      v10 = &scrContext->m_varPub.saveIdMap[(unsigned int)v8];
      if ( !*v10 )
      {
        *v10 = ++scrContext->m_varPub.savecount;
        scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = (unsigned int)v8;
      }
    }
  }
}

/*
==============
ReadProfileData
==============
*/
void ReadProfileData(scrContext_t *scrContext, MemoryFile *memFile)
{
  __int64 i; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int p; 
  unsigned int v14; 

  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (int)p > 0 )
  {
    for ( i = p; i; --i )
    {
      MemFile_ReadData(memFile, 1ui64, &p);
      if ( (unsigned __int8)p >> 3 )
      {
        v5 = scrContext->m_idHistory[((unsigned __int8)scrContext->m_idHistoryIndex + (unsigned __int8)((unsigned int)(((unsigned __int8)p >> 3) + 1) >> 1)) & 0xF] + (((unsigned __int8)p >> 3) & 1);
        if ( v5 >= scrContext->m_variableListParentSize )
        {
          LODWORD(v12) = (unsigned __int8)p;
          LODWORD(v11) = scrContext->m_idHistoryIndex;
          LODWORD(v10) = scrContext->m_variableListParentSize;
          LODWORD(v9) = scrContext->m_idHistory[((_BYTE)v11 + (unsigned __int8)((unsigned int)(((unsigned __int8)p >> 3) + 1) >> 1)) & 0xF] + (((unsigned __int8)p >> 3) & 1);
          v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 421, ASSERT_TYPE_ASSERT, "(index < scrContext.m_variableListParentSize)", "%s\n\tsaved script id %u does not index %u from history %u for opcode %u", "index < scrContext.m_variableListParentSize", v9, v10, v11, v12);
          goto LABEL_8;
        }
      }
      else
      {
        MemFile_ReadData(memFile, 4ui64, &v14);
        v5 = v14;
        if ( v14 >= scrContext->m_variableListParentSize )
        {
          LODWORD(v10) = scrContext->m_variableListParentSize;
          LODWORD(v9) = v14;
          v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 427, ASSERT_TYPE_ASSERT, "(index < scrContext.m_variableListParentSize)", "%s\n\tsaved script id %u does not index %u", "index < scrContext.m_variableListParentSize", v9, v10);
LABEL_8:
          if ( v6 )
            __debugbreak();
        }
      }
      if ( v5 )
      {
        v7 = v5;
        v8 = scrContext->m_varPub.saveIdMapRev[v7];
        if ( !v8 )
        {
          v8 = AllocObject(scrContext);
          scrContext->m_varPub.saveIdMapRev[v7] = v8;
        }
        AddRefToObject(scrContext, v8);
      }
      else
      {
        v8 = 0;
      }
      scrContext->m_idHistory[scrContext->m_idHistoryIndex] = v5;
      scrContext->m_idHistoryIndex = ((unsigned __int8)scrContext->m_idHistoryIndex - 1) & 0xF;
      RemoveRefToObject(scrContext, v8);
      MemFile_ReadData(memFile, 0x10ui64, &scrContext->m_profileScript.threadId[v8]);
    }
  }
}

/*
==============
SaveMemory_SaveWriteFileImmediate
==============
*/
void SaveMemory_SaveWriteFileImmediate(sysFileHandle_t file, int len, SaveImmediate *save)
{
  int v4; 
  __int64 bufOffset; 
  int v7; 
  int v8; 
  bool v9; 
  int v10; 
  __int64 v11; 

  v4 = len;
  if ( !len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2030, ASSERT_TYPE_ASSERT, "( len )", (const char *)&queryFormat, "len") )
    __debugbreak();
  bufOffset = save->bufOffset;
  v7 = v4;
  if ( 0x20000 - (int)bufOffset < v4 )
    v7 = 0x20000 - bufOffset;
  FS_FileRead(&save->buf[bufOffset], v7, file);
  v8 = v7 + save->bufOffset;
  save->bufOffset = v8;
  if ( v8 < 0x20000 )
  {
LABEL_17:
    if ( v4 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2041, ASSERT_TYPE_ASSERT, "( len == size )", (const char *)&queryFormat, "len == size") )
      __debugbreak();
  }
  else
  {
    v9 = v8 == 0x20000;
    while ( 1 )
    {
      if ( !v9 )
      {
        LODWORD(v11) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2045, ASSERT_TYPE_ASSERT, "( ( save->bufOffset == (128 * 1024) ) )", "%s\n\t( save->bufOffset ) = %i", "( save->bufOffset == (128 * 1024) )", v11) )
          __debugbreak();
      }
      v10 = save->bufOffset;
      v4 -= v7;
      if ( v10 )
      {
        MemCard_WriteFile(save->f, save->buf, v10);
        save->saveByteCount += v10;
        v10 = 0;
        save->bufOffset = 0;
      }
      if ( !v4 )
        break;
      v7 = v4;
      if ( 0x20000 - v10 < v4 )
        v7 = 0x20000 - v10;
      FS_FileRead(&save->buf[v10], v7, file);
      save->bufOffset += v7;
      v8 = save->bufOffset;
      v9 = v8 == 0x20000;
      if ( v8 < 0x20000 )
        goto LABEL_17;
    }
  }
}

/*
==============
SaveMemory_SaveWriteImmediate
==============
*/
void SaveMemory_SaveWriteImmediate(const void *buffer, int len, SaveImmediate *save)
{
  int v4; 
  int bufOffset; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 

  v4 = len;
  if ( !len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1985, ASSERT_TYPE_ASSERT, "( len )", (const char *)&queryFormat, "len") )
    __debugbreak();
  ProfLoad_Begin("SaveMemory_SaveWriteImmediate");
  while ( 1 )
  {
    bufOffset = save->bufOffset;
    if ( !bufOffset && v4 >= 0x20000 )
      goto LABEL_14;
    v7 = v4;
    if ( 0x20000 - bufOffset < v4 )
      v7 = 0x20000 - bufOffset;
    ProfLoad_Begin("memcpy");
    memcpy_0(&save->buf[save->bufOffset], buffer, v7);
    ProfLoad_End();
    save->bufOffset += v7;
    v8 = save->bufOffset;
    if ( v8 < 0x20000 )
      break;
    if ( v8 != 0x20000 )
    {
      LODWORD(v10) = save->bufOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2006, ASSERT_TYPE_ASSERT, "( ( save->bufOffset == (128 * 1024) ) )", "%s\n\t( save->bufOffset ) = %i", "( save->bufOffset == (128 * 1024) )", v10) )
        __debugbreak();
    }
    v4 -= v7;
    buffer = (char *)buffer + v7;
LABEL_14:
    ProfLoad_Begin("SaveMemory_SaveWriteImmediateBufFlush");
    v9 = save->bufOffset;
    if ( v9 )
    {
      MemCard_WriteFile(save->f, save->buf, v9);
      save->saveByteCount += v9;
      save->bufOffset = 0;
    }
    ProfLoad_End();
    if ( v4 >= 0x20000 )
    {
      ProfLoad_Begin("SaveMemory_SaveWriteImmediateFlush");
      MemCard_WriteFile(save->f, buffer, v4);
      save->saveByteCount += v4;
      ProfLoad_End();
      goto LABEL_23;
    }
    if ( !v4 )
      goto LABEL_23;
  }
  if ( v4 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2002, ASSERT_TYPE_ASSERT, "( len == size )", (const char *)&queryFormat, "len == size") )
    __debugbreak();
LABEL_23:
  ProfLoad_End();
}

/*
==============
SaveMemory_SaveWriteImmediateBufFlush
==============
*/
void SaveMemory_SaveWriteImmediateBufFlush(SaveImmediate *save)
{
  int bufOffset; 

  bufOffset = save->bufOffset;
  if ( bufOffset )
  {
    MemCard_WriteFile(save->f, save->buf, bufOffset);
    save->saveByteCount += bufOffset;
    save->bufOffset = 0;
  }
}

/*
==============
Scr_ConvertObjectFromLoad
==============
*/
__int64 Scr_ConvertObjectFromLoad(scrContext_t *scrContext, unsigned int index)
{
  __int64 v4; 
  unsigned int v5; 

  if ( !index )
    return 0i64;
  v4 = index;
  v5 = scrContext->m_varPub.saveIdMapRev[v4];
  if ( !v5 )
  {
    v5 = AllocObject(scrContext);
    scrContext->m_varPub.saveIdMapRev[v4] = v5;
  }
  AddRefToObject(scrContext, v5);
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v5];
  return v5;
}

/*
==============
Scr_ConvertObjectToSave
==============
*/
__int64 Scr_ConvertObjectToSave(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 

  v2 = id;
  if ( !id )
    return 0i64;
  AddSaveObject(scrContext, id);
  if ( !scrContext->m_varPub.saveIdMap[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1039, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.saveIdMap[id] )", (const char *)&queryFormat, "scrContext.m_varPub.saveIdMap[id]") )
    __debugbreak();
  return scrContext->m_varPub.saveIdMap[v2];
}

/*
==============
Scr_ConvertThreadFromLoad
==============
*/
__int64 Scr_ConvertThreadFromLoad(scrContext_t *scrContext, unsigned int handle)
{
  __int64 v4; 
  __int64 v5; 

  if ( !handle )
    return 0i64;
  v4 = handle;
  if ( !scrContext->m_varPub.saveIdMapRev[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1089, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.saveIdMapRev[handle] )", (const char *)&queryFormat, "scrContext.m_varPub.saveIdMapRev[handle]") )
    __debugbreak();
  v5 = scrContext->m_varPub.saveIdMapRev[v4];
  ++scrContext->m_varPub.ext_threadcount;
  AddRefToObject(scrContext, v5);
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v5];
  return (unsigned int)v5;
}

/*
==============
Scr_ConvertThreadToSave
==============
*/
__int64 Scr_ConvertThreadToSave(scrContext_t *scrContext, unsigned int handle)
{
  __int64 v2; 

  v2 = handle;
  if ( !handle )
    return 0i64;
  AddSaveObject(scrContext, handle);
  if ( !scrContext->m_varPub.saveIdMap[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1079, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.saveIdMap[handle] )", (const char *)&queryFormat, "scrContext.m_varPub.saveIdMap[handle]") )
    __debugbreak();
  return scrContext->m_varPub.saveIdMap[v2];
}

/*
==============
Scr_DoLoadEntity
==============
*/
void Scr_DoLoadEntity(scrContext_t *scrContext, unsigned int parentId, ObjectVariableValue *inOutParentValue, MemoryFile *memFile)
{
  unsigned int v5; 
  int v7; 
  scr_weapon_t v8; 
  unsigned int v9; 
  unsigned int entArrayId; 
  unsigned int NewArrayVariable; 
  VariableValue value; 
  unsigned int p; 

  v5 = inOutParentValue->w.type >> 8;
  if ( BYTE1(inOutParentValue->w.type) <= 7u )
    goto LABEL_21;
  switch ( (_BYTE)v5 )
  {
    case 8:
      MemFile_ReadData(memFile, 4ui64, &p);
      inOutParentValue->u.f.next = p;
      return;
    case 9:
LABEL_21:
      MemFile_ReadData(memFile, 2ui64, &p);
      inOutParentValue->u.f.next = (unsigned __int16)p;
      break;
    case 0xA:
      value.u.intValue = parentId;
      value.type = VAR_POINTER;
      v7 = GScr_Weapon_Load(scrContext, memFile);
      v8 = v7;
      if ( (v7 < 0 || (unsigned int)v7 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,enum scr_weapon_t>(enum scr_weapon_t)", "unsigned", (unsigned __int16)v7, "signed", v7) )
        __debugbreak();
      v9 = 0;
      for ( inOutParentValue->u.f.next = (unsigned __int16)v8; v9 < inOutParentValue->u.o.refCount; ++v9 )
        GScr_Weapon_AddReference(scrContext, v8);
      entArrayId = scrContext->m_varPub.m_classMap[10].entArrayId;
      if ( !entArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1128, ASSERT_TYPE_ASSERT, "( entArrayId )", (const char *)&queryFormat, "entArrayId") )
        __debugbreak();
      NewArrayVariable = GetNewArrayVariable(scrContext, entArrayId, inOutParentValue->u.f.next);
      if ( !NewArrayVariable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1131, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
        __debugbreak();
      SetNewVariableValue(scrContext, NewArrayVariable, &value);
      AddRefToValue(scrContext, (unsigned __int8)value.type, value.u);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1157, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", (unsigned __int8)v5) )
        __debugbreak();
      break;
  }
}

/*
==============
Scr_DoLoadEntryInternal
==============
*/
void Scr_DoLoadEntryInternal(scrContext_t *scrContext, VariableValue *value, MemoryFile *memFile)
{
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  scr_string_t String; 
  VariableType type; 
  bool v14; 
  __int16 m_scriptPos; 
  __int64 m_genericPos_low; 
  int v17; 
  ScriptCodePos *v18; 
  ScriptCodePos *v19; 
  VariableType *v20; 
  unsigned __int8 p; 
  char v22[7]; 
  ScriptCodePos v23; 
  VariableValue v; 

  _RDI = value;
  MemFile_ReadData(memFile, 1ui64, &p);
  v7 = p;
  if ( (p & 7) != 0 )
  {
    v8 = p;
    _RDI->type = VAR_POINTER;
    _RDI->u.intValue = Scr_ReadId(scrContext, memFile, v8);
  }
  else
  {
    v9 = p >> 3;
    _RDI->type = v9;
    switch ( (unsigned __int8)(v7 >> 3) )
    {
      case 0u:
      case 8u:
        return;
      case 2u:
      case 3u:
        String = Scr_ReadString(memFile);
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 65, ASSERT_TYPE_ASSERT, "( variable )", (const char *)&queryFormat, "variable") )
          __debugbreak();
        if ( (unsigned __int8)(_RDI->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 66, ASSERT_TYPE_ASSERT, "( variable->type == VAR_STRING || variable->type == VAR_ISTRING )", (const char *)&queryFormat, "variable->type == VAR_STRING || variable->type == VAR_ISTRING") )
          __debugbreak();
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
          __debugbreak();
        _RDI->u.intValue = String;
        break;
      case 4u:
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  [rsp+0A8h+v], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  [rsp+0A8h+v+4], xmm0 }
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm
        {
          vmovss  xmm1, [rsp+0A8h+v]
          vmovss  dword ptr [rsp+0A8h+var_60.___u0], xmm1
          vmovss  [rsp+0A8h+var_50], xmm0
        }
        if ( ((__int64)v23.m_scriptPos & 0x7F800000) == 2139095040 )
          goto LABEL_38;
        __asm
        {
          vmovss  xmm1, [rsp+0A8h+v+4]
          vmovss  dword ptr [rsp+0A8h+var_60.___u0], xmm1
        }
        if ( ((__int64)v23.m_scriptPos & 0x7F800000) == 2139095040 )
          goto LABEL_38;
        __asm { vmovss  dword ptr [rsp+0A8h+var_60.___u0], xmm0 }
        if ( ((__int64)v23.m_scriptPos & 0x7F800000) == 2139095040 )
        {
LABEL_38:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] )") )
            __debugbreak();
        }
        _RDI->u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(scrContext, (const float *)&v.u);
        break;
      case 5u:
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        __asm { vmovss  dword ptr [rdi], xmm0 }
        break;
      case 6u:
      case 0xAu:
      case 0xBu:
      case 0xDu:
        MemFile_ReadData(memFile, 4ui64, &v23);
        _RDI->u.intValue = (int)v23.m_scriptPos;
        break;
      case 7u:
      case 9u:
        v23.m_scriptPos = Scr_ReadCodepos(scrContext, memFile).m_scriptPos;
        _RDI->u = (VariableUnion)v23.m_scriptPos;
        if ( ScriptCodePos::IsEndPos(&v23) )
        {
          type = _RDI->type;
          if ( type == VAR_FUNCTION )
          {
            _RDI->type = VAR_UNDEFINED;
          }
          else if ( type != VAR_CODEPOS )
          {
            v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 713, ASSERT_TYPE_ASSERT, "( ( value->type == VAR_CODEPOS ) )", "%s\n\t( value->type ) = %i", "( value->type == VAR_CODEPOS )", (unsigned __int8)type);
            goto LABEL_34;
          }
        }
        break;
      case 0xCu:
        MemFile_ReadData(memFile, 2ui64, &v23);
        m_scriptPos = (__int16)v23.m_scriptPos;
        m_genericPos_low = LOWORD(v23.m_genericPos);
        v17 = (unsigned __int16)(8 * LOWORD(v23.m_scriptPos) + LOWORD(v23.m_scriptPos) + 17);
        if ( 9 * LOWORD(v23.m_genericPos) + 17 != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 492, ASSERT_TYPE_ASSERT, "( bufLen == (unsigned short)bufLen )", (const char *)&queryFormat, "bufLen == (unsigned short)bufLen") )
          __debugbreak();
        v18 = (ScriptCodePos *)MT_Alloc(9 * m_genericPos_low + 17, 1);
        ++scrContext->m_varPub.numScriptThreads;
        v19 = v18;
        LOWORD(v18[1].m_scriptPos) = m_scriptPos;
        WORD1(v18[1].m_genericPos) = v17;
        v18->m_scriptPos = Scr_ReadCodepos(scrContext, memFile).m_scriptPos;
        MemFile_ReadData(memFile, 1ui64, &p);
        HIDWORD(v19[1].m_genericPos) = Scr_ReadId(scrContext, memFile, p);
        MemFile_ReadData(memFile, 1ui64, v22);
        v20 = (VariableType *)&v19[2].m_scriptPos + 1;
        for ( LOBYTE(v19[2].m_scriptPos) = v22[0]; m_scriptPos; --m_scriptPos )
        {
          Scr_DoLoadEntryInternal(scrContext, &v, memFile);
          *v20 = v.type;
          v20 += 9;
          *((_QWORD *)v20 - 1) = v.u.scriptCodePosValue;
        }
        _RDI->u.scriptCodePosValue = (unsigned __int64)v19;
        break;
      default:
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 724, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unknown type %i", v9);
LABEL_34:
        if ( v14 )
          __debugbreak();
        break;
    }
  }
}

/*
==============
Scr_DoLoadObjectInfo
==============
*/
void Scr_DoLoadObjectInfo(scrContext_t *scrContext, unsigned int parentId, MemoryFile *memFile)
{
  ObjectVariableValue *objectVariableValue; 
  int v5; 
  __int64 v7; 
  ObjectVariableValue *v8; 
  unsigned int v9; 
  ObjectVariableValue::<unnamed_type_w> v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  bool v16; 
  int v17; 
  unsigned int Id; 
  const char *CString; 
  scr_string_t StringOfSize; 
  __int64 v21; 
  char type; 
  int v23; 
  int v24; 
  const char *v25; 
  __int64 v26; 
  ChildVariableValue *childVariableValue; 
  ChildVariableValue *v28; 
  unsigned int *p_next; 
  unsigned int i; 
  __int64 m_freeDebugCallStack; 
  DebugCallStackEntry2 *v32; 
  int v33; 
  int NewCodeOffset; 
  int v35; 
  unsigned __int8 v36; 
  unsigned __int8 v37; 
  char v38[2]; 
  unsigned __int16 v39; 
  __int16 v40[2]; 
  int v41; 
  int v42; 
  __int64 v43; 
  VariableValue out; 
  VariableValue value; 
  unsigned int p; 
  unsigned int v47; 
  DebugCallStackEntry *v48; 

  v47 = parentId;
  objectVariableValue = scrContext->m_varGlob.objectVariableValue;
  v5 = parentId;
  v7 = parentId;
  v43 = parentId;
  v8 = &objectVariableValue[parentId];
  if ( !IsValidObject(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1177, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  v9 = (unsigned __int8)p;
  v10.type = (unsigned int)v8->w;
  switch ( p & 7 )
  {
    case 1u:
      v12 = v10.type & 0xFFFFFF00 | 0x11;
      goto LABEL_44;
    case 2u:
      v8->w.type = v10.type & 0xFFFFFF00 | 0x12;
      Id = Scr_ReadId(scrContext, memFile, v9);
      v16 = (v8->w.type & 0xFFFFFF00) == 0;
      v8->u.f.next = Id;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1192, ASSERT_TYPE_ASSERT, "( !(parentValue->w.notifyName & VAR_NAME_HIGH_MASK) )", (const char *)&queryFormat, "!(parentValue->w.notifyName & VAR_NAME_HIGH_MASK)") )
        __debugbreak();
      CString = MemFile_ReadCString(memFile);
      if ( CString )
      {
        v21 = -1i64;
        do
          v16 = CString[++v21] == 0;
        while ( !v16 );
        StringOfSize = j_SL_GetStringOfSize(CString, 0, (unsigned int)(v21 + 1), 17);
      }
      else
      {
        StringOfSize = 0;
      }
      if ( (StringOfSize & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 158, ASSERT_TYPE_ASSERT, "( !( (unsigned)name & VAR_NAME_TEST_MASK ) )", (const char *)&queryFormat, "!( (unsigned)name & VAR_NAME_TEST_MASK )") )
        __debugbreak();
      v8->w.type = (StringOfSize << 8) | 0x12;
      v5 = v47;
      break;
    case 3u:
      v8->w.type = v10.type & 0xFFFFFF00 | 0x13;
      v15 = Scr_ReadId(scrContext, memFile, v9);
      v16 = (v8->w.type & 0xFFFFFF00) == 0;
      v8->u.f.next = v15;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1200, ASSERT_TYPE_ASSERT, "( !(parentValue->w.waitTime & VAR_NAME_HIGH_MASK) )", (const char *)&queryFormat, "!(parentValue->w.waitTime & VAR_NAME_HIGH_MASK)") )
        __debugbreak();
      v41 = 0;
      MemFile_ReadData(memFile, 3ui64, &v41);
      v17 = v41;
      if ( (v41 & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 172, ASSERT_TYPE_ASSERT, "( !( ( unsigned ) waitTime & VAR_NAME_TEST_MASK ) )", (const char *)&queryFormat, "!( ( unsigned ) waitTime & VAR_NAME_TEST_MASK )") )
        __debugbreak();
      v8->w.type = (v17 << 8) | 0x13;
      v5 = v47;
      break;
    case 4u:
      v8->w.type = v10.type & 0xFFFFFF00 | 0x14;
      v8->u.f.next = Scr_ReadId(scrContext, memFile, v9);
      MemFile_ReadData(memFile, 1ui64, &p);
      v13 = (unsigned __int8)p;
      if ( (v8->w.type & 0xFFFFFF00) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1211, ASSERT_TYPE_ASSERT, "( !(parentValue->w.parentLocalId & VAR_NAME_HIGH_MASK) )", (const char *)&queryFormat, "!(parentValue->w.parentLocalId & VAR_NAME_HIGH_MASK)") )
        __debugbreak();
      v14 = Scr_ReadId(scrContext, memFile, v13);
      if ( (v14 & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 186, ASSERT_TYPE_ASSERT, "( !( ( unsigned ) parentLocalId & VAR_NAME_TEST_MASK ) )", (const char *)&queryFormat, "!( ( unsigned ) parentLocalId & VAR_NAME_TEST_MASK )") )
        __debugbreak();
      v8->w.type = (v14 << 8) | 0x14;
      v5 = v47;
      break;
    case 5u:
      v12 = v10.type & 0xFFFFFF00 | 0x16;
LABEL_44:
      v8->w.type = v12;
      v8->u.f.next = Scr_ReadId(scrContext, memFile, v9);
      break;
    default:
      v11 = ((unsigned __int8)p >> 3) | v10.type & 0xFFFFFF00;
      v8->w.type = v11;
      if ( (_BYTE)v11 == 23 )
      {
        if ( (v11 & 0xFFFFFF00) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1224, ASSERT_TYPE_ASSERT, "( !(parentValue->w.entInfo & VAR_NAME_HIGH_MASK) )", (const char *)&queryFormat, "!(parentValue->w.entInfo & VAR_NAME_HIGH_MASK)") )
          __debugbreak();
        MemFile_ReadData(memFile, 2ui64, &p);
        v8->w.type |= (__int16)p << 8;
        Scr_DoLoadEntity(scrContext, v5, v8, memFile);
      }
      else if ( (_BYTE)v11 == 24 )
      {
        v8->u.f.next = 0;
      }
      break;
  }
  type = v8->w.type;
  MemFile_ReadData(memFile, 2ui64, &v39);
  v23 = 0;
  if ( v39 )
  {
    do
    {
      Scr_DoLoadEntryInternal(scrContext, &value, memFile);
      if ( type == 24 )
      {
        MemFile_ReadData(memFile, 1ui64, &v37);
        switch ( v37 & 7 )
        {
          case 0:
            v24 = 0x800000;
            break;
          case 1:
            MemFile_ReadData(memFile, 1ui64, v38);
            v24 = v38[0] + 0x800000;
            break;
          case 2:
            MemFile_ReadData(memFile, 2ui64, v40);
            v24 = v40[0] + 0x800000;
            break;
          case 3:
            MemFile_ReadData(memFile, 4ui64, &v42);
            v24 = v42 + 0x800000;
            break;
          case 4:
            v25 = MemFile_ReadCString(memFile);
            if ( !v25 )
              goto LABEL_60;
            v26 = -1i64;
            do
              v16 = v25[++v26] == 0;
            while ( !v16 );
            v24 = j_SL_GetStringOfSize(v25, 0, (unsigned int)(v26 + 1), 17);
            break;
          case 5:
            v24 = Scr_ReadId(scrContext, memFile, v37) + 0x80000;
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 770, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad case") )
              __debugbreak();
LABEL_60:
            v24 = 0;
            break;
        }
      }
      else
      {
        MemFile_ReadData(memFile, 1ui64, &v36);
        MemFile_ReadData(memFile, 1ui64, &v48);
        MemFile_ReadData(memFile, 1ui64, &p);
        v24 = v36 | (((unsigned __int8)v48 | ((unsigned __int8)p << 8)) << 8);
      }
      childVariableValue = scrContext->m_varGlob.childVariableValue;
      v28 = &childVariableValue[GetVariable(scrContext, v5, v24)];
      if ( type == 24 )
      {
        Scr_GetArrayIndexValue_Out(v24, &out);
        RemoveRefToValue(scrContext, (unsigned __int8)out.type, out.u);
      }
      if ( (*(_BYTE *)&v28->tn & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1251, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_UNDEFINED )", (const char *)&queryFormat, "entryValue->GetType() == VAR_UNDEFINED") )
        __debugbreak();
      *(_WORD *)&v28->tn &= 0xFFC0u;
      ++v23;
      *(_WORD *)&v28->tn |= value.type & 0x3F;
      v28->u.u.scriptCodePosValue = value.u.scriptCodePosValue;
      v5 = v47;
    }
    while ( v23 < v39 );
    v7 = v43;
  }
  if ( scrContext->m_varPub.developer )
  {
    if ( scrContext->m_debuggerGlob.m_debugCallStack[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1265, ASSERT_TYPE_ASSERT, "(!scrContext.m_debuggerGlob.m_debugCallStack[parentId])", (const char *)&queryFormat, "!scrContext.m_debuggerGlob.m_debugCallStack[parentId]") )
      __debugbreak();
    p_next = &scrContext->m_debuggerGlob.m_debugCallStack[v7];
    MemFile_ReadData(memFile, 1ui64, &v47);
    for ( i = (unsigned __int8)v47; (_BYTE)v47; i = (unsigned __int8)v47 )
    {
      if ( i == 1 )
        break;
      m_freeDebugCallStack = scrContext->m_debuggerGlob.m_freeDebugCallStack;
      if ( !(_DWORD)m_freeDebugCallStack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1278, ASSERT_TYPE_ASSERT, "(entryIndex)", (const char *)&queryFormat, "entryIndex") )
        __debugbreak();
      v32 = &scrContext->m_debuggerGlob.m_debugCallStackEntry2[m_freeDebugCallStack];
      scrContext->m_debuggerGlob.m_freeDebugCallStack = v32->next;
      v48 = &scrContext->m_debuggerGlob.m_debugCallStackEntry[m_freeDebugCallStack];
      MemFile_ReadData(memFile, 4ui64, &p);
      v33 = p;
      if ( p != -1 )
      {
        NewCodeOffset = p >> 1;
        v35 = p & 1;
        if ( scrContext->m_parserPub.useCodeOffsetMap && (NewCodeOffset = Scr_GetNewCodeOffset(scrContext, NewCodeOffset), NewCodeOffset < 0) )
        {
          v33 = -1;
        }
        else
        {
          if ( !Scr_IsInOpcodeMemory(scrContext, &scrContext->m_varPub.programBuffer[NewCodeOffset]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 342, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, scrContext.m_varPub.programBuffer + offset ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, scrContext.m_varPub.programBuffer + offset )") )
            __debugbreak();
          v33 = v35 | (2 * NewCodeOffset);
        }
      }
      v48->codeOffset = v33;
      v32->next = 0;
      *p_next = m_freeDebugCallStack;
      p_next = &v32->next;
      MemFile_ReadData(memFile, 1ui64, &v47);
    }
    *p_next = i;
  }
}

/*
==============
Scr_LoadPre
==============
*/
void Scr_LoadPre(scrContext_t *scrContext, MemoryFile *memFile, int scriptRunning)
{
  char v9; 
  char v10; 
  unsigned int *saveIdMapRev; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int Id; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int *p_entArrayId; 
  __int64 v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  VariableValue value; 
  unsigned int p; 

  _RBX = scrContext;
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    MT_Reset();
  Scr_FixupFreeLists(_RBX);
  if ( ScriptCodePos::GetVarUsagePos(&_RBX->m_varPub.varUsagePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1715, ASSERT_TYPE_ASSERT, "( !pScrVarPub->varUsagePos.GetVarUsagePos() )", (const char *)&queryFormat, "!pScrVarPub->varUsagePos.GetVarUsagePos()") )
    __debugbreak();
  ScriptCodePos::SetVarUsagePos(&_RBX->m_varPub.varUsagePos, "<save game variable>");
  memset_0(_RBX->m_profileScript.threadId, 0, 16i64 * _RBX->m_variableListParentSize);
  if ( scriptRunning )
  {
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovss  dword ptr [rbx+5D7Ch], xmm0
    }
    if ( v9 | v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1726, ASSERT_TYPE_ASSERT, "( pScrVarPub->framerate > 0.0f )", (const char *)&queryFormat, "pScrVarPub->framerate > 0.0f") )
      __debugbreak();
    MemFile_ReadData(memFile, 4ui64, &p);
    _RBX->m_varPub.time = p;
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->m_varPub.savecount = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  saveIdMapRev = _RBX->m_varPub.saveIdMapRev;
  _RBX->m_varPub.savecountMark = p;
  memset_0(saveIdMapRev, 0, 4i64 * _RBX->m_variableListParentSize);
  v12 = 1;
  *(_QWORD *)_RBX->m_idHistory = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[2] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[4] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[6] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[8] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[10] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[12] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[14] = 0i64;
  for ( _RBX->m_idHistoryIndex = 0; v12 <= _RBX->m_varPub.savecount; ++v12 )
  {
    v13 = _RBX->m_varPub.saveIdMapRev[v12];
    if ( !v13 )
    {
      v13 = AllocObject(_RBX);
      _RBX->m_varPub.saveIdMapRev[v12] = v13;
    }
    Scr_DoLoadObjectInfo(_RBX, v13, memFile);
  }
  if ( _RBX->m_varPub.gameId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1519, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.gameId )", (const char *)&queryFormat, "!scrContext.m_varPub.gameId") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( (_BYTE)p )
  {
    _RBX->m_varPub.gameId = AllocValue(_RBX);
    Scr_DoLoadEntryInternal(_RBX, &value, memFile);
    v14 = (__int64)&_RBX->m_varGlob.childVariableValue[_RBX->m_varPub.gameId];
    *(_WORD *)(v14 + 12) &= 0xFFC0u;
    *(_WORD *)(v14 + 12) |= value.type & 0x3F;
    _RBX->m_varGlob.childVariableValue[_RBX->m_varPub.gameId].u.u.scriptCodePosValue = value.u.scriptCodePosValue;
  }
  if ( scriptRunning )
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    v15 = (unsigned __int8)p;
    if ( _RBX->m_varPub.levelId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1757, ASSERT_TYPE_ASSERT, "( !pScrVarPub->levelId )", (const char *)&queryFormat, "!pScrVarPub->levelId") )
      __debugbreak();
    Id = Scr_ReadId(_RBX, memFile, v15);
    _RBX->m_varPub.levelId = Id;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[Id];
    MemFile_ReadData(memFile, 1ui64, &p);
    v17 = (unsigned __int8)p;
    if ( _RBX->m_varPub.animId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1765, ASSERT_TYPE_ASSERT, "( !pScrVarPub->animId )", (const char *)&queryFormat, "!pScrVarPub->animId") )
      __debugbreak();
    v18 = Scr_ReadId(_RBX, memFile, v17);
    _RBX->m_varPub.animId = v18;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[v18];
    MemFile_ReadData(memFile, 1ui64, &p);
    v19 = (unsigned __int8)p;
    if ( _RBX->m_varPub.freeEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1773, ASSERT_TYPE_ASSERT, "( !pScrVarPub->freeEntList )", (const char *)&queryFormat, "!pScrVarPub->freeEntList") )
      __debugbreak();
    v20 = Scr_ReadId(_RBX, memFile, v19);
    _RBX->m_varPub.freeEntList = v20;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[v20];
    p_entArrayId = &_RBX->m_varPub.m_classMap[0].entArrayId;
    v22 = 10i64;
    do
    {
      if ( *p_entArrayId )
      {
        if ( GetArraySize(_RBX, *p_entArrayId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1784, ASSERT_TYPE_ASSERT, "( !GetArraySize( scrContext, scrContext.m_varPub.m_classMap[classnum].entArrayId ) )", (const char *)&queryFormat, "!GetArraySize( scrContext, scrContext.m_varPub.m_classMap[classnum].entArrayId )") )
          __debugbreak();
        if ( _RBX->m_varDebugPub.m_Inited )
          --_RBX->m_varDebugPub.extRefCount[*p_entArrayId];
        RemoveRefToObject(_RBX, *p_entArrayId);
        MemFile_ReadData(memFile, 1ui64, &p);
        v23 = Scr_ReadId(_RBX, memFile, (unsigned __int8)p);
        *p_entArrayId = v23;
        if ( _RBX->m_varDebugPub.m_Inited )
          ++_RBX->m_varDebugPub.extRefCount[v23];
      }
      p_entArrayId += 6;
      --v22;
    }
    while ( v22 );
    MemFile_ReadData(memFile, 1ui64, &p);
    v24 = (unsigned __int8)p;
    if ( _RBX->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1804, ASSERT_TYPE_ASSERT, "( !pScrVarPub->timeArrayId )", (const char *)&queryFormat, "!pScrVarPub->timeArrayId") )
      __debugbreak();
    v25 = Scr_ReadId(_RBX, memFile, v24);
    _RBX->m_varPub.timeArrayId = v25;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[v25];
    MemFile_ReadData(memFile, 1ui64, &p);
    v26 = (unsigned __int8)p;
    if ( _RBX->m_varPub.pauseArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1812, ASSERT_TYPE_ASSERT, "( !pScrVarPub->pauseArrayId )", (const char *)&queryFormat, "!pScrVarPub->pauseArrayId") )
      __debugbreak();
    v27 = Scr_ReadId(_RBX, memFile, v26);
    _RBX->m_varPub.pauseArrayId = v27;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[v27];
    MemFile_ReadData(memFile, 1ui64, &p);
    v28 = (unsigned __int8)p;
    if ( _RBX->m_varPub.notifyArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1820, ASSERT_TYPE_ASSERT, "( !pScrVarPub->notifyArrayId )", (const char *)&queryFormat, "!pScrVarPub->notifyArrayId") )
      __debugbreak();
    v29 = Scr_ReadId(_RBX, memFile, v28);
    _RBX->m_varPub.notifyArrayId = v29;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[v29];
    MemFile_ReadData(memFile, 1ui64, &p);
    v30 = (unsigned __int8)p;
    if ( _RBX->m_varPub.objectStackId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1828, ASSERT_TYPE_ASSERT, "( !pScrVarPub->objectStackId )", (const char *)&queryFormat, "!pScrVarPub->objectStackId") )
      __debugbreak();
    v31 = Scr_ReadId(_RBX, memFile, v30);
    _RBX->m_varPub.objectStackId = v31;
    if ( _RBX->m_varDebugPub.m_Inited )
      ++_RBX->m_varDebugPub.extRefCount[v31];
    ReadProfileData(_RBX, memFile);
  }
}

/*
==============
Scr_LoadShutdown
==============
*/
void Scr_LoadShutdown(scrContext_t *scrContext, int scriptRunning, const ScrThreadMode scrThreadMode)
{
  unsigned int i; 
  unsigned int m_variableListChildSize; 
  __int64 v8; 
  __int64 v9; 
  ChildVariableValue *childVariableValue; 

  for ( i = 1; i <= scrContext->m_varPub.savecount; ++i )
    RemoveRefToObject(scrContext, scrContext->m_varPub.saveIdMapRev[i]);
  if ( scriptRunning )
  {
    if ( scrContext->m_varPub.developer )
    {
      if ( scrContext->m_parserPub.useCodeOffsetMap )
      {
        m_variableListChildSize = scrContext->m_variableListChildSize;
        if ( m_variableListChildSize )
        {
          v8 = 0i64;
          v9 = m_variableListChildSize;
          do
          {
            childVariableValue = scrContext->m_varGlob.childVariableValue;
            if ( (*(_BYTE *)&childVariableValue[v8].tn & 0x3F) == 12 )
              Scr_FixLocalVariables(scrContext, childVariableValue[v8].u.u.stackValue);
            ++v8;
            --v9;
          }
          while ( v9 );
        }
      }
    }
    Scr_InitDebuggerSystem(scrContext, scrThreadMode);
  }
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, NULL);
  if ( scriptRunning )
    Scr_Variable_CheckReferences(scrContext);
  MT_Reset();
}

/*
==============
Scr_LoadSource
==============
*/
void Scr_LoadSource(scrContext_t *scrContext, MemoryFile *memFile, MemCardFileHandle fileHandle, bool saveGameHasScriptSource)
{
  MemOwnershipType v8; 
  MemOwnershipType v9; 
  signed int v10; 
  __int64 v11; 
  __int64 v12; 
  SaveSourceBufferInfo *v13; 
  char *v14; 
  __int64 v15; 
  bool v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  unsigned int buffer[13]; 
  int v21; 

  if ( scrContext->m_parserGlob.saveSourceBufferLookup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2387, ASSERT_TYPE_ASSERT, "( !pScrParserGlob->saveSourceBufferLookup )", (const char *)&queryFormat, "!pScrParserGlob->saveSourceBufferLookup") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &scrContext->m_varPub.developer);
  MemFile_ReadData(memFile, 1ui64, &scrContext->m_varPub.developer_script);
  if ( scrContext->m_varPub.developer && saveGameHasScriptSource )
  {
    LOBYTE(v8) = 2;
    Mem_Ownership_AllocAcquire(v8);
    if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
      Scr_SkipCanonicalStrings(fileHandle);
    ReadFromDevice(buffer, 4ui64, fileHandle);
    ReadFromDevice(NULL, 16i64 * buffer[0], fileHandle);
    ReadFromDevice(&scrContext->m_parserGlob.saveSourceBufferLookupLen, 4ui64, fileHandle);
    scrContext->m_parserGlob.saveSourceBufferLookup = (SaveSourceBufferInfo *)Scr_Mem_DebugAlloc(scrContext, 24i64 * scrContext->m_parserGlob.saveSourceBufferLookupLen, "Scr_LoadSource");
    v10 = scrContext->m_parserGlob.saveSourceBufferLookupLen - 1;
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = v10;
      do
      {
        v13 = &scrContext->m_parserGlob.saveSourceBufferLookup[v12];
        ReadFromDevice(&v21, 4ui64, fileHandle);
        if ( v21 >= 0 )
        {
          ReadFromDevice(&v19, 4ui64, fileHandle);
          v14 = (char *)Scr_Mem_DebugAlloc(scrContext, v21 + 1, "Scr_LoadSource");
          v13->buf = v14;
          ReadFromDevice(v14, v21, fileHandle);
          v13->buf[v21] = 0;
          v15 = -1i64;
          do
            ++v15;
          while ( v13->buf[v15] );
          if ( v19 != (_DWORD)v15 + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2431, ASSERT_TYPE_ASSERT, "( nameLen == (int)I_strlen( saveSourceBuffer->buf ) + 1 )", (const char *)&queryFormat, "nameLen == (int)I_strlen( saveSourceBuffer->buf ) + 1") )
            __debugbreak();
          v13->sourceBuf = &v13->buf[v19];
          v16 = v21 - v19 < 0;
          v17 = v21 - v19;
          v13->len = v21 - v19;
          if ( v16 )
          {
            LODWORD(v18) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2434, ASSERT_TYPE_ASSERT, "( ( saveSourceBuffer->len >= 0 ) )", "%s\n\t( saveSourceBuffer->len ) = %i", "( saveSourceBuffer->len >= 0 )", v18) )
              __debugbreak();
          }
          ReadFromDevice(NULL, 8ui64, fileHandle);
        }
        else
        {
          v13->buf = NULL;
          v13->sourceBuf = NULL;
          v13->len = -1;
        }
        --v12;
        --v11;
      }
      while ( v11 >= 0 );
    }
    LOBYTE(v9) = 2;
    Mem_Ownership_AllocRelease(v9);
  }
}

/*
==============
Scr_MemFileCache_FlushWrite
==============
*/
void Scr_MemFileCache_FlushWrite(scrContext_t *scrContext, MemoryFile *memFile)
{
  unsigned __int64 m_srcMemFileWriteCacheCount; 

  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( m_srcMemFileWriteCacheCount )
  {
    MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = 0i64;
  }
}

/*
==============
Scr_MemFileCache_WriteByte
==============
*/
void Scr_MemFileCache_WriteByte(scrContext_t *scrContext, unsigned __int8 b, MemoryFile *memFile)
{
  unsigned __int64 m_srcMemFileWriteCacheCount; 

  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( m_srcMemFileWriteCacheCount + 1 > 0x2800 )
  {
    MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    m_srcMemFileWriteCacheCount = 0i64;
  }
  scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = b;
  scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 1;
}

/*
==============
Scr_MemFileCache_WriteFloat
==============
*/

void __fastcall Scr_MemFileCache_WriteFloat(scrContext_t *scrContext, double f, MemoryFile *memFile)
{
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  int v6; 
  int v7; 

  __asm
  {
    vmovss  [rsp+arg_8], xmm1
    vmovss  [rsp+38h+arg_0], xmm1
  }
  if ( (v6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 159, ASSERT_TYPE_SANITY, "( !IS_NAN( f ) )", (const char *)&queryFormat, "!IS_NAN( f )") )
    __debugbreak();
  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( m_srcMemFileWriteCacheCount + 4 > 0x2800 )
  {
    MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    m_srcMemFileWriteCacheCount = 0i64;
  }
  *(_DWORD *)&scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = v7;
  scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 4;
}

/*
==============
Scr_MemFileCache_WriteId
==============
*/
void Scr_MemFileCache_WriteId(scrContext_t *scrContext, unsigned int id, unsigned int opcode, MemoryFile *memFile)
{
  __int64 v7; 
  unsigned int m_idHistoryIndex; 
  int v9; 
  __int64 v10; 
  int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 

  v7 = id;
  if ( !scrContext->m_varPub.saveIdMap[v7] && id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 389, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.saveIdMap[id] || !id )", (const char *)&queryFormat, "scrContext.m_varPub.saveIdMap[id] || !id") )
    __debugbreak();
  if ( (opcode & 0xFFFFFFF8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 390, ASSERT_TYPE_ASSERT, "( ( !(opcode & ~7) ) )", "%s\n\t( opcode ) = %i", "( !(opcode & ~7) )", opcode) )
    __debugbreak();
  m_idHistoryIndex = scrContext->m_idHistoryIndex;
  v9 = 1;
  v10 = m_idHistoryIndex + 1;
  v11 = scrContext->m_varPub.saveIdMap[v7];
  if ( (unsigned int)v10 >= 0x10 )
  {
LABEL_13:
    v13 = 0i64;
    while ( 1 )
    {
      v14 = scrContext->m_idHistory[v13];
      if ( v11 == v14 + 1 )
        break;
      if ( v11 == v14 )
        goto LABEL_18;
      v13 = (unsigned int)(v13 + 1);
      v9 += 2;
      if ( (unsigned int)v13 > m_idHistoryIndex )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v12 = &scrContext->m_idHistory[v10];
    while ( v11 != *v12 + 1 )
    {
      if ( v11 == *v12 )
      {
LABEL_18:
        ++v9;
        break;
      }
      LODWORD(v10) = v10 + 1;
      ++v12;
      v9 += 2;
      if ( (unsigned int)v10 >= 0x10 )
        goto LABEL_13;
    }
  }
  v15 = 8 * v9;
  v16 = 0;
  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( v15 < 0x100 )
    v16 = v15;
  if ( m_srcMemFileWriteCacheCount + 1 > 0x2800 )
  {
    MemFile_WriteData(memFile, scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    m_srcMemFileWriteCacheCount = 0i64;
  }
  scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = opcode + v16;
  scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 1;
  if ( !v16 )
    Scr_MemFileCache_WriteInt(scrContext, v11, memFile);
  scrContext->m_idHistory[scrContext->m_idHistoryIndex] = v11;
  scrContext->m_idHistoryIndex = ((unsigned __int8)scrContext->m_idHistoryIndex - 1) & 0xF;
}

/*
==============
Scr_MemFileCache_WriteInt
==============
*/
void Scr_MemFileCache_WriteInt(scrContext_t *scrContext, int i, MemoryFile *memFile)
{
  unsigned __int8 v3; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  unsigned __int8 *v6; 

  v3 = i;
  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( m_srcMemFileWriteCacheCount + 4 > 0x2800 )
  {
    MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    m_srcMemFileWriteCacheCount = 0i64;
  }
  v6 = &scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount];
  *v6 = v3;
  *(_WORD *)(v6 + 1) = *(_WORD *)((char *)&i + 1);
  v6[3] = HIBYTE(i);
  scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 4;
}

/*
==============
Scr_MemFileCache_WriteShort
==============
*/
void Scr_MemFileCache_WriteShort(scrContext_t *scrContext, unsigned __int16 i, MemoryFile *memFile)
{
  unsigned __int8 v3; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  unsigned __int8 *v6; 
  char v7; 

  v7 = HIBYTE(i);
  v3 = i;
  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( m_srcMemFileWriteCacheCount + 2 > 0x2800 )
  {
    MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    m_srcMemFileWriteCacheCount = 0i64;
  }
  v6 = &scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount];
  *v6 = v3;
  v6[1] = v7;
  scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 2;
}

/*
==============
Scr_MemFileCache_WriteString
==============
*/
void Scr_MemFileCache_WriteString(scrContext_t *scrContext, scr_string_t str, MemoryFile *memFile)
{
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  const char *v7; 

  m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( m_srcMemFileWriteCacheCount )
  {
    MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
    scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = 0i64;
  }
  v7 = SL_ConvertToString(str);
  MemFile_WriteCString(memFile, v7);
}

/*
==============
Scr_ReadCodepos
==============
*/
ScriptCodePos Scr_ReadCodepos(const scrContext_t *scrContext, MemoryFile *memFile)
{
  int NewCodeOffset; 
  const char *v4; 
  const char *v5; 
  int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  NewCodeOffset = p;
  if ( p < -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 284, ASSERT_TYPE_ASSERT, "( offset >= (-1) )", (const char *)&queryFormat, "offset >= END_POS_OFFSET") )
    __debugbreak();
  if ( NewCodeOffset < 0 || scrContext->m_parserPub.useCodeOffsetMap && (NewCodeOffset = Scr_GetNewCodeOffset(scrContext, NewCodeOffset), NewCodeOffset < 0) )
  {
    v5 = &g_EndPos;
  }
  else
  {
    v4 = &scrContext->m_varPub.programBuffer[NewCodeOffset];
    if ( !Scr_IsInOpcodeMemory(scrContext, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 298, ASSERT_TYPE_ASSERT, "( Scr_IsInOpcodeMemory( scrContext, pos ) )", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, pos )") )
      __debugbreak();
    v5 = v4;
  }
  return ScriptCodePos::CreateScriptPos(v5);
}

/*
==============
Scr_ReadId
==============
*/
__int64 Scr_ReadId(scrContext_t *scrContext, MemoryFile *memFile, unsigned int opcode)
{
  unsigned int m_idHistoryIndex; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int p; 

  if ( opcode >> 3 )
  {
    m_idHistoryIndex = scrContext->m_idHistoryIndex;
    v5 = scrContext->m_idHistory[((_BYTE)m_idHistoryIndex + (unsigned __int8)(((opcode >> 3) + 1) >> 1)) & 0xF] + ((opcode >> 3) & 1);
    if ( v5 < scrContext->m_variableListParentSize )
      goto LABEL_8;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 421, ASSERT_TYPE_ASSERT, "(index < scrContext.m_variableListParentSize)", "%s\n\tsaved script id %u does not index %u from history %u for opcode %u", "index < scrContext.m_variableListParentSize", scrContext->m_idHistory[((_BYTE)m_idHistoryIndex + (unsigned __int8)(((opcode >> 3) + 1) >> 1)) & 0xF] + ((opcode >> 3) & 1), scrContext->m_variableListParentSize, m_idHistoryIndex, opcode);
  }
  else
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v5 = p;
    if ( p < scrContext->m_variableListParentSize )
      goto LABEL_8;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 427, ASSERT_TYPE_ASSERT, "(index < scrContext.m_variableListParentSize)", "%s\n\tsaved script id %u does not index %u", "index < scrContext.m_variableListParentSize", p, scrContext->m_variableListParentSize);
  }
  if ( v6 )
    __debugbreak();
LABEL_8:
  if ( v5 )
  {
    v7 = v5;
    v8 = scrContext->m_varPub.saveIdMapRev[v7];
    if ( !v8 )
    {
      v8 = AllocObject(scrContext);
      scrContext->m_varPub.saveIdMapRev[v7] = v8;
    }
    AddRefToObject(scrContext, v8);
  }
  else
  {
    v8 = 0;
  }
  scrContext->m_idHistory[scrContext->m_idHistoryIndex] = v5;
  scrContext->m_idHistoryIndex = ((unsigned __int8)scrContext->m_idHistoryIndex - 1) & 0xF;
  return v8;
}

/*
==============
Scr_ReadString
==============
*/
scr_string_t Scr_ReadString(MemoryFile *memFile)
{
  const char *CString; 
  const char *v2; 
  __int64 v3; 

  CString = MemFile_ReadCString(memFile);
  v2 = CString;
  if ( CString )
  {
    v3 = -1i64;
    while ( v2[++v3] != 0 )
      ;
    LODWORD(CString) = j_SL_GetStringOfSize(v2, 0, (unsigned int)(v3 + 1), 17);
  }
  return (int)CString;
}

/*
==============
Scr_ReadWrite_DoSaveEntry
==============
*/
void Scr_ReadWrite_DoSaveEntry(scrContext_t *scrContext, VariableValue *value, unsigned int name, bool isArray, MemoryFile *memFile)
{
  unsigned __int64 UsedSize; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  VariableValue out; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 596, ASSERT_TYPE_ASSERT, "( value )", (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("DoSaveEntry", UsedSize);
  v10 = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("DoSaveEntryInternal", v10);
  Scr_ReadWrite_DoSaveEntryInternal(scrContext, (unsigned __int8)value->type, value->u, memFile);
  v11 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v11);
  if ( !isArray )
  {
    v12 = MemFile_GetUsedSize(memFile);
    ProfMem_Begin("non-array", v12);
    if ( (name & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 607, ASSERT_TYPE_ASSERT, "( ( !(name & 0xFF000000) ) )", "%s\n\t( name ) = %i", "( !(name & 0xFF000000) )", name) )
      __debugbreak();
    Scr_MemFileCache_WriteByte(scrContext, name, memFile);
    Scr_MemFileCache_WriteByte(scrContext, BYTE1(name), memFile);
    Scr_MemFileCache_WriteByte(scrContext, BYTE2(name), memFile);
    goto LABEL_22;
  }
  Scr_GetArrayIndexValue_Out(name, &out);
  switch ( out.type )
  {
    case VAR_POINTER:
      Scr_MemFileCache_WriteId(scrContext, out.u.uintValue, 5u, memFile);
      break;
    case VAR_STRING:
      v13 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("string array index", v13);
      Scr_MemFileCache_WriteByte(scrContext, 4u, memFile);
      Scr_MemFileCache_WriteString(scrContext, (scr_string_t)out.u.intValue, memFile);
LABEL_22:
      v14 = MemFile_GetUsedSize(memFile);
      ProfMem_End(v14);
      break;
    case VAR_INTEGER:
      if ( out.u.intValue )
      {
        if ( (unsigned int)(out.u.intValue + 128) > 0xFF )
        {
          if ( (unsigned int)(out.u.intValue + 0x8000) > 0xFFFF )
          {
            Scr_MemFileCache_WriteByte(scrContext, 3u, memFile);
            Scr_MemFileCache_WriteInt(scrContext, out.u.intValue, memFile);
          }
          else
          {
            Scr_MemFileCache_WriteByte(scrContext, 2u, memFile);
            Scr_MemFileCache_WriteShort(scrContext, out.u.uintValue, memFile);
          }
        }
        else
        {
          Scr_MemFileCache_WriteByte(scrContext, 1u, memFile);
          Scr_MemFileCache_WriteByte(scrContext, out.u.uintValue, memFile);
        }
      }
      else
      {
        Scr_MemFileCache_WriteByte(scrContext, 0, memFile);
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 654, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad case") )
        __debugbreak();
      break;
  }
  v15 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v15);
}

/*
==============
Scr_ReadWrite_DoSaveEntryInternal
==============
*/
void Scr_ReadWrite_DoSaveEntryInternal(scrContext_t *scrContext, unsigned int type, VariableUnion u, MemoryFile *memFile)
{
  char v4; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  ScriptCodePos v19; 
  unsigned __int16 v20; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  unsigned __int8 v22; 
  unsigned __int8 *v23; 
  unsigned int v24; 
  VariableUnion v25; 
  bool v26; 
  int v27; 
  int v28; 
  int v29; 
  int intValue; 

  intValue = u.intValue;
  v4 = type;
  _RBX = u;
  if ( type != (unsigned __int8)type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1900, ASSERT_TYPE_ASSERT, "( type == (unsigned char)type )", (const char *)&queryFormat, "type == (unsigned char)type") )
    __debugbreak();
  UsedSize = MemFile_GetUsedSize(memFile);
  if ( type == 1 )
  {
    ProfMem_Begin("pointer", UsedSize);
    Scr_MemFileCache_WriteId(scrContext, _RBX.uintValue, 1u, memFile);
    v10 = MemFile_GetUsedSize(memFile);
    ProfMem_End(v10);
  }
  else
  {
    ProfMem_Begin("type", UsedSize);
    Scr_MemFileCache_WriteByte(scrContext, 8 * v4, memFile);
    v11 = MemFile_GetUsedSize(memFile);
    ProfMem_End(v11);
    switch ( type )
    {
      case 0u:
      case 8u:
        return;
      case 2u:
      case 3u:
        Scr_MemFileCache_WriteString(scrContext, (scr_string_t)_RBX.intValue, memFile);
        break;
      case 4u:
        if ( !_RBX.scriptCodePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 167, ASSERT_TYPE_ASSERT, "( v )", (const char *)&queryFormat, "v") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  [rsp+58h+arg_8], xmm0
        }
        if ( (v27 & 0x7F800000) == 2139095040 )
          goto LABEL_34;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  [rsp+58h+arg_8], xmm0
        }
        if ( (v28 & 0x7F800000) == 2139095040 )
          goto LABEL_34;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  [rsp+58h+arg_8], xmm0
        }
        if ( (v29 & 0x7F800000) == 2139095040 )
        {
LABEL_34:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 169, ASSERT_TYPE_SANITY, "( !IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( v )[0] ) && !IS_NAN( ( v )[1] ) && !IS_NAN( ( v )[2] )") )
            __debugbreak();
        }
        __asm { vmovss  xmm1, dword ptr [rbx]; f }
        Scr_MemFileCache_WriteFloat(scrContext, *(double *)&_XMM1, memFile);
        __asm { vmovss  xmm1, dword ptr [rbx+4]; f }
        Scr_MemFileCache_WriteFloat(scrContext, *(double *)&_XMM1, memFile);
        __asm { vmovss  xmm1, dword ptr [rbx+8] }
        Scr_MemFileCache_WriteFloat(scrContext, *(double *)&_XMM1, memFile);
        break;
      case 5u:
        __asm { vmovss  xmm1, dword ptr [rsp+58h+arg_10]; jumptable 0000000141573036 case 5 }
        Scr_MemFileCache_WriteFloat(scrContext, *(double *)&_XMM1, memFile);
        break;
      case 6u:
      case 0xAu:
      case 0xBu:
      case 0xDu:
        Scr_MemFileCache_WriteInt(scrContext, _RBX.intValue, memFile);
        break;
      case 7u:
      case 9u:
        v19.m_scriptPos = ScriptCodePos::CreateGenericPos(_RBX.scriptCodePosValue).m_scriptPos;
        WriteCodepos(scrContext, v19, memFile);
        break;
      case 0xCu:
        if ( !_RBX.scriptCodePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 460, ASSERT_TYPE_ASSERT, "( stackBuf )", (const char *)&queryFormat, "stackBuf") )
          __debugbreak();
        v20 = *(_WORD *)(_RBX.scriptCodePosValue + 8);
        Scr_MemFileCache_WriteShort(scrContext, v20, memFile);
        WriteCodepos(scrContext, *(const ScriptCodePos *)_RBX.vectorValue, memFile);
        Scr_MemFileCache_WriteId(scrContext, *(_DWORD *)(_RBX.scriptCodePosValue + 12), 0, memFile);
        m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
        v22 = *(_BYTE *)(_RBX.scriptCodePosValue + 16);
        if ( m_srcMemFileWriteCacheCount + 1 > 0x2800 )
        {
          MemFile_WriteData(memFile, scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
          m_srcMemFileWriteCacheCount = 0i64;
        }
        v23 = (unsigned __int8 *)(_RBX.scriptCodePosValue + 17);
        scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = v22;
        for ( scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 1; v20; --v20 )
        {
          v24 = *v23;
          v25 = *(VariableUnion *)(v23 + 1);
          v23 += 9;
          Scr_ReadWrite_DoSaveEntryInternal(scrContext, v24, v25, memFile);
        }
        break;
      case 0x10u:
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1944, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VAR_ANIM_TREE should be cleared before save. Ignoring.");
        goto LABEL_30;
      default:
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1947, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown type");
LABEL_30:
        if ( v26 )
          __debugbreak();
        break;
    }
  }
}

/*
==============
Scr_ReadWrite_DoSaveObjectInfo
==============
*/
void Scr_ReadWrite_DoSaveObjectInfo(scrContext_t *scrContext, unsigned int parentId, MemoryFile *memFile)
{
  __int64 v6; 
  ObjectVariableValue *v7; 
  char type; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v10; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  scr_weapon_t next; 
  unsigned int v16; 
  unsigned __int16 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned int FirstSibling; 
  unsigned __int16 v22; 
  unsigned int LastSibling; 
  ChildVariableValue *v24; 
  unsigned int tn; 
  unsigned __int64 v26; 
  unsigned int v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  DebugCallStackEntry2 *m_debugCallStackEntry2; 
  unsigned int codeOffset; 
  unsigned __int8 *v33; 
  unsigned __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  VariableValue value; 

  v6 = parentId;
  v7 = &scrContext->m_varGlob.objectVariableValue[parentId];
  if ( !IsValidObject(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 929, ASSERT_TYPE_ASSERT, "( IsValidObject( parentValue ) )", (const char *)&queryFormat, "IsValidObject( parentValue )") )
    __debugbreak();
  type = v7->w.type;
  switch ( type )
  {
    case 17:
      Scr_MemFileCache_WriteId(scrContext, v7->u.f.next, 1u, memFile);
      goto LABEL_27;
    case 18:
      UsedSize = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("VAR_NOTIFY_THREAD", UsedSize);
      Scr_MemFileCache_WriteId(scrContext, v7->u.f.next, 2u, memFile);
      Scr_MemFileCache_WriteString(scrContext, (scr_string_t)(v7->w.type >> 8), memFile);
      v10 = MemFile_GetUsedSize(memFile);
      ProfMem_End(v10);
      goto LABEL_27;
    case 19:
      Scr_MemFileCache_WriteId(scrContext, v7->u.f.next, 3u, memFile);
      m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
      v12 = v7->w.type >> 8;
      if ( m_srcMemFileWriteCacheCount + 3 > 0x2800 )
      {
        MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
        m_srcMemFileWriteCacheCount = 0i64;
      }
      v13 = &scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount];
      *v13 = v12;
      *(_WORD *)(v13 + 1) = v12 >> 8;
      scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 3;
      goto LABEL_27;
    case 20:
      Scr_MemFileCache_WriteId(scrContext, v7->u.f.next, 4u, memFile);
      Scr_MemFileCache_WriteId(scrContext, v7->w.type >> 8, 0, memFile);
      goto LABEL_27;
    case 22:
      Scr_MemFileCache_WriteId(scrContext, v7->u.f.next, 5u, memFile);
      goto LABEL_27;
    case 23:
      Scr_MemFileCache_WriteByte(scrContext, 0xB8u, memFile);
      v14 = v7->w.type >> 8;
      if ( v14 > 0x7FFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v14, "unsigned", v14) )
        __debugbreak();
      Scr_MemFileCache_WriteShort(scrContext, v14, memFile);
      next = v7->u.f.next;
      v16 = v7->w.type >> 8;
      if ( BYTE1(v7->w.type) <= 7u )
        goto LABEL_22;
      switch ( (_BYTE)v16 )
      {
        case 8:
          Scr_MemFileCache_WriteInt(scrContext, next, memFile);
          break;
        case 9:
LABEL_22:
          v17 = truncate_cast<unsigned short,unsigned int>(next);
          Scr_MemFileCache_WriteShort(scrContext, v17, memFile);
          break;
        case 0xA:
          Scr_MemFileCache_FlushWrite(scrContext, memFile);
          GScr_Weapon_Save(scrContext, next, memFile);
          break;
        default:
          LODWORD(v35) = (unsigned __int8)v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 897, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v35) )
            __debugbreak();
          break;
      }
LABEL_27:
      v19 = MemFile_GetUsedSize(memFile);
      ProfMem_Begin("children", v19);
      v20 = 0;
      FirstSibling = FindFirstSibling(scrContext, parentId);
      if ( FirstSibling )
      {
        do
        {
          ++v20;
          FirstSibling = FindNextSibling(scrContext, FirstSibling);
        }
        while ( FirstSibling );
        if ( v20 > 0xFFFF )
        {
          LODWORD(v36) = parentId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 982, ASSERT_TYPE_ASSERT, "(childCount <= 0xffff)", "%s\n\texceeded maximum number of array values for variable %d", "childCount <= USHRT_MAX", v36) )
            __debugbreak();
        }
      }
      v22 = truncate_cast<unsigned short,unsigned int>(v20);
      Scr_MemFileCache_WriteShort(scrContext, v22, memFile);
      LastSibling = FindLastSibling(scrContext, parentId);
      if ( LastSibling )
      {
        do
        {
          v24 = &scrContext->m_varGlob.childVariableValue[LastSibling];
          if ( !IsValidChild(v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 990, ASSERT_TYPE_ASSERT, "( IsValidChild( entryValue ) )", (const char *)&queryFormat, "IsValidChild( entryValue )") )
            __debugbreak();
          if ( v24->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
            __debugbreak();
          tn = (unsigned __int16)v24->tn;
          value.type = *(_BYTE *)&v24->tn & 0x3F;
          value.u.scriptCodePosValue = v24->u.u.scriptCodePosValue;
          Scr_ReadWrite_DoSaveEntry(scrContext, &value, ((v24->k.match & 0x3FFF) << 10) + (tn >> 6), type == 24, memFile);
          LastSibling = FindPrevSibling(scrContext, LastSibling);
        }
        while ( LastSibling );
        v6 = parentId;
      }
      v26 = MemFile_GetUsedSize(memFile);
      ProfMem_End(v26);
      if ( scrContext->m_varPub.developer )
      {
        v27 = scrContext->m_debuggerGlob.m_debugCallStack[v6];
        if ( v27 )
        {
          v28 = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
          do
          {
            if ( v27 == 1 )
              break;
            if ( v28 + 1 > 0x2800 )
            {
              MemFile_WriteData(memFile, v28, &scrContext->m_readWriteGlob);
              v28 = 0i64;
            }
            v29 = v27;
            scrContext->m_readWriteGlob.m_srcMemFileWriteCache[v28] = 2;
            v30 = v28 + 1;
            m_debugCallStackEntry2 = scrContext->m_debuggerGlob.m_debugCallStackEntry2;
            scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = v30;
            v27 = m_debugCallStackEntry2[v27].next;
            codeOffset = scrContext->m_debuggerGlob.m_debugCallStackEntry[v29].codeOffset;
            if ( v30 + 4 > 0x2800 )
            {
              MemFile_WriteData(memFile, v30, &scrContext->m_readWriteGlob);
              v30 = 0i64;
            }
            v33 = &scrContext->m_readWriteGlob.m_srcMemFileWriteCache[v30];
            *v33 = codeOffset;
            v28 = v30 + 4;
            *(_WORD *)(v33 + 1) = codeOffset >> 8;
            v33[3] = HIBYTE(codeOffset);
            scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = v28;
          }
          while ( v27 );
        }
        v34 = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
        if ( v34 + 1 > 0x2800 )
        {
          MemFile_WriteData(memFile, scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
          v34 = 0i64;
        }
        scrContext->m_readWriteGlob.m_srcMemFileWriteCache[v34] = v27;
        scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = v34 + 1;
      }
      return;
    default:
      v18 = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
      if ( v18 + 1 > 0x2800 )
      {
        MemFile_WriteData(memFile, scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
        v18 = 0i64;
      }
      scrContext->m_readWriteGlob.m_srcMemFileWriteCache[v18] = 8 * type;
      scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = v18 + 1;
      goto LABEL_27;
  }
}

/*
==============
Scr_SavePost
==============
*/
void Scr_SavePost(scrContext_t *scrContext, MemoryFile *memFile, int scriptRunning)
{
  unsigned __int64 UsedSize; 
  unsigned int savecountMark; 
  unsigned int i; 
  __int64 j; 
  unsigned __int64 v13; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  unsigned __int64 v15; 
  ChildVariableValue *childVariableValue; 
  __int64 gameId; 
  __int64 v18; 
  unsigned int *p_entArrayId; 
  __int64 v20; 
  __int64 v21; 
  unsigned int m_idHistoryIndex; 
  int v23; 
  __int64 v24; 
  int v25; 
  unsigned int *v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 

  scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = 0i64;
  _RBX = scrContext;
  DebugWipe(&scrContext->m_readWriteGlob, 0x2800ui64);
  *(_QWORD *)_RBX->m_idHistory = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[2] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[4] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[6] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[8] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[10] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[12] = 0i64;
  *(_QWORD *)&_RBX->m_idHistory[14] = 0i64;
  _RBX->m_idHistoryIndex = 0;
  if ( scriptRunning )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+5D7Ch]
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1591, ASSERT_TYPE_ASSERT, "( pScrVarPub->framerate > 0.0f )", (const char *)&queryFormat, "pScrVarPub->framerate > 0.0f") )
      __debugbreak();
    __asm { vmovss  xmm1, dword ptr [rbx+5D7Ch]; f }
    Scr_MemFileCache_WriteFloat(_RBX, *(double *)&_XMM1, memFile);
    Scr_MemFileCache_WriteInt(_RBX, _RBX->m_varPub.time, memFile);
  }
  Scr_MemFileCache_WriteInt(_RBX, _RBX->m_varPub.savecount, memFile);
  Scr_MemFileCache_WriteInt(_RBX, _RBX->m_varPub.savecountMark, memFile);
  UsedSize = MemFile_GetUsedSize(memFile);
  ProfMem_Begin("DoSaveObjectInfo", UsedSize);
  savecountMark = _RBX->m_varPub.savecountMark;
  for ( i = 1; i <= savecountMark; ++i )
  {
    Scr_ReadWrite_DoSaveObjectInfo(_RBX, _RBX->m_varPub.saveIdMapRev[i], memFile);
    savecountMark = _RBX->m_varPub.savecountMark;
  }
  for ( j = savecountMark + 1; (unsigned int)j <= _RBX->m_varPub.savecount; j = (unsigned int)(j + 1) )
    Scr_ReadWrite_DoSaveObjectInfo(_RBX, _RBX->m_varPub.saveIdMapRev[j], memFile);
  v13 = MemFile_GetUsedSize(memFile);
  ProfMem_End(v13);
  m_srcMemFileWriteCacheCount = _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  v15 = m_srcMemFileWriteCacheCount + 1;
  if ( _RBX->m_varPub.gameId )
  {
    if ( v15 > 0x2800 )
    {
      MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &_RBX->m_readWriteGlob);
      m_srcMemFileWriteCacheCount = 0i64;
    }
    _RBX->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = 1;
    childVariableValue = _RBX->m_varGlob.childVariableValue;
    gameId = _RBX->m_varPub.gameId;
    _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 1;
    Scr_ReadWrite_DoSaveEntryInternal(_RBX, *(_BYTE *)&childVariableValue[gameId].tn & 0x3F, childVariableValue[gameId].u.u, memFile);
  }
  else
  {
    if ( v15 > 0x2800 )
    {
      MemFile_WriteData(memFile, m_srcMemFileWriteCacheCount, &_RBX->m_readWriteGlob);
      m_srcMemFileWriteCacheCount = 0i64;
    }
    _RBX->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = 0;
    _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 1;
  }
  if ( scriptRunning )
  {
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.levelId, 0, memFile);
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.animId, 0, memFile);
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.freeEntList, 0, memFile);
    v18 = 10i64;
    p_entArrayId = &_RBX->m_varPub.m_classMap[0].entArrayId;
    do
    {
      v20 = *p_entArrayId;
      v21 = v20;
      if ( !_RBX->m_varPub.saveIdMap[v20] && (_DWORD)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 389, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.saveIdMap[id] || !id )", (const char *)&queryFormat, "scrContext.m_varPub.saveIdMap[id] || !id") )
        __debugbreak();
      m_idHistoryIndex = _RBX->m_idHistoryIndex;
      v23 = 1;
      v24 = m_idHistoryIndex + 1;
      v25 = _RBX->m_varPub.saveIdMap[v21];
      if ( (unsigned int)v24 >= 0x10 )
      {
LABEL_27:
        v27 = 0i64;
        while ( 1 )
        {
          v28 = _RBX->m_idHistory[v27];
          if ( v25 == v28 + 1 )
            break;
          if ( v25 == v28 )
            goto LABEL_32;
          v27 = (unsigned int)(v27 + 1);
          v23 += 2;
          if ( (unsigned int)v27 > m_idHistoryIndex )
          {
            v23 = 0;
            break;
          }
        }
      }
      else
      {
        v26 = &_RBX->m_idHistory[v24];
        while ( v25 != *v26 + 1 )
        {
          if ( v25 == *v26 )
          {
LABEL_32:
            ++v23;
            break;
          }
          LODWORD(v24) = v24 + 1;
          ++v26;
          v23 += 2;
          if ( (unsigned int)v24 >= 0x10 )
            goto LABEL_27;
        }
      }
      v29 = 8 * v23;
      v30 = 0;
      v31 = _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount;
      if ( v29 < 0x100 )
        v30 = v29;
      if ( v31 + 1 > 0x2800 )
      {
        MemFile_WriteData(memFile, _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount, &_RBX->m_readWriteGlob);
        v31 = 0i64;
      }
      _RBX->m_readWriteGlob.m_srcMemFileWriteCache[v31] = v30;
      _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount = v31 + 1;
      if ( !v30 )
        Scr_MemFileCache_WriteInt(_RBX, v25, memFile);
      p_entArrayId += 6;
      _RBX->m_idHistory[_RBX->m_idHistoryIndex] = v25;
      _RBX->m_idHistoryIndex = ((unsigned __int8)_RBX->m_idHistoryIndex - 1) & 0xF;
      --v18;
    }
    while ( v18 );
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.timeArrayId, 0, memFile);
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.pauseArrayId, 0, memFile);
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.notifyArrayId, 0, memFile);
    Scr_MemFileCache_WriteId(_RBX, _RBX->m_varPub.objectStackId, 0, memFile);
    WriteProfileData(_RBX, memFile);
  }
  v32 = _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount;
  if ( v32 )
  {
    MemFile_WriteData(memFile, v32, &_RBX->m_readWriteGlob);
    _RBX->m_readWriteGlob.m_srcMemFileWriteCacheCount = 0i64;
  }
}

/*
==============
Scr_SavePre2
==============
*/
void Scr_SavePre2(scrContext_t *scrContext, int scriptRunning)
{
  scrContext->m_varPub.savecountMark = scrContext->m_varPub.savecount;
  if ( scriptRunning )
  {
    AddSaveObject(scrContext, scrContext->m_varPub.timeArrayId);
    AddSaveObject(scrContext, scrContext->m_varPub.pauseArrayId);
    AddSaveObject(scrContext, scrContext->m_varPub.notifyArrayId);
    AddSaveObject(scrContext, scrContext->m_varPub.objectStackId);
  }
}

/*
==============
Scr_SavePre
==============
*/
void Scr_SavePre(scrContext_t *scrContext, int scriptRunning)
{
  memset_0(scrContext->m_varPub.saveIdMap, 0, 4i64 * scrContext->m_variableListParentSize);
  memset_0(scrContext->m_varPub.saveIdMapRev, 0, 4i64 * scrContext->m_variableListParentSize);
  *(_QWORD *)&scrContext->m_varPub.savecount = 0i64;
  Scr_SavePreNormal(scrContext, scriptRunning);
}

/*
==============
Scr_SavePreNormal
==============
*/
void Scr_SavePreNormal(scrContext_t *scrContext, int scriptRunning)
{
  __int64 gameId; 
  ChildVariableValue *v5; 
  unsigned int savecount; 
  unsigned int *p_entArrayId; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int *saveIdMap; 
  bool v12; 
  unsigned int *v13; 
  unsigned int v14; 
  unsigned int i; 
  unsigned int Object; 
  unsigned int j; 
  VariableUnion *VariableValueAddress; 
  unsigned int VariableKeyObject; 
  unsigned int *v20; 
  unsigned int k; 
  unsigned int v22; 
  unsigned int NextSibling; 
  __int64 v24; 
  ChildVariableValue *v25; 
  __int64 v26; 
  unsigned int *v27; 
  unsigned int ObjectVariable; 
  __int64 uintValue; 
  unsigned int *v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int *v38; 
  VariableType ValueType; 
  scrContext_t *v40; 
  unsigned int v41; 
  unsigned int Self; 
  unsigned int StartLocalId; 
  unsigned int v44; 
  VariableUnion *v45; 
  unsigned int v46; 
  unsigned int FirstSibling; 
  unsigned int v48; 

  gameId = scrContext->m_varPub.gameId;
  if ( (_DWORD)gameId )
  {
    v5 = &scrContext->m_varGlob.childVariableValue[gameId];
    if ( (*(_BYTE *)&v5->tn & 0x3F) == 1 )
    {
      AddSaveObject(scrContext, v5->u.f.prev);
    }
    else if ( (*(_BYTE *)&v5->tn & 0x3F) == 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 579, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
    {
      __debugbreak();
    }
  }
  if ( scriptRunning )
  {
    if ( !scrContext->m_varPub.timeArrayId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1358, ASSERT_TYPE_ASSERT, "( pScrVarPub->timeArrayId )", (const char *)&queryFormat, "pScrVarPub->timeArrayId") )
      __debugbreak();
    Scr_Variable_CheckReferences(scrContext);
    Scr_RemoveDebuggerRefs(scrContext);
    AddSaveObject(scrContext, scrContext->m_varPub.levelId);
    AddSaveObject(scrContext, scrContext->m_varPub.animId);
    AddSaveObject(scrContext, scrContext->m_varPub.freeEntList);
    savecount = scrContext->m_varPub.savecount;
    p_entArrayId = &scrContext->m_varPub.m_classMap[0].entArrayId;
    v8 = 10i64;
    do
    {
      v9 = *p_entArrayId;
      v10 = savecount;
      if ( (_DWORD)v9 )
      {
        saveIdMap = scrContext->m_varPub.saveIdMap;
        v12 = saveIdMap[v9] == 0;
        v13 = &saveIdMap[v9];
        v10 = savecount;
        if ( v12 )
        {
          *v13 = ++scrContext->m_varPub.savecount;
          scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = v9;
          v10 = scrContext->m_varPub.savecount;
        }
      }
      for ( ; savecount < v10; v10 = scrContext->m_varPub.savecount )
        AddSaveObjectChildren(scrContext, scrContext->m_varPub.saveIdMapRev[++savecount]);
      p_entArrayId += 6;
      savecount = v10;
      --v8;
    }
    while ( v8 );
    v14 = scrContext->m_varPub.savecount;
    for ( i = FindFirstSibling(scrContext, scrContext->m_varPub.timeArrayId); i; i = FindNextSibling(scrContext, i) )
    {
      Object = FindObject(scrContext, i);
      for ( j = FindFirstSibling(scrContext, Object); j; j = FindNextSibling(scrContext, j) )
      {
        if ( GetValueType(scrContext, j) )
        {
          if ( GetValueType(scrContext, j) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1388, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId ) == VAR_STACK") )
            __debugbreak();
          VariableValueAddress = GetVariableValueAddress(scrContext, j);
          AddSaveStackInternal(scrContext, VariableValueAddress->stackValue);
          VariableKeyObject = GetVariableKeyObject(scrContext, j);
          if ( VariableKeyObject )
          {
            v20 = &scrContext->m_varPub.saveIdMap[VariableKeyObject];
            if ( !*v20 )
            {
              *v20 = ++scrContext->m_varPub.savecount;
              scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = VariableKeyObject;
            }
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1394, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
          {
            __debugbreak();
          }
        }
      }
    }
    FirstSibling = FindFirstSibling(scrContext, scrContext->m_varPub.pauseArrayId);
    for ( k = FirstSibling; FirstSibling; k = FirstSibling )
    {
      v22 = FindObject(scrContext, k);
      NextSibling = FindFirstSibling(scrContext, v22);
      if ( NextSibling )
      {
        do
        {
          v24 = NextSibling;
          if ( (*(_BYTE *)&scrContext->m_varGlob.childVariableValue[v24].tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1406, ASSERT_TYPE_ASSERT, "( scrContext.m_varGlob.childVariableValue[notifyListEntry].GetType() == VAR_POINTER )", (const char *)&queryFormat, "scrContext.m_varGlob.childVariableValue[notifyListEntry].GetType() == VAR_POINTER") )
            __debugbreak();
          v25 = &scrContext->m_varGlob.childVariableValue[v24];
          if ( v25->k.match < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable_local.h", 315, ASSERT_TYPE_ASSERT, "( GetParentId() )", (const char *)&queryFormat, "GetParentId()") )
            __debugbreak();
          v26 = (*(_WORD *)&v25->tn >> 6) + ((v25->k.match & 0x3FFF) << 10) - 0x80000;
          if ( (unsigned int)v26 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1408, ASSERT_TYPE_ASSERT, "( (name - MEMORY_NODE_COUNT) < (1 << 16) )", (const char *)&queryFormat, "(name - SL_MAX_STRING_INDEX) < (1 << 16)") )
            __debugbreak();
          if ( (_DWORD)v26 )
          {
            v27 = scrContext->m_varPub.saveIdMap;
            if ( !v27[v26] )
            {
              v27[v26] = ++scrContext->m_varPub.savecount;
              scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = v26;
            }
          }
          ObjectVariable = FindObjectVariable(scrContext, v22, v26);
          uintValue = GetVariableValueAddress(scrContext, ObjectVariable)->uintValue;
          if ( (_DWORD)uintValue )
          {
            v30 = scrContext->m_varPub.saveIdMap;
            if ( !v30[uintValue] )
            {
              v30[uintValue] = ++scrContext->m_varPub.savecount;
              scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = uintValue;
            }
          }
          NextSibling = FindNextSibling(scrContext, NextSibling);
        }
        while ( NextSibling );
        k = FirstSibling;
      }
      FirstSibling = FindNextSibling(scrContext, k);
    }
    v46 = FindFirstSibling(scrContext, scrContext->m_varPub.notifyArrayId);
    v31 = v46;
    if ( !v46 )
      goto LABEL_75;
    while ( 1 )
    {
      v32 = FindObject(scrContext, v31);
      v48 = FindFirstSibling(scrContext, v32);
      v33 = v48;
      if ( !v48 )
        goto LABEL_74;
      do
      {
        v34 = FindObject(scrContext, v33);
        v35 = FindFirstSibling(scrContext, v34);
        if ( !v35 )
          goto LABEL_72;
        do
        {
          v36 = GetVariableKeyObject(scrContext, v35);
          v37 = v36;
          if ( v36 )
          {
            v38 = scrContext->m_varPub.saveIdMap;
            if ( !v38[v37] )
            {
              v38[v37] = ++scrContext->m_varPub.savecount;
              scrContext->m_varPub.saveIdMapRev[scrContext->m_varPub.savecount] = v37;
            }
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1428, ASSERT_TYPE_ASSERT, "( startLocalId )", (const char *)&queryFormat, "startLocalId") )
          {
            __debugbreak();
          }
          ValueType = GetValueType(scrContext, v35);
          v40 = scrContext;
          if ( ValueType == VAR_STACK )
          {
            v41 = v35;
          }
          else
          {
            Self = Scr_GetSelf(scrContext, v37);
            StartLocalId = GetStartLocalId(scrContext, Self);
            v44 = FindObjectVariable(scrContext, scrContext->m_varPub.objectStackId, StartLocalId);
            if ( !v44 )
              goto LABEL_70;
            if ( Scr_GetThreadNotifyName(scrContext, StartLocalId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1444, ASSERT_TYPE_ASSERT, "( Scr_GetThreadNotifyName( scrContext, selfStartLocalId ) == ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "Scr_GetThreadNotifyName( scrContext, selfStartLocalId ) == NULL_SCR_STRING") )
              __debugbreak();
            if ( GetValueType(scrContext, v44) != VAR_STACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1445, ASSERT_TYPE_ASSERT, "( GetValueType( scrContext, stackId2 ) == VAR_STACK )", (const char *)&queryFormat, "GetValueType( scrContext, stackId2 ) == VAR_STACK") )
              __debugbreak();
            v41 = v44;
            v40 = scrContext;
          }
          v45 = GetVariableValueAddress(v40, v41);
          AddSaveStackInternal(scrContext, v45->stackValue);
LABEL_70:
          v35 = FindNextSibling(scrContext, v35);
        }
        while ( v35 );
        v33 = v48;
LABEL_72:
        v48 = FindNextSibling(scrContext, v33);
        v33 = v48;
      }
      while ( v48 );
      v31 = v46;
LABEL_74:
      v46 = FindNextSibling(scrContext, v31);
      v31 = v46;
      if ( !v46 )
      {
LABEL_75:
        while ( v14 < scrContext->m_varPub.savecount )
          AddSaveObjectChildren(scrContext, scrContext->m_varPub.saveIdMapRev[++v14]);
        return;
      }
    }
  }
}

/*
==============
Scr_SaveShutdown
==============
*/
void Scr_SaveShutdown(scrContext_t *scrContext, bool savegame, int scriptRunning)
{
  char v3; 
  char v5; 
  int v6; 
  unsigned int m_variableListParentSize; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  ObjectVariableValue *v12; 
  ScriptCodePos codePos; 
  bool v14; 
  int v15; 

  v15 = scriptRunning;
  v14 = savegame;
  v3 = savegame;
  v5 = 0;
  v6 = scriptRunning;
  if ( scrContext->m_varDebugPub.m_Inited )
  {
    m_variableListParentSize = scrContext->m_variableListParentSize;
    if ( m_variableListParentSize > 1 )
    {
      v8 = 1i64;
      v9 = m_variableListParentSize - 1;
      v10 = 1i64;
      v11 = 1i64;
      do
      {
        v12 = &scrContext->m_varGlob.objectVariableValue[v10];
        if ( LOBYTE(v12->w.type) != 26 )
        {
          if ( !IsValidObject(&scrContext->m_varGlob.objectVariableValue[v10]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1660, ASSERT_TYPE_ASSERT, "( IsValidObject( entryValue ) )", (const char *)&queryFormat, "IsValidObject( entryValue )") )
            __debugbreak();
          codePos.m_scriptPos = scrContext->m_varDebugPub.objectVarUsage[v11].m_scriptPos;
          if ( !ScriptCodePos::GetVarUsagePos(&codePos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 1662, ASSERT_TYPE_ASSERT, "( pos.GetVarUsagePos() )", (const char *)&queryFormat, "pos.GetVarUsagePos()") )
            __debugbreak();
          if ( !scrContext->m_varPub.saveIdMap[v8] && LOBYTE(v12->w.type) != 24 )
          {
            if ( !v5 )
            {
              v5 = 1;
              Com_Printf(23, "\n****script variable cyclic leak*****\n");
            }
            Scr_PrintPrevCodePos(scrContext, 23, codePos, 0, 1);
          }
        }
        ++v10;
        ++v11;
        ++v8;
        --v9;
      }
      while ( v9 );
      v6 = v15;
      v3 = v14;
    }
  }
  if ( v6 )
    Scr_AddDebuggerRefs(scrContext);
  if ( v5 )
  {
    Com_Printf(23, "************************************\n");
    if ( v3 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440A35F0, 665i64);
    else
      Com_Printf(23, "script variable leak due to cyclic usage\n");
  }
}

/*
==============
Scr_SaveSource
==============
*/
void Scr_SaveSource(const scrContext_t *scrContext, MemoryFile *memFile)
{
  MemFile_WriteData(memFile, 1ui64, &scrContext->m_varPub.developer);
  MemFile_WriteData(memFile, 1ui64, &scrContext->m_varPub.developer_script);
}

/*
==============
Scr_SaveSourceImmediate
==============
*/
void Scr_SaveSourceImmediate(const scrContext_t *scrContext, SaveImmediate *save)
{
  if ( scrContext->m_varPub.developer )
    Scr_SaveSourceImmediateInternal(scrContext, save);
}

/*
==============
Scr_SaveSourceImmediateInternal
==============
*/
void Scr_SaveSourceImmediateInternal(const scrContext_t *scrContext, SaveImmediate *save)
{
  int saveByteCount; 
  bool v5; 
  CanonicalStringData *canonicalStringData; 
  unsigned __int64 v7; 
  const MemcardError *v8; 
  __int64 handle; 
  const char *v10; 
  unsigned int v11; 
  unsigned int opcodeLookupLen; 
  int v13; 
  __int64 v14; 
  unsigned int *p_sourcePosIndex; 
  int v16; 
  int v17; 
  unsigned int v18; 
  SourceLookup *sourcePosLookup; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  OpcodeLookup *v24; 
  const char *CodePos; 
  OpcodeLookup *opcodeLookup; 
  const char *v27; 
  int sourcePosIndex; 
  int v29; 
  SourceLookup *v30; 
  __int64 v31; 
  _QWORD *v32; 
  __int64 v33; 
  __int64 v34; 
  const MemcardError *v35; 
  __int64 v36; 
  __int64 sourceBufferLookupLen; 
  int v38; 
  bool *p_archive; 
  unsigned int v40; 
  unsigned int v41; 
  int v42; 
  __int64 v43; 
  int *p_len; 
  __int64 v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  SourceBufferInfo *v49; 
  int *v50; 
  __int64 v51; 
  int v52; 
  const char *v53; 
  SourceBufferInfo *NextSourceBufData; 
  const char *v55; 
  int v56; 
  const MemcardError *v57; 
  __int64 v58; 
  int bufOffset; 
  char *fmt; 
  __int64 v61; 
  __int64 v62; 
  int buffer; 
  int v64; 
  int v65; 
  int len; 
  int v67; 
  int sourceIndex; 
  int v69; 
  int v70; 
  int v71; 
  int codeOffset; 
  int v73; 
  __int64 v74; 
  const char *v75; 
  _QWORD v76[1024]; 

  if ( !scrContext->m_varPub.developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2128, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer )", (const char *)&queryFormat, "scrContext.m_varPub.developer") )
    __debugbreak();
  if ( !save->buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2130, ASSERT_TYPE_ASSERT, "( save->buf != nullptr )", (const char *)&queryFormat, "save->buf != nullptr") )
    __debugbreak();
  saveByteCount = save->saveByteCount;
  save->bufOffset = 0;
  v5 = scrContext->m_Instance == SCRIPTINSTANCE_SERVER;
  v65 = saveByteCount;
  if ( v5 )
  {
    if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2141, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
      __debugbreak();
    if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2142, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
      __debugbreak();
    canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
    SaveMemory_SaveWriteImmediate(&g_scrCanonicalStringPub.canonicalStringBufferSize, 4, save);
    SaveMemory_SaveWriteImmediate(&g_scrCanonicalStringPub.canonicalStringLimit, 4, save);
    SaveMemory_SaveWriteImmediate(canonicalStringData->stringBuffer, g_scrCanonicalStringPub.canonicalStringBufferSize, save);
    v7 = 4i64 * g_scrCanonicalStringPub.canonicalStringLimit;
    if ( v7 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v7, "unsigned", 4i64 * g_scrCanonicalStringPub.canonicalStringLimit) )
      __debugbreak();
    SaveMemory_SaveWriteImmediate(canonicalStringData, v7, save);
    v8 = MemCard_GetWriteError();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2057, ASSERT_TYPE_ASSERT, "( error )", (const char *)&queryFormat, "error") )
      __debugbreak();
    handle = save->f.handle;
    if ( v8->isError )
    {
      if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2069, ASSERT_TYPE_ASSERT, "( save->f )", (const char *)&queryFormat, "save->f") )
        __debugbreak();
      v10 = "canonical strings";
LABEL_25:
      v11 = save->saveByteCount + save->bufOffset - saveByteCount;
LABEL_26:
      Com_PrintWarning(10, "   There was an error trying to write to script %s: %i kb\n", v10, v11 >> 10);
      return;
    }
    if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2069, ASSERT_TYPE_ASSERT, "( save->f )", (const char *)&queryFormat, "save->f") )
      __debugbreak();
    v65 = save->saveByteCount + save->bufOffset;
    Com_Printf(10, "   bytes to write script %s: %i kb\n", "canonical strings", (unsigned int)(v65 - saveByteCount) >> 10);
  }
  opcodeLookupLen = scrContext->m_parserGlob.opcodeLookupLen;
  v13 = 0;
  buffer = 0;
  if ( opcodeLookupLen )
  {
    v14 = opcodeLookupLen;
    p_sourcePosIndex = &scrContext->m_parserGlob.opcodeLookup->sourcePosIndex;
    do
    {
      v16 = *((unsigned __int16 *)p_sourcePosIndex + 2);
      v17 = 0;
      v18 = *p_sourcePosIndex;
      if ( *((_WORD *)p_sourcePosIndex + 2) )
      {
        sourcePosLookup = scrContext->m_parserGlob.sourcePosLookup;
        do
        {
          if ( (*(_DWORD *)&sourcePosLookup[v17 + v18] & 0x9E000000) != 0 )
            buffer = ++v13;
          ++v17;
        }
        while ( v17 < v16 );
      }
      p_sourcePosIndex += 6;
      --v14;
    }
    while ( v14 );
  }
  SaveMemory_SaveWriteImmediate(&buffer, 4, save);
  v20 = 0i64;
  v21 = 0;
  v70 = 0;
  if ( scrContext->m_parserGlob.opcodeLookupLen )
  {
    v22 = 0i64;
    do
    {
      v23 = v20;
      v24 = &scrContext->m_parserGlob.opcodeLookup[v20];
      v74 = 24 * v20;
      CodePos = OpcodeLookup::GetCodePos(v24, scrContext);
      opcodeLookup = scrContext->m_parserGlob.opcodeLookup;
      v27 = CodePos;
      v75 = CodePos;
      LODWORD(CodePos) = opcodeLookup[v23].sourcePosCount;
      sourcePosIndex = opcodeLookup[v23].sourcePosIndex;
      v29 = 0;
      v67 = (int)CodePos;
      v69 = sourcePosIndex;
      if ( (_DWORD)CodePos )
      {
        do
        {
          v30 = &scrContext->m_parserGlob.sourcePosLookup[v29 + sourcePosIndex];
          if ( Scr_GetOpcodeTypeInfo(scrContext, (Scr_SourceType_t)*((_BYTE *)v30 + 3), v27, &codeOffset, &sourceIndex) )
          {
            if ( v21 == 512 )
            {
              SaveMemory_SaveWriteImmediate(v76, 0x2000, save);
              v21 = 0;
              v22 = 0i64;
            }
            ++v21;
            v31 = 2 * v22++;
            v32 = &v76[v31];
            if ( v29 != sourceIndex )
            {
              LODWORD(v62) = v29;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2211, ASSERT_TYPE_ASSERT, "( ( k == sourceIndex ) )", "%s\n\t( k ) = %i", "( k == sourceIndex )", v62) )
                __debugbreak();
            }
            v33 = (unsigned int)(sourceIndex + v69);
            *((_DWORD *)v32 + 2) = codeOffset;
            *((_DWORD *)v32 + 3) = *(_DWORD *)&scrContext->m_parserGlob.sourcePosLookup[v33] & 0xFFFFFF;
            v34 = v74;
            *(_BYTE *)v32 = *((_BYTE *)v30 + 3) & 0x9E;
            LODWORD(v34) = *(unsigned __int16 *)((char *)&scrContext->m_parserGlob.opcodeLookup->cumulOffset + v34);
            --buffer;
            *((_DWORD *)v32 + 1) = v34;
          }
          sourcePosIndex = v69;
          ++v29;
          v27 = v75;
        }
        while ( v29 < v67 );
      }
      v20 = (unsigned int)(v70 + 1);
      v70 = v20;
    }
    while ( (unsigned int)v20 < scrContext->m_parserGlob.opcodeLookupLen );
    if ( v21 )
      SaveMemory_SaveWriteImmediate(v76, 16 * v21, save);
  }
  if ( buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2229, ASSERT_TYPE_ASSERT, "( !count )", (const char *)&queryFormat, "!count") )
    __debugbreak();
  v35 = MemCard_GetWriteError();
  if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2057, ASSERT_TYPE_ASSERT, "( error )", (const char *)&queryFormat, "error") )
    __debugbreak();
  v36 = save->f.handle;
  if ( v35->isError )
  {
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2069, ASSERT_TYPE_ASSERT, "( save->f )", (const char *)&queryFormat, "save->f") )
      __debugbreak();
    v10 = "code pos";
    v11 = save->saveByteCount + save->bufOffset - v65;
    goto LABEL_26;
  }
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2069, ASSERT_TYPE_ASSERT, "( save->f )", (const char *)&queryFormat, "save->f") )
    __debugbreak();
  v67 = save->saveByteCount + save->bufOffset;
  saveByteCount = v67;
  Com_Printf(10, "   bytes to write script %s: %i kb\n", "code pos", (unsigned int)(v67 - v65) >> 10);
  sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen;
  v38 = 0;
  buffer = 0;
  if ( (_DWORD)sourceBufferLookupLen )
  {
    p_archive = &scrContext->m_parserPub.sourceBufferLookup->archive;
    do
    {
      if ( *p_archive )
        buffer = ++v38;
      p_archive += 120;
      --sourceBufferLookupLen;
    }
    while ( sourceBufferLookupLen );
  }
  SaveMemory_SaveWriteImmediate(&buffer, 4, save);
  v40 = scrContext->m_parserPub.sourceBufferLookupLen;
  v41 = 0;
  v42 = 0;
  if ( v40 )
  {
    v43 = v40;
    p_len = &scrContext->m_parserPub.sourceBufferLookup->len;
    do
    {
      if ( *((_BYTE *)p_len + 8) )
      {
        if ( *p_len >= 0 )
        {
          v45 = -1i64;
          do
            v5 = *(_BYTE *)(*((_QWORD *)p_len - 2) + v45++ + 1) == 0;
          while ( !v5 );
          len = v45 + 1;
          v41 += v45 + 1;
          v64 = v45 + 1 + *p_len;
          v46 = v42 + 8;
          v47 = v42 + 8 + *p_len;
          if ( *p_len <= 0 )
            v47 = v46;
          v42 = v47 + 8;
        }
        else
        {
          v64 = -1;
          v42 += 4;
        }
      }
      p_len += 30;
      --v43;
    }
    while ( v43 );
    v40 = scrContext->m_parserPub.sourceBufferLookupLen;
  }
  LODWORD(v61) = v42 + v41;
  LODWORD(fmt) = v42;
  Com_Printf(10, "Script source count = %d, name size = %d, source size = %d, total size = %d\n", v40, v41, fmt, v61);
  v48 = 0;
  if ( scrContext->m_parserPub.sourceBufferLookupLen )
  {
    do
    {
      v49 = &scrContext->m_parserPub.sourceBufferLookup[v48];
      if ( v49->archive )
      {
        if ( v49->len >= 0 )
        {
          v51 = -1i64;
          do
            v5 = v49->buf[++v51] == 0;
          while ( !v5 );
          len = v51 + 1;
          v64 = v49->len + v51 + 1;
          SaveMemory_SaveWriteImmediate(&v64, 4, save);
          SaveMemory_SaveWriteImmediate(&len, 4, save);
          SaveMemory_SaveWriteImmediate(v49->buf, len, save);
          v52 = v49->len;
          if ( v52 > 0 )
            SaveMemory_SaveWriteImmediate(v49->sourceBuf, v52, save);
          v53 = v49->codePos;
          if ( v53 )
          {
            if ( v53 < scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 197, ASSERT_TYPE_ASSERT, "( codePos >= scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
              __debugbreak();
            if ( (unsigned __int64)(v53 - scrContext->m_varPub.programBuffer) > 0x7FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 199, ASSERT_TYPE_ASSERT, "( ( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET )", (const char *)&queryFormat, "( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET") )
              __debugbreak();
            v71 = (_DWORD)v53 - LODWORD(scrContext->m_varPub.programBuffer);
            NextSourceBufData = Scr_GetNextSourceBufData(scrContext, v48);
            if ( NextSourceBufData && (v55 = NextSourceBufData->codePos) != NULL )
            {
              if ( v55 < scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 197, ASSERT_TYPE_ASSERT, "( codePos >= scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
                __debugbreak();
              if ( (unsigned __int64)(v55 - scrContext->m_varPub.programBuffer) > 0x7FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 199, ASSERT_TYPE_ASSERT, "( ( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET )", (const char *)&queryFormat, "( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET") )
                __debugbreak();
              v56 = (_DWORD)v55 - LODWORD(scrContext->m_varPub.programBuffer);
            }
            else
            {
              v56 = 0x7FFFFFFF;
            }
          }
          else
          {
            v71 = -1;
            v56 = -1;
          }
          v73 = v56;
          SaveMemory_SaveWriteImmediate(&v71, 4, save);
          v50 = &v73;
        }
        else
        {
          v64 = -1;
          v50 = &v64;
        }
        SaveMemory_SaveWriteImmediate(v50, 4, save);
      }
      ++v48;
    }
    while ( v48 < scrContext->m_parserPub.sourceBufferLookupLen );
    saveByteCount = v67;
  }
  v57 = MemCard_GetWriteError();
  if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2057, ASSERT_TYPE_ASSERT, "( error )", (const char *)&queryFormat, "error") )
    __debugbreak();
  v58 = save->f.handle;
  if ( v57->isError )
  {
    if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2069, ASSERT_TYPE_ASSERT, "( save->f )", (const char *)&queryFormat, "save->f") )
      __debugbreak();
    v10 = "source buf";
    goto LABEL_25;
  }
  if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 2069, ASSERT_TYPE_ASSERT, "( save->f )", (const char *)&queryFormat, "save->f") )
    __debugbreak();
  Com_Printf(10, "   bytes to write script %s: %i kb\n", "source buf", (unsigned int)(save->saveByteCount + save->bufOffset - saveByteCount) >> 10);
  bufOffset = save->bufOffset;
  if ( bufOffset )
  {
    MemCard_WriteFile(save->f, save->buf, bufOffset);
    save->saveByteCount += bufOffset;
    save->bufOffset = 0;
  }
}

/*
==============
Scr_SkipSource
==============
*/
void Scr_SkipSource(scrContext_t *scrContext, MemoryFile *memFile, MemCardFileHandle fileHandle, bool saveGameHasScriptSource)
{
  int i; 
  int v9; 
  int v10[9]; 
  unsigned int buffer; 

  MemFile_ReadData(memFile, 1ui64, &scrContext->m_varPub.developer);
  MemFile_ReadData(memFile, 1ui64, &scrContext->m_varPub.developer_script);
  if ( scrContext->m_varPub.developer && saveGameHasScriptSource && fileHandle.handle )
  {
    if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
      Scr_SkipCanonicalStrings(fileHandle);
    ReadFromDevice(&buffer, 4ui64, fileHandle);
    if ( buffer )
      ReadFromDevice(NULL, 16i64 * buffer, fileHandle);
    ReadFromDevice(&v9, 4ui64, fileHandle);
    for ( i = v9 - 1; i >= 0; --i )
    {
      ReadFromDevice(v10, 4ui64, fileHandle);
      if ( v10[0] >= 0 )
      {
        ReadFromDevice(NULL, v10[0] + 4i64, fileHandle);
        ReadFromDevice(NULL, 8ui64, fileHandle);
      }
    }
  }
}

/*
==============
WriteCodepos
==============
*/
void WriteCodepos(scrContext_t *scrContext, const ScriptCodePos codePos, MemoryFile *memFile)
{
  const char *ScriptPos; 
  signed __int64 v6; 
  ScriptCodePos v7; 

  v7.m_scriptPos = codePos.m_scriptPos;
  if ( ScriptCodePos::IsScriptPos(&v7) )
  {
    ScriptPos = ScriptCodePos::GetScriptPos(&v7, scrContext);
    if ( G_Main_IsPtrInAnimHunk(ScriptPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 209, ASSERT_TYPE_ASSERT, "( !G_Main_IsPtrInAnimHunk( pos ) )", (const char *)&queryFormat, "!G_Main_IsPtrInAnimHunk( pos )") )
      __debugbreak();
    if ( ScriptPos == &g_EndPos )
    {
      LODWORD(v6) = -1;
    }
    else
    {
      if ( !Scr_IsInOpcodeMemory(scrContext, ScriptPos) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 213, ASSERT_TYPE_ASSERT, "(( pos == &g_EndPos ) || Scr_IsInOpcodeMemory( scrContext, pos ))", "%s\n\tcodepos %p is outside of range [%p, %p). Please save a dump.", "( pos == &g_EndPos ) || Scr_IsInOpcodeMemory( scrContext, pos )", ScriptPos, scrContext->m_varPub.programBuffer, &scrContext->m_varPub.programBuffer[scrContext->m_compilePub.programLen]) )
        __debugbreak();
      v6 = ScriptPos - scrContext->m_varPub.programBuffer;
      if ( (unsigned __int64)(v6 + 1) > 0x80000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 215, ASSERT_TYPE_ASSERT, "( offset >= (-1) && offset <= 2147483647 )", (const char *)&queryFormat, "offset >= END_POS_OFFSET && offset <= INT_MAX") )
        __debugbreak();
    }
    Scr_MemFileCache_WriteInt(scrContext, v6, memFile);
  }
}

/*
==============
WriteProfileData
==============
*/
void WriteProfileData(scrContext_t *scrContext, MemoryFile *memFile)
{
  unsigned int m_variableListParentSize; 
  int v4; 
  bitarray<128> *threadId; 
  __int64 v7; 
  unsigned int v8; 
  bitarray<128> *v9; 
  char v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  bitarray<128> *v16; 
  unsigned int m_idHistoryIndex; 
  int v18; 
  int v19; 
  __int64 v20; 
  unsigned int *v21; 
  __int64 v22; 
  unsigned int v23; 
  unsigned __int64 m_srcMemFileWriteCacheCount; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  bitarray<128> *v28; 
  unsigned __int8 *v29; 
  char v30; 
  unsigned int v31; 

  m_variableListParentSize = scrContext->m_variableListParentSize;
  v4 = 0;
  v31 = m_variableListParentSize;
  if ( m_variableListParentSize )
  {
    threadId = scrContext->m_profileScript.threadId;
    v7 = m_variableListParentSize;
    do
    {
      v8 = 0;
      v9 = threadId;
      while ( !v9->array[0] )
      {
        ++v8;
        v9 = (bitarray<128> *)((char *)v9 + 4);
        if ( v8 >= 4 )
        {
          v10 = 0;
          goto LABEL_8;
        }
      }
      v10 = 1;
LABEL_8:
      v11 = v4 + 1;
      if ( !v10 )
        v11 = v4;
      ++threadId;
      v4 = v11;
      --v7;
    }
    while ( v7 );
  }
  Scr_MemFileCache_WriteInt(scrContext, v4, memFile);
  v12 = 0;
  if ( m_variableListParentSize )
  {
    v13 = 0i64;
    v14 = 0i64;
    do
    {
      v15 = 0;
      v16 = &scrContext->m_profileScript.threadId[v14];
      while ( !v16->array[0] )
      {
        ++v15;
        v16 = (bitarray<128> *)((char *)v16 + 4);
        if ( v15 >= 4 )
          goto LABEL_41;
      }
      if ( !scrContext->m_varPub.saveIdMap[v13] && v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_readwrite.cpp", 389, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.saveIdMap[id] || !id )", (const char *)&queryFormat, "scrContext.m_varPub.saveIdMap[id] || !id") )
        __debugbreak();
      m_idHistoryIndex = scrContext->m_idHistoryIndex;
      v18 = scrContext->m_varPub.saveIdMap[v13];
      v19 = 1;
      v20 = m_idHistoryIndex + 1;
      if ( (unsigned int)v20 >= 0x10 )
      {
LABEL_26:
        v22 = 0i64;
        while ( 1 )
        {
          v23 = scrContext->m_idHistory[v22];
          if ( v18 == v23 + 1 )
            break;
          if ( v18 == v23 )
            goto LABEL_31;
          v22 = (unsigned int)(v22 + 1);
          v19 += 2;
          if ( (unsigned int)v22 > m_idHistoryIndex )
          {
            v19 = 0;
            break;
          }
        }
      }
      else
      {
        v21 = &scrContext->m_idHistory[v20];
        while ( v18 != *v21 + 1 )
        {
          if ( v18 == *v21 )
          {
LABEL_31:
            ++v19;
            break;
          }
          LODWORD(v20) = v20 + 1;
          ++v21;
          v19 += 2;
          if ( (unsigned int)v20 >= 0x10 )
            goto LABEL_26;
        }
      }
      m_srcMemFileWriteCacheCount = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
      v25 = 8 * v19;
      v26 = 0;
      if ( v25 < 0x100 )
        v26 = v25;
      if ( m_srcMemFileWriteCacheCount + 1 > 0x2800 )
      {
        MemFile_WriteData(memFile, scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount, &scrContext->m_readWriteGlob);
        m_srcMemFileWriteCacheCount = 0i64;
      }
      scrContext->m_readWriteGlob.m_srcMemFileWriteCache[m_srcMemFileWriteCacheCount] = v26;
      scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = m_srcMemFileWriteCacheCount + 1;
      if ( !v26 )
        Scr_MemFileCache_WriteInt(scrContext, v18, memFile);
      scrContext->m_idHistory[scrContext->m_idHistoryIndex] = v18;
      v27 = scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount;
      scrContext->m_idHistoryIndex = ((unsigned __int8)scrContext->m_idHistoryIndex - 1) & 0xF;
      v28 = &scrContext->m_profileScript.threadId[v12];
      if ( v27 + 16 > 0x2800 )
      {
        MemFile_WriteData(memFile, v27, &scrContext->m_readWriteGlob);
        v27 = 0i64;
      }
      v29 = &scrContext->m_readWriteGlob.m_srcMemFileWriteCache[v27];
      *v29 = v28->array[0];
      v29[1] = BYTE1(v28->array[0]);
      v29[2] = BYTE2(v28->array[0]);
      v29[3] = HIBYTE(v28->array[0]);
      v29[4] = v28->array[1];
      v29[5] = BYTE1(v28->array[1]);
      v29[6] = BYTE2(v28->array[1]);
      v29[7] = HIBYTE(v28->array[1]);
      v29[8] = v28->array[2];
      v29[9] = BYTE1(v28->array[2]);
      v29[10] = BYTE2(v28->array[2]);
      v29[11] = HIBYTE(v28->array[2]);
      v29[12] = v28->array[3];
      v29[13] = BYTE1(v28->array[3]);
      v29[14] = BYTE2(v28->array[3]);
      v30 = HIBYTE(v28->array[3]);
      m_variableListParentSize = v31;
      v29[15] = v30;
      scrContext->m_readWriteGlob.m_srcMemFileWriteCacheCount = v27 + 16;
LABEL_41:
      ++v12;
      ++v14;
      ++v13;
    }
    while ( v12 < m_variableListParentSize );
  }
}

