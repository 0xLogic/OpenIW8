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
  __int128 v5; 
  const dvar_t *v6; 
  const dvar_t *v11; 
  const char *string; 
  char v13; 
  char *v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float value; 
  int v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  __m256i v21; 
  double v22; 
  char dest[128]; 
  __int128 v24; 

  v6 = DCONST_DVARINT_snd_fullOcclusionDebug;
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
      v15 = start->v[0];
      v16 = start->v[1];
      v17 = DCONST_DVARFLT_snd_occlusionDebugTime;
      v24 = v5;
      BYTE4(v22) = occluded;
      *(float *)v21.m256i_i32 = v15;
      v21.m256i_i32[2] = LODWORD(start->v[2]);
      *(float *)&v21.m256i_i32[1] = v16;
      *(__int64 *)((char *)&v21.m256i_i64[1] + 4) = *(_QWORD *)end->v;
      v21.m256i_i32[6] = LODWORD(intersect->v[0]);
      v21.m256i_i32[5] = LODWORD(end->v[2]);
      *(float *)&v22 = intersect->v[2];
      v21.m256i_i32[7] = LODWORD(intersect->v[1]);
      if ( !DCONST_DVARFLT_snd_occlusionDebugTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebugTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      value = v17->current.value;
      v19 = Sys_Milliseconds() - (int)(float)(value * -1000.0);
      if ( !s_fullOcclusionLines.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !s_fullOcclusionLines.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<64> *)s_fullOcclusionLines.m_freelist.m_head.mp_next == &s_fullOcclusionLines.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x40ui64, 0x63ui64) )
        __debugbreak();
      mp_next = s_fullOcclusionLines.m_freelist.m_head.mp_next;
      s_fullOcclusionLines.m_freelist.m_head.mp_next = s_fullOcclusionLines.m_freelist.m_head.mp_next->mp_next;
      *(__m256i *)&mp_next[2].mp_next = v21;
      *(double *)&mp_next[6].mp_next = v22;
      mp_next->mp_next = NULL;
      mp_next[1].mp_next = NULL;
      LODWORD(mp_next[7].mp_next) = v19;
      ntl::internal::list_head_base<ntl::internal::list_node<FullOcclusionLine>>::insert_before(&s_fullOcclusionLines.m_listHead, (ntl::internal::list_node<FullOcclusionLine> *)&s_fullOcclusionLines.m_listHead, (ntl::internal::list_node<FullOcclusionLine> *)mp_next);
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
void CG_ChangeAudio(LocalClientNum_t localClientNum)
{
  const SoundTable *v1; 
  __int64 v3; 
  __int64 reverbIndex; 
  __int64 ctOcclusionZoneA; 
  int v6; 
  ZoneDef *zones; 
  int v8; 
  unsigned int v9; 
  OccludeDef *v10; 
  __int64 ctOcclusionZoneB; 
  ZoneDef *v12; 
  int v13; 
  unsigned int v14; 
  OccludeDef *v15; 
  __int64 ctFilterZoneA; 
  ZoneDef *v17; 
  int v18; 
  signed int v19; 
  FilterDef *filters; 
  __int64 ctFilterZoneB; 
  ZoneDef *v22; 
  int v23; 
  signed int v24; 
  FilterDef *v25; 
  signed int VolModCount; 
  signed int i; 
  double VolModDefaultValue; 
  __int64 ctMixZoneA; 
  ZoneDef *v30; 
  int v31; 
  unsigned int v32; 
  __int64 ctAmbientZoneA; 
  const char *ambientStream; 
  __int64 ctAmbientEventZoneA; 
  const SoundTable *v36; 
  __int16 ambientDefIndex; 
  float v38; 
  const AmbientDef *v39; 
  __int64 ctFullOcclusionZoneA; 
  const SoundTable *v41; 
  ZoneDef *v42; 
  unsigned int v43; 
  __int64 freq; 
  __int64 q; 

  v1 = s_soundTablePtr;
  v3 = localClientNum;
  if ( s_audioZoneStates[v3].ctReverbZoneA >= s_soundTablePtr->zoneCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctReverbZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctReverbZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", s_audioZoneStates[v3].ctReverbZoneA, s_soundTablePtr->zoneCount) )
      __debugbreak();
    v1 = s_soundTablePtr;
  }
  reverbIndex = v1->zones[s_audioZoneStates[v3].ctReverbZoneA].reverbIndex;
  if ( (_DWORD)reverbIndex == -1 )
    SND_ClearMainReverb(1.0);
  else
    SND_SetMainReverb(&v1->reverbs[reverbIndex]);
  SND_DeactivateAllEq(0);
  SND_DeactivateAllEq(1);
  SND_ClearAllOcclusionSettings();
  if ( s_audioZoneStates[v3].ctOcclusionZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctOcclusionZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctOcclusionZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctOcclusionZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  if ( s_audioZoneStates[v3].ctOcclusionZoneB >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctOcclusionZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 453, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctOcclusionZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctOcclusionZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctOcclusionZoneA = s_audioZoneStates[v3].ctOcclusionZoneA;
  v6 = 0;
  zones = s_soundTablePtr->zones;
  if ( zones[ctOcclusionZoneA].startOcclusionIndex != -1 )
  {
    v8 = 0;
    if ( zones[ctOcclusionZoneA].numOcclusion > 0 )
    {
      do
      {
        v9 = v8 + zones[(unsigned int)ctOcclusionZoneA].startOcclusionIndex;
        if ( v9 >= s_soundTablePtr->occlusionFilterCount )
        {
          LODWORD(q) = s_soundTablePtr->occlusionFilterCount;
          LODWORD(freq) = v8 + zones[(unsigned int)ctOcclusionZoneA].startOcclusionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 460, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->occlusionFilterCount )", "idx doesn't index s_soundTablePtr->occlusionFilterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        v10 = &s_soundTablePtr->occlusionFilters[v9];
        SND_SetOcclusionFilterSingleIndex(v10->entChannelIdx, 0, v10);
        ++v8;
        LODWORD(ctOcclusionZoneA) = s_audioZoneStates[v3].ctOcclusionZoneA;
        zones = s_soundTablePtr->zones;
      }
      while ( v8 < zones[(unsigned int)ctOcclusionZoneA].numOcclusion );
    }
  }
  ctOcclusionZoneB = s_audioZoneStates[v3].ctOcclusionZoneB;
  v12 = s_soundTablePtr->zones;
  if ( v12[ctOcclusionZoneB].startOcclusionIndex != -1 )
  {
    v13 = 0;
    if ( v12[ctOcclusionZoneB].numOcclusion > 0 )
    {
      do
      {
        v14 = v13 + v12[(unsigned int)ctOcclusionZoneB].startOcclusionIndex;
        if ( v14 >= s_soundTablePtr->occlusionFilterCount )
        {
          LODWORD(q) = s_soundTablePtr->occlusionFilterCount;
          LODWORD(freq) = v13 + v12[(unsigned int)ctOcclusionZoneB].startOcclusionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->occlusionFilterCount )", "idx doesn't index s_soundTablePtr->occlusionFilterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        v15 = &s_soundTablePtr->occlusionFilters[v14];
        SND_SetOcclusionFilterSingleIndex(v15->entChannelIdx, 1, v15);
        ++v13;
        LODWORD(ctOcclusionZoneB) = s_audioZoneStates[v3].ctOcclusionZoneB;
        v12 = s_soundTablePtr->zones;
      }
      while ( v13 < v12[(unsigned int)ctOcclusionZoneB].numOcclusion );
    }
  }
  if ( s_audioZoneStates[v3].ctFilterZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctFilterZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 475, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctFilterZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctFilterZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  if ( s_audioZoneStates[v3].ctFilterZoneB >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctFilterZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 476, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctFilterZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctFilterZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctFilterZoneA = s_audioZoneStates[v3].ctFilterZoneA;
  v17 = s_soundTablePtr->zones;
  if ( v17[ctFilterZoneA].startFilterIndex != -1 )
  {
    v18 = 0;
    if ( v17[ctFilterZoneA].numFilter > 0 )
    {
      do
      {
        v19 = v18 + v17[(unsigned int)ctFilterZoneA].startFilterIndex;
        if ( v19 >= s_soundTablePtr->filterCount )
        {
          LODWORD(q) = s_soundTablePtr->filterCount;
          LODWORD(freq) = v18 + v17[(unsigned int)ctFilterZoneA].startFilterIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 483, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->filterCount )", "idx doesn't index s_soundTablePtr->filterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        filters = s_soundTablePtr->filters;
        SND_SetEqEntChannel(filters[v19].entChannelIdx, 0, filters[v19].band, filters[v19].type, filters[v19].gain, filters[v19].freq, filters[v19].q);
        ++v18;
        LODWORD(ctFilterZoneA) = s_audioZoneStates[v3].ctFilterZoneA;
        v17 = s_soundTablePtr->zones;
      }
      while ( v18 < v17[(unsigned int)ctFilterZoneA].numFilter );
    }
  }
  ctFilterZoneB = s_audioZoneStates[v3].ctFilterZoneB;
  v22 = s_soundTablePtr->zones;
  if ( v22[ctFilterZoneB].startFilterIndex != -1 )
  {
    v23 = 0;
    if ( v22[ctFilterZoneB].numFilter > 0 )
    {
      do
      {
        v24 = v23 + v22[(unsigned int)ctFilterZoneB].startFilterIndex;
        if ( v24 >= s_soundTablePtr->filterCount )
        {
          LODWORD(q) = s_soundTablePtr->filterCount;
          LODWORD(freq) = v23 + v22[(unsigned int)ctFilterZoneB].startFilterIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 493, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->filterCount )", "idx doesn't index s_soundTablePtr->filterCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        v25 = s_soundTablePtr->filters;
        SND_SetEqEntChannel(v25[v24].entChannelIdx, 1, v25[v24].band, v25[v24].type, v25[v24].gain, v25[v24].freq, v25[v24].q);
        ++v23;
        LODWORD(ctFilterZoneB) = s_audioZoneStates[v3].ctFilterZoneB;
        v22 = s_soundTablePtr->zones;
      }
      while ( v23 < v22[(unsigned int)ctFilterZoneB].numFilter );
    }
  }
  VolModCount = SND_GetVolModCount();
  for ( i = 0; i < VolModCount; ++i )
  {
    VolModDefaultValue = SND_GetVolModDefaultValue(i);
    SND_SetVolModValue(i, *(float *)&VolModDefaultValue, 0);
  }
  SND_SubmixSetSlotsFromZones(s_soundTablePtr->zones[s_audioZoneStates[v3].ctMixZoneA].duck, s_soundTablePtr->zones[s_audioZoneStates[v3].ctMixZoneB].duck, -1.0);
  if ( s_audioZoneStates[v3].ctMixZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctMixZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctMixZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctMixZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctMixZoneA = s_audioZoneStates[v3].ctMixZoneA;
  v30 = s_soundTablePtr->zones;
  if ( v30[ctMixZoneA].startMixIndex != -1 )
  {
    v31 = 0;
    if ( v30[ctMixZoneA].numMix > 0 )
    {
      do
      {
        v32 = v31 + v30[(unsigned int)ctMixZoneA].startMixIndex;
        if ( v32 >= s_soundTablePtr->mixCount )
        {
          LODWORD(q) = s_soundTablePtr->mixCount;
          LODWORD(freq) = v31 + v30[(unsigned int)ctMixZoneA].startMixIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 517, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->mixCount )", "idx doesn't index s_soundTablePtr->mixCount\n\t%i not in [0, %i)", freq, q) )
            __debugbreak();
        }
        SND_SetVolModValue(s_soundTablePtr->mixes[v32].volModIndex, s_soundTablePtr->mixes[v32].volume, (int)(float)(0.001 * s_soundTablePtr->mixes[v32].fade));
        ++v31;
        LODWORD(ctMixZoneA) = s_audioZoneStates[v3].ctMixZoneA;
        v30 = s_soundTablePtr->zones;
      }
      while ( v31 < v30[(unsigned int)ctMixZoneA].numMix );
    }
  }
  if ( s_audioZoneStates[v3].ctAmbientZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctAmbientZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 523, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctAmbientZoneA = s_audioZoneStates[v3].ctAmbientZoneA;
  if ( (_DWORD)ctAmbientZoneA == s_audioZoneStates[v3].ctAmbientZoneB )
  {
    ambientStream = s_soundTablePtr->zones[ctAmbientZoneA].ambientStream;
    if ( ambientStream && *ambientStream )
      SND_PlayAmbientAlias(localClientNum, ambientStream, 1.0, 0, 1, SASYS_CGAME);
    else
      SND_StopAmbient(0);
  }
  if ( s_audioZoneStates[v3].ctAmbientEventZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(q) = s_soundTablePtr->zoneCount;
    LODWORD(freq) = s_audioZoneStates[v3].ctAmbientEventZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 538, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientEventZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientEventZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", freq, q) )
      __debugbreak();
  }
  ctAmbientEventZoneA = s_audioZoneStates[v3].ctAmbientEventZoneA;
  if ( (_DWORD)ctAmbientEventZoneA == s_audioZoneStates[v3].ctAmbientEventZoneB )
  {
    v36 = s_soundTablePtr;
    ambientDefIndex = s_soundTablePtr->zones[ctAmbientEventZoneA].ambientDefIndex;
    if ( ambientDefIndex == -1 )
    {
      v39 = NULL;
      v36 = NULL;
      v38 = 0.0;
    }
    else
    {
      v38 = FLOAT_1_0;
      v39 = &s_soundTablePtr->ambientDefs[ambientDefIndex];
    }
    SND_SetAmbientEvents(localClientNum, v36, v39, v38);
  }
  SND_InitFullOcclusionFlags();
  ctFullOcclusionZoneA = s_audioZoneStates[v3].ctFullOcclusionZoneA;
  v41 = s_soundTablePtr;
  v42 = s_soundTablePtr->zones;
  if ( v42[ctFullOcclusionZoneA].startFullOccIndex != -1 && v42[ctFullOcclusionZoneA].numDisableFullOcc > 0 )
  {
    do
    {
      v43 = v6 + v42[(unsigned int)ctFullOcclusionZoneA].startFullOccIndex;
      if ( v43 >= v41->fullOcclusionDefCount )
      {
        LODWORD(q) = v41->fullOcclusionDefCount;
        LODWORD(freq) = v6 + v42[(unsigned int)ctFullOcclusionZoneA].startFullOccIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 561, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->fullOcclusionDefCount )", "idx doesn't index s_soundTablePtr->fullOcclusionDefCount\n\t%i not in [0, %i)", freq, q) )
          __debugbreak();
        v41 = s_soundTablePtr;
      }
      SND_DisableFullOcclusionForEntChannel(v41->fullOcclusionDefs[v43].entChannelIdx);
      ++v6;
      v41 = s_soundTablePtr;
      LODWORD(ctFullOcclusionZoneA) = s_audioZoneStates[v3].ctFullOcclusionZoneA;
      v42 = s_soundTablePtr->zones;
    }
    while ( v6 < v42[(unsigned int)ctFullOcclusionZoneA].numDisableFullOcc );
  }
  g_audTrigWeapReflZoneA = s_audioZoneStates[v3].ctWeapReflZoneA;
  g_audTrigWeapReflZoneB = s_audioZoneStates[v3].ctWeapReflZoneB;
  g_audTrigPlayerBreathZoneA = s_audioZoneStates[v3].ctPlayerBreathZoneA;
  g_audTrigPlayerBreathZoneB = s_audioZoneStates[v3].ctPlayerBreathZoneB;
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
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  ClientTriggerBlendNode *v11; 
  unsigned int triggerA; 
  unsigned int triggerB; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  const SoundTable *v29; 
  const ZoneDef *v30; 
  const SoundTable *v31; 
  const SoundTable *v32; 
  __int64 v33; 
  int v34; 
  const ZoneDef *v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  vec3_t outOffset; 
  vec3_t v41; 
  vec3_t outOrigin; 

  *outZoneFront = NULL;
  *(_QWORD *)outOrigin.v = viewPosition;
  v7 = localClientNum;
  *outZoneRear = NULL;
  if ( cm.mapEnts )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3525, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentAudioTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentAudioTrigger )\n\t%i not in [0, %i)", localClientNum, 2) )
        __debugbreak();
      LODWORD(v39) = 2;
      LODWORD(v37) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3616, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentAudioBlendTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentAudioBlendTrigger )\n\t%i not in [0, %i)", v37, v39) )
        __debugbreak();
    }
    v8 = (unsigned int)g_playerCurrentAudioBlendTrigger[v7];
    if ( (_DWORD)v8 == 0x4000 )
    {
      v34 = SND_LookupZoneIndex(g_playerCurrentAudioTrigger[v7]);
      if ( v34 != 0x7FFFFFFF )
      {
        v35 = &s_soundTablePtr->zones[v34];
        *outZoneFront = v35;
        *outZoneRear = v35;
      }
    }
    else
    {
      v9 = cm.mapEnts->clientTrigger.blendLookup[v8];
      if ( v9 >= cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )
      {
        LODWORD(v38) = cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes;
        LODWORD(v36) = cm.mapEnts->clientTrigger.blendLookup[v8];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3533, ASSERT_TYPE_ASSERT, "(unsigned)( blendIndex ) < (unsigned)( cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes )", "blendIndex doesn't index cm.mapEnts->clientTriggerBlend.numClientTriggerBlendNodes\n\t%i not in [0, %i)", v36, v38) )
          __debugbreak();
      }
      v10 = v9;
      v11 = &cm.mapEnts->clientTriggerBlend.blendNodes[v10];
      triggerA = v11->triggerA;
      triggerB = v11->triggerB;
      CG_TriggerTransformPointOnMovingPlatform((const LocalClientNum_t)v7, triggerA, &v11->pointA, &outOffset, NULL);
      CG_TriggerTransformPointOnMovingPlatform((const LocalClientNum_t)v7, triggerB, &cm.mapEnts->clientTriggerBlend.blendNodes[v10].pointB, &v41, NULL);
      v14 = outOffset.v[0] - **(float **)outOrigin.v;
      v15 = outOffset.v[1] - *(float *)(*(_QWORD *)outOrigin.v + 4i64);
      v16 = v41.v[0] - **(float **)outOrigin.v;
      v17 = v41.v[1] - *(float *)(*(_QWORD *)outOrigin.v + 4i64);
      v18 = v41.v[2] - *(float *)(*(_QWORD *)outOrigin.v + 8i64);
      v19 = v16 * viewDirection->v[0];
      v20 = (float)(v14 * viewDirection->v[0]) + (float)(v15 * viewDirection->v[1]);
      v21 = (float)(outOffset.v[2] - *(float *)(*(_QWORD *)outOrigin.v + 8i64)) * viewDirection->v[2];
      v22 = v17 * viewDirection->v[1];
      outOffset.v[2] = outOffset.v[2] - *(float *)(*(_QWORD *)outOrigin.v + 8i64);
      v23 = v20 + v21;
      v24 = v18 * viewDirection->v[2];
      v41.v[2] = v18;
      v25 = (float)(v19 + v22) + v24;
      outOffset.v[0] = v14;
      outOffset.v[1] = v15;
      v41.v[0] = v16;
      v41.v[1] = v17;
      v26 = SND_LookupZoneIndex(triggerA);
      v27 = SND_LookupZoneIndex(triggerB);
      v28 = v27;
      if ( v23 < 0.0 || v23 <= v25 )
      {
        if ( v25 < 0.0 )
        {
          SND_GetListenerOrigin((const LocalClientNum_t)v7, &outOrigin);
          v32 = s_soundTablePtr;
          if ( (float)((float)((float)((float)(outOffset.v[1] - outOrigin.v[1]) * (float)(outOffset.v[1] - outOrigin.v[1])) + (float)((float)(outOffset.v[0] - outOrigin.v[0]) * (float)(outOffset.v[0] - outOrigin.v[0]))) + (float)((float)(outOffset.v[2] - outOrigin.v[2]) * (float)(outOffset.v[2] - outOrigin.v[2]))) >= (float)((float)((float)((float)(v41.v[1] - outOrigin.v[1]) * (float)(v41.v[1] - outOrigin.v[1])) + (float)((float)(v41.v[0] - outOrigin.v[0]) * (float)(v41.v[0] - outOrigin.v[0]))) + (float)((float)(v41.v[2] - outOrigin.v[2]) * (float)(v41.v[2] - outOrigin.v[2]))) )
            v33 = v28;
          else
            v33 = v26;
          *outZoneFront = &s_soundTablePtr->zones[v33];
          v30 = &v32->zones[v33];
        }
        else
        {
          v31 = s_soundTablePtr;
          *outZoneFront = &s_soundTablePtr->zones[v27];
          v30 = &v31->zones[v26];
        }
      }
      else
      {
        v29 = s_soundTablePtr;
        *outZoneFront = &s_soundTablePtr->zones[v26];
        v30 = &v29->zones[v27];
      }
      *outZoneRear = v30;
    }
  }
}

