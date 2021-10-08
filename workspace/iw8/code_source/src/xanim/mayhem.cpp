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
  __int64 v8; 
  unsigned int v15; 
  unsigned int v16; 
  MayhemObj *v17; 
  void (__fastcall **p_Get_origin)(const vec4_t *, vec3_t *); 
  char *v19; 
  void (__fastcall *v20)(const vec3_t *, vec4_t *); 
  const cpose_t *v21; 
  __int64 v24; 
  __int64 v35; 
  void (__fastcall *v36)(const vec4_t *, vec3_t *); 
  __int64 v37; 
  __int64 v40; 
  __int64 v48; 
  MayhemObj *v56; 
  __int64 v57; 
  __int64 v60; 
  vec3_t outOrigin; 
  MayhemObj *v68; 
  void (__fastcall *functionPointer)(const vec4_t *, vec3_t *); 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  __int64 v72; 
  __int64 v73; 
  char *v74; 
  void *Src; 
  cpose_t *p_prePostPose; 
  __int64 v77; 
  char v78[288]; 
  cpose_t v79[16]; 

  v77 = -2i64;
  Src = (void *)in;
  v68 = out;
  v4 = v79;
  v5 = 16i64;
  do
  {
    cpose_t::cpose_t(v4++);
    --v5;
  }
  while ( v5 );
  p_prePostPose = &out->prePostPose;
  Copy_CPose(&out->prePostPose, &in->prePostPose);
  _RAX = v78;
  _RCX = &out->prePostPose;
  v8 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX = (cpose_t *)((char *)_RCX + 128);
    --v8;
  }
  while ( v8 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rax], ymm0
  }
  v15 = 0;
  v16 = 0;
  v17 = out;
  p_Get_origin = &out->pose[0].origin.Get_origin;
  v72 = (char *)in - (char *)v17 + 48;
  v73 = (char *)in - (char *)v17 + 56;
  v19 = (char *)((char *)in - (char *)v17 - 48);
  v74 = v19;
  do
  {
    v20 = ObfuscateSetFunctionPointer_origin((void (__fastcall *const)(const vec3_t *, vec4_t *))*(p_Get_origin - 1), (const cpose_t *)(p_Get_origin - 6));
    functionPointer = ObfuscateGetFunctionPointer_origin(*p_Get_origin, (const cpose_t *)(p_Get_origin - 6));
    Origin = ObfuscateSetFunctionPointer_prevOrigin((void (__fastcall *const)(const vec3_t *, vec4_t *))p_Get_origin[5], (const cpose_t *)(p_Get_origin - 6));
    FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(p_Get_origin[6], (const cpose_t *)(p_Get_origin - 6));
    v21 = (const cpose_t *)((char *)p_Get_origin + (_QWORD)v19);
    _RCX = p_Get_origin - 6;
    _RDX = (char *)p_Get_origin + (_QWORD)v19;
    v24 = 2i64;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rdx+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [rdx+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [rdx+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
        vmovups xmm0, xmmword ptr [rdx+40h]
        vmovups xmmword ptr [rcx+40h], xmm0
        vmovups xmm1, xmmword ptr [rdx+50h]
        vmovups xmmword ptr [rcx+50h], xmm1
        vmovups xmm0, xmmword ptr [rdx+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 16;
      __asm
      {
        vmovups xmm1, xmmword ptr [rdx+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RDX += 128;
      --v24;
    }
    while ( v24 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rdx+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
    }
    *(p_Get_origin - 1) = NULL;
    *p_Get_origin = NULL;
    p_Get_origin[5] = NULL;
    p_Get_origin[6] = NULL;
    *(p_Get_origin - 1) = (void (__fastcall *)(const vec4_t *, vec3_t *))ObfuscateSetFunctionPointer_origin(v20, (const cpose_t *)(p_Get_origin - 6));
    *p_Get_origin = ObfuscateGetFunctionPointer_origin(functionPointer, (const cpose_t *)(p_Get_origin - 6));
    p_Get_origin[5] = (void (__fastcall *)(const vec4_t *, vec3_t *))ObfuscateSetFunctionPointer_prevOrigin(Origin, (const cpose_t *)(p_Get_origin - 6));
    p_Get_origin[6] = ObfuscateGetFunctionPointer_prevOrigin(FunctionPointer_prevOrigin, (const cpose_t *)(p_Get_origin - 6));
    CG_GetPoseOrigin(v21, &outOrigin);
    CG_SetPoseOrigin((cpose_t *)(p_Get_origin - 6), &outOrigin);
    v35 = v72;
    if ( !*(void (__fastcall **)(const vec4_t *, vec3_t *))((char *)p_Get_origin + v72) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
      __debugbreak();
    v36 = ObfuscateGetFunctionPointer_prevOrigin(*(void (__fastcall **)(const vec4_t *, vec3_t *))((char *)p_Get_origin + v35), v21);
    v36((const vec4_t *)((char *)p_Get_origin + v73), &outOrigin);
    CG_SetPrevPoseOrigin((cpose_t *)(p_Get_origin - 6), &outOrigin);
    memset(&outOrigin, 0, sizeof(outOrigin));
    v37 = (int)v16;
    _RAX = (__int64)&v17->pose[v37];
    _RDI = &v79[v37];
    v40 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rdi+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rdi+40h], ymm0
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rdi+60h], xmm0
      }
      _RDI = (cpose_t *)((char *)_RDI + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rdi-10h], xmm1
      }
      _RAX += 128i64;
      --v40;
    }
    while ( v40 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
    }
    ++v16;
    p_Get_origin += 36;
    v19 = v74;
  }
  while ( v16 < 0x10 );
  memcpy_0(v17, Src, sizeof(MayhemObj));
  _RAX = v78;
  v48 = 2i64;
  _RBX = p_prePostPose;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+60h], xmm0
    }
    _RBX = (cpose_t *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rbx-10h], xmm1
    }
    _RAX += 128;
    --v48;
  }
  while ( v48 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
  }
  v56 = v68;
  do
  {
    v57 = (int)v15;
    _RDX = &v79[v57];
    _RAX = (__int64)&v56->pose[v57];
    v60 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdx]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rdx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rdx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups xmm0, xmmword ptr [rdx+60h]
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX += 128i64;
      __asm
      {
        vmovups xmm1, xmmword ptr [rdx+70h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      _RDX = (cpose_t *)((char *)_RDX + 128);
      --v60;
    }
    while ( v60 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx]
      vmovups ymmword ptr [rax], ymm0
    }
    ++v15;
  }
  while ( v15 < 0x10 );
}

/*
==============
Mayhem_AddClientNotify
==============
*/

