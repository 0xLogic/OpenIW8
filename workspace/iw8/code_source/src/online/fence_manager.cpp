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
  __int64 v4; 
  FenceObject *v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v4 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 308, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si ebx, xmm1
  }
  if ( _EBX >= 0x1F )
  {
    v13 = 31;
    LODWORD(v11) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v9 = s_fenceObjects[v4][_EBX];
  if ( v9->m_controllerIndex >= 8u )
  {
    LODWORD(v12) = 8;
    LODWORD(v11) = v9->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return v9->m_dependenciesMet;
}

/*
==============
FenceManager_AreDependenciesMetForAllControllers
==============
*/
char FenceManager_AreDependenciesMetForAllControllers(FenceType fenceType)
{
  __int64 v7; 
  char *i; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 288, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si edi, xmm1
  }
  if ( _EDI >= 0x1F )
  {
    v13 = 31;
    LODWORD(v11) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v7 = 0i64;
  for ( i = (char *)s_fenceObjects + 8 * (int)_EDI; ; i += 248 )
  {
    v9 = *(_QWORD *)i;
    if ( *(_DWORD *)(*(_QWORD *)i + 8i64) >= 8u )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = *(_DWORD *)(*(_QWORD *)i + 8i64);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !*(_BYTE *)(v9 + 12) )
      break;
    if ( ++v7 >= 8 )
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
  __int64 v6; 
  LocalClientNum_t ClientFromController; 
  bool v9; 
  const ScreenPlacement *v10; 
  const char **v14; 
  char *v15; 
  __int64 v16; 
  bool v17; 
  unsigned int v18; 
  unsigned int v19; 
  const vec4_t *color; 
  __int64 (__fastcall *v21)(__int64); 
  unsigned int v22; 
  unsigned int v23; 
  float fmt; 
  char *text; 
  char *label; 
  char dest[64]; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v6 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v10 = &scrPlaceViewDisplay[ClientFromController];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v9 )
      __debugbreak();
  }
  v10 = &scrPlaceFull;
LABEL_8:
  __asm
  {
    vmovss  xmm6, cs:__real@41a00000
    vmovss  xmm7, cs:__real@42480000
    vmovss  xmm8, cs:__real@42960000
  }
  v14 = s_fenceNames;
  v15 = (char *)s_fenceObjects + 248 * v6 - (_QWORD)s_fenceNames;
  do
  {
    v16 = *(__int64 *)((char *)v14 + (_QWORD)v15);
    if ( *(_DWORD *)(v16 + 8) >= 8u )
    {
      LODWORD(label) = 8;
      LODWORD(text) = *(_DWORD *)(v16 + 8);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
    }
    v17 = *(_BYTE *)(v16 + 13) || *(_BYTE *)(v16 + 14);
    v18 = *(_DWORD *)(v16 + 8);
    if ( !v17 )
    {
      *(_DWORD *)(v16 + 72) = 0;
      if ( v18 >= 8 )
      {
        LODWORD(label) = 8;
        LODWORD(text) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 247, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", text, label) )
          __debugbreak();
      }
      v21 = **(__int64 (__fastcall ***)(__int64))v16;
      if ( *(_BYTE *)(v16 + 12) )
      {
        v22 = v21(v16);
        Com_sprintf<64>((char (*)[64])dest, "Active %d  ", v22);
        color = &colorGreen;
      }
      else
      {
        v23 = v21(v16);
        Com_sprintf<64>((char (*)[64])dest, "Pending %d  ", v23);
        color = &colorWhite;
      }
      goto LABEL_33;
    }
    if ( v18 >= 8 )
    {
      LODWORD(label) = 8;
      LODWORD(text) = *(_DWORD *)(v16 + 8);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
    }
    if ( *(_BYTE *)(v16 + 14) )
    {
      if ( !*(_DWORD *)(v16 + 72) )
        *(_DWORD *)(v16 + 72) = Sys_Milliseconds();
      if ( Sys_Milliseconds() - *(_DWORD *)(v16 + 72) < 5000 )
      {
        v19 = (**(__int64 (__fastcall ***)(__int64))v16)(v16);
        Com_sprintf<64>((char (*)[64])dest, "Failed %d  ", v19);
        color = &colorRed;
LABEL_33:
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm8; posX
          vmovss  dword ptr [rsp+0F8h+fmt], xmm7
        }
        CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmt, dest, *v14, color);
        __asm { vaddss  xmm6, xmm6, xmm0 }
      }
    }
    ++v14;
  }
  while ( (__int64)v14 < (__int64)&unk_147806438 );
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  __int64 v4; 
  FenceObject *v9; 
  __int64 v11; 
  int v12; 

  v4 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 320, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si ebx, xmm1
  }
  if ( _EBX >= 0x1F )
  {
    v12 = 31;
    LODWORD(v11) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v9 = s_fenceObjects[v4][_EBX];
  return v9->GetErrorCode(v9);
}

