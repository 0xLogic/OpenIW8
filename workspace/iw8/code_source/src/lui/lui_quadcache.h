/*
==============
LUI_QuadCache_AddDrawListCommand<LUIRenderMaskParams>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<LUIRenderMaskParams>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUIRenderMaskParams *), const LUIRenderMaskParams *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@ULUIRenderMaskParams@@@@YAXW4LocalClientNum_t@@P6AXPEBULUIRenderMaskParams@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUICalibrationRenderData>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<LUICalibrationRenderData>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUICalibrationRenderData *), const LUICalibrationRenderData *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@ULUICalibrationRenderData@@@@YAXW4LocalClientNum_t@@P6AXPEBULUICalibrationRenderData@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<StencilRect>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<StencilRect>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const StencilRect *), const StencilRect *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@UStencilRect@@@@YAXW4LocalClientNum_t@@P6AXPEBUStencilRect@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUIOwnerDrawRenderData>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<LUIOwnerDrawRenderData>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUIOwnerDrawRenderData *), const LUIOwnerDrawRenderData *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@ULUIOwnerDrawRenderData@@@@YAXW4LocalClientNum_t@@P6AXPEBULUIOwnerDrawRenderData@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUIElementPixelGridSettings>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<LUIElementPixelGridSettings>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUIElementPixelGridSettings *), const LUIElementPixelGridSettings *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@ULUIElementPixelGridSettings@@@@YAXW4LocalClientNum_t@@P6AXPEBULUIElementPixelGridSettings@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUICinematicRenderData>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<LUICinematicRenderData>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUICinematicRenderData *), const LUICinematicRenderData *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@ULUICinematicRenderData@@@@YAXW4LocalClientNum_t@@P6AXPEBULUICinematicRenderData@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommandVarSize<LUITextWithCursorRenderData>
==============
*/

LUITextWithCursorRenderData *__fastcall LUI_QuadCache_AddDrawListCommandVarSize<LUITextWithCursorRenderData>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUITextWithCursorRenderData *), unsigned __int64 dataSize)
{
  return ??$LUI_QuadCache_AddDrawListCommandVarSize@ULUITextWithCursorRenderData@@@@YAPEAULUITextWithCursorRenderData@@W4LocalClientNum_t@@P6AXPEBU0@@Z_K@Z(localClientNum, function, dataSize);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUISubtitlesRenderData>
==============
*/

void __fastcall LUI_QuadCache_AddDrawListCommand<LUISubtitlesRenderData>(const LocalClientNum_t localClientNum, void (__fastcall *function)(const LUISubtitlesRenderData *), const LUISubtitlesRenderData *data)
{
  ??$LUI_QuadCache_AddDrawListCommand@ULUISubtitlesRenderData@@@@YAXW4LocalClientNum_t@@P6AXPEBULUISubtitlesRenderData@@@Z1@Z(localClientNum, function, data);
}

/*
==============
LUI_QuadCache_AddDrawListCommandVarSize<LUITextWithCursorRenderData>
==============
*/
LUITextWithCursorRenderData *LUI_QuadCache_AddDrawListCommandVarSize<LUITextWithCursorRenderData>(const LocalClientNum_t localClientNum, void (*function)(const LUITextWithCursorRenderData *), unsigned __int64 dataSize)
{
  return (LUITextWithCursorRenderData *)LUI_QuadCache_AddDrawListCommandVarSizeInternal(localClientNum, (void (__fastcall *)(const void *))function, dataSize, 8ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUIOwnerDrawRenderData>
==============
*/
void LUI_QuadCache_AddDrawListCommand<LUIOwnerDrawRenderData>(const LocalClientNum_t localClientNum, void (*function)(const LUIOwnerDrawRenderData *), const LUIOwnerDrawRenderData *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 0x50ui64, 8ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUISubtitlesRenderData>
==============
*/
void LUI_QuadCache_AddDrawListCommand<LUISubtitlesRenderData>(const LocalClientNum_t localClientNum, void (*function)(const LUISubtitlesRenderData *), const LUISubtitlesRenderData *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 0x38ui64, 8ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUICalibrationRenderData>
==============
*/
void LUI_QuadCache_AddDrawListCommand<LUICalibrationRenderData>(const LocalClientNum_t localClientNum, void (*function)(const LUICalibrationRenderData *), const LUICalibrationRenderData *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 0x50ui64, 8ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUICinematicRenderData>
==============
*/
void LUI_QuadCache_AddDrawListCommand<LUICinematicRenderData>(const LocalClientNum_t localClientNum, void (*function)(const LUICinematicRenderData *), const LUICinematicRenderData *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 0x58ui64, 8ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUIElementPixelGridSettings>
==============
*/
void LUI_QuadCache_AddDrawListCommand<LUIElementPixelGridSettings>(const LocalClientNum_t localClientNum, void (*function)(const LUIElementPixelGridSettings *), const LUIElementPixelGridSettings *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 5ui64, 1ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<LUIRenderMaskParams>
==============
*/
void LUI_QuadCache_AddDrawListCommand<LUIRenderMaskParams>(const LocalClientNum_t localClientNum, void (*function)(const LUIRenderMaskParams *), const LUIRenderMaskParams *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 0x48ui64, 8ui64);
}

/*
==============
LUI_QuadCache_AddDrawListCommand<StencilRect>
==============
*/
void LUI_QuadCache_AddDrawListCommand<StencilRect>(const LocalClientNum_t localClientNum, void (*function)(const StencilRect *), const StencilRect *data)
{
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))function, data, 0x10ui64, 4ui64);
}

