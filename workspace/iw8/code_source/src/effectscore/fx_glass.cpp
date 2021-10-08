/*
==============
Glass_Reset
==============
*/

void Glass_Reset(void)
{
  ?Glass_Reset@@YAXXZ();
}

/*
==============
Glass_Init
==============
*/

void Glass_Init(void)
{
  ?Glass_Init@@YAXXZ();
}

/*
==============
Glass_DamageInitialPiece
==============
*/

void __fastcall Glass_DamageInitialPiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_DamageInitialPiece@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
Glass_AllocPiece
==============
*/

unsigned int __fastcall Glass_AllocPiece(FxGlassSystem *glassSys, unsigned __int8 vertCount, unsigned __int8 holeDataCount, unsigned __int8 crackDataCount, unsigned __int8 fanDataCount)
{
  return ?Glass_AllocPiece@@YAIPEIAUFxGlassSystem@@EEEE@Z(glassSys, vertCount, holeDataCount, crackDataCount, fanDataCount);
}

/*
==============
Glass_DrawDebug
==============
*/

void __fastcall Glass_DrawDebug(const vec3_t *playerOrigin)
{
  ?Glass_DrawDebug@@YAXAEBTvec3_t@@@Z(playerOrigin);
}

/*
==============
Glass_AllocateClientMemory
==============
*/

void __fastcall Glass_AllocateClientMemory(HunkUser *hunkUser)
{
  ?Glass_AllocateClientMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
Glass_OnTransientZoneLoaded
==============
*/

void __fastcall Glass_OnTransientZoneLoaded(const unsigned int transientZoneIndex)
{
  ?Glass_OnTransientZoneLoaded@@YAXI@Z(transientZoneIndex);
}

/*
==============
Glass_PlayEffect
==============
*/

void __fastcall Glass_PlayEffect(FxCombinedDef *fx, const vec3_t *origin, const vec3_t *normal)
{
  ?Glass_PlayEffect@@YAXAEAUFxCombinedDef@@AEBTvec3_t@@1@Z(fx, origin, normal);
}

/*
==============
Glass_FreePiecePhysicsObject
==============
*/

void __fastcall Glass_FreePiecePhysicsObject(FxGlassPieceDynamics *pieceDynamics)
{
  ?Glass_FreePiecePhysicsObject@@YAXPEIAUFxGlassPieceDynamics@@@Z(pieceDynamics);
}

/*
==============
Glass_Shutdown
==============
*/

void Glass_Shutdown(void)
{
  ?Glass_Shutdown@@YAXXZ();
}

/*
==============
Glass_DestroyInitialPiece
==============
*/

void __fastcall Glass_DestroyInitialPiece(FxGlassSystem *glassSys, unsigned int initialPieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, Glass_BreakData *breakData)
{
  ?Glass_DestroyInitialPiece@@YAXPEIAUFxGlassSystem@@IAEBTvec3_t@@1PEAUGlass_BreakData@@@Z(glassSys, initialPieceIndex, impactPos, impactDir, breakData);
}

/*
==============
Glass_GetInertiaTensor
==============
*/

void __fastcall Glass_GetInertiaTensor(FxGlassInertiaTensor *tensor, const FxGlassGeometryData *geoData, unsigned int vertCount, float halfThickness, float totalMass)
{
  ?Glass_GetInertiaTensor@@YAXPEAUFxGlassInertiaTensor@@QEBTFxGlassGeometryData@@IMM@Z(tensor, geoData, vertCount, halfThickness, totalMass);
}

/*
==============
Glass_DeleteInitialPiece
==============
*/

void __fastcall Glass_DeleteInitialPiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_DeleteInitialPiece@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
Glass_OnTransientZoneUnloaded
==============
*/

void __fastcall Glass_OnTransientZoneUnloaded(const unsigned int transientZoneIndex)
{
  ?Glass_OnTransientZoneUnloaded@@YAXI@Z(transientZoneIndex);
}

/*
==============
Glass_GetDamagedSound
==============
*/

SndAliasList *__fastcall Glass_GetDamagedSound(unsigned int initialPieceIndex)
{
  return ?Glass_GetDamagedSound@@YAPEAUSndAliasList@@I@Z(initialPieceIndex);
}

/*
==============
Glass_GetDestroyedQuietSound
==============
*/

SndAliasList *__fastcall Glass_GetDestroyedQuietSound(unsigned int initialPieceIndex)
{
  return ?Glass_GetDestroyedQuietSound@@YAPEAUSndAliasList@@I@Z(initialPieceIndex);
}

/*
==============
Glass_FreePiece
==============
*/

void __fastcall Glass_FreePiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_FreePiece@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
Glass_FreeClientMemory
==============
*/

void Glass_FreeClientMemory(void)
{
  ?Glass_FreeClientMemory@@YAXXZ();
}

/*
==============
Glass_FreeSystemPieces
==============
*/

void __fastcall Glass_FreeSystemPieces(FxGlassSystem *glassSys)
{
  ?Glass_FreeSystemPieces@@YAXPEIAUFxGlassSystem@@@Z(glassSys);
}

/*
==============
Glass_InitPendingZones
==============
*/

void Glass_InitPendingZones(void)
{
  ?Glass_InitPendingZones@@YAXXZ();
}

/*
==============
Glass_CompactData
==============
*/

void __fastcall Glass_CompactData(FxGlassSystem *glassSys)
{
  ?Glass_CompactData@@YAXPEIAUFxGlassSystem@@@Z(glassSys);
}

/*
==============
Glass_FreeAllPieces
==============
*/

void Glass_FreeAllPieces(void)
{
  ?Glass_FreeAllPieces@@YAXXZ();
}

/*
==============
Glass_GetInitialPieceAreaX2
==============
*/

double __fastcall Glass_GetInitialPieceAreaX2(const FxGlassSystem *glassSys, unsigned int initialPieceIndex)
{
  double result; 

  *(float *)&result = ?Glass_GetInitialPieceAreaX2@@YAMPEIBUFxGlassSystem@@I@Z(glassSys, initialPieceIndex);
  return result;
}

/*
==============
Glass_GetInitialPieceAxis
==============
*/

void __fastcall Glass_GetInitialPieceAxis(const FxGlassSystem *glassSys, unsigned int initialPieceIndex, tmat33_t<vec3_t> *outAxis)
{
  ?Glass_GetInitialPieceAxis@@YAXPEIBUFxGlassSystem@@IAEAT?$tmat33_t@Tvec3_t@@@@@Z(glassSys, initialPieceIndex, outAxis);
}

/*
==============
Glass_GetInitialPieceCenter
==============
*/

void __fastcall Glass_GetInitialPieceCenter(const FxGlassSystem *glassSys, unsigned int initialPieceIndex, vec3_t *outCenter)
{
  ?Glass_GetInitialPieceCenter@@YAXPEIBUFxGlassSystem@@IAEATvec3_t@@@Z(glassSys, initialPieceIndex, outCenter);
}

/*
==============
Glass_PlayEffectWithMark
==============
*/

void __fastcall Glass_PlayEffectWithMark(FxCombinedDef *fx, const vec3_t *origin, const vec3_t *normal)
{
  ?Glass_PlayEffectWithMark@@YAXAEAUFxCombinedDef@@AEBTvec3_t@@1@Z(fx, origin, normal);
}

/*
==============
Glass_GetSystemForInitialPiece
==============
*/

FxGlassSystem *__fastcall Glass_GetSystemForInitialPiece(unsigned int initialPieceIndex, unsigned int *outLocalInitialPieceIndex)
{
  return ?Glass_GetSystemForInitialPiece@@YAPEAUFxGlassSystem@@IAEAI@Z(initialPieceIndex, outLocalInitialPieceIndex);
}

/*
==============
Glass_GetConvexHullMask
==============
*/

unsigned int __fastcall Glass_GetConvexHullMask(const FxGlassSystem *glassSys, const FxGlassPieceState *pieceState)
{
  return ?Glass_GetConvexHullMask@@YAIPEBUFxGlassSystem@@PEBUFxGlassPieceState@@@Z(glassSys, pieceState);
}

/*
==============
Glass_PropagateToDetailWorld
==============
*/

void __fastcall Glass_PropagateToDetailWorld(LocalClientNum_t clientNum)
{
  ?Glass_PropagateToDetailWorld@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Glass_ClearPendingZones
==============
*/

void Glass_ClearPendingZones(void)
{
  ?Glass_ClearPendingZones@@YAXXZ();
}

/*
==============
Glass_GetDestroyedSound
==============
*/

SndAliasList *__fastcall Glass_GetDestroyedSound(unsigned int initialPieceIndex)
{
  return ?Glass_GetDestroyedSound@@YAPEAUSndAliasList@@I@Z(initialPieceIndex);
}

/*
==============
Glass_AccumInertiaTensorForTriangleWedge
==============
*/

float __fastcall Glass_AccumInertiaTensorForTriangleWedge(FxGlassInertiaTensor *tensor, const vec2_t *v0, const vec2_t *v1, double halfThickness)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [r8]
    vmovss  xmm2, dword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-28h], xmm7
    vaddss  xmm1, xmm4, xmm2
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmulss  xmm10, xmm2, xmm6
    vmulss  xmm2, xmm1, xmm2
    vmulss  xmm9, xmm4, xmm5
    vmovaps [rsp+68h+var_68], xmm11
    vaddss  xmm1, xmm5, xmm6
    vmovaps xmm8, xmm3
    vsubss  xmm0, xmm9, xmm10
    vmulss  xmm11, xmm0, xmm3
    vmulss  xmm3, xmm1, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm7, xmm2, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmovaps xmm6, xmmword ptr [rax-18h]
    vaddss  xmm5, xmm3, xmm0
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm4, xmm1, cs:__real@40000000
    vmovaps xmm8, xmmword ptr [rax-38h]
    vaddss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm0, xmm11
    vaddss  xmm1, xmm2, dword ptr [rcx]
    vmovss  dword ptr [rcx], xmm1
    vaddss  xmm0, xmm4, xmm7
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rcx+4], xmm2
    vaddss  xmm0, xmm5, xmm7
    vmovaps xmm7, xmmword ptr [rax-28h]
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm2, xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rcx+8], xmm2
    vmovss  xmm2, dword ptr [rdx+4]
    vmulss  xmm3, xmm2, dword ptr [rdx]
    vaddss  xmm1, xmm9, xmm10
    vmulss  xmm4, xmm1, cs:__real@3f000000
    vmovss  xmm1, dword ptr [r8]
    vmulss  xmm2, xmm1, dword ptr [r8+4]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmovaps xmm9, xmmword ptr [rax-48h]
    vmovaps xmm10, xmmword ptr [rax-58h]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vmulss  xmm4, xmm3, xmm11
    vsubss  xmm2, xmm1, xmm4
    vmovaps xmm0, xmm11
    vmovaps xmm11, [rsp+68h+var_68]
    vmovss  dword ptr [rcx+0Ch], xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
Glass_AddActivePiece
==============
*/
void Glass_AddActivePiece(FxGlassSystem *glassSys, FxGlassActiveList *active, unsigned int pieceIndex)
{
  __int64 count; 

  count = active->count;
  active->states[count] = &glassSys->pieceStates[pieceIndex];
  active->count = count + 1;
}

/*
==============
Glass_AllocPiece
==============
*/
__int64 Glass_AllocPiece(FxGlassSystem *glassSys, unsigned __int8 vertCount, unsigned __int8 holeDataCount, unsigned __int8 crackDataCount, unsigned __int8 fanDataCount)
{
  unsigned __int64 firstFreePiece; 
  unsigned int v10; 
  unsigned __int64 v11; 
  int v12; 
  unsigned int nextFree; 
  __int64 v14; 
  unsigned int *isInUse; 
  unsigned int geoDataCount; 
  FxGlassPieceState *pieceStates; 
  FxGlassPieceState *v18; 
  __int64 result; 
  __int64 v20; 

  firstFreePiece = glassSys->firstFreePiece;
  if ( (_DWORD)firstFreePiece == 0xFFFF )
    return 0xFFFFi64;
  if ( (unsigned int)firstFreePiece >= glassSys->pieceLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", glassSys->firstFreePiece, glassSys->pieceLimit) )
    __debugbreak();
  v10 = 0x80000000 >> (firstFreePiece & 0x1F);
  v11 = firstFreePiece >> 5;
  if ( (v10 & glassSys->isInUse[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 324, ASSERT_TYPE_ASSERT, "(!(glassSys->isInUse[pieceIndex >> 5] & BitShiftMasked( pieceIndex )))", (const char *)&queryFormat, "!(glassSys->isInUse[pieceIndex >> 5] & BitShiftMasked( pieceIndex ))") )
    __debugbreak();
  if ( glassSys->pieceDynamics[firstFreePiece].pendingCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 325, ASSERT_TYPE_ASSERT, "(!glassSys->pieceDynamics[pieceIndex].pendingCreation)", (const char *)&queryFormat, "!glassSys->pieceDynamics[pieceIndex].pendingCreation") )
    __debugbreak();
  v12 = fanDataCount + crackDataCount + holeDataCount + vertCount;
  if ( v12 + glassSys->geoDataCount > glassSys->geoDataLimit )
    return 0xFFFFi64;
  nextFree = glassSys->piecePlaces[firstFreePiece].nextFree;
  glassSys->firstFreePiece = nextFree;
  if ( nextFree >= glassSys->pieceLimit && nextFree != 0xFFFF )
  {
    LODWORD(v20) = nextFree;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 333, ASSERT_TYPE_ASSERT, "( ( glassSys->firstFreePiece < glassSys->pieceLimit || glassSys->firstFreePiece == 0xffff ) )", "( glassSys->firstFreePiece ) = %i", v20) )
      __debugbreak();
  }
  v14 = glassSys->firstFreePiece;
  if ( glassSys->pieceDynamics[v14].pendingCreation && (_DWORD)v14 != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 334, ASSERT_TYPE_ASSERT, "(!glassSys->pieceDynamics[glassSys->firstFreePiece].pendingCreation || glassSys->firstFreePiece == 0xffff)", (const char *)&queryFormat, "!glassSys->pieceDynamics[glassSys->firstFreePiece].pendingCreation || glassSys->firstFreePiece == GLASS_PIECE_INDEX_NONE") )
    __debugbreak();
  isInUse = glassSys->isInUse;
  geoDataCount = glassSys->geoDataCount;
  pieceStates = glassSys->pieceStates;
  ++glassSys->activePieceCount;
  v18 = &pieceStates[firstFreePiece];
  isInUse[v11] |= v10;
  v18->vertCount = vertCount;
  v18->holeDataCount = holeDataCount;
  v18->geoDataStart = geoDataCount;
  v18->crackDataCount = crackDataCount;
  v18->flags = 0;
  result = (unsigned int)firstFreePiece;
  v18->fanDataCount = fanDataCount;
  glassSys->geoDataCount = v12 + geoDataCount;
  return result;
}

