/*
==============
G_FXEntity_ClearSystem
==============
*/

void G_FXEntity_ClearSystem(void)
{
  ?G_FXEntity_ClearSystem@@YAXXZ();
}

/*
==============
G_FXEntity_TriggerFX
==============
*/

void __fastcall G_FXEntity_TriggerFX(scrContext_t *scrContext)
{
  ?G_FXEntity_TriggerFX@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SV_GetFXEntity
==============
*/

FxEntity *__fastcall SV_GetFXEntity(unsigned int entnum)
{
  return ?SV_GetFXEntity@@YAPEAUFxEntity@@I@Z(entnum);
}

/*
==============
G_SaveFXEntities
==============
*/

void __fastcall G_SaveFXEntities(MemoryFile *memFile)
{
  ?G_SaveFXEntities@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_LoadFXEntities
==============
*/

void __fastcall G_LoadFXEntities(SaveGame *save)
{
  ?G_LoadFXEntities@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_FXEntitiesFreeAll
==============
*/

void G_FXEntitiesFreeAll(void)
{
  ?G_FXEntitiesFreeAll@@YAXXZ();
}

/*
==============
G_FXEntity_SpawnFX
==============
*/

void __fastcall G_FXEntity_SpawnFX(scrContext_t *scrContext)
{
  ?G_FXEntity_SpawnFX@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_FXEntityDelete
==============
*/

void __fastcall ScrCmd_FXEntityDelete(scr_entref_t entref)
{
  ?ScrCmd_FXEntityDelete@@YAXUscr_entref_t@@@Z(entref);
}

/*
==============
G_FXEntity_PlayLoopedFX
==============
*/

void __fastcall G_FXEntity_PlayLoopedFX(scrContext_t *scrContext)
{
  ?G_FXEntity_PlayLoopedFX@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ReserveNewIndex
==============
*/
__int64 ReserveNewIndex()
{
  __int64 i; 
  __int64 result; 
  int v2; 
  __int64 v3; 
  SoundEntFreeElem *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( s_soundGaplessNextIndex > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 106, ASSERT_TYPE_ASSERT, "( s_soundGaplessNextIndex ) <= ( ( 128 ) )", "s_soundGaplessNextIndex <= SOUND_ENTITY_MAX\n\t%i, %i", s_soundGaplessNextIndex, 128) )
    __debugbreak();
  if ( s_soundGapFirst )
    goto LABEL_48;
  if ( s_soundGaplessNextIndex != 128 )
    goto LABEL_49;
  if ( s_soundGapLast )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 109, ASSERT_TYPE_ASSERT, "( s_soundGapLast == 0 )", (const char *)&queryFormat, "s_soundGapLast == NULL") )
      __debugbreak();
    if ( s_soundGaplessNextIndex != 128 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = s_soundGaplessNextIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 91, ASSERT_TYPE_ASSERT, "( s_soundGaplessNextIndex ) == ( ( 128 ) )", "s_soundGaplessNextIndex == SOUND_ENTITY_MAX\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
  }
  for ( i = 0i64; i < 128; ++i )
  {
    if ( !s_serverSoundEntities[i].spawned && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 97, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SoundEnts appear to be full, but there are actually one or more available.") )
      __debugbreak();
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14411D288, 586i64);
  if ( s_soundGapFirst )
  {
LABEL_48:
    if ( !s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 124, ASSERT_TYPE_ASSERT, "( s_soundGapLast )", (const char *)&queryFormat, "s_soundGapLast") )
      __debugbreak();
    v2 = SoundGapQueue_IndexForElem(s_soundGapFirst);
    v3 = v2;
    if ( v2 < 0 )
    {
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 58, ASSERT_TYPE_ASSERT, "( num ) >= ( 0 )", "num >= 0\n\t%i, %i", v5, 0i64) )
        __debugbreak();
    }
    if ( (int)v3 >= 128 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 59, ASSERT_TYPE_ASSERT, "( num ) < ( ( 128 ) )", "num < SOUND_ENTITY_MAX\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    if ( !s_soundGapFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 60, ASSERT_TYPE_ASSERT, "( s_soundGapFirst )", (const char *)&queryFormat, "s_soundGapFirst") )
      __debugbreak();
    v4 = &s_soundGapQueue[v3];
    if ( s_soundGapFirst != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 61, ASSERT_TYPE_ASSERT, "( s_soundGapFirst == &s_soundGapQueue[num] )", (const char *)&queryFormat, "s_soundGapFirst == &s_soundGapQueue[num]") )
      __debugbreak();
    if ( s_soundGapLast == s_soundGapFirst )
    {
      if ( s_soundGapFirst->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 65, ASSERT_TYPE_ASSERT, "(s_soundGapFirst->next == 0)", (const char *)&queryFormat, "s_soundGapFirst->next == NULL") )
        __debugbreak();
      s_soundGapLast = NULL;
    }
    result = (unsigned int)v3;
    s_soundGapFirst = s_soundGapFirst->next;
    v4->next = NULL;
  }
  else
  {
LABEL_49:
    if ( s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 132, ASSERT_TYPE_ASSERT, "( s_soundGapLast == 0 )", (const char *)&queryFormat, "s_soundGapLast == NULL") )
      __debugbreak();
    if ( s_soundGaplessNextIndex >= 128 )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = s_soundGaplessNextIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 133, ASSERT_TYPE_ASSERT, "( s_soundGaplessNextIndex ) < ( ( 128 ) )", "s_soundGaplessNextIndex < SOUND_ENTITY_MAX\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    return (unsigned int)s_soundGaplessNextIndex++;
  }
  return result;
}

