/*
==============
R_UnregisterTestmonkeyCmds
==============
*/

void R_UnregisterTestmonkeyCmds(void)
{
  ?R_UnregisterTestmonkeyCmds@@YAXXZ();
}

/*
==============
R_RegisterTestmonkeyCmds
==============
*/

void R_RegisterTestmonkeyCmds(void)
{
  ?R_RegisterTestmonkeyCmds@@YAXXZ();
}

/*
==============
R_Cmd_Testmonkey_Reset
==============
*/
unsigned int *R_Cmd_Testmonkey_Reset()
{
  unsigned int *result; 

  srand(0xF0FF3u);
  result = GetRandSeed();
  *result = -1985229329;
  return result;
}

/*
==============
R_Cmd_Testmonkey_Dump
==============
*/
void R_Cmd_Testmonkey_Dump()
{
  const char *v0; 
  const char *v1; 
  cg_t *v2; 
  fileHandle_t *v4; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  int i; 
  __int64 v63; 
  int v64; 
  int j; 
  __int64 v66; 
  int v67; 
  int k; 
  __int64 v69; 
  int v70; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  char v93; 
  int v94[3]; 
  level_locals_t *v95; 
  refdef_t *p_refdef; 
  cg_t *v97; 
  __int64 v98; 
  Hash_state md; 
  unsigned __int8 out; 
  unsigned __int8 v101; 
  unsigned __int8 v102; 
  unsigned __int8 v103; 
  unsigned __int8 v104; 
  unsigned __int8 v105; 
  unsigned __int8 v106; 
  unsigned __int8 v107; 
  unsigned __int8 v108; 
  unsigned __int8 v109; 
  unsigned __int8 v110; 
  unsigned __int8 v111; 
  unsigned __int8 v112; 
  unsigned __int8 v113; 
  unsigned __int8 v114; 
  unsigned __int8 v115; 
  fileHandle_t dest[32]; 

  v98 = -2i64;
  if ( !com_testmonkey || (v93 = 1, com_testmonkey->current.integer <= 1) )
    v93 = 0;
  v0 = Cmd_Argv(1);
  Com_sprintf((char *)dest, 0x100ui64, "screenshots/%s.json", v0);
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( !cg_t::ms_allocatedCount )
  {
    LODWORD(v78) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v78, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[0] )
  {
    LODWORD(v80) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v80) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v80) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v80) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[0];
  v97 = cg_t::ms_cgArray[0];
  _RSI = &cg_t::ms_cgArray[0]->refdef;
  p_refdef = &cg_t::ms_cgArray[0]->refdef;
  v4 = FS_FOpenFileWrite(dest, v1);
  if ( v4 == (fileHandle_t *)-1i64 )
  {
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1443D9FC8, 150i64, dest);
  }
  else
  {
    p_view = &v2->refdef.view;
    if ( !p_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v94[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    v94[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    v94[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    FS_Printf((fileHandle_t)v4, "{ \"camera\": { \n");
    __asm
    {
      vmovss  xmm0, [rbp+290h+var_300]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, [rbp+290h+var_304]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, [rbp+290h+var_308]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+3A0h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"tx\": %16f, \"ty\": %16f,  \"tz\": %16f,\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+2Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsi+28h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsi+24h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+3A0h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"yx\": %16f, \"xy\": %16f,  \"xz\": %16f,\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+38h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsi+34h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsi+30h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+3A0h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"yx\": %16f, \"yy\": %16f,  \"yz\": %16f,\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtb);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+44h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsi+40h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsi+3Ch]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+3A0h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"zx\": %16f, \"zy\": %16f,  \"zz\": %16f,\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtc);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+48h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"znear\": %16f,\n", *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+10h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"tanHalfFovX\": %16f,\n", *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+14h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"tanHalfFovY\": %16f\n", *(double *)&_XMM2);
    FS_Printf((fileHandle_t)v4, "\t},\n");
    j_md5_init(&md);
    j_md5_process(&md, (const unsigned __int8 *)_RSI, 0x10FA0u);
    j_md5_done(&md, &out);
    LODWORD(v80) = v104;
    LODWORD(v78) = v103;
    LODWORD(fmtd) = v102;
    FS_Printf((fileHandle_t)v4, "\"refdefhash\": \"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\", \n", out, v101, fmtd, v78, v80, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115);
    j_md5_init(&md);
    v95 = &level;
    j_md5_process(&md, (const unsigned __int8 *)&level, 0x73EC0u);
    j_md5_done(&md, &out);
    LODWORD(v92) = v115;
    LODWORD(v91) = v114;
    LODWORD(v90) = v113;
    LODWORD(v89) = v112;
    LODWORD(v88) = v111;
    LODWORD(v87) = v110;
    LODWORD(v86) = v109;
    LODWORD(v85) = v108;
    LODWORD(v84) = v107;
    LODWORD(v83) = v106;
    LODWORD(v82) = v105;
    LODWORD(v81) = v104;
    LODWORD(v79) = v103;
    LODWORD(fmte) = v102;
    FS_Printf((fileHandle_t)v4, "\"levelhash\": \"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\", \n", out, v101, fmte, v79, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92);
    _R15 = p_refdef;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+84h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [r15+80h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [r15+7Ch]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+3A0h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\"viewoffset\": { \"tx\": %16f, \"ty\": %16f,  \"tz\": %16f },\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtf);
    FS_Printf((fileHandle_t)v4, "\"refdef\": {\n");
    FS_Printf((fileHandle_t)v4, "\t\"time\": %8d,\n", (unsigned int)p_refdef->time);
    FS_Printf((fileHandle_t)v4, "\t\"frameTime\": %8d\n", (unsigned int)p_refdef->frameTime);
    FS_Printf((fileHandle_t)v4, "\t},\n");
    FS_Printf((fileHandle_t)v4, "\"level\": {\n");
    FS_Printf((fileHandle_t)v4, "\t\"time\": %8d,\n", (unsigned int)level.time);
    FS_Printf((fileHandle_t)v4, "\t\"frame\": %8d\n", (unsigned int)level.framenum);
    FS_Printf((fileHandle_t)v4, "\t},\n");
    FS_Printf((fileHandle_t)v4, "\"cgameGlob\": {\n");
    _R14 = v97;
    FS_Printf((fileHandle_t)v4, "\t\"time\": %8d,\n", (unsigned int)v97->time);
    FS_Printf((fileHandle_t)v4, "\t\"frame\": %8d,\n", (unsigned int)v97->frametime);
    __asm
    {
      vmovss  xmm2, dword ptr [r14+65E0h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    FS_Printf((fileHandle_t)v4, "\t\"frameInterpolation\": %16f\n", *(double *)&_XMM2);
    FS_Printf((fileHandle_t)v4, "\t}");
    if ( v93 )
    {
      FS_Printf((fileHandle_t)v4, ",\n");
      FS_Printf((fileHandle_t)v4, "\n\n\"refdef\": [\n");
      for ( i = 0; i < 69536; i += 16 )
      {
        FS_Printf((fileHandle_t)v4, "\"%08x: ", (unsigned int)i);
        v63 = 0i64;
        v64 = i;
        do
        {
          if ( v63 >= 16 )
            break;
          FS_Printf((fileHandle_t)v4, "%02x ", *((unsigned __int8 *)&_R15->displayViewport.x + v63));
          ++v64;
          ++v63;
        }
        while ( v64 < 69536 );
        FS_Printf((fileHandle_t)v4, "\",\n");
        _R15 = (refdef_t *)((char *)_R15 + 16);
      }
      FS_Printf((fileHandle_t)v4, "\"\"],\n\n\n\n\"cgameGlob\": [\n");
      for ( j = 0; j < 807600; j += 16 )
      {
        FS_Printf((fileHandle_t)v4, "\"%08x: ", (unsigned int)j);
        v66 = 0i64;
        v67 = j;
        do
        {
          if ( v66 >= 16 )
            break;
          FS_Printf((fileHandle_t)v4, "%02x ", *((unsigned __int8 *)&_R14->__vftable + v66));
          ++v67;
          ++v66;
        }
        while ( v67 < 807600 );
        FS_Printf((fileHandle_t)v4, "\",\n");
        _R14 = (cg_t *)((char *)_R14 + 16);
      }
      FS_Printf((fileHandle_t)v4, "\"\"],\n\n\n\n\"level\": [\n");
      for ( k = 0; k < 474816; k += 16 )
      {
        FS_Printf((fileHandle_t)v4, "\"%08x: ", (unsigned int)k);
        v69 = 0i64;
        v70 = k;
        do
        {
          if ( v69 >= 16 )
            break;
          FS_Printf((fileHandle_t)v4, "%02x ", *((unsigned __int8 *)&v95->clients + v69));
          ++v70;
          ++v69;
        }
        while ( v70 < 474816 );
        FS_Printf((fileHandle_t)v4, "\",\n");
        v95 = (level_locals_t *)((char *)v95 + 16);
      }
      FS_Printf((fileHandle_t)v4, "\"\"]\n");
    }
    FS_Printf((fileHandle_t)v4, "\n}\n");
    FS_FCloseFile((fileHandle_t)v4);
    Com_Printf(8, "Wrote %s\n", (const char *)dest);
    R_ScreenshotCommand(TGA, LINEAR);
    memset(v94, 0, sizeof(v94));
  }
}

/*
==============
R_RegisterTestmonkeyCmds
==============
*/
void R_RegisterTestmonkeyCmds(void)
{
  Cmd_AddClientCommandList(S_TESTMONKEY_CMD, 2u);
}

/*
==============
R_UnregisterTestmonkeyCmds
==============
*/
void R_UnregisterTestmonkeyCmds(void)
{
  Cmd_RemoveClientCommandList(S_TESTMONKEY_CMD, 2u);
}