/*
==============
Glass_AllocateClientMemory
==============
*/
void Glass_AllocateClientMemory(HunkUser *hunkUser)
{
  s_glassActiveList.states = (FxGlassPieceState **)Mem_HunkUser_AllocInternal(hunkUser, 8i64 * fxWorld.glassSys.pieceLimit, 8ui64, "Glass_AllocateClientMemory");
  s_removePiecesData.priorities = (PiecePriority *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * fxWorld.glassSys.pieceLimit, 2ui64, "Glass_AllocateClientMemory");
  s_removePiecesData.maxPriorityCount = fxWorld.glassSys.pieceLimit;
}

/*
==============
Glass_ClearPendingZones
==============
*/
void Glass_ClearPendingZones(void)
{
  s_pendingZoneListCount = 0;
}

/*
==============
Glass_CompactData
==============
*/
void Glass_CompactData(FxGlassSystem *glassSys)
{
  unsigned int pieceWordCount; 
  unsigned int v3; 
  unsigned int count; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  FxGlassPieceState *v10; 
  unsigned int geoDataStart; 
  unsigned int v12; 
  bool v13; 
  unsigned int v14; 
  bool v15; 
  FxGlassPieceState *v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int geoDataCount; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  if ( glassSys->needToCompactData )
  {
    glassSys->needToCompactData = 0;
    Sys_EnterCriticalSection(CRITSECT_FX_GLASS);
    pieceWordCount = glassSys->pieceWordCount;
    v3 = 0;
    count = 0;
    v5 = 0;
    s_glassActiveList.count = 0;
    if ( pieceWordCount )
    {
      v6 = 0i64;
      do
      {
        v7 = glassSys->isInUse[v6];
        while ( v7 )
        {
          v8 = __lzcnt(v7);
          if ( v8 >= 0x20 )
          {
            LODWORD(v22) = 32;
            LODWORD(v21) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v7 &= ~(0x80000000 >> v8);
          Glass_AddActivePiece(glassSys, &s_glassActiveList, v8 | (32 * v5));
        }
        ++v5;
        ++v6;
      }
      while ( v5 < pieceWordCount );
      count = s_glassActiveList.count;
      v3 = 0;
    }
    if ( count )
    {
      std::_Sort_unchecked<FxGlassPieceState * *,bool (*)(FxGlassPieceState const *,FxGlassPieceState const *)>(s_glassActiveList.states, &s_glassActiveList.states[count], count, Glass_CompareGeoDataStart);
      v9 = 1;
      v10 = *s_glassActiveList.states;
      geoDataStart = (*s_glassActiveList.states)->geoDataStart;
      v12 = (*s_glassActiveList.states)->vertCount + (*s_glassActiveList.states)->holeDataCount + (*s_glassActiveList.states)->crackDataCount + (*s_glassActiveList.states)->fanDataCount;
      if ( geoDataStart )
      {
LABEL_16:
        v15 = v9 == s_glassActiveList.count;
        glassSys->geoDataCount = v3 + v12;
        v10->geoDataStart = v3;
        if ( !v15 )
        {
          do
          {
            v16 = s_glassActiveList.states[v9];
            v17 = v16->geoDataStart;
            v18 = v16->vertCount + v16->holeDataCount + v16->crackDataCount + v16->fanDataCount;
            v19 = v12 + geoDataStart;
            if ( v17 < v12 + geoDataStart )
            {
              LODWORD(v24) = v12 + geoDataStart;
              LODWORD(v23) = v16->geoDataStart;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 488, ASSERT_TYPE_ASSERT, "( pieceState->geoDataStart ) >= ( blockGeoDataStart + blockGeoDataCount )", "%s >= %s\n\t%i, %i", "pieceState->geoDataStart", "blockGeoDataStart + blockGeoDataCount", v23, v24) )
                __debugbreak();
              v19 = v12 + geoDataStart;
            }
            if ( v17 == v19 )
            {
              v12 += v18;
            }
            else
            {
              if ( geoDataStart <= v3 )
              {
                LODWORD(v24) = v3;
                LODWORD(v23) = geoDataStart;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 495, ASSERT_TYPE_ASSERT, "( blockGeoDataStart ) > ( destGeoData )", "%s > %s\n\t%i, %i", "blockGeoDataStart", "destGeoData", v23, v24) )
                {
                  __debugbreak();
                  v17 = v16->geoDataStart;
                }
              }
              memmove_0(&glassSys->geoData[v3], &glassSys->geoData[geoDataStart], 4i64 * v12);
              v3 += v12;
              geoDataStart = v17;
              v12 = v18;
            }
            geoDataCount = glassSys->geoDataCount;
            v16->geoDataStart = geoDataCount;
            ++v9;
            glassSys->geoDataCount = v18 + geoDataCount;
          }
          while ( v9 != s_glassActiveList.count );
        }
        if ( geoDataStart <= v3 )
        {
          LODWORD(v24) = v3;
          LODWORD(v23) = geoDataStart;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 503, ASSERT_TYPE_ASSERT, "( blockGeoDataStart ) > ( destGeoData )", "%s > %s\n\t%i, %i", "blockGeoDataStart", "destGeoData", v23, v24) )
            __debugbreak();
        }
        memmove_0(&glassSys->geoData[v3], &glassSys->geoData[geoDataStart], 4i64 * v12);
      }
      else
      {
        while ( 1 )
        {
          v13 = v9 < s_glassActiveList.count;
          v14 = v3 + v12;
          glassSys->geoDataCount = v3 + v12;
          if ( !v13 )
            break;
          v3 += v12;
          v10 = s_glassActiveList.states[v9];
          geoDataStart = v10->geoDataStart;
          v12 = v10->vertCount + v10->holeDataCount + v10->crackDataCount + v10->fanDataCount;
          ++v9;
          if ( geoDataStart != v14 )
            goto LABEL_16;
        }
      }
    }
    else
    {
      glassSys->geoDataCount = 0;
    }
    Sys_LeaveCriticalSection(CRITSECT_FX_GLASS);
  }
}

/*
==============
Glass_CompareGeoDataStart
==============
*/
bool Glass_CompareGeoDataStart(const FxGlassPieceState *state0, const FxGlassPieceState *state1)
{
  return state0->geoDataStart < state1->geoDataStart;
}

/*
==============
Glass_DamageInitialPiece
==============
*/
void Glass_DamageInitialPiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1174, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  if ( !glassSys->pieceStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1175, ASSERT_TYPE_ASSERT, "(glassSys->pieceStates)", (const char *)&queryFormat, "glassSys->pieceStates") )
    __debugbreak();
  Glass_ForEachPiece<unsigned int,void (*)(FxGlassSystem restrict *,unsigned int,unsigned int)>(glassSys, pieceIndex, Glass_DamagePiece);
}

/*
==============
Glass_DamagePiece
==============
*/
void Glass_DamagePiece(FxGlassSystem *glassSys, unsigned int initialPieceIndex, unsigned int pieceIndex)
{
  FxGlassPieceState *v3; 

  v3 = &glassSys->pieceStates[pieceIndex];
  if ( v3->initIndex == initialPieceIndex )
    v3->flags |= 1u;
}

/*
==============
Glass_DeleteInitialPiece
==============
*/
void Glass_DeleteInitialPiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1194, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  if ( !glassSys->pieceStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1195, ASSERT_TYPE_ASSERT, "(glassSys->pieceStates)", (const char *)&queryFormat, "glassSys->pieceStates") )
    __debugbreak();
  Glass_ForEachPiece<unsigned int,void (*)(FxGlassSystem restrict *,unsigned int,unsigned int)>(glassSys, pieceIndex, Glass_DeletePieceIfIndexMatches);
}

/*
==============
Glass_DeletePieceIfIndexMatches
==============
*/
void Glass_DeletePieceIfIndexMatches(FxGlassSystem *glassSys, unsigned int initialPieceIndex, unsigned int pieceIndex)
{
  if ( glassSys->pieceStates[pieceIndex].initIndex == initialPieceIndex )
    Glass_FreePiece(glassSys, pieceIndex);
}

/*
==============
Glass_DestroyInitialPiece
==============
*/
void Glass_DestroyInitialPiece(FxGlassSystem *glassSys, unsigned int initialPieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, Glass_BreakData *breakData)
{
  unsigned int v5; 
  Glass_BreakData *v6; 
  bool v8; 
  unsigned int pieceWordCount; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  FxGlassPieceState *pieceStates; 
  unsigned int v17; 
  FxGlassPieceState *v18; 
  unsigned __int64 v24; 
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v26; 
  __int64 v27; 
  FindInitialPieceData data; 

  v5 = initialPieceIndex;
  v6 = breakData;
  if ( glassSys->activePieceCount )
  {
    v8 = glassSys->pieceStates == NULL;
    data.initialPieceIndex = initialPieceIndex;
    data.foundOne = 0;
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1231, ASSERT_TYPE_ASSERT, "(glassSys->pieceStates)", (const char *)&queryFormat, "glassSys->pieceStates") )
      __debugbreak();
    pieceWordCount = glassSys->pieceWordCount;
    v10 = 0;
    if ( pieceWordCount )
    {
      v11 = 0i64;
      do
      {
        v12 = glassSys->isInUse[v11];
        while ( v12 )
        {
          v13 = __lzcnt(v12);
          if ( v13 >= 0x20 )
          {
            LODWORD(v27) = 32;
            LODWORD(v26) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v12 &= ~(0x80000000 >> v13);
          Glass_FindInitialPiece(glassSys, &data, v13 | (32 * v10));
        }
        ++v10;
        ++v11;
      }
      while ( v10 < pieceWordCount );
      v5 = initialPieceIndex;
      v6 = breakData;
    }
    if ( !data.foundOne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1234, ASSERT_TYPE_ASSERT, "(data.foundOne)", (const char *)&queryFormat, "data.foundOne") )
      __debugbreak();
    LODWORD(v14) = data.resultPieceIndex;
    Glass_MakeRoomForNewPieces(v6);
    if ( glassSys != &fxWorld.glassSys )
    {
      pieceStates = glassSys->pieceStates;
      _RBX = v5;
      v17 = Glass_AllocPiece(&fxWorld.glassSys, pieceStates[_RBX].vertCount, pieceStates[_RBX].holeDataCount, pieceStates[_RBX].crackDataCount, pieceStates[_RBX].fanDataCount);
      v14 = v17;
      if ( v17 != 0xFFFF )
      {
        v18 = fxWorld.glassSys.pieceStates;
        _RDX = glassSys->piecePlaces;
        _R11 = v17;
        fxWorld.glassSys.pieceStates[_R11].areaX2 = pieceStates[_RBX].areaX2;
        v18[_R11].defIndex = pieceStates[_RBX].defIndex;
        v18[_R11].supportMask = pieceStates[_RBX].supportMask;
        v18[_R11].flags = pieceStates[_RBX].flags;
        v18[_R11].initIndex = -1;
        v18[_R11].texCoordOrigin = pieceStates[_RBX].texCoordOrigin;
        __asm { vmovups xmm0, xmmword ptr [rbx+rdx] }
        _RCX = fxWorld.glassSys.piecePlaces;
        __asm
        {
          vmovups xmmword ptr [r11+rcx], xmm0
          vmovsd  xmm1, qword ptr [rbx+rdx+10h]
          vmovsd  qword ptr [r11+rcx+10h], xmm1
        }
        _RCX[_R11].frame.origin.v[2] = _RDX[_RBX].frame.origin.v[2];
        _RCX[_R11].radius = _RDX[_RBX].radius;
        v24 = v17;
        pieceDynamics = fxWorld.glassSys.pieceDynamics;
        fxWorld.glassSys.pieceDynamics[v24].fallTime = 0x7FFFFFFF;
        *(_QWORD *)&pieceDynamics[v24].physicsInstance = -1i64;
        pieceDynamics[v24].pendingCreation = 0;
        fxWorld.glassSys.halfThickness[v14] = fxWorld.glassGlob.defs[v18[_R11].defIndex].halfThickness;
        memcpy_0(&fxWorld.glassSys.geoData[v18[_R11].geoDataStart], &glassSys->geoData[pieceStates[_RBX].geoDataStart], 4 * (pieceStates[_RBX].vertCount + pieceStates[_RBX].holeDataCount + pieceStates[_RBX].crackDataCount + (unsigned __int64)pieceStates[_RBX].fanDataCount));
      }
      if ( (_DWORD)v14 == 0xFFFF )
        Com_PrintError(0, "Failed to copy transient glass piece to root system.\n");
      else
        Glass_FreePiece(glassSys, v5);
    }
    Glass_DestroyPiece(&fxWorld.glassSys, v14, impactPos, impactDir, v6);
  }
}

