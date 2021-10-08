/*
==============
CG_ClientNetPerf_AddFrameInfo
==============
*/

void __fastcall CG_ClientNetPerf_AddFrameInfo(const cg_t *cgameGlob)
{
  ?CG_ClientNetPerf_AddFrameInfo@@YAXPEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_ClientNetPerf_IsSystemEnabled
==============
*/

bool __fastcall CG_ClientNetPerf_IsSystemEnabled()
{
  return ?CG_ClientNetPerf_IsSystemEnabled@@YA_NXZ();
}

/*
==============
CG_ClientNetPerf_GetData
==============
*/

bool __fastcall CG_ClientNetPerf_GetData(const LocalClientNum_t localClientNum, unsigned __int16 *outExtrapolationMax, unsigned __int16 *outInterpolationMax)
{
  return ?CG_ClientNetPerf_GetData@@YA_NW4LocalClientNum_t@@PEAG1@Z(localClientNum, outExtrapolationMax, outInterpolationMax);
}

/*
==============
CG_ClientNetPerf_Reset
==============
*/

void __fastcall CG_ClientNetPerf_Reset(const LocalClientNum_t localClientNum)
{
  ?CG_ClientNetPerf_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientNetPerf_AddFrameInfo
==============
*/
void CG_ClientNetPerf_AddFrameInfo(const cg_t *cgameGlob)
{
  __int64 v2; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 36, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_ClientNetPerf_IsSystemEnabled() )
  {
    if ( cgameGlob->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
    {
      LODWORD(v2) = cgameGlob->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->localClientNum ) < (unsigned)( 2 )", "cgameGlob->localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
        __debugbreak();
    }
    s_clientNetPerfInfo[cgameGlob->localClientNum].frameSamples[s_clientNetPerfInfo[cgameGlob->localClientNum].frameCount++ & 0x7F] = cgameGlob->time - cgameGlob->latestSnapshotTime;
  }
}

/*
==============
CG_ClientNetPerf_GetData
==============
*/
bool CG_ClientNetPerf_GetData(const LocalClientNum_t localClientNum, unsigned __int16 *outExtrapolationMax, unsigned __int16 *outInterpolationMax)
{
  __int64 v3; 
  int v6; 
  int v7; 
  int *v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  bool result; 
  __int64 v41; 

  v3 = localClientNum;
  if ( !outExtrapolationMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 52, ASSERT_TYPE_ASSERT, "(outExtrapolationMax)", (const char *)&queryFormat, "outExtrapolationMax") )
    __debugbreak();
  if ( !outInterpolationMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 53, ASSERT_TYPE_ASSERT, "(outInterpolationMax)", (const char *)&queryFormat, "outInterpolationMax") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v41) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v41, 2) )
      __debugbreak();
  }
  v6 = 0;
  *outExtrapolationMax = 0;
  *outInterpolationMax = 0;
  v7 = *outExtrapolationMax;
  if ( !CG_ClientNetPerf_IsSystemEnabled() || s_clientNetPerfInfo[v3].frameCount < 128 )
    return 0;
  v8 = &s_clientNetPerfInfo[v3].frameSamples[1];
  v9 = 8i64;
  do
  {
    v10 = *(v8 - 1);
    if ( v10 <= v7 )
    {
      v11 = -v10;
      if ( v11 > v6 )
        v6 = v11;
    }
    else
    {
      v7 = *(v8 - 1);
    }
    if ( *v8 <= v7 )
    {
      if ( -*v8 > v6 )
        v6 = -*v8;
    }
    else
    {
      v7 = *v8;
    }
    v12 = v8[1];
    if ( v12 <= v7 )
    {
      v13 = -v12;
      if ( v13 > v6 )
        v6 = v13;
    }
    else
    {
      v7 = v8[1];
    }
    v14 = v8[2];
    if ( v14 <= v7 )
    {
      v15 = -v14;
      if ( v15 > v6 )
        v6 = v15;
    }
    else
    {
      v7 = v8[2];
    }
    v16 = v8[3];
    if ( v16 <= v7 )
    {
      v17 = -v16;
      if ( v17 > v6 )
        v6 = v17;
    }
    else
    {
      v7 = v8[3];
    }
    v18 = v8[4];
    if ( v18 <= v7 )
    {
      v19 = -v18;
      if ( v19 > v6 )
        v6 = v19;
    }
    else
    {
      v7 = v8[4];
    }
    v20 = v8[5];
    if ( v20 <= v7 )
    {
      v21 = -v20;
      if ( v21 > v6 )
        v6 = v21;
    }
    else
    {
      v7 = v8[5];
    }
    v22 = v8[6];
    if ( v22 <= v7 )
    {
      v23 = -v22;
      if ( v23 > v6 )
        v6 = v23;
    }
    else
    {
      v7 = v8[6];
    }
    v24 = v8[7];
    if ( v24 <= v7 )
    {
      v25 = -v24;
      if ( v25 > v6 )
        v6 = v25;
    }
    else
    {
      v7 = v8[7];
    }
    v26 = v8[8];
    if ( v26 <= v7 )
    {
      v27 = -v26;
      if ( v27 > v6 )
        v6 = v27;
    }
    else
    {
      v7 = v8[8];
    }
    v28 = v8[9];
    if ( v28 <= v7 )
    {
      v29 = -v28;
      if ( v29 > v6 )
        v6 = v29;
    }
    else
    {
      v7 = v8[9];
    }
    v30 = v8[10];
    if ( v30 <= v7 )
    {
      v31 = -v30;
      if ( v31 > v6 )
        v6 = v31;
    }
    else
    {
      v7 = v8[10];
    }
    v32 = v8[11];
    if ( v32 <= v7 )
    {
      v33 = -v32;
      if ( v33 > v6 )
        v6 = v33;
    }
    else
    {
      v7 = v8[11];
    }
    v34 = v8[12];
    if ( v34 <= v7 )
    {
      v35 = -v34;
      if ( v35 > v6 )
        v6 = v35;
    }
    else
    {
      v7 = v8[12];
    }
    v36 = v8[13];
    if ( v36 <= v7 )
    {
      v37 = -v36;
      if ( v37 > v6 )
        v6 = v37;
    }
    else
    {
      v7 = v8[13];
    }
    v38 = v8[14];
    if ( v38 <= v7 )
    {
      v39 = -v38;
      if ( v39 > v6 )
        v6 = v39;
    }
    else
    {
      v7 = v8[14];
    }
    v8 += 16;
    --v9;
  }
  while ( v9 );
  if ( v7 > 1000 )
    v7 = 1000;
  if ( v6 > 1000 )
    v6 = 1000;
  if ( v7 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 95, ASSERT_TYPE_ASSERT, "(extrapolationMax >= 0)", (const char *)&queryFormat, "extrapolationMax >= 0") )
    __debugbreak();
  if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_net_perf_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(interpolationMax >= 0)", (const char *)&queryFormat, "interpolationMax >= 0") )
    __debugbreak();
  *outExtrapolationMax = v7;
  result = 1;
  *outInterpolationMax = v6;
  return result;
}

/*
==============
CG_ClientNetPerf_IsSystemEnabled
==============
*/
bool CG_ClientNetPerf_IsSystemEnabled()
{
  const dvar_t *v0; 

  if ( Com_FrontEnd_IsInFrontEnd() )
    return 0;
  v0 = DVARBOOL_bg_enableClientNetPerf;
  if ( !DVARBOOL_bg_enableClientNetPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_enableClientNetPerf") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
CG_ClientNetPerf_Reset
==============
*/
void CG_ClientNetPerf_Reset(const LocalClientNum_t localClientNum)
{
  memset_0(s_clientNetPerfInfo, 0, sizeof(s_clientNetPerfInfo));
}

