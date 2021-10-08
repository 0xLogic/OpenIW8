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

void __fastcall CL_CapTurnRate(LocalClientNum_t localClientNum, const TurnRateCapType capType, double maxPitchSpeed, double maxYawSpeed)
{
  __int64 v13; 
  __int64 v15; 
  int v16; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = capType;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 521, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v16) )
      __debugbreak();
  }
  if ( (unsigned int)_RBX >= 5 )
  {
    LODWORD(v15) = 5;
    LODWORD(v13) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( capType ) ) < (unsigned)( TURNRATECAPTYPE_COUNT )", "static_cast<int>( capType ) doesn't index TURNRATECAPTYPE_COUNT\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  _RAX = ClActiveClient::GetClient(localClientNum);
  __asm
  {
    vmovss  dword ptr [rax+rbx*8+120h], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rax+rbx*8+124h], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
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

void __fastcall CL_Draw3DQuadPicPhysicalST(const vec3_t *verts, double s1, double t1, double s2, float t2, const vec4_t *color, Material *material)
{
  Material *v7; 
  float t1a; 
  float s0; 
  float t0; 
  float s1a; 

  __asm
  {
    vmovss  [rsp+s1], xmm3
    vmovss  [rsp+t0], xmm2
    vmovss  [rsp+s0], xmm1
  }
  v7 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s0, &s1a, &t0, &t2);
  __asm
  {
    vmovss  xmm0, [rsp+48h+arg_20]
    vmovss  xmm3, [rsp+48h+s1]; s1
    vmovss  xmm2, [rsp+48h+t0]; t0
    vmovss  xmm1, [rsp+48h+s0]; s0
    vmovss  dword ptr [rsp+48h+t1], xmm0
  }
  R_AddCmdDraw3DQuadPicST(verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, t1a, color, v7);
}

/*
==============
CL_Draw3DStretchPicPhysicalRotatedST
==============
*/

