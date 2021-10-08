/*
==============
CG_AddFullOcclusionDebugLine
==============
*/

void __fastcall CG_AddFullOcclusionDebugLine(const vec3_t *start, const vec3_t *end, const vec3_t *intersect, bool occluded, const SndAlias *alias)
{
  ?CG_AddFullOcclusionDebugLine@@YAXAEBTvec3_t@@00_NPEBUSndAlias@@@Z(start, end, intersect, occluded, alias);
}

/*
==============
CG_FindNPCAudioZoneAtPoint
==============
*/

bool __fastcall CG_FindNPCAudioZoneAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, const ZoneDef **outZone)
{
  return ?CG_FindNPCAudioZoneAtPoint@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@PEAPEBUZoneDef@@@Z(localClientNum, point, outZone);
}

/*
==============
SND_LookupZoneIndexStateBlended
==============
*/

bool __fastcall SND_LookupZoneIndexStateBlended(int triggerIndex, int *outZoneFrom, int *outZoneTo, float *outLerp)
{
  return ?SND_LookupZoneIndexStateBlended@@YA_NHPEAH0PEAM@Z(triggerIndex, outZoneFrom, outZoneTo, outLerp);
}

/*
==============
CG_StartClientSideTriggersAudio
==============
*/

void __fastcall CG_StartClientSideTriggersAudio(LocalClientNum_t localClientNum, const char *mapname)
{
  ?CG_StartClientSideTriggersAudio@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, mapname);
}

/*
==============
CG_StartClientSideTriggersAudioPropagationPortal
==============
*/

void __fastcall CG_StartClientSideTriggersAudioPropagationPortal(unsigned int triggerIter)
{
  ?CG_StartClientSideTriggersAudioPropagationPortal@@YAXI@Z(triggerIter);
}

/*
==============
CG_GetCurrentWeapReflDefName
==============
*/

const char *__fastcall CG_GetCurrentWeapReflDefName()
{
  return ?CG_GetCurrentWeapReflDefName@@YAPEBDXZ();
}

/*
==============
CG_GetPlayerADSRSettingIndex
==============
*/

int __fastcall CG_GetPlayerADSRSettingIndex(LocalClientNum_t localClientNum, const Weapon *weapon)
{
  return ?CG_GetPlayerADSRSettingIndex@@YAHW4LocalClientNum_t@@AEBUWeapon@@@Z(localClientNum, weapon);
}

/*
==============
CG_SaveAudioTriggerStates
==============
*/

void __fastcall CG_SaveAudioTriggerStates(MemoryFile *memFile)
{
  ?CG_SaveAudioTriggerStates@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_DrawFullOcclusionDebug
==============
*/

void __fastcall CG_DrawFullOcclusionDebug(LocalClientNum_t localClientNum)
{
  ?CG_DrawFullOcclusionDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_IsPlayerAndPointInSameInteriorZone
==============
*/

bool __fastcall CG_IsPlayerAndPointInSameInteriorZone(const LocalClientNum_t localClientNum, const vec3_t *point)
{
  return ?CG_IsPlayerAndPointInSameInteriorZone@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@@Z(localClientNum, point);
}

/*
==============
CG_GetTriggerCenter
==============
*/

bool __fastcall CG_GetTriggerCenter(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *outCenter)
{
  return ?CG_GetTriggerCenter@@YA_NW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, triggerIdx, outCenter);
}

/*
==============
SV_CheckAudioStateName
==============
*/

bool __fastcall SV_CheckAudioStateName(const char *state)
{
  return ?SV_CheckAudioStateName@@YA_NPEBD@Z(state);
}

/*
==============
CG_EnableAudioTriggerByIndex
==============
*/

void __fastcall CG_EnableAudioTriggerByIndex(const unsigned int trigIndex, bool enabled)
{
  ?CG_EnableAudioTriggerByIndex@@YAXI_N@Z(trigIndex, enabled);
}

/*
==============
CG_TriggerUpdateAudio
==============
*/

void __fastcall CG_TriggerUpdateAudio(LocalClientNum_t localClientNum, unsigned int audioBlendTrigger, unsigned int audioTrigger, unsigned int propagationTrigger, unsigned int soundBankTrigger, const vec3_t *viewPos)
{
  ?CG_TriggerUpdateAudio@@YAXW4LocalClientNum_t@@IIIIAEBTvec3_t@@@Z(localClientNum, audioBlendTrigger, audioTrigger, propagationTrigger, soundBankTrigger, viewPos);
}

/*
==============
CG_ShutdownClientSideTriggersAudio
==============
*/

void CG_ShutdownClientSideTriggersAudio(void)
{
  ?CG_ShutdownClientSideTriggersAudio@@YAXXZ();
}

/*
==============
CG_GetWeapReflDefId
==============
*/

unsigned int __fastcall CG_GetWeapReflDefId(const ZoneDef *zone)
{
  return ?CG_GetWeapReflDefId@@YAIPEBUZoneDef@@@Z(zone);
}

/*
==============
CG_GetOverride
==============
*/

CTAudOverride *__fastcall CG_GetOverride(CTAudState *ctAudState, CTAudOverrideType overrideType)
{
  return ?CG_GetOverride@@YAPEAUCTAudOverride@@PEAUCTAudState@@W4CTAudOverrideType@@@Z(ctAudState, overrideType);
}

/*
==============
CG_EnableAudioTriggerByState
==============
*/

void __fastcall CG_EnableAudioTriggerByState(const unsigned int stateId, bool enabled)
{
  ?CG_EnableAudioTriggerByState@@YAXI_N@Z(stateId, enabled);
}

/*
==============
CG_ClientTriggerAudioInUse
==============
*/

int __fastcall CG_ClientTriggerAudioInUse()
{
  return ?CG_ClientTriggerAudioInUse@@YAHXZ();
}

/*
==============
CG_GetPlayerBreathState
==============
*/

PlayerBreathStateDef *__fastcall CG_GetPlayerBreathState(unsigned int state)
{
  return ?CG_GetPlayerBreathState@@YAPEAUPlayerBreathStateDef@@I@Z(state);
}

/*
==============
CG_RestoreAudioTriggerStates
==============
*/

void __fastcall CG_RestoreAudioTriggerStates(MemoryFile *memFile)
{
  ?CG_RestoreAudioTriggerStates@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_GetPlayerAudioBlendTriggerIndex
==============
*/

unsigned int __fastcall CG_GetPlayerAudioBlendTriggerIndex(const LocalClientNum_t localClientNum)
{
  return ?CG_GetPlayerAudioBlendTriggerIndex@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetDistanceFromTriggerWall
==============
*/

bool __fastcall CG_GetDistanceFromTriggerWall(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *inOutPoint, float *outDistance)
{
  return ?CG_GetDistanceFromTriggerWall@@YA_NW4LocalClientNum_t@@IAEATvec3_t@@PEAM@Z(localClientNum, triggerIdx, inOutPoint, outDistance);
}

/*
==============
CG_GetNPCADSRSettingIndex
==============
*/

int __fastcall CG_GetNPCADSRSettingIndex(LocalClientNum_t localClientNum, const vec3_t *org, const Weapon *weapon)
{
  return ?CG_GetNPCADSRSettingIndex@@YAHW4LocalClientNum_t@@AEBTvec3_t@@AEBUWeapon@@@Z(localClientNum, org, weapon);
}

/*
==============
CG_ClearAudioZoneCache
==============
*/

void CG_ClearAudioZoneCache(void)
{
  ?CG_ClearAudioZoneCache@@YAXXZ();
}

/*
==============
CG_StartClientSideTriggersAudioTrigger
==============
*/

void __fastcall CG_StartClientSideTriggersAudioTrigger(unsigned int triggerIter)
{
  ?CG_StartClientSideTriggersAudioTrigger@@YAXI@Z(triggerIter);
}

/*
==============
CG_GetWallProximityVolume
==============
*/

bool __fastcall CG_GetWallProximityVolume(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *inOutPoint, float *outMinVolume)
{
  return ?CG_GetWallProximityVolume@@YA_NW4LocalClientNum_t@@IAEATvec3_t@@PEAM@Z(localClientNum, triggerIdx, inOutPoint, outMinVolume);
}

/*
==============
SND_LookupDefaultNPCZoneIndex
==============
*/

int __fastcall SND_LookupDefaultNPCZoneIndex()
{
  return ?SND_LookupDefaultNPCZoneIndex@@YAHXZ();
}

/*
==============
SND_LookupNPCZoneIndex
==============
*/

int __fastcall SND_LookupNPCZoneIndex(int triggerIndex)
{
  return ?SND_LookupNPCZoneIndex@@YAHH@Z(triggerIndex);
}

/*
==============
CG_CheckAudioStateId
==============
*/

bool __fastcall CG_CheckAudioStateId(const char *stateId)
{
  return ?CG_CheckAudioStateId@@YA_NPEBD@Z(stateId);
}

/*
==============
CG_SetAudioTriggerState
==============
*/

void __fastcall CG_SetAudioTriggerState(const unsigned int stateId, const unsigned int state, const float fadeTime)
{
  ?CG_SetAudioTriggerState@@YAXIIM@Z(stateId, state, fadeTime);
}

/*
==============
CG_OcclusionSettingsMatch
==============
*/

bool __fastcall CG_OcclusionSettingsMatch(const LocalClientNum_t localClientNum, const vec3_t *emitterPos)
{
  return ?CG_OcclusionSettingsMatch@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@@Z(localClientNum, emitterPos);
}

/*
==============
CG_GetBlendedAudioTriggers
==============
*/

bool __fastcall CG_GetBlendedAudioTriggers(unsigned int triggerIndex, unsigned int *outTriggerA, unsigned int *outTriggerB)
{
  return ?CG_GetBlendedAudioTriggers@@YA_NIPEAI0@Z(triggerIndex, outTriggerA, outTriggerB);
}

/*
==============
CG_GetPlayerAudioTriggerIndex
==============
*/

unsigned int __fastcall CG_GetPlayerAudioTriggerIndex(const LocalClientNum_t localClientNum)
{
  return ?CG_GetPlayerAudioTriggerIndex@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetCurrentOverride
==============
*/

CTAudOverride *__fastcall CG_GetCurrentOverride(CTAudState *ctAudState)
{
  return ?CG_GetCurrentOverride@@YAPEAUCTAudOverride@@PEAUCTAudState@@@Z(ctAudState);
}

/*
==============
CG_IsFullyAudioOccluded
==============
*/

bool __fastcall CG_IsFullyAudioOccluded(const LocalClientNum_t localClientNum, const vec3_t *listener, const vec3_t *emitter, const SndAlias *alias)
{
  return ?CG_IsFullyAudioOccluded@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@1PEBUSndAlias@@@Z(localClientNum, listener, emitter, alias);
}

/*
==============
CG_AreAudioZonesOverriden
==============
*/

bool __fastcall CG_AreAudioZonesOverriden(LocalClientNum_t localClientNum)
{
  return ?CG_AreAudioZonesOverriden@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawTriggerAudioState
==============
*/

void __fastcall CG_DrawTriggerAudioState(const LocalClientNum_t localClientNum)
{
  ?CG_DrawTriggerAudioState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SetAudioLerpOverride
==============
*/

void __fastcall CG_SetAudioLerpOverride(LocalClientNum_t localClientNum, const char *p_zoneNameA, const char *p_zoneNameB, CTAudOverrideType overrideType, float lerp, int overRideFlags)
{
  ?CG_SetAudioLerpOverride@@YAXW4LocalClientNum_t@@PEBD1W4CTAudOverrideType@@MH@Z(localClientNum, p_zoneNameA, p_zoneNameB, overrideType, lerp, overRideFlags);
}

/*
==============
CG_GetCurrentAudioZone
==============
*/

bool __fastcall CG_GetCurrentAudioZone(const ZoneDef **outZoneA, const ZoneDef **outZoneB, float *outLerp)
{
  return ?CG_GetCurrentAudioZone@@YA_NPEAPEBUZoneDef@@0PEAM@Z(outZoneA, outZoneB, outLerp);
}

/*
==============
CG_DoesLineSegmentIntersectTrigger
==============
*/

bool __fastcall CG_DoesLineSegmentIntersectTrigger(const LocalClientNum_t localClientNum, const clientTriggerType_t typeMask, const vec3_t *start, const vec3_t *end, unsigned int *outTriggerIndex, vec3_t *outIntersectPos)
{
  return ?CG_DoesLineSegmentIntersectTrigger@@YA_NW4LocalClientNum_t@@W4clientTriggerType_t@@AEBTvec3_t@@2PEAIAEAT3@@Z(localClientNum, typeMask, start, end, outTriggerIndex, outIntersectPos);
}

/*
==============
CG_ResetAudioTrigger
==============
*/

void __fastcall CG_ResetAudioTrigger(const unsigned int trigIndex)
{
  ?CG_ResetAudioTrigger@@YAXI@Z(trigIndex);
}

/*
==============
CG_FindAudioPropagationPortalAtPoint
==============
*/

bool __fastcall CG_FindAudioPropagationPortalAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, unsigned int *outTrigger)
{
  return ?CG_FindAudioPropagationPortalAtPoint@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@PEAI@Z(localClientNum, point, outTrigger);
}

/*
==============
CG_ShouldAddOcclusionDebugLines
==============
*/

bool __fastcall CG_ShouldAddOcclusionDebugLines(const SndAlias *alias)
{
  return ?CG_ShouldAddOcclusionDebugLines@@YA_NPEBUSndAlias@@@Z(alias);
}

/*
==============
CG_GetNearestTwoPropagationTriggers
==============
*/

void __fastcall CG_GetNearestTwoPropagationTriggers(LocalClientNum_t localClientNum, const vec3_t *origin, unsigned int *triggerList, unsigned int numTriggers, unsigned int *outTrigger1, unsigned int *outTrigger2)
{
  ?CG_GetNearestTwoPropagationTriggers@@YAXW4LocalClientNum_t@@AEBTvec3_t@@PEAII22@Z(localClientNum, origin, triggerList, numTriggers, outTrigger1, outTrigger2);
}

/*
==============
CG_GetTriggerMinReverbVolumeAndMaxWallDistance
==============
*/

bool __fastcall CG_GetTriggerMinReverbVolumeAndMaxWallDistance(unsigned int triggerIdx, float *outMinVolume, float *outWallDistance)
{
  return ?CG_GetTriggerMinReverbVolumeAndMaxWallDistance@@YA_NIPEAM0@Z(triggerIdx, outMinVolume, outWallDistance);
}

/*
==============
CG_ChooseWeapReflDistantZones
==============
*/

void __fastcall CG_ChooseWeapReflDistantZones(const LocalClientNum_t localClientNum, const vec3_t *viewPosition, const vec3_t *viewDirection, const ZoneDef **outZoneFront, const ZoneDef **outZoneRear)
{
  ?CG_ChooseWeapReflDistantZones@@YAXW4LocalClientNum_t@@AEBTvec3_t@@1PEAPEBUZoneDef@@2@Z(localClientNum, viewPosition, viewDirection, outZoneFront, outZoneRear);
}

/*
==============
CG_SetTimeScaleByPreset
==============
*/

bool __fastcall CG_SetTimeScaleByPreset(const char *presetName)
{
  return ?CG_SetTimeScaleByPreset@@YA_NPEBD@Z(presetName);
}

/*
==============
CG_IsOverrideSet
==============
*/

bool __fastcall CG_IsOverrideSet(LocalClientNum_t localClientNum, CTAudOverrideType overrideType)
{
  return ?CG_IsOverrideSet@@YA_NW4LocalClientNum_t@@W4CTAudOverrideType@@@Z(localClientNum, overrideType);
}

/*
==============
CG_StartClientSideTriggersNPCZone
==============
*/

void __fastcall CG_StartClientSideTriggersNPCZone(unsigned int triggerIter)
{
  ?CG_StartClientSideTriggersNPCZone@@YAXI@Z(triggerIter);
}

/*
==============
CG_GetPlayerSoundBankTriggerIndex
==============
*/

unsigned int __fastcall CG_GetPlayerSoundBankTriggerIndex(const LocalClientNum_t localClientNum)
{
  return ?CG_GetPlayerSoundBankTriggerIndex@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FindAudioZoneAtPoint
==============
*/

bool __fastcall CG_FindAudioZoneAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, const ZoneDef **outZoneA, const ZoneDef **outZoneB, float *outLerp)
{
  return ?CG_FindAudioZoneAtPoint@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@PEAPEBUZoneDef@@2PEAM@Z(localClientNum, point, outZoneA, outZoneB, outLerp);
}

/*
==============
CG_SetAudioOverride
==============
*/

void __fastcall CG_SetAudioOverride(LocalClientNum_t localClientNum, const char *p_name, CTAudOverrideType overrideType, float fadeTime, int overRideFlags)
{
  ?CG_SetAudioOverride@@YAXW4LocalClientNum_t@@PEBDW4CTAudOverrideType@@MH@Z(localClientNum, p_name, overrideType, fadeTime, overRideFlags);
}

/*
==============
CG_ClearAudioOverride
==============
*/

void __fastcall CG_ClearAudioOverride(LocalClientNum_t localClientNum, CTAudOverrideType overrideType, float fadeTime)
{
  ?CG_ClearAudioOverride@@YAXW4LocalClientNum_t@@W4CTAudOverrideType@@M@Z(localClientNum, overrideType, fadeTime);
}

/*
==============
SND_LookupDefaultZoneIndex
==============
*/

int __fastcall SND_LookupDefaultZoneIndex()
{
  return ?SND_LookupDefaultZoneIndex@@YAHXZ();
}

/*
==============
CG_FindAudioTriggerAtPoint
==============
*/

bool __fastcall CG_FindAudioTriggerAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, unsigned int triggerMask, unsigned int *outTrigger)
{
  return ?CG_FindAudioTriggerAtPoint@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@IPEAI@Z(localClientNum, point, triggerMask, outTrigger);
}

/*
==============
CG_GetReverbDefForTrigger
==============
*/

bool __fastcall CG_GetReverbDefForTrigger(LocalClientNum_t localClientNum, unsigned int triggerIndex, const vec3_t *point, const ReverbDef **outReverbDef)
{
  return ?CG_GetReverbDefForTrigger@@YA_NW4LocalClientNum_t@@IAEBTvec3_t@@PEAPEBUReverbDef@@@Z(localClientNum, triggerIndex, point, outReverbDef);
}

/*
==============
CG_GetCurrentWeapReflDefId
==============
*/

unsigned int __fastcall CG_GetCurrentWeapReflDefId()
{
  return ?CG_GetCurrentWeapReflDefId@@YAIXZ();
}

/*
==============
SND_LookupZoneIndex
==============
*/

int __fastcall SND_LookupZoneIndex(int triggerIndex)
{
  return ?SND_LookupZoneIndex@@YAHH@Z(triggerIndex);
}

/*
==============
CG_GetPlayerAudioPropagationTriggerIndex
==============
*/

unsigned int __fastcall CG_GetPlayerAudioPropagationTriggerIndex(const LocalClientNum_t localClientNum)
{
  return ?CG_GetPlayerAudioPropagationTriggerIndex@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetADSRSettingByIndex
==============
*/

ADSRSetting *__fastcall CG_GetADSRSettingByIndex(int index)
{
  return ?CG_GetADSRSettingByIndex@@YAPEAUADSRSetting@@H@Z(index);
}

/*
==============
CG_AddFullOcclusionDebugLine
==============
*/
void CG_AddFullOcclusionDebugLine(const vec3_t *start, const vec3_t *end, const vec3_t *intersect, bool occluded, const SndAlias *alias)
{
  const dvar_t *v6; 
  const dvar_t *v11; 
  const char *string; 
  char v13; 
  char *v14; 
  int v26; 
  int v30; 
  __int64 v35; 
  char dest[128]; 

  v6 = DCONST_DVARINT_snd_fullOcclusionDebug;
  _RBP = intersect;
  _R14 = end;
  _R15 = start;
  if ( !DCONST_DVARINT_snd_fullOcclusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_fullOcclusionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 1 )
  {
    v11 = DCONST_DVARSTR_snd_occlusionDebugAlias;
    if ( !DCONST_DVARSTR_snd_occlusionDebugAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebugAlias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    string = v11->current.string;
    memset_0(dest, 0, sizeof(dest));
    v13 = 0;
    if ( string )
    {
      if ( alias )
      {
        Core_strcpy(dest, 0x80ui64, string);
        v14 = strtok(dest, "%");
        if ( v14 )
        {
          while ( !*v14 || !strstr_0(alias->aliasName, v14) )
          {
            v14 = strtok(NULL, "%");
            if ( !v14 )
              goto LABEL_16;
          }
          v13 = 1;
        }
      }
    }
LABEL_16:
    if ( !dest[0] || v13 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vmovss  xmm1, dword ptr [r15+4]
      }
      _RBX = DCONST_DVARFLT_snd_occlusionDebugTime;
      __asm { vmovaps [rsp+138h+var_38], xmm6 }
      BYTE4(v35) = occluded;
      __asm
      {
        vmovss  dword ptr [rsp+138h+var_F8], xmm0
        vmovss  xmm0, dword ptr [r15+8]
        vmovss  dword ptr [rsp+138h+var_F8+8], xmm0
        vmovss  xmm0, dword ptr [r14+4]
        vmovss  dword ptr [rsp+138h+var_F8+4], xmm1
        vmovss  xmm1, dword ptr [r14]
        vmovss  dword ptr [rsp+138h+var_F8+10h], xmm0
        vmovss  xmm0, dword ptr [rbp+0]
        vmovss  dword ptr [rsp+138h+var_F8+0Ch], xmm1
        vmovss  xmm1, dword ptr [r14+8]
        vmovss  dword ptr [rsp+138h+var_F8+18h], xmm0
        vmovss  xmm0, dword ptr [rbp+8]
        vmovss  dword ptr [rsp+138h+var_F8+14h], xmm1
        vmovss  xmm1, dword ptr [rbp+4]
        vmovss  dword ptr [rsp+138h+var_D8], xmm0
        vmovss  dword ptr [rsp+138h+var_F8+1Ch], xmm1
      }
      if ( !DCONST_DVARFLT_snd_occlusionDebugTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebugTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v26 = Sys_Milliseconds();
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@c47a0000
        vmovaps xmm6, [rsp+138h+var_38]
        vcvttss2si ecx, xmm0
      }
      v30 = v26 - _ECX;
      if ( !s_fullOcclusionLines.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !s_fullOcclusionLines.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)s_fullOcclusionLines.m_freelist.m_head.mp_next == &s_fullOcclusionLines.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x63ui64) )
        __debugbreak();
      _R8 = (ntl::internal::list_node<FullOcclusionLine> *)s_fullOcclusionLines.m_freelist.m_head.mp_next;
      __asm
      {
        vmovups ymm0, [rsp+138h+var_F8]
        vmovsd  xmm1, [rsp+138h+var_D8]
      }
      s_fullOcclusionLines.m_freelist.m_head.mp_next = s_fullOcclusionLines.m_freelist.m_head.mp_next->mp_next;
      __asm
      {
        vmovups ymmword ptr [r8+10h], ymm0
        vmovsd  qword ptr [r8+30h], xmm1
      }
      _R8->mp_prev = NULL;
      _R8->mp_next = NULL;
      _R8->m_data.time = v30;
      ntl::internal::list_head_base<ntl::internal::list_node<FullOcclusionLine>>::insert_before(&s_fullOcclusionLines.m_listHead, (ntl::internal::list_node<FullOcclusionLine> *)&s_fullOcclusionLines.m_listHead, _R8);
    }
  }
}

/*
==============
CG_AreAudioZonesOverriden
==============
*/
bool CG_AreAudioZonesOverriden(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  CTAudState *v4; 
  CTAudOverride *i; 
  int v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3233, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_audioZoneStates ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_audioZoneStates )\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  v2 = 6;
  v3 = 6i64;
  v4 = &s_audioZoneStates[v1];
  for ( i = &v4->ctOverrideStack[6]; !i->active; --i )
  {
    --v2;
    if ( --v3 < 0 )
      return 0;
  }
  return &v4->ctOverrideStack[v2] != NULL;
}

/*
==============
CG_ChangeAudio
==============
*/

void __fastcall CG_ChangeAudio(LocalClientNum_t localClientNum, __int64 a2, __int64 a3, double _XMM3_8)
{
  const SoundTable *v6; 
  __int64 v8; 
  __int64 reverbIndex; 
  __int64 ctOcclusionZoneA; 
  int v11; 
  ZoneDef *zones; 
  int v13; 
  unsigned int v14; 
  OccludeDef *v15; 
  __int64 ctOcclusionZoneB; 
  ZoneDef *v17; 
  int v18; 
  unsigned int v19; 
  OccludeDef *v20; 
  __int64 ctFilterZoneA; 
  ZoneDef *v22; 
  int v23; 
  signed int v24; 
  __int64 ctFilterZoneB; 
  ZoneDef *v30; 
  int v31; 
  signed int v32; 
  signed int VolModCount; 
  signed int i; 
  __int64 ctMixZoneA; 
  ZoneDef *v42; 
  int v43; 
  signed int v45; 
  __int64 ctAmbientZoneA; 
  const char *ambientStream; 
  __int64 ctAmbientEventZoneA; 
  const SoundTable *v56; 
  __int16 ambientDefIndex; 
  const AmbientDef *v59; 
  __int64 ctFullOcclusionZoneA; 
  const SoundTable *v61; 
  ZoneDef *v62; 
  unsigned int v63; 
  float fmt; 
  float fmta; 
  __int64 freq; 
  float freqa; 
  float freqb; 
  __int64 q; 
  float qa; 
  float qb; 

  v6 = s_soundTablePtr;
  v8 = localClientNum;
  if ( s_audioZoneStates[v8].ctReverbZoneA >= s_soundTablePtr->zoneCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctReverbZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctReverbZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", s_audioZoneStates[v8].ctReverbZoneA, s_soundTablePtr->zoneCount) )
      __debugbreak();
    v6 = s_soundTablePtr;
  }
  reverbIndex = v6->zones[s_audioZoneStates[v8].ctReverbZoneA].reverbIndex;
  if ( (_DWORD)reverbIndex == -1 )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000; fadetime }
    SND_ClearMainReverb(*(const float *)&_XMM0);
  }
  else
  {
    SND_SetMainReverb(&v6->reverbs[reverbIndex]);
  }
  SND_DeactivateAllEq(0);
  SND_DeactivateAllEq(1);
  SND_ClearAllOcclusionSettings();
  if ( s_audioZoneStates[v8].ctOcclusionZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctOcclusionZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctOcclusionZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctOcclusionZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  if ( s_audioZoneStates[v8].ctOcclusionZoneB >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctOcclusionZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 453, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctOcclusionZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctOcclusionZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctOcclusionZoneA = s_audioZoneStates[v8].ctOcclusionZoneA;
  v11 = 0;
  zones = s_soundTablePtr->zones;
  if ( zones[ctOcclusionZoneA].startOcclusionIndex != -1 )
  {
    v13 = 0;
    if ( zones[ctOcclusionZoneA].numOcclusion > 0 )
    {
      do
      {
        v14 = v13 + zones[(unsigned int)ctOcclusionZoneA].startOcclusionIndex;
        if ( v14 >= s_soundTablePtr->occlusionFilterCount )
        {
          LODWORD(q) = s_soundTablePtr->occlusionFilterCount;
          LODWORD(freq) = v13 + zones[(unsigned int)ctOcclusionZoneA].startOcclusionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 460, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->occlusionFilterCount )", "idx doesn't index s_soundTablePtr->occlusionFilterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        v15 = &s_soundTablePtr->occlusionFilters[v14];
        SND_SetOcclusionFilterSingleIndex(v15->entChannelIdx, 0, v15);
        ++v13;
        LODWORD(ctOcclusionZoneA) = s_audioZoneStates[v8].ctOcclusionZoneA;
        zones = s_soundTablePtr->zones;
      }
      while ( v13 < zones[(unsigned int)ctOcclusionZoneA].numOcclusion );
    }
  }
  ctOcclusionZoneB = s_audioZoneStates[v8].ctOcclusionZoneB;
  v17 = s_soundTablePtr->zones;
  if ( v17[ctOcclusionZoneB].startOcclusionIndex != -1 )
  {
    v18 = 0;
    if ( v17[ctOcclusionZoneB].numOcclusion > 0 )
    {
      do
      {
        v19 = v18 + v17[(unsigned int)ctOcclusionZoneB].startOcclusionIndex;
        if ( v19 >= s_soundTablePtr->occlusionFilterCount )
        {
          LODWORD(q) = s_soundTablePtr->occlusionFilterCount;
          LODWORD(freq) = v18 + v17[(unsigned int)ctOcclusionZoneB].startOcclusionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->occlusionFilterCount )", "idx doesn't index s_soundTablePtr->occlusionFilterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        v20 = &s_soundTablePtr->occlusionFilters[v19];
        SND_SetOcclusionFilterSingleIndex(v20->entChannelIdx, 1, v20);
        ++v18;
        LODWORD(ctOcclusionZoneB) = s_audioZoneStates[v8].ctOcclusionZoneB;
        v17 = s_soundTablePtr->zones;
      }
      while ( v18 < v17[(unsigned int)ctOcclusionZoneB].numOcclusion );
    }
  }
  if ( s_audioZoneStates[v8].ctFilterZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctFilterZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 475, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctFilterZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctFilterZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  if ( s_audioZoneStates[v8].ctFilterZoneB >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctFilterZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 476, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctFilterZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctFilterZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctFilterZoneA = s_audioZoneStates[v8].ctFilterZoneA;
  v22 = s_soundTablePtr->zones;
  if ( v22[ctFilterZoneA].startFilterIndex != -1 )
  {
    v23 = 0;
    if ( v22[ctFilterZoneA].numFilter > 0 )
    {
      do
      {
        v24 = v23 + v22[(unsigned int)ctFilterZoneA].startFilterIndex;
        if ( v24 >= s_soundTablePtr->filterCount )
        {
          LODWORD(q) = s_soundTablePtr->filterCount;
          LODWORD(freq) = v23 + v22[(unsigned int)ctFilterZoneA].startFilterIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 483, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->filterCount )", "idx doesn't index s_soundTablePtr->filterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        _R9 = 3i64 * v24;
        _RDX = s_soundTablePtr->filters;
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+r9*8+14h]
          vmovss  xmm1, dword ptr [rdx+r9*8+0Ch]
          vmovss  [rsp+68h+q], xmm0
          vmovss  xmm0, dword ptr [rdx+r9*8+10h]
          vmovss  [rsp+68h+freq], xmm1
          vmovss  dword ptr [rsp+68h+fmt], xmm0
        }
        SND_SetEqEntChannel(_RDX[v24].entChannelIdx, 0, _RDX[v24].band, _RDX[v24].type, fmt, freqa, qa);
        ++v23;
        LODWORD(ctFilterZoneA) = s_audioZoneStates[v8].ctFilterZoneA;
        v22 = s_soundTablePtr->zones;
      }
      while ( v23 < v22[(unsigned int)ctFilterZoneA].numFilter );
    }
  }
  ctFilterZoneB = s_audioZoneStates[v8].ctFilterZoneB;
  v30 = s_soundTablePtr->zones;
  if ( v30[ctFilterZoneB].startFilterIndex != -1 )
  {
    v31 = 0;
    if ( v30[ctFilterZoneB].numFilter > 0 )
    {
      do
      {
        v32 = v31 + v30[(unsigned int)ctFilterZoneB].startFilterIndex;
        if ( v32 >= s_soundTablePtr->filterCount )
        {
          LODWORD(q) = s_soundTablePtr->filterCount;
          LODWORD(freq) = v31 + v30[(unsigned int)ctFilterZoneB].startFilterIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 493, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->filterCount )", "idx doesn't index s_soundTablePtr->filterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        _R9 = 3i64 * v32;
        _RDX = s_soundTablePtr->filters;
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+r9*8+14h]
          vmovss  xmm1, dword ptr [rdx+r9*8+0Ch]
          vmovss  [rsp+68h+q], xmm0
          vmovss  xmm0, dword ptr [rdx+r9*8+10h]
          vmovss  [rsp+68h+freq], xmm1
          vmovss  dword ptr [rsp+68h+fmt], xmm0
        }
        SND_SetEqEntChannel(_RDX[v32].entChannelIdx, 1, _RDX[v32].band, _RDX[v32].type, fmta, freqb, qb);
        ++v31;
        LODWORD(ctFilterZoneB) = s_audioZoneStates[v8].ctFilterZoneB;
        v30 = s_soundTablePtr->zones;
      }
      while ( v31 < v30[(unsigned int)ctFilterZoneB].numFilter );
    }
  }
  VolModCount = SND_GetVolModCount();
  for ( i = 0; i < VolModCount; ++i )
  {
    *(double *)&_XMM0 = SND_GetVolModDefaultValue(i);
    __asm { vmovaps xmm1, xmm0; value }
    SND_SetVolModValue(i, *(float *)&_XMM1, 0);
  }
  __asm { vmovss  xmm2, cs:__real@bf800000; lerp }
  SND_SubmixSetSlotsFromZones(s_soundTablePtr->zones[s_audioZoneStates[v8].ctMixZoneA].duck, s_soundTablePtr->zones[s_audioZoneStates[v8].ctMixZoneB].duck, *(const float *)&_XMM2);
  if ( s_audioZoneStates[v8].ctMixZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctMixZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctMixZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctMixZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctMixZoneA = s_audioZoneStates[v8].ctMixZoneA;
  v42 = s_soundTablePtr->zones;
  if ( v42[ctMixZoneA].startMixIndex != -1 )
  {
    v43 = 0;
    if ( v42[ctMixZoneA].numMix > 0 )
    {
      __asm
      {
        vmovaps [rsp+68h+var_28], xmm6
        vmovss  xmm6, cs:__real@3a83126f
      }
      do
      {
        v45 = v43 + v42[(unsigned int)ctMixZoneA].startMixIndex;
        if ( v45 >= s_soundTablePtr->mixCount )
        {
          LODWORD(q) = s_soundTablePtr->mixCount;
          LODWORD(freq) = v43 + v42[(unsigned int)ctMixZoneA].startMixIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 517, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->mixCount )", "idx doesn't index s_soundTablePtr->mixCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        _R9 = 2i64 * v45;
        _RDX = s_soundTablePtr->mixes;
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rdx+r9*8+0Ch]
          vcvttss2si r8d, xmm1; msec
          vmovss  xmm1, dword ptr [rdx+r9*8+8]; value
        }
        SND_SetVolModValue(_RDX[v45].volModIndex, *(float *)&_XMM1, _ER8);
        ++v43;
        LODWORD(ctMixZoneA) = s_audioZoneStates[v8].ctMixZoneA;
        v42 = s_soundTablePtr->zones;
      }
      while ( v43 < v42[(unsigned int)ctMixZoneA].numMix );
      __asm { vmovaps xmm6, [rsp+68h+var_28] }
    }
  }
  if ( s_audioZoneStates[v8].ctAmbientZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctAmbientZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 523, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctAmbientZoneA = s_audioZoneStates[v8].ctAmbientZoneA;
  if ( (_DWORD)ctAmbientZoneA == s_audioZoneStates[v8].ctAmbientZoneB )
  {
    ambientStream = s_soundTablePtr->zones[ctAmbientZoneA].ambientStream;
    if ( ambientStream && *ambientStream )
    {
      __asm { vmovss  xmm2, cs:__real@3f800000; volumeScale }
      SND_PlayAmbientAlias(localClientNum, ambientStream, *(float *)&_XMM2, 0, 1, SASYS_CGAME);
    }
    else
    {
      SND_StopAmbient(0);
    }
  }
  if ( s_audioZoneStates[v8].ctAmbientEventZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v8].ctAmbientEventZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 538, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientEventZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientEventZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctAmbientEventZoneA = s_audioZoneStates[v8].ctAmbientEventZoneA;
  if ( (_DWORD)ctAmbientEventZoneA == s_audioZoneStates[v8].ctAmbientEventZoneB )
  {
    v56 = s_soundTablePtr;
    ambientDefIndex = s_soundTablePtr->zones[ctAmbientEventZoneA].ambientDefIndex;
    if ( ambientDefIndex == -1 )
    {
      v59 = NULL;
      v56 = NULL;
      __asm { vxorps  xmm3, xmm3, xmm3; strength }
    }
    else
    {
      __asm { vmovss  xmm3, cs:__real@3f800000 }
      v59 = &s_soundTablePtr->ambientDefs[ambientDefIndex];
    }
    SND_SetAmbientEvents(localClientNum, v56, v59, *(float *)&_XMM3);
  }
  SND_InitFullOcclusionFlags();
  ctFullOcclusionZoneA = s_audioZoneStates[v8].ctFullOcclusionZoneA;
  v61 = s_soundTablePtr;
  v62 = s_soundTablePtr->zones;
  if ( v62[ctFullOcclusionZoneA].startFullOccIndex != -1 && v62[ctFullOcclusionZoneA].numDisableFullOcc > 0 )
  {
    do
    {
      v63 = v11 + v62[(unsigned int)ctFullOcclusionZoneA].startFullOccIndex;
      if ( v63 >= v61->fullOcclusionDefCount )
      {
        LODWORD(q) = v61->fullOcclusionDefCount;
        LODWORD(freq) = v11 + v62[(unsigned int)ctFullOcclusionZoneA].startFullOccIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 561, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->fullOcclusionDefCount )", "idx doesn't index s_soundTablePtr->fullOcclusionDefCount\n\t%i not in [0, %i)", freq, q) )
          __debugbreak();
        v61 = s_soundTablePtr;
      }
      SND_DisableFullOcclusionForEntChannel(v61->fullOcclusionDefs[v63].entChannelIdx);
      ++v11;
      v61 = s_soundTablePtr;
      LODWORD(ctFullOcclusionZoneA) = s_audioZoneStates[v8].ctFullOcclusionZoneA;
      v62 = s_soundTablePtr->zones;
    }
    while ( v11 < v62[(unsigned int)ctFullOcclusionZoneA].numDisableFullOcc );
  }
  g_audTrigWeapReflZoneA = s_audioZoneStates[v8].ctWeapReflZoneA;
  g_audTrigWeapReflZoneB = s_audioZoneStates[v8].ctWeapReflZoneB;
  g_audTrigPlayerBreathZoneA = s_audioZoneStates[v8].ctPlayerBreathZoneA;
  g_audTrigPlayerBreathZoneB = s_audioZoneStates[v8].ctPlayerBreathZoneB;
}

