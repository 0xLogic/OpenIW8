/*
==============
RBT_MayhemSelfVis_UpdateAnimBuffer
==============
*/

void __fastcall RBT_MayhemSelfVis_UpdateAnimBuffer(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RBT_MayhemSelfVis_UpdateAnimBuffer@@YAXPEAUComputeCmdBufState@@PEBUGfxTaskInfo@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, taskInfo, viewInfo, data);
}

/*
==============
cRBT_MayhemSelfVis_UpdateAnimBuffer<R_TG_Handle>
==============
*/

unsigned int __fastcall cRBT_MayhemSelfVis_UpdateAnimBuffer<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  return ??$cRBT_MayhemSelfVis_UpdateAnimBuffer@UR_TG_Handle@@@@YAIPEAUR_TG_Script@@AEBUR_TG_Handle@@@Z(context, <args_0>);
}

/*
==============
cRBT_MayhemSelfVis_UpdateAnimBuffer<R_TG_Handle>
==============
*/
unsigned int cRBT_MayhemSelfVis_UpdateAnimBuffer<R_TG_Handle>(R_TG_Script *context, const R_TG_Handle *<args_0>)
{
  R_TG_AddTaskStack stack; 

  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = &<args_0>->index;
  return R_TG_AddTask(context, g_R_TG_Def_RBT_MayhemSelfVis_UpdateAnimBuffer.m_index, &stack);
}

/*
==============
RBT_MayhemSelfVis_UpdateAnimBuffer
==============
*/
void RBT_MayhemSelfVis_UpdateAnimBuffer(ComputeCmdBufState *computeState, const GfxTaskInfo *taskInfo, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  RB_MayhemSelfVis_UpdateAnimBuffer(computeState, data);
}

