/*
==============
R_UpdateXModelBoundsDelayed
==============
*/

void __fastcall R_UpdateXModelBoundsDelayed(GfxSceneEntity *sceneEnt)
{
  ?R_UpdateXModelBoundsDelayed@@YAXPEAUGfxSceneEntity@@@Z(sceneEnt);
}

/*
==============
R_UpdateXModelBoundsDelayed
==============
*/
void R_UpdateXModelBoundsDelayed(GfxSceneEntity *sceneEnt)
{
  GfxSceneEntity *data; 

  data = sceneEnt;
  Sys_AddWorkerCmd(WRKCMD_BOUNDS_ENT_DELAYED, &data);
}