void __fastcall Mayhem_AddClientNotify(scr_string_t notetrackName, unsigned int subObjIndex, double frac, unsigned __int16 notifyType)
{
  int v9; 
  int v10; 
  __int64 v11; 
  bool v12; 
  bool v18; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( s_notifyListSize >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 876, ASSERT_TYPE_ASSERT, "(s_notifyListSize < 128)", (const char *)&queryFormat, "s_notifyListSize < MAX_NOTIFYLIST") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 877, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v9 = s_notifyListSize;
  v10 = s_notifyListSize - 1;
  v11 = s_notifyListSize - 1;
  if ( s_notifyListSize - 1 >= 0 )
  {
    if ( v10 < 3i64 )
    {
LABEL_15:
      if ( v11 >= 0 )
      {
        v18 = __CFADD__(&s_notifyList[1], 32 * v11);
        _RAX = &s_notifyList[v11 + 1];
        do
        {
          __asm { vcomiss xmm6, dword ptr [rax-14h] }
          if ( !v18 )
            break;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax-20h]
            vmovups ymmword ptr [rax], ymm0
          }
          --_RAX;
          --v10;
          v18 = v11-- == 0;
        }
        while ( v11 >= 0 );
      }
    }
    else
    {
      v12 = __CFSHL__(v10, 5);
      _RCX = (char *)&s_notifyList[v10 - 1] - 20;
      while ( 1 )
      {
        __asm { vcomiss xmm6, dword ptr [rcx+40h] }
        if ( !v12 )
          break;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+34h]
          vmovups ymmword ptr [rcx+54h], ymm0
          vcomiss xmm6, dword ptr [rcx+20h]
        }
        if ( !v12 )
        {
          --v10;
          break;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+14h]
          vmovups ymmword ptr [rcx+34h], ymm0
          vcomiss xmm6, dword ptr [rcx]
        }
        if ( !v12 )
        {
          v10 -= 2;
          break;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx-0Ch]
          vmovups ymmword ptr [rcx+14h], ymm0
          vcomiss xmm6, dword ptr [rcx-20h]
        }
        if ( !v12 )
        {
          v10 -= 3;
          break;
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx-2Ch]
          vmovups ymmword ptr [rcx-0Ch], ymm0
        }
        _RCX -= 128;
        v10 -= 4;
        v11 -= 4i64;
        v12 = (unsigned __int64)v11 < 3;
        if ( v11 < 3 )
          goto LABEL_15;
      }
    }
  }
  _RAX = &s_notifyList[v10 + 1];
  s_notifyListSize = v9 + 1;
  __asm
  {
    vmovss  dword ptr [rax+0Ch], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  _RAX->noteName = notetrackName;
  _RAX->notifyType = notifyType;
  _RAX->notifyName = 0;
  _RAX->subObjIdx = subObjIndex;
}

