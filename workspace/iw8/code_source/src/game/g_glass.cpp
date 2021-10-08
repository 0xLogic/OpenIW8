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
  char v10; 
  scrContext_t *v24; 

  _RBX = damageDir;
  v8 = G_GlassPieceFromIndex(pieceIndex);
  v8->lastStateChangeTime = level.time;
  PieceState = G_Glass_GetPieceState(pieceIndex);
  if ( PieceState == 1 )
  {
    *(double *)&_XMM0 = G_random();
    __asm { vcomiss xmm0, cs:__real@3e99999a }
    if ( v10 )
    {
      *(double *)&_XMM0 = G_random();
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@c75ea800
        vcvttss2si ecx, xmm1
      }
      v8->collapseTime = (3000 - _ECX) / 100;
    }
    else
    {
      __asm { vcomiss xmm0, cs:__real@3f333333 }
      if ( v10 )
      {
        *(double *)&_XMM0 = G_random();
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@c903d600
          vcvttss2si eax, xmm1
        }
        v8->collapseTime = (60000 - _EAX) / 100;
      }
      else
      {
        v8->collapseTime = 0;
      }
    }
  }
  else if ( PieceState == 2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
    }
    *(_WORD *)&v8->impactDir = 255;
    v8->impactPos[1] = 0;
    Nav_DestroyObstacleByGlass(pieceIndex);
  }
  if ( oldState < GLASS_DESTROYED && PieceState >= 2 )
  {
    v24 = ScriptContext_Server();
    Scr_AddInt(v24, pieceIndex);
    Scr_NotifyLevel(v24, scr_const.glass_destroyed, 1u);
  }
}

/*
==============
G_Glass_RadiusDamage
==============
*/

