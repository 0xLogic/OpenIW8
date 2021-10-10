/*
==============
CL_TransientsCollisionMP_GetXB3ShipBudgetBytes
==============
*/

unsigned __int64 __fastcall CL_TransientsCollisionMP_GetXB3ShipBudgetBytes()
{
  return ?CL_TransientsCollisionMP_GetXB3ShipBudgetBytes@@YA_KXZ();
}

/*
==============
CL_TransientsCollisionMP_GetPriorityMode
==============
*/

CL_TransientsCollisionMP_PriorityMode __fastcall CL_TransientsCollisionMP_GetPriorityMode()
{
  return ?CL_TransientsCollisionMP_GetPriorityMode@@YA?AW4CL_TransientsCollisionMP_PriorityMode@@XZ();
}

/*
==============
CL_TransientsCollisionMP_SetPriorityMode
==============
*/

void __fastcall CL_TransientsCollisionMP_SetPriorityMode(const CL_TransientsCollisionMP_PriorityMode mode)
{
  ?CL_TransientsCollisionMP_SetPriorityMode@@YAXW4CL_TransientsCollisionMP_PriorityMode@@@Z(mode);
}

/*
==============
CL_TransientsCollisionMP_HasStreamingTiles
==============
*/

bool __fastcall CL_TransientsCollisionMP_HasStreamingTiles()
{
  return ?CL_TransientsCollisionMP_HasStreamingTiles@@YA_NXZ();
}

/*
==============
CL_TransientsCollisionMP_UpdateTransientTileFlags
==============
*/

void __fastcall CL_TransientsCollisionMP_UpdateTransientTileFlags(unsigned int tileIdx, bool force)
{
  ?CL_TransientsCollisionMP_UpdateTransientTileFlags@@YAXI_N@Z(tileIdx, force);
}

/*
==============
CL_TransientsCollisionMP_UnregisterCollisionTileCount
==============
*/

void __fastcall CL_TransientsCollisionMP_UnregisterCollisionTileCount(const TransientInfo *transientInfo)
{
  ?CL_TransientsCollisionMP_UnregisterCollisionTileCount@@YAXPEBUTransientInfo@@@Z(transientInfo);
}

/*
==============
CL_TransientsCollisionMP_ResetGridStreaming
==============
*/

