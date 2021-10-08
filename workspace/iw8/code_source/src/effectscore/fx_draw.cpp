/*
==============
FX_DrawElement_Setup_Camera
==============
*/

void __fastcall FX_DrawElement_Setup_Camera(FxDrawState *drawState, const FxCamera *camera)
{
  ?FX_DrawElement_Setup_Camera@@YAXPEAUFxDrawState@@PEBUFxCamera@@@Z(drawState, camera);
}

/*
==============
FX_GenerateVerts
==============
*/

void __fastcall FX_GenerateVerts(const void *const cmdInfo)
{
  ?FX_GenerateVerts@@YAXQEBX@Z(cmdInfo);
}

/*
==============
FXIR_DrawSpriteElems
==============
*/
void FXIR_DrawSpriteElems(GfxCodeSurfGlob *codeSurfGlob, FxSystem *localSystemWrite, int drawTime, const FxCamera *camera, GfxCodeSurfListType codeSurfListType, const GfxBackEndData *backEndData)
{
  FxDrawState mem; 

  _RBX = camera;
  DebugWipe(&mem, 0x6A0ui64);
  if ( !localSystemWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw.cpp", 64, ASSERT_TYPE_ASSERT, "(localSystemWrite)", (const char *)&queryFormat, "localSystemWrite") )
    __debugbreak();
  if ( !localSystemWrite->camera.isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw.cpp", 65, ASSERT_TYPE_ASSERT, "(localSystemWrite->camera.isValid)", (const char *)&queryFormat, "localSystemWrite->camera.isValid") )
    __debugbreak();
  if ( codeSurfListType )
  {
    mem.drawFlares = 0;
  }
  else
  {
    R_BeginFlareSurfs(&mem.flareSurfGlob);
    mem.drawFlares = 1;
  }
  DebugWipe(&mem.sprite, 0x30ui64);
  mem.sprite.indexCount = 0;
  mem.system = localSystemWrite;
  if ( !_RBX )
    _RBX = &localSystemWrite->camera;
  __asm { vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000 }
  mem.camera = _RBX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+78h]
    vmovss  xmm1, dword ptr [rbx+70h]
    vxorps  xmm4, xmm0, xmm5
    vmovss  xmm0, dword ptr [rbx+74h]
    vxorps  xmm3, xmm0, xmm5
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm1, xmm5
    vinsertps xmm0, xmm0, xmm2, 0
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
    vmovups [rsp+6F8h+var_678], xmm0
    vmovss  xmm0, dword ptr [rbx+84h]
    vmovss  xmm1, dword ptr [rbx+80h]
    vxorps  xmm4, xmm0, xmm5
    vmovss  xmm0, dword ptr [rbx+7Ch]
    vxorps  xmm2, xmm0, xmm5
    vxorps  xmm3, xmm1, xmm5
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vmovups [rsp+6F8h+var_668], xmm1
    vinsertps xmm0, xmm0, dword ptr [rbx+88h], 0
    vinsertps xmm0, xmm0, dword ptr [rbx+8Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+90h], 20h ; ' '
  }
  mem.codeSurfListType = codeSurfListType;
  __asm { vmovups [rsp+6F8h+var_658], xmm0 }
  FX_DrawModularParticles(&mem, localSystemWrite, codeSurfGlob, backEndData);
  if ( mem.sprite.indexCount )
    FX_SpriteDirectFlush(codeSurfGlob, &mem.sprite, mem.sprite.perFrameActiveEmitterIndex != -1);
  if ( codeSurfListType == GFX_CODE_SURFLIST_EMISSIVE )
    R_EndFlareSurfs(&mem.flareSurfGlob);
}

/*
==============
FX_DrawElement_Setup_Camera
==============
*/
void FX_DrawElement_Setup_Camera(FxDrawState *drawState, const FxCamera *camera)
{
  _RAX = camera;
  if ( !camera )
    _RAX = &drawState->system->camera;
  __asm { vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000 }
  drawState->camera = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+78h]
    vmovss  xmm1, dword ptr [rax+70h]
    vxorps  xmm4, xmm0, xmm5
    vmovss  xmm0, dword ptr [rax+74h]
    vxorps  xmm3, xmm0, xmm5
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm2, xmm1, xmm5
    vinsertps xmm0, xmm0, xmm2, 0
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
    vmovups xmmword ptr [rcx+50h], xmm0
    vmovss  xmm0, dword ptr [rax+84h]
    vmovss  xmm1, dword ptr [rax+80h]
    vxorps  xmm4, xmm0, xmm5
    vmovss  xmm0, dword ptr [rax+7Ch]
    vxorps  xmm2, xmm0, xmm5
    vxorps  xmm3, xmm1, xmm5
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vmovups xmmword ptr [rcx+60h], xmm1
    vinsertps xmm0, xmm0, dword ptr [rax+88h], 0
    vinsertps xmm0, xmm0, dword ptr [rax+8Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rax+90h], 20h ; ' '
    vmovups xmmword ptr [rcx+70h], xmm0
  }
}

