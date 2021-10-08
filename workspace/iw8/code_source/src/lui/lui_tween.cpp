/*
==============
LUI_Tween_SetStartValueInTween
==============
*/

void __fastcall LUI_Tween_SetStartValueInTween(LUIElement *element, LUITween *tween, lua_State *luaVM)
{
  ?LUI_Tween_SetStartValueInTween@@YAXPEAULUIElement@@PEAULUITween@@PEAUlua_State@@@Z(element, tween, luaVM);
}

/*
==============
LUI_Tween_SetEndValueInTween
==============
*/

void __fastcall LUI_Tween_SetEndValueInTween(LUITween *tween, lua_State *luaVM)
{
  ?LUI_Tween_SetEndValueInTween@@YAXPEAULUITween@@PEAUlua_State@@@Z(tween, luaVM);
}

/*
==============
LUI_Tween_InvalidateCache
==============
*/

void __fastcall LUI_Tween_InvalidateCache(LUIElement *element)
{
  ?LUI_Tween_InvalidateCache@@YAXPEAULUIElement@@@Z(element);
}

/*
==============
LUI_Tween_InterruptActiveElementTween
==============
*/

void __fastcall LUI_Tween_InterruptActiveElementTween(LUIElement *element, LUITweenProperty tweenProperty, lua_State *luaVM)
{
  ?LUI_Tween_InterruptActiveElementTween@@YAXPEAULUIElement@@W4LUITweenProperty@@PEAUlua_State@@@Z(element, tweenProperty, luaVM);
}

/*
==============
LUI_Tween_PushOnLuaStack
==============
*/

void __fastcall LUI_Tween_PushOnLuaStack(LUITween *tween, lua_State *luaVM)
{
  ?LUI_Tween_PushOnLuaStack@@YAXPEAULUITween@@PEAUlua_State@@@Z(tween, luaVM);
}

/*
==============
LUI_Tween_AddElementTween
==============
*/

void __fastcall LUI_Tween_AddElementTween(LUIElement *element, LUITween *tweenToAdd, lua_State *luaVM, bool waitInterrupt)
{
  ?LUI_Tween_AddElementTween@@YAXPEAULUIElement@@PEAULUITween@@PEAUlua_State@@_N@Z(element, tweenToAdd, luaVM, waitInterrupt);
}

/*
==============
LUI_Tween_DebugDraw
==============
*/

