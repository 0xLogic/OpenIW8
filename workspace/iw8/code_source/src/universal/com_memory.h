/*
==============
Com_DebugMayBeOnStack<GfxCmdBufState>
==============
*/

bool __fastcall Com_DebugMayBeOnStack<GfxCmdBufState>(GfxCmdBufState *object)
{
  return ??$Com_DebugMayBeOnStack@UGfxCmdBufState@@@@YA_NPEAUGfxCmdBufState@@@Z(object);
}

/*
==============
Com_DebugMayBeOnStack<GfxCmdBufState>
==============
*/
bool Com_DebugMayBeOnStack<GfxCmdBufState>(GfxCmdBufState *object)
{
  char v2; 

  return &v2 >= (char *)&object[-2].constants[3][9].bufferSize && &v2 < (char *)&object[2].shaderResourceViews[1][13];
}

