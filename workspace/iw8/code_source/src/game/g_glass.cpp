/*
==============
G_Glass_IsIndexValid
==============
*/

bool __fastcall G_Glass_IsIndexValid(unsigned int index)
{
  return ?G_Glass_IsIndexValid@@YA_NI@Z(index);
}

/*
==============
G_Glass_GetIndicesFromName
==============
*/

const unsigned __int16 *__fastcall G_Glass_GetIndicesFromName(scr_string_t name, unsigned int *count)
{
  return ?G_Glass_GetIndicesFromName@@YAPEBGW4scr_string_t@@PEAI@Z(name, count);
}

/*
==============
G_Glass_DeletePiece
==============
*/

void __fastcall G_Glass_DeletePiece(unsigned int pieceIndex)
{
  ?G_Glass_DeletePiece@@YAXI@Z(pieceIndex);
}

/*
==============
G_SaveGlass
==============
*/

void __fastcall G_SaveGlass(MemoryFile *memFile)
{
  ?G_SaveGlass@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_Glass_RestorePiece
==============
*/

void __fastcall G_Glass_RestorePiece(unsigned int pieceIndex, unsigned __int16 damageTaken)
{
  ?G_Glass_RestorePiece@@YAXIG@Z(pieceIndex, damageTaken);
}

/*
==============
G_Glass_GetPieceOrigin
==============
*/

void __fastcall G_Glass_GetPieceOrigin(unsigned int index, vec3_t *outOrigin)
{
  ?G_Glass_GetPieceOrigin@@YAXIAEATvec3_t@@@Z(index, outOrigin);
}

/*
==============
G_PhysBreakGlass
==============
*/

void __fastcall G_PhysBreakGlass(const vec3_t *origin, const vec3_t *normal)
{
  ?G_PhysBreakGlass@@YAXAEBTvec3_t@@0@Z(origin, normal);
}

/*
==============
G_ResetGlass
==============
*/

void G_ResetGlass(void)
{
  ?G_ResetGlass@@YAXXZ();
}

/*
==============
G_Glass_WriteEndOfGlassMarker
==============
*/

void __fastcall G_Glass_WriteEndOfGlassMarker(msg_t *msg)
{
  ?G_Glass_WriteEndOfGlassMarker@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
G_Glass_RadiusDamage
==============
*/

void __fastcall G_Glass_RadiusDamage(const vec3_t *origin, float radius, float coneAngleCos, const vec3_t *coneDirection, float innerDamage, float outerDamage)
{
  ?G_Glass_RadiusDamage@@YAXAEBTvec3_t@@MMPEBT1@MM@Z(origin, radius, coneAngleCos, coneDirection, innerDamage, outerDamage);
}

/*
==============
G_Glass_WriteChanges
==============
*/

void __fastcall G_Glass_WriteChanges(const SnapshotInfo *snapInfo, msg_t *msg, int sinceTime)
{
  ?G_Glass_WriteChanges@@YAXPEBUSnapshotInfo@@PEAUmsg_t@@H@Z(snapInfo, msg, sinceTime);
}

/*
==============
G_Glass_DamagePiece
==============
*/

void __fastcall G_Glass_DamagePiece(unsigned int pieceIndex, int damage, const vec3_t *damagePos, const vec3_t *damageDir)
{
  ?G_Glass_DamagePiece@@YAXIHAEBTvec3_t@@0@Z(pieceIndex, damage, damagePos, damageDir);
}

/*
==============
G_LoadGlass
==============
*/

void __fastcall G_LoadGlass(MemoryFile *memFile)
{
  ?G_LoadGlass@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_Glass_IsPieceSolid
==============
*/

bool __fastcall G_Glass_IsPieceSolid(unsigned int pieceIndex)
{
  return ?G_Glass_IsPieceSolid@@YA_NI@Z(pieceIndex);
}

/*
==============
G_Glass_TempDestroyPiece
==============
*/

unsigned __int16 __fastcall G_Glass_TempDestroyPiece(unsigned int pieceIndex)
{
  return ?G_Glass_TempDestroyPiece@@YAGI@Z(pieceIndex);
}

/*
==============
G_Glass_Update
==============
*/

void G_Glass_Update(void)
{
  ?G_Glass_Update@@YAXXZ();
}

/*
==============
G_ShutdownGlass
==============
*/

void G_ShutdownGlass(void)
{
  ?G_ShutdownGlass@@YAXXZ();
}

/*
==============
G_InitGlass
==============
*/

void __fastcall G_InitGlass(const char *mapName)
{
  ?G_InitGlass@@YAXPEBD@Z(mapName);
}

/*
==============
G_Glass_DestroyPiece
==============
*/

void __fastcall G_Glass_DestroyPiece(unsigned int pieceIndex, const vec3_t *damagePos, const vec3_t *damageDir)
{
  ?G_Glass_DestroyPiece@@YAXIAEBTvec3_t@@0@Z(pieceIndex, damagePos, damageDir);
}

/*
==============
G_Glass_GetPieceState
==============
*/

GlassPieceState __fastcall G_Glass_GetPieceState(unsigned int pieceIndex)
{
  return ?G_Glass_GetPieceState@@YA?AW4GlassPieceState@@I@Z(pieceIndex);
}

/*
==============
G_GlassPieceFromIndex
==============
*/
G_GlassPiece *G_GlassPieceFromIndex(unsigned int pieceIndex)
{
  __int64 v1; 

  v1 = pieceIndex;
  if ( pieceIndex >= *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( g_glassData->pieceCount )", "pieceIndex doesn't index g_glassData->pieceCount\n\t%i not in [0, %i)", pieceIndex, *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64)) )
    __debugbreak();
  return (G_GlassPiece *)(**(_QWORD **)&g_glassData + 12 * v1);
}

/*
==============
G_Glass_DamagePiece
==============
*/
void G_Glass_DamagePiece(unsigned int pieceIndex, int damage, const vec3_t *damagePos, const vec3_t *damageDir)
{
  GlassPieceState PieceState; 
  G_GlassPiece *v9; 
  unsigned int v10; 

  PieceState = G_Glass_GetPieceState(pieceIndex);
  v9 = G_GlassPieceFromIndex(pieceIndex);
  v10 = damage + v9->damageTaken;
  if ( v10 > 0xFFFE )
    LOWORD(v10) = -2;
  v9->damageTaken = v10;
  if ( G_Glass_GetPieceState(pieceIndex) != PieceState )
    G_Glass_PieceStateChanged(pieceIndex, PieceState, damagePos, damageDir);
}

/*
==============
G_Glass_DeletePiece
==============
*/
void G_Glass_DeletePiece(unsigned int pieceIndex)
{
  int PieceState; 
  G_GlassPiece *v3; 

  PieceState = G_Glass_GetPieceState(pieceIndex);
  if ( PieceState < 3 )
  {
    v3 = G_GlassPieceFromIndex(pieceIndex);
    if ( v3->damageTaken == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 304, ASSERT_TYPE_ASSERT, "(piece->damageTaken < 0xffff)", (const char *)&queryFormat, "piece->damageTaken < USHRT_MAX") )
      __debugbreak();
    v3->damageTaken = -1;
    G_Glass_PieceStateChanged(pieceIndex, (GlassPieceState)PieceState, &vec3_origin, &vec3_origin);
  }
}

/*
==============
G_Glass_DestroyPiece
==============
*/
void G_Glass_DestroyPiece(unsigned int pieceIndex, const vec3_t *damagePos, const vec3_t *damageDir)
{
  int PieceState; 
  G_GlassPiece *v7; 
  const dvar_t *v8; 
  G_GlassPiece *v9; 

  PieceState = G_Glass_GetPieceState(pieceIndex);
  if ( PieceState < 2 )
  {
    v7 = G_GlassPieceFromIndex(pieceIndex);
    v8 = DVARINT_glass_damageToDestroy;
    v9 = v7;
    if ( !DVARINT_glass_damageToDestroy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_damageToDestroy") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9->damageTaken = v8->current.unsignedInt;
    G_Glass_PieceStateChanged(pieceIndex, (GlassPieceState)PieceState, damagePos, damageDir);
  }
}

/*
==============
G_Glass_GetIndicesFromName
==============
*/
const unsigned __int16 *G_Glass_GetIndicesFromName(scr_string_t name, unsigned int *count)
{
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 

  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 99, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  v4 = 0i64;
  v5 = *(_DWORD *)(*(_QWORD *)&g_glassData + 16i64);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)&g_glassData + 24i64);
    while ( *(_DWORD *)(v6 + 24 * v4 + 8) != name )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v5 )
        goto LABEL_8;
    }
    *count = *(unsigned __int16 *)(24 * v4 + v6 + 12);
    return *(const unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)&g_glassData + 24i64) + 24 * v4 + 16);
  }
  else
  {
LABEL_8:
    *count = 0;
    return 0i64;
  }
}

