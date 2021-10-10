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
void LUIElement_UpdateTextTweenLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int128 v5; 
  unsigned int *customElementData; 
  signed int v10; 
  unsigned int v11; 
  unsigned int v12; 
  double v13; 
  double v14; 
  __int64 v15; 
  const char *v16; 
  __int64 v17; 
  char *v18; 
  ConversionArguments arguments; 
  char dest[16]; 
  char outputString[24]; 
  __int128 v22; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (unsigned int *)element->customElementData;
  v10 = customElementData[3];
  v11 = *customElementData;
  if ( v10 >= (int)*customElementData )
  {
    v15 = customElementData[2];
  }
  else
  {
    v12 = deltaTime + v10;
    v22 = v5;
    customElementData[3] = v12;
    v13 = I_fclamp(_mm_cvtepi32_ps((__m128i)v12).m128_f32[0] / _mm_cvtepi32_ps((__m128i)v11).m128_f32[0], 0.0, 1.0);
    v14 = LUI_Tween_Ease(*(float *)&v13, (Easing)*((_BYTE *)customElementData + 16));
    v15 = (unsigned int)(int)(float)((float)(_mm_cvtepi32_ps((__m128i)customElementData[1]).m128_f32[0] * (float)(1.0 - *(float *)&v14)) + (float)(_mm_cvtepi32_ps((__m128i)customElementData[2]).m128_f32[0] * *(float *)&v14));
  }
  Com_sprintf(dest, 0xAui64, "%d", v15);
  v16 = (char *)customElementData + 17;
  v17 = -1i64;
  do
    ++v17;
  while ( v16[v17] );
  if ( v17 )
  {
    arguments.argCount = 1;
    arguments.args[0] = dest;
    UI_ReplaceConversions(v16, &arguments, outputString, 0x14ui64);
    v18 = outputString;
  }
  else
  {
    v18 = dest;
  }
  LUI_LUIElement_SetText(element, v18, luaVM);
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
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
  LUITween *v9; 
  LUIElementUsageFlag usageFlags; 
  LUITween *v11; 
  float floatValue; 
  float i; 
  char v14; 

  if ( !outInvalidatesLayout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 785, ASSERT_TYPE_ASSERT, "(outInvalidatesLayout)", (const char *)&queryFormat, "outInvalidatesLayout") )
    __debugbreak();
  if ( element )
  {
    if ( startingTween || (startingTween = element->queuedTweens) != NULL )
    {
      while ( 1 )
      {
        activeTweens = element->activeTweens;
        if ( activeTweens )
          break;
LABEL_10:
        v9 = startingTween;
        startingTween = startingTween->nextTween;
        LUI_Tween_UnlinkElementTween(v9);
        LUI_Tween_SetStartValueInTween(element, v9, luaVM);
        usageFlags = element->usageFlags;
        if ( (usageFlags & 0x80u) != 0 && v9->targetProperty[0] == 3 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v9->endValue.floatValue - v9->startValue.floatValue) & _xmm) > 0.2 )
          element->usageFlags = usageFlags | 0x1000;
        LUI_Tween_AddElementTweenNoInterrupt(element, v9, luaVM);
        if ( (unsigned __int8)(v9->targetProperty[0] - 7) <= 7u )
        {
          LUI_LUIElement_InvalidateLayout(element);
          *outInvalidatesLayout = 1;
        }
        if ( !startingTween )
        {
          if ( SLOBYTE(element->usageFlags) < 0 )
          {
            v11 = element->activeTweens;
            floatValue = element->currentAnimationState.position.y.offsets[0];
            for ( i = element->currentAnimationState.position.y.offsets[1]; v11; v11 = v11->nextTween )
            {
              v14 = v11->targetProperty[0];
              if ( v14 == 13 )
              {
                floatValue = v11->endValue.floatValue;
              }
              else if ( v14 == 14 )
              {
                i = v11->endValue.floatValue;
              }
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(i - floatValue) / (float)(element->currentAnimationState.position.y.offsets[1] - element->currentAnimationState.position.y.offsets[0])) - 1.0) & _xmm) > 0.2 )
              element->usageFlags |= 0x1000u;
          }
          return;
        }
      }
      while ( activeTweens->targetProperty[0] != startingTween->targetProperty[0] )
      {
        activeTweens = activeTweens->nextTween;
        if ( !activeTweens )
          goto LABEL_10;
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
  int v9; 
  double v10; 
  double v11; 
  float v12; 
  float v13; 
  float v14; 
  float floatValue; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  LUIStyledText *CustomElement; 
  float v24; 
  float v25; 
  LUIStyledText *v26; 
  float v27; 
  float v28; 
  int timeElapsed; 
  bool v30; 
  LUISharedTextRefIndex v31; 
  LUISharedTextRefIndex glitchScanlinePitch; 
  LUISharedTextRefIndex v33; 
  const char *v34; 
  LocalClientNum_t CurrentLocalClient; 
  signed __int8 v36; 
  LUIVerticalAlignment VerticalAlignment; 
  signed __int8 v38; 
  LUIHorizontalAlignment HorizontalAlignment; 
  LUISharedTextRefIndex v40; 
  const char *v41; 
  __int64 v45; 
  GfxFont *output_font; 

  if ( tween->owner != element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1035, ASSERT_TYPE_ASSERT, "(tween->owner == element)", (const char *)&queryFormat, "tween->owner == element") )
    __debugbreak();
  duration = tween->duration;
  v9 = deltaTime + tween->timeElapsed;
  tween->timeElapsed = v9;
  if ( duration > 0 )
    v10 = I_fclamp((float)v9 / (float)duration, 0.0, 1.0);
  else
    *(float *)&v10 = FLOAT_1_0;
  v11 = LUI_Tween_Ease(*(float *)&v10, tween->easing);
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
      break;
    case 1:
      element->currentAnimationState.alpha = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 2:
      v13 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.colorValue.g) + (float)(*(float *)&v11 * tween->endValue.colorValue.g);
      v14 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.colorValue.b) + (float)(*(float *)&v11 * tween->endValue.colorValue.b);
      element->currentAnimationState.red = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      element->currentAnimationState.green = v13;
      element->currentAnimationState.blue = v14;
      break;
    case 3:
      element->currentAnimationState.scale = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 4:
      v12 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      element->xRot = v12;
      goto LABEL_11;
    case 5:
      v12 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      element->yRot = v12;
      goto LABEL_11;
    case 6:
      element->currentAnimationState.zRot = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 7:
      element->currentAnimationState.position.x.anchors[0] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 8:
      element->currentAnimationState.position.x.anchors[1] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 9:
      element->currentAnimationState.position.y.anchors[0] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0xA:
      element->currentAnimationState.position.y.anchors[1] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0xB:
      floatValue = tween->endValue.floatValue;
      v16 = tween->startValue.floatValue;
      if ( v16 != floatValue )
        v16 = (float)((float)(1.0 - *(float *)&v11) * v16) + (float)(floatValue * *(float *)&v11);
      element->currentAnimationState.position.x.offsets[0] = v16;
      break;
    case 0xC:
      v17 = tween->endValue.floatValue;
      v18 = tween->startValue.floatValue;
      if ( v18 != v17 )
        v18 = (float)((float)(1.0 - *(float *)&v11) * v18) + (float)(v17 * *(float *)&v11);
      element->currentAnimationState.position.x.offsets[1] = v18;
      break;
    case 0xD:
      v19 = tween->endValue.floatValue;
      v20 = tween->startValue.floatValue;
      if ( v20 != v19 )
        v20 = (float)((float)(1.0 - *(float *)&v11) * v20) + (float)(v19 * *(float *)&v11);
      element->currentAnimationState.position.y.offsets[0] = v20;
      break;
    case 0xE:
      v21 = tween->endValue.floatValue;
      v22 = tween->startValue.floatValue;
      if ( v22 != v21 )
        v22 = (float)((float)(1.0 - *(float *)&v11) * v22) + (float)(v21 * *(float *)&v11);
      element->currentAnimationState.position.y.offsets[1] = v22;
      break;
    case 0xF:
      v12 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      element->depth = v12;
