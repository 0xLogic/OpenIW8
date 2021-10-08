/*
==============
CgClientSideEffectsSystem::Exploder_DeactivateGroup
==============
*/

void __fastcall CgClientSideEffectsSystem::Exploder_DeactivateGroup(CgClientSideEffectsSystem *this, unsigned int id, bool kill)
{
  ?Exploder_DeactivateGroup@CgClientSideEffectsSystem@@QEAAXI_N@Z(this, id, kill);
}

/*
==============
CG_SpatialFX_GetRadius
==============
*/

double __fastcall CG_SpatialFX_GetRadius(const LocalClientNum_t localClientNum, unsigned int id)
{
  double result; 

  *(float *)&result = ?CG_SpatialFX_GetRadius@@YAMW4LocalClientNum_t@@I@Z(localClientNum, id);
  return result;
}

/*
==============
CG_SpatialSound_GetOrigin
==============
*/

void __fastcall CG_SpatialSound_GetOrigin(const LocalClientNum_t localClientNum, unsigned int id, vec3_t *origin)
{
  ?CG_SpatialSound_GetOrigin@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, id, origin);
}

/*
==============
CG_ClearPendingExploders
==============
*/

void __fastcall CG_ClearPendingExploders(LocalClientNum_t localClientNum)
{
  ?CG_ClearPendingExploders@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_HaveMapEntsEffectsMultipleRoots
==============
*/

bool __fastcall CG_HaveMapEntsEffectsMultipleRoots()
{
  return ?CG_HaveMapEntsEffectsMultipleRoots@@YA_NXZ();
}

/*
==============
CgClientSideEffectsSystem::ActiveFX_Get
==============
*/

ParticleSystemHandle __fastcall CgClientSideEffectsSystem::ActiveFX_Get(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  return ?ActiveFX_Get@CgClientSideEffectsSystem@@QEAA?AW4ParticleSystemHandle@@W4ClientSideEffectType@@I@Z(this, type, index);
}

/*
==============
CG_InsertClientReactiveEntSort
==============
*/

void __fastcall CG_InsertClientReactiveEntSort(ClientSideEffectsData *cseData, ClientReactiveEntDef *const reactiveEntDef, const int index, const int currentTime, const float distToPlayer, const float timeDelay)
{
  ?CG_InsertClientReactiveEntSort@@YAXPEAUClientSideEffectsData@@QEAUClientReactiveEntDef@@HHMM@Z(cseData, reactiveEntDef, index, currentTime, distToPlayer, timeDelay);
}

/*
==============
CG_SpatialSound_IsValid
==============
*/

bool __fastcall CG_SpatialSound_IsValid(const LocalClientNum_t localClientNum, unsigned int id)
{
  return ?CG_SpatialSound_IsValid@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
CG_SpatialSound_Deactivate
==============
*/

bool __fastcall CG_SpatialSound_Deactivate(const LocalClientNum_t localClientNum, unsigned int id)
{
  return ?CG_SpatialSound_Deactivate@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
CgClientSideEffectsSystem::ActiveSounds_Update
==============
*/

void __fastcall CgClientSideEffectsSystem::ActiveSounds_Update(CgClientSideEffectsSystem *this)
{
  ?ActiveSounds_Update@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::Restart
==============
*/

void __fastcall CgClientSideEffectsSystem::Restart(CgClientSideEffectsSystem *this)
{
  ?Restart@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::GetViewPos
==============
*/

bool __fastcall CgClientSideEffectsSystem::GetViewPos(CgClientSideEffectsSystem *this, vec3_t *out_pos)
{
  return ?GetViewPos@CgClientSideEffectsSystem@@IEAA_NAEATvec3_t@@@Z(this, out_pos);
}

/*
==============
CgClientSideEffectsSystem::Pending_Remove
==============
*/

void __fastcall CgClientSideEffectsSystem::Pending_Remove(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  ?Pending_Remove@CgClientSideEffectsSystem@@IEAAXW4ClientSideEffectType@@I@Z(this, type, index);
}

/*
==============
CgClientSideEffectsSystem::AddSounds
==============
*/

void __fastcall CgClientSideEffectsSystem::AddSounds(CgClientSideEffectsSystem *this)
{
  ?AddSounds@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::ActiveSounds_Add
==============
*/

bool __fastcall CgClientSideEffectsSystem::ActiveSounds_Add(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  return ?ActiveSounds_Add@CgClientSideEffectsSystem@@QEAA_NW4ClientSideEffectType@@I@Z(this, type, index);
}

/*
==============
CgClientSideEffectsSystem::StopEffects
==============
*/

void __fastcall CgClientSideEffectsSystem::StopEffects(CgClientSideEffectsSystem *this)
{
  ?StopEffects@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::Exploder_ActivateSingle
==============
*/

void __fastcall CgClientSideEffectsSystem::Exploder_ActivateSingle(CgClientSideEffectsSystem *this, unsigned int id, const int startTimeMsec)
{
  ?Exploder_ActivateSingle@CgClientSideEffectsSystem@@IEAAXIH@Z(this, id, startTimeMsec);
}

/*
==============
CgClientSideEffectsSystem::Pending_Update
==============
*/

void __fastcall CgClientSideEffectsSystem::Pending_Update(CgClientSideEffectsSystem *this)
{
  ?Pending_Update@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::SpatialFX_Update
==============
*/

void __fastcall CgClientSideEffectsSystem::SpatialFX_Update(CgClientSideEffectsSystem *this)
{
  ?SpatialFX_Update@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::Exploder_ActivateGroup
==============
*/

void __fastcall CgClientSideEffectsSystem::Exploder_ActivateGroup(CgClientSideEffectsSystem *this, unsigned int id, const int time)
{
  ?Exploder_ActivateGroup@CgClientSideEffectsSystem@@QEAAXIH@Z(this, id, time);
}

/*
==============
CgClientSideEffectsSystem::GetRootIgnored
==============
*/

bool __fastcall CgClientSideEffectsSystem::GetRootIgnored(CgClientSideEffectsSystem *this, const unsigned int parentIndex, const int ignoreRootIndex)
{
  return ?GetRootIgnored@CgClientSideEffectsSystem@@QEAA_NIH@Z(this, parentIndex, ignoreRootIndex);
}

/*
==============
CG_HaveMapEntsEffects
==============
*/

bool __fastcall CG_HaveMapEntsEffects()
{
  return ?CG_HaveMapEntsEffects@@YA_NXZ();
}

/*
==============
CgClientSideEffectsSystem::ActiveSounds_Remove
==============
*/

void __fastcall CgClientSideEffectsSystem::ActiveSounds_Remove(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  ?ActiveSounds_Remove@CgClientSideEffectsSystem@@QEAAXW4ClientSideEffectType@@I@Z(this, type, index);
}

/*
==============
CgClientSideEffectsSystem::DrawOverlay
==============
*/

void __fastcall CgClientSideEffectsSystem::DrawOverlay(CgClientSideEffectsSystem *this)
{
  ?DrawOverlay@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::Shutdown
==============
*/

void __fastcall CgClientSideEffectsSystem::Shutdown(CgClientSideEffectsSystem *this)
{
  ?Shutdown@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CG_SpatialSound_GetRadius
==============
*/

double __fastcall CG_SpatialSound_GetRadius(const LocalClientNum_t localClientNum, unsigned int id)
{
  double result; 

  *(float *)&result = ?CG_SpatialSound_GetRadius@@YAMW4LocalClientNum_t@@I@Z(localClientNum, id);
  return result;
}

/*
==============
CG_CopySoundEntityOrientation
==============
*/

void __fastcall CG_CopySoundEntityOrientation(int clientSoundEntIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  ?CG_CopySoundEntityOrientation@@YAXHAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(clientSoundEntIndex, origin_out, axis_out);
}

/*
==============
CgClientSideEffectsSystem::ParseRootAddChild
==============
*/

void __fastcall CgClientSideEffectsSystem::ParseRootAddChild(CgClientSideEffectsSystem *this, const unsigned int parentIndex, const vec3_t *childOrigin, ClientSideEffectType type)
{
  ?ParseRootAddChild@CgClientSideEffectsSystem@@QEAAXIAEBTvec3_t@@W4ClientSideEffectType@@@Z(this, parentIndex, childOrigin, type);
}

/*
==============
CG_SpatialFX_Deactivate
==============
*/

bool __fastcall CG_SpatialFX_Deactivate(const LocalClientNum_t localClientNum, unsigned int id)
{
  return ?CG_SpatialFX_Deactivate@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
CgClientSideEffectsSystem::GetTypeData
==============
*/

void __fastcall CgClientSideEffectsSystem::GetTypeData(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index, ClientSideTypeData *data_out)
{
  ?GetTypeData@CgClientSideEffectsSystem@@IEBAXW4ClientSideEffectType@@IAEAUClientSideTypeData@@@Z(this, type, index, data_out);
}

/*
==============
CgClientSideEffectsSystem::Exploder_DeactivateSingle
==============
*/

void __fastcall CgClientSideEffectsSystem::Exploder_DeactivateSingle(CgClientSideEffectsSystem *this, unsigned int id, bool kill)
{
  ?Exploder_DeactivateSingle@CgClientSideEffectsSystem@@IEAAXI_N@Z(this, id, kill);
}

/*
==============
CgClientSideEffectsSystem::IsSpatialSoundGlobal
==============
*/

bool __fastcall CgClientSideEffectsSystem::IsSpatialSoundGlobal(CgClientSideEffectsSystem *this, const unsigned int id)
{
  return ?IsSpatialSoundGlobal@CgClientSideEffectsSystem@@QEBA_NI@Z(this, id);
}

/*
==============
CG_SpatialSound_Activate
==============
*/

bool __fastcall CG_SpatialSound_Activate(const LocalClientNum_t localClientNum, unsigned int id)
{
  return ?CG_SpatialSound_Activate@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, id);
}

/*
==============
CgClientSideEffectsSystem::SpatialSound_Update
==============
*/

void __fastcall CgClientSideEffectsSystem::SpatialSound_Update(CgClientSideEffectsSystem *this)
{
  ?SpatialSound_Update@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CG_SpatialReactiveEnt_GetOrigin
==============
*/

void __fastcall CG_SpatialReactiveEnt_GetOrigin(const LocalClientNum_t localClientNum, unsigned int id, vec3_t *origin)
{
  ?CG_SpatialReactiveEnt_GetOrigin@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, id, origin);
}

/*
==============
CgClientSideEffectsSystem::Update
==============
*/

void __fastcall CgClientSideEffectsSystem::Update(CgClientSideEffectsSystem *this)
{
  ?Update@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::AllocateMemory
==============
*/

void __fastcall CgClientSideEffectsSystem::AllocateMemory(CgClientSideEffectsSystem *this, HunkUser *hunkUser)
{
  ?AllocateMemory@CgClientSideEffectsSystem@@IEAAXPEAUHunkUser@@@Z(this, hunkUser);
}

/*
==============
CgClientSideEffectsSystem::AddSpatialSoundGlobal
==============
*/

void __fastcall CgClientSideEffectsSystem::AddSpatialSoundGlobal(CgClientSideEffectsSystem *this, const unsigned int id)
{
  ?AddSpatialSoundGlobal@CgClientSideEffectsSystem@@QEAAXI@Z(this, id);
}

/*
==============
CgClientSideEffectsSystem::GetRootIndex
==============
*/

int __fastcall CgClientSideEffectsSystem::GetRootIndex(CgClientSideEffectsSystem *this, const unsigned int parentIndex)
{
  return ?GetRootIndex@CgClientSideEffectsSystem@@QEAAHI@Z(this, parentIndex);
}

/*
==============
CgClientSideEffectsSystem::ReactiveEnt_ActivateSingle
==============
*/

void __fastcall CgClientSideEffectsSystem::ReactiveEnt_ActivateSingle(CgClientSideEffectsSystem *this, unsigned int id)
{
  ?ReactiveEnt_ActivateSingle@CgClientSideEffectsSystem@@IEAAXI@Z(this, id);
}

/*
==============
CgClientSideEffectsSystem::ActiveFX_Set
==============
*/

void __fastcall CgClientSideEffectsSystem::ActiveFX_Set(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index, ParticleSystemHandle handle)
{
  ?ActiveFX_Set@CgClientSideEffectsSystem@@QEAAXW4ClientSideEffectType@@IW4ParticleSystemHandle@@@Z(this, type, index, handle);
}

/*
==============
CgClientSideEffectsSystem::ReactiveEnts_Fire
==============
*/

void __fastcall CgClientSideEffectsSystem::ReactiveEnts_Fire(CgClientSideEffectsSystem *this, const vec3_t *eventOrigin, const float eventRadius, const float timeDelay, ReactiveEntEvent ev)
{
  ?ReactiveEnts_Fire@CgClientSideEffectsSystem@@QEAAXAEBTvec3_t@@MMW4ReactiveEntEvent@@@Z(this, eventOrigin, eventRadius, timeDelay, ev);
}

/*
==============
CgClientSideEffectsSystem::StartSounds
==============
*/

void __fastcall CgClientSideEffectsSystem::StartSounds(CgClientSideEffectsSystem *this)
{
  ?StartSounds@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::CopySoundEntityOrientation
==============
*/

void __fastcall CgClientSideEffectsSystem::CopySoundEntityOrientation(CgClientSideEffectsSystem *this, int clientSoundEntIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  ?CopySoundEntityOrientation@CgClientSideEffectsSystem@@QEBAXHAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(this, clientSoundEntIndex, origin_out, axis_out);
}

/*
==============
CgClientSideEffectsSystem::SystemEnabled
==============
*/

bool __fastcall CgClientSideEffectsSystem::SystemEnabled(CgClientSideEffectsSystem *this)
{
  return ?SystemEnabled@CgClientSideEffectsSystem@@IEBA_NXZ(this);
}

/*
==============
CG_SpatialFX_GetOrigin
==============
*/

void __fastcall CG_SpatialFX_GetOrigin(const LocalClientNum_t localClientNum, unsigned int id, vec3_t *origin)
{
  ?CG_SpatialFX_GetOrigin@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, id, origin);
}

/*
==============
CgClientSideEffectsSystem::FreeMemory
==============
*/

void __fastcall CgClientSideEffectsSystem::FreeMemory(CgClientSideEffectsSystem *this)
{
  ?FreeMemory@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::UpdateEffects
==============
*/

void __fastcall CgClientSideEffectsSystem::UpdateEffects(CgClientSideEffectsSystem *this)
{
  ?UpdateEffects@CgClientSideEffectsSystem@@QEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::LoadEffects
==============
*/

void __fastcall CgClientSideEffectsSystem::LoadEffects(CgClientSideEffectsSystem *this, const char *mapname, const char *scriptDirectory)
{
  ?LoadEffects@CgClientSideEffectsSystem@@IEAAXPEBD0@Z(this, mapname, scriptDirectory);
}

/*
==============
CgClientSideEffectsSystem::Draw3D
==============
*/

void __fastcall CgClientSideEffectsSystem::Draw3D(CgClientSideEffectsSystem *this, const ScreenPlacement *const scrPlace)
{
  ?Draw3D@CgClientSideEffectsSystem@@QEAAXQEBUScreenPlacement@@@Z(this, scrPlace);
}

/*
==============
CG_SetIntervalSoundTimer
==============
*/

unsigned int __fastcall CG_SetIntervalSoundTimer(const ClientIntervalSoundDef *intervalSoundDef, const unsigned int currentTime, unsigned int *const randSeed)
{
  return ?CG_SetIntervalSoundTimer@@YAIPEBUClientIntervalSoundDef@@IQEAI@Z(intervalSoundDef, currentTime, randSeed);
}

/*
==============
CgClientSideEffectsSystem::StartEffects
==============
*/

void __fastcall CgClientSideEffectsSystem::StartEffects(CgClientSideEffectsSystem *this)
{
  ?StartEffects@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::GetRootLookAt
==============
*/

int __fastcall CgClientSideEffectsSystem::GetRootLookAt(CgClientSideEffectsSystem *this)
{
  return ?GetRootLookAt@CgClientSideEffectsSystem@@QEAAHXZ(this);
}

/*
==============
CgClientSideEffectsSystem::ClearMemory
==============
*/

void __fastcall CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem *this)
{
  ?ClearMemory@CgClientSideEffectsSystem@@IEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystem::Pending_Add
==============
*/

void __fastcall CgClientSideEffectsSystem::Pending_Add(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index, const int activateTime)
{
  ?Pending_Add@CgClientSideEffectsSystem@@IEAAXW4ClientSideEffectType@@IH@Z(this, type, index, activateTime);
}

/*
==============
CgClientSideEffectsSystem::ActiveFX_Get
==============
*/
__int64 CgClientSideEffectsSystem::ActiveFX_Get(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  __int64 v3; 
  bool v5; 

  v3 = index;
  switch ( type )
  {
    case 0:
    case 6:
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2846, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ClientSideEffectType");
      goto LABEL_14;
    case 1:
      if ( index >= cm.mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2850, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.oneshotEffectCount )", "index doesn't index cm.mapEnts->clientSideEffects.oneshotEffectCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.oneshotEffectCount) )
        __debugbreak();
      return this->m_activeOneshotFXHandles[v3];
    case 2:
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2855, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LoopSound does not use FX");
      goto LABEL_14;
    case 3:
      if ( index >= cm.mapEnts->clientSideEffects.exploderCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2859, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.exploderCount )", "index doesn't index cm.mapEnts->clientSideEffects.exploderCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.exploderCount) )
        __debugbreak();
      return this->m_activeExploderFXHandles[v3];
    case 4:
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2864, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IntervalSound does not use FX");
      goto LABEL_14;
    case 5:
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2868, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ReactiveEnt does use FX, but they are not stored because they can't be killed (unlike oneshot and exploder)");
LABEL_14:
      if ( v5 )
        __debugbreak();
      break;
    default:
      return 0i64;
  }
  return 0i64;
}

/*
==============
CgClientSideEffectsSystem::ActiveFX_Set
==============
*/
void CgClientSideEffectsSystem::ActiveFX_Set(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index, ParticleSystemHandle handle)
{
  __int64 v5; 
  bool v7; 

  v5 = index;
  switch ( type )
  {
    case 0:
    case 6:
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2812, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ClientSideEffectType");
      goto LABEL_14;
    case 1:
      if ( index >= cm.mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2816, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.oneshotEffectCount )", "index doesn't index cm.mapEnts->clientSideEffects.oneshotEffectCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.oneshotEffectCount) )
        __debugbreak();
      this->m_activeOneshotFXHandles[v5] = handle;
      return;
    case 2:
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2821, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LoopSound does not use FX");
      goto LABEL_14;
    case 3:
      if ( index >= cm.mapEnts->clientSideEffects.exploderCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2825, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.exploderCount )", "index doesn't index cm.mapEnts->clientSideEffects.exploderCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.exploderCount) )
        __debugbreak();
      this->m_activeExploderFXHandles[v5] = handle;
      return;
    case 4:
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2830, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IntervalSound does not use FX");
      goto LABEL_14;
    case 5:
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2834, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ReactiveEnt does use FX, but they are not stored because they can't be killed (unlike oneshot and exploder)");
LABEL_14:
      if ( v7 )
        __debugbreak();
      break;
    default:
      return;
  }
}

/*
==============
CgClientSideEffectsSystem::ActiveSounds_Add
==============
*/
bool CgClientSideEffectsSystem::ActiveSounds_Add(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  __int64 m_activeSoundCount; 
  bool result; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  ClientSideTypeData data_out; 

  m_activeSoundCount = this->m_activeSoundCount;
  if ( (unsigned int)m_activeSoundCount >= 0x400 )
  {
    CgClientSideEffectsSystem::GetTypeData(this, type, index, &data_out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+data_out.origin+8]
      vmovss  xmm3, dword ptr [rsp+78h+data_out.origin]
      vmovss  xmm1, dword ptr [rsp+78h+data_out.origin+4]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
    }
    v14 = 1024;
    __asm
    {
      vmovsd  [rsp+78h+var_50], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+78h+var_58], xmm1
    }
    Com_PrintError(1, "Unable to add %s at [%.2f, %.2f, %.2f]-> Too many client ent sounds.  Reduce concurrent sounds or increase MAX_CLIENT_ENT_SOUNDS (%d).\n", data_out.aliasName, _R9, v12, v13, v14);
    return 0;
  }
  else
  {
    this->m_activeSounds[m_activeSoundCount].type = type;
    this->m_activeSounds[this->m_activeSoundCount].index = index;
    result = 1;
    ++this->m_activeSoundCount;
  }
  return result;
}

/*
==============
CgClientSideEffectsSystem::ActiveSounds_Remove
==============
*/
void CgClientSideEffectsSystem::ActiveSounds_Remove(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  CgSoundSystem *SoundSystem; 
  unsigned int m_activeSoundCount; 
  unsigned __int16 v8; 
  __int64 v9; 

  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2657, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  m_activeSoundCount = this->m_activeSoundCount;
  v8 = 0;
  if ( m_activeSoundCount )
  {
    while ( this->m_activeSounds[v8].type != type || this->m_activeSounds[v8].index != index )
    {
      if ( ++v8 >= m_activeSoundCount )
        return;
    }
    v9 = m_activeSoundCount - 1;
    this->m_activeSounds[v8].type = this->m_activeSounds[v9].type;
    this->m_activeSounds[v8].index = this->m_activeSounds[v9].index;
    CgSoundSystem::StopSoundsOnEnt(SoundSystem, v8 + 2049);
    CgSoundSystem::StopSoundsOnEnt(SoundSystem, v9 + 2049);
    this->m_activeSounds[v9] = 0i64;
    --this->m_activeSoundCount;
  }
}

/*
==============
CgClientSideEffectsSystem::ActiveSounds_Update
==============
*/
void CgClientSideEffectsSystem::ActiveSounds_Update(CgClientSideEffectsSystem *this)
{
  ClientSideEffects *p_clientSideEffects; 
  CgSoundSystem *SoundSystem; 
  unsigned __int16 v4; 
  int v5; 
  int v6; 
  __int64 index; 
  ClientOneshotEffectDef *oneshotEffects; 
  __int64 v9; 
  SndAliasList *aliasList; 
  char *v11; 
  ClientLoopSoundDef *loopSounds; 
  __int64 v13; 
  SndAliasList *Alias; 
  const SndAliasList *v15; 
  const vec3_t *p_origin; 
  ClientExploderDef *exploders; 
  unsigned int *m_intervalSoundTimers; 
  __int64 v19; 
  int v20; 
  int v21; 
  SndAliasList *v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int pHoldrand; 
  unsigned int time; 

  time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  pHoldrand = Sys_Milliseconds();
  BG_srand(&pHoldrand);
  p_clientSideEffects = &cm.mapEnts->clientSideEffects;
  if ( cm.mapEnts == (MapEnts *)-768i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2694, ASSERT_TYPE_ASSERT, "(effectsData)", (const char *)&queryFormat, "effectsData") )
    __debugbreak();
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2697, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  v4 = 0;
  if ( this->m_activeSoundCount )
  {
    v5 = 0;
    do
    {
      v6 = v5 + 2049;
      index = this->m_activeSounds[v4].index;
      switch ( this->m_activeSounds[v4].type )
      {
        case 0:
        case 6:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2709, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ClientSideEffectType") )
            goto LABEL_11;
          break;
        case 1:
          if ( (unsigned int)index >= p_clientSideEffects->oneshotEffectCount )
          {
            LODWORD(v24) = p_clientSideEffects->oneshotEffectCount;
            LODWORD(v23) = this->m_activeSounds[v4].index;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2714, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( effectsData->oneshotEffectCount )", "typeIndex doesn't index effectsData->oneshotEffectCount\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          oneshotEffects = p_clientSideEffects->oneshotEffects;
          v9 = 56 * index;
          aliasList = oneshotEffects[index].aliasList;
          if ( (aliasList || (aliasList = SND_TryFindAlias(*(const char **)((char *)&oneshotEffects->effectSound.name + v9))) != NULL) && aliasList->head && CG_IsSoundAliasInRange((const vec3_t *)((char *)&p_clientSideEffects->oneshotEffects->origin + v9), aliasList) )
          {
            v11 = (char *)p_clientSideEffects->oneshotEffects;
            goto LABEL_20;
          }
          break;
        case 2:
          if ( (unsigned int)index >= p_clientSideEffects->loopSoundCount )
          {
            LODWORD(v24) = p_clientSideEffects->loopSoundCount;
            LODWORD(v23) = this->m_activeSounds[v4].index;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2726, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( effectsData->loopSoundCount )", "typeIndex doesn't index effectsData->loopSoundCount\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          loopSounds = p_clientSideEffects->loopSounds;
          v13 = index;
          Alias = loopSounds[index].aliasList;
          if ( (Alias || (Alias = SND_TryFindAlias(loopSounds[v13].effectSound.name)) != NULL) && Alias->head && (cm.mapEnts->clientSideEffects.soundsSpatialTree && !CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, index + p_clientSideEffects->intervalSoundCount) || CG_IsSoundAliasInRange(&p_clientSideEffects->loopSounds[v13].origin, Alias)) )
          {
            v15 = Alias;
            p_origin = &p_clientSideEffects->loopSounds[v13].origin;
            goto LABEL_54;
          }
          break;
        case 3:
          if ( (unsigned int)index >= p_clientSideEffects->exploderCount )
          {
            LODWORD(v24) = p_clientSideEffects->exploderCount;
            LODWORD(v23) = this->m_activeSounds[v4].index;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2740, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( effectsData->exploderCount )", "typeIndex doesn't index effectsData->exploderCount\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          exploders = p_clientSideEffects->exploders;
          v9 = index << 6;
          aliasList = exploders[index].aliasList;
          if ( (aliasList || (aliasList = SND_TryFindAlias(*(const char **)((char *)&exploders->effectSound.name + v9))) != NULL) && aliasList->head && CG_IsSoundAliasInRange((const vec3_t *)((char *)&p_clientSideEffects->exploders->origin + v9), aliasList) )
          {
            v11 = (char *)p_clientSideEffects->exploders;
LABEL_20:
            CgSoundSystem::PlaySoundAliasAsync(SoundSystem, v6, (const vec3_t *)&v11[v9], aliasList);
          }
          break;
        case 4:
          if ( (unsigned int)index >= p_clientSideEffects->intervalSoundCount )
          {
            LODWORD(v24) = p_clientSideEffects->intervalSoundCount;
            LODWORD(v23) = this->m_activeSounds[v4].index;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2752, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( effectsData->intervalSoundCount )", "typeIndex doesn't index effectsData->intervalSoundCount\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          m_intervalSoundTimers = this->m_intervalSoundTimers;
          v19 = (__int64)&p_clientSideEffects->intervalSounds[index];
          if ( !m_intervalSoundTimers[index] )
          {
            v20 = BG_irand(*(_DWORD *)(v19 + 40), *(_DWORD *)(v19 + 44), &pHoldrand);
            this->m_intervalSoundTimers[index] = time + v20;
            m_intervalSoundTimers = this->m_intervalSoundTimers;
          }
          if ( m_intervalSoundTimers[index] <= time )
          {
            v21 = BG_irand(*(_DWORD *)(v19 + 40), *(_DWORD *)(v19 + 44), &pHoldrand);
            this->m_intervalSoundTimers[index] = time + v21;
            v22 = *(SndAliasList **)(v19 + 32);
            if ( (v22 || (v22 = SND_TryFindAlias(*(const char **)(v19 + 24))) != NULL) && v22->head && (cm.mapEnts->clientSideEffects.soundsSpatialTree && !CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, index) || CG_IsSoundAliasInRange((const vec3_t *)v19, v22)) )
            {
              v15 = v22;
              p_origin = (const vec3_t *)v19;
LABEL_54:
              CgSoundSystem::PlaySoundAliasAsync(SoundSystem, v6, p_origin, v15);
            }
          }
          break;
        case 5:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2776, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ReactiveEnt cannot have a looping sound") )
LABEL_11:
            __debugbreak();
          break;
        default:
          break;
      }
      v5 = ++v4;
    }
    while ( v4 < this->m_activeSoundCount );
  }
}

/*
==============
CgClientSideEffectsSystem::AddSounds
==============
*/
void CgClientSideEffectsSystem::AddSounds(CgClientSideEffectsSystem *this)
{
  int v4; 
  bool v5; 
  LocalClientNum_t m_localClientNum; 
  int *v7; 
  const vec3_t *v8; 
  __int64 v9; 
  CgSoundSystem *SoundSystem; 
  unsigned int time; 
  int v12; 
  ClientEntSound *v13; 
  int v14; 
  int *p_delayMinMS; 
  __int64 v16; 
  char v20; 
  char v21; 
  unsigned int v22; 
  CgSoundSystem *v23; 
  unsigned int pHoldrand; 
  vec3_t out_pos; 

  if ( CgClientSideEffectsSystem::SystemEnabled(this) && !CG_CreateFx_HasBeenEnabled() )
  {
    if ( cm.mapEnts->createFxEffectTotal )
    {
      if ( CgClientSideEffectsSystem::GetViewPos(this, &out_pos) && cm.mapEnts->clientSideEffects.soundsSpatialTree )
      {
        __asm { vmovss  xmm3, cs:__real@44bb8000; viewRadius }
        ActiveSet::Update(&this->m_spatialSound, this->m_localClientNum, &out_pos, *(float *)&_XMM3, CG_SpatialSound_IsValid, CG_SpatialSound_Activate, CG_SpatialSound_Deactivate, CG_SpatialSound_GetOrigin, (float (__fastcall *)(const LocalClientNum_t, unsigned int))CG_SpatialSound_GetRadius, cm.mapEnts->clientSideEffects.soundsSpatialTree);
      }
      CgClientSideEffectsSystem::ActiveSounds_Update(this);
    }
    else
    {
      v4 = 0;
      v5 = 0;
      m_localClientNum = this->m_localClientNum;
      if ( s_bPendingExploderSounds )
      {
        v7 = (int *)&unk_150EC7748;
        v8 = &s_pendingExploderSounds;
        v9 = 64i64;
        do
        {
          if ( *v7 > 0 )
          {
            if ( CG_Utils_TimeIsInThePast(m_localClientNum, *v7) )
            {
              SoundSystem = CgSoundSystem::GetSoundSystem(m_localClientNum);
              CgSoundSystem::PlaySoundAliasAsync(SoundSystem, *(v7 - 3), v8, *((const SndAliasList **)v7 - 1));
              *v7 = 0;
            }
            else
            {
              v5 = 1;
            }
          }
          v8 = (const vec3_t *)((char *)v8 + 32);
          v7 += 8;
          --v9;
        }
        while ( v9 );
        m_localClientNum = this->m_localClientNum;
        s_bPendingExploderSounds = v5;
      }
      time = CG_GetLocalClientGlobals(m_localClientNum)->time;
      pHoldrand = Sys_Milliseconds();
      BG_srand(&pHoldrand);
      v12 = s_clientEntSoundCount;
      if ( s_clientEntSoundCount > 0 )
      {
        v13 = s_clientEntSounds;
        do
        {
          if ( v13->active )
          {
            CG_UpdateClientSideSound(m_localClientNum, v4, v13);
            v12 = s_clientEntSoundCount;
          }
          ++v4;
          ++v13;
        }
        while ( v4 < v12 );
      }
      if ( s_clientEntIntervalSoundCount > 0 )
      {
        v14 = 3201;
        __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
        p_delayMinMS = &s_clientEntIntervalSounds[0].delayMinMS;
        do
        {
          v16 = *((_QWORD *)p_delayMinMS - 1);
          if ( v16 )
          {
            if ( *(_QWORD *)(v16 + 16) )
            {
              __asm { vmovss  xmm6, dword ptr [rcx+68h] }
              *(double *)&_XMM0 = SND_DistSqToNearestListener((const vec3_t *)(p_delayMinMS - 8));
              __asm
              {
                vmulss  xmm1, xmm6, xmm6
                vcomiss xmm0, xmm1
              }
              if ( v20 | v21 )
              {
                v22 = p_delayMinMS[2];
                if ( v22 )
                {
                  if ( time >= v22 )
                  {
                    p_delayMinMS[2] = time + BG_irand(*p_delayMinMS, p_delayMinMS[1], &pHoldrand);
                    if ( v14 >= 505571 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1990, ASSERT_TYPE_ASSERT, "(soundClientEntIndex < ( ( ( 2048 ) ) + ( 1 ) + ( 1024 ) + ( 128 ) + ( 128 ) + 1024 + ( 2 ) + ( 32 ) + ( 1024 ) + ( 32 ) + ( 128 ) + ( 500000 ) ))", (const char *)&queryFormat, "soundClientEntIndex < MAX_SOUND_ENTITIES") )
                      __debugbreak();
                    v23 = CgSoundSystem::GetSoundSystem(m_localClientNum);
                    CgSoundSystem::PlaySoundAliasAsync(v23, v14, (const vec3_t *)(p_delayMinMS - 8), *((const SndAliasList **)p_delayMinMS - 1));
                  }
                }
                else
                {
                  p_delayMinMS[2] = time + BG_irand(*p_delayMinMS, p_delayMinMS[1], &pHoldrand);
                }
              }
            }
          }
          ++v14;
          p_delayMinMS += 12;
        }
        while ( v14 - 3201 < s_clientEntIntervalSoundCount );
        __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::AddSpatialSoundGlobal
==============
*/
void CgClientSideEffectsSystem::AddSpatialSoundGlobal(CgClientSideEffectsSystem *this, const unsigned int id)
{
  __int64 v2; 
  unsigned int *m_spatialSoundGlobalBits; 

  v2 = (int)id;
  if ( !this->m_spatialSoundGlobalBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2786, ASSERT_TYPE_ASSERT, "(m_spatialSoundGlobalBits)", (const char *)&queryFormat, "m_spatialSoundGlobalBits") )
    __debugbreak();
  if ( (unsigned int)v2 >= cm.mapEnts->clientSideEffects.intervalSoundCount + cm.mapEnts->clientSideEffects.loopSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2787, ASSERT_TYPE_ASSERT, "(id < cm.mapEnts->clientSideEffects.loopSoundCount + cm.mapEnts->clientSideEffects.intervalSoundCount)", (const char *)&queryFormat, "id < cm.mapEnts->clientSideEffects.loopSoundCount + cm.mapEnts->clientSideEffects.intervalSoundCount") )
    __debugbreak();
  m_spatialSoundGlobalBits = this->m_spatialSoundGlobalBits;
  if ( !m_spatialSoundGlobalBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  m_spatialSoundGlobalBits[v2 >> 5] |= 1 << (v2 & 0x1F);
}

/*
==============
CgClientSideEffectsSystem::AllocateMemory
==============
*/
void CgClientSideEffectsSystem::AllocateMemory(CgClientSideEffectsSystem *this, HunkUser *hunkUser)
{
  unsigned int *v4; 
  unsigned int oneshotEffectCount; 
  unsigned int *v6; 
  unsigned int exploderCount; 
  unsigned int *v8; 
  unsigned int intervalSoundCount; 
  unsigned int *v10; 
  unsigned int reactiveEntCount; 
  unsigned __int64 v12; 
  unsigned int *v13; 
  unsigned int *m_activeOneshotFXHandles; 
  MapEnts *mapEnts; 
  unsigned int v16; 
  unsigned int *m_activeExploderFXHandles; 
  unsigned int v18; 
  unsigned int *m_intervalSoundTimers; 
  unsigned int v20; 
  unsigned int *m_reactiveEntTimers; 
  unsigned int v22; 
  unsigned int *m_spatialSoundGlobalBits; 
  unsigned int m_spatialSoundGlobalBitSize; 
  unsigned int v25; 
  unsigned int v26; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3832, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3833, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS )") )
    __debugbreak();
  ActiveSet::Allocate(&this->m_spatialFX, hunkUser, cm.mapEnts->clientSideEffects.oneshotEffectCount, 0);
  ActiveSet::Allocate(&this->m_spatialSound, hunkUser, cm.mapEnts->clientSideEffects.intervalSoundCount + cm.mapEnts->clientSideEffects.loopSoundCount, 0);
  v4 = NULL;
  oneshotEffectCount = cm.mapEnts->clientSideEffects.oneshotEffectCount;
  if ( oneshotEffectCount )
    v6 = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * oneshotEffectCount, 4ui64, "CG_CSE_AllocateUintArray");
  else
    v6 = NULL;
  this->m_activeOneshotFXHandles = v6;
  exploderCount = cm.mapEnts->clientSideEffects.exploderCount;
  if ( exploderCount )
    v8 = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * exploderCount, 4ui64, "CG_CSE_AllocateUintArray");
  else
    v8 = NULL;
  this->m_activeExploderFXHandles = v8;
  intervalSoundCount = cm.mapEnts->clientSideEffects.intervalSoundCount;
  if ( intervalSoundCount )
    v10 = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * intervalSoundCount, 4ui64, "CG_CSE_AllocateUintArray");
  else
    v10 = NULL;
  this->m_intervalSoundTimers = v10;
  reactiveEntCount = cm.mapEnts->clientSideEffects.reactiveEntCount;
  if ( reactiveEntCount )
    v4 = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, 4i64 * reactiveEntCount, 4ui64, "CG_CSE_AllocateUintArray");
  this->m_reactiveEntTimers = v4;
  v12 = 4i64 * (((cm.mapEnts->clientSideEffects.intervalSoundCount + cm.mapEnts->clientSideEffects.loopSoundCount) >> 5) + 1);
  this->m_spatialSoundGlobalBitSize = ((cm.mapEnts->clientSideEffects.intervalSoundCount + cm.mapEnts->clientSideEffects.loopSoundCount) >> 5) + 1;
  v13 = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, v12, 4ui64, "CG_CSE_AllocateUintArray");
  m_activeOneshotFXHandles = this->m_activeOneshotFXHandles;
  this->m_spatialSoundGlobalBits = v13;
  mapEnts = cm.mapEnts;
  v16 = cm.mapEnts->clientSideEffects.oneshotEffectCount;
  if ( m_activeOneshotFXHandles && v16 )
  {
    memset_0(m_activeOneshotFXHandles, 0, 4i64 * v16);
    mapEnts = cm.mapEnts;
  }
  m_activeExploderFXHandles = this->m_activeExploderFXHandles;
  v18 = mapEnts->clientSideEffects.exploderCount;
  if ( m_activeExploderFXHandles && v18 )
  {
    memset_0(m_activeExploderFXHandles, 0, 4i64 * v18);
    mapEnts = cm.mapEnts;
  }
  m_intervalSoundTimers = this->m_intervalSoundTimers;
  v20 = mapEnts->clientSideEffects.intervalSoundCount;
  if ( m_intervalSoundTimers && v20 )
  {
    memset_0(m_intervalSoundTimers, 0, 4i64 * v20);
    mapEnts = cm.mapEnts;
  }
  m_reactiveEntTimers = this->m_reactiveEntTimers;
  v22 = mapEnts->clientSideEffects.reactiveEntCount;
  if ( m_reactiveEntTimers && v22 )
    memset_0(m_reactiveEntTimers, 0, 4i64 * v22);
  m_spatialSoundGlobalBits = this->m_spatialSoundGlobalBits;
  if ( m_spatialSoundGlobalBits )
  {
    m_spatialSoundGlobalBitSize = this->m_spatialSoundGlobalBitSize;
    if ( m_spatialSoundGlobalBitSize )
      memset_0(m_spatialSoundGlobalBits, 0, 4i64 * m_spatialSoundGlobalBitSize);
  }
  v25 = ActiveSet::BytesAllocated(&this->m_spatialFX);
  v26 = ActiveSet::BytesAllocated(&this->m_spatialSound);
  Com_DPrintf(14, "CgClientSideEffectsSystem::AllocateMemory allocated %d bytes.\n", this->m_spatialSoundGlobalBitSize + (cm.mapEnts->clientSideEffects.intervalSoundCount >> 2) + (cm.mapEnts->clientSideEffects.reactiveEntCount >> 2) + v26 + v25 + (cm.mapEnts->clientSideEffects.exploderCount >> 2) + (cm.mapEnts->clientSideEffects.oneshotEffectCount >> 2));
}

/*
==============
CG_AddClientEntSound
==============
*/
__int64 CG_AddClientEntSound(const vec3_t *origin, const char *soundalias, const vec3_t *angles, bool initiallyActive)
{
  const vec3_t *v6; 
  __int64 result; 
  __int64 v15; 
  SndAliasList *Alias; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 

  v6 = origin;
  if ( s_clientEntSoundCount == 1024 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vmovss  xmm3, dword ptr [rcx]
      vmovss  xmm1, dword ptr [rcx+4]
    }
    v21 = s_clientEntSoundCount;
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+48h+var_20], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+48h+var_28], xmm1
    }
    Com_PrintError(1, "Unable to add %s at [%.2f, %.2f, %.2f]-> Too many client ent sounds.  Reduce sounds or increase MAX_CLIENT_ENT_SOUNDS (%d).\n", soundalias, _R9, v19, v20, v21);
    return 0xFFFFFFFFi64;
  }
  else
  {
    v15 = s_clientEntSoundCount;
    s_clientEntSounds[v15].origin.v[0] = v6->v[0];
    s_clientEntSounds[v15].origin.v[1] = v6->v[1];
    s_clientEntSounds[v15].origin.v[2] = v6->v[2];
    Alias = SND_FindAlias(soundalias);
    v17 = s_clientEntSoundCount;
    v18 = s_clientEntSoundCount;
    s_clientEntSounds[v18].aliasList = Alias;
    result = v17;
    s_clientEntSounds[v18].angles.v[0] = angles->v[0];
    s_clientEntSounds[v18].angles.v[1] = angles->v[1];
    s_clientEntSounds[v18].angles.v[2] = angles->v[2];
    s_clientEntSounds[v18].active = initiallyActive;
    s_clientEntSoundCount = v17 + 1;
  }
  return result;
}

/*
==============
CG_AddPairToMap
==============
*/
void CG_AddPairToMap(const char *name, const char *filename, EffectDefMap *effectDefMap, int *effectDefMapEntries)
{
  const char *v4; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  const char *v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  EffectDefMap *v24; 

  v4 = "fx/";
  v9 = 3i64;
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v10 = (unsigned __int8)v4[filename - "fx/"];
    v11 = v9;
    v12 = *(unsigned __int8 *)v4++;
    --v9;
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
        v15 = "vfx/";
        v16 = 4i64;
        if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v17 = (unsigned __int8)v15[filename - "vfx/"];
          v18 = v16;
          v19 = *(unsigned __int8 *)v15++;
          --v16;
          if ( !v18 )
            goto LABEL_27;
          if ( v17 != v19 )
          {
            v20 = v17 + 32;
            if ( (unsigned int)(v17 - 65) > 0x19 )
              v20 = v17;
            v17 = v20;
            v21 = v19 + 32;
            if ( (unsigned int)(v19 - 65) > 0x19 )
              v21 = v19;
            if ( v17 != v21 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1596, ASSERT_TYPE_ASSERT, "( ( !I_strnicmp( filename,\"fx/\",3) || !I_strnicmp( filename, \"vfx/\",4 ) ) )", "( filename ) = %s", filename) )
                __debugbreak();
              goto LABEL_27;
            }
          }
          if ( !v17 )
            goto LABEL_27;
        }
      }
    }
  }
  while ( v10 );
LABEL_27:
  v22 = *effectDefMapEntries;
  v23 = 0;
  if ( *effectDefMapEntries <= 0 )
  {
LABEL_30:
    if ( v22 == 256 )
    {
      Com_PrintError(1, "Failed to added mapping from '%s' to '%s'.  Increase MAX_CLIENT_EFFECT_DEFS.\n", name, filename);
    }
    else
    {
      Core_strcpy(effectDefMap[v22].name, 0x40ui64, name);
      Core_strcpy(effectDefMap[*effectDefMapEntries].filename, 0x100ui64, filename);
      ++*effectDefMapEntries;
    }
  }
  else
  {
    while ( 1 )
    {
      v24 = &effectDefMap[v23];
      if ( !I_strncmp(v24->name, name, 0x7FFFFFFFui64) )
        break;
      v22 = *effectDefMapEntries;
      if ( ++v23 >= *effectDefMapEntries )
        goto LABEL_30;
    }
    if ( I_strncmp(v24->filename, filename, 0x7FFFFFFFui64) )
      Com_PrintError(1, "Tried to remap '%s' to '%s' previously mapped to '%s'\n", v24->name, v24->filename, filename);
  }
}

