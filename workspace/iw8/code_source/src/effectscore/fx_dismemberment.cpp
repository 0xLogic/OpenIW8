/*
==============
FX_Dismemberment_Init
==============
*/

void __fastcall FX_Dismemberment_Init(LocalClientNum_t localClientNum)
{
  ?FX_Dismemberment_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_Dismemberment_AllocateClientMemory
==============
*/

void __fastcall FX_Dismemberment_AllocateClientMemory(HunkUser *hunkUser, int maxLocalClients, const DismembermentConfig *config)
{
  ?FX_Dismemberment_AllocateClientMemory@@YAXPEAUHunkUser@@HAEBUDismembermentConfig@@@Z(hunkUser, maxLocalClients, config);
}

/*
==============
FX_Dismemberment_ProcessEntity
==============
*/

bool __fastcall FX_Dismemberment_ProcessEntity(LocalClientNum_t localClientNum, DObj *obj, bool hideVFX)
{
  return ?FX_Dismemberment_ProcessEntity@@YA_NW4LocalClientNum_t@@PEAUDObj@@_N@Z(localClientNum, obj, hideVFX);
}

/*
==============
FX_Dismemberment_IsBoneDismembered
==============
*/

bool __fastcall FX_Dismemberment_IsBoneDismembered(LocalClientNum_t localClientNum, const DObj *const obj, int boneIndex, bool skipBoneIndex)
{
  return ?FX_Dismemberment_IsBoneDismembered@@YA_NW4LocalClientNum_t@@QEBUDObj@@H_N@Z(localClientNum, obj, boneIndex, skipBoneIndex);
}

/*
==============
FX_Dismemberment_IsMasterEnabled
==============
*/

bool __fastcall FX_Dismemberment_IsMasterEnabled()
{
  return ?FX_Dismemberment_IsMasterEnabled@@YA_NXZ();
}

/*
==============
FX_Dismemberment_LoadConfig
==============
*/

void __fastcall FX_Dismemberment_LoadConfig(const char *filename, const char *remapFilename, DismembermentConfig *config, const bool isFrontEnd)
{
  ?FX_Dismemberment_LoadConfig@@YAXPEBD0AEAUDismembermentConfig@@_N@Z(filename, remapFilename, config, isFrontEnd);
}

/*
==============
FX_Dismemberment_Restore
==============
*/

void __fastcall FX_Dismemberment_Restore(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?FX_Dismemberment_Restore@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
FX_Dismemberment_AcquireWriteLock
==============
*/

void FX_Dismemberment_AcquireWriteLock(void)
{
  ?FX_Dismemberment_AcquireWriteLock@@YAXXZ();
}

/*
==============
FX_Dismemberment_FreeClientMemory
==============
*/

void FX_Dismemberment_FreeClientMemory(void)
{
  ?FX_Dismemberment_FreeClientMemory@@YAXXZ();
}

/*
==============
FX_Dismemberment_Archive
==============
*/

void __fastcall FX_Dismemberment_Archive(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?FX_Dismemberment_Archive@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
FX_Dismemberment_DismemberBone
==============
*/

void __fastcall FX_Dismemberment_DismemberBone(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, const vec3_t *boneOffset, DismembermentPointType pointType)
{
  ?FX_Dismemberment_DismemberBone@@YAXW4LocalClientNum_t@@HHPEBTvec3_t@@W4DismembermentPointType@@@Z(localClientNum, dobjHandle, boneIndex, boneOffset, pointType);
}

/*
==============
FX_Dismemberment_DObjUpdate
==============
*/

void __fastcall FX_Dismemberment_DObjUpdate(LocalClientNum_t localClientNum, DObj *obj)
{
  ?FX_Dismemberment_DObjUpdate@@YAXW4LocalClientNum_t@@PEAUDObj@@@Z(localClientNum, obj);
}

/*
==============
FX_Dismemberment_Transfer
==============
*/

void __fastcall FX_Dismemberment_Transfer(LocalClientNum_t localClientNum, int fromDObjHandle, int toDObjHandle)
{
  ?FX_Dismemberment_Transfer@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, fromDObjHandle, toDObjHandle);
}

/*
==============
FX_Dismemberment_Save
==============
*/

void __fastcall FX_Dismemberment_Save(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?FX_Dismemberment_Save@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
FX_Dismemberment_EntryExists
==============
*/

bool __fastcall FX_Dismemberment_EntryExists(LocalClientNum_t localClientNum, int dobjHandle)
{
  return ?FX_Dismemberment_EntryExists@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
FX_Dismemberment_SetBoneEnabled
==============
*/

void __fastcall FX_Dismemberment_SetBoneEnabled(LocalClientNum_t localClientNum, scr_string_t boneName, bool enabled)
{
  ?FX_Dismemberment_SetBoneEnabled@@YAXW4LocalClientNum_t@@W4scr_string_t@@_N@Z(localClientNum, boneName, enabled);
}

/*
==============
FX_Dismemberment_Clear
==============
*/

void __fastcall FX_Dismemberment_Clear(LocalClientNum_t localClientNum, int dobjHandle)
{
  ?FX_Dismemberment_Clear@@YAXW4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
FX_Dismemberment_GetIndices
==============
*/

bool __fastcall FX_Dismemberment_GetIndices(LocalClientNum_t localClientNum, const DObj *const obj, int totalBoneCount, unsigned __int8 *dismembermentIndicesBuffer, unsigned __int8 *dismembermentPointCount, unsigned __int8 *dismembermentPointBoneIndices)
{
  return ?FX_Dismemberment_GetIndices@@YA_NW4LocalClientNum_t@@QEBUDObj@@HPEAE2QEAE@Z(localClientNum, obj, totalBoneCount, dismembermentIndicesBuffer, dismembermentPointCount, dismembermentPointBoneIndices);
}

/*
==============
FX_Dismemberment_Shutdown
==============
*/

void __fastcall FX_Dismemberment_Shutdown(LocalClientNum_t localClientNum)
{
  ?FX_Dismemberment_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_Dismemberment_ProcessTimeout
==============
*/

void __fastcall FX_Dismemberment_ProcessTimeout(LocalClientNum_t localClientNum, DObj *obj)
{
  ?FX_Dismemberment_ProcessTimeout@@YAXW4LocalClientNum_t@@PEAUDObj@@@Z(localClientNum, obj);
}

/*
==============
Dismemberment_AddDObjEntry
==============
*/
__int64 Dismemberment_AddDObjEntry(LocalClientNum_t localClientNum, int dobjHandle)
{
  DismembermentUser *v3; 
  unsigned int v4; 
  __int64 v5; 
  DismembermentEntry *i; 
  int v9; 

  v3 = &g_dismembermentGlob.users[localClientNum];
  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v9 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v9) )
      __debugbreak();
  }
  v4 = 0;
  v5 = 0i64;
  for ( i = v3->dismembermentEntries; i->dobjHandle != 2533; ++i )
  {
    ++v4;
    if ( ++v5 >= 32 )
    {
      Com_PrintWarning(21, "Dismemberment_AddDObjEntry exausted all dismemberment entries %d\n", 32i64);
      return 32i64;
    }
  }
  memset_0(&i->baseBoneCount, 0, 0x3B4ui64);
  i->dobjHandle = dobjHandle;
  return v4;
}

/*
==============
Dismemberment_BoneRemapIndex
==============
*/
__int64 Dismemberment_BoneRemapIndex(LocalClientNum_t localClientNum, DObj *obj, int boneIndex, const vec3_t *boneOffset)
{
  const dvar_t *v7; 
  scr_string_t BoneNameScriptString; 
  int numDismembermentRemap; 
  int v16; 
  scr_string_t v30; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex[3]; 

  v7 = DVARBOOL_dismemberment_bone_torso_remap_enabled;
  _RDI = boneOffset;
  if ( !DVARBOOL_dismemberment_bone_torso_remap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dismemberment_bone_torso_remap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 239, ASSERT_TYPE_ASSERT, "(boneOffset)", (const char *)&queryFormat, "boneOffset") )
      __debugbreak();
    if ( boneIndex >= (unsigned int)obj->numBones )
    {
      LODWORD(v36) = obj->numBones;
      LODWORD(v35) = boneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( obj->numBones )", "boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    BoneNameScriptString = DObjGetBoneNameScriptString(obj, boneIndex);
    if ( BoneNameScriptString )
    {
      _RBX = DVARFLT_dismemberment_bone_torso_remap_max_dist;
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovaps [rsp+0A8h+var_48], xmm7
        vmovaps [rsp+0A8h+var_58], xmm8
        vmovss  xmm8, dword ptr [rdi+8]
        vmovss  xmm7, dword ptr [rdi]
      }
      if ( !DVARFLT_dismemberment_bone_torso_remap_max_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dismemberment_bone_torso_remap_max_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      numDismembermentRemap = g_dismembermentGlob.config.numDismembermentRemap;
      v16 = 0;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm6, xmm0, xmm0
      }
      if ( g_dismembermentGlob.config.numDismembermentRemap > 0 )
      {
        _RBX = &g_dismembermentGlob.config.dismembermentRemap[0].srcBoneOffset.v[2];
        do
        {
          if ( BoneNameScriptString == *((_DWORD *)_RBX - 4) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-8]
              vmovss  xmm3, dword ptr [rbx-4]
              vmovss  xmm1, dword ptr [rbx]
              vsubss  xmm2, xmm0, xmm7
              vmulss  xmm2, xmm2, xmm2
              vsubss  xmm4, xmm1, xmm8
              vmulss  xmm0, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm1
              vcomiss xmm6, xmm2
            }
            if ( (unsigned int)BoneNameScriptString >= *((_DWORD *)_RBX - 4) )
            {
              v30 = *((_DWORD *)_RBX - 3);
              inOutIndex[0] = -2;
              if ( v30 )
              {
                if ( DObjGetBoneIndexInternal_39(obj, v30, inOutIndex, modelIndex) )
                {
                  boneIndex = inOutIndex[0];
                  break;
                }
                numDismembermentRemap = g_dismembermentGlob.config.numDismembermentRemap;
              }
            }
          }
          ++v16;
          _RBX += 5;
        }
        while ( v16 < numDismembermentRemap );
      }
      __asm
      {
        vmovaps xmm8, [rsp+0A8h+var_58]
        vmovaps xmm7, [rsp+0A8h+var_48]
        vmovaps xmm6, [rsp+0A8h+var_38]
      }
    }
  }
  return (unsigned int)boneIndex;
}

