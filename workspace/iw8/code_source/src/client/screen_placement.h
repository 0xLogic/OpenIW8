/*
==============
ScrPlace_GetActivePlacement
==============
*/

const ScreenPlacement *__fastcall ScrPlace_GetActivePlacement(const LocalClientNum_t localClientNum)
{
  return ?ScrPlace_GetActivePlacement@@YAPEBUScreenPlacement@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScrPlace_GetActivePlacement
==============
*/
ScreenPlacement *ScrPlace_GetActivePlacement(const LocalClientNum_t localClientNum)
{
  bool v1; 

  if ( activeScreenPlacementMode == SCRMODE_FULL )
    return &scrPlaceFull;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v1 )
      __debugbreak();
    return &scrPlaceFull;
  }
  return &scrPlaceViewDisplay[localClientNum];
}