void CL_TransientsCollisionMP_ResetGridStreaming(void)
{
  ?CL_TransientsCollisionMP_ResetGridStreaming@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_GetTransientMode
==============
*/

CL_TransientsCollisionMP_TransientMode __fastcall CL_TransientsCollisionMP_GetTransientMode()
{
  return ?CL_TransientsCollisionMP_GetTransientMode@@YA?AW4CL_TransientsCollisionMP_TransientMode@@XZ();
}

/*
==============
CL_TransientsCollisionMP_LoadIndividualTileTransient
==============
*/

void __fastcall CL_TransientsCollisionMP_LoadIndividualTileTransient(const unsigned int tileIdx, unsigned int priority)
{
  ?CL_TransientsCollisionMP_LoadIndividualTileTransient@@YAXII@Z(tileIdx, priority);
}

/*
==============
CL_TransientsCollisionMP_OnLevelPreloadCancel
==============
*/

void CL_TransientsCollisionMP_OnLevelPreloadCancel(void)
{
  ?CL_TransientsCollisionMP_OnLevelPreloadCancel@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_OnLobbyToGameStart
==============
*/

void CL_TransientsCollisionMP_OnLobbyToGameStart(void)
{
  ?CL_TransientsCollisionMP_OnLobbyToGameStart@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_GetXB3DevBudgetBytes
==============
*/

unsigned __int64 __fastcall CL_TransientsCollisionMP_GetXB3DevBudgetBytes()
{
  return ?CL_TransientsCollisionMP_GetXB3DevBudgetBytes@@YA_KXZ();
}

/*
==============
CL_TransientsCollisionMP_GetZoneName
==============
*/

void __fastcall CL_TransientsCollisionMP_GetZoneName(const unsigned int index, char *outName)
{
  ?CL_TransientsCollisionMP_GetZoneName@@YAXIQEAD@Z(index, outName);
}

/*
==============
CL_TransientsCollisionMP_Debug_Draw
==============
*/

void __fastcall CL_TransientsCollisionMP_Debug_Draw(const LocalClientNum_t localClientNum)
{
  ?CL_TransientsCollisionMP_Debug_Draw@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_TransientsCollisionMP_SetGridStreamingClientStreamViews
==============
*/

void __fastcall CL_TransientsCollisionMP_SetGridStreamingClientStreamViews(LocalClientNum_t localClientNum)
{
  ?CL_TransientsCollisionMP_SetGridStreamingClientStreamViews@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_TransientsCollisionMP_AddGridStreamingFrontendPos
==============
*/

void __fastcall CL_TransientsCollisionMP_AddGridStreamingFrontendPos(const vec3_t *viewOrg)
{
  ?CL_TransientsCollisionMP_AddGridStreamingFrontendPos@@YAXAEBTvec3_t@@@Z(viewOrg);
}

/*
==============
CL_TransientsCollisionMP_ProcessFastfiles
==============
*/

void __fastcall CL_TransientsCollisionMP_ProcessFastfiles(bool force)
{
  ?CL_TransientsCollisionMP_ProcessFastfiles@@YAX_N@Z(force);
}

/*
==============
CL_TransientsCollisionMP_OnLevelUnload
==============
*/

void CL_TransientsCollisionMP_OnLevelUnload(void)
{
  ?CL_TransientsCollisionMP_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_TransientCollisionMP_GetTileForPos
==============
*/

unsigned __int16 __fastcall CL_TransientCollisionMP_GetTileForPos(const vec3_t *pos)
{
  return ?CL_TransientCollisionMP_GetTileForPos@@YAGAEBTvec3_t@@@Z(pos);
}

/*
==============
CL_TransientsCollisionMP_HasCollision
==============
*/

bool __fastcall CL_TransientsCollisionMP_HasCollision()
{
  return ?CL_TransientsCollisionMP_HasCollision@@YA_NXZ();
}

/*
==============
CL_TransientsCollisionMP_CountBudgetedTiles
==============
*/

unsigned int __fastcall CL_TransientsCollisionMP_CountBudgetedTiles()
{
  return ?CL_TransientsCollisionMP_CountBudgetedTiles@@YAIXZ();
}

/*
==============
CL_TransientsCollisionMP_RegisterFileIndex
==============
*/

void __fastcall CL_TransientsCollisionMP_RegisterFileIndex(const TransientInfo *const transientInfo, unsigned __int16 transientFileIndex, unsigned __int16 mpSystemFileIndex, const char *name)
{
  ?CL_TransientsCollisionMP_RegisterFileIndex@@YAXQEBUTransientInfo@@GGPEBD@Z(transientInfo, transientFileIndex, mpSystemFileIndex, name);
}

/*
==============
CL_TransientsCollisionMP_GetBudgetBytes
==============
*/

unsigned __int64 __fastcall CL_TransientsCollisionMP_GetBudgetBytes()
{
  return ?CL_TransientsCollisionMP_GetBudgetBytes@@YA_KXZ();
}

/*
==============
CL_TransientsCollisionMP_OnClosePostUnload
==============
*/

void CL_TransientsCollisionMP_OnClosePostUnload(void)
{
  ?CL_TransientsCollisionMP_OnClosePostUnload@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_Shutdown
==============
*/

void CL_TransientsCollisionMP_Shutdown(void)
{
  ?CL_TransientsCollisionMP_Shutdown@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_OnLevelLoad
==============
*/

void CL_TransientsCollisionMP_OnLevelLoad(void)
{
  ?CL_TransientsCollisionMP_OnLevelLoad@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_SetTransientMode
==============
*/

void __fastcall CL_TransientsCollisionMP_SetTransientMode(CL_TransientsCollisionMP_TransientMode mode)
{
  ?CL_TransientsCollisionMP_SetTransientMode@@YAXW4CL_TransientsCollisionMP_TransientMode@@@Z(mode);
}

/*
==============
CL_TransientsCollisionMP_HasGridSetupForPosition
==============
*/

bool __fastcall CL_TransientsCollisionMP_HasGridSetupForPosition(const LocalClientNum_t localClientNum, const vec3_t *pos)
{
  return ?CL_TransientsCollisionMP_HasGridSetupForPosition@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@@Z(localClientNum, pos);
}

/*
==============
CLTransientsCollisionMP_CalculateTileDistances
==============
*/

void CLTransientsCollisionMP_CalculateTileDistances(void)
{
  ?CLTransientsCollisionMP_CalculateTileDistances@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_UpdateTransientFlags
==============
*/

void __fastcall CL_TransientsCollisionMP_UpdateTransientFlags(bool force)
{
  ?CL_TransientsCollisionMP_UpdateTransientFlags@@YAX_N@Z(force);
}

/*
==============
CL_TransientsCollisionMP_OnFirstSnapshot
==============
*/

void CL_TransientsCollisionMP_OnFirstSnapshot(void)
{
  ?CL_TransientsCollisionMP_OnFirstSnapshot@@YAXXZ();
}

/*
==============
CL_TransientsCollisionMP_RegisterCollisionTileCount
==============
*/

void __fastcall CL_TransientsCollisionMP_RegisterCollisionTileCount(const char *name, const TransientInfo *transientInfo)
{
  ?CL_TransientsCollisionMP_RegisterCollisionTileCount@@YAXPEBDPEBUTransientInfo@@@Z(name, transientInfo);
}

/*
==============
CL_TransientsCollisionMP_IsRequestedLoaded
==============
*/

bool __fastcall CL_TransientsCollisionMP_IsRequestedLoaded()
{
  return ?CL_TransientsCollisionMP_IsRequestedLoaded@@YA_NXZ();
}

/*
==============
CL_TransientsCollisionMP_OnClosePreUnload
==============
*/

void CL_TransientsCollisionMP_OnClosePreUnload(void)
{
  ?CL_TransientsCollisionMP_OnClosePreUnload@@YAXXZ();
}

/*
==============
CLTransientsCollisionMP_CalculateTileDistances
==============
*/
void CLTransientsCollisionMP_CalculateTileDistances(void)
{
  unsigned int v0; 
  __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  unsigned int v5; 
  float v6; 
  __int64 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v12; 
  __int128 v14; 
  int v16[2]; 
  int v17[2]; 
  float v18; 
  float v19; 

  v0 = s_transientsCollisionMP_NumTiles;
  v1 = 0i64;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    v2 = s_transientsCollisionMP_NumStreamPositions;
    do
    {
      v3 = 0i64;
      *(float *)v17 = (float)((float)(int)((v1 & 0x1F) - 16) * 8192.0) + 4096.0;
      *(float *)&v17[1] = (float)((float)(int)(((unsigned int)v1 >> 5) - 16) * 8192.0) + 4096.0;
      *(float *)&_XMM9 = FLOAT_3_4028235e38;
      if ( v2 )
      {
        do
        {
          v5 = 0;
          v6 = s_transientsCollisionMP_StreamPositions[v3].origin.v[1];
          v16[0] = LODWORD(s_transientsCollisionMP_StreamPositions[v3].origin.v[0]);
          *(float *)&v16[1] = v6;
          do
          {
            v7 = (int)v5;
            if ( (float)(*(float *)&v16[v5] - *(float *)&v17[v5]) >= 0.0 )
            {
              v10 = (unsigned int)v16[v5];
              *(float *)&v10 = *(float *)&v16[v5] - *(float *)&v17[v5];
              v8 = v10;
            }
            else
            {
              v9 = (unsigned int)v17[v5];
              *(float *)&v9 = *(float *)&v17[v5] - *(float *)&v16[v5];
              v8 = v9;
            }
            v12 = v8;
            *(float *)&v12 = *(float *)&v8 - 4096.0;
            _XMM2 = v12;
            __asm { vmaxss  xmm6, xmm2, xmm7 }
            ++v5;
            *(&v18 + v7) = *(float *)&_XMM6;
          }
          while ( v5 < 2 );
          v2 = s_transientsCollisionMP_NumStreamPositions;
          v3 = (unsigned int)(v3 + 1);
          v14 = LODWORD(v18);
          *(float *)&v14 = (float)(v18 * v18) + (float)(v19 * v19);
          _XMM0 = v14;
          __asm { vminss  xmm9, xmm0, xmm9 }
        }
        while ( (unsigned int)v3 < s_transientsCollisionMP_NumStreamPositions );
        v0 = s_transientsCollisionMP_NumTiles;
      }
      s_transientsCollisionMP_TileStreamingDistancesSq[v1] = *(float *)&_XMM9;
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < v0 );
  }
}

/*
==============
CL_TransientCollisionMP_GetTileForPos
==============
*/
__int64 CL_TransientCollisionMP_GetTileForPos(const vec3_t *pos)
{
  __int64 result; 

  result = (unsigned int)((int)(float)((float)(0.00012207031 * pos->v[0]) + 16.0) + 32 * (int)(float)((float)(0.00012207031 * pos->v[1]) + 16.0));
  if ( (unsigned int)result >= (unsigned int)s_transientsCollisionMP_NumTiles )
    return 0xFFFFi64;
  return result;
}

/*
==============
CL_TransientsCollisionMP_AddGridStreamingFrontendPos
==============
*/
void CL_TransientsCollisionMP_AddGridStreamingFrontendPos(const vec3_t *viewOrg)
{
  unsigned int v1; 
  __int64 v3; 
  unsigned int v4; 
  int v5; 

  v1 = s_transientsCollisionMP_NumStreamPositions;
  if ( s_transientsCollisionMP_NumStreamPositions >= 0xA )
  {
    v5 = 10;
    v4 = s_transientsCollisionMP_NumStreamPositions;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(unsigned)( s_transientsCollisionMP_NumStreamPositions ) < (unsigned)( ( sizeof( *array_counter( s_transientsCollisionMP_StreamPositions ) ) + 0 ) )", "s_transientsCollisionMP_NumStreamPositions doesn't index ARRAY_COUNT( s_transientsCollisionMP_StreamPositions )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
    v1 = s_transientsCollisionMP_NumStreamPositions;
  }
  v3 = v1;
  s_transientsCollisionMP_StreamPositions[v3].origin.v[0] = viewOrg->v[0];
  s_transientsCollisionMP_StreamPositions[v3].origin.v[1] = viewOrg->v[1];
  s_transientsCollisionMP_StreamPositions[v3].origin.v[2] = viewOrg->v[2];
  s_transientsCollisionMP_NumStreamPositions = v1 + 1;
}

/*
==============
CL_TransientsCollisionMP_CountBudgetedTiles
==============
*/
__int64 CL_TransientsCollisionMP_CountBudgetedTiles()
{
  unsigned __int64 v0; 
  unsigned __int64 v2; 
  bool IsLoadModeInFrontend; 
  unsigned int i; 
  __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v0 = CL_TransientsCollisionMP_GetBudgetBytes() >> 16;
  if ( !v0 )
    return 0i64;
  v2 = 0i64;
  IsLoadModeInFrontend = CL_TransientsMP_IsLoadModeInFrontend();
  for ( i = 0; i < (unsigned int)s_transientsCollisionMP_NumTiles; ++i )
  {
    v5 = s_transientsCollisionMP_SortedTileIndices[i];
    if ( (unsigned int)v5 >= (unsigned int)s_transientsCollisionMP_NumTiles )
    {
      LODWORD(v9) = s_transientsCollisionMP_NumTiles;
      LODWORD(v8) = s_transientsCollisionMP_SortedTileIndices[i];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 667, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "tileIdx doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= 0x400 )
    {
      LODWORD(v9) = 1024;
      LODWORD(v8) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 632, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( ( sizeof( *array_counter( s_transientsCollisionMP_TileCosts ) ) + 0 ) )", "tileIdx doesn't index ARRAY_COUNT( s_transientsCollisionMP_TileCosts )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = s_transientsCollisionMP_TileCosts[v5];
    if ( IsLoadModeInFrontend )
    {
      v7 = DB_GetPerTransientAdditionalTempCostForPreload() >> 16;
      if ( v7 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v7, "unsigned", v7) )
        __debugbreak();
      v6 += v7 + 1;
    }
    v2 += v6;
    if ( v2 > v0 )
    {
      if ( i )
        return i;
      Com_PrintError(16, "TransientsCollisionMP: not enough memory to load tile_%u. %u > %zu!\n", (unsigned int)v5, v6, v0);
    }
  }
  return i;
}

/*
==============
CL_TransientsCollisionMP_Debug_Draw
==============
*/
void CL_TransientsCollisionMP_Debug_Draw(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  const ScreenPlacement *v3; 
  const dvar_t *v4; 
  float integer; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float x; 
  float y; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1758, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= 2)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_10;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v2 )
      __debugbreak();
LABEL_10:
    v3 = &scrPlaceFull;
    goto LABEL_11;
  }
  v3 = &scrPlaceViewDisplay[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1762, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
LABEL_11:
  v4 = DVARINT_cl_transientCollision_debugDisplayOffsetX;
  if ( !DVARINT_cl_transientCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = (float)v4->current.integer;
  v6 = DVARINT_cl_transientCollision_debugDisplayOffsetY;
  v7 = integer + 8.0;
  x = integer + 8.0;
  if ( !DVARINT_cl_transientCollision_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = (float)v6->current.integer;
  v9 = DVARBOOL_cl_transientCollision_EnableStreamingUpdates;
  v10 = v8 + 8.0;
  y = v10;
  if ( !DVARBOOL_cl_transientCollision_EnableStreamingUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_EnableStreamingUpdates") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    CL_TransientsCollisionMP_Debug_DrawString(v3, v7, v10, "MP Collision Transients position streaming disabled", &colorWhite);
    y = v10 + 6.0;
  }
  v11 = DVARBOOL_cl_transientCollision_Overlay;
  if ( !DVARBOOL_cl_transientCollision_Overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_Overlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    CL_TransientsCollisionMP_Debug_DrawTitle(v3, &x, &y, (const LocalClientNum_t)v1);
    x = x + 6.0;
    CL_TransientsCollisionMP_Debug_DrawMinimap(v3, &x, &y, (const LocalClientNum_t)v1);
    CL_TransientsCollisionMP_Debug_DrawMemorySummary(v3, &x, &y);
  }
  v12 = DVARBOOL_cl_transientCollision_debugDump;
  if ( !DVARBOOL_cl_transientCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_cl_transientCollision_debugDump, 0);
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawMemorySummary
==============
*/
void CL_TransientsCollisionMP_Debug_DrawMemorySummary(const ScreenPlacement *const scrPlace, float *x, float *y)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  float *v7; 
  bool IsLoadModeInFrontend; 
  unsigned int v9; 
  bool v10; 
  bool v11; 
  unsigned int TileCost; 
  unsigned __int64 v13; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  const char *v23; 
  const char *v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  unsigned int v28; 
  const char *v29; 
  const char *v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned int v34; 
  const char *v35; 
  const char *v36; 
  unsigned __int64 v37; 
  unsigned int v38; 
  unsigned int v39; 
  const char *v40; 
  char *fmt; 
  const vec4_t *fmta; 
  const vec4_t *fmtb; 
  const vec4_t *fmtc; 
  const vec4_t *fmtd; 
  __int64 v46; 
  __int64 v47; 
  bool v48; 
  unsigned int v49; 
  int v50; 
  char v54[64]; 
  char v55[64]; 
  char v56[64]; 
  char dest[64]; 
  char v58[64]; 
  char v59[64]; 
  char v60[64]; 
  char v61[64]; 
  char v62[64]; 

  v3 = 0i64;
  v50 = 0;
  v4 = 0;
  v5 = 0;
  v49 = 0;
  v6 = 0;
  v7 = y;
  IsLoadModeInFrontend = CL_TransientsMP_IsLoadModeInFrontend();
  v9 = 0;
  v48 = IsLoadModeInFrontend;
  v10 = IsLoadModeInFrontend;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    v11 = IsLoadModeInFrontend;
    while ( 1 )
    {
      TileCost = CL_TransientsCollisionMP_GetTileCost(v9, v11);
      if ( v9 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      v13 = (unsigned __int64)v9 >> 5;
      v14 = 0x80000000 >> (v9 & 0x1F);
      if ( (v14 & s_transientsCollisionMP_LoadedTiles.array[v13]) != 0 || s_transientsCollisionMP_LoadedAllTiles )
        break;
      if ( v9 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v14 & s_transientsCollisionMP_LoadRequestedTiles.array[v13]) != 0 || s_transientsCollisionMP_LoadRequestedAllTiles )
      {
        v5 += TileCost;
LABEL_16:
        v6 = v49;
        goto LABEL_17;
      }
      v6 = TileCost + v49;
      v49 += TileCost;
LABEL_17:
      if ( ++v9 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      {
        v7 = y;
        v3 = 0i64;
        v10 = v48;
        goto LABEL_19;
      }
    }
    v4 += TileCost;
    goto LABEL_16;
  }
LABEL_19:
  v15 = j_va("%i Loaded Pages, %i Requested Pages, %i Unloaded Pages.", v4, v5, v6);
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v15, &colorWhite);
  *v7 = *v7 + 6.0;
  v16 = j_va("%i Loaded Bytes, %i Requested Bytes, %i Unloaded Bytes.", v4 << 16, v5 << 16, v6 << 16);
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v16, &colorWhite);
  *v7 = *v7 + 6.0;
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && s_transientsCollisionMP_SetupAllTiles )
  {
    Com_sprintf(dest, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v17 = j_va("%s is Loaded/Setup and costs %i pages, %i bytes", dest, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v17, &colorBlue);
    *v7 = *v7 + 6.0;
  }
  v18 = s_transientsCollisionMP_NumTiles;
  v19 = 0;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    do
    {
      LODWORD(fmt) = v19;
      v20 = CL_TransientsCollisionMP_GetTileCost(v19, v10);
      Com_sprintf(v58, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( v19 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      v21 = (unsigned __int64)v19 >> 5;
      v22 = 0x80000000 >> (v19 & 0x1F);
      if ( (v22 & s_transientsCollisionMP_SetupRequestedTiles.array[v21]) != 0 )
      {
        if ( v19 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v22 & s_transientsCollisionMP_SetupTiles.array[v21]) != 0 )
        {
          v23 = j_va("%s is Loaded/Setup and costs %i pages, %i bytes", v58, v20, v20 << 16);
          CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v23, &colorBlue);
          *v7 = *v7 + 6.0;
        }
      }
      v18 = s_transientsCollisionMP_NumTiles;
      ++v19;
      v10 = v48;
    }
    while ( v19 < (unsigned int)s_transientsCollisionMP_NumTiles );
    v3 = 0i64;
  }
  if ( s_transientsCollisionMP_SetupRequestedAllTiles )
  {
    if ( s_transientsCollisionMP_SetupAllTiles )
      goto LABEL_40;
    Com_sprintf(v59, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v24 = j_va("%s is Loaded/Setting up and costs %i pages, %i bytes", v59, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    fmta = &colorGreen;
  }
  else
  {
    if ( !s_transientsCollisionMP_SetupAllTiles )
      goto LABEL_40;
    Com_sprintf(v60, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v24 = j_va("%s is Loaded/Shutting down and costs %i pages, %i bytes", v60, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    fmta = &colorDkGreen;
  }
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v24, fmta);
  v18 = s_transientsCollisionMP_NumTiles;
  *v7 = *v7 + 6.0;
LABEL_40:
  v25 = 0;
  if ( v18 )
  {
    while ( 1 )
    {
      LODWORD(fmt) = v25;
      v26 = CL_TransientsCollisionMP_GetTileCost(v25, v48);
      Com_sprintf(v55, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( v25 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      v27 = (unsigned __int64)v25 >> 5;
      v28 = 0x80000000 >> (v25 & 0x1F);
      if ( (v28 & s_transientsCollisionMP_SetupRequestedTiles.array[v27]) == 0 )
        goto LABEL_127;
      if ( v25 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v28 & s_transientsCollisionMP_SetupTiles.array[v27]) != 0 )
      {
LABEL_127:
        if ( v25 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v28 & s_transientsCollisionMP_SetupRequestedTiles.array[v27]) != 0 )
          goto LABEL_60;
        if ( v25 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v28 & s_transientsCollisionMP_SetupTiles.array[v27]) == 0 )
          goto LABEL_60;
        v29 = j_va("%s is Loaded/Shutting down and costs %i pages, %i bytes", v55, v26, v26 << 16);
        fmtb = &colorDkGreen;
      }
      else
      {
        v29 = j_va("%s is Loaded/Setting up and costs %i pages, %i bytes", v55, v26, v26 << 16);
        fmtb = &colorGreen;
      }
      CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v29, fmtb);
      *v7 = *v7 + 6.0;
LABEL_60:
      v18 = s_transientsCollisionMP_NumTiles;
      if ( ++v25 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      {
        v3 = 0i64;
        break;
      }
    }
  }
  if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles )
  {
    if ( s_transientsCollisionMP_LoadRequestedAllTiles )
    {
      if ( s_transientsCollisionMP_LoadedAllTiles )
        goto LABEL_70;
      Com_sprintf(v61, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
      v30 = j_va("%s is Loading and costs %i pages, %i bytes", v61, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
      fmtc = &colorYellow;
    }
    else
    {
      if ( !s_transientsCollisionMP_LoadedAllTiles )
        goto LABEL_70;
      Com_sprintf(v62, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
      v30 = j_va("%s is Unloading and costs %i pages, %i bytes", v62, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
      fmtc = &colorDkYellow;
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v30, fmtc);
    v18 = s_transientsCollisionMP_NumTiles;
    *v7 = *v7 + 6.0;
  }
LABEL_70:
  v31 = 0;
  if ( v18 )
  {
    while ( 1 )
    {
      LODWORD(fmt) = v31;
      v32 = CL_TransientsCollisionMP_GetTileCost(v31, v48);
      Com_sprintf(v56, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( v31 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      v33 = (unsigned __int64)v31 >> 5;
      v34 = 0x80000000 >> (v31 & 0x1F);
      if ( (v34 & s_transientsCollisionMP_SetupRequestedTiles.array[v33]) != 0 )
        goto LABEL_128;
      if ( v31 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v34 & s_transientsCollisionMP_SetupTiles.array[v33]) != 0 )
        goto LABEL_128;
      if ( v31 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v34 & s_transientsCollisionMP_LoadRequestedTiles.array[v33]) == 0 )
        goto LABEL_128;
      if ( v31 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v34 & s_transientsCollisionMP_LoadedTiles.array[v33]) != 0 )
      {
LABEL_128:
        if ( v31 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v34 & s_transientsCollisionMP_SetupRequestedTiles.array[v33]) != 0 )
          goto LABEL_106;
        if ( v31 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v34 & s_transientsCollisionMP_SetupTiles.array[v33]) != 0 )
          goto LABEL_106;
        if ( v31 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v34 & s_transientsCollisionMP_LoadRequestedTiles.array[v33]) != 0 )
          goto LABEL_106;
        if ( v31 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v34 & s_transientsCollisionMP_LoadedTiles.array[v33]) == 0 )
          goto LABEL_106;
        v35 = j_va("%s is Unloading and costs %i pages, %i bytes", v56, v32, v32 << 16);
        fmtd = &colorDkYellow;
      }
      else
      {
        v35 = j_va("%s is Loading and costs %i pages, %i bytes", v56, v32, v32 << 16);
        fmtd = &colorYellow;
      }
      CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v35, fmtd);
      *v7 = *v7 + 6.0;
LABEL_106:
      v18 = s_transientsCollisionMP_NumTiles;
      if ( ++v31 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      {
        v3 = 0i64;
        break;
      }
    }
  }
  if ( !s_transientsCollisionMP_LoadedAllTiles && !s_transientsCollisionMP_LoadRequestedAllTiles )
  {
    Com_sprintf(v54, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v36 = j_va("%s is Unloaded and costs %i pages, %i bytes", v54, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v36, &colorRed);
    v18 = s_transientsCollisionMP_NumTiles;
    *v7 = *v7 + 6.0;
  }
  if ( v18 )
  {
    do
    {
      v37 = s_transientsCollisionMP_SortedTileIndices[v3];
      if ( (unsigned int)v37 >= v18 )
      {
        LODWORD(v47) = v18;
        LODWORD(v46) = s_transientsCollisionMP_SortedTileIndices[v3];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1714, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "tileIdx doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      LODWORD(fmt) = v37;
      v38 = CL_TransientsCollisionMP_GetTileCost(v37, v48);
      Com_sprintf(v54, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( (unsigned int)v37 >= 0x400 )
      {
        LODWORD(v47) = 1024;
        LODWORD(v46) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      v39 = 0x80000000 >> (v37 & 0x1F);
      if ( (v39 & s_transientsCollisionMP_LoadedTiles.array[v37 >> 5]) == 0 )
      {
        if ( (unsigned int)v37 >= 0x400 )
        {
          LODWORD(v47) = 1024;
          LODWORD(v46) = v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
            __debugbreak();
        }
        if ( (v39 & s_transientsCollisionMP_LoadRequestedTiles.array[v37 >> 5]) == 0 )
        {
          v40 = j_va("%s is Unloaded and costs %i pages, %i bytes", v54, v38, v38 << 16);
          CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *v7, v40, &colorRed);
          *v7 = *v7 + 6.0;
        }
      }
      v18 = s_transientsCollisionMP_NumTiles;
      v3 = (unsigned int)(v50 + 1);
      v50 = v3;
    }
    while ( (unsigned int)v3 < (unsigned int)s_transientsCollisionMP_NumTiles );
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawMinimap
==============
*/
void CL_TransientsCollisionMP_Debug_DrawMinimap(const ScreenPlacement *const scrPlace, float *x, float *y, const LocalClientNum_t localClientNum)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  float v14; 
  cg_t *LocalClientGlobals; 
  int v16; 
  __int64 v17; 
  unsigned int v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  unsigned int v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  bool IsLoadModeInFrontend; 
  unsigned int TileCost; 
  const char *v30; 
  const char *v31; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  vec4_t color; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 

  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    v11 = j_va("Red:Unloaded, Yellow:Streaming, Green:Loaded, Blue:Setup.");
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *y, v11, &colorWhite);
    *y = *y + 6.0;
    v12 = j_va("Colored Numbers show memory in %i byte pages", 0x10000i64);
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *y, v12, &colorWhite);
    *y = *y + 6.0;
    v13 = j_va("White Numbers show transient collision file number");
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
    v14 = *y + 6.0;
    *y = v14;
    UI_FillRect(scrPlace, *x, v14, 384.0, 384.0, 1, 1, &colorBlack);
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(vertAlign) = 2;
      LODWORD(horzAlign) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", horzAlign, vertAlign) )
        __debugbreak();
    }
    if ( localClientNum < cg_t::ms_allocatedCount )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( LocalClientGlobals )
      {
        if ( LocalClientGlobals->compassMapMaterial )
          CL_DrawRotatedStretchPicWithoutSplitScreenScaling(scrPlace, (float)((float)(0.0014648438 * LocalClientGlobals->compassMapUpperLeft.v[0]) + 192.0) + *x, (float)(192.0 - (float)(0.0014648438 * LocalClientGlobals->compassMapUpperLeft.v[1])) + *y, 0.0014648438 * LocalClientGlobals->compassMapWorldSize.v[0], 0.0014648438 * LocalClientGlobals->compassMapWorldSize.v[1], 1, 1, 0.0, 0.0, 1.0, 1.0, 0.0, 0, &colorWhite, LocalClientGlobals->compassMapMaterial);
      }
    }
    v16 = s_transientsCollisionMP_NumTiles;
    v17 = 0i64;
    v18 = 0;
    if ( (_DWORD)s_transientsCollisionMP_NumTiles )
    {
      v37 = v4;
      v36 = v5;
      v35 = v6;
      do
      {
        v19 = *y;
        v20 = (float)(v18 & 0x1F);
        v21 = (float)(v20 * 12.0) + *x;
        color.v[3] = FLOAT_0_30000001;
        CL_TransientsCollisionMP_Debug_GetTileColor(v18, &color);
        v22 = (float)(31 - (v18 >> 5));
        UI_FillRect(scrPlace, v21 + 0.5, (float)((float)(v22 * 12.0) + v19) + 0.5, 11.0, 11.0, 1, 1, &color);
        v16 = s_transientsCollisionMP_NumTiles;
        ++v18;
      }
      while ( v18 < (unsigned int)s_transientsCollisionMP_NumTiles );
    }
    v23 = 0;
    if ( v16 )
    {
      do
      {
        v24 = (float)(31 - (v23 >> 5));
        v25 = (float)(v24 * 12.0) + *y;
        v26 = (float)(v23 & 0x1F);
        v27 = (float)(v26 * 12.0) + *x;
        color.v[3] = FLOAT_1_0;
        CL_TransientsCollisionMP_Debug_GetTileColor(v23, &color);
        IsLoadModeInFrontend = CL_TransientsMP_IsLoadModeInFrontend();
        TileCost = CL_TransientsCollisionMP_GetTileCost(v23, IsLoadModeInFrontend);
        v30 = j_va("%i", TileCost);
        CL_TransientsCollisionMP_Debug_DrawString(scrPlace, v27, v25, v30, &color);
        v31 = j_va("%i", v23);
        CL_TransientsCollisionMP_Debug_DrawString(scrPlace, v27, v25 + 6.0, v31, &colorWhite);
        ++v23;
      }
      while ( v23 < (unsigned int)s_transientsCollisionMP_NumTiles );
    }
    if ( s_transientsCollisionMP_NumStreamPositions )
    {
      do
      {
        UI_FillRect(scrPlace, (float)((float)(0.0014648438 * s_transientsCollisionMP_StreamPositions[v17].origin.v[0]) + *x) + 190.0, (float)((float)(-0.0014648438 * s_transientsCollisionMP_StreamPositions[v17].origin.v[1]) + *y) + 190.0, 4.0, 4.0, 1, 1, &colorBlue);
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < s_transientsCollisionMP_NumStreamPositions );
    }
    *y = *y + 384.0;
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawString
==============
*/

void __fastcall CL_TransientsCollisionMP_Debug_DrawString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor)
{
  __int128 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 v10; 

  v6 = *(_OWORD *)&x;
  if ( y > 0.0 && y < 1080.0 )
    CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, 0, 1, 6.0, 0);
  v7 = DVARBOOL_cl_transientCollision_debugDump;
  if ( !DVARBOOL_cl_transientCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = DVARINT_cl_transientCollision_debugDisplayOffsetX;
    if ( !DVARINT_cl_transientCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = (float)v8->current.integer + 8.0;
    if ( *(float *)&x > v9 )
    {
      do
      {
        Com_Printf(14, " ");
        v10 = v6;
        *(float *)&v10 = *(float *)&v6 + -6.0;
        v6 = v10;
      }
      while ( *(float *)&v10 > v9 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawTitle
==============
*/
void CL_TransientsCollisionMP_Debug_DrawTitle(const ScreenPlacement *const scrPlace, float *x, float *y, const LocalClientNum_t localClientNum)
{
  const char *v8; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  unsigned __int16 TileForPos; 
  const char *v14; 
  int setColora; 
  vec4_t *setColor; 
  vec3_t pos; 
  __int64 v18; 
  char dest[64]; 

  v18 = -2i64;
  setColora = CL_TransientsCollisionMP_GetBudgetBytes() >> 20;
  v8 = j_va("MP Collision Transients for %s - %i files - loading mode %s up to %iMB", s_transientsCollisionMP_MapName, (unsigned int)s_transientsCollisionMP_NumTiles, CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NAMES[s_transientsCollisionMP_TransientMode], setColora);
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v8, &colorWhite);
  *y = *y + 6.0;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    if ( localClientNum >= cg_t::ms_allocatedCount )
      goto LABEL_15;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals )
      goto LABEL_15;
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(pos.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(pos.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(pos.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
    TileForPos = CL_TransientCollisionMP_GetTileForPos(&pos);
    memset(&pos, 0, sizeof(pos));
    if ( TileForPos == 0xFFFF )
    {
LABEL_15:
      v14 = j_va("No Tile");
    }
    else
    {
      LODWORD(setColor) = TileForPos;
      Com_sprintf(dest, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, setColor);
      v14 = j_va("Current Tile: %s", dest);
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)x), *y, v14, &colorWhite);
    *y = *y + 6.0;
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_GetTileColor
==============
*/
void CL_TransientsCollisionMP_Debug_GetTileColor(int tileIdx, vec4_t *color)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  color->v[0] = colorOrange.v[0];
  color->v[1] = colorOrange.v[1];
  color->v[2] = colorOrange.v[2];
  v3 = (unsigned int)tileIdx;
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && s_transientsCollisionMP_SetupAllTiles )
    goto LABEL_11;
  if ( (unsigned int)tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", tileIdx, 1024) )
    __debugbreak();
  v4 = v3 >> 5;
  v5 = 0x80000000 >> (v3 & 0x1F);
  if ( (v5 & s_transientsCollisionMP_SetupRequestedTiles.array[v3 >> 5]) != 0 )
  {
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_SetupTiles.array[v4]) != 0 )
    {
LABEL_11:
      color->v[0] = colorBlue.v[0];
      color->v[1] = colorBlue.v[1];
      color->v[2] = colorBlue.v[2];
      return;
    }
  }
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles )
    goto LABEL_53;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v7) = 1024;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( (v5 & s_transientsCollisionMP_SetupRequestedTiles.array[v4]) != 0 )
  {
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_SetupTiles.array[v4]) == 0 )
      goto LABEL_53;
  }
  if ( !s_transientsCollisionMP_SetupRequestedAllTiles && s_transientsCollisionMP_SetupAllTiles )
    goto LABEL_32;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v7) = 1024;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( (v5 & s_transientsCollisionMP_SetupRequestedTiles.array[v4]) == 0 )
  {
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_SetupTiles.array[v4]) != 0 )
    {
LABEL_32:
      color->v[0] = colorDkGreen.v[0];
      color->v[1] = colorDkGreen.v[1];
      color->v[2] = colorDkGreen.v[2];
      return;
    }
  }
  if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && s_transientsCollisionMP_LoadRequestedAllTiles && s_transientsCollisionMP_LoadedAllTiles )
    goto LABEL_53;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v7) = 1024;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( (v5 & s_transientsCollisionMP_SetupRequestedTiles.array[v4]) != 0 )
    goto LABEL_57;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v7) = 1024;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( (v5 & s_transientsCollisionMP_SetupTiles.array[v4]) != 0 )
    goto LABEL_57;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v7) = 1024;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( (v5 & s_transientsCollisionMP_LoadRequestedTiles.array[v4]) == 0 )
    goto LABEL_57;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v7) = 1024;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( (v5 & s_transientsCollisionMP_LoadedTiles.array[v4]) == 0 )
  {
LABEL_57:
    if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && s_transientsCollisionMP_LoadRequestedAllTiles && !s_transientsCollisionMP_LoadedAllTiles )
      goto LABEL_74;
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_SetupRequestedTiles.array[v4]) != 0 )
      goto LABEL_78;
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_SetupTiles.array[v4]) != 0 )
      goto LABEL_78;
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_LoadRequestedTiles.array[v4]) == 0 )
      goto LABEL_78;
    if ( (unsigned int)v3 >= 0x400 )
    {
      LODWORD(v7) = 1024;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    if ( (v5 & s_transientsCollisionMP_LoadedTiles.array[v4]) != 0 )
    {
LABEL_78:
      if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && !s_transientsCollisionMP_LoadRequestedAllTiles && s_transientsCollisionMP_LoadedAllTiles )
        goto LABEL_95;
      if ( (unsigned int)v3 >= 0x400 )
      {
        LODWORD(v7) = 1024;
        LODWORD(v6) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
          __debugbreak();
      }
      if ( (v5 & s_transientsCollisionMP_SetupRequestedTiles.array[v4]) != 0 )
        goto LABEL_97;
      if ( (unsigned int)v3 >= 0x400 )
      {
        LODWORD(v7) = 1024;
        LODWORD(v6) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
          __debugbreak();
      }
      if ( (v5 & s_transientsCollisionMP_SetupTiles.array[v4]) != 0 )
        goto LABEL_97;
      if ( (unsigned int)v3 >= 0x400 )
      {
        LODWORD(v7) = 1024;
        LODWORD(v6) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
          __debugbreak();
      }
      if ( (v5 & s_transientsCollisionMP_LoadRequestedTiles.array[v4]) != 0 )
        goto LABEL_97;
      if ( (unsigned int)v3 >= 0x400 )
      {
        LODWORD(v7) = 1024;
        LODWORD(v6) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
          __debugbreak();
      }
      if ( (v5 & s_transientsCollisionMP_LoadedTiles.array[v4]) == 0 )
      {
LABEL_97:
        if ( !s_transientsCollisionMP_LoadedAllTiles && !s_transientsCollisionMP_LoadRequestedAllTiles )
          goto LABEL_106;
        if ( (unsigned int)v3 >= 0x400 )
        {
          LODWORD(v7) = 1024;
          LODWORD(v6) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
            __debugbreak();
        }
        if ( (v5 & s_transientsCollisionMP_LoadedTiles.array[v4]) != 0 )
          goto LABEL_111;
        if ( (unsigned int)v3 >= 0x400 )
        {
          LODWORD(v7) = 1024;
          LODWORD(v6) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
            __debugbreak();
        }
        if ( (v5 & s_transientsCollisionMP_LoadRequestedTiles.array[v4]) != 0 )
        {
LABEL_111:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1443, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            __debugbreak();
        }
        else
        {
LABEL_106:
          color->v[0] = colorRed.v[0];
          color->v[1] = colorRed.v[1];
          color->v[2] = colorRed.v[2];
        }
      }
      else
      {
LABEL_95:
        color->v[0] = colorDkYellow.v[0];
        color->v[1] = colorDkYellow.v[1];
        color->v[2] = colorDkYellow.v[2];
      }
    }
    else
    {
LABEL_74:
      color->v[0] = colorYellow.v[0];
      color->v[1] = colorYellow.v[1];
      color->v[2] = colorYellow.v[2];
    }
  }
  else
  {
LABEL_53:
    color->v[0] = colorLtGreen.v[0];
    color->v[1] = colorLtGreen.v[1];
    color->v[2] = colorLtGreen.v[2];
  }
}