LABEL_11:
      if ( v12 != 0.0 )
        LUI_LUIElement_FlagAs3D(element);
      break;
    case 0x13:
      element->imageData.uMin = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x14:
      element->imageData.uMax = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x15:
    case 0x20:
      element->imageData.vMin = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x16:
    case 0x21:
      element->imageData.vMax = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x17:
    case 0x33:
      element->currentAnimationState.userData = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x18:
      LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowMinDistance = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x19:
      LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowMaxDistance = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x1A:
      LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowUVOffset.v[0] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x1B:
      LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.glowUVOffset.v[1] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x1C:
      CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM);
      v24 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.colorValue.g) + (float)(*(float *)&v11 * tween->endValue.colorValue.g);
      v25 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.colorValue.b) + (float)(*(float *)&v11 * tween->endValue.colorValue.b);
      CustomElement->glowStyle.glowColor.v[0] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      CustomElement->glowStyle.glowColor.v[1] = v24;
      CustomElement->glowStyle.glowColor.v[2] = v25;
      break;
    case 0x1D:
      LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.outlineGlowMinDistance = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x1E:
      LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM)->glowStyle.outlineGlowMaxDistance = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x1F:
      v26 = LUI_LUIElement_RetrieveCustomElementData<LUIStyledText>(element, luaVM);
      v27 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.colorValue.g) + (float)(*(float *)&v11 * tween->endValue.colorValue.g);
      v28 = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.colorValue.b) + (float)(*(float *)&v11 * tween->endValue.colorValue.b);
      v26->glowStyle.outlineGlowColor.v[0] = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      v26->glowStyle.outlineGlowColor.v[1] = v27;
      v26->glowStyle.outlineGlowColor.v[2] = v28;
      break;
    case 0x27:
      element->pixelGrid.blockWidth = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x28:
      element->pixelGrid.blockHeight = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x29:
      element->pixelGrid.gutterWidth = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x2A:
      element->pixelGrid.gutterHeight = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x2B:
      element->pixelGrid.contrast = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x2C:
      element->glitchAmount = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x2E:
      element->colorOp.param = (float)((float)(1.0 - *(float *)&v11) * tween->startValue.floatValue) + (float)(*(float *)&v11 * tween->endValue.floatValue);
      break;
    case 0x2F:
      element->currentAnimationState.userDataBytes[0] = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x30:
      element->currentAnimationState.userDataBytes[1] = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x31:
      element->currentAnimationState.userDataBytes[2] = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x32:
      element->currentAnimationState.userDataBytes[3] = (int)(float)((float)((float)tween->startValue.byteValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.byteValue * *(float *)&v11));
      break;
    case 0x34:
    case 0x35:
      element->currentAnimationState.dataSource = (int)(float)((float)((float)tween->startValue.shortValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.shortValue * *(float *)&v11));
      break;
    case 0x36:
      element->currentAnimationState.userDataShorts[1] = (int)(float)((float)((float)tween->startValue.shortValue * (float)(1.0 - *(float *)&v11)) + (float)((float)tween->endValue.shortValue * *(float *)&v11));
      break;
    default:
      LODWORD(v45) = (char)tween->targetProperty[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1372, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected tween property: %d", v45) )
        __debugbreak();
      break;
  }
  timeElapsed = tween->timeElapsed;
  v30 = timeElapsed >= tween->duration;
  if ( timeElapsed >= tween->duration )
  {
    switch ( tween->targetProperty[0] )
    {
      case 4:
      case 5:
      case 0xF:
        LUI_LUIElement_CheckUnFlagAs3D(element);
        break;
      case 0x10:
        element->imageData.image = tween->endValue.image;
        break;
      case 0x11:
        element->blendMode = tween->endValue.blendMode;
        break;
      case 0x12:
        v31 = *(unsigned __int16 *)element->textData.textRef;
        if ( (_WORD)v31 != INVALID_INDEX )
          LUI_SharedTextRef_RemoveRef(luaVM, v31);
        *(_WORD *)element->textData.textRef = tween->endValue.shortValue;
        if ( !tween->looping )
          goto LABEL_82;
        glitchScanlinePitch = tween->endValue.glitchScanlinePitch;
        if ( (_WORD)glitchScanlinePitch == INVALID_INDEX )
          goto LABEL_82;
        LUI_SharedTextRef_AddRef(luaVM, glitchScanlinePitch);
        break;
      case 0x22:
        v36 = tween->endValue.stringRef[0];
        VerticalAlignment = LUI_GetVerticalAlignment(element->currentAnimationState.alignment);
        element->currentAnimationState.alignment = LUI_GetAlignment((LUIHorizontalAlignment)v36, VerticalAlignment);
        break;
      case 0x23:
        v38 = tween->endValue.stringRef[0];
        HorizontalAlignment = LUI_GetHorizontalAlignment(element->currentAnimationState.alignment);
        element->currentAnimationState.alignment = LUI_GetAlignment(HorizontalAlignment, (LUIVerticalAlignment)v38);
        break;
      case 0x24:
        v40 = tween->endValue.glitchScanlinePitch;
        if ( (_WORD)v40 != INVALID_INDEX )
        {
          LUI_SharedTextRef_PushRefOnStack(luaVM, v40);
          if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1456, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
            __debugbreak();
          v41 = j_lua_tolstring(luaVM, -1, NULL);
          LUI_Interface_RegisterFont(v41, &output_font);
          element->imageData.image = (const GfxImage *)output_font;
          goto LABEL_80;
        }
        break;
      case 0x25:
        if ( tween->endValue.intValue )
          element->usageFlags |= 0x100u;
        else
          element->usageFlags &= ~0x100u;
        break;
      case 0x26:
        LUI_PutElementOnTopOfStack(element, luaVM);
        _XMM1 = 0i64;
        __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rbx+28h]; value }
        LUI_SetTableNumber("m_textStyle", *(long double *)&_XMM1, luaVM);
        j_lua_settop(luaVM, -2);
        break;
      case 0x2D:
        element->colorOp.op = tween->endValue.byteValue;
        break;
      case 0x37:
        v33 = tween->endValue.glitchScanlinePitch;
        if ( (_WORD)v33 != INVALID_INDEX )
        {
          LUI_SharedTextRef_PushRefOnStack(luaVM, v33);
          if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1412, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
            __debugbreak();
          v34 = j_lua_tolstring(luaVM, -1, NULL);
          CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
          if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
            CurrentLocalClient = LOCAL_CLIENT_0;
          if ( LUI_Workers_IsRunningCmd() )
            LUI_Workers_QueuePlaySound(CurrentLocalClient, v34);
          else
            UI_PlayLocalSoundAliasByName(CurrentLocalClient, v34);
LABEL_80:
          j_lua_settop(luaVM, -2);
          if ( !tween->looping )
          {
            LUI_SharedTextRef_RemoveRef(luaVM, (const LUISharedTextRefIndex)tween->endValue.glitchScanlinePitch);
LABEL_82:
            tween->endValue.shortValue = -1;
          }
        }
        break;
      default:
        return v30;
    }
  }
  return v30;
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
  LUITween *v6; 
  const LUITween *v7; 
  __int64 v8; 
  __int128 v9; 
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
  v6 = v5;
  v7 = temporaryTween;
  v8 = 8i64;
  do
  {
    v6 = (LUITween *)((char *)v6 + 128);
    v9 = *(_OWORD *)&v7->owner;
    v7 = (const LUITween *)((char *)v7 + 128);
    *(_OWORD *)&v6[-1].ownerIdCached[896] = v9;
    *(_OWORD *)&v6[-1].ownerIdCached[912] = *(_OWORD *)&v7[-1].ownerIdCached[912];
    *(_OWORD *)&v6[-1].ownerIdCached[928] = *(_OWORD *)&v7[-1].ownerIdCached[928];
    *(_OWORD *)&v6[-1].ownerIdCached[944] = *(_OWORD *)&v7[-1].ownerIdCached[944];
    *(_OWORD *)&v6[-1].ownerIdCached[960] = *(_OWORD *)&v7[-1].ownerIdCached[960];
    *(_OWORD *)&v6[-1].ownerIdCached[976] = *(_OWORD *)&v7[-1].ownerIdCached[976];
    *(_OWORD *)&v6[-1].ownerIdCached[992] = *(_OWORD *)&v7[-1].ownerIdCached[992];
    *(_OWORD *)&v6[-1].ownerIdCached[1008] = *(_OWORD *)&v7[-1].ownerIdCached[1008];
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&v6->owner = *(_OWORD *)&v7->owner;
  *(_OWORD *)&v6->nextTween = *(_OWORD *)&v7->nextTween;
  *(LUITweenPropertyValue *)((char *)&v6->startValue + 8) = *(LUITweenPropertyValue *)((char *)&v7->startValue + 8);
  *(LUITweenPropertyValue *)((char *)&v6->endValue + 8) = *(LUITweenPropertyValue *)((char *)&v7->endValue + 8);
  *(_OWORD *)&v6->duration = *(_OWORD *)&v7->duration;
  v5->isUsedTempTween = 0;
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
  __int64 v1; 
  unsigned int v2; 
  bool v3; 
  const ScreenPlacement *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 

  v1 = localClientNum;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_showDebugTweenCounter, "lui_showDebugTweenCounter") )
  {
    v2 = currentFrame;
    if ( currentFrame >= 0xA )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2182, ASSERT_TYPE_ASSERT, "(unsigned)( currentFrame ) < (unsigned)( ( sizeof( *array_counter( createdRunningBuf ) ) + 0 ) )", "currentFrame doesn't index createdRunningBuf\n\t%i not in [0, %i)", currentFrame, 10) )
        __debugbreak();
      v2 = currentFrame;
    }
    createdRunningBuf[v2] = s_tweensCreated;
    tempUsedRunningBuf[v2] = s_temporaryTweensUsed;
    tempUpgradedRunningBuf[v2] = s_temporaryTweensUpgraded;
    currentFrame = (v2 + 1) % 0xA;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v4 = &scrPlaceViewDisplay[v1];
        goto LABEL_13;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v3 )
        __debugbreak();
    }
    v4 = &scrPlaceFull;