void __fastcall LUI_Tween_DebugDraw(LocalClientNum_t localClientNum)
{
  ?LUI_Tween_DebugDraw@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Tween_QueueElementTween
==============
*/

void __fastcall LUI_Tween_QueueElementTween(LUIElement *element, LUITween *tweenToAdd, lua_State *luaVM)
{
  ?LUI_Tween_QueueElementTween@@YAXPEAULUIElement@@PEAULUITween@@PEAUlua_State@@@Z(element, tweenToAdd, luaVM);
}

/*
==============
LUI_Tween_CreateFromTemporaryTween
==============
*/

LUITween *__fastcall LUI_Tween_CreateFromTemporaryTween(lua_State *const luaVM, const LUITween *const temporaryTween)
{
  return ?LUI_Tween_CreateFromTemporaryTween@@YAPEAULUITween@@QEAUlua_State@@QEBU1@@Z(luaVM, temporaryTween);
}

/*
==============
LUI_Tween_AddFromQueue
==============
*/

void __fastcall LUI_Tween_AddFromQueue(LUIElement *element, lua_State *luaVM, LUITween *startingTween, bool *outInvalidatesLayout)
{
  ?LUI_Tween_AddFromQueue@@YAXPEAULUIElement@@PEAUlua_State@@PEAULUITween@@PEA_N@Z(element, luaVM, startingTween, outInvalidatesLayout);
}

/*
==============
LUI_Tween_Create
==============
*/

LUITween *__fastcall LUI_Tween_Create(lua_State *luaVM, LUIElement *owner)
{
  return ?LUI_Tween_Create@@YAPEAULUITween@@PEAUlua_State@@PEAULUIElement@@@Z(luaVM, owner);
}

/*
==============
LUI_Tween_RunCallbacks
==============
*/

void __fastcall LUI_Tween_RunCallbacks(lua_State *luaVM)
{
  ?LUI_Tween_RunCallbacks@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_Tween_InterruptElementTween
==============
*/

void __fastcall LUI_Tween_InterruptElementTween(LUIElement *element, LUITweenProperty tweenProperty, lua_State *luaVM)
{
  ?LUI_Tween_InterruptElementTween@@YAXPEAULUIElement@@W4LUITweenProperty@@PEAUlua_State@@@Z(element, tweenProperty, luaVM);
}

/*
==============
LUI_Tween_SetOnComplete
==============
*/

void __fastcall LUI_Tween_SetOnComplete(LUITween *tween, int onCompleteIndex, lua_State *luaVM)
{
  ?LUI_Tween_SetOnComplete@@YAXPEAULUITween@@HPEAUlua_State@@@Z(tween, onCompleteIndex, luaVM);
}

/*
==============
LUI_Tween_GetNumTweensInUse
==============
*/

int __fastcall LUI_Tween_GetNumTweensInUse()
{
  return ?LUI_Tween_GetNumTweensInUse@@YAHXZ();
}

/*
==============
LUIElement_UpdateTextTweenLayout
==============
*/

void __fastcall LUIElement_UpdateTextTweenLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  ?LUIElement_UpdateTextTweenLayout@@YAXW4LocalClientNum_t@@PEAULUIElement@@MHPEAUlua_State@@@Z(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_Tween_Verify_Tween_Metatable_Unref
==============
*/

void __fastcall LUI_Tween_Verify_Tween_Metatable_Unref(const int index, const int ref)
{
  ?LUI_Tween_Verify_Tween_Metatable_Unref@@YAXHH@Z(index, ref);
}

/*
==============
LUI_Tween_Initialize
==============
*/

void __fastcall LUI_Tween_Initialize(lua_State *luaVM)
{
  ?LUI_Tween_Initialize@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_Tween_InitializeTemporaryTween
==============
*/

void __fastcall LUI_Tween_InitializeTemporaryTween(lua_State *const luaVM, LUIElement *const owner, LUITween *const temporaryTween)
{
  ?LUI_Tween_InitializeTemporaryTween@@YAXQEAUlua_State@@QEAULUIElement@@QEAULUITween@@@Z(luaVM, owner, temporaryTween);
}

/*
==============
LUI_Tween_GetNumTweensTotal
==============
*/

int __fastcall LUI_Tween_GetNumTweensTotal()
{
  return ?LUI_Tween_GetNumTweensTotal@@YAHXZ();
}

/*
==============
LUI_Tween_ApplyElementTweens
==============
*/

void __fastcall LUI_Tween_ApplyElementTweens(LUIElement *element, int deltaTime, lua_State *luaVM, bool *outInvalidatesLayout, bool *outInvalidatesQuadCache)
{
  ?LUI_Tween_ApplyElementTweens@@YAXPEAULUIElement@@HPEAUlua_State@@PEA_N2@Z(element, deltaTime, luaVM, outInvalidatesLayout, outInvalidatesQuadCache);
}

/*
==============
LUI_Tween_Ease
==============
*/

double __fastcall LUI_Tween_Ease(float t, Easing easing)
{
  double result; 

  *(float *)&result = ?LUI_Tween_Ease@@YAMMW4Easing@@@Z(t, easing);
  return result;
}

/*
==============
LUI_Tween_InterruptQueuedElementTweens
==============
*/

void __fastcall LUI_Tween_InterruptQueuedElementTweens(LUIElement *element, LUITweenProperty tweenProperty, LUITween *firstTweenOfNewSequence, lua_State *luaVM)
{
  ?LUI_Tween_InterruptQueuedElementTweens@@YAXPEAULUIElement@@W4LUITweenProperty@@PEAULUITween@@PEAUlua_State@@@Z(element, tweenProperty, firstTweenOfNewSequence, luaVM);
}

/*
==============
LUI_Tween_SetNonZeroDefaultStartValueInTween
==============
*/

void __fastcall LUI_Tween_SetNonZeroDefaultStartValueInTween(LUITween *tween)
{
  ?LUI_Tween_SetNonZeroDefaultStartValueInTween@@YAXPEAULUITween@@@Z(tween);
}

/*
==============
LUI_Model_DebugIterTweens
==============
*/

void __fastcall LUI_Model_DebugIterTweens(lua_State *luaVM)
{
  ?LUI_Model_DebugIterTweens@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_Tween_ClearElementTweens
==============
*/

void __fastcall LUI_Tween_ClearElementTweens(LUIElement *element, lua_State *luaVM)
{
  ?LUI_Tween_ClearElementTweens@@YAXPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUIElement_UpdateTextTweenLayout
==============
*/

void __fastcall LUIElement_UpdateTextTweenLayout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  signed int v13; 
  const char *v34; 
  __int64 v35; 
  char *v36; 
  ConversionArguments arguments; 
  char dest[16]; 
  char outputString[24]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = (unsigned int *)element->customElementData;
  v13 = _RBX[3];
  _ECX = *_RBX;
  if ( v13 >= (int)*_RBX )
  {
    _R9 = _RBX[2];
  }
  else
  {
    _EAX = deltaTime + v13;
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm6; max
    }
    _RBX[3] = _EAX;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    LUI_Tween_Ease(*(float *)&_XMM0, *((Easing *)_RBX + 16));
    __asm
    {
      vmovd   xmm2, dword ptr [rbx+4]
      vsubss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+0F8h+var_38]
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm3, xmm2, xmm1
      vmovd   xmm2, dword ptr [rbx+8]
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm1, xmm3, xmm0
      vcvttss2si r9d, xmm1
    }
  }
  Com_sprintf(dest, 0xAui64, "%d", _R9);
  v34 = (char *)_RBX + 17;
  v35 = -1i64;
  do
    ++v35;
  while ( v34[v35] );
  if ( v35 )
  {
    arguments.argCount = 1;
    arguments.args[0] = dest;
    UI_ReplaceConversions(v34, &arguments, outputString, 0x14ui64);
    v36 = outputString;
  }
  else
  {
    v36 = dest;
  }
  LUI_LUIElement_SetText(element, v36, luaVM);
  __asm { vmovaps xmm2, xmm7; unitScale }
  LUIElement_DefaultLayout(localClientNum, element, *(float *)&_XMM2, deltaTime, luaVM);
  __asm { vmovaps xmm7, [rsp+0F8h+var_48] }
}

/*
==============
LUI_Model_DebugIterTweens
==============
*/
void LUI_Model_DebugIterTweens(lua_State *luaVM)
{
  LUIUserDataPool<LUITween,0,1200> *v2; 
  const char *ID; 

  v2 = &s_LUITweenPool;
  do
  {
    if ( v2->m_pool[0].owner )
    {
      ID = LUIElement_GetID(v2->m_pool[0].owner, luaVM);
      LUI_Interface_DebugPrint("  OwnerId: \"%s\" Property: %s\n", ID, TweenPropertyStrName[(char)v2->m_pool[0].targetProperty[0]]);
    }
    v2 = (LUIUserDataPool<LUITween,0,1200> *)((char *)v2 + 1104);
  }
  while ( (__int64)v2 < (__int64)s_LUITweenPool.m_poolData );
}

/*
==============
LUI_Tween_AddElementTween
==============
*/
void LUI_Tween_AddElementTween(LUIElement *element, LUITween *tweenToAdd, lua_State *luaVM, bool waitInterrupt)
{
  char v4; 
  LUITween *activeTweens; 
  LUITween *queuedTweens; 

  v4 = tweenToAdd->targetProperty[0];
  if ( v4 || waitInterrupt )
  {
    activeTweens = element->activeTweens;
    if ( activeTweens )
    {
      while ( activeTweens->targetProperty[0] != v4 )
      {
        activeTweens = activeTweens->nextTween;
        if ( !activeTweens )
          goto LABEL_12;
      }
      if ( (!LUI_ElementHasWeakTableEntry(activeTweens->owner, luaVM) || !LUI_ElementHasWeakTableEntry(element, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 866, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM )") )
        __debugbreak();
      LUI_Tween_UnlinkElementTween(activeTweens);
      LUI_Tween_ClearOnComplete(activeTweens, luaVM);
      LUI_Tween_Free(activeTweens, luaVM);
    }
LABEL_12:
    queuedTweens = element->queuedTweens;
    if ( queuedTweens )
    {
      while ( queuedTweens->targetProperty[0] != v4 )
      {
        queuedTweens = queuedTweens->nextTween;
        if ( !queuedTweens )
          goto LABEL_21;
      }
      if ( (!LUI_ElementHasWeakTableEntry(queuedTweens->owner, luaVM) || !LUI_ElementHasWeakTableEntry(element, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 849, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM )") )
        __debugbreak();
      LUI_Tween_UnlinkElementTween(queuedTweens);
      LUI_Tween_ClearOnComplete(queuedTweens, luaVM);
      LUI_Tween_Free(queuedTweens, luaVM);
    }
  }
LABEL_21:
  LUI_Tween_AddElementTweenNoInterrupt(element, tweenToAdd, luaVM);
}

/*
==============
LUI_Tween_AddElementTweenNoInterrupt
==============
*/
void LUI_Tween_AddElementTweenNoInterrupt(LUIElement *element, LUITween *tweenToAdd, lua_State *luaVM)
{
  LUIElement *parent; 
  LUITween *lastActiveTween; 
  bool v7; 

  element->tweensCached = 0;
  parent = element->parent;
  if ( parent && parent->tweensCached )
    LUI_Tween_InvalidateCache(parent);
  if ( (unsigned __int8)(tweenToAdd->targetProperty[0] - 7) <= 7u )
    element->canCacheLayout = 0;
  if ( s_LUITweenLateness < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 732, ASSERT_TYPE_ASSERT, "(s_LUITweenLateness >= 0)", (const char *)&queryFormat, "s_LUITweenLateness >= 0") )
    __debugbreak();
  tweenToAdd->timeElapsed = s_LUITweenLateness;
  lastActiveTween = element->lastActiveTween;
  tweenToAdd->previousTween = lastActiveTween;
  tweenToAdd->nextTween = NULL;
  if ( lastActiveTween )
    lastActiveTween->nextTween = tweenToAdd;
  v7 = element->activeTweens == NULL;
  element->lastActiveTween = tweenToAdd;
  if ( v7 )
    element->activeTweens = tweenToAdd;
}

/*
==============
LUI_Tween_AddFromQueue
==============
*/
void LUI_Tween_AddFromQueue(LUIElement *element, lua_State *luaVM, LUITween *startingTween, bool *outInvalidatesLayout)
{
  LUITween *activeTweens; 
  LUIElementUsageFlag usageFlags; 
  bool i; 
  char v24; 

  _RBX = element;
  if ( !outInvalidatesLayout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 785, ASSERT_TYPE_ASSERT, "(outInvalidatesLayout)", (const char *)&queryFormat, "outInvalidatesLayout") )
    __debugbreak();
  if ( _RBX )
  {
    if ( startingTween || (startingTween = _RBX->queuedTweens) != NULL )
    {
      __asm
      {
        vmovaps [rsp+58h+var_18], xmm6
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovaps [rsp+58h+var_28], xmm7
        vmovss  xmm7, cs:__real@3e4ccccd
      }
      while ( 1 )
      {
        activeTweens = _RBX->activeTweens;
        if ( activeTweens )
          break;
LABEL_11:
        _RDI = startingTween;
        startingTween = startingTween->nextTween;
        LUI_Tween_UnlinkElementTween(_RDI);
        LUI_Tween_SetStartValueInTween(_RBX, _RDI, luaVM);
        usageFlags = _RBX->usageFlags;
        if ( (usageFlags & 0x80u) != 0 && _RDI->targetProperty[0] == 3 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vsubss  xmm1, xmm0, dword ptr [rdi+18h]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm7
          }
          if ( _RDI->targetProperty[0] > 3u )
            _RBX->usageFlags = usageFlags | 0x1000;
        }
        LUI_Tween_AddElementTweenNoInterrupt(_RBX, _RDI, luaVM);
        if ( (unsigned __int8)(_RDI->targetProperty[0] - 7) <= 7u )
        {
          LUI_LUIElement_InvalidateLayout(_RBX);
          *outInvalidatesLayout = 1;
        }
        if ( !startingTween )
        {
          if ( SLOBYTE(_RBX->usageFlags) < 0 )
          {
            _RAX = _RBX->activeTweens;
            __asm
            {
              vmovss  xmm2, dword ptr [rbx+18h]
              vmovss  xmm3, dword ptr [rbx+1Ch]
              vmovaps xmm0, xmm2
              vmovaps xmm1, xmm3
            }
            for ( i = _RAX == NULL; _RAX; i = _RAX == NULL )
            {
              v24 = _RAX->targetProperty[0];
              if ( v24 == 13 )
              {
                __asm { vmovss  xmm0, dword ptr [rax+28h] }
              }
              else if ( v24 == 14 )
              {
                __asm { vmovss  xmm1, dword ptr [rax+28h] }
              }
              _RAX = _RAX->nextTween;
            }
            __asm
            {
              vsubss  xmm1, xmm1, xmm0
              vsubss  xmm0, xmm3, xmm2
              vdivss  xmm1, xmm1, xmm0
              vsubss  xmm2, xmm1, cs:__real@3f800000
              vandps  xmm2, xmm2, xmm6
              vcomiss xmm2, xmm7
            }
            if ( !i )
              _RBX->usageFlags |= 0x1000u;
          }
          goto LABEL_27;
        }
      }
      while ( activeTweens->targetProperty[0] != startingTween->targetProperty[0] )
      {
        activeTweens = activeTweens->nextTween;
        if ( !activeTweens )
          goto LABEL_11;
      }
LABEL_27:
      __asm
      {
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
    }
  }
}

/*
==============
LUI_Tween_AddPendingCallback
==============
*/
void LUI_Tween_AddPendingCallback(LUITween *tween)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 

  if ( tween->onCompleteRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1000, ASSERT_TYPE_ASSERT, "(LUI_Tween_HasCallback( tween ))", (const char *)&queryFormat, "LUI_Tween_HasCallback( tween )") )
    __debugbreak();
  if ( (unsigned int)s_numPendingCallbacks >= 0x4B0 )
  {
    v4 = 1200;
    LODWORD(v3) = s_numPendingCallbacks;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1001, ASSERT_TYPE_ASSERT, "(unsigned)( s_numPendingCallbacks ) < (unsigned)( ( sizeof( *array_counter( s_pendingCallbacks ) ) + 0 ) )", "s_numPendingCallbacks doesn't index ARRAY_COUNT( s_pendingCallbacks )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( tween->isUsedTempTween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1002, ASSERT_TYPE_ASSERT, "(!tween->isUsedTempTween)", (const char *)&queryFormat, "!tween->isUsedTempTween") )
    __debugbreak();
  v2 = s_numPendingCallbacks++;
  s_pendingCallbacks[v2] = tween;
}

/*
==============
LUI_Tween_Allocate
==============
*/
LUITween *LUI_Tween_Allocate(lua_State *const luaVM, LUIElement *const owner)
{
  LUIUserDataPool<LUITween,0,1200> *v3; 
  LUITween *result; 
  const char *ID; 
  const char *v7; 

  v3 = &s_LUITweenPool;
  result = LUIUserDataPool<LUITween,0,1200>::Allocate(&s_LUITweenPool, 2, "LUITween", luaVM);
  if ( result )
  {
    ++s_allocatedTweens;
  }
  else
  {
    ID = LUIElement_GetID(owner, luaVM);
    Com_PrintWarning(13, "LUI_Tween_Create: Failed to allocate tween for id: %s. The game will probably crash now.\n", ID);
    do
    {
      if ( v3->m_pool[0].owner )
      {
        v7 = LUIElement_GetID(v3->m_pool[0].owner, luaVM);
        Com_PrintWarning(13, "  tween belongs to: %s property: %d\n", v7, (unsigned int)(char)v3->m_pool[0].targetProperty[0]);
      }
      v3 = (LUIUserDataPool<LUITween,0,1200> *)((char *)v3 + 1104);
    }
    while ( (__int64)v3 < (__int64)s_LUITweenPool.m_poolData );
    return 0i64;
  }
  return result;
}

/*
==============
LUI_Tween_ApplyElementTween
==============
*/
_BOOL8 LUI_Tween_ApplyElementTween(LUIElement *element, LUITween *tween, int deltaTime, lua_State *luaVM)
{
  int duration; 
  char v22; 
  int timeElapsed; 
  bool v233; 
  LUISharedTextRefIndex v235; 
  LUISharedTextRefIndex glitchScanlinePitch; 
  LUISharedTextRefIndex v237; 
  const char *v238; 
  LocalClientNum_t CurrentLocalClient; 
  LUIHorizontalAlignment byteValue; 
  LUIVerticalAlignment VerticalAlignment; 
  LUIVerticalAlignment v242; 
  LUIHorizontalAlignment HorizontalAlignment; 
  LUISharedTextRefIndex v244; 
  const char *v245; 
  __int64 v249; 
  GfxFont *output_font; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_58], xmm8
  }
  _RBX = tween;
  _RDI = element;
  if ( tween->owner != element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1035, ASSERT_TYPE_ASSERT, "(tween->owner == element)", (const char *)&queryFormat, "tween->owner == element") )
    __debugbreak();
  duration = _RBX->duration;
  __asm { vmovaps [rsp+88h+var_48], xmm7 }
  _RBX->timeElapsed += deltaTime;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( duration > 0 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ecx
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vmovaps xmm0, xmm7 }
  }
  *(double *)&_XMM0 = LUI_Tween_Ease(*(float *)&_XMM0, _RBX->easing);
  __asm { vmovaps xmm6, xmm0 }
  switch ( _RBX->targetProperty[0] )
  {
    case 0:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x2D:
    case 0x37:
      break;
    case 1:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 1
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+44h], xmm0
      }
      break;
    case 2:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+2Ch]; jumptable 0000000142626D31 case 2
        vsubss  xmm5, xmm7, xmm6
        vmulss  xmm1, xmm5, dword ptr [rbx+1Ch]
        vmulss  xmm2, xmm5, dword ptr [rbx+20h]
        vaddss  xmm4, xmm1, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+30h]
        vmulss  xmm1, xmm5, dword ptr [rbx+18h]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rdi+38h], xmm1
        vmovss  dword ptr [rdi+3Ch], xmm4
        vmovss  dword ptr [rdi+40h], xmm3
      }
      break;
    case 3:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 3
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+34h], xmm0
      }
      break;
    case 4:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 4
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+0E0h], xmm0
      }
      goto LABEL_11;
    case 5:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 5
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+0E4h], xmm0
      }
      goto LABEL_11;
    case 6:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 6
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+30h], xmm0
      }
      break;
    case 7:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 7
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+10h], xmm0
      }
      break;
    case 8:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 8
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+14h], xmm0
      }
      break;
    case 9:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 9
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+28h], xmm0
      }
      break;
    case 0xA:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 10
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+2Ch], xmm0
      }
      break;
    case 0xB:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 11
        vmovss  xmm1, dword ptr [rbx+18h]
        vucomiss xmm1, xmm3
      }
      if ( !v22 )
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vmulss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm3, xmm6
          vaddss  xmm1, xmm2, xmm1
        }
      }
      __asm { vmovss  dword ptr [rdi], xmm1 }
      break;
    case 0xC:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 12
        vmovss  xmm1, dword ptr [rbx+18h]
        vucomiss xmm1, xmm3
      }
      if ( !v22 )
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vmulss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm3, xmm6
          vaddss  xmm1, xmm2, xmm1
        }
      }
      __asm { vmovss  dword ptr [rdi+4], xmm1 }
      break;
    case 0xD:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 13
        vmovss  xmm1, dword ptr [rbx+18h]
        vucomiss xmm1, xmm3
      }
      if ( !v22 )
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vmulss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm3, xmm6
          vaddss  xmm1, xmm2, xmm1
        }
      }
      __asm { vmovss  dword ptr [rdi+18h], xmm1 }
      break;
    case 0xE:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 14
        vmovss  xmm1, dword ptr [rbx+18h]
        vucomiss xmm1, xmm3
      }
      if ( !v22 )
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vmulss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm3, xmm6
          vaddss  xmm1, xmm2, xmm1
        }
      }
      __asm { vmovss  dword ptr [rdi+1Ch], xmm1 }
      break;
    case 0xF:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 15
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+0DCh], xmm0
      }
