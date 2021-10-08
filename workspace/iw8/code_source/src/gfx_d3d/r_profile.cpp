/*
==============
R_ProfBeginMaterial
==============
*/

void __fastcall R_ProfBeginMaterial(GfxCmdBufState *state)
{
  ?R_ProfBeginMaterial@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ProfEnable
==============
*/

void __fastcall R_ProfEnable(bool enable)
{
  ?R_ProfEnable@@YAX_N@Z(enable);
}

/*
==============
R_ProfSetMarkerImmediateContext
==============
*/

void __fastcall R_ProfSetMarkerImmediateContext(const char *str)
{
  ?R_ProfSetMarkerImmediateContext@@YAXPEBD@Z(str);
}

/*
==============
R_ProfBeginNamedEvent
==============
*/

void __fastcall R_ProfBeginNamedEvent(CmdBufState *state, const char *str)
{
  ?R_ProfBeginNamedEvent@@YAXPEAUCmdBufState@@PEBD@Z(state, str);
}

/*
==============
R_ProfBeginNamedEventImmediateContext
==============
*/

void __fastcall R_ProfBeginNamedEventImmediateContext(const char *str)
{
  ?R_ProfBeginNamedEventImmediateContext@@YAXPEBD@Z(str);
}

/*
==============
R_ProfSetMarkerInternal
==============
*/

void __fastcall R_ProfSetMarkerInternal(GfxDevice *device, const char *str)
{
  ?R_ProfSetMarkerInternal@@YAXPEAUGfxDevice@@PEBD@Z(device, str);
}

/*
==============
R_ProfEndNamedEvent
==============
*/

void __fastcall R_ProfEndNamedEvent(CmdBufState *state)
{
  ?R_ProfEndNamedEvent@@YAXPEAUCmdBufState@@@Z(state);
}

/*
==============
R_ProfSetMarker
==============
*/

void __fastcall R_ProfSetMarker(CmdBufState *state, const char *str)
{
  ?R_ProfSetMarker@@YAXPEAUCmdBufState@@PEBD@Z(state, str);
}

/*
==============
R_ProfIsEnabled
==============
*/

bool __fastcall R_ProfIsEnabled()
{
  return ?R_ProfIsEnabled@@YA_NXZ();
}

/*
==============
R_ProfSetPrimarySortKey
==============
*/

void __fastcall R_ProfSetPrimarySortKey(GfxCmdBufState *state, unsigned int primarySortKey)
{
  ?R_ProfSetPrimarySortKey@@YAXPEAUGfxCmdBufState@@I@Z(state, primarySortKey);
}

/*
==============
R_ProfBeginMaterials
==============
*/

void __fastcall R_ProfBeginMaterials(GfxCmdBufState *state)
{
  ?R_ProfBeginMaterials@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ProfEndMaterial
==============
*/

void __fastcall R_ProfEndMaterial(GfxCmdBufState *state)
{
  ?R_ProfEndMaterial@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ProfBeginNamedEventInternal
==============
*/

void __fastcall R_ProfBeginNamedEventInternal(GfxDevice *device, const char *str)
{
  ?R_ProfBeginNamedEventInternal@@YAXPEAUGfxDevice@@PEBD@Z(device, str);
}

/*
==============
R_ProfEndMaterials
==============
*/

void __fastcall R_ProfEndMaterials(GfxCmdBufState *state)
{
  ?R_ProfEndMaterials@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_ProfIsCapturing
==============
*/

bool __fastcall R_ProfIsCapturing()
{
  return ?R_ProfIsCapturing@@YA_NXZ();
}

/*
==============
R_ProfEndNamedEventImmediateContext
==============
*/

void R_ProfEndNamedEventImmediateContext(void)
{
  ?R_ProfEndNamedEventImmediateContext@@YAXXZ();
}

/*
==============
R_ProfEndNamedEventInternal
==============
*/

void __fastcall R_ProfEndNamedEventInternal(GfxDevice *device)
{
  ?R_ProfEndNamedEventInternal@@YAXPEAUGfxDevice@@@Z(device);
}

/*
==============
R_ProfBeginMaterial
==============
*/
void R_ProfBeginMaterial(GfxCmdBufState *state)
{
  const MaterialTechnique *technique; 
  const Material *material; 
  const MaterialTechniqueSet *v4; 
  const MaterialTechniqueSet *pixTechniqueSet; 
  const Material *pixMaterial; 
  const Material *v7; 

  if ( rg.profMaterial > 2 && state->pixTechnique != state->technique )
  {
    if ( state->pixMaterial )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_ProfEndNamedEventInternal(state->device);
      R_UnlockIfGfxImmediateContext(state->device);
      state->pixMaterial = NULL;
    }
    if ( state->pixTechniqueSet )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_ProfEndNamedEventInternal(state->device);
      R_UnlockIfGfxImmediateContext(state->device);
      state->pixTechniqueSet = NULL;
    }
    if ( state->pixTechnique )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_ProfEndNamedEventInternal(state->device);
      R_UnlockIfGfxImmediateContext(state->device);
      state->pixTechnique = NULL;
    }
    technique = state->technique;
    if ( technique )
    {
      R_ProfBeginNamedEvent(state, technique->name);
      state->pixTechnique = state->technique;
    }
  }
  if ( rg.profMaterial > 1 )
  {
    material = state->material;
    v4 = material ? material->techniqueSet : 0i64;
    pixTechniqueSet = state->pixTechniqueSet;
    if ( pixTechniqueSet != v4 )
    {
      if ( state->pixMaterial )
      {
        R_LockIfGfxImmediateContext(state->device);
        R_ProfEndNamedEventInternal(state->device);
        R_UnlockIfGfxImmediateContext(state->device);
        pixTechniqueSet = state->pixTechniqueSet;
        state->pixMaterial = NULL;
      }
      if ( pixTechniqueSet )
      {
        R_LockIfGfxImmediateContext(state->device);
        R_ProfEndNamedEventInternal(state->device);
        R_UnlockIfGfxImmediateContext(state->device);
        state->pixTechniqueSet = NULL;
      }
      if ( v4 )
      {
        R_ProfBeginNamedEvent(state, v4->name);
        state->pixTechniqueSet = v4;
      }
    }
  }
  if ( rg.profMaterial )
  {
    pixMaterial = state->pixMaterial;
    v7 = state->material;
    if ( pixMaterial != v7 )
    {
      if ( pixMaterial )
      {
        R_LockIfGfxImmediateContext(state->device);
        R_ProfEndNamedEventInternal(state->device);
        R_UnlockIfGfxImmediateContext(state->device);
        v7 = state->material;
        state->pixMaterial = NULL;
      }
      if ( v7 )
      {
        R_ProfBeginNamedEvent(state, v7->name);
        state->pixMaterial = state->material;
      }
    }
  }
}

/*
==============
R_ProfBeginMaterials
==============
*/
void R_ProfBeginMaterials(GfxCmdBufState *state)
{
  if ( state->pixCombine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 466, ASSERT_TYPE_ASSERT, "(!state->pixCombine)", (const char *)&queryFormat, "!state->pixCombine") )
    __debugbreak();
  if ( state->pixMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 467, ASSERT_TYPE_ASSERT, "(!state->pixMaterial)", (const char *)&queryFormat, "!state->pixMaterial") )
    __debugbreak();
  if ( state->pixTechniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 468, ASSERT_TYPE_ASSERT, "(!state->pixTechniqueSet)", (const char *)&queryFormat, "!state->pixTechniqueSet") )
    __debugbreak();
  if ( state->pixTechnique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 469, ASSERT_TYPE_ASSERT, "(!state->pixTechnique)", (const char *)&queryFormat, "!state->pixTechnique") )
    __debugbreak();
  state->pixCombine = 1;
  state->pixPrimarySortKey = -1;
}

