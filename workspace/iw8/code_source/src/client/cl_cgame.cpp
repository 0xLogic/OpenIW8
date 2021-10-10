/*
==============
CL_DObjCreateSkelForBone
==============
*/

int __fastcall CL_DObjCreateSkelForBone(const DObj *obj, int boneIndex)
{
  return ?CL_DObjCreateSkelForBone@@YAHPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
CL_ProjectionSet3D
==============
*/

void CL_ProjectionSet3D(void)
{
  ?CL_ProjectionSet3D@@YAXXZ();
}

/*
==============
CL_DrawString
==============
*/

void __fastcall CL_DrawString(int x, int y, const char *pszString, int bShadow, int iCharHeight)
{
  ?CL_DrawString@@YAXHHPEBDHH@Z(x, y, pszString, bShadow, iCharHeight);
}

/*
==============
CL_UpdateColor
==============
*/

void __fastcall CL_UpdateColor(LocalClientNum_t localClientNum)
{
  ?CL_UpdateColor@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetScreenAspectRatioDisplayPixel
==============
*/

double __fastcall CL_GetScreenAspectRatioDisplayPixel()
{
  double result; 

  *(float *)&result = ?CL_GetScreenAspectRatioDisplayPixel@@YAMXZ();
  return result;
}

/*
==============
CL_GetExtrapolatedCmd
==============
*/

bool __fastcall CL_GetExtrapolatedCmd(const LocalClientNum_t localClientNum, usercmd_s *outCmd)
{
  return ?CL_GetExtrapolatedCmd@@YA_NW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, outCmd);
}

/*
==============
CL_SetADS
==============
*/

void __fastcall CL_SetADS(LocalClientNum_t localClientNum, bool ads)
{
  ?CL_SetADS@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, ads);
}

/*
==============
CL_DrawTextWithCursor
==============
*/

void __fastcall CL_DrawTextWithCursor(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const vec4_t *color, int style, int cursorPos, char cursor)
{
  ?CL_DrawTextWithCursor@@YAXPEBUScreenPlacement@@PEBDHPEAUGfxFont@@MMHHMMAEBTvec4_t@@HHD@Z(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, xScale, yScale, color, style, cursorPos, cursor);
}

/*
==============
CL_DrawRect
==============
*/

void __fastcall CL_DrawRect(const int x, const int y, const int width, const int height, const vec4_t *color)
{
  ?CL_DrawRect@@YAXHHHHAEBTvec4_t@@@Z(x, y, width, height, color);
}

/*
==============
CL_DrawStretchPicPhysicalRotatedST
==============
*/

void __fastcall CL_DrawStretchPicPhysicalRotatedST(const vec2_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicPhysicalRotatedST@@YAXPEBTvec2_t@@MMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, material);
}

/*
==============
CL_DrawRotatedStretchPicWithoutSplitScreenScaling
==============
*/

void __fastcall CL_DrawRotatedStretchPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, float angle, bool pivotTopLeft, const vec4_t *color, Material *material)
{
  ?CL_DrawRotatedStretchPicWithoutSplitScreenScaling@@YAXPEBUScreenPlacement@@MMMMHHMMMMM_NAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, s1, t1, s2, t2, angle, pivotTopLeft, color, material);
}

/*
==============
CL_DrawTextPhysicalWithCursor
==============
*/

void __fastcall CL_DrawTextPhysicalWithCursor(const char *text, int maxChars, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style, int cursorPos, char cursor)
{
  ?CL_DrawTextPhysicalWithCursor@@YAXPEBDHPEAUGfxFont@@MMMMAEBTvec4_t@@HHD@Z(text, maxChars, font, x, y, xScale, yScale, color, style, cursorPos, cursor);
}

/*
==============
CL_DrawStretchPicPhysical
==============
*/

void __fastcall CL_DrawStretchPicPhysical(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicPhysical@@YAXMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(x, y, w, h, s1, t1, s2, t2, color, material);
}

/*
==============
CL_DrawStretchPicFlipST
==============
*/

void __fastcall CL_DrawStretchPicFlipST(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicFlipST@@YAXPEBUScreenPlacement@@MMMMHHMMMMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, s1, t1, s2, t2, color, material);
}

/*
==============
CL_SetupScreenPlacements
==============
*/

void CL_SetupScreenPlacements(void)
{
  ?CL_SetupScreenPlacements@@YAXXZ();
}

/*
==============
CL_DrawStretchPic
==============
*/

void __fastcall CL_DrawStretchPic(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPic@@YAXPEBUScreenPlacement@@MMMMHHMMMMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, s1, t1, s2, t2, color, material);
}

/*
==============
CL_SetUserCmdWeapons
==============
*/

void __fastcall CL_SetUserCmdWeapons(LocalClientNum_t localClientNum, const Weapon *weapon, const Weapon *offHand, int useAltMode)
{
  ?CL_SetUserCmdWeapons@@YAXW4LocalClientNum_t@@AEBUWeapon@@1H@Z(localClientNum, weapon, offHand, useAltMode);
}

/*
==============
CL_GetScreenDimensions
==============
*/

void __fastcall CL_GetScreenDimensions(int *width, int *height, float *aspect)
{
  ?CL_GetScreenDimensions@@YAXPEAH0PEAM@Z(width, height, aspect);
}

/*
==============
CL_SetUserCommandClearStateFlag
==============
*/

void __fastcall CL_SetUserCommandClearStateFlag(const LocalClientNum_t localClientNum, const UserCommandStateFlags flag)
{
  ?CL_SetUserCommandClearStateFlag@@YAXW4LocalClientNum_t@@W4UserCommandStateFlags@@@Z(localClientNum, flag);
}

/*
==============
CL_SetUserCommandSetStateFlag
==============
*/

void __fastcall CL_SetUserCommandSetStateFlag(const LocalClientNum_t localClientNum, const UserCommandStateFlags flag)
{
  ?CL_SetUserCommandSetStateFlag@@YAXW4LocalClientNum_t@@W4UserCommandStateFlags@@@Z(localClientNum, flag);
}

/*
==============
CL_SetViewport
==============
*/

void __fastcall CL_SetViewport(int x, int y, int width, int height)
{
  ?CL_SetViewport@@YAXHHHH@Z(x, y, width, height);
}

/*
==============
CL_DrawTextPhysical
==============
*/

void __fastcall CL_DrawTextPhysical(const char *text, int maxChars, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  ?CL_DrawTextPhysical@@YAXPEBDHPEAUGfxFont@@MMMMAEBTvec4_t@@H@Z(text, maxChars, font, x, y, xScale, yScale, color, style);
}

/*
==============
CL_GetMaxPitchSpeed
==============
*/

double __fastcall CL_GetMaxPitchSpeed(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_GetMaxPitchSpeed@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CL_SetInputAccumTime
==============
*/

void __fastcall CL_SetInputAccumTime(LocalClientNum_t localClientNum, int accumInputTimeMs)
{
  ?CL_SetInputAccumTime@@YAXW4LocalClientNum_t@@H@Z(localClientNum, accumInputTimeMs);
}

/*
==============
CL_Draw3DQuadPicPhysicalST
==============
*/

void __fastcall CL_Draw3DQuadPicPhysicalST(const vec3_t *verts, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_Draw3DQuadPicPhysicalST@@YAXPEBTvec3_t@@MMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, s1, t1, s2, t2, color, material);
}

/*
==============
CL_DrawQuadPicPhysicalST
==============
*/

void __fastcall CL_DrawQuadPicPhysicalST(const vec2_t *verts, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_DrawQuadPicPhysicalST@@YAXPEBTvec2_t@@MMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, s1, t1, s2, t2, color, material);
}