/*
==============
CG_ClearAudioOverride
==============
*/
void CG_ClearAudioOverride(LocalClientNum_t localClientNum, CTAudOverrideType overrideType, float fadeTime)
{
  __int64 v3; 
  CTAudState *v4; 
  cg_t *LocalClientGlobals; 
  int v6; 
  CTAudOverride *v7; 
  __int64 v8; 
  CTAudOverride *v9; 
  CTAudOverride *v10; 
  int v11; 
  int v12; 

  v3 = overrideType;
  v4 = &s_audioZoneStates[localClientNum];
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v3 >= 7 )
  {
    v12 = 7;
    v11 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v6 = 6;
  v7 = &v4->ctOverrideStack[v3];
  v8 = 6i64;
  v9 = &v4->ctOverrideStack[6];
  while ( !v9->active )
  {
    --v6;
    --v9;
    if ( --v8 < 0 )
    {
      v10 = NULL;
      goto LABEL_9;
    }
  }
  v10 = &v4->ctOverrideStack[v6];
LABEL_9:
  if ( v10 == v7 )
  {
    v4->scriptAudioZoneFadeStartTime = LocalClientGlobals->time;
    v4->scriptAudioZoneFadeTargetTime = LocalClientGlobals->time - (int)(float)(fadeTime * -1000.0);
    v4->scriptPrevAudioZoneOverride = v7->scriptAudioZoneOverride;
  }
  v7->scriptAudioZoneOverrideFlags = 2047;
  v7->scriptAudioZoneOverrideB = 0x7FFFFFFF;
  v7->scriptAudioZoneOverride = 0x7FFFFFFF;
  v7->active = 0;
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
char CG_DoesLineSegmentIntersectTrigger(const LocalClientNum_t localClientNum, const clientTriggerType_t typeMask, const vec3_t *start, const vec3_t *end, unsigned int *outTriggerIndex, vec3_t *outIntersectPos)
{
  signed __int64 v6; 
  void *v7; 
  unsigned __int64 v8; 
  int v9; 
  LocalClientNum_t v10; 
  MapEnts *mapEnts; 
  const vec3_t *v12; 
  const vec3_t *v13; 
  const SpatialPartition_Tree *spatialTree; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  MapEnts *v18; 
  vec3_t *origins; 
  __int64 v20; 
  float v21; 
  MapEnts *v22; 
  unsigned int v23; 
  ClientTriggerModel *models; 
  int v25; 
  float v26; 
  const vec3_t *v27; 
  __int64 v28; 
  const ClientTriggerHull *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  const TriggerSlab *slabs; 
  __int64 v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  const TriggerSlab *v59; 
  float v60; 
  float *v61; 
  float v63; 
  float v64; 
  float v65; 
  float *v66; 
  __int64 v67; 
  char *fmt; 
  __int64 v69; 
  __int64 v70; 
  char v71[4496]; 

  v7 = alloca(v6);
  v8 = (unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v8 + 4480) = (unsigned __int64)&v67 ^ _security_cookie;
  LOWORD(v9) = typeMask;
  *(_DWORD *)(v8 + 12) = typeMask;
  v10 = localClientNum;
  mapEnts = cm.mapEnts;
  v12 = end;
  *(_DWORD *)(v8 + 8) = localClientNum;
  v13 = start;
  *(_QWORD *)(v8 + 16) = outTriggerIndex;
  *(_QWORD *)(v8 + 352) = 0i64;
  *(_DWORD *)(v8 + 360) = 0;
  *(_QWORD *)(v8 + 368) = 0i64;
  *(_QWORD *)(v8 + 376) = 0i64;
  spatialTree = mapEnts->clientTrigger.spatialTree;
  *(_QWORD *)(v8 + 40) = end;
  *(_QWORD *)(v8 + 32) = start;
  *(_QWORD *)(v8 + 24) = outIntersectPos;
  SpatialPartition_Tree_SegmentIterator::Init((SpatialPartition_Tree_SegmentIterator *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 160), spatialTree, start, end);
  while ( 1 )
  {
    do
    {
      if ( !SpatialPartition_Tree_SegmentIterator::Advance((SpatialPartition_Tree_SegmentIterator *)(v8 + 160)) )
        return 0;
      if ( !*(_QWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v15 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) + 20i64);
      v16 = *(_DWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x168);
      if ( v16 == v15 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) >= **(unsigned __int8 **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v17 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x178) + 4i64 * *(unsigned int *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) + 4);
      }
      else
      {
        if ( v16 >= v15 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v16 = *(_DWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x168);
        }
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) + 8i64) + 4i64 * v16);
      }
      v18 = cm.mapEnts;
      *(_DWORD *)v8 = v17;
      if ( v17 >= v18->clientTrigger.trigger.count )
      {
        LODWORD(v70) = v18->clientTrigger.trigger.count;
        LODWORD(v69) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3420, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
        v18 = cm.mapEnts;
      }
      origins = v18->clientTrigger.origins;
      v20 = v17;
    }
    while ( (v18->clientTrigger.triggerType[v17] & (unsigned __int16)v9) == 0 || g_audioTriggerDisabled[v17] );
    CG_TriggerCalcMovingPlatformPos(v10, v13, v17, (vec3_t *)(v8 + 64));
    CG_TriggerCalcMovingPlatformPos(v10, v12, v17, (vec3_t *)(v8 + 96));
    v21 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x64) - *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44);
    v22 = cm.mapEnts;
    v23 = 0;
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) - *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) - *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34) = v21;
    models = v22->clientTrigger.trigger.models;
    v25 = 0;
    if ( models[v20].hullCount )
      break;
LABEL_44:
    v9 = *(_DWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
    v12 = *(const vec3_t **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
    v10 = *(_DWORD *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  }
  while ( 1 )
  {
    v26 = origins[v20].v[0];
    v27 = *(const vec3_t **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    v28 = v25 + models[v20].firstHull;
    fmt = (char *)(v8 + 4);
    v29 = &v22->clientTrigger.trigger.hulls[v28];
    v30 = v26 + v29->triggerSpaceBounds.midPoint.v[0];
    v31 = v29->triggerSpaceBounds.midPoint.v[1] + origins[v20].v[1];
    v32 = v29->triggerSpaceBounds.midPoint.v[2] + origins[v20].v[2];
    v33 = v31 - v29->triggerSpaceBounds.halfSize.v[1];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v30 - v29->triggerSpaceBounds.halfSize.v[0];
    v34 = v32 - v29->triggerSpaceBounds.halfSize.v[2];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x84) = v33;
    v35 = v30 + v29->triggerSpaceBounds.halfSize.v[0];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x88) = v34;
    v36 = v31 + v29->triggerSpaceBounds.halfSize.v[1];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = v35;
    v37 = v32 + v29->triggerSpaceBounds.halfSize.v[2];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x74) = v36;
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x78) = v37;
    if ( IntersectRayAABB(v27, (const vec3_t *)(v8 + 48), (const vec3_t *)(v8 + 128), (const vec3_t *)(v8 + 112), (float *)fmt) )
    {
      v38 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
      if ( v38 <= 1.0 )
        break;
    }
LABEL_42:
    if ( ++v25 >= (unsigned int)models[v20].hullCount )
    {
      v13 = *(const vec3_t **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
      goto LABEL_44;
    }
  }
  if ( v29->slabCount )
  {
    v39 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    v40 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44);
    v41 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    v42 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    v43 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34);
    v44 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
    do
    {
      slabs = v22->clientTrigger.trigger.slabs;
      v46 = v23 + v29->firstSlab;
      v47 = slabs[v46].dir.v[1];
      v48 = slabs[v46].dir.v[0];
      v49 = slabs[v46].dir.v[2];
      v50 = (float)((float)(v48 * v44) + (float)(v47 * v43)) + (float)(v49 * v42);
      if ( COERCE_FLOAT(LODWORD(v50) & _xmm) >= 0.001 )
      {
        v51 = slabs[v46].halfSize - slabs[v46].midPoint;
        v52 = origins[v20].v[0];
        v53 = (float)((float)((float)((float)((float)((float)(v47 * v51) + origins[v20].v[1]) - v40) * v47) + (float)((float)((float)((float)(v48 * v51) + v52) - v41) * v48)) + (float)((float)((float)((float)(v49 * v51) + origins[v20].v[2]) - v39) * v49)) / v50;
        if ( v53 >= 0.0 && v53 <= 1.0 )
        {
          v54 = (float)(v44 * v53) + v41;
          v55 = (float)(v43 * v53) + v40;
          v56 = (float)(v42 * v53) + v39;
          v57 = v55 - origins[v20].v[1];
          *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = v54 - v52;
          *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) = v56 - origins[v20].v[2];
          *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) = v57;
          if ( CG_IsPointInsideHull(v29, slabs, (const vec3_t *)(v8 + 80)) )
            goto LABEL_45;
          v39 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
          v40 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44);
          v41 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
          v42 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
          v43 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34);
          v44 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
        }
      }
      ++v23;
    }
    while ( v23 < v29->slabCount );
    v58 = *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
    v59 = v22->clientTrigger.trigger.slabs;
    v54 = (float)(v44 * v58) + v41;
    v55 = (float)(v43 * v58) + v40;
    v56 = (float)(v42 * v58) + v39;
    v60 = v55 - origins[v20].v[1];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = v54 - origins[v20].v[0];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) = v56 - origins[v20].v[2];
    *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) = v60;
    if ( !CG_IsPointInsideHull(v29, v59, (const vec3_t *)(v8 + 80)) )
    {
      v23 = 0;
      goto LABEL_42;
    }
LABEL_45:
    **(_DWORD **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(_DWORD *)v8;
    v61 = *(float **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    *v61 = v54;
    v61[1] = v55;
    v61[2] = v56;
    return 1;
  }
  else
  {
    v63 = v38 * *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
    v64 = v38 * *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34);
    v65 = v38 * *(float *)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    **(_DWORD **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(_DWORD *)v8;
    v66 = *(float **)(((unsigned __int64)v71 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    *v66 = v63;
    v66[1] = v64;
    v66[2] = v65;
    return 1;
  }
}

/*
==============
CG_DrawFullOcclusionDebug
==============
*/
void CG_DrawFullOcclusionDebug(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  int v2; 
  ntl::internal::list_node_base *mp_next; 
  int v4; 
  ntl::internal::list_node_base *v5; 
  const dvar_t *v6; 
  ntl::internal::list_node<FullOcclusionLine> *v7; 
  const vec3_t *v8; 
  MapEnts *mapEnts; 
  unsigned int i; 
  float *v; 
  ClientTriggerModel *models; 
  __int64 firstHull; 
  unsigned __int16 hullCount; 
  unsigned int count; 
  CTAudRvbPanInfo *audioRvbPanInfo; 
  const vec3_t *p_position; 
  __int64 v18; 
  __int64 v19; 
  ClientTriggerHull *hulls; 
  float v21; 
  vec3_t origin; 
  vec3_t mins; 
  vec3_t outOffset; 
  vec3_t v26; 
  tmat33_t<vec3_t> axis; 

  v1 = localClientNum;
  v2 = Sys_Milliseconds();
  mp_next = s_fullOcclusionLines.m_listHead.m_sentinel.mp_next;
  v4 = v2;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<FullOcclusionLine> > *)s_fullOcclusionLines.m_listHead.m_sentinel.mp_next != &s_fullOcclusionLines.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v5 = mp_next + 1;
      if ( SLODWORD(mp_next[3].mp_next) >= v4 )
        goto LABEL_35;
      v6 = DCONST_DVARINT_snd_fullOcclusionDebug;
      if ( !DCONST_DVARINT_snd_fullOcclusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_fullOcclusionDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.integer >= 2 )
      {
LABEL_35:
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        v8 = (const vec3_t *)((char *)&v5->mp_next + 4);
        if ( BYTE4(v5[2].mp_prev) )
        {
          CL_AddDebugLine((const vec3_t *)v5, v8, &colorRed, 0, 1, 0);
          CL_AddDebugStar((const vec3_t *)&v5[1].mp_next, &colorYellow, 0, 1, 0);
        }
        else
        {
          CL_AddDebugLine((const vec3_t *)v5, v8, &colorGreen, 0, 1, 0);
        }
      }
      else
      {
        v7 = (ntl::internal::list_node<FullOcclusionLine> *)mp_next;
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        ntl::internal::list_head_base<ntl::internal::list_node<FullOcclusionLine>>::remove(&s_fullOcclusionLines.m_listHead, v7);
        v7->mp_prev = (ntl::internal::list_node_base *)s_fullOcclusionLines.m_freelist.m_head.mp_next;
        s_fullOcclusionLines.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v7;
      }
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_fullOcclusionLines.m_listHead );
    v1 = localClientNum;
  }
  mapEnts = cm.mapEnts;
  for ( i = 0; i < mapEnts->clientTrigger.trigger.count; ++i )
  {
    v = mapEnts->clientTrigger.origins[i].v;
    if ( (mapEnts->clientTrigger.triggerType[i] & 0x20) != 0 )
    {
      models = mapEnts->clientTrigger.trigger.models;
      firstHull = (int)models[i].firstHull;
      hullCount = models[i].hullCount;
      count = mapEnts->clientTrigger.trigger.count;
      if ( count && i < count )
      {
        audioRvbPanInfo = mapEnts->clientTrigger.audioRvbPanInfo;
        p_position = &audioRvbPanInfo[i].position;
        if ( !audioRvbPanInfo[i].hasCustomPosition )
          p_position = &mapEnts->clientTrigger.origins[i];
        CG_TriggerTransformPointOnMovingPlatform(v1, i, p_position, &outOffset, NULL);
        mapEnts = cm.mapEnts;
      }
      v18 = hullCount;
      if ( hullCount )
      {
        v19 = firstHull;
        do
        {
          hulls = mapEnts->clientTrigger.trigger.hulls;
          AxisClear(&axis);
          LODWORD(mins.v[0]) = LODWORD(hulls[v19].triggerSpaceBounds.halfSize.v[0]) ^ _xmm;
          LODWORD(mins.v[1]) = LODWORD(hulls[v19].triggerSpaceBounds.halfSize.v[1]) ^ _xmm;
          v21 = *v;
          LODWORD(mins.v[2]) = LODWORD(hulls[v19].triggerSpaceBounds.halfSize.v[2]) ^ _xmm;
          origin.v[0] = v21 + hulls[v19].triggerSpaceBounds.midPoint.v[0];
          origin.v[1] = hulls[v19].triggerSpaceBounds.midPoint.v[1] + v[1];
          origin.v[2] = hulls[v19].triggerSpaceBounds.midPoint.v[2] + v[2];
          CG_TriggerTransformPointOnMovingPlatform(v1, i, &origin, &v26, &axis);
          CL_AddDebugBox(&axis, &v26, &mins, &hulls[v19].triggerSpaceBounds.halfSize, &colorYellowHeat, 0, 1, 0);
          mapEnts = cm.mapEnts;
          ++v19;
          --v18;
        }
        while ( v18 );
      }
    }
  }
}

/*
==============
CG_DrawTriggerAudioState
==============
*/
void CG_DrawTriggerAudioState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  float v4; 
  bool v5; 
  ScreenPlacement *v6; 
  float v7; 
  float v8; 
  __int64 v9; 
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  float v12; 
  float v13; 
  GfxFont *smallDevFont; 
  const char *v15; 
  __int64 v16; 
  int v17; 
  GfxFont *v18; 
  const char *v19; 
  ZoneDef *zones; 
  const char *stateName; 
  const char *zoneName; 
  const char *v23; 
  int v24; 
  GfxFont *v25; 
  float v26; 
  const char *v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  float v31; 
  vec4_t v32; 
  GfxFont *v33; 
  GfxFont *v34; 
  const char *ambientStream; 
  const char *v36; 
  const char *v37; 
  int v38; 
  GfxFont *v39; 
  float v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  int v46; 
  int v47; 
  GfxFont *v48; 
  float v49; 
  const char *v50; 
  int v51; 
  __int64 v52; 
  __int64 v53; 
  float v54; 
  __int64 v55; 
  float v56; 
  vec4_t v57; 
  __int64 v58; 
  GfxFont *v59; 
  ZoneDef *v60; 
  bool v61; 
  __int16 reverbIndex; 
  ReverbDef *v63; 
  __int64 v64; 
  const char *v65; 
  int v66; 
  GfxFont *v67; 
  ZoneDef *v68; 
  __int64 v69; 
  float v70; 
  __int16 v71; 
  ReverbDef *v72; 
  __int64 v73; 
  const char *v74; 
  float v75; 
  ReverbDef *reverbs; 
  __int64 v77; 
  const char *v78; 
  int v79; 
  GfxFont *v80; 
  float v81; 
  const char *v82; 
  const char *NameForSubmixHUD; 
  __int64 v84; 
  ZoneDef *v85; 
  const char *v86; 
  __int64 v87; 
  ZoneDef *v88; 
  const char *v89; 
  int v90; 
  int v91; 
  vec4_t v92; 
  GfxFont *v93; 
  const char *v94; 
  int v95; 
  GfxFont *v96; 
  float v97; 
  const char *v98; 
  int v99; 
  const char *v100; 
  GfxFont *v101; 
  float v102; 
  const char *v103; 
  int v104; 
  GfxFont *v105; 
  float v106; 
  float v107; 
  const char *v108; 
  int v109; 
  __int64 v110; 
  float v111; 
  int v112; 
  float v113; 
  vec4_t v114; 
  GfxFont *v115; 
  __int64 v116; 
  ZoneDef *v117; 
  const char *v118; 
  int v119; 
  GfxFont *v120; 
  __int64 v121; 
  float v122; 
  ZoneDef *v123; 
  const char *v124; 
  float v125; 
  const char *v126; 
  int v127; 
  GfxFont *v128; 
  float v129; 
  const char *v130; 
  GfxFont *v131; 
  const char *v132; 
  int v133; 
  int v134; 
  float v135; 
  __int64 v136; 
  float v137; 
  float v138; 
  vec4_t v139; 
  GfxFont *v140; 
  __int64 v141; 
  __int64 v142; 
  ZoneDef *v143; 
  const char *v144; 
  int v145; 
  GfxFont *v146; 
  __int64 v147; 
  float v148; 
  ZoneDef *v149; 
  const char *v150; 
  const char *v151; 
  int v152; 
  int v153; 
  GfxFont *v154; 
  float v155; 
  const char *v156; 
  int v157; 
  __int64 v158; 
  int v159; 
  float v160; 
  __int64 v161; 
  float v162; 
  vec4_t v163; 
  GfxFont *v164; 
  __int64 v165; 
  __int64 v166; 
  ZoneDef *v167; 
  const char *v168; 
  int v169; 
  GfxFont *v170; 
  __int64 v171; 
  float v172; 
  ZoneDef *v173; 
  const char *v174; 
  float v175; 
  ZoneDef *v176; 
  const char *v177; 
  int v178; 
  GfxFont *v179; 
  float v180; 
  const char *v181; 
  GfxFont *v182; 
  const char *v183; 
  float v184; 
  __int64 v185; 
  float v186; 
  vec4_t v187; 
  int PlayerADSRSettingIndex; 
  GfxFont *v189; 
  const char *v190; 
  int v191; 
  GfxFont *v192; 
  float v193; 
  const char *v194; 
  int v195; 
  GfxFont *v196; 
  const char *v197; 
  int v198; 
  int v199; 
  int v200; 
  __int128 v201; 
  vec4_t v202; 
  GfxFont *v203; 
  __int16 ambientDefIndex; 
  AmbientDef *ambientDefs; 
  __int64 v206; 
  const char *v207; 
  __int128 v208; 
  int v209; 
  __int64 v210; 
  const SoundTable *v211; 
  AmbientEvent *ambientEvents; 
  unsigned int ambientElementsCount; 
  __int64 v214; 
  __int64 ambientElementIndex; 
  AmbientElement *ambientElements; 
  GfxFont *v217; 
  __int64 v218; 
  const char *v219; 
  int v220; 
  GfxFont *v221; 
  __int128 v222; 
  const char *v223; 
  int v224; 
  GfxFont *v225; 
  const char *v226; 
  int v227; 
  GfxFont *v228; 
  float v229; 
  const char *v230; 
  float v231; 
  vec4_t v232; 
  const char *v233; 
  int v234; 
  unsigned int weapReflId; 
  const WeaponReflectionDef *WeapReflDefWithClass; 
  GfxFont *v237; 
  int v238; 
  const char *v239; 
  int v240; 
  GfxFont *v241; 
  float v242; 
  const char *v243; 
  int v244; 
  GfxFont *v245; 
  float v246; 
  const char *v247; 
  int v248; 
  BOOL v249; 
  float v250; 
  float v251; 
  vec4_t v252; 
  int v253; 
  float v254; 
  GfxFont *v255; 
  float v256; 
  float v257; 
  const char *v258; 
  float v259; 
  float v260; 
  float v261; 
  const char *v262; 
  int v263; 
  GfxFont *v264; 
  float v265; 
  const char *v266; 
  int v267; 
  GfxFont *v268; 
  float v269; 
  const char *v270; 
  float v271; 
  int v272; 
  GfxFont *v273; 
  const char *v274; 
  int v275; 
  GfxFont *v276; 
  float v277; 
  const char *v278; 
  int v279; 
  GfxFont *v280; 
  float v281; 
  const char *v282; 
  float v283; 
  int v284; 
  GfxFont *v285; 
  const char *v286; 
  MapEnts *mapEnts; 
  unsigned int v288; 
  __int64 v289; 
  unsigned __int16 v290; 
  ClientTriggerModel *models; 
  __int64 firstHull; 
  unsigned __int16 hullCount; 
  float v294; 
  float v295; 
  float v296; 
  double Float_Internal_DebugName; 
  vec4_t *v298; 
  __int64 v299; 
  int v300; 
  int v301; 
  int v302; 
  int v303; 
  int v304; 
  vec4_t *v305; 
  const vec4_t *v306; 
  vec4_t *v307; 
  const char *v308; 
  ClientTriggerHull *hulls; 
  vec4_t *v310; 
  vec4_t *v311; 
  __int64 v312; 
  const dvar_t *v313; 
  const char *v314; 
  __int64 v315; 
  const dvar_t *v316; 
  const char *v317; 
  const char *v318; 
  const dvar_t *v319; 
  const dvar_t *v320; 
  MapEnts *v321; 
  const vec3_t *p_pointA; 
  SndBankTransient *v323; 
  const dvar_t *v324; 
  const char *v325; 
  const dvar_t *v326; 
  const dvar_t *v327; 
  float v328; 
  const dvar_t *v329; 
  GfxFont *v330; 
  const char *v331; 
  char *s; 
  char *sa; 
  char *sb; 
  char *sc; 
  vec4_t *color; 
  GfxFont *font; 
  unsigned int zoneB; 
  LocalClientNum_t localClientNuma; 
  int v340; 
  int v341; 
  unsigned int zoneA[2]; 
  vec4_t *v343; 
  __int64 lerpB; 
  float v345; 
  __int64 origins; 
  vec4_t overriddenColor; 
  vec3_t outCenter; 
  vec3_t mins; 
  vec3_t origin; 
  vec3_t outOffset; 
  vec3_t point; 
  vec3_t v353; 
  tmat33_t<vec3_t> axis; 
  Weapon weapon; 

  v1 = g_lastAudioZoneIndexA;
  v2 = g_lastAudioZoneIndexB;
  v3 = localClientNum;
  localClientNuma = localClientNum;
  v341 = g_lastAudioZoneIndexA;
  v340 = g_lastAudioZoneIndexB;
  v4 = g_lastAudioLerpVal;
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v6 = &scrPlaceViewDisplay[localClientNum];
      goto LABEL_8;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v5 )
      __debugbreak();
  }
  v6 = &scrPlaceFull;