/*
==============
Glass_DrawDebug
==============
*/
void Glass_DrawDebug(const vec3_t *playerOrigin)
{
  unsigned int pieceWordCount; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  vec3_t playerOrigina; 

  __asm { vmovsd  xmm0, qword ptr [rcx] }
  pieceWordCount = fxWorld.glassSys.pieceWordCount;
  v3 = 0;
  playerOrigina.v[2] = playerOrigin->v[2];
  __asm { vmovsd  qword ptr [rsp+68h+playerOrigin], xmm0 }
  if ( fxWorld.glassSys.pieceWordCount )
  {
    v4 = 0i64;
    do
    {
      v5 = fxWorld.glassSys.isInUse[v4];
      while ( v5 )
      {
        v6 = __lzcnt(v5);
        if ( v6 >= 0x20 )
        {
          LODWORD(v8) = 32;
          LODWORD(v7) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        v5 &= ~(0x80000000 >> v6);
        Glass_DrawDebugPiece(&fxWorld.glassSys, &playerOrigina, v6 | (32 * v3));
      }
      ++v3;
      ++v4;
    }
    while ( v3 < pieceWordCount );
  }
}

/*
==============
Glass_DrawDebugPiece
==============
*/
void Glass_DrawDebugPiece(FxGlassSystem *glassSys, const vec3_t *playerOrigin, unsigned int pieceIndex)
{
  __int64 v6; 
  FxGlassPiecePlace *v8; 
  unsigned __int16 initIndex; 
  unsigned int initPieceCount; 
  __int64 v25; 
  int duration; 
  unsigned int v53; 
  vec3_t v54; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  char dest[32]; 
  void *retaddr; 

  _R11 = &retaddr;
  v6 = pieceIndex;
  v8 = &glassSys->piecePlaces[v6];
  initIndex = glassSys->pieceStates[v6].initIndex;
  if ( initIndex != 0xFFFF )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm5, xmm0, dword ptr [r15+10h]
      vmovss  xmm1, dword ptr [rdx+4]
      vsubss  xmm2, xmm1, dword ptr [r15+14h]
      vmovss  xmm0, dword ptr [rdx+8]
      vsubss  xmm3, xmm0, dword ptr [r15+18h]
    }
    _RAX = glass_debugDistance;
    __asm
    {
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm4, dword ptr [rax+28h]
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vcomiss xmm3, xmm0
    }
    initPieceCount = glassSys->initPieceCount;
    __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
    if ( initPieceCount )
    {
      v25 = initIndex;
      if ( initIndex >= initPieceCount )
      {
        v53 = initPieceCount;
        duration = initIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1583, ASSERT_TYPE_ASSERT, "(unsigned)( initialPieceIndex ) < (unsigned)( glassSys->initPieceCount )", "initialPieceIndex doesn't index glassSys->initPieceCount\n\t%i not in [0, %i)", duration, v53) )
          __debugbreak();
      }
      _RAX = glassSys->initPieceStates;
      _RDX = 52 * v25;
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rax+10h]
        vmovss  dword ptr [rbp+57h+end], xmm0
        vmovss  xmm1, dword ptr [rdx+rax+14h]
        vmovss  dword ptr [rbp+57h+end+4], xmm1
        vmovss  xmm0, dword ptr [rdx+rax+18h]
        vmovss  dword ptr [rbp+57h+end+8], xmm0
      }
      CG_DebugLine(&v8->frame.origin, &end, &colorWhite, 0, 0);
    }
    QuatToAxis(&v8->frame.quat, &axis);
    __asm
    {
      vmovss  xmm6, cs:__real@40a00000
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis]
      vaddss  xmm2, xmm1, dword ptr [r15+10h]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+4]
      vmovss  dword ptr [rbp+57h+var_A0], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+14h]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+8]
      vmovss  dword ptr [rbp+57h+var_A0+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+18h]
      vmovss  dword ptr [rbp+57h+var_A0+8], xmm2
    }
    CG_DebugLine(&v8->frame.origin, &v54, &colorMdGrey, 0, 0);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+0Ch]
      vaddss  xmm2, xmm1, dword ptr [r15+10h]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+10h]
      vmovss  dword ptr [rbp+57h+var_A0], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+14h]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+14h]
      vmovss  dword ptr [rbp+57h+var_A0+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+18h]
      vmovss  dword ptr [rbp+57h+var_A0+8], xmm2
    }
    CG_DebugLine(&v8->frame.origin, &v54, &colorMdGrey, 0, 0);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+18h]
      vaddss  xmm2, xmm1, dword ptr [r15+10h]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+1Ch]
      vmovss  dword ptr [rbp+57h+var_A0], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+14h]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+20h]
      vmovss  dword ptr [rbp+57h+var_A0+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [r15+18h]
      vmovss  dword ptr [rbp+57h+var_A0+8], xmm2
    }
    CG_DebugLine(&v8->frame.origin, &v54, &colorMdGrey, 0, 0);
    Com_sprintf(dest, 0x20ui64, "%d", pieceIndex);
    __asm { vmovss  xmm2, cs:__real@3e800000; scale }
    CL_AddDebugString(&v8->frame.origin, &colorMdGrey, *(float *)&_XMM2, dest, 0, 0);
    __asm { vmovaps xmm6, [rsp+0E0h+var_38+8] }
  }
}

/*
==============
Glass_FindInitialPiece
==============
*/
void Glass_FindInitialPiece(FxGlassSystem *glassSys, FindInitialPieceData *data, unsigned int pieceIndex)
{
  if ( glassSys->pieceStates[pieceIndex].initIndex == data->initialPieceIndex )
  {
    if ( data->foundOne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1215, ASSERT_TYPE_ASSERT, "(!data->foundOne)", (const char *)&queryFormat, "!data->foundOne") )
      __debugbreak();
    data->resultPieceIndex = pieceIndex;
    data->foundOne = 1;
  }
}

/*
==============
Glass_FreeActivePiece
==============
*/
void Glass_FreeActivePiece(FxGlassSystem *glassSys, unsigned int unused, unsigned int pieceIndex)
{
  Glass_FreePiece(glassSys, pieceIndex);
}

/*
==============
Glass_FreeAllPieces
==============
*/
void Glass_FreeAllPieces(void)
{
  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 564, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  Glass_ForEachSystem_void____cdecl___FxGlassSystem_____restrict__(Glass_FreeSystemPieces);
}

/*
==============
Glass_FreeClientMemory
==============
*/
void Glass_FreeClientMemory(void)
{
  s_glassActiveList.states = NULL;
  s_removePiecesData.priorities = NULL;
  s_removePiecesData.maxPriorityCount = 0;
}

/*
==============
Glass_FreePiece
==============
*/
void Glass_FreePiece(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  FxGlassSystem *v2; 
  unsigned __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int firstFreePiece; 
  unsigned int *v7; 
  unsigned int *isInUse; 
  LocalClientNum_t v9; 
  __int64 v10; 
  char v11; 
  volatile int v12; 
  bool *p_skipCreation; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  __int64 v17; 
  ParticleDeferredPhysicsDestroyData (*v18)[2048]; 
  __int64 v19; 
  __int64 v20; 
  connstate_t *p_connectionState; 
  __int64 v22; 
  __int64 v24; 
  unsigned int pieceLimit; 
  __int64 v27; 

  v2 = glassSys;
  v3 = pieceIndex;
  if ( pieceIndex >= glassSys->pieceLimit )
  {
    pieceLimit = glassSys->pieceLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", pieceIndex, pieceLimit) )
      __debugbreak();
  }
  v4 = 0x80000000 >> (v3 & 0x1F);
  v5 = v3 >> 5;
  if ( (v4 & v2->isInUse[v5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 359, ASSERT_TYPE_ASSERT, "(glassSys->isInUse[pieceIndex >> 5] & BitShiftMasked( pieceIndex ))", (const char *)&queryFormat, "glassSys->isInUse[pieceIndex >> 5] & BitShiftMasked( pieceIndex )") )
    __debugbreak();
  firstFreePiece = v2->firstFreePiece;
  v7 = (unsigned int *)&v2->piecePlaces[v3];
  if ( firstFreePiece >= v2->pieceLimit && firstFreePiece != 0xFFFF )
  {
    LODWORD(v22) = v2->firstFreePiece;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 363, ASSERT_TYPE_ASSERT, "( ( glassSys->firstFreePiece < glassSys->pieceLimit || glassSys->firstFreePiece == 0xffff ) )", "( glassSys->firstFreePiece ) = %i", v22) )
      __debugbreak();
  }
  *v7 = v2->firstFreePiece;
  v2->firstFreePiece = v3;
  if ( (unsigned int)v3 >= v2->pieceLimit && (_DWORD)v3 != 0xFFFF )
  {
    LODWORD(v22) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 368, ASSERT_TYPE_ASSERT, "( ( glassSys->firstFreePiece < glassSys->pieceLimit || glassSys->firstFreePiece == 0xffff ) )", "( glassSys->firstFreePiece ) = %i", v22) )
      __debugbreak();
  }
  isInUse = v2->isInUse;
  --v2->activePieceCount;
  isInUse[v5] &= ~v4;
  v9 = LOCAL_CLIENT_0;
  v10 = (__int64)&v2->pieceDynamics[v3];
  v27 = v10;
  if ( *(_BYTE *)(v10 + 36) )
  {
    v11 = 0;
    v12 = 0;
    if ( g_particleDeferredPhysicsGlassCreateListCount[0] <= 0 )
      goto LABEL_22;
    p_skipCreation = &g_particleDeferredPhysicsGlassCreateList[0][0].skipCreation;
    do
    {
      if ( *(_DWORD *)(p_skipCreation - 29) == (_DWORD)v3 )
      {
        *p_skipCreation = 1;
        v11 = 1;
      }
      ++v12;
      p_skipCreation += 40;
    }
    while ( v12 < g_particleDeferredPhysicsGlassCreateListCount[0] );
    if ( !v11 )
    {
LABEL_22:
      LODWORD(v24) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 599, ASSERT_TYPE_ASSERT, "(foundPiece)", "%s\n\tCould not find glass piece %d in deferred physics create list", "foundPiece", v24) )
        __debugbreak();
    }
    *(_BYTE *)(v10 + 36) = 0;
  }
  v14 = *(_DWORD *)(v10 + 4);
  if ( v14 != -1 )
  {
    v15 = *(_DWORD *)(v10 + 8);
    if ( ((unsigned __int8)g_particleDeferredPhysicsDestroyListCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)g_particleDeferredPhysicsDestroyListCount) )
      __debugbreak();
    v16 = _InterlockedExchangeAdd(g_particleDeferredPhysicsDestroyListCount, 1u);
    if ( (unsigned int)v16 >= 0x800 )
    {
      LODWORD(v24) = 2048;
      LODWORD(v22) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 471, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX\n\t%i not in [0, %i)", v22, v24) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 474, ASSERT_TYPE_ASSERT, "(index < PARTICLE_DEFERRED_PHYSICS_LIST_MAX)", (const char *)&queryFormat, "index < PARTICLE_DEFERRED_PHYSICS_LIST_MAX") )
        __debugbreak();
    }
    v17 = v16;
    if ( v16 > 0 )
    {
      v18 = g_particleDeferredPhysicsDestroyList;
      v19 = v17;
      do
      {
        if ( (*(_DWORD *)v18 == v14 || (*v18)[0].physicsInstanceID.detailInstanceId == v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 478, ASSERT_TYPE_ASSERT, "(data->physicsInstanceID.instanceId != instanceId && data->physicsInstanceID.detailInstanceId != detailInstanceId)", (const char *)&queryFormat, "data->physicsInstanceID.instanceId != instanceId && data->physicsInstanceID.detailInstanceId != detailInstanceId") )
          __debugbreak();
        v18 = (ParticleDeferredPhysicsDestroyData (*)[2048])((char *)v18 + 24);
        --v19;
      }
      while ( v19 );
      v2 = glassSys;
      v10 = v27;
      v9 = LOCAL_CLIENT_0;
    }
    v20 = v17;
    g_particleDeferredPhysicsDestroyList[0][v20].physicsInstanceID.detailInstanceId = v15;
    g_particleDeferredPhysicsDestroyList[0][v20].physicsInstanceID.instanceId = v14;
    g_particleDeferredPhysicsDestroyList[0][v20].onImpactCB = NULL;
    *(_QWORD *)(v10 + 4) = -1i64;
  }
  v2->needToCompactData = 1;
  Glass_UnlinkPiece(v2, v3);
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v9 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v24) = 2;
        LODWORD(v22) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v22, v24) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
        FX_MarkGlassDetachAll(v9, v3);
      ++v9;
      p_connectionState += 110;
    }
    while ( v9 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
Glass_FreePiecePhysicsObject
==============
*/
void Glass_FreePiecePhysicsObject(FxGlassPieceDynamics *pieceDynamics)
{
  unsigned int physicsDetailInstance; 
  unsigned int physicsInstance; 
  int v4; 
  __int64 v5; 
  ParticleDeferredPhysicsDestroyData (*v6)[2048]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 

  physicsDetailInstance = pieceDynamics->physicsDetailInstance;
  physicsInstance = pieceDynamics->physicsInstance;
  if ( ((unsigned __int8)g_particleDeferredPhysicsDestroyListCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)g_particleDeferredPhysicsDestroyListCount) )
    __debugbreak();
  v4 = _InterlockedExchangeAdd(g_particleDeferredPhysicsDestroyListCount, 1u);
  if ( (unsigned int)v4 >= 0x800 )
  {
    v10 = 2048;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 471, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_LIST_MAX\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 474, ASSERT_TYPE_ASSERT, "(index < PARTICLE_DEFERRED_PHYSICS_LIST_MAX)", (const char *)&queryFormat, "index < PARTICLE_DEFERRED_PHYSICS_LIST_MAX") )
      __debugbreak();
  }
  v5 = v4;
  if ( v4 > 0 )
  {
    v6 = g_particleDeferredPhysicsDestroyList;
    v7 = v5;
    do
    {
      if ( (*(_DWORD *)v6 == physicsInstance || (*v6)[0].physicsInstanceID.detailInstanceId == physicsDetailInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 478, ASSERT_TYPE_ASSERT, "(data->physicsInstanceID.instanceId != instanceId && data->physicsInstanceID.detailInstanceId != detailInstanceId)", (const char *)&queryFormat, "data->physicsInstanceID.instanceId != instanceId && data->physicsInstanceID.detailInstanceId != detailInstanceId") )
        __debugbreak();
      v6 = (ParticleDeferredPhysicsDestroyData (*)[2048])((char *)v6 + 24);
      --v7;
    }
    while ( v7 );
  }
  v8 = v5;
  g_particleDeferredPhysicsDestroyList[0][v8].physicsInstanceID.instanceId = physicsInstance;
  g_particleDeferredPhysicsDestroyList[0][v8].physicsInstanceID.detailInstanceId = physicsDetailInstance;
  g_particleDeferredPhysicsDestroyList[0][v8].onImpactCB = NULL;
  *(_QWORD *)&pieceDynamics->physicsInstance = -1i64;
}