/*
==============
CL_SetExtraButtons
==============
*/

void __fastcall CL_SetExtraButtons(LocalClientNum_t localClientNum, unsigned __int64 buttons)
{
  ?CL_SetExtraButtons@@YAXW4LocalClientNum_t@@_K@Z(localClientNum, buttons);
}

/*
==============
CL_GetMaxYawSpeed
==============
*/

double __fastcall CL_GetMaxYawSpeed(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_GetMaxYawSpeed@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CL_SubtitlesEnabled
==============
*/

bool __fastcall CL_SubtitlesEnabled(LocalClientNum_t localClientNum)
{
  return ?CL_SubtitlesEnabled@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_DrawText
==============
*/

void __fastcall CL_DrawText(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const vec4_t *color, int style)
{
  ?CL_DrawText@@YAXPEBUScreenPlacement@@PEBDHPEAUGfxFont@@MMHHMMAEBTvec4_t@@H@Z(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, xScale, yScale, color, style);
}

/*
==============
CL_DrawStretchPicPhysicalRotateXY
==============
*/

void __fastcall CL_DrawStretchPicPhysicalRotateXY(float x, float y, float w, float h, float s1, float t1, float s2, float t2, float angle, bool pivotTopLeft, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicPhysicalRotateXY@@YAXMMMMMMMMM_NAEBTvec4_t@@PEAUMaterial@@@Z(x, y, w, h, s1, t1, s2, t2, angle, pivotTopLeft, color, material);
}

/*
==============
CL_SetFullScreenViewport
==============
*/

void CL_SetFullScreenViewport(void)
{
  ?CL_SetFullScreenViewport@@YAXXZ();
}

/*
==============
CL_RenderScene
==============
*/

void __fastcall CL_RenderScene(LocalClientNum_t localClientNum, const refdef_t *refdef, unsigned int drawType)
{
  ?CL_RenderScene@@YAXW4LocalClientNum_t@@PEBUrefdef_t@@I@Z(localClientNum, refdef, drawType);
}

/*
==============
CL_ProjectionSet2D
==============
*/

void CL_ProjectionSet2D(void)
{
  ?CL_ProjectionSet2D@@YAXXZ();
}

/*
==============
CL_DrawStretchPicWithoutSplitScreenScaling
==============
*/

void __fastcall CL_DrawStretchPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicWithoutSplitScreenScaling@@YAXPEBUScreenPlacement@@MMMMHHMMMMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, s1, t1, s2, t2, color, material);
}

/*
==============
CL_CapTurnRate
==============
*/

void __fastcall CL_CapTurnRate(LocalClientNum_t localClientNum, const TurnRateCapType capType, float maxPitchSpeed, float maxYawSpeed)
{
  ?CL_CapTurnRate@@YAXW4LocalClientNum_t@@W4TurnRateCapType@@MM@Z(localClientNum, capType, maxPitchSpeed, maxYawSpeed);
}

/*
==============
CL_SetFOVSensitivityScale
==============
*/

void __fastcall CL_SetFOVSensitivityScale(LocalClientNum_t localClientNum, float scale)
{
  ?CL_SetFOVSensitivityScale@@YAXW4LocalClientNum_t@@M@Z(localClientNum, scale);
}

/*
==============
CL_GetDebugViewPos
==============
*/

void __fastcall CL_GetDebugViewPos(vec3_t *pos)
{
  ?CL_GetDebugViewPos@@YAXAEATvec3_t@@@Z(pos);
}

/*
==============
CL_Draw9SliceImage
==============
*/

void __fastcall CL_Draw9SliceImage(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  ?CL_Draw9SliceImage@@YAXPEBUScreenPlacement@@MMMMHHAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, color, material);
}

/*
==============
CL_SetUserCmdWeapons_OverrideAltMode
==============
*/

bool __fastcall CL_SetUserCmdWeapons_OverrideAltMode(cg_t *cgameGlob, ClActiveClient *cl, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?CL_SetUserCmdWeapons_OverrideAltMode@@YA_NPEAVcg_t@@PEAVClActiveClient@@PEBUplayerState_s@@AEBUWeapon@@@Z(cgameGlob, cl, ps, r_weapon);
}

/*
==============
CL_Draw3DStretchPicPhysicalRotatedST
==============
*/

void __fastcall CL_Draw3DStretchPicPhysicalRotatedST(const vec3_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  ?CL_Draw3DStretchPicPhysicalRotatedST@@YAXPEBTvec3_t@@MMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, material);
}

/*
==============
CL_DrawTextPhysicalWithEffects
==============
*/

void __fastcall CL_DrawTextPhysicalWithEffects(const char *text, int maxChars, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style, const vec4_t *glowColor, Material *fxMaterial, Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime)
{
  ?CL_DrawTextPhysicalWithEffects@@YAXPEBDHPEAUGfxFont@@MMMMAEBTvec4_t@@H2PEAUMaterial@@3HH@Z(text, maxChars, font, x, y, xScale, yScale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime);
}

/*
==============
CL_SubtitlePrint
==============
*/

void __fastcall CL_SubtitlePrint(LocalClientNum_t localClientNum, const char *text, int duration, int pixelWidth, bool forceSubtitleShown)
{
  ?CL_SubtitlePrint@@YAXW4LocalClientNum_t@@PEBDHH_N@Z(localClientNum, text, duration, pixelWidth, forceSubtitleShown);
}

/*
==============
CL_DrawStretchPicRotatedST
==============
*/

void __fastcall CL_DrawStretchPicRotatedST(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicRotatedST@@YAXPEBUScreenPlacement@@MMMMHHMMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(scrPlace, x, y, w, h, horzAlign, vertAlign, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, material);
}

/*
==============
CL_GetSceneDimensions
==============
*/

void __fastcall CL_GetSceneDimensions(int *width, int *height, float *aspect)
{
  ?CL_GetSceneDimensions@@YAXPEAH0PEAM@Z(width, height, aspect);
}

/*
==============
CL_UpdateExtraButtons
==============
*/

void __fastcall CL_UpdateExtraButtons(const LocalClientNum_t localClientNum)
{
  ?CL_UpdateExtraButtons@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_DrawStretchPicPhysicalFlipST
==============
*/

void __fastcall CL_DrawStretchPicPhysicalFlipST(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  ?CL_DrawStretchPicPhysicalFlipST@@YAXMMMMMMMMAEBTvec4_t@@PEAUMaterial@@@Z(x, y, w, h, s1, t1, s2, t2, color, material);
}

/*
==============
CL_LookupColor
==============
*/

void __fastcall CL_LookupColor(LocalClientNum_t localClientNum, unsigned __int8 c, vec4_t *outColor)
{
  ?CL_LookupColor@@YAXW4LocalClientNum_t@@EAEATvec4_t@@@Z(localClientNum, c, outColor);
}

/*
==============
CL_CapTurnRate
==============
*/
void CL_CapTurnRate(LocalClientNum_t localClientNum, const TurnRateCapType capType, float maxPitchSpeed, float maxYawSpeed)
{
  __int64 v5; 
  ClActiveClient *Client; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v5 = capType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 521, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 5 )
  {
    LODWORD(v9) = 5;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( capType ) ) < (unsigned)( TURNRATECAPTYPE_COUNT )", "static_cast<int>( capType ) doesn't index TURNRATECAPTYPE_COUNT\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  Client = ClActiveClient::GetClient(localClientNum);
  Client->turnRateCapInfos[v5].maxPitchSpeed = maxPitchSpeed;
  Client->turnRateCapInfos[v5].maxYawSpeed = maxYawSpeed;
}