void __fastcall CL_Draw3DStretchPicPhysicalRotatedST(const vec3_t *verts, double centerS, double centerT, double scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  Material *v16; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  char v41; 
  void *retaddr; 

  _R11 = &retaddr;
  v16 = material;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  Material_Process2DTextureCoordsForAtlasing(v16, &minS, &maxS, &minT, &maxT);
  __asm
  {
    vmovss  xmm0, [rsp+98h+angle]
    vmovss  xmm1, [rsp+98h+maxT]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, [rsp+98h+minT]
    vmovss  [rsp+98h+var_58], xmm1
    vmovss  xmm1, [rsp+98h+maxS]
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  xmm0, [rsp+98h+minS]
    vmovss  [rsp+98h+var_68], xmm1
    vmovss  xmm1, [rsp+98h+scaleFinalT]
    vmovss  [rsp+98h+var_70], xmm0
    vmovss  [rsp+98h+var_78], xmm1
    vmovaps xmm1, xmm8; centerS
    vmovaps xmm3, xmm6; scaleFinalS
    vmovaps xmm2, xmm7; centerT
  }
  R_AddCmdDraw3DStretchPicRotateST(verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v34, v35, v36, v37, v38, v39, color, v16);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_Draw9SliceImage
==============
*/

void __fastcall CL_Draw9SliceImage(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, const vec4_t *color, Material *material)
{
  Material *v21; 
  bool v23; 
  int v30; 
  int v31; 
  const vec4_t *v42; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  int horzAlignd; 
  int horzAligne; 
  int horzAlignf; 
  int horzAligng; 
  int horzAlignh; 
  int horzAligni; 
  int horzAlignj; 
  int vertAligna; 
  int vertAlignb; 
  int vertAlignc; 
  int vertAlignd; 
  int vertAligne; 
  int vertAlignf; 
  int vertAligng; 
  int vertAlignh; 
  int vertAligni; 
  int vertAlignj; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float wa; 
  float ya; 
  float xa[4]; 
  __int64 v155; 
  char v156; 
  void *retaddr; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+20h], xmm3
    vmovss  dword ptr [rax+18h], xmm2
    vmovss  dword ptr [rax+10h], xmm1
  }
  _RBP = &v155;
  v21 = material;
  _R15 = scrPlace;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v23 = v21->textureCount == 1;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
    vmovaps xmm11, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm10, xmm1
  }
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 398, ASSERT_TYPE_ASSERT, "(material->textureCount == 1)", (const char *)&queryFormat, "material->textureCount == 1") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15+24h]
    vmulss  xmm3, xmm0, cs:__real@3a72b9d6
    vmovss  xmm7, cs:__real@3eaaaaab
  }
  v30 = vertAlign;
  v31 = horzAlign;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm7
    vdivss  xmm1, xmm0, dword ptr [r15]
    vmulss  xmm8, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm7
    vdivss  xmm2, xmm1, dword ptr [r15+4]
    vmulss  xmm15, xmm2, xmm3
  }
  vertAligna = vertAlign;
  horzAligna = horzAlign;
  __asm
  {
    vmovss  dword ptr [rbp+50h], xmm15
    vmovss  dword ptr [rbp+90h], xmm8
    vmovss  [rsp+148h+w], xmm8
    vmovss  [rsp+148h+y], xmm9
    vmovss  [rsp+148h+x], xmm10
  }
  ScrPlace_ApplyRect(_R15, xa, &ya, &wa, &v158, horzAligna, vertAligna);
  v42 = color;
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+50h]; h
    vmovss  xmm2, [rsp+148h+w]; w
    vmovss  xmm1, [rsp+148h+y]; y
    vmovss  xmm0, [rsp+148h+x]; x
    vmovss  [rsp+148h+var_110], xmm7
    vxorps  xmm13, xmm13, xmm13
    vmovss  [rsp+148h+vertAlign], xmm7
    vmovss  [rsp+148h+horzAlign], xmm13
    vmovss  dword ptr [rsp+148h+fmt], xmm13
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&horzAlignb, *(float *)&vertAlignb, v142, color, v21);
  __asm
  {
    vmulss  xmm0, xmm8, cs:__real@40000000
    vsubss  xmm12, xmm11, xmm0
    vaddss  xmm11, xmm8, xmm10
    vmovss  [rsp+148h+w], xmm11
    vmovss  dword ptr [rbp+50h], xmm15
    vmovss  [rsp+148h+x], xmm12
    vmovss  [rsp+148h+y], xmm9
  }
  ScrPlace_ApplyRect(_R15, &wa, &ya, xa, &v158, v31, v30);
  __asm
  {
    vmovss  xmm14, cs:__real@3f2aaaab
    vmovss  xmm3, dword ptr [rbp+50h]; h
    vmovss  xmm2, [rsp+148h+x]; w
    vmovss  xmm1, [rsp+148h+y]; y
    vmovss  xmm0, [rsp+148h+w]; x
    vmovss  [rsp+148h+var_110], xmm7
    vmovss  [rsp+148h+vertAlign], xmm14
    vmovss  [rsp+148h+horzAlign], xmm13
    vmovss  dword ptr [rsp+148h+fmt], xmm7
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, *(float *)&horzAlignc, *(float *)&vertAlignc, v143, v42, v21);
  __asm
  {
    vaddss  xmm0, xmm10, dword ptr [rbp+68h]
    vmovss  [rsp+148h+y], xmm9
    vsubss  xmm9, xmm0, xmm8
    vmovss  dword ptr [rbp+68h], xmm9
    vmovss  dword ptr [rbp+50h], xmm15
    vmovss  [rsp+148h+x], xmm8
  }
  ScrPlace_ApplyRect(_R15, &v161, &ya, xa, &v158, v31, v30);
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm3, dword ptr [rbp+50h]; h
    vmovss  xmm2, [rsp+148h+x]; w
    vmovss  xmm1, [rsp+148h+y]; y
    vmovss  xmm0, dword ptr [rbp+68h]; x
    vmovss  [rsp+148h+var_110], xmm7
    vmovss  [rsp+148h+vertAlign], xmm10
    vmovss  [rsp+148h+horzAlign], xmm13
    vmovss  dword ptr [rsp+148h+fmt], xmm14
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, *(float *)&horzAlignd, *(float *)&vertAlignd, v144, v42, v21);
  __asm
  {
    vmulss  xmm0, xmm15, cs:__real@40000000
    vmovss  xmm8, dword ptr [rbp+70h]
    vmovss  xmm1, dword ptr [rbp+90h]
    vaddss  xmm6, xmm15, dword ptr [rbp+60h]
    vsubss  xmm7, xmm8, xmm0
    vmovss  xmm0, dword ptr [rbp+58h]
    vmovss  [rsp+148h+x], xmm0
    vmovss  dword ptr [rbp+68h], xmm7
    vmovss  dword ptr [rbp+70h], xmm1
    vmovss  dword ptr [rbp+50h], xmm6
  }
  ScrPlace_ApplyRect(_R15, xa, &v158, &h, &v161, v31, v30);
  __asm
  {
    vmovss  xmm0, cs:__real@3eaaaaab
    vmovss  xmm3, dword ptr [rbp+68h]; h
    vmovss  xmm2, dword ptr [rbp+70h]; w
    vmovss  xmm1, dword ptr [rbp+50h]; y
    vmovss  [rsp+148h+var_110], xmm14
    vmovss  [rsp+148h+vertAlign], xmm0
    vmovss  [rsp+148h+horzAlign], xmm0
    vmovss  xmm0, [rsp+148h+x]; x
    vmovss  dword ptr [rsp+148h+fmt], xmm13
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, *(float *)&horzAligne, *(float *)&vertAligne, v145, v42, v21);
  __asm
  {
    vmovss  dword ptr [rbp+68h], xmm7
    vmovss  dword ptr [rbp+70h], xmm12
    vmovss  dword ptr [rbp+50h], xmm6
    vmovss  [rsp+148h+x], xmm11
  }
  ScrPlace_ApplyRect(_R15, xa, &v158, &h, &v161, v31, v30);
  __asm
  {
    vmovss  xmm0, cs:__real@3eaaaaab
    vmovss  xmm3, dword ptr [rbp+68h]; h
    vmovss  xmm2, dword ptr [rbp+70h]; w
    vmovss  xmm1, dword ptr [rbp+50h]; y
    vmovss  [rsp+148h+var_110], xmm14
    vmovss  [rsp+148h+vertAlign], xmm14
    vmovss  [rsp+148h+horzAlign], xmm0
    vmovss  dword ptr [rsp+148h+fmt], xmm0
    vmovss  xmm0, [rsp+148h+x]; x
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, *(float *)&horzAlignf, *(float *)&vertAlignf, v146, v42, v21);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+90h]
    vmovss  dword ptr [rbp+70h], xmm0
    vmovss  dword ptr [rbp+68h], xmm7
    vmovss  dword ptr [rbp+50h], xmm6
    vmovss  [rsp+148h+x], xmm9
  }
  ScrPlace_ApplyRect(_R15, xa, &v158, &h, &v161, v31, v30);
  __asm
  {
    vmovss  xmm7, cs:__real@3eaaaaab
    vmovss  xmm3, dword ptr [rbp+68h]; h
    vmovss  xmm2, dword ptr [rbp+70h]; w
    vmovss  xmm1, dword ptr [rbp+50h]; y
    vmovss  xmm0, [rsp+148h+x]; x
    vmovss  [rsp+148h+var_110], xmm14
    vmovss  [rsp+148h+vertAlign], xmm10
    vmovss  [rsp+148h+horzAlign], xmm7
    vmovss  dword ptr [rsp+148h+fmt], xmm14
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, *(float *)&horzAligng, *(float *)&vertAligng, v147, v42, v21);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+90h]
    vmovss  dword ptr [rbp+70h], xmm0
    vaddss  xmm0, xmm8, dword ptr [rbp+60h]
    vsubss  xmm6, xmm0, xmm15
    vmovss  xmm0, dword ptr [rbp+58h]
    vmovss  dword ptr [rbp+58h], xmm0
    vmovss  dword ptr [rbp+68h], xmm15
    vmovss  dword ptr [rbp+60h], xmm6
  }
  ScrPlace_ApplyRect(_R15, &v159, &v160, &h, &v161, v31, v30);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+68h]; h
    vmovss  xmm2, dword ptr [rbp+70h]; w
    vmovss  xmm1, dword ptr [rbp+60h]; y
    vmovss  xmm0, dword ptr [rbp+58h]; x
    vmovss  [rsp+148h+var_110], xmm10
    vmovss  [rsp+148h+vertAlign], xmm7
    vmovss  [rsp+148h+horzAlign], xmm14
    vmovss  dword ptr [rsp+148h+fmt], xmm13
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, *(float *)&horzAlignh, *(float *)&vertAlignh, v148, v42, v21);
  __asm
  {
    vmovss  dword ptr [rbp+60h], xmm15
    vmovss  dword ptr [rbp+58h], xmm12
    vmovss  dword ptr [rbp+68h], xmm6
    vmovss  dword ptr [rbp+70h], xmm11
  }
  ScrPlace_ApplyRect(_R15, &h, &v161, &v159, &v160, v31, v30);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+60h]; h
    vmovss  xmm2, dword ptr [rbp+58h]; w
    vmovss  xmm1, dword ptr [rbp+68h]; y
    vmovss  xmm0, dword ptr [rbp+70h]; x
    vmovss  [rsp+148h+var_110], xmm10
    vmovss  [rsp+148h+vertAlign], xmm14
    vmovss  [rsp+148h+horzAlign], xmm14
    vmovss  dword ptr [rsp+148h+fmt], xmm7
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, *(float *)&horzAligni, *(float *)&vertAligni, v149, v42, v21);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+90h]
    vmovss  dword ptr [rbp+58h], xmm0
    vmovss  dword ptr [rbp+60h], xmm15
    vmovss  dword ptr [rbp+68h], xmm6
    vmovss  dword ptr [rbp+70h], xmm9
  }
  ScrPlace_ApplyRect(_R15, &h, &v161, &v159, &v160, v31, v30);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+60h]; h
    vmovss  xmm2, dword ptr [rbp+58h]; w
    vmovss  xmm1, dword ptr [rbp+68h]; y
    vmovss  xmm0, dword ptr [rbp+70h]; x
    vmovss  [rsp+148h+var_110], xmm10
    vmovss  [rsp+148h+vertAlign], xmm10
    vmovss  [rsp+148h+horzAlign], xmm14
    vmovss  dword ptr [rsp+148h+fmt], xmm14
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, *(float *)&horzAlignj, *(float *)&vertAlignj, v150, v42, v21);
  __asm { vmovaps xmm15, [rsp+148h+var_D8] }
  _R11 = &v156;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