LABEL_11:
      __asm { vucomiss xmm0, xmm8 }
      if ( !v22 )
        LUI_LUIElement_FlagAs3D(_RDI);
      break;
    case 0x13:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 19
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+118h], xmm0
      }
      break;
    case 0x14:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 20
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+11Ch], xmm0
      }
      break;
    case 0x15:
    case 0x20:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 cases 21,32
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+120h], xmm0
      }
      break;
    case 0x16:
    case 0x21:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 cases 22,33
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+124h], xmm0
      }
      break;
    case 0x17:
    case 0x33:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 cases 23,51
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+48h], xmm0
      }
      break;
    case 0x18:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rax+14h], xmm0
      }
      break;
    case 0x19:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rax+18h], xmm0
      }
      break;
    case 0x1A:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rax+1Ch], xmm0
      }
      break;
    case 0x1B:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rax+20h], xmm0
      }
      break;
    case 0x1C:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+2Ch]
        vsubss  xmm5, xmm7, xmm6
        vmulss  xmm1, xmm5, dword ptr [rbx+1Ch]
        vmulss  xmm2, xmm5, dword ptr [rbx+20h]
        vaddss  xmm4, xmm1, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+30h]
        vmulss  xmm1, xmm5, dword ptr [rbx+18h]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rax+24h], xmm1
        vmovss  dword ptr [rax+28h], xmm4
        vmovss  dword ptr [rax+2Ch], xmm3
      }
      break;
    case 0x1D:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rax+34h], xmm0
      }
      break;
    case 0x1E:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rax+38h], xmm0
      }
      break;
    case 0x1F:
      _RAX = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(_RDI, luaVM);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+2Ch]
        vsubss  xmm5, xmm7, xmm6
        vmulss  xmm1, xmm5, dword ptr [rbx+1Ch]
        vmulss  xmm2, xmm5, dword ptr [rbx+20h]
        vaddss  xmm4, xmm1, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+30h]
        vmulss  xmm1, xmm5, dword ptr [rbx+18h]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rax+3Ch], xmm1
        vmovss  dword ptr [rax+40h], xmm4
        vmovss  dword ptr [rax+44h], xmm3
      }
      break;
    case 0x27:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->pixelGrid.blockWidth = _EAX;
      break;
    case 0x28:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->pixelGrid.blockHeight = _EAX;
      break;
    case 0x29:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->pixelGrid.gutterWidth = _EAX;
      break;
    case 0x2A:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->pixelGrid.gutterHeight = _EAX;
      break;
    case 0x2B:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->pixelGrid.contrast = _EAX;
      break;
    case 0x2C:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 44
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+138h], xmm0
      }
      break;
    case 0x2E:
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+28h]; jumptable 0000000142626D31 case 46
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm0, dword ptr [rbx+18h]
        vaddss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+12Ch], xmm0
      }
      break;
    case 0x2F:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->currentAnimationState.userDataBytes[0] = _EAX;
      break;
    case 0x30:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->currentAnimationState.userDataBytes[1] = _EAX;
      break;
    case 0x31:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->currentAnimationState.userDataBytes[2] = _EAX;
      break;
    case 0x32:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->currentAnimationState.userDataBytes[3] = _EAX;
      break;
    case 0x34:
    case 0x35:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->currentAnimationState.dataSource = _EAX;
      break;
    case 0x36:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm6
        vaddss  xmm2, xmm2, xmm0
        vcvttss2si eax, xmm2
      }
      _RDI->currentAnimationState.userDataShorts[1] = _EAX;
      break;
    default:
      LODWORD(v249) = (char)_RBX->targetProperty[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1372, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected tween property: %d", v249) )
        __debugbreak();
      break;
  }
  timeElapsed = _RBX->timeElapsed;
  __asm
  {
    vmovaps xmm8, [rsp+88h+var_58]
    vmovaps xmm7, [rsp+88h+var_48]
  }
  v233 = timeElapsed >= _RBX->duration;
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  if ( timeElapsed >= _RBX->duration )
  {
    switch ( _RBX->targetProperty[0] )
    {
      case 4:
      case 5:
      case 0xF:
        LUI_LUIElement_CheckUnFlagAs3D(_RDI);
        break;
      case 0x10:
        _RDI->imageData.image = _RBX->endValue.image;
        break;
      case 0x11:
        _RDI->blendMode = _RBX->endValue.blendMode;
        break;
      case 0x12:
        v235 = *(unsigned __int16 *)_RDI->textData.textRef;
        if ( (_WORD)v235 != INVALID_INDEX )
          LUI_SharedTextRef_RemoveRef(luaVM, v235);
        *(_WORD *)_RDI->textData.textRef = _RBX->endValue.shortValue;
        if ( !_RBX->looping )
          goto LABEL_82;
        glitchScanlinePitch = _RBX->endValue.glitchScanlinePitch;
        if ( (_WORD)glitchScanlinePitch == INVALID_INDEX )
          goto LABEL_82;
        LUI_SharedTextRef_AddRef(luaVM, glitchScanlinePitch);
        break;
      case 0x22:
        byteValue = _RBX->endValue.byteValue;
        VerticalAlignment = LUI_GetVerticalAlignment(_RDI->currentAnimationState.alignment);
        _RDI->currentAnimationState.alignment = LUI_GetAlignment(byteValue, VerticalAlignment);
        break;
      case 0x23:
        v242 = _RBX->endValue.byteValue;
        HorizontalAlignment = LUI_GetHorizontalAlignment(_RDI->currentAnimationState.alignment);
        _RDI->currentAnimationState.alignment = LUI_GetAlignment(HorizontalAlignment, v242);
        break;
      case 0x24:
        v244 = _RBX->endValue.glitchScanlinePitch;
        if ( (_WORD)v244 != INVALID_INDEX )
        {
          LUI_SharedTextRef_PushRefOnStack(luaVM, v244);
          if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1456, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
            __debugbreak();
          v245 = j_lua_tolstring(luaVM, -1, NULL);
          LUI_Interface_RegisterFont(v245, &output_font);
          _RDI->imageData.image = (const GfxImage *)output_font;
          goto LABEL_80;
        }
        break;
      case 0x25:
        if ( _RBX->endValue.intValue )
          _RDI->usageFlags |= 0x100u;
        else
          _RDI->usageFlags &= ~0x100u;
        break;
      case 0x26:
        LUI_PutElementOnTopOfStack(_RDI, luaVM);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, dword ptr [rbx+28h]; value
        }
        LUI_SetTableNumber("m_textStyle", *(long double *)&_XMM1, luaVM);
        j_lua_settop(luaVM, -2);
        break;
      case 0x2D:
        _RDI->colorOp.op = _RBX->endValue.byteValue;
        break;
      case 0x37:
        v237 = _RBX->endValue.glitchScanlinePitch;
        if ( (_WORD)v237 != INVALID_INDEX )
        {
          LUI_SharedTextRef_PushRefOnStack(luaVM, v237);
          if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1412, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
            __debugbreak();
          v238 = j_lua_tolstring(luaVM, -1, NULL);
          CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
          if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
            CurrentLocalClient = LOCAL_CLIENT_0;
          if ( LUI_Workers_IsRunningCmd() )
            LUI_Workers_QueuePlaySound(CurrentLocalClient, v238);
          else
            UI_PlayLocalSoundAliasByName(CurrentLocalClient, v238);
LABEL_80:
          j_lua_settop(luaVM, -2);
          if ( !_RBX->looping )
          {
            LUI_SharedTextRef_RemoveRef(luaVM, (const LUISharedTextRefIndex)_RBX->endValue.glitchScanlinePitch);
LABEL_82:
            _RBX->endValue.shortValue = -1;
          }
        }
        break;
      default:
        return v233;
    }
  }
  return v233;
}

