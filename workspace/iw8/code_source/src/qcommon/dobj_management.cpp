/*
==============
Com_ServerDObjDirty
==============
*/

bool __fastcall Com_ServerDObjDirty(int handle)
{
  return ?Com_ServerDObjDirty@@YA_NH@Z(handle);
}

/*
==============
Com_ClientDObjClearAllSkel
==============
*/

void __fastcall Com_ClientDObjClearAllSkel(LocalClientNum_t localClientNum)
{
  ?Com_ClientDObjClearAllSkel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Com_SafeClientDObjFree
==============
*/

void __fastcall Com_SafeClientDObjFree(int handle, LocalClientNum_t localClientNum)
{
  ?Com_SafeClientDObjFree@@YAXHW4LocalClientNum_t@@@Z(handle, localClientNum);
}

/*
==============
Com_ClientDObjCreate
==============
*/

DObj *__fastcall Com_ClientDObjCreate(DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, LocalClientNum_t localClientNum, bool requiresIKPreCache, unsigned int entnum)
{
  return ?Com_ClientDObjCreate@@YAPEAUDObj@@PEAUDObjModel@@GPEAUXAnimTree@@HW4LocalClientNum_t@@_NI@Z(dobjModels, numModels, tree, handle, localClientNum, requiresIKPreCache, entnum);
}

/*
==============
DB_LoadDObjs
==============
*/

void DB_LoadDObjs(void)
{
  ?DB_LoadDObjs@@YAXXZ();
}

/*
==============
Com_DObjCloneFromBuffer
==============
*/

void __fastcall Com_DObjCloneFromBuffer(int entnum)
{
  ?Com_DObjCloneFromBuffer@@YAXH@Z(entnum);
}

/*
==============
Com_DObjErrorCleanup
==============
*/

void Com_DObjErrorCleanup(void)
{
  ?Com_DObjErrorCleanup@@YAXXZ();
}

/*
==============
Com_GetSkelRecord
==============
*/

void *__fastcall Com_GetSkelRecord(const DObj *obj)
{
  return ?Com_GetSkelRecord@@YAPEAXPEBUDObj@@@Z(obj);
}

/*
==============
Com_ShutdownDObj
==============
*/

void Com_ShutdownDObj(void)
{
  ?Com_ShutdownDObj@@YAXXZ();
}

/*
==============
Com_GetServerDObjForEntnum
==============
*/

DObj *__fastcall Com_GetServerDObjForEntnum(int handle)
{
  return ?Com_GetServerDObjForEntnum@@YAPEAUDObj@@H@Z(handle);
}

/*
==============
Com_GetMaxDObjCount
==============
*/

int __fastcall Com_GetMaxDObjCount()
{
  return ?Com_GetMaxDObjCount@@YAHXZ();
}

/*
==============
Com_ListDobjModels
==============
*/

void Com_ListDobjModels(void)
{
  ?Com_ListDobjModels@@YAXXZ();
}

/*
==============
DB_SaveDObjs
==============
*/

void DB_SaveDObjs(void)
{
  ?DB_SaveDObjs@@YAXXZ();
}

/*
==============
Com_GetDobjCount
==============
*/

int __fastcall Com_GetDobjCount()
{
  return ?Com_GetDobjCount@@YAHXZ();
}

/*
==============
Com_GetClientDObjBuffered
==============
*/

DObj *__fastcall Com_GetClientDObjBuffered(int handle, LocalClientNum_t localClientNum)
{
  return ?Com_GetClientDObjBuffered@@YAPEAUDObj@@HW4LocalClientNum_t@@@Z(handle, localClientNum);
}

/*
==============
Com_ClientDObjClearSubmitted
==============
*/

void __fastcall Com_ClientDObjClearSubmitted(LocalClientNum_t localClientNum)
{
  ?Com_ClientDObjClearSubmitted@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Com_DObjCloneToBuffer
==============
*/

DObj *__fastcall Com_DObjCloneToBuffer(int entnum, bool requiresIKPreCache)
{
  return ?Com_DObjCloneToBuffer@@YAPEAUDObj@@H_N@Z(entnum, requiresIKPreCache);
}

/*
==============
Com_GetObjBufIndex
==============
*/

int __fastcall Com_GetObjBufIndex(const DObj *obj)
{
  return ?Com_GetObjBufIndex@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
Com_ServerDObjCreate
==============
*/

DObj *__fastcall Com_ServerDObjCreate(DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, bool requiresIKPreCache)
{
  return ?Com_ServerDObjCreate@@YAPEAUDObj@@PEAUDObjModel@@GPEAUXAnimTree@@H_N@Z(dobjModels, numModels, tree, handle, requiresIKPreCache);
}

/*
==============
Com_ShutdownDObjBuffer
==============
*/

void Com_ShutdownDObjBuffer(void)
{
  ?Com_ShutdownDObjBuffer@@YAXXZ();
}

/*
==============
Com_GetCustomDataChannelRecordFromIndex
==============
*/

void *__fastcall Com_GetCustomDataChannelRecordFromIndex(int objBufIndex)
{
  return ?Com_GetCustomDataChannelRecordFromIndex@@YAPEAXH@Z(objBufIndex);
}

/*
==============
Com_ClientDObjClearSubmitted
==============
*/

void Com_ClientDObjClearSubmitted(void)
{
  ?Com_ClientDObjClearSubmitted@@YAXXZ();
}

/*
==============
Com_GetDObjBufferSize
==============
*/

unsigned int __fastcall Com_GetDObjBufferSize(const unsigned int count)
{
  return ?Com_GetDObjBufferSize@@YAII@Z(count);
}

/*
==============
Com_SafeServerDObjFree
==============
*/

void __fastcall Com_SafeServerDObjFree(int handle)
{
  ?Com_SafeServerDObjFree@@YAXH@Z(handle);
}

/*
==============
Com_GetServerDObjForEnt
==============
*/

DObj *__fastcall Com_GetServerDObjForEnt(const gentity_s *ent)
{
  return ?Com_GetServerDObjForEnt@@YAPEAUDObj@@PEBUgentity_s@@@Z(ent);
}

/*
==============
Com_InitDObjBuffer
==============
*/

void __fastcall Com_InitDObjBuffer(HunkUser *hunkUser, unsigned int count)
{
  ?Com_InitDObjBuffer@@YAXPEAUHunkUser@@I@Z(hunkUser, count);
}

/*
==============
Com_GetFreeDObjCount
==============
*/

int __fastcall Com_GetFreeDObjCount()
{
  return ?Com_GetFreeDObjCount@@YAHXZ();
}

/*
==============
Com_SetServerDObjDirty
==============
*/

void __fastcall Com_SetServerDObjDirty(int handle)
{
  ?Com_SetServerDObjDirty@@YAXH@Z(handle);
}

/*
==============
Com_GetCustomDataChannelRecord
==============
*/

void *__fastcall Com_GetCustomDataChannelRecord(const DObj *obj)
{
  return ?Com_GetCustomDataChannelRecord@@YAPEAXPEBUDObj@@@Z(obj);
}

/*
==============
Com_ServerDObjClean
==============
*/

void __fastcall Com_ServerDObjClean(int handle)
{
  ?Com_ServerDObjClean@@YAXH@Z(handle);
}

/*
==============
Com_InitDObj
==============
*/

void Com_InitDObj(void)
{
  ?Com_InitDObj@@YAXXZ();
}

/*
==============
Com_BuildDObjModelList
==============
*/
__int64 Com_BuildDObjModelList(DObjModelInstanceCount *models)
{
  int v2; 
  __int64 i; 
  const DObj *v4; 
  const char *Name; 
  int v6; 
  __int64 v7; 
  const char *v8; 
  DObjModelInstanceCount *v9; 
  const char *modelName; 
  int v11; 
  int v12; 
  __int64 v13; 
  std::less<void> v15; 

  Sys_EnterCriticalSection(CRITSECT_DOBJ_ALLOC);
  v2 = 0;
  for ( i = 0i64; (unsigned int)i < (unsigned int)s_objCount; i = (unsigned int)(i + 1) )
  {
    if ( objAlloced[i] )
    {
      v4 = (const DObj *)s_objBuf[(unsigned int)i];
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 257, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      Name = DObjGetName(v4);
      v6 = 0;
      v7 = 0i64;
      v8 = Name;
      if ( v2 > 0 )
      {
        v9 = models;
        while ( 1 )
        {
          modelName = v9->modelName;
          do
          {
            v11 = (unsigned __int8)modelName[v8 - v9->modelName];
            v12 = *(unsigned __int8 *)modelName - v11;
            if ( v12 )
              break;
            ++modelName;
          }
          while ( v11 );
          if ( !v12 )
            break;
          ++v6;
          ++v7;
          ++v9;
          if ( v7 >= v2 )
            goto LABEL_15;
        }
        ++models[v7].dobjCount;
      }
LABEL_15:
      if ( v6 == v2 )
      {
        v13 = v7;
        ++v2;
        models[v13].modelName = v8;
        models[v13].dobjCount = 1;
      }
    }
  }
  std::_Sort_unchecked__anonymous_namespace_::DObjModelInstanceCount___std::less_void___(models, &models[v2], v2, v15);
  Sys_LeaveCriticalSection(CRITSECT_DOBJ_ALLOC);
  return (unsigned int)v2;
}

/*
==============
Com_ClientDObjClearAllSkel
==============
*/
void Com_ClientDObjClearAllSkel(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int16 *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 414, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (2) )", "localClientNum doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = 2533i64;
  v3 = &clientObjMap[2533 * localClientNum];
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      if ( (unsigned int)v4 >= (unsigned int)s_objCount )
      {
        LODWORD(v6) = s_objCount;
        LODWORD(v5) = *v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_objCount )", "index doesn't index s_objCount\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      DObjSkelClear((const DObj *)s_objBuf[v4]);
    }
    ++v3;
    --v2;
  }
  while ( v2 );
}

