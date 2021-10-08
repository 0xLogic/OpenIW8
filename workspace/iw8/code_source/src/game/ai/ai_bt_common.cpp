/*
==============
AI_BT_Load
==============
*/

void __fastcall AI_BT_Load(MemoryFile *memFile)
{
  ?AI_BT_Load@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AI_BT_Shutdown
==============
*/

void AI_BT_Shutdown(void)
{
  ?AI_BT_Shutdown@@YAXXZ();
}

/*
==============
AI_BT_Load
==============
*/

BehaviorTree *__fastcall AI_BT_Load(const char *name)
{
  return ?AI_BT_Load@@YAPEAUBehaviorTree@@PEBD@Z(name);
}

/*
==============
AI_BT_FreeTreeInstance
==============
*/

void __fastcall AI_BT_FreeTreeInstance(int entnum)
{
  ?AI_BT_FreeTreeInstance@@YAXH@Z(entnum);
}

/*
==============
AI_BT_Save
==============
*/

void __fastcall AI_BT_Save(MemoryFile *memFile)
{
  ?AI_BT_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AI_BT_Load
==============
*/
BehaviorTree *AI_BT_Load(const char *name)
{
  const dvar_t *v3; 
  unsigned int flags; 
  __int64 handle; 
  int v6; 
  int v7; 
  unsigned int v8; 
  _BYTE *v9; 
  unsigned int v10; 
  char *v11; 
  const char **v12; 
  unsigned __int64 v13; 
  const char *v14; 
  unsigned __int64 v15; 
  const char *v16; 
  unsigned __int16 v17; 
  char *v18; 
  size_t v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  const char *v23; 
  char *v24; 
  char v25; 
  __int16 v26; 
  __int64 v27; 
  char *v28; 
  char *v29; 
  int v30; 
  __int64 v31; 
  _BYTE *v32; 
  unsigned __int16 buffer; 
  char *v34; 
  unsigned __int16 v35; 
  int v36; 
  fileHandle_t file; 
  char dest[64]; 
  char ospath[256]; 

  if ( Com_sprintf_truncate(dest, 0x40ui64, "behaviortree/%s.btb", name) >= 0 )
  {
    v3 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
    if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v3->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v3->name) )
        __debugbreak();
    }
    if ( !v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_load_obj.cpp", 107, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_developer_looseScriptLoadConsole, \"developer_looseScriptLoadConsole\" ))", (const char *)&queryFormat, "Dconst_GetBool( developer_looseScriptLoadConsole )") )
      __debugbreak();
    FS_BuildOSPath((const char *)&queryFormat.fmt + 3, "main_shared", dest, (char (*)[256])ospath);
    FS_FOpenFileRead(ospath, &file);
    handle = file.handle.handle;
    if ( file.handle.handle == -1 )
    {
      Com_PrintError(18, "^1ERROR: Could not open '%s'\n", dest);
      return 0i64;
    }
    else
    {
      v6 = 0;
      buffer = 0;
      v35 = 0;
      FS_Read(&buffer, 4ui64, file);
      v7 = buffer;
      Mem_Ownership_AllocAcquire(MOVEMENT);
      v8 = 56 * v7;
      v9 = Mem_HunkDebug_Alloc((unsigned int)(56 * v7), "AI_BT_Load");
      Mem_Ownership_AllocRelease(MOVEMENT);
      v32 = v9;
      FS_Read(v9, v8, (fileHandle_t)handle);
      FS_Read(&v35, 2ui64, (fileHandle_t)handle);
      LODWORD(v9) = v35;
      Mem_Ownership_AllocAcquire(MOVEMENT);
      v10 = 6 * (_DWORD)v9;
      v11 = (char *)Mem_HunkDebug_Alloc((unsigned int)(6 * (_DWORD)v9), "AI_BT_Load");
      Mem_Ownership_AllocRelease(MOVEMENT);
      v34 = v11;
      FS_Read(v11, v10, (fileHandle_t)handle);
      FS_Read(&v36, 4ui64, (fileHandle_t)handle);
      FS_FCloseFile((fileHandle_t)handle);
      Mem_Ownership_AllocAcquire(MOVEMENT);
      v12 = (const char **)Mem_HunkDebug_Alloc(0x38ui64, "AI_BT_Load");
      Mem_Ownership_AllocRelease(MOVEMENT);
      v13 = 32i64 * buffer;
      Mem_Ownership_AllocAcquire(MOVEMENT);
      v14 = (const char *)Mem_HunkDebug_Alloc(v13, "AI_BT_Load");
      Mem_Ownership_AllocRelease(MOVEMENT);
      v12[2] = v14;
      *((_WORD *)v12 + 4) = buffer;
      *((_WORD *)v12 + 20) = v35;
      if ( v35 )
      {
        v15 = 6i64 * v35;
        Mem_Ownership_AllocAcquire(MOVEMENT);
        v16 = (const char *)Mem_HunkDebug_Alloc(v15, "AI_BT_Load");
        Mem_Ownership_AllocRelease(MOVEMENT);
      }
      else
      {
        v16 = NULL;
      }
      v12[6] = v16;
      v17 = v36;
      *((_WORD *)v12 + 12) = v36;
      Mem_Ownership_AllocAcquire(MOVEMENT);
      v18 = (char *)Mem_HunkDebug_Alloc(4i64 * v17, "AI_BT_Load");
      Mem_Ownership_AllocRelease(MOVEMENT);
      v19 = 4i64 * *((unsigned __int16 *)v12 + 12);
      v12[4] = v18;
      memset_0(v18, 0, v19);
      *v12 = name;
      v20 = 0;
      if ( buffer )
      {
        v21 = 0i64;
        v22 = 0i64;
        do
        {
          v23 = v12[2];
          v24 = &v32[v22];
          *(_QWORD *)&v23[v21] = &v32[v22];
          v25 = v32[v22 + 32];
          v23[v21 + 8] = v25;
          v23[v21 + 9] = v32[v22 + 33];
          *(_DWORD *)&v23[v21 + 12] = *(_DWORD *)&v32[v22 + 36];
          *(_WORD *)&v23[v21 + 30] = *(_WORD *)&v32[v22 + 42];
          *(_WORD *)&v23[v21 + 28] = *(_WORD *)&v32[v22 + 40];
          v26 = *(_WORD *)&v32[v22 + 46];
          if ( v25 == 7 )
          {
            *(_WORD *)&v23[v21 + 16] = v26;
            *(_WORD *)&v23[v21 + 18] = *((_WORD *)v24 + 22);
            *(_WORD *)&v23[v21 + 20] = *((_WORD *)v24 + 24);
            *(_WORD *)&v23[v21 + 22] = *((_WORD *)v24 + 25);
            v23[v21 + 25] = (v24[52] & 2) != 0;
            v23[v21 + 24] = v24[52] & 1;
            v23[v21 + 26] = (v24[52] & 4) != 0;
          }
          else
          {
            *(_WORD *)&v23[v21 + 18] = v26;
            *(_WORD *)&v23[v21 + 16] = *((_WORD *)v24 + 22);
          }
          ++v20;
          v22 += 56i64;
          v21 += 32i64;
        }
        while ( v20 < buffer );
      }
      if ( v35 )
      {
        v27 = 0i64;
        do
        {
          v28 = &v34[v27];
          v29 = (char *)&v12[6][v27];
          v30 = (unsigned __int8)v34[v27];
          *v29 = v30;
          if ( !(_BYTE)v30 || v30 == 1 || v30 == 2 )
          {
            *((_WORD *)v29 + 1) = *((_WORD *)v28 + 1);
            v29[4] = v28[4];
          }
          else
          {
            LODWORD(v31) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_load_obj.cpp", 70, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid node decorator type %d", v31) )
              __debugbreak();
          }
          ++v6;
          v27 += 6i64;
        }
        while ( v6 < v35 );
      }
      return (BehaviorTree *)v12;
    }
  }
  else
  {
    Com_PrintError(18, "ERROR: filename '%s' too long\n", dest);
    return 0i64;
  }
}

/*
==============
AI_BT_FreeTreeInstance
==============
*/

void __fastcall AI_BT_FreeTreeInstance(int entnum)
{
  AI_BT_FreeTreeAssetInstance(entnum);
}

/*
==============
AI_BT_Load
==============
*/

void __fastcall AI_BT_Load(MemoryFile *memFile)
{
  AI_BT_LoadTreeAssetInstances(memFile);
}

/*
==============
AI_BT_Save
==============
*/

void __fastcall AI_BT_Save(MemoryFile *memFile)
{
  AI_BT_SaveTreeAssetInstances(memFile);
}

/*
==============
AI_BT_Shutdown
==============
*/

void AI_BT_Shutdown(void)
{
  AI_BT_FreeTreeAssets();
}