/*
==============
FX_DrawModularParticles
==============
*/
void FX_DrawModularParticles(FxDrawState *drawState, FxSystem *system, GfxCodeSurfGlob *codeSurfGlob, const GfxBackEndData *backEndData)
{
  __int64 localClientNum; 
  __int64 v9; 

  Profile2_UpdateEntry(88);
  if ( ((unsigned __int8)&dword_14FDE8130 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8130) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8130);
  if ( !drawState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw.cpp", 32, ASSERT_TYPE_ASSERT, "(drawState)", (const char *)&queryFormat, "drawState") )
    __debugbreak();
  if ( !system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw.cpp", 33, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( !codeSurfGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw.cpp", 34, ASSERT_TYPE_ASSERT, "(codeSurfGlob)", (const char *)&queryFormat, "codeSurfGlob") )
    __debugbreak();
  drawState->system = system;
  drawState->codeSurfGlob = codeSurfGlob;
  memset_0(drawState->atlasDataOwners, 0, sizeof(drawState->atlasDataOwners));
  localClientNum = system->localClientNum;
  if ( (unsigned int)localClientNum >= 2 )
  {
    LODWORD(v9) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  ParticleManager::DrawSpriteParticles(&g_particleManager[localClientNum], drawState, backEndData);
  Profile2_UpdateEntry(88);
  if ( ((unsigned __int64)&dword_14FDE8130 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8130) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8130);
}

/*
==============
FX_GenerateVerts
==============
*/
void FX_GenerateVerts(const void *const cmdInfo)
{
  __int64 v1; 
  GfxCodeSurfListType v3; 
  const GfxBackEndData *backEndData; 
  int v5; 
  const FxPostLightInfo *v6; 
  const FxCamera *v7; 
  GfxCodeSurfGlob *codeSurfGlobOut; 

  v1 = *(_QWORD *)cmdInfo;
  Profile_Begin(213);
  Profile2_UpdateEntry(87);
  if ( ((unsigned __int8)&dword_14FDE812C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE812C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE812C);
  v3 = *((_DWORD *)cmdInfo + 11);
  backEndData = frontEndDataOut;
  if ( v3 == GFX_CODE_SURFLIST_EMISSIVE )
  {
    R_FxLightGridSampleCountReset();
    v3 = *((_DWORD *)cmdInfo + 11);
  }
  if ( !R_BeginCodeSurfs(GFX_CODE_SURF_USER_FX, v3, &codeSurfGlobOut) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw.cpp", 127, ASSERT_TYPE_ASSERT, "(R_BeginCodeSurfs( GFX_CODE_SURF_USER_FX, cmd->outSurfListType, &codeSurfGlob ))", (const char *)&queryFormat, "R_BeginCodeSurfs( GFX_CODE_SURF_USER_FX, cmd->outSurfListType, &codeSurfGlob )") )
    __debugbreak();
  v5 = *(_DWORD *)(v1 + 32);
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)cmdInfo + 3) )
      FX_SpriteGenerateVerts(codeSurfGlobOut, (const FxGenerateVertsCmd *)cmdInfo);
    if ( *((_QWORD *)cmdInfo + 1) )
      FX_Beam_GenerateVerts(codeSurfGlobOut, (const FxGenerateVertsCmd *)cmdInfo);
    v6 = (const FxPostLightInfo *)*((_QWORD *)cmdInfo + 2);
    if ( v6 )
      FX_PostLight_GenerateVerts(codeSurfGlobOut, v6, (const FxGenerateVertsCmd *)cmdInfo);
    if ( (*(_BYTE *)(v1 + 72) & 3) == 0 )
    {
      v7 = (const FxCamera *)((char *)cmdInfo + 48);
      if ( fx_umbra_culling->current.enabled && !*((_DWORD *)cmdInfo + 11) )
        v7 = (const FxCamera *)(v1 + 96);
      FX_WaitEnterReadSystemLock(*(FxAccessLock **)(v1 + 64));
      FXIR_DrawSpriteElems(codeSurfGlobOut, (FxSystem *)v1, v5, v7, *((GfxCodeSurfListType *)cmdInfo + 11), backEndData);
      FX_ExitReadSystemLock(*(FxAccessLock **)(v1 + 64));
    }
    R_EndCodeSurfs(codeSurfGlobOut, GFX_CODE_SURF_USER_FX);
    if ( !*((_DWORD *)cmdInfo + 11) )
    {
      FX_ToggleVisBlockerFrame((FxSystem *)v1);
      if ( R_FxLightGridSampleCountInc(1) > 750 )
        R_WarnOncePerFrame(R_WARN_FX_MAX_LIGHTGRID_SAMPLE_COUNT);
    }
  }
  else
  {
    R_EndCodeSurfs(codeSurfGlobOut, GFX_CODE_SURF_USER_FX);
  }
  Profile2_UpdateEntry(87);
  if ( ((unsigned __int64)&dword_14FDE812C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE812C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE812C);
  Profile_EndInternal(NULL);
}

