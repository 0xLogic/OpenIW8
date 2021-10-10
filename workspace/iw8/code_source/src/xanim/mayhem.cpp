/*
==============
Mayhem_UpdatePlacement
==============
*/

void __fastcall Mayhem_UpdatePlacement(scr_string_t mayhemName, const vec3_t *newPos, const vec4_t *newQuat)
{
  ?Mayhem_UpdatePlacement@@YAXW4scr_string_t@@AEBTvec3_t@@AEBTvec4_t@@@Z(mayhemName, newPos, newQuat);
}

/*
==============
Mayhem_ShowInstance
==============
*/

void __fastcall Mayhem_ShowInstance(scr_string_t mayhemName)
{
  ?Mayhem_ShowInstance@@YAXW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_GetAnimationNumFrames
==============
*/

unsigned int __fastcall Mayhem_GetAnimationNumFrames(scr_string_t mayhemName)
{
  return ?Mayhem_GetAnimationNumFrames@@YAIW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_DoesInstanceExist
==============
*/

int __fastcall Mayhem_DoesInstanceExist(scr_string_t mayhemName)
{
  return ?Mayhem_DoesInstanceExist@@YAHW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_PlayInstance
==============
*/

void __fastcall Mayhem_PlayInstance(scr_string_t mayhemName)
{
  ?Mayhem_PlayInstance@@YAXW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_ClearSoundEntries
==============
*/

void __fastcall Mayhem_ClearSoundEntries(unsigned int mayhemEntId)
{
  ?Mayhem_ClearSoundEntries@@YAXI@Z(mayhemEntId);
}

/*
==============
Mayhem_InitEntities
==============
*/

void __fastcall Mayhem_InitEntities(LocalClientNum_t localClientNum)
{
  ?Mayhem_InitEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Mayhem_Update
==============
*/

void __fastcall Mayhem_Update(LocalClientNum_t localClientNum, MayhemUpdateType updateType)
{
  ?Mayhem_Update@@YAXW4LocalClientNum_t@@W4MayhemUpdateType@@@Z(localClientNum, updateType);
}

/*
==============
Mayhem_UpdatePose
==============
*/

void __fastcall Mayhem_UpdatePose(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits, int mayhemInstanceId)
{
  ?Mayhem_UpdatePose@@YAXPEBUcpose_t@@PEBUDObj@@PEAUDObjPartBits@@H@Z(pose, obj, partBits, mayhemInstanceId);
}

/*
==============
Mayhem_GetAnimInfo
==============
*/

bool __fastcall Mayhem_GetAnimInfo(int mayhemInstanceId, const DObj *obj, const XModel *model, MayhemAnimInfo *outAnimInfo)
{
  return ?Mayhem_GetAnimInfo@@YA_NHPEBUDObj@@PEBUXModel@@PEAUMayhemAnimInfo@@@Z(mayhemInstanceId, obj, model, outAnimInfo);
}

/*
==============
Mayhem_SpawnInstance
==============
*/

int __fastcall Mayhem_SpawnInstance(scr_string_t mayhemName, scr_string_t assetName, const vec3_t *spawnPos, const vec4_t *spawnQuat)
{
  return ?Mayhem_SpawnInstance@@YAHW4scr_string_t@@0AEBTvec3_t@@AEBTvec4_t@@@Z(mayhemName, assetName, spawnPos, spawnQuat);
}

/*
==============
Mayhem_GetPose
==============
*/

const cpose_t *__fastcall Mayhem_GetPose(LocalClientNum_t localClientNum, int dobjHandle)
{
  return ?Mayhem_GetPose@@YAPEBUcpose_t@@W4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
Mayhem_DumpEntInfo
==============
*/

void __fastcall Mayhem_DumpEntInfo()
{
  ?Mayhem_DumpEntInfo@@YAXXZ();
}

/*
==============
Mayhem_WriteSaveGame
==============
*/

void __fastcall Mayhem_WriteSaveGame(MemoryFile *memFile)
{
  ?Mayhem_WriteSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Mayhem_PauseInstance
==============
*/

void __fastcall Mayhem_PauseInstance(scr_string_t mayhemName)
{
  ?Mayhem_PauseInstance@@YAXW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_ReleaseResources
==============
*/

void __fastcall Mayhem_ReleaseResources(MayhemData *mayhem)
{
  ?Mayhem_ReleaseResources@@YAXPEAUMayhemData@@@Z(mayhem);
}

/*
==============
Mayhem_ReadSaveGame
==============
*/

void __fastcall Mayhem_ReadSaveGame(MemoryFile *memFile)
{
  ?Mayhem_ReadSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Mayhem_IsHidden
==============
*/

bool __fastcall Mayhem_IsHidden(LocalClientNum_t localClientNum, int dobjHandle)
{
  return ?Mayhem_IsHidden@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
Mayhem_SetAnimationTime
==============
*/

void __fastcall Mayhem_SetAnimationTime(scr_string_t mayhemName, float curTime)
{
  ?Mayhem_SetAnimationTime@@YAXW4scr_string_t@@M@Z(mayhemName, curTime);
}

/*
==============
Mayhem_GetAnimationTimeNormalized
==============
*/

double __fastcall Mayhem_GetAnimationTimeNormalized(scr_string_t mayhemName)
{
  double result; 

  *(float *)&result = ?Mayhem_GetAnimationTimeNormalized@@YAMW4scr_string_t@@@Z(mayhemName);
  return result;
}

/*
==============
Mayhem_TransientsLoaded
==============
*/

void __fastcall Mayhem_TransientsLoaded(int zoneIdx)
{
  ?Mayhem_TransientsLoaded@@YAXH@Z(zoneIdx);
}

/*
==============
Mayhem_GetAnimationFrameRate
==============
*/

double __fastcall Mayhem_GetAnimationFrameRate(scr_string_t mayhemName)
{
  double result; 

  *(float *)&result = ?Mayhem_GetAnimationFrameRate@@YAMW4scr_string_t@@@Z(mayhemName);
  return result;
}

/*
==============
Mayhem_TransientsUnloading
==============
*/

void __fastcall Mayhem_TransientsUnloading(int zoneIdx)
{
  ?Mayhem_TransientsUnloading@@YAXH@Z(zoneIdx);
}

/*
==============
Mayhem_KillInstance
==============
*/

void __fastcall Mayhem_KillInstance(scr_string_t mayhemName)
{
  ?Mayhem_KillInstance@@YAXW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_SetSoundEntry
==============
*/

void __fastcall Mayhem_SetSoundEntry(const unsigned int sndId, const unsigned int mayhemEntId, const unsigned int subObjIdx, const unsigned __int8 boneIdx)
{
  ?Mayhem_SetSoundEntry@@YAXIIIE@Z(sndId, mayhemEntId, subObjIdx, boneIdx);
}

/*
==============
Mayhem_IsInitialized
==============
*/

int __fastcall Mayhem_IsInitialized()
{
  return ?Mayhem_IsInitialized@@YAHXZ();
}

/*
==============
Mayhem_Shutdown
==============
*/

void Mayhem_Shutdown(void)
{
  ?Mayhem_Shutdown@@YAXXZ();
}

/*
==============
Mayhem_Init
==============
*/

void Mayhem_Init(void)
{
  ?Mayhem_Init@@YAXXZ();
}

/*
==============
Mayhem_HidePart
==============
*/

void __fastcall Mayhem_HidePart(int doHide, unsigned int mayhemEntId, scr_string_t boneName)
{
  ?Mayhem_HidePart@@YAXHIW4scr_string_t@@@Z(doHide, mayhemEntId, boneName);
}

/*
==============
Mayhem_GetAnimationTime
==============
*/

double __fastcall Mayhem_GetAnimationTime(scr_string_t mayhemName)
{
  double result; 

  *(float *)&result = ?Mayhem_GetAnimationTime@@YAMW4scr_string_t@@@Z(mayhemName);
  return result;
}

/*
==============
Mayhem_IsMayhem
==============
*/

bool __fastcall Mayhem_IsMayhem(int dobjHandle)
{
  return ?Mayhem_IsMayhem@@YA_NH@Z(dobjHandle);
}

/*
==============
Mayhem_HideInstance
==============
*/

void __fastcall Mayhem_HideInstance(scr_string_t mayhemName)
{
  ?Mayhem_HideInstance@@YAXW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_MyChanges
==============
*/

void Mayhem_MyChanges(void)
{
  ?Mayhem_MyChanges@@YAXXZ();
}

/*
==============
Mayhem_SetDelayedUpdate
==============
*/

void __fastcall Mayhem_SetDelayedUpdate(scr_string_t mayhemName)
{
  ?Mayhem_SetDelayedUpdate@@YAXW4scr_string_t@@@Z(mayhemName);
}

/*
==============
Mayhem_DebugName
==============
*/

const char *__fastcall Mayhem_DebugName(LocalClientNum_t localClientNum, int dobjHandle)
{
  return ?Mayhem_DebugName@@YAPEBDW4LocalClientNum_t@@H@Z(localClientNum, dobjHandle);
}

/*
==============
Mayhem_FlagForTransfer
==============
*/

void __fastcall Mayhem_FlagForTransfer(scr_string_t mayhemName, bool doEnable)
{
  ?Mayhem_FlagForTransfer@@YAXW4scr_string_t@@_N@Z(mayhemName, doEnable);
}

/*
==============
Mayhem_GetSpawnedObject
==============
*/

MayhemObj *__fastcall Mayhem_GetSpawnedObject(scr_string_t mayhemName)
{
  return ?Mayhem_GetSpawnedObject@@YAPEAUMayhemObj@@W4scr_string_t@@@Z(mayhemName);
}

/*
==============
Copy_MayhemObj
==============
*/
void Copy_MayhemObj(MayhemObj *out, const MayhemObj *in)
{
  cpose_t *v4; 
  __int64 v5; 
  char *v6; 
  cpose_t *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  MayhemObj *v11; 
  void (__fastcall **p_Get_origin)(const vec4_t *, vec3_t *); 
  char *v13; 
  void (__fastcall *v14)(const vec3_t *, vec4_t *); 
  const cpose_t *v15; 
  void (__fastcall **v16)(const vec4_t *, vec3_t *); 
  _OWORD *v17; 
  __int64 v18; 
  __int64 v19; 
  void (__fastcall *v20)(const vec4_t *, vec3_t *); 
  __int64 v21; 
  __int64 v22; 
  cpose_t *v23; 
  __int64 v24; 
  char *v25; 
  __int64 v26; 
  cpose_t *v27; 
  MayhemObj *v28; 
  __int64 v29; 
  cpose_t *v30; 
  __int64 v31; 
  __int64 v32; 
  vec3_t outOrigin; 
  MayhemObj *v34; 
  void (__fastcall *functionPointer)(const vec4_t *, vec3_t *); 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  __int64 v38; 
  __int64 v39; 
  char *v40; 
  void *Src; 
  cpose_t *p_prePostPose; 
  __int64 v43; 
  char v44[288]; 
  cpose_t v45[16]; 

  v43 = -2i64;
  Src = (void *)in;
  v34 = out;
  v4 = v45;
  v5 = 16i64;
  do
  {
    cpose_t::cpose_t(v4++);
    --v5;
  }
  while ( v5 );
  p_prePostPose = &out->prePostPose;
  Copy_CPose(&out->prePostPose, &in->prePostPose);
  v6 = v44;
  v7 = &out->prePostPose;
  v8 = 2i64;
  do
  {
    *(__m256i *)v6 = *(__m256i *)&v7->eType;
    *((__m256i *)v6 + 1) = *(__m256i *)&v7->actualOrigin.y;
    *((__m256i *)v6 + 2) = *(__m256i *)&v7->origin.origin.secureOrigin.xyz.z;
    *((_OWORD *)v6 + 6) = *(_OWORD *)&v7->prevOrigin.Get_prevOrigin;
    v6 += 128;
    *((_OWORD *)v6 - 1) = *(vec4_t *)((char *)&v7->prevOrigin.prevOrigin + 8);
    v7 = (cpose_t *)((char *)v7 + 128);
    --v8;
  }
  while ( v8 );
  *(__m256i *)v6 = *(__m256i *)&v7->eType;
  v9 = 0;
  v10 = 0;
  v11 = out;
  p_Get_origin = &out->pose[0].origin.Get_origin;
  v38 = (char *)in - (char *)v11 + 48;
  v39 = (char *)in - (char *)v11 + 56;
  v13 = (char *)((char *)in - (char *)v11 - 48);
  v40 = v13;
  do
  {
    v14 = ObfuscateSetFunctionPointer_origin((void (__fastcall *const)(const vec3_t *, vec4_t *))*(p_Get_origin - 1), (const cpose_t *)(p_Get_origin - 6));
    functionPointer = ObfuscateGetFunctionPointer_origin(*p_Get_origin, (const cpose_t *)(p_Get_origin - 6));
    Origin = ObfuscateSetFunctionPointer_prevOrigin((void (__fastcall *const)(const vec3_t *, vec4_t *))p_Get_origin[5], (const cpose_t *)(p_Get_origin - 6));
    FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(p_Get_origin[6], (const cpose_t *)(p_Get_origin - 6));
    v15 = (const cpose_t *)((char *)p_Get_origin + (_QWORD)v13);
    v16 = p_Get_origin - 6;
    v17 = (_OWORD *)((char *)p_Get_origin + (_QWORD)v13);
    v18 = 2i64;
    do
    {
      *(_OWORD *)v16 = *v17;
      *((_OWORD *)v16 + 1) = v17[1];
      *((_OWORD *)v16 + 2) = v17[2];
      *((_OWORD *)v16 + 3) = v17[3];
      *((_OWORD *)v16 + 4) = v17[4];
      *((_OWORD *)v16 + 5) = v17[5];
      *((_OWORD *)v16 + 6) = v17[6];
      v16 += 16;
      *((_OWORD *)v16 - 1) = v17[7];
      v17 += 8;
      --v18;
    }
    while ( v18 );
    *(_OWORD *)v16 = *v17;
    *((_OWORD *)v16 + 1) = v17[1];
    *(p_Get_origin - 1) = NULL;
    *p_Get_origin = NULL;
    p_Get_origin[5] = NULL;
    p_Get_origin[6] = NULL;
    *(p_Get_origin - 1) = (void (__fastcall *)(const vec4_t *, vec3_t *))ObfuscateSetFunctionPointer_origin(v14, (const cpose_t *)(p_Get_origin - 6));
    *p_Get_origin = ObfuscateGetFunctionPointer_origin(functionPointer, (const cpose_t *)(p_Get_origin - 6));
    p_Get_origin[5] = (void (__fastcall *)(const vec4_t *, vec3_t *))ObfuscateSetFunctionPointer_prevOrigin(Origin, (const cpose_t *)(p_Get_origin - 6));
    p_Get_origin[6] = ObfuscateGetFunctionPointer_prevOrigin(FunctionPointer_prevOrigin, (const cpose_t *)(p_Get_origin - 6));
    CG_GetPoseOrigin(v15, &outOrigin);
    CG_SetPoseOrigin((cpose_t *)(p_Get_origin - 6), &outOrigin);
    v19 = v38;
    if ( !*(void (__fastcall **)(const vec4_t *, vec3_t *))((char *)p_Get_origin + v38) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
      __debugbreak();
    v20 = ObfuscateGetFunctionPointer_prevOrigin(*(void (__fastcall **)(const vec4_t *, vec3_t *))((char *)p_Get_origin + v19), v15);
    v20((const vec4_t *)((char *)p_Get_origin + v39), &outOrigin);
    CG_SetPrevPoseOrigin((cpose_t *)(p_Get_origin - 6), &outOrigin);
    memset(&outOrigin, 0, sizeof(outOrigin));
    v21 = (int)v10;
    v22 = (__int64)&v11->pose[v21];
    v23 = &v45[v21];
    v24 = 2i64;
    do
    {
      *(__m256i *)&v23->eType = *(__m256i *)v22;
      *(__m256i *)&v23->actualOrigin.y = *(__m256i *)(v22 + 32);
      *(__m256i *)&v23->origin.origin.secureOrigin.xyz.z = *(__m256i *)(v22 + 64);
      *(_OWORD *)&v23->prevOrigin.Get_prevOrigin = *(_OWORD *)(v22 + 96);
      v23 = (cpose_t *)((char *)v23 + 128);
      *((_OWORD *)&v23[-1].moverFx + 7) = *(_OWORD *)(v22 + 112);
      v22 += 128i64;
      --v24;
    }
    while ( v24 );
    *(__m256i *)&v23->eType = *(__m256i *)v22;
    ++v10;
    p_Get_origin += 36;
    v13 = v40;
  }
  while ( v10 < 0x10 );
  memcpy_0(v11, Src, sizeof(MayhemObj));
  v25 = v44;
  v26 = 2i64;
  v27 = p_prePostPose;
  do
  {
    *(__m256i *)&v27->eType = *(__m256i *)v25;
    *(__m256i *)&v27->actualOrigin.y = *((__m256i *)v25 + 1);
    *(__m256i *)&v27->origin.origin.secureOrigin.xyz.z = *((__m256i *)v25 + 2);
    *(_OWORD *)&v27->prevOrigin.Get_prevOrigin = *((_OWORD *)v25 + 6);
    v27 = (cpose_t *)((char *)v27 + 128);
    *((_OWORD *)&v27[-1].moverFx + 7) = *((_OWORD *)v25 + 7);
    v25 += 128;
    --v26;
  }
  while ( v26 );
  *(__m256i *)&v27->eType = *(__m256i *)v25;
  v28 = v34;
  do
  {
    v29 = (int)v9;
    v30 = &v45[v29];
    v31 = (__int64)&v28->pose[v29];
    v32 = 2i64;
    do
    {
      *(__m256i *)v31 = *(__m256i *)&v30->eType;
      *(__m256i *)(v31 + 32) = *(__m256i *)&v30->actualOrigin.y;
      *(__m256i *)(v31 + 64) = *(__m256i *)&v30->origin.origin.secureOrigin.xyz.z;
      *(_OWORD *)(v31 + 96) = *(_OWORD *)&v30->prevOrigin.Get_prevOrigin;
      v31 += 128i64;
      *(vec4_t *)(v31 - 16) = *(vec4_t *)((char *)&v30->prevOrigin.prevOrigin + 8);
      v30 = (cpose_t *)((char *)v30 + 128);
      --v32;
    }
    while ( v32 );
    *(__m256i *)v31 = *(__m256i *)&v30->eType;
    ++v9;
  }
  while ( v9 < 0x10 );
}

/*
==============
Mayhem_AddClientNotify
==============
*/
void Mayhem_AddClientNotify(scr_string_t notetrackName, unsigned int subObjIndex, float frac, unsigned __int16 notifyType)
{
  int v7; 
  int v8; 
  __int64 v9; 
  char *v10; 
  __m256i *v11; 
  MayhemNotify *v12; 

  if ( s_notifyListSize >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 876, ASSERT_TYPE_ASSERT, "(s_notifyListSize < 128)", (const char *)&queryFormat, "s_notifyListSize < MAX_NOTIFYLIST") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 877, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v7 = s_notifyListSize;
  v8 = s_notifyListSize - 1;
  v9 = s_notifyListSize - 1;
  if ( s_notifyListSize - 1 >= 0 )
  {
    if ( v8 < 3i64 )
    {
LABEL_15:
      if ( v9 >= 0 )
      {
        v11 = (__m256i *)&s_notifyList[v9 + 1];
        do
        {
          if ( frac >= *(float *)&v11[-1].m256i_i32[3] )
            break;
          *v11 = v11[-1];
          --v11;
          --v8;
          --v9;
        }
        while ( v9 >= 0 );
      }
    }
    else
    {
      v10 = (char *)&s_notifyList[v8 - 1] - 20;
      while ( frac < *((float *)v10 + 16) )
      {
        *(__m256i *)(v10 + 84) = *(__m256i *)(v10 + 52);
        if ( frac >= *((float *)v10 + 8) )
        {
          --v8;
          break;
        }
        *(__m256i *)(v10 + 52) = *(__m256i *)(v10 + 20);
        if ( frac >= *(float *)v10 )
        {
          v8 -= 2;
          break;
        }
        *(__m256i *)(v10 + 20) = *(__m256i *)(v10 - 12);
        if ( frac >= *((float *)v10 - 8) )
        {
          v8 -= 3;
          break;
        }
        *(__m256i *)(v10 - 12) = *(__m256i *)(v10 - 44);
        v10 -= 128;
        v8 -= 4;
        v9 -= 4i64;
        if ( v9 < 3 )
          goto LABEL_15;
      }
    }
  }
  v12 = &s_notifyList[v8 + 1];
  s_notifyListSize = v7 + 1;
  v12->timeFrac = frac;
  v12->noteName = notetrackName;
  v12->notifyType = notifyType;
  v12->notifyName = 0;
  v12->subObjIdx = subObjIndex;
}

/*
==============
Mayhem_AddDobj
==============
*/
void Mayhem_AddDobj(LocalClientNum_t localClientNum, unsigned int mayhemEntId, DObj *dobj, cpose_t *pose, int dobjHandle, bool isActive)
{
  __int64 v8; 
  signed int v10; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  double v15; 
  unsigned int v16; 
  unsigned int v17; 
  MayhemInstance *Instance; 
  MayhemInstance *v19; 
  float v20; 
  unsigned int v21; 
  const dvar_t *v22; 
  DObjAnimMat *mat; 
  __m128 v24; 
  float v25; 
  const dvar_t *v26; 
  const char *v27; 
  const char *v28; 
  bdRandom v29; 
  vec3_t origin; 
  vec3_t outOrigin; 
  vec3_t lightingOrigin; 
  __int64 v33; 
  vec3_t xyz; 
  vec4_t color; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  v33 = -2i64;
  v8 = mayhemEntId;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1026, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v10 = s_curFreeMayhemClientEntNum++;
  if ( v10 >= 2560 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 310, ASSERT_TYPE_ASSERT, "(id < ( ( 2048 ) + ( 96 + ( 32 ) + CLIENT_MODEL_MAX_COUNT + 0 ) ))", (const char *)&queryFormat, "id < MAX_GFXENTITIES") )
    __debugbreak();
  CG_GetPoseOrigin(pose, &outOrigin);
  v11 = pose->angles.v[0];
  v12 = pose->angles.v[1];
  v13 = pose->angles.v[2];
  v14 = *(_OWORD *)&pose->skinCacheEntry.frameCount;
  v15 = *(double *)&pose->skinCacheEntry.subdivCacheOffset;
  memset_0(pose, 0, sizeof(cpose_t));
  bdRandom::bdRandom(&v29);
  v16 = bdRandom::nextUInt(&v29) % 0x22;
  bdRandom::~bdRandom(&v29);
  bdRandom::bdRandom(&v29);
  v17 = bdRandom::nextUInt(&v29) % 0x22;
  bdRandom::~bdRandom(&v29);
  CG_ResetPoseZero(pose, v17, v16);
  pose->isMayhem = isActive;
  if ( (unsigned int)v8 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v8, "unsigned", v8) )
    __debugbreak();
  pose->mayhemInstanceId = v8;
  CG_SetPrevPoseOrigin(pose, &outOrigin);
  pose->prevAngles.v[0] = v11;
  pose->prevAngles.v[1] = v12;
  pose->prevAngles.v[2] = v13;
  *(_OWORD *)&pose->skinCacheEntry.frameCount = v14;
  *(double *)&pose->skinCacheEntry.subdivCacheOffset = v15;
  Instance = Mayhem_GetInstance(v8);
  v19 = Instance;
  if ( Instance->linkTo )
  {
    Mayhem_UpdateFromLink(localClientNum, Instance, pose);
  }
  else
  {
    CG_SetPoseOrigin(pose, &Instance->initialPose.origin);
    UnitQuatToAngles(&v19->initialPose.quat, &pose->angles);
  }
  CG_GetPoseOrigin(pose, &lightingOrigin);
  memset(&entityMutableShaderData, 0, sizeof(entityMutableShaderData));
  entityMutableShaderData.hudOutlineInfo.mapEntLookup = v19->mapEntLookup;
  v20 = 0.0;
  R_AddDObjToScene(dobj, pose, v10, isActive << 12, &entityMutableShaderData, &lightingOrigin, 0.0);
  CG_GetPoseOrigin(pose, &origin);
  v21 = R_LinkDObjEntity(localClientNum, v10, &origin, dobj->radius);
  if ( (dobj->flags & 4) != 0 )
    R_EntityHasSkinningAnimation(localClientNum, v10);
  CG_Entity_CheckLightCount(v10, dobj, v21, &origin, dobj->radius);
  v22 = DVARBOOL_mayhem_entInfo;
  if ( !DVARBOOL_mayhem_entInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_entInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    CG_GetPoseOrigin(pose, &origin);
    mat = dobj->skel.mat;
    if ( mat )
    {
      v24 = (__m128)*(unsigned __int64 *)mat->trans.v;
      xyz.v[2] = mat->trans.v[2];
      LODWORD(v20) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
      *(double *)xyz.v = *(double *)v24.m128_u64;
      v25 = xyz.v[2];
    }
    else
    {
      v24.m128_i32[0] = 0;
      v25 = 0.0;
    }
    xyz.v[0] = v24.m128_f32[0] + origin.v[0];
    xyz.v[1] = v20 + origin.v[1];
    xyz.v[2] = v25 + origin.v[2];
    color = (vec4_t)_xmm;
    v26 = DVARINT_mayhem_debugEnt;
    if ( !DVARINT_mayhem_debugEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEnt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = (char *)&queryFormat.fmt + 3;
    if ( v26->current.integer == (_DWORD)v8 )
      v27 = "*";
    v28 = j_va("%sMayhem %d GfxEnt %d", v27, (unsigned int)v8, (unsigned int)dobjHandle);
    CL_AddDebugString(&xyz, &color, 1.0, v28, 0, 1);
  }
  memset(&origin, 0, sizeof(origin));
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(&lightingOrigin, 0, sizeof(lightingOrigin));
}

/*
==============
Mayhem_ClearSoundEntries
==============
*/
void Mayhem_ClearSoundEntries(unsigned int mayhemEntId)
{
  MayhemSoundInstance *v1; 
  unsigned int i; 

  v1 = &s_mayhemSounds[1];
  for ( i = 0; i < 0x10; i += 16 )
  {
    if ( v1[-1].mayhemEntId == mayhemEntId )
      v1[-1].sndId = 0;
    if ( v1->mayhemEntId == mayhemEntId )
      v1->sndId = 0;
    if ( v1[1].mayhemEntId == mayhemEntId )
      v1[1].sndId = 0;
    if ( v1[2].mayhemEntId == mayhemEntId )
      v1[2].sndId = 0;
    if ( v1[3].mayhemEntId == mayhemEntId )
      v1[3].sndId = 0;
    if ( v1[4].mayhemEntId == mayhemEntId )
      v1[4].sndId = 0;
    if ( v1[5].mayhemEntId == mayhemEntId )
      v1[5].sndId = 0;
    if ( v1[6].mayhemEntId == mayhemEntId )
      v1[6].sndId = 0;
    if ( v1[7].mayhemEntId == mayhemEntId )
      v1[7].sndId = 0;
    if ( v1[8].mayhemEntId == mayhemEntId )
      v1[8].sndId = 0;
    if ( v1[9].mayhemEntId == mayhemEntId )
      v1[9].sndId = 0;
    if ( v1[10].mayhemEntId == mayhemEntId )
      v1[10].sndId = 0;
    if ( v1[11].mayhemEntId == mayhemEntId )
      v1[11].sndId = 0;
    if ( v1[12].mayhemEntId == mayhemEntId )
      v1[12].sndId = 0;
    if ( v1[13].mayhemEntId == mayhemEntId )
      v1[13].sndId = 0;
    if ( v1[14].mayhemEntId == mayhemEntId )
      v1[14].sndId = 0;
    v1 += 16;
  }
}

/*
==============
Mayhem_DebugName
==============
*/
const char *Mayhem_DebugName(LocalClientNum_t localClientNum, int dobjHandle)
{
  MayhemInstance *v2; 
  unsigned int v4; 
  int *i; 
  unsigned int v6; 
  unsigned int v7; 
  int *v8; 
  unsigned int numMayhemScenes; 
  const MayhemInstance *v11; 
  MayhemData *mayhem; 

  v2 = NULL;
  v4 = 0;
  if ( !s_numMayhemObjs )
    return "mayhem not found";
  for ( i = s_mayhemObjs[0].dobjHandle; ; i += 1296 )
  {
    v6 = *(i - 1202);
    v7 = 0;
    if ( v6 )
      break;
LABEL_7:
    if ( ++v4 >= s_numMayhemObjs )
      return "mayhem not found";
  }
  v8 = i;
  while ( *v8 != dobjHandle )
  {
    ++v7;
    ++v8;
    if ( v7 >= v6 )
      goto LABEL_7;
  }
  if ( !cm.mapEnts )
  {
    numMayhemScenes = 0;
LABEL_13:
    v11 = &s_spawnedMayhems[v4 - numMayhemScenes];
    if ( Mayhem_IsSpawnedInstanceActive(v11) )
      v2 = (MayhemInstance *)v11;
    goto LABEL_15;
  }
  numMayhemScenes = cm.mapEnts->numMayhemScenes;
  if ( v4 >= numMayhemScenes )
    goto LABEL_13;
  v2 = &cm.mapEnts->mayhemScenes[v4];
LABEL_15:
  mayhem = v2->mayhem;
  if ( mayhem )
    return mayhem->name;
  else
    return "nullptr";
}

/*
==============
Mayhem_DestroyObj
==============
*/
void Mayhem_DestroyObj(MayhemObj *mayhemObj)
{
  unsigned int i; 
  __int64 v3; 
  int preDobjHandle; 
  int postDobjHandle; 

  for ( i = 0; i < mayhemObj->numSubObjects; mayhemObj->dobj[v3] = NULL )
  {
    v3 = i;
    DObjClearCustomDataChannelRecord(mayhemObj->dobj[i]);
    Com_SafeClientDObjFree(mayhemObj->dobjHandle[i], LOCAL_CLIENT_0);
    mayhemObj->dobjHandle[i++] = 0;
  }
  preDobjHandle = mayhemObj->preDobjHandle;
  mayhemObj->numSubObjects = 0;
  if ( preDobjHandle )
  {
    Com_SafeClientDObjFree(preDobjHandle, LOCAL_CLIENT_0);
    mayhemObj->preDobjHandle = 0;
    mayhemObj->preDobj = NULL;
  }
  postDobjHandle = mayhemObj->postDobjHandle;
  if ( postDobjHandle )
  {
    Com_SafeClientDObjFree(postDobjHandle, LOCAL_CLIENT_0);
    mayhemObj->postDobjHandle = 0;
    mayhemObj->postDobj = NULL;
  }
}

/*
==============
Mayhem_DoesInstanceExist
==============
*/
_BOOL8 Mayhem_DoesInstanceExist(scr_string_t mayhemName)
{
  return Mayhem_GetInstanceByName(mayhemName) != NULL;
}

/*
==============
Mayhem_DumpEntInfo
==============
*/
void Mayhem_DumpEntInfo(void)
{
  __int64 i; 
  unsigned int numMayhemScenes; 
  MayhemInstance *v2; 
  const MayhemInstance *v3; 
  float curTime; 
  MayhemData *mayhem; 
  BOOL v6; 
  BOOL v7; 
  int v8; 
  int v9; 
  char v10; 
  unsigned int numSubObjects; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  Com_Printf(19, "===BEGIN MAYHEM ENTS===\n");
  for ( i = 0i64; (unsigned int)i < s_numMayhemObjs; i = (unsigned int)(i + 1) )
  {
    if ( cm.mapEnts )
    {
      numMayhemScenes = cm.mapEnts->numMayhemScenes;
      if ( (unsigned int)i < numMayhemScenes )
      {
        v2 = &cm.mapEnts->mayhemScenes[i];
        goto LABEL_8;
      }
    }
    else
    {
      numMayhemScenes = 0;
    }
    v3 = &s_spawnedMayhems[(unsigned int)i - numMayhemScenes];
    v2 = NULL;
    if ( Mayhem_IsSpawnedInstanceActive(v3) )
      v2 = (MayhemInstance *)v3;
LABEL_8:
    curTime = v2->curTime;
    mayhem = v2->mayhem;
    v6 = curTime == 0.0 && mayhem->preModel;
    v7 = curTime >= mayhem->length && mayhem->postModel;
    v8 = (v2->flags >> 1) & 1;
    if ( (v2->flags & 1) != 0 || !mayhem->numObjects )
    {
      v9 = 1;
LABEL_23:
      v10 = 0;
      goto LABEL_24;
    }
    v9 = 0;
    if ( !v8 || v6 || v7 )
      goto LABEL_23;
    v10 = 1;
LABEL_24:
    numSubObjects = s_mayhemObjs[(unsigned int)i].numSubObjects;
    v12 = SL_ConvertToString(v2->scriptName);
    LODWORD(v18) = numSubObjects;
    v13 = (char *)&queryFormat.fmt + 3;
    LODWORD(v17) = v7;
    LODWORD(v16) = v6;
    LODWORD(v15) = v9;
    if ( v10 )
      v13 = " - CONSUMING PERF";
    LODWORD(v14) = v8;
    Com_Printf(19, "Mayhem[%d]%s: Asset=%s Name=%s IsActive=%d IsHidden=%d IsPreModel=%d IsPostModel=%d, has %d sub-objects\n", (unsigned int)i, v13, v2->mayhem->name, v12, v14, v15, v16, v17, v18);
  }
  Com_Printf(19, "===END MAYHEM ENTS===\n");
}

/*
==============
Mayhem_FlagForTransfer
==============
*/
void Mayhem_FlagForTransfer(scr_string_t mayhemName, bool doEnable)
{
  __int64 v2; 
  scr_string_t *p_scriptName; 
  MayhemInstance *v4; 
  const char *v5; 
  unsigned int flags; 

  v2 = 0i64;
  p_scriptName = &s_spawnedMayhems[0].scriptName;
  while ( *p_scriptName != mayhemName )
  {
    v2 = (unsigned int)(v2 + 1);
    p_scriptName += 20;
    if ( (unsigned int)v2 >= 0x10 )
      goto LABEL_6;
  }
  v4 = &s_spawnedMayhems[v2];
  if ( !v4 )
  {
LABEL_6:
    v5 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s) to add ref.\n", v5);
    return;
  }
  flags = v4->flags;
  if ( doEnable )
  {
    if ( (flags & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1741, ASSERT_TYPE_ASSERT, "(!(mayhemInst->flags & MAYHEM_INSTANCE_FLAG_TRANSFER))", (const char *)&queryFormat, "!(mayhemInst->flags & MAYHEM_INSTANCE_FLAG_TRANSFER)") )
      __debugbreak();
    v4->flags |= 8u;
  }
  else
  {
    v4->flags = flags & 0xFFFFFFF7;
  }
}

/*
==============
Mayhem_GetAnimInfo
==============
*/
char Mayhem_GetAnimInfo(int mayhemInstanceId, const DObj *obj, const XModel *model, MayhemAnimInfo *outAnimInfo)
{
  __int64 v4; 
  MayhemInstance *Instance; 
  MayhemData *mayhem; 
  unsigned int DObjBasePartOffset; 
  unsigned int v11; 
  MayhemObject *objects; 

  v4 = mayhemInstanceId;
  Instance = Mayhem_GetInstance(mayhemInstanceId);
  mayhem = Instance->mayhem;
  DObjBasePartOffset = Mayhem_GetDObjBasePartOffset(obj, &s_mayhemObjs[v4]);
  v11 = 0;
  if ( !obj->numModels )
    return 0;
  objects = mayhem->objects;
  while ( mayhem->models[objects[v11 + DObjBasePartOffset].modelIndex].model != model )
  {
    if ( ++v11 >= obj->numModels )
      return 0;
  }
  outAnimInfo->anim = &mayhem->anims[objects[v11 + DObjBasePartOffset].animIndex];
  outAnimInfo->curTime = Instance->curTime;
  outAnimInfo->boneOffset = Mayhem_GetBoneOffset(obj, model, v11);
  return 1;
}

/*
==============
Mayhem_GetAnimationFrameRate
==============
*/
float Mayhem_GetAnimationFrameRate(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 
  MayhemData *mayhem; 
  const char *v6; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    mayhem = InstanceByName->mayhem;
    if ( mayhem->numAnims )
    {
      return mayhem->anims->framerate;
    }
    else
    {
      v6 = SL_ConvertToString(v2);
      Com_PrintError(19, "Mayhem Entity (name = %s) doesn't have any animations!\n", v6);
      return 0.0;
    }
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v3);
    return 0.0;
  }
}

/*
==============
Mayhem_GetAnimationNumFrames
==============
*/
__int64 Mayhem_GetAnimationNumFrames(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 
  MayhemData *mayhem; 
  const char *v6; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    mayhem = InstanceByName->mayhem;
    if ( mayhem->numAnims )
    {
      return mayhem->anims->numFrames;
    }
    else
    {
      v6 = SL_ConvertToString(v2);
      Com_PrintError(19, "Mayhem Entity (name = %s) doesn't have any animations!\n", v6);
      return 0i64;
    }
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v3);
    return 0i64;
  }
}

/*
==============
Mayhem_GetAnimationTime
==============
*/
float Mayhem_GetAnimationTime(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  MayhemInstance *v3; 
  const char *v4; 
  MayhemData *mayhem; 
  MayhemAnim *anims; 
  float v8; 
  double v9; 
  MayhemAnim *v10; 
  float numFrames; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  v3 = InstanceByName;
  if ( InstanceByName )
  {
    mayhem = InstanceByName->mayhem;
    anims = mayhem->anims;
    v8 = v3->curTime * anims->frequency;
    if ( anims->isLooping )
    {
      *(float *)&v9 = fmodf_0(v8, 1.0);
    }
    else
    {
      v9 = I_fclamp(v8, 0.0, 1.0);
      mayhem = v3->mayhem;
    }
    v10 = mayhem->anims;
    numFrames = (float)v10->numFrames;
    return (float)(numFrames / v10->framerate) * *(float *)&v9;
  }
  else
  {
    v4 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v4);
    return 0.0;
  }
}

/*
==============
Mayhem_GetAnimationTimeNormalized
==============
*/
double Mayhem_GetAnimationTimeNormalized(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  MayhemInstance *v3; 
  const char *v4; 
  double result; 
  MayhemData *mayhem; 
  const char *v7; 
  MayhemAnim *anims; 
  float v9; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  v3 = InstanceByName;
  if ( InstanceByName )
  {
    mayhem = InstanceByName->mayhem;
    if ( mayhem->numAnims )
    {
      anims = mayhem->anims;
      v9 = v3->curTime * anims->frequency;
      HIDWORD(result) = 0;
      if ( anims->isLooping )
        *(float *)&result = fmodf_0(v9, 1.0);
      else
        return I_fclamp(v9, 0.0, 1.0);
    }
    else
    {
      v7 = SL_ConvertToString(mayhemName);
      Com_PrintError(19, "Mayhem Entity (name = %s) doesn't have any animations!\n", v7);
      return 0.0;
    }
  }
  else
  {
    v4 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v4);
    return 0.0;
  }
  return result;
}

/*
==============
Mayhem_GetBoneOffset
==============
*/
unsigned __int16 Mayhem_GetBoneOffset(const DObj *obj, const XModel *curModel, unsigned int subObjectIdx)
{
  scr_string_t *boneNames; 
  signed __int16 v4; 
  unsigned __int16 inoutIndex; 

  boneNames = curModel->boneNames;
  inoutIndex = 254;
  DObjGetBoneIndexFromStartModelClient(obj, *boneNames, subObjectIdx, &inoutIndex);
  v4 = inoutIndex;
  if ( (unsigned __int16)(inoutIndex - 254) <= 1u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1421, ASSERT_TYPE_ASSERT, "(boneOffset != 254 && boneOffset != 255)", (const char *)&queryFormat, "boneOffset != UNDEFINED_BONEINDEX && boneOffset != NO_BONEINDEX") )
      __debugbreak();
    v4 = inoutIndex;
  }
  if ( v4 >= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1422, ASSERT_TYPE_ASSERT, "(XAnimIsClientBoneIndex( boneOffset ))", (const char *)&queryFormat, "XAnimIsClientBoneIndex( boneOffset )") )
      __debugbreak();
    v4 = inoutIndex;
  }
  return v4 & 0x7FFF;
}

/*
==============
Mayhem_GetDObjBasePartOffset
==============
*/
__int64 Mayhem_GetDObjBasePartOffset(const DObj *dobj, const MayhemObj *mayhemObj)
{
  unsigned int numSubObjects; 
  __int64 v3; 
  DObj **v5; 

  numSubObjects = mayhemObj->numSubObjects;
  v3 = 0i64;
  if ( mayhemObj->numSubObjects )
  {
    v5 = mayhemObj->dobj;
    do
    {
      if ( *v5 == dobj )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v5;
    }
    while ( (unsigned int)v3 < numSubObjects );
  }
  if ( (unsigned int)v3 < numSubObjects )
    return mayhemObj->partBaseOffset[v3];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 812, ASSERT_TYPE_ASSERT, "(dobjIdx < mayhemObj->numSubObjects)", (const char *)&queryFormat, "dobjIdx < mayhemObj->numSubObjects") )
    __debugbreak();
  return mayhemObj->partBaseOffset[v3];
}

