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

void __fastcall CLTransientsCollisionMP_CalculateTileDistances(double _XMM0_8)
{
  unsigned int v8; 
  unsigned int v10; 
  __int64 v17; 
  unsigned int v26; 
  bool v29; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = s_transientsCollisionMP_NumTiles;
  _RBP = 0i64;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    v10 = s_transientsCollisionMP_NumStreamPositions;
    _R15 = 0x140000000ui64;
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm6
      vmovaps xmmword ptr [r11-38h], xmm7
      vmovaps xmmword ptr [r11-48h], xmm8
      vmovss  xmm8, cs:__real@45800000
      vmovaps xmmword ptr [r11-58h], xmm9
      vmovaps xmmword ptr [r11-68h], xmm10
      vmovss  xmm10, cs:__real@46000000
      vmovaps xmmword ptr [r11-78h], xmm11
      vmovss  xmm11, cs:__real@7f7fffff
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      v17 = 0i64;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vmovss  [rsp+0D8h+var_90], xmm2
        vaddss  xmm2, xmm1, xmm8
        vmovss  [rsp+0D8h+var_8C], xmm2
        vmovaps xmm9, xmm11
      }
      if ( v10 )
      {
        do
        {
          _RCX = 3 * v17;
          v26 = 0;
          __asm
          {
            vmovss  xmm0, dword ptr rva ?s_transientsCollisionMP_StreamPositions@@3PAUCL_TransientsCollisionMP_StreamingPosition@@A.origin[r15+rcx*4]; CL_TransientsCollisionMP_StreamingPosition near * s_transientsCollisionMP_StreamPositions
            vmovss  xmm1, dword ptr (rva ?s_transientsCollisionMP_StreamPositions@@3PAUCL_TransientsCollisionMP_StreamingPosition@@A.origin+4)[r15+rcx*4]; CL_TransientsCollisionMP_StreamingPosition near * s_transientsCollisionMP_StreamPositions
            vmovss  [rsp+0D8h+var_98], xmm0
            vmovss  [rsp+0D8h+var_94], xmm1
          }
          v29 = 1;
          do
          {
            _RDI = (int)v26;
            __asm
            {
              vmovss  xmm0, [rsp+rdi*4+0D8h+var_98]
              vsubss  xmm1, xmm0, [rsp+rdi*4+0D8h+var_90]
              vcomiss xmm1, xmm7
            }
            if ( v29 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+rdi*4+0D8h+var_90]
                vsubss  xmm1, xmm0, [rsp+rdi*4+0D8h+var_98]
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, [rsp+rdi*4+0D8h+var_98]
                vsubss  xmm1, xmm0, [rsp+rdi*4+0D8h+var_90]
              }
            }
            __asm
            {
              vsubss  xmm2, xmm1, xmm8
              vmaxss  xmm6, xmm2, xmm7
            }
            ++v26;
            __asm { vmovss  [rsp+rdi*4+0D8h+var_88], xmm6 }
            v29 = v26 < 2;
          }
          while ( v26 < 2 );
          __asm
          {
            vmovss  xmm0, [rsp+0D8h+var_88]
            vmovss  xmm1, [rsp+0D8h+var_84]
          }
          v10 = s_transientsCollisionMP_NumStreamPositions;
          v17 = (unsigned int)(v17 + 1);
          __asm
          {
            vmulss  xmm3, xmm0, xmm0
            vmulss  xmm2, xmm1, xmm1
            vaddss  xmm0, xmm3, xmm2
            vminss  xmm9, xmm0, xmm9
          }
        }
        while ( (unsigned int)v17 < s_transientsCollisionMP_NumStreamPositions );
        v8 = s_transientsCollisionMP_NumTiles;
      }
      __asm { vmovss  rva s_transientsCollisionMP_TileStreamingDistancesSq[r15+rbp*4], xmm9 }
      _RBP = (unsigned int)(_RBP + 1);
    }
    while ( (unsigned int)_RBP < v8 );
    __asm
    {
      vmovaps xmm11, [rsp+0D8h+var_78]
      vmovaps xmm10, [rsp+0D8h+var_68]
      vmovaps xmm9, [rsp+0D8h+var_58]
      vmovaps xmm8, [rsp+0D8h+var_48]
      vmovaps xmm7, [rsp+0D8h+var_38]
      vmovaps xmm6, [rsp+0D8h+var_28]
    }
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

  __asm
  {
    vmovss  xmm3, cs:__real@39000000
    vmulss  xmm1, xmm3, dword ptr [rcx+4]
    vaddss  xmm0, xmm1, cs:__real@41800000
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm3, dword ptr [rcx]
    vaddss  xmm2, xmm0, cs:__real@41800000
    vcvttss2si ecx, xmm2
  }
  result = (unsigned int)(_ECX + 32 * _EAX);
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
  __int64 v4; 
  bool v5; 
  const ScreenPlacement *v6; 
  const dvar_t *v7; 
  const dvar_t *v11; 
  const dvar_t *v15; 
  const dvar_t *v20; 
  const dvar_t *v23; 
  float x; 
  float y; 

  v4 = localClientNum;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1758, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= 2)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_10;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v5 )
      __debugbreak();