/*
==============
CG_ClearPendingExploders
==============
*/
void CG_ClearPendingExploders(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  ClientSideEffectsData *p_cseData; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_cseData = &LocalClientGlobals->cseData;
  if ( LocalClientGlobals == (cg_t *)-753384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 466, ASSERT_TYPE_ASSERT, "(cseData)", (const char *)&queryFormat, "cseData") )
    __debugbreak();
  memset_0(p_cseData->pendingExploders, 0, sizeof(p_cseData->pendingExploders));
  p_cseData->bPendingExploders = 0;
}

/*
==============
CG_CopySoundEntityOrientation
==============
*/
void CG_CopySoundEntityOrientation(int clientSoundEntIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  __int64 v3; 
  vec3_t *p_angles; 
  int v10; 
  int v13; 

  v3 = clientSoundEntIndex;
  _RDI = origin_out;
  if ( clientSoundEntIndex >= 1024 )
  {
    v10 = clientSoundEntIndex - 1024;
    if ( clientSoundEntIndex - 1024 >= 128 )
    {
      v13 = clientSoundEntIndex - 1152;
      if ( (unsigned int)(clientSoundEntIndex - 1152) >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1747, ASSERT_TYPE_ASSERT, "(unsigned)( clientSoundEntIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientEntIntervalSounds ) ) + 0 ) )", "clientSoundEntIndex doesn't index ARRAY_COUNT( s_clientEntIntervalSounds )\n\t%i not in [0, %i)", v13, 128) )
        __debugbreak();
      _R8 = 0x140000000ui64;
      _RDX = 6i64 * v13;
      _RDI->v[0] = s_clientEntIntervalSounds[v13].origin.v[0];
      _RDI->v[1] = s_clientEntIntervalSounds[v13].origin.v[1];
      p_angles = &s_clientEntIntervalSounds[v13].angles;
      __asm { vmovss  xmm0, dword ptr (rva s_clientEntIntervalSounds.origin+8)[r8+rdx*8] }
    }
    else
    {
      if ( (unsigned int)v10 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1740, ASSERT_TYPE_ASSERT, "(unsigned)( clientSoundEntIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientEntReactiveSounds ) ) + 0 ) )", "clientSoundEntIndex doesn't index ARRAY_COUNT( s_clientEntReactiveSounds )\n\t%i not in [0, %i)", v10, 128) )
        __debugbreak();
      _R8 = 0x140000000ui64;
      _RCX = 5i64 * v10;
      _RDI->v[0] = s_clientEntReactiveSounds[v10].origin.v[0];
      _RDI->v[1] = s_clientEntReactiveSounds[v10].origin.v[1];
      p_angles = &s_clientEntReactiveSounds[v10].angles;
      __asm { vmovss  xmm0, dword ptr (rva s_clientEntReactiveSounds.origin+8)[r8+rcx*8] }
    }
  }
  else
  {
    if ( (unsigned int)clientSoundEntIndex >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1730, ASSERT_TYPE_ASSERT, "(unsigned)( clientSoundEntIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientEntSounds ) ) + 0 ) )", "clientSoundEntIndex doesn't index ARRAY_COUNT( s_clientEntSounds )\n\t%i not in [0, %i)", clientSoundEntIndex, 1024) )
      __debugbreak();
    _RCX = 5 * v3;
    _R8 = 0x140000000ui64;
    _RDI->v[0] = s_clientEntSounds[v3].origin.v[0];
    _RDI->v[1] = s_clientEntSounds[v3].origin.v[1];
    p_angles = &s_clientEntSounds[v3].angles;
    __asm { vmovss  xmm0, dword ptr (rva s_clientEntSounds.origin+8)[r8+rcx*8] }
  }
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  AnglesToAxis(p_angles, axis_out);
}

/*
==============
CG_HaveMapEntsEffects
==============
*/
bool CG_HaveMapEntsEffects()
{
  return cm.mapEnts->createFxEffectTotal != 0;
}

/*
==============
CG_HaveMapEntsEffectsMultipleRoots
==============
*/
bool CG_HaveMapEntsEffectsMultipleRoots()
{
  const char *v1; 

  if ( cm.mapEnts->clientSideEffects.rootCount > 1 )
    return 1;
  if ( cm.mapEnts->clientSideEffects.rootCount == 1 )
  {
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    v1 = SL_ConvertToStringSafe(cm.mapEnts->clientSideEffects.roots->path);
    if ( v1 )
    {
      if ( *v1 && cls.m_activeGameMapName[0] )
        return I_strstr(v1, cls.m_activeGameMapName) == NULL;
    }
  }
  return 0;
}

/*
==============
CG_InitClientSideFx
==============
*/
void CG_InitClientSideFx(LocalClientNum_t localClientNum, const char *mapname, const char *scriptDirectory)
{
  const dvar_t *v6; 
  const char *RawFile; 
  const RawFile *v8; 
  unsigned __int64 RawFileLen; 
  char *v10; 
  const RawFile *v11; 
  int v12; 
  char *v13; 
  __int64 v14; 
  int effectDefMapEntries; 
  Mem_LargeLocal v16; 
  __int64 v17; 
  EffectDefMap effectDefMap; 
  char dest[256]; 

  v17 = -2i64;
  v6 = DVARBOOL_clientSideEffects_noScriptParse;
  if ( !DVARBOOL_clientSideEffects_noScriptParse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "clientSideEffects_noScriptParse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
  {
    if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
    {
      if ( s_clientEntSoundCount )
      {
        LODWORD(v14) = s_clientEntSoundCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2203, ASSERT_TYPE_ASSERT, "( ( !s_clientEntSoundCount ) )", "( s_clientEntSoundCount ) = %i", v14) )
          __debugbreak();
      }
    }
    memset_0(&s_clientExploders, 0, sizeof(s_clientExploders));
    memset_0(&s_pendingExploderSounds, 0, 0x800ui64);
    s_bPendingExploderSounds = 0;
    effectDefMapEntries = 0;
    Com_sprintf(dest, 0x100ui64, "%s/%s/%s_fx.gsc", scriptDirectory, mapname, mapname);
    Mem_LargeLocal::Mem_LargeLocal(&v16, 0x18000ui64, "max_raw_buf buf");
    RawFile = DB_ReadRawFile(dest, (char *)v16.m_ptr, 98304);
    if ( RawFile )
      CG_ParseClientEffectMapping(RawFile, &effectDefMap, &effectDefMapEntries);
    else
      Com_PrintError(1, "file not found: %s\n", dest);
    Mem_LargeLocal::~Mem_LargeLocal(&v16);
    Com_sprintf(dest, 0x100ui64, "%s/%s/gen/%s_fx.gsc", scriptDirectory, mapname, mapname);
    v8 = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
    if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
    {
      Com_PrintError(1, "file not found: %s\n", dest);
    }
    else
    {
      RawFileLen = DB_GetRawFileLen(v8);
      v10 = (char *)Mem_Virtual_Alloc(RawFileLen, "CG_LoadClientEffects", TRACK_MISC);
      DB_GetRawBuffer(v8, v10, RawFileLen);
      CG_ParseClientEffects(localClientNum, v10, &effectDefMap, &effectDefMapEntries);
      Mem_Virtual_Free(v10);
    }
    Com_sprintf(dest, 0x100ui64, "%s/%s/gen/%s_sound.gsc", scriptDirectory, mapname, mapname);
    v11 = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
    if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
    {
      Com_PrintError(1, "file not found: %s\n", dest);
    }
    else
    {
      v12 = DB_GetRawFileLen(v11);
      v13 = (char *)Mem_Virtual_Alloc(v12, "CG_LoadClientEffects", TRACK_MISC);
      DB_GetRawBuffer(v11, v13, v12);
      CG_ParseClientEffects(localClientNum, v13, &effectDefMap, &effectDefMapEntries);
      Mem_Virtual_Free(v13);
    }
  }
}

/*
==============
CG_InsertClientReactiveEntSort
==============
*/
void CG_InsertClientReactiveEntSort(ClientSideEffectsData *cseData, ClientReactiveEntDef *const reactiveEntDef, const int index, const int currentTime, const float distToPlayer, const float timeDelay)
{
  int v10; 
  int v14; 
  int v16; 
  __int128 v20; 
  ClientReactiveEntDef *v21; 

  __asm
  {
    vmovss  xmm0, [rsp+28h+timeDelay]
    vmulss  xmm1, xmm0, cs:__real@c47a0000
    vmovss  xmm2, [rsp+28h+distToPlayer]
    vcvttss2si eax, xmm1
  }
  DWORD1(v20) = index;
  v10 = 0;
  v21 = reactiveEntDef;
  _R10 = cseData;
  DWORD2(v20) = currentTime - _EAX;
  _RCX = cseData->reactiveEntDefsActive;
  BYTE12(v20) = 1;
  __asm
  {
    vmovss  dword ptr [rsp+28h+var_28], xmm2
    vxorps  xmm1, xmm1, xmm1
  }
  v14 = 0;
  do
  {
    if ( !_RCX->inUse )
    {
      _RCX = 3i64 * v14 + 36;
      goto LABEL_9;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vcomiss xmm0, xmm1
    }
    v16 = v14;
    if ( !_RCX->inUse )
      v16 = v10;
    ++v14;
    ++_RCX;
    v10 = v16;
    __asm { vmaxss  xmm1, xmm0, xmm1 }
  }
  while ( v14 < 12 );
  __asm { vcomiss xmm1, xmm2 }
  if ( (unsigned int)v14 <= 0xC )
    return;
  _RCX = 3i64 * v16 + 36;
LABEL_9:
  __asm
  {
    vmovups xmm0, [rsp+28h+var_28]
    vmovsd  xmm1, [rsp+28h+var_18]
    vmovups xmmword ptr [r10+rcx*8], xmm0
    vmovsd  qword ptr [r10+rcx*8+10h], xmm1
  }
}

/*
==============
CG_IsSoundAliasInRange
==============
*/
bool CG_IsSoundAliasInRange(const vec3_t *origin, const SndAliasList *list)
{
  char v10; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( (!list || !list->head) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 92, ASSERT_TYPE_ASSERT, "(list && list->head)", (const char *)&queryFormat, "list && list->head") )
    __debugbreak();
  _RAX = list->head;
  __asm { vmovss  xmm6, dword ptr [rax+68h] }
  *(double *)&_XMM0 = SND_DistSqToNearestListener(origin);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vcomiss xmm1, xmm0
  }
  return !v10;
}

/*
==============
CG_ParseClientEffectMapping
==============
*/
void CG_ParseClientEffectMapping(const char *buffer, EffectDefMap *effectDefMap, int *effectDefMapEntries)
{
  char v6; 
  __int64 v7; 
  signed __int64 v8; 
  const char *v9; 
  char i; 
  char v11; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  const char *v18; 
  char v19; 
  const char *v20; 
  char v21; 
  __int64 v22; 
  char *j; 
  char v24; 
  const char *v26; 
  char v27; 
  __int64 v28; 
  char *k; 
  char v30; 
  const char *v32; 
  char v33; 
  const char *v34; 
  char v35; 
  __int64 v36; 
  char *m; 
  char v38; 
  const char *v40; 
  char v41; 
  const char *v42; 
  char n; 
  char v44; 
  const char *v45; 
  char *v46; 
  char text[64]; 
  char filename[256]; 
  char dest[128]; 
  char v50[128]; 
  char v51[128]; 
  char v52[128]; 

  *effectDefMapEntries = 0;
  while ( 1 )
  {
    v6 = *buffer;
    if ( *buffer < 9u || (unsigned __int8)v6 > 0x20u )
      break;
    if ( !v6 )
      return;
    ++buffer;
  }
  while ( v6 )
  {
    v7 = 14i64;
    v8 = "level._effect[" - buffer;
    v9 = buffer;
    for ( i = v6; ; i = *v9 )
    {
      v11 = (v9++)[v8];
      if ( !v7-- )
        break;
      if ( v11 != i )
      {
        for ( ; v6 != 10; v6 = *++buffer )
        {
          if ( v6 == 13 )
            break;
          if ( !v6 )
            break;
        }
        while ( *buffer >= 9u && *buffer <= 0x20u )
          ++buffer;
        goto LABEL_79;
      }
      if ( !v11 )
        break;
    }
    v13 = 14i64;
    v14 = buffer;
    do
    {
      v15 = v14[v8];
      v16 = v13;
      v17 = *v14++;
      --v13;
      if ( !v16 )
        break;
      if ( v15 != v17 )
      {
        Core_strcpy_truncate(dest, 0x80ui64, buffer);
        v45 = "level._effect[";
        v46 = dest;
LABEL_86:
        Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", v46, v45);
        return;
      }
    }
    while ( v15 );
    v18 = buffer + 14;
    if ( buffer == (const char *)-14i64 )
      return;
    while ( 1 )
    {
      v19 = *v18;
      if ( *v18 < 9u || (unsigned __int8)v19 > 0x20u || !v19 )
        break;
      ++v18;
    }
    v20 = CG_ParseString(v18, text, 0x40u);
    if ( !v20 )
      return;
    while ( 1 )
    {
      v21 = *v20;
      if ( *v20 < 9u || (unsigned __int8)v21 > 0x20u || !v21 )
        break;
      ++v20;
    }
    v22 = 1i64;
    for ( j = (char *)v20; ; v21 = *j )
    {
      v24 = (j++)["]" - v20];
      if ( !v22-- )
        break;
      if ( v24 != v21 )
      {
        Core_strcpy_truncate(dest, 0x80ui64, v20);
        v45 = "]";
        v46 = dest;
        goto LABEL_86;
      }
      if ( !v24 )
        break;
    }
    v26 = v20 + 1;
    if ( !v26 )
      return;
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 < 9u || (unsigned __int8)v27 > 0x20u || !v27 )
        break;
      ++v26;
    }
    v28 = 1i64;
    for ( k = (char *)v26; ; v27 = *k )
    {
      v30 = (k++)["=" - v26];
      if ( !v28-- )
        break;
      if ( v30 != v27 )
      {
        Core_strcpy_truncate(v50, 0x80ui64, v26);
        v45 = "=";
        v46 = v50;
        goto LABEL_86;
      }
      if ( !v30 )
        break;
    }
    v32 = v26 + 1;
    if ( v26 == (const char *)-1i64 )
      return;
    while ( 1 )
    {
      v33 = *v32;
      if ( *v32 < 9u || (unsigned __int8)v33 > 0x20u || !v33 )
        break;
      ++v32;
    }
    if ( I_strnicmp("LoadFX", v32, 6ui64) )
    {
      Core_strcpy_truncate(v52, 0x80ui64, v32);
      v45 = "LoadFX";
      v46 = v52;
      goto LABEL_86;
    }
    v34 = v32 + 6;
    if ( v32 == (const char *)-6i64 )
      return;
    while ( 1 )
    {
      v35 = *v34;
      if ( *v34 < 9u || (unsigned __int8)v35 > 0x20u || !v35 )
        break;
      ++v34;
    }
    v36 = 1i64;
    for ( m = (char *)v34; ; v35 = *m )
    {
      v38 = (m++)["(" - v34];
      if ( !v36-- )
        break;
      if ( v38 != v35 )
      {
        Core_strcpy_truncate(v51, 0x80ui64, v34);
        v45 = "(";
        v46 = v51;
        goto LABEL_86;
      }
      if ( !v38 )
        break;
    }
    v40 = v34 + 1;
    if ( v34 == (const char *)-1i64 )
      return;
    while ( 1 )
    {
      v41 = *v40;
      if ( *v40 < 9u || (unsigned __int8)v41 > 0x20u || !v41 )
        break;
      ++v40;
    }
    v42 = CG_ParseString(v40, filename, 0x100u);
    buffer = v42;
    if ( !v42 )
      return;
    for ( n = *v42; n != 10; n = *++buffer )
    {
      if ( n == 13 )
        break;
      if ( !n )
        break;
    }
    while ( 1 )
    {
      v44 = *buffer;
      if ( *buffer < 9u || (unsigned __int8)v44 > 0x20u || !v44 )
        break;
      ++buffer;
    }
    CG_AddPairToMap(text, filename, effectDefMap, effectDefMapEntries);
LABEL_79:
    if ( !buffer )
      return;
    v6 = *buffer;
  }
}

/*
==============
CG_ParseClientEffects
==============
*/
void CG_ParseClientEffects(LocalClientNum_t localClientNum, const char *buffer, EffectDefMap *effectDefMap, int *effectDefMapEntries)
{
  __int64 v8; 
  const char *v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  const char *v13; 
  char v14; 
  const char *v15; 
  char *v16; 
  __int64 v17; 
  __int64 v18; 
  char *i; 
  char v20; 
  __int64 v21; 
  const char *v22; 
  char v23; 
  __int64 v24; 
  char v25; 
  __int64 v26; 
  const char *v27; 
  char v28; 
  __int64 v29; 
  char v30; 
  const char *v31; 
  char v32; 
  __int64 v33; 
  char *j; 
  char v35; 
  const char *v37; 
  char v38; 
  __int64 v39; 
  char *k; 
  char v41; 
  __int64 v42; 
  const char *v43; 
  char v44; 
  __int64 v45; 
  char *m; 
  char v47; 
  __int64 v48; 
  char v49; 
  __int64 v50; 
  char *n; 
  char v52; 
  __int64 v54; 
  const char *v55; 
  char v56; 
  __int64 v57; 
  char v58; 
  __int64 v59; 
  const char *v60; 
  char v61; 
  __int64 v62; 
  char v63; 
  __int64 v64; 
  const char *v65; 
  char v66; 
  __int64 v67; 
  char v68; 
  __int64 v69; 
  const char *v70; 
  char v71; 
  __int64 v72; 
  char v73; 
  __int64 v74; 
  const char *v75; 
  char v76; 
  __int64 v77; 
  char v78; 
  const char *v79; 
  char v80[128]; 
  char dest[128]; 
  char v82[128]; 
  char v83[128]; 
  char v84[128]; 

  v8 = 37i64;
  v9 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v10 = v9["
    v11 = v8;
    v12 = *v9++;
    --v8;
    if ( !v11 )
      break;
    if ( v10 != v12 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, buffer);
      v15 = "
      v16 = dest;
LABEL_13:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", v16, v15);
      return;
    }
  }
  while ( v10 );
  v13 = buffer + 37;
  if ( buffer != (const char *)-37i64 )
  {
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 < 9u || (unsigned __int8)v14 > 0x20u || !v14 )
        break;
      ++v13;
    }
    v17 = 32i64;
    v18 = 32i64;
    for ( i = (char *)v13; ; v14 = *i )
    {
      v20 = i["#include scripts\\engine\\utility;" - v13];
      v21 = v18;
      ++i;
      --v18;
      if ( !v21 )
        break;
      if ( v20 != v14 )
        goto LABEL_24;
      if ( !v20 )
        break;
    }
    if ( v13 != (const char *)-32i64 )
    {
      for ( v13 += 32; *v13 >= 9u && *v13 <= 0x20u; ++v13 )
        ;
    }
LABEL_24:
    v22 = v13;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v23 = v22["#include scripts\\common\\utility;" - v13];
      v24 = v17;
      v25 = *v22++;
      --v17;
      if ( !v24 )
        break;
      if ( v23 != v25 )
        goto LABEL_35;
    }
    while ( v23 );
    if ( v13 != (const char *)-32i64 )
    {
      for ( v13 += 32; *v13 >= 9u && *v13 <= 0x20u; ++v13 )
        ;
    }