/*
==============
Mayhem_GetFreeClientDObjHandle
==============
*/
__int64 Mayhem_GetFreeClientDObjHandle()
{
  int *v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 *v21; 
  char v23[2034]; 
  __int64 v24; 
  __int64 v25[8]; 

  memset(v25, 0, sizeof(v25));
  if ( s_numMayhemObjs )
  {
    v0 = &s_mayhemObjs[0].dobjHandle[2];
    v1 = s_numMayhemObjs;
    do
    {
      v2 = *(v0 - 2);
      if ( (int)v2 >= 2050 )
        v23[v2] = 1;
      v3 = *(v0 - 1);
      if ( (int)v3 >= 2050 )
        v23[v3] = 1;
      v4 = *v0;
      if ( (int)v4 >= 2050 )
        v23[v4] = 1;
      v5 = v0[1];
      if ( (int)v5 >= 2050 )
        v23[v5] = 1;
      v6 = v0[2];
      if ( (int)v6 >= 2050 )
        v23[v6] = 1;
      v7 = v0[3];
      if ( (int)v7 >= 2050 )
        v23[v7] = 1;
      v8 = v0[4];
      if ( (int)v8 >= 2050 )
        v23[v8] = 1;
      v9 = v0[5];
      if ( (int)v9 >= 2050 )
        v23[v9] = 1;
      v10 = v0[6];
      if ( (int)v10 >= 2050 )
        v23[v10] = 1;
      v11 = v0[7];
      if ( (int)v11 >= 2050 )
        v23[v11] = 1;
      v12 = v0[8];
      if ( (int)v12 >= 2050 )
        v23[v12] = 1;
      v13 = v0[9];
      if ( (int)v13 >= 2050 )
        v23[v13] = 1;
      v14 = v0[10];
      if ( (int)v14 >= 2050 )
        v23[v14] = 1;
      v15 = v0[11];
      if ( (int)v15 >= 2050 )
        v23[v15] = 1;
      v16 = v0[12];
      if ( (int)v16 >= 2050 )
        v23[v16] = 1;
      v17 = v0[13];
      if ( (int)v17 >= 2050 )
        v23[v17] = 1;
      v18 = v0[90];
      if ( (int)v18 >= 2050 )
        v23[v18] = 1;
      v19 = v0[91];
      if ( (int)v19 >= 2050 )
        v23[v19] = 1;
      v0 += 1296;
      --v1;
    }
    while ( v1 );
  }
  v20 = 0;
  v21 = v25;
  do
  {
    if ( !*(_BYTE *)v21 )
      return v20 + 2050;
    ++v20;
    v21 = (__int64 *)((char *)v21 + 1);
  }
  while ( v20 < 0x40 );
  Mayhem_DumpEntInfo();
  LODWORD(v24) = 64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 294, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MAYHEM: Failed to allocate Mayhem object - too many already active (max=%d). See active list above.", v24) )
    __debugbreak();
  return 2050i64;
}