CL_DrawQuadPicPhysicalST
==============
*/

void __fastcall CL_DrawQuadPicPhysicalST(const vec2_t *verts, double s1, double t1, double s2, float t2, const vec4_t *color, Material *material)
{
  Material *v7; 
  float t1a; 
  float s0; 
  float t0; 
  float s1a; 

  __asm
  {
    vmovss  [rsp+s1], xmm3
    vmovss  [rsp+t0], xmm2
    vmovss  [rsp+s0], xmm1
  }
  v7 = material;
  Material_Process2DTextureCoordsForAtlasing(material, &s0, &s1a, &t0, &t2);
  __asm
  {
    vmovss  xmm0, [rsp+48h+arg_20]
    vmovss  xmm3, [rsp+48h+s1]; s1
    vmovss  xmm2, [rsp+48h+t0]; t0
    vmovss  xmm1, [rsp+48h+s0]; s0
    vmovss  dword ptr [rsp+48h+t1], xmm0
  }
  R_AddCmdDrawQuadPicST(verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, t1a, color, v7);
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
  float v23; 
  float v24; 
  float v25; 
  int v26; 
  float w; 
  float ya; 
  float xa; 

  material = cls.whiteMaterial;
  _RAX = &v26;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r8d
    vmovss  dword ptr [rax], xmm0
    vmovss  dword ptr [rax+8], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vmovss  dword ptr [rax+10h], xmm0
    vmovss  dword ptr [rax+18h], xmm1
  }
  ScrPlace_ApplyRect(&scrPlaceFull, &xa, &ya, &w, (float *)&v26, 1, 1);
  __asm
  {
    vmovss  xmm3, [rsp+58h+arg_0]; h
    vmovss  xmm2, [rsp+58h+w]; w
    vmovss  xmm1, [rsp+58h+y]; y
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  [rsp+58h+var_28], xmm0
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  dword ptr [rsp+58h+h], xmm0
    vmovss  xmm0, [rsp+58h+x]; x
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, h, v23, v24, v25, color, material);
}

/*
==============
CL_DrawRotatedStretchPicWithoutSplitScreenScaling
==============
*/

void __fastcall CL_DrawRotatedStretchPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, float angle, bool pivotTopLeft, const vec4_t *color, Material *material)
{
  Material *v23; 
  float ha; 
  int horzAligna; 
  int vertAligna; 
  float v47; 
  float v48; 
  _BYTE v49[7]; 
  char v50; 
  void *retaddr; 
  float v52; 
  float v53; 
  float v54; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+20h], xmm3
    vmovss  dword ptr [rax+18h], xmm2
    vmovss  dword ptr [rax+10h], xmm1
  }
  _RBP = v49;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, &v52, &v53, &v54, &h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+67h]
    vmovss  xmm1, dword ptr [rbp+5Fh]
  }
  v23 = material;
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+37h]
    vmovss  xmm7, dword ptr [rbp+2Fh]
    vmovss  xmm8, dword ptr [rbp+27h]
    vmovss  xmm9, dword ptr [rbp+1Fh]
    vmovss  dword ptr [rbp+67h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h]
    vmovss  dword ptr [rbp+5Fh], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh]
    vmovss  dword ptr [rbp+57h], xmm0
    vmovss  dword ptr [rbp+4Fh], xmm1
  }
  Material_Process2DTextureCoordsForAtlasing(v23, &s1, &s2, &t1, &t2);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+6Fh]
    vmovss  xmm5, dword ptr [rbp+67h]
    vmovss  [rsp+0B8h+var_78], xmm4
    vmovss  xmm4, dword ptr [rbp+5Fh]
    vmovss  [rsp+0B8h+var_80], xmm5
    vmovss  xmm5, dword ptr [rbp+57h]
    vmovss  [rsp+0B8h+vertAlign], xmm4
    vmovss  xmm4, dword ptr [rbp+4Fh]
    vmovss  [rsp+0B8h+horzAlign], xmm5
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm8; y
    vmovaps xmm0, xmm9; x
    vmovss  dword ptr [rsp+0B8h+h], xmm4
  }
  R_AddCmdDrawStretchPicRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ha, *(float *)&horzAligna, *(float *)&vertAligna, v47, v48, pivotTopLeft, 1, color, v23);
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CL_DrawStretchPic
==============
*/

void __fastcall CL_DrawStretchPic(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  int v26; 
  int v27; 

  __asm
  {
    vmovss  [rsp+arg_18], xmm3
    vmovss  [rsp+arg_10], xmm2
    vmovss  [rsp+arg_8], xmm1
  }
  ScrPlace_ApplyRect(scrPlace, (float *)&v25, (float *)&v26, (float *)&v27, &h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm0, [rsp+58h+t2]
    vmovss  xmm1, [rsp+58h+s2]
    vmovss  xmm3, [rsp+58h+h]; h
    vmovss  xmm2, [rsp+58h+arg_18]; w
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  xmm0, [rsp+58h+t1]
    vmovss  [rsp+58h+var_28], xmm1
    vmovss  xmm1, [rsp+58h+s1]
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  xmm0, [rsp+58h+arg_8]; x
    vmovss  [rsp+58h+var_38], xmm1
    vmovss  xmm1, [rsp+58h+arg_10]; y
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v21, v22, v23, v24, color, material);
}