/*
==============
CG_CheckAudioStateId
==============
*/
char CG_CheckAudioStateId(const char *stateId)
{
  __int64 v1; 
  const char *v3; 
  char v4; 
  int v5; 
  char v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  char *v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 

  v1 = 0i64;
  v3 = stateId;
  if ( stateId && (v4 = *stateId) != 0 )
  {
    v5 = 5381;
    do
    {
      ++v3;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *v3;
    }
    while ( *v3 );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 == SND_GetDefaultHash() )
    return 1;
  if ( cm.mapEnts->clientTrigger.trigger.count )
  {
    while ( 1 )
    {
      v7 = cm.mapEnts->clientTrigger.audioStateIds[v1];
      if ( (_DWORD)v7 != -1 )
        break;
LABEL_25:
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= cm.mapEnts->clientTrigger.trigger.count )
        return 0;
    }
    v8 = 0x7FFFFFFFi64;
    v9 = stateId;
    v10 = &cm.mapEnts->clientTrigger.triggerString[v7];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !stateId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v11 = v10 - stateId;
    do
    {
      v12 = v9[v11];
      v13 = v8;
      v14 = *v9++;
      --v8;
      if ( !v13 )
        break;
      if ( v12 != v14 )
        goto LABEL_25;
    }
    while ( v12 );
    return 1;
  }
  return 0;
}

/*
==============
CG_ChooseWeapReflDistantZones
==============
*/
void CG_ChooseWeapReflDistantZones(const LocalClientNum_t localClientNum, const vec3_t *viewPosition, const vec3_t *viewDirection, const ZoneDef **outZoneFront, const ZoneDef **outZoneRear)
{
  __int64 v12; 
  __int64 v13; 
  __int16 *blendLookup; 
  unsigned int v15; 
  unsigned int numClientTriggerBlendNodes; 
  __int64 v17; 
  ClientTriggerBlendNode *v18; 
  unsigned int triggerA; 
  unsigned int triggerB; 
  __int64 v43; 
  char v44; 
  char v45; 
  int v46; 
  __int64 v49; 
  const SoundTable *v50; 
  const ZoneDef *v51; 
  const SoundTable *v52; 
  const SoundTable *v65; 
  __int64 v76; 
  int v82; 
  const ZoneDef *v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  vec3_t outOffset; 
  vec3_t v89; 
  vec3_t outOrigin; 

  *outZoneFront = NULL;
  *(_QWORD *)outOrigin.v = viewPosition;
  v12 = localClientNum;
  *outZoneRear = NULL;
  if ( cm.mapEnts )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3525, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentAudioTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentAudioTrigger )\n\t%i not in [0, %i)", localClientNum, 2) )
        __debugbreak();
      LODWORD(v87) = 2;
      LODWORD(v85) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3616, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentAudioBlendTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentAudioBlendTrigger )\n\t%i not in [0, %i)", v85, v87) )
        __debugbreak();
    }
    v13 = (unsigned int)g_playerCurrentAudioBlendTrigger[v12];
    if ( (_DWORD)v13 == 0x4000 )
    {
      v82 = SND_LookupZoneIndex(g_playerCurrentAudioTrigger[v12]);
      if ( v82 != 0x7FFFFFFF )
      {
        v83 = &s_soundTablePtr->zones[v82];
        *outZoneFront = v83;
        *outZoneRear = v83;
      }
    }
    else
    {
      blendLookup = cm.mapEnts->clientTrigger.blendLookup;
      __asm
      {
        vmovaps [rsp+110h+var_40], xmm6
        vmovaps [rsp+110h+var_50], xmm7
        vmovaps [rsp+110h+var_60], xmm8
      }
      v15 = blendLookup[v13];
      numClientTriggerBlendNodes = cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes;
      __asm
      {
        vmovaps [rsp+110h+var_70], xmm9
        vmovaps [rsp+110h+var_80], xmm10
        vmovaps [rsp+110h+var_90], xmm11
      }
      if ( v15 >= numClientTriggerBlendNodes )
      {
        LODWORD(v86) = numClientTriggerBlendNodes;
        LODWORD(v84) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3533, ASSERT_TYPE_ASSERT, "(unsigned)( blendIndex ) < (unsigned)( cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )", "blendIndex doesn't index cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes\n\t%i not in [0, %i)", v84, v86) )
          __debugbreak();
      }
      v17 = v15;
      v18 = &cm.mapEnts->clientTriggerBlend.blendNodes[v17];
      triggerA = v18->triggerA;
      triggerB = v18->triggerB;
      CG_TriggerTransformPointOnMovingPlatform((const LocalClientNum_t)v12, triggerA, &v18->pointA, &outOffset, NULL);
      CG_TriggerTransformPointOnMovingPlatform((const LocalClientNum_t)v12, triggerB, &cm.mapEnts->clientTriggerBlend.blendNodes[v17].pointB, &v89, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+110h+outOffset]
        vsubss  xmm11, xmm0, dword ptr [rax]
        vmovss  xmm0, dword ptr [rbp+4Fh+outOffset+4]
        vsubss  xmm10, xmm0, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rbp+4Fh+outOffset+8]
        vsubss  xmm9, xmm0, dword ptr [rax+8]
        vmovss  xmm0, dword ptr [rbp+4Fh+var_C0]
        vsubss  xmm8, xmm0, dword ptr [rax]
        vmovss  xmm0, dword ptr [rbp+4Fh+var_C0+4]
        vsubss  xmm7, xmm0, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rbp+4Fh+var_C0+8]
        vsubss  xmm6, xmm0, dword ptr [rax+8]
        vmulss  xmm0, xmm10, dword ptr [r13+4]
        vmulss  xmm1, xmm11, dword ptr [r13+0]
        vmulss  xmm3, xmm8, dword ptr [r13+0]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [r13+8]
        vmulss  xmm0, xmm7, dword ptr [r13+4]
        vmovss  dword ptr [rbp+4Fh+outOffset+8], xmm9
        vaddss  xmm9, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [r13+8]
        vaddss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rbp+4Fh+var_C0+8], xmm6
        vaddss  xmm6, xmm2, xmm1
        vmovss  dword ptr [rsp+110h+outOffset], xmm11
        vmovss  dword ptr [rbp+4Fh+outOffset+4], xmm10
        vmovss  dword ptr [rbp+4Fh+var_C0], xmm8
        vmovss  dword ptr [rbp+4Fh+var_C0+4], xmm7
      }
      v43 = SND_LookupZoneIndex(triggerA);
      v46 = SND_LookupZoneIndex(triggerB);
      __asm
      {
        vmovaps xmm11, [rsp+110h+var_90]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm9, xmm0
      }
      v49 = v46;
      if ( v44 )
        goto LABEL_14;
      __asm { vcomiss xmm9, xmm6 }
      if ( v44 | v45 )
      {
LABEL_14:
        __asm { vcomiss xmm6, xmm0 }
        if ( v44 )
        {
          SND_GetListenerOrigin((const LocalClientNum_t)v12, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+110h+outOffset]
            vsubss  xmm10, xmm0, dword ptr [rbp+4Fh+outOrigin]
            vmovss  xmm1, dword ptr [rbp+4Fh+outOffset+4]
            vsubss  xmm7, xmm1, dword ptr [rbp+4Fh+outOrigin+4]
            vmovss  xmm0, dword ptr [rbp+4Fh+outOffset+8]
            vsubss  xmm8, xmm0, dword ptr [rbp+4Fh+outOrigin+8]
            vmovss  xmm1, dword ptr [rbp+4Fh+var_C0]
            vsubss  xmm9, xmm1, dword ptr [rbp+4Fh+outOrigin]
            vmovss  xmm0, dword ptr [rbp+4Fh+var_C0+4]
            vsubss  xmm5, xmm0, dword ptr [rbp+4Fh+outOrigin+4]
            vmovss  xmm1, dword ptr [rbp+4Fh+var_C0+8]
            vsubss  xmm6, xmm1, dword ptr [rbp+4Fh+outOrigin+8]
          }
          v65 = s_soundTablePtr;
          __asm
          {
            vmulss  xmm0, xmm10, xmm10
            vmulss  xmm2, xmm7, xmm7
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm8, xmm8
            vaddss  xmm4, xmm3, xmm1
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm0, xmm9, xmm9
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm3, xmm1
            vcomiss xmm4, xmm2
          }
          if ( v44 )
            v76 = v43;
          else
            v76 = v49;
          *outZoneFront = &s_soundTablePtr->zones[v76];
          v51 = &v65->zones[v76];
        }
        else
        {
          v52 = s_soundTablePtr;
          *outZoneFront = &s_soundTablePtr->zones[v46];
          v51 = &v52->zones[v43];
        }
      }
      else
      {
        v50 = s_soundTablePtr;
        *outZoneFront = &s_soundTablePtr->zones[v43];
        v51 = &v50->zones[v46];
      }
      *outZoneRear = v51;
      __asm
      {
        vmovaps xmm10, [rsp+110h+var_80]
        vmovaps xmm9, [rsp+110h+var_70]
        vmovaps xmm8, [rsp+110h+var_60]
        vmovaps xmm7, [rsp+110h+var_50]
        vmovaps xmm6, [rsp+110h+var_40]
      }
    }
  }
}

/*
==============
CG_ClearAudioOverride
==============
*/

void __fastcall CG_ClearAudioOverride(LocalClientNum_t localClientNum, CTAudOverrideType overrideType, double fadeTime)
{
  __int64 v4; 
  CTAudState *v5; 
  cg_t *LocalClientGlobals; 
  int v8; 
  CTAudOverride *v9; 
  __int64 v10; 
  CTAudOverride *v11; 
  CTAudOverride *v12; 
  int v16; 
  int v17; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v4 = overrideType;
  v5 = &s_audioZoneStates[localClientNum];
  __asm { vmovaps xmm6, xmm2 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v4 >= 7 )
  {
    v17 = 7;
    v16 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v8 = 6;
  v9 = &v5->ctOverrideStack[v4];
  v10 = 6i64;
  v11 = &v5->ctOverrideStack[6];
  while ( !v11->active )
  {
    --v8;
    --v11;
    if ( --v10 < 0 )
    {
      v12 = NULL;
      goto LABEL_9;
    }
  }
  v12 = &v5->ctOverrideStack[v8];
LABEL_9:
  if ( v12 == v9 )
  {
    __asm { vmulss  xmm0, xmm6, cs:__real@c47a0000 }
    v5->scriptAudioZoneFadeStartTime = LocalClientGlobals->time;
    __asm { vcvttss2si eax, xmm0 }
    v5->scriptAudioZoneFadeTargetTime = LocalClientGlobals->time - _EAX;
    v5->scriptPrevAudioZoneOverride = v9->scriptAudioZoneOverride;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  v9->scriptAudioZoneOverrideFlags = 2047;
  v9->scriptAudioZoneOverrideB = 0x7FFFFFFF;
  v9->scriptAudioZoneOverride = 0x7FFFFFFF;
  v9->active = 0;
}

/*
==============
CG_ClearAudioZoneCache
==============
*/
void CG_ClearAudioZoneCache(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 

  v0 = s_numAudioZoneCachePeak;
  if ( s_numAudioZoneCache > s_numAudioZoneCachePeak )
    v0 = s_numAudioZoneCache;
  s_numAudioZoneCachePeak = v0;
  v1 = s_audioZoneCacheHitPeak;
  if ( s_audioZoneCacheHits > s_audioZoneCacheHitPeak )
    v1 = s_audioZoneCacheHits;
  s_audioZoneCacheHitPeak = v1;
  v2 = s_audioZoneCacheMissPeak;
  if ( s_audioZoneCacheMisses > s_audioZoneCacheMissPeak )
    v2 = s_audioZoneCacheMisses;
  s_audioZoneCacheMissPeak = v2;
  v3 = s_audioZoneCacheFaultPeak;
  if ( s_audioZoneCacheFault > s_audioZoneCacheFaultPeak )
    v3 = s_audioZoneCacheFault;
  s_audioZoneCacheHits = 0;
  s_audioZoneCacheMisses = 0;
  s_audioZoneCacheFault = 0;
  s_numAudioZoneCache = 0;
  s_audioZoneCacheFaultPeak = v3;
}

/*
==============
CG_ClientTriggerAudioInUse
==============
*/
__int64 CG_ClientTriggerAudioInUse()
{
  return (unsigned int)g_audioTriggersFound;
}

/*
==============
CG_DoesLineSegmentIntersectTrigger
==============
*/
bool CG_DoesLineSegmentIntersectTrigger(const LocalClientNum_t localClientNum, const clientTriggerType_t typeMask, const vec3_t *start, const vec3_t *end, unsigned int *outTriggerIndex, vec3_t *outIntersectPos)
{
  signed __int64 v6; 
  void *v17; 
  int v19; 
  LocalClientNum_t v20; 
  MapEnts *mapEnts; 
  const vec3_t *v22; 
  const vec3_t *v23; 
  const SpatialPartition_Tree *spatialTree; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  MapEnts *v28; 
  MapEnts *v35; 
  ClientTriggerModel *models; 
  unsigned int v39; 
  const vec3_t *v41; 
  __int64 v42; 
  bool result; 
  __int64 v68; 
  char *fmt; 
  __int64 v70; 
  __int64 v71; 
  char v72[4496]; 
  char v83; 

  v17 = alloca(v6);
  __asm
  {
    vmovaps [rsp+12C8h+var_48], xmm6
    vmovaps [rsp+12C8h+var_58], xmm7
    vmovaps [rsp+12C8h+var_68], xmm8
    vmovaps [rsp+12C8h+var_78], xmm9
    vmovaps [rsp+12C8h+var_88], xmm10
    vmovaps [rsp+12C8h+var_98], xmm11
    vmovaps [rsp+12C8h+var_A8], xmm12
    vmovaps [rsp+12C8h+var_B8], xmm13
    vmovaps [rsp+12C8h+var_C8], xmm14
    vmovaps [rsp+12C8h+var_D8], xmm15
  }
  _RBP = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4480) = (unsigned __int64)&v68 ^ _security_cookie;
  LOWORD(v19) = typeMask;
  *(_DWORD *)(_RBP + 12) = typeMask;
  v20 = localClientNum;
  mapEnts = cm.mapEnts;
  v22 = end;
  *(_DWORD *)(_RBP + 8) = localClientNum;
  v23 = start;
  *(_QWORD *)(_RBP + 16) = outTriggerIndex;
  *(_QWORD *)(_RBP + 352) = 0i64;
  *(_DWORD *)(_RBP + 360) = 0;
  *(_QWORD *)(_RBP + 368) = 0i64;
  *(_QWORD *)(_RBP + 376) = 0i64;
  spatialTree = mapEnts->clientTrigger.spatialTree;
  *(_QWORD *)(_RBP + 40) = end;
  *(_QWORD *)(_RBP + 32) = start;
  *(_QWORD *)(_RBP + 24) = outIntersectPos;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 160), spatialTree, start, end);
  while ( SpatialPartition_Tree_SegmentIterator::Advance((SpatialPartition_Tree_SegmentIterator *)(_RBP + 160)) )
  {
    if ( !*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
      __debugbreak();
    v25 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) + 20i64);
    v26 = *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x168);
    if ( v26 == v25 )
    {
      if ( !*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
        __debugbreak();
      if ( (**(_BYTE **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
        __debugbreak();
      if ( *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) >= **(unsigned __int8 **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
        __debugbreak();
      v27 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) + 4i64 * *(unsigned int *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) + 4);
    }
    else
    {
      if ( v26 >= v25 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
          __debugbreak();
        v26 = *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x168);
      }
      v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) + 8i64) + 4i64 * v26);
    }
    v28 = cm.mapEnts;
    *(_DWORD *)_RBP = v27;
    if ( v27 >= v28->clientTrigger.trigger.count )
    {
      LODWORD(v71) = v28->clientTrigger.trigger.count;
      LODWORD(v70) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3420, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v70, v71) )
        __debugbreak();
      v28 = cm.mapEnts;
    }
    _R14 = v28->clientTrigger.origins;
    _RSI = 3i64 * v27;
    if ( (v28->clientTrigger.triggerType[v27] & (unsigned __int16)v19) != 0 && !g_audioTriggerDisabled[v27] )
    {
      CG_TriggerCalcMovingPlatformPos(v20, v23, v27, (vec3_t *)(_RBP + 64));
      CG_TriggerCalcMovingPlatformPos(v20, v22, v27, (vec3_t *)(_RBP + 96));
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+60h]
        vsubss  xmm1, xmm0, dword ptr [rbp+40h]
        vmovss  xmm2, dword ptr [rbp+64h]
        vsubss  xmm0, xmm2, dword ptr [rbp+44h]
      }
      v35 = cm.mapEnts;
      __asm
      {
        vmovss  dword ptr [rbp+30h], xmm1
        vmovss  xmm1, dword ptr [rbp+68h]
        vsubss  xmm2, xmm1, dword ptr [rbp+48h]
        vmovss  dword ptr [rbp+38h], xmm2
        vmovss  dword ptr [rbp+34h], xmm0
      }
      models = v35->clientTrigger.trigger.models;
      v39 = 0;
      if ( models[v27].hullCount )
      {
        do
        {
          __asm { vmovss  xmm0, dword ptr [r14+rsi*4] }
          v41 = *(const vec3_t **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
          v42 = v39 + models[v27].firstHull;
          fmt = (char *)(_RBP + 4);
          _RDI = (__int64)&v35->clientTrigger.trigger.hulls[v42];
          __asm
          {
            vaddss  xmm5, xmm0, dword ptr [rdi]
            vmovss  xmm1, dword ptr [rdi+4]
            vaddss  xmm6, xmm1, dword ptr [r14+rsi*4+4]
            vmovss  xmm0, dword ptr [rdi+8]
            vaddss  xmm7, xmm0, dword ptr [r14+rsi*4+8]
            vsubss  xmm0, xmm5, dword ptr [rdi+0Ch]
            vsubss  xmm1, xmm6, dword ptr [rdi+10h]
            vmovss  dword ptr [rbp+80h], xmm0
            vsubss  xmm0, xmm7, dword ptr [rdi+14h]
            vmovss  dword ptr [rbp+84h], xmm1
            vaddss  xmm1, xmm5, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rbp+88h], xmm0
            vaddss  xmm0, xmm6, dword ptr [rdi+10h]
            vmovss  dword ptr [rbp+70h], xmm1
            vaddss  xmm1, xmm7, dword ptr [rdi+14h]
            vmovss  dword ptr [rbp+74h], xmm0
            vmovss  dword ptr [rbp+78h], xmm1
          }
          if ( IntersectRayAABB(v41, (const vec3_t *)(_RBP + 48), (const vec3_t *)(_RBP + 128), (const vec3_t *)(_RBP + 112), (float *)fmt) )
          {
            __asm
            {
              vmovss  xmm3, dword ptr [rbp+4]
              vcomiss xmm3, cs:__real@3f800000
            }
          }
          ++v39;
        }
        while ( v39 < models[v27].hullCount );
        v23 = *(const vec3_t **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
      }
      v19 = *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
      v22 = *(const vec3_t **)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
      v20 = *(_DWORD *)(((unsigned __int64)v72 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
    }
  }
  result = 0;
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
CG_DrawFullOcclusionDebug
==============
*/
void CG_DrawFullOcclusionDebug(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v2; 
  int v3; 
  ntl::internal::list_node_base *mp_next; 
  int v5; 
  ntl::internal::list_node_base *v6; 
  const dvar_t *v7; 
  ntl::internal::list_node<FullOcclusionLine> *v8; 
  const vec3_t *v9; 
  MapEnts *mapEnts; 
  unsigned int v11; 
  ClientTriggerModel *models; 
  __int64 firstHull; 
  unsigned __int16 hullCount; 
  unsigned int count; 
  CTAudRvbPanInfo *audioRvbPanInfo; 
  const vec3_t *p_position; 
  __int64 v20; 
  vec3_t origin; 
  vec3_t mins; 
  vec3_t outOffset; 
  vec3_t v41; 
  tmat33_t<vec3_t> axis; 

  v2 = localClientNum;
  v3 = Sys_Milliseconds();
  mp_next = s_fullOcclusionLines.m_listHead.m_sentinel.mp_next;
  v5 = v3;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<FullOcclusionLine> > *)s_fullOcclusionLines.m_listHead.m_sentinel.mp_next != &s_fullOcclusionLines.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v6 = mp_next + 1;
      if ( SLODWORD(mp_next[3].mp_next) >= v5 )
        goto LABEL_37;
      v7 = DCONST_DVARINT_snd_fullOcclusionDebug;
      if ( !DCONST_DVARINT_snd_fullOcclusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_fullOcclusionDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.integer >= 2 )
      {
LABEL_37:
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        v9 = (const vec3_t *)((char *)&v6->mp_next + 4);
        if ( BYTE4(v6[2].mp_prev) )
        {
          CL_AddDebugLine((const vec3_t *)v6, v9, &colorRed, 0, 1, 0);
          CL_AddDebugStar((const vec3_t *)&v6[1].mp_next, &colorYellow, 0, 1, 0);
        }
        else
        {
          CL_AddDebugLine((const vec3_t *)v6, v9, &colorGreen, 0, 1, 0);
        }
      }
      else
      {
        v8 = (ntl::internal::list_node<FullOcclusionLine> *)mp_next;
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        ntl::internal::list_head_base<ntl::internal::list_node<FullOcclusionLine>>::remove(&s_fullOcclusionLines.m_listHead, v8);
        v8->mp_prev = (ntl::internal::list_node_base *)s_fullOcclusionLines.m_freelist.m_head.mp_next;
        s_fullOcclusionLines.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8;
      }
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_fullOcclusionLines.m_listHead );
    v2 = localClientNum;
  }
  mapEnts = cm.mapEnts;
  v11 = 0;
  if ( cm.mapEnts->clientTrigger.trigger.count )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
    {
      _R15 = (__int64)&mapEnts->clientTrigger.origins[v11];
      if ( (mapEnts->clientTrigger.triggerType[v11] & 0x20) != 0 )
      {
        models = mapEnts->clientTrigger.trigger.models;
        firstHull = (int)models[v11].firstHull;
        hullCount = models[v11].hullCount;
        count = mapEnts->clientTrigger.trigger.count;
        if ( count && v11 < count )
        {
          audioRvbPanInfo = mapEnts->clientTrigger.audioRvbPanInfo;
          p_position = &audioRvbPanInfo[v11].position;
          if ( !audioRvbPanInfo[v11].hasCustomPosition )
            p_position = &mapEnts->clientTrigger.origins[v11];
          CG_TriggerTransformPointOnMovingPlatform(v2, v11, p_position, &outOffset, NULL);
          mapEnts = cm.mapEnts;
        }
        v20 = hullCount;
        if ( hullCount )
        {
          _RBP = firstHull;
          do
          {
            _RBX = mapEnts->clientTrigger.trigger.hulls;
            AxisClear(&axis);
            _RDI = &_RBX[_RBP].triggerSpaceBounds.halfSize;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vxorps  xmm1, xmm0, xmm6
              vmovss  dword ptr [rsp+0F8h+mins], xmm1
              vmovss  xmm2, dword ptr [rdi+4]
              vxorps  xmm0, xmm2, xmm6
              vmovss  dword ptr [rsp+0F8h+mins+4], xmm0
              vmovss  xmm1, dword ptr [rdi+8]
              vmovss  xmm0, dword ptr [r15]
              vxorps  xmm2, xmm1, xmm6
              vmovss  dword ptr [rsp+0F8h+mins+8], xmm2
              vaddss  xmm1, xmm0, dword ptr [rbx+rbp]
              vmovss  dword ptr [rsp+0F8h+origin], xmm1
              vmovss  xmm2, dword ptr [rbx+rbp+4]
              vaddss  xmm0, xmm2, dword ptr [r15+4]
              vmovss  dword ptr [rsp+0F8h+origin+4], xmm0
              vmovss  xmm1, dword ptr [rbx+rbp+8]
              vaddss  xmm2, xmm1, dword ptr [r15+8]
              vmovss  dword ptr [rsp+0F8h+origin+8], xmm2
            }
            CG_TriggerTransformPointOnMovingPlatform(v2, v11, &origin, &v41, &axis);
            CL_AddDebugBox(&axis, &v41, &mins, _RDI, &colorYellowHeat, 0, 1, 0);
            mapEnts = cm.mapEnts;
            ++_RBP;
            --v20;
          }
          while ( v20 );
        }
      }
      ++v11;
    }
    while ( v11 < mapEnts->clientTrigger.trigger.count );
    __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
  }
}