/*
==============
Mayhem_GetInstance
==============
*/
MayhemInstance *Mayhem_GetInstance(unsigned int entId)
{
  __int64 v1; 
  unsigned int numMayhemScenes; 
  const MayhemInstance *v4; 

  v1 = 0i64;
  if ( cm.mapEnts )
  {
    numMayhemScenes = cm.mapEnts->numMayhemScenes;
    if ( entId < numMayhemScenes )
      return &cm.mapEnts->mayhemScenes[entId];
  }
  else
  {
    numMayhemScenes = 0;
  }
  v4 = &s_spawnedMayhems[entId - numMayhemScenes];
  if ( Mayhem_IsSpawnedInstanceActive(v4) )
    return (MayhemInstance *)v4;
  return (MayhemInstance *)v1;
}

/*
==============
Mayhem_GetInstanceByName
==============
*/
MayhemInstance *Mayhem_GetInstanceByName(scr_string_t entName)
{
  __int64 v1; 
  __int64 v2; 
  unsigned int numMayhemScenes; 
  MayhemInstance *mayhemScenes; 
  scr_string_t *p_scriptName; 
  scr_string_t *i; 

  v1 = 0i64;
  v2 = 0i64;
  numMayhemScenes = cm.mapEnts->numMayhemScenes;
  if ( numMayhemScenes )
  {
    mayhemScenes = cm.mapEnts->mayhemScenes;
    p_scriptName = &mayhemScenes->scriptName;
    while ( *p_scriptName != entName )
    {
      v2 = (unsigned int)(v2 + 1);
      p_scriptName += 20;
      if ( (unsigned int)v2 >= numMayhemScenes )
        goto LABEL_5;
    }
    return &mayhemScenes[v2];
  }
  else
  {
LABEL_5:
    for ( i = &s_spawnedMayhems[0].scriptName; *i != entName; i += 20 )
    {
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= 0x10 )
        return 0i64;
    }
    return &s_spawnedMayhems[v1];
  }
}