/*
==============
CL_DrawStretchPicFlipST
==============
*/

void __fastcall CL_DrawStretchPicFlipST(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v21; 
  float ha; 
  int horzAligna; 
  int vertAligna; 
  float v44; 
  _BYTE v46[7]; 
  char v47; 
  void *retaddr; 
  float v49; 
  float v50; 
  float v51; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+20h], xmm3
    vmovss  dword ptr [rax+18h], xmm2
    vmovss  dword ptr [rax+10h], xmm1
  }
  _RBP = v46;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  ScrPlace_ApplyRect(scrPlace, &v49, &v50, &v51, &h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+6Fh]
    vmovss  xmm1, dword ptr [rbp+67h]
  }
  v21 = material;
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+3Fh]
    vmovss  xmm7, dword ptr [rbp+37h]
    vmovss  xmm8, dword ptr [rbp+2Fh]
    vmovss  xmm9, dword ptr [rbp+27h]
    vmovss  dword ptr [rbp+6Fh], xmm0
    vmovss  xmm0, dword ptr [rbp+5Fh]
    vmovss  dword ptr [rbp+67h], xmm1
    vmovss  xmm1, dword ptr [rbp+57h]
    vmovss  dword ptr [rbp+5Fh], xmm0
    vmovss  dword ptr [rbp+57h], xmm1
  }
  Material_Process2DTextureCoordsForAtlasing(v21, &s1, &s2, &t1, &t2);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+6Fh]
    vmovss  xmm5, dword ptr [rbp+67h]
    vmovss  [rsp+98h+var_60], xmm4
    vmovss  xmm4, dword ptr [rbp+5Fh]
    vmovss  [rsp+98h+vertAlign], xmm5
    vmovss  xmm5, dword ptr [rbp+57h]
    vmovss  [rsp+98h+horzAlign], xmm4
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm8; y
    vmovaps xmm0, xmm9; x
    vmovss  dword ptr [rsp+98h+h], xmm5
  }
  R_AddCmdDrawStretchPicFlipST(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ha, *(float *)&horzAligna, *(float *)&vertAligna, v44, color, v21);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CL_DrawStretchPicPhysical
==============
*/

void __fastcall CL_DrawStretchPicPhysical(double x, double y, double w, double h, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v15; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  void *retaddr; 

  _R11 = &retaddr;
  v15 = material;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  Material_Process2DTextureCoordsForAtlasing(v15, &s1, &s2, &t1, &t2);
  __asm
  {
    vmovss  xmm2, [rsp+98h+t2]
    vmovss  xmm0, [rsp+98h+s2]
    vmovss  xmm1, [rsp+98h+t1]
    vmovss  [rsp+98h+var_60], xmm2
    vmovss  [rsp+98h+var_68], xmm0
    vmovss  xmm0, [rsp+98h+s1]
    vmovss  [rsp+98h+var_70], xmm1
    vmovss  [rsp+98h+var_78], xmm0
    vmovaps xmm0, xmm9; x
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm8; y
  }
  R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v32, v33, v34, v35, color, v15);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
}

/*
==============
CL_DrawStretchPicPhysicalFlipST
==============
*/

void __fastcall CL_DrawStretchPicPhysicalFlipST(double x, double y, double w, double h, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  Material *v15; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  void *retaddr; 

  _R11 = &retaddr;
  v15 = material;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  Material_Process2DTextureCoordsForAtlasing(v15, &s1, &s2, &t1, &t2);
  __asm
  {
    vmovss  xmm2, [rsp+98h+t2]
    vmovss  xmm0, [rsp+98h+s2]
    vmovss  xmm1, [rsp+98h+t1]
    vmovss  [rsp+98h+var_60], xmm2
    vmovss  [rsp+98h+var_68], xmm0
    vmovss  xmm0, [rsp+98h+s1]
    vmovss  [rsp+98h+var_70], xmm1
    vmovss  [rsp+98h+var_78], xmm0
    vmovaps xmm0, xmm9; x
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm8; y
  }
  R_AddCmdDrawStretchPicFlipST(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v32, v33, v34, v35, color, v15);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
}

/*
==============
CL_DrawStretchPicPhysicalRotateXY
==============
*/

void __fastcall CL_DrawStretchPicPhysicalRotateXY(double x, double y, double w, double h, float s1, float t1, float s2, float t2, float angle, bool pivotTopLeft, const vec4_t *color, Material *material)
{
  Material *v17; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  char v41; 
  void *retaddr; 

  _R11 = &retaddr;
  v17 = material;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  Material_Process2DTextureCoordsForAtlasing(v17, &s1, &s2, &t1, &t2);
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+angle]
    vmovss  xmm1, [rsp+0B8h+t2]
    vmovss  [rsp+0B8h+var_78], xmm0
    vmovss  xmm0, [rsp+0B8h+s2]
    vmovss  [rsp+0B8h+var_80], xmm1
    vmovss  xmm1, [rsp+0B8h+t1]
    vmovss  [rsp+0B8h+var_88], xmm0
    vmovss  xmm0, [rsp+0B8h+s1]
    vmovss  [rsp+0B8h+var_90], xmm1
    vmovss  dword ptr [rsp+0B8h+var_98], xmm0
    vmovaps xmm0, xmm9; x
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm7; w
    vmovaps xmm1, xmm8; y
  }
  R_AddCmdDrawStretchPicRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v36, v37, v38, v39, v40, pivotTopLeft, 1, color, v17);
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CL_DrawStretchPicPhysicalRotatedST
==============
*/