/*
==============
Mayhem_AddDobj
==============
*/
void Mayhem_AddDobj(LocalClientNum_t localClientNum, unsigned int mayhemEntId, DObj *dobj, cpose_t *pose, int dobjHandle, bool isActive)
{
  __int64 v14; 
  signed int v16; 
  unsigned int v22; 
  unsigned int v23; 
  MayhemInstance *Instance; 
  MayhemInstance *v25; 
  unsigned int v36; 
  const dvar_t *v38; 
  const dvar_t *v46; 
  const char *v47; 
  const char *v48; 
  float fmt; 
  float materialTime; 
  bdRandom v58; 
  vec3_t origin; 
  vec3_t outOrigin; 
  vec3_t lightingOrigin; 
  __int64 v62; 
  vec3_t xyz; 
  vec4_t color; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  v62 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  _RSI = pose;
  _R13 = dobj;
  v14 = mayhemEntId;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1026, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v16 = s_curFreeMayhemClientEntNum++;
  if ( v16 >= 2560 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 310, ASSERT_TYPE_ASSERT, "(id < ( ( 2048 ) + ( 96 + ( 32 ) + CLIENT_MODEL_MAX_COUNT + 0 ) ))", (const char *)&queryFormat, "id < MAX_GFXENTITIES") )
    __debugbreak();
  CG_GetPoseOrigin(_RSI, &outOrigin);
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+48h]
    vmovss  xmm7, dword ptr [rsi+4Ch]
    vmovss  xmm8, dword ptr [rsi+50h]
    vmovups xmm9, xmmword ptr [rsi+84h]
    vmovsd  xmm10, qword ptr [rsi+94h]
  }
  memset_0(_RSI, 0, sizeof(cpose_t));
  bdRandom::bdRandom(&v58);
  v22 = bdRandom::nextUInt(&v58) % 0x22;
  bdRandom::~bdRandom(&v58);
  bdRandom::bdRandom(&v58);
  v23 = bdRandom::nextUInt(&v58) % 0x22;
  bdRandom::~bdRandom(&v58);
  CG_ResetPoseZero(_RSI, v23, v22);
  _RSI->isMayhem = isActive;
  if ( (unsigned int)v14 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v14, "unsigned", v14) )
    __debugbreak();
  _RSI->mayhemInstanceId = v14;
  CG_SetPrevPoseOrigin(_RSI, &outOrigin);
  __asm
  {
    vmovss  dword ptr [rsi+78h], xmm6
    vmovss  dword ptr [rsi+7Ch], xmm7
    vmovss  dword ptr [rsi+80h], xmm8
    vmovups xmmword ptr [rsi+84h], xmm9
    vmovsd  qword ptr [rsi+94h], xmm10
  }
  Instance = Mayhem_GetInstance(v14);
  v25 = Instance;
  if ( Instance->linkTo )
  {
    Mayhem_UpdateFromLink(localClientNum, Instance, _RSI);
  }
  else
  {
    CG_SetPoseOrigin(_RSI, &Instance->initialPose.origin);
    UnitQuatToAngles(&v25->initialPose.quat, &_RSI->angles);
  }
  CG_GetPoseOrigin(_RSI, &lightingOrigin);
  _RCX = &entityMutableShaderData;
  _RAX = &NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups xmm1, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm1
  }
  entityMutableShaderData.hudOutlineInfo.mapEntLookup = v25->mapEntLookup;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+200h+materialTime], xmm6
  }
  R_AddDObjToScene(_R13, _RSI, v16, isActive << 12, &entityMutableShaderData, &lightingOrigin, materialTime);
  CG_GetPoseOrigin(_RSI, &origin);
  __asm { vmovss  xmm3, dword ptr [r13+0C8h]; radius }
  v36 = R_LinkDObjEntity(localClientNum, v16, &origin, *(float *)&_XMM3);
  if ( (_R13->flags & 4) != 0 )
    R_EntityHasSkinningAnimation(localClientNum, v16);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0C8h]
    vmovss  dword ptr [rsp+200h+fmt], xmm0
  }
  CG_Entity_CheckLightCount(v16, _R13, v36, &origin, fmt);
  v38 = DVARBOOL_mayhem_entInfo;
  if ( !DVARBOOL_mayhem_entInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_entInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v38->current.enabled )
  {
    CG_GetPoseOrigin(_RSI, &origin);
    _RAX = _R13->skel.mat;
    if ( _RAX )
    {
      __asm { vmovsd  xmm1, qword ptr [rax+10h] }
      xyz.v[2] = _RAX->trans.v[2];
      __asm
      {
        vshufps xmm6, xmm1, xmm1, 55h ; 'U'
        vmovsd  qword ptr [rbp+100h+xyz], xmm1
        vmovss  xmm3, dword ptr [rbp+100h+xyz+8]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm3, xmm3, xmm3
      }
    }
    __asm
    {
      vaddss  xmm1, xmm1, dword ptr [rsp+200h+origin]
      vmovss  dword ptr [rbp+100h+xyz], xmm1
      vaddss  xmm0, xmm6, dword ptr [rsp+200h+origin+4]
      vmovss  dword ptr [rbp+100h+xyz+4], xmm0
      vaddss  xmm2, xmm3, dword ptr [rsp+200h+origin+8]
      vmovss  dword ptr [rbp+100h+xyz+8], xmm2
      vmovups xmm0, cs:__xmm@3f8000003f0000003f0000003f800000
      vmovups xmmword ptr [rbp+100h+color], xmm0
    }
    v46 = DVARINT_mayhem_debugEnt;
    if ( !DVARINT_mayhem_debugEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEnt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v47 = (char *)&queryFormat.fmt + 3;
    if ( v46->current.integer == (_DWORD)v14 )
      v47 = "*";
    v48 = j_va("%sMayhem %d GfxEnt %d", v47, (unsigned int)v14, (unsigned int)dobjHandle);
    __asm { vmovss  xmm2, cs:__real@3f800000; scale }
    CL_AddDebugString(&xyz, &color, *(float *)&_XMM2, v48, 0, 1);
  }
  memset(&origin, 0, sizeof(origin));
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(&lightingOrigin, 0, sizeof(lightingOrigin));
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
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
void Mayhem_DumpEntInfo()
{
  __int64 v1; 
  unsigned int numMayhemScenes; 
  const MayhemInstance *v5; 
  __int64 v8; 
  bool v9; 
  MayhemObj *v10; 
  BOOL v11; 
  BOOL v12; 
  int v13; 
  int v14; 
  char v15; 
  unsigned int numSubObjects; 
  const char *v17; 
  const char *v18; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  Com_Printf(19, "===BEGIN MAYHEM ENTS===\n");
  v1 = 0i64;
  if ( s_numMayhemObjs )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    while ( 1 )
    {
      if ( cm.mapEnts )
      {
        numMayhemScenes = cm.mapEnts->numMayhemScenes;
        if ( (unsigned int)v1 < numMayhemScenes )
        {
          _RDI = &cm.mapEnts->mayhemScenes[v1];
          goto LABEL_9;
        }
      }
      else
      {
        numMayhemScenes = 0;
      }
      v5 = &s_spawnedMayhems[(unsigned int)v1 - numMayhemScenes];
      _RDI = NULL;
      if ( Mayhem_IsSpawnedInstanceActive(v5) )
        _RDI = (MayhemInstance *)v5;
LABEL_9:
      __asm { vmovss  xmm0, dword ptr [rdi+34h] }
      _RCX = _RDI->mayhem;
      v8 = (unsigned int)v1;
      v9 = &s_mayhemObjs[v8] == NULL;
      v10 = &s_mayhemObjs[v8];
      __asm { vucomiss xmm0, xmm6 }
      v11 = v9 && _RCX->preModel;
      __asm { vcomiss xmm0, dword ptr [rcx+48h] }
      v12 = _RCX->postModel != NULL;
      v13 = (_RDI->flags >> 1) & 1;
      if ( (_RDI->flags & 1) != 0 || !_RCX->numObjects )
      {
        v14 = 1;
LABEL_20:
        v15 = 0;
        goto LABEL_21;
      }
      v14 = 0;
      if ( !v13 || v11 || _RCX->postModel )
        goto LABEL_20;
      v15 = 1;
LABEL_21:
      numSubObjects = v10->numSubObjects;
      v17 = SL_ConvertToString(_RDI->scriptName);
      LODWORD(v24) = numSubObjects;
      v18 = (char *)&queryFormat.fmt + 3;
      LODWORD(v23) = v12;
      LODWORD(v22) = v11;
      LODWORD(v21) = v14;
      if ( v15 )
        v18 = " - CONSUMING PERF";
      LODWORD(v20) = v13;
      Com_Printf(19, "Mayhem[%d]%s: Asset=%s Name=%s IsActive=%d IsHidden=%d IsPreModel=%d IsPostModel=%d, has %d sub-objects\n", (unsigned int)v1, v18, _RDI->mayhem->name, v17, v20, v21, v22, v23, v24);
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= s_numMayhemObjs )
      {
        __asm { vmovaps xmm6, [rsp+98h+var_38] }
        break;
      }
    }
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
  scr_string_t v3; 
  const char *v4; 
  MayhemData *mayhem; 
  const char *v7; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  if ( InstanceByName )
  {
    mayhem = InstanceByName->mayhem;
    if ( mayhem->numAnims )
    {
      _RAX = mayhem->anims;
      __asm { vmovss  xmm0, dword ptr [rax+10h] }
    }
    else
    {
      v7 = SL_ConvertToString(v3);
      Com_PrintError(19, "Mayhem Entity (name = %s) doesn't have any animations!\n", v7);
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    v4 = SL_ConvertToString(v3);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v4);
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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

float __fastcall Mayhem_GetAnimationTime(scr_string_t mayhemName, double _XMM1_8)
{
  MayhemInstance *InstanceByName; 
  scr_string_t v4; 
  const char *v6; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  _RBX = InstanceByName;
  if ( InstanceByName )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+34h]
      vmulss  xmm0, xmm0, dword ptr [rax+14h]; X
    }
    if ( InstanceByName->mayhem->anims->isLooping )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000; Y }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
    else
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    __asm
    {
      vmovaps xmm2, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm0, dword ptr [rcx+10h]
      vmulss  xmm0, xmm1, xmm2
    }
  }
  else
  {
    v6 = SL_ConvertToString(v4);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v6);
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Mayhem_GetAnimationTimeNormalized
==============
*/

double __fastcall Mayhem_GetAnimationTimeNormalized(scr_string_t mayhemName, double _XMM1_8)
{
  MayhemInstance *InstanceByName; 
  const char *v6; 
  MayhemData *mayhem; 
  const char *v9; 

  InstanceByName = Mayhem_GetInstanceByName(mayhemName);
  _R11 = InstanceByName;
  if ( InstanceByName )
  {
    mayhem = InstanceByName->mayhem;
    if ( mayhem->numAnims )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r11+34h]
        vmulss  xmm0, xmm0, dword ptr [rax+14h]; X
      }
      if ( mayhem->anims->isLooping )
      {
        __asm { vmovss  xmm1, cs:__real@3f800000; Y }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      else
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
    }
    else
    {
      v9 = SL_ConvertToString(mayhemName);
      Com_PrintError(19, "Mayhem Entity (name = %s) doesn't have any animations!\n", v9);
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    v6 = SL_ConvertToString(mayhemName);
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v6);
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
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