/*
==============
G_Glass_GetPieceOrigin
==============
*/
void G_Glass_GetPieceOrigin(unsigned int index, vec3_t *outOrigin)
{
  const FxGlassSystem *SystemForInitialPiece; 
  unsigned int outLocalInitialPieceIndex; 

  SystemForInitialPiece = Glass_GetSystemForInitialPiece(index, &outLocalInitialPieceIndex);
  Glass_GetInitialPieceCenter(SystemForInitialPiece, outLocalInitialPieceIndex, outOrigin);
}

/*
==============
G_Glass_GetPieceState
==============
*/
__int64 G_Glass_GetPieceState(unsigned int pieceIndex)
{
  G_GlassPiece *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  v1 = G_GlassPieceFromIndex(pieceIndex);
  if ( v1->damageTaken == 0xFFFF )
    return 3i64;
  v3 = DVARINT_glass_damageToDestroy;
  if ( !DVARINT_glass_damageToDestroy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_damageToDestroy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v1->damageTaken >= LOWORD(v3->current.value) )
    return 2i64;
  v4 = DVARINT_glass_damageToWeaken;
  if ( !DVARINT_glass_damageToWeaken && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_damageToWeaken") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return v1->damageTaken >= LOWORD(v4->current.value);
}

/*
==============
G_Glass_IsIndexValid
==============
*/
bool G_Glass_IsIndexValid(unsigned int index)
{
  return index < *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64);
}