LABEL_13:
    v5 = j_va("Tweens allocated: %d", (unsigned int)s_allocatedTweens);
    CG_DrawStringExt(v4, 8.0, 8.0, v5, &colorWhite, 0, 1, 8.0, 0);
    v6 = j_va("Tweens created: %d (total), %d (avg over 10 frames)", s_tweensCreated, (s_tweensCreated - createdRunningBuf[currentFrame]) / 0xA);
    CG_DrawStringExt(v4, 8.0, 16.0, v6, &colorWhite, 0, 1, 8.0, 0);
    v7 = j_va("Temp tweens used: %d (total), %d (avg over 10 frames)", s_temporaryTweensUsed, (s_temporaryTweensUsed - tempUsedRunningBuf[currentFrame]) / 0xA);
    CG_DrawStringExt(v4, 8.0, 24.0, v7, &colorWhite, 0, 1, 8.0, 0);
    v8 = j_va("Temp tweens upgraded: %d (total), %d (avg over 10 frames)", s_temporaryTweensUpgraded, (s_temporaryTweensUpgraded - tempUpgradedRunningBuf[currentFrame]) / 0xA);
    CG_DrawStringExt(v4, 8.0, 32.0, v8, &colorWhite, 0, 1, 8.0, 0);
  }
}

/*
==============
LUI_Tween_Ease
==============
*/