/*
==============
Dismemberment_ClearEntry
==============
*/
void Dismemberment_ClearEntry(LocalClientNum_t localClientNum, int dismemberHandle)
{
  __int64 v2; 
  DismembermentUser *v3; 
  DismembermentEntry *v4; 
  __int64 dobjHandle; 
  int v6; 
  ParticleSystemHandle *attachmentVfxHandle; 
  ParticleSystemHandle v8; 
  unsigned int v9; 
  __int64 v10; 
  ParticleSystem *v11; 
  __int64 v12; 

  v2 = localClientNum;
  v3 = &g_dismembermentGlob.users[localClientNum];
  v4 = &v3->dismembermentEntries[dismemberHandle];
  dobjHandle = v4->dobjHandle;
  if ( (_DWORD)dobjHandle != 2533 && (unsigned int)dobjHandle <= 0x7FF )
    Sys_InterlockedAnd(&v3->dismembermentEntNumInUse[dobjHandle >> 5], ~(0x80000000 >> (dobjHandle & 0x1F)));
  v4->dobjHandle = 2533;
  v6 = 0;
  if ( v4->desiredDismemberCount )
  {
    attachmentVfxHandle = v4->attachmentVfxHandle;
    do
    {
      v8 = *attachmentVfxHandle;
      if ( *attachmentVfxHandle )
      {
        v9 = 0;
        if ( g_particleSystemsGeneration[4096 * v2 + (v8 & 0xFFF)].__all32 == v8 )
          v9 = *attachmentVfxHandle & 0xFFF;
        v10 = v9;
        v11 = NULL;
        v12 = (v2 << 12) + v10;
        if ( g_particleSystems[0][v12] >= (ParticleSystem *)0x1000 )
          v11 = g_particleSystems[0][v12];
        if ( v11 )
          FX_KillEffect((LocalClientNum_t)v2, v8);
        *attachmentVfxHandle = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
      ++v6;
      ++attachmentVfxHandle;
    }
    while ( v6 < v4->desiredDismemberCount );
    v4->desiredDismemberCount = 0;
  }
  else
  {
    v4->desiredDismemberCount = 0;
  }
}

/*
==============
Dismemberment_DismemberBone
==============
*/
void Dismemberment_DismemberBone(LocalClientNum_t localClientNum, int dobjHandle, DObj *obj, int boneIndex, const vec3_t *boneOffset, DismembermentPointType pointType)
{
  DismembermentUser *v9; 
  int v10; 
  __int64 v12; 
  int DObjEntry; 
  __int64 v14; 
  DismembermentPointType v15; 
  __int64 v16; 
  scr_string_t DismembermentBoneTag; 
  unsigned __int8 v18; 
  int v19; 
  __int64 v20; 
  _DWORD *v21; 
  unsigned __int8 v22; 
  int v23; 
  _DWORD *v24; 
  __int64 v25; 
  unsigned __int8 outConfigPointIdx; 

  v9 = &g_dismembermentGlob.users[localClientNum];
  v10 = 0x80000000 >> (dobjHandle & 0x1F);
  v12 = (__int64)dobjHandle >> 5;
  if ( (unsigned int)dobjHandle <= 0x7FF && (v10 & v9->dismembermentEntNumInUse[v12]) != 0 )
  {
    DObjEntry = Dismemberment_FindDObjEntry(localClientNum, dobjHandle);
    if ( DObjEntry == 32 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 382, ASSERT_TYPE_ASSERT, "(dismemberHandle != ((32)))", (const char *)&queryFormat, "dismemberHandle != DISMEMBERMENT_INVALID_HANDLE") )
        __debugbreak();
      return;
    }
  }
  else
  {
    DObjEntry = Dismemberment_AddDObjEntry(localClientNum, dobjHandle);
    if ( DObjEntry == 32 )
      return;
    if ( (unsigned int)dobjHandle <= 0x7FF )
      Sys_InterlockedOr(&v9->dismembermentEntNumInUse[v12], v10);
  }
  v14 = DObjEntry;
  v15 = pointType;
  v16 = (__int64)&v9->dismembermentEntries[v14];
  DismembermentBoneTag = Dismemberment_FindDismembermentBoneTag(localClientNum, obj, boneIndex, boneOffset, &outConfigPointIdx, pointType);
  if ( DismembermentBoneTag )
  {
    v18 = outConfigPointIdx;
    if ( outConfigPointIdx >= 0x32u )
    {
      LODWORD(v25) = outConfigPointIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 404, ASSERT_TYPE_ASSERT, "(unsigned)( configPointIdx ) < (unsigned)( (50) )", "configPointIdx doesn't index DISMEMBERMENT_MAX_POINTS\n\t%i not in [0, %i)", v25, 50) )
        __debugbreak();
    }
    v19 = 0;
    if ( *(_BYTE *)(v16 + 791) )
    {
      v20 = 0i64;
      v21 = (_DWORD *)(v16 + 800);
      while ( *v21 != DismembermentBoneTag || *(_BYTE *)(v20 + v16 + 944) != v15 )
      {
        ++v19;
        ++v20;
        ++v21;
        if ( v19 >= *(unsigned __int8 *)(v16 + 791) )
          goto LABEL_22;
      }
      v22 = *(_BYTE *)(v19 + v16 + 792);
      if ( v22 != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 412, ASSERT_TYPE_ASSERT, "( entry.configPointIndex[boneTagIdx] ) == ( configPointIdx )", "%s == %s\n\t%u, %u", "entry.configPointIndex[boneTagIdx]", "configPointIdx", v22, v18) )
        __debugbreak();
    }
LABEL_22:
    v23 = *(unsigned __int8 *)(v16 + 791);
    if ( v19 == v23 )
    {
      if ( (unsigned __int8)v23 < 8u )
      {
        *(_DWORD *)(v16 + 4i64 * *(unsigned __int8 *)(v16 + 791) + 904) = I_irand(0, g_dismembermentGlob.config.numOfAttachmentVariations[v18]);
        *(_DWORD *)(v16 + 4i64 * *(unsigned __int8 *)(v16 + 791) + 872) = 0;
        *(_BYTE *)(*(unsigned __int8 *)(v16 + 791) + v16 + 792) = v18;
        *(_DWORD *)(v16 + 4i64 * *(unsigned __int8 *)(v16 + 791) + 800) = DismembermentBoneTag;
        *(_DWORD *)(v16 + 4i64 * *(unsigned __int8 *)(v16 + 791) + 832) = CG_GetLocalClientTime(localClientNum);
        *(_BYTE *)((unsigned __int8)(*(_BYTE *)(v16 + 791))++ + v16 + 944) = v15;
        *(_BYTE *)(v16 + 12) = 0;
      }
      else
      {
        Com_PrintWarning(21, "Dismemberment_DismemberBone exhausted all dismemberment points %d\n", 8i64);
      }
    }
    else
    {
      v24 = (_DWORD *)(v16 + 4i64 * v19 + 832);
      if ( *v24 != -1 )
        *v24 = CG_GetLocalClientTime(localClientNum);
    }
  }
}

/*
==============
Dismemberment_FindDObjEntry
==============
*/
__int64 Dismemberment_FindDObjEntry(LocalClientNum_t localClientNum, int dobjHandle)
{
  DismembermentUser *v3; 
  unsigned int v4; 
  DismembermentEntry *dismembermentEntries; 
  __int64 v6; 
  int v9; 

  v3 = &g_dismembermentGlob.users[localClientNum];
  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v9 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v9) )
      __debugbreak();
  }
  v4 = 0;
  dismembermentEntries = v3->dismembermentEntries;
  v6 = 0i64;
  while ( dismembermentEntries->dobjHandle != dobjHandle )
  {
    ++v4;
    ++v6;
    ++dismembermentEntries;
    if ( v6 >= 32 )
      return 32i64;
  }
  return v4;
}

/*
==============
Dismemberment_FindDismembermentBoneTag
==============
*/
__int64 Dismemberment_FindDismembermentBoneTag(LocalClientNum_t localClientNum, DObj *obj, int boneIndex, const vec3_t *boneOffset, unsigned __int8 *outConfigPointIdx, DismembermentPointType pointType)
{
  __int64 v7; 
  int v9; 
  DismembermentUser *v10; 
  int numDismembermentPoints; 
  DismembermentPointType v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int64 i; 
  signed int v17; 
  int v18; 
  __int64 v19; 
  const XModel *v20; 
  unsigned __int8 v21; 
  __int64 v23; 
  unsigned __int8 index[4]; 
  int v25; 
  DismembermentUser *v26; 

  v7 = localClientNum;
  v9 = boneIndex;
  *outConfigPointIdx = 50;
  if ( !DObjIsValidBoneIndex(obj, boneIndex) )
    return 0i64;
  v10 = &g_dismembermentGlob.users[v7];
  v26 = v10;
  if ( boneOffset )
    v9 = Dismemberment_BoneRemapIndex((LocalClientNum_t)v7, obj, v9, boneOffset);
  numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
  v12 = pointType;
  v13 = 0;
  if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
  {
    v14 = 0i64;
    do
    {
      if ( g_dismembermentGlob.config.pointType[v14] == pointType && !v10->dismemberBoneDisabled[v14] )
      {
        if ( DObjGetNextBoneIndex(obj, g_dismembermentGlob.config.dismembermentDetectBoneNames[v14], 0xFEu) == v9 )
        {
          *outConfigPointIdx = truncate_cast<unsigned char,int>(v13);
          return (unsigned int)g_dismembermentGlob.config.dismembermentBoneNames[v13];
        }
        numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
      }
      ++v13;
      ++v14;
    }
    while ( v13 < numDismembermentPoints );
  }
  if ( g_dismembermentGlob.config.requireExactBone )
    return 0i64;
  v15 = 0;
  v25 = 0;
  if ( numDismembermentPoints <= 0 )
    return 0i64;
  for ( i = 0i64; ; ++i )
  {
    if ( g_dismembermentGlob.config.pointType[i] == v12 && !v10->dismemberBoneDisabled[i] )
    {
      v17 = 0;
      v18 = 0;
      if ( obj->numModels )
        break;
    }
LABEL_25:
    v25 = ++v15;
    if ( v15 >= numDismembermentPoints )
      return 0i64;
  }
  v19 = 0i64;
  while ( 1 )
  {
    v20 = obj->models[v19];
    if ( v9 < v20->numBones )
    {
      if ( v17 >= v9 )
        goto LABEL_24;
      if ( XModelGetBoneIndex(obj->models[v19], g_dismembermentGlob.config.dismembermentDetectBoneNames[i], v17, index) )
      {
        if ( index[0] == v9 )
          break;
        v21 = truncate_cast<unsigned char,int>(index[0] - v17);
        if ( XModelHasParentBone(v20, v21, v9 - v17) )
          break;
      }
    }
    ++v18;
    v17 += v20->numBones;
    ++v19;
    if ( v18 >= obj->numModels )
    {
LABEL_24:
      numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
      v15 = v25;
      v10 = v26;
      v12 = pointType;
      goto LABEL_25;
    }
  }
  v23 = v25;
  *outConfigPointIdx = truncate_cast<unsigned char,int>(v25);
  return (unsigned int)g_dismembermentGlob.config.dismembermentBoneNames[v23];
}