/*
==============
G_FXEntitiesFreeAll
==============
*/
void G_FXEntitiesFreeAll(void)
{
  FxEntity *v0; 

  v0 = g_fxEntities;
  do
  {
    if ( (v0->flags & 0x10) != 0 )
      G_FXEntityRelease(v0);
    ++v0;
  }
  while ( (__int64)v0 < (__int64)g_gapQueue );
}

/*
==============
G_FXEntityRelease
==============
*/
void G_FXEntityRelease(FxEntity *fxEnt)
{
  signed __int64 v2; 
  FXEntFreeElem *v3; 
  scrContext_t *v4; 

  if ( !fxEnt )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 191, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 148, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
      __debugbreak();
  }
  if ( fxEnt < g_fxEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 149, ASSERT_TYPE_ASSERT, "(fxEnt >= g_fxEntities)", (const char *)&queryFormat, "fxEnt >= g_fxEntities") )
    __debugbreak();
  if ( fxEnt >= (FxEntity *)g_gapQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 150, ASSERT_TYPE_ASSERT, "(fxEnt < ( g_fxEntities + ( sizeof( *array_counter( g_fxEntities ) ) + 0 ) ))", (const char *)&queryFormat, "fxEnt < ( g_fxEntities + ARRAY_COUNT( g_fxEntities ) )") )
    __debugbreak();
  v2 = fxEnt - g_fxEntities;
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 154, ASSERT_TYPE_ASSERT, "(result >= 0)", (const char *)&queryFormat, "result >= 0") )
    __debugbreak();
  if ( (int)v2 >= 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 155, ASSERT_TYPE_ASSERT, "(result < 1280)", (const char *)&queryFormat, "result < FX_ENTITY_MAX") )
    __debugbreak();
  if ( fxEnt != &g_fxEntities[(int)v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 156, ASSERT_TYPE_ASSERT, "(fxEnt == &g_fxEntities[result])", (const char *)&queryFormat, "fxEnt == &g_fxEntities[result]") )
    __debugbreak();
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 37, ASSERT_TYPE_ASSERT, "(num >= 0)", (const char *)&queryFormat, "num >= 0") )
    __debugbreak();
  if ( (int)v2 >= 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 38, ASSERT_TYPE_ASSERT, "(num < 1280)", (const char *)&queryFormat, "num < FX_ENTITY_MAX") )
    __debugbreak();
  v3 = &g_gapQueue[(int)v2];
  if ( v3 == g_gapFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 41, ASSERT_TYPE_ASSERT, "(thisItem != g_gapFirst)", (const char *)&queryFormat, "thisItem != g_gapFirst") )
    __debugbreak();
  if ( v3 == g_gapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 42, ASSERT_TYPE_ASSERT, "(thisItem != g_gapLast)", (const char *)&queryFormat, "thisItem != g_gapLast") )
    __debugbreak();
  if ( v3->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 43, ASSERT_TYPE_ASSERT, "(thisItem->next == 0)", (const char *)&queryFormat, "thisItem->next == NULL") )
    __debugbreak();
  if ( g_gapLast )
    g_gapLast->next = v3;
  else
    g_gapFirst = &g_gapQueue[(int)v2];
  g_gapLast = &g_gapQueue[(int)v2];
  v3->next = NULL;
  v4 = ScriptContext_Server();
  Scr_FreeEntityNum(v4, v2, ENTITY_CLASS_FXENTITY);
  fxEnt->flags &= ~0x10u;
  if ( g_fxEntsCount > 0 )
  {
    --g_fxEntsCount;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 202, ASSERT_TYPE_ASSERT, "(g_fxEntsCount > 0)", (const char *)&queryFormat, "g_fxEntsCount > 0") )
      __debugbreak();
    --g_fxEntsCount;
  }
}