/*
==============
Com_ClientDObjClearSubmitted
==============
*/
void Com_ClientDObjClearSubmitted(LocalClientNum_t localClientNum)
{
  int v2; 
  __int16 *v3; 
  __int32 v4; 
  unsigned int v5; 
  char *v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = 0;
  v3 = &clientObjMap[2533 * localClientNum];
  v4 = 2533 * localClientNum;
  do
  {
    if ( (unsigned int)v2 > 0x9E4 )
    {
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v8) )
        __debugbreak();
    }
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( (unsigned int)(v4 + v2) >= 0x13CA )
    {
      LODWORD(v8) = v4 + v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v8) )
        __debugbreak();
    }
    v5 = *v3;
    if ( *v3 )
    {
      if ( v5 >= (unsigned int)s_objCount )
      {
        LODWORD(v8) = *v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v8) )
          __debugbreak();
      }
      v6 = s_objBuf[v5];
      if ( v6 )
        v6[292] &= ~1u;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 2533 );
}

/*
==============
Com_ClientDObjClearSubmitted
==============
*/
void Com_ClientDObjClearSubmitted(void)
{
  int v0; 
  __int16 *v1; 
  int i; 
  int j; 
  unsigned int v4; 
  char *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = 0;
  v1 = clientObjMap;
  for ( i = 0; i < 5066; i += 2533 )
  {
    for ( j = 0; j < 2533; ++j )
    {
      if ( (unsigned int)j > 0x9E4 )
      {
        LODWORD(v7) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v7) )
          __debugbreak();
      }
      if ( (unsigned int)i >= 0x13CA )
      {
        LODWORD(v7) = 2;
        LODWORD(v6) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( (unsigned int)(i + j) >= 0x13CA )
      {
        LODWORD(v7) = i + j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v7) )
          __debugbreak();
      }
      v4 = *v1;
      if ( *v1 )
      {
        if ( v4 >= (unsigned int)s_objCount )
        {
          LODWORD(v7) = *v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v7) )
            __debugbreak();
        }
        v5 = s_objBuf[v4];
        if ( v5 )
          v5[292] &= ~1u;
      }
      ++v1;
    }
    ++v0;
  }
}