/*
==============
LUI_Tween_ApplyElementTweens
==============
*/
void LUI_Tween_ApplyElementTweens(LUIElement *element, int deltaTime, lua_State *luaVM, bool *outInvalidatesLayout, bool *outInvalidatesQuadCache)
{
  int v7; 
  LUITween *activeTweens; 
  unsigned int v10; 
  LUITween *lastActiveTween; 
  LUITween *nextTween; 
  bool v13; 
  unsigned int v14; 
  int onCompleteRef; 
  LUITween *lastQueuedTween; 
  __int64 v17; 
  __int64 v18; 

  v7 = deltaTime;
  if ( !outInvalidatesLayout )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1536, ASSERT_TYPE_ASSERT, "(outInvalidatesLayout)", (const char *)&queryFormat, "outInvalidatesLayout") )
      __debugbreak();
    v7 = deltaTime;
  }
  activeTweens = element->activeTweens;
  v10 = 0;
  lastActiveTween = element->lastActiveTween;
  if ( activeTweens )
  {
    do
    {
      nextTween = activeTweens->nextTween;
      v13 = LUI_Tween_ApplyElementTween(element, activeTweens, v7, luaVM);
      if ( activeTweens->targetProperty[0] )
        *outInvalidatesQuadCache = 1;
      if ( v13 )
      {
        v14 = v10++;
        if ( v14 >= 0x38 )
        {
          LODWORD(v18) = 56;
          LODWORD(v17) = v10++;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1557, ASSERT_TYPE_ASSERT, "(unsigned)( numCompletedTweens++ ) < (unsigned)( static_cast<int>(LUITweenProperty::COUNT) )", "numCompletedTweens++ doesn't index static_cast<int>(LUITweenProperty::COUNT)\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        onCompleteRef = activeTweens->onCompleteRef;
        if ( activeTweens->looping )
        {
          if ( onCompleteRef != -2 )
            LUI_Tween_AddPendingCallback(activeTweens);
          LUI_Tween_UnlinkElementTween(activeTweens);
          lastQueuedTween = element->lastQueuedTween;
          activeTweens->previousTween = lastQueuedTween;
          activeTweens->nextTween = NULL;
          if ( lastQueuedTween )
            lastQueuedTween->nextTween = activeTweens;
          if ( !element->queuedTweens )
            element->queuedTweens = activeTweens;
          element->lastQueuedTween = activeTweens;
        }
        else if ( onCompleteRef == -2 )
        {
          LUI_Tween_UnlinkElementTween(activeTweens);
          LUI_Tween_ClearOnComplete(activeTweens, luaVM);
          LUI_Tween_Free(activeTweens, luaVM);
        }
        else
        {
          LUI_Tween_AddPendingCallback(activeTweens);
          LUI_Tween_UnlinkElementTween(activeTweens);
        }
        LUI_Tween_AddFromQueue(element, luaVM, NULL, outInvalidatesLayout);
      }
      else if ( (unsigned __int8)(activeTweens->targetProperty[0] - 7) <= 7u )
      {
        *outInvalidatesLayout = 1;
      }
      if ( activeTweens == lastActiveTween )
        break;
      v7 = deltaTime;
      activeTweens = nextTween;
    }
    while ( nextTween );
  }
}

/*
==============
LUI_Tween_ClearElementTweens
==============
*/
void LUI_Tween_ClearElementTweens(LUIElement *element, lua_State *luaVM)
{
  LUITween *activeTweens; 
  LUIElement *v4; 
  __int64 v5; 
  unsigned __int8 v6; 
  LUITween *nextTween; 
  LUISharedTextRefIndex glitchScanlinePitch; 
  LUISharedTextRefIndex v9; 
  int strongLuaRef; 
  int v11; 
  unsigned __int64 v12; 
  LUITween *queuedTweens; 
  LUITween *v14; 
  __int64 v15; 
  __int64 v16; 

  activeTweens = element->activeTweens;
  v4 = element;
  if ( activeTweens )
  {
    v5 = 0x80001000040000i64;
    do
    {
      v6 = activeTweens->targetProperty[0];
      nextTween = activeTweens->nextTween;
      if ( v6 <= 0x37u && _bittest64(&v5, (char)v6) )
      {
        glitchScanlinePitch = activeTweens->startValue.glitchScanlinePitch;
        if ( (_WORD)glitchScanlinePitch != INVALID_INDEX )
        {
          LUI_SharedTextRef_RemoveRef(luaVM, glitchScanlinePitch);
          activeTweens->startValue.shortValue = -1;
        }
        v9 = activeTweens->endValue.glitchScanlinePitch;
        if ( (_WORD)v9 != INVALID_INDEX )
        {
          LUI_SharedTextRef_RemoveRef(luaVM, v9);
          activeTweens->endValue.shortValue = -1;
        }
      }
      strongLuaRef = activeTweens->strongLuaRef;
      if ( activeTweens->isUsedTempTween )
      {
        if ( strongLuaRef != -2 )
        {
          LODWORD(v16) = -2;
          LODWORD(v15) = activeTweens->strongLuaRef;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 304, ASSERT_TYPE_ASSERT, "( tween->strongLuaRef ) == ( (-2) )", "%s == %s\n\t%i, %i", "tween->strongLuaRef", "LUA_NOREF", v15, v16) )
            __debugbreak();
        }
        activeTweens->isUsedTempTween = 0;
      }
      else
      {
        if ( strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 309, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-2))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_NOREF") )
          __debugbreak();
        if ( activeTweens->strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 226, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-2))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_NOREF") )
          __debugbreak();
        v11 = activeTweens->strongLuaRef;
        if ( v11 == s_LUITweenMetaTableRef )
        {
          LODWORD(v16) = s_LUITweenMetaTableRef;
          LODWORD(v15) = activeTweens->strongLuaRef;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2161, ASSERT_TYPE_ASSERT, "( ref ) != ( s_LUITweenMetaTableRef )", "%s != %s\n\t%i, %i", "ref", "s_LUITweenMetaTableRef", v15, v16) )
            __debugbreak();
        }
        if ( v11 != -1 )
        {
          j_lua_rawgeti(luaVM, -10000, v11);
          if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 86, ASSERT_TYPE_ASSERT, "(isFunction( luaVM, -1 ))", (const char *)&queryFormat, "isFunction( luaVM, -1 )") )
            __debugbreak();
          j_lua_settop(luaVM, -2);
        }
        LUI_Ref_Monitor_RemoveRef(luaVM, -10000, activeTweens->strongLuaRef);
        activeTweens->strongLuaRef = -2;
        v12 = ((char *)activeTweens - (char *)&s_LUITweenPool) / 1104;
        if ( v12 > 0x4AF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 314, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Error freeing LUI tween.") )
            __debugbreak();
        }
        else
        {
          if ( s_LUITweenPool.m_poolData[v12] <= 0x4B0u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 247, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
            __debugbreak();
          s_LUITweenPool.m_poolData[v12] = s_LUITweenPool.m_firstFree;
          s_LUITweenPool.m_firstFree = ((char *)activeTweens - (char *)&s_LUITweenPool) / 1104;
          memset_0(activeTweens, 0, sizeof(LUITween));
        }
        --s_allocatedTweens;
      }
      activeTweens = nextTween;
      v5 = 0x80001000040000i64;
    }
    while ( nextTween );
    v4 = element;
  }
  queuedTweens = v4->queuedTweens;
  v4->activeTweens = NULL;
  v4->lastActiveTween = NULL;
  if ( queuedTweens )
  {
    do
    {
      v14 = queuedTweens->nextTween;
      LUI_Tween_Free(queuedTweens, luaVM);
      queuedTweens = v14;
    }
    while ( v14 );
  }
  v4->lastQueuedTween = NULL;
  v4->queuedTweens = NULL;
}

/*
==============
LUI_Tween_ClearOnComplete
==============
*/
void LUI_Tween_ClearOnComplete(LUITween *tween, lua_State *luaVM)
{
  if ( !LUI_ElementHasWeakTableEntry(tween->owner, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 234, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tween->owner, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tween->owner, luaVM )") )
    __debugbreak();
  if ( tween->onCompleteRef != -2 && LUI_ElementHasWeakTableEntry(tween->owner, luaVM) )
  {
    LUI_PutElementOnTopOfStack(tween->owner, luaVM);
    j_lua_getfield(luaVM, -1, "_tweens");
    if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 239, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
      __debugbreak();
    j_luaL_unref(luaVM, -1, tween->onCompleteRef);
    j_lua_settop(luaVM, -3);
    tween->onCompleteRef = -2;
  }
}

/*
==============
LUI_Tween_Create
==============
*/
LUITween *LUI_Tween_Create(lua_State *luaVM, LUIElement *owner)
{
  LUITween *v4; 

  v4 = LUI_Tween_Allocate(luaVM, owner);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 587, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  LUI_Tween_InitializeTweenForElement(luaVM, owner, v4);
  v4->isUsedTempTween = 0;
  LUI_Tween_CreateStrongReference(v4, luaVM);
  LUI_Tween_SetTweenMetatable(luaVM);
  j_lua_settop(luaVM, -2);
  ++s_tweensCreated;
  return v4;
}

/*
==============
LUI_Tween_CreateFromTemporaryTween
==============
*/
LUITween *LUI_Tween_CreateFromTemporaryTween(lua_State *const luaVM, const LUITween *const temporaryTween)
{
  LUIElement *owner; 
  LUITween *v5; 
  __int64 v8; 
  LUITween *previousTween; 
  LUITween *nextTween; 
  LUITween *result; 

  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 626, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !temporaryTween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 627, ASSERT_TYPE_ASSERT, "(temporaryTween)", (const char *)&queryFormat, "temporaryTween") )
    __debugbreak();
  if ( !temporaryTween->isUsedTempTween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 628, ASSERT_TYPE_ASSERT, "(temporaryTween->isUsedTempTween)", (const char *)&queryFormat, "temporaryTween->isUsedTempTween") )
    __debugbreak();
  if ( temporaryTween->strongLuaRef != -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 629, ASSERT_TYPE_ASSERT, "( temporaryTween->strongLuaRef ) == ( (-2) )", "%s == %s\n\t%i, %i", "temporaryTween->strongLuaRef", "LUA_NOREF", temporaryTween->strongLuaRef, -2) )
    __debugbreak();
  owner = temporaryTween->owner;
  v5 = LUI_Tween_Allocate(luaVM, temporaryTween->owner);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 634, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  _RAX = v5;
  _RCX = temporaryTween;
  v8 = 8i64;
  do
  {
    _RAX = (LUITween *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX = (const LUITween *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v8;
  }
  while ( v8 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rax], xmm0
    vmovups xmm1, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rax+10h], xmm1
    vmovups xmm0, xmmword ptr [rcx+20h]
    vmovups xmmword ptr [rax+20h], xmm0
    vmovups xmm1, xmmword ptr [rcx+30h]
    vmovups xmmword ptr [rax+30h], xmm1
    vmovups xmm0, xmmword ptr [rcx+40h]
    vmovups xmmword ptr [rax+40h], xmm0
  }
  v5->isUsedTempTween = v8;
  LUI_Tween_CreateStrongReference(v5, luaVM);
  LUI_Tween_SetTweenMetatable(luaVM);
  previousTween = temporaryTween->previousTween;
  if ( previousTween )
    previousTween->nextTween = v5;
  if ( owner->activeTweens == temporaryTween )
  {
    owner->activeTweens = v5;
  }
  else if ( owner->queuedTweens == temporaryTween )
  {
    owner->queuedTweens = v5;
  }
  nextTween = temporaryTween->nextTween;
  if ( nextTween )
    nextTween->previousTween = v5;
  if ( owner->lastActiveTween == temporaryTween )
  {
    owner->lastActiveTween = v5;
  }
  else if ( owner->lastQueuedTween == temporaryTween )
  {
    owner->lastQueuedTween = v5;
  }
  --s_temporaryTweensUsed;
  result = v5;
  ++s_temporaryTweensUpgraded;
  return result;
}

