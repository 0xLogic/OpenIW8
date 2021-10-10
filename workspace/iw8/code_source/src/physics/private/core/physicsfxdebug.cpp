/*
==============
PhysicsFX_Debug_SetLastFrameTime
==============
*/

void __fastcall PhysicsFX_Debug_SetLastFrameTime(float time)
{
  ?PhysicsFX_Debug_SetLastFrameTime@@YAXM@Z(time);
}

/*
==============
PhysicsFX_Debug_Draw
==============
*/

void __fastcall PhysicsFX_Debug_Draw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?PhysicsFX_Debug_Draw@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
PhysicsFX_Debug_Draw
==============
*/
void PhysicsFX_Debug_Draw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const dvar_t *v5; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  char dest[256]; 

  v5 = DVARBOOL_physicsFX_debugPerformance;
  if ( !DVARBOOL_physicsFX_debugPerformance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugPerformance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Last timestep: %.2fms", (float)(s_physicsFX_Debug_LastStepTime * 1000.0));
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
  }
  v9 = DVARBOOL_physicsFX_debugDrawFXPipelines;
  if ( !DVARBOOL_physicsFX_debugDrawFXPipelines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelines") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipelines");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawFXPipelines(scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  v10 = DVARINT_physicsFX_debugDrawFXPipelineId;
  if ( !DVARINT_physicsFX_debugDrawFXPipelineId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  if ( integer >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipeline %i", (unsigned int)integer);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawFXPipeline(integer, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  v12 = DVARBOOL_physicsFX_debugDrawFXShapes;
  if ( !DVARBOOL_physicsFX_debugDrawFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXShapes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Shapes");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawFXShapes(scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  v13 = DVARINT_physicsFX_debugDrawFXShapeId;
  if ( !DVARINT_physicsFX_debugDrawFXShapeId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXShapeId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.integer;
  if ( v14 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Shape %i", (unsigned int)v14);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawFXShape(v14, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  v15 = DVARBOOL_physicsFX_debugDrawFXPipelineInstances;
  if ( !DVARBOOL_physicsFX_debugDrawFXPipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstances") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipeline Instances");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawFXPipelineInstances(scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  v16 = DVARINT_physicsFX_debugDrawFXPipelineInstanceId;
  if ( !DVARINT_physicsFX_debugDrawFXPipelineInstanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstanceId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.integer;
  if ( v17 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipeline Instance %i", (unsigned int)v17);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawFXPipelineInstance(v17, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
    v18 = DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles;
    if ( !DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstanceDrawParticles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
      HavokPhysicsFX_Debug_DrawFXParticles(v17);
  }
  v19 = DVARBOOL_physicsFX_debugDrawSounds;
  if ( !DVARBOOL_physicsFX_debugDrawSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Sounds");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    HavokPhysicsFX_Debug_DrawSounds(scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
}

/*
==============
PhysicsFX_Debug_SetLastFrameTime
==============
*/
void PhysicsFX_Debug_SetLastFrameTime(float time)
{
  s_physicsFX_Debug_LastStepTime = time;
}