/*
==============
Com_ClientDObjCreate
==============
*/
DObj *Com_ClientDObjCreate(DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, LocalClientNum_t localClientNum, bool requiresIKPreCache, unsigned int entnum)
{
  __int32 v11; 
  int v12; 
  unsigned int v13; 
  __int64 FreeDObjIndex; 
  bool v15; 
  DObj *v16; 
  __int64 owner; 
  __int64 v19; 

  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 365, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( (unsigned int)handle >= 0x9E5 )
  {
    LODWORD(owner) = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 366, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "( handle ) = %i", owner) )
      __debugbreak();
  }
  if ( (unsigned int)handle > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", handle) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v19) = 2;
    LODWORD(owner) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", owner, v19) )
      __debugbreak();
  }
  v11 = 2533 * localClientNum;
  v12 = 2533 * localClientNum + handle;
  if ( (unsigned int)v12 >= 0x13CA )
  {
    LODWORD(v19) = v11 + handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v19) )
      __debugbreak();
  }
  v13 = clientObjMap[v12];
  if ( clientObjMap[v12] )
  {
    if ( v13 >= (unsigned int)s_objCount )
    {
      LODWORD(v19) = clientObjMap[v12];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v19) )
        __debugbreak();
    }
    if ( s_objBuf[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 367, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( handle, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( handle, localClientNum )") )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v19) = 2;
    LODWORD(owner) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (2) )", "localClientNum doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", owner, v19) )
      __debugbreak();
  }
  FreeDObjIndex = Com_GetFreeDObjIndex();
  if ( (unsigned int)v12 >= 0x13CA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 375, ASSERT_TYPE_ASSERT, "((unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)handle < ARRAY_COUNT( clientObjMap )") )
    __debugbreak();
  if ( v12 < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 377, ASSERT_TYPE_ASSERT, "(handle >= localClientNum * ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1))", (const char *)&queryFormat, "handle >= localClientNum * CLIENT_DOBJ_HANDLE_MAX") )
    __debugbreak();
  if ( v12 >= v11 + 2533 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 378, ASSERT_TYPE_ASSERT, "(handle < localClientNum * ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) + ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1))", (const char *)&queryFormat, "handle < localClientNum * CLIENT_DOBJ_HANDLE_MAX + CLIENT_DOBJ_HANDLE_MAX") )
    __debugbreak();
  if ( (unsigned int)FreeDObjIndex >= (unsigned int)s_objCount )
  {
    LODWORD(v19) = s_objCount;
    LODWORD(owner) = FreeDObjIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 380, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_objCount )", "index doesn't index s_objCount\n\t%i not in [0, %i)", owner, v19) )
      __debugbreak();
  }
  LOBYTE(owner) = 1;
  DObjCreate(dobjModels, numModels, tree, s_objBuf[FreeDObjIndex], entnum + 1, (XAnimOwner)owner);
  v15 = objFreeCount == 0;
  clientObjMap[v12] = FreeDObjIndex;
  if ( v15 )
    Com_HandleNoFreeDobjs(0);
  v16 = (DObj *)s_objBuf[FreeDObjIndex];
  if ( requiresIKPreCache )
    XAnimIKPreCacheDObj(v16, v12, FreeDObjIndex);
  return v16;
}

/*
==============
Com_DObjCloneFromBuffer
==============
*/
void Com_DObjCloneFromBuffer(int entnum)
{
  unsigned __int64 v1; 
  __int64 v2; 
  unsigned __int64 v3; 
  __int16 v4; 
  __int64 v5; 

  v1 = entnum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 516, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x13CA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 517, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( sizeof( *array_counter( clientObjMap ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)entnum < ARRAY_COUNT( clientObjMap )") )
    __debugbreak();
  v3 = v1;
  if ( clientObjMap[v1] )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 518, ASSERT_TYPE_ASSERT, "( ( !clientObjMap[entnum] ) )", "( entnum ) = %i", v5) )
      __debugbreak();
  }
  v4 = clientObjMapBuffered[v3];
  if ( v4 )
  {
    clientObjMap[v3] = v4;
    if ( v3 >= 2533 )
    {
      j___report_rangecheckfailure(v2);
      JUMPOUT(0x1413D1397i64);
    }
    clientObjMapBuffered[v3] = 0;
  }
}

/*
==============
Com_DObjCloneToBuffer
==============
*/
DObj *Com_DObjCloneToBuffer(int entnum, bool requiresIKPreCache)
{
  __int64 v2; 
  __int64 v4; 
  __int64 FreeDObjIndex; 
  unsigned int v6; 
  bool v7; 
  DObj *v8; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  v2 = entnum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 479, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 480, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( sizeof( *array_counter( serverObjMap ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)entnum < ARRAY_COUNT( serverObjMap )") )
    __debugbreak();
  v4 = serverObjMap[v2];
  if ( !serverObjMap[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 482, ASSERT_TYPE_ASSERT, "(serverDobjIndex)", (const char *)&queryFormat, "serverDobjIndex") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 484, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( sizeof( *array_counter( clientObjMapBuffered ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)entnum < ARRAY_COUNT( clientObjMapBuffered )") )
    __debugbreak();
  if ( clientObjMapBuffered[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 485, ASSERT_TYPE_ASSERT, "(!clientObjMapBuffered[entnum])", (const char *)&queryFormat, "!clientObjMapBuffered[entnum]") )
    __debugbreak();
  FreeDObjIndex = Com_GetFreeDObjIndex();
  if ( (unsigned int)v2 >= 0x9E5 )
  {
    v12 = 2533;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( sizeof( *array_counter( clientObjMapBuffered ) ) + 0 ) )", "entnum doesn't index ARRAY_COUNT( clientObjMapBuffered )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v6 = s_objCount;
  if ( (unsigned int)v4 >= (unsigned int)s_objCount )
  {
    LODWORD(v11) = s_objCount;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( serverDobjIndex ) < (unsigned)( s_objCount )", "serverDobjIndex doesn't index s_objCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
    v6 = s_objCount;
  }
  if ( (unsigned int)FreeDObjIndex >= v6 )
  {
    LODWORD(v11) = v6;
    LODWORD(v10) = FreeDObjIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 492, ASSERT_TYPE_ASSERT, "(unsigned)( clientDobjIndex ) < (unsigned)( s_objCount )", "clientDobjIndex doesn't index s_objCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  DObjCloneWithClientFlag((const DObj *)s_objBuf[v4], s_objBuf[FreeDObjIndex], 1);
  v7 = objFreeCount == 0;
  clientObjMapBuffered[v2] = FreeDObjIndex;
  if ( v7 )
    Com_HandleNoFreeDobjs(1);
  v8 = (DObj *)s_objBuf[FreeDObjIndex];
  if ( requiresIKPreCache )
    XAnimIKPreCacheDObj(v8, v2, FreeDObjIndex);
  return v8;
}

/*
==============
Com_DObjErrorCleanup
==============
*/
void Com_DObjErrorCleanup(void)
{
  __int16 *v0; 
  int v1; 
  int i; 
  int j; 
  unsigned int v4; 
  char *v5; 
  int k; 
  DObj *ServerDObjForEntnum; 
  __int64 v8; 
  __int64 v9; 

  v0 = clientObjMap;
  v1 = 0;
  for ( i = 0; i < 5066; i += 2533 )
  {
    for ( j = 0; j < 2533; ++j )
    {
      if ( (unsigned int)j > 0x9E4 )
      {
        LODWORD(v9) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v9) )
          __debugbreak();
      }
      if ( (unsigned int)i >= 0x13CA )
      {
        LODWORD(v9) = 2;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( (unsigned int)(i + j) >= 0x13CA )
      {
        LODWORD(v9) = i + j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v9) )
          __debugbreak();
      }
      v4 = *v0;
      if ( *v0 )
      {
        if ( v4 >= (unsigned int)s_objCount )
        {
          LODWORD(v9) = *v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v9) )
            __debugbreak();
        }
        v5 = s_objBuf[v4];
        if ( v5 )
          *((_DWORD *)v5 + 13) = 0;
      }
      ++v0;
    }
    ++v1;
  }
  for ( k = 0; k < 2048; ++k )
  {
    ServerDObjForEntnum = Com_GetServerDObjForEntnum(k);
    if ( ServerDObjForEntnum )
      ServerDObjForEntnum->locked = 0;
  }
}

/*
==============
Com_GetClientDObjBuffered
==============
*/
DObj *Com_GetClientDObjBuffered(int handle, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  unsigned int v4; 
  __int16 *v5; 
  __int64 v7; 
  int v8; 

  v2 = handle;
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 144, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  if ( (unsigned int)v2 > 0x9E4 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 145, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "( handle ) = %i", v7) )
      __debugbreak();
  }
  if ( localClientNum )
  {
    LODWORD(v7) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 146, ASSERT_TYPE_ASSERT, "( ( !localClientNum ) )", "( localClientNum ) = %i", v7) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x9E5 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 148, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMapBuffered ) ) + 0 ) ) )", "( handle ) = %i", v7) )
      __debugbreak();
  }
  v4 = clientObjMapBuffered[v2];
  v5 = &clientObjMapBuffered[v2];
  if ( v4 >= (unsigned int)s_objCount )
  {
    v8 = s_objCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( clientObjMapBuffered[handle] ) < (unsigned)( s_objCount )", "clientObjMapBuffered[handle] doesn't index s_objCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( *v5 )
    return (DObj *)s_objBuf[*v5];
  else
    return 0i64;
}