/*
==============
Glass_FreeSystemPieces
==============
*/
void Glass_FreeSystemPieces(FxGlassSystem *glassSys)
{
  unsigned int pieceWordCount; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 525, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  pieceWordCount = glassSys->pieceWordCount;
  v3 = 0;
  if ( pieceWordCount )
  {
    v4 = 0i64;
    do
    {
      v5 = glassSys->isInUse[v4];
      while ( v5 )
      {
        v6 = __lzcnt(v5);
        if ( v6 >= 0x20 )
        {
          LODWORD(v8) = 32;
          LODWORD(v7) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        v5 &= ~(0x80000000 >> v6);
        Glass_FreeActivePiece(glassSys, 0, v6 | (32 * v3));
      }
      ++v3;
      ++v4;
    }
    while ( v3 < pieceWordCount );
  }
  Glass_CompactData(glassSys);
}

/*
==============
Glass_GetConvexHullMask
==============
*/
__int64 Glass_GetConvexHullMask(const FxGlassSystem *glassSys, const FxGlassPieceState *pieceState)
{
  unsigned __int8 vertCount; 
  const FxGlassGeometryData *v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  char v10; 
  unsigned __int8 v11; 
  unsigned int v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  FxGlassGeometryData v15; 
  const FxGlassGeometryData *v16; 
  FxGlassGeometryData v17; 
  int v18; 
  int v19; 
  unsigned __int8 v20; 
  int v21; 
  int x; 
  int v23; 
  int v24; 
  unsigned __int8 v25; 
  __int64 v26; 
  unsigned __int8 v27; 
  __int64 v28; 
  bool v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  unsigned __int8 v33; 
  __int64 v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v38; 
  char *fmt; 
  __int64 v40; 
  __int64 v41; 
  unsigned __int8 v42; 
  unsigned __int8 v43; 
  unsigned int v44; 
  unsigned int v45; 
  const FxGlassGeometryData *v46; 
  const FxGlassGeometryData *v47; 
  __int64 v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  char v52[64]; 

  vertCount = pieceState->vertCount;
  v3 = &glassSys->geoData[pieceState->geoDataStart];
  v47 = v3;
  if ( vertCount < 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 184, ASSERT_TYPE_ASSERT, "(vertexCount >= 3)", (const char *)&queryFormat, "vertexCount >= 3") )
    __debugbreak();
  if ( vertCount > 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 185, ASSERT_TYPE_ASSERT, "(vertexCount <= 32)", (const char *)&queryFormat, "vertexCount <= GLASS_VERT_PER_BORDER_LIMIT") )
    __debugbreak();
  LOBYTE(fmt) = 2;
  v4 = vertCount + 1;
  v5 = vertCount - 2i64;
  v6 = v4;
  v7 = vertCount - 2;
  v52[v5] = 2;
  v49 = v4;
  v8 = vertCount - 1i64;
  v44 = v7;
  v45 = v4;
  v48 = v5;
  v52[v4] = 2;
  if ( Glass_IsVertexRightOfEdge(v3, vertCount, 0, 1u, (const unsigned __int8)fmt) )
  {
    if ( v8 < 0x40 )
    {
      v52[v8] = 0;
      v10 = 1;
      goto LABEL_12;
    }
LABEL_97:
    j___report_rangecheckfailure(v9);
    JUMPOUT(0x1419BBABFi64);
  }
  v52[v8] = 1;
  if ( vertCount >= 0x40u )
    goto LABEL_97;
  v10 = 0;