void __fastcall CL_DrawStretchPicPhysicalRotatedST(const vec2_t *verts, double centerS, double centerT, double scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  Material *v16; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  char v41; 
  void *retaddr; 

  _R11 = &retaddr;
  v16 = material;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  Material_Process2DTextureCoordsForAtlasing(v16, &minS, &maxS, &minT, &maxT);
  __asm
  {
    vmovss  xmm0, [rsp+98h+angle]
    vmovss  xmm1, [rsp+98h+maxT]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, [rsp+98h+minT]
    vmovss  [rsp+98h+var_58], xmm1
    vmovss  xmm1, [rsp+98h+maxS]
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  xmm0, [rsp+98h+minS]
    vmovss  [rsp+98h+var_68], xmm1
    vmovss  xmm1, [rsp+98h+scaleFinalT]
    vmovss  [rsp+98h+var_70], xmm0
    vmovss  [rsp+98h+var_78], xmm1
    vmovaps xmm1, xmm8; centerS
    vmovaps xmm3, xmm6; scaleFinalS
    vmovaps xmm2, xmm7; centerT
  }
  R_AddCmdDrawStretchPicRotateST(verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v34, v35, v36, v37, v38, v39, color, v16);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_DrawStretchPicRotatedST
==============
*/

void __fastcall CL_DrawStretchPicRotatedST(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, float centerS, float centerT, float scaleFinalS, float scaleFinalT, float minS, float maxS, float minT, float maxT, float angle, const vec4_t *color, Material *material)
{
  const vec4_t *v18; 
  Material *v19; 
  float t1; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float xa; 
  float ya; 
  float wa; 
  vec2_t verts; 

  v18 = color;
  v19 = material;
  __asm
  {
    vmovss  [rbp+17h+x], xmm1
    vmovss  [rbp+17h+y], xmm2
    vmovss  [rbp+17h+w], xmm3
  }
  ScrPlace_ApplyRect(scrPlace, &xa, &ya, &wa, &h, horzAlign, vertAlign);
  Material_Process2DTextureCoordsForAtlasing(v19, &minS, &maxS, &minT, &maxT);
  __asm
  {
    vmovss  xmm2, [rbp+17h+y]
    vmovss  xmm3, [rbp+17h+x]
    vaddss  xmm0, xmm2, [rbp+17h+h]
    vaddss  xmm1, xmm3, [rbp+17h+w]
    vmovss  [rbp+17h+var_30], xmm1
    vmovss  [rbp+17h+var_28], xmm1
    vmovss  xmm1, [rbp+17h+maxT]
    vmovss  [rbp+17h+var_24], xmm0
    vmovss  [rbp+17h+var_1C], xmm0
    vmovss  xmm0, [rbp+17h+angle]
    vmovss  [rsp+0B0h+var_68], xmm0
    vmovss  xmm0, [rbp+17h+minT]
    vmovss  [rsp+0B0h+var_70], xmm1
    vmovss  xmm1, [rbp+17h+maxS]
    vmovss  [rsp+0B0h+var_78], xmm0
    vmovss  xmm0, [rbp+17h+minS]
    vmovss  [rsp+0B0h+var_80], xmm1
    vmovss  xmm1, [rbp+17h+scaleFinalT]
    vmovss  [rsp+0B0h+var_88], xmm0
    vmovss  dword ptr [rsp+0B0h+t1], xmm1
    vmovss  xmm1, [rbp+17h+centerS]; centerS
    vmovss  dword ptr [rbp+17h+verts], xmm3
    vmovss  dword ptr [rbp+17h+verts+4], xmm2
    vmovss  [rbp+17h+var_2C], xmm2
    vmovss  xmm2, [rbp+17h+centerT]; centerT
    vmovss  [rbp+17h+var_20], xmm3
    vmovss  xmm3, [rbp+17h+scaleFinalS]; scaleFinalS
  }
  R_AddCmdDrawStretchPicRotateST(&verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, t1, v34, v35, v36, v37, v38, v18, v19);
}

/*
==============
CL_DrawStretchPicWithoutSplitScreenScaling
==============
*/

void __fastcall CL_DrawStretchPicWithoutSplitScreenScaling(const ScreenPlacement *scrPlace, double x, double y, double w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const vec4_t *color, Material *material)
{
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  int v26; 
  int v27; 

  __asm
  {
    vmovss  [rsp+arg_18], xmm3
    vmovss  [rsp+arg_10], xmm2
    vmovss  [rsp+arg_8], xmm1
  }
  ScrPlace_ApplyRectWithoutSplitScreenScaling(scrPlace, (float *)&v25, (float *)&v26, (float *)&v27, &h, horzAlign, vertAlign);
  __asm
  {
    vmovss  xmm0, [rsp+58h+t2]
    vmovss  xmm1, [rsp+58h+s2]
    vmovss  xmm3, [rsp+58h+h]; h
    vmovss  xmm2, [rsp+58h+arg_18]; w
    vmovss  [rsp+58h+var_20], xmm0
    vmovss  xmm0, [rsp+58h+t1]
    vmovss  [rsp+58h+var_28], xmm1
    vmovss  xmm1, [rsp+58h+s1]
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  xmm0, [rsp+58h+arg_8]; x
    vmovss  [rsp+58h+var_38], xmm1
    vmovss  xmm1, [rsp+58h+arg_10]; y
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v21, v22, v23, v24, color, material);
}

/*
==============
CL_DrawString
==============
*/
void CL_DrawString(int x, int y, const char *pszString, int bShadow)
{
  float v13; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+58h+iCharHeight]
    vmovss  [rsp+58h+var_20], xmm0
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm1, xmm1, ecx; x
    vcvtsi2ss xmm2, xmm2, edx; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, pszString, &colorWhite, 0, bShadow, v13, 1);
}

/*
==============
CL_DrawText
==============
*/
void CL_DrawText(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const vec4_t *color, int style)
{
  const FontGlowStyle *glowStyle; 
  bool usePost; 
  float v41; 
  int v42; 
  float v43; 
  int v44; 
  float v45; 
  float v46; 
  float v47; 
  char v49; 
  void *retaddr; 

  _R11 = &retaddr;
  v44 = vertAlign;
  v42 = horzAlign;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovss  xmm7, dword ptr [r11+50h]
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovss  xmm8, dword ptr [r11+48h]
  }
  ScrPlace_ApplyRect(scrPlace, &x, &y, &xScale, &yScale, v42, v44);
  R_TextHeight(font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, [rsp+98h+yScale]
    vdivss  xmm1, xmm8, xmm7
    vmovss  [rsp+98h+xScale], xmm1
  }
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  __asm
  {
    vaddss  xmm2, xmm6, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_58], xmm0
    vmovss  xmm0, [rsp+98h+xScale]
    vroundss xmm3, xmm1, xmm2, 1
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+98h+var_60], xmm1
    vmovss  xmm1, [rsp+98h+y]
    vmovss  [rsp+98h+var_68], xmm0
    vmovss  xmm0, [rsp+98h+x]
    vmovss  [rsp+98h+var_70], xmm1
    vcvttss2si r9d, xmm3; fontHeight
    vmovss  [rsp+98h+var_78], xmm0
  }
  R_AddCmdDrawText(text, maxChars, font, _ER9, v41, v43, v45, v46, v47, color, glowStyle, usePost);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_DrawTextPhysical
==============
*/