/*
==============
LUI_Tween_CreateStrongReference
==============
*/
void LUI_Tween_CreateStrongReference(LUITween *tween, lua_State *luaVM)
{
  int v4; 

  if ( !tween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 213, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  if ( tween->isUsedTempTween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 214, ASSERT_TYPE_ASSERT, "(!tween->isUsedTempTween)", (const char *)&queryFormat, "!tween->isUsedTempTween") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 215, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  if ( tween->strongLuaRef != -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 216, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef == (-2))", (const char *)&queryFormat, "tween->strongLuaRef == LUA_NOREF") )
    __debugbreak();
  j_lua_pushvalue(luaVM, -1);
  v4 = LUI_Ref_Monitor_AddRef(luaVM, -10000);
  tween->strongLuaRef = v4;
  if ( v4 == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 219, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-2))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_NOREF") )
    __debugbreak();
  if ( tween->strongLuaRef == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 220, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-1))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_REFNIL") )
    __debugbreak();
}

/*
==============
LUI_Tween_DebugDraw
==============
*/
void LUI_Tween_DebugDraw(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  unsigned int v3; 
  bool v4; 
  const ScreenPlacement *v5; 
  const char *v6; 
  const char *v10; 
  const char *v13; 
  const char *v16; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 

  v2 = localClientNum;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_showDebugTweenCounter, "lui_showDebugTweenCounter") )
  {
    v3 = currentFrame;
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    if ( currentFrame >= 0xA )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2182, ASSERT_TYPE_ASSERT, "(unsigned)( currentFrame ) < (unsigned)( ( sizeof( *array_counter( createdRunningBuf ) ) + 0 ) )", "currentFrame doesn't index createdRunningBuf\n\t%i not in [0, %i)", currentFrame, 10) )
        __debugbreak();
      v3 = currentFrame;
    }
    createdRunningBuf[v3] = s_tweensCreated;
    tempUsedRunningBuf[v3] = s_temporaryTweensUsed;
    tempUpgradedRunningBuf[v3] = s_temporaryTweensUpgraded;
    currentFrame = (v3 + 1) % 0xA;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v5 = &scrPlaceViewDisplay[v2];
        goto LABEL_13;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v4 )
        __debugbreak();
    }
    v5 = &scrPlaceFull;
LABEL_13:
    v6 = j_va("Tweens allocated: %d", (unsigned int)s_allocatedTweens);
    __asm
    {
      vmovss  xmm6, cs:__real@41000000
      vmovss  [rsp+68h+var_30], xmm6
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(v5, *(float *)&_XMM1, *(float *)&_XMM2, v6, &colorWhite, 0, 1, v20, 0);
    v10 = j_va("Tweens created: %d (total), %d (avg over 10 frames)", s_tweensCreated, (s_tweensCreated - createdRunningBuf[currentFrame]) / 0xA);
    __asm
    {
      vmovss  xmm2, cs:__real@41800000; y
      vmovss  [rsp+68h+var_30], xmm6
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(v5, *(float *)&_XMM1, *(float *)&_XMM2, v10, &colorWhite, 0, 1, v21, 0);
    v13 = j_va("Temp tweens used: %d (total), %d (avg over 10 frames)", s_temporaryTweensUsed, (s_temporaryTweensUsed - tempUsedRunningBuf[currentFrame]) / 0xA);
    __asm
    {
      vmovss  xmm2, cs:__real@41c00000; y
      vmovss  [rsp+68h+var_30], xmm6
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(v5, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite, 0, 1, v22, 0);
    v16 = j_va("Temp tweens upgraded: %d (total), %d (avg over 10 frames)", s_temporaryTweensUpgraded, (s_temporaryTweensUpgraded - tempUpgradedRunningBuf[currentFrame]) / 0xA);
    __asm
    {
      vmovss  xmm2, cs:__real@42000000; y
      vmovss  [rsp+68h+var_30], xmm6
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(v5, *(float *)&_XMM1, *(float *)&_XMM2, v16, &colorWhite, 0, 1, v23, 0);
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
  }
}

/*
==============
LUI_Tween_Ease
==============
*/

float __fastcall LUI_Tween_Ease(double t, Easing easing)
{
  __int64 v74; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vmovaps xmm7, xmm0
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm7, xmm6
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 80, ASSERT_TYPE_ASSERT, "(t <= 1.f)", (const char *)&queryFormat, "t <= 1.f") )
    __debugbreak();
  switch ( easing )
  {
    case 0:
      goto $LN10_168;
    case 1:
      __asm { vmulss  xmm0, xmm7, xmm7; jumptable 0000000142628DE3 case 1 }
      break;
    case 2:
      __asm
      {
        vmovss  xmm0, cs:__real@40000000; jumptable 0000000142628DE3 case 2
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm1, xmm7
      }
      break;
    case 3:
      __asm
      {
        vcomiss xmm7, cs:__real@3f000000; jumptable 0000000142628DE3 case 3
        vmulss  xmm1, xmm7, cs:__real@40000000
        vmovss  xmm0, cs:__real@40800000
        vsubss  xmm1, xmm0, xmm1
        vmulss  xmm2, xmm1, xmm7
        vsubss  xmm0, xmm2, xmm6
      }
      break;
    case 4:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 0000000142628DE3 case 4
        vmulss  xmm0, xmm0, xmm7
      }
      break;
    case 5:
      __asm
      {
        vsubss  xmm1, xmm7, xmm6; jumptable 0000000142628DE3 case 5
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm1
        vaddss  xmm0, xmm1, xmm6
      }
      break;
    case 6:
      __asm
      {
        vmovss  xmm1, cs:__real@3f000000; jumptable 0000000142628DE3 case 6
        vcomiss xmm7, xmm1
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm3, xmm0, cs:__real@40000000
        vmulss  xmm1, xmm3, xmm1
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm0, xmm2, xmm3
        vaddss  xmm0, xmm0, xmm6
      }
      break;
    case 7:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 0000000142628DE3 case 7
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm1, xmm7
      }
      break;
    case 8:
      __asm
      {
        vsubss  xmm2, xmm7, xmm6; jumptable 0000000142628DE3 case 8
        vmulss  xmm0, xmm2, xmm2
        vmulss  xmm1, xmm0, xmm2
        vmulss  xmm2, xmm1, xmm2
        vsubss  xmm0, xmm6, xmm2
      }
      break;
    case 9:
      __asm
      {
        vcomiss xmm7, cs:__real@3f000000; jumptable 0000000142628DE3 case 9
        vsubss  xmm3, xmm7, xmm6
        vmulss  xmm0, xmm3, cs:__real@41000000
        vmulss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm3, xmm2, xmm3
        vsubss  xmm0, xmm6, xmm3
      }
      break;
    case 10:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 0000000142628DE3 case 10
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm7
        vmulss  xmm0, xmm2, xmm7
      }
      break;
    case 11:
      __asm
      {
        vsubss  xmm3, xmm7, xmm6; jumptable 0000000142628DE3 case 11
        vmulss  xmm0, xmm3, xmm3
        vmulss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm3, xmm2, xmm3
        vaddss  xmm0, xmm3, xmm6
      }
      break;
    case 12:
      __asm
      {
        vmovss  xmm1, cs:__real@3f000000; jumptable 0000000142628DE3 case 12
        vcomiss xmm7, xmm1
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm4, xmm0, cs:__real@40000000
        vmulss  xmm1, xmm4, xmm1
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm0, xmm2, xmm4
        vmulss  xmm3, xmm0, xmm4
        vmulss  xmm1, xmm3, xmm4
        vaddss  xmm0, xmm1, xmm6
      }
      break;
    case 13:
      __asm { vmulss  xmm0, xmm7, cs:__real@3fc90fdb; jumptable 0000000142628DE3 case 13 }
      cosf_0(*(float *)&_XMM0);
      __asm { vsubss  xmm0, xmm6, xmm0 }
      break;
    case 14:
      __asm { vmulss  xmm0, xmm7, cs:__real@3fc90fdb; jumptable 0000000142628DE3 case 14 }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      break;
    case 15:
      __asm { vmulss  xmm0, xmm7, cs:__real@40490fdb; jumptable 0000000142628DE3 case 15 }
      cosf_0(*(float *)&_XMM0);
      __asm
      {
        vsubss  xmm0, xmm6, xmm0
        vmulss  xmm0, xmm0, cs:__real@3f000000
      }
      break;
    case 16:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 0000000142628DE3 case 16
        vmulss  xmm6, xmm0, xmm7
        vmulss  xmm0, xmm7, cs:__real@40490fdb; X
      }
      goto LABEL_21;
    case 17:
      __asm
      {
        vsubss  xmm7, xmm7, xmm6; jumptable 0000000142628DE3 case 17
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm7, cs:__real@c0490fdb
        vaddss  xmm6, xmm1, xmm6
      }
      goto LABEL_21;
    case 18:
      __asm
      {
        vmovss  xmm1, cs:__real@40000000; jumptable 0000000142628DE3 case 18
        vmulss  xmm8, xmm7, xmm1
        vcomiss xmm8, xmm6
        vsubss  xmm7, xmm1, xmm8
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm1, xmm0, xmm7
        vsubss  xmm1, xmm6, xmm1
        vaddss  xmm0, xmm1, xmm6
        vmulss  xmm6, xmm0, cs:__real@3f000000
        vmulss  xmm0, xmm7, cs:__real@c0490fdb
      }
LABEL_21:
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm7, cs:__real@3eb33333
        vmulss  xmm0, xmm0, xmm1
        vsubss  xmm0, xmm6, xmm0
      }
      break;
    case 19:
      __asm
      {
        vcmpeqss xmm0, xmm7, xmm6; jumptable 0000000142628DE3 case 19
        vblendvps xmm0, xmm8, xmm6, xmm0
      }
      break;
    default:
      LODWORD(v74) = easing;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected easing mode: %d", v74) )
        __debugbreak();
$LN10_168:
      __asm { vmovaps xmm0, xmm7; jumptable 0000000142628DE3 case 0 }
      break;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_Tween_Free