/*
==============
CG_DrawTriggerAudioState
==============
*/
void CG_DrawTriggerAudioState(const LocalClientNum_t localClientNum)
{
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  bool v16; 
  __int64 v20; 
  __int64 v21; 
  GfxFont *smallDevFont; 
  const char *v32; 
  __int64 v37; 
  int v38; 
  GfxFont *v39; 
  const char *v40; 
  ZoneDef *zones; 
  const char *stateName; 
  const char *zoneName; 
  const char *v44; 
  GfxFont *v48; 
  const char *v52; 
  __int64 v56; 
  int v57; 
  GfxFont *v62; 
  GfxFont *v64; 
  const char *ambientStream; 
  const char *v66; 
  const char *v67; 
  GfxFont *v71; 
  const char *v75; 
  const char *v76; 
  const char *v77; 
  const char *v78; 
  const char *v79; 
  GfxFont *v87; 
  const char *v91; 
  __int64 v95; 
  __int64 v96; 
  __int64 v99; 
  __int64 v102; 
  GfxFont *v103; 
  ZoneDef *v104; 
  bool v105; 
  __int16 reverbIndex; 
  __int64 v110; 
  const char *v118; 
  GfxFont *v122; 
  ZoneDef *v125; 
  __int64 v126; 
  __int16 v128; 
  const char *v138; 
  const char *reverbName; 
  const char *v155; 
  GfxFont *v159; 
  const char *v163; 
  const char *NameForSubmixHUD; 
  __int64 v170; 
  ZoneDef *v171; 
  const char *v172; 
  __int64 v173; 
  ZoneDef *v174; 
  const char *v175; 
  int v176; 
  int v177; 
  GfxFont *v179; 
  const char *v180; 
  GfxFont *v186; 
  const char *v193; 
  const char *v197; 
  GfxFont *v198; 
  const char *v202; 
  GfxFont *v206; 
  const char *v210; 
  __int64 v215; 
  int v217; 
  GfxFont *v220; 
  __int64 v221; 
  ZoneDef *v222; 
  const char *v223; 
  GfxFont *v227; 
  __int64 v230; 
  ZoneDef *v232; 
  const char *v233; 
  const char *v240; 
  GfxFont *v244; 
  const char *v248; 
  GfxFont *v253; 
  const char *v254; 
  int v258; 
  __int64 v261; 
  GfxFont *v264; 
  __int64 v265; 
  __int64 v266; 
  ZoneDef *v267; 
  const char *v268; 
  GfxFont *v272; 
  __int64 v275; 
  ZoneDef *v277; 
  const char *v278; 
  const char *v279; 
  GfxFont *v287; 
  const char *v291; 
  __int64 v295; 
  int v296; 
  __int64 v299; 
  GfxFont *v302; 
  __int64 v303; 
  __int64 v304; 
  ZoneDef *v305; 
  const char *v306; 
  GfxFont *v310; 
  __int64 v313; 
  ZoneDef *v315; 
  const char *v316; 
  ZoneDef *v323; 
  const char *v324; 
  GfxFont *v328; 
  const char *v332; 
  GfxFont *v337; 
  const char *v338; 
  __int64 v344; 
  int PlayerADSRSettingIndex; 
  GfxFont *v348; 
  const char *v349; 
  GfxFont *v353; 
  const char *v357; 
  GfxFont *v361; 
  const char *v365; 
  unsigned int v369; 
  unsigned int v370; 
  GfxFont *v376; 
  __int16 ambientDefIndex; 
  AmbientDef *ambientDefs; 
  __int64 v379; 
  const char *v380; 
  int v387; 
  __int64 v388; 
  const SoundTable *v389; 
  AmbientEvent *ambientEvents; 
  unsigned int ambientElementsCount; 
  __int64 ambientElementIndex; 
  GfxFont *v395; 
  const char *v401; 
  GfxFont *v409; 
  const char *v420; 
  GfxFont *v425; 
  const char *v426; 
  GfxFont *v430; 
  const char *v434; 
  const char *v442; 
  int v447; 
  unsigned int weapReflId; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  GfxFont *v450; 
  int v451; 
  const char *v452; 
  GfxFont *v456; 
  const char *v460; 
  GfxFont *v464; 
  const char *v468; 
  BOOL v473; 
  int v477; 
  GfxFont *v480; 
  const char *v482; 
  const char *v490; 
  GfxFont *v494; 
  const char *v498; 
  GfxFont *v502; 
  const char *v506; 
  int v513; 
  GfxFont *v514; 
  const char *v515; 
  GfxFont *v519; 
  const char *v523; 
  GfxFont *v527; 
  const char *v531; 
  int v538; 
  GfxFont *v539; 
  const char *v540; 
  MapEnts *mapEnts; 
  unsigned int v545; 
  __int64 v551; 
  unsigned __int16 v552; 
  ClientTriggerModel *models; 
  __int64 firstHull; 
  unsigned __int16 hullCount; 
  char v568; 
  vec4_t *v571; 
  int v573; 
  int v574; 
  int v575; 
  int v576; 
  int v577; 
  vec4_t *v578; 
  const vec4_t *v579; 
  vec4_t *v580; 
  const char *v581; 
  vec4_t *v583; 
  vec4_t *v584; 
  __int64 v585; 
  const dvar_t *v586; 
  const char *v587; 
  __int64 v591; 
  const dvar_t *v592; 
  const char *v593; 
  const char *v594; 
  const dvar_t *v598; 
  const dvar_t *v602; 
  MapEnts *v605; 
  const vec3_t *p_pointA; 
  SndBankTransient *v608; 
  const dvar_t *v609; 
  const char *v610; 
  const dvar_t *v614; 
  const dvar_t *v618; 
  const dvar_t *v637; 
  GfxFont *v649; 
  const char *v650; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  char *fmtg; 
  float fmth; 
  char *fmti; 
  float fmtj; 
  char *fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  char *fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  float fmtt; 
  float fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  float fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  float fmtbf; 
  float fmtbg; 
  float fmtbh; 
  float fmtbi; 
  float fmtbj; 
  float fmtbk; 
  char *fmtbl; 
  float fmtbm; 
  float fmtbn; 
  float fmtbo; 
  float fmtbp; 
  float fmtbq; 
  float fmtbr; 
  float fmtbs; 
  float fmtbt; 
  float fmtbu; 
  float fmtbv; 
  float fmtbw; 
  float fmtbx; 
  float fmtby; 
  float fmtbz; 
  float fmtca; 
  float fmtcb; 
  char *s; 
  char *sa; 
  char *sb; 
  char *sc; 
  vec4_t *color; 
  GfxFont *font; 
  unsigned int zoneB; 
  LocalClientNum_t localClientNuma; 
  int v717; 
  int v718; 
  unsigned int zoneA[2]; 
  vec4_t *v720; 
  float lerpB[4]; 
  __int64 origins; 
  vec4_t overriddenColor; 
  vec3_t outCenter; 
  vec3_t mins; 
  vec3_t origin; 
  vec3_t outOffset; 
  vec3_t point; 
  vec3_t v729; 
  tmat33_t<vec3_t> axis; 
  Weapon weapon; 
  char v736; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v12 = g_lastAudioZoneIndexA;
  v13 = g_lastAudioZoneIndexB;
  v14 = localClientNum;
  localClientNuma = localClientNum;
  v718 = g_lastAudioZoneIndexA;
  v717 = g_lastAudioZoneIndexB;
  __asm { vmovss  xmm10, cs:g_lastAudioLerpVal }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      _R14 = &scrPlaceViewDisplay[localClientNum];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v16 )
      __debugbreak();
  }
  _R14 = &scrPlaceFull;
LABEL_8:
  __asm
  {
    vmovss  xmm8, dword ptr [r14+28h]
    vmovss  xmm6, dword ptr [r14+2Ch]
  }
  v20 = 236 * v14;
  v21 = v14;
  origins = 236 * v14;
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v14);
  if ( !CgWeaponMap::ms_instance[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  _RAX = BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v21], &_RBX->predictedPlayerState);
  __asm
  {
    vmovss  xmm7, cs:__real@3f0ccccd
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+130h+weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+130h+weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+130h+weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+69A4h]
    vmovss  xmm14, dword ptr [rbx+699Ch]
    vmovss  xmm15, dword ptr [rbx+69A0h]
    vmovss  [rsp+230h+var_1B8], xmm0
  }
  if ( !g_audioTriggersFound )
  {
    smallDevFont = cls.smallDevFont;
    v32 = j_va("No audio client triggers in level.");
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v32, &colorGreen, 5, smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  if ( (_DWORD)v12 == 0x7FFFFFFF )
  {
    if ( (_DWORD)v13 == 0x7FFFFFFF )
    {
      v717 = SND_LookupZoneIndex(0x4000);
      LODWORD(v13) = v717;
      v718 = v717;
      LODWORD(v12) = v717;
      if ( v717 != 0x7FFFFFFF )
        goto LABEL_16;
    }
LABEL_264:
    v649 = cls.smallDevFont;
    v650 = j_va("Error loading audio zones");
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcb, v650, &colorGreen, 5, v649);
    goto LABEL_263;
  }
  if ( (_DWORD)v13 == 0x7FFFFFFF )
    goto LABEL_264;
  if ( (_DWORD)v12 == (_DWORD)v13 )
  {
LABEL_16:
    v37 = (int)v12;
    v38 = SND_LookupZoneIndex(0x4000);
    v39 = cls.smallDevFont;
    v40 = "Zone: %s (Default) State: %s";
    zones = s_soundTablePtr->zones;
    stateName = zones[v37].stateName;
    zoneName = zones[v37].zoneName;
    if ( (_DWORD)v12 != v38 )
      v40 = "Zone: %s State: %s";
    v44 = j_va(v40, zoneName, stateName);
    font = v39;
    goto LABEL_19;
  }
  __asm { vmulss  xmm0, xmm10, cs:__real@42c80000 }
  v62 = cls.smallDevFont;
  __asm { vcvttss2si eax, xmm0 }
  LODWORD(s) = _EAX;
  v44 = j_va("Zone: %s State: %s => Zone: %s State: %s %d%%", s_soundTablePtr->zones[v12].zoneName, s_soundTablePtr->zones[v12].stateName, s_soundTablePtr->zones[v13].zoneName, s_soundTablePtr->zones[v13].stateName, s);
  font = v62;
LABEL_19:
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v44, &colorGreen, 5, font);
  v48 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
    vmovaps xmmword ptr [rsp+230h+var_68+8], xmm9
  }
  v52 = j_va("  Ambient Track:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v52, &colorLtBlue, 5, v48);
  v56 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneA + v20);
  v57 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneB + v20);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  if ( (_DWORD)v12 == (_DWORD)v56 && (_DWORD)v13 == v57 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v64 = cls.smallDevFont;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  ambientStream = s_soundTablePtr->zones[v56].ambientStream;
  if ( (_DWORD)v56 == v57 )
  {
    if ( ambientStream )
    {
      v78 = "Default";
      if ( *ambientStream )
        v78 = s_soundTablePtr->zones[v56].ambientStream;
      v79 = j_va("    %s", v78);
    }
    else
    {
      v79 = j_va("    <None>");
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v79, &overriddenColor, 5, v64);
    v71 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
    v77 = j_va((const char *)&queryFormat.fmt + 3);
  }
  else
  {
    if ( ambientStream )
    {
      v66 = "Default =>";
      if ( *ambientStream )
        v66 = s_soundTablePtr->zones[v56].ambientStream;
      v67 = j_va("    %s =>", v66);
    }
    else
    {
      v67 = j_va("    <None> =>");
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v67, &overriddenColor, 5, v64);
    v71 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
    v75 = s_soundTablePtr->zones[*(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneB + v20)].ambientStream;
    if ( v75 )
    {
      v76 = "Default";
      if ( *v75 )
        v76 = s_soundTablePtr->zones[*(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneB + v20)].ambientStream;
      v77 = j_va("    %s", v76);
    }
    else
    {
      v77 = j_va("    <None>");
    }
  }
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v77, &overriddenColor, 5, v71);
  v87 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  v91 = j_va("  Reverb:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v91, &colorLtBlue, 5, v87);
  v96 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneB + v20);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v99 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneA + v20);
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == (_DWORD)v99 && (_DWORD)v13 == (_DWORD)v96 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v102 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneA + v20);
  v103 = cls.smallDevFont;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  v104 = s_soundTablePtr->zones;
  v105 = (_DWORD)v99 == (_DWORD)v96;
  reverbIndex = v104[v99].reverbIndex;
  if ( v105 )
  {
    if ( reverbIndex == -1 )
    {
      v155 = j_va("    <None - engine default>", v96, v95, v102);
    }
    else
    {
      _RCX = s_soundTablePtr->reverbs;
      _R8 = reverbIndex;
      __asm
      {
        vmovss  xmm0, dword ptr [r8+rcx+50h]
        vmovss  xmm3, dword ptr [r8+rcx+48h]
        vmovss  xmm2, dword ptr [r8+rcx+4Ch]
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm1
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
      }
      LODWORD(sa) = _EAX;
      reverbName = v104[v102].reverbName;
      __asm
      {
        vmovq   r9, xmm3
        vmovsd  [rsp+230h+fmt], xmm2
      }
      v155 = j_va("    %s: (RoomType: %s, Dry: %f, Wet: %f, Fade: %d)", reverbName, _RCX[_R8].roomType, _R9, fmtk, sa);
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, v155, &overriddenColor, 5, v103);
    v159 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
    v163 = j_va((const char *)&queryFormat.fmt + 3);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, v163, &overriddenColor, 5, v159);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
  }
  else
  {
    __asm { vmovss  xmm9, cs:__real@447a0000 }
    if ( reverbIndex == -1 )
    {
      v118 = j_va("    <None - engine default> =>", v96, v95, v102);
    }
    else
    {
      _RCX = s_soundTablePtr->reverbs;
      _R8 = reverbIndex;
      v110 = v102;
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [r8+rcx+50h]
        vmovss  xmm3, dword ptr [r8+rcx+48h]
        vmovss  xmm2, dword ptr [r8+rcx+4Ch]
        vcvttss2si eax, xmm1
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
      }
      LODWORD(sa) = _EAX;
      __asm
      {
        vmovq   r9, xmm3
        vmovsd  [rsp+230h+fmt], xmm2
      }
      v118 = j_va("    %s: (RoomType: %s, Dry: %f, Wet: %f, Fade: %d) =>", v104[v110].reverbName, _RCX[_R8].roomType, _R9, fmtg, sa);
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, v118, &overriddenColor, 5, v103);
    v122 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    v125 = s_soundTablePtr->zones;
    v126 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneB + v20);
    __asm { vaddss  xmm6, xmm0, xmm6 }
    v128 = v125[v126].reverbIndex;
    if ( v128 == -1 )
    {
      v138 = j_va("    <None - engine default>");
    }
    else
    {
      _RCX = s_soundTablePtr->reverbs;
      _RDX = v128;
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rdx+rcx+50h]
        vmovss  xmm3, dword ptr [rdx+rcx+48h]
        vmovss  xmm2, dword ptr [rdx+rcx+4Ch]
        vcvttss2si eax, xmm1
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
      }
      LODWORD(sb) = _EAX;
      __asm
      {
        vmovq   r9, xmm3
        vmovsd  [rsp+230h+fmt], xmm2
      }
      v138 = j_va("    %s: (RoomType: %s, Dry: %f, Wet: %f, Fade: %d)", v125[v126].reverbName, _RCX[_RDX].roomType, _R9, fmti, sb);
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, v138, &overriddenColor, 5, v122);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  SND_SubmixDebugGetZones(&zoneA[1], (float *)zoneA, &zoneB, lerpB);
  *(_QWORD *)origin.v = SND_DebugGetNameForSubmixHUD(zoneA[1], 0);
  NameForSubmixHUD = SND_DebugGetNameForSubmixHUD(zoneB, 0);
  v170 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneA + v20);
  v171 = s_soundTablePtr->zones;
  *(_QWORD *)mins.v = NameForSubmixHUD;
  v172 = SND_DebugGetNameForSubmixHUD(v171[v170].duck, 0);
  v173 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v20);
  v174 = s_soundTablePtr->zones;
  v720 = (vec4_t *)v172;
  v175 = SND_DebugGetNameForSubmixHUD(v174[v173].duck, 0);
  v176 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v20);
  v177 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneA + v20);
  *(_QWORD *)outCenter.v = v175;
  if ( (_DWORD)v12 == v177 && (_DWORD)v13 == v176 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v179 = cls.smallDevFont;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  v180 = j_va("  Submix:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, v180, &colorLtBlue, 5, v179);
  __asm
  {
    vmovss  xmm2, [rsp+230h+zoneA]
    vmovss  xmm1, [rsp+230h+lerpB]
  }
  v186 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtsi2ss xmm0, xmm0, eax
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   r8, xmm2
    vmovsd  [rsp+230h+fmt], xmm1
    vaddss  xmm6, xmm6, xmm0
  }
  v193 = j_va("    Have: %s (%.2f) <=> %s (%.2f)", *(_QWORD *)origin.v, _R8, *(_QWORD *)mins.v, fmto);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, v193, &overriddenColor, 5, v186);
  v197 = (char *)&queryFormat.fmt + 3;
  v198 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  if ( v177 != v176 )
    v197 = "(blending)";
  __asm { vaddss  xmm6, xmm6, xmm0 }
  v202 = j_va("     Zone: %s <=> %s %s", v720, *(_QWORD *)outCenter.v, v197);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtq, v202, &overriddenColor, 5, v198);
  v206 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v210 = j_va("  Mix:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtr, v210, &colorLtBlue, 5, v206);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v215 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneA + v20);
  __asm { vcvtsi2ss xmm0, xmm0, eax }
  v217 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v20);
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == (_DWORD)v215 && (_DWORD)v13 == v217 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v220 = cls.smallDevFont;
  v221 = v215;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  v222 = s_soundTablePtr->zones;
  if ( (_DWORD)v215 == v217 )
  {
    if ( v222[v221].startMixIndex == -1 )
      v240 = j_va("    <None - Defaults in .SVMOD>");
    else
      v240 = j_va("    %s", v222[v215].mixName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtu, v240, &overriddenColor, 5, v220);
    v244 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
    v248 = j_va((const char *)&queryFormat.fmt + 3);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtv, v248, &overriddenColor, 5, v244);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
  }
  else
  {
    if ( v222[v221].startMixIndex == -1 )
      v223 = j_va("    <None - Defaults in .SVMOD> =>");
    else
      v223 = j_va("    %s =>", v222[v215].mixName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmts, v223, &overriddenColor, 5, v220);
    v227 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    v230 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v20);
    __asm { vaddss  xmm6, xmm0, xmm6 }
    v232 = s_soundTablePtr->zones;
    if ( v232[v230].startMixIndex == -1 )
      v233 = j_va("    <None - Defaults in .SVMOD>");
    else
      v233 = j_va("    %s", v232[v230].mixName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtt, v233, &overriddenColor, 5, v227);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  v253 = cls.smallDevFont;
  v254 = j_va("  Filter:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtw, v254, &colorLtBlue, 5, v253);
  v258 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneB + v20);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v261 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneA + v20);
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == (_DWORD)v261 && (_DWORD)v13 == v258 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v264 = cls.smallDevFont;
  v265 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneA + v20);
  v266 = v261;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  v267 = s_soundTablePtr->zones;
  if ( (_DWORD)v261 == v258 )
  {
    if ( v267[v266].startFilterIndex == -1 )
      v279 = j_va("    <None>");
    else
      v279 = j_va("    %s", v267[v265].filterName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmty, v279, &overriddenColor, 5, v264);
    v272 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
    v278 = j_va((const char *)&queryFormat.fmt + 3);
  }
  else
  {
    if ( v267[v266].startFilterIndex == -1 )
      v268 = j_va("    <None> =>");
    else
      v268 = j_va("    %s =>", v267[v265].filterName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtx, v268, &overriddenColor, 5, v264);
    v272 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    v275 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneB + v20);
    __asm { vaddss  xmm6, xmm0, xmm6 }
    v277 = s_soundTablePtr->zones;
    if ( v277[v275].startFilterIndex == -1 )
      v278 = j_va("    <None>");
    else
      v278 = j_va("    %s", v277[v275].filterName);
  }
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtz, v278, &overriddenColor, 5, v272);
  v287 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  v291 = j_va("  Occlusion:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtba, v291, &colorLtBlue, 5, v287);
  v296 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneB + v20);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v299 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneA + v20);
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == (_DWORD)v299 && (_DWORD)v13 == v296 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v302 = cls.smallDevFont;
  v303 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneA + v20);
  v304 = v299;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  if ( (_DWORD)v299 == v296 )
  {
    v323 = s_soundTablePtr->zones;
    if ( v323[v304].startOcclusionIndex == -1 )
      v324 = j_va("    <None>", v295, v303);
    else
      v324 = j_va("    %s", v323[v303].occlusionName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbd, v324, &overriddenColor, 5, v302);
    v328 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
    v332 = j_va((const char *)&queryFormat.fmt + 3);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbe, v332, &overriddenColor, 5, v328);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm0, xmm6
    }
  }
  else
  {
    v305 = s_soundTablePtr->zones;
    if ( v305[v304].startOcclusionIndex == -1 )
      v306 = j_va("    <None> =>", v295, v303);
    else
      v306 = j_va("    %s =>", v305[v303].occlusionName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbb, v306, &overriddenColor, 5, v302);
    v310 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    v313 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneB + v20);
    __asm { vaddss  xmm6, xmm0, xmm6 }
    v315 = s_soundTablePtr->zones;
    if ( v315[v313].startOcclusionIndex == -1 )
      v316 = j_va("    <None>");
    else
      v316 = j_va("    %s", v315[v313].occlusionName);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbc, v316, &overriddenColor, 5, v310);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  v337 = cls.smallDevFont;
  v338 = j_va("  ADSR:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbf, v338, &colorLtBlue, 5, v337);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v344 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerAdsrZone + v20);
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == (_DWORD)v344 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  if ( s_soundTablePtr->zones[v344].startAdsrZoneIndex == -1 )
  {
    v348 = cls.smallDevFont;
    v349 = j_va("    <None>");
  }
  else
  {
    PlayerADSRSettingIndex = CG_GetPlayerADSRSettingIndex(localClientNuma, &weapon);
    v348 = cls.smallDevFont;
    if ( PlayerADSRSettingIndex == -1 )
      v349 = j_va("    %s", "<None>");
    else
      v349 = j_va("    %s", s_soundTablePtr->adsrSettings[PlayerADSRSettingIndex].name);
  }
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbg, v349, &overriddenColor, 5, v348);
  v353 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  v357 = j_va((const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbh, v357, &overriddenColor, 5, v353);
  v361 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  v365 = j_va("  Ambient Events:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbi, v365, &colorLtBlue, 5, v361);
  v369 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientEventZoneA + v20);
  v370 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientEventZoneB + v20);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  zoneB = v369 != v370;
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == v369 && (_DWORD)v13 == v370 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  __asm
  {
    vmovss  xmm9, cs:__real@3f000000
    vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0
  }
  if ( v369 != v370 )
  {
    __asm { vcomiss xmm10, xmm9 }
    if ( v369 > v370 )
      v369 = v370;
  }
  v376 = cls.smallDevFont;
  ambientDefIndex = s_soundTablePtr->zones[v369].ambientDefIndex;
  if ( ambientDefIndex == -1 )
  {
    v442 = j_va((const char *)&queryFormat.fmt + 3);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbp, v442, &overriddenColor, 5, v376);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  else
  {
    ambientDefs = s_soundTablePtr->ambientDefs;
    *(_QWORD *)outCenter.v = ambientDefs;
    v379 = ambientDefIndex;
    v380 = j_va("    %s (Count: %d):", ambientDefs[ambientDefIndex].name, ambientDefs[ambientDefIndex].numEvents);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbj, v380, &overriddenColor, 5, v376);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    if ( ambientDefs[v379].numEvents )
    {
      v387 = 0;
      v388 = v379 * 3;
      do
      {
        v389 = s_soundTablePtr;
        ambientEvents = s_soundTablePtr->ambientEvents;
        ambientElementsCount = s_soundTablePtr->ambientElementsCount;
        _R13 = v387 + *(&ambientDefs->ambientEventIndex + 4 * v388);
        v720 = (vec4_t *)ambientEvents;
        if ( ambientEvents[_R13].ambientElementIndex >= ambientElementsCount )
        {
          LODWORD(color) = ambientElementsCount;
          LODWORD(sc) = ambientEvents[_R13].ambientElementIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1711, ASSERT_TYPE_ASSERT, "(unsigned)( event->ambientElementIndex ) < (unsigned)( s_soundTablePtr->ambientElementsCount )", "event->ambientElementIndex doesn't index s_soundTablePtr->ambientElementsCount\n\t%i not in [0, %i)", sc, color) )
            __debugbreak();
          v389 = s_soundTablePtr;
        }
        ambientElementIndex = ambientEvents[_R13].ambientElementIndex;
        _RDI = v389->ambientElements;
        v395 = cls.smallDevFont;
        _RSI = ambientElementIndex;
        _RAX = (__int64)v720;
        __asm
        {
          vmovss  xmm2, dword ptr [rax+r13*4+8]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        v401 = j_va("      %s (Weight: %.2f):", _RDI[_RSI].aliasName, _R8);
        __asm
        {
          vmovaps xmm3, xmm7; xScale
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm8; x
          vmovss  dword ptr [rsp+230h+fmt], xmm7
        }
        CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbk, v401, &colorLtCyan, 5, v395);
        __asm
        {
          vmovss  xmm3, dword ptr [rdi+rsi*8+18h]
          vmovss  xmm2, dword ptr [rdi+rsi*8+24h]
          vmovss  xmm1, dword ptr [rdi+rsi*8+20h]
          vmovss  xmm4, dword ptr [rdi+rsi*8+1Ch]
        }
        v409 = cls.smallDevFont;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtsi2ss xmm0, xmm0, eax
          vcvtss2sd xmm4, xmm4, xmm4
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovq   rdx, xmm1
          vmovsd  [rsp+230h+fmt], xmm4
          vaddss  xmm6, xmm6, xmm0
        }
        v420 = j_va("        (ConeMin: %.1f, ConeMax: %.1f, RangeMin: %.1f, RangeMax: %.1f)", _RDX, _R8, _R9, fmtbl);
        __asm
        {
          vmovaps xmm3, xmm7; xScale
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm8; x
          vmovss  dword ptr [rsp+230h+fmt], xmm7
        }
        CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbm, v420, &colorLtCyan, 5, v409);
        ambientDefs = *(AmbientDef **)outCenter.v;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
        }
        ++v387;
        __asm { vaddss  xmm6, xmm6, xmm0 }
      }
      while ( v387 < *(unsigned __int16 *)(*(_QWORD *)outCenter.v + 8 * v388 + 14) );
      v20 = origins;
      LODWORD(v13) = v717;
      LODWORD(v12) = v718;
    }
  }
  v425 = cls.smallDevFont;
  v426 = j_va((const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbn, v426, &overriddenColor, 5, v425);
  v430 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v434 = j_va("  Weapon Refl:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbo, v434, &colorLtBlue, 5, v430);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  if ( (_DWORD)v12 == *(unsigned int *)((char *)&s_audioZoneStates[0].ctWeapReflZoneA + v20) && (_DWORD)v13 == *(unsigned int *)((char *)&s_audioZoneStates[0].ctWeapReflZoneB + v20) )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v447 = g_audTrigWeapReflZoneA;
  __asm { vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0 }
  if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB )
  {
    __asm
    {
      vmovss  xmm0, cs:g_lastAudioLerpVal
      vcomiss xmm0, xmm9
    }
    if ( g_audTrigWeapReflZoneA > (unsigned int)g_audTrigWeapReflZoneB )
      v447 = g_audTrigWeapReflZoneB;
  }
  if ( !s_soundTablePtr || v447 == 0x7FFFFFFF )
    weapReflId = 0;
  else
    weapReflId = s_soundTablePtr->zones[v447].weapReflId;
  WeapReflDefWithClass = SND_FindWeapReflDefWithClass(weapReflId, 0);
  v450 = cls.smallDevFont;
  if ( WeapReflDefWithClass )
  {
    v451 = g_audTrigWeapReflZoneA;
    if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB )
    {
      __asm
      {
        vmovss  xmm0, cs:g_lastAudioLerpVal
        vcomiss xmm0, xmm9
      }
      if ( g_audTrigWeapReflZoneA > (unsigned int)g_audTrigWeapReflZoneB )
        v451 = g_audTrigWeapReflZoneB;
    }
    if ( !s_soundTablePtr || v451 == 0x7FFFFFFF )
      v452 = j_va("    %s", (const char *)&queryFormat.fmt + 3);
    else
      v452 = j_va("    %s", s_soundTablePtr->zones[v451].weapReflName);
  }
  else
  {
    v452 = j_va("    <None>");
  }
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbq, v452, &overriddenColor, 5, v450);
  v456 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  v460 = j_va((const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbr, v460, &overriddenColor, 5, v456);
  v464 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm0, xmm6
  }
  v468 = j_va("  Contexts:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbs, v468, &colorLtBlue, 5, v464);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v473 = g_lastAudioZoneIndexA != g_lastAudioZoneIndexB;
  __asm { vcvtsi2ss xmm0, xmm0, eax }
  zoneB = v473;
  __asm { vaddss  xmm6, xmm6, xmm0 }
  if ( (_DWORD)v12 == g_lastAudioZoneIndexA && (_DWORD)v13 == g_lastAudioZoneIndexB )
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
  v477 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctContextsZoneA + v20);
  __asm
  {
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovups xmmword ptr [rbp+130h+overriddenColor], xmm0
  }
  *(float *)&_XMM0 = DrawContexts(v477, *(float *)&_XMM1, *(float *)&_XMM2, &overriddenColor, _R14);
  v105 = !v473;
  v480 = cls.smallDevFont;
  __asm { vaddss  xmm6, xmm0, xmm6 }
  if ( !v105 )
  {
    v482 = j_va("    =>");
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+230h+fmt], xmm7
    }
    CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbt, v482, &overriddenColor, 5, v480);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
    }
    *(float *)&_XMM0 = DrawContexts(*(unsigned int *)((char *)&s_audioZoneStates[0].ctContextsZoneB + v20), *(float *)&_XMM1, *(float *)&_XMM2, &overriddenColor, _R14);
    v480 = cls.smallDevFont;
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  v490 = j_va((const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbu, v490, &overriddenColor, 5, v480);
  v494 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v498 = j_va((const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbv, v498, &overriddenColor, 5, v494);
  v502 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v506 = j_va("  Disable Full Occlusion:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbw, v506, &colorLtBlue, 5, v502);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  GetAudioZoneDebugProps(v12, v13, *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneA + v20), *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneB + v20), &overriddenColor, (int *)&zoneB);
  if ( zoneB )
  {
    __asm { vcomiss xmm10, xmm9 }
    v513 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneB + v20);
  }
  else
  {
    v513 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneA + v20);
  }
  v514 = cls.smallDevFont;
  v515 = j_va("    %s", s_soundTablePtr->zones[v513].fullOccName);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbx, v515, &overriddenColor, 5, v514);
  v519 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v523 = j_va((const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtby, v523, &overriddenColor, 5, v519);
  v527 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v531 = j_va("  Player Breath:");
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbz, v531, &colorLtBlue, 5, v527);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  GetAudioZoneDebugProps(v12, v13, *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneA + v20), *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneB + v20), &overriddenColor, (int *)&zoneB);
  if ( zoneB )
  {
    __asm { vcomiss xmm10, xmm9 }
    v538 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneB + v20);
  }
  else
  {
    v538 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneA + v20);
  }
  v539 = cls.smallDevFont;
  v540 = j_va("    %s", s_soundTablePtr->zones[v538].playerBreathStateName);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  CG_DrawDevString(_R14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtca, v540, &overriddenColor, 5, v539);
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_drawDebugAudioClientTriggers, "cg_drawDebugAudioClientTriggers") > 1 )
  {
    mapEnts = cm.mapEnts;
    v545 = 0;
    zoneB = 0;
    if ( cm.mapEnts->clientTrigger.trigger.count )
    {
      __asm
      {
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm10, cs:__real@3d4ccccd
        vmovaps xmmword ptr [rsp+230h+var_88+8], xmm11
        vmovss  xmm11, cs:__real@3ae56042
        vmovaps [rsp+230h+var_98+8], xmm12
        vmovss  xmm12, cs:__real@41400000
        vmovaps [rsp+230h+var_A8+8], xmm13
        vmovss  xmm13, cs:__real@41200000
      }
      do
      {
        v551 = v545;
        v552 = mapEnts->clientTrigger.triggerType[v545];
        origins = (__int64)mapEnts->clientTrigger.origins;
        if ( (v552 & 0x206A) != 0 )
        {
          models = mapEnts->clientTrigger.trigger.models;
          firstHull = (int)models[v545].firstHull;
          hullCount = models[v545].hullCount;
          CG_GetTriggerCenter(localClientNuma, v545, &outCenter);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+130h+outCenter]
            vmovss  xmm1, dword ptr [rbp+130h+outCenter+4]
            vsubss  xmm3, xmm0, xmm14
            vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
            vsubss  xmm4, xmm0, [rsp+230h+var_1B8]
            vsubss  xmm2, xmm1, xmm15
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm6, xmm2, xmm2
            vcomiss xmm6, xmm13
          }
          if ( v568 )
            __asm { vmovaps xmm7, xmm10 }
          else
            __asm { vmulss  xmm7, xmm6, xmm11 }
          __asm { vmulss  xmm8, xmm7, xmm12 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_dbgClientTriggerDist, "cg_dbgClientTriggerDist");
          __asm { vcomiss xmm6, xmm0 }
          if ( v568 | v105 )
          {
            *(_QWORD *)lerpB = hullCount;
            if ( hullCount )
            {
              v571 = &colorGreen;
              if ( (v552 & 2) == 0 )
                v571 = &colorWhite;
              _R15 = firstHull;
              v720 = v571;
              v573 = v552 & 0x40;
              v574 = v552 & 0x20;
              v575 = v552 & 8;
              zoneA[0] = v573;
              v576 = v552 & 0x2000;
              v718 = v574;
              v577 = v552 & 1;
              v717 = v575;
              zoneA[1] = v576;
              do
              {
                v578 = &colorYellow;
                v105 = v575 == 0;
                v579 = &colorRed;
                v580 = &colorMagenta;
                v581 = NULL;
                if ( v105 )
                  v578 = v571;
                _R12 = cm.mapEnts->clientTrigger.trigger.hulls;
                if ( !v573 )
                  v580 = v578;
                v583 = &colorLtBlue;
                if ( !v574 )
                  v583 = v580;
                v584 = &colorBlue;
                if ( !v576 )
                  v584 = v583;
                if ( !v577 )
                  v579 = v584;
                v585 = cm.mapEnts->clientTrigger.audioTriggers[v551];
                if ( (int)v585 > -1 )
                  v581 = &cm.mapEnts->clientTrigger.triggerString[v585];
                CL_AddDebugStar(&outCenter, v579, 0, 1, 0);
                v586 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v586);
                if ( v586->current.integer > 2 && v581 )
                {
                  v587 = j_va("Zone: %s", v581);
                  __asm { vmovaps xmm2, xmm7; scale }
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, v587, 0, 1);
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
                  vsubss  xmm1, xmm0, xmm8
                  vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                }
                v591 = cm.mapEnts->clientTrigger.audioStateIds[v551];
                if ( (_DWORD)v591 != -1 )
                {
                  v592 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                  v593 = &cm.mapEnts->clientTrigger.triggerString[v591];
                  if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v592);
                  if ( v592->current.integer > 2 && v593 )
                  {
                    v594 = j_va("State Id: %s: %x", v593, s_triggerStateTo[v551]);
                    __asm { vmovaps xmm2, xmm7; scale }
                    CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, v594, 0, 1);
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
                    vsubss  xmm1, xmm0, xmm8
                    vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                  }
                }
                if ( v718 )
                {
                  v598 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                  if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v598);
                  if ( v598->current.integer > 2 )
                  {
                    __asm { vmovaps xmm2, xmm7; scale }
                    CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, "Occluder", 0, 1);
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
                    vsubss  xmm1, xmm0, xmm8
                    vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                  }
                }
                if ( v717 )
                {
                  v602 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                  if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v602);
                  if ( v602->current.integer > 2 )
                  {
                    __asm { vmovaps xmm2, xmm7; scale }
                    CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, "Blend", 0, 1);
                  }
                  __asm { vmovss  xmm0, dword ptr [rbp+130h+outCenter+8] }
                  v605 = cm.mapEnts;
                  __asm
                  {
                    vsubss  xmm1, xmm0, xmm8
                    vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                  }
                  if ( cm.mapEnts->clientTrigger.blendLookup[v551] == -1 )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1893, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientTrigger.blendLookup[trigIndex] != -1)", (const char *)&queryFormat, "cm.mapEnts->clientTrigger.blendLookup[trigIndex] != -1") )
                      __debugbreak();
                    v605 = cm.mapEnts;
                  }
                  p_pointA = &v605->clientTriggerBlend.blendNodes[v605->clientTrigger.blendLookup[v551]].pointA;
                  if ( !p_pointA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1896, ASSERT_TYPE_ASSERT, "(blend)", (const char *)&queryFormat, "blend") )
                    __debugbreak();
                  CG_TriggerTransformPointOnMovingPlatform(localClientNuma, zoneB, p_pointA, &outOffset, NULL);
                  CG_TriggerTransformPointOnMovingPlatform(localClientNuma, zoneB, p_pointA + 1, &point, NULL);
                  CL_AddDebugStar(&outOffset, v579, 0, 1, 0);
                  CL_AddDebugStar(&point, v579, 0, 1, 0);
                }
                if ( zoneA[1] )
                {
                  v608 = cm.mapEnts->clientTrigger.detailSoundBank[v551];
                  if ( !v608 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1908, ASSERT_TYPE_ASSERT, "(detailSoundBank)", (const char *)&queryFormat, "detailSoundBank") )
                    __debugbreak();
                  v609 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                  if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v609);
                  if ( v609->current.integer > 2 )
                  {
                    v610 = j_va("SoundBank: %s", v608->bank.name);
                    __asm { vmovaps xmm2, xmm7; scale }
                    CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, v610, 0, 1);
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
                    vsubss  xmm1, xmm0, xmm8
                    vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                  }
                }
                if ( v577 )
                {
                  v614 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                  if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v614);
                  if ( v614->current.integer > 2 )
                  {
                    __asm { vmovaps xmm2, xmm7; scale }
                    CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, "Trigger shared with visionset", 0, 1);
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
                    vsubss  xmm1, xmm0, xmm8
                    vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                  }
                }
                if ( g_audioTriggerDisabled[v551] )
                {
                  v618 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                  if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v618);
                  if ( v618->current.integer > 2 )
                  {
                    __asm { vmovaps xmm2, xmm7; scale }
                    CL_AddDebugString(&outCenter, &colorWhiteFaded, *(float *)&_XMM2, "Disabled", 0, 1);
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+130h+outCenter+8]
                    vsubss  xmm1, xmm0, xmm8
                    vmovss  dword ptr [rbp+130h+outCenter+8], xmm1
                  }
                }
                AxisClear(&axis);
                _RCX = origins;
                _RAX = 3 * v551;
                _RBX = (__int64)&_R12[_R15].triggerSpaceBounds.halfSize;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx]
                  vxorps  xmm1, xmm0, xmm9
                  vmovss  dword ptr [rbp+130h+mins], xmm1
                  vmovss  xmm2, dword ptr [rbx+4]
                  vxorps  xmm0, xmm2, xmm9
                  vmovss  dword ptr [rbp+130h+mins+4], xmm0
                  vmovss  xmm1, dword ptr [rbx+8]
                  vmovss  xmm0, dword ptr [rcx+rax*4]
                  vxorps  xmm2, xmm1, xmm9
                  vmovss  dword ptr [rbp+130h+mins+8], xmm2
                  vaddss  xmm1, xmm0, dword ptr [r15+r12]
                  vmovss  dword ptr [rbp+130h+origin], xmm1
                  vmovss  xmm2, dword ptr [r15+r12+4]
                  vaddss  xmm0, xmm2, dword ptr [rcx+rax*4+4]
                  vmovss  dword ptr [rbp+130h+origin+4], xmm0
                  vmovss  xmm1, dword ptr [r15+r12+8]
                  vaddss  xmm2, xmm1, dword ptr [rcx+rax*4+8]
                  vmovss  dword ptr [rbp+130h+origin+8], xmm2
                }
                CG_TriggerTransformPointOnMovingPlatform(localClientNuma, zoneB, &origin, &v729, &axis);
                v637 = DCONST_DVARBOOL_cg_dbgClientTriggerCull;
                if ( !DCONST_DVARBOOL_cg_dbgClientTriggerCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dbgClientTriggerCull") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v637);
                CL_AddDebugBox(&axis, &v729, &mins, &_R12[_R15].triggerSpaceBounds.halfSize, v579, v637->current.color[0], 1, 0);
                v574 = v718;
                ++_R15;
                v105 = (*(_QWORD *)lerpB)-- == 1i64;
                v575 = v717;
                v576 = zoneA[1];
                v573 = zoneA[0];
                v571 = v720;
              }
              while ( !v105 );
              v545 = zoneB;
            }
          }
          mapEnts = cm.mapEnts;
        }
        zoneB = ++v545;
      }
      while ( v545 < mapEnts->clientTrigger.trigger.count );
      __asm
      {
        vmovaps xmm13, [rsp+230h+var_A8+8]
        vmovaps xmm12, [rsp+230h+var_98+8]
        vmovaps xmm11, xmmword ptr [rsp+230h+var_88+8]
      }
    }
  }
  __asm { vmovaps xmm9, xmmword ptr [rsp+230h+var_68+8] }