/*
==============
G_Glass_IsPieceSolid
==============
*/
bool G_Glass_IsPieceSolid(unsigned int pieceIndex)
{
  return pieceIndex < *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) && G_Glass_GetPieceState(pieceIndex) < GLASS_DESTROYED;
}

/*
==============
G_Glass_PieceStateChanged
==============
*/
void G_Glass_PieceStateChanged(unsigned int pieceIndex, GlassPieceState oldState, const vec3_t *damagePos, const vec3_t *damageDir)
{
  G_GlassPiece *v8; 
  int PieceState; 
  double v10; 
  double v11; 
  double v12; 
  const FxGlassSystem *SystemForInitialPiece; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  scrContext_t *v19; 
  unsigned int outLocalInitialPieceIndex; 
  vec3_t outCenter; 
  tmat33_t<vec3_t> outAxis; 

  v8 = G_GlassPieceFromIndex(pieceIndex);
  v8->lastStateChangeTime = level.time;
  PieceState = G_Glass_GetPieceState(pieceIndex);
  if ( PieceState == 1 )
  {
    v10 = G_random();
    if ( *(float *)&v10 >= 0.30000001 )
    {
      if ( *(float *)&v10 >= 0.69999999 )
      {
        v8->collapseTime = 0;
      }
      else
      {
        v12 = G_random();
        v8->collapseTime = (60000 - (int)(float)(*(float *)&v12 * -540000.0)) / 100;
      }
    }
    else
    {
      v11 = G_random();
      v8->collapseTime = (3000 - (int)(float)(*(float *)&v11 * -57000.0)) / 100;
    }
  }
  else if ( PieceState == 2 )
  {
    if ( (float)((float)((float)(damageDir->v[0] * damageDir->v[0]) + (float)(damageDir->v[1] * damageDir->v[1])) + (float)(damageDir->v[2] * damageDir->v[2])) <= 0.0 )
    {
      *(_WORD *)&v8->impactDir = 255;
      v8->impactPos[1] = 0;
    }
    else
    {
      v8->impactDir = DirToByte(damageDir);
      SystemForInitialPiece = Glass_GetSystemForInitialPiece(pieceIndex, &outLocalInitialPieceIndex);
      Glass_GetInitialPieceCenter(SystemForInitialPiece, outLocalInitialPieceIndex, &outCenter);
      Glass_GetInitialPieceAxis(SystemForInitialPiece, outLocalInitialPieceIndex, &outAxis);
      v14 = damagePos->v[0] - outCenter.v[0];
      v15 = damagePos->v[1] - outCenter.v[1];
      v16 = damagePos->v[2] - outCenter.v[2];
      v17 = (float)(v15 * outAxis.m[0].v[1]) + (float)(v14 * outAxis.m[0].v[0]);
      v18 = (float)((float)(v15 * outAxis.m[1].v[1]) + (float)(v14 * outAxis.m[1].v[0])) + (float)(v16 * outAxis.m[1].v[2]);
      v8->impactPos[0] = PackFloat(v17 + (float)(v16 * outAxis.m[0].v[2]));
      v8->impactPos[1] = PackFloat(v18);
    }
    Nav_DestroyObstacleByGlass(pieceIndex);
  }
  if ( oldState < GLASS_DESTROYED && PieceState >= 2 )
  {
    v19 = ScriptContext_Server();
    Scr_AddInt(v19, pieceIndex);
    Scr_NotifyLevel(v19, scr_const.glass_destroyed, 1u);
  }
}