/*
==============
FenceManager_GetFenceIndexForFenceType
==============
*/
int FenceManager_GetFenceIndexForFenceType(FenceType fenceType)
{
  int result; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si eax, xmm1
  }
  return result;
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
  __int64 v3; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  FenceObject *v12; 
  int v13; 
  FenceObject **v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  FenceObject **j; 
  unsigned __int64 m_fenceDependencies; 
  FenceObject *v21; 
  Online_ErrorReporting *InstancePtr; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  FenceObject **i; 

  v3 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED )
    return 0xFFFFFFFFi64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si r15d, xmm1
  }
  if ( _ER15 > 0x1E )
    return 0xFFFFFFFFi64;
  v8 = 31 * v3;
  v9 = v3;
  v10 = (int)_ER15;
  v26 = 31 * v3;
  v11 = 31 * v3 + (int)_ER15;
  v12 = s_fenceObjects[0][v11];
  if ( v12->m_controllerIndex >= 8u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12->m_controllerIndex, 8) )
      __debugbreak();
    v8 = v26;
  }
  if ( v12->m_isPassing )
  {
    return (unsigned int)-1;
  }
  else
  {
    v13 = 0;
    if ( s_fenceObjects[0][v11]->m_fenceDependencies )
    {
      v14 = s_fenceObjects[v9];
      for ( i = v14; ; v14 = i )
      {
        v15 = 0;
        v16 = v8 + v10;
        v17 = 0i64;
        v18 = v13;
        for ( j = v14; ; ++j )
        {
          m_fenceDependencies = s_fenceObjects[0][v16]->m_fenceDependencies;
          if ( _bittest64((const __int64 *)&m_fenceDependencies, (unsigned int)v15) )
          {
            v21 = *j;
            if ( (*j)->m_controllerIndex >= 8u )
            {
              LODWORD(v25) = 8;
              LODWORD(v24) = (*j)->m_controllerIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v24, v25) )
                __debugbreak();
            }
            if ( !v21->m_isPassing )
              break;
          }
          ++v15;
          ++v17;
          if ( v15 >= 31 )
            return _ER15;
        }
        ++v13;
        _ER15 = v15;
        v10 = v17;
        if ( v18 >= 31 )
          break;
        v8 = v26;
        if ( !s_fenceObjects[v26 / 0x1F][v17]->m_fenceDependencies )
          return _ER15;
      }
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DEFAULT_t)0x400000, NULL);
    }
  }
  return _ER15;
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
  __int64 v4; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  v4 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 225, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v4 >= 8 )
  {
    v13 = 8;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si edi, xmm1
  }
  if ( _EDI >= 0x1F )
  {
    LODWORD(v12) = 31;
    LODWORD(v11) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v9 = (int)_EDI + 31 * v4;
  if ( !s_fenceObjects[0][v9] )
  {
    LODWORD(v12) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 231, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v12, s_fenceNames[_EDI]) )
      __debugbreak();
  }
  return FenceObject::IsComplete(s_fenceObjects[0][v9]);
}

/*
==============
FenceManager_IsFenceFailed
==============
*/
_BOOL8 FenceManager_IsFenceFailed(int controllerIndex, FenceType fenceType)
{
  __int64 v4; 
  __int64 v9; 
  FenceObject *v10; 
  __int64 v12; 
  __int64 v13; 
  int v14; 

  v4 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 274, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v4 >= 8 )
  {
    v14 = 8;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 275, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si edi, xmm1
  }
  if ( _EDI >= 0x1F )
  {
    LODWORD(v13) = 31;
    LODWORD(v12) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 278, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v9 = (int)_EDI + 31 * v4;
  if ( !s_fenceObjects[0][v9] )
  {
    LODWORD(v13) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 280, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v13, s_fenceNames[_EDI]) )
      __debugbreak();
  }
  v10 = s_fenceObjects[0][v9];
  if ( v10->m_controllerIndex >= 8u )
  {
    LODWORD(v13) = 8;
    LODWORD(v12) = v10->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return v10->m_failed;
}