LABEL_8:
  v7 = v6->virtualViewableMin.v[0];
  v8 = v6->virtualViewableMin.v[1];
  v9 = 236 * v3;
  v10 = v3;
  origins = 236 * v3;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weapon = *BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v10], &LocalClientGlobals->predictedPlayerState);
  v12 = LocalClientGlobals->refdef.viewOffset.v[0];
  v13 = LocalClientGlobals->refdef.viewOffset.v[1];
  v345 = LocalClientGlobals->refdef.viewOffset.v[2];
  if ( !g_audioTriggersFound )
  {
    smallDevFont = cls.smallDevFont;
    v15 = j_va("No audio client triggers in level.");
    v8 = v8 + (float)CG_DrawDevString(v6, v7, v8, 0.55000001, 0.55000001, v15, &colorGreen, 5, smallDevFont);
  }
  if ( (_DWORD)v1 == 0x7FFFFFFF )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      v340 = SND_LookupZoneIndex(0x4000);
      LODWORD(v2) = v340;
      v341 = v340;
      LODWORD(v1) = v340;
      if ( v340 != 0x7FFFFFFF )
        goto LABEL_16;
    }
LABEL_263:
    v330 = cls.smallDevFont;
    v331 = j_va("Error loading audio zones");
    CG_DrawDevString(v6, v7, v8, 0.55000001, 0.55000001, v331, &colorGreen, 5, v330);
    return;
  }
  if ( (_DWORD)v2 == 0x7FFFFFFF )
    goto LABEL_263;
  if ( (_DWORD)v1 == (_DWORD)v2 )
  {
LABEL_16:
    v16 = (int)v1;
    v17 = SND_LookupZoneIndex(0x4000);
    v18 = cls.smallDevFont;
    v19 = "Zone: %s (Default) State: %s";
    zones = s_soundTablePtr->zones;
    stateName = zones[v16].stateName;
    zoneName = zones[v16].zoneName;
    if ( (_DWORD)v1 != v17 )
      v19 = "Zone: %s State: %s";
    v23 = j_va(v19, zoneName, stateName);
    font = v18;
    goto LABEL_19;
  }
  v33 = cls.smallDevFont;
  LODWORD(s) = (int)(float)(v4 * 100.0);
  v23 = j_va("Zone: %s State: %s => Zone: %s State: %s %d%%", s_soundTablePtr->zones[v1].zoneName, s_soundTablePtr->zones[v1].stateName, s_soundTablePtr->zones[v2].zoneName, s_soundTablePtr->zones[v2].stateName, s);
  font = v33;
