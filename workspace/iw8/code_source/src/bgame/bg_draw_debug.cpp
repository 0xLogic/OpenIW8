/*
==============
BG_DrawDebug_PlayerVignetteActive
==============
*/

bool __fastcall BG_DrawDebug_PlayerVignetteActive(int flags)
{
  return ?BG_DrawDebug_PlayerVignetteActive@@YA_NH@Z(flags);
}

/*
==============
BG_DrawDebug_PlayerVignettePrint
==============
*/

void __fastcall BG_DrawDebug_PlayerVignettePrint(const playerState_s *ps, int client, const char *uniqueString, unsigned int flags, bool linked, int time, const char *modelName, const char *tagName, vec3_t *linkTagOrigin, vec3_t *linkTagAngles)
{
  ?BG_DrawDebug_PlayerVignettePrint@@YAXPEBUplayerState_s@@HPEBDI_NH11AEATvec3_t@@3@Z(ps, client, uniqueString, flags, linked, time, modelName, tagName, linkTagOrigin, linkTagAngles);
}

/*
==============
BG_DrawDebug_PlayerVignetteActive
==============
*/
bool BG_DrawDebug_PlayerVignetteActive(int flags)
{
  const dvar_t *v1; 
  char v2; 
  bool IsMainThread; 
  const dvar_t *v5; 
  bool v6; 
  const dvar_t *v7; 

  v1 = DCONST_DVARINT_debugVignette;
  v2 = flags;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.integer )
    return 0;
  if ( (v2 & 1) == 0 )
    return 1;
  IsMainThread = Sys_IsMainThread();
  v5 = DCONST_DVARINT_debugVignette;
  v6 = IsMainThread;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == 4 )
    return 1;
  v7 = DCONST_DVARINT_debugVignette;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 2 && !v6 )
    return 1;
  return Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_debugVignette, "debugVignette") == 3 && v6;
}

/*
==============
BG_DrawDebug_PlayerVignettePrint
==============
*/
void BG_DrawDebug_PlayerVignettePrint(const playerState_s *ps, int client, const char *uniqueString, unsigned int flags, bool linked, int time, const char *modelName, const char *tagName, vec3_t *linkTagOrigin, vec3_t *linkTagAngles)
{
  char v20; 
  const dvar_t *v25; 
  const char *v41; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  char dest[1008]; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  v20 = flags;
  _R15 = linkTagOrigin;
  _RDI = ps;
  _R12 = linkTagAngles;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 55, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !uniqueString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 56, ASSERT_TYPE_ASSERT, "(uniqueString)", (const char *)&queryFormat, "uniqueString") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 57, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 58, ASSERT_TYPE_ASSERT, "(tagName)", (const char *)&queryFormat, "tagName") )
    __debugbreak();
  v25 = DCONST_DVARINT_debugVignette;
  if ( !DCONST_DVARINT_debugVignette && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugVignette") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_draw_debug.cpp", 60, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_debugVignette, \"debugVignette\" ) > 0)", (const char *)&queryFormat, "Dconst_GetInt( debugVignette ) > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  xmm1, dword ptr [r12+4]
    vmovss  xmm2, dword ptr [r12]
    vmovss  xmm3, dword ptr [r15+8]
    vmovss  xmm4, dword ptr [r15+4]
    vmovss  xmm5, dword ptr [r15]
    vmovss  xmm6, dword ptr [rdi+288h]
    vmovss  xmm7, dword ptr [rdi+284h]
    vmovss  xmm8, dword ptr [rdi+280h]
    vmovss  xmm9, dword ptr [rdi+1E0h]
    vmovss  xmm10, dword ptr [rdi+1DCh]
    vmovss  xmm11, dword ptr [rdi+1D8h]
    vmovss  xmm12, dword ptr [rdi+38h]
    vmovss  xmm13, dword ptr [rdi+34h]
    vmovss  xmm14, dword ptr [rdi+30h]
  }
  v41 = "Server";
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+598h+var_4E0], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+598h+var_4E8], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+598h+var_4F0], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+598h+var_4F8], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+598h+var_500], xmm4
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+598h+var_508], xmm5
  }
  if ( client )
    v41 = "Client";
  __asm
  {
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+598h+var_520], xmm6
    vcvtss2sd xmm7, xmm7, xmm7
    vmovsd  [rsp+598h+var_528], xmm7
    vcvtss2sd xmm8, xmm8, xmm8
    vmovsd  [rsp+598h+var_530], xmm8
    vcvtss2sd xmm9, xmm9, xmm9
    vmovsd  [rsp+598h+var_538], xmm9
    vcvtss2sd xmm10, xmm10, xmm10
    vmovsd  [rsp+598h+var_540], xmm10
    vcvtss2sd xmm11, xmm11, xmm11
    vmovsd  [rsp+598h+var_548], xmm11
    vcvtss2sd xmm12, xmm12, xmm12
    vmovsd  [rsp+598h+var_550], xmm12
    vcvtss2sd xmm13, xmm13, xmm13
    vmovsd  [rsp+598h+var_558], xmm13
    vcvtss2sd xmm14, xmm14, xmm14
    vmovsd  [rsp+598h+var_560], xmm14
  }
  LODWORD(v68) = time;
  LODWORD(v67) = linked;
  Com_sprintf(dest, 0x3E8ui64, "[Vignette] %s, %s, link %d, time %d, org %.3f %.3f %.3f, ang %.3f %.3f %.3f, lAng %.3f %.3f %.3f, pMod %s, pTag %s, tOrg %.3f %.3f %.3f, tAng %.3f %.3f %.3f\n", v41, uniqueString, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, modelName, tagName, v78, v79, v80, v81, v82, v83);
  if ( (v20 & 2) != 0 )
    Com_PrintWarning(19, (const char *)&queryFormat, dest);
  else
    Com_Printf(19, (const char *)&queryFormat, dest);
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