LABEL_263:
  _R11 = &v736;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_EnableAudioTriggerByIndex
==============
*/
void CG_EnableAudioTriggerByIndex(const unsigned int trigIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = trigIndex;
  if ( trigIndex >= 0x4000 )
  {
    v5 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2928, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( (16*1024) )", "trigIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", trigIndex, v5) )
      __debugbreak();
  }
  g_audioTriggerDisabled[v2] = !enabled;
}

/*
==============
CG_EnableAudioTriggerByState
==============
*/
void CG_EnableAudioTriggerByState(const unsigned int stateId, bool enabled)
{
  MapEnts *mapEnts; 
  __int64 i; 
  __int64 v6; 
  char *v7; 
  char v8; 
  int v9; 
  char v10; 
  __int64 v11; 
  __int64 v12; 

  mapEnts = cm.mapEnts;
  for ( i = 0i64; (unsigned int)i < mapEnts->clientTrigger.trigger.count; i = (unsigned int)(i + 1) )
  {
    v6 = mapEnts->clientTrigger.audioStateIds[i];
    if ( (_DWORD)v6 != -1 )
    {
      v7 = &mapEnts->clientTrigger.triggerString[v6];
      if ( v7 && (v8 = *v7) != 0 )
      {
        v9 = 5381;
        do
        {
          ++v7;
          v10 = v8 | 0x20;
          if ( (unsigned int)(v8 - 65) >= 0x1A )
            v10 = v8;
          v9 = 65599 * v9 + v10;
          v8 = *v7;
        }
        while ( *v7 );
        if ( !v9 )
          v9 = 1;
      }
      else
      {
        v9 = 0;
      }
      if ( v9 == stateId )
      {
        if ( (unsigned int)i >= 0x4000 )
        {
          LODWORD(v12) = 0x4000;
          LODWORD(v11) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2928, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( (16*1024) )", "trigIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
          mapEnts = cm.mapEnts;
        }
        g_audioTriggerDisabled[i] = !enabled;
      }
    }
  }
}

/*
==============
CG_FindAudioPropagationPortalAtPoint
==============
*/
char CG_FindAudioPropagationPortalAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, unsigned int *outTrigger)
{
  MapEnts *mapEnts; 
  float v9; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v15; 
  __int64 v16; 
  Bounds bounds; 

  _RBP = (unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64;
  _RDI = point;
  mapEnts = cm.mapEnts;
  if ( !cm.mapEnts )
    return 0;
  __asm { vmovsd  xmm0, qword ptr [rdi] }
  v9 = _RDI->v[2];
  __asm
  {
    vmovsd  qword ptr [rbp+1160h+bounds.midPoint], xmm0
    vmovss  xmm0, cs:__real@3f800000
  }
  *(float *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v9;
  __asm
  {
    vmovss  dword ptr [rbp+1160h+bounds.halfSize], xmm0
    vmovss  dword ptr [rbp+1160h+bounds.halfSize+4], xmm0
    vmovss  dword ptr [rbp+1160h+bounds.halfSize+8], xmm0
  }
  *(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 64), mapEnts->clientTrigger.spatialTree, (const Bounds *)((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64));
  if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 64)) )
  {
LABEL_28:
    *outTrigger = 0x4000;
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
      __debugbreak();
    v11 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 20i64);
    v12 = *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
    if ( v12 == v11 )
    {
      if ( !*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
        __debugbreak();
      if ( (**(_BYTE **)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
        __debugbreak();
      if ( *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) >= **(unsigned __int8 **)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
        __debugbreak();
      v13 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) + 4i64 * *(unsigned int *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) + 4);
    }
    else
    {
      if ( v12 >= v11 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
          __debugbreak();
        v12 = *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      }
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 8i64) + 4i64 * v12);
    }
    if ( v13 >= cm.mapEnts->clientTrigger.trigger.count )
    {
      LODWORD(v16) = cm.mapEnts->clientTrigger.trigger.count;
      LODWORD(v15) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2688, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( SLOBYTE(cm.mapEnts->clientTrigger.triggerType[v13]) < 0 )
    {
      CG_TriggerCalcMovingPlatformPos(localClientNum, _RDI, v13, (vec3_t *)(_RBP + 24));
      if ( CG_TestTriggerTouch_Point(v13, (const vec3_t *)(_RBP + 24)) )
        break;
    }
    if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 64)) )
      goto LABEL_28;
  }
  *outTrigger = v13;
  return 1;
}

/*
==============
CG_FindAudioTriggerAtPoint
==============
*/
bool CG_FindAudioTriggerAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, unsigned int triggerMask, unsigned int *outTrigger)
{
  signed __int64 v4; 
  void *v15; 
  MapEnts *mapEnts; 
  int v22; 
  bool result; 
  float v25; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v33; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  char v52[4432]; 
  char v63; 

  v15 = alloca(v4);
  __asm
  {
    vmovaps [rsp+1288h+var_48], xmm6
    vmovaps [rsp+1288h+var_58], xmm7
    vmovaps [rsp+1288h+var_68], xmm8
    vmovaps [rsp+1288h+var_78], xmm9
    vmovaps [rsp+1288h+var_88], xmm10
    vmovaps [rsp+1288h+var_98], xmm11
    vmovaps [rsp+1288h+var_A8], xmm12
    vmovaps [rsp+1288h+var_B8], xmm13
    vmovaps [rsp+1288h+var_C8], xmm14
    vmovaps [rsp+1288h+var_D8], xmm15
  }
  _RBP = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4416) = (unsigned __int64)&v49 ^ _security_cookie;
  __asm { vmovss  xmm13, cs:__real@bf800000 }
  _R15 = point;
  *(_QWORD *)_RBP = outTrigger;
  mapEnts = cm.mapEnts;
  v22 = 0x4000;
  if ( cm.mapEnts )
  {
    __asm { vmovsd  xmm0, qword ptr [r15] }
    v25 = _R15->v[2];
    __asm
    {
      vmovsd  qword ptr [rbp+20h], xmm0
      vmovss  xmm0, cs:__real@3f800000
    }
    *(float *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v25;
    __asm
    {
      vmovss  dword ptr [rbp+2Ch], xmm0
      vmovss  dword ptr [rbp+30h], xmm0
      vmovss  dword ptr [rbp+34h], xmm0
    }
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = 0i64;
    *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128) = 0;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = 0i64;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) = 0i64;
    SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 96), mapEnts->clientTrigger.spatialTree, (const Bounds *)(_RBP + 32));
    if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 96)) )
    {
      __asm
      {
        vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm15, cs:__real@3a83126f
      }
      do
      {
        if ( !*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
          __debugbreak();
        v29 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 20i64);
        v30 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
        if ( v30 == v29 )
        {
          if ( !*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
            __debugbreak();
          if ( (**(_BYTE **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
            __debugbreak();
          if ( *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) >= **(unsigned __int8 **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
            __debugbreak();
          v31 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) + 4i64 * *(unsigned int *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) + 4);
        }
        else
        {
          if ( v30 >= v29 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
              __debugbreak();
            v30 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
          }
          v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 8i64) + 4i64 * v30);
        }
        if ( v31 >= cm.mapEnts->clientTrigger.trigger.count )
        {
          LODWORD(v51) = cm.mapEnts->clientTrigger.trigger.count;
          LODWORD(v50) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2610, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v50, v51) )
            __debugbreak();
        }
        _R14 = v31;
        v33 = cm.mapEnts->clientTrigger.triggerType[v31];
        if ( (v33 & triggerMask) != 0 && !g_audioTriggerDisabled[v31] )
        {
          CG_TriggerCalcMovingPlatformPos(localClientNum, _R15, v31, (vec3_t *)(_RBP + 56));
          if ( CG_TestTriggerTouch_Point(v31, (const vec3_t *)(_RBP + 56)) )
          {
            if ( (v33 & 8) != 0 )
            {
              **(_DWORD **)_RBP = v31;
              result = 1;
              goto LABEL_36;
            }
            _RAX = cm.mapEnts->clientTrigger.priority;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+r14*4]
              vcomiss xmm0, xmm13
            }
            if ( (v33 & 8) != 0 )
            {
              __asm { vmovaps xmm13, xmm0 }
              v22 = v31;
            }
            else
            {
              __asm
              {
                vsubss  xmm0, xmm0, xmm13
                vandps  xmm0, xmm0, xmm14
                vcomiss xmm0, xmm15
              }
            }
          }
        }
      }
      while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 96)) );
    }
    **(_DWORD **)_RBP = v22;
    result = v22 != 0x4000;
  }
  else
  {
    result = 0;
  }
LABEL_36:
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
CG_FindAudioZoneAtPoint
==============
*/
char CG_FindAudioZoneAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, const ZoneDef **outZoneA, const ZoneDef **outZoneB, float *outLerp)
{
  bool IsMainThread; 
  int v14; 
  unsigned int zoneCount; 
  int v17; 
  const ZoneDef *v18; 
  unsigned __int16 v20; 
  __int64 v21; 
  int v22; 
  const SoundTable *v23; 
  int v25; 
  char v26; 
  unsigned int v29; 
  unsigned int outTrigger; 
  unsigned int trigB; 
  float lerpAmount; 
  __int128 v33; 

  _R15 = outLerp;
  _RBX = point;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_FindAudioZoneAtPoint");
  LODWORD(v33) = localClientNum;
  _R12 = s_audioZoneCache;
  IsMainThread = Sys_IsMainThread();
  if ( !IsMainThread )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
  }
  v14 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+var_68+4], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0A8h+var_68+0Ch], xmm0
    vmovss  dword ptr [rsp+0A8h+var_68+8], xmm1
  }
  if ( !s_numAudioZoneCache )
  {
LABEL_6:
    if ( !CG_FindAudioTriggerAtPoint(localClientNum, _RBX, 0xAu, &outTrigger) )
    {
      if ( s_soundTablePtr && s_audioZoneLookup[0x4000] != 0x7FFFFFFF )
      {
        zoneCount = s_soundTablePtr->zoneCount;
        v17 = s_audioZoneLookup[0x4000];
        if ( s_audioZoneLookup[0x4000] >= zoneCount )
        {
LABEL_12:
          v17 = s_audioZoneLookup[0x4000];
        }
        else
        {
          while ( s_soundTablePtr->zones[v17].stateId != s_triggerStateTo[0x4000] )
          {
            if ( ++v17 >= zoneCount )
              goto LABEL_12;
          }
        }
        if ( v17 != 0x7FFFFFFF )
        {
          v18 = &s_soundTablePtr->zones[v17];
LABEL_23:
          *outZoneA = v18;
          *outZoneB = NULL;
          *outLerp = 0.0;
          goto LABEL_24;
        }
      }
      goto LABEL_21;
    }
    v20 = cm.mapEnts->clientTrigger.triggerType[outTrigger];
    if ( (v20 & 8) != 0 )
    {
      CG_TriggerLerpTriggers(localClientNum, outTrigger, _RBX, &outTrigger, &trigB, &lerpAmount);
      v21 = SND_LookupZoneIndex(outTrigger);
      v22 = SND_LookupZoneIndex(trigB);
      if ( (_DWORD)v21 == 0x7FFFFFFF || v22 == 0x7FFFFFFF )
        goto LABEL_21;
      v23 = s_soundTablePtr;
      __asm { vmovss  xmm0, [rsp+0A8h+var_70] }
      *outZoneA = &s_soundTablePtr->zones[v21];
      __asm { vmovss  dword ptr [r15], xmm0 }
      *outZoneB = &v23->zones[v22];
    }
    else if ( (v20 & 2) != 0 )
    {
      v25 = SND_LookupZoneIndex(outTrigger);
      if ( v25 != 0x7FFFFFFF )
      {
        v18 = &s_soundTablePtr->zones[v25];
        goto LABEL_23;
      }
LABEL_21:
      v26 = 0;
      goto LABEL_25;
    }
LABEL_24:
    v26 = 1;
LABEL_25:
    if ( IsMainThread && v26 )
    {
      if ( s_numAudioZoneCache >= 0x40 )
      {
        ++s_audioZoneCacheFault;
      }
      else
      {
        __asm { vmovups xmm0, [rsp+0A8h+var_68] }
        _RCX = s_numAudioZoneCache;
        v29 = s_numAudioZoneCache + 1;
        __asm { vmovups xmmword ptr [r12+rcx*8], xmm0 }
        s_audioZoneCache[_RCX].zoneA = *outZoneA;
        s_audioZoneCache[_RCX].zoneB = *outZoneB;
        s_audioZoneCache[_RCX].lerp = *outLerp;
        s_numAudioZoneCache = v29;
      }
      ++s_audioZoneCacheMisses;
    }
    Sys_ProfEndNamedEvent();
    return v26;
  }
  while ( *(_OWORD *)&s_audioZoneCache[v14].key != v33 )
  {
    if ( ++v14 >= s_numAudioZoneCache )
      goto LABEL_6;
  }
  ++s_audioZoneCacheHits;
  *outZoneA = s_audioZoneCache[v14].zoneA;
  *outZoneB = s_audioZoneCache[v14].zoneB;
  *outLerp = s_audioZoneCache[v14].lerp;
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
CG_FindNPCAudioZoneAtPoint
==============
*/
char CG_FindNPCAudioZoneAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, const ZoneDef **outZone)
{
  int v6; 
  __int64 v7; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned int trigB; 
  float lerpAmount[5]; 
  unsigned int outTrigger; 

  if ( CG_FindAudioTriggerAtPoint(localClientNum, point, 0xAu, &outTrigger) )
  {
    v9 = cm.mapEnts->clientTrigger.triggerType[outTrigger];
    if ( (v9 & 8) != 0 )
    {
      CG_TriggerLerpTriggers(localClientNum, outTrigger, point, &outTrigger, &trigB, lerpAmount);
      v10 = SND_LookupNPCZoneIndex(outTrigger);
      v6 = SND_LookupNPCZoneIndex(trigB);
      if ( (_DWORD)v10 != 0x7FFFFFFF && v6 != 0x7FFFFFFF )
      {
        __asm
        {
          vmovss  xmm0, [rsp+48h+var_14]
          vcomiss xmm0, cs:__real@3f000000
        }
        if ( (unsigned int)v6 <= 0x7FFFFFFF )
        {
          v7 = v10;
          goto LABEL_4;
        }
LABEL_3:
        v7 = v6;
LABEL_4:
        *outZone = &s_soundTablePtr->zones[v7];
        return 1;
      }
    }
    else
    {
      if ( (v9 & 2) == 0 )
        return 1;
      v6 = SND_LookupNPCZoneIndex(outTrigger);
      if ( v6 != 0x7FFFFFFF )
        goto LABEL_3;
    }
  }
  else
  {
    v6 = SND_LookupNPCZoneIndex(0x4000);
    if ( v6 != 0x7FFFFFFF )
      goto LABEL_3;
  }
  return 0;
}

/*
==============
CG_GetADSRSettingByIndex
==============
*/
ADSRSetting *CG_GetADSRSettingByIndex(int index)
{
  const SoundTable *v1; 
  __int64 v2; 

  v1 = s_soundTablePtr;
  v2 = index;
  if ( !s_soundTablePtr )
    return 0i64;
  if ( index >= s_soundTablePtr->adsrCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1953, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_soundTablePtr->adsrCount )", "index doesn't index s_soundTablePtr->adsrCount\n\t%i not in [0, %i)", index, s_soundTablePtr->adsrCount) )
      __debugbreak();
    v1 = s_soundTablePtr;
  }
  return &v1->adsrSettings[v2];
}

/*
==============
CG_GetADSRWeaponIndex
==============
*/
__int64 CG_GetADSRWeaponIndex(const char *name)
{
  int v2; 
  int v3; 
  const char **v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int NumWeapons; 
  int v15; 
  unsigned int v16; 
  Weapon result; 

  v2 = *(_DWORD *)&CG_Weapons_GetWeaponForName(&result, name)->weaponIdx;
  if ( (_WORD)v2 )
  {
    return (unsigned __int16)v2;
  }
  else
  {
    v3 = 0;
    if ( g_freeMissingWeaponIndex > 0 )
    {
      v4 = g_missingAdsrWeaponNameLookup;
      do
      {
        v5 = *v4;
        v6 = 0x7FFFFFFFi64;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v7 = (const char *)(name - v5);
        while ( 1 )
        {
          v8 = (unsigned __int8)v5[(_QWORD)v7];
          v9 = v6;
          v10 = *(unsigned __int8 *)v5++;
          --v6;
          if ( !v9 )
            return v3 + BG_GetNumWeapons();
          if ( v8 != v10 )
          {
            v11 = v8 + 32;
            if ( (unsigned int)(v8 - 65) > 0x19 )
              v11 = v8;
            v8 = v11;
            v12 = v10 + 32;
            if ( (unsigned int)(v10 - 65) > 0x19 )
              v12 = v10;
            if ( v8 != v12 )
              break;
          }
          if ( !v8 )
            return v3 + BG_GetNumWeapons();
        }
        ++v3;
        ++v4;
      }
      while ( v3 < g_freeMissingWeaponIndex );
    }
    if ( g_freeMissingWeaponIndex >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 340, ASSERT_TYPE_ASSERT, "(g_freeMissingWeaponIndex < 128)", (const char *)&queryFormat, "g_freeMissingWeaponIndex < MAX_ADSR_MISSING_WEAPONS") )
      __debugbreak();
    NumWeapons = BG_GetNumWeapons();
    v15 = g_freeMissingWeaponIndex;
    v16 = g_freeMissingWeaponIndex + NumWeapons;
    g_missingAdsrWeaponNameLookup[g_freeMissingWeaponIndex] = name;
    g_freeMissingWeaponIndex = v15 + 1;
  }
  return v16;
}