void __fastcall CL_DrawTextPhysical(const char *text, int maxChars, GfxFont *font, double x, float y, float xScale, float yScale, const vec4_t *color, int style)
{
  const FontGlowStyle *glowStyle; 
  bool usePost; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  char v40; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm8
    vmovaps xmm8, xmm3
  }
  R_TextHeight(font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, [rsp+88h+yScale]
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm6, xmm0, xmm2, 1
  }
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  __asm
  {
    vmovss  xmm0, [rsp+88h+xScale]
    vdivss  xmm2, xmm0, [rsp+88h+yScale]
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+var_48], xmm0
    vmovss  xmm0, [rsp+88h+y]
    vmovss  [rsp+88h+var_50], xmm1
    vmovss  [rsp+88h+var_58], xmm2
    vmovss  [rsp+88h+var_60], xmm0
    vcvttss2si r9d, xmm6; fontHeight
    vmovss  [rsp+88h+var_68], xmm8
  }
  R_AddCmdDrawText(text, maxChars, font, _ER9, v33, v34, v35, v36, v37, color, glowStyle, usePost);
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v40;
  __asm { vmovaps xmm8, xmmword ptr [r11-20h] }
}

/*
==============
CL_DrawTextPhysicalWithCursor
==============
*/

void __fastcall CL_DrawTextPhysicalWithCursor(const char *text, int maxChars, GfxFont *font, double x, float y, float xScale, float yScale, const vec4_t *color, int style, int cursorPos, char cursor)
{
  const FontGlowStyle *glowStyle; 
  bool usePost; 
  float xa; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, [rsp+0E8h+yScale]
    vmovaps xmmword ptr [rax-38h], xmm8
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm7, xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm3
  }
  R_TextHeight(font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm6, xmm0, xmm3, 1
  }
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+xScale]
    vmovss  [rsp+0E8h+var_98], xmm8
    vdivss  xmm1, xmm0, xmm7
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0E8h+var_A8], xmm0
    vmovss  [rsp+0E8h+var_B0], xmm1
    vmovss  xmm1, [rsp+0E8h+y]
    vmovss  [rsp+0E8h+var_B8], xmm1
    vcvttss2si edx, xmm6
    vmovss  [rsp+0E8h+x], xmm9
  }
  R_AddCmdDrawTextWithCursor(text, maxChars, font, NULL, _EDX, xa, v42, v43, v44, 0, v45, color, glowStyle, usePost, cursorPos, cursor, 0, 0, NULL);
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CL_DrawTextPhysicalWithEffects
==============
*/

void __fastcall CL_DrawTextPhysicalWithEffects(const char *text, int maxChars, GfxFont *font, double x, float y, float xScale, float yScale, const vec4_t *color, int style, const vec4_t *glowColor, Material *fxMaterial, Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime)
{
  const FontGlowStyle *LegacyFontStyle; 
  bool v21; 
  int v22; 
  float ya; 
  float xScalea; 
  float yScalea; 
  float colora; 
  int stylea; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  LegacyFontStyle = R_Font_GetLegacyFontStyle(style);
  v21 = R_Font_UsePost(style);
  v22 = R_TextHeight(font);
  __asm
  {
    vmovss  xmm1, [rsp+78h+yScale]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+style], xmm0
    vmovss  xmm0, [rsp+78h+xScale]
    vmovss  dword ptr [rsp+78h+color], xmm1
    vmovss  xmm1, [rsp+78h+y]
    vmovss  [rsp+78h+yScale], xmm0
    vmovss  [rsp+78h+xScale], xmm1
    vmovss  [rsp+78h+y], xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
  R_AddCmdDrawText(text, maxChars, font, v22, ya, xScalea, yScalea, colora, *(float *)&stylea, color, LegacyFontStyle, v21);
}

/*
==============
CL_DrawTextWithCursor
==============
*/
void CL_DrawTextWithCursor(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, const vec4_t *color, int style, int cursorPos, char cursor)
{
  const FontGlowStyle *glowStyle; 
  bool usePost; 
  int v43; 
  float v44; 
  int v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  char v50; 
  void *retaddr; 

  _R11 = &retaddr;
  v45 = vertAlign;
  v43 = horzAlign;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovss  xmm7, dword ptr [r11+50h]
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovss  xmm8, dword ptr [r11+48h]
  }
  ScrPlace_ApplyRect(scrPlace, &x, &y, &xScale, &yScale, v43, v45);
  R_TextHeight(font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, [rsp+0D8h+yScale]
    vdivss  xmm1, xmm8, xmm7
    vmovss  [rsp+0D8h+xScale], xmm1
  }
  glowStyle = R_Font_GetLegacyFontStyle(style);
  usePost = R_Font_UsePost(style);
  __asm
  {
    vaddss  xmm2, xmm6, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0D8h+var_88], xmm0
    vmovss  xmm0, [rsp+0D8h+xScale]
    vroundss xmm3, xmm1, xmm2, 1
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+0D8h+var_98], xmm1
    vmovss  xmm1, [rsp+0D8h+y]
    vmovss  [rsp+0D8h+var_A0], xmm0
    vmovss  xmm0, [rsp+0D8h+x]
    vmovss  [rsp+0D8h+var_A8], xmm1
    vcvttss2si edx, xmm3
    vmovss  [rsp+0D8h+var_B0], xmm0
  }
  R_AddCmdDrawTextWithCursor(text, maxChars, font, NULL, _EDX, v44, v46, v47, v48, 0, v49, color, glowStyle, usePost, cursorPos, cursor, 0, 0, NULL);
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_GetDebugViewPos
==============
*/
void CL_GetDebugViewPos(vec3_t *pos)
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:?cls@@3UClStatic@@A.debugRenderPos; ClStatic cls
    vmovss  dword ptr [rcx], xmm0
    vmovss  xmm1, dword ptr cs:?cls@@3UClStatic@@A.debugRenderPos+4; ClStatic cls
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  xmm0, dword ptr cs:?cls@@3UClStatic@@A.debugRenderPos+8; ClStatic cls
    vmovss  dword ptr [rcx+8], xmm0
  }
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
  __int64 v12; 
  __int64 v13; 
  char *fmt; 
  unsigned __int64 v30; 
  UserCommandStateFlags v31; 
  int v32; 
  int v33; 

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
  v33 = v7;
  if ( CmdNumber > v7 )
  {
    LODWORD(fmt) = v7;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= v8 - 128 || CmdNumber <= 0 )
  {
    memset(&v33, 0, sizeof(v33));
    return 0;
  }
  _RBX = &v6->cmds[CmdNumber & 0x7F];
  memset(&v33, 0, sizeof(v33));
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
    __debugbreak();
  _RCX = &v30;
  v12 = 2i64;
  v13 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rbx+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX += 16;
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RBX = (usercmd_s *)((char *)_RBX + 128);
    --v13;
  }
  while ( v13 );
  *_RCX = _RBX->buttons;
  if ( Client->extrapCmd.commandTime <= v32 )
    return 0;
  _RCX = outCmd;
  _RAX = &Client->extrapCmd;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v12;
  }
  while ( v12 );
  _RCX->buttons = _RAX->buttons;
  outCmd->buttons = v30;
  outCmd->stateFlags = v31;
  return 1;
}