/*
==============
Mayhem_GetMapEntityCount
==============
*/
MapEnts *Mayhem_GetMapEntityCount()
{
  MapEnts *result; 

  result = cm.mapEnts;
  if ( cm.mapEnts )
    return (MapEnts *)cm.mapEnts->numMayhemScenes;
  return result;
}

/*
==============
Mayhem_GetNextNotifyIndex
==============
*/
__int64 Mayhem_GetNextNotifyIndex(const MayhemAnim *anim, float time)
{
  XAnimNotifyInfo *notify; 
  XAnimNotifyInfo *v4; 
  float v5; 
  unsigned int v6; 
  float v7; 
  __int64 v8; 

  if ( !anim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 839, ASSERT_TYPE_ASSERT, "(anim)", (const char *)&queryFormat, "anim") )
    __debugbreak();
  if ( time < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 841, ASSERT_TYPE_ASSERT, "( ( !( time < 0.0f ) ) )", "( time ) = %g", time) )
    __debugbreak();
  if ( time > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 842, ASSERT_TYPE_ASSERT, "( ( time <= 1.0f ) )", "( time ) = %g", time) )
    __debugbreak();
  notify = anim->notify;
  v4 = NULL;
  v5 = FLOAT_2_0;
  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 848, ASSERT_TYPE_ASSERT, "(notifyInfo)", (const char *)&queryFormat, "notifyInfo") )
    __debugbreak();
  v6 = 0;
  if ( !anim->notifyCount )
    goto LABEL_34;
  do
  {
    v7 = notify->time;
    if ( v7 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 852, ASSERT_TYPE_ASSERT, "(testTime >= 0)", (const char *)&queryFormat, "testTime >= 0") )
      __debugbreak();
    if ( v7 >= time && v7 < v5 )
    {
      v5 = v7;
      v4 = notify;
    }
    ++v6;
    ++notify;
  }
  while ( v6 < anim->notifyCount );
  if ( !v4 )
  {
LABEL_34:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 864, ASSERT_TYPE_ASSERT, "(bestNotifyInfo)", (const char *)&queryFormat, "bestNotifyInfo") )
      __debugbreak();
  }
  if ( v4 != anim->notify && v4[-1].time >= v4->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 865, ASSERT_TYPE_ASSERT, "(bestNotifyInfo == anim->notify || bestNotifyInfo->time > ( bestNotifyInfo - 1 )->time)", (const char *)&queryFormat, "bestNotifyInfo == anim->notify || bestNotifyInfo->time > ( bestNotifyInfo - 1 )->time") )
    __debugbreak();
  v8 = v4 - anim->notify;
  if ( (unsigned __int64)(v8 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,__int64>(__int64)", "signed", (__int16)v8, "signed", v8) )
    __debugbreak();
  return (unsigned __int16)v8;
}

/*
==============
Mayhem_GetPose
==============
*/
cpose_t *Mayhem_GetPose(LocalClientNum_t localClientNum, int dobjHandle)
{
  __int64 v2; 
  int *i; 
  unsigned int v4; 
  __int64 v5; 
  int *v6; 
  MayhemInstance *Instance; 
  float curTime; 
  MayhemData *mayhem; 

  v2 = 0i64;
  if ( !s_numMayhemObjs )
    return 0i64;
  for ( i = s_mayhemObjs[0].dobjHandle; ; i += 1296 )
  {
    v4 = *(i - 1202);
    v5 = 0i64;
    if ( v4 )
      break;
LABEL_7:
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= s_numMayhemObjs )
      return 0i64;
  }
  v6 = i;
  while ( *v6 != dobjHandle )
  {
    v5 = (unsigned int)(v5 + 1);
    ++v6;
    if ( (unsigned int)v5 >= v4 )
      goto LABEL_7;
  }
  Instance = Mayhem_GetInstance(v2);
  curTime = Instance->curTime;
  if ( curTime == 0.0 && Instance->mayhem->preModel )
    return &s_mayhemObjs[(unsigned int)v2].prePostPose;
  mayhem = Instance->mayhem;
  if ( curTime >= mayhem->length && mayhem->postModel )
    return &s_mayhemObjs[(unsigned int)v2].prePostPose;
  else
    return &s_mayhemObjs[v2].pose[v5];
}

/*
==============
Mayhem_GetSpawnedObject
==============
*/
MayhemObj *Mayhem_GetSpawnedObject(scr_string_t mayhemName)
{
  unsigned int numMayhemScenes; 
  scr_string_t *p_scriptName; 
  unsigned int v3; 
  const char *v4; 

  numMayhemScenes = 0;
  p_scriptName = &s_spawnedMayhems[0].scriptName;
  v3 = 0;
  while ( *p_scriptName != mayhemName )
  {
    ++v3;
    p_scriptName += 20;
    if ( v3 >= 0x10 )
      goto LABEL_6;
  }
  if ( !&s_spawnedMayhems[v3] )
  {
LABEL_6:
    v4 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s).\n", v4);
    return 0i64;
  }
  if ( cm.mapEnts )
    numMayhemScenes = cm.mapEnts->numMayhemScenes;
  return &s_mayhemObjs[numMayhemScenes + v3];
}

/*
==============
Mayhem_HideInstance
==============
*/
void Mayhem_HideInstance(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->flags |= 1u;
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find Mayhem Entity (name = %s) to hide.\n", v3);
  }
}

/*
==============
Mayhem_HidePart
==============
*/
void Mayhem_HidePart(int doHide, unsigned int mayhemEntId, scr_string_t boneName)
{
  __int64 v4; 
  MayhemObj *v6; 
  const DObj *v8; 
  MayhemInstance *v9; 
  const char *v10; 
  MayhemInstance *Instance; 
  int v12; 
  const char *v13; 
  const char *v14; 
  bitarray_base<bitarray<256> > *v15; 
  unsigned int v16; 
  bitarray_base<bitarray<256> > *v17; 
  const char *v18; 
  unsigned __int16 outBoneIndex; 
  int outModelIndex; 

  v4 = 0i64;
  v6 = &s_mayhemObjs[mayhemEntId];
  if ( v6->numSubObjects )
  {
    while ( 1 )
    {
      v8 = v6->dobj[v4];
      outBoneIndex = 254;
      if ( DObjGetBoneAndModelIndexClient(v8, boneName, &outBoneIndex, &outModelIndex) )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v6->numSubObjects )
        goto LABEL_4;
    }
    if ( (outBoneIndex & 0x7FFFu) < 0x100 )
    {
      v15 = (bitarray_base<bitarray<256> > *)v6->dobj[v4];
      if ( doHide )
      {
        bitarray_base<bitarray<256>>::setBit(v15 + 208, outBoneIndex & 0x7FFF);
      }
      else
      {
        v16 = outBoneIndex & 0x7FFF;
        if ( v16 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", outBoneIndex & 0x7FFF, 256) )
          __debugbreak();
        v17 = &v15[4 * ((unsigned __int64)v16 >> 5) + 208];
        *(_DWORD *)v17 &= ~(0x80000000 >> (v16 & 0x1F));
      }
    }
    else
    {
      Instance = Mayhem_GetInstance(mayhemEntId);
      v12 = outBoneIndex;
      if ( Instance )
        v13 = SL_ConvertToString(Instance->scriptName);
      else
        v13 = "<unknown>";
      v14 = SL_ConvertToString(boneName);
      Com_PrintError(19, "Could hide Mayhem bone (%s) on '%s' since its index %d (>=%d).  Please make sure this bone is ordered earlier in the Mayhem Export file.\n", v14, v13, v12, 256);
    }
  }
  else
  {
LABEL_4:
    v9 = Mayhem_GetInstance(mayhemEntId);
    if ( v9 )
      v10 = SL_ConvertToString(v9->scriptName);
    else
      v10 = "<unknown>";
    v18 = SL_ConvertToString(boneName);
    Com_PrintError(19, "Could not find Mayhem bone (%s) to hide on '%s'.\n", v18, v10);
  }
}

/*
==============
Mayhem_Init
==============
*/
void Mayhem_Init(void)
{
  LocalClientNum_t v0; 
  MapEnts *mapEnts; 
  unsigned int v2; 
  __int64 v3; 
  unsigned int numMayhemScenes; 
  MayhemInstance *v5; 
  const MayhemInstance *v6; 
  int IsSpawnedInstanceActive; 
  unsigned int i; 
  unsigned int j; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  bdRandom v14; 
  bdRandom v15; 
  bdRandom v16; 
  bdRandom v17; 

  if ( s_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 565, ASSERT_TYPE_ASSERT, "(!s_isInitialized)", (const char *)&queryFormat, "!s_isInitialized", -2i64) )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 568, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= MAYHEM_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= MAYHEM_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v0 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    mapEnts = cm.mapEnts;
    while ( 1 )
    {
      v2 = mapEnts ? mapEnts->numMayhemScenes : 0;
      v3 = 0i64;
      if ( v2 )
        break;
LABEL_20:
      if ( s_numMayhemObjs != v2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 543, ASSERT_TYPE_ASSERT, "(s_numMayhemObjs == mayhemMapEntCount)", (const char *)&queryFormat, "s_numMayhemObjs == mayhemMapEntCount") )
          __debugbreak();
        mapEnts = cm.mapEnts;
      }
      if ( ++v0 >= SLODWORD(cl_maxLocalClients) )
        goto LABEL_25;
    }
    while ( mapEnts )
    {
      numMayhemScenes = mapEnts->numMayhemScenes;
      if ( (unsigned int)v3 >= numMayhemScenes )
        goto LABEL_17;
      v5 = &mapEnts->mayhemScenes[v3];
LABEL_19:
      Mayhem_InitEntity(v5, 1, v0);
      v3 = (unsigned int)(v3 + 1);
      mapEnts = cm.mapEnts;
      if ( (unsigned int)v3 >= v2 )
        goto LABEL_20;
    }
    numMayhemScenes = 0;
LABEL_17:
    v6 = &s_spawnedMayhems[(unsigned int)v3 - numMayhemScenes];
    IsSpawnedInstanceActive = Mayhem_IsSpawnedInstanceActive(v6);
    v5 = NULL;
    if ( IsSpawnedInstanceActive )
      v5 = (MayhemInstance *)v6;
    goto LABEL_19;
  }
LABEL_25:
  memset_0(s_mayhemSounds, 0, sizeof(s_mayhemSounds));
  Cmd_AddCommandInternal("mayhem_dumpEntInfo", Mayhem_DumpEntInfo, &Mayhem_DumpEntInfo_VAR);
  for ( i = 0; i < 0x40; ++i )
  {
    for ( j = 0; j < 0x10; ++j )
    {
      bdRandom::bdRandom(&v14);
      v10 = bdRandom::nextUInt(&v14) % 0x22;
      bdRandom::~bdRandom(&v14);
      bdRandom::bdRandom(&v15);
      v11 = bdRandom::nextUInt(&v15) % 0x22;
      bdRandom::~bdRandom(&v15);
      CG_ResetPoseZero(&s_mayhemObjs[i].pose[j], v11, v10);
    }
    bdRandom::bdRandom(&v16);
    v12 = bdRandom::nextUInt(&v16) % 0x22;
    bdRandom::~bdRandom(&v16);
    bdRandom::bdRandom(&v17);
    v13 = bdRandom::nextUInt(&v17) % 0x22;
    bdRandom::~bdRandom(&v17);
    CG_ResetPoseZero(&s_mayhemObjs[i].prePostPose, v13, v12);
  }
  s_isInitialized = 1;
}

/*
==============
Mayhem_InitEntities
==============
*/
void Mayhem_InitEntities(LocalClientNum_t localClientNum)
{
  MapEnts *mapEnts; 
  unsigned int numMayhemScenes; 
  __int64 v4; 
  unsigned int v5; 
  MayhemInstance *v6; 
  const MayhemInstance *v7; 
  int IsSpawnedInstanceActive; 

  mapEnts = cm.mapEnts;
  if ( cm.mapEnts )
    numMayhemScenes = cm.mapEnts->numMayhemScenes;
  else
    numMayhemScenes = 0;
  v4 = 0i64;
  if ( numMayhemScenes )
  {
    while ( 1 )
    {
      if ( mapEnts )
      {
        v5 = mapEnts->numMayhemScenes;
        if ( (unsigned int)v4 < v5 )
        {
          v6 = &mapEnts->mayhemScenes[v4];
          goto LABEL_11;
        }
      }
      else
      {
        v5 = 0;
      }
      v7 = &s_spawnedMayhems[(unsigned int)v4 - v5];
      IsSpawnedInstanceActive = Mayhem_IsSpawnedInstanceActive(v7);
      v6 = NULL;
      if ( IsSpawnedInstanceActive )
        v6 = (MayhemInstance *)v7;
LABEL_11:
      Mayhem_InitEntity(v6, 1, localClientNum);
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= numMayhemScenes )
        break;
      mapEnts = cm.mapEnts;
    }
  }
  if ( s_numMayhemObjs != numMayhemScenes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 543, ASSERT_TYPE_ASSERT, "(s_numMayhemObjs == mayhemMapEntCount)", (const char *)&queryFormat, "s_numMayhemObjs == mayhemMapEntCount") )
    __debugbreak();
}

/*
==============
Mayhem_InitEntity
==============
*/
void Mayhem_InitEntity(MayhemInstance *mayhemInst, int resetState, LocalClientNum_t localClientNum)
{
  unsigned int v5; 

  if ( resetState )
  {
    if ( !mayhemInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 140, ASSERT_TYPE_ASSERT, "(mayhem)", (const char *)&queryFormat, "mayhem") )
      __debugbreak();
    *(_QWORD *)&mayhemInst->curTime = 0i64;
    mayhemInst->flags = mayhemInst->initialFlags;
  }
  v5 = s_numMayhemObjs;
  if ( s_numMayhemObjs >= 0x40 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 320, ASSERT_TYPE_ASSERT, "(s_numMayhemObjs < ( sizeof( *array_counter( s_mayhemObjs ) ) + 0 ))", (const char *)&queryFormat, "s_numMayhemObjs < ARRAY_COUNT( s_mayhemObjs )") )
      __debugbreak();
    v5 = s_numMayhemObjs;
  }
  s_numMayhemObjs = v5 + 1;
  Mayhem_RefreshEntity(mayhemInst, &s_mayhemObjs[v5], localClientNum);
}