==============
*/
void LUI_Tween_Free(LUITween *tween, lua_State *luaVM)
{
  unsigned __int64 v2; 
  __int64 v5; 
  LUISharedTextRefIndex glitchScanlinePitch; 
  LUISharedTextRefIndex v7; 
  int strongLuaRef; 
  int v9; 
  unsigned __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 

  v2 = (unsigned __int8)tween->targetProperty[0];
  if ( (unsigned __int8)v2 <= 0x37u )
  {
    v5 = 0x80001000040000i64;
    if ( _bittest64(&v5, v2) )
    {
      glitchScanlinePitch = tween->startValue.glitchScanlinePitch;
      if ( (_WORD)glitchScanlinePitch != INVALID_INDEX )
      {
        LUI_SharedTextRef_RemoveRef(luaVM, glitchScanlinePitch);
        tween->startValue.shortValue = -1;
      }
      v7 = tween->endValue.glitchScanlinePitch;
      if ( (_WORD)v7 != INVALID_INDEX )
      {
        LUI_SharedTextRef_RemoveRef(luaVM, v7);
        tween->endValue.shortValue = -1;
      }
    }
  }
  strongLuaRef = tween->strongLuaRef;
  if ( tween->isUsedTempTween )
  {
    if ( strongLuaRef != -2 )
    {
      v13 = -2;
      v11 = tween->strongLuaRef;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 304, ASSERT_TYPE_ASSERT, "( tween->strongLuaRef ) == ( (-2) )", "%s == %s\n\t%i, %i", "tween->strongLuaRef", "LUA_NOREF", v11, v13) )
        __debugbreak();
    }
    tween->isUsedTempTween = 0;
  }
  else
  {
    if ( strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 309, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-2))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_NOREF") )
      __debugbreak();
    if ( tween->strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 226, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-2))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_NOREF") )
      __debugbreak();
    v9 = tween->strongLuaRef;
    if ( v9 == s_LUITweenMetaTableRef )
    {
      v14 = s_LUITweenMetaTableRef;
      v12 = tween->strongLuaRef;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2161, ASSERT_TYPE_ASSERT, "( ref ) != ( s_LUITweenMetaTableRef )", "%s != %s\n\t%i, %i", "ref", "s_LUITweenMetaTableRef", v12, v14) )
        __debugbreak();
    }
    if ( v9 != -1 )
    {
      j_lua_rawgeti(luaVM, -10000, v9);
      if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 86, ASSERT_TYPE_ASSERT, "(isFunction( luaVM, -1 ))", (const char *)&queryFormat, "isFunction( luaVM, -1 )") )
        __debugbreak();
      j_lua_settop(luaVM, -2);
    }
    LUI_Ref_Monitor_RemoveRef(luaVM, -10000, tween->strongLuaRef);
    tween->strongLuaRef = -2;
    v10 = ((char *)tween - (char *)&s_LUITweenPool) / 1104;
    if ( v10 > 0x4AF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 314, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Error freeing LUI tween.") )
        __debugbreak();
    }
    else
    {
      if ( s_LUITweenPool.m_poolData[v10] <= 0x4B0u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 247, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
        __debugbreak();
      s_LUITweenPool.m_poolData[v10] = s_LUITweenPool.m_firstFree;
      s_LUITweenPool.m_firstFree = ((char *)tween - (char *)&s_LUITweenPool) / 1104;
      memset_0(tween, 0, sizeof(LUITween));
    }
    --s_allocatedTweens;
  }
}

/*
==============
LUI_Tween_GetNumTweensInUse
==============
*/
__int64 LUI_Tween_GetNumTweensInUse()
{
  return (unsigned int)s_allocatedTweens;
}

/*
==============
LUI_Tween_GetNumTweensTotal
==============
*/
__int64 LUI_Tween_GetNumTweensTotal()
{
  return 1200i64;
}

/*
==============
LUI_Tween_Initialize
==============
*/
void LUI_Tween_Initialize(lua_State *luaVM)
{
  unsigned __int16 *m_poolData; 
  unsigned __int16 i; 

  memset_0(&s_LUITweenPool, 0, 0x143700ui64);
  m_poolData = s_LUITweenPool.m_poolData;
  for ( i = 0; i < 0x4B0u; *m_poolData++ = ++i )
    ;
  *(_DWORD *)&s_LUITweenPool.m_firstFree = 78708736;
  s_allocatedTweens = 0;
  s_LUITweenPool.m_lastAllocated = 1201;
  j_lua_createtable(luaVM, 0, 1);
  j_lua_pushcclosure(luaVM, LUI_Tween_MetatableNewIndex, 0);
  j_lua_setfield(luaVM, -2, "__newindex");
  s_LUITweenMetaTableRef = LUI_Ref_Monitor_AddRef(luaVM, -10000);
  s_LUITweenLateness = 0;
  s_numPendingCallbacks = 0;
}

/*
==============
LUI_Tween_InitializeTemporaryTween
==============
*/
void LUI_Tween_InitializeTemporaryTween(lua_State *const luaVM, LUIElement *const owner, LUITween *const temporaryTween)
{
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 609, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 610, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !temporaryTween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 611, ASSERT_TYPE_ASSERT, "(temporaryTween)", (const char *)&queryFormat, "temporaryTween") )
    __debugbreak();
  LUI_Tween_InitializeTweenForElement(luaVM, owner, temporaryTween);
  ++s_temporaryTweensUsed;
  temporaryTween->isUsedTempTween = 1;
}