LABEL_35:
    v26 = 33i64;
    v27 = v13;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v28 = v27["#include scripts\\common\\createfx;" - v13];
      v29 = v26;
      v30 = *v27++;
      --v26;
      if ( !v29 )
        break;
      if ( v28 != v30 )
      {
        Core_strcpy_truncate(v82, 0x80ui64, v13);
        v15 = "#include scripts\\common\\createfx;";
        v16 = v82;
        goto LABEL_13;
      }
    }
    while ( v28 );
    v31 = v13 + 33;
    if ( v31 )
    {
      while ( 1 )
      {
        v32 = *v31;
        if ( *v31 < 9u || (unsigned __int8)v32 > 0x20u || !v32 )
          break;
        ++v31;
      }
      v33 = 6i64;
      for ( j = (char *)v31; ; v32 = *j )
      {
        v35 = (j++)["main()" - v31];
        if ( !v33-- )
          break;
        if ( v35 != v32 )
        {
          Core_strcpy_truncate(v83, 0x80ui64, v31);
          v15 = "main()";
          v16 = v83;
          goto LABEL_13;
        }
        if ( !v35 )
          break;
      }
      v37 = v31 + 6;
      if ( v37 )
      {
        while ( 1 )
        {
          v38 = *v37;
          if ( *v37 < 9u || (unsigned __int8)v38 > 0x20u || !v38 )
            break;
          ++v37;
        }
        v39 = 1i64;
        for ( k = (char *)v37; ; v38 = *k )
        {
          v41 = k["{" - v37];
          v42 = v39;
          ++k;
          --v39;
          if ( !v42 )
            break;
          if ( v41 != v38 )
          {
            Core_strcpy_truncate(v84, 0x80ui64, v37);
            v15 = "{";
            v16 = v84;
            goto LABEL_13;
          }
          if ( !v41 )
            break;
        }
        v43 = v37 + 1;
        if ( v37 != (const char *)-1i64 )
        {
          while ( 1 )
          {
            v44 = *v43;
            if ( *v43 < 9u || (unsigned __int8)v44 > 0x20u || !v44 )
              break;
            ++v43;
          }
          v45 = 2i64;
          for ( m = (char *)v43; ; v44 = *m )
          {
            v47 = m["
            v48 = v45;
            ++m;
            --v45;
            if ( !v48 )
              break;
            if ( v47 != v44 )
              goto LABEL_75;
            if ( !v47 )
              break;
          }
          v43 = CG_SkipLineStartingWith(v43, "
LABEL_75:
          if ( v43 )
          {
LABEL_76:
            while ( 2 )
            {
              v49 = *v43;
              if ( *v43 != 125 && v49 )
              {
                v50 = 24i64;
                for ( n = (char *)v43; ; v49 = *n )
                {
                  v52 = (n++)["ent = createLoopSound();" - v43];
                  if ( !v50-- )
                    break;
                  if ( v52 != v49 )
                  {
                    v54 = 27i64;
                    v55 = v43;
                    do
                    {
                      v56 = v55["ent = createOneshotEffect( " - v43];
                      v57 = v54;
                      v58 = *v55++;
                      --v54;
                      if ( !v57 )
                        break;
                      if ( v56 != v58 )
                      {
                        v59 = 21i64;
                        v60 = v43;
                        do
                        {
                          v61 = v60["ent = createExploder(" - v43];
                          v62 = v59;
                          v63 = *v60++;
                          --v59;
                          if ( !v62 )
                            break;
                          if ( v61 != v63 )
                          {
                            v64 = 23i64;
                            v65 = v43;
                            do
                            {
                              v66 = v65["ent = createExploderEx(" - v43];
                              v67 = v64;
                              v68 = *v65++;
                              --v64;
                              if ( !v67 )
                                break;
                              if ( v66 != v68 )
                              {
                                v69 = 26i64;
                                v70 = v43;
                                do
                                {
                                  v71 = v70["ent = createReactiveEnt();" - v43];
                                  v72 = v69;
                                  v73 = *v70++;
                                  --v69;
                                  if ( !v72 )
                                    break;
                                  if ( v71 != v73 )
                                  {
                                    v74 = 28i64;
                                    v75 = v43;
                                    do
                                    {
                                      v76 = v75["ent = createIntervalSound();" - v43];
                                      v77 = v74;
                                      v78 = *v75++;
                                      --v74;
                                      if ( !v77 )
                                        break;
                                      if ( v76 != v78 )
                                      {
                                        Core_strcpy_truncate(v80, 0x80ui64, v43);
                                        Com_PrintError(1, "Expected 'ent = createLoopSound();' or 'ent = createOneshotEffect' or 'ent = createExploder' or 'ent = createExploderEx' or 'ent = createReactiveEnt' instead of '%s' in map's effect file\n", v80);
                                        return;
                                      }
                                    }
                                    while ( v76 );
                                    v43 = CG_ParseIntervalSound(localClientNum, v43);
                                    if ( v43 )
                                      goto LABEL_76;
                                    return;
                                  }
                                }
                                while ( v71 );
                                v43 = CG_ParseReactiveSound(localClientNum, v43);
                                if ( v43 )
                                  goto LABEL_76;
                                return;
                              }
                            }
                            while ( v66 );
                            v43 = CG_ParseExploderEx(localClientNum, v43, effectDefMap, effectDefMapEntries);
                            if ( v43 )
                              goto LABEL_76;
                            return;
                          }
                        }
                        while ( v61 );
                        v43 = CG_ParseExploder(localClientNum, v43, effectDefMap, effectDefMapEntries);
                        if ( v43 )
                          goto LABEL_76;
                        return;
                      }
                    }
                    while ( v56 );
                    v43 = CG_ParseEffect(localClientNum, v43, effectDefMap, effectDefMapEntries);
                    if ( v43 )
                      goto LABEL_76;
                    return;
                  }
                  if ( !v52 )
                    break;
                }
                v43 = CG_ParseSound(localClientNum, v43);
                if ( v43 )
                  continue;
                return;
              }
              break;
            }
          }
          v79 = CG_SkipLineStartingWith(v43, "}");
          if ( v79 )
          {
            if ( *v79 )
            {
              Core_strcpy_truncate(v80, 0x80ui64, v79);
              Com_PrintError(1, "Unexpected data after parsing '%s' map's effect file\n", v80);
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_ParseEffect
==============
*/
char *CG_ParseEffect(LocalClientNum_t localClientNum, const char *line, EffectDefMap *effectDefMap, int *effectDefMapEntries)
{
  int v4; 
  __int64 v5; 
  __int64 v8; 
  const char *v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  const char *v13; 
  char *v14; 
  char i; 
  char v16; 
  const char *v17; 
  __int64 v19; 
  char *v20; 
  char *j; 
  char v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  char *v26; 
  char v27; 
  __int64 v28; 
  char v29; 
  const char *v30; 
  char *v31; 
  const char *v32; 
  char *v33; 
  char *v34; 
  char v35; 
  __int64 v36; 
  char v37; 
  char *v38; 
  char *v39; 
  char v40; 
  __int64 v41; 
  char v42; 
  const char *v43; 
  char *v44; 
  __int64 v45; 
  char *v46; 
  __int64 v47; 
  char *v48; 
  char v49; 
  __int64 v50; 
  char v51; 
  char *v52; 
  char v53; 
  __int64 v54; 
  char v55; 
  const char *v56; 
  char k; 
  char v58; 
  __int64 v59; 
  char *v60; 
  __int64 v61; 
  char *v62; 
  char v63; 
  __int64 v64; 
  char v65; 
  char *v66; 
  char v67; 
  __int64 v68; 
  char v69; 
  __int64 v70; 
  char *v71; 
  __int64 v72; 
  char *v73; 
  char v74; 
  __int64 v75; 
  char v76; 
  char *v77; 
  char v78; 
  __int64 v79; 
  char v80; 
  const char *v81; 
  char m; 
  char v83; 
  SndAliasList *Alias; 
  int v100; 
  EffectDefMap *v102; 
  __int64 v103; 
  char *v104; 
  EffectDefMap *v105; 
  char v106; 
  __int64 v107; 
  char v108; 
  char *fmt; 
  __int64 v113; 
  float value; 
  LocalClientNum_t localClientNuma; 
  FXRegisteredDef outDef; 
  EffectDefMap *v117; 
  vec3_t origin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char dest[128]; 
  char text[256]; 
  char name[256]; 
  char effectName[256]; 

  v4 = 0;
  v117 = effectDefMap;
  localClientNuma = localClientNum;
  v5 = 27i64;
  outDef.m_particleSystemDef = NULL;
  v8 = 27i64;
  v9 = line;
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v10 = v9["ent = createOneshotEffect( " - line];
    v11 = v8;
    v12 = *v9++;
    --v8;
    if ( !v11 )
      break;
    if ( v10 != v12 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, line);
      v17 = "ent = createOneshotEffect( ";
LABEL_18:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", dest, v17);
      return 0i64;
    }
  }
  while ( v10 );
  if ( line != (const char *)-27i64 )
  {
    v13 = CG_ParseString(line + 27, text, 0x100u);
    v14 = (char *)v13;
    if ( v13 )
    {
      for ( i = *v13; i != 10; i = *++v14 )
      {
        if ( i == 13 )
          break;
        if ( !i )
          break;
      }
      while ( 1 )
      {
        v16 = *v14;
        if ( (unsigned __int8)*v14 < 9u || (unsigned __int8)v16 > 0x20u || !v16 )
          break;
        ++v14;
      }
      v19 = 27i64;
      v20 = (char *)("ent set_origin_and_angles( " - v14);
      for ( j = v14; ; v16 = *j )
      {
        v22 = j[(_QWORD)v20];
        v23 = v19;
        ++j;
        --v19;
        if ( !v23 )
        {
LABEL_39:
          v39 = v14;
          do
          {
            v40 = v39[(_QWORD)v20];
            v41 = v5;
            v42 = *v39++;
            --v5;
            if ( !v41 )
              break;
            if ( v40 != v42 )
            {
              Core_strcpy_truncate(dest, 0x80ui64, v14);
              v17 = "ent set_origin_and_angles( ";
              goto LABEL_18;
            }
          }
          while ( v40 );
          v43 = v14 + 27;
          if ( !v43 )
            return 0i64;
          v38 = (char *)CG_ParseVec3x2Finish(v43, &origin, &angles);
LABEL_45:
          v44 = v38;
          if ( v38 )
          {
            v45 = 18i64;
            v46 = v38;
            v47 = 18i64;
            v48 = (char *)("ent.v[ \"fxid\" ] = " - v38);
            do
            {
              v49 = v46[(_QWORD)v48];
              v50 = v47;
              v51 = *v46++;
              --v47;
              if ( !v50 )
                break;
              if ( v49 != v51 )
                goto LABEL_68;
            }
            while ( v49 );
            v52 = v44;
            if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
              __debugbreak();
            do
            {
              v53 = v52[(_QWORD)v48];
              v54 = v45;
              v55 = *v52++;
              --v45;
              if ( !v54 )
                break;
              if ( v53 != v55 )
              {
                Core_strcpy_truncate(dest, 0x80ui64, v44);
                v17 = "ent.v[ \"fxid\" ] = ";
                goto LABEL_18;
              }
            }
            while ( v53 );
            if ( v44 != (char *)-18i64 )
            {
              v56 = CG_ParseString(v44 + 18, text, 0x100u);
              v44 = (char *)v56;
              if ( v56 )
              {
                for ( k = *v56; k != 10; k = *++v44 )
                {
                  if ( k == 13 )
                    break;
                  if ( !k )
                    break;
                }
                while ( 1 )
                {
                  v58 = *v44;
                  if ( (unsigned __int8)*v44 < 9u || (unsigned __int8)v58 > 0x20u || !v58 )
                    break;
                  ++v44;
                }
LABEL_68:
                v59 = 19i64;
                v60 = v44;
                v61 = 19i64;
                if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                  __debugbreak();
                v62 = (char *)("ent.v[ \"delay\" ] = " - v44);
                do
                {
                  v63 = v60[(_QWORD)v62];
                  v64 = v61;
                  v65 = *v60++;
                  --v61;
                  if ( !v64 )
                    break;
                  if ( v63 != v65 )
                  {
                    __asm
                    {
                      vmovss  xmm0, cs:__real@c0800000
                      vmovss  [rsp+460h+value], xmm0
                    }
LABEL_83:
                    v70 = 24i64;
                    v71 = v44;
                    v72 = 24i64;
                    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    v73 = (char *)("ent.v[ \"soundalias\" ] = " - v44);
                    do
                    {
                      v74 = v71[(_QWORD)v73];
                      v75 = v72;
                      v76 = *v71++;
                      --v72;
                      if ( !v75 )
                        break;
                      if ( v74 != v76 )
                        goto LABEL_113;
                    }
                    while ( v74 );
                    v77 = v44;
                    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    do
                    {
                      v78 = v77[(_QWORD)v73];
                      v79 = v70;
                      v80 = *v77++;
                      --v70;
                      if ( !v79 )
                        break;
                      if ( v78 != v80 )
                      {
                        Core_strcpy_truncate(dest, 0x80ui64, v44);
                        v17 = "ent.v[ \"soundalias\" ] = ";
                        goto LABEL_18;
                      }
                    }
                    while ( v78 );
                    if ( v44 != (char *)-24i64 )
                    {
                      v81 = CG_ParseString(v44 + 24, name, 0x100u);
                      v44 = (char *)v81;
                      if ( v81 )
                      {
                        for ( m = *v81; m != 10; m = *++v44 )
                        {
                          if ( m == 13 )
                            break;
                          if ( !m )
                            break;
                        }
                        while ( 1 )
                        {
                          v83 = *v44;
                          if ( (unsigned __int8)*v44 < 9u || (unsigned __int8)v83 > 0x20u || !v83 )
                            break;
                          ++v44;
                        }
                        if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNuma) )
                        {
                          __asm { vmovss  xmm1, dword ptr [rsp+460h+origin+4] }
                          if ( s_clientEntSoundCount == 1024 )
                          {
                            __asm
                            {
                              vmovss  xmm0, dword ptr [rsp+460h+origin+8]
                              vmovss  xmm3, dword ptr [rsp+460h+origin]
                              vcvtss2sd xmm0, xmm0, xmm0
                              vcvtss2sd xmm3, xmm3, xmm3
                              vcvtss2sd xmm1, xmm1, xmm1
                              vmovsd  [rsp+460h+var_438], xmm0
                              vmovq   r9, xmm3
                              vmovsd  [rsp+460h+fmt], xmm1
                            }
                            Com_PrintError(1, "Unable to add %s at [%.2f, %.2f, %.2f]-> Too many client ent sounds.  Reduce sounds or increase MAX_CLIENT_ENT_SOUNDS (%d).\n", name, _R9, fmt, v113, s_clientEntSoundCount);
                          }
                          else
                          {
                            __asm { vmovss  xmm0, dword ptr [rsp+460h+origin] }
                            _RCX = 5i64 * s_clientEntSoundCount;
                            _RDI = s_clientEntSounds;
                            __asm
                            {
                              vmovss  dword ptr [rdi+rcx*8], xmm0
                              vmovss  xmm0, dword ptr [rsp+460h+origin+8]
                              vmovss  dword ptr [rdi+rcx*8+8], xmm0
                              vmovss  dword ptr [rdi+rcx*8+4], xmm1
                            }
                            Alias = SND_FindAlias(name);
                            __asm
                            {
                              vmovss  xmm0, dword ptr [rsp+460h+angles]
                              vmovss  xmm1, dword ptr [rsp+460h+angles+4]
                            }
                            _RDX = s_clientEntSoundCount;
                            v100 = s_clientEntSoundCount + 1;
                            s_clientEntSounds[_RDX].aliasList = Alias;
                            __asm
                            {
                              vmovss  dword ptr [rdi+rdx*8+18h], xmm0
                              vmovss  xmm0, dword ptr [rsp+460h+angles+8]
                              vmovss  dword ptr [rdi+rdx*8+20h], xmm0
                              vmovss  dword ptr [rdi+rdx*8+1Ch], xmm1
                            }
                            s_clientEntSounds[_RDX].active = 1;
                            s_clientEntSoundCount = v100;
                          }
                        }
LABEL_113:
                        if ( *effectDefMapEntries > 0 )
                        {
                          v102 = v117;
                          do
                          {
                            v103 = 0x7FFFFFFFi64;
                            v104 = text;
                            v105 = &v102[v4];
                            if ( !v105 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                              __debugbreak();
                            while ( 1 )
                            {
                              v106 = v104[(char *)v105 - text];
                              v107 = v103;
                              v108 = *v104++;
                              --v103;
                              if ( !v107 )
                              {
LABEL_121:
                                Core_strcpy(effectName, 0x100ui64, v105->filename);
                                FX_LoadEffect(effectName, &outDef);
                                AnglesToAxis(&angles, &axis);
                                __asm
                                {
                                  vmovss  xmm0, [rsp+460h+value]
                                  vmulss  xmm1, xmm0, cs:__real@447a0000
                                  vcvttss2si r8d, xmm1; startMsec
                                }
                                FX_PlayOrientedEffect(localClientNuma, &outDef, _ER8, &origin, &axis);
                                return v44;
                              }
                              if ( v106 != v108 )
                                break;
                              if ( !v106 )
                                goto LABEL_121;
                            }
                            ++v4;
                          }
                          while ( v4 < *effectDefMapEntries );
                        }
                        Com_PrintError(1, "Couldn't find '%s' in _fx.gsc map.\n", text);
                        return v44;
                      }
                    }
                    return 0i64;
                  }
                }
                while ( v63 );
                v66 = v44;
                if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                  __debugbreak();
                do
                {
                  v67 = v66[(_QWORD)v62];
                  v68 = v59;
                  v69 = *v66++;
                  --v59;
                  if ( !v68 )
                    break;
                  if ( v67 != v69 )
                  {
                    Core_strcpy_truncate(dest, 0x80ui64, v44);
                    v17 = "ent.v[ \"delay\" ] = ";
                    goto LABEL_18;
                  }
                }
                while ( v67 );
                if ( v44 != (char *)-19i64 )
                {
                  v44 = (char *)CG_ParseFloatFinish(v44 + 19, &value);
                  if ( v44 )
                    goto LABEL_83;
                }
                return 0i64;
              }
            }
          }
          return 0i64;
        }
        if ( v22 != v16 )
          break;
        if ( !v22 )
          goto LABEL_39;
      }
      v24 = 21i64;
      v25 = 21i64;
      v26 = v14;
      do
      {
        v27 = v26["ent.v[ \"origin\" ] = (" - v14];
        v28 = v25;
        v29 = *v26++;
        --v25;
        if ( !v28 )
          break;
        if ( v27 != v29 )
        {
          Core_strcpy_truncate(dest, 0x80ui64, v14);
          v17 = "ent.v[ \"origin\" ] = (";
          goto LABEL_18;
        }
      }
      while ( v27 );
      v30 = v14 + 21;
      if ( v30 )
      {
        v31 = (char *)CG_ParseVec3Finish(v30, &origin);
        v32 = v31;
        if ( v31 )
        {
          v33 = v31;
          v34 = (char *)("ent.v[ \"angles\" ] = (" - v31);
          do
          {
            v35 = v33[(_QWORD)v34];
            v36 = v24;
            v37 = *v33++;
            --v24;
            if ( !v36 )
              break;
            if ( v35 != v37 )
            {
              Core_strcpy_truncate(dest, 0x80ui64, v32);
              v17 = "ent.v[ \"angles\" ] = (";
              goto LABEL_18;
            }
          }
          while ( v35 );
          if ( v32 == (const char *)-21i64 )
            return 0i64;
          v38 = (char *)CG_ParseVec3Finish(v32 + 21, &angles);
          goto LABEL_45;
        }
      }
    }
  }
  return 0i64;
}

/*
==============
CG_ParseExploder
==============
*/
char *CG_ParseExploder(LocalClientNum_t localClientNum, const char *line, EffectDefMap *effectDefMap, int *effectDefMapEntries)
{
  __int64 v4; 
  __int64 v5; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  const char *v11; 
  char i; 
  char v13; 
  const char *v14; 
  char *v15; 
  __int64 v17; 
  const char *j; 
  char v19; 
  const char *v21; 
  char *v22; 
  const char *v23; 
  __int64 v24; 
  __int64 v25; 
  char *v26; 
  char *v27; 
  char v28; 
  __int64 v29; 
  char v30; 
  const char *v31; 
  const char *v32; 
  char k; 
  char v34; 
  __int64 v35; 
  char *m; 
  char v37; 
  __int64 v38; 
  const char *v39; 
  char *v40; 
  char *v41; 
  char *v42; 
  char *v43; 
  char v44; 
  __int64 v45; 
  char v46; 
  __int64 v47; 
  char *v48; 
  __int64 v49; 
  char *v50; 
  char v51; 
  __int64 v52; 
  char v53; 
  char *v54; 
  char v55; 
  __int64 v56; 
  char v57; 
  __int64 v58; 
  __int64 v59; 
  char *v60; 
  char *v61; 
  char v62; 
  __int64 v63; 
  char v64; 
  __int64 v65; 
  char *v66; 
  char v67; 
  __int64 v68; 
  char v69; 
  __int64 v70; 
  char *v71; 
  char *v72; 
  char v73; 
  __int64 v74; 
  char v75; 
  __int64 v76; 
  char *v77; 
  char v78; 
  __int64 v79; 
  char v80; 
  char *v81; 
  char v82; 
  __int64 v83; 
  char v84; 
  const char *v85; 
  const char *v86; 
  char *v87; 
  char n; 
  char v89; 
  unsigned int v90; 
  __int64 v91; 
  char *v92; 
  __int64 v93; 
  char *v94; 
  char v95; 
  __int64 v96; 
  char v97; 
  __int64 v98; 
  char *v99; 
  char v100; 
  __int64 v101; 
  char v102; 
  const char *v103; 
  char jj; 
  char v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  int v109; 
  __int64 v110; 
  int v111; 
  int v112; 
  int v113; 
  __int64 v114; 
  char *v115; 
  char *v116; 
  char v117; 
  __int64 v118; 
  char v119; 
  char *v120; 
  char v121; 
  __int64 v122; 
  char v123; 
  const char *v124; 
  char ii; 
  char v126; 
  __int64 v127; 
  __int64 v128; 
  int v129; 
  __int64 v130; 
  int v131; 
  int v132; 
  int v133; 
  __int64 v134; 
  __int64 v135; 
  int v136; 
  __int64 v137; 
  int v138; 
  int v139; 
  int v140; 
  int *v141; 
  int v142; 
  EffectDefMap *v143; 
  __int64 v144; 
  char *v145; 
  EffectDefMap *v146; 
  char v147; 
  __int64 v148; 
  char v149; 
  const ParticleSystemDef *m_particleSystemDef; 
  bool v163; 
  __int64 v168; 
  __int64 v169; 
  char v170; 
  __int64 v171; 
  char v172; 
  char v173; 
  __int64 v174; 
  char v175; 
  char *fmt; 
  char *fmta; 
  __int64 v178; 
  __int64 v179; 
  int v180; 
  int v181; 
  FXRegisteredDef outDef; 
  float value; 
  LocalClientNum_t localClientNuma; 
  int *v185; 
  float v186; 
  float v187; 
  EffectDefMap *v188; 
  vec3_t origin; 
  vec3_t angles; 
  char text[64]; 
  char v192[128]; 
  char name[64]; 
  char soundalias[64]; 
  char dest[128]; 
  char effectName[64]; 

  v185 = effectDefMapEntries;
  v4 = 22i64;
  v188 = effectDefMap;
  v5 = 22i64;
  localClientNuma = localClientNum;
  outDef.m_particleSystemDef = NULL;
  v7 = line;
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v8 = v7["ent = createExploder( " - line];
    v9 = v5;
    v10 = *v7++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, line);
      v14 = "ent = createExploder( ";
      v15 = dest;
LABEL_17:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", v15, v14);
      return 0i64;
    }
  }
  while ( v8 );
  v11 = line + 22;
  if ( line != (const char *)-22i64 )
  {
    for ( i = *v11; i != 10; i = *++v11 )
    {
      if ( i == 13 )
        break;
      if ( !i )
        break;
    }
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 < 9u || (unsigned __int8)v13 > 0x20u || !v13 )
        break;
      ++v11;
    }
    v17 = 27i64;
    for ( j = v11; ; v13 = *j )
    {
      v19 = j["ent set_origin_and_angles( " - v11];
      ++j;
      if ( !v17-- )
        break;
      if ( v19 != v13 )
      {
        Core_strcpy_truncate(v192, 0x80ui64, v11);
        v14 = "ent set_origin_and_angles( ";
        v15 = v192;
        goto LABEL_17;
      }
      if ( !v19 )
        break;
    }
    v21 = v11 + 27;
    if ( v21 )
    {
      v22 = (char *)CG_ParseVec3x2Finish(v21, &origin, &angles);
      v23 = v22;
      if ( v22 )
      {
        v24 = 18i64;
        v25 = 18i64;
        v26 = (char *)("ent.v[ \"fxid\" ] = " - v22);
        v27 = v22;
        do
        {
          v28 = v26[(_QWORD)v27];
          v29 = v25;
          v30 = *v27++;
          --v25;
          if ( !v29 )
            break;
          if ( v28 != v30 )
          {
            Core_strcpy_truncate(v192, 0x80ui64, v23);
            v14 = "ent.v[ \"fxid\" ] = ";
            v15 = v192;
            goto LABEL_17;
          }
        }
        while ( v28 );
        if ( v23 != (const char *)-18i64 )
        {
          v31 = CG_ParseString(v23 + 18, text, 0x40u);
          v32 = v31;
          if ( v31 )
          {
            for ( k = *v31; k != 10; k = *++v32 )
            {
              if ( k == 13 )
                break;
              if ( !k )
                break;
            }
            while ( 1 )
            {
              v34 = *v32;
              if ( *v32 < 9u || (unsigned __int8)v34 > 0x20u || !v34 )
                break;
              ++v32;
            }
            v35 = 19i64;
            for ( m = (char *)v32; ; v34 = *m )
            {
              v37 = m["ent.v[ \"delay\" ] = " - v32];
              v38 = v35;
              ++m;
              --v35;
              if ( !v38 )
                break;
              if ( v37 != v34 )
              {
                Core_strcpy_truncate(v192, 0x80ui64, v32);
                v14 = "ent.v[ \"delay\" ] = ";
                v15 = v192;
                goto LABEL_17;
              }
              if ( !v37 )
                break;
            }
            v39 = v32 + 19;
            if ( v39 )
            {
              v40 = (char *)CG_ParseFloatFinish(v39, &value);
              v41 = v40;
              if ( v40 )
              {
                v42 = v40;
                v43 = (char *)("ent.v[ \"flag\" ] = " - v40);
                do
                {
                  v44 = v43[(_QWORD)v42];
                  v45 = v24;
                  v46 = *v42;
                  --v24;
                  ++v42;
                  if ( !v45 )
                    break;
                  if ( v44 != v46 )
                    goto LABEL_55;
                }
                while ( v44 );
                v41 = (char *)CG_SkipRestOfLine(v41);
                if ( !v41 )
                  return 0i64;
LABEL_55:
                v47 = 20i64;
                v48 = v41;
                v49 = 20i64;
                if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                  __debugbreak();
                v50 = (char *)("ent.v[ \"repeat\" ] = " - v41);
                do
                {
                  v51 = v50[(_QWORD)v48];
                  v52 = v49;
                  v53 = *v48++;
                  --v49;
                  if ( !v52 )
                    break;
                  if ( v51 != v53 )
                  {
LABEL_71:
                    v58 = 23i64;
                    v59 = 23i64;
                    v60 = v41;
                    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    v61 = (char *)("ent.v[ \"delay_min\" ] = " - v41);
                    do
                    {
                      v62 = v61[(_QWORD)v60];
                      v63 = v59;
                      v64 = *v60++;
                      --v59;
                      if ( !v63 )
                        break;
                      if ( v62 != v64 )
                      {
LABEL_87:
                        v70 = 23i64;
                        v71 = v41;
                        if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                          __debugbreak();
                        v72 = (char *)("ent.v[ \"delay_max\" ] = " - v41);
                        do
                        {
                          v73 = v72[(_QWORD)v71];
                          v74 = v70;
                          v75 = *v71++;
                          --v70;
                          if ( !v74 )
                            break;
                          if ( v73 != v75 )
                          {
LABEL_103:
                            v81 = v41;
                            if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                              __debugbreak();
                            do
                            {
                              v82 = v81["ent.v[ \"exploder\" ] = " - v41];
                              v83 = v4;
                              v84 = *v81++;
                              --v4;
                              if ( !v83 )
                                break;
                              if ( v82 != v84 )
                              {
                                Core_strcpy_truncate(v192, 0x80ui64, v41);
                                v14 = "ent.v[ \"exploder\" ] = ";
                                v15 = v192;
                                goto LABEL_17;
                              }
                            }
                            while ( v82 );
                            v85 = v41 + 22;
                            if ( v41 == (char *)-22i64 )
                              return 0i64;
                            if ( *v85 == 34 )
                            {
                              v86 = CG_ParseString(v85, dest, 0x40u);
                              v87 = (char *)v86;
                              if ( !v86 )
                                return 0i64;
                              for ( n = *v86; n != 10; n = *++v87 )
                              {
                                if ( n == 13 )
                                  break;
                                if ( !n )
                                  break;
                              }
                              while ( 1 )
                              {
                                v89 = *v87;
                                if ( (unsigned __int8)*v87 < 9u || (unsigned __int8)v89 > 0x20u || !v89 )
                                  break;
                                ++v87;
                              }
                              v90 = atoi(dest);
                              v180 = v90;
                              v181 = v90;
                              if ( !v90 )
                              {
                                if ( dest[0] != 48 )
                                {
                                  LODWORD(v178) = 255;
                                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14427A1D0, 288i64, text, dest, v178);
                                  goto LABEL_128;
                                }
LABEL_131:
                                v91 = 24i64;
                                v92 = v87;
                                v93 = 24i64;
                                if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                  __debugbreak();
                                v94 = (char *)("ent.v[ \"soundalias\" ] = " - v87);
                                do
                                {
                                  v95 = v94[(_QWORD)v92];
                                  v96 = v93;
                                  v97 = *v92++;
                                  --v93;
                                  v98 = 0x7FFFFFFFi64;
                                  if ( !v96 )
                                    break;
                                  if ( v95 != v97 )
                                  {
                                    name[0] = 0;
                                    v106 = 0i64;
LABEL_166:
                                    v114 = 23i64;
                                    v115 = v87;
                                    if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                      __debugbreak();
                                    v116 = (char *)("ent.v[ \"loopsound\" ] = " - v87);
                                    do
                                    {
                                      v117 = v116[(_QWORD)v115];
                                      v118 = v114;
                                      v119 = *v115++;
                                      --v114;
                                      if ( !v118 )
                                        break;
                                      if ( v117 != v119 )
                                        goto LABEL_200;
                                    }
                                    while ( v117 );
                                    v120 = v87;
                                    if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                      __debugbreak();
                                    do
                                    {
                                      v121 = v116[(_QWORD)v120];
                                      v122 = v58;
                                      v123 = *v120++;
                                      --v58;
                                      if ( !v122 )
                                        break;
                                      if ( v121 != v123 )
                                      {
                                        Core_strcpy_truncate(v192, 0x80ui64, v87);
                                        v14 = "ent.v[ \"loopsound\" ] = ";
                                        v15 = v192;
                                        goto LABEL_17;
                                      }
                                    }
                                    while ( v121 );
                                    if ( v87 != (char *)-23i64 )
                                    {
                                      v124 = CG_ParseString(v87 + 23, soundalias, 0x40u);
                                      v87 = (char *)v124;
                                      if ( v124 )
                                      {
                                        for ( ii = *v124; ii != 10; ii = *++v87 )
                                        {
                                          if ( ii == 13 )
                                            break;
                                          if ( !ii )
                                            break;
                                        }
                                        while ( 1 )
                                        {
                                          v126 = *v87;
                                          if ( (unsigned __int8)*v87 < 9u || (unsigned __int8)v126 > 0x20u || !v126 )
                                            break;
                                          ++v87;
                                        }
                                        v127 = 0x7FFFFFFFi64;
                                        v128 = 0i64;
                                        do
                                        {
                                          v129 = (unsigned __int8)soundalias[v128];
                                          v130 = v127;
                                          v131 = (unsigned __int8)aNil[v128++];
                                          --v127;
                                          if ( !v130 )
                                            break;
                                          if ( v129 != v131 )
                                          {
                                            v132 = v129 + 32;
                                            if ( (unsigned int)(v129 - 65) > 0x19 )
                                              v132 = v129;
                                            v129 = v132;
                                            v133 = v131 + 32;
                                            if ( (unsigned int)(v131 - 65) > 0x19 )
                                              v133 = v131;
                                            if ( v129 != v133 )
                                              goto LABEL_201;
                                          }
                                        }
                                        while ( v129 );
LABEL_200:
                                        soundalias[0] = 0;
LABEL_201:
                                        v134 = 0x7FFFFFFFi64;
                                        v135 = 0i64;
                                        do
                                        {
                                          v136 = (unsigned __int8)text[v135];
                                          v137 = v134;
                                          v138 = (unsigned __int8)aNoFx[v135];
                                          --v134;
                                          ++v135;
                                          if ( !v137 )
                                            break;
                                          if ( v136 != v138 )
                                          {
                                            v139 = v136 + 32;
                                            if ( (unsigned int)(v136 - 65) > 0x19 )
                                              v139 = v136;
                                            v136 = v139;
                                            v140 = v138 + 32;
                                            if ( (unsigned int)(v138 - 65) > 0x19 )
                                              v140 = v138;
                                            if ( v136 != v140 )
                                            {
                                              v141 = v185;
                                              v142 = 0;
                                              if ( *v185 > 0 )
                                              {
                                                v143 = v188;
                                                do
                                                {
                                                  v144 = 0x7FFFFFFFi64;
                                                  v145 = text;
                                                  v146 = &v143[v142];
                                                  if ( !v146 )
                                                  {
                                                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                                      __debugbreak();
                                                    v141 = v185;
                                                  }
                                                  while ( 1 )
                                                  {
                                                    v147 = v145[(char *)v146 - text];
                                                    v148 = v144;
                                                    v149 = *v145++;
                                                    --v144;
                                                    if ( !v148 )
                                                    {
LABEL_220:
                                                      Core_strcpy(effectName, 0x40ui64, v146->filename);
                                                      FX_LoadEffect(effectName, &outDef);
                                                      m_particleSystemDef = outDef.m_particleSystemDef;
                                                      v106 = 0i64;
                                                      goto LABEL_225;
                                                    }
                                                    if ( v147 != v149 )
                                                      break;
                                                    if ( !v147 )
                                                      goto LABEL_220;
                                                  }
                                                  ++v142;
                                                }
                                                while ( v142 < *v141 );
                                                v106 = 0i64;
                                              }
                                              Com_PrintError(1, "Couldn't find '%s' in _fx.gsc map.\n", text);
                                              break;
                                            }
                                          }
                                        }
                                        while ( v136 );
                                        m_particleSystemDef = NULL;
                                        outDef.m_particleSystemDef = NULL;
LABEL_225:
                                        __asm
                                        {
                                          vmovss  xmm0, [rsp+2D0h+value]
                                          vmulss  xmm1, xmm0, cs:__real@447a0000
                                          vcvttss2si edx, xmm1
                                          vmovss  xmm1, dword ptr [rsp+2D0h+origin+4]
                                        }
                                        if ( s_clientExploders.numExploders < 0x100 )
                                        {
                                          __asm { vmovss  xmm0, dword ptr [rsp+2D0h+origin] }
                                          _RDI = &s_clientExploders.exploders[(unsigned __int64)s_clientExploders.numExploders];
                                          v163 = name[0] == 0;
                                          s_clientExploders.name[s_clientExploders.numExploders] = v180;
                                          __asm
                                          {
                                            vmovss  dword ptr [rdi], xmm0
                                            vmovss  xmm0, dword ptr [rsp+2D0h+origin+8]
                                            vmovss  dword ptr [rdi+8], xmm0
                                            vmovss  xmm0, dword ptr [rbp+1D0h+angles]
                                            vmovss  dword ptr [rdi+4], xmm1
                                            vmovss  xmm1, dword ptr [rbp+1D0h+angles+4]
                                            vmovss  dword ptr [rdi+0Ch], xmm0
                                            vmovss  xmm0, dword ptr [rbp+1D0h+angles+8]
                                            vmovss  dword ptr [rdi+14h], xmm0
                                            vmovss  dword ptr [rdi+10h], xmm1
                                          }
                                          _RDI->delay = _EDX;
                                          _RDI->fxDef.m_particleSystemDef = m_particleSystemDef;
                                          _RDI->aliasList = NULL;
                                          _RDI->loopSoundIndex = -1;
                                          if ( !v163 )
                                          {
                                            v168 = 0x7FFFFFFFi64;
                                            v169 = 0i64;
                                            do
                                            {
                                              v170 = name[v169];
                                              v171 = v168;
                                              v172 = aNull[v169++];
                                              --v168;
                                              if ( !v171 )
                                                break;
                                              if ( v170 != v172 )
                                              {
                                                _RDI->aliasList = SND_FindAlias(name);
                                                break;
                                              }
                                            }
                                            while ( v170 );
                                          }
                                          if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNuma) && soundalias[0] )
                                          {
                                            while ( 1 )
                                            {
                                              v173 = soundalias[v106];
                                              v174 = v98;
                                              v175 = aNull[v106++];
                                              --v98;
                                              if ( !v174 )
                                                break;
                                              if ( v173 != v175 )
                                              {
                                                _RDI->loopSoundIndex = CG_AddClientEntSound(&_RDI->origin, soundalias, &_RDI->angles, 0);
                                                break;
                                              }
                                              if ( !v173 )
                                              {
                                                ++s_clientExploders.numExploders;
                                                return v87;
                                              }
                                            }
                                          }
                                          ++s_clientExploders.numExploders;
                                          return v87;
                                        }
                                        else
                                        {
                                          __asm
                                          {
                                            vmovss  xmm0, dword ptr [rsp+2D0h+origin+8]
                                            vmovss  xmm3, dword ptr [rsp+2D0h+origin]
                                            vcvtss2sd xmm0, xmm0, xmm0
                                            vcvtss2sd xmm3, xmm3, xmm3
                                            vcvtss2sd xmm1, xmm1, xmm1
                                            vmovsd  [rsp+2D0h+var_2A8], xmm0
                                            vmovq   r9, xmm3
                                            vmovsd  [rsp+2D0h+fmt], xmm1
                                          }
                                          Com_PrintError(1, "Unable to add %i at [%.2f, %.2f, %.2f]-> Too many client exploders. Max is %d.\n", (unsigned int)v180, _R9, fmta, v179, 256);
                                          return v87;
                                        }
                                      }
                                    }
                                    return 0i64;
                                  }
                                }
                                while ( v95 );
                                v99 = v87;
                                if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                  __debugbreak();
                                do
                                {
                                  v100 = v94[(_QWORD)v99];
                                  v101 = v91;
                                  v102 = *v99++;
                                  --v91;
                                  if ( !v101 )
                                    break;
                                  if ( v100 != v102 )
                                  {
                                    Core_strcpy_truncate(v192, 0x80ui64, v87);
                                    v14 = "ent.v[ \"soundalias\" ] = ";
                                    v15 = v192;
                                    goto LABEL_17;
                                  }
                                }
                                while ( v100 );
                                if ( v87 != (char *)-24i64 )
                                {
                                  v103 = CG_ParseString(v87 + 24, name, 0x40u);
                                  v87 = (char *)v103;
                                  if ( v103 )
                                  {
                                    for ( jj = *v103; jj != 10; jj = *++v87 )
                                    {
                                      if ( jj == 13 )
                                        break;
                                      if ( !jj )
                                        break;
                                    }
                                    while ( 1 )
                                    {
                                      v105 = *v87;
                                      if ( (unsigned __int8)*v87 < 9u || (unsigned __int8)v105 > 0x20u || !v105 )
                                        break;
                                      ++v87;
                                    }
                                    v106 = 0i64;
                                    v107 = 0i64;
                                    v108 = 0x7FFFFFFFi64;
                                    do
                                    {
                                      v109 = (unsigned __int8)name[v107];
                                      v110 = v108;
                                      v111 = (unsigned __int8)aNil[v107++];
                                      --v108;
                                      if ( !v110 )
                                        break;
                                      if ( v109 != v111 )
                                      {
                                        v112 = v109 + 32;
                                        if ( (unsigned int)(v109 - 65) > 0x19 )
                                          v112 = v109;
                                        v109 = v112;
                                        v113 = v111 + 32;
                                        if ( (unsigned int)(v111 - 65) > 0x19 )
                                          v113 = v111;
                                        if ( v109 != v113 )
                                          goto LABEL_166;
                                      }
                                    }
                                    while ( v109 );
                                    name[0] = 0;
                                    goto LABEL_166;
                                  }
                                }
                                return 0i64;
                              }
                            }
                            else
                            {
                              v87 = (char *)CG_ParseIntFinish(v85, &v181);
                              if ( !v87 )
                                return 0i64;
LABEL_128:
                              v90 = v181;
                              v180 = v181;
                            }
                            if ( v90 > 0xFF )
                            {
                              LODWORD(v178) = 255;
                              LODWORD(fmt) = v90;
                              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14427A270, 289i64, text, fmt, v178);
                              v180 = v181;
                            }
                            goto LABEL_131;
                          }
                        }
                        while ( v73 );
                        v76 = 23i64;
                        v77 = v41;
                        if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                          __debugbreak();
                        do
                        {
                          v78 = v72[(_QWORD)v77];
                          v79 = v76;
                          v80 = *v77++;
                          --v76;
                          if ( !v79 )
                            break;
                          if ( v78 != v80 )
                          {
                            Core_strcpy_truncate(v192, 0x80ui64, v41);
                            v14 = "ent.v[ \"delay_max\" ] = ";
                            v15 = v192;
                            goto LABEL_17;
                          }
                        }
                        while ( v78 );
                        if ( v41 != (char *)-23i64 )
                        {
                          v41 = (char *)CG_ParseFloatFinish(v41 + 23, &v187);
                          if ( v41 )
                          {
                            Com_PrintWarning(0, "WARNING: delay_max not supported on client side exploders: exploder with fxid of %s and exploder id of %d.", text, 0i64);
                            goto LABEL_103;
                          }
                        }
                        return 0i64;
                      }
                    }
                    while ( v62 );
                    v65 = 23i64;
                    v66 = v41;
                    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    do
                    {
                      v67 = v61[(_QWORD)v66];
                      v68 = v65;
                      v69 = *v66++;
                      --v65;
                      if ( !v68 )
                        break;
                      if ( v67 != v69 )
                      {
                        Core_strcpy_truncate(v192, 0x80ui64, v41);
                        v14 = "ent.v[ \"delay_min\" ] = ";
                        v15 = v192;
                        goto LABEL_17;
                      }
                    }
                    while ( v67 );
                    if ( v41 != (char *)-23i64 )
                    {
                      v41 = (char *)CG_ParseFloatFinish(v41 + 23, &v186);
                      if ( v41 )
                      {
                        Com_PrintWarning(0, "WARNING: delay_min not supported on client side exploders: exploder with fxid of %s and exploder id of %d.", text, 0i64);
                        goto LABEL_87;
                      }
                    }
                    return 0i64;
                  }
                }
                while ( v51 );
                v54 = v41;
                if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                  __debugbreak();
                do
                {
                  v55 = v50[(_QWORD)v54];
                  v56 = v47;
                  v57 = *v54++;
                  --v47;
                  if ( !v56 )
                    break;
                  if ( v55 != v57 )
                  {
                    Core_strcpy_truncate(v192, 0x80ui64, v41);
                    v14 = "ent.v[ \"repeat\" ] = ";
                    v15 = v192;
                    goto LABEL_17;
                  }
                }
                while ( v55 );
                if ( v41 != (char *)-20i64 )
                {
                  v41 = (char *)CG_ParseIntFinish(v41 + 20, &v180);
                  if ( v41 )
                  {
                    Com_PrintWarning(0, "WARNING: repeat not supported on client side exploders: exploder with fxid of %s and exploder id of %d.", text, 0i64);
                    goto LABEL_71;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0i64;
}

/*
==============
CG_ParseExploderEx
==============
*/
char *CG_ParseExploderEx(LocalClientNum_t localClientNum, const char *line, EffectDefMap *effectDefMap, int *effectDefMapEntries)
{
  __int64 v5; 
  __int64 v6; 
  const char *v8; 
  char v10; 
  __int64 v11; 
  char v12; 
  char *v13; 
  const char *v14; 
  __int64 v15; 
  const char *v16; 
  char *v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  const char *v21; 
  const char *v22; 
  char i; 
  char v24; 
  const char *v25; 
  __int64 v27; 
  const char *v28; 
  char v29; 
  __int64 v30; 
  char v31; 
  char *v32; 
  char *v33; 
  __int64 v34; 
  __int64 v35; 
  char *v36; 
  char *v37; 
  char v38; 
  __int64 v39; 
  char v40; 
  char *v41; 
  char v42; 
  __int64 v43; 
  char v44; 
  __int64 v45; 
  char *v46; 
  char v47; 
  __int64 v48; 
  char v49; 
  __int64 v50; 
  char *v51; 
  __int64 v52; 
  char *v53; 
  char v54; 
  __int64 v55; 
  char v56; 
  char *v57; 
  char v58; 
  __int64 v59; 
  char v60; 
  __int64 v61; 
  char *v62; 
  __int64 v63; 
  char *v64; 
  char v65; 
  __int64 v66; 
  char v67; 
  __int64 v68; 
  char *v69; 
  char v70; 
  __int64 v71; 
  char v72; 
  __int64 v73; 
  char *v74; 
  char *v75; 
  char v76; 
  __int64 v77; 
  char v78; 
  __int64 v79; 
  char *v80; 
  char v81; 
  __int64 v82; 
  char v83; 
  __int64 v84; 
  char *v85; 
  char *v86; 
  char v87; 
  __int64 v88; 
  char v89; 
  __int64 v90; 
  char *v91; 
  char v92; 
  __int64 v93; 
  char v94; 
  const char *v95; 
  char m; 
  char v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  int v101; 
  __int64 v102; 
  int v103; 
  int v104; 
  int v105; 
  __int64 v106; 
  char *v107; 
  char *v108; 
  char v109; 
  __int64 v110; 
  char v111; 
  char *v112; 
  char v113; 
  __int64 v114; 
  char v115; 
  const char *v116; 
  char j; 
  char v118; 
  __int64 v119; 
  __int64 v120; 
  int v121; 
  __int64 v122; 
  int v123; 
  int v124; 
  int v125; 
  __int64 v126; 
  __int64 v127; 
  int v128; 
  __int64 v129; 
  int v130; 
  int v131; 
  int v132; 
  int *v133; 
  int k; 
  char *v135; 
  __int64 v136; 
  EffectDefMap *v137; 
  char v138; 
  __int64 v139; 
  char v140; 
  const ParticleSystemDef *m_particleSystemDef; 
  bool v154; 
  __int64 v159; 
  __int64 v160; 
  char v161; 
  __int64 v162; 
  char v163; 
  char v164; 
  __int64 v165; 
  char v166; 
  char *fmt; 
  __int64 v168; 
  float value; 
  unsigned int String; 
  FXRegisteredDef outDef; 
  LocalClientNum_t localClientNuma; 
  int *v173; 
  int v174; 
  float v175; 
  float v176; 
  EffectDefMap *v177; 
  vec3_t origin; 
  vec3_t angles; 
  char text[64]; 
  char dest[128]; 
  char name[64]; 
  char soundalias[64]; 
  char str[64]; 
  char effectName[64]; 

  v173 = effectDefMapEntries;
  v5 = 24i64;
  v177 = effectDefMap;
  v6 = 24i64;
  localClientNuma = localClientNum;
  outDef.m_particleSystemDef = NULL;
  v8 = line;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+2A0h+value], xmm0
  }
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v10 = v8["ent = createExploderEx( " - line];
    v11 = v6;
    v12 = *v8++;
    --v6;
    if ( !v11 )
      break;
    if ( v10 != v12 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, line);
      v25 = "ent = createExploderEx( ";
LABEL_24:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", dest, v25);
      return 0i64;
    }
  }
  while ( v10 );
  if ( line != (const char *)-24i64 )
  {
    v13 = (char *)CG_ParseString(line + 24, text, 0x40u);
    v14 = v13;
    if ( v13 )
    {
      v15 = 2i64;
      v16 = (const char *)(", " - v13);
      v17 = v13;
      do
      {
        v18 = v17[(_QWORD)v16];
        v19 = v15;
        v20 = *v17++;
        --v15;
        if ( !v19 )
          break;
        if ( v18 != v20 )
        {
          Core_strcpy_truncate(dest, 0x80ui64, v14);
          v25 = ", ";
          goto LABEL_24;
        }
      }
      while ( v18 );
      if ( v14 != (const char *)-2i64 )
      {
        v21 = CG_ParseString(v14 + 2, str, 0x40u);
        v22 = v21;
        if ( v21 )
        {
          for ( i = *v21; i != 10; i = *++v22 )
          {
            if ( i == 13 )
              break;
            if ( !i )
              break;
          }
          while ( 1 )
          {
            v24 = *v22;
            if ( *v22 < 9u || (unsigned __int8)v24 > 0x20u || !v24 )
              break;
            ++v22;
          }
          String = SL_FindString(str);
          if ( String )
          {
            v27 = 27i64;
            v28 = v22;
            do
            {
              v29 = v28["ent set_origin_and_angles( " - v22];
              v30 = v27;
              v31 = *v28++;
              --v27;
              if ( !v30 )
                break;
              if ( v29 != v31 )
              {
                Core_strcpy_truncate(dest, 0x80ui64, v22);
                v25 = "ent set_origin_and_angles( ";
                goto LABEL_24;
              }
            }
            while ( v29 );
            if ( v22 != (const char *)-27i64 )
            {
              v32 = (char *)CG_ParseVec3x2Finish(v22 + 27, &origin, &angles);
              v33 = v32;
              if ( v32 )
              {
                v34 = 19i64;
                v35 = 19i64;
                v36 = (char *)("ent.v[ \"delay\" ] = " - v32);
                v37 = v32;
                do
                {
                  v38 = v37[(_QWORD)v36];
                  v39 = v35;
                  v40 = *v37;
                  --v35;
                  ++v37;
                  if ( !v39 )
                    break;
                  if ( v38 != v40 )
                    goto LABEL_45;
                }
                while ( v38 );
                v41 = v33;
                do
                {
                  v42 = v41[(_QWORD)v36];
                  v43 = v34;
                  v44 = *v41++;
                  --v34;
                  if ( !v43 )
                    break;
                  if ( v42 != v44 )
                  {
                    Core_strcpy_truncate(dest, 0x80ui64, v33);
                    v25 = "ent.v[ \"delay\" ] = ";
                    goto LABEL_24;
                  }
                }
                while ( v42 );
                if ( v33 != (char *)-19i64 )
                {
                  v33 = (char *)CG_ParseFloatFinish(v33 + 19, &value);
                  if ( v33 )
                  {
LABEL_45:
                    v45 = 18i64;
                    v46 = v33;
                    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    do
                    {
                      v47 = v46["ent.v[ \"flag\" ] = " - v33];
                      v48 = v45;
                      v49 = *v46++;
                      --v45;
                      if ( !v48 )
                        break;
                      if ( v47 != v49 )
                        goto LABEL_52;
                    }
                    while ( v47 );
                    v33 = (char *)CG_SkipRestOfLine(v33);
                    if ( !v33 )
                      return 0i64;
LABEL_52:
                    v50 = 20i64;
                    v51 = v33;
                    v52 = 20i64;
                    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    v53 = (char *)("ent.v[ \"repeat\" ] = " - v33);
                    do
                    {
                      v54 = v51[(_QWORD)v53];
                      v55 = v52;
                      v56 = *v51++;
                      --v52;
                      if ( !v55 )
                        break;
                      if ( v54 != v56 )
                      {
LABEL_68:
                        v61 = 23i64;
                        v62 = v33;
                        v63 = 23i64;
                        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                          __debugbreak();
                        v64 = (char *)("ent.v[ \"delay_min\" ] = " - v33);
                        do
                        {
                          v65 = v62[(_QWORD)v64];
                          v66 = v63;
                          v67 = *v62++;
                          --v63;
                          if ( !v66 )
                            break;
                          if ( v65 != v67 )
                          {
LABEL_84:
                            v73 = 23i64;
                            v74 = v33;
                            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                              __debugbreak();
                            v75 = (char *)("ent.v[ \"delay_max\" ] = " - v33);
                            do
                            {
                              v76 = v74[(_QWORD)v75];
                              v77 = v73;
                              v78 = *v74++;
                              --v73;
                              if ( !v77 )
                                break;
                              if ( v76 != v78 )
                              {
LABEL_100:
                                v84 = 24i64;
                                v85 = v33;
                                if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                  __debugbreak();
                                v86 = (char *)("ent.v[ \"soundalias\" ] = " - v33);
                                do
                                {
                                  v87 = v86[(_QWORD)v85];
                                  v88 = v84;
                                  v89 = *v85++;
                                  --v84;
                                  v90 = 0x7FFFFFFFi64;
                                  if ( !v88 )
                                    break;
                                  if ( v87 != v89 )
                                  {
                                    name[0] = 0;
                                    v98 = 0i64;
LABEL_140:
                                    v106 = 23i64;
                                    v107 = v33;
                                    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                      __debugbreak();
                                    v108 = (char *)("ent.v[ \"loopsound\" ] = " - v33);
                                    do
                                    {
                                      v109 = v108[(_QWORD)v107];
                                      v110 = v106;
                                      v111 = *v107++;
                                      --v106;
                                      if ( !v110 )
                                        break;
                                      if ( v109 != v111 )
                                        goto LABEL_174;
                                    }
                                    while ( v109 );
                                    v112 = v33;
                                    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                      __debugbreak();
                                    do
                                    {
                                      v113 = v108[(_QWORD)v112];
                                      v114 = v61;
                                      v115 = *v112++;
                                      --v61;
                                      if ( !v114 )
                                        break;
                                      if ( v113 != v115 )
                                      {
                                        Core_strcpy_truncate(dest, 0x80ui64, v33);
                                        v25 = "ent.v[ \"loopsound\" ] = ";
                                        goto LABEL_24;
                                      }
                                    }
                                    while ( v113 );
                                    if ( v33 != (char *)-23i64 )
                                    {
                                      v116 = CG_ParseString(v33 + 23, soundalias, 0x40u);
                                      v33 = (char *)v116;
                                      if ( v116 )
                                      {
                                        for ( j = *v116; j != 10; j = *++v33 )
                                        {
                                          if ( j == 13 )
                                            break;
                                          if ( !j )
                                            break;
                                        }
                                        while ( 1 )
                                        {
                                          v118 = *v33;
                                          if ( (unsigned __int8)*v33 < 9u || (unsigned __int8)v118 > 0x20u || !v118 )
                                            break;
                                          ++v33;
                                        }
                                        v119 = 0x7FFFFFFFi64;
                                        v120 = 0i64;
                                        do
                                        {
                                          v121 = (unsigned __int8)soundalias[v120];
                                          v122 = v119;
                                          v123 = (unsigned __int8)aNil[v120++];
                                          --v119;
                                          if ( !v122 )
                                            break;
                                          if ( v121 != v123 )
                                          {
                                            v124 = v121 + 32;
                                            if ( (unsigned int)(v121 - 65) > 0x19 )
                                              v124 = v121;
                                            v121 = v124;
                                            v125 = v123 + 32;
                                            if ( (unsigned int)(v123 - 65) > 0x19 )
                                              v125 = v123;
                                            if ( v121 != v125 )
                                              goto LABEL_175;
                                          }
                                        }
                                        while ( v121 );
LABEL_174:
                                        soundalias[0] = 0;
LABEL_175:
                                        v126 = 0x7FFFFFFFi64;
                                        v127 = 0i64;
                                        do
                                        {
                                          v128 = (unsigned __int8)text[v127];
                                          v129 = v126;
                                          v130 = (unsigned __int8)aNoFx[v127];
                                          --v126;
                                          ++v127;
                                          if ( !v129 )
                                            break;
                                          if ( v128 != v130 )
                                          {
                                            v131 = v128 + 32;
                                            if ( (unsigned int)(v128 - 65) > 0x19 )
                                              v131 = v128;
                                            v128 = v131;
                                            v132 = v130 + 32;
                                            if ( (unsigned int)(v130 - 65) > 0x19 )
                                              v132 = v130;
                                            if ( v128 != v132 )
                                            {
                                              v133 = v173;
                                              for ( k = 0; k < *v133; ++k )
                                              {
                                                v135 = text;
                                                v136 = 0x7FFFFFFFi64;
                                                v137 = &v177[k];
                                                if ( !v137 )
                                                {
                                                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                                    __debugbreak();
                                                  v133 = v173;
                                                }
                                                while ( 1 )
                                                {
                                                  v138 = v135[(char *)v137 - text];
                                                  v139 = v136;
                                                  v140 = *v135++;
                                                  --v136;
                                                  if ( !v139 )
                                                  {
LABEL_193:
                                                    Core_strcpy(effectName, 0x40ui64, v137->filename);
                                                    FX_LoadEffect(effectName, &outDef);
                                                    m_particleSystemDef = outDef.m_particleSystemDef;
                                                    goto LABEL_197;
                                                  }
                                                  if ( v138 != v140 )
                                                    break;
                                                  if ( !v138 )
                                                    goto LABEL_193;
                                                }
                                              }
                                              Com_PrintError(1, "Couldn't find '%s' in _fx.gsc map.\n", text);
                                              break;
                                            }
                                          }
                                        }
                                        while ( v128 );
                                        m_particleSystemDef = NULL;
                                        outDef.m_particleSystemDef = NULL;
LABEL_197:
                                        __asm
                                        {
                                          vmovss  xmm0, [rsp+2A0h+value]
                                          vmulss  xmm1, xmm0, cs:__real@447a0000
                                          vcvttss2si edx, xmm1
                                          vmovss  xmm1, dword ptr [rsp+2A0h+origin+4]
                                        }
                                        if ( s_clientExploders.numExploders < 0x100 )
                                        {
                                          __asm { vmovss  xmm0, dword ptr [rsp+2A0h+origin] }
                                          _RDI = &s_clientExploders.exploders[(unsigned __int64)s_clientExploders.numExploders];
                                          v154 = name[0] == 0;
                                          s_clientExploders.name[s_clientExploders.numExploders] = String;
                                          __asm
                                          {
                                            vmovss  dword ptr [rdi], xmm0
                                            vmovss  xmm0, dword ptr [rbp+1A0h+origin+8]
                                            vmovss  dword ptr [rdi+8], xmm0
                                            vmovss  xmm0, dword ptr [rbp+1A0h+angles]
                                            vmovss  dword ptr [rdi+4], xmm1
                                            vmovss  xmm1, dword ptr [rbp+1A0h+angles+4]
                                            vmovss  dword ptr [rdi+0Ch], xmm0
                                            vmovss  xmm0, dword ptr [rbp+1A0h+angles+8]
                                            vmovss  dword ptr [rdi+14h], xmm0
                                            vmovss  dword ptr [rdi+10h], xmm1
                                          }
                                          _RDI->delay = _EDX;
                                          _RDI->fxDef.m_particleSystemDef = m_particleSystemDef;
                                          _RDI->aliasList = NULL;
                                          _RDI->loopSoundIndex = -1;
                                          if ( !v154 )
                                          {
                                            v159 = 0x7FFFFFFFi64;
                                            v160 = 0i64;
                                            do
                                            {
                                              v161 = name[v160];
                                              v162 = v159;
                                              v163 = aNull[v160++];
                                              --v159;
                                              if ( !v162 )
                                                break;
                                              if ( v161 != v163 )
                                              {
                                                _RDI->aliasList = SND_FindAlias(name);
                                                break;
                                              }
                                            }
                                            while ( v161 );
                                          }
                                          if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNuma) && soundalias[0] )
                                          {
                                            while ( 1 )
                                            {
                                              v164 = soundalias[v98];
                                              v165 = v90;
                                              v166 = aNull[v98++];
                                              --v90;
                                              if ( !v165 )
                                                break;
                                              if ( v164 != v166 )
                                              {
                                                _RDI->loopSoundIndex = CG_AddClientEntSound(&_RDI->origin, soundalias, &_RDI->angles, 0);
                                                break;
                                              }
                                              if ( !v164 )
                                              {
                                                ++s_clientExploders.numExploders;
                                                return v33;
                                              }
                                            }
                                          }
                                          ++s_clientExploders.numExploders;
                                          return v33;
                                        }
                                        else
                                        {
                                          __asm
                                          {
                                            vmovss  xmm0, dword ptr [rbp+1A0h+origin+8]
                                            vmovss  xmm3, dword ptr [rsp+2A0h+origin]
                                            vcvtss2sd xmm0, xmm0, xmm0
                                            vcvtss2sd xmm3, xmm3, xmm3
                                            vcvtss2sd xmm1, xmm1, xmm1
                                            vmovsd  [rsp+2A0h+var_278], xmm0
                                            vmovq   r9, xmm3
                                            vmovsd  [rsp+2A0h+fmt], xmm1
                                          }
                                          Com_PrintError(1, "Unable to add %i at [%.2f, %.2f, %.2f]-> Too many client exploders. Max is %d.\n", String, _R9, fmt, v168, 256);
                                          return v33;
                                        }
                                      }
                                    }
                                    return 0i64;
                                  }
                                }
                                while ( v87 );
                                v91 = v33;
                                if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                                  __debugbreak();
                                do
                                {
                                  v92 = v86[(_QWORD)v91];
                                  v93 = v5;
                                  v94 = *v91++;
                                  --v5;
                                  if ( !v93 )
                                    break;
                                  if ( v92 != v94 )
                                  {
                                    Core_strcpy_truncate(dest, 0x80ui64, v33);
                                    v25 = "ent.v[ \"soundalias\" ] = ";
                                    goto LABEL_24;
                                  }
                                }
                                while ( v92 );
                                if ( v33 != (char *)-24i64 )
                                {
                                  v95 = CG_ParseString(v33 + 24, name, 0x40u);
                                  v33 = (char *)v95;
                                  if ( v95 )
                                  {
                                    for ( m = *v95; m != 10; m = *++v33 )
                                    {
                                      if ( m == 13 )
                                        break;
                                      if ( !m )
                                        break;
                                    }
                                    while ( 1 )
                                    {
                                      v97 = *v33;
                                      if ( (unsigned __int8)*v33 < 9u || (unsigned __int8)v97 > 0x20u || !v97 )
                                        break;
                                      ++v33;
                                    }
                                    v98 = 0i64;
                                    v99 = 0i64;
                                    v100 = 0x7FFFFFFFi64;
                                    do
                                    {
                                      v101 = (unsigned __int8)name[v99];
                                      v102 = v100;
                                      v103 = (unsigned __int8)aNil[v99++];
                                      --v100;
                                      if ( !v102 )
                                        break;
                                      if ( v101 != v103 )
                                      {
                                        v104 = v101 + 32;
                                        if ( (unsigned int)(v101 - 65) > 0x19 )
                                          v104 = v101;
                                        v101 = v104;
                                        v105 = v103 + 32;
                                        if ( (unsigned int)(v103 - 65) > 0x19 )
                                          v105 = v103;
                                        if ( v101 != v105 )
                                          goto LABEL_140;
                                      }
                                    }
                                    while ( v101 );
                                    name[0] = 0;
                                    goto LABEL_140;
                                  }
                                }
                                return 0i64;
                              }
                            }
                            while ( v76 );
                            v79 = 23i64;
                            v80 = v33;
                            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                              __debugbreak();
                            do
                            {
                              v81 = v80[(_QWORD)v75];
                              v82 = v79;
                              v83 = *v80++;
                              --v79;
                              if ( !v82 )
                                break;
                              if ( v81 != v83 )
                              {
                                Core_strcpy_truncate(dest, 0x80ui64, v33);
                                v25 = "ent.v[ \"delay_max\" ] = ";
                                goto LABEL_24;
                              }
                            }
                            while ( v81 );
                            if ( v33 != (char *)-23i64 )
                            {
                              v33 = (char *)CG_ParseFloatFinish(v33 + 23, &v176);
                              if ( v33 )
                              {
                                Com_PrintWarning(0, "WARNING: delay_max not supported on client side exploders: exploder with fxid of %s and exploder name of %s.", text, str);
                                goto LABEL_100;
                              }
                            }
                            return 0i64;
                          }
                        }
                        while ( v65 );
                        v68 = 23i64;
                        v69 = v33;
                        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                          __debugbreak();
                        do
                        {
                          v70 = v69[(_QWORD)v64];
                          v71 = v68;
                          v72 = *v69++;
                          --v68;
                          if ( !v71 )
                            break;
                          if ( v70 != v72 )
                          {
                            Core_strcpy_truncate(dest, 0x80ui64, v33);
                            v25 = "ent.v[ \"delay_min\" ] = ";
                            goto LABEL_24;
                          }
                        }
                        while ( v70 );
                        if ( v33 != (char *)-23i64 )
                        {
                          v33 = (char *)CG_ParseFloatFinish(v33 + 23, &v175);
                          if ( v33 )
                          {
                            Com_PrintWarning(0, "WARNING: delay_min not supported on client side exploders: exploder with fxid of %s and exploder name of %s.", text, str);
                            goto LABEL_84;
                          }
                        }
                        return 0i64;
                      }
                    }
                    while ( v54 );
                    v57 = v33;
                    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    do
                    {
                      v58 = v57[(_QWORD)v53];
                      v59 = v50;
                      v60 = *v57++;
                      --v50;
                      if ( !v59 )
                        break;
                      if ( v58 != v60 )
                      {
                        Core_strcpy_truncate(dest, 0x80ui64, v33);
                        v25 = "ent.v[ \"repeat\" ] = ";
                        goto LABEL_24;
                      }
                    }
                    while ( v58 );
                    if ( v33 != (char *)-20i64 )
                    {
                      v33 = (char *)CG_ParseIntFinish(v33 + 20, &v174);
                      if ( v33 )
                      {
                        Com_PrintWarning(0, "WARNING: repeat not supported on client side exploders: exploder with fxid of %s and exploder name of %s.", text, str);
                        goto LABEL_68;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            Com_PrintWarning(0, "WARNING: failed to find script string for exploder name '%s' with fx '%s'.", str, text);
          }
        }
      }
    }
  }
  return 0i64;
}

/*
==============
CG_ParseFloatFinish
==============
*/
const char *CG_ParseFloatFinish(const char *line, float *value)
{
  const char *v2; 
  char i; 
  char v5; 
  char dest[128]; 

  v2 = line;
  if ( j_sscanf(line, "%f", value) == 1 )
  {
    for ( i = *v2; i != 10; i = *++v2 )
    {
      if ( i == 13 )
        break;
      if ( !i )
        break;
    }
    while ( 1 )
    {
      v5 = *v2;
      if ( *v2 < 9u || (unsigned __int8)v5 > 0x20u || !v5 )
        break;
      ++v2;
    }
    return v2;
  }
  else
  {
    Core_strcpy_truncate(dest, 0x80ui64, v2);
    Com_PrintError(1, "Expected a float instead of '%s'\n", dest);
    return 0i64;
  }
}

/*
==============
CG_ParseIntFinish
==============
*/
const char *CG_ParseIntFinish(const char *line, int *value)
{
  const char *v2; 
  char i; 
  char v5; 
  char dest[128]; 

  v2 = line;
  if ( j_sscanf(line, "%i", value) == 1 )
  {
    for ( i = *v2; i != 10; i = *++v2 )
    {
      if ( i == 13 )
        break;
      if ( !i )
        break;
    }
    while ( 1 )
    {
      v5 = *v2;
      if ( *v2 < 9u || (unsigned __int8)v5 > 0x20u || !v5 )
        break;
      ++v2;
    }
    return v2;
  }
  else
  {
    Core_strcpy_truncate(dest, 0x80ui64, v2);
    Com_PrintError(1, "Expected an int instead of '%s'\n", dest);
    return 0i64;
  }
}

/*
==============
CG_ParseIntervalSound
==============
*/
const char *CG_ParseIntervalSound(LocalClientNum_t localClientNum, const char *line)
{
  __int64 v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  char *v11; 
  char v12; 
  const char *v13; 
  char *v14; 
  __int64 v16; 
  __int64 v17; 
  char *v18; 
  char *i; 
  char v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  char *v24; 
  char v25; 
  __int64 v26; 
  char v27; 
  char *v28; 
  const char *v29; 
  char *v30; 
  char *v31; 
  char v32; 
  __int64 v33; 
  char v34; 
  const char *v35; 
  char *v36; 
  char v37; 
  __int64 v38; 
  char v39; 
  const char *v40; 
  __int64 v41; 
  const char *v42; 
  __int64 v43; 
  char v44; 
  __int64 v45; 
  char v46; 
  char *v47; 
  const char *v48; 
  char *v49; 
  char *v50; 
  char v51; 
  __int64 v52; 
  char v53; 
  char *v54; 
  const char *v55; 
  __int64 v56; 
  char *v57; 
  char *v58; 
  char v59; 
  __int64 v60; 
  char v61; 
  const char *v62; 
  const char *v63; 
  char j; 
  char v65; 
  __int64 v66; 
  SndAliasList *Alias; 
  char *fmt; 
  __int64 v90; 
  float v91; 
  float value; 
  vec3_t origin; 
  vec3_t angles; 
  char v95[128]; 
  char dest[128]; 
  char text[256]; 

  v6 = 28i64;
  v7 = line;
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v8 = v7["ent = createIntervalSound();" - line];
    v9 = v6;
    v10 = *v7++;
    --v6;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, line);
      v13 = "ent = createIntervalSound();";
      v14 = dest;
LABEL_13:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", v14, v13);
      return 0i64;
    }
  }
  while ( v8 );
  v11 = (char *)(line + 28);
  if ( line != (const char *)-28i64 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( (unsigned __int8)*v11 < 9u || (unsigned __int8)v12 > 0x20u || !v12 )
        break;
      ++v11;
    }
    v16 = 27i64;
    v17 = 27i64;
    v18 = (char *)("ent set_origin_and_angles( " - v11);
    for ( i = v11; ; v12 = *i )
    {
      v20 = i[(_QWORD)v18];
      v21 = v17;
      ++i;
      --v17;
      if ( !v21 )
      {
LABEL_34:
        v36 = v11;
        do
        {
          v37 = v36[(_QWORD)v18];
          v38 = v16;
          v39 = *v36++;
          --v16;
          if ( !v38 )
            break;
          if ( v37 != v39 )
          {
            Core_strcpy_truncate(v95, 0x80ui64, v11);
            v13 = "ent set_origin_and_angles( ";
            v14 = v95;
            goto LABEL_13;
          }
        }
        while ( v37 );
        if ( v11 == (char *)-27i64 )
          return 0i64;
        v35 = CG_ParseVec3x2Finish(v11 + 27, &origin, &angles);
        goto LABEL_40;
      }
      if ( v20 != v12 )
        break;
      if ( !v20 )
        goto LABEL_34;
    }
    v22 = 21i64;
    v23 = 21i64;
    v24 = v11;
    do
    {
      v25 = v24["ent.v[ \"origin\" ] = (" - v11];
      v26 = v23;
      v27 = *v24++;
      --v23;
      if ( !v26 )
        break;
      if ( v25 != v27 )
      {
        Core_strcpy_truncate(v95, 0x80ui64, v11);
        v13 = "ent.v[ \"origin\" ] = (";
        v14 = v95;
        goto LABEL_13;
      }
    }
    while ( v25 );
    if ( v11 == (char *)-21i64 )
      return 0i64;
    v28 = (char *)CG_ParseVec3Finish(v11 + 21, &origin);
    v29 = v28;
    if ( !v28 )
      return 0i64;
    v30 = v28;
    v31 = (char *)("ent.v[ \"angles\" ] = (" - v28);
    do
    {
      v32 = v30[(_QWORD)v31];
      v33 = v22;
      v34 = *v30++;
      --v22;
      if ( !v33 )
        break;
      if ( v32 != v34 )
      {
        Core_strcpy_truncate(v95, 0x80ui64, v29);
        v13 = "ent.v[ \"angles\" ] = (";
        v14 = v95;
        goto LABEL_13;
      }
    }
    while ( v32 );
    if ( v29 == (const char *)-21i64 )
      return 0i64;
    v35 = CG_ParseVec3Finish(v29 + 21, &angles);
LABEL_40:
    v40 = v35;
    if ( v35 )
    {
      v41 = 23i64;
      v42 = v35;
      v43 = 23i64;
      do
      {
        v44 = v42["ent.v[ \"delay_min\" ] = " - v40];
        v45 = v43;
        v46 = *v42++;
        --v43;
        if ( !v45 )
          break;
        if ( v44 != v46 )
        {
          Core_strcpy_truncate(v95, 0x80ui64, v40);
          v13 = "ent.v[ \"delay_min\" ] = ";
          v14 = v95;
          goto LABEL_13;
        }
      }
      while ( v44 );
      if ( v40 != (const char *)-23i64 )
      {
        v47 = (char *)CG_ParseFloatFinish(v40 + 23, &value);
        v48 = v47;
        if ( v47 )
        {
          v49 = v47;
          v50 = (char *)("ent.v[ \"delay_max\" ] = " - v47);
          do
          {
            v51 = v49[(_QWORD)v50];
            v52 = v41;
            v53 = *v49++;
            --v41;
            if ( !v52 )
              break;
            if ( v51 != v53 )
            {
              Core_strcpy_truncate(v95, 0x80ui64, v48);
              v13 = "ent.v[ \"delay_max\" ] = ";
              v14 = v95;
              goto LABEL_13;
            }
          }
          while ( v51 );
          if ( v48 != (const char *)-23i64 )
          {
            v54 = (char *)CG_ParseFloatFinish(v48 + 23, &v91);
            v55 = v54;
            if ( v54 )
            {
              v56 = 24i64;
              v57 = (char *)("ent.v[ \"soundalias\" ] = " - v54);
              v58 = v54;
              do
              {
                v59 = v58[(_QWORD)v57];
                v60 = v56;
                v61 = *v58++;
                --v56;
                if ( !v60 )
                  break;
                if ( v59 != v61 )
                {
                  Core_strcpy_truncate(v95, 0x80ui64, v55);
                  v13 = "ent.v[ \"soundalias\" ] = ";
                  v14 = v95;
                  goto LABEL_13;
                }
              }
              while ( v59 );
              if ( v55 != (const char *)-24i64 )
              {
                v62 = CG_ParseString(v55 + 24, text, 0x100u);
                v63 = v62;
                if ( v62 )
                {
                  for ( j = *v62; j != 10; j = *++v63 )
                  {
                    if ( j == 13 )
                      break;
                    if ( !j )
                      break;
                  }
                  while ( 1 )
                  {
                    v65 = *v63;
                    if ( *v63 < 9u || (unsigned __int8)v65 > 0x20u || !v65 )
                      break;
                    ++v63;
                  }
                  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
                  {
                    v66 = s_clientEntIntervalSoundCount;
                    __asm
                    {
                      vmovaps [rsp+2D0h+var_40], xmm6
                      vmovaps [rsp+2D0h+var_50], xmm7
                      vmovss  xmm6, [rsp+2D0h+var_290]
                      vmovss  xmm7, [rsp+2D0h+value]
                      vmovss  xmm1, dword ptr [rsp+2D0h+origin+4]
                    }
                    if ( s_clientEntIntervalSoundCount == 128 )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rsp+2D0h+origin+8]
                        vmovss  xmm3, dword ptr [rsp+2D0h+origin]
                        vcvtss2sd xmm0, xmm0, xmm0
                        vcvtss2sd xmm3, xmm3, xmm3
                        vcvtss2sd xmm1, xmm1, xmm1
                        vmovsd  [rsp+2D0h+var_2A8], xmm0
                        vmovq   r9, xmm3
                        vmovsd  [rsp+2D0h+fmt], xmm1
                      }
                      Com_PrintError(1, "Unable to add %s at [%.2f, %.2f, %.2f]-> Too many client ent interval sounds.  Reduce sounds or increase MAX_CLIENT_ENT_INTERVAL_SOUNDS (%d).\n", text, _R9, fmt, v90, s_clientEntIntervalSoundCount);
                    }
                    else
                    {
                      __asm { vmovss  xmm0, dword ptr [rsp+2D0h+origin] }
                      ++s_clientEntIntervalSoundCount;
                      _RDI = &s_clientEntIntervalSounds[v66];
                      __asm
                      {
                        vmovss  dword ptr [rdi], xmm0
                        vmovss  xmm0, dword ptr [rsp+2D0h+origin+8]
                        vmovss  dword ptr [rdi+4], xmm1
                        vmovss  xmm1, dword ptr [rsp+2D0h+angles]
                        vmovss  dword ptr [rdi+8], xmm0
                        vmovss  xmm0, dword ptr [rsp+2D0h+angles+4]
                        vmovss  dword ptr [rdi+0Ch], xmm1
                        vmovss  xmm1, dword ptr [rsp+2D0h+angles+8]
                        vmovss  dword ptr [rdi+14h], xmm1
                        vmovss  dword ptr [rdi+10h], xmm0
                      }
                      Alias = SND_FindAlias(text);
                      __asm
                      {
                        vmulss  xmm0, xmm7, cs:__real@447a0000
                        vmulss  xmm1, xmm6, cs:__real@447a0000
                        vcvttss2si ecx, xmm1
                      }
                      _RDI->aliasList = Alias;
                      __asm { vcvttss2si eax, xmm0 }
                      _RDI->delayMinMS = _EAX;
                      _RDI->delayMaxMS = _ECX;
                      if ( _EAX >= _ECX )
                        _RDI->delayMaxMS = _EAX + 1;
                      _RDI->nextTime = 0;
                    }
                    __asm
                    {
                      vmovaps xmm6, [rsp+2D0h+var_40]
                      vmovaps xmm7, [rsp+2D0h+var_50]
                    }
                  }
                  return v63;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0i64;
}

/*
==============
CG_ParseReactiveSound
==============
*/
const char *CG_ParseReactiveSound(LocalClientNum_t localClientNum, const char *line)
{
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  char *v10; 
  char v11; 
  const char *v12; 
  char *v13; 
  __int64 v15; 
  __int64 v16; 
  char *v17; 
  char *i; 
  char v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  char *v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  char *v27; 
  const char *v28; 
  char *v29; 
  char *v30; 
  char v31; 
  __int64 v32; 
  char v33; 
  const char *v34; 
  char *v35; 
  char v36; 
  __int64 v37; 
  char v38; 
  const char *v39; 
  __int64 v40; 
  const char *v41; 
  char v42; 
  __int64 v43; 
  char v44; 
  const char *v45; 
  const char *v46; 
  char j; 
  char v48; 
  __int64 v49; 
  char *k; 
  char v51; 
  const char *v53; 
  const char *v54; 
  SndAliasList *Alias; 
  char *fmt; 
  __int64 v74; 
  float value; 
  vec3_t origin; 
  vec3_t angles; 
  char v78[128]; 
  char dest[128]; 
  char text[256]; 

  v5 = 26i64;
  v6 = line;
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v7 = v6["ent = createReactiveEnt();" - line];
    v8 = v5;
    v9 = *v6++;
    --v5;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, line);
      v12 = "ent = createReactiveEnt();";
      v13 = dest;
LABEL_13:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", v13, v12);
      return 0i64;
    }
  }
  while ( v7 );
  v10 = (char *)(line + 26);
  if ( line == (const char *)-26i64 )
    return 0i64;
  while ( 1 )
  {
    v11 = *v10;
    if ( (unsigned __int8)*v10 < 9u || (unsigned __int8)v11 > 0x20u || !v11 )
      break;
    ++v10;
  }
  v15 = 27i64;
  v16 = 27i64;
  v17 = (char *)("ent set_origin_and_angles( " - v10);
  for ( i = v10; ; v11 = *i )
  {
    v19 = i[(_QWORD)v17];
    v20 = v16;
    ++i;
    --v16;
    if ( !v20 )
    {
LABEL_34:
      v35 = v10;
      do
      {
        v36 = v35[(_QWORD)v17];
        v37 = v15;
        v38 = *v35++;
        --v15;
        if ( !v37 )
          break;
        if ( v36 != v38 )
        {
          Core_strcpy_truncate(v78, 0x80ui64, v10);
          v12 = "ent set_origin_and_angles( ";
          v13 = v78;
          goto LABEL_13;
        }
      }
      while ( v36 );
      if ( v10 == (char *)-27i64 )
        return 0i64;
      v34 = CG_ParseVec3x2Finish(v10 + 27, &origin, &angles);
      goto LABEL_40;
    }
    if ( v19 != v11 )
      break;
    if ( !v19 )
      goto LABEL_34;
  }
  v21 = 21i64;
  v22 = 21i64;
  v23 = v10;
  do
  {
    v24 = v23["ent.v[ \"origin\" ] = (" - v10];
    v25 = v22;
    v26 = *v23++;
    --v22;
    if ( !v25 )
      break;
    if ( v24 != v26 )
    {
      Core_strcpy_truncate(v78, 0x80ui64, v10);
      v12 = "ent.v[ \"origin\" ] = (";
      v13 = v78;
      goto LABEL_13;
    }
  }
  while ( v24 );
  if ( v10 == (char *)-21i64 )
    return 0i64;
  v27 = (char *)CG_ParseVec3Finish(v10 + 21, &origin);
  v28 = v27;
  if ( !v27 )
    return 0i64;
  v29 = v27;
  v30 = (char *)("ent.v[ \"angles\" ] = (" - v27);
  do
  {
    v31 = v29[(_QWORD)v30];
    v32 = v21;
    v33 = *v29++;
    --v21;
    if ( !v32 )
      break;
    if ( v31 != v33 )
    {
      Core_strcpy_truncate(v78, 0x80ui64, v28);
      v12 = "ent.v[ \"angles\" ] = (";
      v13 = v78;
      goto LABEL_13;
    }
  }
  while ( v31 );
  if ( v28 == (const char *)-21i64 )
    return 0i64;
  v34 = CG_ParseVec3Finish(v28 + 21, &angles);
LABEL_40:
  v39 = v34;
  if ( !v34 )
    return 0i64;
  v40 = 24i64;
  v41 = v34;
  do
  {
    v42 = v41["ent.v[ \"soundalias\" ] = " - v39];
    v43 = v40;
    v44 = *v41++;
    --v40;
    if ( !v43 )
      break;
    if ( v42 != v44 )
    {
      Core_strcpy_truncate(v78, 0x80ui64, v39);
      v12 = "ent.v[ \"soundalias\" ] = ";
      v13 = v78;
      goto LABEL_13;
    }
  }
  while ( v42 );
  if ( v39 == (const char *)-24i64 )
    return 0i64;
  v45 = CG_ParseString(v39 + 24, text, 0x100u);
  v46 = v45;
  if ( !v45 )
    return 0i64;
  for ( j = *v45; j != 10; j = *++v46 )
  {
    if ( j == 13 )
      break;
    if ( !j )
      break;
  }
  while ( 1 )
  {
    v48 = *v46;
    if ( *v46 < 9u || (unsigned __int8)v48 > 0x20u || !v48 )
      break;
    ++v46;
  }
  v49 = 29i64;
  for ( k = (char *)v46; ; v48 = *k )
  {
    v51 = (k++)["ent.v[ \"reactive_radius\" ] = " - v46];
    if ( !v49-- )
      break;
    if ( v51 != v48 )
    {
      Core_strcpy_truncate(v78, 0x80ui64, v46);
      v12 = "ent.v[ \"reactive_radius\" ] = ";
      v13 = v78;
      goto LABEL_13;
    }
    if ( !v51 )
      break;
  }
  v53 = v46 + 29;
  if ( !v53 )
    return 0i64;
  v54 = CG_ParseFloatFinish(v53, &value);
  if ( !v54 )
    return 0i64;
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    __asm
    {
      vmovaps [rsp+2B0h+var_30], xmm6
      vmovss  xmm6, [rsp+2B0h+value]
      vmovss  xmm1, dword ptr [rsp+2B0h+origin+4]
    }
    if ( s_clientEntReactiveSoundCount == 128 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+2B0h+origin+8]
        vmovss  xmm3, dword ptr [rsp+2B0h+origin]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+2B0h+var_288], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+2B0h+fmt], xmm1
      }
      Com_PrintError(1, "Unable to add %s at [%.2f, %.2f, %.2f]-> Too many client ent reactive sounds.  Reduce sounds or increase MAX_CLIENT_ENT_REACTIVE_SOUNDS (%d).\n", text, _R9, fmt, v74, s_clientEntReactiveSoundCount);
      __asm { vmovaps xmm6, [rsp+2B0h+var_30] }
      return v54;
    }
    __asm { vmovss  xmm0, dword ptr [rsp+2B0h+origin] }
    _RBX = s_clientEntReactiveSoundCount;
    _RSI = s_clientEntReactiveSounds;
    ++s_clientEntReactiveSoundCount;
    __asm
    {
      vmovss  dword ptr [rsi+rbx*8], xmm0
      vmovss  xmm0, dword ptr [rsp+2B0h+origin+8]
      vmovss  dword ptr [rsi+rbx*8+4], xmm1
      vmovss  xmm1, dword ptr [rsp+2B0h+angles]
      vmovss  dword ptr [rsi+rbx*8+8], xmm0
      vmovss  xmm0, dword ptr [rsp+2B0h+angles+4]
      vmovss  dword ptr [rsi+rbx*8+0Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+2B0h+angles+8]
      vmovss  dword ptr [rsi+rbx*8+14h], xmm1
      vmovss  dword ptr [rsi+rbx*8+10h], xmm0
    }
    Alias = SND_FindAlias(text);
    __asm
    {
      vmovss  dword ptr [rsi+rbx*8+20h], xmm6
      vmovaps xmm6, [rsp+2B0h+var_30]
    }
    s_clientEntReactiveSounds[_RBX].aliasList = Alias;
    s_clientEntReactiveSounds[_RBX].nextTime = 0;
  }
  return v54;
}

