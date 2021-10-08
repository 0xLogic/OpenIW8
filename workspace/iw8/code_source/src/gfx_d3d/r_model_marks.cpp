/*
==============
R_ShouldDrawFxModelVerts
==============
*/

bool __fastcall R_ShouldDrawFxModelVerts()
{
  return ?R_ShouldDrawFxModelVerts@@YA_NXZ();
}

/*
==============
R_GenerateMarkVertsForDynamicModels
==============
*/

void __fastcall R_GenerateMarkVertsForDynamicModels(FxMarksSystem *marksSystem, const FxCamera *camera, const GfxSceneMarkDrawData *drawData, unsigned int *indexCount, int viewmodelClientIndex)
{
  ?R_GenerateMarkVertsForDynamicModels@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@PEBUGfxSceneMarkDrawData@@PEAIH@Z(marksSystem, camera, drawData, indexCount, viewmodelClientIndex);
}

/*
==============
R_GenerateMarkVertsForDynamicModels
==============
*/
void R_GenerateMarkVertsForDynamicModels(FxMarksSystem *marksSystem, const FxCamera *camera, const GfxSceneMarkDrawData *drawData, unsigned int *indexCount)
{
  const unsigned __int8 *brushVisData; 
  int v9; 
  GfxPlacement *placement; 
  unsigned __int16 v11; 

  brushVisData = drawData->brushVisData;
  if ( !brushVisData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_marks.cpp", 85, ASSERT_TYPE_ASSERT, "(sceneBrushVisData)", (const char *)&queryFormat, "sceneBrushVisData") )
    __debugbreak();
  v9 = 0;
  if ( drawData->brushCount )
  {
    placement = &scene.sceneBrush[0].placement;
    do
    {
      if ( (*brushVisData & 1) != 0 )
      {
        v11 = *((_WORD *)&placement[-1].quat.xyz + 6);
        if ( v11 < drawData->entnumOrdinaryEnd )
          FX_GenerateMarkVertsForEntBrush(marksSystem, camera, drawData->dpvsLocalClientNum, v11, indexCount, placement);
      }
      ++v9;
      ++brushVisData;
      placement = (GfxPlacement *)((char *)placement + 88);
    }
    while ( v9 != drawData->brushCount );
  }
}

/*
==============
R_ShouldDrawFxModelVerts
==============
*/
__int64 R_ShouldDrawFxModelVerts()
{
  return fx_marks->current.color[0];
}