/*
==============
FX_Dismemberment_AcquireWriteLock
==============
*/
void FX_Dismemberment_AcquireWriteLock(void)
{
  int v0; 

  Sys_CheckAcquireLock(&g_dismembermentLock);
  AcquireSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
  g_dismembermentLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !g_dismembermentLock.writeThreadId )
  {
    v0 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
FX_Dismemberment_AllocateClientMemory
==============
*/
void FX_Dismemberment_AllocateClientMemory(HunkUser *hunkUser, int maxLocalClients, const DismembermentConfig *config)
{
  unsigned __int64 v3; 

  v3 = 30772i64 * maxLocalClients;
  g_dismembermentGlob.users = (DismembermentUser *)Mem_HunkUser_AllocInternal(hunkUser, v3, 0x80ui64, "FX_Dismemberment_AllocateClientMemory");
  memset_0(g_dismembermentGlob.users, 0, v3);
  g_dismembermentLock.lock = NULL;
  *(_QWORD *)&g_dismembermentLock.acquireLock = 0i64;
  *(_QWORD *)&g_dismembermentLock.initialized = 0i64;
  if ( config->numDismembermentPoints > 50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 496, ASSERT_TYPE_ASSERT, "(config.numDismembermentPoints <= (50))", (const char *)&queryFormat, "config.numDismembermentPoints <= DISMEMBERMENT_MAX_POINTS") )
    __debugbreak();
  if ( config->numDismembermentPoints < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 497, ASSERT_TYPE_ASSERT, "(config.numDismembermentPoints >= 0)", (const char *)&queryFormat, "config.numDismembermentPoints >= 0") )
    __debugbreak();
  memcpy_0(&g_dismembermentGlob.config, config, sizeof(g_dismembermentGlob.config));
  InitializeSRWLock((PSRWLOCK)&g_dismembermentLock);
  g_dismembermentLock.initialized = -1412623820;
  g_dismembermentLock.acquireLock = 0;
  g_dismembermentLock.writeThreadId = 0;
  g_dismembermentGlob.allocated = 1;
}

/*
==============
FX_Dismemberment_Archive
==============
*/
void FX_Dismemberment_Archive(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  __int64 v2; 
  char v4; 
  DismembermentUser *v5; 
  bool *dismemberBoneDisabled; 
  __int64 numDismembermentPoints; 
  bool v8; 
  char v9; 
  int v10; 
  int v11; 
  bool *v12; 
  scr_string_t *dismembermentBoneNames; 
  DismembermentUser *v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  bool *v19; 
  scr_string_t *v20; 
  int p; 
  unsigned __int8 v22; 

  v2 = localClientNum;
  if ( MemFile_IsWriting(memFile) )
  {
    LOBYTE(p) = 100;
    v4 = 0;
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = 109;
    MemFile_WriteData(memFile, 1ui64, &p);
    Sys_CheckAcquireLock(&g_dismembermentLock);
    AcquireSRWLockShared((PSRWLOCK)&g_dismembermentLock);
    v5 = &g_dismembermentGlob.users[v2];
    if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
    {
      dismemberBoneDisabled = v5->dismemberBoneDisabled;
      numDismembermentPoints = (unsigned int)g_dismembermentGlob.config.numDismembermentPoints;
      do
      {
        v8 = !*dismemberBoneDisabled;
        v9 = v4 + 1;
        ++dismemberBoneDisabled;
        if ( v8 )
          v9 = v4;
        v4 = v9;
        --numDismembermentPoints;
      }
      while ( numDismembermentPoints );
    }
    LOBYTE(p) = v4;
    MemFile_WriteData(memFile, 1ui64, &p);
    v10 = g_dismembermentGlob.config.numDismembermentPoints;
    v11 = 0;
    if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
    {
      v12 = v5->dismemberBoneDisabled;
      dismembermentBoneNames = g_dismembermentGlob.config.dismembermentBoneNames;
      do
      {
        if ( *v12 )
        {
          p = *dismembermentBoneNames;
          MemFile_WriteData(memFile, 4ui64, &p);
          v10 = g_dismembermentGlob.config.numDismembermentPoints;
        }
        ++v11;
        ++v12;
        ++dismembermentBoneNames;
      }
      while ( v11 < v10 );
    }
    ReleaseSRWLockShared((PSRWLOCK)&g_dismembermentLock);
  }
  else
  {
    MemFile_ReadData(memFile, 1ui64, &v22);
    MemFile_ReadData(memFile, 1ui64, &p);
    if ( v22 != 100 || (_BYTE)p != 109 )
    {
      Com_PrintError(14, "FX_Dismemberment_Restore() expected 0x%x and 0x%x to guarantee beginning of dismemberment section, but found 0x%x and 0x%x instead.\n", 100i64, 109i64, v22, (unsigned __int8)p);
      Sys_Error((const ObfuscateErrorText)&stru_143FEFB68);
    }
    FX_Dismemberment_AcquireWriteLock();
    v14 = &g_dismembermentGlob.users[v2];
    *(_QWORD *)v14->dismemberBoneDisabled = 0i64;
    *(_QWORD *)&v14->dismemberBoneDisabled[8] = 0i64;
    *(_QWORD *)&v14->dismemberBoneDisabled[16] = 0i64;
    *(_QWORD *)&v14->dismemberBoneDisabled[24] = 0i64;
    *(_QWORD *)&v14->dismemberBoneDisabled[32] = 0i64;
    *(_QWORD *)&v14->dismemberBoneDisabled[40] = 0i64;
    *(_WORD *)&v14->dismemberBoneDisabled[48] = 0;
    MemFile_ReadData(memFile, 1ui64, &p);
    if ( (_BYTE)p )
    {
      v15 = (unsigned __int8)p;
      do
      {
        MemFile_ReadData(memFile, 4ui64, &p);
        v16 = g_dismembermentGlob.config.numDismembermentPoints;
        v17 = 0;
        if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
        {
          v18 = p;
          v19 = v14->dismemberBoneDisabled;
          v20 = g_dismembermentGlob.config.dismembermentBoneNames;
          do
          {
            if ( v18 == *v20 )
            {
              *v19 = 1;
              v16 = g_dismembermentGlob.config.numDismembermentPoints;
            }
            ++v17;
            ++v20;
            ++v19;
          }
          while ( v17 < v16 );
        }
        --v15;
      }
      while ( v15 );
    }
    g_dismembermentLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
  }
  Sys_CheckReleaseLock(&g_dismembermentLock);
}

/*
==============
FX_Dismemberment_Clear
==============
*/
void FX_Dismemberment_Clear(LocalClientNum_t localClientNum, int dobjHandle)
{
  int DObjEntry; 

  if ( (unsigned int)dobjHandle <= 0x7FF && ((0x80000000 >> (dobjHandle & 0x1F)) & g_dismembermentGlob.users[localClientNum].dismembermentEntNumInUse[(__int64)dobjHandle >> 5]) != 0 )
  {
    FX_Dismemberment_AcquireWriteLock();
    DObjEntry = Dismemberment_FindDObjEntry(localClientNum, dobjHandle);
    if ( DObjEntry != 32 )
      Dismemberment_ClearEntry(localClientNum, DObjEntry);
    g_dismembermentLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
    Sys_CheckReleaseLock(&g_dismembermentLock);
  }
}

/*
==============
FX_Dismemberment_DObjUpdate
==============
*/
void FX_Dismemberment_DObjUpdate(LocalClientNum_t localClientNum, DObj *obj)
{
  __int64 entnum; 
  int v4; 
  DismembermentUser *v5; 
  int DObjEntry; 

  if ( obj )
  {
    entnum = obj->entnum;
    v4 = entnum - 1;
    v5 = &g_dismembermentGlob.users[localClientNum];
    if ( (unsigned int)(entnum - 1) <= 0x7FF && ((0x80000000 >> (v4 & 0x1F)) & v5->dismembermentEntNumInUse[(entnum - 1) >> 5]) != 0 )
    {
      FX_Dismemberment_AcquireWriteLock();
      DObjEntry = Dismemberment_FindDObjEntry(localClientNum, v4);
      if ( DObjEntry != 32 )
        v5->dismembermentEntries[DObjEntry].indicesValid = 0;
      g_dismembermentLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
      Sys_CheckReleaseLock(&g_dismembermentLock);
    }
  }
}

