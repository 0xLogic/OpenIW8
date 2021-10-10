/*
==============
R_GetStageByIndex
==============
*/

Stage *__fastcall R_GetStageByIndex(unsigned int stageIndex)
{
  return ?R_GetStageByIndex@@YAPEAUStage@@I@Z(stageIndex);
}

/*
==============
R_UpdateActiveStage
==============
*/

void __fastcall R_UpdateActiveStage(const GfxLight *primaryLights, GfxStageInfo *stageInfo, const vec3_t *viewPos)
{
  ?R_UpdateActiveStage@@YAXPEBUGfxLight@@PEAUGfxStageInfo@@AEBTvec3_t@@@Z(primaryLights, stageInfo, viewPos);
}

/*
==============
R_GetActiveStageIndex
==============
*/

unsigned int __fastcall R_GetActiveStageIndex(const vec3_t *viewPos)
{
  return ?R_GetActiveStageIndex@@YAIAEBTvec3_t@@@Z(viewPos);
}

/*
==============
R_GetActiveStageIndex
==============
*/
__int64 R_GetActiveStageIndex(const vec3_t *viewPos)
{
  unsigned int v1; 
  float v3; 
  float v4; 
  vec3_t point; 

  v1 = 1;
  if ( cm.stageCount <= 1u )
    return 0i64;
  while ( 1 )
  {
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_stages.cpp", 16, ASSERT_TYPE_ASSERT, "(stageIndex != 0)", (const char *)&queryFormat, "stageIndex != STAGE_DEFAULT") )
      __debugbreak();
    v3 = viewPos->v[1];
    point.v[0] = viewPos->v[0] - cm.stages[v1].origin.v[0];
    v4 = viewPos->v[2];
    point.v[1] = v3 - cm.stages[v1].origin.v[1];
    point.v[2] = v4 - cm.stages[v1].origin.v[2];
    if ( CM_TestStageTriggerContainsPoint(cm.stages[v1].triggerIndex, &point) )
      break;
    if ( ++v1 >= cm.stageCount )
      return 0i64;
  }
  return v1;
}

/*
==============
R_GetStageByIndex
==============
*/
Stage *R_GetStageByIndex(unsigned int stageIndex)
{
  __int64 v1; 
  int stageCount; 

  v1 = stageIndex;
  if ( stageIndex >= cm.stageCount )
  {
    stageCount = cm.stageCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_stages.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( stageIndex ) < (unsigned)( cm.stageCount )", "stageIndex doesn't index cm.stageCount\n\t%i not in [0, %i)", stageIndex, stageCount) )
      __debugbreak();
  }
  return &cm.stages[v1];
}

/*
==============
R_UpdateActiveStage
==============
*/
void R_UpdateActiveStage(const GfxLight *primaryLights, GfxStageInfo *stageInfo, const vec3_t *viewPos)
{
  unsigned int v5; 
  __int64 v6; 
  float v7; 
  float v8; 
  char v9; 
  bool v10; 
  Stage *stages; 
  double v12; 
  vec3_t point; 

  if ( !cm.stageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_stages.cpp", 62, ASSERT_TYPE_ASSERT, "(cm.stageCount > 0)", (const char *)&queryFormat, "cm.stageCount > 0") )
    __debugbreak();
  v5 = 1;
  v6 = 0i64;
  if ( cm.stageCount <= 1u )
  {
LABEL_10:
    v5 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_stages.cpp", 16, ASSERT_TYPE_ASSERT, "(stageIndex != 0)", (const char *)&queryFormat, "stageIndex != STAGE_DEFAULT") )
        __debugbreak();
      v7 = viewPos->v[1];
      point.v[0] = viewPos->v[0] - cm.stages[v5].origin.v[0];
      v8 = viewPos->v[2];
      point.v[1] = v7 - cm.stages[v5].origin.v[1];
      point.v[2] = v8 - cm.stages[v5].origin.v[2];
      if ( CM_TestStageTriggerContainsPoint(cm.stages[v5].triggerIndex, &point) )
        break;
      if ( ++v5 >= cm.stageCount )
        goto LABEL_10;
    }
  }
  stageInfo->stagesHaveSunPrimaryLight = 0;
  if ( cm.stageCount )
  {
    v9 = 0;
    do
    {
      v10 = cm.stages[v6].sunPrimaryLightIndex != 0;
      v6 = (unsigned int)(v6 + 1);
      v9 |= v10;
      stageInfo->stagesHaveSunPrimaryLight = v9;
    }
    while ( (unsigned int)v6 < cm.stageCount );
  }
  stages = cm.stages;
  *(__m256i *)&stageInfo->activeStage.name = *(__m256i *)&cm.stages[v5].name;
  v12 = *(double *)&stages[v5].skyRotationAngles.y;
  stageInfo->activeStageValid = v5 != 0;
  *(double *)&stageInfo->activeStage.skyRotationAngles.y = v12;
}