/*
==============
CG_GetBlendedAudioTriggers
==============
*/
char CG_GetBlendedAudioTriggers(unsigned int triggerIndex, unsigned int *outTriggerA, unsigned int *outTriggerB)
{
  MapEnts *mapEnts; 
  __int64 v6; 
  unsigned int v7; 
  int v9; 
  int numClientTriggerBlendNodes; 

  mapEnts = cm.mapEnts;
  if ( !cm.mapEnts )
    return 0;
  if ( !cm.mapEnts->clientTrigger.trigger.count )
    return 0;
  if ( triggerIndex == 0x4000 )
    return 0;
  v6 = triggerIndex;
  if ( (cm.mapEnts->clientTrigger.triggerType[v6] & 8) == 0 )
    return 0;
  v7 = cm.mapEnts->clientTrigger.blendLookup[v6];
  if ( v7 >= cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )
  {
    numClientTriggerBlendNodes = cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes;
    v9 = cm.mapEnts->clientTrigger.blendLookup[v6];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2765, ASSERT_TYPE_ASSERT, "(unsigned)( blendIndex ) < (unsigned)( cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )", "blendIndex doesn't index cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes\n\t%i not in [0, %i)", v9, numClientTriggerBlendNodes) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  *outTriggerA = mapEnts->clientTriggerBlend.blendNodes[v7].triggerA;
  *outTriggerB = cm.mapEnts->clientTriggerBlend.blendNodes[v7].triggerB;
  return 1;
}

/*
==============
CG_GetCurrentAudioZone
==============
*/
bool CG_GetCurrentAudioZone(const ZoneDef **outZoneA, const ZoneDef **outZoneB, float *outLerp)
{
  const SoundTable *v4; 
  __int64 v5; 
  bool result; 
  bool v9; 

  v4 = s_soundTablePtr;
  if ( !s_soundTablePtr )
    return 0;
  if ( g_lastAudioZoneIndexA == 0x7FFFFFFF )
    return 0;
  v5 = g_lastAudioZoneIndexB;
  if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
    return 0;
  __asm
  {
    vmovss  xmm1, cs:g_lastAudioLerpVal
    vucomiss xmm1, cs:__real@3f800000
  }
  if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
  {
    *outZoneA = &s_soundTablePtr->zones[g_lastAudioZoneIndexB];
LABEL_6:
    result = 1;
    *outLerp = 0.0;
    *outZoneB = NULL;
    return result;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v9 = &s_soundTablePtr->zones[g_lastAudioZoneIndexA] == NULL;
  __asm { vucomiss xmm1, xmm0 }
  *outZoneA = &s_soundTablePtr->zones[g_lastAudioZoneIndexA];
  if ( v9 )
    goto LABEL_6;
  __asm { vmovss  dword ptr [r8], xmm1 }
  *outZoneB = &v4->zones[v5];
  return 1;
}

/*
==============
CG_GetCurrentOverride
==============
*/
CTAudOverride *CG_GetCurrentOverride(CTAudState *ctAudState)
{
  int v1; 
  CTAudOverride *v2; 
  __int64 v3; 

  v1 = 6;
  v2 = &ctAudState->ctOverrideStack[6];
  v3 = 6i64;
  while ( !v2->active )
  {
    --v1;
    --v2;
    if ( --v3 < 0 )
      return 0i64;
  }
  return (CTAudOverride *)((char *)ctAudState + 20 * v1);
}

/*
==============
CG_GetCurrentWeapReflDefId
==============
*/
__int64 CG_GetCurrentWeapReflDefId()
{
  int v0; 

  v0 = g_audTrigWeapReflZoneA;
  if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB )
  {
    __asm
    {
      vmovss  xmm0, cs:g_lastAudioLerpVal
      vcomiss xmm0, cs:__real@3f000000
    }
    if ( g_audTrigWeapReflZoneA > (unsigned int)g_audTrigWeapReflZoneB )
      v0 = g_audTrigWeapReflZoneB;
  }
  if ( !s_soundTablePtr || v0 == 0x7FFFFFFF )
    return 0i64;
  else
    return s_soundTablePtr->zones[v0].weapReflId;
}

/*
==============
CG_GetCurrentWeapReflDefName
==============
*/
const char *CG_GetCurrentWeapReflDefName()
{
  int v0; 

  v0 = g_audTrigWeapReflZoneA;
  if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB )
  {
    __asm
    {
      vmovss  xmm0, cs:g_lastAudioLerpVal
      vcomiss xmm0, cs:__real@3f000000
    }
    if ( g_audTrigWeapReflZoneA > (unsigned int)g_audTrigWeapReflZoneB )
      v0 = g_audTrigWeapReflZoneB;
  }
  if ( !s_soundTablePtr || v0 == 0x7FFFFFFF )
    return (char *)&queryFormat.fmt + 3;
  else
    return s_soundTablePtr->zones[v0].weapReflName;
}

/*
==============
CG_GetDistanceFromTriggerWall
==============
*/
bool CG_GetDistanceFromTriggerWall(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *inOutPoint, float *outDistance)
{
  bool result; 
  ClientTriggerModel *models; 
  __int64 v14; 
  MapEnts *mapEnts; 
  int v17; 
  __int64 firstHull; 
  ClientTriggerHull *hulls; 
  bool v28; 
  bool v30; 
  unsigned int slabCount; 
  int v40; 
  __int64 v45; 
  bool v46; 
  unsigned int v47; 
  __int64 v48; 
  bool v93; 
  bool v94; 

  _R12 = outDistance;
  _RBX = inOutPoint;
  if ( triggerIdx >= cm.mapEnts->clientTrigger.trigger.count )
    return 0;
  models = cm.mapEnts->clientTrigger.trigger.models;
  __asm
  {
    vmovaps [rsp+0E8h+var_78], xmm8
    vmovaps [rsp+0E8h+var_88], xmm9
    vmovaps [rsp+0E8h+var_98], xmm10
    vmovaps [rsp+0E8h+var_A8], xmm11
  }
  v14 = triggerIdx;
  CG_TriggerCalcMovingPlatformPos(localClientNum, inOutPoint, triggerIdx, inOutPoint);
  __asm { vmovss  xmm0, dword ptr [rbx] }
  mapEnts = cm.mapEnts;
  v17 = 0;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm11, cs:__real@bf800000
    vsubss  xmm8, xmm0, dword ptr [rax+r14*4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm10, xmm0, dword ptr [rax+r14*4+8]
    vsubss  xmm9, xmm1, dword ptr [rax+r14*4+4]
  }
  if ( models[v14].hullCount )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_58], xmm6
      vmovaps [rsp+0E8h+var_68], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    firstHull = (int)models[v14].firstHull;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      hulls = mapEnts->clientTrigger.trigger.hulls;
      v28 = __CFADD__(firstHull * 32, hulls) || &hulls[firstHull] == NULL;
      _RBX = &hulls[firstHull];
      if ( !_RBX )
      {
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 522, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds");
        v28 = !v30;
        if ( v30 )
          __debugbreak();
        mapEnts = cm.mapEnts;
      }
      __asm
      {
        vsubss  xmm2, xmm8, dword ptr [rbx]
        vmovss  xmm3, dword ptr [rbx+0Ch]
        vandps  xmm2, xmm2, xmm7
        vcomiss xmm2, xmm3
      }
      if ( v28 )
      {
        __asm
        {
          vsubss  xmm1, xmm9, dword ptr [rbx+4]
          vmovss  xmm4, dword ptr [rbx+10h]
          vandps  xmm1, xmm1, xmm7
          vcomiss xmm1, xmm4
        }
        if ( v28 )
        {
          __asm
          {
            vsubss  xmm0, xmm10, dword ptr [rbx+8]
            vandps  xmm0, xmm0, xmm7
            vcomiss xmm0, dword ptr [rbx+14h]
          }
          if ( v28 )
          {
            slabCount = _RBX->slabCount;
            v40 = 0;
            __asm
            {
              vsubss  xmm1, xmm4, xmm1
              vsubss  xmm0, xmm3, xmm2
              vminss  xmm4, xmm1, xmm0
            }
            if ( slabCount >= 4 )
            {
              _RDX = mapEnts->clientTrigger.trigger.slabs;
              v45 = _RBX->firstSlab + 1;
              v47 = ((slabCount - 4) >> 2) + 1;
              v46 = v47 == 0;
              v48 = v47;
              v40 = 4 * v47;
              do
              {
                _RAX = 5i64 * (unsigned int)(v45 - 1);
                __asm
                {
                  vmovss  xmm3, dword ptr [rdx+rax*4+8]
                  vucomiss xmm3, xmm6
                }
                if ( v46 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm9, dword ptr [rdx+rax*4+4]
                    vmulss  xmm0, xmm8, dword ptr [rdx+rax*4]
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm0, dword ptr [rdx+rax*4+10h]
                    vmulss  xmm1, xmm3, xmm10
                    vaddss  xmm2, xmm2, xmm1
                    vsubss  xmm3, xmm2, dword ptr [rdx+rax*4+0Ch]
                    vandps  xmm3, xmm3, xmm7
                    vsubss  xmm1, xmm0, xmm3
                    vminss  xmm4, xmm1, xmm4
                  }
                }
                _RCX = 5 * v45;
                __asm
                {
                  vmovss  xmm3, dword ptr [rdx+rcx*4+8]
                  vucomiss xmm3, xmm6
                }
                if ( v46 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm9, dword ptr [rdx+rcx*4+4]
                    vmulss  xmm0, xmm8, dword ptr [rdx+rcx*4]
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm0, dword ptr [rdx+rcx*4+10h]
                    vmulss  xmm1, xmm3, xmm10
                    vaddss  xmm2, xmm2, xmm1
                    vsubss  xmm3, xmm2, dword ptr [rdx+rcx*4+0Ch]
                    vandps  xmm3, xmm3, xmm7
                    vsubss  xmm1, xmm0, xmm3
                    vminss  xmm4, xmm1, xmm4
                  }
                }
                _RAX = 5i64 * (unsigned int)(v45 + 1);
                __asm
                {
                  vmovss  xmm3, dword ptr [rdx+rax*4+8]
                  vucomiss xmm3, xmm6
                }
                if ( v46 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm9, dword ptr [rdx+rax*4+4]
                    vmulss  xmm0, xmm8, dword ptr [rdx+rax*4]
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm0, dword ptr [rdx+rax*4+10h]
                    vmulss  xmm1, xmm3, xmm10
                    vaddss  xmm2, xmm2, xmm1
                    vsubss  xmm3, xmm2, dword ptr [rdx+rax*4+0Ch]
                    vandps  xmm3, xmm3, xmm7
                    vsubss  xmm1, xmm0, xmm3
                    vminss  xmm4, xmm1, xmm4
                  }
                }
                _RAX = 5i64 * (unsigned int)(v45 + 2);
                __asm
                {
                  vmovss  xmm3, dword ptr [rdx+rax*4+8]
                  vucomiss xmm3, xmm6
                }
                if ( v46 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm9, dword ptr [rdx+rax*4+4]
                    vmulss  xmm0, xmm8, dword ptr [rdx+rax*4]
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm0, dword ptr [rdx+rax*4+10h]
                    vmulss  xmm1, xmm3, xmm10
                    vaddss  xmm2, xmm2, xmm1
                    vsubss  xmm3, xmm2, dword ptr [rdx+rax*4+0Ch]
                    vandps  xmm3, xmm3, xmm7
                    vsubss  xmm1, xmm0, xmm3
                    vminss  xmm4, xmm1, xmm4
                  }
                }
                v45 = (unsigned int)(v45 + 4);
                v46 = --v48 == 0;
              }
              while ( v48 );
            }
            v93 = v40 < slabCount;
            v94 = v40 == slabCount;
            if ( v40 < (int)slabCount )
            {
              _RDX = mapEnts->clientTrigger.trigger.slabs;
              do
              {
                _RAX = 5i64 * (_RBX->firstSlab + v40);
                __asm
                {
                  vmovss  xmm3, dword ptr [rdx+rax*4+8]
                  vucomiss xmm3, xmm6
                }
                if ( v94 )
                {
                  __asm
                  {
                    vmulss  xmm1, xmm9, dword ptr [rdx+rax*4+4]
                    vmulss  xmm0, xmm8, dword ptr [rdx+rax*4]
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm0, dword ptr [rdx+rax*4+10h]
                    vmulss  xmm1, xmm3, xmm10
                    vaddss  xmm2, xmm2, xmm1
                    vsubss  xmm3, xmm2, dword ptr [rdx+rax*4+0Ch]
                    vandps  xmm3, xmm3, xmm7
                    vsubss  xmm1, xmm0, xmm3
                    vminss  xmm4, xmm1, xmm4
                  }
                }
                v93 = ++v40 < slabCount;
                v94 = v40 == slabCount;
              }
              while ( v40 < (int)slabCount );
            }
            __asm { vcomiss xmm4, xmm6 }
            if ( v93 )
              goto LABEL_31;
            __asm { vcomiss xmm11, xmm6 }
            if ( !v93 )
LABEL_31:
              __asm { vminss  xmm11, xmm4, xmm11 }
            else
              __asm { vmovaps xmm11, xmm4 }
          }
        }
      }
      ++v17;
      ++firstHull;
    }
    while ( v17 < models[v14].hullCount );
    _R12 = outDistance;
    __asm
    {
      vmovaps xmm7, [rsp+0E8h+var_68]
      vmovaps xmm6, [rsp+0E8h+var_58]
    }
  }
  __asm { vmovaps xmm10, [rsp+0E8h+var_98] }
  result = 1;
  __asm
  {
    vmovaps xmm9, [rsp+0E8h+var_88]
    vmovaps xmm8, [rsp+0E8h+var_78]
    vmovss  dword ptr [r12], xmm11
    vmovaps xmm11, [rsp+0E8h+var_A8]
  }
  return result;
}

/*
==============
CG_GetNPCADSRSettingIndex
==============
*/
__int64 CG_GetNPCADSRSettingIndex(LocalClientNum_t localClientNum, const vec3_t *org, const Weapon *weapon)
{
  int v6; 
  int v7; 
  const SoundTable *v8; 
  ZoneDef *v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  unsigned int v12; 
  int numNPCAdsrZone; 
  int v15; 
  int v16; 
  AdsrZoneEntry *v17; 
  int v18; 
  __int64 weaponIdx; 
  AdsrZoneEntry *npcADSRZones; 
  int startNPCAdsrZoneIndex; 
  const dvar_t *v22; 
  const char *WeaponName; 
  unsigned int outTrigger; 
  unsigned int trigB; 
  float lerpAmount[2]; 
  char output[1024]; 

  if ( CG_FindAudioTriggerAtPoint(localClientNum, org, 0xAu, &outTrigger) )
  {
    v6 = outTrigger;
    v10 = cm.mapEnts->clientTrigger.triggerType[outTrigger];
    if ( (v10 & 8) != 0 )
    {
      CG_TriggerLerpTriggers(localClientNum, outTrigger, org, &outTrigger, &trigB, lerpAmount);
      v11 = SND_LookupNPCZoneIndex(outTrigger);
      v12 = SND_LookupNPCZoneIndex(trigB);
      if ( (_DWORD)v11 == 0x7FFFFFFF || v12 == 0x7FFFFFFF )
        return 0xFFFFFFFFi64;
      __asm
      {
        vmovss  xmm0, [rsp+478h+var_430]
        vcomiss xmm0, cs:__real@3f000000
      }
      v8 = s_soundTablePtr;
      if ( v12 <= 0x7FFFFFFF )
        v9 = &s_soundTablePtr->zones[v11];
      else
        v9 = &s_soundTablePtr->zones[v12];
      goto LABEL_13;
    }
    if ( (v10 & 2) == 0 )
    {
      v9 = *(ZoneDef **)lerpAmount;
      v8 = s_soundTablePtr;
      goto LABEL_13;
    }
  }
  else
  {
    v6 = 0x4000;
  }
  v7 = SND_LookupNPCZoneIndex(v6);
  if ( v7 == 0x7FFFFFFF )
    return 0xFFFFFFFFi64;
  v8 = s_soundTablePtr;
  v9 = &s_soundTablePtr->zones[v7];
LABEL_13:
  numNPCAdsrZone = v9->numNPCAdsrZone;
  v15 = 0;
  v16 = 0;
  if ( numNPCAdsrZone <= 0 )
  {
LABEL_17:
    weaponIdx = weapon->weaponIdx;
    if ( g_adsrBaseWeaponIdxLookup[weaponIdx] && numNPCAdsrZone > 0 )
    {
      npcADSRZones = v8->npcADSRZones;
      startNPCAdsrZoneIndex = v9->startNPCAdsrZoneIndex;
      while ( npcADSRZones[startNPCAdsrZoneIndex + v15].weaponIdx != g_adsrBaseWeaponIdxLookup[weaponIdx] )
      {
        if ( ++v15 >= numNPCAdsrZone )
          goto LABEL_22;
      }
      return (unsigned int)npcADSRZones[startNPCAdsrZoneIndex + v15].adsrIdx;
    }
LABEL_22:
    v22 = DCONST_DVARBOOL_snd_debugWeaponADSR;
    if ( !DCONST_DVARBOOL_snd_debugWeaponADSR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugWeaponADSR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
      Com_Printf(9, "No ADSR for NPC weapon: %s\n", WeaponName);
    }
    return 0xFFFFFFFFi64;
  }
  v17 = v8->npcADSRZones;
  v18 = v9->startNPCAdsrZoneIndex;
  while ( v17[v18 + v16].weaponIdx != weapon->weaponIdx )
  {
    if ( ++v16 >= numNPCAdsrZone )
      goto LABEL_17;
  }
  return (unsigned int)v17[v18 + v16].adsrIdx;
}

/*
==============
CG_GetNearestTwoPropagationTriggers
==============
*/
void CG_GetNearestTwoPropagationTriggers(LocalClientNum_t localClientNum, const vec3_t *origin, unsigned int *triggerList, unsigned int numTriggers, unsigned int *outTrigger1, unsigned int *outTrigger2)
{
  __int64 v10; 
  unsigned int *v12; 
  unsigned int v13; 
  unsigned int *v14; 
  __int64 v16; 
  int v18; 
  MapEnts *mapEnts; 
  unsigned int *v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int count; 
  CTAudRvbPanInfo *audioRvbPanInfo; 
  const vec3_t *v25; 
  char v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  CTAudRvbPanInfo *v41; 
  const vec3_t *v42; 
  unsigned int v54; 
  int v57; 
  LocalClientNum_t localClientNuma; 
  __int64 v59; 
  vec3_t outOffset; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovss  xmm6, cs:__real@7f7fffff
  }
  v10 = localClientNum;
  _R13 = origin;
  v12 = outTrigger1;
  v13 = 0x4000;
  v14 = outTrigger2;
  v16 = numTriggers;
  localClientNuma = (int)v10;
  v57 = 0x4000;
  __asm { vmovaps xmm7, xmm6 }
  if ( (unsigned int)v10 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3172, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentPropagationTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentPropagationTrigger )\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
    v14 = outTrigger2;
    v12 = outTrigger1;
  }
  v18 = g_playerCurrentPropagationTrigger[v10];
  if ( (_DWORD)v16 )
  {
    mapEnts = cm.mapEnts;
    v20 = triggerList;
    v21 = v16;
    v59 = v16;
    do
    {
      v22 = *v20;
      count = mapEnts->clientTrigger.trigger.count;
      if ( (unsigned int)v22 < count && (_DWORD)v22 != v18 && !g_audioTriggerDisabled[v22] && (mapEnts->clientTrigger.triggerType[v22] & 0x40) != 0 && count )
      {
        audioRvbPanInfo = mapEnts->clientTrigger.audioRvbPanInfo;
        v25 = audioRvbPanInfo[v22].hasCustomPosition ? &audioRvbPanInfo[v22].position : &mapEnts->clientTrigger.origins[v22];
        CG_TriggerTransformPointOnMovingPlatform(localClientNuma, v22, v25, &outOffset, NULL);
        __asm
        {
          vmovss  xmm0, dword ptr [r13+0]
          vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+outOffset]
          vmovss  xmm1, dword ptr [r13+4]
          vmovss  xmm0, dword ptr [r13+8]
          vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+outOffset+4]
          vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+outOffset+8]
        }
        mapEnts = cm.mapEnts;
        __asm
        {
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm5, xmm3, xmm0
          vcomiss xmm5, xmm6
        }
        if ( v37 )
        {
          __asm { vmovaps xmm6, xmm5 }
          v13 = v22;
        }
      }
      ++v20;
      --v21;
    }
    while ( v21 );
    v38 = v59;
    do
    {
      v39 = *triggerList;
      if ( (_DWORD)v39 == v13 )
        goto LABEL_30;
      v40 = mapEnts->clientTrigger.trigger.count;
      if ( (unsigned int)v39 >= v40 || (_DWORD)v39 == v18 || g_audioTriggerDisabled[v39] || (mapEnts->clientTrigger.triggerType[v39] & 0x40) == 0 || !v40 )
        goto LABEL_30;
      v41 = mapEnts->clientTrigger.audioRvbPanInfo;
      v42 = v41[v39].hasCustomPosition ? &v41[v39].position : &mapEnts->clientTrigger.origins[v39];
      CG_TriggerTransformPointOnMovingPlatform(localClientNuma, v39, v42, &outOffset, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+outOffset]
        vmovss  xmm1, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+8]
        vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+outOffset+4]
        vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+outOffset+8]
      }
      mapEnts = cm.mapEnts;
      __asm
      {
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm5, xmm3, xmm0
        vcomiss xmm5, xmm7
      }
      if ( !v37 )
      {
LABEL_30:
        v54 = v57;
      }
      else
      {
        __asm { vmovaps xmm7, xmm5 }
        v54 = v39;
        v57 = v39;
      }
      ++triggerList;
      --v38;
    }
    while ( v38 );
    *outTrigger1 = v13;
    *outTrigger2 = v54;
  }
  else
  {
    *v12 = 0x4000;
    *v14 = 0x4000;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
}

/*
==============
CG_GetOverride
==============
*/
CTAudOverride *CG_GetOverride(CTAudState *ctAudState, CTAudOverrideType overrideType)
{
  __int64 v2; 
  int v6; 

  v2 = overrideType;
  if ( (unsigned int)overrideType >= CTAUD_OVERRIDE_COUNT )
  {
    v6 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", overrideType, v6) )
      __debugbreak();
  }
  return (CTAudOverride *)((char *)ctAudState + 20 * v2);
}

/*
==============
CG_GetPlayerADSRSettingIndex
==============
*/
__int64 CG_GetPlayerADSRSettingIndex(LocalClientNum_t localClientNum, const Weapon *weapon)
{
  int v2; 
  CTAudState *v3; 
  int v5; 
  __int64 v6; 
  CTAudOverride *v7; 
  int ctPlayerAdsrZone; 
  CTAudOverride *v9; 
  ZoneDef *v10; 
  __int64 startAdsrZoneIndex; 
  int v12; 
  int v13; 
  AdsrZoneEntry *v14; 
  __int64 v15; 
  unsigned int *v16; 
  __int64 weaponIdx; 
  AdsrZoneEntry *playerADSRZones; 
  __int64 v19; 
  unsigned int *p_weaponIdx; 
  const dvar_t *v21; 
  const char *WeaponName; 
  char output[1024]; 

  v2 = g_playerCurrentAudioTrigger[localClientNum];
  v3 = &s_audioZoneStates[localClientNum];
  v5 = 6;
  v6 = 6i64;
  v7 = &v3->ctOverrideStack[6];
  while ( !v7->active )
  {
    --v5;
    --v7;
    if ( --v6 < 0 )
      goto LABEL_4;
  }
  v9 = &v3->ctOverrideStack[v5];
  if ( v9 && (v9->scriptAudioZoneOverrideFlags & 0x40) != 0 )
  {
    ctPlayerAdsrZone = v3->ctPlayerAdsrZone;
  }
  else
  {
LABEL_4:
    if ( v2 == 0x4000 )
    {
      ctPlayerAdsrZone = SND_LookupZoneIndex(0x4000);
      if ( ctPlayerAdsrZone == 0x7FFFFFFF )
        return 0xFFFFFFFFi64;
      goto LABEL_12;
    }
    ctPlayerAdsrZone = SND_LookupZoneIndex(v2);
  }
  if ( ctPlayerAdsrZone == 0x7FFFFFFF )
    return 0xFFFFFFFFi64;
LABEL_12:
  v10 = &s_soundTablePtr->zones[ctPlayerAdsrZone];
  startAdsrZoneIndex = v10->startAdsrZoneIndex;
  v12 = startAdsrZoneIndex;
  v13 = startAdsrZoneIndex + v10->numAdsrZone;
  if ( (int)startAdsrZoneIndex >= v13 )
  {
LABEL_16:
    weaponIdx = weapon->weaponIdx;
    if ( g_adsrBaseWeaponIdxLookup[weaponIdx] && (int)startAdsrZoneIndex < v13 )
    {
      playerADSRZones = s_soundTablePtr->playerADSRZones;
      v19 = startAdsrZoneIndex;
      p_weaponIdx = &playerADSRZones[startAdsrZoneIndex].weaponIdx;
      while ( *p_weaponIdx != g_adsrBaseWeaponIdxLookup[weaponIdx] )
      {
        LODWORD(startAdsrZoneIndex) = startAdsrZoneIndex + 1;
        ++v19;
        p_weaponIdx += 8;
        if ( v19 >= v13 )
          goto LABEL_21;
      }
      return (unsigned int)playerADSRZones[(int)startAdsrZoneIndex].adsrIdx;
    }
LABEL_21:
    v21 = DCONST_DVARBOOL_snd_debugWeaponADSR;
    if ( !DCONST_DVARBOOL_snd_debugWeaponADSR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugWeaponADSR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
      Com_Printf(9, "No ADSR for Player weapon: %s\n", WeaponName);
    }
    return 0xFFFFFFFFi64;
  }
  v14 = s_soundTablePtr->playerADSRZones;
  v15 = v10->startAdsrZoneIndex;
  v16 = &v14[startAdsrZoneIndex].weaponIdx;
  while ( *v16 != weapon->weaponIdx )
  {
    ++v12;
    ++v15;
    v16 += 8;
    if ( v15 >= v13 )
      goto LABEL_16;
  }
  return (unsigned int)v14[v12].adsrIdx;
}

/*
==============
CG_GetPlayerAudioBlendTriggerIndex
==============
*/
__int64 CG_GetPlayerAudioBlendTriggerIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3616, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentAudioBlendTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentAudioBlendTrigger )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)g_playerCurrentAudioBlendTrigger[v1];
}

/*
==============
CG_GetPlayerAudioPropagationTriggerIndex
==============
*/
__int64 CG_GetPlayerAudioPropagationTriggerIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3624, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentPropagationTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentPropagationTrigger )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)g_playerCurrentPropagationTrigger[v1];
}

/*
==============
CG_GetPlayerAudioTriggerIndex
==============
*/
__int64 CG_GetPlayerAudioTriggerIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3608, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentAudioTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentAudioTrigger )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)g_playerCurrentAudioTrigger[v1];
}

/*
==============
CG_GetPlayerBreathState
==============
*/
PlayerBreathStateDef *CG_GetPlayerBreathState(unsigned int state)
{
  int v1; 
  const SoundTable *v4; 
  unsigned int zoneCount; 
  __int64 v6; 
  __int64 startPlayerBreathStateIndex; 
  int v8; 
  PlayerBreathStateDef *plrBreathStateDefs; 
  PlayerBreathStateDef *i; 
  PlayerBreathStateDef *result; 

  v1 = g_audTrigPlayerBreathZoneA;
  if ( g_audTrigPlayerBreathZoneA == g_audTrigPlayerBreathZoneB )
  {
    v1 = g_audTrigPlayerBreathZoneB;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:g_lastAudioLerpVal
      vcomiss xmm0, cs:__real@3f000000
    }
    if ( g_audTrigPlayerBreathZoneA > (unsigned int)g_audTrigPlayerBreathZoneB )
      v1 = g_audTrigPlayerBreathZoneB;
  }
  v4 = s_soundTablePtr;
  if ( !s_soundTablePtr )
    return 0i64;
  zoneCount = s_soundTablePtr->zoneCount;
  if ( !zoneCount )
    return 0i64;
  if ( v1 == 0x7FFFFFFF )
    return 0i64;
  if ( v1 >= zoneCount )
    return 0i64;
  v6 = v1;
  startPlayerBreathStateIndex = s_soundTablePtr->zones[v6].startPlayerBreathStateIndex;
  if ( (_DWORD)startPlayerBreathStateIndex == -1 )
    return 0i64;
  if ( (unsigned int)startPlayerBreathStateIndex >= s_soundTablePtr->plrBreathStateDefCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3686, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->plrBreathStateDefCount )", "idx doesn't index s_soundTablePtr->plrBreathStateDefCount\n\t%i not in [0, %i)", s_soundTablePtr->zones[v6].startPlayerBreathStateIndex, s_soundTablePtr->plrBreathStateDefCount) )
      __debugbreak();
    v4 = s_soundTablePtr;
  }
  v8 = startPlayerBreathStateIndex + v4->zones[v6].numPlayerBreathStates;
  if ( (int)startPlayerBreathStateIndex >= v8 )
    return 0i64;
  plrBreathStateDefs = v4->plrBreathStateDefs;
  for ( i = &plrBreathStateDefs[startPlayerBreathStateIndex]; ; ++i )
  {
    result = &plrBreathStateDefs[(int)startPlayerBreathStateIndex];
    if ( i->stateType == state )
      break;
    LODWORD(startPlayerBreathStateIndex) = startPlayerBreathStateIndex + 1;
    if ( (int)startPlayerBreathStateIndex >= v8 )
      return 0i64;
  }
  return result;
}

/*
==============
CG_GetPlayerSoundBankTriggerIndex
==============
*/
__int64 CG_GetPlayerSoundBankTriggerIndex(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3632, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentSoundBankTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentSoundBankTrigger )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)g_playerCurrentSoundBankTrigger[v1];
}

