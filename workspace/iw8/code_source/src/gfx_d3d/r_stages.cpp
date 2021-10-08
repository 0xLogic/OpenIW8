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
  vec3_t point; 

  v1 = 1;
  _RDI = viewPos;
  if ( cm.stageCount <= 1u )
    return 0i64;
  while ( 1 )
  {
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_stages.cpp", 16, ASSERT_TYPE_ASSERT, "(stageIndex != 0)", (const char *)&queryFormat, "stageIndex != STAGE_DEFAULT") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, dword ptr [rax+rcx*8+8]
      vmovss  dword ptr [rsp+58h+point], xmm1
      vsubss  xmm0, xmm2, dword ptr [rax+rcx*8+0Ch]
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+58h+point+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [rax+rcx*8+10h]
      vmovss  dword ptr [rsp+58h+point+8], xmm2
    }
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
  char v13; 
  bool v14; 
  vec3_t point; 

  _RSI = stageInfo;
  _RBP = viewPos;
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
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vmovss  xmm2, dword ptr [rbp+4]
        vsubss  xmm1, xmm0, dword ptr [rax+rcx*8+8]
        vmovss  dword ptr [rsp+68h+point], xmm1
        vsubss  xmm0, xmm2, dword ptr [rax+rcx*8+0Ch]
        vmovss  xmm1, dword ptr [rbp+8]
        vmovss  dword ptr [rsp+68h+point+4], xmm0
        vsubss  xmm2, xmm1, dword ptr [rax+rcx*8+10h]
        vmovss  dword ptr [rsp+68h+point+8], xmm2
      }
      if ( CM_TestStageTriggerContainsPoint(cm.stages[v5].triggerIndex, &point) )
        break;
      if ( ++v5 >= cm.stageCount )
        goto LABEL_10;
    }
  }
  _RSI->stagesHaveSunPrimaryLight = 0;
  if ( cm.stageCount )
  {
    v13 = 0;
    do
    {
      v14 = cm.stages[v6].sunPrimaryLightIndex != 0;
      v6 = (unsigned int)(v6 + 1);
      v13 |= v14;
      _RSI->stagesHaveSunPrimaryLight = v13;
    }
    while ( (unsigned int)v6 < cm.stageCount );
  }
  _RCX = 5i64 * v5;
  _RAX = cm.stages;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx*8]
    vmovups ymmword ptr [rsi], ymm0
    vmovsd  xmm1, qword ptr [rax+rcx*8+20h]
  }
  _RSI->activeStageValid = v5 != 0;
  __asm { vmovsd  qword ptr [rsi+20h], xmm1 }
}