/*
==============
LUI_Tween_InitializeTweenForElement
==============
*/
void LUI_Tween_InitializeTweenForElement(lua_State *const luaVM, LUIElement *const owner, LUITween *const tween)
{
  LUIElement *parent; 
  LUIElement *i; 
  const char *ID; 
  LUIElement *v9; 
  const char *v10; 
  const char *v11; 
  int v12; 
  char dest[1024]; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 446, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !LUI_ElementHasWeakTableEntry(owner, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 447, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( owner, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( owner, luaVM )") )
    __debugbreak();
  if ( !tween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 448, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  if ( (owner->currentAnimationState.flags & 1) != 0 && Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_tween_parent_root_check, "lui_tween_parent_root_check") )
  {
    parent = owner->parent;
    for ( i = owner; parent; parent = parent->parent )
      i = parent;
    if ( !LUI_CoD_IsElementLUIRoot(i, luaVM) )
    {
      ID = LUIElement_GetID(owner, luaVM);
      Com_PrintWarning(13, "LUI_Tween_Create: Creating a tween on a LUI element that isn't part of the UI root! [%s]\n", ID);
    }
  }
  memset_0(dest, 0, sizeof(dest));
  v9 = owner;
  do
  {
    v10 = LUIElement_GetID(v9, luaVM);
    if ( v10 )
    {
      I_strcat(dest, 0x400ui64, v10);
      v11 = " | ";
    }
    else
    {
      v11 = "null | ";
    }
    I_strcat(dest, 0x400ui64, v11);
    v9 = v9->parent;
  }
  while ( v9 );
  Core_strcpy(tween->ownerIdCached, 0x400ui64, dest);
  tween->owner = owner;
  tween->nextTween = NULL;
  tween->previousTween = NULL;
  tween->timeElapsed = 0;
  tween->easing = LINEAR;
  tween->strongLuaRef = -2;
  tween->onCompleteRef = -2;
  LUI_PutElementOnTopOfStack(owner, luaVM);
  j_lua_getfield(luaVM, -1, "_tweens");
  v12 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( v12 != 5 )
  {
    j_lua_createtable(luaVM, 0, 0);
    j_lua_setfield(luaVM, -2, "_tweens");
  }
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_Tween_InterruptActiveElementTween
==============
*/
void LUI_Tween_InterruptActiveElementTween(LUIElement *element, LUITweenProperty tweenProperty, lua_State *luaVM)
{
  LUITween *activeTweens; 

  activeTweens = element->activeTweens;
  if ( activeTweens )
  {
    while ( activeTweens->targetProperty[0] != (_BYTE)tweenProperty )
    {
      activeTweens = activeTweens->nextTween;
      if ( !activeTweens )
        return;
    }
    if ( (!LUI_ElementHasWeakTableEntry(activeTweens->owner, luaVM) || !LUI_ElementHasWeakTableEntry(element, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 866, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_Tween_UnlinkElementTween(activeTweens);
    LUI_Tween_ClearOnComplete(activeTweens, luaVM);
    LUI_Tween_Free(activeTweens, luaVM);
  }
}

/*
==============
LUI_Tween_InterruptElementTween
==============
*/
void LUI_Tween_InterruptElementTween(LUIElement *element, LUITweenProperty tweenProperty, lua_State *luaVM)
{
  LUITween *activeTweens; 
  char v5; 
  LUITween *queuedTweens; 

  activeTweens = element->activeTweens;
  v5 = tweenProperty;
  if ( activeTweens )
  {
    while ( activeTweens->targetProperty[0] != (_BYTE)tweenProperty )
    {
      activeTweens = activeTweens->nextTween;
      if ( !activeTweens )
        goto LABEL_10;
    }
    if ( (!LUI_ElementHasWeakTableEntry(activeTweens->owner, luaVM) || !LUI_ElementHasWeakTableEntry(element, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 866, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_Tween_UnlinkElementTween(activeTweens);
    LUI_Tween_ClearOnComplete(activeTweens, luaVM);
    LUI_Tween_Free(activeTweens, luaVM);
  }
LABEL_10:
  queuedTweens = element->queuedTweens;
  if ( queuedTweens )
  {
    while ( queuedTweens->targetProperty[0] != v5 )
    {
      queuedTweens = queuedTweens->nextTween;
      if ( !queuedTweens )
        return;
    }
    if ( (!LUI_ElementHasWeakTableEntry(queuedTweens->owner, luaVM) || !LUI_ElementHasWeakTableEntry(element, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 849, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_Tween_UnlinkElementTween(queuedTweens);
    LUI_Tween_ClearOnComplete(queuedTweens, luaVM);
    LUI_Tween_Free(queuedTweens, luaVM);
  }
}

/*
==============
LUI_Tween_InterruptQueuedElementTweens
==============
*/
void LUI_Tween_InterruptQueuedElementTweens(LUIElement *element, LUITweenProperty tweenProperty, LUITween *firstTweenOfNewSequence, lua_State *luaVM)
{
  char v6; 
  LUITween *queuedTweens; 
  LUITween *v9; 

  v6 = tweenProperty;
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 877, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 878, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  queuedTweens = element->queuedTweens;
  while ( queuedTweens )
  {
    if ( queuedTweens == firstTweenOfNewSequence )
      break;
    if ( queuedTweens->targetProperty[0] == v6 )
    {
      if ( (!LUI_ElementHasWeakTableEntry(queuedTweens->owner, luaVM) || !LUI_ElementHasWeakTableEntry(element, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 886, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tweenIter->owner, luaVM ) && LUI_ElementHasWeakTableEntry( element, luaVM )") )
        __debugbreak();
      v9 = queuedTweens;
      queuedTweens = queuedTweens->nextTween;
      LUI_Tween_UnlinkElementTween(v9);
      LUI_Tween_ClearOnComplete(v9, luaVM);
      LUI_Tween_Free(v9, luaVM);
    }
    else
    {
      queuedTweens = queuedTweens->nextTween;
    }
  }
}

/*
==============
LUI_Tween_InvalidateCache
==============
*/
void LUI_Tween_InvalidateCache(LUIElement *element)
{
  LUIElement *parent; 

  parent = element->parent;
  for ( element->tweensCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->tweensCached )
      break;
    parent->tweensCached = 0;
  }
}

/*
==============
LUI_Tween_MetatableNewIndex
==============
*/
__int64 LUI_Tween_MetatableNewIndex(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_Tween_MetatableNewIndex_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_Tween_MetatableNewIndex_impl
==============
*/
__int64 LUI_Tween_MetatableNewIndex_impl(lua_State *const luaVM)
{
  _WORD *v2; 
  _WORD *v3; 
  LUITween *v4; 
  unsigned __int16 v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: tween.key = value");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = j_lua_touserdata(luaVM, 1);
    v3 = v2;
    if ( v2 )
    {
      v5 = *v2;
      if ( v5 < 0x4B0u )
      {
        v6 = v5;
        if ( v3[1] != s_LUITweenPool.m_poolData[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 274, ASSERT_TYPE_ASSERT, "(userData->iteration == m_poolData[poolIndex])", "%s\n\tAttempted to access data that has already been destroyed!", "userData->iteration == m_poolData[poolIndex]") )
          __debugbreak();
        if ( v3[1] == s_LUITweenPool.m_poolData[v6] )
          v4 = &s_LUITweenPool.m_pool[v6];
        else
          v4 = NULL;
      }
      else
      {
        v4 = NULL;
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 257, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
        __debugbreak();
      v4 = NULL;
    }
    v7 = "onComplete";
    v8 = j_lua_tolstring(luaVM, 2, NULL);
    v9 = 0x7FFFFFFFi64;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v10 = v7[v8 - "onComplete"];
      v11 = v9;
      v12 = *v7++;
      --v9;
      if ( !v11 )
        break;
      if ( v10 != v12 )
      {
        LUI_Interface_ErrorPrint("Unexpected '%s' key for writing into LUITween\n", v8);
        return 0i64;
      }
    }
    while ( v10 );
    if ( !v4 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "tween != NULL");
    if ( LUI_ElementHasWeakTableEntry(v4->owner, luaVM) )
    {
      if ( j_lua_type(luaVM, 3) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 407, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (onCompleteIndex)) == 6))", (const char *)&queryFormat, "lua_isfunction( luaVM, onCompleteIndex )") )
        __debugbreak();
      LUI_Tween_ClearOnComplete(v4, luaVM);
      if ( v4->onCompleteRef != -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 410, ASSERT_TYPE_ASSERT, "(tween->onCompleteRef == (-2))", (const char *)&queryFormat, "tween->onCompleteRef == LUA_NOREF") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(v4->owner, luaVM);
      j_lua_getfield(luaVM, -1, "_tweens");
      if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 414, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
        __debugbreak();
      j_lua_pushvalue(luaVM, 3);
      v4->onCompleteRef = j_luaL_ref(luaVM, -2);
      j_lua_settop(luaVM, -3);
      if ( v4->onCompleteRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 420, ASSERT_TYPE_ASSERT, "(tween->onCompleteRef != (-2))", (const char *)&queryFormat, "tween->onCompleteRef != LUA_NOREF") )
        __debugbreak();
      if ( v4->onCompleteRef == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 421, ASSERT_TYPE_ASSERT, "(tween->onCompleteRef != (-1))", (const char *)&queryFormat, "tween->onCompleteRef != LUA_REFNIL") )
        __debugbreak();
    }
  }
  return 0i64;
}

/*
==============
LUI_Tween_PushOnLuaStack
==============
*/
void LUI_Tween_PushOnLuaStack(LUITween *tween, lua_State *luaVM)
{
  int v4; 
  __int64 v5; 
  int duration; 
  int strongLuaRef; 

  if ( tween->strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 429, ASSERT_TYPE_ASSERT, "(tween->strongLuaRef != (-2))", (const char *)&queryFormat, "tween->strongLuaRef != LUA_NOREF") )
    __debugbreak();
  j_lua_rawgeti(luaVM, -10000, tween->strongLuaRef);
  if ( !j_lua_isuserdata(luaVM, -1) )
  {
    v4 = j_lua_gettop(luaVM);
    strongLuaRef = tween->strongLuaRef;
    duration = tween->duration;
    LODWORD(v5) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 436, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tween data in Lui register index table is not user data. luaVM size is: %d, tween duration is: %d, tween strong ref is: %d, tween owner ID cache is: %s", v5, duration, strongLuaRef, tween->ownerIdCached) )
      __debugbreak();
  }
}

/*
==============
LUI_Tween_QueueElementTween
==============
*/
void LUI_Tween_QueueElementTween(LUIElement *element, LUITween *tweenToAdd, lua_State *luaVM)
{
  LUITween *lastQueuedTween; 
  bool v4; 

  lastQueuedTween = element->lastQueuedTween;
  tweenToAdd->previousTween = lastQueuedTween;
  tweenToAdd->nextTween = NULL;
  if ( lastQueuedTween )
    lastQueuedTween->nextTween = tweenToAdd;
  v4 = element->queuedTweens == NULL;
  element->lastQueuedTween = tweenToAdd;
  if ( v4 )
    element->queuedTweens = tweenToAdd;
}

/*
==============
LUI_Tween_RunCallback
==============
*/
void LUI_Tween_RunCallback(LUITween *tween, lua_State *luaVM)
{
  LUIElement *owner; 
  const char *ID; 
  int v6; 
  lua_State *v7; 
  int v8; 
  int v9; 

  if ( !LUI_ElementHasWeakTableEntry(tween->owner, luaVM) )
    LUI_Interface_ErrorPrint("Path of Lui element that has been removed the weak reference is: %s", tween->ownerIdCached);
  if ( tween->onCompleteRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 916, ASSERT_TYPE_ASSERT, "(LUI_Tween_HasCallback( tween ))", (const char *)&queryFormat, "LUI_Tween_HasCallback( tween )") )
    __debugbreak();
  if ( !LUI_ElementHasWeakTableEntry(tween->owner, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 917, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( tween->owner, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( tween->owner, luaVM )") )
    __debugbreak();
  if ( s_LUITweenLateness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 918, ASSERT_TYPE_ASSERT, "(s_LUITweenLateness == 0)", (const char *)&queryFormat, "s_LUITweenLateness == 0") )
    __debugbreak();
  owner = tween->owner;
  if ( tween->owner->strongLuaReference == -2 )
  {
    LUI_CoD_PrintCallstack();
    ID = LUIElement_GetID(tween->owner, LUI_luaVM);
    LUI_Interface_ErrorPrint("ID of Lui element that has been removed the strong reference is: %s", ID);
    owner = tween->owner;
  }
  if ( (owner->usageFlags & 0x800) == 0 )
  {
    s_LUITweenLateness = tween->timeElapsed - tween->duration;
    if ( s_LUITweenLateness < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 929, ASSERT_TYPE_ASSERT, "(s_LUITweenLateness >= 0)", (const char *)&queryFormat, "s_LUITweenLateness >= 0") )
      __debugbreak();
  }
  if ( tween->onCompleteRef != -2 && LUI_ElementHasWeakTableEntry(tween->owner, luaVM) )
  {
    LUI_PutElementOnTopOfStack(tween->owner, luaVM);
    j_lua_getfield(luaVM, -1, "_tweens");
    if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 936, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", "%s\n\tTween data callback function is nil or empty table. Tween owner ID cache is: %s. Tween duration is: %d,  Tween elapsed time is: %d", "lua_istable( luaVM, -1 )", tween->ownerIdCached, tween->duration, tween->timeElapsed) )
      __debugbreak();
    if ( j_lua_type(luaVM, -1) && j_lua_type(luaVM, -1) == 5 )
    {
      j_lua_rawgeti(luaVM, -1, tween->onCompleteRef);
      v6 = j_lua_type(luaVM, -1);
      v7 = luaVM;
      if ( v6 )
      {
        j_lua_remove(luaVM, -2);
        j_lua_remove(luaVM, -2);
        LUI_PutElementOnTopOfStack(tween->owner, luaVM);
        v8 = LuaShared_PCall(luaVM, 1, 0);
        if ( v8 )
        {
          LUI_ReportError("Error while running tween onComplete callback.\n", LUI_luaVM);
          LUI_HandleLuaError(v8);
        }
        goto LABEL_31;
      }
      v9 = -4;
    }
    else
    {
      tween->onCompleteRef = -2;
      v9 = -3;
      v7 = luaVM;
    }
    j_lua_settop(v7, v9);
  }
LABEL_31:
  s_LUITweenLateness = 0;
}

/*
==============
LUI_Tween_RunCallbacks
==============
*/
void LUI_Tween_RunCallbacks(lua_State *luaVM)
{
  const char *v2; 
  int v3; 
  int v4; 
  LUIElement ***v5; 
  LUITween *v6; 
  int v7; 
  int v8; 

  v2 = j_va("LUI_Tween_RunCallbacks:%i", (unsigned int)s_numPendingCallbacks);
  Sys_ProfBeginNamedEvent(0xFF808080, v2);
  v3 = s_numPendingCallbacks;
  if ( s_numPendingCallbacks < 0 || (unsigned __int64)s_numPendingCallbacks > 0x4B0 )
  {
    v8 = 1200;
    v7 = s_numPendingCallbacks;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 976, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_numPendingCallbacks ) && ( s_numPendingCallbacks ) <= ( ( sizeof( *array_counter( s_pendingCallbacks ) ) + 0 ) )", "s_numPendingCallbacks not in [0, ARRAY_COUNT( s_pendingCallbacks )]\n\t%i not in [%i, %i]", v7, 0i64, v8) )
      __debugbreak();
    v3 = s_numPendingCallbacks;
  }
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = (LUIElement ***)s_pendingCallbacks;
    do
    {
      v6 = (LUITween *)*v5;
      if ( LUI_ElementHasWeakTableEntry(**v5, luaVM) )
      {
        LUI_Tween_RunCallback(v6, luaVM);
        LUI_Tween_ClearOnComplete(v6, luaVM);
      }
      else
      {
        LUI_Interface_ErrorPrint("Path of Lui element that has been removed the weak reference is: %s", v6->ownerIdCached);
      }
      LUI_Tween_Free(v6, luaVM);
      ++v4;
      ++v5;
    }
    while ( v4 < s_numPendingCallbacks );
  }
  s_numPendingCallbacks = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_Tween_SetEndValueInTween
==============
*/
void LUI_Tween_SetEndValueInTween(LUITween *tween, lua_State *luaVM)
{
  int v22; 
  int v23; 
  __int64 v26; 

  _RDI = tween;
  if ( !tween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1897, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1898, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  switch ( _RDI->targetProperty[0] )
  {
    case 0:
      return;
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1D:
    case 0x1E:
    case 0x20:
    case 0x21:
    case 0x2E:
    case 0x33:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1936, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm { vmovss  dword ptr [rdi+28h], xmm0 }
      return;
    case 2:
    case 0x1C:
    case 0x1F:
      if ( !j_lua_isnumber(luaVM, -1) && j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1963, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ) || (lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 ) || lua_istable( luaVM, -1 )") )
        __debugbreak();
      if ( j_lua_type(luaVM, -1) == 5 )
      {
        j_lua_getfield(luaVM, -1, "r");
        if ( j_lua_isnumber(luaVM, -1) )
        {
          *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
          __asm { vmovss  dword ptr [rdi+28h], xmm0 }
        }
        j_lua_settop(luaVM, -2);
        j_lua_getfield(luaVM, -1, "g");
        if ( j_lua_isnumber(luaVM, -1) )
        {
          *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
          __asm { vmovss  dword ptr [rdi+2Ch], xmm0 }
        }
        j_lua_settop(luaVM, -2);
        j_lua_getfield(luaVM, -1, "b");
        if ( j_lua_isnumber(luaVM, -1) )
        {
          *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
          __asm { vmovss  dword ptr [rdi+30h], xmm0 }
        }
        j_lua_settop(luaVM, -2);
      }
      else
      {
        lui_tointeger32(luaVM, -1);
        __asm
        {
          vmovss  xmm2, cs:__real@3b808081
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm0, xmm0, xmm2
          vmovss  dword ptr [rdi+28h], xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm1, xmm0, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rdi+2Ch], xmm1
          vmulss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rdi+30h], xmm1
        }
      }
      return;
    case 0x10:
      if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2035, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
        __debugbreak();
      _RDI->endValue.image = (const GfxImage *)j_lua_touserdata(luaVM, -1);
      return;
    case 0x11:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2071, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      _RDI->endValue.byteValue = lui_tointeger32(luaVM, -1);
      return;
    case 0x12:
    case 0x24:
    case 0x37:
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2052, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      j_lua_pushvalue(luaVM, -1);
      _RDI->endValue.shortValue = LUI_SharedTextRef_CreateRef(luaVM);
      return;
    case 0x22:
    case 0x23:
    case 0x2D:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v22 = 2043;
      break;
    case 0x25:
      if ( j_lua_type(luaVM, -1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2059, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, -1 )") )
        __debugbreak();
      _RDI->endValue.intValue = j_lua_toboolean(luaVM, -1);
      return;
    case 0x26:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2065, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      _RDI->endValue.intValue = lua_tointeger32(luaVM, -1);
      return;
    case 0x27:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v22 = 1999;
      break;
    case 0x28:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v22 = 2005;
      break;
    case 0x29:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v22 = 2011;
      break;
    case 0x2A:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v22 = 2017;
      break;
    case 0x2B:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v22 = 2023;
      break;
    case 0x2C:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2029, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+28h], xmm0 }
      return;
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1945, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@41233333
        vcvttss2si eax, xmm1
      }
      _RDI->endValue.byteValue = _EAX;
      return;
    case 0x34:
    case 0x35:
    case 0x36:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1954, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@46fffe00
        vcvttss2si eax, xmm1
      }
      _RDI->endValue.shortValue = _EAX;
      return;
    default:
      LODWORD(v26) = (char)_RDI->targetProperty[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2077, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected tween property: %d", v26) )
        __debugbreak();
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", v22, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
LABEL_37:
  v23 = lui_tointeger32(luaVM, -1);
  _RDI->endValue.byteValue = truncate_cast<unsigned char,int>(v23);
}

/*
==============
LUI_Tween_SetNonZeroDefaultStartValueInTween
==============
*/
void LUI_Tween_SetNonZeroDefaultStartValueInTween(LUITween *tween)
{
  unsigned __int64 v2; 
  __int64 v3; 

  if ( !tween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2087, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  v2 = (unsigned __int8)tween->targetProperty[0];
  if ( (unsigned __int8)v2 <= 0x37u )
  {
    v3 = 0x80001000040000i64;
    if ( _bittest64(&v3, v2) )
      tween->startValue.shortValue = -1;
  }
}

/*
==============
LUI_Tween_SetOnComplete
==============
*/
void LUI_Tween_SetOnComplete(LUITween *tween, int onCompleteIndex, lua_State *luaVM)
{
  if ( !tween )
    j_luaL_error(luaVM, (const char *)&queryFormat, "tween != NULL");
  if ( LUI_ElementHasWeakTableEntry(tween->owner, luaVM) )
  {
    if ( j_lua_type(luaVM, onCompleteIndex) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 407, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (onCompleteIndex)) == 6))", (const char *)&queryFormat, "lua_isfunction( luaVM, onCompleteIndex )") )
      __debugbreak();
    LUI_Tween_ClearOnComplete(tween, luaVM);
    if ( tween->onCompleteRef != -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 410, ASSERT_TYPE_ASSERT, "(tween->onCompleteRef == (-2))", (const char *)&queryFormat, "tween->onCompleteRef == LUA_NOREF") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(tween->owner, luaVM);
    j_lua_getfield(luaVM, -1, "_tweens");
    if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 414, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
      __debugbreak();
    j_lua_pushvalue(luaVM, onCompleteIndex);
    tween->onCompleteRef = j_luaL_ref(luaVM, -2);
    j_lua_settop(luaVM, -3);
    if ( tween->onCompleteRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 420, ASSERT_TYPE_ASSERT, "(tween->onCompleteRef != (-2))", (const char *)&queryFormat, "tween->onCompleteRef != LUA_NOREF") )
      __debugbreak();
    if ( tween->onCompleteRef == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 421, ASSERT_TYPE_ASSERT, "(tween->onCompleteRef != (-1))", (const char *)&queryFormat, "tween->onCompleteRef != LUA_REFNIL") )
      __debugbreak();
  }
}

/*
==============
LUI_Tween_SetStartValueInTween
==============
*/
void LUI_Tween_SetStartValueInTween(LUIElement *element, LUITween *tween, lua_State *luaVM)
{
  LUIStyledText *CustomElement; 
  LUIStyledText *v7; 
  __int64 v8; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1631, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !tween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1632, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1633, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  switch ( tween->targetProperty[0] )
  {
    case 0:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x2D:
    case 0x37:
      return;
    case 1:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.alpha);
      break;
    case 2:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.red);
      tween->startValue.colorValue.g = element->currentAnimationState.green;
      tween->startValue.colorValue.b = element->currentAnimationState.blue;
      break;
    case 3:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.scale);
      break;
    case 4:
      tween->startValue.intValue = LODWORD(element->xRot);
      break;
    case 5:
      tween->startValue.intValue = LODWORD(element->yRot);
      break;
    case 6:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.zRot);
      break;
    case 7:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.x.anchors[0]);
      break;
    case 8:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.x.anchors[1]);
      break;
    case 9:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.y.anchors[0]);
      break;
    case 0xA:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.y.anchors[1]);
      break;
    case 0xB:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.x.offsets[0]);
      break;
    case 0xC:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.x.offsets[1]);
      break;
    case 0xD:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.y.offsets[0]);
      break;
    case 0xE:
      tween->startValue.intValue = LODWORD(element->currentAnimationState.position.y.offsets[1]);
      break;
    case 0xF:
      tween->startValue.intValue = LODWORD(element->depth);
      break;
    case 0x13:
      tween->startValue.intValue = LODWORD(element->imageData.uMin);
      break;
    case 0x14:
      tween->startValue.intValue = LODWORD(element->imageData.uMax);
      break;
    case 0x15:
    case 0x20:
      tween->startValue.intValue = LODWORD(element->imageData.vMin);
      break;
    case 0x16:
    case 0x21:
      tween->startValue.intValue = LODWORD(element->imageData.vMax);
      break;
    case 0x17:
    case 0x33:
      tween->startValue.intValue = element->currentAnimationState.userDataInt;
      break;
    case 0x18:
      tween->startValue.intValue = LODWORD(LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowMinDistance);
      break;
    case 0x19:
      tween->startValue.intValue = LODWORD(LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowMaxDistance);
      break;
    case 0x1A:
      tween->startValue.intValue = LODWORD(LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowUVOffset.v[0]);
      break;
    case 0x1B:
      tween->startValue.intValue = LODWORD(LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowUVOffset.v[1]);
      break;
    case 0x1C:
      CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM);
      tween->startValue.intValue = LODWORD(CustomElement->glowStyle.glowColor.v[0]);
      tween->startValue.colorValue.g = CustomElement->glowStyle.glowColor.v[1];
      tween->startValue.colorValue.b = CustomElement->glowStyle.glowColor.v[2];
      break;
    case 0x1D:
      tween->startValue.intValue = LODWORD(LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.outlineGlowMinDistance);
      break;
    case 0x1E:
      tween->startValue.intValue = LODWORD(LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.outlineGlowMaxDistance);
      break;
    case 0x1F:
      v7 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM);
      tween->startValue.intValue = LODWORD(v7->glowStyle.outlineGlowColor.v[0]);
      tween->startValue.colorValue.g = v7->glowStyle.outlineGlowColor.v[1];
      tween->startValue.colorValue.b = v7->glowStyle.outlineGlowColor.v[2];
      break;
    case 0x27:
      tween->startValue.byteValue = element->pixelGrid.blockWidth;
      break;
    case 0x28:
      tween->startValue.byteValue = element->pixelGrid.blockHeight;
      break;
    case 0x29:
      tween->startValue.byteValue = element->pixelGrid.gutterWidth;
      break;
    case 0x2A:
      tween->startValue.byteValue = element->pixelGrid.gutterHeight;
      break;
    case 0x2B:
      tween->startValue.byteValue = element->pixelGrid.contrast;
      break;
    case 0x2C:
      tween->startValue.intValue = LODWORD(element->glitchAmount);
      break;
    case 0x2E:
      tween->startValue.intValue = LODWORD(element->colorOp.param);
      break;
    case 0x2F:
      tween->startValue.byteValue = element->currentAnimationState.userDataBytes[0];
      break;
    case 0x30:
      tween->startValue.byteValue = element->currentAnimationState.userDataBytes[1];
      break;
    case 0x31:
      tween->startValue.byteValue = element->currentAnimationState.userDataBytes[2];
      break;
    case 0x32:
      tween->startValue.byteValue = element->currentAnimationState.userDataBytes[3];
      break;
    case 0x34:
    case 0x35:
      tween->startValue.shortValue = element->currentAnimationState.userDataShorts[0];
      break;
    case 0x36:
      tween->startValue.shortValue = element->currentAnimationState.userDataShorts[1];
      break;
    default:
      LODWORD(v8) = (char)tween->targetProperty[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1888, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected tween property: %d", v8) )
        __debugbreak();
      break;
  }
}