/*
==============
CL_DObjCreateSkelForBone
==============
*/
int CL_DObjCreateSkelForBone(const DObj *obj, int boneIndex)
{
  int SkelTimeStamp; 
  unsigned int AllocSkelSize; 
  char *v7; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 1066, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjTotalNumBones(obj) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 1067, ASSERT_TYPE_ASSERT, "(DObjTotalNumBones( obj ) > 0)", (const char *)&queryFormat, "DObjTotalNumBones( obj ) > 0") )
    __debugbreak();
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  if ( DObjSkelExists(obj, SkelTimeStamp) )
    return DObjSkelIsBoneUpToDate(obj, boneIndex);
  AllocSkelSize = DObjGetAllocSkelSize(obj);
  v7 = CL_Pose_AllocSkelMemory(obj, AllocSkelSize);
  if ( v7 )
  {
    DObjCreateSkel(obj, v7, SkelTimeStamp);
    return 0;
  }
  else
  {
    Sys_Error((const ObfuscateErrorText)&stru_1441EC9C0);
    return 1;
  }
}

/*
==============
CL_Draw3DQuadPicPhysicalST
==============
*/
void CL_Draw3DQuadPicPhysicalST(const vec3_t *verts, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v7; 
  float s0; 
  float t0; 
  float s1a; 

  s1a = s2;
  t0 = t1;
  s0 = s1;
  v7 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s0, &s1a, &t0, &t2);
  R_AddCmdDraw3DQuadPicST(verts, s0, t0, s1a, t2, color, v7);
}

/*
==============
CL_Draw3DStretchPicPhysicalRotatedST
==============
*/
void CL_Draw3DStretchPicPhysicalRotatedST(const vec3_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  Material *v12; 

  v12 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &minS, &maxS, &minT, &maxT);
  R_AddCmdDraw3DStretchPicRotateST(verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, v12);
}

/*
==============
CL_Draw9SliceImage
==============
*/
void CL_Draw9SliceImage(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  Material *v9; 
  float v12; 
  GfxImage *image; 
  int v14; 
  int v15; 
  float v16; 
  float v17; 
  const vec4_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float wa; 
  float ya; 
  float xa[4]; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 

  v32 = w;
  v31 = y;
  v30 = x;
  v9 = material;
  if ( material->textureCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 398, ASSERT_TYPE_ASSERT, "(material->textureCount == 1)", (const char *)&queryFormat, "material->textureCount == 1") )
    __debugbreak();
  v12 = scrPlace->realViewportSize.v[1] * 0.00092592591;
  image = v9->textureTable->image;
  v14 = vertAlign;
  v15 = horzAlign;
  v16 = (float)((float)((float)image->width * 0.33333334) / scrPlace->scaleVirtualToReal.v[0]) * v12;
  v29 = (float)((float)((float)image->height * 0.33333334) / scrPlace->scaleVirtualToReal.v[1]) * v12;
  v17 = v29;
  *(float *)&material = v16;
  wa = v16;
  ya = y;
  xa[0] = x;
  ScrPlace_ApplyRect(scrPlace, xa, &ya, &wa, &v29, horzAlign, vertAlign);
  v18 = color;
  CL_DrawStretchPicPhysical(xa[0], ya, wa, v29, 0.0, 0.0, 0.33333334, 0.33333334, color, v9);
  v19 = w - (float)(v16 * 2.0);
  v20 = v16 + x;
  wa = v16 + x;
  v29 = v17;
  xa[0] = v19;
  ya = y;
  ScrPlace_ApplyRect(scrPlace, &wa, &ya, xa, &v29, v15, v14);
  CL_DrawStretchPicPhysical(wa, ya, xa[0], v29, 0.33333334, 0.0, 0.66666669, 0.33333334, v18, v9);
  ya = y;
  v32 = (float)(x + v32) - v16;
  v21 = v32;
  v29 = v17;
  xa[0] = v16;
  ScrPlace_ApplyRect(scrPlace, &v32, &ya, xa, &v29, v15, v14);
  CL_DrawStretchPicPhysical(v32, ya, xa[0], v29, 0.66666669, 0.0, 1.0, 0.33333334, v18, v9);
  v22 = h;
  v23 = v17 + v31;
  v24 = h - (float)(v17 * 2.0);
  xa[0] = v30;
  v32 = v24;
  h = *(float *)&material;
  v29 = v17 + v31;
  ScrPlace_ApplyRect(scrPlace, xa, &v29, &h, &v32, v15, v14);
  CL_DrawStretchPicPhysical(xa[0], v29, h, v32, 0.0, 0.33333334, 0.33333334, 0.66666669, v18, v9);
  v32 = v24;
  h = v19;
  v29 = v23;
  xa[0] = v20;
  ScrPlace_ApplyRect(scrPlace, xa, &v29, &h, &v32, v15, v14);
  CL_DrawStretchPicPhysical(xa[0], v29, h, v32, 0.33333334, 0.33333334, 0.66666669, 0.66666669, v18, v9);
  h = *(float *)&material;
  v32 = v24;
  v29 = v23;
  xa[0] = v21;
  ScrPlace_ApplyRect(scrPlace, xa, &v29, &h, &v32, v15, v14);
  CL_DrawStretchPicPhysical(xa[0], v29, h, v32, 0.66666669, 0.33333334, 1.0, 0.66666669, v18, v9);
  h = *(float *)&material;
  v32 = v17;
  v31 = (float)(v22 + v31) - v17;
  v25 = v31;
  ScrPlace_ApplyRect(scrPlace, &v30, &v31, &h, &v32, v15, v14);
  CL_DrawStretchPicPhysical(v30, v31, h, v32, 0.0, 0.66666669, 0.33333334, 1.0, v18, v9);
  v31 = v17;
  v30 = v19;
  v32 = v25;
  h = v20;
  ScrPlace_ApplyRect(scrPlace, &h, &v32, &v30, &v31, v15, v14);
  CL_DrawStretchPicPhysical(h, v32, v30, v31, 0.33333334, 0.66666669, 0.66666669, 1.0, v18, v9);
  v30 = *(float *)&material;
  v31 = v17;
  v32 = v25;
  h = v21;
  ScrPlace_ApplyRect(scrPlace, &h, &v32, &v30, &v31, v15, v14);
  CL_DrawStretchPicPhysical(h, v32, v30, v31, 0.66666669, 0.66666669, 1.0, 1.0, v18, v9);
}

/*
==============
CL_DrawQuadPicPhysicalST
==============
*/
void CL_DrawQuadPicPhysicalST(const vec2_t *verts, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v7; 
  float s0; 
  float t0; 
  float s1a; 

  s1a = s2;
  t0 = t1;
  s0 = s1;
  v7 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s0, &s1a, &t0, &t2);
  R_AddCmdDrawQuadPicST(verts, s0, t0, s1a, t2, color, v7);
}

/*
==============
CL_DrawRect
==============
*/
void CL_DrawRect(const int x, const int y, const int width, const int height, const vec4_t *color)
{
  Material *material; 
  float h; 
  float w; 
  float ya; 
  float xa; 

  material = cls.whiteMaterial;
  h = (float)height;
  w = (float)width;
  ya = (float)y;
  xa = (float)x;
  ScrPlace_ApplyRect(&scrPlaceFull, &xa, &ya, &w, &h, 1, 1);
  CL_DrawStretchPicPhysical(xa, ya, w, h, 0.0, 0.0, 0.0, 0.0, color, material);
}