/*
==============
G_Glass_RadiusDamage
==============
*/

void __fastcall G_Glass_RadiusDamage(const vec3_t *origin, double radius, float coneAngleCos, const vec3_t *coneDirection, float innerDamage, float outerDamage)
{
  signed __int64 v6; 
  void *v7; 
  unsigned __int64 v8; 
  __int64 v14; 
  double v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  FxGlassSystem *SystemForInitialPiece; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  float v30; 
  GlassPieceState PieceState; 
  G_GlassPiece *v32; 
  unsigned int v33; 
  __int64 v34; 
  char v35[4400]; 

  v7 = alloca(v6);
  v8 = (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1120) = (unsigned __int64)&v34 ^ _security_cookie;
  _XMM6 = *(_OWORD *)&radius;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Glass_RadiusDamage");
  __asm { vminss  xmm7, xmm6, cs:__real@43800000 }
  v14 = *(_QWORD *)&g_glassData;
  v15 = *(double *)origin->v;
  *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = origin->v[2];
  *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34) = *(float *)&_XMM7;
  *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = *(float *)&_XMM7;
  *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3C) = *(float *)&_XMM7;
  *(double *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v15;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(v8 + 64), *(const SpatialPartition_Tree **)(v14 + 32), (const Bounds *)(v8 + 40));
  if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 64)) )
  {
    do
    {
      if ( !*(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v16 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 20i64);
      v17 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      if ( v17 == v16 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) >= **(unsigned __int8 **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v18 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) + 4i64 * *(unsigned int *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) + 4);
      }
      else
      {
        if ( v17 >= v16 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v17 = *(_DWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
        }
        v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 8i64) + 4i64 * v17);
      }
      SystemForInitialPiece = Glass_GetSystemForInitialPiece(v18, (unsigned int *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64));
      if ( SystemForInitialPiece )
      {
        if ( *(_DWORD *)v8 < SystemForInitialPiece->initPieceCount )
        {
          Glass_GetInitialPieceCenter(SystemForInitialPiece, *(_DWORD *)v8, (vec3_t *)(v8 + 24));
          v20 = *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) - origin->v[0];
          v21 = *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) - origin->v[1];
          v22 = *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) - origin->v[2];
          *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v21;
          v23 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
          *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v20;
          *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v22;
          if ( v23 < (float)(*(float *)&_XMM7 * *(float *)&_XMM7) && G_Glass_GetPieceState(v18) < GLASS_DESTROYED )
          {
            v24 = fsqrt(v23);
            v25 = (float)(1.0 / v24) * *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
            v26 = (float)(1.0 / v24) * *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
            v27 = (float)(1.0 / v24) * *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
            *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v25;
            *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v26;
            *(float *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v27;
            if ( !coneDirection || (float)((float)((float)(v26 * coneDirection->v[1]) + (float)(v25 * coneDirection->v[0])) + (float)(v27 * coneDirection->v[2])) >= coneAngleCos )
            {
              v28 = DVARFLT_glass_radiusDamageMultiplier;
              v29 = (float)((float)(v24 / *(float *)&_XMM7) * (float)(outerDamage - innerDamage)) + innerDamage;
              if ( !DVARFLT_glass_radiusDamageMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_radiusDamageMultiplier") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v28);
              v30 = v29 * v28->current.value;
              if ( (int)v30 )
              {
                PieceState = G_Glass_GetPieceState(v18);
                v32 = G_GlassPieceFromIndex(v18);
                v33 = (int)v30 + v32->damageTaken;
                if ( v33 > 0xFFFE )
                  LOWORD(v33) = -2;
                v32->damageTaken = v33;
                if ( G_Glass_GetPieceState(v18) != PieceState )
                  G_Glass_PieceStateChanged(v18, PieceState, (const vec3_t *)(v8 + 24), (const vec3_t *)(v8 + 8));
              }
            }
          }
        }
      }
    }
    while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v8 + 64)) );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Glass_RestorePiece