/*
==============
FX_Dismemberment_DismemberBone
==============
*/
void FX_Dismemberment_DismemberBone(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, const vec3_t *boneOffset, DismembermentPointType pointType)
{
  DObj *ClientDObj; 
  DObj *v10; 

  if ( (unsigned int)(boneIndex - 254) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1061, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  v10 = ClientDObj;
  if ( ClientDObj && (ClientDObj->flags & 0xC0) != 0 && master_dismemberment_setting && master_dismemberment_setting->current.enabled && DObjTotalNumBones(ClientDObj) < 768 && FX_Dismemberment_IsStateValid(localClientNum, v10) )
  {
    FX_Dismemberment_AcquireWriteLock();
    Dismemberment_DismemberBone(localClientNum, dobjHandle, v10, boneIndex, boneOffset, pointType);
    g_dismembermentLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
    Sys_CheckReleaseLock(&g_dismembermentLock);
  }
}

/*
==============
FX_Dismemberment_EntryExists
==============
*/
bool FX_Dismemberment_EntryExists(LocalClientNum_t localClientNum, int dobjHandle)
{
  return (unsigned int)dobjHandle <= 0x7FF && ((0x80000000 >> (dobjHandle & 0x1F)) & g_dismembermentGlob.users[localClientNum].dismembermentEntNumInUse[(__int64)dobjHandle >> 5]) != 0;
}

/*
==============
FX_Dismemberment_FreeClientMemory
==============
*/
void FX_Dismemberment_FreeClientMemory(void)
{
  __int64 v0; 
  volatile int acquireLock; 

  if ( g_dismembermentGlob.allocated )
  {
    g_dismembermentLock.initialized = 0;
    if ( g_dismembermentLock.acquireLock )
    {
      acquireLock = g_dismembermentLock.acquireLock;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", acquireLock, 0i64) )
        __debugbreak();
    }
    if ( g_dismembermentLock.writeThreadId )
    {
      LODWORD(v0) = g_dismembermentLock.writeThreadId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
        __debugbreak();
    }
    g_dismembermentGlob.allocated = 0;
    g_dismembermentGlob.users = NULL;
  }
  else
  {
    g_dismembermentGlob.allocated = 0;
    g_dismembermentGlob.users = NULL;
  }
}

/*
==============
FX_Dismemberment_GetIndices
==============
*/
__int64 FX_Dismemberment_GetIndices(LocalClientNum_t localClientNum, const DObj *const obj, int totalBoneCount, unsigned __int8 *dismembermentIndicesBuffer, unsigned __int8 *dismembermentPointCount, unsigned __int8 *dismembermentPointBoneIndices)
{
  __int64 entnum; 
  unsigned __int8 v8; 
  size_t v10; 
  DismembermentUser *v11; 
  int v12; 
  int DObjEntry; 
  char *v14; 
  size_t v15; 

  entnum = obj->entnum;
  v8 = 0;
  v10 = totalBoneCount;
  v11 = &g_dismembermentGlob.users[localClientNum];
  v12 = entnum - 1;
  if ( (unsigned int)(entnum - 1) > 0x7FF || ((0x80000000 >> (v12 & 0x1F)) & v11->dismembermentEntNumInUse[(entnum - 1) >> 5]) == 0 )
    goto LABEL_20;
  Sys_CheckAcquireLock(&g_dismembermentLock);
  AcquireSRWLockShared((PSRWLOCK)&g_dismembermentLock);
  DObjEntry = Dismemberment_FindDObjEntry(localClientNum, v12);
  if ( DObjEntry != 32 )
  {
    v14 = (char *)v11 + 952 * DObjEntry;
    if ( !dismembermentIndicesBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1148, ASSERT_TYPE_ASSERT, "(dismembermentIndicesBuffer)", (const char *)&queryFormat, "dismembermentIndicesBuffer") )
      __debugbreak();
    if ( (_DWORD)v10 != *((_DWORD *)v14 + 66) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1149, ASSERT_TYPE_ASSERT, "(totalBoneCount == entry.totalBoneCount)", (const char *)&queryFormat, "totalBoneCount == entry.totalBoneCount") )
      __debugbreak();
    if ( !v14[270] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1150, ASSERT_TYPE_ASSERT, "(entry.dismembermentPointCount > 0)", (const char *)&queryFormat, "entry.dismembermentPointCount > 0") )
      __debugbreak();
    memcpy_0(dismembermentIndicesBuffer, v14 + 271, v10);
    v15 = (unsigned __int8)v14[270];
    *dismembermentPointCount = v15;
    memcpy_0(dismembermentPointBoneIndices, v14 + 1039, v15);
    v8 = 1;
  }
  ReleaseSRWLockShared((PSRWLOCK)&g_dismembermentLock);
  Sys_CheckReleaseLock(&g_dismembermentLock);
  if ( !v8 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1161, ASSERT_TYPE_ASSERT, "(valid)", (const char *)&queryFormat, "valid") )
      __debugbreak();
  }
  return v8;
}

/*
==============
FX_Dismemberment_Init
==============
*/
void FX_Dismemberment_Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  DismembermentUser *v2; 
  int v3; 
  DismembermentUser *v4; 
  __int64 v5; 

  v1 = localClientNum;
  if ( !g_dismembermentGlob.allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 527, ASSERT_TYPE_ASSERT, "(g_dismembermentGlob.allocated)", (const char *)&queryFormat, "g_dismembermentGlob.allocated") )
    __debugbreak();
  v2 = &g_dismembermentGlob.users[v1];
  v3 = 0;
  *(_QWORD *)v2->dismemberBoneDisabled = 0i64;
  *(_QWORD *)&v2->dismemberBoneDisabled[8] = 0i64;
  *(_QWORD *)&v2->dismemberBoneDisabled[16] = 0i64;
  *(_QWORD *)&v2->dismemberBoneDisabled[24] = 0i64;
  *(_QWORD *)&v2->dismemberBoneDisabled[32] = 0i64;
  *(_QWORD *)&v2->dismemberBoneDisabled[40] = 0i64;
  *(_WORD *)&v2->dismemberBoneDisabled[48] = 0;
  do
    Dismemberment_ClearEntry((LocalClientNum_t)v1, v3++);
  while ( v3 < 32 );
  v4 = v2;
  v5 = 64i64;
  do
  {
    v4->dismembermentEntNumInUse[0] = 0;
    v4 = (DismembermentUser *)((char *)v4 + 4);
    --v5;
  }
  while ( v5 );
  v2->initialized = 1;
}

/*
==============
FX_Dismemberment_IsBoneDismembered
==============
*/
bool FX_Dismemberment_IsBoneDismembered(LocalClientNum_t localClientNum, const DObj *const obj, int boneIndex, bool skipBoneIndex)
{
  __int64 v4; 
  __int64 entnum; 
  int v8; 
  DismembermentUser *v9; 
  bool v10; 
  int DObjEntry; 
  __int64 v12; 
  unsigned __int8 v13; 

  v4 = boneIndex;
  if ( !obj || (obj->flags & 0x40) == 0 || !master_dismemberment_setting || !master_dismemberment_setting->current.enabled )
    return 0;
  entnum = obj->entnum;
  v8 = entnum - 1;
  v9 = &g_dismembermentGlob.users[localClientNum];
  v10 = 0;
  if ( (unsigned int)(entnum - 1) <= 0x7FF && ((0x80000000 >> (v8 & 0x1F)) & v9->dismembermentEntNumInUse[(entnum - 1) >> 5]) != 0 )
  {
    Sys_CheckAcquireLock(&g_dismembermentLock);
    AcquireSRWLockShared((PSRWLOCK)&g_dismembermentLock);
    DObjEntry = Dismemberment_FindDObjEntry(localClientNum, v8);
    if ( DObjEntry != 32 )
    {
      v12 = (__int64)&v9->dismembermentEntries[DObjEntry];
      if ( *(_BYTE *)(v12 + 14) )
      {
        if ( (int)v4 >= *(_DWORD *)(v12 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1119, ASSERT_TYPE_ASSERT, "(boneIndex < entry.totalBoneCount)", (const char *)&queryFormat, "boneIndex < entry.totalBoneCount") )
          __debugbreak();
        v10 = 1;
        if ( *(_BYTE *)(v12 + 13) )
        {
          v13 = *(_BYTE *)(v4 + v12 + 15);
          if ( v13 == 0xFF || skipBoneIndex && v13 == (_DWORD)v4 )
            v10 = 0;
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&g_dismembermentLock);
    Sys_CheckReleaseLock(&g_dismembermentLock);
  }
  return v10;
}

/*
==============
FX_Dismemberment_IsMasterEnabled
==============
*/
bool FX_Dismemberment_IsMasterEnabled()
{
  return master_dismemberment_setting && master_dismemberment_setting->current.enabled;
}

/*
==============
FX_Dismemberment_IsStateValid
==============
*/
bool FX_Dismemberment_IsStateValid(LocalClientNum_t localClientNum, DObj *const obj)
{
  __int64 v2; 
  const dvar_t *v4; 
  int integer; 
  unsigned __int16 entnum; 
  __int64 v7; 
  char *v8; 
  unsigned __int16 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v14; 
  __int64 v15; 

  v2 = localClientNum;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1016, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v4 = DVARINT_dismemberment_corpse_mutilation_timeout_ms;
  if ( !DVARINT_dismemberment_corpse_mutilation_timeout_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dismemberment_corpse_mutilation_timeout_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer < 0 )
    return 1;
  entnum = obj->entnum;
  if ( !entnum )
    return 0;
  v7 = entnum;
  if ( (unsigned int)entnum - 1 >= 0x7FF )
    return 0;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v15) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v2] )
  {
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v15) )
      __debugbreak();
  }
  v8 = (char *)CgEntitySystem::ms_entitySystemArray[v2] + 760 * v7 - 744;
  if ( (CgEntitySystem *)((char *)CgEntitySystem::ms_entitySystemArray[v2] + 760 * v7) == (CgEntitySystem *)744 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1038, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( (v8[648] & 1) == 0 )
    return 1;
  if ( v8 == (char *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v9 = *((_WORD *)v8 + 204);
  if ( v9 > 0x15u )
    return 1;
  v10 = 2359300;
  if ( !_bittest(&v10, (__int16)v9) )
    return 1;
  v11 = CG_GetLocalClientTime((const LocalClientNum_t)v2) - *((_DWORD *)v8 + 189);
  v12 = 0;
  if ( v11 > 0 )
    v12 = v11;
  return v12 <= integer;
}

/*
==============
FX_Dismemberment_LoadConfig
==============
*/
void FX_Dismemberment_LoadConfig(const char *filename, const char *remapFilename, DismembermentConfig *config, const bool isFrontEnd)
{
  const char *v5; 
  const char *v6; 
  int RowCount; 
  StringTable *v9; 
  int ColumnCount; 
  int v11; 
  const SndAliasList **attachmentSFX; 
  DismembermentPointType *pointType; 
  scr_string_t *dismembermentDetectBoneNames; 
  const char *ColumnValueForRow; 
  char v16; 
  StringTable *v17; 
  const char *v18; 
  scr_string_t String; 
  StringTable *v20; 
  const char *v21; 
  scr_string_t v22; 
  StringTable *v23; 
  const char *v24; 
  scr_string_t v25; 
  StringTable *v26; 
  const char *v27; 
  scr_string_t v28; 
  StringTable *v29; 
  const char *v30; 
  int v31; 
  __int64 v32; 
  char v33; 
  const char *v34; 
  const char *v35; 
  StringTable *tablePtr; 
  const SndAliasList **v37; 
  DismembermentPointType *v38; 

  v5 = remapFilename;
  v6 = filename;
  memset_0(config, 0, sizeof(DismembermentConfig));
  if ( !isFrontEnd )
  {
    StringTable_GetAsset(v6, (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1382, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    RowCount = StringTable_GetRowCount(tablePtr);
    v9 = tablePtr;
    config->numDismembermentPoints = RowCount;
    ColumnCount = StringTable_GetColumnCount(v9);
    if ( config->numDismembermentPoints > 50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1387, ASSERT_TYPE_ASSERT, "(config.numDismembermentPoints <= (50))", (const char *)&queryFormat, "config.numDismembermentPoints <= DISMEMBERMENT_MAX_POINTS") )
      __debugbreak();
    if ( ColumnCount - 3 > 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1388, ASSERT_TYPE_ASSERT, "((columnCount - 3) <= ( (8) * 2 ))", (const char *)&queryFormat, "(columnCount - 3) <= ( DISMEMBERMENT_MAX_POINT_FX_VARIATIONS * 2 )") )
      __debugbreak();
    v11 = 0;
    if ( config->numDismembermentPoints > 0 )
    {
      attachmentSFX = config->attachmentSFX;
      pointType = config->pointType;
      v38 = config->pointType;
      dismembermentDetectBoneNames = config->dismembermentDetectBoneNames;
      v37 = config->attachmentSFX;
      while ( 1 )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v11, 0);
        if ( I_stricmp(ColumnValueForRow, "default") )
        {
          if ( !I_stricmp(ColumnValueForRow, "cryo") )
          {
            v16 = 1;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "gold") )
          {
            v16 = 2;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "shadow") )
          {
            v16 = 3;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "weed") )
          {
            v16 = 4;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "raygun") )
          {
            v16 = 5;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "soul") )
          {
            v16 = 6;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "generic0") )
          {
            v16 = 7;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "generic1") )
          {
            v16 = 8;
            goto LABEL_34;
          }
          if ( !I_stricmp(ColumnValueForRow, "generic2") )
          {
            v16 = 9;
            goto LABEL_34;
          }
          Com_Printf(21, "Invalid dismemberment type '%s'. Config filename '%s'\n", ColumnValueForRow, v6);
        }
        v16 = 0;
