/*
==============
CG_Glass_Init
==============
*/

void __fastcall CG_Glass_Init(bool clearChanges)
{
  ?CG_Glass_Init@@YAX_N@Z(clearChanges);
}

/*
==============
CG_LoadGlass
==============
*/

void __fastcall CG_LoadGlass(MemoryFile *memFile)
{
  ?CG_LoadGlass@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_Glass_RestoreSystemInitialState
==============
*/

void __fastcall CG_Glass_RestoreSystemInitialState(FxGlassSystem *glassSys, const unsigned int transientZoneIndex)
{
  ?CG_Glass_RestoreSystemInitialState@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, transientZoneIndex);
}

/*
==============
CG_Glass_ApplyChanges
==============
*/

void __fastcall CG_Glass_ApplyChanges(LocalClientNum_t localClientNum)
{
  ?CG_Glass_ApplyChanges@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Glass_AllocateMemory
==============
*/

void __fastcall CG_Glass_AllocateMemory(HunkUser *hunkUser)
{
  ?CG_Glass_AllocateMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CG_Glass_Reset
==============
*/

void __fastcall CG_Glass_Reset(const LocalClientNum_t localClientNum)
{
  ?CG_Glass_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Glass_PlayerBreakEvent
==============
*/

void __fastcall CG_Glass_PlayerBreakEvent(LocalClientNum_t localClientNum, int sourceEntityNum)
{
  ?CG_Glass_PlayerBreakEvent@@YAXW4LocalClientNum_t@@H@Z(localClientNum, sourceEntityNum);
}

/*
==============
CG_Glass_BreakGlass
==============
*/

void __fastcall CG_Glass_BreakGlass(LocalClientNum_t localClientNum, const vec3_t *cameraPosition, unsigned __int16 glassPieceIndex, const vec3_t *hitPosition, const vec3_t *hitDirection)
{
  ?CG_Glass_BreakGlass@@YAXW4LocalClientNum_t@@AEBTvec3_t@@G11@Z(localClientNum, cameraPosition, glassPieceIndex, hitPosition, hitDirection);
}

/*
==============
CG_Glass_RecordPieceChange
==============
*/

void __fastcall CG_Glass_RecordPieceChange(const CG_GlassPieceChangeWithIndex *pieceChangeWithIndex)
{
  ?CG_Glass_RecordPieceChange@@YAXPEBUCG_GlassPieceChangeWithIndex@@@Z(pieceChangeWithIndex);
}

/*
==============
CG_Glass_FreeMemory
==============
*/

void CG_Glass_FreeMemory(void)
{
  ?CG_Glass_FreeMemory@@YAXXZ();
}

/*
==============
CG_Glass_IsPieceSolid
==============
*/

bool __fastcall CG_Glass_IsPieceSolid(unsigned int glassPieceIndex)
{
  return ?CG_Glass_IsPieceSolid@@YA_NI@Z(glassPieceIndex);
}

/*
==============
CG_Glass_MeleeEvent
==============
*/

void __fastcall CG_Glass_MeleeEvent(LocalClientNum_t localClientNum, int sourceEntityNum)
{
  ?CG_Glass_MeleeEvent@@YAXW4LocalClientNum_t@@H@Z(localClientNum, sourceEntityNum);
}

/*
==============
CG_GlassPieceFromIndex
==============
*/

CG_GlassPiece *__fastcall CG_GlassPieceFromIndex(int pieceIndex)
{
  return ?CG_GlassPieceFromIndex@@YAPEAUCG_GlassPiece@@H@Z(pieceIndex);
}

/*
==============
CG_Glass_DrawDebug
==============
*/

void __fastcall CG_Glass_DrawDebug(LocalClientNum_t localClientNum)
{
  ?CG_Glass_DrawDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SaveGlass
==============
*/

void __fastcall CG_SaveGlass(MemoryFile *memFile)
{
  ?CG_SaveGlass@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_Glass_Shutdown
==============
*/

void CG_Glass_Shutdown(void)
{
  ?CG_Glass_Shutdown@@YAXXZ();
}

/*
==============
CG_GlassPieceFromIndex
==============
*/
CG_GlassPiece *CG_GlassPieceFromIndex(int pieceIndex)
{
  __int64 v1; 
  unsigned int pieceLimit; 

  v1 = pieceIndex;
  if ( pieceIndex >= cg_glassData.pieceLimit )
  {
    pieceLimit = cg_glassData.pieceLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", pieceIndex, pieceLimit) )
      __debugbreak();
  }
  return &cg_glassData.glassPieces[v1];
}

/*
==============
CG_Glass_AllocateMemory
==============
*/
void CG_Glass_AllocateMemory(HunkUser *hunkUser)
{
  cg_glassData.pieceLimit = cm.totalGlassPieceLimit;
  cg_glassData.glassPieces = (CG_GlassPiece *)Mem_HunkUser_AllocInternal(hunkUser, cm.totalGlassPieceLimit, 1ui64, "CG_Glass_AllocateMemory");
  cg_glassData.glassChanges = (CG_GlassPieceChange *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * cg_glassData.pieceLimit, 1ui64, "CG_Glass_AllocateMemory");
  cg_glassData.glassChangeIndices = (unsigned __int16 *)Mem_HunkUser_AllocInternal(hunkUser, 0x2000ui64, 2ui64, "CG_Glass_AllocateMemory");
  Glass_AllocateClientMemory(hunkUser);
  CL_Glass_AllocateClientMemory(hunkUser, cm.totalGlassInitPieceCount);
}

/*
==============
CG_Glass_ApplyChanges
==============
*/
void CG_Glass_ApplyChanges(LocalClientNum_t localClientNum)
{
  float v2; 
  cg_t *LocalClientGlobals; 
  __int64 i; 
  __int64 v5; 
  CG_GlassPiece *glassPieces; 
  unsigned __int8 state; 
  const FxGlassSystem *SystemForInitialPiece; 
  double InitialPieceAreaX2; 
  __int64 j; 
  __int64 v11; 
  CG_GlassPiece *v12; 
  FxGlassSystem *v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int outLocalInitialPieceIndex; 
  Glass_BreakData breakData; 

  if ( cg_glassInited )
  {
    v2 = cl_maxLocalClients;
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
        __debugbreak();
      v2 = cl_maxLocalClients;
    }
    if ( v2 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
      __debugbreak();
    if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( localClientNum == cls.m_localClientsActive.firstActiveIndex )
    {
      cg_glassData.soundsThisFrame = 0;
      CG_Glass_Enter();
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      breakData.brokenPieceCount = 0;
      breakData.totalAreaX2 = 0.0;
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &breakData.playerOrigin);
      for ( i = 0i64; (unsigned int)i < cg_glassData.glassChangeCount; i = (unsigned int)(i + 1) )
      {
        v5 = cg_glassData.glassChangeIndices[i];
        if ( (unsigned int)v5 >= cg_glassData.pieceLimit )
        {
          LODWORD(v15) = cg_glassData.pieceLimit;
          LODWORD(v14) = cg_glassData.glassChangeIndices[i];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        glassPieces = cg_glassData.glassPieces;
        if ( (unsigned int)v5 >= cg_glassData.pieceLimit )
        {
          LODWORD(v15) = cg_glassData.pieceLimit;
          LODWORD(v14) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        state = cg_glassData.glassChanges[v5].state;
        if ( state > glassPieces[v5].state && state == 2 )
        {
          SystemForInitialPiece = Glass_GetSystemForInitialPiece(v5, &outLocalInitialPieceIndex);
          if ( SystemForInitialPiece )
          {
            ++breakData.brokenPieceCount;
            InitialPieceAreaX2 = Glass_GetInitialPieceAreaX2(SystemForInitialPiece, outLocalInitialPieceIndex);
            breakData.totalAreaX2 = *(float *)&InitialPieceAreaX2 + breakData.totalAreaX2;
          }
        }
      }
      for ( j = 0i64; (unsigned int)j < cg_glassData.glassChangeCount; j = (unsigned int)(j + 1) )
      {
        v11 = cg_glassData.glassChangeIndices[j];
        if ( (unsigned int)v11 >= cg_glassData.pieceLimit )
        {
          LODWORD(v15) = cg_glassData.pieceLimit;
          LODWORD(v14) = cg_glassData.glassChangeIndices[j];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v12 = cg_glassData.glassPieces;
        if ( (unsigned int)v11 >= cg_glassData.pieceLimit )
        {
          LODWORD(v15) = cg_glassData.pieceLimit;
          LODWORD(v14) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( cg_glassData.glassChanges[v11].state > v12[v11].state )
        {
          v13 = Glass_GetSystemForInitialPiece(v11, &outLocalInitialPieceIndex);
          CG_Glass_ApplyChangesToPiece(localClientNum, v11, &breakData, v13, outLocalInitialPieceIndex);
        }
      }
      memset_0(cg_glassData.glassChanges, 0, 4i64 * cg_glassData.pieceLimit);
      cg_glassData.glassChangeCount = 0;
      cg_glassData.recievedInitialState = 1;
      Sys_EnterCriticalSection(CRITSECT_CG_GLASS);
      if ( !insideGlassCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 88, ASSERT_TYPE_ASSERT, "(insideGlassCode)", (const char *)&queryFormat, "insideGlassCode") )
        __debugbreak();
      insideGlassCode = 0;
      Sys_LeaveCriticalSection(CRITSECT_CG_GLASS);
    }
  }
}

/*
==============
CG_Glass_ApplyChangesToPiece
==============
*/
void CG_Glass_ApplyChangesToPiece(LocalClientNum_t localClientNum, unsigned int glassPieceIndex, Glass_BreakData *breakData, FxGlassSystem *glassSys, unsigned int localInitialPieceIndex)
{
  unsigned int pieceLimit; 
  __int64 v6; 
  LocalClientNum_t v8; 
  CG_GlassPiece *glassPieces; 
  __int64 v10; 
  CG_GlassPieceChange *glassChanges; 
  unsigned __int8 state; 
  unsigned __int8 v13; 
  SndAliasList *DamagedSound; 
  SndAliasList *v15; 
  SndAliasList *DestroyedQuietSound; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 
  vec3_t outCenter; 
  vec3_t impactPos; 
  vec3_t dir; 
  tmat33_t<vec3_t> outAxis; 

  pieceLimit = cg_glassData.pieceLimit;
  v6 = (int)glassPieceIndex;
  v8 = localClientNum;
  if ( glassPieceIndex >= cg_glassData.pieceLimit )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", glassPieceIndex, cg_glassData.pieceLimit) )
      __debugbreak();
    pieceLimit = cg_glassData.pieceLimit;
  }
  glassPieces = cg_glassData.glassPieces;
  v10 = v6;
  if ( (unsigned int)v6 >= pieceLimit )
  {
    LODWORD(v20) = pieceLimit;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  glassChanges = cg_glassData.glassChanges;
  state = glassPieces[v6].state;
  v13 = cg_glassData.glassChanges[v6].state;
  if ( state < v13 )
  {
    if ( glassSys )
    {
      if ( v13 == 3 )
      {
        Glass_DeleteInitialPiece(glassSys, localInitialPieceIndex);
      }
      else
      {
        if ( v13 )
        {
          if ( !state )
          {
            Glass_DamageInitialPiece(glassSys, localInitialPieceIndex);
            if ( glassChanges[v6].state == 1 )
            {
              DamagedSound = Glass_GetDamagedSound(v6);
              if ( DamagedSound )
              {
                Glass_GetInitialPieceCenter(glassSys, localInitialPieceIndex, &outCenter);
                v15 = DamagedSound;
                v8 = localClientNum;
                CG_Glass_PlaySoundAtPos(localClientNum, &outCenter, v15);
              }
              else
              {
                v8 = localClientNum;
              }
            }
          }
        }
        if ( glassChanges[v6].state >= 2u )
        {
          Glass_GetInitialPieceCenter(glassSys, localInitialPieceIndex, &outCenter);
          if ( glassChanges[v6].impactDir == 0xFF )
          {
            DestroyedQuietSound = Glass_GetDestroyedQuietSound(v6);
            dir.v[0] = 0.0;
            dir.v[1] = 0.0;
            dir.v[2] = 0.0;
            impactPos = outCenter;
          }
          else
          {
            DestroyedQuietSound = Glass_GetDestroyedSound(v6);
            Glass_GetInitialPieceAxis(glassSys, localInitialPieceIndex, &outAxis);
            ByteToDir(glassChanges[v10].impactDir, &dir);
            v17 = (float)(_mm_cvtepi32_ps((__m128i)glassChanges[v10].impactPos[0]).m128_f32[0] - 31.5) * 8.1269846;
            v18 = (float)(_mm_cvtepi32_ps((__m128i)glassChanges[v10].impactPos[1]).m128_f32[0] - 31.5) * 8.1269846;
            impactPos.v[0] = (float)((float)(v17 * outAxis.m[0].v[0]) + outCenter.v[0]) + (float)(v18 * outAxis.m[1].v[0]);
            impactPos.v[1] = (float)((float)(v17 * outAxis.m[0].v[1]) + outCenter.v[1]) + (float)(v18 * outAxis.m[1].v[1]);
            impactPos.v[2] = (float)((float)(v17 * outAxis.m[0].v[2]) + outCenter.v[2]) + (float)(v18 * outAxis.m[1].v[2]);
          }
          if ( DestroyedQuietSound )
            CG_Glass_PlaySoundAtPos(v8, &outCenter, DestroyedQuietSound);
          Glass_DestroyInitialPiece(glassSys, localInitialPieceIndex, &impactPos, &dir, breakData);
        }
      }
      glassPieces[v10] = (CG_GlassPiece)glassChanges[v10].state;
    }
    else
    {
      glassPieces[v6].state = v13;
    }
  }
}

/*
==============
CG_Glass_BreakGlass
==============
*/
void CG_Glass_BreakGlass(LocalClientNum_t localClientNum, const vec3_t *cameraPosition, unsigned __int16 glassPieceIndex, const vec3_t *hitPosition, const vec3_t *hitDirection)
{
  __int64 v6; 
  unsigned __int8 state; 
  FxGlassSystem *SystemForInitialPiece; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  CG_GlassPiece *v15; 
  SndAliasList *DestroyedSound; 
  double InitialPieceAreaX2; 
  float v18; 
  unsigned int outLocalInitialPieceIndex; 
  vec3_t pos; 
  vec3_t impactDir; 
  Glass_BreakData breakData; 

  v6 = glassPieceIndex;
  if ( glassPieceIndex >= cg_glassData.pieceLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", glassPieceIndex, cg_glassData.pieceLimit) )
    __debugbreak();
  state = cg_glassData.glassPieces[v6].state;
  if ( state < 2u )
  {
    SystemForInitialPiece = Glass_GetSystemForInitialPiece(v6, &outLocalInitialPieceIndex);
    if ( SystemForInitialPiece )
    {
      v11 = hitPosition->v[1];
      pos.v[0] = hitPosition->v[0];
      v12 = hitPosition->v[2];
      pos.v[1] = v11;
      impactDir.v[0] = hitDirection->v[0];
      v13 = hitDirection->v[2];
      pos.v[2] = v12;
      v14 = hitDirection->v[1];
      impactDir.v[2] = v13;
      impactDir.v[1] = v14;
      if ( !state )
        Glass_DamageInitialPiece(SystemForInitialPiece, outLocalInitialPieceIndex);
      v15 = CG_GlassPieceFromIndex(v6);
      DestroyedSound = Glass_GetDestroyedSound(v6);
      if ( DestroyedSound )
        CG_Glass_PlaySoundAtPos(localClientNum, &pos, DestroyedSound);
      breakData.brokenPieceCount = 1;
      InitialPieceAreaX2 = Glass_GetInitialPieceAreaX2(SystemForInitialPiece, outLocalInitialPieceIndex);
      v18 = cameraPosition->v[1];
      breakData.totalAreaX2 = *(float *)&InitialPieceAreaX2;
      breakData.playerOrigin.v[0] = cameraPosition->v[0];
      breakData.playerOrigin.v[2] = cameraPosition->v[2];
      breakData.playerOrigin.v[1] = v18;
      Glass_DestroyInitialPiece(SystemForInitialPiece, outLocalInitialPieceIndex, &pos, &impactDir, &breakData);
      v15->state = 2;
    }
    else
    {
      CG_GlassPieceFromIndex(v6)->state = 2;
    }
  }
}

/*
==============
CG_Glass_DrawDebug
==============
*/
void CG_Glass_DrawDebug(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  Glass_DrawDebug(&outOrg);
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_Glass_Enter
==============
*/
bool CG_Glass_Enter()
{
  bool result; 

  Sys_EnterCriticalSection(CRITSECT_CG_GLASS);
  if ( insideGlassCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 72, ASSERT_TYPE_ASSERT, "(!insideGlassCode)", (const char *)&queryFormat, "!insideGlassCode") )
    __debugbreak();
  if ( insideGlassCodeRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 73, ASSERT_TYPE_ASSERT, "(insideGlassCodeRead == 0)", (const char *)&queryFormat, "insideGlassCodeRead == 0") )
    __debugbreak();
  insideGlassCode = 1;
  Sys_LeaveCriticalSection(CRITSECT_CG_GLASS);
  result = Sys_IsWorkerCmdWaiting(WRKCMD_DPVS_CELL_GLASS, NULL);
  if ( result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 79, ASSERT_TYPE_ASSERT, "(!Sys_IsWorkerCmdWaiting( WRKCMD_DPVS_CELL_GLASS, nullptr ))", (const char *)&queryFormat, "!Sys_IsWorkerCmdWaiting( WRKCMD_DPVS_CELL_GLASS, nullptr )");
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
CG_Glass_Exit
==============
*/
void CG_Glass_Exit()
{
  Sys_EnterCriticalSection(CRITSECT_CG_GLASS);
  if ( !insideGlassCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 88, ASSERT_TYPE_ASSERT, "(insideGlassCode)", (const char *)&queryFormat, "insideGlassCode") )
    __debugbreak();
  insideGlassCode = 0;
  Sys_LeaveCriticalSection(CRITSECT_CG_GLASS);
}

/*
==============
CG_Glass_FreeMemory
==============
*/

void __fastcall CG_Glass_FreeMemory(double _XMM0_8)
{
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&cg_glassData.glassPieces = _XMM0;
  cg_glassData.glassChangeIndices = NULL;
  *(_QWORD *)&cg_glassData.pieceLimit = 0i64;
  Glass_FreeClientMemory();
}

/*
==============
CG_Glass_Init
==============
*/
void CG_Glass_Init(bool clearChanges)
{
  __int64 pieceLimit; 

  CG_Glass_Enter();
  if ( cg_glassInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 141, ASSERT_TYPE_ASSERT, "(!cg_glassInited)", (const char *)&queryFormat, "!cg_glassInited") )
    __debugbreak();
  pieceLimit = cg_glassData.pieceLimit;
  cg_glassInited = 1;
  memset_0(cg_glassData.glassPieces, 0, cg_glassData.pieceLimit);
  cg_glassData.soundsThisFrame = 0;
  cg_glassData.recievedInitialState = 0;
  if ( clearChanges )
  {
    memset_0(cg_glassData.glassChanges, 0, 4 * pieceLimit);
    cg_glassData.glassChangeCount = 0;
  }
  Glass_Init();
  CG_Glass_Exit();
}

/*
==============
CG_Glass_IsPieceSolid
==============
*/
_BOOL8 CG_Glass_IsPieceSolid(unsigned int glassPieceIndex)
{
  __int64 v1; 
  bool v2; 
  __int64 v4; 
  unsigned int pieceLimit; 

  v1 = (int)glassPieceIndex;
  Sys_EnterCriticalSection(CRITSECT_CG_GLASS);
  if ( insideGlassCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 99, ASSERT_TYPE_ASSERT, "(!insideGlassCode)", (const char *)&queryFormat, "!insideGlassCode") )
    __debugbreak();
  ++insideGlassCodeRead;
  Sys_LeaveCriticalSection(CRITSECT_CG_GLASS);
  if ( (unsigned int)v1 >= cg_glassData.pieceLimit )
  {
    pieceLimit = cg_glassData.pieceLimit;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v4, pieceLimit) )
      __debugbreak();
  }
  v2 = cg_glassData.glassPieces[v1].state < 2u;
  Sys_EnterCriticalSection(CRITSECT_CG_GLASS);
  if ( insideGlassCodeRead <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 110, ASSERT_TYPE_ASSERT, "(insideGlassCodeRead > 0)", (const char *)&queryFormat, "insideGlassCodeRead > 0") )
    __debugbreak();
  --insideGlassCodeRead;
  Sys_LeaveCriticalSection(CRITSECT_CG_GLASS);
  return v2;
}

/*
==============
CG_Glass_MeleeEvent
==============
*/
void CG_Glass_MeleeEvent(LocalClientNum_t localClientNum, int sourceEntityNum)
{
  __int64 v2; 
  __int64 v3; 
  centity_t *Entity; 
  CgWeaponMap *v5; 
  const Weapon *Weapon; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  cg_t *v9; 
  const characterInfo_t *CharacterInfo; 
  int meleeChargeEnt; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  double MeleeRangeByWeapon; 
  __int64 isSliding; 
  __int64 v19; 
  vec3_t outOrg; 
  __int64 v21; 
  vec3_t outEyePos; 
  vec3_t outForward; 
  vec3_t end; 
  vec3_t outUp; 
  vec3_t outRight; 

  v21 = -2i64;
  v2 = sourceEntityNum;
  v3 = localClientNum;
  Entity = CG_GetEntity(localClientNum, sourceEntityNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 349, ASSERT_TYPE_ASSERT, "(CENextValid( attacker ))", (const char *)&queryFormat, "CENextValid( attacker )") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v3];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v5, Entity->nextState.weaponHandle);
  if ( Weapon->weaponIdx )
  {
    CG_CalcEyePoint((LocalClientNum_t)v3, v2, &outEyePos);
    if ( CG_GetViewDirection((LocalClientNum_t)v3, v2, &outForward, &outRight, &outUp) )
    {
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 359, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentEntity( &attacker->nextState ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentEntity( &attacker->nextState )") )
        __debugbreak();
      outEyePos.v[0] = (float)(-10.0 * outForward.v[0]) + outEyePos.v[0];
      outEyePos.v[1] = (float)(-10.0 * outForward.v[1]) + outEyePos.v[1];
      outEyePos.v[2] = (float)(-10.0 * outForward.v[2]) + outEyePos.v[2];
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
      v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v9->IsMP(v9) )
      {
        if ( (unsigned int)v2 >= v9[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(isSliding) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", isSliding, v9[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v9[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v2);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v9, v2);
      }
      if ( CharacterInfo )
        meleeChargeEnt = CharacterInfo->meleeChargeEnt;
      else
        meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x14u);
      v13 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex >= 0 )
      {
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v19) = 64;
          LODWORD(isSliding) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", isSliding, v19) )
            __debugbreak();
        }
        v14 = ((0x80000000 >> (v13 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v13 >> 5]) != 0;
      }
      else
      {
        v14 = 0;
      }
      v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
      v16 = meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE;
      MeleeRangeByWeapon = BG_GetMeleeRangeByWeapon(Weapon, Entity->nextState.inAltWeaponMode, v16, v14, PM_EFF_STANCE_DEFAULT, v15);
      end.v[0] = (float)(*(float *)&MeleeRangeByWeapon * outForward.v[0]) + outEyePos.v[0];
      end.v[1] = (float)(*(float *)&MeleeRangeByWeapon * outForward.v[1]) + outEyePos.v[1];
      end.v[2] = (float)(*(float *)&MeleeRangeByWeapon * outForward.v[2]) + outEyePos.v[2];
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      Glass_TraceLine(&fxWorld.glassSys, &outEyePos, &end, &outOrg);
      memset(&outOrg, 0, sizeof(outOrg));
    }
  }
}