/*
==============
Com_GetCustomDataChannelRecord
==============
*/
char *Com_GetCustomDataChannelRecord(const DObj *obj)
{
  unsigned __int64 v1; 

  if ( obj < (const DObj *)s_objBuf )
    return 0i64;
  if ( obj >= (const DObj *)s_objBuf[(unsigned int)s_objCount] )
    return 0i64;
  v1 = ((char *)obj - (char *)s_objBuf) / 0x150ui64;
  if ( (v1 & 0x80000000) != 0i64 )
    return 0i64;
  if ( (unsigned int)v1 >= (unsigned int)s_objCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( objBufIndex ) < (unsigned)( s_objCount )", "objBufIndex doesn't index s_objCount\n\t%i not in [0, %i)", ((char *)obj - (char *)s_objBuf) / 0x150ui64, s_objCount) )
    __debugbreak();
  return s_customDataChannelsBuf[(int)v1];
}

/*
==============
Com_GetCustomDataChannelRecordFromIndex
==============
*/
char *Com_GetCustomDataChannelRecordFromIndex(int objBufIndex)
{
  __int64 v1; 

  v1 = objBufIndex;
  if ( objBufIndex < 0 )
    return 0i64;
  if ( objBufIndex >= (unsigned int)s_objCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( objBufIndex ) < (unsigned)( s_objCount )", "objBufIndex doesn't index s_objCount\n\t%i not in [0, %i)", objBufIndex, s_objCount) )
    __debugbreak();
  return s_customDataChannelsBuf[v1];
}

/*
==============
Com_GetDObjBufferSize
==============
*/
__int64 Com_GetDObjBufferSize(const unsigned int count)
{
  return ((160 * count + 127) & 0xFFFFFF80) + ((336 * count + 127) & 0xFFFFFF80) + ((24 * count + 127) & 0xFFFFFF80);
}

/*
==============
Com_GetDobjCount
==============
*/
__int64 Com_GetDobjCount()
{
  return (unsigned int)s_objCount - objFreeCount;
}

/*
==============
Com_GetFreeDObjCount
==============
*/
__int64 Com_GetFreeDObjCount()
{
  return objFreeCount;
}

/*
==============
Com_GetFreeDObjIndex
==============
*/
__int64 Com_GetFreeDObjIndex()
{
  unsigned int v0; 
  __int64 v1; 
  bool *v2; 
  bool v4; 
  __int64 v5; 

  Sys_EnterCriticalSection(CRITSECT_DOBJ_ALLOC);
  v0 = s_objCount;
  v1 = com_lastDObjIndex + 1;
  if ( (unsigned int)v1 < (unsigned int)s_objCount )
  {
    v2 = &objAlloced[(unsigned int)v1];
    while ( *v2 )
    {
      v1 = (unsigned int)(v1 + 1);
      ++v2;
      if ( (unsigned int)v1 >= (unsigned int)s_objCount )
        goto LABEL_5;
    }
    com_lastDObjIndex = v1;
    if ( !(_DWORD)v1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 195, ASSERT_TYPE_ASSERT, "(i)", (const char *)&queryFormat, "i") )
        __debugbreak();
      v0 = s_objCount;
    }
    if ( (unsigned int)v1 >= v0 )
    {
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( s_objCount )", "i doesn't index s_objCount\n\t%i not in [0, %i)", v5, v0) )
        __debugbreak();
    }
    v4 = objFreeCount == 0;
    objAlloced[v1] = 1;
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 198, ASSERT_TYPE_ASSERT, "(objFreeCount)", (const char *)&queryFormat, "objFreeCount") )
      __debugbreak();
    goto LABEL_32;
  }
LABEL_5:
  LODWORD(v1) = 1;
  if ( com_lastDObjIndex )
  {
    while ( objAlloced[(unsigned int)v1] )
    {
      LODWORD(v1) = v1 + 1;
      if ( (unsigned int)v1 > com_lastDObjIndex )
        goto LABEL_8;
    }
    com_lastDObjIndex = v1;
    if ( !(_DWORD)v1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 213, ASSERT_TYPE_ASSERT, "(i)", (const char *)&queryFormat, "i") )
        __debugbreak();
      v0 = s_objCount;
    }
    if ( (unsigned int)v1 >= v0 )
    {
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 214, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( s_objCount )", "i doesn't index s_objCount\n\t%i not in [0, %i)", v5, v0) )
        __debugbreak();
    }
    v4 = objFreeCount == 0;
    objAlloced[(unsigned int)v1] = 1;
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 216, ASSERT_TYPE_ASSERT, "(objFreeCount)", (const char *)&queryFormat, "objFreeCount") )
      __debugbreak();