/*
==============
CG_ParseSound
==============
*/
const char *CG_ParseSound(LocalClientNum_t localClientNum, const char *line)
{
  __int64 v2; 
  __int64 v3; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  char *v10; 
  char v11; 
  const char *v12; 
  char *v13; 
  __int64 v15; 
  __int64 v16; 
  char *v17; 
  char *i; 
  char v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  char *v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  char *v27; 
  const char *v28; 
  char *v29; 
  char *v30; 
  char v31; 
  __int64 v32; 
  char v33; 
  const char *v34; 
  char *v35; 
  char v36; 
  __int64 v37; 
  char v38; 
  const char *v39; 
  const char *v40; 
  char v41; 
  __int64 v42; 
  char v43; 
  const char *v44; 
  const char *v45; 
  char j; 
  char v47; 
  SndAliasList *Alias; 
  int v63; 
  char *fmt; 
  __int64 v66; 
  vec3_t origin; 
  vec3_t angles; 
  char v69[128]; 
  char dest[128]; 
  char text[256]; 

  v2 = 24i64;
  v3 = 24i64;
  v6 = line;
  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v7 = v6["ent = createLoopSound();" - line];
    v8 = v3;
    v9 = *v6++;
    --v3;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      Core_strcpy_truncate(dest, 0x80ui64, line);
      v12 = "ent = createLoopSound();";
      v13 = dest;
LABEL_13:
      Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", v13, v12);
      return 0i64;
    }
  }
  while ( v7 );
  v10 = (char *)(line + 24);
  if ( line == (const char *)-24i64 )
    return 0i64;
  while ( 1 )
  {
    v11 = *v10;
    if ( (unsigned __int8)*v10 < 9u || (unsigned __int8)v11 > 0x20u || !v11 )
      break;
    ++v10;
  }
  v15 = 27i64;
  v16 = 27i64;
  v17 = (char *)("ent set_origin_and_angles( " - v10);
  for ( i = v10; ; v11 = *i )
  {
    v19 = i[(_QWORD)v17];
    v20 = v16;
    ++i;
    --v16;
    if ( !v20 )
    {
LABEL_34:
      v35 = v10;
      do
      {
        v36 = v35[(_QWORD)v17];
        v37 = v15;
        v38 = *v35++;
        --v15;
        if ( !v37 )
          break;
        if ( v36 != v38 )
        {
          Core_strcpy_truncate(v69, 0x80ui64, v10);
          v12 = "ent set_origin_and_angles( ";
          v13 = v69;
          goto LABEL_13;
        }
      }
      while ( v36 );
      if ( v10 == (char *)-27i64 )
        return 0i64;
      v34 = CG_ParseVec3x2Finish(v10 + 27, &origin, &angles);
      goto LABEL_40;
    }
    if ( v19 != v11 )
      break;
    if ( !v19 )
      goto LABEL_34;
  }
  v21 = 21i64;
  v22 = 21i64;
  v23 = v10;
  do
  {
    v24 = v23["ent.v[ \"origin\" ] = (" - v10];
    v25 = v22;
    v26 = *v23++;
    --v22;
    if ( !v25 )
      break;
    if ( v24 != v26 )
    {
      Core_strcpy_truncate(v69, 0x80ui64, v10);
      v12 = "ent.v[ \"origin\" ] = (";
      v13 = v69;
      goto LABEL_13;
    }
  }
  while ( v24 );
  if ( v10 == (char *)-21i64 )
    return 0i64;
  v27 = (char *)CG_ParseVec3Finish(v10 + 21, &origin);
  v28 = v27;
  if ( !v27 )
    return 0i64;
  v29 = v27;
  v30 = (char *)("ent.v[ \"angles\" ] = (" - v27);
  do
  {
    v31 = v29[(_QWORD)v30];
    v32 = v21;
    v33 = *v29++;
    --v21;
    if ( !v32 )
      break;
    if ( v31 != v33 )
    {
      Core_strcpy_truncate(v69, 0x80ui64, v28);
      v12 = "ent.v[ \"angles\" ] = (";
      v13 = v69;
      goto LABEL_13;
    }
  }
  while ( v31 );
  if ( v28 == (const char *)-21i64 )
    return 0i64;
  v34 = CG_ParseVec3Finish(v28 + 21, &angles);
