/*
==============
R_BackendGpuStatus_Dump
==============
*/

void R_BackendGpuStatus_Dump(void)
{
  ?R_BackendGpuStatus_Dump@@YAXXZ();
}

/*
==============
GpuStatus_Printf
==============
*/

void GpuStatus_Printf(const char *fmt, ...)
{
  ?GpuStatus_Printf@@YAXPEBDZZ(fmt);
}

/*
==============
R_BackendGpuStatus_UpdateQueueData
==============
*/

void __fastcall R_BackendGpuStatus_UpdateQueueData(ComputeCmdBufState *state, GfxBackendSection section, unsigned int queueIndex, unsigned int data)
{
  ?R_BackendGpuStatus_UpdateQueueData@@YAXPEAUComputeCmdBufState@@W4GfxBackendSection@@II@Z(state, section, queueIndex, data);
}

/*
==============
R_BackendGpuStatus_Init
==============
*/

void R_BackendGpuStatus_Init(void)
{
  ?R_BackendGpuStatus_Init@@YAXXZ();
}

/*
==============
R_BackendGpuStatus_Update
==============
*/

void __fastcall R_BackendGpuStatus_Update(ComputeCmdBufState *state, GfxBackendSection section)
{
  ?R_BackendGpuStatus_Update@@YAXPEAUComputeCmdBufState@@W4GfxBackendSection@@@Z(state, section);
}

/*
==============
GpuStatus_Printf
==============
*/
void GpuStatus_Printf(const char *fmt, ...)
{
  char dest[256]; 
  va_list va; 

  va_start(va, fmt);
  Com_vsprintf(dest, 0x100ui64, fmt, va);
  Com_Printf(8, (const char *)&queryFormat, dest);
}

/*
==============
R_BackendGpuStatus_Dump
==============
*/
void R_BackendGpuStatus_Dump(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 

  GpuStatus_Printf("*\n* Backend GPU Status:\n");
  v0 = *(_DWORD *)g_backEndStatusLabels;
  v1 = *((_DWORD *)g_backEndStatusLabels + 2);
  v2 = *((_DWORD *)g_backEndStatusLabels + 4);
  v3 = *((_DWORD *)g_backEndStatusLabels + 6);
  if ( *(_DWORD *)g_backEndStatusLabels != -1 )
  {
    GpuStatus_Printf("* %s\n", "GFX CP");
    v4 = g_backEndStatusSections[(unsigned __int16)v0];
    if ( HIWORD(v0) == 0xFFFF )
      GpuStatus_Printf("*   %s\n", v4);
    else
      GpuStatus_Printf("*   %s %u\n", v4, HIWORD(v0));
  }
  if ( v1 != -1 )
  {
    GpuStatus_Printf("* %s\n", "GFX CU");
    v5 = g_backEndStatusSections[(unsigned __int16)v1];
    if ( HIWORD(v1) == 0xFFFF )
      GpuStatus_Printf("*   %s\n", v5);
    else
      GpuStatus_Printf("*   %s %u\n", v5, HIWORD(v1));
  }
  if ( v2 != -1 )
  {
    GpuStatus_Printf("* %s\n", "Compute CP");
    v6 = g_backEndStatusSections[(unsigned __int16)v2];
    if ( HIWORD(v2) == 0xFFFF )
      GpuStatus_Printf("*   %s\n", v6);
    else
      GpuStatus_Printf("*   %s %u\n", v6, HIWORD(v2));
  }
  if ( v3 != -1 )
  {
    GpuStatus_Printf("* %s\n", "Compute CU");
    v7 = g_backEndStatusSections[(unsigned __int16)v3];
    if ( HIWORD(v3) == 0xFFFF )
      GpuStatus_Printf("*   %s\n", v7);
    else
      GpuStatus_Printf("*   %s %u\n", v7, HIWORD(v3));
  }
  GpuStatus_Printf("*\n");
}

/*
==============
R_BackendGpuStatus_Init
==============
*/
void R_BackendGpuStatus_Init(void)
{
  unsigned __int64 *v1; 
  GfxBufferCreationContext v2; 

  v2.zoneName = (char *)&queryFormat.fmt + 3;
  v2.objectName = "Backend Status Labels";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+38h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+38h+var_18.zoneName], xmm0
  }
  v1 = (unsigned __int64 *)R_AllocGfxBufferMemory(0x20u, &v2);
  g_backEndStatusLabels = v1;
  *v1 = 0xFFFFFFFFi64;
  v1[1] = 0xFFFFFFFFi64;
  v1[2] = 0xFFFFFFFFi64;
  v1[3] = 0xFFFFFFFFi64;
}

/*
==============
R_BackendGpuStatus_Update
==============
*/
void R_BackendGpuStatus_Update(ComputeCmdBufState *state, GfxBackendSection section)
{
  unsigned int v3; 

  v3 = section - 0x10000;
  R_LockGfxImmediateContext();
  R_GPULabel_Signal(state, g_backEndStatusLabels + 1, v3);
  R_GPULabel_Set(state, g_backEndStatusLabels, v3, 0);
  R_UnlockGfxImmediateContext();
}

/*
==============
R_BackendGpuStatus_UpdateQueueData
==============
*/
void R_BackendGpuStatus_UpdateQueueData(ComputeCmdBufState *state, GfxBackendSection section, unsigned int queueIndex, unsigned int data)
{
  unsigned int v8; 
  __int64 v9; 

  if ( queueIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_gpu_status.cpp", 106, ASSERT_TYPE_ASSERT, "(queueIndex < 2)", (const char *)&queryFormat, "queueIndex < 2") )
    __debugbreak();
  if ( data > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_gpu_status.cpp", 107, ASSERT_TYPE_ASSERT, "(data <= 0xffff)", (const char *)&queryFormat, "data <= USHRT_MAX") )
    __debugbreak();
  v8 = section + (data << 16);
  R_LockGfxImmediateContext();
  v9 = 2 * queueIndex;
  R_GPULabel_Signal(state, &g_backEndStatusLabels[(unsigned int)(v9 + 1)], v8);
  R_GPULabel_Set(state, &g_backEndStatusLabels[v9], v8, 0);
  R_UnlockGfxImmediateContext();
}

