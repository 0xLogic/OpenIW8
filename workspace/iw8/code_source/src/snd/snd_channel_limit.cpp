/*
==============
SND_FindReplaceableVoiceWithEntChannel
==============
*/

int __fastcall SND_FindReplaceableVoiceWithEntChannel(const SndStartAliasInfo *startAliasInfo, unsigned int entchannel, int first, int count, SndLimitBehavior limitBehavior)
{
  return ?SND_FindReplaceableVoiceWithEntChannel@@YAHPEBUSndStartAliasInfo@@IHHW4SndLimitBehavior@@@Z(startAliasInfo, entchannel, first, count, limitBehavior);
}

/*
==============
SND_FindReplaceableVoiceWithEntChannel
==============
*/
__int64 SND_FindReplaceableVoiceWithEntChannel(const SndStartAliasInfo *startAliasInfo, unsigned int entchannel, int first, int count, SndLimitBehavior limitBehavior)
{
  __int64 v6; 
  float priorityVolume; 
  float priorityAttenuation; 
  bool (__fastcall *v11)(const SndStartAliasInfo *, float *, vec3_t *); 
  const char *subtitle; 
  int v14; 
  SndVoice *v15; 
  unsigned int *v16; 
  const SndAlias *alias; 
  double VoiceFractionPlayed; 
  bool (__fastcall *v19)(const SndVoice *, int, const vec3_t *, float *, int *); 
  __int64 v20; 
  int v21; 
  float value[3]; 
  vec3_t v23; 
  vec3_t outListenerOrigin; 

  v6 = first;
  if ( !startAliasInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 98, ASSERT_TYPE_ASSERT, "(startAliasInfo)", (const char *)&queryFormat, "startAliasInfo") )
    __debugbreak();
  if ( (unsigned int)v6 > 0x62 )
  {
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 99, ASSERT_TYPE_ASSERT, "( ( first >= 0 && first < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( first ) = %i", v20) )
      __debugbreak();
  }
  if ( count < 0 || count > 99 - (int)v6 )
  {
    LODWORD(v20) = count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 100, ASSERT_TYPE_ASSERT, "( ( count >= 0 && count <= ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) - first ) )", "( count ) = %i", v20) )
      __debugbreak();
  }
  if ( entchannel >= g_snd.globals->entchannelCount )
  {
    LODWORD(v20) = entchannel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 101, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v20) )
      __debugbreak();
  }
  if ( !startAliasInfo->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 102, ASSERT_TYPE_ASSERT, "(startAliasInfo->alias)", (const char *)&queryFormat, "startAliasInfo->alias") )
    __debugbreak();
  priorityVolume = startAliasInfo->priorityVolume;
  if ( (priorityVolume < 0.0 || priorityVolume > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 103, ASSERT_TYPE_ASSERT, "(startAliasInfo->priorityVolume >= 0.0f && startAliasInfo->priorityVolume <= 1.0f)", "%s\n\talias %s has priorityVolume %f which is not in [0, 1]", "startAliasInfo->priorityVolume >= 0.0f && startAliasInfo->priorityVolume <= 1.0f", startAliasInfo->alias->aliasName, priorityVolume) )
    __debugbreak();
  priorityAttenuation = startAliasInfo->priorityAttenuation;
  if ( (priorityAttenuation < 0.0 || priorityAttenuation > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 104, ASSERT_TYPE_ASSERT, "( ( startAliasInfo->priorityAttenuation >= 0.0f && startAliasInfo->priorityAttenuation <= 1.0f ) )", "( startAliasInfo->priorityAttenuation ) = %g", priorityAttenuation) )
    __debugbreak();
  v11 = init_0[limitBehavior];
  subtitle = startAliasInfo->alias->subtitle;
  v21 = -1;
  if ( !v11(startAliasInfo, value, &outListenerOrigin) )
    return 0xFFFFFFFFi64;
  v14 = v6 + count;
  if ( (int)v6 < v14 )
  {
    v15 = &g_snd.voices[v6];
    v16 = &g_snd.chaninfoEntchannel[v6];
    do
    {
      alias = v15->alias;
      if ( *v16 == entchannel && alias && !SND_IsVoiceFree(v6) && (subtitle || !alias->subtitle) )
      {
        if ( (alias->flags & 1) == 0 )
        {
          VoiceFractionPlayed = SND_GetVoiceFractionPlayed(v6, 0);
          if ( *(float *)&VoiceFractionPlayed >= 1.0 )
            return (unsigned int)v6;
        }
        v19 = (bool (__fastcall *)(const SndVoice *, int, const vec3_t *, float *, int *))process[limitBehavior];
        v23 = outListenerOrigin;
        if ( !v19(v15, v6, &v23, value, &v21) )
          break;
      }
      LODWORD(v6) = v6 + 1;
      ++v15;
      ++v16;
    }
    while ( (int)v6 < v14 );
  }
  LODWORD(v6) = v21;
  return (unsigned int)v6;
}