LABEL_12:
  v11 = 3;
  v42 = 3;
  v52[vertCount] = v10;
  if ( vertCount > 3u )
  {
    v51 = (__int64)&v38 + 127;
    v46 = v47 + 3;
    while ( 1 )
    {
      if ( v7 >= 0x40 )
      {
        LODWORD(v41) = 64;
        LODWORD(v40) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( front ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "front doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      v12 = v7 + 1;
      if ( v12 >= 0x40 )
      {
        LODWORD(v41) = 64;
        LODWORD(v40) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( front + 1 ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "front + 1 doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( v4 - 1 >= 0x40 )
      {
        LODWORD(v41) = 64;
        LODWORD(v40) = v4 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( back - 1 ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "back - 1 doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      v13 = v52[v5];
      v14 = v52[v48 + 1];
      v43 = *(_BYTE *)(v51 + v6);
      if ( v13 != v52[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 222, ASSERT_TYPE_ASSERT, "(hullIndicesDeque[front] == hullIndicesDeque[back])", (const char *)&queryFormat, "hullIndicesDeque[front] == hullIndicesDeque[back]") )
        __debugbreak();
      if ( v13 >= vertCount )
      {
        LODWORD(v41) = vertCount;
        LODWORD(v40) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex0 ) < (unsigned)( vertexCount )", "edgeVertex0 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( v14 >= vertCount )
      {
        LODWORD(v41) = vertCount;
        LODWORD(v40) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex1 ) < (unsigned)( vertexCount )", "edgeVertex1 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( v11 >= vertCount )
      {
        LODWORD(v41) = vertCount;
        LODWORD(v40) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( testVertex ) < (unsigned)( vertexCount )", "testVertex doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      v15 = v47[v13];
      v16 = &v47[v13];
      v17 = v47[v14];
      v18 = (v17.vert.x - v15.vert.x) * ((__int16)HIWORD(*(unsigned int *)v46) - v17.vert.y);
      v19 = (v46->vert.x - v17.vert.x) * (v17.vert.y - v15.vert.y);
      if ( v43 >= vertCount )
      {
        LODWORD(v41) = vertCount;
        LODWORD(v40) = v43;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex0 ) < (unsigned)( vertexCount )", "edgeVertex0 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( v13 >= vertCount )
      {
        LODWORD(v41) = vertCount;
        LODWORD(v40) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex1 ) < (unsigned)( vertexCount )", "edgeVertex1 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( v42 >= vertCount )
      {
        LODWORD(v41) = vertCount;
        LODWORD(v40) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( testVertex ) < (unsigned)( vertexCount )", "testVertex doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      v20 = v43;
      v21 = (__int16)HIWORD(*(unsigned int *)v16);
      x = v16->vert.x;
      v23 = (v46->vert.x - x) * (v21 - (__int16)HIWORD(*(_DWORD *)&v47[v43]));
      v24 = (x - (__int16)*(_DWORD *)&v47[v43]) * ((__int16)HIWORD(*(unsigned int *)v46) - v21);
      v50 = v24;
      if ( v18 >= v19 )
        goto LABEL_47;
      if ( v24 >= v23 )
        break;
      v25 = v42;
      v4 = v45;
      v6 = v49;
      v7 = v44;
LABEL_87:
      ++v46;
      v5 = v48;
      v11 = v25 + 1;
      v42 = v11;
      if ( v11 >= vertCount )
        goto LABEL_88;
    }
    if ( v18 < v19 )
    {
      v25 = v42;
      v26 = v48;
    }
    else
    {
LABEL_47:
      v25 = v42;
      v26 = v48;
      do
      {
        v44 = v12;
        ++v26;
        ++v12;
        v27 = v14;
        if ( v12 >= 0x40 )
        {
          LODWORD(v41) = 64;
          LODWORD(v40) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( front + 1 ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "front + 1 doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        v14 = v52[v26 + 1];
        if ( v27 >= vertCount )
        {
          LODWORD(v41) = vertCount;
          LODWORD(v40) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex0 ) < (unsigned)( vertexCount )", "edgeVertex0 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( v14 >= vertCount )
        {
          LODWORD(v41) = vertCount;
          LODWORD(v40) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex1 ) < (unsigned)( vertexCount )", "edgeVertex1 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( v25 >= vertCount )
        {
          LODWORD(v41) = vertCount;
          LODWORD(v40) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( testVertex ) < (unsigned)( vertexCount )", "testVertex doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
      }
      while ( ((__int16)*(_DWORD *)&v47[v14] - (__int16)*(_DWORD *)&v47[v27]) * ((__int16)HIWORD(*(unsigned int *)v46) - (__int16)HIWORD(*(_DWORD *)&v47[v14])) >= (v46->vert.x - (__int16)*(_DWORD *)&v47[v14]) * ((__int16)HIWORD(*(_DWORD *)&v47[v14]) - (__int16)HIWORD(*(_DWORD *)&v47[v27])) );
      v20 = v43;
    }
    v28 = v26 - 1;
    v7 = v44 - 1;
    v48 = v28;
    v44 = v7;
    if ( v7 >= 0x40 )
    {
      LODWORD(v41) = 64;
      LODWORD(v40) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 246, ASSERT_TYPE_ASSERT, "(unsigned)( front ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "front doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    v29 = v50 < v23;
    v30 = v49;
    v52[v28] = v25;
    v31 = v45;
    if ( !v29 )
    {
      v32 = (__int64)v47;
      do
      {
        --v31;
        --v30;
        v33 = v20;
        if ( (unsigned int)(v31 - 1) >= 0x40 )
        {
          LODWORD(v41) = 64;
          LODWORD(v40) = v31 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( back - 1 ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "back - 1 doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        v20 = *(_BYTE *)(v51 + v30);
        if ( v20 >= vertCount )
        {
          LODWORD(v41) = vertCount;
          LODWORD(v40) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex0 ) < (unsigned)( vertexCount )", "edgeVertex0 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( v33 >= vertCount )
        {
          LODWORD(v41) = vertCount;
          LODWORD(v40) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex1 ) < (unsigned)( vertexCount )", "edgeVertex1 doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( v25 >= vertCount )
        {
          LODWORD(v41) = vertCount;
          LODWORD(v40) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( testVertex ) < (unsigned)( vertexCount )", "testVertex doesn't index vertexCount\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
      }
      while ( ((__int16)*(_DWORD *)(v32 + 4i64 * v33) - (__int16)*(_DWORD *)(v32 + 4i64 * v20)) * ((__int16)HIWORD(*(unsigned int *)v46) - (__int16)HIWORD(*(_DWORD *)(v32 + 4i64 * v33))) >= (v46->vert.x - (__int16)*(_DWORD *)(v32 + 4i64 * v33)) * ((__int16)HIWORD(*(_DWORD *)(v32 + 4i64 * v33)) - (__int16)HIWORD(*(_DWORD *)(v32 + 4i64 * v20))) );
      v7 = v44;
    }
    v4 = v31 + 1;
    v6 = v30 + 1;
    v45 = v4;
    v49 = v6;
    if ( v4 >= 0x40 )
    {
      LODWORD(v41) = 64;
      LODWORD(v40) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( back ) < (unsigned)( ( sizeof( *array_counter( hullIndicesDeque ) ) + 0 ) )", "back doesn't index ARRAY_COUNT( hullIndicesDeque )\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    v52[v6] = v25;
    goto LABEL_87;
  }
LABEL_88:
  v34 = (int)v44;
  v35 = 0;
  if ( v52[v44] != v52[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 266, ASSERT_TYPE_ASSERT, "(hullIndicesDeque[front] == hullIndicesDeque[back])", (const char *)&queryFormat, "hullIndicesDeque[front] == hullIndicesDeque[back]") )
    __debugbreak();
  for ( ; v34 < (int)v4; v35 |= 0x80000000 >> v36 )
  {
    v36 = (unsigned __int8)v52[v34];
    if ( v36 >= 0x20 )
    {
      LODWORD(v41) = 32;
      LODWORD(v40) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    ++v34;
  }
  return v35;
}

/*
==============
Glass_GetDamagedSound
==============
*/
SndAliasList *Glass_GetDamagedSound(unsigned int initialPieceIndex)
{
  _RAX = Glass_GetDefForInitialPiece(initialPieceIndex);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax+40h]
    vextractf128 xmm0, ymm2, 1
    vmovq   rcx, xmm0; name
  }
  return SND_FindAlias(_RCX);
}

/*
==============
Glass_GetDefForInitialPiece
==============
*/
FxGlassDef *Glass_GetDefForInitialPiece(unsigned int initialPieceIndex)
{
  unsigned int v1; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int globalPieceStartIndex; 
  FxGlassTransientLookup v6; 
  __int64 v7; 
  __int64 p_initPieceStates; 
  __int64 p_initPieceCount; 
  unsigned int v10; 
  __int64 v12; 
  __int64 v14; 
  unsigned int totalGlassInitPieceCount; 
  unsigned int v16; 
  int v17; 

  v1 = initialPieceIndex;
  if ( fxWorld.transientZoneCount <= 1 || !fxWorld.glassGlob.glassTransientLookupCount )
    goto LABEL_25;
  if ( initialPieceIndex >= cm.totalGlassInitPieceCount )
  {
    totalGlassInitPieceCount = cm.totalGlassInitPieceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( initialPieceIndex ) < (unsigned)( cm.totalGlassInitPieceCount )", "initialPieceIndex doesn't index cm.totalGlassInitPieceCount\n\t%i not in [0, %i)", initialPieceIndex, totalGlassInitPieceCount) )
      __debugbreak();
  }
  v2 = 0;
  v3 = fxWorld.glassGlob.glassTransientLookupCount - 1;
  if ( (unsigned int)v3 > 1 )
  {
    do
    {
      v4 = v2 + ((unsigned int)(v3 - v2) >> 1);
      globalPieceStartIndex = fxWorld.glassGlob.glassTransientLookup[v4].globalPieceStartIndex;
      if ( globalPieceStartIndex >= v1 )
        v3 = (unsigned int)v4;
      if ( globalPieceStartIndex >= v1 )
        LODWORD(v4) = v2;
      v2 = v4;
    }
    while ( (unsigned int)(v3 - v4) > 1 );
  }
  if ( v1 >= fxWorld.glassGlob.glassTransientLookup[v3].globalPieceStartIndex )
    v6 = fxWorld.glassGlob.glassTransientLookup[v3];
  else
    v6 = fxWorld.glassGlob.glassTransientLookup[v2];
  if ( v1 < v6.globalPieceStartIndex )
  {
    v17 = v6.globalPieceStartIndex;
    v16 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1361, ASSERT_TYPE_ASSERT, "( initialPieceIndex ) >= ( transientLookup.globalPieceStartIndex )", "%s >= %s\n\t%u, %u", "initialPieceIndex", "transientLookup.globalPieceStartIndex", v16, v17) )
      __debugbreak();
  }
  v1 -= v6.globalPieceStartIndex;
  if ( v6.transientIndex >= fxWorld.transientZoneCount )
  {
    LODWORD(v14) = fxWorld.transientZoneCount;
    LODWORD(v12) = v6.transientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1363, ASSERT_TYPE_ASSERT, "(unsigned)( transientLookup.transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientLookup.transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( v6.transientIndex )
  {
    v7 = *(_QWORD *)&fxWorld.activeTransientZones[4 * v6.transientIndex - 6144];
    if ( v7 )
    {
      p_initPieceStates = v7 + 152;
      p_initPieceCount = v7 + 148;
    }
    else
    {
      p_initPieceStates = 136i64;
      p_initPieceCount = 132i64;
    }
  }
  else
  {
LABEL_25:
    p_initPieceCount = (__int64)&fxWorld.glassSys.initPieceCount;
    p_initPieceStates = (__int64)&fxWorld.glassSys.initPieceStates;
  }
  if ( v1 >= *(_DWORD *)p_initPieceCount )
  {
    LODWORD(v14) = *(_DWORD *)p_initPieceCount;
    LODWORD(v12) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1387, ASSERT_TYPE_ASSERT, "(unsigned)( localInitialPieceIndex ) < (unsigned)( glassSys->initPieceCount )", "localInitialPieceIndex doesn't index glassSys->initPieceCount\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  v10 = *(unsigned __int8 *)(52i64 * v1 + *(_QWORD *)p_initPieceStates + 48);
  if ( v10 >= fxWorld.glassGlob.defCount )
  {
    LODWORD(v14) = fxWorld.glassGlob.defCount;
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1389, ASSERT_TYPE_ASSERT, "(unsigned)( defIndex ) < (unsigned)( fxWorld.glassGlob.defCount )", "defIndex doesn't index fxWorld.glassGlob.defCount\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  return &fxWorld.glassGlob.defs[(unsigned __int8)v10];
}

/*
==============
Glass_GetDestroyedQuietSound
==============
*/
SndAliasList *Glass_GetDestroyedQuietSound(unsigned int initialPieceIndex)
{
  FxGlassDef *DefForInitialPiece; 

  DefForInitialPiece = Glass_GetDefForInitialPiece(initialPieceIndex);
  return SND_FindAlias(DefForInitialPiece->destroyedQuietSound.name);
}

/*
==============
Glass_GetDestroyedSound
==============
*/
SndAliasList *Glass_GetDestroyedSound(unsigned int initialPieceIndex)
{
  _RAX = Glass_GetDefForInitialPiece(initialPieceIndex);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax+40h]
    vextractf128 xmm0, ymm2, 1
    vpextrq rcx, xmm0, 1; name
  }
  return SND_FindAlias(_RCX);
}

/*
==============
Glass_GetInertiaTensor
==============
*/

void __fastcall Glass_GetInertiaTensor(FxGlassInertiaTensor *tensor, const FxGlassGeometryData *geoData, unsigned int vertCount, double halfThickness, float totalMass)
{
  unsigned int v24; 
  bool v25; 
  vec2_t *v27; 
  vec2_t *v31; 
  __int64 v32; 
  __int64 v33; 
  bool v34; 
  bool v38; 
  bool v45; 
  bool v48; 
  bool v51; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  vec2_t v1; 
  vec2_t v68; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  *(_QWORD *)&tensor->xx = 0i64;
  *(_QWORD *)&tensor->zz = 0i64;
  _RBX = tensor;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rsp+4A8h+v1], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rsp+4A8h+v1+4], xmm1
  }
  _R11 = vertCount - 1;
  _RDX = &v1 + _R11;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rdx], xmm0
    vmovss  dword ptr [rsp+r11*8+4A8h+v1+4], xmm1
    vmovaps xmm7, xmm3
  }
  *(float *)&_XMM0 = Glass_AccumInertiaTensorForTriangleWedge(tensor, _RDX, &v1, halfThickness);
  __asm { vmovaps xmm6, xmm0 }
  v25 = v24 <= 1;
  if ( v24 > 1 )
  {
    _R9 = (float *)&v68 + 1;
    v27 = &v68;
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [r9-4], xmm1
        vmovaps xmm3, xmm7; halfThickness
        vmovss  dword ptr [r9], xmm0
      }
      *(float *)&_XMM0 = Glass_AccumInertiaTensorForTriangleWedge(_RBX, v27 - 1, v27, *(double *)&_XMM3);
      v27 = v31 + 1;
      _R9 = (float *)(v32 + 8);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v34 = v33-- == 0;
      v25 = v34 || v33 == 0;
    }
    while ( v33 );
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
    vxorpd  xmm8, xmm8, xmm8
  }
  if ( v25 )
  {
    __asm
    {
      vmovsd  [rsp+4A8h+var_468], xmm8
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+4A8h+var_470], xmm0
    }
    v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 132, ASSERT_TYPE_ASSERT, "( totalVolume ) > ( 0.0f )", "%s > %s\n\t%g, %g", "totalVolume", "0.0f", v57, v62);
    v25 = !v38;
    if ( v38 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+4A8h+totalMass]
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, cs:__real@392aaaab
    vshufps xmm3, xmm3, xmm3, 0
    vmulps  xmm1, xmm3, xmmword ptr [rbx]
    vcomiss xmm1, xmm7
    vmovups xmmword ptr [rbx], xmm1
  }
  if ( v25 )
  {
    __asm
    {
      vmovsd  [rsp+4A8h+var_468], xmm8
      vcvtss2sd xmm0, xmm1, xmm1
      vmovsd  [rsp+4A8h+var_470], xmm0
    }
    v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 140, ASSERT_TYPE_ASSERT, "( tensor->xx ) > ( 0.0f )", "%s > %s\n\t%g, %g", "tensor->xx", "0.0f", v58, v63);
    v25 = !v45;
    if ( v45 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, xmm7
  }
  if ( v25 )
  {
    __asm
    {
      vmovsd  [rsp+4A8h+var_468], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+4A8h+var_470], xmm0
    }
    v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 141, ASSERT_TYPE_ASSERT, "( tensor->yy ) > ( 0.0f )", "%s > %s\n\t%g, %g", "tensor->yy", "0.0f", v59, v64);
    v25 = !v48;
    if ( v48 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, xmm7
  }
  if ( v25 )
  {
    __asm
    {
      vmovsd  [rsp+4A8h+var_468], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+4A8h+var_470], xmm0
    }
    v51 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 142, ASSERT_TYPE_ASSERT, "( tensor->zz ) > ( 0.0f )", "%s > %s\n\t%g, %g", "tensor->zz", "0.0f", v60, v65);
    v25 = !v51;
    if ( v51 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm7 }
  if ( v25 )
  {
    __asm
    {
      vmovsd  [rsp+4A8h+var_468], xmm8
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+4A8h+var_470], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 143, ASSERT_TYPE_ASSERT, "( totalVolume ) > ( 0.0f )", "%s > %s\n\t%g, %g", "totalVolume", "0.0f", v61, v66) )
      __debugbreak();
  }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Glass_GetInitialPieceAreaX2
==============
*/
float Glass_GetInitialPieceAreaX2(const FxGlassSystem *glassSys, unsigned int initialPieceIndex)
{
  __int64 v3; 
  unsigned int initPieceCount; 

  v3 = initialPieceIndex;
  if ( initialPieceIndex >= glassSys->initPieceCount )
  {
    initPieceCount = glassSys->initPieceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1573, ASSERT_TYPE_ASSERT, "(unsigned)( initialPieceIndex ) < (unsigned)( glassSys->initPieceCount )", "initialPieceIndex doesn't index glassSys->initPieceCount\n\t%i not in [0, %i)", initialPieceIndex, initPieceCount) )
      __debugbreak();
  }
  _RAX = glassSys->initPieceStates;
  _RCX = 52 * v3;
  __asm { vmovss  xmm0, dword ptr [rcx+rax+2Ch] }
  return *(float *)&_XMM0;
}

/*
==============
Glass_GetInitialPieceAxis
==============
*/
void Glass_GetInitialPieceAxis(const FxGlassSystem *glassSys, unsigned int initialPieceIndex, tmat33_t<vec3_t> *outAxis)
{
  __int64 v4; 
  unsigned int initPieceCount; 

  v4 = initialPieceIndex;
  if ( initialPieceIndex >= glassSys->initPieceCount )
  {
    initPieceCount = glassSys->initPieceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1591, ASSERT_TYPE_ASSERT, "(unsigned)( initialPieceIndex ) < (unsigned)( glassSys->initPieceCount )", "initialPieceIndex doesn't index glassSys->initPieceCount\n\t%i not in [0, %i)", initialPieceIndex, initPieceCount) )
      __debugbreak();
  }
  QuatToAxis(&glassSys->initPieceStates[v4].frame.quat, outAxis);
}