LABEL_19:
  v24 = CG_DrawDevString(v6, v7, v8, 0.55000001, 0.55000001, v23, &colorGreen, 5, font);
  v25 = cls.smallDevFont;
  v26 = (float)v24 + v8;
  v27 = j_va("  Ambient Track:");
  v28 = CG_DrawDevString(v6, v7, v26, 0.55000001, 0.55000001, v27, &colorLtBlue, 5, v25);
  v29 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneA + v9);
  v30 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneB + v9);
  v31 = (float)v28 + v26;
  if ( (_DWORD)v1 == (_DWORD)v29 && (_DWORD)v2 == v30 )
    v32 = colorMdCyan;
  else
    v32 = colorMdYellow;
  v34 = cls.smallDevFont;
  overriddenColor = v32;
  ambientStream = s_soundTablePtr->zones[v29].ambientStream;
  if ( (_DWORD)v29 == v30 )
  {
    if ( ambientStream )
    {
      v44 = "Default";
      if ( *ambientStream )
        v44 = s_soundTablePtr->zones[v29].ambientStream;
      v45 = j_va("    %s", v44);
    }
    else
    {
      v45 = j_va("    <None>");
    }
    v46 = CG_DrawDevString(v6, v7, v31, 0.55000001, 0.55000001, v45, &overriddenColor, 5, v34);
    v39 = cls.smallDevFont;
    v40 = (float)v46 + v31;
    v43 = j_va((const char *)&queryFormat.fmt + 3);
  }
  else
  {
    if ( ambientStream )
    {
      v36 = "Default =>";
      if ( *ambientStream )
        v36 = s_soundTablePtr->zones[v29].ambientStream;
      v37 = j_va("    %s =>", v36);
    }
    else
    {
      v37 = j_va("    <None> =>");
    }
    v38 = CG_DrawDevString(v6, v7, v31, 0.55000001, 0.55000001, v37, &overriddenColor, 5, v34);
    v39 = cls.smallDevFont;
    v40 = (float)v38 + v31;
    v41 = s_soundTablePtr->zones[*(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneB + v9)].ambientStream;
    if ( v41 )
    {
      v42 = "Default";
      if ( *v41 )
        v42 = s_soundTablePtr->zones[*(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientZoneB + v9)].ambientStream;
      v43 = j_va("    %s", v42);
    }
    else
    {
      v43 = j_va("    <None>");
    }
  }
  v47 = CG_DrawDevString(v6, v7, v40, 0.55000001, 0.55000001, v43, &overriddenColor, 5, v39);
  v48 = cls.smallDevFont;
  v49 = (float)v47 + v40;
  v50 = j_va("  Reverb:");
  v51 = CG_DrawDevString(v6, v7, v49, 0.55000001, 0.55000001, v50, &colorLtBlue, 5, v48);
  v53 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneB + v9);
  v54 = (float)v51;
  v55 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneA + v9);
  v56 = v49 + v54;
  if ( (_DWORD)v1 == (_DWORD)v55 && (_DWORD)v2 == (_DWORD)v53 )
    v57 = colorMdCyan;
  else
    v57 = colorMdYellow;
  v58 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneA + v9);
  v59 = cls.smallDevFont;
  overriddenColor = v57;
  v60 = s_soundTablePtr->zones;
  v61 = (_DWORD)v55 == (_DWORD)v53;
  reverbIndex = v60[v55].reverbIndex;
  if ( v61 )
  {
    if ( reverbIndex == -1 )
    {
      v78 = j_va("    <None - engine default>", v53, v52, v58);
    }
    else
    {
      reverbs = s_soundTablePtr->reverbs;
      v77 = reverbIndex;
      LODWORD(sa) = (int)(float)(reverbs[v77].fadeTime * 1000.0);
      v78 = j_va("    %s: (RoomType: %s, Dry: %f, Wet: %f, Fade: %d)", v60[v58].reverbName, reverbs[v77].roomType, reverbs[v77].dryLevel, reverbs[v77].wetLevel, sa);
    }
    v79 = CG_DrawDevString(v6, v7, v56, 0.55000001, 0.55000001, v78, &overriddenColor, 5, v59);
    v80 = cls.smallDevFont;
    v81 = (float)v79 + v56;
    v82 = j_va((const char *)&queryFormat.fmt + 3);
    v75 = (float)CG_DrawDevString(v6, v7, v81, 0.55000001, 0.55000001, v82, &overriddenColor, 5, v80) + v81;
  }
  else
  {
    if ( reverbIndex == -1 )
    {
      v65 = j_va("    <None - engine default> =>", v53, v52, v58);
    }
    else
    {
      v63 = s_soundTablePtr->reverbs;
      v64 = reverbIndex;
      LODWORD(sa) = (int)(float)(1000.0 * v63[v64].fadeTime);
      v65 = j_va("    %s: (RoomType: %s, Dry: %f, Wet: %f, Fade: %d) =>", v60[v58].reverbName, v63[v64].roomType, v63[v64].dryLevel, v63[v64].wetLevel, sa);
    }
    v66 = CG_DrawDevString(v6, v7, v56, 0.55000001, 0.55000001, v65, &overriddenColor, 5, v59);
    v67 = cls.smallDevFont;
    v68 = s_soundTablePtr->zones;
    v69 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctReverbZoneB + v9);
    v70 = (float)v66 + v56;
    v71 = v68[v69].reverbIndex;
    if ( v71 == -1 )
    {
      v74 = j_va("    <None - engine default>");
    }
    else
    {
      v72 = s_soundTablePtr->reverbs;
      v73 = v71;
      LODWORD(sb) = (int)(float)(1000.0 * v72[v73].fadeTime);
      v74 = j_va("    %s: (RoomType: %s, Dry: %f, Wet: %f, Fade: %d)", v68[v69].reverbName, v72[v73].roomType, v72[v73].dryLevel, v72[v73].wetLevel, sb);
    }
    v75 = v70 + (float)CG_DrawDevString(v6, v7, v70, 0.55000001, 0.55000001, v74, &overriddenColor, 5, v67);
  }
  SND_SubmixDebugGetZones(&zoneA[1], (float *)zoneA, &zoneB, (float *)&lerpB);
  *(_QWORD *)origin.v = SND_DebugGetNameForSubmixHUD(zoneA[1], 0);
  NameForSubmixHUD = SND_DebugGetNameForSubmixHUD(zoneB, 0);
  v84 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneA + v9);
  v85 = s_soundTablePtr->zones;
  *(_QWORD *)mins.v = NameForSubmixHUD;
  v86 = SND_DebugGetNameForSubmixHUD(v85[v84].duck, 0);
  v87 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v9);
  v88 = s_soundTablePtr->zones;
  v343 = (vec4_t *)v86;
  v89 = SND_DebugGetNameForSubmixHUD(v88[v87].duck, 0);
  v90 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v9);
  v91 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneA + v9);
  *(_QWORD *)outCenter.v = v89;
  if ( (_DWORD)v1 == v91 && (_DWORD)v2 == v90 )
    v92 = colorMdCyan;
  else
    v92 = colorMdYellow;
  v93 = cls.smallDevFont;
  overriddenColor = v92;
  v94 = j_va("  Submix:");
  v95 = CG_DrawDevString(v6, v7, v75, 0.55000001, 0.55000001, v94, &colorLtBlue, 5, v93);
  v96 = cls.smallDevFont;
  v97 = v75 + (float)v95;
  v98 = j_va("    Have: %s (%.2f) <=> %s (%.2f)", *(_QWORD *)origin.v, zoneA[0], *(_QWORD *)mins.v, *(float *)&lerpB);
  v99 = CG_DrawDevString(v6, v7, v97, 0.55000001, 0.55000001, v98, &overriddenColor, 5, v96);
  v100 = (char *)&queryFormat.fmt + 3;
  v101 = cls.smallDevFont;
  if ( v91 != v90 )
    v100 = "(blending)";
  v102 = v97 + (float)v99;
  v103 = j_va("     Zone: %s <=> %s %s", v343, *(_QWORD *)outCenter.v, v100);
  v104 = CG_DrawDevString(v6, v7, v102, 0.55000001, 0.55000001, v103, &overriddenColor, 5, v101);
  v105 = cls.smallDevFont;
  v106 = (float)v104;
  v107 = v102 + (float)v104;
  v108 = j_va("  Mix:");
  v109 = CG_DrawDevString(v6, v7, v102 + v106, 0.55000001, 0.55000001, v108, &colorLtBlue, 5, v105);
  v110 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneA + v9);
  v111 = (float)v109;
  v112 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v9);
  v113 = v107 + v111;
  if ( (_DWORD)v1 == (_DWORD)v110 && (_DWORD)v2 == v112 )
    v114 = colorMdCyan;
  else
    v114 = colorMdYellow;
  v115 = cls.smallDevFont;
  v116 = v110;
  overriddenColor = v114;
  v117 = s_soundTablePtr->zones;
  if ( (_DWORD)v110 == v112 )
  {
    if ( v117[v116].startMixIndex == -1 )
      v126 = j_va("    <None - Defaults in .SVMOD>");
    else
      v126 = j_va("    %s", v117[v110].mixName);
    v127 = CG_DrawDevString(v6, v7, v113, 0.55000001, 0.55000001, v126, &overriddenColor, 5, v115);
    v128 = cls.smallDevFont;
    v129 = (float)v127 + v113;
    v130 = j_va((const char *)&queryFormat.fmt + 3);
    v125 = (float)CG_DrawDevString(v6, v7, v129, 0.55000001, 0.55000001, v130, &overriddenColor, 5, v128) + v129;
  }
  else
  {
    if ( v117[v116].startMixIndex == -1 )
      v118 = j_va("    <None - Defaults in .SVMOD> =>");
    else
      v118 = j_va("    %s =>", v117[v110].mixName);
    v119 = CG_DrawDevString(v6, v7, v113, 0.55000001, 0.55000001, v118, &overriddenColor, 5, v115);
    v120 = cls.smallDevFont;
    v121 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctMixZoneB + v9);
    v122 = (float)v119 + v113;
    v123 = s_soundTablePtr->zones;
    if ( v123[v121].startMixIndex == -1 )
      v124 = j_va("    <None - Defaults in .SVMOD>");
    else
      v124 = j_va("    %s", v123[v121].mixName);
    v125 = v122 + (float)CG_DrawDevString(v6, v7, v122, 0.55000001, 0.55000001, v124, &overriddenColor, 5, v120);
  }
  v131 = cls.smallDevFont;
  v132 = j_va("  Filter:");
  v133 = CG_DrawDevString(v6, v7, v125, 0.55000001, 0.55000001, v132, &colorLtBlue, 5, v131);
  v134 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneB + v9);
  v135 = (float)v133;
  v136 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneA + v9);
  v138 = v125 + v135;
  v137 = v125 + v135;
  if ( (_DWORD)v1 == (_DWORD)v136 && (_DWORD)v2 == v134 )
    v139 = colorMdCyan;
  else
    v139 = colorMdYellow;
  v140 = cls.smallDevFont;
  v141 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneA + v9);
  v142 = v136;
  overriddenColor = v139;
  v143 = s_soundTablePtr->zones;
  if ( (_DWORD)v136 == v134 )
  {
    if ( v143[v142].startFilterIndex == -1 )
      v151 = j_va("    <None>");
    else
      v151 = j_va("    %s", v143[v141].filterName);
    v152 = CG_DrawDevString(v6, v7, v138, 0.55000001, 0.55000001, v151, &overriddenColor, 5, v140);
    v146 = cls.smallDevFont;
    v148 = (float)v152 + v137;
    v150 = j_va((const char *)&queryFormat.fmt + 3);
  }
  else
  {
    if ( v143[v142].startFilterIndex == -1 )
      v144 = j_va("    <None> =>");
    else
      v144 = j_va("    %s =>", v143[v141].filterName);
    v145 = CG_DrawDevString(v6, v7, v138, 0.55000001, 0.55000001, v144, &overriddenColor, 5, v140);
    v146 = cls.smallDevFont;
    v147 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFilterZoneB + v9);
    v148 = (float)v145 + v137;
    v149 = s_soundTablePtr->zones;
    if ( v149[v147].startFilterIndex == -1 )
      v150 = j_va("    <None>");
    else
      v150 = j_va("    %s", v149[v147].filterName);
  }
  v153 = CG_DrawDevString(v6, v7, v148, 0.55000001, 0.55000001, v150, &overriddenColor, 5, v146);
  v154 = cls.smallDevFont;
  v155 = (float)v153 + v148;
  v156 = j_va("  Occlusion:");
  v157 = CG_DrawDevString(v6, v7, v155, 0.55000001, 0.55000001, v156, &colorLtBlue, 5, v154);
  v159 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneB + v9);
  v160 = (float)v157;
  v161 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneA + v9);
  v162 = v155 + v160;
  if ( (_DWORD)v1 == (_DWORD)v161 && (_DWORD)v2 == v159 )
    v163 = colorMdCyan;
  else
    v163 = colorMdYellow;
  v164 = cls.smallDevFont;
  v165 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneA + v9);
  v166 = v161;
  overriddenColor = v163;
  if ( (_DWORD)v161 == v159 )
  {
    v176 = s_soundTablePtr->zones;
    if ( v176[v166].startOcclusionIndex == -1 )
      v177 = j_va("    <None>", v158, v165);
    else
      v177 = j_va("    %s", v176[v165].occlusionName);
    v178 = CG_DrawDevString(v6, v7, v162, 0.55000001, 0.55000001, v177, &overriddenColor, 5, v164);
    v179 = cls.smallDevFont;
    v180 = (float)v178 + v162;
    v181 = j_va((const char *)&queryFormat.fmt + 3);
    v175 = (float)CG_DrawDevString(v6, v7, v180, 0.55000001, 0.55000001, v181, &overriddenColor, 5, v179) + v180;
  }
  else
  {
    v167 = s_soundTablePtr->zones;
    if ( v167[v166].startOcclusionIndex == -1 )
      v168 = j_va("    <None> =>", v158, v165);
    else
      v168 = j_va("    %s =>", v167[v165].occlusionName);
    v169 = CG_DrawDevString(v6, v7, v162, 0.55000001, 0.55000001, v168, &overriddenColor, 5, v164);
    v170 = cls.smallDevFont;
    v171 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctOcclusionZoneB + v9);
    v172 = (float)v169 + v162;
    v173 = s_soundTablePtr->zones;
    if ( v173[v171].startOcclusionIndex == -1 )
      v174 = j_va("    <None>");
    else
      v174 = j_va("    %s", v173[v171].occlusionName);
    v175 = v172 + (float)CG_DrawDevString(v6, v7, v172, 0.55000001, 0.55000001, v174, &overriddenColor, 5, v170);
  }
  v182 = cls.smallDevFont;
  v183 = j_va("  ADSR:");
  v184 = (float)CG_DrawDevString(v6, v7, v175, 0.55000001, 0.55000001, v183, &colorLtBlue, 5, v182);
  v185 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerAdsrZone + v9);
  v186 = v175 + v184;
  if ( (_DWORD)v1 == (_DWORD)v185 )
    v187 = colorMdCyan;
  else
    v187 = colorMdYellow;
  overriddenColor = v187;
  if ( s_soundTablePtr->zones[v185].startAdsrZoneIndex == -1 )
  {
    v189 = cls.smallDevFont;
    v190 = j_va("    <None>");
  }
  else
  {
    PlayerADSRSettingIndex = CG_GetPlayerADSRSettingIndex(localClientNuma, &weapon);
    v189 = cls.smallDevFont;
    if ( PlayerADSRSettingIndex == -1 )
      v190 = j_va("    %s", "<None>");
    else
      v190 = j_va("    %s", s_soundTablePtr->adsrSettings[PlayerADSRSettingIndex].name);
  }
  v191 = CG_DrawDevString(v6, v7, v186, 0.55000001, 0.55000001, v190, &overriddenColor, 5, v189);
  v192 = cls.smallDevFont;
  v193 = (float)v191 + v186;
  v194 = j_va((const char *)&queryFormat.fmt + 3);
  v195 = CG_DrawDevString(v6, v7, v193, 0.55000001, 0.55000001, v194, &overriddenColor, 5, v192);
  v196 = cls.smallDevFont;
  v201 = 0i64;
  *(float *)&v201 = (float)v195 + v193;
  v197 = j_va("  Ambient Events:");
  v198 = CG_DrawDevString(v6, v7, *(float *)&v201, 0.55000001, 0.55000001, v197, &colorLtBlue, 5, v196);
  v199 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientEventZoneA + v9);
  v200 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctAmbientEventZoneB + v9);
  zoneB = v199 != v200;
  *(float *)&v201 = *(float *)&v201 + (float)v198;
  if ( (_DWORD)v1 == v199 && (_DWORD)v2 == v200 )
    v202 = colorMdCyan;
  else
    v202 = colorMdYellow;
  overriddenColor = v202;
  if ( v199 != v200 && v4 > 0.5 )
    v199 = v200;
  v203 = cls.smallDevFont;
  ambientDefIndex = s_soundTablePtr->zones[v199].ambientDefIndex;
  if ( ambientDefIndex == -1 )
  {
    v233 = j_va((const char *)&queryFormat.fmt + 3);
    *(float *)&v208 = *(float *)&v201 + (float)CG_DrawDevString(v6, v7, *(float *)&v201, 0.55000001, 0.55000001, v233, &overriddenColor, 5, v203);
  }
  else
  {
    ambientDefs = s_soundTablePtr->ambientDefs;
    *(_QWORD *)outCenter.v = ambientDefs;
    v206 = ambientDefIndex;
    v207 = j_va("    %s (Count: %d):", ambientDefs[ambientDefIndex].name, ambientDefs[ambientDefIndex].numEvents);
    *(float *)&v201 = *(float *)&v201 + (float)CG_DrawDevString(v6, v7, *(float *)&v201, 0.55000001, 0.55000001, v207, &overriddenColor, 5, v203);
    v208 = v201;
    if ( ambientDefs[v206].numEvents )
    {
      v209 = 0;
      v210 = v206 * 3;
      do
      {
        v211 = s_soundTablePtr;
        ambientEvents = s_soundTablePtr->ambientEvents;
        ambientElementsCount = s_soundTablePtr->ambientElementsCount;
        v214 = v209 + *(&ambientDefs->ambientEventIndex + 4 * v210);
        v343 = (vec4_t *)ambientEvents;
        if ( ambientEvents[v214].ambientElementIndex >= ambientElementsCount )
        {
          LODWORD(color) = ambientElementsCount;
          LODWORD(sc) = ambientEvents[v214].ambientElementIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1711, ASSERT_TYPE_ASSERT, "(unsigned)( event->ambientElementIndex ) < (unsigned)( s_soundTablePtr->ambientElementsCount )", "event->ambientElementIndex doesn't index s_soundTablePtr->ambientElementsCount\n\t%i not in [0, %i)", sc, color) )
            __debugbreak();
          v211 = s_soundTablePtr;
        }
        ambientElementIndex = ambientEvents[v214].ambientElementIndex;
        ambientElements = v211->ambientElements;
        v217 = cls.smallDevFont;
        v218 = ambientElementIndex;
        v219 = j_va("      %s (Weight: %.2f):", ambientElements[ambientElementIndex].aliasName, v343->v[v214 * 3 + 2]);
        v220 = CG_DrawDevString(v6, v7, *(float *)&v208, 0.55000001, 0.55000001, v219, &colorLtCyan, 5, v217);
        v221 = cls.smallDevFont;
        v222 = v208;
        *(float *)&v222 = *(float *)&v208 + (float)v220;
        v223 = j_va("        (ConeMin: %.1f, ConeMax: %.1f, RangeMin: %.1f, RangeMax: %.1f)", ambientElements[v218].coneMin, ambientElements[v218].coneMax, ambientElements[v218].rangeMin, ambientElements[v218].rangeMax);
        v224 = CG_DrawDevString(v6, v7, *(float *)&v222, 0.55000001, 0.55000001, v223, &colorLtCyan, 5, v221);
        ambientDefs = *(AmbientDef **)outCenter.v;
        ++v209;
        *(float *)&v222 = *(float *)&v222 + (float)v224;
        v208 = v222;
      }
      while ( v209 < *(unsigned __int16 *)(*(_QWORD *)outCenter.v + 8 * v210 + 14) );
      v9 = origins;
      LODWORD(v2) = v340;
      LODWORD(v1) = v341;
    }
  }
  v225 = cls.smallDevFont;
  v226 = j_va((const char *)&queryFormat.fmt + 3);
  v227 = CG_DrawDevString(v6, v7, *(float *)&v208, 0.55000001, 0.55000001, v226, &overriddenColor, 5, v225);
  v228 = cls.smallDevFont;
  v229 = *(float *)&v208 + (float)v227;
  v230 = j_va("  Weapon Refl:");
  v231 = v229 + (float)CG_DrawDevString(v6, v7, v229, 0.55000001, 0.55000001, v230, &colorLtBlue, 5, v228);
  if ( (_DWORD)v1 == *(unsigned int *)((char *)&s_audioZoneStates[0].ctWeapReflZoneA + v9) && (_DWORD)v2 == *(unsigned int *)((char *)&s_audioZoneStates[0].ctWeapReflZoneB + v9) )
    v232 = colorMdCyan;
  else
    v232 = colorMdYellow;
  v234 = g_audTrigWeapReflZoneA;
  overriddenColor = v232;
  if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB && g_lastAudioLerpVal > 0.5 )
    v234 = g_audTrigWeapReflZoneB;
  if ( !s_soundTablePtr || v234 == 0x7FFFFFFF )
    weapReflId = 0;
  else
    weapReflId = s_soundTablePtr->zones[v234].weapReflId;
  WeapReflDefWithClass = SND_FindWeapReflDefWithClass(weapReflId, 0);
  v237 = cls.smallDevFont;
  if ( WeapReflDefWithClass )
  {
    v238 = g_audTrigWeapReflZoneA;
    if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB && g_lastAudioLerpVal > 0.5 )
      v238 = g_audTrigWeapReflZoneB;
    if ( !s_soundTablePtr || v238 == 0x7FFFFFFF )
      v239 = j_va("    %s", (const char *)&queryFormat.fmt + 3);
    else
      v239 = j_va("    %s", s_soundTablePtr->zones[v238].weapReflName);
  }
  else
  {
    v239 = j_va("    <None>");
  }
  v240 = CG_DrawDevString(v6, v7, v231, 0.55000001, 0.55000001, v239, &overriddenColor, 5, v237);
  v241 = cls.smallDevFont;
  v242 = (float)v240 + v231;
  v243 = j_va((const char *)&queryFormat.fmt + 3);
  v244 = CG_DrawDevString(v6, v7, v242, 0.55000001, 0.55000001, v243, &overriddenColor, 5, v241);
  v245 = cls.smallDevFont;
  v246 = (float)v244 + v242;
  v247 = j_va("  Contexts:");
  v248 = CG_DrawDevString(v6, v7, v246, 0.55000001, 0.55000001, v247, &colorLtBlue, 5, v245);
  v249 = g_lastAudioZoneIndexA != g_lastAudioZoneIndexB;
  zoneB = v249;
  v251 = v246 + (float)v248;
  v250 = v251;
  if ( (_DWORD)v1 == g_lastAudioZoneIndexA && (_DWORD)v2 == g_lastAudioZoneIndexB )
    v252 = colorMdCyan;
  else
    v252 = colorMdYellow;
  v253 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctContextsZoneA + v9);
  overriddenColor = v252;
  v254 = DrawContexts(v253, v7, v251, &overriddenColor, v6);
  v61 = !v249;
  v255 = cls.smallDevFont;
  v257 = v254 + v251;
  v256 = v254 + v250;
  if ( !v61 )
  {
    v258 = j_va("    =>");
    v259 = (float)CG_DrawDevString(v6, v7, v257, 0.55000001, 0.55000001, v258, &overriddenColor, 5, v255);
    v260 = v257 + v259;
    v261 = DrawContexts(*(unsigned int *)((char *)&s_audioZoneStates[0].ctContextsZoneB + v9), v7, v256 + v259, &overriddenColor, v6);
    v255 = cls.smallDevFont;
    v256 = v260 + v261;
  }
  v262 = j_va((const char *)&queryFormat.fmt + 3);
  v263 = CG_DrawDevString(v6, v7, v256, 0.55000001, 0.55000001, v262, &overriddenColor, 5, v255);
  v264 = cls.smallDevFont;
  v265 = v256 + (float)v263;
  v266 = j_va((const char *)&queryFormat.fmt + 3);
  v267 = CG_DrawDevString(v6, v7, v265, 0.55000001, 0.55000001, v266, &overriddenColor, 5, v264);
  v268 = cls.smallDevFont;
  v269 = v265 + (float)v267;
  v270 = j_va("  Disable Full Occlusion:");
  v271 = v269 + (float)CG_DrawDevString(v6, v7, v269, 0.55000001, 0.55000001, v270, &colorLtBlue, 5, v268);
  GetAudioZoneDebugProps(v1, v2, *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneA + v9), *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneB + v9), &overriddenColor, (int *)&zoneB);
  if ( zoneB && v4 > 0.5 )
    v272 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneB + v9);
  else
    v272 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctFullOcclusionZoneA + v9);
  v273 = cls.smallDevFont;
  v274 = j_va("    %s", s_soundTablePtr->zones[v272].fullOccName);
  v275 = CG_DrawDevString(v6, v7, v271, 0.55000001, 0.55000001, v274, &overriddenColor, 5, v273);
  v276 = cls.smallDevFont;
  v277 = v271 + (float)v275;
  v278 = j_va((const char *)&queryFormat.fmt + 3);
  v279 = CG_DrawDevString(v6, v7, v277, 0.55000001, 0.55000001, v278, &overriddenColor, 5, v276);
  v280 = cls.smallDevFont;
  v281 = v277 + (float)v279;
  v282 = j_va("  Player Breath:");
  v283 = v281 + (float)CG_DrawDevString(v6, v7, v281, 0.55000001, 0.55000001, v282, &colorLtBlue, 5, v280);
  GetAudioZoneDebugProps(v1, v2, *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneA + v9), *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneB + v9), &overriddenColor, (int *)&zoneB);
  if ( zoneB && v4 > 0.5 )
    v284 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneB + v9);
  else
    v284 = *(unsigned int *)((char *)&s_audioZoneStates[0].ctPlayerBreathZoneA + v9);
  v285 = cls.smallDevFont;
  v286 = j_va("    %s", s_soundTablePtr->zones[v284].playerBreathStateName);
  CG_DrawDevString(v6, v7, v283, 0.55000001, 0.55000001, v286, &overriddenColor, 5, v285);
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_drawDebugAudioClientTriggers, "cg_drawDebugAudioClientTriggers") > 1 )
  {
    mapEnts = cm.mapEnts;
    v288 = 0;
    for ( zoneB = 0; v288 < mapEnts->clientTrigger.trigger.count; zoneB = ++v288 )
    {
      v289 = v288;
      v290 = mapEnts->clientTrigger.triggerType[v288];
      origins = (__int64)mapEnts->clientTrigger.origins;
      if ( (v290 & 0x206A) != 0 )
      {
        models = mapEnts->clientTrigger.trigger.models;
        firstHull = (int)models[v288].firstHull;
        hullCount = models[v288].hullCount;
        CG_GetTriggerCenter(localClientNuma, v288, &outCenter);
        v294 = fsqrt((float)((float)((float)(outCenter.v[1] - v13) * (float)(outCenter.v[1] - v13)) + (float)((float)(outCenter.v[0] - v12) * (float)(outCenter.v[0] - v12))) + (float)((float)(outCenter.v[2] - v345) * (float)(outCenter.v[2] - v345)));
        if ( v294 >= 10.0 )
          v295 = v294 * 0.0017500001;
        else
          v295 = FLOAT_0_050000001;
        v296 = v295 * 12.0;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_dbgClientTriggerDist, "cg_dbgClientTriggerDist");
        if ( v294 <= *(float *)&Float_Internal_DebugName )
        {
          lerpB = hullCount;
          if ( hullCount )
          {
            v298 = &colorGreen;
            if ( (v290 & 2) == 0 )
              v298 = &colorWhite;
            v299 = firstHull;
            v343 = v298;
            v300 = v290 & 0x40;
            v301 = v290 & 0x20;
            v302 = v290 & 8;
            zoneA[0] = v300;
            v303 = v290 & 0x2000;
            v341 = v301;
            v304 = v290 & 1;
            v340 = v302;
            zoneA[1] = v303;
            do
            {
              v305 = &colorYellow;
              v61 = v302 == 0;
              v306 = &colorRed;
              v307 = &colorMagenta;
              v308 = NULL;
              if ( v61 )
                v305 = v298;
              hulls = cm.mapEnts->clientTrigger.trigger.hulls;
              if ( !v300 )
                v307 = v305;
              v310 = &colorLtBlue;
              if ( !v301 )
                v310 = v307;
              v311 = &colorBlue;
              if ( !v303 )
                v311 = v310;
              if ( !v304 )
                v306 = v311;
              v312 = cm.mapEnts->clientTrigger.audioTriggers[v289];
              if ( (int)v312 > -1 )
                v308 = &cm.mapEnts->clientTrigger.triggerString[v312];
              CL_AddDebugStar(&outCenter, v306, 0, 1, 0);
              v313 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
              if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v313);
              if ( v313->current.integer > 2 && v308 )
              {
                v314 = j_va("Zone: %s", v308);
                CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, v314, 0, 1);
              }
              outCenter.v[2] = outCenter.v[2] - v296;
              v315 = cm.mapEnts->clientTrigger.audioStateIds[v289];
              if ( (_DWORD)v315 != -1 )
              {
                v316 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                v317 = &cm.mapEnts->clientTrigger.triggerString[v315];
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v316);
                if ( v316->current.integer > 2 && v317 )
                {
                  v318 = j_va("State Id: %s: %x", v317, s_triggerStateTo[v289]);
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, v318, 0, 1);
                }
                outCenter.v[2] = outCenter.v[2] - v296;
              }
              if ( v341 )
              {
                v319 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v319);
                if ( v319->current.integer > 2 )
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, "Occluder", 0, 1);
                outCenter.v[2] = outCenter.v[2] - v296;
              }
              if ( v340 )
              {
                v320 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v320);
                if ( v320->current.integer > 2 )
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, "Blend", 0, 1);
                v321 = cm.mapEnts;
                outCenter.v[2] = outCenter.v[2] - v296;
                if ( cm.mapEnts->clientTrigger.blendLookup[v289] == -1 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1893, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientTrigger.blendLookup[trigIndex] != -1)", (const char *)&queryFormat, "cm.mapEnts->clientTrigger.blendLookup[trigIndex] != -1") )
                    __debugbreak();
                  v321 = cm.mapEnts;
                }
                p_pointA = &v321->clientTriggerBlend.blendNodes[v321->clientTrigger.blendLookup[v289]].pointA;
                if ( !p_pointA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1896, ASSERT_TYPE_ASSERT, "(blend)", (const char *)&queryFormat, "blend") )
                  __debugbreak();
                CG_TriggerTransformPointOnMovingPlatform(localClientNuma, zoneB, p_pointA, &outOffset, NULL);
                CG_TriggerTransformPointOnMovingPlatform(localClientNuma, zoneB, p_pointA + 1, &point, NULL);
                CL_AddDebugStar(&outOffset, v306, 0, 1, 0);
                CL_AddDebugStar(&point, v306, 0, 1, 0);
              }
              if ( zoneA[1] )
              {
                v323 = cm.mapEnts->clientTrigger.detailSoundBank[v289];
                if ( !v323 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1908, ASSERT_TYPE_ASSERT, "(detailSoundBank)", (const char *)&queryFormat, "detailSoundBank") )
                  __debugbreak();
                v324 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v324);
                if ( v324->current.integer > 2 )
                {
                  v325 = j_va("SoundBank: %s", v323->bank.name);
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, v325, 0, 1);
                }
                outCenter.v[2] = outCenter.v[2] - v296;
              }
              if ( v304 )
              {
                v326 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v326);
                if ( v326->current.integer > 2 )
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, "Trigger shared with visionset", 0, 1);
                outCenter.v[2] = outCenter.v[2] - v296;
              }
              if ( g_audioTriggerDisabled[v289] )
              {
                v327 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
                if ( !DCONST_DVARINT_cg_drawDebugAudioClientTriggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAudioClientTriggers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v327);
                if ( v327->current.integer > 2 )
                  CL_AddDebugString(&outCenter, &colorWhiteFaded, v295, "Disabled", 0, 1);
                outCenter.v[2] = outCenter.v[2] - v296;
              }
              AxisClear(&axis);
              LODWORD(mins.v[0]) = LODWORD(hulls[v299].triggerSpaceBounds.halfSize.v[0]) ^ _xmm;
              LODWORD(mins.v[1]) = LODWORD(hulls[v299].triggerSpaceBounds.halfSize.v[1]) ^ _xmm;
              v328 = *(float *)(origins + 12 * v289);
              LODWORD(mins.v[2]) = LODWORD(hulls[v299].triggerSpaceBounds.halfSize.v[2]) ^ _xmm;
              origin.v[0] = v328 + hulls[v299].triggerSpaceBounds.midPoint.v[0];
              origin.v[1] = hulls[v299].triggerSpaceBounds.midPoint.v[1] + *(float *)(origins + 12 * v289 + 4);
              origin.v[2] = hulls[v299].triggerSpaceBounds.midPoint.v[2] + *(float *)(origins + 12 * v289 + 8);
              CG_TriggerTransformPointOnMovingPlatform(localClientNuma, zoneB, &origin, &v353, &axis);
              v329 = DCONST_DVARBOOL_cg_dbgClientTriggerCull;
              if ( !DCONST_DVARBOOL_cg_dbgClientTriggerCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dbgClientTriggerCull") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v329);
              CL_AddDebugBox(&axis, &v353, &mins, &hulls[v299].triggerSpaceBounds.halfSize, v306, v329->current.color[0], 1, 0);
              v301 = v341;
              ++v299;
              v61 = lerpB-- == 1;
              v302 = v340;
              v303 = zoneA[1];
              v300 = zoneA[0];
              v298 = v343;
            }
            while ( !v61 );
            v288 = zoneB;
          }
        }
        mapEnts = cm.mapEnts;
      }
    }
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
  unsigned __int64 v3; 
  MapEnts *mapEnts; 
  float v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 
  Bounds bounds; 

  v3 = (unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64;
  mapEnts = cm.mapEnts;
  if ( !cm.mapEnts )
    return 0;
  v8 = point->v[2];
  *(double *)v3 = *(double *)point->v;
  *(float *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v8;
  *(const float *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = FLOAT_1_0;
  *(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = 0i64;
  *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x108) = 0;
  *(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = 0i64;
  *(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(v3 + 64), mapEnts->clientTrigger.spatialTree, (const Bounds *)((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64));
  if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v3 + 64)) )
  {
LABEL_28:
    *outTrigger = 0x4000;
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
      __debugbreak();
    v9 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 20i64);
    v10 = *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
    if ( v10 == v9 )
    {
      if ( !*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
        __debugbreak();
      if ( (**(_BYTE **)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
        __debugbreak();
      if ( *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) >= **(unsigned __int8 **)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
        __debugbreak();
      v11 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x118) + 4i64 * *(unsigned int *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) + 4);
    }
    else
    {
      if ( v10 >= v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
          __debugbreak();
        v10 = *(_DWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      }
      v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&bounds & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) + 8i64) + 4i64 * v10);
    }
    if ( v11 >= cm.mapEnts->clientTrigger.trigger.count )
    {
      LODWORD(v14) = cm.mapEnts->clientTrigger.trigger.count;
      LODWORD(v13) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2688, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( SLOBYTE(cm.mapEnts->clientTrigger.triggerType[v11]) < 0 )
    {
      CG_TriggerCalcMovingPlatformPos(localClientNum, point, v11, (vec3_t *)(v3 + 24));
      if ( CG_TestTriggerTouch_Point(v11, (const vec3_t *)(v3 + 24)) )
        break;
    }
    if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v3 + 64)) )
      goto LABEL_28;
  }
  *outTrigger = v11;
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
  void *v5; 
  unsigned __int64 v6; 
  float v7; 
  MapEnts *mapEnts; 
  unsigned int v12; 
  float v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  MapEnts *v19; 
  float *priority; 
  float v21; 
  ClientTriggerModel *models; 
  ClientTriggerHull *hulls; 
  float *v; 
  vec3_t *origins; 
  float *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  char v30[4432]; 

  v5 = alloca(v4);
  v6 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v6 + 4416) = (unsigned __int64)&v27 ^ _security_cookie;
  v7 = FLOAT_N1_0;
  *(_QWORD *)v6 = outTrigger;
  mapEnts = cm.mapEnts;
  v12 = 0x4000;
  if ( !cm.mapEnts )
    return 0;
  v14 = point->v[2];
  *(double *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = *(double *)point->v;
  *(float *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v14;
  *(const float *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = FLOAT_1_0;
  *(const float *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x34) = FLOAT_1_0;
  *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = 0i64;
  *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128) = 0;
  *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = 0i64;
  *(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(v6 + 96), mapEnts->clientTrigger.spatialTree, (const Bounds *)(v6 + 32));
  if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v6 + 96)) )
  {
LABEL_42:
    **(_DWORD **)v6 = v12;
    return v12 != 0x4000;
  }
  while ( 1 )
  {
    if ( !*(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
      __debugbreak();
    v15 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 20i64);
    v16 = *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
    if ( v16 == v15 )
    {
      if ( !*(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
        __debugbreak();
      if ( (**(_BYTE **)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
        __debugbreak();
      if ( *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) >= **(unsigned __int8 **)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
        __debugbreak();
      v17 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x138) + 4i64 * *(unsigned int *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) + 4);
    }
    else
    {
      if ( v16 >= v15 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
          __debugbreak();
        v16 = *(_DWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
      }
      v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) + 8i64) + 4i64 * v16);
    }
    if ( v17 >= cm.mapEnts->clientTrigger.trigger.count )
    {
      LODWORD(v29) = cm.mapEnts->clientTrigger.trigger.count;
      LODWORD(v28) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2610, ASSERT_TYPE_ASSERT, "(unsigned)( trigIndex ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "trigIndex doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    v18 = cm.mapEnts->clientTrigger.triggerType[v17];
    if ( (v18 & triggerMask) == 0 )
      goto LABEL_41;
    if ( g_audioTriggerDisabled[v17] )
      goto LABEL_41;
    CG_TriggerCalcMovingPlatformPos(localClientNum, point, v17, (vec3_t *)(v6 + 56));
    if ( !CG_TestTriggerTouch_Point(v17, (const vec3_t *)(v6 + 56)) )
      goto LABEL_41;
    if ( (v18 & 8) != 0 )
      break;
    v19 = cm.mapEnts;
    priority = cm.mapEnts->clientTrigger.priority;
    v21 = priority[v17];
    if ( v21 <= v7 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - v7) & _xmm) < 0.001 )
      {
        if ( v12 == 0x4000 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2635, ASSERT_TYPE_ASSERT, "(foundTrigger != (16*1024))", (const char *)&queryFormat, "foundTrigger != MAX_CLIENT_TRIGGERS") )
            __debugbreak();
          v19 = cm.mapEnts;
        }
        models = v19->clientTrigger.trigger.models;
        hulls = v19->clientTrigger.trigger.hulls;
        v = hulls[models[v17].firstHull].triggerSpaceBounds.midPoint.v;
        origins = v19->clientTrigger.origins;
        v26 = hulls[models[v12].firstHull].triggerSpaceBounds.midPoint.v;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(origins[v12].v[0] + *v26) - (float)(*v + origins[v17].v[0])) & _xmm) <= (float)(v26[3] - v[3]) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(origins[v12].v[1] + v26[1]) - (float)(origins[v17].v[1] + v[1])) & _xmm) <= (float)(v26[4] - v[4]) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(origins[v12].v[2] + v26[2]) - (float)(origins[v17].v[2] + v[2])) & _xmm) <= (float)(v26[5] - v[5]) )
          v12 = v17;
      }
    }
    else
    {
      v7 = priority[v17];
      v12 = v17;
    }