/*
==============
CL_TransientsCollisionMP_DistanceSort
==============
*/
__int64 CL_TransientsCollisionMP_DistanceSort(const void *a, const void *b)
{
  __int64 v2; 
  __int64 v3; 
  float v4; 

  v2 = *(unsigned __int16 *)a;
  v3 = *(unsigned __int16 *)b;
  v4 = s_transientsCollisionMP_TileStreamingDistancesSq[v2];
  if ( v4 >= s_transientsCollisionMP_TileStreamingDistancesSq[v3] )
  {
    if ( v4 > s_transientsCollisionMP_TileStreamingDistancesSq[v3] )
      return 1i64;
    if ( (unsigned __int16)v2 >= (unsigned __int16)v3 )
      return (unsigned __int16)v2 > (unsigned __int16)v3;
  }
  return 0xFFFFFFFFi64;
}

/*
==============
CL_TransientsCollisionMP_GetBudgetBytes
==============
*/
unsigned __int64 CL_TransientsCollisionMP_GetBudgetBytes()
{
  unsigned __int64 MapDesiredBudget; 
  bool v1; 
  XB3ConsoleType XB3ConsoleType; 
  unsigned __int64 result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) )
    return 0i64;
  MapDesiredBudget = CL_TransientsCollisionMP_GetMapDesiredBudget();
  if ( s_transientsCollisionMP_IsBRMap && s_transientsCollisionMP_InBRLobby )
    return 0i64;
  v1 = Com_FrontEnd_IsInFrontEnd();
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  if ( v1 )
  {
    if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO || Mem_Paged_GetDevMemorySize() >= 0x30000000 )
    {
      result = Dvar_GetInt_Internal_DebugName(DVARINT_cl_transientCollision_MemoryBudgetFrontend, "cl_transientCollision_MemoryBudgetFrontend");
      if ( (int)result > MapDesiredBudget )
        return MapDesiredBudget;
    }
    else
    {
      result = Dvar_GetInt_Internal_DebugName(DVARINT_cl_transientCollision_MemoryBudgetFrontendLowMem, "cl_transientCollision_MemoryBudgetFrontendLowMem");
      if ( (int)result > MapDesiredBudget )
        return MapDesiredBudget;
    }
  }
  else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO || Mem_Paged_GetDevMemorySize() >= 0x30000000 )
  {
    return MapDesiredBudget;
  }
  else
  {
    result = Dvar_GetInt_Internal_DebugName(DVARINT_cl_transientCollision_MemoryBudgetGameLowMem, "cl_transientCollision_MemoryBudgetGameLowMem");
    if ( (int)result > MapDesiredBudget )
      return MapDesiredBudget;
  }
  return result;
}