/*
==============
Glass_GetInitialPieceCenter
==============
*/
void Glass_GetInitialPieceCenter(const FxGlassSystem *glassSys, unsigned int initialPieceIndex, vec3_t *outCenter)
{
  __int64 v4; 
  FxGlassInitPieceState *initPieceStates; 
  unsigned int initPieceCount; 

  v4 = initialPieceIndex;
  if ( initialPieceIndex >= glassSys->initPieceCount )
  {
    initPieceCount = glassSys->initPieceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1583, ASSERT_TYPE_ASSERT, "(unsigned)( initialPieceIndex ) < (unsigned)( glassSys->initPieceCount )", "initialPieceIndex doesn't index glassSys->initPieceCount\n\t%i not in [0, %i)", initialPieceIndex, initPieceCount) )
      __debugbreak();
  }
  initPieceStates = glassSys->initPieceStates;
  outCenter->v[0] = initPieceStates[v4].frame.origin.v[0];
  outCenter->v[1] = initPieceStates[v4].frame.origin.v[1];
  outCenter->v[2] = initPieceStates[v4].frame.origin.v[2];
}

/*
==============
Glass_GetSystemForInitialPiece
==============
*/
FxGlassSystem *Glass_GetSystemForInitialPiece(unsigned int initialPieceIndex, unsigned int *outLocalInitialPieceIndex)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int globalPieceStartIndex; 
  FxGlassTransientLookup v8; 
  int v9; 
  int v10; 
  FxGlassSystem *result; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int16 transientIndex; 

  if ( fxWorld.transientZoneCount > 1 && fxWorld.glassGlob.glassTransientLookupCount )
  {
    if ( initialPieceIndex >= cm.totalGlassInitPieceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( initialPieceIndex ) < (unsigned)( cm.totalGlassInitPieceCount )", "initialPieceIndex doesn't index cm.totalGlassInitPieceCount\n\t%i not in [0, %i)", initialPieceIndex, cm.totalGlassInitPieceCount) )
      __debugbreak();
    v4 = 0;
    v5 = fxWorld.glassGlob.glassTransientLookupCount - 1;
    if ( (unsigned int)v5 > 1 )
    {
      do
      {
        v6 = v4 + ((unsigned int)(v5 - v4) >> 1);
        globalPieceStartIndex = fxWorld.glassGlob.glassTransientLookup[v6].globalPieceStartIndex;
        if ( globalPieceStartIndex >= initialPieceIndex )
          v5 = (unsigned int)v6;
        if ( globalPieceStartIndex >= initialPieceIndex )
          LODWORD(v6) = v4;
        v4 = v6;
      }
      while ( (unsigned int)(v5 - v6) > 1 );
    }
    if ( initialPieceIndex >= fxWorld.glassGlob.glassTransientLookup[v5].globalPieceStartIndex )
      v8 = fxWorld.glassGlob.glassTransientLookup[v5];
    else
      v8 = fxWorld.glassGlob.glassTransientLookup[v4];
    transientIndex = v8.transientIndex;
    if ( initialPieceIndex < v8.globalPieceStartIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1361, ASSERT_TYPE_ASSERT, "( initialPieceIndex ) >= ( transientLookup.globalPieceStartIndex )", "%s >= %s\n\t%u, %u", "initialPieceIndex", "transientLookup.globalPieceStartIndex", initialPieceIndex, v8.globalPieceStartIndex) )
      __debugbreak();
    v9 = v8.globalPieceStartIndex;
    v10 = v8.transientIndex;
    *outLocalInitialPieceIndex = initialPieceIndex - v9;
    if ( transientIndex >= fxWorld.transientZoneCount )
    {
      LODWORD(v13) = fxWorld.transientZoneCount;
      LODWORD(v12) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1363, ASSERT_TYPE_ASSERT, "(unsigned)( transientLookup.transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientLookup.transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( (_WORD)v10 )
    {
      result = *(FxGlassSystem **)&fxWorld.activeTransientZones[4 * (unsigned __int16)v10 - 6144];
      if ( result )
        return (FxGlassSystem *)((char *)result + 16);
    }
    else
    {
      return &fxWorld.glassSys;
    }
  }
  else
  {
    result = &fxWorld.glassSys;
    *outLocalInitialPieceIndex = initialPieceIndex;
  }
  return result;
}

/*
==============
Glass_Init
==============
*/
void Glass_Init(void)
{
  int v0; 
  unsigned __int16 *activeTransientZones; 
  unsigned int v2; 
  __int64 v3; 
  FxGlassSystem *v4; 
  unsigned __int16 v5; 
  int v6; 
  __int16 *v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  FxGlassSystem *v10; 
  __int16 v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 881, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  *(_QWORD *)&fxWorld.glassSys.time = 0i64;
  if ( !fxWorld.glassSys.initCount )
  {
    fxWorld.glassSys.initCount = 1;
    Glass_SetInitialState(&fxWorld.glassSys, 0);
    CG_Glass_RestoreSystemInitialState(&fxWorld.glassSys, 0);
  }
  v0 = 0;
  if ( fxWorld.activeTransientZoneCount )
  {
    activeTransientZones = fxWorld.activeTransientZones;
    do
    {
      v2 = *activeTransientZones;
      if ( v2 >= fxWorld.transientZoneCount )
      {
        LODWORD(v14) = fxWorld.transientZoneCount;
        LODWORD(v13) = *activeTransientZones;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 858, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v3 = *(_QWORD *)&fxWorld.activeTransientZones[4 * (unsigned __int16)v2 - 6144];
      if ( v3 )
      {
        v4 = (FxGlassSystem *)(v3 + 16);
        if ( v4 )
          Glass_InitGlassSystem(v4, v2);
      }
      ++v0;
      ++activeTransientZones;
    }
    while ( v0 < fxWorld.activeTransientZoneCount );
  }
  v5 = s_pendingZoneListCount;
  if ( s_pendingZoneListCount )
  {
    v6 = s_pendingZoneListCount - 1;
    if ( v6 >= 0 )
    {
      v7 = &word_1509EB37E[s_pendingZoneListCount];
      do
      {
        v8 = *v7;
        if ( !*v7 )
        {
          LODWORD(v15) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 820, ASSERT_TYPE_ASSERT, "( transientZoneId ) != ( TRANSIENT_ZONE_ALWAYSLOADED )", "%s != %s\n\t%u, %u", "transientZoneId", "TRANSIENT_ZONE_ALWAYSLOADED", v15, 0i64) )
            __debugbreak();
          v5 = s_pendingZoneListCount;
        }
        if ( v8 >= fxWorld.transientZoneCount )
        {
          LODWORD(v13) = v5;
          LODWORD(fmt) = v6;
          Com_PrintError(0, "Tried to load invalid pending glass zone: id %d, zone count %d, list index %d, pending count %d\n", v8, fxWorld.transientZoneCount, fmt, v13);
        }
        else
        {
          v9 = *(_QWORD *)&fxWorld.activeTransientZones[4 * v8 - 6144];
          if ( !v9 )
            goto LABEL_28;
          v10 = (FxGlassSystem *)(v9 + 16);
          if ( !v10 )
            goto LABEL_28;
          Glass_InitGlassSystem(v10, v8);
          fxWorld.activeTransientZones[fxWorld.activeTransientZoneCount++] = v8;
        }
        v11 = word_1509EB37E[s_pendingZoneListCount];
        v5 = --s_pendingZoneListCount;
        *v7 = v11;
LABEL_28:
        --v7;
        --v6;
      }
      while ( v6 >= 0 );
    }
  }
}

/*
==============
Glass_InitGlassSystem
==============
*/
void Glass_InitGlassSystem(FxGlassSystem *glassSys, const unsigned int transientZoneIndex)
{
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 793, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  *(_QWORD *)&glassSys->time = 0i64;
  if ( !glassSys->initCount )
  {
    glassSys->initCount = 1;
    Glass_SetInitialState(glassSys, transientZoneIndex);
    CG_Glass_RestoreSystemInitialState(glassSys, transientZoneIndex);
  }
}

/*
==============
Glass_InitPendingZones
==============
*/
void Glass_InitPendingZones(void)
{
  unsigned __int16 v0; 
  int v1; 
  __int16 *v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  FxGlassSystem *v5; 
  __int16 v6; 
  char *fmt; 
  __int64 v8; 
  __int64 v9; 

  v0 = s_pendingZoneListCount;
  if ( s_pendingZoneListCount )
  {
    v1 = s_pendingZoneListCount - 1;
    if ( v1 >= 0 )
    {
      v2 = &word_1509EB37E[s_pendingZoneListCount];
      do
      {
        v3 = *v2;
        if ( !*v2 )
        {
          LODWORD(v9) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 820, ASSERT_TYPE_ASSERT, "( transientZoneId ) != ( TRANSIENT_ZONE_ALWAYSLOADED )", "%s != %s\n\t%u, %u", "transientZoneId", "TRANSIENT_ZONE_ALWAYSLOADED", v9, 0i64) )
            __debugbreak();
          v0 = s_pendingZoneListCount;
        }
        if ( v3 >= fxWorld.transientZoneCount )
        {
          LODWORD(v8) = v0;
          LODWORD(fmt) = v1;
          Com_PrintError(0, "Tried to load invalid pending glass zone: id %d, zone count %d, list index %d, pending count %d\n", v3, fxWorld.transientZoneCount, fmt, v8);
        }
        else
        {
          v4 = *(_QWORD *)&fxWorld.activeTransientZones[4 * v3 - 6144];
          if ( !v4 )
            goto LABEL_14;
          v5 = (FxGlassSystem *)(v4 + 16);
          if ( !v5 )
            goto LABEL_14;
          Glass_InitGlassSystem(v5, v3);
          fxWorld.activeTransientZones[fxWorld.activeTransientZoneCount++] = v3;
        }
        v6 = word_1509EB37E[s_pendingZoneListCount];
        v0 = --s_pendingZoneListCount;
        *v2 = v6;
LABEL_14:
        --v2;
        --v1;
      }
      while ( v1 >= 0 );
    }
  }
}

/*
==============
Glass_IsVertexRightOfEdge
==============
*/
bool Glass_IsVertexRightOfEdge(const FxGlassGeometryData *geoData, const unsigned __int8 vertexCount, const unsigned __int8 edgeVertex0, const unsigned __int8 edgeVertex1, const unsigned __int8 testVertex)
{
  int v9; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 

  if ( edgeVertex0 >= vertexCount )
  {
    v14 = vertexCount;
    v12 = edgeVertex0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex0 ) < (unsigned)( vertexCount )", "edgeVertex0 doesn't index vertexCount\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( edgeVertex1 >= vertexCount )
  {
    LODWORD(v13) = vertexCount;
    LODWORD(v11) = edgeVertex1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( edgeVertex1 ) < (unsigned)( vertexCount )", "edgeVertex1 doesn't index vertexCount\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( testVertex >= vertexCount )
  {
    LODWORD(v13) = vertexCount;
    LODWORD(v11) = testVertex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( testVertex ) < (unsigned)( vertexCount )", "testVertex doesn't index vertexCount\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v9 = (__int16)HIWORD(*(_DWORD *)&geoData[edgeVertex1]);
  return ((__int16)*(_DWORD *)&geoData[edgeVertex1] - (__int16)*(_DWORD *)&geoData[edgeVertex0]) * ((__int16)HIWORD(*(_DWORD *)&geoData[testVertex]) - v9) < ((__int16)*(_DWORD *)&geoData[testVertex] - (__int16)*(_DWORD *)&geoData[edgeVertex1]) * (v9 - (__int16)HIWORD(*(_DWORD *)&geoData[edgeVertex0]));
}

/*
==============
Glass_MakeRoomForNewPieces
==============
*/
void Glass_MakeRoomForNewPieces(Glass_BreakData *breakData)
{
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned int pieceWordCount; 
  unsigned int priorityCount; 
  __int64 v24; 
  unsigned int v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 

  _RBX = breakData;
  if ( fxWorld.glassSys.lastPieceDeletionTime < fxWorld.glassSys.time )
  {
    fxWorld.glassSys.lastPieceDeletionTime = fxWorld.glassSys.time;
    __asm
    {
      vmovss  xmm3, dword ptr [rcx+4]
      vxorps  xmm0, xmm0, xmm0
      vdivss  xmm1, xmm3, dword ptr [rax+28h]
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+28h]
      vminss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, cs:__real@3f400000
      vdivss  xmm0, xmm3, dword ptr [rax+28h]
      vmulss  xmm1, xmm0, cs:__real@3e800000
      vaddss  xmm2, xmm2, xmm1
      vcvttss2si r10d, xmm2
    }
    if ( _ER10 > 512 )
      _ER10 = 512;
    v13 = 3 * _ER10;
    v14 = fxWorld.glassSys.activePieceCount - fxWorld.glassSys.pieceLimit + _ER10;
    v15 = 4 * v13;
    v16 = fxWorld.glassSys.activePieceCount - 100;
    v17 = (signed int)fxWorld.glassSys.geoDataLimit / 2;
    if ( v15 <= (signed int)fxWorld.glassSys.geoDataLimit / 2 )
      v17 = v15;
    v18 = fxWorld.glassSys.geoDataCount + v17 - fxWorld.glassSys.geoDataLimit;
    if ( fxWorld.glassSys.activePieceCount - v14 >= 0x64 )
      v16 = v14;
    if ( v18 > 0 || v16 > 0 )
    {
      Sys_EnterCriticalSection(CRITSECT_FX_GLASS);
      pieceWordCount = fxWorld.glassSys.pieceWordCount;
      priorityCount = 0;
      s_removePiecesData.priorityCount = 0;
      s_removePiecesData.piecesNeeded = v16;
      s_removePiecesData.geoDataNeeded = v18;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  dword ptr cs:s_removePiecesData.playerOrigin, xmm0
        vmovss  xmm1, dword ptr [rbx+0Ch]
        vmovss  dword ptr cs:s_removePiecesData.playerOrigin+4, xmm1
        vmovss  xmm0, dword ptr [rbx+10h]
        vmovss  dword ptr cs:s_removePiecesData.playerOrigin+8, xmm0
      }
      if ( fxWorld.glassSys.pieceWordCount )
      {
        v24 = 0i64;
        do
        {
          v25 = fxWorld.glassSys.isInUse[v24];
          while ( v25 )
          {
            v26 = __lzcnt(v25);
            if ( v26 >= 0x20 )
            {
              LODWORD(v28) = 32;
              LODWORD(v27) = v26;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v27, v28) )
                __debugbreak();
            }
            v25 &= ~(0x80000000 >> v26);
            Glass_SetupPriority(&fxWorld.glassSys, &s_removePiecesData, v26 | (32 * priorityCount));
          }
          ++priorityCount;
          ++v24;
        }
        while ( priorityCount < pieceWordCount );
        priorityCount = s_removePiecesData.priorityCount;
      }
      Glass_MakeRoomForNewPieces_r(&fxWorld.glassSys, &s_removePiecesData, 0, priorityCount - 1);
      Sys_LeaveCriticalSection(CRITSECT_FX_GLASS);
      Glass_CompactData(&fxWorld.glassSys);
    }
  }
}