/*
==============
FenceManager_IsFencePassing
==============
*/
bool FenceManager_IsFencePassing(int controllerIndex, FenceType fenceType)
{
  __int64 v4; 
  __int64 v9; 
  FenceObject *v10; 
  __int64 v12; 
  __int64 v13; 

  v4 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 239, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v4 >= 8 )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12, 8) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si edi, xmm1
  }
  if ( _EDI >= 0x1F )
  {
    LODWORD(v13) = 31;
    LODWORD(v12) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v9 = (int)_EDI + 31 * v4;
  if ( !s_fenceObjects[0][v9] )
  {
    LODWORD(v13) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 245, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v13, s_fenceNames[_EDI]) )
      __debugbreak();
  }
  v10 = s_fenceObjects[0][v9];
  return v10 && FenceObject::IsPassing(v10);
}

/*
==============
FenceManager_IsFencePassingForAllControllers
==============
*/
bool FenceManager_IsFencePassingForAllControllers(FenceType fenceType)
{
  bool v4; 
  int v6; 
  __int64 v10; 
  __int64 v14; 
  FenceObject *v15; 
  bool result; 
  __int64 v19; 
  __int64 v20; 
  void *retaddr; 

  _RAX = &retaddr;
  v4 = s_fenceManagerInitState == FENCE_MANAGER_INITED;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 258, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  v6 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm6, xmm6, cs:__real@5f800000 }
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  v10 = 0i64;
  while ( 1 )
  {
    if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 239, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
      __debugbreak();
    if ( (unsigned int)v6 >= 8 )
    {
      LODWORD(v20) = 8;
      LODWORD(v19) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    __asm { vmovaps xmm0, xmm6; X }
    *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
    __asm
    {
      vaddss  xmm1, xmm0, xmm7
      vcvttss2si ebx, xmm1
    }
    if ( _EBX >= 0x1F )
    {
      LODWORD(v20) = 31;
      LODWORD(v19) = _EBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v14 = v10 + (int)_EBX;
    if ( !s_fenceObjects[0][v14] )
    {
      LODWORD(v20) = _EBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 245, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_IsFencePassing : Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v20, s_fenceNames[_EBX]) )
        __debugbreak();
    }
    v15 = s_fenceObjects[0][v14];
    if ( !v15 )
      break;
    if ( v15->m_controllerIndex >= 8u )
    {
      LODWORD(v20) = 8;
      LODWORD(v19) = v15->m_controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.h", 259, ASSERT_TYPE_ASSERT, "(unsigned)( m_controllerIndex ) < (unsigned)( 8 )", "m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( !v15->m_isPassing )
      break;
    ++v6;
    v10 += 31i64;
    if ( v6 >= 8 )
    {
      result = 1;
      goto LABEL_27;
    }
  }
  result = 0;
LABEL_27:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
  return result;
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
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( s_fenceManagerInitState < FENCE_MANAGER_INITING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 203, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState >= FENCE_MANAGER_INITING)", (const char *)&queryFormat, "s_fenceManagerInitState >= FENCE_MANAGER_INITING") )
    __debugbreak();
  if ( fence->m_controllerIndex >= 8u )
  {
    LODWORD(v10) = fence->m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( fence->m_controllerIndex ) < (unsigned)( 8 )", "fence->m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, 8) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si ebx, xmm1
  }
  if ( _EBX >= 0x1F )
  {
    LODWORD(v11) = 31;
    LODWORD(v10) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v9 = (int)_EBX + 31i64 * fence->m_controllerIndex;
  if ( s_fenceObjects[0][v9] )
  {
    LODWORD(v10) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 211, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FenceManager_RegisterFence : fence index %d (%s) already has a registered object for controller %d\n", v10, s_fenceNames[_EBX], fence->m_controllerIndex) )
      __debugbreak();
  }
  else
  {
    s_fenceObjects[0][v9] = fence;
  }
}