==============
*/
void G_Glass_RestorePiece(unsigned int pieceIndex, unsigned __int16 damageTaken)
{
  G_GlassPieceFromIndex(pieceIndex)->damageTaken = damageTaken;
}

/*
==============
G_Glass_TempDestroyPiece
==============
*/
__int64 G_Glass_TempDestroyPiece(unsigned int pieceIndex)
{
  G_GlassPiece *v1; 
  const dvar_t *v2; 
  G_GlassPiece *v3; 
  unsigned __int16 damageTaken; 
  __int64 result; 

  v1 = G_GlassPieceFromIndex(pieceIndex);
  v2 = DVARINT_glass_damageToDestroy;
  v3 = v1;
  damageTaken = v1->damageTaken;
  if ( !DVARINT_glass_damageToDestroy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_damageToDestroy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  result = damageTaken;
  v3->damageTaken = v2->current.unsignedInt;
  return result;
}

/*
==============
G_Glass_Update
==============
*/
void G_Glass_Update(void)
{
  __int64 i; 
  unsigned __int16 v1; 

  for ( i = 0i64; (unsigned int)i < *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64); i = (unsigned int)(i + 1) )
  {
    v1 = *(_WORD *)(**(_QWORD **)&g_glassData + 12 * i + 2);
    if ( v1 )
    {
      if ( *(_DWORD *)(**(_QWORD **)&g_glassData + 12 * i + 4) + 100 * v1 < level.time )
        G_Glass_DestroyPiece(i, &vec3_origin, &vec3_origin);
    }
  }
}

/*
==============
G_Glass_WriteChanges
==============
*/
void G_Glass_WriteChanges(const SnapshotInfo *snapInfo, msg_t *msg, int sinceTime)
{
  __int64 v3; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  G_GlassPiece *v11; 
  GlassPieceState v12; 
  __int64 v13; 
  __int64 PieceState; 
  int UsedBitCount; 
  __int64 v16; 
  __int64 v17; 
  int time; 
  int timea; 

  v3 = 0i64;
  time = level.time;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) )
    goto LABEL_28;
  do
  {
    if ( *(_DWORD *)(**(_QWORD **)&g_glassData + 12i64 * v8 + 4) >= sinceTime && G_Glass_GetPieceState(v8) )
    {
      ++v6;
      v7 = v8 + 1;
    }
    ++v8;
  }
  while ( v8 < *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) );
  v9 = time;
  if ( v6 )
  {
    timea = MSG_GetUsedBitCount(msg);
    v10 = timea;
    MSG_WriteBit1(msg);
    if ( 2 * (9 * v6 + 9) >= 2 * v7 + 16 )
    {
      MSG_WriteBit0(msg);
      MSG_WriteBits(msg, v7, 0x10u);
      if ( v7 )
      {
        do
        {
          PieceState = G_Glass_GetPieceState(v3);
          MSG_WriteBits(msg, PieceState, 2u);
          if ( (_DWORD)PieceState == 2 )
          {
            if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) )
            {
              LODWORD(v17) = *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64);
              LODWORD(v16) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( g_glassData->pieceCount )", "pieceIndex doesn't index g_glassData->pieceCount\n\t%i not in [0, %i)", v16, v17) )
                __debugbreak();
            }
            G_Glass_WriteImpactInfo(msg, (G_GlassPiece *)(**(_QWORD **)&g_glassData + 12 * v3), v9);
          }
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < v7 );
        v10 = timea;
      }
    }
    else
    {
      MSG_WriteBit1(msg);
      if ( *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) )
      {
        do
        {
          v11 = (G_GlassPiece *)(**(_QWORD **)&g_glassData + 12 * v3);
          if ( v11->lastStateChangeTime >= sinceTime )
          {
            v12 = G_Glass_GetPieceState(v3);
            v13 = v12;
            if ( v12 )
            {
              if ( (unsigned int)v3 >= 0xFDF0 )
              {
                LODWORD(v17) = 65008;
                LODWORD(v16) = v3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 547, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( 65008 )", "pieceIndex doesn't index MAX_MAP_GLASS_PIECES\n\t%i not in [0, %i)", v16, v17) )
                  __debugbreak();
              }
              MSG_WriteBits(msg, (unsigned int)v3, 0x10u);
              MSG_WriteBits(msg, v13, 2u);
              if ( (_DWORD)v13 == 2 )
                G_Glass_WriteImpactInfo(msg, v11, v9);
            }
          }
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)&g_glassData + 8i64) );
        v10 = timea;
      }
      MSG_WriteBits(msg, 65008i64, 0x10u);
    }
    UsedBitCount = MSG_GetUsedBitCount(msg);
    SV_BandwidthProfile_AddGlassToSnapshot(snapInfo, v6, UsedBitCount - v10);
  }
  else
  {
LABEL_28:
    MSG_WriteBit0(msg);
  }
}

