/*
==============
CameraType_Is_Def
==============
*/

bool __fastcall CameraType_Is_Def(unsigned int ct)
{
  return ?CameraType_Is_Def@@YA_NI@Z(ct);
}

/*
==============
CameraType_Is_Valid
==============
*/

bool __fastcall CameraType_Is_Valid(CameraType ct)
{
  return ?CameraType_Is_Valid@@YA_NW4CameraType@@@Z(ct);
}

/*
==============
CameraType_Is_Def
==============
*/
bool CameraType_Is_Def(unsigned int ct)
{
  return ct && (int)ct < 256 && ct - 1 < 0xFA;
}

/*
==============
CameraType_Is_Valid
==============
*/
bool CameraType_Is_Valid(CameraType ct)
{
  return ct && ct < MAX_CAMERA_TYPES;
}