/*
==============
G_FXEntity_ClearSystem
==============
*/
void G_FXEntity_ClearSystem(void)
{
  g_gapFirst = NULL;
  g_gapLast = NULL;
  g_gaplessNextIndex = 0;
  g_fxEntsCount = 0;
  memset_0(g_gapQueue, 0, sizeof(g_gapQueue));
  memset_0(g_fxEntities, 0, sizeof(g_fxEntities));
}

/*
==============
G_FXEntity_PlayLoopedFX
==============
*/

void __fastcall G_FXEntity_PlayLoopedFX(scrContext_t *scrContext, __int64 a2, double _XMM2_8)
{
  int givenAxisCount; 
  int fxId; 
  unsigned int v11; 
  unsigned int v13; 
  char v29; 
  int v52; 
  tmat33_t<vec3_t> v56; 
  vec3_t pos; 
  char v61; 

  __asm { vmovaps [rsp+0B8h+var_38], xmm7 }
  if ( Scr_GetNumParam(scrContext) < 3 || Scr_GetNumParam(scrContext) > 6 )
    Scr_Error(COM_ERR_5273, scrContext, "Incorrect number of parameters");
  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm6
    vmovaps [rsp+0B8h+var_48], xmm8
  }
  givenAxisCount = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  fxId = Scr_GetInt(scrContext, 0);
  v11 = Scr_GetNumParam(scrContext) - 4;
  if ( v11 )
  {
    __asm { vmovss  xmm8, cs:__real@3f800000 }
    v13 = v11 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_13;
      givenAxisCount = 1;
      Scr_GetVector(scrContext, 5u, &v56.m[2]);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+0B8h+vectorValue]
        vmovss  xmm6, dword ptr [rsp+0B8h+vectorValue+4]
        vmovss  xmm3, dword ptr [rsp+0B8h+vectorValue+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm4, xmm0, xmm0
        vucomiss xmm4, xmm7
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rsp+0B8h+vectorValue], xmm0
        vmulss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rsp+0B8h+vectorValue+8], xmm0
        vmovss  dword ptr [rsp+0B8h+vectorValue+4], xmm1
      }
      if ( v29 )
        Scr_FxParamError(COM_ERR_5387, scrContext, 5, "playLoopedFx called with (0 0 0) up direction", fxId);
    }
    Scr_GetVector(scrContext, 4u, v56.m);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0B8h+var_88]
      vmovss  xmm6, dword ptr [rsp+0B8h+var_88+4]
      vmovss  xmm3, dword ptr [rsp+0B8h+var_88+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm4, xmm0, xmm0
      vucomiss xmm4, xmm7
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm8, xmm0
      vdivss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rsp+0B8h+var_88], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+0B8h+var_88+8], xmm0
      vmovss  dword ptr [rsp+0B8h+var_88+4], xmm1
    }
    if ( v29 )
      Scr_FxParamError(COM_ERR_5388, scrContext, 4, "playLoopedFx called with (0 0 0) forward direction", fxId);
    ++givenAxisCount;
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm { vmovaps xmm7, xmm0 }
LABEL_13:
  Scr_GetVector(scrContext, 2u, &pos);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vmovaps xmm8, [rsp+0B8h+var_48]
    vmovaps xmm6, [rsp+0B8h+var_28]
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm4, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm4, 1
    vcvttss2si r14d, xmm1
  }
  if ( _ER14 <= 0 )
    Scr_FxParamError(COM_ERR_5389, scrContext, 1, "playLoopedFx called with repeat < 0.001 seconds", fxId);
  v52 = ReserveNewIndex_0();
  ++g_fxEntsCount;
  _RBX = &g_fxEntities[v52];
  LOBYTE(v52) = _RBX->flags;
  *(_QWORD *)_RBX->origin.v = 0i64;
  *(_QWORD *)&_RBX->origin.z = 0i64;
  *(_QWORD *)&_RBX->angles.y = 0i64;
  *(_QWORD *)&_RBX->loopingCullDist = 0i64;
  *(_DWORD *)&_RBX->fxId = 0;
  _RBX->flags |= (v52 + 1) & 0xF | 0x10;
  ScrCmd_FXEntityInit(scrContext, _RBX, fxId, &pos, &v56, givenAxisCount);
  _RBX->flags |= 0x20u;
  _RBX->un1.triggerTime = _ER14;
  __asm { vmovss  dword ptr [rbx+18h], xmm7 }
  Scr_FXEntityAdd(scrContext, _RBX);
  _R11 = &v61;
  __asm { vmovaps xmm7, xmmword ptr [r11-20h] }
}