LABEL_32:
    --objFreeCount;
    Sys_LeaveCriticalSection(CRITSECT_DOBJ_ALLOC);
    return (unsigned int)v1;
  }
LABEL_8:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
    __debugbreak();
  return 0i64;
}

/*
==============
Com_GetMaxDObjCount
==============
*/
__int64 Com_GetMaxDObjCount()
{
  return (unsigned int)s_objCount;
}

/*
==============
Com_GetObjBufIndex
==============
*/
unsigned __int64 Com_GetObjBufIndex(const DObj *obj)
{
  if ( obj < (const DObj *)s_objBuf || obj >= (const DObj *)s_objBuf[(unsigned int)s_objCount] )
    return 0xFFFFFFFFi64;
  else
    return ((char *)obj - (char *)s_objBuf) / 0x150ui64;
}

/*
==============
Com_GetServerDObjForEnt
==============
*/
DObj *Com_GetServerDObjForEnt(const gentity_s *ent)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
  v3 = (v2 >> 63) + v2;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  v3 = (__int16)v3;
  if ( (unsigned int)(__int16)v3 >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( serverObjMap ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( serverObjMap )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = serverObjMap[v3];
  if ( v4 >= (unsigned int)s_objCount )
  {
    LODWORD(v7) = s_objCount;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( objIndex ) < (unsigned)( s_objCount )", "objIndex doesn't index s_objCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( v4 )
    return (DObj *)s_objBuf[v4];
  else
    return 0i64;
}

/*
==============
Com_GetServerDObjForEntnum
==============
*/
DObj *Com_GetServerDObjForEntnum(int handle)
{
  __int64 v1; 
  unsigned int v2; 
  __int64 v4; 

  v1 = handle;
  if ( (unsigned int)handle >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 94, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( serverObjMap ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( serverObjMap )\n\t%i not in [0, %i)", handle, 2048) )
    __debugbreak();
  v2 = serverObjMap[v1];
  if ( !v2 )
    return 0i64;
  if ( v2 >= (unsigned int)s_objCount )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 97, ASSERT_TYPE_ASSERT, "( ( !objIndex || (objIndex < s_objCount) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || (objIndex < s_objCount) )", v4) )
      __debugbreak();
  }
  return (DObj *)s_objBuf[v2];
}

/*
==============
Com_GetSkelRecord
==============
*/
char *Com_GetSkelRecord(const DObj *obj)
{
  unsigned __int64 v1; 

  if ( obj < (const DObj *)s_objBuf )
    return 0i64;
  if ( obj >= (const DObj *)s_objBuf[(unsigned int)s_objCount] )
    return 0i64;
  v1 = ((char *)obj - (char *)s_objBuf) / 0x150ui64;
  if ( (v1 & 0x80000000) != 0i64 )
    return 0i64;
  if ( (unsigned int)v1 >= (unsigned int)s_objCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 911, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_objCount )", "index doesn't index s_objCount\n\t%i not in [0, %i)", ((char *)obj - (char *)s_objBuf) / 0x150ui64, s_objCount) )
    __debugbreak();
  return s_skelRecordBuf[(int)v1];
}

/*
==============
Com_HandleNoFreeDobjs
==============
*/
void Com_HandleNoFreeDobjs(bool fromServer)
{
  __int64 v3; 
  __int64 v4; 
  DObjModelInstanceCount *v5; 
  const char *v8; 
  __m256i v9; 

  _RSI = (DObjModelInstanceCount *)Mem_Virtual_Alloc(0x10000ui64, "Com_HandleNoFreeDobjs", TRACK_DEBUG);
  v3 = (int)Com_BuildDObjModelList(_RSI);
  Com_Printf_NoFilter("Alloced Dobj Models:\n");
  v4 = v3;
  if ( (int)v3 > 0 )
  {
    v5 = _RSI;
    do
    {
      Com_Printf_NoFilter(" %s %d\n", v5->modelName, v5->dobjCount);
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups [rsp+88h+var_38], ymm0
    vmovups xmm0, xmmword ptr [rsi+20h]
    vmovups [rsp+88h+var_18], xmm0
  }
  Mem_Virtual_Free(_RSI);
  if ( fromServer )
    G_DebugBlameForEntCount(0);
  v8 = "null";
  if ( (int)v3 > 0 )
    v8 = (const char *)v9.m256i_i64[0];
  Sys_Error((const ObfuscateErrorText)&stru_144012160, (unsigned int)s_objCount, v8);
}

/*
==============
Com_InitDObj
==============
*/
void Com_InitDObj(void)
{
  unsigned int v0; 
  unsigned int v1; 
  int v2; 

  v0 = s_objCount;
  if ( (_DWORD)s_objCount )
  {
    if ( (unsigned int)s_objCount > 0x1000 )
    {
      v2 = s_objCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 684, ASSERT_TYPE_ASSERT, "( ( s_objCount <= (2048 * 2) ) )", "( s_objCount ) = %i", v2) )
        __debugbreak();
      v0 = s_objCount;
    }
    memset_0(objAlloced, 0, v0);
    v1 = 0;
    objFreeCount = v0 - 1;
    if ( v0 )
    {
      do
        DObjResetPointers((DObj *)s_objBuf[v1++]);
      while ( v1 < (unsigned int)s_objCount );
    }
    memset_0(serverObjDirty, 0, sizeof(serverObjDirty));
    memset_0(clientObjMap, 0, sizeof(clientObjMap));
    memset_0(serverObjMap, 0, sizeof(serverObjMap));
    com_lastDObjIndex = 1;
    g_bDObjInited = 1;
  }
}