LABEL_41:
    if ( !SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(v6 + 96)) )
      goto LABEL_42;
  }
  **(_DWORD **)v6 = v17;
  return 1;
}

/*
==============
CG_FindAudioZoneAtPoint
==============
*/
char CG_FindAudioZoneAtPoint(LocalClientNum_t localClientNum, const vec3_t *point, const ZoneDef **outZoneA, const ZoneDef **outZoneB, float *outLerp)
{
  bool IsMainThread; 
  float v10; 
  int v11; 
  unsigned int zoneCount; 
  int v13; 
  const ZoneDef *v14; 
  unsigned __int16 v16; 
  __int64 v17; 
  int v18; 
  const SoundTable *v19; 
  float v20; 
  int v21; 
  char v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int outTrigger; 
  unsigned int trigB; 
  float lerpAmount; 
  AudioZoneCacheKey v28; 

  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_FindAudioZoneAtPoint");
  v28.localClientNum = localClientNum;
  IsMainThread = Sys_IsMainThread();
  if ( !IsMainThread || (v10 = point->v[1], v11 = 0, v28.point.v[0] = point->v[0], v28.point.v[2] = point->v[2], v28.point.v[1] = v10, !s_numAudioZoneCache) )
  {
LABEL_6:
    if ( !CG_FindAudioTriggerAtPoint(localClientNum, point, 0xAu, &outTrigger) )
    {
      if ( s_soundTablePtr && s_audioZoneLookup[0x4000] != 0x7FFFFFFF )
      {
        zoneCount = s_soundTablePtr->zoneCount;
        v13 = s_audioZoneLookup[0x4000];
        if ( s_audioZoneLookup[0x4000] >= zoneCount )
        {
LABEL_12:
          v13 = s_audioZoneLookup[0x4000];
        }
        else
        {
          while ( s_soundTablePtr->zones[v13].stateId != s_triggerStateTo[0x4000] )
          {
            if ( ++v13 >= zoneCount )
              goto LABEL_12;
          }
        }
        if ( v13 != 0x7FFFFFFF )
        {
          v14 = &s_soundTablePtr->zones[v13];
LABEL_23:
          *outZoneA = v14;
          *outZoneB = NULL;
          *outLerp = 0.0;
          goto LABEL_24;
        }
      }
      goto LABEL_21;
    }
    v16 = cm.mapEnts->clientTrigger.triggerType[outTrigger];
    if ( (v16 & 8) != 0 )
    {
      CG_TriggerLerpTriggers(localClientNum, outTrigger, point, &outTrigger, &trigB, &lerpAmount);
      v17 = SND_LookupZoneIndex(outTrigger);
      v18 = SND_LookupZoneIndex(trigB);
      if ( (_DWORD)v17 == 0x7FFFFFFF || v18 == 0x7FFFFFFF )
        goto LABEL_21;
      v19 = s_soundTablePtr;
      v20 = lerpAmount;
      *outZoneA = &s_soundTablePtr->zones[v17];
      *outLerp = v20;
      *outZoneB = &v19->zones[v18];
    }
    else if ( (v16 & 2) != 0 )
    {
      v21 = SND_LookupZoneIndex(outTrigger);
      if ( v21 != 0x7FFFFFFF )
      {
        v14 = &s_soundTablePtr->zones[v21];
        goto LABEL_23;
      }
LABEL_21:
      v22 = 0;
      goto LABEL_25;
    }
LABEL_24:
    v22 = 1;
LABEL_25:
    if ( IsMainThread && v22 )
    {
      if ( s_numAudioZoneCache >= 0x40 )
      {
        ++s_audioZoneCacheFault;
      }
      else
      {
        v23 = s_numAudioZoneCache;
        v24 = s_numAudioZoneCache + 1;
        s_audioZoneCache[v23].key = v28;
        s_audioZoneCache[v23].zoneA = *outZoneA;
        s_audioZoneCache[v23].zoneB = *outZoneB;
        s_audioZoneCache[v23].lerp = *outLerp;
        s_numAudioZoneCache = v24;
      }
      ++s_audioZoneCacheMisses;
    }
    Sys_ProfEndNamedEvent();
    return v22;
  }
  while ( *(_OWORD *)&s_audioZoneCache[v11].key != *(_OWORD *)&v28 )
  {
    if ( ++v11 >= s_numAudioZoneCache )
      goto LABEL_6;
  }
  ++s_audioZoneCacheHits;
  *outZoneA = s_audioZoneCache[v11].zoneA;
  *outZoneB = s_audioZoneCache[v11].zoneB;
  *outLerp = s_audioZoneCache[v11].lerp;
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
        if ( lerpAmount[0] <= 0.5 )
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
  const SoundTable *v3; 
  __int64 v4; 
  float v5; 
  bool result; 

  v3 = s_soundTablePtr;
  if ( !s_soundTablePtr )
    return 0;
  if ( g_lastAudioZoneIndexA == 0x7FFFFFFF )
    return 0;
  v4 = g_lastAudioZoneIndexB;
  if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
    return 0;
  v5 = g_lastAudioLerpVal;
  if ( g_lastAudioLerpVal == 1.0 )
  {
    *outZoneA = &s_soundTablePtr->zones[g_lastAudioZoneIndexB];
LABEL_6:
    result = 1;
    *outLerp = 0.0;
    *outZoneB = NULL;
    return result;
  }
  *outZoneA = &s_soundTablePtr->zones[g_lastAudioZoneIndexA];
  if ( v5 == 0.0 )
    goto LABEL_6;
  *outLerp = v5;
  *outZoneB = &v3->zones[v4];
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
  if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB && g_lastAudioLerpVal > 0.5 )
    v0 = g_audTrigWeapReflZoneB;
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
  if ( g_audTrigWeapReflZoneA != g_audTrigWeapReflZoneB && g_lastAudioLerpVal > 0.5 )
    v0 = g_audTrigWeapReflZoneB;
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
  float *v4; 
  bool result; 
  ClientTriggerModel *models; 
  __int64 v8; 
  MapEnts *mapEnts; 
  int v10; 
  vec3_t *origins; 
  float v13; 
  float v14; 
  float v15; 
  __int64 firstHull; 
  ClientTriggerHull *v17; 
  float v18; 
  float v19; 
  signed int slabCount; 
  int v21; 
  __int128 v23; 
  TriggerSlab *slabs; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  __int128 halfSize_low; 
  __int128 v32; 
  __int128 v34; 
  __int128 v36; 
  unsigned int firstSlab; 
  TriggerSlab *v38; 
  __int128 v40; 

  v4 = outDistance;
  if ( triggerIdx >= cm.mapEnts->clientTrigger.trigger.count )
    return 0;
  models = cm.mapEnts->clientTrigger.trigger.models;
  v8 = triggerIdx;
  CG_TriggerCalcMovingPlatformPos(localClientNum, inOutPoint, triggerIdx, inOutPoint);
  mapEnts = cm.mapEnts;
  v10 = 0;
  *(float *)&_XMM11 = FLOAT_N1_0;
  origins = cm.mapEnts->clientTrigger.origins;
  v13 = inOutPoint->v[0] - origins[v8].v[0];
  v14 = inOutPoint->v[2] - origins[v8].v[2];
  v15 = inOutPoint->v[1] - origins[v8].v[1];
  if ( models[v8].hullCount )
  {
    firstHull = (int)models[v8].firstHull;
    do
    {
      v17 = &mapEnts->clientTrigger.trigger.hulls[firstHull];
      if ( !v17 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 522, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
          __debugbreak();
        mapEnts = cm.mapEnts;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - v17->triggerSpaceBounds.midPoint.v[0]) & _xmm) <= v17->triggerSpaceBounds.halfSize.v[0] )
      {
        v18 = v17->triggerSpaceBounds.halfSize.v[1];
        LODWORD(v19) = COERCE_UNSIGNED_INT(v15 - v17->triggerSpaceBounds.midPoint.v[1]) & _xmm;
        if ( v19 <= v18 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v17->triggerSpaceBounds.midPoint.v[2]) & _xmm) <= v17->triggerSpaceBounds.halfSize.v[2] )
        {
          slabCount = v17->slabCount;
          v21 = 0;
          v23 = LODWORD(v17->triggerSpaceBounds.halfSize.v[1]);
          *(float *)&v23 = v18 - v19;
          _XMM1 = v23;
          __asm { vminss  xmm4, xmm1, xmm0 }
          if ( (unsigned int)slabCount >= 4 )
          {
            slabs = mapEnts->clientTrigger.trigger.slabs;
            v26 = v17->firstSlab + 1;
            v27 = ((unsigned int)(slabCount - 4) >> 2) + 1;
            v28 = v27;
            v21 = 4 * v27;
            do
            {
              if ( slabs[(unsigned int)(v26 - 1)].dir.v[2] == 0.0 )
              {
                halfSize_low = LODWORD(slabs[(unsigned int)(v26 - 1)].halfSize);
                *(float *)&halfSize_low = slabs[(unsigned int)(v26 - 1)].halfSize - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v15 * slabs[(unsigned int)(v26 - 1)].dir.v[1]) + (float)(v13 * slabs[(unsigned int)(v26 - 1)].dir.v[0])) + (float)(0.0 * v14)) - slabs[(unsigned int)(v26 - 1)].midPoint) & _xmm);
                _XMM1 = halfSize_low;
                __asm { vminss  xmm4, xmm1, xmm4 }
              }
              if ( slabs[v26].dir.v[2] == 0.0 )
              {
                v32 = LODWORD(slabs[v26].halfSize);
                *(float *)&v32 = slabs[v26].halfSize - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v15 * slabs[v26].dir.v[1]) + (float)(v13 * slabs[v26].dir.v[0])) + (float)(0.0 * v14)) - slabs[v26].midPoint) & _xmm);
                _XMM1 = v32;
                __asm { vminss  xmm4, xmm1, xmm4 }
              }
              if ( slabs[(unsigned int)(v26 + 1)].dir.v[2] == 0.0 )
              {
                v34 = LODWORD(slabs[(unsigned int)(v26 + 1)].halfSize);
                *(float *)&v34 = slabs[(unsigned int)(v26 + 1)].halfSize - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v15 * slabs[(unsigned int)(v26 + 1)].dir.v[1]) + (float)(v13 * slabs[(unsigned int)(v26 + 1)].dir.v[0])) + (float)(0.0 * v14)) - slabs[(unsigned int)(v26 + 1)].midPoint) & _xmm);
                _XMM1 = v34;
                __asm { vminss  xmm4, xmm1, xmm4 }
              }
              if ( slabs[(unsigned int)(v26 + 2)].dir.v[2] == 0.0 )
              {
                v36 = LODWORD(slabs[(unsigned int)(v26 + 2)].halfSize);
                *(float *)&v36 = slabs[(unsigned int)(v26 + 2)].halfSize - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v15 * slabs[(unsigned int)(v26 + 2)].dir.v[1]) + (float)(v13 * slabs[(unsigned int)(v26 + 2)].dir.v[0])) + (float)(0.0 * v14)) - slabs[(unsigned int)(v26 + 2)].midPoint) & _xmm);
                _XMM1 = v36;
                __asm { vminss  xmm4, xmm1, xmm4 }
              }
              v26 = (unsigned int)(v26 + 4);
              --v28;
            }
            while ( v28 );
          }
          if ( v21 < slabCount )
          {
            firstSlab = v17->firstSlab;
            v38 = mapEnts->clientTrigger.trigger.slabs;
            do
            {
              if ( v38[firstSlab + v21].dir.v[2] == 0.0 )
              {
                v40 = LODWORD(v38[firstSlab + v21].halfSize);
                *(float *)&v40 = v38[firstSlab + v21].halfSize - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v15 * v38[firstSlab + v21].dir.v[1]) + (float)(v13 * v38[firstSlab + v21].dir.v[0])) + (float)(0.0 * v14)) - v38[firstSlab + v21].midPoint) & _xmm);
                _XMM1 = v40;
                __asm { vminss  xmm4, xmm1, xmm4 }
              }
              ++v21;
            }
            while ( v21 < slabCount );
          }
          if ( *(float *)&_XMM4 < 0.0 || *(float *)&_XMM11 >= 0.0 )
            __asm { vminss  xmm11, xmm4, xmm11 }
          else
            LODWORD(_XMM11) = _XMM4;
        }
      }
      ++v10;
      ++firstHull;
    }
    while ( v10 < models[v8].hullCount );
    v4 = outDistance;
  }
  result = 1;
  *v4 = *(float *)&_XMM11;
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
  int v12; 
  int numNPCAdsrZone; 
  int v14; 
  int v15; 
  AdsrZoneEntry *v16; 
  int v17; 
  __int64 weaponIdx; 
  AdsrZoneEntry *npcADSRZones; 
  int startNPCAdsrZoneIndex; 
  const dvar_t *v21; 
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
      v8 = s_soundTablePtr;
      if ( lerpAmount[0] <= 0.5 )
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
  v14 = 0;
  v15 = 0;
  if ( numNPCAdsrZone <= 0 )
  {
LABEL_17:
    weaponIdx = weapon->weaponIdx;
    if ( g_adsrBaseWeaponIdxLookup[weaponIdx] && numNPCAdsrZone > 0 )
    {
      npcADSRZones = v8->npcADSRZones;
      startNPCAdsrZoneIndex = v9->startNPCAdsrZoneIndex;
      while ( npcADSRZones[startNPCAdsrZoneIndex + v14].weaponIdx != g_adsrBaseWeaponIdxLookup[weaponIdx] )
      {
        if ( ++v14 >= numNPCAdsrZone )
          goto LABEL_22;
      }
      return (unsigned int)npcADSRZones[startNPCAdsrZoneIndex + v14].adsrIdx;
    }
LABEL_22:
    v21 = DCONST_DVARBOOL_snd_debugWeaponADSR;
    if ( !DCONST_DVARBOOL_snd_debugWeaponADSR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugWeaponADSR") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
      Com_Printf(9, "No ADSR for NPC weapon: %s\n", WeaponName);
    }
    return 0xFFFFFFFFi64;
  }
  v16 = v8->npcADSRZones;
  v17 = v9->startNPCAdsrZoneIndex;
  while ( v16[v17 + v15].weaponIdx != weapon->weaponIdx )
  {
    if ( ++v15 >= numNPCAdsrZone )
      goto LABEL_17;
  }
  return (unsigned int)v16[v17 + v15].adsrIdx;
}