/*
==============
G_Glass_WriteEndOfGlassMarker
==============
*/

void __fastcall G_Glass_WriteEndOfGlassMarker(msg_t *msg)
{
  MSG_WriteBit0(msg);
}

/*
==============
G_Glass_WriteImpactInfo
==============
*/
void G_Glass_WriteImpactInfo(msg_t *msg, G_GlassPiece *piece, int time)
{
  if ( piece->lastStateChangeTime + 1000 >= time )
  {
    if ( piece->impactDir == 0xFF )
    {
      MSG_WriteBit0(msg);
    }
    else
    {
      MSG_WriteBit1(msg);
      MSG_WriteByte(msg, piece->impactDir);
      MSG_WriteBits(msg, piece->impactPos[0], 6u);
      MSG_WriteBits(msg, piece->impactPos[1], 6u);
    }
  }
  else
  {
    piece->impactDir = -1;
    MSG_WriteBit0(msg);
  }
}

/*
==============
G_InitGlass
==============
*/
void G_InitGlass(const char *mapName)
{
  const char *CompileBSPFilename; 
  __int64 v2; 
  __int64 i; 
  scr_string_t *v4; 

  CompileBSPFilename = Com_GetCompileBSPFilename(mapName);
  if ( DB_FindXAssetHeader(ASSET_TYPE_GLASSWORLD, CompileBSPFilename, 1).glassWorld != &glassWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 42, ASSERT_TYPE_ASSERT, "(header.glassWorld == &glassWorld)", (const char *)&queryFormat, "header.glassWorld == &glassWorld") )
    __debugbreak();
  *(_QWORD *)&g_glassData = glassWorld.g_glassData;
  memset_0(glassWorld.g_glassData->glassPieces, 0, 12i64 * glassWorld.g_glassData->pieceCount);
  v2 = *(_QWORD *)&g_glassData;
  for ( i = 0i64; (unsigned int)i < *(_DWORD *)(*(_QWORD *)&g_glassData + 16i64); v2 = *(_QWORD *)&g_glassData )
  {
    v4 = (scr_string_t *)(*(_QWORD *)(v2 + 24) + 24 * i + 8);
    Scr_SetString(v4, (scr_string_t)0);
    *v4 = Scr_NewString(*(const char **)(*(_QWORD *)(*(_QWORD *)&g_glassData + 24i64) + 24 * i));
    i = (unsigned int)(i + 1);
  }
}

/*
==============
G_LoadGlass
==============
*/
void G_LoadGlass(MemoryFile *memFile)
{
  __int64 v1; 
  __int64 v3; 

  v1 = *(_QWORD *)&g_glassData;
  if ( !*(_QWORD *)&g_glassData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 594, g_glassData, "(g_glassData)", (const char *)&queryFormat, "g_glassData") )
      __debugbreak();
    v1 = *(_QWORD *)&g_glassData;
  }
  v3 = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)v3 )
    MemFile_ReadData(memFile, 12 * v3, *(void **)v1);
}