LABEL_34:
        v17 = tablePtr;
        *pointType = v16;
        v18 = StringTable_GetColumnValueForRow(v17, v11, 1);
        String = SL_FindString(v18);
        v20 = tablePtr;
        *((_DWORD *)dismembermentDetectBoneNames - 50) = String;
        v21 = StringTable_GetColumnValueForRow(v20, v11, 2);
        v22 = SL_FindString(v21);
        v23 = tablePtr;
        *dismembermentDetectBoneNames = v22;
        v24 = StringTable_GetColumnValueForRow(v23, v11, 3);
        v25 = SL_FindString(v24);
        v26 = tablePtr;
        *((_DWORD *)dismembermentDetectBoneNames + 50) = v25;
        v27 = StringTable_GetColumnValueForRow(v26, v11, 4);
        v28 = SL_FindString(v27);
        v29 = tablePtr;
        *((_DWORD *)dismembermentDetectBoneNames + 100) = v28;
        v30 = StringTable_GetColumnValueForRow(v29, v11, 5);
        v31 = 6;
        *((_DWORD *)dismembermentDetectBoneNames + 150) = SL_FindString(v30);
        *attachmentSFX = NULL;
        if ( ColumnCount <= 6 )
          goto LABEL_48;
        do
        {
          v32 = *((int *)dismembermentDetectBoneNames + 1901);
          v33 = 0;
          if ( (int)v32 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1404, ASSERT_TYPE_ASSERT, "(varIdx < (8))", (const char *)&queryFormat, "varIdx < DISMEMBERMENT_MAX_POINT_FX_VARIATIONS") )
            __debugbreak();
          v34 = StringTable_GetColumnValueForRow(tablePtr, v11, v31);
          if ( v34 && *v34 )
          {
            v33 = 1;
            FX_LoadEffect(v34, &config->attachmentFXDef[v11][v32]);
          }
          v35 = StringTable_GetColumnValueForRow(tablePtr, v11, v31 + 1);
          if ( v35 && *v35 )
          {
            FX_LoadEffect(v35, &config->onAttachFXDef[v11][v32]);
          }
          else if ( !v33 )
          {
            goto LABEL_46;
          }
          ++*((_DWORD *)dismembermentDetectBoneNames + 1901);
LABEL_46:
          v31 += 2;
        }
        while ( v31 < ColumnCount );
        pointType = v38;
        attachmentSFX = v37;
        v6 = filename;
LABEL_48:
        ++attachmentSFX;
        ++pointType;
        ++v11;
        v37 = attachmentSFX;
        ++dismembermentDetectBoneNames;
        v38 = pointType;
        if ( v11 >= config->numDismembermentPoints )
        {
          v5 = remapFilename;
          break;
        }
      }
    }
    if ( v5 )
      FX_Dismemberment_LoadConfig(v5, config);
  }
}

/*
==============
FX_Dismemberment_LoadConfig
==============
*/
void FX_Dismemberment_LoadConfig(const char *remapFilename, DismembermentConfig *config)
{
  int RowCount; 
  int ColumnCount; 
  int v7; 
  const char *ColumnValueForRow; 
  scr_string_t String; 
  StringTable *v11; 
  const char *v12; 
  StringTable *v13; 
  const char *v15; 
  StringTable *v16; 
  const char *v18; 
  StringTable *tablePtr; 

  if ( !remapFilename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1321, ASSERT_TYPE_ASSERT, "(remapFilename)", (const char *)&queryFormat, "remapFilename") )
    __debugbreak();
  tablePtr = NULL;
  StringTable_GetAsset(remapFilename, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1325, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  config->numDismembermentRemap = RowCount;
  if ( RowCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1328, ASSERT_TYPE_ASSERT, "(config.numDismembermentRemap <= (8))", (const char *)&queryFormat, "config.numDismembermentRemap <= DISMEMBERMENT_MAX_REMAP_ENTRIES") )
    __debugbreak();
  ColumnCount = StringTable_GetColumnCount(tablePtr);
  if ( ColumnCount != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 1332, ASSERT_TYPE_ASSERT, "( columnCount ) == ( 4 )", "%s == %s\n\t%i, %i", "columnCount", "4", ColumnCount, 4) )
    __debugbreak();
  v7 = 0;
  if ( config->numDismembermentRemap > 0 )
  {
    _RSI = &config->dismembermentRemap[0].srcBoneOffset.v[1];
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v7, 0);
      String = SL_FindString(ColumnValueForRow);
      v11 = tablePtr;
      *((_DWORD *)_RSI - 3) = String;
      v12 = StringTable_GetColumnValueForRow(v11, v7, 1);
      *(double *)&_XMM0 = atof(v12);
      v13 = tablePtr;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsi-4], xmm1
      }
      *_RSI = 0.0;
      v15 = StringTable_GetColumnValueForRow(v13, v7, 2);
      *(double *)&_XMM0 = atof(v15);
      v16 = tablePtr;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsi+4], xmm1
      }
      v18 = StringTable_GetColumnValueForRow(v16, v7, 3);
      *((_DWORD *)_RSI - 2) = SL_FindString(v18);
      _RSI += 5;
      ++v7;
    }
    while ( v7 < config->numDismembermentRemap );
  }
}