/*
==============
Mayhem_IsHidden
==============
*/
bool Mayhem_IsHidden(LocalClientNum_t localClientNum, int dobjHandle)
{
  unsigned int v2; 
  int *i; 
  unsigned int v5; 
  unsigned int v6; 
  int *v7; 
  MayhemInstance *Instance; 

  v2 = 0;
  if ( !s_numMayhemObjs )
    return 0;
  for ( i = s_mayhemObjs[0].dobjHandle; ; i += 1296 )
  {
    v5 = *(i - 1202);
    v6 = 0;
    if ( v5 )
      break;
LABEL_7:
    if ( ++v2 >= s_numMayhemObjs )
      return 0;
  }
  v7 = i;
  while ( *v7 != dobjHandle )
  {
    ++v6;
    ++v7;
    if ( v6 >= v5 )
      goto LABEL_7;
  }
  Instance = Mayhem_GetInstance(v2);
  return (Instance->flags & 1) != 0 || !Instance->mayhem->numObjects;
}

/*
==============
Mayhem_IsInitialized
==============
*/
__int64 Mayhem_IsInitialized()
{
  return (unsigned int)s_isInitialized;
}

/*
==============
Mayhem_IsMayhem
==============
*/
bool Mayhem_IsMayhem(int dobjHandle)
{
  return (unsigned int)(dobjHandle - 2050) <= 0x3F;
}

/*
==============
Mayhem_IsSpawnedInstanceActive
==============
*/
_BOOL8 Mayhem_IsSpawnedInstanceActive(const MayhemInstance *mayhem)
{
  if ( (s_spawnedMayhems > mayhem || mayhem > &s_spawnedMayhems[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 110, ASSERT_TYPE_ASSERT, "(&s_spawnedMayhems[0]) <= (mayhem) && (mayhem) <= (&s_spawnedMayhems[( sizeof( *array_counter( s_spawnedMayhems ) ) + 0 ) - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "mayhem not in [&s_spawnedMayhems[0], &s_spawnedMayhems[ARRAY_COUNT( s_spawnedMayhems ) - 1]]", mayhem, s_spawnedMayhems, &s_spawnedMayhems[15]) )
    __debugbreak();
  return mayhem->scriptName != 0;
}

/*
==============
Mayhem_KillInstance
==============
*/
void Mayhem_KillInstance(scr_string_t mayhemName)
{
  scr_string_t *p_scriptName; 
  __int64 v2; 
  MayhemInstance *v3; 
  const char *v4; 
  unsigned int flags; 
  unsigned int numMayhemScenes; 
  unsigned int v7; 
  unsigned int v8; 
  const MayhemInstance *v9; 
  const MayhemInstance *v10; 
  __int64 v11; 

  p_scriptName = &s_spawnedMayhems[0].scriptName;
  v2 = 0i64;
  while ( *p_scriptName != mayhemName )
  {
    v2 = (unsigned int)(v2 + 1);
    p_scriptName += 20;
    if ( (unsigned int)v2 >= 0x10 )
      goto LABEL_6;
  }
  v3 = &s_spawnedMayhems[v2];
  if ( !v3 )
  {
LABEL_6:
    v4 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s) to kill.\n", v4);
    return;
  }
  flags = v3->flags;
  if ( (flags & 8) == 0 )
  {
    v3->flags = flags & 0xFFFFFFF7;
    if ( cm.mapEnts )
      numMayhemScenes = cm.mapEnts->numMayhemScenes;
    else
      numMayhemScenes = 0;
    v7 = numMayhemScenes + v2;
    Mayhem_DestroyObj(&s_mayhemObjs[numMayhemScenes + (unsigned int)v2]);
    Mayhem_ClearSoundEntries(v7);
    if ( (s_spawnedMayhems > v3 || v3 > &s_spawnedMayhems[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 110, ASSERT_TYPE_ASSERT, "(&s_spawnedMayhems[0]) <= (mayhem) && (mayhem) <= (&s_spawnedMayhems[( sizeof( *array_counter( s_spawnedMayhems ) ) + 0 ) - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "mayhem not in [&s_spawnedMayhems[0], &s_spawnedMayhems[ARRAY_COUNT( s_spawnedMayhems ) - 1]]", &s_spawnedMayhems[v2], s_spawnedMayhems, &s_spawnedMayhems[15]) )
      __debugbreak();
    if ( !v3->scriptName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1821, ASSERT_TYPE_ASSERT, "(Mayhem_IsSpawnedInstanceActive( mayhemInst ))", (const char *)&queryFormat, "Mayhem_IsSpawnedInstanceActive( mayhemInst )") )
      __debugbreak();
    if ( cm.mapEnts )
    {
      v8 = cm.mapEnts->numMayhemScenes;
      if ( v7 < v8 )
      {
LABEL_25:
        if ( (s_spawnedMayhems > v3 || v3 > &s_spawnedMayhems[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 110, ASSERT_TYPE_ASSERT, "(&s_spawnedMayhems[0]) <= (mayhem) && (mayhem) <= (&s_spawnedMayhems[( sizeof( *array_counter( s_spawnedMayhems ) ) + 0 ) - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "mayhem not in [&s_spawnedMayhems[0], &s_spawnedMayhems[ARRAY_COUNT( s_spawnedMayhems ) - 1]]", &s_spawnedMayhems[v2], s_spawnedMayhems, &s_spawnedMayhems[15]) )
          __debugbreak();
        if ( v3->scriptName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1823, ASSERT_TYPE_ASSERT, "(!Mayhem_IsSpawnedInstanceActive( mayhemInst ))", (const char *)&queryFormat, "!Mayhem_IsSpawnedInstanceActive( mayhemInst )") )
          __debugbreak();
        if ( (unsigned int)v2 < 0xF )
        {
          if ( 15 - (int)v2 > 0 )
          {
            v11 = (unsigned int)(15 - v2);
            do
            {
              Copy_MayhemObj(&s_mayhemObjs[v7], &s_mayhemObjs[v7 + 1]);
              ++v7;
              --v11;
            }
            while ( v11 );
          }
          memmove_0(&s_spawnedMayhems[v2], &s_spawnedMayhems[(unsigned int)(v2 + 1)], -80i64 * (unsigned int)v2 + 1200);
        }
        --s_numMayhemObjs;
        return;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = &s_spawnedMayhems[v7 - v8];
    v10 = NULL;
    if ( Mayhem_IsSpawnedInstanceActive(v9) )
      v10 = v9;
    SL_RemoveRefToString(v10->scriptName);
    v10->scriptName = 0;
    goto LABEL_25;
  }
}

/*
==============
Mayhem_MyChanges
==============
*/
void Mayhem_MyChanges(void)
{
  float *v0; 
  __int64 v1; 
  char *v2; 
  const char **v3; 
  const char *v4; 
  scr_string_t *v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int numMayhemScenes; 
  const MayhemInstance *v9; 
  const MayhemInstance *v10; 
  __int64 v11; 
  float *p_oldTime; 
  char *v13; 
  scr_string_t v14; 
  __int64 v15; 
  unsigned int v16; 
  MayhemInstance *mayhemScenes; 
  scr_string_t *p_scriptName; 
  __int64 v19; 
  scr_string_t *v20; 
  unsigned int v21; 
  MayhemInstance *v22; 
  MayhemInstance *v23; 
  const char *v24; 
  MayhemInstance *v25; 
  const char *v26; 
  float v27; 
  scr_string_t v28; 
  const char *v29; 
  XAssetHeader v30; 
  float v31; 
  char v32[20]; 
  char v33; 
  char v34; 

  v31 = 0.0;
  memset_0(v32, 0, 0x33Cui64);
  v0 = &s_spawnedMayhems[0].initialPose.origin.v[2];
  v1 = 16i64;
  v2 = &v33;
  do
  {
    if ( *((_DWORD *)v0 + 6) )
    {
      v3 = (const char **)*((_QWORD *)v0 + 1);
      *((float *)v2 - 2) = *(v0 - 2);
      *((float *)v2 - 1) = *(v0 - 1);
      v4 = *v3;
      *(float *)v2 = *v0;
      *((float *)v2 - 6) = *(v0 - 6);
      *((float *)v2 - 5) = *(v0 - 5);
      *((float *)v2 - 4) = *(v0 - 4);
      *((float *)v2 - 3) = *(v0 - 3);
      *((_DWORD *)v2 + 1) = SL_GetString(v4, 0);
      *((float *)v2 + 2) = v0[6];
      *((float *)v2 + 3) = v0[7];
      *((float *)v2 + 4) = v0[8];
      *((float *)v2 + 5) = v0[9];
      *((float *)v2 + 6) = v0[10];
    }
    v2 += 52;
    v0 += 20;
    --v1;
  }
  while ( v1 );
  v5 = (scr_string_t *)&v34;
  v6 = 16i64;
  do
  {
    if ( *v5 )
      Mayhem_KillInstance(*v5);
    v5 += 13;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  if ( s_numMayhemObjs )
  {
    while ( 1 )
    {
      Mayhem_DestroyObj(&s_mayhemObjs[v7]);
      if ( !cm.mapEnts )
        break;
      numMayhemScenes = cm.mapEnts->numMayhemScenes;
      if ( v7 >= numMayhemScenes )
        goto LABEL_14;
LABEL_17:
      if ( ++v7 >= s_numMayhemObjs )
        goto LABEL_18;
    }
    numMayhemScenes = 0;
LABEL_14:
    v9 = &s_spawnedMayhems[v7 - numMayhemScenes];
    v10 = NULL;
    if ( Mayhem_IsSpawnedInstanceActive(v9) )
      v10 = v9;
    SL_RemoveRefToString(v10->scriptName);
    v10->scriptName = 0;
    goto LABEL_17;
  }
LABEL_18:
  s_curFreeMayhemDObjID = 2050;
  s_numMayhemObjs = 0;
  s_isInitialized = 0;
  Mayhem_Init();
  v11 = 16i64;
  p_oldTime = &s_spawnedMayhems[0].oldTime;
  v13 = &v33;
  do
  {
    v14 = *((_DWORD *)v13 + 2);
    if ( v14 )
    {
      v15 = 0i64;
      v16 = cm.mapEnts->numMayhemScenes;
      if ( v16 )
      {
        mayhemScenes = cm.mapEnts->mayhemScenes;
        p_scriptName = &mayhemScenes->scriptName;
        while ( *p_scriptName != v14 )
        {
          v15 = (unsigned int)(v15 + 1);
          p_scriptName += 20;
          if ( (unsigned int)v15 >= v16 )
            goto LABEL_24;
        }
        v23 = &mayhemScenes[v15];
      }
      else
      {
LABEL_24:
        v19 = 0i64;
        v20 = &s_spawnedMayhems[0].scriptName;
        while ( *v20 != v14 )
        {
          v19 = (unsigned int)(v19 + 1);
          v20 += 20;
          if ( (unsigned int)v19 >= 0x10 )
            goto LABEL_27;
        }
        v23 = &s_spawnedMayhems[v19];
      }
      if ( v23 )
      {
        v24 = SL_ConvertToString(v14);
        Com_PrintError(19, "Attempting to spawn a Mayhem entity that already exists (name = %s).\n", v24);
      }
      else
      {
LABEL_27:
        v21 = 0;
        v22 = s_spawnedMayhems;
        while ( 1 )
        {
          if ( (s_spawnedMayhems > v22 || v22 > &s_spawnedMayhems[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 110, ASSERT_TYPE_ASSERT, "(&s_spawnedMayhems[0]) <= (mayhem) && (mayhem) <= (&s_spawnedMayhems[( sizeof( *array_counter( s_spawnedMayhems ) ) + 0 ) - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "mayhem not in [&s_spawnedMayhems[0], &s_spawnedMayhems[ARRAY_COUNT( s_spawnedMayhems ) - 1]]", v22, s_spawnedMayhems, &s_spawnedMayhems[15]) )
            __debugbreak();
          if ( !v22->scriptName )
            break;
          ++v21;
          ++v22;
          if ( v21 >= 0x10 )
            goto LABEL_40;
        }
        v25 = &s_spawnedMayhems[v21];
        if ( !v25 )
        {
LABEL_40:
          v26 = SL_ConvertToString(v14);
          Com_PrintError(19, "Could not find empty slot to spawn Mayhem Entity (name = %s).  Slot count = %zu.\n", v26, 0x10ui64);
          goto LABEL_44;
        }
        SL_AddRefToString(v14);
        v27 = *((float *)v13 - 2);
        v28 = *((_DWORD *)v13 + 1);
        v25->scriptName = v14;
        *(_QWORD *)&v25->curTime = 0i64;
        *(_QWORD *)&v25->initialFlags = 2i64;
        v25->linkTo = NULL;
        v25->initialPose.origin.v[0] = v27;
        v25->initialPose.origin.v[1] = *((float *)v13 - 1);
        v25->initialPose.origin.v[2] = *(float *)v13;
        v25->initialPose.quat.v[0] = *((float *)v13 - 6);
        v25->initialPose.quat.v[1] = *((float *)v13 - 5);
        v25->initialPose.quat.v[2] = *((float *)v13 - 4);
        v25->initialPose.quat.v[3] = *((float *)v13 - 3);
        v29 = SL_ConvertToString(v28);
        v30.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v29, 1).physicsLibrary;
        if ( !v30.physicsLibrary )
          Com_PrintError(19, "Failed to find mayhem asset '%s'\n", v29);
        v25->mayhem = v30.mayhem;
        Mayhem_InitEntity(v25, 1, LOCAL_CLIENT_0);
      }
LABEL_44:
      *(p_oldTime - 1) = *((float *)v13 + 3);
      *p_oldTime = *((float *)v13 + 4);
      p_oldTime[1] = *((float *)v13 + 5);
      p_oldTime[2] = *((float *)v13 + 6);
    }
    v13 += 52;
    p_oldTime += 20;
    --v11;
  }
  while ( v11 );
}

/*
==============
Mayhem_PauseInstance
==============
*/
void Mayhem_PauseInstance(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->flags &= ~2u;
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find Mayhem Entity (name = %s) to pause.\n", v3);
  }
}

/*
==============
Mayhem_PlayInstance
==============
*/
void Mayhem_PlayInstance(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->flags |= 2u;
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find Mayhem Entity (name = %s) to play.\n", v3);
  }
}

/*
==============
Mayhem_ProcessNotetracks
==============
*/
void Mayhem_ProcessNotetracks(unsigned int mayhemEntId, LocalClientNum_t localClientNum)
{
  int v2; 
  __int64 v3; 
  scr_string_t *p_noteName; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  const dvar_t *v15; 
  __int64 subObjIdx; 
  const char *v17; 
  char *fmt; 
  __int64 isViewmodel; 

  v2 = 0;
  v3 = mayhemEntId;
  if ( s_notifyListSize <= 0 )
  {
    s_notifyListSize = 0;
  }
  else
  {
    p_noteName = &s_notifyList[0].noteName;
    do
    {
      v6 = 0x7FFFFFFFi64;
      v7 = "end";
      v8 = SL_ConvertToString(*p_noteName);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v9 = v8 - "end";
      do
      {
        v10 = (unsigned __int8)v7[v9];
        v11 = v6;
        v12 = *(unsigned __int8 *)v7++;
        --v6;
        if ( !v11 )
          break;
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
          {
            v15 = DVARBOOL_mayhem_debugNotetracks;
            subObjIdx = *((unsigned int *)p_noteName + 5);
            if ( !DVARBOOL_mayhem_debugNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugNotetracks") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v15);
            if ( v15->current.enabled )
            {
              v17 = SL_ConvertToString(*p_noteName);
              LODWORD(isViewmodel) = subObjIdx;
              LODWORD(fmt) = v3;
              Com_Printf(14, "Mayhem note at %.2f - \"%s\" for ent %d, subObj %d\n", *((float *)p_noteName + 2), v17, fmt, isViewmodel);
            }
            CG_Utils_ProcessNotetracks(localClientNum, s_mayhemObjs[v3].dobjHandle[subObjIdx], s_mayhemObjs[v3].dobj[subObjIdx], &s_mayhemObjs[v3].pose[subObjIdx], &s_notifyList[v2], 0, 1, v3, subObjIdx, 1);
            break;
          }
        }
      }
      while ( v10 );
      ++v2;
      p_noteName += 8;
    }
    while ( v2 < s_notifyListSize );
    s_notifyListSize = 0;
  }
}

/*
==============
Mayhem_ProcessNotetracksForEnt
==============
*/
void Mayhem_ProcessNotetracksForEnt(const MayhemInstance *mayhemInst, const DObj *obj, unsigned int subObjIdx, const MayhemObj *curObj)
{
  MayhemData *mayhem; 
  const DObj *v6; 
  int DObjBasePartOffset; 
  unsigned int v10; 
  __int64 animIndex; 
  MayhemAnim *anims; 
  bool isLooping; 
  const MayhemAnim *v15; 
  float frequency; 
  float v17; 
  double v18; 
  float v19; 
  float v20; 
  double v21; 
  float v22; 
  __int64 NextNotifyIndex; 
  XAnimNotifyInfo *notify; 
  float time; 
  XAnimNotifyInfo *v26; 
  __int64 v27; 
  XAnimNotifyInfo *v28; 
  float v29; 
  XAnimNotifyInfo *v30; 
  MayhemData *v31; 
  int v32; 

  mayhem = mayhemInst->mayhem;
  v6 = obj;
  v31 = mayhem;
  DObjBasePartOffset = Mayhem_GetDObjBasePartOffset(obj, curObj);
  v10 = 0;
  v32 = DObjBasePartOffset;
  if ( v6->numModels )
  {
    __asm { vxorpd  xmm11, xmm11, xmm11 }
    do
    {
      animIndex = mayhem->objects[v10 + DObjBasePartOffset].animIndex;
      anims = mayhem->anims;
      isLooping = anims[animIndex].isLooping;
      v15 = &anims[animIndex];
      frequency = v15->frequency;
      v17 = frequency * mayhemInst->oldTime;
      if ( isLooping )
      {
        *(float *)&v18 = fmodf_0(v17, 1.0);
      }
      else
      {
        v18 = I_fclamp(v17, 0.0, 1.0);
        isLooping = v15->isLooping;
        frequency = v15->frequency;
      }
      v19 = *(float *)&v18;
      v20 = frequency * mayhemInst->curTime;
      if ( isLooping )
        *(float *)&v21 = fmodf_0(v20, 1.0);
      else
        v21 = I_fclamp(v20, 0.0, 1.0);
      v22 = *(float *)&v21;
      if ( (v19 < 0.0 || v19 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 923, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t0 ) && ( t0 ) <= ( 1.0f )", "t0 not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, *(double *)&_XMM11, DOUBLE_1_0) )
        __debugbreak();
      if ( (*(float *)&v21 < 0.0 || *(float *)&v21 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 924, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t1 ) && ( t1 ) <= ( 1.0f )", "t1 not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v21, *(double *)&_XMM11, DOUBLE_1_0) )
        __debugbreak();
      if ( v19 > *(float *)&v21 )
      {
        if ( !v15->isLooping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 928, ASSERT_TYPE_ASSERT, "(anim->isLooping)", (const char *)&queryFormat, "anim->isLooping") )
          __debugbreak();
        NextNotifyIndex = (unsigned __int16)Mayhem_GetNextNotifyIndex(v15, 0.0);
        notify = v15->notify;
        time = notify[NextNotifyIndex].time;
        v26 = &notify[NextNotifyIndex];
        if ( time == 1.0 || v22 < time )
          goto LABEL_38;
        do
        {
          if ( v19 <= time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 946, ASSERT_TYPE_ASSERT, "(t0 > notifyInfo->time)", (const char *)&queryFormat, "t0 > notifyInfo->time") )
            __debugbreak();
          Mayhem_AddClientNotify(v26->name, subObjIdx, 0.0, 0);
          ++v26;
          LODWORD(NextNotifyIndex) = NextNotifyIndex + 1;
          if ( (unsigned int)NextNotifyIndex >= v15->notifyCount )
            break;
          time = v26->time;
        }
        while ( v22 > time );
        v6 = obj;
        mayhem = v31;
      }
      v27 = (unsigned __int16)Mayhem_GetNextNotifyIndex(v15, v19);
      v28 = v15->notify;
      v29 = v28[v27].time;
      v30 = &v28[v27];
      if ( v29 != 1.0 && v19 <= v29 && v22 >= v29 )
      {
        do
        {
          if ( v19 > v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 969, ASSERT_TYPE_ASSERT, "(t0 <= notifyInfo->time)", (const char *)&queryFormat, "t0 <= notifyInfo->time") )
            __debugbreak();
          Mayhem_AddClientNotify(v30->name, subObjIdx, v19, 0);
          ++v30;
          LODWORD(v27) = v27 + 1;
          if ( (unsigned int)v27 >= v15->notifyCount )
            break;
          v29 = v30->time;
        }
        while ( v22 > v29 );
        v6 = obj;
        mayhem = v31;
      }
LABEL_38:
      ++v10;
      DObjBasePartOffset = v32;
    }
    while ( v10 < v6->numModels );
  }
}

/*
==============
Mayhem_ReadSaveGame
==============
*/
void Mayhem_ReadSaveGame(MemoryFile *memFile)
{
  MapEnts *mapEnts; 
  __int64 i; 
  __int64 v4; 
  float *p_curTime; 
  __int64 v6; 
  const char *CString; 
  const char *v8; 
  const char *v9; 
  XAssetHeader v10; 
  unsigned int j; 
  __int64 v12; 
  unsigned int numMayhemScenes; 
  MayhemInstance *v14; 
  unsigned int v15; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 2023, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &cm.mapEnts->numMayhemScenes);
  mapEnts = cm.mapEnts;
  for ( i = 0i64; (unsigned int)i < cm.mapEnts->numMayhemScenes; i = (unsigned int)(i + 1) )
  {
    v4 = (__int64)&mapEnts->mayhemScenes[i];
    MemFile_ReadData(memFile, 4ui64, (void *)(v4 + 52));
    MemFile_ReadData(memFile, 4ui64, (void *)(v4 + 56));
    MemFile_ReadData(memFile, 4ui64, (void *)(v4 + 64));
    mapEnts = cm.mapEnts;
  }
  p_curTime = &s_spawnedMayhems[0].curTime;
  v6 = 16i64;
  do
  {
    MemFile_ReadData(memFile, 0x1Cui64, p_curTime - 13);
    CString = MemFile_ReadCString(memFile);
    if ( CString )
      LODWORD(CString) = SL_GetString(CString, 0);
    *((_DWORD *)p_curTime - 1) = (_DWORD)CString;
    MemFile_ReadData(memFile, 4ui64, p_curTime);
    MemFile_ReadData(memFile, 4ui64, p_curTime + 1);
    MemFile_ReadData(memFile, 4ui64, p_curTime + 2);
    MemFile_ReadData(memFile, 4ui64, p_curTime + 3);
    v8 = MemFile_ReadCString(memFile);
    v9 = v8;
    if ( v8 )
    {
      v10.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v8, 1).physicsLibrary;
      if ( !v10.physicsLibrary )
        Com_PrintError(19, "Failed to find mayhem asset '%s'\n", v9);
      *(XAssetHeader *)(p_curTime - 5) = v10;
    }
    p_curTime += 20;
    --v6;
  }
  while ( v6 );
  for ( j = 0; j < 0x10; ++j )
  {
    v12 = j + (unsigned int)Mayhem_GetMapEntityCount();
    if ( !cm.mapEnts )
    {
      numMayhemScenes = 0;
LABEL_19:
      v14 = &s_spawnedMayhems[(unsigned int)v12 - numMayhemScenes];
      if ( !Mayhem_IsSpawnedInstanceActive(v14) )
        continue;
      goto LABEL_20;
    }
    numMayhemScenes = cm.mapEnts->numMayhemScenes;
    if ( (unsigned int)v12 >= numMayhemScenes )
      goto LABEL_19;
    v14 = &cm.mapEnts->mayhemScenes[v12];
LABEL_20:
    if ( v14 )
    {
      if ( !v14->scriptName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 2076, ASSERT_TYPE_ASSERT, "(mayhemInst->scriptName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "mayhemInst->scriptName != NULL_SCR_STRING") )
        __debugbreak();
      v15 = s_numMayhemObjs;
      if ( s_numMayhemObjs >= 0x40 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 320, ASSERT_TYPE_ASSERT, "(s_numMayhemObjs < ( sizeof( *array_counter( s_mayhemObjs ) ) + 0 ))", (const char *)&queryFormat, "s_numMayhemObjs < ARRAY_COUNT( s_mayhemObjs )") )
          __debugbreak();
        v15 = s_numMayhemObjs;
      }
      s_numMayhemObjs = v15 + 1;
      Mayhem_RefreshEntity(v14, &s_mayhemObjs[v15], LOCAL_CLIENT_0);
    }
  }
  MemFile_ReadData(memFile, 0x100ui64, s_mayhemSounds);
}

/*
==============
Mayhem_RefreshEntity
==============
*/
void Mayhem_RefreshEntity(MayhemInstance *mayhemInst, MayhemObj *curMayhemObj, LocalClientNum_t localClientNum)
{
  MayhemData *mayhem; 
  __int64 v4; 
  MayhemObj *v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int numObjects; 
  LocalClientNum_t v9; 
  MayhemInstance *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 modelIndex; 
  XModel *model; 
  BOOL IsSkinned; 
  BOOL HasRigidVertListChildren; 
  unsigned int v19; 
  XModel *v20; 
  int FreeClientDObjHandle; 
  DObj *v22; 
  __int64 entnum; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  DObjModel dobjModels[254]; 

  mayhem = mayhemInst->mayhem;
  v4 = 0i64;
  v5 = curMayhemObj;
  v6 = 0;
  v7 = 0;
  numObjects = mayhem->numObjects;
  v9 = localClientNum;
  v10 = mayhemInst;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  if ( numObjects )
  {
    do
    {
      if ( (unsigned int)v4 >= 0x10 )
      {
        LODWORD(v26) = numObjects - v7;
        LODWORD(entnum) = numObjects;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 427, ASSERT_TYPE_ASSERT, "(dobjIdx < ( sizeof( *array_counter( curMayhemObj->dobjHandle ) ) + 0 ))", "%s\n\tFailed to combine %d objects into %zu sub-objects when initializaing Mayhem '%s' (Remaining Mayhem object count = %d).  Please reduce complexity of the source asset.", "dobjIdx < ARRAY_COUNT( curMayhemObj->dobjHandle )", entnum, 0x10ui64, v10->mayhem->name, v26) )
          __debugbreak();
      }
      v11 = 0;
      v12 = 0;
      v13 = 254;
      if ( (int)(mayhem->numObjects - v6) < 254 )
        v13 = mayhem->numObjects - v6;
      v14 = 0i64;
      if ( v7 < v13 + v6 )
      {
        while ( 1 )
        {
          modelIndex = mayhem->objects[v7].modelIndex;
          model = mayhem->models[modelIndex].model;
          v11 += model->numsurfs;
          if ( v11 > 0x80 )
            break;
          if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( model->numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 446, ASSERT_TYPE_ASSERT, "(XModelNumBones( mayhemData->models[subModelIdx].model ) == 0)", (const char *)&queryFormat, "XModelNumBones( mayhemData->models[subModelIdx].model ) == 0") )
            __debugbreak();
          IsSkinned = XModelIsSkinned(mayhem->models[modelIndex].model);
          HasRigidVertListChildren = XModelHasRigidVertListChildren(mayhem->models[modelIndex].model);
          if ( v12 < 0xFE && (HasRigidVertListChildren || IsSkinned) )
            v19 = 4094;
          else
            v19 = 254;
          v20 = mayhem->models[modelIndex].model;
          if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 151, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v12 += v20->numClientBones + v20->numBones;
          if ( v12 > v19 )
            goto LABEL_29;
          DObjInitModel(mayhem->models[modelIndex].model, (scr_string_t)0, 0, 0, NULL, &dobjModels[v14]);
          v7 = v28 + 1;
          v14 = (unsigned int)(v14 + 1);
          v28 = v7;
          if ( v7 >= v13 + v29 )
            goto LABEL_30;
        }
        if ( !(_DWORD)v14 )
        {
          LODWORD(v25) = 128;
          LODWORD(v24) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 441, ASSERT_TYPE_ASSERT, "(dobjModelIdx)", "%s\n\tMayhem model (%s) contains too many surfs (%d>%d) - cannot create DObj", "dobjModelIdx", model->name, v24, v25) )
            __debugbreak();
        }