/*
==============
LUI_Tween_SetTweenMetatable
==============
*/
void LUI_Tween_SetTweenMetatable(lua_State *luaVM)
{
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 546, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  j_lua_rawgeti(luaVM, -10000, s_LUITweenMetaTableRef);
  if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 550, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, -2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 551, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -2 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -2 )") )
    __debugbreak();
  j_lua_setmetatable(luaVM, -2);
}

/*
==============
LUI_Tween_UnlinkElementTween
==============
*/
void LUI_Tween_UnlinkElementTween(LUITween *tween)
{
  LUITween *previousTween; 
  LUIElement *owner; 
  LUITween *nextTween; 

  if ( !tween->owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 250, ASSERT_TYPE_ASSERT, "(tween->owner)", (const char *)&queryFormat, "tween->owner") )
    __debugbreak();
  previousTween = tween->previousTween;
  owner = tween->owner;
  if ( previousTween )
  {
    previousTween->nextTween = tween->nextTween;
  }
  else if ( owner->activeTweens == tween )
  {
    owner->activeTweens = tween->nextTween;
  }
  else if ( owner->queuedTweens == tween )
  {
    owner->queuedTweens = tween->nextTween;
  }
  nextTween = tween->nextTween;
  if ( nextTween )
    nextTween->previousTween = tween->previousTween;
  if ( owner->lastActiveTween == tween )
  {
    owner->lastActiveTween = tween->previousTween;
  }
  else if ( owner->lastQueuedTween == tween )
  {
    owner->lastQueuedTween = tween->previousTween;
  }
}

/*
==============
LUI_Tween_Verify_Tween_Metatable_Unref
==============
*/
void LUI_Tween_Verify_Tween_Metatable_Unref(const int index, const int ref)
{
  if ( index == -10000 && ref == s_LUITweenMetaTableRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2161, ASSERT_TYPE_ASSERT, "( ref ) != ( s_LUITweenMetaTableRef )", "%s != %s\n\t%i, %i", "ref", "s_LUITweenMetaTableRef", ref, s_LUITweenMetaTableRef) )
    __debugbreak();
}