__int64 __fastcall Mayhem_GetNextNotifyIndex(const MayhemAnim *anim, double time)
{
  bool v9; 
  bool v10; 
  unsigned int v16; 
  bool v17; 
  bool v19; 
  __int64 v25; 
  double v27; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm7, xmm1
  }
  v9 = anim == NULL;
  if ( !anim )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 839, ASSERT_TYPE_ASSERT, "(anim)", (const char *)&queryFormat, "anim");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
    vcomiss xmm7, cs:__real@3f800000
  }
  if ( !v9 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 842, ASSERT_TYPE_ASSERT, "( ( time <= 1.0f ) )", "( time ) = %g", v27) )
      __debugbreak();
  }
  _RDI = anim->notify;
  _RBX = NULL;
  __asm { vmovss  xmm8, cs:__real@40000000 }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 848, ASSERT_TYPE_ASSERT, "(notifyInfo)", (const char *)&queryFormat, "notifyInfo") )
    __debugbreak();
  v16 = 0;
  v17 = 0;
  if ( !anim->notifyCount )
    goto LABEL_32;
  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  do
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+4]
      vcomiss xmm6, xmm9
    }
    if ( v17 )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 852, ASSERT_TYPE_ASSERT, "(testTime >= 0)", (const char *)&queryFormat, "testTime >= 0");
      v17 = 0;
      if ( v19 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, xmm7 }
    if ( !v17 )
    {
      __asm { vcomiss xmm6, xmm8 }
      if ( v17 )
      {
        __asm { vmovaps xmm8, xmm6 }
        _RBX = _RDI;
      }
    }
    ++v16;
    ++_RDI;
    v17 = v16 < anim->notifyCount;
  }
  while ( v16 < anim->notifyCount );
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  if ( !_RBX )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 864, ASSERT_TYPE_ASSERT, "(bestNotifyInfo)", (const char *)&queryFormat, "bestNotifyInfo") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm9, [rsp+0A8h+var_58]
    vmovaps xmm8, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
  if ( _RBX != anim->notify )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx-4]
      vcomiss xmm0, dword ptr [rbx+4]
    }
    if ( _RBX >= anim->notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 865, ASSERT_TYPE_ASSERT, "(bestNotifyInfo == anim->notify || bestNotifyInfo->time > ( bestNotifyInfo - 1 )->time)", (const char *)&queryFormat, "bestNotifyInfo == anim->notify || bestNotifyInfo->time > ( bestNotifyInfo - 1 )->time") )
      __debugbreak();
  }
  v25 = _RBX - anim->notify;
  if ( (unsigned __int64)(v25 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,__int64>(__int64)", "signed", (__int16)v25, "signed", v25) )
    __debugbreak();
  return (unsigned __int16)v25;
}

/*
==============
Mayhem_GetPose
==============
*/
cpose_t *Mayhem_GetPose(LocalClientNum_t localClientNum, int dobjHandle)
{
  __int64 v3; 
  int *i; 
  unsigned int v5; 
  __int64 v6; 
  int *v7; 
  char v9; 
  char v13; 

  v3 = 0i64;
  if ( !s_numMayhemObjs )
    return 0i64;
  for ( i = s_mayhemObjs[0].dobjHandle; ; i += 1296 )
  {
    v5 = *(i - 1202);
    v6 = 0i64;
    if ( v5 )
      break;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= s_numMayhemObjs )
      return 0i64;
  }
  v7 = i;
  while ( *v7 != dobjHandle )
  {
    v6 = (unsigned int)(v6 + 1);
    ++v7;
    if ( (unsigned int)v6 >= v5 )
      goto LABEL_7;
  }
  _RAX = Mayhem_GetInstance(v3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rax+34h]
    vucomiss xmm1, xmm0
  }
  if ( v13 )
  {
    v9 = 0;
    if ( _RAX->mayhem->preModel )
      return &s_mayhemObjs[(unsigned int)v3].prePostPose;
  }
  _RCX = _RAX->mayhem;
  __asm { vcomiss xmm1, dword ptr [rcx+48h] }
  if ( v9 )
    return &s_mayhemObjs[v3].pose[v6];
  if ( _RCX->postModel )
    return &s_mayhemObjs[(unsigned int)v3].prePostPose;
  else
    return &s_mayhemObjs[v3].pose[v6];
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

void __fastcall Mayhem_MyChanges(double _XMM0_8)
{
  float *v2; 
  __int64 v3; 
  char *v4; 
  const char **v5; 
  const char *v6; 
  scr_string_t *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int numMayhemScenes; 
  const MayhemInstance *v11; 
  const MayhemInstance *v12; 
  __int64 v13; 
  float *p_oldTime; 
  char *v15; 
  scr_string_t v16; 
  __int64 v17; 
  unsigned int v18; 
  MayhemInstance *mayhemScenes; 
  scr_string_t *p_scriptName; 
  __int64 v21; 
  scr_string_t *v22; 
  unsigned int v23; 
  MayhemInstance *v24; 
  MayhemInstance *v25; 
  const char *v26; 
  MayhemInstance *v27; 
  const char *v28; 
  float v29; 
  scr_string_t v30; 
  const char *v31; 
  XAssetHeader v32; 
  char v34[20]; 
  char v35; 
  char v36; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+3C8h+var_378], xmm0
  }
  memset_0(v34, 0, 0x33Cui64);
  v2 = &s_spawnedMayhems[0].initialPose.origin.v[2];
  v3 = 16i64;
  v4 = &v35;
  do
  {
    if ( *((_DWORD *)v2 + 6) )
    {
      v5 = (const char **)*((_QWORD *)v2 + 1);
      *((float *)v4 - 2) = *(v2 - 2);
      *((float *)v4 - 1) = *(v2 - 1);
      v6 = *v5;
      *(float *)v4 = *v2;
      *((float *)v4 - 6) = *(v2 - 6);
      *((float *)v4 - 5) = *(v2 - 5);
      *((float *)v4 - 4) = *(v2 - 4);
      *((float *)v4 - 3) = *(v2 - 3);
      *((_DWORD *)v4 + 1) = SL_GetString(v6, 0);
      *((float *)v4 + 2) = v2[6];
      *((float *)v4 + 3) = v2[7];
      *((float *)v4 + 4) = v2[8];
      *((float *)v4 + 5) = v2[9];
      *((float *)v4 + 6) = v2[10];
    }
    v4 += 52;
    v2 += 20;
    --v3;
  }
  while ( v3 );
  v7 = (scr_string_t *)&v36;
  v8 = 16i64;
  do
  {
    if ( *v7 )
      Mayhem_KillInstance(*v7);
    v7 += 13;
    --v8;
  }
  while ( v8 );
  v9 = 0;
  if ( s_numMayhemObjs )
  {
    while ( 1 )
    {
      Mayhem_DestroyObj(&s_mayhemObjs[v9]);
      if ( !cm.mapEnts )
        break;
      numMayhemScenes = cm.mapEnts->numMayhemScenes;
      if ( v9 >= numMayhemScenes )
        goto LABEL_14;
LABEL_17:
      if ( ++v9 >= s_numMayhemObjs )
        goto LABEL_18;
    }
    numMayhemScenes = 0;
LABEL_14:
    v11 = &s_spawnedMayhems[v9 - numMayhemScenes];
    v12 = NULL;
    if ( Mayhem_IsSpawnedInstanceActive(v11) )
      v12 = v11;
    SL_RemoveRefToString(v12->scriptName);
    v12->scriptName = 0;
    goto LABEL_17;
  }