/*
==============
CG_GetNearestTwoPropagationTriggers
==============
*/
void CG_GetNearestTwoPropagationTriggers(LocalClientNum_t localClientNum, const vec3_t *origin, unsigned int *triggerList, unsigned int numTriggers, unsigned int *outTrigger1, unsigned int *outTrigger2)
{
  float v6; 
  __int64 v7; 
  unsigned int *v9; 
  unsigned int v10; 
  unsigned int *v11; 
  __int64 v13; 
  float v14; 
  int v15; 
  MapEnts *mapEnts; 
  unsigned int *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int count; 
  CTAudRvbPanInfo *audioRvbPanInfo; 
  const vec3_t *v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  CTAudRvbPanInfo *v28; 
  const vec3_t *p_position; 
  float v30; 
  float v31; 
  unsigned int v32; 
  int v33; 
  LocalClientNum_t localClientNuma; 
  __int64 v35; 
  vec3_t outOffset; 

  v6 = FLOAT_3_4028235e38;
  v7 = localClientNum;
  v9 = outTrigger1;
  v10 = 0x4000;
  v11 = outTrigger2;
  v13 = numTriggers;
  localClientNuma = (int)v7;
  v33 = 0x4000;
  v14 = FLOAT_3_4028235e38;
  if ( (unsigned int)v7 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3172, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_playerCurrentPropagationTrigger ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_playerCurrentPropagationTrigger )\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
    v11 = outTrigger2;
    v9 = outTrigger1;
  }
  v15 = g_playerCurrentPropagationTrigger[v7];
  if ( (_DWORD)v13 )
  {
    mapEnts = cm.mapEnts;
    v17 = triggerList;
    v18 = v13;
    v35 = v13;
    do
    {
      v19 = *v17;
      count = mapEnts->clientTrigger.trigger.count;
      if ( (unsigned int)v19 < count && (_DWORD)v19 != v15 && !g_audioTriggerDisabled[v19] && (mapEnts->clientTrigger.triggerType[v19] & 0x40) != 0 && count )
      {
        audioRvbPanInfo = mapEnts->clientTrigger.audioRvbPanInfo;
        v22 = audioRvbPanInfo[v19].hasCustomPosition ? &audioRvbPanInfo[v19].position : &mapEnts->clientTrigger.origins[v19];
        CG_TriggerTransformPointOnMovingPlatform(localClientNuma, v19, v22, &outOffset, NULL);
        mapEnts = cm.mapEnts;
        v23 = (float)(origin->v[1] - outOffset.v[1]) * (float)(origin->v[1] - outOffset.v[1]);
        v24 = (float)(origin->v[2] - outOffset.v[2]) * (float)(origin->v[2] - outOffset.v[2]);
        if ( (float)((float)(v23 + (float)((float)(origin->v[0] - outOffset.v[0]) * (float)(origin->v[0] - outOffset.v[0]))) + v24) < v6 )
        {
          v6 = (float)(v23 + (float)((float)(origin->v[0] - outOffset.v[0]) * (float)(origin->v[0] - outOffset.v[0]))) + v24;
          v10 = v19;
        }
      }
      ++v17;
      --v18;
    }
    while ( v18 );
    v25 = v35;
    do
    {
      v26 = *triggerList;
      if ( (_DWORD)v26 == v10 || (v27 = mapEnts->clientTrigger.trigger.count, (unsigned int)v26 >= v27) || (_DWORD)v26 == v15 || g_audioTriggerDisabled[v26] || (mapEnts->clientTrigger.triggerType[v26] & 0x40) == 0 || !v27 || ((v28 = mapEnts->clientTrigger.audioRvbPanInfo, !v28[v26].hasCustomPosition) ? (p_position = &mapEnts->clientTrigger.origins[v26]) : (p_position = &v28[v26].position), CG_TriggerTransformPointOnMovingPlatform(localClientNuma, v26, p_position, &outOffset, NULL), mapEnts = cm.mapEnts, v30 = (float)(origin->v[1] - outOffset.v[1]) * (float)(origin->v[1] - outOffset.v[1]), v31 = (float)(origin->v[2] - outOffset.v[2]) * (float)(origin->v[2] - outOffset.v[2]), (float)((float)(v30 + (float)((float)(origin->v[0] - outOffset.v[0]) * (float)(origin->v[0] - outOffset.v[0]))) + v31) >= v14) )
      {
        v32 = v33;
      }
      else
      {
        v14 = (float)(v30 + (float)((float)(origin->v[0] - outOffset.v[0]) * (float)(origin->v[0] - outOffset.v[0]))) + v31;
        v32 = v26;
        v33 = v26;
      }
      ++triggerList;
      --v25;
    }
    while ( v25 );
    *outTrigger1 = v10;
    *outTrigger2 = v32;
  }
  else
  {
    *v9 = 0x4000;
    *v11 = 0x4000;
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
  const SoundTable *v3; 
  unsigned int zoneCount; 
  __int64 v5; 
  __int64 startPlayerBreathStateIndex; 
  int v7; 
  PlayerBreathStateDef *plrBreathStateDefs; 
  PlayerBreathStateDef *i; 
  PlayerBreathStateDef *result; 

  v1 = g_audTrigPlayerBreathZoneA;
  if ( g_audTrigPlayerBreathZoneA == g_audTrigPlayerBreathZoneB )
  {
    v1 = g_audTrigPlayerBreathZoneB;
  }
  else if ( g_lastAudioLerpVal > 0.5 )
  {
    v1 = g_audTrigPlayerBreathZoneB;
  }
  v3 = s_soundTablePtr;
  if ( !s_soundTablePtr )
    return 0i64;
  zoneCount = s_soundTablePtr->zoneCount;
  if ( !zoneCount )
    return 0i64;
  if ( v1 == 0x7FFFFFFF )
    return 0i64;
  if ( v1 >= zoneCount )
    return 0i64;
  v5 = v1;
  startPlayerBreathStateIndex = s_soundTablePtr->zones[v5].startPlayerBreathStateIndex;
  if ( (_DWORD)startPlayerBreathStateIndex == -1 )
    return 0i64;
  if ( (unsigned int)startPlayerBreathStateIndex >= s_soundTablePtr->plrBreathStateDefCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 3686, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->plrBreathStateDefCount )", "idx doesn't index s_soundTablePtr->plrBreathStateDefCount\n\t%i not in [0, %i)", s_soundTablePtr->zones[v5].startPlayerBreathStateIndex, s_soundTablePtr->plrBreathStateDefCount) )
      __debugbreak();
    v3 = s_soundTablePtr;
  }
  v7 = startPlayerBreathStateIndex + v3->zones[v5].numPlayerBreathStates;
  if ( (int)startPlayerBreathStateIndex >= v7 )
    return 0i64;
  plrBreathStateDefs = v3->plrBreathStateDefs;
  for ( i = &plrBreathStateDefs[startPlayerBreathStateIndex]; ; ++i )
  {
    result = &plrBreathStateDefs[(int)startPlayerBreathStateIndex];
    if ( i->stateType == state )
      break;
    LODWORD(startPlayerBreathStateIndex) = startPlayerBreathStateIndex + 1;
    if ( (int)startPlayerBreathStateIndex >= v7 )
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
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  ZoneDef *zones; 
  char v14; 
  float v15; 
  char v16; 
  float v17; 
  unsigned int zoneCount; 
  __int64 v19; 
  __int64 v20; 
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
    if ( (v7 & 0x42) == 0 )
      return 0;
    if ( s_triggerStateLerp[triggerIndex].current < 1.0 )
    {
      if ( triggerIndex >= 0x4001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 217, ASSERT_TYPE_ASSERT, "(triggerIndex < ( sizeof( *array_counter( s_audioZoneLookup ) ) + 0 ))", (const char *)&queryFormat, "triggerIndex < ARRAY_COUNT( s_audioZoneLookup )") )
          __debugbreak();
        v4 = s_soundTablePtr;
      }
      v11 = (int)triggerIndex;
      v12 = s_audioZoneLookup[triggerIndex];
      if ( (_DWORD)v12 == 0x7FFFFFFF )
        return 0;
      zones = v4->zones;
      v14 = 0;
      v15 = lerpAmount[0];
      v16 = 0;
      v17 = lerpAmount[0];
      zoneCount = v4->zoneCount;
      if ( (unsigned int)v12 < zoneCount )
      {
        v19 = v12;
        do
        {
          if ( v14 && v16 )
            break;
          v20 = (unsigned int)v12;
          stateId = zones[v20].stateId;
          if ( stateId == s_triggerStateFrom[v11] && zones[v20].id == zones[v19].id )
          {
            v15 = *(float *)&v12;
            v14 = 1;
          }
          if ( stateId == s_triggerStateTo[v11] && zones[v20].id == zones[v19].id )
          {
            v17 = *(float *)&v12;
            v16 = 1;
          }
          LODWORD(v12) = v12 + 1;
        }
        while ( (unsigned int)v12 < zoneCount );
        v5 = outReverbDef;
      }
      if ( !v14 || !v16 )
        return 0;
      if ( s_triggerStateLerp[v11].current >= 0.5 )
        reverbIndex = zones[SLODWORD(v17)].reverbIndex;
      else
        reverbIndex = zones[SLODWORD(v15)].reverbIndex;
      goto LABEL_39;
    }
    v9 = SND_LookupZoneIndex(triggerIndex);
    if ( v9 == 0x7FFFFFFF )
      return 0;
    v4 = s_soundTablePtr;
    goto LABEL_37;
  }
  CG_TriggerLerpTriggers(localClientNum, triggerIndex, point, &trigA, &trigB, lerpAmount);
  v8 = SND_LookupZoneIndex(trigA);
  v9 = SND_LookupZoneIndex(trigB);
  if ( (_DWORD)v8 == 0x7FFFFFFF || v9 == 0x7FFFFFFF )
    return 0;
  v4 = s_soundTablePtr;
  if ( lerpAmount[0] >= 0.5 )
  {
LABEL_37:
    v10 = v9;
    goto LABEL_38;
  }
  v10 = v8;
LABEL_38:
  reverbIndex = v4->zones[v10].reverbIndex;
LABEL_39:
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
  __int64 v5; 
  double v6; 
  bool result; 

  if ( !cm.mapEnts->clientTrigger.trigger.count || triggerIdx >= 0x4000 )
    return 0;
  v5 = triggerIdx;
  v6 = I_fclamp(cm.mapEnts->clientTrigger.audioRvbPanInfo[triggerIdx].minReverbVolume, 0.0, 1.0);
  *outMinVolume = *(float *)&v6;
  result = 1;
  _XMM0 = LODWORD(cm.mapEnts->clientTrigger.audioRvbPanInfo[v5].maxWallDistance);
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  *outWallDistance = *(float *)&_XMM0;
  return result;
}

/*
==============
CG_GetWallProximityVolume
==============
*/
char CG_GetWallProximityVolume(LocalClientNum_t localClientNum, unsigned int triggerIdx, vec3_t *inOutPoint, float *outMinVolume)
{
  __int64 v5; 
  __int64 v6; 
  __int128 v11; 
  float outDistance[4]; 

  v5 = triggerIdx;
  if ( !CG_GetDistanceFromTriggerWall(localClientNum, triggerIdx, inOutPoint, outDistance) )
    return 0;
  v6 = v5;
  *(float *)&_XMM6 = FLOAT_1_0;
  I_fclamp(cm.mapEnts->clientTrigger.audioRvbPanInfo[v6].minReverbVolume, 0.0, 1.0);
  _XMM1 = LODWORD(cm.mapEnts->clientTrigger.audioRvbPanInfo[v6].maxWallDistance);
  __asm { vmaxss  xmm2, xmm1, xmm7 }
  if ( *(float *)&_XMM2 != 0.0 )
  {
    v11 = LODWORD(FLOAT_1_0);
    *(float *)&v11 = 1.0 - (float)((float)(*(float *)&_XMM2 - outDistance[0]) / *(float *)&_XMM2);
    _XMM2 = v11;
    __asm
    {
      vmaxss  xmm0, xmm2, xmm7
      vminss  xmm1, xmm0, xmm6
      vmaxss  xmm6, xmm1, xmm3
    }
  }
  *outMinVolume = *(float *)&_XMM6;
  return 1;
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
  float v4; 
  ZoneDef *v5; 
  ZoneDef *v6; 
  __int64 v7; 
  ZoneDef *zones; 
  const dvar_t *v9; 
  const char *zoneName; 
  ZoneDef *v11; 
  ZoneDef *outZoneB; 
  float outLerp; 
  ZoneDef *outZoneA; 

  if ( !s_soundTablePtr || g_lastAudioZoneIndexA == 0x7FFFFFFF || g_lastAudioZoneIndexB == 0x7FFFFFFF )
    return 0;
  v4 = 0.0;
  if ( g_lastAudioLerpVal == 1.0 )
  {
    v5 = NULL;
    v6 = &s_soundTablePtr->zones[g_lastAudioZoneIndexB];
    outLerp = 0.0;
  }
  else
  {
    v7 = g_lastAudioZoneIndexA;
    if ( g_lastAudioLerpVal == 0.0 )
    {
      v5 = NULL;
      v6 = &s_soundTablePtr->zones[v7];
      outLerp = 0.0;
    }
    else
    {
      zones = s_soundTablePtr->zones;
      outLerp = g_lastAudioLerpVal;
      v5 = &zones[g_lastAudioZoneIndexB];
      v6 = &zones[v7];
      v4 = g_lastAudioLerpVal;
    }
  }
  outZoneA = v6;
  if ( v4 > 0.5 )
    v6 = v5;
  outZoneB = v5;
  if ( !v6 || v6->exterior )
    return 0;
  v9 = DCONST_DVARBOOL_cg_default_zone_is_exterior;
  if ( !DCONST_DVARBOOL_cg_default_zone_is_exterior && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_default_zone_is_exterior") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    zoneName = v6->zoneName;
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    if ( !I_strcmp(cls.m_activeGameMapName, zoneName) )
      return 0;
  }
  if ( !CG_FindAudioZoneAtPoint(localClientNum, point, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &outLerp) )
    return 0;
  v11 = outZoneA;
  if ( outLerp > 0.5 )
    v11 = outZoneB;
  return v11 == v6;
}

/*
==============
CG_IsPointInsideHull
==============
*/
_BOOL8 CG_IsPointInsideHull(const ClientTriggerHull *thull, const TriggerSlab *slabs, const vec3_t *triggerSpacePoint)
{
  unsigned int slabCount; 
  int v4; 
  bool v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  unsigned int firstSlab; 

  slabCount = thull->slabCount;
  v4 = 0;
  v7 = 1;
  if ( slabCount >= 4 )
  {
    v8 = thull->firstSlab + 1;
    v9 = ((slabCount - 4) >> 2) + 1;
    v10 = v9;
    v4 = 4 * v9;
    do
    {
      v11 = v7 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(slabs[(unsigned int)(v8 - 1)].dir.v[1] * triggerSpacePoint->v[1]) + (float)(slabs[(unsigned int)(v8 - 1)].dir.v[0] * triggerSpacePoint->v[0])) + (float)(slabs[(unsigned int)(v8 - 1)].dir.v[2] * triggerSpacePoint->v[2])) - slabs[(unsigned int)(v8 - 1)].midPoint) & _xmm) < (float)(slabs[(unsigned int)(v8 - 1)].halfSize + 1.0);
      v12 = v11 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(slabs[v8].dir.v[1] * triggerSpacePoint->v[1]) + (float)(slabs[v8].dir.v[0] * triggerSpacePoint->v[0])) + (float)(slabs[v8].dir.v[2] * triggerSpacePoint->v[2])) - slabs[v8].midPoint) & _xmm) < (float)(slabs[v8].halfSize + 1.0);
      v13 = v12 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(slabs[(unsigned int)(v8 + 1)].dir.v[1] * triggerSpacePoint->v[1]) + (float)(slabs[(unsigned int)(v8 + 1)].dir.v[0] * triggerSpacePoint->v[0])) + (float)(slabs[(unsigned int)(v8 + 1)].dir.v[2] * triggerSpacePoint->v[2])) - slabs[(unsigned int)(v8 + 1)].midPoint) & _xmm) < (float)(slabs[(unsigned int)(v8 + 1)].halfSize + 1.0);
      v7 = v13 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(slabs[(unsigned int)(v8 + 2)].dir.v[1] * triggerSpacePoint->v[1]) + (float)(slabs[(unsigned int)(v8 + 2)].dir.v[0] * triggerSpacePoint->v[0])) + (float)(slabs[(unsigned int)(v8 + 2)].dir.v[2] * triggerSpacePoint->v[2])) - slabs[(unsigned int)(v8 + 2)].midPoint) & _xmm) < (float)(slabs[(unsigned int)(v8 + 2)].halfSize + 1.0);
      v8 = (unsigned int)(v8 + 4);
      --v10;
    }
    while ( v10 );
  }
  for ( ; v4 < (int)slabCount; ++v4 )
    v7 = v7 && (firstSlab = thull->firstSlab, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(slabs[firstSlab + v4].dir.v[1] * triggerSpacePoint->v[1]) + (float)(slabs[firstSlab + v4].dir.v[0] * triggerSpacePoint->v[0])) + (float)(slabs[firstSlab + v4].dir.v[2] * triggerSpacePoint->v[2])) - slabs[firstSlab + v4].midPoint) & _xmm) < (float)(slabs[firstSlab + v4].halfSize + 1.0));
  return v7;
}

/*
==============
CG_LerpAudio
==============
*/
void CG_LerpAudio(LocalClientNum_t localClientNum, float lerp)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  ZoneDef *zones; 
  __int64 reverbIndex; 
  __int64 v6; 
  int v7; 
  unsigned int v8; 
  int VolModCount; 
  __int64 v10; 
  int *v11; 
  __int64 v12; 
  __int64 v13; 
  double VolModDefaultValue; 
  double v15; 
  const SoundTable *v16; 
  __int64 ctMixZoneA; 
  ZoneDef *v18; 
  int v19; 
  signed int v20; 
  MixDef *mixes; 
  __int64 volModIndex; 
  __int64 v23; 
  __int64 ctMixZoneB; 
  ZoneDef *v25; 
  __int64 v26; 
  int v27; 
  signed int v28; 
  MixDef *v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 i; 
  double v33; 
  const SoundTable *v34; 
  ZoneDef *v35; 
  const char *ambientStream; 
  ZoneDef *v37; 
  __int16 ambientDefIndex; 
  float v39; 
  const AmbientDef *v40; 
  __int16 v41; 
  unsigned int ctFullOcclusionZoneB; 
  const SoundTable *v43; 
  __int64 v44; 
  ZoneDef *v45; 
  unsigned int v46; 
  __int64 system; 
  __int64 v48; 
  int v50[384]; 

  v2 = localClientNum;
  v3 = localClientNum;
  SND_SetEqLerp(lerp);
  if ( s_audioZoneStates[v3].ctReverbZoneA >= s_soundTablePtr->zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 591, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctReverbZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctReverbZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", s_audioZoneStates[v3].ctReverbZoneA, s_soundTablePtr->zoneCount) )
    __debugbreak();
  if ( s_audioZoneStates[v3].ctReverbZoneB >= s_soundTablePtr->zoneCount )
  {
    LODWORD(v48) = s_soundTablePtr->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctReverbZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctReverbZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctReverbZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
  }
  zones = s_soundTablePtr->zones;
  reverbIndex = zones[s_audioZoneStates[v3].ctReverbZoneA].reverbIndex;
  v6 = zones[s_audioZoneStates[v3].ctReverbZoneB].reverbIndex;
  if ( (_DWORD)reverbIndex != -1 && (_DWORD)v6 != -1 )
    SND_SetMainReverbBlended(&s_soundTablePtr->reverbs[reverbIndex], &s_soundTablePtr->reverbs[v6], lerp);
  v7 = 0;
  v8 = 0;
  VolModCount = SND_GetVolModCount();
  v10 = VolModCount;
  if ( VolModCount > 0 )
  {
    v11 = v50;
    v12 = VolModCount;
    v13 = 0i64;
    while ( v12 )
    {
      *v11++ = 0;
      --v12;
    }
    do
    {
      VolModDefaultValue = SND_GetVolModDefaultValue(v8);
      v50[v13 + 128] = SLODWORD(VolModDefaultValue);
      v15 = SND_GetVolModDefaultValue(v8);
      v50[v13++ + 256] = SLODWORD(v15);
      ++v8;
    }
    while ( v13 < v10 );
  }
  v16 = s_soundTablePtr;
  if ( s_audioZoneStates[v3].ctMixZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(v48) = s_soundTablePtr->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctMixZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctMixZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctMixZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
    v16 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v3].ctMixZoneB >= v16->zoneCount )
  {
    LODWORD(v48) = v16->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctMixZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctMixZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctMixZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
    v16 = s_soundTablePtr;
  }
  ctMixZoneA = s_audioZoneStates[v3].ctMixZoneA;
  v18 = v16->zones;
  if ( v18[ctMixZoneA].startMixIndex != -1 )
  {
    v19 = 0;
    if ( v18[ctMixZoneA].numMix > 0 )
    {
      do
      {
        v20 = v19 + v18[(unsigned int)ctMixZoneA].startMixIndex;
        if ( v20 >= v16->mixCount )
        {
          LODWORD(v48) = v16->mixCount;
          LODWORD(system) = v19 + v18[(unsigned int)ctMixZoneA].startMixIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->mixCount )", "idx doesn't index s_soundTablePtr->mixCount\n\t%i not in [0, %i)", system, v48) )
            __debugbreak();
          v16 = s_soundTablePtr;
        }
        mixes = v16->mixes;
        ++v19;
        volModIndex = mixes[v20].volModIndex;
        v18 = v16->zones;
        v50[volModIndex + 128] = LODWORD(mixes[v20].volume);
        v23 = s_audioZoneStates[v3].ctMixZoneA;
        LODWORD(ctMixZoneA) = s_audioZoneStates[v3].ctMixZoneA;
        v50[volModIndex] = 1;
      }
      while ( v19 < v18[v23].numMix );
      v2 = localClientNum;
    }
  }
  ctMixZoneB = s_audioZoneStates[v3].ctMixZoneB;
  v25 = v16->zones;
  LODWORD(v26) = s_audioZoneStates[v3].ctMixZoneB;
  if ( v25[ctMixZoneB].startMixIndex != -1 )
  {
    v27 = 0;
    if ( v25[ctMixZoneB].numMix > 0 )
    {
      do
      {
        v28 = v27 + v25[(unsigned int)ctMixZoneB].startMixIndex;
        if ( v28 >= v16->mixCount )
        {
          LODWORD(v48) = v16->mixCount;
          LODWORD(system) = v27 + v25[(unsigned int)ctMixZoneB].startMixIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 631, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->mixCount )", "idx doesn't index s_soundTablePtr->mixCount\n\t%i not in [0, %i)", system, v48) )
            __debugbreak();
          v16 = s_soundTablePtr;
        }
        v29 = v16->mixes;
        ++v27;
        v26 = s_audioZoneStates[v3].ctMixZoneB;
        LODWORD(ctMixZoneB) = s_audioZoneStates[v3].ctMixZoneB;
        v30 = v29[v28].volModIndex;
        v25 = v16->zones;
        v50[v30 + 256] = LODWORD(v29[v28].volume);
        v50[v30] = 1;
      }
      while ( v27 < v25[v26].numMix );
      v2 = localClientNum;
    }
  }
  v31 = 0;
  if ( v10 > 0 )
  {
    for ( i = 0i64; i < v10; ++i )
    {
      if ( v50[i] )
        *(float *)&v33 = (float)((float)(1.0 - lerp) * *(float *)&v50[i + 128]) + (float)(lerp * *(float *)&v50[i + 256]);
      else
        v33 = SND_GetVolModDefaultValue(v31);
      SND_SetVolModValue(v31++, *(float *)&v33, 0);
    }
    LODWORD(v26) = s_audioZoneStates[v3].ctMixZoneB;
    v16 = s_soundTablePtr;
  }
  SND_SubmixSetSlotsFromZones(v16->zones[s_audioZoneStates[v3].ctMixZoneA].duck, v16->zones[(unsigned int)v26].duck, lerp);
  v34 = s_soundTablePtr;
  if ( s_audioZoneStates[v3].ctAmbientZoneA >= s_soundTablePtr->zoneCount )
  {
    LODWORD(v48) = s_soundTablePtr->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctAmbientZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 671, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
    v34 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v3].ctAmbientZoneB >= v34->zoneCount )
  {
    LODWORD(v48) = v34->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctAmbientZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 672, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
    v34 = s_soundTablePtr;
  }
  v35 = v34->zones;
  ambientStream = v35[s_audioZoneStates[v3].ctAmbientZoneA].ambientStream;
  if ( ambientStream || v35[s_audioZoneStates[v3].ctAmbientZoneB].ambientStream )
  {
    SND_PlayAmbientAliasBlended(v2, ambientStream, v35[s_audioZoneStates[v3].ctAmbientZoneB].ambientStream, lerp, 0, SASYS_CGAME);
    v34 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v3].ctAmbientEventZoneA >= v34->zoneCount )
  {
    LODWORD(v48) = v34->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctAmbientEventZoneA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientEventZoneA ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientEventZoneA doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
    v34 = s_soundTablePtr;
  }
  if ( s_audioZoneStates[v3].ctAmbientEventZoneB >= v34->zoneCount )
  {
    LODWORD(v48) = v34->zoneCount;
    LODWORD(system) = s_audioZoneStates[v3].ctAmbientEventZoneB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 685, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->ctAmbientEventZoneB ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->ctAmbientEventZoneB doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", system, v48) )
      __debugbreak();
    v34 = s_soundTablePtr;
  }
  v37 = v34->zones;
  ambientDefIndex = v37[s_audioZoneStates[v3].ctAmbientEventZoneA].ambientDefIndex;
  if ( ambientDefIndex == -1 || lerp >= 0.5 )
  {
    v41 = v37[s_audioZoneStates[v3].ctAmbientEventZoneB].ambientDefIndex;
    if ( v41 == -1 )
      goto LABEL_72;
    if ( lerp < 0.5 )
      goto LABEL_73;
    v39 = lerp;
    v40 = &v34->ambientDefs[v41];
  }
  else
  {
    v39 = 1.0 - lerp;
    v40 = &v34->ambientDefs[ambientDefIndex];
  }
  SND_SetAmbientEvents(v2, v34, v40, v39);