/*
==============
Com_InitDObjBuffer
==============
*/
void Com_InitDObjBuffer(HunkUser *hunkUser, unsigned int count)
{
  __int64 v2; 
  bool v4; 
  unsigned __int64 v5; 
  __int64 v6; 

  v2 = count;
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 637, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    if ( (unsigned int)v2 <= 0x1000 )
      goto LABEL_10;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 639, ASSERT_TYPE_ASSERT, "( count ) <= ( (2048 * 2) )", "%s <= %s\n\t%i, %i", "count", "DOBJ_HANDLE_MAX", v2, 4096);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 638, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  if ( (_DWORD)s_objCount )
  {
    LODWORD(v6) = s_objCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 641, ASSERT_TYPE_ASSERT, "( ( !s_objCount ) )", "( s_objCount ) = %i", v6) )
      __debugbreak();
  }
  if ( s_objBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 642, ASSERT_TYPE_ASSERT, "(!s_objBuf)", (const char *)&queryFormat, "!s_objBuf") )
    __debugbreak();
  LODWORD(s_objCount) = v2;
  s_objBuf = (char (*)[336])Mem_HunkUser_AllocInternal(hunkUser, 336 * v2, 0x80ui64, "Com_InitDObjBuffer");
  s_skelRecordBuf = (char (*)[160])Mem_HunkUser_AllocInternal(hunkUser, 160 * v2, 0x80ui64, "Com_InitDObjBuffer");
  v5 = 24 * v2;
  s_customDataChannelsBuf = (char (*)[24])Mem_HunkUser_AllocInternal(hunkUser, v5, 0x80ui64, "Com_InitDObjBuffer");
  memset_0(s_customDataChannelsBuf, 0, v5);
}

/*
==============
Com_ListDobjModels
==============
*/
void Com_ListDobjModels(void)
{
  DObjModelInstanceCount *v0; 
  __int64 v1; 
  __int64 v2; 
  DObjModelInstanceCount *v3; 

  v0 = (DObjModelInstanceCount *)Mem_Virtual_Alloc(0x10000ui64, "Com_ListDobjModels", TRACK_DEBUG);
  v1 = (int)Com_BuildDObjModelList(v0);
  Com_Printf_NoFilter("Free Dobj count %d:\n", objFreeCount);
  Com_Printf_NoFilter("Alloced Dobj Models:\n");
  v2 = v1;
  if ( (int)v1 > 0 )
  {
    v3 = v0;
    do
    {
      Com_Printf_NoFilter(" %s %d\n", v3->modelName, v3->dobjCount);
      ++v3;
      --v2;
    }
    while ( v2 );
  }
  Mem_Virtual_Free(v0);
}

/*
==============
Com_SafeClientDObjFree
==============
*/
void Com_SafeClientDObjFree(__int64 handle, LocalClientNum_t localClientNum)
{
  int v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  char (*v9)[336]; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  v3 = handle;
  v4 = handle;
  v5 = handle;
  if ( (unsigned int)handle >= 0x9E5 )
  {
    v11 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 532, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "( handle ) = %i", v11) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    LODWORD(v10) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (2) )", "localClientNum doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v10, v13) )
      __debugbreak();
  }
  v6 = 2533 * localClientNum + v3;
  if ( v6 >= 0x13CA )
  {
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 539, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "( handle ) = %i", v10) )
      __debugbreak();
  }
  if ( v4 >= 0x9E5 )
  {
    LODWORD(v12) = 2533;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 540, ASSERT_TYPE_ASSERT, "(unsigned)( handle - localClientNum * ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "handle - localClientNum * CLIENT_DOBJ_HANDLE_MAX doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v7 = (int)v6;
  v8 = clientObjMap[v7];
  if ( clientObjMap[v7] )
  {
    if ( v7 >= 5066 )
      goto LABEL_24;
    clientObjMap[v7] = 0;
    if ( (unsigned int)v8 >= (unsigned int)s_objCount )
    {
      LODWORD(v12) = s_objCount;
      LODWORD(v10) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_objCount )", "index doesn't index s_objCount\n\t%i not in [0, %i)", v10, v12) )
        __debugbreak();
    }
    Sys_EnterCriticalSection(CRITSECT_DOBJ_ALLOC);
    if ( v8 >= 0x1000 )
    {
LABEL_24:
      j___report_rangecheckfailure(handle);
      JUMPOUT(0x1413D2C3Ci64);
    }
    v9 = s_objBuf;
    ++objFreeCount;
    objAlloced[v8] = 0;
    if ( !DObjHasClientFlag((const DObj *)v9[v8]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 559, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( reinterpret_cast<const DObj *>(s_objBuf[index]) ))", (const char *)&queryFormat, "DObjHasClientFlag( reinterpret_cast<const DObj *>(s_objBuf[index]) )") )
      __debugbreak();
    DObjFree((DObj *)s_objBuf[v8]);
    XAnimIKClearPreCacheDObj(v8);
    Sys_LeaveCriticalSection(CRITSECT_DOBJ_ALLOC);
  }
}

/*
==============
Com_SafeServerDObjFree
==============
*/
void Com_SafeServerDObjFree(__int64 handle)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  char (*v4)[336]; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = (int)handle;
  if ( (unsigned int)handle >= 0x800 )
  {
    v6 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 577, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < (( 2048 )) ) )", "( handle ) = %i", v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = serverObjMap[v1];
  if ( serverObjMap[v1] )
  {
    if ( v2 >= 2048 )
      goto LABEL_15;
    serverObjMap[v2] = 0;
    Com_SetServerDObjDirty(v1);
    if ( (unsigned int)v3 >= (unsigned int)s_objCount )
    {
      v7 = s_objCount;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 588, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_objCount )", "index doesn't index s_objCount\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    Sys_EnterCriticalSection(CRITSECT_DOBJ_ALLOC);
    if ( v3 >= 0x1000 )
    {
LABEL_15:
      j___report_rangecheckfailure(handle);
      JUMPOUT(0x1413D2E42i64);
    }
    v4 = s_objBuf;
    ++objFreeCount;
    objAlloced[v3] = 0;
    if ( DObjHasClientFlag((const DObj *)v4[v3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 600, ASSERT_TYPE_ASSERT, "(!DObjHasClientFlag( reinterpret_cast<const DObj *>(s_objBuf[index]) ))", (const char *)&queryFormat, "!DObjHasClientFlag( reinterpret_cast<const DObj *>(s_objBuf[index]) )") )
      __debugbreak();
    DObjFree((DObj *)s_objBuf[v3]);
    XAnimIKClearPreCacheDObj(v3);
    Sys_LeaveCriticalSection(CRITSECT_DOBJ_ALLOC);
  }
}

/*
==============
Com_ServerDObjClean
==============
*/
void Com_ServerDObjClean(int handle)
{
  __int64 v1; 

  v1 = handle;
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 171, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 172, ASSERT_TYPE_ASSERT, "((unsigned)handle < (( 2048 )))", (const char *)&queryFormat, "(unsigned)handle < SERVER_DOBJ_HANDLE_MAX") )
    __debugbreak();
  serverObjDirty[v1 >> 3] &= ~(1 << (v1 & 7));
}