/*
==============
G_FXEntity_SpawnFX
==============
*/
void G_FXEntity_SpawnFX(scrContext_t *scrContext)
{
  int givenAxisCount; 
  int fxId; 
  unsigned int v10; 
  char v26; 
  int v42; 
  FxEntity *v43; 
  tmat33_t<vec3_t> v48; 
  vec3_t pos; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm9
  }
  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_5270, scrContext, "Incorrect number of parameters");
  __asm { vmovaps [rsp+0A8h+var_18], xmm6 }
  givenAxisCount = 0;
  fxId = Scr_GetInt(scrContext, 0);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
  }
  v10 = Scr_GetNumParam(scrContext) - 3;
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_12;
    Scr_GetVector(scrContext, 3u, &v48.m[2]);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0A8h+vectorValue]
      vmovss  xmm6, dword ptr [rsp+0A8h+vectorValue+4]
      vmovss  xmm3, dword ptr [rsp+0A8h+vectorValue+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm4, xmm0, xmm0
      vucomiss xmm4, xmm9
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rsp+0A8h+vectorValue], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+0A8h+vectorValue+8], xmm0
      vmovss  dword ptr [rsp+0A8h+vectorValue+4], xmm1
    }
    if ( v26 )
      Scr_FxParamError(COM_ERR_5385, scrContext, 3, "spawnFx called with (0 0 0) up direction", fxId);
    givenAxisCount = 1;
  }
  Scr_GetVector(scrContext, 2u, v48.m);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+0A8h+var_78]
    vmovss  xmm6, dword ptr [rsp+0A8h+var_78+4]
    vmovss  xmm3, dword ptr [rsp+0A8h+var_78+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm4, xmm0, xmm0
    vucomiss xmm4, xmm9
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0A8h+var_78], xmm0
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0A8h+var_78+8], xmm0
    vmovss  dword ptr [rsp+0A8h+var_78+4], xmm1
  }
  if ( v26 )
    Scr_FxParamError(COM_ERR_5386, scrContext, 2, "spawnFx called with (0 0 0) forward direction", fxId);
  ++givenAxisCount;
LABEL_12:
  Scr_GetVector(scrContext, 1u, &pos);
  v42 = ReserveNewIndex_0();
  ++g_fxEntsCount;
  v43 = &g_fxEntities[v42];
  LOBYTE(v42) = v43->flags;
  *(_QWORD *)v43->origin.v = 0i64;
  *(_QWORD *)&v43->origin.z = 0i64;
  *(_QWORD *)&v43->angles.y = 0i64;
  *(_QWORD *)&v43->loopingCullDist = 0i64;
  *(_DWORD *)&v43->fxId = 0;
  v43->flags |= (v42 + 1) & 0xF | 0x10;
  ScrCmd_FXEntityInit(scrContext, v43, fxId, &pos, &v48, givenAxisCount);
  Scr_FXEntityAdd(scrContext, v43);
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
G_FXEntity_TriggerFX
==============
*/