void __fastcall G_Glass_RadiusDamage(const vec3_t *origin, double radius, double coneAngleCos, const vec3_t *coneDirection, float innerDamage, float outerDamage)
{
  signed __int64 v6; 
  void *v14; 
  __int64 v21; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  FxGlassSystem *SystemForInitialPiece; 
  char v42; 
  const dvar_t *v53; 
  GlassPieceState PieceState; 
  G_GlassPiece *v61; 
  unsigned int v62; 
  __int64 v71; 
  char v72[4400]; 
  char v80; 

  v14 = alloca(v6);
  __asm
  {
    vmovaps [rsp+1238h+var_48], xmm6
    vmovaps [rsp+1238h+var_58], xmm7
    vmovaps [rsp+1238h+var_68], xmm8
    vmovaps [rsp+1238h+var_78], xmm9
    vmovaps [rsp+1238h+var_88], xmm10
    vmovaps [rsp+1238h+var_98], xmm11
    vmovaps [rsp+1238h+var_A8], xmm12
  }
  _RBP = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1120) = (unsigned __int64)&v71 ^ _security_cookie;
  _R15 = origin;
  __asm
  {
    vmovaps xmm10, xmm2
    vmovaps xmm6, xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Glass_RadiusDamage");
  __asm { vminss  xmm7, xmm6, cs:__real@43800000 }
  v21 = *(_QWORD *)&g_glassData;
  __asm { vmovsd  xmm0, qword ptr [r15] }
  *(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  *(float *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = _R15->v[2];
  __asm
  {
    vmovss  dword ptr [rbp+34h], xmm7
    vmovss  dword ptr [rbp+38h], xmm7
    vmovss  dword ptr [rbp+3Ch], xmm7
    vmovsd  qword ptr [rbp+28h], xmm0
    vmulss  xmm12, xmm7, xmm7
  }
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 64), *(const SpatialPartition_Tree **)(v21 + 32), (const Bounds *)(_RBP + 40));
  if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 64)) )
  {
    __asm
    {
      vmovss  xmm9, [rsp+1238h+arg_28]
      vmovss  xmm8, [rsp+1238h+arg_20]
      vmovss  xmm11, cs:__real@3f800000
    }
    do
    {
      if ( !*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v27 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 20i64);
      v28 = *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      if ( v28 == v27 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) >= **(unsigned __int8 **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v29 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) + 4i64 * *(unsigned int *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) + 4);
      }
      else
      {
        if ( v28 >= v27 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v28 = *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
        }
        v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 8i64) + 4i64 * v28);
      }
      SystemForInitialPiece = Glass_GetSystemForInitialPiece(v29, (unsigned int *)((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64));
      if ( SystemForInitialPiece )
      {
        if ( *(_DWORD *)_RBP < SystemForInitialPiece->initPieceCount )
        {
          Glass_GetInitialPieceCenter(SystemForInitialPiece, *(_DWORD *)_RBP, (vec3_t *)(_RBP + 24));
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+18h]
            vsubss  xmm4, xmm0, dword ptr [r15]
            vmovss  xmm1, dword ptr [rbp+1Ch]
            vsubss  xmm2, xmm1, dword ptr [r15+4]
            vmovss  xmm0, dword ptr [rbp+20h]
            vsubss  xmm3, xmm0, dword ptr [r15+8]
            vmulss  xmm1, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vmovss  dword ptr [rbp+0Ch], xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm6, xmm2, xmm1
            vcomiss xmm6, xmm12
            vmovss  dword ptr [rbp+8], xmm4
            vmovss  dword ptr [rbp+10h], xmm3
          }
          if ( v42 )
          {
            if ( G_Glass_GetPieceState(v29) < GLASS_DESTROYED )
            {
              __asm
              {
                vsqrtss xmm5, xmm6, xmm6
                vdivss  xmm1, xmm11, xmm5
                vmulss  xmm2, xmm1, dword ptr [rbp+8]
                vmulss  xmm3, xmm1, dword ptr [rbp+0Ch]
                vmulss  xmm4, xmm1, dword ptr [rbp+10h]
                vmovss  dword ptr [rbp+8], xmm2
                vmovss  dword ptr [rbp+0Ch], xmm3
                vmovss  dword ptr [rbp+10h], xmm4
              }
              if ( coneDirection )
              {
                __asm
                {
                  vmulss  xmm1, xmm3, dword ptr [r14+4]
                  vmulss  xmm0, xmm2, dword ptr [r14]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm4, dword ptr [r14+8]
                  vaddss  xmm0, xmm2, xmm1
                  vcomiss xmm0, xmm10
                }
              }
              v53 = DVARFLT_glass_radiusDamageMultiplier;
              __asm
              {
                vdivss  xmm1, xmm5, xmm7
                vsubss  xmm0, xmm9, xmm8
                vmulss  xmm1, xmm1, xmm0
                vaddss  xmm6, xmm1, xmm8
              }
              if ( !DVARFLT_glass_radiusDamageMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_radiusDamageMultiplier") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v53);
              __asm
              {
                vmulss  xmm0, xmm6, dword ptr [rdi+28h]
                vcvttss2si edi, xmm0
              }
              if ( _EDI )
              {
                PieceState = G_Glass_GetPieceState(v29);
                v61 = G_GlassPieceFromIndex(v29);
                v62 = _EDI + v61->damageTaken;
                if ( v62 > 0xFFFE )
                  LOWORD(v62) = -2;
                v61->damageTaken = v62;
                if ( G_Glass_GetPieceState(v29) != PieceState )
                  G_Glass_PieceStateChanged(v29, PieceState, (const vec3_t *)(_RBP + 24), (const vec3_t *)(_RBP + 8));
              }
            }
          }
        }
      }
    }
    while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 64)) );
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
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
  char v14; 
  unsigned __int16 GlassHitId; 
  vec3_t start; 
  vec3_t end; 
  vec3_t damageDir; 
  vec3_t damagePos; 
  trace_t results; 

  __asm
  {
    vmovaps [rsp+0F0h+var_10], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vaddss  xmm0, xmm6, dword ptr [rdx]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vsubss  xmm1, xmm6, dword ptr [rdx]
    vmovss  dword ptr [rbp+57h+start], xmm0
    vaddss  xmm0, xmm5, dword ptr [rdx+4]
    vmovss  dword ptr [rbp+57h+start+4], xmm0
    vaddss  xmm0, xmm3, dword ptr [rdx+8]
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vsubss  xmm0, xmm5, dword ptr [rdx+4]
    vmovss  dword ptr [rbp+57h+end], xmm1
    vsubss  xmm1, xmm3, dword ptr [rdx+8]
  }
  _RBX = normal;
  __asm
  {
    vmovss  dword ptr [rbp+57h+end+4], xmm0
    vmovss  dword ptr [rbp+57h+end+8], xmm1
  }
  G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, 2047, 16);
  __asm
  {
    vmovss  xmm0, [rbp+57h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( !v14 && Com_IsSurfaceTypeBreakableGlass(results.surfaceFlags) && Trace_GetEntityHitId(&results) >= 0x7FEu )
  {
    GlassHitId = Trace_GetGlassHitId(&results);
    if ( GlassHitId )
    {
      __asm
      {
        vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  xmm5, [rbp+57h+results.fraction]
        vmovss  xmm0, dword ptr [rbx]
        vxorps  xmm2, xmm1, xmm3
        vxorps  xmm0, xmm0, xmm3
        vmovss  dword ptr [rbp+57h+damageDir], xmm0
        vmovss  xmm0, dword ptr [rbx+8]
        vxorps  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [rbp+57h+end]
        vmovss  dword ptr [rbp+57h+damageDir+8], xmm1
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rbp+57h+start]
        vmovss  xmm1, dword ptr [rbp+57h+end+4]
        vmovss  dword ptr [rbp+57h+damagePos], xmm0
        vsubss  xmm0, xmm1, dword ptr [rbp+57h+start+4]
        vmovss  dword ptr [rbp+57h+damageDir+4], xmm2
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
        vmovss  xmm0, dword ptr [rbp+57h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbp+57h+damagePos+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
        vmovss  dword ptr [rbp+57h+damagePos+8], xmm3
      }
      G_Glass_DestroyPiece(GlassHitId - 1, &damagePos, &damageDir);
    }
  }
  __asm { vmovaps xmm6, [rsp+0F0h+var_10] }
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

unsigned __int8 __fastcall PackFloat(double x, __int64 a2, __int64 a3, double _XMM3_8)
{
  char v4; 

  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3dfc0000
    vaddss  xmm2, xmm1, cs:__real@42000000
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcomiss xmm3, cs:__real@42800000
  }
  if ( v4 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
    }
    if ( v4 )
      LOBYTE(_EAX) = 0;
    else
      __asm { vcvttss2si eax, xmm3 }
  }
  else
  {
    LOBYTE(_EAX) = 63;
  }
  return _EAX;
}