/*
==============
FX_Dismemberment_ProcessEntity
==============
*/
bool FX_Dismemberment_ProcessEntity(LocalClientNum_t localClientNum, DObj *obj, bool hideVFX)
{
  LocalClientNum_t v4; 
  bool v7; 
  bool v8; 
  char v9; 
  __int64 entnum; 
  unsigned int v11; 
  DismembermentUser *v12; 
  int DObjEntry; 
  __int64 v14; 
  int v15; 
  bool v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  unsigned __int8 *v21; 
  int v22; 
  int v23; 
  _BYTE *v24; 
  unsigned __int8 v25; 
  scr_string_t v26; 
  unsigned __int8 NextBoneIndex; 
  unsigned __int8 v28; 
  scr_string_t BoneNameScriptString; 
  unsigned __int8 i; 
  int v31; 
  int v32; 
  signed int ClientBoneOffset; 
  const XModel *Model; 
  __int64 numBones; 
  __int64 numClientBones; 
  unsigned __int8 numRootBones; 
  int v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned __int8 *v42; 
  int v43; 
  int v44; 
  unsigned __int8 v45; 
  int v46; 
  unsigned __int8 v47; 
  __int64 v48; 
  char v49; 
  int v50; 
  __int64 v51; 
  _DWORD *v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  int v56; 
  _DWORD *v57; 
  bool v58; 
  int v59; 
  int v60; 
  ParticleSystemHandle *v61; 
  __int64 v63; 
  unsigned __int8 v64; 
  __int64 v65; 
  int v66; 
  int time; 
  const FXRegisteredDef *v68; 
  scr_string_t v69; 
  int v70; 
  const FXRegisteredDef *v71; 
  const SndAliasList *v72; 
  scr_string_t v73; 
  const char ***p_gibDismemberHead; 
  scr_string_t String; 
  __int64 v76; 
  ParticleSystemHandle v77; 
  __int64 v78; 
  unsigned int v79; 
  __int64 v80; 
  ParticleSystem *v81; 
  __int64 v82; 
  int v84; 
  __int64 spawnFlags; 
  int spawnFlagsa; 
  __int64 v87; 
  int v88; 
  unsigned __int8 childIndex; 
  unsigned __int8 j; 
  char v91; 
  bool v92; 
  LocalClientNum_t localClientNuma; 
  int v94; 
  int dobjHandle; 
  __int64 v96; 
  int dismemberHandle; 
  int v98; 
  int NumModels; 
  DismembermentUser *v100; 
  __int64 v101; 
  orientation_t orient; 
  __int64 v103[4]; 

  v4 = localClientNum;
  localClientNuma = localClientNum;
  v92 = hideVFX;
  if ( !obj )
    return 0;
  v7 = 0;
  v8 = master_dismemberment_setting && master_dismemberment_setting->current.enabled && (!fx_dismemberment_enabled || fx_dismemberment_enabled->current.enabled);
  if ( g_dismembermentGlob.config.numDismembermentPoints && v8 && (obj->flags & 0x40) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    obj->flags &= 0x3Fu;
  }
  entnum = obj->entnum;
  v11 = entnum - 1;
  v91 = v9;
  v12 = &g_dismembermentGlob.users[localClientNum];
  v100 = v12;
  dobjHandle = entnum - 1;
  if ( (unsigned int)(entnum - 1) <= 0x7FF && ((0x80000000 >> (v11 & 0x1F)) & v12->dismembermentEntNumInUse[(entnum - 1) >> 5]) != 0 )
  {
    FX_Dismemberment_AcquireWriteLock();
    DObjEntry = Dismemberment_FindDObjEntry(v4, v11);
    v14 = DObjEntry;
    v15 = 0;
    dismemberHandle = DObjEntry;
    v16 = DObjEntry == 32;
    if ( DObjEntry == 32 )
    {
LABEL_160:
      g_dismembermentLock.writeThreadId = 0;
      v7 = !v16;
      ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
      Sys_CheckReleaseLock(&g_dismembermentLock);
      return v7;
    }
    v17 = DObjEntry;
    v101 = 952 * v14;
    v18 = (__int64)&v12->dismembermentEntries[v17];
    v96 = v18;
    if ( v12->dismembermentEntries[v17].indicesValid && v12->dismembermentEntries[v17].dismembermentPointCount && (v12->dismembermentEntries[v17].baseBoneCount != DObjNumBones(obj) || *(_DWORD *)(v18 + 8) != *(_DWORD *)(v18 + 4) + DObjNumClientOnlyBones(obj)) )
    {
      Com_PrintWarning(21, "FX_Dismemberment_ProcessEntity unexpected dobj change dish:%d dobjh:%d\n", (unsigned int)v14, v11);
      *(_BYTE *)(v18 + 12) = 0;
    }
    if ( v9 && DObjTotalNumBones(obj) < 768 )
    {
      v19 = *(_BYTE *)(v18 + 791);
    }
    else
    {
      *(_BYTE *)(v18 + 791) = 0;
      v19 = 0;
    }
    v20 = v19;
    if ( !*(_BYTE *)(v18 + 12) && v19 )
    {
      *(_BYTE *)(v18 + 14) = v19;
      *(_DWORD *)(v18 + 4) = DObjNumBones(obj);
      v21 = (unsigned __int8 *)(v18 + 15);
      v22 = *(_DWORD *)(v18 + 4) + DObjNumClientOnlyBones(obj);
      v23 = 0;
      *(_DWORD *)(v18 + 8) = v22;
      if ( v22 > 0 )
      {
        v24 = (_BYTE *)(v18 + 15);
        do
        {
          *v24++ = -1;
          v22 = *(_DWORD *)(v18 + 8);
          ++v23;
        }
        while ( v23 < v22 );
      }
      v25 = 0;
      if ( *(_BYTE *)(v18 + 791) )
      {
        do
        {
          v26 = *(_DWORD *)(v18 + 4i64 * v25 + 800);
          NextBoneIndex = DObjGetNextBoneIndex(obj, v26, 0xFEu);
          *(_BYTE *)(v18 + v25 + 783) = NextBoneIndex;
          if ( v21[NextBoneIndex] == 0xFF )
          {
            v28 = DObjGetNextBoneIndex(obj, v26, 0xFEu);
            if ( v28 != 0xFF )
            {
              do
              {
                childIndex = -2;
                v21[v28] = v25;
                while ( DObjGetNextChildBoneIndex(obj, v28, &childIndex) )
                {
                  v21[childIndex] = v25;
                  BoneNameScriptString = DObjGetBoneNameScriptString(obj, childIndex);
                  for ( i = DObjGetNextBoneIndex(obj, BoneNameScriptString, childIndex); i != 0xFF; i = DObjGetNextBoneIndex(obj, BoneNameScriptString, i) )
                  {
                    if ( i != childIndex )
                    {
                      for ( j = -2; DObjGetNextChildBoneIndex(obj, i, &j); v21[j] = v25 )
                        ;
                    }
                  }
                }
                v28 = DObjGetNextBoneIndex(obj, v26, v28);
              }
              while ( v28 != 0xFF );
              v18 = v96;
            }
          }
          ++v25;
        }
        while ( v25 < *(_BYTE *)(v18 + 791) );
        v22 = *(_DWORD *)(v18 + 8);
        v15 = 0;
      }
      if ( v22 - *(_DWORD *)(v18 + 4) > 0 )
      {
        NumModels = DObjGetNumModels(obj);
        v31 = NumModels;
        v94 = 0;
        v32 = 0;
        ClientBoneOffset = DObjGetClientBoneOffset(obj);
        if ( v31 > 0 )
        {
          do
          {
            Model = DObjGetModel(obj, v15);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 743, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            v98 = v32;
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            numBones = Model->numBones;
            numClientBones = Model->numClientBones;
            v94 += numBones;
            numRootBones = Model->numRootBones;
            if ( Model->parentList )
            {
              if ( (int)numClientBones + ClientBoneOffset >= 768 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 758, ASSERT_TYPE_ASSERT, "(( dobjClientBoneIndex + numModelClientBones ) < (DOBJ_TOTAL_PARTS_LIMIT))", (const char *)&queryFormat, "( dobjClientBoneIndex + numModelClientBones ) < DISMEMBERMENT_DOBJ_BONE_MAX") )
                __debugbreak();
              v38 = 0;
              v39 = ClientBoneOffset - numBones - v98;
              if ( numClientBones )
              {
                v40 = 0i64;
                v41 = numBones - numRootBones;
                v42 = &v21[ClientBoneOffset];
                do
                {
                  v43 = Model->parentList[v40 + v41];
                  v44 = v39 + v43;
                  if ( v43 <= v38 )
                    v44 = Model->parentList[v40 + v41];
                  v45 = v21[ClientBoneOffset - v44];
                  if ( v45 != 0xFF )
                    *v42 = v45;
                  ++v38;
                  ++v40;
                  ++ClientBoneOffset;
                  ++v42;
                }
                while ( v40 < numClientBones );
              }
            }
            else
            {
              ClientBoneOffset += numClientBones;
            }
            v32 = v94;
            ++v15;
          }
          while ( v15 < NumModels );
          v12 = v100;
        }
        v18 = v96;
      }
      v46 = 0;
      memset(v103, 0, sizeof(v103));
      if ( *(int *)(v18 + 8) > 0 )
      {
        do
        {
          v47 = *v21;
          if ( *v21 != 0xFF )
          {
            if ( v47 >= 8u )
            {
              LODWORD(v87) = 8;
              LODWORD(spawnFlags) = v47;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( boneDismemberIndices[boneIdx] ) < (unsigned)( ( sizeof( *array_counter( usedBoneIndex ) ) + 0 ) )", "boneDismemberIndices[boneIdx] doesn't index ARRAY_COUNT( usedBoneIndex )\n\t%i not in [0, %i)", spawnFlags, v87) )
                __debugbreak();
            }
            v48 = *v21;
            if ( !*((_DWORD *)v103 + v48) )
              *((_DWORD *)v103 + v48) = v46 + 1;
          }
          ++v46;
          ++v21;
        }
        while ( v46 < *(_DWORD *)(v18 + 8) );
      }
      v49 = *(_BYTE *)(v18 + 791);
      v50 = 0;
      if ( v49 )
      {
        v51 = 0i64;
        v52 = (_DWORD *)(v18 + 800);
        do
        {
          if ( *((_DWORD *)v103 + v51) )
          {
            LOBYTE(v54) = v49;
          }
          else
          {
            --v50;
            v53 = (unsigned __int8)(v49 - 1);
            *(_BYTE *)(v18 + 791) = v53;
            *(_BYTE *)(v51 + v18 + 792) = *(_BYTE *)(v53 + v18 + 792);
            *v52 = *(_DWORD *)(v18 + 4i64 * *(unsigned __int8 *)(v18 + 791) + 800);
            *(_BYTE *)(v51 + v18 + 944) = *(_BYTE *)(*(unsigned __int8 *)(v18 + 791) + v18 + 944);
            v54 = *(unsigned __int8 *)(v18 + 791);
            *((_DWORD *)v103 + v51--) = *((_DWORD *)v103 + v54);
            --v52;
          }
          ++v50;
          ++v51;
          ++v52;
          v49 = v54;
        }
        while ( v50 < (unsigned __int8)v54 );
      }
      v55 = v101;
      v4 = localClientNuma;
      v9 = v91;
      *(_BYTE *)(v18 + 12) = 1;
      v20 = v12->dismembermentEntries[0].dismembermentPointBoneIndices[v55 + 8];
    }
    v56 = 0;
    if ( v20 )
    {
      v57 = (_DWORD *)(v18 + 832);
      do
      {
        *v57++ = -1;
        ++v56;
      }
      while ( v56 < *(unsigned __int8 *)(v18 + 791) );
    }
    v58 = v9 && (!fx_dismemberment_render || fx_dismemberment_render->current.enabled);
    *(_BYTE *)(v18 + 13) = v58;
    v59 = 0;
    LOBYTE(v60) = *(_BYTE *)(v18 + 791);
    if ( (_BYTE)v60 )
    {
      __asm { vmovaps [rsp+118h+var_48], xmm6 }
      v61 = (ParticleSystemHandle *)(v18 + 872);
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      v63 = 0i64;
      while ( 1 )
      {
        v64 = *(_BYTE *)(v18 + v63 + 792);
        if ( v64 >= 0x32u )
        {
          LODWORD(v87) = 50;
          LODWORD(spawnFlags) = v64;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 821, ASSERT_TYPE_ASSERT, "(unsigned)( tagIdx ) < (unsigned)( (50) )", "tagIdx doesn't index DISMEMBERMENT_MAX_POINTS\n\t%i not in [0, %i)", spawnFlags, v87) )
            __debugbreak();
        }
        if ( !v92 && *(_BYTE *)(v18 + 13) && (v65 = v64, g_dismembermentGlob.config.dismembermentBoneNames[v64] == *((_DWORD *)v61 - 18)) && g_dismembermentGlob.config.pointType[v64] == *(_BYTE *)(v63 + v18 + 944) )
        {
          v66 = DObjGetNextBoneIndex(obj, g_dismembermentGlob.config.attachmentBoneNames[v64], 0xFEu);
          if ( *v61 == PARTICLE_SYSTEM_INVALID_HANDLE )
          {
            if ( v4 >= (unsigned int)cg_t::ms_allocatedCount )
            {
              LODWORD(v87) = cg_t::ms_allocatedCount;
              LODWORD(spawnFlags) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", spawnFlags, v87) )
                __debugbreak();
            }
            if ( !cg_t::ms_cgArray[v4] )
            {
              LODWORD(v87) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v87) )
                __debugbreak();
            }
            if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
            {
              LODWORD(v87) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v87) )
                __debugbreak();
            }
            time = cg_t::ms_cgArray[v4]->time;
            v68 = &g_dismembermentGlob.config.attachmentFXDef[v64][*((int *)v61 + 8)];
            if ( v68->m_particleSystemDef && v66 != 255 )
              *v61 = FX_PlayBoltedEffect(localClientNuma, v68, time, dobjHandle, v66, 0);
            if ( !*(_BYTE *)(v63 + v96 + 864) )
            {
              v69 = g_dismembermentGlob.config.onAttachBoneNames[v64];
              v70 = v69 == g_dismembermentGlob.config.attachmentBoneNames[v64] ? v66 : DObjGetNextBoneIndex(obj, v69, 0xFEu);
              v71 = &g_dismembermentGlob.config.onAttachFXDef[v64][*((int *)v61 + 8)];
              *(_BYTE *)(v63 + v96 + 864) = 1;
              if ( v71->m_particleSystemDef )
              {
                if ( v70 != 255 )
                  FX_PlayBoltedEffect(localClientNuma, v71, time, dobjHandle, v70, 0);
              }
            }
          }
          Sys_ProfBeginNamedEvent(0xFF008008, "Play Sound - Dismemberment");
          if ( !*(_BYTE *)(v63 + v96 + 936) && v66 != 255 )
          {
            *(_BYTE *)(v63 + v96 + 936) = 1;
            v72 = g_dismembermentGlob.config.attachmentSFX[v64];
            if ( v72 )
              goto LABEL_131;
            v73 = g_dismembermentGlob.config.attachmentSFXNames[v65];
            p_gibDismemberHead = (const char ***)&cgMedia.gibDismemberHead;
            while ( 1 )
            {
              if ( *p_gibDismemberHead )
              {
                String = SL_FindString(**p_gibDismemberHead);
                if ( String )
                {
                  if ( String == v73 )
                    break;
                }
              }
              if ( ++p_gibDismemberHead > (const char ***)&cgMedia.gibGeneric2Arm )
              {
                v72 = NULL;
                goto LABEL_130;
              }
            }
            v72 = (const SndAliasList *)*p_gibDismemberHead;
LABEL_130:
            g_dismembermentGlob.config.attachmentSFX[v65] = v72;
            if ( v72 )
            {
LABEL_131:
              v76 = localClientNuma;
              if ( FX_GetBoneOrientation(localClientNuma, dobjHandle, v66, &orient) )
              {
                if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
                {
                  LODWORD(v87) = v76;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v87) )
                    __debugbreak();
                }
                if ( (unsigned int)v76 >= CgSoundSystem::ms_allocatedCount )
                {
                  LODWORD(v87) = CgSoundSystem::ms_allocatedCount;
                  LODWORD(spawnFlags) = v76;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", spawnFlags, v87) )
                    __debugbreak();
                }
                if ( !CgSoundSystem::ms_soundSystemArray[v76] )
                {
                  LODWORD(v87) = v76;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v87) )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  dword ptr [rsp+118h+var_E8], xmm6
                  vmovss  dword ptr [rsp+118h+spawnFlags], xmm6
                }
                ((void (__fastcall *)(CgSoundSystem *, __int64, orientation_t *, const SndAliasList *, _DWORD, int, int, _DWORD))CgSoundSystem::ms_soundSystemArray[v76]->PlaySurfaceSound)(CgSoundSystem::ms_soundSystemArray[v76], 2046i64, &orient, v72, 0, spawnFlagsa, v88, 0);
              }
            }
          }
          Sys_ProfEndNamedEvent();
          v18 = v96;
        }
        else
        {
          v77 = *v61;
          if ( *v61 )
          {
            v78 = (__int64)(int)v4 << 12;
            v79 = 0;
            if ( g_particleSystemsGeneration[v78 + (v77 & 0xFFF)].__all32 == v77 )
              v79 = *v61 & 0xFFF;
            v80 = v79;
            v81 = NULL;
            v82 = v78 + v80;
            if ( g_particleSystems[0][v82] >= (ParticleSystem *)0x1000 )
              v81 = g_particleSystems[0][v82];
            if ( v81 )
              FX_KillEffect(v4, v77);
            *v61 = PARTICLE_SYSTEM_INVALID_HANDLE;
          }
        }
        v60 = *(unsigned __int8 *)(v18 + 791);
        ++v59;
        ++v63;
        ++v61;
        if ( v59 >= v60 )
          break;
        v4 = localClientNuma;
      }
      v9 = v91;
      __asm { vmovaps xmm6, [rsp+118h+var_48] }
    }
    if ( *(_BYTE *)(v18 + 14) )
    {
      if ( v9 )
      {
        v84 = dismemberHandle;
LABEL_157:
        if ( !*(_BYTE *)(v18 + 13) )
          v84 = 32;
        v16 = v84 == 32;
        goto LABEL_160;
      }
    }
    else if ( v9 && (_BYTE)v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 891, ASSERT_TYPE_ASSERT, "(!enabled || entry.desiredDismemberCount == 0)", (const char *)&queryFormat, "!enabled || entry.desiredDismemberCount == 0") )
    {
      __debugbreak();
    }
    Dismemberment_ClearEntry(localClientNuma, dismemberHandle);
    v84 = 32;
    goto LABEL_157;
  }
  return v7;
}