/*
==============
CL_TransientsCollisionMP_GetMapDesiredBudget
==============
*/
unsigned __int64 CL_TransientsCollisionMP_GetMapDesiredBudget()
{
  unsigned __int64 result; 
  const dvar_t *v1; 
  const char *v2; 

  result = s_transientsCollisionMP_MapOverrideTileBudget;
  if ( !s_transientsCollisionMP_MapOverrideTileBudget )
  {
    if ( s_transientsCollisionMP_CollisionReductionMap == (_BYTE)s_transientsCollisionMP_MapOverrideTileBudget )
    {
      v1 = DVARINT_cl_transientCollision_MemoryBudgetGame;
      if ( !DVARINT_cl_transientCollision_MemoryBudgetGame )
      {
        v2 = "cl_transientCollision_MemoryBudgetGame";
LABEL_7:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v2) )
          __debugbreak();
      }
    }
    else
    {
      v1 = DCONST_DVARINT_cl_transientCollision_MemoryBudgetReductionMap;
      if ( !DCONST_DVARINT_cl_transientCollision_MemoryBudgetReductionMap )
      {
        v2 = "cl_transientCollision_MemoryBudgetReductionMap";
        goto LABEL_7;
      }
    }
    Dvar_CheckFrontendServerThread(v1);
    return v1->current.integer;
  }
  return result;
}

/*
==============
CL_TransientsCollisionMP_GetPriorityMode
==============
*/
__int64 CL_TransientsCollisionMP_GetPriorityMode()
{
  return (unsigned int)s_transientsCollisionMP_PriorityMode;
}

/*
==============
CL_TransientsCollisionMP_GetTileCost
==============
*/
__int64 CL_TransientsCollisionMP_GetTileCost(const unsigned int tileIdx, const bool isPreloading)
{
  __int64 v2; 
  unsigned int v4; 
  unsigned __int64 v5; 

  v2 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 632, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( ( sizeof( *array_counter( s_transientsCollisionMP_TileCosts ) ) + 0 ) )", "tileIdx doesn't index ARRAY_COUNT( s_transientsCollisionMP_TileCosts )\n\t%i not in [0, %i)", tileIdx, 1024) )
    __debugbreak();
  v4 = s_transientsCollisionMP_TileCosts[v2];
  if ( !isPreloading )
    return v4;
  v5 = DB_GetPerTransientAdditionalTempCostForPreload() >> 16;
  if ( v5 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v5, "unsigned", v5) )
    __debugbreak();
  return v4 + (unsigned int)v5 + 1;
}

/*
==============
CL_TransientsCollisionMP_GetTransientMode
==============
*/
__int64 CL_TransientsCollisionMP_GetTransientMode()
{
  return (unsigned int)s_transientsCollisionMP_TransientMode;
}

/*
==============
CL_TransientsCollisionMP_GetXB3DevBudgetBytes
==============
*/
unsigned __int64 CL_TransientsCollisionMP_GetXB3DevBudgetBytes()
{
  unsigned __int64 MapDesiredBudget; 
  const dvar_t *v1; 
  const char *v2; 
  unsigned __int64 result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) )
    return 0i64;
  MapDesiredBudget = CL_TransientsCollisionMP_GetMapDesiredBudget();
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    v1 = DVARINT_cl_transientCollision_MemoryBudgetFrontendLowMem;
    if ( !DVARINT_cl_transientCollision_MemoryBudgetFrontendLowMem )
    {
      v2 = "cl_transientCollision_MemoryBudgetFrontendLowMem";
      goto LABEL_7;
    }
  }
  else
  {
    v1 = DVARINT_cl_transientCollision_MemoryBudgetGameLowMem;
    if ( !DVARINT_cl_transientCollision_MemoryBudgetGameLowMem )
    {
      v2 = "cl_transientCollision_MemoryBudgetGameLowMem";
LABEL_7:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v2) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v1);
  result = v1->current.integer;
  if ( result > MapDesiredBudget )
    return MapDesiredBudget;
  return result;
}

/*
==============
CL_TransientsCollisionMP_GetXB3ShipBudgetBytes
==============
*/
unsigned __int64 CL_TransientsCollisionMP_GetXB3ShipBudgetBytes()
{
  unsigned __int64 MapDesiredBudget; 
  const dvar_t *v1; 
  unsigned __int64 result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) )
    return 0i64;
  MapDesiredBudget = CL_TransientsCollisionMP_GetMapDesiredBudget();
  if ( !Com_FrontEnd_IsInFrontEnd() )
    return MapDesiredBudget;
  v1 = DVARINT_cl_transientCollision_MemoryBudgetFrontend;
  if ( !DVARINT_cl_transientCollision_MemoryBudgetFrontend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_MemoryBudgetFrontend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  result = v1->current.integer;
  if ( result > MapDesiredBudget )
    return MapDesiredBudget;
  return result;
}

/*
==============
CL_TransientsCollisionMP_GetZoneName
==============
*/
void CL_TransientsCollisionMP_GetZoneName(const unsigned int index, char *outName)
{
  const char *v4; 
  char *fmt; 

  if ( index >= (unsigned int)s_transientsCollisionMP_NumTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1254, ASSERT_TYPE_ASSERT, "(index < s_transientsCollisionMP_NumTiles)", (const char *)&queryFormat, "index < s_transientsCollisionMP_NumTiles") )
    __debugbreak();
  if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1255, ASSERT_TYPE_ASSERT, "(outName)", (const char *)&queryFormat, "outName") )
    __debugbreak();
  v4 = s_transientsCollisionMP_MapName;
  if ( !s_transientsCollisionMP_MapName )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1257, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_MapName)", (const char *)&queryFormat, "s_transientsCollisionMP_MapName") )
      __debugbreak();
    v4 = s_transientsCollisionMP_MapName;
  }
  if ( s_transientsCollisionMP_LoadRequestedAllTiles )
  {
    Com_sprintf(outName, 0x40ui64, "%s_cg_ls_tr", v4);
  }
  else
  {
    LODWORD(fmt) = index;
    Com_sprintf(outName, 0x40ui64, "%s_cg_%05u_tr", v4, fmt);
  }
}

/*
==============
CL_TransientsCollisionMP_HasCollision
==============
*/
char CL_TransientsCollisionMP_HasCollision()
{
  int v0; 
  bitarray<1024> *i; 

  v0 = 0;
  for ( i = &s_transientsCollisionMP_SetupTiles; !i->array[0]; i = (bitarray<1024> *)((char *)i + 4) )
  {
    if ( (unsigned int)++v0 >= 0x20 )
      return 0;
  }
  return 1;
}

/*
==============
CL_TransientsCollisionMP_HasGridSetupForPosition
==============
*/
char CL_TransientsCollisionMP_HasGridSetupForPosition(const LocalClientNum_t localClientNum, const vec3_t *pos)
{
  unsigned int v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 

  if ( s_transientsCollisionMP_TransientMode == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_CLOSEST )
  {
    v3 = (int)(float)((float)(0.00012207031 * pos->v[0]) + 16.0) + 32 * (int)(float)((float)(0.00012207031 * pos->v[1]) + 16.0);
    if ( v3 >= (unsigned int)s_transientsCollisionMP_NumTiles || (_WORD)v3 == 0xFFFF )
      return 1;
    v4 = (unsigned __int16)v3;
    if ( (unsigned __int16)v3 >= 0x400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", (unsigned __int16)v3, 1024) )
      __debugbreak();
    v5 = 0x80000000 >> (v4 & 0x1F);
    v6 = (v5 & s_transientsCollisionMP_LoadRequestedTiles.array[v4 >> 5]) != 0;
    if ( (unsigned int)v4 >= 0x400 )
    {
      LODWORD(v8) = 1024;
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v7, v8) )
        __debugbreak();
    }
    return v6 ^ ((v5 & s_transientsCollisionMP_SetupTiles.array[v4 >> 5]) != 0) ^ 1;
  }
  else
  {
    if ( s_transientsCollisionMP_TransientMode != CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_ALL )
    {
      if ( s_transientsCollisionMP_TransientMode == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_COUNT )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D0A770, 5809i64);
      return 1;
    }
    return !(_DWORD)s_transientsCollisionMP_NumTiles || s_transientsCollisionMP_SetupAllTiles;
  }
}