LABEL_29:
        v7 = v28;
        v13 = v14;
LABEL_30:
        v4 = v27;
      }
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 465, ASSERT_TYPE_ASSERT, "( ( subObjCount ) )", "( mayhemData->name ) = %s", mayhem->name) )
        __debugbreak();
      v5 = curMayhemObj;
      FreeClientDObjHandle = Mayhem_GetFreeClientDObjHandle();
      curMayhemObj->dobjHandle[v4] = FreeClientDObjHandle;
      curMayhemObj->partBaseOffset[v4] = v29;
      v29 += v13;
      if ( v13 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v13, "unsigned", v13) )
        __debugbreak();
      v9 = localClientNum;
      v22 = Com_ClientDObjCreate(dobjModels, v13, NULL, FreeClientDObjHandle, localClientNum, 0, 0x7FFu);
      v6 = v29;
      curMayhemObj->dobj[v4] = v22;
      numObjects = mayhem->numObjects;
      v10 = mayhemInst;
      v4 = ++v27;
    }
    while ( v7 < numObjects );
  }
  if ( mayhem->preModel )
  {
    v5->preDobjHandle = Mayhem_GetFreeClientDObjHandle();
    DObjInitModel(mayhem->preModel, (scr_string_t)0, 0, 0, NULL, dobjModels);
    v5->preDobj = Com_ClientDObjCreate(dobjModels, 1u, NULL, v5->preDobjHandle, v9, 0, 0x7FFu);
  }
  if ( mayhem->postModel )
  {
    v5->postDobjHandle = Mayhem_GetFreeClientDObjHandle();
    DObjInitModel(mayhem->postModel, (scr_string_t)0, 0, 0, NULL, dobjModels);
    v5->postDobj = Com_ClientDObjCreate(dobjModels, 1u, NULL, v5->postDobjHandle, v9, 0, 0x7FFu);
  }
  v5->numSubObjects = v4;
}