/*
==============
SND_LimitNoNewInitialize
==============
*/
bool SND_LimitNoNewInitialize(const SndStartAliasInfo *startAliasInfo, float *value, vec3_t *outListenerOrigin)
{
  return 0;
}

/*
==============
SND_LimitNoNewProcess
==============
*/
bool SND_LimitNoNewProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 47, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
  return 0;
}

/*
==============
SND_LimitReplaceFarthestInitialize
==============
*/
char SND_LimitReplaceFarthestInitialize(const SndStartAliasInfo *startAliasInfo, float *value, vec3_t *outListenerOrigin)
{
  vec3_t *p_org; 
  float v6; 
  float v7; 

  p_org = &startAliasInfo->org;
  SND_GetNearestListenerOrigin(&startAliasInfo->org, outListenerOrigin);
  v6 = outListenerOrigin->v[1] - p_org->v[1];
  v7 = outListenerOrigin->v[2] - p_org->v[2];
  *value = (float)((float)(v6 * v6) + (float)((float)(outListenerOrigin->v[0] - p_org->v[0]) * (float)(outListenerOrigin->v[0] - p_org->v[0]))) + (float)(v7 * v7);
  return 1;
}

/*
==============
SND_LimitReplaceFarthestProcess
==============
*/
bool SND_LimitReplaceFarthestProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value, int *replaceableIndex)
{
  float v9; 
  bool result; 
  vec3_t to; 
  __int64 v12; 

  v12 = -2i64;
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 921, ASSERT_TYPE_ASSERT, "(sndVoice)", (const char *)&queryFormat, "sndVoice") )
    __debugbreak();
  GetSecureSndVec3(&voice->org.origin, &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
  v9 = (float)((float)((float)(listenerOrigin->v[1] - to.v[1]) * (float)(listenerOrigin->v[1] - to.v[1])) + (float)((float)(listenerOrigin->v[0] - to.v[0]) * (float)(listenerOrigin->v[0] - to.v[0]))) + (float)((float)(listenerOrigin->v[2] - to.v[2]) * (float)(listenerOrigin->v[2] - to.v[2]));
  if ( v9 > *value )
  {
    *value = v9;
    *replaceableIndex = voiceIndex;
  }
  result = 1;
  memset(&to, 0, sizeof(to));
  return result;
}

/*
==============
SND_LimitReplaceOldestInitialize
==============
*/
char SND_LimitReplaceOldestInitialize(const SndStartAliasInfo *startAliasInfo, float *value, vec3_t *outListenerOrigin)
{
  *value = (float)g_snd.time;
  return 1;
}

/*
==============
SND_LimitReplaceOldestProcess
==============
*/
char SND_LimitReplaceOldestProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value, int *replaceableIndex)
{
  float startTimeMSec; 

  startTimeMSec = (float)voice->startTimeMSec;
  if ( startTimeMSec <= *value )
  {
    *value = startTimeMSec;
    *replaceableIndex = voiceIndex;
  }
  return 1;
}

/*
==============
SND_LimitReplaceQuieterInitialize
==============
*/
bool SND_LimitReplaceQuieterInitialize(const SndStartAliasInfo *startAliasInfo, float *value, vec3_t *outListenerOrigin)
{
  float v3; 

  v3 = startAliasInfo->priorityAttenuation * startAliasInfo->priorityVolume;
  *value = v3;
  return v3 > 0.000099999997;
}

/*
==============
SND_LimitReplaceQuieterProcess
==============
*/
bool SND_LimitReplaceQuieterProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value, int *replaceableIndex)
{
  float v5; 
  bool result; 

  v5 = g_snd.chaninfoUnweightedPriority[voiceIndex];
  result = 1;
  if ( v5 < *value )
  {
    *value = v5;
    *replaceableIndex = voiceIndex;
    if ( g_snd.chaninfoUnweightedPriority[voiceIndex] <= 0.000099999997 )
      return 0;
  }
  return result;
}

