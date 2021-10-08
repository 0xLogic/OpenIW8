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
  __int64 v9; 
  bool v12; 
  bool v13; 
  bool v18; 
  bool (__fastcall *v20)(const SndStartAliasInfo *, float *, vec3_t *); 
  const char *subtitle; 
  __int64 result; 
  int v23; 
  SndVoice *v24; 
  unsigned int *v25; 
  const SndAlias *alias; 
  char v27; 
  bool (__fastcall *v28)(const SndVoice *, int, const vec3_t *, float *, int *); 
  __int64 v31; 
  double v32; 
  double v33; 
  int v34; 
  float value[3]; 
  vec3_t v36; 
  vec3_t outListenerOrigin; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v9 = first;
  _RSI = startAliasInfo;
  if ( !startAliasInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 98, ASSERT_TYPE_ASSERT, "(startAliasInfo)", (const char *)&queryFormat, "startAliasInfo") )
    __debugbreak();
  if ( (unsigned int)v9 > 0x62 )
  {
    LODWORD(v31) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 99, ASSERT_TYPE_ASSERT, "( ( first >= 0 && first < ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) ) )", "( first ) = %i", v31) )
      __debugbreak();
  }
  if ( count < 0 || count > 99 - (int)v9 )
  {
    LODWORD(v31) = count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 100, ASSERT_TYPE_ASSERT, "( ( count >= 0 && count <= ( 48 + ( SND_TRACK_COUNT + 10 ) + 32 + 5 ) - first ) )", "( count ) = %i", v31) )
      __debugbreak();
  }
  if ( entchannel >= g_snd.globals->entchannelCount )
  {
    LODWORD(v31) = entchannel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 101, ASSERT_TYPE_ASSERT, "( ( entchannel >= 0 && entchannel < g_snd.globals->entchannelCount ) )", "( entchannel ) = %i", v31) )
      __debugbreak();
  }
  v12 = _RSI->alias == NULL;
  if ( !_RSI->alias )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 102, ASSERT_TYPE_ASSERT, "(startAliasInfo->alias)", (const char *)&queryFormat, "startAliasInfo->alias");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  if ( !v12 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm0
    }
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 103, ASSERT_TYPE_ASSERT, "(startAliasInfo->priorityVolume >= 0.0f && startAliasInfo->priorityVolume <= 1.0f)", "%s\n\talias %s has priorityVolume %f which is not in [0, 1]", "startAliasInfo->priorityVolume >= 0.0f && startAliasInfo->priorityVolume <= 1.0f", _RSI->alias->aliasName, v33);
    v12 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vcomiss xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  if ( !v12 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_C0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_channel_limit.cpp", 104, ASSERT_TYPE_ASSERT, "( ( startAliasInfo->priorityAttenuation >= 0.0f && startAliasInfo->priorityAttenuation <= 1.0f ) )", "( startAliasInfo->priorityAttenuation ) = %g", v32) )
      __debugbreak();
  }
  v20 = init_0[limitBehavior];
  subtitle = _RSI->alias->subtitle;
  v34 = -1;
  if ( v20(_RSI, value, &outListenerOrigin) )
  {
    v23 = v9 + count;
    if ( (int)v9 < v23 )
    {
      v24 = &g_snd.voices[v9];
      v25 = &g_snd.chaninfoEntchannel[v9];
      do
      {
        alias = v24->alias;
        if ( *v25 == entchannel && alias && !SND_IsVoiceFree(v9) && (subtitle || !alias->subtitle) )
        {
          if ( (alias->flags & 1) == 0 )
          {
            *(double *)&_XMM0 = SND_GetVoiceFractionPlayed(v9, 0);
            __asm { vcomiss xmm0, xmm7 }
            if ( !v27 )
              goto LABEL_37;
          }
          __asm { vmovsd  xmm0, qword ptr [rsp+0E8h+outListenerOrigin] }
          v28 = (bool (__fastcall *)(const SndVoice *, int, const vec3_t *, float *, int *))process[limitBehavior];
          v36.v[2] = outListenerOrigin.v[2];
          __asm { vmovsd  [rsp+0E8h+var_98], xmm0 }
          if ( !v28(v24, v9, &v36, value, &v34) )
            break;
        }
        LODWORD(v9) = v9 + 1;
        ++v24;
        ++v25;
      }
      while ( (int)v9 < v23 );
    }
    LODWORD(v9) = v34;
LABEL_37:
    result = (unsigned int)v9;
  }
  else
  {
    result = 0xFFFFFFFFi64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovaps xmm7, [rsp+0E8h+var_68]
  }
  return result;
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
  _RSI = value;
  _RDI = outListenerOrigin;
  SND_GetNearestListenerOrigin(&startAliasInfo->org, outListenerOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  dword ptr [rsi], xmm2
  }
  return 1;
}

/*
==============
SND_LimitReplaceFarthestProcess
==============
*/
bool SND_LimitReplaceFarthestProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value, int *replaceableIndex)
{
  char v20; 
  char v21; 
  bool result; 
  vec3_t to; 
  __int64 v24; 

  v24 = -2i64;
  _RDI = value;
  _RBP = listenerOrigin;
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd.h", 921, ASSERT_TYPE_ASSERT, "(sndVoice)", (const char *)&queryFormat, "sndVoice") )
    __debugbreak();
  GetSecureSndVec3(&voice->org.origin, &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm3, xmm0, dword ptr [rsp+68h+to]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+68h+to+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+68h+to+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm5, dword ptr [rdi]
  }
  if ( !(v20 | v21) )
  {
    __asm { vmovss  dword ptr [rdi], xmm5 }
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?g_snd@@3Usnd_local_t@@A.time; snd_local_t g_snd
    vmovss  dword ptr [rdx], xmm0
  }
  return 1;
}

/*
==============
SND_LimitReplaceOldestProcess
==============
*/
char SND_LimitReplaceOldestProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value, int *replaceableIndex)
{
  char v5; 
  char v6; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+0C0h]
    vcomiss xmm0, dword ptr [r9]
  }
  if ( v5 | v6 )
  {
    __asm { vmovss  dword ptr [r9], xmm0 }
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
  char v3; 
  char v4; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm0, dword ptr [rcx+28h]
    vcomiss xmm1, cs:__real@38d1b717
    vmovss  dword ptr [rdx], xmm1
  }
  return !(v3 | v4);
}

/*
==============
SND_LimitReplaceQuieterProcess
==============
*/
bool SND_LimitReplaceQuieterProcess(const SndVoice *voice, int voiceIndex, const vec3_t *listenerOrigin, float *value, int *replaceableIndex)
{
  char v5; 

  _RCX = voiceIndex;
  _R8 = g_snd.chaninfoUnweightedPriority;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+rcx*4]
    vcomiss xmm0, dword ptr [r9]
  }
  if ( !v5 )
    return 1;
  __asm
  {
    vmovss  dword ptr [r9], xmm0
    vmovss  xmm0, cs:__real@38d1b717
  }
  *replaceableIndex = voiceIndex;
  __asm { vcomiss xmm0, dword ptr [r8+rcx*4] }
  return v5 != 0;
}