/*
==============
FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers
==============
*/
void FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FenceType fenceType, void (*callback)(int, bool))
{
  int v4; 
  __int64 v9; 
  __int64 v13; 
  FenceObject *v14; 
  int v15; 
  __int64 v16; 
  void (__fastcall **m_callbacks)(int, bool); 
  __int64 v20; 
  __int64 v21; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  v4 = 0;
  __asm
  {
    vmovaps [rsp+88h+var_48], xmm7
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rcx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm6, xmm6, cs:__real@5f800000 }
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  v9 = 0i64;
  do
  {
    if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 180, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
      __debugbreak();
    if ( (unsigned int)v4 >= 8 )
    {
      LODWORD(v21) = 8;
      LODWORD(v20) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    __asm { vmovaps xmm0, xmm6; X }
    *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
    __asm
    {
      vaddss  xmm1, xmm0, xmm7
      vcvttss2si edi, xmm1
    }
    if ( _EDI >= 0x1F )
    {
      LODWORD(v21) = 31;
      LODWORD(v20) = _EDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v13 = v9 + (int)_EDI;
    if ( !s_fenceObjects[0][v13] )
    {
      LODWORD(v21) = _EDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 185, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_RegisterForFenceDependenciesUpdatesForController: Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v21, s_fenceNames[_EDI]) )
        __debugbreak();
    }
    v14 = s_fenceObjects[0][v13];
    v15 = 0;
    v16 = 0i64;
    m_callbacks = v14->m_callbacks;
    while ( *m_callbacks )
    {
      ++v15;
      ++v16;
      ++m_callbacks;
      if ( v16 >= 4 )
        goto LABEL_21;
    }
    v14->m_callbacks[v16] = callback;
    if ( v15 >= 0 )
      goto LABEL_23;
LABEL_21:
    LODWORD(v20) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 196, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FenceManager_RegisterForFenceDependenciesUpdatesForController: No update callback slot found for fence index %d (%s)", v20, s_fenceNames[_EDI]) )
      __debugbreak();
LABEL_23:
    ++v4;
    v9 += 31i64;
  }
  while ( v4 < 8 );
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
FenceManager_RegisterForFenceDependenciesUpdatesForController
==============
*/
void FenceManager_RegisterForFenceDependenciesUpdatesForController(int controllerIndex, FenceType fenceType, void (*callback)(int, bool))
{
  __int64 v6; 
  __int64 v11; 
  FenceObject *v12; 
  int v13; 
  __int64 v14; 
  void (__fastcall **m_callbacks)(int, bool); 
  __int64 v16; 
  __int64 v17; 
  int v18; 

  v6 = controllerIndex;
  if ( s_fenceManagerInitState != FENCE_MANAGER_INITED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 180, ASSERT_TYPE_ASSERT, "(s_fenceManagerInitState == FENCE_MANAGER_INITED)", (const char *)&queryFormat, "s_fenceManagerInitState == FENCE_MANAGER_INITED") )
    __debugbreak();
  if ( (unsigned int)v6 >= 8 )
  {
    v18 = 8;
    LODWORD(v16) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 181, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si esi, xmm1
  }
  if ( _ESI >= 0x1F )
  {
    LODWORD(v17) = 31;
    LODWORD(v16) = _ESI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v11 = (int)_ESI + 31 * v6;
  if ( !s_fenceObjects[0][v11] )
  {
    LODWORD(v17) = _ESI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 185, ASSERT_TYPE_ASSERT, "(s_fenceObjects[controllerIndex][fenceIndex])", "%s\n\tFenceManager_RegisterForFenceDependenciesUpdatesForController: Fence index %d (%s) is not registered with the fence manager", "s_fenceObjects[controllerIndex][fenceIndex]", v17, s_fenceNames[_ESI]) )
      __debugbreak();
  }
  v12 = s_fenceObjects[0][v11];
  v13 = 0;
  v14 = 0i64;
  m_callbacks = v12->m_callbacks;
  while ( *m_callbacks )
  {
    ++v13;
    ++v14;
    ++m_callbacks;
    if ( v14 >= 4 )
      goto LABEL_20;
  }
  v12->m_callbacks[v13] = callback;
  if ( v13 >= 0 )
    return;
LABEL_20:
  LODWORD(v16) = _ESI;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 196, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "FenceManager_RegisterForFenceDependenciesUpdatesForController: No update callback slot found for fence index %d (%s)", v16, s_fenceNames[_ESI]) )
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
  unsigned int v10; 
  int v11; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si ebx, xmm1
  }
  if ( _EBX >= 0x1F )
  {
    v11 = 31;
    v10 = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  FenceManager_ResetFenceObjectForControllerByIndex(controllerIndex, _EBX, shouldClearCallbacks);
}

/*
==============
FenceManager_ResetFenceObjectForControllers
==============
*/
void FenceManager_ResetFenceObjectForControllers(FenceType fenceType, bool shouldClearCallbacks)
{
  int i; 
  unsigned int v9; 
  int v10; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
  }
  if ( fenceType < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000; X }
  *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si edi, xmm1
  }
  if ( _EDI >= 0x1F )
  {
    v10 = 31;
    v9 = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\fence_manager.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( fenceIndex ) < (unsigned)( 31 )", "fenceIndex doesn't index FENCE_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  for ( i = 0; i < 8; ++i )
    FenceManager_ResetFenceObjectForControllerByIndex(i, _EDI, shouldClearCallbacks);
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

