/*
==============
FX_FillGenerateGlassVertsCmd
==============
*/

void __fastcall FX_FillGenerateGlassVertsCmd(FxGenerateGlassVertsCmd *genGlassVertsCmd, const GfxBackEndData *backendData)
{
  ?FX_FillGenerateGlassVertsCmd@@YAXPEAUFxGenerateGlassVertsCmd@@PEBUGfxBackEndData@@@Z(genGlassVertsCmd, backendData);
}

/*
==============
FX_FillGenerateVertsCmd
==============
*/

void __fastcall FX_FillGenerateVertsCmd(LocalClientNum_t localClientNum, GfxCodeSurfListType outList, FxGenerateVertsCmd *genVertsCmd)
{
  ?FX_FillGenerateVertsCmd@@YAXW4LocalClientNum_t@@W4GfxCodeSurfListType@@PEAUFxGenerateVertsCmd@@@Z(localClientNum, outList, genVertsCmd);
}

/*
==============
FX_FillGenerateMarkVertsCmd
==============
*/

void __fastcall FX_FillGenerateMarkVertsCmd(const FxCmd *cmd, FxGenerateMarkVertsCmd *genMarkVertsCmd)
{
  ?FX_FillGenerateMarkVertsCmd@@YAXPEBUFxCmd@@PEAUFxGenerateMarkVertsCmd@@@Z(cmd, genMarkVertsCmd);
}

/*
==============
FX_FillGenerateGlassVertsCmd
==============
*/
void FX_FillGenerateGlassVertsCmd(FxGenerateGlassVertsCmd *genGlassVertsCmd, const GfxBackEndData *backendData)
{
  if ( !genGlassVertsCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_draw.cpp", 52, ASSERT_TYPE_ASSERT, "(genGlassVertsCmd)", (const char *)&queryFormat, "genGlassVertsCmd") )
    __debugbreak();
  if ( !backendData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_draw.cpp", 53, ASSERT_TYPE_ASSERT, "(backendData)", (const char *)&queryFormat, "backendData") )
    __debugbreak();
  genGlassVertsCmd->glassGlobals = &fxWorld.glassGlob;
  LODWORD(genGlassVertsCmd->shatteredScale) = glass_shattered_scale->current.integer;
  genGlassVertsCmd->visInfo = FX_GetGlassVisInfo();
  genGlassVertsCmd->backendData = backendData;
}

/*
==============
FX_FillGenerateMarkVertsCmd
==============
*/
void FX_FillGenerateMarkVertsCmd(const FxCmd *cmd, FxGenerateMarkVertsCmd *genMarkVertsCmd)
{
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_draw.cpp", 39, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !genMarkVertsCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_draw.cpp", 40, ASSERT_TYPE_ASSERT, "(genMarkVertsCmd)", (const char *)&queryFormat, "genMarkVertsCmd") )
    __debugbreak();
  genMarkVertsCmd->system = FX_GetSystem(cmd->localClientNum);
  genMarkVertsCmd->marksSystem = FX_GetMarksSystem(cmd->localClientNum);
  genMarkVertsCmd->localClientNum = cmd->localClientNum;
  FxCamera::operator=(&genMarkVertsCmd->camera, &genMarkVertsCmd->system->command->camera);
}

/*
==============
FX_FillGenerateVertsCmd
==============
*/
void FX_FillGenerateVertsCmd(LocalClientNum_t localClientNum, GfxCodeSurfListType outList, FxGenerateVertsCmd *genVertsCmd)
{
  const FxSpriteSet *SpriteSet; 
  FxCamera *p_camera; 

  if ( !genVertsCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_draw.cpp", 19, ASSERT_TYPE_ASSERT, "(genVertsCmd)", (const char *)&queryFormat, "genVertsCmd") )
    __debugbreak();
  genVertsCmd->system = FX_GetSystem(localClientNum);
  genVertsCmd->beamInfo = FX_Beam_GetInfo();
  genVertsCmd->postLightInfo = FX_PostLight_GetInfo();
  SpriteSet = FX_GetSpriteSet();
  p_camera = &genVertsCmd->system->camera;
  genVertsCmd->spriteSet = SpriteSet;
  genVertsCmd->localClientNum = localClientNum;
  FxCamera::operator=(&genVertsCmd->camera, p_camera);
  genVertsCmd->outSurfListType = outList;
}

