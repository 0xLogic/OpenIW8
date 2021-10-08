/*
==============
R_InitializeDefaultDeviceStates
==============
*/

void __fastcall R_InitializeDefaultDeviceStates(GfxCmdBufState *state)
{
  ?R_InitializeDefaultDeviceStates@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_InitializeDefaultDeviceStates
==============
*/
void R_InitializeDefaultDeviceStates(GfxCmdBufState *state)
{
  state->deviceState.blendFactor[0] = 1.0;
  state->deviceState.blendFactor[1] = 1.0;
  state->deviceState.blendFactor[2] = 1.0;
  state->deviceState.blendFactor[3] = 1.0;
  state->deviceState.sampleMask = -1;
  state->deviceState.numRenderTargets = 0;
  state->deviceState.pipelineState = NULL;
}

