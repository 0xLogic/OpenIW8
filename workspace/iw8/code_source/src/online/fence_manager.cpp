/*
==============
FenceManager_GetStatusStringForFenceIndex
==============
*/

void __fastcall FenceManager_GetStatusStringForFenceIndex(int controllerIndex, const int fenceIndex, char *fenceStatusString, const int maxLength)
{
  ?FenceManager_GetStatusStringForFenceIndex@@YAXHHPEADH@Z(controllerIndex, fenceIndex, fenceStatusString, maxLength);
}

/*
==============
FenceManager_Init
==============
*/

void FenceManager_Init(void)
{
  ?FenceManager_Init@@YAXXZ();
}

/*
==============
FenceManager_PrintStatusStringForAllFences
==============
*/

void __fastcall FenceManager_PrintStatusStringForAllFences(int controllerIndex)
{
  ?FenceManager_PrintStatusStringForAllFences@@YAXH@Z(controllerIndex);
}

/*
==============
FenceManager_Frame
==============
*/

void FenceManager_Frame(void)
{
  ?FenceManager_Frame@@YAXXZ();
}

/*
==============
FenceManager_IsFencePassing
==============
*/

bool __fastcall FenceManager_IsFencePassing(int controllerIndex, FenceType fenceType)
{
  return ?FenceManager_IsFencePassing@@YA_NHW4FenceType@@@Z(controllerIndex, fenceType);
}

/*
==============
FenceManager_GetStatusStringForRootFenceNotPassing
==============
*/

void __fastcall FenceManager_GetStatusStringForRootFenceNotPassing(int controllerIndex, FenceType fenceType, char *fenceStatusString, const int maxLength)
{
  ?FenceManager_GetStatusStringForRootFenceNotPassing@@YAXHW4FenceType@@PEADH@Z(controllerIndex, fenceType, fenceStatusString, maxLength);
}

/*
==============
FenceManager_RegisterForFenceDependenciesUpdatesForController
==============
*/

void __fastcall FenceManager_RegisterForFenceDependenciesUpdatesForController(int controllerIndex, FenceType fenceType, void (__fastcall *callback)(int, bool))
{
  ?FenceManager_RegisterForFenceDependenciesUpdatesForController@@YAXHW4FenceType@@P6AXH_N@Z@Z(controllerIndex, fenceType, callback);
}

/*
==============
FenceManager_ResetFenceObjectsForController
==============
*/

void __fastcall FenceManager_ResetFenceObjectsForController(int controllerIndex, bool shouldClearCallbacks)
{
  ?FenceManager_ResetFenceObjectsForController@@YAXH_N@Z(controllerIndex, shouldClearCallbacks);
}

/*
==============
FenceManager_IsFencePassingForAllControllers
==============
*/

bool __fastcall FenceManager_IsFencePassingForAllControllers(FenceType fenceType)
{
  return ?FenceManager_IsFencePassingForAllControllers@@YA_NW4FenceType@@@Z(fenceType);
}

/*
==============
FenceManager_AreDependenciesMet
==============
*/

bool __fastcall FenceManager_AreDependenciesMet(int controllerIndex, FenceType fenceType)
{
  return ?FenceManager_AreDependenciesMet@@YA_NHW4FenceType@@@Z(controllerIndex, fenceType);
}

/*
==============
FenceManager_GetRootFenceNotPassingForFenceType
==============
*/

int __fastcall FenceManager_GetRootFenceNotPassingForFenceType(int controllerIndex, FenceType fenceType)
{
  return ?FenceManager_GetRootFenceNotPassingForFenceType@@YAHHW4FenceType@@@Z(controllerIndex, fenceType);
}

/*
==============
FenceManager_GetRetailDebug
==============
*/

void __fastcall FenceManager_GetRetailDebug(char *destString, const int maxLength)
{
  ?FenceManager_GetRetailDebug@@YAXPEADH@Z(destString, maxLength);
}

/*
==============
FenceManager_ResetFenceObjectForControllerByType
==============
*/

void __fastcall FenceManager_ResetFenceObjectForControllerByType(int controllerIndex, FenceType fenceType, bool shouldClearCallbacks)
{
  ?FenceManager_ResetFenceObjectForControllerByType@@YAXHW4FenceType@@_N@Z(controllerIndex, fenceType, shouldClearCallbacks);
}

/*
==============
FenceManager_IsFenceFailed
==============
*/

bool __fastcall FenceManager_IsFenceFailed(int controllerIndex, FenceType fenceType)
{
  return ?FenceManager_IsFenceFailed@@YA_NHW4FenceType@@@Z(controllerIndex, fenceType);
}

/*
==============
FenceManager_RegisterFence
==============
*/

void __fastcall FenceManager_RegisterFence(FenceType fenceType, FenceObject *fence)
{
  ?FenceManager_RegisterFence@@YAXW4FenceType@@PEAUFenceObject@@@Z(fenceType, fence);
}

/*
==============
FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers
==============
*/

void __fastcall FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FenceType fenceType, void (__fastcall *callback)(int, bool))
{
  ?FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers@@YAXW4FenceType@@P6AXH_N@Z@Z(fenceType, callback);
}

/*
==============
FenceManager_ResetAllControllers
==============
*/

void FenceManager_ResetAllControllers(void)
{
  ?FenceManager_ResetAllControllers@@YAXXZ();
}

/*
==============
FenceManager_GetStatusStringForAllFences
==============
*/

void __fastcall FenceManager_GetStatusStringForAllFences(int controllerIndex, char *fenceStatusString, const int maxLength)
{
  ?FenceManager_GetStatusStringForAllFences@@YAXHPEADH@Z(controllerIndex, fenceStatusString, maxLength);
}