/*
==============
CL_TransientsCollisionMP_HasStreamingTiles
==============
*/
bool CL_TransientsCollisionMP_HasStreamingTiles()
{
  return (_DWORD)s_transientsCollisionMP_NumTiles != 0;
}

/*
==============
CL_TransientsCollisionMP_IsRequestedLoaded
==============
*/
bool CL_TransientsCollisionMP_IsRequestedLoaded()
{
  int v0; 
  __int64 i; 
  char v2; 

  v0 = 0;
  for ( i = 0i64; s_transientsCollisionMP_LoadRequestedTiles.array[i] == s_transientsCollisionMP_LoadedTiles.array[i]; ++i )
  {
    if ( (unsigned int)++v0 >= 0x20 )
    {
      v2 = 1;
      return s_transientsCollisionMP_LoadRequestedAllTiles == s_transientsCollisionMP_LoadedAllTiles && v2;
    }
  }
  v2 = 0;
  return s_transientsCollisionMP_LoadRequestedAllTiles == s_transientsCollisionMP_LoadedAllTiles && v2;
}

/*
==============
CL_TransientsCollisionMP_LoadIndividualTileTransient
==============
*/
void CL_TransientsCollisionMP_LoadIndividualTileTransient(const unsigned int tileIdx, unsigned int priority)
{
  unsigned __int64 v4; 
  unsigned __int16 v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  __int64 v8; 

  v4 = tileIdx;
  v5 = s_transientsCollisionMP_FileIndexMapping[tileIdx];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 869, ASSERT_TYPE_ASSERT, "(fileIndex != 0)", (const char *)&queryFormat, "fileIndex != 0") )
    __debugbreak();
  if ( tileIdx >= 0x400 )
  {
    LODWORD(v8) = tileIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, 1024) )
      __debugbreak();
  }
  v6 = v4 >> 5;
  v7 = 0x80000000 >> (tileIdx & 0x1F);
  if ( (v7 & s_transientsCollisionMP_LoadRequestedTiles.array[v6]) != 0 )
  {
    CL_TransientsMP_SetLoadPriorityByFileIndex(v5, priority);
  }
  else
  {
    if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", tileIdx, 1024) )
      __debugbreak();
    s_transientsCollisionMP_LoadRequestedTiles.array[v6] |= v7;
    CL_TransientsMP_LoadByFileIndex(v5, priority);
  }
}

/*
==============
CL_TransientsCollisionMP_OnClosePostUnload
==============
*/
void CL_TransientsCollisionMP_OnClosePostUnload(void)
{
  if ( s_transientCollisionMP_PhysicsMapLocalAllocatorSize )
  {
    Physics_ReleaseMapLocalAllocatorBuffer();
    s_transientCollisionMP_PhysicsMapLocalAllocatorSize = 0;
    Mem_Virtual_Free(s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer);
    s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer = NULL;
  }
  s_transientsCollisionMP_ComClosing = 0;
}

/*
==============
CL_TransientsCollisionMP_OnClosePreUnload
==============
*/
void CL_TransientsCollisionMP_OnClosePreUnload(void)
{
  s_transientsCollisionMP_ComClosing = 1;
}

/*
==============
CL_TransientsCollisionMP_OnFirstSnapshot
==============
*/
void CL_TransientsCollisionMP_OnFirstSnapshot(void)
{
  s_transientsCollisionMP_InBRLobby = 0;
}

/*
==============
CL_TransientsCollisionMP_OnLevelLoad
==============
*/
void CL_TransientsCollisionMP_OnLevelLoad(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1208, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  s_transientsCollisionMP_LobbyToGameStart = 0;
}

/*
==============
CL_TransientsCollisionMP_OnLevelPreloadCancel
==============
*/
void CL_TransientsCollisionMP_OnLevelPreloadCancel(void)
{
  s_transientsCollisionMP_TransientMode = CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE;
  CL_TransientsCollisionMP_ProcessFastfiles(0);
}

/*
==============
CL_TransientsCollisionMP_OnLevelUnload
==============
*/

void CL_TransientsCollisionMP_OnLevelUnload(void)
{
  CL_TransientsCollisionMP_ShutdownAndUnloadAllFiles();
}

/*
==============
CL_TransientsCollisionMP_OnLobbyToGameStart
==============
*/
void CL_TransientsCollisionMP_OnLobbyToGameStart(void)
{
  __int64 v0; 
  unsigned int v1; 
  unsigned __int64 v2; 
  unsigned int *v3; 
  unsigned __int16 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1164, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_transientsCollisionMP_LoadRequestedAllTiles )
  {
    s_transientsCollisionMP_LobbyToGameStart = 1;
  }
  else
  {
    v0 = 0i64;
    if ( (_DWORD)s_transientsCollisionMP_NumTiles )
    {
      do
      {
        if ( (unsigned int)v0 >= 0x400 )
        {
          LODWORD(v6) = 1024;
          LODWORD(v5) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
            __debugbreak();
        }
        v1 = 0x80000000 >> (v0 & 0x1F);
        v2 = (unsigned __int64)(unsigned int)v0 >> 5;
        v3 = &s_transientsCollisionMP_LoadRequestedTiles.array[v2];
        if ( (v1 & s_transientsCollisionMP_LoadRequestedTiles.array[v2]) != 0 )
        {
          if ( (unsigned int)v0 >= 0x400 )
          {
            LODWORD(v6) = 1024;
            LODWORD(v5) = v0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
              __debugbreak();
          }
          if ( (v1 & s_transientsCollisionMP_LoadedTiles.array[v2]) == 0 )
          {
            v4 = s_transientsCollisionMP_FileIndexMapping[v0];
            if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1185, ASSERT_TYPE_ASSERT, "(fileIndex != 0)", (const char *)&queryFormat, "fileIndex != 0") )
              __debugbreak();
            CL_TransientsMP_UnloadByFileIndex(v4);
            if ( (unsigned int)v0 >= 0x400 )
            {
              LODWORD(v8) = 1024;
              LODWORD(v7) = v0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, v8) )
                __debugbreak();
            }
            *v3 &= ~v1;
          }
        }
        v0 = (unsigned int)(v0 + 1);
      }
      while ( (unsigned int)v0 < (unsigned int)s_transientsCollisionMP_NumTiles );
      s_transientsCollisionMP_LobbyToGameStart = 1;
    }
    else
    {
      s_transientsCollisionMP_LobbyToGameStart = 1;
    }
  }
}

/*
==============
CL_TransientsCollisionMP_ProcessFastfiles
==============
*/
void CL_TransientsCollisionMP_ProcessFastfiles(bool force)
{
  unsigned int v1; 
  bitarray<1024> *v2; 
  unsigned int v3; 
  bool v4; 
  unsigned __int16 *v5; 
  bool v6; 
  unsigned int v7; 
  int Int_Internal_DebugName; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  bool IsLoadModeInFrontend; 
  bool v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned int TileCost; 
  unsigned int v17; 
  const char *v18; 
  char v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  CL_TransientsCollisionMP_PriorityMode v25; 
  int (*v26)[21]; 
  unsigned int v27; 
  unsigned __int16 v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  unsigned __int16 *v36; 
  __int64 v37; 

  if ( s_transientsCollisionMP_LobbyToGameStart && !force )
    return;
  if ( s_transientsCollisionMP_TransientMode == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE )
  {
    CL_TransientsCollisionMP_ShutdownIndividualTileTransients();
    CL_TransientsCollisionMP_ShutdownAllTilesTransient();
    CL_TransientsCollisionMP_UpdateTransientFlags(1);
    CL_TransientsCollisionMP_UnloadIndividualTileTransients();
    CL_TransientsCollisionMP_UnloadAllTilesTransient();
    return;
  }
  if ( s_transientsCollisionMP_TransientMode != CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_CLOSEST )
  {
    if ( s_transientsCollisionMP_TransientMode == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_ALL )
    {
      CL_TransientsCollisionMP_ShutdownIndividualTileTransients();
      CL_TransientsCollisionMP_UpdateTransientFlags(1);
      CL_TransientsCollisionMP_UnloadIndividualTileTransients();
      v1 = 0;
      v2 = &s_transientsCollisionMP_LoadedTiles;
      v3 = 0;
      while ( !v2->array[0] )
      {
        ++v3;
        v2 = (bitarray<1024> *)((char *)v2 + 4);
        if ( v3 >= 0x20 )
        {
          v4 = s_transientsCollisionMP_LoadRequestedAllTiles;
          if ( !s_transientsCollisionMP_LoadRequestedAllTiles && s_transientsCollisionMP_LocalServerFileIndex )
          {
            s_transientsCollisionMP_LoadRequestedAllTiles = 1;
            CL_TransientsMP_LoadByFileIndex(s_transientsCollisionMP_LocalServerFileIndex, 0x2710u);
            v4 = s_transientsCollisionMP_LoadRequestedAllTiles;
          }
          if ( s_transientsCollisionMP_LoadedAllTiles && v4 && !s_transientsCollisionMP_SetupAllTiles && !s_transientsCollisionMP_SetupRequestedAllTiles )
          {
            s_transientsCollisionMP_SetupRequestedAllTiles = 1;
            if ( (_DWORD)s_transientsCollisionMP_NumTiles )
            {
              do
              {
                WorldCollision_RequestSetupTile(v1);
                StaticModels_RequestSetupTile(v1++);
              }
              while ( v1 < (unsigned int)s_transientsCollisionMP_NumTiles );
            }
          }
          return;
        }
      }
    }
    return;
  }
  CL_TransientsCollisionMP_ShutdownAllTilesTransient();
  CL_TransientsCollisionMP_UnloadAllTilesTransient();
  if ( s_transientsCollisionMP_LoadedAllTiles )
    return;
  CLTransientsCollisionMP_CalculateTileDistances();
  v5 = s_transientsCollisionMP_SortedTileIndices;
  v6 = Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80);
  v36 = s_transientsCollisionMP_SortedTileIndices;
  if ( !v6 || Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_transientCollision_EnableStreamingUpdates, "cl_transientCollision_EnableStreamingUpdates") )
    qsort(s_transientsCollisionMP_SortedTileIndices, (unsigned int)s_transientsCollisionMP_NumTiles, 2ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CL_TransientsCollisionMP_DistanceSort);
  v7 = 21;
  if ( v6 )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_transientCollision_MaxTilesOverride, "cl_transientCollision_MaxTilesOverride");
    if ( Int_Internal_DebugName != -1 )
      v7 = Int_Internal_DebugName;
  }
  v9 = CL_TransientsCollisionMP_GetBudgetBytes() >> 16;
  if ( !v9 )
  {
    v10 = s_transientsCollisionMP_NumTiles;
    v11 = 0;
    goto LABEL_39;
  }
  IsLoadModeInFrontend = CL_TransientsMP_IsLoadModeInFrontend();
  v10 = s_transientsCollisionMP_NumTiles;
  v13 = IsLoadModeInFrontend;
  v14 = 0i64;
  v11 = 0;
  if ( !(_DWORD)s_transientsCollisionMP_NumTiles )
    goto LABEL_38;
  while ( 1 )
  {
    v15 = s_transientsCollisionMP_SortedTileIndices[v11];
    if ( v15 >= v10 )
    {
      LODWORD(v32) = v10;
      LODWORD(v31) = s_transientsCollisionMP_SortedTileIndices[v11];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 667, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "tileIdx doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    TileCost = CL_TransientsCollisionMP_GetTileCost(v15, v13);
    v14 += TileCost;
    if ( v14 <= v9 )
      goto LABEL_35;
    if ( v11 )
      break;
    Com_PrintError(16, "TransientsCollisionMP: not enough memory to load tile_%u. %u > %zu!\n", v15, TileCost, v9);
LABEL_35:
    v10 = s_transientsCollisionMP_NumTiles;
    if ( ++v11 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      goto LABEL_38;
  }
  v10 = s_transientsCollisionMP_NumTiles;
LABEL_38:
  v5 = s_transientsCollisionMP_SortedTileIndices;
LABEL_39:
  if ( v11 > v7 )
    v11 = v7;
  if ( v11 )
  {
    v17 = (unsigned int)CL_TransientsCollisionMP_GetBudgetBytes() / 0xE00000 - 1;
    if ( v17 > v7 )
      v17 = v7;
    if ( (int)v17 < 1 )
      v17 = 1;
    if ( v11 < v17 )
    {
      v18 = j_va("Collision Tiles too big - limited to %i, target %i", v11, v17);
      StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_COLLISION_TRANSIENT_COUNT, 3000, v18, v11);
    }
    v10 = s_transientsCollisionMP_NumTiles;
  }
  v19 = 0;
  v20 = v11;
  if ( v11 >= v10 )
    goto LABEL_58;
  do
  {
    v21 = s_transientsCollisionMP_SortedTileIndices[v20];
    if ( (unsigned int)v21 >= v10 )
    {
      LODWORD(v32) = v10;
      LODWORD(v31) = s_transientsCollisionMP_SortedTileIndices[v20];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1030, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "tileIdx doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    CL_TransientsCollisionMP_ShutdownIndividualTileTransient(v21);
    CL_TransientsCollisionMP_UpdateTransientTileFlags(v21, 1);
    CL_TransientsCollisionMP_UnloadIndividualTileTransient(v21);
    if ( (unsigned int)v21 >= 0x400 )
    {
      LODWORD(v32) = 1024;
      LODWORD(v31) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
        __debugbreak();
    }
    v10 = s_transientsCollisionMP_NumTiles;
    ++v20;
    v19 |= ((0x80000000 >> (v21 & 0x1F)) & s_transientsCollisionMP_LoadedTiles.array[v21 >> 5]) != 0;
  }
  while ( v20 < (unsigned int)s_transientsCollisionMP_NumTiles );
  if ( !v19 )
  {
LABEL_58:
    v35 = 0;
    v22 = 0;
    if ( v11 )
    {
      v23 = 0i64;
      v37 = 0i64;
      while ( 1 )
      {
        v24 = *v5;
        if ( (unsigned int)v24 >= v10 )
        {
          LODWORD(v32) = v10;
          LODWORD(v31) = *v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1047, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "tileIdx doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        v25 = s_transientsCollisionMP_PriorityMode;
        if ( (unsigned int)s_transientsCollisionMP_PriorityMode > CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_COUNT )
        {
          LODWORD(v33) = 3;
          LODWORD(v31) = s_transientsCollisionMP_PriorityMode;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 131, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_transientsCollisionMP_PriorityMode ) && ( s_transientsCollisionMP_PriorityMode ) <= ( CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_COUNT )", "s_transientsCollisionMP_PriorityMode not in [0, CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_COUNT]\n\t%i not in [%i, %i]", v31, 0i64, v33) )
            __debugbreak();
          v25 = s_transientsCollisionMP_PriorityMode;
        }
        v26 = off_145069598[v25];
        if ( v22 > 0x15 )
        {
          LODWORD(v33) = 21;
          LODWORD(v31) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 134, ASSERT_TYPE_ASSERT, "( 0 ) <= ( tileOrder ) && ( tileOrder ) <= ( CL_TRANSIENTS_COLLISION_MP_BUDGET_MAX_TILES )", "tileOrder not in [0, CL_TRANSIENTS_COLLISION_MP_BUDGET_MAX_TILES]\n\t%i not in [%i, %i]", v31, 0i64, v33) )
            __debugbreak();
        }
        v27 = *(_DWORD *)((char *)v26 + v23);
        v28 = s_transientsCollisionMP_FileIndexMapping[v24];
        if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 869, ASSERT_TYPE_ASSERT, "(fileIndex != 0)", (const char *)&queryFormat, "fileIndex != 0") )
          __debugbreak();
        if ( (unsigned int)v24 >= 0x400 )
        {
          LODWORD(v32) = 1024;
          LODWORD(v31) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
            __debugbreak();
        }
        v29 = v24 >> 5;
        v30 = 0x80000000 >> (v24 & 0x1F);
        if ( (v30 & s_transientsCollisionMP_LoadRequestedTiles.array[v24 >> 5]) != 0 )
        {
          CL_TransientsMP_SetLoadPriorityByFileIndex(v28, v27);
        }
        else
        {
          if ( (unsigned int)v24 >= 0x400 )
          {
            LODWORD(v34) = 1024;
            LODWORD(v33) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v33, v34) )
              __debugbreak();
          }
          s_transientsCollisionMP_LoadRequestedTiles.array[v29] |= v30;
          CL_TransientsMP_LoadByFileIndex(v28, v27);
        }
        if ( (unsigned int)v24 >= 0x400 )
        {
          LODWORD(v32) = 1024;
          LODWORD(v31) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
            __debugbreak();
        }
        if ( (v30 & s_transientsCollisionMP_LoadedTiles.array[v29]) != 0 )
        {
          if ( (unsigned int)v24 >= 0x400 )
          {
            LODWORD(v32) = 1024;
            LODWORD(v31) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
              __debugbreak();
          }
          if ( (v30 & s_transientsCollisionMP_LoadRequestedTiles.array[v29]) != 0 )
          {
            if ( (unsigned int)v24 >= 0x400 )
            {
              LODWORD(v32) = 1024;
              LODWORD(v31) = v24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
                __debugbreak();
            }
            if ( (v30 & s_transientsCollisionMP_SetupTiles.array[v29]) == 0 )
            {
              if ( (unsigned int)v24 >= 0x400 )
              {
                LODWORD(v32) = 1024;
                LODWORD(v31) = v24;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
                  __debugbreak();
              }
              if ( (v30 & s_transientsCollisionMP_SetupRequestedTiles.array[v29]) == 0 )
              {
                if ( (unsigned int)v24 >= 0x400 )
                {
                  LODWORD(v34) = 1024;
                  LODWORD(v33) = v24;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v33, v34) )
                    __debugbreak();
                }
                s_transientsCollisionMP_SetupRequestedTiles.array[v29] |= v30;
                WorldCollision_RequestSetupTile(v24);
                StaticModels_RequestSetupTile(v24);
              }
            }
          }
        }
        v22 = v35 + 1;
        v5 = v36 + 1;
        v23 = v37 + 4;
        v35 = v22;
        ++v36;
        v37 += 4i64;
        if ( v22 >= v11 )
          break;
        v10 = s_transientsCollisionMP_NumTiles;
      }
    }
  }
}