LABEL_10:
    v6 = &scrPlaceFull;
    goto LABEL_11;
  }
  v6 = &scrPlaceViewDisplay[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1762, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
LABEL_11:
  v7 = DVARINT_cl_transientCollision_debugDisplayOffsetX;
  if ( !DVARINT_cl_transientCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDisplayOffsetX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
  }
  v11 = DVARINT_cl_transientCollision_debugDisplayOffsetY;
  __asm
  {
    vaddss  xmm7, xmm0, xmm6
    vmovss  [rsp+78h+x], xmm7
  }
  if ( !DVARINT_cl_transientCollision_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDisplayOffsetY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
  }
  v15 = DVARBOOL_cl_transientCollision_EnableStreamingUpdates;
  __asm
  {
    vaddss  xmm6, xmm0, xmm6
    vmovss  [rsp+78h+y], xmm6
  }
  if ( !DVARBOOL_cl_transientCollision_EnableStreamingUpdates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_EnableStreamingUpdates") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
  {
    __asm
    {
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(v6, *(float *)&_XMM1, *(float *)&_XMM2, "MP Collision Transients position streaming disabled", &colorWhite);
    __asm
    {
      vaddss  xmm0, xmm6, cs:__real@40c00000
      vmovss  [rsp+78h+y], xmm0
    }
  }
  v20 = DVARBOOL_cl_transientCollision_Overlay;
  if ( !DVARBOOL_cl_transientCollision_Overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_Overlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
  {
    CL_TransientsCollisionMP_Debug_DrawTitle(v6, &x, &y, (const LocalClientNum_t)v4);
    __asm
    {
      vmovss  xmm0, [rsp+78h+x]
      vaddss  xmm1, xmm0, cs:__real@40c00000
      vmovss  [rsp+78h+x], xmm1
    }
    CL_TransientsCollisionMP_Debug_DrawMinimap(v6, &x, &y, (const LocalClientNum_t)v4);
    CL_TransientsCollisionMP_Debug_DrawMemorySummary(v6, &x, &y);
  }
  v23 = DVARBOOL_cl_transientCollision_debugDump;
  if ( !DVARBOOL_cl_transientCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
    Dvar_SetBool_Internal(DVARBOOL_cl_transientCollision_debugDump, 0);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawMemorySummary
==============
*/
void CL_TransientsCollisionMP_Debug_DrawMemorySummary(const ScreenPlacement *const scrPlace, float *x, float *y)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  bool IsLoadModeInFrontend; 
  unsigned int v10; 
  bool v11; 
  bool v12; 
  unsigned int TileCost; 
  unsigned __int64 v14; 
  unsigned int v15; 
  char *v16; 
  const char *v18; 
  const char *v23; 
  const char *v28; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  const char *v37; 
  const char *v41; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned __int64 v47; 
  unsigned int v48; 
  const char *v49; 
  const char *v53; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned __int64 v59; 
  unsigned int v60; 
  const char *v61; 
  const char *v65; 
  unsigned __int64 v69; 
  unsigned int v70; 
  unsigned int v71; 
  const char *v72; 
  char *fmt; 
  const vec4_t *fmta; 
  const vec4_t *fmtb; 
  const vec4_t *fmtc; 
  const vec4_t *fmtd; 
  __int64 v82; 
  __int64 v83; 
  bool v84; 
  unsigned int v85; 
  int v86; 
  char v90[64]; 
  char v91[64]; 
  char v92[64]; 
  char dest[64]; 
  char v94[64]; 
  char v95[64]; 
  char v96[64]; 
  char v97[64]; 
  char v98[64]; 

  __asm { vmovaps [rsp+300h+var_40], xmm6 }
  v4 = 0i64;
  v86 = 0;
  v5 = 0;
  v6 = 0;
  v85 = 0;
  v7 = 0;
  _R14 = y;
  IsLoadModeInFrontend = CL_TransientsMP_IsLoadModeInFrontend();
  v10 = 0;
  v84 = IsLoadModeInFrontend;
  v11 = IsLoadModeInFrontend;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    v12 = IsLoadModeInFrontend;
    while ( 1 )
    {
      TileCost = CL_TransientsCollisionMP_GetTileCost(v10, v12);
      if ( v10 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      v14 = (unsigned __int64)v10 >> 5;
      v15 = 0x80000000 >> (v10 & 0x1F);
      if ( (v15 & s_transientsCollisionMP_LoadedTiles.array[v14]) != 0 || s_transientsCollisionMP_LoadedAllTiles )
        break;
      if ( v10 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      if ( (v15 & s_transientsCollisionMP_LoadRequestedTiles.array[v14]) != 0 || s_transientsCollisionMP_LoadRequestedAllTiles )
      {
        v6 += TileCost;
LABEL_16:
        v7 = v85;
        goto LABEL_17;
      }
      v7 = TileCost + v85;
      v85 += TileCost;
LABEL_17:
      if ( ++v10 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      {
        _R14 = y;
        v4 = 0i64;
        v11 = v84;
        goto LABEL_19;
      }
    }
    v5 += TileCost;
    goto LABEL_16;
  }
LABEL_19:
  v16 = j_va("%i Loaded Pages, %i Requested Pages, %i Unloaded Pages.", v5, v6, v7);
  __asm { vmovss  xmm2, dword ptr [r14]; y }
  v18 = v16;
  _RAX = x;
  __asm { vmovss  xmm1, dword ptr [rax]; x }
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v18, &colorWhite);
  __asm
  {
    vmovss  xmm6, cs:__real@40c00000
    vaddss  xmm0, xmm6, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
  }
  v23 = j_va("%i Loaded Bytes, %i Requested Bytes, %i Unloaded Bytes.", v5 << 16, v6 << 16, v7 << 16);
  _R13 = x;
  __asm
  {
    vmovss  xmm2, dword ptr [r14]; y
    vmovss  xmm1, dword ptr [r13+0]; x
  }
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v23, &colorWhite);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [r14]
    vmovss  dword ptr [r14], xmm1
  }
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && s_transientsCollisionMP_SetupAllTiles )
  {
    Com_sprintf(dest, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v28 = j_va("%s is Loaded/Setup and costs %i pages, %i bytes", dest, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    __asm
    {
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v28, &colorBlue);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
    }
  }
  v32 = s_transientsCollisionMP_NumTiles;
  v33 = 0;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    do
    {
      LODWORD(fmt) = v33;
      v34 = CL_TransientsCollisionMP_GetTileCost(v33, v11);
      Com_sprintf(v94, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( v33 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      v35 = (unsigned __int64)v33 >> 5;
      v36 = 0x80000000 >> (v33 & 0x1F);
      if ( (v36 & s_transientsCollisionMP_SetupRequestedTiles.array[v35]) != 0 )
      {
        if ( v33 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v36 & s_transientsCollisionMP_SetupTiles.array[v35]) != 0 )
        {
          v37 = j_va("%s is Loaded/Setup and costs %i pages, %i bytes", v94, v34, v34 << 16);
          __asm
          {
            vmovss  xmm2, dword ptr [r14]; y
            vmovss  xmm1, dword ptr [r13+0]; x
          }
          CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v37, &colorBlue);
          __asm
          {
            vaddss  xmm1, xmm6, dword ptr [r14]
            vmovss  dword ptr [r14], xmm1
          }
        }
      }
      v32 = s_transientsCollisionMP_NumTiles;
      ++v33;
      v11 = v84;
    }
    while ( v33 < (unsigned int)s_transientsCollisionMP_NumTiles );
    v4 = 0i64;
  }
  if ( s_transientsCollisionMP_SetupRequestedAllTiles )
  {
    if ( s_transientsCollisionMP_SetupAllTiles )
      goto LABEL_40;
    Com_sprintf(v95, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v41 = j_va("%s is Loaded/Setting up and costs %i pages, %i bytes", v95, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    fmta = &colorGreen;
  }
  else
  {
    if ( !s_transientsCollisionMP_SetupAllTiles )
      goto LABEL_40;
    Com_sprintf(v96, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v41 = j_va("%s is Loaded/Shutting down and costs %i pages, %i bytes", v96, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    fmta = &colorDkGreen;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [r14]; y
    vmovss  xmm1, dword ptr [r13+0]; x
  }
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v41, fmta);
  __asm { vaddss  xmm1, xmm6, dword ptr [r14] }
  v32 = s_transientsCollisionMP_NumTiles;
  __asm { vmovss  dword ptr [r14], xmm1 }
LABEL_40:
  v45 = 0;
  if ( v32 )
  {
    while ( 1 )
    {
      LODWORD(fmt) = v45;
      v46 = CL_TransientsCollisionMP_GetTileCost(v45, v84);
      Com_sprintf(v91, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( v45 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      v47 = (unsigned __int64)v45 >> 5;
      v48 = 0x80000000 >> (v45 & 0x1F);
      if ( (v48 & s_transientsCollisionMP_SetupRequestedTiles.array[v47]) == 0 )
        goto LABEL_128;
      if ( v45 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      if ( (v48 & s_transientsCollisionMP_SetupTiles.array[v47]) != 0 )
      {
LABEL_128:
        if ( v45 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v48 & s_transientsCollisionMP_SetupRequestedTiles.array[v47]) != 0 )
          goto LABEL_60;
        if ( v45 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v48 & s_transientsCollisionMP_SetupTiles.array[v47]) == 0 )
          goto LABEL_60;
        v49 = j_va("%s is Loaded/Shutting down and costs %i pages, %i bytes", v91, v46, v46 << 16);
        fmtb = &colorDkGreen;
      }
      else
      {
        v49 = j_va("%s is Loaded/Setting up and costs %i pages, %i bytes", v91, v46, v46 << 16);
        fmtb = &colorGreen;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [r14]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v49, fmtb);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [r14]
        vmovss  dword ptr [r14], xmm1
      }
LABEL_60:
      v32 = s_transientsCollisionMP_NumTiles;
      if ( ++v45 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      {
        v4 = 0i64;
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
      Com_sprintf(v97, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
      v53 = j_va("%s is Loading and costs %i pages, %i bytes", v97, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
      fmtc = &colorYellow;
    }
    else
    {
      if ( !s_transientsCollisionMP_LoadedAllTiles )
        goto LABEL_70;
      Com_sprintf(v98, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
      v53 = j_va("%s is Unloading and costs %i pages, %i bytes", v98, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
      fmtc = &colorDkYellow;
    }
    __asm
    {
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v53, fmtc);
    __asm { vaddss  xmm1, xmm6, dword ptr [r14] }
    v32 = s_transientsCollisionMP_NumTiles;
    __asm { vmovss  dword ptr [r14], xmm1 }
  }
LABEL_70:
  v57 = 0;
  if ( v32 )
  {
    while ( 1 )
    {
      LODWORD(fmt) = v57;
      v58 = CL_TransientsCollisionMP_GetTileCost(v57, v84);
      Com_sprintf(v92, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( v57 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v57;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      v59 = (unsigned __int64)v57 >> 5;
      v60 = 0x80000000 >> (v57 & 0x1F);
      if ( (v60 & s_transientsCollisionMP_SetupRequestedTiles.array[v59]) != 0 )
        goto LABEL_129;
      if ( v57 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v57;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      if ( (v60 & s_transientsCollisionMP_SetupTiles.array[v59]) != 0 )
        goto LABEL_129;
      if ( v57 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v57;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      if ( (v60 & s_transientsCollisionMP_LoadRequestedTiles.array[v59]) == 0 )
        goto LABEL_129;
      if ( v57 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v57;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      if ( (v60 & s_transientsCollisionMP_LoadedTiles.array[v59]) != 0 )
      {
LABEL_129:
        if ( v57 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v60 & s_transientsCollisionMP_SetupRequestedTiles.array[v59]) != 0 )
          goto LABEL_106;
        if ( v57 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v60 & s_transientsCollisionMP_SetupTiles.array[v59]) != 0 )
          goto LABEL_106;
        if ( v57 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v60 & s_transientsCollisionMP_LoadRequestedTiles.array[v59]) != 0 )
          goto LABEL_106;
        if ( v57 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v60 & s_transientsCollisionMP_LoadedTiles.array[v59]) == 0 )
          goto LABEL_106;
        v61 = j_va("%s is Unloading and costs %i pages, %i bytes", v92, v58, v58 << 16);
        fmtd = &colorDkYellow;
      }
      else
      {
        v61 = j_va("%s is Loading and costs %i pages, %i bytes", v92, v58, v58 << 16);
        fmtd = &colorYellow;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [r14]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v61, fmtd);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [r14]
        vmovss  dword ptr [r14], xmm1
      }
LABEL_106:
      v32 = s_transientsCollisionMP_NumTiles;
      if ( ++v57 >= (unsigned int)s_transientsCollisionMP_NumTiles )
      {
        v4 = 0i64;
        break;
      }
    }
  }
  if ( !s_transientsCollisionMP_LoadedAllTiles && !s_transientsCollisionMP_LoadRequestedAllTiles )
  {
    Com_sprintf(v90, 0x40ui64, "%s_cg_ls_tr", s_transientsCollisionMP_MapName);
    v65 = j_va("%s is Unloaded and costs %i pages, %i bytes", v90, s_transientsCollisionMP_LocalServerCost, s_transientsCollisionMP_LocalServerCost << 16);
    __asm
    {
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v65, &colorRed);
    __asm { vaddss  xmm1, xmm6, dword ptr [r14] }
    v32 = s_transientsCollisionMP_NumTiles;
    __asm { vmovss  dword ptr [r14], xmm1 }
  }
  if ( v32 )
  {
    do
    {
      v69 = s_transientsCollisionMP_SortedTileIndices[v4];
      if ( (unsigned int)v69 >= v32 )
      {
        LODWORD(v83) = v32;
        LODWORD(v82) = s_transientsCollisionMP_SortedTileIndices[v4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1714, ASSERT_TYPE_ASSERT, "(unsigned)( tileIdx ) < (unsigned)( s_transientsCollisionMP_NumTiles )", "tileIdx doesn't index s_transientsCollisionMP_NumTiles\n\t%i not in [0, %i)", v82, v83) )
          __debugbreak();
      }
      LODWORD(fmt) = v69;
      v70 = CL_TransientsCollisionMP_GetTileCost(v69, v84);
      Com_sprintf(v90, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, fmt);
      if ( (unsigned int)v69 >= 0x400 )
      {
        LODWORD(v83) = 1024;
        LODWORD(v82) = v69;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
          __debugbreak();
      }
      v71 = 0x80000000 >> (v69 & 0x1F);
      if ( (v71 & s_transientsCollisionMP_LoadedTiles.array[v69 >> 5]) == 0 )
      {
        if ( (unsigned int)v69 >= 0x400 )
        {
          LODWORD(v83) = 1024;
          LODWORD(v82) = v69;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v82, v83) )
            __debugbreak();
        }
        if ( (v71 & s_transientsCollisionMP_LoadRequestedTiles.array[v69 >> 5]) == 0 )
        {
          v72 = j_va("%s is Unloaded and costs %i pages, %i bytes", v90, v70, v70 << 16);
          __asm
          {
            vmovss  xmm2, dword ptr [r14]; y
            vmovss  xmm1, dword ptr [r13+0]; x
          }
          CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v72, &colorRed);
          __asm
          {
            vaddss  xmm1, xmm6, dword ptr [r14]
            vmovss  dword ptr [r14], xmm1
          }
        }
      }
      v32 = s_transientsCollisionMP_NumTiles;
      v4 = (unsigned int)(v86 + 1);
      v86 = v4;
    }
    while ( (unsigned int)v4 < (unsigned int)s_transientsCollisionMP_NumTiles );
  }
  __asm { vmovaps xmm6, [rsp+300h+var_40] }
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawMinimap
==============
*/
void CL_TransientsCollisionMP_Debug_DrawMinimap(const ScreenPlacement *const scrPlace, float *x, float *y, const LocalClientNum_t localClientNum)
{
  const char *v19; 
  const char *v24; 
  const char *v28; 
  cg_t *LocalClientGlobals; 
  int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v69; 
  bool IsLoadModeInFrontend; 
  unsigned int TileCost; 
  const char *v79; 
  const char *v82; 
  float setColor; 
  float setColora; 
  float setColorb; 
  float setColorc; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  float color; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  vec4_t v114; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = y;
  _R14 = x;
  if ( (_DWORD)s_transientsCollisionMP_NumTiles )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovaps xmmword ptr [r11-0C8h], xmm14
      vmovaps xmmword ptr [r11-0D8h], xmm15
    }
    v19 = j_va("Red:Unloaded, Yellow:Streaming, Green:Loaded, Blue:Setup.");
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r14]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v19, &colorWhite);
    __asm
    {
      vmovss  xmm14, cs:__real@40c00000
      vaddss  xmm0, xmm14, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    v24 = j_va("Colored Numbers show memory in %i byte pages", 0x10000i64);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r14]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v24, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm14, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
    v28 = j_va("White Numbers show transient collision file number");
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r14]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v28, &colorWhite);
    __asm
    {
      vaddss  xmm2, xmm14, dword ptr [rsi]; y
      vmovss  xmm15, cs:__real@43c00000
      vmovss  dword ptr [rsi], xmm2
      vmovss  xmm1, dword ptr [r14]; x
      vmovaps xmm3, xmm15; width
      vmovss  dword ptr [rsp+178h+setColor], xmm15
    }
    UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColor, 1, 1, &colorBlack);
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(vertAlign) = 2;
      LODWORD(horzAlign) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", horzAlign, vertAlign) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm11, cs:__real@3ac00000
      vmovss  xmm13, cs:__real@3f800000
    }
    if ( localClientNum < cg_t::ms_allocatedCount )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( LocalClientGlobals )
      {
        if ( LocalClientGlobals->compassMapMaterial )
        {
          __asm
          {
            vmovss  xmm3, cs:__real@43400000
            vmulss  xmm1, xmm11, dword ptr [rax+4A018h]
            vmulss  xmm2, xmm11, dword ptr [rax+4A01Ch]
            vmulss  xmm4, xmm11, dword ptr [rax+4A024h]
            vaddss  xmm1, xmm1, xmm3
            vaddss  xmm5, xmm1, dword ptr [r14]
            vxorps  xmm0, xmm0, xmm0
            vmovss  [rsp+178h+var_120], xmm0
            vmovss  [rsp+178h+var_128], xmm13
            vmovss  [rsp+178h+var_130], xmm13
            vmovss  [rsp+178h+var_138], xmm0
            vsubss  xmm1, xmm3, xmm2
            vaddss  xmm2, xmm1, dword ptr [rsi]; y
            vmulss  xmm3, xmm11, dword ptr [rax+4A020h]; w
            vmovss  dword ptr [rsp+178h+color], xmm0
            vmovaps xmm1, xmm5; x
            vmovss  dword ptr [rsp+178h+setColor], xmm4
          }
          CL_DrawRotatedStretchPicWithoutSplitScreenScaling(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, 1, 1, color, v110, v111, v112, v113, 0, &colorWhite, LocalClientGlobals->compassMapMaterial);
        }
      }
    }
    v48 = s_transientsCollisionMP_NumTiles;
    v49 = 0;
    __asm { vmovaps [rsp+178h+var_48], xmm6 }
    v50 = 0;
    __asm
    {
      vmovaps [rsp+178h+var_58], xmm7
      vmovss  xmm8, cs:__real@41400000
    }
    if ( (_DWORD)s_transientsCollisionMP_NumTiles )
    {
      __asm
      {
        vmovaps [rsp+178h+var_78], xmm9
        vmovss  xmm9, cs:__real@3f000000
        vmovaps [rsp+178h+var_88], xmm10
        vmovss  xmm10, cs:__real@41300000
        vmovaps [rsp+178h+var_A8], xmm12
        vmovss  xmm12, cs:__real@3e99999a
      }
      do
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rsi]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm6, xmm1, dword ptr [r14]
          vmovss  dword ptr [rsp+178h+var_F8+0Ch], xmm12
        }
        CL_TransientsCollisionMP_Debug_GetTileColor(v50, &v114);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm2, xmm1, xmm7
          vaddss  xmm2, xmm2, xmm9; y
          vaddss  xmm1, xmm6, xmm9; x
          vmovaps xmm3, xmm10; width
          vmovss  dword ptr [rsp+178h+setColor], xmm10
        }
        UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, 1, 1, &v114);
        v48 = s_transientsCollisionMP_NumTiles;
        ++v50;
      }
      while ( v50 < (unsigned int)s_transientsCollisionMP_NumTiles );
      __asm
      {
        vmovaps xmm12, [rsp+178h+var_A8]
        vmovaps xmm10, [rsp+178h+var_88]
        vmovaps xmm9, [rsp+178h+var_78]
      }
    }
    v69 = 0;
    if ( v48 )
    {
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm7, xmm1, dword ptr [rsi]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm6, xmm1, dword ptr [r14]
          vmovss  dword ptr [rsp+178h+var_F8+0Ch], xmm13
        }
        CL_TransientsCollisionMP_Debug_GetTileColor(v69, &v114);
        IsLoadModeInFrontend = CL_TransientsMP_IsLoadModeInFrontend();
        TileCost = CL_TransientsCollisionMP_GetTileCost(v69, IsLoadModeInFrontend);
        v79 = j_va("%i", TileCost);
        __asm
        {
          vmovaps xmm2, xmm7; y
          vmovaps xmm1, xmm6; x
        }
        CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v79, &v114);
        v82 = j_va("%i", v69);
        __asm
        {
          vaddss  xmm2, xmm7, xmm14; y
          vmovaps xmm1, xmm6; x
        }
        CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v82, &colorWhite);
        ++v69;
      }
      while ( v69 < (unsigned int)s_transientsCollisionMP_NumTiles );
    }
    __asm
    {
      vmovaps xmm14, [rsp+178h+var_C8]
      vmovaps xmm13, [rsp+178h+var_B8]
    }
    if ( s_transientsCollisionMP_NumStreamPositions )
    {
      __asm
      {
        vmovss  xmm8, cs:__real@bac00000
        vmovss  xmm6, cs:__real@433e0000
        vmovss  xmm7, cs:__real@40800000
      }
      do
      {
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rdi+rcx*4+4]
          vaddss  xmm2, xmm1, dword ptr [rsi]
          vmulss  xmm1, xmm11, dword ptr [rdi+rcx*4]
          vaddss  xmm3, xmm1, dword ptr [r14]
          vaddss  xmm1, xmm3, xmm6; x
          vmovaps xmm3, xmm7; width
          vaddss  xmm2, xmm2, xmm6; y
          vmovss  dword ptr [rsp+178h+setColor], xmm7
        }
        UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorc, 1, 1, &colorBlue);
        ++v49;
      }
      while ( v49 < s_transientsCollisionMP_NumStreamPositions );
    }
    __asm
    {
      vaddss  xmm1, xmm15, dword ptr [rsi]
      vmovaps xmm15, [rsp+178h+var_D8]
      vmovaps xmm11, [rsp+178h+var_98]
      vmovaps xmm8, [rsp+178h+var_68]
      vmovaps xmm7, [rsp+178h+var_58]
      vmovaps xmm6, [rsp+178h+var_48]
      vmovss  dword ptr [rsi], xmm1
    }
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_DrawString
==============
*/