/*
==============
CG_GetReverbDefForTrigger
==============
*/
bool CG_GetReverbDefForTrigger(LocalClientNum_t localClientNum, unsigned int triggerIndex, const vec3_t *point, const ReverbDef **outReverbDef)
{
  const SoundTable *v4; 
  const ReverbDef **v5; 
  unsigned __int16 v7; 
  __int64 v8; 
  int v9; 
  __int64 v11; 
  bool v12; 
  __int64 v17; 
  ZoneDef *zones; 
  char v19; 
  char v20; 
  float v21; 
  unsigned int zoneCount; 
  __int64 v23; 
  __int64 v24; 
  unsigned int stateId; 
  __int16 reverbIndex; 
  bool result; 
  unsigned int trigA; 
  unsigned int trigB; 
  float lerpAmount[12]; 

  v4 = s_soundTablePtr;
  v5 = outReverbDef;
  if ( !s_soundTablePtr || !s_soundTablePtr->zoneCount )
    return 0;
  if ( triggerIndex == 0x4000 )
    LOBYTE(v7) = 2;
  else
    v7 = cm.mapEnts->clientTrigger.triggerType[triggerIndex];
  if ( (v7 & 8) == 0 )
  {
    v12 = (v7 & 0x42) == 0;
    if ( (v7 & 0x42) == 0 )
      return 0;
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    _RAX = triggerIndex;
    _RSI = 0x140000000ui64;
    __asm { vcomiss xmm0, dword ptr rva s_triggerStateLerp.current[rsi+rax*8] }
    if ( !v12 )
    {
      if ( triggerIndex >= 0x4001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 217, ASSERT_TYPE_ASSERT, "(triggerIndex < ( sizeof( *array_counter( s_audioZoneLookup ) ) + 0 ))", (const char *)&queryFormat, "triggerIndex < ARRAY_COUNT( s_audioZoneLookup )") )
          __debugbreak();
        v4 = s_soundTablePtr;
      }
      _R15 = (int)triggerIndex;
      v17 = s_audioZoneLookup[triggerIndex];
      if ( (_DWORD)v17 == 0x7FFFFFFF )
        return 0;
      zones = v4->zones;
      v19 = 0;
      v20 = 0;
      v21 = lerpAmount[0];
      zoneCount = v4->zoneCount;
      if ( (unsigned int)v17 < zoneCount )
      {
        v23 = v17;
        do
        {
          if ( v19 && v20 )
            break;
          v24 = (unsigned int)v17;
          stateId = zones[v24].stateId;
          if ( stateId == s_triggerStateFrom[_R15] && zones[v24].id == zones[v23].id )
            v19 = 1;
          if ( stateId == s_triggerStateTo[_R15] && zones[v24].id == zones[v23].id )
          {
            v21 = *(float *)&v17;
            v20 = 1;
          }
          LODWORD(v17) = v17 + 1;
        }
        while ( (unsigned int)v17 < zoneCount );
        v5 = outReverbDef;
      }
      _RAX = 0x140000000ui64;
      __asm { vmovss  xmm0, dword ptr rva s_triggerStateLerp.current[rax+r15*8] }
      if ( !v19 || !v20 )
        return 0;
      __asm { vcomiss xmm0, cs:__real@3f000000 }
      reverbIndex = zones[SLODWORD(v21)].reverbIndex;
      goto LABEL_37;
    }
    v9 = SND_LookupZoneIndex(triggerIndex);
    if ( v9 == 0x7FFFFFFF )
      return 0;
    v4 = s_soundTablePtr;
    goto LABEL_35;
  }
  CG_TriggerLerpTriggers(localClientNum, triggerIndex, point, &trigA, &trigB, lerpAmount);
  v8 = SND_LookupZoneIndex(trigA);
  v9 = SND_LookupZoneIndex(trigB);
  if ( (_DWORD)v8 == 0x7FFFFFFF || v9 == 0x7FFFFFFF )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_30]
    vcomiss xmm0, cs:__real@3f000000
  }
  v4 = s_soundTablePtr;
  if ( (unsigned int)v9 >= 0x7FFFFFFF )
  {
LABEL_35:
    v11 = v9;
    goto LABEL_36;
  }
  v11 = v8;
LABEL_36:
  reverbIndex = v4->zones[v11].reverbIndex;
LABEL_37:
  if ( reverbIndex != -1 )
  {
    result = 1;
    *v5 = &v4->reverbs[reverbIndex];
    return result;
  }
  return 0;
}

/*
==============
CG_GetTriggerCenter
==============
*/
char CG_GetTriggerCenter(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *outCenter)
{
  unsigned int count; 
  CTAudRvbPanInfo *audioRvbPanInfo; 

  count = cm.mapEnts->clientTrigger.trigger.count;
  if ( !count || triggerIdx >= count )
    return 0;
  audioRvbPanInfo = cm.mapEnts->clientTrigger.audioRvbPanInfo;
  if ( audioRvbPanInfo[triggerIdx].hasCustomPosition )
    CG_TriggerTransformPointOnMovingPlatform(localClientNum, triggerIdx, &audioRvbPanInfo[triggerIdx].position, outCenter, NULL);
  else
    CG_TriggerTransformPointOnMovingPlatform(localClientNum, triggerIdx, &cm.mapEnts->clientTrigger.origins[triggerIdx], outCenter, NULL);
  return 1;
}

/*
==============
CG_GetTriggerMinReverbVolumeAndMaxWallDistance
==============
*/
bool CG_GetTriggerMinReverbVolumeAndMaxWallDistance(unsigned int triggerIdx, float *outMinVolume, float *outWallDistance)
{
  bool result; 

  _RDI = outWallDistance;
  _RSI = outMinVolume;
  if ( !cm.mapEnts->clientTrigger.trigger.count || triggerIdx >= 0x4000 )
    return 0;
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovaps [rsp+38h+var_18], xmm6
    vxorps  xmm1, xmm1, xmm1; min
  }
  _RBX = 3i64 * triggerIdx;
  _RAX = cm.mapEnts->clientTrigger.audioRvbPanInfo;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rax+rbx*8+14h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rsi], xmm0 }
  _RCX = cm.mapEnts->clientTrigger.audioRvbPanInfo;
  result = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rbx*8+10h]
    vmaxss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
    vmovss  dword ptr [rdi], xmm0
  }
  return result;
}

/*
==============
CG_GetWallProximityVolume
==============
*/
bool CG_GetWallProximityVolume(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *inOutPoint, float *outMinVolume)
{
  __int64 v8; 
  char v20; 
  bool result; 
  float outDistance[4]; 

  _RDI = outMinVolume;
  v8 = triggerIdx;
  if ( !CG_GetDistanceFromTriggerWall(localClientNum, triggerIdx, inOutPoint, outDistance) )
    return 0;
  _RBX = 3 * v8;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RCX = cm.mapEnts->clientTrigger.audioRvbPanInfo;
  __asm
  {
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm0, dword ptr [rcx+rbx*8+14h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm3, xmm0 }
  _RCX = cm.mapEnts->clientTrigger.audioRvbPanInfo;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+rbx*8+10h]
    vmaxss  xmm2, xmm1, xmm7
    vucomiss xmm2, xmm7
  }
  if ( !v20 )
  {
    __asm
    {
      vsubss  xmm0, xmm2, [rsp+58h+outDistance]
      vdivss  xmm1, xmm0, xmm2
      vsubss  xmm2, xmm6, xmm1
      vmaxss  xmm0, xmm2, xmm7
      vminss  xmm1, xmm0, xmm6
      vmaxss  xmm6, xmm1, xmm3
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi], xmm6
    vmovaps xmm7, [rsp+58h+var_28]
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
CG_GetWeapReflDefId
==============
*/
__int64 CG_GetWeapReflDefId(const ZoneDef *zone)
{
  if ( s_soundTablePtr && zone )
    return zone->weapReflId;
  else
    return 0i64;
}

/*
==============
CG_IsFullyAudioOccluded
==============
*/
char CG_IsFullyAudioOccluded(const LocalClientNum_t localClientNum, const vec3_t *listener, const vec3_t *emitter, const SndAlias *alias)
{
  bool DoesLineSegmentIntersectTrigger; 
  const dvar_t *v8; 
  unsigned int outTriggerIndex; 
  vec3_t intersect; 

  DoesLineSegmentIntersectTrigger = CG_DoesLineSegmentIntersectTrigger(localClientNum, CLIENT_TRIGGER_AUDIO_OCCLUDER, listener, emitter, &outTriggerIndex, &intersect);
  v8 = DCONST_DVARINT_snd_fullOcclusionDebug;
  if ( DoesLineSegmentIntersectTrigger )
  {
    if ( !DCONST_DVARINT_snd_fullOcclusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_fullOcclusionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer > 0 )
      CG_AddFullOcclusionDebugLine(listener, emitter, &intersect, 1, alias);
    return 1;
  }
  else
  {
    if ( !DCONST_DVARINT_snd_fullOcclusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_fullOcclusionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer > 0 )
      CG_AddFullOcclusionDebugLine(listener, emitter, listener, 0, alias);
    return 0;
  }
}

/*
==============
CG_IsOverrideSet
==============
*/
_BOOL8 CG_IsOverrideSet(LocalClientNum_t localClientNum, CTAudOverrideType overrideType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = overrideType;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2149, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_audioZoneStates ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_audioZoneStates )\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 7 )
  {
    LODWORD(v7) = 7;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_audioZoneStates[v2].ctOverrideStack[v3].active;
}

/*
==============
CG_IsPlayerAndPointInSameInteriorZone
==============
*/
bool CG_IsPlayerAndPointInSameInteriorZone(const LocalClientNum_t localClientNum, const vec3_t *point)
{
  ZoneDef *v7; 
  bool v8; 
  ZoneDef *v9; 
  unsigned __int64 v10; 
  ZoneDef *zones; 
  const dvar_t *v12; 
  const char *zoneName; 
  bool AudioZoneAtPoint; 
  bool v15; 
  ZoneDef *v17; 
  ZoneDef *outZoneB; 
  float outLerp; 
  ZoneDef *outZoneA; 

  if ( !s_soundTablePtr || g_lastAudioZoneIndexA == 0x7FFFFFFF || g_lastAudioZoneIndexB == 0x7FFFFFFF )
    return 0;
  __asm
  {
    vmovss  xmm1, cs:g_lastAudioLerpVal
    vucomiss xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
  }
  if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
  {
    v7 = NULL;
    v8 = __CFADD__(s_soundTablePtr->zones, 200i64 * g_lastAudioZoneIndexB) || &s_soundTablePtr->zones[g_lastAudioZoneIndexB] == NULL;
    v9 = &s_soundTablePtr->zones[g_lastAudioZoneIndexB];
    __asm { vmovss  [rsp+68h+outLerp], xmm0 }
  }
  else
  {
    v10 = g_lastAudioZoneIndexA;
    __asm { vucomiss xmm1, xmm0 }
    if ( v15 )
    {
      v7 = NULL;
      v8 = __CFADD__(s_soundTablePtr->zones, v10 * 200) || &s_soundTablePtr->zones[v10] == NULL;
      v9 = &s_soundTablePtr->zones[v10];
      __asm { vmovss  [rsp+68h+outLerp], xmm0 }
    }
    else
    {
      zones = s_soundTablePtr->zones;
      __asm { vmovss  [rsp+68h+outLerp], xmm1 }
      v7 = &zones[g_lastAudioZoneIndexB];
      v8 = __CFADD__(zones, v10 * 200) || &zones[v10] == NULL;
      v9 = &zones[v10];
      __asm { vmovaps xmm0, xmm1 }
    }
  }
  __asm { vcomiss xmm0, cs:__real@3f000000 }
  outZoneA = v9;
  if ( !v8 )
    v9 = v7;
  outZoneB = v7;
  if ( !v9 || v9->exterior )
    return 0;
  v12 = DCONST_DVARBOOL_cg_default_zone_is_exterior;
  if ( !DCONST_DVARBOOL_cg_default_zone_is_exterior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_default_zone_is_exterior") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    zoneName = v9->zoneName;
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    if ( !I_strcmp(cls.m_activeGameMapName, zoneName) )
      return 0;
  }
  AudioZoneAtPoint = CG_FindAudioZoneAtPoint(localClientNum, point, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &outLerp);
  v15 = !AudioZoneAtPoint;
  if ( !AudioZoneAtPoint )
    return 0;
  __asm
  {
    vmovss  xmm0, [rsp+68h+outLerp]
    vcomiss xmm0, cs:__real@3f000000
  }
  v17 = outZoneA;
  if ( !v15 )
    v17 = outZoneB;
  return v17 == v9;
}

/*
==============
CG_IsPointInsideHull
==============
*/
__int64 CG_IsPointInsideHull(const ClientTriggerHull *thull, const TriggerSlab *slabs, const vec3_t *triggerSpacePoint)
{
  unsigned int slabCount; 
  int v5; 
  unsigned __int8 v6; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 result; 

  slabCount = thull->slabCount;
  v5 = 0;
  __asm { vmovaps [rsp+18h+var_18], xmm6 }
  v6 = 1;
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm6, cs:__real@3f800000
  }
  if ( slabCount >= 4 )
  {
    v9 = thull->firstSlab + 1;
    v10 = ((slabCount - 4) >> 2) + 1;
    v11 = v10;
    v5 = 4 * v10;
    do
    {
      _RAX = 5i64 * (v9 - 1);
      if ( v6 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rax*4+4]
          vmulss  xmm3, xmm0, dword ptr [r10+4]
          vmovss  xmm1, dword ptr [rdx+rax*4]
          vmulss  xmm2, xmm1, dword ptr [r10]
          vmovss  xmm0, dword ptr [rdx+rax*4+8]
          vmulss  xmm1, xmm0, dword ptr [r10+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vsubss  xmm3, xmm2, dword ptr [rdx+rax*4+0Ch]
          vaddss  xmm1, xmm6, dword ptr [rdx+rax*4+10h]
          vandps  xmm3, xmm3, xmm5
          vcomiss xmm3, xmm1
        }
      }
      v6 = 0;
      v9 += 4;
      --v11;
    }
    while ( v11 );
  }
  for ( ; v5 < (int)slabCount; ++v5 )
  {
    _RAX = 5i64 * (thull->firstSlab + v5);
    if ( v6 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rax*4+4]
        vmulss  xmm3, xmm0, dword ptr [r10+4]
        vmovss  xmm1, dword ptr [rdx+rax*4]
        vmulss  xmm2, xmm1, dword ptr [r10]
        vmovss  xmm0, dword ptr [rdx+rax*4+8]
        vmulss  xmm1, xmm0, dword ptr [r10+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vsubss  xmm3, xmm2, dword ptr [rdx+rax*4+0Ch]
        vaddss  xmm1, xmm6, dword ptr [rdx+rax*4+10h]
        vandps  xmm3, xmm3, xmm5
        vcomiss xmm3, xmm1
      }
    }
    v6 = 0;
  }
  result = v6;
  __asm { vmovaps xmm6, [rsp+18h+var_18] }
  return result;
}

/*
==============
CG_LerpAudio
==============
*/

void __fastcall CG_LerpAudio(LocalClientNum_t localClientNum, double lerp)
{
  LocalClientNum_t v5; 
  __int64 v7; 
  ZoneDef *zones; 
  __int64 reverbIndex; 
  __int64 v11; 
  int v13; 
  unsigned int v14; 
  int VolModCount; 
  __int64 v16; 
  int *v17; 
  __int64 v18; 
  const SoundTable *v20; 
  __int64 ctMixZoneA; 
  ZoneDef *v22; 
  int v23; 
  signed int v24; 
  MixDef *mixes; 
  __int64 volModIndex; 
  __int64 v27; 
  __int64 ctMixZoneB; 
  ZoneDef *v29; 
  __int64 v30; 
  int v31; 
  signed int v32; 
  MixDef *v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 i; 
  const SoundTable *v43; 
  ZoneDef *v44; 
  const char *ambientStream; 
  ZoneDef *v47; 
  __int16 ambientDefIndex; 
  __int16 v50; 
  bool v51; 
  unsigned int ctFullOcclusionZoneB; 
  const SoundTable *v53; 
  __int64 v54; 
  ZoneDef *v55; 
  unsigned int v56; 
  __int64 system; 
  __int64 v61; 
  int v63[384]; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v5 = localClientNum;
  __asm { vmovaps xmm0, xmm1; lerp }
  v7 = localClientNum;
  __asm { vmovaps xmm7, xmm1 }
  SND_SetEqLerp(*(float *)&_XMM0);
  if ( s_audioZoneStates[v7].ctReverbZoneA >= s_soundTablePtr->zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 591, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctReverbZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctReverbZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", s_audioZoneStates[v7].ctReverbZoneA, s_soundTablePtr->zoneCount) )
    __debugbreak();
  if ( s_audioZoneStates[v7].ctReverbZoneB >= s_soundTablePtr->zoneCount )
  {
    LODWORD(v61) = s_soundTablePtr->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctReverbZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctReverbZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctReverbZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
  }
  zones = s_soundTablePtr->zones;
  reverbIndex = zones[s_audioZoneStates[v7].ctReverbZoneA].reverbIndex;
  v11 = zones[s_audioZoneStates[v7].ctReverbZoneB].reverbIndex;
  if ( (_DWORD)reverbIndex != -1 && (_DWORD)v11 != -1 )
  {
    __asm { vmovaps xmm2, xmm7; lerp }
    SND_SetMainReverbBlended(&s_soundTablePtr->reverbs[reverbIndex], &s_soundTablePtr->reverbs[v11], *(float *)&_XMM2);
  }
  v13 = 0;
  v14 = 0;
  VolModCount = SND_GetVolModCount();
  v16 = VolModCount;
  if ( VolModCount > 0 )
  {
    v17 = v63;
    v18 = VolModCount;
    _RBX = 0i64;
    while ( v18 )
    {
      *v17++ = 0;
      --v18;
    }
    do
    {
      *(double *)&_XMM0 = SND_GetVolModDefaultValue(v14);
      __asm { vmovss  [rsp+rbx*4+6B8h+var_468], xmm0 }
      *(double *)&_XMM0 = SND_GetVolModDefaultValue(v14);
      __asm { vmovss  [rsp+rbx*4+6B8h+var_268], xmm0 }
      ++_RBX;
      ++v14;
    }
    while ( _RBX < v16 );
  }
  v20 = s_soundTablePtr;
  if ( s_audioZoneStates[v7].ctMixZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(v61) = s_soundTablePtr->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctMixZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctMixZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctMixZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
    v20 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v7].ctMixZoneB >= v20->zoneCount )
  {
    LODWORD(v61) = v20->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctMixZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctMixZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctMixZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
    v20 = s_soundTablePtr;
  }
  ctMixZoneA = s_audioZoneStates[v7].ctMixZoneA;
  v22 = v20->zones;
  if ( v22[ctMixZoneA].startMixIndex != -1 )
  {
    v23 = 0;
    if ( v22[ctMixZoneA].numMix > 0 )
    {
      do
      {
        v24 = v23 + v22[(unsigned int)ctMixZoneA].startMixIndex;
        if ( v24 >= v20->mixCount )
        {
          LODWORD(v61) = v20->mixCount;
          LODWORD(system) = v23 + v22[(unsigned int)ctMixZoneA].startMixIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->mixCount )", "idx doesn't index s_soundTablePtr->mixCount\n\t%i not in [0, %i)", system, v61) )
            __debugbreak();
          v20 = s_soundTablePtr;
        }
        mixes = v20->mixes;
        ++v23;
        volModIndex = mixes[v24].volModIndex;
        v22 = v20->zones;
        v63[volModIndex + 128] = LODWORD(mixes[v24].volume);
        v27 = s_audioZoneStates[v7].ctMixZoneA;
        LODWORD(ctMixZoneA) = s_audioZoneStates[v7].ctMixZoneA;
        v63[volModIndex] = 1;
      }
      while ( v23 < v22[v27].numMix );
      v5 = localClientNum;
    }
  }
  ctMixZoneB = s_audioZoneStates[v7].ctMixZoneB;
  v29 = v20->zones;
  LODWORD(v30) = s_audioZoneStates[v7].ctMixZoneB;
  if ( v29[ctMixZoneB].startMixIndex != -1 )
  {
    v31 = 0;
    if ( v29[ctMixZoneB].numMix > 0 )
    {
      do
      {
        v32 = v31 + v29[(unsigned int)ctMixZoneB].startMixIndex;
        if ( v32 >= v20->mixCount )
        {
          LODWORD(v61) = v20->mixCount;
          LODWORD(system) = v31 + v29[(unsigned int)ctMixZoneB].startMixIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 631, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->mixCount )", "idx doesn't index s_soundTablePtr->mixCount\n\t%i not in [0, %i)", system, v61) )
            __debugbreak();
          v20 = s_soundTablePtr;
        }
        v33 = v20->mixes;
        ++v31;
        v30 = s_audioZoneStates[v7].ctMixZoneB;
        LODWORD(ctMixZoneB) = s_audioZoneStates[v7].ctMixZoneB;
        v34 = v33[v32].volModIndex;
        v29 = v20->zones;
        v63[v34 + 256] = LODWORD(v33[v32].volume);
        v63[v34] = 1;
      }
      while ( v31 < v29[v30].numMix );
      v5 = localClientNum;
    }
  }
  v35 = 0;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( v16 > 0 )
  {
    for ( i = 0i64; i < v16; ++i )
    {
      if ( v63[i] )
      {
        __asm
        {
          vsubss  xmm0, xmm8, xmm7
          vmulss  xmm1, xmm0, [rsp+rdi*4+6B8h+var_468]
          vmulss  xmm0, xmm7, [rsp+rdi*4+6B8h+var_268]
          vaddss  xmm0, xmm1, xmm0
        }
      }
      else
      {
        *(double *)&_XMM0 = SND_GetVolModDefaultValue(v35);
      }
      __asm { vmovaps xmm1, xmm0; value }
      SND_SetVolModValue(v35++, *(float *)&_XMM1, 0);
    }
    LODWORD(v30) = s_audioZoneStates[v7].ctMixZoneB;
    v20 = s_soundTablePtr;
  }
  __asm { vmovaps xmm2, xmm7; lerp }
  SND_SubmixSetSlotsFromZones(v20->zones[s_audioZoneStates[v7].ctMixZoneA].duck, v20->zones[(unsigned int)v30].duck, *(const float *)&_XMM2);
  v43 = s_soundTablePtr;
  if ( s_audioZoneStates[v7].ctAmbientZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(v61) = s_soundTablePtr->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctAmbientZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 671, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
    v43 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v7].ctAmbientZoneB >= v43->zoneCount )
  {
    LODWORD(v61) = v43->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctAmbientZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 672, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
    v43 = s_soundTablePtr;
  }
  v44 = v43->zones;
  ambientStream = v44[s_audioZoneStates[v7].ctAmbientZoneA].ambientStream;
  if ( ambientStream || v44[s_audioZoneStates[v7].ctAmbientZoneB].ambientStream )
  {
    __asm { vmovaps xmm3, xmm7; lerp }
    SND_PlayAmbientAliasBlended(v5, ambientStream, v44[s_audioZoneStates[v7].ctAmbientZoneB].ambientStream, *(float *)&_XMM3, 0, SASYS_CGAME);
    v43 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v7].ctAmbientEventZoneA >= v43->zoneCount )
  {
    LODWORD(v61) = v43->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctAmbientEventZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientEventZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientEventZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
    v43 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v7].ctAmbientEventZoneB >= v43->zoneCount )
  {
    LODWORD(v61) = v43->zoneCount;
    LODWORD(system) = s_audioZoneStates[v7].ctAmbientEventZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientEventZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientEventZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v61) )
      __debugbreak();
    v43 = s_soundTablePtr;
  }
  v47 = v43->zones;
  ambientDefIndex = v47[s_audioZoneStates[v7].ctAmbientEventZoneA].ambientDefIndex;
  if ( ambientDefIndex == -1 )
  {
    v50 = v47[s_audioZoneStates[v7].ctAmbientEventZoneB].ambientDefIndex;
    v51 = v50 != -1;
    if ( v50 != -1 )
    {
      __asm { vcomiss xmm7, cs:__real@3f000000 }
      goto LABEL_70;
    }
  }
  else
  {
    __asm
    {
      vcomiss xmm7, cs:__real@3f000000
      vsubss  xmm3, xmm8, xmm7
    }
    SND_SetAmbientEvents(v5, v43, &v43->ambientDefs[ambientDefIndex], *(float *)&_XMM3);
  }
  __asm { vcomiss xmm7, cs:__real@3f000000 }
  if ( !v51 )
  {
    ctFullOcclusionZoneB = s_audioZoneStates[v7].ctFullOcclusionZoneB;
    goto LABEL_72;
  }
LABEL_70:
  ctFullOcclusionZoneB = s_audioZoneStates[v7].ctFullOcclusionZoneA;
LABEL_72:
  SND_InitFullOcclusionFlags();
  v53 = s_soundTablePtr;
  v54 = ctFullOcclusionZoneB;
  v55 = s_soundTablePtr->zones;
  if ( v55[v54].startFullOccIndex != -1 && v55[v54].numDisableFullOcc > 0 )
  {
    do
    {
      v56 = v13 + v55[v54].startFullOccIndex;
      if ( v56 >= v53->fullOcclusionDefCount )
      {
        LODWORD(v61) = v53->fullOcclusionDefCount;
        LODWORD(system) = v13 + v55[v54].startFullOccIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 717, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->fullOcclusionDefCount )", "idx doesn't index s_soundTablePtr->fullOcclusionDefCount\n\t%i not in [0, %i)", system, v61) )
          __debugbreak();
        v53 = s_soundTablePtr;
      }
      SND_DisableFullOcclusionForEntChannel(v53->fullOcclusionDefs[v56].entChannelIdx);
      v53 = s_soundTablePtr;
      ++v13;
      v55 = s_soundTablePtr->zones;
    }
    while ( v13 < v55[v54].numDisableFullOcc );
  }
  _R11 = &v64;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_OcclusionSettingsMatch
==============
*/
bool CG_OcclusionSettingsMatch(const LocalClientNum_t localClientNum, const vec3_t *emitterPos)
{
  ZoneDef *v5; 
  ZoneDef *v6; 
  char v8; 
  __int64 v9; 
  ZoneDef *zones; 
  ZoneDef *outZoneB; 
  float outLerp; 
  ZoneDef *outZoneA; 

  if ( !s_soundTablePtr || g_lastAudioZoneIndexA == 0x7FFFFFFF || g_lastAudioZoneIndexB == 0x7FFFFFFF )
    return 0;
  __asm
  {
    vmovss  xmm0, cs:g_lastAudioLerpVal
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    v5 = &s_soundTablePtr->zones[g_lastAudioZoneIndexB];
    v6 = NULL;
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
    v9 = g_lastAudioZoneIndexA;
    __asm { vucomiss xmm0, xmm1 }
    if ( v8 )
    {
      v5 = &s_soundTablePtr->zones[v9];
      v6 = NULL;
      __asm { vmovss  [rsp+48h+arg_10], xmm1 }
      goto LABEL_10;
    }
    zones = s_soundTablePtr->zones;
    v5 = &zones[v9];
    v6 = &zones[g_lastAudioZoneIndexB];
  }
  __asm { vmovss  [rsp+48h+arg_10], xmm0 }
LABEL_10:
  if ( !CG_FindAudioZoneAtPoint(localClientNum, emitterPos, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &outLerp) )
    return 0;
  if ( v5 )
  {
    if ( !outZoneA || v5->startOcclusionIndex != outZoneA->startOcclusionIndex )
      return 0;
  }
  else if ( outZoneA )
  {
    return 0;
  }
  if ( !v6 )
    return !outZoneB;
  if ( !outZoneB )
    return 0;
  return v6->startOcclusionIndex == outZoneB->startOcclusionIndex;
}