/*
==============
CG_Glass_PlaySoundAtPos
==============
*/
void CG_Glass_PlaySoundAtPos(LocalClientNum_t localClientNum, const vec3_t *pos, SndAliasList *snd)
{
  unsigned int id; 

  if ( !snd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 193, ASSERT_TYPE_ASSERT, "(snd)", (const char *)&queryFormat, "snd") )
    __debugbreak();
  if ( cg_glassData.recievedInitialState && cg_glassData.soundsThisFrame != 4 )
  {
    id = snd->id;
    ++cg_glassData.soundsThisFrame;
    SND_AddPlayFXSoundAlias(id, localClientNum, 2046, pos);
  }
}

/*
==============
CG_Glass_PlayerBreakEvent
==============
*/
void CG_Glass_PlayerBreakEvent(LocalClientNum_t localClientNum, int sourceEntityNum)
{
  cg_t *LocalClientGlobals; 
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float value; 
  CgHandler *Handler; 
  Physics_WorldId v17; 
  CgPlayerTraceInfo *PlayerTraceInfo; 
  int clientNum; 
  EffectiveStance EffectiveStance; 
  const Bounds *v21; 
  __int64 v22; 
  const FxGlassSystem *SystemForInitialPiece; 
  unsigned __int8 state; 
  FxGlassSystem *v25; 
  CG_GlassPiece *v26; 
  SndAliasList *DestroyedSound; 
  double InitialPieceAreaX2; 
  Bounds *bounds; 
  __int64 passEntityNum; 
  unsigned int pieceIndex; 
  unsigned int outLocalInitialPieceIndex; 
  vec3_t outOrg; 
  __int64 v34; 
  BgTrace v35; 
  vec3_t end; 
  vec3_t impactDir; 
  vec3_t pos; 
  Glass_BreakData breakData; 
  vec3_t outCenter; 
  trace_t results; 

  v34 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 387, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = LocalClientGlobals->predictedPlayerState.velocity.v[1];
  v5 = LODWORD(LocalClientGlobals->predictedPlayerState.velocity.v[0]);
  v6 = LocalClientGlobals->predictedPlayerState.velocity.v[2];
  v7 = v5;
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)(v4 * v4)) + (float)(v6 * v6));
  _XMM3 = v7;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
  }
  outLocalInitialPieceIndex = _XMM1;
  v11 = *(float *)&v5 * (float)(1.0 / *(float *)&_XMM1);
  v12 = v4 * (float)(1.0 / *(float *)&_XMM1);
  v13 = v6 * (float)(1.0 / *(float *)&_XMM1);
  v14 = DCONST_DVARFLT_player_glassBreakDistance;
  if ( !DCONST_DVARFLT_player_glassBreakDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_glassBreakDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  value = v14->current.value;
  end.v[0] = (float)(v11 * value) + LocalClientGlobals->predictedPlayerState.origin.v[0];
  end.v[1] = (float)(v12 * value) + LocalClientGlobals->predictedPlayerState.origin.v[1];
  end.v[2] = (float)(v13 * value) + LocalClientGlobals->predictedPlayerState.origin.v[2];
  Handler = CgHandler::getHandler(localClientNum);
  v17 = Handler->GetPhysicsWorldId(Handler);
  PlayerTraceInfo = CgPlayerTraceInfo::GetPlayerTraceInfo(localClientNum);
  BgTrace::BgTrace(&v35, PlayerTraceInfo);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  EffectiveStance = PM_GetEffectiveStance(&LocalClientGlobals->predictedPlayerState);
  v21 = BG_Suit_GetBounds(LocalClientGlobals->predictedPlayerState.suitIndex, EffectiveStance);
  BgTrace::LegacyTraceHandler(&v35, v17, &results, &LocalClientGlobals->predictedPlayerState.origin, &end, v21, clientNum, 16, &LocalClientGlobals->predictedPlayerState);
  if ( results.fraction < 1.0 && BG_Glass_CanBreakGlass(&results) )
  {
    v22 = (unsigned __int16)(Trace_GetGlassHitId(&results) - 1);
    SystemForInitialPiece = Glass_GetSystemForInitialPiece(v22, &outLocalInitialPieceIndex);
    Glass_GetInitialPieceCenter(SystemForInitialPiece, outLocalInitialPieceIndex, &outCenter);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    if ( (unsigned int)v22 >= cg_glassData.pieceLimit )
    {
      LODWORD(passEntityNum) = cg_glassData.pieceLimit;
      LODWORD(bounds) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", bounds, passEntityNum) )
        __debugbreak();
    }
    state = cg_glassData.glassPieces[v22].state;
    if ( state < 2u )
    {
      v25 = Glass_GetSystemForInitialPiece(v22, &pieceIndex);
      if ( v25 )
      {
        pos = outCenter;
        impactDir.v[0] = v11;
        impactDir.v[1] = v12;
        impactDir.v[2] = v13;
        if ( !state )
          Glass_DamageInitialPiece(v25, pieceIndex);
        v26 = CG_GlassPieceFromIndex(v22);
        DestroyedSound = Glass_GetDestroyedSound(v22);
        if ( DestroyedSound )
          CG_Glass_PlaySoundAtPos(localClientNum, &pos, DestroyedSound);
        breakData.brokenPieceCount = 1;
        InitialPieceAreaX2 = Glass_GetInitialPieceAreaX2(v25, pieceIndex);
        breakData.totalAreaX2 = *(float *)&InitialPieceAreaX2;
        breakData.playerOrigin = outOrg;
        Glass_DestroyInitialPiece(v25, pieceIndex, &pos, &impactDir, &breakData);
        v26->state = 2;
      }
      else
      {
        CG_GlassPieceFromIndex(v22)->state = 2;
      }
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CG_Glass_RecordPieceChange
==============
*/
void CG_Glass_RecordPieceChange(const CG_GlassPieceChangeWithIndex *pieceChangeWithIndex)
{
  __int64 glassChangeCount; 
  __int64 v3; 

  if ( !pieceChangeWithIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 536, ASSERT_TYPE_ASSERT, "(pieceChangeWithIndex)", (const char *)&queryFormat, "pieceChangeWithIndex") )
    __debugbreak();
  if ( pieceChangeWithIndex->pieceIndex >= cg_glassData.pieceLimit )
  {
    LODWORD(v3) = pieceChangeWithIndex->pieceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 537, ASSERT_TYPE_ASSERT, "(unsigned)( pieceChangeWithIndex->pieceIndex ) < (unsigned)( cg_glassData.pieceLimit )", "pieceChangeWithIndex->pieceIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v3, cg_glassData.pieceLimit) )
      __debugbreak();
  }
  glassChangeCount = cg_glassData.glassChangeCount;
  cg_glassData.glassChanges[pieceChangeWithIndex->pieceIndex] = pieceChangeWithIndex->pieceChange;
  if ( (unsigned int)glassChangeCount >= 0x1000 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 549, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many glass piece changes received in this snapshot. Some glass pieces will lose state as a result.") )
      __debugbreak();
  }
  else
  {
    cg_glassData.glassChangeIndices[glassChangeCount] = pieceChangeWithIndex->pieceIndex;
    cg_glassData.glassChangeCount = glassChangeCount + 1;
  }
}

/*
==============
CG_Glass_Reset
==============
*/
void CG_Glass_Reset(const LocalClientNum_t localClientNum)
{
  unsigned int pieceLimit; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    pieceLimit = cg_glassData.pieceLimit;
    memset_0(cg_glassData.glassChanges, 0, 4i64 * cg_glassData.pieceLimit);
    *(_QWORD *)&cg_glassData.glassChangeCount = 0i64;
    memset_0(cg_glassData.glassPieces, 0, pieceLimit);
    cg_glassData.recievedInitialState = 0;
    Glass_Reset();
  }
}

/*
==============
CG_Glass_RestoreGlassState
==============
*/
void CG_Glass_RestoreGlassState(FxGlassSystem *glassSys, const unsigned int glassPieceBeginIndex, const unsigned int glassPieceEndIndex)
{
  unsigned int pieceLimit; 
  __int64 v5; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 state; 
  __int64 v11; 
  __int64 v12; 

  pieceLimit = cg_glassData.pieceLimit;
  v5 = glassPieceBeginIndex;
  if ( cg_glassData.pieceLimit )
  {
    if ( !glassSys )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 562, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
        __debugbreak();
      pieceLimit = cg_glassData.pieceLimit;
    }
    if ( (unsigned int)v5 >= pieceLimit )
    {
      LODWORD(v11) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 563, ASSERT_TYPE_ASSERT, "(unsigned)( glassPieceBeginIndex ) < (unsigned)( cg_glassData.pieceLimit )", "glassPieceBeginIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v11, pieceLimit) )
        __debugbreak();
      pieceLimit = cg_glassData.pieceLimit;
    }
    if ( glassPieceEndIndex >= pieceLimit )
    {
      LODWORD(v12) = pieceLimit;
      LODWORD(v11) = glassPieceEndIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 564, ASSERT_TYPE_ASSERT, "(unsigned)( glassPieceEndIndex ) < (unsigned)( cg_glassData.pieceLimit )", "glassPieceEndIndex doesn't index cg_glassData.pieceLimit\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v7 = 0;
    if ( (unsigned int)v5 < glassPieceEndIndex )
    {
      v8 = glassPieceEndIndex - (unsigned int)v5;
      v9 = v5;
      do
      {
        state = cg_glassData.glassPieces[v9].state;
        if ( state )
        {
          if ( state == 1 )
          {
            Glass_DamageInitialPiece(glassSys, v7);
          }
          else if ( (unsigned __int8)(state - 2) > 1u )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 586, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled glass piece state!") )
              __debugbreak();
          }
          else
          {
            Glass_DeleteInitialPiece(glassSys, v7);
          }
        }
        ++v7;
        ++v9;
        --v8;
      }
      while ( v8 );
    }
  }
}