/*
==============
CL_DrawRotatedStretchPicWithoutSplitScreenScaling
==============
*/
void CL_DrawRotatedStretchPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, float angle, bool pivotTopLeft, const vec4_t *color, Material *material)
{
  Material *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 

  v22 = w;
  v21 = y;
  v20 = x;
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, &v20, &v21, &v22, &h, horzAlign, vertAlign);
  v15 = material;
  v16 = h;
  v17 = v22;
  v18 = v21;
  v19 = v20;
  Material_Process2DTextureCoordsForAtlasing(material, &s1, &s2, &t1, &t2);
  R_AddCmdDrawStretchPicRotateXY(v19, v18, v17, v16, s1, t1, s2, t2, angle, pivotTopLeft, 1, color, v15);
}

/*
==============
CL_DrawStretchPic
==============
*/
void CL_DrawStretchPic(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  float v13; 
  float v14; 
  float v15; 

  v15 = w;
  v14 = y;
  v13 = x;
  ScrPlace_ApplyRect(scrPlace, &v13, &v14, &v15, &h, horzAlign, vertAlign);
  CL_DrawStretchPicPhysical(v13, v14, v15, h, s1, t1, s2, t2, color, material);
}

/*
==============
CL_DrawStretchPicFlipST
==============
*/
void CL_DrawStretchPicFlipST(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  v20 = w;
  v19 = y;
  v18 = x;
  ScrPlace_ApplyRect(scrPlace, &v18, &v19, &v20, &h, horzAlign, vertAlign);
  v13 = material;
  v14 = h;
  v15 = v20;
  v16 = v19;
  v17 = v18;
  Material_Process2DTextureCoordsForAtlasing(material, &s1, &s2, &t1, &t2);
  R_AddCmdDrawStretchPicFlipST(v17, v16, v15, v14, s1, t1, s2, t2, color, v13);
}

/*
==============
CL_DrawStretchPicPhysical
==============
*/
void CL_DrawStretchPicPhysical(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v10; 

  v10 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s1, &s2, &t1, &t2);
  R_AddCmdDrawStretchPic(x, y, w, h, s1, t1, s2, t2, color, v10);
}

/*
==============
CL_DrawStretchPicPhysicalFlipST
==============
*/
void CL_DrawStretchPicPhysicalFlipST(float x, float y, float w, float h, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v10; 

  v10 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s1, &s2, &t1, &t2);
  R_AddCmdDrawStretchPicFlipST(x, y, w, h, s1, t1, s2, t2, color, v10);
}

/*
==============
CL_DrawStretchPicPhysicalRotateXY
==============
*/
void CL_DrawStretchPicPhysicalRotateXY(float x, float y, float w, float h, float s1, float t1, float s2, float t2, float angle, bool pivotTopLeft, const vec4_t *color, Material *material)
{
  Material *v12; 

  v12 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s1, &s2, &t1, &t2);
  R_AddCmdDrawStretchPicRotateXY(x, y, w, h, s1, t1, s2, t2, angle, pivotTopLeft, 1, color, v12);
}

/*
==============
CL_DrawStretchPicPhysicalRotatedST
==============
*/
void CL_DrawStretchPicPhysicalRotatedST(const vec2_t *verts, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  Material *v12; 

  v12 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &minS, &maxS, &minT, &maxT);
  R_AddCmdDrawStretchPicRotateST(verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, color, v12);
}

/*
==============
CL_DrawStretchPicRotatedST
==============
*/
void CL_DrawStretchPicRotatedST(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  const vec4_t *v18; 
  Material *v19; 
  float xa; 
  float ya; 
  float wa; 
  vec2_t verts; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 

  v18 = color;
  v19 = material;
  xa = x;
  ya = y;
  wa = w;
  ScrPlace_ApplyRect(scrPlace, &xa, &ya, &wa, &h, horzAlign, vertAlign);
  Material_Process2DTextureCoordsForAtlasing(v19, &minS, &maxS, &minT, &maxT);
  v24 = xa + wa;
  v26 = xa + wa;
  v27 = ya + h;
  v29 = ya + h;
  verts.v[0] = xa;
  verts.v[1] = ya;
  v25 = ya;
  v28 = xa;
  R_AddCmdDrawStretchPicRotateST(&verts, centerS, centerT, scaleFinalS, scaleFinalT, minS, maxS, minT, maxT, angle, v18, v19);
}

/*
==============
CL_DrawStretchPicWithoutSplitScreenScaling
==============
*/
void CL_DrawStretchPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  float v13; 
  float v14; 
  float v15; 

  v15 = w;
  v14 = y;
  v13 = x;
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, &v13, &v14, &v15, &h, horzAlign, vertAlign);
  CL_DrawStretchPicPhysical(v13, v14, v15, h, s1, t1, s2, t2, color, material);
}

/*
==============
CL_DrawString
==============
*/
void CL_DrawString(int x, int y, const char *pszString, int bShadow, int iCharHeight)
{
  CG_DrawStringExt(&scrPlaceFull, (float)x, (float)y, pszString, &colorWhite, 0, bShadow, (float)iCharHeight, 1);
}

/*
==============
CL_DrawText
==============
*/
void CL_DrawText(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const vec4_t *color, int style)
{
  float v15; 
  float v16; 
  const FontGlowStyle *glowStyle; 
  bool usePost; 

  v15 = yScale;
  v16 = xScale;
  ScrPlace_ApplyRect(scrPlace, &x, &y, &xScale, &yScale, horzAlign, vertAlign);
  R_TextHeight(font);
  xScale = v16 / v15;
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  R_AddCmdDrawText(text, maxChars, font, (int)*(float *)&_XMM3, x, y, xScale, 1.0, 0.0, color, glowStyle, usePost);
}

/*
==============
CL_DrawTextPhysical
==============
*/
void CL_DrawTextPhysical(const char *text, int maxChars, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  const FontGlowStyle *glowStyle; 
  bool usePost; 

  R_TextHeight(font);
  _XMM0 = 0i64;
  __asm { vroundss xmm6, xmm0, xmm2, 1 }
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  R_AddCmdDrawText(text, maxChars, font, (int)*(float *)&_XMM6, x, y, xScale / yScale, 1.0, 0.0, color, glowStyle, usePost);
}

/*
==============
CL_DrawTextPhysicalWithCursor
==============
*/
void CL_DrawTextPhysicalWithCursor(const char *text, int maxChars, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style, int cursorPos, char cursor)
{
  const FontGlowStyle *glowStyle; 
  bool usePost; 

  if ( yScale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 457, ASSERT_TYPE_ASSERT, "(yScale > 0.0f)", (const char *)&queryFormat, "yScale > 0.0f") )
    __debugbreak();
  R_TextHeight(font);
  _XMM0 = 0i64;
  __asm { vroundss xmm6, xmm0, xmm3, 1 }
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  R_AddCmdDrawTextWithCursor(text, maxChars, font, NULL, (int)*(float *)&_XMM6, x, y, xScale / yScale, 1.0, 0, 0.0, color, glowStyle, usePost, cursorPos, cursor, 0, 0, NULL);
}

/*
==============
CL_DrawTextPhysicalWithEffects
==============
*/
void CL_DrawTextPhysicalWithEffects(const char *text, int maxChars, GfxFont *font, float x, float y, float xScale, float yScale, const vec4_t *color, int style, const vec4_t *glowColor, Material *fxMaterial, Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime)
{
  const FontGlowStyle *LegacyFontStyle; 
  bool v18; 
  int v19; 

  LegacyFontStyle = R_Font_GetLegacyFontStyle(style);
  v18 = R_Font_UsePost(style);
  v19 = R_TextHeight(font);
  R_AddCmdDrawText(text, maxChars, font, v19, x, y, xScale, yScale, 0.0, color, LegacyFontStyle, v18);
}