/*
==============
FenceManager_AreDependenciesMetForAllControllers
==============
*/

bool __fastcall FenceManager_AreDependenciesMetForAllControllers(FenceType fenceType)
{
  return ?FenceManager_AreDependenciesMetForAllControllers@@YA_NW4FenceType@@@Z(fenceType);
}

/*
==============
FenceManager_DrawDebug
==============
*/

void __fastcall FenceManager_DrawDebug(const int controllerIndex, const CgDrawDebug *drawDebug)
{
  ?FenceManager_DrawDebug@@YAXHPEBVCgDrawDebug@@@Z(controllerIndex, drawDebug);
}

/*
==============
FenceManager_GetErrorCode
==============
*/

int __fastcall FenceManager_GetErrorCode(int controllerIndex, FenceType fenceType)
{
  return ?FenceManager_GetErrorCode@@YAHHW4FenceType@@@Z(controllerIndex, fenceType);
}

/*
==============
FenceManager_IsFenceComplete
==============
*/

bool __fastcall FenceManager_IsFenceComplete(int controllerIndex, FenceType fenceType)
{
  return ?FenceManager_IsFenceComplete@@YA_NHW4FenceType@@@Z(controllerIndex, fenceType);
}

/*
==============
FenceManager_GetFenceIndexForFenceType
==============
*/

int __fastcall FenceManager_GetFenceIndexForFenceType(FenceType fenceType)
{
  return ?FenceManager_GetFenceIndexForFenceType@@YAHW4FenceType@@@Z(fenceType);
}

/*
==============
FenceManager_ResetFenceObjectForControllerByIndex
==============
*/

void __fastcall FenceManager_ResetFenceObjectForControllerByIndex(int controllerIndex, int fenceIndex, bool shouldClearCallbacks)
{
  ?FenceManager_ResetFenceObjectForControllerByIndex@@YAXHH_N@Z(controllerIndex, fenceIndex, shouldClearCallbacks);
}

/*
==============
FenceManager_ResetFenceObjectForControllers
==============
*/

void __fastcall FenceManager_ResetFenceObjectForControllers(FenceType fenceType, bool shouldClearCallbacks)
{
  ?FenceManager_ResetFenceObjectForControllers@@YAXW4FenceType@@_N@Z(fenceType, shouldClearCallbacks);
}

/*
==============
FenceManager_AreDependenciesMet
==============
*/
_BOOL8 FenceManager_AreDependenciesMet(int controllerIndex, FenceType fenceType)
{
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 
  FenceObject *v8; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  v3 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 308, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = log2f(v4);
  v7 = (int)(float)(v6 + 0.5);
  if ( v7 >= 0x1F )
  {
    v12 = 31;
    LODWORD(v10) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v8 = s_fenceObjects[v3][v7];
  if ( v8->m_controllerIndex >= 8u )
  {
    LODWORD(v11) = 8;
    LODWORD(v10) = v8->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return v8->m_dependenciesMet;
}

/*
==============
FenceManager_AreDependenciesMetForAllControllers
==============
*/
char FenceManager_AreDependenciesMetForAllControllers(FenceType fenceType)
{
  float v2; 
  float v3; 
  float v4; 
  unsigned int v5; 
  __int64 v6; 
  char *i; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 288, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  v2 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v3 = (float)fenceType;
    v2 = v3 + 1.8446744e19;
  }
  v4 = log2f(v2);
  v5 = (int)(float)(v4 + 0.5);
  if ( v5 >= 0x1F )
  {
    v12 = 31;
    LODWORD(v10) = (int)(float)(v4 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v6 = 0i64;
  for ( i = (char *)s_fenceObjects + 8 * (int)v5; ; i += 248 )
  {
    v8 = *(_QWORD *)i;
    if ( *(_DWORD *)(*(_QWORD *)i + 8i64) >= 8u )
    {
      LODWORD(v11) = 8;
      LODWORD(v10) = *(_DWORD *)(*(_QWORD *)i + 8i64);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !*(_BYTE *)(v8 + 12) )
      break;
    if ( ++v6 >= 8 )
      return 1;
  }
  return 0;
}

/*
==============
FenceManager_DrawDebug
==============
*/
void FenceManager_DrawDebug(const int controllerIndex, const CgDrawDebug *drawDebug)
{
  __int64 v2; 
  LocalClientNum_t ClientFromController; 
  bool v5; 
  const ScreenPlacement *v6; 
  __int128 v7; 
  const char **v8; 
  char *v9; 
  __int64 v10; 
  bool v11; 
  unsigned int v12; 
  unsigned int v13; 
  const vec4_t *color; 
  __int64 (__fastcall *v15)(__int64); 
  unsigned int v16; 
  unsigned int v17; 
  double v18; 
  __int128 v19; 
  char *text; 
  char *label; 
  char dest[64]; 

  v2 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v6 = &scrPlaceViewDisplay[ClientFromController];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v5 )
      __debugbreak();
  }
  v6 = &scrPlaceFull;
LABEL_8:
  v7 = LODWORD(FLOAT_20_0);
  v8 = s_fenceNames;
  v9 = (char *)s_fenceObjects + 248 * v2 - (_QWORD)s_fenceNames;
  do
  {
    v10 = *(__int64 *)((char *)v8 + (_QWORD)v9);
    if ( *(_DWORD *)(v10 + 8) >= 8u )
    {
      LODWORD(label) = 8;
      LODWORD(text) = *(_DWORD *)(v10 + 8);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
    }
    v11 = *(_BYTE *)(v10 + 13) || *(_BYTE *)(v10 + 14);
    v12 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
    {
      *(_DWORD *)(v10 + 72) = 0;
      if ( v12 >= 8 )
      {
        LODWORD(label) = 8;
        LODWORD(text) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", text, label) )
          __debugbreak();
      }
      v15 = **(__int64 (__fastcall ***)(__int64))v10;
      if ( *(_BYTE *)(v10 + 12) )
      {
        v16 = v15(v10);
        Com_sprintf<64>((char (*)[64])dest, "Active %d  ", v16);
        color = &colorGreen;
      }
      else
      {
        v17 = v15(v10);
        Com_sprintf<64>((char (*)[64])dest, "Pending %d  ", v17);
        color = &colorWhite;
      }
      goto LABEL_33;
    }
    if ( v12 >= 8 )
    {
      LODWORD(label) = 8;
      LODWORD(text) = *(_DWORD *)(v10 + 8);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
    }
    if ( *(_BYTE *)(v10 + 14) )
    {
      if ( !*(_DWORD *)(v10 + 72) )
        *(_DWORD *)(v10 + 72) = Sys_Milliseconds();
      if ( Sys_Milliseconds() - *(_DWORD *)(v10 + 72) < 5000 )
      {
        v13 = (**(__int64 (__fastcall ***)(__int64))v10)(v10);
        Com_sprintf<64>((char (*)[64])dest, "Failed %d  ", v13);
        color = &colorRed;
LABEL_33:
        v18 = CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v6, 75.0, *(float *)&v7, 50.0, dest, *v8, color);
        v19 = v7;
        *(float *)&v19 = *(float *)&v7 + *(float *)&v18;
        v7 = v19;
      }
    }
    ++v8;
  }
  while ( (__int64)v8 < (__int64)&unk_147806438 );
}