/*
==============
CG_Glass_RestoreSystemInitialState
==============
*/
void CG_Glass_RestoreSystemInitialState(FxGlassSystem *glassSys, const unsigned int transientZoneIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v2 = transientZoneIndex;
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 597, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  if ( (unsigned int)v2 >= fxWorld.transientZoneCount )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 598, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( fxWorld.transientZoneCount )", "transientZoneIndex doesn't index fxWorld.transientZoneCount\n\t%i not in [0, %i)", v5, fxWorld.transientZoneCount) )
      __debugbreak();
  }
  if ( glassSys->initPieceCount )
  {
    v4 = 0i64;
    if ( fxWorld.glassGlob.glassTransientLookupCount )
    {
      while ( fxWorld.glassGlob.glassTransientLookup[v4].transientIndex != (_DWORD)v2 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= fxWorld.glassGlob.glassTransientLookupCount )
          goto LABEL_11;
      }
      CG_Glass_RestoreGlassState(glassSys, fxWorld.glassGlob.glassTransientLookup[v4].globalPieceStartIndex, fxWorld.glassGlob.glassTransientLookup[v4].globalPieceStartIndex + *(_DWORD *)(*(_QWORD *)&fxWorld.activeTransientZones[4 * v2 - 6144] + 148i64));
    }
    else
    {
LABEL_11:
      if ( (_DWORD)v2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_glass.cpp", 616, ASSERT_TYPE_ASSERT, "( transientZoneIndex ) == ( TRANSIENT_ZONE_ALWAYSLOADED )", "%s == %s\n\t%u, %u", "transientZoneIndex", "TRANSIENT_ZONE_ALWAYSLOADED", v2, 0i64) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_Glass_Shutdown
==============
*/
void CG_Glass_Shutdown(void)
{
  Glass_Shutdown();
  cg_glassInited = 0;
}

/*
==============
CG_LoadGlass
==============
*/
void CG_LoadGlass(MemoryFile *memFile)
{
  __int64 i; 
  unsigned __int16 transientIndex; 
  FxGlassSystem *GlassSystemForTransientIndex; 

  MemFile_ReadData(memFile, cg_glassData.pieceLimit, cg_glassData.glassPieces);
  for ( i = 0i64; (unsigned int)i < fxWorld.glassGlob.glassTransientLookupCount; i = (unsigned int)(i + 1) )
  {
    transientIndex = fxWorld.glassGlob.glassTransientLookup[i].transientIndex;
    GlassSystemForTransientIndex = Glass_GetGlassSystemForTransientIndex(transientIndex);
    if ( GlassSystemForTransientIndex )
    {
      if ( !GlassSystemForTransientIndex->initPieceCount )
        return;
      CG_Glass_RestoreGlassState(GlassSystemForTransientIndex, fxWorld.glassGlob.glassTransientLookup[i].globalPieceStartIndex, fxWorld.glassGlob.glassTransientLookup[i].globalPieceStartIndex + *(_DWORD *)(*(_QWORD *)&fxWorld.activeTransientZones[4 * transientIndex - 6144] + 148i64));
    }
  }
}

/*
==============
CG_SaveGlass
==============
*/
void CG_SaveGlass(MemoryFile *memFile)
{
  MemFile_WriteData(memFile, cg_glassData.pieceLimit, cg_glassData.glassPieces);
}

