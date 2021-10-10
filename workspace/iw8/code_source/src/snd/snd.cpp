/*
==============
FindDominantContextTypeNoBlend
==============
*/

unsigned int __fastcall FindDominantContextTypeNoBlend(const unsigned int contextType, const ZoneDef *zone, const SndEntState *entState)
{
  return ?FindDominantContextTypeNoBlend@@YAIIPEBUZoneDef@@PEBUSndEntState@@@Z(contextType, zone, entState);
}

/*
==============
SND_ResetTimeScaleDefaults
==============
*/

void SND_ResetTimeScaleDefaults(void)
{
  ?SND_ResetTimeScaleDefaults@@YAXXZ();
}

/*
==============
SND_GetVolModName
==============
*/

const char *__fastcall SND_GetVolModName(unsigned int volmodIndex)
{
  return ?SND_GetVolModName@@YAPEBDI@Z(volmodIndex);
}

/*
==============
SND_IsChannelMissionVOChannel
==============
*/

bool __fastcall SND_IsChannelMissionVOChannel(unsigned int entChannel)
{
  return ?SND_IsChannelMissionVOChannel@@YA_NI@Z(entChannel);
}

/*
==============
SND_GetSoundOverlay
==============
*/

int __fastcall SND_GetSoundOverlay(snd_overlay_type_t type, snd_overlay_info_t *info, int maxcount, int *cpu)
{
  return ?SND_GetSoundOverlay@@YAHW4snd_overlay_type_t@@QEAUsnd_overlay_info_t@@HPEAH@Z(type, info, maxcount, cpu);
}

/*
==============
SND_UpdateDebug
==============
*/

void SND_UpdateDebug(void)
{
  ?SND_UpdateDebug@@YAXXZ();
}

/*
==============
SND_GetDryLevel
==============
*/

double __fastcall SND_GetDryLevel(const SndVoice *voice, bool useReverbDryLevel)
{
  double result; 

  *(float *)&result = ?SND_GetDryLevel@@YAMPEBUSndVoice@@_N@Z(voice, useReverbDryLevel);
  return result;
}

/*
==============
SND_GetVolumeFalloffGain
==============
*/

double __fastcall SND_GetVolumeFalloffGain(const SndVoice *voice, const float dist, const float distFrac, const SndCurve *vfCurve)
{
  double result; 

  *(float *)&result = ?SND_GetVolumeFalloffGain@@YAMPEBUSndVoice@@MMPEBUSndCurve@@@Z(voice, dist, distFrac, vfCurve);
  return result;
}

/*
==============
SND_GetWhizbyData
==============
*/

bool __fastcall SND_GetWhizbyData(const LocalClientNum_t localClientNum, const WeaponSFXPackage *sfxPackage, const vec3_t *inSndCenterPt, const vec3_t *inBulletDir, const float shooterDist, const bool isBallistic, const float ballisticTimeSecToTarget, float radius, SndWhizbyData *outWhizbyData)
{
  return ?SND_GetWhizbyData@@YA_NW4LocalClientNum_t@@PEBUWeaponSFXPackage@@AEBTvec3_t@@2M_NMMAEAUSndWhizbyData@@@Z(localClientNum, sfxPackage, inSndCenterPt, inBulletDir, shooterDist, isBallistic, ballisticTimeSecToTarget, radius, outWhizbyData);
}

/*
==============
SND_VoiceSetStartSync
==============
*/

void __fastcall SND_VoiceSetStartSync(SndVoice *voice, bool startSync, float syncPeriodFrames, int meter, int offsetFrames, int delayBeats, int fadeBeats)
{
  ?SND_VoiceSetStartSync@@YAXPEAUSndVoice@@_NMHHHH@Z(voice, startSync, syncPeriodFrames, meter, offsetFrames, delayBeats, fadeBeats);
}

/*
==============
SND_ScalePitchOnEnt
==============
*/

void __fastcall SND_ScalePitchOnEnt(unsigned __int64 sndEnt, float pitch, int msec)
{
  ?SND_ScalePitchOnEnt@@YAX_KMH@Z(sndEnt, pitch, msec);
}

/*
==============
SND_InitAliasGroupTracking
==============
*/

void __fastcall SND_InitAliasGroupTracking(SndAliasGroupTracking *inOutTracking)
{
  ?SND_InitAliasGroupTracking@@YAXAEAUSndAliasGroupTracking@@@Z(inOutTracking);
}

/*
==============
SND_ProcessPendingRestore
==============
*/

void SND_ProcessPendingRestore(void)
{
  ?SND_ProcessPendingRestore@@YAXXZ();
}

/*
==============
SND_GetLengthMS
==============
*/

bool __fastcall SND_GetLengthMS(unsigned int playbackId, int *msec)
{
  return ?SND_GetLengthMS@@YA_NIPEAH@Z(playbackId, msec);
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/

unsigned int __fastcall SND_PlayScaledSoundAlias(const char *aliasName, const unsigned __int64 sndEnt, const float volumeScale, const float pitch, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  return ?SND_PlayScaledSoundAlias@@YAIPEBD_KMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasName, sndEnt, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_ClearSoloChannel_f
==============
*/

void __fastcall SND_ClearSoloChannel_f()
{
  ?SND_ClearSoloChannel_f@@YAXXZ();
}

/*
==============
SND_GetSlavePercent
==============
*/

double __fastcall SND_GetSlavePercent(const SndAlias *alias)
{
  double result; 

  *(float *)&result = ?SND_GetSlavePercent@@YAMPEBUSndAlias@@@Z(alias);
  return result;
}

/*
==============
SND_PrintEqParams
==============
*/

void SND_PrintEqParams(void)
{
  ?SND_PrintEqParams@@YAXXZ();
}

/*
==============
CG_SND_Update
==============
*/

void __fastcall CG_SND_Update(const LocalClientNum_t localClientNum)
{
  ?CG_SND_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_IsRestricted
==============
*/

bool __fastcall SND_IsRestricted(unsigned int entchannel)
{
  return ?SND_IsRestricted@@YA_NI@Z(entchannel);
}

/*
==============
SND_InitGlobalContexts
==============
*/

void SND_InitGlobalContexts(void)
{
  ?SND_InitGlobalContexts@@YAXXZ();
}

/*
==============
SND_ApplySpeakerParams
==============
*/

void __fastcall SND_ApplySpeakerParams(const int index, const int frametime, const float voiceVolume)
{
  ?SND_ApplySpeakerParams@@YAXHHM@Z(index, frametime, voiceVolume);
}

/*
==============
SND_StopVoice
==============
*/

void __fastcall SND_StopVoice(int index)
{
  ?SND_StopVoice@@YAXH@Z(index);
}

/*
==============
SND_SetListener
==============
*/

void __fastcall SND_SetListener(LocalClientNum_t localClientNum, int playerStateClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *velocity)
{
  ?SND_SetListener@@YAXW4LocalClientNum_t@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@1@Z(localClientNum, playerStateClientNum, origin, axis, velocity);
}

/*
==============
SND_GetListenerOrigin
==============
*/

void __fastcall SND_GetListenerOrigin(const LocalClientNum_t clientNum, vec3_t *outOrigin)
{
  ?SND_GetListenerOrigin@@YAXW4LocalClientNum_t@@AEATvec3_t@@@Z(clientNum, outOrigin);
}

/*
==============
SND_RecalcPropagation_f
==============
*/

void __fastcall SND_RecalcPropagation_f()
{
  ?SND_RecalcPropagation_f@@YAXXZ();
}

/*
==============
SND_SetEqQ
==============
*/

void __fastcall SND_SetEqQ(int entchannel, int eqIndex, int band, float q)
{
  ?SND_SetEqQ@@YAXHHHM@Z(entchannel, eqIndex, band, q);
}

/*
==============
SND_PlayContextSoundAsync
==============
*/

void __fastcall SND_PlayContextSoundAsync(const SndAliasList *aliasList, const int surfaceType, const int contextIndex, const int contextIndex2, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org)
{
  ?SND_PlayContextSoundAsync@@YAXPEBUSndAliasList@@HHHW4LocalClientNum_t@@HMMAEBTvec3_t@@@Z(aliasList, surfaceType, contextIndex, contextIndex2, localClientNum, entnum, volumeScale, pitch, org);
}

/*
==============
SND_StopAmbientAlias
==============
*/

void __fastcall SND_StopAmbientAlias(const char *aliasName, int fadeTime)
{
  ?SND_StopAmbientAlias@@YAXPEBDH@Z(aliasName, fadeTime);
}

/*
==============
SND_FindAssetsForVoice
==============
*/

bool __fastcall SND_FindAssetsForVoice(SndStartAliasInfo *info)
{
  return ?SND_FindAssetsForVoice@@YA_NPEAUSndStartAliasInfo@@@Z(info);
}

/*
==============
SND_OcclusionWorker
==============
*/

void __fastcall SND_OcclusionWorker(const void *const cmdInfo)
{
  ?SND_OcclusionWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_RemoveVoice
==============
*/

void __fastcall SND_RemoveVoice(unsigned int entchannel)
{
  ?SND_RemoveVoice@@YAXI@Z(entchannel);
}

/*
==============
SND_PlaySoundAliasFromParams
==============
*/

unsigned int __fastcall SND_PlaySoundAliasFromParams(const SndPlayParams *inParams, bool deferred)
{
  return ?SND_PlaySoundAliasFromParams@@YAIAEBUSndPlayParams@@_N@Z(inParams, deferred);
}

/*
==============
SND_GetSoundFileLengthMS
==============
*/

int __fastcall SND_GetSoundFileLengthMS(const SndAssetBankEntry *entry)
{
  return ?SND_GetSoundFileLengthMS@@YAHPEBUSndAssetBankEntry@@@Z(entry);
}

/*
==============
SND_GetMasterPercent
==============
*/

double __fastcall SND_GetMasterPercent(const SndVoice *voice)
{
  double result; 

  *(float *)&result = ?SND_GetMasterPercent@@YAMPEBUSndVoice@@@Z(voice);
  return result;
}

/*
==============
SND_ResetVoice
==============
*/

void __fastcall SND_ResetVoice(int index)
{
  ?SND_ResetVoice@@YAXH@Z(index);
}

/*
==============
SND_SetEq
==============
*/

void __fastcall SND_SetEq(const char *channelName, int eqIndex, int band, SND_EQTYPE type, float gain, float freq, float q)
{
  ?SND_SetEq@@YAXPEBDHHW4SND_EQTYPE@@MMM@Z(channelName, eqIndex, band, type, gain, freq, q);
}

/*
==============
SND_ChangeSoundAliasValuesOnPlayingChannels
==============
*/

void __fastcall SND_ChangeSoundAliasValuesOnPlayingChannels(const SndAlias *alias, const unsigned int oldEntChannel)
{
  ?SND_ChangeSoundAliasValuesOnPlayingChannels@@YAXPEBUSndAlias@@I@Z(alias, oldEntChannel);
}

/*
==============
SND_GetSubtitleForPlaybackId
==============
*/

const char *__fastcall SND_GetSubtitleForPlaybackId(unsigned int id)
{
  return ?SND_GetSubtitleForPlaybackId@@YAPEBDI@Z(id);
}

/*
==============
SND_FullOcclusionEnabledForChannel
==============
*/

bool __fastcall SND_FullOcclusionEnabledForChannel(int entChannelIdx)
{
  return ?SND_FullOcclusionEnabledForChannel@@YA_NH@Z(entChannelIdx);
}

/*
==============
SND_UpdateVehicle
==============
*/

void __fastcall SND_UpdateVehicle(const SndAliasList *aliasList, LocalClientNum_t localClientNum, int entNum, vec3_t *origin, float throttle, float brake)
{
  ?SND_UpdateVehicle@@YAXPEBUSndAliasList@@W4LocalClientNum_t@@HTvec3_t@@MM@Z(aliasList, localClientNum, entNum, origin, throttle, brake);
}

/*
==============
SND_UnpauseVoice
==============
*/

void __fastcall SND_UnpauseVoice(int index)
{
  ?SND_UnpauseVoice@@YAXH@Z(index);
}

/*
==============
SND_IsAliasSpatial
==============
*/

bool __fastcall SND_IsAliasSpatial(const SndAlias *alias)
{
  return ?SND_IsAliasSpatial@@YA_NPEBUSndAlias@@@Z(alias);
}

/*
==============
SND_ResetEntState
==============
*/

void SND_ResetEntState(void)
{
  ?SND_ResetEntState@@YAXXZ();
}

/*
==============
SNDL_Shutdown
==============
*/

void SNDL_Shutdown(void)
{
  ?SNDL_Shutdown@@YAXXZ();
}

/*
==============
SND_ErrorIfSoundGlobalsTrashed
==============
*/

void SND_ErrorIfSoundGlobalsTrashed(void)
{
  ?SND_ErrorIfSoundGlobalsTrashed@@YAXXZ();
}

/*
==============
SND_GetVoiceIndexForId
==============
*/

int __fastcall SND_GetVoiceIndexForId(unsigned int id)
{
  return ?SND_GetVoiceIndexForId@@YAHI@Z(id);
}

/*
==============
SND_ShouldInit
==============
*/

bool __fastcall SND_ShouldInit()
{
  return ?SND_ShouldInit@@YA_NXZ();
}

/*
==============
SND_AnyActiveListeners
==============
*/

bool __fastcall SND_AnyActiveListeners()
{
  return ?SND_AnyActiveListeners@@YA_NXZ();
}

/*
==============
SND_GetVolModDefaultValue
==============
*/

double __fastcall SND_GetVolModDefaultValue(unsigned int volmodIndex)
{
  double result; 

  *(float *)&result = ?SND_GetVolModDefaultValue@@YAMI@Z(volmodIndex);
  return result;
}

/*
==============
SND_ResetPauseDefaults
==============
*/

void SND_ResetPauseDefaults(void)
{
  ?SND_ResetPauseDefaults@@YAXXZ();
}

/*
==============
SND_StopSoundChannelOnEnt
==============
*/

void __fastcall SND_StopSoundChannelOnEnt(unsigned __int64 sndEnt, unsigned int channelNum)
{
  ?SND_StopSoundChannelOnEnt@@YAX_KI@Z(sndEnt, channelNum);
}

/*
==============
SND_EntChannelHasCenterSpeakerPanning
==============
*/

bool __fastcall SND_EntChannelHasCenterSpeakerPanning(unsigned int entchannel)
{
  return ?SND_EntChannelHasCenterSpeakerPanning@@YA_NI@Z(entchannel);
}

/*
==============
SND_EntChannelHas71SpeakerPanning
==============
*/

bool __fastcall SND_EntChannelHas71SpeakerPanning(unsigned int entchannel)
{
  return ?SND_EntChannelHas71SpeakerPanning@@YA_NI@Z(entchannel);
}

/*
==============
SND_IsScriptNotifySoundPlaying
==============
*/

bool __fastcall SND_IsScriptNotifySoundPlaying(int entNum, unsigned __int16 index)
{
  return ?SND_IsScriptNotifySoundPlaying@@YA_NHG@Z(entNum, index);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/

int __fastcall SND_PlayVirtualLoopSound(const char *aliasName, const unsigned __int64 sndEnt, const vec3_t *org, float volume, float pitch)
{
  return ?SND_PlayVirtualLoopSound@@YAHPEBD_KAEBTvec3_t@@MM@Z(aliasName, sndEnt, org, volume, pitch);
}

/*
==============
SND_EntChannelFarReverbBehavior
==============
*/

SndFarReverbBehavior __fastcall SND_EntChannelFarReverbBehavior(unsigned int entchannel)
{
  return ?SND_EntChannelFarReverbBehavior@@YA?AW4SndFarReverbBehavior@@I@Z(entchannel);
}

/*
==============
SND_GetWetLevel
==============
*/

double __fastcall SND_GetWetLevel(const SndAlias *pAlias, ReverbDescriptor index)
{
  double result; 

  *(float *)&result = ?SND_GetWetLevel@@YAMPEBUSndAlias@@W4ReverbDescriptor@@@Z(pAlias, index);
  return result;
}

/*
==============
SND_GetFractionStartMsec
==============
*/

int __fastcall SND_GetFractionStartMsec(const SndStartAliasInfo *startAliasInfo)
{
  return ?SND_GetFractionStartMsec@@YAHPEBUSndStartAliasInfo@@@Z(startAliasInfo);
}

/*
==============
SND_PlaySurfaceSound
==============
*/

unsigned int __fastcall SND_PlaySurfaceSound(const char *aliasName, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  return ?SND_PlaySurfaceSound@@YAIPEBDH_KMMHAEBTvec3_t@@@Z(aliasName, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org);
}

/*
==============
SND_GetVoiceFractionPlayed
==============
*/

double __fastcall SND_GetVoiceFractionPlayed(int index, bool wrap)
{
  double result; 

  *(float *)&result = ?SND_GetVoiceFractionPlayed@@YAMH_N@Z(index, wrap);
  return result;
}

/*
==============
SND_CalcAttenuation
==============
*/

double __fastcall SND_CalcAttenuation(const float baseVolume, const float volumeScale, const SndAlias *p_alias, const unsigned __int64 sndEnt, const snd_alias_system_t system)
{
  double result; 

  *(float *)&result = ?SND_CalcAttenuation@@YAMMMPEBUSndAlias@@_KW4snd_alias_system_t@@@Z(baseVolume, volumeScale, p_alias, sndEnt, system);
  return result;
}

/*
==============
SND_SetAmbientEvents
==============
*/

void __fastcall SND_SetAmbientEvents(const LocalClientNum_t localClientNum, const SoundTable *soundTable, const AmbientDef *ambientDef, float strength)
{
  ?SND_SetAmbientEvents@@YAXW4LocalClientNum_t@@PEBUSoundTable@@PEBUAmbientDef@@M@Z(localClientNum, soundTable, ambientDef, strength);
}

/*
==============
SND_IsChannelQuadAmbientChannel
==============
*/

bool __fastcall SND_IsChannelQuadAmbientChannel(unsigned int entChannel)
{
  return ?SND_IsChannelQuadAmbientChannel@@YA_NI@Z(entChannel);
}

/*
==============
SND_FadeLocalSoundAliasById
==============
*/

bool __fastcall SND_FadeLocalSoundAliasById(LocalClientNum_t localClientNum, unsigned int id, float fadeValue, int msec, snd_alias_system_t system)
{
  return ?SND_FadeLocalSoundAliasById@@YA_NW4LocalClientNum_t@@IMHW4snd_alias_system_t@@@Z(localClientNum, id, fadeValue, msec, system);
}

/*
==============
SND_ScaleVolumeOnEnt
==============
*/

void __fastcall SND_ScaleVolumeOnEnt(unsigned __int64 sndEnt, float volume, int msec)
{
  ?SND_ScaleVolumeOnEnt@@YAX_KMH@Z(sndEnt, volume, msec);
}

/*
==============
SND_ApplyEq
==============
*/

void __fastcall SND_ApplyEq(int voiceIndex, int entchannel, int frametime, float lpfCutoff, float hpfCutoff, float occlusionAmount)
{
  ?SND_ApplyEq@@YAXHHHMMM@Z(voiceIndex, entchannel, frametime, lpfCutoff, hpfCutoff, occlusionAmount);
}

/*
==============
SND_InitVirtualLoopingSounds
==============
*/

void SND_InitVirtualLoopingSounds(void)
{
  ?SND_InitVirtualLoopingSounds@@YAXXZ();
}

/*
==============
CG_SND_BankDetailStream_SetScriptedSoundbanks
==============
*/

void __fastcall CG_SND_BankDetailStream_SetScriptedSoundbanks(const unsigned __int64 scriptedSoundbanksStateBitfield)
{
  ?CG_SND_BankDetailStream_SetScriptedSoundbanks@@YAX_K@Z(scriptedSoundbanksStateBitfield);
}

/*
==============
SND_SetEqLerp
==============
*/

void __fastcall SND_SetEqLerp(float lerp)
{
  ?SND_SetEqLerp@@YAXM@Z(lerp);
}

/*
==============
SND_StopSoundAliasAndSecondariesByAliasId
==============
*/

bool __fastcall SND_StopSoundAliasAndSecondariesByAliasId(unsigned int aliasId, LocalClientNum_t localClientNum, int entnum)
{
  return ?SND_StopSoundAliasAndSecondariesByAliasId@@YA_NIW4LocalClientNum_t@@H@Z(aliasId, localClientNum, entnum);
}

/*
==============
SND_GetVolModIndexFromName
==============
*/

unsigned int __fastcall SND_GetVolModIndexFromName(const char *name)
{
  return ?SND_GetVolModIndexFromName@@YAIPEBD@Z(name);
}

/*
==============
SND_DisableFullOcclusionForEntChannel
==============
*/

void __fastcall SND_DisableFullOcclusionForEntChannel(int entChannelIdx)
{
  ?SND_DisableFullOcclusionForEntChannel@@YAXH@Z(entChannelIdx);
}

/*
==============
SND_SetMainReverbBlended
==============
*/

void __fastcall SND_SetMainReverbBlended(const ReverbDef *fromDef, const ReverbDef *toDef, float lerp)
{
  ?SND_SetMainReverbBlended@@YAXPEBUReverbDef@@0M@Z(fromDef, toDef, lerp);
}

/*
==============
SND_DeactivateEqForChannel
==============
*/

void __fastcall SND_DeactivateEqForChannel(int entchannel, int eqIndex, int band)
{
  ?SND_DeactivateEqForChannel@@YAXHHH@Z(entchannel, eqIndex, band);
}

/*
==============
SND_AnyEqEnabled
==============
*/

bool __fastcall SND_AnyEqEnabled(int entchannel)
{
  return ?SND_AnyEqEnabled@@YA_NH@Z(entchannel);
}

/*
==============
SND_PlaySurfaceSoundAsync
==============
*/

void __fastcall SND_PlaySurfaceSoundAsync(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  ?SND_PlaySurfaceSoundAsync@@YAXPEBUSndAliasList@@H_KMMHAEBTvec3_t@@@Z(aliasList, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org);
}

/*
==============
SND_SetOcclusionFilterSingleIndex
==============
*/

void __fastcall SND_SetOcclusionFilterSingleIndex(int entchannel, int eqIndex, OccludeDef *occludeDef)
{
  ?SND_SetOcclusionFilterSingleIndex@@YAXHHPEAUOccludeDef@@@Z(entchannel, eqIndex, occludeDef);
}

/*
==============
SND_PlayContextSound
==============
*/

unsigned int __fastcall SND_PlayContextSound(const SndAliasList *aliasList, const int surfaceType, const int contextIndex, const int contextIndex2, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org)
{
  return ?SND_PlayContextSound@@YAIPEBUSndAliasList@@HHHW4LocalClientNum_t@@HMMAEBTvec3_t@@@Z(aliasList, surfaceType, contextIndex, contextIndex2, localClientNum, entnum, volumeScale, pitch, org);
}

/*
==============
CG_GeneratePredictedEntSndEntHandle
==============
*/

unsigned __int64 __fastcall CG_GeneratePredictedEntSndEntHandle(const LocalClientNum_t localClientNum, const int predictedEntIdx)
{
  return ?CG_GeneratePredictedEntSndEntHandle@@YA_KW4LocalClientNum_t@@H@Z(localClientNum, predictedEntIdx);
}

/*
==============
SND_SetTimeScaleLerp
==============
*/

void __fastcall SND_SetTimeScaleLerp(const int entchannel, const float lerp)
{
  ?SND_SetTimeScaleLerp@@YAXHM@Z(entchannel, lerp);
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/

unsigned int __fastcall SND_PlayScaledSoundAlias(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  return ?SND_PlayScaledSoundAlias@@YAIPEBUSndAliasList@@W4LocalClientNum_t@@HMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasList, localClientNum, entnum, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_HasFreeVoice
==============
*/

bool __fastcall SND_HasFreeVoice(unsigned int entchannel)
{
  return ?SND_HasFreeVoice@@YA_NI@Z(entchannel);
}

/*
==============
SND_SetMusicState
==============
*/

void __fastcall SND_SetMusicState(unsigned int stateId)
{
  ?SND_SetMusicState@@YAXI@Z(stateId);
}

/*
==============
SND_DebugAliasPrint
==============
*/

void __fastcall SND_DebugAliasPrint(bool condition, const SndAlias *alias, const char *msg)
{
  ?SND_DebugAliasPrint@@YAX_NPEBUSndAlias@@PEBD@Z(condition, alias, msg);
}

/*
==============
SND_SetEntContext
==============
*/

void __fastcall SND_SetEntContext(unsigned __int64 handle, unsigned int type, unsigned int value, float fadeTime)
{
  ?SND_SetEntContext@@YAX_KIIM@Z(handle, type, value, fadeTime);
}

/*
==============
SND_StartAliasOnVoiceIndex
==============
*/

unsigned int __fastcall SND_StartAliasOnVoiceIndex(SndStartAliasInfo *startAliasInfo, int index)
{
  return ?SND_StartAliasOnVoiceIndex@@YAIPEAUSndStartAliasInfo@@H@Z(startAliasInfo, index);
}

/*
==============
SND_GetDefaultHash
==============
*/

unsigned int __fastcall SND_GetDefaultHash()
{
  return ?SND_GetDefaultHash@@YAIXZ();
}

/*
==============
SND_DumpTimeScale_f
==============
*/

void __fastcall SND_DumpTimeScale_f()
{
  ?SND_DumpTimeScale_f@@YAXXZ();
}

/*
==============
SND_DeInitMemory
==============
*/

void SND_DeInitMemory(void)
{
  ?SND_DeInitMemory@@YAXXZ();
}

/*
==============
SND_FindFreeVoice
==============
*/

int __fastcall SND_FindFreeVoice(const SndStartAliasInfo *startAliasInfo, int entchannel, int startVoiceIndex, int voiceCount, SndAliasGroupTracking *inOutTracking)
{
  return ?SND_FindFreeVoice@@YAHPEBUSndStartAliasInfo@@HHHAEAUSndAliasGroupTracking@@@Z(startAliasInfo, entchannel, startVoiceIndex, voiceCount, inOutTracking);
}

/*
==============
SND_BankDetailStream_Debug
==============
*/

void __fastcall SND_BankDetailStream_Debug(LocalClientNum_t localClientNum)
{
  ?SND_BankDetailStream_Debug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_GetPlaybackChannels
==============
*/

unsigned int __fastcall SND_GetPlaybackChannels()
{
  return ?SND_GetPlaybackChannels@@YAIXZ();
}

/*
==============
SND_SetLevelFadeIn
==============
*/

void __fastcall SND_SetLevelFadeIn(float volume, int fadetime)
{
  ?SND_SetLevelFadeIn@@YAXMH@Z(volume, fadetime);
}

/*
==============
SND_StopSoundAliasById
==============
*/

bool __fastcall SND_StopSoundAliasById(unsigned int id)
{
  return ?SND_StopSoundAliasById@@YA_NI@Z(id);
}

/*
==============
SND_Restore
==============
*/

void __fastcall SND_Restore(MemoryFile *memFile)
{
  ?SND_Restore@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_IsListenerActive
==============
*/

bool __fastcall SND_IsListenerActive(const LocalClientNum_t localClientNum)
{
  return ?SND_IsListenerActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_SaveEq
==============
*/

void __fastcall SND_SaveEq(MemoryFile *memFile)
{
  ?SND_SaveEq@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_InitParameter
==============
*/

void __fastcall SND_InitParameter(snd_param_info_t *paramInfo, float initValue)
{
  ?SND_InitParameter@@YAXPEAUsnd_param_info_t@@M@Z(paramInfo, initValue);
}

/*
==============
SND_IsVoiceFree
==============
*/

bool __fastcall SND_IsVoiceFree(int index)
{
  return ?SND_IsVoiceFree@@YA_NH@Z(index);
}

/*
==============
SND_GetAliasOffset
==============
*/

int __fastcall SND_GetAliasOffset(const SndAlias *alias)
{
  return ?SND_GetAliasOffset@@YAHPEBUSndAlias@@@Z(alias);
}

/*
==============
SND_DeactivateChannelVolumes
==============
*/

void __fastcall SND_DeactivateChannelVolumes(int priority, int fademsec)
{
  ?SND_DeactivateChannelVolumes@@YAXHH@Z(priority, fademsec);
}

/*
==============
SND_StopMusicState
==============
*/

void __fastcall SND_StopMusicState(const char *stateName)
{
  ?SND_StopMusicState@@YAXPEBD@Z(stateName);
}

/*
==============
SND_PlaySoundAlias
==============
*/

unsigned int __fastcall SND_PlaySoundAlias(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  return ?SND_PlaySoundAlias@@YAIPEBUSndAliasList@@W4LocalClientNum_t@@HAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasList, localClientNum, entNum, org, timeshift, system);
}

/*
==============
CG_GenerateScriptableSndEntHandle
==============
*/

unsigned __int64 __fastcall CG_GenerateScriptableSndEntHandle(const LocalClientNum_t localClientNum, const unsigned __int64 scriptableIndex)
{
  return ?CG_GenerateScriptableSndEntHandle@@YA_KW4LocalClientNum_t@@_K@Z(localClientNum, scriptableIndex);
}

/*
==============
SND_GetFarDryLevel
==============
*/

double __fastcall SND_GetFarDryLevel(const SndVoice *voice)
{
  double result; 

  *(float *)&result = ?SND_GetFarDryLevel@@YAMPEBUSndVoice@@@Z(voice);
  return result;
}

/*
==============
SND_GetEntChannelSendFlag
==============
*/

SndSendType __fastcall SND_GetEntChannelSendFlag(unsigned int entchannel)
{
  return ?SND_GetEntChannelSendFlag@@YA?AW4SndSendType@@I@Z(entchannel);
}

/*
==============
SND_AddWhizbyToBulletEvent
==============
*/

void __fastcall SND_AddWhizbyToBulletEvent(const int bulletEventId, const LocalClientNum_t localClientNum, const WeaponSFXPackage *sfxPackage, const vec3_t *inSndCenterPt, const vec3_t *inBulletDir, float radius, float shooterDist)
{
  ?SND_AddWhizbyToBulletEvent@@YAXHW4LocalClientNum_t@@PEBUWeaponSFXPackage@@AEBTvec3_t@@2MM@Z(bulletEventId, localClientNum, sfxPackage, inSndCenterPt, inBulletDir, radius, shooterDist);
}

/*
==============
SND_DriverPreUpdate
==============
*/

void __fastcall SND_DriverPreUpdate(int frametime)
{
  ?SND_DriverPreUpdate@@YAXH@Z(frametime);
}

/*
==============
SND_ReleasePhysicsQueryBlock
==============
*/

void SND_ReleasePhysicsQueryBlock(void)
{
  ?SND_ReleasePhysicsQueryBlock@@YAXXZ();
}

/*
==============
SND_AcquirePlaybackId
==============
*/

unsigned int __fastcall SND_AcquirePlaybackId(int index, int totalMsec)
{
  return ?SND_AcquirePlaybackId@@YAIHH@Z(index, totalMsec);
}

/*
==============
SND_SetFullResourcesMode
==============
*/

void SND_SetFullResourcesMode(void)
{
  ?SND_SetFullResourcesMode@@YAXXZ();
}

/*
==============
SND_InitDriver
==============
*/

bool __fastcall SND_InitDriver()
{
  return ?SND_InitDriver@@YA_NXZ();
}

/*
==============
SND_GetEntChannelSpeedOfSoundMultiplier
==============
*/

double __fastcall SND_GetEntChannelSpeedOfSoundMultiplier(unsigned int entchannel)
{
  double result; 

  *(float *)&result = ?SND_GetEntChannelSpeedOfSoundMultiplier@@YAMI@Z(entchannel);
  return result;
}

/*
==============
SND_PickSoundAliasFromList
==============
*/

void __fastcall SND_PickSoundAliasFromList(const SndAliasList *aliasList, const SndPlayParams *inParams, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp)
{
  ?SND_PickSoundAliasFromList@@YAXPEBUSndAliasList@@AEBUSndPlayParams@@PEAPEBUSndAlias@@2PEAM@Z(aliasList, inParams, outAliasA, outAliasB, outLerp);
}

/*
==============
SND_AnyEqEnabledOnVoice
==============
*/

bool __fastcall SND_AnyEqEnabledOnVoice(int voiceIndex)
{
  return ?SND_AnyEqEnabledOnVoice@@YA_NH@Z(voiceIndex);
}

/*
==============
SND_FindEntState
==============
*/

SndEntState *__fastcall SND_FindEntState(unsigned __int64 handle, bool createNew)
{
  return ?SND_FindEntState@@YAPEAUSndEntState@@_K_N@Z(handle, createNew);
}

/*
==============
SND_ShutdownDriver
==============
*/

void SND_ShutdownDriver(void)
{
  ?SND_ShutdownDriver@@YAXXZ();
}

/*
==============
SND_PlayLocalSoundAliasAsync
==============
*/

void __fastcall SND_PlayLocalSoundAliasAsync(LocalClientNum_t localClientNum, const char *aliasname, snd_alias_system_t system)
{
  ?SND_PlayLocalSoundAliasAsync@@YAXW4LocalClientNum_t@@PEBDW4snd_alias_system_t@@@Z(localClientNum, aliasname, system);
}

/*
==============
SND_PlayLocalSoundAlias
==============
*/

unsigned int __fastcall SND_PlayLocalSoundAlias(LocalClientNum_t localClientNum, const SndAliasList *aliasList, snd_alias_system_t system)
{
  return ?SND_PlayLocalSoundAlias@@YAIW4LocalClientNum_t@@PEBUSndAliasList@@W4snd_alias_system_t@@@Z(localClientNum, aliasList, system);
}

/*
==============
SND_EnablePASpeaker
==============
*/

void __fastcall SND_EnablePASpeaker(unsigned int nameHash, bool enable)
{
  ?SND_EnablePASpeaker@@YAXI_N@Z(nameHash, enable);
}

/*
==============
SND_GetVolModByIndex
==============
*/

const snd_volmod_info_t *__fastcall SND_GetVolModByIndex(unsigned int volmodIndex)
{
  return ?SND_GetVolModByIndex@@YAPEBUsnd_volmod_info_t@@I@Z(volmodIndex);
}

/*
==============
SND_GetAliasWithOffset
==============
*/

SndAlias *__fastcall SND_GetAliasWithOffset(const char *name, int offset)
{
  return ?SND_GetAliasWithOffset@@YAPEAUSndAlias@@PEBDH@Z(name, offset);
}

/*
==============
SND_PerformOcclusionTrace
==============
*/

double __fastcall SND_PerformOcclusionTrace(const vec3_t *listener, const vec3_t *emitter, const LocalClientNum_t localClientNum, const unsigned __int64 sndEnt, unsigned int id)
{
  double result; 

  *(float *)&result = ?SND_PerformOcclusionTrace@@YAMAEBTvec3_t@@0W4LocalClientNum_t@@_KI@Z(listener, emitter, localClientNum, sndEnt, id);
  return result;
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/

int __fastcall SND_PlayVirtualLoopSound(const SndAliasList *aliasList, const unsigned __int64 sndEnt, const vec3_t *org, const float volume, const float pitch)
{
  return ?SND_PlayVirtualLoopSound@@YAHPEBUSndAliasList@@_KAEBTvec3_t@@MM@Z(aliasList, sndEnt, org, volume, pitch);
}

/*
==============
SND_PlaySoundAliasCore
==============
*/

unsigned int __fastcall SND_PlaySoundAliasCore(const SndAlias *alias, float contextLerp, const SndPlayParams *inParams, SndAliasGroupTracking *inOutTracking)
{
  return ?SND_PlaySoundAliasCore@@YAIPEBUSndAlias@@MAEBUSndPlayParams@@AEAUSndAliasGroupTracking@@@Z(alias, contextLerp, inParams, inOutTracking);
}

/*
==============
EntityDebugDrawOffset::GetOffset
==============
*/

int __fastcall EntityDebugDrawOffset::GetOffset(EntityDebugDrawOffset *this, unsigned __int64 entIndex)
{
  return ?GetOffset@EntityDebugDrawOffset@@QEBAH_K@Z(this, entIndex);
}

/*
==============
SND_UpdateParameter
==============
*/

void __fastcall SND_UpdateParameter(snd_param_info_t *paramInfo, int dt_msec, bool nonLinear)
{
  ?SND_UpdateParameter@@YAXPEAUsnd_param_info_t@@H_N@Z(paramInfo, dt_msec, nonLinear);
}

/*
==============
SND_UnpauseVoiceThatWasStartedPaused
==============
*/

void __fastcall SND_UnpauseVoiceThatWasStartedPaused(int index)
{
  ?SND_UnpauseVoiceThatWasStartedPaused@@YAXH@Z(index);
}

/*
==============
SND_PlayAmbientAlias
==============
*/

void __fastcall SND_PlayAmbientAlias(LocalClientNum_t localClientNum, const char *aliasName, float volumeScale, int fadeTime, bool isExclusive, snd_alias_system_t system)
{
  ?SND_PlayAmbientAlias@@YAXW4LocalClientNum_t@@PEBDMH_NW4snd_alias_system_t@@@Z(localClientNum, aliasName, volumeScale, fadeTime, isExclusive, system);
}

/*
==============
SND_StopVoiceById
==============
*/

void __fastcall SND_StopVoiceById(unsigned int id)
{
  ?SND_StopVoiceById@@YAXI@Z(id);
}

/*
==============
SND_Init
==============
*/

void SND_Init(void)
{
  ?SND_Init@@YAXXZ();
}

/*
==============
SND_DevUpdateReverbParams
==============
*/

void __fastcall SND_DevUpdateReverbParams(const unsigned int id)
{
  ?SND_DevUpdateReverbParams@@YAXI@Z(id);
}

/*
==============
SND_PlayBlendedSoundAliasAsync
==============
*/

void __fastcall SND_PlayBlendedSoundAliasAsync(const SndAliasList *aliasList0, const SndAliasList *aliasList1, const float lerp, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  ?SND_PlayBlendedSoundAliasAsync@@YAXPEBUSndAliasList@@0MW4LocalClientNum_t@@HMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasList0, aliasList1, lerp, localClientNum, entnum, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_SetReverbParams
==============
*/

void __fastcall SND_SetReverbParams(const unsigned int id, ReverbDescriptor index, bool fadeOut)
{
  ?SND_SetReverbParams@@YAXIW4ReverbDescriptor@@_N@Z(id, index, fadeOut);
}

/*
==============
SND_AddSoundDoneNotify
==============
*/

void __fastcall SND_AddSoundDoneNotify(unsigned int playbackId, int entNum, unsigned __int16 soundString)
{
  ?SND_AddSoundDoneNotify@@YAXIHG@Z(playbackId, entNum, soundString);
}

/*
==============
SND_ClearAllOcclusionSettings
==============
*/

void SND_ClearAllOcclusionSettings(void)
{
  ?SND_ClearAllOcclusionSettings@@YAXXZ();
}

/*
==============
SND_AddVoice
==============
*/

void __fastcall SND_AddVoice(unsigned int entchannel)
{
  ?SND_AddVoice@@YAXI@Z(entchannel);
}

/*
==============
SND_GetEntChannelSubmixBus
==============
*/

SndBus __fastcall SND_GetEntChannelSubmixBus(unsigned int entchannel)
{
  return ?SND_GetEntChannelSubmixBus@@YA?AW4SndBus@@I@Z(entchannel);
}

/*
==============
SND_DoTracesWithDebug
==============
*/

void __fastcall SND_DoTracesWithDebug(SndVoice *voice)
{
  ?SND_DoTracesWithDebug@@YAXPEAUSndVoice@@@Z(voice);
}

/*
==============
SND_IsVoice3D
==============
*/

bool __fastcall SND_IsVoice3D(unsigned int voiceIndex)
{
  return ?SND_IsVoice3D@@YA_NI@Z(voiceIndex);
}

/*
==============
SND_StopVoiceWithoutLock
==============
*/

void __fastcall SND_StopVoiceWithoutLock(int index)
{
  ?SND_StopVoiceWithoutLock@@YAXH@Z(index);
}

/*
==============
Com_GetSpeakerLevels
==============
*/

const float *__fastcall Com_GetSpeakerLevels(const SpeakerMap *speakerMap, int sourceChannelCount, int *outSpeakermapChannelCount)
{
  return ?Com_GetSpeakerLevels@@YAPEBMPEBUSpeakerMap@@HAEAH@Z(speakerMap, sourceChannelCount, outSpeakermapChannelCount);
}

/*
==============
SND_GetEntChannelFromName
==============
*/

unsigned int __fastcall SND_GetEntChannelFromName(const char *channelName)
{
  return ?SND_GetEntChannelFromName@@YAIPEBD@Z(channelName);
}

/*
==============
SND_GetStreamIoActive
==============
*/

int __fastcall SND_GetStreamIoActive()
{
  return ?SND_GetStreamIoActive@@YA?CJXZ();
}

/*
==============
SND_GetCurrentReverb
==============
*/

unsigned int __fastcall SND_GetCurrentReverb()
{
  return ?SND_GetCurrentReverb@@YAIXZ();
}

/*
==============
SND_IsEntChannelPASpeaker
==============
*/

bool __fastcall SND_IsEntChannelPASpeaker(unsigned int entchannel)
{
  return ?SND_IsEntChannelPASpeaker@@YA_NI@Z(entchannel);
}

/*
==============
SND_GetVolume
==============
*/

double __fastcall SND_GetVolume()
{
  double result; 

  *(float *)&result = ?SND_GetVolume@@YAMXZ();
  return result;
}

/*
==============
SND_PickSoundAliasFromList
==============
*/

void __fastcall SND_PickSoundAliasFromList(const SndAliasList *aliasList, const SndPlayParams *inParams, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp, const unsigned int specType1, const unsigned int specValue1, const unsigned int specType2, const unsigned int specValue2)
{
  ?SND_PickSoundAliasFromList@@YAXPEBUSndAliasList@@AEBUSndPlayParams@@PEAPEBUSndAlias@@2PEAMIIII@Z(aliasList, inParams, outAliasA, outAliasB, outLerp, specType1, specValue1, specType2, specValue2);
}

/*
==============
SND_DistSqToNearestListener
==============
*/

double __fastcall SND_DistSqToNearestListener(const vec3_t *origin)
{
  double result; 

  *(float *)&result = ?SND_DistSqToNearestListener@@YAMAEBTvec3_t@@@Z(origin);
  return result;
}

/*
==============
SND_DeactivateEq
==============
*/

void __fastcall SND_DeactivateEq(const char *channelName, int eqIndex, int band)
{
  ?SND_DeactivateEq@@YAXPEBDHH@Z(channelName, eqIndex, band);
}

/*
==============
SND_DisableOcclusion
==============
*/

void __fastcall SND_DisableOcclusion(int entchannel, int eqIndex)
{
  ?SND_DisableOcclusion@@YAXHH@Z(entchannel, eqIndex);
}

/*
==============
SND_SetPlaybackIdNotPlayed
==============
*/

unsigned int __fastcall SND_SetPlaybackIdNotPlayed(int index)
{
  return ?SND_SetPlaybackIdNotPlayed@@YAIH@Z(index);
}

/*
==============
SND_CalcAndAlignDesiredSampleIndex
==============
*/

int __fastcall SND_CalcAndAlignDesiredSampleIndex(const int startMsec, const int sampleCount, const int sampleRate)
{
  return ?SND_CalcAndAlignDesiredSampleIndex@@YAHHHH@Z(startMsec, sampleCount, sampleRate);
}

/*
==============
SND_StopMusicState
==============
*/

void __fastcall SND_StopMusicState(const unsigned int *stateIdArray, unsigned int arrayCount)
{
  ?SND_StopMusicState@@YAXPEBII@Z(stateIdArray, arrayCount);
}

/*
==============
SND_RestoreVoiceIndex
==============
*/

int __fastcall SND_RestoreVoiceIndex(MemoryFile *memFile)
{
  return ?SND_RestoreVoiceIndex@@YAHPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_SetContext
==============
*/

void __fastcall SND_SetContext(unsigned int type, unsigned int value, float fadeTime)
{
  ?SND_SetContext@@YAXIIM@Z(type, value, fadeTime);
}

/*
==============
SND_GetEntChannelName
==============
*/

const char *__fastcall SND_GetEntChannelName(unsigned int entchannel)
{
  return ?SND_GetEntChannelName@@YAPEBDI@Z(entchannel);
}

/*
==============
SND_AttenuateHPF
==============
*/

double __fastcall SND_AttenuateHPF(float currentValue, float attenuation)
{
  double result; 

  *(float *)&result = ?SND_AttenuateHPF@@YAMMM@Z(currentValue, attenuation);
  return result;
}

/*
==============
SND_FinalizeAliasGroupTracking
==============
*/

void __fastcall SND_FinalizeAliasGroupTracking(SndAliasGroupTracking *inOutTracking)
{
  ?SND_FinalizeAliasGroupTracking@@YAXAEAUSndAliasGroupTracking@@@Z(inOutTracking);
}

/*
==============
SND_SetChannelVolumes
==============
*/

void __fastcall SND_SetChannelVolumes(int priority, const float *channelvolume, int fademsec)
{
  ?SND_SetChannelVolumes@@YAXHQEBMH@Z(priority, channelvolume, fademsec);
}

/*
==============
SND_VoiceSetStopSync
==============
*/

void __fastcall SND_VoiceSetStopSync(SndVoice *voice, bool stopSync, int delayBeats, int fadeBeats)
{
  ?SND_VoiceSetStopSync@@YAXPEAUSndVoice@@_NHH@Z(voice, stopSync, delayBeats, fadeBeats);
}

/*
==============
SND_VoiceUpdateWorker
==============
*/

void __fastcall SND_VoiceUpdateWorker(const void *const cmdInfo)
{
  ?SND_VoiceUpdateWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CG_GenerateClothSndEntHandle
==============
*/

unsigned __int64 __fastcall CG_GenerateClothSndEntHandle(const LocalClientNum_t localClientNum, const int clothSoundIndex)
{
  return ?CG_GenerateClothSndEntHandle@@YA_KW4LocalClientNum_t@@H@Z(localClientNum, clothSoundIndex);
}

/*
==============
SND_SetEqFreq
==============
*/

void __fastcall SND_SetEqFreq(int entchannel, int eqIndex, int band, float freq)
{
  ?SND_SetEqFreq@@YAXHHHM@Z(entchannel, eqIndex, band, freq);
}

/*
==============
SND_SetEqEntChannel
==============
*/

void __fastcall SND_SetEqEntChannel(int entChannel, int eqIndex, int band, SND_EQTYPE type, float gain, float freq, float q)
{
  ?SND_SetEqEntChannel@@YAXHHHW4SND_EQTYPE@@MMM@Z(entChannel, eqIndex, band, type, gain, freq, q);
}

/*
==============
SND_GetSndCurveValue
==============
*/

double __fastcall SND_GetSndCurveValue(const int knotCount, const vec2_t *knots, const float fraction)
{
  double result; 

  *(float *)&result = ?SND_GetSndCurveValue@@YAMHPEBTvec2_t@@M@Z(knotCount, knots, fraction);
  return result;
}

/*
==============
SND_IsPausable
==============
*/

bool __fastcall SND_IsPausable(unsigned int entchannel)
{
  return ?SND_IsPausable@@YA_NI@Z(entchannel);
}

/*
==============
SND_GetMasterPriorityID
==============
*/

unsigned __int8 __fastcall SND_GetMasterPriorityID(const SndVoice *voice)
{
  return ?SND_GetMasterPriorityID@@YAEPEBUSndVoice@@@Z(voice);
}

/*
==============
SND_IsEntChannelPlayerDialogue
==============
*/

bool __fastcall SND_IsEntChannelPlayerDialogue(unsigned int entchannel)
{
  return ?SND_IsEntChannelPlayerDialogue@@YA_NI@Z(entchannel);
}

/*
==============
SND_SetMainReverb
==============
*/

void __fastcall SND_SetMainReverb(const ReverbDef *reverbDef)
{
  ?SND_SetMainReverb@@YAXPEBUReverbDef@@@Z(reverbDef);
}

/*
==============
SND_SyncAmbientTracks
==============
*/

int __fastcall SND_SyncAmbientTracks(int index)
{
  return ?SND_SyncAmbientTracks@@YAHH@Z(index);
}

/*
==============
FindDominantContextType
==============
*/

bool __fastcall FindDominantContextType(const unsigned int contextType, const ZoneDef *zoneA, const ZoneDef *zoneB, const float zoneLerp, const SndEntState *entState, unsigned int *outContextValueA, unsigned int *outContextValueB, float *outLerp)
{
  return ?FindDominantContextType@@YA_NIPEBUZoneDef@@0MPEBUSndEntState@@PEAI2PEAM@Z(contextType, zoneA, zoneB, zoneLerp, entState, outContextValueA, outContextValueB, outLerp);
}

/*
==============
SND_GetSoundOverlay
==============
*/

int __fastcall SND_GetSoundOverlay(snd_overlay_info_t *info, int maxcount, int *cpu)
{
  return ?SND_GetSoundOverlay@@YAHQEAUsnd_overlay_info_t@@HPEAH@Z(info, maxcount, cpu);
}

/*
==============
SND_SetWorldPosition
==============
*/

bool __fastcall SND_SetWorldPosition(unsigned int id, const vec3_t *origin)
{
  return ?SND_SetWorldPosition@@YA_NIAEBTvec3_t@@@Z(id, origin);
}

/*
==============
SND_GetAliasEntChannelId
==============
*/

unsigned int __fastcall SND_GetAliasEntChannelId(const SndAlias *alias)
{
  return ?SND_GetAliasEntChannelId@@YAIPEBUSndAlias@@@Z(alias);
}

/*
==============
SND_PlaySoundAlias
==============
*/

unsigned int __fastcall SND_PlaySoundAlias(const char *aliasName, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  return ?SND_PlaySoundAlias@@YAIPEBDW4LocalClientNum_t@@HAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasName, localClientNum, entNum, org, timeshift, system);
}

/*
==============
SND_IsEntChannel3D
==============
*/

bool __fastcall SND_IsEntChannel3D(unsigned int entchannel)
{
  return ?SND_IsEntChannel3D@@YA_NI@Z(entchannel);
}

/*
==============
SND_SetEqGain
==============
*/

void __fastcall SND_SetEqGain(int entchannel, int eqIndex, int band, float gain)
{
  ?SND_SetEqGain@@YAXHHHM@Z(entchannel, eqIndex, band, gain);
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/

unsigned int __fastcall SND_PlayScaledSoundAlias(const SndAliasList *aliasList, const unsigned __int64 sndEnt, const float volumeScale, const float pitch, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  return ?SND_PlayScaledSoundAlias@@YAIPEBUSndAliasList@@_KMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasList, sndEnt, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_FrameUpdateVirtualLoopSounds
==============
*/

void SND_FrameUpdateVirtualLoopSounds(void)
{
  ?SND_FrameUpdateVirtualLoopSounds@@YAXXZ();
}

/*
==============
SND_FadeAllSounds
==============
*/

void __fastcall SND_FadeAllSounds(float volume, int fadetime)
{
  ?SND_FadeAllSounds@@YAXMH@Z(volume, fadetime);
}

/*
==============
SND_RecalcChaninfoPriority
==============
*/

void __fastcall SND_RecalcChaninfoPriority(int index)
{
  ?SND_RecalcChaninfoPriority@@YAXH@Z(index);
}

/*
==============
SND_PlayExplosionSoundAsync
==============
*/

void __fastcall SND_PlayExplosionSoundAsync(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, const vec3_t *org, const unsigned int reflectionClass)
{
  ?SND_PlayExplosionSoundAsync@@YAXPEBUSndAliasList@@H_KAEBTvec3_t@@I@Z(aliasList, surfaceType, sndEnt, org, reflectionClass);
}

/*
==============
SND_PlayLocalSoundAliasAsync
==============
*/

void __fastcall SND_PlayLocalSoundAliasAsync(LocalClientNum_t localClientNum, const SndAliasList *aliasList, snd_alias_system_t system)
{
  ?SND_PlayLocalSoundAliasAsync@@YAXW4LocalClientNum_t@@PEBUSndAliasList@@W4snd_alias_system_t@@@Z(localClientNum, aliasList, system);
}

/*
==============
SND_SetChannelVolume
==============
*/

void __fastcall SND_SetChannelVolume(unsigned int channel, float channelvolume, int fademsec)
{
  ?SND_SetChannelVolume@@YAXIMH@Z(channel, channelvolume, fademsec);
}

/*
==============
SND_GetHDMIChannelCount
==============
*/

unsigned int __fastcall SND_GetHDMIChannelCount()
{
  return ?SND_GetHDMIChannelCount@@YAIXZ();
}

/*
==============
SND_PlayBlendedSoundAlias
==============
*/

unsigned int __fastcall SND_PlayBlendedSoundAlias(const SndAliasList *aliasList0, const SndAliasList *aliasList1, const float lerp, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  return ?SND_PlayBlendedSoundAlias@@YAIPEBUSndAliasList@@0MW4LocalClientNum_t@@HMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasList0, aliasList1, lerp, localClientNum, entnum, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_GetSoundEqOverlay
==============
*/

int __fastcall SND_GetSoundEqOverlay(snd_eqoverlay_info_t *info, unsigned int maxcount)
{
  return ?SND_GetSoundEqOverlay@@YAHQEAUsnd_eqoverlay_info_t@@I@Z(info, maxcount);
}

/*
==============
CG_GenerateSndEntHandle
==============
*/

unsigned __int64 __fastcall CG_GenerateSndEntHandle(const LocalClientNum_t localClientNum, const int entIndex)
{
  return ?CG_GenerateSndEntHandle@@YA_KW4LocalClientNum_t@@H@Z(localClientNum, entIndex);
}

/*
==============
SND_StopAmbient
==============
*/

void __fastcall SND_StopAmbient(int fadetime)
{
  ?SND_StopAmbient@@YAXH@Z(fadetime);
}

/*
==============
SND_PlayScaledSoundAliasAsync
==============
*/

void __fastcall SND_PlayScaledSoundAliasAsync(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  ?SND_PlayScaledSoundAliasAsync@@YAXPEBUSndAliasList@@W4LocalClientNum_t@@HMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasList, localClientNum, entnum, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_SetVoiceStartInfo
==============
*/

void __fastcall SND_SetVoiceStartInfo(int index, const SndStartAliasInfo *startInfo)
{
  ?SND_SetVoiceStartInfo@@YAXHPEBUSndStartAliasInfo@@@Z(index, startInfo);
}

/*
==============
SND_DisconnectListener
==============
*/

void __fastcall SND_DisconnectListener(LocalClientNum_t localClientNum)
{
  ?SND_DisconnectListener@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_GetFarWetLevel
==============
*/

double __fastcall SND_GetFarWetLevel(const SndVoice *voice)
{
  double result; 

  *(float *)&result = ?SND_GetFarWetLevel@@YAMPEBUSndVoice@@@Z(voice);
  return result;
}

/*
==============
SND_GetCurrentGlobalContext
==============
*/

bool __fastcall SND_GetCurrentGlobalContext(unsigned int type, unsigned int *outValueA, unsigned int *outValueB, float *outLerp)
{
  return ?SND_GetCurrentGlobalContext@@YA_NIPEAI0PEAM@Z(type, outValueA, outValueB, outLerp);
}

/*
==============
SND_StartBulletEvent
==============
*/

void __fastcall SND_StartBulletEvent(int id)
{
  ?SND_StartBulletEvent@@YAXH@Z(id);
}

/*
==============
SND_GetNewBulletEvent
==============
*/

int __fastcall SND_GetNewBulletEvent()
{
  return ?SND_GetNewBulletEvent@@YAHXZ();
}

/*
==============
SND_PlayWeaponSound
==============
*/

void __fastcall SND_PlayWeaponSound(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, const Weapon *weapon, const bool isAlternate, const bool isPlayer, const int autoSimId, const __int64 autoSimTimeStamp, const float autoSimDistSq, const SndWeapShotCountId shotCount, const bool isProne, const bool isDualWield, const PlayerHandIndex hand, const bool isHyperBurstSound)
{
  ?SND_PlayWeaponSound@@YAXPEBUSndAliasList@@W4LocalClientNum_t@@HAEBTvec3_t@@AEBUWeapon@@_N4H_JMW4SndWeapShotCountId@@44W4PlayerHandIndex@@4@Z(aliasList, localClientNum, entNum, org, weapon, isAlternate, isPlayer, autoSimId, autoSimTimeStamp, autoSimDistSq, shotCount, isProne, isDualWield, hand, isHyperBurstSound);
}

/*
==============
CG_GeneratePhysicsSndEntHandle
==============
*/

unsigned __int64 __fastcall CG_GeneratePhysicsSndEntHandle(const LocalClientNum_t localClientNum, const unsigned __int8 worldId, const bool isRagdoll, const unsigned int bodyId)
{
  return ?CG_GeneratePhysicsSndEntHandle@@YA_KW4LocalClientNum_t@@E_NI@Z(localClientNum, worldId, isRagdoll, bodyId);
}

/*
==============
SND_SetWorldPosition
==============
*/

bool __fastcall SND_SetWorldPosition(unsigned int id, const vec3_t *origin, unsigned __int64 sndEnt)
{
  return ?SND_SetWorldPosition@@YA_NIAEBTvec3_t@@_K@Z(id, origin, sndEnt);
}

/*
==============
SND_StopSounds
==============
*/

void __fastcall SND_StopSounds(snd_stopsounds_arg_t which)
{
  ?SND_StopSounds@@YAXW4snd_stopsounds_arg_t@@@Z(which);
}

/*
==============
SND_AttenuateLPF
==============
*/

double __fastcall SND_AttenuateLPF(float currentValue, float attenuation)
{
  double result; 

  *(float *)&result = ?SND_AttenuateLPF@@YAMMM@Z(currentValue, attenuation);
  return result;
}

/*
==============
SND_RestoreEntityParamInfo
==============
*/

void __fastcall SND_RestoreEntityParamInfo(MemoryFile *memFile)
{
  ?SND_RestoreEntityParamInfo@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_StopSoundAliasOnEnt
==============
*/

void __fastcall SND_StopSoundAliasOnEnt(unsigned __int64 sndEnt, const char *aliasName)
{
  ?SND_StopSoundAliasOnEnt@@YAX_KPEBD@Z(sndEnt, aliasName);
}

/*
==============
SND_UpdateVirtualLoopSound
==============
*/

bool __fastcall SND_UpdateVirtualLoopSound(int handle, const vec3_t *org, float volume, float pitch)
{
  return ?SND_UpdateVirtualLoopSound@@YA_NHAEBTvec3_t@@MM@Z(handle, org, volume, pitch);
}

/*
==============
SND_Update
==============
*/

void SND_Update(void)
{
  ?SND_Update@@YAXXZ();
}

/*
==============
SND_SetUIPause
==============
*/

void __fastcall SND_SetUIPause(bool paused)
{
  ?SND_SetUIPause@@YAX_N@Z(paused);
}

/*
==============
SND_PlayLocalSoundAlias
==============
*/

unsigned int __fastcall SND_PlayLocalSoundAlias(LocalClientNum_t localClientNum, const char *aliasname, snd_alias_system_t system)
{
  return ?SND_PlayLocalSoundAlias@@YAIW4LocalClientNum_t@@PEBDW4snd_alias_system_t@@@Z(localClientNum, aliasname, system);
}

/*
==============
Com_GetSoundAliasSeed
==============
*/

int __fastcall Com_GetSoundAliasSeed()
{
  return ?Com_GetSoundAliasSeed@@YAHXZ();
}

/*
==============
CG_GenerateParticleSndEntHandle
==============
*/

unsigned __int64 __fastcall CG_GenerateParticleSndEntHandle(const LocalClientNum_t localClientNum, const int particleSoundIndex)
{
  return ?CG_GenerateParticleSndEntHandle@@YA_KW4LocalClientNum_t@@H@Z(localClientNum, particleSoundIndex);
}

/*
==============
EntityDebugDrawOffset::SetOffset
==============
*/

void __fastcall EntityDebugDrawOffset::SetOffset(EntityDebugDrawOffset *this, unsigned __int64 entIndex, int offset)
{
  ?SetOffset@EntityDebugDrawOffset@@QEAAX_KH@Z(this, entIndex, offset);
}

/*
==============
SND_SaveEntityParamInfo
==============
*/

void __fastcall SND_SaveEntityParamInfo(MemoryFile *memFile)
{
  ?SND_SaveEntityParamInfo@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_StopVirtualLoopSound
==============
*/

void __fastcall SND_StopVirtualLoopSound(int handle)
{
  ?SND_StopVirtualLoopSound@@YAXH@Z(handle);
}

/*
==============
SND_IsPlaybackIdPlaying
==============
*/

bool __fastcall SND_IsPlaybackIdPlaying(unsigned int id)
{
  return ?SND_IsPlaybackIdPlaying@@YA_NI@Z(id);
}

/*
==============
SND_GetMasterPriorityVal
==============
*/

double __fastcall SND_GetMasterPriorityVal(SndVoice *voice)
{
  double result; 

  *(float *)&result = ?SND_GetMasterPriorityVal@@YAMPEAUSndVoice@@@Z(voice);
  return result;
}

/*
==============
SND_GetListener
==============
*/

void __fastcall SND_GetListener(const LocalClientNum_t localClientNum, snd_listener *outListener)
{
  ?SND_GetListener@@YAXW4LocalClientNum_t@@AEAUsnd_listener@@@Z(localClientNum, outListener);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/

int __fastcall SND_PlayVirtualLoopSound(const char *aliasName, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, float volume, float pitch)
{
  return ?SND_PlayVirtualLoopSound@@YAHPEBDW4LocalClientNum_t@@HAEBTvec3_t@@MM@Z(aliasName, localClientNum, entNum, org, volume, pitch);
}

/*
==============
SND_AddPlayFXSoundAlias
==============
*/

void __fastcall SND_AddPlayFXSoundAlias(unsigned int aliasId, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *origin)
{
  ?SND_AddPlayFXSoundAlias@@YAXIW4LocalClientNum_t@@HAEBTvec3_t@@@Z(aliasId, localClientNum, entNum, origin);
}

/*
==============
SND_GetPriority
==============
*/

int __fastcall SND_GetPriority(unsigned int entchannel)
{
  return ?SND_GetPriority@@YAHI@Z(entchannel);
}

/*
==============
SND_RemoveClipMap
==============
*/

void __fastcall SND_RemoveClipMap(clipMap_t *__formal)
{
  ?SND_RemoveClipMap@@YAXPEAUclipMap_t@@@Z(__formal);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/

int __fastcall SND_PlayVirtualLoopSound(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, float volume, float pitch)
{
  return ?SND_PlayVirtualLoopSound@@YAHPEBUSndAliasList@@W4LocalClientNum_t@@HAEBTvec3_t@@MM@Z(aliasList, localClientNum, entNum, org, volume, pitch);
}

/*
==============
SND_DeactivateAllFilters
==============
*/

void SND_DeactivateAllFilters(void)
{
  ?SND_DeactivateAllFilters@@YAXXZ();
}

/*
==============
SND_PlayVirtualLoopSoundFollowEntity
==============
*/

int __fastcall SND_PlayVirtualLoopSoundFollowEntity(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, float volume, float pitch)
{
  return ?SND_PlayVirtualLoopSoundFollowEntity@@YAHPEBUSndAliasList@@W4LocalClientNum_t@@HAEBTvec3_t@@MM@Z(aliasList, localClientNum, entNum, org, volume, pitch);
}

/*
==============
SND_InitMemory
==============
*/

void SND_InitMemory(void)
{
  ?SND_InitMemory@@YAXXZ();
}

/*
==============
SND_EndFrame
==============
*/

void SND_EndFrame(void)
{
  ?SND_EndFrame@@YAXXZ();
}

/*
==============
SND_ClearMainReverb
==============
*/

void __fastcall SND_ClearMainReverb(const float fadetime)
{
  ?SND_ClearMainReverb@@YAXM@Z(fadetime);
}

/*
==============
SND_CalcVoicePitch
==============
*/

double __fastcall SND_CalcVoicePitch(const int frametime, SndVoice *voice)
{
  double result; 

  *(float *)&result = ?SND_CalcVoicePitch@@YAMHPEAUSndVoice@@@Z(frametime, voice);
  return result;
}

/*
==============
SND_InitFXSounds
==============
*/

void SND_InitFXSounds(void)
{
  ?SND_InitFXSounds@@YAXXZ();
}

/*
==============
SND_GetNearestListenerOrigin
==============
*/

void __fastcall SND_GetNearestListenerOrigin(const vec3_t *origin, vec3_t *outListenerOrigin)
{
  ?SND_GetNearestListenerOrigin@@YAXAEBTvec3_t@@AEAT1@@Z(origin, outListenerOrigin);
}

/*
==============
SND_ClearReverbs
==============
*/

void SND_ClearReverbs(void)
{
  ?SND_ClearReverbs@@YAXXZ();
}

/*
==============
SND_SaveVoiceIndex
==============
*/

void __fastcall SND_SaveVoiceIndex(MemoryFile *memFile, const SndVoice *voice)
{
  ?SND_SaveVoiceIndex@@YAXPEAUMemoryFile@@PEBUSndVoice@@@Z(memFile, voice);
}

/*
==============
SND_Get3DDistanceAttenuation
==============
*/

double __fastcall SND_Get3DDistanceAttenuation(const vec3_t *soundOrigin, const SndCurve *curve, float distMin, float distMax, float distanceScale)
{
  double result; 

  *(float *)&result = ?SND_Get3DDistanceAttenuation@@YAMAEBTvec3_t@@PEBUSndCurve@@MMM@Z(soundOrigin, curve, distMin, distMax, distanceScale);
  return result;
}

/*
==============
SND_GetEqTypeFromName
==============
*/

SND_EQTYPE __fastcall SND_GetEqTypeFromName(const char *eqTypeName)
{
  return ?SND_GetEqTypeFromName@@YA?AW4SND_EQTYPE@@PEBD@Z(eqTypeName);
}

/*
==============
SND_ResetCanDoPhysicsQuery
==============
*/

void SND_ResetCanDoPhysicsQuery(void)
{
  ?SND_ResetCanDoPhysicsQuery@@YAXXZ();
}

/*
==============
SND_Reset
==============
*/

void __fastcall SND_Reset(bool restart)
{
  ?SND_Reset@@YAX_N@Z(restart);
}

/*
==============
SND_SetTimeLerp
==============
*/

void __fastcall SND_SetTimeLerp(TimeLerp *lerp, float time)
{
  ?SND_SetTimeLerp@@YAXPEAUTimeLerp@@M@Z(lerp, time);
}

/*
==============
SND_SetConstrainedMode
==============
*/

void SND_SetConstrainedMode(void)
{
  ?SND_SetConstrainedMode@@YAXXZ();
}

/*
==============
SND_UpdateVehicle
==============
*/

void __fastcall SND_UpdateVehicle(const SndAliasList *aliasList, LocalClientNum_t localClientNum, int entNum, vec3_t *origin, float throttle, float brake, float rpm, float velocity, int gear, float distanceScale)
{
  ?SND_UpdateVehicle@@YAXPEBUSndAliasList@@W4LocalClientNum_t@@HTvec3_t@@MMMMHM@Z(aliasList, localClientNum, entNum, origin, throttle, brake, rpm, velocity, gear, distanceScale);
}

/*
==============
SND_SoloChannel_f
==============
*/

void __fastcall SND_SoloChannel_f()
{
  ?SND_SoloChannel_f@@YAXXZ();
}

/*
==============
SND_GetPerkIndexFromName
==============
*/

unsigned int __fastcall SND_GetPerkIndexFromName(const char *name)
{
  return ?SND_GetPerkIndexFromName@@YAIPEBD@Z(name);
}

/*
==============
SND_DisableEq
==============
*/

void __fastcall SND_DisableEq(int entchannel, int eqIndex, int band)
{
  ?SND_DisableEq@@YAXHHH@Z(entchannel, eqIndex, band);
}

/*
==============
SND_GetEntChannelCount
==============
*/

unsigned int __fastcall SND_GetEntChannelCount()
{
  return ?SND_GetEntChannelCount@@YAIXZ();
}

/*
==============
Com_SetSoundAliasSeed
==============
*/

void __fastcall Com_SetSoundAliasSeed(int seed)
{
  ?Com_SetSoundAliasSeed@@YAXH@Z(seed);
}

/*
==============
SND_ClearDrawOnlyChannel_f
==============
*/

void __fastcall SND_ClearDrawOnlyChannel_f()
{
  ?SND_ClearDrawOnlyChannel_f@@YAXXZ();
}

/*
==============
SND_SetMusicState
==============
*/

void __fastcall SND_SetMusicState(unsigned int stateId, const unsigned int *assetIdPlaylist, unsigned int assetIdCount)
{
  ?SND_SetMusicState@@YAXIPEBII@Z(stateId, assetIdPlaylist, assetIdCount);
}

/*
==============
SND_GetControllerIndex
==============
*/

int __fastcall SND_GetControllerIndex(const LocalClientNum_t localClientNum)
{
  return ?SND_GetControllerIndex@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_SetEqType
==============
*/

void __fastcall SND_SetEqType(int entchannel, int eqIndex, int band, SND_EQTYPE type)
{
  ?SND_SetEqType@@YAXHHHW4SND_EQTYPE@@@Z(entchannel, eqIndex, band, type);
}

/*
==============
SND_GetTimescaleLerp
==============
*/

double __fastcall SND_GetTimescaleLerp(const unsigned int entchannel)
{
  double result; 

  *(float *)&result = ?SND_GetTimescaleLerp@@YAMI@Z(entchannel);
  return result;
}

/*
==============
SND_EntityFindContextValue
==============
*/

bool __fastcall SND_EntityFindContextValue(const SndEntState *entState, unsigned int contextType, unsigned int *outValueA, unsigned int *outValueB, float *outLerp)
{
  return ?SND_EntityFindContextValue@@YA_NPEBUSndEntState@@IPEAI1PEAM@Z(entState, contextType, outValueA, outValueB, outLerp);
}

/*
==============
SND_Save
==============
*/

void __fastcall SND_Save(MemoryFile *memFile)
{
  ?SND_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_SetVolModValue
==============
*/

void __fastcall SND_SetVolModValue(unsigned int volmodindex, float value, int msec)
{
  ?SND_SetVolModValue@@YAXIMH@Z(volmodindex, value, msec);
}

/*
==============
SND_IsVoicePlaying
==============
*/

bool __fastcall SND_IsVoicePlaying(unsigned int id)
{
  return ?SND_IsVoicePlaying@@YA_NI@Z(id);
}

/*
==============
SND_RestoreEq
==============
*/

void __fastcall SND_RestoreEq(MemoryFile *memFile)
{
  ?SND_RestoreEq@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_StopMusicState
==============
*/

void __fastcall SND_StopMusicState(unsigned int stateId)
{
  ?SND_StopMusicState@@YAXI@Z(stateId);
}

/*
==============
SND_GetPlaybackVoice
==============
*/

SndVoice *__fastcall SND_GetPlaybackVoice(unsigned int id)
{
  return ?SND_GetPlaybackVoice@@YAPEAUSndVoice@@I@Z(id);
}

/*
==============
SND_DrawOcclusionDebug
==============
*/

void __fastcall SND_DrawOcclusionDebug(LocalClientNum_t localClientNum)
{
  ?SND_DrawOcclusionDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_UpdateLoopingSounds
==============
*/

void __fastcall SND_UpdateLoopingSounds(bool deferred)
{
  ?SND_UpdateLoopingSounds@@YAX_N@Z(deferred);
}

/*
==============
SND_GetPerkByIndex
==============
*/

const snd_perk_info_t *__fastcall SND_GetPerkByIndex(unsigned int perkIndex)
{
  return ?SND_GetPerkByIndex@@YAPEBUsnd_perk_info_t@@I@Z(perkIndex);
}

/*
==============
Com_GetSoundFileName
==============
*/

void __fastcall Com_GetSoundFileName(const SndAlias *alias, char *filename, unsigned __int64 filenameSize)
{
  ?Com_GetSoundFileName@@YAXPEBUSndAlias@@PEAD_K@Z(alias, filename, filenameSize);
}

/*
==============
SND_StopSoundsOnEnt
==============
*/

void __fastcall SND_StopSoundsOnEnt(unsigned __int64 sndEnt)
{
  ?SND_StopSoundsOnEnt@@YAX_K@Z(sndEnt);
}

/*
==============
CG_SND_PlayFXSounds
==============
*/

void CG_SND_PlayFXSounds(void)
{
  ?CG_SND_PlayFXSounds@@YAXXZ();
}

/*
==============
SND_GetSPDIFChannelCount
==============
*/

unsigned int __fastcall SND_GetSPDIFChannelCount()
{
  return ?SND_GetSPDIFChannelCount@@YAIXZ();
}

/*
==============
SND_SaveTransientBanks
==============
*/

void __fastcall SND_SaveTransientBanks(MemoryFile *memFile)
{
  ?SND_SaveTransientBanks@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_SetMusicState
==============
*/

void __fastcall SND_SetMusicState(const char *stateName)
{
  ?SND_SetMusicState@@YAXPEBD@Z(stateName);
}

/*
==============
SND_CanDoPhysicsQuery
==============
*/

bool __fastcall SND_CanDoPhysicsQuery()
{
  return ?SND_CanDoPhysicsQuery@@YA_NXZ();
}

/*
==============
SND_PickSoundAliasFromList
==============
*/

void __fastcall SND_PickSoundAliasFromList(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entityNum, const vec3_t *inOrigin, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp)
{
  ?SND_PickSoundAliasFromList@@YAXPEBUSndAliasList@@W4LocalClientNum_t@@HAEBTvec3_t@@PEAPEBUSndAlias@@3PEAM@Z(aliasList, localClientNum, entityNum, inOrigin, outAliasA, outAliasB, outLerp);
}

/*
==============
SND_PlayAmbientAliasBlended
==============
*/

void __fastcall SND_PlayAmbientAliasBlended(LocalClientNum_t localClientNum, const char *aliasNameFrom, const char *aliasNameTo, float lerp, bool isExclusive, snd_alias_system_t system)
{
  ?SND_PlayAmbientAliasBlended@@YAXW4LocalClientNum_t@@PEBD1M_NW4snd_alias_system_t@@@Z(localClientNum, aliasNameFrom, aliasNameTo, lerp, isExclusive, system);
}

/*
==============
SND_UpdateAndStartVoice
==============
*/

void __fastcall SND_UpdateAndStartVoice(int voiceIndex, int frametime)
{
  ?SND_UpdateAndStartVoice@@YAXHH@Z(voiceIndex, frametime);
}

/*
==============
SND_SV_SetEntityHasParams
==============
*/

void __fastcall SND_SV_SetEntityHasParams(int entNum)
{
  ?SND_SV_SetEntityHasParams@@YAXH@Z(entNum);
}

/*
==============
SND_PauseVoice
==============
*/

void __fastcall SND_PauseVoice(int index)
{
  ?SND_PauseVoice@@YAXH@Z(index);
}

/*
==============
SND_GetPerkName
==============
*/

const char *__fastcall SND_GetPerkName(unsigned int perkIndex)
{
  return ?SND_GetPerkName@@YAPEBDI@Z(perkIndex);
}

/*
==============
SND_FreeEntityParamInfo
==============
*/

void __fastcall SND_FreeEntityParamInfo(int entIndex)
{
  ?SND_FreeEntityParamInfo@@YAXH@Z(entIndex);
}

/*
==============
SND_GetPerkVolume
==============
*/

double __fastcall SND_GetPerkVolume(unsigned int perkIndex)
{
  double result; 

  *(float *)&result = ?SND_GetPerkVolume@@YAMI@Z(perkIndex);
  return result;
}

/*
==============
SND_PlaySurfaceSoundAsync
==============
*/

void __fastcall SND_PlaySurfaceSoundAsync(const char *aliasName, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  ?SND_PlaySurfaceSoundAsync@@YAXPEBDH_KMMHAEBTvec3_t@@@Z(aliasName, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org);
}

/*
==============
SND_SV_CheckAndClearEntityHasParams
==============
*/

bool __fastcall SND_SV_CheckAndClearEntityHasParams(int entNum)
{
  return ?SND_SV_CheckAndClearEntityHasParams@@YA_NH@Z(entNum);
}

/*
==============
SND_SoftReset
==============
*/

void SND_SoftReset(void)
{
  ?SND_SoftReset@@YAXXZ();
}

/*
==============
SND_ScaleVoicePitchById
==============
*/

bool __fastcall SND_ScaleVoicePitchById(unsigned int id, float pitch, int msec)
{
  return ?SND_ScaleVoicePitchById@@YA_NIMH@Z(id, pitch, msec);
}

/*
==============
SND_EntChannelHasOcclusion
==============
*/

bool __fastcall SND_EntChannelHasOcclusion(unsigned int entchannel)
{
  return ?SND_EntChannelHasOcclusion@@YA_NI@Z(entchannel);
}

/*
==============
SND_InitFullOcclusionFlags
==============
*/

void SND_InitFullOcclusionFlags(void)
{
  ?SND_InitFullOcclusionFlags@@YAXXZ();
}

/*
==============
SND_AddPhysicsQueryBlock
==============
*/

void SND_AddPhysicsQueryBlock(void)
{
  ?SND_AddPhysicsQueryBlock@@YAXXZ();
}

/*
==============
SND_PlayExplosionSound
==============
*/

unsigned int __fastcall SND_PlayExplosionSound(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, const vec3_t *org, const unsigned int reflectionClass)
{
  return ?SND_PlayExplosionSound@@YAIPEBUSndAliasList@@H_KAEBTvec3_t@@I@Z(aliasList, surfaceType, sndEnt, org, reflectionClass);
}

/*
==============
SND_PlaySurfaceSound
==============
*/

unsigned int __fastcall SND_PlaySurfaceSound(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  return ?SND_PlaySurfaceSound@@YAIPEBUSndAliasList@@H_KMMHAEBTvec3_t@@@Z(aliasList, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org);
}

/*
==============
SND_GetVolModCount
==============
*/

unsigned int __fastcall SND_GetVolModCount()
{
  return ?SND_GetVolModCount@@YAIXZ();
}

/*
==============
SND_DrawOnlyChannel_f
==============
*/

void __fastcall SND_DrawOnlyChannel_f()
{
  ?SND_DrawOnlyChannel_f@@YAXXZ();
}

/*
==============
CG_SND_EntStateFrame
==============
*/

void CG_SND_EntStateFrame(void)
{
  ?CG_SND_EntStateFrame@@YAXXZ();
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/

unsigned int __fastcall SND_PlayScaledSoundAlias(const char *aliasName, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  return ?SND_PlayScaledSoundAlias@@YAIPEBDW4LocalClientNum_t@@HMMAEBTvec3_t@@HW4snd_alias_system_t@@@Z(aliasName, localClientNum, entnum, volumeScale, pitch, org, timeshift, system);
}

/*
==============
SND_MyChanges
==============
*/

void SND_MyChanges(void)
{
  ?SND_MyChanges@@YAXXZ();
}

/*
==============
SND_ScaleVoiceVolumeById
==============
*/

bool __fastcall SND_ScaleVoiceVolumeById(unsigned int id, float volume, int msec)
{
  return ?SND_ScaleVoiceVolumeById@@YA_NIMH@Z(id, volume, msec);
}

/*
==============
SND_RestoreTransientBanks
==============
*/

void __fastcall SND_RestoreTransientBanks(MemoryFile *memFile)
{
  ?SND_RestoreTransientBanks@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_GetBinkVolume
==============
*/

double __fastcall SND_GetBinkVolume()
{
  double result; 

  *(float *)&result = ?SND_GetBinkVolume@@YAMXZ();
  return result;
}

/*
==============
SND_DeactivateAllEq
==============
*/

void __fastcall SND_DeactivateAllEq(int eqIndex)
{
  ?SND_DeactivateAllEq@@YAXH@Z(eqIndex);
}

/*
==============
SND_CreateAutoSimId
==============
*/

int __fastcall SND_CreateAutoSimId(int index, int instanceId)
{
  return ?SND_CreateAutoSimId@@YAHHH@Z(index, instanceId);
}

/*
==============
SND_StopAutoSim
==============
*/

void __fastcall SND_StopAutoSim(int autoSimId)
{
  ?SND_StopAutoSim@@YAXH@Z(autoSimId);
}

/*
==============
SND_ErrorCleanup
==============
*/

void SND_ErrorCleanup(void)
{
  ?SND_ErrorCleanup@@YAXXZ();
}

/*
==============
SND_DriverPostUpdate
==============
*/

void __fastcall SND_DriverPostUpdate(int frametime)
{
  ?SND_DriverPostUpdate@@YAXH@Z(frametime);
}

/*
==============
SND_ExistsPendingRestore
==============
*/

bool __fastcall SND_ExistsPendingRestore()
{
  return ?SND_ExistsPendingRestore@@YA_NXZ();
}

/*
==============
SND_ChangeSoundAliasListValue
==============
*/

void __fastcall SND_ChangeSoundAliasListValue(const SndAliasList *aliasList, const char *columnName, const char *value)
{
  ?SND_ChangeSoundAliasListValue@@YAXPEBUSndAliasList@@PEBD1@Z(aliasList, columnName, value);
}

/*
==============
SND_SetIgnorePauseFlag
==============
*/

void __fastcall SND_SetIgnorePauseFlag(bool ignorePause)
{
  ?SND_SetIgnorePauseFlag@@YAX_N@Z(ignorePause);
}

/*
==============
SND_SetEntContext
==============
*/

void __fastcall SND_SetEntContext(unsigned __int64 handle, const char *type, const char *value, float fadeTime)
{
  ?SND_SetEntContext@@YAX_KPEBD1M@Z(handle, type, value, fadeTime);
}

/*
==============
SND_SetEqParams
==============
*/

void __fastcall SND_SetEqParams(int entchannel, int eqIndex, int band, SND_EQTYPE type, float gain, float freq, float q)
{
  ?SND_SetEqParams@@YAXHHHW4SND_EQTYPE@@MMM@Z(entchannel, eqIndex, band, type, gain, freq, q);
}

/*
==============
SND_AddImpactToBulletEvent
==============
*/

void __fastcall SND_AddImpactToBulletEvent(const int bulletEventId, const LocalClientNum_t localClientNum, const WeaponSFXPackage *sfxPackage, const vec3_t *inShooterPos, const vec3_t *inImpactPos, int impactEnt, const SndAliasList *impactSound, int surfaceType, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  ?SND_AddImpactToBulletEvent@@YAXHW4LocalClientNum_t@@PEBUWeaponSFXPackage@@AEBTvec3_t@@2HPEBUSndAliasList@@HHW4SndHitmarkerType@@@Z(bulletEventId, localClientNum, sfxPackage, inShooterPos, inImpactPos, impactEnt, impactSound, surfaceType, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
SND_GetDistanceCurveFraction
==============
*/

double __fastcall SND_GetDistanceCurveFraction(float radius, float mindist, float maxdist)
{
  double result; 

  *(float *)&result = ?SND_GetDistanceCurveFraction@@YAMMMM@Z(radius, mindist, maxdist);
  return result;
}

/*
==============
SND_SetEntContext
==============
*/
void SND_SetEntContext(unsigned __int64 handle, const char *type, const char *value, float fadeTime)
{
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1044i64) == 1164548266 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_public.cpp", 361, ASSERT_TYPE_ASSERT, "(!SND_IsUpdate())", (const char *)&queryFormat, "!SND_IsUpdate()") )
    __debugbreak();
  if ( g_snd.driverInitialized )
  {
    v7 = SND_HashName(type);
    if ( SND_FindContextIndex(v7) >= 0 )
    {
      if ( !SND_HashName(value) || (v8 = SND_HashName(value), v9 = SND_HashName(type), SND_IsValidContext(v9, v8)) )
      {
        v10 = SND_HashName(value);
        v11 = SND_HashName(type);
        SND_SetEntContext(handle, v11, v10, fadeTime);
      }
      else
      {
        Com_PrintError(9, "SOUND: Unknown sound context value %s for type %s\n", value, type);
      }
    }
    else
    {
      Com_PrintError(9, "SOUND: Unknown sound context %s\n", type);
    }
  }
}

/*
==============
CG_GenerateClothSndEntHandle
==============
*/
unsigned __int64 CG_GenerateClothSndEntHandle(const LocalClientNum_t localClientNum, const int clothSoundIndex)
{
  unsigned __int64 v4; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 

  if ( (unsigned int)clothSoundIndex > 0x3FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5055, ASSERT_TYPE_ASSERT, "(clothSoundIndex >= 0 && clothSoundIndex < ( 1024 ))", (const char *)&queryFormat, "clothSoundIndex >= 0 && clothSoundIndex < SND_MAX_CLOTH_LOOP_SOUNDS") )
    __debugbreak();
  v4 = clothSoundIndex + 4387;
  if ( v4 >= 0x400000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5058, ASSERT_TYPE_ASSERT, "(entId < (1ULL << (33ULL + 1)))", (const char *)&queryFormat, "entId < (1ULL << (SNDENT_ENTNUM_BITS + 1))") )
    __debugbreak();
  v5 = v4 & 0x1FFFFFFFFi64;
  if ( v4 != (v4 & 0x1FFFFFFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 433, ASSERT_TYPE_ASSERT, "(entIndex == ( ( ( ( handle )&( ( ( 1ULL << ( 33ULL ) ) - 1ULL ) << ( 0ULL ) ) ) >> ( 0ULL ) ) ))", (const char *)&queryFormat, "entIndex == SNDENT_GET_ENTNUM( handle )") )
    __debugbreak();
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return v5 | ((unsigned __int64)(localClientNum & 3) << 33);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0x1000000000i64;
  if ( LocalClientGlobals->inKillCam == 1 )
    v7 = 0x1800000000i64;
  return v5 | ((unsigned __int64)(localClientNum & 3) << 33) | v7;
}

/*
==============
CG_GenerateParticleSndEntHandle
==============
*/
unsigned __int64 CG_GenerateParticleSndEntHandle(const LocalClientNum_t localClientNum, const int particleSoundIndex)
{
  unsigned __int64 v4; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 

  if ( (unsigned int)particleSoundIndex > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5027, ASSERT_TYPE_ASSERT, "(particleSoundIndex >= 0 && particleSoundIndex < ( 32 ))", (const char *)&queryFormat, "particleSoundIndex >= 0 && particleSoundIndex < SND_MAX_PARTICLE_LOOP_SOUNDS") )
    __debugbreak();
  v4 = particleSoundIndex + 4355;
  if ( v4 >= 0x400000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5030, ASSERT_TYPE_ASSERT, "(entId < ( 1ULL << (33ULL+1) ))", (const char *)&queryFormat, "entId < ( 1ULL << (SNDENT_ENTNUM_BITS+1) )") )
    __debugbreak();
  v5 = v4 & 0x1FFFFFFFFi64;
  if ( v4 != (v4 & 0x1FFFFFFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 433, ASSERT_TYPE_ASSERT, "(entIndex == ( ( ( ( handle )&( ( ( 1ULL << ( 33ULL ) ) - 1ULL ) << ( 0ULL ) ) ) >> ( 0ULL ) ) ))", (const char *)&queryFormat, "entIndex == SNDENT_GET_ENTNUM( handle )") )
    __debugbreak();
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return v5 | ((unsigned __int64)(localClientNum & 3) << 33);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0x1000000000i64;
  if ( LocalClientGlobals->inKillCam == 1 )
    v7 = 0x1800000000i64;
  return v5 | ((unsigned __int64)(localClientNum & 3) << 33) | v7;
}

/*
==============
CG_GeneratePhysicsSndEntHandle
==============
*/
unsigned __int64 CG_GeneratePhysicsSndEntHandle(const LocalClientNum_t localClientNum, const unsigned __int8 worldId, const bool isRagdoll, const unsigned int bodyId)
{
  __int64 v4; 
  unsigned int v8; 
  unsigned __int64 v9; 
  cg_t *LocalClientGlobals; 
  __int64 v11; 
  unsigned __int64 data[3]; 

  v4 = bodyId;
  if ( worldId >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5111, ASSERT_TYPE_ASSERT, "(worldId < 0x80)", (const char *)&queryFormat, "worldId < 0x80") )
    __debugbreak();
  v8 = worldId;
  if ( isRagdoll )
    v8 = worldId | 0x80;
  data[0] = v4 | ((unsigned __int64)v8 << 32);
  v9 = ((unsigned __int64)(localClientNum & 3) << 33) | (SND_Hash(data, 8u) + 505571i64);
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return v9;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v11 = 0x1000000000i64;
  if ( LocalClientGlobals->inKillCam == 1 )
    v11 = 0x1800000000i64;
  return v9 | v11;
}

/*
==============
CG_GeneratePredictedEntSndEntHandle
==============
*/
unsigned __int64 CG_GeneratePredictedEntSndEntHandle(const LocalClientNum_t localClientNum, const int predictedEntIdx)
{
  unsigned __int64 v4; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 
  int v10; 

  if ( (unsigned int)predictedEntIdx >= 0x20 )
  {
    v10 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5083, ASSERT_TYPE_ASSERT, "(unsigned)( predictedEntIdx ) < (unsigned)( ( 32 ) )", "predictedEntIdx doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", predictedEntIdx, v10) )
      __debugbreak();
  }
  v4 = predictedEntIdx + 5411;
  if ( v4 >= 0x400000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5086, ASSERT_TYPE_ASSERT, "(entId < ( 1ULL << (33ULL+1) ))", (const char *)&queryFormat, "entId < ( 1ULL << (SNDENT_ENTNUM_BITS+1) )") )
    __debugbreak();
  v5 = v4 & 0x1FFFFFFFFi64;
  if ( v4 != (v4 & 0x1FFFFFFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 433, ASSERT_TYPE_ASSERT, "(entIndex == ( ( ( ( handle )&( ( ( 1ULL << ( 33ULL ) ) - 1ULL ) << ( 0ULL ) ) ) >> ( 0ULL ) ) ))", (const char *)&queryFormat, "entIndex == SNDENT_GET_ENTNUM( handle )") )
    __debugbreak();
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return v5 | ((unsigned __int64)(localClientNum & 3) << 33);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0x1000000000i64;
  if ( LocalClientGlobals->inKillCam == 1 )
    v7 = 0x1800000000i64;
  return v5 | ((unsigned __int64)(localClientNum & 3) << 33) | v7;
}

/*
==============
CG_GenerateScriptableSndEntHandle
==============
*/
unsigned __int64 CG_GenerateScriptableSndEntHandle(const LocalClientNum_t localClientNum, const unsigned __int64 scriptableIndex)
{
  unsigned __int64 v4; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 
  int v9; 
  int v10; 

  if ( (unsigned int)scriptableIndex >= 0x7A120 )
  {
    v10 = 500000;
    v9 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5147, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( SCRIPTABLE_MAX_INSTANCE_COUNT )", "scriptableIndex doesn't index SCRIPTABLE_MAX_INSTANCE_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v4 = scriptableIndex + 5571;
  if ( v4 >= 0x400000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5150, ASSERT_TYPE_ASSERT, "(entId < ( 1ULL << ( 33ULL + 1 ) ))", (const char *)&queryFormat, "entId < ( 1ULL << ( SNDENT_ENTNUM_BITS + 1 ) )") )
    __debugbreak();
  v5 = v4 & 0x1FFFFFFFFi64;
  if ( v4 != (v4 & 0x1FFFFFFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 433, ASSERT_TYPE_ASSERT, "(entIndex == ( ( ( ( handle )&( ( ( 1ULL << ( 33ULL ) ) - 1ULL ) << ( 0ULL ) ) ) >> ( 0ULL ) ) ))", (const char *)&queryFormat, "entIndex == SNDENT_GET_ENTNUM( handle )") )
    __debugbreak();
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return v5 | ((unsigned __int64)(localClientNum & 3) << 33);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0x1000000000i64;
  if ( LocalClientGlobals->inKillCam == 1 )
    v7 = 0x1800000000i64;
  return v5 | ((unsigned __int64)(localClientNum & 3) << 33) | v7;
}

/*
==============
CG_GenerateSndEntHandle
==============
*/
__int64 CG_GenerateSndEntHandle(const LocalClientNum_t localClientNum, const int entIndex)
{
  __int64 v4; 
  unsigned __int64 v5; 
  int inKillCam; 
  centity_t *Entity; 
  __int64 v8; 
  __int64 result; 
  __int64 v10; 

  v4 = entIndex & 0x1FFFFFFFFi64;
  if ( entIndex != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 433, ASSERT_TYPE_ASSERT, "(entIndex == ( ( ( ( handle )&( ( ( 1ULL << ( 33ULL ) ) - 1ULL ) << ( 0ULL ) ) ) >> ( 0ULL ) ) ))", (const char *)&queryFormat, "entIndex == SNDENT_GET_ENTNUM( handle )") )
    __debugbreak();
  v5 = v4 | ((unsigned __int64)(localClientNum & 3) << 33);
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return v4 | ((unsigned __int64)(localClientNum & 3) << 33);
  inKillCam = CG_GetLocalClientGlobals(localClientNum)->inKillCam;
  if ( entIndex >= 2048 )
  {
$LN13_143:
    v8 = 0x1000000000i64;
    if ( inKillCam )
      v8 = 0x1800000000i64;
    return v5 | v8;
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, entIndex);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4986, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    switch ( Entity->nextState.eType )
    {
      case ET_FIRST:
      case ET_PLAYER:
      case ET_PLAYER_CORPSE:
      case ET_ITEM:
      case ET_MISSILE:
      case ET_INVISIBLE:
      case ET_SCRIPTMOVER:
      case ET_SOUND:
      case ET_TURRET:
      case ET_HELICOPTER:
      case ET_PLANE:
      case ET_VEHICLE:
      case ET_AGENT:
      case ET_ACTOR:
      case ET_PHYSICS_CHILD:
        goto $LN13_143;
      default:
        v10 = 0i64;
        if ( Entity->nextState.eType >= ET_EVENTS )
          v10 = 0x1000000000i64;
        result = v5 | -(__int64)(inKillCam != 0) & 0x800000000i64 | v10;
        break;
    }
  }
  return result;
}

/*
==============
CG_SND_BankDetailStream_GetBankForWeapon
==============
*/
const SndBankTransient *CG_SND_BankDetailStream_GetBankForWeapon(const Weapon *weapon, bool isPlayer)
{
  const SndBankTransient *result; 

  if ( weapon->weaponIdx >= 0x226u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8651, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", weapon->weaponIdx, 550) )
    __debugbreak();
  result = (const SndBankTransient *)BG_GetSfxPackage(weapon, 0);
  if ( result )
  {
    if ( isPlayer )
      return *(const SndBankTransient **)&result->bank.aliasCount;
    else
      return (const SndBankTransient *)result->bank.soundLanguage;
  }
  return result;
}

/*
==============
CG_SND_BankDetailStream_PrioritizeThirdPersonWeapons
==============
*/
void CG_SND_BankDetailStream_PrioritizeThirdPersonWeapons(const BgWeaponMap *const weaponMap, const centity_t *const cent, int playerStateClientNum, const vec3_t *origin)
{
  entityState_t *p_nextState; 
  entityType_s eType; 
  int v10; 
  float v11; 
  const Weapon *Weapon; 
  const SndBankTransient *BankForWeapon; 
  const SndBankTransient *v14; 
  float v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  const Weapon *v19; 
  const SndBankTransient *v20; 
  vec3_t outOrigin; 
  __int64 v22; 

  v22 = -2i64;
  if ( (cent->flags & 1) != 0 )
  {
    p_nextState = &cent->nextState;
    if ( cent == (const centity_t *const)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = p_nextState->eType;
    if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM || cent->nextState.eType == ET_TURRET )
    {
      v10 = 1;
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xCu) && p_nextState->number != playerStateClientNum )
      {
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        v11 = fsqrt((float)((float)((float)(origin->v[1] - outOrigin.v[1]) * (float)(origin->v[1] - outOrigin.v[1])) + (float)((float)(origin->v[0] - outOrigin.v[0]) * (float)(origin->v[0] - outOrigin.v[0]))) + (float)((float)(origin->v[2] - outOrigin.v[2]) * (float)(origin->v[2] - outOrigin.v[2])));
        if ( v11 <= 20000.0 )
        {
          if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, p_nextState->weaponHandle);
          if ( Weapon->weaponIdx )
          {
            BankForWeapon = CG_SND_BankDetailStream_GetBankForWeapon(Weapon, 0);
            v14 = BankForWeapon;
            if ( BankForWeapon )
            {
              v15 = 100.0 - (float)(v11 * 0.0049999999);
              v16 = 1;
              if ( (int)v15 > 1 )
                v16 = (int)v15;
              if ( SND_BankDetailStreaming_BankIsActive(BankForWeapon) )
                v16 += 10;
              SND_BankDetailStreaming_AddBankRequest(v14, SND_BANK_STREAM_CATEGORY_WEAPONS, v16);
            }
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_enable_stowed_weapons, "bg_enable_stowed_weapons") && ((cent->nextState.eType - 1) & 0xFFEF) == 0 )
          {
            if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 522, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 523, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
              __debugbreak();
            v17 = (unsigned __int16)p_nextState->eType;
            if ( (unsigned __int16)v17 > 0x11u || (v18 = 131111, !_bittest(&v18, v17)) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 524, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
                __debugbreak();
            }
            v19 = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, p_nextState->staticState.player.stowedWeaponHandle);
            if ( v19->weaponIdx )
            {
              v20 = CG_SND_BankDetailStream_GetBankForWeapon(v19, 0);
              if ( v20 )
              {
                if ( (int)(float)(90.0 - (float)(v11 * 0.0044999998)) > 1 )
                  v10 = (int)(float)(90.0 - (float)(v11 * 0.0044999998));
                SND_BankDetailStreaming_AddBankRequest(v20, SND_BANK_STREAM_CATEGORY_WEAPONS, v10);
              }
            }
          }
        }
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
}

/*
==============
CG_SND_BankDetailStream_SetScriptedSoundbanks
==============
*/
void CG_SND_BankDetailStream_SetScriptedSoundbanks(const unsigned __int64 scriptedSoundbanksStateBitfield)
{
  unsigned __int64 v1; 
  int v3; 
  int SoundBankCount; 
  char v5; 
  unsigned int SoundBankName; 

  v1 = g_sb.scriptedSoundbanksStateBitfield;
  if ( scriptedSoundbanksStateBitfield != g_sb.scriptedSoundbanksStateBitfield )
  {
    g_sb.scriptedSoundbanksStateBitfield = scriptedSoundbanksStateBitfield;
    v3 = 0;
    SoundBankCount = BG_SoundBankList_GetSoundBankCount();
    if ( SoundBankCount > 0 )
    {
      do
      {
        v5 = (scriptedSoundbanksStateBitfield >> v3) & 1;
        if ( ((v1 >> v3) & 1) != v5 )
        {
          SoundBankName = BG_SoundBankList_GetSoundBankName(v3);
          if ( SoundBankName )
          {
            if ( v5 )
              SND_BankDetailStreaming_AddScriptBankRequest(SoundBankName, 100);
            else
              SND_BankDetailStreaming_RemoveScriptBankRequest(SoundBankName);
          }
          else
          {
            Com_PrintError(9, "Could not find sound bank for soundbanklist index %d.\n", (unsigned int)v3);
          }
        }
        ++v3;
      }
      while ( v3 < SoundBankCount );
    }
  }
}

/*
==============
CG_SND_DetailStreamingPrioritizeForLocalClient
==============
*/
void CG_SND_DetailStreamingPrioritizeForLocalClient(LocalClientNum_t localClientNum, int playerStateClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *velocity, const playerState_s *ps)
{
  __int64 v7; 
  __int64 v9; 
  CgWeaponMap *v10; 
  __int64 v11; 
  int i; 
  CgEntitySystem *v13; 
  int v14; 
  CgEntitySystem **v15; 
  bool v16; 
  CgEntitySystem *v17; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned __int16 weaponIdx; 
  WeaponSFXPackage *SfxPackage; 
  const SndBankTransient *detailSoundBankPlayer; 
  const dvar_t *v22; 
  const Weapon *v23; 
  BgWeaponHandle *weaponsEquipped; 
  int j; 
  const Weapon *Weapon; 
  const Weapon *v27; 
  unsigned __int16 v28; 
  WeaponSFXPackage *v29; 
  const SndBankTransient *v30; 
  int *p_priority; 
  int v32; 
  bool v33; 
  __int64 v34; 
  CgEntitySystem *v35; 
  const VehicleDef *ClientDef; 
  const SndBankTransient *detailSoundBankNPC; 
  const VehicleDef *v38; 
  const SndBankTransient *v39; 
  unsigned int PlayerSoundBankTriggerIndex; 
  const SndBankTransient *v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  CgEntitySystem **v45; 

  v7 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_SND_DetailStreamingPrioritizeForLocalClient");
  v9 = v7;
  v44 = v7;
  if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = CgWeaponMap::ms_instance[v9];
  v11 = 0i64;
  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v43) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v43) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v43) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v42) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v9] )
    {
      LODWORD(v43) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v43) )
        __debugbreak();
    }
    v13 = CgEntitySystem::ms_entitySystemArray[v9];
    if ( (unsigned int)i >= 0x800 )
    {
      LODWORD(v43) = 2048;
      LODWORD(v42) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    CG_SND_BankDetailStream_PrioritizeThirdPersonWeapons(v10, &v13->m_entities[i], playerStateClientNum, origin);
    v9 = v7;
  }
  v14 = 0;
  v15 = &CgEntitySystem::ms_entitySystemArray[v9];
  v16 = Com_GameMode_SupportsFeature(WEAPON_READY);
  v45 = v15;
  do
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v43) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v43) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v43) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v42) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( !*v15 )
    {
      LODWORD(v43) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v43) )
        __debugbreak();
    }
    v17 = *v15;
    if ( (unsigned int)v14 >= 0x800 )
    {
      LODWORD(v43) = 2048;
      LODWORD(v42) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( (v17->m_entities[v11].flags & 1) != 0 && (v16 && v17->m_entities[v11].nextState.eType == ET_ACTOR || v17->m_entities[v11].nextState.eType == ET_TURRET && *((char *)&v17->m_entities[v11].nextState.lerp.u.infoVolumeGrapple + 20) < 0) )
      CG_SND_BankDetailStream_PrioritizeThirdPersonWeapons(v10, &v17->m_entities[v11], playerStateClientNum, origin);
    v15 = v45;
    ++v14;
    ++v11;
  }
  while ( v14 < 2048 );
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v10, ps);
  weaponIdx = CurrentWeaponForPlayer->weaponIdx;
  if ( CurrentWeaponForPlayer->weaponIdx )
  {
    if ( weaponIdx >= 0x226u )
    {
      LODWORD(v43) = 550;
      LODWORD(v42) = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8651, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    SfxPackage = BG_GetSfxPackage(CurrentWeaponForPlayer, 0);
    if ( SfxPackage )
    {
      detailSoundBankPlayer = SfxPackage->detailSoundBankPlayer;
      if ( detailSoundBankPlayer )
        SND_BankDetailStreaming_AddBankRequest(detailSoundBankPlayer, SND_BANK_STREAM_CATEGORY_WEAPONS, 200);
    }
  }
  v22 = DVARBOOL_bg_enable_stowed_weapons;
  if ( !DVARBOOL_bg_enable_stowed_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_enable_stowed_weapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 899, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 900, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v23 = BG_GetCurrentWeaponForPlayer(v10, ps);
    weaponsEquipped = ps->weaponsEquipped;
    for ( j = 0; j < 15; ++j )
    {
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)j >= 0xF )
      {
        LODWORD(v43) = 15;
        LODWORD(v42) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      Weapon = BgWeaponMap::GetWeapon(v10, (BgWeaponHandle)weaponsEquipped->m_mapEntryId);
      v27 = Weapon;
      v28 = Weapon->weaponIdx;
      if ( Weapon->weaponIdx && memcmp_0(Weapon, v23, 0x3Cui64) )
      {
        if ( v28 >= 0x226u )
        {
          LODWORD(v43) = 550;
          LODWORD(v42) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8651, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v42, v43) )
            __debugbreak();
        }
        v29 = BG_GetSfxPackage(v27, 0);
        if ( v29 )
        {
          v30 = v29->detailSoundBankPlayer;
          if ( v30 )
            SND_BankDetailStreaming_AddBankRequest(v30, SND_BANK_STREAM_CATEGORY_WEAPONS, 190);
        }
      }
      ++weaponsEquipped;
    }
    LODWORD(v7) = localClientNum;
  }
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v43) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v43) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v43) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v42) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v42, v43) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v44] )
  {
    LODWORD(v43) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v43) )
      __debugbreak();
  }
  p_priority = &CgVehicleSystem::ms_vehicleSystemArray[v44]->m_vehicleClients[0].audioState.priority;
  v32 = 0;
  v33 = 1;
  do
  {
    if ( !v33 )
    {
      LODWORD(v43) = 128;
      LODWORD(v42) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( p_priority == (int *)580 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8828, ASSERT_TYPE_ASSERT, "(vc)", (const char *)&queryFormat, "vc") )
      __debugbreak();
    v34 = *(p_priority - 125);
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v43) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v43) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v43) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v42) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( !*v45 )
    {
      LODWORD(v43) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v43) )
        __debugbreak();
    }
    v35 = *v45;
    if ( (unsigned int)v34 >= 0x800 )
    {
      LODWORD(v43) = 2048;
      LODWORD(v42) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( CG_Vehicle_IsVehicleEntity(&v35->m_entities[v34]) )
    {
      ClientDef = CgVehicleSystem::GetClientDef((const VehicleClient *)(p_priority - 145));
      if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8666, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
        __debugbreak();
      detailSoundBankNPC = ClientDef->detailSoundBankNPC;
      if ( detailSoundBankNPC && *p_priority > 0 )
        SND_BankDetailStreaming_AddBankRequest(detailSoundBankNPC, SND_BANK_STREAM_CATEGORY_VEHICLES, *p_priority);
      if ( *p_priority == 128 )
      {
        v38 = CgVehicleSystem::GetClientDef((const VehicleClient *)(p_priority - 145));
        if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8666, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
          __debugbreak();
        v39 = v38->detailSoundBankPlayer;
        if ( v39 && *p_priority > 0 )
          SND_BankDetailStreaming_AddBankRequest(v39, SND_BANK_STREAM_CATEGORY_VEHICLES, *p_priority);
      }
    }
    ++v32;
    p_priority += 147;
    v33 = (unsigned int)v32 < 0x80;
  }
  while ( v32 < 128 );
  if ( !(_DWORD)v7 )
  {
    PlayerSoundBankTriggerIndex = CG_GetPlayerSoundBankTriggerIndex(LOCAL_CLIENT_0);
    if ( PlayerSoundBankTriggerIndex != 0x4000 )
    {
      v41 = cm.mapEnts->clientTrigger.detailSoundBank[PlayerSoundBankTriggerIndex];
      if ( v41 )
        SND_BankDetailStreaming_AddBankRequest(v41, SND_BANK_STREAM_CATEGORY_TRIGGERS, 100);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SND_EntStateFrame
==============
*/
void CG_SND_EntStateFrame(void)
{
  int v0; 
  unsigned int v1; 
  unsigned __int64 *p_sndEnt; 
  unsigned __int64 v3; 
  SndEntState *EntState; 
  unsigned int v5; 
  unsigned int *p_hasPosition; 
  vec3_t origin_out; 
  __int64 v8; 
  tmat33_t<vec3_t> axis_out; 

  v8 = -2i64;
  v0 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_EntStateFrame");
  v1 = 0;
  p_sndEnt = &g_snd.voices[0].sndEnt;
  do
  {
    if ( sdGlob.voiceAlloc[v1] )
    {
      v3 = *p_sndEnt & 0x1FFFFFFFFi64;
      if ( v3 - 5411 <= 0x1F || v3 - 2049 <= 0x8FF || v3 <= 0x7FD || v3 - 5571 <= 0x7A120 )
      {
        if ( *((_DWORD *)p_sndEnt + 43) )
        {
          EntState = SND_FindEntState(*p_sndEnt, 0);
          if ( EntState )
          {
            if ( EntState->lastUsed != g_snd.frame )
            {
              CG_SND_GetSoundEntityOrientation(*p_sndEnt, &origin_out, &axis_out);
              SND_SetEntState(*p_sndEnt, &origin_out, &axis_out);
              memset(&origin_out, 0, sizeof(origin_out));
            }
          }
        }
      }
    }
    ++v1;
    p_sndEnt += 246;
  }
  while ( v1 < 0x63 );
  v5 = 0;
  p_hasPosition = &g_snd.entState[1].hasPosition;
  do
  {
    if ( g_snd.frame - *(p_hasPosition - 33) > 5 )
      *(p_hasPosition - 32) = 0;
    if ( g_snd.frame - *(p_hasPosition - 1) > 5 )
      *p_hasPosition = 0;
    if ( g_snd.frame - p_hasPosition[31] > 5 )
      p_hasPosition[32] = 0;
    if ( g_snd.frame - p_hasPosition[63] > 5 )
      p_hasPosition[64] = 0;
    if ( g_snd.frame - p_hasPosition[95] > 5 )
      p_hasPosition[96] = 0;
    if ( g_snd.frame - p_hasPosition[127] > 5 )
      p_hasPosition[128] = 0;
    if ( g_snd.frame - p_hasPosition[159] > 5 )
      p_hasPosition[160] = 0;
    if ( g_snd.frame - p_hasPosition[191] > 5 )
      p_hasPosition[192] = 0;
    if ( g_snd.frame - p_hasPosition[223] > 5 )
      p_hasPosition[224] = 0;
    if ( g_snd.frame - p_hasPosition[255] > 5 )
      p_hasPosition[256] = 0;
    if ( g_snd.frame - p_hasPosition[287] > 5 )
      p_hasPosition[288] = 0;
    if ( g_snd.frame - p_hasPosition[319] > 5 )
      p_hasPosition[320] = 0;
    if ( g_snd.frame - p_hasPosition[351] > 5 )
      p_hasPosition[352] = 0;
    if ( g_snd.frame - p_hasPosition[383] > 5 )
      p_hasPosition[384] = 0;
    if ( g_snd.frame - p_hasPosition[415] > 5 )
      p_hasPosition[416] = 0;
    if ( g_snd.frame - p_hasPosition[447] > 5 )
      p_hasPosition[448] = 0;
    if ( g_snd.frame - p_hasPosition[479] > 5 )
      p_hasPosition[480] = 0;
    if ( g_snd.frame - p_hasPosition[511] > 5 )
      p_hasPosition[512] = 0;
    if ( g_snd.frame - p_hasPosition[543] > 5 )
      p_hasPosition[544] = 0;
    if ( g_snd.frame - p_hasPosition[575] > 5 )
      p_hasPosition[576] = 0;
    if ( g_snd.frame - p_hasPosition[607] > 5 )
      p_hasPosition[608] = 0;
    if ( g_snd.frame - p_hasPosition[639] > 5 )
      p_hasPosition[640] = 0;
    if ( g_snd.frame - p_hasPosition[671] > 5 )
      p_hasPosition[672] = 0;
    if ( g_snd.frame - p_hasPosition[703] > 5 )
      p_hasPosition[704] = 0;
    if ( g_snd.frame - p_hasPosition[735] > 5 )
      p_hasPosition[736] = 0;
    if ( g_snd.frame - p_hasPosition[767] > 5 )
      p_hasPosition[768] = 0;
    if ( g_snd.frame - p_hasPosition[799] > 5 )
      p_hasPosition[800] = 0;
    if ( g_snd.frame - p_hasPosition[831] > 5 )
      p_hasPosition[832] = 0;
    if ( g_snd.frame - p_hasPosition[863] > 5 )
      p_hasPosition[864] = 0;
    if ( g_snd.frame - p_hasPosition[895] > 5 )
      p_hasPosition[896] = 0;
    if ( g_snd.frame - p_hasPosition[927] > 5 )
      p_hasPosition[928] = 0;
    if ( g_snd.frame - p_hasPosition[959] > 5 )
      p_hasPosition[960] = 0;
    v5 += 32;
    p_hasPosition += 1024;
  }
  while ( v5 < 0x80 );
  g_snd.entStateUsec = Sys_Microseconds() - v0;
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SND_GetSoundEntityOrientation
==============
*/
void CG_SND_GetSoundEntityOrientation(const unsigned __int64 sndEnt, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  unsigned __int64 v6; 
  cg_t **v7; 
  connstate_t *p_connectionState; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( (sndEnt & 0x800000000i64) != 0 )
  {
    v6 = (sndEnt >> 33) & 3;
    if ( CL_IsLocalClientConnectionActiveForGameServer((const LocalClientNum_t)((sndEnt >> 33) & 3)) )
    {
LABEL_26:
      v9 = truncate_cast<int,unsigned __int64>(sndEnt & 0x1FFFFFFFFi64);
      GetSoundEntityOrientation((LocalClientNum_t)v6, v9, origin_out, axis_out);
      return;
    }
  }
  else
  {
    LODWORD(v6) = 0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v7 = cg_t::ms_cgArray;
      p_connectionState = &clientUIActives[0].connectionState;
      do
      {
        if ( (unsigned int)v6 >= 2 )
        {
          LODWORD(v12) = 2;
          LODWORD(v10) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v12) )
            __debugbreak();
          LODWORD(v13) = 2;
          LODWORD(v11) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v13) )
            __debugbreak();
        }
        if ( !*((_BYTE *)p_connectionState + 28) )
        {
          if ( (unsigned int)v6 >= 2 )
          {
            LODWORD(v12) = 2;
            LODWORD(v10) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v12) )
              __debugbreak();
          }
          if ( *p_connectionState == CA_ACTIVE )
          {
            if ( (unsigned int)v6 >= cg_t::ms_allocatedCount )
            {
              LODWORD(v12) = cg_t::ms_allocatedCount;
              LODWORD(v10) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v10, v12) )
                __debugbreak();
            }
            if ( !*v7 )
            {
              LODWORD(v12) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v12) )
                __debugbreak();
            }
            if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
            {
              LODWORD(v12) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v12) )
                __debugbreak();
            }
            if ( !(*v7)->inKillCam )
              goto LABEL_26;
          }
        }
        LODWORD(v6) = v6 + 1;
        p_connectionState += 110;
        ++v7;
      }
      while ( (int)v6 < SLODWORD(cl_maxLocalClients) );
    }
  }
  *(_QWORD *)origin_out->v = 0i64;
  origin_out->v[2] = 0.0;
  AxisClear(axis_out);
}

/*
==============
CG_SND_PlayFXSounds
==============
*/
void CG_SND_PlayFXSounds(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  AsyncPlaySound *v3; 
  const SndAliasList *AliasFromId; 
  __int64 system; 

  v0 = (unsigned int)s_FXPlaySoundCount;
  v1 = ((_BYTE)s_FXPlaySoundHead - (_BYTE)s_FXPlaySoundCount) & 0x1F;
  if ( !SND_AnyActiveListeners() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4953, ASSERT_TYPE_ASSERT, "(SND_AnyActiveListeners())", (const char *)&queryFormat, "SND_AnyActiveListeners()") )
    __debugbreak();
  if ( (unsigned int)v0 >= 0x20 )
  {
    LODWORD(system) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4954, ASSERT_TYPE_ASSERT, "(unsigned)( soundCount ) < (unsigned)( ( sizeof( *array_counter( s_FXPlaySounds ) ) + 0 ) )", "soundCount doesn't index ARRAY_COUNT( s_FXPlaySounds )\n\t%i not in [0, %i)", system, 32) )
      __debugbreak();
  }
  if ( (int)v0 > 0 )
  {
    v2 = v0;
    do
    {
      v3 = &s_FXPlaySounds[v1];
      AliasFromId = SND_FindAliasFromId(v3->aliasId);
      SND_PlaySoundAlias(AliasFromId, (const LocalClientNum_t)v3->localClientNum, v3->entNum, &v3->origin, 0, SASYS_CGAME);
      v1 = ((_BYTE)v1 + 1) & 0x1F;
      --v2;
    }
    while ( v2 );
  }
  if ( ((unsigned __int8)&s_FXPlaySoundCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_FXPlaySoundCount) )
    __debugbreak();
  _InterlockedExchangeAdd(&s_FXPlaySoundCount, -(int)v0);
}

/*
==============
CG_SND_Update
==============
*/
void CG_SND_Update(const LocalClientNum_t localClientNum)
{
  int frametime; 
  float v3; 
  LocalClientNum_t v4; 
  _BYTE *frontEndSceneState; 
  cg_t *LocalClientGlobals; 
  float v7; 
  float v8; 
  unsigned int refdefViewOrg_aab; 
  bool *voiceAlloc; 
  int v11; 
  int v12; 
  int v13; 
  bool *v14; 
  unsigned __int64 *p_sndEnt; 
  __int64 v16; 
  int v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  int v20; 
  const SndAlias **p_alias; 
  int SoundFileLengthMS; 
  int i; 
  volatile int v24; 
  __int64 v25; 
  __int64 v26; 
  LocalClientNum_t v27; 
  bool *p_playTimeFound; 
  connstate_t *p_connectionState; 
  int v30; 
  int v31; 
  unsigned __int64 SndEntHandle; 
  __int64 v33; 
  const AmbientElement *RandomElement; 
  int ControllerFromClient; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  const SndAliasList *AliasFromId; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  int integer; 
  const SndAliasList *v43; 
  int v44; 
  SndBankInfo *v45; 
  const SndBank *bank; 
  playerState_s *ps; 
  playerState_s *psa; 
  playerState_s *psb; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  int data; 
  int gameFrameDelta; 
  float volume; 
  int v56; 
  vec3_t origin; 
  connstate_t *v58; 
  __int64 v59; 
  unsigned __int64 v60; 
  __int64 v61; 
  cg_t *p_z; 
  vec3_t velocity; 
  snd_listener outListener; 

  v61 = -2i64;
  frametime = 0;
  gameFrameDelta = 0;
  if ( SND_Active() )
  {
    v3 = cl_maxLocalClients;
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
        __debugbreak();
      v3 = cl_maxLocalClients;
    }
    if ( v3 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
      __debugbreak();
    if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( localClientNum == cls.m_localClientsActive.firstActiveIndex )
    {
      v60 = Sys_Microseconds();
      Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_SND_Update");
      Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
      cls.inUpdateSound = 1;
      SND_BankDetailStreaming_Reset();
      v4 = LOCAL_CLIENT_0;
      if ( SLODWORD(cl_maxLocalClients) > 0 )
      {
        frontEndSceneState = clientUIActives[0].frontEndSceneState;
        do
        {
          if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(v50) = 2;
            LODWORD(ps) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ps, v50) )
              __debugbreak();
            LODWORD(v51) = 2;
            LODWORD(psa) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", psa, v51) )
              __debugbreak();
          }
          if ( !*frontEndSceneState && CL_GetLocalClientAnyConnectionState(v4) == CA_ACTIVE )
          {
            LocalClientGlobals = CG_GetLocalClientGlobals(v4);
            if ( CG_View_IsKillCamEntityView(v4) )
            {
              velocity.v[0] = 0.0;
              velocity.v[1] = 0.0;
              velocity.v[2] = 0.0;
            }
            else
            {
              if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 )
              {
                velocity.v[0] = LocalClientGlobals->predictedPlayerState.velocity.v[0];
                v7 = LocalClientGlobals->predictedPlayerState.velocity.v[1];
                v8 = LocalClientGlobals->predictedPlayerState.velocity.v[2];
              }
              else
              {
                velocity.v[0] = LocalClientGlobals->predictedPlayerState.vehicleState.velocity.v[0];
                v7 = LocalClientGlobals->predictedPlayerState.vehicleState.velocity.v[1];
                v8 = LocalClientGlobals->predictedPlayerState.vehicleState.velocity.v[2];
              }
              velocity.v[2] = v8;
              velocity.v[1] = v7;
            }
            if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
              __debugbreak();
            refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
            if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
              __debugbreak();
            LODWORD(origin.v[0]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
            LODWORD(origin.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
            p_z = (cg_t *)&LocalClientGlobals->refdef.view.org.org.z;
            LODWORD(v59) = refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944);
            LODWORD(origin.v[2]) = (v59 * (v59 + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
            SND_SetListener(v4, LocalClientGlobals->predictedPlayerState.clientNum, &origin, &LocalClientGlobals->refdef.view.axis, &velocity);
            if ( v4 )
            {
              frametime = gameFrameDelta;
            }
            else
            {
              frametime = LocalClientGlobals->frametime;
              gameFrameDelta = frametime;
            }
            CG_SND_DetailStreamingPrioritizeForLocalClient(v4, LocalClientGlobals->predictedPlayerState.clientNum, &origin, &LocalClientGlobals->refdef.view.axis, &velocity, &LocalClientGlobals->predictedPlayerState);
            memset(&origin, 0, sizeof(origin));
          }
          ++v4;
          frontEndSceneState += 440;
        }
        while ( v4 < SLODWORD(cl_maxLocalClients) );
      }
      voiceAlloc = sdGlob.voiceAlloc;
      if ( !clientUIActives[0].frontEndSceneState[0] && CL_GetLocalClientAnyConnectionState(LOCAL_CLIENT_0) == CA_ACTIVE )
      {
        Sys_ProfBeginNamedEvent(0xFFD8BFD8, "wait_workers");
        Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
        Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
        Sys_ProfEndNamedEvent();
        CG_SND_UpdateReverbs(frametime);
        CG_SND_UpdateDoppler(frametime);
        CG_SND_EntStateFrame();
        SND_UpdateEntVolumes(frametime);
        v11 = 0;
        v12 = 0x7FFFFFFF;
        v13 = 0x7FFFFFFF;
        v14 = sdGlob.voiceAlloc;
        p_sndEnt = &g_snd.voices[0].sndEnt;
        do
        {
          if ( (unsigned int)v11 > 0x62 )
          {
            LODWORD(ps) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", ps) )
              __debugbreak();
          }
          if ( *v14 )
          {
            v16 = (unsigned __int8)(*(int *)(p_sndEnt[12] + 112) >> 10);
            if ( SND_IsEntChannel3D(v16) && g_snd.entChanOcclusionParams[v16][0].enabled )
            {
              if ( LOBYTE(g_snd.entChanFullOcclusionDisabled[18 * v16 - 4599]) )
              {
                if ( (*p_sndEnt & 0x1FFFFFFFFi64) != 2048 && (*p_sndEnt & 0x1000000000i64) != 0 && !SND_IsEntChannelPASpeaker(v16) )
                {
                  v17 = *((_DWORD *)p_sndEnt + 42);
                  if ( v17 <= g_snd.time && v17 < v13 )
                  {
                    v13 = *((_DWORD *)p_sndEnt + 42);
                    v12 = v11;
                  }
                }
              }
            }
          }
          ++v11;
          ++v14;
          p_sndEnt += 246;
        }
        while ( v11 < 99 );
        voiceAlloc = sdGlob.voiceAlloc;
        if ( v12 != 0x7FFFFFFF )
          SND_DoTracesWithDebug(&g_snd.voices[v12]);
        SND_BankDetailStreaming_Update();
      }
      v18 = DCONST_DVARINT_snd_draw3D;
      if ( !DCONST_DVARINT_snd_draw3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_draw3D") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.integer )
      {
        v19 = DCONST_DVARINT_snd_draw3D;
        if ( !DCONST_DVARINT_snd_draw3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_draw3D") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        DebugDrawWorldSounds(v19->current.integer);
      }
      v20 = 0;
      p_alias = &g_snd.voices[0].alias;
      do
      {
        if ( (unsigned int)v20 > 0x62 )
        {
          LODWORD(ps) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", ps) )
            __debugbreak();
        }
        if ( *voiceAlloc && *((_BYTE *)p_alias - 75) && (*p_alias)->subtitle )
        {
          SoundFileLengthMS = SND_GetSoundFileLengthMS((const SndAssetBankEntry *)p_alias[1]);
          for ( i = 0; i < 2; ++i )
          {
            if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
              CG_Utils_SubtitlePrint((const LocalClientNum_t)i, SoundFileLengthMS, *p_alias);
          }
          *((_BYTE *)p_alias - 75) = 0;
        }
        ++v20;
        ++voiceAlloc;
        p_alias += 246;
      }
      while ( v20 < 99 );
      v24 = s_notifiesCount;
      v25 = ((_BYTE)s_notifiesHead - (_BYTE)s_notifiesCount) & 0x1F;
      if ( s_notifiesCount > 0 )
      {
        v26 = (unsigned int)s_notifiesCount;
        do
        {
          CG_Utils_ScriptNotifySoundDone(s_notifies[v25].entnum, s_notifies[v25].soundString);
          v25 = ((_BYTE)v25 + 1) & 0x1F;
          --v26;
        }
        while ( v26 );
      }
      if ( ((unsigned __int8)&s_notifiesCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_notifiesCount) )
        __debugbreak();
      _InterlockedExchangeAdd(&s_notifiesCount, -v24);
      v27 = LOCAL_CLIENT_0;
      if ( SLODWORD(cl_maxLocalClients) > 0 )
      {
        p_playTimeFound = &g_ambGlob[0].playTimeFound;
        p_connectionState = &clientUIActives[0].connectionState;
        v58 = &clientUIActives[0].connectionState;
        do
        {
          if ( (unsigned int)v27 >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(v50) = 2;
            LODWORD(ps) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ps, v50) )
              __debugbreak();
            LODWORD(v52) = 2;
            LODWORD(psb) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", psb, v52) )
              __debugbreak();
          }
          if ( !*((_BYTE *)p_connectionState + 28) )
          {
            if ( (unsigned int)v27 >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v50) = 2;
              LODWORD(ps) = v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ps, v50) )
                __debugbreak();
            }
            if ( *p_connectionState == CA_ACTIVE )
            {
              v30 = Sys_Milliseconds() - g_snd.time;
              if ( !*p_playTimeFound )
              {
                SND_GetLengthMS(*((_DWORD *)p_playTimeFound - 3), &g_ambGlob[v27].playTime);
                v31 = *((_DWORD *)p_playTimeFound - 2);
                if ( v31 )
                {
                  *p_playTimeFound = 1;
                  if ( *(_QWORD *)(p_playTimeFound + 4) )
                    *((_DWORD *)p_playTimeFound - 1) += v31;
                }
              }
              if ( *((_DWORD *)p_playTimeFound - 2) > g_snd.time )
              {
                volume = *((float *)p_playTimeFound + 7);
                SndEntHandle = CG_GenerateSndEntHandle(v27, v27 + 4353);
                SND_SetEntityParamInfoData(SndEntHandle, NULL, &volume, 1000);
              }
              if ( g_snd.paused )
              {
                *((_DWORD *)p_playTimeFound - 1) += v30;
              }
              else
              {
                v33 = *(_QWORD *)(p_playTimeFound + 12);
                if ( v33 )
                {
                  if ( *(_QWORD *)(p_playTimeFound + 20) )
                  {
                    if ( g_snd.time > *((_DWORD *)p_playTimeFound - 1) )
                    {
                      if ( *(_WORD *)(v33 + 14) )
                      {
                        RandomElement = SND_AmbientEventGetRandomElement(v27);
                        if ( RandomElement )
                          SND_PlayAmbientElement(v27, RandomElement);
                      }
                    }
                  }
                }
              }
              if ( v27 == LOCAL_CLIENT_0 )
              {
                ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
                v56 = ControllerFromClient;
                v36 = (unsigned int)s_FXPlaySoundCount;
                v37 = ((_BYTE)s_FXPlaySoundHead - (_BYTE)s_FXPlaySoundCount) & 0x1F;
                if ( !SND_AnyActiveListeners() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4953, ASSERT_TYPE_ASSERT, "(SND_AnyActiveListeners())", (const char *)&queryFormat, "SND_AnyActiveListeners()") )
                  __debugbreak();
                if ( (unsigned int)v36 >= 0x20 )
                {
                  LODWORD(v50) = 32;
                  LODWORD(ps) = v36;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4954, ASSERT_TYPE_ASSERT, "(unsigned)( soundCount ) < (unsigned)( ( sizeof( *array_counter( s_FXPlaySounds ) ) + 0 ) )", "soundCount doesn't index ARRAY_COUNT( s_FXPlaySounds )\n\t%i not in [0, %i)", ps, v50) )
                    __debugbreak();
                }
                if ( (int)v36 > 0 )
                {
                  v38 = v36;
                  do
                  {
                    AliasFromId = SND_FindAliasFromId(s_FXPlaySounds[v37].aliasId);
                    SND_PlaySoundAlias(AliasFromId, (const LocalClientNum_t)s_FXPlaySounds[v37].localClientNum, s_FXPlaySounds[v37].entNum, &s_FXPlaySounds[v37].origin, 0, SASYS_CGAME);
                    v37 = ((_BYTE)v37 + 1) & 0x1F;
                    --v38;
                  }
                  while ( v38 );
                  ControllerFromClient = v56;
                  p_connectionState = v58;
                }
                if ( ((unsigned __int8)&s_FXPlaySoundCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_FXPlaySoundCount) )
                  __debugbreak();
                _InterlockedExchangeAdd(&s_FXPlaySoundCount, -(int)v36);
                SND_UpdateDelayedWeaponSoundQueue(gameFrameDelta, ControllerFromClient);
                CG_SND_WeapReflectUpdate();
              }
            }
          }
          ++v27;
          p_connectionState += 110;
          v58 = p_connectionState;
          p_playTimeFound += 48;
        }
        while ( v27 < SLODWORD(cl_maxLocalClients) );
      }
      v40 = DCONST_DVARINT_snd_debugStressTest;
      if ( !DCONST_DVARINT_snd_debugStressTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugStressTest") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( v40->current.integer )
      {
        v41 = DCONST_DVARINT_snd_debugStressTest;
        if ( !DCONST_DVARINT_snd_debugStressTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugStressTest") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v41);
        integer = v41->current.integer;
        if ( integer > 0 )
        {
          SND_GetListener(LOCAL_CLIENT_0, &outListener);
          if ( outListener.active )
          {
            for ( dword_155DF6A80 += Sys_Milliseconds() - g_snd.time; dword_155DF6A80 > integer; dword_155DF6A80 -= integer )
            {
              v43 = NULL;
              Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
              v44 = 1000;
              while ( 1 )
              {
                --v44;
                v45 = g_sb.bankStack[rand() % 800];
                if ( v45->bank )
                {
                  if ( v45->bankActive && v45->bank->aliasCount )
                    break;
                }
                if ( v44 <= 0 )
                  goto LABEL_148;
              }
              bank = v45->bank;
              v43 = &bank->alias[rand() % bank->aliasCount];
LABEL_148:
              Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
              if ( v43 )
                SND_PlaySoundAlias(v43, LOCAL_CLIENT_0, 2047, &outListener.orient.origin, 0, SASYS_CGAME);
            }
          }
        }
      }
      g_snd.numFullOcclusionCache = 0;
      CG_ClearAudioZoneCache();
      cls.inUpdateSound = 0;
      Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
      if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_DOOR_PROPAGATION) )
        Sys_AddWorkerCmd(WRKCMD_SOUND_DOOR_PROPAGATION, &data);
      Sys_AddWorkerCmd(WRKCMD_SOUND_DEFERRED_PLAYBACK, (char *)&data + 1);
      if ( SND_Active() && Com_DevhostSystemActive(3) )
        SND_PossiblyUpdate(15);
      g_snd.cgFrameUsec = Sys_Microseconds() - v60;
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
CG_SND_UpdateDoppler
==============
*/
void CG_SND_UpdateDoppler(int frameDelta)
{
  float v2; 
  int v3; 
  bool *voiceAlloc; 
  float *p_minPitch; 
  int v6; 
  float v7; 
  __int128 v8; 
  __int64 v11; 
  vec3_t outOrigin; 
  float v13; 
  __int64 v14; 
  snd_listener outListener; 

  if ( frameDelta > 0 )
  {
    v14 = -2i64;
    if ( SND_AnyActiveListeners() )
    {
      v2 = (float)frameDelta * 0.001;
      v13 = v2;
      if ( (LODWORD(v2) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7042, ASSERT_TYPE_ASSERT, "(!IS_NAN(frameTimeInSeconds))", (const char *)&queryFormat, "!IS_NAN(frameTimeInSeconds)") )
        __debugbreak();
      v3 = 0;
      voiceAlloc = sdGlob.voiceAlloc;
      p_minPitch = &g_snd.voices[0].dopplerPreset.minPitch;
      do
      {
        if ( (unsigned int)v3 > 0x62 )
        {
          LODWORD(v11) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v11) )
            __debugbreak();
        }
        if ( *voiceAlloc && SND_IsEntChannel3D((unsigned __int8)(*(int *)(*(_QWORD *)(p_minPitch - 435) + 112i64) >> 10)) )
        {
          SndVoice_GetOrigin((const SndVoice *)(p_minPitch - 463), &outOrigin);
          SND_GetListenerNearestToOrigin(&outOrigin, &outListener);
          if ( p_minPitch == (float *)76 )
          {
            MEMORY[0xFFFFFFFFFFFFFA08] = 1065353216;
          }
          else
          {
            v6 = *((_DWORD *)p_minPitch - 366);
            if ( v6 )
            {
              *(p_minPitch - 401) = 1.0;
              *((_DWORD *)p_minPitch - 366) = v6 - 1;
            }
            else
            {
              v7 = p_minPitch[2];
              v8 = LODWORD(outListener.velocityVect.v[0]);
              *(float *)&v8 = (float)((float)((float)(outListener.velocityVect.v[0] - (float)(outOrigin.v[0] - *(p_minPitch - 404))) * (float)(outOrigin.v[0] - outListener.orient.origin.v[0])) + (float)((float)(outListener.velocityVect.v[1] - (float)(outOrigin.v[1] - *(p_minPitch - 403))) * (float)(outOrigin.v[1] - outListener.orient.origin.v[1]))) + (float)((float)(outListener.velocityVect.v[2] - (float)(outOrigin.v[2] - *(p_minPitch - 402))) * (float)(outOrigin.v[2] - outListener.orient.origin.v[2]));
              _XMM4 = v8;
              __asm { vminss  xmm0, xmm4, xmm7 }
              *(double *)&_XMM0 = I_fclamp((float)(v2 * *(p_minPitch - 2)) / (float)((float)(v2 * *(p_minPitch - 2)) - *(float *)&_XMM0), *p_minPitch, p_minPitch[1]);
              *(p_minPitch - 401) = (float)((float)(v7 * *(p_minPitch - 401)) + *(float *)&_XMM0) / (float)(v7 + 1.0);
            }
            *(vec3_t *)(p_minPitch - 404) = outOrigin;
          }
        }
        ++v3;
        ++voiceAlloc;
        p_minPitch += 492;
      }
      while ( v3 < 99 );
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
}

/*
==============
CG_SND_UpdateReverbs
==============
*/
void CG_SND_UpdateReverbs(int frametime)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  double v5; 
  bool v6; 
  __int64 v7; 
  bool *voiceAlloc; 
  unsigned int v9; 
  unsigned int *p_propagationTriggerIndex; 
  unsigned int i; 
  int v12; 
  __int64 v13; 
  bool v14; 
  unsigned int roomTypeId; 
  unsigned int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  _BOOL8 v26; 
  __int64 v27; 
  __int64 v28; 
  const dvar_t *v29; 
  float value; 
  const dvar_t *v31; 
  float v32; 
  const dvar_t *v33; 
  float v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  int v44; 
  unsigned int PlayerAudioTriggerIndex; 
  unsigned int PlayerAudioBlendTriggerIndex; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  float *v50; 
  float v51; 
  unsigned int v52; 
  unsigned int *reverbTrigger; 
  float (*reverbPan)[64]; 
  vec3_t *reverbPosition; 
  unsigned int v56; 
  float v57; 
  __int64 v58; 
  float *v59; 
  __int64 v60; 
  unsigned int outTrigger1[2]; 
  ReverbDef *outReverbDef; 
  ReverbDef *v63; 
  ReverbDef *v64; 
  vec3_t delta; 
  vec3_t inOutPoint; 
  vec3_t outCenter; 
  vec3_t v68; 
  SndPropagationWorkerCmd cmd; 
  snd_listener outListener; 
  unsigned int triggerList[100]; 
  __int128 v72; 
  _OWORD v73[3]; 

  if ( g_snd.doPropagationRecalc )
  {
    SND_RecalcPropagation();
    g_snd.doPropagationRecalc = 0;
  }
  v5 = I_fclamp((float)((float)frametime * g_snd.mainReverbLerp.rateMS) + g_snd.mainReverbLerp.current, 0.0, 1.0);
  g_snd.mainReverbLerp.current = *(float *)&v5;
  SND_GetListener(LOCAL_CLIENT_0, &outListener);
  if ( !outListener.active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 13414, ASSERT_TYPE_ASSERT, "(listener.active)", (const char *)&queryFormat, "listener.active") )
    __debugbreak();
  outCenter.v[0] = 0.0;
  outCenter.v[1] = 0.0;
  outCenter.v[2] = 0.0;
  v68.v[0] = 0.0;
  v68.v[1] = 0.0;
  v68.v[2] = 0.0;
  v6 = 0;
  v64 = (ReverbDef *)Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_FarReverbs");
  v7 = 0i64;
  voiceAlloc = sdGlob.voiceAlloc;
  v9 = 0;
  p_propagationTriggerIndex = &g_snd.voices[0].propagationTriggerIndex;
  for ( i = 0; i < 0x63; ++i )
  {
    if ( *voiceAlloc && *p_propagationTriggerIndex != 1024 && SND_EntChannelFarReverbBehavior((unsigned __int8)(*(int *)(*((_QWORD *)p_propagationTriggerIndex - 13) + 112i64) >> 10)) )
    {
      v12 = 0;
      if ( v9 )
      {
        while ( triggerList[v12] != *p_propagationTriggerIndex )
        {
          if ( ++v12 >= v9 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v13 = v9++;
        triggerList[v13] = *p_propagationTriggerIndex;
      }
    }
    ++voiceAlloc;
    p_propagationTriggerIndex += 492;
  }
  v14 = 0;
  if ( v9 )
  {
    outReverbDef = NULL;
    v63 = NULL;
    CG_GetNearestTwoPropagationTriggers(outListener.localClientNum, &outListener.orient.origin, triggerList, v9, outTrigger1, &outTrigger1[1]);
    roomTypeId = 0;
    v16 = 0;
    CG_GetReverbDefForTrigger(outListener.localClientNum, outTrigger1[0], &outListener.orient.origin, (const ReverbDef **)&outReverbDef);
    v17 = -1;
    if ( outReverbDef )
      roomTypeId = outReverbDef->roomTypeId;
    if ( g_snd.farReverbIds[0] == roomTypeId )
    {
      v18 = 0;
    }
    else
    {
      v18 = -1;
      if ( g_snd.farReverbIds[1] == roomTypeId )
        v18 = 1;
    }
    if ( v9 <= 1 )
    {
      if ( v18 == -1 )
      {
        v26 = g_snd.farReverbTimestamp[0] >= g_snd.farReverbTimestamp[1];
        v27 = (unsigned int)(g_snd.farReverbTimestamp[0] >= g_snd.farReverbTimestamp[1]) + 2;
        g_snd.farReverbIds[v26] = roomTypeId;
        g_snd.reverbTrigger[v27] = outTrigger1[0];
        SND_SetReverbParams(roomTypeId, (ReverbDescriptor)v27, 1);
        g_snd.farReverbTimestamp[v26] = g_snd.time;
      }
      else
      {
        v28 = 3i64;
        g_snd.farReverbIds[v18] = roomTypeId;
        if ( !v18 )
          v28 = 2i64;
        g_snd.reverbTrigger[v28] = outTrigger1[0];
      }
      goto LABEL_52;
    }
    CG_GetReverbDefForTrigger(outListener.localClientNum, outTrigger1[1], &outListener.orient.origin, (const ReverbDef **)&v63);
    if ( v63 )
      v16 = v63->roomTypeId;
    if ( g_snd.farReverbIds[0] == v16 )
    {
      v17 = 0;
    }
    else if ( g_snd.farReverbIds[1] == v16 )
    {
      v17 = 1;
    }
    if ( v17 == v18 )
      v17 = v18 == 0;
    if ( v18 == -1 )
    {
      if ( v17 == -1 )
      {
        g_snd.reverbTrigger[2] = outTrigger1[0];
        g_snd.reverbTrigger[3] = outTrigger1[1];
        g_snd.farReverbIds[0] = roomTypeId;
        g_snd.farReverbIds[1] = v16;
        SND_SetReverbParams(roomTypeId, RVB_FAR_A, 1);
        SND_SetReverbParams(v16, RVB_FAR_B, 1);
        g_snd.farReverbTimestamp[0] = g_snd.time;
        g_snd.farReverbTimestamp[1] = g_snd.time;
        goto LABEL_52;
      }
      v19 = 0i64;
      if ( v17 != 1 )
        v19 = 1i64;
      v20 = (v17 != 1) + 2;
      v21 = outTrigger1[0];
      g_snd.farReverbIds[v19] = roomTypeId;
      g_snd.reverbTrigger[v20] = v21;
      v22 = roomTypeId;
    }
    else
    {
      if ( v17 != -1 )
      {
        v24 = (unsigned int)(v18 != 0) + 2;
        if ( g_snd.farReverbIds[v18] != roomTypeId )
        {
          SND_SetReverbParams(roomTypeId, (ReverbDescriptor)v24, 1);
          g_snd.farReverbIds[v18] = roomTypeId;
        }
        g_snd.reverbTrigger[v24] = outTrigger1[0];
        v25 = (unsigned int)(v17 != 0) + 2;
        if ( g_snd.farReverbIds[v17] != v16 )
        {
          SND_SetReverbParams(v16, (ReverbDescriptor)v25, 1);
          g_snd.farReverbIds[v17] = v16;
        }
        g_snd.reverbTrigger[v25] = outTrigger1[1];
        goto LABEL_52;
      }
      v19 = 0i64;
      if ( v18 != 1 )
        v19 = 1i64;
      v20 = (v18 != 1) + 2;
      v23 = outTrigger1[1];
      g_snd.farReverbIds[v19] = v16;
      g_snd.reverbTrigger[v20] = v23;
      v22 = v16;
    }
    SND_SetReverbParams(v22, (ReverbDescriptor)v20, 1);
    g_snd.farReverbTimestamp[v19] = g_snd.time;
LABEL_52:
    v73[1] = v1;
    v73[0] = v2;
    v72 = v3;
    if ( g_snd.reverbTrigger[2] == 1024 || !CG_GetTriggerCenter(outListener.localClientNum, g_snd.reverbTrigger[2], &outCenter) )
    {
      v14 = 0;
      memset_0(sdGlob.reverbPan[2], 0, sizeof(sdGlob.reverbPan[2]));
      sdGlob.reverbPan[2][0] = FLOAT_1_0;
      sdGlob.reverbPan[2][17] = FLOAT_1_0;
      sdGlob.reverbPan[2][36] = FLOAT_1_0;
      sdGlob.reverbPan[2][53] = FLOAT_1_0;
      g_snd.reverbPosition[2].v[0] = 0.0;
      g_snd.reverbPosition[2].v[1] = 0.0;
      g_snd.reverbPosition[2].v[2] = 0.0;
    }
    else
    {
      if ( g_snd.reverbTriggerOutputNumberA == g_snd.reverbTrigger[2] )
      {
        g_snd.reverbPosition[2] = g_snd.reverbPortalPropagationOutputA;
        delta.v[0] = g_snd.reverbPortalPropagationOutputA.v[0] - outListener.orient.origin.v[0];
        delta.v[2] = g_snd.reverbPortalPropagationOutputA.v[2] - outListener.orient.origin.v[2];
        delta.v[1] = g_snd.reverbPortalPropagationOutputA.v[1] - outListener.orient.origin.v[1];
        memset_0(sdGlob.reverbPan[2], 0, sizeof(sdGlob.reverbPan[2]));
        v29 = DCONST_DVARFLT_snd_farReverbSpreadMaxAngle;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMaxAngle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        value = v29->current.value;
        v31 = DCONST_DVARFLT_snd_farReverbSpreadMax;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        v32 = v31->current.value;
        v33 = DCONST_DVARFLT_snd_farReverbSpreadMax;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v33);
        v34 = v33->current.value;
        v35 = DCONST_DVARFLT_snd_farReverbSpreadMin;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMin") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        SND_Spatialize51(sdGlob.reverbPan[2], &delta, &outListener, 0.0, 2, 0, v35->current.value, v34, v32, value);
      }
      v14 = 1;
    }
    if ( g_snd.reverbTrigger[3] == 1024 || !CG_GetTriggerCenter(outListener.localClientNum, g_snd.reverbTrigger[3], &v68) )
    {
      v6 = 0;
      memset_0(sdGlob.reverbPan[3], 0, sizeof(sdGlob.reverbPan[3]));
      sdGlob.reverbPan[3][0] = FLOAT_1_0;
      sdGlob.reverbPan[3][17] = FLOAT_1_0;
      sdGlob.reverbPan[3][36] = FLOAT_1_0;
      sdGlob.reverbPan[3][53] = FLOAT_1_0;
      g_snd.reverbPosition[3].v[0] = 0.0;
      g_snd.reverbPosition[3].v[1] = 0.0;
      g_snd.reverbPosition[3].v[2] = 0.0;
    }
    else
    {
      if ( g_snd.reverbTriggerOutputNumberB == g_snd.reverbTrigger[3] )
      {
        g_snd.reverbPosition[3] = g_snd.reverbPortalPropagationOutputB;
        delta.v[0] = g_snd.reverbPortalPropagationOutputB.v[0] - outListener.orient.origin.v[0];
        delta.v[2] = g_snd.reverbPortalPropagationOutputB.v[2] - outListener.orient.origin.v[2];
        delta.v[1] = g_snd.reverbPortalPropagationOutputB.v[1] - outListener.orient.origin.v[1];
        memset_0(sdGlob.reverbPan[3], 0, sizeof(sdGlob.reverbPan[3]));
        v36 = DCONST_DVARFLT_snd_farReverbSpreadMaxAngle;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMaxAngle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        v37 = v36->current.value;
        v38 = DCONST_DVARFLT_snd_farReverbSpreadMax;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        v39 = v38->current.value;
        v40 = DCONST_DVARFLT_snd_farReverbSpreadMax;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v40);
        v41 = v40->current.value;
        v42 = DCONST_DVARFLT_snd_farReverbSpreadMin;
        if ( !DCONST_DVARFLT_snd_farReverbSpreadMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farReverbSpreadMin") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v42);
        SND_Spatialize51(sdGlob.reverbPan[3], &delta, &outListener, 0.0, 2, 0, v42->current.value, v41, v39, v37);
      }
      v6 = 1;
    }
  }
  if ( (v14 || v6) && !Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_PROPAGATION) )
  {
    v43 = DCONST_DVARINT_snd_debugPropagation;
    cmd.reverbTriggerInputNumberA = g_snd.reverbTrigger[2];
    cmd.runPropagationForReverbA = v14;
    cmd.runPropagationForReverbB = v6;
    cmd.reverbTriggerInputNumberB = g_snd.reverbTrigger[3];
    cmd.reverbListenerOrigin = outListener.orient.origin;
    cmd.reverbTriggerPropagationInputA = outCenter;
    cmd.reverbTriggerPropagationInputB = v68;
    if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    if ( v43->current.integer <= 0 )
      Sys_AddWorkerCmd(WRKCMD_SOUND_PROPAGATION, &cmd);
    else
      SND_UpdatePropagation(&cmd);
  }
  g_snd.updateFarReverbsUsec = Sys_Microseconds() - (_DWORD)v64;
  Sys_ProfEndNamedEvent();
  v44 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_PlayerReverbs");
  PlayerAudioTriggerIndex = CG_GetPlayerAudioTriggerIndex((const LocalClientNum_t)outListener.localClientNum);
  PlayerAudioBlendTriggerIndex = CG_GetPlayerAudioBlendTriggerIndex((const LocalClientNum_t)outListener.localClientNum);
  if ( CG_GetBlendedAudioTriggers(PlayerAudioBlendTriggerIndex, outTrigger1, &outTrigger1[1]) )
  {
    PlayerAudioTriggerIndex = outTrigger1[0];
  }
  else
  {
    outTrigger1[0] = PlayerAudioTriggerIndex;
    outTrigger1[1] = PlayerAudioTriggerIndex;
  }
  if ( PlayerAudioTriggerIndex == 1024 )
  {
    memset_0(sdGlob.reverbPan, 0, 0x200ui64);
    *(_OWORD *)g_snd.reverbPosition[0].v = 0i64;
    sdGlob.reverbPan[0][0] = FLOAT_1_0;
    sdGlob.reverbPan[0][17] = FLOAT_1_0;
    sdGlob.reverbPan[0][36] = FLOAT_1_0;
    sdGlob.reverbPan[0][53] = FLOAT_1_0;
    sdGlob.reverbPan[1][0] = FLOAT_1_0;
    sdGlob.reverbPan[1][17] = FLOAT_1_0;
    sdGlob.reverbPan[1][36] = FLOAT_1_0;
    sdGlob.reverbPan[1][53] = FLOAT_1_0;
    g_snd.reverbPosition[1].v[1] = 0.0;
    g_snd.reverbPosition[1].v[2] = 0.0;
    goto LABEL_129;
  }
  v63 = NULL;
  v64 = NULL;
  v47 = 4;
  CG_GetReverbDefForTrigger(outListener.localClientNum, PlayerAudioTriggerIndex, &outListener.orient.origin, (const ReverbDef **)&v63);
  if ( v63 )
    v48 = v63->roomTypeId;
  else
    v48 = 0;
  if ( sdGlob.currentReverbId[0] == v48 )
  {
    v47 = 0;
  }
  else
  {
    if ( sdGlob.currentReverbId[1] != v48 )
      goto LABEL_110;
    v47 = 1;
  }
  v49 = outTrigger1[0];
  g_snd.reverbTrigger[v47] = outTrigger1[0];
  v50 = sdGlob.reverbPan[(unsigned __int64)v47];
  memset_0(v50, 0, 0x100ui64);
  inOutPoint = outListener.orient.origin;
  if ( CG_GetWallProximityVolume(outListener.localClientNum, v49, &inOutPoint, (float *)&outReverbDef) )
  {
    CG_GetTriggerCenter(outListener.localClientNum, outTrigger1[0], &delta);
    delta.v[0] = delta.v[0] - inOutPoint.v[0];
    delta.v[2] = delta.v[2] - inOutPoint.v[2];
    delta.v[1] = delta.v[1] - inOutPoint.v[1];
    SND_SpatializeReverb(v50, &delta, &outListener, *(const float *)&outReverbDef);
    v51 = delta.v[1];
    g_snd.reverbPosition[v47].v[0] = delta.v[0];
    *(float *)&g_snd.reverbTrigger[3 * v47 - 10] = delta.v[2];
    *(float *)&g_snd.reverbTrigger[3 * v47 - 11] = v51;
  }
  else
  {
    *v50 = 1.0;
    *(_QWORD *)g_snd.reverbPosition[v47].v = 0i64;
    g_snd.reverbTrigger[3 * v47 - 10] = 0;
    v50[17] = 1.0;
    v50[36] = 1.0;
    v50[53] = 1.0;
  }
LABEL_110:
  if ( outTrigger1[0] == outTrigger1[1] )
  {
    v58 = 0i64;
    if ( !v47 )
      v58 = 1i64;
    v59 = sdGlob.reverbPan[v58];
    memset_0(sdGlob.reverbPan[v58], 0, sizeof(sdGlob.reverbPan[v58]));
    *v59 = 1.0;
    v60 = 0i64;
    v59[17] = 1.0;
    v59[36] = 1.0;
    v59[53] = 1.0;
    if ( !v47 )
      v60 = 1i64;
    *(_QWORD *)g_snd.reverbPosition[v60].v = 0i64;
    g_snd.reverbTrigger[3 * v60 - 10] = 0;
    if ( !v47 )
      v7 = 1i64;
    g_snd.reverbTrigger[v7] = 1024;
  }
  else
  {
    CG_GetReverbDefForTrigger(outListener.localClientNum, outTrigger1[1], &outListener.orient.origin, (const ReverbDef **)&v64);
    if ( v64 )
      v52 = v64->roomTypeId;
    else
      v52 = 0;
    if ( sdGlob.currentReverbId[0] == v52 )
    {
      reverbTrigger = g_snd.reverbTrigger;
      reverbPan = sdGlob.reverbPan;
      reverbPosition = g_snd.reverbPosition;
    }
    else
    {
      if ( sdGlob.currentReverbId[1] != v52 )
        goto LABEL_129;
      reverbTrigger = &g_snd.reverbTrigger[1];
      reverbPan = (float (*)[64])sdGlob.reverbPan[1];
      reverbPosition = &g_snd.reverbPosition[1];
    }
    v56 = outTrigger1[1];
    *reverbTrigger = outTrigger1[1];
    memset_0(reverbPan, 0, sizeof(float[64]));
    inOutPoint = outListener.orient.origin;
    if ( CG_GetWallProximityVolume(outListener.localClientNum, v56, &inOutPoint, (float *)&outReverbDef) )
    {
      CG_GetTriggerCenter(outListener.localClientNum, outTrigger1[1], &delta);
      delta.v[0] = delta.v[0] - inOutPoint.v[0];
      delta.v[2] = delta.v[2] - inOutPoint.v[2];
      delta.v[1] = delta.v[1] - inOutPoint.v[1];
      SND_SpatializeReverb((float *)reverbPan, &delta, &outListener, *(const float *)&outReverbDef);
      v57 = delta.v[1];
      reverbPosition->v[0] = delta.v[0];
      reverbPosition->v[2] = delta.v[2];
      reverbPosition->v[1] = v57;
    }
    else
    {
      *(_DWORD *)reverbPan = 1065353216;
      (*reverbPan)[17] = 1.0;
      (*reverbPan)[36] = 1.0;
      (*reverbPan)[53] = 1.0;
      *(_QWORD *)reverbPosition->v = 0i64;
      reverbPosition->v[2] = 0.0;
    }
  }
LABEL_129:
  g_snd.updatePlayerReverbUsec = Sys_Microseconds() - v44;
  Sys_ProfEndNamedEvent();
}

/*
==============
CheckIfClosestID
==============
*/
void CheckIfClosestID(int idx, const vec3_t *org, const orientation_t *listener, int *closestId, float *closestIdDotProd)
{
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v16; 

  if ( !closestId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8067, ASSERT_TYPE_ASSERT, "(closestId)", (const char *)&queryFormat, "closestId") )
    __debugbreak();
  if ( !closestIdDotProd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8068, ASSERT_TYPE_ASSERT, "(closestIdDotProd)", (const char *)&queryFormat, "closestIdDotProd") )
    __debugbreak();
  v9 = org->v[0] - listener->origin.v[0];
  v11 = LODWORD(org->v[1]);
  v10 = org->v[1] - listener->origin.v[1];
  v12 = org->v[2] - listener->origin.v[2];
  *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v12 * v12));
  _XMM4 = v11;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v16 = (float)((float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * listener->axis.m[0].v[1]) + (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * listener->axis.m[0].v[0])) + (float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * listener->axis.m[0].v[2]);
  if ( v16 > *closestIdDotProd )
  {
    *closestId = idx;
    *closestIdDotProd = v16;
  }
}

/*
==============
Com_GetSoundAliasSeed
==============
*/
__int64 Com_GetSoundAliasSeed()
{
  return (unsigned int)randSeed;
}

/*
==============
Com_GetSoundFileName
==============
*/
void Com_GetSoundFileName(const SndAlias *alias, char *filename, unsigned __int64 filenameSize)
{
  const char *assetFileName; 

  assetFileName = "null";
  if ( alias->assetFileName )
    assetFileName = alias->assetFileName;
  Core_strcpy(filename, filenameSize, assetFileName);
}

/*
==============
Com_GetSpeakerLevels
==============
*/
float *Com_GetSpeakerLevels(const SpeakerMap *speakerMap, int sourceChannelCount, int *outSpeakermapChannelCount)
{
  if ( g_snd.playback_channels < 16 )
  {
    if ( g_snd.playback_channels < 8 )
    {
      if ( g_snd.playback_channels == 6 )
      {
        *outSpeakermapChannelCount = 6;
        if ( sourceChannelCount == 2 )
          return speakerMap->stereoTo51;
        if ( sourceChannelCount == 1 )
          return speakerMap->monoTo51;
      }
      else if ( g_snd.playback_channels == 2 )
      {
        *outSpeakermapChannelCount = 2;
        if ( sourceChannelCount == 2 )
          return speakerMap->stereoToStereo;
        if ( sourceChannelCount == 1 )
          return speakerMap->monoToStereo;
      }
    }
    else
    {
      *outSpeakermapChannelCount = 8;
      if ( sourceChannelCount == 2 )
        return speakerMap->stereoTo71;
      if ( sourceChannelCount == 1 )
        return speakerMap->monoTo71;
    }
  }
  else
  {
    *outSpeakermapChannelCount = 16;
    if ( sourceChannelCount == 2 )
      return speakerMap->stereoTo7144;
    if ( sourceChannelCount == 1 )
      return speakerMap->monoTo7144;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14967, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid audio channel count") )
    __debugbreak();
  *outSpeakermapChannelCount = 0;
  return 0i64;
}

/*
==============
Com_SetSoundAliasSeed
==============
*/
void Com_SetSoundAliasSeed(int seed)
{
  randSeed = seed;
}

/*
==============
DebugDrawWorldSound3D
==============
*/
void DebugDrawWorldSound3D(int idx, int debugDrawStyle, EntityDebugDrawOffset *drawOffset, int *closestId, float *closestIdDotProd)
{
  __int64 v8; 
  SndVoice *v9; 
  float v10; 
  float v11; 
  unsigned __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 numEntIndices; 
  int v16; 
  float v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  vec3_t to; 
  vec3_t outListenerSpaceVoicePosition; 
  tmat33_t<vec3_t> outVoiceOrientation; 
  snd_listener outListener; 

  v8 = idx;
  if ( (unsigned int)idx > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8281, ASSERT_TYPE_ASSERT, "( ( ( idx >= 0 ) && ( idx < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) ) )", "( idx ) = %i", idx) )
    __debugbreak();
  v9 = &g_snd.voices[v8];
  if ( !v9->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8284, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  SND_CalcVoice3DInfo(&g_snd.voices[v8], &outListener, &outListenerSpaceVoicePosition, &outVoiceOrientation);
  GetSecureSndVec3(&v9->org.origin, &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
  v10 = fsqrt((float)((float)(outListenerSpaceVoicePosition.v[0] * outListenerSpaceVoicePosition.v[0]) + (float)(outListenerSpaceVoicePosition.v[1] * outListenerSpaceVoicePosition.v[1])) + (float)(outListenerSpaceVoicePosition.v[2] * outListenerSpaceVoicePosition.v[2]));
  if ( v10 >= 10.0 )
    v11 = v10 * 0.026249999;
  else
    v11 = FLOAT_0_75;
  v12 = v9->sndEnt & 0x1FFFFFFFFi64;
  v13 = 0;
  v14 = 0i64;
  if ( v12 - 5411 <= 0x1F || v12 - 2049 <= 0x8FF || v12 <= 0x7FD || v12 - 5571 <= 0x7A120 )
    v14 = v9->sndEnt & 0x1FFFFFFFFi64;
  if ( debugDrawStyle != 3 )
    CheckIfClosestID(v8, &to, &outListener.orient, closestId, closestIdDotProd);
  numEntIndices = drawOffset->numEntIndices;
  v16 = 0;
  v17 = to.v[2];
  if ( numEntIndices > 0 )
  {
    v18 = 0i64;
    while ( drawOffset->entIndices[v18] != v14 )
    {
      ++v16;
      if ( ++v18 >= numEntIndices )
        goto LABEL_23;
    }
    v13 = drawOffset->offsets[v16];
  }
LABEL_23:
  to.v[2] = to.v[2] + (float)v13;
  DebugDrawWorldSoundText(debugDrawStyle, v8, v14, &to, &outVoiceOrientation, v10);
  v19 = v9->sndEnt & 0x1FFFFFFFFi64;
  if ( v19 - 5411 <= 0x1F || v19 - 2049 <= 0x8FF || v19 <= 0x7FD || v19 - 5571 <= 0x7A120 )
    EntityDebugDrawOffset::SetOffset(drawOffset, v14, (int)(float)((float)(to.v[2] - v11) - v17));
}

/*
==============
DebugDrawWorldSoundPASpeaker
==============
*/
void DebugDrawWorldSoundPASpeaker(int idx, int debugDrawStyle, EntityDebugDrawOffset *drawOffset, int *closestId, float *closestIdDotProd)
{
  __int64 v6; 
  __int64 v7; 
  char *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int v12; 
  float *v13; 
  __int64 i; 
  signed int audioPASpeakerCount; 
  unsigned int v16; 
  unsigned int AliasEntChannelId; 
  unsigned int v18; 
  unsigned int entChannelHash; 
  AudioPASpeaker *audioPASpeakers; 
  vec3_t *v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned __int64 v25; 
  int v26; 
  MapEnts *mapEnts; 
  signed int v28; 
  int numEntIndices; 
  int v30; 
  int v31; 
  __int64 v32; 
  __int64 dist; 
  __int64 v34; 
  snd_listener outListener; 
  char v38[256]; 
  vec3_t origin[64]; 

  v6 = idx;
  if ( (unsigned int)idx > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8202, ASSERT_TYPE_ASSERT, "( ( ( idx >= 0 ) && ( idx < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) ) )", "( idx ) = %i", idx) )
    __debugbreak();
  v7 = v6;
  if ( !g_snd.voices[v6].alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8205, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  memset_0(v38, 0, sizeof(v38));
  memset_0(v38, 0, sizeof(v38));
  memset_0(origin, 0, sizeof(origin));
  v8 = v38;
  v9 = 4i64;
  do
  {
    v8 += 64;
    --v9;
  }
  while ( v9 );
  v10 = g_snd.voices[v7].sndEnt & 0x1FFFFFFFFi64;
  if ( v10 - 5411 > 0x1F && v10 - 2049 > 0x8FF && v10 > 0x7FD && v10 - 5571 > 0x7A120 )
    v10 = 0i64;
  v12 = 0;
  v13 = &origin[0].v[2];
  for ( i = 0i64; ; i += 4i64 )
  {
    if ( cm.mapEnts )
    {
      if ( cm.mapEnts->audioPASpeakerCount >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 532, ASSERT_TYPE_ASSERT, "(cm.mapEnts->audioPASpeakerCount < 64)", (const char *)&queryFormat, "cm.mapEnts->audioPASpeakerCount < AUDIO_PA_SPEAKERS_MAXSIZE") )
        __debugbreak();
      audioPASpeakerCount = cm.mapEnts->audioPASpeakerCount;
    }
    else
    {
      audioPASpeakerCount = 0;
    }
    if ( (int)v12 >= audioPASpeakerCount )
      break;
    if ( v12 >= 0x40 )
    {
      LODWORD(v34) = 64;
      LODWORD(dist) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", dist, v34) )
        __debugbreak();
    }
    v16 = g_snd.paSpeakerDisabledArray[(__int64)(int)v12 >> 5];
    if ( !_bittest((const int *)&v16, v12 & 0x1F) )
    {
      AliasEntChannelId = SND_GetAliasEntChannelId(g_snd.voices[v7].alias);
      if ( cm.mapEnts )
      {
        v18 = cm.mapEnts->audioPASpeakerCount;
        if ( v18 > v12 )
        {
          entChannelHash = cm.mapEnts->audioPASpeakers[v12].entChannelHash;
          if ( entChannelHash && entChannelHash != AliasEntChannelId )
            goto LABEL_64;
          if ( v18 > v12 )
          {
            audioPASpeakers = cm.mapEnts->audioPASpeakers;
            *(v13 - 2) = audioPASpeakers[v12].origin.v[0];
            *(v13 - 1) = audioPASpeakers[v12].origin.v[1];
            *v13 = audioPASpeakers[v12].origin.v[2];
          }
        }
      }
      v21 = &origin[v12];
      SND_GetListenerNearestToOrigin(v21, &outListener);
      v22 = *v13;
      v23 = fsqrt((float)((float)((float)(*(v13 - 1) - outListener.orient.origin.v[1]) * (float)(*(v13 - 1) - outListener.orient.origin.v[1])) + (float)((float)(*(v13 - 2) - outListener.orient.origin.v[0]) * (float)(*(v13 - 2) - outListener.orient.origin.v[0]))) + (float)((float)(*v13 - outListener.orient.origin.v[2]) * (float)(*v13 - outListener.orient.origin.v[2])));
      if ( v23 >= 10.0 )
        v24 = v23 * 0.0017500001;
      else
        v24 = FLOAT_0_050000001;
      if ( debugDrawStyle != 3 )
      {
        CheckIfClosestID(v6, v21, &outListener.orient, closestId, closestIdDotProd);
        v22 = *v13;
      }
      *v13 = (float)EntityDebugDrawOffset::GetOffset(drawOffset, v10) + v22;
      DebugDrawWorldSoundText(debugDrawStyle, v6, v10, v21, NULL, v23);
      v25 = g_snd.voices[v7].sndEnt & 0x1FFFFFFFFi64;
      if ( (v25 <= 0x7FD || v25 - 2049 <= 0x7AEE2) && (v25 < 0x1101 || v25 >= 0x1103 && v25 >= 0x1123 && v25 >= 0x1523) && (v25 < 0x1543 || v25 >= 0x15C3) )
      {
        v26 = (int)(float)((float)(*v13 - (float)(v24 * 15.0)) - v22) + EntityDebugDrawOffset::GetOffset(drawOffset, v10);
        mapEnts = cm.mapEnts;
        if ( cm.mapEnts )
        {
          if ( cm.mapEnts->audioPASpeakerCount >= 0x40 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 532, ASSERT_TYPE_ASSERT, "(cm.mapEnts->audioPASpeakerCount < 64)", (const char *)&queryFormat, "cm.mapEnts->audioPASpeakerCount < AUDIO_PA_SPEAKERS_MAXSIZE") )
              __debugbreak();
            mapEnts = cm.mapEnts;
          }
          v28 = mapEnts->audioPASpeakerCount;
        }
        else
        {
          v28 = 0;
        }
        numEntIndices = drawOffset->numEntIndices;
        v30 = v26 / v28;
        v31 = 0;
        v32 = 0i64;
        if ( numEntIndices <= 0 )
        {
LABEL_60:
          if ( (unsigned int)numEntIndices >= 0x63 )
          {
            LODWORD(v34) = 99;
            LODWORD(dist) = drawOffset->numEntIndices;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( numEntIndices ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "numEntIndices doesn't index SND_MAX_VOICES\n\t%i not in [0, %i)", dist, v34) )
              __debugbreak();
          }
          drawOffset->entIndices[drawOffset->numEntIndices] = v10;
          drawOffset->offsets[drawOffset->numEntIndices++] = v30;
        }
        else
        {
          while ( drawOffset->entIndices[v32] != v10 )
          {
            ++v31;
            ++v32;
            if ( v31 >= numEntIndices )
              goto LABEL_60;
          }
          drawOffset->offsets[v32] = v30;
        }
      }
    }
LABEL_64:
    ++v12;
    v13 += 3;
  }
}

/*
==============
DebugDrawWorldSoundText
==============
*/
void DebugDrawWorldSoundText(int debugDrawStyle, int idx, unsigned __int64 entIndex, vec3_t *org, const tmat33_t<vec3_t> *entityOrientation, float dist)
{
  __int64 v7; 
  __int64 v9; 
  unsigned __int64 v10; 
  bool v11; 
  vec4_t *v12; 
  const vec4_t *v13; 
  float v14; 
  int v15; 
  int v16; 
  float v17; 
  const char *v18; 
  unsigned __int64 v19; 
  float v20; 
  const char *EntChannelName; 
  const char *v22; 
  __int64 v23; 
  char *v24; 
  unsigned __int64 v25; 
  const char *assetFileName; 
  const SndAlias *alias; 
  unsigned __int64 v28; 
  const char *v29; 
  __int64 v30; 
  const char *v31; 
  double VoiceFractionPlayed; 
  const char *v33; 
  const char *v34; 
  float pitchOffsetAngle; 
  vec3_t vRotation; 
  vec3_t out; 
  vec3_t vIn; 
  char dest[256]; 

  v7 = idx;
  *(_QWORD *)vRotation.v = entIndex;
  if ( (unsigned int)idx > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8089, ASSERT_TYPE_ASSERT, "( ( ( idx >= 0 ) && ( idx < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) ) )", "( idx ) = %i", idx) )
    __debugbreak();
  v9 = v7;
  if ( !g_snd.voices[v7].alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8092, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  v10 = g_snd.voices[v9].sndEnt & 0x1FFFFFFFFi64;
  v11 = v10 - 5411 > 0x1F && v10 - 2049 > 0x8FF && v10 > 0x7FD && v10 - 5571 > 0x7A120;
  v12 = &colorGreen;
  if ( !v11 )
    v12 = &colorLtCyan;
  v13 = &colorRed;
  if ( g_snd.voices[v9].occlusionAmount <= 0.0 )
    v13 = v12;
  if ( dist >= 10.0 )
    v14 = dist * 0.0017500001;
  else
    v14 = FLOAT_0_050000001;
  v15 = debugDrawStyle - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v17 = v14 * 0.85000002;
        v18 = j_va("Alias: %s", g_snd.voices[v9].alias->aliasName);
        v19 = g_snd.voices[v9].sndEnt & 0x1FFFFFFFFi64;
        if ( v19 - 2046 <= 2 || v19 >= 0x7B6E4 || v19 - 4353 <= 0x421 || v19 - 5443 <= 0x7F )
          CL_AddDebugStarWithText(org, v13, &colorWhiteFaded, v18, v17, 0, 1, 0);
        else
          CL_AddDebugString(org, &colorWhiteFaded, v17, v18, 0, 1);
        v20 = v17 * 12.0;
        org->v[2] = org->v[2] - (float)(v17 * 12.0);
        EntChannelName = SND_GetEntChannelName(g_snd.chaninfoEntchannel[v7]);
        v22 = j_va("Mix Channel: %s", EntChannelName);
        CL_AddDebugString(org, &colorWhiteFaded, v17, v22, 0, 1);
        org->v[2] = org->v[2] - (float)(v17 * 12.0);
        strcpy(dest, "File: ");
        v23 = -1i64;
        do
          ++v23;
        while ( dest[v23] );
        v24 = &dest[v23];
        v25 = 256 - v23;
        assetFileName = "null";
        alias = g_snd.voices[v9].alias;
        if ( alias->assetFileName )
          assetFileName = alias->assetFileName;
        Core_strcpy(v24, v25, assetFileName);
        CL_AddDebugString(org, &colorWhiteFaded, v17, dest, 0, 1);
        v28 = g_snd.voices[v9].sndEnt & 0x1FFFFFFFFi64;
        if ( v28 - 5411 <= 0x1F || v28 - 2049 <= 0x8FF || v28 <= 0x7FD || v28 - 5571 <= 0x7A120 )
        {
          v30 = *(_QWORD *)vRotation.v;
          org->v[2] = org->v[2] - v20;
          v29 = j_va("Owner: entity #%zu", v30);
        }
        else
        {
          org->v[2] = org->v[2] - v20;
          v29 = j_va("Owner: World");
        }
        CL_AddDebugString(org, &colorWhiteFaded, v17, v29, 0, 1);
        org->v[2] = org->v[2] - v20;
        v31 = j_va("Distance: %.0f / %.0f", dist, g_snd.voices[v9].alias->distMax);
        CL_AddDebugString(org, &colorWhiteFaded, v17, v31, 0, 1);
        org->v[2] = org->v[2] - v20;
        VoiceFractionPlayed = SND_GetVoiceFractionPlayed(v7, 0);
        v33 = j_va("Played: %.1f%%", (float)(*(float *)&VoiceFractionPlayed * 100.0));
        CL_AddDebugString(org, &colorWhiteFaded, v17, v33, 0, 1);
        if ( g_snd.voices[v9].occlusionAmount > 0.0 )
        {
          org->v[2] = org->v[2] - v20;
          v34 = j_va("OCCLUDED: %.2f%%", (float)(g_snd.voices[v9].occlusionAmount * 100.0));
          CL_AddDebugString(org, &colorWhiteFaded, v17, v34, 0, 1);
        }
      }
      return;
    }
    CL_AddDebugString(org, &colorWhiteFaded, v14, g_snd.voices[v9].alias->aliasName, 0, 1);
  }
  CL_AddDebugStar(org, v13, 0, 1, 0);
  if ( g_snd.voices[v9].alias && (snd_local_t *)((char *)&g_snd + v9 * 1968) != (snd_local_t *)-53624i64 && g_snd.voices[v9].occlusionShape.id != g_snd.defaultHash )
  {
    if ( !entityOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8123, ASSERT_TYPE_ASSERT, "(entityOrientation)", (const char *)&queryFormat, "entityOrientation") )
      __debugbreak();
    pitchOffsetAngle = g_snd.voices[v9].occlusionShape.pitchOffsetAngle;
    vRotation.v[2] = g_snd.voices[v9].occlusionShape.yawOffsetAngle;
    _XMM0 = LODWORD(FLOAT_1_0);
    __asm { vunpcklps xmm0, xmm0, xmm8 }
    vIn.v[2] = 0.0;
    *(double *)vIn.v = *(double *)&_XMM0;
    vRotation.v[1] = pitchOffsetAngle;
    vRotation.v[0] = 0.0;
    VectorRotateAngles(&vIn, &vRotation, &out);
    AxisTransformVec3(entityOrientation, &out, &out);
    DrawArrow(org, &out);
  }
}

/*
==============
DebugDrawWorldSounds
==============
*/
void DebugDrawWorldSounds(int debugDrawStyle)
{
  int v2; 
  bool *voiceAlloc; 
  const SndAlias **p_alias; 
  unsigned int v5; 
  int v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  __int64 depthTest; 
  int closestId; 
  float closestIdDotProd[3]; 
  EntityDebugDrawOffset drawOffset; 

  memset_0(&drawOffset, 0, 0x4A4ui64);
  drawOffset.numEntIndices = 0;
  if ( !g_snd.driverInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8324, ASSERT_TYPE_ASSERT, "(g_snd.driverInitialized)", (const char *)&queryFormat, "g_snd.driverInitialized") )
    __debugbreak();
  v2 = 0;
  closestId = -1;
  closestIdDotProd[0] = FLOAT_N2_0;
  voiceAlloc = sdGlob.voiceAlloc;
  p_alias = &g_snd.voices[0].alias;
  do
  {
    if ( (unsigned int)v2 > 0x62 )
    {
      LODWORD(depthTest) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", depthTest) )
        __debugbreak();
    }
    if ( *voiceAlloc )
    {
      if ( !*p_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8334, ASSERT_TYPE_ASSERT, "(g_snd.voices[voiceIdx].alias)", (const char *)&queryFormat, "g_snd.voices[voiceIdx].alias") )
        __debugbreak();
      v5 = (unsigned __int8)((*p_alias)->flags >> 10);
      if ( SND_IsEntChannel3D(v5) && (snd_drawOnlyChannel == -1 || snd_drawOnlyChannel == v5) )
      {
        if ( SND_IsEntChannelPASpeaker((unsigned __int8)((*p_alias)->flags >> 10)) )
          DebugDrawWorldSoundPASpeaker(v2, debugDrawStyle, &drawOffset, &closestId, closestIdDotProd);
        else
          DebugDrawWorldSound3D(v2, debugDrawStyle, &drawOffset, &closestId, closestIdDotProd);
      }
    }
    ++v2;
    ++voiceAlloc;
    p_alias += 246;
  }
  while ( v2 < 99 );
  v6 = closestId;
  if ( closestId != -1 && closestIdDotProd[0] >= 0.93000001 )
  {
    if ( SND_IsEntChannelPASpeaker((unsigned __int8)(*(int *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * closestId - 48680] + 112i64) >> 10)) )
      DebugDrawWorldSoundPASpeaker(v6, 3, &drawOffset, NULL, NULL);
    else
      DebugDrawWorldSound3D(v6, 3, &drawOffset, NULL, NULL);
  }
  v7 = FLOAT_0_050000001;
  if ( g_snd.reverbTriggerOutputNumberA != 1024 )
  {
    v8 = SND_DistSqToNearestListener(&g_snd.reverbPosition[2]);
    if ( *(float *)&v8 >= 10.0 )
      v9 = *(float *)&v8 * 0.0017500001;
    else
      v9 = FLOAT_0_050000001;
    CL_AddDebugStarWithText(&g_snd.reverbPosition[2], &colorYellow, &colorWhiteFaded, "Far Reverb A", v9, 0, 1, 0);
  }
  if ( g_snd.reverbTriggerOutputNumberB != 1024 )
  {
    v10 = SND_DistSqToNearestListener(&g_snd.reverbPosition[3]);
    if ( *(float *)&v10 >= 10.0 )
      v7 = *(float *)&v10 * 0.0017500001;
    CL_AddDebugStarWithText(&g_snd.reverbPosition[3], &colorYellow, &colorWhiteFaded, "Far Reverb B", v7, 0, 1, 0);
  }
}

/*
==============
FindDominantContextType
==============
*/
char FindDominantContextType(const unsigned int contextType, const ZoneDef *zoneA, const ZoneDef *zoneB, const float zoneLerp, const SndEntState *entState, unsigned int *outContextValueA, unsigned int *outContextValueB, float *outLerp)
{
  unsigned int v11; 
  const SndEntState *v12; 
  int ContextIndex; 
  unsigned int v14; 
  float current; 
  __int64 v17; 
  float v18; 
  int v19; 
  double v20; 
  unsigned int v21; 
  unsigned int contextValue1; 
  unsigned int contextValue2; 
  unsigned int contextValue3; 

  if ( entState )
  {
    v11 = 0;
    v12 = entState;
    while ( v12->contextTypes[0] != contextType )
    {
      ++v11;
      v12 = (const SndEntState *)((char *)v12 + 4);
      if ( v11 >= 3 )
        goto LABEL_5;
    }
    v17 = (int)v11;
    v18 = FLOAT_1_0;
    v19 = entState->contextFadeLength[v11];
    if ( v19 > 0 )
    {
      v20 = I_fclamp((float)(entState->contextFadeTime[v11] - g_snd.time) / (float)v19, 0.0, 1.0);
      v18 = 1.0 - *(float *)&v20;
    }
    v21 = entState->contextValuesTo[v17];
    if ( v21 || v18 != 1.0 && entState->contextValuesFrom[v17] )
    {
      *outContextValueA = entState->contextValuesFrom[v17];
      *outContextValueB = v21;
      *outLerp = v18;
      return 1;
    }
  }
LABEL_5:
  ContextIndex = SND_FindContextIndex(contextType);
  if ( ContextIndex >= 0 )
  {
    v14 = g_snd.globalContextsTo[ContextIndex];
    if ( v14 || 1.0 != g_snd.globalContextLerp[ContextIndex].current && g_snd.globalContextsFrom[ContextIndex] )
    {
      current = g_snd.globalContextLerp[ContextIndex].current;
      *outContextValueA = g_snd.globalContextsFrom[ContextIndex];
      *outContextValueB = v14;
      *outLerp = current;
      return 1;
    }
  }
  if ( zoneLerp == 0.0 )
  {
    if ( zoneA )
    {
      if ( zoneA->contextType1 == contextType )
      {
        contextValue1 = zoneA->contextValue1;
LABEL_26:
        *outContextValueA = contextValue1;
        *outContextValueB = contextValue1;
        *outLerp = 0.0;
        return 1;
      }
      if ( zoneA->contextType2 == contextType )
      {
        contextValue1 = zoneA->contextValue2;
        goto LABEL_26;
      }
      if ( zoneA->contextType3 == contextType )
      {
        contextValue1 = zoneA->contextValue3;
        goto LABEL_26;
      }
      if ( zoneA->contextType4 == contextType )
      {
        contextValue1 = zoneA->contextValue4;
        goto LABEL_26;
      }
    }
    goto LABEL_56;
  }
  if ( zoneLerp == 1.0 )
  {
    if ( zoneB )
    {
      if ( zoneB->contextType1 == contextType )
      {
        contextValue1 = zoneB->contextValue1;
        goto LABEL_26;
      }
      if ( zoneB->contextType2 == contextType )
      {
        contextValue1 = zoneB->contextValue2;
        goto LABEL_26;
      }
      if ( zoneB->contextType3 == contextType )
      {
        contextValue1 = zoneB->contextValue3;
        goto LABEL_26;
      }
      if ( zoneB->contextType4 == contextType )
      {
        contextValue1 = zoneB->contextValue4;
        goto LABEL_26;
      }
    }
    goto LABEL_56;
  }
  if ( zoneA )
  {
    if ( zoneA->contextType1 == contextType )
    {
      contextValue2 = zoneA->contextValue1;
    }
    else if ( zoneA->contextType2 == contextType )
    {
      contextValue2 = zoneA->contextValue2;
    }
    else if ( zoneA->contextType3 == contextType )
    {
      contextValue2 = zoneA->contextValue3;
    }
    else
    {
      if ( zoneA->contextType4 != contextType )
        goto LABEL_56;
      contextValue2 = zoneA->contextValue4;
    }
    if ( zoneB )
    {
      if ( zoneB->contextType1 == contextType )
      {
        contextValue3 = zoneB->contextValue1;
LABEL_55:
        *outContextValueA = contextValue2;
        *outContextValueB = contextValue3;
        *outLerp = zoneLerp;
        return 1;
      }
      if ( zoneB->contextType2 == contextType )
      {
        contextValue3 = zoneB->contextValue2;
        goto LABEL_55;
      }
      if ( zoneB->contextType3 == contextType )
      {
        contextValue3 = zoneB->contextValue3;
        goto LABEL_55;
      }
      if ( zoneB->contextType4 == contextType )
      {
        contextValue3 = zoneB->contextValue4;
        goto LABEL_55;
      }
    }
  }
LABEL_56:
  *outContextValueA = 0;
  *outContextValueB = 0;
  *outLerp = 0.0;
  return 0;
}

/*
==============
FindDominantContextTypeNoBlend
==============
*/
__int64 FindDominantContextTypeNoBlend(const unsigned int contextType, const ZoneDef *zone, const SndEntState *entState)
{
  unsigned int v6; 
  const SndEntState *v7; 
  int ContextIndex; 
  __int64 v9; 
  __int64 result; 
  __int64 v11; 
  float v12; 
  int v13; 
  double v14; 

  if ( !entState )
    goto LABEL_5;
  v6 = 0;
  v7 = entState;
  while ( v7->contextTypes[0] != contextType )
  {
    ++v6;
    v7 = (const SndEntState *)((char *)v7 + 4);
    if ( v6 >= 3 )
      goto LABEL_5;
  }
  v11 = (int)v6;
  v12 = FLOAT_1_0;
  v13 = entState->contextFadeLength[v6];
  if ( v13 > 0 )
  {
    v14 = I_fclamp((float)(entState->contextFadeTime[v6] - g_snd.time) / (float)v13, 0.0, 1.0);
    v12 = 1.0 - *(float *)&v14;
  }
  result = entState->contextValuesTo[v11];
  if ( (_DWORD)result || v12 != 1.0 && entState->contextValuesFrom[v11] )
  {
    if ( v12 < 0.5 )
      return entState->contextValuesFrom[v11];
  }
  else
  {
LABEL_5:
    ContextIndex = SND_FindContextIndex(contextType);
    if ( ContextIndex >= 0 && ((v9 = ContextIndex, result = g_snd.globalContextsTo[ContextIndex], (_DWORD)result) || 1.0 != g_snd.globalContextLerp[v9].current && g_snd.globalContextsFrom[v9]) )
    {
      if ( g_snd.globalContextLerp[v9].current < 0.5 )
        return g_snd.globalContextsFrom[v9];
    }
    else
    {
      if ( !zone )
        return 0i64;
      if ( zone->contextType1 == contextType )
        return zone->contextValue1;
      if ( zone->contextType2 == contextType )
        return zone->contextValue2;
      if ( zone->contextType3 == contextType )
        return zone->contextValue3;
      if ( zone->contextType4 == contextType )
        return zone->contextValue4;
      else
        return 0i64;
    }
  }
  return result;
}

/*
==============
EntityDebugDrawOffset::GetOffset
==============
*/
__int64 EntityDebugDrawOffset::GetOffset(EntityDebugDrawOffset *this, unsigned __int64 entIndex)
{
  __int64 numEntIndices; 
  int v3; 
  __int64 v4; 

  numEntIndices = this->numEntIndices;
  v3 = 0;
  if ( numEntIndices <= 0 )
    return 0i64;
  v4 = 0i64;
  while ( this->entIndices[v4] != entIndex )
  {
    ++v3;
    if ( ++v4 >= numEntIndices )
      return 0i64;
  }
  return (unsigned int)this->offsets[v3];
}

/*
==============
GetSoundEntityOrientation
==============
*/
void GetSoundEntityOrientation(LocalClientNum_t localClientNum, int entIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  __int64 v4; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  const cpose_t *PoseExtended; 
  CgPredictedEntitySystem *System; 
  __int64 v14; 
  __int64 v15; 

  v4 = localClientNum;
  if ( entIndex < 2049 )
    goto LABEL_7;
  if ( entIndex < 3329 )
  {
    v8 = 1;
    goto LABEL_12;
  }
  if ( entIndex >= 4353 )
  {
LABEL_7:
    if ( (unsigned int)(entIndex - 5411) > 0x1F )
    {
      v8 = 0;
      if ( entIndex >= 5571 && entIndex < 505571 )
        v8 = 4;
    }
    else
    {
      v8 = 3;
    }
  }
  else
  {
    v8 = 2;
  }
LABEL_12:
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          ScriptableCl_GetInstanceOrientation(localClientNum, entIndex - 5571, origin_out, axis_out);
        }
        else
        {
          PoseExtended = CG_GetPoseExtended(localClientNum, entIndex, 0);
          CG_GetPoseOrigin(PoseExtended, origin_out);
          AnglesToAxis(&PoseExtended->angles, axis_out);
        }
      }
      else
      {
        System = CgPredictedEntitySystem::GetSystem(localClientNum);
        CgPredictedEntitySystem::CopyEntityOrientation(System, entIndex - 5411, origin_out, axis_out);
      }
    }
    else
    {
      CL_CopySoundInfoOrientation(entIndex - 3329, origin_out, axis_out);
    }
  }
  else
  {
    if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
      __debugbreak();
    if ( (unsigned int)v4 >= CgClientSideEffectsSystem::ms_allocatedCount )
    {
      LODWORD(v15) = CgClientSideEffectsSystem::ms_allocatedCount;
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v4] )
    {
      LODWORD(v15) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v15) )
        __debugbreak();
    }
    CgClientSideEffectsSystem::CopySoundEntityOrientation(CgClientSideEffectsSystem::ms_cseSystemArray[v4], entIndex - 2049, origin_out, axis_out);
  }
}

/*
==============
GetSoundEntityType
==============
*/
EnumSndType GetSoundEntityType(const LocalClientNum_t localClientNum, const int entIndex)
{
  EnumSndType result; 

  if ( entIndex < 2049 )
    goto LABEL_7;
  if ( entIndex < 3329 )
    return 1;
  if ( entIndex < 4353 )
    return 2;
LABEL_7:
  if ( (unsigned int)(entIndex - 5411) <= 0x1F )
    return 3;
  result = EST_DEFAULT_ENT;
  if ( (unsigned int)(entIndex - 5571) <= 0x7A11F )
    return 4;
  return result;
}

/*
==============
InRange
==============
*/
char InRange(const SndAlias *alias, const vec3_t *org)
{
  float distMax; 
  float distMin; 
  float v6; 
  bool v7; 
  const dvar_t *v8; 
  const char *v9; 
  unsigned int v10; 
  float v11; 
  float v12; 
  float v13; 
  int v14; 
  __int64 v15; 
  double v16; 
  __int64 v17; 
  bool IsFullyAudioOccluded; 
  snd_listener outListener; 
  char v21[24]; 

  if ( !SND_IsEntChannel3D((unsigned __int8)(alias->flags >> 10)) || SND_IsEntChannelPASpeaker((unsigned __int8)(alias->flags >> 10)) || alias->assetId == g_snd.cinematicAssetId )
    return 1;
  distMax = alias->distMax;
  distMin = alias->distMin;
  SND_GetListenerNearestToOrigin(org, &outListener);
  v6 = (float)((float)((float)(outListener.orient.origin.v[1] - org->v[1]) * (float)(outListener.orient.origin.v[1] - org->v[1])) + (float)((float)(outListener.orient.origin.v[0] - org->v[0]) * (float)(outListener.orient.origin.v[0] - org->v[0]))) + (float)((float)(outListener.orient.origin.v[2] - org->v[2]) * (float)(outListener.orient.origin.v[2] - org->v[2]));
  if ( outListener.velocity < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4001, ASSERT_TYPE_ASSERT, "(listener.velocity >= 0.0f)", (const char *)&queryFormat, "listener.velocity >= 0.0f") )
    __debugbreak();
  v7 = ((alias->flags & 0x70) == 0 || v6 >= (float)(distMin * distMin)) && v6 <= (float)(distMax * distMax) && outListener.velocity >= alias->velocityMin;
  v8 = DCONST_DVARSTR_snd_debugAlias;
  if ( !DCONST_DVARSTR_snd_debugAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugAlias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( *(_BYTE *)v8->current.integer64 )
  {
    v9 = j_va("Not playing, sound has 0 volume.  dist = %.2f, min = %.2f, max = %.2f.  velocity = %.2f, min = %.2f", fsqrt(v6), distMin, distMax, outListener.velocity, alias->velocityMin);
    SND_DebugAliasPrint(!v7, alias, v9);
  }
  if ( v7 )
  {
    v10 = g_snd.entChanFullOcclusionDisabled[(unsigned __int64)(unsigned __int8)(alias->flags >> 10) >> 5];
    if ( !_bittest((const int *)&v10, (alias->flags >> 10) & 0x1F) )
    {
      *(float *)v21 = outListener.orient.origin.v[0];
      *(float *)&v21[4] = outListener.orient.origin.v[1];
      v11 = org->v[0];
      *(float *)&v21[8] = outListener.orient.origin.v[2];
      v12 = org->v[1];
      *(float *)&v21[12] = v11;
      v13 = org->v[2];
      v14 = 0;
      *(float *)&v21[16] = v12;
      *(float *)&v21[20] = v13;
      if ( g_snd.numFullOcclusionCache <= 0 )
      {
LABEL_25:
        IsFullyAudioOccluded = CG_IsFullyAudioOccluded((const LocalClientNum_t)outListener.localClientNum, &outListener.orient.origin, org, alias);
        if ( (unsigned __int64)g_snd.numFullOcclusionCache < 0x20 )
        {
          v16 = *(double *)&v21[16];
          v17 = g_snd.numFullOcclusionCache++;
          *(_OWORD *)g_snd.fullOcclusionCache[v17].key.listener.v = *(_OWORD *)v21;
          *(double *)&g_snd.fullOcclusionCache[v17].key.emitter.y = v16;
          g_snd.fullOcclusionCache[v17].occluded = IsFullyAudioOccluded;
        }
      }
      else
      {
        while ( 1 )
        {
          v15 = v14;
          if ( *(_QWORD *)g_snd.fullOcclusionCache[v15].key.listener.v == *(_QWORD *)v21 && *(_OWORD *)&g_snd.fullOcclusionCache[v15].key.listener.z == *(_OWORD *)&v21[8] )
            break;
          if ( ++v14 >= g_snd.numFullOcclusionCache )
            goto LABEL_25;
        }
        IsFullyAudioOccluded = g_snd.fullOcclusionCache[v14].occluded;
      }
      v7 = !IsFullyAudioOccluded;
      if ( *Dvar_GetString_Internal_DebugName(DCONST_DVARSTR_snd_debugAlias, "snd_debugAlias") )
        SND_DebugAliasPrint(IsFullyAudioOccluded, alias, "Not playing, sound was blocked by full occluder");
    }
  }
  return v7;
}

/*
==============
SNDL_Shutdown
==============
*/
void SNDL_Shutdown(void)
{
  Voice_Shutdown();
  SND_StopSounds(SND_STOP_ALL);
  SND_StopSounds(SND_STOP_ALL);
  SD_Shutdown();
  g_snd.driverInitialized = 0;
  Cmd_RemoveCommand("snd_playLocal");
  Cmd_RemoveCommand("snd_setEq");
  Cmd_RemoveCommand("snd_setEqFreq");
  Cmd_RemoveCommand("snd_setEqGain");
  Cmd_RemoveCommand("snd_setEqQ");
  Cmd_RemoveCommand("snd_setEqType");
  Cmd_RemoveCommand("snd_deactivateEq");
  Cmd_RemoveCommand("snd_setAliasValue");
}

/*
==============
SND_AbsoluteToFractionalPosition
==============
*/
float SND_AbsoluteToFractionalPosition(unsigned __int64 absPosition, bool wrap, int totalSamples)
{
  unsigned __int64 v3; 
  unsigned __int64 v6; 

  v3 = totalSamples;
  if ( totalSamples <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1278, ASSERT_TYPE_ASSERT, "( ( totalSamples > 0 ) )", "( totalSamples ) = %i", totalSamples) )
    __debugbreak();
  if ( wrap )
    v6 = absPosition % v3;
  else
    LODWORD(v6) = truncate_cast<int,unsigned __int64>(absPosition);
  return (float)(int)v6 / (float)(int)v3;
}

/*
==============
SND_AcquirePlaybackId
==============
*/
unsigned int SND_AcquirePlaybackId(int index, int totalMsec)
{
  __int64 v2; 
  SndVoice *v3; 
  unsigned int playbackIdCounter; 
  unsigned int result; 

  v2 = index;
  if ( (unsigned int)index > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3068, ASSERT_TYPE_ASSERT, "(index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "index >= 0 && index < SND_MAX_VOICES") )
    __debugbreak();
  v3 = &g_snd.voices[v2];
  if ( v3->soundFileInfo.loadingState == SFLS_UNLOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3072, ASSERT_TYPE_ASSERT, "(voice->soundFileInfo.loadingState != SFLS_UNLOADED)", (const char *)&queryFormat, "voice->soundFileInfo.loadingState != SFLS_UNLOADED") )
    __debugbreak();
  if ( !v3->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3073, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  playbackIdCounter = g_snd.playbackIdCounter;
  if ( g_snd.playbackIdCounter > 0x7FFFFFFF )
    playbackIdCounter = 1;
  g_snd.playbackIdCounter = playbackIdCounter;
  result = playbackIdCounter;
  if ( (v3->alias->flags & 1) != 0 )
  {
    result = playbackIdCounter | 0x80000000;
    g_snd.playbackIdCounter = playbackIdCounter + 1;
    v3->playbackId = playbackIdCounter | 0x80000000;
  }
  else
  {
    g_snd.playbackIdCounter = playbackIdCounter + 1;
    v3->playbackId = playbackIdCounter;
  }
  return result;
}

/*
==============
SND_AddImpactToBulletEvent
==============
*/
void SND_AddImpactToBulletEvent(const int bulletEventId, const LocalClientNum_t localClientNum, const WeaponSFXPackage *sfxPackage, const vec3_t *inShooterPos, const vec3_t *inImpactPos, int impactEnt, const SndAliasList *impactSound, int surfaceType, const int hitImpactDelayOverride, SndHitmarkerType hitmarkerType)
{
  __int64 v13; 
  const SndWhizby *Whizby; 
  float v15; 
  float v16; 
  float v17; 

  if ( bulletEventId >= 0 && (unsigned int)bulletEventId < 0x40 )
  {
    v13 = (__int64)bulletEventId << 7;
    Whizby = SND_GetWhizby(sfxPackage);
    v15 = inImpactPos->v[1] - inShooterPos->v[1];
    v16 = inImpactPos->v[2] - inShooterPos->v[2];
    v17 = fsqrt((float)((float)(v15 * v15) + (float)((float)(inImpactPos->v[0] - inShooterPos->v[0]) * (float)(inImpactPos->v[0] - inShooterPos->v[0]))) + (float)(v16 * v16));
    if ( hitImpactDelayOverride < 0 )
    {
      *(int *)((char *)&g_snd.delayedBulletEvents[0].impactDelay + v13) = (int)(float)((float)(1000.0 / Whizby->speedOfSound) * v17);
    }
    else
    {
      *(int *)((char *)&g_snd.delayedBulletEvents[0].impactDelay + v13) = hitImpactDelayOverride;
      if ( surfaceType != 29 )
        *(&g_snd.delayedBulletEvents[0].playHitMarkerSoundDuringImpact + v13) = 1;
      *(SndHitmarkerType *)((char *)&g_snd.delayedBulletEvents[0].hitmarkerType + v13) = hitmarkerType;
    }
    *(int *)((char *)&g_snd.delayedBulletEvents[0].impactSurfType + v13) = surfaceType;
    *(unsigned int *)((char *)&g_snd.delayedBulletEvents[0].explosionReflectionType + v13) = sfxPackage->projExplosionReflClass;
    *(unsigned __int64 *)((char *)&g_snd.delayedBulletEvents[0].impactSndEnt + v13) = CG_GenerateSndEntHandle(localClientNum, impactEnt);
    *(vec3_t *)((char *)&g_snd.delayedBulletEvents[0].impactPos + v13) = *inImpactPos;
    *(const SndAliasList **)((char *)&g_snd.delayedBulletEvents[0].impactAlias + v13) = impactSound;
  }
}

/*
==============
SND_AddPhysicsQueryBlock
==============
*/
void SND_AddPhysicsQueryBlock(void)
{
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_WEAPON_REFLECT);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16489, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_soundPhysicsQueryBlock < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16490, ASSERT_TYPE_ASSERT, "(s_soundPhysicsQueryBlock >= 0)", (const char *)&queryFormat, "s_soundPhysicsQueryBlock >= 0") )
    __debugbreak();
  ++s_soundPhysicsQueryBlock;
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_AddPlayFXSoundAlias
==============
*/
void SND_AddPlayFXSoundAlias(unsigned int aliasId, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *origin)
{
  __int64 v7; 
  int v8; 
  __int64 v9; 

  if ( s_FXPlaySoundCount < 32 )
  {
    do
    {
      v7 = s_FXPlaySoundHead;
      v8 = ((_BYTE)s_FXPlaySoundHead + 1) & 0x1F;
      if ( ((unsigned __int64)&s_FXPlaySoundHead & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_FXPlaySoundHead) )
        __debugbreak();
    }
    while ( (_DWORD)v7 != _InterlockedCompareExchange(&s_FXPlaySoundHead, v8, v7) );
    v9 = v7;
    s_FXPlaySounds[v9].aliasId = aliasId;
    s_FXPlaySounds[v9].localClientNum = localClientNum;
    s_FXPlaySounds[v9].entNum = entNum;
    s_FXPlaySounds[v9].origin.v[0] = origin->v[0];
    s_FXPlaySounds[v9].origin.v[1] = origin->v[1];
    s_FXPlaySounds[v9].origin.v[2] = origin->v[2];
    if ( ((unsigned __int8)&s_FXPlaySoundCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_FXPlaySoundCount) )
      __debugbreak();
    _InterlockedIncrement(&s_FXPlaySoundCount);
  }
  else
  {
    Com_PrintError(20, "ERROR: too many FX sounds %d\n", 32i64);
  }
}

/*
==============
SND_AddSoundDoneNotify
==============
*/
void SND_AddSoundDoneNotify(unsigned int playbackId, int entNum, unsigned __int16 soundString)
{
  unsigned __int64 v3; 
  unsigned int *p_playbackId; 
  int v6; 
  SndVoice *v7; 
  const char *v8; 

  v3 = entNum;
  if ( !playbackId || (playbackId & 0x80000000) != 0 )
    goto LABEL_6;
  p_playbackId = &g_snd.voices[0].playbackId;
  v6 = 0;
  while ( *p_playbackId != playbackId )
  {
    ++v6;
    p_playbackId += 492;
    if ( (__int64)p_playbackId >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
      goto LABEL_6;
  }
  v7 = &g_snd.voices[v6];
  if ( !v7 )
    goto LABEL_6;
  v7->soundDoneSoundString = 0;
  if ( !v7->alias )
  {
    Com_PrintError(9, "Primary alias was stopped during the playsound call.  Was it played on a restricted channel?\n");
LABEL_6:
    SND_QueueSoundDoneNotify(v3, soundString);
    return;
  }
  v8 = j_va("adding sound done notify %d %d\n", (unsigned int)entNum, soundString);
  SND_DebugAliasPrint(1, v7->alias, v8);
  if ( !soundString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3216, ASSERT_TYPE_ASSERT, "(soundString != 0)", (const char *)&queryFormat, "soundString != 0") )
    __debugbreak();
  v7->soundDoneSoundString = soundString;
}

/*
==============
SND_AddVoice
==============
*/
void SND_AddVoice(unsigned int entchannel)
{
  __int64 v1; 
  snd_entchannel_info_t *v2; 
  int *v3; 
  __int64 v4; 
  int maxVoices; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2041, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2042, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  v2 = &g_snd.globals->entchannelInfo[v1];
  v3 = &g_snd.entchanvoicecount[v1];
  if ( *v3 >= v2->maxVoices )
  {
    maxVoices = v2->maxVoices;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2043, ASSERT_TYPE_ASSERT, "(g_snd.entchanvoicecount[entchannel] < g_snd.globals->entchannelInfo[entchannel].maxVoices)", "%s\n\tNot enough voices: entchannel = %s, maxvoices = %i", "g_snd.entchanvoicecount[entchannel] < g_snd.globals->entchannelInfo[entchannel].maxVoices", v2->name, maxVoices) )
      __debugbreak();
  }
  ++*v3;
}

/*
==============
SND_AddWhizbyToBulletEvent
==============
*/
void SND_AddWhizbyToBulletEvent(const int bulletEventId, const LocalClientNum_t localClientNum, const WeaponSFXPackage *sfxPackage, const vec3_t *inSndCenterPt, const vec3_t *inBulletDir, float radius, float shooterDist)
{
  __int64 v8; 
  unsigned __int64 SndEntHandle; 
  float v10; 
  float v11; 
  float v12; 
  const SndAliasList *whizbyInAlias; 
  SndWhizbyData outWhizbyData; 

  if ( bulletEventId >= 0 && (unsigned int)bulletEventId < 0x40 )
  {
    v8 = (__int64)bulletEventId << 7;
    if ( SND_GetWhizbyData(localClientNum, sfxPackage, inSndCenterPt, inBulletDir, shooterDist, 0, -3.4028235e38, radius, &outWhizbyData) )
    {
      SndEntHandle = CG_GenerateSndEntHandle(localClientNum, 2046);
      v10 = outWhizbyData.whizbySndInPos.v[0];
      v11 = outWhizbyData.whizbySndInPos.v[1];
      v12 = outWhizbyData.whizbySndInPos.v[2];
      *(unsigned __int64 *)((char *)&g_snd.delayedBulletEvents[0].whizbySndEnt + v8) = SndEntHandle;
      whizbyInAlias = outWhizbyData.whizbyInAlias;
      *(float *)((char *)g_snd.delayedBulletEvents[0].whizInPos.v + v8) = v10;
      *(float *)((char *)&g_snd.delayedBulletEvents[0].whizInPos.v[1] + v8) = v11;
      *(float *)((char *)&g_snd.delayedBulletEvents[0].whizInPos.v[2] + v8) = v12;
      *(float *)((char *)g_snd.delayedBulletEvents[0].whizOutPos.v + v8) = v10;
      *(float *)((char *)&g_snd.delayedBulletEvents[0].whizOutPos.v[1] + v8) = v11;
      *(float *)((char *)&g_snd.delayedBulletEvents[0].whizOutPos.v[2] + v8) = v12;
      *(_QWORD *)&g_snd.delayedBulletEvents[0].state[v8 + 8] = whizbyInAlias;
      *(const SndAliasList **)((char *)&g_snd.delayedBulletEvents[0].whizbyOutAlias + v8) = outWhizbyData.whizbyOutAlias;
      *(const SndAliasList **)((char *)&g_snd.delayedBulletEvents[0].whizbyCrackAlias + v8) = outWhizbyData.whizbyCrackAlias;
      *(int *)((char *)&g_snd.delayedBulletEvents[0].whizbyDelay + v8) = outWhizbyData.whizbyDelayMs;
    }
  }
}

/*
==============
SND_AmbientEventGetRandomElement
==============
*/
AmbientElement *SND_AmbientEventGetRandomElement(const LocalClientNum_t localClientNum)
{
  int v1; 
  __int128 v2; 
  __int128 v3; 
  int v4; 
  __int64 v5; 
  const AmbientDef *ambientDef; 
  const SoundTable *soundTable; 
  signed int numEvents; 
  float *p_weight; 
  unsigned int v10; 
  __int64 v11; 
  __int128 v12; 
  float *v13; 
  __int64 v14; 
  __int128 v15; 
  double v16; 
  AmbientEvent *ambientEvents; 
  int ambientEventIndex; 
  __int64 v19; 
  __int128 v20; 
  int ambientElementIndex; 
  unsigned int ambientElementsCount; 

  v1 = 0;
  v2 = 0i64;
  v3 = 0i64;
  v4 = 0;
  v5 = localClientNum;
  ambientDef = g_ambGlob[localClientNum].ambientDef;
  soundTable = g_ambGlob[localClientNum].soundTable;
  numEvents = ambientDef->numEvents;
  if ( (unsigned int)numEvents >= 4 )
  {
    p_weight = &soundTable->ambientEvents[ambientDef->ambientEventIndex + 1].weight;
    v10 = ((unsigned int)(numEvents - 4) >> 2) + 1;
    v11 = v10;
    v4 = 4 * v10;
    do
    {
      v12 = v3;
      *(float *)&v12 = (float)((float)((float)(*(float *)&v3 + *(p_weight - 3)) + *p_weight) + p_weight[3]) + p_weight[6];
      v3 = v12;
      p_weight += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( v4 < numEvents )
  {
    v13 = &soundTable->ambientEvents[v4 + g_ambGlob[v5].ambientDef->ambientEventIndex].weight;
    v14 = (unsigned int)(numEvents - v4);
    do
    {
      v15 = v3;
      *(float *)&v15 = *(float *)&v3 + *v13;
      v3 = v15;
      v13 += 3;
      --v14;
    }
    while ( v14 );
  }
  v16 = I_flrand(0.0, *(float *)&v3);
  if ( !numEvents )
    return 0i64;
  ambientEvents = soundTable->ambientEvents;
  ambientEventIndex = g_ambGlob[v5].ambientDef->ambientEventIndex;
  while ( 1 )
  {
    v19 = ambientEventIndex + v1;
    v20 = v2;
    *(float *)&v20 = *(float *)&v2 + ambientEvents[ambientEventIndex + v1].weight;
    v2 = v20;
    if ( *(float *)&v16 < *(float *)&v20 )
      break;
    if ( ++v1 >= numEvents )
      return 0i64;
  }
  if ( ambientEvents[ambientEventIndex + v1].ambientElementIndex >= soundTable->ambientElementsCount )
  {
    ambientElementsCount = soundTable->ambientElementsCount;
    ambientElementIndex = ambientEvents[ambientEventIndex + v1].ambientElementIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7278, ASSERT_TYPE_ASSERT, "(unsigned)( event->ambientElementIndex ) < (unsigned)( soundTable->ambientElementsCount )", "event->ambientElementIndex doesn't index soundTable->ambientElementsCount\n\t%i not in [0, %i)", ambientElementIndex, ambientElementsCount) )
      __debugbreak();
  }
  return &soundTable->ambientElements[ambientEvents[v19].ambientElementIndex];
}

/*
==============
SND_AnyActiveListeners
==============
*/
__int64 SND_AnyActiveListeners()
{
  unsigned __int8 v0; 
  unsigned __int64 v1; 
  bool *p_active; 

  v0 = 0;
  v1 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  p_active = &g_snd.listeners[0].active;
  while ( !*p_active )
  {
    p_active += 128;
    if ( (__int64)p_active >= (__int64)&g_snd.entchanvoicecount[26] )
      goto LABEL_11;
  }
  v0 = 1;
LABEL_11:
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
  return v0;
}

/*
==============
SND_AnyEqEnabled
==============
*/
char SND_AnyEqEnabled(int entchannel)
{
  __int64 v1; 
  bool *p_enabled; 
  __int64 v3; 
  bool *v4; 

  v1 = 0i64;
  p_enabled = &sdGlob.eqParams[0][0][entchannel].enabled;
  while ( 2 )
  {
    v3 = 0i64;
    v4 = p_enabled;
    do
    {
      if ( *v4 )
        return 1;
      ++v3;
      v4 += 5120;
    }
    while ( v3 < 2 );
    ++v1;
    p_enabled += 10240;
    if ( v1 < 2 )
      continue;
    break;
  }
  return 0;
}

/*
==============
SND_AnyEqEnabledOnVoice
==============
*/
char SND_AnyEqEnabledOnVoice(int voiceIndex)
{
  __int64 v1; 
  __int64 v2; 
  unsigned int *v3; 
  __int64 v4; 
  unsigned int *v5; 

  v1 = voiceIndex;
  if ( (unsigned int)voiceIndex > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", voiceIndex) )
    __debugbreak();
  if ( sdGlob.voiceAlloc[v1] )
  {
    v2 = 0i64;
    v3 = &sdGlob.currentReverbId[65 * v1 - 6388];
    while ( 2 )
    {
      v4 = 0i64;
      v5 = v3;
      do
      {
        if ( *(_BYTE *)v5 )
          return 1;
        ++v4;
        v5 += 5;
      }
      while ( v4 < 2 );
      ++v2;
      v3 += 10;
      if ( v2 < 2 )
        continue;
      break;
    }
  }
  return 0;
}

/*
==============
SND_ApplyEq
==============
*/
void SND_ApplyEq(int voiceIndex, int entchannel, int frametime, float lpfCutoff)
{
  __int64 v4; 
  __int64 v5; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  __int64 v11; 
  bool *p_enabled; 
  __int64 v13; 
  bool *v14; 
  char v15; 
  __int64 *v16; 
  __int64 v17; 
  char *v18; 
  int v19; 
  bool v20; 
  __int128 v21; 
  int v22; 
  bool v23; 
  __int128 eqLerp_low; 
  __int128 v25; 
  float v26; 
  float v28; 
  __int128 v29; 
  float v30; 
  __int128 v33; 
  __m256i v36; 
  __m256i v37; 
  unsigned int v38; 
  unsigned __int64 v39; 
  const dvar_t *v40; 
  __int128 v41; 
  __int64 v46; 
  __int64 v47; 
  __m256i v48; 
  __m256i v49; 
  __int128 v50; 
  unsigned int v51; 

  v4 = voiceIndex;
  v5 = entchannel;
  if ( (unsigned int)voiceIndex >= 0x63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12578, ASSERT_TYPE_ASSERT, "(unsigned)( voiceIndex ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "voiceIndex doesn't index SND_MAX_VOICES\n\t%i not in [0, %i)", voiceIndex, 99) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x100 )
  {
    LODWORD(v47) = 256;
    LODWORD(v46) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12579, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  v7 = DCONST_DVARFLT_snd_lpf_override;
  if ( !DCONST_DVARFLT_snd_lpf_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_lpf_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( -1.0 != v7->current.value )
  {
    v8 = DCONST_DVARFLT_snd_lpf_override;
    if ( !DCONST_DVARFLT_snd_lpf_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_lpf_override") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    lpfCutoff = v8->current.value;
  }
  v9 = DCONST_DVARFLT_snd_hpf_override;
  if ( !DCONST_DVARFLT_snd_hpf_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_hpf_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( -1.0 != v9->current.value )
  {
    v10 = DCONST_DVARFLT_snd_hpf_override;
    if ( !DCONST_DVARFLT_snd_hpf_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_hpf_override") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
  }
  v11 = 0i64;
  p_enabled = &sdGlob.eqParams[0][0][v5].enabled;
  while ( 2 )
  {
    v13 = 0i64;
    v14 = p_enabled;
    do
    {
      if ( *v14 )
      {
        v15 = 1;
        goto LABEL_30;
      }
      ++v13;
      v14 += 5120;
    }
    while ( v13 < 2 );
    ++v11;
    p_enabled += 10240;
    if ( v11 < 2 )
      continue;
    break;
  }
  v15 = 0;
LABEL_30:
  if ( (unsigned int)v5 >= 0x100 )
  {
    LODWORD(v47) = 256;
    LODWORD(v46) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12596, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  v16 = &v49.m256i_i64[1];
  v17 = 2i64;
  v18 = (char *)&sdGlob + 20 * v5;
  do
  {
    v19 = *((_DWORD *)v18 + 4);
    *(_OWORD *)((char *)v16 - 36) = *(_OWORD *)v18;
    *((_DWORD *)v16 - 5) = v19;
    v20 = (_BYTE)v19 && v15;
    v21 = *((_OWORD *)v18 + 320);
    *((_BYTE *)v16 - 20) = v20;
    v22 = *((_DWORD *)v18 + 1284);
    *((_OWORD *)v16 - 1) = v21;
    *(_DWORD *)v16 = v22;
    v23 = (_BYTE)v22 && v15;
    *(_BYTE *)v16 = v23;
    v18 += 10240;
    v16 += 5;
    --v17;
  }
  while ( v17 );
  eqLerp_low = LODWORD(sdGlob.eqLerp);
  *(float *)v48.m256i_i32 = sdGlob.eqLerp;
  v25 = LODWORD(g_snd.chaninfoUnweightedPriority[492 * v4 - 48639]);
  v26 = g_snd.chaninfoUnweightedPriority[492 * v4 - 48627];
  *(double *)&eqLerp_low = SND_SubmixGetLpFilterValue(*(_DWORD *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v4 - 48680] + 84i64));
  _XMM8 = LODWORD(FLOAT_24000_0);
  v29 = eqLerp_low;
  v28 = *(float *)&eqLerp_low * v26;
  v30 = g_snd.chaninfoUnweightedPriority[492 * v4 - 48624];
  *((_QWORD *)&eqLerp_low + 1) = *((_QWORD *)&v25 + 1);
  *(float *)&v29 = (float)((float)(v28 * v28) * v28) * 24000.0;
  _XMM4 = v29;
  __asm { vminss  xmm7, xmm4, xmm2 }
  *(double *)&eqLerp_low = SND_SubmixGetHpFilterValue(*(_DWORD *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v4 - 48680] + 84i64));
  v33 = eqLerp_low;
  *(float *)&v33 = (float)(*(float *)&eqLerp_low * v30) * 24000.0;
  _XMM2 = v33;
  __asm { vmaxss  xmm3, xmm2, xmm11 }
  if ( lpfCutoff != -1.0 )
    __asm { vminss  xmm7, xmm7, xmm10 }
  v36 = v48;
  v37 = v49;
  v38 = v51;
  v39 = 260 * v4;
  v40 = DCONST_DVARBOOL_snd_useSinglepoleFilter;
  sdGlob.voiceParams[v39 / 0x104].useBiQuad = 1;
  *(__m256i *)&sdGlob.currentReverbId[v39 / 4 - 6393] = v36;
  v41 = v50;
  *(__m256i *)&sdGlob.currentReverbId[v39 / 4 - 6385] = v37;
  *(_OWORD *)&sdGlob.currentReverbId[v39 / 4 - 6377] = v41;
  sdGlob.currentReverbId[v39 / 4 - 6373] = v38;
  __asm
  {
    vcmpless xmm0, xmm8, xmm7
    vblendvps xmm1, xmm7, xmm9, xmm0
    vcmpless xmm0, xmm3, cs:__real@41200000
  }
  sdGlob.currentReverbId[v39 / 4 - 6372] = _XMM1;
  __asm { vblendvps xmm1, xmm3, xmm9, xmm0 }
  sdGlob.currentReverbId[v39 / 4 - 6371] = _XMM1;
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_useSinglepoleFilter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
    sdGlob.voiceParams[v39 / 0x104].useBiQuad = 0;
}

/*
==============
SND_ApplyFocusCone
==============
*/
float SND_ApplyFocusCone(const float focusAmount, const FocusCone *focusCone, const vec3_t *listenerForward, const vec3_t *targetPos)
{
  __int128 innerDist_low; 
  __int128 v9; 
  float v10; 
  __int128 innerAngle_low; 
  float attenuation; 
  __int128 v14; 
  __int128 v17; 
  __int128 v20; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 

  if ( (focusAmount < 0.0 || focusAmount > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12478, ASSERT_TYPE_ASSERT, "(focusAmount >= 0.0f && focusAmount <= 1.0f)", (const char *)&queryFormat, "focusAmount >= 0.0f && focusAmount <= 1.0f") )
    __debugbreak();
  if ( !focusCone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12479, ASSERT_TYPE_ASSERT, "(focusCone)", (const char *)&queryFormat, "focusCone") )
    __debugbreak();
  innerDist_low = LODWORD(focusCone->innerDist);
  v9 = LODWORD(targetPos->v[1]);
  v10 = targetPos->v[2];
  innerAngle_low = LODWORD(focusCone->innerAngle);
  attenuation = focusCone->attenuation;
  v14 = innerAngle_low;
  *(float *)&v14 = *(float *)&innerAngle_low + 1.0;
  _XMM0 = v14;
  __asm { vmaxss  xmm13, xmm0, dword ptr [rbx+48h] }
  v17 = innerDist_low;
  *(float *)&v17 = *(float *)&innerDist_low + 1.0;
  _XMM1 = v17;
  __asm { vmaxss  xmm15, xmm1, dword ptr [rbx+50h] }
  v20 = v9;
  *(float *)&v20 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(targetPos->v[0] * targetPos->v[0])) + (float)(v10 * v10));
  _XMM14 = v20;
  __asm
  {
    vcmpless xmm0, xmm14, cs:__real@80000000
    vblendvps xmm0, xmm14, xmm6, xmm0
  }
  v23 = FLOAT_1_0;
  if ( *(float *)&v20 > *(float *)&innerDist_low )
  {
    v24 = I_fclamp((float)((float)((float)(*(float *)&v9 * (float)(1.0 / *(float *)&_XMM0)) * listenerForward->v[1]) + (float)((float)(targetPos->v[0] * (float)(1.0 / *(float *)&_XMM0)) * listenerForward->v[0])) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * listenerForward->v[2]), -1.0, 1.0);
    v25 = acosf_0(*(float *)&v24);
    if ( (float)(v25 * 57.295776) <= *(float *)&_XMM13 )
    {
      if ( (float)(v25 * 57.295776) > *(float *)&innerAngle_low )
        v23 = (float)((float)((float)((float)(v25 * 57.295776) - *(float *)&innerAngle_low) / (float)(*(float *)&_XMM13 - *(float *)&innerAngle_low)) * attenuation) + (float)(1.0 - (float)((float)((float)(v25 * 57.295776) - *(float *)&innerAngle_low) / (float)(*(float *)&_XMM13 - *(float *)&innerAngle_low)));
    }
    else
    {
      v23 = attenuation;
    }
    v26 = I_fclamp((float)(*(float *)&v20 - *(float *)&innerDist_low) / (float)(*(float *)&_XMM15 - *(float *)&innerDist_low), 0.0, 1.0);
    v23 = (float)(*(float *)&v26 * v23) + (float)(1.0 - *(float *)&v26);
  }
  return (float)(v23 * focusAmount) + (float)(1.0 - focusAmount);
}

/*
==============
SND_ApplyOcclusionShape
==============
*/
void SND_ApplyOcclusionShape(SndVoice *voice, const OcclusionShape *occShape, const snd_listener *listener, const vec3_t *entityPos, const tmat33_t<vec3_t> *entityOrientation, float *outVolumeAtten, float *outLPFAtten)
{
  float v8; 
  float innerAngleVolume; 
  float occludedVolume; 
  float innerAngleLPF; 
  float outerAngleLPF; 
  float occludedLPF; 
  float v14; 
  unsigned __int128 v15; 
  unsigned __int128 v16; 
  float v20; 
  float pitchOffsetAngle; 
  float v23; 
  float v24; 
  float outerAngleVolume; 
  vec3_t out; 
  vec3_t vRotation; 
  vec3_t vIn; 

  _XMM12 = LODWORD(FLOAT_1_0);
  v8 = entityPos->v[2];
  innerAngleVolume = occShape->innerAngleVolume;
  occludedVolume = occShape->occludedVolume;
  innerAngleLPF = occShape->innerAngleLPF;
  outerAngleLPF = occShape->outerAngleLPF;
  occludedLPF = occShape->occludedLPF;
  outerAngleVolume = occShape->outerAngleVolume;
  LODWORD(v14) = LODWORD(entityPos->v[0]) ^ _xmm;
  v15 = LODWORD(entityPos->v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  v16 = v15;
  *(float *)&v16 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14)) + (float)(COERCE_FLOAT(LODWORD(v8) ^ _xmm) * COERCE_FLOAT(LODWORD(v8) ^ _xmm)));
  _XMM4 = v16;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm12, xmm0
  }
  vRotation.v[2] = occShape->yawOffsetAngle;
  out.v[2] = 0.0;
  vRotation.v[0] = 0.0;
  *(float *)&v16 = v14 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v15 = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM0);
  v20 = COERCE_FLOAT(LODWORD(v8) ^ _xmm) * (float)(1.0 / *(float *)&_XMM0);
  pitchOffsetAngle = occShape->pitchOffsetAngle;
  __asm { vunpcklps xmm0, xmm12, xmm0 }
  vIn.v[2] = 0.0;
  *(double *)vIn.v = *(double *)&_XMM0;
  vRotation.v[1] = pitchOffsetAngle;
  v23 = FLOAT_1_0;
  VectorRotateAngles(&vIn, &vRotation, &out);
  AxisTransformVec3(entityOrientation, &out, &out);
  *(double *)&_XMM0 = I_fclamp((float)((float)(*(float *)&v16 * out.v[0]) + (float)(*(float *)&v15 * out.v[1])) + (float)(v20 * out.v[2]), -1.0, 1.0);
  v24 = acosf_0(*(float *)&_XMM0) * 57.295776;
  if ( v24 <= outerAngleVolume )
  {
    if ( v24 > innerAngleVolume )
      v23 = (float)((float)((float)(v24 - innerAngleVolume) / (float)(outerAngleVolume - innerAngleVolume)) * occludedVolume) + (float)(1.0 - (float)((float)(v24 - innerAngleVolume) / (float)(outerAngleVolume - innerAngleVolume)));
  }
  else
  {
    v23 = occludedVolume;
  }
  *outVolumeAtten = v23;
  if ( v24 <= outerAngleLPF )
  {
    if ( v24 <= innerAngleLPF )
      *outLPFAtten = FLOAT_N1_0;
    else
      *outLPFAtten = (float)((float)((float)(v24 - innerAngleLPF) / (float)(outerAngleLPF - innerAngleLPF)) * occludedLPF) + (float)((float)(1.0 - (float)((float)(v24 - innerAngleLPF) / (float)(outerAngleLPF - innerAngleLPF))) * 24000.0);
  }
  else
  {
    *outLPFAtten = occludedLPF;
  }
}

/*
==============
SND_ApplyPanningMatrix
==============
*/
void SND_ApplyPanningMatrix(const int index, const float *p_matrix, const float dryLevel, const float wetLevel, const LocalClientNum_t localClientNum)
{
  const dvar_t *v5; 
  __int64 v6; 
  SndVoice *v8; 
  int integer; 
  bool v12; 
  int PlayerAudioPropagationTriggerIndex; 
  int v14; 
  int v15; 
  const dvar_t *v16; 
  int v17; 
  __int64 v21; 
  unsigned int propagationTriggerIndex; 
  int v23; 
  float current; 
  double v25; 
  int v26; 
  double v27; 
  bool v28; 
  __int64 v29; 
  double v30; 
  const dvar_t *v31; 
  float v32; 
  const ReverbDef *reverbDef; 
  float v37; 
  double v38; 
  __int64 v39; 
  __int64 v40; 
  double v41; 
  const SndAlias *alias; 
  double v43; 
  const SndAlias *v44; 
  double v45; 
  LocalClientNum_t localClientNuma; 

  v5 = DCONST_DVARINT_snd_solo_propagation;
  v6 = index;
  v8 = &g_snd.voices[index];
  *(float *)&_XMM9 = wetLevel;
  if ( !DCONST_DVARINT_snd_solo_propagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_solo_propagation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  if ( localClientNum == LOCAL_CLIENT_INVALID )
  {
    v12 = 0;
    PlayerAudioPropagationTriggerIndex = 0x4000;
  }
  else
  {
    v12 = CG_AreAudioZonesOverriden(localClientNum);
    PlayerAudioPropagationTriggerIndex = CG_GetPlayerAudioPropagationTriggerIndex(localClientNum);
  }
  v14 = SND_LookupZoneIndex(v8->propagationTriggerIndex);
  v15 = SND_LookupZoneIndex(PlayerAudioPropagationTriggerIndex);
  v16 = DCONST_DVARBOOL_snd_enable_capture_mode;
  localClientNuma = v15;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = 0;
  _XMM7 = 0i64;
  if ( v16->current.enabled )
  {
    _XMM0 = SND_IsChannelMissionVOChannel((unsigned __int8)(v8->alias->flags >> 10));
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm9, xmm7, xmm9, xmm2
    }
  }
  v21 = v6;
  *(_QWORD *)sdGlob.voiceParams[v21].panLevels = 0i64;
  *(_QWORD *)&sdGlob.voiceParams[v21].panLevels[2] = 0i64;
  *(_QWORD *)&sdGlob.voiceParams[v21].panLevels[4] = 0i64;
  if ( !v12 )
  {
    propagationTriggerIndex = v8->propagationTriggerIndex;
    if ( propagationTriggerIndex != 1024 )
    {
      if ( propagationTriggerIndex == g_snd.reverbTrigger[2] && g_snd.reverbTriggerOutputNumberA != 1024 )
      {
        v23 = 2;
LABEL_20:
        current = FLOAT_1_0;
        if ( !integer )
        {
          v25 = SND_GetDryLevel(v8, 1);
          sdGlob.voiceParams[v6].panLevels[0] = *(float *)&v25 * dryLevel;
        }
        if ( v14 == localClientNuma )
        {
          LOBYTE(v17) = g_snd.activeMainReverb != RVB_MAIN_A;
          v26 = v17 + 2;
          if ( g_snd.activeMainReverb )
            current = 1.0 - g_snd.mainReverbLerp.current;
          else
            current = g_snd.mainReverbLerp.current;
          v27 = SND_GetWetLevel(v8->alias, g_snd.activeMainReverb);
          v28 = !v8->occlusionMatchesListener;
          sdGlob.voiceParams[v6].panLevels[v26] = *(float *)&v27 * *(float *)&_XMM9;
        }
        else
        {
          v28 = 0;
        }
        v29 = v6;
        sdGlob.voiceParams[v6].onePolePreReverb = v28;
        if ( SND_EntChannelFarReverbBehavior((unsigned __int8)(v8->alias->flags >> 10)) == SND_FAR_REVERB_FULL && integer != 2 )
        {
          v30 = SND_GetDryLevel(v8, 1);
          v31 = DCONST_DVARFLT_snd_farDryAttenuation;
          v32 = *(float *)&v30;
          if ( !DCONST_DVARFLT_snd_farDryAttenuation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farDryAttenuation") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v31);
          _XMM0 = LODWORD(FLOAT_10_0);
          *(float *)&_XMM0 = powf_0(10.0, v31->current.value * 0.050000001);
          __asm
          {
            vcmpltss xmm1, xmm0, cs:__real@37803e84
            vblendvps xmm0, xmm0, xmm7, xmm1
          }
          sdGlob.voiceParams[v6].panLevels[1] = (float)(*(float *)&_XMM0 * v32) * (float)(current * dryLevel);
        }
        if ( integer != 3 )
        {
          if ( SND_GetEntChannelSendFlag((unsigned __int8)(v8->alias->flags >> 10)) != SENDTYPE_NONE )
          {
            reverbDef = v8->reverbDef;
            if ( reverbDef )
            {
              v37 = reverbDef->wetLevel * v8->alias->farReverbMultiplier;
              if ( (v37 < 0.0 || v37 > 256.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12126, ASSERT_TYPE_ASSERT, "( ( wetLevel >= 0 && wetLevel <= 256 ) )", "( wetLevel ) = %g", v37) )
                __debugbreak();
              *(float *)&_XMM7 = v37;
            }
            else
            {
              v38 = SND_GetWetLevel(v8->alias, g_snd.activeMainReverb);
              LODWORD(_XMM7) = LODWORD(v38);
            }
          }
          v39 = 5i64;
          if ( v23 == 2 )
            v39 = 4i64;
          sdGlob.voiceParams[v6].panLevels[v39] = (float)(current * *(float *)&_XMM9) * *(float *)&_XMM7;
        }
        goto LABEL_50;
      }
      if ( propagationTriggerIndex == g_snd.reverbTrigger[3] && g_snd.reverbTriggerOutputNumberB != 1024 )
      {
        v23 = 3;
        goto LABEL_20;
      }
    }
  }
  if ( !integer )
  {
    v40 = v6;
    v41 = SND_GetDryLevel(v8, 0);
    alias = v8->alias;
    sdGlob.voiceParams[v40].panLevels[0] = *(float *)&v41 * dryLevel;
    v43 = SND_GetWetLevel(alias, RVB_MAIN_A);
    v44 = v8->alias;
    sdGlob.voiceParams[v40].panLevels[2] = *(float *)&v43 * *(float *)&_XMM9;
    v45 = SND_GetWetLevel(v44, RVB_MAIN_B);
    sdGlob.voiceParams[v40].panLevels[3] = *(float *)&v45 * *(float *)&_XMM9;
  }
  v29 = v6;
  sdGlob.voiceParams[v6].onePolePreReverb = 0;
LABEL_50:
  *(__m256i *)sdGlob.voiceParams[v29].panMatrix = *(__m256i *)p_matrix;
  *(__m256i *)&sdGlob.voiceParams[v29].panMatrix[8] = *(__m256i *)(p_matrix + 8);
  *(__m256i *)&sdGlob.voiceParams[v29].panMatrix[16] = *(__m256i *)(p_matrix + 16);
  *(__m256i *)&sdGlob.voiceParams[v29].panMatrix[24] = *(__m256i *)(p_matrix + 24);
}

/*
==============
SND_ApplySpeakerParams
==============
*/
void SND_ApplySpeakerParams(const int index, const int frametime, const float voiceVolume)
{
  const dvar_t *v3; 
  SndVoice *v6; 
  const SpeakerMap *p_speakerMap; 
  unsigned int v8; 
  float v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  unsigned int v14; 
  unsigned int AliasEntChannelId; 
  MapEnts *mapEnts; 
  float v19; 
  __int128 v20; 
  float v21; 
  unsigned int v22; 
  __int64 i; 
  int audioPASpeakerCount; 
  volatile int v25; 
  unsigned int v26; 
  unsigned int entChannelHash; 
  AudioPASpeaker *audioPASpeakers; 
  __m128 v29; 
  const SndAlias *alias; 
  __int128 v32; 
  float distMin; 
  float distMax; 
  __m128 v36; 
  unsigned int v37; 
  __int64 v38; 
  double VolumeFalloffGain; 
  unsigned int defaultHash; 
  float v49; 
  double SndCurveValue; 
  double v53; 
  double v54; 
  float v57; 
  float v58; 
  int v59; 
  float *v60; 
  float v61; 
  double v62; 
  unsigned int v63; 
  float v64; 
  float v65; 
  double v67; 
  double v69; 
  const FocusCone *focusCone; 
  SpeakerMap *speakerMap; 
  float *outLPFAtten; 
  float outVolumeAtten; 
  float v79; 
  float v80; 
  int entchannel; 
  int voiceIndex; 
  vec3_t delta; 
  vec3_t origin; 
  snd_listener outListener; 
  tmat33_t<vec3_t> outVoiceOrientation; 
  __int128 v87[8]; 
  float outputs[4]; 
  __int128 v89[7]; 

  v3 = DCONST_DVARFLT_snd_dry_scale;
  v6 = &g_snd.voices[index];
  voiceIndex = index;
  p_speakerMap = &v6->speakerMap;
  v8 = (unsigned __int8)(v6->alias->flags >> 10);
  entchannel = v8;
  if ( !DCONST_DVARFLT_snd_dry_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_dry_scale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v10 = voiceVolume * v3->current.value;
  v9 = v10;
  v11 = DCONST_DVARFLT_snd_wet_scale;
  outVolumeAtten = v10;
  if ( !DCONST_DVARFLT_snd_wet_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_wet_scale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = voiceVolume * v11->current.value;
  v13 = DCONST_DVARBOOL_snd_enable_capture_mode;
  v80 = v12;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled && SND_IsChannelMissionVOChannel((unsigned __int8)(v6->alias->flags >> 10)) )
  {
    v14 = SND_HashName(S_VO_CENTER_ONLY_MAP);
    p_speakerMap = SND_GetSpeakerMapById(v14);
  }
  if ( SND_IsEntChannelPASpeaker((unsigned __int8)(v6->alias->flags >> 10)) )
  {
    *(float *)&_XMM10 = FLOAT_1_0;
    *(float *)&_XMM15 = FLOAT_3_4028235e38;
    memset_0(v87, 0, sizeof(v87));
    AliasEntChannelId = SND_GetAliasEntChannelId(v6->alias);
    mapEnts = cm.mapEnts;
    v19 = origin.v[2];
    v20 = LODWORD(origin.v[1]);
    v21 = origin.v[0];
    v22 = AliasEntChannelId;
    outListener.localClientNum = LOCAL_CLIENT_INVALID;
    for ( i = 0i64; ; i = (unsigned int)(i + 1) )
    {
      if ( mapEnts )
      {
        if ( mapEnts->audioPASpeakerCount >= 0x40 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 532, ASSERT_TYPE_ASSERT, "(cm.mapEnts->audioPASpeakerCount < 64)", (const char *)&queryFormat, "cm.mapEnts->audioPASpeakerCount < AUDIO_PA_SPEAKERS_MAXSIZE") )
            __debugbreak();
          mapEnts = cm.mapEnts;
        }
        audioPASpeakerCount = mapEnts->audioPASpeakerCount;
      }
      else
      {
        audioPASpeakerCount = 0;
      }
      if ( (int)i >= audioPASpeakerCount )
      {
        VolumeFalloffGain = SND_GetVolumeFalloffGain(v6, *(const float *)&_XMM15, *(const float *)&_XMM10, &v6->vfCurve);
        defaultHash = g_snd.defaultHash;
        v49 = *(float *)&VolumeFalloffGain;
        if ( v6->lpfCurve.id == g_snd.defaultHash )
        {
          *(float *)&_XMM8 = FLOAT_N1_0;
        }
        else
        {
          SndCurveValue = SND_GetSndCurveValue(v6->lpfCurve.numPoints, v6->lpfCurve.points, *(const float *)&_XMM10);
          defaultHash = g_snd.defaultHash;
          LODWORD(_XMM8) = LODWORD(SndCurveValue);
        }
        if ( v6->hpfCurve.id == defaultHash )
        {
          *(float *)&_XMM7 = FLOAT_N1_0;
        }
        else
        {
          v53 = SND_GetSndCurveValue(v6->hpfCurve.numPoints, v6->hpfCurve.points, *(const float *)&_XMM10);
          defaultHash = g_snd.defaultHash;
          LODWORD(_XMM7) = LODWORD(v53);
        }
        if ( v6->rvbCurve.id != defaultHash )
        {
          v54 = SND_GetSndCurveValue(v6->rvbCurve.numPoints, v6->rvbCurve.points, *(const float *)&_XMM10);
          v49 = *(float *)&v54;
        }
        _XMM1 = LODWORD(v6->lpfCutoff);
        if ( *(float *)&_XMM8 == -1.0 )
        {
          *(float *)&_XMM8 = v6->lpfCutoff;
        }
        else if ( *(float *)&_XMM1 != -1.0 )
        {
          __asm { vminss  xmm8, xmm1, xmm8 }
        }
        _XMM0 = LODWORD(v6->hpfCutoff);
        if ( *(float *)&_XMM7 == -1.0 )
        {
          *(float *)&_XMM7 = v6->hpfCutoff;
        }
        else if ( *(float *)&_XMM0 != -1.0 )
        {
          __asm { vminss  xmm7, xmm0, xmm7 }
        }
        SND_ApplyEq(voiceIndex, entchannel, frametime, *(float *)&_XMM8, *(float *)&_XMM7, 0.0);
        v57 = v49 * v80;
        v58 = outVolumeAtten;
        v59 = voiceIndex;
        v60 = (float *)v87;
        goto LABEL_92;
      }
      if ( (unsigned int)i >= 0x40 )
      {
        LODWORD(outLPFAtten) = 64;
        LODWORD(speakerMap) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", speakerMap, outLPFAtten) )
          __debugbreak();
        mapEnts = cm.mapEnts;
      }
      v25 = g_snd.voiceBusyUpdating[((__int64)(int)i >> 5) - 2];
      if ( !_bittest((const int *)&v25, i & 0x1F) )
      {
        if ( mapEnts )
        {
          v26 = mapEnts->audioPASpeakerCount;
          if ( v26 > (unsigned int)i )
          {
            entChannelHash = mapEnts->audioPASpeakers[i].entChannelHash;
            if ( entChannelHash && entChannelHash != v22 )
              continue;
            if ( v26 > (unsigned int)i )
            {
              audioPASpeakers = mapEnts->audioPASpeakers;
              v21 = audioPASpeakers[i].origin.v[0];
              v20 = LODWORD(audioPASpeakers[i].origin.v[1]);
              v19 = audioPASpeakers[i].origin.v[2];
              origin.v[0] = v21;
              origin.v[1] = *(float *)&v20;
              origin.v[2] = v19;
            }
          }
        }
        SND_GetListenerNearestToOrigin(&origin, &outListener);
        v32 = v20;
        v29.m128_u64[1] = *((_QWORD *)&v20 + 1);
        alias = v6->alias;
        delta.v[1] = *(float *)&v20 - outListener.orient.origin.v[1];
        delta.v[0] = v21 - outListener.orient.origin.v[0];
        *(float *)&v32 = fsqrt((float)((float)((float)(*(float *)&v20 - outListener.orient.origin.v[1]) * (float)(*(float *)&v20 - outListener.orient.origin.v[1])) + (float)((float)(v21 - outListener.orient.origin.v[0]) * (float)(v21 - outListener.orient.origin.v[0]))) + (float)((float)(v19 - outListener.orient.origin.v[2]) * (float)(v19 - outListener.orient.origin.v[2])));
        _XMM8 = v32;
        delta.v[2] = v19 - outListener.orient.origin.v[2];
        distMin = alias->distMin;
        distMax = alias->distMax;
        v6->priorityAttenuation = 0.0;
        SND_GetDistanceCurveFraction(*(float *)&v32, distMin, distMax);
        _XMM9 = v32;
        *(double *)v29.m128_u64 = SND_GetVolumeFalloffGain(v6, *(const float *)&v32, *(const float *)&v32, &v6->vfCurve);
        v36 = _mm_shuffle_ps(v29, v29, 0);
        if ( v29.m128_f32[0] > 0.0 )
        {
          SND_Get3DSpeakerVolumes(outputs, *(const float *)&v32, &delta, &outListener, v6, p_speakerMap);
          v37 = 0;
          v38 = 0i64;
          do
          {
            _XMM0 = v87[v38];
            _mm128_mul_ps(v36, *(__m128 *)&outputs[v38 * 4]);
            __asm { vmaxps  xmm1, xmm0, xmm1 }
            v87[v38] = _XMM1;
            _XMM0 = v87[v38 + 1];
            _mm128_mul_ps(v36, (__m128)v89[v38]);
            __asm { vmaxps  xmm1, xmm0, xmm1 }
            v87[v38 + 1] = _XMM1;
            _XMM0 = v87[v38 + 2];
            _mm128_mul_ps(v36, (__m128)v89[v38 + 1]);
            __asm { vmaxps  xmm1, xmm0, xmm1 }
            v87[v38 + 2] = _XMM1;
            _XMM0 = v87[v38 + 3];
            _mm128_mul_ps(v36, (__m128)v89[v38 + 2]);
            __asm { vmaxps  xmm1, xmm0, xmm1 }
            v37 += 16;
            v87[v38 + 3] = _XMM1;
            v38 += 4i64;
          }
          while ( v37 < 0x20 );
          __asm
          {
            vminss  xmm10, xmm9, xmm10
            vminss  xmm15, xmm8, xmm15
          }
        }
        mapEnts = cm.mapEnts;
      }
    }
  }
  if ( SND_IsEntChannel3D(v8) )
  {
    SND_CalcVoice3DInfo(v6, &outListener, &delta, &outVoiceOrientation);
    v61 = fsqrt((float)((float)(delta.v[1] * delta.v[1]) + (float)(delta.v[0] * delta.v[0])) + (float)(delta.v[2] * delta.v[2])) * v6->distanceScale;
    SND_GetDistanceCurveFraction(v61, v6->alias->distMin, v6->alias->distMax);
    v62 = SND_GetVolumeFalloffGain(v6, v61, v61, &v6->vfCurve);
    v6->priorityAttenuation = *(float *)&v62;
    v63 = g_snd.defaultHash;
    v64 = *(float *)&v62;
    if ( v6->rvbCurve.id != g_snd.defaultHash )
    {
      v62 = SND_GetSndCurveValue(v6->rvbCurve.numPoints, v6->rvbCurve.points, v61);
      v63 = g_snd.defaultHash;
    }
    v65 = *(float *)&v62;
    if ( v6->lpfCurve.id == v63 )
    {
      *(float *)&_XMM6 = FLOAT_N1_0;
    }
    else
    {
      v67 = SND_GetSndCurveValue(v6->lpfCurve.numPoints, v6->lpfCurve.points, v61);
      v63 = g_snd.defaultHash;
      LODWORD(_XMM6) = LODWORD(v67);
    }
    if ( v6->hpfCurve.id == v63 )
    {
      *(float *)&_XMM8 = FLOAT_N1_0;
    }
    else
    {
      v69 = SND_GetSndCurveValue(v6->hpfCurve.numPoints, v6->hpfCurve.points, v61);
      LODWORD(_XMM8) = LODWORD(v69);
    }
    SND_Get3DSpeakerVolumes(outputs, v61, &delta, &outListener, v6, p_speakerMap);
    if ( v6->occlusionShape.id != g_snd.defaultHash )
    {
      SND_ApplyOcclusionShape(v6, &v6->occlusionShape, &outListener, &delta, &outVoiceOrientation, &outVolumeAtten, &v79);
      v9 = v9 * outVolumeAtten;
      if ( *(float *)&_XMM6 == -1.0 )
      {
        *(float *)&_XMM6 = v79;
      }
      else
      {
        _XMM0 = LODWORD(v79);
        if ( v79 != -1.0 )
          __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    focusCone = v6->params.focusCone;
    if ( focusCone )
      v9 = v9 * SND_ApplyFocusCone(v6->params.focusAmount, focusCone, outListener.orient.axis.m, &delta);
    _XMM0 = LODWORD(v6->lpfCutoff);
    if ( *(float *)&_XMM6 == -1.0 )
    {
      *(float *)&_XMM6 = v6->lpfCutoff;
    }
    else if ( *(float *)&_XMM0 != -1.0 )
    {
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    _XMM0 = LODWORD(v6->hpfCutoff);
    if ( *(float *)&_XMM8 == -1.0 )
    {
      *(float *)&_XMM8 = v6->hpfCutoff;
    }
    else if ( *(float *)&_XMM0 != -1.0 )
    {
      __asm { vminss  xmm8, xmm0, xmm8 }
    }
    SND_ApplyEq(index, v8, frametime, *(float *)&_XMM6, *(float *)&_XMM8, v6->occlusionAmount);
    v57 = v65 * v12;
    v58 = v64 * v9;
  }
  else
  {
    *(float *)&_XMM6 = FLOAT_N1_0;
    memset_0(outputs, 0, 0x80ui64);
    SND_UpdateSpeakerMap(v6, p_speakerMap, outputs);
    if ( v6 == (SndVoice *)-1864i64 || v6->occlusionShape.id == g_snd.defaultHash )
    {
      outListener.localClientNum = LOCAL_CLIENT_INVALID;
    }
    else
    {
      SND_CalcVoice3DInfo(v6, &outListener, &delta, &outVoiceOrientation);
      SND_ApplyOcclusionShape(v6, &v6->occlusionShape, &outListener, &delta, &outVoiceOrientation, &outVolumeAtten, &v80);
      v9 = v10 * outVolumeAtten;
      *(float *)&_XMM6 = v80;
    }
    _XMM0 = LODWORD(v6->lpfCutoff);
    if ( *(float *)&_XMM6 == -1.0 )
    {
      *(float *)&_XMM6 = v6->lpfCutoff;
    }
    else if ( *(float *)&_XMM0 != -1.0 )
    {
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    SND_ApplyEq(index, v8, frametime, *(float *)&_XMM6, v6->hpfCutoff, v6->occlusionAmount);
    v57 = v12;
    v58 = v9;
  }
  v59 = index;
  v60 = outputs;
LABEL_92:
  SND_ApplyPanningMatrix(v59, v60, v58, v57, (const LocalClientNum_t)outListener.localClientNum);
}

/*
==============
SND_ApplyVolumeCoefficientAdjustments
==============
*/
void SND_ApplyVolumeCoefficientAdjustments(float *speakerlevel, float lfePercentage, float centerPercentage, float omniPercentage, bool panThroughCenter, float lfeScale)
{
  float v9; 
  float v10; 
  __m256i *v11; 
  int v12; 
  __m128 v13; 
  __int64 v14; 
  bool v15; 
  __int64 i; 
  __int64 v17; 
  float v20; 
  float v21; 
  __m128 v22; 
  float v23; 
  float v24; 
  __int64 *v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  float v31; 
  __m128 v32; 
  __m128 v33; 
  __int64 *v34; 
  __int64 v35; 
  __int64 v36; 
  __m128 v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  __int64 v51; 
  __m128 v52; 
  __int64 v53; 
  __m128 v54; 
  float v55; 
  __int64 *v56; 
  unsigned __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __m256i v60; 
  __int128 v61; 
  int v62; 
  int v63; 
  int v64; 
  __m256i v65; 
  __int128 v66; 
  int v67; 
  int v68; 

  v66 = _xmm;
  v65 = _ymm;
  v61 = _xmm;
  v67 = 14;
  v68 = 15;
  v60 = _ymm;
  v62 = 13;
  v63 = 14;
  v64 = 15;
  if ( (lfePercentage < 0.0 || lfePercentage > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12208, ASSERT_TYPE_ASSERT, "( ( lfePercentage >= 0.0f && lfePercentage <= 1.0f ) )", "( lfePercentage ) = %g", lfePercentage) )
    __debugbreak();
  if ( !panThroughCenter && (centerPercentage < 0.0 || centerPercentage > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12209, ASSERT_TYPE_ASSERT, "( ( panThroughCenter || ( centerPercentage >= 0.0f && centerPercentage <= 1.0f ) ) )", "( centerPercentage ) = %g", centerPercentage) )
    __debugbreak();
  v9 = speakerlevel[3];
  if ( v9 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12210, ASSERT_TYPE_ASSERT, "( ( speakerlevel[SD_MIX_CHANNEL_LFE] == 0.0f ) )", "( speakerlevel[SD_MIX_CHANNEL_LFE] ) = %g", v9) )
    __debugbreak();
  if ( !panThroughCenter )
  {
    v10 = speakerlevel[2];
    if ( v10 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12211, ASSERT_TYPE_ASSERT, "( ( panThroughCenter || speakerlevel[SD_MIX_CHANNEL_CF] == 0.0f ) )", "( speakerlevel[SD_MIX_CHANNEL_CF] ) = %g", v10) )
      __debugbreak();
  }
  v11 = &v60;
  if ( !panThroughCenter )
    v11 = &v65;
  if ( g_snd.playback_channels <= 2 )
    v12 = 2;
  else
    v12 = g_snd.playback_channels - !panThroughCenter - 1;
  v13 = 0i64;
  if ( g_snd.playback_channels <= 2 )
  {
    if ( omniPercentage > 0.0 )
    {
      v29 = 0i64;
      v30 = 0;
      v31 = 1.0 - omniPercentage;
      if ( v12 > 0 && (unsigned int)v12 >= 8 )
      {
        v32 = 0i64;
        v33 = 0i64;
        v34 = &v11->m256i_i64[1];
        v35 = 0i64;
        do
        {
          v36 = *((int *)v34 - 2);
          v30 += 8;
          v35 += 8i64;
          v34 += 4;
          _XMM0 = LODWORD(speakerlevel[v36]);
          __asm
          {
            vinsertps xmm0, xmm0, dword ptr [rbx+rcx*4], 10h
            vinsertps xmm0, xmm0, dword ptr [rbx+rdx*4], 20h ; ' '
            vinsertps xmm0, xmm0, dword ptr [rbx+r8*4], 30h ; '0'
          }
          v32 = _mm128_add_ps(v32, _XMM0);
          _XMM0 = LODWORD(speakerlevel[*((int *)v34 - 6)]);
          __asm
          {
            vinsertps xmm0, xmm0, dword ptr [rbx+rcx*4], 10h
            vinsertps xmm0, xmm0, dword ptr [rbx+rdx*4], 20h ; ' '
            vinsertps xmm0, xmm0, dword ptr [rbx+r8*4], 30h ; '0'
          }
          v33 = _mm128_add_ps(v33, _XMM0);
        }
        while ( v35 < (int)(v12 - (v12 & 0x80000007)) );
        _XMM1 = _mm128_add_ps(v33, v32);
        __asm { vmovhlps xmm0, xmm1, xmm1 }
        v47 = _mm128_add_ps(_XMM0, _XMM1);
        v47.m128_f32[0] = v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 245).m128_f32[0];
        v13 = v47;
      }
      v48 = v30;
      if ( v30 < (__int64)v12 )
      {
        if ( v12 - (__int64)v30 >= 4 )
        {
          v49 = (__int64)&v11[v30 / 8u].m256i_i64[1];
          v50 = ((unsigned __int64)(v12 - (__int64)v30 - 4) >> 2) + 1;
          v48 = v30 + 4 * v50;
          do
          {
            v51 = *(int *)(v49 - 8);
            v49 += 16i64;
            v52 = v13;
            v52.m128_f32[0] = (float)((float)((float)(v13.m128_f32[0] + speakerlevel[v51]) + speakerlevel[*(int *)(v49 - 20)]) + speakerlevel[*(int *)(v49 - 16)]) + speakerlevel[*(int *)(v49 - 12)];
            v13 = v52;
            --v50;
          }
          while ( v50 );
        }
        for ( ; v48 < v12; v13 = v54 )
        {
          v53 = v11->m256i_i32[v48++];
          v54 = v13;
          v54.m128_f32[0] = v13.m128_f32[0] + speakerlevel[v53];
        }
      }
      v55 = v13.m128_f32[0] * (float)(omniPercentage / (float)v12);
      if ( v12 >= 4i64 )
      {
        v56 = &v11->m256i_i64[1];
        v57 = ((unsigned __int64)(v12 - 4i64) >> 2) + 1;
        v29 = 4 * v57;
        do
        {
          v58 = *((int *)v56 - 2);
          v56 += 2;
          speakerlevel[v58] = (float)(v31 * speakerlevel[v58]) + v55;
          speakerlevel[*((int *)v56 - 5)] = (float)(v31 * speakerlevel[*((int *)v56 - 5)]) + v55;
          speakerlevel[*((int *)v56 - 4)] = (float)(v31 * speakerlevel[*((int *)v56 - 4)]) + v55;
          speakerlevel[*((int *)v56 - 3)] = (float)(v31 * speakerlevel[*((int *)v56 - 3)]) + v55;
          --v57;
        }
        while ( v57 );
      }
      for ( ; v29 < v12; speakerlevel[v59] = (float)(v31 * speakerlevel[v59]) + v55 )
        v59 = v11->m256i_i32[v29++];
    }
  }
  else
  {
    v14 = 0i64;
    if ( v12 > 0 )
    {
      v15 = panThroughCenter;
      for ( i = 0i64; i < v12; ++i )
      {
        v17 = v11->m256i_i32[i];
        _XMM0 = *((unsigned int *)speakerlevel + 3);
        __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+r15*4] }
        speakerlevel[3] = *(float *)&_XMM1;
        if ( !v15 )
        {
          v20 = (float)(centerPercentage * speakerlevel[v17]) + speakerlevel[2];
          speakerlevel[2] = v20;
          if ( (v20 < 0.0 || v20 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12232, ASSERT_TYPE_ASSERT, "( ( speakerlevel[SD_MIX_CHANNEL_CF] >= 0.0f && speakerlevel[SD_MIX_CHANNEL_CF] <= 1.0f ) )", "( speakerlevel[SD_MIX_CHANNEL_CF] ) = %g", v20) )
            __debugbreak();
          v21 = (float)(1.0 - centerPercentage) * speakerlevel[v17];
          speakerlevel[v17] = v21;
          if ( (v21 < 0.0 || v21 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12234, ASSERT_TYPE_ASSERT, "( ( ( *channel ) >= 0.0f && ( *channel ) <= 1.0f ) )", "( ( *channel ) ) = %g", v21) )
            __debugbreak();
          v15 = panThroughCenter;
        }
        v22 = v13;
        v22.m128_f32[0] = v13.m128_f32[0] + speakerlevel[v17];
        v13 = v22;
      }
      v14 = 0i64;
    }
    speakerlevel[3] = (float)(lfePercentage * lfeScale) * speakerlevel[3];
    if ( omniPercentage > 0.0 )
    {
      v23 = v13.m128_f32[0] * (float)(omniPercentage / (float)v12);
      v24 = 1.0 - omniPercentage;
      if ( v12 >= 4i64 )
      {
        v25 = &v11->m256i_i64[1];
        v26 = ((unsigned __int64)(v12 - 4i64) >> 2) + 1;
        v14 = 4 * v26;
        do
        {
          v27 = *((int *)v25 - 2);
          v25 += 2;
          speakerlevel[v27] = (float)(v24 * speakerlevel[v27]) + v23;
          speakerlevel[*((int *)v25 - 5)] = (float)(v24 * speakerlevel[*((int *)v25 - 5)]) + v23;
          speakerlevel[*((int *)v25 - 4)] = (float)(v24 * speakerlevel[*((int *)v25 - 4)]) + v23;
          speakerlevel[*((int *)v25 - 3)] = (float)(v24 * speakerlevel[*((int *)v25 - 3)]) + v23;
          --v26;
        }
        while ( v26 );
      }
      for ( ; v14 < v12; speakerlevel[v28] = (float)(v24 * speakerlevel[v28]) + v23 )
        v28 = v11->m256i_i32[v14++];
    }
  }
}

/*
==============
SND_AttenuateHPF
==============
*/

float __fastcall SND_AttenuateHPF(double currentValue, float attenuation)
{
  if ( *(float *)&currentValue == -1.0 )
    return attenuation;
  if ( attenuation != -1.0 )
    __asm { vminss  xmm0, xmm0, xmm1 }
  return *(float *)&currentValue;
}

/*
==============
SND_AttenuateLPF
==============
*/

float __fastcall SND_AttenuateLPF(double currentValue, float attenuation)
{
  if ( *(float *)&currentValue == -1.0 )
    return attenuation;
  if ( attenuation != -1.0 )
    __asm { vminss  xmm0, xmm0, xmm1 }
  return *(float *)&currentValue;
}

/*
==============
SND_BankDetailStream_Debug
==============
*/
void SND_BankDetailStream_Debug(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  unsigned __int64 v2; 
  bool active; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  const ScreenPlacement *v6; 
  float v7; 
  float v8; 
  const char *v9; 
  int v10; 
  const dvar_t *v11; 
  float v12; 
  int integer; 
  const dvar_t *v14; 
  int v15; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  const char **v19; 
  unsigned int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  const char *v24; 
  __int64 v25; 
  GfxFont *smallDevFont; 
  int v27; 
  const char *v28; 
  int v29; 
  __int128 v30; 
  GfxFont *v31; 
  const char *v32; 
  __int128 v33; 
  __int64 v34; 
  GfxFont *v35; 
  const char *v36; 
  __int128 v37; 
  int v38; 
  const SndBankInfo **v39; 
  const SndBankInfo *v40; 
  const SndBank *bank; 
  int v42; 
  SndBankDetailStreamingRequest *detailStreamRequests; 
  int numDetailStreamRequests; 
  int v45; 
  __int64 v46; 
  __int64 v47; 
  SndBankDetailStreamingRequest *v48; 
  const SndBankInfo *bankInfo; 
  SndBankDetailStreamingRequest *v50; 
  GfxFont *v51; 
  const vec4_t *color; 
  const char *v53; 
  __int128 v54; 
  GfxFont *v55; 
  const char *v56; 
  char *fmt; 
  char *fmta; 
  char *s; 
  int v60; 
  const ScreenPlacement *v61; 
  __int64 v62; 
  int v63; 
  int v64; 
  __int64 v65[5]; 
  __int128 v66; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    v2 = (unsigned __int64)&g_snd.listenerFence & 3;
    do
    {
      if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
    active = g_snd.listeners[0].active;
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
    _InterlockedExchange(&g_snd.listenerFence, 0);
    if ( active )
    {
      v66 = v1;
      ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
      font = cls.smallDevFont;
      v6 = ActivePlacement;
      v61 = ActivePlacement;
      v7 = ActivePlacement->virtualViewableMin.v[0];
      v8 = ActivePlacement->virtualViewableMin.v[1];
      v9 = j_va("Sound Bank Streaming Debug");
      v10 = CG_DrawDevString(v6, v7, v8, 0.69999999, 0.69999999, v9, &colorCyan, 5, font);
      v11 = DCONST_DVARINT_snd_transient_bank_budget_weapons;
      v65[0] = (__int64)"weapons";
      v65[1] = (__int64)"vehicles";
      v65[2] = (__int64)"scripts";
      v65[3] = (__int64)"triggers";
      v65[4] = (__int64)"resident";
      v12 = v8 + (float)v10;
      if ( !DCONST_DVARINT_snd_transient_bank_budget_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_weapons") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      integer = v11->current.integer;
      v14 = DCONST_DVARINT_snd_transient_bank_budget_vehicles;
      LODWORD(v62) = integer;
      if ( !DCONST_DVARINT_snd_transient_bank_budget_vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_vehicles") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = v14->current.integer;
      v16 = DCONST_DVARINT_snd_transient_bank_budget_scripts;
      HIDWORD(v62) = v15;
      if ( !DCONST_DVARINT_snd_transient_bank_budget_scripts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_scripts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      v17 = v16->current.integer;
      v18 = DCONST_DVARINT_snd_transient_bank_budget_triggers;
      v63 = v17;
      if ( !DCONST_DVARINT_snd_transient_bank_budget_triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_triggers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v19 = (const char **)v65;
      v20 = 0;
      v64 = v18->current.integer;
      v21 = 0;
      v22 = 0i64;
      do
      {
        v23 = *(_DWORD *)((char *)&v62 + v22 * 4);
        v24 = *v19;
        v25 = (unsigned int)g_sb.bankStreamBytesUsed[v22];
        smallDevFont = cls.smallDevFont;
        if ( v23 < 0 )
        {
          v28 = j_va("category[%3d]: %25s - %10d bytes", (unsigned int)v21, v24, v25);
        }
        else
        {
          v27 = *(_DWORD *)((char *)&v62 + v22 * 4);
          if ( v23 < 1 )
            v27 = 1;
          LODWORD(s) = (int)(float)((float)((float)(int)v25 / (float)v27) * 100.0);
          LODWORD(fmt) = *(_DWORD *)((char *)&v62 + v22 * 4);
          v28 = j_va("category[%3d]: %25s - %10d bytes / %10d bytes max (%3d%%)", (unsigned int)v21, v24, v25, fmt, s);
        }
        v29 = CG_DrawDevString(v6, v7, v12, 0.69999999, 0.69999999, v28, &colorWhite, 5, smallDevFont);
        v20 += g_sb.bankStreamBytesUsed[v22];
        ++v21;
        ++v19;
        ++v22;
        v30 = 0i64;
        *(float *)&v30 = (float)v29 + v12;
        v12 = *(float *)&v30;
      }
      while ( v21 < 4 );
      v31 = cls.smallDevFont;
      v32 = j_va("                                           %10d total bytes", v20);
      *(float *)&v30 = *(float *)&v30 + (float)CG_DrawDevString(v6, v7, *(float *)&v30, 0.69999999, 0.69999999, v32, &colorWhite, 5, v31);
      v33 = v30;
      Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
      v34 = 0i64;
      v60 = 0;
      v62 = 0i64;
      do
      {
        v35 = cls.smallDevFont;
        v36 = j_va("Category %s", (const char *)v65[v34]);
        v37 = v33;
        *(float *)&v37 = *(float *)&v33 + (float)CG_DrawDevString(v6, v7, *(float *)&v33, 0.69999999, 0.69999999, v36, &colorWhite, 5, v35);
        v33 = v37;
        v38 = 32;
        v39 = (const SndBankInfo **)&g_sb.bankStack[32];
        do
        {
          v40 = *v39;
          if ( !*v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8574, ASSERT_TYPE_ASSERT, "(bankInfo)", (const char *)&queryFormat, "bankInfo") )
            __debugbreak();
          bank = v40->bank;
          if ( !v40->bank || !v40->bankActive || !bank->name )
            goto LABEL_61;
          if ( bank->streamInfo.alwaysLoaded )
          {
            if ( v34 == 4 )
              goto LABEL_57;
            goto LABEL_61;
          }
          v42 = v60;
          if ( v34 != 4 )
          {
            detailStreamRequests = g_sb.detailStreamRequests;
            if ( v60 == 2 )
              detailStreamRequests = g_sb.scriptDetailStreamRequests;
            numDetailStreamRequests = g_sb.numDetailStreamRequests;
            v45 = 0;
            v46 = 0i64;
            if ( v60 == 2 )
              numDetailStreamRequests = g_sb.numScriptDetailStreamRequests;
            v47 = numDetailStreamRequests;
            if ( numDetailStreamRequests <= 0 )
            {
LABEL_53:
              v34 = v62;
              v6 = v61;
              goto LABEL_62;
            }
            v48 = detailStreamRequests;
            while ( 1 )
            {
              bankInfo = v48->bankInfo;
              if ( bankInfo )
              {
                if ( bankInfo == v40 )
                {
                  v42 = v60;
                  v50 = &detailStreamRequests[v45];
                  if ( !v50 || v50->streamCategory != v60 )
                    goto LABEL_53;
                  v6 = v61;
LABEL_57:
                  v51 = cls.smallDevFont;
                  color = &colorWhite;
                  if ( v40->streamIsActive )
                    color = &colorGreen;
                  LODWORD(fmta) = SND_BankDetailStreaming_BankSizeBytes(v40);
                  v53 = j_va("bank[%3d] %30s - priority = %3d, bytes = %10d", (unsigned int)v38, v40->bank->name, (unsigned int)v40->streamPriority, fmta);
                  v54 = v33;
                  *(float *)&v54 = *(float *)&v33 + (float)CG_DrawDevString(v6, v7, *(float *)&v33, 0.69999999, 0.69999999, v53, color, 5, v51);
                  v33 = v54;
LABEL_60:
                  v34 = v62;
LABEL_61:
                  v42 = v60;
                  break;
                }
              }
              else
              {
                Com_PrintWarning(9, "SND_BankDetailStream_Debug(): Request for %s has no associated SndBankInfo\n", v48->detailBank->bank.name);
              }
              ++v45;
              ++v46;
              ++v48;
              if ( v46 >= v47 )
              {
                v6 = v61;
                goto LABEL_60;
              }
            }
          }
LABEL_62:
          ++v38;
          ++v39;
        }
        while ( v38 < 800 );
        ++v34;
        v60 = v42 + 1;
        v62 = v34;
      }
      while ( v34 <= 4 );
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      v55 = cls.smallDevFont;
      v56 = j_va("scripted soundbanks state: %llu", g_sb.scriptedSoundbanksStateBitfield);
      CG_DrawDevString(v6, v7, *(float *)&v33, 0.69999999, 0.69999999, v56, &colorWhite, 5, v55);
    }
  }
}

/*
==============
SND_CalcAndAlignDesiredSampleIndex
==============
*/
__int64 SND_CalcAndAlignDesiredSampleIndex(const int startMsec, const int sampleCount, const int sampleRate)
{
  float v3; 
  int v5; 
  int v6; 
  __int64 result; 

  v3 = (float)((float)startMsec * 0.001) * (float)sampleRate;
  v5 = (int)v3 % 8;
  v6 = (int)v3 - v5;
  if ( v5 > 4 )
    v6 += 8;
  if ( sampleCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 654, ASSERT_TYPE_ASSERT, "(totalSamples > 0)", (const char *)&queryFormat, "totalSamples > 0") )
    __debugbreak();
  if ( v6 >= sampleCount )
    v6 += -8 - ((v6 - sampleCount) & 0xFFFFFFF8);
  result = 0i64;
  if ( v6 >= 0 )
    return (unsigned int)v6;
  return result;
}

/*
==============
SND_CalcAttenuation
==============
*/
float SND_CalcAttenuation(const float baseVolume, const float volumeScale, const SndAlias *p_alias, const unsigned __int64 sndEnt, const snd_alias_system_t system)
{
  float v5; 
  SndVoiceParams params; 

  SND_SetUpVoiceParams(&params, p_alias, sndEnt, system);
  v5 = (float)((float)((float)((float)(baseVolume * volumeScale) * params.entChannelVol) * params.levelFadeInVol) * params.volModValue) * params.entityVolume;
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
    return v5 * params.globalVolume;
  else
    return (float)(v5 * params.scriptSoundFade) * params.globalVolume;
}

/*
==============
SND_CalcVoice3DInfo
==============
*/
void SND_CalcVoice3DInfo(SndVoice *voice, snd_listener *outListener, vec3_t *outListenerSpaceVoicePosition, tmat33_t<vec3_t> *outVoiceOrientation)
{
  SecureVec3 outVoicePosition; 
  __int64 v9; 
  tmat33_t<vec3_t> outVoiceMatrix; 

  v9 = -2i64;
  if ( cg_maxLocalClients <= 0 )
  {
    *(_QWORD *)outListenerSpaceVoicePosition->v = 0i64;
    outListenerSpaceVoicePosition->v[2] = 0.0;
    MatrixIdentity33(outVoiceOrientation);
    outListener->orient = orIdentity;
    outListener->localClientNum = LOCAL_CLIENT_INVALID;
    voice->reverbDef = NULL;
  }
  else
  {
    SND_UpdateVoicePosition(voice, &outVoicePosition, &outVoiceMatrix);
    SND_GetListenerNearestToOrigin((const vec3_t *)&outVoicePosition, outListener);
    outListenerSpaceVoicePosition->v[0] = outVoicePosition.x - outListener->orient.origin.v[0];
    outListenerSpaceVoicePosition->v[1] = outVoicePosition.y - outListener->orient.origin.v[1];
    outListenerSpaceVoicePosition->v[2] = outVoicePosition.z - outListener->orient.origin.v[2];
    AxisCopy(&outVoiceMatrix, outVoiceOrientation);
    if ( SND_EntChannelFarReverbBehavior((unsigned __int8)(voice->alias->flags >> 10)) && CG_FindAudioTriggerAtPoint(outListener->localClientNum, (const vec3_t *)&outVoicePosition, 0x40u, &voice->propagationTriggerIndex) )
      CG_GetReverbDefForTrigger(outListener->localClientNum, voice->propagationTriggerIndex, (const vec3_t *)&outVoicePosition, &voice->reverbDef);
    else
      voice->reverbDef = NULL;
    memset(&outVoicePosition, 0, sizeof(outVoicePosition));
  }
}

/*
==============
SND_CalcVoicePitch
==============
*/
float SND_CalcVoicePitch(const int frametime, SndVoice *voice)
{
  float v3; 

  v3 = (float)(voice->pitchScale * voice->basepitch) * voice->dopplerEffectPitch;
  SND_UpdateParameter(&voice->pitchInfo, frametime, 0);
  return (float)((float)(v3 * voice->pitchInfo.value) * voice->params.timescalePitch) * voice->params.entityPitch;
}

/*
==============
SND_CalcVoiceVolume
==============
*/
float SND_CalcVoiceVolume(const int frametime, SndVoice *voice)
{
  float v3; 
  float v4; 
  float v6; 
  float v8; 
  int flags; 
  int v10; 
  int v11; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  double Float_Internal_DebugName; 
  double v17; 
  double v18; 
  float v19; 
  double v20; 
  double v21; 
  const dvar_t *v22; 
  const SndAlias *alias; 
  const dvar_t *v26; 
  const char *string; 
  const SndAlias *v28; 
  const dvar_t *v29; 
  const char *v30; 
  const char *VolModName; 
  const SndAlias *v32; 
  const dvar_t *v33; 
  const char *v34; 
  const char *v35; 
  const SndAlias *v36; 
  const dvar_t *v37; 
  const char *v38; 
  const char *v39; 
  const SndAlias *v41; 
  const dvar_t *v42; 
  const char *v43; 
  const char *EntChannelName; 

  v4 = (float)((float)((float)((float)(voice->volumeScale * voice->basevolume) * voice->params.entChannelVol) * voice->params.levelFadeInVol) * voice->params.volModValue) * voice->params.entityVolume;
  v3 = v4;
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
    v3 = v4 * voice->params.scriptSoundFade;
  v6 = (float)(v3 * voice->params.globalVolume) * voice->contextLerpVolume;
  if ( frametime > 0 )
  {
    SND_UpdateParameter(&voice->volumeInfo, frametime, 1);
    SND_FaderUpdate(&voice->fadeInOut, (float)frametime * 0.001);
  }
  v8 = (float)((float)((float)(sinf_0(voice->fadeInOut.value * 1.5707964) * (float)(v6 * voice->volumeInfo.value)) * voice->submixAttenuation.value) * voice->params.volModDuckAttenuation) * voice->occlusionVolume.value;
  *(float *)&_XMM7 = v8;
  flags = voice->alias->flags;
  v10 = flags & 0x300000;
  v11 = flags >> 10;
  _XMM8 = 0i64;
  if ( v10 == 0x200000 )
  {
    v13 = DVARFLT_profileMenuOption_licensedMusicVolume;
    if ( !DVARFLT_profileMenuOption_licensedMusicVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_licensedMusicVolume") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    v15 = DVARFLT_profileMenuOption_musicVolume;
    if ( !DVARFLT_profileMenuOption_musicVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_musicVolume") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    *(float *)&_XMM7 = v8 * (float)(value * v15->current.value);
  }
  else
  {
    switch ( SND_GetEntChannelSubmixBus((unsigned __int8)v11) )
    {
      case SND_BUS_SFX:
      case SND_BUS_WEAP_EXP_SCENES:
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_profileMenuOption_effectsVolume, "profileMenuOption_effectsVolume");
        *(float *)&_XMM7 = v8 * *(float *)&Float_Internal_DebugName;
        break;
      case SND_BUS_DIALOGUE:
        v17 = Dvar_GetFloat_Internal_DebugName(DVARFLT_profileMenuOption_voiceVolume, "profileMenuOption_voiceVolume");
        *(float *)&_XMM7 = v8 * *(float *)&v17;
        if ( MLG_IsCoDCasterEnabled() && MLG_IsLocalPlayerMLGSpectator(LOCAL_CLIENT_0) )
          LODWORD(_XMM7) = 0;
        break;
      case SND_BUS_REFERENCE:
        break;
      case SND_BUS_LICENCED:
        v18 = Dvar_GetFloat_Internal_DebugName(DVARFLT_profileMenuOption_musicVolume, "profileMenuOption_musicVolume");
        v19 = *(float *)&v18;
        v20 = Dvar_GetFloat_Internal_DebugName(DVARFLT_profileMenuOption_licensedMusicVolume, "profileMenuOption_licensedMusicVolume");
        *(float *)&_XMM7 = v8 * (float)(v19 * *(float *)&v20);
        break;
      case SND_BUS_MUSIC:
        v21 = Dvar_GetFloat_Internal_DebugName(DVARFLT_profileMenuOption_musicVolume, "profileMenuOption_musicVolume");
        *(float *)&_XMM7 = v8 * *(float *)&v21;
        break;
      default:
        v22 = DVARFLT_profileMenuOption_effectsVolume;
        if ( !DVARFLT_profileMenuOption_effectsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_effectsVolume") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        *(float *)&_XMM7 = v8 * v22->current.value;
        break;
    }
  }
  if ( Dvar_GetBoolSafe("NMMPTOSMKQ") )
  {
    _XMM0 = (unsigned int)voice->system;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm7, xmm8, xmm7, xmm2
    }
  }
  alias = voice->alias;
  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4127, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v26 = DCONST_DVARSTR_snd_solo_alias;
  if ( !DCONST_DVARSTR_snd_solo_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_solo_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  string = v26->current.string;
  if ( string && *string && !SND_ParseSoloMuteSubstring(string, alias->aliasName) || SND_IsMuteAlias(voice->alias) )
    goto LABEL_63;
  v28 = voice->alias;
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4183, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v29 = DCONST_DVARSTR_snd_solo_volmod;
  if ( !DCONST_DVARSTR_snd_solo_volmod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_solo_volmod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v30 = v29->current.string;
  if ( v30 )
  {
    if ( *v30 )
    {
      VolModName = SND_GetVolModName(v28->volModIndex);
      if ( !SND_ParseSoloMuteSubstring(v30, VolModName) )
        goto LABEL_63;
    }
  }
  v32 = voice->alias;
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4199, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v33 = DCONST_DVARSTR_snd_mute_volmod;
  if ( !DCONST_DVARSTR_snd_mute_volmod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_mute_volmod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  v34 = v33->current.string;
  if ( v34 )
  {
    if ( *v34 )
    {
      v35 = SND_GetVolModName(v32->volModIndex);
      if ( SND_ParseSoloMuteSubstring(v34, v35) )
        goto LABEL_63;
    }
  }
  v36 = voice->alias;
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4215, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v37 = DCONST_DVARSTR_snd_solo_channel;
  if ( !DCONST_DVARSTR_snd_solo_channel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_solo_channel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  v38 = v37->current.string;
  if ( v38 && *v38 && (v39 = SND_GetEntChannelName((unsigned __int8)(v36->flags >> 10)), !SND_ParseSoloMuteSubstring(v38, v39)) )
  {
LABEL_63:
    LODWORD(_XMM0) = 0;
  }
  else
  {
    v41 = voice->alias;
    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4231, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
      __debugbreak();
    v42 = DCONST_DVARSTR_snd_mute_channel;
    if ( !DCONST_DVARSTR_snd_mute_channel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_mute_channel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v43 = v42->current.string;
    if ( v43 && *v43 )
    {
      EntChannelName = SND_GetEntChannelName((unsigned __int8)(v41->flags >> 10));
      _XMM0 = SND_ParseSoloMuteSubstring(v43, EntChannelName);
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm7, xmm2
      }
    }
    else
    {
      LODWORD(_XMM0) = _XMM7;
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_CalculateOcclusionValues
==============
*/
void SND_CalculateOcclusionValues(const int voiceIndex, int frameTime)
{
  __int64 v2; 
  float v4; 
  float v5; 
  unsigned int v6; 
  float occlusionAmount; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  SndFader *p_occlusionVolume; 
  const dvar_t *v12; 
  SndFader *p_occlusionCutoff; 
  float v14; 

  v2 = voiceIndex;
  v4 = FLOAT_1_0;
  v5 = FLOAT_1_0;
  v6 = (unsigned __int8)(g_snd.voices[v2].alias->flags >> 10);
  if ( SND_EntChannelHasOcclusion(v6) && (g_snd.voices[v2].sndEnt & 0x1000000000i64) != 0 && !SND_IsEntChannelPASpeaker(v6) )
  {
    occlusionAmount = g_snd.voices[v2].occlusionAmount;
    if ( occlusionAmount > 0.75 )
    {
      v4 = (float)((float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.attnLevel4) + (float)(sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.attnLevel4);
      v8 = (float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.cutoffLevel4;
      v9 = sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.cutoffLevel4;
LABEL_12:
      v5 = v8 + v9;
      goto LABEL_13;
    }
    if ( occlusionAmount > 0.5 )
    {
      v4 = (float)((float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.attnLevel3) + (float)(sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.attnLevel3);
      v8 = (float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.cutoffLevel3;
      v9 = sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.cutoffLevel3;
      goto LABEL_12;
    }
    if ( occlusionAmount > 0.25 )
    {
      v4 = (float)((float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.attnLevel2) + (float)(sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.attnLevel2);
      v8 = (float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.cutoffLevel2;
      v9 = sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.cutoffLevel2;
      goto LABEL_12;
    }
    if ( occlusionAmount > 0.0 )
    {
      v4 = (float)((float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.attnLevel1) + (float)(sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.attnLevel1);
      v8 = (float)(1.0 - sdGlob.eqLerp) * g_snd.voices[v2].params.occlusionParams0.cutoffLevel1;
      v9 = sdGlob.eqLerp * g_snd.voices[v2].params.occlusionParams1.cutoffLevel1;
      goto LABEL_12;
    }
  }
LABEL_13:
  v10 = DCONST_DVARFLT_snd_occfadetime;
  if ( !DCONST_DVARFLT_snd_occfadetime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occfadetime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  p_occlusionVolume = &g_snd.voices[v2].occlusionVolume;
  SND_FaderSetRateTime(p_occlusionVolume, v10->current.value);
  v12 = DCONST_DVARFLT_snd_occfadetime;
  if ( !DCONST_DVARFLT_snd_occfadetime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occfadetime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  p_occlusionCutoff = &g_snd.voices[v2].occlusionCutoff;
  SND_FaderSetRateTime(p_occlusionCutoff, v12->current.value);
  SND_FaderSetGoal(p_occlusionVolume, v4);
  SND_FaderSetGoal(p_occlusionCutoff, v5);
  if ( !frameTime )
  {
    p_occlusionVolume->value = p_occlusionVolume->goal;
    p_occlusionCutoff->value = p_occlusionCutoff->goal;
  }
  v14 = (float)frameTime * 0.001;
  SND_FaderUpdate(p_occlusionVolume, v14);
  SND_FaderUpdate(p_occlusionCutoff, v14);
}

/*
==============
SND_CanDoPhysicsQuery
==============
*/
bool SND_CanDoPhysicsQuery()
{
  return s_soundPhysicsQueryBlock == 0;
}

/*
==============
SND_ChangeSoundAliasListValue
==============
*/
void SND_ChangeSoundAliasListValue(const SndAliasList *aliasList, const char *columnName, const char *value)
{
  int v6; 
  __int64 v7; 
  SndAlias *structure; 
  __int64 v9; 
  const char *v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  SndAliasList *Alias; 
  unsigned int oldEntChannel; 

  if ( !aliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16749, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  if ( !columnName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16750, ASSERT_TYPE_ASSERT, "(columnName)", (const char *)&queryFormat, "columnName") )
    __debugbreak();
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16751, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v6 = 0;
  if ( aliasList->count > 0 )
  {
    v7 = 0i64;
    while ( 2 )
    {
      structure = &aliasList->head[v7];
      oldEntChannel = (unsigned __int8)(structure->flags >> 10);
      if ( SND_CsvSetField("devhost", 0x38u, SND_ALIAS_FIELDS, columnName, value, 0, structure, NULL) == -1 )
      {
        Com_PrintWarning(9, "SND_ChangeSoundAliasListValue: Invalid CSV column '%s'\n", columnName);
      }
      else
      {
        v9 = 0x7FFFFFFFi64;
        v10 = columnName;
        if ( !columnName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        do
        {
          v11 = (unsigned __int8)v10["SecondaryAliasName" - columnName];
          v12 = v9;
          v13 = *(unsigned __int8 *)v10++;
          --v9;
          if ( !v12 )
            break;
          if ( v11 != v13 )
          {
            v14 = v11 + 32;
            if ( (unsigned int)(v11 - 65) > 0x19 )
              v14 = v11;
            v11 = v14;
            v15 = v13 + 32;
            if ( (unsigned int)(v13 - 65) > 0x19 )
              v15 = v13;
            if ( v11 != v15 )
              goto LABEL_29;
          }
        }
        while ( v11 );
        if ( value && *value )
        {
          Alias = SND_FindAlias(value);
          if ( !Alias )
          {
            Com_PrintWarning(9, "SND_ChangeSoundAliasListValue: Invalid SecondaryAliasName '%s' (not loaded?)\n", value);
            return;
          }
          structure->secondaryAliasName = Alias->aliasName;
        }
        else
        {
          structure->secondaryAliasName = NULL;
          structure->secondaryId = 0;
        }
LABEL_29:
        SND_ChangeSoundAliasValuesOnPlayingChannels(structure, oldEntChannel);
        ++v6;
        ++v7;
        if ( v6 < aliasList->count )
          continue;
      }
      break;
    }
  }
}

/*
==============
SND_ChangeSoundAliasValuesOnPlayingChannels
==============
*/
void SND_ChangeSoundAliasValuesOnPlayingChannels(const SndAlias *alias, const unsigned int oldEntChannel)
{
  unsigned int v4; 
  bool IsEntChannel3D; 
  int v6; 
  int v7; 
  float *p_basevolume; 
  bool *v9; 
  __int64 *v10; 
  __int64 v11; 
  __int64 v12; 
  const char *aliasName; 
  __int64 v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  float volMin; 
  double v19; 
  float v20; 
  float pitchMin; 
  float v22; 
  double v23; 
  float v24; 
  const SndCurve *LpfCurveById; 
  const SndCurve *HpfCurveById; 
  const SndCurve *RvbCurveById; 
  const SpeakerMap *SpeakerMapById; 
  const DopplerPreset *DopplerPresetById; 
  const OcclusionShape *OcclusionShapeById; 
  unsigned int duck; 
  __m256i *v32; 
  const SndDuck *DuckById; 
  vec2_t *v34; 
  float *v35; 
  __int64 v36; 
  __int128 v37; 
  bool v38; 
  double v39; 
  const char *EntChannelName; 
  const char *v41; 
  __int64 v42; 
  unsigned int entchannel; 
  bool *voiceAlloc; 
  unsigned int *chaninfoEntchannel; 
  const SndCurve *VfCurveById; 
  bool v47; 
  int index; 
  int v50; 

  v4 = (unsigned __int8)(alias->flags >> 10);
  entchannel = v4;
  IsEntChannel3D = SND_IsEntChannel3D(v4);
  v47 = IsEntChannel3D == SND_IsEntChannel3D(oldEntChannel);
  v6 = 0;
  v50 = 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  cls.inUpdateSound = 1;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
  voiceAlloc = sdGlob.voiceAlloc;
  v7 = 0;
  chaninfoEntchannel = g_snd.chaninfoEntchannel;
  p_basevolume = &g_snd.voices[0].basevolume;
  index = 0;
  v9 = sdGlob.voiceAlloc;
  do
  {
    if ( (unsigned int)v7 > 0x62 )
    {
      LODWORD(v42) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v42) )
        __debugbreak();
      v7 = index;
    }
    if ( !*v9 )
      goto LABEL_54;
    v10 = (__int64 *)*((_QWORD *)p_basevolume + 9);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16662, ASSERT_TYPE_ASSERT, "(playingAlias != nullptr)", (const char *)&queryFormat, "playingAlias != nullptr") )
      __debugbreak();
    v11 = *v10;
    v12 = 0x7FFFFFFFi64;
    aliasName = alias->aliasName;
    if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v14 = v11 - (_QWORD)aliasName;
    do
    {
      v15 = aliasName[v14];
      v16 = v12;
      v17 = *aliasName++;
      --v12;
      if ( !v16 )
        break;
      if ( v15 != v17 )
        goto LABEL_53;
    }
    while ( v15 );
    if ( *((_DWORD *)v10 + 18) != alias->sequence )
    {
LABEL_53:
      v7 = index;
      v4 = entchannel;
      v6 = v50;
LABEL_54:
      v38 = v47;
      goto LABEL_55;
    }
    volMin = alias->volMin;
    v19 = I_random();
    v20 = (float)(*(float *)&v19 * (float)(alias->volMax - volMin)) + volMin;
    I_fclamp(v20, 0.0, 4.0);
    pitchMin = alias->pitchMin;
    v22 = v20;
    v23 = I_random();
    v24 = (float)(*(float *)&v23 * (float)(alias->pitchMax - pitchMin)) + pitchMin;
    I_fclamp(v24, 0.001, 2.0);
    VfCurveById = SND_GetVfCurveById(alias->volumeFalloffCurve);
    LpfCurveById = SND_GetLpfCurveById(alias->lpfCurve);
    HpfCurveById = SND_GetHpfCurveById(alias->hpfCurve);
    RvbCurveById = SND_GetRvbCurveById(alias->reverbSendCurve);
    SpeakerMapById = SND_GetSpeakerMapById(alias->speakerMap);
    DopplerPresetById = SND_GetDopplerPresetById(alias->dopplerPreset);
    OcclusionShapeById = SND_GetOcclusionShapeById(alias->occlusionShape);
    *p_basevolume = v22;
    p_basevolume[11] = v24;
    duck = alias->duck;
    v32 = (__m256i *)OcclusionShapeById;
    if ( duck )
      DuckById = SND_GetDuckById(duck);
    else
      DuckById = NULL;
    *((_QWORD *)p_basevolume + 33) = DuckById;
    if ( !VfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16690, ASSERT_TYPE_ASSERT, "(vfCurve)", (const char *)&queryFormat, "vfCurve") )
      __debugbreak();
    if ( !LpfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16691, ASSERT_TYPE_ASSERT, "(lpfCurve)", (const char *)&queryFormat, "lpfCurve") )
      __debugbreak();
    if ( !HpfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16692, ASSERT_TYPE_ASSERT, "(hpfCurve)", (const char *)&queryFormat, "hpfCurve") )
      __debugbreak();
    if ( !RvbCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16693, ASSERT_TYPE_ASSERT, "(rvbCurve)", (const char *)&queryFormat, "rvbCurve") )
      __debugbreak();
    if ( !SpeakerMapById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16694, ASSERT_TYPE_ASSERT, "(speakerMap)", (const char *)&queryFormat, "speakerMap") )
      __debugbreak();
    if ( !DopplerPresetById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16695, ASSERT_TYPE_ASSERT, "(dopplerPreset)", (const char *)&queryFormat, "dopplerPreset") )
      __debugbreak();
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16696, ASSERT_TYPE_ASSERT, "(occlusionShape)", (const char *)&queryFormat, "occlusionShape") )
      __debugbreak();
    *(_OWORD *)(p_basevolume + 121) = *(_OWORD *)VfCurveById->name;
    *(_OWORD *)(p_basevolume + 125) = *(_OWORD *)&VfCurveById->name[16];
    *(_OWORD *)(p_basevolume + 129) = *(_OWORD *)&VfCurveById->name[32];
    *(_OWORD *)(p_basevolume + 133) = *(_OWORD *)&VfCurveById->name[48];
    *(_OWORD *)(p_basevolume + 137) = *(_OWORD *)&VfCurveById->id;
    *(_OWORD *)(p_basevolume + 141) = *(_OWORD *)VfCurveById->points[1].v;
    *(_OWORD *)(p_basevolume + 145) = *(_OWORD *)VfCurveById->points[3].v;
    *(_OWORD *)(p_basevolume + 149) = *(_OWORD *)VfCurveById->points[5].v;
    *(_OWORD *)(p_basevolume + 153) = *(_OWORD *)VfCurveById->points[7].v;
    *(_OWORD *)(p_basevolume + 157) = *(_OWORD *)VfCurveById->points[9].v;
    *(_OWORD *)(p_basevolume + 161) = *(_OWORD *)VfCurveById->points[11].v;
    *(_OWORD *)(p_basevolume + 165) = *(_OWORD *)VfCurveById->points[13].v;
    *(vec2_t *)(p_basevolume + 169) = VfCurveById->points[15];
    *(_OWORD *)(p_basevolume + 171) = *(_OWORD *)LpfCurveById->name;
    *(_OWORD *)(p_basevolume + 175) = *(_OWORD *)&LpfCurveById->name[16];
    *(_OWORD *)(p_basevolume + 179) = *(_OWORD *)&LpfCurveById->name[32];
    *(_OWORD *)(p_basevolume + 183) = *(_OWORD *)&LpfCurveById->name[48];
    *(_OWORD *)(p_basevolume + 187) = *(_OWORD *)&LpfCurveById->id;
    *(_OWORD *)(p_basevolume + 191) = *(_OWORD *)LpfCurveById->points[1].v;
    *(_OWORD *)(p_basevolume + 195) = *(_OWORD *)LpfCurveById->points[3].v;
    *(_OWORD *)(p_basevolume + 199) = *(_OWORD *)LpfCurveById->points[5].v;
    v34 = &LpfCurveById->points[7];
    *(_OWORD *)(p_basevolume + 203) = *(_OWORD *)v34->v;
    *(_OWORD *)(p_basevolume + 207) = *(_OWORD *)v34[2].v;
    *(_OWORD *)(p_basevolume + 211) = *(_OWORD *)v34[4].v;
    *(_OWORD *)(p_basevolume + 215) = *(_OWORD *)v34[6].v;
    *(vec2_t *)(p_basevolume + 219) = v34[8];
    *(_OWORD *)(p_basevolume + 221) = *(_OWORD *)HpfCurveById->name;
    *(_OWORD *)(p_basevolume + 225) = *(_OWORD *)&HpfCurveById->name[16];
    *(_OWORD *)(p_basevolume + 229) = *(_OWORD *)&HpfCurveById->name[32];
    *(_OWORD *)(p_basevolume + 233) = *(_OWORD *)&HpfCurveById->name[48];
    *(_OWORD *)(p_basevolume + 237) = *(_OWORD *)&HpfCurveById->id;
    *(_OWORD *)(p_basevolume + 241) = *(_OWORD *)HpfCurveById->points[1].v;
    *(_OWORD *)(p_basevolume + 245) = *(_OWORD *)HpfCurveById->points[3].v;
    *(_OWORD *)(p_basevolume + 249) = *(_OWORD *)HpfCurveById->points[5].v;
    *(_OWORD *)(p_basevolume + 253) = *(_OWORD *)HpfCurveById->points[7].v;
    *(_OWORD *)(p_basevolume + 257) = *(_OWORD *)HpfCurveById->points[9].v;
    *(_OWORD *)(p_basevolume + 261) = *(_OWORD *)HpfCurveById->points[11].v;
    *(_OWORD *)(p_basevolume + 265) = *(_OWORD *)HpfCurveById->points[13].v;
    *(vec2_t *)(p_basevolume + 269) = HpfCurveById->points[15];
    *(_OWORD *)(p_basevolume + 271) = *(_OWORD *)RvbCurveById->name;
    *(_OWORD *)(p_basevolume + 275) = *(_OWORD *)&RvbCurveById->name[16];
    *(_OWORD *)(p_basevolume + 279) = *(_OWORD *)&RvbCurveById->name[32];
    *(_OWORD *)(p_basevolume + 283) = *(_OWORD *)&RvbCurveById->name[48];
    *(_OWORD *)(p_basevolume + 287) = *(_OWORD *)&RvbCurveById->id;
    *(_OWORD *)(p_basevolume + 291) = *(_OWORD *)RvbCurveById->points[1].v;
    *(_OWORD *)(p_basevolume + 295) = *(_OWORD *)RvbCurveById->points[3].v;
    *(_OWORD *)(p_basevolume + 299) = *(_OWORD *)RvbCurveById->points[5].v;
    *(_OWORD *)(p_basevolume + 303) = *(_OWORD *)RvbCurveById->points[7].v;
    *(_OWORD *)(p_basevolume + 307) = *(_OWORD *)RvbCurveById->points[9].v;
    *(_OWORD *)(p_basevolume + 311) = *(_OWORD *)RvbCurveById->points[11].v;
    *(_OWORD *)(p_basevolume + 315) = *(_OWORD *)RvbCurveById->points[13].v;
    v35 = p_basevolume + 321;
    *(vec2_t *)(p_basevolume + 319) = RvbCurveById->points[15];
    v36 = 3i64;
    do
    {
      v35 += 32;
      v37 = *(_OWORD *)SpeakerMapById->name;
      SpeakerMapById = (const SpeakerMap *)((char *)SpeakerMapById + 128);
      *((_OWORD *)v35 - 8) = v37;
      *((_OWORD *)v35 - 7) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[4];
      *((_OWORD *)v35 - 6) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[8];
      *((_OWORD *)v35 - 5) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[12];
      *((_OWORD *)v35 - 4) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[16];
      *((_OWORD *)v35 - 3) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[20];
      *((_OWORD *)v35 - 2) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[24];
      *((_OWORD *)v35 - 1) = *(_OWORD *)&SpeakerMapById[-1].stereoTo7144[28];
      --v36;
    }
    while ( v36 );
    v38 = v47;
    *(_OWORD *)v35 = *(_OWORD *)SpeakerMapById->name;
    *((_OWORD *)v35 + 1) = *(_OWORD *)&SpeakerMapById->name[16];
    *((_OWORD *)v35 + 2) = *(_OWORD *)&SpeakerMapById->name[32];
    *((_OWORD *)v35 + 3) = *(_OWORD *)&SpeakerMapById->name[48];
    v35[16] = *(float *)&SpeakerMapById->id;
    *(__m256i *)(p_basevolume + 434) = *(__m256i *)DopplerPresetById->name;
    *(__m256i *)(p_basevolume + 442) = *(__m256i *)&DopplerPresetById->name[32];
    *(_OWORD *)(p_basevolume + 450) = *(_OWORD *)&DopplerPresetById->id;
    v39 = *(double *)&DopplerPresetById->maxPitch;
    v4 = entchannel;
    *((double *)p_basevolume + 227) = v39;
    *((__m256i *)p_basevolume + 57) = *v32;
    *((__m256i *)p_basevolume + 58) = v32[1];
    *((__m256i *)p_basevolume + 59) = v32[2];
    p_basevolume[480] = *(float *)v32[3].m256i_i32;
    if ( entchannel == oldEntChannel || !v47 )
      goto LABEL_51;
    if ( SND_HasFreeVoice(entchannel) )
    {
      SND_RemoveVoice(oldEntChannel);
      SND_AddVoice(entchannel);
      *chaninfoEntchannel = entchannel;
LABEL_51:
      v7 = index;
      v9 = voiceAlloc;
      v6 = v50;
      goto LABEL_55;
    }
    SND_StopVoice(index);
    v7 = index;
    v6 = v50 + 1;
    v9 = voiceAlloc;
    ++v50;
LABEL_55:
    ++chaninfoEntchannel;
    ++v7;
    ++v9;
    index = v7;
    p_basevolume += 492;
    voiceAlloc = v9;
  }
  while ( v7 < 99 );
  cls.inUpdateSound = 0;
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  if ( !v38 )
  {
    EntChannelName = SND_GetEntChannelName(v4);
    Com_PrintWarning(9, "SndAlias %s cannot LiveUpdate EntChannel 2D/3D dimension %s\n", alias->aliasName, EntChannelName);
  }
  if ( v6 > 0 )
  {
    v41 = SND_GetEntChannelName(v4);
    Com_PrintWarning(9, "SndAlias %s stopped %i voices for changed EntChannel %s\n", alias->aliasName, (unsigned int)v6, v41);
  }
}

/*
==============
SND_ClearAllOcclusionSettings
==============
*/
void SND_ClearAllOcclusionSettings(void)
{
  __int64 i; 
  __int64 v1; 

  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7461, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < g_snd.globals->entchannelCount; g_snd.entChanOcclusionParams[v1][1].attnLevel4 = 1.0 )
  {
    v1 = i;
    i = (unsigned int)(i + 1);
    g_snd.entChanOcclusionParams[v1][0].enabled = 0;
    g_snd.entChanOcclusionParams[v1][0].cutoffLevel1 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].cutoffLevel2 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].cutoffLevel3 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].cutoffLevel4 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].attnLevel1 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].attnLevel2 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].attnLevel3 = 1.0;
    g_snd.entChanOcclusionParams[v1][0].attnLevel4 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].enabled = 0;
    g_snd.entChanOcclusionParams[v1][1].cutoffLevel1 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].cutoffLevel2 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].cutoffLevel3 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].cutoffLevel4 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].attnLevel1 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].attnLevel2 = 1.0;
    g_snd.entChanOcclusionParams[v1][1].attnLevel3 = 1.0;
  }
}

/*
==============
SND_ClearDrawOnlyChannel_f
==============
*/
void SND_ClearDrawOnlyChannel_f(void)
{
  if ( Cmd_Argc() == 1 )
    snd_drawOnlyChannel = -1;
  else
    Com_Printf(9, "USAGE: snd_clearDrawOnlyChannel\n");
}

/*
==============
SND_ClearMainReverb
==============
*/
void SND_ClearMainReverb(const float fadetime)
{
  unsigned int defaultHash; 
  BOOL v2; 
  __int64 v3; 

  defaultHash = g_snd.defaultHash;
  if ( sdGlob.currentReverbId[0] == g_snd.defaultHash )
  {
    v2 = 0;
  }
  else if ( sdGlob.currentReverbId[1] == g_snd.defaultHash )
  {
    v2 = 1;
  }
  else
  {
    v2 = g_snd.activeMainReverb != RVB_MAIN_B;
    SND_SetReverbParams(g_snd.defaultHash, (ReverbDescriptor)v2, 0);
  }
  g_snd.activeMainReverb = v2;
  g_snd.reverbSetting[v2].presetId = defaultHash;
  g_snd.reverbSetting[g_snd.activeMainReverb].drylevel = 1.0;
  v3 = 0i64;
  g_snd.reverbSetting[g_snd.activeMainReverb].wetlevel = 0.0;
  if ( g_snd.activeMainReverb != RVB_MAIN_B )
    v3 = 1i64;
  if ( !g_snd.reverbSetting[v3].presetId )
  {
    _XMM0 = (unsigned int)g_snd.activeMainReverb;
    _XMM4 = 0i64;
    __asm
    {
      vpcmpeqd xmm3, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm2, xmm3
    }
    g_snd.mainReverbLerp.rateMS = 0.0;
LABEL_14:
    g_snd.mainReverbLerp.current = *(float *)&_XMM0;
    return;
  }
  if ( fadetime == 0.0 )
  {
    _XMM0 = g_snd.activeMainReverb == RVB_MAIN_B;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
    g_snd.mainReverbLerp.rateMS = 0.0;
    goto LABEL_14;
  }
  g_snd.mainReverbLerp.rateMS = 0.001 / fadetime;
  if ( g_snd.activeMainReverb != RVB_MAIN_B )
    g_snd.mainReverbLerp.rateMS = -0.001 / fadetime;
}

/*
==============
SND_ClearReverbs
==============
*/
void SND_ClearReverbs(void)
{
  unsigned int v0; 
  unsigned int *currentReverbId; 
  int v2; 
  sd_send_effect_param *currentReverbParams; 
  unsigned int defaultHash; 
  unsigned int v5; 
  const SndSendEffectParams *Radverb; 
  const SndSendEffectParams *v7; 
  float v8; 
  SndReverbSetting *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  unsigned int *v13; 
  __int64 v14; 
  __int64 v15; 
  __m256i params; 
  __m256i params_32; 
  __m256i params_64; 
  __m256i v19; 
  __m256i v20; 
  __int128 v21; 
  float delay5HpfCutoff; 

  v0 = 0;
  currentReverbId = sdGlob.currentReverbId;
  v2 = 0;
  currentReverbParams = sdGlob.currentReverbParams;
  do
  {
    defaultHash = g_snd.defaultHash;
    v5 = 0;
    if ( (unsigned int)v2 >= 4 )
    {
      LODWORD(v15) = 4;
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1676, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( RVB_MAX_NUM )", "index doesn't index RVB_MAX_NUM\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    SND_RvParamsDefault((snd_rv_params *)&params);
    SND_DelayParamsDefault((snd_quad_five_tap_delay_params *)&params_64.m256i_u64[2]);
    Radverb = SND_GetRadverb(defaultHash);
    if ( Radverb || (v7 = SND_GetRadverb(g_snd.defaultHash), defaultHash = g_snd.defaultHash, (Radverb = v7) != NULL) )
    {
      *(__int64 *)((char *)&params.m256i_i64[1] + 4) = *(_QWORD *)&Radverb->earlyTime;
      *(__int64 *)((char *)&params.m256i_i64[2] + 4) = *(_QWORD *)&Radverb->earlyGain;
      *(_OWORD *)params_32.m256i_i8 = *(_OWORD *)&Radverb->returnGain;
      params_32.m256i_i32[4] = LODWORD(Radverb->dampLpf);
      params_32.m256i_i64[3] = *(_QWORD *)&Radverb->dryGain;
      params_64.m256i_i64[0] = *(_QWORD *)&Radverb->lateSize;
      params_64.m256i_i32[3] = LODWORD(Radverb->rearLevel);
      params.m256i_i8[4] = 0;
      params.m256i_i32[2] = g_snd.time;
      params_64.m256i_i8[16] = Radverb->delay1enabled;
      *(__int64 *)((char *)&params_64.m256i_i64[2] + 4) = *(_QWORD *)&Radverb->delay1delayTimeMS;
      params_64.m256i_i32[7] = LODWORD(Radverb->delay1LpfCutoff);
      v19.m256i_i32[0] = LODWORD(Radverb->delay1HpfCutoff);
      v19.m256i_i8[4] = Radverb->delay2enabled;
      *(_OWORD *)&v19.m256i_u64[1] = *(_OWORD *)&Radverb->delay2delayTimeMS;
      v19.m256i_i8[24] = Radverb->delay3enabled;
      v19.m256i_i32[7] = LODWORD(Radverb->delay3delayTimeMS);
      v20.m256i_i64[0] = *(_QWORD *)&Radverb->delay3Level;
      v20.m256i_i32[2] = LODWORD(Radverb->delay3HpfCutoff);
      v20.m256i_i8[12] = Radverb->delay4enabled;
      *(_OWORD *)&v20.m256i_u64[2] = *(_OWORD *)&Radverb->delay4delayTimeMS;
      LOBYTE(v21) = Radverb->delay5enabled;
      *(_QWORD *)((char *)&v21 + 4) = *(_QWORD *)&Radverb->delay5delayTimeMS;
      HIDWORD(v21) = LODWORD(Radverb->delay5LpfCutoff);
      delay5HpfCutoff = Radverb->delay5HpfCutoff;
      v5 = defaultHash;
    }
    ++v2;
    *(__m256i *)&currentReverbParams->reverbParams.frameRate = params;
    *(__m256i *)&currentReverbParams->reverbParams.returnGain = params_32;
    *(__m256i *)&currentReverbParams->reverbParams.lateSize = params_64;
    *(__m256i *)&currentReverbParams->delayParams.params[0].hpfCutoff = v19;
    *(__m256i *)&currentReverbParams->delayParams.params[2].level = v20;
    v8 = delay5HpfCutoff;
    *(_OWORD *)&currentReverbParams->delayParams.params[4].enabled = v21;
    currentReverbParams->delayParams.params[4].hpfCutoff = v8;
    ++currentReverbParams;
    *currentReverbId++ = v5;
  }
  while ( v2 < 4 );
  g_snd.mainReverbLerp.current = 0.0;
  g_snd.mainReverbLerp.rateMS = 0.0;
  g_snd.activeMainReverb = RVB_MAIN_A;
  v9 = &g_snd.reverbSetting[1];
  v10 = 0;
  do
  {
    v10 += 2;
    v9[-1].presetId = 0;
    v9->presetId = 0;
    v9 += 2;
  }
  while ( v10 < 2 );
  v11 = 0;
  v12 = &g_snd.farReverbIds[1];
  do
  {
    v11 += 2;
    *(_QWORD *)(v12 - 1) = 0i64;
    v12 += 2;
  }
  while ( v11 < 2 );
  v13 = &g_snd.reverbTrigger[1];
  do
  {
    v0 += 4;
    *(v13 - 1) = 1024;
    *v13 = 1024;
    v13[1] = 1024;
    v13[2] = 1024;
    v13 += 4;
  }
  while ( v0 < 4 );
}

/*
==============
SND_ClearSoloChannel_f
==============
*/
void SND_ClearSoloChannel_f(void)
{
  unsigned int i; 

  if ( Cmd_Argc() == 1 )
  {
    for ( i = 0; g_snd.globals && i < g_snd.globals->entchannelCount; ++i )
    {
      if ( CL_GetLocalClientActiveCount() <= 1 )
      {
        if ( (!g_snd.globals || i >= g_snd.globals->entchannelCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6771, ASSERT_TYPE_ASSERT, "(channel >= 0 && channel < SND_GetEntChannelCount())", (const char *)&queryFormat, "channel >= 0 && channel < SND_GetEntChannelCount()") )
          __debugbreak();
        SND_SetParamValue(&g_snd.levelFadeInChannelVols.channelvol[i], 1.0, 0.0, 1.0, 0);
      }
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_clearSoloChannel\n");
  }
}

/*
==============
SND_ContinueLoopingSound
==============
*/
bool SND_ContinueLoopingSound(const SndAlias *alias, const SndPlayParams *inParams, int *outVoice)
{
  int v6; 
  __int64 v7; 
  bool *voiceAlloc; 
  sd_voice **i; 
  const SndAlias *v10; 
  const char *v11; 
  sd_voice *v12; 
  bool result; 
  SndEntState *EntState; 
  const tmat33_t<vec3_t> *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  float v23; 
  vec3_t outOrigin; 
  __int64 v25; 
  tmat33_t<vec3_t> out; 

  v25 = -2i64;
  v6 = 0;
  v7 = 0i64;
  voiceAlloc = sdGlob.voiceAlloc;
  for ( i = g_sd.voices; ; ++i )
  {
    if ( g_snd.voices[v7].sndEnt != inParams->sndEnt )
      goto LABEL_20;
    if ( (unsigned int)v6 > 0x62 )
    {
      LODWORD(v22) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v22) )
        __debugbreak();
    }
    if ( !*voiceAlloc )
      goto LABEL_20;
    if ( !g_snd.voices[v7].alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3875, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
      __debugbreak();
    v10 = g_snd.voices[v7].alias;
    if ( (v10->flags & 1) == 0 || v10->aliasName != alias->aliasName || v10->contextType != alias->contextType || v10->contextValue != alias->contextValue )
      goto LABEL_20;
    if ( v10->surfaceFlags == alias->surfaceFlags )
      break;
    SND_FaderSetGoal(&g_snd.voices[v7].fadeInOut, 0.0);
    v11 = j_va("Fading out looping voice %i due to surface change", (unsigned int)v6);
    SND_DebugAliasPrint(1, g_snd.voices[v7].alias, v11);
LABEL_20:
    ++v6;
    ++voiceAlloc;
    ++v7;
    if ( v6 >= 99 )
      return 0;
  }
  v12 = *i;
  if ( *i && (v12->state != SD_VOICE_ACTIVE || v12->isSync && v12->syncState != SD_VOICE_SYNC_ACTIVE) )
    goto LABEL_20;
  g_snd.voices[v7].volumeScale = inParams->volumeScale;
  g_snd.voices[v7].pitchScale = inParams->pitch;
  g_snd.voices[v7].distanceScale = inParams->distanceScale;
  SND_FaderSetGoal(&g_snd.voices[v7].fadeInOut, 1.0);
  g_snd.voices[v7].looptime = g_snd.looptime;
  EntState = SND_FindEntState(g_snd.voices[v7].sndEnt, 0);
  v15 = (const tmat33_t<vec3_t> *)EntState;
  if ( EntState && EntState->hasPosition )
  {
    SndEntState_GetOrigin(EntState, &outOrigin);
    AxisCopy(v15 + 2, &out);
    if ( ((LODWORD(inParams->org.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(inParams->org.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(inParams->org.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3922, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inParams.org )[0] ) && !IS_NAN( ( inParams.org )[1] ) && !IS_NAN( ( inParams.org )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inParams.org )[0] ) && !IS_NAN( ( inParams.org )[1] ) && !IS_NAN( ( inParams.org )[2] )") )
      __debugbreak();
    v16 = inParams->org.v[0] - outOrigin.v[0];
    v17 = inParams->org.v[1] - outOrigin.v[1];
    v18 = inParams->org.v[2] - outOrigin.v[2];
    g_snd.voices[v7].offset.v[0] = (float)((float)(v17 * out.m[0].v[1]) + (float)(v16 * out.m[0].v[0])) + (float)(v18 * out.m[0].v[2]);
    g_snd.voices[v7].offset.v[1] = (float)((float)(v17 * out.m[1].v[1]) + (float)(v16 * out.m[1].v[0])) + (float)(v18 * out.m[1].v[2]);
    v19 = (float)(v17 * out.m[2].v[1]) + (float)(v16 * out.m[2].v[0]);
    v20 = v18 * out.m[2].v[2];
    v21 = v19 + (float)(v18 * out.m[2].v[2]);
    g_snd.voices[v7].offset.v[2] = v21;
    v23 = g_snd.voices[v7].offset.v[0];
    if ( (LODWORD(v23) & 0x7F800000) == 2139095040 || (v23 = g_snd.voices[v7].offset.v[1], (LODWORD(v23) & 0x7F800000) == 2139095040) || (v23 = v19 + v20, (LODWORD(v21) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3927, ASSERT_TYPE_SANITY, "( !IS_NAN( ( voice->offset )[0] ) && !IS_NAN( ( voice->offset )[1] ) && !IS_NAN( ( voice->offset )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( voice->offset )[0] ) && !IS_NAN( ( voice->offset )[1] ) && !IS_NAN( ( voice->offset )[2] )", v23) )
        __debugbreak();
    }
  }
  else
  {
    g_snd.voices[v7].offset.v[0] = inParams->org.v[0];
    g_snd.voices[v7].offset.v[1] = inParams->org.v[1];
    g_snd.voices[v7].offset.v[2] = inParams->org.v[2];
  }
  *outVoice = v6;
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
  return result;
}

/*
==============
SND_CreateAutoSimId
==============
*/
__int64 SND_CreateAutoSimId(int index, int instanceId)
{
  __int64 v2; 
  __int64 v4; 
  __int64 result; 
  int v7; 

  v2 = index;
  if ( (unsigned int)index >= 0x40 )
  {
    v7 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15243, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( g_sd.autoSims ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( g_sd.autoSims )\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
  }
  v4 = v2;
  g_sd.autoSims[v4].startTime = g_sd.autoSimClock;
  g_sd.autoSims[v4].instanceId = instanceId;
  result = (instanceId << 16) | (unsigned int)(unsigned __int16)v2;
  g_sd.autoSims[v4].currentShotCount = SND_WEAP_SHOT_UNCOUNTED;
  return result;
}

/*
==============
SND_DeInitMemory
==============
*/

void SND_DeInitMemory(void)
{
  SD_AllocDeInit();
}

/*
==============
SND_DeactivateAllEq
==============
*/
void SND_DeactivateAllEq(int eqIndex)
{
  int v2; 
  bool *p_enabled; 
  int v4; 
  bool *v5; 
  __int64 v6; 
  __int64 v7; 

  v2 = 0;
  p_enabled = &sdGlob.eqParams[eqIndex][0][0].enabled;
  do
  {
    v4 = 0;
    v5 = p_enabled;
    do
    {
      if ( (unsigned int)v2 >= 0x100 )
      {
        LODWORD(v7) = 256;
        LODWORD(v6) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 926, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v7) = 2;
        LODWORD(v6) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( (unsigned int)eqIndex >= 2 )
      {
        LODWORD(v7) = 2;
        LODWORD(v6) = eqIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      *v5 = 0;
      ++v4;
      v5 += 5120;
    }
    while ( v4 < 2 );
    ++v2;
    p_enabled += 20;
  }
  while ( v2 < 256 );
}

/*
==============
SND_DeactivateAllFilters
==============
*/
void SND_DeactivateAllFilters(void)
{
  int v0; 
  bool *p_enabled; 
  int v2; 
  bool *v3; 
  int i; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  p_enabled = &sdGlob.eqParams[0][0][0].enabled;
  do
  {
    v2 = 0;
    v3 = p_enabled;
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( (unsigned int)v0 >= 0x100 )
        {
          LODWORD(v6) = 256;
          LODWORD(v5) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 926, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        if ( (unsigned int)i >= 2 )
        {
          LODWORD(v6) = 2;
          LODWORD(v5) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= 2 )
        {
          LODWORD(v6) = 2;
          LODWORD(v5) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        *v3 = 0;
        v3 += 5120;
      }
      ++v2;
    }
    while ( v2 < 2 );
    ++v0;
    p_enabled += 20;
  }
  while ( v0 < 256 );
}

/*
==============
SND_DeactivateChannelVolumes
==============
*/
void SND_DeactivateChannelVolumes(int priority, int fademsec)
{
  __int64 v3; 
  snd_channelvolgroup *v4; 
  int currentChannelPriority; 
  __int64 v6; 
  bool *p_active; 
  unsigned int v8; 
  __int64 v9; 
  float value; 
  snd_channelvolgroup *v11; 
  float v12; 
  snd_param_info_t *v13; 
  __int64 v14; 
  __int64 v15; 

  v3 = priority;
  if ( g_snd.driverInitialized && CL_GetLocalClientActiveCount() <= 1 )
  {
    if ( (unsigned int)(v3 - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6827, ASSERT_TYPE_ASSERT, "( ( priority > SND_CHANNELVOLPRIO_NONE && priority < SND_CHANNELVOLPRIO_COUNT ) )", "( priority ) = %i", v3) )
      __debugbreak();
    if ( fademsec < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6828, ASSERT_TYPE_ASSERT, "(fademsec >= 0)", (const char *)&queryFormat, "fademsec >= 0") )
      __debugbreak();
    v4 = &g_snd.channelPriorityVolGroups[v3];
    v4->active = 0;
    if ( (_DWORD)v3 == g_snd.currentChannelPriority )
    {
      currentChannelPriority = v3 - 1;
      v6 = currentChannelPriority;
      if ( currentChannelPriority >= 0 )
      {
        p_active = &g_snd.channelPriorityVolGroups[currentChannelPriority].active;
        do
        {
          if ( *p_active )
            break;
          --currentChannelPriority;
          p_active -= 6148;
          --v6;
        }
        while ( v6 >= 0 );
      }
      if ( currentChannelPriority < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6841, ASSERT_TYPE_ASSERT, "(i >= SND_CHANNELVOLPRIO_NONE)", (const char *)&queryFormat, "i >= SND_CHANNELVOLPRIO_NONE") )
        __debugbreak();
      v8 = 0;
      g_snd.currentChannelPriority = currentChannelPriority;
      v9 = currentChannelPriority;
      while ( g_snd.globals && v8 < g_snd.globals->entchannelCount )
      {
        if ( (unsigned int)currentChannelPriority >= 4 )
        {
          LODWORD(v15) = 4;
          LODWORD(v14) = currentChannelPriority;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( g_snd.currentChannelPriority ) < (unsigned)( ( sizeof( *array_counter( g_snd.channelPriorityVolGroups ) ) + 0 ) )", "g_snd.currentChannelPriority doesn't index ARRAY_COUNT( g_snd.channelPriorityVolGroups )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
          currentChannelPriority = g_snd.currentChannelPriority;
        }
        value = v4->channelvol[v9].value;
        v11 = &g_snd.channelPriorityVolGroups[currentChannelPriority];
        v12 = v11->channelvol[v9].value;
        v13 = &v11->channelvol[v9];
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
          __debugbreak();
        *(_QWORD *)&v13->goalrate = 1065353216i64;
        v13->value = value;
        v13->goalvalue = value;
        v13->goalgain = 0.0;
        SND_SetParamValue(v13, v12, 0.0, 1.0, fademsec);
        currentChannelPriority = g_snd.currentChannelPriority;
        ++v8;
      }
    }
  }
}

/*
==============
SND_DeactivateEq
==============
*/
void SND_DeactivateEq(const char *channelName, int eqIndex, int band)
{
  int EntChannelFromName; 

  EntChannelFromName = SND_GetEntChannelFromName(channelName);
  if ( EntChannelFromName == -1 )
    Com_PrintError(9, "Unknown channel name (%s), please check channel definitions file\n", channelName);
  else
    SND_DeactivateEqForChannel(EntChannelFromName, eqIndex, band);
}

/*
==============
SND_DeactivateEqForChannel
==============
*/
void SND_DeactivateEqForChannel(int entchannel, int eqIndex, int band)
{
  int v7; 

  if ( (unsigned int)entchannel >= 0x100 )
  {
    v7 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7577, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v7) )
      __debugbreak();
  }
  SND_DisableEq(entchannel, eqIndex, band);
}

/*
==============
SND_DeactivateEq_f
==============
*/
void SND_DeactivateEq_f()
{
  int v0; 
  unsigned int v1; 
  int v2; 
  int v3; 
  const char *v4; 
  unsigned int v5; 
  int v6; 
  int EntChannelFromName; 
  unsigned int v8; 
  int i; 
  int j; 
  int k; 
  __int64 v12; 
  __int64 v13; 

  v0 = Cmd_Argc();
  if ( (unsigned int)(v0 - 2) > 2 )
  {
    Com_Printf(9, "USAGE: snd_deactivateEq <int eqIndex> [(optional) const char *channelName] [(optional) int band]\n");
    return;
  }
  v1 = Cmd_ArgInt(1);
  if ( v1 > 1 )
  {
    Com_Printf(9, "invalid 'eqIndex' %i, must be >= 0 and < %i\n", v1, 2i64);
    return;
  }
  v2 = v0 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = Cmd_Argv(2);
      v5 = Cmd_ArgInt(3);
      v6 = v5;
      if ( v5 > 1 )
      {
        Com_Printf(9, "invalid 'band' %i, must be >= 0 and < %i\n", v5, 2i64);
        return;
      }
      EntChannelFromName = SND_GetEntChannelFromName(v4);
      if ( EntChannelFromName != -1 )
      {
        SND_DeactivateEqForChannel(EntChannelFromName, v1, v6);
        return;
      }
LABEL_12:
      Com_PrintError(9, "Unknown channel name (%s), please check channel definitions file\n", v4);
      return;
    }
    v4 = Cmd_Argv(2);
    v8 = SND_GetEntChannelFromName(v4);
    if ( v8 == -1 )
      goto LABEL_12;
    for ( i = 0; i < 2; ++i )
    {
      if ( v8 >= 0x100 )
      {
        LODWORD(v13) = 256;
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7577, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      SND_DisableEq(v8, v1, i);
    }
  }
  else
  {
    for ( j = 0; j < 256; ++j )
    {
      for ( k = 0; k < 2; ++k )
        SND_DisableEq(j, v1, k);
    }
  }
}

/*
==============
SND_DebugAddOcclusionLine
==============
*/
void SND_DebugAddOcclusionLine(const vec3_t *start, const vec3_t *end, bool occluded, unsigned int id, float fraction)
{
  const dvar_t *v5; 
  ntl::internal::list_node_base *mp_next; 
  unsigned __int64 v11; 
  const dvar_t *v12; 
  double Float_Internal_DebugName; 
  int v14; 
  __int64 i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v16; 
  __m256i v17; 
  __m256i v18; 

  v5 = DCONST_DVARINT_snd_occlusionDebug;
  if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    mp_next = s_occlusionLines.m_listHead.m_sentinel.mp_next;
    v11 = 0i64;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine> > *)s_occlusionLines.m_listHead.m_sentinel.mp_next == &s_occlusionLines.m_listHead )
      goto LABEL_8;
    do
    {
      mp_next = mp_next->mp_next;
      ++v11;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead );
    if ( v11 < 0x252 )
    {
LABEL_8:
      if ( s_occlusionDebugDrawLines )
      {
        v12 = DCONST_DVARINT_snd_occlusionDebug;
        if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.integer == 1 )
        {
          v17.m256i_i64[0] = *(_QWORD *)start->v;
          v17.m256i_i32[2] = LODWORD(start->v[2]);
          v17.m256i_i32[3] = LODWORD(end->v[0]);
          v17.m256i_i32[4] = LODWORD(end->v[1]);
          v17.m256i_i32[5] = LODWORD(end->v[2]);
          v17.m256i_i8[24] = occluded;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_snd_occlusionDebugTime, "snd_occlusionDebugTime");
          v14 = 0;
          v18.m256i_i32[0] = id;
          *(float *)&v18.m256i_i32[5] = (float)((float)(end->v[1] - start->v[1]) * fraction) + start->v[1];
          *(float *)&v18.m256i_i32[6] = (float)((float)(end->v[2] - start->v[2]) * fraction) + start->v[2];
          *(float *)&v18.m256i_i32[4] = (float)((float)(end->v[0] - start->v[0]) * fraction) + start->v[0];
          v17.m256i_i32[7] = g_snd.time - (int)(float)(*(float *)&Float_Internal_DebugName * -1000.0);
          for ( i = 0i64; SND_IsVoiceFree(v14) || g_snd.voices[i].playbackId != id; ++i )
          {
            if ( ++v14 >= 99 )
              return;
          }
          v18.m256i_i64[1] = (__int64)g_snd.voices[i].alias;
          v18.m256i_i32[7] = LODWORD(g_snd.voices[i].occlusionAmount);
          if ( !v18.m256i_i64[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11590, ASSERT_TYPE_ASSERT, "(line.alias != 0)", (const char *)&queryFormat, "line.alias != NULL") )
            __debugbreak();
          if ( !s_occlusionLines.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !s_occlusionLines.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<80> *)s_occlusionLines.m_freelist.m_head.mp_next == &s_occlusionLines.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x50ui64, 0x252ui64) )
            __debugbreak();
          v16 = s_occlusionLines.m_freelist.m_head.mp_next;
          s_occlusionLines.m_freelist.m_head.mp_next = s_occlusionLines.m_freelist.m_head.mp_next->mp_next;
          *(__m256i *)&v16[2].mp_next = v17;
          *(__m256i *)&v16[6].mp_next = v18;
          v16->mp_next = NULL;
          v16[1].mp_next = NULL;
          ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine>>::insert_before(&s_occlusionLines.m_listHead, (ntl::internal::list_node<OcclusionLine> *)s_occlusionLines.m_listHead.m_sentinel.mp_next, (ntl::internal::list_node<OcclusionLine> *)v16);
        }
      }
    }
  }
}

/*
==============
SND_DebugAliasPrint
==============
*/
void SND_DebugAliasPrint(bool condition, const SndAlias *alias, const char *msg)
{
  const dvar_t *v4; 
  const char *aliasName; 
  const dvar_t *v7; 
  char *typeName; 
  char *valueName; 

  if ( condition )
  {
    v4 = DCONST_DVARSTR_snd_debugAlias;
    aliasName = alias->aliasName;
    if ( !DCONST_DVARSTR_snd_debugAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugAlias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( !I_stricmp(v4->current.string, aliasName) )
      goto LABEL_10;
    v7 = DCONST_DVARSTR_snd_debugAlias;
    if ( !DCONST_DVARSTR_snd_debugAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugAlias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !I_stricmp(v7->current.string, "all") )
    {
LABEL_10:
      typeName = (char *)&queryFormat.fmt + 3;
      valueName = (char *)&queryFormat.fmt + 3;
      SND_GetContextNames(alias, (const char **)&typeName, (const char **)&valueName);
      Com_DPrintf(9, "^5SND_DEBUG_ALIAS (%s) context (%s-%s): %s\n", alias->aliasName, typeName, valueName, msg);
    }
  }
}

/*
==============
SND_DevUpdateReverbParams
==============
*/
void SND_DevUpdateReverbParams(const unsigned int id)
{
  SND_SetReverbParams(id, g_snd.activeMainReverb, 0);
}

/*
==============
SND_DisableEq
==============
*/
void SND_DisableEq(int entchannel, int eqIndex, int band)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v3 = entchannel;
  v4 = band;
  v5 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v9 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 926, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  sdGlob.eqParams[0][v4 + 2 * v5][v3].enabled = 0;
}

/*
==============
SND_DisableFullOcclusionForEntChannel
==============
*/
void SND_DisableFullOcclusionForEntChannel(int entChannelIdx)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 
  __int64 v5; 

  v1 = entChannelIdx;
  if ( (unsigned int)entChannelIdx >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7453, ASSERT_TYPE_ASSERT, "(unsigned)( entChannelIdx ) < (unsigned)( 256 )", "entChannelIdx doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entChannelIdx, v4) )
      __debugbreak();
    LODWORD(v5) = 256;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  g_snd.entChanFullOcclusionDisabled[v1 >> 5] |= 1 << (v1 & 0x1F);
}

/*
==============
SND_DisableOcclusion
==============
*/
void SND_DisableOcclusion(int entchannel, int eqIndex)
{
  __int64 v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = entchannel;
  v3 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v8 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7498, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( ( sizeof( *array_counter( g_snd.entChanOcclusionParams ) ) + 0 ) )", "entchannel doesn't index ARRAY_COUNT( g_snd.entChanOcclusionParams )\n\t%i not in [0, %i)", entchannel, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7499, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( ( sizeof( *array_counter( g_snd.entChanOcclusionParams[0] ) ) + 0 ) )", "eqIndex doesn't index ARRAY_COUNT( g_snd.entChanOcclusionParams[0] )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v4 = 9 * (v3 + 2 * v2);
  g_snd.entChanOcclusionParams[0][v4 / 9].enabled = 0;
  g_snd.entChanFullOcclusionDisabled[v4 - 4607] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4606] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4605] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4604] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4603] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4602] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4601] = 1065353216;
  g_snd.entChanFullOcclusionDisabled[v4 - 4600] = 1065353216;
}

/*
==============
SND_DisconnectListener
==============
*/
void SND_DisconnectListener(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  bool active; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2974, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  v3 = v1 << 7;
  active = g_snd.listeners[v1].active;
  if ( (_DWORD)v1 )
    active = active && !g_snd.listeners[0].active;
  if ( active && ((_DWORD)v1 == 1 || !g_snd.listeners[1].active) )
  {
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
    _InterlockedExchange(&g_snd.listenerFence, 0);
    Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
    SND_Stop3DSounds();
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    do
    {
      if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  }
  memset_0((char *)g_snd.listeners + v3, 0, 0x80ui64);
  MatrixIdentity33((tmat33_t<vec3_t> *)((char *)&g_snd.listeners[0].orient.axis + v3));
  OrientationInvert((const orientation_t *)((char *)&g_snd.listeners[0].orient + v3), (orientation_t *)((char *)&g_snd.listeners[0].inverse + v3));
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
}

/*
==============
SND_DistSqToNearestListener
==============
*/
float SND_DistSqToNearestListener(const vec3_t *origin)
{
  unsigned __int64 v2; 
  __int128 v4; 
  __int128 v6; 

  *(float *)&_XMM6 = FLOAT_3_4028235e38;
  v2 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  if ( g_snd.listeners[0].active )
  {
    v4 = LODWORD(g_snd.listeners[0].orient.origin.v[1]);
    *(float *)&v4 = (float)((float)((float)(g_snd.listeners[0].orient.origin.v[1] - origin->v[1]) * (float)(g_snd.listeners[0].orient.origin.v[1] - origin->v[1])) + (float)((float)(g_snd.listeners[0].orient.origin.v[0] - origin->v[0]) * (float)(g_snd.listeners[0].orient.origin.v[0] - origin->v[0]))) + (float)((float)(g_snd.listeners[0].orient.origin.v[2] - origin->v[2]) * (float)(g_snd.listeners[0].orient.origin.v[2] - origin->v[2]));
    _XMM2 = v4;
    __asm { vminss  xmm6, xmm2, xmm6 }
  }
  if ( g_snd.listeners[1].active )
  {
    v6 = LODWORD(g_snd.listeners[1].orient.origin.v[1]);
    *(float *)&v6 = (float)((float)((float)(g_snd.listeners[1].orient.origin.v[1] - origin->v[1]) * (float)(g_snd.listeners[1].orient.origin.v[1] - origin->v[1])) + (float)((float)(g_snd.listeners[1].orient.origin.v[0] - origin->v[0]) * (float)(g_snd.listeners[1].orient.origin.v[0] - origin->v[0]))) + (float)((float)(g_snd.listeners[1].orient.origin.v[2] - origin->v[2]) * (float)(g_snd.listeners[1].orient.origin.v[2] - origin->v[2]));
    _XMM2 = v6;
    __asm { vminss  xmm6, xmm2, xmm6 }
  }
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
  return *(float *)&_XMM6;
}

/*
==============
SND_DoTracesWithDebug
==============
*/
void SND_DoTracesWithDebug(SndVoice *voice)
{
  float v2; 
  bool v3; 
  const dvar_t *v4; 
  double v5; 
  const dvar_t *v6; 
  unsigned int playbackId; 
  ntl::internal::list_node_base *i; 
  const dvar_t *v9; 
  SecureVec3 outVoicePosition; 
  __int64 v11; 
  snd_listener outListener; 
  tmat33_t<vec3_t> outVoiceMatrix; 

  v11 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12001, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0.0;
  v3 = 1;
  SND_UpdateVoicePosition(voice, &outVoicePosition, &outVoiceMatrix);
  SND_GetListenerNearestToOrigin((const vec3_t *)&outVoicePosition, &outListener);
  if ( outListener.active && !CG_IsPlayerAndPointInSameInteriorZone((const LocalClientNum_t)outListener.localClientNum, (const vec3_t *)&outVoicePosition) )
  {
    v4 = DCONST_DVARINT_snd_occlusionDebug;
    if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.integer )
      s_occlusionDebugDrawLines = SND_ShouldDrawOcclusionForAlias(&outListener, voice->alias, (const vec3_t *)&outVoicePosition);
    v5 = SND_PerformOcclusionTrace(&outListener.orient.origin, (const vec3_t *)&outVoicePosition, (const LocalClientNum_t)outListener.localClientNum, voice->sndEnt, voice->playbackId);
    v2 = *(float *)&v5;
    v3 = CG_OcclusionSettingsMatch((const LocalClientNum_t)outListener.localClientNum, (const vec3_t *)&outVoicePosition);
    v6 = DCONST_DVARINT_snd_occlusionDebug;
    if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer )
    {
      playbackId = voice->playbackId;
      for ( i = s_occlusionLines.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead; i = i->mp_next )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(i[3].mp_prev) == playbackId )
          *((float *)&i[4].mp_next + 1) = *(float *)&v5;
      }
    }
  }
  voice->occlusionMatchesListener = v3;
  v9 = DCONST_DVARINT_snd_occlusionDelay;
  if ( !DCONST_DVARINT_snd_occlusionDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  voice->nextOcclusionTime = g_snd.time + v9->current.integer;
  voice->occlusionAmount = v2;
  memset(&outVoicePosition, 0, sizeof(outVoicePosition));
}

/*
==============
SND_DrawOcclusionDebug
==============
*/
void SND_DrawOcclusionDebug(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  int v4; 
  const ScreenPlacement *v5; 
  float v6; 
  float v7; 
  int v8; 
  ntl::internal::list_node_base *mp_next; 
  __int128 v10; 
  __int128 v11; 
  const vec3_t *v12; 
  const vec3_t *v13; 
  ntl::internal::list_node<OcclusionLine> *v14; 
  __int64 v15; 
  char *v16; 
  unsigned int mp_prev; 
  int VoiceIndexForId; 
  __int64 v19; 
  float occlusionAmount; 
  const SndAlias *alias; 
  char v22; 
  char *v23; 
  __int64 v24; 
  __int64 v25; 
  char *v26; 
  float v27; 
  GfxFont *font; 
  const vec4_t *color; 
  const char *s; 
  __int128 v31; 
  const ScreenPlacement *ActivePlacement; 
  __int128 v33; 
  double v34; 
  char v35; 
  char v36; 

  v1 = DCONST_DVARINT_snd_occlusionDebug;
  if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = 0;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v5 = ActivePlacement;
  v6 = ActivePlacement->virtualViewableMin.v[0];
  v7 = ActivePlacement->virtualViewableMin.v[1];
  if ( integer == 2 )
    v8 = CG_DrawDevString(ActivePlacement, v6, v7, 0.55000001, 0.55000001, "Occlusion Debug: (frozen)", &colorMagenta, 5, cls.smallDevFont);
  else
    v8 = CG_DrawDevString(ActivePlacement, v6, v7, 0.55000001, 0.55000001, "Occlusion Debug:", &colorMagenta, 5, cls.smallDevFont);
  mp_next = s_occlusionLines.m_listHead.m_sentinel.mp_next;
  v10 = 0i64;
  *(float *)&v10 = (float)v8 + v7;
  v11 = v10;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine> > *)s_occlusionLines.m_listHead.m_sentinel.mp_next != &s_occlusionLines.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v12 = (const vec3_t *)((char *)&mp_next[1].mp_next + 4);
      v13 = (const vec3_t *)&mp_next[1];
      if ( LOBYTE(mp_next[2].mp_next) )
      {
        CL_AddDebugLine(v13, v12, &colorRed, 1, 1, 0);
        CL_AddDebugStar((const vec3_t *)&mp_next[4], &colorYellow, 0, 1, 0);
      }
      else
      {
        CL_AddDebugLine(v13, v12, &colorGreen, 1, 1, 0);
      }
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead );
    mp_next = s_occlusionLines.m_listHead.m_sentinel.mp_next;
    v5 = ActivePlacement;
  }
  if ( integer != 2 )
  {
    if ( mp_next == (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead )
      goto LABEL_50;
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( SHIDWORD(mp_next[2].mp_next) >= g_snd.time )
      {
        mp_next = mp_next->mp_next;
      }
      else
      {
        v14 = (ntl::internal::list_node<OcclusionLine> *)mp_next;
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine>>::remove(&s_occlusionLines.m_listHead, v14);
        v14->mp_prev = (ntl::internal::list_node_base *)s_occlusionLines.m_freelist.m_head.mp_next;
        s_occlusionLines.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14;
      }
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead );
    mp_next = s_occlusionLines.m_listHead.m_sentinel.mp_next;
  }
  if ( mp_next != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead )
  {
    v15 = 0i64;
    v16 = &v35;
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = (unsigned int)mp_next[3].mp_prev;
      LODWORD(v33) = mp_prev;
      VoiceIndexForId = SND_GetVoiceIndexForId(mp_prev);
      if ( VoiceIndexForId == -1 )
      {
        occlusionAmount = *((float *)&mp_next[4].mp_next + 1);
        alias = (const SndAlias *)mp_next[3].mp_next;
      }
      else
      {
        v19 = VoiceIndexForId;
        occlusionAmount = g_snd.voices[v19].occlusionAmount;
        alias = g_snd.voices[v19].alias;
      }
      v22 = 0;
      *((_QWORD *)&v33 + 1) = alias;
      *(float *)&v34 = occlusionAmount;
      if ( v15 <= 0 )
        goto LABEL_46;
      v23 = &v35;
      v24 = v15;
      do
      {
        if ( *(_DWORD *)v23 == mp_prev )
        {
          *(_OWORD *)v23 = v33;
          *((double *)v23 + 2) = v34;
          v22 = 1;
        }
        v23 += 24;
        --v24;
      }
      while ( v24 );
      if ( !v22 )
      {
LABEL_46:
        if ( (unsigned int)v4 < 0x63 )
        {
          *(_OWORD *)v16 = v33;
          ++v4;
          ++v15;
          *((double *)v16 + 2) = v34;
          v16 += 24;
        }
      }
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead );
    v5 = ActivePlacement;
  }
LABEL_50:
  v25 = v4;
  if ( v4 > 0 )
  {
    v26 = &v36;
    do
    {
      v27 = *((float *)v26 + 2);
      font = cls.smallDevFont;
      color = &colorRed;
      if ( v27 <= 0.0 )
        color = &colorGreen;
      s = j_va("%s : %f", **(_QWORD **)v26, v27);
      v26 += 24;
      v31 = v11;
      *(float *)&v31 = *(float *)&v11 + (float)CG_DrawDevString(v5, v6, *(float *)&v11, 0.55000001, 0.55000001, s, color, 5, font);
      v11 = v31;
      --v25;
    }
    while ( v25 );
  }
}

/*
==============
SND_DrawOnlyChannel_f
==============
*/
void SND_DrawOnlyChannel_f(void)
{
  const char *v0; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    snd_drawOnlyChannel = SND_GetEntChannelFromName(v0);
  }
  else
  {
    Com_Printf(9, "USAGE: snd_drawOnlyChannel <string channelName>\n");
  }
}

/*
==============
SND_DriverPostUpdate
==============
*/

void __fastcall SND_DriverPostUpdate(int frametime)
{
  SD_PostUpdate(frametime);
}

/*
==============
SND_DriverPreUpdate
==============
*/

void __fastcall SND_DriverPreUpdate(int frametime)
{
  SD_PreUpdate(frametime);
}

/*
==============
SND_DumpGlobals_f
==============
*/
void SND_DumpGlobals_f()
{
  int v0; 
  char v1; 
  const SndGlobals *globals; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  const char *name; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  const char *v11; 
  int v12; 
  signed int v13; 
  signed int i; 
  signed int j; 
  __int64 v16; 
  signed int v17; 
  __int64 v18; 
  signed int k; 
  __int64 v20; 
  __int64 v21; 

  v0 = Cmd_Argc();
  v1 = 0;
  globals = g_snd.globals;
  if ( v0 > 1 )
    v1 = 1;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2771, ASSERT_TYPE_ASSERT, "(g)", (const char *)&queryFormat, "g") )
    __debugbreak();
  v3 = 132 * globals->whizbyCount;
  v4 = 572 * globals->masterCount;
  v5 = 124 * globals->entchannelCount;
  name = globals->name;
  v7 = 16 * globals->contextValueCount;
  v8 = 24 * globals->contextCount;
  v9 = -1i64;
  v10 = 72 * globals->volmodinfoCount;
  do
    ++v9;
  while ( name[v9] );
  v11 = "<null>";
  v12 = v4 + v7 + v8 + v5 + v10 + v9;
  if ( name )
    v11 = globals->name;
  Com_Printf(9, "g_snd.globals.name   \"%s\"  size %d\n", v11, v12 + v3 + 129);
  Com_Printf(9, "globalVolumeModifier:    %.3f\n", globals->globalVolumeModifier);
  Com_Printf(9, "binkVolumeModifier:      %.3f\n", globals->binkVolumeModifier);
  Com_Printf(9, "volmodinfoCount:         %d  (%6d)\n", globals->volmodinfoCount, v10);
  Com_Printf(9, "entchannelCount:         %d  (%6d)\n", globals->entchannelCount, v5);
  Com_Printf(9, "contextCount:            %d  (%6d)\n", globals->contextCount, v8);
  Com_Printf(9, "contextValueCount:       %d  (%6d)\n", globals->contextValueCount, v7);
  Com_Printf(9, "masterCount:             %d  (%6d)\n", globals->masterCount, v4);
  Com_Printf(9, "whizbyCount:             %d  (%6d)\n", globals->whizbyCount, v3);
  if ( v1 )
  {
    v13 = 0;
    for ( i = 0; i < (signed int)globals->volmodinfoCount; ++i )
    {
      if ( !&globals->volmodinfo[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2800, ASSERT_TYPE_ASSERT, "(g->volmodinfo[i].name)", (const char *)&queryFormat, "g->volmodinfo[i].name") )
        __debugbreak();
      Com_Printf(9, "volmod[%3d]: \"%s\"\n", (unsigned int)i, globals->volmodinfo[i].name);
    }
    for ( j = 0; j < (signed int)globals->entchannelCount; ++j )
    {
      v16 = j;
      if ( !&globals->entchannelInfo[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2806, ASSERT_TYPE_ASSERT, "(g->entchannelInfo[i].name)", (const char *)&queryFormat, "g->entchannelInfo[i].name") )
        __debugbreak();
      Com_Printf(9, "entchannel[%3d]: \"%s\"\n", (unsigned int)j, globals->entchannelInfo[v16].name);
    }
    v17 = 0;
    if ( (int)globals->contextCount > 0 )
    {
      v18 = 0i64;
      do
      {
        if ( !globals->contexts[v18].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2812, ASSERT_TYPE_ASSERT, "(g->contexts[i].type)", (const char *)&queryFormat, "g->contexts[i].type") )
          __debugbreak();
        Com_Printf(9, "context[%3d]: \"%s\"\n", (unsigned int)v17++, globals->contexts[v18++].type);
      }
      while ( v17 < (signed int)globals->contextCount );
    }
    for ( k = 0; k < (signed int)globals->masterCount; ++k )
    {
      v20 = k;
      if ( !&globals->masters[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2818, ASSERT_TYPE_ASSERT, "(g->masters[i].name)", (const char *)&queryFormat, "g->masters[i].name") )
        __debugbreak();
      Com_Printf(9, "master[%3d]: \"%s\"\n", (unsigned int)k, globals->masters[v20].name);
    }
    if ( (int)globals->whizbyCount > 0 )
    {
      do
      {
        v21 = v13;
        if ( !&globals->whizbys[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2824, ASSERT_TYPE_ASSERT, "(g->whizbys[i].name)", (const char *)&queryFormat, "g->whizbys[i].name") )
          __debugbreak();
        Com_Printf(9, "context[%3d]: \"%s\"\n", (unsigned int)v13++, globals->whizbys[v21].name);
      }
      while ( v13 < (signed int)globals->whizbyCount );
    }
  }
}

/*
==============
SND_DumpTimeScale_f
==============
*/
void SND_DumpTimeScale_f(void)
{
  __int64 i; 

  for ( i = 0i64; g_snd.globals && (unsigned int)i < g_snd.globals->entchannelCount; i = (unsigned int)(i + 1) )
    Com_Printf(9, "%32s %0.2f\n", g_snd.globals->entchannelInfo[(unsigned int)i].name, g_snd.entchanOverrides.timescaleLerp[i]);
}

/*
==============
SND_EnablePASpeaker
==============
*/
void SND_EnablePASpeaker(unsigned int nameHash, bool enable)
{
  __int64 i; 
  __int64 v5; 
  __int64 v6; 

  if ( cm.mapEnts )
  {
    for ( i = 0i64; (unsigned int)i < cm.mapEnts->audioPASpeakerCount; i = (unsigned int)(i + 1) )
    {
      if ( cm.mapEnts->audioPASpeakers[i].nameHash == nameHash )
      {
        if ( enable )
        {
          if ( (unsigned int)i >= 0x40 )
          {
            LODWORD(v6) = 64;
            LODWORD(v5) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 30, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v5, v6) )
              __debugbreak();
          }
          g_snd.paSpeakerDisabledArray[(__int64)(int)i >> 5] &= ~(1 << (i & 0x1F));
        }
        else
        {
          if ( (unsigned int)i >= 0x40 )
          {
            LODWORD(v6) = 64;
            LODWORD(v5) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v5, v6) )
              __debugbreak();
          }
          g_snd.paSpeakerDisabledArray[(__int64)(int)i >> 5] |= 1 << (i & 0x1F);
        }
      }
    }
  }
}

/*
==============
SND_EndFrame
==============
*/
void SND_EndFrame(void)
{
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_EndFrame");
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_EntChannelFarReverbBehavior
==============
*/
__int64 SND_EntChannelFarReverbBehavior(unsigned int entchannel)
{
  __int64 v1; 
  char ActiveGameMode; 
  __int64 v4; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2230, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2231, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  switch ( ActiveGameMode )
  {
    case 0:
      return 0i64;
    case 1:
      return (unsigned int)g_snd.globals->entchannelInfo[v1].spFarReverbBehavior;
    case 2:
      return (unsigned int)g_snd.globals->entchannelInfo[v1].mpFarReverbBehavior;
  }
  if ( ActiveGameMode != 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2256, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SND_EntChannelFarReverbBehavior() retrieved unknown game mode.") )
      __debugbreak();
    return 0i64;
  }
  return (unsigned int)g_snd.globals->entchannelInfo[v1].cpFarReverbBehavior;
}

/*
==============
SND_EntChannelHas71SpeakerPanning
==============
*/
bool SND_EntChannelHas71SpeakerPanning(unsigned int entchannel)
{
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v4; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2209, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2210, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  v2 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return SND_IsChannelMissionVOChannel(v1);
  else
    return g_snd.globals->entchannelInfo[v1].has71Pan;
}

/*
==============
SND_EntChannelHasCenterSpeakerPanning
==============
*/
bool SND_EntChannelHasCenterSpeakerPanning(unsigned int entchannel)
{
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v4; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2188, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2189, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  v2 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return SND_IsChannelMissionVOChannel(v1);
  else
    return g_snd.globals->entchannelInfo[v1].centerSpeakerPan;
}

/*
==============
SND_EntChannelHasOcclusion
==============
*/
bool SND_EntChannelHasOcclusion(unsigned int entchannel)
{
  __int64 v1; 
  int v4; 

  v1 = entchannel;
  if ( entchannel >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2091, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( ( sizeof( *array_counter( g_snd.entChanOcclusionParams ) ) + 0 ) )", "entchannel doesn't index ARRAY_COUNT( g_snd.entChanOcclusionParams )\n\t%i not in [0, %i)", entchannel, v4) )
      __debugbreak();
  }
  return SND_IsEntChannel3D(v1) && g_snd.entChanOcclusionParams[v1][0].enabled && g_snd.entChanOcclusionParams[v1][1].enabled;
}

/*
==============
SND_EntityFindContextValue
==============
*/
char SND_EntityFindContextValue(const SndEntState *entState, unsigned int contextType, unsigned int *outValueA, unsigned int *outValueB, float *outLerp)
{
  int v8; 
  const SndEntState *i; 
  __int64 v11; 
  float v12; 
  int v13; 
  double v14; 

  if ( !entState )
    return 0;
  v8 = 0;
  for ( i = entState; i->contextTypes[0] != contextType; i = (const SndEntState *)((char *)i + 4) )
  {
    if ( (unsigned int)++v8 >= 3 )
      return 0;
  }
  v11 = v8;
  v12 = FLOAT_1_0;
  v13 = entState->contextFadeLength[v8];
  if ( v13 > 0 )
  {
    v14 = I_fclamp((float)(entState->contextFadeTime[v8] - g_snd.time) / (float)v13, 0.0, 1.0);
    v12 = 1.0 - *(float *)&v14;
  }
  if ( !entState->contextValuesTo[v11] && (v12 == 1.0 || !entState->contextValuesFrom[v11]) )
    return 0;
  *outValueA = entState->contextValuesFrom[v11];
  *outValueB = entState->contextValuesTo[v11];
  *outLerp = v12;
  return 1;
}

/*
==============
SND_EqTypeFromString
==============
*/
__int64 SND_EqTypeFromString(const char *typeString)
{
  const char *v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  const char *i; 

  if ( !typeString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2404, ASSERT_TYPE_ASSERT, "(typeString)", (const char *)&queryFormat, "typeString") )
    __debugbreak();
  v2 = snd_eqTypeStrings[0];
  v3 = 0i64;
  v4 = 0;
  if ( snd_eqTypeStrings[0] )
  {
    v5 = 0i64;
    do
    {
      v6 = 0x7FFFFFFFi64;
      if ( !typeString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v7 = (const char *)(typeString - v2);
      while ( 1 )
      {
        v8 = (unsigned __int8)v2[(_QWORD)v7];
        v9 = v6;
        v10 = *(unsigned __int8 *)v2++;
        --v6;
        if ( !v9 )
          return v4;
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
          return v4;
      }
      v2 = snd_eqTypeStrings[++v5];
      ++v4;
    }
    while ( v2 );
  }
  Com_Printf(9, "invalid eq type string '%s', it must be one of the following strings:\n", typeString);
  for ( i = snd_eqTypeStrings[0]; i; i = snd_eqTypeStrings[++v3] )
  {
    if ( *i )
      Com_Printf(9, "  %s\n", i);
  }
  return 5i64;
}

/*
==============
SND_ErrorCleanup
==============
*/
void SND_ErrorCleanup(void)
{
  SndBankInfo **v0; 
  const SndBank *bank; 
  __int64 i; 
  SndVirtualLoop *virtualLoops; 
  int v4; 
  bool *voiceAlloc; 
  const SndAlias **p_alias; 
  int j; 
  int k; 
  int m; 
  int n; 
  __int64 v11; 

  g_snd.hasPendingRestore = 0;
  while ( Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) )
  {
    cls.inUpdateSound = 0;
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  }
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_PROPAGATION);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_WEAPON_REFLECT);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DOOR_PROPAGATION);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  v0 = &g_sb.bankStack[32];
  do
  {
    bank = (*v0)->bank;
    if ( bank && !bank->streamInfo.alwaysLoaded )
      SND_StopBankSoundsWithBankInfo(*v0);
    ++v0;
  }
  while ( (__int64)v0 < (__int64)&g_sb.loadGate );
  if ( g_snd.driverInitialized )
  {
    for ( i = 0i64; Sys_InCriticalSection(CRITSECT_SOUND_UPDATE); i = (unsigned int)(i + 1) )
      Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
    if ( (int)i > 0 )
    {
      do
      {
        Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
        --i;
      }
      while ( i );
    }
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "wait_workers");
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
    Sys_ProfEndNamedEvent();
    virtualLoops = g_snd.virtualLoops;
    g_snd.nextVirtualLoopHandle = 0;
    do
    {
      virtualLoops->handle = -1;
      ++virtualLoops;
    }
    while ( (__int64)virtualLoops < (__int64)&g_snd.nextVirtualLoopHandle );
    SND_DeferredPlaybackInit();
    v4 = 0;
    voiceAlloc = sdGlob.voiceAlloc;
    p_alias = &g_snd.voices[0].alias;
    do
    {
      if ( (unsigned int)v4 > 0x62 )
      {
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v11) )
          __debugbreak();
      }
      if ( *voiceAlloc )
      {
        SND_DebugAliasPrint(*p_alias != NULL, *p_alias, "Stop voice requested by SND_StopSounds()");
        SND_StopVoice(v4);
      }
      ++v4;
      ++voiceAlloc;
      p_alias += 246;
    }
    while ( v4 < 99 );
    SND_ClearReverbs();
    for ( j = 1; j < 4; ++j )
      SND_DeactivateChannelVolumes(j, 0);
    for ( k = 0; k < 256; ++k )
    {
      for ( m = 0; m < 2; ++m )
      {
        for ( n = 0; n < 2; ++n )
          SND_DisableEq(k, m, n);
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  }
  SNDL_ResetMusicState(g_snd.musicCurrentState);
  SD_Sync();
}

/*
==============
SND_ErrorIfSoundGlobalsTrashed
==============
*/
void SND_ErrorIfSoundGlobalsTrashed(void)
{
  if ( g_snd.driverInitialized && g_snd.magic != 591763574 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 9645, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "The sound globals have been overwritten") )
    __debugbreak();
}

/*
==============
SND_ExistsPendingRestore
==============
*/
_BOOL8 SND_ExistsPendingRestore()
{
  return g_snd.hasPendingRestore;
}

/*
==============
SND_FadeAllSounds
==============
*/
void SND_FadeAllSounds(float volume, int fadetime)
{
  if ( volume < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6739, ASSERT_TYPE_ASSERT, "(volume >= 0)", (const char *)&queryFormat, "volume >= 0") )
    __debugbreak();
  if ( fadetime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6740, ASSERT_TYPE_ASSERT, "(fadetime >= 0)", (const char *)&queryFormat, "fadetime >= 0") )
    __debugbreak();
  SND_SetParamValue(&g_snd.mastervol, volume, 0.0, 1.0, fadetime);
  if ( volume == 0.0 )
    g_snd.stopSoundsAfterMasterFade = 1;
}

/*
==============
SND_FadeLocalSoundAliasById
==============
*/
char SND_FadeLocalSoundAliasById(LocalClientNum_t localClientNum, unsigned int id, float fadeValue, int msec)
{
  __int64 v4; 
  float v6; 

  if ( !id )
    return 0;
  v4 = 0i64;
  while ( g_snd.voices[v4].playbackId != id )
  {
    if ( ++v4 >= 99 )
      return 0;
  }
  v6 = fadeValue - g_snd.voices[v4].volumeInfo.value;
  g_snd.voices[v4].volumeInfo.goalvalue = fadeValue;
  g_snd.voices[v4].volumeInfo.goalrate = v6 / (float)msec;
  return 1;
}

/*
==============
SND_FinalizeAliasGroupTracking
==============
*/
void SND_FinalizeAliasGroupTracking(SndAliasGroupTracking *inOutTracking)
{
  int v2; 
  int *voiceIndices; 
  unsigned int *voicePlaybackIds; 
  __int64 v5; 
  SndVoice *v6; 
  unsigned int v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  const char **p_aliasName; 
  const char *v11; 
  int v12; 
  int *v13; 
  __int64 v14; 
  __int64 v15; 
  const dvar_t *v16; 
  __int64 v17; 
  __int64 v18; 
  vec3_t outOrigin; 
  __int64 v20; 
  int v21[40]; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t v26; 
  LocalClientNum_t localClientNum; 
  unsigned __int64 sndEnt; 
  int data[4]; 
  int v30[4]; 
  snd_listener outListener; 

  v20 = -2i64;
  if ( !Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4299, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_SOUND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_SOUND_UPDATE )") )
    __debugbreak();
  if ( inOutTracking->numVoices > 0 )
  {
    v22 = 0;
    sndEnt = 0i64;
    v2 = 0;
    voiceIndices = inOutTracking->voiceIndices;
    voicePlaybackIds = inOutTracking->voicePlaybackIds;
    do
    {
      v5 = *voiceIndices;
      v6 = &g_snd.voices[v5];
      if ( (unsigned int)v5 > 0x62 )
      {
        LODWORD(v17) = *voiceIndices;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v17) )
          __debugbreak();
      }
      if ( sdGlob.voiceAlloc[v5] && v6->playbackId == *voicePlaybackIds )
      {
        SD_SetSecondaryGroupInfo(v5, inOutTracking->numVoices);
        if ( !g_snd.paused || !SND_IsPausable((unsigned __int8)(v6->alias->flags >> 10)) )
          v6->paused = 0;
        v7 = (unsigned __int8)(v6->alias->flags >> 10);
        if ( !SND_EntChannelHasOcclusion(v7) || (v6->sndEnt & 0x1FFFFFFFFi64) == 2048 || (v6->sndEnt & 0x1000000000i64) == 0 || SND_IsEntChannelPASpeaker(v7) )
          goto LABEL_51;
        v8 = DCONST_DVARINT_snd_occlusionDebug;
        if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.integer )
        {
LABEL_51:
          if ( !v6->paused )
          {
            data[0] = v6->playbackId;
            data[1] = v5;
            data[2] = 0;
            if ( !Sys_TryAddWorkerCmd(WRKCMD_SOUND_VOICE_UPDATE, data) )
              SND_UpdateAndStartVoice(v5, 0);
          }
        }
        else
        {
          v9 = v22;
          if ( !v22 )
          {
            SndVoice_GetOrigin(v6, &outOrigin);
            SND_GetListenerNearestToOrigin(&outOrigin, &outListener);
            v23 = outListener.orient.origin.v[0];
            v24 = outListener.orient.origin.v[1];
            v25 = outListener.orient.origin.v[2];
            v26 = outOrigin;
            localClientNum = outListener.localClientNum;
            sndEnt = v6->sndEnt;
            memset(&outOrigin, 0, sizeof(outOrigin));
            v9 = v22;
          }
          v6->occlusionWaitId = v6->playbackId;
          if ( v9 >= 0x14 )
          {
            LODWORD(v18) = 20;
            LODWORD(v17) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4352, ASSERT_TYPE_ASSERT, "(unsigned)( cmd.numSecondaries ) < (unsigned)( ( sizeof( *array_counter( cmd.voiceIndex ) ) + 0 ) )", "cmd.numSecondaries doesn't index ARRAY_COUNT( cmd.voiceIndex )\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
            v9 = v22;
          }
          v21[v9 + 20] = v5;
          v21[v22++] = v6->occlusionWaitId;
        }
      }
      else
      {
        p_aliasName = &v6->alias->aliasName;
        if ( p_aliasName )
          v11 = *p_aliasName;
        else
          v11 = "<free>";
        Com_PrintError(9, "Secondary group containing sound alias: %s has voice limiting issues.\n", v11);
        *voiceIndices = *(&inOutTracking->secondaryGroupId + inOutTracking->numVoices--);
        --v2;
        --voicePlaybackIds;
        --voiceIndices;
      }
      ++v2;
      ++voicePlaybackIds;
      ++voiceIndices;
    }
    while ( v2 < inOutTracking->numVoices );
    if ( v22 > 0 && !Sys_TryAddWorkerCmd(WRKCMD_SOUND_OCCLUSION, v21) )
    {
      v12 = 0;
      if ( inOutTracking->numVoices > 0 )
      {
        v13 = inOutTracking->voiceIndices;
        do
        {
          v14 = *v13;
          v15 = 492 * v14;
          g_snd.chaninfoUnweightedPriority[v15 - 48612] = 0.0;
          g_snd.chaninfoUnweightedPriority[v15 - 48663] = 0.0;
          v16 = DCONST_DVARINT_snd_occlusionDelay;
          if ( !DCONST_DVARINT_snd_occlusionDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDelay") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          LODWORD(g_snd.chaninfoUnweightedPriority[v15 - 48662]) = v16->current.integer + g_snd.time;
          if ( !LOBYTE(g_snd.chaninfoUnweightedPriority[v15 - 48664]) )
          {
            v30[0] = LODWORD(g_snd.chaninfoUnweightedPriority[v15 - 48701]);
            v30[1] = v14;
            v30[2] = 0;
            if ( !Sys_TryAddWorkerCmd(WRKCMD_SOUND_VOICE_UPDATE, v30) )
              SND_UpdateAndStartVoice(v14, 0);
          }
          ++v12;
          ++v13;
        }
        while ( v12 < inOutTracking->numVoices );
      }
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_FindAssetsForVoice
==============
*/
bool SND_FindAssetsForVoice(SndStartAliasInfo *info)
{
  bool Streamed; 
  const SndAlias *alias; 
  int flags; 
  unsigned int assetId; 
  bool result; 

  Streamed = 0;
  alias = info->alias;
  flags = info->alias->flags;
  info->isCinematic = 0;
  info->arcadeAssetIndex = -1;
  assetId = alias->assetId;
  if ( assetId == g_snd.cinematicAssetId )
  {
    info->isCinematic = 1;
    info->assetEntry = &g_snd.cinematicAssetEntry;
    result = 1;
    info->assetExists = 1;
    return result;
  }
  if ( assetId == g_snd.arcadeAssetId )
  {
    info->arcadeAssetIndex = (info->sndEnt >> 33) & 3;
    info->assetEntry = &g_snd.arcadeAssetEntry;
LABEL_5:
    info->assetExists = 1;
    return 1;
  }
  if ( (flags & 0x380) == 512 )
  {
    if ( SND_AssetBankFindLoaded(assetId, &info->assetEntry, &info->loadedData, &info->loadedSize) && SND_AssetBankFindStreamed(info->alias->assetId, &info->assetEntry, (FileStreamFileID *)info->streamFid) )
      goto LABEL_5;
    info->assetExists = 0;
    return 0;
  }
  else if ( (flags & 0x380) == 128 || (alias->flags & 0x380u) <= 0x100 )
  {
    result = SND_AssetBankFindLoaded(assetId, &info->assetEntry, &info->loadedData, &info->loadedSize);
    info->assetExists = result;
  }
  else
  {
    if ( (flags & 0x380) == 384 )
      Streamed = SND_AssetBankFindStreamed(assetId, &info->assetEntry, (FileStreamFileID *)info->streamFid);
    info->assetExists = Streamed;
    return Streamed;
  }
  return result;
}

/*
==============
SND_FindEntState
==============
*/
SndEntState *SND_FindEntState(unsigned __int64 handle, bool createNew)
{
  unsigned __int64 v2; 
  signed int v5; 
  SndEntState *entState; 
  unsigned int v7; 
  int v8; 
  char v9; 
  __int64 v10; 
  SndEntState *v11; 
  SndEntState *result; 

  v2 = handle & 0x1FFFFFFFFi64;
  if ( (handle & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v2 - 2049 <= 0x8FF || v2 <= 0x7FD || v2 - 5571 <= 0x7A120 )
  {
    v5 = 0;
    entState = g_snd.entState;
    v7 = 0;
    v8 = -1;
    do
    {
      if ( handle == entState->handle )
        return entState;
      v9 = 0;
      v10 = 0i64;
      while ( !entState->contextTypes[v10] )
      {
        if ( ++v10 >= 3 )
          goto LABEL_12;
      }
      v9 = 1;
LABEL_12:
      if ( (signed int)(g_snd.frame - entState->lastUsed) > v5 && !v9 )
      {
        v8 = v7;
        v5 = g_snd.frame - entState->lastUsed;
      }
      ++v7;
      ++entState;
    }
    while ( v7 < 0x80 );
    if ( createNew && v8 != -1 )
    {
      v11 = &g_snd.entState[(__int64)v8];
      memset_0(v11, 0, sizeof(SndEntState));
      result = v11;
      v11->handle = handle;
      return result;
    }
  }
  return 0i64;
}

/*
==============
SND_FindFreeVoice
==============
*/
__int64 SND_FindFreeVoice(const SndStartAliasInfo *startAliasInfo, int entchannel, int startVoiceIndex, int voiceCount, SndAliasGroupTracking *inOutTracking)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  const char *EntChannelName; 
  const char *v10; 
  const SndAlias *alias; 
  bool HasFreeVoice; 
  int ReplaceableVoiceWithEntChannel; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  int autoSimId; 
  unsigned int Priority; 
  unsigned __int64 v19; 
  const char *v20; 
  unsigned int v21; 
  const char *v22; 
  unsigned int v23; 
  const char *aliasName; 
  unsigned int v25; 
  const char *v26; 
  const dvar_t *v27; 
  double v28; 
  int v29; 
  const char *v30; 
  double v31; 
  unsigned int v32; 
  double v34; 
  double v35; 
  int v36; 
  const char *v37; 
  double v38; 
  double v39; 
  double VoiceFractionPlayed; 
  unsigned int v41; 
  __int64 v42; 
  __int64 v43; 
  vec3_t outOrigin; 

  v5 = voiceCount;
  v6 = startVoiceIndex;
  v7 = entchannel;
  EntChannelName = SND_GetEntChannelName(entchannel);
  v10 = j_va("Max voices reached for entchannel %s", EntChannelName);
  alias = startAliasInfo->alias;
  HasFreeVoice = SND_HasFreeVoice(v7);
  SND_DebugAliasPrint(!HasFreeVoice, alias, v10);
  Profile_Begin(475);
  if ( !SND_HasFreeVoice(v7) )
  {
    ReplaceableVoiceWithEntChannel = SND_FindReplaceableVoiceWithEntChannel(startAliasInfo, v7, v6, v5, g_snd.globals->entchannelInfo[v7].limitBehavior);
    v14 = ReplaceableVoiceWithEntChannel;
    if ( ReplaceableVoiceWithEntChannel != -1 )
    {
      if ( (unsigned int)ReplaceableVoiceWithEntChannel > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", ReplaceableVoiceWithEntChannel) )
        __debugbreak();
      if ( !sdGlob.voiceAlloc[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3718, ASSERT_TYPE_ASSERT, "((i == -1) || !SND_IsVoiceFree( i ))", (const char *)&queryFormat, "(i == SND_NOT_REPLACEABLE) || !SND_IsVoiceFree( i )") )
        __debugbreak();
    }
    goto LABEL_17;
  }
  if ( (int)v5 <= 0 )
  {
LABEL_16:
    LODWORD(v14) = SND_FindReplaceableVoice(startAliasInfo, v7, v6, v5);
LABEL_17:
    Profile_EndInternal(NULL);
    if ( (_DWORD)v14 != -1 )
    {
      if ( (unsigned int)v14 > 0x62 )
      {
        LODWORD(v42) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v42) )
          __debugbreak();
      }
      if ( sdGlob.voiceAlloc[(int)v14] )
      {
        autoSimId = startAliasInfo->autoSimId;
        if ( autoSimId != -1 && autoSimId == LODWORD(g_snd.chaninfoUnweightedPriority[492 * (int)v14 - 48650]) )
          g_sd.voices[(int)v14]->autoSimStopTimeStamp = startAliasInfo->autoSimTimeStamp;
        Priority = SND_GetPriority(g_snd.chaninfoEntchannel[(int)v14]);
        v19 = 1968i64 * (int)v14;
        v20 = **(const char ***)&g_snd.chaninfoUnweightedPriority[v19 / 4 - 48680];
        v21 = SND_GetPriority(v7);
        v22 = j_va("(prio %i) => Replacing '%s' (prio: %i)", v21, v20, Priority);
        SND_DebugAliasPrint(1, startAliasInfo->alias, v22);
        v23 = SND_GetPriority(v7);
        aliasName = startAliasInfo->alias->aliasName;
        v25 = SND_GetPriority(g_snd.chaninfoEntchannel[(int)v14]);
        v26 = j_va("(prio %i ) => Replaced by '%s' (prio: %i)", v25, aliasName, v23);
        SND_DebugAliasPrint(1, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[v19 / 4 - 48680], v26);
        v27 = DCONST_DVARBOOL_snd_debugReplace;
        if ( !DCONST_DVARBOOL_snd_debugReplace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugReplace") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        if ( v27->current.enabled )
        {
          if ( (*(_BYTE *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[v19 / 4 - 48680] + 112i64) & 1) != 0 || (v28 = SND_GetVoiceFractionPlayed(v14, 0), *(float *)&v28 >= 1.0) )
          {
            if ( (unsigned int)(v14 - 80) <= 0xD )
            {
              v34 = SND_DistSqToNearestListener(&startAliasInfo->org);
              SndVoice_GetOrigin(&g_snd.voices[v19 / 0x7B0], &outOrigin);
              v35 = fsqrt(*(float *)&v34);
              v36 = SND_GetPriority(v7);
              v37 = startAliasInfo->alias->aliasName;
              v38 = SND_DistSqToNearestListener(&outOrigin);
              v39 = *(float *)&v38;
              VoiceFractionPlayed = SND_GetVoiceFractionPlayed(v14, 0);
              v41 = SND_GetPriority(g_snd.chaninfoEntchannel[(int)v14]);
              Com_DPrintf(9, "Stopping stream sound channel that's playing '%s' (prio: %i, %.0f%% played, dist: %f) so we can play '%s' (prio: %i, dist: %f) instead\n", **(const char ***)&g_snd.chaninfoUnweightedPriority[v19 / 4 - 48680], v41, (float)(*(float *)&VoiceFractionPlayed * 100.0), v39, v37, v36, v35);
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
            else
            {
              v29 = SND_GetPriority(v7);
              v30 = startAliasInfo->alias->aliasName;
              v31 = SND_GetVoiceFractionPlayed(v14, 0);
              v32 = SND_GetPriority(g_snd.chaninfoEntchannel[(int)v14]);
              LODWORD(v43) = v29;
              Com_Printf(14, "Stopping sound channel that's playing '%s' (prio: %i, %.0f%% played) so we can play '%s' (prio: %i) instead\n", **(const char ***)&g_snd.chaninfoUnweightedPriority[v19 / 4 - 48680], v32, (float)(*(float *)&v31 * 100.0), v30, v43);
            }
          }
        }
      }
      SND_StopVoiceAndClearTracking(v14, inOutTracking);
    }
    SND_DebugAliasPrint((int)v14 < 0, startAliasInfo->alias, "No free channels");
    return (unsigned int)v14;
  }
  v15 = 0i64;
  v16 = v6;
  while ( 1 )
  {
    if ( v16 > 0x62 )
    {
      LODWORD(v42) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v42) )
        __debugbreak();
    }
    if ( !sdGlob.voiceAlloc[v6 + v15] )
      break;
    ++v16;
    if ( ++v15 >= v5 )
      goto LABEL_16;
  }
  Profile_EndInternal(NULL);
  return v16;
}

/*
==============
SND_FindReplaceableVoice
==============
*/
__int64 SND_FindReplaceableVoice(const SndStartAliasInfo *startAliasInfo, unsigned int entchannel, int first, int count)
{
  __int64 v7; 
  float priorityVolume; 
  float priorityAttenuation; 
  const dvar_t *v10; 
  bool enabled; 
  float Priority; 
  unsigned int v15; 
  int v16; 
  const char *subtitle; 
  float *v18; 
  float *v19; 
  __int64 v20; 
  double VoiceFractionPlayed; 
  const dvar_t *v22; 
  bool v23; 
  __int128 v25; 
  unsigned int v26; 
  float v27; 
  __int64 v28; 

  v7 = first;
  if ( !startAliasInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3622, ASSERT_TYPE_ASSERT, "(startAliasInfo)", (const char *)&queryFormat, "startAliasInfo") )
    __debugbreak();
  if ( (unsigned int)v7 > 0x62 )
  {
    LODWORD(v28) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3623, ASSERT_TYPE_ASSERT, "( ( first >= 0 && first < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( first ) = %i", v28) )
      __debugbreak();
  }
  if ( count < 0 || count > 99 - (int)v7 )
  {
    LODWORD(v28) = count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3624, ASSERT_TYPE_ASSERT, "( ( count >= 0 && count <= ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) - first ) )", "( count ) = %i", v28) )
      __debugbreak();
  }
  if ( entchannel >= g_snd.globals->entchannelCount )
  {
    LODWORD(v28) = entchannel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3625, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v28) )
      __debugbreak();
  }
  if ( !startAliasInfo->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3626, ASSERT_TYPE_ASSERT, "(startAliasInfo->alias)", (const char *)&queryFormat, "startAliasInfo->alias") )
    __debugbreak();
  priorityVolume = startAliasInfo->priorityVolume;
  if ( (priorityVolume < 0.0 || priorityVolume > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3627, ASSERT_TYPE_ASSERT, "( ( startAliasInfo->priorityVolume >= 0.0f && startAliasInfo->priorityVolume <= 1.0f ) )", "( startAliasInfo->priorityVolume ) = %g", priorityVolume) )
    __debugbreak();
  priorityAttenuation = startAliasInfo->priorityAttenuation;
  if ( (priorityAttenuation < 0.0 || priorityAttenuation > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3628, ASSERT_TYPE_ASSERT, "( ( startAliasInfo->priorityAttenuation >= 0.0f && startAliasInfo->priorityAttenuation <= 1.0f ) )", "( startAliasInfo->priorityAttenuation ) = %g", priorityAttenuation) )
    __debugbreak();
  v10 = DCONST_DVARBOOL_snd_useHardOuterEntchannelPriorities;
  if ( !DCONST_DVARBOOL_snd_useHardOuterEntchannelPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_useHardOuterEntchannelPriorities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  enabled = v10->current.enabled;
  Priority = (float)SND_GetPriority(entchannel);
  *(float *)&_XMM6 = Priority;
  if ( !enabled )
    *(float *)&_XMM6 = (float)(Priority * startAliasInfo->priorityVolume) * startAliasInfo->priorityAttenuation;
  if ( *(float *)&_XMM6 <= 0.000099999997 )
    return 0xFFFFFFFFi64;
  v15 = -1;
  v16 = v7 + count;
  subtitle = startAliasInfo->alias->subtitle;
  if ( (int)v7 < (int)v7 + count )
  {
    v18 = &g_snd.chaninfoUnweightedPriority[492 * v7 - 48680];
    v19 = &g_snd.chaninfoUnweightedPriority[v7];
    do
    {
      v20 = *(_QWORD *)v18;
      if ( !*(_QWORD *)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3649, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
        __debugbreak();
      if ( !*((_DWORD *)v18 - 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3650, ASSERT_TYPE_ASSERT, "(voice->soundFileInfo.loadingState != SFLS_UNLOADED)", (const char *)&queryFormat, "voice->soundFileInfo.loadingState != SFLS_UNLOADED") )
        __debugbreak();
      if ( !SND_IsEntChannelPASpeaker((unsigned __int8)(*(int *)(*(_QWORD *)v18 + 112i64) >> 10)) && *(_DWORD *)(*(_QWORD *)v18 + 40i64) != g_snd.cinematicAssetId )
      {
        if ( *((_DWORD *)v18 - 28) == 2 && (*(_BYTE *)(v20 + 112) & 1) == 0 )
        {
          VoiceFractionPlayed = SND_GetVoiceFractionPlayed(v7, 0);
          if ( *(float *)&VoiceFractionPlayed >= 1.0 )
            return (unsigned int)v7;
        }
        if ( subtitle || !*(_QWORD *)(v20 + 8) )
        {
          v22 = DCONST_DVARBOOL_snd_useHardOuterEntchannelPriorities;
          if ( !DCONST_DVARBOOL_snd_useHardOuterEntchannelPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_useHardOuterEntchannelPriorities") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          v23 = v22->current.enabled;
          v25 = 0i64;
          *(float *)&v25 = (float)SND_GetPriority(*((_DWORD *)v19 + 99));
          _XMM0 = v25;
          if ( v23 )
          {
            if ( *(float *)&v25 < 0.000099999997 )
              return (unsigned int)v7;
            v26 = v7;
            if ( *(float *)&_XMM6 <= *(float *)&v25 )
              v26 = v15;
            v15 = v26;
            __asm { vminss  xmm6, xmm0, xmm6 }
          }
          else
          {
            v27 = *(float *)&v25 * *v19;
            if ( v27 <= 0.000099999997 )
              return (unsigned int)v7;
            if ( v27 <= *(float *)&_XMM6 )
            {
              *(float *)&_XMM6 = v27;
              v15 = v7;
            }
          }
        }
      }
      LODWORD(v7) = v7 + 1;
      v18 += 492;
      ++v19;
    }
    while ( (int)v7 < v16 );
  }
  return v15;
}

/*
==============
SND_FinishPlayingWeaponSound
==============
*/
void SND_FinishPlayingWeaponSound(const SndPlayParams *inParams, bool isPlayer, const WeaponSFXPackage *sfxPackage, bool playAtmo, bool isDualWield, PlayerHandIndex hand)
{
  const SndAliasList *WeapFireAtmoSound; 
  __m256i v11; 
  __m256i v12; 
  __m256i v13; 
  vec3_t *p_org; 
  SndWeapShotCountId autoSimShotCount; 
  unsigned __int64 sndEnt; 
  int autoSimId; 
  __int64 autoSimTimeStamp; 
  SndPlayParams inParamsa; 

  if ( SND_PlaySoundAliasFromParams(inParams, 0) )
  {
    if ( playAtmo )
    {
      WeapFireAtmoSound = SND_GetWeapFireAtmoSound(sfxPackage, isPlayer, isDualWield, hand);
      if ( WeapFireAtmoSound )
      {
        v11 = *(__m256i *)&inParams->sndEnt;
        *(__m256i *)&inParamsa.aliasList = *(__m256i *)&inParams->aliasList;
        v12 = *(__m256i *)&inParams->system;
        *(__m256i *)&inParamsa.sndEnt = v11;
        v13 = *(__m256i *)&inParams->startOffsetFraction;
        inParamsa.aliasList = WeapFireAtmoSound;
        inParamsa.aliasId = 0;
        *(__m256i *)&inParamsa.system = v12;
        *(__m256i *)&inParamsa.startOffsetFraction = v13;
        SND_PlaySoundAliasFromParams(&inParamsa, 0);
      }
    }
    p_org = &inParams->org;
    autoSimShotCount = inParams->autoSimShotCount;
    sndEnt = inParams->sndEnt;
    autoSimTimeStamp = inParams->autoSimTimeStamp;
    autoSimId = inParams->autoSimId;
    if ( isPlayer )
      SND_WeapReflectPlayPlayerSound(sndEnt, p_org, sfxPackage, autoSimShotCount, autoSimId, autoSimTimeStamp);
    else
      SND_WeapReflectPlayNPCSound(sndEnt, p_org, sfxPackage, autoSimShotCount, autoSimId, autoSimTimeStamp);
  }
}

/*
==============
SND_FrameUpdateVirtualLoopSounds
==============
*/
void SND_FrameUpdateVirtualLoopSounds(void)
{
  float *v0; 
  __int64 v1; 
  bool v2; 
  const SndAliasList *v3; 
  float v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  float v8; 
  SndPlayParams inParams; 
  tmat33_t<vec3_t> axis_out; 

  inParams.playbackType = SPT_BLEND;
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.aliasList = NULL;
  v0 = &g_snd.virtualLoops[0].org.v[2];
  inParams.aliasId = 0;
  v1 = 198i64;
  inParams.sndEnt = 0i64;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  do
  {
    if ( *((_DWORD *)v0 - 8) != -1 )
    {
      v2 = *((_BYTE *)v0 + 12) == 0;
      v3 = (const SndAliasList *)*((_QWORD *)v0 - 3);
      v4 = v0[2];
      v5 = *((_QWORD *)v0 - 2);
      inParams.volumeScale = v0[1];
      inParams.pitch = v4;
      inParams.aliasList = v3;
      inParams.sndEnt = v5;
      if ( !v2 )
      {
        v6 = v5 & 0x1FFFFFFFFi64;
        if ( (v5 & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v6 - 2049 <= 0x8FF || v6 <= 0x7FD || v6 - 5571 <= 0x7A120 )
          CG_SND_GetSoundEntityOrientation(v5, (vec3_t *)(v0 - 2), &axis_out);
      }
      v8 = *(v0 - 1);
      inParams.org.v[0] = *(v0 - 2);
      inParams.org.v[2] = *v0;
      inParams.org.v[1] = v8;
      *((_DWORD *)v0 - 7) = SND_PlaySoundAliasFromParams(&inParams, 0);
    }
    v0 += 12;
    --v1;
  }
  while ( v1 );
}

/*
==============
SND_FreeEntityParamInfo
==============
*/
void SND_FreeEntityParamInfo(int entIndex)
{
  unsigned __int64 v2; 
  unsigned __int16 EntParamIdx; 
  int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  unsigned int v10; 
  int v11; 

  if ( g_snd.driverInitialized )
  {
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "wait_workers");
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
    Sys_ProfEndNamedEvent();
    v2 = (unsigned __int64)&g_sndEntityParamFence & 3;
    do
    {
      if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_sndEntityParamFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_sndEntityParamFence, 1, 0) == 1 );
    if ( (unsigned int)entIndex >= 0x7B6E3 )
    {
      v9 = 505571;
      LODWORD(v7) = entIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1856, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( ( ( 2048 ) ) + ( 1 ) + ( 1024 ) + ( 128 ) + ( 128 ) + 1024 + ( 2 ) + ( 32 ) + ( 1024 ) + ( 32 ) + ( 128 ) + ( 500000 ) ) )", "entIndex doesn't index MAX_SOUND_ENTITIES\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    EntParamIdx = SND_GetEntParamIdx(entIndex);
    if ( EntParamIdx != 0xFFFF )
    {
      if ( EntParamIdx >= 0x40u )
      {
        LODWORD(v8) = 64;
        LODWORD(v7) = EntParamIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1862, ASSERT_TYPE_ASSERT, "(unsigned)( paramInfoIndex ) < (unsigned)( 64 )", "paramInfoIndex doesn't index SND_MAX_PARAM_INFO\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( g_sndEntityParamInfo[EntParamIdx].entIndex != entIndex )
      {
        v11 = entIndex;
        v10 = g_sndEntityParamInfo[EntParamIdx].entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1866, ASSERT_TYPE_ASSERT, "( info->entIndex ) == ( static_cast<uint>( entIndex ) )", "%s == %s\n\t%i, %i", "info->entIndex", "static_cast<uint>( entIndex )", v10, v11) )
          __debugbreak();
      }
      v4 = 0;
      while ( 1 )
      {
        v5 = (v4 + entIndex % 64 % 64) % 64;
        if ( g_sndEntityParamIndex[v5].entNum == entIndex )
          break;
        if ( ++v4 >= 64 )
          goto LABEL_22;
      }
      g_sndEntityParamIndex[v5] = (EntParamIdxHashBucket)0x7FFFFFF;
LABEL_22:
      if ( EntParamIdx >= 0x40u )
      {
        LODWORD(v8) = 64;
        LODWORD(v7) = EntParamIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1797, ASSERT_TYPE_ASSERT, "(unsigned)( paramInfoIndex ) < (unsigned)( 64 )", "paramInfoIndex doesn't index SND_MAX_PARAM_INFO\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      v6 = EntParamIdx;
      SND_InitParameter(&g_sndEntityParamInfo[v6].pitch, 1.0);
      SND_InitParameter(&g_sndEntityParamInfo[v6].volume, 1.0);
      g_sndEntityParamInfo[v6].entIndex = 0x7FFFFFFF;
    }
    if ( v2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_sndEntityParamFence) )
        __debugbreak();
    }
    _InterlockedExchange(&g_sndEntityParamFence, 0);
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  }
}

/*
==============
SND_FullOcclusionEnabledForChannel
==============
*/
bool SND_FullOcclusionEnabledForChannel(int entChannelIdx)
{
  __int64 v1; 
  unsigned int v2; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v1 = entChannelIdx;
  if ( (unsigned int)entChannelIdx >= 0x100 )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7445, ASSERT_TYPE_ASSERT, "(unsigned)( entChannelIdx ) < (unsigned)( 256 )", "entChannelIdx doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entChannelIdx, v6) )
      __debugbreak();
    LODWORD(v7) = 256;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v2 = g_snd.entChanFullOcclusionDisabled[v1 >> 5];
  return !_bittest((const int *)&v2, v1 & 0x1F);
}

/*
==============
SND_Get3DDistanceAttenuation
==============
*/
double SND_Get3DDistanceAttenuation(const vec3_t *soundOrigin, const SndCurve *curve, float distMin, float distMax, float distanceScale)
{
  float v7; 
  float v8; 
  unsigned __int64 v9; 
  float v10; 
  float v11; 
  float v12; 

  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3597, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  v7 = 0.0;
  if ( distMin < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3598, ASSERT_TYPE_ASSERT, "(distMin >= 0.0f)", (const char *)&queryFormat, "distMin >= 0.0f") )
    __debugbreak();
  if ( distMax < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3599, ASSERT_TYPE_ASSERT, "(distMax >= 0.0f)", (const char *)&queryFormat, "distMax >= 0.0f") )
    __debugbreak();
  if ( distMax <= distMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3600, ASSERT_TYPE_ASSERT, "(distMax > distMin)", (const char *)&queryFormat, "distMax > distMin") )
    __debugbreak();
  v8 = FLOAT_3_4028235e38;
  v9 = (unsigned __int64)&g_snd.listenerFence & 3;
  v10 = 0.0;
  v11 = 0.0;
  do
  {
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  if ( g_snd.listeners[0].active && (float)((float)((float)((float)(g_snd.listeners[0].orient.origin.v[1] - soundOrigin->v[1]) * (float)(g_snd.listeners[0].orient.origin.v[1] - soundOrigin->v[1])) + (float)((float)(g_snd.listeners[0].orient.origin.v[0] - soundOrigin->v[0]) * (float)(g_snd.listeners[0].orient.origin.v[0] - soundOrigin->v[0]))) + (float)((float)(g_snd.listeners[0].orient.origin.v[2] - soundOrigin->v[2]) * (float)(g_snd.listeners[0].orient.origin.v[2] - soundOrigin->v[2]))) < 3.4028235e38 )
  {
    v7 = g_snd.listeners[0].orient.origin.v[0];
    v10 = g_snd.listeners[0].orient.origin.v[1];
    v11 = g_snd.listeners[0].orient.origin.v[2];
    v8 = (float)((float)((float)(g_snd.listeners[0].orient.origin.v[1] - soundOrigin->v[1]) * (float)(g_snd.listeners[0].orient.origin.v[1] - soundOrigin->v[1])) + (float)((float)(g_snd.listeners[0].orient.origin.v[0] - soundOrigin->v[0]) * (float)(g_snd.listeners[0].orient.origin.v[0] - soundOrigin->v[0]))) + (float)((float)(g_snd.listeners[0].orient.origin.v[2] - soundOrigin->v[2]) * (float)(g_snd.listeners[0].orient.origin.v[2] - soundOrigin->v[2]));
  }
  if ( g_snd.listeners[1].active && (float)((float)((float)((float)(g_snd.listeners[1].orient.origin.v[1] - soundOrigin->v[1]) * (float)(g_snd.listeners[1].orient.origin.v[1] - soundOrigin->v[1])) + (float)((float)(g_snd.listeners[1].orient.origin.v[0] - soundOrigin->v[0]) * (float)(g_snd.listeners[1].orient.origin.v[0] - soundOrigin->v[0]))) + (float)((float)(g_snd.listeners[1].orient.origin.v[2] - soundOrigin->v[2]) * (float)(g_snd.listeners[1].orient.origin.v[2] - soundOrigin->v[2]))) < v8 )
  {
    v7 = g_snd.listeners[1].orient.origin.v[0];
    v10 = g_snd.listeners[1].orient.origin.v[1];
    v11 = g_snd.listeners[1].orient.origin.v[2];
  }
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
  v12 = fsqrt((float)((float)((float)(v10 - soundOrigin->v[1]) * (float)(v10 - soundOrigin->v[1])) + (float)((float)(v7 - soundOrigin->v[0]) * (float)(v7 - soundOrigin->v[0]))) + (float)((float)(v11 - soundOrigin->v[2]) * (float)(v11 - soundOrigin->v[2]))) * distanceScale;
  SND_GetDistanceCurveFraction(v12, distMin, distMax);
  return SND_GetSndCurveValue(curve->numPoints, curve->points, v12);
}

/*
==============
SND_Get3DSpeakerVolumes
==============
*/

void __fastcall SND_Get3DSpeakerVolumes(float *outputs, double dist, const vec3_t *delta, const snd_listener *listener, const SndVoice *voice, const SpeakerMap *speakerMap)
{
  const dvar_t *v6; 
  char v7; 
  const SndAlias **p_alias; 
  __m128 v11; 
  __int64 v12; 
  __m128 v13; 
  float v14; 
  float *v15; 
  __m128 v16; 
  float v17; 
  __m128 v18; 
  __int64 v19; 
  signed __int64 v20; 
  signed __int64 v21; 
  signed __int64 v22; 
  signed __int64 v23; 
  float *v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  signed __int64 v33; 
  signed __int64 v34; 
  float *v35; 
  signed __int64 v36; 
  signed __int64 v37; 
  unsigned __int64 v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int64 v50; 
  float smartPanAttenuation2d; 
  __m128 v52; 
  __int64 v53; 
  __int64 v54; 
  signed __int64 v55; 
  signed __int64 v56; 
  __m128 *v57; 
  float *v58; 
  signed __int64 v59; 
  signed __int64 v60; 
  unsigned __int64 v61; 
  float v62; 
  float v63; 
  float v64; 
  float *v65; 
  __int64 v66; 
  float volumes; 
  char v69[12]; 
  char v70[108]; 
  float v71; 
  float v72; 
  char v73; 
  char v74; 
  float v75; 

  v6 = DCONST_DVARBOOL_snd_enable_capture_mode;
  v7 = 0;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  p_alias = &voice->alias;
  if ( v6->current.enabled && SND_IsChannelMissionVOChannel((unsigned __int8)((*p_alias)->flags >> 10)) )
  {
    v7 = 1;
  }
  else if ( speakerMap->id == g_snd.defaultHash || *(float *)&dist >= (*p_alias)->smartPanDistance3d )
  {
    memset_0(outputs, 0, 0x80ui64);
    SND_SpatializeVoice(voice, outputs, delta, listener, *(const float *)&dist);
    return;
  }
  if ( (*p_alias)->smartPanDistance3d < (*p_alias)->smartPanDistance2d && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12752, ASSERT_TYPE_ASSERT, "(voice->alias->smartPanDistance2d <= voice->alias->smartPanDistance3d)", (const char *)&queryFormat, "voice->alias->smartPanDistance2d <= voice->alias->smartPanDistance3d") )
    __debugbreak();
  memset_0(outputs, 0, 0x80ui64);
  memset_0(&volumes, 0, 0x80ui64);
  SND_UpdateSpeakerMap(voice, speakerMap, &volumes);
  if ( v7 || *(float *)&dist < (*p_alias)->smartPanDistance2d )
  {
    smartPanAttenuation2d = (*p_alias)->smartPanAttenuation2d;
    v52 = _mm_shuffle_ps((__m128)LODWORD(smartPanAttenuation2d), (__m128)LODWORD(smartPanAttenuation2d), 0);
    if ( outputs > &v71 || (v53 = 0i64, outputs + 31 < &volumes) )
    {
      v54 = 2i64;
      v55 = (char *)&volumes - (char *)outputs;
      v56 = v70 - (char *)outputs;
      v57 = (__m128 *)(outputs + 8);
      do
      {
        v57[-2] = _mm128_mul_ps(v52, *(__m128 *)((char *)v57 + v55 - 32));
        v57[-1] = _mm128_mul_ps(v52, *(__m128 *)((char *)v57 + v56 - 32));
        *v57 = _mm128_mul_ps(v52, *(__m128 *)((char *)v57 + v55));
        v57[1] = _mm128_mul_ps(v52, *(__m128 *)((char *)v57 + v56));
        v57 += 4;
        --v54;
      }
      while ( v54 );
      v53 = 32i64;
    }
    if ( (unsigned __int64)v53 < 0x20 )
    {
      if ( 32 - v53 >= 4 )
      {
        v58 = &outputs[v53 + 2];
        v59 = (char *)&volumes - (char *)outputs;
        v60 = v69 - (char *)outputs;
        v61 = ((unsigned __int64)(28 - v53) >> 2) + 1;
        v53 += 4 * v61;
        do
        {
          v62 = smartPanAttenuation2d * *(float *)((char *)v58 + v60 - 8);
          *(v58 - 2) = smartPanAttenuation2d * *(float *)((char *)v58 + v59 - 8);
          v63 = smartPanAttenuation2d * *(float *)((char *)v58 + v59);
          *(v58 - 1) = v62;
          v64 = smartPanAttenuation2d * *(float *)((char *)v58 + v60);
          *v58 = v63;
          v58[1] = v64;
          v58 += 4;
          --v61;
        }
        while ( v61 );
      }
      if ( v53 < 32 )
      {
        v65 = &outputs[v53];
        v66 = 32 - v53;
        do
        {
          *v65 = smartPanAttenuation2d * *(float *)((char *)v65 + (char *)&volumes - (char *)outputs);
          ++v65;
          --v66;
        }
        while ( v66 );
      }
    }
  }
  else
  {
    memset_0(&v72, 0, 0x80ui64);
    SND_SpatializeVoice(voice, &v72, delta, listener, *(const float *)&dist);
    v11.m128_u64[1] = *(unsigned __int64 *)(&dist + 1);
    *(double *)v11.m128_u64 = I_fclamp((float)(*(float *)&dist - (*p_alias)->smartPanDistance2d) / (float)((*p_alias)->smartPanDistance3d - (*p_alias)->smartPanDistance2d), 0.0, 1.0);
    v12 = 0i64;
    v13 = (__m128)LODWORD(FLOAT_1_0);
    v13.m128_f32[0] = (float)(1.0 - v11.m128_f32[0]) * (*p_alias)->smartPanAttenuation2d;
    v14 = v13.m128_f32[0];
    v15 = outputs + 31;
    v16 = _mm_shuffle_ps(v13, v13, 0);
    v17 = v11.m128_f32[0];
    v18 = _mm_shuffle_ps(v11, v11, 0);
    if ( (outputs > &v75 || v15 < &v72) && (outputs > &v71 || v15 < &volumes) )
    {
      v19 = 2i64;
      v20 = (char *)&volumes - (char *)outputs;
      v21 = (char *)&v72 - (char *)outputs;
      v22 = v70 - (char *)outputs;
      v23 = &v74 - (char *)outputs;
      v24 = outputs + 8;
      do
      {
        v25 = _mm128_mul_ps(v16, *(__m128 *)((char *)v24 + v20 - 32));
        v26 = _mm128_mul_ps(v18, *(__m128 *)((char *)v24 + v21 - 32));
        v24 += 16;
        v27 = _mm128_add_ps(v26, v25);
        v28 = _mm128_mul_ps(v16, *(__m128 *)((char *)v24 + v22 - 96));
        *((__m128 *)v24 - 6) = v27;
        v29 = _mm128_add_ps(_mm128_mul_ps(v18, *(__m128 *)((char *)v24 + v23 - 96)), v28);
        v30 = _mm128_mul_ps(v16, *(__m128 *)((char *)v24 + v20 - 64));
        *((__m128 *)v24 - 5) = v29;
        v31 = _mm128_add_ps(_mm128_mul_ps(v18, *(__m128 *)((char *)v24 + v21 - 64)), v30);
        v32 = _mm128_mul_ps(v16, *(__m128 *)((char *)v24 + v22 - 64));
        *((__m128 *)v24 - 4) = v31;
        *((__m128 *)v24 - 3) = _mm128_add_ps(_mm128_mul_ps(v18, *(__m128 *)((char *)v24 + v23 - 64)), v32);
        --v19;
      }
      while ( v19 );
      v12 = 32i64;
    }
    if ( (unsigned __int64)v12 < 0x20 )
    {
      if ( 32 - v12 >= 4 )
      {
        v33 = (char *)&volumes - (char *)outputs;
        v34 = (char *)&v72 - (char *)outputs;
        v35 = &outputs[v12 + 2];
        v36 = v69 - (char *)outputs;
        v37 = &v73 - (char *)outputs;
        v38 = ((unsigned __int64)(28 - v12) >> 2) + 1;
        v12 += 4 * v38;
        do
        {
          v39 = v17 * *(float *)((char *)v35 + v34 - 8);
          v40 = v14 * *(float *)((char *)v35 + v33 - 8);
          v41 = v17 * *(float *)((char *)v35 + v37 - 8);
          v35 += 4;
          v42 = v39 + v40;
          v43 = v14 * *(float *)((char *)v35 + v36 - 24);
          *(v35 - 6) = v42;
          v44 = v41 + v43;
          v45 = v17 * *(float *)((char *)v35 + v34 - 16);
          v46 = v14 * *(float *)((char *)v35 + v33 - 16);
          *(v35 - 5) = v44;
          v47 = v45 + v46;
          v48 = v17 * *(float *)((char *)v35 + v37 - 16);
          v49 = v14 * *(float *)((char *)v35 + v36 - 16);
          *(v35 - 4) = v47;
          *(v35 - 3) = v48 + v49;
          --v38;
        }
        while ( v38 );
      }
      if ( v12 < 32 )
      {
        v50 = v12;
        do
        {
          outputs[v50] = (float)(v14 * *(float *)&v69[v50 * 4 - 4]) + (float)(v17 * *(float *)((char *)&v72 + v50 * 4));
          ++v50;
        }
        while ( v50 < 32 );
      }
    }
  }
}

/*
==============
SND_GetAliasEntChannelId
==============
*/
__int64 SND_GetAliasEntChannelId(const SndAlias *alias)
{
  __int64 v2; 
  __int64 v4; 

  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2162, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  v2 = (unsigned __int8)(alias->flags >> 10);
  if ( (unsigned int)v2 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2166, ASSERT_TYPE_ASSERT, "( ( entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  return g_snd.globals->entchannelInfo[v2].id;
}

/*
==============
SND_GetAliasOffset
==============
*/
__int64 SND_GetAliasOffset(const SndAlias *alias)
{
  SndAliasList *v2; 
  int count; 
  __int64 result; 
  const SndAlias *head; 

  if ( !alias->aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14979, ASSERT_TYPE_ASSERT, "(alias->aliasName)", (const char *)&queryFormat, "alias->aliasName") )
    __debugbreak();
  v2 = SND_FindAlias(alias->aliasName);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14982, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  count = v2->count;
  result = 0i64;
  head = v2->head;
  if ( count <= 0 )
    return 0i64;
  while ( head != alias )
  {
    ++head;
    result = (unsigned int)(result + 1);
    if ( (int)result >= count )
      return 0i64;
  }
  return result;
}

/*
==============
SND_GetAliasWithOffset
==============
*/
SndAlias *SND_GetAliasWithOffset(const char *name, int offset)
{
  SndAliasList *Alias; 
  SndAlias *head; 
  int v6; 
  int count; 
  SndAlias *result; 
  bool v9; 
  char *fmt; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15000, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  Alias = SND_FindAlias(name);
  if ( !Alias )
  {
LABEL_11:
    LODWORD(fmt) = offset;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444ED5C0, 149i64, name, fmt);
    return 0i64;
  }
  head = Alias->head;
  v6 = 0;
  count = Alias->count;
  result = head;
  v9 = count == 0;
  if ( count <= 0 )
  {
LABEL_9:
    if ( !v9 )
      return head;
    goto LABEL_11;
  }
  while ( v6 != offset )
  {
    ++result;
    if ( ++v6 >= count )
    {
      v9 = count == 0;
      goto LABEL_9;
    }
  }
  return result;
}

/*
==============
SND_GetAmbientTrack
==============
*/
__int64 SND_GetAmbientTrack(int number)
{
  int v4; 

  if ( (unsigned int)number >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6249, ASSERT_TYPE_ASSERT, "(unsigned)( number ) < (unsigned)( 2 )", "number doesn't index SND_NUM_AMBIENT_TRACKS\n\t%i not in [0, %i)", number, v4) )
      __debugbreak();
  }
  return number != 0 ? 2 : 0;
}

/*
==============
SND_GetBinkVolume
==============
*/
float SND_GetBinkVolume()
{
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11522, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( g_snd.globals->globalVolumeModifier == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11523, ASSERT_TYPE_ASSERT, "(g_snd.globals->globalVolumeModifier != 0.f)", (const char *)&queryFormat, "g_snd.globals->globalVolumeModifier != 0.f") )
    __debugbreak();
  return (float)(g_snd.volume / g_snd.globals->globalVolumeModifier) * g_snd.globals->binkVolumeModifier;
}

/*
==============
SND_GetControllerIndex
==============
*/
__int64 SND_GetControllerIndex(const LocalClientNum_t localClientNum)
{
  unsigned int controllerIndex; 
  unsigned __int64 v3; 
  LocalClientNum_t *p_localClientNum; 
  unsigned int v5; 
  int v8; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16313, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  controllerIndex = -1;
  v3 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  p_localClientNum = &g_snd.listeners[0].localClientNum;
  v5 = 0;
  while ( !*((_BYTE *)p_localClientNum + 4) || *p_localClientNum != localClientNum )
  {
    ++v5;
    p_localClientNum += 32;
    if ( v5 >= 2 )
      goto LABEL_15;
  }
  controllerIndex = g_snd.listeners[(__int64)(int)v5].controllerIndex;
LABEL_15:
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
  return controllerIndex;
}

/*
==============
SND_GetCurrentGlobalContext
==============
*/
char SND_GetCurrentGlobalContext(unsigned int type, unsigned int *outValueA, unsigned int *outValueB, float *outLerp)
{
  int ContextIndex; 

  ContextIndex = SND_FindContextIndex(type);
  if ( ContextIndex < 0 || !g_snd.globalContextsTo[ContextIndex] && (1.0 == g_snd.globalContextLerp[ContextIndex].current || !g_snd.globalContextsFrom[ContextIndex]) )
    return 0;
  *outValueA = g_snd.globalContextsFrom[ContextIndex];
  *outValueB = g_snd.globalContextsTo[ContextIndex];
  *outLerp = g_snd.globalContextLerp[ContextIndex].current;
  return 1;
}

/*
==============
SND_GetCurrentPriorityChannelGroup
==============
*/
snd_channelvolgroup *SND_GetCurrentPriorityChannelGroup()
{
  int currentChannelPriority; 
  int v2; 
  int v3; 

  currentChannelPriority = g_snd.currentChannelPriority;
  if ( g_snd.currentChannelPriority >= 4u )
  {
    v3 = 4;
    v2 = g_snd.currentChannelPriority;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( g_snd.currentChannelPriority ) < (unsigned)( ( sizeof( *array_counter( g_snd.channelPriorityVolGroups ) ) + 0 ) )", "g_snd.currentChannelPriority doesn't index ARRAY_COUNT( g_snd.channelPriorityVolGroups )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    currentChannelPriority = g_snd.currentChannelPriority;
  }
  return &g_snd.channelPriorityVolGroups[currentChannelPriority];
}

/*
==============
SND_GetCurrentReverb
==============
*/
__int64 SND_GetCurrentReverb()
{
  unsigned int presetId; 
  __int64 result; 

  presetId = g_snd.reverbSetting[g_snd.activeMainReverb].presetId;
  result = g_snd.defaultHash;
  if ( presetId )
    return presetId;
  return result;
}

/*
==============
SND_GetDefaultHash
==============
*/
__int64 SND_GetDefaultHash()
{
  return g_snd.defaultHash;
}

/*
==============
SND_GetDistanceCurveFraction
==============
*/

float __fastcall SND_GetDistanceCurveFraction(double radius, float mindist, float maxdist)
{
  __int128 v3; 

  v3 = *(_OWORD *)&radius;
  *(float *)&v3 = *(float *)&radius - mindist;
  LODWORD(radius) = 0;
  if ( *(float *)&v3 > 0.0 )
  {
    if ( maxdist <= mindist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15057, ASSERT_TYPE_ASSERT, "(maxdist > mindist)", (const char *)&queryFormat, "maxdist > mindist") )
      __debugbreak();
    _XMM1 = LODWORD(FLOAT_1_0);
    *(float *)&v3 = *(float *)&v3 / (float)(maxdist - mindist);
    _XMM2 = v3;
    __asm
    {
      vcmpless xmm0, xmm1, xmm2
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
  }
  return *(float *)&radius;
}

/*
==============
SND_GetDryLevel
==============
*/
float SND_GetDryLevel(const SndVoice *voice, bool useReverbDryLevel)
{
  const SndAlias *alias; 
  const ReverbDef *reverbDef; 

  alias = voice->alias;
  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12042, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  if ( SND_GetEntChannelSendFlag((unsigned __int8)(alias->flags >> 10)) == SENDTYPE_NONE )
    goto LABEL_12;
  if ( !useReverbDryLevel || (reverbDef = voice->reverbDef) == NULL )
  {
    _XMM6 = LODWORD(FLOAT_1_0);
    if ( g_snd.reverbSetting[0].presetId || g_snd.reverbSetting[1].presetId )
    {
      _XMM0 = g_snd.reverbSetting[1].presetId;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(g_snd.reverbSetting[1].drylevel);
      __asm { vblendvps xmm4, xmm1, xmm6, xmm2 }
      _XMM0 = alias->flags & 8;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm5, xmm2
      }
      return *(float *)&_XMM0;
    }
LABEL_12:
    *(float *)&_XMM0 = FLOAT_1_0;
    return *(float *)&_XMM0;
  }
  if ( (voice->alias->flags & 8) != 0 )
    goto LABEL_12;
  *(float *)&_XMM0 = reverbDef->dryLevel;
  return *(float *)&_XMM0;
}

/*
==============
SND_GetEntChannelCount
==============
*/
const SndGlobals *SND_GetEntChannelCount()
{
  const SndGlobals *result; 

  result = g_snd.globals;
  if ( g_snd.globals )
    return (const SndGlobals *)g_snd.globals->entchannelCount;
  return result;
}

/*
==============
SND_GetEntChannelFromName
==============
*/
__int64 SND_GetEntChannelFromName(const char *channelName)
{
  const char *v1; 
  const SndGlobals *globals; 
  unsigned int v3; 
  char v4; 
  int v5; 
  char v6; 
  unsigned int entchannelCount; 
  unsigned int *i; 

  v1 = channelName;
  if ( !channelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2381, ASSERT_TYPE_ASSERT, "(channelName)", (const char *)&queryFormat, "channelName") )
    __debugbreak();
  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2382, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  v3 = 0;
  if ( v1 && (v4 = *v1) != 0 )
  {
    v5 = 5381;
    do
    {
      ++v1;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *v1;
    }
    while ( *v1 );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  entchannelCount = globals->entchannelCount;
  if ( !entchannelCount )
    return 0xFFFFFFFFi64;
  for ( i = &globals->entchannelInfo->id; v5 != *i; i += 31 )
  {
    if ( ++v3 >= entchannelCount )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
SND_GetEntChannelName
==============
*/
snd_entchannel_info_t *SND_GetEntChannelName(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2371, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2372, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return &g_snd.globals->entchannelInfo[v1];
}

/*
==============
SND_GetEntChannelSendFlag
==============
*/
__int64 SND_GetEntChannelSendFlag(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2144, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2145, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return (unsigned int)g_snd.globals->entchannelInfo[v1].sendType;
}

/*
==============
SND_GetEntChannelSpeedOfSoundMultiplier
==============
*/
float SND_GetEntChannelSpeedOfSoundMultiplier(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2153, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2154, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.globals->entchannelInfo[v1].speedOfSoundMult;
}

/*
==============
SND_GetEntChannelSubmixBus
==============
*/
__int64 SND_GetEntChannelSubmixBus(unsigned int entchannel)
{
  __int64 v1; 
  __int64 result; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2115, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2116, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  switch ( g_snd.globals->entchannelInfo[v1].busId )
  {
    case 1:
      result = 9i64;
      break;
    case 2:
      result = 10i64;
      break;
    case 3:
      result = 11i64;
      break;
    case 4:
      result = 12i64;
      break;
    case 5:
      result = 13i64;
      break;
    default:
      result = 8i64;
      break;
  }
  return result;
}

/*
==============
SND_GetEntParamIdx
==============
*/
__int64 SND_GetEntParamIdx(int entNum)
{
  int v1; 
  int v2; 

  v1 = 0;
  while ( 1 )
  {
    v2 = (v1 + entNum % 64 % 64) % 64;
    if ( g_sndEntityParamIndex[v2].entNum == entNum )
      break;
    if ( ++v1 >= 64 )
      return 0xFFFFi64;
  }
  return g_sndEntityParamIndex[v2].paramIndex;
}

/*
==============
SND_GetEntityParamInfo
==============
*/
EntityParamInfo *SND_GetEntityParamInfo(unsigned __int64 sndEnt)
{
  unsigned __int64 v2; 
  int v3; 
  __int64 EntParamIdx; 
  EntityParamInfo *v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  volatile int v10; 
  __int64 v11; 
  int v12; 

  if ( ((unsigned __int8)&g_sndEntityParamFence & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&g_sndEntityParamFence) )
    __debugbreak();
  if ( g_sndEntityParamFence != 1 )
  {
    if ( ((unsigned __int64)&g_sndEntityParamFence & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&g_sndEntityParamFence) )
      __debugbreak();
    v12 = 1;
    v10 = g_sndEntityParamFence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1881, ASSERT_TYPE_ASSERT, "( Sys_InterlockedLoad( &g_sndEntityParamFence ) ) == ( 1 )", "%s == %s\n\t%i, %i", "Sys_InterlockedLoad( &g_sndEntityParamFence )", "1", v10, v12) )
      __debugbreak();
  }
  v2 = sndEnt & 0x1FFFFFFFFi64;
  if ( v2 - 5411 > 0x1F && v2 - 2049 > 0x8FF && v2 > 0x7FD && v2 - 5571 > 0x7A120 )
    return 0i64;
  v3 = truncate_cast<unsigned int,unsigned __int64>(v2);
  EntParamIdx = (unsigned __int16)SND_GetEntParamIdx(v3);
  if ( (_DWORD)EntParamIdx == 0xFFFF )
    return 0i64;
  if ( (unsigned int)EntParamIdx >= 0x40 )
  {
    LODWORD(v8) = 64;
    LODWORD(v7) = EntParamIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1897, ASSERT_TYPE_ASSERT, "(unsigned)( paramInfoIndex ) < (unsigned)( 64 )", "paramInfoIndex doesn't index SND_MAX_PARAM_INFO\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &g_sndEntityParamInfo[EntParamIdx];
  if ( v5->entIndex != v3 )
  {
    LODWORD(v11) = v3;
    LODWORD(v9) = v5->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1900, ASSERT_TYPE_ASSERT, "( info->entIndex ) == ( entIndex )", "%s == %s\n\t%i, %i", "info->entIndex", "entIndex", v9, v11) )
      __debugbreak();
  }
  return v5;
}

/*
==============
SND_GetEqTypeFromName
==============
*/
__int64 SND_GetEqTypeFromName(const char *eqTypeName)
{
  const char **v2; 
  unsigned int v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v2 = snd_eqTypeStrings;
  v3 = 0;
  do
  {
    v4 = *v2;
    v5 = 0x7FFFFFFFi64;
    v6 = eqTypeName;
    if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !eqTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = v4 - eqTypeName;
    while ( 1 )
    {
      v8 = (unsigned __int8)v6[v7];
      v9 = v5;
      v10 = *(unsigned __int8 *)v6++;
      --v5;
      if ( !v9 )
        return v3;
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
        return v3;
    }
    ++v3;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&snd_eqTypeStrings[5] );
  return 5i64;
}

/*
==============
SND_GetFarDryLevel
==============
*/
float SND_GetFarDryLevel(const SndVoice *voice)
{
  double DryLevel; 
  const dvar_t *v2; 
  float v3; 

  DryLevel = SND_GetDryLevel(voice, 1);
  v2 = DCONST_DVARFLT_snd_farDryAttenuation;
  v3 = *(float *)&DryLevel;
  if ( !DCONST_DVARFLT_snd_farDryAttenuation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_farDryAttenuation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  _XMM0 = LODWORD(FLOAT_10_0);
  *(float *)&_XMM0 = powf_0(10.0, v2->current.value * 0.050000001);
  __asm
  {
    vcmpltss xmm2, xmm0, cs:__real@37803e84
    vblendvps xmm0, xmm0, xmm1, xmm2
  }
  return *(float *)&_XMM0 * v3;
}

/*
==============
SND_GetFarWetLevel
==============
*/
double SND_GetFarWetLevel(const SndVoice *voice)
{
  const ReverbDef *reverbDef; 
  double v4; 

  if ( SND_GetEntChannelSendFlag((unsigned __int8)(voice->alias->flags >> 10)) == SENDTYPE_NONE )
    return 0.0;
  reverbDef = voice->reverbDef;
  if ( !reverbDef )
    return SND_GetWetLevel(voice->alias, g_snd.activeMainReverb);
  *(_QWORD *)&v4 = LODWORD(reverbDef->wetLevel);
  *(float *)&v4 = reverbDef->wetLevel * voice->alias->farReverbMultiplier;
  if ( (*(float *)&v4 < 0.0 || *(float *)&v4 > 256.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12126, ASSERT_TYPE_ASSERT, "( ( wetLevel >= 0 && wetLevel <= 256 ) )", "( wetLevel ) = %g", *(float *)&v4) )
    __debugbreak();
  return v4;
}

/*
==============
SND_GetFractionStartMsec
==============
*/
__int64 SND_GetFractionStartMsec(const SndStartAliasInfo *startAliasInfo)
{
  __int64 result; 

  SND_GetSoundFileLengthMS(startAliasInfo->assetEntry);
  if ( startAliasInfo->fraction == 0.0 )
  {
    result = (unsigned int)startAliasInfo->timeshift;
    if ( !(_DWORD)result )
    {
      if ( (startAliasInfo->alias->flags & 2) != 0 )
      {
        I_random();
        _XMM0 = 0i64;
        __asm { vroundss xmm4, xmm0, xmm1, 1 }
        return (int)*(float *)&_XMM4 & 0xFFFFFF00;
      }
      else
      {
        return 0i64;
      }
    }
  }
  else
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm3, 1 }
    return (unsigned int)(int)*(float *)&_XMM1;
  }
  return result;
}

/*
==============
SND_GetHDMIChannelCount
==============
*/
__int64 SND_GetHDMIChannelCount()
{
  return (unsigned int)g_snd.playback_channels;
}

/*
==============
SND_GetLengthMS
==============
*/
char SND_GetLengthMS(unsigned int playbackId, int *msec)
{
  int v4; 
  unsigned int *p_playbackId; 

  if ( !msec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3226, ASSERT_TYPE_ASSERT, "(msec)", (const char *)&queryFormat, "msec") )
    __debugbreak();
  v4 = 0;
  *msec = 0;
  if ( playbackId && (playbackId & 0x80000000) == 0 )
  {
    p_playbackId = &g_snd.voices[1].playbackId;
    while ( *(p_playbackId - 492) != playbackId )
    {
      if ( *p_playbackId == playbackId )
      {
        ++v4;
        break;
      }
      if ( p_playbackId[492] == playbackId )
      {
        v4 += 2;
        break;
      }
      p_playbackId += 1476;
      v4 += 3;
      if ( (__int64)p_playbackId >= (__int64)&g_snd.volmods[50].goalvalue )
        break;
    }
    if ( v4 == 99 )
      return 0;
    *msec = SND_GetSoundFileLengthMS(*(const SndAssetBankEntry **)&g_snd.chaninfoUnweightedPriority[492 * v4 - 48678]);
  }
  return 1;
}

/*
==============
SND_GetListener
==============
*/
void SND_GetListener(const LocalClientNum_t localClientNum, snd_listener *outListener)
{
  __int64 v2; 
  unsigned __int64 v4; 
  __m256i *v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2872, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  v5 = (__m256i *)&g_snd.listeners[v2];
  *(__m256i *)outListener->orient.origin.v = *v5;
  *(__m256i *)&outListener->orient.axis.row1.z = v5[1];
  *(__m256i *)&outListener->inverse.axis.row0.y = v5[2];
  *(__m256i *)&outListener->velocity = v5[3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
}

/*
==============
SND_GetListenerNearestToOrigin
==============
*/
void SND_GetListenerNearestToOrigin(const vec3_t *origin, snd_listener *outListener)
{
  unsigned __int64 v3; 
  __int128 v6; 
  __int64 v9; 
  __m256i *v10; 

  _XMM6 = LODWORD(FLOAT_3_4028235e38);
  v3 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  if ( g_snd.listeners[0].active )
  {
    v6 = LODWORD(g_snd.listeners[0].orient.origin.v[1]);
    *(float *)&v6 = (float)((float)((float)(g_snd.listeners[0].orient.origin.v[1] - origin->v[1]) * (float)(g_snd.listeners[0].orient.origin.v[1] - origin->v[1])) + (float)((float)(g_snd.listeners[0].orient.origin.v[0] - origin->v[0]) * (float)(g_snd.listeners[0].orient.origin.v[0] - origin->v[0]))) + (float)((float)(g_snd.listeners[0].orient.origin.v[2] - origin->v[2]) * (float)(g_snd.listeners[0].orient.origin.v[2] - origin->v[2]));
    _XMM5 = v6;
    __asm
    {
      vcmpltss xmm0, xmm5, xmm6
      vblendvps xmm6, xmm6, xmm5, xmm0
    }
  }
  v9 = 0i64;
  if ( g_snd.listeners[1].active && *(float *)&_XMM6 > (float)((float)((float)((float)(g_snd.listeners[1].orient.origin.v[1] - origin->v[1]) * (float)(g_snd.listeners[1].orient.origin.v[1] - origin->v[1])) + (float)((float)(g_snd.listeners[1].orient.origin.v[0] - origin->v[0]) * (float)(g_snd.listeners[1].orient.origin.v[0] - origin->v[0]))) + (float)((float)(g_snd.listeners[1].orient.origin.v[2] - origin->v[2]) * (float)(g_snd.listeners[1].orient.origin.v[2] - origin->v[2]))) )
    v9 = 1i64;
  v10 = (__m256i *)&g_snd.listeners[v9];
  *(__m256i *)outListener->orient.origin.v = *v10;
  *(__m256i *)&outListener->orient.axis.row1.z = v10[1];
  *(__m256i *)&outListener->inverse.axis.row0.y = v10[2];
  *(__m256i *)&outListener->velocity = v10[3];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
}

/*
==============
SND_GetListenerOrigin
==============
*/
void SND_GetListenerOrigin(const LocalClientNum_t clientNum, vec3_t *outOrigin)
{
  __int64 v2; 
  unsigned __int64 v3; 
  snd_listener *v5; 

  v2 = clientNum;
  v3 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  v5 = &g_snd.listeners[v2];
  outOrigin->v[0] = v5->orient.origin.v[0];
  outOrigin->v[1] = v5->orient.origin.v[1];
  outOrigin->v[2] = v5->orient.origin.v[2];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
}

/*
==============
SND_GetMasterPercent
==============
*/
float SND_GetMasterPercent(const SndVoice *voice)
{
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15940, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( !voice->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15941, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  return voice->alias->masterPercentage;
}

/*
==============
SND_GetMasterPriorityID
==============
*/
__int64 SND_GetMasterPriorityID(const SndVoice *voice)
{
  if ( voice )
    return voice->alias->masterPriority;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15933, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  return *(unsigned __int8 *)(MEMORY[0x70] + 209i64);
}

/*
==============
SND_GetMasterPriorityVal
==============
*/
float SND_GetMasterPriorityVal(SndVoice *voice)
{
  unsigned __int8 MasterPriorityID; 
  float v3; 
  float masterThreshold; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15971, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( !voice->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15972, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  MasterPriorityID = SND_GetMasterPriorityID(voice);
  v3 = SND_CalcVoiceVolume(0, voice) * voice->masterProcessedEnvelope;
  masterThreshold = voice->alias->masterThreshold;
  if ( v3 >= masterThreshold )
    return (float)MasterPriorityID;
  if ( masterThreshold < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15983, ASSERT_TYPE_ASSERT, "(voice->alias->masterThreshold >= 0.0f)", (const char *)&queryFormat, "voice->alias->masterThreshold >= 0.0f") )
    __debugbreak();
  return (float)(v3 / voice->alias->masterThreshold) * (float)MasterPriorityID;
}

/*
==============
SND_GetNearestListenerOrigin
==============
*/
void SND_GetNearestListenerOrigin(const vec3_t *origin, vec3_t *outListenerOrigin)
{
  float v2; 
  unsigned __int64 v5; 
  float v6; 

  v2 = FLOAT_3_4028235e38;
  *(_QWORD *)outListenerOrigin->v = 0i64;
  outListenerOrigin->v[2] = 0.0;
  v5 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  if ( g_snd.listeners[0].active )
  {
    v6 = (float)((float)((float)(g_snd.listeners[0].orient.origin.v[1] - origin->v[1]) * (float)(g_snd.listeners[0].orient.origin.v[1] - origin->v[1])) + (float)((float)(g_snd.listeners[0].orient.origin.v[0] - origin->v[0]) * (float)(g_snd.listeners[0].orient.origin.v[0] - origin->v[0]))) + (float)((float)(g_snd.listeners[0].orient.origin.v[2] - origin->v[2]) * (float)(g_snd.listeners[0].orient.origin.v[2] - origin->v[2]));
    if ( v6 < 3.4028235e38 )
    {
      outListenerOrigin->v[0] = g_snd.listeners[0].orient.origin.v[0];
      outListenerOrigin->v[1] = g_snd.listeners[0].orient.origin.v[1];
      outListenerOrigin->v[2] = g_snd.listeners[0].orient.origin.v[2];
      v2 = v6;
    }
  }
  if ( g_snd.listeners[1].active && (float)((float)((float)((float)(g_snd.listeners[1].orient.origin.v[1] - origin->v[1]) * (float)(g_snd.listeners[1].orient.origin.v[1] - origin->v[1])) + (float)((float)(g_snd.listeners[1].orient.origin.v[0] - origin->v[0]) * (float)(g_snd.listeners[1].orient.origin.v[0] - origin->v[0]))) + (float)((float)(g_snd.listeners[1].orient.origin.v[2] - origin->v[2]) * (float)(g_snd.listeners[1].orient.origin.v[2] - origin->v[2]))) < v2 )
  {
    outListenerOrigin->v[0] = g_snd.listeners[1].orient.origin.v[0];
    outListenerOrigin->v[1] = g_snd.listeners[1].orient.origin.v[1];
    outListenerOrigin->v[2] = g_snd.listeners[1].orient.origin.v[2];
  }
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
}

/*
==============
SND_GetNewBulletEvent
==============
*/
__int64 SND_GetNewBulletEvent()
{
  SndBulletEvent *delayedBulletEvents; 
  unsigned int v1; 

  delayedBulletEvents = g_snd.delayedBulletEvents;
  v1 = 0;
  while ( *(_DWORD *)delayedBulletEvents->state )
  {
    ++v1;
    ++delayedBulletEvents;
    if ( v1 >= 0x40 )
      return 0xFFFFFFFFi64;
  }
  delayedBulletEvents->impactAlias = NULL;
  delayedBulletEvents->whizbyCrackAlias = NULL;
  delayedBulletEvents->whizbyInAlias = NULL;
  delayedBulletEvents->whizbyOutAlias = NULL;
  *(_QWORD *)&delayedBulletEvents->whizbyInPlayId = 0i64;
  delayedBulletEvents->impactSurfType = -1;
  *(_QWORD *)&delayedBulletEvents->explosionReflectionType = 0i64;
  delayedBulletEvents->whizbyDelay = 0;
  delayedBulletEvents->playHitMarkerSoundDuringImpact = 0;
  delayedBulletEvents->hitmarkerType = SND_HITMARKER_TYPE_STANDARD;
  return v1;
}

/*
==============
SND_GetNewEntityParamInfo
==============
*/
EntityParamInfo *SND_GetNewEntityParamInfo(unsigned __int64 sndEnt)
{
  unsigned __int64 v2; 
  signed int v3; 
  int EntParamIdx; 
  int v5; 
  EntityParamInfo *v6; 
  unsigned int v7; 
  unsigned __int16 v9; 
  EntParamIdxHashBucket *v10; 
  unsigned __int16 entNum; 
  __int64 v12; 
  volatile int v13; 
  __int64 v14; 
  int v15; 

  if ( ((unsigned __int8)&g_sndEntityParamFence & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&g_sndEntityParamFence) )
    __debugbreak();
  if ( g_sndEntityParamFence != 1 )
  {
    if ( ((unsigned __int64)&g_sndEntityParamFence & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&g_sndEntityParamFence) )
      __debugbreak();
    v15 = 1;
    v13 = g_sndEntityParamFence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1910, ASSERT_TYPE_ASSERT, "( Sys_InterlockedLoad( &g_sndEntityParamFence ) ) == ( 1 )", "%s == %s\n\t%i, %i", "Sys_InterlockedLoad( &g_sndEntityParamFence )", "1", v13, v15) )
      __debugbreak();
  }
  v2 = sndEnt & 0x1FFFFFFFFi64;
  if ( v2 - 2046 <= 2 || v2 >= 0x7B6E4 || v2 - 4353 <= 0x421 || v2 - 5443 <= 0x7F )
    return 0i64;
  v3 = truncate_cast<unsigned int,unsigned __int64>(v2);
  EntParamIdx = (unsigned __int16)SND_GetEntParamIdx(v3);
  if ( EntParamIdx != 0xFFFF )
  {
    LODWORD(v14) = 0xFFFF;
    LODWORD(v12) = EntParamIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1924, ASSERT_TYPE_ASSERT, "( paramInfoIndex ) == ( 0xffff )", "%s == %s\n\t%i, %i", "paramInfoIndex", "SND_INVALID_PARAM_INDEX", v12, v14) )
      __debugbreak();
  }
  v5 = 0;
  v6 = g_sndEntityParamInfo;
  v7 = 0;
  while ( v6->entIndex != 0x7FFFFFFF )
  {
    ++v7;
    ++v6;
    if ( v7 >= 0x40 )
    {
      Com_PrintError(9, "Ran of sound entity params for ScaleVolume/Pitch.  Max %zu.\n", 0x40ui64);
      return 0i64;
    }
  }
  v9 = truncate_cast<unsigned short,unsigned int>(v7);
  while ( 1 )
  {
    v10 = &g_sndEntityParamIndex[(v5 + v3 % 64 % 64) % 64];
    entNum = v10->entNum;
    if ( entNum == 2047 || entNum == v3 )
      break;
    if ( ++v5 >= 64 )
    {
      Com_PrintError(9, "Too many simultaneous persistent sound params used!\n", 2047i64);
      return SND_InitEntityParamInfoEntry(v7, v3);
    }
  }
  v10->entNum = truncate_cast<unsigned short,int>(v3);
  v10->paramIndex = v9;
  return SND_InitEntityParamInfoEntry(v7, v3);
}

/*
==============
SND_GetPerkByIndex
==============
*/
snd_perk_info_t *SND_GetPerkByIndex(unsigned int perkIndex)
{
  const SndGlobals *globals; 
  __int64 v2; 

  globals = g_snd.globals;
  v2 = perkIndex;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2330, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  if ( (unsigned int)v2 >= globals->perkinfoCount )
    return 0i64;
  else
    return &globals->perkinfo[v2];
}

/*
==============
SND_GetPerkIndexFromName
==============
*/
__int64 SND_GetPerkIndexFromName(const char *name)
{
  const char *v1; 
  const SndGlobals *globals; 
  unsigned int v3; 
  char v4; 
  int v5; 
  char v6; 
  unsigned int perkinfoCount; 
  unsigned int *i; 

  v1 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2352, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2353, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  v3 = 0;
  if ( v1 && (v4 = *v1) != 0 )
  {
    v5 = 5381;
    do
    {
      ++v1;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *v1;
    }
    while ( *v1 );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  perkinfoCount = globals->perkinfoCount;
  if ( !perkinfoCount )
    return 0xFFFFFFFFi64;
  for ( i = &globals->perkinfo->id; v5 != *i; i += 18 )
  {
    if ( ++v3 >= perkinfoCount )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
SND_GetPerkName
==============
*/
snd_perk_info_t *SND_GetPerkName(unsigned int perkIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int perkinfoCount; 

  v1 = perkIndex;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2322, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->perkinfoCount )
  {
    perkinfoCount = g_snd.globals->perkinfoCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2323, ASSERT_TYPE_ASSERT, "(unsigned)( perkIndex ) < (unsigned)( g_snd.globals->perkinfoCount )", "perkIndex doesn't index g_snd.globals->perkinfoCount\n\t%i not in [0, %i)", v3, perkinfoCount) )
      __debugbreak();
  }
  return &g_snd.globals->perkinfo[v1];
}

/*
==============
SND_GetPerkVolume
==============
*/
float SND_GetPerkVolume(unsigned int perkIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int perkinfoCount; 

  v1 = perkIndex;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2342, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->perkinfoCount )
  {
    perkinfoCount = g_snd.globals->perkinfoCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2343, ASSERT_TYPE_ASSERT, "(unsigned)( perkIndex ) < (unsigned)( g_snd.globals->perkinfoCount )", "perkIndex doesn't index g_snd.globals->perkinfoCount\n\t%i not in [0, %i)", v3, perkinfoCount) )
      __debugbreak();
  }
  return g_snd.globals->perkinfo[v1].volume;
}

/*
==============
SND_GetPlaybackChannels
==============
*/
__int64 SND_GetPlaybackChannels()
{
  return (unsigned int)g_snd.playback_channels;
}

/*
==============
SND_GetPlaybackVoice
==============
*/
SndVoice *SND_GetPlaybackVoice(unsigned int id)
{
  bool *voiceAlloc; 
  int v3; 
  unsigned int *i; 
  __int64 v6; 

  voiceAlloc = sdGlob.voiceAlloc;
  v3 = 0;
  for ( i = &g_snd.voices[0].playbackId; ; i += 492 )
  {
    if ( (unsigned int)v3 > 0x62 )
    {
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v6) )
        __debugbreak();
    }
    if ( *voiceAlloc && *i == id )
      break;
    ++v3;
    ++voiceAlloc;
    if ( v3 >= 99 )
      return 0i64;
  }
  return &g_snd.voices[v3];
}

/*
==============
SND_GetPriority
==============
*/
__int64 SND_GetPriority(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2061, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2062, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return (unsigned int)g_snd.globals->entchannelInfo[v1].priority;
}

/*
==============
SND_GetRandomAliasPitch
==============
*/
double SND_GetRandomAliasPitch(const SndAlias *alias)
{
  float pitchMin; 
  double v3; 

  pitchMin = alias->pitchMin;
  v3 = I_random();
  return I_fclamp((float)(*(float *)&v3 * (float)(alias->pitchMax - pitchMin)) + pitchMin, 0.001, 2.0);
}

/*
==============
SND_GetRandomAliasVolume
==============
*/
double SND_GetRandomAliasVolume(const SndAlias *alias)
{
  float volMin; 
  double v3; 

  volMin = alias->volMin;
  v3 = I_random();
  return I_fclamp((float)(*(float *)&v3 * (float)(alias->volMax - volMin)) + volMin, 0.0, 4.0);
}

/*
==============
SND_GetSPDIFChannelCount
==============
*/
__int64 SND_GetSPDIFChannelCount()
{
  return (unsigned int)g_snd.playback_channels;
}

/*
==============
SND_GetSlavePercent
==============
*/
float SND_GetSlavePercent(const SndAlias *alias)
{
  return (float)(1.0 - g_snd.masterPercentage) * alias->masterSlavePercentage;
}

/*
==============
SND_GetSndCurveValue
==============
*/
float SND_GetSndCurveValue(const int knotCount, const vec2_t *knots, const float fraction)
{
  __int64 v4; 
  float v5; 
  int v6; 
  __int64 v7; 
  float v8; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 

  v4 = knotCount;
  if ( !knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15026, ASSERT_TYPE_ASSERT, "(knots)", (const char *)&queryFormat, "knots") )
    __debugbreak();
  if ( (int)v4 < 2 )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15027, ASSERT_TYPE_ASSERT, "( ( knotCount >= 2 ) )", "( knotCount ) = %i", v14) )
      __debugbreak();
  }
  if ( (fraction < 0.0 || fraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15028, ASSERT_TYPE_ASSERT, "( ( fraction >= 0.0f && fraction <= 1.0f ) )", "( fraction ) = %g", fraction) )
    __debugbreak();
  v5 = knots[v4 - 1].v[0];
  if ( v5 != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15029, ASSERT_TYPE_ASSERT, "( ( knots[knotCount - 1][0] == 1.0f ) )", "( knots[knotCount - 1][0] ) = %g", v5) )
    __debugbreak();
  v6 = 1;
  if ( v4 <= 1 )
    return FLOAT_N1_0;
  v7 = 1i64;
  while ( 1 )
  {
    v8 = knots[v7].v[0];
    if ( fraction <= v8 )
      break;
    ++v6;
    if ( ++v7 >= v4 )
      return FLOAT_N1_0;
  }
  v10 = v6;
  v11 = knots[v6 - 1].v[0];
  if ( (float)(v8 - v11) <= 0.0000152879 )
  {
    v12 = 0.0;
  }
  else
  {
    v13 = (float)(fraction - v11) / (float)(v8 - v11);
    v12 = v13;
    if ( (v13 < 0.0 || v13 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15038, ASSERT_TYPE_ASSERT, "( ( adjustedFrac >= 0.0f && adjustedFrac <= 1.0f ) )", "( adjustedFrac ) = %g", v13) )
      __debugbreak();
  }
  return (float)((float)(knots[v10].v[1] - knots[v10 - 1].v[1]) * v12) + knots[v10 - 1].v[1];
}

/*
==============
SND_GetSoundEqOverlay
==============
*/
const SndGlobals *SND_GetSoundEqOverlay(snd_eqoverlay_info_t *info, unsigned int maxcount)
{
  const SndGlobals *result; 
  __int64 entchannelCount; 
  SDLocal *v5; 
  __int64 v6; 
  snd_eqoverlay_info_t *v7; 
  SDLocal *v8; 
  __int64 v9; 
  SndEqParams *v10; 

  result = g_snd.globals;
  if ( g_snd.globals )
  {
    entchannelCount = g_snd.globals->entchannelCount;
    if ( (unsigned int)entchannelCount > maxcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1000, ASSERT_TYPE_ASSERT, "(entChannelCount <= maxcount)", (const char *)&queryFormat, "entChannelCount <= maxcount") )
      __debugbreak();
    if ( (_DWORD)entchannelCount )
    {
      v5 = &sdGlob;
      v6 = entchannelCount;
      do
      {
        info->lerp = sdGlob.eqLerp;
        v7 = info;
        v8 = v5;
        v9 = 2i64;
        do
        {
          v7->params[0][0] = (SndEqParams *)v8;
          v10 = v8->eqParams[0][1];
          v8 = (SDLocal *)((char *)v8 + 10240);
          v7->params[0][1] = v10;
          v7 = (snd_eqoverlay_info_t *)((char *)v7 + 16);
          --v9;
        }
        while ( v9 );
        v5 = (SDLocal *)((char *)v5 + 20);
        ++info;
        --v6;
      }
      while ( v6 );
    }
    return (const SndGlobals *)(unsigned int)entchannelCount;
  }
  return result;
}

/*
==============
SND_GetSoundFileLengthMS
==============
*/
int SND_GetSoundFileLengthMS(const SndAssetBankEntry *entry)
{
  __int64 v2; 

  if ( !entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1770, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  LODWORD(v2) = SND_AssetBankGetFrameRate(entry);
  if ( (_DWORD)v2 )
    return 1000 * (unsigned __int64)entry->frameCount / (unsigned int)v2;
  return v2;
}

/*
==============
SND_GetSoundOverlay
==============
*/
int SND_GetSoundOverlay(snd_overlay_info_t *info, int maxcount, int *cpu)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11497, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( maxcount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11498, ASSERT_TYPE_ASSERT, "(maxcount > 0)", (const char *)&queryFormat, "maxcount > 0") )
    __debugbreak();
  if ( !cpu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11499, ASSERT_TYPE_ASSERT, "(cpu)", (const char *)&queryFormat, "cpu") )
    __debugbreak();
  if ( !g_snd.driverInitialized )
    return 0;
  *cpu = g_snd.clientFrameUsec;
  return SND_GetSoundOverlay_Internal(info, 0, maxcount);
}

/*
==============
SND_GetSoundOverlay
==============
*/
int SND_GetSoundOverlay(snd_overlay_type_t type, snd_overlay_info_t *info, int maxcount, int *cpu)
{
  int v8; 
  int result; 
  int v10; 
  int v11; 
  snd_overlay_info_t *v12; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11463, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( maxcount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11464, ASSERT_TYPE_ASSERT, "(maxcount > 0)", (const char *)&queryFormat, "maxcount > 0") )
    __debugbreak();
  if ( !cpu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11465, ASSERT_TYPE_ASSERT, "(cpu)", (const char *)&queryFormat, "cpu") )
    __debugbreak();
  if ( !g_snd.driverInitialized )
    return 0;
  *cpu = g_snd.clientFrameUsec;
  switch ( type )
  {
    case SND_OVERLAY_3D:
    case SND_OVERLAY_3D_VOLS:
      v10 = 48;
      v11 = 32;
      v12 = info;
      if ( maxcount < 48 )
        v10 = maxcount;
      goto LABEL_23;
    case SND_OVERLAY_STREAM:
    case SND_OVERLAY_STREAM_VOLS:
      v10 = 14;
      v11 = 80;
      v12 = info;
      if ( maxcount < 14 )
        v10 = maxcount;
      goto LABEL_23;
    case SND_OVERLAY_2D:
    case SND_OVERLAY_2D_VOLS:
      v8 = 32;
      if ( maxcount < 32 )
        v8 = maxcount;
      return SND_GetSoundOverlay_Internal(info, 0, v8);
    case SND_OVERLAY_VEHICLE:
    case SND_OVERLAY_VEHICLE_VOLS:
      v10 = 5;
      v11 = 94;
      v12 = info;
      if ( maxcount < 5 )
        v10 = maxcount;
LABEL_23:
      result = SND_GetSoundOverlay_Internal(v12, v11, v10);
      break;
    default:
      return 0;
  }
  return result;
}

/*
==============
SND_GetSoundOverlay_Internal
==============
*/
__int64 SND_GetSoundOverlay_Internal(snd_overlay_info_t *info, int startIndex, int maxcount)
{
  __int64 v3; 
  snd_overlay_info_t *v4; 
  __int64 v5; 
  unsigned int *p_contextValue; 
  bool *v7; 
  unsigned int v8; 
  unsigned int *v9; 
  unsigned int *v10; 
  float *v11; 
  const char *v12; 
  char *pszSampleName; 
  const char *EntChannelName; 
  const SpeakerMap *SpeakerMapById; 
  const dvar_t *v16; 
  unsigned int v17; 
  __int128 v18; 
  __int128 v20; 
  int v21; 
  __int64 v22; 
  unsigned int *v23; 
  __int64 v24; 
  unsigned int *v25; 
  const SndAlias *v27; 
  int v28; 
  unsigned int AliasEntChannelId; 
  MapEnts *mapEnts; 
  unsigned int v32; 
  __int64 v33; 
  int audioPASpeakerCount; 
  __int128 v35; 
  volatile int v36; 
  unsigned int v37; 
  unsigned int entChannelHash; 
  AudioPASpeaker *audioPASpeakers; 
  float v40; 
  __int128 v42; 
  double SndCurveValue; 
  const char *VolModName; 
  float v48; 
  float v50; 
  __int64 v52; 
  __int64 v53; 
  unsigned int *v55; 
  __int64 v56; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int *v60; 
  unsigned __int8 v61; 
  bool *v62; 
  unsigned int *v63; 
  vec3_t origin; 
  vec3_t to; 

  v3 = startIndex;
  v4 = info;
  v59 = maxcount;
  if ( startIndex + maxcount > 99 )
  {
    maxcount = 99 - startIndex;
    v59 = 99 - startIndex;
  }
  v5 = maxcount;
  v56 = maxcount;
  if ( maxcount <= 0 )
    return (unsigned int)maxcount;
  p_contextValue = &v4->contextValue;
  v7 = &sdGlob.voiceAlloc[startIndex];
  v8 = startIndex;
  v9 = &sdGlob.currentReverbId[65 * startIndex - 6433];
  v58 = v3;
  v10 = &g_snd.chaninfoEntchannel[v3];
  v62 = &sdGlob.voiceAlloc[v3];
  v11 = &g_snd.chaninfoUnweightedPriority[492 * v3 - 48560];
  v63 = &v4->contextValue;
  v60 = &sdGlob.currentReverbId[65 * v3 - 6433];
  v55 = v10;
  do
  {
    if ( v8 > 0x62 )
    {
      LODWORD(v52) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v52) )
        __debugbreak();
      v10 = v55;
      v5 = v56;
      v9 = v60;
    }
    if ( *v7 && *((_DWORD *)v11 - 148) == 2 || *((_DWORD *)v11 - 148) == 1 )
    {
      if ( *((int *)v11 - 146) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11262, ASSERT_TYPE_ASSERT, "((voice->soundFileInfo.baserate > 0))", (const char *)&queryFormat, "(voice->soundFileInfo.baserate > 0)") )
        __debugbreak();
      if ( !*((_QWORD *)v11 - 60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11264, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
        __debugbreak();
      v12 = "null";
      if ( *(_QWORD *)(*((_QWORD *)v11 - 60) + 24i64) )
        v12 = *(const char **)(*((_QWORD *)v11 - 60) + 24i64);
      v61 = v8 - v3;
      pszSampleName = v4[(int)(v8 - v3)].pszSampleName;
      Core_strcpy(pszSampleName, 0x80ui64, v12);
      Com_sprintf(pszSampleName + 128, 0x80ui64, (const char *)&queryFormat, **((_QWORD **)v11 - 60));
      EntChannelName = SND_GetEntChannelName(*v55);
      Com_sprintf(pszSampleName + 256, 0x40ui64, (const char *)&queryFormat, EntChannelName);
      SpeakerMapById = (const SpeakerMap *)(v11 + 183);
      *(p_contextValue - 7) = *v60;
      *(p_contextValue - 1) = *(_DWORD *)(*((_QWORD *)v11 - 60) + 44i64);
      *p_contextValue = *(_DWORD *)(*((_QWORD *)v11 - 60) + 48i64);
      p_contextValue[1] = *(_DWORD *)(*((_QWORD *)v11 - 60) + 52i64);
      p_contextValue[2] = *(_DWORD *)(*((_QWORD *)v11 - 60) + 56i64);
      *((_QWORD *)p_contextValue + 2) = *(_QWORD *)(*((_QWORD *)v11 - 60) + 64i64);
      v16 = DCONST_DVARBOOL_snd_enable_capture_mode;
      if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled && SND_IsChannelMissionVOChannel((unsigned __int8)(*(int *)(*((_QWORD *)v11 - 60) + 112i64) >> 10)) )
      {
        v17 = SND_HashName(S_VO_CENTER_ONLY_MAP);
        SpeakerMapById = SND_GetSpeakerMapById(v17);
      }
      *((float *)p_contextValue - 10) = *(v11 - 138) * *(v11 - 116);
      v18 = *((unsigned int *)v11 - 137);
      *(p_contextValue - 9) = v18;
      _XMM0 = LODWORD(g_snd.volume);
      if ( g_snd.volume > 0.0 )
      {
        *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v18 + 1);
        *((float *)p_contextValue - 9) = *(float *)&v18 / g_snd.volume;
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
      {
        _XMM0 = LODWORD(g_snd.scriptSoundFade.value);
        *((float *)p_contextValue - 9) = g_snd.scriptSoundFade.value * *((float *)p_contextValue - 9);
      }
      v20 = 0i64;
      if ( v8 > 0x62 )
      {
        LODWORD(v52) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v52) )
          __debugbreak();
      }
      if ( *v7 )
      {
        v22 = 0i64;
        v23 = v60 + 45;
        while ( 2 )
        {
          v24 = 0i64;
          v25 = v23;
          do
          {
            if ( *(_BYTE *)v25 )
            {
              v21 = 1;
              goto LABEL_43;
            }
            ++v24;
            v25 += 5;
          }
          while ( v24 < 2 );
          ++v22;
          v23 += 10;
          if ( v22 < 2 )
            continue;
          break;
        }
        v21 = 0;
      }
      else
      {
        v21 = 0;
      }
LABEL_43:
      *(p_contextValue - 6) = v21;
      if ( SND_IsEntChannel3D((unsigned __int8)(*(int *)(*((_QWORD *)v11 - 60) + 112i64) >> 10)) )
      {
        GetSecureSndVec3((const vec3_t *)(v11 - 113), &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
        *(double *)&_XMM0 = SND_DistSqToNearestListener(&to);
        v35 = _XMM0;
        *(float *)&v35 = fsqrt(*(float *)&_XMM0);
        v20 = v35;
        *(p_contextValue - 8) = (int)*(float *)&v35;
        *(p_contextValue - 5) = *((_DWORD *)v11 - 103);
        *(p_contextValue - 4) = *((_DWORD *)v11 - 83);
        if ( v11 != (float *)-1184i64 )
          Com_sprintf(pszSampleName + 704, 0x40ui64, (const char *)&queryFormat);
      }
      else
      {
        *(p_contextValue - 8) = -1;
        *(_QWORD *)(p_contextValue - 5) = 0i64;
      }
      if ( SND_IsEntChannelPASpeaker((unsigned __int8)(*(int *)(*((_QWORD *)v11 - 60) + 112i64) >> 10)) )
      {
        LODWORD(_XMM8) = 0;
        Com_sprintf(pszSampleName + 320, 0x40ui64, (const char *)&queryFormat, v11 - 17);
        Com_sprintf(pszSampleName + 384, 0x40ui64, (const char *)&queryFormat, v11 + 33);
        Com_sprintf(pszSampleName + 448, 0x40ui64, (const char *)&queryFormat, v11 + 83);
        Com_sprintf(pszSampleName + 512, 0x40ui64, (const char *)&queryFormat, v11 + 133);
        Com_sprintf(pszSampleName + 576, 0x40ui64, (const char *)&queryFormat, SpeakerMapById);
        *(_QWORD *)(p_contextValue - 5) = 0i64;
        v27 = (const SndAlias *)*((_QWORD *)v11 - 60);
        if ( SpeakerMapById->id == g_snd.defaultHash || (v28 = 2, v27->smartPanDistance2d <= 0.0) )
          v28 = 1;
        *(float *)&_XMM7 = FLOAT_3_4028235e38;
        AliasEntChannelId = SND_GetAliasEntChannelId(v27);
        mapEnts = cm.mapEnts;
        v32 = AliasEntChannelId;
        v33 = 0i64;
        while ( 2 )
        {
          if ( mapEnts )
          {
            if ( mapEnts->audioPASpeakerCount >= 0x40 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 532, ASSERT_TYPE_ASSERT, "(cm.mapEnts->audioPASpeakerCount < 64)", (const char *)&queryFormat, "cm.mapEnts->audioPASpeakerCount < AUDIO_PA_SPEAKERS_MAXSIZE") )
                __debugbreak();
              mapEnts = cm.mapEnts;
            }
            audioPASpeakerCount = mapEnts->audioPASpeakerCount;
          }
          else
          {
            audioPASpeakerCount = 0;
          }
          if ( (int)v33 >= audioPASpeakerCount )
          {
            p_contextValue = v63;
            v8 = v58;
            v7 = v62;
            *((float *)v63 - 9) = *(float *)&_XMM8 * *((float *)v63 - 9);
            *(v63 - 8) = (int)*(float *)&_XMM7;
            goto LABEL_80;
          }
          if ( (unsigned int)v33 >= 0x40 )
          {
            LODWORD(v53) = 64;
            LODWORD(v52) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v52, v53) )
              __debugbreak();
            mapEnts = cm.mapEnts;
          }
          v36 = g_snd.voiceBusyUpdating[((__int64)(int)v33 >> 5) - 2];
          if ( !_bittest((const int *)&v36, v33 & 0x1F) )
          {
            if ( mapEnts && (v37 = mapEnts->audioPASpeakerCount, v37 > (unsigned int)v33) )
            {
              entChannelHash = mapEnts->audioPASpeakers[v33].entChannelHash;
              if ( !entChannelHash || entChannelHash == v32 )
              {
                if ( v37 > (unsigned int)v33 )
                {
                  audioPASpeakers = mapEnts->audioPASpeakers;
                  v40 = audioPASpeakers[v33].origin.v[1];
                  origin.v[0] = audioPASpeakers[v33].origin.v[0];
                  _XMM0 = LODWORD(audioPASpeakers[v33].origin.v[2]);
                  origin.v[2] = audioPASpeakers[v33].origin.v[2];
                  origin.v[1] = v40;
                }
                goto LABEL_71;
              }
            }
            else
            {
LABEL_71:
              *(double *)&_XMM0 = SND_DistSqToNearestListener(&origin);
              v42 = _XMM0;
              *(float *)&v42 = fsqrt(*(float *)&_XMM0);
              _XMM6 = v42;
              *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v20 + 1);
              SND_GetDistanceCurveFraction(*(float *)&v20, *(float *)(*((_QWORD *)v11 - 60) + 100i64), *(float *)(*((_QWORD *)v11 - 60) + 104i64));
              *(double *)&_XMM0 = SND_GetSndCurveValue(*(_DWORD *)v11, (const vec2_t *)(v11 + 1), *(const float *)&v20);
              mapEnts = cm.mapEnts;
              __asm
              {
                vmaxss  xmm8, xmm0, xmm8
                vminss  xmm7, xmm6, xmm7
              }
            }
          }
          v33 = (unsigned int)(v33 + 1);
          continue;
        }
      }
      if ( SND_IsEntChannel3D((unsigned __int8)(*(int *)(*((_QWORD *)v11 - 60) + 112i64) >> 10)) )
      {
        SND_GetDistanceCurveFraction(*(float *)&v20, *(float *)(*((_QWORD *)v11 - 60) + 100i64), *(float *)(*((_QWORD *)v11 - 60) + 104i64));
        SndCurveValue = SND_GetSndCurveValue(*(_DWORD *)v11, (const vec2_t *)(v11 + 1), *(const float *)&v20);
        *((float *)p_contextValue - 9) = *(float *)&SndCurveValue * *((float *)p_contextValue - 9);
        Com_sprintf(pszSampleName + 320, 0x40ui64, (const char *)&queryFormat, v11 - 17);
        Com_sprintf(pszSampleName + 384, 0x40ui64, (const char *)&queryFormat, v11 + 33);
        Com_sprintf(pszSampleName + 448, 0x40ui64, (const char *)&queryFormat, v11 + 83);
        Com_sprintf(pszSampleName + 512, 0x40ui64, (const char *)&queryFormat, v11 + 133);
        Com_sprintf(pszSampleName + 576, 0x40ui64, (const char *)&queryFormat, SpeakerMapById);
        if ( SpeakerMapById->id == g_snd.defaultHash || *(float *)(*((_QWORD *)v11 - 60) + 184i64) <= 0.0 )
          v28 = 1;
        else
          v28 = 2;
      }
      else
      {
        *(p_contextValue - 8) = -1;
        *((_BYTE *)p_contextValue - 488) = 0;
        *((_BYTE *)p_contextValue - 424) = 0;
        *((_BYTE *)p_contextValue - 360) = 0;
        *((_BYTE *)p_contextValue - 296) = 0;
        *((_BYTE *)p_contextValue - 104) = 0;
        Com_sprintf(pszSampleName + 576, 0x40ui64, (const char *)&queryFormat, SpeakerMapById);
        v28 = 0;
      }
LABEL_80:
      VolModName = SND_GetVolModName(*(_DWORD *)(*((_QWORD *)v11 - 60) + 84i64));
      Com_sprintf(pszSampleName + 640, 0x40ui64, (const char *)&queryFormat, VolModName);
      _XMM0 = *(p_contextValue - 10);
      __asm { vmaxss  xmm0, xmm0, xmm12; X }
      *(p_contextValue - 2) = LODWORD(g_snd.volmods[*(int *)(*((_QWORD *)v11 - 60) + 84i64)].value);
      *(p_contextValue - 3) = v28 | (16 * v61) | (*(int *)(*((_QWORD *)v11 - 60) + 112i64) >> 5) & 0x1C;
      *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
      _XMM2 = *(p_contextValue - 9);
      v48 = *(float *)&_XMM0 * 20.0;
      __asm { vmaxss  xmm0, xmm2, xmm12; X }
      *((float *)p_contextValue - 10) = v48;
      v50 = log10f_0(*(float *)&_XMM0) * 20.0;
      LODWORD(_XMM0) = *(p_contextValue - 7);
      *((float *)p_contextValue - 9) = v50;
      *(float *)&_XMM0 = log2f(*(float *)&_XMM0);
      v9 = v60;
      *((float *)p_contextValue - 7) = *(float *)&_XMM0 * 12.0;
      switch ( *(v60 - 2) )
      {
        case 9u:
          p_contextValue[3] = 1;
          break;
        case 0xAu:
          p_contextValue[3] = 2;
          break;
        case 0xBu:
          p_contextValue[3] = 3;
          break;
        case 0xCu:
          p_contextValue[3] = 4;
          break;
        case 0xDu:
          p_contextValue[3] = 5;
          break;
        default:
          p_contextValue[3] = 0;
          break;
      }
      v4 = info;
      LODWORD(v3) = startIndex;
      v10 = v55;
      v5 = v56;
    }
    else
    {
      *((_BYTE *)p_contextValue - 808) = 0;
    }
    ++v8;
    ++v10;
    v58 = v8;
    v9 += 65;
    v55 = v10;
    ++v7;
    v60 = v9;
    p_contextValue += 208;
    v62 = v7;
    v11 += 492;
    v63 = p_contextValue;
    v56 = --v5;
  }
  while ( v5 );
  return v59;
}

/*
==============
SND_GetStreamIoActive
==============
*/
__int64 SND_GetStreamIoActive()
{
  return (unsigned int)g_sd_stream_globals.streamIoActive;
}

/*
==============
SND_GetSubtitleForPlaybackId
==============
*/
const char *SND_GetSubtitleForPlaybackId(unsigned int id)
{
  int v1; 
  unsigned int *p_playbackId; 

  if ( !id )
    return 0i64;
  v1 = 0;
  p_playbackId = &g_snd.voices[0].playbackId;
  while ( *p_playbackId != id )
  {
    ++v1;
    p_playbackId += 492;
    if ( (__int64)p_playbackId >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
      return 0i64;
  }
  return *(const char **)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v1 - 48680] + 8i64);
}

/*
==============
SND_GetTimescaleLerp
==============
*/
float SND_GetTimescaleLerp(const unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2266, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2267, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.entchanOverrides.timescaleLerp[v1];
}

/*
==============
SND_GetVoiceFractionPlayed
==============
*/
double SND_GetVoiceFractionPlayed(int index, bool wrap)
{
  __int64 v2; 
  int v4; 
  __int64 v5; 
  double result; 

  v2 = index;
  if ( index < 80 )
  {
    if ( index <= -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1314, ASSERT_TYPE_ASSERT, "( ( (index >= 0 && index < 0 + 32) || (index >= (0 + 32) && index < (0 + 32) + 48) ) )", "( index ) = %i", index) )
      __debugbreak();
    v5 = v2;
  }
  else
  {
    if ( index >= 94 )
      return 0.0;
    v4 = SND_SyncAmbientTracks_Internal(index, 0, 1);
    if ( v4 == (_DWORD)v2 )
      v4 = SND_SyncAmbientTracks_Internal(v2, 2, 3);
    v5 = v4;
    if ( g_snd.voices[v5].soundFileInfo.loadingState == SFLS_LOADING )
    {
      *(_QWORD *)&result = LODWORD(g_snd.voices[v5].startFraction);
      return result;
    }
  }
  *(float *)&result = SND_AbsoluteToFractionalPosition(g_snd.voices[v5].framesPlayed, wrap, g_snd.voices[v5].assetEntry->frameCount);
  return result;
}

/*
==============
SND_GetVoiceIndexForId
==============
*/
__int64 SND_GetVoiceIndexForId(unsigned int id)
{
  unsigned int v1; 
  bool *voiceAlloc; 
  unsigned int *i; 

  if ( !id )
    return 0xFFFFFFFFi64;
  v1 = 0;
  voiceAlloc = sdGlob.voiceAlloc;
  for ( i = &g_snd.voices[0].playbackId; !*voiceAlloc || *i != id; i += 492 )
  {
    ++v1;
    ++voiceAlloc;
    if ( v1 >= 0x63 )
      return 0xFFFFFFFFi64;
  }
  return v1;
}

/*
==============
SND_GetVolModByIndex
==============
*/
snd_volmod_info_t *SND_GetVolModByIndex(unsigned int volmodIndex)
{
  const SndGlobals *globals; 
  __int64 v2; 

  globals = g_snd.globals;
  v2 = volmodIndex;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2282, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  if ( (unsigned int)v2 >= globals->volmodinfoCount )
    return 0i64;
  else
    return &globals->volmodinfo[v2];
}

/*
==============
SND_GetVolModCount
==============
*/
__int64 SND_GetVolModCount()
{
  const SndGlobals *globals; 

  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4831, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  return globals->volmodinfoCount;
}

/*
==============
SND_GetVolModDefaultValue
==============
*/
float SND_GetVolModDefaultValue(unsigned int volmodIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int volmodinfoCount; 

  v1 = volmodIndex;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2295, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->volmodinfoCount )
  {
    volmodinfoCount = g_snd.globals->volmodinfoCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2296, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( g_snd.globals->volmodinfoCount )", "volmodIndex doesn't index g_snd.globals->volmodinfoCount\n\t%i not in [0, %i)", v3, volmodinfoCount) )
      __debugbreak();
  }
  return g_snd.globals->volmodinfo[v1].value;
}

/*
==============
SND_GetVolModIndexFromName
==============
*/
__int64 SND_GetVolModIndexFromName(const char *name)
{
  const char *v1; 
  const SndGlobals *globals; 
  unsigned int v3; 
  char v4; 
  int v5; 
  char v6; 
  unsigned int volmodinfoCount; 
  unsigned int *i; 

  v1 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2305, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2306, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  v3 = 0;
  if ( v1 && (v4 = *v1) != 0 )
  {
    v5 = 5381;
    do
    {
      ++v1;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *v1;
    }
    while ( *v1 );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  volmodinfoCount = globals->volmodinfoCount;
  if ( !volmodinfoCount )
    return 0xFFFFFFFFi64;
  for ( i = &globals->volmodinfo->id; v5 != *i; i += 18 )
  {
    if ( ++v3 >= volmodinfoCount )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
SND_GetVolModName
==============
*/
snd_volmod_info_t *SND_GetVolModName(unsigned int volmodIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int volmodinfoCount; 

  v1 = volmodIndex;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2274, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->volmodinfoCount )
  {
    volmodinfoCount = g_snd.globals->volmodinfoCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2275, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( g_snd.globals->volmodinfoCount )", "volmodIndex doesn't index g_snd.globals->volmodinfoCount\n\t%i not in [0, %i)", v3, volmodinfoCount) )
      __debugbreak();
  }
  return &g_snd.globals->volmodinfo[v1];
}

/*
==============
SND_GetVolume
==============
*/
float SND_GetVolume()
{
  return g_snd.volume;
}

/*
==============
SND_GetVolumeFalloffGain
==============
*/
float SND_GetVolumeFalloffGain(const SndVoice *voice, const float dist, const float distFrac, const SndCurve *vfCurve)
{
  double SndCurveValue; 
  const SndAlias *alias; 
  float v7; 
  int v8; 
  float donutFadeEnd; 
  float distMin; 
  float v11; 

  SndCurveValue = SND_GetSndCurveValue(vfCurve->numPoints, vfCurve->points, distFrac);
  alias = voice->alias;
  v7 = *(float *)&SndCurveValue;
  v8 = (alias->flags >> 4) & 7;
  if ( v8 )
  {
    donutFadeEnd = alias->donutFadeEnd;
    if ( dist < donutFadeEnd )
    {
      distMin = alias->distMin;
      if ( dist > distMin )
      {
        v11 = (float)(dist - distMin) / (float)(donutFadeEnd - distMin);
        switch ( v8 )
        {
          case 1:
            return v7 * v11;
          case 2:
            return v7 * (float)(1.0 - (float)((float)((float)(1.0 - v11) * (float)(1.0 - v11)) * (float)(1.0 - v11)));
          case 3:
            return v7 * (float)((float)(v11 * v11) * v11);
          case 4:
            return v7 * (float)((float)((float)((float)(1.0 - v11) * (float)(v11 * v11)) * 3.0) + (float)((float)(v11 * v11) * v11));
          case 5:
            return v7 * (float)((float)((float)((float)((float)(1.0 - v11) * (float)(1.0 - v11)) * v11) * 3.0) + (float)((float)(v11 * v11) * v11));
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12725, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown donut type %d", (alias->flags >> 4) & 7) )
              __debugbreak();
            break;
        }
      }
      else
      {
        return 0.0;
      }
    }
  }
  return v7;
}

/*
==============
SND_GetWeapFireAtmoSound
==============
*/
SndAliasList *SND_GetWeapFireAtmoSound(const WeaponSFXPackage *sfxPackage, bool isPlayerView, bool isDualWield, PlayerHandIndex hand)
{
  WeaponSFXPackageSounds *sounds; 
  const char *v9; 
  __int64 v10; 
  const char *v11; 
  SndAliasList *result; 
  const dvar_t *v13; 

  if ( !sfxPackage )
    return 0i64;
  sounds = sfxPackage->sounds;
  v9 = (const char *)*((_QWORD *)&sounds->fireSoundAtmosphere.name + isPlayerView);
  if ( isPlayerView && isDualWield )
  {
    v10 = 144i64;
    if ( hand != WEAPON_HAND_LEFT )
      v10 = 152i64;
    v11 = *(const char **)((char *)&sounds->name + v10);
    if ( v11 )
      v9 = v11;
  }
  if ( !v9 )
    return 0i64;
  result = SND_TryFindAlias(v9);
  if ( !result )
  {
    v13 = DCONST_DVARBOOL_snd_bankDetailStreamingFallback;
    if ( !DCONST_DVARBOOL_snd_bankDetailStreamingFallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_bankDetailStreamingFallback") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      if ( sfxPackage->transientFallbackPackage == sfxPackage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5232, ASSERT_TYPE_ASSERT, "(sfxPackage->transientFallbackPackage != sfxPackage)", (const char *)&queryFormat, "sfxPackage->transientFallbackPackage != sfxPackage") )
        __debugbreak();
      return (SndAliasList *)SND_GetWeapFireAtmoSound(sfxPackage->transientFallbackPackage, isPlayerView, isDualWield, hand);
    }
    else
    {
      SND_Missing(v9);
      return 0i64;
    }
  }
  return result;
}

/*
==============
SND_GetWetLevel
==============
*/
float SND_GetWetLevel(const SndAlias *pAlias, ReverbDescriptor index)
{
  __int64 v2; 
  float v4; 
  float v5; 

  v2 = index;
  if ( !pAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12081, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  if ( (unsigned int)v2 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12082, ASSERT_TYPE_ASSERT, "(index == RVB_MAIN_A || index == RVB_MAIN_B)", (const char *)&queryFormat, "index == RVB_MAIN_A || index == RVB_MAIN_B") )
    __debugbreak();
  if ( SND_GetEntChannelSendFlag((unsigned __int8)(pAlias->flags >> 10)) == SENDTYPE_NONE || !g_snd.reverbSetting[0].presetId && !g_snd.reverbSetting[1].presetId )
    return 0.0;
  if ( g_snd.reverbSetting[v2].presetId )
    v4 = g_snd.reverbSetting[v2].wetlevel * pAlias->reverbMultiplier;
  else
    v4 = 0.0;
  if ( (_DWORD)v2 == 1 )
    v5 = v4 * g_snd.mainReverbLerp.current;
  else
    v5 = v4 * (float)(1.0 - g_snd.mainReverbLerp.current);
  if ( (v5 < 0.0 || v5 > 256.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12106, ASSERT_TYPE_ASSERT, "( ( wetLevel >= 0 && wetLevel <= 256 ) )", "( wetLevel ) = %g", v5) )
    __debugbreak();
  return v5;
}

/*
==============
SND_GetWhizbyData
==============
*/
char SND_GetWhizbyData(const LocalClientNum_t localClientNum, const WeaponSFXPackage *sfxPackage, const vec3_t *inSndCenterPt, const vec3_t *inBulletDir, const float shooterDist, const bool isBallistic, const float ballisticTimeSecToTarget, float radius, SndWhizbyData *outWhizbyData)
{
  __int128 v9; 
  const SndWhizby *Whizby; 
  const SndWhizby *v14; 
  float radiusNear; 
  const char *v19; 
  float v20; 
  float spreadNear; 
  __int128 spreadMedium_low; 
  const char *v23; 
  bool v24; 
  float whizbyInTimeFar; 
  float v26; 
  __int128 v27; 
  const SndAliasList *Alias; 
  const SndAliasList *v31; 
  __int128 v33; 
  __int128 v35; 
  const SndAliasList *v37; 
  char dest[128]; 
  __int128 v39; 

  *(_OWORD *)outWhizbyData->whizbySndInPos.v = 0ui64;
  *(_QWORD *)&outWhizbyData->whizbySndOutPos.y = 0i64;
  outWhizbyData->whizbyInAlias = NULL;
  outWhizbyData->whizbyOutAlias = NULL;
  outWhizbyData->whizbyCrackAlias = NULL;
  *(_QWORD *)&outWhizbyData->whizbyDelayMs = 0i64;
  Whizby = SND_GetWhizby(sfxPackage);
  v14 = Whizby;
  if ( !Whizby )
  {
    if ( sfxPackage )
      Com_Printf(9, "Couldn't find sound whizby type for WeaponSFXPackage: %s\n", sfxPackage->name);
    return 0;
  }
  if ( shooterDist < Whizby->shooterDistNear )
    return 0;
  _XMM0 = LODWORD(radius);
  __asm { vmaxss  xmm7, xmm0, cs:__real@3f800000 }
  radiusNear = Whizby->radiusNear;
  v19 = "near";
  if ( *(float *)&_XMM7 < radiusNear )
  {
    if ( radiusNear == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7689, ASSERT_TYPE_ASSERT, "(whizBy->radiusNear != 0.0f)", (const char *)&queryFormat, "whizBy->radiusNear != 0.0f") )
      __debugbreak();
    v20 = *(float *)&_XMM7 / v14->radiusNear;
    spreadNear = v14->spreadNear;
    spreadMedium_low = LODWORD(v14->spreadMedium);
    v23 = "near";
    goto LABEL_19;
  }
  if ( *(float *)&_XMM7 >= Whizby->radiusMedium )
  {
    if ( *(float *)&_XMM7 < Whizby->radiusFar )
    {
      spreadNear = Whizby->spreadFar;
      spreadMedium_low = LODWORD(spreadNear);
      v20 = 0.0;
      v23 = "far";
      goto LABEL_19;
    }
    return 0;
  }
  if ( radiusNear == Whizby->spreadMedium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7697, ASSERT_TYPE_ASSERT, "(whizBy->spreadMedium != whizBy->radiusNear)", (const char *)&queryFormat, "whizBy->spreadMedium != whizBy->radiusNear") )
    __debugbreak();
  spreadNear = v14->spreadMedium;
  spreadMedium_low = LODWORD(v14->spreadFar);
  v20 = (float)(*(float *)&_XMM7 - v14->radiusNear) / (float)(v14->radiusMedium - v14->radiusNear);
  v23 = "med";
LABEL_19:
  v24 = shooterDist < v14->shooterDistMedium;
  v39 = v9;
  if ( v24 )
  {
LABEL_23:
    whizbyInTimeFar = v14->whizbyInTimeFar;
    goto LABEL_24;
  }
  if ( shooterDist >= v14->shooterDistFar )
  {
    v19 = "far";
    goto LABEL_23;
  }
  whizbyInTimeFar = v14->whizbyInTimeMedium;
  v19 = "med";
LABEL_24:
  v26 = whizbyInTimeFar * 0.001;
  if ( (v20 < 0.0 || v20 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7733, ASSERT_TYPE_ASSERT, "(fraction >= 0.0f && fraction <= 1.0f)", (const char *)&queryFormat, "fraction >= 0.0f && fraction <= 1.0f") )
    __debugbreak();
  v27 = spreadMedium_low;
  *(float *)&v27 = (float)((float)(*(float *)&spreadMedium_low - spreadNear) * v20) + spreadNear;
  _XMM2 = v27;
  __asm { vmaxss  xmm4, xmm2, xmm6 }
  outWhizbyData->whizbySndInPos.v[0] = (float)((float)(*(float *)&_XMM4 * -0.5) * inBulletDir->v[0]) + inSndCenterPt->v[0];
  outWhizbyData->whizbySndInPos.v[1] = (float)((float)(*(float *)&_XMM4 * -0.5) * inBulletDir->v[1]) + inSndCenterPt->v[1];
  outWhizbyData->whizbySndInPos.v[2] = (float)((float)(*(float *)&_XMM4 * -0.5) * inBulletDir->v[2]) + inSndCenterPt->v[2];
  outWhizbyData->whizbySndOutPos.v[0] = (float)((float)(*(float *)&_XMM4 * 0.5) * inBulletDir->v[0]) + inSndCenterPt->v[0];
  outWhizbyData->whizbySndOutPos.v[1] = (float)((float)(*(float *)&_XMM4 * 0.5) * inBulletDir->v[1]) + inSndCenterPt->v[1];
  outWhizbyData->whizbySndOutPos.v[2] = (float)((float)(*(float *)&_XMM4 * 0.5) * inBulletDir->v[2]) + inSndCenterPt->v[2];
  Com_sprintf(dest, 0x80ui64, "%s_whiz_%s_%s_%s", v14->name, v19, v23, "in");
  Alias = SND_FindAlias(dest);
  Com_sprintf(dest, 0x80ui64, "%s_whiz_%s_%s_%s", v14->name, v19, v23, "out");
  v31 = SND_FindAlias(dest);
  if ( Alias )
    outWhizbyData->whizbyInAlias = Alias;
  if ( v31 )
    outWhizbyData->whizbyOutAlias = v31;
  if ( isBallistic )
  {
    if ( ballisticTimeSecToTarget < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7762, ASSERT_TYPE_ASSERT, "(ballisticTimeSecToTarget >= 0.0f)", (const char *)&queryFormat, "ballisticTimeSecToTarget >= 0.0f") )
      __debugbreak();
    v33 = LODWORD(ballisticTimeSecToTarget);
    *(float *)&v33 = ballisticTimeSecToTarget - v26;
    _XMM0 = v33;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    v35 = LODWORD(shooterDist);
    *(float *)&v35 = (float)(shooterDist / v14->bulletSpeed) - v26;
    _XMM3 = v35;
    __asm { vmaxss  xmm1, xmm3, xmm6 }
  }
  outWhizbyData->whizbyDelayMs = (int)(float)(*(float *)&_XMM1 * 1000.0);
  if ( v14->isSuperSonic && (float)(atan2f_0(*(float *)&_XMM7, shooterDist) * 57.295776) <= v14->crackMaxAngle )
  {
    Com_sprintf(dest, 0x80ui64, "%s_crack_%s_%s", v14->name, v19, v23);
    v37 = SND_FindAlias(dest);
    if ( v37 )
      outWhizbyData->whizbyCrackAlias = v37;
  }
  return 1;
}

/*
==============
SND_HasFreeVoice
==============
*/
bool SND_HasFreeVoice(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2031, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2032, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  if ( g_snd.globals->entchannelInfo[v1].maxVoices <= 0 )
  {
    LODWORD(v3) = g_snd.globals->entchannelInfo[v1].maxVoices;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2033, ASSERT_TYPE_ASSERT, "( ( g_snd.globals->entchannelInfo[entchannel].maxVoices > 0 ) )", "( g_snd.globals->entchannelInfo[entchannel].maxVoices ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.entchanvoicecount[v1] < g_snd.globals->entchannelInfo[v1].maxVoices;
}

/*
==============
SND_Init
==============
*/
void SND_Init(void)
{
  int v0; 
  unsigned int v1; 
  const char *v2; 
  char v3; 
  char v4; 
  const char *v5; 
  char v6; 
  unsigned int v7; 
  char v8; 
  const char *v9; 
  char v10; 
  unsigned int v11; 
  char v12; 
  const char *v13; 
  char v14; 
  unsigned int v15; 
  char v16; 
  const char *v17; 
  char v18; 
  unsigned int v19; 
  char v20; 
  const char *v21; 
  char v22; 
  unsigned int v23; 
  char v24; 
  unsigned int v25; 
  char v26; 
  const char *v27; 
  char v28; 
  snd_listener *listeners; 
  __int64 v30; 
  unsigned int v31; 
  float *p_wetlevel; 
  unsigned int v33; 
  const SndGlobals *globals; 
  snd_volmod_info_t *volmodinfo; 
  unsigned int v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  __int64 v40; 
  char *v41; 
  int v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  unsigned int v45; 
  __int64 v46; 
  float *timescaleLerp; 
  __int64 v48; 
  const SndGlobals *v49; 
  unsigned int v50; 
  unsigned int v51; 
  int *p_playTime; 
  SndVirtualLoop *virtualLoops; 
  float *p_freq; 
  __int64 v55; 
  __int64 v56; 
  float *p_hpfCutoff; 
  SndDspSourceParams *p_dspParams; 
  __int64 v59; 
  const char *v60; 
  char v61; 
  char v62; 
  unsigned int volmodinfoCount; 
  unsigned int *p_id; 
  __int64 v65; 
  __int64 v66; 

  v0 = 5381;
  v1 = 5381;
  g_snd.magic = 591763574;
  v2 = "default";
  v3 = 100;
  do
  {
    ++v2;
    v4 = v3 | 0x20;
    if ( (unsigned int)(v3 - 65) >= 0x1A )
      v4 = v3;
    v1 = 65599 * v1 + v4;
    v3 = *v2;
  }
  while ( *v2 );
  v5 = "log_slow";
  v6 = 108;
  if ( !v1 )
    v1 = 1;
  g_snd.defaultHash = v1;
  v7 = 5381;
  do
  {
    ++v5;
    v8 = v6 | 0x20;
    if ( (unsigned int)(v6 - 65) >= 0x1A )
      v8 = v6;
    v7 = 65599 * v7 + v8;
    v6 = *v5;
  }
  while ( *v5 );
  v9 = "log_fast";
  v10 = 108;
  if ( !v7 )
    v7 = 1;
  g_snd.logSlowHash = v7;
  v11 = 5381;
  do
  {
    ++v9;
    v12 = v10 | 0x20;
    if ( (unsigned int)(v10 - 65) >= 0x1A )
      v12 = v10;
    v11 = 65599 * v11 + v12;
    v10 = *v9;
  }
  while ( *v9 );
  v13 = "flat_ended";
  v14 = 102;
  if ( !v11 )
    v11 = 1;
  g_snd.logFastHash = v11;
  v15 = 5381;
  do
  {
    ++v13;
    v16 = v14 | 0x20;
    if ( (unsigned int)(v14 - 65) >= 0x1A )
      v16 = v14;
    v15 = 65599 * v15 + v16;
    v14 = *v13;
  }
  while ( *v13 );
  v17 = "flat_middle";
  v18 = 102;
  if ( !v15 )
    v15 = 1;
  g_snd.flatEndedHash = v15;
  v19 = 5381;
  do
  {
    ++v17;
    v20 = v18 | 0x20;
    if ( (unsigned int)(v18 - 65) >= 0x1A )
      v20 = v18;
    v19 = 65599 * v19 + v20;
    v18 = *v17;
  }
  while ( *v17 );
  v21 = "cinematic";
  v22 = 99;
  if ( !v19 )
    v19 = 1;
  g_snd.flatMiddleHash = v19;
  v23 = 5381;
  do
  {
    ++v21;
    v24 = v22 | 0x20;
    if ( (unsigned int)(v22 - 65) >= 0x1A )
      v24 = v22;
    v23 = 65599 * v23 + v24;
    v22 = *v21;
  }
  while ( *v21 );
  v25 = 5381;
  v26 = 97;
  if ( !v23 )
    v23 = 1;
  g_snd.cinematicAssetId = v23;
  v27 = "arcade";
  do
  {
    ++v27;
    v28 = v26 | 0x20;
    if ( (unsigned int)(v26 - 65) >= 0x1A )
      v28 = v26;
    v25 = 65599 * v25 + v28;
    v26 = *v27;
  }
  while ( *v27 );
  if ( !v25 )
    v25 = 1;
  *(_QWORD *)&g_snd.cinematicAssetEntry.seekTableSize = 0x7FFFFFFF00000000i64;
  *(unsigned __int64 *)((char *)&g_snd.cinematicAssetEntry.offset + 4) = 0xBB8000000000i64;
  *(_QWORD *)&g_snd.cinematicAssetEntry.channelCount = 2i64;
  *(_QWORD *)&g_snd.arcadeAssetEntry.seekTableSize = 0x7FFFFFFF00000000i64;
  *(unsigned __int64 *)((char *)&g_snd.arcadeAssetEntry.offset + 4) = 0xBB8000000000i64;
  g_snd.masterPercentage = 0.0;
  g_snd.masterPriorityVal = 0.0;
  g_snd.arcadeAssetId = v25;
  *(_QWORD *)&g_snd.cinematicAssetEntry.id = 0i64;
  *(_QWORD *)&g_snd.cinematicAssetEntry.hybridPcmSize = 0i64;
  *(_DWORD *)&g_snd.cinematicAssetEntry.EnvelopeLoudness1 = 0;
  *(_QWORD *)&g_snd.arcadeAssetEntry.id = 0i64;
  *(_QWORD *)&g_snd.arcadeAssetEntry.hybridPcmSize = 0i64;
  *(_DWORD *)&g_snd.arcadeAssetEntry.EnvelopeLoudness1 = 0;
  *(_QWORD *)&g_snd.arcadeAssetEntry.channelCount = 1i64;
  g_snd.masterPriorityID = 0;
  Com_Printf(9, "\n------- sound system initialization -------\n");
  *(_WORD *)&g_snd.muted = 0;
  SND_RegisterDvars();
  listeners = g_snd.listeners;
  v30 = 2i64;
  do
  {
    memset_0(listeners, 0, sizeof(snd_listener));
    MatrixIdentity33(&listeners->orient.axis);
    OrientationInvert(&listeners->orient, &listeners->inverse);
    ++listeners;
    --v30;
  }
  while ( v30 );
  v31 = 0;
  p_wetlevel = &g_snd.reverbSetting[0].wetlevel;
  v33 = 0;
  do
  {
    v33 += 2;
    *(_QWORD *)(p_wetlevel - 1) = 0i64;
    *(p_wetlevel - 2) = 0.0;
    *((_QWORD *)p_wetlevel + 1) = 0i64;
    p_wetlevel[1] = 0.0;
    p_wetlevel += 6;
  }
  while ( v33 < 2 );
  g_snd.scriptSoundFade.value = FLOAT_1_0;
  g_snd.scriptSoundFade.goalvalue = FLOAT_1_0;
  g_snd.scriptSoundFade.goalrate = FLOAT_1_0;
  g_snd.mainReverbLerp.current = 0.0;
  g_snd.mainReverbLerp.rateMS = 0.0;
  g_snd.scriptSoundFade.goalfraction = 0.0;
  g_snd.scriptSoundFade.goalgain = 0.0;
  g_snd.activeMainReverb = RVB_MAIN_A;
  SND_InitEntityParamInfo();
  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 9469, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  if ( !globals->volmodinfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 9470, ASSERT_TYPE_ASSERT, "(g_snd.globals->volmodinfo)", (const char *)&queryFormat, "g_snd.globals->volmodinfo") )
      __debugbreak();
    globals = g_snd.globals;
  }
  if ( !globals->volmodinfoCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 9471, ASSERT_TYPE_ASSERT, "(g_snd.globals->volmodinfoCount > 0)", (const char *)&queryFormat, "g_snd.globals->volmodinfoCount > 0") )
      __debugbreak();
    globals = g_snd.globals;
  }
  volmodinfo = globals->volmodinfo;
  v36 = 0;
  if ( globals->volmodinfoCount )
  {
    do
    {
      v37 = v36++;
      v38 = v37;
      g_snd.volmods[v38].value = volmodinfo[v37].value;
      g_snd.volmods[v38].goalvalue = volmodinfo[v37].value;
      g_snd.volmods[v38].goalrate = 0.0;
      globals = g_snd.globals;
    }
    while ( v36 < g_snd.globals->volmodinfoCount );
  }
  g_snd.playbackIdCounter = 1;
  v39 = 0;
  g_snd.stopSoundsAfterMasterFade = 0;
  g_snd.mastervol.value = FLOAT_1_0;
  g_snd.mastervol.goalvalue = FLOAT_1_0;
  g_snd.mastervol.goalrate = FLOAT_1_0;
  g_snd.mastervol.goalfraction = 0.0;
  g_snd.mastervol.goalgain = 0.0;
  g_snd.currentChannelPriority = 0;
  while ( globals && v39 < globals->entchannelCount )
  {
    v40 = v39;
    if ( (snd_local_t *)((char *)&g_snd + v40 * 24) == (snd_local_t *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
      __debugbreak();
    g_snd.levelFadeInChannelVols.channelvol[v40].value = 1.0;
    g_snd.levelFadeInChannelVols.channelvol[v40].goalvalue = 1.0;
    *(_QWORD *)&g_snd.levelFadeInChannelVols.channelvol[v40].goalrate = 1065353216i64;
    g_snd.levelFadeInChannelVols.channelvol[v40].goalgain = 0.0;
    v41 = (char *)&g_snd.channelPriorityVolGroups[g_snd.currentChannelPriority] + v40 * 24;
    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
      __debugbreak();
    *(_DWORD *)v41 = 1065353216;
    ++v39;
    *((_DWORD *)v41 + 1) = 1065353216;
    *((_QWORD *)v41 + 1) = 1065353216i64;
    *((_DWORD *)v41 + 4) = 0;
    globals = g_snd.globals;
  }
  g_snd.levelFadeInChannelVols.active = 1;
  g_snd.channelPriorityVolGroups[g_snd.currentChannelPriority].active = 1;
  v42 = Sys_Milliseconds();
  v43 = DVARBOOL_snd_volume_mute;
  g_snd.time = v42;
  g_snd.looptime = v42;
  if ( !DVARBOOL_snd_volume_mute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_volume_mute") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.enabled )
  {
    g_snd.volume = 0.0;
  }
  else
  {
    v44 = DVARFLT_profileMenuOption_volume;
    if ( !DVARFLT_profileMenuOption_volume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_volume") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    g_snd.volume = v44->current.value * g_snd.globals->globalVolumeModifier;
  }
  g_snd.listenerFence = 0;
  v45 = 0;
  g_sndEntityParamFence = 0;
  do
  {
    v46 = (int)v45++;
    g_snd.voiceBusyUpdating[v46] = 0;
  }
  while ( v45 < 0x63 );
  timescaleLerp = g_snd.entchanOverrides.timescaleLerp;
  v48 = 16i64;
  do
  {
    *(_QWORD *)timescaleLerp = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp + 1) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp + 2) = 0x3F8000003F800000i64;
    timescaleLerp += 16;
    *((_QWORD *)timescaleLerp - 5) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 4) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 3) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 2) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 1) = 0x3F8000003F800000i64;
    --v48;
  }
  while ( v48 );
  v49 = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6064, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    v49 = g_snd.globals;
  }
  *(_QWORD *)g_snd.entchanOverrides.isPausable = -1i64;
  v50 = 0;
  *(_QWORD *)&g_snd.entchanOverrides.isPausable[2] = -1i64;
  *(_QWORD *)&g_snd.entchanOverrides.isPausable[4] = -1i64;
  for ( *(_QWORD *)&g_snd.entchanOverrides.isPausable[6] = -1i64; v50 < v49->entchannelCount; ++v50 )
  {
    if ( !v49->entchannelInfo[v50].isPausable )
    {
      if ( v50 >= 0x100 )
      {
        LODWORD(v66) = 256;
        LODWORD(v65) = v50;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 30, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      g_snd.entchanOverrides.isPausable[(__int64)(int)v50 >> 5] &= ~(1 << (v50 & 0x1F));
      v49 = g_snd.globals;
    }
  }
  Cmd_AddCommandInternal("snd_playLocal", SND_PlayLocal_f, &SND_PlayLocal_f_VAR);
  Cmd_AddCommandInternal("snd_setEq", SND_SetEq_f, &SND_SetEq_f_VAR);
  Cmd_AddCommandInternal("snd_setEqFreq", SND_SetEqFreq_f, &SND_SetEqFreq_f_VAR);
  Cmd_AddCommandInternal("snd_setEqGain", SND_SetEqGain_f, &SND_SetEqGain_f_VAR);
  Cmd_AddCommandInternal("snd_setEqQ", SND_SetEqQ_f, &SND_SetEqQ_f_VAR);
  Cmd_AddCommandInternal("snd_setEqType", SND_SetEqType_f, &SND_SetEqType_f_VAR);
  Cmd_AddCommandInternal("snd_deactivateEq", SND_DeactivateEq_f, &SND_DeactivateEq_f_VAR);
  snd_drawOnlyChannel = -1;
  Cmd_AddCommandInternal("snd_soloChannel", SND_SoloChannel_f, &SND_SoloChannel_f_VAR);
  Cmd_AddCommandInternal("snd_clearSoloChannel", SND_ClearSoloChannel_f, &SND_ClearSoloChannel_f_VAR);
  Cmd_AddCommandInternal("snd_drawOnlyChannel", SND_DrawOnlyChannel_f, &SND_DrawOnlyChannel_f_VAR);
  Cmd_AddCommandInternal("snd_clearDrawOnlyChannel", SND_ClearDrawOnlyChannel_f, &SND_ClearDrawOnlyChannel_f_VAR);
  Cmd_AddCommandInternal("snd_dumpTimeScaleSettings", SND_DumpTimeScale_f, &SND_DumpTimeScale_f_VAR);
  Cmd_AddCommandInternal("snd_dumpGlobals", SND_DumpGlobals_f, &SND_DumpGlobals_f_VAR);
  Cmd_AddCommandInternal("snd_RecalcPropagation", SND_RecalcPropagation_f, &SND_RecalcPropagation_f_VAR);
  g_snd.doPropagationRecalc = 0;
  Cmd_AddCommandInternal("snd_setAliasValue", SND_SetAliasValue_f, &SND_SetAliasValue_f_VAR);
  g_snd.ambient_track = 0;
  SND_InitDolbyPanners();
  v51 = 0;
  p_playTime = &g_ambGlob[0].playTime;
  do
  {
    v51 += 2;
    *(_QWORD *)(p_playTime - 1) = 0i64;
    p_playTime[1] = 0;
    *((_BYTE *)p_playTime + 8) = 0;
    *(_QWORD *)(p_playTime + 3) = 0i64;
    *(_QWORD *)(p_playTime + 7) = 0i64;
    *(_QWORD *)(p_playTime + 5) = 0i64;
    p_playTime[9] = 0;
    *(_QWORD *)(p_playTime + 11) = 0i64;
    p_playTime[13] = 0;
    *((_BYTE *)p_playTime + 56) = 0;
    *(_QWORD *)(p_playTime + 15) = 0i64;
    *(_QWORD *)(p_playTime + 19) = 0i64;
    *(_QWORD *)(p_playTime + 17) = 0i64;
    p_playTime[21] = 0;
    p_playTime += 24;
  }
  while ( v51 < 2 );
  g_snd.nextVirtualLoopHandle = 0;
  virtualLoops = g_snd.virtualLoops;
  do
  {
    virtualLoops->handle = -1;
    ++virtualLoops;
  }
  while ( (__int64)virtualLoops < (__int64)&g_snd.nextVirtualLoopHandle );
  SND_InitWeaponRelection();
  SND_InitGlobalContexts();
  SND_DspInit();
  s_FXPlaySoundCount = 0;
  s_FXPlaySoundHead = 0;
  g_snd.numFullOcclusionCache = 0;
  SND_ClearAllOcclusionSettings();
  *(_QWORD *)g_snd.entChanFullOcclusionDisabled = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[2] = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[4] = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[6] = 0i64;
  CG_ClearAudioZoneCache();
  SND_SubmixInit();
  SND_BankDetailStreaming_Init();
  if ( !g_snd.driverInitialized )
  {
    SND_ClearReverbs();
    g_snd.playback_channels = 16;
    SD_Init();
    p_freq = &sdGlob.eqParams[0][0][0].freq;
    g_snd.playback_rate = 0x7FFFFFFF;
    g_snd.timescale = FLOAT_1_0;
    do
    {
      v55 = 2i64;
      do
      {
        v56 = 256i64;
        do
        {
          *((_BYTE *)p_freq + 8) = 0;
          *p_freq = 24000.0;
          *(p_freq - 1) = 1.0;
          p_freq[1] = 1.0;
          *(p_freq - 2) = 0.0;
          p_freq += 5;
          --v56;
        }
        while ( v56 );
        --v55;
      }
      while ( v55 );
    }
    while ( (__int64)p_freq < (__int64)&sdGlob.voiceParams[0].sendType );
    p_hpfCutoff = &sdGlob.voiceParams[0].dspParams.hpfCutoff;
    p_dspParams = &sdGlob.voiceParams[0].dspParams;
    v59 = 99i64;
    do
    {
      SND_InitEQBankParams(&p_dspParams->eqBankParams);
      p_dspParams = (SndDspSourceParams *)((char *)p_dspParams + 260);
      *(p_hpfCutoff - 1) = -1.0;
      *p_hpfCutoff = -1.0;
      p_hpfCutoff += 65;
      --v59;
    }
    while ( v59 );
    SND_DevhostInit();
    if ( g_snd.globals )
      SND_ParseInit(g_snd.globals);
    g_snd.driverInitialized = 1;
  }
  SND_LoadSoundsWait(1);
  v60 = "voiceover_plr";
  g_snd.playerVoiceVolmodIndex = -1;
  v61 = 118;
  do
  {
    ++v60;
    v62 = v61 | 0x20;
    if ( (unsigned int)(v61 - 65) >= 0x1A )
      v62 = v61;
    v0 = 65599 * v0 + v62;
    v61 = *v60;
  }
  while ( *v60 );
  if ( !v0 )
    v0 = 1;
  volmodinfoCount = g_snd.globals->volmodinfoCount;
  if ( !volmodinfoCount )
    goto LABEL_123;
  p_id = &g_snd.globals->volmodinfo->id;
  while ( *p_id != v0 )
  {
    ++v31;
    p_id += 18;
    if ( v31 >= volmodinfoCount )
      goto LABEL_123;
  }
  g_snd.playerVoiceVolmodIndex = v31;
  if ( v31 == -1 )
LABEL_123:
    Com_PrintError(9, "Did not find the 'voiceover_plr' volmod for muting player dialogue\n");
  Com_Printf(9, "------- sound system successfully initialized -------\n");
}

/*
==============
SND_InitAliasGroupTracking
==============
*/
void SND_InitAliasGroupTracking(SndAliasGroupTracking *inOutTracking)
{
  unsigned int secondaryGroupCounter; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  *(_QWORD *)&inOutTracking->numVoices = 0i64;
  secondaryGroupCounter = g_snd.secondaryGroupCounter;
  do
    ++secondaryGroupCounter;
  while ( !secondaryGroupCounter );
  g_snd.secondaryGroupCounter = secondaryGroupCounter;
  inOutTracking->secondaryGroupId = secondaryGroupCounter;
  inOutTracking->hasSetPlayerBreathDialogueAlias = 0;
}

/*
==============
SND_InitDriver
==============
*/
char SND_InitDriver()
{
  float *p_freq; 
  __int64 v1; 
  __int64 v2; 
  float *p_hpfCutoff; 
  SndDspSourceParams *p_dspParams; 
  __int64 v5; 

  if ( !g_snd.driverInitialized )
  {
    SND_ClearReverbs();
    g_snd.playback_channels = 16;
    SD_Init();
    g_snd.timescale = FLOAT_1_0;
    g_snd.playback_rate = 0x7FFFFFFF;
    p_freq = &sdGlob.eqParams[0][0][0].freq;
    do
    {
      v1 = 2i64;
      do
      {
        v2 = 256i64;
        do
        {
          *((_BYTE *)p_freq + 8) = 0;
          *p_freq = 24000.0;
          *(p_freq - 1) = 1.0;
          p_freq[1] = 1.0;
          *(p_freq - 2) = 0.0;
          p_freq += 5;
          --v2;
        }
        while ( v2 );
        --v1;
      }
      while ( v1 );
    }
    while ( (__int64)p_freq < (__int64)&sdGlob.voiceParams[0].sendType );
    p_hpfCutoff = &sdGlob.voiceParams[0].dspParams.hpfCutoff;
    p_dspParams = &sdGlob.voiceParams[0].dspParams;
    v5 = 99i64;
    do
    {
      SND_InitEQBankParams(&p_dspParams->eqBankParams);
      p_dspParams = (SndDspSourceParams *)((char *)p_dspParams + 260);
      *(p_hpfCutoff - 1) = -1.0;
      *p_hpfCutoff = -1.0;
      p_hpfCutoff += 65;
      --v5;
    }
    while ( v5 );
    SND_DevhostInit();
    if ( g_snd.globals )
      SND_ParseInit(g_snd.globals);
    g_snd.driverInitialized = 1;
  }
  return 1;
}

/*
==============
SND_InitEntityParamInfo
==============
*/
__int64 SND_InitEntityParamInfo()
{
  float *p_goalrate; 
  int v1; 
  bool v2; 
  unsigned int v3; 
  EntParamIdxHashBucket *v4; 
  __int64 v5; 
  __int64 result; 
  unsigned __int16 *v7; 
  __int64 v8; 
  __int64 v9; 

  p_goalrate = &g_sndEntityParamInfo[0].pitch.goalrate;
  v1 = 0;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v9) = 64;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1797, ASSERT_TYPE_ASSERT, "(unsigned)( paramInfoIndex ) < (unsigned)( 64 )", "paramInfoIndex doesn't index SND_MAX_PARAM_INFO\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( p_goalrate == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
      __debugbreak();
    *(p_goalrate - 2) = 1.0;
    *(p_goalrate - 1) = 1.0;
    *(_QWORD *)p_goalrate = 1065353216i64;
    p_goalrate[2] = 0.0;
    if ( p_goalrate == (float *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
      __debugbreak();
    p_goalrate[5] = 1.0;
    ++v1;
    *((_QWORD *)p_goalrate + 3) = 1065353216i64;
    p_goalrate[8] = 0.0;
    p_goalrate[4] = 1.0;
    *(p_goalrate - 3) = NAN;
    p_goalrate += 13;
    v2 = (unsigned int)v1 < 0x40;
  }
  while ( v1 < 64 );
  v3 = 0;
  v4 = &g_sndEntityParamIndex[1];
  do
  {
    v3 += 64;
    v4[-1] = (EntParamIdxHashBucket)0x7FFFFFF;
    *v4 = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[1] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[2] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[3] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[4] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[5] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[6] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[7] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[8] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[9] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[10] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[11] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[12] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[13] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[14] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[15] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[16] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[17] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[18] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[19] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[20] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[21] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[22] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[23] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[24] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[25] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[26] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[27] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[28] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[29] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[30] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[31] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[32] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[33] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[34] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[35] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[36] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[37] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[38] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[39] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[40] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[41] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[42] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[43] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[44] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[45] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[46] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[47] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[48] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[49] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[50] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[51] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[52] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[53] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[54] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[55] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[56] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[57] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[58] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[59] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[60] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[61] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4[62] = (EntParamIdxHashBucket)0x7FFFFFF;
    v4 += 64;
  }
  while ( v3 < 0x40 );
  v5 = 64i64;
  result = 2047i64;
  v7 = g_sndSVEntityParamSet;
  while ( v5 )
  {
    *v7++ = 2047;
    --v5;
  }
  return result;
}

/*
==============
SND_InitEntityParamInfoEntry
==============
*/
EntityParamInfo *SND_InitEntityParamInfoEntry(unsigned int paramInfoIndex, unsigned int entIndex)
{
  __int64 v2; 
  EntityParamInfo *v4; 
  EntityParamInfo *result; 
  __int64 v6; 
  int v8; 

  v2 = paramInfoIndex;
  if ( paramInfoIndex >= 0x40 )
  {
    v8 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1797, ASSERT_TYPE_ASSERT, "(unsigned)( paramInfoIndex ) < (unsigned)( 64 )", "paramInfoIndex doesn't index SND_MAX_PARAM_INFO\n\t%i not in [0, %i)", paramInfoIndex, v8) )
      __debugbreak();
  }
  if ( entIndex >= 0x7B6E3 && entIndex != 0x7FFFFFFF )
  {
    LODWORD(v6) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1798, ASSERT_TYPE_ASSERT, "( ( entIndex < ( ( ( 2048 ) ) + ( 1 ) + ( 1024 ) + ( 128 ) + ( 128 ) + 1024 + ( 2 ) + ( 32 ) + ( 1024 ) + ( 32 ) + ( 128 ) + ( 500000 ) ) || entIndex == 2147483647 ) )", "( entIndex ) = %i", v6) )
      __debugbreak();
  }
  v4 = &g_sndEntityParamInfo[v2];
  SND_InitParameter(&v4->pitch, 1.0);
  SND_InitParameter(&v4->volume, 1.0);
  result = v4;
  v4->entIndex = entIndex;
  return result;
}

/*
==============
SND_InitFXSounds
==============
*/
void SND_InitFXSounds(void)
{
  s_FXPlaySoundCount = 0;
  s_FXPlaySoundHead = 0;
}

/*
==============
SND_InitFullOcclusionFlags
==============
*/
void SND_InitFullOcclusionFlags(void)
{
  *(_QWORD *)g_snd.entChanFullOcclusionDisabled = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[2] = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[4] = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[6] = 0i64;
}

/*
==============
SND_InitGlobalContexts
==============
*/
void SND_InitGlobalContexts(void)
{
  unsigned int *v0; 
  float *p_rateMS; 
  unsigned int v2; 
  const char *v3; 
  int v4; 
  char v5; 
  char v6; 
  const char *v7; 
  char v8; 
  char v9; 
  int ContextIndex; 

  v0 = &g_snd.globalContextsTo[1];
  p_rateMS = &g_snd.globalContextLerp[2].rateMS;
  do
  {
    *(v0 - 65) = 0;
    *(v0 - 1) = 0;
    *(_QWORD *)(p_rateMS - 5) = 0i64;
    *(v0 - 64) = 0;
    *v0 = 0;
    *(_QWORD *)(p_rateMS - 3) = 0i64;
    *(v0 - 63) = 0;
    v0[1] = 0;
    *(_QWORD *)(p_rateMS - 1) = 0i64;
    *(v0 - 62) = 0;
    v0[2] = 0;
    *(_QWORD *)(p_rateMS + 1) = 0i64;
    *(v0 - 61) = 0;
    v0[3] = 0;
    *(_QWORD *)(p_rateMS + 3) = 0i64;
    *(v0 - 60) = 0;
    v0[4] = 0;
    *(_QWORD *)(p_rateMS + 5) = 0i64;
    *(v0 - 59) = 0;
    v0[5] = 0;
    *(_QWORD *)(p_rateMS + 7) = 0i64;
    *(v0 - 58) = 0;
    v0[6] = 0;
    *(_QWORD *)(p_rateMS + 9) = 0i64;
    *(v0 - 57) = 0;
    v0[7] = 0;
    *(_QWORD *)(p_rateMS + 11) = 0i64;
    *(v0 - 56) = 0;
    v0[8] = 0;
    *(_QWORD *)(p_rateMS + 13) = 0i64;
    *(v0 - 55) = 0;
    v0[9] = 0;
    *(_QWORD *)(p_rateMS + 15) = 0i64;
    *(v0 - 54) = 0;
    v0[10] = 0;
    *(_QWORD *)(p_rateMS + 17) = 0i64;
    *(v0 - 53) = 0;
    v0[11] = 0;
    *(_QWORD *)(p_rateMS + 19) = 0i64;
    *(v0 - 52) = 0;
    v0[12] = 0;
    *(_QWORD *)(p_rateMS + 21) = 0i64;
    *(v0 - 51) = 0;
    v0[13] = 0;
    *(_QWORD *)(p_rateMS + 23) = 0i64;
    *(v0 - 50) = 0;
    v0[14] = 0;
    *(_QWORD *)(p_rateMS + 25) = 0i64;
    *(v0 - 49) = 0;
    v0[15] = 0;
    *(_QWORD *)(p_rateMS + 27) = 0i64;
    *(v0 - 48) = 0;
    v0[16] = 0;
    *(_QWORD *)(p_rateMS + 29) = 0i64;
    *(v0 - 47) = 0;
    v0[17] = 0;
    *(_QWORD *)(p_rateMS + 31) = 0i64;
    *(v0 - 46) = 0;
    v0[18] = 0;
    *(_QWORD *)(p_rateMS + 33) = 0i64;
    *(v0 - 45) = 0;
    v0[19] = 0;
    *(_QWORD *)(p_rateMS + 35) = 0i64;
    *(v0 - 44) = 0;
    v0[20] = 0;
    *(_QWORD *)(p_rateMS + 37) = 0i64;
    *(v0 - 43) = 0;
    v0[21] = 0;
    *(_QWORD *)(p_rateMS + 39) = 0i64;
    *(v0 - 42) = 0;
    v0[22] = 0;
    *(_QWORD *)(p_rateMS + 41) = 0i64;
    *(v0 - 41) = 0;
    v0[23] = 0;
    *(_QWORD *)(p_rateMS + 43) = 0i64;
    *(v0 - 40) = 0;
    v0[24] = 0;
    *(_QWORD *)(p_rateMS + 45) = 0i64;
    *(v0 - 39) = 0;
    v0[25] = 0;
    *(_QWORD *)(p_rateMS + 47) = 0i64;
    *(v0 - 38) = 0;
    v0[26] = 0;
    v0 += 32;
    *(_QWORD *)(p_rateMS + 49) = 0i64;
    *(v0 - 69) = 0;
    *(v0 - 5) = 0;
    *(_QWORD *)(p_rateMS + 51) = 0i64;
    *(v0 - 68) = 0;
    *(v0 - 4) = 0;
    *(_QWORD *)(p_rateMS + 53) = 0i64;
    *(v0 - 67) = 0;
    *(v0 - 3) = 0;
    *(_QWORD *)(p_rateMS + 55) = 0i64;
    *(v0 - 66) = 0;
    *(v0 - 2) = 0;
    *(_QWORD *)(p_rateMS + 57) = 0i64;
    p_rateMS += 64;
  }
  while ( (__int64)p_rateMS < (__int64)&g_snd.entState[0].contextValuesFrom[1] );
  v2 = 5381;
  v3 = "explicit";
  v4 = 5381;
  v5 = 101;
  do
  {
    ++v3;
    v6 = v5 | 0x20;
    if ( (unsigned int)(v5 - 65) >= 0x1A )
      v6 = v5;
    v4 = 65599 * v4 + v6;
    v5 = *v3;
  }
  while ( *v3 );
  v7 = "mature";
  v8 = 109;
  if ( !v4 )
    v4 = 1;
  do
  {
    ++v7;
    v9 = v8 | 0x20;
    if ( (unsigned int)(v8 - 65) >= 0x1A )
      v9 = v8;
    v2 = 65599 * v2 + v9;
    v8 = *v7;
  }
  while ( *v7 );
  if ( !v2 )
    v2 = 1;
  ContextIndex = SND_FindContextIndex(v2);
  if ( ContextIndex >= 0 )
  {
    g_snd.globalContextsFrom[ContextIndex] = g_snd.globalContextsTo[ContextIndex];
    g_snd.globalContextsTo[ContextIndex] = v4;
    g_snd.globalContextLerp[ContextIndex] = (TimeLerp)1065353216i64;
  }
}

/*
==============
SND_InitMemory
==============
*/
void SND_InitMemory(void)
{
  SD_AllocInit();
  SND_BankInit();
}

/*
==============
SND_InitParameter
==============
*/
void SND_InitParameter(snd_param_info_t *paramInfo, float initValue)
{
  if ( !paramInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
    __debugbreak();
  *(_QWORD *)&paramInfo->goalrate = 1065353216i64;
  paramInfo->value = initValue;
  paramInfo->goalvalue = initValue;
  paramInfo->goalgain = 0.0;
}

/*
==============
SND_InitVirtualLoopingSounds
==============
*/
void SND_InitVirtualLoopingSounds(void)
{
  SndVirtualLoop *virtualLoops; 

  g_snd.nextVirtualLoopHandle = 0;
  virtualLoops = g_snd.virtualLoops;
  do
  {
    virtualLoops->handle = -1;
    ++virtualLoops;
  }
  while ( (__int64)virtualLoops < (__int64)&g_snd.nextVirtualLoopHandle );
}

/*
==============
SND_IsAliasPlayingOnTrack
==============
*/
_BOOL8 SND_IsAliasPlayingOnTrack(const char *aliasName, int track)
{
  __int64 v2; 
  __int64 v5; 

  v2 = track;
  if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6313, ASSERT_TYPE_ASSERT, "(aliasName != 0)", (const char *)&queryFormat, "aliasName != NULL") )
    __debugbreak();
  if ( (v2 & 0xFFFFFFFD) != 0 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6314, ASSERT_TYPE_ASSERT, "( ( track == SND_TRACK_AMBIENT_PRIMARY_0 || track == SND_TRACK_AMBIENT_PRIMARY_1 ) )", "( track ) = %i", v5) )
      __debugbreak();
  }
  if ( (unsigned int)(v2 + 80) > 0x62 )
  {
    LODWORD(v5) = v2 + 80;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v5) )
      __debugbreak();
  }
  return sdGlob.voiceAlloc[v2 + 80] && I_strcmp(**(const char ***)&g_snd.chaninfoUnweightedPriority[492 * v2 - 9320], aliasName) == 0;
}

/*
==============
SND_IsAliasSpatial
==============
*/
bool SND_IsAliasSpatial(const SndAlias *alias)
{
  return SND_IsEntChannel3D((unsigned __int8)(alias->flags >> 10));
}

/*
==============
SND_IsChannelMissionVOChannel
==============
*/
char SND_IsChannelMissionVOChannel(unsigned int entChannel)
{
  __int64 v1; 
  snd_entchannel_info_t *v2; 
  char v3; 
  int v4; 
  char v5; 
  int v6; 
  int v7; 
  const char **i; 
  const char *v9; 
  char v10; 
  int v11; 
  char v12; 
  __int64 v14; 

  v1 = entChannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16413, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v14) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16414, ASSERT_TYPE_ASSERT, "( ( entChannel >= 0 && entChannel < g_snd.globals->entchannelCount ) )", "( entChannel ) = %i", v14) )
      __debugbreak();
  }
  v2 = &g_snd.globals->entchannelInfo[v1];
  if ( v2 && (v3 = v2->name[0]) != 0 )
  {
    v4 = 5381;
    do
    {
      v2 = (snd_entchannel_info_t *)((char *)v2 + 1);
      v5 = v3 | 0x20;
      if ( (unsigned int)(v3 - 65) >= 0x1A )
        v5 = v3;
      v6 = 65599 * v4 + v5;
      v3 = v2->name[0];
      v4 = v6;
    }
    while ( v2->name[0] );
    if ( !v6 )
      v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v7 = 0;
  for ( i = s_missionVOChannelNames; ; ++i )
  {
    v9 = *i;
    if ( *i && (v10 = *v9) != 0 )
    {
      v11 = 5381;
      do
      {
        ++v9;
        v12 = v10 | 0x20;
        if ( (unsigned int)(v10 - 65) >= 0x1A )
          v12 = v10;
        v11 = 65599 * v11 + v12;
        v10 = *v9;
      }
      while ( *v9 );
      if ( !v11 )
        v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( v4 == v11 )
      break;
    if ( (unsigned int)++v7 >= 7 )
      return 0;
  }
  return 1;
}

/*
==============
SND_IsChannelQuadAmbientChannel
==============
*/
bool SND_IsChannelQuadAmbientChannel(unsigned int entChannel)
{
  __int64 v1; 
  int v2; 
  snd_entchannel_info_t *v3; 
  char v4; 
  int v5; 
  char v6; 
  const char *v7; 
  char v8; 
  char v9; 
  __int64 v11; 

  v1 = entChannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16435, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v11) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16436, ASSERT_TYPE_ASSERT, "( ( entChannel >= 0 && entChannel < g_snd.globals->entchannelCount ) )", "( entChannel ) = %i", v11) )
      __debugbreak();
  }
  v2 = 5381;
  v3 = &g_snd.globals->entchannelInfo[v1];
  if ( v3 && (v4 = v3->name[0]) != 0 )
  {
    v5 = 5381;
    do
    {
      v3 = (snd_entchannel_info_t *)((char *)v3 + 1);
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = v3->name[0];
    }
    while ( v3->name[0] );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = S_QUAD_AMBIENCE_CHANNEL;
  if ( !S_QUAD_AMBIENCE_CHANNEL )
    return v5 == 0;
  v8 = *S_QUAD_AMBIENCE_CHANNEL;
  if ( !*S_QUAD_AMBIENCE_CHANNEL )
    return v5 == 0;
  do
  {
    ++v7;
    v9 = v8 | 0x20;
    if ( (unsigned int)(v8 - 65) >= 0x1A )
      v9 = v8;
    v2 = 65599 * v2 + v9;
    v8 = *v7;
  }
  while ( *v7 );
  if ( !v2 )
    v2 = 1;
  return v5 == v2;
}

/*
==============
SND_IsEntChannel3D
==============
*/
bool SND_IsEntChannel3D(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2083, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2084, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.globals->entchannelInfo[v1].spatialType != SND_ENTCHAN_TYPE_2D;
}

/*
==============
SND_IsEntChannelPASpeaker
==============
*/
bool SND_IsEntChannelPASpeaker(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2099, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2100, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.globals->entchannelInfo[v1].spatialType == SND_ENTCHAN_TYPE_PA_SPEAKER;
}

/*
==============
SND_IsEntChannelPlayerDialogue
==============
*/
_BOOL8 SND_IsEntChannelPlayerDialogue(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2107, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2108, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.globals->entchannelInfo[v1].isPlayerDialogue;
}

/*
==============
SND_IsListenerActive
==============
*/
_BOOL8 SND_IsListenerActive(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  bool active; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2833, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  active = g_snd.listeners[v1].active;
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
  return active;
}

/*
==============
SND_IsMuteAlias
==============
*/
bool SND_IsMuteAlias(const SndAlias *alias)
{
  const dvar_t *v2; 
  const char *string; 
  const dvar_t *v4; 
  const char *v5; 

  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4143, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v2 = DCONST_DVARSTR_snd_mute_alias;
  if ( !DCONST_DVARSTR_snd_mute_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_mute_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  string = v2->current.string;
  if ( string && *string && SND_ParseSoloMuteSubstring(string, alias->aliasName) )
    return 1;
  if ( (alias->flags & 0x380u) <= 0x100 )
  {
    if ( SND_IsEntChannel3D((unsigned __int8)(alias->flags >> 10)) )
    {
      v4 = DCONST_DVARBOOL_snd_mute_3D;
      if ( DCONST_DVARBOOL_snd_mute_3D )
        goto LABEL_20;
      v5 = "snd_mute_3D";
    }
    else
    {
      v4 = DCONST_DVARBOOL_snd_mute_2D;
      if ( DCONST_DVARBOOL_snd_mute_2D )
        goto LABEL_20;
      v5 = "snd_mute_2D";
    }
  }
  else
  {
    v4 = DCONST_DVARBOOL_snd_mute_stream;
    if ( DCONST_DVARBOOL_snd_mute_stream )
      goto LABEL_20;
    v5 = "snd_mute_stream";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
    __debugbreak();
LABEL_20:
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.enabled;
}

/*
==============
SND_IsPausable
==============
*/
unsigned __int8 SND_IsPausable(unsigned int entchannel)
{
  __int64 v1; 
  unsigned int v2; 
  __int64 v4; 
  int v5; 

  v1 = (int)entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2180, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2181, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= 0x100 )
  {
    v5 = 256;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = g_snd.entchanOverrides.isPausable[v1 >> 5];
  return _bittest((const int *)&v2, v1 & 0x1F);
}

/*
==============
SND_IsPlaybackIdPlaying
==============
*/
char SND_IsPlaybackIdPlaying(unsigned int id)
{
  unsigned int *p_playbackId; 

  if ( !id )
    return 0;
  p_playbackId = &g_snd.voices[0].playbackId;
  while ( *p_playbackId != id )
  {
    p_playbackId += 492;
    if ( (__int64)p_playbackId >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
      return 0;
  }
  return 1;
}

/*
==============
SND_IsRestricted
==============
*/
_BOOL8 SND_IsRestricted(unsigned int entchannel)
{
  __int64 v1; 
  __int64 v3; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2069, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2070, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v3) )
      __debugbreak();
  }
  return g_snd.globals->entchannelInfo[v1].isRestricted;
}

/*
==============
SND_IsScriptNotifySoundPlaying
==============
*/
char SND_IsScriptNotifySoundPlaying(int entNum, unsigned __int16 index)
{
  __int64 v3; 
  int v4; 
  bool *voiceAlloc; 
  unsigned __int16 *i; 
  __int64 v8; 

  v3 = entNum;
  v4 = 0;
  voiceAlloc = sdGlob.voiceAlloc;
  for ( i = &g_snd.voices[0].soundDoneSoundString; ; i += 984 )
  {
    if ( (*(_QWORD *)(i - 11) & 0x1FFFFFFFFi64) == v3 && index == *i )
    {
      if ( (unsigned int)v4 > 0x62 )
      {
        LODWORD(v8) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v8) )
          __debugbreak();
      }
      if ( *voiceAlloc )
        break;
    }
    ++v4;
    ++voiceAlloc;
    if ( v4 >= 99 )
      return 0;
  }
  return 1;
}

/*
==============
SND_IsVoice3D
==============
*/
bool SND_IsVoice3D(unsigned int voiceIndex)
{
  return SND_IsEntChannel3D((unsigned __int8)(*(int *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * voiceIndex - 48680] + 112i64) >> 10));
}

/*
==============
SND_IsVoiceFree
==============
*/
bool SND_IsVoiceFree(int index)
{
  __int64 v1; 

  v1 = index;
  if ( (unsigned int)index > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", index) )
    __debugbreak();
  return !sdGlob.voiceAlloc[v1];
}

/*
==============
SND_IsVoicePlaying
==============
*/
bool SND_IsVoicePlaying(unsigned int id)
{
  return SND_GetPlaybackVoice(id) != NULL;
}

/*
==============
SND_MyChanges
==============
*/
void SND_MyChanges(void)
{
  ;
}

/*
==============
SND_OccTraceSide
==============
*/
float SND_OccTraceSide(LocalClientNum_t localClientNum, const vec3_t *listener, const vec3_t *emitter, const vec3_t *direction, float spacing, int numTraces, unsigned int id)
{
  float result; 
  int v12; 
  __int32 v13; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  __int64 v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  int v20; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float *v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  double RaycastHitFraction; 
  float v30; 
  bool HasHit; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t start; 
  vec3_t end; 

  *(_QWORD *)start.v = direction;
  result = 0.0;
  if ( Physics_AreClientWorldsCreated() )
  {
    v12 = 1;
    v13 = 3 * localClientNum + 2;
    extendedData.collisionBuffer = 0.0;
    extendedData.ignoreBodies = NULL;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 2097169;
    ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v13);
    if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11779, ASSERT_TYPE_ASSERT, "(closestResult)", (const char *)&queryFormat, "closestResult") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    v15 = (unsigned int)numTraces;
    v16 = (float)numTraces * spacing;
    *(float *)&v17 = v16 * direction->v[1];
    end.v[0] = (float)(v16 * direction->v[0]) + listener->v[0];
    v18 = v16 * direction->v[2];
    *((_QWORD *)&v17 + 1) = 0i64;
    end.v[1] = *(float *)&v17 + listener->v[1];
    end.v[2] = v18 + listener->v[2];
    Physics_Raycast((Physics_WorldId)v13, listener, &end, &extendedData, ClosestResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    {
      *(double *)&v17 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
      v19 = v17;
    }
    else
    {
      v19 = LODWORD(FLOAT_1_0);
    }
    v20 = 1;
    AnyResult = PhysicsQuery_GetAnyResult((Physics_WorldId)v13);
    if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11805, ASSERT_TYPE_ASSERT, "(anyResult)", (const char *)&queryFormat, "anyResult") )
      __debugbreak();
    v23 = v19;
    *(float *)&v23 = *(float *)&v19 * spacing;
    v22 = *(float *)&v19 * spacing;
    v24 = v23;
    if ( numTraces > 0 )
    {
      v25 = *(float **)start.v;
      do
      {
        v26 = *(float *)&v24 * v25[1];
        start.v[0] = (float)(*(float *)&v24 * *v25) + listener->v[0];
        v27 = *(float *)&v24 * v25[2];
        start.v[1] = v26 + listener->v[1];
        start.v[2] = v27 + listener->v[2];
        HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
        Physics_Raycast((Physics_WorldId)v13, &start, emitter, &extendedData, AnyResult);
        if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
          ++v20;
        v28 = v24;
        *(float *)&v28 = *(float *)&v24 + v22;
        v24 = v28;
        if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
        {
          RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(AnyResult, 0);
          v30 = *(float *)&RaycastHitFraction;
        }
        else
        {
          v30 = FLOAT_1_0;
        }
        HasHit = HavokPhysics_CollisionQueryResult::HasHit(AnyResult);
        SND_DebugAddOcclusionLine(&start, emitter, HasHit, id, v30);
        --v15;
      }
      while ( v15 );
      v12 = numTraces + 1;
      if ( numTraces + 1 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11835, ASSERT_TYPE_ASSERT, "(totalCount > 0)", (const char *)&queryFormat, "totalCount > 0") )
        __debugbreak();
    }
    return (float)v20 / (float)v12;
  }
  return result;
}

/*
==============
SND_OcclusionWorker
==============
*/
void SND_OcclusionWorker(const void *const cmdInfo)
{
  char *v1; 
  float v2; 
  double v3; 
  int v4; 
  _DWORD *i; 
  __int64 v6; 
  __int64 v7; 
  volatile int *v8; 
  const dvar_t *v9; 
  bool v10; 

  v1 = (char *)cmdInfo;
  v10 = 1;
  v2 = 0.0;
  if ( !CG_IsPlayerAndPointInSameInteriorZone(*((const LocalClientNum_t *)cmdInfo + 47), (const vec3_t *)((char *)cmdInfo + 176)) )
  {
    v3 = SND_PerformOcclusionTrace((const vec3_t *)(v1 + 164), (const vec3_t *)(v1 + 176), (const LocalClientNum_t)*((_DWORD *)v1 + 47), *((_QWORD *)v1 + 24), 0);
    v2 = *(float *)&v3;
    v10 = CG_OcclusionSettingsMatch(*((const LocalClientNum_t *)v1 + 47), (const vec3_t *)(v1 + 176));
  }
  v4 = 0;
  for ( i = v1 + 160; v4 < *i; v1 += 4 )
  {
    v6 = *((int *)v1 + 20);
    v7 = v6;
    v8 = &g_snd.voiceBusyUpdating[v6];
    do
    {
      if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v8) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(v8, 1, 0) == 1 );
    if ( *(_DWORD *)v1 == g_snd.voices[v7].occlusionWaitId && *(_DWORD *)v1 )
    {
      g_snd.voices[v7].occlusionMatchesListener = v10;
      v9 = DCONST_DVARINT_snd_occlusionDelay;
      g_snd.voices[v7].occlusionAmount = v2;
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDelay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      g_snd.voices[v7].nextOcclusionTime = v9->current.integer + g_snd.time;
      g_snd.voices[v7].occlusionWaitId = 0;
      if ( !g_snd.voices[v7].paused )
        SND_UpdateAndStartVoice(v6, 0);
    }
    if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v8) )
      __debugbreak();
    _InterlockedCompareExchange(v8, 0, 1);
    ++v4;
  }
}

/*
==============
SND_ParseSoloMuteSubstring
==============
*/
char SND_ParseSoloMuteSubstring(const char *soloMuteNames, const char *name)
{
  char *v4; 
  char dest[128]; 

  memset_0(dest, 0, sizeof(dest));
  if ( !soloMuteNames )
    return 0;
  if ( !name )
    return 0;
  Core_strcpy(dest, 0x80ui64, soloMuteNames);
  v4 = strtok(dest, "%");
  if ( !v4 )
    return 0;
  while ( !*v4 || !strstr_0(name, v4) )
  {
    v4 = strtok(NULL, "%");
    if ( !v4 )
      return 0;
  }
  return 1;
}

/*
==============
SND_PauseSounds
==============
*/
void SND_PauseSounds()
{
  int v0; 
  bool *voiceAlloc; 
  bool *p_ignorePause; 
  __int64 v3; 

  if ( !g_snd.paused )
  {
    if ( g_snd.driverInitialized )
    {
      v0 = 0;
      voiceAlloc = sdGlob.voiceAlloc;
      p_ignorePause = &g_snd.voices[0].ignorePause;
      do
      {
        if ( (unsigned int)v0 > 0x62 )
        {
          LODWORD(v3) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v3) )
            __debugbreak();
        }
        if ( *voiceAlloc && SND_IsPausable((unsigned __int8)(*(int *)(*((_QWORD *)p_ignorePause - 51) + 112i64) >> 10)) && (g_snd.uiPaused || !*p_ignorePause) )
        {
          if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1129, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
            __debugbreak();
          if ( (unsigned int)v0 > 0x62 )
          {
            LODWORD(v3) = v0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1130, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v3) )
              __debugbreak();
          }
          *(p_ignorePause - 344) = 1;
          SD_UpdateVoice(v0, 0);
        }
        ++v0;
        ++voiceAlloc;
        p_ignorePause += 1968;
      }
      while ( v0 < 99 );
    }
    g_snd.pausetime = g_snd.time;
    g_snd.paused = 1;
  }
}

/*
==============
SND_PauseVoice
==============
*/
void SND_PauseVoice(int index)
{
  __int64 v1; 
  __int64 v2; 

  v1 = index;
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1129, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( (unsigned int)v1 > 0x62 )
  {
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1130, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v2) )
      __debugbreak();
  }
  LOBYTE(g_snd.chaninfoUnweightedPriority[492 * v1 - 48664]) = 1;
  SD_UpdateVoice(v1, 0);
}

/*
==============
SND_PerformOcclusionTrace
==============
*/
float SND_PerformOcclusionTrace(const vec3_t *listener, const vec3_t *emitter, const LocalClientNum_t localClientNum, const unsigned __int64 sndEnt, unsigned int id)
{
  unsigned __int64 v5; 
  LocalClientNum_t v6; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  unsigned __int64 v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float value; 
  float v22; 
  const dvar_t *v24; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node<OcclusionLine> *v26; 
  float v27; 
  __int128 v28; 
  float v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  int v37; 
  unsigned int v38; 
  const ScriptableDef *def; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  bool HasHit; 
  double RaycastHitFraction; 
  float v63; 
  unsigned __int128 v64; 
  unsigned __int128 v65; 
  __int128 v69; 
  __int64 numTraces; 
  __int64 v72; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v79; 
  vec3_t outPos; 
  vec3_t end; 
  vec3_t direction; 
  tmat33_t<vec3_t> outAxis; 

  v79 = -2i64;
  v5 = sndEnt;
  *(_QWORD *)direction.v = sndEnt;
  v6 = localClientNum;
  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return 0.0;
  v10 = emitter->v[0];
  v74 = emitter->v[0];
  v11 = emitter->v[1];
  v75 = v11;
  v12 = emitter->v[2];
  v13 = DCONST_DVARFLT_snd_occlusionZOffset;
  if ( !DCONST_DVARFLT_snd_occlusionZOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionZOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v12 + v13->current.value;
  if ( (unsigned int)v6 >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v72) = 2;
    LODWORD(numTraces) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11850, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", numTraces, v72) )
      __debugbreak();
  }
  v15 = Sys_Microseconds();
  *(_QWORD *)outPos.v = v15;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "Occlusion Raycast");
  v17 = LODWORD(listener->v[0]);
  *(float *)&v17 = listener->v[0] - v10;
  v16 = v17;
  v76 = *(float *)&v17;
  v18 = listener->v[1] - v11;
  v77 = v18;
  v19 = listener->v[2] - v14;
  v20 = DCONST_DVARFLT_snd_occDepth;
  if ( !DCONST_DVARFLT_snd_occDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occDepth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  value = v20->current.value;
  v22 = fsqrt((float)((float)((float)(v11 - listener->v[1]) * (float)(v11 - listener->v[1])) + (float)((float)(v10 - listener->v[0]) * (float)(v10 - listener->v[0]))) + (float)((float)(v14 - listener->v[2]) * (float)(v14 - listener->v[2])));
  _XMM9 = 0i64;
  v24 = DCONST_DVARINT_snd_occlusionDebug;
  if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.integer )
  {
    mp_next = s_occlusionLines.m_listHead.m_sentinel.mp_next;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine> > *)s_occlusionLines.m_listHead.m_sentinel.mp_next != &s_occlusionLines.m_listHead )
    {
      do
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(mp_next[3].mp_prev) == id )
        {
          v26 = (ntl::internal::list_node<OcclusionLine> *)mp_next;
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
            __debugbreak();
          mp_next = mp_next->mp_next;
          ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine>>::remove(&s_occlusionLines.m_listHead, v26);
          v26->mp_prev = (ntl::internal::list_node_base *)s_occlusionLines.m_freelist.m_head.mp_next;
          s_occlusionLines.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v26;
        }
        else
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          mp_next = mp_next->mp_next;
        }
      }
      while ( mp_next != (ntl::internal::list_node_base *)&s_occlusionLines.m_listHead );
      v6 = localClientNum;
      v5 = *(_QWORD *)direction.v;
      *(float *)&v15 = outPos.v[0];
    }
  }
  if ( v22 >= value )
  {
    v27 = v18 * v18;
    v28 = v16;
    *(float *)&v28 = fsqrt((float)((float)(*(float *)&v16 * *(float *)&v16) + (float)(v18 * v18)) + (float)(v19 * v19));
    _XMM3 = v28;
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    *(float *)&_XMM13 = *(float *)&v16 * (float)(1.0 / *(float *)&_XMM1);
    *(float *)&_XMM14 = v18 * (float)(1.0 / *(float *)&_XMM1);
    v34 = v19 * (float)(1.0 / *(float *)&_XMM1);
    v35 = v5 & 0x1FFFFFFFFi64;
    if ( ((v5 & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v35 - 2049 <= 0x8FF || v35 <= 0x7FD || v35 - 5571 <= 0x7A120) && (v5 & 0x1000000000i64) != 0 )
    {
      v36 = truncate_cast<int,unsigned __int64>(v35);
      v37 = v36;
      if ( v36 >= 0x7B6E3 )
      {
        LODWORD(v72) = 505571;
        LODWORD(numTraces) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11880, ASSERT_TYPE_ASSERT, "(unsigned)( sndEntIndex ) < (unsigned)( ( ( ( 2048 ) ) + ( 1 ) + ( 1024 ) + ( 128 ) + ( 128 ) + 1024 + ( 2 ) + ( 32 ) + ( 1024 ) + ( 32 ) + ( 128 ) + ( 500000 ) ) )", "sndEntIndex doesn't index MAX_SOUND_ENTITIES\n\t%i not in [0, %i)", numTraces, v72) )
          __debugbreak();
      }
      if ( GetSoundEntityType(v6, v37) == EST_SCRIPTABLE )
      {
        v38 = v37 - 5571;
        ScriptableCommon_AssertCountsInitialized();
        if ( v38 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v72) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(numTraces) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", numTraces, v72) )
            __debugbreak();
        }
        if ( (unsigned int)v6 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v72) = 2;
          LODWORD(numTraces) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", numTraces, v72) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        def = g_scriptableCl_instanceContexts[v6][v38].commonContext.def;
        if ( def && (def->flags & 0x180000) != 0 )
        {
          ScriptableCl_GetInstanceOrientation(v6, v38, &outPos, &outAxis);
          v41 = LODWORD(v74);
          *(float *)&v41 = v74 - outPos.v[0];
          v40 = v41;
          v42 = LODWORD(v75);
          *(float *)&v42 = fsqrt((float)((float)((float)(v75 - outPos.v[1]) * (float)(v75 - outPos.v[1])) + (float)(*(float *)&v40 * *(float *)&v40)) + (float)((float)(v14 - outPos.v[2]) * (float)(v14 - outPos.v[2])));
          _XMM4 = v42;
          __asm
          {
            vcmpless xmm0, xmm4, xmm11
            vblendvps xmm1, xmm4, xmm7, xmm0
          }
          *(float *)&_XMM4 = (float)(v75 - outPos.v[1]) * (float)(1.0 / *(float *)&_XMM1);
          v46 = v40;
          *(float *)&v46 = *(float *)&v40 * (float)(1.0 / *(float *)&_XMM1);
          v47 = v46 ^ (unsigned int)_xmm;
          v48 = v47;
          *(float *)&v48 = fsqrt((float)(*(float *)&v47 * *(float *)&v47) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
          _XMM3 = v48;
          __asm
          {
            vcmpless xmm0, xmm3, xmm11
            vblendvps xmm1, xmm3, xmm7, xmm0
          }
          v53 = LODWORD(FLOAT_1_0);
          *(float *)&v53 = 1.0 / *(float *)&_XMM1;
          v52 = v53;
          *(float *)&v53 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&_XMM4;
          v54 = v53;
          v55 = v52;
          *(float *)&v55 = *(float *)&v52 * *(float *)&v47;
          memset(&outPos, 0, sizeof(outPos));
          v34 = 0.0;
          _XMM1 = v55 ^ (unsigned int)_xmm;
          __asm
          {
            vcmpless xmm0, xmm9, xmm4
            vblendvps xmm14, xmm1, xmm2, xmm0
          }
          _XMM2 = v54 ^ (unsigned int)_xmm;
          __asm
          {
            vcmpless xmm0, xmm9, xmm4
            vblendvps xmm13, xmm2, xmm6, xmm0
          }
        }
      }
    }
    end.v[0] = (float)(*(float *)&_XMM13 * value) + v74;
    end.v[1] = (float)(*(float *)&_XMM14 * value) + v75;
    end.v[2] = (float)(v34 * value) + v14;
    extendedData.ignoreBodies = NULL;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 2097169;
    AnyResult = PhysicsQuery_GetAnyResult(PHYSICS_WORLD_ID_CLIENT_FIRST);
    if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11926, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
    Physics_Raycast(PHYSICS_WORLD_ID_CLIENT_FIRST, listener, &end, &extendedData, AnyResult);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(AnyResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
    {
      RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(AnyResult, 0);
      v63 = *(float *)&RaycastHitFraction;
    }
    else
    {
      v63 = FLOAT_1_0;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
    {
      v64 = LODWORD(v76) ^ (unsigned __int128)(unsigned int)_xmm;
      v65 = v64;
      *(float *)&v65 = fsqrt((float)(*(float *)&v64 * *(float *)&v64) + v27);
      _XMM2 = v65;
      __asm
      {
        vcmpless xmm0, xmm2, xmm11
        vblendvps xmm0, xmm2, xmm7, xmm0
      }
      v69 = LODWORD(FLOAT_1_0);
      *(float *)&v69 = (float)(1.0 / *(float *)&_XMM0) * v77;
      outPos.v[0] = *(float *)&v69;
      outPos.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v64;
      outPos.v[2] = 0.0;
      _XMM0 = v69 ^ (unsigned int)_xmm;
      LODWORD(direction.v[0]) = v69 ^ _xmm;
      LODWORD(direction.v[1]) = LODWORD(outPos.v[1]) ^ _xmm;
      direction.v[2] = 0.0;
      SND_OccTraceSide(v6, listener, &end, &outPos, 100.0, 3, id);
      *(float *)&_XMM0 = SND_OccTraceSide(v6, listener, &end, &direction, 100.0, 3, id);
      __asm { vminss  xmm9, xmm0, xmm6 }
    }
    SND_DebugAddOcclusionLine(listener, &end, HasHit, id, v63);
    g_snd.occlusionRaycastUsec = Sys_Microseconds() - v15;
    Sys_ProfEndNamedEvent();
  }
  return *(float *)&_XMM9;
}

/*
==============
SND_PickBlendedContextSoundAlias
==============
*/
void SND_PickBlendedContextSoundAlias(const SndAlias **aliases, const int numAliases, const SndEntState *entState, const vec3_t *inOrigin, const ZoneDef *zoneA, const ZoneDef *zoneB, const float zoneLerpVal, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp)
{
  __int128 v10; 
  float *v12; 
  const SndAlias **v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  float v18; 
  float v19; 
  char v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  char v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  const char **v28; 
  __int64 i; 
  SndAlias *v30; 
  __int64 j; 
  const char **v32; 
  SndContext *Context; 
  unsigned int v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  SndAlias *v38; 
  int v39; 
  __int64 v40; 
  __int64 k; 
  const char **v42; 
  bool v43; 
  const SndAlias **v44; 
  int v45; 
  const SndAlias **v46; 
  int v47; 
  int v48; 
  SndAlias *v49; 
  int v50; 
  unsigned int contextType; 
  int v52; 
  __int64 m; 
  int v54; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  const SndAlias **v58; 
  const SndAlias **v59; 
  SndContext *v60; 
  char v61; 
  int v62; 
  const SndAlias **v63; 
  __int64 v64; 
  unsigned int outContextValueA; 
  unsigned int outContextValueB; 
  float v67[2]; 
  SndContext *v68; 
  const SndAlias **v69; 
  const SndAlias **v70; 
  SndEntState *entStatea; 
  float *v72; 
  float v73[64]; 
  SndAlias *aliasArray[64]; 
  float v75[64]; 
  __int64 Src[128]; 
  __int128 v77; 

  v12 = outLerp;
  v13 = aliases;
  v63 = aliases;
  entStatea = (SndEntState *)entState;
  v69 = outAliasA;
  v70 = outAliasB;
  v72 = outLerp;
  if ( !outAliasA )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14381, ASSERT_TYPE_ASSERT, "(outAliasA)", (const char *)&queryFormat, "outAliasA") )
      __debugbreak();
    v13 = v63;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v62 = 0;
  v17 = 64i64;
  v18 = 0.0;
  if ( numAliases < 64 )
    v17 = (unsigned int)numAliases;
  v19 = 0.0;
  v20 = 0;
  v67[1] = 0.0;
  v21 = 0i64;
  v61 = 0;
  v22 = 0;
  v68 = NULL;
  v23 = 0;
  outContextValueA = 0;
  v24 = 0;
  outContextValueB = 0;
  v67[0] = 0.0;
  if ( (_DWORD)v17 )
  {
    v25 = 0i64;
    v77 = v10;
    v26 = 0i64;
    v64 = v17;
    v27 = 0i64;
    while ( 1 )
    {
      v28 = (const char **)*v13;
      if ( (*v13)->contextType != LODWORD(v19) )
      {
        if ( !v24 )
        {
          for ( i = 0i64; i < v26; ++i )
          {
            v30 = (SndAlias *)Src[i + 64];
            if ( v27 >= 64 )
            {
              Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", v30->aliasName, 64i64);
            }
            else
            {
              ++v15;
              aliasArray[v27] = v30;
              v73[v27++] = v18;
            }
          }
        }
        if ( !v61 )
        {
          for ( j = 0i64; j < v26; ++j )
          {
            v32 = (const char **)Src[j + 64];
            if ( v25 >= 64 )
            {
              Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", *v32, 64i64);
            }
            else
            {
              ++v16;
              Src[v25] = (__int64)v32;
              v75[v25++] = 1.0 - v18;
            }
          }
        }
        v61 = 0;
        v26 = 0i64;
        v67[1] = *((float *)v28 + 11);
        v62 = 0;
        v24 = 0;
        Context = SND_GetContext(LODWORD(v67[1]));
        v34 = *((_DWORD *)v28 + 11);
        v68 = Context;
        FindDominantContextType(v34, zoneA, zoneB, zoneLerpVal, entStatea, &outContextValueA, &outContextValueB, v67);
        v21 = (__int64)v68;
        v14 = 0;
        v22 = outContextValueA;
        v23 = outContextValueB;
        v13 = v63;
        v17 = v64;
        v18 = v67[0];
      }
      if ( *((_DWORD *)v28 + 11) )
        break;
      if ( v27 >= 64 )
        goto LABEL_26;
      ++v15;
      v73[v27] = 0.0;
      aliasArray[v27++] = (SndAlias *)v28;
LABEL_29:
      v20 = v61;
LABEL_30:
      v14 = v62;
      ++v13;
      v21 = (__int64)v68;
      --v17;
      v22 = outContextValueA;
      v23 = outContextValueB;
      v19 = v67[1];
      v64 = v17;
      v63 = v13;
      if ( !v17 )
      {
        v12 = v72;
        goto LABEL_32;
      }
    }
    if ( !v21 )
      goto LABEL_29;
    if ( !*(_BYTE *)(v21 + 20) || *((_DWORD *)v28 + 12) )
    {
      v39 = *((_DWORD *)v28 + 12);
      if ( v39 != v22 || v18 == 1.0 )
      {
        if ( v39 == v23 && v18 != 0.0 )
        {
          if ( v25 >= 64 )
          {
            Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", *v28, 64i64);
            v13 = v63;
            v20 = 1;
            v17 = v64;
          }
          else
          {
            v13 = v63;
            ++v16;
            v17 = v64;
            Src[v25] = (__int64)v28;
            v20 = 1;
            v75[v25++] = 1.0 - v18;
          }
          v61 = 1;
          goto LABEL_30;
        }
        goto LABEL_28;
      }
      if ( v27 >= 64 )
      {
        Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", *v28, 64i64);
      }
      else
      {
        ++v15;
        aliasArray[v27] = (SndAlias *)v28;
        v73[v27++] = v18;
      }
      v24 = 1;
    }
    else
    {
      if ( v26 < 64 )
      {
        Src[v26 + 64] = (__int64)v28;
        v62 = v14 + 1;
        ++v26;
        goto LABEL_29;
      }
LABEL_26:
      Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", *v28, 64i64);
    }
    v13 = v63;
LABEL_28:
    v17 = v64;
    goto LABEL_29;
  }
LABEL_32:
  v35 = v14;
  if ( !v24 && v14 > 0 )
  {
    v36 = v15;
    v37 = 0i64;
    do
    {
      v38 = (SndAlias *)Src[v37 + 64];
      if ( v36 >= 64 )
      {
        Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", v38->aliasName, 64i64);
      }
      else
      {
        ++v15;
        aliasArray[v36] = v38;
        v73[v36++] = v18;
      }
      ++v37;
    }
    while ( v37 < v35 );
  }
  if ( !v20 && v35 > 0 )
  {
    v40 = v16;
    for ( k = 0i64; k < v35; ++k )
    {
      v42 = (const char **)Src[k + 64];
      if ( v40 >= 64 )
      {
        Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", *v42, 64i64);
      }
      else
      {
        ++v16;
        Src[v40] = (__int64)v42;
        v75[v40++] = 1.0 - v18;
      }
    }
  }
  v43 = v15 <= 0;
  if ( !v15 )
  {
    if ( v16 <= 0 )
      return;
    memcpy_0(aliasArray, Src, 8i64 * v16);
    memcpy_0(v73, v75, 4i64 * v16);
    v15 = v16;
    v16 = 0;
    v43 = v15 <= 0;
  }
  if ( v43 )
  {
    v58 = v69;
    if ( *v69 )
    {
      v59 = v70;
      if ( *v70 )
      {
        if ( *v12 != 0.0 )
        {
          v60 = SND_GetContext((*v69)->contextType);
          if ( v60 )
          {
            if ( !v60->canBlend )
            {
              if ( *v12 > 0.5 )
                *v58 = *v59;
              goto LABEL_89;
            }
          }
        }
      }
    }
  }
  else
  {
    v44 = v70;
    if ( v16 > 0 && v70 && v12 )
    {
      v45 = SND_PickRandomAliasIndex((const SndAlias **)aliasArray, v15);
      v46 = v69;
      v47 = -1;
      v48 = 0;
      v49 = aliasArray[v45];
      v50 = LODWORD(v73[v45]);
      *v69 = v49;
      *(_DWORD *)v12 = v50;
      contextType = v49->contextType;
      v52 = 0;
      for ( m = 0i64; m < v16; ++m )
      {
        if ( *(_DWORD *)(Src[m] + 44) == contextType )
        {
          ++v52;
          v54 = v48;
          if ( v47 != -1 )
            v54 = v47;
          v47 = v54;
        }
        ++v48;
      }
      if ( v52 <= 0 || (v55 = Src[SND_PickRandomAliasIndex((const SndAlias **)&Src[v47], v52)], *v44 = (const SndAlias *)v55, (*v46)->contextValue == *(_DWORD *)(v55 + 48)) )
      {
        *v44 = NULL;
LABEL_89:
        *v12 = 0.0;
      }
    }
    else
    {
      v56 = SND_PickRandomAliasIndex((const SndAlias **)aliasArray, v15);
      *v69 = aliasArray[v56];
      if ( v44 && v12 )
      {
        v57 = LODWORD(v73[v56]);
        *v44 = NULL;
        *(_DWORD *)v12 = v57;
      }
    }
  }
}

/*
==============
SND_PickRandomAliasIndex
==============
*/
__int64 SND_PickRandomAliasIndex(const SndAlias **aliasArray, int numAliases)
{
  int v2; 
  int v3; 
  int sequence; 
  unsigned int v7; 
  int v8; 
  __int128 probability_low; 
  int v10; 
  const SndAlias **v11; 
  __int64 v12; 
  float v13; 
  int v14; 
  float v15; 
  __int64 v16; 
  int v17; 
  float v18; 
  __int128 v19; 
  int v20; 
  float v21; 
  __int64 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  float v31; 
  float v32; 
  int v33; 
  int v34; 
  const SndAlias **v35; 
  __int64 v36; 
  int v37; 
  __int128 v38; 
  __int128 v39; 
  int v40; 
  const SndAlias **v41; 
  __int64 v42; 
  float v43; 
  __int128 v44; 
  __int64 v45; 
  float v46; 
  __int128 v47; 
  float probability; 
  __int128 v49; 
  const SndAlias *v50; 
  float v51; 
  __int128 v52; 
  const SndAlias **v53; 
  float v54; 
  __int128 v55; 
  __int64 result; 

  v2 = 0;
  v3 = randSeed;
  sequence = (*aliasArray)->sequence;
  v7 = 0;
  v8 = 1;
  probability_low = LODWORD((*aliasArray)->probability);
  if ( numAliases > 1 )
  {
    if ( numAliases > 4 )
    {
      v10 = numAliases - 3;
      v11 = aliasArray + 3;
      do
      {
        v12 = (__int64)*(v11 - 2);
        v11 += 4;
        v19 = probability_low;
        v13 = *(float *)&probability_low + *(float *)(v12 + 116);
        v14 = *(_DWORD *)(v12 + 72);
        v15 = 32768.0 * *(float *)(v12 + 116);
        v16 = (__int64)*(v11 - 5);
        v17 = 214013 * v3 + 2531011;
        *(float *)&v19 = v13 + *(float *)(v16 + 116);
        v18 = *(float *)&v19;
        v20 = *(_DWORD *)(v16 + 72);
        v21 = 32768.0 * *(float *)(v16 + 116);
        v22 = (__int64)*(v11 - 4);
        if ( sequence >= v14 )
          v14 = sequence;
        v23 = (float)((v17 >> 16) & 0x7FFF) * v13;
        *(float *)&v19 = *(float *)&v19 + *(float *)(v22 + 116);
        v24 = *(float *)&v19;
        v25 = 32768.0 * *(float *)(v22 + 116);
        v26 = (float)(((214013 * v17 + 2531011) >> 16) & 0x7FFF) * v18;
        if ( v14 >= v20 )
          v20 = v14;
        v27 = *(_DWORD *)(v22 + 72);
        v28 = v8;
        v29 = (__int64)*(v11 - 3);
        v30 = 214013 * (214013 * v17 + 2531011) + 2531011;
        *(float *)&v19 = *(float *)&v19 + *(float *)(v29 + 116);
        probability_low = v19;
        if ( v20 >= v27 )
          v27 = v20;
        v31 = (float)((v30 >> 16) & 0x7FFF) * v24;
        v32 = 32768.0 * *(float *)(v29 + 116);
        sequence = *(_DWORD *)(v29 + 72);
        v3 = 214013 * v30 + 2531011;
        if ( v15 <= v23 )
          v28 = v7;
        v33 = v8 + 1;
        v7 = v8 + 3;
        if ( v21 <= v26 )
          v33 = v28;
        v34 = v8 + 2;
        if ( v25 <= v31 )
          v34 = v33;
        if ( v32 <= (float)((float)(((214013 * v30 + 2531011) >> 16) & 0x7FFF) * *(float *)&v19) )
          v7 = v34;
        if ( v27 >= sequence )
          sequence = v27;
        v8 += 4;
      }
      while ( v8 < v10 );
      randSeed = 214013 * v30 + 2531011;
    }
    if ( v8 < numAliases )
    {
      v35 = &aliasArray[v8];
      do
      {
        v36 = (__int64)*v35++;
        v37 = sequence;
        sequence = *(_DWORD *)(v36 + 72);
        v38 = probability_low;
        *(float *)&v38 = *(float *)&probability_low + *(float *)(v36 + 116);
        probability_low = v38;
        v3 = 214013 * v3 + 2531011;
        if ( (float)(32768.0 * *(float *)(v36 + 116)) > (float)((float)((v3 >> 16) & 0x7FFF) * *(float *)&v38) )
          v7 = v8;
        if ( v37 >= sequence )
          sequence = v37;
        ++v8;
      }
      while ( v8 < numAliases );
      randSeed = v3;
    }
  }
  if ( numAliases > 2 && sequence == aliasArray[v7]->sequence )
  {
    v39 = 0i64;
    if ( numAliases >= 4 )
    {
      v40 = 2;
      v41 = aliasArray + 2;
      do
      {
        v42 = (__int64)*(v41 - 2);
        if ( sequence != *(_DWORD *)(v42 + 72) )
        {
          v43 = *(float *)(v42 + 116);
          v44 = v39;
          *(float *)&v44 = *(float *)&v39 + v43;
          v39 = v44;
          v3 = 214013 * v3 + 2531011;
          randSeed = v3;
          if ( (float)(32768.0 * v43) > (float)((float)((v3 >> 16) & 0x7FFF) * *(float *)&v44) )
            v7 = v2;
        }
        v45 = (__int64)*(v41 - 1);
        if ( sequence != *(_DWORD *)(v45 + 72) )
        {
          v46 = *(float *)(v45 + 116);
          v47 = v39;
          *(float *)&v47 = *(float *)&v39 + v46;
          v39 = v47;
          v3 = 214013 * v3 + 2531011;
          randSeed = v3;
          if ( (float)((float)((v3 >> 16) & 0x7FFF) * *(float *)&v47) < (float)(32768.0 * v46) )
            v7 = v40 - 1;
        }
        if ( sequence != (*v41)->sequence )
        {
          probability = (*v41)->probability;
          v49 = v39;
          *(float *)&v49 = *(float *)&v39 + probability;
          v39 = v49;
          v3 = 214013 * v3 + 2531011;
          randSeed = v3;
          if ( (float)(32768.0 * probability) > (float)((float)((v3 >> 16) & 0x7FFF) * *(float *)&v49) )
            v7 = v40;
        }
        v50 = v41[1];
        if ( sequence != v50->sequence )
        {
          v51 = v50->probability;
          v52 = v39;
          *(float *)&v52 = *(float *)&v39 + v51;
          v39 = v52;
          v3 = 214013 * v3 + 2531011;
          randSeed = v3;
          if ( (float)((float)((v3 >> 16) & 0x7FFF) * *(float *)&v52) < (float)(32768.0 * v51) )
            v7 = v40 + 1;
        }
        v41 += 4;
        v2 += 4;
        v40 += 4;
      }
      while ( v2 < numAliases - 3 );
    }
    if ( v2 < numAliases )
    {
      v53 = &aliasArray[v2];
      do
      {
        if ( sequence != (*v53)->sequence )
        {
          v54 = (*v53)->probability;
          v55 = v39;
          *(float *)&v55 = *(float *)&v39 + v54;
          v39 = v55;
          v3 = 214013 * v3 + 2531011;
          randSeed = v3;
          if ( (float)(32768.0 * v54) > (float)((float)((v3 >> 16) & 0x7FFF) * *(float *)&v55) )
            v7 = v2;
        }
        ++v53;
        ++v2;
      }
      while ( v2 < numAliases );
    }
  }
  result = v7;
  aliasArray[v7]->sequence = sequence + 1;
  return result;
}

/*
==============
SND_PickSoundAlias
==============
*/
void SND_PickSoundAlias(const char *aliasname, const LocalClientNum_t localClientNum, const int entityNum, const vec3_t *origin, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp)
{
  float v10; 
  SndPlayParams inParams; 

  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.aliasId = 0;
  inParams.playbackType = SPT_BLEND;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.aliasList = SND_FindAlias(aliasname);
  inParams.sndEnt = CG_GenerateSndEntHandle(localClientNum, entityNum);
  if ( origin )
  {
    v10 = origin->v[1];
    inParams.org.v[0] = origin->v[0];
    inParams.org.v[2] = origin->v[2];
    inParams.org.v[1] = v10;
  }
  SND_PickSoundAliasFromList(inParams.aliasList, &inParams, outAliasA, outAliasB, outLerp, 0, 0, 0, 0);
}

/*
==============
SND_PickSoundAliasContext
==============
*/
__int64 SND_PickSoundAliasContext(const SndAlias **aliasArrayIn, const SndAlias **aliasArrayOut, const int aliasCount, const int contextIndex, const SndEntState *entState, const ZoneDef *zone, const unsigned int specType, const unsigned int specValue)
{
  int v8; 
  int v9; 
  const SndAlias **v10; 
  const SndAlias **v11; 
  int v12; 
  unsigned int contextValue1; 
  __int64 v14; 
  SndContext *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  float v26; 
  double v27; 
  SndContext *Context; 
  bool includeDefaultsInRandom; 
  char *v30; 
  int *v31; 
  __int64 v32; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  const SndAlias **v42; 
  unsigned int type[2]; 
  _DWORD v44[2]; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  const SndAlias **v49; 
  char Src[512]; 
  char v51[512]; 
  char v52[512]; 

  v8 = 0;
  v9 = 0;
  v10 = aliasArrayOut;
  v49 = aliasArrayOut;
  v11 = aliasArrayIn;
  v40 = 0;
  v12 = 0;
  v37 = contextIndex;
  contextValue1 = 0;
  v14 = aliasCount;
  v15 = NULL;
  v42 = aliasArrayIn;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  if ( contextIndex > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14587, ASSERT_TYPE_ASSERT, "(SND_MAX_ALIAS_CONTEXTS >= contextIndex)", (const char *)&queryFormat, "SND_MAX_ALIAS_CONTEXTS >= contextIndex") )
      __debugbreak();
    v11 = v42;
    contextIndex = v37;
  }
  v48 = v14;
  if ( (int)v14 > 0 )
  {
    v16 = 0i64;
    v17 = contextIndex;
    v46 = contextIndex;
    v45 = 0i64;
    while ( 1 )
    {
      v18 = (__int64)v11[v16];
      v47 = v18;
      type[0] = *(_DWORD *)(v18 + 44);
      type[1] = *(_DWORD *)(v18 + 52);
      v44[0] = *(_DWORD *)(v18 + 48);
      v44[1] = *(_DWORD *)(v18 + 56);
      if ( (unsigned int)contextIndex >= 2 )
      {
        LODWORD(v35) = 2;
        LODWORD(v34) = contextIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14595, ASSERT_TYPE_ASSERT, "(unsigned)( contextIndex ) < (unsigned)( ( sizeof( *array_counter( contextTypes ) ) + 0 ) )", "contextIndex doesn't index ARRAY_COUNT( contextTypes )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      v19 = type[v17];
      v20 = v36;
      v21 = v44[v46];
      v41 = v21;
      if ( v36 != v19 )
        break;
LABEL_41:
      if ( !v19 )
      {
        v30 = v52;
        v31 = &v40;
LABEL_56:
        v32 = *v31;
        if ( (int)v32 >= 64 )
        {
          Com_PrintError(9, "Sound alias list %s has too many variants.  Must be < %u\n", *(const char **)v18, 64i64);
        }
        else
        {
          *(_QWORD *)&v30[8 * v32] = v18;
          *v31 = v32 + 1;
        }
        goto LABEL_59;
      }
      if ( v15 )
      {
        if ( v21 || !v15->allowDefaults )
        {
          if ( (v19 != specType || v21 != specValue) && (v20 != v19 || contextValue1 != v21) )
            goto LABEL_59;
          v30 = Src;
          v31 = &v38;
        }
        else
        {
          includeDefaultsInRandom = v15->includeDefaultsInRandom;
          v30 = v51;
          if ( includeDefaultsInRandom )
            v30 = Src;
          v31 = &v39;
          if ( includeDefaultsInRandom )
            v31 = &v38;
        }
        goto LABEL_56;
      }
LABEL_59:
      contextIndex = v37;
      v16 = v45 + 1;
      v17 = v37;
      v11 = v42;
      v45 = v16;
      if ( v16 >= v48 )
      {
        v8 = v38;
        v12 = v39;
        v9 = v40;
        v10 = v49;
        goto LABEL_61;
      }
    }
    v36 = v19;
    if ( entState )
    {
      v22 = 0;
      v23 = 0i64;
      while ( entState->contextTypes[v23] != v19 )
      {
        ++v22;
        ++v23;
        if ( v22 >= 3 )
          goto LABEL_15;
      }
      v25 = entState->contextFadeLength[v23];
      v26 = FLOAT_1_0;
      if ( v25 > 0 )
      {
        v27 = I_fclamp((float)(entState->contextFadeTime[v23] - g_snd.time) / (float)v25, 0.0, 1.0);
        v26 = 1.0 - *(float *)&v27;
      }
      contextValue1 = entState->contextValuesTo[v23];
      if ( contextValue1 || v26 != 1.0 && entState->contextValuesFrom[v23] )
      {
        if ( v26 < 0.5 )
          contextValue1 = entState->contextValuesFrom[v23];
        goto LABEL_40;
      }
    }
LABEL_15:
    v24 = SND_FindContextIndex(v19);
    if ( v24 >= 0 )
    {
      contextValue1 = g_snd.globalContextsTo[v24];
      if ( contextValue1 || 1.0 != g_snd.globalContextLerp[v24].current && g_snd.globalContextsFrom[v24] )
      {
        if ( g_snd.globalContextLerp[v24].current < 0.5 )
          contextValue1 = g_snd.globalContextsFrom[v24];
        goto LABEL_40;
      }
    }
    if ( zone )
    {
      if ( zone->contextType1 == v19 )
      {
        contextValue1 = zone->contextValue1;
LABEL_40:
        Context = SND_GetContext(v19);
        v18 = v47;
        v15 = Context;
        v21 = v41;
        v20 = v19;
        goto LABEL_41;
      }
      if ( zone->contextType2 == v19 )
      {
        contextValue1 = zone->contextValue2;
        goto LABEL_40;
      }
      if ( zone->contextType3 == v19 )
      {
        contextValue1 = zone->contextValue3;
        goto LABEL_40;
      }
      if ( zone->contextType4 == v19 )
      {
        contextValue1 = zone->contextValue4;
        goto LABEL_40;
      }
    }
    contextValue1 = 0;
    goto LABEL_40;
  }
LABEL_61:
  if ( v8 <= 0 )
  {
    if ( v12 <= 0 )
    {
      if ( v9 <= 0 )
      {
        return 0i64;
      }
      else
      {
        memcpy_0(v10, v52, 8i64 * v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      memcpy_0(v10, v51, 8i64 * v12);
      return (unsigned int)v12;
    }
  }
  else
  {
    memcpy_0(v10, Src, 8i64 * v8);
    return (unsigned int)v8;
  }
}

/*
==============
SND_PickSoundAliasFromList
==============
*/
void SND_PickSoundAliasFromList(const SndAliasList *aliasList, const SndPlayParams *inParams, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp)
{
  SND_PickSoundAliasFromList(aliasList, inParams, outAliasA, outAliasB, outLerp, 0, 0, 0, 0);
}

/*
==============
SND_PickSoundAliasFromList
==============
*/
void SND_PickSoundAliasFromList(const SndAliasList *aliasList, const SndPlayParams *inParams, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp, const unsigned int specType1, const unsigned int specValue1, const unsigned int specType2, const unsigned int specValue2)
{
  SndEntState *entState; 
  int surfaceType; 
  int v13; 
  __int64 v14; 
  __int64 count; 
  char v16; 
  int v17; 
  SndAlias *head; 
  __int64 v19; 
  unsigned int *p_contextType; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  SndAlias *v25; 
  __int64 v26; 
  unsigned __int64 *p_surfaceFlags; 
  unsigned __int64 v28; 
  signed int v29; 
  unsigned int v30; 
  char v31; 
  __int64 v32; 
  SndAlias *v33; 
  __int64 v34; 
  bool AudioZoneAtPoint; 
  ZoneDef *zoneA; 
  ZoneDef *zoneB; 
  SndAlias **v38; 
  SndAlias **p_aliasArrayOut; 
  int v40; 
  __int64 v41; 
  SndAlias **v42; 
  int v43; 
  float v44; 
  int v45; 
  unsigned int specValue[2]; 
  ZoneDef *outZoneA; 
  ZoneDef *outZoneB; 
  SndAlias **v49; 
  unsigned int v50[2]; 
  SndAlias *aliases[64]; 
  SndAlias *aliasArrayOut; 

  entState = NULL;
  v49 = (SndAlias **)outAliasA;
  *(_QWORD *)specValue = inParams;
  *outAliasA = NULL;
  if ( outAliasB && outLerp )
  {
    *outAliasB = NULL;
    *outLerp = 0.0;
  }
  if ( !aliasList )
    return;
  surfaceType = inParams->surfaceType;
  v13 = 0;
  if ( (unsigned int)(surfaceType + 1) <= 1 )
    v14 = 0i64;
  else
    v14 = 1i64 << surfaceType;
  count = aliasList->count;
  v16 = 0;
  v45 = 0;
  v17 = 0;
  if ( (int)count <= 0 )
    goto LABEL_30;
  head = aliasList->head;
  v19 = 0i64;
  p_contextType = &head->contextType;
  while ( !p_contextType[2] )
  {
    if ( *p_contextType )
    {
      v17 = 1;
      v45 = 1;
    }
    if ( v16 || *(_QWORD *)(p_contextType + 5) )
      v16 = 1;
    ++v19;
    p_contextType += 58;
    if ( v19 >= count )
      goto LABEL_19;
  }
  v17 = 2;
  v45 = 2;
LABEL_19:
  if ( !v16 || !v14 || (int)count <= 0 )
    goto LABEL_30;
  v21 = 0i64;
  v22 = 0i64;
  while ( (v14 & head->surfaceFlags) == 0 )
  {
LABEL_26:
    ++v22;
    ++head;
    if ( v22 >= count )
      goto LABEL_29;
  }
  if ( v21 < 64 )
  {
    ++v13;
    aliases[v21++] = head;
    goto LABEL_26;
  }
  Com_PrintError(9, "Too many variants for aliaslist %s\n", aliasList->aliasName);
LABEL_29:
  if ( v13 )
    goto LABEL_38;
LABEL_30:
  v23 = aliasList->count;
  v24 = 0;
  if ( v23 <= 0 )
    goto LABEL_38;
  v25 = aliasList->head;
  v26 = 0i64;
  p_surfaceFlags = &v25->surfaceFlags;
  while ( 2 )
  {
    if ( *p_surfaceFlags )
    {
LABEL_35:
      ++v24;
      p_surfaceFlags += 29;
      if ( v24 >= v23 )
        goto LABEL_38;
      continue;
    }
    break;
  }
  if ( v26 < 64 )
  {
    ++v13;
    aliases[v26++] = &v25[v24];
    goto LABEL_35;
  }
  Com_PrintError(9, "Too many variants for aliaslist %s\n", aliasList->aliasName);
LABEL_38:
  v28 = *(_QWORD *)(*(_QWORD *)specValue + 32i64) & 0x1FFFFFFFFi64;
  if ( (v28 - 5411 <= 0x1F || v28 - 2049 <= 0x8FF || v28 <= 0x7FD || v28 - 5571 <= 0x7A120) && v28 - 2046 > 2 && v28 < 0x7B6E4 && v28 - 4353 > 0x421 && v28 - 5443 > 0x7F )
  {
    entState = g_snd.entState;
    v29 = 0;
    v30 = 0;
    while ( *(_QWORD *)(*(_QWORD *)specValue + 32i64) != entState->handle )
    {
      v31 = 0;
      v32 = 0i64;
      while ( !entState->contextTypes[v32] )
      {
        if ( ++v32 >= 3 )
          goto LABEL_53;
      }
      v31 = 1;
LABEL_53:
      if ( (signed int)(g_snd.frame - entState->lastUsed) > v29 && !v31 )
        v29 = g_snd.frame - entState->lastUsed;
      ++v30;
      ++entState;
      if ( v30 >= 0x80 )
      {
        entState = NULL;
        break;
      }
    }
  }
  v33 = aliasList->head;
  v44 = 0.0;
  outZoneA = NULL;
  outZoneB = NULL;
  if ( SND_IsEntChannel3D((unsigned __int8)(v33->flags >> 10)) )
  {
    if ( entState )
      v34 = (entState->handle >> 33) & 3;
    else
      LODWORD(v34) = 0;
    AudioZoneAtPoint = CG_FindAudioZoneAtPoint((LocalClientNum_t)v34, (const vec3_t *)(*(_QWORD *)specValue + 40i64), (const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &v44);
  }
  else
  {
    AudioZoneAtPoint = CG_GetCurrentAudioZone((const ZoneDef **)&outZoneA, (const ZoneDef **)&outZoneB, &v44);
  }
  if ( AudioZoneAtPoint )
  {
    zoneA = outZoneA;
    zoneB = outZoneB;
  }
  else
  {
    zoneA = NULL;
    zoneB = NULL;
    outZoneA = NULL;
    outZoneB = NULL;
  }
  if ( v17 == 1 && !v16 && outAliasB && outLerp )
  {
    SND_PickBlendedContextSoundAlias((const SndAlias **)aliases, v13, entState, (const vec3_t *)(*(_QWORD *)specValue + 40i64), zoneA, zoneB, v44, (const SndAlias **)v49, outAliasB, outLerp);
  }
  else
  {
    v38 = aliases;
    if ( v44 > 0.5 )
      zoneA = zoneB;
    p_aliasArrayOut = &aliasArrayOut;
    v40 = 0;
    v50[0] = specType1;
    v50[1] = specType2;
    specValue[0] = specValue1;
    specValue[1] = specValue2;
    if ( v45 > 0 )
    {
      v41 = 0i64;
      do
      {
        v13 = SND_PickSoundAliasContext((const SndAlias **)v38, (const SndAlias **)p_aliasArrayOut, v13, v40, entState, zoneA, v50[v41], specValue[v41]);
        ++v41;
        v42 = p_aliasArrayOut;
        ++v40;
        p_aliasArrayOut = v38;
        v38 = v42;
      }
      while ( v40 < v45 );
    }
    if ( v13 )
    {
      v43 = SND_PickRandomAliasIndex((const SndAlias **)v38, v13);
      *v49 = v38[v43];
    }
    else
    {
      *v49 = NULL;
    }
  }
}

/*
==============
SND_PickSoundAliasFromList
==============
*/
void SND_PickSoundAliasFromList(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entityNum, const vec3_t *inOrigin, const SndAlias **outAliasA, const SndAlias **outAliasB, float *outLerp)
{
  unsigned __int64 SndEntHandle; 
  float v10; 
  SndPlayParams inParams; 

  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.aliasList = aliasList;
  inParams.aliasId = 0;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.playbackType = SPT_BLEND;
  inParams.sndEnt = 0i64;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entityNum);
  v10 = inOrigin->v[1];
  inParams.org.v[0] = inOrigin->v[0];
  inParams.org.v[2] = inOrigin->v[2];
  inParams.org.v[1] = v10;
  inParams.sndEnt = SndEntHandle;
  SND_PickSoundAliasFromList(aliasList, &inParams, outAliasA, outAliasB, outLerp, 0, 0, 0, 0);
}

/*
==============
SND_PlayAmbientAlias
==============
*/
void SND_PlayAmbientAlias(LocalClientNum_t localClientNum, const char *aliasName, float volumeScale, int fadeTime, bool isExclusive, snd_alias_system_t system)
{
  const dvar_t *v9; 
  int v10; 
  SndAlias *v11; 
  unsigned int secondaryId; 
  float v13; 
  const SndAliasList *AliasFromId; 
  int v15; 
  int v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  int v21; 
  int v22; 
  int v23; 
  SndAlias *v24; 
  int v25; 
  int AmbientTrack; 
  double v27; 
  int v28; 
  int v29; 
  unsigned int secondaryGroupId; 
  __int64 v31; 
  int v32; 
  const SndAlias *v33; 
  SndAlias **outAliasB; 
  float *outLerp; 
  unsigned int v36; 
  ScopedCriticalSection v37; 
  int fadetime; 
  LocalClientNum_t localClientNuma; 
  SndAlias *outAliasA[2]; 
  ScopedCriticalSection v41; 
  ScopedCriticalSection inOrigin; 

  outAliasA[1] = (SndAlias *)-2i64;
  fadetime = fadeTime;
  localClientNuma = localClientNum;
  if ( g_snd.driverInitialized )
  {
    v9 = DCONST_DVARBOOL_snd_enable_capture_mode;
    if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled )
    {
      v10 = 0;
      SND_PickSoundAlias(aliasName, localClientNum, 2047, NULL, (const SndAlias **)outAliasA, NULL, NULL);
      v11 = outAliasA[0];
      if ( outAliasA[0] )
      {
        secondaryId = outAliasA[0]->secondaryId;
        v36 = secondaryId;
        v13 = 0.0;
        if ( secondaryId )
        {
          *(float *)&inOrigin._s = 0.0;
          *(float *)&inOrigin._hasOwnership = 0.0;
          *(float *)&inOrigin._next = 0.0;
          AliasFromId = SND_FindAliasFromId(secondaryId);
          SND_PickSoundAliasFromList(AliasFromId, localClientNum, 2047, (const vec3_t *)&inOrigin, (const SndAlias **)&v37._next, NULL, NULL);
        }
        else
        {
          v37._next = NULL;
        }
        *(_QWORD *)&v37._s = v11;
        if ( fadeTime < 0 )
        {
          LODWORD(outAliasB) = fadeTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6576, ASSERT_TYPE_ASSERT, "( ( fadeTime >= 0 ) )", "( fadeTime ) = %i", outAliasB) )
            __debugbreak();
        }
        if ( (g_snd.ambient_track & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6577, ASSERT_TYPE_ASSERT, "(g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_0 || g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_1)", (const char *)&queryFormat, "g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_0 || g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_1") )
          __debugbreak();
        ScopedCriticalSection::ScopedCriticalSection(&v41, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
        v15 = 0;
        v16 = -1;
        v17 = 0;
        v18 = 1;
        do
        {
          if ( !v18 )
          {
            LODWORD(outLerp) = 2;
            LODWORD(outAliasB) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6249, ASSERT_TYPE_ASSERT, "(unsigned)( number ) < (unsigned)( 2 )", "number doesn't index SND_NUM_AMBIENT_TRACKS\n\t%i not in [0, %i)", outAliasB, outLerp) )
              __debugbreak();
          }
          v19 = 80i64;
          if ( v17 )
            v19 = 82i64;
          v20 = sdGlob.voiceAlloc[v19];
          v21 = v15 + 1;
          if ( v20 )
            v21 = v15;
          v15 = v21;
          v22 = v17 != 0 ? 2 : 0;
          if ( v20 )
            v22 = v16;
          v16 = v22;
          v18 = (unsigned int)++v17 < 2;
        }
        while ( v17 < 2 );
        v23 = fadetime;
        v24 = outAliasA[0];
        if ( v21 != 2 )
        {
          v25 = 0;
          while ( 1 )
          {
            AmbientTrack = SND_GetAmbientTrack(v25);
            if ( SND_IsAliasPlayingOnTrack(v24->aliasName, AmbientTrack) )
              break;
            if ( ++v25 >= 2 )
              goto LABEL_31;
          }
          SND_SetBackgroundTrackVolumeScale(AmbientTrack, volumeScale, v23);
          if ( !isExclusive )
            goto LABEL_74;
          if ( AmbientTrack )
          {
            if ( AmbientTrack != 2 )
              goto LABEL_74;
            SND_StopBackground(0, v23);
            SND_StopBackground(1, v23);
            if ( v36 )
              goto LABEL_74;
            ScopedCriticalSection::ScopedCriticalSection(&v37, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
            if ( sdGlob.voiceAlloc[83] )
            {
              SND_DebugAliasPrint(g_snd.voices[83].alias != NULL, g_snd.voices[83].alias, "Stop voice requested by SND_StopBackground()");
              SND_StopVoice(83);
            }
          }
          else
          {
            SND_StopBackground(2, v23);
            SND_StopBackground(3, v23);
            if ( v36 )
            {
LABEL_74:
              ScopedCriticalSection::~ScopedCriticalSection(&v41);
              return;
            }
            ScopedCriticalSection::ScopedCriticalSection(&v37, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
            if ( sdGlob.voiceAlloc[81] )
            {
              SND_DebugAliasPrint(g_snd.voices[81].alias != NULL, g_snd.voices[81].alias, "Stop voice requested by SND_StopBackground()");
              SND_StopVoice(81);
            }
          }
          ScopedCriticalSection::~ScopedCriticalSection(&v37);
          goto LABEL_74;
        }
LABEL_31:
        if ( (v24->flags & 2) != 0 )
        {
          v27 = I_random();
          v13 = *(float *)&v27;
        }
        if ( isExclusive )
        {
          if ( !v15 )
          {
            ScopedCriticalSection::ScopedCriticalSection(&inOrigin, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
            if ( v16 )
            {
              if ( sdGlob.voiceAlloc[80] )
              {
                SND_DebugAliasPrint(g_snd.voices[80].alias != NULL, g_snd.voices[80].alias, "Stop voice requested by SND_StopBackground()");
                SND_StopVoice(80);
              }
              ScopedCriticalSection::~ScopedCriticalSection(&inOrigin);
              ScopedCriticalSection::ScopedCriticalSection(&inOrigin, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
              if ( sdGlob.voiceAlloc[81] )
              {
                SND_DebugAliasPrint(g_snd.voices[81].alias != NULL, g_snd.voices[81].alias, "Stop voice requested by SND_StopBackground()");
                SND_StopVoice(81);
              }
              ScopedCriticalSection::~ScopedCriticalSection(&inOrigin);
              SND_StopBackground(2, v23);
              SND_StopBackground(3, v23);
              v16 = 0;
            }
            else
            {
              if ( sdGlob.voiceAlloc[82] )
              {
                SND_DebugAliasPrint(g_snd.voices[82].alias != NULL, g_snd.voices[82].alias, "Stop voice requested by SND_StopBackground()");
                SND_StopVoice(82);
              }
              ScopedCriticalSection::~ScopedCriticalSection(&inOrigin);
              ScopedCriticalSection::ScopedCriticalSection(&inOrigin, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
              if ( sdGlob.voiceAlloc[83] )
              {
                SND_DebugAliasPrint(g_snd.voices[83].alias != NULL, g_snd.voices[83].alias, "Stop voice requested by SND_StopBackground()");
                SND_StopVoice(83);
              }
              ScopedCriticalSection::~ScopedCriticalSection(&inOrigin);
              SND_StopBackground(0, v23);
              SND_StopBackground(1, v23);
              v16 = 2;
            }
            goto LABEL_67;
          }
          if ( v15 == 1 )
          {
            if ( !v16 )
            {
              SND_StopBackground(2, v23);
              SND_StopBackground(3, v23);
LABEL_67:
              secondaryGroupId = g_snd.secondaryGroupCounter;
              do
                ++secondaryGroupId;
              while ( !secondaryGroupId );
              g_snd.secondaryGroupCounter = secondaryGroupId;
              v31 = 0i64;
              v32 = v16;
              do
              {
                v33 = (const SndAlias *)*((_QWORD *)&v37._s + v31);
                if ( v33 )
                {
                  SND_StartBackground(localClientNuma, v32, v33, volumeScale, v23, v13, system, secondaryGroupId);
                  g_snd.ambient_track = v16;
                  ++v10;
                }
                ++v32;
                ++v31;
              }
              while ( v31 < 2 );
              SD_SetSecondaryGroupInfo(v16 + 80, v10);
              SND_UnpauseVoiceThatWasStartedPaused(v16 + 80);
              SND_UnpauseVoiceThatWasStartedPaused(v16 + 81);
              goto LABEL_74;
            }
            SND_StopBackground(0, v23);
            v28 = v23;
            v29 = 1;
            goto LABEL_63;
          }
        }
        else if ( !v15 )
        {
          v16 = g_snd.ambient_track != 0 ? 2 : 0;
          v28 = 0;
          v29 = v16;
LABEL_63:
          SND_StopBackground(v29, v28);
        }
        if ( v16 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6682, ASSERT_TYPE_ASSERT, "(freeTrack != (-1))", (const char *)&queryFormat, "freeTrack != SND_TRACK_NONE") )
          __debugbreak();
        goto LABEL_67;
      }
    }
  }
}

/*
==============
SND_PlayAmbientAliasBlended
==============
*/
void SND_PlayAmbientAliasBlended(LocalClientNum_t localClientNum, const char *aliasNameFrom, const char *aliasNameTo, float lerp, bool isExclusive, snd_alias_system_t system)
{
  float v7; 
  SndAlias *v11; 
  __int64 v12; 
  const dvar_t *v13; 
  int v14; 
  float v15; 
  int v16; 
  int v17; 
  int v18; 
  bool v19; 
  int v20; 
  __int64 v21; 
  unsigned int secondaryId; 
  const SndAliasList *AliasFromId; 
  LocalClientNum_t v24; 
  unsigned int v25; 
  const SndAliasList *v26; 
  unsigned int v27; 
  __int64 *v28; 
  __int64 v29; 
  unsigned int secondaryGroupId; 
  float v32; 
  __int64 v33; 
  unsigned int started; 
  int v37; 
  SndAlias **outAliasB; 
  float *outLerp; 
  SndAlias *outAliasA; 
  SndAlias *v42; 
  SndAlias *v43; 
  int v44; 
  float v45; 
  int v46; 
  __int64 v47; 
  SndAlias *v48; 
  char v49; 
  float v50; 
  int v51; 
  __int64 v52; 
  ScopedCriticalSection v53; 
  vec3_t inOrigin; 

  v52 = -2i64;
  v7 = lerp;
  v11 = NULL;
  outAliasA = NULL;
  v12 = 0i64;
  *(_QWORD *)inOrigin.v = 0i64;
  if ( g_snd.driverInitialized )
  {
    v13 = DCONST_DVARBOOL_snd_enable_capture_mode;
    if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled )
    {
      if ( aliasNameFrom )
      {
        SND_PickSoundAlias(aliasNameFrom, localClientNum, 2046, NULL, (const SndAlias **)&outAliasA, NULL, NULL);
        v11 = outAliasA;
      }
      if ( aliasNameTo )
      {
        SND_PickSoundAlias(aliasNameTo, localClientNum, 2046, NULL, (const SndAlias **)&inOrigin, NULL, NULL);
        v12 = *(_QWORD *)inOrigin.v;
      }
      ScopedCriticalSection::ScopedCriticalSection(&v53, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
      if ( (g_snd.ambient_track & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6395, ASSERT_TYPE_ASSERT, "(g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_0 || g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_1)", (const char *)&queryFormat, "g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_0 || g_snd.ambient_track == SND_TRACK_AMBIENT_PRIMARY_1") )
        __debugbreak();
      v14 = 0;
      v15 = 1.0 - lerp;
      LOBYTE(v44) = 0;
      v49 = 0;
      v16 = -1;
      v46 = -1;
      v51 = -1;
      v17 = -1;
      v18 = 0;
      v19 = 1;
      while ( 1 )
      {
        if ( !v19 )
        {
          LODWORD(outLerp) = 2;
          LODWORD(outAliasB) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6249, ASSERT_TYPE_ASSERT, "(unsigned)( number ) < (unsigned)( 2 )", "number doesn't index SND_NUM_AMBIENT_TRACKS\n\t%i not in [0, %i)", outAliasB, outLerp) )
            __debugbreak();
        }
        v20 = v18 != 0 ? 2 : 0;
        v21 = 80i64;
        if ( v18 )
          v21 = 82i64;
        if ( !sdGlob.voiceAlloc[v21] )
          break;
        if ( v11 && SND_IsAliasPlayingOnTrack(v11->aliasName, v20) && v16 == -1 )
        {
          v16 = v18 != 0 ? 2 : 0;
          ++v14;
          LOBYTE(v44) = 1;
LABEL_29:
          v20 = v51;
          goto LABEL_30;
        }
        if ( !v12 || !SND_IsAliasPlayingOnTrack(*(const char **)v12, v20) || v51 != -1 )
          break;
        v51 = v18 != 0 ? 2 : 0;
        ++v14;
        v49 = 1;
LABEL_30:
        v19 = (unsigned int)++v18 < 2;
        if ( v18 >= 2 )
        {
          v46 = v16;
          if ( v11 == (SndAlias *)v12 && v14 > 0 )
          {
            v15 = FLOAT_1_0;
            v7 = FLOAT_1_0;
            v14 = 2;
          }
          if ( v16 != -1 )
            SND_SetBackgroundTrackVolumeScale(v16, v15, 0);
          if ( v20 != -1 )
            SND_SetBackgroundTrackVolumeScale(v20, v7, 0);
          if ( v14 < 2 )
          {
            v45 = v15;
            v50 = v7;
            v42 = v11;
            inOrigin.v[0] = 0.0;
            inOrigin.v[1] = 0.0;
            inOrigin.v[2] = 0.0;
            if ( v11 && (secondaryId = v11->secondaryId) != 0 )
            {
              AliasFromId = SND_FindAliasFromId(secondaryId);
              v24 = localClientNum;
              SND_PickSoundAliasFromList(AliasFromId, localClientNum, 2047, &inOrigin, (const SndAlias **)&v43, NULL, NULL);
            }
            else
            {
              v43 = NULL;
              v24 = localClientNum;
            }
            v47 = v12;
            if ( v12 && (v25 = *(_DWORD *)(v12 + 36)) != 0 )
            {
              v26 = SND_FindAliasFromId(v25);
              SND_PickSoundAliasFromList(v26, v24, 2047, &inOrigin, (const SndAlias **)&v48, NULL, NULL);
            }
            else
            {
              v48 = NULL;
            }
            if ( v17 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6492, ASSERT_TYPE_ASSERT, "(trackToPlay != (-1))", (const char *)&queryFormat, "trackToPlay != SND_TRACK_NONE") )
              __debugbreak();
            v27 = 0;
            v28 = (__int64 *)&v42;
            do
            {
              v29 = *v28;
              if ( *v28 )
              {
                if ( (*(_BYTE *)(v29 + 112) & 2) != 0 )
                {
                  *(double *)&_XMM0 = I_random();
                  _XMM6 = _XMM0;
                }
                else
                {
                  _XMM6 = 0i64;
                }
                if ( !*((_BYTE *)v28 + 16) )
                {
                  secondaryGroupId = g_snd.secondaryGroupCounter;
                  do
                    ++secondaryGroupId;
                  while ( !secondaryGroupId );
                  g_snd.secondaryGroupCounter = secondaryGroupId;
                  v32 = *((float *)v28 + 5);
                  if ( SND_StartBackground(v24, v17, (const SndAlias *)v29, v32, 0, *(float *)&_XMM6, system, secondaryGroupId) && (v33 = v28[1]) != 0 )
                  {
                    _XMM0 = *(_BYTE *)(v33 + 112) & 2;
                    __asm
                    {
                      vpcmpeqd xmm2, xmm0, xmm1
                      vblendvps xmm0, xmm6, xmm8, xmm2
                    }
                    started = SND_StartBackground(v24, v17 + 1, (const SndAlias *)v33, v32, 0, *(float *)&_XMM0, system, secondaryGroupId);
                    v37 = v17 + 80;
                    if ( started )
                    {
                      SD_SetSecondaryGroupInfo(v37, 1);
                      SND_UnpauseVoiceThatWasStartedPaused(v17 + 81);
                    }
                    SND_UnpauseVoiceThatWasStartedPaused(v37);
                  }
                  else
                  {
                    SND_UnpauseVoiceThatWasStartedPaused(v17 + 80);
                    SND_StopBackground(v17 + 1, 0);
                  }
                  g_snd.ambient_track = v17;
                }
              }
              ++v27;
              v28 += 4;
            }
            while ( v27 < 2 );
          }
          ScopedCriticalSection::~ScopedCriticalSection(&v53);
          return;
        }
      }
      v17 = v18 != 0 ? 2 : 0;
      goto LABEL_29;
    }
  }
}

/*
==============
SND_PlayAmbientElement
==============
*/
void SND_PlayAmbientElement(const LocalClientNum_t localClientNum, const AmbientElement *elem)
{
  __int64 v3; 
  double v4; 
  float coneMax; 
  float v6; 
  float coneMin; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  const SndAliasList *Alias; 
  unsigned __int64 SndEntHandle; 
  cg_t *LocalClientGlobals; 
  __int64 v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  int *p_playTime; 
  int v23; 
  const AmbientDef *ambientDef; 
  float volume[4]; 
  SndPlayParams inParams; 
  vec3_t angles; 
  vec3_t forward; 

  v3 = localClientNum;
  v4 = I_flrand(elem->rangeMin, elem->rangeMax);
  coneMax = elem->coneMax;
  v6 = *(float *)&v4;
  if ( coneMax <= 0.0 )
  {
    coneMax = FLOAT_360_0;
    coneMin = 0.0;
  }
  else
  {
    coneMin = elem->coneMin;
  }
  v8 = I_flrand(coneMin, coneMax);
  angles.v[0] = 0.0;
  angles.v[1] = *(float *)&v8;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  v9 = v6 * forward.v[0];
  v10 = v6 * forward.v[1];
  v11 = v6 * forward.v[2];
  Alias = SND_FindAlias(elem->aliasName);
  if ( Alias )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)v3, (int)v3 + 4353);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    if ( !LocalClientGlobals->renderingThirdPerson || (v15 = 366208i64, LocalClientGlobals->playerTeleported) )
      v15 = 27036i64;
    v16 = v9 + *(float *)((char *)&LocalClientGlobals->__vftable + v15);
    v17 = v10 + *(float *)((char *)&LocalClientGlobals->__vftable + v15 + 4);
    v18 = v11 + *(float *)((char *)&LocalClientGlobals->predictedPlayerState.commandTime + v15);
    v19 = 0;
    inParams.playbackType = SPT_BLEND;
    *(_OWORD *)&inParams.volumeScale = _xmm;
    inParams.aliasId = 0;
    inParams.timeshift = 0;
    inParams.lpfCutoff = FLOAT_N1_0;
    inParams.hpfCutoff = FLOAT_N1_0;
    inParams.startOffsetFraction = 0.0;
    inParams.org.v[0] = v16;
    inParams.org.v[1] = v17;
    inParams.org.v[2] = v18;
    inParams.adsrIndex = -1;
    inParams.fadeTime = 0;
    inParams.system = SASYS_CGAME;
    inParams.autoSimId = -1;
    inParams.autoSimTimeStamp = 0i64;
    inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
    inParams.startPaused = 0;
    inParams.additionalStartDelayUs = 0;
    *(_QWORD *)&inParams.surfaceType = -1i64;
    inParams.contextIndex2 = -1;
    inParams.reflectionClass = 0;
    *(_WORD *)&inParams.isADS = 0;
    inParams.aliasList = Alias;
    inParams.sndEnt = SndEntHandle;
    v20 = SND_PlaySoundAliasFromParams(&inParams, 0);
    v21 = v3;
    g_ambGlob[v21].playbackId = v20;
    if ( v20 )
    {
      volume[0] = g_ambGlob[v21].strength;
      SND_SetEntityParamInfoData(SndEntHandle, NULL, volume, 1000);
      p_playTime = &g_ambGlob[v21].playTime;
      SND_GetLengthMS(g_ambGlob[v21].playbackId, p_playTime);
      v23 = *p_playTime;
      g_ambGlob[v21].playTimeFound = *p_playTime != 0;
      ambientDef = g_ambGlob[v21].ambientDef;
      *p_playTime = g_snd.time + v23;
      if ( ambientDef )
        v19 = *p_playTime + I_irand((int)(float)(1000.0 * ambientDef->timeMin), (int)(float)(1000.0 * ambientDef->timeMax));
      g_ambGlob[v21].nextPlayTime = v19;
      g_ambGlob[v21].lastPlayedElem = elem;
    }
  }
  else
  {
    Com_PrintError(9, "Unable to find Ambient Event sound alias (%s).\n", elem->aliasName);
  }
}

/*
==============
SND_PlayBlendedSoundAlias
==============
*/
unsigned int SND_PlayBlendedSoundAlias(const SndAliasList *aliasList0, const SndAliasList *aliasList1, const float lerp, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  return SND_PlayBlendedSoundAlias_Internal(aliasList0, aliasList1, lerp, localClientNum, entnum, volumeScale, pitch, org, timeshift, system, 0);
}

/*
==============
SND_PlayBlendedSoundAliasAsync
==============
*/
void SND_PlayBlendedSoundAliasAsync(const SndAliasList *aliasList0, const SndAliasList *aliasList1, const float lerp, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  SND_PlayBlendedSoundAlias_Internal(aliasList0, aliasList1, lerp, localClientNum, entnum, volumeScale, pitch, org, timeshift, system, 1);
}

/*
==============
SND_PlayBlendedSoundAlias_Internal
==============
*/
unsigned int SND_PlayBlendedSoundAlias_Internal(const SndAliasList *aliasList0, const SndAliasList *aliasList1, const float lerp, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system, bool deferred)
{
  SndAlias *head; 
  SndAlias *v14; 
  float volMin; 
  float v16; 
  float pitchMin; 
  float v18; 
  float v19; 
  float v20; 
  unsigned __int64 SndEntHandle; 
  unsigned __int64 v23; 

  if ( !aliasList0 || !aliasList1 )
    return 0;
  head = aliasList0->head;
  v14 = aliasList1->head;
  volMin = head->volMin;
  v16 = v14->volMin;
  pitchMin = head->pitchMin;
  v18 = v14->pitchMin;
  v19 = (float)(volMin * (float)(1.0 - lerp)) + (float)(v16 * lerp);
  v20 = (float)(pitchMin * (float)(1.0 - lerp)) + (float)(v18 * lerp);
  if ( volMin != 0.0 )
  {
    SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entnum);
    return SND_PlayScaledSoundAlias_Internal(aliasList0, 0, SndEntHandle, v19 / volMin, v20 / pitchMin, org, timeshift, system, deferred);
  }
  if ( v16 == 0.0 )
    return 0;
  v23 = CG_GenerateSndEntHandle(localClientNum, entnum);
  return SND_PlayScaledSoundAlias_Internal(aliasList1, 0, v23, v19 / v16, v20 / v18, org, timeshift, system, deferred);
}

/*
==============
SND_PlayContextBlendAliasCore
==============
*/
unsigned int SND_PlayContextBlendAliasCore(const SndAlias *aliasA, const SndAlias *aliasB, float volumeLerp, const SndPlayParams *inPlayParams, SndAliasGroupTracking *inOutTracking)
{
  unsigned int result; 

  if ( __PAIR128__((unsigned __int64)aliasA, (unsigned __int64)aliasB) == 0 )
    return 0;
  result = 0;
  if ( volumeLerp > 0.0 && aliasB )
    result = SND_PlaySoundAliasCore(aliasB, volumeLerp, inPlayParams, inOutTracking);
  if ( volumeLerp < 1.0 )
  {
    if ( aliasA )
      return SND_PlaySoundAliasCore(aliasA, 1.0 - volumeLerp, inPlayParams, inOutTracking);
  }
  return result;
}

/*
==============
SND_PlayContextSound
==============
*/
unsigned int SND_PlayContextSound(const SndAliasList *aliasList, const int surfaceType, const int contextIndex, const int contextIndex2, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org)
{
  return SND_PlayContextSound_Internal(aliasList, surfaceType, contextIndex, contextIndex2, localClientNum, entnum, volumeScale, pitch, org, 0);
}

/*
==============
SND_PlayContextSoundAsync
==============
*/
void SND_PlayContextSoundAsync(const SndAliasList *aliasList, const int surfaceType, const int contextIndex, const int contextIndex2, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org)
{
  SND_PlayContextSound_Internal(aliasList, surfaceType, contextIndex, contextIndex2, localClientNum, entnum, volumeScale, pitch, org, 1);
}

/*
==============
SND_PlayContextSound_Internal
==============
*/
unsigned int SND_PlayContextSound_Internal(const SndAliasList *aliasList, int surfaceType, const int contextIndex, const int contextIndex2, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, bool deferred)
{
  float v12; 
  SndPlayParams inParams; 

  inParams.surfaceType = surfaceType;
  inParams.distanceScale = FLOAT_1_0;
  inParams.lfeScale = FLOAT_1_0;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.aliasList = aliasList;
  inParams.volumeScale = volumeScale;
  inParams.pitch = pitch;
  inParams.aliasId = 0;
  inParams.playbackType = SPT_CONTEXT;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.sndEnt = CG_GenerateSndEntHandle(localClientNum, entnum);
  inParams.contextIndex = contextIndex;
  inParams.contextIndex2 = contextIndex2;
  v12 = org->v[1];
  inParams.org.v[0] = org->v[0];
  inParams.org.v[2] = org->v[2];
  inParams.org.v[1] = v12;
  return SND_PlaySoundAliasFromParams(&inParams, deferred);
}

/*
==============
SND_PlayExplosionSound
==============
*/
unsigned int SND_PlayExplosionSound(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, const vec3_t *org, const unsigned int reflectionClass)
{
  return SND_PlayExplosionSound_Internal(aliasList, 0, surfaceType, sndEnt, org, reflectionClass, 0);
}

/*
==============
SND_PlayExplosionSoundAsync
==============
*/
void SND_PlayExplosionSoundAsync(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, const vec3_t *org, const unsigned int reflectionClass)
{
  SND_PlayExplosionSound_Internal(aliasList, 0, surfaceType, sndEnt, org, reflectionClass, 1);
}

/*
==============
SND_PlayExplosionSound_Internal
==============
*/
unsigned int SND_PlayExplosionSound_Internal(const SndAliasList *aliasList, const unsigned int aliasId, const int surfaceType, const unsigned __int64 sndEnt, const vec3_t *org, const unsigned int reflectionClass, bool deferred)
{
  float v11; 
  int v14; 
  SndPlayParams inParams; 

  if ( (unsigned int)surfaceType >= 0x40 )
  {
    v14 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5840, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", surfaceType, v14) )
      __debugbreak();
  }
  inParams.playbackType = SPT_EXPLOSION;
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.timeshift = 0;
  inParams.fadeTime = 0;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.startOffsetFraction = 0.0;
  inParams.adsrIndex = -1;
  inParams.system = SASYS_CGAME;
  v11 = org->v[1];
  inParams.org.v[0] = org->v[0];
  inParams.org.v[2] = org->v[2];
  inParams.reflectionClass = reflectionClass;
  inParams.org.v[1] = v11;
  inParams.autoSimId = -1;
  *(_QWORD *)&inParams.contextIndex = -1i64;
  inParams.aliasList = aliasList;
  inParams.aliasId = aliasId;
  inParams.sndEnt = sndEnt;
  inParams.surfaceType = surfaceType;
  return SND_PlaySoundAliasFromParams(&inParams, deferred);
}

/*
==============
SND_PlayLocalSoundAlias
==============
*/
unsigned int SND_PlayLocalSoundAlias(LocalClientNum_t localClientNum, const char *aliasname, snd_alias_system_t system)
{
  unsigned int AliasId; 

  AliasId = SND_FindAliasId(aliasname);
  return SND_PlayLocalSoundAlias_Internal(localClientNum, NULL, AliasId, system, 0);
}

/*
==============
SND_PlayLocalSoundAlias
==============
*/
unsigned int SND_PlayLocalSoundAlias(LocalClientNum_t localClientNum, const SndAliasList *aliasList, snd_alias_system_t system)
{
  return SND_PlayLocalSoundAlias_Internal(localClientNum, aliasList, 0, system, 0);
}

/*
==============
SND_PlayLocalSoundAliasAsync
==============
*/
void SND_PlayLocalSoundAliasAsync(LocalClientNum_t localClientNum, const char *aliasname, snd_alias_system_t system)
{
  unsigned int AliasId; 

  AliasId = SND_FindAliasId(aliasname);
  SND_PlayLocalSoundAlias_Internal(localClientNum, NULL, AliasId, system, 1);
}

/*
==============
SND_PlayLocalSoundAliasAsync
==============
*/
void SND_PlayLocalSoundAliasAsync(LocalClientNum_t localClientNum, const SndAliasList *aliasList, snd_alias_system_t system)
{
  SND_PlayLocalSoundAlias_Internal(localClientNum, aliasList, 0, system, 1);
}

/*
==============
SND_PlayLocalSoundAlias_Internal
==============
*/
unsigned int SND_PlayLocalSoundAlias_Internal(LocalClientNum_t localClientNum, const SndAliasList *aliasList, const unsigned int aliasId, snd_alias_system_t system, bool deferred)
{
  unsigned __int64 SndEntHandle; 
  __int64 v11; 
  __int64 v12; 
  SndPlayParams inParams; 
  snd_listener outListener; 

  if ( (unsigned int)system >= SASYS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5878, ASSERT_TYPE_ASSERT, "(unsigned)( system ) < (unsigned)( SASYS_COUNT )", "system doesn't index SASYS_COUNT\n\t%i not in [0, %i)", system, 2) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v12) = 2;
    LODWORD(v11) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5879, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  SND_GetListener(localClientNum, &outListener);
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.playbackType = SPT_BLEND;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.startOffsetFraction = 0.0;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.aliasList = aliasList;
  inParams.aliasId = aliasId;
  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, outListener.playerStateClientNum);
  inParams.org = outListener.orient.origin;
  inParams.sndEnt = SndEntHandle;
  inParams.system = system;
  return SND_PlaySoundAliasFromParams(&inParams, deferred);
}

/*
==============
SND_PlayLocal_f
==============
*/

void __fastcall SND_PlayLocal_f(double a1)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  const char *v7; 
  double v8; 
  double v9; 
  const char *v10; 
  SndAliasList *Alias; 
  const char *v12; 
  SndAlias *head; 
  double v14; 
  double v15; 
  double v16; 
  const char *v17; 
  const char *v21; 
  vec3_t org; 
  vec3_t v23; 
  vec3_t forward; 
  vec3_t angles; 
  snd_listener outListener; 

  _XMM9 = LODWORD(FLOAT_100_0);
  v2 = 0;
  v3 = 0;
  v4 = Cmd_Argc() - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          v7 = Cmd_Argv(0);
          Com_Printf(0, "USAGE: %s <sndalias> [<dist> <yaw> <pitch>]\n", v7);
          return;
        }
        v8 = Cmd_ArgFloat(4);
        v3 = LODWORD(v8);
      }
      v9 = Cmd_ArgFloat(3);
      v2 = LODWORD(v9);
    }
    a1 = Cmd_ArgFloat(2);
    _XMM9 = *(_OWORD *)&a1;
  }
  SND_GetListener(LOCAL_CLIENT_0, &outListener);
  LODWORD(v23.v[0]) = v3 ^ _xmm;
  v23.v[2] = 0.0;
  AxisToAngles(&outListener.orient.axis, &angles);
  v23.v[1] = COERCE_FLOAT(v2 ^ _xmm) + angles.v[1];
  AngleVectors(&v23, &forward, NULL, NULL);
  org.v[0] = (float)(*(float *)&_XMM9 * forward.v[0]) + outListener.orient.origin.v[0];
  org.v[1] = (float)(*(float *)&_XMM9 * forward.v[1]) + outListener.orient.origin.v[1];
  org.v[2] = (float)(*(float *)&_XMM9 * forward.v[2]) + outListener.orient.origin.v[2];
  v10 = Cmd_Argv(1);
  Alias = SND_FindAlias(v10);
  if ( Alias )
  {
    head = Alias->head;
    if ( (head->flags & 1) != 0 )
    {
      Com_PrintError(14, "Unable to play: '%s' is a looping alias.\n", head->aliasName);
    }
    else
    {
      SND_PlaySoundAlias(Alias, LOCAL_CLIENT_0, 2047, &org, 0, SASYS_CGAME);
      v14 = org.v[2];
      v15 = org.v[1];
      v16 = org.v[0];
      v17 = Cmd_Argv(1);
      Com_Printf(14, "Playing local sound alias \"%s\" at (%.2f, %.2f, %.2f).\n", v17, v16, v15, v14);
      __asm { vcmpltss xmm2, xmm9, cs:__real@43c80000 }
      _XMM0 = LODWORD(FLOAT_1_5);
      __asm { vblendvps xmm6, xmm0, xmm1, xmm2 }
      v21 = Cmd_Argv(1);
      CL_AddDebugStarWithText(&org, &MYCOLOR, &MYCOLOR, v21, *(float *)&_XMM6, 0, 200, 0);
    }
  }
  else
  {
    v12 = Cmd_Argv(1);
    Com_PrintError(14, "Couldn't find sound alias \"%s\".\n", v12);
  }
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/
unsigned int SND_PlayScaledSoundAlias(const char *aliasName, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  unsigned __int64 SndEntHandle; 
  unsigned int AliasId; 

  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entnum);
  AliasId = SND_FindAliasId(aliasName);
  return SND_PlayScaledSoundAlias_Internal(NULL, AliasId, SndEntHandle, volumeScale, pitch, org, timeshift, system, 0);
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/
unsigned int SND_PlayScaledSoundAlias(const char *aliasName, const unsigned __int64 sndEnt, const float volumeScale, const float pitch, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  unsigned int AliasId; 

  AliasId = SND_FindAliasId(aliasName);
  return SND_PlayScaledSoundAlias_Internal(NULL, AliasId, sndEnt, volumeScale, pitch, org, timeshift, system, 0);
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/
unsigned int SND_PlayScaledSoundAlias(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  unsigned __int64 SndEntHandle; 

  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entnum);
  return SND_PlayScaledSoundAlias_Internal(aliasList, 0, SndEntHandle, volumeScale, pitch, org, timeshift, system, 0);
}

/*
==============
SND_PlayScaledSoundAlias
==============
*/
unsigned int SND_PlayScaledSoundAlias(const SndAliasList *aliasList, const unsigned __int64 sndEnt, const float volumeScale, const float pitch, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  return SND_PlayScaledSoundAlias_Internal(aliasList, 0, sndEnt, volumeScale, pitch, org, timeshift, system, 0);
}

/*
==============
SND_PlayScaledSoundAliasAsync
==============
*/
void SND_PlayScaledSoundAliasAsync(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entnum, float volumeScale, float pitch, const vec3_t *org, int timeshift, snd_alias_system_t system)
{
  unsigned __int64 SndEntHandle; 

  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entnum);
  SND_PlayScaledSoundAlias_Internal(aliasList, 0, SndEntHandle, volumeScale, pitch, org, timeshift, system, 1);
}

/*
==============
SND_PlayScaledSoundAlias_Internal
==============
*/
unsigned int SND_PlayScaledSoundAlias_Internal(const SndAliasList *aliasList, const unsigned int aliasId, const unsigned __int64 sndEnt, const float volumeScale, const float pitch, const vec3_t *org, const int timeshift, const snd_alias_system_t system, bool deferred)
{
  float v9; 
  float v10; 
  float v11; 
  SndPlayParams inParams; 

  inParams.aliasList = aliasList;
  inParams.distanceScale = FLOAT_1_0;
  inParams.lfeScale = FLOAT_1_0;
  inParams.fadeTime = 0;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  v9 = org->v[0];
  inParams.startOffsetFraction = 0.0;
  inParams.pitch = pitch;
  v10 = org->v[1];
  inParams.org.v[0] = v9;
  v11 = org->v[2];
  inParams.timeshift = timeshift;
  inParams.aliasId = aliasId;
  inParams.system = system;
  inParams.volumeScale = volumeScale;
  inParams.org.v[1] = v10;
  inParams.org.v[2] = v11;
  inParams.playbackType = SPT_BLEND;
  inParams.adsrIndex = -1;
  inParams.autoSimId = -1;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.sndEnt = sndEnt;
  return SND_PlaySoundAliasFromParams(&inParams, deferred);
}

/*
==============
SND_PlaySecondaryAlias
==============
*/
__int64 SND_PlaySecondaryAlias(const SndAlias *alias, const SndPlayParams *inParams, SndAliasGroupTracking *inOutTracking)
{
  unsigned int secondaryId; 
  SndAliasList *AliasFromId; 
  unsigned int v8; 
  SndAlias *v9; 
  char v10; 
  SndAlias *head; 
  unsigned int contextType; 
  unsigned int contextValue; 
  __int64 v14; 
  unsigned int *p_contextValue; 
  unsigned int v16; 
  float v18; 
  SndAlias *outAliasB; 
  float outLerp; 
  SndAlias *outAliasA; 

  secondaryId = alias->secondaryId;
  if ( !secondaryId )
    return 0i64;
  AliasFromId = SND_FindAliasFromId(secondaryId);
  if ( !AliasFromId )
    return 0i64;
  v8 = 0;
  SND_PickSoundAliasFromList(AliasFromId, inParams, (const SndAlias **)&outAliasA, (const SndAlias **)&outAliasB, &outLerp, 0, 0, 0, 0);
  v9 = outAliasA;
  v10 = alias->flags & 1;
  if ( v10 && (outAliasA->flags & 1) != 0 )
  {
    head = AliasFromId->head;
    if ( (head->flags & 1) == 0 )
    {
LABEL_17:
      Com_PrintError(9, "Error: a looping alias cannot have a looping secondary aliasName that refers to multiple aliases.\nAlias sequence: '%s'->'%s'\n", alias->aliasName, alias->secondaryAliasName);
      return 0i64;
    }
    contextType = head->contextType;
    contextValue = head->contextValue;
    if ( AliasFromId->count > 1 )
    {
      v14 = 1i64;
      p_contextValue = &head[1].contextValue;
      while ( (p_contextValue[16] & 1) != 0 )
      {
        v16 = *(p_contextValue - 1);
        if ( v16 == contextType && *p_contextValue == contextValue )
          break;
        contextValue = *p_contextValue;
        ++v14;
        p_contextValue += 58;
        contextType = v16;
        if ( v14 >= AliasFromId->count )
          goto LABEL_12;
      }
      goto LABEL_17;
    }
  }
LABEL_12:
  if ( !outAliasA )
    return 0i64;
  if ( !v10 && (outAliasA->flags & 1) != 0 )
  {
    Com_PrintError(9, "Error: a non-looping alias cannot have a looping secondary alias.\nAlias sequence: '%s'->'%s'\n", alias->aliasName, alias->secondaryAliasName);
    return 0i64;
  }
  if ( ++inOutTracking->secondaryRecursionDepth > 20 )
  {
    Com_PrintError(9, "Error: exceeded max number of secondary aliases (%i).  Possible infinite loop.\nAlias sequence: '%s'->'%s'\n", 20i64, alias->aliasName, alias->secondaryAliasName);
    return 0i64;
  }
  v18 = outLerp;
  if ( outLerp > 0.0 && outAliasB )
    v8 = SND_PlaySoundAliasCore(outAliasB, outLerp, inParams, inOutTracking);
  if ( v18 < 1.0 )
    return SND_PlaySoundAliasCore(v9, 1.0 - v18, inParams, inOutTracking);
  return v8;
}

/*
==============
SND_PlaySoundAlias
==============
*/
unsigned int SND_PlaySoundAlias(const char *aliasName, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  unsigned __int64 SndEntHandle; 
  float v10; 
  float v11; 
  float v12; 
  SndPlayParams inParams; 

  inParams.playbackType = SPT_BLEND;
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.aliasList = NULL;
  inParams.sndEnt = 0i64;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.aliasId = SND_FindAliasId(aliasName);
  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entNum);
  v10 = org->v[0];
  v11 = org->v[1];
  inParams.sndEnt = SndEntHandle;
  inParams.org.v[0] = v10;
  v12 = org->v[2];
  inParams.timeshift = timeshift;
  inParams.org.v[2] = v12;
  inParams.org.v[1] = v11;
  inParams.system = system;
  return SND_PlaySoundAliasFromParams(&inParams, 0);
}

/*
==============
SND_PlaySoundAlias
==============
*/
unsigned int SND_PlaySoundAlias(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, const int timeshift, const snd_alias_system_t system)
{
  unsigned __int64 SndEntHandle; 
  float v8; 
  float v9; 
  float v10; 
  SndPlayParams inParams; 

  inParams.aliasList = aliasList;
  inParams.playbackType = SPT_BLEND;
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.aliasId = 0;
  inParams.sndEnt = 0i64;
  inParams.timeshift = 0;
  inParams.fadeTime = 0;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.adsrIndex = -1;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entNum);
  v8 = org->v[0];
  v9 = org->v[1];
  inParams.sndEnt = SndEntHandle;
  inParams.org.v[0] = v8;
  v10 = org->v[2];
  inParams.timeshift = timeshift;
  inParams.org.v[2] = v10;
  inParams.org.v[1] = v9;
  inParams.system = system;
  return SND_PlaySoundAliasFromParams(&inParams, 0);
}

/*
==============
SND_PlaySoundAliasCore
==============
*/
__int64 SND_PlaySoundAliasCore(const SndAlias *alias, float contextLerp, const SndPlayParams *inParams, SndAliasGroupTracking *inOutTracking)
{
  const SndAlias *v6; 
  __int64 v7; 
  int started; 
  vec3_t *p_org; 
  unsigned __int64 sndEnt; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  const SndAlias **p_alias; 
  sd_voice **voices; 
  unsigned int *chaninfoEntchannel; 
  SndFader *p_fadeInOut; 
  const SndAlias *v19; 
  int autoSimId; 
  double RandomAliasVolume; 
  double RandomAliasPitch; 
  int startDelayMax; 
  int startDelay; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  const char *v28; 
  __int64 v29; 
  int outVoice; 
  int v31; 
  const SndAlias *v32; 
  vec3_t origin_out; 
  __int64 v34; 
  SndStartAliasInfo info; 
  tmat33_t<vec3_t> axis_out; 

  v34 = -2i64;
  v6 = alias;
  v32 = alias;
  LODWORD(v7) = -1;
  outVoice = -1;
  if ( !Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4435, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_SOUND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_SOUND_UPDATE )") )
    __debugbreak();
  if ( !v6 )
    return 0i64;
  if ( Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4442, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThreadEntityWorker())", "%s\n\tSound playback is not supported from entity worker threads. Alias was '%s'", "!Sys_IsMainThreadEntityWorker()", v6->aliasName) )
    __debugbreak();
  started = 0;
  if ( !g_snd.driverInitialized )
    return 0i64;
  if ( inOutTracking->numVoices >= 0x14u )
  {
    Com_PrintError(9, "Error: exceeded max number of secondary aliases (%lu).  Possible infinite loop.\nAlias sequence: '%s'->'%s'\n", 20i64, v6->aliasName, v6->secondaryAliasName);
    return 0i64;
  }
  p_org = &inParams->org;
  if ( !InRange(v6, &inParams->org) || !v6->assetId )
    goto LABEL_67;
  sndEnt = inParams->sndEnt;
  v12 = sndEnt & 0x1FFFFFFFFi64;
  if ( (sndEnt & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v12 - 2049 <= 0x8FF || v12 <= 0x7FD || v12 - 5571 <= 0x7A120 )
  {
    CG_SND_GetSoundEntityOrientation(inParams->sndEnt, &origin_out, &axis_out);
    SND_SetEntState(sndEnt, &origin_out, &axis_out);
    memset(&origin_out, 0, sizeof(origin_out));
  }
  if ( SND_ContinueLoopingSound(v6, inParams, &outVoice) )
  {
    v13 = outVoice;
    g_snd.voices[v13].secondaryId = SND_PlaySecondaryAlias(v6, inParams, inOutTracking);
    return g_snd.voices[v13].playbackId;
  }
  v14 = (unsigned __int8)(v6->flags >> 10);
  v31 = (unsigned __int8)(v6->flags >> 10);
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2069, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v14 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v29) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2070, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v29) )
      __debugbreak();
  }
  if ( g_snd.globals->entchannelInfo[v14].isRestricted && (!Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) || (inParams->sndEnt & 0x1FFFFFFFFi64) != 2046) )
  {
    p_alias = &g_snd.voices[0].alias;
    voices = g_sd.voices;
    chaninfoEntchannel = g_snd.chaninfoEntchannel;
    p_fadeInOut = &g_snd.voices[0].fadeInOut;
    do
    {
      if ( *(p_alias - 12) == (const SndAlias *)inParams->sndEnt && *chaninfoEntchannel == v31 && !SND_IsVoiceFree(started) )
      {
        v19 = *p_alias;
        if ( ((*p_alias)->flags & 1) != 0 )
        {
          SND_FaderSetGoal(p_fadeInOut, 0.0);
        }
        else
        {
          autoSimId = inParams->autoSimId;
          if ( autoSimId != -1 && autoSimId == *((_DWORD *)p_alias + 30) )
          {
            (*voices)->autoSimStopTimeStamp = inParams->autoSimTimeStamp;
            v19 = *p_alias;
          }
          SND_DebugAliasPrint(1, v19, "stopped on entchannel");
          SND_StopVoiceAndClearTracking(started, inOutTracking);
        }
      }
      ++started;
      p_fadeInOut += 164;
      ++chaninfoEntchannel;
      ++voices;
      p_alias += 246;
    }
    while ( started < 99 );
    v6 = v32;
    p_org = &inParams->org;
  }
  RandomAliasVolume = SND_GetRandomAliasVolume(v6);
  info.volume = *(float *)&RandomAliasVolume;
  RandomAliasPitch = SND_GetRandomAliasPitch(v6);
  info.pitch = *(float *)&RandomAliasPitch;
  info.volumeScale = inParams->volumeScale;
  info.distanceScale = inParams->distanceScale;
  info.contextLerpVolume = contextLerp;
  info.pitchScale = inParams->pitch;
  info.alias = v6;
  info.sndEnt = inParams->sndEnt;
  info.org = *p_org;
  info.timeshift = inParams->timeshift;
  info.fraction = inParams->startOffsetFraction;
  startDelayMax = v6->startDelayMax;
  startDelay = v6->startDelay;
  if ( startDelayMax > startDelay )
    startDelay = I_irand(startDelay, startDelayMax);
  info.startDelayUs = inParams->additionalStartDelayUs + 1000 * startDelay;
  info.system = inParams->system;
  info.adsrIndex = inParams->adsrIndex;
  info.fadeTime = inParams->fadeTime;
  info.autoSimId = inParams->autoSimId;
  info.autoSimTimeStamp = inParams->autoSimTimeStamp;
  info.autoSimShotCount = inParams->autoSimShotCount;
  info.lfeScale = inParams->lfeScale;
  info.lpfCutoff = inParams->lpfCutoff;
  info.hpfCutoff = inParams->hpfCutoff;
  info.secondaryGroupId = inOutTracking->secondaryGroupId;
  info.preDelayed = inParams->preDelayed;
  if ( SND_FindAssetsForVoice(&info) )
  {
    started = SND_StartAlias(&info, inOutTracking, &outVoice);
    if ( started )
    {
      v7 = outVoice;
      if ( outVoice == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4543, ASSERT_TYPE_ASSERT, "(voiceIndex != ( -1 ))", (const char *)&queryFormat, "voiceIndex != SND_INVALID_VOICE_INDEX") )
        __debugbreak();
      if ( !g_sd.voices[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4544, ASSERT_TYPE_ASSERT, "(g_sd.voices[voiceIndex])", (const char *)&queryFormat, "g_sd.voices[voiceIndex]") )
        __debugbreak();
      if ( inOutTracking->numVoices >= 0x14u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4545, ASSERT_TYPE_ASSERT, "(inOutTracking.numVoices < ( sizeof( *array_counter( inOutTracking.voiceIndices ) ) + 0 ))", (const char *)&queryFormat, "inOutTracking.numVoices < ARRAY_COUNT( inOutTracking.voiceIndices )") )
        __debugbreak();
      inOutTracking->voiceIndices[inOutTracking->numVoices] = v7;
      inOutTracking->voicePlaybackIds[inOutTracking->numVoices++] = started;
      v25 = (unsigned __int8)(v6->flags >> 10);
      if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2107, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
        __debugbreak();
      if ( (unsigned int)v25 >= g_snd.globals->entchannelCount )
      {
        LODWORD(v29) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2108, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v29) )
          __debugbreak();
      }
      if ( g_snd.globals->entchannelInfo[v25].isPlayerDialogue && !inOutTracking->hasSetPlayerBreathDialogueAlias )
      {
        CG_SND_PlayerBreathsSetDialogueAlias((LocalClientNum_t)((inParams->sndEnt >> 33) & 3), started);
        inOutTracking->hasSetPlayerBreathDialogueAlias = 1;
      }
    }
    else
    {
      LODWORD(v7) = outVoice;
    }
LABEL_67:
    v26 = SND_PlaySecondaryAlias(v6, inParams, inOutTracking);
    if ( (_DWORD)v7 == -1 || (v27 = (int)v7, g_snd.voices[v27].playbackId != started) )
      started = v26;
    else
      g_snd.voices[v27].secondaryId = v26;
    v28 = j_va("Started (voice %d, time %d)", (unsigned int)v7, (unsigned int)g_snd.looptime);
    SND_DebugAliasPrint(started != 0, v6, v28);
    return (unsigned int)started;
  }
  if ( ++snd_errorLimit >= 1000 )
    return 0i64;
  Com_PrintError(9, "Sound alias %s's sound data was not yet loaded when played.\n", info.alias->aliasName);
  return 0i64;
}

/*
==============
SND_PlaySoundAliasFromParams
==============
*/
__int64 SND_PlaySoundAliasFromParams(const SndPlayParams *inParams, bool deferred)
{
  const dvar_t *v5; 
  SndAliasList *aliasList; 
  unsigned int v7; 
  SndPlaybackType playbackType; 
  __int32 v9; 
  __int32 v10; 
  __int32 v11; 
  bool ContextFromIndex; 
  bool v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int secondaryGroupCounter; 
  unsigned int reflectionClass; 
  unsigned int v19; 
  unsigned int specType1; 
  unsigned int specValue1; 
  unsigned int specType2; 
  unsigned int specValue2; 
  const SndAlias *outType; 
  float outLerp[2]; 
  SndAlias *outAliasA; 
  unsigned int outValue[2]; 
  __int64 v28; 
  SndAliasGroupTracking inOutTracking; 

  v28 = -2i64;
  if ( !inParams->aliasList && !inParams->aliasId )
    return 0i64;
  *(float *)&outType = inParams->volumeScale;
  if ( ((unsigned int)outType & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4586, ASSERT_TYPE_SANITY, "( !IS_NAN( inParams.volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( inParams.volumeScale )") )
    __debugbreak();
  *(float *)&outType = inParams->distanceScale;
  if ( ((unsigned int)outType & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4587, ASSERT_TYPE_SANITY, "( !IS_NAN( inParams.distanceScale ) )", (const char *)&queryFormat, "!IS_NAN( inParams.distanceScale )") )
    __debugbreak();
  *(float *)&outType = inParams->pitch;
  if ( ((unsigned int)outType & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4588, ASSERT_TYPE_SANITY, "( !IS_NAN( inParams.pitch ) )", (const char *)&queryFormat, "!IS_NAN( inParams.pitch )") )
    __debugbreak();
  *(float *)&outType = inParams->lfeScale;
  if ( ((unsigned int)outType & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4589, ASSERT_TYPE_SANITY, "( !IS_NAN( inParams.lfeScale ) )", (const char *)&queryFormat, "!IS_NAN( inParams.lfeScale )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "SND_PlaySoundAliasFromParams");
  if ( !deferred )
    goto LABEL_23;
  v5 = DCONST_DVARBOOL_snd_deferredPlaybackEnabled;
  if ( !DCONST_DVARBOOL_snd_deferredPlaybackEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_deferredPlaybackEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
LABEL_23:
    aliasList = (SndAliasList *)inParams->aliasList;
    if ( !inParams->aliasList )
    {
      aliasList = SND_FindAliasFromId(inParams->aliasId);
      if ( !aliasList )
        goto LABEL_25;
    }
    v7 = 0;
    playbackType = inParams->playbackType;
    if ( playbackType )
    {
      v9 = playbackType - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
          *(_QWORD *)&inOutTracking.numVoices = 0i64;
          secondaryGroupCounter = g_snd.secondaryGroupCounter;
          do
            ++secondaryGroupCounter;
          while ( !secondaryGroupCounter );
          g_snd.secondaryGroupCounter = secondaryGroupCounter;
          inOutTracking.secondaryGroupId = secondaryGroupCounter;
          inOutTracking.hasSetPlayerBreathDialogueAlias = 0;
          SND_PickSoundAliasFromList(aliasList, inParams, (const SndAlias **)&outAliasA, NULL, NULL, 0, 0, 0, 0);
          v7 = SND_PlaySoundAliasCore(outAliasA, 1.0, inParams, &inOutTracking);
          SND_FinalizeAliasGroupTracking(&inOutTracking);
          if ( v7 )
          {
            reflectionClass = inParams->reflectionClass;
            if ( reflectionClass )
              SND_WeapReflectPlayExplosionSound(&inParams->org, reflectionClass);
          }
          goto LABEL_54;
        }
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4678, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown playback type") )
              __debugbreak();
            goto LABEL_54;
          }
          LODWORD(outType) = 0;
          outValue[1] = 0;
          outValue[0] = 0;
          outLerp[0] = 0.0;
          ContextFromIndex = SND_GetContextFromIndex(inParams->contextIndex, (unsigned int *)&outType, &outValue[1]);
          v13 = SND_GetContextFromIndex(inParams->contextIndex2, outValue, (unsigned int *)outLerp);
          if ( !ContextFromIndex && !v13 )
            goto LABEL_54;
          Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
          *(_QWORD *)&inOutTracking.numVoices = 0i64;
          v14 = g_snd.secondaryGroupCounter;
          do
            ++v14;
          while ( !v14 );
          g_snd.secondaryGroupCounter = v14;
          inOutTracking.secondaryGroupId = v14;
          specValue2 = LODWORD(outLerp[0]);
          specType2 = outValue[0];
          specValue1 = outValue[1];
          specType1 = (unsigned int)outType;
          goto LABEL_52;
        }
        Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
        *(_QWORD *)&inOutTracking.numVoices = 0i64;
        v15 = g_snd.secondaryGroupCounter;
        do
          ++v15;
        while ( !v15 );
      }
      else
      {
        Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
        *(_QWORD *)&inOutTracking.numVoices = 0i64;
        v15 = g_snd.secondaryGroupCounter;
        do
          ++v15;
        while ( !v15 );
      }
      g_snd.secondaryGroupCounter = v15;
      inOutTracking.secondaryGroupId = v15;
      inOutTracking.hasSetPlayerBreathDialogueAlias = 0;
      SND_PickSoundAliasFromList(aliasList, inParams, (const SndAlias **)&outAliasA, &outType, outLerp, 0, 0, 0, 0);
      v16 = SND_PlayContextBlendAliasCore(outAliasA, outType, outLerp[0], inParams, &inOutTracking);
LABEL_53:
      v7 = v16;
      SND_FinalizeAliasGroupTracking(&inOutTracking);
      goto LABEL_54;
    }
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    *(_QWORD *)&inOutTracking.numVoices = 0i64;
    v19 = g_snd.secondaryGroupCounter;
    do
      ++v19;
    while ( !v19 );
    g_snd.secondaryGroupCounter = v19;
    inOutTracking.secondaryGroupId = v19;
    specValue2 = 0;
    specType2 = 0;
    specValue1 = 0;
    specType1 = 0;
LABEL_52:
    inOutTracking.hasSetPlayerBreathDialogueAlias = 0;
    SND_PickSoundAliasFromList(aliasList, inParams, (const SndAlias **)&outAliasA, NULL, NULL, specType1, specValue1, specType2, specValue2);
    v16 = SND_PlaySoundAliasCore(outAliasA, 1.0, inParams, &inOutTracking);
    goto LABEL_53;
  }
  if ( !SND_AddDeferredPlayback(inParams) )
  {
    Com_PrintWarning(16, "Unable to queue deferred sound alias request. Playing synchronously.\n");
    goto LABEL_23;
  }
LABEL_25:
  v7 = 0;
LABEL_54:
  Sys_ProfEndNamedEvent();
  return v7;
}

/*
==============
SND_PlaySurfaceSound
==============
*/
unsigned int SND_PlaySurfaceSound(const char *aliasName, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  unsigned int AliasId; 

  AliasId = SND_FindAliasId(aliasName);
  return SND_PlaySurfaceSound_Internal(NULL, AliasId, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org, 0);
}

/*
==============
SND_PlaySurfaceSound
==============
*/
unsigned int SND_PlaySurfaceSound(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  return SND_PlaySurfaceSound_Internal(aliasList, 0, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org, 0);
}

/*
==============
SND_PlaySurfaceSoundAsync
==============
*/
void SND_PlaySurfaceSoundAsync(const char *aliasName, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  unsigned int AliasId; 

  AliasId = SND_FindAliasId(aliasName);
  SND_PlaySurfaceSound_Internal(NULL, AliasId, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org, 1);
}

/*
==============
SND_PlaySurfaceSoundAsync
==============
*/
void SND_PlaySurfaceSoundAsync(const SndAliasList *aliasList, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org)
{
  SND_PlaySurfaceSound_Internal(aliasList, 0, surfaceType, sndEnt, volumeScale, pitch, fadeTime, org, 1);
}

/*
==============
SND_PlaySurfaceSound_Internal
==============
*/
unsigned int SND_PlaySurfaceSound_Internal(const SndAliasList *aliasList, const unsigned int aliasId, const int surfaceType, const unsigned __int64 sndEnt, float volumeScale, float pitch, const int fadeTime, const vec3_t *org, bool deferred)
{
  float v13; 
  int v16; 
  SndPlayParams inParams; 

  if ( (unsigned int)surfaceType >= 0x40 )
  {
    v16 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 5710, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", surfaceType, v16) )
      __debugbreak();
  }
  inParams.adsrIndex = -1;
  inParams.distanceScale = FLOAT_1_0;
  inParams.lfeScale = FLOAT_1_0;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.startOffsetFraction = 0.0;
  inParams.playbackType = SPT_GENERAL;
  inParams.timeshift = 0;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.volumeScale = volumeScale;
  inParams.fadeTime = fadeTime;
  inParams.pitch = pitch;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  v13 = org->v[1];
  inParams.org.v[0] = org->v[0];
  inParams.org.v[2] = org->v[2];
  inParams.org.v[1] = v13;
  *(_QWORD *)&inParams.contextIndex = -1i64;
  inParams.aliasList = aliasList;
  inParams.aliasId = aliasId;
  inParams.sndEnt = sndEnt;
  inParams.surfaceType = surfaceType;
  return SND_PlaySoundAliasFromParams(&inParams, deferred);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/
int SND_PlayVirtualLoopSound(const char *aliasName, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, float volume, float pitch)
{
  const SndAliasList *Alias; 
  unsigned __int64 SndEntHandle; 

  Alias = SND_FindAlias(aliasName);
  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entNum);
  return SND_PlayVirtualLoopSoundInternal(Alias, SndEntHandle, org, volume, pitch, 0);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/
int SND_PlayVirtualLoopSound(const char *aliasName, const unsigned __int64 sndEnt, const vec3_t *org, float volume, float pitch)
{
  const SndAliasList *Alias; 

  Alias = SND_FindAlias(aliasName);
  return SND_PlayVirtualLoopSoundInternal(Alias, sndEnt, org, volume, pitch, 0);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/
int SND_PlayVirtualLoopSound(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, float volume, float pitch)
{
  unsigned __int64 SndEntHandle; 

  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entNum);
  return SND_PlayVirtualLoopSoundInternal(aliasList, SndEntHandle, org, volume, pitch, 0);
}

/*
==============
SND_PlayVirtualLoopSound
==============
*/
int SND_PlayVirtualLoopSound(const SndAliasList *aliasList, const unsigned __int64 sndEnt, const vec3_t *org, const float volume, const float pitch)
{
  return SND_PlayVirtualLoopSoundInternal(aliasList, sndEnt, org, volume, pitch, 0);
}

/*
==============
SND_PlayVirtualLoopSoundFollowEntity
==============
*/
int SND_PlayVirtualLoopSoundFollowEntity(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, float volume, float pitch)
{
  unsigned __int64 SndEntHandle; 

  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entNum);
  return SND_PlayVirtualLoopSoundInternal(aliasList, SndEntHandle, org, volume, pitch, 1);
}

/*
==============
SND_PlayVirtualLoopSoundInternal
==============
*/
__int64 SND_PlayVirtualLoopSoundInternal(const SndAliasList *aliasList, const unsigned __int64 sndEnt, const vec3_t *org, const float volume, const float pitch, const bool followEntity)
{
  unsigned int v10; 
  int v11; 
  SndVirtualLoop *virtualLoops; 
  SndVirtualLoop *v13; 
  unsigned int v14; 
  bool v15; 
  int v16; 
  ScopedCriticalSection v17; 
  SndPlayParams inParams; 

  if ( (aliasList->head->flags & 1) != 0 )
  {
    inParams.aliasList = NULL;
    inParams.aliasId = 0;
    inParams.playbackType = SPT_BLEND;
    *(_OWORD *)&inParams.volumeScale = _xmm;
    inParams.sndEnt = 0i64;
    inParams.org.v[0] = 0.0;
    inParams.org.v[1] = 0.0;
    inParams.org.v[2] = 0.0;
    inParams.timeshift = 0;
    v10 = -1;
    inParams.adsrIndex = -1;
    inParams.fadeTime = 0;
    inParams.system = SASYS_CGAME;
    inParams.autoSimId = -1;
    inParams.autoSimTimeStamp = 0i64;
    inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
    inParams.startPaused = 0;
    inParams.lpfCutoff = FLOAT_N1_0;
    inParams.hpfCutoff = FLOAT_N1_0;
    inParams.startOffsetFraction = 0.0;
    inParams.additionalStartDelayUs = 0;
    *(_QWORD *)&inParams.surfaceType = -1i64;
    inParams.contextIndex2 = -1;
    inParams.reflectionClass = 0;
    *(_WORD *)&inParams.isADS = 0;
    ScopedCriticalSection::ScopedCriticalSection(&v17, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    v11 = 0;
    virtualLoops = g_snd.virtualLoops;
    while ( virtualLoops->handle != -1 )
    {
      ++v11;
      if ( (__int64)++virtualLoops >= (__int64)&g_snd.nextVirtualLoopHandle )
      {
        Com_PrintError(9, "SND_PlayVirtualLoopSound: Out of free virtual looping sound instances\n");
        goto LABEL_11;
      }
    }
    inParams.aliasList = aliasList;
    inParams.volumeScale = volume;
    inParams.pitch = pitch;
    inParams.org = *org;
    inParams.sndEnt = sndEnt;
    v13 = &g_snd.virtualLoops[v11];
    v14 = SND_PlaySoundAliasFromParams(&inParams, 0);
    if ( v14 )
    {
      v15 = g_snd.nextVirtualLoopHandle + 1 < 0;
      v16 = ++g_snd.nextVirtualLoopHandle;
      v10 = 0;
      if ( !v15 )
        v10 = v16;
      v13->handle = v10;
      v13->aliasList = aliasList;
      v13->playbackId = v14;
      v13->sndEnt = sndEnt;
      v13->volume = volume;
      v13->pitch = pitch;
      v13->followEntity = followEntity;
      v13->org.v[0] = org->v[0];
      v13->org.v[1] = org->v[1];
      v13->org.v[2] = org->v[2];
    }
LABEL_11:
    ScopedCriticalSection::~ScopedCriticalSection(&v17);
    return v10;
  }
  else
  {
    Com_PrintError(9, "SND_PlayVirtualLoopSound: Tried to play a non looping sound %s\n", aliasList->aliasName);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
SND_PlayWeaponSound
==============
*/
void SND_PlayWeaponSound(const SndAliasList *aliasList, const LocalClientNum_t localClientNum, const int entNum, const vec3_t *org, const Weapon *weapon, const bool isAlternate, const bool isPlayer, const int autoSimId, const __int64 autoSimTimeStamp, const float autoSimDistSq, const SndWeapShotCountId shotCount, const bool isProne, const bool isDualWield, const PlayerHandIndex hand, const bool isHyperBurstSound)
{
  WeaponSFXPackage *SfxPackage; 
  bool v20; 
  double v21; 
  float weapSndDistantRangeStart; 
  SndAliasList *Alias; 
  SndAlias *head; 
  bool v25; 
  float weapSndFarRangeStart; 
  SndAliasList *v27; 
  SndAlias *v28; 
  float weapSndMediumRangeStart; 
  SndAliasList *v30; 
  SndAlias *v31; 
  int PlayerADSRSettingIndex; 
  float weapSndFireVolumeShot1; 
  unsigned __int64 SndEntHandle; 
  float v35; 
  float v36; 
  const SndWhizby *Whizby; 
  float speedOfSound; 
  SndWeaponFireEvent *delayedWeaponSounds; 
  int v40; 
  unsigned int v41; 
  __m256i v42; 
  unsigned int id; 
  __m256i v44; 
  __m256i v45; 
  _QWORD inParams[17]; 
  char dest[128]; 

  *(_OWORD *)&inParams[3] = _xmm;
  inParams[1] = 0i64;
  *(float *)&inParams[12] = FLOAT_N1_0;
  *((float *)&inParams[12] + 1) = FLOAT_N1_0;
  inParams[13] = 0i64;
  inParams[2] = 0x300000000i64;
  HIDWORD(inParams[7]) = 0;
  HIDWORD(inParams[8]) = 0;
  LODWORD(inParams[9]) = 1;
  BYTE4(inParams[11]) = 0;
  inParams[14] = -1i64;
  inParams[15] = 0xFFFFFFFFi64;
  LOBYTE(inParams[16]) = 0;
  SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
  v20 = !isHyperBurstSound;
  if ( isPlayer )
  {
    PlayerADSRSettingIndex = CG_GetPlayerADSRSettingIndex(localClientNum, weapon);
    goto LABEL_29;
  }
  if ( autoSimId == -1 )
  {
    v21 = SND_DistSqToNearestListener(org);
    autoSimDistSq = *(float *)&v21;
  }
  weapSndDistantRangeStart = SfxPackage->weapSndDistantRangeStart;
  if ( weapSndDistantRangeStart > 0.0 && autoSimDistSq >= (float)(weapSndDistantRangeStart * weapSndDistantRangeStart) )
  {
    Com_sprintf(dest, 0x80ui64, "%s_dist", aliasList->aliasName);
    Alias = SND_FindAlias(dest);
    aliasList = Alias;
    if ( !Alias )
      goto LABEL_25;
    head = Alias->head;
    if ( (head->flags & 0x70) == 0 )
      goto LABEL_25;
    v25 = autoSimDistSq < (float)(head->distMin * head->distMin);
LABEL_23:
    if ( v25 )
    {
LABEL_24:
      Com_PrintError(9, "NPC weapon sound alias %s has a bad distance range at %f\n", dest, fsqrt(autoSimDistSq));
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  weapSndFarRangeStart = SfxPackage->weapSndFarRangeStart;
  if ( weapSndFarRangeStart <= 0.0 || autoSimDistSq < (float)(weapSndFarRangeStart * weapSndFarRangeStart) )
  {
    weapSndMediumRangeStart = SfxPackage->weapSndMediumRangeStart;
    if ( weapSndMediumRangeStart <= 0.0 || autoSimDistSq < (float)(weapSndMediumRangeStart * weapSndMediumRangeStart) )
      goto LABEL_26;
    Com_sprintf(dest, 0x80ui64, "%s_med", aliasList->aliasName);
    v30 = SND_FindAlias(dest);
    aliasList = v30;
    if ( !v30 )
      goto LABEL_25;
    v31 = v30->head;
    if ( (v31->flags & 0x70) != 0 && autoSimDistSq < (float)(v31->distMin * v31->distMin) )
      goto LABEL_24;
    if ( autoSimDistSq <= (float)(v31->distMax * v31->distMax) )
      goto LABEL_25;
    v25 = SfxPackage->weapSndFarRangeStart > 0.0;
    goto LABEL_23;
  }
  Com_sprintf(dest, 0x80ui64, "%s_far", aliasList->aliasName);
  v27 = SND_FindAlias(dest);
  aliasList = v27;
  if ( v27 )
  {
    v28 = v27->head;
    if ( (v28->flags & 0x70) != 0 && autoSimDistSq < (float)(v28->distMin * v28->distMin) )
      goto LABEL_24;
    if ( autoSimDistSq > (float)(v28->distMax * v28->distMax) )
    {
      v25 = SfxPackage->weapSndDistantRangeStart > 0.0;
      goto LABEL_23;
    }
  }
LABEL_25:
  v20 = 0;
LABEL_26:
  if ( !aliasList )
    return;
  PlayerADSRSettingIndex = CG_GetNPCADSRSettingIndex(localClientNum, org, weapon);
LABEL_29:
  LODWORD(inParams[8]) = PlayerADSRSettingIndex;
  if ( !SfxPackage || !isPlayer || shotCount == SND_WEAP_SHOT_UNCOUNTED )
    goto LABEL_41;
  switch ( shotCount )
  {
    case SND_WEAP_SHOT_FIRST:
      weapSndFireVolumeShot1 = SfxPackage->weapSndFireVolumeShot1;
      break;
    case SND_WEAP_SHOT_SECOND:
      weapSndFireVolumeShot1 = SfxPackage->weapSndFireVolumeShot2;
      break;
    case SND_WEAP_SHOT_THIRD:
      weapSndFireVolumeShot1 = SfxPackage->weapSndFireVolumeShot3;
      break;
    default:
      goto LABEL_39;
  }
  *(float *)&inParams[3] = weapSndFireVolumeShot1;
LABEL_39:
  if ( isProne )
    HIDWORD(inParams[4]) = LODWORD(SfxPackage->weapSndProneFireLFEVolume);
LABEL_41:
  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entNum);
  v35 = org->v[1];
  *(float *)&inParams[6] = org->v[0];
  v36 = org->v[2];
  inParams[5] = SndEntHandle;
  *(float *)&inParams[7] = v36;
  *((float *)&inParams[6] + 1) = v35;
  HIDWORD(inParams[9]) = autoSimId;
  inParams[10] = autoSimTimeStamp;
  LODWORD(inParams[11]) = shotCount;
  BYTE1(inParams[16]) = 1;
  if ( isPlayer )
  {
    inParams[1] = aliasList;
    SND_FinishPlayingWeaponSound((const SndPlayParams *)&inParams[1], 1, SfxPackage, v20, isDualWield, hand);
  }
  else if ( autoSimId == -1 && ((Whizby = SND_GetWhizby(SfxPackage)) == NULL ? (speedOfSound = 0.0) : (speedOfSound = Whizby->speedOfSound), SND_IsEntChannel3D((unsigned __int8)(aliasList->head->flags >> 10)) && speedOfSound > 0.0) )
  {
    delayedWeaponSounds = g_snd.delayedWeaponSounds;
    v40 = (500 - (int)(float)(fsqrt(autoSimDistSq) * (float)(-1000000.0 / speedOfSound))) / 1000;
    v41 = 0;
    while ( delayedWeaponSounds->alias )
    {
      ++v41;
      ++delayedWeaponSounds;
      if ( v41 >= 0x40 )
      {
        Com_PrintWarning(9, "Ran out of queued NPC weapon sound slots\n", delayedWeaponSounds);
        goto LABEL_52;
      }
    }
    v42 = *(__m256i *)&inParams[5];
    LODWORD(inParams[2]) = aliasList->id;
    id = aliasList->id;
    *(__m256i *)&delayedWeaponSounds->playParams.aliasList = *(__m256i *)&inParams[1];
    v44 = *(__m256i *)&inParams[9];
    *(__m256i *)&delayedWeaponSounds->playParams.sndEnt = v42;
    v45 = *(__m256i *)&inParams[13];
    *(__m256i *)&delayedWeaponSounds->playParams.system = v44;
    *(__m256i *)&delayedWeaponSounds->playParams.startOffsetFraction = v45;
    delayedWeaponSounds->alias = id;
    delayedWeaponSounds->timeStampMS = v40;
    delayedWeaponSounds->playAtmo = v20;
    delayedWeaponSounds->sfxPackage = SfxPackage;
  }
  else
  {
LABEL_52:
    inParams[1] = aliasList;
    SND_FinishPlayingWeaponSound((const SndPlayParams *)&inParams[1], 0, SfxPackage, v20, 0, WEAPON_HAND_DEFAULT);
  }
}

/*
==============
SND_PrintEqParams
==============
*/
void SND_PrintEqParams(void)
{
  __int64 i; 
  int v1; 
  char *v2; 
  int j; 

  Com_Printf(9, "Current EQ Settings\n---------------\n lerp = %.2f\n", sdGlob.eqLerp);
  for ( i = 0i64; g_snd.globals && (unsigned int)i < g_snd.globals->entchannelCount; i = (unsigned int)(i + 1) )
  {
    Com_Printf(9, "+ %s\n", g_snd.globals->entchannelInfo[(unsigned int)i].name);
    v1 = 0;
    v2 = (char *)&sdGlob + 20 * i;
    do
    {
      for ( j = 0; j < 2; ++j )
      {
        if ( (unsigned __int8)*((_DWORD *)v2 + 4) )
          Com_Printf(9, "\t%i %i %s %f Hz %f dB %f q\n", (unsigned int)v1, (unsigned int)j, snd_eqTypeStrings[(int)*(_OWORD *)v2], COERCE_FLOAT(*((_QWORD *)v2 + 1)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)), COERCE_FLOAT(HIDWORD(*(_OWORD *)v2)));
        v2 += 5120;
      }
      ++v1;
    }
    while ( v1 < 2 );
  }
}

/*
==============
SND_ProcessPendingRestore
==============
*/
void SND_ProcessPendingRestore(void)
{
  unsigned int v0; 
  float value; 
  snd_param_info_t *v2; 

  if ( g_snd.hasPendingRestore && Sys_IsMainThread() )
  {
    v0 = 0;
    g_snd.hasPendingRestore = 0;
    while ( g_snd.globals && v0 < g_snd.globals->entchannelCount )
    {
      value = g_snd.levelFadeInChannelVols.channelvol[v0].value;
      v2 = &g_snd.levelFadeInChannelVols.channelvol[v0];
      if ( value < 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8428, ASSERT_TYPE_ASSERT, "( ( savedvalue >= 0.0f ) )", "( savedvalue ) = %g", value) )
          __debugbreak();
        if ( value < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4704, ASSERT_TYPE_ASSERT, "(value >= 0.0f)", (const char *)&queryFormat, "value >= 0.0f") )
          __debugbreak();
      }
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4705, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      v2->goalvalue = value;
      v2->value = value;
      v2->goalrate = 0.0;
      ++v0;
    }
  }
}

/*
==============
SND_QueueSoundDoneNotify
==============
*/
void SND_QueueSoundDoneNotify(unsigned __int64 entNum, unsigned __int16 soundString)
{
  __int64 v4; 
  int v5; 
  NotifyQueueEntry *v6; 

  if ( soundString && clientUIActives[0].connectionState >= CA_CONNECTED )
  {
    if ( s_notifiesCount < 32 )
    {
      do
      {
        v4 = s_notifiesHead;
        v5 = ((_BYTE)s_notifiesHead + 1) & 0x1F;
        if ( ((unsigned __int64)&s_notifiesHead & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_notifiesHead) )
          __debugbreak();
      }
      while ( (_DWORD)v4 != _InterlockedCompareExchange(&s_notifiesHead, v5, v4) );
      v6 = &s_notifies[v4];
      if ( entNum > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)entNum, "unsigned", entNum) )
        __debugbreak();
      v6->entnum = entNum;
      v6->soundString = soundString;
      if ( ((unsigned __int8)&s_notifiesCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_notifiesCount) )
        __debugbreak();
      _InterlockedIncrement(&s_notifiesCount);
    }
    else
    {
      Com_PrintError(9, "ERROR: too many sound notifies %d\n", 32i64);
    }
  }
}

/*
==============
SND_RecalcChaninfoPriority
==============
*/
void SND_RecalcChaninfoPriority(int index)
{
  __int64 v1; 
  SndVoice *v2; 
  double VoiceFractionPlayed; 

  v1 = index;
  v2 = &g_snd.voices[index];
  if ( v2->soundFileInfo.loadingState != SFLS_LOADED || (v2->alias->flags & 1) != 0 || (VoiceFractionPlayed = SND_GetVoiceFractionPlayed(index, 0), *(float *)&VoiceFractionPlayed < 1.0) )
    g_snd.chaninfoUnweightedPriority[v1] = v2->priorityAttenuation * v2->priorityVolume;
  else
    g_snd.chaninfoUnweightedPriority[v1] = FLOAT_1_1754944eN38;
}

/*
==============
SND_RecalcPropagation_f
==============
*/
void SND_RecalcPropagation_f(void)
{
  g_snd.doPropagationRecalc = 1;
}

/*
==============
SND_RegisterDvars
==============
*/
void SND_RegisterDvars()
{
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_snd_errorOnMissing = Dvar_RegisterBool("snd_errorOnMissing", 0, 0x40004u, "Cause an error if a sound is missing.");
  DCONST_DVARINT_snd_draw3D = Dvar_RegisterEnum("snd_draw3D", snd_draw3DNames, 0, 0x40004u, "Draw the position and info of world sounds");
  DCONST_DVARINT_snd_levelFadeTime = Dvar_RegisterInt("snd_levelFadeTime", 250, 0, 5000, 0x40004u, "The amout of time in milliseconds for all audio to fade in at the start of a level");
  DCONST_DVARINT_snd_debugStressTest = Dvar_RegisterInt("snd_debugStressTest", 0, 0, 1000, 0x40004u, "Enable random sound stress test, specifying millisecond delay between playing random sounds");
  DCONST_DVARSTR_snd_debugAlias = Dvar_RegisterString("snd_debugAlias", (const char *)&queryFormat.fmt + 3, 0x40004u, "Print out tracking information about a particular alias");
  DCONST_DVARBOOL_snd_drawWeaponRefl = Dvar_RegisterBool("snd_drawWeaponRefl", 0, 0x40004u, "Enables the weapon reflection debug overlay");
  DCONST_DVARINT_snd_debugPropagation = Dvar_RegisterInt("snd_debugPropagation", 0, 0, 2, 0x40004u, "Enables drawing the propagation objects");
  DCONST_DVARBOOL_snd_debugPropagationCull = Dvar_RegisterBool("snd_debugPropagationCull", 1, 0x40004u, "Toggle 3D culling for propagation debugging");
  DCONST_DVARFLT_snd_debugPropagationCullDist = Dvar_RegisterFloat("snd_debugPropagationCullDist", 5000.0, 0.0, 3.4028235e38, 0x40004u, "Culling distance for audio propagation debug drawing");
  DCONST_DVARINT_cg_drawDebugAudioClientTriggers = Dvar_RegisterInt("cg_drawDebugAudioClientTriggers", 0, 0, 3, 0x40004u, "Display client side trigger audio debug information");
  DCONST_DVARFLT_cg_dbgClientTriggerDist = Dvar_RegisterFloat("cg_dbgClientTriggerDist", 1000.0, 0.0, 3.4028235e38, 0x40004u, "Max distance to draw client triggers");
  DCONST_DVARBOOL_cg_dbgClientTriggerCull = Dvar_RegisterBool("cg_dbgClientTriggerCull", 0, 0x40004u, "Toggle 3D culling for client trigger debugging");
  DCONST_DVARINT_snd_occlusionDebug = Dvar_RegisterInt("snd_occlusionDebug", 0, 0, 2, 0x40004u, "Turn on occlusion debug draw. 1 is on, 2 to freeze");
  DCONST_DVARSTR_snd_occlusionDebugAlias = Dvar_RegisterString("snd_occlusionDebugAlias", (const char *)&queryFormat.fmt + 3, 0x40004u, "Alias name filter to show occlusion for");
  DCONST_DVARFLT_snd_occlusionDebugTime = Dvar_RegisterFloat("snd_occlusionDebugTime", 1.0, 0.0, 5.0, 0x40004u, "Time to hold the occlusion debug lines for each sound");
  DCONST_DVARINT_snd_fullOcclusionDebug = Dvar_RegisterInt("snd_fullOcclusionDebug", 0, 0, 2, 0x40004u, "Turn on full occlusion debugging");
  DCONST_DVARSTR_snd_fullOcclusionDebugAlias = Dvar_RegisterString("snd_fullOcclusionDebugAlias", (const char *)&queryFormat.fmt + 3, 0x40004u, "Alias name filter to show occlusion for");
  DCONST_DVARBOOL_snd_debugReplace = Dvar_RegisterBool("snd_debugReplace", 0, 0x40004u, "Print out information about when we stop a playing sound to play another");
  DCONST_DVARBOOL_snd_bankDetailStreamingDebug = Dvar_RegisterBool("snd_bankDetailStreamingDebug", 0, 0x40004u, "Draw info about all sound banks being streamed and how they're ranked");
  DCONST_DVARBOOL_snd_bankDetailStreamingFallback = Dvar_RegisterBool("snd_bankDetailStreamingFallback", 1, 0x40004u, "Allow streaming fallback sounds to be played.");
  DCONST_DVARBOOL_snd_loadPatchBanks = Dvar_RegisterBool("snd_loadPatchBanks", 1, 0x40004u, "Should the game attempt to load patch sound banks.");
  DCONST_DVARBOOL_snd_deferredPlaybackEnabled = Dvar_RegisterBool("snd_deferredPlaybackEnabled", 1, 0x40004u, "Should the game utilize a worker thread to play sounds.");
  DCONST_DVARFLT_snd_propagationMaxNodeRange = Dvar_RegisterFloat("snd_propagationMaxNodeRange", 2000.0, 0.0, 3.4028235e38, 0x40004u, "Max range to look for nearest nodes.");
  DCONST_DVARBOOL_snd_debugWeaponADSR = Dvar_RegisterBool("snd_debugWeaponADSR", 0, 0x40004u, "Turns on console printouts to find missing weapon ADSR entries");
  DCONST_DVARFLT_snd_omnidirectionalPercentage = Dvar_RegisterFloat("snd_omnidirectionalPercentage", 0.25, 0.0, 1.0, 0x40004u, "Percentage of sound volume that is 'directionless'");
  DCONST_DVARINT_snd_occlusionDelay = Dvar_RegisterInt("snd_occlusionDelay", 150, 0, 0x7FFFFFFF, 0x40004u, "Minimum delay in (ms) between occlusion updates");
  DCONST_DVARFLT_snd_occlusionZOffset = Dvar_RegisterFloat("snd_occlusionZOffset", 10.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Vertical offset to apply to occlusion entity positions");
  DCONST_DVARBOOL_snd_useHardOuterEntchannelPriorities = Dvar_RegisterBool("snd_useHardOuterEntchannelPriorities", 1, 0x40004u, "Chooses hard outer entchannel prioritization, false for soft (priority*volume)");
  DCONST_DVARSTR_snd_solo_alias = Dvar_RegisterString("snd_solo_alias", (const char *)&queryFormat.fmt + 3, 0x40004u, "mute alias with matching substring");
  DCONST_DVARSTR_snd_mute_alias = Dvar_RegisterString("snd_mute_alias", (const char *)&queryFormat.fmt + 3, 0x40004u, "mute alias with not matching substring");
  DCONST_DVARSTR_snd_solo_volmod = Dvar_RegisterString("snd_solo_volmod", (const char *)&queryFormat.fmt + 3, 0x40004u, "mute volmod with matching substring");
  DCONST_DVARSTR_snd_mute_volmod = Dvar_RegisterString("snd_mute_volmod", (const char *)&queryFormat.fmt + 3, 0x40004u, "mute volmod with not matching substring");
  DCONST_DVARSTR_snd_solo_channel = Dvar_RegisterString("snd_solo_channel", (const char *)&queryFormat.fmt + 3, 0x40004u, "mute channel with matching substring");
  DCONST_DVARSTR_snd_mute_channel = Dvar_RegisterString("snd_mute_channel", (const char *)&queryFormat.fmt + 3, 0x40004u, "mute channel with not matching substring");
  DCONST_DVARBOOL_snd_mute_2D = Dvar_RegisterBool("snd_mute_2D", 0, 0x40004u, "mute 2D sounds");
  DCONST_DVARBOOL_snd_mute_3D = Dvar_RegisterBool("snd_mute_3D", 0, 0x40004u, "mute 3D sounds");
  DCONST_DVARBOOL_snd_mute_stream = Dvar_RegisterBool("snd_mute_stream", 0, 0x40004u, "mute stream sounds");
  DVARSTR_snd_start_alias = Dvar_RegisterString("NLMRKKRSQQ", (const char *)&queryFormat.fmt + 3, 4u, "start sound");
  DVARSTR_snd_stop_alias = Dvar_RegisterString("NPSQPTMPNO", (const char *)&queryFormat.fmt + 3, 4u, "stop sound");
  DCONST_DVARFLT_snd_start_alias_distance = Dvar_RegisterFloat("snd_start_alias_distance", 20.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARSTR_snd_debug_context_type = Dvar_RegisterString("snd_debug_context_type", (const char *)&queryFormat.fmt + 3, 0x40004u, "enable debug context type");
  DCONST_DVARSTR_snd_debug_context_value = Dvar_RegisterString("snd_debug_context_value", (const char *)&queryFormat.fmt + 3, 0x40004u, "enable debug context value");
  DCONST_DVARBOOL_snd_weapReflect_enabled = Dvar_RegisterBool("snd_weapReflect_enabled", 1, 0x40004u, "Enable/disable the audio weapon reflection feature");
  DCONST_DVARFLT_snd_weapReflect_maxTraceDistance = Dvar_RegisterFloat("snd_weapReflect_maxTraceDistance", 5000.0, 5.0, 3.4028235e38, 0x40004u, "The maximum length of the weapon reflection raycasts");
  DCONST_DVARFLT_snd_weapReflect_distantVoiceDistance = Dvar_RegisterFloat("snd_weapReflect_distantVoiceDistance", 2000.0, 5.0, 3.4028235e38, 0x40004u, "The distance from the sound source the so called distant weapon reflection sound aliases are played");
  DCONST_DVARFLT_snd_dry_scale = Dvar_RegisterFloat("snd_dry_scale", 1.0, 0.0, 1.0, 0x40004u, "scalar value for dry signal path");
  DCONST_DVARFLT_snd_wet_scale = Dvar_RegisterFloat("snd_wet_scale", 1.0, 0.0, 1.0, 0x40004u, "scalar value for wet signal path");
  DCONST_DVARBOOL_snd_reverb_enable = Dvar_RegisterBool("snd_reverb_enable", 1, 0x40004u, "enable/disable reverb processing");
  DCONST_DVARBOOL_snd_delay_enable = Dvar_RegisterBool("snd_delay_enable", 1, 0x40004u, "enable/disable delay processing");
  DVARBOOL_snd_volume_mute = Dvar_RegisterBool("LMSLNRLNOT", 0, 0, "Flag to mute the game sound master volume");
  DVARBOOL_snd_mute_player_dialogue = Dvar_RegisterBool("NMQNRSMLSL", 0, 0, "Flag to mute the player dialogue");
  DCONST_DVARFLT_snd_controller_volume = Dvar_RegisterFloat("snd_controller_volume", 0.5, 0.0, 1.0, 0x40004u, "Controller volume");
  DCONST_DVARFLT_snd_farReverbSpreadMin = Dvar_RegisterFloat("snd_farReverbSpreadMin", 100.0, 0.0, 3.4028235e38, 0x40004u, "Stereo Spread Min Distance for panned far reverbs");
  DCONST_DVARFLT_snd_farReverbSpreadMax = Dvar_RegisterFloat("snd_farReverbSpreadMax", 2000.0, 0.0, 3.4028235e38, 0x40004u, "Stereo Spread Max Distance for panned far reverbs");
  DCONST_DVARFLT_snd_farReverbSpreadMaxAngle = Dvar_RegisterFloat("snd_farReverbSpreadMaxAngle", 30.0, 0.0, 3.4028235e38, 0x40004u, "Stereo Spread Max Angle for panned far reverbs");
  DCONST_DVARFLT_snd_farDryAttenuation = Dvar_RegisterFloat("snd_farDryAttenuation", -24.0, -100.0, 0.0, 0x40004u, "Additional attenuation applied to dry propagation sounds");
  DCONST_DVARFLT_snd_occDepth = Dvar_RegisterFloat("snd_occDepth", 5.0, 0.0, 3.4028235e38, 0x40004u, "The depth a sound can penetrate a surface before being considered occluded");
  DCONST_DVARBOOL_snd_submix_dev_cutout = Dvar_RegisterBool("snd_submix_dev_cutout", 0, 0x40004u, "DEV: cutoff all submix code at runtime, use commandline at launch");
  DCONST_DVARSTR_snd_submix_debug = Dvar_RegisterString("snd_submix_debug", (const char *)&queryFormat.fmt + 3, 0x40004u, "set a debug submix by console / use \"\" to reset.");
  DCONST_DVARINT_snd_submix_debug_draw = Dvar_RegisterInt("snd_submix_debug_draw", 0, 0, 4, 0x40004u, "Turn on submix debug draw. 1: show requested+unique submixes. 2: show volmod parameters. 3: show zone settings. 4: show zone updates.");
  DCONST_DVARINT_snd_submix_debug_units = Dvar_RegisterInt("snd_submix_debug_units", 0, 0, 2, 0x40004u, "Devhost-to-monitor submix/volmod values as 0:Percent (default), 1: Linear [0,1], 2: Hz/DB etc.");
  DCONST_DVARBOOL_snd_submix_disable = Dvar_RegisterBool("snd_submix_disable", 0, 0x40004u, "ignore the submix results for mixing");
  DCONST_DVARBOOL_snd_submix_disable_att = Dvar_RegisterBool("snd_submix_disable_att", 0, 0x40004u, "disable submix attenuation effect");
  DCONST_DVARBOOL_snd_submix_disable_hpf = Dvar_RegisterBool("snd_submix_disable_hpf", 0, 0x40004u, "disable submix HPF effect");
  DCONST_DVARBOOL_snd_submix_disable_lpf = Dvar_RegisterBool("snd_submix_disable_lpf", 0, 0x40004u, "disable submix LPF effect");
  DCONST_DVARBOOL_snd_submix_disable_focuscone = Dvar_RegisterBool("snd_submix_disable_focuscone", 0, 0x40004u, "disable submix focus cone effect");
  DCONST_DVARBOOL_snd_submix_disable_alias = Dvar_RegisterBool("snd_submix_disable_alias", 0, 0x40004u, "disable submixes for ALIAS (existing requests fade)");
  DCONST_DVARBOOL_snd_submix_disable_lua = Dvar_RegisterBool("snd_submix_disable_lua", 0, 0x40004u, "disable submixes for LUA/UI script (existing request persists)");
  DCONST_DVARBOOL_snd_submix_disable_script = Dvar_RegisterBool("snd_submix_disable_script", 0, 0x40004u, "disable submixes for server GSC SCRIPT (existing request persists)");
  DCONST_DVARBOOL_snd_submix_disable_zone = Dvar_RegisterBool("snd_submix_disable_zone", 0, 0x40004u, "disable two ZONE submixes (clears existing settings to fade)");
  DCONST_DVARINT_snd_voicecount_debug_draw = Dvar_RegisterInt("snd_voicecount_debug_draw", 0, 0, 1, 0x40004u, "Turn on voicecount debug draw. 1 is on");
  DCONST_DVARFLT_snd_occfadetime = Dvar_RegisterFloat("snd_occfadetime", 2.0, 0.0, 3.4028235e38, 0x40004u, "The rate in seconds the occlusion will fade for");
  DCONST_DVARBOOL_snd_dsp_meters = Dvar_RegisterBool("snd_dsp_meters", 1, 0x40004u, "enable dsp meters");
  DCONST_DVARSTR_snd_master_override = Dvar_RegisterString("snd_master_override", (const char *)&queryFormat.fmt + 3, 0x40004u, "overide current master");
  DCONST_DVARBOOL_snd_enable_capture_mode = Dvar_RegisterBool("snd_enable_capture_mode", 0, 0x40004u, "enable to alter various parts of the audio pipeline for video capture");
  DCONST_DVARBOOL_snd_voicefutz_enable = Dvar_RegisterBool("snd_voicefutz_enable", 1, 0x40004u, "enable voice chat audio processing");
  DVARINT_snd_voicefutz = Dvar_RegisterEnum("TLOLPTLNQ", snd_voiceFutzNames, 0, 0, "Voice futz effect name");
  DVARINT_snd_voiceChatDeviceType = Dvar_RegisterEnum("MSQLPLNSQN", snd_voiceChatDeviceTypeNames, 0, 0, "Voice chat device type");
  DCONST_DVARINT_snd_solo_propagation = Dvar_RegisterEnum("snd_solo_propagation", g_soloPropagationNames, 0, 0x40004u, "solo sound propagation audio");
  DCONST_DVARBOOL_snd_useSinglepoleFilter = Dvar_RegisterBool("snd_useSinglepoleFilter", 0, 0x40004u, "Use old singlepole filter");
  DCONST_DVARFLT_snd_lpf_override = Dvar_RegisterFloat("snd_lpf_override", -1.0, -1.0, 24000.0, 0x40004u, "LPF filter override");
  DCONST_DVARFLT_snd_hpf_override = Dvar_RegisterFloat("snd_hpf_override", -1.0, -1.0, 24000.0, 0x40004u, "HPF filter override");
  DVARSTR_snd_hitmarker_alias = Dvar_RegisterString("NSNPRRQTOP", "hit_marker_3d", 4u, "start sound");
  DCONST_DVARBOOL_snd_dolby_panning_disable = Dvar_RegisterBool("snd_dolby_panning_disable", 0, 0x40004u, "Disable dolby panner and use old 7.1 panner instead");
  DCONST_DVARINT_snd_transient_bank_budget_weapons = Dvar_RegisterInt("snd_transient_bank_budget_weapons", 26214400, -1, 0x40000000, 0x40004u, "Amount of transient sound bank data to load for weapons. -1 for unlimited.");
  DCONST_DVARINT_snd_transient_bank_budget_vehicles = Dvar_RegisterInt("snd_transient_bank_budget_vehicles", 15728640, -1, 0x40000000, 0x40004u, "Amount of transient sound bank data to load for vehicles. -1 for unlimited.");
  DCONST_DVARINT_snd_transient_bank_budget_scripts = Dvar_RegisterInt("snd_transient_bank_budget_scripts", -1, -1, 0x40000000, 0x40004u, "Amount of transient sound bank data to load for scripts. -1 for unlimited.");
  DCONST_DVARINT_snd_transient_bank_budget_triggers = Dvar_RegisterInt("snd_transient_bank_budget_triggers", -1, -1, 0x40000000, 0x40004u, "Amount of transient sound bank data to load for triggers. -1 for unlimited.");
  DCONST_DVARBOOL_snd_transient_bank_enabled_weapons = Dvar_RegisterBool("snd_transient_bank_enabled_weapons", 1, 0x40004u, "Enable transient sound bank data loading for weapons");
  DCONST_DVARBOOL_snd_transient_bank_enabled_vehicles = Dvar_RegisterBool("snd_transient_bank_enabled_vehicles", 1, 0x40004u, "Enable transient sound bank data loading for vehicles");
  DCONST_DVARBOOL_snd_transient_bank_enabled_scripts = Dvar_RegisterBool("snd_transient_bank_enabled_scripts", 1, 0x40004u, "Enable transient sound bank data loading for scripts");
  DCONST_DVARBOOL_snd_transient_bank_enabled_triggers = Dvar_RegisterBool("snd_transient_bank_enabled_triggers", 1, 0x40004u, "Enable transient sound bank data loading for triggers");
  DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds = Dvar_RegisterBool("snd_notifyAllMissingEquipmentSounds", 0, 0x40004u, "We don't normally notify for all missing sounds - this dconst will do so on all of them");
  DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds = Dvar_RegisterBool("snd_errorOnMissingEquipmentSounds", 0, 0x40004u, "Print errors for missing equipment sounds");
  DVARBOOL_snd_submix_restore_workaround_enable = Dvar_RegisterBool("MKRTMTSMRP", 1, 0, "Enables crash workaround while restoring submixes.");
  DVARBOOL_snd_invalid_stream_buffer_validation_enable = Dvar_RegisterBool("NTKPQTSSLQ", 1, 0, "Enables stream buffer validation checks.");
  Dvar_EndPermanentRegistration();
}

/*
==============
SND_ReleasePhysicsQueryBlock
==============
*/
void SND_ReleasePhysicsQueryBlock(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16499, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( --s_soundPhysicsQueryBlock < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16501, ASSERT_TYPE_ASSERT, "(s_soundPhysicsQueryBlock >= 0)", (const char *)&queryFormat, "s_soundPhysicsQueryBlock >= 0") )
    __debugbreak();
}

/*
==============
SND_RemoveClipMap
==============
*/
void SND_RemoveClipMap(clipMap_t *__formal)
{
  SndBankInfo **v1; 
  const SndBank *bank; 

  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_PROPAGATION);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_WEAPON_REFLECT);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DOOR_PROPAGATION);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
  v1 = &g_sb.bankStack[32];
  do
  {
    bank = (*v1)->bank;
    if ( bank )
    {
      if ( !bank->streamInfo.alwaysLoaded )
        SND_StopBankSoundsWithBankInfo(*v1);
    }
    ++v1;
  }
  while ( (__int64)v1 < (__int64)&g_sb.loadGate );
}

/*
==============
SND_RemoveVoice
==============
*/
void SND_RemoveVoice(unsigned int entchannel)
{
  __int64 v1; 
  int v2; 
  int *v3; 
  __int64 v4; 

  v1 = entchannel;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2051, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v1 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2052, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v4) )
      __debugbreak();
  }
  v2 = g_snd.entchanvoicecount[v1];
  v3 = &g_snd.entchanvoicecount[v1];
  if ( v2 <= 0 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2053, ASSERT_TYPE_ASSERT, "( ( g_snd.entchanvoicecount[entchannel] > 0 ) )", "( g_snd.entchanvoicecount[entchannel] ) = %i", v4) )
      __debugbreak();
  }
  --*v3;
}

/*
==============
SND_Reset
==============
*/
void SND_Reset(bool restart)
{
  const dvar_t *v1; 
  unsigned int v2; 
  const SndGlobals *globals; 
  snd_param_info_t *v4; 
  __int64 v5; 
  float *p_goalrate; 
  float *v7; 
  float value; 
  SndVirtualLoop *virtualLoops; 
  unsigned int v10; 
  int *p_playTime; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v13; 
  ntl::fixed_list<OcclusionLine,594,0> *v14; 
  SndBankInfo **v15; 
  const SndBank *bank; 
  unsigned int v17; 
  __int64 v18; 

  if ( SND_Active() )
  {
    SND_StopSounds(SND_STOP_ALL);
    v1 = DCONST_DVARINT_snd_levelFadeTime;
    g_snd.uiPaused = 0;
    g_snd.stopSoundsAfterMasterFade = 0;
    if ( !DCONST_DVARINT_snd_levelFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_levelFadeTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    v2 = 0;
    while ( 1 )
    {
      globals = g_snd.globals;
      if ( !g_snd.globals || v2 >= g_snd.globals->entchannelCount )
        break;
      v4 = &g_snd.levelFadeInChannelVols.channelvol[v2];
      if ( (snd_local_t *)((char *)&g_snd + 24 * v2) == (snd_local_t *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
        __debugbreak();
      v4->value = 1.0;
      ++v2;
      v4->goalvalue = 1.0;
      *(_QWORD *)&v4->goalrate = 1065353216i64;
      v4->goalgain = 0.0;
    }
    v5 = 0i64;
    p_goalrate = &g_snd.volmods[0].goalrate;
    while ( 1 )
    {
      v7 = p_goalrate - 2;
      value = globals->volmodinfo[v5].value;
      if ( p_goalrate == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6954, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
        __debugbreak();
      *(p_goalrate - 1) = value;
      *(_QWORD *)p_goalrate = 1065353216i64;
      ++v5;
      p_goalrate[2] = 0.0;
      p_goalrate += 6;
      *v7 = value;
      if ( (__int64)p_goalrate >= (__int64)&g_snd.scriptSoundFade.goalrate )
        break;
      globals = g_snd.globals;
    }
    SND_ClearReverbs();
    virtualLoops = g_snd.virtualLoops;
    g_snd.nextVirtualLoopHandle = 0;
    do
    {
      virtualLoops->handle = -1;
      ++virtualLoops;
    }
    while ( (__int64)virtualLoops < (__int64)&g_snd.nextVirtualLoopHandle );
    Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
    Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_WEAPON_REFLECT);
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
    CG_SndAutoSimReset();
    SND_Stop3DSounds();
    v10 = 0;
    p_playTime = &g_ambGlob[0].playTime;
    do
    {
      v10 += 2;
      *(_QWORD *)(p_playTime - 1) = 0i64;
      p_playTime[1] = 0;
      *((_BYTE *)p_playTime + 8) = 0;
      *(_QWORD *)(p_playTime + 3) = 0i64;
      *(_QWORD *)(p_playTime + 7) = 0i64;
      *(_QWORD *)(p_playTime + 5) = 0i64;
      p_playTime[9] = 0;
      *(_QWORD *)(p_playTime + 11) = 0i64;
      p_playTime[13] = 0;
      *((_BYTE *)p_playTime + 56) = 0;
      *(_QWORD *)(p_playTime + 15) = 0i64;
      *(_QWORD *)(p_playTime + 19) = 0i64;
      *(_QWORD *)(p_playTime + 17) = 0i64;
      p_playTime[21] = 0;
      p_playTime += 24;
    }
    while ( v10 < 2 );
    SND_InitEntityParamInfo();
    SND_InitWeaponRelection();
    SND_InitGlobalContexts();
    memset_0(g_snd.entState, 0, sizeof(g_snd.entState));
    s_FXPlaySoundCount = 0;
    s_FXPlaySoundHead = 0;
    SND_ClearAllOcclusionSettings();
    mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_occlusionLines.m_listHead.m_sentinel.mp_next;
    *(_QWORD *)g_snd.entChanFullOcclusionDisabled = 0i64;
    *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[2] = 0i64;
    *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[4] = 0i64;
    *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[6] = 0i64;
    if ( (ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine> > *)s_occlusionLines.m_listHead.m_sentinel.mp_next != &s_occlusionLines.m_listHead )
    {
      v13 = s_occlusionLines.m_freelist.m_head.mp_next;
      do
      {
        v14 = (ntl::fixed_list<OcclusionLine,594,0> *)mp_next[1].mp_next;
        mp_next->mp_next = v13;
        v13 = mp_next;
        s_occlusionLines.m_freelist.m_head.mp_next = mp_next;
        mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14;
      }
      while ( v14 != (ntl::fixed_list<OcclusionLine,594,0> *)&s_occlusionLines.m_listHead );
    }
    s_occlusionLines.m_listHead.m_sentinel.mp_prev = &s_occlusionLines.m_listHead.m_sentinel;
    s_occlusionLines.m_listHead.m_sentinel.mp_next = &s_occlusionLines.m_listHead.m_sentinel;
    SND_SubmixClearAll(0.0);
    s_notifiesCount = 0;
    *(_QWORD *)g_snd.paSpeakerDisabledArray = 0i64;
    s_notifiesHead = 0;
    memset_0(g_snd.delayedWeaponSounds, 0, sizeof(g_snd.delayedWeaponSounds));
    memset_0(g_snd.delayedBulletEvents, 0, sizeof(g_snd.delayedBulletEvents));
    SND_BankDetailStreaming_Init();
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    v15 = &g_sb.bankStack[32];
    do
    {
      bank = (*v15)->bank;
      if ( bank && !bank->streamInfo.alwaysLoaded )
        SND_StopBankSoundsWithBankInfo(*v15);
      ++v15;
    }
    while ( (__int64)v15 < (__int64)&g_sb.loadGate );
    SND_DeferredPlaybackInit();
    SND_SubmixInit();
    SND_MusicInit();
    CG_SND_InitPlayerBreathSystem();
    v17 = 0;
    g_snd.listenerFence = 0;
    g_sndEntityParamFence = 0;
    do
    {
      v18 = (int)v17++;
      g_snd.voiceBusyUpdating[v18] = 0;
    }
    while ( v17 < 0x63 );
  }
}

/*
==============
SND_ResetCanDoPhysicsQuery
==============
*/
void SND_ResetCanDoPhysicsQuery(void)
{
  s_soundPhysicsQueryBlock = 0;
}

/*
==============
SND_ResetEntState
==============
*/
void SND_ResetEntState(void)
{
  memset_0(g_snd.entState, 0, sizeof(g_snd.entState));
}

/*
==============
SND_ResetPauseDefaults
==============
*/
void SND_ResetPauseDefaults(void)
{
  const SndGlobals *globals; 
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 

  globals = g_snd.globals;
  if ( !g_snd.globals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6064, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    globals = g_snd.globals;
  }
  v1 = 0;
  *(_QWORD *)g_snd.entchanOverrides.isPausable = -1i64;
  *(_QWORD *)&g_snd.entchanOverrides.isPausable[2] = -1i64;
  *(_QWORD *)&g_snd.entchanOverrides.isPausable[4] = -1i64;
  for ( *(_QWORD *)&g_snd.entchanOverrides.isPausable[6] = -1i64; v1 < globals->entchannelCount; ++v1 )
  {
    if ( !globals->entchannelInfo[v1].isPausable )
    {
      if ( v1 >= 0x100 )
      {
        LODWORD(v3) = 256;
        LODWORD(v2) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 30, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v2, v3) )
          __debugbreak();
      }
      g_snd.entchanOverrides.isPausable[(__int64)(int)v1 >> 5] &= ~(1 << (v1 & 0x1F));
      globals = g_snd.globals;
    }
  }
}

/*
==============
SND_ResetTimeScaleDefaults
==============
*/
void SND_ResetTimeScaleDefaults(void)
{
  float *timescaleLerp; 
  __int64 v1; 

  timescaleLerp = g_snd.entchanOverrides.timescaleLerp;
  v1 = 16i64;
  do
  {
    *(_QWORD *)timescaleLerp = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp + 1) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp + 2) = 0x3F8000003F800000i64;
    timescaleLerp += 16;
    *((_QWORD *)timescaleLerp - 5) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 4) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 3) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 2) = 0x3F8000003F800000i64;
    *((_QWORD *)timescaleLerp - 1) = 0x3F8000003F800000i64;
    --v1;
  }
  while ( v1 );
}

/*
==============
SND_ResetVoice
==============
*/
void SND_ResetVoice(int index)
{
  SndVoice *v1; 

  v1 = &g_snd.voices[index];
  if ( v1->alias )
  {
    v1->occlusionWaitId = 0;
    if ( v1->soundDoneSoundString )
    {
      if ( !v1->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3373, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
        __debugbreak();
      SND_QueueSoundDoneNotify(v1->sndEnt & 0x1FFFFFFFFi64, v1->soundDoneSoundString);
    }
    SND_SubmixStopFromVoice(v1);
    v1->paused = 0;
    v1->soundFileInfo.loadingState = SFLS_UNLOADED;
    v1->alias = NULL;
    v1->startTimeMSec = 0;
    v1->adsrIndex = -1;
    *(_QWORD *)v1->dopplerEffectLastPos.v = 0i64;
    v1->dopplerEffectLastPos.v[2] = 0.0;
    *(_QWORD *)&v1->playbackId = 0i64;
    v1->occlusionAmount = 0.0;
    v1->waitingForDoppler = 0;
    v1->ignorePause = 0;
    v1->dopplerEffectPitch = 1.0;
    v1->autoSimId = -1;
  }
}

/*
==============
SND_Restore
==============
*/
void SND_Restore(MemoryFile *memFile)
{
  int v2; 
  snd_channelvolgroup *v3; 
  __int64 v4; 
  int currentChannelPriority; 
  double Float; 
  SDLocal *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int i; 
  unsigned __int8 v12; 
  int j; 
  int k; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned __int8 p; 
  unsigned __int8 v19; 
  unsigned int v20; 

  v17 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11063, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !CL_Pause_IsPendingPause() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11064, ASSERT_TYPE_ASSERT, "(CL_Pause_IsPendingPause())", (const char *)&queryFormat, "CL_Pause_IsPendingPause()") )
    __debugbreak();
  if ( g_snd.driverInitialized )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "SND_Restore");
    R_BeginRemoteScreenUpdate();
    v2 = Sys_Milliseconds();
    Com_Printf(16, "Begin sound sync.\n");
    SV_WaitServer();
    Com_CheckError();
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    cls.inUpdateSound = 1;
    SND_StopSounds(SND_KEEP_MUSIC_AND_AMBIENT);
    SND_PauseSounds();
    if ( !g_snd.paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 11090, ASSERT_TYPE_ASSERT, "(g_snd.paused)", (const char *)&queryFormat, "g_snd.paused") )
      __debugbreak();
    g_snd.scriptSoundFade.value = FLOAT_1_0;
    g_snd.scriptSoundFade.goalvalue = FLOAT_1_0;
    g_snd.scriptSoundFade.goalrate = FLOAT_1_0;
    g_snd.scriptSoundFade.goalfraction = 0.0;
    g_snd.scriptSoundFade.goalgain = 0.0;
    g_snd.stopSoundsAfterMasterFade = 0;
    SND_RestoreTransientBanks(memFile);
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_ProfBeginNamedEvent(0xFF8B0000, "Wait Sound Banks");
    while ( g_sd_stream_globals.streamIoActive || !SND_BankDetailStreaming_ActiveBanksLoaded() )
      Sys_Sleep(1);
    Sys_ProfEndNamedEvent();
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    v3 = &g_snd.channelPriorityVolGroups[1];
    v4 = 3i64;
    do
    {
      MemFile_ReadData(memFile, 0x1804ui64, v3++);
      --v4;
    }
    while ( v4 );
    currentChannelPriority = g_snd.currentChannelPriority;
    if ( g_snd.channelPriorityVolGroups[0].active )
      currentChannelPriority = 0;
    if ( g_snd.channelPriorityVolGroups[1].active )
      currentChannelPriority = 1;
    if ( g_snd.channelPriorityVolGroups[2].active )
      currentChannelPriority = 2;
    if ( g_snd.channelPriorityVolGroups[3].active )
      currentChannelPriority = 3;
    g_snd.currentChannelPriority = currentChannelPriority;
    MemFile_ReadData(memFile, 0x18ui64, g_snd.reverbSetting);
    MemFile_ReadData(memFile, 8ui64, &g_snd.mainReverbLerp);
    MemFile_ReadData(memFile, 4ui64, &g_snd.activeMainReverb);
    MemFile_ReadData(memFile, 8ui64, g_snd.farReverbTimestamp);
    MemFile_ReadData(memFile, 8ui64, g_snd.farReverbIds);
    MemFile_ReadData(memFile, 0x30ui64, g_snd.reverbPosition);
    MemFile_ReadData(memFile, 0x10ui64, g_snd.reverbTrigger);
    SND_SetReverbParams(g_snd.reverbSetting[0].presetId, RVB_MAIN_A, 0);
    SND_SetReverbParams(g_snd.reverbSetting[1].presetId, RVB_MAIN_B, 0);
    SND_SetReverbParams(g_snd.farReverbIds[0], RVB_FAR_A, 0);
    SND_SetReverbParams(g_snd.farReverbIds[1], RVB_FAR_B, 0);
    MemFile_ReadData(memFile, 0x420ui64, &g_snd.entchanOverrides);
    Float = MemFile_ReadFloat(memFile);
    sdGlob.eqLerp = *(float *)&Float;
    v7 = &sdGlob;
    v8 = 2i64;
    do
    {
      v9 = 2i64;
      do
      {
        v10 = 256i64;
        do
        {
          MemFile_ReadData(memFile, 0x14ui64, v7);
          v7 = (SDLocal *)((char *)v7 + 20);
          --v10;
        }
        while ( v10 );
        --v9;
      }
      while ( v9 );
      --v8;
    }
    while ( v8 );
    MemFile_ReadData(memFile, 0xD00ui64, g_sndEntityParamInfo);
    MemFile_ReadData(memFile, 0x100ui64, g_sndEntityParamIndex);
    MemFile_ReadData(memFile, 0x80ui64, g_sndSVEntityParamSet);
    MemFile_ReadData(memFile, 0x1804ui64, &g_snd.levelFadeInChannelVols);
    if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10219, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    for ( i = 0; i < g_snd.globals->volmodinfoCount; ++i )
      MemFile_ReadData(memFile, 0x18ui64, &g_snd.volmods[i]);
    SND_InitGlobalContexts();
    MemFile_ReadData(memFile, 1ui64, &p);
    v12 = p;
    if ( p != 0xFF )
    {
      do
      {
        MemFile_ReadData(memFile, 4ui64, &v20);
        g_snd.globalContextsTo[v12] = v20;
        MemFile_ReadData(memFile, 4ui64, &v16);
        g_snd.globalContextsFrom[v12] = v16;
        MemFile_ReadData(memFile, 8ui64, &g_snd.globalContextLerp[v12]);
        MemFile_ReadData(memFile, 1ui64, &v19);
        v12 = v19;
      }
      while ( v19 != 0xFF );
    }
    SND_RestoreEntStates(memFile);
    CG_RestoreAudioTriggerStates(memFile);
    SND_SubmixRestore(memFile);
    SND_RestoreMusicStatus(memFile);
    while ( SND_RestoreVoice(memFile) )
      ;
    while ( SND_RestoreVoice(memFile) )
      ;
    for ( j = 0; j < 4; ++j )
    {
      if ( (unsigned int)j > 3 )
        SND_RestoreStreamVoice(memFile);
    }
    while ( SND_RestoreStreamVoice(memFile) )
      ;
    while ( SND_RestoreVoice(memFile) )
      ;
    for ( k = 0; k < 99; ++k )
      SND_RestoreVoiceSync(k, memFile);
    MemFile_ReadData(memFile, 4ui64, &g_snd.playbackIdCounter);
    cls.inUpdateSound = 0;
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    v15 = Sys_Milliseconds();
    Com_Printf(16, "End sound sync (%d msec).\n", (unsigned int)(v15 - v2));
    R_EndRemoteScreenUpdate();
    g_snd.hasPendingRestore = 1;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SND_RestoreEntStates
==============
*/
void SND_RestoreEntStates(MemoryFile *memFile)
{
  unsigned __int8 v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  int v5; 
  double Float; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  int v25; 
  __int64 v26[2]; 
  vec3_t from; 
  unsigned __int8 p; 
  unsigned __int8 v29; 
  unsigned __int8 v30; 

  v26[1] = -2i64;
  memset_0(g_snd.entState, 0, sizeof(g_snd.entState));
  MemFile_ReadData(memFile, 1ui64, &p);
  v2 = p;
  if ( p != 0xFF )
  {
    do
    {
      MemFile_ReadData(memFile, 8ui64, v26);
      v3 = v2;
      v4 = (unsigned __int64)v2 << 7;
      *(_QWORD *)((char *)&g_snd.entState[0].contextFadeLength[4] + v4) = v26[0];
      MemFile_ReadData(memFile, 1ui64, &p);
      v5 = p;
      *(unsigned int *)((char *)&g_snd.entState[0].hasPosition + v4) = p;
      if ( v5 )
      {
        Float = MemFile_ReadFloat(memFile);
        from.v[0] = *(float *)&Float;
        v7 = MemFile_ReadFloat(memFile);
        from.v[1] = *(float *)&v7;
        v8 = MemFile_ReadFloat(memFile);
        from.v[2] = *(float *)&v8;
        if ( (snd_local_t *)((char *)&g_snd + v4) == (snd_local_t *)-1332360i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 895, ASSERT_TYPE_ASSERT, "(sndEntState)", (const char *)&queryFormat, "sndEntState") )
          __debugbreak();
        SetSecureSndVec3(&from, (vec3_t *)((char *)&g_snd.entState[0].origin.origin + v4), s_soundorg_aab_X, s_soundorg_aab_Y, s_soundorg_aab_Z);
        v9 = MemFile_ReadFloat(memFile);
        *(float *)((char *)g_snd.entState[0].orientation.m[0].v + v4) = *(float *)&v9;
        v10 = MemFile_ReadFloat(memFile);
        *(float *)((char *)&g_snd.entState[0].orientation.m[0].v[1] + v4) = *(float *)&v10;
        v11 = MemFile_ReadFloat(memFile);
        *(float *)((char *)&g_snd.entState[0].orientation.m[0].v[2] + v4) = *(float *)&v11;
        v12 = MemFile_ReadFloat(memFile);
        *(float *)((char *)g_snd.entState[0].orientation.m[1].v + v4) = *(float *)&v12;
        v13 = MemFile_ReadFloat(memFile);
        *(float *)((char *)&g_snd.entState[0].orientation.m[1].v[1] + v4) = *(float *)&v13;
        v14 = MemFile_ReadFloat(memFile);
        *(float *)((char *)&g_snd.entState[0].orientation.m[1].v[2] + v4) = *(float *)&v14;
        v15 = MemFile_ReadFloat(memFile);
        *(float *)((char *)g_snd.entState[0].orientation.m[2].v + v4) = *(float *)&v15;
        v16 = MemFile_ReadFloat(memFile);
        *(float *)((char *)&g_snd.entState[0].orientation.m[2].v[1] + v4) = *(float *)&v16;
        v17 = MemFile_ReadFloat(memFile);
        *(float *)((char *)&g_snd.entState[0].orientation.m[2].v[2] + v4) = *(float *)&v17;
        memset(&from, 0, sizeof(from));
      }
      v18 = 3i64;
      do
      {
        MemFile_ReadData(memFile, 4ui64, &v21);
        v19 = v21;
        if ( v21 )
        {
          MemFile_ReadData(memFile, 1ui64, &v29);
          v20 = v29 + 32 * v3;
          g_snd.entState[0].contextTypes[v20] = v19;
          MemFile_ReadData(memFile, 4ui64, &v22);
          g_snd.entState[0].contextValuesFrom[v20] = v22;
          MemFile_ReadData(memFile, 4ui64, &v23);
          g_snd.entState[0].contextValuesTo[v20] = v23;
          MemFile_ReadData(memFile, 4ui64, &v24);
          g_snd.entState[0].contextFadeTime[v20] = v24;
          MemFile_ReadData(memFile, 4ui64, &v25);
          g_snd.entState[0].contextFadeLength[v20] = v25;
        }
        --v18;
      }
      while ( v18 );
      MemFile_ReadData(memFile, 1ui64, &v30);
      v2 = v30;
    }
    while ( v30 != 0xFF );
  }
}

/*
==============
SND_RestoreEntityParamInfo
==============
*/
void SND_RestoreEntityParamInfo(MemoryFile *memFile)
{
  MemFile_ReadData(memFile, 0xD00ui64, g_sndEntityParamInfo);
  MemFile_ReadData(memFile, 0x100ui64, g_sndEntityParamIndex);
  MemFile_ReadData(memFile, 0x80ui64, g_sndSVEntityParamSet);
}

/*
==============
SND_RestoreEq
==============
*/
void SND_RestoreEq(MemoryFile *memFile)
{
  double Float; 
  SDLocal *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  Float = MemFile_ReadFloat(memFile);
  sdGlob.eqLerp = *(float *)&Float;
  v3 = &sdGlob;
  v4 = 2i64;
  do
  {
    v5 = 2i64;
    do
    {
      v6 = 256i64;
      do
      {
        MemFile_ReadData(memFile, 0x14ui64, v3);
        v3 = (SDLocal *)((char *)v3 + 20);
        --v6;
      }
      while ( v6 );
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
}

/*
==============
SND_RestoreMusicStatus
==============
*/
void SND_RestoreMusicStatus(MemoryFile *memFile)
{
  SndMusicAssetPlaybackState *p_playbackState; 
  __int64 v3; 
  SndMusicState *v4; 
  BOOL p; 
  int v6; 
  int v7; 

  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10160, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10161, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 2ui64, &p);
  if ( (unsigned __int16)p > 0xFu )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10168, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bad data read in SND_RestoreMusicStatus") )
      __debugbreak();
  }
  else
  {
    if ( p > 0 )
    {
      p_playbackState = &g_snd.musicPlaybacks[0].playbackState;
      v3 = p;
      do
      {
        v4 = SND_RestoreSoundMusicState(memFile);
        SndMusicAssetInstance::SetMusicState((SndMusicAssetInstance *)(p_playbackState - 5), v4);
        *(_QWORD *)(p_playbackState - 5) = SND_RestoreSoundMusicAsset(memFile, v4);
        MemFile_ReadData(memFile, 4ui64, p_playbackState - 1);
        MemFile_ReadData(memFile, 4ui64, p_playbackState);
        MemFile_ReadData(memFile, 4ui64, &p);
        *((_DWORD *)p_playbackState + 1) = p;
        MemFile_ReadData(memFile, 4ui64, &v6);
        *((_DWORD *)p_playbackState + 2) = v6;
        MemFile_ReadData(memFile, 4ui64, &v7);
        *((_DWORD *)p_playbackState + 3) = v7;
        p_playbackState += 10;
        --v3;
      }
      while ( v3 );
    }
    g_snd.musicRequestedState = SND_RestoreSoundMusicState(memFile);
    g_snd.musicCurrentState = SND_RestoreSoundMusicState(memFile);
    g_snd.musicPreviousState = SND_RestoreSoundMusicState(memFile);
    MemFile_ReadData(memFile, 1ui64, &p);
    g_snd.currentStateLooping = p;
    MemFile_ReadData(memFile, 4ui64, &g_snd.musicCurrentStateId);
    g_snd.musicCurrentPlaybackAsset = SND_RestoreSoundMusicAsset(memFile, g_snd.musicCurrentState);
  }
}

/*
==============
SND_RestoreSoundAlias
==============
*/
SndAlias *SND_RestoreSoundAlias(MemoryFile *memFile)
{
  const char *CString; 
  int v4; 
  SndAliasList *Alias; 
  SndAlias *head; 
  int v7; 
  int count; 
  SndAlias *v9; 
  bool v10; 
  unsigned __int16 p; 

  CString = MemFile_ReadCString(memFile);
  if ( !*CString )
    return 0i64;
  MemFile_ReadData(memFile, 2ui64, &p);
  v4 = p;
  Alias = SND_FindAlias(CString);
  if ( !Alias )
    goto LABEL_12;
  head = Alias->head;
  v7 = 0;
  count = Alias->count;
  v9 = head;
  v10 = count == 0;
  if ( count <= 0 )
  {
LABEL_8:
    if ( !v10 )
    {
      v9 = head;
      goto LABEL_10;
    }
LABEL_12:
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444ED5C0, 149i64, CString, v4);
    v9 = NULL;
    goto LABEL_13;
  }
  while ( v7 != v4 )
  {
    ++v9;
    if ( ++v7 >= count )
    {
      v10 = count == 0;
      goto LABEL_8;
    }
  }
LABEL_10:
  if ( !v9 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 9994, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
      __debugbreak();
  }
  return v9;
}

/*
==============
SND_RestoreSoundMusicAsset
==============
*/
SndMusicAsset *SND_RestoreSoundMusicAsset(MemoryFile *memFile, const SndMusicState *state)
{
  __int64 v4; 
  SndMusicAsset *result; 
  unsigned int loopCount; 
  int v7; 
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10067, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v4 = 0i64;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( !p || !state )
    return 0i64;
  if ( state->intro.aliasId == p )
    return &state->intro;
  loopCount = state->loopCount;
  if ( loopCount )
  {
    v7 = 0;
    while ( 1 )
    {
      result = &state->loops[v7];
      if ( result->aliasId == p )
        break;
      if ( ++v7 >= loopCount )
        return 0i64;
    }
  }
  else
  {
    if ( state->exit.aliasId == p )
      return &state->exit;
    return (SndMusicAsset *)v4;
  }
  return result;
}

/*
==============
SND_RestoreSoundMusicState
==============
*/
SndMusicState *SND_RestoreSoundMusicState(MemoryFile *memFile)
{
  SndMusicState *MusicState; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10022, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( !p )
    return 0i64;
  MusicState = SND_GetMusicState(p);
  if ( !MusicState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10037, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &MusicState->status);
  return MusicState;
}

/*
==============
SND_RestoreStreamVoice
==============
*/
bool SND_RestoreStreamVoice(MemoryFile *memFile)
{
  SndAlias *v2; 
  const SndAlias *v3; 
  float v4; 
  __int64 v5; 
  const char *v6; 
  unsigned __int16 soundDoneSoundString; 
  float v8; 
  __int64 v9; 
  double v10; 
  unsigned int secondaryId; 
  double v12; 
  float rate; 
  double v14; 
  float v15; 
  SndSubmixReq *submixRef; 
  float fraction; 
  int p; 
  int entChannel; 
  SndStartAliasInfo info; 
  SndVoice voice; 

  if ( !g_snd.paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10682, ASSERT_TYPE_ASSERT, "(g_snd.paused)", (const char *)&queryFormat, "g_snd.paused") )
    __debugbreak();
  v2 = SND_RestoreSoundAlias(memFile);
  v3 = v2;
  if ( v2 )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    SND_RestoreVoiceInfo(&voice, memFile, &entChannel, &fraction);
    info.sndEnt = voice.sndEnt;
    info.alias = v3;
    GetSecureSndVec3(&voice.org.origin, &info.org, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
    v4 = fraction;
    info.volume = voice.volumeInfo.value;
    info.priorityVolume = voice.priorityVolume;
    info.system = SASYS_CGAME;
    info.priorityAttenuation = voice.priorityAttenuation;
    info.pitch = voice.pitchInfo.value;
    info.lfeScale = voice.lfeScale;
    info.lpfCutoff = voice.lpfCutoff;
    info.hpfCutoff = voice.hpfCutoff;
    info.volumeScale = voice.volumeScale;
    info.pitchScale = voice.pitchScale;
    info.contextLerpVolume = voice.contextLerpVolume;
    info.fraction = fraction;
    info.timeshift = 0;
    info.startDelayUs = 0;
    info.adsrIndex = voice.adsrIndex;
    info.fadeTime = 0;
    info.autoSimId = -1;
    info.autoSimTimeStamp = 0i64;
    info.secondaryGroupId = 0;
    info.preDelayed = 1;
    if ( SND_FindAssetsForVoice(&info) )
    {
      if ( (info.alias->flags & 0x380u) > 0x100 )
      {
        v5 = p;
        if ( !SND_StartAliasOnVoiceIndex(&info, p) || SND_IsVoiceFree(v5) )
        {
          SND_QueueSoundDoneNotify(g_snd.voices[v5].sndEnt & 0x1FFFFFFFFi64, g_snd.voices[v5].soundDoneSoundString);
        }
        else
        {
          v6 = j_va("restarted at %.3f", v4);
          SND_DebugAliasPrint(1, info.alias, v6);
          soundDoneSoundString = voice.soundDoneSoundString;
          v8 = voice.offset.v[1];
          v9 = v5;
          g_snd.voices[v9].offset.v[0] = voice.offset.v[0];
          g_snd.voices[v9].offset.v[2] = voice.offset.v[2];
          v10 = *(double *)&voice.submixHpf.value;
          g_snd.voices[v9].offset.v[1] = v8;
          g_snd.voices[v9].soundDoneSoundString = soundDoneSoundString;
          g_snd.voices[v9].playbackId = voice.playbackId;
          secondaryId = voice.secondaryId;
          *(double *)&g_snd.voices[v9].submixHpf.value = v10;
          v12 = *(double *)&voice.submixLpf.value;
          g_snd.voices[v9].secondaryId = secondaryId;
          g_snd.voices[v9].submixHpf.rate = voice.submixHpf.rate;
          rate = voice.submixLpf.rate;
          *(double *)&g_snd.voices[v9].submixLpf.value = v12;
          v14 = *(double *)&voice.submixAttenuation.value;
          g_snd.voices[v9].submixLpf.rate = rate;
          v15 = voice.submixAttenuation.rate;
          *(double *)&g_snd.voices[v9].submixAttenuation.value = v14;
          *(float *)&v14 = voice.basevolume;
          g_snd.voices[v9].submixAttenuation.rate = v15;
          g_snd.voices[v9].submixDef = voice.submixDef;
          submixRef = voice.submixRef;
          g_snd.voices[v9].basevolume = *(float *)&v14;
          *(float *)&v14 = voice.basepitch;
          g_snd.voices[v9].submixRef = submixRef;
          LOBYTE(submixRef) = voice.occlusionMatchesListener;
          g_snd.voices[v9].basepitch = *(float *)&v14;
          *(float *)&v14 = voice.occlusionAmount;
          g_snd.voices[v9].occlusionMatchesListener = (char)submixRef;
          g_snd.voices[v9].occlusionAmount = *(float *)&v14;
          g_snd.voices[v9].occlusionWaitId = 0;
          g_snd.voices[v9].wasRestored = 1;
        }
      }
      else
      {
        Com_PrintWarning(9, "Sound alias %s was restored as a stream voice but is now a loaded alias. Ignoring...\n", info.alias->aliasName);
      }
    }
    else
    {
      Com_PrintError(9, "Sound alias %s's sound data was not yet loaded when played.\n", info.alias->aliasName);
    }
    LOBYTE(v2) = 1;
  }
  return (char)v2;
}

/*
==============
SND_RestoreTransientBanks
==============
*/
void SND_RestoreTransientBanks(MemoryFile *memFile)
{
  SndBankInfo **v2; 
  const SndBank *bank; 
  const char *i; 
  int v5; 
  SndBankInfo **v6; 
  SndBankInfo *v7; 
  const SndBank *v8; 
  const char *name; 
  __int64 v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  const char *j; 
  char v16; 
  unsigned int v17; 
  char v18; 
  unsigned __int64 p; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = &g_sb.bankStack[32];
  do
  {
    bank = (*v2)->bank;
    if ( bank && !bank->streamInfo.alwaysLoaded && (*v2)->bankActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10890, ASSERT_TYPE_ASSERT, "(bankInfo->bank->streamInfo.alwaysLoaded || !bankInfo->bankActive)", "%s\n\tTransient bank %s already active", "bankInfo->bank->streamInfo.alwaysLoaded || !bankInfo->bankActive", bank->name) )
      __debugbreak();
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&g_sb.loadGate );
  SND_BankDetailStreaming_Reset();
  for ( i = MemFile_ReadCString(memFile); *i; i = MemFile_ReadCString(memFile) )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v5 = p;
    v6 = &g_sb.bankStack[32];
    while ( 1 )
    {
      v7 = *v6;
      v8 = (*v6)->bank;
      if ( v8 )
      {
        if ( !v8->streamInfo.alwaysLoaded )
          break;
      }
LABEL_20:
      if ( (__int64)++v6 >= (__int64)&g_sb.loadGate )
      {
        Com_PrintWarning(9, "Could not restore transient sound bank %s\n", i);
        goto LABEL_22;
      }
    }
    name = v8->name;
    v10 = 0x7FFFFFFFi64;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v11 = i - name;
    do
    {
      v12 = name[v11];
      v13 = v10;
      v14 = *name++;
      --v10;
      if ( !v13 )
        break;
      if ( v12 != v14 )
        goto LABEL_20;
    }
    while ( v12 );
    v7->streamIsActive = 1;
    v7->streamPriority = v5;
LABEL_22:
    ;
  }
  g_sb.numScriptDetailStreamRequests = 0;
  for ( j = MemFile_ReadCString(memFile); *j; j = MemFile_ReadCString(memFile) )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v16 = *j;
    if ( *j )
    {
      v17 = 5381;
      do
      {
        ++j;
        v18 = v16 | 0x20;
        if ( (unsigned int)(v16 - 65) >= 0x1A )
          v18 = v16;
        v17 = 65599 * v17 + v18;
        v16 = *j;
      }
      while ( *j );
      if ( !v17 )
        v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    SND_BankDetailStreaming_AddScriptBankRequest(v17, p);
  }
  MemFile_ReadData(memFile, 8ui64, &p);
  g_sb.scriptedSoundbanksStateBitfield = p;
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
}

/*
==============
SND_RestoreVoice
==============
*/
bool SND_RestoreVoice(MemoryFile *memFile)
{
  SndAlias *v2; 
  const SndAlias *v3; 
  float v4; 
  __int64 v5; 
  const char *v6; 
  unsigned __int16 soundDoneSoundString; 
  float v8; 
  double v9; 
  unsigned int secondaryId; 
  double v11; 
  float rate; 
  double v13; 
  float v14; 
  SndSubmixReq *submixRef; 
  float fraction; 
  int p; 
  int entChannel; 
  SndStartAliasInfo info; 
  SndVoice voice; 

  if ( !g_snd.paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10567, ASSERT_TYPE_ASSERT, "(g_snd.paused)", (const char *)&queryFormat, "g_snd.paused") )
    __debugbreak();
  v2 = SND_RestoreSoundAlias(memFile);
  v3 = v2;
  if ( v2 )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    SND_RestoreVoiceInfo(&voice, memFile, &entChannel, &fraction);
    info.sndEnt = voice.sndEnt;
    info.alias = v3;
    GetSecureSndVec3(&voice.org.origin, &info.org, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
    v4 = fraction;
    info.volume = voice.volumeInfo.value;
    info.priorityVolume = voice.priorityVolume;
    info.system = SASYS_CGAME;
    info.priorityAttenuation = voice.priorityAttenuation;
    info.pitch = voice.pitchInfo.value;
    info.lfeScale = voice.lfeScale;
    info.lpfCutoff = voice.lpfCutoff;
    info.hpfCutoff = voice.hpfCutoff;
    info.volumeScale = voice.volumeScale;
    info.pitchScale = voice.pitchScale;
    info.contextLerpVolume = voice.contextLerpVolume;
    info.fraction = fraction;
    info.timeshift = 0;
    info.startDelayUs = 0;
    info.adsrIndex = voice.adsrIndex;
    info.fadeTime = 0;
    info.autoSimId = -1;
    info.autoSimTimeStamp = 0i64;
    info.secondaryGroupId = 0;
    info.preDelayed = 1;
    if ( SND_FindAssetsForVoice(&info) )
    {
      if ( (info.alias->flags & 0x380u) <= 0x100 )
      {
        v5 = p;
        if ( SND_StartAliasOnVoiceIndex(&info, p) )
        {
          v6 = j_va("restarted at %.3f", v4);
          SND_DebugAliasPrint(1, info.alias, v6);
          soundDoneSoundString = voice.soundDoneSoundString;
          v8 = voice.offset.v[1];
          g_snd.voices[v5].offset.v[0] = voice.offset.v[0];
          g_snd.voices[v5].offset.v[2] = voice.offset.v[2];
          v9 = *(double *)&voice.submixHpf.value;
          g_snd.voices[v5].offset.v[1] = v8;
          g_snd.voices[v5].soundDoneSoundString = soundDoneSoundString;
          g_snd.voices[v5].playbackId = voice.playbackId;
          secondaryId = voice.secondaryId;
          *(double *)&g_snd.voices[v5].submixHpf.value = v9;
          v11 = *(double *)&voice.submixLpf.value;
          g_snd.voices[v5].secondaryId = secondaryId;
          g_snd.voices[v5].submixHpf.rate = voice.submixHpf.rate;
          rate = voice.submixLpf.rate;
          *(double *)&g_snd.voices[v5].submixLpf.value = v11;
          v13 = *(double *)&voice.submixAttenuation.value;
          g_snd.voices[v5].submixLpf.rate = rate;
          v14 = voice.submixAttenuation.rate;
          *(double *)&g_snd.voices[v5].submixAttenuation.value = v13;
          *(float *)&v13 = voice.basevolume;
          g_snd.voices[v5].submixAttenuation.rate = v14;
          g_snd.voices[v5].submixDef = voice.submixDef;
          submixRef = voice.submixRef;
          g_snd.voices[v5].basevolume = *(float *)&v13;
          *(float *)&v13 = voice.basepitch;
          g_snd.voices[v5].submixRef = submixRef;
          LOBYTE(submixRef) = voice.occlusionMatchesListener;
          g_snd.voices[v5].basepitch = *(float *)&v13;
          *(float *)&v13 = voice.occlusionAmount;
          g_snd.voices[v5].occlusionMatchesListener = (char)submixRef;
          g_snd.voices[v5].occlusionAmount = *(float *)&v13;
          g_snd.voices[v5].occlusionWaitId = 0;
          g_snd.voices[v5].wasRestored = 1;
        }
        else
        {
          SND_QueueSoundDoneNotify(g_snd.voices[v5].sndEnt & 0x1FFFFFFFFi64, g_snd.voices[v5].soundDoneSoundString);
        }
      }
      else
      {
        Com_PrintWarning(9, "Sound alias %s was restored as a loaded voice but is now a streaming alias. Ignoring...\n", info.alias->aliasName);
      }
    }
    else
    {
      Com_PrintError(9, "Sound alias %s's sound data was not yet loaded when played.\n", info.alias->aliasName);
    }
    LOBYTE(v2) = 1;
  }
  return (char)v2;
}

/*
==============
SND_RestoreVoiceIndex
==============
*/
__int64 SND_RestoreVoiceIndex(MemoryFile *memFile)
{
  unsigned int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  return p;
}

/*
==============
SND_RestoreVoiceInfo
==============
*/
void SND_RestoreVoiceInfo(SndVoice *voice, MemoryFile *memFile, int *entChannel, float *fraction)
{
  double Float; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  vec3_t origin; 
  unsigned __int64 p; 

  memset_0(voice, 0, sizeof(SndVoice));
  MemFile_ReadData(memFile, 8ui64, &p);
  voice->sndEnt = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *entChannel = (unsigned __int8)p;
  Float = MemFile_ReadFloat(memFile);
  voice->basepitch = *(float *)&Float;
  v9 = MemFile_ReadFloat(memFile);
  voice->pitchScale = *(float *)&v9;
  voice->distanceScale = 1.0;
  v10 = MemFile_ReadFloat(memFile);
  voice->pitchInfo.value = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  voice->pitchInfo.goalvalue = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  voice->pitchInfo.goalrate = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  voice->priorityVolume = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  voice->priorityAttenuation = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  voice->basevolume = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  voice->volumeScale = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  voice->volumeInfo.value = *(float *)&v17;
  v18 = MemFile_ReadFloat(memFile);
  voice->volumeInfo.goalvalue = *(float *)&v18;
  v19 = MemFile_ReadFloat(memFile);
  voice->volumeInfo.goalrate = *(float *)&v19;
  v20 = MemFile_ReadFloat(memFile);
  voice->volumeInfo.goalfraction = *(float *)&v20;
  v21 = MemFile_ReadFloat(memFile);
  voice->volumeInfo.goalgain = *(float *)&v21;
  v22 = MemFile_ReadFloat(memFile);
  voice->contextLerpVolume = *(float *)&v22;
  MemFile_ReadData(memFile, 1ui64, &p);
  voice->occlusionMatchesListener = p;
  v23 = MemFile_ReadFloat(memFile);
  voice->occlusionAmount = *(float *)&v23;
  v24 = MemFile_ReadFloat(memFile);
  voice->offset.v[0] = *(float *)&v24;
  v25 = MemFile_ReadFloat(memFile);
  voice->offset.v[1] = *(float *)&v25;
  v26 = MemFile_ReadFloat(memFile);
  voice->offset.v[2] = *(float *)&v26;
  v27 = MemFile_ReadFloat(memFile);
  origin.v[0] = *(float *)&v27;
  v28 = MemFile_ReadFloat(memFile);
  origin.v[1] = *(float *)&v28;
  v29 = MemFile_ReadFloat(memFile);
  origin.v[2] = *(float *)&v29;
  SndVoice_SetOrigin(voice, &origin);
  MemFile_ReadData(memFile, 2ui64, &p);
  voice->soundDoneSoundString = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  voice->adsrIndex = p;
  MemFile_ReadData(memFile, 4ui64, &voice->playbackId);
  MemFile_ReadData(memFile, 4ui64, &voice->secondaryId);
  v30 = MemFile_ReadFloat(memFile);
  voice->lfeScale = *(float *)&v30;
  MemFile_ReadData(memFile, 0xCui64, &voice->submixAttenuation);
  MemFile_ReadData(memFile, 0xCui64, &voice->submixLpf);
  MemFile_ReadData(memFile, 0xCui64, &voice->submixHpf);
  v31 = MemFile_ReadFloat(memFile);
  voice->lpfCutoff = *(float *)&v31;
  v32 = MemFile_ReadFloat(memFile);
  voice->hpfCutoff = *(float *)&v32;
  SND_SubmixVoiceRestore(memFile, voice);
  v33 = MemFile_ReadFloat(memFile);
  *fraction = *(float *)&v33;
  memset(&origin, 0, sizeof(origin));
}

/*
==============
SND_RestoreVoiceSync
==============
*/
void SND_RestoreVoiceSync(int voiceIndex, MemoryFile *memFile)
{
  __int64 v2; 
  sd_voice *v4; 
  double Float; 
  double v6; 
  int VoiceIndexForId; 
  sd_voice *v8; 
  int p; 
  unsigned int id; 

  v2 = voiceIndex;
  v4 = g_sd.voices[voiceIndex];
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( (_BYTE)p )
  {
    if ( v4 )
    {
      v4->isSync = 1;
      Float = MemFile_ReadFloat(memFile);
      v4->syncPeriodFrames = *(float *)&Float;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncMeter = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStart = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartFrameOffset = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartDelayBeats = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartFadeBeats = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStop = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopBeats = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopDelayBeats = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopFadeBeats = p;
      MemFile_ReadData(memFile, 4ui64, &v4->syncState);
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncTimestamp = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartDelayFrames = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartFadeFrames = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopDelayFrames = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopFadeFrames = p;
      MemFile_ReadData(memFile, 1ui64, &p);
      v4->syncSoftStart = (_BYTE)p == 1;
      v6 = MemFile_ReadFloat(memFile);
      v4->syncEndScale = *(float *)&v6;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartDelayFramesDecoded = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStartFadeFramesDecoded = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopDelayFramesDecoded = p;
      MemFile_ReadData(memFile, 4ui64, &p);
      v4->syncStopFadeFramesDecoded = p;
      MemFile_ReadData(memFile, 4ui64, &id);
      VoiceIndexForId = SND_GetVoiceIndexForId(id);
      if ( VoiceIndexForId != -1 )
      {
        v8 = g_sd.voices[v2];
        if ( v8 )
          v8->syncMaster = g_sd.voices[VoiceIndexForId];
      }
    }
  }
}

/*
==============
SND_SV_CheckAndClearEntityHasParams
==============
*/
bool SND_SV_CheckAndClearEntityHasParams(int entNum)
{
  int v1; 
  unsigned __int16 *v2; 
  bool result; 

  v1 = 0;
  while ( 1 )
  {
    v2 = &g_sndSVEntityParamSet[((_BYTE)v1 + (unsigned __int8)(entNum % 64)) & 0x3F];
    if ( *v2 == entNum )
      break;
    if ( (unsigned int)++v1 >= 0x40 )
      return 0;
  }
  result = 1;
  *v2 = 2047;
  return result;
}

/*
==============
SND_SV_SetEntityHasParams
==============
*/
void SND_SV_SetEntityHasParams(int entNum)
{
  char v2; 
  unsigned int i; 
  unsigned __int16 *v4; 
  int v5; 

  v2 = entNum % 64;
  for ( i = 0; i < 0x40; ++i )
  {
    v4 = &g_sndSVEntityParamSet[((_BYTE)i + v2) & 0x3F];
    v5 = *v4;
    if ( v5 == entNum )
      break;
    if ( (_WORD)v5 == 2047 )
    {
      if ( (entNum < 0 || (unsigned int)entNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)entNum, "signed", entNum) )
        __debugbreak();
      *v4 = entNum;
      return;
    }
  }
}

/*
==============
SND_Save
==============
*/
void SND_Save(MemoryFile *memFile)
{
  const SndBankInfo **v2; 
  const SndBankInfo *v3; 
  const SndBank *bank; 
  int v5; 
  int *p_streamPriority; 
  snd_channelvolgroup *v7; 
  __int64 v8; 
  SDLocal *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 i; 
  int v14; 
  TimeLerp *globalContextLerp; 
  __int64 v16; 
  unsigned int *globalContextsFrom; 
  int j; 
  int k; 
  int v20; 
  bool *v21; 
  int *v22; 
  __int64 v23; 
  snd_alias_system_t *p_system; 
  double VoiceFractionPlayed; 
  int m; 
  int n; 
  __int64 v28; 
  unsigned __int64 p; 

  if ( SND_Active() )
  {
    SND_ProcessPendingRestore();
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    cls.inUpdateSound = 1;
    Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
    Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
    v2 = (const SndBankInfo **)&g_sb.bankStack[32];
    do
    {
      v3 = *v2;
      bank = (*v2)->bank;
      if ( bank && !bank->streamInfo.alwaysLoaded && v3->bankActive && SND_IsBankInUse(*v2) )
      {
        MemFile_WriteCString(memFile, v3->bank->name);
        LODWORD(p) = v3->streamPriority;
        MemFile_WriteData(memFile, 4ui64, &p);
      }
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&g_sb.loadGate );
    MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
    v5 = 0;
    if ( g_sb.numScriptDetailStreamRequests > 0 )
    {
      p_streamPriority = &g_sb.scriptDetailStreamRequests[0].streamPriority;
      do
      {
        MemFile_WriteCString(memFile, ***((const char ****)p_streamPriority - 1));
        LODWORD(p) = *p_streamPriority;
        MemFile_WriteData(memFile, 4ui64, &p);
        ++v5;
        p_streamPriority += 8;
      }
      while ( v5 < g_sb.numScriptDetailStreamRequests );
    }
    MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
    p = g_sb.scriptedSoundbanksStateBitfield;
    MemFile_WriteData(memFile, 8ui64, &p);
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    v7 = &g_snd.channelPriorityVolGroups[1];
    v8 = 3i64;
    do
    {
      MemFile_WriteData(memFile, 0x1804ui64, v7++);
      --v8;
    }
    while ( v8 );
    MemFile_WriteData(memFile, 0x18ui64, g_snd.reverbSetting);
    MemFile_WriteData(memFile, 8ui64, &g_snd.mainReverbLerp);
    MemFile_WriteData(memFile, 4ui64, &g_snd.activeMainReverb);
    MemFile_WriteData(memFile, 8ui64, g_snd.farReverbTimestamp);
    MemFile_WriteData(memFile, 8ui64, g_snd.farReverbIds);
    MemFile_WriteData(memFile, 0x30ui64, g_snd.reverbPosition);
    MemFile_WriteData(memFile, 0x10ui64, g_snd.reverbTrigger);
    MemFile_WriteData(memFile, 0x420ui64, &g_snd.entchanOverrides);
    MemFile_WriteFloat(memFile, sdGlob.eqLerp);
    v9 = &sdGlob;
    v10 = 2i64;
    do
    {
      v11 = 2i64;
      do
      {
        v12 = 256i64;
        do
        {
          MemFile_WriteData(memFile, 0x14ui64, v9);
          v9 = (SDLocal *)((char *)v9 + 20);
          --v12;
        }
        while ( v12 );
        --v11;
      }
      while ( v11 );
      --v10;
    }
    while ( v10 );
    MemFile_WriteData(memFile, 0xD00ui64, g_sndEntityParamInfo);
    MemFile_WriteData(memFile, 0x100ui64, g_sndEntityParamIndex);
    MemFile_WriteData(memFile, 0x80ui64, g_sndSVEntityParamSet);
    MemFile_WriteData(memFile, 0x1804ui64, &g_snd.levelFadeInChannelVols);
    if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10203, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    for ( i = 0i64; (unsigned int)i < g_snd.globals->volmodinfoCount; i = (unsigned int)(i + 1) )
      MemFile_WriteData(memFile, 0x18ui64, &g_snd.volmods[i]);
    v14 = 0;
    globalContextLerp = g_snd.globalContextLerp;
    v16 = 0i64;
    globalContextsFrom = g_snd.globalContextsFrom;
    do
    {
      if ( globalContextsFrom[64] || *globalContextsFrom )
      {
        if ( v14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v14, "signed", v16) )
          __debugbreak();
        LOBYTE(p) = v14;
        MemFile_WriteData(memFile, 1ui64, &p);
        LODWORD(p) = globalContextsFrom[64];
        MemFile_WriteData(memFile, 4ui64, &p);
        LODWORD(p) = *globalContextsFrom;
        MemFile_WriteData(memFile, 4ui64, &p);
        MemFile_WriteData(memFile, 8ui64, globalContextLerp);
      }
      ++v14;
      ++v16;
      ++globalContextsFrom;
      ++globalContextLerp;
    }
    while ( v14 < 64 );
    LOBYTE(p) = -1;
    MemFile_WriteData(memFile, 1ui64, &p);
    SND_SaveEntStates(memFile);
    CG_SaveAudioTriggerStates(memFile);
    SND_SubmixSave(memFile);
    SND_SaveMusicStatus(memFile);
    if ( g_snd.driverInitialized )
    {
      for ( j = 32; j < 80; ++j )
        SND_SaveVoice(j, memFile);
    }
    MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
    if ( g_snd.driverInitialized )
    {
      for ( k = 0; k < 32; ++k )
        SND_SaveVoice(k, memFile);
    }
    MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
    if ( g_snd.driverInitialized )
    {
      v20 = 80;
      v21 = &sdGlob.voiceAlloc[80];
      v22 = (int *)&g_snd.chaninfoEntchannel[80];
      v23 = 80i64;
      p_system = &g_snd.voices[80].system;
      while ( 1 )
      {
        if ( (unsigned int)(v20 - 80) > 0xD )
        {
          LODWORD(v28) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10634, ASSERT_TYPE_ASSERT, "( ( chanIndex >= ((0 + 32) + 48) && chanIndex < ((0 + 32) + 48) + ( SND_TRACK_COUNT + 10 ) ) )", "( chanIndex ) = %i", v28) )
            __debugbreak();
        }
        if ( v20 >= 84 )
          break;
        if ( (unsigned int)(v20 - 80) > 3 )
        {
          if ( (unsigned int)v20 > 0x62 )
          {
            LODWORD(v28) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v28) )
              __debugbreak();
          }
          if ( !*v21 || *p_system != SASYS_CGAME )
          {
            MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
            goto LABEL_56;
          }
          goto LABEL_54;
        }
LABEL_56:
        ++v20;
        ++v23;
        ++v21;
        p_system += 492;
        ++v22;
        if ( v20 >= 94 )
          goto LABEL_57;
      }
      if ( !*v21 || *p_system != SASYS_CGAME )
        goto LABEL_56;
LABEL_54:
      SND_SaveSoundAlias(*(const SndAlias **)(p_system - 19), memFile);
      LODWORD(p) = truncate_cast<int,__int64>(v23 * 1968 / 1968);
      MemFile_WriteData(memFile, 4ui64, &p);
      VoiceFractionPlayed = SND_GetVoiceFractionPlayed(v20, 1);
      SND_SaveVoiceInfo(&g_snd.voices[v23], memFile, *v22, *(float *)&VoiceFractionPlayed);
      goto LABEL_56;
    }
LABEL_57:
    MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
    if ( g_snd.driverInitialized )
    {
      for ( m = 94; m < 99; ++m )
        SND_SaveVoice(m, memFile);
    }
    MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
    for ( n = 0; n < 99; ++n )
      SND_SaveVoiceSync(n, memFile);
    MemFile_WriteData(memFile, 4ui64, &g_snd.playbackIdCounter);
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    cls.inUpdateSound = 0;
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  }
}

/*
==============
SND_SaveEntStates
==============
*/
void SND_SaveEntStates(MemoryFile *memFile)
{
  unsigned int v2; 
  __int64 v3; 
  vec3_t *v4; 
  unsigned int *v5; 
  bool v6; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  _DWORD *v; 
  unsigned int *v11; 
  vec3_t *v12; 
  vec3_t to; 
  __int64 p; 
  unsigned int v15; 
  __int64 v16; 

  v2 = 0;
  v15 = 0;
  v3 = 0i64;
  v16 = 0i64;
  v4 = &g_snd.entState[0].orientation.m[1];
  v12 = &g_snd.entState[0].orientation.m[1];
  v5 = &g_snd.entState[0].contextTypes[2];
  v11 = &g_snd.entState[0].contextTypes[2];
  do
  {
    v6 = *v5 != 0 || *(v5 - 1) != 0;
    if ( *(v5 - 2) )
      v6 = 1;
    if ( v6 || LODWORD(v4[3].v[1]) != 0 )
    {
      LOBYTE(p) = v2;
      MemFile_WriteData(memFile, 1ui64, &p);
      p = *(_QWORD *)&v4[-2].y;
      MemFile_WriteData(memFile, 8ui64, &p);
      v7 = LODWORD(v4[3].v[1]);
      if ( v7 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v7, "unsigned", LODWORD(v4[3].v[1])) )
        __debugbreak();
      LOBYTE(p) = v7;
      MemFile_WriteData(memFile, 1ui64, &p);
      if ( LODWORD(v4[3].v[1]) )
      {
        if ( v4 == (vec3_t *)84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 875, ASSERT_TYPE_ASSERT, "(sndEntState)", (const char *)&queryFormat, "sndEntState") )
          __debugbreak();
        GetSecureSndVec3(v4 + 2, &to, s_soundorg_aab_X, s_soundorg_aab_Y, s_soundorg_aab_Z);
        MemFile_WriteData(memFile, 0xCui64, &to);
        MemFile_WriteData(memFile, 0xCui64, &v4[-1]);
        MemFile_WriteData(memFile, 0xCui64, v4);
        MemFile_WriteData(memFile, 0xCui64, &v4[1]);
        memset(&to, 0, sizeof(to));
      }
      v8 = 0;
      v9 = 0i64;
      v = (_DWORD *)v4[-7].v;
      do
      {
        LODWORD(p) = *v;
        MemFile_WriteData(memFile, 4ui64, &p);
        if ( *v )
        {
          if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v8, "signed", v9) )
            __debugbreak();
          LOBYTE(p) = v8;
          MemFile_WriteData(memFile, 1ui64, &p);
          LODWORD(p) = v[3];
          MemFile_WriteData(memFile, 4ui64, &p);
          LODWORD(p) = v[6];
          MemFile_WriteData(memFile, 4ui64, &p);
          LODWORD(p) = v[9];
          MemFile_WriteData(memFile, 4ui64, &p);
          LODWORD(p) = v[12];
          MemFile_WriteData(memFile, 4ui64, &p);
        }
        ++v8;
        ++v9;
        ++v;
      }
      while ( v8 < 3 );
      v4 = v12;
      v2 = v15;
      v5 = v11;
      v3 = v16;
    }
    v15 = ++v2;
    v16 = ++v3;
    v5 += 32;
    v11 = v5;
    v4 = (vec3_t *)((char *)v4 + 128);
    v12 = v4;
  }
  while ( v2 < 0x80 );
  LOBYTE(p) = -1;
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
SND_SaveEntityParamInfo
==============
*/
void SND_SaveEntityParamInfo(MemoryFile *memFile)
{
  MemFile_WriteData(memFile, 0xD00ui64, g_sndEntityParamInfo);
  MemFile_WriteData(memFile, 0x100ui64, g_sndEntityParamIndex);
  MemFile_WriteData(memFile, 0x80ui64, g_sndSVEntityParamSet);
}

/*
==============
SND_SaveEq
==============
*/
void SND_SaveEq(MemoryFile *memFile)
{
  SDLocal *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  MemFile_WriteFloat(memFile, sdGlob.eqLerp);
  v2 = &sdGlob;
  v3 = 2i64;
  do
  {
    v4 = 2i64;
    do
    {
      v5 = 256i64;
      do
      {
        MemFile_WriteData(memFile, 0x14ui64, v2);
        v2 = (SDLocal *)((char *)v2 + 20);
        --v5;
      }
      while ( v5 );
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
}

/*
==============
SND_SaveMusicStatus
==============
*/
void SND_SaveMusicStatus(MemoryFile *memFile)
{
  SndMusicState **p_state; 
  __int64 v3; 
  __int16 v4; 
  __int64 v5; 
  bool v6; 
  __int16 v7; 
  unsigned int *p_id; 
  const SndMusicState *v9; 
  __int64 v10; 
  const SndMusicAsset *musicCurrentPlaybackAsset; 
  unsigned int p; 

  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10106, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10107, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  p_state = &g_snd.musicPlaybacks[0].state;
  v3 = 16i64;
  v4 = 0;
  v5 = 16i64;
  do
  {
    v6 = *p_state == NULL;
    v7 = v4 + 1;
    p_state += 5;
    if ( v6 )
      v7 = v4;
    v4 = v7;
    --v5;
  }
  while ( v5 );
  LOWORD(p) = v7;
  MemFile_WriteData(memFile, 2ui64, &p);
  p_id = &g_snd.musicPlaybacks[0].id;
  do
  {
    v9 = (const SndMusicState *)*((_QWORD *)p_id - 1);
    if ( v9 )
    {
      SND_SaveSoundMusicState(v9, memFile);
      v10 = *((_QWORD *)p_id - 2);
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10047, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      if ( v10 )
        p = *(_DWORD *)(v10 + 64);
      else
        p = 0;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 4ui64, p_id);
      MemFile_WriteData(memFile, 4ui64, p_id + 1);
      p = p_id[2];
      MemFile_WriteData(memFile, 4ui64, &p);
      p = p_id[3];
      MemFile_WriteData(memFile, 4ui64, &p);
      p = p_id[4];
      MemFile_WriteData(memFile, 4ui64, &p);
    }
    p_id += 10;
    --v3;
  }
  while ( v3 );
  SND_SaveSoundMusicState(g_snd.musicRequestedState, memFile);
  SND_SaveSoundMusicState(g_snd.musicCurrentState, memFile);
  SND_SaveSoundMusicState(g_snd.musicPreviousState, memFile);
  LOBYTE(p) = g_snd.currentStateLooping;
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 4ui64, &g_snd.musicCurrentStateId);
  musicCurrentPlaybackAsset = NULL;
  if ( g_snd.musicCurrentState )
    musicCurrentPlaybackAsset = g_snd.musicCurrentPlaybackAsset;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10047, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( musicCurrentPlaybackAsset )
    p = musicCurrentPlaybackAsset->aliasId;
  else
    p = 0;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
SND_SaveSoundAlias
==============
*/
void SND_SaveSoundAlias(const SndAlias *alias, MemoryFile *memFile)
{
  SndAliasList *v4; 
  int count; 
  int v6; 
  const SndAlias *head; 
  __int16 p; 

  MemFile_WriteCString(memFile, alias->aliasName);
  if ( !alias->aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14979, ASSERT_TYPE_ASSERT, "(alias->aliasName)", (const char *)&queryFormat, "alias->aliasName") )
    __debugbreak();
  v4 = SND_FindAlias(alias->aliasName);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14982, ASSERT_TYPE_ASSERT, "(aliasList)", (const char *)&queryFormat, "aliasList") )
    __debugbreak();
  count = v4->count;
  v6 = 0;
  head = v4->head;
  if ( count <= 0 )
  {
LABEL_10:
    LOWORD(v6) = 0;
  }
  else
  {
    while ( head != alias )
    {
      ++head;
      if ( ++v6 >= count )
        goto LABEL_10;
    }
  }
  p = v6;
  MemFile_WriteData(memFile, 2ui64, &p);
}

/*
==============
SND_SaveSoundMusicState
==============
*/
void SND_SaveSoundMusicState(const SndMusicState *state, MemoryFile *memFile)
{
  SndMusicStateStatus *p_status; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10001, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( state )
  {
    p = SND_HashName(state->name);
    MemFile_WriteData(memFile, 4ui64, &p);
    p_status = &state->status;
  }
  else
  {
    p = 0;
    p_status = (SndMusicStateStatus *)&p;
  }
  MemFile_WriteData(memFile, 4ui64, p_status);
}

/*
==============
SND_SaveTransientBanks
==============
*/
void SND_SaveTransientBanks(MemoryFile *memFile)
{
  const SndBankInfo **v2; 
  const SndBankInfo *v3; 
  const SndBank *bank; 
  int v5; 
  int *p_streamPriority; 
  unsigned __int64 p; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = (const SndBankInfo **)&g_sb.bankStack[32];
  do
  {
    v3 = *v2;
    bank = (*v2)->bank;
    if ( bank && !bank->streamInfo.alwaysLoaded && v3->bankActive && SND_IsBankInUse(*v2) )
    {
      MemFile_WriteCString(memFile, v3->bank->name);
      LODWORD(p) = v3->streamPriority;
      MemFile_WriteData(memFile, 4ui64, &p);
    }
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&g_sb.loadGate );
  MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
  v5 = 0;
  if ( g_sb.numScriptDetailStreamRequests > 0 )
  {
    p_streamPriority = &g_sb.scriptDetailStreamRequests[0].streamPriority;
    do
    {
      MemFile_WriteCString(memFile, ***((const char ****)p_streamPriority - 1));
      LODWORD(p) = *p_streamPriority;
      MemFile_WriteData(memFile, 4ui64, &p);
      ++v5;
      p_streamPriority += 8;
    }
    while ( v5 < g_sb.numScriptDetailStreamRequests );
  }
  MemFile_WriteCString(memFile, (const char *)&queryFormat.fmt + 3);
  p = g_sb.scriptedSoundbanksStateBitfield;
  MemFile_WriteData(memFile, 8ui64, &p);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
}

/*
==============
SND_SaveVoice
==============
*/
void SND_SaveVoice(int chanIndex, MemoryFile *memFile)
{
  __int64 v2; 
  unsigned __int64 v4; 
  const SndVoice *v5; 
  double VoiceFractionPlayed; 
  __int64 v8; 

  v2 = chanIndex;
  if ( (unsigned int)chanIndex > 0x62 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10536, ASSERT_TYPE_ASSERT, "( ( chanIndex >= 0 && chanIndex < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( chanIndex ) = %i", chanIndex) )
      __debugbreak();
    if ( (unsigned int)v2 > 0x62 )
    {
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v8) )
        __debugbreak();
    }
  }
  if ( sdGlob.voiceAlloc[v2] )
  {
    v4 = 1968 * v2;
    if ( LODWORD(g_snd.chaninfoUnweightedPriority[492 * v2 - 48661]) == 1 && g_snd.chaninfoUnweightedPriority[v4 / 4 - 48635] != 0.0 )
    {
      SND_SaveSoundAlias(*(const SndAlias **)&g_snd.chaninfoUnweightedPriority[v4 / 4 - 48680], memFile);
      v5 = &g_snd.voices[v4 / 0x7B0];
      SND_SaveVoiceIndex(memFile, v5);
      VoiceFractionPlayed = SND_GetVoiceFractionPlayed(v2, 1);
      SND_SaveVoiceInfo(v5, memFile, g_snd.chaninfoEntchannel[v2], *(float *)&VoiceFractionPlayed);
    }
  }
}

/*
==============
SND_SaveVoiceIndex
==============
*/
void SND_SaveVoiceIndex(MemoryFile *memFile, const SndVoice *voice)
{
  unsigned __int64 v3; 
  int p; 

  v3 = (__int64)((char *)voice - (char *)g_snd.voices + ((unsigned __int128)(((char *)voice - (char *)g_snd.voices) * (__int128)(__int64)0x8534085340853409ui64) >> 64)) >> 10;
  p = truncate_cast<int,__int64>(v3 + (v3 >> 63));
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
SND_SaveVoiceInfo
==============
*/
void SND_SaveVoiceInfo(const SndVoice *voice, MemoryFile *memFile, int entchannel, float fraction)
{
  __int64 v7; 
  vec3_t outOrigin; 
  unsigned __int64 p; 
  int adsrIndex; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10251, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice", -2i64) )
    __debugbreak();
  if ( entchannel != (unsigned __int8)entchannel )
  {
    LODWORD(v7) = entchannel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 10252, ASSERT_TYPE_ASSERT, "( ( entchannel == (entchannel & 0xFF) ) )", "( entchannel ) = %i", v7) )
      __debugbreak();
  }
  p = voice->sndEnt;
  MemFile_WriteData(memFile, 8ui64, &p);
  LOBYTE(adsrIndex) = truncate_cast<unsigned char,int>(entchannel);
  MemFile_WriteData(memFile, 1ui64, &adsrIndex);
  MemFile_WriteFloat(memFile, voice->basepitch);
  MemFile_WriteFloat(memFile, voice->pitchScale);
  MemFile_WriteFloat(memFile, voice->pitchInfo.value);
  MemFile_WriteFloat(memFile, voice->pitchInfo.goalvalue);
  MemFile_WriteFloat(memFile, voice->pitchInfo.goalrate);
  MemFile_WriteFloat(memFile, voice->priorityVolume);
  MemFile_WriteFloat(memFile, voice->priorityAttenuation);
  MemFile_WriteFloat(memFile, voice->basevolume);
  MemFile_WriteFloat(memFile, voice->volumeScale);
  MemFile_WriteFloat(memFile, voice->volumeInfo.value);
  MemFile_WriteFloat(memFile, voice->volumeInfo.goalvalue);
  MemFile_WriteFloat(memFile, voice->volumeInfo.goalrate);
  MemFile_WriteFloat(memFile, voice->volumeInfo.goalfraction);
  MemFile_WriteFloat(memFile, voice->volumeInfo.goalgain);
  MemFile_WriteFloat(memFile, voice->contextLerpVolume);
  LOBYTE(adsrIndex) = voice->occlusionMatchesListener;
  MemFile_WriteData(memFile, 1ui64, &adsrIndex);
  MemFile_WriteFloat(memFile, voice->occlusionAmount);
  MemFile_WriteData(memFile, 0xCui64, &voice->offset);
  SndVoice_GetOrigin(voice, &outOrigin);
  MemFile_WriteData(memFile, 0xCui64, &outOrigin);
  LOWORD(adsrIndex) = voice->soundDoneSoundString;
  MemFile_WriteData(memFile, 2ui64, &adsrIndex);
  adsrIndex = voice->adsrIndex;
  MemFile_WriteData(memFile, 4ui64, &adsrIndex);
  MemFile_WriteData(memFile, 4ui64, &voice->playbackId);
  MemFile_WriteData(memFile, 4ui64, &voice->secondaryId);
  MemFile_WriteFloat(memFile, voice->lfeScale);
  MemFile_WriteData(memFile, 0xCui64, &voice->submixAttenuation);
  MemFile_WriteData(memFile, 0xCui64, &voice->submixLpf);
  MemFile_WriteData(memFile, 0xCui64, &voice->submixHpf);
  MemFile_WriteFloat(memFile, voice->lpfCutoff);
  MemFile_WriteFloat(memFile, voice->hpfCutoff);
  SND_SubmixVoiceSave(memFile, voice);
  MemFile_WriteFloat(memFile, fraction);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
SND_SaveVoiceSync
==============
*/
void SND_SaveVoiceSync(int voiceIndex, MemoryFile *memFile)
{
  sd_voice **voices; 
  sd_voice *v4; 
  sd_voice *syncMaster; 
  unsigned int v6; 
  float *p_p; 
  unsigned __int64 v8; 
  int p; 
  float v10; 

  voices = g_sd.voices;
  v4 = g_sd.voices[voiceIndex];
  if ( v4 && v4->isSync )
  {
    LOBYTE(p) = 1;
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, v4->syncPeriodFrames);
    p = v4->syncMeter;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStart;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStartFrameOffset;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStartDelayBeats;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStartFadeBeats;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStop;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopBeats;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopDelayBeats;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopFadeBeats;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 4ui64, &v4->syncState);
    p = v4->syncTimestamp;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStartDelayFrames;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStartFadeFrames;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopDelayFrames;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopFadeFrames;
    MemFile_WriteData(memFile, 4ui64, &p);
    LOBYTE(p) = v4->syncSoftStart;
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteFloat(memFile, v4->syncEndScale);
    p = v4->syncStartDelayFramesDecoded;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStartFadeFramesDecoded;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopDelayFramesDecoded;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = v4->syncStopFadeFramesDecoded;
    MemFile_WriteData(memFile, 4ui64, &p);
    syncMaster = v4->syncMaster;
    v6 = 0;
    v10 = 0.0;
    while ( syncMaster != *voices )
    {
      ++v6;
      ++voices;
      if ( v6 >= 0x63 )
      {
        p_p = &v10;
        v8 = 4i64;
        goto LABEL_9;
      }
    }
    p_p = &v10;
    v8 = 4i64;
    v10 = g_snd.chaninfoUnweightedPriority[492 * v6 - 48701];
  }
  else
  {
    LOBYTE(p) = 0;
    p_p = (float *)&p;
    v8 = 1i64;
  }
LABEL_9:
  MemFile_WriteData(memFile, v8, p_p);
}

/*
==============
SND_ScalePitchOnEnt
==============
*/
void SND_ScalePitchOnEnt(unsigned __int64 sndEnt, float pitch, int msec)
{
  float pitcha; 

  pitcha = pitch;
  SND_SetEntityParamInfoData(sndEnt, &pitcha, NULL, msec);
}

/*
==============
SND_ScaleVoicePitchById
==============
*/
bool SND_ScaleVoicePitchById(unsigned int id, float pitch, int msec)
{
  SndVoice *PlaybackVoice; 

  PlaybackVoice = SND_GetPlaybackVoice(id);
  if ( PlaybackVoice )
  {
    SND_SetParamValue(&PlaybackVoice->pitchInfo, pitch, 0.001, 2.0, msec);
    LOBYTE(PlaybackVoice) = 1;
  }
  return (char)PlaybackVoice;
}

/*
==============
SND_ScaleVoiceVolumeById
==============
*/
bool SND_ScaleVoiceVolumeById(unsigned int id, float volume, int msec)
{
  SndVoice *PlaybackVoice; 
  SndVoice *v5; 
  double v6; 

  PlaybackVoice = SND_GetPlaybackVoice(id);
  v5 = PlaybackVoice;
  if ( PlaybackVoice )
  {
    v6 = I_fclamp(volume, 0.0, 4.0);
    SND_SetParamValue(&v5->volumeInfo, *(float *)&v6, 0.0, 1.0, msec);
    LOBYTE(PlaybackVoice) = 1;
  }
  return (char)PlaybackVoice;
}

/*
==============
SND_ScaleVolumeOnEnt
==============
*/
void SND_ScaleVolumeOnEnt(unsigned __int64 sndEnt, float volume, int msec)
{
  float volumea; 

  volumea = volume;
  SND_SetEntityParamInfoData(sndEnt, NULL, &volumea, msec);
}

/*
==============
SND_SetAliasValue_f
==============
*/
void SND_SetAliasValue_f()
{
  const char *v0; 
  const SndAliasList *Alias; 
  const char *v2; 
  const char *v3; 

  if ( Cmd_Argc() == 4 )
  {
    v0 = Cmd_Argv(1);
    Alias = SND_FindAlias(v0);
    if ( Alias )
    {
      v2 = Cmd_Argv(2);
      v3 = Cmd_Argv(3);
      SND_ChangeSoundAliasListValue(Alias, v2, v3);
    }
    else
    {
      Com_Printf(9, "snd_setAliasValue: unknown alias '%s'\n", v0);
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_setAliasValue <aliasListName> <columnName> <value>\n");
  }
}

/*
==============
SND_SetAmbientEvents
==============
*/
void SND_SetAmbientEvents(const LocalClientNum_t localClientNum, const SoundTable *soundTable, const AmbientDef *ambientDef, float strength)
{
  __int64 v6; 
  unsigned __int64 SndEntHandle; 
  float volume; 

  v6 = localClientNum;
  if ( g_ambGlob[localClientNum].ambientDef != ambientDef )
  {
    volume = 0.0;
    SndEntHandle = CG_GenerateSndEntHandle(localClientNum, localClientNum + 4353);
    SND_SetEntityParamInfoData(SndEntHandle, NULL, &volume, 1000);
    g_ambGlob[v6].nextPlayTime += 1000;
    g_ambGlob[v6].ambientDef = ambientDef;
    g_ambGlob[v6].lastPlayedElem = NULL;
    g_ambGlob[v6].playTime = 0;
    g_ambGlob[v6].soundTable = soundTable;
  }
  g_ambGlob[v6].strength = strength;
}

/*
==============
SND_SetBackgroundTrackVolumeScale
==============
*/
void SND_SetBackgroundTrackVolumeScale(int track, float volumeScale, int fadeTime)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  bool *v8; 
  __int64 v9; 

  v4 = track;
  if ( (track & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6263, ASSERT_TYPE_ASSERT, "( ( track == SND_TRACK_AMBIENT_PRIMARY_0 || track == SND_TRACK_AMBIENT_PRIMARY_1 ) )", "( track ) = %i", track) )
    __debugbreak();
  if ( volumeScale < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6264, ASSERT_TYPE_ASSERT, "( ( volumeScale >= 0.0f ) )", "( volumeScale ) = %g", volumeScale) )
    __debugbreak();
  if ( fadeTime < 0 )
  {
    LODWORD(v9) = fadeTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6265, ASSERT_TYPE_ASSERT, "( ( fadeTime >= 0 ) )", "( fadeTime ) = %i", v9) )
      __debugbreak();
  }
  if ( !(_DWORD)v4 || (v5 = 1i64, (_DWORD)v4 == 2) )
    v5 = 2i64;
  v6 = 0i64;
  v7 = v4 + 80;
  v8 = &sdGlob.voiceAlloc[v4 + 80];
  do
  {
    if ( v7 > 0x62 )
    {
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v9) )
        __debugbreak();
    }
    if ( v8[v6] )
      SND_SetParamValue((snd_param_info_t *)&g_snd.chaninfoUnweightedPriority[492 * v7 - 48694], volumeScale, 0.0, 1.0, fadeTime);
    ++v7;
    ++v6;
  }
  while ( v6 < v5 );
}

/*
==============
SND_SetChannelVolume
==============
*/
void SND_SetChannelVolume(unsigned int channel, float channelvolume, int fademsec)
{
  __int64 v4; 

  v4 = channel;
  if ( CL_GetLocalClientActiveCount() <= 1 )
  {
    if ( (!g_snd.globals || (unsigned int)v4 >= g_snd.globals->entchannelCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6771, ASSERT_TYPE_ASSERT, "(channel >= 0 && channel < SND_GetEntChannelCount())", (const char *)&queryFormat, "channel >= 0 && channel < SND_GetEntChannelCount()") )
      __debugbreak();
    if ( (channelvolume < 0.0 || channelvolume > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6772, ASSERT_TYPE_ASSERT, "(channelvolume >= 0.0f && channelvolume <= 1.0f)", (const char *)&queryFormat, "channelvolume >= 0.0f && channelvolume <= 1.0f") )
      __debugbreak();
    SND_SetParamValue(&g_snd.levelFadeInChannelVols.channelvol[v4], channelvolume, 0.0, 1.0, fademsec);
  }
}

/*
==============
SND_SetChannelVolumes
==============
*/
void SND_SetChannelVolumes(int priority, const float *channelvolume, int fademsec)
{
  __int64 v4; 
  int v6; 
  snd_channelvolgroup *v7; 
  __int64 v8; 
  bool *p_active; 

  v4 = priority;
  if ( CL_GetLocalClientActiveCount() <= 1 )
  {
    if ( (unsigned int)(v4 - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6786, ASSERT_TYPE_ASSERT, "( ( priority > SND_CHANNELVOLPRIO_NONE && priority < SND_CHANNELVOLPRIO_COUNT ) )", "( priority ) = %i", v4) )
      __debugbreak();
    if ( !channelvolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6787, ASSERT_TYPE_ASSERT, "(channelvolume)", (const char *)&queryFormat, "channelvolume") )
      __debugbreak();
    if ( fademsec < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6788, ASSERT_TYPE_ASSERT, "(fademsec >= 0)", (const char *)&queryFormat, "fademsec >= 0") )
      __debugbreak();
    v6 = 1;
    v7 = &g_snd.channelPriorityVolGroups[v4];
    if ( fademsec >= 1 )
      v6 = fademsec;
    v8 = 0i64;
    v7->active = 1;
    while ( g_snd.globals && (unsigned int)v8 < g_snd.globals->entchannelCount )
    {
      SND_SetParamValue(&v7->channelvol[v8], channelvolume[v8], 0.0, 1.0, v6);
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (_DWORD)v4 != g_snd.currentChannelPriority )
    {
      if ( v4 + 1 >= 4 )
      {
LABEL_22:
        g_snd.currentChannelPriority = v4;
      }
      else
      {
        p_active = &g_snd.channelPriorityVolGroups[v4 + 1].active;
        while ( !*p_active )
        {
          p_active += 6148;
          if ( (__int64)p_active >= (__int64)&g_snd.entChanOcclusionParams[50][1].attnLevel4 )
            goto LABEL_22;
        }
      }
    }
  }
}

/*
==============
SND_SetConstrainedMode
==============
*/
void SND_SetConstrainedMode(void)
{
  Sys_UpdateSoundThreadAffinities(1);
}

/*
==============
SND_SetContext
==============
*/
void SND_SetContext(unsigned int type, unsigned int value, float fadeTime)
{
  int ContextIndex; 

  ContextIndex = SND_FindContextIndex(type);
  if ( ContextIndex >= 0 )
  {
    g_snd.globalContextsFrom[ContextIndex] = g_snd.globalContextsTo[ContextIndex];
    g_snd.globalContextsTo[ContextIndex] = value;
    if ( fadeTime == 0.0 )
    {
      g_snd.globalContextLerp[ContextIndex] = (TimeLerp)1065353216i64;
    }
    else
    {
      g_snd.globalContextLerp[ContextIndex].rateMS = 0.001 / fadeTime;
      g_snd.globalContextLerp[ContextIndex].current = 0.0;
    }
  }
}

/*
==============
SND_SetEntContext
==============
*/
void SND_SetEntContext(unsigned __int64 handle, unsigned int type, unsigned int value, float fadeTime)
{
  SndEntState *EntState; 
  int v7; 
  unsigned int v8; 
  SndEntState *v9; 
  int v10; 
  int v11; 

  if ( type )
  {
    EntState = SND_FindEntState(handle, 1);
    if ( EntState )
    {
      v7 = -1;
      v8 = 0;
      v9 = EntState;
      while ( v9->contextTypes[0] != type )
      {
        v10 = v8;
        if ( v9->contextTypes[0] )
          v10 = v7;
        ++v8;
        v9 = (SndEntState *)((char *)v9 + 4);
        v7 = v10;
        if ( v8 >= 3 )
          goto LABEL_10;
      }
      v7 = v8;
LABEL_10:
      if ( v7 == -1 )
      {
        Com_PrintError(9, "Failed to find free entity sound context slot for type 0x%x, value 0x%x\n", type, value);
      }
      else
      {
        v11 = (int)(float)(fadeTime * 1000.0);
        EntState->contextValuesFrom[v7] = EntState->contextValuesTo[v7];
        EntState->contextValuesTo[v7] = value;
        EntState->contextFadeLength[v7] = v11;
        EntState->contextFadeTime[v7] = g_snd.time + v11;
        EntState->contextTypes[v7] = type;
      }
    }
  }
}

/*
==============
SND_SetEntState
==============
*/
void SND_SetEntState(unsigned __int64 handle, const vec3_t *origin, const tmat33_t<vec3_t> *orientation)
{
  SndEntState *EntState; 
  SndEntState *v7; 

  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14019, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientation->m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14020, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orientation[0] )[0] ) && !IS_NAN( ( orientation[0] )[1] ) && !IS_NAN( ( orientation[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orientation[0] )[0] ) && !IS_NAN( ( orientation[0] )[1] ) && !IS_NAN( ( orientation[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientation->m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14021, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orientation[1] )[0] ) && !IS_NAN( ( orientation[1] )[1] ) && !IS_NAN( ( orientation[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orientation[1] )[0] ) && !IS_NAN( ( orientation[1] )[1] ) && !IS_NAN( ( orientation[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientation->m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientation->m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14022, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orientation[2] )[0] ) && !IS_NAN( ( orientation[2] )[1] ) && !IS_NAN( ( orientation[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orientation[2] )[0] ) && !IS_NAN( ( orientation[2] )[1] ) && !IS_NAN( ( orientation[2] )[2] )") )
    __debugbreak();
  EntState = SND_FindEntState(handle, 1);
  v7 = EntState;
  if ( EntState && EntState->lastUsed != g_snd.frame )
  {
    if ( EntState->handle != handle )
      memset_0(EntState, 0, sizeof(SndEntState));
    SndEntState_SetOrigin(v7, origin);
    AxisCopy(orientation, &v7->orientation);
    v7->hasPosition = 1;
    v7->lastUsed = g_snd.frame;
  }
}

/*
==============
SND_SetEntityParamInfoData
==============
*/
void SND_SetEntityParamInfoData(unsigned __int64 sndEnt, const float *pitch, const float *volume, int msec)
{
  unsigned __int64 v4; 
  unsigned __int64 v9; 
  EntityParamInfo *EntityParamInfo; 

  v4 = sndEnt & 0x1FFFFFFFFi64;
  if ( (sndEnt & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v4 - 2049 <= 0x8FF || v4 <= 0x7FD || v4 - 5571 <= 0x7A120 )
  {
    v9 = (unsigned __int64)&g_sndEntityParamFence & 3;
    do
    {
      if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_sndEntityParamFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_sndEntityParamFence, 1, 0) == 1 );
    EntityParamInfo = SND_GetEntityParamInfo(sndEnt);
    if ( EntityParamInfo || (EntityParamInfo = SND_GetNewEntityParamInfo(sndEnt)) != NULL )
    {
      if ( pitch )
        SND_SetParamValue(&EntityParamInfo->pitch, *pitch, 0.001, 2.0, msec);
      if ( volume )
        SND_SetParamValue(&EntityParamInfo->volume, *volume, 0.0, 4.0, msec);
    }
    if ( v9 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_sndEntityParamFence) )
        __debugbreak();
    }
    _InterlockedExchange(&g_sndEntityParamFence, 0);
  }
}

/*
==============
SND_SetEq
==============
*/
void SND_SetEq(const char *channelName, int eqIndex, int band, SND_EQTYPE type, float gain, float freq, float q)
{
  int EntChannelFromName; 

  EntChannelFromName = SND_GetEntChannelFromName(channelName);
  if ( EntChannelFromName == -1 )
    Com_PrintError(9, "Unknown channel name (%s), please check channel definitions file\n", channelName);
  else
    SND_SetEqParams(EntChannelFromName, eqIndex, band, type, gain, freq, q);
}

/*
==============
SND_SetEqEntChannel
==============
*/
void SND_SetEqEntChannel(int entChannel, int eqIndex, int band, SND_EQTYPE type, float gain, float freq, float q)
{
  if ( entChannel != -1 )
    SND_SetEqParams(entChannel, eqIndex, band, type, gain, freq, q);
}

/*
==============
SND_SetEqFreq
==============
*/
void SND_SetEqFreq(int entchannel, int eqIndex, int band, float freq)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v4 = entchannel;
  v5 = band;
  v6 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v11 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 892, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (freq < 0.0 || freq > 24000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 894, ASSERT_TYPE_ASSERT, "( ( freq >= 0 && freq <= ( 24000.0f ) ) )", "( freq ) = %g", freq) )
    __debugbreak();
  v7 = v4 + ((v5 + 2 * v6) << 8);
  sdGlob.eqParams[0][0][v7].freq = freq;
  sdGlob.eqParams[0][0][v7].enabled = 1;
}

/*
==============
SND_SetEqFreq_f
==============
*/
void SND_SetEqFreq_f()
{
  const char *v0; 
  signed int EntChannelFromName; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  double v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( Cmd_Argc() == 5 )
  {
    v0 = Cmd_Argv(1);
    EntChannelFromName = SND_GetEntChannelFromName(v0);
    v2 = EntChannelFromName;
    if ( EntChannelFromName == -1 )
    {
      Com_Printf(9, "Unknown channel name (%s), please check channel definitions file\n", v0);
    }
    else
    {
      v3 = Cmd_ArgInt(2);
      v4 = (int)v3;
      if ( v3 > 1 )
      {
        Com_Printf(9, "invalid 'eqIndex' %i, must be >= 0 and < %i\n", v3, 2i64);
      }
      else
      {
        v5 = Cmd_ArgInt(3);
        v6 = (int)v5;
        if ( v5 <= 1 )
        {
          v7 = Cmd_ArgFloat(4);
          if ( *(float *)&v7 < 0.0 || *(float *)&v7 > 24000.0 )
          {
            Com_Printf(9, "invalid 'freq' %f, must be >= 0 and < %f\n", *(float *)&v7, DOUBLE_24000_0);
          }
          else
          {
            if ( (unsigned int)v2 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v2, 256) )
              __debugbreak();
            if ( (unsigned int)v6 >= 2 )
            {
              LODWORD(v10) = 2;
              LODWORD(v9) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 892, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v9, v10) )
                __debugbreak();
            }
            if ( (unsigned int)v4 >= 2 )
            {
              LODWORD(v10) = 2;
              LODWORD(v9) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v9, v10) )
                __debugbreak();
            }
            if ( (*(float *)&v7 < 0.0 || *(float *)&v7 > 24000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 894, ASSERT_TYPE_ASSERT, "( ( freq >= 0 && freq <= ( 24000.0f ) ) )", "( freq ) = %g", *(float *)&v7) )
              __debugbreak();
            v8 = v2 + ((v6 + 2 * v4) << 8);
            sdGlob.eqParams[0][0][v8].freq = *(float *)&v7;
            sdGlob.eqParams[0][0][v8].enabled = 1;
          }
        }
        else
        {
          Com_Printf(9, "invalid 'band' %i, must be >= 0 and < %i\n", v5, 2i64);
        }
      }
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_setEqFreq <const char *channelName> <int eqIndex> <int band> <float freq>\n");
  }
}

/*
==============
SND_SetEqGain
==============
*/
void SND_SetEqGain(int entchannel, int eqIndex, int band, float gain)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v4 = entchannel;
  v5 = band;
  v6 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v11 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 904, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 905, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v7 = v4 + ((v5 + 2 * v6) << 8);
  sdGlob.eqParams[0][0][v7].gain = gain;
  sdGlob.eqParams[0][0][v7].enabled = 1;
}

/*
==============
SND_SetEqGain_f
==============
*/
void SND_SetEqGain_f()
{
  const char *v0; 
  signed int EntChannelFromName; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  double v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( Cmd_Argc() == 5 )
  {
    v0 = Cmd_Argv(1);
    EntChannelFromName = SND_GetEntChannelFromName(v0);
    v2 = EntChannelFromName;
    if ( EntChannelFromName == -1 )
    {
      Com_Printf(9, "Unknown channel name (%s), please check channel definitions file\n", v0);
    }
    else
    {
      v3 = Cmd_ArgInt(2);
      v4 = (int)v3;
      if ( v3 > 1 )
      {
        Com_Printf(9, "invalid 'eqIndex' %i, must be >= 0 and < %i\n", v3, 2i64);
      }
      else
      {
        v5 = Cmd_ArgInt(3);
        v6 = (int)v5;
        if ( v5 <= 1 )
        {
          v7 = Cmd_ArgFloat(4);
          if ( (unsigned int)v2 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v2, 256) )
            __debugbreak();
          if ( (unsigned int)v6 >= 2 )
          {
            LODWORD(v10) = 2;
            LODWORD(v9) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 904, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          if ( (unsigned int)v4 >= 2 )
          {
            LODWORD(v10) = 2;
            LODWORD(v9) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 905, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          v8 = v2 + ((v6 + 2 * v4) << 8);
          sdGlob.eqParams[0][0][v8].gain = *(float *)&v7;
          sdGlob.eqParams[0][0][v8].enabled = 1;
        }
        else
        {
          Com_Printf(9, "invalid 'band' %i, must be >= 0 and < %i\n", v5, 2i64);
        }
      }
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_setEqGain <const char *channelName> <int eqIndex> <int band> <float gain>\n");
  }
}

/*
==============
SND_SetEqLerp
==============
*/
void SND_SetEqLerp(float lerp)
{
  if ( (lerp < 0.0 || lerp > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 857, ASSERT_TYPE_ASSERT, "( ( lerp >= 0.0 && lerp <= 1.0f ) )", "( lerp ) = %g", lerp) )
    __debugbreak();
  sdGlob.eqLerp = lerp;
}

/*
==============
SND_SetEqParams
==============
*/
void SND_SetEqParams(int entchannel, int eqIndex, int band, SND_EQTYPE type, float gain, float freq, float q)
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  int v15; 

  v8 = entchannel;
  v9 = band;
  v10 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v15 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 864, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(v14) = 2;
    LODWORD(v12) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 865, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v14) = 2;
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 866, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( (freq < 0.0 || freq > 24000.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 867, ASSERT_TYPE_ASSERT, "( ( freq >= 0 && freq <= ( 24000.0f ) ) )", "( freq ) = %g", freq) )
    __debugbreak();
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 868, ASSERT_TYPE_ASSERT, "( ( q > 0 ) )", "( q ) = %g", q) )
    __debugbreak();
  v11 = v8 + ((v9 + 2 * v10) << 8);
  sdGlob.eqParams[0][0][v11].freq = freq;
  sdGlob.eqParams[0][0][v11].q = q;
  sdGlob.eqParams[0][0][v11].type = type;
  sdGlob.eqParams[0][0][v11].gain = gain;
  sdGlob.eqParams[0][0][v11].enabled = 1;
}

/*
==============
SND_SetEqQ
==============
*/
void SND_SetEqQ(int entchannel, int eqIndex, int band, float q)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v4 = entchannel;
  v5 = band;
  v6 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v11 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 914, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 915, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 916, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 917, ASSERT_TYPE_ASSERT, "( ( q > 0 ) )", "( q ) = %g", q) )
    __debugbreak();
  v7 = v4 + ((v5 + 2 * v6) << 8);
  sdGlob.eqParams[0][0][v7].q = q;
  sdGlob.eqParams[0][0][v7].enabled = 1;
}

/*
==============
SND_SetEqQ_f
==============
*/
void SND_SetEqQ_f()
{
  const char *v0; 
  signed int EntChannelFromName; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  double v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( Cmd_Argc() == 5 )
  {
    v0 = Cmd_Argv(1);
    EntChannelFromName = SND_GetEntChannelFromName(v0);
    v2 = EntChannelFromName;
    if ( EntChannelFromName == -1 )
    {
      Com_Printf(9, "Unknown channel name (%s), please check channel definitions file\n", v0);
    }
    else
    {
      v3 = Cmd_ArgInt(2);
      v4 = (int)v3;
      if ( v3 > 1 )
      {
        Com_Printf(9, "invalid 'eqIndex' %i, must be >= 0 and < %i\n", v3, 2i64);
      }
      else
      {
        v5 = Cmd_ArgInt(3);
        v6 = (int)v5;
        if ( v5 <= 1 )
        {
          v7 = Cmd_ArgFloat(4);
          if ( *(float *)&v7 > 0.0 )
          {
            if ( (unsigned int)v2 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 914, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v2, 256) )
              __debugbreak();
            if ( (unsigned int)v6 >= 2 )
            {
              LODWORD(v10) = 2;
              LODWORD(v9) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 915, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v9, v10) )
                __debugbreak();
            }
            if ( (unsigned int)v4 >= 2 )
            {
              LODWORD(v10) = 2;
              LODWORD(v9) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 916, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v9, v10) )
                __debugbreak();
            }
            if ( *(float *)&v7 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 917, ASSERT_TYPE_ASSERT, "( ( q > 0 ) )", "( q ) = %g", *(float *)&v7) )
              __debugbreak();
            v8 = v2 + ((v6 + 2 * v4) << 8);
            sdGlob.eqParams[0][0][v8].q = *(float *)&v7;
            sdGlob.eqParams[0][0][v8].enabled = 1;
          }
          else
          {
            Com_Printf(9, "invalid 'q' %f, must be > 0\n", *(float *)&v7);
          }
        }
        else
        {
          Com_Printf(9, "invalid 'band' %i, must be >= 0 and < %i\n", v5, 2i64);
        }
      }
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_setEqQ <const char *channelName> <int eqIndex> <int band> <float q>\n");
  }
}

/*
==============
SND_SetEqType
==============
*/
void SND_SetEqType(int entchannel, int eqIndex, int band, SND_EQTYPE type)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v11; 
  int v12; 

  v4 = entchannel;
  v6 = band;
  v7 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v12 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v12) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 881, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v8 = v4 + ((v6 + 2 * v7) << 8);
  sdGlob.eqParams[0][0][v8].type = type;
  sdGlob.eqParams[0][0][v8].enabled = 1;
}

/*
==============
SND_SetEqType_f
==============
*/
void SND_SetEqType_f()
{
  const char *v0; 
  signed int EntChannelFromName; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  const char *v7; 
  SND_EQTYPE v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( Cmd_Argc() == 5 )
  {
    v0 = Cmd_Argv(1);
    EntChannelFromName = SND_GetEntChannelFromName(v0);
    v2 = EntChannelFromName;
    if ( EntChannelFromName == -1 )
    {
      Com_Printf(9, "Unknown channel name (%s), please check channel definitions file\n", v0);
    }
    else
    {
      v3 = Cmd_ArgInt(2);
      v4 = (int)v3;
      if ( v3 > 1 )
      {
        Com_Printf(9, "invalid 'eqIndex' %i, must be >= 0 and < %i\n", v3, 2i64);
      }
      else
      {
        v5 = Cmd_ArgInt(3);
        v6 = (int)v5;
        if ( v5 <= 1 )
        {
          v7 = Cmd_Argv(4);
          v8 = (unsigned int)SND_EqTypeFromString(v7);
          if ( v8 != SND_EQTYPE_COUNT )
          {
            if ( (unsigned int)v2 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", v2, 256) )
              __debugbreak();
            if ( (unsigned int)v6 >= 2 )
            {
              LODWORD(v11) = 2;
              LODWORD(v10) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 881, ASSERT_TYPE_ASSERT, "(unsigned)( band ) < (unsigned)( 2 )", "band doesn't index SND_MAX_EQBANDS\n\t%i not in [0, %i)", v10, v11) )
                __debugbreak();
            }
            if ( (unsigned int)v4 >= 2 )
            {
              LODWORD(v11) = 2;
              LODWORD(v10) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( 2 )", "eqIndex doesn't index SND_EQINDEX_COUNT\n\t%i not in [0, %i)", v10, v11) )
                __debugbreak();
            }
            v9 = v2 + ((v6 + 2 * v4) << 8);
            sdGlob.eqParams[0][0][v9].enabled = 1;
            sdGlob.eqParams[0][0][v9].type = v8;
          }
        }
        else
        {
          Com_Printf(9, "invalid 'band' %i, must be >= 0 and < %i\n", v5, 2i64);
        }
      }
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_setEqType <const char *channelName> <int eqIndex> <int band> <const char *type>\n");
  }
}

/*
==============
SND_SetEq_f
==============
*/

void __fastcall SND_SetEq_f(double _XMM0_8)
{
  __int64 i; 
  const char *EntChannelName; 
  int v3; 
  char *v4; 
  int j; 
  const char *v6; 
  int EntChannelFromName; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  const char *v12; 
  SND_EQTYPE v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  const char *v18; 

  if ( Cmd_Argc() == 8 )
  {
    v6 = Cmd_Argv(1);
    EntChannelFromName = SND_GetEntChannelFromName(v6);
    if ( EntChannelFromName == -1 )
    {
      Com_Printf(9, "Unknown channel name (%s), please check channel definitions file\n", v6);
    }
    else
    {
      v8 = Cmd_ArgInt(2);
      v9 = v8;
      if ( v8 > 1 )
      {
        Com_Printf(9, "invalid 'eqIndex' %i, must be >= 0 and < %i\n", v8, 2i64);
      }
      else
      {
        v10 = Cmd_ArgInt(3);
        v11 = v10;
        if ( v10 <= 1 )
        {
          v12 = Cmd_Argv(4);
          v13 = (unsigned int)SND_EqTypeFromString(v12);
          if ( v13 != SND_EQTYPE_COUNT )
          {
            v14 = Cmd_ArgFloat(5);
            v15 = *(float *)&v14;
            v16 = Cmd_ArgFloat(6);
            v17 = *(float *)&v16;
            if ( *(float *)&v16 < 0.0 || *(float *)&v16 > 24000.0 )
            {
              Com_Printf(9, "invalid 'freq' %f, must be >= 0 and <= %f\n", *(float *)&v16, DOUBLE_24000_0);
            }
            else
            {
              v18 = Cmd_Argv(7);
              _XMM0_8 = atof(v18);
              __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
              if ( *(float *)&_XMM1 > 0.0 )
                SND_SetEqParams(EntChannelFromName, v9, v11, v13, v15, v17, *(float *)&_XMM1);
              else
                Com_Printf(9, "invalid 'q' %f, must be > 0\n", *(float *)&_XMM1);
            }
          }
        }
        else
        {
          Com_Printf(9, "invalid 'band' %i, must be >= 0 and < %i\n", v10, 2i64);
        }
      }
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_setEq <const char *channelName> <int eqIndex> <int band> <const char *type> <float gain> <float freq> <float q>\n");
    Com_Printf(9, "Current EQ Settings\n---------------\n lerp = %.2f\n", sdGlob.eqLerp);
    for ( i = 0i64; g_snd.globals && (unsigned int)i < g_snd.globals->entchannelCount; i = (unsigned int)(i + 1) )
    {
      EntChannelName = SND_GetEntChannelName(i);
      Com_Printf(9, "+ %s\n", EntChannelName);
      v3 = 0;
      v4 = (char *)&sdGlob + 20 * i;
      do
      {
        for ( j = 0; j < 2; ++j )
        {
          if ( (unsigned __int8)*((_DWORD *)v4 + 4) )
            Com_Printf(9, "\t%i %i %s %f Hz %f dB %f q\n", (unsigned int)v3, (unsigned int)j, snd_eqTypeStrings[(int)*(_OWORD *)v4], COERCE_FLOAT(*((_QWORD *)v4 + 1)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v4)), COERCE_FLOAT(HIDWORD(*(_OWORD *)v4)));
          v4 += 5120;
        }
        ++v3;
      }
      while ( v3 < 2 );
    }
  }
}

/*
==============
SND_SetFullResourcesMode
==============
*/
void SND_SetFullResourcesMode(void)
{
  Sys_UpdateSoundThreadAffinities(0);
}

/*
==============
SND_SetIgnorePauseFlag
==============
*/
void SND_SetIgnorePauseFlag(bool ignorePause)
{
  bool *voiceAlloc; 
  int v3; 
  bool *p_ignorePause; 
  __int64 v5; 

  voiceAlloc = sdGlob.voiceAlloc;
  v3 = 0;
  p_ignorePause = &g_snd.voices[0].ignorePause;
  do
  {
    if ( (unsigned int)v3 > 0x62 )
    {
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v5) )
        __debugbreak();
    }
    if ( *voiceAlloc )
      *p_ignorePause = ignorePause;
    ++v3;
    ++voiceAlloc;
    p_ignorePause += 1968;
  }
  while ( v3 < 99 );
}

/*
==============
SND_SetLevelFadeIn
==============
*/
void SND_SetLevelFadeIn(float volume, int fadetime)
{
  if ( volume < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6753, ASSERT_TYPE_ASSERT, "(volume >= 0)", (const char *)&queryFormat, "volume >= 0") )
    __debugbreak();
  if ( fadetime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6754, ASSERT_TYPE_ASSERT, "(fadetime >= 0)", (const char *)&queryFormat, "fadetime >= 0") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
    SND_SetParamValue(&g_snd.scriptSoundFade, volume, 0.0, 1.0, fadetime);
}

/*
==============
SND_SetListener
==============
*/
void SND_SetListener(LocalClientNum_t localClientNum, int playerStateClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *velocity)
{
  __int64 v7; 
  unsigned __int64 v9; 
  __int64 v10; 
  snd_listener *v11; 
  int v12; 
  int v13; 

  v7 = localClientNum;
  if ( g_snd.driverInitialized && !(unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) )
  {
    if ( (unsigned int)v7 >= 2 )
    {
      v13 = 2;
      v12 = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3032, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v9 = (unsigned __int64)&g_snd.listenerFence & 3;
    do
    {
      if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
    v10 = v7 << 7;
    AxisCopy(axis, &g_snd.listeners[v7].orient.axis);
    v11 = &g_snd.listeners[v7];
    v11->orient.origin.v[0] = origin->v[0];
    v11->orient.origin.v[1] = origin->v[1];
    v11->orient.origin.v[2] = origin->v[2];
    OrientationInvert(&v11->orient, &g_snd.listeners[v7].inverse);
    *(float *)((char *)&g_snd.listeners[0].velocity + v10) = fsqrt((float)((float)(velocity->v[0] * velocity->v[0]) + (float)(velocity->v[1] * velocity->v[1])) + (float)(velocity->v[2] * velocity->v[2])) * 0.056818184;
    *(int *)((char *)&g_snd.listeners[0].playerStateClientNum + v10) = playerStateClientNum;
    *(LocalClientNum_t *)((char *)&g_snd.listeners[0].localClientNum + v10) = v7;
    *(&g_snd.listeners[0].active + v10) = 1;
    *(int *)((char *)&g_snd.listeners[0].controllerIndex + v10) = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
    _InterlockedExchange(&g_snd.listenerFence, 0);
    if ( *(float *)((char *)&g_snd.listeners[0].velocity + v10) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3050, ASSERT_TYPE_ASSERT, "(g_snd.listeners[localClientNum].velocity >= 0.0f)", (const char *)&queryFormat, "g_snd.listeners[localClientNum].velocity >= 0.0f") )
      __debugbreak();
  }
}

/*
==============
SND_SetMainReverb
==============
*/
void SND_SetMainReverb(const ReverbDef *reverbDef)
{
  unsigned int roomTypeId; 
  BOOL v3; 
  __int64 v4; 
  float fadeTime; 

  roomTypeId = reverbDef->roomTypeId;
  if ( sdGlob.currentReverbId[0] == roomTypeId )
  {
    v3 = 0;
  }
  else if ( sdGlob.currentReverbId[1] == roomTypeId )
  {
    v3 = 1;
  }
  else
  {
    v3 = g_snd.activeMainReverb != RVB_MAIN_B;
    SND_SetReverbParams(roomTypeId, (ReverbDescriptor)v3, 0);
  }
  g_snd.activeMainReverb = v3;
  g_snd.reverbSetting[v3].presetId = roomTypeId;
  g_snd.reverbSetting[g_snd.activeMainReverb].drylevel = reverbDef->dryLevel;
  g_snd.reverbSetting[g_snd.activeMainReverb].wetlevel = reverbDef->wetLevel;
  v4 = 0i64;
  if ( g_snd.activeMainReverb != RVB_MAIN_B )
    v4 = 1i64;
  if ( !g_snd.reverbSetting[v4].presetId )
  {
    _XMM0 = (unsigned int)g_snd.activeMainReverb;
    _XMM4 = 0i64;
    __asm
    {
      vpcmpeqd xmm3, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm2, xmm3
    }
    g_snd.mainReverbLerp.rateMS = 0.0;
LABEL_14:
    g_snd.mainReverbLerp.current = *(float *)&_XMM0;
    return;
  }
  fadeTime = reverbDef->fadeTime;
  if ( fadeTime == 0.0 )
  {
    _XMM0 = g_snd.activeMainReverb == RVB_MAIN_B;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
    g_snd.mainReverbLerp.rateMS = 0.0;
    goto LABEL_14;
  }
  g_snd.mainReverbLerp.rateMS = 0.001 / fadeTime;
  if ( g_snd.activeMainReverb != RVB_MAIN_B )
    g_snd.mainReverbLerp.rateMS = -0.001 / fadeTime;
}

/*
==============
SND_SetMainReverbBlended
==============
*/
void SND_SetMainReverbBlended(const ReverbDef *fromDef, const ReverbDef *toDef, float lerp)
{
  unsigned int roomTypeId; 
  int v4; 
  ReverbDescriptor v5; 
  unsigned int v6; 
  int v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  roomTypeId = fromDef->roomTypeId;
  v4 = 4;
  v5 = RVB_MAIN_A;
  v6 = toDef->roomTypeId;
  *(float *)&_XMM7 = lerp;
  if ( sdGlob.currentReverbId[0] == roomTypeId )
  {
    v10 = 0;
  }
  else
  {
    v10 = 4;
    if ( sdGlob.currentReverbId[1] == roomTypeId )
      v10 = 1;
  }
  if ( sdGlob.currentReverbId[0] == v6 )
  {
    v4 = 0;
  }
  else if ( sdGlob.currentReverbId[1] == v6 )
  {
    v4 = 1;
  }
  _XMM8 = LODWORD(FLOAT_1_0);
  if ( v10 == 4 )
  {
    if ( v4 == 4 )
    {
      SND_SetReverbParams(roomTypeId, RVB_MAIN_A, 0);
      SND_SetReverbParams(v6, RVB_MAIN_B, 0);
      g_snd.activeMainReverb = RVB_MAIN_B;
      g_snd.reverbSetting[0].drylevel = fromDef->dryLevel;
      g_snd.reverbSetting[0].wetlevel = fromDef->wetLevel;
      g_snd.reverbSetting[0].presetId = roomTypeId;
      g_snd.reverbSetting[1].drylevel = toDef->dryLevel;
      g_snd.reverbSetting[1].wetlevel = toDef->wetLevel;
      g_snd.mainReverbLerp.current = 1.0 - lerp;
      g_snd.reverbSetting[1].presetId = v6;
      goto LABEL_20;
    }
    LOBYTE(v5) = v4 == 0;
    v12 = (unsigned int)v5;
    SND_SetReverbParams(roomTypeId, v5, 0);
    v13 = v12;
    g_snd.reverbSetting[v13].drylevel = fromDef->dryLevel;
    g_snd.reverbSetting[v13].wetlevel = fromDef->wetLevel;
    g_snd.reverbSetting[v13].presetId = roomTypeId;
  }
  else if ( v4 == 4 )
  {
    LOBYTE(v5) = v10 == 0;
    v14 = (unsigned int)v5;
    SND_SetReverbParams(v6, v5, 0);
    v15 = v14;
    g_snd.reverbSetting[v15].drylevel = toDef->dryLevel;
    g_snd.reverbSetting[v15].wetlevel = toDef->wetLevel;
    g_snd.reverbSetting[v15].presetId = v6;
  }
  else if ( v10 == v4 )
  {
    _XMM0 = (unsigned int)g_snd.activeMainReverb;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm7, xmm8, xmm6, xmm2
    }
  }
  if ( g_snd.activeMainReverb == RVB_MAIN_B )
    g_snd.mainReverbLerp.current = 1.0 - *(float *)&_XMM7;
  else
    g_snd.mainReverbLerp.current = *(float *)&_XMM7;
LABEL_20:
  g_snd.mainReverbLerp.rateMS = 0.0;
}

/*
==============
SND_SetMusicState
==============
*/

void __fastcall SND_SetMusicState(unsigned int stateId)
{
  SNDL_SetMusicState(stateId);
}

/*
==============
SND_SetMusicState
==============
*/

void __fastcall SND_SetMusicState(unsigned int stateId, const unsigned int *assetIdPlaylist, unsigned int assetIdCount)
{
  SNDL_SetMusicState(stateId, assetIdPlaylist, assetIdCount);
}

/*
==============
SND_SetMusicState
==============
*/
void SND_SetMusicState(const char *stateName)
{
  const char *v1; 
  char v2; 
  unsigned int v3; 
  char v4; 

  v1 = stateName;
  if ( stateName && (v2 = *stateName) != 0 )
  {
    v3 = 5381;
    do
    {
      ++v1;
      v4 = v2 | 0x20;
      if ( (unsigned int)(v2 - 65) >= 0x1A )
        v4 = v2;
      v3 = 65599 * v3 + v4;
      v2 = *v1;
    }
    while ( *v1 );
    if ( !v3 )
      v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( stateName && *stateName )
      Com_PrintError(9, "SOUND: Unknown music state '%s' %x\n", stateName, 0i64);
  }
  SNDL_SetMusicState(v3);
}

/*
==============
SND_SetOcclusionFilterSingleIndex
==============
*/
void SND_SetOcclusionFilterSingleIndex(int entchannel, int eqIndex, OccludeDef *occludeDef)
{
  __int64 v3; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = entchannel;
  v5 = eqIndex;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v10 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7519, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( ( sizeof( *array_counter( g_snd.entChanOcclusionParams ) ) + 0 ) )", "entchannel doesn't index ARRAY_COUNT( g_snd.entChanOcclusionParams )\n\t%i not in [0, %i)", entchannel, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7520, ASSERT_TYPE_ASSERT, "(unsigned)( eqIndex ) < (unsigned)( ( sizeof( *array_counter( g_snd.entChanOcclusionParams[0] ) ) + 0 ) )", "eqIndex doesn't index ARRAY_COUNT( g_snd.entChanOcclusionParams[0] )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v6 = 9 * (v5 + 2 * v3);
  g_snd.entChanOcclusionParams[0][v6 / 9].enabled = 1;
  g_snd.entChanFullOcclusionDisabled[v6 - 4607] = LODWORD(occludeDef->cutoffLevel1);
  g_snd.entChanFullOcclusionDisabled[v6 - 4606] = LODWORD(occludeDef->cutoffLevel2);
  g_snd.entChanFullOcclusionDisabled[v6 - 4605] = LODWORD(occludeDef->cutoffLevel3);
  g_snd.entChanFullOcclusionDisabled[v6 - 4604] = LODWORD(occludeDef->cutoffLevel4);
  g_snd.entChanFullOcclusionDisabled[v6 - 4603] = LODWORD(occludeDef->attnLevel1);
  g_snd.entChanFullOcclusionDisabled[v6 - 4602] = LODWORD(occludeDef->attnLevel2);
  g_snd.entChanFullOcclusionDisabled[v6 - 4601] = LODWORD(occludeDef->attnLevel3);
  g_snd.entChanFullOcclusionDisabled[v6 - 4600] = LODWORD(occludeDef->attnLevel4);
}

/*
==============
SND_SetParamValue
==============
*/
void SND_SetParamValue(snd_param_info_t *info, float value, float min, float max, int msec)
{
  double v6; 
  bool v7; 
  float v8; 

  if ( value < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4704, ASSERT_TYPE_ASSERT, "(value >= 0.0f)", (const char *)&queryFormat, "value >= 0.0f") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4705, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( msec )
  {
    v6 = I_fclamp(value, min, max);
    v7 = *(float *)&v6 < info->value;
    v8 = 1.0 / (float)msec;
    info->goalgain = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v6 - info->value) & _xmm);
    info->goalvalue = *(float *)&v6;
    if ( v7 )
    {
      info->goalfraction = 1.0;
      info->goalrate = COERCE_FLOAT(LODWORD(v8) ^ _xmm);
    }
    else
    {
      info->goalfraction = 0.0;
      info->goalrate = v8;
    }
  }
  else
  {
    info->goalvalue = value;
    info->value = value;
    info->goalrate = 0;
  }
}

/*
==============
SND_SetPlaybackIdNotPlayed
==============
*/
__int64 SND_SetPlaybackIdNotPlayed(int index)
{
  __int64 v1; 

  v1 = index;
  if ( (unsigned int)index > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3056, ASSERT_TYPE_ASSERT, "(index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "index >= 0 && index < SND_MAX_VOICES") )
    __debugbreak();
  g_snd.chaninfoUnweightedPriority[492 * v1 - 48701] = 0.0;
  return 0i64;
}

/*
==============
SND_SetReverbParams
==============
*/
void SND_SetReverbParams(const unsigned int id, ReverbDescriptor index, bool fadeOut)
{
  __int64 v3; 
  unsigned int v4; 
  const SndSendEffectParams *Radverb; 
  const SndSendEffectParams *v8; 
  sd_send_effect_param *v9; 
  __m256i v10; 
  float v11; 
  __m256i params; 
  __m256i params_32; 
  __m256i params_64; 
  __m256i v15; 
  __m256i v16; 
  __int128 v17; 
  float delay5HpfCutoff; 

  v3 = index;
  v4 = 0;
  if ( (unsigned int)index >= RVB_MAX_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1676, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( RVB_MAX_NUM )", "index doesn't index RVB_MAX_NUM\n\t%i not in [0, %i)", index, 4) )
    __debugbreak();
  SND_RvParamsDefault((snd_rv_params *)&params);
  SND_DelayParamsDefault((snd_quad_five_tap_delay_params *)&params_64.m256i_u64[2]);
  Radverb = SND_GetRadverb(id);
  if ( Radverb || (v8 = SND_GetRadverb(g_snd.defaultHash), id = g_snd.defaultHash, (Radverb = v8) != NULL) )
  {
    *(__int64 *)((char *)&params.m256i_i64[1] + 4) = *(_QWORD *)&Radverb->earlyTime;
    *(__int64 *)((char *)&params.m256i_i64[2] + 4) = *(_QWORD *)&Radverb->earlyGain;
    *(_OWORD *)params_32.m256i_i8 = *(_OWORD *)&Radverb->returnGain;
    params_32.m256i_i32[4] = LODWORD(Radverb->dampLpf);
    params_32.m256i_i64[3] = *(_QWORD *)&Radverb->dryGain;
    params_64.m256i_i64[0] = *(_QWORD *)&Radverb->lateSize;
    params_64.m256i_i32[3] = LODWORD(Radverb->rearLevel);
    params.m256i_i8[4] = fadeOut;
    params.m256i_i32[2] = g_snd.time;
    params_64.m256i_i8[16] = Radverb->delay1enabled;
    *(__int64 *)((char *)&params_64.m256i_i64[2] + 4) = *(_QWORD *)&Radverb->delay1delayTimeMS;
    params_64.m256i_i32[7] = LODWORD(Radverb->delay1LpfCutoff);
    v15.m256i_i32[0] = LODWORD(Radverb->delay1HpfCutoff);
    v15.m256i_i8[4] = Radverb->delay2enabled;
    *(_OWORD *)&v15.m256i_u64[1] = *(_OWORD *)&Radverb->delay2delayTimeMS;
    v15.m256i_i8[24] = Radverb->delay3enabled;
    v15.m256i_i32[7] = LODWORD(Radverb->delay3delayTimeMS);
    v16.m256i_i64[0] = *(_QWORD *)&Radverb->delay3Level;
    v16.m256i_i32[2] = LODWORD(Radverb->delay3HpfCutoff);
    v16.m256i_i8[12] = Radverb->delay4enabled;
    *(_OWORD *)&v16.m256i_u64[2] = *(_OWORD *)&Radverb->delay4delayTimeMS;
    LOBYTE(v17) = Radverb->delay5enabled;
    *(_QWORD *)((char *)&v17 + 4) = *(_QWORD *)&Radverb->delay5delayTimeMS;
    HIDWORD(v17) = LODWORD(Radverb->delay5LpfCutoff);
    delay5HpfCutoff = Radverb->delay5HpfCutoff;
    v4 = id;
  }
  v9 = &sdGlob.currentReverbParams[v3];
  v10 = v16;
  *(__m256i *)&v9->reverbParams.frameRate = params;
  *(__m256i *)&v9->reverbParams.returnGain = params_32;
  *(__m256i *)&v9->reverbParams.lateSize = params_64;
  *(__m256i *)&v9->delayParams.params[0].hpfCutoff = v15;
  *(__m256i *)&v9->delayParams.params[2].level = v10;
  v11 = delay5HpfCutoff;
  *(_OWORD *)&v9->delayParams.params[4].enabled = v17;
  v9->delayParams.params[4].hpfCutoff = v11;
  sdGlob.currentReverbId[v3] = v4;
}

/*
==============
SND_SetTimeLerp
==============
*/

void __fastcall SND_SetTimeLerp(TimeLerp *lerp, double time)
{
  float v2; 

  if ( *(float *)&time == 0.0 )
    v2 = 0.0;
  else
    v2 = 0.001 / *(float *)&time;
  _XMM0 = LODWORD(FLOAT_1_0);
  __asm
  {
    vcmpneqss xmm1, xmm1, xmm2
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  lerp->current = *(float *)&_XMM1;
  lerp->rateMS = v2;
}

/*
==============
SND_SetTimeScaleLerp
==============
*/
void SND_SetTimeScaleLerp(const int entchannel, const float lerp)
{
  __int64 v2; 
  int v4; 

  v2 = entchannel;
  if ( (unsigned int)entchannel >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6046, ASSERT_TYPE_ASSERT, "(unsigned)( entchannel ) < (unsigned)( 256 )", "entchannel doesn't index SND_MAX_ENTCHANNELS\n\t%i not in [0, %i)", entchannel, v4) )
      __debugbreak();
  }
  if ( (lerp < 0.0 || lerp > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6047, ASSERT_TYPE_ASSERT, "(lerp >= 0.0f && lerp <= 1.0f)", (const char *)&queryFormat, "lerp >= 0.0f && lerp <= 1.0f") )
    __debugbreak();
  g_snd.entchanOverrides.timescaleLerp[v2] = lerp;
}

/*
==============
SND_SetUIPause
==============
*/
void SND_SetUIPause(bool paused)
{
  g_snd.uiPaused = paused;
}

/*
==============
SND_SetUpVoiceParams
==============
*/
void SND_SetUpVoiceParams(SndVoiceParams *params, const SndAlias *alias, unsigned __int64 sndEnt, snd_alias_system_t system)
{
  __int64 v5; 
  double TimescaleLerp; 
  float v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  EntityParamInfo *EntityParamInfo; 
  int flags; 
  int v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  LocalClientNum_t *p_localClientNum; 
  unsigned int i; 
  __int64 v24; 

  v5 = (unsigned __int8)(alias->flags >> 10);
  *(__m256i *)&params->occlusionParams0.enabled = *(__m256i *)&g_snd.entChanOcclusionParams[v5][0].enabled;
  params->occlusionParams0.attnLevel4 = g_snd.entChanOcclusionParams[v5][0].attnLevel4;
  params->occlusionParams1 = *(EntChanOcclusionParams *)&g_snd.entChanFullOcclusionDisabled[18 * v5 - 4599];
  TimescaleLerp = SND_GetTimescaleLerp(v5);
  v10 = *(float *)&TimescaleLerp * g_snd.timescale;
  params->entityVolume = 1.0;
  params->entityPitch = 1.0;
  v11 = sndEnt & 0x1FFFFFFFFi64;
  params->timescalePitch = v10 + (float)(1.0 - *(float *)&TimescaleLerp);
  if ( (sndEnt & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v11 - 2049 <= 0x8FF || v11 <= 0x7FD || v11 - 5571 <= 0x7A120 )
  {
    v12 = (unsigned __int64)&g_sndEntityParamFence & 3;
    do
    {
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_sndEntityParamFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_sndEntityParamFence, 1, 0) == 1 );
    EntityParamInfo = SND_GetEntityParamInfo(sndEnt);
    if ( EntityParamInfo )
    {
      if ( params != (SndVoiceParams *)-80i64 )
        params->entityPitch = EntityParamInfo->pitch.value;
      if ( params != (SndVoiceParams *)-76i64 )
        params->entityVolume = EntityParamInfo->volume.value;
    }
    if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_sndEntityParamFence) )
      __debugbreak();
    _InterlockedExchange(&g_sndEntityParamFence, 0);
  }
  params->entChannelVol = SND_GetCurrentPriorityChannelGroup()->channelvol[v5].value;
  params->levelFadeInVol = g_snd.levelFadeInChannelVols.channelvol[v5].value;
  _XMM0 = (unsigned int)system;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  params->volModValue = g_snd.volmods[alias->volModIndex].value;
  _XMM1 = LODWORD(g_snd.scriptSoundFade.value);
  __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
  params->scriptSoundFade = *(float *)&_XMM0;
  *(double *)&_XMM0 = SND_SubmixGetVolmodAttenuation(alias->volModIndex);
  params->volModDuckAttenuation = *(float *)&_XMM0;
  params->focusCone = SND_SubmixGetVolmodFocusCone(alias->volModIndex);
  *(double *)&_XMM0 = SND_SubmixGetVolmodFocusAmount(alias->volModIndex);
  params->focusAmount = *(float *)&_XMM0;
  params->globalVolume = g_snd.volume;
  *(_QWORD *)&params->gpadSound = 0i64;
  flags = alias->flags;
  v19 = (flags >> 22) & 3;
  if ( v19 )
  {
    v20 = (sndEnt >> 33) & 3;
    if ( (unsigned int)v20 >= 2 )
    {
      LODWORD(v24) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16313, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, 2) )
        __debugbreak();
    }
    v21 = (unsigned __int64)&g_snd.listenerFence & 3;
    do
    {
      if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
        __debugbreak();
    }
    while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
    p_localClientNum = &g_snd.listeners[0].localClientNum;
    for ( i = 0; i < 2; ++i )
    {
      if ( *((_BYTE *)p_localClientNum + 4) && *p_localClientNum == (_DWORD)v20 )
        break;
      p_localClientNum += 32;
    }
    if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
    _InterlockedExchange(&g_snd.listenerFence, 0);
    params->gpadFlags = 0;
    if ( (flags & 0xC00000) == 0x400000 )
    {
      params->gpadSound = SGP_NONE;
    }
    else
    {
      if ( (flags & 0xC00000) == 0x800000 )
        v19 = 3;
      params->gpadSound = v19;
    }
  }
}

/*
==============
SND_SetVoiceStartInfo
==============
*/
void SND_SetVoiceStartInfo(int index, const SndStartAliasInfo *startInfo)
{
  __int64 v3; 
  SndVoice *v4; 
  SndEntState *EntState; 
  const tmat33_t<vec3_t> *v6; 
  vec3_t *p_org; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float pitch; 
  unsigned int duck; 
  const SndDuck *DuckById; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const SndCurve *VfCurveById; 
  const SndCurve *LpfCurveById; 
  const SndCurve *HpfCurveById; 
  const SndCurve *RvbCurveById; 
  const SpeakerMap *SpeakerMapById; 
  const DopplerPreset *DopplerPresetById; 
  __m256i *OcclusionShapeById; 
  SpeakerMap *p_speakerMap; 
  __int64 v29; 
  __int64 v30; 
  vec3_t outOrigin; 
  __int64 v32; 
  tmat33_t<vec3_t> out; 

  v32 = -2i64;
  v3 = index;
  if ( (unsigned int)index > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3420, ASSERT_TYPE_ASSERT, "(index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "index >= 0 && index < SND_MAX_VOICES") )
    __debugbreak();
  if ( startInfo->system > (unsigned int)SASYS_CGAME )
  {
    LODWORD(v30) = startInfo->system;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3421, ASSERT_TYPE_ASSERT, "( ( startInfo->system >= 0 && startInfo->system < SASYS_COUNT ) )", "( startInfo->system ) = %i", v30) )
      __debugbreak();
  }
  if ( !startInfo->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3422, ASSERT_TYPE_ASSERT, "(startInfo->alias)", (const char *)&queryFormat, "startInfo->alias") )
    __debugbreak();
  if ( startInfo->startDelayUs < 0 )
  {
    LODWORD(v30) = startInfo->startDelayUs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3423, ASSERT_TYPE_ASSERT, "( ( startInfo->startDelayUs >= 0 ) )", "( startInfo->startDelayUs ) = %i", v30) )
      __debugbreak();
  }
  v4 = &g_snd.voices[v3];
  if ( (startInfo->sndEnt & 0x1FFFFFFFFi64) == 2048 || !SND_IsEntChannel3D((unsigned __int8)(startInfo->alias->flags >> 10)) )
  {
    *(_QWORD *)v4->offset.v = 0i64;
    v4->offset.v[2] = 0.0;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 941, ASSERT_TYPE_ASSERT, "(sndVoice)", (const char *)&queryFormat, "sndVoice") )
      __debugbreak();
    SetSecureSndVec3(&vec3_origin, &v4->org.origin, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
  }
  else
  {
    EntState = SND_FindEntState(startInfo->sndEnt, 0);
    v6 = (const tmat33_t<vec3_t> *)EntState;
    if ( EntState && EntState->hasPosition )
    {
      SndEntState_GetOrigin(EntState, &outOrigin);
      AxisCopy(v6 + 2, &out);
      p_org = &startInfo->org;
      if ( ((LODWORD(startInfo->org.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(startInfo->org.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(startInfo->org.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3440, ASSERT_TYPE_SANITY, "( !IS_NAN( ( startInfo->org )[0] ) && !IS_NAN( ( startInfo->org )[1] ) && !IS_NAN( ( startInfo->org )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( startInfo->org )[0] ) && !IS_NAN( ( startInfo->org )[1] ) && !IS_NAN( ( startInfo->org )[2] )") )
        __debugbreak();
      v8 = p_org->v[0] - outOrigin.v[0];
      v9 = startInfo->org.v[1] - outOrigin.v[1];
      v10 = startInfo->org.v[2] - outOrigin.v[2];
      v4->offset.v[0] = (float)((float)(v9 * out.m[0].v[1]) + (float)(v8 * out.m[0].v[0])) + (float)(v10 * out.m[0].v[2]);
      v4->offset.v[1] = (float)((float)(v8 * out.m[1].v[0]) + (float)(v9 * out.m[1].v[1])) + (float)(v10 * out.m[1].v[2]);
      v11 = (float)((float)(v8 * out.m[2].v[0]) + (float)(v9 * out.m[2].v[1])) + (float)(v10 * out.m[2].v[2]);
      v4->offset.v[2] = v11;
      if ( ((LODWORD(v4->offset.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v4->offset.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v11) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3445, ASSERT_TYPE_SANITY, "( !IS_NAN( ( voice->offset )[0] ) && !IS_NAN( ( voice->offset )[1] ) && !IS_NAN( ( voice->offset )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( voice->offset )[0] ) && !IS_NAN( ( voice->offset )[1] ) && !IS_NAN( ( voice->offset )[2] )") )
        __debugbreak();
    }
    else
    {
      p_org = &startInfo->org;
      v4->offset.v[0] = startInfo->org.v[0];
      v4->offset.v[1] = startInfo->org.v[1];
      v4->offset.v[2] = startInfo->org.v[2];
    }
    SndVoice_SetOrigin(&g_snd.voices[v3], p_org);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  v4->propagationTriggerIndex = 1024;
  v4->reverbDef = NULL;
  v4->assetEntry = startInfo->assetEntry;
  v4->sndEnt = startInfo->sndEnt;
  g_snd.chaninfoEntchannel[v3] = (unsigned __int8)(startInfo->alias->flags >> 10);
  v4->priorityVolume = startInfo->priorityVolume;
  v4->priorityAttenuation = startInfo->priorityAttenuation;
  SND_RecalcChaninfoPriority(v3);
  v4->basevolume = startInfo->volume;
  v4->volumeScale = startInfo->volumeScale;
  v4->distanceScale = startInfo->distanceScale;
  SND_InitParameter(&v4->volumeInfo, 1.0);
  SND_InitParameter(&v4->pitchInfo, 1.0);
  v4->contextLerpVolume = startInfo->contextLerpVolume;
  pitch = startInfo->pitch;
  v4->basepitch = pitch;
  v4->pitchScale = startInfo->pitchScale;
  if ( (LODWORD(pitch) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3475, ASSERT_TYPE_SANITY, "( !IS_NAN( voice->basepitch ) )", (const char *)&queryFormat, "!IS_NAN( voice->basepitch )") )
    __debugbreak();
  if ( (LODWORD(v4->pitchScale) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3476, ASSERT_TYPE_SANITY, "( !IS_NAN( voice->pitchScale ) )", (const char *)&queryFormat, "!IS_NAN( voice->pitchScale )") )
    __debugbreak();
  v4->alias = startInfo->alias;
  v4->looptime = g_snd.looptime;
  v4->paused = 1;
  v4->system = startInfo->system;
  v4->startFraction = startInfo->fraction;
  v4->lfeScale = startInfo->lfeScale;
  v4->occlusionMatchesListener = 1;
  v4->occlusionAmount = 0.0;
  v4->occlusionWaitId = 0;
  v4->lpfCutoff = startInfo->lpfCutoff;
  v4->hpfCutoff = startInfo->hpfCutoff;
  *(_DWORD *)&v4->wasRestored = 0;
  v4->startTimeMSec = g_snd.time;
  v4->adsrIndex = startInfo->adsrIndex;
  SndVoice_GetOrigin(&g_snd.voices[v3], &v4->dopplerEffectLastPos);
  v4->dopplerEffectPitch = 1.0;
  v4->waitingForDoppler = 2;
  v4->soundFileInfo.loadingState = SFLS_LOADING;
  v4->soundFileInfo.srcChannelCount = startInfo->assetEntry->channelCount;
  v4->soundFileInfo.baserate = startInfo->assetEntry->frameRate;
  v4->autoSimId = startInfo->autoSimId;
  v4->submixRef = NULL;
  duck = startInfo->alias->duck;
  if ( duck )
    DuckById = SND_GetDuckById(duck);
  else
    DuckById = NULL;
  v4->submixDef = DuckById;
  v4->framesPlayed = 0i64;
  *(_QWORD *)&v4->masterEnvelope = 0i64;
  v4->masterSlaveLerp = 0.0;
  v4->cullingEnvelope = 1.0;
  SND_FaderSetRateTime(&v4->fadeInOut, (float)startInfo->fadeTime * 0.001);
  v4->fadeInOut.goal = 1.0;
  _XMM2 = LODWORD(v4->fadeInOut.value);
  _XMM0 = LODWORD(v4->fadeInOut.rate) & (unsigned __int128)_xmm;
  __asm
  {
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm7, xmm1
  }
  v4->fadeInOut.value = *(float *)&_XMM0;
  SND_FaderSetRate(&v4->submixAttenuation, 4.0);
  v4->submixAttenuation.goal = 1.0;
  v4->submixAttenuation.value = 1.0;
  SND_FaderSetRate(&v4->submixLpf, 4.0);
  SND_FaderSetGoal(&v4->submixLpf, 1.0);
  v4->submixLpf.value = v4->submixLpf.goal;
  SND_FaderSetRate(&v4->submixHpf, 4.0);
  SND_FaderSetGoal(&v4->submixHpf, 1.0);
  v4->submixHpf.value = v4->submixHpf.goal;
  v19 = DCONST_DVARFLT_snd_occfadetime;
  if ( !DCONST_DVARFLT_snd_occfadetime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occfadetime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  SND_FaderSetRateTime(&v4->occlusionVolume, v19->current.value);
  SND_FaderSetGoal(&v4->occlusionVolume, 1.0);
  v4->occlusionVolume.value = v4->occlusionVolume.goal;
  v20 = DCONST_DVARFLT_snd_occfadetime;
  if ( !DCONST_DVARFLT_snd_occfadetime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occfadetime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  SND_FaderSetRateTime(&v4->occlusionCutoff, v20->current.value);
  SND_FaderSetGoal(&v4->occlusionCutoff, 1.0);
  v4->occlusionCutoff.value = v4->occlusionCutoff.goal;
  VfCurveById = SND_GetVfCurveById(startInfo->alias->volumeFalloffCurve);
  LpfCurveById = SND_GetLpfCurveById(startInfo->alias->lpfCurve);
  HpfCurveById = SND_GetHpfCurveById(startInfo->alias->hpfCurve);
  RvbCurveById = SND_GetRvbCurveById(startInfo->alias->reverbSendCurve);
  SpeakerMapById = SND_GetSpeakerMapById(startInfo->alias->speakerMap);
  DopplerPresetById = SND_GetDopplerPresetById(startInfo->alias->dopplerPreset);
  OcclusionShapeById = (__m256i *)SND_GetOcclusionShapeById(startInfo->alias->occlusionShape);
  if ( !VfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3572, ASSERT_TYPE_ASSERT, "(vfCurve)", (const char *)&queryFormat, "vfCurve") )
    __debugbreak();
  if ( !LpfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3573, ASSERT_TYPE_ASSERT, "(lpfCurve)", (const char *)&queryFormat, "lpfCurve") )
    __debugbreak();
  if ( !HpfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3574, ASSERT_TYPE_ASSERT, "(hpfCurve)", (const char *)&queryFormat, "hpfCurve") )
    __debugbreak();
  if ( !RvbCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3575, ASSERT_TYPE_ASSERT, "(rvbCurve)", (const char *)&queryFormat, "rvbCurve") )
    __debugbreak();
  if ( !SpeakerMapById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3576, ASSERT_TYPE_ASSERT, "(speakerMap)", (const char *)&queryFormat, "speakerMap") )
    __debugbreak();
  if ( !DopplerPresetById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3577, ASSERT_TYPE_ASSERT, "(dopplerPreset)", (const char *)&queryFormat, "dopplerPreset") )
    __debugbreak();
  if ( !OcclusionShapeById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3578, ASSERT_TYPE_ASSERT, "(occlusionShape)", (const char *)&queryFormat, "occlusionShape") )
    __debugbreak();
  *(_OWORD *)v4->vfCurve.name = *(_OWORD *)VfCurveById->name;
  *(_OWORD *)&v4->vfCurve.name[16] = *(_OWORD *)&VfCurveById->name[16];
  *(_OWORD *)&v4->vfCurve.name[32] = *(_OWORD *)&VfCurveById->name[32];
  *(_OWORD *)&v4->vfCurve.name[48] = *(_OWORD *)&VfCurveById->name[48];
  *(_OWORD *)&v4->vfCurve.id = *(_OWORD *)&VfCurveById->id;
  *(_OWORD *)v4->vfCurve.points[1].v = *(_OWORD *)VfCurveById->points[1].v;
  *(_OWORD *)v4->vfCurve.points[3].v = *(_OWORD *)VfCurveById->points[3].v;
  *(_OWORD *)v4->vfCurve.points[5].v = *(_OWORD *)VfCurveById->points[5].v;
  *(_OWORD *)v4->vfCurve.points[7].v = *(_OWORD *)VfCurveById->points[7].v;
  *(_OWORD *)v4->vfCurve.points[9].v = *(_OWORD *)VfCurveById->points[9].v;
  *(_OWORD *)v4->vfCurve.points[11].v = *(_OWORD *)VfCurveById->points[11].v;
  *(_OWORD *)v4->vfCurve.points[13].v = *(_OWORD *)VfCurveById->points[13].v;
  v4->vfCurve.points[15] = VfCurveById->points[15];
  *(_OWORD *)v4->lpfCurve.name = *(_OWORD *)LpfCurveById->name;
  *(_OWORD *)&v4->lpfCurve.name[16] = *(_OWORD *)&LpfCurveById->name[16];
  *(_OWORD *)&v4->lpfCurve.name[32] = *(_OWORD *)&LpfCurveById->name[32];
  *(_OWORD *)&v4->lpfCurve.name[48] = *(_OWORD *)&LpfCurveById->name[48];
  *(_OWORD *)&v4->lpfCurve.id = *(_OWORD *)&LpfCurveById->id;
  *(_OWORD *)v4->lpfCurve.points[1].v = *(_OWORD *)LpfCurveById->points[1].v;
  *(_OWORD *)v4->lpfCurve.points[3].v = *(_OWORD *)LpfCurveById->points[3].v;
  *(_OWORD *)v4->lpfCurve.points[5].v = *(_OWORD *)LpfCurveById->points[5].v;
  *(_OWORD *)v4->lpfCurve.points[7].v = *(_OWORD *)LpfCurveById->points[7].v;
  *(_OWORD *)v4->lpfCurve.points[9].v = *(_OWORD *)LpfCurveById->points[9].v;
  *(_OWORD *)v4->lpfCurve.points[11].v = *(_OWORD *)LpfCurveById->points[11].v;
  *(_OWORD *)v4->lpfCurve.points[13].v = *(_OWORD *)LpfCurveById->points[13].v;
  v4->lpfCurve.points[15] = LpfCurveById->points[15];
  *(_OWORD *)v4->hpfCurve.name = *(_OWORD *)HpfCurveById->name;
  *(_OWORD *)&v4->hpfCurve.name[16] = *(_OWORD *)&HpfCurveById->name[16];
  *(_OWORD *)&v4->hpfCurve.name[32] = *(_OWORD *)&HpfCurveById->name[32];
  *(_OWORD *)&v4->hpfCurve.name[48] = *(_OWORD *)&HpfCurveById->name[48];
  *(_OWORD *)&v4->hpfCurve.id = *(_OWORD *)&HpfCurveById->id;
  *(_OWORD *)v4->hpfCurve.points[1].v = *(_OWORD *)HpfCurveById->points[1].v;
  *(_OWORD *)v4->hpfCurve.points[3].v = *(_OWORD *)HpfCurveById->points[3].v;
  *(_OWORD *)v4->hpfCurve.points[5].v = *(_OWORD *)HpfCurveById->points[5].v;
  *(_OWORD *)v4->hpfCurve.points[7].v = *(_OWORD *)HpfCurveById->points[7].v;
  *(_OWORD *)v4->hpfCurve.points[9].v = *(_OWORD *)HpfCurveById->points[9].v;
  *(_OWORD *)v4->hpfCurve.points[11].v = *(_OWORD *)HpfCurveById->points[11].v;
  *(_OWORD *)v4->hpfCurve.points[13].v = *(_OWORD *)HpfCurveById->points[13].v;
  v4->hpfCurve.points[15] = HpfCurveById->points[15];
  *(_OWORD *)v4->rvbCurve.name = *(_OWORD *)RvbCurveById->name;
  *(_OWORD *)&v4->rvbCurve.name[16] = *(_OWORD *)&RvbCurveById->name[16];
  *(_OWORD *)&v4->rvbCurve.name[32] = *(_OWORD *)&RvbCurveById->name[32];
  *(_OWORD *)&v4->rvbCurve.name[48] = *(_OWORD *)&RvbCurveById->name[48];
  *(_OWORD *)&v4->rvbCurve.id = *(_OWORD *)&RvbCurveById->id;
  *(_OWORD *)v4->rvbCurve.points[1].v = *(_OWORD *)RvbCurveById->points[1].v;
  *(_OWORD *)v4->rvbCurve.points[3].v = *(_OWORD *)RvbCurveById->points[3].v;
  *(_OWORD *)v4->rvbCurve.points[5].v = *(_OWORD *)RvbCurveById->points[5].v;
  *(_OWORD *)v4->rvbCurve.points[7].v = *(_OWORD *)RvbCurveById->points[7].v;
  *(_OWORD *)v4->rvbCurve.points[9].v = *(_OWORD *)RvbCurveById->points[9].v;
  *(_OWORD *)v4->rvbCurve.points[11].v = *(_OWORD *)RvbCurveById->points[11].v;
  *(_OWORD *)v4->rvbCurve.points[13].v = *(_OWORD *)RvbCurveById->points[13].v;
  v4->rvbCurve.points[15] = RvbCurveById->points[15];
  p_speakerMap = &v4->speakerMap;
  v29 = 3i64;
  do
  {
    *(_OWORD *)p_speakerMap->name = *(_OWORD *)SpeakerMapById->name;
    *(_OWORD *)&p_speakerMap->name[16] = *(_OWORD *)&SpeakerMapById->name[16];
    *(_OWORD *)&p_speakerMap->name[32] = *(_OWORD *)&SpeakerMapById->name[32];
    *(_OWORD *)&p_speakerMap->name[48] = *(_OWORD *)&SpeakerMapById->name[48];
    *(_OWORD *)&p_speakerMap->id = *(_OWORD *)&SpeakerMapById->id;
    *(_OWORD *)&p_speakerMap->stereoToStereo[1] = *(_OWORD *)&SpeakerMapById->stereoToStereo[1];
    *(_OWORD *)&p_speakerMap->monoTo51[1] = *(_OWORD *)&SpeakerMapById->monoTo51[1];
    p_speakerMap = (SpeakerMap *)((char *)p_speakerMap + 128);
    *(_OWORD *)&p_speakerMap[-1].stereoTo7144[28] = *(_OWORD *)&SpeakerMapById->monoTo51[5];
    SpeakerMapById = (const SpeakerMap *)((char *)SpeakerMapById + 128);
    --v29;
  }
  while ( v29 );
  *(_OWORD *)p_speakerMap->name = *(_OWORD *)SpeakerMapById->name;
  *(_OWORD *)&p_speakerMap->name[16] = *(_OWORD *)&SpeakerMapById->name[16];
  *(_OWORD *)&p_speakerMap->name[32] = *(_OWORD *)&SpeakerMapById->name[32];
  *(_OWORD *)&p_speakerMap->name[48] = *(_OWORD *)&SpeakerMapById->name[48];
  p_speakerMap->id = SpeakerMapById->id;
  *(__m256i *)v4->dopplerPreset.name = *(__m256i *)DopplerPresetById->name;
  *(__m256i *)&v4->dopplerPreset.name[32] = *(__m256i *)&DopplerPresetById->name[32];
  *(_OWORD *)&v4->dopplerPreset.id = *(_OWORD *)&DopplerPresetById->id;
  *(double *)&v4->dopplerPreset.maxPitch = *(double *)&DopplerPresetById->maxPitch;
  *(__m256i *)v4->occlusionShape.name = *OcclusionShapeById;
  *(__m256i *)&v4->occlusionShape.name[32] = OcclusionShapeById[1];
  *(__m256i *)&v4->occlusionShape.id = OcclusionShapeById[2];
  LODWORD(v4->occlusionShape.pitchOffsetAngle) = OcclusionShapeById[3].m256i_i32[0];
}

/*
==============
SND_SetVolModValue
==============
*/
void SND_SetVolModValue(unsigned int volmodindex, float value, int msec)
{
  __int64 v4; 
  int v5; 
  __int64 v6; 
  unsigned int volmodinfoCount; 

  v4 = volmodindex;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4821, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v4 >= g_snd.globals->volmodinfoCount )
  {
    volmodinfoCount = g_snd.globals->volmodinfoCount;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4822, ASSERT_TYPE_ASSERT, "(unsigned)( volmodindex ) < (unsigned)( g_snd.globals->volmodinfoCount )", "volmodindex doesn't index g_snd.globals->volmodinfoCount\n\t%i not in [0, %i)", v6, volmodinfoCount) )
      __debugbreak();
  }
  v5 = 1;
  if ( msec > 1 )
    v5 = msec;
  SND_SetParamValue(&g_snd.volmods[v4], value, 0.0, 1.0, v5);
}

/*
==============
SND_SetWorldPosition
==============
*/
char SND_SetWorldPosition(unsigned int id, const vec3_t *origin)
{
  unsigned int *p_playbackId; 
  unsigned int v4; 
  __int64 v6; 

  p_playbackId = &g_snd.voices[0].playbackId;
  v4 = 0;
  while ( *p_playbackId != id )
  {
    ++v4;
    p_playbackId += 492;
    if ( v4 >= 0x63 )
      return 0;
  }
  v6 = (int)v4;
  if ( (g_snd.voices[v6].sndEnt & 0x1FFFFFFFFi64) != 2046 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15214, ASSERT_TYPE_ASSERT, "(SndEnt_GetEntIndex( g_snd.voices[chanIdx].sndEnt ) == ENTITYNUM_WORLD)", "%s\n\tSND_SetPos: You may only set the position of a sound for \"world\" entities", "SndEnt_GetEntIndex( g_snd.voices[chanIdx].sndEnt ) == ENTITYNUM_WORLD") )
    __debugbreak();
  g_snd.voices[v6].offset.v[0] = origin->v[0];
  g_snd.voices[v6].offset.v[1] = origin->v[1];
  g_snd.voices[v6].offset.v[2] = origin->v[2];
  return 1;
}

/*
==============
SND_SetWorldPosition
==============
*/
char SND_SetWorldPosition(unsigned int id, const vec3_t *origin, unsigned __int64 sndEnt)
{
  unsigned int *p_playbackId; 
  unsigned int v5; 
  float *v7; 

  p_playbackId = &g_snd.voices[0].playbackId;
  v5 = 0;
  while ( *p_playbackId != id )
  {
    ++v5;
    p_playbackId += 492;
    if ( v5 >= 0x63 )
      return 0;
  }
  if ( !SND_IsWorldEntity(sndEnt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15231, ASSERT_TYPE_ASSERT, "(SND_IsWorldEntity( sndEnt ))", "%s\n\tSND_SetPos: You may only set the position of a sound for \"world\" entities", "SND_IsWorldEntity( sndEnt )") )
    __debugbreak();
  v7 = &g_snd.chaninfoUnweightedPriority[492 * v5 - 48670];
  *v7 = origin->v[0];
  v7[1] = origin->v[1];
  v7[2] = origin->v[2];
  return 1;
}

/*
==============
SND_ShouldDrawOcclusionForAlias
==============
*/
bool SND_ShouldDrawOcclusionForAlias(const snd_listener *listener, const SndAlias *alias, const vec3_t *emitter)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  float v10; 
  __int128 v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  const dvar_t *v19; 
  const char *string; 
  char v21; 
  char *v22; 
  char dest[128]; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 

  v6 = DCONST_DVARINT_snd_occlusionDebug;
  if ( !DCONST_DVARINT_snd_occlusionDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.integer )
    return 0;
  v10 = emitter->v[0];
  v11 = LODWORD(emitter->v[1]);
  v27 = v3;
  v13 = v11;
  v12 = *(float *)&v11 - listener->orient.origin.v[1];
  v26 = v4;
  v25 = v5;
  v14 = v10 - listener->orient.origin.v[0];
  v15 = emitter->v[2] - listener->orient.origin.v[2];
  *(float *)&v13 = fsqrt((float)((float)(v12 * v12) + (float)(v14 * v14)) + (float)(v15 * v15));
  _XMM4 = v13;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  if ( (float)((float)((float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * listener->orient.axis.m[0].v[1]) + (float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * listener->orient.axis.m[0].v[0])) + (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * listener->orient.axis.m[0].v[2])) <= 0.0 )
    return 0;
  v19 = DCONST_DVARSTR_snd_occlusionDebugAlias;
  if ( !DCONST_DVARSTR_snd_occlusionDebugAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_occlusionDebugAlias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  string = v19->current.string;
  memset_0(dest, 0, sizeof(dest));
  v21 = 0;
  if ( string )
  {
    if ( alias )
    {
      Core_strcpy(dest, 0x80ui64, string);
      v22 = strtok(dest, "%");
      if ( v22 )
      {
        while ( !*v22 || !strstr_0(alias->aliasName, v22) )
        {
          v22 = strtok(NULL, "%");
          if ( !v22 )
            return !dest[0] || v21;
        }
        v21 = 1;
      }
    }
  }
  return !dest[0] || v21;
}

/*
==============
SND_ShouldInit
==============
*/
char SND_ShouldInit()
{
  return 1;
}

/*
==============
SND_ShutdownDriver
==============
*/
void SND_ShutdownDriver(void)
{
  SND_StopSounds(SND_STOP_ALL);
  SD_Shutdown();
  g_snd.driverInitialized = 0;
}

/*
==============
SND_SoftReset
==============
*/
void SND_SoftReset(void)
{
  int *p_playTime; 
  unsigned int v1; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v3; 
  ntl::fixed_list<OcclusionLine,594,0> *v4; 

  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_WEAPON_REFLECT);
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
  CG_SndAutoSimReset();
  SND_Stop3DSounds();
  p_playTime = &g_ambGlob[0].playTime;
  v1 = 0;
  do
  {
    v1 += 2;
    *(_QWORD *)(p_playTime - 1) = 0i64;
    p_playTime[1] = 0;
    *((_BYTE *)p_playTime + 8) = 0;
    *(_QWORD *)(p_playTime + 3) = 0i64;
    *(_QWORD *)(p_playTime + 7) = 0i64;
    *(_QWORD *)(p_playTime + 5) = 0i64;
    p_playTime[9] = 0;
    *(_QWORD *)(p_playTime + 11) = 0i64;
    p_playTime[13] = 0;
    *((_BYTE *)p_playTime + 56) = 0;
    *(_QWORD *)(p_playTime + 15) = 0i64;
    *(_QWORD *)(p_playTime + 19) = 0i64;
    *(_QWORD *)(p_playTime + 17) = 0i64;
    p_playTime[21] = 0;
    p_playTime += 24;
  }
  while ( v1 < 2 );
  SND_InitEntityParamInfo();
  SND_InitWeaponRelection();
  SND_InitGlobalContexts();
  memset_0(g_snd.entState, 0, sizeof(g_snd.entState));
  s_FXPlaySoundCount = 0;
  s_FXPlaySoundHead = 0;
  SND_ClearAllOcclusionSettings();
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_occlusionLines.m_listHead.m_sentinel.mp_next;
  *(_QWORD *)g_snd.entChanFullOcclusionDisabled = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[2] = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[4] = 0i64;
  *(_QWORD *)&g_snd.entChanFullOcclusionDisabled[6] = 0i64;
  if ( (ntl::internal::list_head_base<ntl::internal::list_node<OcclusionLine> > *)s_occlusionLines.m_listHead.m_sentinel.mp_next != &s_occlusionLines.m_listHead )
  {
    v3 = s_occlusionLines.m_freelist.m_head.mp_next;
    do
    {
      v4 = (ntl::fixed_list<OcclusionLine,594,0> *)mp_next[1].mp_next;
      mp_next->mp_next = v3;
      v3 = mp_next;
      s_occlusionLines.m_freelist.m_head.mp_next = mp_next;
      mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v4;
    }
    while ( v4 != (ntl::fixed_list<OcclusionLine,594,0> *)&s_occlusionLines.m_listHead );
  }
  s_occlusionLines.m_listHead.m_sentinel.mp_prev = &s_occlusionLines.m_listHead.m_sentinel;
  s_occlusionLines.m_listHead.m_sentinel.mp_next = &s_occlusionLines.m_listHead.m_sentinel;
  SND_SubmixClearAll(0.0);
  s_notifiesCount = 0;
  *(_QWORD *)g_snd.paSpeakerDisabledArray = 0i64;
  s_notifiesHead = 0;
  memset_0(g_snd.delayedWeaponSounds, 0, sizeof(g_snd.delayedWeaponSounds));
  memset_0(g_snd.delayedBulletEvents, 0, sizeof(g_snd.delayedBulletEvents));
  SND_BankDetailStreaming_Init();
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_SoloChannel_f
==============
*/
void SND_SoloChannel_f(void)
{
  const char *v0; 
  unsigned int v1; 
  __int64 v3; 
  const char *EntChannelName; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    v1 = 0;
    _XMM7 = 0i64;
    while ( g_snd.globals && v1 < g_snd.globals->entchannelCount )
    {
      v3 = 0x7FFFFFFFi64;
      EntChannelName = SND_GetEntChannelName(v1);
      if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !EntChannelName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v5 = v0 - EntChannelName;
      while ( 1 )
      {
        v6 = (unsigned __int8)EntChannelName[v5];
        v7 = v3;
        v8 = *(unsigned __int8 *)EntChannelName++;
        --v3;
        if ( !v7 )
        {
LABEL_21:
          v11 = 0;
          goto LABEL_22;
        }
        if ( v6 != v8 )
        {
          v9 = v6 + 32;
          if ( v6 - 65 > 0x19 )
            v9 = v6;
          v6 = v9;
          v10 = v8 + 32;
          if ( v8 - 65 > 0x19 )
            v10 = v8;
          if ( v6 != v10 )
            break;
        }
        if ( !v6 )
          goto LABEL_21;
      }
      v11 = 1;
      if ( v6 < v10 )
        v11 = -1;
LABEL_22:
      _XMM0 = v11;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm7, xmm6, xmm2; channelvolume
      }
      SND_SetChannelVolume(v1++, *(float *)&_XMM1, 0);
    }
  }
  else
  {
    Com_Printf(9, "USAGE: snd_soloChannel <string channelName>\n");
  }
}

/*
==============
SND_SpatializeVoice
==============
*/
void SND_SpatializeVoice(const SndVoice *voice, float *volumes, const vec3_t *delta, const snd_listener *listener, const float dist)
{
  __int64 v9; 
  const dvar_t *v10; 
  bool IsChannelMissionVOChannel; 
  __int64 v12; 
  const dvar_t *v13; 
  bool has71Pan; 
  float v15; 
  const SndAlias *alias; 
  int srcChannelCount; 
  int v18; 
  int v19; 
  const SndAlias *v20; 
  float lfeScale; 
  const dvar_t *v22; 
  float envelopPercentage; 
  const dvar_t *v24; 
  float envelopMin; 
  float envelopMax; 
  float v27; 
  __int64 includeCenterChannel; 
  float spreadMinDist; 
  float stereoSpreadMaxDist; 
  float stereoSpreadMidPoint; 
  float stereoSpreadMaxAngle; 

  Profile_Begin(476);
  v9 = (unsigned __int8)(voice->alias->flags >> 10);
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2188, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v9 >= g_snd.globals->entchannelCount )
  {
    LODWORD(includeCenterChannel) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2189, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", includeCenterChannel) )
      __debugbreak();
  }
  v10 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    IsChannelMissionVOChannel = SND_IsChannelMissionVOChannel(v9);
  else
    IsChannelMissionVOChannel = g_snd.globals->entchannelInfo[v9].centerSpeakerPan;
  v12 = (unsigned __int8)(voice->alias->flags >> 10);
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2209, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v12 >= g_snd.globals->entchannelCount )
  {
    LODWORD(includeCenterChannel) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2210, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", includeCenterChannel) )
      __debugbreak();
  }
  v13 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    has71Pan = SND_IsChannelMissionVOChannel(v12);
  else
    has71Pan = g_snd.globals->entchannelInfo[v12].has71Pan;
  if ( g_snd.playback_channels < 16 )
  {
    if ( has71Pan && g_snd.playback_channels >= 8 )
    {
      v15 = dist;
      SND_Spatialize71(volumes, delta, listener, dist, voice->soundFileInfo.srcChannelCount, IsChannelMissionVOChannel, voice->alias->stereoSpreadMinDist, voice->alias->stereoSpreadMaxDist, voice->alias->stereoSpreadMidPoint, (float)voice->alias->stereoSpreadMaxAngle);
    }
    else
    {
      alias = voice->alias;
      v15 = dist;
      srcChannelCount = voice->soundFileInfo.srcChannelCount;
      stereoSpreadMaxAngle = (float)alias->stereoSpreadMaxAngle;
      stereoSpreadMidPoint = alias->stereoSpreadMidPoint;
      stereoSpreadMaxDist = alias->stereoSpreadMaxDist;
      spreadMinDist = alias->stereoSpreadMinDist;
      if ( g_snd.playback_channels <= 2 )
      {
        IsChannelMissionVOChannel = 0;
        SND_SpatializeStereo(volumes, delta, listener, dist, srcChannelCount, 0, spreadMinDist, stereoSpreadMaxDist, stereoSpreadMidPoint, stereoSpreadMaxAngle);
      }
      else
      {
        SND_Spatialize51(volumes, delta, listener, dist, srcChannelCount, IsChannelMissionVOChannel, spreadMinDist, stereoSpreadMaxDist, stereoSpreadMidPoint, stereoSpreadMaxAngle);
      }
    }
  }
  else
  {
    IsChannelMissionVOChannel = 1;
    v15 = dist;
    SND_Spatialize7144(volumes, delta, listener, dist, voice->soundFileInfo.srcChannelCount, 1, voice->alias->stereoSpreadMinDist, voice->alias->stereoSpreadMaxDist, voice->alias->stereoSpreadMidPoint, (float)voice->alias->stereoSpreadMaxAngle);
  }
  v18 = 0;
  if ( voice->soundFileInfo.srcChannelCount > 0 )
  {
    v19 = 0;
    do
    {
      v20 = voice->alias;
      lfeScale = voice->lfeScale;
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12139, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
        __debugbreak();
      v22 = DCONST_DVARFLT_snd_omnidirectionalPercentage;
      if ( !DCONST_DVARFLT_snd_omnidirectionalPercentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_omnidirectionalPercentage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      envelopPercentage = v20->envelopPercentage;
      if ( envelopPercentage > v22->current.value )
      {
        v24 = DCONST_DVARFLT_snd_omnidirectionalPercentage;
        if ( !DCONST_DVARFLT_snd_omnidirectionalPercentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_omnidirectionalPercentage") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        envelopPercentage = v24->current.value;
      }
      envelopMin = v20->envelopMin;
      if ( (float)(v15 - envelopMin) > 0.0 )
      {
        envelopMax = v20->envelopMax;
        if ( envelopMax != envelopMin )
        {
          v27 = (float)(v15 - envelopMin) / (float)(envelopMax - envelopMin);
          if ( v27 < 1.0 )
            envelopPercentage = (float)((float)(v20->envelopPercentage - envelopPercentage) * (float)(1.0 - v27)) + envelopPercentage;
        }
      }
      else
      {
        envelopPercentage = v20->envelopPercentage;
      }
      SND_ApplyVolumeCoefficientAdjustments(&volumes[v19], voice->alias->lfePercentage, voice->alias->centerPercentage, envelopPercentage, IsChannelMissionVOChannel, lfeScale);
      ++v18;
      v19 += 16;
    }
    while ( v18 < voice->soundFileInfo.srcChannelCount );
  }
  Profile_EndInternal(NULL);
}

/*
==============
SND_StartAlias
==============
*/
unsigned int SND_StartAlias(SndStartAliasInfo *startAliasInfo, SndAliasGroupTracking *inOutTracking, int *outVoiceIndex)
{
  __int128 v3; 
  const dvar_t *v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  snd_entchannel_info_t *v11; 
  char v12; 
  int v13; 
  char v14; 
  const char *v15; 
  char v16; 
  char v17; 
  bool IsEntChannel3D; 
  float volumeScale; 
  float volume; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  double v25; 
  const SndCurve *VfCurveById; 
  double v27; 
  int flags; 
  int v29; 
  int FreeVoice; 
  __int64 v32; 
  SndVoiceParams params; 
  __int128 v34; 

  if ( !startAliasInfo->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3801, ASSERT_TYPE_ASSERT, "(startAliasInfo->alias)", (const char *)&queryFormat, "startAliasInfo->alias") )
    __debugbreak();
  *outVoiceIndex = -1;
  v7 = DCONST_DVARBOOL_snd_enable_capture_mode;
  v8 = (unsigned __int8)(startAliasInfo->alias->flags >> 10);
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v9 = 0;
  if ( v7->current.enabled )
  {
    if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16435, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
      __debugbreak();
    if ( (unsigned int)v8 >= g_snd.globals->entchannelCount )
    {
      LODWORD(v32) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16436, ASSERT_TYPE_ASSERT, "( ( entChannel >= 0 && entChannel < g_snd.globals->entchannelCount ) )", "( entChannel ) = %i", v32) )
        __debugbreak();
    }
    v10 = 5381;
    v11 = &g_snd.globals->entchannelInfo[v8];
    if ( v11 && (v12 = v11->name[0]) != 0 )
    {
      v13 = 5381;
      do
      {
        v11 = (snd_entchannel_info_t *)((char *)v11 + 1);
        v14 = v12 | 0x20;
        if ( (unsigned int)(v12 - 65) >= 0x1A )
          v14 = v12;
        v13 = 65599 * v13 + v14;
        v12 = v11->name[0];
      }
      while ( v11->name[0] );
      if ( !v13 )
        v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    v15 = S_QUAD_AMBIENCE_CHANNEL;
    if ( S_QUAD_AMBIENCE_CHANNEL && (v16 = *S_QUAD_AMBIENCE_CHANNEL) != 0 )
    {
      do
      {
        ++v15;
        v17 = v16 | 0x20;
        if ( (unsigned int)(v16 - 65) >= 0x1A )
          v17 = v16;
        v10 = 65599 * v10 + v17;
        v16 = *v15;
      }
      while ( *v15 );
      if ( !v10 )
        v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( v13 == v10 )
      return 0;
  }
  v34 = v3;
  IsEntChannel3D = SND_IsEntChannel3D(v8);
  volumeScale = startAliasInfo->volumeScale;
  volume = startAliasInfo->volume;
  SND_SetUpVoiceParams(&params, startAliasInfo->alias, startAliasInfo->sndEnt, startAliasInfo->system);
  v22 = (float)((float)((float)((float)(volume * volumeScale) * params.entChannelVol) * params.levelFadeInVol) * params.volModValue) * params.entityVolume;
  v21 = v22;
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
    v21 = v22 * params.scriptSoundFade;
  v23 = v21 * params.globalVolume;
  v24 = FLOAT_1_0;
  v25 = I_fclamp(v23, 0.0, 1.0);
  startAliasInfo->priorityVolume = *(float *)&v25;
  if ( IsEntChannel3D )
  {
    if ( !SND_AnyActiveListeners() )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444E7870, 148i64, startAliasInfo->alias->aliasName);
    VfCurveById = SND_GetVfCurveById(startAliasInfo->alias->volumeFalloffCurve);
    if ( !VfCurveById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3827, ASSERT_TYPE_ASSERT, "(vfCurve)", (const char *)&queryFormat, "vfCurve") )
      __debugbreak();
    v27 = SND_Get3DDistanceAttenuation(&startAliasInfo->org, VfCurveById, startAliasInfo->alias->distMin, startAliasInfo->alias->distMax, startAliasInfo->distanceScale);
    v24 = *(float *)&v27;
  }
  startAliasInfo->priorityAttenuation = v24;
  flags = startAliasInfo->alias->flags;
  if ( (flags & 0x380u) <= 0x100 )
  {
    if ( (flags & 0x380) == 128 )
    {
      v9 = 94;
      v29 = 5;
    }
    else if ( IsEntChannel3D )
    {
      v9 = 32;
      v29 = 48;
    }
    else
    {
      v29 = 32;
    }
  }
  else
  {
    v9 = 84;
    v29 = 10;
  }
  FreeVoice = SND_FindFreeVoice(startAliasInfo, v8, v9, v29, inOutTracking);
  if ( FreeVoice == -1 )
    return 0;
  *outVoiceIndex = FreeVoice;
  return SND_StartAliasOnVoiceIndex(startAliasInfo, FreeVoice);
}

/*
==============
SND_StartAliasOnVoiceIndex
==============
*/
__int64 SND_StartAliasOnVoiceIndex(SndStartAliasInfo *startAliasInfo, int index)
{
  __int64 v2; 
  SndVoice *v4; 
  __int64 v5; 
  float speedOfSoundMult; 
  const char *assetFileName; 
  int flags; 
  unsigned __int64 v10; 
  double v11; 
  int timeshift; 
  unsigned int playbackIdCounter; 
  unsigned int v18; 
  __int64 v19; 
  vec3_t outOrigin; 
  __int64 v21; 
  char dest[128]; 

  v21 = -2i64;
  v2 = index;
  if ( !Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1191, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_SOUND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_SOUND_UPDATE )") )
    __debugbreak();
  if ( !startAliasInfo->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1192, ASSERT_TYPE_ASSERT, "(startAliasInfo->alias)", (const char *)&queryFormat, "startAliasInfo->alias") )
    __debugbreak();
  v4 = &g_snd.voices[v2];
  v5 = (unsigned __int8)(startAliasInfo->alias->flags >> 10);
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2153, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( (unsigned int)v5 >= g_snd.globals->entchannelCount )
  {
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 2154, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v19) )
      __debugbreak();
  }
  speedOfSoundMult = g_snd.globals->entchannelInfo[v5].speedOfSoundMult;
  if ( !SND_HasFreeVoice(v5) )
    return 0i64;
  if ( !startAliasInfo->assetExists )
  {
    assetFileName = "null";
    if ( startAliasInfo->alias->assetFileName )
      assetFileName = startAliasInfo->alias->assetFileName;
    Core_strcpy(dest, 0x80ui64, assetFileName);
    Com_PrintError(1, "Tried to play streamed sound '%s' from alias '%s', but it was not found at load time.\n", dest, startAliasInfo->alias->aliasName);
    return 0i64;
  }
  SND_DebugAliasPrint(v4->alias != NULL, v4->alias, "Stop voice requested by SND_StartAliasOnVoiceIndex()");
  SND_StopVoice(v2);
  SND_SetVoiceStartInfo(v2, startAliasInfo);
  SND_AddVoice(v5);
  flags = startAliasInfo->alias->flags;
  v10 = 65 * v2;
  if ( (flags & 0x300000) == 0x200000 )
  {
    sdGlob.voiceParams[v10 / 0x41].bus = SND_BUS_LICENCED;
  }
  else if ( (flags & 0x300000) == 0x100000 )
  {
    sdGlob.voiceParams[v10 / 0x41].bus = SND_BUS_MUSIC;
  }
  else
  {
    sdGlob.voiceParams[v10 / 0x41].bus = SND_GetEntChannelSubmixBus((unsigned __int8)(flags >> 10));
  }
  sdGlob.currentReverbId[v10 - 6434] = SND_GetEntChannelSendFlag((unsigned __int8)(startAliasInfo->alias->flags >> 10));
  sdGlob.currentReverbId[v10 - 6433] = 1065353216;
  SND_InitEQBankParams((SndEQBankParams *)&sdGlob.currentReverbId[v10 - 6393]);
  sdGlob.currentReverbId[v10 - 6372] = -1082130432;
  sdGlob.currentReverbId[v10 - 6371] = -1082130432;
  if ( (startAliasInfo->alias->flags & 2) != 0 )
  {
    v11 = I_random();
    startAliasInfo->fraction = *(float *)&v11;
  }
  if ( startAliasInfo->fraction <= 0.0 )
    goto LABEL_32;
  SND_GetSoundFileLengthMS(startAliasInfo->assetEntry);
  if ( startAliasInfo->fraction == 0.0 )
  {
    timeshift = startAliasInfo->timeshift;
    if ( timeshift )
      goto LABEL_33;
    if ( (startAliasInfo->alias->flags & 2) != 0 )
    {
      I_random();
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm1, 1 }
      timeshift = (int)*(float *)&_XMM1 & 0xFFFFFF00;
      goto LABEL_33;
    }
LABEL_32:
    timeshift = 0;
    goto LABEL_33;
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  timeshift = (int)*(float *)&_XMM1;
LABEL_33:
  if ( !startAliasInfo->preDelayed && SND_IsEntChannel3D(v5) && speedOfSoundMult > 0.0 )
  {
    SndVoice_GetOrigin(&g_snd.voices[v2], &outOrigin);
    startAliasInfo->startDelayUs += (int)(float)((float)(fsqrt(COERCE_FLOAT(COERCE_UNSIGNED_INT64(SND_DistSqToNearestListener(&outOrigin)))) * speedOfSoundMult) * 69.444443);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  sdGlob.voiceAlloc[v2] = 1;
  if ( SD_StartAlias(startAliasInfo, v2, timeshift) )
  {
    if ( v4->soundFileInfo.loadingState == SFLS_UNLOADED )
      return 0i64;
    if ( (unsigned int)v2 > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3068, ASSERT_TYPE_ASSERT, "(index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "index >= 0 && index < SND_MAX_VOICES") )
      __debugbreak();
    if ( v4->soundFileInfo.loadingState == SFLS_UNLOADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3072, ASSERT_TYPE_ASSERT, "(voice->soundFileInfo.loadingState != SFLS_UNLOADED)", (const char *)&queryFormat, "voice->soundFileInfo.loadingState != SFLS_UNLOADED") )
      __debugbreak();
    if ( !v4->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3073, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
      __debugbreak();
    playbackIdCounter = g_snd.playbackIdCounter;
    if ( g_snd.playbackIdCounter > 0x7FFFFFFF )
      playbackIdCounter = 1;
    g_snd.playbackIdCounter = playbackIdCounter;
    v18 = playbackIdCounter;
    if ( (v4->alias->flags & 1) != 0 )
      v18 = playbackIdCounter | 0x80000000;
    g_snd.playbackIdCounter = playbackIdCounter + 1;
    v4->playbackId = v18;
    SND_SetUpVoiceParams(&v4->params, v4->alias, v4->sndEnt, v4->system);
    return v18;
  }
  else
  {
    if ( (unsigned int)v2 > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3056, ASSERT_TYPE_ASSERT, "(index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "index >= 0 && index < SND_MAX_VOICES") )
      __debugbreak();
    g_snd.chaninfoUnweightedPriority[492 * v2 - 48701] = 0.0;
    return 0i64;
  }
}

/*
==============
SND_StartBackground
==============
*/
__int64 SND_StartBackground(LocalClientNum_t localClientNum, int track, const SndAlias *alias, float startVolumeScale, int fadetime, float fraction, snd_alias_system_t system, int secondaryGroupId)
{
  const char *assetFileName; 
  const char *v12; 
  float volMin; 
  double v14; 
  float v15; 
  float v16; 
  float pitchMin; 
  double v18; 
  float v19; 
  int v20; 
  const SndAlias *v21; 
  unsigned int started; 
  __int64 v23; 
  double v24; 
  int startDelayMax; 
  int startDelay; 
  __int64 v27; 
  ScopedCriticalSection v28; 
  SndStartAliasInfo info; 
  char dest[128]; 

  if ( !Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6128, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_SOUND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_SOUND_UPDATE )") )
    __debugbreak();
  if ( (unsigned int)track > 3 )
  {
    LODWORD(v27) = track;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6129, ASSERT_TYPE_ASSERT, "( ( track >= 0 && track < SND_TRACK_COUNT ) )", "( track ) = %i", v27) )
      __debugbreak();
  }
  if ( (fraction < 0.0 || fraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6130, ASSERT_TYPE_ASSERT, "( ( fraction >= 0 && fraction <= 1 ) )", "( fraction ) = %g", fraction) )
    __debugbreak();
  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6131, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  if ( startVolumeScale < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6132, ASSERT_TYPE_ASSERT, "( ( startVolumeScale >= 0.0f ) )", "( startVolumeScale ) = %g", startVolumeScale) )
    __debugbreak();
  if ( fadetime < 0 )
  {
    LODWORD(v27) = fadetime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6133, ASSERT_TYPE_ASSERT, "( ( fadetime >= 0 ) )", "( fadetime ) = %i", v27) )
      __debugbreak();
  }
  if ( SND_IsEntChannel3D((unsigned __int8)(alias->flags >> 10)) )
  {
    assetFileName = "null";
    if ( alias->assetFileName )
      assetFileName = alias->assetFileName;
    Core_strcpy(dest, 0x80ui64, assetFileName);
    Com_PrintError(9, "Alias: %s Sound: %s played as an ambient track uses a 3D channel type\n", alias->aliasName, dest);
    return 0i64;
  }
  else if ( (alias->flags & 0x380u) > 0x100 )
  {
    volMin = alias->volMin;
    v14 = I_random();
    v15 = (float)(*(float *)&v14 * (float)(alias->volMax - volMin)) + volMin;
    I_fclamp(v15, 0.0, 4.0);
    v16 = v15;
    pitchMin = alias->pitchMin;
    v18 = I_random();
    v19 = (float)(*(float *)&v18 * (float)(alias->pitchMax - pitchMin)) + pitchMin;
    I_fclamp(v19, 0.001, 2.0);
    v20 = track + 80;
    if ( (unsigned int)(v20 - 80) > 0xD )
    {
      LODWORD(v27) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6153, ASSERT_TYPE_ASSERT, "( ( voiceIndex >= ((0 + 32) + 48) && voiceIndex < ((0 + 32) + 48) + ( SND_TRACK_COUNT + 10 ) ) )", "( voiceIndex ) = %i", v27) )
        __debugbreak();
    }
    ScopedCriticalSection::ScopedCriticalSection(&v28, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( !SND_IsVoiceFree(v20) )
    {
      v21 = g_snd.voices[v20].alias;
      SND_DebugAliasPrint(v21 != NULL, v21, "Stop voice requested by SND_StartBackground()");
      SND_StopVoice(v20);
    }
    started = 0;
    if ( alias->assetId )
    {
      v23 = v20;
      g_snd.voices[v23].basepitch = v19;
      if ( (LODWORD(v19) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6169, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )", v19, -2i64) )
        __debugbreak();
      SND_InitParameter(&g_snd.voices[v23].pitchInfo, v19);
      g_snd.voices[v23].basevolume = v16;
      g_snd.voices[v23].occlusionAmount = 0.0;
      g_snd.voices[v23].occlusionWaitId = 0;
      info.alias = alias;
      info.sndEnt = 2048i64;
      info.org.v[0] = 0.0;
      info.org.v[1] = 0.0;
      info.org.v[2] = 0.0;
      info.volume = v16;
      info.volumeScale = FLOAT_1_0;
      v24 = I_fclamp(v16, 0.0, 1.0);
      info.priorityVolume = *(float *)&v24;
      info.priorityAttenuation = FLOAT_1_0;
      info.contextLerpVolume = FLOAT_1_0;
      info.pitch = v19;
      info.pitchScale = FLOAT_1_0;
      info.timeshift = 0;
      info.fraction = fraction;
      startDelayMax = alias->startDelayMax;
      startDelay = alias->startDelay;
      if ( startDelayMax > startDelay )
        startDelay = I_irand(startDelay, startDelayMax);
      info.startDelayUs = 1000 * startDelay;
      info.system = system;
      info.adsrIndex = -1;
      info.fadeTime = 0;
      info.autoSimId = -1;
      info.autoSimTimeStamp = 0i64;
      info.autoSimShotCount = SND_WEAP_SHOT_FIRST;
      info.lfeScale = FLOAT_1_0;
      info.lpfCutoff = FLOAT_N1_0;
      info.hpfCutoff = FLOAT_N1_0;
      info.secondaryGroupId = secondaryGroupId;
      info.preDelayed = 0;
      if ( SND_FindAssetsForVoice(&info) )
      {
        started = SND_StartAliasOnVoiceIndex(&info, v20);
        if ( started )
          SND_SetParamValue(&g_snd.voices[v23].volumeInfo, startVolumeScale, 0.0, 1.0, fadetime);
        SND_DebugAliasPrint(started != 0, alias, "Started");
      }
      else if ( ++snd_errorLimit < 1000 )
      {
        Com_PrintError(9, "Background alias %s's sound data was not yet loaded when played.\n", info.alias->aliasName);
      }
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v28);
    return started;
  }
  else
  {
    v12 = "null";
    if ( alias->assetFileName )
      v12 = alias->assetFileName;
    Core_strcpy(dest, 0x80ui64, v12);
    Com_PrintError(9, "Alias %s Sound %s played as an ambient track is not streamed\n", alias->aliasName, dest);
    return 0i64;
  }
}

/*
==============
SND_StartBulletEvent
==============
*/
void SND_StartBulletEvent(int id)
{
  __int64 v1; 
  int v3; 

  v1 = id;
  if ( (unsigned int)id >= 0x40 )
  {
    v3 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7639, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( ( sizeof( *array_counter( g_snd.delayedBulletEvents ) ) + 0 ) )", "id doesn't index ARRAY_COUNT( g_snd.delayedBulletEvents )\n\t%i not in [0, %i)", id, v3) )
      __debugbreak();
  }
  if ( (int)v1 >= 0 && (unsigned int)v1 < 0x40 )
    *(_DWORD *)g_snd.delayedBulletEvents[v1].state = 1;
}

/*
==============
SND_Stop3DSounds
==============
*/
void SND_Stop3DSounds()
{
  int v0; 
  bool *voiceAlloc; 
  const SndAlias **p_alias; 
  __int64 v3; 

  v0 = 0;
  voiceAlloc = sdGlob.voiceAlloc;
  p_alias = &g_snd.voices[0].alias;
  do
  {
    if ( (unsigned int)v0 > 0x62 )
    {
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v3) )
        __debugbreak();
    }
    if ( *voiceAlloc && SND_IsEntChannel3D((unsigned __int8)((*p_alias)->flags >> 10)) )
    {
      SND_DebugAliasPrint(*p_alias != NULL, *p_alias, "Stop voice requested by SND_Stop3DSounds()");
      SND_StopVoice(v0);
    }
    ++v0;
    ++voiceAlloc;
    p_alias += 246;
  }
  while ( v0 < 99 );
}

/*
==============
SND_StopAmbient
==============
*/
void SND_StopAmbient(int fadetime)
{
  if ( g_snd.driverInitialized )
  {
    if ( fadetime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6709, ASSERT_TYPE_ASSERT, "( ( fadetime >= 0 ) )", "( fadetime ) = %i", fadetime) )
      __debugbreak();
    SND_StopBackground(0, fadetime);
    SND_StopBackground(1, fadetime);
    SND_StopBackground(2, fadetime);
    SND_StopBackground(3, fadetime);
  }
}

/*
==============
SND_StopAmbientAlias
==============
*/
void SND_StopAmbientAlias(const char *aliasName, int fadeTime)
{
  int v4; 
  bool v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  ScopedCriticalSection v9; 

  if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6720, ASSERT_TYPE_ASSERT, "(aliasName != 0)", (const char *)&queryFormat, "aliasName != NULL") )
    __debugbreak();
  if ( fadeTime < 0 )
  {
    LODWORD(v7) = fadeTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6721, ASSERT_TYPE_ASSERT, "( ( fadeTime >= 0 ) )", "( fadeTime ) = %i", v7) )
      __debugbreak();
  }
  ScopedCriticalSection::ScopedCriticalSection(&v9, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v4 = 0;
  v5 = 1;
  while ( 1 )
  {
    if ( !v5 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6249, ASSERT_TYPE_ASSERT, "(unsigned)( number ) < (unsigned)( 2 )", "number doesn't index SND_NUM_AMBIENT_TRACKS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( SND_IsAliasPlayingOnTrack(aliasName, v4 != 0 ? 2 : 0) )
      break;
    v5 = (unsigned int)++v4 < 2;
    if ( v4 >= 2 )
      goto LABEL_23;
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6249, ASSERT_TYPE_ASSERT, "(unsigned)( number ) < (unsigned)( 2 )", "number doesn't index SND_NUM_AMBIENT_TRACKS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  SND_StopBackground(v4 != 0 ? 2 : 0, fadeTime);
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6249, ASSERT_TYPE_ASSERT, "(unsigned)( number ) < (unsigned)( 2 )", "number doesn't index SND_NUM_AMBIENT_TRACKS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = 1;
  if ( v4 )
    v6 = 3;
  SND_StopBackground(v6, fadeTime);
LABEL_23:
  ScopedCriticalSection::~ScopedCriticalSection(&v9);
}

/*
==============
SND_StopAutoSim
==============
*/
void SND_StopAutoSim(int autoSimId)
{
  unsigned int v2; 
  bool *voiceAlloc; 
  unsigned int v4; 
  const SndAlias **p_alias; 
  int *p_autoSimId; 

  if ( autoSimId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15255, ASSERT_TYPE_ASSERT, "(autoSimId != -1)", (const char *)&queryFormat, "autoSimId != INVALID_AUTOSIM_ID") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  v2 = 0;
  voiceAlloc = sdGlob.voiceAlloc;
  v4 = 0;
  p_alias = &g_snd.voices[0].alias;
  do
  {
    if ( *voiceAlloc && *((_DWORD *)p_alias + 30) == autoSimId )
    {
      SND_DebugAliasPrint(*p_alias != NULL, *p_alias, "Stop voice requested by SND_StopAutoSim()");
      SND_StopVoice(v4);
    }
    ++v4;
    ++voiceAlloc;
    p_alias += 246;
  }
  while ( v4 < 0x63 );
  p_autoSimId = &g_sd.voicePool[0].autoSimId;
  do
  {
    if ( *p_autoSimId == autoSimId )
      SD_StopHeldAutoSimVoice(v2);
    ++v2;
    p_autoSimId += 266;
  }
  while ( v2 < 0xC6 );
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_StopBackground
==============
*/
void SND_StopBackground(int track, int fadetime)
{
  __int64 v3; 
  __int64 v4; 
  snd_param_info_t *v5; 
  __int64 v6; 
  ScopedCriticalSection v8; 

  v3 = track;
  if ( (unsigned int)track > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6225, ASSERT_TYPE_ASSERT, "( ( track >= 0 && track < SND_TRACK_COUNT ) )", "( track ) = %i", track) )
    __debugbreak();
  if ( fadetime < 0 )
  {
    LODWORD(v6) = fadetime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6226, ASSERT_TYPE_ASSERT, "( ( fadetime >= 0 ) )", "( fadetime ) = %i", v6) )
      __debugbreak();
  }
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  if ( (unsigned int)(v3 + 80) > 0x62 )
  {
    LODWORD(v6) = v3 + 80;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v6) )
      __debugbreak();
  }
  v4 = v3 + 80;
  if ( sdGlob.voiceAlloc[v3 + 80] )
  {
    if ( fadetime <= 0 || (v5 = (snd_param_info_t *)&g_snd.chaninfoUnweightedPriority[492 * v4 - 48694], v5->value <= 0.0) )
    {
      SND_DebugAliasPrint(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v4 - 48680] != 0i64, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * v4 - 48680], "Stop voice requested by SND_StopBackground()");
      SND_StopVoice(v3 + 80);
    }
    else
    {
      SND_SetParamValue(v5, 0.0, 0.0, 1.0, fadetime);
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
}

/*
==============
SND_StopMusicState
==============
*/

void __fastcall SND_StopMusicState(unsigned int stateId)
{
  SNDL_StopMusicState(stateId);
}

/*
==============
SND_StopMusicState
==============
*/
void SND_StopMusicState(const char *stateName)
{
  const char *v1; 
  char v2; 
  unsigned int v3; 
  char v4; 

  v1 = stateName;
  if ( stateName && (v2 = *stateName) != 0 )
  {
    v3 = 5381;
    do
    {
      ++v1;
      v4 = v2 | 0x20;
      if ( (unsigned int)(v2 - 65) >= 0x1A )
        v4 = v2;
      v3 = 65599 * v3 + v4;
      v2 = *v1;
    }
    while ( *v1 );
    if ( !v3 )
      v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( stateName && *stateName )
      Com_PrintError(9, "SOUND: Unknown music state '%s' %x\n", stateName, 0i64);
  }
  SNDL_StopMusicState(v3);
}

/*
==============
SND_StopMusicState
==============
*/

void __fastcall SND_StopMusicState(const unsigned int *stateIdArray, unsigned int arrayCount)
{
  SNDL_StopMusicState(stateIdArray, arrayCount);
}

/*
==============
SND_StopSoundAliasAndSecondariesByAliasId
==============
*/
__int64 SND_StopSoundAliasAndSecondariesByAliasId(unsigned int aliasId, LocalClientNum_t localClientNum, int entnum)
{
  unsigned __int64 SndEntHandle; 
  int v5; 
  int v6; 
  __int64 v7; 
  const SndAlias **p_alias; 
  const SndAlias *v9; 
  unsigned __int8 v10; 
  sd_voice **voices; 
  sd_voice *v13; 
  unsigned int secondaryGroupId; 
  __int64 v15; 
  ScopedCriticalSection v16; 

  SndEntHandle = CG_GenerateSndEntHandle(localClientNum, entnum);
  ScopedCriticalSection::ScopedCriticalSection(&v16, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v5 = 0;
  v6 = 0;
  v7 = 0i64;
  p_alias = &g_snd.voices[0].alias;
  while ( 1 )
  {
    if ( (unsigned int)v6 > 0x62 )
    {
      LODWORD(v15) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v15) )
        __debugbreak();
    }
    if ( sdGlob.voiceAlloc[v7] && *(p_alias - 12) == (const SndAlias *)SndEntHandle )
    {
      v9 = *p_alias;
      if ( (*p_alias)->id == aliasId )
        break;
    }
    ++v6;
    ++v7;
    p_alias += 246;
    if ( v6 >= 99 )
    {
      v10 = 0;
      goto LABEL_10;
    }
  }
  voices = g_sd.voices;
  v13 = g_sd.voices[v6];
  if ( v13 && (secondaryGroupId = v13->secondaryGroupId) != 0 )
  {
    do
    {
      if ( *voices && (*voices)->secondaryGroupId == secondaryGroupId )
      {
        SND_DebugAliasPrint(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v7 - 48680] != 0i64, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * v7 - 48680], "Stop voice requested by SND_StopSoundAliasAndSecondariesByAliasId()");
        SND_StopVoice(v5);
      }
      ++v5;
      ++voices;
    }
    while ( v5 < 99 );
    v10 = 1;
  }
  else
  {
    SND_DebugAliasPrint(v9 != NULL, v9, "Stop voice requested by SND_StopSoundAliasAndSecondariesByAliasId()");
    SND_StopVoice(v6);
    v10 = 1;
  }
LABEL_10:
  ScopedCriticalSection::~ScopedCriticalSection(&v16);
  return v10;
}

/*
==============
SND_StopSoundAliasById
==============
*/
bool SND_StopSoundAliasById(unsigned int id)
{
  int v3; 
  int v4; 
  __int64 v5; 
  unsigned int *p_playbackId; 
  sd_voice **voices; 
  sd_voice *v8; 
  unsigned int secondaryGroupId; 
  const SndAlias *alias; 
  ScopedCriticalSection v11; 

  if ( !id )
    return 0;
  ScopedCriticalSection::ScopedCriticalSection(&v11, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v3 = 0;
  v4 = 0;
  v5 = 0i64;
  p_playbackId = &g_snd.voices[0].playbackId;
  while ( *p_playbackId != id )
  {
    ++v4;
    ++v5;
    p_playbackId += 492;
    if ( (__int64)p_playbackId >= (__int64)&g_snd.chaninfoUnweightedPriority[7] )
      goto LABEL_16;
  }
  voices = g_sd.voices;
  v8 = g_sd.voices[v4];
  if ( v8 && (secondaryGroupId = v8->secondaryGroupId) != 0 )
  {
    do
    {
      if ( *voices )
      {
        if ( (*voices)->secondaryGroupId == secondaryGroupId )
        {
          SND_DebugAliasPrint(g_snd.voices[v5].alias != NULL, g_snd.voices[v5].alias, "Stop voice requested by SND_StopSoundAliasById()");
          SND_StopVoice(v3);
        }
      }
      ++v3;
      ++voices;
    }
    while ( v3 < 99 );
  }
  else
  {
    alias = g_snd.voices[v4].alias;
    SND_DebugAliasPrint(alias != NULL, alias, "Stop voice requested by SND_StopSoundAliasById()");
    SND_StopVoice(v4);
  }
  LOBYTE(v3) = 1;
LABEL_16:
  ScopedCriticalSection::~ScopedCriticalSection(&v11);
  return v3;
}

/*
==============
SND_StopSoundAliasOnEnt
==============
*/
void SND_StopSoundAliasOnEnt(unsigned __int64 sndEnt, const char *aliasName)
{
  SND_StopSoundsInternal(sndEnt, aliasName, 0xFFFFFFFF);
}

/*
==============
SND_StopSoundChannelOnEnt
==============
*/
void SND_StopSoundChannelOnEnt(unsigned __int64 sndEnt, unsigned int channelNum)
{
  __int64 v4; 

  if ( channelNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4887, ASSERT_TYPE_ASSERT, "(channelNum != (0xFFFFFFFF))", (const char *)&queryFormat, "channelNum != SND_ENTCHANNEL_NONE") )
    __debugbreak();
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4888, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  if ( channelNum >= g_snd.globals->entchannelCount )
  {
    LODWORD(v4) = channelNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4889, ASSERT_TYPE_ASSERT, "(unsigned)( channelNum ) < (unsigned)( g_snd.globals->entchannelCount )", "channelNum doesn't index g_snd.globals->entchannelCount\n\t%i not in [0, %i)", v4, g_snd.globals->entchannelCount) )
      __debugbreak();
  }
  SND_StopSoundsInternal(sndEnt, NULL, channelNum);
}

/*
==============
SND_StopSounds
==============
*/
void SND_StopSounds(snd_stopsounds_arg_t which)
{
  char v1; 
  __int64 i; 
  SndVirtualLoop *virtualLoops; 
  int v4; 
  bool *voiceAlloc; 
  const SndAlias **p_alias; 
  int j; 
  int k; 
  int m; 
  int n; 
  __int64 v11; 

  v1 = which;
  if ( !g_snd.driverInitialized )
    return;
  for ( i = 0i64; Sys_InCriticalSection(CRITSECT_SOUND_UPDATE); i = (unsigned int)(i + 1) )
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_WaitWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK);
  if ( (int)i > 0 )
  {
    do
    {
      Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
      --i;
    }
    while ( i );
  }
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "wait_workers");
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
  Sys_ProfEndNamedEvent();
  g_snd.nextVirtualLoopHandle = 0;
  virtualLoops = g_snd.virtualLoops;
  do
  {
    virtualLoops->handle = -1;
    ++virtualLoops;
  }
  while ( (__int64)virtualLoops < (__int64)&g_snd.nextVirtualLoopHandle );
  SND_DeferredPlaybackInit();
  v4 = 0;
  voiceAlloc = sdGlob.voiceAlloc;
  p_alias = &g_snd.voices[0].alias;
  do
  {
    if ( (unsigned int)v4 > 0x62 )
    {
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v11) )
        __debugbreak();
    }
    if ( *voiceAlloc )
    {
      if ( (unsigned int)(v4 - 80) > 0xD )
      {
        if ( (v1 & 8) != 0 )
          goto LABEL_21;
LABEL_20:
        SND_DebugAliasPrint(*p_alias != NULL, *p_alias, "Stop voice requested by SND_StopSounds()");
        SND_StopVoice(v4);
        goto LABEL_21;
      }
      if ( ((v1 & 2) == 0 || (unsigned int)(SND_GetEntChannelSubmixBus((unsigned __int8)((*p_alias)->flags >> 10)) - 12) > 1) && ((v1 & 4) == 0 || (unsigned int)(v4 - 80) > 3) )
        goto LABEL_20;
    }
LABEL_21:
    ++v4;
    ++voiceAlloc;
    p_alias += 246;
  }
  while ( v4 < 99 );
  if ( (v1 & 1) == 0 )
    SND_ClearReverbs();
  if ( (v1 & 0x10) == 0 )
  {
    for ( j = 1; j < 4; ++j )
      SND_DeactivateChannelVolumes(j, 0);
  }
  for ( k = 0; k < 256; ++k )
  {
    for ( m = 0; m < 2; ++m )
    {
      for ( n = 0; n < 2; ++n )
        SND_DisableEq(k, m, n);
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_StopSoundsInternal
==============
*/
void SND_StopSoundsInternal(unsigned __int64 sndEnt, const char *aliasName, const unsigned int entChannel)
{
  int v6; 
  bool *voiceAlloc; 
  const char ***p_alias; 
  unsigned int *i; 
  const char **v10; 
  int v11; 
  const char *v12; 
  const SndAlias *v13; 
  bool v14; 
  __int64 v15; 

  if ( g_snd.driverInitialized )
  {
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    v6 = 0;
    voiceAlloc = sdGlob.voiceAlloc;
    p_alias = (const char ***)&g_snd.voices[0].alias;
    for ( i = g_snd.chaninfoEntchannel; ; ++i )
    {
      if ( *(p_alias - 12) != (const char **)sndEnt || entChannel != -1 && *i != entChannel )
        goto LABEL_16;
      if ( (unsigned int)v6 > 0x62 )
      {
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v15) )
          __debugbreak();
      }
      if ( !*voiceAlloc )
        goto LABEL_16;
      if ( aliasName )
      {
        if ( !*p_alias || I_stricmp(**p_alias, aliasName) )
          goto LABEL_16;
        v10 = *p_alias;
        v11 = I_stricmp(**p_alias, aliasName);
        v12 = "stopped on entity by name";
        v13 = (const SndAlias *)v10;
        v14 = v11 == 0;
      }
      else
      {
        v13 = (const SndAlias *)*p_alias;
        v12 = "stopped all on entity";
        v14 = *p_alias != NULL;
      }
      SND_DebugAliasPrint(v14, v13, v12);
      SND_StopVoice(v6);
LABEL_16:
      ++v6;
      p_alias += 246;
      ++voiceAlloc;
      if ( v6 >= 99 )
      {
        Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
        return;
      }
    }
  }
}

/*
==============
SND_StopSoundsOnEnt
==============
*/
void SND_StopSoundsOnEnt(unsigned __int64 sndEnt)
{
  int v2; 
  bool *voiceAlloc; 
  const SndAlias **p_alias; 
  __int64 v5; 

  if ( g_snd.driverInitialized )
  {
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    v2 = 0;
    voiceAlloc = sdGlob.voiceAlloc;
    p_alias = &g_snd.voices[0].alias;
    do
    {
      if ( *(p_alias - 12) == (const SndAlias *)sndEnt )
      {
        if ( (unsigned int)v2 > 0x62 )
        {
          LODWORD(v5) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v5) )
            __debugbreak();
        }
        if ( *voiceAlloc )
        {
          SND_DebugAliasPrint(*p_alias != NULL, *p_alias, "stopped all on entity");
          SND_StopVoice(v2);
        }
      }
      ++v2;
      p_alias += 246;
      ++voiceAlloc;
    }
    while ( v2 < 99 );
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  }
}

/*
==============
SND_StopVirtualLoopSound
==============
*/
void SND_StopVirtualLoopSound(int handle)
{
  int v2; 
  SndVirtualLoop *virtualLoops; 
  ScopedCriticalSection v4; 

  ScopedCriticalSection::ScopedCriticalSection(&v4, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v2 = 0;
  virtualLoops = g_snd.virtualLoops;
  while ( virtualLoops->handle != handle )
  {
    ++v2;
    if ( (__int64)++virtualLoops >= (__int64)&g_snd.nextVirtualLoopHandle )
    {
      ScopedCriticalSection::~ScopedCriticalSection(&v4);
      return;
    }
  }
  g_snd.virtualLoops[v2].handle = -1;
  ScopedCriticalSection::~ScopedCriticalSection(&v4);
}

/*
==============
SND_StopVoice
==============
*/
void SND_StopVoice(int index)
{
  __int64 v1; 
  volatile signed __int32 *v2; 

  v1 = index;
  v2 = &g_snd.voiceBusyUpdating[index];
  do
  {
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.voiceBusyUpdating[v1]) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(v2, 1, 0) == 1 );
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  SND_StopVoiceWithoutLock(v1);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.voiceBusyUpdating[v1]) )
    __debugbreak();
  _InterlockedExchange(v2, 0);
}

/*
==============
SND_StopVoiceAndClearTracking
==============
*/
void SND_StopVoiceAndClearTracking(int index, SndAliasGroupTracking *inOutTracking)
{
  __int64 v2; 
  int v3; 
  int numVoices; 
  int *voiceIndices; 

  v2 = index;
  v3 = 0;
  numVoices = inOutTracking->numVoices;
  if ( numVoices > 0 )
  {
    voiceIndices = inOutTracking->voiceIndices;
    while ( *voiceIndices != (_DWORD)v2 )
    {
      ++v3;
      ++voiceIndices;
      if ( v3 >= numVoices )
        goto LABEL_7;
    }
    SND_DebugAliasPrint(1, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * v2 - 48680], "stopped a secondary alias that was part of our tracked group");
    inOutTracking->voiceIndices[v3] = *(&inOutTracking->secondaryGroupId + inOutTracking->numVoices);
    inOutTracking->voicePlaybackIds[v3] = inOutTracking->voiceIndices[inOutTracking->numVoices-- + 19];
  }
LABEL_7:
  SND_StopVoice(v2);
}

/*
==============
SND_StopVoiceById
==============
*/
void SND_StopVoiceById(unsigned int id)
{
  int VoiceIndexForId; 
  int v3; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  VoiceIndexForId = SND_GetVoiceIndexForId(id);
  v3 = VoiceIndexForId;
  if ( VoiceIndexForId != -1 )
  {
    SND_DebugAliasPrint(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * VoiceIndexForId - 48680] != 0i64, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * VoiceIndexForId - 48680], "Stop voice requested by SND_StopVoiceById()");
    SND_StopVoice(v3);
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_StopVoiceWithoutLock
==============
*/
void SND_StopVoiceWithoutLock(int index)
{
  __int64 v1; 
  SndVoice *v2; 
  __int64 v3; 

  v1 = index;
  if ( !Sys_InCriticalSection(CRITSECT_SOUND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1068, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_SOUND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_SOUND_UPDATE )") )
    __debugbreak();
  if ( (unsigned int)v1 > 0x62 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v3) )
      __debugbreak();
  }
  if ( sdGlob.voiceAlloc[v1] )
  {
    v2 = &g_snd.voices[v1];
    if ( v2->alias )
    {
      v2->occlusionWaitId = 0;
      if ( v2->soundDoneSoundString )
      {
        if ( !v2->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 3373, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
          __debugbreak();
        SND_QueueSoundDoneNotify(v2->sndEnt & 0x1FFFFFFFFi64, v2->soundDoneSoundString);
      }
      SND_SubmixStopFromVoice(&g_snd.voices[v1]);
      v2->paused = 0;
      v2->soundFileInfo.loadingState = SFLS_UNLOADED;
      v2->alias = NULL;
      v2->startTimeMSec = 0;
      v2->adsrIndex = -1;
      *(_QWORD *)v2->dopplerEffectLastPos.v = 0i64;
      v2->dopplerEffectLastPos.v[2] = 0.0;
      *(_QWORD *)&v2->playbackId = 0i64;
      v2->occlusionAmount = 0.0;
      v2->waitingForDoppler = 0;
      v2->ignorePause = 0;
      v2->dopplerEffectPitch = 1.0;
      v2->autoSimId = -1;
    }
    SND_RemoveVoice(g_snd.chaninfoEntchannel[v1]);
    g_snd.chaninfoEntchannel[v1] = -1;
    SD_StopVoice(v1);
    sdGlob.voiceAlloc[v1] = 0;
  }
}

/*
==============
SND_SyncAmbientTracks
==============
*/
int SND_SyncAmbientTracks(int index)
{
  int result; 

  result = SND_SyncAmbientTracks_Internal(index, 0, 1);
  if ( result == index )
    return SND_SyncAmbientTracks_Internal(index, 2, 3);
  return result;
}

/*
==============
SND_SyncAmbientTracks_Internal
==============
*/
__int64 SND_SyncAmbientTracks_Internal(int index, int ambientPrimary, int ambientSecondary)
{
  unsigned int v3; 
  __int64 v5; 
  const SndAlias **p_alias; 

  v3 = index;
  if ( index != ambientSecondary + 80 )
    return (unsigned int)index;
  v5 = ambientPrimary + 80i64;
  if ( g_snd.voices[v5].soundFileInfo.loadingState == SFLS_UNLOADED )
    return (unsigned int)index;
  p_alias = &g_snd.voices[index].alias;
  if ( !*p_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 13016, ASSERT_TYPE_ASSERT, "(g_snd.voices[index].alias)", (const char *)&queryFormat, "g_snd.voices[index].alias") )
    __debugbreak();
  if ( !g_snd.voices[v5].alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 13017, ASSERT_TYPE_ASSERT, "(g_snd.voices[((0 + 32) + 48) + ambientPrimary].alias)", (const char *)&queryFormat, "g_snd.voices[SND_FIRST_STREAM_VOICE + ambientPrimary].alias") )
    __debugbreak();
  if ( (*p_alias)->startDelay == g_snd.voices[v5].alias->startDelay )
    return (unsigned int)(ambientPrimary + 80);
  return v3;
}

/*
==============
SND_UnpauseVoice
==============
*/
void SND_UnpauseVoice(int index)
{
  __int64 v1; 
  __int64 v2; 

  v1 = index;
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1152, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( (unsigned int)v1 > 0x62 )
  {
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1153, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v2) )
      __debugbreak();
  }
  LOBYTE(g_snd.chaninfoUnweightedPriority[492 * v1 - 48664]) = 0;
  SD_UpdateVoice(v1, 0);
}

/*
==============
SND_UnpauseVoiceThatWasStartedPaused
==============
*/
void SND_UnpauseVoiceThatWasStartedPaused(int index)
{
  __int64 v1; 

  v1 = index;
  if ( (unsigned int)index > 0x62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", index) )
    __debugbreak();
  if ( sdGlob.voiceAlloc[v1] && (!g_snd.paused || !SND_IsPausable((unsigned __int8)(*(int *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v1 - 48680] + 112i64) >> 10))) )
    SND_UnpauseVoice(v1);
}

/*
==============
SND_Update
==============
*/
void SND_Update()
{
  int v1; 
  int v2; 
  unsigned __int64 v3; 
  char paused; 
  bool IsLocalServerPaused; 
  bool *voiceAlloc; 
  bool v7; 
  __int128 v8; 
  TimeLerp *globalContextLerp; 
  __int128 v13; 
  unsigned __int8 v14; 
  __int128 v16; 
  __int128 masterPercentage_low; 
  int v20; 
  bool *v21; 
  float *p_masterSlaveLerp; 
  __int128 v25; 
  __int128 v28; 
  int v29; 
  bool *p_paused; 
  const dvar_t *v31; 
  __int64 v32; 
  int frametime; 
  ScopedCriticalSection v34; 
  __int64 v35; 
  bool data; 
  float globalMasterPriorityID; 
  float globalMasterPriorityVal; 
  float globalMasterPercentage; 

  v35 = -2i64;
  if ( !cls.soundStarted || !g_snd.driverInitialized )
    return;
  v1 = Sys_Milliseconds();
  v2 = v1 - g_snd.time;
  frametime = v1 - g_snd.time;
  g_snd.time = v1;
  v3 = Sys_Microseconds();
  *(_QWORD *)&v34._s = v3;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_Update");
  ++g_snd.frame;
  SND_UpdateDebug();
  Com_DevhostUpdate(24);
  if ( SND_Active() && Com_DevhostSystemActive(3) )
    SND_DevhostFrameBegin(g_snd.time, g_snd.frame, g_snd.paused);
  SD_PreUpdate(v2);
  paused = g_snd.paused;
  data = g_snd.paused;
  if ( !g_snd.hasPendingRestore || Sys_IsMainThread() )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
    {
      if ( !CL_Pause_IsGamePaused() )
      {
LABEL_13:
        if ( !g_snd.uiPaused )
        {
          paused = 0;
LABEL_16:
          data = paused;
          goto LABEL_17;
        }
LABEL_15:
        paused = 1;
        goto LABEL_16;
      }
      IsLocalServerPaused = Com_MP_GetIsLocalServerPaused();
    }
    else
    {
      IsLocalServerPaused = CL_Pause_IsGamePaused();
    }
    if ( IsLocalServerPaused )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_17:
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "wait_workers");
  if ( !s_soundPhysicsQueryBlock )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
  Sys_ProfEndNamedEvent();
  voiceAlloc = sdGlob.voiceAlloc;
  if ( paused )
  {
    SND_UpdateMasterVolumes(0);
  }
  else
  {
    v7 = CL_GetLocalClientActiveCount() > 1;
    SND_ProcessPendingRestore();
    SND_UpdateMasterVolumes(v2);
    v8 = 0i64;
    *(float *)&v8 = (float)v2;
    globalContextLerp = g_snd.globalContextLerp;
    do
    {
      *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v8 + 1);
      *(double *)&_XMM0 = I_fclamp((float)(*(float *)&v8 * globalContextLerp->rateMS) + globalContextLerp->current, 0.0, 1.0);
      globalContextLerp->current = *(float *)&_XMM0;
      ++globalContextLerp;
    }
    while ( (__int64)globalContextLerp < (__int64)&g_snd.globalContextLerp[64] );
    *(double *)&_XMM0 = Com_GetTimescaleForSnd();
    __asm
    {
      vcmpless xmm1, xmm0, xmm8
      vblendvps xmm7, xmm0, xmm9, xmm1
    }
    globalMasterPriorityID = *(float *)&_XMM7;
    if ( *(float *)&_XMM7 != g_snd.timescale )
    {
      if ( *(float *)&_XMM7 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8000, ASSERT_TYPE_ASSERT, "(timescale)", (const char *)&queryFormat, "timescale") )
        __debugbreak();
      if ( g_snd.timescale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 8001, ASSERT_TYPE_ASSERT, "(g_snd.timescale)", (const char *)&queryFormat, "g_snd.timescale") )
        __debugbreak();
      g_snd.timescale = *(float *)&_XMM7;
    }
    SND_SubmixUpdate(*(float *)&v8 * 0.001, v7);
    LOBYTE(globalMasterPriorityID) = 0;
    globalMasterPriorityVal = 0.0;
    globalMasterPercentage = 0.0;
    SND_UpdatePerChannelMasterSettings(0, 99, (unsigned __int8 *)&globalMasterPriorityID, &globalMasterPriorityVal, &globalMasterPercentage);
    *(float *)&v8 = *(float *)&v8 * 0.0099999998;
    v13 = v8;
    v14 = LOBYTE(globalMasterPriorityID);
    g_snd.masterPriorityID = LOBYTE(globalMasterPriorityID);
    g_snd.masterPriorityVal = globalMasterPriorityVal;
    if ( g_snd.masterPercentage <= globalMasterPercentage )
    {
      masterPercentage_low = LODWORD(g_snd.masterPercentage);
      *(float *)&masterPercentage_low = g_snd.masterPercentage + *(float *)&v13;
      _XMM0 = masterPercentage_low;
      __asm { vminss  xmm1, xmm0, xmm2 }
    }
    else
    {
      v16 = LODWORD(g_snd.masterPercentage);
      *(float *)&v16 = g_snd.masterPercentage - *(float *)&v13;
      _XMM0 = v16;
      __asm { vmaxss  xmm1, xmm0, xmm2 }
    }
    g_snd.masterPercentage = *(float *)&_XMM1;
    v20 = 0;
    v21 = sdGlob.voiceAlloc;
    p_masterSlaveLerp = &g_snd.voices[0].masterSlaveLerp;
    __asm { vxorpd  xmm10, xmm10, xmm10 }
    do
    {
      if ( (unsigned int)v20 > 0x62 )
      {
        LODWORD(v32) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v32) )
          __debugbreak();
      }
      if ( *v21 )
      {
        if ( p_masterSlaveLerp == (float *)376 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15933, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
          __debugbreak();
        if ( v14 && v14 > *(_BYTE *)(*((_QWORD *)p_masterSlaveLerp - 33) + 209i64) )
        {
          v25 = v13;
          *(float *)&v25 = *(float *)&v13 + *p_masterSlaveLerp;
          _XMM0 = v25;
          __asm { vminss  xmm1, xmm0, xmm9 }
        }
        else
        {
          v28 = *(unsigned int *)p_masterSlaveLerp;
          *(float *)&v28 = *p_masterSlaveLerp - *(float *)&v13;
          _XMM1 = v28;
          __asm { vmaxss  xmm1, xmm1, xmm8 }
        }
        *p_masterSlaveLerp = *(float *)&_XMM1;
        if ( (*(float *)&_XMM1 < 0.0 || *(float *)&_XMM1 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16086, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( voice->masterSlaveLerp ) && ( voice->masterSlaveLerp ) <= ( 1.0f )", "voice->masterSlaveLerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM1, *(double *)&_XMM10, DOUBLE_1_0) )
          __debugbreak();
      }
      ++v20;
      ++v21;
      p_masterSlaveLerp += 492;
    }
    while ( v20 < 99 );
    SND_MusicUpdate();
    voiceAlloc = sdGlob.voiceAlloc;
    paused = data;
    v2 = frametime;
    LODWORD(v3) = v34._s;
  }
  if ( paused != g_snd.paused )
  {
    if ( paused )
    {
      SND_PauseSounds();
      if ( paused != g_snd.paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 9206, ASSERT_TYPE_ASSERT, "(paused == g_snd.paused)", (const char *)&queryFormat, "paused == g_snd.paused") )
        __debugbreak();
    }
    else if ( g_snd.paused )
    {
      if ( g_snd.driverInitialized )
      {
        v29 = 0;
        p_paused = &g_snd.voices[0].paused;
        do
        {
          if ( (unsigned int)v29 > 0x62 )
          {
            LODWORD(v32) = v29;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v32) )
              __debugbreak();
          }
          if ( *voiceAlloc && *p_paused )
            SND_UnpauseVoice(v29);
          ++v29;
          ++voiceAlloc;
          p_paused += 1968;
        }
        while ( v29 < 99 );
        LODWORD(v3) = v34._s;
      }
      g_snd.paused = 0;
      g_snd.pausetime = 0;
    }
  }
  SND_UpdateAllVoices(v2);
  SND_ProcessCLQueue();
  SD_PostUpdate(v2);
  if ( SND_Active() && Com_DevhostSystemActive(3) )
  {
    if ( !g_snd.bankUpdateStatus )
      SND_BankDevhost();
    if ( !s_soundPhysicsQueryBlock )
      Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
    SND_DevhostFrameEnd();
  }
  v31 = DCONST_DVARBOOL_snd_enable_capture_mode;
  if ( !DCONST_DVARBOOL_snd_enable_capture_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_enable_capture_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.enabled && g_snd.driverInitialized )
  {
    ScopedCriticalSection::ScopedCriticalSection(&v34, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( sdGlob.voiceAlloc[80] )
    {
      SND_DebugAliasPrint(g_snd.voices[80].alias != NULL, g_snd.voices[80].alias, "Stop voice requested by SND_StopBackground()");
      SND_StopVoice(80);
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v34);
    ScopedCriticalSection::ScopedCriticalSection(&v34, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( sdGlob.voiceAlloc[81] )
    {
      SND_DebugAliasPrint(g_snd.voices[81].alias != NULL, g_snd.voices[81].alias, "Stop voice requested by SND_StopBackground()");
      SND_StopVoice(81);
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v34);
    ScopedCriticalSection::ScopedCriticalSection(&v34, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( sdGlob.voiceAlloc[82] )
    {
      SND_DebugAliasPrint(g_snd.voices[82].alias != NULL, g_snd.voices[82].alias, "Stop voice requested by SND_StopBackground()");
      SND_StopVoice(82);
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v34);
    ScopedCriticalSection::ScopedCriticalSection(&v34, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    if ( sdGlob.voiceAlloc[83] )
    {
      SND_DebugAliasPrint(g_snd.voices[83].alias != NULL, g_snd.voices[83].alias, "Stop voice requested by SND_StopBackground()");
      SND_StopVoice(83);
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v34);
  }
  if ( !CL_AnyLocalClientStateActive() && !Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_DEFERRED_PLAYBACK) )
    Sys_AddWorkerCmd(WRKCMD_SOUND_DEFERRED_PLAYBACK, &data);
  g_snd.clientFrameUsec = Sys_Microseconds() - v3;
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_UpdateAllVoices
==============
*/
void SND_UpdateAllVoices(int frametime)
{
  volatile int *voiceBusyUpdating; 
  volatile unsigned int *p_occlusionWaitId; 
  int i; 
  int data[4]; 

  voiceBusyUpdating = g_snd.voiceBusyUpdating;
  p_occlusionWaitId = &g_snd.voices[0].occlusionWaitId;
  for ( i = 0; i < 99; ++i )
  {
    if ( ((unsigned __int8)voiceBusyUpdating & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)voiceBusyUpdating) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(voiceBusyUpdating, 1, 0) )
    {
      if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1594, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
        __debugbreak();
      if ( *((_DWORD *)p_occlusionWaitId - 96) )
      {
        Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_UpdateVoice");
        if ( !*((_BYTE *)p_occlusionWaitId - 208) && !*p_occlusionWaitId )
        {
          if ( SD_IsVoiceDone(i) )
          {
            SND_DebugAliasPrint(*((_QWORD *)p_occlusionWaitId - 34) != 0i64, *((const SndAlias **)p_occlusionWaitId - 34), "Stopped voice because it's done");
            SND_StopVoiceWithoutLock(i);
          }
          else
          {
            data[0] = *((_DWORD *)p_occlusionWaitId - 89);
            data[1] = i;
            data[2] = frametime;
            Sys_InterlockedCompareExchange(voiceBusyUpdating, 0, 1);
            if ( Sys_TryAddWorkerCmd(WRKCMD_SOUND_VOICE_UPDATE, data) )
            {
              Sys_ProfEndNamedEvent();
              goto LABEL_20;
            }
            do
            {
              if ( ((unsigned __int8)voiceBusyUpdating & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)voiceBusyUpdating) )
                __debugbreak();
            }
            while ( _InterlockedCompareExchange(voiceBusyUpdating, 1, 0) == 1 );
            if ( data[0] == *((_DWORD *)p_occlusionWaitId - 89) )
              SND_UpdateAndStartVoice(i, frametime);
          }
        }
        Sys_ProfEndNamedEvent();
      }
      if ( ((unsigned __int8)voiceBusyUpdating & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)voiceBusyUpdating) )
        __debugbreak();
      _InterlockedCompareExchange(voiceBusyUpdating, 0, 1);
    }
LABEL_20:
    ++voiceBusyUpdating;
    p_occlusionWaitId += 492;
  }
}

/*
==============
SND_UpdateAndStartVoice
==============
*/
void SND_UpdateAndStartVoice(int voiceIndex, int frametime)
{
  __int64 v2; 
  unsigned __int64 v3; 
  __int64 v5; 
  SndVoice *v6; 
  __int64 v7; 
  float v8; 
  float v10; 
  float v11; 
  __int128 v13; 
  float v15; 
  __int128 v17; 
  float v18; 
  float v19; 
  double v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  __int64 v24; 

  v2 = voiceIndex;
  v3 = 1968i64 * voiceIndex;
  v5 = (unsigned int)voiceIndex;
  v6 = &g_snd.voices[v3 / 0x7B0];
  if ( !*(_QWORD *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48680] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1423, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  if ( SD_StreamReady(v5) && (*(_DWORD *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48680] + 180i64) == g_snd.defaultHash || !SND_IsEntChannel3D((unsigned __int8)(*(int *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v5 - 48680] + 112i64) >> 10)) || SLODWORD(g_snd.chaninfoUnweightedPriority[v3 / 4 - 48611]) <= 0) )
  {
    if ( v6->soundFileInfo.loadingState == SFLS_LOADING )
    {
      v7 = *(_QWORD *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48680];
      frametime = 0;
      v6->soundFileInfo.loadingState = SFLS_LOADED;
      if ( *(_QWORD *)(v7 + 8) )
      {
        if ( !LOBYTE(g_snd.chaninfoUnweightedPriority[v3 / 4 - 48699]) )
          g_snd.voices[v3 / 0x7B0].triggerSubtitle = 1;
      }
    }
    SND_SetUpVoiceParams((SndVoiceParams *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48610], *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48680], *(_QWORD *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48704], SLODWORD(g_snd.chaninfoUnweightedPriority[v3 / 4 - 48661]));
    SND_CalculateOcclusionValues(v5, frametime);
    v8 = (float)(g_snd.chaninfoUnweightedPriority[v3 / 4 - 48687] * g_snd.chaninfoUnweightedPriority[v3 / 4 - 48675]) * g_snd.chaninfoUnweightedPriority[v3 / 4 - 48646];
    SND_UpdateParameter((snd_param_info_t *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48686], frametime, 0);
    *(float *)&sdGlob.currentReverbId[65 * v2 - 6433] = (float)((float)(v8 * g_snd.chaninfoUnweightedPriority[v3 / 4 - 48686]) * g_snd.chaninfoUnweightedPriority[v3 / 4 - 48592]) * g_snd.chaninfoUnweightedPriority[v3 / 4 - 48590];
    if ( (unsigned int)v5 >= 0x63 )
    {
      LODWORD(v24) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 13283, ASSERT_TYPE_ASSERT, "(unsigned)( voiceIndex ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "voiceIndex doesn't index SND_MAX_VOICES\n\t%i not in [0, %i)", v24, 99) )
        __debugbreak();
    }
    *(float *)&_XMM2 = g_snd.chaninfoUnweightedPriority[v3 / 4 - 48616];
    v10 = g_snd.chaninfoUnweightedPriority[v3 / 4 - 48615];
    v11 = (float)frametime;
    if ( *(float *)&_XMM2 >= v10 )
    {
      *(float *)&_XMM3 = g_snd.chaninfoUnweightedPriority[v3 / 4 - 48616];
    }
    else
    {
      v13 = LODWORD(g_snd.chaninfoUnweightedPriority[v3 / 4 - 48615]);
      *(float *)&v13 = v10 - (float)((float)frametime * 0.00125);
      _XMM1 = v13;
      __asm { vmaxss  xmm3, xmm1, xmm2 }
    }
    g_snd.chaninfoUnweightedPriority[v3 / 4 - 48615] = *(float *)&_XMM3;
    if ( *(_BYTE *)(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48680] + 209i64) )
    {
      v15 = g_snd.chaninfoUnweightedPriority[v3 / 4 - 48613];
      if ( *(float *)&_XMM2 < v15 )
      {
        v17 = LODWORD(g_snd.chaninfoUnweightedPriority[v3 / 4 - 48613]);
        *(float *)&v17 = v15 - (float)(v11 * 0.00125);
        _XMM1 = v17;
        __asm { vmaxss  xmm2, xmm1, xmm2 }
      }
      g_snd.chaninfoUnweightedPriority[v3 / 4 - 48613] = *(float *)&_XMM2;
    }
    v18 = FLOAT_1_0;
    v19 = SND_CalcVoiceVolume(frametime, &g_snd.voices[v3 / 0x7B0]);
    v20 = I_fclamp(v19, 0.0, 1.0);
    v21 = *(_QWORD *)&g_snd.chaninfoUnweightedPriority[v3 / 4 - 48680];
    v22 = g_snd.chaninfoUnweightedPriority[v3 / 4 - 48614];
    g_snd.chaninfoUnweightedPriority[v3 / 4 - 48697] = *(float *)&v20 * g_snd.chaninfoUnweightedPriority[v3 / 4 - 48613];
    g_snd.chaninfoUnweightedPriority[v3 / 4 - 48695] = v19;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15956, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
      __debugbreak();
    if ( v22 > 0.0 )
    {
      v23 = (float)((float)((float)(1.0 - g_snd.masterPercentage) * *(float *)(v21 + 216)) * v22) + (float)(1.0 - v22);
      I_fclamp(v23, 0.0, 100.0);
      v18 = v23;
    }
    SND_ApplySpeakerParams(v5, frametime, v18 * v19);
    SND_RecalcChaninfoPriority(v5);
    SND_SubmixSetOnVoiceStart(&g_snd.voices[v3 / 0x7B0], v11 * 0.001);
    if ( SD_VoiceStarted(v5) )
      SD_UpdateVoice(v5, frametime);
    else
      SD_StartVoice(v5);
  }
}

/*
==============
SND_UpdateDebug
==============
*/
void SND_UpdateDebug()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  const dvar_t *v3; 
  const char *string; 
  int v5; 
  const char ***p_aliasList; 
  int handle; 
  int v8; 
  SndVirtualLoop *virtualLoops; 
  unsigned int v10; 
  const char ***p_alias; 
  const dvar_t *v12; 
  const char *v13; 
  const dvar_t *v14; 
  float value; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  SndAliasList *Alias; 
  const SndAliasList *v21; 
  char flags; 
  unsigned __int64 SndEntHandle; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const char *v26; 
  const char *v27; 
  unsigned int v28; 
  unsigned int v29; 
  ScopedCriticalSection v30; 
  snd_listener outListener; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 

  v3 = DVARSTR_snd_stop_alias;
  v34 = v0;
  if ( !DVARSTR_snd_stop_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_stop_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  string = v3->current.string;
  if ( string && *string )
  {
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    v5 = 0;
    p_aliasList = (const char ***)&g_snd.virtualLoops[0].aliasList;
    while ( *((_DWORD *)p_aliasList - 2) == -1 || !strstr_0(**p_aliasList, string) )
    {
      ++v5;
      p_aliasList += 6;
      if ( (__int64)p_aliasList >= (__int64)&g_snd.globalContextsFrom[1] )
        goto LABEL_17;
    }
    handle = g_snd.virtualLoops[v5].handle;
    ScopedCriticalSection::ScopedCriticalSection(&v30, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
    v8 = 0;
    virtualLoops = g_snd.virtualLoops;
    while ( virtualLoops->handle != handle )
    {
      ++v8;
      if ( (__int64)++virtualLoops >= (__int64)&g_snd.nextVirtualLoopHandle )
        goto LABEL_16;
    }
    g_snd.virtualLoops[v8].handle = -1;
LABEL_16:
    ScopedCriticalSection::~ScopedCriticalSection(&v30);
LABEL_17:
    v10 = 0;
    p_alias = (const char ***)&g_snd.voices[0].alias;
    do
    {
      if ( sdGlob.voiceAlloc[v10] && strstr_0(**p_alias, string) )
        SND_StopVoice(v10);
      ++v10;
      p_alias += 246;
    }
    while ( v10 < 0x63 );
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    Dvar_SetString_Internal(DVARSTR_snd_stop_alias, (const char *)&queryFormat.fmt + 3);
  }
  v12 = DVARSTR_snd_start_alias;
  if ( !DVARSTR_snd_start_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_start_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.string;
  v14 = DCONST_DVARFLT_snd_start_alias_distance;
  if ( !DCONST_DVARFLT_snd_start_alias_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_start_alias_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  value = v14->current.value;
  if ( v13 && *v13 )
  {
    v33 = v1;
    v32 = v2;
    SND_GetListener(LOCAL_CLIENT_0, &outListener);
    v16 = (float)(value * outListener.orient.axis.m[0].v[0]) + outListener.orient.origin.v[0];
    v17 = value * outListener.orient.axis.m[0].v[1];
    v18 = (float)(value * outListener.orient.axis.m[0].v[2]) + outListener.orient.origin.v[2];
    v19 = v17 + outListener.orient.origin.v[1];
    *(float *)&v30._next = v18;
    *(float *)&v30._s = v16;
    *(float *)&v30._hasOwnership = v17 + outListener.orient.origin.v[1];
    Alias = SND_FindAlias(v13);
    v21 = Alias;
    if ( Alias )
    {
      flags = Alias->head->flags;
      SndEntHandle = CG_GenerateSndEntHandle(LOCAL_CLIENT_0, 2046);
      if ( (flags & 1) != 0 )
      {
        SND_PlayVirtualLoopSoundInternal(v21, SndEntHandle, (const vec3_t *)&v30, 1.0, 1.0, 0);
      }
      else
      {
        LODWORD(outListener.orient.axis.m[0].v[0]) = 1;
        outListener.inverse.axis.m[2].v[1] = FLOAT_N1_0;
        outListener.inverse.axis.m[2].v[2] = FLOAT_N1_0;
        *(_OWORD *)&outListener.orient.axis.row0.y = _xmm;
        outListener.velocity = 0.0;
        outListener.orient.axis.m[2].v[1] = v16;
        outListener.orient.axis.m[2].v[2] = v19;
        outListener.inverse.origin.v[0] = v18;
        outListener.inverse.axis.m[0].v[0] = 0.0;
        outListener.inverse.axis.m[1].v[2] = 0.0;
        LOBYTE(outListener.inverse.axis.row2.v[0]) = 0;
        outListener.velocityVect.v[0] = 0.0;
        *(_QWORD *)&outListener.velocityVect.y = -1i64;
        outListener.playerStateClientNum = -1;
        outListener.localClientNum = LOCAL_CLIENT_0;
        *(_WORD *)&outListener.active = 0;
        *(_QWORD *)outListener.orient.origin.v = v21;
        outListener.orient.origin.v[2] = 0.0;
        *(_QWORD *)&outListener.orient.axis.row1.z = SndEntHandle;
        *(_QWORD *)&outListener.inverse.origin.y = 0xFFFFFFFF00000000ui64;
        *(_OWORD *)&outListener.inverse.axis.row0.y = 0xFFFFFFFF00000001ui64;
        SND_PlaySoundAliasFromParams((const SndPlayParams *)&outListener, 0);
      }
    }
    Dvar_SetString_Internal(DVARSTR_snd_start_alias, (const char *)&queryFormat.fmt + 3);
  }
  v24 = DCONST_DVARSTR_snd_debug_context_type;
  if ( !DCONST_DVARSTR_snd_debug_context_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debug_context_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = DCONST_DVARSTR_snd_debug_context_value;
  v26 = v24->current.string;
  if ( !DCONST_DVARSTR_snd_debug_context_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debug_context_value") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v26 )
  {
    if ( *v26 )
    {
      v27 = v25->current.string;
      if ( v27 )
      {
        if ( *v27 )
        {
          v28 = SND_HashName(v27);
          v29 = SND_HashName(v26);
          SND_SetContext(v29, v28, 0.0);
        }
      }
    }
  }
}

/*
==============
SND_UpdateDelayedWeaponSoundQueue
==============
*/
void SND_UpdateDelayedWeaponSoundQueue(int gameFrameDelta, const int controllerIndex)
{
  const dvar_t *v2; 
  int value; 
  int *p_timeStampMS; 
  unsigned int i; 
  float *v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  int v12; 
  const SndAliasList *v13; 
  float v14; 
  float v15; 
  const SndAliasList *v16; 
  float v17; 
  float v18; 
  const SndAliasList *v19; 
  float v20; 
  float v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  const char *HitMarkerAlias; 
  __int64 v26; 
  const char *v27; 
  const char *v28; 
  const SndAliasList *Alias; 
  unsigned __int64 SndEntHandle; 
  unsigned int v31; 
  int VoiceIndexForId; 
  int v33; 
  unsigned int v34; 
  int v35; 
  int v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  SndPlayParams inParams; 

  v2 = DCONST_DVARFLT_snd_autoSim_predictWindowMs;
  if ( !DCONST_DVARFLT_snd_autoSim_predictWindowMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_autoSim_predictWindowMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = (int)v2->current.value;
  p_timeStampMS = &g_snd.delayedWeaponSounds[0].timeStampMS;
  for ( i = 0; i < 0x40; ++i )
  {
    if ( *(p_timeStampMS - 1) )
    {
      *p_timeStampMS -= gameFrameDelta;
      if ( *p_timeStampMS < value )
      {
        SND_FinishPlayingWeaponSound((const SndPlayParams *)(p_timeStampMS + 3), 0, *(const WeaponSFXPackage **)(p_timeStampMS + 35), *((_BYTE *)p_timeStampMS + 4), 0, WEAPON_HAND_DEFAULT);
        *(p_timeStampMS - 1) = 0;
      }
    }
    p_timeStampMS += 38;
  }
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.startOffsetFraction = 0.0;
  inParams.aliasList = NULL;
  v8 = &g_snd.delayedBulletEvents[0].whizInPos.v[2];
  *(_QWORD *)&inParams.aliasId = 0i64;
  inParams.sndEnt = 0i64;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  v9 = 0;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  do
  {
    v10 = *((_DWORD *)v8 - 13);
    if ( !v10 )
      goto LABEL_42;
    v11 = *((_DWORD *)v8 - 5);
    *((_DWORD *)v8 + 9) -= gameFrameDelta;
    v12 = v11 - gameFrameDelta;
    *((_DWORD *)v8 - 5) = v12;
    if ( v10 == 1 )
    {
      if ( v12 > 0 )
        goto LABEL_42;
      inParams.sndEnt = *(_QWORD *)(v8 + 13);
      v13 = *(const SndAliasList **)(v8 - 7);
      if ( v13 )
      {
        v14 = *(v8 - 1);
        inParams.org.v[0] = *(v8 - 2);
        v15 = *v8;
        inParams.aliasList = v13;
        inParams.org.v[2] = v15;
        inParams.org.v[1] = v14;
        SND_PlaySoundAliasFromParams(&inParams, 1);
      }
      v16 = *(const SndAliasList **)(v8 - 11);
      if ( v16 )
      {
        v17 = *(v8 - 1);
        inParams.org.v[0] = *(v8 - 2);
        v18 = *v8;
        inParams.aliasList = v16;
        inParams.org.v[2] = v18;
        inParams.org.v[1] = v17;
        SND_PlaySoundAliasFromParams(&inParams, 1);
      }
      v19 = *(const SndAliasList **)(v8 - 9);
      if ( v19 )
      {
        v20 = v8[2];
        inParams.org.v[0] = v8[1];
        v21 = v8[3];
        inParams.aliasList = v19;
        inParams.org.v[2] = v21;
        inParams.org.v[1] = v20;
        SND_PlaySoundAliasFromParams(&inParams, 1);
      }
      *((_DWORD *)v8 - 13) = 2;
    }
    else if ( v10 != 2 )
    {
      goto LABEL_42;
    }
    if ( *((int *)v8 + 9) <= 0 )
    {
      v22 = *(_QWORD *)(v8 + 15);
      v23 = v22 & 0x1FFFFFFFFi64;
      v24 = (v22 >> 33) & 3;
      if ( v23 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v23, "unsigned", v23) )
        __debugbreak();
      if ( *((_BYTE *)v8 + 68) )
      {
        HitMarkerAlias = GamerProfile_GetHitMarkerAlias(controllerIndex);
        v26 = *((int *)v8 + 18);
        if ( (_DWORD)v26 )
        {
          v27 = s_hitmarkerSuffix[v26];
          v28 = GamerProfile_GetHitMarkerAlias(controllerIndex);
          HitMarkerAlias = j_va("%s%s", v28, v27);
        }
        Alias = SND_FindAlias(HitMarkerAlias);
        if ( Alias )
        {
          SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)v24, v23);
          SND_PlaySurfaceSound_Internal(Alias, 0, *((_DWORD *)v8 + 7), SndEntHandle, 1.0, 1.0, 0, (const vec3_t *)(v8 + 4), 1);
        }
      }
      if ( *(_QWORD *)(v8 + 11) )
      {
        v31 = *((_DWORD *)v8 - 4);
        if ( v31 )
        {
          Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
          VoiceIndexForId = SND_GetVoiceIndexForId(v31);
          v33 = VoiceIndexForId;
          if ( VoiceIndexForId != -1 )
          {
            SND_DebugAliasPrint(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * VoiceIndexForId - 48680] != 0i64, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * VoiceIndexForId - 48680], "Stop voice requested by SND_StopVoiceById()");
            SND_StopVoice(v33);
          }
          Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
        }
        v34 = *((_DWORD *)v8 - 3);
        if ( v34 )
        {
          Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
          v35 = SND_GetVoiceIndexForId(v34);
          v36 = v35;
          if ( v35 != -1 )
          {
            SND_DebugAliasPrint(*(_QWORD *)&g_snd.chaninfoUnweightedPriority[492 * v35 - 48680] != 0i64, *(const SndAlias **)&g_snd.chaninfoUnweightedPriority[492 * v35 - 48680], "Stop voice requested by SND_StopVoiceById()");
            SND_StopVoice(v36);
          }
          Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
        }
        if ( *(_QWORD *)(v8 + 11) )
        {
          v37 = *((_DWORD *)v8 + 8);
          v38 = CG_GenerateSndEntHandle((const LocalClientNum_t)v24, v23);
          SND_PlayExplosionSound_Internal(*(const SndAliasList **)(v8 + 11), 0, *((_DWORD *)v8 + 7), v38, (const vec3_t *)(v8 + 4), v37, 1);
        }
      }
      *(v8 - 13) = 0.0;
    }
LABEL_42:
    ++v9;
    v8 += 32;
  }
  while ( v9 < 0x40 );
}

/*
==============
SND_UpdateEntVolumes
==============
*/
void SND_UpdateEntVolumes(int frametime)
{
  float *p_goalvalue; 
  unsigned int i; 
  float *v4; 
  bool v5; 
  float v6; 
  float v7; 
  double v8; 
  bool v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 

  p_goalvalue = &g_sndEntityParamInfo[0].volume.goalvalue;
  for ( i = 0; i < 0x40; ++i )
  {
    if ( *((_DWORD *)p_goalvalue - 8) == 2047 )
      goto LABEL_34;
    v4 = p_goalvalue - 1;
    if ( p_goalvalue == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6965, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
      __debugbreak();
    if ( frametime < 0 )
    {
      LODWORD(v21) = frametime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6966, ASSERT_TYPE_ASSERT, "( ( dt_msec >= 0 ) )", "( dt_msec ) = %i", v21) )
        __debugbreak();
    }
    if ( *v4 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6967, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", *v4) )
      __debugbreak();
    v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND);
    v6 = p_goalvalue[1];
    if ( !v5 )
    {
      if ( v6 == 0.0 )
      {
        v7 = *p_goalvalue;
        *v4 = *p_goalvalue;
        p_goalvalue[3] = 0.0;
        if ( v7 >= 0.0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7002, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", v7) )
          goto LABEL_33;
        goto LABEL_16;
      }
      v8 = I_fclamp((float)((float)frametime * v6) + p_goalvalue[2], 0.0, 1.0);
      v9 = p_goalvalue[1] > 0.0;
      v10 = p_goalvalue[3];
      v11 = *p_goalvalue;
      v12 = *(float *)&v8 * (float)(*(float *)&v8 * *(float *)&v8);
      p_goalvalue[2] = *(float *)&v8;
      if ( v9 )
      {
        v13 = v11 - (float)((float)(1.0 - v12) * v10);
        *v4 = v13;
        v14 = FLOAT_1_0;
        if ( v13 >= 0.0 )
          goto LABEL_24;
        v15 = v13;
        v16 = 7016;
      }
      else
      {
        v17 = (float)(v10 * v12) + v11;
        *v4 = v17;
        v14 = 0.0;
        if ( v17 >= 0.0 )
          goto LABEL_24;
        v15 = v17;
        v16 = 7022;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", v16, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", v15) )
        __debugbreak();
LABEL_24:
      if ( v12 < v14 )
        goto LABEL_33;
      v18 = *p_goalvalue;
      *v4 = *p_goalvalue;
      p_goalvalue[1] = 0.0;
      if ( v18 >= 0.0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7029, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", v18) )
        goto LABEL_33;
LABEL_16:
      __debugbreak();
      goto LABEL_33;
    }
    v19 = (float)((float)frametime * v6) + *v4;
    v20 = *p_goalvalue;
    *v4 = v19;
    if ( v6 >= 0.0 )
    {
      if ( v19 > v20 )
      {
LABEL_32:
        *v4 = v20;
        p_goalvalue[1] = 0.0;
      }
    }
    else if ( v19 < v20 )
    {
      goto LABEL_32;
    }
LABEL_33:
    SND_UpdateParameter(&g_sndEntityParamInfo[i].pitch, frametime, 0);
LABEL_34:
    p_goalvalue += 13;
  }
}

/*
==============
SND_UpdateLoopingSounds
==============
*/
void SND_UpdateLoopingSounds(bool deferred)
{
  int v2; 
  float *v3; 
  __int64 v4; 
  const SndAliasList *v5; 
  float v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  float v10; 
  SndFader *p_fadeInOut; 
  volatile int *voiceBusyUpdating; 
  const char *v13; 
  SndPlayParams inParams; 
  tmat33_t<vec3_t> axis_out; 

  if ( g_snd.driverInitialized && !g_snd.paused )
  {
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_UpdateLoopingSounds");
    Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
    v2 = 0;
    inParams.playbackType = SPT_BLEND;
    *(_OWORD *)&inParams.volumeScale = _xmm;
    inParams.lpfCutoff = FLOAT_N1_0;
    inParams.hpfCutoff = FLOAT_N1_0;
    inParams.org.v[0] = 0.0;
    inParams.org.v[1] = 0.0;
    inParams.org.v[2] = 0.0;
    inParams.startOffsetFraction = 0.0;
    inParams.aliasList = NULL;
    v3 = &g_snd.virtualLoops[0].org.v[2];
    inParams.aliasId = 0;
    v4 = 198i64;
    inParams.sndEnt = 0i64;
    inParams.timeshift = 0;
    inParams.adsrIndex = -1;
    inParams.fadeTime = 0;
    inParams.system = SASYS_CGAME;
    inParams.autoSimId = -1;
    inParams.autoSimTimeStamp = 0i64;
    inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
    inParams.startPaused = 0;
    inParams.additionalStartDelayUs = 0;
    *(_QWORD *)&inParams.surfaceType = -1i64;
    inParams.contextIndex2 = -1;
    inParams.reflectionClass = 0;
    *(_WORD *)&inParams.isADS = 0;
    do
    {
      if ( *((_DWORD *)v3 - 8) != -1 )
      {
        v5 = (const SndAliasList *)*((_QWORD *)v3 - 3);
        v6 = v3[2];
        v7 = *((_QWORD *)v3 - 2);
        inParams.volumeScale = v3[1];
        inParams.pitch = v6;
        inParams.aliasList = v5;
        inParams.sndEnt = v7;
        if ( *((_BYTE *)v3 + 12) )
        {
          v8 = v7 & 0x1FFFFFFFFi64;
          if ( (v7 & 0x1FFFFFFFFi64) - 5411 <= 0x1F || v8 - 2049 <= 0x8FF || v8 <= 0x7FD || v8 - 5571 <= 0x7A120 )
            CG_SND_GetSoundEntityOrientation(v7, (vec3_t *)(v3 - 2), &axis_out);
        }
        v10 = *(v3 - 1);
        inParams.org.v[0] = *(v3 - 2);
        inParams.org.v[2] = *v3;
        inParams.org.v[1] = v10;
        *((_DWORD *)v3 - 7) = SND_PlaySoundAliasFromParams(&inParams, 0);
      }
      v3 += 12;
      --v4;
    }
    while ( v4 );
    if ( !g_snd.updateWasDeferred || deferred )
    {
      p_fadeInOut = &g_snd.voices[0].fadeInOut;
      g_snd.updateWasDeferred = deferred;
      voiceBusyUpdating = g_snd.voiceBusyUpdating;
      do
      {
        if ( !SND_IsVoiceFree(v2) && !Sys_InterlockedCompareExchange(voiceBusyUpdating, 1, 0) )
        {
          if ( !*(_QWORD *)&p_fadeInOut[-15].goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6924, ASSERT_TYPE_ASSERT, "(voice.alias)", (const char *)&queryFormat, "voice.alias", inParams.aliasList, *(_QWORD *)&inParams.aliasId, *(_QWORD *)&inParams.volumeScale, *(_QWORD *)&inParams.pitch, inParams.sndEnt) )
            __debugbreak();
          if ( (*(_BYTE *)(*(_QWORD *)&p_fadeInOut[-15].goal + 112i64) & 1) != 0 && (*(_QWORD *)&p_fadeInOut[-23].goal & 0x1FFFFFFFFi64) != 2048 && LODWORD(p_fadeInOut[-22].value) != g_snd.looptime )
          {
            SND_FaderSetGoal(p_fadeInOut, 0.0);
            if ( p_fadeInOut->value == 0.0 )
            {
              v13 = j_va("Stopped looping voice %d due to lack of update this frame (looptime %d)", (unsigned int)v2, p_fadeInOut[-22].value);
              SND_DebugAliasPrint(1, *(const SndAlias **)&p_fadeInOut[-15].goal, v13);
              SND_StopVoiceWithoutLock(v2);
            }
          }
          Sys_InterlockedCompareExchange(voiceBusyUpdating, 0, 1);
        }
        ++v2;
        ++voiceBusyUpdating;
        p_fadeInOut += 164;
      }
      while ( v2 < 99 );
    }
    else
    {
      g_snd.updateWasDeferred = 0;
    }
    g_snd.looptime = g_snd.time;
    Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SND_UpdateMasterVolumes
==============
*/
void SND_UpdateMasterVolumes(int frametime)
{
  __int64 v2; 
  unsigned int i; 
  const SndGlobals *globals; 
  __int64 v5; 
  int currentChannelPriority; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) && g_snd.scriptSoundFade.goalrate != 0.0 )
    SND_UpdateParameter(&g_snd.scriptSoundFade, frametime, 1);
  v2 = 0i64;
  for ( i = 0; ; ++i )
  {
    globals = g_snd.globals;
    if ( !g_snd.globals || i >= g_snd.globals->entchannelCount )
      break;
    if ( !g_snd.paused || !SND_IsPausable(i) )
    {
      v5 = i;
      SND_UpdateParameter(&g_snd.levelFadeInChannelVols.channelvol[v5], frametime, 1);
      currentChannelPriority = g_snd.currentChannelPriority;
      if ( g_snd.currentChannelPriority >= 4u )
      {
        LODWORD(v10) = 4;
        LODWORD(v9) = g_snd.currentChannelPriority;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( g_snd.currentChannelPriority ) < (unsigned)( ( sizeof( *array_counter( g_snd.channelPriorityVolGroups ) ) + 0 ) )", "g_snd.currentChannelPriority doesn't index ARRAY_COUNT( g_snd.channelPriorityVolGroups )\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
        currentChannelPriority = g_snd.currentChannelPriority;
      }
      SND_UpdateParameter(&g_snd.channelPriorityVolGroups[currentChannelPriority].channelvol[v5], frametime, 1);
    }
  }
  if ( !g_snd.paused )
  {
    while ( 1 )
    {
      if ( !globals )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 4831, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
          __debugbreak();
        globals = g_snd.globals;
      }
      if ( (unsigned int)v2 >= globals->volmodinfoCount )
        break;
      SND_UpdateParameter(&g_snd.volmods[v2], frametime, 1);
      globals = g_snd.globals;
      v2 = (unsigned int)(v2 + 1);
    }
  }
  SND_UpdateParameter(&g_snd.mastervol, frametime, 1);
  if ( g_snd.stopSoundsAfterMasterFade && g_snd.mastervol.value == 0.0 )
  {
    g_snd.stopSoundsAfterMasterFade = 0;
    SND_StopSounds(SND_STOP_ALL);
  }
  v7 = DVARBOOL_snd_volume_mute;
  if ( !DVARBOOL_snd_volume_mute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_volume_mute") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    g_snd.volume = 0.0;
  }
  else
  {
    v8 = DVARFLT_profileMenuOption_volume;
    if ( !DVARFLT_profileMenuOption_volume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_volume") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    g_snd.volume = (float)(g_snd.mastervol.value * v8->current.value) * g_snd.globals->globalVolumeModifier;
  }
}

/*
==============
SND_UpdateParameter
==============
*/
void SND_UpdateParameter(snd_param_info_t *paramInfo, int dt_msec, bool nonLinear)
{
  float goalrate; 
  float goalvalue; 
  float v8; 
  double v9; 
  bool v10; 
  float goalgain; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 

  if ( !paramInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6965, ASSERT_TYPE_ASSERT, "(paramInfo)", (const char *)&queryFormat, "paramInfo") )
    __debugbreak();
  if ( dt_msec < 0 )
  {
    LODWORD(v22) = dt_msec;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6966, ASSERT_TYPE_ASSERT, "( ( dt_msec >= 0 ) )", "( dt_msec ) = %i", v22) )
      __debugbreak();
  }
  if ( paramInfo->value < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 6967, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", paramInfo->value) )
    __debugbreak();
  if ( nonLinear && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND) )
  {
    goalrate = paramInfo->goalrate;
    if ( goalrate == 0.0 )
    {
      goalvalue = paramInfo->goalvalue;
      paramInfo->value = goalvalue;
      paramInfo->goalgain = 0.0;
      if ( goalvalue < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7002, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", goalvalue) )
      {
LABEL_15:
        __debugbreak();
        return;
      }
      return;
    }
    v8 = FLOAT_1_0;
    v9 = I_fclamp((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)dt_msec).m128_f32[0] * goalrate) + paramInfo->goalfraction, 0.0, 1.0);
    v10 = paramInfo->goalrate > 0.0;
    goalgain = paramInfo->goalgain;
    v12 = paramInfo->goalvalue;
    v13 = *(float *)&v9 * (float)(*(float *)&v9 * *(float *)&v9);
    paramInfo->goalfraction = *(float *)&v9;
    if ( v10 )
    {
      v14 = v12 - (float)((float)(1.0 - v13) * goalgain);
      paramInfo->value = v14;
      if ( v14 >= 0.0 )
        goto LABEL_23;
      v15 = v14;
      v16 = 7016;
    }
    else
    {
      v17 = (float)(goalgain * v13) + v12;
      paramInfo->value = v17;
      v8 = 0.0;
      if ( v17 >= 0.0 )
        goto LABEL_23;
      v15 = v17;
      v16 = 7022;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", v16, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", v15) )
      __debugbreak();
LABEL_23:
    if ( v13 >= v8 )
    {
      v18 = paramInfo->goalvalue;
      paramInfo->value = v18;
      paramInfo->goalrate = 0.0;
      if ( v18 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 7029, ASSERT_TYPE_ASSERT, "( ( paramInfo->value >= 0.0f ) )", "( paramInfo->value ) = %g", v18) )
        goto LABEL_15;
    }
    return;
  }
  v19 = paramInfo->goalrate;
  v20 = (float)((float)dt_msec * v19) + paramInfo->value;
  v21 = paramInfo->goalvalue;
  paramInfo->value = v20;
  if ( v19 >= 0.0 )
  {
    if ( v20 <= v21 )
      return;
  }
  else if ( v20 >= v21 )
  {
    return;
  }
  paramInfo->value = v21;
  paramInfo->goalrate = 0.0;
}

/*
==============
SND_UpdatePerChannelMasterSettings
==============
*/
void SND_UpdatePerChannelMasterSettings(const int firstChanIdx, const int lastChanIdx, unsigned __int8 *globalMasterPriorityID, float *globalMasterPriorityVal, float *globalMasterPercentage)
{
  __int128 v5; 
  __int64 v6; 
  int v10; 
  bool *v11; 
  float *v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  __int128 v15; 
  float v16; 
  __int128 v17; 
  const SndVoice *v18; 
  int v19; 
  bool *v20; 
  SndVoice *v21; 
  double MasterPercent; 
  __int64 v23; 
  __int64 v24; 

  v6 = firstChanIdx;
  if ( (unsigned int)firstChanIdx >= 0x63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15997, ASSERT_TYPE_ASSERT, "(unsigned)( firstChanIdx ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "firstChanIdx doesn't index SND_MAX_VOICES\n\t%i not in [0, %i)", firstChanIdx, 99) )
    __debugbreak();
  if ( (unsigned int)lastChanIdx >= 0x64 )
  {
    LODWORD(v24) = 100;
    LODWORD(v23) = lastChanIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15998, ASSERT_TYPE_ASSERT, "(unsigned)( lastChanIdx ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) + 1 )", "lastChanIdx doesn't index SND_MAX_VOICES + 1\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  if ( !globalMasterPriorityID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15999, ASSERT_TYPE_ASSERT, "(globalMasterPriorityID)", (const char *)&queryFormat, "globalMasterPriorityID") )
    __debugbreak();
  if ( !globalMasterPriorityVal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16000, ASSERT_TYPE_ASSERT, "(globalMasterPriorityVal)", (const char *)&queryFormat, "globalMasterPriorityVal") )
    __debugbreak();
  if ( !globalMasterPercentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16001, ASSERT_TYPE_ASSERT, "(globalMasterPercentage)", (const char *)&queryFormat, "globalMasterPercentage") )
    __debugbreak();
  v10 = v6;
  if ( (int)v6 < lastChanIdx )
  {
    v11 = &sdGlob.voiceAlloc[v6];
    v12 = &g_snd.chaninfoUnweightedPriority[492 * v6 - 48680];
    do
    {
      if ( (unsigned int)v10 > 0x62 )
      {
        LODWORD(v23) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v23) )
          __debugbreak();
      }
      if ( *v11 )
      {
        if ( v12 == (float *)112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15933, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
          __debugbreak();
        v13 = *(_BYTE *)(*(_QWORD *)v12 + 209i64);
        if ( !*(_QWORD *)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15972, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
          __debugbreak();
        v14 = *(_BYTE *)(*(_QWORD *)v12 + 209i64);
        *(float *)&v5 = SND_CalcVoiceVolume(0, (SndVoice *)(v12 - 28));
        v15 = v5;
        *(float *)&v15 = *(float *)&v5 * v12[65];
        v16 = *(float *)(*(_QWORD *)v12 + 220i64);
        if ( *(float *)&v15 < v16 )
        {
          if ( v16 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15983, ASSERT_TYPE_ASSERT, "(voice->alias->masterThreshold >= 0.0f)", (const char *)&queryFormat, "voice->alias->masterThreshold >= 0.0f") )
            __debugbreak();
          *(float *)&v15 = (float)(*(float *)&v15 / *(float *)(*(_QWORD *)v12 + 220i64)) * (float)v14;
          v5 = v15;
        }
        else
        {
          v17 = 0i64;
          *(float *)&v17 = (float)v14;
          v5 = v17;
        }
        if ( *(float *)&v5 != 0.0 && *(float *)&v5 > *globalMasterPriorityVal )
        {
          *globalMasterPriorityVal = *(float *)&v5;
          v18 = (const SndVoice *)(v12 - 28);
          if ( *globalMasterPriorityID == v13 )
          {
            *(double *)&v5 = SND_GetMasterPercent(v18);
            if ( *(float *)&v5 > *globalMasterPercentage )
              *globalMasterPercentage = *(float *)&v5;
          }
          else
          {
            *globalMasterPriorityID = v13;
            *(double *)&v5 = SND_GetMasterPercent(v18);
            *globalMasterPercentage = *(float *)&v5;
          }
        }
      }
      ++v10;
      ++v11;
      v12 += 492;
    }
    while ( v10 < lastChanIdx );
    v19 = firstChanIdx;
    if ( firstChanIdx < lastChanIdx )
    {
      v20 = &sdGlob.voiceAlloc[firstChanIdx];
      v21 = &g_snd.voices[firstChanIdx];
      do
      {
        if ( (unsigned int)v19 > 0x62 )
        {
          LODWORD(v23) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", v23) )
            __debugbreak();
        }
        if ( *v20 )
        {
          if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 15933, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
            __debugbreak();
          if ( v21->alias->masterPriority == *globalMasterPriorityID )
          {
            MasterPercent = SND_GetMasterPercent(v21);
            if ( *(float *)&MasterPercent > *globalMasterPercentage )
              *globalMasterPercentage = *(float *)&MasterPercent;
          }
        }
        ++v19;
        ++v20;
        ++v21;
      }
      while ( v19 < lastChanIdx );
    }
  }
}

/*
==============
SND_UpdateSpeakerMap
==============
*/
void SND_UpdateSpeakerMap(const SndVoice *voice, const SpeakerMap *speakerMap, float *volumes)
{
  __int64 srcChannelCount; 
  float *v4; 
  const SndVoice *v5; 
  bool v6; 
  unsigned int v7; 
  __int64 v8; 
  char *v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  float *v14; 
  int v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  int v18; 
  float *v19; 
  int v20; 
  int v21; 
  float *v22; 
  __int64 v23; 
  __int64 v24; 

  srcChannelCount = voice->soundFileInfo.srcChannelCount;
  v4 = volumes;
  v5 = voice;
  v6 = (voice->alias->flags & 4) != 0;
  if ( g_snd.playback_channels < 16 )
  {
    if ( g_snd.playback_channels < 8 )
    {
      if ( g_snd.playback_channels == 6 )
      {
        v7 = 6;
        if ( (_DWORD)srcChannelCount == 2 )
        {
          v8 = 116i64;
        }
        else
        {
          if ( (_DWORD)srcChannelCount != 1 )
            goto LABEL_23;
          v8 = 92i64;
        }
      }
      else
      {
        if ( g_snd.playback_channels != 2 )
          goto LABEL_23;
        v7 = 2;
        if ( (_DWORD)srcChannelCount == 2 )
        {
          v8 = 76i64;
        }
        else
        {
          if ( (_DWORD)srcChannelCount != 1 )
            goto LABEL_23;
          v8 = 68i64;
        }
      }
    }
    else
    {
      v7 = 8;
      if ( (_DWORD)srcChannelCount == 2 )
      {
        v8 = 196i64;
      }
      else
      {
        if ( (_DWORD)srcChannelCount != 1 )
          goto LABEL_23;
        v8 = 164i64;
      }
    }
LABEL_21:
    v9 = &speakerMap->name[v8];
    if ( &speakerMap->name[v8] )
      goto LABEL_28;
    goto LABEL_26;
  }
  v7 = 16;
  if ( (_DWORD)srcChannelCount == 2 )
  {
    v8 = 324i64;
    goto LABEL_21;
  }
  if ( (_DWORD)srcChannelCount == 1 )
  {
    v8 = 260i64;
    goto LABEL_21;
  }
LABEL_23:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 14967, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid audio channel count") )
    __debugbreak();
  v7 = 0;
  v9 = NULL;
LABEL_26:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12371, ASSERT_TYPE_ASSERT, "(speakerLevels)", (const char *)&queryFormat, "speakerLevels") )
    __debugbreak();
LABEL_28:
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12372, ASSERT_TYPE_ASSERT, "(outChannels > 0)", (const char *)&queryFormat, "outChannels > 0") )
    __debugbreak();
  if ( (int)(srcChannelCount * v7) > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12373, ASSERT_TYPE_ASSERT, "(inChannels*outChannels <= ((( 2 ))*(( 16 ))))", (const char *)&queryFormat, "inChannels*outChannels <= SPEAKER_ARRAY_SIZE") )
    __debugbreak();
  v10 = 0;
  v11 = v7;
  v12 = srcChannelCount;
  if ( v7 )
  {
    v13 = 0i64;
    v14 = v4 + 32;
    do
    {
      v15 = 0;
      v16 = 0i64;
      if ( v12 >= 4 )
      {
        v17 = ((unsigned __int64)(v12 - 4) >> 2) + 1;
        v18 = v10 + 2 * v7;
        v19 = v14;
        v15 = 4 * v17;
        v16 = 4 * v17;
        do
        {
          v19 += 64;
          *(v19 - 96) = *(float *)&v9[4 * (v18 - 2 * v7)];
          *(v19 - 80) = *(float *)&v9[4 * (v18 - v7)];
          v20 = v18 + v7;
          *(v19 - 64) = *(float *)&v9[4 * v18];
          v18 += 4 * v7;
          *(v19 - 48) = *(float *)&v9[4 * v20];
          --v17;
        }
        while ( v17 );
        v4 = volumes;
        v11 = v7;
      }
      if ( v16 < v12 )
      {
        v21 = v10 + v7 * v15;
        v22 = &v4[16 * v16 + v13];
        v23 = v12 - v16;
        do
        {
          v24 = v21;
          v22 += 16;
          v21 += v7;
          *(v22 - 16) = *(float *)&v9[4 * v24];
          --v23;
        }
        while ( v23 );
      }
      ++v10;
      ++v13;
      ++v14;
    }
    while ( v13 < v11 );
    v5 = voice;
    LODWORD(srcChannelCount) = v12;
  }
  if ( v7 > 2 )
  {
    if ( v6 )
    {
      v4[3] = v5->alias->lfePercentage * v5->lfeScale;
      if ( (_DWORD)srcChannelCount == 2 )
        v4[19] = v5->alias->lfePercentage * v5->lfeScale;
    }
    else
    {
      v4[3] = v5->lfeScale * v4[3];
      if ( (_DWORD)srcChannelCount == 2 )
        v4[19] = v5->lfeScale * v4[19];
    }
  }
}

/*
==============
SND_UpdateVehicle
==============
*/
void SND_UpdateVehicle(const SndAliasList *aliasList, LocalClientNum_t localClientNum, int entNum, vec3_t *origin, float throttle, float brake)
{
  unsigned int v10; 
  int v11; 
  bool *v12; 
  unsigned int *p_playbackId; 
  __int64 system; 
  ScopedCriticalSection v15; 

  ScopedCriticalSection::ScopedCriticalSection(&v15, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v10 = SND_PlaySoundAlias(aliasList, localClientNum, entNum, origin, 0, SASYS_CGAME);
  if ( v10 )
  {
    v11 = 94;
    v12 = &sdGlob.voiceAlloc[94];
    p_playbackId = &g_snd.voices[94].playbackId;
    do
    {
      if ( (unsigned int)v11 > 0x62 )
      {
        LODWORD(system) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", system) )
          __debugbreak();
      }
      if ( *v12 && *p_playbackId == v10 )
        SD_UpdateVehicle(v11, throttle, brake, 0.0, 0.0, 0, 1);
      ++v11;
      p_playbackId += 492;
      ++v12;
    }
    while ( v11 < 99 );
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v15);
}

/*
==============
SND_UpdateVehicle
==============
*/
void SND_UpdateVehicle(const SndAliasList *aliasList, LocalClientNum_t localClientNum, int entNum, vec3_t *origin, float throttle, float brake, float rpm, float velocity, int gear, float distanceScale)
{
  unsigned int v14; 
  int v15; 
  bool *v16; 
  unsigned int *p_playbackId; 
  __int64 geara; 
  ScopedCriticalSection v19; 
  SndPlayParams inParams; 

  ScopedCriticalSection::ScopedCriticalSection(&v19, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  inParams.aliasId = 0;
  inParams.playbackType = SPT_BLEND;
  *(_OWORD *)&inParams.volumeScale = _xmm;
  inParams.sndEnt = 0i64;
  inParams.org.v[0] = 0.0;
  inParams.org.v[1] = 0.0;
  inParams.org.v[2] = 0.0;
  inParams.timeshift = 0;
  inParams.adsrIndex = -1;
  inParams.fadeTime = 0;
  inParams.system = SASYS_CGAME;
  inParams.autoSimId = -1;
  inParams.autoSimTimeStamp = 0i64;
  inParams.autoSimShotCount = SND_WEAP_SHOT_UNCOUNTED;
  inParams.startPaused = 0;
  inParams.lpfCutoff = FLOAT_N1_0;
  inParams.hpfCutoff = FLOAT_N1_0;
  inParams.startOffsetFraction = 0.0;
  inParams.additionalStartDelayUs = 0;
  *(_QWORD *)&inParams.surfaceType = -1i64;
  inParams.contextIndex2 = -1;
  inParams.reflectionClass = 0;
  *(_WORD *)&inParams.isADS = 0;
  inParams.aliasList = aliasList;
  inParams.sndEnt = CG_GenerateSndEntHandle(localClientNum, entNum);
  inParams.org = *origin;
  inParams.timeshift = 0;
  inParams.distanceScale = distanceScale;
  inParams.system = SASYS_CGAME;
  v14 = SND_PlaySoundAliasFromParams(&inParams, 0);
  if ( v14 )
  {
    v15 = 94;
    v16 = &sdGlob.voiceAlloc[94];
    p_playbackId = &g_snd.voices[94].playbackId;
    do
    {
      if ( (unsigned int)v15 > 0x62 )
      {
        LODWORD(geara) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 1119, ASSERT_TYPE_ASSERT, "( ( index >= 0 && index < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( index ) = %i", geara) )
          __debugbreak();
      }
      if ( *v16 && *p_playbackId == v14 )
        SD_UpdateVehicle(v15, throttle, brake, rpm, velocity, gear, 0);
      ++v15;
      p_playbackId += 492;
      ++v16;
    }
    while ( v15 < 99 );
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v19);
}

/*
==============
SND_UpdateVirtualLoopSound
==============
*/
__int64 SND_UpdateVirtualLoopSound(int handle, const vec3_t *org, float volume, float pitch)
{
  int v6; 
  SndVirtualLoop *virtualLoops; 
  unsigned __int8 v8; 
  vec3_t *p_org; 
  ScopedCriticalSection v11; 

  ScopedCriticalSection::ScopedCriticalSection(&v11, CRITSECT_SOUND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v6 = 0;
  virtualLoops = g_snd.virtualLoops;
  while ( virtualLoops->handle != handle )
  {
    ++v6;
    if ( (__int64)++virtualLoops >= (__int64)&g_snd.nextVirtualLoopHandle )
    {
      Com_PrintError(9, "SND_UpdateVirtualLoopSound: Handle %d not found.\n", (unsigned int)handle);
      v8 = 0;
      goto LABEL_6;
    }
  }
  virtualLoops->volume = volume;
  virtualLoops->pitch = pitch;
  p_org = &g_snd.virtualLoops[v6].org;
  p_org->v[0] = org->v[0];
  p_org->v[1] = org->v[1];
  p_org->v[2] = org->v[2];
  v8 = 1;
LABEL_6:
  ScopedCriticalSection::~ScopedCriticalSection(&v11);
  return v8;
}

/*
==============
SND_UpdateVoicePosition
==============
*/
void SND_UpdateVoicePosition(SndVoice *voice, SecureVec3 *outVoicePosition, tmat33_t<vec3_t> *outVoiceMatrix)
{
  SndEntState *EntState; 
  const tmat33_t<vec3_t> *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  EntState = SND_FindEntState(voice->sndEnt, 0);
  v7 = (const tmat33_t<vec3_t> *)EntState;
  if ( EntState && EntState->hasPosition )
  {
    SndEntState_GetOrigin(EntState, (vec3_t *)outVoicePosition);
    AxisCopy(v7 + 2, outVoiceMatrix);
  }
  else
  {
    *(_QWORD *)&outVoicePosition->x = 0i64;
    outVoicePosition->z = 0.0;
    AxisClear(outVoiceMatrix);
  }
  if ( ((LODWORD(outVoicePosition->x) & 0x7F800000) == 2139095040 || (LODWORD(outVoicePosition->y) & 0x7F800000) == 2139095040 || (LODWORD(outVoicePosition->z) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 12527, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outVoicePosition )[0] ) && !IS_NAN( ( outVoicePosition )[1] ) && !IS_NAN( ( outVoicePosition )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outVoicePosition )[0] ) && !IS_NAN( ( outVoicePosition )[1] ) && !IS_NAN( ( outVoicePosition )[2] )") )
    __debugbreak();
  v8 = voice->offset.v[0];
  v9 = (float)(v8 * outVoiceMatrix->m[0].v[0]) + outVoicePosition->x;
  outVoicePosition->x = v9;
  outVoicePosition->y = (float)(v8 * outVoiceMatrix->m[0].v[1]) + outVoicePosition->y;
  outVoicePosition->z = (float)(v8 * outVoiceMatrix->m[0].v[2]) + outVoicePosition->z;
  v10 = voice->offset.v[1];
  v11 = (float)(v10 * outVoiceMatrix->m[1].v[0]) + v9;
  outVoicePosition->x = v11;
  outVoicePosition->y = (float)(v10 * outVoiceMatrix->m[1].v[1]) + outVoicePosition->y;
  outVoicePosition->z = (float)(v10 * outVoiceMatrix->m[1].v[2]) + outVoicePosition->z;
  v12 = voice->offset.v[2];
  outVoicePosition->x = (float)(v12 * outVoiceMatrix->m[2].v[0]) + v11;
  outVoicePosition->y = (float)(v12 * outVoiceMatrix->m[2].v[1]) + outVoicePosition->y;
  outVoicePosition->z = (float)(v12 * outVoiceMatrix->m[2].v[2]) + outVoicePosition->z;
  SndVoice_SetOrigin(voice, (const vec3_t *)outVoicePosition);
  voice->orientation.v[0] = outVoiceMatrix->m[0].v[0];
  voice->orientation.v[1] = outVoiceMatrix->m[0].v[1];
  voice->orientation.v[2] = outVoiceMatrix->m[0].v[2];
}

/*
==============
SND_VoiceSetStartSync
==============
*/
void SND_VoiceSetStartSync(SndVoice *voice, bool startSync, float syncPeriodFrames, int meter, int offsetFrames, int delayBeats, int fadeBeats)
{
  signed __int64 v10; 
  unsigned int i; 
  SndVoice *PlaybackVoice; 
  SndVoice *v13; 
  __int64 v14; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16144, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  v10 = voice - g_snd.voices;
  if ( (int)v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16149, ASSERT_TYPE_ASSERT, "(voiceIndex >= 0)", (const char *)&queryFormat, "voiceIndex >= 0") )
    __debugbreak();
  if ( (int)v10 >= 99 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16150, ASSERT_TYPE_ASSERT, "(voiceIndex < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "voiceIndex < SND_MAX_VOICES") )
    __debugbreak();
  SD_SetVoiceStartSync(v10, startSync, syncPeriodFrames, meter, offsetFrames, delayBeats, fadeBeats);
  for ( i = voice->secondaryId; i; i = v13->secondaryId )
  {
    PlaybackVoice = SND_GetPlaybackVoice(i);
    v13 = PlaybackVoice;
    if ( !PlaybackVoice )
      break;
    v14 = PlaybackVoice - g_snd.voices;
    if ( (int)v14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16171, ASSERT_TYPE_ASSERT, "(secondaryVoiceIndex >= 0)", (const char *)&queryFormat, "secondaryVoiceIndex >= 0") )
      __debugbreak();
    if ( (int)v14 >= 99 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16172, ASSERT_TYPE_ASSERT, "(secondaryVoiceIndex < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "secondaryVoiceIndex < SND_MAX_VOICES") )
      __debugbreak();
    SD_SetVoiceStartSync(v14, startSync, syncPeriodFrames, meter, offsetFrames, delayBeats, fadeBeats);
  }
}

/*
==============
SND_VoiceSetStopSync
==============
*/
void SND_VoiceSetStopSync(SndVoice *voice, bool stopSync, int delayBeats, int fadeBeats)
{
  int v8; 
  unsigned int i; 
  SndVoice *PlaybackVoice; 
  SndVoice *v11; 
  __int64 v12; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16195, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  v8 = truncate_cast<int,__int64>(voice - g_snd.voices);
  if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16200, ASSERT_TYPE_ASSERT, "(voiceIndex >= 0)", (const char *)&queryFormat, "voiceIndex >= 0") )
    __debugbreak();
  if ( v8 >= 99 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16201, ASSERT_TYPE_ASSERT, "(voiceIndex < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "voiceIndex < SND_MAX_VOICES") )
    __debugbreak();
  SD_SetVoiceStopSync(v8, stopSync, delayBeats, fadeBeats);
  for ( i = voice->secondaryId; i; i = v11->secondaryId )
  {
    PlaybackVoice = SND_GetPlaybackVoice(i);
    v11 = PlaybackVoice;
    if ( !PlaybackVoice )
      break;
    v12 = PlaybackVoice - g_snd.voices;
    if ( (unsigned __int64)(v12 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v12, "signed", v12) )
      __debugbreak();
    if ( (int)v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16219, ASSERT_TYPE_ASSERT, "(secondaryVoiceIndex >= 0)", (const char *)&queryFormat, "secondaryVoiceIndex >= 0") )
      __debugbreak();
    if ( (int)v12 >= 99 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 16220, ASSERT_TYPE_ASSERT, "(secondaryVoiceIndex < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ))", (const char *)&queryFormat, "secondaryVoiceIndex < SND_MAX_VOICES") )
      __debugbreak();
    SD_SetVoiceStopSync(v12, stopSync, delayBeats, fadeBeats);
  }
}

/*
==============
SND_VoiceUpdateWorker
==============
*/
void SND_VoiceUpdateWorker(const void *const cmdInfo)
{
  __int64 v1; 
  __int64 v2; 
  volatile signed __int32 *v4; 

  v1 = *((int *)cmdInfo + 1);
  v2 = v1;
  v4 = &g_snd.voiceBusyUpdating[v1];
  do
  {
    if ( (((unsigned __int8)((unsigned __int8)&g_snd + 4 * v1) + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.voiceBusyUpdating[v1]) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(v4, 1, 0) == 1 );
  if ( *(_DWORD *)cmdInfo == g_snd.voices[v2].playbackId && *(_DWORD *)cmdInfo && !g_snd.voices[v2].paused )
    SND_UpdateAndStartVoice(v1, *((_DWORD *)cmdInfo + 2));
  if ( (((unsigned __int8)((unsigned __int8)&g_snd + 4 * v1) + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.voiceBusyUpdating[v1]) )
    __debugbreak();
  _InterlockedCompareExchange(v4, 0, 1);
}

/*
==============
EntityDebugDrawOffset::SetOffset
==============
*/
void EntityDebugDrawOffset::SetOffset(EntityDebugDrawOffset *this, unsigned __int64 entIndex, int offset)
{
  int v4; 
  int numEntIndices; 
  EntityDebugDrawOffset *v8; 
  int v9; 
  int v10; 

  v4 = 0;
  numEntIndices = this->numEntIndices;
  if ( numEntIndices <= 0 )
  {
LABEL_5:
    if ( (unsigned int)numEntIndices >= 0x63 )
    {
      v10 = 99;
      v9 = numEntIndices;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( numEntIndices ) < (unsigned)( ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) )", "numEntIndices doesn't index SND_MAX_VOICES\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    this->entIndices[this->numEntIndices] = entIndex;
    this->offsets[this->numEntIndices++] = offset;
  }
  else
  {
    v8 = this;
    while ( v8->entIndices[0] != entIndex )
    {
      ++v4;
      v8 = (EntityDebugDrawOffset *)((char *)v8 + 8);
      if ( v4 >= numEntIndices )
        goto LABEL_5;
    }
    this->offsets[v4] = offset;
  }
}