/*
==============
CL_TransientsCollisionMP_RegisterCollisionTileCount
==============
*/
void CL_TransientsCollisionMP_RegisterCollisionTileCount(const char *name, const TransientInfo *transientInfo)
{
  unsigned int transientCollisionTileCount; 
  unsigned int v5; 
  bool v6; 
  void *v7; 
  unsigned int v8; 
  bitarray<1024> *v9; 
  unsigned int v10; 
  bitarray<1024> *v11; 
  unsigned int v12; 
  bitarray<1024> *v13; 
  unsigned int v14; 
  bitarray<1024> *v15; 
  unsigned __int16 v16; 
  unsigned __int16 *v17; 
  bool v18; 
  bool v19; 
  const CL_TransientsCollisionMP_MapTileBudget *v20; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 142, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 143, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  if ( !transientInfo->transientCollisionTileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 145, ASSERT_TYPE_ASSERT, "(transientInfo->transientCollisionTileCount > 0)", (const char *)&queryFormat, "transientInfo->transientCollisionTileCount > 0") )
    __debugbreak();
  transientCollisionTileCount = transientInfo->transientCollisionTileCount;
  v5 = 0;
  v6 = transientInfo->transientInfoFlags & 1;
  s_transientsCollisionMP_TransientMode = CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE;
  s_transientsCollisionMP_MapName = name;
  LODWORD(s_transientsCollisionMP_NumTiles) = transientCollisionTileCount;
  s_transientsCollisionMP_CollisionReductionMap = v6;
  if ( transientCollisionTileCount > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 152, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_NumTiles <= COLLISION_TILE_MAX_TILES)", (const char *)&queryFormat, "s_transientsCollisionMP_NumTiles <= COLLISION_TILE_MAX_TILES") )
    __debugbreak();
  WorldCollision_SetNumTilesToExpect(s_transientsCollisionMP_NumTiles);
  StaticModels_SetNumTilesToExpect(s_transientsCollisionMP_NumTiles);
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    s_transientCollisionMP_PhysicsMapLocalAllocatorSize = 20971520;
    v7 = Mem_Virtual_Alloc(0x1400000ui64, "PhysicsMapLocal", TRACK_MISC);
    s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer = v7;
    if ( !v7 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 161, ASSERT_TYPE_ASSERT, "( s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer", "nullptr", NULL, NULL) )
        __debugbreak();
      v7 = s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer;
    }
    Physics_SetMapLocalAllocatorBuffer(v7, s_transientCollisionMP_PhysicsMapLocalAllocatorSize);
  }
  v8 = 0;
  v9 = &s_transientsCollisionMP_LoadRequestedTiles;
  while ( !v9->array[0] )
  {
    ++v8;
    v9 = (bitarray<1024> *)((char *)v9 + 4);
    if ( v8 >= 0x20 )
      goto LABEL_28;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 165, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_LoadRequestedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_LoadRequestedTiles.noBitsOn()") )
    __debugbreak();
LABEL_28:
  v10 = 0;
  v11 = &s_transientsCollisionMP_LoadedTiles;
  while ( !v11->array[0] )
  {
    ++v10;
    v11 = (bitarray<1024> *)((char *)v11 + 4);
    if ( v10 >= 0x20 )
      goto LABEL_34;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 166, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_LoadedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_LoadedTiles.noBitsOn()") )
    __debugbreak();
LABEL_34:
  v12 = 0;
  v13 = &s_transientsCollisionMP_SetupRequestedTiles;
  while ( !v13->array[0] )
  {
    ++v12;
    v13 = (bitarray<1024> *)((char *)v13 + 4);
    if ( v12 >= 0x20 )
      goto LABEL_40;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 167, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_SetupRequestedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_SetupRequestedTiles.noBitsOn()") )
    __debugbreak();
LABEL_40:
  v14 = 0;
  v15 = &s_transientsCollisionMP_SetupTiles;
  while ( !v15->array[0] )
  {
    ++v14;
    v15 = (bitarray<1024> *)((char *)v15 + 4);
    if ( v14 >= 0x20 )
      goto LABEL_46;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 168, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_SetupTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_SetupTiles.noBitsOn()") )
    __debugbreak();
LABEL_46:
  if ( s_transientsCollisionMP_LoadRequestedAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 169, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_LoadRequestedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_LoadRequestedAllTiles") )
    __debugbreak();
  if ( s_transientsCollisionMP_LoadedAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 170, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_LoadedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_LoadedAllTiles") )
    __debugbreak();
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_SetupRequestedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_SetupRequestedAllTiles") )
    __debugbreak();
  if ( s_transientsCollisionMP_SetupAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 172, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_SetupAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_SetupAllTiles") )
    __debugbreak();
  memset_0(s_transientsCollisionMP_TransientFileIndexMapping, 0, sizeof(s_transientsCollisionMP_TransientFileIndexMapping));
  memset_0(s_transientsCollisionMP_FileIndexMapping, 0, sizeof(s_transientsCollisionMP_FileIndexMapping));
  memset_0(s_transientsCollisionMP_TileCosts, 0, sizeof(s_transientsCollisionMP_TileCosts));
  memset_0(s_transientsCollisionMP_TileStreamingDistancesSq, 0, sizeof(s_transientsCollisionMP_TileStreamingDistancesSq));
  v16 = 0;
  v17 = s_transientsCollisionMP_SortedTileIndices;
  do
    *v17++ = v16++;
  while ( v16 < 0x400u );
  s_transientsCollisionMP_NumStreamPositions = 0;
  v18 = (transientInfo->transientInfoFlags & 4) != 0;
  s_transientsCollisionMP_LocalServerFileIndex = 0;
  s_transientsCollisionMP_IsBRMap = v18;
  s_transientsCollisionMP_LocalServerCost = 0;
  v19 = v18 && Com_FrontEnd_IsInFrontEnd();
  s_transientsCollisionMP_InBRLobby = v19;
  v20 = PER_MAP_TILE_BUDGETS;
  s_transientsCollisionMP_MapOverrideTileBudget = 0i64;
  while ( I_strnicmp(name, v20->mapName, 0x7FFFFFFFui64) )
  {
    ++v5;
    ++v20;
    if ( v5 >= 3 )
      return;
  }
  s_transientsCollisionMP_MapOverrideTileBudget = PER_MAP_TILE_BUDGETS[v5].budget;
}

/*
==============
CL_TransientsCollisionMP_RegisterFileIndex
==============
*/
void CL_TransientsCollisionMP_RegisterFileIndex(const TransientInfo *const transientInfo, unsigned __int16 transientFileIndex, unsigned __int16 mpSystemFileIndex, const char *name)
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  const char *v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  const char *v19; 
  __int64 v20; 
  const char *v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int transientCostCount; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 263, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 264, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  if ( !mpSystemFileIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 265, ASSERT_TYPE_ASSERT, "(mpSystemFileIndex > 0)", (const char *)&queryFormat, "mpSystemFileIndex > 0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 266, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !(_DWORD)s_transientsCollisionMP_NumTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 267, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_NumTiles > 0)", (const char *)&queryFormat, "s_transientsCollisionMP_NumTiles > 0") )
    __debugbreak();
  if ( !s_transientsCollisionMP_MapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 268, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_MapName)", (const char *)&queryFormat, "s_transientsCollisionMP_MapName") )
    __debugbreak();
  v8 = -1i64;
  v9 = -1i64;
  do
    ++v9;
  while ( s_transientsCollisionMP_MapName[v9] );
  do
    ++v8;
  while ( name[v8] );
  if ( (unsigned int)v8 <= (int)v9 + 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 272, ASSERT_TYPE_ASSERT, "( ( I_strlen( name ) > (mapNameLen + CHARS_AFTER_MAPNAME) ) )", "( name ) = %s", name) )
    __debugbreak();
  v10 = (unsigned int)v9;
  v11 = (unsigned int)v9;
  v12 = s_transientsCollisionMP_MapName;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v13 = (const char *)(name - v12);
  do
  {
    v14 = (unsigned __int8)v12[(_QWORD)v13];
    v15 = v11;
    v16 = *(unsigned __int8 *)v12++;
    --v11;
    if ( !v15 )
      break;
    if ( v14 != v16 )
    {
      v17 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v17 = v14;
      v14 = v17;
      v18 = v16 + 32;
      if ( (unsigned int)(v16 - 65) > 0x19 )
        v18 = v16;
      if ( v14 != v18 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 273, ASSERT_TYPE_ASSERT, "( ( !I_strnicmp( name, s_transientsCollisionMP_MapName, mapNameLen ) ) )", "( name ) = %s", name) )
          __debugbreak();
        break;
      }
    }
  }
  while ( v14 );
  v19 = &name[v10 + 4];
  v20 = 0x7FFFFFFFi64;
  v21 = "ls_tr";
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v22 = (unsigned __int8)v21[v19 - "ls_tr"];
    v23 = v20;
    v24 = *(unsigned __int8 *)v21++;
    --v20;
    if ( !v23 )
    {
LABEL_54:
      transientCostCount = transientInfo->transientCosts.transientCostCount;
      s_transientsCollisionMP_LocalServerFileIndex = mpSystemFileIndex;
      if ( transientFileIndex >= transientCostCount )
      {
        LODWORD(v29) = transientFileIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( transientFileIndex ) < (unsigned)( transientInfo->transientCosts.transientCostCount )", "transientFileIndex doesn't index transientInfo->transientCosts.transientCostCount\n\t%i not in [0, %i)", v29, transientCostCount) )
          __debugbreak();
      }
      s_transientsCollisionMP_LocalServerCost = transientInfo->transientCosts.residentPageSizes[transientFileIndex];
      return;
    }
    if ( v22 != v24 )
    {
      v25 = v22 + 32;
      if ( (unsigned int)(v22 - 65) > 0x19 )
        v25 = v22;
      v22 = v25;
      v26 = v24 + 32;
      if ( (unsigned int)(v24 - 65) > 0x19 )
        v26 = v24;
      if ( v22 != v26 )
        break;
    }
    if ( !v22 )
      goto LABEL_54;
  }
  if ( j_sscanf_s(v19, "%05u_tr", &v31) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 289, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Transient collision file '%s' doesn't match our '%s' format", name, "%s_cg_%05u_tr") )
    __debugbreak();
  if ( v31 >= (unsigned int)s_transientsCollisionMP_NumTiles )
  {
    LODWORD(v30) = s_transientsCollisionMP_NumTiles;
    LODWORD(v29) = v31;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( fileNameIndex ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "fileNameIndex doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  v28 = v31;
  s_transientsCollisionMP_TransientFileIndexMapping[v31] = transientFileIndex;
  s_transientsCollisionMP_FileIndexMapping[v28] = mpSystemFileIndex;
  if ( transientFileIndex >= transientInfo->transientCosts.transientCostCount )
  {
    LODWORD(v30) = transientInfo->transientCosts.transientCostCount;
    LODWORD(v29) = transientFileIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 298, ASSERT_TYPE_ASSERT, "(unsigned)( transientFileIndex ) < (unsigned)( transientInfo->transientCosts.transientCostCount )", "transientFileIndex doesn't index transientInfo->transientCosts.transientCostCount\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  s_transientsCollisionMP_TileCosts[v31] = transientInfo->transientCosts.residentPageSizes[transientFileIndex];
}

/*
==============
CL_TransientsCollisionMP_ResetGridStreaming
==============
*/
void CL_TransientsCollisionMP_ResetGridStreaming(void)
{
  s_transientsCollisionMP_NumStreamPositions = 0;
  s_transientsCollisionMP_PriorityMode = CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_LOW;
}

/*
==============
CL_TransientsCollisionMP_SetGridStreamingClientStreamViews
==============
*/
void CL_TransientsCollisionMP_SetGridStreamingClientStreamViews(LocalClientNum_t localClientNum)
{
  unsigned __int64 i; 
  __int64 v3; 
  const vec3_t *ManualViewOrigin; 

  for ( i = 0i64; i < 5; ++i )
  {
    if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)i, localClientNum) && s_transientsCollisionMP_NumStreamPositions < 0xA )
    {
      v3 = s_transientsCollisionMP_NumStreamPositions;
      ManualViewOrigin = CL_StreamViews_GetManualViewOrigin((StreamManualViewType)i, localClientNum);
      s_transientsCollisionMP_StreamPositions[v3].origin.v[0] = ManualViewOrigin->v[0];
      s_transientsCollisionMP_StreamPositions[v3].origin.v[1] = ManualViewOrigin->v[1];
      *(float *)&ManualViewOrigin = ManualViewOrigin->v[2];
      ++s_transientsCollisionMP_NumStreamPositions;
      LODWORD(s_transientsCollisionMP_StreamPositions[v3].origin.v[2]) = (_DWORD)ManualViewOrigin;
    }
  }
}

/*
==============
CL_TransientsCollisionMP_SetPriorityMode
==============
*/
void CL_TransientsCollisionMP_SetPriorityMode(const CL_TransientsCollisionMP_PriorityMode mode)
{
  s_transientsCollisionMP_PriorityMode = mode;
}

/*
==============
CL_TransientsCollisionMP_SetTransientMode
==============
*/
void CL_TransientsCollisionMP_SetTransientMode(CL_TransientsCollisionMP_TransientMode mode)
{
  s_transientsCollisionMP_TransientMode = mode;
}

/*
==============
CL_TransientsCollisionMP_Shutdown
==============
*/

void CL_TransientsCollisionMP_Shutdown(void)
{
  CL_TransientsCollisionMP_ShutdownAndUnloadAllFiles();
}

/*
==============
CL_TransientsCollisionMP_ShutdownAllTilesTransient
==============
*/
void CL_TransientsCollisionMP_ShutdownAllTilesTransient()
{
  unsigned int v0; 

  if ( s_transientsCollisionMP_SetupRequestedAllTiles )
  {
    v0 = 0;
    for ( s_transientsCollisionMP_SetupRequestedAllTiles = 0; v0 < (unsigned int)s_transientsCollisionMP_NumTiles; ++v0 )
    {
      StaticModels_RequestShutdownTile(v0);
      WorldCollision_RequestShutdownTile(v0);
    }
  }
}

/*
==============
CL_TransientsCollisionMP_ShutdownAndUnloadAllFiles
==============
*/
char CL_TransientsCollisionMP_ShutdownAndUnloadAllFiles()
{
  unsigned int v0; 
  int v1; 
  unsigned int v2; 
  char i; 
  bool IsTileSetup; 
  bool v5; 
  unsigned int v6; 
  unsigned int v7; 
  bitarray<1024> *v8; 
  unsigned int v9; 
  bitarray<1024> *v10; 
  bitarray<1024> *v11; 

  v0 = 0;
  s_transientsCollisionMP_TransientMode = CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE;
  CL_TransientsCollisionMP_ProcessFastfiles(1);
  WorldCollision_ForceSyncSetupRequests();
  StaticModels_ForceSyncSetupRequests();
  if ( s_transientsCollisionMP_LocalServerFileIndex )
    s_transientsCollisionMP_LoadedAllTiles = CL_TransientsMP_IsLoadedByFileIndex(s_transientsCollisionMP_LocalServerFileIndex);
  v1 = s_transientsCollisionMP_NumTiles;
  v2 = 0;
  for ( i = (_DWORD)s_transientsCollisionMP_NumTiles != 0; v2 < (unsigned int)s_transientsCollisionMP_NumTiles; v1 = s_transientsCollisionMP_NumTiles )
  {
    IsTileSetup = WorldCollision_IsTileSetup(v2);
    v5 = StaticModels_IsTileSetup(v2++);
    i &= IsTileSetup && v5;
  }
  s_transientsCollisionMP_SetupAllTiles = i;
  v6 = 0;
  if ( v1 )
  {
    do
      CL_TransientsCollisionMP_UpdateTransientTileFlags(v6++, 1);
    while ( v6 < (unsigned int)s_transientsCollisionMP_NumTiles );
  }
  CL_TransientsCollisionMP_ProcessFastfiles(1);
  v7 = 0;
  v8 = &s_transientsCollisionMP_LoadRequestedTiles;
  while ( !v8->array[0] )
  {
    ++v7;
    v8 = (bitarray<1024> *)((char *)v8 + 4);
    if ( v7 >= 0x20 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1228, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_LoadRequestedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_LoadRequestedTiles.noBitsOn()") )
    __debugbreak();
LABEL_13:
  v9 = 0;
  v10 = &s_transientsCollisionMP_SetupRequestedTiles;
  while ( !v10->array[0] )
  {
    ++v9;
    v10 = (bitarray<1024> *)((char *)v10 + 4);
    if ( v9 >= 0x20 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1229, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_SetupRequestedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_SetupRequestedTiles.noBitsOn()") )
    __debugbreak();
LABEL_19:
  v11 = &s_transientsCollisionMP_SetupTiles;
  while ( !v11->array[0] )
  {
    ++v0;
    v11 = (bitarray<1024> *)((char *)v11 + 4);
    if ( v0 >= 0x20 )
      goto LABEL_25;
  }
  LOBYTE(v11) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1230, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_SetupTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_SetupTiles.noBitsOn()");
  if ( (_BYTE)v11 )
    __debugbreak();
LABEL_25:
  if ( s_transientsCollisionMP_LoadRequestedAllTiles )
  {
    LOBYTE(v11) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_LoadRequestedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_LoadRequestedAllTiles");
    if ( (_BYTE)v11 )
      __debugbreak();
  }
  if ( s_transientsCollisionMP_SetupRequestedAllTiles )
  {
    LOBYTE(v11) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1232, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_SetupRequestedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_SetupRequestedAllTiles");
    if ( (_BYTE)v11 )
      __debugbreak();
  }
  if ( s_transientsCollisionMP_SetupAllTiles )
  {
    LOBYTE(v11) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1233, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_SetupAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_SetupAllTiles");
    if ( (_BYTE)v11 )
      __debugbreak();
  }
  return (char)v11;
}

/*
==============
CL_TransientsCollisionMP_ShutdownIndividualTileTransient
==============
*/
void CL_TransientsCollisionMP_ShutdownIndividualTileTransient(const unsigned int tileIdx)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  int v4; 
  int v5; 
  int v6; 

  v1 = tileIdx;
  if ( tileIdx >= 0x400 )
  {
    v4 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", tileIdx, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_transientsCollisionMP_SetupRequestedTiles.array[v1 >> 5]) != 0 )
  {
    if ( (unsigned int)v1 >= 0x400 )
    {
      v6 = 1024;
      v5 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
        __debugbreak();
    }
    s_transientsCollisionMP_SetupRequestedTiles.array[v1 >> 5] &= ~v2;
    StaticModels_RequestShutdownTile(v1);
    WorldCollision_RequestShutdownTile(v1);
  }
}

/*
==============
CL_TransientsCollisionMP_ShutdownIndividualTileTransients
==============
*/
void CL_TransientsCollisionMP_ShutdownIndividualTileTransients()
{
  unsigned int i; 
  unsigned int v1; 
  unsigned int *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  for ( i = 0; i < (unsigned int)s_transientsCollisionMP_NumTiles; ++i )
  {
    if ( i >= 0x400 )
    {
      LODWORD(v4) = 1024;
      LODWORD(v3) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v3, v4) )
        __debugbreak();
    }
    v1 = 0x80000000 >> (i & 0x1F);
    v2 = &s_transientsCollisionMP_SetupRequestedTiles.array[(unsigned __int64)i >> 5];
    if ( (v1 & *v2) != 0 )
    {
      if ( i >= 0x400 )
      {
        LODWORD(v6) = 1024;
        LODWORD(v5) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
          __debugbreak();
      }
      *v2 &= ~v1;
      StaticModels_RequestShutdownTile(i);
      WorldCollision_RequestShutdownTile(i);
    }
  }
}

/*
==============
CL_TransientsCollisionMP_UnloadAllTilesTransient
==============
*/
void CL_TransientsCollisionMP_UnloadAllTilesTransient()
{
  unsigned __int16 v0; 

  if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && s_transientsCollisionMP_LoadRequestedAllTiles )
  {
    v0 = s_transientsCollisionMP_LocalServerFileIndex;
    s_transientsCollisionMP_LoadRequestedAllTiles = 0;
    if ( !s_transientsCollisionMP_LocalServerFileIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(fileIndex != 0)", (const char *)&queryFormat, "fileIndex != 0") )
      __debugbreak();
    CL_TransientsMP_UnloadByFileIndex(v0);
  }
}

/*
==============
CL_TransientsCollisionMP_UnloadIndividualTileTransient
==============
*/
void CL_TransientsCollisionMP_UnloadIndividualTileTransient(const unsigned int tileIdx)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  unsigned __int16 v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", tileIdx, 1024) )
    __debugbreak();
  v2 = 0x80000000 >> (v1 & 0x1F);
  v3 = v1 >> 5;
  if ( (v2 & s_transientsCollisionMP_SetupRequestedTiles.array[v3]) == 0 )
  {
    if ( (unsigned int)v1 >= 0x400 )
    {
      LODWORD(v6) = 1024;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
        __debugbreak();
    }
    if ( (v2 & s_transientsCollisionMP_SetupTiles.array[v3]) == 0 )
    {
      if ( (unsigned int)v1 >= 0x400 )
      {
        LODWORD(v6) = 1024;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
          __debugbreak();
      }
      if ( (v2 & s_transientsCollisionMP_LoadRequestedTiles.array[v3]) != 0 )
      {
        if ( (unsigned int)v1 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v1, 1024) )
          __debugbreak();
        v4 = s_transientsCollisionMP_FileIndexMapping[v1];
        s_transientsCollisionMP_LoadRequestedTiles.array[v3] &= ~v2;
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 824, ASSERT_TYPE_ASSERT, "(fileIndex != 0)", (const char *)&queryFormat, "fileIndex != 0") )
          __debugbreak();
        CL_TransientsMP_UnloadByFileIndex(v4);
      }
    }
  }
}