LABEL_18:
  s_curFreeMayhemDObjID = 2050;
  s_numMayhemObjs = 0;
  s_isInitialized = 0;
  Mayhem_Init();
  v13 = 16i64;
  p_oldTime = &s_spawnedMayhems[0].oldTime;
  v15 = &v35;
  do
  {
    v16 = *((_DWORD *)v15 + 2);
    if ( v16 )
    {
      v17 = 0i64;
      v18 = cm.mapEnts->numMayhemScenes;
      if ( v18 )
      {
        mayhemScenes = cm.mapEnts->mayhemScenes;
        p_scriptName = &mayhemScenes->scriptName;
        while ( *p_scriptName != v16 )
        {
          v17 = (unsigned int)(v17 + 1);
          p_scriptName += 20;
          if ( (unsigned int)v17 >= v18 )
            goto LABEL_24;
        }
        v25 = &mayhemScenes[v17];
      }
      else
      {
LABEL_24:
        v21 = 0i64;
        v22 = &s_spawnedMayhems[0].scriptName;
        while ( *v22 != v16 )
        {
          v21 = (unsigned int)(v21 + 1);
          v22 += 20;
          if ( (unsigned int)v21 >= 0x10 )
            goto LABEL_27;
        }
        v25 = &s_spawnedMayhems[v21];
      }
      if ( v25 )
      {
        v26 = SL_ConvertToString(v16);
        Com_PrintError(19, "Attempting to spawn a Mayhem entity that already exists (name = %s).\n", v26);
      }
      else
      {
LABEL_27:
        v23 = 0;
        v24 = s_spawnedMayhems;
        while ( 1 )
        {
          if ( (s_spawnedMayhems > v24 || v24 > &s_spawnedMayhems[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 110, ASSERT_TYPE_ASSERT, "(&s_spawnedMayhems[0]) <= (mayhem) && (mayhem) <= (&s_spawnedMayhems[( sizeof( *array_counter( s_spawnedMayhems ) ) + 0 ) - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "mayhem not in [&s_spawnedMayhems[0], &s_spawnedMayhems[ARRAY_COUNT( s_spawnedMayhems ) - 1]]", v24, s_spawnedMayhems, &s_spawnedMayhems[15]) )
            __debugbreak();
          if ( !v24->scriptName )
            break;
          ++v23;
          ++v24;
          if ( v23 >= 0x10 )
            goto LABEL_40;
        }
        v27 = &s_spawnedMayhems[v23];
        if ( !v27 )
        {
LABEL_40:
          v28 = SL_ConvertToString(v16);
          Com_PrintError(19, "Could not find empty slot to spawn Mayhem Entity (name = %s).  Slot count = %zu.\n", v28, 0x10ui64);
          goto LABEL_44;
        }
        SL_AddRefToString(v16);
        v29 = *((float *)v15 - 2);
        v30 = *((_DWORD *)v15 + 1);
        v27->scriptName = v16;
        *(_QWORD *)&v27->curTime = 0i64;
        *(_QWORD *)&v27->initialFlags = 2i64;
        v27->linkTo = NULL;
        v27->initialPose.origin.v[0] = v29;
        v27->initialPose.origin.v[1] = *((float *)v15 - 1);
        v27->initialPose.origin.v[2] = *(float *)v15;
        v27->initialPose.quat.v[0] = *((float *)v15 - 6);
        v27->initialPose.quat.v[1] = *((float *)v15 - 5);
        v27->initialPose.quat.v[2] = *((float *)v15 - 4);
        v27->initialPose.quat.v[3] = *((float *)v15 - 3);
        v31 = SL_ConvertToString(v30);
        v32.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_MAYHEM, v31, 1).physicsLibrary;
        if ( !v32.physicsLibrary )
          Com_PrintError(19, "Failed to find mayhem asset '%s'\n", v31);
        v27->mayhem = v32.mayhem;
        Mayhem_InitEntity(v27, 1, LOCAL_CLIENT_0);
      }
LABEL_44:
      *(p_oldTime - 1) = *((float *)v15 + 3);
      *p_oldTime = *((float *)v15 + 4);
      p_oldTime[1] = *((float *)v15 + 5);
      p_oldTime[2] = *((float *)v15 + 6);
    }
    v15 += 52;
    p_oldTime += 20;
    --v13;
  }
  while ( v13 );
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
    _R14 = &s_notifyList[0].noteName;
    do
    {
      v6 = 0x7FFFFFFFi64;
      v7 = "end";
      v8 = SL_ConvertToString(*_R14);
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
            subObjIdx = *((unsigned int *)_R14 + 5);
            if ( !DVARBOOL_mayhem_debugNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugNotetracks") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v15);
            if ( v15->current.enabled )
            {
              v17 = SL_ConvertToString(*_R14);
              __asm
              {
                vmovss  xmm2, dword ptr [r14+8]
                vcvtss2sd xmm2, xmm2, xmm2
                vmovq   r8, xmm2
              }
              LODWORD(isViewmodel) = subObjIdx;
              LODWORD(fmt) = v3;
              Com_Printf(14, "Mayhem note at %.2f - \"%s\" for ent %d, subObj %d\n", *(double *)&_XMM2, v17, fmt, isViewmodel);
            }
            CG_Utils_ProcessNotetracks(localClientNum, s_mayhemObjs[v3].dobjHandle[subObjIdx], s_mayhemObjs[v3].dobj[subObjIdx], &s_mayhemObjs[v3].pose[subObjIdx], &s_notifyList[v2], 0, 1, v3, subObjIdx, 1);
            break;
          }
        }
      }
      while ( v10 );
      ++v2;
      _R14 += 8;
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
  const DObj *v11; 
  int DObjBasePartOffset; 
  unsigned int v14; 
  __int64 animIndex; 
  MayhemAnim *anims; 
  bool isLooping; 
  char v31; 
  bool v32; 
  bool v37; 
  bool v39; 
  bool v41; 
  bool v42; 
  bool v49; 
  bool v50; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  MayhemData *v68; 
  int v75; 

  mayhem = mayhemInst->mayhem;
  v11 = obj;
  v68 = mayhem;
  DObjBasePartOffset = Mayhem_GetDObjBasePartOffset(obj, curObj);
  v14 = 0;
  v75 = DObjBasePartOffset;
  if ( v11->numModels )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm6
      vmovaps [rsp+0E8h+var_58], xmm7
      vmovaps [rsp+0E8h+var_68], xmm8
      vmovaps [rsp+0E8h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+0E8h+var_88], xmm10
      vmovsd  xmm10, cs:__real@3ff0000000000000
      vmovaps [rsp+0E8h+var_98], xmm11
      vxorpd  xmm11, xmm11, xmm11
      vxorps  xmm8, xmm8, xmm8
    }
    while ( 1 )
    {
      animIndex = mayhem->objects[v14 + DObjBasePartOffset].animIndex;
      anims = mayhem->anims;
      isLooping = anims[animIndex].isLooping;
      _RSI = &anims[animIndex];
      __asm
      {
        vmovss  xmm7, dword ptr [rsi+14h]
        vmulss  xmm0, xmm7, dword ptr [r13+38h]; X
      }
      if ( isLooping )
      {
        __asm { vmovaps xmm1, xmm9; Y }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      else
      {
        __asm
        {
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm8; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        isLooping = _RSI->isLooping;
        __asm { vmovss  xmm7, dword ptr [rsi+14h] }
      }
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm7, dword ptr [r13+34h]; X
      }
      if ( isLooping )
      {
        __asm { vmovaps xmm1, xmm9; Y }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      else
      {
        __asm
        {
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm8; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      __asm
      {
        vcomiss xmm6, xmm8
        vmovaps xmm7, xmm0
      }
      if ( v31 )
        goto LABEL_41;
      __asm { vcomiss xmm6, xmm9 }
      if ( !(v31 | v32) )
      {
LABEL_41:
        __asm
        {
          vmovsd  [rsp+0E8h+var_B0], xmm10
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0E8h+var_B8], xmm11
          vmovsd  [rsp+0E8h+var_C0], xmm0
        }
        v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 923, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t0 ) && ( t0 ) <= ( 1.0f )", "t0 not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v62, v64, v66);
        v31 = 0;
        v32 = !v37;
        if ( v37 )
          __debugbreak();
      }
      __asm
      {
        vcomiss xmm7, xmm8
        vcomiss xmm7, xmm9
      }
      if ( !(v31 | v32) )
      {
        __asm
        {
          vmovsd  [rsp+0E8h+var_B0], xmm10
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+0E8h+var_B8], xmm11
          vmovsd  [rsp+0E8h+var_C0], xmm0
        }
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 924, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( t1 ) && ( t1 ) <= ( 1.0f )", "t1 not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v63, v65, v67);
        v31 = 0;
        v32 = !v39;
        if ( v39 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( !(v31 | v32) )
      {
        if ( !_RSI->isLooping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 928, ASSERT_TYPE_ASSERT, "(anim->isLooping)", (const char *)&queryFormat, "anim->isLooping") )
          __debugbreak();
        __asm { vmovaps xmm1, xmm8; time }
        _RDI = (unsigned __int16)Mayhem_GetNextNotifyIndex(_RSI, *(double *)&_XMM1);
        _RAX = _RSI->notify;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rdi*8+4]
          vucomiss xmm0, xmm9
        }
        _RBX = (scr_string_t *)&_RAX[_RDI];
        if ( v42 )
          goto LABEL_37;
        __asm { vcomiss xmm7, xmm0 }
        if ( v41 )
          goto LABEL_37;
        do
        {
          __asm { vcomiss xmm6, xmm0 }
          if ( (v41 || v42) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 946, ASSERT_TYPE_ASSERT, "(t0 > notifyInfo->time)", (const char *)&queryFormat, "t0 > notifyInfo->time") )
            __debugbreak();
          __asm { vmovaps xmm2, xmm8; frac }
          Mayhem_AddClientNotify(*_RBX, subObjIdx, *(double *)&_XMM2, 0);
          _RBX += 2;
          LODWORD(_RDI) = _RDI + 1;
          v41 = (unsigned int)_RDI < _RSI->notifyCount;
          v42 = (_DWORD)_RDI == _RSI->notifyCount;
          if ( (unsigned int)_RDI >= _RSI->notifyCount )
            break;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vcomiss xmm7, xmm0
          }
        }
        while ( (unsigned int)_RDI > _RSI->notifyCount );
        v11 = obj;
        mayhem = v68;
      }
      __asm { vmovaps xmm1, xmm6; time }
      _RDI = (unsigned __int16)Mayhem_GetNextNotifyIndex(_RSI, *(double *)&_XMM1);
      _RAX = _RSI->notify;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+rdi*8+4]
        vucomiss xmm0, xmm9
      }
      _RBX = (scr_string_t *)&_RAX[_RDI];
      if ( !v50 )
      {
        __asm { vcomiss xmm6, xmm0 }
        if ( v49 || v50 )
        {
          __asm { vcomiss xmm7, xmm0 }
          if ( !v49 )
          {
            do
            {
              __asm { vcomiss xmm6, xmm0 }
              if ( !v49 && !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 969, ASSERT_TYPE_ASSERT, "(t0 <= notifyInfo->time)", (const char *)&queryFormat, "t0 <= notifyInfo->time") )
                __debugbreak();
              __asm { vmovaps xmm2, xmm6; frac }
              Mayhem_AddClientNotify(*_RBX, subObjIdx, *(double *)&_XMM2, 0);
              _RBX += 2;
              LODWORD(_RDI) = _RDI + 1;
              v49 = (unsigned int)_RDI < _RSI->notifyCount;
              v50 = (_DWORD)_RDI == _RSI->notifyCount;
              if ( (unsigned int)_RDI >= _RSI->notifyCount )
                break;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+4]
                vcomiss xmm7, xmm0
              }
            }
            while ( (unsigned int)_RDI > _RSI->notifyCount );
            v11 = obj;
            mayhem = v68;
          }
        }
      }