/*
==============
CL_GetMaxPitchSpeed
==============
*/

float __fastcall CL_GetMaxPitchSpeed(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  char v4; 
  char v5; 
  int v18; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v18 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v18) )
      __debugbreak();
  }
  _RAX = ClActiveClient::GetClient(localClientNum);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm1, dword ptr [rax+120h]
    vmovss  xmm3, dword ptr [rax+128h]
    vcomiss xmm3, xmm2
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm0, xmm2, xmm1, xmm0
    vmovss  [rsp+48h+arg_0], xmm0
    vmovss  xmm0, [rsp+48h+arg_0]
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_7;
    __asm { vcomiss xmm3, xmm0 }
    if ( v4 )
LABEL_7:
      __asm { vmovaps xmm0, xmm3 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+130h]
    vcomiss xmm1, xmm2
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_11;
    __asm { vcomiss xmm1, xmm0 }
    if ( v4 )
LABEL_11:
      __asm { vmovaps xmm0, xmm1 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+138h]
    vcomiss xmm1, xmm2
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_15;
    __asm { vcomiss xmm1, xmm0 }
    if ( v4 )
LABEL_15:
      __asm { vmovaps xmm0, xmm1 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+140h]
    vcomiss xmm1, xmm2
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_19;
    __asm { vcomiss xmm1, xmm0 }
    if ( v4 )
LABEL_19:
      __asm { vmovaps xmm0, xmm1 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_GetMaxYawSpeed
==============
*/

float __fastcall CL_GetMaxYawSpeed(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  char v4; 
  char v5; 
  int v18; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v18 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 556, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v18) )
      __debugbreak();
  }
  _RAX = ClActiveClient::GetClient(localClientNum);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm1, dword ptr [rax+124h]
    vmovss  xmm3, dword ptr [rax+12Ch]
    vcomiss xmm3, xmm2
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm0, xmm2, xmm1, xmm0
    vmovss  [rsp+48h+arg_0], xmm0
    vmovss  xmm0, [rsp+48h+arg_0]
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_7;
    __asm { vcomiss xmm3, xmm0 }
    if ( v4 )
LABEL_7:
      __asm { vmovaps xmm0, xmm3 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+134h]
    vcomiss xmm1, xmm2
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_11;
    __asm { vcomiss xmm1, xmm0 }
    if ( v4 )
LABEL_11:
      __asm { vmovaps xmm0, xmm1 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+13Ch]
    vcomiss xmm1, xmm2
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_15;
    __asm { vcomiss xmm1, xmm0 }
    if ( v4 )
LABEL_15:
      __asm { vmovaps xmm0, xmm1 }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rax+144h]
    vcomiss xmm1, xmm2
  }
  if ( !(v4 | v5) )
  {
    __asm { vucomiss xmm0, xmm2 }
    if ( v5 )
      goto LABEL_19;
    __asm { vcomiss xmm1, xmm0 }
    if ( v4 )
LABEL_19:
      __asm { vmovaps xmm0, xmm1 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_GetSceneDimensions
==============
*/
void CL_GetSceneDimensions(int *width, int *height, float *aspect)
{
  _RSI = aspect;
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 116, ASSERT_TYPE_ASSERT, "(width)", (const char *)&queryFormat, "width") )
    __debugbreak();
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 117, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  *width = cls.vidConfig.sceneWidth;
  *height = cls.vidConfig.sceneHeight;
  __asm
  {
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.sceneAspectRatio; ClStatic cls
    vmovss  dword ptr [rsi], xmm0
  }
}

/*
==============
CL_GetScreenAspectRatioDisplayPixel
==============
*/
float CL_GetScreenAspectRatioDisplayPixel()
{
  __asm { vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls }
  return *(float *)&_XMM0;
}