LABEL_72:
  if ( lerp >= 0.5 )
  {
    ctFullOcclusionZoneB = s_audioZoneStates[v3].ctFullOcclusionZoneB;
    goto LABEL_75;
  }
LABEL_73:
  ctFullOcclusionZoneB = s_audioZoneStates[v3].ctFullOcclusionZoneA;
LABEL_75:
  SND_InitFullOcclusionFlags();
  v43 = s_soundTablePtr;
  v44 = ctFullOcclusionZoneB;
  v45 = s_soundTablePtr->zones;
  if ( v45[v44].startFullOccIndex != -1 && v45[v44].numDisableFullOcc > 0 )
  {
    do
    {
      v46 = v7 + v45[v44].startFullOccIndex;
      if ( v46 >= v43->fullOcclusionDefCount )
      {
        LODWORD(v48) = v43->fullOcclusionDefCount;
        LODWORD(system) = v7 + v45[v44].startFullOccIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 717, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( s_soundTablePtr->fullOcclusionDefCount )", "idx doesn't index s_soundTablePtr->fullOcclusionDefCount\n\t%i not in [0, %i)", system, v48) )
          __debugbreak();
        v43 = s_soundTablePtr;
      }
      SND_DisableFullOcclusionForEntChannel(v43->fullOcclusionDefs[v46].entChannelIdx);
      v43 = s_soundTablePtr;
      ++v7;
      v45 = s_soundTablePtr->zones;
    }
    while ( v7 < v45[v44].numDisableFullOcc );
  }
}

/*
==============
CG_OcclusionSettingsMatch
==============
*/
bool CG_OcclusionSettingsMatch(const LocalClientNum_t localClientNum, const vec3_t *emitterPos)
{
  float v3; 
  ZoneDef *v4; 
  ZoneDef *v5; 
  __int64 v6; 
  ZoneDef *zones; 
  ZoneDef *outZoneB; 
  float outLerp; 
  ZoneDef *outZoneA; 

  if ( !s_soundTablePtr || g_lastAudioZoneIndexA == 0x7FFFFFFF || g_lastAudioZoneIndexB == 0x7FFFFFFF )
    return 0;
  v3 = g_lastAudioLerpVal;
  if ( g_lastAudioLerpVal == 1.0 )
  {
    v3 = 0.0;
    v4 = &s_soundTablePtr->zones[g_lastAudioZoneIndexB];
    v5 = NULL;
  }
  else
  {
    v6 = g_lastAudioZoneIndexA;
    if ( g_lastAudioLerpVal == 0.0 )
    {
      v4 = &s_soundTablePtr->zones[v6];
      v5 = NULL;
      outLerp = 0.0;
      goto LABEL_10;
    }
    zones = s_soundTablePtr->zones;
    v4 = &zones[v6];
    v5 = &zones[g_lastAudioZoneIndexB];
  }
  outLerp = v3;
LABEL_10:
  if ( !CG_FindAudioZoneAtPoint(localClientNum, emitterPos, (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &outLerp) )
    return 0;
  if ( v4 )
  {
    if ( !outZoneA || v4->startOcclusionIndex != outZoneA->startOcclusionIndex )
      return 0;
  }
  else if ( outZoneA )
  {
    return 0;
  }
  if ( !v5 )
    return !outZoneB;
  if ( !outZoneB )
    return 0;
  return v5->startOcclusionIndex == outZoneB->startOcclusionIndex;
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
  unsigned __int16 v2; 
  int i; 
  double Float; 
  unsigned int v5; 
  char v6[4]; 
  char v7[8]; 
  char v8[72]; 
  unsigned __int16 p; 
  unsigned __int16 v10; 
  unsigned int v11; 

  memset_0(s_triggerStateTo, 0, sizeof(s_triggerStateTo));
  memset_0(s_triggerStateFrom, 0, sizeof(s_triggerStateFrom));
  memset_0(s_triggerStateLerp, 0, sizeof(s_triggerStateLerp));
  memset_0(s_triggerStateFadeTime, 0, sizeof(s_triggerStateFadeTime));
  MemFile_ReadData(memFile, 2ui64, &p);
  v2 = p;
  for ( i = 0; v2 != 0xFFFF; ++i )
  {
    if ( i >= 16385 )
      break;
    if ( v2 >= 0x4001u )
    {
      MemFile_ReadData(memFile, 4ui64, v6);
      MemFile_ReadData(memFile, 4ui64, v7);
      MemFile_ReadData(memFile, 8ui64, v8);
      MemFile_ReadFloat(memFile);
      MemFile_ReadData(memFile, 2ui64, &v10);
      v2 = v10;
    }
    else
    {
      MemFile_ReadData(memFile, 4ui64, &v11);
      s_triggerStateTo[v2] = v11;
      MemFile_ReadData(memFile, 4ui64, &v5);
      s_triggerStateFrom[v2] = v5;
      MemFile_ReadData(memFile, 8ui64, &s_triggerStateLerp[v2]);
      Float = MemFile_ReadFloat(memFile);
      s_triggerStateFadeTime[v2] = *(float *)&Float;
      MemFile_ReadData(memFile, 2ui64, &p);
      v2 = p;
    }
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

  for ( i = 0; i < 0x4001; ++i )
  {
    if ( s_triggerStateTo[i] || s_triggerStateLerp[i].current < 1.0 )
    {
      LOWORD(p) = i;
      MemFile_WriteData(memFile, 2ui64, &p);
      p = s_triggerStateTo[i];
      MemFile_WriteData(memFile, 4ui64, &p);
      p = s_triggerStateFrom[i];
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 8ui64, &s_triggerStateLerp[i]);
      MemFile_WriteFloat(memFile, s_triggerStateFadeTime[i]);
    }
  }
  LOWORD(p) = -1;
  MemFile_WriteData(memFile, 2ui64, &p);
  MemFile_WriteData(memFile, 0x1D8ui64, s_audioZoneStates);
  MemFile_WriteData(memFile, 0x4000ui64, g_audioTriggerDisabled);
}

/*
==============
CG_SetAudioLerpOverride
==============
*/
void CG_SetAudioLerpOverride(LocalClientNum_t localClientNum, const char *p_zoneNameA, const char *p_zoneNameB, CTAudOverrideType overrideType, float lerp, int overRideFlags)
{
  int v6; 
  __int64 v7; 
  CTAudState *v8; 
  int v11; 
  cg_t *LocalClientGlobals; 
  int v13; 
  cg_t *v14; 
  __int64 v15; 
  CTAudOverride *v16; 
  unsigned int v17; 
  CTAudOverride *v18; 
  __int64 v19; 
  const char *v20; 
  const char *zoneName; 
  signed __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  const char *v29; 
  const char *v30; 
  signed __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 
  const char *v37; 
  double v38; 
  CTAudOverride *v39; 
  CTAudState *v40; 
  CTAudOverride *v41; 
  cg_t *v42; 

  v6 = 0x7FFFFFFF;
  v7 = overrideType;
  v8 = &s_audioZoneStates[localClientNum];
  v40 = v8;
  v11 = 0x7FFFFFFF;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v13 = 6;
  v42 = LocalClientGlobals;
  v14 = LocalClientGlobals;
  v15 = 6i64;
  v16 = &v8->ctOverrideStack[6];
  while ( 1 )
  {
    v17 = 0;
    if ( v16->active )
      break;
    --v13;
    --v16;
    if ( --v15 < 0 )
    {
      v39 = NULL;
      goto LABEL_6;
    }
  }
  v39 = &v8->ctOverrideStack[v13];
LABEL_6:
  if ( (unsigned int)v7 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v7, 7) )
    __debugbreak();
  v18 = &v8->ctOverrideStack[v7];
  v41 = v18;
  if ( !I_stricmp(p_zoneNameA, "<current>") )
  {
    v6 = g_lastAudioZoneIndexA;
    if ( g_lastAudioZoneIndexA == 0x7FFFFFFF )
      v6 = SND_LookupZoneIndex(0x4000);
  }
  if ( !I_stricmp(p_zoneNameB, "<current>") )
  {
    v11 = g_lastAudioZoneIndexB;
    if ( g_lastAudioZoneIndexB == 0x7FFFFFFF )
      v11 = SND_LookupZoneIndex(0x4000);
  }
  if ( s_soundTablePtr->zoneCount )
  {
    do
    {
      if ( v6 == 0x7FFFFFFF )
      {
        v19 = 0x7FFFFFFFi64;
        v20 = p_zoneNameA;
        zoneName = s_soundTablePtr->zones[v17].zoneName;
        if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !p_zoneNameA && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v22 = zoneName - p_zoneNameA;
        do
        {
          v23 = (unsigned __int8)v20[v22];
          v24 = v19;
          v25 = *(unsigned __int8 *)v20++;
          --v19;
          if ( !v24 )
            break;
          if ( v23 != v25 )
          {
            v26 = v23 + 32;
            if ( (unsigned int)(v23 - 65) > 0x19 )
              v26 = v23;
            v23 = v26;
            v27 = v25 + 32;
            if ( (unsigned int)(v25 - 65) > 0x19 )
              v27 = v25;
            if ( v23 != v27 )
              goto LABEL_33;
          }
        }
        while ( v23 );
        v6 = v17;
      }
LABEL_33:
      if ( v11 == 0x7FFFFFFF )
      {
        v28 = 0x7FFFFFFFi64;
        v29 = p_zoneNameB;
        v30 = s_soundTablePtr->zones[v17].zoneName;
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !p_zoneNameB && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v31 = v30 - p_zoneNameB;
        do
        {
          v32 = (unsigned __int8)v29[v31];
          v33 = v28;
          v34 = *(unsigned __int8 *)v29++;
          --v28;
          if ( !v33 )
            break;
          if ( v32 != v34 )
          {
            v35 = v32 + 32;
            if ( (unsigned int)(v32 - 65) > 0x19 )
              v35 = v32;
            v32 = v35;
            v36 = v34 + 32;
            if ( (unsigned int)(v34 - 65) > 0x19 )
              v36 = v34;
            if ( v32 != v36 )
              goto LABEL_50;
          }
        }
        while ( v32 );
        v11 = v17;
      }
LABEL_50:
      ++v17;
    }
    while ( v17 < s_soundTablePtr->zoneCount );
    v8 = v40;
    v18 = v41;
    v14 = v42;
  }
  if ( v6 == 0x7FFFFFFF )
  {
    v37 = p_zoneNameA;
LABEL_54:
    Com_PrintError(9, "CG_SetAudioLerpOverride: Audio zone not found: %s\n", v37);
    return;
  }
  if ( v11 == 0x7FFFFFFF )
  {
    v37 = p_zoneNameB;
    goto LABEL_54;
  }
  v18->scriptAudioZoneOverride = v6;
  v18->scriptAudioZoneOverrideB = v11;
  v38 = I_fclamp(lerp, 0.0, 1.0);
  v18->scriptAudioZoneOverrideFlags = overRideFlags;
  v18->active = 1;
  v18->scriptAudioZoneOverrideLerp = *(float *)&v38;
  v8->scriptPrevAudioZoneOverride = v39->scriptAudioZoneOverride;
  v8->scriptAudioZoneFadeStartTime = v14->time;
  v8->scriptAudioZoneFadeTargetTime = v14->time;
  if ( v39 == v18 )
    v8->scriptPrevAudioZoneOverride = 0x7FFFFFFF;
}

/*
==============
CG_SetAudioOverride
==============
*/
void CG_SetAudioOverride(LocalClientNum_t localClientNum, const char *p_name, CTAudOverrideType overrideType, float fadeTime, int overRideFlags)
{
  __int64 v6; 
  __int64 v7; 
  const SoundTable *v8; 
  CTAudOverride *v9; 
  int v10; 
  CTAudState *v11; 
  __int64 v12; 
  cg_t *LocalClientGlobals; 
  int v14; 
  CTAudOverride *v15; 
  __int64 v16; 
  cg_t *v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 

  v6 = overrideType;
  v7 = localClientNum;
  if ( p_name && *p_name && (v8 = s_soundTablePtr) != NULL && (v9 = NULL, v10 = 0, s_soundTablePtr->zoneCount) )
  {
    while ( I_stricmp(v8->zones[v10].zoneName, p_name) )
    {
      v8 = s_soundTablePtr;
      if ( ++v10 >= s_soundTablePtr->zoneCount )
        goto LABEL_7;
    }
    v11 = &s_audioZoneStates[v7];
    v12 = v7;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    v14 = 6;
    v15 = &v11->ctOverrideStack[6];
    v16 = 6i64;
    v17 = LocalClientGlobals;
    while ( !v15->active )
    {
      --v14;
      --v15;
      if ( --v16 < 0 )
        goto LABEL_14;
    }
    v9 = &v11->ctOverrideStack[v14];
LABEL_14:
    if ( (unsigned int)v6 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1124, ASSERT_TYPE_ASSERT, "(unsigned)( overrideType ) < (unsigned)( ( sizeof( *array_counter( ctAudState->ctOverrideStack ) ) + 0 ) )", "overrideType doesn't index ARRAY_COUNT( ctAudState->ctOverrideStack )\n\t%i not in [0, %i)", v6, 7) )
      __debugbreak();
    v18 = v6;
    if ( v9 )
    {
      v11->scriptPrevAudioZoneOverride = v9->scriptAudioZoneOverride;
    }
    else
    {
      v19 = 0x4000;
      if ( g_playerCurrentAudioTrigger[v12] != 0x4000 )
        v19 = g_playerCurrentAudioTrigger[v12];
      v20 = SND_LookupZoneIndex(v19);
      v11->scriptPrevAudioZoneOverride = v20;
      if ( v20 >= s_soundTablePtr->zoneCount )
      {
        LODWORD(v22) = s_soundTablePtr->zoneCount;
        LODWORD(v21) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 2129, ASSERT_TYPE_ASSERT, "(unsigned)( ctAudState->scriptPrevAudioZoneOverride ) < (unsigned)( s_soundTablePtr->zoneCount )", "ctAudState->scriptPrevAudioZoneOverride doesn't index s_soundTablePtr->zoneCount\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
    }
    v11->scriptAudioZoneFadeStartTime = v17->time;
    v11->scriptAudioZoneFadeTargetTime = v17->time - (int)(float)(fadeTime * -1000.0);
    v11->ctOverrideStack[v18].scriptAudioZoneOverride = v10;
    v11->ctOverrideStack[v18].scriptAudioZoneOverrideFlags = overRideFlags;
    v11->ctOverrideStack[v18].scriptAudioZoneOverrideB = 0x7FFFFFFF;
    v11->ctOverrideStack[v18].active = 1;
  }
  else
  {
LABEL_7:
    Com_PrintError(9, "CG_SetAudioOverride: Audio zone not found: %s\n", p_name);
  }
}

