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
  refdef_t *p_refdef; 
  fileHandle_t *v4; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  refdef_t *v8; 
  cg_t *v9; 
  int i; 
  __int64 v11; 
  int v12; 
  int j; 
  __int64 v14; 
  int v15; 
  int k; 
  __int64 v17; 
  int v18; 
  char *fmt; 
  char *fmta; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  char v36; 
  int v37[3]; 
  level_locals_t *v38; 
  refdef_t *v39; 
  cg_t *v40; 
  __int64 v41; 
  Hash_state md; 
  unsigned __int8 out; 
  unsigned __int8 v44; 
  unsigned __int8 v45; 
  unsigned __int8 v46; 
  unsigned __int8 v47; 
  unsigned __int8 v48; 
  unsigned __int8 v49; 
  unsigned __int8 v50; 
  unsigned __int8 v51; 
  unsigned __int8 v52; 
  unsigned __int8 v53; 
  unsigned __int8 v54; 
  unsigned __int8 v55; 
  unsigned __int8 v56; 
  unsigned __int8 v57; 
  unsigned __int8 v58; 
  fileHandle_t dest[32]; 

  v41 = -2i64;
  if ( !com_testmonkey || (v36 = 1, com_testmonkey->current.integer <= 1) )
    v36 = 0;
  v0 = Cmd_Argv(1);
  Com_sprintf((char *)dest, 0x100ui64, "screenshots/%s.json", v0);
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( !cg_t::ms_allocatedCount )
  {
    LODWORD(v21) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v21, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[0] )
  {
    LODWORD(v23) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v23) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v23) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v23) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[0];
  v40 = cg_t::ms_cgArray[0];
  p_refdef = &cg_t::ms_cgArray[0]->refdef;
  v39 = &cg_t::ms_cgArray[0]->refdef;
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
    v37[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    v37[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    v37[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    FS_Printf((fileHandle_t)v4, "{ \"camera\": { \n");
    FS_Printf((fileHandle_t)v4, "\t\"tx\": %16f, \"ty\": %16f,  \"tz\": %16f,\n", *(float *)v37, *(float *)&v37[1], *(float *)&v37[2]);
    FS_Printf((fileHandle_t)v4, "\t\"yx\": %16f, \"xy\": %16f,  \"xz\": %16f,\n", p_refdef->view.axis.m[0].v[0], p_refdef->view.axis.m[0].v[1], p_refdef->view.axis.m[0].v[2]);
    FS_Printf((fileHandle_t)v4, "\t\"yx\": %16f, \"yy\": %16f,  \"yz\": %16f,\n", p_refdef->view.axis.m[1].v[0], p_refdef->view.axis.m[1].v[1], p_refdef->view.axis.m[1].v[2]);
    FS_Printf((fileHandle_t)v4, "\t\"zx\": %16f, \"zy\": %16f,  \"zz\": %16f,\n", p_refdef->view.axis.m[2].v[0], p_refdef->view.axis.m[2].v[1], p_refdef->view.axis.m[2].v[2]);
    FS_Printf((fileHandle_t)v4, "\t\"znear\": %16f,\n", p_refdef->view.zNear);
    FS_Printf((fileHandle_t)v4, "\t\"tanHalfFovX\": %16f,\n", p_refdef->view.fov.tanHalfFovX);
    FS_Printf((fileHandle_t)v4, "\t\"tanHalfFovY\": %16f\n", p_refdef->view.fov.tanHalfFovY);
    FS_Printf((fileHandle_t)v4, "\t},\n");
    j_md5_init(&md);
    j_md5_process(&md, (const unsigned __int8 *)p_refdef, 0x10FA0u);
    j_md5_done(&md, &out);
    LODWORD(v23) = v47;
    LODWORD(v21) = v46;
    LODWORD(fmt) = v45;
    FS_Printf((fileHandle_t)v4, "\"refdefhash\": \"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\", \n", out, v44, fmt, v21, v23, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
    j_md5_init(&md);
    v38 = &level;
    j_md5_process(&md, (const unsigned __int8 *)&level, 0x73EC0u);
    j_md5_done(&md, &out);
    LODWORD(v35) = v58;
    LODWORD(v34) = v57;
    LODWORD(v33) = v56;
    LODWORD(v32) = v55;
    LODWORD(v31) = v54;
    LODWORD(v30) = v53;
    LODWORD(v29) = v52;
    LODWORD(v28) = v51;
    LODWORD(v27) = v50;
    LODWORD(v26) = v49;
    LODWORD(v25) = v48;
    LODWORD(v24) = v47;
    LODWORD(v22) = v46;
    LODWORD(fmta) = v45;
    FS_Printf((fileHandle_t)v4, "\"levelhash\": \"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\", \n", out, v44, fmta, v22, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35);
    v8 = v39;
    FS_Printf((fileHandle_t)v4, "\"viewoffset\": { \"tx\": %16f, \"ty\": %16f,  \"tz\": %16f },\n", v39->viewOffset.v[0], v39->viewOffset.v[1], v39->viewOffset.v[2]);
    FS_Printf((fileHandle_t)v4, "\"refdef\": {\n");
    FS_Printf((fileHandle_t)v4, "\t\"time\": %8d,\n", (unsigned int)v39->time);
    FS_Printf((fileHandle_t)v4, "\t\"frameTime\": %8d\n", (unsigned int)v39->frameTime);
    FS_Printf((fileHandle_t)v4, "\t},\n");
    FS_Printf((fileHandle_t)v4, "\"level\": {\n");
    FS_Printf((fileHandle_t)v4, "\t\"time\": %8d,\n", (unsigned int)level.time);
    FS_Printf((fileHandle_t)v4, "\t\"frame\": %8d\n", (unsigned int)level.framenum);
    FS_Printf((fileHandle_t)v4, "\t},\n");
    FS_Printf((fileHandle_t)v4, "\"cgameGlob\": {\n");
    v9 = v40;
    FS_Printf((fileHandle_t)v4, "\t\"time\": %8d,\n", (unsigned int)v40->time);
    FS_Printf((fileHandle_t)v4, "\t\"frame\": %8d,\n", (unsigned int)v40->frametime);
    FS_Printf((fileHandle_t)v4, "\t\"frameInterpolation\": %16f\n", v40->frameInterpolation);
    FS_Printf((fileHandle_t)v4, "\t}");
    if ( v36 )
    {
      FS_Printf((fileHandle_t)v4, ",\n");
      FS_Printf((fileHandle_t)v4, "\n\n\"refdef\": [\n");
      for ( i = 0; i < 69536; i += 16 )
      {
        FS_Printf((fileHandle_t)v4, "\"%08x: ", (unsigned int)i);
        v11 = 0i64;
        v12 = i;
        do
        {
          if ( v11 >= 16 )
            break;
          FS_Printf((fileHandle_t)v4, "%02x ", *((unsigned __int8 *)&v8->displayViewport.x + v11));
          ++v12;
          ++v11;
        }
        while ( v12 < 69536 );
        FS_Printf((fileHandle_t)v4, "\",\n");
        v8 = (refdef_t *)((char *)v8 + 16);
      }
      FS_Printf((fileHandle_t)v4, "\"\"],\n\n\n\n\"cgameGlob\": [\n");
      for ( j = 0; j < 807600; j += 16 )
      {
        FS_Printf((fileHandle_t)v4, "\"%08x: ", (unsigned int)j);
        v14 = 0i64;
        v15 = j;
        do
        {
          if ( v14 >= 16 )
            break;
          FS_Printf((fileHandle_t)v4, "%02x ", *((unsigned __int8 *)&v9->__vftable + v14));
          ++v15;
          ++v14;
        }
        while ( v15 < 807600 );
        FS_Printf((fileHandle_t)v4, "\",\n");
        v9 = (cg_t *)((char *)v9 + 16);
      }
      FS_Printf((fileHandle_t)v4, "\"\"],\n\n\n\n\"level\": [\n");
      for ( k = 0; k < 474816; k += 16 )
      {
        FS_Printf((fileHandle_t)v4, "\"%08x: ", (unsigned int)k);
        v17 = 0i64;
        v18 = k;
        do
        {
          if ( v17 >= 16 )
            break;
          FS_Printf((fileHandle_t)v4, "%02x ", *((unsigned __int8 *)&v38->clients + v17));
          ++v18;
          ++v17;
        }
        while ( v18 < 474816 );
        FS_Printf((fileHandle_t)v4, "\",\n");
        v38 = (level_locals_t *)((char *)v38 + 16);
      }
      FS_Printf((fileHandle_t)v4, "\"\"]\n");
    }
    FS_Printf((fileHandle_t)v4, "\n}\n");
    FS_FCloseFile((fileHandle_t)v4);
    Com_Printf(8, "Wrote %s\n", (const char *)dest);
    R_ScreenshotCommand(TGA, LINEAR);
    memset(v37, 0, sizeof(v37));
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