void __fastcall G_FXEntity_TriggerFX(scrContext_t *scrContext, __int64 a2, double _XMM2_8)
{
  scr_entref_t EntityRef; 
  FxEntity *v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  bool v10; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetNumParam(scrContext) > 2 )
    Scr_Error(COM_ERR_5271, scrContext, "Incorrect number of parameters");
  EntityRef = Scr_GetEntityRef(scrContext, 0);
  if ( EntityRef.entclass != ENTITY_CLASS_FXENTITY )
  {
    Scr_ParamError(COM_ERR_5269, scrContext, 0, "Not an FXEntity");
    v6 = NULL;
    v7 = "fxEnt";
    v8 = "(fxEnt)";
    v9 = 355;
    goto LABEL_11;
  }
  if ( EntityRef.entnum >= 0x500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( 1280 )", "entref.entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", EntityRef.entnum, 1280) )
    __debugbreak();
  v10 = (g_fxEntities[EntityRef.entnum].flags & 0x10) == 0;
  v6 = &g_fxEntities[EntityRef.entnum];
  if ( v10 )
  {
    v7 = "FXEntity_IsValid( result )";
    v9 = 263;
    v8 = "(FXEntity_IsValid( result ))";
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", v9, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v7) )
      __debugbreak();
  }
  if ( (v6->flags & 0x20) != 0 )
    Scr_ParamError(COM_ERR_5272, scrContext, 0, "Not valid to call this with looping fxents.");
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vaddss  xmm3, xmm1, cs:__real@3f000000
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm4, xmm2, xmm3
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm4, 1
      vcvttss2si edx, xmm1; triggerTime
    }
    FXEntity_SetTriggerTime(v6, _EDX);
  }
  else
  {
    FXEntity_SetTriggerTime(v6, level.time);
  }
}

