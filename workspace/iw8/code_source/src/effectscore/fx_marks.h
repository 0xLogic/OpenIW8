/*
==============
FX_MarkToHandle
==============
*/

unsigned __int16 __fastcall FX_MarkToHandle(const FxMarksSystem *marksSystem, const FxMark *mark)
{
  return ?FX_MarkToHandle@@YAGPEBUFxMarksSystem@@PEBUFxMark@@@Z(marksSystem, mark);
}

/*
==============
FX_MarkFromHandle
==============
*/

FxMark *__fastcall FX_MarkFromHandle(FxMarksSystem *marksSystem, unsigned __int16 handle)
{
  return ?FX_MarkFromHandle@@YAPEAUFxMark@@PEAUFxMarksSystem@@G@Z(marksSystem, handle);
}

/*
==============
FX_MarkFromHandle
==============
*/
FxMark *FX_MarkFromHandle(FxMarksSystem *marksSystem, unsigned __int16 handle)
{
  if ( handle >= 0x200u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", handle, 512) )
    __debugbreak();
  if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
    __debugbreak();
  return &marksSystem->marks[handle];
}

/*
==============
FX_MarkToHandle
==============
*/
__int64 FX_MarkToHandle(const FxMarksSystem *marksSystem, const FxMark *mark)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v7; 

  if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 171, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
    __debugbreak();
  if ( !mark && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 172, ASSERT_TYPE_ASSERT, "(mark)", (const char *)&queryFormat, "mark") )
    __debugbreak();
  v4 = (__int64)((unsigned __int128)(((char *)mark - (char *)marksSystem->marks) * (__int128)0x6666666666666667i64) >> 64) >> 6;
  v5 = (v4 >> 63) + v4;
  if ( (unsigned __int16)v5 >= 0x200u )
  {
    LODWORD(v7) = (unsigned __int16)v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v7, 512) )
      __debugbreak();
  }
  return (unsigned __int16)v5;
}