LABEL_40:
  v39 = v34;
  if ( !v34 )
    return 0i64;
  v40 = v34;
  do
  {
    v41 = v40["ent.v[ \"soundalias\" ] = " - v39];
    v42 = v2;
    v43 = *v40++;
    --v2;
    if ( !v42 )
      break;
    if ( v41 != v43 )
    {
      Core_strcpy_truncate(v69, 0x80ui64, v39);
      v12 = "ent.v[ \"soundalias\" ] = ";
      v13 = v69;
      goto LABEL_13;
    }
  }
  while ( v41 );
  if ( v39 == (const char *)-24i64 )
    return 0i64;
  v44 = CG_ParseString(v39 + 24, text, 0x100u);
  v45 = v44;
  if ( !v44 )
    return 0i64;
  for ( j = *v44; j != 10; j = *++v45 )
  {
    if ( j == 13 )
      break;
    if ( !j )
      break;
  }
  while ( 1 )
  {
    v47 = *v45;
    if ( *v45 < 9u || (unsigned __int8)v47 > 0x20u || !v47 )
      break;
    ++v45;
  }
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    __asm { vmovss  xmm1, dword ptr [rsp+2A0h+origin+4] }
    if ( s_clientEntSoundCount == 1024 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+2A0h+origin+8]
        vmovss  xmm3, dword ptr [rsp+2A0h+origin]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+2A0h+var_278], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+2A0h+fmt], xmm1
      }
      Com_PrintError(1, "Unable to add %s at [%.2f, %.2f, %.2f]-> Too many client ent sounds.  Reduce sounds or increase MAX_CLIENT_ENT_SOUNDS (%d).\n", text, _R9, fmt, v66, s_clientEntSoundCount);
      return v45;
    }
    __asm { vmovss  xmm0, dword ptr [rsp+2A0h+origin] }
    _RCX = 5i64 * s_clientEntSoundCount;
    _RDI = s_clientEntSounds;
    __asm
    {
      vmovss  dword ptr [rdi+rcx*8], xmm0
      vmovss  xmm0, dword ptr [rsp+2A0h+origin+8]
      vmovss  dword ptr [rdi+rcx*8+8], xmm0
      vmovss  dword ptr [rdi+rcx*8+4], xmm1
    }
    Alias = SND_FindAlias(text);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+2A0h+angles]
      vmovss  xmm1, dword ptr [rsp+2A0h+angles+4]
    }
    _RDX = s_clientEntSoundCount;
    v63 = s_clientEntSoundCount + 1;
    s_clientEntSounds[_RDX].aliasList = Alias;
    __asm
    {
      vmovss  dword ptr [rdi+rdx*8+18h], xmm0
      vmovss  xmm0, dword ptr [rsp+2A0h+angles+8]
      vmovss  dword ptr [rdi+rdx*8+20h], xmm0
      vmovss  dword ptr [rdi+rdx*8+1Ch], xmm1
    }
    s_clientEntSounds[_RDX].active = 1;
    s_clientEntSoundCount = v63;
  }
  return v45;
}

/*
==============
CG_ParseString
==============
*/
const char *CG_ParseString(const char *line, char *text, unsigned int bufferSize)
{
  char v6; 
  __int64 i; 
  bool v8; 
  char dest[128]; 

  if ( *line != 34 )
  {
    Core_strcpy_truncate(dest, 0x80ui64, line);
    Com_PrintError(1, "Expected a quoted string instead of '%s'\n", dest);
  }
  v6 = line[1];
  for ( i = 0i64; v6 != 34; v6 = line[(unsigned int)(i + 1)] )
  {
    if ( !v6 )
      break;
    v8 = (_DWORD)i == bufferSize;
    if ( (unsigned int)i >= bufferSize )
      goto LABEL_8;
    text[i] = v6;
    i = (unsigned int)(i + 1);
  }
  v8 = (_DWORD)i == bufferSize;
LABEL_8:
  if ( v8 )
  {
    Core_strcpy_truncate(dest, 0x80ui64, line);
    Com_PrintError(1, "String was longer than expected '%s'\n", dest);
    return 0i64;
  }
  else
  {
    text[i] = 0;
    return &line[(unsigned int)(i + 2)];
  }
}

/*
==============
CG_ParseVec3Finish
==============
*/
const char *CG_ParseVec3Finish(const char *line, vec3_t *origin)
{
  const char *v2; 
  char i; 
  char v5; 
  char dest[128]; 

  v2 = line;
  if ( j_sscanf(line, "%f, %f, %f", origin, &origin->y, &origin->z) == 3 )
  {
    for ( i = *v2; i != 10; i = *++v2 )
    {
      if ( i == 13 )
        break;
      if ( !i )
        break;
    }
    while ( 1 )
    {
      v5 = *v2;
      if ( *v2 < 9u || (unsigned __int8)v5 > 0x20u || !v5 )
        break;
      ++v2;
    }
    return v2;
  }
  else
  {
    Core_strcpy_truncate(dest, 0x80ui64, v2);
    Com_PrintError(1, "Expected 3 floats instead of '%s'\n", dest);
    return 0i64;
  }
}

/*
==============
CG_ParseVec3x2Finish
==============
*/
const char *CG_ParseVec3x2Finish(const char *line, vec3_t *origin, vec3_t *angles)
{
  const char *v3; 
  char i; 
  char v6; 
  char dest[128]; 

  v3 = line;
  if ( j_sscanf(line, "( %f, %f, %f ), ( %f, %f, %f )", origin, &origin->y, &origin->z, angles, &angles->y, &angles->z) == 6 )
  {
    for ( i = *v3; i != 10; i = *++v3 )
    {
      if ( i == 13 )
        break;
      if ( !i )
        break;
    }
    while ( 1 )
    {
      v6 = *v3;
      if ( *v3 < 9u || (unsigned __int8)v6 > 0x20u || !v6 )
        break;
      ++v3;
    }
    return v3;
  }
  else
  {
    Core_strcpy_truncate(dest, 0x80ui64, v3);
    Com_PrintError(1, "Expected 6 floats instead of '%s'\n", dest);
    return 0i64;
  }
}

/*
==============
CG_PlayOneshotEffect
==============
*/
void CG_PlayOneshotEffect(const LocalClientNum_t localClientNum, const unsigned int oneshotIndex)
{
  MapEnts *mapEnts; 
  __int64 v4; 
  __int64 v5; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  ParticleSystemHandle v7; 
  CgClientSideEffectsSystem *v8; 
  const char *Name; 
  __int64 v10; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  mapEnts = cm.mapEnts;
  v4 = oneshotIndex;
  if ( oneshotIndex >= cm.mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 109, ASSERT_TYPE_ASSERT, "(oneshotIndex < effectsData->oneshotEffectCount)", (const char *)&queryFormat, "oneshotIndex < effectsData->oneshotEffectCount") )
    __debugbreak();
  v5 = (__int64)&mapEnts->clientSideEffects.oneshotEffects[v4];
  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(localClientNum);
  v7 = PARTICLE_SYSTEM_INVALID_HANDLE;
  def.m_particleSystemDef = *(const ParticleSystemDef **)(v5 + 32);
  v8 = ClientSideEffectsSystem;
  if ( def.m_particleSystemDef )
  {
    AnglesToAxis((const vec3_t *)(v5 + 12), &axis);
    v7 = FX_PlayOrientedEffect(localClientNum, &def, *(_DWORD *)(v5 + 28), (const vec3_t *)v5, &axis);
    if ( v7 == PARTICLE_SYSTEM_INVALID_HANDLE )
    {
      Name = FXRegisteredDef::GetName(&def);
      Com_PrintWarning(0, "WARNING: failed to spawn CreateFX ID %d with fx '%s'.", (unsigned int)v4, Name);
    }
  }
  if ( (unsigned int)v4 >= cm.mapEnts->clientSideEffects.oneshotEffectCount )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2816, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.oneshotEffectCount )", "index doesn't index cm.mapEnts->clientSideEffects.oneshotEffectCount\n\t%i not in [0, %i)", v10, cm.mapEnts->clientSideEffects.oneshotEffectCount) )
      __debugbreak();
  }
  v8->m_activeOneshotFXHandles[v4] = v7;
  if ( *(_QWORD *)(v5 + 40) )
    CgClientSideEffectsSystem::ActiveSounds_Add(v8, NormalSpace, v4);
}

/*
==============
CG_RunExploder
==============
*/
void CG_RunExploder(LocalClientNum_t localClientNum, ClientExploder *pExploder, int startTime)
{
  __int64 v3; 
  int v6; 
  CgSoundSystem *SoundSystem; 
  const char **p_aliasName; 
  int v10; 
  _DWORD *v11; 
  FXRegisteredDef def; 
  float v18; 
  tmat33_t<vec3_t> axis; 

  v3 = localClientNum;
  _RBX = pExploder;
  if ( !pExploder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2005, ASSERT_TYPE_ASSERT, "(pExploder)", (const char *)&queryFormat, "pExploder") )
    __debugbreak();
  v6 = _RBX->delay + startTime;
  if ( _RBX->fxDef.m_particleSystemDef )
  {
    def.m_particleSystemDef = _RBX->fxDef.m_particleSystemDef;
    AnglesToAxis(&_RBX->angles, &axis);
    _RBX->effectHandle[v3] = FX_PlayOrientedEffect((LocalClientNum_t)v3, &def, v6, &_RBX->origin, &axis);
  }
  if ( _RBX->aliasList )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v3);
    if ( CG_Utils_TimeIsInThePast((LocalClientNum_t)v3, v6) )
    {
      CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, &_RBX->origin, _RBX->aliasList);
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr [rbx] }
      p_aliasName = &_RBX->aliasList->aliasName;
      v10 = 0;
      v18 = _RBX->origin.v[2];
      v11 = &unk_150EC7748;
      __asm { vmovsd  [rsp+88h+def.m_particleSystemDef], xmm0 }
      while ( *v11 )
      {
        ++v10;
        v11 += 8;
        if ( (__int64)v11 >= (__int64)&unk_150EC7F48 )
        {
          Com_PrintError(1, "CG_AddPendingSoundAlias ran out of pending slots trying to add %s", *p_aliasName);
          return;
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+def.m_particleSystemDef]
        vmovss  xmm1, dword ptr [rsp+88h+def.m_particleSystemDef+4]
      }
      _RAX = v10;
      _RCX = &s_pendingExploderSounds;
      _RAX *= 32i64;
      s_bPendingExploderSounds = 1;
      *(_DWORD *)((char *)&s_pendingExploderSounds + _RAX + 12) = 2046;
      __asm
      {
        vmovss  dword ptr [rax+rcx], xmm0
        vmovss  xmm0, [rsp+88h+var_50]
        vmovss  dword ptr [rax+rcx+8], xmm0
        vmovss  dword ptr [rax+rcx+4], xmm1
      }
      *(_QWORD *)((char *)&s_pendingExploderSounds + _RAX + 16) = p_aliasName;
      *(_DWORD *)((char *)&s_pendingExploderSounds + _RAX + 24) = v6;
    }
  }
}

/*
==============
CG_SetIntervalSoundTimer
==============
*/
__int64 CG_SetIntervalSoundTimer(const ClientIntervalSoundDef *intervalSoundDef, const unsigned int currentTime, unsigned int *const randSeed)
{
  return currentTime + BG_irand(intervalSoundDef->delayMinMsec, intervalSoundDef->delayMaxMsec, randSeed);
}

/*
==============
CG_SkipLineStartingWith
==============
*/
const char *CG_SkipLineStartingWith(const char *line, const char *skipLine)
{
  const char *result; 
  unsigned __int8 i; 
  unsigned __int8 v4; 

  result = CG_SkipText_Internal(line, skipLine, 0);
  if ( result )
  {
    for ( i = *result; i != 10; i = *++result )
    {
      if ( i == 13 )
        break;
      if ( !i )
        break;
    }
    while ( 1 )
    {
      v4 = *result;
      if ( *result < 9u || v4 > 0x20u || !v4 )
        break;
      ++result;
    }
  }
  return result;
}

/*
==============
CG_SkipRestOfLine
==============
*/
const char *CG_SkipRestOfLine(const char *line)
{
  char i; 
  char v2; 

  for ( i = *line; i != 10; i = *++line )
  {
    if ( i == 13 )
      break;
    if ( !i )
      break;
  }
  while ( 1 )
  {
    v2 = *line;
    if ( *line < 9u || (unsigned __int8)v2 > 0x20u || !v2 )
      break;
    ++line;
  }
  return line;
}

/*
==============
CG_SkipText_Internal
==============
*/
const char *CG_SkipText_Internal(const char *line, const char *skipText, bool bOptional)
{
  unsigned __int64 v6; 
  char dest[128]; 

  v6 = -1i64;
  do
    ++v6;
  while ( skipText[v6] );
  if ( !I_strncmp(skipText, line, v6) )
    return &line[v6];
  if ( !bOptional )
  {
    Core_strcpy_truncate(dest, 0x80ui64, line);
    Com_PrintError(1, "Unexpected text '%s' when trying to find '%s' in map's effect file\n", dest, skipText);
  }
  return 0i64;
}

/*
==============
CG_SpatialFX_Activate
==============
*/
char CG_SpatialFX_Activate(const LocalClientNum_t localClientNum, const unsigned int oneshotIndex)
{
  CG_PlayOneshotEffect(localClientNum, oneshotIndex);
  return 1;
}

/*
==============
CG_SpatialFX_Deactivate
==============
*/
char CG_SpatialFX_Deactivate(const LocalClientNum_t localClientNum, unsigned int id)
{
  __int64 v2; 
  MapEnts *mapEnts; 
  __int64 v4; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  unsigned int v6; 
  unsigned int v7; 
  ParticleSystem *v8; 
  __int64 v9; 
  ParticleManager *ParticleManager; 
  __int64 v12; 
  __int64 v13; 

  v2 = localClientNum;
  mapEnts = cm.mapEnts;
  v4 = id;
  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(localClientNum);
  if ( (unsigned int)v4 >= mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 159, ASSERT_TYPE_ASSERT, "(id < effectsData->oneshotEffectCount)", (const char *)&queryFormat, "id < effectsData->oneshotEffectCount") )
    __debugbreak();
  if ( (unsigned int)v4 >= cm.mapEnts->clientSideEffects.oneshotEffectCount )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2850, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.oneshotEffectCount )", "index doesn't index cm.mapEnts->clientSideEffects.oneshotEffectCount\n\t%i not in [0, %i)", v12, cm.mapEnts->clientSideEffects.oneshotEffectCount) )
      __debugbreak();
  }
  v6 = ClientSideEffectsSystem->m_activeOneshotFXHandles[v4];
  if ( v6 )
  {
    v7 = 0;
    if ( g_particleSystemsGeneration[4096 * v2 + (v6 & 0xFFF)].__all32 == v6 )
      v7 = ClientSideEffectsSystem->m_activeOneshotFXHandles[v4] & 0xFFF;
    v8 = NULL;
    v9 = (v2 << 12) + v7;
    if ( g_particleSystems[0][v9] >= (ParticleSystem *)0x1000 )
      v8 = g_particleSystems[0][v9];
    if ( v8 )
    {
      ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v2);
      if ( !ParticleManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 169, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
        __debugbreak();
      ParticleManager::StopSystem(ParticleManager, v8);
    }
    if ( (unsigned int)v4 >= cm.mapEnts->clientSideEffects.oneshotEffectCount )
    {
      LODWORD(v13) = cm.mapEnts->clientSideEffects.oneshotEffectCount;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2816, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->clientSideEffects.oneshotEffectCount )", "index doesn't index cm.mapEnts->clientSideEffects.oneshotEffectCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    ClientSideEffectsSystem->m_activeOneshotFXHandles[v4] = 0;
  }
  if ( mapEnts->clientSideEffects.oneshotEffects[v4].effectSound.name )
    CgClientSideEffectsSystem::ActiveSounds_Remove(ClientSideEffectsSystem, NormalSpace, v4);
  return 1;
}

/*
==============
CG_SpatialFX_GetOrigin
==============
*/
void CG_SpatialFX_GetOrigin(const LocalClientNum_t localClientNum, unsigned int id, vec3_t *origin)
{
  MapEnts *mapEnts; 
  __int64 v5; 
  float *v; 

  mapEnts = cm.mapEnts;
  v5 = id;
  if ( id >= cm.mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 196, ASSERT_TYPE_ASSERT, "(id < effectsData->oneshotEffectCount)", (const char *)&queryFormat, "id < effectsData->oneshotEffectCount") )
    __debugbreak();
  v = mapEnts->clientSideEffects.oneshotEffects[v5].origin.v;
  origin->v[0] = *v;
  origin->v[1] = v[1];
  origin->v[2] = v[2];
}

/*
==============
CG_SpatialFX_GetRadius
==============
*/
float CG_SpatialFX_GetRadius(const LocalClientNum_t localClientNum, unsigned int id)
{
  MapEnts *mapEnts; 
  __int64 v3; 

  mapEnts = cm.mapEnts;
  v3 = id;
  if ( id >= cm.mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 187, ASSERT_TYPE_ASSERT, "(id < effectsData->oneshotEffectCount)", (const char *)&queryFormat, "id < effectsData->oneshotEffectCount") )
    __debugbreak();
  _RAX = mapEnts->clientSideEffects.oneshotEffects;
  _RCX = 56 * v3;
  __asm { vmovss  xmm0, dword ptr [rcx+rax+18h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_SpatialReactiveEnt_GetOrigin
==============
*/
void CG_SpatialReactiveEnt_GetOrigin(const LocalClientNum_t localClientNum, unsigned int id, vec3_t *origin)
{
  MapEnts *mapEnts; 
  __int64 v5; 
  float *v; 

  mapEnts = cm.mapEnts;
  v5 = id;
  if ( id >= cm.mapEnts->clientSideEffects.reactiveEntCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2467, ASSERT_TYPE_ASSERT, "(id < effectsData->reactiveEntCount)", (const char *)&queryFormat, "id < effectsData->reactiveEntCount") )
    __debugbreak();
  v = mapEnts->clientSideEffects.reactiveEnts[v5].origin.v;
  origin->v[0] = *v;
  origin->v[1] = v[1];
  origin->v[2] = v[2];
}

/*
==============
CG_SpatialReactiveEnt_IsValid
==============
*/
bool CG_SpatialReactiveEnt_IsValid(const ClientReactiveEntDef *const reactiveEntDef, unsigned int timeNext, unsigned int currentTime, const vec3_t *eventOrigin, const float eventRadius)
{
  if ( currentTime < timeNext )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm3, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+8]
    vmovss  xmm1, [rsp+eventRadius]
    vaddss  xmm5, xmm1, dword ptr [rcx+30h]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm5
    vcomiss xmm4, xmm0
  }
  return currentTime <= timeNext;
}

/*
==============
CG_SpatialSound_Activate
==============
*/
bool CG_SpatialSound_Activate(const LocalClientNum_t localClientNum, unsigned int id)
{
  MapEnts *mapEnts; 
  __int64 v3; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  unsigned int intervalSoundCount; 
  __int64 v7; 
  __int64 v8; 
  unsigned int loopSoundCount; 

  mapEnts = cm.mapEnts;
  v3 = id;
  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(localClientNum);
  if ( (unsigned int)v3 >= mapEnts->clientSideEffects.loopSoundCount + mapEnts->clientSideEffects.intervalSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 242, ASSERT_TYPE_ASSERT, "(id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount ))", (const char *)&queryFormat, "id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount )") )
    __debugbreak();
  if ( CgClientSideEffectsSystem::IsSpatialSoundGlobal(ClientSideEffectsSystem, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 243, ASSERT_TYPE_ASSERT, "(!cseSystem->IsSpatialSoundGlobal( id ))", (const char *)&queryFormat, "!cseSystem->IsSpatialSoundGlobal( id )") )
    __debugbreak();
  intervalSoundCount = mapEnts->clientSideEffects.intervalSoundCount;
  if ( (unsigned int)v3 >= intervalSoundCount )
  {
    v7 = (unsigned int)v3 - intervalSoundCount;
    if ( (unsigned int)v7 >= mapEnts->clientSideEffects.loopSoundCount )
    {
      loopSoundCount = mapEnts->clientSideEffects.loopSoundCount;
      LODWORD(v8) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 256, ASSERT_TYPE_ASSERT, "(unsigned)( loopSoundIndex ) < (unsigned)( effectsData->loopSoundCount )", "loopSoundIndex doesn't index effectsData->loopSoundCount\n\t%i not in [0, %i)", v8, loopSoundCount) )
        __debugbreak();
    }
    if ( mapEnts->clientSideEffects.loopSounds[v7].effectSound.name )
      return CgClientSideEffectsSystem::ActiveSounds_Add(ClientSideEffectsSystem, PhaseSpace, v7);
  }
  else if ( mapEnts->clientSideEffects.intervalSounds[v3].effectSound.name )
  {
    return CgClientSideEffectsSystem::ActiveSounds_Add(ClientSideEffectsSystem, (ClientSideEffectType)4, v3);
  }
  return 0;
}

/*
==============
CG_SpatialSound_Deactivate
==============
*/
char CG_SpatialSound_Deactivate(const LocalClientNum_t localClientNum, unsigned int id)
{
  MapEnts *mapEnts; 
  __int64 v3; 
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 
  unsigned int intervalSoundCount; 
  ClientSideEffectType v6; 
  __int64 v8; 
  unsigned int loopSoundCount; 

  mapEnts = cm.mapEnts;
  v3 = id;
  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(localClientNum);
  if ( (unsigned int)v3 >= mapEnts->clientSideEffects.loopSoundCount + mapEnts->clientSideEffects.intervalSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 271, ASSERT_TYPE_ASSERT, "(id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount ))", (const char *)&queryFormat, "id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount )") )
    __debugbreak();
  if ( CgClientSideEffectsSystem::IsSpatialSoundGlobal(ClientSideEffectsSystem, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 272, ASSERT_TYPE_ASSERT, "(!cseSystem->IsSpatialSoundGlobal( id ))", (const char *)&queryFormat, "!cseSystem->IsSpatialSoundGlobal( id )") )
    __debugbreak();
  intervalSoundCount = mapEnts->clientSideEffects.intervalSoundCount;
  if ( (unsigned int)v3 >= intervalSoundCount )
  {
    v3 = (unsigned int)v3 - intervalSoundCount;
    if ( (unsigned int)v3 >= mapEnts->clientSideEffects.loopSoundCount )
    {
      loopSoundCount = mapEnts->clientSideEffects.loopSoundCount;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( loopSoundIndex ) < (unsigned)( effectsData->loopSoundCount )", "loopSoundIndex doesn't index effectsData->loopSoundCount\n\t%i not in [0, %i)", v8, loopSoundCount) )
        __debugbreak();
    }
    if ( mapEnts->clientSideEffects.loopSounds[v3].effectSound.name )
    {
      v6 = PhaseSpace;
      goto LABEL_15;
    }
  }
  else if ( mapEnts->clientSideEffects.intervalSounds[v3].effectSound.name )
  {
    v6 = 4;
LABEL_15:
    CgClientSideEffectsSystem::ActiveSounds_Remove(ClientSideEffectsSystem, v6, v3);
  }
  return 1;
}

/*
==============
CG_SpatialSound_GetOrigin
==============
*/
void CG_SpatialSound_GetOrigin(const LocalClientNum_t localClientNum, unsigned int id, vec3_t *origin)
{
  MapEnts *mapEnts; 
  __int64 v5; 
  unsigned int intervalSoundCount; 
  __int64 v9; 
  __int64 v12; 
  unsigned int loopSoundCount; 

  mapEnts = cm.mapEnts;
  _RSI = origin;
  v5 = id;
  if ( id >= cm.mapEnts->clientSideEffects.loopSoundCount + cm.mapEnts->clientSideEffects.intervalSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 305, ASSERT_TYPE_ASSERT, "(id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount ))", (const char *)&queryFormat, "id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount )") )
    __debugbreak();
  intervalSoundCount = mapEnts->clientSideEffects.intervalSoundCount;
  if ( (unsigned int)v5 >= intervalSoundCount )
  {
    v9 = (unsigned int)v5 - intervalSoundCount;
    if ( (unsigned int)v9 >= mapEnts->clientSideEffects.loopSoundCount )
    {
      loopSoundCount = mapEnts->clientSideEffects.loopSoundCount;
      LODWORD(v12) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 314, ASSERT_TYPE_ASSERT, "(unsigned)( loopSoundIndex ) < (unsigned)( effectsData->loopSoundCount )", "loopSoundIndex doesn't index effectsData->loopSoundCount\n\t%i not in [0, %i)", v12, loopSoundCount) )
        __debugbreak();
    }
    _RCX = mapEnts->clientSideEffects.loopSounds;
    _RDX = 5 * v9;
    _RSI->v[0] = _RCX[v9].origin.v[0];
    _RSI->v[1] = _RCX[v9].origin.v[1];
    __asm { vmovss  xmm0, dword ptr [rcx+rdx*8+8] }
  }
  else
  {
    _RCX = mapEnts->clientSideEffects.intervalSounds[v5].origin.v;
    _RSI->v[0] = *_RCX;
    _RSI->v[1] = _RCX[1];
    __asm { vmovss  xmm0, dword ptr [rcx+8] }
  }
  __asm { vmovss  dword ptr [rsi+8], xmm0 }
}