/*
==============
G_LoadFXEntities
==============
*/
void G_LoadFXEntities(SaveGame *save)
{
  FXEntFreeElem *v2; 
  int i; 
  FXEntFreeElem *v4; 
  FXEntFreeElem *v5; 
  FXEntFreeElem *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9[6]; 
  __int16 buffer; 
  __int16 v11; 
  __int16 v12; 
  __int16 v13; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 511, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(&g_fxEntsCount, 4, save);
  v2 = NULL;
  for ( v9[0] = 0; v9[0] < g_fxEntsCount; ++v9[0] )
  {
    SaveMemory_LoadRead(&buffer, 2, save);
    if ( (unsigned int)buffer >= 0x500 )
    {
      LODWORD(v8) = 1280;
      LODWORD(v7) = buffer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 519, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( 1280 )", "idx doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    SaveMemory_LoadRead(&g_fxEntities[buffer], 35, save);
    if ( (g_fxEntities[buffer].flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 521, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( &g_fxEntities[idx] ))", (const char *)&queryFormat, "FXEntity_IsValid( &g_fxEntities[idx] )") )
      __debugbreak();
  }
  v9[0] = 0;
  for ( i = 0; i < 1280; v9[0] = i )
  {
    v4 = &g_gapQueue[i];
    SaveMemory_LoadRead(&v11, 2, save);
    if ( v11 < 0 )
      v5 = NULL;
    else
      v5 = &g_gapQueue[v11];
    v4->next = v5;
    i = v9[0] + 1;
  }
  SaveMemory_LoadRead(&v12, 2, save);
  if ( v12 < 0 )
    v6 = NULL;
  else
    v6 = &g_gapQueue[v12];
  g_gapFirst = v6;
  SaveMemory_LoadRead(&v13, 2, save);
  if ( v13 >= 0 )
    v2 = &g_gapQueue[v13];
  g_gapLast = v2;
  SaveMemory_LoadRead(&g_gaplessNextIndex, 4, save);
  SaveMemory_LoadRead(v9, 4, save);
  if ( v9[0] != -1 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144350B30, 1227i64);
}

/*
==============
G_SaveFXEntities
==============
*/
void G_SaveFXEntities(MemoryFile *memFile)
{
  int v2; 
  int v3; 
  int v4; 
  FxEntity *v5; 
  FXEntFreeElem *next; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int16 p; 
  int v13; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 465, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  MemFile_WriteData(memFile, 4ui64, &g_fxEntsCount);
  v4 = 0;
  v13 = 0;
  do
  {
    v5 = &g_fxEntities[v4];
    if ( (g_fxEntities[v4].flags & 0x10) != 0 )
    {
      ++v3;
      p = v4;
      if ( (__int16)v4 != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 487, ASSERT_TYPE_ASSERT, "(idxEncoded == idx)", (const char *)&queryFormat, "idxEncoded == idx") )
        __debugbreak();
      if ( (unsigned int)p >= 0x500 )
      {
        LODWORD(v11) = 1280;
        LODWORD(v10) = p;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( idxEncoded ) < (unsigned)( 1280 )", "idxEncoded doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      MemFile_WriteData(memFile, 2ui64, &p);
      MemFile_WriteData(memFile, 0x23ui64, v5);
      v4 = v13;
    }
    v13 = ++v4;
  }
  while ( v4 < 1280 );
  if ( v3 != g_fxEntsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 493, ASSERT_TYPE_ASSERT, "( countAsserter ) == ( g_fxEntsCount )", "%s == %s\n\t%i, %i", "countAsserter", "g_fxEntsCount", v3, g_fxEntsCount) )
    __debugbreak();
  v13 = 0;
  do
  {
    next = g_gapQueue[v2].next;
    if ( next )
      v7 = GapQueue_IndexForElem(next);
    else
      v7 = -1;
    p = v7;
    if ( (__int16)v7 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 443, ASSERT_TYPE_ASSERT, "(encoded == index)", (const char *)&queryFormat, "encoded == index") )
      __debugbreak();
    MemFile_WriteData(memFile, 2ui64, &p);
    v2 = v13 + 1;
    v13 = v2;
  }
  while ( v2 < 1280 );
  if ( g_gapFirst )
    v8 = GapQueue_IndexForElem(g_gapFirst);
  else
    v8 = -1;
  p = v8;
  if ( (__int16)v8 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 443, ASSERT_TYPE_ASSERT, "(encoded == index)", (const char *)&queryFormat, "encoded == index") )
    __debugbreak();
  MemFile_WriteData(memFile, 2ui64, &p);
  if ( g_gapLast )
    v9 = GapQueue_IndexForElem(g_gapLast);
  else
    v9 = -1;
  p = v9;
  if ( (__int16)v9 != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 443, ASSERT_TYPE_ASSERT, "(encoded == index)", (const char *)&queryFormat, "encoded == index") )
    __debugbreak();
  MemFile_WriteData(memFile, 2ui64, &p);
  MemFile_WriteData(memFile, 4ui64, &g_gaplessNextIndex);
  v13 = -1;
  MemFile_WriteData(memFile, 4ui64, &v13);
}

/*
==============
GapQueue_IndexForElem
==============
*/
__int64 GapQueue_IndexForElem(FXEntFreeElem *elem)
{
  signed __int64 v2; 

  if ( elem < g_gapQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 76, ASSERT_TYPE_ASSERT, "(elem >= g_gapQueue)", (const char *)&queryFormat, "elem >= g_gapQueue") )
    __debugbreak();
  if ( elem >= (FXEntFreeElem *)&g_gapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 77, ASSERT_TYPE_ASSERT, "(elem < ( g_gapQueue + ( sizeof( *array_counter( g_gapQueue ) ) + 0 ) ))", (const char *)&queryFormat, "elem < ( g_gapQueue + ARRAY_COUNT( g_gapQueue ) )") )
    __debugbreak();
  v2 = elem - g_gapQueue;
  if ( (int)v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 80, ASSERT_TYPE_ASSERT, "(result >= 0)", (const char *)&queryFormat, "result >= 0") )
    __debugbreak();
  if ( (int)v2 >= 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 81, ASSERT_TYPE_ASSERT, "(result < 1280)", (const char *)&queryFormat, "result < FX_ENTITY_MAX") )
    __debugbreak();
  if ( elem != &g_gapQueue[(int)v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 83, ASSERT_TYPE_ASSERT, "(elem == &g_gapQueue[result])", (const char *)&queryFormat, "elem == &g_gapQueue[result]") )
    __debugbreak();
  return (unsigned int)v2;
}