/*
==============
FenceManager_Frame
==============
*/
void FenceManager_Frame(void)
{
  int v0; 
  signed __int64 v1; 
  unsigned int v2; 
  const char **v3; 
  char v4; 
  __int64 *v5; 
  char v6; 
  char v7; 
  char v8; 
  void (__fastcall **v9)(_QWORD, _QWORD); 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  signed __int64 v24; 

  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 332, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  v0 = 0;
  v22 = 0;
  v1 = (char *)s_fenceObjects - (char *)s_fenceNames;
  v23 = 0i64;
  v24 = (char *)s_fenceObjects - (char *)s_fenceNames;
  do
  {
    v2 = 0;
    v3 = s_fenceNames;
    v4 = 0;
    do
    {
      if ( !*(const char **)((char *)v3 + v1) )
      {
        LODWORD(v21) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 337, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_Frame : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v21, *v3) )
          __debugbreak();
      }
      v5 = *(__int64 **)((char *)v3 + v1);
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v6 = *((_BYTE *)v5 + 12);
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v7 = *((_BYTE *)v5 + 13);
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v8 = *((_BYTE *)v5 + 14);
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v5 + 16))(v5, *(unsigned __int64 *)((char *)s_passingFlags + v23), *(unsigned __int64 *)((char *)s_failedFlags + v23));
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( v6 != *((_BYTE *)v5 + 12) )
      {
        v9 = (void (__fastcall **)(_QWORD, _QWORD))(v5 + 5);
        v10 = 4i64;
        do
        {
          if ( *v9 )
            (*v9)(*((unsigned int *)v5 + 2), *((unsigned __int8 *)v5 + 12));
          ++v9;
          --v10;
        }
        while ( v10 );
        v11 = *v3;
        if ( *((_DWORD *)v5 + 2) >= 8u )
        {
          LODWORD(v21) = 8;
          LODWORD(v20) = *((_DWORD *)v5 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v0 = v22;
        LODWORD(v20) = v22;
        Com_Printf(25, "FenceManager_Frame : Fence dependency changed to %d for fence index %d (%s), controller %d\n", *((unsigned __int8 *)v5 + 12), v2, v11, v20);
      }
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 283, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( *((_BYTE *)v5 + 32) && Live_UserIsGuest(*((_DWORD *)v5 + 2)) )
      {
        *((_BYTE *)v5 + 13) = 1;
      }
      else
      {
        if ( *((_DWORD *)v5 + 2) >= 8u )
        {
          LODWORD(v21) = 8;
          LODWORD(v20) = *((_DWORD *)v5 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( *((_BYTE *)v5 + 12) )
        {
          v12 = *v5;
          *((_BYTE *)v5 + 13) = 1;
          (*(void (__fastcall **)(__int64 *))(v12 + 8))(v5);
        }
        else
        {
          *((_BYTE *)v5 + 13) = 0;
        }
      }
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( v7 == *((_BYTE *)v5 + 13) )
      {
        v13 = v23;
      }
      else
      {
        if ( *((_DWORD *)v5 + 2) >= 8u )
        {
          LODWORD(v21) = 8;
          LODWORD(v20) = *((_DWORD *)v5 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v13 = v23;
        v14 = *(unsigned __int64 *)((char *)s_passingFlags + v23);
        if ( *((_BYTE *)v5 + 13) )
          v15 = v14 | (1i64 << v4);
        else
          v15 = v14 & ~(1i64 << v4);
        v16 = *v3;
        *(unsigned __int64 *)((char *)s_passingFlags + v23) = v15;
        if ( *((_DWORD *)v5 + 2) >= 8u )
        {
          LODWORD(v21) = 8;
          LODWORD(v20) = *((_DWORD *)v5 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        LODWORD(v20) = v0;
        Com_Printf(25, "FenceManager_Frame : Fence is passing changed to %d for fence index %d (%s), controller %d\n", *((unsigned __int8 *)v5 + 13), v2, v16, v20);
      }
      if ( *((_DWORD *)v5 + 2) >= 8u )
      {
        LODWORD(v21) = 8;
        LODWORD(v20) = *((_DWORD *)v5 + 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( v8 != *((_BYTE *)v5 + 14) )
      {
        if ( *((_DWORD *)v5 + 2) >= 8u )
        {
          LODWORD(v21) = 8;
          LODWORD(v20) = *((_DWORD *)v5 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v17 = *(unsigned __int64 *)((char *)s_failedFlags + v13);
        if ( *((_BYTE *)v5 + 14) )
          v18 = v17 | (1i64 << v4);
        else
          v18 = v17 & ~(1i64 << v4);
        v19 = *v3;
        *(unsigned __int64 *)((char *)s_failedFlags + v13) = v18;
        if ( *((_DWORD *)v5 + 2) >= 8u )
        {
          LODWORD(v21) = 8;
          LODWORD(v20) = *((_DWORD *)v5 + 2);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        LODWORD(v20) = v0;
        Com_Printf(25, "FenceManager_Frame : Fence is failed changed to %d for fence index %d (%s), controller %d\n", *((unsigned __int8 *)v5 + 14), v2, v19, v20);
      }
      v1 = v24;
      ++v2;
      ++v4;
      ++v3;
    }
    while ( (int)v2 < 31 );
    v22 = ++v0;
    v1 = v24 + 248;
    v23 = v13 + 8;
    v24 += 248i64;
  }
  while ( v0 < 8 );
}

/*
==============
FenceManager_GetErrorCode
==============
*/
__int64 FenceManager_GetErrorCode(int controllerIndex, FenceType fenceType)
{
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 
  FenceObject *v8; 
  __int64 v10; 
  int v11; 

  v3 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 320, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = log2f(v4);
  v7 = (int)(float)(v6 + 0.5);
  if ( v7 >= 0x1F )
  {
    v11 = 31;
    LODWORD(v10) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = s_fenceObjects[v3][v7];
  return v8->GetErrorCode(v8);
}

/*
==============
FenceManager_GetFenceIndexForFenceType
==============
*/
__int64 FenceManager_GetFenceIndexForFenceType(FenceType fenceType)
{
  float v1; 
  float v2; 

  v1 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v2 = (float)fenceType;
    v1 = v2 + 1.8446744e19;
  }
  return (unsigned int)(int)(float)(log2f(v1) + 0.5);
}

/*
==============
FenceManager_GetRetailDebug
==============
*/
void FenceManager_GetRetailDebug(char *destString, const int maxLength)
{
  unsigned __int64 v3; 
  int ControllerFromClient; 
  unsigned int v5; 
  FenceObject **v6; 
  FenceObject *v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = maxLength;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( ControllerFromClient != -1 )
  {
    v5 = 0;
    v6 = s_fenceObjects[ControllerFromClient];
    do
    {
      v7 = *v6;
      if ( (*v6)->m_controllerIndex >= 8u )
      {
        LODWORD(v10) = 8;
        LODWORD(v9) = (*v6)->m_controllerIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !v7->m_dependenciesMet )
        goto LABEL_26;
      if ( v7->m_controllerIndex >= 8u )
      {
        LODWORD(v10) = 8;
        LODWORD(v9) = v7->m_controllerIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( v7->m_isPassing )
      {
LABEL_26:
        if ( v7->m_controllerIndex >= 8u )
        {
          LODWORD(v10) = 8;
          LODWORD(v9) = v7->m_controllerIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( v7->m_dependenciesMet )
        {
          if ( v7->m_controllerIndex >= 8u )
          {
            LODWORD(v10) = 8;
            LODWORD(v9) = v7->m_controllerIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          if ( !v7->m_failed )
            goto LABEL_23;
          v8 = j_va("Fence %i: FAILED!\n", v5);
        }
        else
        {
          v8 = j_va("Fence %i: Pending\n", v5);
        }
      }
      else
      {
        v8 = j_va("Fence %i: Active\n", v5);
      }
      I_strcat_truncate(destString, v3, v8);
LABEL_23:
      ++v5;
      ++v6;
    }
    while ( (int)v5 < 31 );
  }
}

/*
==============
FenceManager_GetRootFenceNotPassingForFenceType
==============
*/
__int64 FenceManager_GetRootFenceNotPassingForFenceType(int controllerIndex, FenceType fenceType)
{
  __int64 v2; 
  float v3; 
  float v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  FenceObject *v10; 
  int v11; 
  FenceObject **v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  FenceObject **j; 
  unsigned __int64 m_fenceDependencies; 
  FenceObject *v19; 
  Online_ErrorReporting *InstancePtr; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  FenceObject **i; 

  v2 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED )
    return 0xFFFFFFFFi64;
  v3 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v4 = (float)fenceType;
    v3 = v4 + 1.8446744e19;
  }
  v5 = (int)(float)(log2f(v3) + 0.5);
  if ( v5 > 0x1E )
    return 0xFFFFFFFFi64;
  v6 = 31 * v2;
  v7 = v2;
  v8 = (int)v5;
  v24 = 31 * v2;
  v9 = 31 * v2 + (int)v5;
  v10 = s_fenceObjects[0][v9];
  if ( v10->m_controllerIndex >= 8u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10->m_controllerIndex, 8) )
      __debugbreak();
    v6 = v24;
  }
  if ( v10->m_isPassing )
  {
    return (unsigned int)-1;
  }
  else
  {
    v11 = 0;
    if ( s_fenceObjects[0][v9]->m_fenceDependencies )
    {
      v12 = s_fenceObjects[v7];
      for ( i = v12; ; v12 = i )
      {
        v13 = 0;
        v14 = v6 + v8;
        v15 = 0i64;
        v16 = v11;
        for ( j = v12; ; ++j )
        {
          m_fenceDependencies = s_fenceObjects[0][v14]->m_fenceDependencies;
          if ( _bittest64((const __int64 *)&m_fenceDependencies, (unsigned int)v13) )
          {
            v19 = *j;
            if ( (*j)->m_controllerIndex >= 8u )
            {
              LODWORD(v23) = 8;
              LODWORD(v22) = (*j)->m_controllerIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
            if ( !v19->m_isPassing )
              break;
          }
          ++v13;
          ++v15;
          if ( v13 >= 31 )
            return v5;
        }
        ++v11;
        v5 = v13;
        v8 = v15;
        if ( v16 >= 31 )
          break;
        v6 = v24;
        if ( !s_fenceObjects[v24 / 0x1F][v15]->m_fenceDependencies )
          return v5;
      }
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DEFAULT_t)0x400000, NULL);
    }
  }
  return v5;
}

/*
==============
FenceManager_GetStatusStringForAllFences
==============
*/
void FenceManager_GetStatusStringForAllFences(int controllerIndex, char *fenceStatusString, const int maxLength)
{
  __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  FenceObject *v7; 
  const char *v8; 
  unsigned int v9; 
  const char *v10; 
  bool v11; 
  int (__fastcall *GetErrorCode)(FenceObject *); 
  unsigned int v13; 
  unsigned int v14; 

  v4 = 0i64;
  v5 = maxLength;
  v6 = controllerIndex;
  do
  {
    if ( (unsigned __int64)v4 <= 0x1E )
    {
      v7 = s_fenceObjects[v6][v4];
      if ( FenceObject::IsComplete(v7) )
      {
        v8 = "3%d ";
        if ( !FenceObject::IsFailed(v7) )
          v8 = "0%d ";
        v9 = v7->GetErrorCode(v7);
        v10 = j_va(v8, v9);
      }
      else
      {
        v11 = FenceObject::AreDependenciesMet(v7);
        GetErrorCode = v7->GetErrorCode;
        if ( v11 )
        {
          v13 = GetErrorCode(v7);
          v10 = j_va("1%d ", v13);
        }
        else
        {
          v14 = GetErrorCode(v7);
          v10 = j_va("2%d ", v14);
        }
      }
      I_strcat_truncate(fenceStatusString, v5, v10);
    }
    ++v4;
  }
  while ( v4 < 31 );
}

/*
==============
FenceManager_GetStatusStringForFenceIndex
==============
*/
void FenceManager_GetStatusStringForFenceIndex(int controllerIndex, const int fenceIndex, char *fenceStatusString, const int maxLength)
{
  unsigned __int64 v5; 
  FenceObject *v6; 
  const char *v7; 
  unsigned int v8; 
  const char *v9; 
  bool v10; 
  int (__fastcall *GetErrorCode)(FenceObject *); 
  unsigned int v12; 
  const char *v13; 
  unsigned int v14; 

  if ( (unsigned int)fenceIndex <= 0x1E )
  {
    v5 = maxLength;
    v6 = s_fenceObjects[controllerIndex][fenceIndex];
    if ( FenceObject::IsComplete(v6) )
    {
      v7 = "3%d ";
      if ( !FenceObject::IsFailed(v6) )
        v7 = "0%d ";
      v8 = v6->GetErrorCode(v6);
      v9 = j_va(v7, v8);
      I_strcat_truncate(fenceStatusString, v5, v9);
    }
    else
    {
      v10 = FenceObject::AreDependenciesMet(v6);
      GetErrorCode = v6->GetErrorCode;
      if ( v10 )
      {
        v12 = GetErrorCode(v6);
        v13 = j_va("1%d ", v12);
      }
      else
      {
        v14 = GetErrorCode(v6);
        v13 = j_va("2%d ", v14);
      }
      I_strcat_truncate(fenceStatusString, v5, v13);
    }
  }
}

/*
==============
FenceManager_GetStatusStringForRootFenceNotPassing
==============
*/
void FenceManager_GetStatusStringForRootFenceNotPassing(int controllerIndex, FenceType fenceType, char *fenceStatusString, const int maxLength)
{
  unsigned __int64 v4; 
  __int64 RootFenceNotPassingForFenceType; 
  const char *v8; 

  v4 = maxLength;
  RootFenceNotPassingForFenceType = (unsigned int)FenceManager_GetRootFenceNotPassingForFenceType(controllerIndex, fenceType);
  v8 = j_va("%02d", RootFenceNotPassingForFenceType);
  I_strcat_truncate(fenceStatusString, v4, v8);
  if ( (int)RootFenceNotPassingForFenceType >= 0 )
    FenceManager_GetStatusStringForFenceIndex(controllerIndex, RootFenceNotPassingForFenceType, fenceStatusString, v4);
}

/*
==============
FenceManager_Init
==============
*/
void FenceManager_Init(void)
{
  FenceObject **v0; 
  int i; 
  int j; 

  s_fenceManagerInitState = FENCE_MANAGER_INITING;
  s_failedFlags[0] = 0i64;
  v0 = &s_fenceObjects[0][2];
  s_failedFlags[1] = 0i64;
  s_failedFlags[2] = 0i64;
  s_failedFlags[3] = 0i64;
  s_failedFlags[4] = 0i64;
  s_failedFlags[5] = 0i64;
  s_failedFlags[6] = 0i64;
  s_failedFlags[7] = 0i64;
  s_passingFlags[0] = 0i64;
  s_passingFlags[1] = 0i64;
  s_passingFlags[2] = 0i64;
  s_passingFlags[3] = 0i64;
  s_passingFlags[4] = 0i64;
  s_passingFlags[5] = 0i64;
  s_passingFlags[6] = 0i64;
  s_passingFlags[7] = 0i64;
  do
  {
    *(v0 - 2) = NULL;
    *(v0 - 1) = NULL;
    *v0 = NULL;
    v0[1] = NULL;
    v0[2] = NULL;
    v0[3] = NULL;
    v0[4] = NULL;
    v0[5] = NULL;
    v0[6] = NULL;
    v0[7] = NULL;
    v0[8] = NULL;
    v0[9] = NULL;
    v0[10] = NULL;
    v0[11] = NULL;
    v0[12] = NULL;
    v0[13] = NULL;
    v0[14] = NULL;
    v0[15] = NULL;
    v0[16] = NULL;
    v0[17] = NULL;
    v0[18] = NULL;
    v0[19] = NULL;
    v0[20] = NULL;
    v0[21] = NULL;
    v0[22] = NULL;
    v0[23] = NULL;
    v0[24] = NULL;
    v0[25] = NULL;
    v0[26] = NULL;
    v0[27] = NULL;
    v0[28] = NULL;
    v0 += 31;
  }
  while ( (__int64)v0 < (__int64)&s_passingFlags[2] );
  FenceObjects_Init();
  for ( i = 0; i < 8; ++i )
  {
    for ( j = 0; j < 31; ++j )
      FenceManager_ResetFenceObjectForControllerByIndex(i, j, 1);
  }
  s_fenceManagerInitState = FENCE_MANAGER_INITED;
}

/*
==============
FenceManager_IsFenceComplete
==============
*/
bool FenceManager_IsFenceComplete(int controllerIndex, FenceType fenceType)
{
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  int v7; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  v3 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 225, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v3 >= 8 )
  {
    v12 = 8;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = log2f(v4);
  v7 = (int)(float)(v6 + 0.5);
  if ( (unsigned int)v7 >= 0x1F )
  {
    LODWORD(v11) = 31;
    LODWORD(v10) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = v7 + 31 * v3;
  if ( !s_fenceObjects[0][v8] )
  {
    LODWORD(v11) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 231, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v11, s_fenceNames[v7]) )
      __debugbreak();
  }
  return FenceObject::IsComplete(s_fenceObjects[0][v8]);
}

/*
==============
FenceManager_IsFenceFailed
==============
*/
_BOOL8 FenceManager_IsFenceFailed(int controllerIndex, FenceType fenceType)
{
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  int v7; 
  __int64 v8; 
  FenceObject *v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v3 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 274, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v3 >= 8 )
  {
    v13 = 8;
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 275, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = log2f(v4);
  v7 = (int)(float)(v6 + 0.5);
  if ( (unsigned int)v7 >= 0x1F )
  {
    LODWORD(v12) = 31;
    LODWORD(v11) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 278, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v8 = v7 + 31 * v3;
  if ( !s_fenceObjects[0][v8] )
  {
    LODWORD(v12) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 280, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v12, s_fenceNames[v7]) )
      __debugbreak();
  }
  v9 = s_fenceObjects[0][v8];
  if ( v9->m_controllerIndex >= 8u )
  {
    LODWORD(v12) = 8;
    LODWORD(v11) = v9->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return v9->m_failed;
}

/*
==============
FenceManager_IsFencePassing
==============
*/
bool FenceManager_IsFencePassing(int controllerIndex, FenceType fenceType)
{
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  int v7; 
  __int64 v8; 
  FenceObject *v9; 
  __int64 v11; 
  __int64 v12; 

  v3 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 239, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, 8) )
      __debugbreak();
  }
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = log2f(v4);
  v7 = (int)(float)(v6 + 0.5);
  if ( (unsigned int)v7 >= 0x1F )
  {
    LODWORD(v12) = 31;
    LODWORD(v11) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v8 = v7 + 31 * v3;
  if ( !s_fenceObjects[0][v8] )
  {
    LODWORD(v12) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 245, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v12, s_fenceNames[v7]) )
      __debugbreak();
  }
  v9 = s_fenceObjects[0][v8];
  return v9 && FenceObject::IsPassing(v9);
}

/*
==============
FenceManager_IsFencePassingForAllControllers
==============
*/
char FenceManager_IsFencePassingForAllControllers(FenceType fenceType)
{
  unsigned int v2; 
  float v3; 
  float v4; 
  __int64 i; 
  float v6; 
  int v7; 
  __int64 v8; 
  FenceObject *v9; 
  __int64 v11; 
  __int64 v12; 

  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 258, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  v2 = 0;
  v3 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v4 = (float)fenceType;
    v3 = v4 + 1.8446744e19;
  }
  for ( i = 0i64; ; i += 31i64 )
  {
    if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 239, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
      __debugbreak();
    if ( v2 >= 8 )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v6 = log2f(v3);
    v7 = (int)(float)(v6 + 0.5);
    if ( (unsigned int)v7 >= 0x1F )
    {
      LODWORD(v12) = 31;
      LODWORD(v11) = (int)(float)(v6 + 0.5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v8 = i + v7;
    if ( !s_fenceObjects[0][v8] )
    {
      LODWORD(v12) = (int)(float)(v6 + 0.5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 245, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v12, s_fenceNames[v7]) )
        __debugbreak();
    }
    v9 = s_fenceObjects[0][v8];
    if ( !v9 )
      break;
    if ( v9->m_controllerIndex >= 8u )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = v9->m_controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !v9->m_isPassing )
      break;
    if ( (int)++v2 >= 8 )
      return 1;
  }
  return 0;
}

/*
==============
FenceManager_PrintStatusStringForAllFences
==============
*/
void FenceManager_PrintStatusStringForAllFences(int controllerIndex)
{
  int i; 
  char fenceStatusString[1024]; 

  memset_0(fenceStatusString, 0, sizeof(fenceStatusString));
  for ( i = 0; i < 31; ++i )
    FenceManager_GetStatusStringForFenceIndex(controllerIndex, i, fenceStatusString, 1024);
  Com_Printf(25, "FenceManager_PrintStatusStringForAllFences\n");
  Com_Printf(25, "%s\n", fenceStatusString);
}

/*
==============
FenceManager_RegisterFence
==============
*/
void FenceManager_RegisterFence(FenceType fenceType, FenceObject *fence)
{
  float v4; 
  float v5; 
  float v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( s_fenceManagerInitState < FENCE_MANAGER_INITING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 203, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState >= FENCE_MANAGER_INITING)", (const char *)&queryFormat, "s_fenceManagerInitState >= FENCE_MANAGER_INITING") )
    __debugbreak();
  if ( fence->m_controllerIndex >= 8u )
  {
    LODWORD(v9) = fence->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( fence->m_controllerIndex ) < (unsigned)( 8 )", "fence->m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, 8) )
      __debugbreak();
  }
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = log2f(v4);
  v7 = (int)(float)(v6 + 0.5);
  if ( (unsigned int)v7 >= 0x1F )
  {
    LODWORD(v10) = 31;
    LODWORD(v9) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v8 = v7 + 31i64 * fence->m_controllerIndex;
  if ( s_fenceObjects[0][v8] )
  {
    LODWORD(v9) = (int)(float)(v6 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 211, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FenceManager_RegisterFence : fence index %d (%s) already has a registered object for controller %d\n", v9, s_fenceNames[v7], fence->m_controllerIndex) )
      __debugbreak();
  }
  else
  {
    s_fenceObjects[0][v8] = fence;
  }
}

/*
==============
FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers
==============
*/
void FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FenceType fenceType, void (*callback)(int, bool))
{
  int v2; 
  float v4; 
  float v5; 
  __int64 v6; 
  float v7; 
  int v8; 
  __int64 v9; 
  FenceObject *v10; 
  int v11; 
  __int64 v12; 
  void (__fastcall **m_callbacks)(int, bool); 
  __int64 v14; 
  __int64 v15; 

  v2 = 0;
  v4 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v5 = (float)fenceType;
    v4 = v5 + 1.8446744e19;
  }
  v6 = 0i64;
  do
  {
    if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 180, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
      __debugbreak();
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v15) = 8;
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v7 = log2f(v4);
    v8 = (int)(float)(v7 + 0.5);
    if ( (unsigned int)v8 >= 0x1F )
    {
      LODWORD(v15) = 31;
      LODWORD(v14) = (int)(float)(v7 + 0.5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v9 = v6 + v8;
    if ( !s_fenceObjects[0][v9] )
    {
      LODWORD(v15) = (int)(float)(v7 + 0.5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 185, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_RegisterForFenceDependenciesUpdatesForController: Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v15, s_fenceNames[v8]) )
        __debugbreak();
    }
    v10 = s_fenceObjects[0][v9];
    v11 = 0;
    v12 = 0i64;
    m_callbacks = v10->m_callbacks;
    while ( *m_callbacks )
    {
      ++v11;
      ++v12;
      ++m_callbacks;
      if ( v12 >= 4 )
        goto LABEL_21;
    }
    v10->m_callbacks[v12] = callback;
    if ( v11 >= 0 )
      goto LABEL_23;
LABEL_21:
    LODWORD(v14) = (int)(float)(v7 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 196, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FenceManager_RegisterForFenceDependenciesUpdatesForController: No update callback slot found for fence index %d (%s)", v14, s_fenceNames[v8]) )
      __debugbreak();
LABEL_23:
    ++v2;
    v6 += 31i64;
  }
  while ( v2 < 8 );
}

/*
==============
FenceManager_RegisterForFenceDependenciesUpdatesForController
==============
*/
void FenceManager_RegisterForFenceDependenciesUpdatesForController(int controllerIndex, FenceType fenceType, void (*callback)(int, bool))
{
  __int64 v5; 
  float v6; 
  float v7; 
  float v8; 
  int v9; 
  __int64 v10; 
  FenceObject *v11; 
  int v12; 
  __int64 v13; 
  void (__fastcall **m_callbacks)(int, bool); 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  v5 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 180, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v5 >= 8 )
  {
    v17 = 8;
    LODWORD(v15) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v6 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v7 = (float)fenceType;
    v6 = v7 + 1.8446744e19;
  }
  v8 = log2f(v6);
  v9 = (int)(float)(v8 + 0.5);
  if ( (unsigned int)v9 >= 0x1F )
  {
    LODWORD(v16) = 31;
    LODWORD(v15) = (int)(float)(v8 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v10 = v9 + 31 * v5;
  if ( !s_fenceObjects[0][v10] )
  {
    LODWORD(v16) = (int)(float)(v8 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 185, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_RegisterForFenceDependenciesUpdatesForController: Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v16, s_fenceNames[v9]) )
      __debugbreak();
  }
  v11 = s_fenceObjects[0][v10];
  v12 = 0;
  v13 = 0i64;
  m_callbacks = v11->m_callbacks;
  while ( *m_callbacks )
  {
    ++v12;
    ++v13;
    ++m_callbacks;
    if ( v13 >= 4 )
      goto LABEL_20;
  }
  v11->m_callbacks[v12] = callback;
  if ( v12 >= 0 )
    return;
LABEL_20:
  LODWORD(v15) = (int)(float)(v8 + 0.5);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 196, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FenceManager_RegisterForFenceDependenciesUpdatesForController: No update callback slot found for fence index %d (%s)", v15, s_fenceNames[v9]) )
    __debugbreak();
}

/*
==============
FenceManager_ResetAllControllers
==============
*/
void FenceManager_ResetAllControllers(void)
{
  int i; 
  int j; 

  for ( i = 0; i < 8; ++i )
  {
    for ( j = 0; j < 31; ++j )
      FenceManager_ResetFenceObjectForControllerByIndex(i, j, 1);
  }
}

/*
==============
FenceManager_ResetFenceObjectForControllerByIndex
==============
*/
void FenceManager_ResetFenceObjectForControllerByIndex(int controllerIndex, int fenceIndex, bool shouldClearCallbacks)
{
  __int64 v4; 
  __int64 v5; 
  FenceObject **v6; 
  FenceObject *v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 

  v4 = fenceIndex;
  v5 = controllerIndex;
  if ( s_fenceManagerInitState < FENCE_MANAGER_INITING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 156, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState >= FENCE_MANAGER_INITING)", (const char *)&queryFormat, "s_fenceManagerInitState >= FENCE_MANAGER_INITING") )
    __debugbreak();
  if ( (unsigned int)v5 >= 8 )
  {
    v10 = 8;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0x1F )
  {
    LODWORD(v9) = 31;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v6 = &s_fenceObjects[v5][v4];
  if ( !*v6 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 159, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_ResetFenceObjectForControllerByIndex : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v9, s_fenceNames[v4]) )
      __debugbreak();
  }
  v7 = *v6;
  *(_WORD *)&v7->m_dependenciesMet = 0;
  v7->m_errorCode = 0;
  v7->m_failed = 0;
  v7->m_failureDrawTime = 0;
  if ( shouldClearCallbacks )
  {
    v7->m_callbacks[0] = NULL;
    v7->m_callbacks[1] = NULL;
    v7->m_callbacks[2] = NULL;
    v7->m_callbacks[3] = NULL;
  }
}