/*
==============
CG_SpatialSound_GetRadius
==============
*/
float CG_SpatialSound_GetRadius(const LocalClientNum_t localClientNum, unsigned int id)
{
  MapEnts *mapEnts; 
  __int64 v4; 
  unsigned int intervalSoundCount; 
  SndAliasList *aliasList; 
  __int64 v7; 
  __int64 v11; 
  unsigned int loopSoundCount; 

  mapEnts = cm.mapEnts;
  v4 = id;
  if ( id >= cm.mapEnts->clientSideEffects.loopSoundCount + cm.mapEnts->clientSideEffects.intervalSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 323, ASSERT_TYPE_ASSERT, "(id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount ))", (const char *)&queryFormat, "id < ( effectsData->intervalSoundCount + effectsData->loopSoundCount )") )
    __debugbreak();
  intervalSoundCount = mapEnts->clientSideEffects.intervalSoundCount;
  if ( (unsigned int)v4 >= intervalSoundCount )
  {
    v7 = (unsigned int)v4 - intervalSoundCount;
    if ( (unsigned int)v7 >= mapEnts->clientSideEffects.loopSoundCount )
    {
      loopSoundCount = mapEnts->clientSideEffects.loopSoundCount;
      LODWORD(v11) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( loopSoundIndex ) < (unsigned)( effectsData->loopSoundCount )", "loopSoundIndex doesn't index effectsData->loopSoundCount\n\t%i not in [0, %i)", v11, loopSoundCount) )
        __debugbreak();
    }
    aliasList = mapEnts->clientSideEffects.loopSounds[v7].aliasList;
  }
  else
  {
    aliasList = mapEnts->clientSideEffects.intervalSounds[v4].aliasList;
  }
  if ( aliasList && (_RAX = aliasList->head) != NULL )
    __asm { vmovss  xmm0, dword ptr [rax+68h] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
CG_SpatialSound_IsValid
==============
*/
bool CG_SpatialSound_IsValid(const LocalClientNum_t localClientNum, unsigned int id)
{
  CgClientSideEffectsSystem *ClientSideEffectsSystem; 

  ClientSideEffectsSystem = CgClientSideEffectsSystem::GetClientSideEffectsSystem(localClientNum);
  return !CgClientSideEffectsSystem::IsSpatialSoundGlobal(ClientSideEffectsSystem, id);
}

/*
==============
CG_UpdateClientSideSound
==============
*/
void CG_UpdateClientSideSound(LocalClientNum_t localClientNum, int index, const ClientEntSound *sound)
{
  int v5; 
  CgSoundSystem *SoundSystem; 
  SndAliasList *aliasList; 
  char v14; 
  char v15; 

  v5 = index + 2049;
  if ( index + 2049 >= 3329 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1756, ASSERT_TYPE_ASSERT, "(soundClientEntIndex < ( ( ( ( 2048 ) ) ) + ( 1 ) ) + ( 1024 ) + ( 128 ) + ( 128 ))", (const char *)&queryFormat, "soundClientEntIndex < FIRST_CLIENT_ENT_SOUND + MAX_CLIENT_ENT_SOUNDS + MAX_CLIENT_ENT_REACTIVE_SOUNDS + MAX_CLIENT_ENT_INTERVAL_SOUNDS") )
    __debugbreak();
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( sound->active )
  {
    aliasList = sound->aliasList;
    if ( aliasList )
    {
      if ( aliasList->head )
      {
        __asm
        {
          vmovaps [rsp+48h+var_18], xmm6
          vmovss  xmm6, dword ptr [r8+68h]
        }
        *(double *)&_XMM0 = SND_DistSqToNearestListener(&sound->origin);
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vcomiss xmm0, xmm1
          vmovaps xmm6, [rsp+48h+var_18]
        }
        if ( v14 | v15 )
          CgSoundSystem::PlaySoundAliasAsync(SoundSystem, v5, &sound->origin, sound->aliasList);
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::ClearMemory
==============
*/
void CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem *this)
{
  MapEnts *mapEnts; 
  unsigned int *m_activeOneshotFXHandles; 
  unsigned int oneshotEffectCount; 
  unsigned int *m_activeExploderFXHandles; 
  unsigned int exploderCount; 
  unsigned int *m_intervalSoundTimers; 
  unsigned int intervalSoundCount; 
  unsigned int *m_reactiveEntTimers; 
  unsigned int reactiveEntCount; 
  unsigned int *m_spatialSoundGlobalBits; 
  unsigned int m_spatialSoundGlobalBitSize; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3880, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS )") )
    __debugbreak();
  ActiveSet::Clear(&this->m_spatialFX);
  ActiveSet::Clear(&this->m_spatialSound);
  mapEnts = cm.mapEnts;
  m_activeOneshotFXHandles = this->m_activeOneshotFXHandles;
  oneshotEffectCount = cm.mapEnts->clientSideEffects.oneshotEffectCount;
  if ( m_activeOneshotFXHandles && oneshotEffectCount )
  {
    memset_0(m_activeOneshotFXHandles, 0, 4i64 * oneshotEffectCount);
    mapEnts = cm.mapEnts;
  }
  m_activeExploderFXHandles = this->m_activeExploderFXHandles;
  exploderCount = mapEnts->clientSideEffects.exploderCount;
  if ( m_activeExploderFXHandles && exploderCount )
  {
    memset_0(m_activeExploderFXHandles, 0, 4i64 * exploderCount);
    mapEnts = cm.mapEnts;
  }
  m_intervalSoundTimers = this->m_intervalSoundTimers;
  intervalSoundCount = mapEnts->clientSideEffects.intervalSoundCount;
  if ( m_intervalSoundTimers && intervalSoundCount )
  {
    memset_0(m_intervalSoundTimers, 0, 4i64 * intervalSoundCount);
    mapEnts = cm.mapEnts;
  }
  m_reactiveEntTimers = this->m_reactiveEntTimers;
  reactiveEntCount = mapEnts->clientSideEffects.reactiveEntCount;
  if ( m_reactiveEntTimers && reactiveEntCount )
    memset_0(m_reactiveEntTimers, 0, 4i64 * reactiveEntCount);
  m_spatialSoundGlobalBits = this->m_spatialSoundGlobalBits;
  if ( m_spatialSoundGlobalBits )
  {
    m_spatialSoundGlobalBitSize = this->m_spatialSoundGlobalBitSize;
    if ( m_spatialSoundGlobalBitSize )
      memset_0(m_spatialSoundGlobalBits, 0, 4i64 * m_spatialSoundGlobalBitSize);
  }
}

/*
==============
CgClientSideEffectsSystem::CopySoundEntityOrientation
==============
*/
void CgClientSideEffectsSystem::CopySoundEntityOrientation(CgClientSideEffectsSystem *this, int clientSoundEntIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  __int64 v5; 
  vec3_t *p_angles; 
  int v12; 
  unsigned int v15; 
  int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  int v25; 
  ClientSideTypeData data_out; 

  v5 = clientSoundEntIndex;
  _RBX = origin_out;
  if ( !CgClientSideEffectsSystem::SystemEnabled(this) )
  {
LABEL_2:
    *(_QWORD *)_RBX->v = 0i64;
    _RBX->v[2] = 0.0;
    AxisClear(axis_out);
    return;
  }
  if ( CG_CreateFx_HasBeenEnabled() )
  {
    CG_CreateFx_CopySoundEntityOrientation(v5, _RBX, axis_out);
  }
  else
  {
    if ( cm.mapEnts->createFxEffectTotal )
    {
      if ( (int)v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2604, ASSERT_TYPE_ASSERT, "(clientSoundEntIndex >= 0)", (const char *)&queryFormat, "clientSoundEntIndex >= 0") )
        __debugbreak();
      if ( (unsigned int)v5 >= this->m_activeSoundCount )
        goto LABEL_2;
      CgClientSideEffectsSystem::GetTypeData(this, this->m_activeSounds[v5].type, this->m_activeSounds[v5].index, &data_out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+data_out.origin]
        vmovss  xmm1, dword ptr [rsp+98h+data_out.origin+4]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rsp+98h+data_out.origin+8]
        vmovss  dword ptr [rbx+4], xmm1
      }
      p_angles = &data_out.angles;
    }
    else if ( (int)v5 >= 1024 )
    {
      v12 = v5 - 1024;
      if ( v12 >= 128 )
      {
        v15 = v12 - 128;
        if ( v15 >= 0x80 )
        {
          v25 = 128;
          v22 = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1747, ASSERT_TYPE_ASSERT, "(unsigned)( clientSoundEntIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientEntIntervalSounds ) ) + 0 ) )", "clientSoundEntIndex doesn't index ARRAY_COUNT( s_clientEntIntervalSounds )\n\t%i not in [0, %i)", v22, v25) )
            __debugbreak();
        }
        _RDX = 0x140000000ui64;
        _RCX = 6i64 * (int)v15;
        _RBX->v[0] = s_clientEntIntervalSounds[v15].origin.v[0];
        _RBX->v[1] = s_clientEntIntervalSounds[v15].origin.v[1];
        __asm { vmovss  xmm0, dword ptr (rva s_clientEntIntervalSounds.origin+8)[rdx+rcx*8] }
        p_angles = &s_clientEntIntervalSounds[v15].angles;
      }
      else
      {
        if ( (unsigned int)v12 >= 0x80 )
        {
          v24 = 128;
          v21 = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1740, ASSERT_TYPE_ASSERT, "(unsigned)( clientSoundEntIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientEntReactiveSounds ) ) + 0 ) )", "clientSoundEntIndex doesn't index ARRAY_COUNT( s_clientEntReactiveSounds )\n\t%i not in [0, %i)", v21, v24) )
            __debugbreak();
        }
        _RDX = 0x140000000ui64;
        _RCX = 5i64 * v12;
        _RBX->v[0] = s_clientEntReactiveSounds[v12].origin.v[0];
        _RBX->v[1] = s_clientEntReactiveSounds[v12].origin.v[1];
        __asm { vmovss  xmm0, dword ptr (rva s_clientEntReactiveSounds.origin+8)[rdx+rcx*8] }
        p_angles = &s_clientEntReactiveSounds[v12].angles;
      }
    }
    else
    {
      if ( (unsigned int)v5 >= 0x400 )
      {
        v23 = 1024;
        v20 = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1730, ASSERT_TYPE_ASSERT, "(unsigned)( clientSoundEntIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientEntSounds ) ) + 0 ) )", "clientSoundEntIndex doesn't index ARRAY_COUNT( s_clientEntSounds )\n\t%i not in [0, %i)", v20, v23) )
          __debugbreak();
      }
      _RCX = 5 * v5;
      _RDX = 0x140000000ui64;
      _RBX->v[0] = s_clientEntSounds[v5].origin.v[0];
      _RBX->v[1] = s_clientEntSounds[v5].origin.v[1];
      __asm { vmovss  xmm0, dword ptr (rva s_clientEntSounds.origin+8)[rdx+rcx*8] }
      p_angles = &s_clientEntSounds[v5].angles;
    }
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
    AnglesToAxis(p_angles, axis_out);
  }
}