/*
==============
CL_GetScreenDimensions
==============
*/
void CL_GetScreenDimensions(int *width, int *height, float *aspect)
{
  _RBX = aspect;
  if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 98, ASSERT_TYPE_ASSERT, "(width)", (const char *)&queryFormat, "width") )
    __debugbreak();
  if ( !height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 99, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 100, ASSERT_TYPE_ASSERT, "(aspect)", (const char *)&queryFormat, "aspect") )
    __debugbreak();
  *width = cls.vidConfig.displayWidth;
  *height = cls.vidConfig.displayHeight;
  __asm
  {
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.windowAspectRatio; ClStatic cls
    vmovss  dword ptr [rbx], xmm0
  }
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

  _RBX = outColor;
  v5 = ColorIndex(c);
  if ( v5 >= 0x11 )
  {
    switch ( c )
    {
      case '8':
        __asm
        {
          vmovss  xmm0, dword ptr cs:s_colorMyTeam
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr cs:s_colorMyTeam+4
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr cs:s_colorMyTeam+8
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm1, dword ptr cs:s_colorMyTeam+0Ch
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
        break;
      case '9':
        __asm
        {
          vmovss  xmm0, dword ptr cs:s_colorEnemyTeam
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr cs:s_colorEnemyTeam+4
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr cs:s_colorEnemyTeam+8
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm1, dword ptr cs:s_colorEnemyTeam+0Ch
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
        break;
      case ':':
        __asm
        {
          vmovss  xmm0, dword ptr cs:s_colorMyParty
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr cs:s_colorMyParty+4
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr cs:s_colorMyParty+8
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  xmm1, dword ptr cs:s_colorMyParty+0Ch
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
        break;
      default:
        _RBX->v[0] = 1.0;
        _RBX->v[1] = 1.0;
        _RBX->v[2] = 1.0;
        _RBX->v[3] = 1.0;
        break;
    }
  }
  else
  {
    v6 = v5 + 17 * r_colorTable->current.integer;
    if ( v6 >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 625, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( ( sizeof( *array_counter( COLOR_TABLE ) ) + 0 ) )", "tableIndex doesn't index ARRAY_COUNT( COLOR_TABLE )\n\t%i not in [0, %i)", v5 + 17 * r_colorTable->current.integer, 34) )
      __debugbreak();
    v7 = &COLOR_TABLE[v6];
    _RBX->v[0] = v7->v[0];
    _RBX->v[1] = v7->v[1];
    _RBX->v[2] = v7->v[2];
    _RBX->v[3] = v7->v[3];
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
  unsigned int v10; 
  int v11; 
  float v12; 
  int v13; 
  __int64 v17; 
  int viewInfoIndex[4]; 
  bitarray<384> v19; 
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
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 198, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RDI->prevViewIndex = viewInfoIndex[0];
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
  *((_DWORD *)&outViewportFeatures + 10) = v11 & 0xCFFFBFFF | 0x4000 | (_RDI->dualViewScope << 28);
  if ( !R_Get_IsPipClientView() )
  {
    v12 = cl_maxLocalClients;
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
    {
      LODWORD(v17) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, cl_maxLocalClients) )
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
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0B53C4h]
    vmovups xmm1, xmmword ptr [rdi+0B53E4h]
    vmovups [rsp+0E8h+var_98], ymm0
    vmovups [rsp+0E8h+var_78], xmm1
  }
  R_Umbra_SetScriptedGateStates(&v19);
  outViewportFeatures.m_postAAMode = R_GetGlobalPostAAMode();
  if ( r_gpShowStats->current.integer > 0 || r_showStats->current.integer > 0 )
    R_TrackStatistics();
  else
    R_TrackStatisticsStop();
  __asm { vmovss  xmm1, cs:__real@3f800000; lodOverride }
  R_RenderScene(refdef, *(float *)&_XMM1, drawType, &outViewportFeatures);
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

void __fastcall CL_SetFOVSensitivityScale(LocalClientNum_t localClientNum, double scale)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RAX = ClActiveClient::GetClient(localClientNum);
  __asm
  {
    vmovss  dword ptr [rax+10Ch], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
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
  CgWeaponMap *v8; 
  bool IsWeaponValid; 
  bool v11; 
  int v16; 
  int v23; 
  BOOL IsFauxFists; 
  bool v41; 

  v4 = localClientNum;
  _R14 = offHand;
  _R15 = weapon;
  BG_AssertOffhandIndexOrNone(offHand);
  _RBP = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 709, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v4];
  IsWeaponValid = BG_IsWeaponValid(v8, &_RBP->predictedPlayerState, _R15);
  _RDI = ClActiveClient::GetClient((const LocalClientNum_t)v4);
  v11 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  v41 = v11;
  if ( IsWeaponValid || !v11 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r15]
      vmovups ymmword ptr [rdi+90h], ymm0
      vmovups xmm1, xmmword ptr [r15+20h]
      vmovups xmmword ptr [rdi+0B0h], xmm1
      vmovsd  xmm0, qword ptr [r15+30h]
      vmovsd  qword ptr [rdi+0C0h], xmm0
    }
    *(_DWORD *)&_RDI->cgameUserCmdWeapon.weaponCamo = *(_DWORD *)&_R15->weaponCamo;
    if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 682, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( _RBP == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cgame.cpp", 684, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_IsThrowingAxe(_R15) )
    {
      IsFauxFists = BG_IsFauxFists(&_RBP->predictedPlayerState, _R15, 0);
      _RDI->cgameUserCmdAlternate = IsFauxFists;
      _RBP->weaponSelectInAlt = IsFauxFists;
    }
    else
    {
      _RDI->cgameUserCmdAlternate = useAltMode != 0;
    }
  }
  else
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( _RBP == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RBX = BgWeaponMap::GetWeapon(v8, _RBP->predictedPlayerState.weapCommon.weaponHandle);
    if ( BG_IsWeaponMeleeOverride(v8, &_RBP->predictedPlayerState, _RBX) )
    {
      if ( BG_IsWeaponValid(v8, &_RBP->predictedPlayerState, &_RBP->weaponLatestPrimary) )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+1815Ch]
          vmovups ymmword ptr [rdi+90h], ymm0
          vmovups xmm1, xmmword ptr [rbp+1817Ch]
          vmovups xmmword ptr [rdi+0B0h], xmm1
          vmovsd  xmm0, qword ptr [rbp+1818Ch]
          vmovsd  qword ptr [rdi+0C0h], xmm0
        }
        v16 = *(_DWORD *)&_RBP->weaponLatestPrimary.weaponCamo;
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
          vmovups ymmword ptr [rdi+90h], ymm0
          vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
          vmovups xmmword ptr [rdi+0B0h], xmm1
          vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
          vmovsd  qword ptr [rdi+0C0h], xmm0
        }
        v16 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rdi+90h], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdi+0B0h], xmm1
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rdi+0C0h], xmm0
      }
      v16 = *(_DWORD *)&_RBX->weaponCamo;
    }
    v23 = 1;
    *(_DWORD *)&_RDI->cgameUserCmdWeapon.weaponCamo = v16;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBP->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBP->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBP->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x1Bu) )
      v23 = 0;
    __asm { vmovups ymm0, ymmword ptr [rdi+90h] }
    _RDI->cgameUserCmdAlternate = v23;
    __asm
    {
      vmovups ymmword ptr [rbp+18114h], ymm0
      vmovups xmm1, xmmword ptr [rdi+0B0h]
      vmovups xmmword ptr [rbp+18134h], xmm1
      vmovsd  xmm0, qword ptr [rdi+0C0h]
      vmovsd  qword ptr [rbp+18144h], xmm0
    }
    *(_DWORD *)&_RBP->weaponSelect.weaponCamo = *(_DWORD *)&_RDI->cgameUserCmdWeapon.weaponCamo;
    _RBP->weaponSelectInAlt = _RDI->cgameUserCmdAlternate;
  }
  if ( !BG_IsWeaponValid(v8, &_RBP->predictedPlayerState, _R14) && _R14->weaponIdx && v41 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( _RBP == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BgWeaponMap::GetWeapon(v8, _RBP->predictedPlayerState.weapCommon.offHandHandle);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi+0CCh], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rdi+0ECh], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rdi+0FCh], xmm0
    }
    *(_DWORD *)&_RDI->cgameUserCmdOffHand.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+499C8h], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+499E8h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+499F8h], xmm0
    }
    *(_DWORD *)&_RBP->equippedOffHand.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rdi+0CCh], ymm0
      vmovups xmm1, xmmword ptr [r14+20h]
      vmovups xmmword ptr [rdi+0ECh], xmm1
      vmovsd  xmm0, qword ptr [r14+30h]
      vmovsd  qword ptr [rdi+0FCh], xmm0
    }
    *(_DWORD *)&_RDI->cgameUserCmdOffHand.weaponCamo = *(_DWORD *)&_R14->weaponCamo;
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
  int v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
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
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr cs:s_colorMyParty+0Ch, xmm0
  }
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

