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

void __fastcall PhysicsFX_Debug_Draw(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  const dvar_t *v8; 
  const dvar_t *v21; 
  const dvar_t *v29; 
  int integer; 
  const dvar_t *v37; 
  const dvar_t *v45; 
  int v46; 
  const dvar_t *v53; 
  const dvar_t *v61; 
  int v62; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  int forceColor; 
  int forceColora; 
  int forceColorb; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  char dest[256]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v8 = DVARBOOL_physicsFX_debugPerformance;
  _RDI = y;
  _RBX = x;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARBOOL_physicsFX_debugPerformance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugPerformance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm { vmovss  xmm6, [rsp+1C8h+charHeight] }
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:s_physicsFX_Debug_LastStepTime
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvtss2sd xmm3, xmm1, xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x100ui64, "Physics FX Last timestep: %.2fms", *(double *)&_XMM3);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v90, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
    }
  }
  v21 = DVARBOOL_physicsFX_debugDrawFXPipelines;
  if ( !DVARBOOL_physicsFX_debugDrawFXPipelines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelines") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipelines");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v91, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovaps xmm3, xmm7; tabWidth
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm6
    }
    HavokPhysicsFX_Debug_DrawFXPipelines(scrPlace, _RBX, _RDI, *(float *)&_XMM3, fmt);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  v29 = DVARINT_physicsFX_debugDrawFXPipelineId;
  if ( !DVARINT_physicsFX_debugDrawFXPipelineId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  integer = v29->current.integer;
  if ( integer >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipeline %i", (unsigned int)integer);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v92, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovss  [rsp+1C8h+forceColor], xmm6
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm7
    }
    HavokPhysicsFX_Debug_DrawFXPipeline(integer, scrPlace, _RBX, _RDI, fmta, *(float *)&forceColor);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  v37 = DVARBOOL_physicsFX_debugDrawFXShapes;
  if ( !DVARBOOL_physicsFX_debugDrawFXShapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXShapes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Shapes");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v93, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovaps xmm3, xmm7; tabWidth
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm6
    }
    HavokPhysicsFX_Debug_DrawFXShapes(scrPlace, _RBX, _RDI, *(float *)&_XMM3, fmtb);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  v45 = DVARINT_physicsFX_debugDrawFXShapeId;
  if ( !DVARINT_physicsFX_debugDrawFXShapeId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXShapeId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  v46 = v45->current.integer;
  if ( v46 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Shape %i", (unsigned int)v46);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v94, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovss  [rsp+1C8h+forceColor], xmm6
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm7
    }
    HavokPhysicsFX_Debug_DrawFXShape(v46, scrPlace, _RBX, _RDI, fmtc, *(float *)&forceColora);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  v53 = DVARBOOL_physicsFX_debugDrawFXPipelineInstances;
  if ( !DVARBOOL_physicsFX_debugDrawFXPipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstances") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipeline Instances");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v95, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovaps xmm3, xmm7; tabWidth
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm6
    }
    HavokPhysicsFX_Debug_DrawFXPipelineInstances(scrPlace, _RBX, _RDI, *(float *)&_XMM3, fmtd);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  v61 = DVARINT_physicsFX_debugDrawFXPipelineInstanceId;
  if ( !DVARINT_physicsFX_debugDrawFXPipelineInstanceId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstanceId") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v61);
  v62 = v61->current.integer;
  if ( v62 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Pipeline Instance %i", (unsigned int)v62);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v96, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovss  [rsp+1C8h+forceColor], xmm6
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm7
    }
    HavokPhysicsFX_Debug_DrawFXPipelineInstance(v62, scrPlace, _RBX, _RDI, fmte, *(float *)&forceColorb);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
    v69 = DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles;
    if ( !DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawFXPipelineInstanceDrawParticles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    if ( v69->current.enabled )
      HavokPhysicsFX_Debug_DrawFXParticles(v62);
  }
  v70 = DVARBOOL_physicsFX_debugDrawSounds;
  if ( !DVARBOOL_physicsFX_debugDrawSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physicsFX_debugDrawSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  if ( v70->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics FX Sounds");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v97, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rbx]
      vmovaps xmm3, xmm7; tabWidth
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rsp+1C8h+fmt], xmm6
    }
    HavokPhysicsFX_Debug_DrawSounds(scrPlace, _RBX, _RDI, *(float *)&_XMM3, fmtf);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+1C8h+var_58]
    vmovaps xmm7, [rsp+1C8h+var_68]
  }
}

/*
==============
PhysicsFX_Debug_SetLastFrameTime
==============
*/

void __fastcall PhysicsFX_Debug_SetLastFrameTime(double time)
{
  __asm { vmovss  cs:s_physicsFX_Debug_LastStepTime, xmm0 }
}