/*
==============
Glass_MakeRoomForNewPieces_r
==============
*/
void Glass_MakeRoomForNewPieces_r(FxGlassSystem *glassSys, RemovePiecesData *data, int beginIndex, int endIndex)
{
  int v4; 
  int v5; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int16 priority; 
  PiecePriority *v11; 
  PiecePriority v12; 
  PiecePriority *v13; 
  PiecePriority *i; 
  PiecePriority v15; 
  __int64 v16; 
  int geoDataNeeded; 
  PiecePriority *v18; 
  FxGlassPieceState *v19; 
  int v20; 
  int v21; 
  PiecePriority *v22; 
  FxGlassPieceState *v23; 
  int v24; 
  int vertCount; 

  v4 = endIndex;
  v5 = beginIndex;
  if ( beginIndex >= endIndex )
  {
LABEL_18:
    if ( v5 == v4 )
    {
      v22 = &data->priorities[v5];
      v23 = &glassSys->pieceStates[v22->index];
      v24 = v23->holeDataCount + v23->crackDataCount + v23->fanDataCount;
      vertCount = v23->vertCount;
      --data->piecesNeeded;
      data->geoDataNeeded -= vertCount + v24;
      Glass_FreePiece(glassSys, v22->index);
    }
  }
  else
  {
    v8 = endIndex;
    while ( 1 )
    {
      v9 = (v5 + v4) / 2;
      priority = data->priorities[v9].priority;
      v11 = &data->priorities[v8];
      v12 = *v11;
      *v11 = data->priorities[v9];
      data->priorities[v9] = v12;
      v13 = &data->priorities[v4];
LABEL_4:
      for ( i = &data->priorities[v5]; i != v13; ++i )
      {
        if ( i->priority >= priority )
        {
          while ( 1 )
          {
            if ( i == --v13 )
              goto LABEL_10;
            if ( v13->priority < priority )
            {
              v15 = *i;
              *i++ = *v13;
              *v13 = v15;
              goto LABEL_4;
            }
          }
        }
      }
LABEL_10:
      v16 = i - data->priorities;
      if ( (unsigned __int64)(v16 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v16, "signed", v16) )
        __debugbreak();
      Glass_MakeRoomForNewPieces_r(glassSys, data, v5, v16 - 1);
      geoDataNeeded = data->geoDataNeeded;
      if ( geoDataNeeded <= 0 && data->piecesNeeded <= 0 )
        break;
      v18 = &data->priorities[v4];
      v19 = &glassSys->pieceStates[v18->index];
      v20 = v19->holeDataCount + v19->crackDataCount + v19->fanDataCount;
      v21 = v19->vertCount;
      --data->piecesNeeded;
      data->geoDataNeeded = geoDataNeeded - (v21 + v20);
      Glass_FreePiece(glassSys, v18->index);
      if ( data->geoDataNeeded <= 0 && data->piecesNeeded <= 0 )
        break;
      --v4;
      --v8;
      v5 = v16;
      if ( (int)v16 >= v4 )
        goto LABEL_18;
    }
  }
}

/*
==============
Glass_OnTransientZoneLoaded
==============
*/
void Glass_OnTransientZoneLoaded(const unsigned int transientZoneIndex)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  int v4; 
  int v5; 

  if ( transientZoneIndex && transientZoneIndex != 0xFFFF )
  {
    if ( s_pendingZoneListCount >= 0x600u )
    {
      v5 = 1536;
      v4 = s_pendingZoneListCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 900, ASSERT_TYPE_ASSERT, "(unsigned)( s_pendingZoneListCount ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "s_pendingZoneListCount doesn't index MAX_MAP_TRANSIENT_ZONES\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v2 = truncate_cast<unsigned short,unsigned int>(transientZoneIndex);
    v3 = s_pendingZoneListCount;
    s_pendingZoneList[s_pendingZoneListCount] = v2;
    s_pendingZoneListCount = v3 + 1;
  }
}

/*
==============
Glass_OnTransientZoneUnloaded
==============
*/
void Glass_OnTransientZoneUnloaded(const unsigned int transientZoneIndex)
{
  __int64 v2; 
  unsigned __int16 *i; 

  if ( transientZoneIndex && transientZoneIndex != 0xFFFF && fxWorld.activeTransientZoneCount )
  {
    if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 921, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
      __debugbreak();
    v2 = 0i64;
    if ( fxWorld.activeTransientZoneCount )
    {
      for ( i = fxWorld.activeTransientZones; *i != transientZoneIndex; ++i )
      {
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= fxWorld.activeTransientZoneCount )
          return;
      }
      fxWorld.activeTransientZones[v2] = *((_WORD *)&fxWorld.transientZones[1535] + fxWorld.activeTransientZoneCount + 3);
      --fxWorld.activeTransientZoneCount;
    }
  }
}

/*
==============
Glass_PlayEffect
==============
*/
void Glass_PlayEffect(FxCombinedDef *fx, const vec3_t *origin, const vec3_t *normal)
{
  LocalClientNum_t v8; 
  connstate_t *p_connectionState; 
  cg_t *LocalClientGlobals; 
  __int64 v11; 
  __int64 v12; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  _RBX = normal;
  def.m_particleSystemDef = fx->particleSystemDef;
  Vec3Basis_RightHanded(normal, &axis.m[1], &axis.m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+98h+axis], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
  }
  v8 = LOCAL_CLIENT_0;
  __asm
  {
    vmovss  dword ptr [rsp+98h+axis+4], xmm1
    vmovss  dword ptr [rsp+98h+axis+8], xmm0
  }
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v8 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v12) = 2;
        LODWORD(v11) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE && !CG_GetLocalClientGlobals(v8)->predictedPlayerState.deltaTime )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(v8);
        FX_PlayOrientedEffect(v8, &def, LocalClientGlobals->time, origin, &axis);
      }
      ++v8;
      p_connectionState += 110;
    }
    while ( v8 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
Glass_PlayEffectWithMark
==============
*/
void Glass_PlayEffectWithMark(FxCombinedDef *fx, const vec3_t *origin, const vec3_t *normal)
{
  LocalClientNum_t v7; 
  connstate_t *p_connectionState; 
  const Material *markMaterialOverride; 
  cg_t *LocalClientGlobals; 
  __int64 spawnFlags; 
  __int64 markEntnum; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  _RBX = normal;
  def.m_particleSystemDef = fx->particleSystemDef;
  Vec3Basis_RightHanded(normal, &axis.m[1], &axis.m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
  }
  v7 = LOCAL_CLIENT_0;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+axis], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0B8h+axis+8], xmm0
    vmovss  dword ptr [rsp+0B8h+axis+4], xmm1
  }
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v7 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(markEntnum) = 2;
        LODWORD(spawnFlags) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", spawnFlags, markEntnum) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE && !CG_GetLocalClientGlobals(v7)->predictedPlayerState.deltaTime )
      {
        markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_0;
        LocalClientGlobals = CG_GetLocalClientGlobals(v7);
        FX_PlayOrientedEffectWithMarkEntity(v7, &def, LocalClientGlobals->time, origin, &axis, 0, 0x7FEu, 0, 0xFEu, markMaterialOverride);
      }
      ++v7;
      p_connectionState += 110;
    }
    while ( v7 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
Glass_PropagateToDetailWorld
==============
*/
void Glass_PropagateToDetailWorld(LocalClientNum_t clientNum)
{
  unsigned int v1; 
  unsigned int pieceWordCount; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( clientNum == LOCAL_CLIENT_0 )
  {
    v1 = 0;
    pieceWordCount = fxWorld.glassSys.pieceWordCount;
    s_physicsDebugGlassPieceCount = 0;
    s_physicsDebugGlassPhysicsCount = 0;
    s_physicsDebugGlassBodyCount = 0;
    if ( fxWorld.glassSys.pieceWordCount )
    {
      v3 = 0i64;
      do
      {
        v4 = fxWorld.glassSys.isInUse[v3];
        while ( v4 )
        {
          v5 = __lzcnt(v4);
          if ( v5 >= 0x20 )
          {
            LODWORD(v7) = 32;
            LODWORD(v6) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v6, v7) )
              __debugbreak();
          }
          v4 &= ~(0x80000000 >> v5);
          Glass_PropagateToDetailWorldPiece(&fxWorld.glassSys, 0, v5 | (32 * v1));
        }
        ++v1;
        ++v3;
      }
      while ( v1 < pieceWordCount );
    }
  }
}

/*
==============
Glass_PropagateToDetailWorldPiece
==============
*/
void Glass_PropagateToDetailWorldPiece(FxGlassSystem *glassSys, int unused, unsigned int pieceIndex)
{
  __int64 v3; 
  FxGlassPieceDynamics *pieceDynamics; 
  FxGlassPieceDynamics *v6; 
  unsigned int physicsInstance; 
  unsigned int NumRigidBodys; 
  unsigned int i; 
  unsigned int v10; 
  hknpBodyId *RigidBodyID; 
  unsigned int physicsDetailInstance; 
  unsigned int m_serialAndIndex; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  hknpBodyId result; 
  hknpBodyId v18; 
  vec3_t position; 
  vec4_t orientation; 

  v3 = pieceIndex;
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1428, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  if ( (unsigned int)v3 >= glassSys->pieceLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1429, ASSERT_TYPE_ASSERT, "(pieceIndex < glassSys->pieceLimit)", (const char *)&queryFormat, "pieceIndex < glassSys->pieceLimit") )
    __debugbreak();
  pieceDynamics = glassSys->pieceDynamics;
  ++s_physicsDebugGlassPieceCount;
  v6 = &pieceDynamics[v3];
  if ( v6->physicsInstance != -1 )
  {
    if ( v6->physicsDetailInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1441, ASSERT_TYPE_ASSERT, "(piece->physicsDetailInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "piece->physicsDetailInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    physicsInstance = v6->physicsInstance;
    ++s_physicsDebugGlassPhysicsCount;
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance);
    if ( NumRigidBodys != Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_DETAIL, v6->physicsDetailInstance) )
    {
      v16 = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_DETAIL, v6->physicsDetailInstance);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1453, ASSERT_TYPE_ASSERT, "(numBodies == Physics_GetNumRigidBodys( detailWorld, piece->physicsDetailInstance ))", "%s\n\tPhysics Particle in Glass FX piece %i doesn't have the same number of bodies in physics instance (%i) and detail instance(%i)", "numBodies == Physics_GetNumRigidBodys( detailWorld, piece->physicsDetailInstance )", v3, NumRigidBodys, v16) )
        __debugbreak();
    }
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      ++s_physicsDebugGlassBodyCount;
      v10 = v6->physicsInstance;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v10 == -1 )
      {
        LODWORD(v15) = 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v15) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated )
      {
        LODWORD(v15) = 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v10, i);
      physicsDetailInstance = v6->physicsDetailInstance;
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( physicsDetailInstance == -1 )
      {
        LODWORD(v15) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v15) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated )
      {
        LODWORD(v15) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
          __debugbreak();
      }
      v14 = HavokPhysics_GetRigidBodyID(&v18, PHYSICS_WORLD_ID_CLIENT0_DETAIL, physicsDetailInstance, i)->m_serialAndIndex;
      Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, m_serialAndIndex, &position, &orientation);
      Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_CLIENT0_DETAIL, v14, &position, &orientation, 0, 0);
    }
    Physics_SetCGGlassDetailPropagationDebugData(LOCAL_CLIENT_0, s_physicsDebugGlassPieceCount, s_physicsDebugGlassPhysicsCount, s_physicsDebugGlassBodyCount);
  }
}