/*
==============
Mayhem_ReleaseResources
==============
*/
void Mayhem_ReleaseResources(MayhemData *mayhem)
{
  R_Mayhem_ReleaseAnimResources(mayhem->anims, mayhem->numAnims);
}

/*
==============
Mayhem_SetAnimationTime
==============
*/
void Mayhem_SetAnimationTime(scr_string_t mayhemName, float curTime)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v3; 
  const char *v4; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->curTime = curTime;
    InstanceByName->oldTime = curTime;
  }
  else
  {
    v4 = SL_ConvertToString(v3);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v4);
  }
}

/*
==============
Mayhem_SetDelayedUpdate
==============
*/
void Mayhem_SetDelayedUpdate(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->flags |= 4u;
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find Mayhem Entity (name = %s) to set delayed update.\n", v3);
  }
}

/*
==============
Mayhem_SetSoundEntry
==============
*/
void Mayhem_SetSoundEntry(const unsigned int sndId, const unsigned int mayhemEntId, const unsigned int subObjIdx, const unsigned __int8 boneIdx)
{
  unsigned int v4; 
  MayhemSoundInstance *v5; 

  v4 = 0;
  v5 = &s_mayhemSounds[1];
  do
  {
    if ( !v5[-1].sndId )
    {
      v5[-1].sndId = sndId;
      v5[-1].mayhemEntId = mayhemEntId;
      v5[-1].boneIndex = boneIdx;
      v5[-1].subObjIdx = subObjIdx;
    }
    if ( !v5->sndId )
    {
      v5->sndId = sndId;
      v5->mayhemEntId = mayhemEntId;
      v5->boneIndex = boneIdx;
      v5->subObjIdx = subObjIdx;
    }
    if ( !v5[1].sndId )
    {
      v5[1].sndId = sndId;
      v5[1].mayhemEntId = mayhemEntId;
      v5[1].boneIndex = boneIdx;
      v5[1].subObjIdx = subObjIdx;
    }
    if ( !v5[2].sndId )
    {
      v5[2].sndId = sndId;
      v5[2].mayhemEntId = mayhemEntId;
      v5[2].boneIndex = boneIdx;
      v5[2].subObjIdx = subObjIdx;
    }
    if ( !v5[3].sndId )
    {
      v5[3].sndId = sndId;
      v5[3].mayhemEntId = mayhemEntId;
      v5[3].boneIndex = boneIdx;
      v5[3].subObjIdx = subObjIdx;
    }
    if ( !v5[4].sndId )
    {
      v5[4].sndId = sndId;
      v5[4].mayhemEntId = mayhemEntId;
      v5[4].boneIndex = boneIdx;
      v5[4].subObjIdx = subObjIdx;
    }
    if ( !v5[5].sndId )
    {
      v5[5].sndId = sndId;
      v5[5].mayhemEntId = mayhemEntId;
      v5[5].boneIndex = boneIdx;
      v5[5].subObjIdx = subObjIdx;
    }
    if ( !v5[6].sndId )
    {
      v5[6].sndId = sndId;
      v5[6].mayhemEntId = mayhemEntId;
      v5[6].boneIndex = boneIdx;
      v5[6].subObjIdx = subObjIdx;
    }
    if ( !v5[7].sndId )
    {
      v5[7].sndId = sndId;
      v5[7].mayhemEntId = mayhemEntId;
      v5[7].boneIndex = boneIdx;
      v5[7].subObjIdx = subObjIdx;
    }
    if ( !v5[8].sndId )
    {
      v5[8].sndId = sndId;
      v5[8].mayhemEntId = mayhemEntId;
      v5[8].boneIndex = boneIdx;
      v5[8].subObjIdx = subObjIdx;
    }
    if ( !v5[9].sndId )
    {
      v5[9].sndId = sndId;
      v5[9].mayhemEntId = mayhemEntId;
      v5[9].boneIndex = boneIdx;
      v5[9].subObjIdx = subObjIdx;
    }
    if ( !v5[10].sndId )
    {
      v5[10].sndId = sndId;
      v5[10].mayhemEntId = mayhemEntId;
      v5[10].boneIndex = boneIdx;
      v5[10].subObjIdx = subObjIdx;
    }
    if ( !v5[11].sndId )
    {
      v5[11].sndId = sndId;
      v5[11].mayhemEntId = mayhemEntId;
      v5[11].boneIndex = boneIdx;
      v5[11].subObjIdx = subObjIdx;
    }
    if ( !v5[12].sndId )
    {
      v5[12].sndId = sndId;
      v5[12].mayhemEntId = mayhemEntId;
      v5[12].boneIndex = boneIdx;
      v5[12].subObjIdx = subObjIdx;
    }
    if ( !v5[13].sndId )
    {
      v5[13].sndId = sndId;
      v5[13].mayhemEntId = mayhemEntId;
      v5[13].boneIndex = boneIdx;
      v5[13].subObjIdx = subObjIdx;
    }
    if ( !v5[14].sndId )
    {
      v5[14].sndId = sndId;
      v5[14].mayhemEntId = mayhemEntId;
      v5[14].boneIndex = boneIdx;
      v5[14].subObjIdx = subObjIdx;
    }
    v4 += 16;
    v5 += 16;
  }
  while ( v4 < 0x10 );
}

/*
==============
Mayhem_ShowInstance
==============
*/
void Mayhem_ShowInstance(scr_string_t mayhemName)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v2; 
  const char *v3; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->flags &= ~1u;
  }
  else
  {
    v3 = SL_ConvertToString(v2);
    Com_PrintError(19, "Could not find Mayhem Entity (name = %s) to show.\n", v3);
  }
}

/*
==============
Mayhem_Shutdown
==============
*/
void Mayhem_Shutdown(void)
{
  unsigned int v0; 
  unsigned int numMayhemScenes; 
  const MayhemInstance *v2; 
  const MayhemInstance *v3; 

  v0 = 0;
  if ( s_numMayhemObjs )
  {
    while ( 1 )
    {
      Mayhem_DestroyObj(&s_mayhemObjs[v0]);
      if ( !cm.mapEnts )
        break;
      numMayhemScenes = cm.mapEnts->numMayhemScenes;
      if ( v0 >= numMayhemScenes )
        goto LABEL_6;
LABEL_9:
      if ( ++v0 >= s_numMayhemObjs )
        goto LABEL_10;
    }
    numMayhemScenes = 0;
LABEL_6:
    v2 = &s_spawnedMayhems[v0 - numMayhemScenes];
    v3 = NULL;
    if ( Mayhem_IsSpawnedInstanceActive(v2) )
      v3 = v2;
    SL_RemoveRefToString(v3->scriptName);
    v3->scriptName = 0;
    goto LABEL_9;
  }
LABEL_10:
  s_curFreeMayhemDObjID = 2050;
  s_numMayhemObjs = 0;
  s_isInitialized = 0;
}

/*
==============
Mayhem_SpawnInstance
==============
*/
__int64 Mayhem_SpawnInstance(scr_string_t mayhemName, scr_string_t assetName, const vec3_t *spawnPos, const vec4_t *spawnQuat)
{
  const char *v8; 
  __int64 v10; 
  MayhemInstance *v11; 
  MayhemInstance *v12; 
  const char *v13; 
  const char *v14; 
  XAssetHeader v15; 

  if ( Mayhem_GetInstanceByName(mayhemName) )
  {
    v8 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Attempting to spawn a Mayhem entity that already exists (name = %s).\n", v8);
    return 0i64;
  }
  else
  {
    v10 = 0i64;
    v11 = s_spawnedMayhems;
    while ( 1 )
    {
      if ( (s_spawnedMayhems > v11 || v11 > &s_spawnedMayhems[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 110, ASSERT_TYPE_ASSERT, "(&s_spawnedMayhems[0]) <= (mayhem) && (mayhem) <= (&s_spawnedMayhems[( sizeof( *array_counter( s_spawnedMayhems ) ) + 0 ) - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "mayhem not in [&s_spawnedMayhems[0], &s_spawnedMayhems[ARRAY_COUNT( s_spawnedMayhems ) - 1]]", v11, s_spawnedMayhems, &s_spawnedMayhems[15]) )
        __debugbreak();
      if ( !v11->scriptName )
        break;
      v10 = (unsigned int)(v10 + 1);
      ++v11;
      if ( (unsigned int)v10 >= 0x10 )
        goto LABEL_12;
    }
    v12 = &s_spawnedMayhems[v10];
    if ( !v12 )
    {
LABEL_12:
      v13 = SL_ConvertToString(mayhemName);
      Com_PrintError(19, "Could not find empty slot to spawn Mayhem Entity (name = %s).  Slot count = %zu.\n", v13, 0x10ui64);
      return 0i64;
    }
    SL_AddRefToString(mayhemName);
    v12->scriptName = mayhemName;
    *(_QWORD *)&v12->curTime = 0i64;
    v12->linkTo = NULL;
    *(_QWORD *)&v12->initialFlags = 2i64;
    v12->initialPose.origin.v[0] = spawnPos->v[0];
    v12->initialPose.origin.v[1] = spawnPos->v[1];
    v12->initialPose.origin.v[2] = spawnPos->v[2];
    v12->initialPose.quat.v[0] = spawnQuat->v[0];
    v12->initialPose.quat.v[1] = spawnQuat->v[1];
    v12->initialPose.quat.v[2] = spawnQuat->v[2];
    v12->initialPose.quat.v[3] = spawnQuat->v[3];
    v14 = SL_ConvertToString(assetName);
    v15.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v14, 1).physicsLibrary;
    if ( !v15.physicsLibrary )
      Com_PrintError(19, "Failed to find mayhem asset '%s'\n", v14);
    v12->mayhem = v15.mayhem;
    Mayhem_InitEntity(v12, 1, LOCAL_CLIENT_0);
    return 1i64;
  }
}

/*
==============
Mayhem_TransientsLoaded
==============
*/
void Mayhem_TransientsLoaded(int zoneIdx)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  MapEnts *mapEnts; 
  unsigned int MapEntityCount; 
  MayhemObj *v6; 
  unsigned int numMayhemScenes; 
  MayhemInstance *v8; 
  const MayhemInstance *v9; 
  BOOL IsSpawnedInstanceActive; 

  if ( s_isInitialized )
  {
    if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 671, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= MAYHEM_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= MAYHEM_MAX_NUM_SUPPORTED_CLIENTS") )
      __debugbreak();
    v2 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      while ( 1 )
      {
        v3 = 0i64;
        MapEntityCount = (unsigned int)Mayhem_GetMapEntityCount();
        if ( MapEntityCount )
          break;
LABEL_18:
        if ( ++v2 >= SLODWORD(cl_maxLocalClients) )
          return;
      }
      v6 = s_mayhemObjs;
      while ( mapEnts )
      {
        numMayhemScenes = mapEnts->numMayhemScenes;
        if ( (unsigned int)v3 >= numMayhemScenes )
          goto LABEL_12;
        v8 = &mapEnts->mayhemScenes[v3];
LABEL_14:
        if ( v8->transientIndexStored == zoneIdx && !v6->numSubObjects )
        {
          Mayhem_RefreshEntity(v8, v6, v2);
          mapEnts = cm.mapEnts;
        }
        v3 = (unsigned int)(v3 + 1);
        ++v6;
        if ( (unsigned int)v3 >= MapEntityCount )
          goto LABEL_18;
      }
      numMayhemScenes = 0;
LABEL_12:
      v9 = &s_spawnedMayhems[(unsigned int)v3 - numMayhemScenes];
      IsSpawnedInstanceActive = Mayhem_IsSpawnedInstanceActive(v9);
      mapEnts = cm.mapEnts;
      v8 = NULL;
      if ( IsSpawnedInstanceActive )
        v8 = (MayhemInstance *)v9;
      goto LABEL_14;
    }
  }
}

/*
==============
Mayhem_TransientsUnloading
==============
*/
void Mayhem_TransientsUnloading(int zoneIdx)
{
  int v2; 
  __int64 v3; 
  unsigned int MapEntityCount; 
  MapEnts *mapEnts; 
  unsigned int numMayhemScenes; 
  __int64 v7; 
  const MayhemInstance *v8; 
  BOOL IsSpawnedInstanceActive; 

  if ( s_isInitialized )
  {
    if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 712, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
      __debugbreak();
    v2 = 0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      while ( 1 )
      {
        v3 = 0i64;
        MapEntityCount = (unsigned int)Mayhem_GetMapEntityCount();
        if ( MapEntityCount )
          break;
LABEL_16:
        if ( ++v2 >= SLODWORD(cl_maxLocalClients) )
          return;
      }
      while ( mapEnts )
      {
        numMayhemScenes = mapEnts->numMayhemScenes;
        if ( (unsigned int)v3 >= numMayhemScenes )
          goto LABEL_11;
        v7 = (__int64)&mapEnts->mayhemScenes[v3];
LABEL_13:
        if ( *(unsigned __int16 *)(v7 + 72) == zoneIdx )
        {
          Mayhem_DestroyObj(&s_mayhemObjs[(unsigned int)v3]);
          mapEnts = cm.mapEnts;
        }
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= MapEntityCount )
          goto LABEL_16;
      }
      numMayhemScenes = 0;
LABEL_11:
      v8 = &s_spawnedMayhems[(unsigned int)v3 - numMayhemScenes];
      IsSpawnedInstanceActive = Mayhem_IsSpawnedInstanceActive(v8);
      mapEnts = cm.mapEnts;
      v7 = 0i64;
      if ( IsSpawnedInstanceActive )
        v7 = (__int64)v8;
      goto LABEL_13;
    }
  }
}