/*
==============
R_ProfBeginNamedEvent
==============
*/
void R_ProfBeginNamedEvent(CmdBufState *state, const char *str)
{
  R_LockIfGfxImmediateContext(state->device);
  R_ProfBeginNamedEventInternal(state->device, str);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
R_ProfBeginNamedEventImmediateContext
==============
*/
void R_ProfBeginNamedEventImmediateContext(const char *str)
{
  R_LockGfxImmediateContext();
  R_ProfBeginNamedEventInternal(g_dx.immediateContext, str);
  R_UnlockGfxImmediateContext();
}

/*
==============
R_ProfBeginNamedEventInternal
==============
*/
void R_ProfBeginNamedEventInternal(GfxDevice *device, const char *str)
{
  struct _TEB *v4; 
  __int64 v5; 
  unsigned __int64 *v6; 
  unsigned __int64 *v7; 
  unsigned __int64 *v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  unsigned __int64 *destination; 
  unsigned __int64 *v13; 
  __int64 v14[2]; 
  char v15; 
  unsigned __int64 limit; 

  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( s_gpuProfEnabled )
  {
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 84, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    v4 = NtCurrentTeb();
    v5 = PIX_COLOR_DEFAULT_2;
    v6 = (unsigned __int64 *)v4->Reserved2[72];
    v7 = (unsigned __int64 *)v4->Reserved2[71];
    if ( v6 >= v7 )
    {
      if ( v7 )
        PIXBeginEventAllocate(PIX_COLOR_DEFAULT_2, str);
    }
    else
    {
      *v6 = (__rdtsc() << 20) | 0x800;
      v6[1] = v5;
      destination = v6 + 2;
      PIXCopyEventArgument<char const *>(&destination, v7 + 62, str);
      v8 = destination;
      *destination = 1048448i64;
      v4->Reserved2[72] = v8;
    }
    v14[0] = 2048i64;
    v13 = (unsigned __int64 *)&v15;
    v14[1] = v5;
    PIXCopyEventArgument<char const *>(&v13, &limit, str);
    v9 = (int)v13;
    *v13 = 0i64;
    v11 = (unsigned int)(v9 - (v10 + 64));
    ((void (__fastcall *)(GfxDevice *, _QWORD, __int64 *, __int64))device->m_pFunction[19].QueryInterface)(device, 0i64, v14, v11);
  }
}

/*
==============
R_ProfEnable
==============
*/
void R_ProfEnable(bool enable)
{
  s_gpuProfEnabled = enable;
}

/*
==============
R_ProfEndMaterial
==============
*/
void R_ProfEndMaterial(GfxCmdBufState *state)
{
  if ( !state->pixCombine )
    R_ProfEndMaterialInternal(state);
}

/*
==============
R_ProfEndMaterialInternal
==============
*/
void R_ProfEndMaterialInternal(GfxCmdBufState *state)
{
  if ( state->pixMaterial )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_ProfEndNamedEventInternal(state->device);
    R_UnlockIfGfxImmediateContext(state->device);
    state->pixMaterial = NULL;
  }
  if ( state->pixTechniqueSet )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_ProfEndNamedEventInternal(state->device);
    R_UnlockIfGfxImmediateContext(state->device);
    state->pixTechniqueSet = NULL;
  }
  if ( state->pixTechnique )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_ProfEndNamedEventInternal(state->device);
    R_UnlockIfGfxImmediateContext(state->device);
    state->pixTechnique = NULL;
  }
}

