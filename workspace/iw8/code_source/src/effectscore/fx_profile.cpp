/*
==============
FX_DrawMarkProfile
==============
*/

void __fastcall FX_DrawMarkProfile(LocalClientNum_t localClientNum, void (__fastcall *drawFunc)(LocalClientNum_t, const char *, vec2_t *), vec2_t *inOutProfilePos)
{
  ?FX_DrawMarkProfile@@YAXW4LocalClientNum_t@@P6AX0PEBDAEATvec2_t@@@Z2@Z(localClientNum, drawFunc, inOutProfilePos);
}

/*
==============
FX_DrawMarkProfile
==============
*/
void FX_DrawMarkProfile(LocalClientNum_t localClientNum, void (*drawFunc)(LocalClientNum_t, const char *, vec2_t *), vec2_t *inOutProfilePos)
{
  FxMarksSystem *MarksSystem; 
  int v4; 
  FxMarksSystem *v5; 
  int v6; 
  unsigned __int16 firstFreeMarkHandle; 
  FxMark *marks; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  GfxMarkContext *p_context; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  unsigned __int16 *entFirstMarkHandles; 
  FxMark *v23; 
  int dynEntId_low; 
  __int64 v25; 
  char *fmt; 
  void (__fastcall *drawFunca)(LocalClientNum_t, const char *, vec2_t *); 
  void (__fastcall *drawFuncb)(LocalClientNum_t, const char *, vec2_t *); 
  vec2_t *inOutProfilePosa; 
  vec2_t *inOutProfilePosb; 
  unsigned int v31; 
  int v32; 
  unsigned int v36; 

  MarksSystem = FX_GetMarksSystem(localClientNum);
  v4 = 0;
  v32 = 0;
  v5 = MarksSystem;
  v6 = 0;
  firstFreeMarkHandle = MarksSystem->firstFreeMarkHandle;
  if ( firstFreeMarkHandle == 0xFFFF )
  {
    marks = MarksSystem->marks;
  }
  else
  {
    do
    {
      ++v6;
      if ( firstFreeMarkHandle >= 0x200u )
      {
        LODWORD(inOutProfilePosa) = 512;
        LODWORD(drawFunca) = firstFreeMarkHandle;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", drawFunca, inOutProfilePosa) )
          __debugbreak();
      }
      marks = v5->marks;
      firstFreeMarkHandle = marks[firstFreeMarkHandle].nextMark;
    }
    while ( firstFreeMarkHandle != 0xFFFF );
    v32 = v6;
    v4 = 0;
  }
  v36 = 0;
  v31 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( marks != &marks[512] )
  {
    p_context = &marks->context;
    do
    {
      if ( *(_DWORD *)&p_context[-9].modelType == -1 )
      {
        ++v9;
      }
      else
      {
        if ( !p_context )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          v14 = v31;
          v13 = v36;
        }
        if ( p_context->modelType )
        {
          switch ( p_context->modelType )
          {
            case 2u:
              v36 = ++v13;
              break;
            case 3u:
              ++v12;
              break;
            case 4u:
              ++v11;
              break;
            case 6u:
              v31 = ++v14;
              break;
          }
        }
        else
        {
          ++v10;
        }
      }
      p_context += 20;
    }
    while ( p_context != &v5->marks[512].context );
    v6 = v32;
    v4 = 0;
  }
  if ( v6 != v9 )
  {
    LODWORD(inOutProfilePosa) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_profile.cpp", 176, ASSERT_TYPE_ASSERT, "(freeMarks == freeMarks2)", "%s\n\t%i %i", "freeMarks == freeMarks2", inOutProfilePosa, v9) )
      __debugbreak();
  }
  LODWORD(fmt) = v5->freedMarkCount;
  v16 = j_va("%4i of %4i marks in use (%i alloced, %i freed)", (unsigned int)(512 - v6), 512i64, v5->allocedMarkCount, fmt);
  drawFunc(localClientNum, v16, inOutProfilePos);
  drawFunc(localClientNum, " ", inOutProfilePos);
  v17 = j_va("%4i World Brush Marks", v10);
  drawFunc(localClientNum, v17, inOutProfilePos);
  v18 = j_va("%4i World Model Marks", v36);
  drawFunc(localClientNum, v18, inOutProfilePos);
  v19 = j_va("%4i Glass Marks", v31);
  drawFunc(localClientNum, v19, inOutProfilePos);
  v20 = j_va("%4i Ent Brush Marks", v12);
  drawFunc(localClientNum, v20, inOutProfilePos);
  v21 = j_va("%4i Ent Model", v11);
  drawFunc(localClientNum, v21, inOutProfilePos);
  FX_DrawMarkProfile_MarkPrint(localClientNum, v5, v5->firstActiveWorldMarkHandle, "world", 0, drawFunc, inOutProfilePos);
  entFirstMarkHandles = v5->entFirstMarkHandles;
  do
    FX_DrawMarkProfile_MarkPrint(localClientNum, v5, *entFirstMarkHandles++, "ent", v4++, drawFunc, inOutProfilePos);
  while ( v4 != 2048 );
  v23 = v5->marks;
  if ( v23 != &v23[512] )
  {
    do
    {
      if ( v23->timeDrawn != -1 && v23->prevMark == 0xFFFF )
      {
        if ( v23 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( v23->context.modelType == 2 )
        {
          if ( v23 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2128, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          dynEntId_low = LOWORD(v23->context.typeSpecificIndex.dynEntId);
          v25 = v23 - v5->marks;
          if ( (unsigned __int16)v25 >= 0x200u )
          {
            LODWORD(inOutProfilePosb) = 512;
            LODWORD(drawFuncb) = (unsigned __int16)v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", drawFuncb, inOutProfilePosb) )
              __debugbreak();
          }
          FX_DrawMarkProfile_MarkPrint(localClientNum, v5, v25, "sm", dynEntId_low, drawFunc, inOutProfilePos);
        }
      }
      ++v23;
    }
    while ( v23 != v5->marks + 512 );
  }
}

/*
==============
FX_DrawMarkProfile_MarkPrint
==============
*/
void FX_DrawMarkProfile_MarkPrint(LocalClientNum_t localClientNum, FxMarksSystem *marksSystem, unsigned __int16 head, const char *name, int index, void (*drawFunc)(LocalClientNum_t, const char *, vec2_t *), vec2_t *inOutProfilePos)
{
  int v7; 
  unsigned __int8 v8; 
  unsigned __int16 nextMark; 
  __int16 v11; 
  FxMark *v12; 
  GfxMarkContext *p_context; 
  unsigned __int8 modelType; 
  const char *v15; 
  const char *v16; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v7 = 0;
  v8 = 0;
  nextMark = head;
  v11 = -1;
  if ( head != 0xFFFF )
  {
    do
    {
      if ( nextMark >= 0x200u )
      {
        LODWORD(v19) = 512;
        LODWORD(v18) = nextMark;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      v12 = &marksSystem->marks[nextMark];
      if ( v12->timeDrawn == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_profile.cpp", 95, ASSERT_TYPE_ASSERT, "(mark->timeDrawn != FX_MARK_FREE)", (const char *)&queryFormat, "mark->timeDrawn != FX_MARK_FREE") )
        __debugbreak();
      if ( v12->prevMark != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_profile.cpp", 96, ASSERT_TYPE_ASSERT, "(mark->prevMark == lastMarkHandle)", (const char *)&queryFormat, "mark->prevMark == lastMarkHandle") )
        __debugbreak();
      p_context = &v12->context;
      if ( v12 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      modelType = p_context->modelType;
      if ( v7 )
        modelType = v8;
      v8 = modelType;
      if ( modelType != p_context->modelType )
      {
        LODWORD(v20) = p_context->modelType;
        LODWORD(v19) = modelType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_profile.cpp", 100, ASSERT_TYPE_ASSERT, "(type == thisMarkType)", "%s\n\t%i %i", "type == thisMarkType", v19, v20) )
          __debugbreak();
      }
      if ( (v8 & 0xFD) == 0 )
      {
        if ( v12 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2128, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( LOWORD(v12->context.typeSpecificIndex.dynEntId) != index )
        {
          if ( v12 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2128, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          LODWORD(v21) = index;
          LODWORD(v20) = LOWORD(v12->context.typeSpecificIndex.dynEntId);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_profile.cpp", 102, ASSERT_TYPE_ASSERT, "( FX_GetMarkContext_ModelIndex( &mark->context ) ) == ( index )", "%s == %s\n\t%i, %i", "FX_GetMarkContext_ModelIndex( &mark->context )", "index", v20, v21) )
            __debugbreak();
        }
      }
      v11 = nextMark;
      nextMark = v12->nextMark;
      ++v7;
    }
    while ( nextMark != 0xFFFF );
    if ( v7 )
    {
      if ( v8 )
      {
        switch ( v8 )
        {
          case 2u:
            v15 = "wmodel";
            break;
          case 3u:
            v15 = "ebrush";
            break;
          case 4u:
            v15 = "emodel";
            break;
          case 6u:
            v15 = "glass";
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_profile.cpp", 20, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unpossible") )
              __debugbreak();
            v15 = "unknown";
            break;
        }
      }
      else
      {
        v15 = "wbrush";
      }
      LODWORD(v19) = 0;
      LODWORD(v18) = 0;
      LODWORD(fmt) = v7;
      v16 = j_va("%s%5i %s %i (%i pts, %i tris)", name, (unsigned int)index, v15, fmt, v18, v19);
      drawFunc(localClientNum, v16, inOutProfilePos);
    }
  }
}