/*
==============
CL_TransientsCollisionMP_UnloadIndividualTileTransients
==============
*/
void CL_TransientsCollisionMP_UnloadIndividualTileTransients()
{
  __int64 i; 
  unsigned int v1; 
  unsigned __int64 v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  for ( i = 0i64; (unsigned int)i < (unsigned int)s_transientsCollisionMP_NumTiles; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x400 )
    {
      LODWORD(v5) = 1024;
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, v5) )
        __debugbreak();
    }
    v1 = 0x80000000 >> (i & 0x1F);
    v2 = (unsigned __int64)(unsigned int)i >> 5;
    if ( (v1 & s_transientsCollisionMP_SetupRequestedTiles.array[v2]) == 0 )
    {
      if ( (unsigned int)i >= 0x400 )
      {
        LODWORD(v5) = 1024;
        LODWORD(v4) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, v5) )
          __debugbreak();
      }
      if ( (v1 & s_transientsCollisionMP_SetupTiles.array[v2]) == 0 )
      {
        if ( (unsigned int)i >= 0x400 )
        {
          LODWORD(v5) = 1024;
          LODWORD(v4) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, v5) )
            __debugbreak();
        }
        if ( (v1 & s_transientsCollisionMP_LoadRequestedTiles.array[v2]) != 0 )
        {
          if ( (unsigned int)i >= 0x400 )
          {
            LODWORD(v7) = 1024;
            LODWORD(v6) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
              __debugbreak();
          }
          s_transientsCollisionMP_LoadRequestedTiles.array[v2] &= ~v1;
          v3 = s_transientsCollisionMP_FileIndexMapping[i];
          if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 824, ASSERT_TYPE_ASSERT, "(fileIndex != 0)", (const char *)&queryFormat, "fileIndex != 0") )
            __debugbreak();
          CL_TransientsMP_UnloadByFileIndex(v3);
        }
      }
    }
  }
}