/*
==============
CG_SetAudioTriggerState
==============
*/
void CG_SetAudioTriggerState(const unsigned int stateId, const unsigned int state, const float fadeTime)
{
  MapEnts *mapEnts; 
  __int64 i; 
  __int64 v7; 
  char *v8; 
  char v9; 
  int v10; 
  char v11; 

  if ( stateId == SND_GetDefaultHash() )
  {
    s_triggerStateFrom[0x4000] = s_triggerStateTo[0x4000];
    s_triggerStateTo[0x4000] = state;
    SND_SetTimeLerp(&s_triggerStateLerp[0x4000], fadeTime);
    s_triggerStateFadeTime[0x4000] = fadeTime;
  }
  mapEnts = cm.mapEnts;
  for ( i = 0i64; (unsigned int)i < mapEnts->clientTrigger.trigger.count; i = (unsigned int)(i + 1) )
  {
    v7 = mapEnts->clientTrigger.audioStateIds[i];
    if ( (_DWORD)v7 != -1 )
    {
      v8 = &mapEnts->clientTrigger.triggerString[v7];
      if ( v8 && (v9 = *v8) != 0 )
      {
        v10 = 5381;
        do
        {
          ++v8;
          v11 = v9 | 0x20;
          if ( (unsigned int)(v9 - 65) >= 0x1A )
            v11 = v9;
          v10 = 65599 * v10 + v11;
          v9 = *v8;
        }
        while ( *v8 );
        if ( !v10 )
          v10 = 1;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 == stateId )
      {
        s_triggerStateFrom[i] = s_triggerStateTo[i];
        s_triggerStateTo[i] = state;
        SND_SetTimeLerp(&s_triggerStateLerp[i], fadeTime);
        mapEnts = cm.mapEnts;
        s_triggerStateFadeTime[i] = fadeTime;
      }
    }
  }
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
  TimescaleEntry *timeScaleSettings; 
  __int64 v7; 

  v1 = s_soundTablePtr;
  v2 = 0;
  if ( !s_soundTablePtr )
    return 0;
  v4 = 0;
  for ( i = SND_HashName(presetName); v4 < v1->timeScaleSettingCount; ++v4 )
  {
    timeScaleSettings = v1->timeScaleSettings;
    v7 = v4;
    if ( timeScaleSettings[v7].presetName == i )
    {
      SND_SetTimeScaleLerp(timeScaleSettings[v7].entChannelIdx, timeScaleSettings[v7].scale);
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
void CG_ShutdownClientSideTriggersAudio(void)
{
  signed int v0; 
  int VolModCount; 
  double VolModDefaultValue; 

  v0 = 0;
  g_lastAudioZoneIndexA = 0x7FFFFFFF;
  s_soundTablePtr = NULL;
  g_lastOverRideFlags = 0;
  g_lastAudioZoneIndexB = 0x7FFFFFFF;
  if ( SND_Active() )
  {
    SND_SubmixSetSlotsFromZones(0, 0, 0.0);
    VolModCount = SND_GetVolModCount();
    if ( VolModCount > 0 )
    {
      do
      {
        VolModDefaultValue = SND_GetVolModDefaultValue(v0);
        SND_SetVolModValue(v0++, *(float *)&VolModDefaultValue, 0);
      }
      while ( v0 < VolModCount );
    }
  }
}

/*
==============
CG_StartClientSideTriggersAudio
==============
*/
void CG_StartClientSideTriggersAudio(LocalClientNum_t localClientNum, const char *mapname)
{
  TimeLerp *v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v8; 
  unsigned __int64 v9; 
  const char **v10; 
  __int64 v11; 
  const char *v12; 
  char v13; 
  unsigned int v14; 
  char v15; 
  unsigned int zoneCount; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  int *p_scriptAudioZoneOverrideB; 
  unsigned int v23; 

  v3 = s_triggerStateLerp;
  v4 = localClientNum;
  g_audioTriggersFound = 0;
  v5 = 0;
  v6 = 0i64;
  do
  {
    ++v5;
    *v3 = (TimeLerp)1065353216i64;
    s_triggerStateFadeTime[v6] = 0.0;
    ++v3;
    s_triggerStateFrom[v6] = 0;
    s_triggerStateTo[v6] = 0;
    s_audioZoneLookup[v6] = 0x7FFFFFFF;
    s_audioNPCZoneLookup[v6++] = 0x7FFFFFFF;
  }
  while ( v5 < 0x4001 );
  v8 = 0i64;
  v9 = 0i64;
  do
  {
    if ( v9 >= 678 )
    {
      j___report_rangecheckfailure(v8);
      JUMPOUT(0x141D61C9Ei64);
    }
    g_adsrBaseWeaponIdxLookup[v9] = 0;
    v8 = (unsigned int)(v8 + 1);
    ++v9;
  }
  while ( (unsigned int)v8 < 0x2A6 );
  v10 = g_missingAdsrWeaponNameLookup;
  v11 = 16i64;
  do
  {
    *v10 = NULL;
    v10[1] = NULL;
    v10[2] = NULL;
    v10 += 8;
    *(v10 - 5) = NULL;
    *(v10 - 4) = NULL;
    *(v10 - 3) = NULL;
    *(v10 - 2) = NULL;
    *(v10 - 1) = NULL;
    --v11;
  }
  while ( v11 );
  g_freeMissingWeaponIndex = 0;
  v12 = mapname;
  if ( mapname && (v13 = *mapname) != 0 )
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
  s_soundTablePtr = SND_GetSoundTableById(v14);
  SND_DeactivateAllEq(0);
  SND_DeactivateAllEq(1);
  SND_ClearAllOcclusionSettings();
  SND_SetEqLerp(0.0);
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
  v17 = 0;
  if ( !zoneCount )
    goto LABEL_24;
  while ( s_soundTablePtr->zones[v17].id != v14 )
  {
    if ( ++v17 >= zoneCount )
      goto LABEL_24;
  }
  s_audioZoneLookup[0x4000] = v17;
  s_audioNPCZoneLookup[0x4000] = v17;
  if ( v17 == 0x7FFFFFFF )
  {
LABEL_24:
    v18 = 0;
    if ( !zoneCount )
      goto LABEL_30;
    while ( s_soundTablePtr->zones[v18].id != SND_GetDefaultHash() )
    {
      if ( ++v18 >= s_soundTablePtr->zoneCount )
      {
        v18 = s_audioZoneLookup[0x4000];
        goto LABEL_29;
      }
    }
    s_audioZoneLookup[0x4000] = v18;
    s_audioNPCZoneLookup[0x4000] = v18;
LABEL_29:
    if ( v18 == 0x7FFFFFFF )
      goto LABEL_30;
  }
LABEL_31:
  if ( !DB_IsDoingSPHotLoad() )
  {
    if ( s_soundTablePtr )
    {
      if ( s_audioZoneLookup[0x4000] == 0x7FFFFFFF )
      {
        v19 = s_audioZoneLookup[0x4000];
        v20 = s_audioZoneLookup[0x4000];
      }
      else
      {
        v21 = s_soundTablePtr->zoneCount;
        v20 = s_audioZoneLookup[0x4000];
        if ( s_audioZoneLookup[0x4000] >= v21 )
        {
LABEL_39:
          v20 = s_audioZoneLookup[0x4000];
        }
        else
        {
          while ( s_soundTablePtr->zones[v20].stateId != s_triggerStateTo[0x4000] )
          {
            if ( ++v20 >= v21 )
              goto LABEL_39;
          }
        }
        v19 = s_audioZoneLookup[0x4000];
        if ( s_audioZoneLookup[0x4000] >= v21 )
        {
LABEL_43:
          v19 = s_audioZoneLookup[0x4000];
        }
        else
        {
          while ( s_soundTablePtr->zones[v19].stateId != s_triggerStateTo[0x4000] )
          {
            if ( ++v19 >= v21 )
              goto LABEL_43;
          }
        }
      }
    }
    else
    {
      v19 = 0x7FFFFFFF;
      v20 = 0x7FFFFFFF;
    }
    CG_TriggerAudio(localClientNum, v19, v20, 0.0, 2047);
  }
  p_scriptAudioZoneOverrideB = &s_audioZoneStates[v4].ctOverrideStack[0].scriptAudioZoneOverrideB;
  v23 = 0;
  do
  {
    v23 += 7;
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
  while ( v23 < 7 );
  *(_QWORD *)&s_audioZoneStates[v4].scriptPrevAudioZoneOverride = 0x7FFFFFFFi64;
  s_audioZoneStates[v4].scriptAudioZoneFadeStartTime = 0;
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
void CG_TriggerAudio(LocalClientNum_t localClientNum, int zoneA, int zoneB, float lerp, int overRideFlags)
{
  int v8; 

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
        CG_ChangeAudio(localClientNum);
      }
    }
    else
    {
      CG_UpdateAudioZone(localClientNum, zoneA, zoneB, overRideFlags);
      if ( v8 != g_lastAudioZoneIndexA || zoneB != g_lastAudioZoneIndexB || g_lastOverRideFlags != overRideFlags )
        CG_ChangeAudio(localClientNum);
      CG_LerpAudio(localClientNum, lerp);
      g_lastOverRideFlags = overRideFlags;
      g_lastAudioZoneIndexA = zoneA;
      g_lastAudioZoneIndexB = zoneB;
    }
  }
}

/*
==============
CG_TriggerAudioFade
==============
*/
void CG_TriggerAudioFade(LocalClientNum_t localClientNum, int zone, float fadeTime, int overRideFlags)
{
  cg_t *LocalClientGlobals; 
  int v8; 
  cg_t *v9; 
  int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  double v17; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = g_audTrigFadeZoneA;
  v9 = LocalClientGlobals;
  v10 = g_audTrigFadeZoneB;
  if ( zone == g_audTrigFadeZoneA || zone == g_audTrigFadeZoneB )
  {
    v11 = g_audTrigFadeCurLerp;
    v12 = FLOAT_1_0;
    if ( g_audTrigFadeCurLerp <= 0.0 || g_audTrigFadeCurLerp >= 1.0 )
    {
      if ( g_audTrigFadeCurLerp == 0.0 )
      {
        v10 = g_audTrigFadeZoneA;
        g_audTrigFadeZoneB = g_audTrigFadeZoneA;
      }
      else if ( g_audTrigFadeCurLerp == 1.0 )
      {
        v8 = g_audTrigFadeZoneB;
        g_audTrigFadeZoneA = g_audTrigFadeZoneB;
      }
    }
    else
    {
      v15 = g_audTrigFadeRate;
      if ( zone == g_audTrigFadeZoneB && g_audTrigFadeRate < 0.0 )
      {
        LODWORD(v15) = LODWORD(g_audTrigFadeRate) ^ _xmm;
        LODWORD(g_audTrigFadeRate) ^= _xmm;
      }
      if ( zone == g_audTrigFadeZoneA && v15 > 0.0 )
        LODWORD(g_audTrigFadeRate) = LODWORD(v15) ^ _xmm;
    }
  }
  else
  {
    v11 = g_audTrigFadeCurLerp;
    if ( g_audTrigFadeZoneA == 0x7FFFFFFF || g_audTrigFadeCurLerp != 0.0 )
    {
      v12 = FLOAT_1_0;
      if ( g_audTrigFadeZoneB == 0x7FFFFFFF || g_audTrigFadeCurLerp != 1.0 )
      {
        if ( g_audTrigFadeCurLerp == 0.0 || g_audTrigFadeCurLerp == 1.0 )
        {
          v11 = 0.0;
          g_audTrigFadeCurLerp = 0.0;
          g_audTrigFadeRate = 0.0;
          v8 = zone;
          g_audTrigFadeZoneA = zone;
          v10 = zone;
          g_audTrigFadeZoneB = zone;
        }
      }
      else
      {
        if ( fadeTime <= 0.0 )
        {
          v11 = 0.0;
          g_audTrigFadeCurLerp = 0.0;
          v10 = zone;
          g_audTrigFadeZoneB = zone;
          v14 = 0.0;
        }
        else
        {
          v14 = -0.001 / fadeTime;
        }
        g_audTrigFadeRate = v14;
        v8 = zone;
        g_audTrigFadeZoneA = zone;
      }
    }
    else
    {
      v12 = FLOAT_1_0;
      if ( fadeTime <= 0.0 )
      {
        g_audTrigFadeCurLerp = FLOAT_1_0;
        v11 = FLOAT_1_0;
        v8 = zone;
        g_audTrigFadeZoneA = zone;
        v13 = 0.0;
      }
      else
      {
        v13 = 0.001 / fadeTime;
      }
      g_audTrigFadeRate = v13;
      v10 = zone;
      g_audTrigFadeZoneB = zone;
    }
  }
  CG_TriggerAudio(localClientNum, v8, v10, v11, overRideFlags);
  v16 = g_audTrigFadeCurLerp;
  g_audTrigFadeCurLerp = g_audTrigFadeCurLerp + (float)((float)v9->frametime * g_audTrigFadeRate);
  g_lastAudioLerpVal = v16;
  v17 = I_fclamp(g_audTrigFadeCurLerp, 0.0, v12);
  g_audTrigFadeCurLerp = *(float *)&v17;
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
  __int64 v8; 
  CTAudState *v9; 
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  int v12; 
  __int64 v13; 
  CTAudOverride *v14; 
  TimeLerp *v15; 
  CTAudOverride *v16; 
  int scriptAudioZoneOverrideB; 
  int scriptPrevAudioZoneOverride; 
  int v19; 
  int v20; 
  double v21; 
  int time; 
  int scriptAudioZoneFadeTargetTime; 
  double v24; 
  int TriggerAudioZoneForOverrideBlending; 
  float v26; 
  int v27; 
  int v28; 
  float v29; 
  int v30; 
  float v31; 
  int v32; 
  unsigned int v33; 
  unsigned int v34; 
  double v35; 
  float *lerpAmount; 
  __int64 v37; 
  float v38; 
  unsigned int trigB; 
  unsigned int trigA; 
  unsigned int v41; 

  v41 = propagationTrigger;
  v8 = localClientNum;
  trigA = 0x4000;
  v9 = &s_audioZoneStates[localClientNum];
  trigB = 0x4000;
  v10 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( CL_IsRenderingSplitScreen() )
  {
    audioTrigger = 0x4000;
    audioBlendTrigger = 0x4000;
  }
  v12 = 6;
  v13 = 6i64;
  v14 = &v9->ctOverrideStack[6];
  while ( 1 )
  {
    v15 = s_triggerStateLerp;
    if ( v14->active )
      break;
    --v12;
    --v14;
    if ( --v13 < 0 )
      goto LABEL_16;
  }
  v16 = &v9->ctOverrideStack[v12];
  if ( !v16 )
  {
LABEL_16:
    time = LocalClientGlobals->time;
    scriptAudioZoneFadeTargetTime = v9->scriptAudioZoneFadeTargetTime;
    if ( time >= scriptAudioZoneFadeTargetTime || v9->scriptPrevAudioZoneOverride == 0x7FFFFFFF )
    {
      if ( audioBlendTrigger == 0x4000 )
      {
        if ( audioTrigger == 0x4000 )
        {
          if ( s_triggerStateLerp[0x4000].current >= 1.0 )
          {
            if ( g_audTrigPrevFadeTrigger >= 0x4000 )
              v31 = 0.0;
            else
              v31 = cm.mapEnts->clientTrigger.scriptDelay[g_audTrigPrevFadeTrigger];
          }
          else
          {
            v31 = s_triggerStateFadeTime[0x4000];
          }
          v32 = SND_LookupZoneIndex(0x4000);
          CG_TriggerAudioFade((LocalClientNum_t)v8, v32, v31, 2047);
        }
        else
        {
          if ( audioTrigger >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1239, ASSERT_TYPE_ASSERT, "(unsigned)( audioTrigger ) < (unsigned)( (16*1024) )", "audioTrigger doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", audioTrigger, 0x4000) )
            __debugbreak();
          if ( audioTrigger >= cm.mapEnts->clientTrigger.trigger.count )
          {
            LODWORD(v37) = cm.mapEnts->clientTrigger.trigger.count;
            LODWORD(lerpAmount) = audioTrigger;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trigger_audio.cpp", 1240, ASSERT_TYPE_ASSERT, "(unsigned)( audioTrigger ) < (unsigned)( cm.mapEnts->clientTrigger.trigger.count )", "audioTrigger doesn't index cm.mapEnts->clientTrigger.trigger.count\n\t%i not in [0, %i)", lerpAmount, v37) )
              __debugbreak();
          }
          if ( s_triggerStateLerp[audioTrigger].current >= 1.0 )
            v29 = cm.mapEnts->clientTrigger.scriptDelay[audioTrigger];
          else
            v29 = s_triggerStateFadeTime[audioTrigger];
          v30 = SND_LookupZoneIndex(audioTrigger);
          CG_TriggerAudioFade((LocalClientNum_t)v8, v30, v29, 2047);
          g_audTrigPrevFadeTrigger = audioTrigger;
        }
      }
      else
      {
        v38 = 0.0;
        CG_TriggerLerpTriggers((LocalClientNum_t)v8, audioBlendTrigger, viewPos, &trigA, &trigB, &v38);
        v26 = v38;
        g_lastAudioLerpVal = v38;
        v27 = SND_LookupZoneIndex(trigB);
        v28 = SND_LookupZoneIndex(trigA);
        CG_TriggerAudio((LocalClientNum_t)v8, v28, v27, v26, 2047);
        g_audTrigFadeCurLerp = 0.0;
        g_audTrigFadeRate = 0.0;
        g_audTrigFadeZoneA = 0x7FFFFFFF;
        g_audTrigFadeZoneB = 0x7FFFFFFF;
      }
    }
    else
    {
      v24 = I_fclamp((float)(time - v9->scriptAudioZoneFadeStartTime) / (float)(scriptAudioZoneFadeTargetTime - v9->scriptAudioZoneFadeStartTime), 0.0, 1.0);
      TriggerAudioZoneForOverrideBlending = GetTriggerAudioZoneForOverrideBlending((LocalClientNum_t)v8, audioTrigger, audioBlendTrigger, viewPos);
      CG_TriggerAudio((LocalClientNum_t)v8, v9->scriptPrevAudioZoneOverride, TriggerAudioZoneForOverrideBlending, *(float *)&v24, 2047);
      g_lastAudioLerpVal = *(float *)&v24;
      g_audTrigFadeCurLerp = 0.0;
      g_audTrigFadeRate = 0.0;
      g_audTrigFadeZoneA = 0x7FFFFFFF;
      g_audTrigFadeZoneB = 0x7FFFFFFF;
    }
    goto LABEL_38;
  }
  scriptAudioZoneOverrideB = v16->scriptAudioZoneOverrideB;
  if ( scriptAudioZoneOverrideB == 0x7FFFFFFF )
  {
    scriptPrevAudioZoneOverride = v9->scriptPrevAudioZoneOverride;
    if ( scriptPrevAudioZoneOverride == 0x7FFFFFFF )
      scriptPrevAudioZoneOverride = GetTriggerAudioZoneForOverrideBlending((LocalClientNum_t)v8, audioTrigger, audioBlendTrigger, viewPos);
    v19 = LocalClientGlobals->time;
    v20 = v9->scriptAudioZoneFadeTargetTime;
    if ( v19 >= v20 )
    {
      CG_TriggerAudio((LocalClientNum_t)v8, v16->scriptAudioZoneOverride, v16->scriptAudioZoneOverride, 0.0, v16->scriptAudioZoneOverrideFlags);
      v9->scriptPrevAudioZoneOverride = v16->scriptAudioZoneOverride;
    }
    else
    {
      v21 = I_fclamp((float)(v19 - v9->scriptAudioZoneFadeStartTime) / (float)(v20 - v9->scriptAudioZoneFadeStartTime), 0.0, 1.0);
      CG_TriggerAudio((LocalClientNum_t)v8, scriptPrevAudioZoneOverride, v16->scriptAudioZoneOverride, *(float *)&v21, v16->scriptAudioZoneOverrideFlags);
      g_lastAudioLerpVal = *(float *)&v21;
    }
    g_audTrigFadeCurLerp = 0.0;
    g_audTrigFadeRate = 0.0;
    g_audTrigFadeZoneA = 0x7FFFFFFF;
    v10 = v8;
    g_audTrigFadeZoneB = 0x7FFFFFFF;
  }
  else
  {
    CG_TriggerAudio((LocalClientNum_t)v8, v16->scriptAudioZoneOverride, scriptAudioZoneOverrideB, v16->scriptAudioZoneOverrideLerp, v16->scriptAudioZoneOverrideFlags);
    g_lastAudioLerpVal = v16->scriptAudioZoneOverrideLerp;
    g_audTrigFadeCurLerp = 0.0;
    g_audTrigFadeRate = 0.0;
    g_audTrigFadeZoneA = 0x7FFFFFFF;
    g_audTrigFadeZoneB = 0x7FFFFFFF;
  }
LABEL_38:
  v33 = 0;
  g_playerCurrentPropagationTrigger[v10] = v41;
  v34 = soundBankTrigger;
  g_playerCurrentAudioTrigger[v10] = audioTrigger;
  g_playerCurrentAudioBlendTrigger[v10] = audioBlendTrigger;
  g_playerCurrentSoundBankTrigger[v10] = v34;
  do
  {
    v35 = I_fclamp((float)((float)LocalClientGlobals->frametime * v15->rateMS) + v15->current, 0.0, 1.0);
    ++v33;
    v15->current = *(float *)&v35;
    ++v15;
  }
  while ( v33 < 0x4001 );
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
float DrawContexts(int zoneIdx, float x, float y, const vec4_t *color, const ScreenPlacement *scrPlace)
{
  __int128 v6; 
  ZoneDef *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  SndContext *Context; 
  int startIndex; 
  int v13; 
  GfxFont *font; 
  SndContextValue *ContextValue; 
  const char *s; 
  __int128 v17; 
  unsigned int type[4]; 
  int v20[4]; 

  v6 = 0i64;
  v7 = &s_soundTablePtr->zones[zoneIdx];
  v8 = 0;
  v9 = 0i64;
  type[0] = v7->contextType1;
  type[1] = v7->contextType2;
  type[2] = v7->contextType3;
  type[3] = v7->contextType4;
  v20[0] = v7->contextValue1;
  v20[1] = v7->contextValue2;
  v20[2] = v7->contextValue3;
  v20[3] = v7->contextValue4;
  do
  {
    v10 = type[v9];
    if ( v10 )
    {
      Context = SND_GetContext(v10);
      startIndex = Context->startIndex;
      if ( startIndex < startIndex + Context->numValues )
      {
        v13 = v20[v9];
        do
        {
          if ( v13 == SND_GetContextValue(startIndex)->valueId )
          {
            font = cls.smallDevFont;
            ContextValue = SND_GetContextValue(startIndex);
            s = j_va("    %s: %s", Context->type, ContextValue->value);
            v17 = v6;
            *(float *)&v17 = *(float *)&v6 + (float)CG_DrawDevString(scrPlace, x, y, 0.55000001, 0.55000001, s, color, 5, font);
            v6 = v17;
          }
          ++startIndex;
        }
        while ( startIndex < Context->numValues + Context->startIndex );
      }
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 4 );
  return *(float *)&v6;
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
    *overriddenColor = colorMdCyan;
  else
    *overriddenColor = colorMdYellow;
}

/*
==============
GetTriggerAudioZoneForOverrideBlending
==============
*/
int GetTriggerAudioZoneForOverrideBlending(LocalClientNum_t localClientNum, int audioTrigger, int audioBlendTrigger, const vec3_t *viewPos)
{
  float lerpAmount; 
  unsigned int trigB[5]; 
  unsigned int trigA; 

  if ( audioBlendTrigger != 0x4000 )
  {
    CG_TriggerLerpTriggers(localClientNum, audioBlendTrigger, viewPos, &trigA, trigB, &lerpAmount);
    audioTrigger = trigA;
    if ( lerpAmount >= 0.5 )
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

