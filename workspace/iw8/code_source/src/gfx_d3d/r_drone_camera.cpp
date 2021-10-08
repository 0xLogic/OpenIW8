/*
==============
R_DroneCamera_GetDownsampleScale
==============
*/

unsigned __int8 __fastcall R_DroneCamera_GetDownsampleScale(const GfxViewInfo *viewInfo)
{
  return ?R_DroneCamera_GetDownsampleScale@@YAEPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DroneCamera_Enabled
==============
*/

bool __fastcall R_DroneCamera_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_DroneCamera_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DroneCamera_Enabled
==============
*/
__int64 R_DroneCamera_Enabled(const GfxViewInfo *viewInfo)
{
  if ( viewInfo )
    return viewInfo->droneCameraEffects.enabled;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drone_camera.cpp", 10, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return MEMORY[0xD2B];
}

/*
==============
R_DroneCamera_GetDownsampleScale
==============
*/
__int64 R_DroneCamera_GetDownsampleScale(const GfxViewInfo *viewInfo)
{
  if ( viewInfo )
    return viewInfo->droneCameraEffects.downsampleScale;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drone_camera.cpp", 20, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return MEMORY[0xD2A];
}