void __fastcall CL_TransientsCollisionMP_Debug_DrawString(const ScreenPlacement *scrPlace, double x, double y, const char *string)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  char v16; 
  char v17; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmm6, xmm1
    vcomiss xmm2, cs:__real@44870000
  }
  v11 = DVARBOOL_cl_transientCollision_debugDump;
  if ( !DVARBOOL_cl_transientCollision_debugDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DVARINT_cl_transientCollision_debugDisplayOffsetX;
    __asm { vmovaps [rsp+88h+var_28], xmm7 }
    if ( !DVARINT_cl_transientCollision_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCollision_debugDisplayOffsetX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vaddss  xmm7, xmm0, cs:__real@41000000
      vcomiss xmm6, xmm7
    }
    if ( !(v16 | v17) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm8
        vmovss  xmm8, cs:__real@c0c00000
      }
      do
      {
        Com_Printf(14, " ");
        __asm
        {
          vaddss  xmm6, xmm6, xmm8
          vcomiss xmm6, xmm7
        }
      }
      while ( !(v16 | v17) );
      __asm { vmovaps xmm8, [rsp+88h+var_38] }
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
    __asm { vmovaps xmm7, [rsp+88h+var_28] }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
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
  const char *v18; 
  int setColora; 
  vec4_t *setColor; 
  vec3_t pos; 
  __int64 v26; 
  char dest[64]; 

  v26 = -2i64;
  _RBX = y;
  _RBP = x;
  setColora = CL_TransientsCollisionMP_GetBudgetBytes() >> 20;
  v8 = j_va("MP Collision Transients for %s - %i files - loading mode %s up to %iMB", s_transientsCollisionMP_MapName, (unsigned int)s_transientsCollisionMP_NumTiles, CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NAMES[s_transientsCollisionMP_TransientMode], setColora);
  setColor = &colorWhite;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v8);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm0, xmm0, cs:__real@40c00000
    vmovss  dword ptr [rbx], xmm0
  }
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
      v18 = j_va("No Tile");
    }
    else
    {
      LODWORD(setColor) = TileForPos;
      Com_sprintf(dest, 0x40ui64, "%s_cg_%05u_tr", s_transientsCollisionMP_MapName, setColor);
      v18 = j_va("Current Tile: %s", dest);
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
    }
    CL_TransientsCollisionMP_Debug_DrawString(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, v18);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, cs:__real@40c00000
      vmovss  dword ptr [rbx], xmm1
    }
  }
}