/*
==============
CL_DrawTextWithCursor
==============
*/
void CL_DrawTextWithCursor(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const vec4_t *color, int style, int cursorPos, char cursor)
{
  float v17; 
  float v18; 
  const FontGlowStyle *glowStyle; 
  bool usePost; 

  v17 = yScale;
  v18 = xScale;
  ScrPlace_ApplyRect(scrPlace, &x, &y, &xScale, &yScale, horzAlign, vertAlign);
  R_TextHeight(font);
  xScale = v18 / v17;
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  R_AddCmdDrawTextWithCursor(text, maxChars, font, NULL, (int)*(float *)&_XMM3, x, y, xScale, 1.0, 0, 0.0, color, glowStyle, usePost, cursorPos, cursor, 0, 0, NULL);
}

/*
==============
CL_GetDebugViewPos
==============
*/
void CL_GetDebugViewPos(vec3_t *pos)
{
  *pos = cls.debugRenderPos;
}

/*
==============
CL_GetExtrapolatedCmd
==============
*/
char CL_GetExtrapolatedCmd(const LocalClientNum_t localClientNum, usercmd_s *outCmd)
{
  ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v6; 
  int v7; 
  int v8; 
  __int64 v10; 
  unsigned __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  usercmd_s *v14; 
  usercmd_s *p_extrapCmd; 
  char *fmt; 
  unsigned __int64 v17; 
  UserCommandStateFlags v18; 
  int v19; 
  int v20; 

  if ( !outCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 145, ASSERT_TYPE_ASSERT, "(outCmd)", (const char *)&queryFormat, "outCmd", -2i64) )
    __debugbreak();
  memset_0(outCmd, 0, sizeof(usercmd_s));
  if ( Com_GameIsPaused() || !Com_UseConstantUserCommandTime() )
    return 0;
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v6 = ClActiveClient::GetClient(localClientNum);
  v7 = ClActiveClient_GetCmdNumber(v6);
  v8 = v7;
  v20 = v7;
  if ( CmdNumber > v7 )
  {
    LODWORD(fmt) = v7;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= v8 - 128 || CmdNumber <= 0 )
  {
    memset(&v20, 0, sizeof(v20));
    return 0;
  }
  v10 = (__int64)&v6->cmds[CmdNumber & 0x7F];
  memset(&v20, 0, sizeof(v20));
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
    __debugbreak();
  v11 = &v17;
  v12 = 2i64;
  v13 = 2i64;
  do
  {
    *(__m256i *)v11 = *(__m256i *)v10;
    *((__m256i *)v11 + 1) = *(__m256i *)(v10 + 32);
    *((__m256i *)v11 + 2) = *(__m256i *)(v10 + 64);
    *((_OWORD *)v11 + 6) = *(_OWORD *)(v10 + 96);
    v11 += 16;
    *((_OWORD *)v11 - 1) = *(_OWORD *)(v10 + 112);
    v10 += 128i64;
    --v13;
  }
  while ( v13 );
  *v11 = *(_QWORD *)v10;
  if ( Client->extrapCmd.commandTime <= v19 )
    return 0;
  v14 = outCmd;
  p_extrapCmd = &Client->extrapCmd;
  do
  {
    *(_OWORD *)&v14->buttons = *(_OWORD *)&p_extrapCmd->buttons;
    *(_OWORD *)&v14->commandTime = *(_OWORD *)&p_extrapCmd->commandTime;
    *(_OWORD *)(&v14->angles.xy + 1) = *(_OWORD *)(&p_extrapCmd->angles.xy + 1);
    *(_OWORD *)&v14->weapon.weaponOthers = *(_OWORD *)&p_extrapCmd->weapon.weaponOthers;
    *(_OWORD *)&v14->weapon.attachmentVariationIndices[1] = *(_OWORD *)&p_extrapCmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v14->weapon.attachmentVariationIndices[17] = *(_OWORD *)&p_extrapCmd->weapon.attachmentVariationIndices[17];
    *(_OWORD *)&v14->offHand.weaponIdx = *(_OWORD *)&p_extrapCmd->offHand.weaponIdx;
    v14 = (usercmd_s *)((char *)v14 + 128);
    *(_OWORD *)&v14[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_extrapCmd->offHand.weaponAttachments[2];
    p_extrapCmd = (usercmd_s *)((char *)p_extrapCmd + 128);
    --v12;
  }
  while ( v12 );
  v14->buttons = p_extrapCmd->buttons;
  outCmd->buttons = v17;
  outCmd->stateFlags = v18;
  return 1;
}