/*
==============
SV_GetFXEntity
==============
*/
FxEntity *SV_GetFXEntity(unsigned int entnum)
{
  __int64 v1; 
  int v4; 

  v1 = entnum;
  if ( entnum >= 0x500 )
  {
    v4 = 1280;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 426, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( 1280 )", "entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", entnum, v4) )
      __debugbreak();
  }
  return &g_fxEntities[v1];
}

/*
==============
ScrCmd_FXEntityDelete
==============
*/
void ScrCmd_FXEntityDelete(scr_entref_t entref)
{
  unsigned int entnum; 
  bool v2; 
  FxEntity *v3; 
  __int64 v4; 
  int v5; 

  entnum = entref.entnum;
  if ( entref.entclass != ENTITY_CLASS_FXENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 272, ASSERT_TYPE_ASSERT, "(entref.entclass == ENTITY_CLASS_FXENTITY)", (const char *)&queryFormat, "entref.entclass == ENTITY_CLASS_FXENTITY") )
    __debugbreak();
  if ( entnum >= 0x500 )
  {
    v5 = 1280;
    LODWORD(v4) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( 1280 )", "entref.entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (g_fxEntities[entnum].flags & 0x10) == 0;
  v3 = &g_fxEntities[entnum];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 276, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( result ))", (const char *)&queryFormat, "FXEntity_IsValid( result )") )
    __debugbreak();
  G_FXEntityRelease(v3);
}

/*
==============
ScrCmd_FXEntityInit
==============
*/
void ScrCmd_FXEntityInit(scrContext_t *scrContext, FxEntity *fxEnt, int fxId, const vec3_t *pos, tmat33_t<vec3_t> *axis, int givenAxisCount)
{
  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 292, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  fxEnt->fxId = fxId;
  if ( (unsigned __int16)fxId != fxId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 295, ASSERT_TYPE_ASSERT, "( fxEnt->fxId ) == ( fxId )", "%s == %s\n\t%i, %i", "fxEnt->fxId", "fxId", (unsigned __int16)fxId, fxId) )
    __debugbreak();
  fxEnt->origin.v[0] = pos->v[0];
  fxEnt->origin.v[1] = pos->v[1];
  fxEnt->origin.v[2] = pos->v[2];
  Scr_SetFxAngles(scrContext, givenAxisCount, axis, &fxEnt->angles, fxId);
  if ( (fxEnt->flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 96, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to get trigger time on a looping-type FX entity.", "!FXEntity_IsLoopingType( fxEnt )") )
    __debugbreak();
  if ( fxEnt->un1.triggerTime )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 298, ASSERT_TYPE_ASSERT, "(FXEntity_GetTriggerTime( fxEnt ) == 0)", (const char *)&queryFormat, "FXEntity_GetTriggerTime( fxEnt ) == 0") )
      __debugbreak();
  }
}

/*
==============
Scr_FXEntityAdd
==============
*/
void Scr_FXEntityAdd(scrContext_t *scrContext, FxEntity *fxEnt)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 

  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 239, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  if ( (fxEnt->flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 240, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( fxEnt ))", (const char *)&queryFormat, "FXEntity_IsValid( fxEnt )") )
    __debugbreak();
  v4 = (__int64)((unsigned __int128)(((char *)fxEnt - (char *)g_fxEntities) * (__int128)0xE38E38E38E38E39i64) >> 64) >> 1;
  v5 = (v4 >> 63) + v4;
  if ( (unsigned int)v5 >= 0x500 )
  {
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_server.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 1280 )", "index doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v6, 1280) )
      __debugbreak();
  }
  Scr_AddEntityNum(scrContext, v5, ENTITY_CLASS_FXENTITY);
}