LABEL_37:
      ++v14;
      DObjBasePartOffset = v75;
      if ( v14 >= v11->numModels )
      {
        __asm
        {
          vmovaps xmm11, [rsp+0E8h+var_98]
          vmovaps xmm10, [rsp+0E8h+var_88]
          vmovaps xmm9, [rsp+0E8h+var_78]
          vmovaps xmm8, [rsp+0E8h+var_68]
          vmovaps xmm7, [rsp+0E8h+var_58]
          vmovaps xmm6, [rsp+0E8h+var_48]
        }
        return;
      }
    }
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

void __fastcall Mayhem_SetAnimationTime(scr_string_t mayhemName, double curTime)
{
  scr_string_t v5; 
  const char *v6; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( Mayhem_GetInstanceByName(mayhemName) )
  {
    __asm
    {
      vmovss  dword ptr [rax+34h], xmm6
      vmovss  dword ptr [rax+38h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    v6 = SL_ConvertToString(v5);
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    Com_PrintError(19, "Could not find spawned Mayhem Entity (name = %s)!\n", v6);
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
  int v7; 
  const dvar_t *v17; 
  unsigned int unsignedInt; 
  char v21; 
  char v22; 
  unsigned int i; 
  MayhemInstance *Instance; 
  unsigned int v36; 
  MayhemSoundInstance *v37; 
  MayhemObj *v38; 
  vec3_t outOrigin; 
  void *retaddr; 

  _R11 = &retaddr;
  v7 = s_curFreeMayhemClientEntNum;
  __asm { vmovaps xmmword ptr [r11-28h], xmm6 }
  if ( (updateType & 0xFFFFFFFD) == 0 )
    v7 = 2050;
  __asm { vmovaps xmmword ptr [r11-48h], xmm8 }
  s_curFreeMayhemClientEntNum = v7;
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm8, xmm0, cs:__real@3a83126f
  }
  if ( DVARINT_mayhem_debugEnt->modified )
  {
    __asm { vmovss  xmm1, cs:__real@bf800000; value }
    Dvar_SetFloat_Internal(DVARFLT_mayhem_debugEntTime, *(float *)&_XMM1);
    Dvar_ClearModified(DVARINT_mayhem_debugEnt);
  }
  _RBX = DVARFLT_mayhem_debugEntTime;
  if ( !DVARFLT_mayhem_debugEntTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEntTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( !v21 )
  {
    v17 = DVARINT_mayhem_debugEnt;
    if ( !DVARINT_mayhem_debugEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEnt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    unsignedInt = v17->current.unsignedInt;
    if ( unsignedInt < s_numMayhemObjs )
    {
      _RBX = DVARFLT_mayhem_debugEntTimeScale;
      __asm { vmovaps [rsp+0A8h+var_38], xmm7 }
      if ( !DVARFLT_mayhem_debugEntTimeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mayhem_debugEntTimeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RAX = Mayhem_GetInstance(unsignedInt);
      __asm
      {
        vmovss  xmm1, dword ptr [rax+34h]
        vcomiss xmm1, xmm6
      }
      if ( v21 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm8
          vaddss  xmm1, xmm0, xmm1
          vminss  xmm2, xmm1, xmm6
        }
      }
      else
      {
        if ( v21 | v22 )
        {
LABEL_21:
          __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
          goto LABEL_22;
        }
        __asm
        {
          vmulss  xmm0, xmm7, xmm8
          vsubss  xmm1, xmm1, xmm0
          vmaxss  xmm2, xmm1, xmm6
        }
      }
      __asm { vmovss  dword ptr [rax+34h], xmm2 }
      goto LABEL_21;
    }
  }
LABEL_22:
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  for ( i = 0; i < s_numMayhemObjs; ++i )
  {
    Instance = Mayhem_GetInstance(i);
    if ( updateType == MAYHEM_UPDATE_DELAYED )
    {
      if ( (Instance->flags & 4) == 0 )
        continue;
    }
    else if ( updateType )
    {
      if ( updateType != MAYHEM_UPDATE_ALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 219, ASSERT_TYPE_ASSERT, "(updateType == MAYHEM_UPDATE_ALL)", (const char *)&queryFormat, "updateType == MAYHEM_UPDATE_ALL") )
        __debugbreak();
    }
    else if ( (Instance->flags & 4) != 0 )
    {
      continue;
    }
    __asm { vmovaps xmm1, xmm8; dT }
    Mayhem_UpdateEntity(i, *(float *)&_XMM1, localClientNum);
    Mayhem_ProcessNotetracks(i, localClientNum);
  }
  __asm { vmovaps xmm8, [rsp+0A8h+var_48] }
  if ( (unsigned int)(updateType - 1) <= 1 )
  {
    v36 = 0;
    v37 = s_mayhemSounds;
    do
    {
      if ( v37->sndId )
      {
        v38 = &s_mayhemObjs[v37->mayhemEntId];
        CG_DObjGetWorldBonePos(&v38->pose[v37->subObjIdx], v38->dobj[v37->subObjIdx], v37->boneIndex, &outOrigin);
        if ( !SND_SetWorldPosition(v37->sndId, &outOrigin) )
          v37->sndId = 0;
      }
      ++v36;
      ++v37;
    }
    while ( v36 < 0x10 );
  }
}

/*
==============
Mayhem_UpdateEntity
==============
*/

void __fastcall Mayhem_UpdateEntity(unsigned int mayhemEntId, double dT, LocalClientNum_t localClientNum)
{
  __int64 v6; 
  __int64 v7; 
  unsigned int flags; 
  MayhemObj *v12; 
  __int64 v14; 
  unsigned int numSubObjects; 
  __int64 isActive; 
  __int64 v18; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = localClientNum;
  v7 = mayhemEntId;
  _RBP = Mayhem_GetInstance(mayhemEntId);
  flags = _RBP->flags;
  if ( (flags & 1) == 0 )
  {
    _RDX = _RBP->mayhem;
    if ( _RDX->numObjects )
    {
      __asm { vmovss  xmm1, dword ptr [rbp+34h] }
      if ( (flags & 2) != 0 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+38h], xmm1
          vaddss  xmm1, xmm1, xmm6
          vmovss  dword ptr [rbp+34h], xmm1
        }
      }
      v12 = &s_mayhemObjs[v7];
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm1, xmm0
      }
      if ( v12 || !_RDX->preModel )
      {
        v14 = 0i64;
        __asm { vcomiss xmm1, dword ptr [rdx+48h] }
        numSubObjects = v12->numSubObjects;
        if ( _RDX->postModel )
        {
          if ( numSubObjects )
          {
            do
            {
              if ( v12->pose[v14].isMayhem )
              {
                if ( (unsigned int)v6 >= 2 )
                {
                  LODWORD(v18) = 2;
                  LODWORD(isActive) = v6;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", isActive, v18) )
                    __debugbreak();
                }
                if ( !&g_particleManager[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1109, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
                  __debugbreak();
                ParticleManager::KillAllSystemsOnDObjImmediate(&g_particleManager[v6], v12->dobjHandle[v14], 1);
                Mayhem_ClearSoundEntries(v7);
                v12->pose[v14].isMayhem = 0;
              }
              v14 = (unsigned int)(v14 + 1);
            }
            while ( (unsigned int)v14 < v12->numSubObjects );
          }
          Mayhem_AddDobj((LocalClientNum_t)v6, v7, v12->postDobj, &v12->prePostPose, v12->postDobjHandle, 0);
        }
        else if ( numSubObjects )
        {
          do
          {
            Mayhem_AddDobj((LocalClientNum_t)v6, v7, v12->dobj[v14], &v12->pose[v14], v12->dobjHandle[v14], 1);
            Mayhem_ProcessNotetracksForEnt(_RBP, v12->dobj[v14], v14, &s_mayhemObjs[v7]);
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < v12->numSubObjects );
        }
      }
      else
      {
        Mayhem_AddDobj((LocalClientNum_t)v6, v7, MEMORY[0x1308], (cpose_t *)0x1318, MEMORY[0x1438], 0);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
Mayhem_UpdateFromLink
==============
*/
void Mayhem_UpdateFromLink(LocalClientNum_t localClientNum, const MayhemInstance *mayhemInst, cpose_t *mayhemPose)
{
  __int64 v9; 
  unsigned int anchorIndex; 
  int AnchorEntNum; 
  __int64 v12; 
  CgEntitySystem *v13; 
  __int64 v14; 
  __int64 v22; 
  __int64 v23; 
  vec3_t outOrigin; 
  __int64 v25; 
  vec4_t quat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in1; 
  char v30; 
  void *retaddr; 

  _RAX = &retaddr;
  v25 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v9 = localClientNum;
  if ( !mayhemInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 759, ASSERT_TYPE_ASSERT, "(mayhemInst)", (const char *)&queryFormat, "mayhemInst") )
    __debugbreak();
  if ( !mayhemInst->linkTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 760, ASSERT_TYPE_ASSERT, "(mayhemInst->linkTo)", (const char *)&queryFormat, "mayhemInst->linkTo") )
    __debugbreak();
  if ( mayhemInst->linkTo->anchorIndex >= 0x100u )
  {
    LODWORD(v22) = mayhemInst->linkTo->anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( mayhemInst->linkTo->anchorIndex ) < (unsigned)( 256 )", "mayhemInst->linkTo->anchorIndex doesn't index CLIENTENT_MAX_ANCHORS\n\t%i not in [0, %i)", v22, 256) )
      __debugbreak();
  }
  if ( !mayhemPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 762, ASSERT_TYPE_ASSERT, "(mayhemPose)", (const char *)&queryFormat, "mayhemPose") )
    __debugbreak();
  anchorIndex = mayhemInst->linkTo->anchorIndex;
  if ( anchorIndex >= CM_ClientAnchorCount() )
  {
    LODWORD(v23) = CM_ClientAnchorCount();
    LODWORD(v22) = anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 744, ASSERT_TYPE_ASSERT, "(unsigned)( anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  AnchorEntNum = CM_GetAnchorEntNum(anchorIndex);
  v12 = AnchorEntNum;
  if ( (unsigned int)AnchorEntNum > 0x7FF )
  {
    LODWORD(v22) = AnchorEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 748, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 )-1 )", "entIndex not in [0, MAX_GENTITIES-1]\n\t%i not in [%i, %i]", v22, 0i64, 2047) )
      __debugbreak();
  }
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v23) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v23) )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v23) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v22) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v9] )
  {
    LODWORD(v23) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v23) )
      __debugbreak();
  }
  v13 = CgEntitySystem::ms_entitySystemArray[v9];
  if ( (unsigned int)v12 >= 0x800 )
  {
    LODWORD(v23) = 2048;
    LODWORD(v22) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  v14 = (__int64)&v13->m_entities[v12];
  if ( v14 && (*(_BYTE *)(v14 + 648) & 1) != 0 )
  {
    CG_GetPoseOrigin((const cpose_t *)v14, &outOrigin);
    AnglesAndOriginToMatrix43((const vec3_t *)(v14 + 72), &outOrigin, &result);
    AnglesAndOriginToMatrix43(&mayhemInst->linkTo->angleOffset, &mayhemInst->linkTo->originOffset, &in1);
    MatrixMultiply43(&in1, &result, &out);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+158h+out+24h]
      vmovss  xmm7, dword ptr [rsp+158h+out+28h]
      vmovss  xmm8, dword ptr [rsp+158h+out+2Ch]
    }
    Axis43ToQuat(&out, &quat);
    CG_GetPoseOrigin(mayhemPose, &outOrigin);
    __asm
    {
      vmovss  dword ptr [rsp+158h+outOrigin], xmm6
      vmovss  dword ptr [rsp+158h+outOrigin+4], xmm7
      vmovss  dword ptr [rsp+158h+outOrigin+8], xmm8
    }
    UnitQuatToAngles(&quat, &mayhemPose->angles);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v30;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int64 v6; 
  unsigned int numModels; 
  MayhemData *mayhem; 
  int DObjBasePartOffset; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  MayhemObject *objects; 
  __int64 v24; 
  __int64 animIndex; 
  const XModel *model; 
  unsigned __int16 BoneOffset; 
  __int64 v28; 
  unsigned int v30; 
  vec3_t placementPos; 
  vec4_t placementQuat; 

  v6 = mayhemInstanceId;
  if ( DObjNumClientOnlyBones(obj) )
  {
    if ( !pose->isMayhem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1443, ASSERT_TYPE_ASSERT, "(pose->isMayhem)", (const char *)&queryFormat, "pose->isMayhem") )
      __debugbreak();
    _R13 = Mayhem_GetInstance(v6);
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1445, ASSERT_TYPE_ASSERT, "(mayhemInst)", (const char *)&queryFormat, "mayhemInst") )
      __debugbreak();
    _R12 = DObjGetRotTransArray(obj);
    if ( _R12 )
    {
      numModels = obj->numModels;
      mayhem = _R13->mayhem;
      __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
      if ( numModels > mayhem->numObjects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1455, ASSERT_TYPE_ASSERT, "(obj->numModels <= mayhemData->numObjects)", (const char *)&queryFormat, "obj->numModels <= mayhemData->numObjects") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r12+10h]
        vmovss  dword ptr [rsp+0B8h+placementPos], xmm0
        vmovss  xmm1, dword ptr [r12+14h]
        vmovss  dword ptr [rsp+0B8h+placementPos+4], xmm1
        vmovss  xmm0, dword ptr [r12+18h]
        vmovss  dword ptr [rsp+0B8h+placementPos+8], xmm0
        vmovss  xmm1, dword ptr [r12]
        vmovss  dword ptr [rsp+0B8h+placementQuat], xmm1
        vmovss  xmm0, dword ptr [r12+4]
        vmovss  dword ptr [rsp+0B8h+placementQuat+4], xmm0
        vmovss  xmm1, dword ptr [r12+8]
        vmovss  dword ptr [rsp+0B8h+placementQuat+8], xmm1
        vmovss  xmm0, dword ptr [r12+0Ch]
        vmovss  dword ptr [rsp+0B8h+placementQuat+0Ch], xmm0
      }
      DObjBasePartOffset = Mayhem_GetDObjBasePartOffset(obj, &s_mayhemObjs[v6]);
      v20 = 0;
      v21 = 0;
      if ( obj->numModels )
      {
        v22 = DObjBasePartOffset;
        do
        {
          objects = mayhem->objects;
          v24 = v21 + v22;
          animIndex = objects[v24].animIndex;
          model = mayhem->models[objects[v24].modelIndex].model;
          if ( obj->models[v21] != model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\mayhem.cpp", 1473, ASSERT_TYPE_ASSERT, "(obj->models[subObjectIdx] == curModel)", (const char *)&queryFormat, "obj->models[subObjectIdx] == curModel") )
            __debugbreak();
          BoneOffset = Mayhem_GetBoneOffset(obj, model, v21);
          v28 = animIndex;
          __asm { vmovss  xmm1, dword ptr [r13+34h]; t }
          v30 = BoneOffset;
          R_Mayhem_ProcessAnim(&mayhem->anims[v28], *(float *)&_XMM1, &_R12[BoneOffset], &placementPos, &placementQuat);
          __asm { vmovss  xmm2, dword ptr [r13+34h]; t }
          R_Mayhem_RegisterCustomDataChannels(&mayhem->anims[v28], obj, *(float *)&_XMM2, v30);
          ++v21;
        }
        while ( v21 < obj->numModels );
        v20 = 0;
      }
      _RBX = &obj->skel.partBits.skel;
      __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
      do
      {
        __asm { vmovdqu xmmword ptr [rbx], xmm6 }
        _RBX = (DObjPartBits *)((char *)_RBX + 16);
        ++v20;
      }
      while ( v20 < 2 );
      __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
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