/*
==============
FX_Dismemberment_ProcessTimeout
==============
*/
void FX_Dismemberment_ProcessTimeout(LocalClientNum_t localClientNum, DObj *obj)
{
  bool v3; 
  __int64 entnum; 
  int v5; 
  DismembermentUser *v6; 
  int DObjEntry; 
  __int64 v8; 
  int LocalClientTime; 
  __int64 v10; 
  unsigned __int8 v11; 
  unsigned __int8 i; 
  __int64 v13; 

  if ( obj )
  {
    v3 = master_dismemberment_setting && master_dismemberment_setting->current.enabled && (!fx_dismemberment_enabled || fx_dismemberment_enabled->current.enabled);
    if ( !g_dismembermentGlob.config.numDismembermentPoints || !v3 )
      obj->flags &= 0x3Fu;
    entnum = obj->entnum;
    v5 = entnum - 1;
    v6 = &g_dismembermentGlob.users[localClientNum];
    if ( (unsigned int)(entnum - 1) <= 0x7FF && ((0x80000000 >> (v5 & 0x1F)) & v6->dismembermentEntNumInUse[(entnum - 1) >> 5]) != 0 )
    {
      FX_Dismemberment_AcquireWriteLock();
      DObjEntry = Dismemberment_FindDObjEntry(localClientNum, v5);
      v8 = DObjEntry;
      if ( DObjEntry != 32 )
      {
        LocalClientTime = CG_GetLocalClientTime(localClientNum);
        v10 = (__int64)&v6->dismembermentEntries[v8];
        if ( *(_BYTE *)(v10 + 14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 573, ASSERT_TYPE_ASSERT, "(entry.dismembermentPointCount == 0)", (const char *)&queryFormat, "entry.dismembermentPointCount == 0") )
          __debugbreak();
        v11 = *(_BYTE *)(v10 + 791);
        for ( i = 0; i < v11; ++i )
        {
          v13 = i;
          if ( *(int *)(v10 + 4i64 * i + 832) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 576, ASSERT_TYPE_ASSERT, "(entry.desiredDismemberTimes[boneTagIdx] >= 0)", (const char *)&queryFormat, "entry.desiredDismemberTimes[boneTagIdx] >= 0") )
            __debugbreak();
          if ( LocalClientTime - *(_DWORD *)(v10 + 4i64 * i + 832) >= 500 )
          {
            --*(_BYTE *)(v10 + 791);
            --i;
            *(_BYTE *)(v13 + v10 + 792) = *(_BYTE *)(*(unsigned __int8 *)(v10 + 791) + v10 + 792);
            *(_DWORD *)(v10 + 4 * v13 + 800) = *(_DWORD *)(v10 + 4i64 * *(unsigned __int8 *)(v10 + 791) + 800);
            *(_BYTE *)(v13 + v10 + 944) = *(_BYTE *)(*(unsigned __int8 *)(v10 + 791) + v10 + 944);
            *(_DWORD *)(v10 + 4 * v13 + 832) = *(_DWORD *)(v10 + 4i64 * *(unsigned __int8 *)(v10 + 791) + 832);
          }
          v11 = *(_BYTE *)(v10 + 791);
        }
        if ( !v11 )
          Dismemberment_ClearEntry(localClientNum, v8);
      }
      g_dismembermentLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
      Sys_CheckReleaseLock(&g_dismembermentLock);
    }
  }
}