/*
==============
CG_ResetAudioTrigger
==============
*/
void CG_ResetAudioTrigger(const unsigned int trigIndex)
{
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v1 = trigIndex;
  if ( trigIndex >= 0x4000 )
  {
    v6 = 0x4000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2935, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( (16*1024) )", "trigIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", trigIndex, v6) )
      __debugbreak();
  }
  v2 = (cm.mapEnts->clientTrigger.trigger.models[v1].flags & 0x40) == 0;
  if ( (unsigned int)v1 >= 0x4000 )
  {
    LODWORD(v5) = 0x4000;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2928, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( (16*1024) )", "trigIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  g_audioTriggerDisabled[v1] = !v2;
}

/*
==============
CG_RestoreAudioTriggerStates
==============
*/
void CG_RestoreAudioTriggerStates(MemoryFile *memFile)
{
  int v4; 
  unsigned int v6; 
  char v7[4]; 
  char v8[8]; 
  char v9[72]; 
  __int16 p; 
  __int16 v11; 
  unsigned int v12; 

  memset_0(s_triggerStateTo, 0, sizeof(s_triggerStateTo));
  memset_0(s_triggerStateFrom, 0, sizeof(s_triggerStateFrom));
  memset_0(s_triggerStateLerp, 0, sizeof(s_triggerStateLerp));
  memset_0(s_triggerStateFadeTime, 0, sizeof(s_triggerStateFadeTime));
  MemFile_ReadData(memFile, 2ui64, &p);
  LOWORD(_RBX) = p;
  v4 = 0;
  if ( p != -1 )
  {
    do
    {
      if ( v4 >= 16385 )
        break;
      if ( (unsigned __int16)_RBX >= 0x4001u )
      {
        MemFile_ReadData(memFile, 4ui64, v7);
        MemFile_ReadData(memFile, 4ui64, v8);
        MemFile_ReadData(memFile, 8ui64, v9);
        MemFile_ReadFloat(memFile);
        MemFile_ReadData(memFile, 2ui64, &v11);
        LOWORD(_RBX) = v11;
      }
      else
      {
        MemFile_ReadData(memFile, 4ui64, &v12);
        _RBX = (unsigned __int16)_RBX;
        s_triggerStateTo[(unsigned __int16)_RBX] = v12;
        MemFile_ReadData(memFile, 4ui64, &v6);
        s_triggerStateFrom[(unsigned __int16)_RBX] = v6;
        MemFile_ReadData(memFile, 8ui64, &s_triggerStateLerp[(unsigned __int16)_RBX]);
        *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
        _RAX = s_triggerStateFadeTime;
        __asm { vmovss  dword ptr [rax+rbx*4], xmm0 }
        MemFile_ReadData(memFile, 2ui64, &p);
        LOWORD(_RBX) = p;
      }
      ++v4;
    }
    while ( (_WORD)_RBX != 0xFFFF );
  }
  MemFile_ReadData(memFile, 0x1D8ui64, s_audioZoneStates);
  MemFile_ReadData(memFile, 0x4000ui64, g_audioTriggerDisabled);
}

/*
==============
CG_SaveAudioTriggerStates
==============
*/
void CG_SaveAudioTriggerStates(MemoryFile *memFile)
{
  unsigned int i; 
  unsigned int p; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _R14 = 0x140000000ui64;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  for ( i = 0; i < 0x4001; ++i )
  {
    _RSI = (int)i;
    if ( s_triggerStateTo[i] )
      goto LABEL_4;
    __asm { vcomiss xmm6, dword ptr rva s_triggerStateLerp.current[r14+rsi*8] }
    if ( s_triggerStateTo[i] )
    {
LABEL_4:
      LOWORD(p) = i;
      MemFile_WriteData(memFile, 2ui64, &p);
      p = s_triggerStateTo[i];
      MemFile_WriteData(memFile, 4ui64, &p);
      p = s_triggerStateFrom[i];
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 8ui64, &s_triggerStateLerp[i]);
      __asm { vmovss  xmm1, rva s_triggerStateFadeTime[r14+rsi*4]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    }
  }
  LOWORD(p) = -1;
  MemFile_WriteData(memFile, 2ui64, &p);
  MemFile_WriteData(memFile, 0x1D8ui64, s_audioZoneStates);
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  MemFile_WriteData(memFile, 0x4000ui64, g_audioTriggerDisabled);
}

/*
==============
CG_SetAudioLerpOverride
==============
*/
void CG_SetAudioLerpOverride(LocalClientNum_t localClientNum, const char *p_zoneNameA, const char *p_zoneNameB, CTAudOverrideType overrideType, float lerp, int overRideFlags)
{
  int v7; 
  __int64 v8; 
  CTAudState *v9; 
  int v12; 
  cg_t *LocalClientGlobals; 
  int v14; 
  cg_t *v15; 
  __int64 v16; 
  CTAudOverride *v17; 
  unsigned int v18; 
  __int64 v20; 
  const char *v21; 
  const char *zoneName; 
  signed __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  const char *v30; 
  const char *v31; 
  signed __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  const char *v38; 
  CTAudOverride *v42; 
  CTAudState *v43; 
  CTAudOverride *v44; 
  cg_t *v45; 

  v7 = 0x7FFFFFFF;
  v8 = overrideType;
  v9 = &s_audioZoneStates[localClientNum];
  v43 = v9;
  v12 = 0x7FFFFFFF;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v14 = 6;
  v45 = LocalClientGlobals;
  v15 = LocalClientGlobals;
  v16 = 6i64;
  v17 = &v9->ctOverrideStack[6];
  while ( 1 )
  {
    v18 = 0;
    if ( v17->active )
      break;
    --v14;
    --v17;
    if ( --v16 < 0 )
    {
      v42 = NULL;
      goto LABEL_6;
    }
  }
  v42 = &v9->ctOverrideStack[v14];
LABEL_6:
  if ( (unsigned int)v8 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v8, 7) )
    __debugbreak();
  _RBX = &v9->ctOverrideStack[v8];
  v44 = _RBX;
  if ( !I_stricmp(p_zoneNameA, "<current>") )
  {
    v7 = g_lastAudioZoneIndexA;
    if ( g_lastAudioZoneIndexA == 0x7FFFFFFF )
      v7 = SND_LookupZoneIndex(0x4000);
  }
  if ( !I_stricmp(p_zoneNameB, "<current>") )
  {
    v12 = g_lastAudioZoneIndexB;
    if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
      v12 = SND_LookupZoneIndex(0x4000);
  }
  if ( s_soundTablePtr->zoneCount )
  {
    do
    {
      if ( v7 == 0x7FFFFFFF )
      {
        v20 = 0x7FFFFFFFi64;
        v21 = p_zoneNameA;
        zoneName = s_soundTablePtr->zones[v18].zoneName;
        if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !p_zoneNameA && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v23 = zoneName - p_zoneNameA;
        do
        {
          v24 = (unsigned __int8)v21[v23];
          v25 = v20;
          v26 = *(unsigned __int8 *)v21++;
          --v20;
          if ( !v25 )
            break;
          if ( v24 != v26 )
          {
            v27 = v24 + 32;
            if ( (unsigned int)(v24 - 65) > 0x19 )
              v27 = v24;
            v24 = v27;
            v28 = v26 + 32;
            if ( (unsigned int)(v26 - 65) > 0x19 )
              v28 = v26;
            if ( v24 != v28 )
              goto LABEL_33;
          }
        }
        while ( v24 );
        v7 = v18;
      }
LABEL_33:
      if ( v12 == 0x7FFFFFFF )
      {
        v29 = 0x7FFFFFFFi64;
        v30 = p_zoneNameB;
        v31 = s_soundTablePtr->zones[v18].zoneName;
        if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !p_zoneNameB && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v32 = v31 - p_zoneNameB;
        do
        {
          v33 = (unsigned __int8)v30[v32];
          v34 = v29;
          v35 = *(unsigned __int8 *)v30++;
          --v29;
          if ( !v34 )
            break;
          if ( v33 != v35 )
          {
            v36 = v33 + 32;
            if ( (unsigned int)(v33 - 65) > 0x19 )
              v36 = v33;
            v33 = v36;
            v37 = v35 + 32;
            if ( (unsigned int)(v35 - 65) > 0x19 )
              v37 = v35;
            if ( v33 != v37 )
              goto LABEL_50;
          }
        }
        while ( v33 );
        v12 = v18;
      }
LABEL_50:
      ++v18;
    }
    while ( v18 < s_soundTablePtr->zoneCount );
    v9 = v43;
    _RBX = v44;
    v15 = v45;
  }
  if ( v7 == 0x7FFFFFFF )
  {
    v38 = p_zoneNameA;
LABEL_54:
    Com_PrintError(9, "CG_SetAudioLerpOverride: Audio zone not found: %s\n", v38);
    return;
  }
  if ( v12 == 0x7FFFFFFF )
  {
    v38 = p_zoneNameB;
    goto LABEL_54;
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm0, [rsp+88h+lerp]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  _RBX->scriptAudioZoneOverride = v7;
  _RBX->scriptAudioZoneOverrideB = v12;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RBX->scriptAudioZoneOverrideFlags = overRideFlags;
  _RBX->active = 1;
  __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
  v9->scriptPrevAudioZoneOverride = v42->scriptAudioZoneOverride;
  v9->scriptAudioZoneFadeStartTime = v15->time;
  v9->scriptAudioZoneFadeTargetTime = v15->time;
  if ( v42 == _RBX )
    v9->scriptPrevAudioZoneOverride = 0x7FFFFFFF;
}

/*
==============
CG_SetAudioOverride
==============
*/

void __fastcall CG_SetAudioOverride(LocalClientNum_t localClientNum, const char *p_name, CTAudOverrideType overrideType, double fadeTime, int overRideFlags)
{
  __int64 v7; 
  __int64 v8; 
  const SoundTable *v10; 
  CTAudOverride *v11; 
  int v12; 
  CTAudState *v14; 
  __int64 v15; 
  cg_t *LocalClientGlobals; 
  int v17; 
  CTAudOverride *v18; 
  __int64 v19; 
  cg_t *v20; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  __int64 v26; 
  __int64 v27; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  v7 = overrideType;
  v8 = localClientNum;
  __asm { vmovaps xmm6, xmm3 }
  if ( p_name && *p_name && (v10 = s_soundTablePtr) != NULL && (v11 = NULL, v12 = 0, s_soundTablePtr->zoneCount) )
  {
    while ( I_stricmp(v10->zones[v12].zoneName, p_name) )
    {
      v10 = s_soundTablePtr;
      if ( ++v12 >= s_soundTablePtr->zoneCount )
        goto LABEL_7;
    }
    v14 = &s_audioZoneStates[v8];
    v15 = v8;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    v17 = 6;
    v18 = &v14->ctOverrideStack[6];
    v19 = 6i64;
    v20 = LocalClientGlobals;
    while ( !v18->active )
    {
      --v17;
      --v18;
      if ( --v19 < 0 )
        goto LABEL_14;
    }
    v11 = &v14->ctOverrideStack[v17];
LABEL_14:
    if ( (unsigned int)v7 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v7, 7) )
      __debugbreak();
    v21 = v7;
    if ( v11 )
    {
      v14->scriptPrevAudioZoneOverride = v11->scriptAudioZoneOverride;
    }
    else
    {
      v22 = 0x4000;
      if ( g_playerCurrentAudioTrigger[v15] != 0x4000 )
        v22 = g_playerCurrentAudioTrigger[v15];
      v23 = SND_LookupZoneIndex(v22);
      v14->scriptPrevAudioZoneOverride = v23;
      if ( v23 >= s_soundTablePtr->zoneCount )
      {
        LODWORD(v27) = s_soundTablePtr->zoneCount;
        LODWORD(v26) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2129, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->scriptPrevAudioZoneOverride ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->scriptPrevAudioZoneOverride doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
    }
    __asm { vmulss  xmm0, xmm6, cs:__real@c47a0000 }
    v14->scriptAudioZoneFadeStartTime = v20->time;
    __asm { vcvttss2si eax, xmm0 }
    v14->scriptAudioZoneFadeTargetTime = v20->time - _EAX;
    v14->ctOverrideStack[v21].scriptAudioZoneOverride = v12;
    v14->ctOverrideStack[v21].scriptAudioZoneOverrideFlags = overRideFlags;
    v14->ctOverrideStack[v21].scriptAudioZoneOverrideB = 0x7FFFFFFF;
    v14->ctOverrideStack[v21].active = 1;
  }
  else
  {
LABEL_7:
    Com_PrintError(9, "CG_SetAudioOverride: Audio zone not found: %s\n", p_name);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
CG_SetAudioTriggerState
==============
*/

void __fastcall CG_SetAudioTriggerState(const unsigned int stateId, const unsigned int state, double fadeTime)
{
  MapEnts *mapEnts; 
  __int64 v11; 
  char *v12; 
  char v13; 
  int v14; 
  char v15; 

  __asm
  {
    vmovaps [rsp+48h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( stateId == SND_GetDefaultHash() )
  {
    __asm { vmovaps xmm1, xmm6; time }
    s_triggerStateFrom[0x4000] = s_triggerStateTo[0x4000];
    s_triggerStateTo[0x4000] = state;
    SND_SetTimeLerp(&s_triggerStateLerp[0x4000], *(float *)&_XMM1);
    __asm { vmovss  cs:s_triggerStateFadeTime+10000h, xmm6 }
  }
  mapEnts = cm.mapEnts;
  _RBX = 0i64;
  if ( cm.mapEnts->clientTrigger.trigger.count )
  {
    _R14 = 0x140000000ui64;
    do
    {
      v11 = mapEnts->clientTrigger.audioStateIds[_RBX];
      if ( (_DWORD)v11 != -1 )
      {
        v12 = &mapEnts->clientTrigger.triggerString[v11];
        if ( v12 && (v13 = *v12) != 0 )
        {
          v14 = 5381;
          do
          {
            ++v12;
            v15 = v13 | 0x20;
            if ( (unsigned int)(v13 - 65) >= 0x1A )
              v15 = v13;
            v14 = 65599 * v14 + v15;
            v13 = *v12;
          }
          while ( *v12 );
          if ( !v14 )
            v14 = 1;
        }
        else
        {
          v14 = 0;
        }
        if ( v14 == stateId )
        {
          __asm { vmovaps xmm1, xmm6; time }
          s_triggerStateFrom[_RBX] = s_triggerStateTo[_RBX];
          s_triggerStateTo[_RBX] = state;
          SND_SetTimeLerp(&s_triggerStateLerp[_RBX], *(float *)&_XMM1);
          mapEnts = cm.mapEnts;
          __asm { vmovss  rva s_triggerStateFadeTime[r14+rbx*4], xmm6 }
        }
      }
      _RBX = (unsigned int)(_RBX + 1);
    }
    while ( (unsigned int)_RBX < mapEnts->clientTrigger.trigger.count );
  }
  __asm { vmovaps xmm6, [rsp+48h+var_28] }
}

/*
==============
CG_SetTimeScaleByPreset
==============
*/
char CG_SetTimeScaleByPreset(const char *presetName)
{
  const SoundTable *v1; 
  char v2; 
  unsigned int v4; 
  unsigned int i; 

  v1 = s_soundTablePtr;
  v2 = 0;
  if ( !s_soundTablePtr )
    return 0;
  v4 = 0;
  for ( i = SND_HashName(presetName); v4 < v1->timeScaleSettingCount; ++v4 )
  {
    _RCX = v1->timeScaleSettings;
    _RAX = v4;
    if ( _RCX[_RAX].presetName == i )
    {
      __asm { vmovss  xmm1, dword ptr [rax+rcx+0Ch]; lerp }
      SND_SetTimeScaleLerp(_RCX[_RAX].entChannelIdx, *(const float *)&_XMM1);
      v1 = s_soundTablePtr;
      v2 = 1;
    }
  }
  return v2;
}

/*
==============
CG_ShouldAddOcclusionDebugLines
==============
*/
bool CG_ShouldAddOcclusionDebugLines(const SndAlias *alias)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  const char *string; 
  char v5; 
  char *v6; 
  char dest[128]; 

  v1 = DCONST_DVARINT_snd_fullOcclusionDebug;
  if ( !DCONST_DVARINT_snd_fullOcclusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_fullOcclusionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer != 1 )
    return 0;
  v3 = DCONST_DVARSTR_snd_occlusionDebugAlias;
  if ( !DCONST_DVARSTR_snd_occlusionDebugAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebugAlias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  string = v3->current.string;
  memset_0(dest, 0, sizeof(dest));
  v5 = 0;
  if ( string )
  {
    if ( alias )
    {
      Core_strcpy(dest, 0x80ui64, string);
      v6 = strtok(dest, "%");
      if ( v6 )
      {
        while ( !*v6 || !strstr_0(alias->aliasName, v6) )
        {
          v6 = strtok(NULL, "%");
          if ( !v6 )
            return !dest[0] || v5;
        }
        v5 = 1;
      }
    }
  }
  return !dest[0] || v5;
}

/*
==============
CG_ShutdownClientSideTriggersAudio
==============
*/

void __fastcall CG_ShutdownClientSideTriggersAudio(double _XMM0_8, __int64 a2, double _XMM2_8)
{
  signed int v3; 
  int VolModCount; 

  v3 = 0;
  g_lastAudioZoneIndexA = 0x7FFFFFFF;
  s_soundTablePtr = NULL;
  g_lastOverRideFlags = 0;
  g_lastAudioZoneIndexB = 0x7FFFFFFF;
  if ( SND_Active() )
  {
    __asm { vxorps  xmm2, xmm2, xmm2; lerp }
    SND_SubmixSetSlotsFromZones(0, 0, *(const float *)&_XMM2);
    VolModCount = SND_GetVolModCount();
    if ( VolModCount > 0 )
    {
      do
      {
        _XMM0_8 = SND_GetVolModDefaultValue(v3);
        __asm { vmovaps xmm1, xmm0; value }
        SND_SetVolModValue(v3++, *(float *)&_XMM1, 0);
      }
      while ( v3 < VolModCount );
    }
  }
}

/*
==============
CG_StartClientSideTriggersAudio
==============
*/

void __fastcall CG_StartClientSideTriggersAudio(LocalClientNum_t localClientNum, const char *mapname, __int64 a3, double _XMM3_8)
{
  TimeLerp *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  const char **v13; 
  __int64 v14; 
  const char *v15; 
  char v16; 
  unsigned int v17; 
  char v18; 
  unsigned int zoneCount; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned int v25; 
  int *p_scriptAudioZoneOverrideB; 
  unsigned int v28; 

  v6 = s_triggerStateLerp;
  v7 = localClientNum;
  g_audioTriggersFound = 0;
  v8 = 0;
  v9 = 0i64;
  do
  {
    ++v8;
    *v6 = (TimeLerp)1065353216i64;
    s_triggerStateFadeTime[v9] = 0.0;
    ++v6;
    s_triggerStateFrom[v9] = 0;
    s_triggerStateTo[v9] = 0;
    s_audioZoneLookup[v9] = 0x7FFFFFFF;
    s_audioNPCZoneLookup[v9++] = 0x7FFFFFFF;
  }
  while ( v8 < 0x4001 );
  v11 = 0i64;
  v12 = 0i64;
  do
  {
    if ( v12 >= 678 )
    {
      j___report_rangecheckfailure(v11);
      JUMPOUT(0x141D61C9Ei64);
    }
    g_adsrBaseWeaponIdxLookup[v12] = 0;
    v11 = (unsigned int)(v11 + 1);
    ++v12;
  }
  while ( (unsigned int)v11 < 0x2A6 );
  v13 = g_missingAdsrWeaponNameLookup;
  v14 = 16i64;
  do
  {
    *v13 = NULL;
    v13[1] = NULL;
    v13[2] = NULL;
    v13 += 8;
    *(v13 - 5) = NULL;
    *(v13 - 4) = NULL;
    *(v13 - 3) = NULL;
    *(v13 - 2) = NULL;
    *(v13 - 1) = NULL;
    --v14;
  }
  while ( v14 );
  g_freeMissingWeaponIndex = 0;
  v15 = mapname;
  if ( mapname && (v16 = *mapname) != 0 )
  {
    v17 = 5381;
    do
    {
      ++v15;
      v18 = v16 | 0x20;
      if ( (unsigned int)(v16 - 65) >= 0x1A )
        v18 = v16;
      v17 = 65599 * v17 + v18;
      v16 = *v15;
    }
    while ( *v15 );
    if ( !v17 )
      v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  s_soundTablePtr = SND_GetSoundTableById(v17);
  SND_DeactivateAllEq(0);
  SND_DeactivateAllEq(1);
  SND_ClearAllOcclusionSettings();
  __asm { vxorps  xmm0, xmm0, xmm0; lerp }
  SND_SetEqLerp(*(float *)&_XMM0);
  g_lastAudioZoneIndexA = 0x7FFFFFFF;
  g_lastAudioZoneIndexB = 0x7FFFFFFF;
  s_audioZoneLookup[0x4000] = 0x7FFFFFFF;
  s_audioNPCZoneLookup[0x4000] = 0x7FFFFFFF;
  g_audTrigWeapReflZoneA = 0x7FFFFFFF;
  g_audTrigWeapReflZoneB = 0x7FFFFFFF;
  if ( !s_soundTablePtr )
  {
LABEL_30:
    Com_PrintError(9, "Could not find a default client trigger audio zone for %s\n", mapname);
    goto LABEL_31;
  }
  zoneCount = s_soundTablePtr->zoneCount;
  v21 = 0;
  if ( !zoneCount )
    goto LABEL_24;
  while ( s_soundTablePtr->zones[v21].id != v17 )
  {
    if ( ++v21 >= zoneCount )
      goto LABEL_24;
  }
  s_audioZoneLookup[0x4000] = v21;
  s_audioNPCZoneLookup[0x4000] = v21;
  if ( v21 == 0x7FFFFFFF )
  {
LABEL_24:
    v22 = 0;
    if ( !zoneCount )
      goto LABEL_30;
    while ( s_soundTablePtr->zones[v22].id != SND_GetDefaultHash() )
    {
      if ( ++v22 >= s_soundTablePtr->zoneCount )
      {
        v22 = s_audioZoneLookup[0x4000];
        goto LABEL_29;
      }
    }
    s_audioZoneLookup[0x4000] = v22;
    s_audioNPCZoneLookup[0x4000] = v22;
LABEL_29:
    if ( v22 == 0x7FFFFFFF )
      goto LABEL_30;
  }
LABEL_31:
  if ( !DB_IsDoingSPHotLoad() )
  {
    if ( s_soundTablePtr )
    {
      if ( s_audioZoneLookup[0x4000] == 0x7FFFFFFF )
      {
        v23 = s_audioZoneLookup[0x4000];
        v24 = s_audioZoneLookup[0x4000];
      }
      else
      {
        v25 = s_soundTablePtr->zoneCount;
        v24 = s_audioZoneLookup[0x4000];
        if ( s_audioZoneLookup[0x4000] >= v25 )
        {
LABEL_39:
          v24 = s_audioZoneLookup[0x4000];
        }
        else
        {
          while ( s_soundTablePtr->zones[v24].stateId != s_triggerStateTo[0x4000] )
          {
            if ( ++v24 >= v25 )
              goto LABEL_39;
          }
        }
        v23 = s_audioZoneLookup[0x4000];
        if ( s_audioZoneLookup[0x4000] >= v25 )
        {
LABEL_43:
          v23 = s_audioZoneLookup[0x4000];
        }
        else
        {
          while ( s_soundTablePtr->zones[v23].stateId != s_triggerStateTo[0x4000] )
          {
            if ( ++v23 >= v25 )
              goto LABEL_43;
          }
        }
      }
    }
    else
    {
      v23 = 0x7FFFFFFF;
      v24 = 0x7FFFFFFF;
    }
    __asm { vxorps  xmm3, xmm3, xmm3; lerp }
    CG_TriggerAudio(localClientNum, v23, v24, *(float *)&_XMM3, 2047);
  }
  p_scriptAudioZoneOverrideB = &s_audioZoneStates[v7].ctOverrideStack[0].scriptAudioZoneOverrideB;
  v28 = 0;
  do
  {
    v28 += 7;
    *((_BYTE *)p_scriptAudioZoneOverrideB - 8) = 0;
    *(p_scriptAudioZoneOverrideB - 1) = 0x7FFFFFFF;
    *(_QWORD *)p_scriptAudioZoneOverrideB = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[2] = 0;
    *((_BYTE *)p_scriptAudioZoneOverrideB + 12) = 0;
    p_scriptAudioZoneOverrideB[4] = 0x7FFFFFFF;
    *(_QWORD *)(p_scriptAudioZoneOverrideB + 5) = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[7] = 0;
    *((_BYTE *)p_scriptAudioZoneOverrideB + 32) = 0;
    p_scriptAudioZoneOverrideB[9] = 0x7FFFFFFF;
    *((_QWORD *)p_scriptAudioZoneOverrideB + 5) = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[12] = 0;
    *((_BYTE *)p_scriptAudioZoneOverrideB + 52) = 0;
    p_scriptAudioZoneOverrideB[14] = 0x7FFFFFFF;
    *(_QWORD *)(p_scriptAudioZoneOverrideB + 15) = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[17] = 0;
    *((_BYTE *)p_scriptAudioZoneOverrideB + 72) = 0;
    p_scriptAudioZoneOverrideB[19] = 0x7FFFFFFF;
    *((_QWORD *)p_scriptAudioZoneOverrideB + 10) = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[22] = 0;
    *((_BYTE *)p_scriptAudioZoneOverrideB + 92) = 0;
    p_scriptAudioZoneOverrideB[24] = 0x7FFFFFFF;
    *(_QWORD *)(p_scriptAudioZoneOverrideB + 25) = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[27] = 0;
    *((_BYTE *)p_scriptAudioZoneOverrideB + 112) = 0;
    p_scriptAudioZoneOverrideB[29] = 0x7FFFFFFF;
    *((_QWORD *)p_scriptAudioZoneOverrideB + 15) = 0x7FFFFFFFi64;
    p_scriptAudioZoneOverrideB[32] = 0;
    p_scriptAudioZoneOverrideB += 35;
  }
  while ( v28 < 7 );
  *(_QWORD *)&s_audioZoneStates[v7].scriptPrevAudioZoneOverride = 0x7FFFFFFFi64;
  s_audioZoneStates[v7].scriptAudioZoneFadeStartTime = 0;
  g_playerCurrentAudioTrigger[0] = 0x4000;
  g_playerCurrentAudioBlendTrigger[0] = 0x4000;
  g_playerCurrentPropagationTrigger[0] = 0x4000;
  g_playerCurrentSoundBankTrigger[0] = 0x4000;
  g_playerCurrentAudioTrigger[1] = 0x4000;
  g_playerCurrentAudioBlendTrigger[1] = 0x4000;
  g_playerCurrentPropagationTrigger[1] = 0x4000;
  g_playerCurrentSoundBankTrigger[1] = 0x4000;
  CG_TriggerAudio_PrecacheBaseWeapons();
  g_audTrigFadeZoneA = 0x7FFFFFFF;
  g_audTrigFadeZoneB = 0x7FFFFFFF;
  g_audTrigPrevFadeTrigger = 0x4000;
  memset_0(g_audioTriggerDisabled, 0, 0x4000ui64);
}

/*
==============
CG_StartClientSideTriggersAudioPropagationPortal
==============
*/
void CG_StartClientSideTriggersAudioPropagationPortal(unsigned int triggerIter)
{
  __int64 v1; 
  int v3; 

  v1 = triggerIter;
  if ( (cm.mapEnts->clientTrigger.trigger.models[triggerIter].flags & 0x40) != 0 )
  {
    if ( triggerIter >= 0x4000 )
    {
      v3 = 0x4000;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2928, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( (16*1024) )", "trigIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", triggerIter, v3) )
        __debugbreak();
    }
    g_audioTriggerDisabled[v1] = 1;
  }
}

/*
==============
CG_StartClientSideTriggersAudioTrigger
==============
*/
void CG_StartClientSideTriggersAudioTrigger(unsigned int triggerIter)
{
  __int64 v1; 
  __int16 v2; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  const char *zoneName; 
  signed __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  if ( s_soundTablePtr )
  {
    v1 = triggerIter;
    v2 = cm.mapEnts->clientTrigger.audioTriggers[triggerIter];
    if ( v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 983, ASSERT_TYPE_ASSERT, "(zoneIndex >= 0)", (const char *)&queryFormat, "zoneIndex >= 0") )
      __debugbreak();
    v3 = 0;
    v4 = &cm.mapEnts->clientTrigger.triggerString[v2];
    if ( s_soundTablePtr->zoneCount )
    {
      while ( 2 )
      {
        v5 = 0x7FFFFFFFi64;
        zoneName = s_soundTablePtr->zones[v3].zoneName;
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v7 = v4 - zoneName;
        while ( 1 )
        {
          v8 = zoneName[v7];
          v9 = v5;
          v10 = *zoneName++;
          --v5;
          if ( !v9 )
          {
LABEL_16:
            if ( s_soundTablePtr->zones[v3].stateId )
            {
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442CA660, 313i64);
            }
            else
            {
              g_audioTriggersFound = 1;
              s_audioZoneLookup[v1] = v3;
            }
            return;
          }
          if ( v8 != v10 )
            break;
          if ( !v8 )
            goto LABEL_16;
        }
        if ( ++v3 < s_soundTablePtr->zoneCount )
          continue;
        break;
      }
    }
    Com_PrintError(9, "Client Trigger Audio script_zone %s not matched.\n", v4);
  }
}

/*
==============
CG_StartClientSideTriggersNPCZone
==============
*/
void CG_StartClientSideTriggersNPCZone(unsigned int triggerIter)
{
  __int64 v1; 
  __int16 v2; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  const char *zoneName; 
  signed __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  if ( s_soundTablePtr )
  {
    v1 = triggerIter;
    v2 = cm.mapEnts->clientTrigger.npcTriggers[triggerIter];
    if ( v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1030, ASSERT_TYPE_ASSERT, "(zoneIndex >= 0)", (const char *)&queryFormat, "zoneIndex >= 0") )
      __debugbreak();
    v3 = 0;
    v4 = &cm.mapEnts->clientTrigger.triggerString[v2];
    if ( s_soundTablePtr->zoneCount )
    {
      while ( 2 )
      {
        v5 = 0x7FFFFFFFi64;
        zoneName = s_soundTablePtr->zones[v3].zoneName;
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v7 = v4 - zoneName;
        while ( 1 )
        {
          v8 = zoneName[v7];
          v9 = v5;
          v10 = *zoneName++;
          --v5;
          if ( !v9 )
          {
LABEL_16:
            if ( s_soundTablePtr->zones[v3].stateId )
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442CA660, 314i64);
            else
              s_audioNPCZoneLookup[v1] = v3;
            return;
          }
          if ( v8 != v10 )
            break;
          if ( !v8 )
            goto LABEL_16;
        }
        if ( ++v3 < s_soundTablePtr->zoneCount )
          continue;
        break;
      }
    }
    Com_PrintError(9, "Client Trigger Audio npc_zone %s not matched.\n", v4);
  }
}

/*
==============
CG_TriggerAudio
==============
*/

void __fastcall CG_TriggerAudio(LocalClientNum_t localClientNum, int zoneA, int zoneB, double lerp, int overRideFlags)
{
  __int64 v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( s_soundTablePtr && zoneA != 0x7FFFFFFF && zoneB != 0x7FFFFFFF )
  {
    if ( zoneA == zoneB )
    {
      if ( zoneA != g_lastAudioZoneIndexA || zoneB != g_lastAudioZoneIndexB || g_lastOverRideFlags != overRideFlags )
      {
        g_lastAudioZoneIndexA = zoneA;
        g_lastAudioZoneIndexB = zoneB;
        g_lastOverRideFlags = overRideFlags;
        CG_UpdateAudioZone(localClientNum, zoneA, zoneB, overRideFlags);
        CG_ChangeAudio(localClientNum, v13, v14, lerp);
      }
    }
    else
    {
      CG_UpdateAudioZone(localClientNum, zoneA, zoneB, overRideFlags);
      if ( (_DWORD)v10 != g_lastAudioZoneIndexA || zoneB != g_lastAudioZoneIndexB || g_lastOverRideFlags != overRideFlags )
        CG_ChangeAudio(localClientNum, v10, v11, lerp);
      __asm { vmovaps xmm1, xmm6; lerp }
      CG_LerpAudio(localClientNum, *(double *)&_XMM1);
      g_lastOverRideFlags = overRideFlags;
      g_lastAudioZoneIndexA = zoneA;
      g_lastAudioZoneIndexB = zoneB;
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
CG_TriggerAudioFade
==============
*/

void __fastcall CG_TriggerAudioFade(LocalClientNum_t localClientNum, int zone, double fadeTime, int overRideFlags)
{
  int v13; 
  int v14; 
  bool v15; 
  bool v16; 
  bool v17; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
  }
  CG_GetLocalClientGlobals(localClientNum);
  v13 = g_audTrigFadeZoneA;
  v14 = g_audTrigFadeZoneB;
  v15 = zone < (unsigned int)g_audTrigFadeZoneA;
  v16 = zone == g_audTrigFadeZoneA;
  v17 = zone <= (unsigned int)g_audTrigFadeZoneA;
  if ( zone == g_audTrigFadeZoneA || (v15 = zone < (unsigned int)g_audTrigFadeZoneB, v16 = zone == g_audTrigFadeZoneB, v17 = zone <= (unsigned int)g_audTrigFadeZoneB, zone == g_audTrigFadeZoneB) )
  {
    __asm
    {
      vmovss  xmm3, cs:g_audTrigFadeCurLerp; lerp
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm3, xmm6
    }
    if ( v17 )
      goto LABEL_18;
    __asm { vcomiss xmm3, xmm7 }
    if ( !v15 )
    {
LABEL_18:
      __asm { vucomiss xmm3, xmm6 }
      if ( v16 )
      {
        v14 = g_audTrigFadeZoneA;
        g_audTrigFadeZoneB = g_audTrigFadeZoneA;
      }
      else
      {
        __asm { vucomiss xmm3, xmm7 }
        if ( v16 )
        {
          v13 = g_audTrigFadeZoneB;
          g_audTrigFadeZoneA = g_audTrigFadeZoneB;
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, cs:g_audTrigFadeRate
      }
      if ( zone == g_audTrigFadeZoneB )
      {
        __asm { vcomiss xmm0, xmm6 }
        if ( zone < (unsigned int)g_audTrigFadeZoneB )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm1
            vmovss  cs:g_audTrigFadeRate, xmm0
          }
        }
      }
      if ( zone == g_audTrigFadeZoneA )
      {
        __asm { vcomiss xmm0, xmm6 }
        if ( zone > (unsigned int)g_audTrigFadeZoneA )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm1
            vmovss  cs:g_audTrigFadeRate, xmm0
          }
        }
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm3, cs:g_audTrigFadeCurLerp
      vxorps  xmm6, xmm6, xmm6
    }
    if ( g_audTrigFadeZoneA != 0x7FFFFFFF )
      __asm { vucomiss xmm3, xmm6 }
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( g_audTrigFadeZoneB != 0x7FFFFFFF )
      __asm { vucomiss xmm3, xmm7 }
    __asm { vucomiss xmm3, xmm6 }
    if ( g_audTrigFadeZoneB == 0x7FFFFFFF )
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vmovss  cs:g_audTrigFadeCurLerp, xmm3
        vmovss  cs:g_audTrigFadeRate, xmm6
      }
      v13 = zone;
      g_audTrigFadeZoneA = zone;
      v14 = zone;
      g_audTrigFadeZoneB = zone;
    }
    else
    {
      __asm { vucomiss xmm3, xmm7 }
    }
  }
  CG_TriggerAudio(localClientNum, v13, v14, *(double *)&_XMM3, overRideFlags);
  __asm
  {
    vmovss  xmm4, cs:g_audTrigFadeCurLerp
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbp+65E4h]
    vmulss  xmm3, xmm0, cs:g_audTrigFadeRate
    vaddss  xmm0, xmm4, xmm3; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  cs:g_audTrigFadeCurLerp, xmm0
    vmovss  cs:g_lastAudioLerpVal, xmm4
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovss  cs:g_audTrigFadeCurLerp, xmm0
  }
}