/*
==============
Glass_Reset
==============
*/
void Glass_Reset(void)
{
  int v0; 
  unsigned __int16 *activeTransientZones; 
  unsigned int v2; 
  __int64 v3; 
  FxGlassSystem *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( fxWorld.glassSys.initCount == 1 )
    Glass_FreeAllPieces();
  Glass_ForEachSystem_void____cdecl___FxGlassSystem_____restrict__(Glass_ResetInitCount);
  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1626, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  v0 = 0;
  *(_QWORD *)&fxWorld.glassSys.time = 0i64;
  if ( !fxWorld.glassSys.initCount )
  {
    fxWorld.glassSys.initCount = 1;
    Glass_SetInitialState(&fxWorld.glassSys, 0);
    CG_Glass_RestoreSystemInitialState(&fxWorld.glassSys, 0);
  }
  if ( fxWorld.activeTransientZoneCount )
  {
    activeTransientZones = fxWorld.activeTransientZones;
    do
    {
      v2 = *activeTransientZones;
      if ( v2 >= fxWorld.transientZoneCount )
      {
        LODWORD(v6) = fxWorld.transientZoneCount;
        LODWORD(v5) = *activeTransientZones;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 1636, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      v3 = *(_QWORD *)&fxWorld.activeTransientZones[4 * (unsigned __int16)v2 - 6144];
      if ( v3 )
      {
        v4 = (FxGlassSystem *)(v3 + 16);
        if ( v4 )
          Glass_InitGlassSystem(v4, v2);
      }
      ++v0;
      ++activeTransientZones;
    }
    while ( v0 < fxWorld.activeTransientZoneCount );
  }
}

/*
==============
Glass_ResetInitCount
==============
*/
void Glass_ResetInitCount(FxGlassSystem *glassSys)
{
  if ( glassSys )
  {
    glassSys->initCount = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 574, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
      __debugbreak();
    MEMORY[0x79] = 0;
  }
}

/*
==============
Glass_SetInitialState
==============
*/
void Glass_SetInitialState(FxGlassSystem *glassSys, const unsigned int transientZoneIndex)
{
  unsigned int pieceLimit; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  FxGlassPieceDynamics *pieceDynamics; 
  unsigned int initPieceCount; 
  unsigned int v10; 
  unsigned int v11; 
  FxGlassPieceState *pieceStates; 
  __int64 defIndex; 
  unsigned int supportMask; 
  int vertCount; 
  int fanDataCount; 
  vec3_t *linkOrg; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int firstFreePiece; 
  __int64 initGeoDataCount; 
  FxGlassGeometryData *initGeoData; 
  FxGlassGeometryData *geoData; 
  __int64 v30; 

  if ( glassSys->geoDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 697, ASSERT_TYPE_ASSERT, "(glassSys->geoDataCount == 0)", (const char *)&queryFormat, "glassSys->geoDataCount == 0") )
    __debugbreak();
  if ( cm.totalGlassInitPieceCount && (!transientZoneIndex || glassSys->initPieceCount) )
  {
    if ( !glassSys->pieceDynamics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 709, ASSERT_TYPE_ASSERT, "(glassSys->pieceDynamics)", (const char *)&queryFormat, "glassSys->pieceDynamics") )
      __debugbreak();
    if ( !glassSys->pieceStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 710, ASSERT_TYPE_ASSERT, "(glassSys->pieceStates)", (const char *)&queryFormat, "glassSys->pieceStates") )
      __debugbreak();
    if ( !glassSys->piecePlaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 711, ASSERT_TYPE_ASSERT, "(glassSys->piecePlaces)", (const char *)&queryFormat, "glassSys->piecePlaces") )
      __debugbreak();
    memset(glassSys->pieceDynamics, 207, sizeof(FxGlassPieceDynamics));
    memset(glassSys->pieceStates, 207, sizeof(FxGlassPieceState));
    memset(glassSys->piecePlaces, 207, sizeof(FxGlassPiecePlace));
    memset_0(glassSys->cellBits, 0, 4i64 * glassSys->pieceWordCount * glassSys->cellCount);
    pieceLimit = glassSys->pieceLimit;
    v5 = 0;
    if ( pieceLimit )
    {
      do
      {
        v6 = v5++;
        v7 = v6;
        pieceDynamics = glassSys->pieceDynamics;
        *(_QWORD *)&pieceDynamics[v7].physicsInstance = -1i64;
        pieceDynamics[v7].pendingCreation = 0;
        pieceLimit = glassSys->pieceLimit;
      }
      while ( v5 != pieceLimit );
    }
    initPieceCount = glassSys->initPieceCount;
    v10 = 0;
    v11 = 0;
    if ( initPieceCount )
    {
      do
      {
        glassSys->pieceDynamics[v11].fallTime = 0x7FFFFFFF;
        _RBP = &glassSys->initPieceStates[v11];
        _RCX = glassSys->piecePlaces;
        pieceStates = glassSys->pieceStates;
        _RSI = v11;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vmovups xmmword ptr [rsi+rcx], xmm0
          vmovsd  xmm1, qword ptr [rbp+10h]
          vmovsd  qword ptr [rsi+rcx+10h], xmm1
        }
        _RCX[_RSI].frame.origin.v[2] = _RBP->frame.origin.v[2];
        _RCX[_RSI].radius = _RBP->radius;
        pieceStates[_RSI].texCoordOrigin.v[0] = _RBP->texCoordOrigin.v[0];
        pieceStates[_RSI].texCoordOrigin.v[1] = _RBP->texCoordOrigin.v[1];
        if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v11) )
          __debugbreak();
        pieceStates[_RSI].initIndex = v11;
        defIndex = _RBP->defIndex;
        pieceStates[_RSI].defIndex = defIndex;
        supportMask = _RBP->supportMask;
        pieceStates[_RSI].geoDataStart = v10;
        pieceStates[_RSI].supportMask = supportMask;
        vertCount = _RBP->vertCount;
        fanDataCount = _RBP->fanDataCount;
        pieceStates[_RSI].vertCount = vertCount;
        v10 += fanDataCount + vertCount;
        *(_WORD *)&pieceStates[_RSI].holeDataCount = 0;
        pieceStates[_RSI].fanDataCount = _RBP->fanDataCount;
        pieceStates[_RSI].areaX2 = _RBP->areaX2;
        pieceStates[_RSI].flags = 0;
        glassSys->halfThickness[v11] = fxWorld.glassGlob.defs[defIndex].halfThickness;
        glassSys->isInUse[(unsigned __int64)v11 >> 5] |= 0x80000000 >> (v11 & 0x1F);
        Glass_LinkPiece_Static(glassSys, v11);
        initPieceCount = glassSys->initPieceCount;
        ++v11;
      }
      while ( v11 != initPieceCount );
      pieceLimit = glassSys->pieceLimit;
    }
    if ( pieceLimit <= initPieceCount )
    {
      glassSys->firstFreePiece = 0xFFFF;
      firstFreePiece = 0xFFFF;
    }
    else
    {
      if ( v11 != pieceLimit - 1 )
      {
        do
        {
          linkOrg = glassSys->linkOrg;
          v23 = v11++;
          v24 = v23;
          linkOrg[v24].v[0] = 262144.0;
          linkOrg[v24].v[1] = 262144.0;
          linkOrg[v24].v[2] = 262144.0;
          glassSys->piecePlaces[v23].nextFree = v11;
        }
        while ( v11 != glassSys->pieceLimit - 1 );
      }
      glassSys->piecePlaces[v11].nextFree = 0xFFFF;
      v25 = glassSys->initPieceCount;
      glassSys->firstFreePiece = v25;
      if ( glassSys->pieceDynamics[v25].pendingCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 769, ASSERT_TYPE_ASSERT, "(!glassSys->pieceDynamics[glassSys->firstFreePiece].pendingCreation)", (const char *)&queryFormat, "!glassSys->pieceDynamics[glassSys->firstFreePiece].pendingCreation") )
        __debugbreak();
      initPieceCount = glassSys->initPieceCount;
      firstFreePiece = glassSys->firstFreePiece;
    }
    glassSys->lastPieceDeletionTime = 0;
    glassSys->activePieceCount = initPieceCount;
    if ( firstFreePiece >= glassSys->pieceLimit && firstFreePiece != 0xFFFF )
    {
      LODWORD(v30) = firstFreePiece;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 780, ASSERT_TYPE_ASSERT, "( ( glassSys->firstFreePiece < glassSys->pieceLimit || glassSys->firstFreePiece == 0xffff ) )", "( glassSys->firstFreePiece ) = %i", v30) )
        __debugbreak();
    }
    initGeoDataCount = glassSys->initGeoDataCount;
    initGeoData = glassSys->initGeoData;
    geoData = glassSys->geoData;
    glassSys->geoDataCount = initGeoDataCount;
    memcpy_0(geoData, initGeoData, 4 * initGeoDataCount);
  }
}

/*
==============
Glass_SetupPriority
==============
*/
void Glass_SetupPriority(FxGlassSystem *glassSys, RemovePiecesData *data, unsigned int pieceIndex)
{
  __int64 v5; 
  __int64 v52; 
  int v53; 

  v5 = pieceIndex;
  if ( data->priorityCount >= data->maxPriorityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 944, ASSERT_TYPE_ASSERT, "(data->priorityCount < data->maxPriorityCount)", (const char *)&queryFormat, "data->priorityCount < data->maxPriorityCount") )
    __debugbreak();
  _RSI = glassSys->pieceStates;
  _RDI = v5;
  if ( (_RSI[v5].flags & 2) != 0 )
  {
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    LOBYTE(_EAX) = Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|0x80);
    __asm { vmovss  xmm2, cs:__real@43800000 }
    _ECX = (unsigned __int8)_EAX;
    _EDX = 0;
    __asm { vmovd   xmm0, ecx }
    _ECX = (unsigned __int8)_EAX;
    __asm
    {
      vmovd   xmm1, edx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@43000000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  xmm2, cs:__real@44800000
      vmovss  [rsp+78h+var_40], xmm0
      vmovd   xmm0, ecx
    }
    _RCX = glassSys->piecePlaces;
    __asm
    {
      vmovd   xmm1, edx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@44000000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  xmm2, cs:__real@3f000000
      vmovss  [rsp+78h+var_44], xmm0
    }
    _EAX = (unsigned __int8)_EAX;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, edx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@3e800000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  [rsp+78h+var_48], xmm0
      vmovss  xmm0, dword ptr [rdi+rsi+1Ch]
      vdivss  xmm2, xmm0, dword ptr [rax+28h]
      vmulss  xmm0, xmm2, cs:__real@46fffe00
      vminss  xmm6, xmm0, cs:__real@46fffe00
      vmovss  xmm0, dword ptr [rdi+rcx+10h]
      vsubss  xmm3, xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [rdi+rcx+14h]
      vsubss  xmm2, xmm1, dword ptr [rbx+14h]
      vmovss  xmm0, dword ptr [rdi+rcx+18h]
      vsubss  xmm4, xmm0, dword ptr [rbx+18h]
      vmovss  xmm5, [rsp+78h+var_44]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm5, xmm5
      vcomiss xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vcomiss xmm6, cs:__real@477fff00
    }
    if ( _RSI[_RDI].supportMask )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass.cpp", 978, ASSERT_TYPE_ASSERT, "(priority <= 0xffff)", (const char *)&queryFormat, "priority <= USHRT_MAX", v52, v53) )
        __debugbreak();
    }
    data->priorities[data->priorityCount].index = truncate_cast<unsigned short,unsigned int>(v5);
    __asm
    {
      vcvttss2si edx, xmm6
      vmovaps xmm6, [rsp+78h+var_38]
    }
    data->priorities[data->priorityCount++].priority = _EDX;
  }
}

/*
==============
Glass_Shutdown
==============
*/
void Glass_Shutdown(void)
{
  if ( fxWorld.glassSys.initCount == 1 )
    Glass_FreeAllPieces();
  Glass_ForEachSystem_void____cdecl___FxGlassSystem_____restrict__(Glass_ResetInitCount);
  s_pendingZoneListCount = 0;
}