/*
==============
Mayhem_Update
==============
*/
void Mayhem_Update(LocalClientNum_t localClientNum, MayhemUpdateType updateType)
{
  __int128 v2; 
  __int128 v3; 
  int v4; 
  float v7; 
  const dvar_t *v8; 
  float value; 
  const dvar_t *v10; 
  unsigned int unsignedInt; 
  const dvar_t *v12; 
  __int128 v13; 
  MayhemInstance *Instance; 
  float curTime; 
  __int128 v16; 
  __int128 curTime_low; 
  unsigned int i; 
  MayhemInstance *v22; 
  unsigned int v23; 
  MayhemSoundInstance *v24; 
  MayhemObj *v25; 
  vec3_t outOrigin; 
  __int128 v27; 
  __int128 v28; 

  v4 = s_curFreeMayhemClientEntNum;
  v28 = v2;
  if ( (updateType & 0xFFFFFFFD) == 0 )
    v4 = 2050;
  s_curFreeMayhemClientEntNum = v4;
  v7 = (float)CG_GetLocalClientGlobals(localClientNum)->frametime * 0.001;
  if ( DVARINT_mayhem_debugEnt->modified )
  {
    Dvar_SetFloat_Internal(DVARFLT_mayhem_debugEntTime, -1.0);
    Dvar_ClearModified(DVARINT_mayhem_debugEnt);
  }
  v8 = DVARFLT_mayhem_debugEntTime;
  if ( !DVARFLT_mayhem_debugEntTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEntTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  if ( value >= 0.0 )
  {
    v10 = DVARINT_mayhem_debugEnt;
    if ( !DVARINT_mayhem_debugEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEnt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    unsignedInt = v10->current.unsignedInt;
    if ( unsignedInt < s_numMayhemObjs )
    {
      v12 = DVARFLT_mayhem_debugEntTimeScale;
      v27 = v3;
      if ( !DVARFLT_mayhem_debugEntTimeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEntTimeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v13 = v12->current.unsignedInt;
      Instance = Mayhem_GetInstance(unsignedInt);
      curTime = Instance->curTime;
      if ( curTime >= value )
      {
        if ( curTime <= value )
          goto LABEL_21;
        curTime_low = LODWORD(Instance->curTime);
        *(float *)&curTime_low = curTime - (float)(*(float *)&v13 * v7);
        _XMM1 = curTime_low;
        __asm { vmaxss  xmm2, xmm1, xmm6 }
      }
      else
      {
        v16 = v13;
        *(float *)&v16 = (float)(*(float *)&v13 * v7) + curTime;
        _XMM1 = v16;
        __asm { vminss  xmm2, xmm1, xmm6 }
      }
      Instance->curTime = *(float *)&_XMM2;
    }
  }
LABEL_21:
  for ( i = 0; i < s_numMayhemObjs; ++i )
  {
    v22 = Mayhem_GetInstance(i);
    if ( updateType == MAYHEM_UPDATE_DELAYED )
    {
      if ( (v22->flags & 4) == 0 )
        continue;
    }
    else if ( updateType )
    {
      if ( updateType != MAYHEM_UPDATE_ALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 219, ASSERT_TYPE_ASSERT, "(updateType == MAYHEM_UPDATE_ALL)", (const char *)&queryFormat, "updateType == MAYHEM_UPDATE_ALL") )
        __debugbreak();
    }
    else if ( (v22->flags & 4) != 0 )
    {
      continue;
    }
    Mayhem_UpdateEntity(i, v7, localClientNum);
    Mayhem_ProcessNotetracks(i, localClientNum);
  }
  if ( (unsigned int)(updateType - 1) <= 1 )
  {
    v23 = 0;
    v24 = s_mayhemSounds;
    do
    {
      if ( v24->sndId )
      {
        v25 = &s_mayhemObjs[v24->mayhemEntId];
        CG_DObjGetWorldBonePos(&v25->pose[v24->subObjIdx], v25->dobj[v24->subObjIdx], v24->boneIndex, &outOrigin);
        if ( !SND_SetWorldPosition(v24->sndId, &outOrigin) )
          v24->sndId = 0;
      }
      ++v23;
      ++v24;
    }
    while ( v23 < 0x10 );
  }
}

/*
==============
Mayhem_UpdateEntity
==============
*/
void Mayhem_UpdateEntity(unsigned int mayhemEntId, float dT, LocalClientNum_t localClientNum)
{
  __int64 v4; 
  __int64 v5; 
  MayhemInstance *Instance; 
  unsigned int flags; 
  MayhemData *mayhem; 
  float curTime; 
  MayhemObj *v10; 
  __int64 v11; 
  int v12; 
  unsigned int numSubObjects; 
  __int64 isActive; 
  __int64 v15; 

  v4 = localClientNum;
  v5 = mayhemEntId;
  Instance = Mayhem_GetInstance(mayhemEntId);
  flags = Instance->flags;
  if ( (flags & 1) == 0 )
  {
    mayhem = Instance->mayhem;
    if ( mayhem->numObjects )
    {
      curTime = Instance->curTime;
      if ( (flags & 2) != 0 )
      {
        Instance->oldTime = curTime;
        curTime = curTime + dT;
        Instance->curTime = curTime;
      }
      v10 = &s_mayhemObjs[v5];
      if ( curTime == 0.0 && mayhem->preModel )
      {
        Mayhem_AddDobj((LocalClientNum_t)v4, v5, v10->preDobj, &v10->prePostPose, v10->preDobjHandle, 0);
      }
      else
      {
        v11 = 0i64;
        if ( curTime < mayhem->length || (v12 = 1, !mayhem->postModel) )
          v12 = 0;
        numSubObjects = v10->numSubObjects;
        if ( v12 )
        {
          if ( numSubObjects )
          {
            do
            {
              if ( v10->pose[v11].isMayhem )
              {
                if ( (unsigned int)v4 >= 2 )
                {
                  LODWORD(v15) = 2;
                  LODWORD(isActive) = v4;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", isActive, v15) )
                    __debugbreak();
                }
                if ( !&g_particleManager[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1109, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
                  __debugbreak();
                ParticleManager::KillAllSystemsOnDObjImmediate(&g_particleManager[v4], v10->dobjHandle[v11], 1);
                Mayhem_ClearSoundEntries(v5);
                v10->pose[v11].isMayhem = 0;
              }
              v11 = (unsigned int)(v11 + 1);
            }
            while ( (unsigned int)v11 < v10->numSubObjects );
          }
          Mayhem_AddDobj((LocalClientNum_t)v4, v5, v10->postDobj, &v10->prePostPose, v10->postDobjHandle, 0);
        }
        else if ( numSubObjects )
        {
          do
          {
            Mayhem_AddDobj((LocalClientNum_t)v4, v5, v10->dobj[v11], &v10->pose[v11], v10->dobjHandle[v11], 1);
            Mayhem_ProcessNotetracksForEnt(Instance, v10->dobj[v11], v11, &s_mayhemObjs[v5]);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < v10->numSubObjects );
        }
      }
    }
  }
}

/*
==============
Mayhem_UpdateFromLink
==============
*/
void Mayhem_UpdateFromLink(LocalClientNum_t localClientNum, const MayhemInstance *mayhemInst, cpose_t *mayhemPose)
{
  __int64 v5; 
  unsigned int anchorIndex; 
  int AnchorEntNum; 
  __int64 v8; 
  CgEntitySystem *v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  __int64 v15; 
  vec3_t outOrigin; 
  __int64 v17; 
  vec4_t quat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in1; 

  v17 = -2i64;
  v5 = localClientNum;
  if ( !mayhemInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 759, ASSERT_TYPE_ASSERT, "(mayhemInst)", (const char *)&queryFormat, "mayhemInst") )
    __debugbreak();
  if ( !mayhemInst->linkTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 760, ASSERT_TYPE_ASSERT, "(mayhemInst->linkTo)", (const char *)&queryFormat, "mayhemInst->linkTo") )
    __debugbreak();
  if ( mayhemInst->linkTo->anchorIndex >= 0x100u )
  {
    LODWORD(v14) = mayhemInst->linkTo->anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( mayhemInst->linkTo->anchorIndex ) < (unsigned)( 256 )", "mayhemInst->linkTo->anchorIndex doesn't index CLIENTENT_MAX_ANCHORS\n\t%i not in [0, %i)", v14, 256) )
      __debugbreak();
  }
  if ( !mayhemPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 762, ASSERT_TYPE_ASSERT, "(mayhemPose)", (const char *)&queryFormat, "mayhemPose") )
    __debugbreak();
  anchorIndex = mayhemInst->linkTo->anchorIndex;
  if ( anchorIndex >= CM_ClientAnchorCount() )
  {
    LODWORD(v15) = CM_ClientAnchorCount();
    LODWORD(v14) = anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 744, ASSERT_TYPE_ASSERT, "(unsigned)( anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  AnchorEntNum = CM_GetAnchorEntNum(anchorIndex);
  v8 = AnchorEntNum;
  if ( (unsigned int)AnchorEntNum > 0x7FF )
  {
    LODWORD(v14) = AnchorEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 748, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 )-1 )", "entIndex not in [0, MAX_GENTITIES-1]\n\t%i not in [%i, %i]", v14, 0i64, 2047) )
      __debugbreak();
  }
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v15) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v15) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v5] )
  {
    LODWORD(v15) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v15) )
      __debugbreak();
  }
  v9 = CgEntitySystem::ms_entitySystemArray[v5];
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v10 = (__int64)&v9->m_entities[v8];
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 648) & 1) != 0 )
    {
      CG_GetPoseOrigin((const cpose_t *)v10, &outOrigin);
      AnglesAndOriginToMatrix43((const vec3_t *)(v10 + 72), &outOrigin, &result);
      AnglesAndOriginToMatrix43(&mayhemInst->linkTo->angleOffset, &mayhemInst->linkTo->originOffset, &in1);
      MatrixMultiply43(&in1, &result, &out);
      v11 = out.m[3].v[0];
      v12 = out.m[3].v[1];
      v13 = out.m[3].v[2];
      Axis43ToQuat(&out, &quat);
      CG_GetPoseOrigin(mayhemPose, &outOrigin);
      outOrigin.v[0] = v11;
      outOrigin.v[1] = v12;
      outOrigin.v[2] = v13;
      UnitQuatToAngles(&quat, &mayhemPose->angles);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
}

/*
==============
Mayhem_UpdatePlacement
==============
*/
void Mayhem_UpdatePlacement(scr_string_t mayhemName, const vec3_t *newPos, const vec4_t *newQuat)
{
  MayhemInstance *InstanceByName; 
  const char *v7; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    InstanceByName->initialPose.origin.v[0] = newPos->v[0];
    InstanceByName->initialPose.origin.v[1] = newPos->v[1];
    InstanceByName->initialPose.origin.v[2] = newPos->v[2];
    InstanceByName->initialPose.quat.v[0] = newQuat->v[0];
    InstanceByName->initialPose.quat.v[1] = newQuat->v[1];
    InstanceByName->initialPose.quat.v[2] = newQuat->v[2];
    InstanceByName->initialPose.quat.v[3] = newQuat->v[3];
  }
  else
  {
    v7 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Could not find Mayhem Entity (name = %s) to update placement.\n", v7);
  }
}

/*
==============
Mayhem_UpdatePose
==============
*/
void Mayhem_UpdatePose(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits, int mayhemInstanceId)
{
  __int64 v5; 
  MayhemInstance *Instance; 
  DObjAnimMat *RotTransArray; 
  MayhemData *mayhem; 
  int DObjBasePartOffset; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  MayhemObject *objects; 
  __int64 v15; 
  __int64 animIndex; 
  const XModel *model; 
  unsigned __int16 BoneOffset; 
  __int64 v19; 
  unsigned int v20; 
  DObjPartBits *p_skel; 
  vec3_t placementPos; 
  vec4_t placementQuat; 

  v5 = mayhemInstanceId;
  if ( DObjNumClientOnlyBones(obj) )
  {
    if ( !pose->isMayhem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1443, ASSERT_TYPE_ASSERT, "(pose->isMayhem)", (const char *)&queryFormat, "pose->isMayhem") )
      __debugbreak();
    Instance = Mayhem_GetInstance(v5);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1445, ASSERT_TYPE_ASSERT, "(mayhemInst)", (const char *)&queryFormat, "mayhemInst") )
      __debugbreak();
    RotTransArray = DObjGetRotTransArray(obj);
    if ( RotTransArray )
    {
      mayhem = Instance->mayhem;
      if ( obj->numModels > mayhem->numObjects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1455, ASSERT_TYPE_ASSERT, "(obj->numModels <= mayhemData->numObjects)", (const char *)&queryFormat, "obj->numModels <= mayhemData->numObjects") )
        __debugbreak();
      placementPos = RotTransArray->trans;
      placementQuat = RotTransArray->quat;
      DObjBasePartOffset = Mayhem_GetDObjBasePartOffset(obj, &s_mayhemObjs[v5]);
      v11 = 0;
      v12 = 0;
      if ( obj->numModels )
      {
        v13 = DObjBasePartOffset;
        do
        {
          objects = mayhem->objects;
          v15 = v12 + v13;
          animIndex = objects[v15].animIndex;
          model = mayhem->models[objects[v15].modelIndex].model;
          if ( obj->models[v12] != model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1473, ASSERT_TYPE_ASSERT, "(obj->models[subObjectIdx] == curModel)", (const char *)&queryFormat, "obj->models[subObjectIdx] == curModel") )
            __debugbreak();
          BoneOffset = Mayhem_GetBoneOffset(obj, model, v12);
          v19 = animIndex;
          v20 = BoneOffset;
          R_Mayhem_ProcessAnim(&mayhem->anims[v19], Instance->curTime, &RotTransArray[BoneOffset], &placementPos, &placementQuat);
          R_Mayhem_RegisterCustomDataChannels(&mayhem->anims[v19], obj, Instance->curTime, v20);
          ++v12;
        }
        while ( v12 < obj->numModels );
        v11 = 0;
      }
      p_skel = &obj->skel.partBits.skel;
      do
      {
        *(_OWORD *)p_skel->array = _xmm_ffffffffffffffffffffffffffffffff;
        p_skel = (DObjPartBits *)((char *)p_skel + 16);
        ++v11;
      }
      while ( v11 < 2 );
    }
  }
}

/*
==============
Mayhem_WriteSaveGame
==============
*/
void Mayhem_WriteSaveGame(MemoryFile *memFile)
{
  char v2; 
  MapEnts *mapEnts; 
  __int64 i; 
  __int64 v5; 
  float *p_curTime; 
  __int64 v7; 
  const char *v8; 
  const char *v9; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1973, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( Sys_IsServerThread() )
  {
    v2 = SvGameGlobals::ms_allocatedType;
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
        __debugbreak();
      v2 = SvGameGlobals::ms_allocatedType;
    }
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    if ( !*(&SvGameGlobals::ms_svGameGlobals[1].m_configstringsCount + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1979, ASSERT_TYPE_ASSERT, "(SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame)", (const char *)&queryFormat, "SvGameGlobalsSP::GetSvGameGlobalsSP()->savingGame") )
      __debugbreak();
  }
  MemFile_WriteData(memFile, 4ui64, &cm.mapEnts->numMayhemScenes);
  mapEnts = cm.mapEnts;
  for ( i = 0i64; (unsigned int)i < cm.mapEnts->numMayhemScenes; i = (unsigned int)(i + 1) )
  {
    v5 = (__int64)&mapEnts->mayhemScenes[i];
    MemFile_WriteData(memFile, 4ui64, (const void *)(v5 + 52));
    MemFile_WriteData(memFile, 4ui64, (const void *)(v5 + 56));
    MemFile_WriteData(memFile, 4ui64, (const void *)(v5 + 64));
    mapEnts = cm.mapEnts;
  }
  p_curTime = &s_spawnedMayhems[0].curTime;
  v7 = 16i64;
  do
  {
    MemFile_WriteData(memFile, 0x1Cui64, p_curTime - 13);
    v8 = SL_ConvertToString((scr_string_t)*((_DWORD *)p_curTime - 1));
    MemFile_WriteCString(memFile, v8);
    MemFile_WriteData(memFile, 4ui64, p_curTime);
    MemFile_WriteData(memFile, 4ui64, p_curTime + 1);
    MemFile_WriteData(memFile, 4ui64, p_curTime + 2);
    MemFile_WriteData(memFile, 4ui64, p_curTime + 3);
    v9 = *(const char **)(p_curTime - 5);
    if ( v9 )
      v9 = *(const char **)v9;
    MemFile_WriteCString(memFile, v9);
    p_curTime += 20;
    --v7;
  }
  while ( v7 );
  MemFile_WriteData(memFile, 0x100ui64, s_mayhemSounds);
}