/*
==============
CG_TriggerAudio_PrecacheBaseWeapons
==============
*/
void CG_TriggerAudio_PrecacheBaseWeapons()
{
  const SoundTable *v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned int ADSRWeaponIndex; 
  unsigned int v4; 
  AdsrZoneEntry **p_npcADSRZones; 
  __int64 v6; 
  unsigned int v7; 
  const SoundTable *v8; 
  int v9; 
  __int64 v10; 
  signed int weaponIdx; 
  int v12; 
  WeaponCompleteDef *v13; 
  WeaponSFXPackage *sfxPackage; 
  const char *szAdsrBaseSetting; 
  __int64 v16; 
  const char *weaponName; 
  signed __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  bool v24; 
  int v25; 
  WeaponSFXPackage *v26; 
  const char *v27; 
  __int64 v28; 
  const char *v29; 
  signed __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  int NumWeapons; 
  __int64 v40; 

  v0 = s_soundTablePtr;
  if ( s_soundTablePtr )
  {
    v1 = 0;
    if ( s_soundTablePtr->playerADSRZoneCount )
    {
      do
      {
        v2 = v1;
        ADSRWeaponIndex = CG_GetADSRWeaponIndex(v0->playerADSRZones[v2].weaponName);
        v0 = s_soundTablePtr;
        ++v1;
        s_soundTablePtr->playerADSRZones[v2].weaponIdx = ADSRWeaponIndex;
      }
      while ( v1 < v0->playerADSRZoneCount );
    }
    v4 = 0;
    if ( v0->npcADSRZoneCount )
    {
      p_npcADSRZones = &v0->npcADSRZones;
      do
      {
        v6 = v4;
        v7 = CG_GetADSRWeaponIndex((*p_npcADSRZones)[v6].weaponName);
        v8 = s_soundTablePtr;
        ++v4;
        p_npcADSRZones = &s_soundTablePtr->npcADSRZones;
        s_soundTablePtr->npcADSRZones[v6].weaponIdx = v7;
      }
      while ( v4 < v8->npcADSRZoneCount );
    }
    v9 = 0;
    NumWeapons = BG_GetNumWeapons();
    if ( NumWeapons > 0 )
    {
      v10 = 0i64;
      v40 = 0i64;
      do
      {
        weaponIdx = 0;
        if ( (v9 < 0 || (unsigned int)v9 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v9, "signed", v10) )
          __debugbreak();
        if ( (unsigned __int16)v9 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v38) = bg_lastParsedWeaponIndex;
          LODWORD(v37) = (unsigned __int16)v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v37, v38) )
            __debugbreak();
        }
        if ( !bg_weaponCompleteDefs[(unsigned __int16)v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        v12 = 0;
        v13 = bg_weaponCompleteDefs[(unsigned __int16)v9];
        if ( !s_soundTablePtr->playerADSRZoneCount )
          goto LABEL_35;
        while ( 1 )
        {
          sfxPackage = v13->weapDef->sfxPackage;
          if ( sfxPackage )
          {
            szAdsrBaseSetting = sfxPackage->szAdsrBaseSetting;
            if ( szAdsrBaseSetting )
              break;
          }
LABEL_58:
          if ( ++v12 >= s_soundTablePtr->playerADSRZoneCount )
            goto LABEL_35;
        }
        v16 = 0x7FFFFFFFi64;
        weaponName = s_soundTablePtr->playerADSRZones[v12].weaponName;
        if ( !weaponName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v18 = weaponName - szAdsrBaseSetting;
        do
        {
          v19 = (unsigned __int8)szAdsrBaseSetting[v18];
          v20 = v16;
          v21 = *(unsigned __int8 *)szAdsrBaseSetting++;
          --v16;
          if ( !v20 )
            break;
          if ( v19 != v21 )
          {
            v22 = v19 + 32;
            if ( (unsigned int)(v19 - 65) > 0x19 )
              v22 = v19;
            v19 = v22;
            v23 = v21 + 32;
            if ( (unsigned int)(v21 - 65) > 0x19 )
              v23 = v21;
            if ( v19 != v23 )
              goto LABEL_58;
          }
        }
        while ( v19 );
        weaponIdx = s_soundTablePtr->playerADSRZones[v12].weaponIdx;
        v24 = weaponIdx < 0;
        if ( !weaponIdx )
        {
LABEL_35:
          v25 = 0;
          if ( s_soundTablePtr->npcADSRZoneCount )
          {
            while ( 1 )
            {
              v26 = v13->weapDef->sfxPackage;
              if ( v26 )
              {
                v27 = v26->szAdsrBaseSetting;
                if ( v27 )
                  break;
              }
LABEL_60:
              if ( ++v25 >= s_soundTablePtr->npcADSRZoneCount )
                goto LABEL_51;
            }
            v28 = 0x7FFFFFFFi64;
            v29 = s_soundTablePtr->npcADSRZones[v25].weaponName;
            if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v30 = v29 - v27;
            do
            {
              v31 = (unsigned __int8)v27[v30];
              v32 = v28;
              v33 = *(unsigned __int8 *)v27++;
              --v28;
              if ( !v32 )
                break;
              if ( v31 != v33 )
              {
                v34 = v31 + 32;
                if ( (unsigned int)(v31 - 65) > 0x19 )
                  v34 = v31;
                v31 = v34;
                v35 = v33 + 32;
                if ( (unsigned int)(v33 - 65) > 0x19 )
                  v35 = v33;
                if ( v31 != v35 )
                  goto LABEL_60;
              }
            }
            while ( v31 );
            weaponIdx = s_soundTablePtr->npcADSRZones[v25].weaponIdx;
          }
LABEL_51:
          v24 = weaponIdx < 0;
        }
        if ( (v24 || (unsigned int)weaponIdx > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)weaponIdx, "signed", weaponIdx) )
          __debugbreak();
        v36 = (unsigned __int16)v9;
        v10 = v40 + 1;
        ++v9;
        ++v40;
        g_adsrBaseWeaponIdxLookup[v36] = weaponIdx;
      }
      while ( v9 < NumWeapons );
    }
  }
}

/*
==============
CG_TriggerUpdateAudio
==============
*/
void CG_TriggerUpdateAudio(LocalClientNum_t localClientNum, unsigned int audioBlendTrigger, unsigned int audioTrigger, unsigned int propagationTrigger, unsigned int soundBankTrigger, const vec3_t *viewPos)
{
  __int64 v15; 
  CTAudState *v16; 
  __int64 v17; 
  cg_t *LocalClientGlobals; 
  int v19; 
  __int64 v20; 
  CTAudOverride *v21; 
  int v26; 
  int scriptPrevAudioZoneOverride; 
  int TriggerAudioZoneForOverrideBlending; 
  int v48; 
  int v49; 
  unsigned int count; 
  bool v52; 
  bool v53; 
  int v57; 
  int v62; 
  unsigned int v65; 
  unsigned int v66; 
  float *lerpAmount; 
  __int64 v75; 
  void *retaddr; 
  float v80; 
  unsigned int trigB; 
  unsigned int trigA; 
  unsigned int v83; 

  _R11 = &retaddr;
  v83 = propagationTrigger;
  __asm
  {
    vmovaps [rsp+0C8h+var_68], xmm7
    vmovaps xmmword ptr [r11-78h], xmm8
  }
  v15 = localClientNum;
  trigA = 0x4000;
  v16 = &s_audioZoneStates[localClientNum];
  trigB = 0x4000;
  v17 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( CL_IsRenderingSplitScreen() )
  {
    audioTrigger = 0x4000;
    audioBlendTrigger = 0x4000;
  }
  v19 = 6;
  __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
  v20 = 6i64;
  v21 = &v16->ctOverrideStack[6];
  while ( 1 )
  {
    _RDI = s_triggerStateLerp;
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    _RBP = 0x140000000ui64;
    if ( v21->active )
      break;
    --v19;
    --v21;
    if ( --v20 < 0 )
      goto LABEL_17;
  }
  _RBP = (int *)&v16->ctOverrideStack[v19].active;
  if ( !_RBP )
  {
    _RBP = 0x140000000ui64;
LABEL_17:
    if ( LocalClientGlobals->time >= v16->scriptAudioZoneFadeTargetTime || v16->scriptPrevAudioZoneOverride == 0x7FFFFFFF )
    {
      if ( audioBlendTrigger == 0x4000 )
      {
        if ( audioTrigger == 0x4000 )
        {
          __asm
          {
            vmovss  xmm0, cs:s_triggerStateLerp.current+20000h
            vcomiss xmm0, xmm8
          }
          if ( g_audTrigPrevFadeTrigger >= 0x4000 )
          {
            __asm { vxorps  xmm6, xmm6, xmm6 }
          }
          else
          {
            _RDX = g_audTrigPrevFadeTrigger;
            _RCX = cm.mapEnts->clientTrigger.scriptDelay;
            __asm { vmovss  xmm6, dword ptr [rcx+rdx*4] }
          }
          v62 = SND_LookupZoneIndex(0x4000);
          __asm { vmovaps xmm2, xmm6; fadeTime }
          CG_TriggerAudioFade((LocalClientNum_t)v15, v62, *(double *)&_XMM2, 2047);
        }
        else
        {
          if ( audioTrigger >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1239, ASSERT_TYPE_ASSERT, "(unsigned)( audioTrigger ) < (unsigned)( (16*1024) )", "audioTrigger doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", audioTrigger, 0x4000) )
            __debugbreak();
          count = cm.mapEnts->clientTrigger.trigger.count;
          v52 = audioTrigger <= count;
          if ( audioTrigger >= count )
          {
            LODWORD(v75) = cm.mapEnts->clientTrigger.trigger.count;
            LODWORD(lerpAmount) = audioTrigger;
            v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1240, ASSERT_TYPE_ASSERT, "(unsigned)( audioTrigger ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "audioTrigger doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", lerpAmount, v75);
            v52 = !v53;
            if ( v53 )
              __debugbreak();
          }
          _RDX = audioTrigger;
          __asm { vcomiss xmm8, dword ptr [rdi+rdx*8] }
          if ( v52 )
          {
            _RCX = cm.mapEnts->clientTrigger.scriptDelay;
            __asm { vmovss  xmm6, dword ptr [rcx+rdx*4] }
          }
          else
          {
            __asm { vmovss  xmm6, ss:rva s_triggerStateFadeTime[rbp+rdx*4] }
          }
          v57 = SND_LookupZoneIndex(audioTrigger);
          __asm { vmovaps xmm2, xmm6; fadeTime }
          CG_TriggerAudioFade((LocalClientNum_t)v15, v57, *(double *)&_XMM2, 2047);
          g_audTrigPrevFadeTrigger = audioTrigger;
        }
      }
      else
      {
        __asm { vmovss  [rsp+0C8h+arg_0], xmm7 }
        CG_TriggerLerpTriggers((LocalClientNum_t)v15, audioBlendTrigger, viewPos, &trigA, &trigB, &v80);
        __asm
        {
          vmovss  xmm6, [rsp+0C8h+arg_0]
          vmovss  cs:g_lastAudioLerpVal, xmm6
        }
        v48 = SND_LookupZoneIndex(trigB);
        v49 = SND_LookupZoneIndex(trigA);
        __asm { vmovaps xmm3, xmm6; lerp }
        CG_TriggerAudio((LocalClientNum_t)v15, v49, v48, *(double *)&_XMM3, 2047);
        __asm
        {
          vmovss  cs:g_audTrigFadeCurLerp, xmm7
          vmovss  cs:g_audTrigFadeRate, xmm7
        }
        g_audTrigFadeZoneA = 0x7FFFFFFF;
        g_audTrigFadeZoneB = 0x7FFFFFFF;
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, ecx
        vcvtsi2ss xmm0, xmm0, edx
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      TriggerAudioZoneForOverrideBlending = GetTriggerAudioZoneForOverrideBlending((LocalClientNum_t)v15, audioTrigger, audioBlendTrigger, viewPos);
      __asm { vmovaps xmm3, xmm6; lerp }
      CG_TriggerAudio((LocalClientNum_t)v15, v16->scriptPrevAudioZoneOverride, TriggerAudioZoneForOverrideBlending, *(double *)&_XMM3, 2047);
      __asm
      {
        vmovss  cs:g_lastAudioLerpVal, xmm6
        vmovss  cs:g_audTrigFadeCurLerp, xmm7
        vmovss  cs:g_audTrigFadeRate, xmm7
      }
      g_audTrigFadeZoneA = 0x7FFFFFFF;
      g_audTrigFadeZoneB = 0x7FFFFFFF;
    }
    goto LABEL_37;
  }
  v26 = _RBP[2];
  if ( v26 == 0x7FFFFFFF )
  {
    scriptPrevAudioZoneOverride = v16->scriptPrevAudioZoneOverride;
    if ( scriptPrevAudioZoneOverride == 0x7FFFFFFF )
      scriptPrevAudioZoneOverride = GetTriggerAudioZoneForOverrideBlending((LocalClientNum_t)v15, audioTrigger, audioBlendTrigger, viewPos);
    if ( LocalClientGlobals->time >= v16->scriptAudioZoneFadeTargetTime )
    {
      __asm { vxorps  xmm3, xmm3, xmm3; lerp }
      CG_TriggerAudio((LocalClientNum_t)v15, _RBP[1], _RBP[1], *(double *)&_XMM3, _RBP[4]);
      v16->scriptPrevAudioZoneOverride = _RBP[1];
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, ecx
        vcvtsi2ss xmm0, xmm0, edx
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm0; lerp
        vmovaps xmm6, xmm0
      }
      CG_TriggerAudio((LocalClientNum_t)v15, scriptPrevAudioZoneOverride, _RBP[1], *(double *)&_XMM3, _RBP[4]);
      __asm { vmovss  cs:g_lastAudioLerpVal, xmm6 }
    }
    __asm
    {
      vmovss  cs:g_audTrigFadeCurLerp, xmm7
      vmovss  cs:g_audTrigFadeRate, xmm7
    }
    g_audTrigFadeZoneA = 0x7FFFFFFF;
    v17 = v15;
    g_audTrigFadeZoneB = 0x7FFFFFFF;
  }
  else
  {
    __asm { vmovss  xmm3, dword ptr [rbp+0Ch]; lerp }
    CG_TriggerAudio((LocalClientNum_t)v15, _RBP[1], v26, *(double *)&_XMM3, _RBP[4]);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0Ch]
      vmovss  cs:g_lastAudioLerpVal, xmm0
      vmovss  cs:g_audTrigFadeCurLerp, xmm7
      vmovss  cs:g_audTrigFadeRate, xmm7
    }
    g_audTrigFadeZoneA = 0x7FFFFFFF;
    g_audTrigFadeZoneB = 0x7FFFFFFF;
  }
LABEL_37:
  __asm { vmovaps xmm6, [rsp+0C8h+var_58] }
  v65 = 0;
  g_playerCurrentPropagationTrigger[v17] = v83;
  v66 = soundBankTrigger;
  g_playerCurrentAudioTrigger[v17] = audioTrigger;
  g_playerCurrentAudioBlendTrigger[v17] = audioBlendTrigger;
  g_playerCurrentSoundBankTrigger[v17] = v66;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r15+65E4h]
      vmulss  xmm0, xmm0, dword ptr [rdi+4]
      vaddss  xmm0, xmm0, dword ptr [rdi]; val
      vmovaps xmm2, xmm8; max
      vmovaps xmm1, xmm7; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    ++v65;
    __asm { vmovss  dword ptr [rdi], xmm0 }
    ++_RDI;
  }
  while ( v65 < 0x4001 );
  __asm
  {
    vmovaps xmm7, [rsp+0C8h+var_68]
    vmovaps xmm8, [rsp+0C8h+var_78]
  }
}

/*
==============
CG_UpdateAudioZone
==============
*/
void CG_UpdateAudioZone(LocalClientNum_t localClientNum, int zoneA, int zoneB, int overRideFlags)
{
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

  if ( zoneA >= 0 && zoneB >= 0 )
  {
    if ( (overRideFlags & 1) != 0 )
    {
      v4 = localClientNum;
      s_audioZoneStates[v4].ctReverbZoneA = zoneA;
      s_audioZoneStates[v4].ctReverbZoneB = zoneB;
    }
    if ( (overRideFlags & 8) != 0 )
    {
      v5 = localClientNum;
      s_audioZoneStates[v5].ctOcclusionZoneA = zoneA;
      s_audioZoneStates[v5].ctOcclusionZoneB = zoneB;
    }
    if ( (overRideFlags & 4) != 0 )
    {
      v6 = localClientNum;
      s_audioZoneStates[v6].ctFilterZoneA = zoneA;
      s_audioZoneStates[v6].ctFilterZoneB = zoneB;
    }
    if ( (overRideFlags & 2) != 0 )
    {
      v7 = localClientNum;
      s_audioZoneStates[v7].ctMixZoneA = zoneA;
      s_audioZoneStates[v7].ctMixZoneB = zoneB;
    }
    if ( (overRideFlags & 0x10) != 0 )
    {
      v8 = localClientNum;
      s_audioZoneStates[v8].ctAmbientZoneA = zoneA;
      s_audioZoneStates[v8].ctAmbientZoneB = zoneB;
    }
    if ( (overRideFlags & 0x20) != 0 )
    {
      v9 = localClientNum;
      s_audioZoneStates[v9].ctAmbientEventZoneA = zoneA;
      s_audioZoneStates[v9].ctAmbientEventZoneB = zoneB;
    }
    if ( (overRideFlags & 0x40) != 0 )
      s_audioZoneStates[localClientNum].ctPlayerAdsrZone = zoneA;
    if ( (overRideFlags & 0x80u) != 0 )
    {
      v10 = localClientNum;
      s_audioZoneStates[v10].ctWeapReflZoneA = zoneA;
      s_audioZoneStates[v10].ctWeapReflZoneB = zoneB;
    }
    if ( (overRideFlags & 0x100) != 0 )
    {
      v11 = localClientNum;
      s_audioZoneStates[v11].ctContextsZoneA = zoneA;
      s_audioZoneStates[v11].ctContextsZoneB = zoneB;
    }
    if ( (overRideFlags & 0x200) != 0 )
    {
      v12 = localClientNum;
      s_audioZoneStates[v12].ctFullOcclusionZoneA = zoneA;
      s_audioZoneStates[v12].ctFullOcclusionZoneB = zoneB;
    }
    if ( (overRideFlags & 0x400) != 0 )
    {
      v13 = localClientNum;
      s_audioZoneStates[v13].ctPlayerBreathZoneA = zoneA;
      s_audioZoneStates[v13].ctPlayerBreathZoneB = zoneB;
    }
  }
}

/*
==============
DrawContexts
==============
*/

float __fastcall DrawContexts(int zoneIdx, double x, double y, const vec4_t *color, const ScreenPlacement *scrPlace)
{
  ZoneDef *v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  SndContext *Context; 
  int startIndex; 
  int v22; 
  GfxFont *font; 
  SndContextValue *ContextValue; 
  const char *s; 
  float v37; 
  unsigned int type[4]; 
  int v39[4]; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovss  xmm7, cs:__real@3f0ccccd
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm1
    vxorps  xmm6, xmm6, xmm6
  }
  v16 = &s_soundTablePtr->zones[zoneIdx];
  v17 = 0;
  v18 = 0i64;
  type[0] = v16->contextType1;
  type[1] = v16->contextType2;
  type[2] = v16->contextType3;
  type[3] = v16->contextType4;
  v39[0] = v16->contextValue1;
  v39[1] = v16->contextValue2;
  v39[2] = v16->contextValue3;
  v39[3] = v16->contextValue4;
  do
  {
    v19 = type[v18];
    if ( v19 )
    {
      Context = SND_GetContext(v19);
      startIndex = Context->startIndex;
      if ( startIndex < startIndex + Context->numValues )
      {
        v22 = v39[v18];
        do
        {
          if ( v22 == SND_GetContextValue(startIndex)->valueId )
          {
            font = cls.smallDevFont;
            ContextValue = SND_GetContextValue(startIndex);
            s = j_va("    %s: %s", Context->type, ContextValue->value);
            __asm
            {
              vmovaps xmm3, xmm7; xScale
              vmovaps xmm2, xmm9; y
              vmovaps xmm1, xmm8; x
              vmovss  [rsp+108h+var_E8], xmm7
            }
            CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v37, s, color, 5, font);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vaddss  xmm6, xmm6, xmm0
            }
          }
          ++startIndex;
        }
        while ( startIndex < Context->numValues + Context->startIndex );
      }
    }
    ++v17;
    ++v18;
  }
  while ( v17 < 4 );
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return *(float *)&_XMM0;
}

/*
==============
GetAudioZoneDebugProps
==============
*/
void GetAudioZoneDebugProps(unsigned int realZoneA, unsigned int realZoneB, unsigned int curZoneA, unsigned int curZoneB, vec4_t *overriddenColor, int *blending)
{
  *blending = curZoneA != curZoneB;
  if ( realZoneA == curZoneA && realZoneB == curZoneB )
  {
    __asm { vmovss  xmm0, dword ptr cs:?colorMdCyan@@3Tvec4_t@@B; vec4_t const colorMdCyan }
    _RAX = overriddenColor;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdCyan@@3Tvec4_t@@B+4; vec4_t const colorMdCyan
      vmovss  dword ptr [rax+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorMdCyan@@3Tvec4_t@@B+8; vec4_t const colorMdCyan
      vmovss  dword ptr [rax+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdCyan@@3Tvec4_t@@B+0Ch; vec4_t const colorMdCyan
      vmovss  dword ptr [rax+0Ch], xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow }
    _RAX = overriddenColor;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B+4; vec4_t const colorMdYellow
      vmovss  dword ptr [rax+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B+8; vec4_t const colorMdYellow
      vmovss  dword ptr [rax+8], xmm0
      vmovss  xmm1, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B+0Ch; vec4_t const colorMdYellow
      vmovss  dword ptr [rax+0Ch], xmm1
    }
  }
}

/*
==============
GetTriggerAudioZoneForOverrideBlending
==============
*/
int GetTriggerAudioZoneForOverrideBlending(LocalClientNum_t localClientNum, int audioTrigger, int audioBlendTrigger, const vec3_t *viewPos)
{
  char v5; 
  float lerpAmount; 
  unsigned int trigB[5]; 
  unsigned int trigA; 

  if ( audioBlendTrigger != 0x4000 )
  {
    CG_TriggerLerpTriggers(localClientNum, audioBlendTrigger, viewPos, &trigA, trigB, &lerpAmount);
    __asm
    {
      vmovss  xmm0, [rsp+48h+var_18]
      vcomiss xmm0, cs:__real@3f000000
    }
    audioTrigger = trigA;
    if ( !v5 )
      audioTrigger = trigB[0];
  }
  if ( audioTrigger == 0x4000 )
    audioTrigger = 0x4000;
  return SND_LookupZoneIndex(audioTrigger);
}

/*
==============
SND_LookupDefaultNPCZoneIndex
==============
*/
int SND_LookupDefaultNPCZoneIndex()
{
  return SND_LookupNPCZoneIndex(0x4000);
}

/*
==============
SND_LookupDefaultZoneIndex
==============
*/
int SND_LookupDefaultZoneIndex()
{
  return SND_LookupZoneIndex(0x4000);
}

/*
==============
SND_LookupNPCZoneIndex
==============
*/
__int64 SND_LookupNPCZoneIndex(int triggerIndex)
{
  const SoundTable *v1; 
  __int64 v2; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int zoneCount; 
  unsigned int v7; 

  v1 = s_soundTablePtr;
  v2 = triggerIndex;
  if ( !s_soundTablePtr )
    return 0x7FFFFFFFi64;
  if ( (unsigned int)triggerIndex >= 0x4001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 268, ASSERT_TYPE_ASSERT, "(triggerIndex < ( sizeof( *array_counter( s_audioZoneLookup ) ) + 0 ))", (const char *)&queryFormat, "triggerIndex < ARRAY_COUNT( s_audioZoneLookup )") )
      __debugbreak();
    v1 = s_soundTablePtr;
  }
  v4 = v2;
  v5 = s_audioNPCZoneLookup[v2];
  if ( v5 == 0x7FFFFFFF )
    return (unsigned int)s_audioNPCZoneLookup[0x4000];
  zoneCount = v1->zoneCount;
  v7 = v5;
  if ( v5 >= zoneCount )
    return v5;
  while ( v1->zones[v7].stateId != s_triggerStateTo[v4] )
  {
    if ( ++v7 >= zoneCount )
      return v5;
  }
  return v7;
}

/*
==============
SND_LookupZoneIndex
==============
*/
__int64 SND_LookupZoneIndex(int triggerIndex)
{
  const SoundTable *v1; 
  __int64 v2; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int zoneCount; 
  unsigned int v7; 

  v1 = s_soundTablePtr;
  v2 = triggerIndex;
  if ( !s_soundTablePtr )
    return 0x7FFFFFFFi64;
  if ( (unsigned int)triggerIndex >= 0x4001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 187, ASSERT_TYPE_ASSERT, "(triggerIndex < ( sizeof( *array_counter( s_audioZoneLookup ) ) + 0 ))", (const char *)&queryFormat, "triggerIndex < ARRAY_COUNT( s_audioZoneLookup )") )
      __debugbreak();
    v1 = s_soundTablePtr;
  }
  v4 = v2;
  v5 = s_audioZoneLookup[v2];
  if ( v5 == 0x7FFFFFFF )
    return (unsigned int)s_audioZoneLookup[0x4000];
  zoneCount = v1->zoneCount;
  v7 = v5;
  if ( v5 >= zoneCount )
    return v5;
  while ( v1->zones[v7].stateId != s_triggerStateTo[v4] )
  {
    if ( ++v7 >= zoneCount )
      return v5;
  }
  return v7;
}

/*
==============
SND_LookupZoneIndexStateBlended
==============
*/
bool SND_LookupZoneIndexStateBlended(int triggerIndex, int *outZoneFrom, int *outZoneTo, float *outLerp)
{
  const SoundTable *v4; 
  __int64 v6; 
  __int64 v9; 
  __int64 v10; 
  char v11; 
  unsigned int v12; 
  ZoneDef *v13; 
  unsigned int v14; 
  char i; 
  ZoneDef *zones; 
  __int64 v17; 

  v4 = s_soundTablePtr;
  v6 = triggerIndex;
  if ( !s_soundTablePtr )
    return 0;
  if ( (unsigned int)triggerIndex >= 0x4001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 217, ASSERT_TYPE_ASSERT, "(triggerIndex < ( sizeof( *array_counter( s_audioZoneLookup ) ) + 0 ))", (const char *)&queryFormat, "triggerIndex < ARRAY_COUNT( s_audioZoneLookup )") )
      __debugbreak();
    v4 = s_soundTablePtr;
  }
  v9 = v6;
  v10 = s_audioZoneLookup[v6];
  if ( (_DWORD)v10 == 0x7FFFFFFF )
    return 0;
  v11 = 0;
  v12 = s_triggerStateFrom[v6];
  v13 = &v4->zones[v10];
  v14 = s_triggerStateTo[v6];
  for ( i = 0; (unsigned int)v10 < v4->zoneCount; LODWORD(v10) = v10 + 1 )
  {
    if ( i && v11 )
      break;
    zones = v4->zones;
    v17 = (unsigned int)v10;
    if ( zones[v17].stateId == v12 && zones[v17].id == v13->id )
    {
      *outZoneFrom = v10;
      i = 1;
      zones = v4->zones;
    }
    if ( zones[v17].stateId == v14 && zones[v17].id == v13->id )
    {
      *outZoneTo = v10;
      v11 = 1;
    }
  }
  *outLerp = s_triggerStateLerp[v9].current;
  return i && v11;
}

/*
==============
SV_CheckAudioStateName
==============
*/
char SV_CheckAudioStateName(const char *state)
{
  const SoundTable *v1; 
  unsigned int v2; 
  unsigned int zoneCount; 
  int v4; 

  v1 = s_soundTablePtr;
  if ( s_soundTablePtr )
  {
    v2 = SND_HashName(state);
    zoneCount = v1->zoneCount;
    v4 = 0;
    if ( !zoneCount )
      return 0;
    while ( v1->zones[v4].stateId != v2 )
    {
      if ( ++v4 >= zoneCount )
        return 0;
    }
  }
  return 1;
}