float __fastcall LUI_Tween_Ease(double t, Easing easing)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  __int64 v11; 

  _XMM8 = 0i64;
  _XMM7 = *(_OWORD *)&t;
  if ( *(float *)&t < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 79, ASSERT_TYPE_ASSERT, "(t >= 0.f)", (const char *)&queryFormat, "t >= 0.f") )
    __debugbreak();
  if ( *(float *)&t > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 80, ASSERT_TYPE_ASSERT, "(t <= 1.f)", (const char *)&queryFormat, "t <= 1.f") )
    __debugbreak();
  switch ( easing )
  {
    case 0:
      return *(float *)&t;
    case 1:
      *(float *)&t = *(float *)&t * *(float *)&t;
      return *(float *)&t;
    case 2:
      v5 = 2.0 - *(float *)&t;
      goto LABEL_10;
    case 3:
      v5 = *(float *)&t * 2.0;
      if ( *(float *)&t < 0.5 )
LABEL_10:
        *(float *)&t = v5 * *(float *)&t;
      else
        *(float *)&t = (float)((float)(4.0 - (float)(*(float *)&t * 2.0)) * *(float *)&t) - 1.0;
      return *(float *)&t;
    case 4:
      *(float *)&t = (float)(*(float *)&t * *(float *)&t) * *(float *)&t;
      return *(float *)&t;
    case 5:
      *(float *)&t = (float)((float)((float)(*(float *)&t - 1.0) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0)) + 1.0;
      return *(float *)&t;
    case 6:
      if ( *(float *)&t >= 0.5 )
        *(float *)&t = (float)((float)((float)((float)((float)(*(float *)&t - 1.0) * 2.0) * 0.5) * (float)((float)(*(float *)&t - 1.0) * 2.0)) * (float)((float)(*(float *)&t - 1.0) * 2.0)) + 1.0;
      else
        *(float *)&t = (float)((float)(*(float *)&t * 4.0) * *(float *)&t) * *(float *)&t;
      return *(float *)&t;
    case 7:
      *(float *)&t = (float)((float)(*(float *)&t * *(float *)&t) * *(float *)&t) * *(float *)&t;
      return *(float *)&t;
    case 8:
      *(float *)&t = 1.0 - (float)((float)((float)((float)(*(float *)&t - 1.0) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0));
      return *(float *)&t;
    case 9:
      if ( *(float *)&t >= 0.5 )
        *(float *)&t = 1.0 - (float)((float)((float)((float)((float)(*(float *)&t - 1.0) * 8.0) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0));
      else
        *(float *)&t = (float)((float)((float)(*(float *)&t * 8.0) * *(float *)&t) * *(float *)&t) * *(float *)&t;
      return *(float *)&t;
    case 10:
      *(float *)&t = (float)((float)((float)(*(float *)&t * *(float *)&t) * *(float *)&t) * *(float *)&t) * *(float *)&t;
      return *(float *)&t;
    case 11:
      *(float *)&t = (float)((float)((float)((float)((float)(*(float *)&t - 1.0) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0)) * (float)(*(float *)&t - 1.0)) + 1.0;
      return *(float *)&t;
    case 12:
      if ( *(float *)&t >= 0.5 )
        *(float *)&t = (float)((float)((float)((float)((float)((float)((float)(*(float *)&t - 1.0) * 2.0) * 0.5) * (float)((float)(*(float *)&t - 1.0) * 2.0)) * (float)((float)(*(float *)&t - 1.0) * 2.0)) * (float)((float)(*(float *)&t - 1.0) * 2.0)) * (float)((float)(*(float *)&t - 1.0) * 2.0)) + 1.0;
      else
        *(float *)&t = (float)((float)((float)((float)(*(float *)&t * 16.0) * *(float *)&t) * *(float *)&t) * *(float *)&t) * *(float *)&t;
      return *(float *)&t;
    case 13:
      *(float *)&t = 1.0 - cosf_0(*(float *)&t * 1.5707964);
      return *(float *)&t;
    case 14:
      *(float *)&t = sinf_0(*(float *)&t * 1.5707964);
      return *(float *)&t;
    case 15:
      *(float *)&t = (float)(1.0 - cosf_0(*(float *)&t * 3.1415927)) * 0.5;
      return *(float *)&t;
    case 16:
      v6 = (float)(*(float *)&t * *(float *)&t) * *(float *)&t;
      v7 = *(float *)&t * 3.1415927;
      goto LABEL_32;
    case 17:
      *(float *)&_XMM7 = *(float *)&t - 1.0;
      v7 = (float)(*(float *)&t - 1.0) * -3.1415927;
      v6 = (float)((float)(*(float *)&_XMM7 * *(float *)&_XMM7) * *(float *)&_XMM7) + 1.0;
      goto LABEL_32;
    case 18:
      v8 = *(float *)&t * 2.0;
      if ( (float)(*(float *)&t * 2.0) < 1.0 )
        return (float)((float)((float)(*(float *)&t * *(float *)&t) * 2.0) * v8) - (float)(sinf_0(v8 * 3.1415927) * (float)(v8 * 0.34999999));
      *(float *)&_XMM7 = 2.0 - v8;
      v6 = (float)((float)(1.0 - (float)((float)(*(float *)&_XMM7 * *(float *)&_XMM7) * *(float *)&_XMM7)) + 1.0) * 0.5;
      v7 = (float)(2.0 - v8) * -3.1415927;
LABEL_32:
      *(float *)&t = v6 - (float)(sinf_0(v7) * (float)(*(float *)&_XMM7 * 0.34999999));
      return *(float *)&t;
    case 19:
      __asm
      {
        vcmpeqss xmm0, xmm7, xmm6; jumptable 0000000142628DE3 case 19
        vblendvps xmm0, xmm8, xmm6, xmm0
      }
      return *(float *)&t;
    default:
      LODWORD(v11) = easing;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected easing mode: %d", v11) )
        __debugbreak();
      return *(float *)&t;
  }
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
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int v11; 
  int v12; 
  int v13; 
  double v14; 
  double v15; 
  __int64 v16; 

  if ( !tween && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1897, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1898, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  switch ( tween->targetProperty[0] )
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
      v4 = lui_tonumber32(luaVM, -1);
      tween->endValue.floatValue = *(float *)&v4;
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
          v8 = lui_tonumber32(luaVM, -1);
          tween->endValue.floatValue = *(float *)&v8;
        }
        j_lua_settop(luaVM, -2);
        j_lua_getfield(luaVM, -1, "g");
        if ( j_lua_isnumber(luaVM, -1) )
        {
          v9 = lui_tonumber32(luaVM, -1);
          tween->endValue.colorValue.g = *(float *)&v9;
        }
        j_lua_settop(luaVM, -2);
        j_lua_getfield(luaVM, -1, "b");
        if ( j_lua_isnumber(luaVM, -1) )
        {
          v10 = lui_tonumber32(luaVM, -1);
          tween->endValue.colorValue.b = *(float *)&v10;
        }
        j_lua_settop(luaVM, -2);
      }
      else
      {
        v11 = lui_tointeger32(luaVM, -1);
        tween->endValue.floatValue = (float)BYTE2(v11) * 0.0039215689;
        tween->endValue.colorValue.g = (float)BYTE1(v11) * 0.0039215689;
        tween->endValue.colorValue.b = (float)(unsigned __int8)v11 * 0.0039215689;
      }
      return;
    case 0x10:
      if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2035, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
        __debugbreak();
      tween->endValue.image = (const GfxImage *)j_lua_touserdata(luaVM, -1);
      return;
    case 0x11:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2071, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      tween->endValue.byteValue = lui_tointeger32(luaVM, -1);
      return;
    case 0x12:
    case 0x24:
    case 0x37:
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2052, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      j_lua_pushvalue(luaVM, -1);
      tween->endValue.shortValue = LUI_SharedTextRef_CreateRef(luaVM);
      return;
    case 0x22:
    case 0x23:
    case 0x2D:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v12 = 2043;
      break;
    case 0x25:
      if ( j_lua_type(luaVM, -1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2059, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, -1 )") )
        __debugbreak();
      tween->endValue.intValue = j_lua_toboolean(luaVM, -1);
      return;
    case 0x26:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2065, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      tween->endValue.intValue = lua_tointeger32(luaVM, -1);
      return;
    case 0x27:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v12 = 1999;
      break;
    case 0x28:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v12 = 2005;
      break;
    case 0x29:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v12 = 2011;
      break;
    case 0x2A:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v12 = 2017;
      break;
    case 0x2B:
      if ( j_lua_isnumber(luaVM, -1) )
        goto LABEL_37;
      v12 = 2023;
      break;
    case 0x2C:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2029, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      v14 = lui_tonumber32(luaVM, -1);
      v15 = I_fclamp(*(float *)&v14, 0.0, 1.0);
      tween->endValue.floatValue = *(float *)&v15;
      return;
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1945, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      v5 = lui_tonumber32(luaVM, -1);
      tween->endValue.byteValue = (int)(float)(*(float *)&v5 * 10.2);
      return;
    case 0x34:
    case 0x35:
    case 0x36:
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 1954, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      v6 = lui_tonumber32(luaVM, -1);
      v7 = I_fclamp(*(float *)&v6, 0.0, 1.0);
      tween->endValue.shortValue = (int)(float)(*(float *)&v7 * 32767.0);
      return;
    default:
      LODWORD(v16) = (char)tween->targetProperty[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", 2077, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected tween property: %d", v16) )
        __debugbreak();
      return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_tween.cpp", v12, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
LABEL_37:
  v13 = lui_tointeger32(luaVM, -1);
  tween->endValue.byteValue = truncate_cast<unsigned char,int>(v13);
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