/*
==============
FX_Dismemberment_Restore
==============
*/
void FX_Dismemberment_Restore(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  __int64 v3; 
  DismembermentUser *v4; 
  __int64 v5; 
  int numDismembermentPoints; 
  int v7; 
  int v8; 
  bool *dismemberBoneDisabled; 
  scr_string_t *dismembermentBoneNames; 
  int v11; 
  unsigned __int8 p; 

  v3 = localClientNum;
  MemFile_ReadData(memFile, 1ui64, &p);
  MemFile_ReadData(memFile, 1ui64, &v11);
  if ( p != 100 || (_BYTE)v11 != 109 )
  {
    Com_PrintError(14, "FX_Dismemberment_Restore() expected 0x%x and 0x%x to guarantee beginning of dismemberment section, but found 0x%x and 0x%x instead.\n", 100i64, 109i64, p, (unsigned __int8)v11);
    Sys_Error((const ObfuscateErrorText)&stru_143FEFB68);
  }
  FX_Dismemberment_AcquireWriteLock();
  v4 = &g_dismembermentGlob.users[v3];
  *(_QWORD *)v4->dismemberBoneDisabled = 0i64;
  *(_QWORD *)&v4->dismemberBoneDisabled[8] = 0i64;
  *(_QWORD *)&v4->dismemberBoneDisabled[16] = 0i64;
  *(_QWORD *)&v4->dismemberBoneDisabled[24] = 0i64;
  *(_QWORD *)&v4->dismemberBoneDisabled[32] = 0i64;
  *(_QWORD *)&v4->dismemberBoneDisabled[40] = 0i64;
  *(_WORD *)&v4->dismemberBoneDisabled[48] = 0;
  MemFile_ReadData(memFile, 1ui64, &v11);
  if ( (_BYTE)v11 )
  {
    v5 = (unsigned __int8)v11;
    do
    {
      MemFile_ReadData(memFile, 4ui64, &v11);
      numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
      v7 = 0;
      if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
      {
        v8 = v11;
        dismemberBoneDisabled = v4->dismemberBoneDisabled;
        dismembermentBoneNames = g_dismembermentGlob.config.dismembermentBoneNames;
        do
        {
          if ( v8 == *dismembermentBoneNames )
          {
            *dismemberBoneDisabled = 1;
            numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
          }
          ++v7;
          ++dismembermentBoneNames;
          ++dismemberBoneDisabled;
        }
        while ( v7 < numDismembermentPoints );
      }
      --v5;
    }
    while ( v5 );
  }
  g_dismembermentLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
  Sys_CheckReleaseLock(&g_dismembermentLock);
}

/*
==============
FX_Dismemberment_Save
==============
*/
void FX_Dismemberment_Save(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  __int64 v3; 
  char v4; 
  DismembermentUser *v5; 
  bool *dismemberBoneDisabled; 
  __int64 numDismembermentPoints; 
  bool v8; 
  char v9; 
  int v10; 
  int v11; 
  bool *v12; 
  scr_string_t *dismembermentBoneNames; 
  scr_string_t p; 

  v3 = localClientNum;
  LOBYTE(p) = 100;
  v4 = 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = 109;
  MemFile_WriteData(memFile, 1ui64, &p);
  Sys_CheckAcquireLock(&g_dismembermentLock);
  AcquireSRWLockShared((PSRWLOCK)&g_dismembermentLock);
  v5 = &g_dismembermentGlob.users[v3];
  if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
  {
    dismemberBoneDisabled = v5->dismemberBoneDisabled;
    numDismembermentPoints = (unsigned int)g_dismembermentGlob.config.numDismembermentPoints;
    do
    {
      v8 = !*dismemberBoneDisabled;
      v9 = v4 + 1;
      ++dismemberBoneDisabled;
      if ( v8 )
        v9 = v4;
      v4 = v9;
      --numDismembermentPoints;
    }
    while ( numDismembermentPoints );
  }
  LOBYTE(p) = v4;
  MemFile_WriteData(memFile, 1ui64, &p);
  v10 = g_dismembermentGlob.config.numDismembermentPoints;
  v11 = 0;
  if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
  {
    v12 = v5->dismemberBoneDisabled;
    dismembermentBoneNames = g_dismembermentGlob.config.dismembermentBoneNames;
    do
    {
      if ( *v12 )
      {
        p = *dismembermentBoneNames;
        MemFile_WriteData(memFile, 4ui64, &p);
        v10 = g_dismembermentGlob.config.numDismembermentPoints;
      }
      ++v11;
      ++v12;
      ++dismembermentBoneNames;
    }
    while ( v11 < v10 );
  }
  ReleaseSRWLockShared((PSRWLOCK)&g_dismembermentLock);
  Sys_CheckReleaseLock(&g_dismembermentLock);
}

/*
==============
FX_Dismemberment_SetBoneEnabled
==============
*/
void FX_Dismemberment_SetBoneEnabled(LocalClientNum_t localClientNum, scr_string_t boneName, bool enabled)
{
  __int64 v4; 
  int numDismembermentPoints; 
  int v7; 
  __int64 v8; 

  v4 = localClientNum;
  FX_Dismemberment_AcquireWriteLock();
  numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
  v7 = 0;
  if ( g_dismembermentGlob.config.numDismembermentPoints > 0 )
  {
    v8 = 0i64;
    do
    {
      if ( boneName == g_dismembermentGlob.config.dismembermentBoneNames[v8] )
      {
        g_dismembermentGlob.users[v4].dismemberBoneDisabled[v8] = !enabled;
        numDismembermentPoints = g_dismembermentGlob.config.numDismembermentPoints;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < numDismembermentPoints );
  }
  g_dismembermentLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
  Sys_CheckReleaseLock(&g_dismembermentLock);
}

/*
==============
FX_Dismemberment_Shutdown
==============
*/
void FX_Dismemberment_Shutdown(LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( !g_dismembermentGlob.allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_dismemberment.cpp", 544, ASSERT_TYPE_ASSERT, "(g_dismembermentGlob.allocated)", (const char *)&queryFormat, "g_dismembermentGlob.allocated") )
    __debugbreak();
  g_dismembermentGlob.users[v1].initialized = 0;
}

/*
==============
FX_Dismemberment_Transfer
==============
*/
void FX_Dismemberment_Transfer(LocalClientNum_t localClientNum, int fromDObjHandle, int toDObjHandle)
{
  __int64 v3; 
  bool v4; 
  DismembermentUser *v7; 
  int DObjEntry; 
  __int64 v9; 
  DObj *ClientDObj; 
  char *v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  int LocalClientTime; 
  int v16; 
  __int64 v17; 
  int *v18; 
  int v19; 

  v3 = toDObjHandle;
  v4 = 1;
  if ( fromDObjHandle != toDObjHandle )
  {
    v7 = &g_dismembermentGlob.users[localClientNum];
    if ( (unsigned int)fromDObjHandle > 0x7FF || ((0x80000000 >> (fromDObjHandle & 0x1F)) & v7->dismembermentEntNumInUse[(__int64)fromDObjHandle >> 5]) == 0 )
      goto LABEL_25;
    FX_Dismemberment_AcquireWriteLock();
    DObjEntry = Dismemberment_FindDObjEntry(localClientNum, fromDObjHandle);
    v9 = DObjEntry;
    if ( DObjEntry != 32 )
    {
      ClientDObj = Com_GetClientDObj(fromDObjHandle, localClientNum);
      if ( ClientDObj && (ClientDObj->flags & 0xC0) != 0 )
      {
        v11 = (char *)v7 + 952 * v9;
        if ( (unsigned int)v3 <= 0x7FF && ((0x80000000 >> (v3 & 0x1F)) & v7->dismembermentEntNumInUse[v3 >> 5]) != 0 )
        {
          v12 = Dismemberment_FindDObjEntry(localClientNum, v3);
          if ( v12 != 32 )
            Dismemberment_ClearEntry(localClientNum, v12);
        }
        if ( v11[1047] )
        {
          v13 = Dismemberment_AddDObjEntry(localClientNum, v3);
          v14 = v13;
          if ( v13 != 32 )
          {
            if ( (unsigned int)v3 <= 0x7FF )
              Sys_InterlockedOr(&v7->dismembermentEntNumInUse[v3 >> 5], 0x80000000 >> (v3 & 0x1F));
            LocalClientTime = CG_GetLocalClientTime(localClientNum);
            v16 = 0;
            if ( v11[1047] )
            {
              v17 = 0i64;
              v18 = (int *)(v11 + 1088);
              do
              {
                if ( *v18 == -1 || LocalClientTime - *v18 < 500 )
                {
                  v7->dismembermentEntries[v14].configPointIndex[v7->dismembermentEntries[v14].desiredDismemberCount] = v11[v17 + 1048];
                  v7->dismembermentEntries[v14].desiredDismemberBoneTags[v7->dismembermentEntries[v14].desiredDismemberCount] = *(v18 - 8);
                  v7->dismembermentEntries[v14].pointType[v7->dismembermentEntries[v14].desiredDismemberCount] = v11[v17 + 1200];
                  v7->dismembermentEntries[v14].desiredDismemberTimes[v7->dismembermentEntries[v14].desiredDismemberCount] = *v18;
                  v7->dismembermentEntries[v14].attachmentVariationIndex[v7->dismembermentEntries[v14].desiredDismemberCount] = v18[18];
                  v7->dismembermentEntries[v14].onAttachFXPlayed[v7->dismembermentEntries[v14].desiredDismemberCount] = v11[v17 + 1120];
                  v7->dismembermentEntries[v14].onAttachSFXPlayed[v7->dismembermentEntries[v14].desiredDismemberCount++] = v11[v17 + 1192];
                  v7->dismembermentEntries[v14].indicesValid = 0;
                }
                ++v16;
                ++v17;
                ++v18;
              }
              while ( v16 < (unsigned __int8)v11[1047] );
            }
            v4 = v7->dismembermentEntries[v14].desiredDismemberCount == 0;
          }
        }
      }
      Dismemberment_ClearEntry(localClientNum, v9);
    }
    g_dismembermentLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
    Sys_CheckReleaseLock(&g_dismembermentLock);
    if ( v4 )
    {
LABEL_25:
      if ( (unsigned int)v3 <= 0x7FF && ((0x80000000 >> (v3 & 0x1F)) & v7->dismembermentEntNumInUse[v3 >> 5]) != 0 )
      {
        FX_Dismemberment_AcquireWriteLock();
        v19 = Dismemberment_FindDObjEntry(localClientNum, v3);
        if ( v19 != 32 )
          Dismemberment_ClearEntry(localClientNum, v19);
        g_dismembermentLock.writeThreadId = 0;
        ReleaseSRWLockExclusive((PSRWLOCK)&g_dismembermentLock);
        Sys_CheckReleaseLock(&g_dismembermentLock);
      }
    }
  }
}