/*
==============
CL_TransientsCollisionMP_Debug_GetTileColor
==============
*/
void CL_TransientsCollisionMP_Debug_GetTileColor(int tileIdx, vec4_t *color)
{
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  __int64 v27; 
  __int64 v28; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr cs:?colorOrange@@3Tvec4_t@@B+4; vec4_t const colorOrange
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr cs:?colorOrange@@3Tvec4_t@@B+8; vec4_t const colorOrange
    vmovss  dword ptr [rdx+8], xmm0
  }
  _RBX = color;
  v6 = (unsigned int)tileIdx;
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && s_transientsCollisionMP_SetupAllTiles )
    goto LABEL_11;
  if ( (unsigned int)tileIdx >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", tileIdx, 1024) )
    __debugbreak();
  v7 = v6 >> 5;
  v8 = 0x80000000 >> (v6 & 0x1F);
  if ( (v8 & s_transientsCollisionMP_SetupRequestedTiles.array[v6 >> 5]) != 0 )
  {
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_SetupTiles.array[v7]) != 0 )
    {
LABEL_11:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr cs:?colorBlue@@3Tvec4_t@@B+4; vec4_t const colorBlue
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorBlue@@3Tvec4_t@@B+8; vec4_t const colorBlue
        vmovss  dword ptr [rbx+8], xmm0
      }
      return;
    }
  }
  if ( s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles )
    goto LABEL_53;
  if ( (unsigned int)v6 >= 0x400 )
  {
    LODWORD(v28) = 1024;
    LODWORD(v27) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  if ( (v8 & s_transientsCollisionMP_SetupRequestedTiles.array[v7]) != 0 )
  {
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_SetupTiles.array[v7]) == 0 )
      goto LABEL_53;
  }
  if ( !s_transientsCollisionMP_SetupRequestedAllTiles && s_transientsCollisionMP_SetupAllTiles )
    goto LABEL_32;
  if ( (unsigned int)v6 >= 0x400 )
  {
    LODWORD(v28) = 1024;
    LODWORD(v27) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  if ( (v8 & s_transientsCollisionMP_SetupRequestedTiles.array[v7]) == 0 )
  {
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_SetupTiles.array[v7]) != 0 )
    {
LABEL_32:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorDkGreen@@3Tvec4_t@@B; vec4_t const colorDkGreen
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr cs:?colorDkGreen@@3Tvec4_t@@B+4; vec4_t const colorDkGreen
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorDkGreen@@3Tvec4_t@@B+8; vec4_t const colorDkGreen
        vmovss  dword ptr [rbx+8], xmm0
      }
      return;
    }
  }
  if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && s_transientsCollisionMP_LoadRequestedAllTiles && s_transientsCollisionMP_LoadedAllTiles )
    goto LABEL_53;
  if ( (unsigned int)v6 >= 0x400 )
  {
    LODWORD(v28) = 1024;
    LODWORD(v27) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  if ( (v8 & s_transientsCollisionMP_SetupRequestedTiles.array[v7]) != 0 )
    goto LABEL_57;
  if ( (unsigned int)v6 >= 0x400 )
  {
    LODWORD(v28) = 1024;
    LODWORD(v27) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  if ( (v8 & s_transientsCollisionMP_SetupTiles.array[v7]) != 0 )
    goto LABEL_57;
  if ( (unsigned int)v6 >= 0x400 )
  {
    LODWORD(v28) = 1024;
    LODWORD(v27) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  if ( (v8 & s_transientsCollisionMP_LoadRequestedTiles.array[v7]) == 0 )
    goto LABEL_57;
  if ( (unsigned int)v6 >= 0x400 )
  {
    LODWORD(v28) = 1024;
    LODWORD(v27) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  if ( (v8 & s_transientsCollisionMP_LoadedTiles.array[v7]) == 0 )
  {
LABEL_57:
    if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && s_transientsCollisionMP_LoadRequestedAllTiles && !s_transientsCollisionMP_LoadedAllTiles )
      goto LABEL_74;
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_SetupRequestedTiles.array[v7]) != 0 )
      goto LABEL_78;
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_SetupTiles.array[v7]) != 0 )
      goto LABEL_78;
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_LoadRequestedTiles.array[v7]) == 0 )
      goto LABEL_78;
    if ( (unsigned int)v6 >= 0x400 )
    {
      LODWORD(v28) = 1024;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( (v8 & s_transientsCollisionMP_LoadedTiles.array[v7]) != 0 )
    {
LABEL_78:
      if ( !s_transientsCollisionMP_SetupRequestedAllTiles && !s_transientsCollisionMP_SetupAllTiles && !s_transientsCollisionMP_LoadRequestedAllTiles && s_transientsCollisionMP_LoadedAllTiles )
        goto LABEL_95;
      if ( (unsigned int)v6 >= 0x400 )
      {
        LODWORD(v28) = 1024;
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
          __debugbreak();
      }
      if ( (v8 & s_transientsCollisionMP_SetupRequestedTiles.array[v7]) != 0 )
        goto LABEL_97;
      if ( (unsigned int)v6 >= 0x400 )
      {
        LODWORD(v28) = 1024;
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
          __debugbreak();
      }
      if ( (v8 & s_transientsCollisionMP_SetupTiles.array[v7]) != 0 )
        goto LABEL_97;
      if ( (unsigned int)v6 >= 0x400 )
      {
        LODWORD(v28) = 1024;
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
          __debugbreak();
      }
      if ( (v8 & s_transientsCollisionMP_LoadRequestedTiles.array[v7]) != 0 )
        goto LABEL_97;
      if ( (unsigned int)v6 >= 0x400 )
      {
        LODWORD(v28) = 1024;
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
          __debugbreak();
      }
      if ( (v8 & s_transientsCollisionMP_LoadedTiles.array[v7]) == 0 )
      {
LABEL_97:
        if ( !s_transientsCollisionMP_LoadedAllTiles && !s_transientsCollisionMP_LoadRequestedAllTiles )
          goto LABEL_106;
        if ( (unsigned int)v6 >= 0x400 )
        {
          LODWORD(v28) = 1024;
          LODWORD(v27) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
            __debugbreak();
        }
        if ( (v8 & s_transientsCollisionMP_LoadedTiles.array[v7]) != 0 )
          goto LABEL_111;
        if ( (unsigned int)v6 >= 0x400 )
        {
          LODWORD(v28) = 1024;
          LODWORD(v27) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v27, v28) )
            __debugbreak();
        }
        if ( (v8 & s_transientsCollisionMP_LoadRequestedTiles.array[v7]) != 0 )
        {
LABEL_111:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_collision_mp.cpp", 1443, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            __debugbreak();
        }
        else
        {
LABEL_106:
          __asm
          {
            vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
            vmovss  dword ptr [rbx], xmm0
            vmovss  xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
            vmovss  dword ptr [rbx+4], xmm1
            vmovss  xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
            vmovss  dword ptr [rbx+8], xmm0
          }
        }
      }
      else
      {
LABEL_95:
        __asm
        {
          vmovss  xmm0, dword ptr cs:?colorDkYellow@@3Tvec4_t@@B; vec4_t const colorDkYellow
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr cs:?colorDkYellow@@3Tvec4_t@@B+4; vec4_t const colorDkYellow
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr cs:?colorDkYellow@@3Tvec4_t@@B+8; vec4_t const colorDkYellow
          vmovss  dword ptr [rbx+8], xmm0
        }
      }
    }
    else
    {
LABEL_74:
      __asm
      {
        vmovss  xmm0, dword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr cs:?colorYellow@@3Tvec4_t@@B+4; vec4_t const colorYellow
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr cs:?colorYellow@@3Tvec4_t@@B+8; vec4_t const colorYellow
        vmovss  dword ptr [rbx+8], xmm0
      }
    }
  }
  else
  {
LABEL_53:
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorLtGreen@@3Tvec4_t@@B; vec4_t const colorLtGreen
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?colorLtGreen@@3Tvec4_t@@B+4; vec4_t const colorLtGreen
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorLtGreen@@3Tvec4_t@@B+8; vec4_t const colorLtGreen
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
CL_TransientsCollisionMP_DistanceSort
==============
*/
__int64 CL_TransientsCollisionMP_DistanceSort(const void *a, const void *b)
{
  char v2; 
  char v3; 

  _RAX = *(unsigned __int16 *)a;
  _RCX = *(unsigned __int16 *)b;
  _RDX = s_transientsCollisionMP_TileStreamingDistancesSq;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+rax*4]
    vcomiss xmm0, dword ptr [rdx+rcx*4]
  }
  if ( !v2 )
  {
    if ( !(v2 | v3) )
      return 1i64;
    if ( (unsigned __int16)_RAX >= (unsigned __int16)_RCX )
      return (unsigned __int16)_RAX > (unsigned __int16)_RCX;
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
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 

  if ( s_transientsCollisionMP_TransientMode == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_CLOSEST )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@39000000
      vmulss  xmm1, xmm3, dword ptr [rdx+4]
      vaddss  xmm0, xmm1, cs:__real@41800000
      vcvttss2si ecx, xmm0
      vmulss  xmm0, xmm3, dword ptr [rdx]
      vaddss  xmm2, xmm0, cs:__real@41800000
      vcvttss2si eax, xmm2
    }
    v10 = _EAX + 32 * _ECX;
    if ( v10 >= (unsigned int)s_transientsCollisionMP_NumTiles || (_WORD)v10 == 0xFFFF )
      return 1;
    v11 = (unsigned __int16)v10;
    if ( (unsigned __int16)v10 >= 0x400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", (unsigned __int16)v10, 1024) )
      __debugbreak();
    v12 = 0x80000000 >> (v11 & 0x1F);
    v13 = (v12 & s_transientsCollisionMP_LoadRequestedTiles.array[v11 >> 5]) != 0;
    if ( (unsigned int)v11 >= 0x400 )
    {
      LODWORD(v15) = 1024;
      LODWORD(v14) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
        __debugbreak();
    }
    return v13 ^ ((v12 & s_transientsCollisionMP_SetupTiles.array[v11 >> 5]) != 0) ^ 1;
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