/*
==============
CgClientSideEffectsSystem::Draw3D
==============
*/
void CgClientSideEffectsSystem::Draw3D(CgClientSideEffectsSystem *this, const ScreenPlacement *const scrPlace)
{
  const char *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  LocalClientNum_t m_localClientNum; 
  MapEnts *mapEnts; 
  cg_t *LocalClientGlobals; 
  unsigned int oneshotEffectCount; 
  unsigned int loopSoundCount; 
  unsigned int intervalSoundCount; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int *p_count; 
  __int64 v27; 
  unsigned int i; 
  __int64 j; 
  __int64 k; 
  unsigned int m; 
  unsigned int n; 
  unsigned int v33; 
  const char *v35; 
  const char *CurrentRootName; 
  const char *v43; 
  int v44; 
  const char *RootName; 
  int v46; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  MapEnts *v51; 
  unsigned int parentCount; 
  int v53; 
  __int64 v54; 
  bool v55; 
  MapEnts *v56; 
  bool isSpatiallyActive; 
  unsigned int v58; 
  int v59; 
  unsigned __int16 *parents; 
  const char **v61; 
  const char *v62; 
  int v63; 
  MapEnts *v64; 
  unsigned int v65; 
  int v66; 
  __int64 v67; 
  __int64 v68; 
  bool v69; 
  MapEnts *v70; 
  bool v71; 
  unsigned int v72; 
  int v73; 
  unsigned __int16 *v74; 
  int v75; 
  MapEnts *v76; 
  unsigned int v77; 
  int v78; 
  __int64 v79; 
  __int64 v80; 
  bool v81; 
  MapEnts *v82; 
  bool v83; 
  unsigned int v84; 
  int v85; 
  unsigned __int16 *v86; 
  unsigned int v87; 
  MapEnts *v88; 
  unsigned int v89; 
  int v90; 
  MapEnts *v91; 
  unsigned int v92; 
  __int64 v93; 
  int v94; 
  const char **v95; 
  const char *v96; 
  unsigned int v97; 
  MapEnts *v98; 
  unsigned int v99; 
  int v100; 
  unsigned __int64 v101; 
  const char *v102; 
  MapEnts *v103; 
  const char *v104; 
  unsigned int v105; 
  int v106; 
  unsigned __int16 *v107; 
  unsigned int v109; 
  bool v129; 
  const char *v141; 
  const char *v167; 
  __int64 m_rootLookAt; 
  const char *v188; 
  const dvar_t *v191; 
  const dvar_t *v192; 
  MapEnts *v193; 
  const SpatialPartition_Tree *oneshotEffectsTree; 
  const dvar_t *v195; 
  const SpatialPartition_Tree *soundsSpatialTree; 
  const SpatialPartition_Tree *reactiveSpatialTree; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  char *text; 
  __int64 type; 
  int rootIndex; 
  int v206; 
  bool v207; 
  unsigned int v208; 
  unsigned int v210; 
  int v212; 
  unsigned int v214; 
  vec3_t start; 
  vec3_t out_pos; 
  vec3_t scrPlacea; 
  vec3_t end; 
  vec3_t v219; 
  vec3_t v220; 
  vec3_t v221; 

  *(_QWORD *)scrPlacea.v = scrPlace;
  _RSI = this;
  if ( CgClientSideEffectsSystem::SystemEnabled(this) )
  {
    if ( !CG_CreateFx_HasBeenEnabled() || cm.mapEnts->clientSideEffects.rootCount > 1 )
      goto LABEL_12;
    if ( cm.mapEnts->clientSideEffects.rootCount == 1 )
    {
      if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
        __debugbreak();
      v14 = SL_ConvertToStringSafe(cm.mapEnts->clientSideEffects.roots->path);
      if ( v14 )
      {
        if ( *v14 && cls.m_activeGameMapName[0] && !I_strstr(v14, cls.m_activeGameMapName) )
        {
LABEL_12:
          v15 = DCONST_DVARBOOL_cg_cfx_debug_effects;
          if ( !DCONST_DVARBOOL_cg_cfx_debug_effects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_effects") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( v15->current.enabled )
            goto LABEL_20;
          v16 = DCONST_DVARBOOL_cg_cfx_debug_sounds;
          if ( !DCONST_DVARBOOL_cg_cfx_debug_sounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_sounds") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          if ( v16->current.enabled )
          {
LABEL_20:
            if ( !CgClientSideEffectsSystem::GetViewPos(_RSI, &out_pos) )
              return;
            m_localClientNum = _RSI->m_localClientNum;
            mapEnts = cm.mapEnts;
            __asm { vmovaps [rsp+1B0h+var_40], xmm6 }
            LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
            oneshotEffectCount = mapEnts->clientSideEffects.oneshotEffectCount;
            loopSoundCount = mapEnts->clientSideEffects.loopSoundCount;
            intervalSoundCount = mapEnts->clientSideEffects.intervalSoundCount;
            *(_QWORD *)start.v = LocalClientGlobals;
            v208 = oneshotEffectCount;
            v23 = loopSoundCount + oneshotEffectCount;
            v214 = loopSoundCount + oneshotEffectCount;
            v24 = mapEnts->clientSideEffects.reactiveEntCount + oneshotEffectCount + intervalSoundCount + loopSoundCount;
            v25 = oneshotEffectCount + intervalSoundCount + loopSoundCount;
            v210 = v25;
            v212 = v24;
            if ( !_RSI->m_rootsParsed )
            {
              Com_Printf(14, "[CreateFx] Parsing compiled client-side effects data\n");
              p_count = &_RSI->m_roots[0].count;
              v27 = 1024i64;
              do
              {
                *p_count = 0;
                p_count += 16;
                --v27;
              }
              while ( v27 );
              for ( i = 0; i < mapEnts->clientSideEffects.oneshotEffectCount; ++i )
                CgClientSideEffectsSystem::ParseRootAddChild(_RSI, i, &mapEnts->clientSideEffects.oneshotEffects[i].origin, NormalSpace);
              for ( j = 0i64; (unsigned int)j < mapEnts->clientSideEffects.loopSoundCount; j = (unsigned int)(j + 1) )
                CgClientSideEffectsSystem::ParseRootAddChild(_RSI, j + oneshotEffectCount, &mapEnts->clientSideEffects.loopSounds[j].origin, PhaseSpace);
              for ( k = 0i64; (unsigned int)k < mapEnts->clientSideEffects.intervalSoundCount; k = (unsigned int)(k + 1) )
                CgClientSideEffectsSystem::ParseRootAddChild(_RSI, k + v23, &mapEnts->clientSideEffects.intervalSounds[k].origin, (ClientSideEffectType)4);
              for ( m = 0; m < mapEnts->clientSideEffects.reactiveEntCount; ++m )
                CgClientSideEffectsSystem::ParseRootAddChild(_RSI, m + v25, &mapEnts->clientSideEffects.reactiveEnts[m].origin, (ClientSideEffectType)5);
              for ( n = 0; n < mapEnts->clientSideEffects.exploderCount; ++n )
                CgClientSideEffectsSystem::ParseRootAddChild(_RSI, n + v24, &mapEnts->clientSideEffects.exploders[(unsigned __int64)n].origin, Count);
              Com_Printf(14, "[CreateFx] Totals\n");
              Com_Printf(14, "[CreateFx]  %5d oneshotEffects\n", mapEnts->clientSideEffects.oneshotEffectCount);
              Com_Printf(14, "[CreateFx]  %5d loopSounds\n", mapEnts->clientSideEffects.loopSoundCount);
              Com_Printf(14, "[CreateFx]  %5d intervalSounds\n", mapEnts->clientSideEffects.intervalSoundCount);
              Com_Printf(14, "[CreateFx]  %5d reactiveEnts\n", mapEnts->clientSideEffects.reactiveEntCount);
              Com_Printf(14, "[CreateFx]  %5d exploders\n", mapEnts->clientSideEffects.exploderCount);
              Com_Printf(14, "[CreateFx]  %5d roots\n", mapEnts->clientSideEffects.rootCount);
              if ( mapEnts->clientSideEffects.rootCount > 1 )
              {
                v33 = 0;
                __asm { vmovss  xmm6, cs:__real@3f800000 }
                do
                {
                  v35 = SL_ConvertToStringSafe(mapEnts->clientSideEffects.roots[v33].path);
                  Com_Printf(14, "[CreateFx]\n");
                  Com_Printf(14, "[CreateFx] Root %s\n", v35);
                  if ( v33 < 0x400 )
                  {
                    _R14 = (unsigned __int64)v33 << 6;
                    if ( *(unsigned int *)((char *)&_RSI->m_roots[0].count + _R14) )
                    {
                      __asm
                      {
                        vxorps  xmm0, xmm0, xmm0
                        vcvtsi2ss xmm0, xmm0, rax
                        vdivss  xmm1, xmm6, xmm0
                        vmulss  xmm0, xmm1, dword ptr [r14+rsi+38B4h]
                        vmovss  dword ptr [r14+rsi+38B4h], xmm0
                        vmulss  xmm0, xmm1, dword ptr [r14+rsi+38B8h]
                        vmovss  dword ptr [r14+rsi+38B8h], xmm0
                        vmulss  xmm0, xmm1, dword ptr [r14+rsi+38BCh]
                        vmovss  dword ptr [r14+rsi+38BCh], xmm0
                      }
                      Com_Printf(14, "[CreateFx]  %4d oneshotEffects\n", *(unsigned int *)((char *)&_RSI->m_roots[0].countPerType[1] + _R14));
                      Com_Printf(14, "[CreateFx]  %4d loopSounds\n", *(unsigned int *)((char *)&_RSI->m_roots[0].countPerType[2] + _R14));
                      Com_Printf(14, "[CreateFx]  %4d intervalSounds\n", *(unsigned int *)((char *)&_RSI->m_roots[0].countPerType[4] + _R14));
                      Com_Printf(14, "[CreateFx]  %4d reactiveEnts\n", *(unsigned int *)((char *)&_RSI->m_roots[0].countPerType[5] + _R14));
                      Com_Printf(14, "[CreateFx]  %4d exploders\n", *(unsigned int *)((char *)&_RSI->m_roots[0].countPerType[3] + _R14));
                      Com_Printf(14, "[CreateFx]  %4d ALL\n", *(unsigned int *)((char *)&_RSI->m_roots[0].count + _R14));
                    }
                  }
                  ++v33;
                }
                while ( v33 < mapEnts->clientSideEffects.rootCount );
              }
              _RSI->m_rootsParsed = 1;
            }
            v206 = -1;
            CurrentRootName = CG_CreateFx_GetCurrentRootName();
            v43 = CurrentRootName;
            if ( CurrentRootName && *CurrentRootName && mapEnts->clientSideEffects.rootCount > 1 )
            {
              v44 = 0;
              while ( 1 )
              {
                RootName = CG_CreateFx_GetRootName(&mapEnts->clientSideEffects.roots[v44]);
                if ( !I_strncmp(RootName, v43, 0x7FFFFFFFui64) )
                  break;
                if ( ++v44 >= mapEnts->clientSideEffects.rootCount )
                  goto LABEL_48;
              }
              v46 = v44;
              v206 = v44;
            }
            else
            {
LABEL_48:
              v46 = -1;
            }
            __asm { vmovss  xmm6, cs:__real@457a0000 }
            v48 = 0i64;
            v49 = v46;
            if ( mapEnts->clientSideEffects.oneshotEffectCount )
            {
              v50 = v46;
              do
              {
                if ( v50 == -1 )
                  goto LABEL_62;
                v51 = cm.mapEnts;
                parentCount = cm.mapEnts->clientSideEffects.parentCount;
                if ( parentCount )
                {
                  if ( (unsigned int)v48 >= parentCount )
                  {
                    LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                    LODWORD(text) = v48;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                      __debugbreak();
                  }
                  v53 = v51->clientSideEffects.parents[v48] ? v51->clientSideEffects.parents[v48] - 1 : -1;
                }
                else
                {
                  v53 = -1;
                }
                v46 = v206;
                if ( v53 != v206 )
                {
LABEL_62:
                  v54 = (__int64)&mapEnts->clientSideEffects.oneshotEffects[(unsigned int)v48];
                  v55 = ActiveSet::CheckActive(&_RSI->m_spatialFX, v48);
                  v56 = cm.mapEnts;
                  isSpatiallyActive = v55;
                  v207 = v55;
                  v58 = cm.mapEnts->clientSideEffects.parentCount;
                  if ( v58 )
                  {
                    if ( (unsigned int)v48 >= v58 )
                    {
                      LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                      LODWORD(text) = v48;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                        __debugbreak();
                      isSpatiallyActive = v207;
                    }
                    parents = v56->clientSideEffects.parents;
                    if ( parents[v48] )
                      v59 = parents[v48] - 1;
                    else
                      v59 = -1;
                  }
                  else
                  {
                    v59 = -1;
                  }
                  v61 = *(const char ***)(v54 + 32);
                  if ( v61 )
                    v62 = *v61;
                  else
                    v62 = (char *)&queryFormat.fmt + 3;
                  __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm6 }
                  CG_CreateFx_Draw3DEmitter((const LocalClientNum_t)_RSI->m_localClientNum, *(const ScreenPlacement *const *)scrPlacea.v, (const vec3_t *)v54, &out_pos, fmt, v62, (CreateFxEffectType)1, isSpatiallyActive, v59);
                  v46 = v206;
                }
                v48 = (unsigned int)(v48 + 1);
              }
              while ( (unsigned int)v48 < mapEnts->clientSideEffects.oneshotEffectCount );
              oneshotEffectCount = v208;
              v23 = v214;
              v49 = v46;
            }
            if ( mapEnts->clientSideEffects.loopSoundCount )
            {
              v63 = -oneshotEffectCount;
              do
              {
                if ( v49 == -1 )
                  goto LABEL_89;
                v64 = cm.mapEnts;
                v65 = cm.mapEnts->clientSideEffects.parentCount;
                if ( v65 )
                {
                  if ( oneshotEffectCount >= v65 )
                  {
                    LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                    LODWORD(text) = oneshotEffectCount;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                      __debugbreak();
                  }
                  v66 = v64->clientSideEffects.parents[oneshotEffectCount] ? v64->clientSideEffects.parents[oneshotEffectCount] - 1 : -1;
                }
                else
                {
                  v66 = -1;
                }
                if ( v66 != v46 )
                {
LABEL_89:
                  v67 = v63 + oneshotEffectCount;
                  v68 = (__int64)&mapEnts->clientSideEffects.loopSounds[v67];
                  v69 = ActiveSet::CheckActive(&_RSI->m_spatialSound, v67);
                  v70 = cm.mapEnts;
                  v71 = v69;
                  v72 = cm.mapEnts->clientSideEffects.parentCount;
                  if ( v72 )
                  {
                    if ( oneshotEffectCount >= v72 )
                    {
                      LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                      LODWORD(text) = oneshotEffectCount;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                        __debugbreak();
                    }
                    v74 = v70->clientSideEffects.parents;
                    if ( v74[oneshotEffectCount] )
                      v73 = v74[oneshotEffectCount] - 1;
                    else
                      v73 = -1;
                  }
                  else
                  {
                    v73 = -1;
                  }
                  __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm6 }
                  CG_CreateFx_Draw3DEmitter((const LocalClientNum_t)_RSI->m_localClientNum, *(const ScreenPlacement *const *)scrPlacea.v, (const vec3_t *)v68, &out_pos, fmta, *(const char **)(v68 + 24), (CreateFxEffectType)2, v71, v73);
                  v46 = v206;
                }
                ++oneshotEffectCount;
                v49 = v46;
              }
              while ( v63 + oneshotEffectCount < mapEnts->clientSideEffects.loopSoundCount );
              v23 = v214;
            }
            if ( mapEnts->clientSideEffects.intervalSoundCount )
            {
              v75 = -v23;
              do
              {
                if ( v46 == -1 )
                  goto LABEL_112;
                v76 = cm.mapEnts;
                v77 = cm.mapEnts->clientSideEffects.parentCount;
                if ( v77 )
                {
                  if ( v23 >= v77 )
                  {
                    LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                    LODWORD(text) = v23;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                      __debugbreak();
                  }
                  v78 = v76->clientSideEffects.parents[v23] ? v76->clientSideEffects.parents[v23] - 1 : -1;
                }
                else
                {
                  v78 = -1;
                }
                if ( v78 != v46 )
                {
LABEL_112:
                  v79 = v75 + v23;
                  v80 = (__int64)&mapEnts->clientSideEffects.intervalSounds[v79];
                  v81 = ActiveSet::CheckActive(&_RSI->m_spatialSound, v79 + mapEnts->clientSideEffects.loopSoundCount);
                  v82 = cm.mapEnts;
                  v83 = v81;
                  v84 = cm.mapEnts->clientSideEffects.parentCount;
                  if ( v84 )
                  {
                    if ( v23 >= v84 )
                    {
                      LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                      LODWORD(text) = v23;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                        __debugbreak();
                    }
                    v86 = v82->clientSideEffects.parents;
                    if ( v86[v23] )
                      v85 = v86[v23] - 1;
                    else
                      v85 = -1;
                  }
                  else
                  {
                    v85 = -1;
                  }
                  __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm6 }
                  CG_CreateFx_Draw3DEmitter((const LocalClientNum_t)_RSI->m_localClientNum, *(const ScreenPlacement *const *)scrPlacea.v, (const vec3_t *)v80, &out_pos, fmtb, *(const char **)(v80 + 24), Menu, v83, v85);
                  v46 = v206;
                }
                ++v23;
              }
              while ( v75 + v23 < mapEnts->clientSideEffects.intervalSoundCount );
            }
            if ( mapEnts->clientSideEffects.reactiveEntCount )
            {
              v87 = v210;
              do
              {
                if ( v46 == -1 )
                  goto LABEL_134;
                v88 = cm.mapEnts;
                v89 = cm.mapEnts->clientSideEffects.parentCount;
                if ( v89 )
                {
                  if ( v87 >= v89 )
                  {
                    LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                    LODWORD(text) = v87;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                      __debugbreak();
                  }
                  v90 = v88->clientSideEffects.parents[v87] ? v88->clientSideEffects.parents[v87] - 1 : -1;
                }
                else
                {
                  v90 = -1;
                }
                if ( v90 != v46 )
                {
LABEL_134:
                  v91 = cm.mapEnts;
                  v92 = cm.mapEnts->clientSideEffects.parentCount;
                  v93 = (__int64)&mapEnts->clientSideEffects.reactiveEnts[v87 - v210];
                  if ( v92 )
                  {
                    if ( v87 >= v92 )
                    {
                      LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                      LODWORD(text) = v87;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                        __debugbreak();
                    }
                    if ( v91->clientSideEffects.parents[v87] )
                      v94 = v91->clientSideEffects.parents[v87] - 1;
                    else
                      v94 = -1;
                  }
                  else
                  {
                    v94 = -1;
                  }
                  v95 = *(const char ***)(v93 + 24);
                  rootIndex = v94;
                  if ( v95 )
                    v96 = *v95;
                  else
                    v96 = *(const char **)(v93 + 32);
                  __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm6 }
                  CG_CreateFx_Draw3DEmitter((const LocalClientNum_t)_RSI->m_localClientNum, *(const ScreenPlacement *const *)scrPlacea.v, (const vec3_t *)v93, &out_pos, fmtc, v96, (CreateFxEffectType)5, 1, rootIndex);
                  v46 = v206;
                }
                ++v87;
              }
              while ( v87 - v210 < mapEnts->clientSideEffects.reactiveEntCount );
            }
            if ( mapEnts->clientSideEffects.exploderCount )
            {
              v97 = v212;
              do
              {
                if ( v46 == -1 )
                  goto LABEL_159;
                v98 = cm.mapEnts;
                v99 = cm.mapEnts->clientSideEffects.parentCount;
                if ( v99 )
                {
                  if ( v97 >= v99 )
                  {
                    LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                    LODWORD(text) = v97;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                      __debugbreak();
                  }
                  v100 = v98->clientSideEffects.parents[v97] ? v98->clientSideEffects.parents[v97] - 1 : -1;
                }
                else
                {
                  v100 = -1;
                }
                if ( v100 != v46 )
                {
LABEL_159:
                  v101 = (unsigned __int64)&mapEnts->clientSideEffects.exploders[(unsigned __int64)(v97 - v212)];
                  v102 = SL_ConvertToStringSafe((scr_string_t)*(_DWORD *)(v101 + 56));
                  v103 = cm.mapEnts;
                  v104 = v102;
                  v105 = cm.mapEnts->clientSideEffects.parentCount;
                  if ( v105 )
                  {
                    if ( v97 >= v105 )
                    {
                      LODWORD(type) = cm.mapEnts->clientSideEffects.parentCount;
                      LODWORD(text) = v97;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", text, type) )
                        __debugbreak();
                    }
                    v107 = v103->clientSideEffects.parents;
                    if ( v107[v97] )
                      v106 = v107[v97] - 1;
                    else
                      v106 = -1;
                  }
                  else
                  {
                    v106 = -1;
                  }
                  __asm { vmovss  dword ptr [rsp+1B0h+fmt], xmm6 }
                  CG_CreateFx_Draw3DEmitter((const LocalClientNum_t)_RSI->m_localClientNum, *(const ScreenPlacement *const *)scrPlacea.v, (const vec3_t *)v101, &out_pos, fmtd, v104, (CreateFxEffectType)3, 1, v106);
                  v46 = v206;
                }
                ++v97;
              }
              while ( v97 - v212 < mapEnts->clientSideEffects.exploderCount );
            }
            _RSI->m_rootLookAt = -1;
            if ( mapEnts->clientSideEffects.rootCount > 1 )
            {
              _RCX = *(_QWORD *)start.v;
              v109 = 0;
              __asm
              {
                vmovss  xmm0, dword ptr [rcx+6944h]
                vmovss  [rsp+1B0h+var_154], xmm0
                vmovss  xmm0, dword ptr [rcx+6948h]
                vmovss  [rsp+1B0h+var_150], xmm0
                vmovss  xmm0, dword ptr [rcx+694Ch]
                vmovss  [rsp+1B0h+var_158], xmm0
                vmovaps [rsp+1B0h+var_90], xmm11
                vmovaps [rsp+1B0h+var_A0], xmm12
                vmovss  xmm12, cs:__real@45fa0000
                vmovaps [rsp+1B0h+var_B0], xmm13
                vmovss  xmm13, cs:__real@48742400
                vmovaps [rsp+1B0h+var_C0], xmm14
                vmovss  xmm14, cs:__real@41200000
                vmovaps [rsp+1B0h+var_D0], xmm15
                vmovss  xmm15, cs:__real@3e800000
                vmovaps [rsp+1B0h+var_50], xmm7
                vmovaps [rsp+1B0h+var_60], xmm8
                vmovaps [rsp+1B0h+var_70], xmm9
                vmovaps [rsp+1B0h+var_80], xmm10
                vxorps  xmm11, xmm11, xmm11
              }
              do
              {
                _RBX = &mapEnts->clientSideEffects.roots[v109].path;
                if ( v109 >= 0x400 )
                {
                  __asm
                  {
                    vmovss  xmm4, dword ptr [rbx+4]
                    vmovss  dword ptr [rsp+1B0h+start], xmm4
                    vmovss  xmm5, dword ptr [rbx+8]
                    vmovss  dword ptr [rsp+1B0h+start+4], xmm5
                    vmovss  xmm6, dword ptr [rbx+0Ch]
                  }
                }
                else
                {
                  _RCX = (unsigned __int64)v109 << 6;
                  _RAX = (v109 + 227i64) << 6;
                  __asm
                  {
                    vmovss  xmm6, dword ptr [rcx+rsi+38BCh]
                    vmovss  xmm0, dword ptr [rax+rsi]
                    vmovss  xmm3, dword ptr [rcx+rsi+38C4h]
                    vmovss  xmm1, dword ptr [rcx+rsi+38D0h]
                    vmovss  xmm4, dword ptr [rcx+rsi+38B4h]
                    vmovss  xmm5, dword ptr [rcx+rsi+38B8h]
                    vmovss  dword ptr [rbp+0B0h+var_F8], xmm0
                    vmovss  dword ptr [rbp+0B0h+scrPlace], xmm0
                    vmovss  xmm0, dword ptr [rcx+rsi+38CCh]
                    vmovss  dword ptr [rbp+0B0h+var_108], xmm0
                    vmovss  dword ptr [rbp+0B0h+var_E8], xmm0
                    vmovss  dword ptr [rsp+1B0h+start], xmm4
                    vmovss  dword ptr [rsp+1B0h+start+4], xmm5
                    vmovss  dword ptr [rbp+0B0h+var_F8+4], xmm3
                    vmovss  dword ptr [rbp+0B0h+var_F8+8], xmm6
                    vmovss  dword ptr [rbp+0B0h+scrPlace+4], xmm1
                    vmovss  [rbp+0B0h+var_120], xmm6
                    vmovss  dword ptr [rbp+0B0h+var_108+4], xmm1
                    vmovss  dword ptr [rbp+0B0h+var_108+8], xmm6
                    vmovss  dword ptr [rbp+0B0h+var_E8+4], xmm3
                    vmovss  dword ptr [rbp+0B0h+var_E8+8], xmm6
                  }
                }
                __asm
                {
                  vaddss  xmm0, xmm6, xmm12
                  vmovss  dword ptr [rbp+0B0h+end+8], xmm0
                  vmovss  dword ptr [rsp+1B0h+start+8], xmm6
                  vmovss  dword ptr [rbp+0B0h+end], xmm4
                  vmovss  dword ptr [rbp+0B0h+end+4], xmm5
                }
                CG_DebugLine(&start, &end, &colorCyan, 0, 0);
                v129 = v109 < 0x400;
                if ( v109 < 0x400 )
                {
                  CG_DebugLine(&v220, &scrPlacea, &colorCyan, 0, 0);
                  CG_DebugLine(&scrPlacea, &v219, &colorCyan, 0, 0);
                  CG_DebugLine(&v219, &v221, &colorCyan, 0, 0);
                  CG_DebugLine(&v221, &v220, &colorCyan, 0, 0);
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+1B0h+start]
                  vsubss  xmm3, xmm0, dword ptr [rsp+1B0h+out_pos]
                  vmovss  xmm1, dword ptr [rsp+1B0h+start+4]
                  vmovss  xmm0, dword ptr [rsp+1B0h+start+8]
                  vsubss  xmm2, xmm1, dword ptr [rsp+1B0h+out_pos+4]
                  vsubss  xmm4, xmm0, dword ptr [rbp+0B0h+out_pos+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm6, xmm3, xmm0
                  vcomiss xmm6, cs:__real@4b742400
                }
                if ( v129 )
                {
                  v141 = SL_ConvertToStringSafe(*_RBX);
                  __asm
                  {
                    vcomiss xmm6, xmm13
                    vmovss  xmm8, dword ptr [rsp+1B0h+start+8]
                    vmovss  xmm9, dword ptr [rsp+1B0h+start+4]
                    vmovss  xmm10, dword ptr [rsp+1B0h+start]
                  }
                  if ( v129 )
                  {
                    if ( _RSI->m_rootLookAt == -1 )
                      goto LABEL_181;
                    __asm { vcomiss xmm6, xmm11 }
                    if ( _RSI->m_rootLookAt != -1 )
                    {
LABEL_181:
                      __asm
                      {
                        vsubss  xmm4, xmm9, dword ptr [rsp+1B0h+out_pos+4]
                        vsubss  xmm6, xmm10, dword ptr [rsp+1B0h+out_pos]
                        vsubss  xmm7, xmm8, dword ptr [rbp+0B0h+out_pos+8]
                        vmulss  xmm1, xmm4, xmm4
                        vmulss  xmm0, xmm6, xmm6
                        vaddss  xmm2, xmm1, xmm0
                        vmulss  xmm1, xmm7, xmm7
                        vaddss  xmm2, xmm2, xmm1
                        vmovss  xmm1, cs:__real@3f800000
                        vsqrtss xmm3, xmm2, xmm2
                        vcmpless xmm0, xmm3, cs:__real@80000000
                        vblendvps xmm0, xmm3, xmm1, xmm0
                        vdivss  xmm5, xmm1, xmm0
                        vmulss  xmm0, xmm4, xmm5
                        vmulss  xmm3, xmm0, [rsp+1B0h+var_150]
                        vmulss  xmm1, xmm6, xmm5
                        vmulss  xmm2, xmm1, [rsp+1B0h+var_154]
                        vmulss  xmm0, xmm7, xmm5
                        vmulss  xmm1, xmm0, [rsp+1B0h+var_158]
                        vaddss  xmm4, xmm3, xmm2
                        vaddss  xmm2, xmm4, xmm1
                        vcomiss xmm2, cs:__real@3f666666
                      }
                    }
                  }
                  __asm
                  {
                    vsubss  xmm0, xmm8, xmm14
                    vmovss  dword ptr [rbp+0B0h+end+8], xmm0
                    vmovss  dword ptr [rbp+0B0h+end], xmm10
                    vmovss  dword ptr [rbp+0B0h+end+4], xmm9
                  }
                  v167 = j_va((const char *)&queryFormat, v141);
                  __asm { vmovaps xmm2, xmm15; scale }
                  CL_AddDebugStringCentered(&end, &colorCyan, *(float *)&_XMM2, v167, 0, 0);
                }
                ++v109;
              }
              while ( v109 < mapEnts->clientSideEffects.rootCount );
              m_rootLookAt = _RSI->m_rootLookAt;
              __asm
              {
                vmovaps xmm15, [rsp+1B0h+var_D0]
                vmovaps xmm14, [rsp+1B0h+var_C0]
                vmovaps xmm13, [rsp+1B0h+var_B0]
                vmovaps xmm12, [rsp+1B0h+var_A0]
                vmovaps xmm11, [rsp+1B0h+var_90]
                vmovaps xmm10, [rsp+1B0h+var_80]
                vmovaps xmm9, [rsp+1B0h+var_70]
                vmovaps xmm8, [rsp+1B0h+var_60]
                vmovaps xmm7, [rsp+1B0h+var_50]
              }
              if ( (_DWORD)m_rootLookAt != -1 )
              {
                if ( (unsigned int)m_rootLookAt >= 0x400 )
                {
                  _RAX = mapEnts->clientSideEffects.roots;
                  _RCX = 32i64 * _RSI->m_rootLookAt;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rcx+rax+4]
                    vmovss  dword ptr [rsp+1B0h+start], xmm0
                    vmovss  xmm1, dword ptr [rcx+rax+8]
                    vmovss  dword ptr [rsp+1B0h+start+4], xmm1
                    vmovss  xmm0, dword ptr [rcx+rax+0Ch]
                  }
                }
                else
                {
                  _RCX = m_rootLookAt << 6;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rcx+rsi+38B4h]
                    vmovss  dword ptr [rsp+1B0h+start], xmm0
                    vmovss  xmm1, dword ptr [rcx+rsi+38B8h]
                    vmovss  dword ptr [rsp+1B0h+start+4], xmm1
                    vmovss  xmm0, dword ptr [rcx+rsi+38BCh]
                  }
                }
                __asm
                {
                  vaddss  xmm0, xmm0, cs:__real@c1c80000
                  vmovss  dword ptr [rsp+1B0h+start+8], xmm0
                }
                v188 = j_va("CreateFX Enter");
                __asm { vmovss  xmm2, cs:__real@3e99999a; scale }
                CL_AddDebugStringCentered(&start, &colorGreen, *(float *)&_XMM2, v188, 0, 0);
              }
            }
            __asm { vmovaps xmm6, [rsp+1B0h+var_40] }
          }
          v191 = DCONST_DVARBOOL_cg_cfx_debug_ssr;
          if ( !DCONST_DVARBOOL_cg_cfx_debug_ssr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_ssr") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v191);
          if ( v191->current.enabled )
          {
            v192 = DCONST_DVARBOOL_cg_cfx_debug_effects;
            v193 = cm.mapEnts;
            if ( !DCONST_DVARBOOL_cg_cfx_debug_effects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_effects") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v192);
            if ( v192->current.enabled )
            {
              oneshotEffectsTree = v193->clientSideEffects.oneshotEffectsTree;
              if ( oneshotEffectsTree )
                SpatialPartition_DrawTree((const LocalClientNum_t)_RSI->m_localClientNum, oneshotEffectsTree, 0xAu, 0, CG_SpatialFX_GetOrigin, NULL);
            }
            v195 = DCONST_DVARBOOL_cg_cfx_debug_sounds;
            if ( !DCONST_DVARBOOL_cg_cfx_debug_sounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_sounds") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v195);
            if ( v195->current.enabled )
            {
              soundsSpatialTree = v193->clientSideEffects.soundsSpatialTree;
              if ( soundsSpatialTree )
                SpatialPartition_DrawTree((const LocalClientNum_t)_RSI->m_localClientNum, soundsSpatialTree, 0xAu, 0, CG_SpatialSound_GetOrigin, NULL);
            }
            reactiveSpatialTree = v193->clientSideEffects.reactiveSpatialTree;
            if ( reactiveSpatialTree )
              SpatialPartition_DrawTree((const LocalClientNum_t)_RSI->m_localClientNum, reactiveSpatialTree, 0xAu, 1, CG_SpatialReactiveEnt_GetOrigin, NULL);
          }
        }
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::DrawOverlay
==============
*/
void CgClientSideEffectsSystem::DrawOverlay(CgClientSideEffectsSystem *this)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  float y; 
  float x; 

  if ( CgClientSideEffectsSystem::SystemEnabled(this) && !CG_CreateFx_HasBeenEnabled() )
  {
    __asm { vmovss  xmm0, cs:__real@41000000 }
    v3 = DCONST_DVARBOOL_cg_cfx_debug_effects;
    __asm
    {
      vmovss  [rsp+58h+x], xmm0
      vmovss  [rsp+58h+y], xmm0
    }
    if ( !DCONST_DVARBOOL_cg_cfx_debug_effects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_effects") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      ActiveSet::DrawOverlay(&this->m_spatialFX, (const LocalClientNum_t)this->m_localClientNum, &x, &y, "spatialFX");
    v4 = DCONST_DVARBOOL_cg_cfx_debug_sounds;
    if ( !DCONST_DVARBOOL_cg_cfx_debug_sounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cfx_debug_sounds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      ActiveSet::DrawOverlay(&this->m_spatialSound, (const LocalClientNum_t)this->m_localClientNum, &x, &y, "spatialSound");
  }
}

/*
==============
CgClientSideEffectsSystem::Exploder_ActivateGroup
==============
*/
void CgClientSideEffectsSystem::Exploder_ActivateGroup(CgClientSideEffectsSystem *this, unsigned int id, const int time)
{
  __int64 v4; 
  MapEnts *mapEnts; 
  LocalClientNum_t m_localClientNum; 
  __int64 j; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  scr_string_t i; 
  unsigned __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 

  v4 = id;
  if ( CgClientSideEffectsSystem::SystemEnabled(this) )
  {
    if ( CG_CreateFx_HasBeenEnabled() )
    {
      CG_CreateFx_ActivateExploder((const scr_string_t)v4, time);
    }
    else
    {
      mapEnts = cm.mapEnts;
      if ( cm.mapEnts->createFxEffectTotal )
      {
        if ( (unsigned int)v4 >= cm.mapEnts->exploderNameTotal )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2394, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( cm.mapEnts->exploderNameTotal )", "id doesn't index cm.mapEnts->exploderNameTotal\n\t%i not in [0, %i)", v4, cm.mapEnts->exploderNameTotal) )
            __debugbreak();
          mapEnts = cm.mapEnts;
        }
        v11 = 0;
        for ( i = mapEnts->exploderNames[v4]; v11 < mapEnts->clientSideEffects.exploderCount; ++v11 )
        {
          v13 = (unsigned __int64)&mapEnts->clientSideEffects.exploders[(unsigned __int64)v11];
          if ( *(_DWORD *)(v13 + 56) == i )
          {
            v14 = time + *(_DWORD *)(v13 + 24);
            if ( CG_Utils_TimeIsInThePast(this->m_localClientNum, v14) )
              CgClientSideEffectsSystem::Exploder_ActivateSingle(this, v11, v14);
            else
              CgClientSideEffectsSystem::Pending_Add(this, Count, v11, v14);
          }
        }
      }
      else
      {
        m_localClientNum = this->m_localClientNum;
        for ( j = 0i64; (unsigned int)j < s_clientExploders.numExploders; j = (unsigned int)(j + 1) )
        {
          if ( s_clientExploders.name[j] == (_DWORD)v4 )
          {
            v9 = (unsigned __int64)(unsigned int)j << 6;
            CG_RunExploder(m_localClientNum, (ClientExploder *)((char *)s_clientExploders.exploders + v9), time);
            v10 = *(int *)((char *)&s_clientExploders.exploders[0].loopSoundIndex + v9);
            if ( (_DWORD)v10 != -1 )
            {
              if ( (int)v10 < s_clientEntSoundCount )
              {
                if ( (unsigned int)v10 >= 0x400 )
                {
                  LODWORD(v16) = 1024;
                  LODWORD(v15) = v10;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1800, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_clientEntSounds ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_clientEntSounds )\n\t%i not in [0, %i)", v15, v16) )
                    __debugbreak();
                }
                s_clientEntSounds[v10].active = 1;
                CG_UpdateClientSideSound(m_localClientNum, v10, &s_clientEntSounds[v10]);
              }
              else
              {
                Com_PrintError(1, "CG_ActivateClientEntSound index out of range\n");
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::Exploder_ActivateSingle
==============
*/
void CgClientSideEffectsSystem::Exploder_ActivateSingle(CgClientSideEffectsSystem *this, unsigned int id, const int startTimeMsec)
{
  MapEnts *mapEnts; 
  __int64 v5; 
  ClientExploderDef *v7; 
  SndAliasList *aliasList; 
  CgSoundSystem *SoundSystem; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  mapEnts = cm.mapEnts;
  v5 = id;
  if ( id >= cm.mapEnts->clientSideEffects.exploderCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3698, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( effectsData->exploderCount )", "id doesn't index effectsData->exploderCount\n\t%i not in [0, %i)", id, cm.mapEnts->clientSideEffects.exploderCount) )
    __debugbreak();
  v7 = &mapEnts->clientSideEffects.exploders[v5];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3700, ASSERT_TYPE_ASSERT, "(exploderDef)", (const char *)&queryFormat, "exploderDef") )
    __debugbreak();
  if ( v7->effect.particleSystemDef )
  {
    def.m_particleSystemDef = v7->effect.particleSystemDef;
    AnglesToAxis(&v7->angles, &axis);
    this->m_activeExploderFXHandles[v5] = FX_PlayOrientedEffect(this->m_localClientNum, &def, startTimeMsec, &v7->origin, &axis);
  }
  else
  {
    this->m_activeExploderFXHandles[v5] = 0;
  }
  aliasList = v7->aliasList;
  if ( aliasList || (aliasList = SND_TryFindAlias(v7->effectSound.name)) != NULL )
  {
    if ( aliasList->head )
    {
      if ( Com_IsSoundAliasLooping(aliasList) )
      {
        CgClientSideEffectsSystem::ActiveSounds_Add(this, Count, v5);
      }
      else
      {
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
        CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, &v7->origin, aliasList);
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::Exploder_DeactivateGroup
==============
*/
void CgClientSideEffectsSystem::Exploder_DeactivateGroup(CgClientSideEffectsSystem *this, unsigned int id, bool kill)
{
  __int64 v4; 
  MapEnts *mapEnts; 
  __int64 m_localClientNum; 
  unsigned int j; 
  ClientExploder *v9; 
  int v10; 
  ParticleSystem *v11; 
  ParticleSystem *v12; 
  ParticleManager *ParticleManager; 
  __int64 loopSoundIndex; 
  unsigned int v15; 
  scr_string_t i; 
  __int64 v17; 
  __int64 v18; 

  v4 = id;
  if ( CgClientSideEffectsSystem::SystemEnabled(this) )
  {
    if ( CG_CreateFx_HasBeenEnabled() )
    {
      CG_CreateFx_DeactivateExploder((const scr_string_t)v4, kill);
    }
    else
    {
      mapEnts = cm.mapEnts;
      if ( cm.mapEnts->createFxEffectTotal )
      {
        if ( (unsigned int)v4 >= cm.mapEnts->exploderNameTotal )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2442, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( cm.mapEnts->exploderNameTotal )", "id doesn't index cm.mapEnts->exploderNameTotal\n\t%i not in [0, %i)", v4, cm.mapEnts->exploderNameTotal) )
            __debugbreak();
          mapEnts = cm.mapEnts;
        }
        v15 = 0;
        for ( i = mapEnts->exploderNames[v4]; v15 < mapEnts->clientSideEffects.exploderCount; ++v15 )
        {
          if ( mapEnts->clientSideEffects.exploders[(unsigned __int64)v15].name == i )
            CgClientSideEffectsSystem::Exploder_DeactivateSingle(this, v15, kill);
        }
      }
      else
      {
        m_localClientNum = this->m_localClientNum;
        for ( j = 0; j < s_clientExploders.numExploders; ++j )
        {
          if ( s_clientExploders.name[j] == (_DWORD)v4 )
          {
            v9 = &s_clientExploders.exploders[(unsigned __int64)j];
            if ( v9->fxDef.m_particleSystemDef )
            {
              v10 = 0;
              if ( g_particleSystemsGeneration[4096 * m_localClientNum + (v9->effectHandle[m_localClientNum] & 0xFFF)].__all32 == v9->effectHandle[m_localClientNum] )
                v10 = v9->effectHandle[m_localClientNum] & 0xFFF;
              v11 = g_particleSystems[m_localClientNum][v10];
              v12 = NULL;
              if ( (unsigned __int64)v11 >= 0x1000 )
                v12 = v11;
              if ( v12 )
              {
                ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)m_localClientNum);
                if ( kill )
                  ParticleManager::KillSystem(ParticleManager, v12);
                else
                  ParticleManager::StopSystem(ParticleManager, v12);
                v9->effectHandle[m_localClientNum] = PARTICLE_SYSTEM_INVALID_HANDLE;
              }
            }
            loopSoundIndex = v9->loopSoundIndex;
            if ( (_DWORD)loopSoundIndex != -1 )
            {
              if ( (int)loopSoundIndex < s_clientEntSoundCount )
              {
                if ( (unsigned int)loopSoundIndex >= 0x400 )
                {
                  LODWORD(v18) = 1024;
                  LODWORD(v17) = loopSoundIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1785, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_clientEntSounds ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_clientEntSounds )\n\t%i not in [0, %i)", v17, v18) )
                    __debugbreak();
                }
                s_clientEntSounds[loopSoundIndex].active = 0;
                CG_UpdateClientSideSound((LocalClientNum_t)m_localClientNum, loopSoundIndex, &s_clientEntSounds[loopSoundIndex]);
              }
              else
              {
                Com_PrintError(1, "CG_DeactivateClientEntSound index out of range\n");
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::Exploder_DeactivateSingle
==============
*/
void CgClientSideEffectsSystem::Exploder_DeactivateSingle(CgClientSideEffectsSystem *this, unsigned int id, bool kill)
{
  MapEnts *mapEnts; 
  __int64 v5; 
  ClientExploderDef *v7; 
  unsigned int v8; 
  __int64 v9; 
  ParticleSystem *v10; 
  __int64 v11; 
  ParticleManager *ParticleManager; 
  unsigned int m_pendingCount; 
  signed int v14; 
  __int64 v15; 
  unsigned int *i; 
  __int64 v17; 

  mapEnts = cm.mapEnts;
  v5 = id;
  _RDI = this;
  if ( id >= cm.mapEnts->clientSideEffects.exploderCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3739, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( effectsData->exploderCount )", "id doesn't index effectsData->exploderCount\n\t%i not in [0, %i)", id, cm.mapEnts->clientSideEffects.exploderCount) )
    __debugbreak();
  v7 = &mapEnts->clientSideEffects.exploders[v5];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3741, ASSERT_TYPE_ASSERT, "(exploderDef)", (const char *)&queryFormat, "exploderDef") )
    __debugbreak();
  v8 = 0;
  v9 = (__int64)(int)_RDI->m_localClientNum << 12;
  if ( g_particleSystemsGeneration[v9 + (_RDI->m_activeExploderFXHandles[v5] & 0xFFF)].__all32 == _RDI->m_activeExploderFXHandles[v5] )
    v8 = _RDI->m_activeExploderFXHandles[v5] & 0xFFF;
  v10 = NULL;
  v11 = v9 + v8;
  if ( g_particleSystems[0][v11] >= (ParticleSystem *)0x1000 )
    v10 = g_particleSystems[0][v11];
  if ( v10 )
  {
    ParticleManager = ParticleManager::GetParticleManager(_RDI->m_localClientNum);
    if ( kill )
      ParticleManager::KillSystem(ParticleManager, v10);
    else
      ParticleManager::StopSystem(ParticleManager, v10);
  }
  _RDI->m_activeExploderFXHandles[v5] = 0;
  if ( v7->effectSound.name )
    CgClientSideEffectsSystem::ActiveSounds_Remove(_RDI, Count, v5);
  m_pendingCount = _RDI->m_pendingCount;
  v14 = m_pendingCount - 1;
  v15 = (int)(m_pendingCount - 1);
  if ( (int)(m_pendingCount - 1) >= 0 )
  {
    for ( i = &_RDI->m_pending[v14].index; *(i - 1) != 3 || *i != (_DWORD)v5; i -= 3 )
    {
      --v14;
      if ( --v15 < 0 )
        return;
    }
    v17 = v14;
    _RDX = 3i64 * (m_pendingCount - 1);
    __asm { vmovsd  xmm0, qword ptr [rdi+rdx*4+2084h] }
    _RCX = (__int64)&_RDI->m_pending[v17];
    __asm { vmovsd  qword ptr [rcx], xmm0 }
    *(_DWORD *)(_RCX + 8) = *((_DWORD *)&_RDI->m_activeSounds[1024].type + 3 * m_pendingCount);
    --_RDI->m_pendingCount;
  }
}

/*
==============
CgClientSideEffectsSystem::FreeMemory
==============
*/
void CgClientSideEffectsSystem::FreeMemory(CgClientSideEffectsSystem *this)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3867, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS )") )
    __debugbreak();
  ActiveSet::Free(&this->m_spatialFX);
  ActiveSet::Free(&this->m_spatialSound);
  this->m_activeOneshotFXHandles = NULL;
  this->m_activeExploderFXHandles = NULL;
  this->m_intervalSoundTimers = NULL;
  this->m_reactiveEntTimers = NULL;
  this->m_spatialSoundGlobalBits = NULL;
}

/*
==============
CgClientSideEffectsSystem::GetRootIgnored
==============
*/
bool CgClientSideEffectsSystem::GetRootIgnored(CgClientSideEffectsSystem *this, const unsigned int parentIndex, const int ignoreRootIndex)
{
  return ignoreRootIndex != -1 && CgClientSideEffectsSystem::GetRootIndex(this, parentIndex) == ignoreRootIndex;
}

/*
==============
CgClientSideEffectsSystem::GetRootIndex
==============
*/
__int64 CgClientSideEffectsSystem::GetRootIndex(CgClientSideEffectsSystem *this, const unsigned int parentIndex)
{
  MapEnts *mapEnts; 
  __int64 v3; 
  unsigned int parentCount; 

  mapEnts = cm.mapEnts;
  v3 = parentIndex;
  parentCount = cm.mapEnts->clientSideEffects.parentCount;
  if ( !parentCount )
    return 0xFFFFFFFFi64;
  if ( parentIndex >= parentCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2887, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( effectsData->parentCount )", "parentIndex doesn't index effectsData->parentCount\n\t%i not in [0, %i)", parentIndex, cm.mapEnts->clientSideEffects.parentCount) )
    __debugbreak();
  if ( mapEnts->clientSideEffects.parents[v3] )
    return (unsigned int)mapEnts->clientSideEffects.parents[v3] - 1;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
CgClientSideEffectsSystem::GetRootLookAt
==============
*/
__int64 CgClientSideEffectsSystem::GetRootLookAt(CgClientSideEffectsSystem *this)
{
  return (unsigned int)this->m_rootLookAt;
}

/*
==============
CgClientSideEffectsSystem::GetTypeData
==============
*/
void CgClientSideEffectsSystem::GetTypeData(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index, ClientSideTypeData *data_out)
{
  MapEnts *mapEnts; 
  __int64 v6; 
  __int64 v7; 
  const SpatialPartition_Tree *oneshotEffectsTree; 
  ClientLoopSoundDef *loopSounds; 
  ClientExploderDef *v10; 
  __int64 v11; 
  __int64 v12; 

  mapEnts = cm.mapEnts;
  v6 = index;
  switch ( 0x40000000u )
  {
    case 0u:
    case 6u:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3971, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ClientSideEffectType") )
        __debugbreak();
      return;
    case 1u:
      if ( index >= cm.mapEnts->clientSideEffects.oneshotEffectCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3976, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( effectsData->oneshotEffectCount )", "index doesn't index effectsData->oneshotEffectCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.oneshotEffectCount) )
        __debugbreak();
      v7 = (__int64)&mapEnts->clientSideEffects.oneshotEffects[v6];
      data_out->origin.v[0] = *(float *)v7;
      data_out->origin.v[1] = *(float *)(v7 + 4);
      data_out->origin.v[2] = *(float *)(v7 + 8);
      data_out->angles.v[0] = *(float *)(v7 + 12);
      data_out->angles.v[1] = *(float *)(v7 + 16);
      data_out->angles.v[2] = *(float *)(v7 + 20);
      data_out->aliasName = *(const char **)(v7 + 40);
      oneshotEffectsTree = mapEnts->clientSideEffects.oneshotEffectsTree;
      goto LABEL_24;
    case 2u:
      if ( index >= cm.mapEnts->clientSideEffects.loopSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3987, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( effectsData->loopSoundCount )", "index doesn't index effectsData->loopSoundCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.loopSoundCount) )
        __debugbreak();
      loopSounds = mapEnts->clientSideEffects.loopSounds;
      data_out->origin.v[0] = loopSounds[v6].origin.v[0];
      data_out->origin.v[1] = loopSounds[v6].origin.v[1];
      data_out->origin.v[2] = loopSounds[v6].origin.v[2];
      data_out->angles.v[0] = loopSounds[v6].angles.v[0];
      data_out->angles.v[1] = loopSounds[v6].angles.v[1];
      data_out->angles.v[2] = loopSounds[v6].angles.v[2];
      data_out->aliasName = loopSounds[v6].effectSound.name;
      oneshotEffectsTree = mapEnts->clientSideEffects.soundsSpatialTree;
      goto LABEL_24;
    case 3u:
      if ( index >= cm.mapEnts->clientSideEffects.exploderCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3998, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( effectsData->exploderCount )", "index doesn't index effectsData->exploderCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.exploderCount) )
        __debugbreak();
      v10 = &mapEnts->clientSideEffects.exploders[v6];
      data_out->origin.v[0] = v10->origin.v[0];
      data_out->origin.v[1] = v10->origin.v[1];
      data_out->origin.v[2] = v10->origin.v[2];
      data_out->angles.v[0] = v10->angles.v[0];
      data_out->angles.v[1] = v10->angles.v[1];
      data_out->angles.v[2] = v10->angles.v[2];
      data_out->aliasName = v10->effectSound.name;
      data_out->spatialTree = NULL;
      return;
    case 4u:
      if ( index >= cm.mapEnts->clientSideEffects.intervalSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 4009, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( effectsData->intervalSoundCount )", "index doesn't index effectsData->intervalSoundCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.intervalSoundCount) )
        __debugbreak();
      v11 = (__int64)&mapEnts->clientSideEffects.intervalSounds[v6];
      data_out->origin.v[0] = *(float *)v11;
      data_out->origin.v[1] = *(float *)(v11 + 4);
      data_out->origin.v[2] = *(float *)(v11 + 8);
      data_out->angles.v[0] = *(float *)(v11 + 12);
      data_out->angles.v[1] = *(float *)(v11 + 16);
      data_out->angles.v[2] = *(float *)(v11 + 20);
      data_out->aliasName = *(const char **)(v11 + 24);
      oneshotEffectsTree = mapEnts->clientSideEffects.soundsSpatialTree;
      goto LABEL_24;
    case 5u:
      if ( index >= cm.mapEnts->clientSideEffects.reactiveEntCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 4020, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( effectsData->reactiveEntCount )", "index doesn't index effectsData->reactiveEntCount\n\t%i not in [0, %i)", index, cm.mapEnts->clientSideEffects.reactiveEntCount) )
        __debugbreak();
      v12 = (__int64)&mapEnts->clientSideEffects.reactiveEnts[v6];
      data_out->origin.v[0] = *(float *)v12;
      data_out->origin.v[1] = *(float *)(v12 + 4);
      data_out->origin.v[2] = *(float *)(v12 + 8);
      data_out->angles.v[0] = *(float *)(v12 + 12);
      data_out->angles.v[1] = *(float *)(v12 + 16);
      data_out->angles.v[2] = *(float *)(v12 + 20);
      data_out->aliasName = *(const char **)(v12 + 32);
      oneshotEffectsTree = mapEnts->clientSideEffects.reactiveSpatialTree;
LABEL_24:
      data_out->spatialTree = oneshotEffectsTree;
      break;
    default:
      return;
  }
}

/*
==============
CgClientSideEffectsSystem::GetViewPos
==============
*/
bool CgClientSideEffectsSystem::GetViewPos(CgClientSideEffectsSystem *this, vec3_t *out_pos)
{
  int v9; 
  int v10; 
  int v11; 

  _RBX = out_pos;
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _R8 = _RAX;
  if ( !_RAX->renderingThirdPerson || _RAX->playerTeleported )
  {
    _RBX->v[0] = _RAX->refdef.viewOffset.v[0];
    _RBX->v[1] = _RAX->refdef.viewOffset.v[1];
    __asm { vmovss  xmm1, dword ptr [r8+69A4h] }
  }
  else
  {
    _RBX->v[0] = _RAX->lastFrameViewPos.v[0];
    _RBX->v[1] = _RAX->lastFrameViewPos.v[1];
    __asm { vmovss  xmm1, dword ptr [rax+59688h] }
  }
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+28h+arg_0], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+28h+arg_0], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    return 0;
  __asm { vmovss  [rsp+28h+arg_0], xmm1 }
  return (v11 & 0x7F800000) != 2139095040;
}

/*
==============
CgClientSideEffectsSystem::IsSpatialSoundGlobal
==============
*/
unsigned __int8 CgClientSideEffectsSystem::IsSpatialSoundGlobal(CgClientSideEffectsSystem *this, const unsigned int id)
{
  __int64 v2; 
  unsigned int *m_spatialSoundGlobalBits; 
  unsigned int v5; 

  v2 = (int)id;
  if ( !this->m_spatialSoundGlobalBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2794, ASSERT_TYPE_ASSERT, "(m_spatialSoundGlobalBits)", (const char *)&queryFormat, "m_spatialSoundGlobalBits") )
    __debugbreak();
  if ( (unsigned int)v2 >= cm.mapEnts->clientSideEffects.intervalSoundCount + cm.mapEnts->clientSideEffects.loopSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2795, ASSERT_TYPE_ASSERT, "(id < cm.mapEnts->clientSideEffects.loopSoundCount + cm.mapEnts->clientSideEffects.intervalSoundCount)", (const char *)&queryFormat, "id < cm.mapEnts->clientSideEffects.loopSoundCount + cm.mapEnts->clientSideEffects.intervalSoundCount") )
    __debugbreak();
  m_spatialSoundGlobalBits = this->m_spatialSoundGlobalBits;
  if ( !m_spatialSoundGlobalBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = m_spatialSoundGlobalBits[v2 >> 5];
  return _bittest((const int *)&v5, v2 & 0x1F);
}

/*
==============
CgClientSideEffectsSystem::LoadEffects
==============
*/
void CgClientSideEffectsSystem::LoadEffects(CgClientSideEffectsSystem *this, const char *mapname, const char *scriptDirectory)
{
  const dvar_t *v8; 
  MapEnts *mapEnts; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  unsigned int v14; 
  const char *name; 
  SndAliasList **p_aliasList; 
  bool AliasForCaching; 
  bool v22; 
  SndAliasList *aliasList; 
  unsigned int i; 
  const char *v36; 
  unsigned int v47; 
  __int64 v50; 
  const char *v51; 
  unsigned int j; 
  unsigned __int64 v53; 
  const char *v54; 
  char *fmt; 
  char *fmta; 
  __int64 v57; 
  __int64 v58; 
  bool outIsAlwaysLoaded; 

  if ( !CgClientSideEffectsSystem::SystemEnabled(this) )
    return;
  v8 = DCONST_DVARBOOL_developer_createfx;
  mapEnts = cm.mapEnts;
  if ( !DCONST_DVARBOOL_developer_createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_createfx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && mapEnts->clientSideEffects.rootCount <= 1 )
  {
    CG_CreateFx_LoadLoose();
    if ( !CG_CreateFx_HasBeenEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3315, ASSERT_TYPE_ASSERT, "(CG_CreateFx_HasBeenEnabled())", (const char *)&queryFormat, "CG_CreateFx_HasBeenEnabled()") )
      __debugbreak();
    return;
  }
  if ( !cm.mapEnts->createFxEffectTotal )
  {
    CG_InitClientSideFx(this->m_localClientNum, mapname, scriptDirectory);
    return;
  }
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  this->m_rootsParsed = 0;
  this->m_rootLookAt = -1;
  CG_CreateFx_SetupColors();
  v10 = 0;
  if ( mapEnts->clientSideEffects.oneshotSoundCount )
  {
    while ( 1 )
    {
      v11 = mapEnts->clientSideEffects.oneshotSoundIndices[v10];
      if ( (unsigned int)v11 >= mapEnts->clientSideEffects.oneshotEffectCount )
      {
        LODWORD(v58) = mapEnts->clientSideEffects.oneshotEffectCount;
        LODWORD(v57) = mapEnts->clientSideEffects.oneshotSoundIndices[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3343, ASSERT_TYPE_ASSERT, "(unsigned)( oneshotEffectIndex ) < (unsigned)( effectsData->oneshotEffectCount )", "oneshotEffectIndex doesn't index effectsData->oneshotEffectCount\n\t%i not in [0, %i)", v57, v58) )
          __debugbreak();
      }
      v12 = (__int64)&mapEnts->clientSideEffects.oneshotEffects[v11];
      v13 = *(const char **)(v12 + 40);
      if ( !v13 || !SND_TryFindAliasForCaching(v13, (SndAliasList **)(v12 + 48), &outIsAlwaysLoaded) )
        goto LABEL_23;
      if ( !Com_IsSoundAliasLooping(*(const SndAliasList **)(v12 + 48)) )
        break;
      if ( !outIsAlwaysLoaded )
      {
        Com_Printf(0, "CreateFX oneshot entity reference to sound %s can't be cached (transient bank)\n", *(const char **)(v12 + 40));
        goto LABEL_22;
      }
LABEL_23:
      if ( ++v10 >= mapEnts->clientSideEffects.oneshotSoundCount )
        goto LABEL_24;
    }
    Com_PrintError(0, "Soundalias '%s' is not looping but assigned to a oneshotFX emitter\n", *(const char **)(v12 + 40));
    *(_QWORD *)(v12 + 40) = 0i64;
LABEL_22:
    *(_QWORD *)(v12 + 48) = 0i64;
    goto LABEL_23;
  }
LABEL_24:
  v14 = 0;
  __asm
  {
    vmovss  xmm6, cs:__real@44bb8000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( mapEnts->clientSideEffects.loopSoundCount )
  {
    do
    {
      _RSI = mapEnts->clientSideEffects.loopSounds;
      _RBX = 5i64 * v14;
      name = _RSI[v14].effectSound.name;
      if ( name )
      {
        p_aliasList = &_RSI[v14].aliasList;
        AliasForCaching = SND_TryFindAliasForCaching(name, p_aliasList, &outIsAlwaysLoaded);
        v22 = !AliasForCaching;
        if ( AliasForCaching )
        {
          _RAX = (*p_aliasList)->head;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+68h]
            vcomiss xmm0, xmm7
          }
          if ( !v22 )
            __asm { vcomiss xmm0, xmm6 }
          CgClientSideEffectsSystem::AddSpatialSoundGlobal(this, v14 + mapEnts->clientSideEffects.intervalSoundCount);
          aliasList = _RSI[v14].aliasList;
          if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 339, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
            __debugbreak();
          if ( !aliasList->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_alias_db.h", 340, ASSERT_TYPE_ASSERT, "(aliasList->head)", (const char *)&queryFormat, "aliasList->head") )
            __debugbreak();
          if ( (aliasList->head->flags & 1) == 0 )
          {
            Com_PrintError(0, "Soundalias '%s' is not looping but assigned to a looping emitter\n", _RSI[v14].effectSound.name);
            _RSI[v14].effectSound.name = NULL;
            *p_aliasList = NULL;
          }
        }
        else
        {
          Com_PrintError(0, "Missing soundalias '%s' -- is it loaded?\n", _RSI[v14].effectSound.name);
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+rbx*8+4]
          vmovss  xmm2, dword ptr [rsi+rbx*8]
          vmovss  xmm0, dword ptr [rsi+rbx*8+8]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+88h+fmt], xmm0
        }
        Com_PrintError(9, "No soundalias assigned to createFX looping sound located at (%f, %f, %f)\n", _R8, _R9, fmt);
      }
      ++v14;
    }
    while ( v14 < mapEnts->clientSideEffects.loopSoundCount );
  }
  for ( i = 0; i < mapEnts->clientSideEffects.intervalSoundCount; ++i )
  {
    _RBX = (__int64)&mapEnts->clientSideEffects.intervalSounds[i];
    v36 = *(const char **)(_RBX + 24);
    if ( v36 )
    {
      if ( SND_TryFindAliasForCaching(v36, (SndAliasList **)(_RBX + 32), &outIsAlwaysLoaded) )
      {
        _RCX = *(_QWORD *)(*(_QWORD *)(_RBX + 32) + 16i64);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+68h]
          vcomiss xmm0, xmm7
          vcomiss xmm0, xmm6
        }
        CgClientSideEffectsSystem::AddSpatialSoundGlobal(this, i);
      }
      else
      {
        Com_PrintError(0, "Missing soundalias '%s' -- is it loaded?\n", *(const char **)(_RBX + 24));
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+4]
        vmovss  xmm2, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rbx+8]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+88h+fmt], xmm0
      }
      Com_PrintError(9, "No soundalias assigned to createFX interval sound located at (%f, %f, %f)\n", _R8, _R9, fmta);
    }
  }
  v47 = 0;
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_48]
    vmovaps xmm6, [rsp+88h+var_38]
  }
  if ( mapEnts->clientSideEffects.reactiveEntCount )
  {
    do
    {
      v50 = (__int64)&mapEnts->clientSideEffects.reactiveEnts[v47];
      v51 = *(const char **)(v50 + 32);
      if ( v51 )
      {
        if ( SND_TryFindAliasForCaching(v51, (SndAliasList **)(v50 + 40), &outIsAlwaysLoaded) )
        {
          if ( !outIsAlwaysLoaded )
          {
            Com_Printf(0, "CreateFX reactive entity reference to sound %s can't be cached (transient bank)\n", *(const char **)(v50 + 32));
            *(_QWORD *)(v50 + 40) = 0i64;
          }
        }
        else
        {
          Com_PrintError(0, "Missing soundalias '%s' -- is it loaded?\n", *(const char **)(v50 + 32));
        }
      }
      ++v47;
    }
    while ( v47 < mapEnts->clientSideEffects.reactiveEntCount );
  }
  for ( j = 0; j < mapEnts->clientSideEffects.exploderCount; ++j )
  {
    v53 = (unsigned __int64)&mapEnts->clientSideEffects.exploders[(unsigned __int64)j];
    v54 = *(const char **)(v53 + 40);
    if ( v54 )
    {
      if ( SND_TryFindAliasForCaching(v54, (SndAliasList **)(v53 + 48), &outIsAlwaysLoaded) )
      {
        if ( !outIsAlwaysLoaded )
        {
          Com_Printf(0, "CreateFX exploder entity reference to sound %s can't be cached (transient bank)\n", *(const char **)(v53 + 40));
          *(_QWORD *)(v53 + 48) = 0i64;
        }
      }
      else
      {
        Com_PrintError(0, "Missing soundalias '%s' -- is it loaded?\n", *(const char **)(v53 + 40));
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::ParseRootAddChild
==============
*/
void CgClientSideEffectsSystem::ParseRootAddChild(CgClientSideEffectsSystem *this, const unsigned int parentIndex, const vec3_t *childOrigin, ClientSideEffectType type)
{
  __int64 v4; 
  unsigned int RootIndex; 
  __int64 v8; 
  __int64 v10; 

  v4 = type;
  _RSI = childOrigin;
  _RBX = this;
  RootIndex = CgClientSideEffectsSystem::GetRootIndex(this, parentIndex);
  v8 = RootIndex;
  if ( RootIndex <= 0x3FF )
  {
    if ( RootIndex >= cm.mapEnts->clientSideEffects.rootCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2926, ASSERT_TYPE_ASSERT, "(unsigned)( rootIndex ) < (unsigned)( cm.mapEnts->clientSideEffects.rootCount )", "rootIndex doesn't index cm.mapEnts->clientSideEffects.rootCount\n\t%i not in [0, %i)", RootIndex, cm.mapEnts->clientSideEffects.rootCount) )
      __debugbreak();
    _RDX = v8 << 6;
    if ( _RBX->m_roots[v8].count )
    {
      _RAX = &_RBX->m_roots[v8].bounds;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vminss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rax], xmm1
        vmovss  xmm0, dword ptr [rsi]
        vmaxss  xmm1, xmm0, dword ptr [rax+0Ch]
        vmovss  dword ptr [rax+0Ch], xmm1
        vmovss  xmm0, dword ptr [rax+4]
        vminss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rax+4], xmm1
        vmovss  xmm0, dword ptr [rax+10h]
        vmaxss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rax+10h], xmm1
        vmovss  xmm0, dword ptr [rax+8]
        vminss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rax+8], xmm1
        vmovss  xmm0, dword ptr [rax+14h]
        vmaxss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rax+14h], xmm1
        vmovss  xmm0, dword ptr [rdx+rbx+38B4h]
        vaddss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rdx+rbx+38B4h], xmm1
        vmovss  xmm2, dword ptr [rdx+rbx+38B8h]
        vaddss  xmm0, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [rdx+rbx+38B8h], xmm0
        vmovss  xmm1, dword ptr [rdx+rbx+38BCh]
        vaddss  xmm2, xmm1, dword ptr [rsi+8]
        vmovss  dword ptr [rdx+rbx+38BCh], xmm2
      }
    }
    else
    {
      v10 = v8;
      *(_QWORD *)_RBX->m_roots[v10].countPerType = 0i64;
      *(_QWORD *)&_RBX->m_roots[v10].countPerType[2] = 0i64;
      *(_QWORD *)&_RBX->m_roots[v10].countPerType[4] = 0i64;
      _RAX = (v8 + 227) << 6;
      *(_DWORD *)((char *)&_RBX->__vftable + _RAX) = 2139095039;
      *(_DWORD *)((char *)&_RBX->__vftable + _RAX + 4) = 2139095039;
      *(LocalClientNum_t *)((char *)&_RBX->m_localClientNum + _RAX) = 2139095039;
      *(LocalClientNum_t *)((char *)&_RBX->m_localClientNum + _RAX + 4) = -8388609;
      *(_DWORD *)((char *)&_RBX->m_spatialFX.m_bitsActive + _RAX) = -8388609;
      *(_DWORD *)((char *)&_RBX->m_spatialFX.m_bitsActive + _RAX + 4) = -8388609;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vminss  xmm1, xmm0, dword ptr [rax+rbx]
        vmovss  dword ptr [rax+rbx], xmm1
        vmovss  xmm0, dword ptr [rax+rbx+0Ch]
        vmaxss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rax+rbx+0Ch], xmm1
        vmovss  xmm0, dword ptr [rax+rbx+4]
        vminss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rax+rbx+4], xmm1
        vmovss  xmm0, dword ptr [rax+rbx+10h]
        vmaxss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rax+rbx+10h], xmm1
        vmovss  xmm0, dword ptr [rax+rbx+8]
        vminss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rax+rbx+8], xmm1
        vmovss  xmm0, dword ptr [rax+rbx+14h]
        vmaxss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rax+rbx+14h], xmm1
      }
      *(float *)((char *)_RBX->m_roots[0].origin.v + _RDX) = _RSI->v[0];
      *(float *)((char *)&_RBX->m_roots[0].origin.v[1] + _RDX) = _RSI->v[1];
      *(float *)((char *)&_RBX->m_roots[0].origin.v[2] + _RDX) = _RSI->v[2];
    }
    ++*(unsigned int *)((char *)&_RBX->m_roots[0].count + _RDX);
    ++_RBX->m_roots[v8].countPerType[v4];
  }
}