/*
==============
G_PhysBreakGlass
==============
*/
void G_PhysBreakGlass(const vec3_t *origin, const vec3_t *normal)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  unsigned __int16 GlassHitId; 
  float v9; 
  vec3_t start; 
  vec3_t end; 
  vec3_t damageDir; 
  vec3_t damagePos; 
  trace_t results; 

  v2 = origin->v[1];
  v3 = origin->v[2];
  v4 = origin->v[0] - normal->v[0];
  start.v[0] = origin->v[0] + normal->v[0];
  start.v[1] = v2 + normal->v[1];
  start.v[2] = v3 + normal->v[2];
  v5 = v2 - normal->v[1];
  end.v[0] = v4;
  v6 = v3 - normal->v[2];
  end.v[1] = v5;
  end.v[2] = v6;
  G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, 2047, 16);
  if ( results.fraction != 1.0 && Com_IsSurfaceTypeBreakableGlass(results.surfaceFlags) && Trace_GetEntityHitId(&results) >= 0x7FEu )
  {
    GlassHitId = Trace_GetGlassHitId(&results);
    if ( GlassHitId )
    {
      LODWORD(v9) = LODWORD(normal->v[1]) ^ _xmm;
      LODWORD(damageDir.v[0]) = LODWORD(normal->v[0]) ^ _xmm;
      LODWORD(damageDir.v[2]) = LODWORD(normal->v[2]) ^ _xmm;
      damagePos.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      damageDir.v[1] = v9;
      damagePos.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      damagePos.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      G_Glass_DestroyPiece(GlassHitId - 1, &damagePos, &damageDir);
    }
  }
}

/*
==============
G_ResetGlass
==============
*/
void G_ResetGlass(void)
{
  if ( *(_QWORD *)&g_glassData )
    memset_0(**(void ***)&g_glassData, 0, 12i64 * *(unsigned int *)(*(_QWORD *)&g_glassData + 8i64));
}

/*
==============
G_SaveGlass
==============
*/
void G_SaveGlass(MemoryFile *memFile)
{
  __int64 v1; 
  __int64 v3; 

  v1 = *(_QWORD *)&g_glassData;
  if ( !*(_QWORD *)&g_glassData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 585, g_glassData, "(g_glassData)", (const char *)&queryFormat, "g_glassData") )
      __debugbreak();
    v1 = *(_QWORD *)&g_glassData;
  }
  v3 = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)v3 )
    MemFile_WriteData(memFile, 12 * v3, *(const void **)v1);
}

/*
==============
G_ShutdownGlass
==============
*/
void G_ShutdownGlass(void)
{
  __int64 v0; 
  __int64 v1; 

  v0 = *(_QWORD *)&g_glassData;
  if ( *(_QWORD *)&g_glassData )
  {
    if ( *(_DWORD *)(*(_QWORD *)&g_glassData + 16i64) && !*(_QWORD *)(*(_QWORD *)&g_glassData + 24i64) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_glass.cpp", 73, ASSERT_TYPE_ASSERT, "(!g_glassData->glassNameCount || g_glassData->glassNames)", (const char *)&queryFormat, "!g_glassData->glassNameCount || g_glassData->glassNames") )
        __debugbreak();
      v0 = *(_QWORD *)&g_glassData;
    }
    v1 = 0i64;
    if ( *(_DWORD *)(v0 + 16) )
    {
      do
      {
        Scr_SetString((scr_string_t *)(*(_QWORD *)(v0 + 24) + 24 * v1 + 8), (scr_string_t)0);
        v0 = *(_QWORD *)&g_glassData;
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < *(_DWORD *)(*(_QWORD *)&g_glassData + 16i64) );
    }
    *(_QWORD *)&g_glassData = 0i64;
  }
}

/*
==============
PackFloat
==============
*/
unsigned __int8 PackFloat(float x)
{
  int v3; 

  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  if ( *(float *)&_XMM3 < 64.0 )
  {
    if ( *(float *)&_XMM3 >= 0.0 )
      return (int)*(float *)&_XMM3;
    else
      LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(v3) = 63;
  }
  return v3;
}