/*
==============
FenceManager_ResetFenceObjectForControllerByType
==============
*/
void FenceManager_ResetFenceObjectForControllerByType(int controllerIndex, FenceType fenceType, bool shouldClearCallbacks)
{
  float v5; 
  float v6; 
  float v7; 
  unsigned int v8; 
  int v9; 
  int v10; 

  v5 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v6 = (float)fenceType;
    v5 = v6 + 1.8446744e19;
  }
  v7 = log2f(v5);
  v8 = (int)(float)(v7 + 0.5);
  if ( v8 >= 0x1F )
  {
    v10 = 31;
    v9 = (int)(float)(v7 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  FenceManager_ResetFenceObjectForControllerByIndex(controllerIndex, v8, shouldClearCallbacks);
}

/*
==============
FenceManager_ResetFenceObjectForControllers
==============
*/
void FenceManager_ResetFenceObjectForControllers(FenceType fenceType, bool shouldClearCallbacks)
{
  float v3; 
  float v4; 
  float v5; 
  unsigned int v6; 
  int i; 
  int v8; 
  int v9; 

  v3 = (float)fenceType;
  if ( fenceType < 0 )
  {
    v4 = (float)fenceType;
    v3 = v4 + 1.8446744e19;
  }
  v5 = log2f(v3);
  v6 = (int)(float)(v5 + 0.5);
  if ( v6 >= 0x1F )
  {
    v9 = 31;
    v8 = (int)(float)(v5 + 0.5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  for ( i = 0; i < 8; ++i )
    FenceManager_ResetFenceObjectForControllerByIndex(i, v6, shouldClearCallbacks);
}

/*
==============
FenceManager_ResetFenceObjectsForController
==============
*/
void FenceManager_ResetFenceObjectsForController(int controllerIndex, bool shouldClearCallbacks)
{
  unsigned __int64 v3; 
  signed __int64 v4; 
  FenceObject **v6; 
  int i; 
  FenceObject *v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = 248i64 * controllerIndex;
  v4 = (char *)&s_fenceNames[v3 / 0xFFFFFFFFFFFFFFF8ui64] - (char *)s_fenceObjects;
  v6 = s_fenceObjects[v3 / 0xF8];
  for ( i = 0; i < 31; ++i )
  {
    if ( s_fenceManagerInitState < FENCE_MANAGER_INITING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 156, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState >= FENCE_MANAGER_INITING)", (const char *)&queryFormat, "s_fenceManagerInitState >= FENCE_MANAGER_INITING") )
      __debugbreak();
    if ( (unsigned int)controllerIndex >= 8 )
    {
      LODWORD(v10) = 8;
      LODWORD(v9) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (unsigned int)i >= 0x1F )
    {
      LODWORD(v10) = 31;
      LODWORD(v9) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !*v6 )
    {
      LODWORD(v10) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 159, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_ResetFenceObjectForControllerByIndex : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v10, *(const char **)((char *)v6 + v4)) )
        __debugbreak();
    }
    v8 = *v6;
    *(_WORD *)&v8->m_dependenciesMet = 0;
    v8->m_errorCode = 0;
    v8->m_failed = 0;
    v8->m_failureDrawTime = 0;
    if ( shouldClearCallbacks )
    {
      v8->m_callbacks[0] = NULL;
      v8->m_callbacks[1] = NULL;
      v8->m_callbacks[2] = NULL;
      v8->m_callbacks[3] = NULL;
    }
    ++v6;
  }
}