/*
==============
CgClientSideEffectsSystem::Pending_Add
==============
*/
void CgClientSideEffectsSystem::Pending_Add(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index, const int activateTime)
{
  __int64 m_pendingCount; 
  __int64 v13; 
  int v14; 
  ClientSideTypeData data_out; 

  m_pendingCount = this->m_pendingCount;
  if ( (unsigned int)m_pendingCount >= 0x200 )
  {
    CgClientSideEffectsSystem::GetTypeData(this, type, index, &data_out);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+68h+data_out.origin+4]
      vmovss  xmm2, dword ptr [rsp+68h+data_out.origin]
      vmovss  xmm0, dword ptr [rsp+68h+data_out.origin+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    v14 = 512;
    __asm { vmovsd  [rsp+68h+var_48], xmm0 }
    Com_PrintError(1, "Unable to add pending effect at [%.2f, %.2f, %.2f]-> Too many pending effects.  Increase MAX_PENDING_CFX (%d).\n", _R8, _R9, v13, v14);
  }
  else
  {
    this->m_pending[m_pendingCount].type = type;
    this->m_pending[this->m_pendingCount].index = index;
    this->m_pending[this->m_pendingCount++].startTime = activateTime;
  }
}

/*
==============
CgClientSideEffectsSystem::Pending_Remove
==============
*/
void CgClientSideEffectsSystem::Pending_Remove(CgClientSideEffectsSystem *this, ClientSideEffectType type, unsigned int index)
{
  unsigned int m_pendingCount; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int *i; 

  _R11 = this;
  m_pendingCount = this->m_pendingCount;
  v5 = m_pendingCount - 1;
  v6 = (int)(m_pendingCount - 1);
  if ( (int)(m_pendingCount - 1) >= 0 )
  {
    for ( i = &_R11->m_pending[v5].index; *(i - 1) != type || *i != index; i -= 3 )
    {
      --v5;
      if ( --v6 < 0 )
        return;
    }
    _RDX = m_pendingCount - 1;
    __asm { vmovsd  xmm0, qword ptr [r11+rdx*4+2084h] }
    _RCX = (__int64)&_R11->m_pending[v5];
    __asm { vmovsd  qword ptr [rcx], xmm0 }
    *(_DWORD *)(_RCX + 8) = _R11->m_pending[_RDX].startTime;
    --_R11->m_pendingCount;
  }
}

/*
==============
CgClientSideEffectsSystem::Pending_Update
==============
*/
void CgClientSideEffectsSystem::Pending_Update(CgClientSideEffectsSystem *this)
{
  int v2; 
  __int64 v3; 

  _RSI = this;
  if ( !cm.mapEnts->createFxEffectTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3645, ASSERT_TYPE_ASSERT, "(CG_HaveMapEntsEffects())", (const char *)&queryFormat, "CG_HaveMapEntsEffects()") )
    __debugbreak();
  v2 = _RSI->m_pendingCount - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    _RBX = &_RSI->m_pending[v2].index;
    do
    {
      if ( CG_Utils_TimeIsInThePast(_RSI->m_localClientNum, _RBX[1]) )
      {
        switch ( *(_RBX - 1) )
        {
          case 0u:
          case 6u:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3654, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ClientSideEffectType") )
              goto LABEL_16;
            break;
          case 1u:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3658, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OneshotEffect can not be delayed") )
              goto LABEL_16;
            break;
          case 2u:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3662, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LoopSound can not be delayed") )
              goto LABEL_16;
            break;
          case 3u:
            CgClientSideEffectsSystem::Exploder_ActivateSingle(_RSI, *_RBX, _RBX[1]);
            break;
          case 4u:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IntervalSound can not be delayed") )
LABEL_16:
              __debugbreak();
            break;
          case 5u:
            CgClientSideEffectsSystem::ReactiveEnt_ActivateSingle(_RSI, *_RBX);
            break;
          default:
            break;
        }
        _RCX = _RSI->m_pendingCount - 1;
        __asm
        {
          vmovsd  xmm0, qword ptr [rsi+rcx*4+2084h]
          vmovsd  qword ptr [rbx-4], xmm0
        }
        _RBX[1] = _RSI->m_pending[_RCX].startTime;
        --_RSI->m_pendingCount;
      }
      _RBX -= 3;
      --v3;
    }
    while ( v3 >= 0 );
  }
}

/*
==============
CgClientSideEffectsSystem::ReactiveEnt_ActivateSingle
==============
*/
void CgClientSideEffectsSystem::ReactiveEnt_ActivateSingle(CgClientSideEffectsSystem *this, unsigned int id)
{
  MapEnts *mapEnts; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  const SndAliasList *Alias; 
  CgSoundSystem *SoundSystem; 
  FXRegisteredDef def; 
  tmat33_t<vec3_t> axis; 

  mapEnts = cm.mapEnts;
  v4 = id;
  if ( id >= cm.mapEnts->clientSideEffects.reactiveEntCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3773, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( effectsData->reactiveEntCount )", "id doesn't index effectsData->reactiveEntCount\n\t%i not in [0, %i)", id, cm.mapEnts->clientSideEffects.reactiveEntCount) )
    __debugbreak();
  v5 = v4;
  v6 = (__int64)&mapEnts->clientSideEffects.reactiveEnts[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3775, ASSERT_TYPE_ASSERT, "(reactiveEntDef)", (const char *)&queryFormat, "reactiveEntDef") )
    __debugbreak();
  if ( *(_QWORD *)(v6 + 24) )
  {
    def.m_particleSystemDef = *(const ParticleSystemDef **)(v6 + 24);
    AnglesToAxis((const vec3_t *)(v6 + 12), &axis);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    FX_PlayOrientedEffect(this->m_localClientNum, &def, LocalClientGlobals->time, (const vec3_t *)v6, &axis);
  }
  Alias = *(const SndAliasList **)(v6 + 40);
  if ( Alias || (Alias = SND_TryFindAlias(*(const char **)(v6 + 32))) != NULL )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
    CgSoundSystem::PlaySoundAliasAsync(SoundSystem, 2046, (const vec3_t *)v6, Alias);
  }
  this->m_reactiveEntTimers[v5] = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time + 3000;
}

/*
==============
CgClientSideEffectsSystem::ReactiveEnts_Fire
==============
*/

void __fastcall CgClientSideEffectsSystem::ReactiveEnts_Fire(CgClientSideEffectsSystem *this, const vec3_t *eventOrigin, double eventRadius, double timeDelay)
{
  signed __int64 v4; 
  void *v14; 
  __int64 v46; 
  char v47[4368]; 
  char v57; 

  v14 = alloca(v4);
  __asm
  {
    vmovaps [rsp+1248h+var_58], xmm6
    vmovaps [rsp+1248h+var_68], xmm7
    vmovaps [rsp+1248h+var_78], xmm8
    vmovaps [rsp+1248h+var_88], xmm9
    vmovaps [rsp+1248h+var_98], xmm10
    vmovaps [rsp+1248h+var_A8], xmm11
    vmovaps [rsp+1248h+var_B8], xmm12
    vmovaps [rsp+1248h+var_C8], xmm13
    vmovaps [rsp+1248h+var_D8], xmm14
  }
  _RBP = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1100) = (unsigned __int64)&v46 ^ _security_cookie;
  __asm
  {
    vmovaps xmm13, xmm3
    vmovaps xmm14, xmm2
  }
  _R12 = eventOrigin;
  if ( CgClientSideEffectsSystem::SystemEnabled(this) && CgClientSideEffectsSystem::GetViewPos(this, (vec3_t *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFFE0ui64)) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vmovss  xmm9, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [r12+4]
      vmovss  xmm10, dword ptr [rbp+4]
      vmovss  xmm11, dword ptr [rbp+8]
      vaddss  xmm6, xmm14, cs:__real@459c4000
      vsubss  xmm4, xmm0, xmm9
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm5, xmm0, xmm11
      vsubss  xmm3, xmm1, xmm10
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm3, xmm3, xmm3
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm3, xmm5, xmm5
      vaddss  xmm5, xmm4, xmm3
      vmulss  xmm0, xmm6, xmm6
      vcomiss xmm5, xmm0
    }
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
CgClientSideEffectsSystem::Restart
==============
*/
void CgClientSideEffectsSystem::Restart(CgClientSideEffectsSystem *this)
{
  MapEnts *mapEnts; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int i; 

  if ( CG_CreateFx_HasBeenEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2361, ASSERT_TYPE_ASSERT, "(!CG_CreateFx_HasBeenEnabled())", (const char *)&queryFormat, "!CG_CreateFx_HasBeenEnabled()") )
    __debugbreak();
  if ( CgClientSideEffectsSystem::SystemEnabled(this) && cm.mapEnts->createFxEffectTotal && !CG_CreateFx_HasBeenEnabled() )
  {
    mapEnts = cm.mapEnts;
    v4 = 0;
    v5 = 0;
    if ( cm.mapEnts->clientSideEffects.oneshotEffectCount )
    {
      __asm
      {
        vmovaps [rsp+48h+var_18], xmm6
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        if ( !mapEnts->clientSideEffects.oneshotEffectsTree )
          goto LABEL_11;
        _RCX = 56i64 * v5;
        _RAX = mapEnts->clientSideEffects.oneshotEffects;
        __asm { vcomiss xmm6, dword ptr [rcx+rax+18h] }
        if ( is_mul_ok(0x38ui64, v5) )
        {
LABEL_11:
          ActiveSet::AddGlobal(&this->m_spatialFX);
          CG_PlayOneshotEffect((const LocalClientNum_t)this->m_localClientNum, v5);
        }
        ++v5;
      }
      while ( v5 < mapEnts->clientSideEffects.oneshotEffectCount );
      mapEnts = cm.mapEnts;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
    for ( i = 0; i < mapEnts->clientSideEffects.intervalSoundCount; ++i )
    {
      if ( !mapEnts->clientSideEffects.soundsSpatialTree || CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, i) )
      {
        ActiveSet::AddGlobal(&this->m_spatialSound);
        CgClientSideEffectsSystem::ActiveSounds_Add(this, (ClientSideEffectType)4, i);
      }
    }
    if ( mapEnts->clientSideEffects.loopSoundCount )
    {
      do
      {
        if ( !mapEnts->clientSideEffects.soundsSpatialTree || CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, v4 + mapEnts->clientSideEffects.intervalSoundCount) )
        {
          ActiveSet::AddGlobal(&this->m_spatialSound);
          CgClientSideEffectsSystem::ActiveSounds_Add(this, PhaseSpace, v4);
        }
        ++v4;
      }
      while ( v4 < mapEnts->clientSideEffects.loopSoundCount );
    }
  }
}

/*
==============
CgClientSideEffectsSystem::Shutdown
==============
*/
void CgClientSideEffectsSystem::Shutdown(CgClientSideEffectsSystem *this)
{
  LocalClientNum_t m_localClientNum; 
  cg_t *LocalClientGlobals; 
  ClientSideEffectsData *p_cseData; 
  MapEnts *mapEnts; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int i; 
  unsigned int j; 
  MapEnts *v10; 
  unsigned int *m_activeOneshotFXHandles; 
  unsigned int oneshotEffectCount; 
  unsigned int *m_activeExploderFXHandles; 
  unsigned int exploderCount; 
  unsigned int *m_intervalSoundTimers; 
  unsigned int intervalSoundCount; 
  unsigned int *m_reactiveEntTimers; 
  unsigned int reactiveEntCount; 
  unsigned int *m_spatialSoundGlobalBits; 
  unsigned int m_spatialSoundGlobalBitSize; 

  if ( CgClientSideEffectsSystem::SystemEnabled(this) )
  {
    if ( cm.mapEnts->createFxEffectTotal )
    {
      if ( CgClientSideEffectsSystem::SystemEnabled(this) )
      {
        mapEnts = cm.mapEnts;
        if ( cm.mapEnts->createFxEffectTotal )
        {
          v6 = 0;
          v7 = 0;
          if ( cm.mapEnts->clientSideEffects.oneshotEffectCount )
          {
            do
              CG_SpatialFX_Deactivate((const LocalClientNum_t)this->m_localClientNum, v7++);
            while ( v7 < mapEnts->clientSideEffects.oneshotEffectCount );
          }
          for ( i = 0; i < mapEnts->clientSideEffects.intervalSoundCount; ++i )
            CgClientSideEffectsSystem::ActiveSounds_Remove(this, (ClientSideEffectType)4, i);
          for ( j = 0; j < mapEnts->clientSideEffects.loopSoundCount; ++j )
            CgClientSideEffectsSystem::ActiveSounds_Remove(this, PhaseSpace, j);
          if ( mapEnts->clientSideEffects.exploderCount )
          {
            do
              CgClientSideEffectsSystem::Exploder_DeactivateSingle(this, v6++, 1);
            while ( v6 < mapEnts->clientSideEffects.exploderCount );
          }
        }
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3880, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS )") )
        __debugbreak();
      ActiveSet::Clear(&this->m_spatialFX);
      ActiveSet::Clear(&this->m_spatialSound);
      v10 = cm.mapEnts;
      m_activeOneshotFXHandles = this->m_activeOneshotFXHandles;
      oneshotEffectCount = cm.mapEnts->clientSideEffects.oneshotEffectCount;
      if ( m_activeOneshotFXHandles && oneshotEffectCount )
      {
        memset_0(m_activeOneshotFXHandles, 0, 4i64 * oneshotEffectCount);
        v10 = cm.mapEnts;
      }
      m_activeExploderFXHandles = this->m_activeExploderFXHandles;
      exploderCount = v10->clientSideEffects.exploderCount;
      if ( m_activeExploderFXHandles && exploderCount )
      {
        memset_0(m_activeExploderFXHandles, 0, 4i64 * exploderCount);
        v10 = cm.mapEnts;
      }
      m_intervalSoundTimers = this->m_intervalSoundTimers;
      intervalSoundCount = v10->clientSideEffects.intervalSoundCount;
      if ( m_intervalSoundTimers && intervalSoundCount )
      {
        memset_0(m_intervalSoundTimers, 0, 4i64 * intervalSoundCount);
        v10 = cm.mapEnts;
      }
      m_reactiveEntTimers = this->m_reactiveEntTimers;
      reactiveEntCount = v10->clientSideEffects.reactiveEntCount;
      if ( m_reactiveEntTimers && reactiveEntCount )
        memset_0(m_reactiveEntTimers, 0, 4i64 * reactiveEntCount);
      m_spatialSoundGlobalBits = this->m_spatialSoundGlobalBits;
      if ( m_spatialSoundGlobalBits )
      {
        m_spatialSoundGlobalBitSize = this->m_spatialSoundGlobalBitSize;
        if ( m_spatialSoundGlobalBitSize )
          memset_0(m_spatialSoundGlobalBits, 0, 4i64 * m_spatialSoundGlobalBitSize);
      }
    }
    else
    {
      m_localClientNum = this->m_localClientNum;
      if ( ClStatic::IsFirstActiveGameLocalClient(&cls, m_localClientNum) )
      {
        s_clientEntSoundCount = 0;
        s_clientEntReactiveSoundCount = 0;
        s_clientEntIntervalSoundCount = 0;
        memset_0(&s_pendingExploderSounds, 0, 0x800ui64);
        s_bPendingExploderSounds = 0;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
      p_cseData = &LocalClientGlobals->cseData;
      if ( LocalClientGlobals == (cg_t *)-753384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 466, ASSERT_TYPE_ASSERT, "(cseData)", (const char *)&queryFormat, "cseData") )
        __debugbreak();
      memset_0(p_cseData->pendingExploders, 0, sizeof(p_cseData->pendingExploders));
      p_cseData->bPendingExploders = 0;
      memset_0(&s_pendingExploderSounds, 0, 0x800ui64);
      s_bPendingExploderSounds = 0;
    }
  }
}

/*
==============
CgClientSideEffectsSystem::SpatialFX_Update
==============
*/
void CgClientSideEffectsSystem::SpatialFX_Update(CgClientSideEffectsSystem *this)
{
  vec3_t out_pos; 

  if ( CgClientSideEffectsSystem::GetViewPos(this, &out_pos) )
  {
    if ( cm.mapEnts->clientSideEffects.oneshotEffectsTree )
    {
      __asm { vmovss  xmm3, cs:__real@41200000; viewRadius }
      ActiveSet::Update(&this->m_spatialFX, this->m_localClientNum, &out_pos, *(float *)&_XMM3, NULL, (bool (__fastcall *const)(const LocalClientNum_t, unsigned int))CG_SpatialFX_Activate, CG_SpatialFX_Deactivate, CG_SpatialFX_GetOrigin, (float (__fastcall *)(const LocalClientNum_t, unsigned int))CG_SpatialFX_GetRadius, cm.mapEnts->clientSideEffects.oneshotEffectsTree);
    }
  }
}

/*
==============
CgClientSideEffectsSystem::SpatialSound_Update
==============
*/
void CgClientSideEffectsSystem::SpatialSound_Update(CgClientSideEffectsSystem *this)
{
  vec3_t out_pos; 

  if ( CgClientSideEffectsSystem::GetViewPos(this, &out_pos) )
  {
    if ( cm.mapEnts->clientSideEffects.soundsSpatialTree )
    {
      __asm { vmovss  xmm3, cs:__real@44bb8000; viewRadius }
      ActiveSet::Update(&this->m_spatialSound, this->m_localClientNum, &out_pos, *(float *)&_XMM3, CG_SpatialSound_IsValid, CG_SpatialSound_Activate, CG_SpatialSound_Deactivate, CG_SpatialSound_GetOrigin, (float (__fastcall *)(const LocalClientNum_t, unsigned int))CG_SpatialSound_GetRadius, cm.mapEnts->clientSideEffects.soundsSpatialTree);
    }
  }
}

/*
==============
CgClientSideEffectsSystem::StartEffects
==============
*/
void CgClientSideEffectsSystem::StartEffects(CgClientSideEffectsSystem *this)
{
  MapEnts *mapEnts; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int i; 

  if ( CgClientSideEffectsSystem::SystemEnabled(this) && cm.mapEnts->createFxEffectTotal && !CG_CreateFx_HasBeenEnabled() )
  {
    mapEnts = cm.mapEnts;
    v4 = 0;
    v5 = 0;
    if ( cm.mapEnts->clientSideEffects.oneshotEffectCount )
    {
      __asm
      {
        vmovaps [rsp+38h+var_18], xmm6
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        if ( !mapEnts->clientSideEffects.oneshotEffectsTree )
          goto LABEL_8;
        _RCX = 56i64 * v5;
        _RAX = mapEnts->clientSideEffects.oneshotEffects;
        __asm { vcomiss xmm6, dword ptr [rcx+rax+18h] }
        if ( is_mul_ok(0x38ui64, v5) )
        {
LABEL_8:
          ActiveSet::AddGlobal(&this->m_spatialFX);
          CG_PlayOneshotEffect((const LocalClientNum_t)this->m_localClientNum, v5);
        }
        ++v5;
      }
      while ( v5 < mapEnts->clientSideEffects.oneshotEffectCount );
      mapEnts = cm.mapEnts;
      __asm { vmovaps xmm6, [rsp+38h+var_18] }
    }
    for ( i = 0; i < mapEnts->clientSideEffects.intervalSoundCount; ++i )
    {
      if ( !mapEnts->clientSideEffects.soundsSpatialTree || CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, i) )
      {
        ActiveSet::AddGlobal(&this->m_spatialSound);
        CgClientSideEffectsSystem::ActiveSounds_Add(this, (ClientSideEffectType)4, i);
      }
    }
    if ( mapEnts->clientSideEffects.loopSoundCount )
    {
      do
      {
        if ( !mapEnts->clientSideEffects.soundsSpatialTree || CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, v4 + mapEnts->clientSideEffects.intervalSoundCount) )
        {
          ActiveSet::AddGlobal(&this->m_spatialSound);
          CgClientSideEffectsSystem::ActiveSounds_Add(this, PhaseSpace, v4);
        }
        ++v4;
      }
      while ( v4 < mapEnts->clientSideEffects.loopSoundCount );
    }
  }
}

/*
==============
CgClientSideEffectsSystem::StartSounds
==============
*/
void CgClientSideEffectsSystem::StartSounds(CgClientSideEffectsSystem *this)
{
  MapEnts *mapEnts; 
  unsigned int v2; 
  unsigned int i; 

  mapEnts = cm.mapEnts;
  v2 = 0;
  for ( i = 0; i < mapEnts->clientSideEffects.intervalSoundCount; ++i )
  {
    if ( !mapEnts->clientSideEffects.soundsSpatialTree || CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, i) )
    {
      ActiveSet::AddGlobal(&this->m_spatialSound);
      CgClientSideEffectsSystem::ActiveSounds_Add(this, (ClientSideEffectType)4, i);
    }
  }
  if ( mapEnts->clientSideEffects.loopSoundCount )
  {
    do
    {
      if ( !mapEnts->clientSideEffects.soundsSpatialTree || CgClientSideEffectsSystem::IsSpatialSoundGlobal(this, v2 + mapEnts->clientSideEffects.intervalSoundCount) )
      {
        ActiveSet::AddGlobal(&this->m_spatialSound);
        CgClientSideEffectsSystem::ActiveSounds_Add(this, PhaseSpace, v2);
      }
      ++v2;
    }
    while ( v2 < mapEnts->clientSideEffects.loopSoundCount );
  }
}

/*
==============
CgClientSideEffectsSystem::StopEffects
==============
*/
void CgClientSideEffectsSystem::StopEffects(CgClientSideEffectsSystem *this)
{
  MapEnts *mapEnts; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int i; 
  unsigned int j; 

  if ( CgClientSideEffectsSystem::SystemEnabled(this) )
  {
    mapEnts = cm.mapEnts;
    if ( cm.mapEnts->createFxEffectTotal )
    {
      v3 = 0;
      v4 = 0;
      if ( cm.mapEnts->clientSideEffects.oneshotEffectCount )
      {
        do
          CG_SpatialFX_Deactivate((const LocalClientNum_t)this->m_localClientNum, v4++);
        while ( v4 < mapEnts->clientSideEffects.oneshotEffectCount );
      }
      for ( i = 0; i < mapEnts->clientSideEffects.intervalSoundCount; ++i )
        CgClientSideEffectsSystem::ActiveSounds_Remove(this, (ClientSideEffectType)4, i);
      for ( j = 0; j < mapEnts->clientSideEffects.loopSoundCount; ++j )
        CgClientSideEffectsSystem::ActiveSounds_Remove(this, PhaseSpace, j);
      if ( mapEnts->clientSideEffects.exploderCount )
      {
        do
          CgClientSideEffectsSystem::Exploder_DeactivateSingle(this, v3++, 1);
        while ( v3 < mapEnts->clientSideEffects.exploderCount );
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::SystemEnabled
==============
*/
bool CgClientSideEffectsSystem::SystemEnabled(CgClientSideEffectsSystem *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_clientSideEffects;
  if ( !DVARBOOL_clientSideEffects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "clientSideEffects") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3915, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SIDE_EFFECTS )") )
    __debugbreak();
  return !cm.mapEnts->createFxEffectTotal || (!cm.mapEnts->clientSideEffects.oneshotEffectCount || this->m_activeOneshotFXHandles) && (!cm.mapEnts->clientSideEffects.exploderCount || this->m_activeExploderFXHandles) && (!cm.mapEnts->clientSideEffects.intervalSoundCount || this->m_intervalSoundTimers) && (!cm.mapEnts->clientSideEffects.reactiveEntCount || this->m_reactiveEntTimers);
}

/*
==============
CgClientSideEffectsSystem::Update
==============
*/
void CgClientSideEffectsSystem::Update(CgClientSideEffectsSystem *this)
{
  cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  unsigned int time; 
  __int64 v5; 
  ClientEntReactiveSound **p_reactiveSound; 
  ClientEntReactiveSound *v7; 
  int v8; 
  CgSoundSystem *SoundSystem; 
  LocalClientNum_t v10; 
  cg_t *v11; 
  ClientSideEffectsData *p_cseData; 
  char v13; 
  int *p_startTime; 
  __int64 v15; 
  int v16; 
  __int64 v17; 

  _RSI = this;
  if ( CgClientSideEffectsSystem::SystemEnabled(this) && !CG_CreateFx_HasBeenEnabled() )
  {
    if ( cm.mapEnts->createFxEffectTotal )
    {
      v16 = _RSI->m_pendingCount - 1;
      v17 = v16;
      if ( v16 >= 0 )
      {
        _RBX = &_RSI->m_pending[v16].index;
        do
        {
          if ( CG_Utils_TimeIsInThePast(_RSI->m_localClientNum, _RBX[1]) )
          {
            switch ( *(_RBX - 1) )
            {
              case 0u:
              case 6u:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3654, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid ClientSideEffectType") )
                  goto LABEL_35;
                break;
              case 1u:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3658, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OneshotEffect can not be delayed") )
                  goto LABEL_35;
                break;
              case 2u:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3662, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LoopSound can not be delayed") )
                  goto LABEL_35;
                break;
              case 3u:
                CgClientSideEffectsSystem::Exploder_ActivateSingle(_RSI, *_RBX, _RBX[1]);
                break;
              case 4u:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 3670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IntervalSound can not be delayed") )
LABEL_35:
                  __debugbreak();
                break;
              case 5u:
                CgClientSideEffectsSystem::ReactiveEnt_ActivateSingle(_RSI, *_RBX);
                break;
              default:
                break;
            }
            _RCX = _RSI->m_pendingCount - 1;
            __asm
            {
              vmovsd  xmm0, qword ptr [rsi+rcx*4+2084h]
              vmovsd  qword ptr [rbx-4], xmm0
            }
            _RBX[1] = _RSI->m_pending[_RCX].startTime;
            --_RSI->m_pendingCount;
          }
          _RBX -= 3;
          --v17;
        }
        while ( v17 >= 0 );
      }
    }
    else
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->m_localClientNum);
      m_localClientNum = _RSI->m_localClientNum;
      time = LocalClientGlobals->time;
      v5 = 12i64;
      p_reactiveSound = &CG_GetLocalClientGlobals(m_localClientNum)->cseData.reactiveSoundsActive[0].reactiveSound;
      do
      {
        if ( *((_BYTE *)p_reactiveSound - 4) && *((_DWORD *)p_reactiveSound - 2) <= time )
        {
          v7 = *p_reactiveSound;
          v8 = *((_DWORD *)p_reactiveSound - 3) + 3073;
          if ( v8 >= 505571 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 1919, ASSERT_TYPE_ASSERT, "(soundClientEntIndex < ( ( ( 2048 ) ) + ( 1 ) + ( 1024 ) + ( 128 ) + ( 128 ) + 1024 + ( 2 ) + ( 32 ) + ( 1024 ) + ( 32 ) + ( 128 ) + ( 500000 ) ))", (const char *)&queryFormat, "soundClientEntIndex < MAX_SOUND_ENTITIES") )
            __debugbreak();
          SoundSystem = CgSoundSystem::GetSoundSystem(m_localClientNum);
          CgSoundSystem::PlaySoundAliasAsync(SoundSystem, v8, &v7->origin, v7->aliasList);
          (*p_reactiveSound)->nextTime = time + 3000;
          *((_BYTE *)p_reactiveSound - 4) = 0;
        }
        p_reactiveSound += 3;
        --v5;
      }
      while ( v5 );
      v10 = this->m_localClientNum;
      v11 = CG_GetLocalClientGlobals(v10);
      p_cseData = &v11->cseData;
      if ( v11 == (cg_t *)-753384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.cpp", 2133, ASSERT_TYPE_ASSERT, "(cseData)", (const char *)&queryFormat, "cseData") )
        __debugbreak();
      if ( p_cseData->bPendingExploders )
      {
        v13 = 0;
        p_startTime = (int *)&p_cseData->pendingExploders[0].startTime;
        v15 = 512i64;
        do
        {
          if ( *p_startTime )
          {
            if ( CG_Utils_TimeIsInThePast(v10, *p_startTime) )
            {
              CG_RunExploder(v10, &s_clientExploders.exploders[(unsigned __int64)(unsigned int)*(p_startTime - 1)], *p_startTime);
              *p_startTime = 0;
            }
            else
            {
              v13 = 1;
            }
          }
          p_startTime += 2;
          --v15;
        }
        while ( v15 );
        p_cseData->bPendingExploders = v13;
      }
    }
  }
}

/*
==============
CgClientSideEffectsSystem::UpdateEffects
==============
*/
void CgClientSideEffectsSystem::UpdateEffects(CgClientSideEffectsSystem *this)
{
  vec3_t out_pos; 

  if ( CgClientSideEffectsSystem::SystemEnabled(this) && !CG_CreateFx_HasBeenEnabled() && cm.mapEnts->createFxEffectTotal && CgClientSideEffectsSystem::GetViewPos(this, &out_pos) )
  {
    if ( cm.mapEnts->clientSideEffects.oneshotEffectsTree )
    {
      __asm { vmovss  xmm3, cs:__real@41200000; viewRadius }
      ActiveSet::Update(&this->m_spatialFX, this->m_localClientNum, &out_pos, *(float *)&_XMM3, NULL, (bool (__fastcall *const)(const LocalClientNum_t, unsigned int))CG_SpatialFX_Activate, CG_SpatialFX_Deactivate, CG_SpatialFX_GetOrigin, (float (__fastcall *)(const LocalClientNum_t, unsigned int))CG_SpatialFX_GetRadius, cm.mapEnts->clientSideEffects.oneshotEffectsTree);
    }
  }
}