/*
==============
CL_TransientsCollisionMP_UnregisterCollisionTileCount
==============
*/
void CL_TransientsCollisionMP_UnregisterCollisionTileCount(const TransientInfo *transientInfo)
{
  unsigned int v2; 
  bitarray<1024> *v3; 
  unsigned int v4; 
  bitarray<1024> *v5; 
  unsigned int v6; 
  bitarray<1024> *v7; 
  bitarray<1024> *v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  unsigned __int16 *v11; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 208, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 209, ASSERT_TYPE_ASSERT, "(transientInfo)", (const char *)&queryFormat, "transientInfo") )
    __debugbreak();
  if ( !transientInfo->transientCollisionTileCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 210, ASSERT_TYPE_ASSERT, "(transientInfo->transientCollisionTileCount > 0)", (const char *)&queryFormat, "transientInfo->transientCollisionTileCount > 0") )
    __debugbreak();
  s_transientsCollisionMP_MapName = NULL;
  LODWORD(s_transientsCollisionMP_NumTiles) = 0;
  s_transientsCollisionMP_CollisionReductionMap = 0;
  s_transientsCollisionMP_MapOverrideTileBudget = 0i64;
  WorldCollision_SetNumTilesToExpect(0);
  StaticModels_SetNumTilesToExpect(s_transientsCollisionMP_NumTiles);
  if ( !s_transientsCollisionMP_ComClosing && s_transientCollisionMP_PhysicsMapLocalAllocatorSize )
  {
    Physics_ReleaseMapLocalAllocatorBuffer();
    s_transientCollisionMP_PhysicsMapLocalAllocatorSize = 0;
    Mem_Virtual_Free(s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer);
    s_transientCollisionMP_PhysicsMapLocalAllocatorBuffer = NULL;
  }
  v2 = 0;
  v3 = &s_transientsCollisionMP_LoadRequestedTiles;
  while ( !v3->array[0] )
  {
    ++v2;
    v3 = (bitarray<1024> *)((char *)v3 + 4);
    if ( v2 >= 0x20 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 227, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_LoadRequestedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_LoadRequestedTiles.noBitsOn()") )
    __debugbreak();
LABEL_19:
  v4 = 0;
  v5 = &s_transientsCollisionMP_SetupRequestedTiles;
  while ( !v5->array[0] )
  {
    ++v4;
    v5 = (bitarray<1024> *)((char *)v5 + 4);
    if ( v4 >= 0x20 )
      goto LABEL_25;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 228, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_SetupRequestedTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_SetupRequestedTiles.noBitsOn()") )
    __debugbreak();
LABEL_25:
  v6 = 0;
  v7 = &s_transientsCollisionMP_SetupTiles;
  while ( !v7->array[0] )
  {
    ++v6;
    v7 = (bitarray<1024> *)((char *)v7 + 4);
    if ( v6 >= 0x20 )
      goto LABEL_31;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 229, ASSERT_TYPE_ASSERT, "(s_transientsCollisionMP_SetupTiles.noBitsOn())", (const char *)&queryFormat, "s_transientsCollisionMP_SetupTiles.noBitsOn()") )
    __debugbreak();
LABEL_31:
  if ( s_transientsCollisionMP_LoadRequestedAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 230, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_LoadRequestedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_LoadRequestedAllTiles") )
    __debugbreak();
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 231, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_SetupRequestedAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_SetupRequestedAllTiles") )
    __debugbreak();
  if ( s_transientsCollisionMP_SetupAllTiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 232, ASSERT_TYPE_ASSERT, "(!s_transientsCollisionMP_SetupAllTiles)", (const char *)&queryFormat, "!s_transientsCollisionMP_SetupAllTiles") )
    __debugbreak();
  v8 = &s_transientsCollisionMP_LoadedTiles;
  v9 = 32i64;
  s_transientsCollisionMP_LoadedAllTiles = 0;
  while ( v9 )
  {
    v8->array[0] = 0;
    v8 = (bitarray<1024> *)((char *)v8 + 4);
    --v9;
  }
  memset_0(s_transientsCollisionMP_TransientFileIndexMapping, 0, sizeof(s_transientsCollisionMP_TransientFileIndexMapping));
  memset_0(s_transientsCollisionMP_FileIndexMapping, 0, sizeof(s_transientsCollisionMP_FileIndexMapping));
  memset_0(s_transientsCollisionMP_TileCosts, 0, sizeof(s_transientsCollisionMP_TileCosts));
  memset_0(s_transientsCollisionMP_TileStreamingDistancesSq, 0, sizeof(s_transientsCollisionMP_TileStreamingDistancesSq));
  v10 = 0;
  v11 = s_transientsCollisionMP_SortedTileIndices;
  do
    *v11++ = v10++;
  while ( v10 < 0x400u );
  s_transientsCollisionMP_LocalServerFileIndex = 0;
  s_transientsCollisionMP_LocalServerCost = 0;
}

/*
==============
CL_TransientsCollisionMP_UpdateTransientFlags
==============
*/
void CL_TransientsCollisionMP_UpdateTransientFlags(bool force)
{
  unsigned __int16 v2; 
  unsigned int v3; 
  int v4; 
  unsigned int v5; 
  char i; 
  bool IsTileSetup; 
  bool v8; 

  if ( s_transientsCollisionMP_LoadRequestedAllTiles == s_transientsCollisionMP_LoadedAllTiles )
  {
    if ( !force )
      goto LABEL_5;
  }
  else if ( !force )
  {
    v2 = s_transientsCollisionMP_LocalServerFileIndex;
    if ( s_transientsCollisionMP_LocalServerFileIndex )
      goto LABEL_4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1118, ASSERT_TYPE_ASSERT, "(force || fileIndex != 0)", (const char *)&queryFormat, "force || fileIndex != 0") )
      __debugbreak();
    goto LABEL_5;
  }
  v2 = s_transientsCollisionMP_LocalServerFileIndex;
  if ( s_transientsCollisionMP_LocalServerFileIndex )
LABEL_4:
    s_transientsCollisionMP_LoadedAllTiles = CL_TransientsMP_IsLoadedByFileIndex(v2);
LABEL_5:
  v3 = 0;
  if ( s_transientsCollisionMP_SetupRequestedAllTiles != s_transientsCollisionMP_SetupAllTiles || force )
  {
    v4 = s_transientsCollisionMP_NumTiles;
    v5 = 0;
    for ( i = (_DWORD)s_transientsCollisionMP_NumTiles != 0; v5 < (unsigned int)s_transientsCollisionMP_NumTiles; v4 = s_transientsCollisionMP_NumTiles )
    {
      IsTileSetup = WorldCollision_IsTileSetup(v5);
      v8 = StaticModels_IsTileSetup(v5++);
      i &= IsTileSetup && v8;
    }
    s_transientsCollisionMP_SetupAllTiles = i;
  }
  else
  {
    v4 = s_transientsCollisionMP_NumTiles;
  }
  if ( v4 )
  {
    do
      CL_TransientsCollisionMP_UpdateTransientTileFlags(v3++, force);
    while ( v3 < (unsigned int)s_transientsCollisionMP_NumTiles );
  }
}

/*
==============
CL_TransientsCollisionMP_UpdateTransientTileFlags
==============
*/
void CL_TransientsCollisionMP_UpdateTransientTileFlags(unsigned int tileIdx, bool force)
{
  unsigned __int64 v2; 
  unsigned int v4; 
  unsigned __int64 v5; 
  bool v6; 
  unsigned __int16 v7; 
  bool v8; 
  bool IsTileSetup; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = tileIdx;
  if ( tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", tileIdx, 1024) )
    __debugbreak();
  v4 = 0x80000000 >> (v2 & 0x1F);
  v5 = v2 >> 5;
  v6 = (v4 & s_transientsCollisionMP_LoadRequestedTiles.array[v5]) != 0;
  if ( (unsigned int)v2 >= 0x400 )
  {
    LODWORD(v11) = 1024;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
      __debugbreak();
  }
  if ( v6 != ((v4 & s_transientsCollisionMP_LoadedTiles.array[v5]) != 0) || force )
  {
    v7 = s_transientsCollisionMP_FileIndexMapping[v2];
    if ( force )
    {
      if ( !v7 )
        goto LABEL_13;
    }
    else if ( !v7 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1090, ASSERT_TYPE_ASSERT, "(force || fileIndex != 0)", (const char *)&queryFormat, "force || fileIndex != 0") )
        __debugbreak();
      goto LABEL_13;
    }
    if ( CL_TransientsMP_IsLoadedByFileIndex(v7) )
    {
      if ( (unsigned int)v2 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 1024) )
        __debugbreak();
      s_transientsCollisionMP_LoadedTiles.array[v5] |= v4;
    }
    else
    {
      if ( (unsigned int)v2 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 1024) )
        __debugbreak();
      s_transientsCollisionMP_LoadedTiles.array[v5] &= ~v4;
    }
  }
LABEL_13:
  if ( (unsigned int)v2 >= 0x400 )
  {
    LODWORD(v11) = 1024;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
      __debugbreak();
  }
  v8 = (v4 & s_transientsCollisionMP_SetupRequestedTiles.array[v5]) != 0;
  if ( (unsigned int)v2 >= 0x400 )
  {
    LODWORD(v11) = 1024;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
      __debugbreak();
  }
  if ( v8 != ((v4 & s_transientsCollisionMP_SetupTiles.array[v5]) != 0) || force )
  {
    IsTileSetup = WorldCollision_IsTileSetup(v2);
    if ( StaticModels_IsTileSetup(v2) && IsTileSetup )
    {
      if ( (unsigned int)v2 >= 0x400 )
      {
        LODWORD(v13) = 1024;
        LODWORD(v12) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
          __debugbreak();
      }
      s_transientsCollisionMP_SetupTiles.array[v5] |= v4;
    }
    else
    {
      if ( (unsigned int)v2 >= 0x400 )
      {
        LODWORD(v13) = 1024;
        LODWORD(v12) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
          __debugbreak();
      }
      s_transientsCollisionMP_SetupTiles.array[v5] &= ~v4;
    }
  }
}