/*
==============
CL_GetMaxPitchSpeed
==============
*/
float CL_GetMaxPitchSpeed(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 
  float maxPitchSpeed; 
  float v7; 
  float v8; 
  float v9; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  _XMM2 = 0i64;
  maxPitchSpeed = Client->turnRateCapInfos[1].maxPitchSpeed;
  __asm
  {
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  if ( maxPitchSpeed > 0.0 && (*(float *)&_XMM0 == 0.0 || maxPitchSpeed < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client->turnRateCapInfos[1].maxPitchSpeed;
  v7 = Client->turnRateCapInfos[2].maxPitchSpeed;
  if ( v7 > 0.0 && (*(float *)&_XMM0 == 0.0 || v7 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client->turnRateCapInfos[2].maxPitchSpeed;
  v8 = Client->turnRateCapInfos[3].maxPitchSpeed;
  if ( v8 > 0.0 && (*(float *)&_XMM0 == 0.0 || v8 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client->turnRateCapInfos[3].maxPitchSpeed;
  v9 = Client->turnRateCapInfos[4].maxPitchSpeed;
  if ( v9 > 0.0 && (*(float *)&_XMM0 == 0.0 || v9 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client->turnRateCapInfos[4].maxPitchSpeed;
  return *(float *)&_XMM0;
}

/*
==============
CL_GetMaxYawSpeed
==============
*/
float CL_GetMaxYawSpeed(LocalClientNum_t localClientNum)
{
  float *Client; 
  float v4; 
  float v7; 
  float v8; 
  float v9; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 556, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Client = (float *)ClActiveClient::GetClient(localClientNum);
  _XMM2 = 0i64;
  v4 = Client[75];
  __asm
  {
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  if ( v4 > 0.0 && (*(float *)&_XMM0 == 0.0 || v4 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client[75];
  v7 = Client[77];
  if ( v7 > 0.0 && (*(float *)&_XMM0 == 0.0 || v7 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client[77];
  v8 = Client[79];
  if ( v8 > 0.0 && (*(float *)&_XMM0 == 0.0 || v8 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client[79];
  v9 = Client[81];
  if ( v9 > 0.0 && (*(float *)&_XMM0 == 0.0 || v9 < *(float *)&_XMM0) )
    *(float *)&_XMM0 = Client[81];
  return *(float *)&_XMM0;
}

/*
==============
CL_GetSceneDimensions
==============
*/
void CL_GetSceneDimensions(int *width, int *height, float *aspect)
{
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 116, ASSERT_TYPE_ASSERT, "(width)", (const char *)&queryFormat, "width") )
    __debugbreak();
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 117, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  *width = cls.vidConfig.sceneWidth;
  *height = cls.vidConfig.sceneHeight;
  *aspect = cls.vidConfig.sceneAspectRatio;
}

/*
==============
CL_GetScreenAspectRatioDisplayPixel
==============
*/
float CL_GetScreenAspectRatioDisplayPixel()
{
  return cls.vidConfig.aspectRatioDisplayPixel;
}

/*
==============
CL_GetScreenDimensions
==============
*/
void CL_GetScreenDimensions(int *width, int *height, float *aspect)
{
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 98, ASSERT_TYPE_ASSERT, "(width)", (const char *)&queryFormat, "width") )
    __debugbreak();
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 99, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  if ( !aspect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 100, ASSERT_TYPE_ASSERT, "(aspect)", (const char *)&queryFormat, "aspect") )
    __debugbreak();
  *width = cls.vidConfig.displayWidth;
  *height = cls.vidConfig.displayHeight;
  *aspect = cls.vidConfig.windowAspectRatio;
}

/*
==============
CL_LookupColor
==============
*/
void CL_LookupColor(LocalClientNum_t localClientNum, unsigned __int8 c, vec4_t *outColor)
{
  unsigned int v5; 
  unsigned int v6; 
  const vec4_t *v7; 

  v5 = ColorIndex(c);
  if ( v5 >= 0x11 )
  {
    switch ( c )
    {
      case '8':
        *outColor = s_colorMyTeam;
        break;
      case '9':
        *outColor = s_colorEnemyTeam;
        break;
      case ':':
        *outColor = s_colorMyParty;
        break;
      default:
        outColor->v[0] = 1.0;
        outColor->v[1] = 1.0;
        outColor->v[2] = 1.0;
        outColor->v[3] = 1.0;
        break;
    }
  }
  else
  {
    v6 = v5 + 17 * r_colorTable->current.integer;
    if ( v6 >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 625, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( ( sizeof( *array_counter( COLOR_TABLE ) ) + 0 ) )", "tableIndex doesn't index ARRAY_COUNT( COLOR_TABLE )\n\t%i not in [0, %i)", v5 + 17 * r_colorTable->current.integer, 34) )
      __debugbreak();
    v7 = &COLOR_TABLE[v6];
    outColor->v[0] = v7->v[0];
    outColor->v[1] = v7->v[1];
    outColor->v[2] = v7->v[2];
    outColor->v[3] = v7->v[3];
  }
}

/*
==============
CL_ProjectionSet2D
==============
*/

void CL_ProjectionSet2D(void)
{
  R_AddCmdProjectionSet2D();
}

/*
==============
CL_ProjectionSet3D
==============
*/

void CL_ProjectionSet3D(void)
{
  R_AddCmdProjectionSet3D();
}

/*
==============
CL_RenderScene
==============
*/
void CL_RenderScene(LocalClientNum_t localClientNum, const refdef_t *refdef, unsigned int drawType)
{
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  cg_t *LocalClientGlobals; 
  unsigned int v10; 
  int v11; 
  float v12; 
  int v13; 
  __int128 v14; 
  __int64 v15; 
  int viewInfoIndex[4]; 
  bitarray<384> v17; 
  GfxViewportFeatures outViewportFeatures; 

  p_view = &refdef->view;
  if ( refdef == (const refdef_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(cls.debugRenderPos.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  LODWORD(cls.debugRenderPos.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  LODWORD(cls.debugRenderPos.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
  R_GetNextViewInfoIndex(viewInfoIndex);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 198, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->prevViewIndex = viewInfoIndex[0];
  v10 = Sys_Milliseconds();
  Material_SetTextureAtlasTime(v10);
  cls.startedMainThreadRenderLoop = 1;
  R_SetupDefaultViewportFeatures(&outViewportFeatures);
  v11 = *((_DWORD *)&outViewportFeatures + 10) | 0x2000;
  *((_DWORD *)&outViewportFeatures + 10) |= 0x2000u;
  if ( refdef->localClientNum != localClientNum )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 210, ASSERT_TYPE_ASSERT, "(refdef->localClientNum == localClientNum)", (const char *)&queryFormat, "refdef->localClientNum == localClientNum") )
      __debugbreak();
    v11 = *((_DWORD *)&outViewportFeatures + 10);
  }
  *((_DWORD *)&outViewportFeatures + 10) = v11 | 0x4000;
  *((_DWORD *)&outViewportFeatures + 10) = v11 & 0xCFFFBFFF | 0x4000 | (LocalClientGlobals->dualViewScope << 28);
  if ( !R_Get_IsPipClientView() )
  {
    v12 = cl_maxLocalClients;
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
    {
      LODWORD(v15) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, cl_maxLocalClients) )
        __debugbreak();
      v12 = cl_maxLocalClients;
    }
    if ( v12 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
      __debugbreak();
    if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    v13 = 0;
    if ( localClientNum == cls.m_localClientsActive.firstActiveIndex )
      v13 = 0x20000000;
    *((_DWORD *)&outViewportFeatures + 10) = *((_DWORD *)&outViewportFeatures + 10) & 0xDFFFFFFF | v13;
  }
  v14 = *(_OWORD *)&LocalClientGlobals->umbraGateStates.array[8];
  *(__m256i *)v17.array = *(__m256i *)LocalClientGlobals->umbraGateStates.array;
  *(_OWORD *)&v17.array[8] = v14;
  R_Umbra_SetScriptedGateStates(&v17);
  outViewportFeatures.m_postAAMode = R_GetGlobalPostAAMode();
  if ( r_gpShowStats->current.integer > 0 || r_showStats->current.integer > 0 )
    R_TrackStatistics();
  else
    R_TrackStatisticsStop();
  R_RenderScene(refdef, 1.0, drawType, &outViewportFeatures);
}

/*
==============
CL_SetADS
==============
*/
void CL_SetADS(LocalClientNum_t localClientNum, bool ads)
{
  ClActiveClient::GetClient(localClientNum)->usingAds = ads;
}

/*
==============
CL_SetExtraButtons
==============
*/
void CL_SetExtraButtons(LocalClientNum_t localClientNum, unsigned __int64 buttons)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  Client->cgameExtraButtons |= buttons;
}

/*
==============
CL_SetFOVSensitivityScale
==============
*/
void CL_SetFOVSensitivityScale(LocalClientNum_t localClientNum, float scale)
{
  ClActiveClient::GetClient(localClientNum)->cgameFOVSensitivityScale = scale;
}

/*
==============
CL_SetFullScreenViewport
==============
*/
void CL_SetFullScreenViewport(void)
{
  R_AddCmdSetViewportValues(0, 0, cls.vidConfig.displayWidth, cls.vidConfig.displayHeight);
}

/*
==============
CL_SetInputAccumTime
==============
*/
void CL_SetInputAccumTime(LocalClientNum_t localClientNum, int accumInputTimeMs)
{
  ClActiveClient::GetClient(localClientNum)->cmdInputAccumTimeMs = accumInputTimeMs;
}

/*
==============
CL_SetUserCmdWeapons
==============
*/
void CL_SetUserCmdWeapons(LocalClientNum_t localClientNum, const Weapon *weapon, const Weapon *offHand, int useAltMode)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v8; 
  bool IsWeaponValid; 
  ClActiveClient *Client; 
  bool v11; 
  const Weapon *v12; 
  int v13; 
  int v14; 
  __m256i v15; 
  BOOL IsFauxFists; 
  Weapon *v17; 
  bool v18; 

  v4 = localClientNum;
  BG_AssertOffhandIndexOrNone(offHand);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 709, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v4];
  IsWeaponValid = BG_IsWeaponValid(v8, &LocalClientGlobals->predictedPlayerState, weapon);
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v4);
  v11 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  v18 = v11;
  if ( IsWeaponValid || !v11 )
  {
    *(__m256i *)&Client->cgameUserCmdWeapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
    *(_OWORD *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    *(double *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
    *(_DWORD *)&Client->cgameUserCmdWeapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 682, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 684, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_IsThrowingAxe(weapon) )
    {
      IsFauxFists = BG_IsFauxFists(&LocalClientGlobals->predictedPlayerState, weapon, 0);
      Client->cgameUserCmdAlternate = IsFauxFists;
      LocalClientGlobals->weaponSelectInAlt = IsFauxFists;
    }
    else
    {
      Client->cgameUserCmdAlternate = useAltMode != 0;
    }
  }
  else
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v12 = BgWeaponMap::GetWeapon(v8, LocalClientGlobals->predictedPlayerState.weapCommon.weaponHandle);
    if ( BG_IsWeaponMeleeOverride(v8, &LocalClientGlobals->predictedPlayerState, v12) )
    {
      if ( BG_IsWeaponValid(v8, &LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->weaponLatestPrimary) )
      {
        *(__m256i *)&Client->cgameUserCmdWeapon.weaponIdx = *(__m256i *)&LocalClientGlobals->weaponLatestPrimary.weaponIdx;
        *(_OWORD *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[5] = *(_OWORD *)&LocalClientGlobals->weaponLatestPrimary.attachmentVariationIndices[5];
        *(double *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[21] = *(double *)&LocalClientGlobals->weaponLatestPrimary.attachmentVariationIndices[21];
        v13 = *(_DWORD *)&LocalClientGlobals->weaponLatestPrimary.weaponCamo;
      }
      else
      {
        *(__m256i *)&Client->cgameUserCmdWeapon.weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
        *(_OWORD *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[5] = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
        *(double *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
        v13 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      }
    }
    else
    {
      *(__m256i *)&Client->cgameUserCmdWeapon.weaponIdx = *(__m256i *)&v12->weaponIdx;
      *(_OWORD *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[5] = *(_OWORD *)&v12->attachmentVariationIndices[5];
      *(double *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[21] = *(double *)&v12->attachmentVariationIndices[21];
      v13 = *(_DWORD *)&v12->weaponCamo;
    }
    v14 = 1;
    *(_DWORD *)&Client->cgameUserCmdWeapon.weaponCamo = v13;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x1Bu) )
      v14 = 0;
    v15 = *(__m256i *)&Client->cgameUserCmdWeapon.weaponIdx;
    Client->cgameUserCmdAlternate = v14;
    *(__m256i *)&LocalClientGlobals->weaponSelect.weaponIdx = v15;
    *(_OWORD *)&LocalClientGlobals->weaponSelect.attachmentVariationIndices[5] = *(_OWORD *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[5];
    *(double *)&LocalClientGlobals->weaponSelect.attachmentVariationIndices[21] = *(double *)&Client->cgameUserCmdWeapon.attachmentVariationIndices[21];
    *(_DWORD *)&LocalClientGlobals->weaponSelect.weaponCamo = *(_DWORD *)&Client->cgameUserCmdWeapon.weaponCamo;
    LocalClientGlobals->weaponSelectInAlt = Client->cgameUserCmdAlternate;
  }
  if ( !BG_IsWeaponValid(v8, &LocalClientGlobals->predictedPlayerState, offHand) && offHand->weaponIdx && v18 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v17 = (Weapon *)BgWeaponMap::GetWeapon(v8, LocalClientGlobals->predictedPlayerState.weapCommon.offHandHandle);
    Client->cgameUserCmdOffHand = *v17;
    LocalClientGlobals->equippedOffHand = *v17;
  }
  else
  {
    *(__m256i *)&Client->cgameUserCmdOffHand.weaponIdx = *(__m256i *)&offHand->weaponIdx;
    *(_OWORD *)&Client->cgameUserCmdOffHand.attachmentVariationIndices[5] = *(_OWORD *)&offHand->attachmentVariationIndices[5];
    *(double *)&Client->cgameUserCmdOffHand.attachmentVariationIndices[21] = *(double *)&offHand->attachmentVariationIndices[21];
    *(_DWORD *)&Client->cgameUserCmdOffHand.weaponCamo = *(_DWORD *)&offHand->weaponCamo;
  }
}

/*
==============
CL_SetUserCmdWeapons_OverrideAltMode
==============
*/
bool CL_SetUserCmdWeapons_OverrideAltMode(cg_t *cgameGlob, ClActiveClient *cl, const playerState_s *ps, const Weapon *r_weapon)
{
  bool v8; 
  bool result; 
  int v10; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 682, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 683, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 684, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsThrowingAxe(r_weapon) )
    return 0;
  v8 = !BG_IsFauxFists(ps, r_weapon, 0);
  result = 1;
  v10 = !v8;
  cl->cgameUserCmdAlternate = v10;
  cgameGlob->weaponSelectInAlt = v10;
  return result;
}

/*
==============
CL_SetUserCommandClearStateFlag
==============
*/
void CL_SetUserCommandClearStateFlag(const LocalClientNum_t localClientNum, const UserCommandStateFlags flag)
{
  ClActiveClient *Client; 
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 1044, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  Client = ClActiveClient::GetClient(localClientNum);
  Client->cgameUserCmdStateFlags &= ~flag;
}

/*
==============
CL_SetUserCommandSetStateFlag
==============
*/
void CL_SetUserCommandSetStateFlag(const LocalClientNum_t localClientNum, const UserCommandStateFlags flag)
{
  ClActiveClient *Client; 
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 1036, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  Client = ClActiveClient::GetClient(localClientNum);
  Client->cgameUserCmdStateFlags |= flag;
}

/*
==============
CL_SetViewport
==============
*/

void __fastcall CL_SetViewport(int x, int y, int width, int height)
{
  R_AddCmdSetViewportValues(x, y, width, height);
}

/*
==============
CL_SetupScreenPlacements
==============
*/
void CL_SetupScreenPlacements(void)
{
  int v0; 
  LocalClientNum_t v1; 
  bool *p_cgameInitCalled; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  v1 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
    goto LABEL_10;
  p_cgameInitCalled = &clientUIActives[0].cgameInitCalled;
  do
  {
    if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v4) = 2;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( *p_cgameInitCalled )
      CG_View_SetScreenView(v1, v0++, SLODWORD(cl_maxLocalClients));
    ++v1;
    p_cgameInitCalled += 440;
  }
  while ( v1 < SLODWORD(cl_maxLocalClients) );
  if ( !v0 )
LABEL_10:
    ScrPlace_SetupClientViewports();
}

/*
==============
CL_SubtitlePrint
==============
*/
void CL_SubtitlePrint(LocalClientNum_t localClientNum, const char *text, int duration, int pixelWidth, bool forceSubtitleShown)
{
  int ControllerFromClient; 
  char *String; 
  const dvar_t *v11; 
  const dvar_t *v12; 

  if ( forceSubtitleShown || (ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum), GamerProfile_SubtitlesEnabled(ControllerFromClient)) )
  {
    String = (char *)SEH_StringEd_GetString(text);
    if ( !String )
    {
      v11 = DCONST_DVARBOOL_loc_warnings;
      if ( !DCONST_DVARBOOL_loc_warnings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warnings") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
      {
        v12 = DCONST_DVARBOOL_loc_warningsAsErrors;
        if ( !DCONST_DVARBOOL_loc_warningsAsErrors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warningsAsErrors") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.enabled )
          Com_Error_impl(ERR_LOCALIZATION, (const ObfuscateErrorText)&stru_1441ECA20, 321i64, text);
        else
          Com_PrintWarning(14, "WARNING: Could not translate subtitle text: \"%s\"\n", text);
        String = j_va("^1UNLOCALIZED(^7%s^1)^7", text);
      }
      else
      {
        String = (char *)text;
      }
    }
    CL_ConsolePrint(localClientNum, 4, String, duration, pixelWidth, 32 * (forceSubtitleShown + 1));
  }
}

/*
==============
CL_SubtitlesEnabled
==============
*/
bool CL_SubtitlesEnabled(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return GamerProfile_SubtitlesEnabled(ControllerFromClient);
}

/*
==============
CL_UpdateColor
==============
*/
void CL_UpdateColor(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] || !clientUIActives[v1].cgameInitialized )
  {
    CL_LookupColor((LocalClientNum_t)v1, 0x36u, &s_colorMyTeam);
    CL_LookupColor((LocalClientNum_t)v1, 0x36u, &s_colorEnemyTeam);
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    LocalClientGlobals->GetTeamColors(LocalClientGlobals, &s_colorMyTeam, &s_colorEnemyTeam);
  }
  Dvar_GetUnpackedColorByName("MTSKSOSTML", &s_colorMyParty);
  s_colorMyParty.v[3] = FLOAT_1_0;
  R_UpdateTeamColors(&s_colorMyTeam, &s_colorEnemyTeam, &s_colorMyParty);
}

/*
==============
CL_UpdateExtraButtons
==============
*/
void CL_UpdateExtraButtons(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  int ControllerFromClient; 
  bool sprintCancelsReload; 
  bool v5; 
  bool v6; 
  bool AutoMantleAirborne; 
  bool IsWeaponInspectOnAltToggle; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int8 GamepadUseReloadProfile; 
  bool UseHoldKBMProfile; 
  unsigned __int64 extraButtons; 
  unsigned __int64 v17; 
  bool DefaultJuggMusicEnabled; 
  unsigned __int64 v19; 
  const dvar_t *v20; 
  bool IsAutoSprintEnabled; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  cg_t *v25; 
  int v26; 
  NightVisionIntent nvgIntent; 
  __int32 v28; 
  __int64 v29; 
  ActionSlotType *actionSlotType; 
  __int64 v31; 
  const dvar_t *v32; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  sprintCancelsReload = GamerProfile_GetProfileSettings(ControllerFromClient)->config.sprintCancelsReload;
  if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v1) )
    v5 = GamerProfile_HoldGrenadeEnabled(ControllerFromClient);
  else
    v5 = GamerProfile_HoldGrenadeEnabledKBM(ControllerFromClient);
  v6 = v5;
  AutoMantleAirborne = GamerProfile_GetAutoMantleAirborne(ControllerFromClient);
  IsWeaponInspectOnAltToggle = CG_IsWeaponInspectOnAltToggle((LocalClientNum_t)v1);
  v9 = LocalClientGlobals->extraButtons | 0x2000000000i64;
  if ( !sprintCancelsReload )
    v9 = LocalClientGlobals->extraButtons & 0xFFFFFFDFFFFFFFFFui64;
  v10 = v9 & 0xFFEFFFFFFFFFFFFFui64;
  v11 = v9 | 0x10000000000000i64;
  if ( !v6 )
    v11 = v10;
  v12 = v11 | 0x400000000000000i64;
  v13 = v11 & 0xFBFFFFFFFFFFFFFFui64;
  if ( AutoMantleAirborne )
    v13 = v12;
  LocalClientGlobals->extraButtons = v13;
  if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v1) )
  {
    GamepadUseReloadProfile = GamerProfile_GetGamepadUseReloadProfile(ControllerFromClient);
    if ( GamepadUseReloadProfile )
    {
      if ( GamepadUseReloadProfile == 1 )
      {
        LocalClientGlobals->extraButtons = LocalClientGlobals->extraButtons & 0xCFFFFFFFFFFFFFFFui64 | 0x1000000000000000i64;
      }
      else if ( GamepadUseReloadProfile == 2 )
      {
        LocalClientGlobals->extraButtons |= 0x3000000000000000ui64;
      }
    }
    else
    {
      LocalClientGlobals->extraButtons &= 0xCFFFFFFFFFFFFFFFui64;
    }
  }
  else
  {
    LocalClientGlobals->extraButtons &= ~0x1000000000000000ui64;
    UseHoldKBMProfile = GamerProfile_GetUseHoldKBMProfile(ControllerFromClient);
    extraButtons = LocalClientGlobals->extraButtons;
    if ( UseHoldKBMProfile )
      v17 = extraButtons | 0x2000000000000000i64;
    else
      v17 = extraButtons & 0xDFFFFFFFFFFFFFFFui64;
    LocalClientGlobals->extraButtons = v17;
  }
  DefaultJuggMusicEnabled = GamerProfile_GetDefaultJuggMusicEnabled(ControllerFromClient);
  v19 = LocalClientGlobals->extraButtons & 0xBFFFFFFFFFFFFFFFui64;
  if ( DefaultJuggMusicEnabled )
    v19 = LocalClientGlobals->extraButtons | 0x4000000000000000i64;
  LocalClientGlobals->extraButtons = v19;
  v20 = DVARBOOL_auto_sprint_enabled;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    IsAutoSprintEnabled = CL_Input_IsAutoSprintEnabled((const LocalClientNum_t)v1);
    v22 = LocalClientGlobals->extraButtons;
    if ( IsAutoSprintEnabled )
      v23 = v22 | 0x4000000000000i64;
    else
      v23 = v22 & 0xFFFBFFFFFFFFFFFFui64;
    LocalClientGlobals->extraButtons = v23;
  }
  v24 = LocalClientGlobals->extraButtons | 0x400000000i64;
  if ( !LocalClientGlobals->isJogging )
    v24 = LocalClientGlobals->extraButtons & 0xFFFFFFFBFFFFFFFFui64;
  LocalClientGlobals->extraButtons = v24;
  v25 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v26 = 0;
  nvgIntent = v25->nvgInfo.nvgIntent;
  if ( nvgIntent )
  {
    v28 = nvgIntent - 1;
    if ( v28 )
    {
      if ( v28 != 1 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 810, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnhandled nvg intent type.", "0") )
          __debugbreak();
        goto LABEL_44;
      }
      if ( BG_IsUsingNightVision(&v25->predictedPlayerState) )
        goto LABEL_42;
    }
    else if ( !BG_IsUsingNightVision(&v25->predictedPlayerState) )
    {
LABEL_42:
      v25->extraButtons |= 0x10000ui64;
    }
    v25->nvgInfo.nvgIntent = NONE;
  }
LABEL_44:
  v29 = 0i64;
  actionSlotType = LocalClientGlobals->predictedPlayerState.actionSlotType;
  do
  {
    if ( CG_Weapons_ActionSlotUsageAllowed(LocalClientGlobals, v26) )
    {
      v31 = 68 * v1 + v29 + 58;
      if ( g_playersKb[0][v31].active && IsWeaponInspectOnAltToggle && *actionSlotType == ACTIONSLOTTYPE_ALTWEAPONTOGGLE && !g_playersKb[0][v31].mustRelease )
      {
        v32 = DCONST_DVARINT_cl_weaponInspectAltToggle_holdTime_ms;
        if ( !DCONST_DVARINT_cl_weaponInspectAltToggle_holdTime_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_weaponInspectAltToggle_holdTime_ms") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        if ( v32->current.integer <= (signed int)(com_frameTime - g_playersKb[0][v31].downtime) )
        {
          LocalClientGlobals->extraButtons |= 0x100000000000ui64;
          g_playersKb[0][v31].mustRelease = 1;
        }
      }
    }
    ++v26;
    ++v29;
    ++actionSlotType;
  }
  while ( v26 < 7 );
}

