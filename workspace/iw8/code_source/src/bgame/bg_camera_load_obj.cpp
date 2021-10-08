/*
==============
Camera_Register
==============
*/

CameraDef *__fastcall Camera_Register(const char *name)
{
  return ?Camera_Register@@YAPEAUCameraDef@@PEBD@Z(name);
}

/*
==============
BG_Camera_Validate_VMAttachCam
==============
*/

bool __fastcall BG_Camera_Validate_VMAttachCam(const char *assetName, const char *fieldName, const CameraDef *camDef)
{
  return ?BG_Camera_Validate_VMAttachCam@@YA_NPEBD0PEBUCameraDef@@@Z(assetName, fieldName, camDef);
}

/*
==============
BG_Camera_Validate_VMAttachCam
==============
*/
char BG_Camera_Validate_VMAttachCam(const char *assetName, const char *fieldName, const CameraDef *camDef)
{
  if ( !camDef || camDef->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
    return 1;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CA0580, 5968i64, assetName, fieldName, camDef->name);
  return 0;
}

/*
==============
Camera_Register
==============
*/
CameraDef *Camera_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera_load_obj.cpp", 244, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera_load_obj.cpp", 231, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_CAMERA, name, 1).cameraDef;
}

