/*
==============
Gesture_Register
==============
*/

Gesture *__fastcall Gesture_Register(const char *name)
{
  return ?Gesture_Register@@YAPEAUGesture@@PEBD@Z(name);
}

/*
==============
Gesture_Register
==============
*/
Gesture *Gesture_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_load_obj.cpp", 574, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_load_obj.cpp", 561, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_GESTURE, name, 1).gesture;
}