/*
==============
Com_ServerDObjCreate
==============
*/
DObj *Com_ServerDObjCreate(DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, bool requiresIKPreCache)
{
  __int64 v5; 
  __int64 FreeDObjIndex; 
  bool v10; 
  DObj *v11; 
  __int64 owner; 

  v5 = handle;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 441, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(owner) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 442, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < (( 2048 )) ) )", "( handle ) = %i", owner) )
      __debugbreak();
  }
  if ( Com_GetServerDObjForEntnum(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 443, ASSERT_TYPE_ASSERT, "(!Com_GetServerDObjForEntnum( handle ))", (const char *)&queryFormat, "!Com_GetServerDObjForEntnum( handle )") )
    __debugbreak();
  FreeDObjIndex = (int)Com_GetFreeDObjIndex();
  Com_SetServerDObjDirty(v5);
  if ( (unsigned int)v5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 451, ASSERT_TYPE_ASSERT, "((unsigned)handle < ( sizeof( *array_counter( serverObjMap ) ) + 0 ))", (const char *)&queryFormat, "(unsigned)handle < ARRAY_COUNT( serverObjMap )") )
    __debugbreak();
  if ( (unsigned int)FreeDObjIndex >= (unsigned int)s_objCount )
  {
    LODWORD(owner) = FreeDObjIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_objCount )", "index doesn't index s_objCount\n\t%i not in [0, %i)", owner, s_objCount) )
      __debugbreak();
  }
  LOBYTE(owner) = 0;
  DObjCreate(dobjModels, numModels, tree, s_objBuf[FreeDObjIndex], (unsigned __int16)(v5 + 1), (XAnimOwner)owner);
  v10 = objFreeCount == 0;
  serverObjMap[v5] = FreeDObjIndex;
  if ( v10 )
    Com_HandleNoFreeDobjs(1);
  v11 = (DObj *)s_objBuf[FreeDObjIndex];
  if ( requiresIKPreCache )
    XAnimIKPreCacheDObj(v11, v5, FreeDObjIndex);
  return v11;
}

/*
==============
Com_ServerDObjDirty
==============
*/
bool Com_ServerDObjDirty(int handle)
{
  __int64 v1; 

  v1 = handle;
  if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 163, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 164, ASSERT_TYPE_ASSERT, "((unsigned)handle < (( 2048 )))", (const char *)&queryFormat, "(unsigned)handle < SERVER_DOBJ_HANDLE_MAX") )
    __debugbreak();
  return ((unsigned __int8)(1 << (v1 & 7)) & serverObjDirty[v1 >> 3]) != 0;
}

/*
==============
Com_SetServerDObjDirty
==============
*/
void Com_SetServerDObjDirty(int handle)
{
  __int64 v1; 

  v1 = handle;
  if ( (unsigned int)handle >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 156, ASSERT_TYPE_ASSERT, "(( unsigned )handle < (( 2048 )))", (const char *)&queryFormat, "( unsigned )handle < SERVER_DOBJ_HANDLE_MAX") )
    __debugbreak();
  serverObjDirty[v1 >> 3] |= 1 << (v1 & 7);
}

/*
==============
Com_ShutdownDObj
==============
*/
void Com_ShutdownDObj(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  __int16 *v3; 
  unsigned int v4; 
  __int16 *v5; 
  __int16 *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( g_bDObjInited )
  {
    if ( !(_DWORD)s_objCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 716, ASSERT_TYPE_ASSERT, "(s_objCount)", (const char *)&queryFormat, "s_objCount") )
      __debugbreak();
    v0 = 0;
    v1 = 0;
    for ( g_bDObjInited = 0; v1 < (unsigned int)s_objCount; ++v1 )
    {
      if ( objAlloced[v1] )
      {
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 721, ASSERT_TYPE_ASSERT, "( ( !objAlloced[i] ) )", "( i ) = %i", v7) )
          __debugbreak();
      }
    }
    v2 = 0;
    v3 = clientObjMap;
    do
    {
      if ( *v3 )
      {
        LODWORD(v9) = *v3;
        LODWORD(v8) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 724, ASSERT_TYPE_ASSERT, "(!clientObjMap[i])", "%s\n\ti: %d, clientObjMap[i]: %d", "!clientObjMap[i]", v8, v9) )
          __debugbreak();
      }
      ++v2;
      ++v3;
    }
    while ( v2 < 0x13CA );
    v4 = 0;
    v5 = clientObjMapBuffered;
    do
    {
      if ( *v5 )
      {
        LODWORD(v9) = *v5;
        LODWORD(v8) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 726, ASSERT_TYPE_ASSERT, "(!clientObjMapBuffered[i])", "%s\n\ti: %d, clientObjMapBuffered[i]: %d", "!clientObjMapBuffered[i]", v8, v9) )
          __debugbreak();
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 0x9E5 );
    v6 = serverObjMap;
    do
    {
      if ( *v6 )
      {
        LODWORD(v9) = *v6;
        LODWORD(v8) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 729, ASSERT_TYPE_ASSERT, "(!serverObjMap[i])", "%s\n\ti: %d, serverObjMap[i]: %d", "!serverObjMap[i]", v8, v9) )
          __debugbreak();
      }
      ++v0;
      ++v6;
    }
    while ( v0 < 0x800 );
    if ( objFreeCount != (_DWORD)s_objCount - 1 )
    {
      LODWORD(v7) = objFreeCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 730, ASSERT_TYPE_ASSERT, "( ( objFreeCount == s_objCount - 1 ) )", "( objFreeCount ) = %i", v7) )
        __debugbreak();
    }
  }
}

/*
==============
Com_ShutdownDObjBuffer
==============
*/
void Com_ShutdownDObjBuffer(void)
{
  LODWORD(s_objCount) = 0;
  s_objBuf = NULL;
  s_skelRecordBuf = NULL;
  s_customDataChannelsBuf = NULL;
}