/*
==============
R_ProfEndMaterials
==============
*/
void R_ProfEndMaterials(GfxCmdBufState *state)
{
  if ( !state->pixCombine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 478, ASSERT_TYPE_ASSERT, "(state->pixCombine)", (const char *)&queryFormat, "state->pixCombine") )
    __debugbreak();
  R_ProfEndMaterialInternal(state);
  state->pixCombine = 0;
}

/*
==============
R_ProfEndNamedEvent
==============
*/
void R_ProfEndNamedEvent(CmdBufState *state)
{
  R_LockIfGfxImmediateContext(state->device);
  R_ProfEndNamedEventInternal(state->device);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
R_ProfEndNamedEventImmediateContext
==============
*/
void R_ProfEndNamedEventImmediateContext(void)
{
  R_LockGfxImmediateContext();
  R_ProfEndNamedEventInternal(g_dx.immediateContext);
  R_UnlockGfxImmediateContext();
}

/*
==============
R_ProfEndNamedEventInternal
==============
*/
void R_ProfEndNamedEventInternal(GfxDevice *device)
{
  struct _TEB *v2; 
  _QWORD *v3; 
  _QWORD *v4; 
  unsigned __int64 v5; 
  _QWORD *v6; 

  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( s_gpuProfEnabled )
  {
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 121, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    v2 = NtCurrentTeb();
    v3 = v2->Reserved2[72];
    v4 = v2->Reserved2[71];
    if ( v3 >= v4 )
    {
      if ( v4 )
        PIXEndEventAllocate();
    }
    else
    {
      v5 = __rdtsc();
      *v3 = (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) << 20;
      v6 = v3 + 1;
      *v6 = 1048448i64;
      v2->Reserved2[72] = v6;
    }
    device->m_pFunction[19].AddRef(device);
  }
}

/*
==============
R_ProfIsCapturing
==============
*/
bool R_ProfIsCapturing()
{
  return (PIXGetCaptureState_0() & 2) != 0;
}

/*
==============
R_ProfIsEnabled
==============
*/
_BOOL8 R_ProfIsEnabled()
{
  return s_gpuProfEnabled;
}

/*
==============
R_ProfSetMarker
==============
*/
void R_ProfSetMarker(CmdBufState *state, const char *str)
{
  R_LockIfGfxImmediateContext(state->device);
  R_ProfSetMarkerInternal(state->device, str);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
R_ProfSetMarkerImmediateContext
==============
*/
void R_ProfSetMarkerImmediateContext(const char *str)
{
  R_LockGfxImmediateContext();
  R_ProfSetMarkerInternal(g_dx.immediateContext, str);
  R_UnlockGfxImmediateContext();
}

/*
==============
R_ProfSetMarkerInternal
==============
*/
void R_ProfSetMarkerInternal(GfxDevice *device, const char *str)
{
  struct _TEB *v4; 
  __int64 v5; 
  unsigned __int64 *v6; 
  unsigned __int64 *v7; 
  unsigned __int64 *v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  unsigned __int64 *destination; 
  unsigned __int64 *v13; 
  __int64 v14[2]; 
  char v15; 
  unsigned __int64 limit; 

  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( s_gpuProfEnabled )
  {
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.cpp", 154, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    v4 = NtCurrentTeb();
    v5 = PIX_COLOR_DEFAULT_2;
    v6 = (unsigned __int64 *)v4->Reserved2[72];
    v7 = (unsigned __int64 *)v4->Reserved2[71];
    if ( v6 >= v7 )
    {
      if ( v7 )
        PIXSetMarkerAllocate(PIX_COLOR_DEFAULT_2, str);
    }
    else
    {
      *v6 = (__rdtsc() << 20) | 0x2000;
      v6[1] = v5;
      destination = v6 + 2;
      PIXCopyEventArgument<char const *>(&destination, v7 + 62, str);
      v8 = destination;
      *destination = 1048448i64;
      v4->Reserved2[72] = v8;
    }
    v14[0] = 0x2000i64;
    v13 = (unsigned __int64 *)&v15;
    v14[1] = v5;
    PIXCopyEventArgument<char const *>(&v13, &limit, str);
    v9 = (int)v13;
    *v13 = 0i64;
    v11 = (unsigned int)(v9 - (v10 + 64));
    ((void (__fastcall *)(GfxDevice *, _QWORD, __int64 *, __int64))device->m_pFunction[18].Release)(device, 0i64, v14, v11);
  }
}

/*
==============
R_ProfSetPrimarySortKey
==============
*/
void R_ProfSetPrimarySortKey(GfxCmdBufState *state, unsigned int primarySortKey)
{
  __int64 pixPrimarySortKey; 
  const char *v5; 

  pixPrimarySortKey = state->pixPrimarySortKey;
  if ( (_DWORD)pixPrimarySortKey != primarySortKey )
  {
    v5 = j_va("key: %d", pixPrimarySortKey);
    R_LockIfGfxImmediateContext(state->device);
    R_ProfSetMarkerInternal(state->device, v5);
    R_UnlockIfGfxImmediateContext(state->device);
    state->pixPrimarySortKey = primarySortKey;
  }
}