/*
==============
DB_LoadDObjs
==============
*/
void DB_LoadDObjs(void)
{
  XAnimOwner v0; 
  bitarray<2560> *v1; 
  int v2; 
  int v3; 
  __int16 *v4; 
  unsigned int i; 
  unsigned int v6; 
  DObj *v7; 
  unsigned int v8; 
  unsigned int *v9; 
  int v10; 
  bitarray<2560> *v11; 
  unsigned int v12; 
  DObj *ServerDObjForEntnum; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 

  XAnimIKClearPreCache();
  v1 = s_clientDObjArchived;
  v2 = 0;
  v18 = 0;
  v3 = 0;
  v4 = clientObjMap;
  do
  {
    for ( i = 0; (int)i < 2533; ++i )
    {
      if ( i > 0x9E4 )
      {
        LODWORD(v15) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v15) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= 0x13CA )
      {
        LODWORD(v15) = 2;
        LODWORD(v14) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( v3 + i >= 0x13CA )
      {
        LODWORD(v15) = v3 + i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v15) )
          __debugbreak();
      }
      v6 = *v4;
      if ( *v4 )
      {
        if ( v6 >= (unsigned int)s_objCount )
        {
          LODWORD(v15) = *v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v15) )
            __debugbreak();
        }
        v7 = (DObj *)s_objBuf[v6];
        if ( v7 )
        {
          if ( i >= 0xA00 )
          {
            LODWORD(v15) = 2560;
            LODWORD(v14) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
              __debugbreak();
          }
          v8 = 0x80000000 >> (i & 0x1F);
          v9 = &v1->array[(unsigned __int64)i >> 5];
          if ( (v8 & *v9) != 0 )
          {
            if ( i >= 0xA00 )
            {
              LODWORD(v17) = 2560;
              LODWORD(v16) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
                __debugbreak();
            }
            LOBYTE(v0) = 1;
            *v9 &= ~v8;
            DObjUnarchive(v7, i, 1, v0);
          }
          v2 = v18;
        }
      }
      ++v4;
    }
    v10 = 0;
    v11 = v1;
    v12 = 0;
    while ( !v11->array[0] )
    {
      ++v12;
      v11 = (bitarray<2560> *)((char *)v11 + 4);
      if ( v12 >= 0x50 )
        goto LABEL_33;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 820, ASSERT_TYPE_ASSERT, "(s_clientDObjArchived[localClientNum].noBitsOn())", (const char *)&queryFormat, "s_clientDObjArchived[localClientNum].noBitsOn()") )
      __debugbreak();
LABEL_33:
    ++v2;
    v3 += 2533;
    v18 = v2;
    ++v1;
  }
  while ( v3 < 5066 );
  do
  {
    ServerDObjForEntnum = Com_GetServerDObjForEntnum(v10);
    if ( ServerDObjForEntnum )
      DObjUnarchive(ServerDObjForEntnum, v10, 1, MOVEMENT);
    ++v10;
  }
  while ( v10 < 2048 );
  CG_ModPrvLoadDObjs();
}

/*
==============
DB_SaveDObjs
==============
*/
void DB_SaveDObjs(void)
{
  cg_t **v0; 
  bitarray<2560> *v1; 
  signed int v2; 
  int v3; 
  __int16 *v4; 
  unsigned int v5; 
  bitarray<2560> *v6; 
  int i; 
  unsigned int v8; 
  DObj *v9; 
  unsigned int v10; 
  unsigned int *v11; 
  int v12; 
  DObj *ServerDObjForEntnum; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  bitarray<2560> *v18; 
  cg_t **v19; 

  v0 = cg_t::ms_cgArray;
  v1 = s_clientDObjArchived;
  v19 = cg_t::ms_cgArray;
  v2 = 0;
  v18 = s_clientDObjArchived;
  v3 = 0;
  v4 = clientObjMap;
  do
  {
    v5 = 0;
    v6 = v1;
    while ( !v6->array[0] )
    {
      ++v5;
      v6 = (bitarray<2560> *)((char *)v6 + 4);
      if ( v5 >= 0x50 )
        goto LABEL_8;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 747, ASSERT_TYPE_ASSERT, "(s_clientDObjArchived[localClientNum].noBitsOn())", (const char *)&queryFormat, "s_clientDObjArchived[localClientNum].noBitsOn()") )
      __debugbreak();
LABEL_8:
    for ( i = 0; i < 2533; ++i )
    {
      if ( (unsigned int)i > 0x9E4 )
      {
        LODWORD(v15) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v15) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= 0x13CA )
      {
        LODWORD(v15) = 2;
        LODWORD(v14) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( (unsigned int)(v3 + i) >= 0x13CA )
      {
        LODWORD(v15) = v3 + i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v15) )
          __debugbreak();
      }
      v8 = *v4;
      if ( *v4 )
      {
        if ( v8 >= (unsigned int)s_objCount )
        {
          LODWORD(v15) = *v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v15) )
            __debugbreak();
        }
        v9 = (DObj *)s_objBuf[v8];
        if ( v9 && (i >= 2048 || CG_Entity_CanUseDObj((LocalClientNum_t)v2, i)) )
        {
          if ( (unsigned int)(i - 2114) > 1 )
            goto LABEL_54;
          if ( v2 >= (unsigned int)cg_t::ms_allocatedCount )
          {
            LODWORD(v15) = cg_t::ms_allocatedCount;
            LODWORD(v14) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          if ( !*v0 )
          {
            LODWORD(v15) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v15) )
              __debugbreak();
          }
          if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
          {
            LODWORD(v15) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v15) )
              __debugbreak();
          }
          if ( CG_Entity_CanUseDObj((LocalClientNum_t)v2, (*v0)->clientNum) )
          {
LABEL_54:
            if ( (unsigned int)i >= 0xA00 )
            {
              LODWORD(v15) = 2560;
              LODWORD(v14) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
                __debugbreak();
            }
            v10 = 0x80000000 >> (i & 0x1F);
            v11 = &v18->array[(unsigned __int64)(unsigned int)i >> 5];
            if ( (v10 & *v11) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.cpp", 771, ASSERT_TYPE_ASSERT, "(!s_clientDObjArchived[localClientNum].testBit( handle ))", (const char *)&queryFormat, "!s_clientDObjArchived[localClientNum].testBit( handle )") )
              __debugbreak();
            DObjArchive(v9);
            if ( (unsigned int)i >= 0xA00 )
            {
              LODWORD(v17) = 2560;
              LODWORD(v16) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
                __debugbreak();
            }
            *v11 |= v10;
            v0 = v19;
          }
        }
      }
      ++v4;
    }
    v1 = v18 + 1;
    ++v0;
    ++v18;
    ++v2;
    v19 = v0;
    v3 += 2533;
    v12 = 0;
  }
  while ( v3 < 5066 );
  do
  {
    ServerDObjForEntnum = Com_GetServerDObjForEntnum(v12);
    if ( ServerDObjForEntnum )
      DObjArchive(ServerDObjForEntnum);
    ++v12;
  }
  while ( v12 < 2048 );
  CG_ModPrvSaveDObjs();
}

