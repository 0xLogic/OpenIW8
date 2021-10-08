/*
==============
SND_SubmixGetLpFilterValue
==============
*/

double __fastcall SND_SubmixGetLpFilterValue(const int volmodIndex)
{
  double result; 

  *(float *)&result = ?SND_SubmixGetLpFilterValue@@YAMH@Z(volmodIndex);
  return result;
}

/*
==============
SND_SubmixGetHpFilterValue
==============
*/

double __fastcall SND_SubmixGetHpFilterValue(const int volmodIndex)
{
  double result; 

  *(float *)&result = ?SND_SubmixGetHpFilterValue@@YAMH@Z(volmodIndex);
  return result;
}

/*
==============
SND_SubmixDebugGetDataUnique
==============
*/

bool __fastcall SND_SubmixDebugGetDataUnique(const int idx, int *type, unsigned int *id, float *effect, float *maxAttnLinear, float *minCutoffLpfHz, float *maxCutoffHpfHz)
{
  return ?SND_SubmixDebugGetDataUnique@@YA_NHPEAHPEAIPEAM222@Z(idx, type, id, effect, maxAttnLinear, minCutoffLpfHz, maxCutoffHpfHz);
}

/*
==============
SND_SubmixGetVolmodAttenuation
==============
*/

double __fastcall SND_SubmixGetVolmodAttenuation(const int volmodIndex)
{
  double result; 

  *(float *)&result = ?SND_SubmixGetVolmodAttenuation@@YAMH@Z(volmodIndex);
  return result;
}

/*
==============
SND_SubmixAddFromSource
==============
*/

void __fastcall SND_SubmixAddFromSource(SndSubmixType source, unsigned int id, float fadeTimeSec, float scale)
{
  ?SND_SubmixAddFromSource@@YAXW4SndSubmixType@@IMM@Z(source, id, fadeTimeSec, scale);
}

/*
==============
SND_SubmixVoiceRestore
==============
*/

void __fastcall SND_SubmixVoiceRestore(MemoryFile *memFile, SndVoice *voice)
{
  ?SND_SubmixVoiceRestore@@YAXPEAUMemoryFile@@PEAUSndVoice@@@Z(memFile, voice);
}

/*
==============
SND_SubmixDebugGetNameForSlot
==============
*/

const char *__fastcall SND_SubmixDebugGetNameForSlot(SndSubmixType slot)
{
  return ?SND_SubmixDebugGetNameForSlot@@YAPEBDW4SndSubmixType@@@Z(slot);
}

/*
==============
SND_SubmixFade
==============
*/

double __fastcall SND_SubmixFade(unsigned int fadeType, float t)
{
  double result; 

  *(float *)&result = ?SND_SubmixFade@@YAMIM@Z(fadeType, t);
  return result;
}

/*
==============
SND_SubmixGetVolmodActiveCount
==============
*/

int __fastcall SND_SubmixGetVolmodActiveCount()
{
  return ?SND_SubmixGetVolmodActiveCount@@YAHXZ();
}

/*
==============
SND_SubmixUpdate
==============
*/

void __fastcall SND_SubmixUpdate(float dt, const bool isSplitscreen)
{
  ?SND_SubmixUpdate@@YAXM_N@Z(dt, isSplitscreen);
}

/*
==============
SND_SubmixClearFromVoiceAlias
==============
*/

void __fastcall SND_SubmixClearFromVoiceAlias(unsigned int id)
{
  ?SND_SubmixClearFromVoiceAlias@@YAXI@Z(id);
}

/*
==============
SND_SubmixRestore
==============
*/

void __fastcall SND_SubmixRestore(MemoryFile *memFile)
{
  ?SND_SubmixRestore@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_SubmixVoiceSave
==============
*/

void __fastcall SND_SubmixVoiceSave(MemoryFile *memFile, const SndVoice *voice)
{
  ?SND_SubmixVoiceSave@@YAXPEAUMemoryFile@@PEBUSndVoice@@@Z(memFile, voice);
}

/*
==============
SND_SubmixDebugGetNameForId
==============
*/

const char *__fastcall SND_SubmixDebugGetNameForId(unsigned int id)
{
  return ?SND_SubmixDebugGetNameForId@@YAPEBDI@Z(id);
}

/*
==============
SND_SubmixUpdateBuffers
==============
*/

int __fastcall SND_SubmixUpdateBuffers(const float dt)
{
  return ?SND_SubmixUpdateBuffers@@YAHM@Z(dt);
}

/*
==============
SND_SubmixAssert
==============
*/

bool __fastcall SND_SubmixAssert(const SndSubmixReq *const req, const bool assertVoice)
{
  return ?SND_SubmixAssert@@YA_NQEBUSndSubmixReq@@_N@Z(req, assertVoice);
}

/*
==============
SND_SubmixGetVolmodFocusCone
==============
*/

const FocusCone *__fastcall SND_SubmixGetVolmodFocusCone(const int volmodIndex)
{
  return ?SND_SubmixGetVolmodFocusCone@@YAPEBUFocusCone@@H@Z(volmodIndex);
}

/*
==============
SND_SubmixStopAllByBank
==============
*/

void __fastcall SND_SubmixStopAllByBank(const SndDuck *const ducks, const int duckCount)
{
  ?SND_SubmixStopAllByBank@@YAXQEBUSndDuck@@H@Z(ducks, duckCount);
}

/*
==============
SND_SubmixClearFromSource
==============
*/

void __fastcall SND_SubmixClearFromSource(SndSubmixType source, unsigned int id, float fadeTimeSec)
{
  ?SND_SubmixClearFromSource@@YAXW4SndSubmixType@@IM@Z(source, id, fadeTimeSec);
}

/*
==============
SND_SubmixSetSlotsFromZones
==============
*/

void __fastcall SND_SubmixSetSlotsFromZones(unsigned int idA, unsigned int idB, const float lerp)
{
  ?SND_SubmixSetSlotsFromZones@@YAXIIM@Z(idA, idB, lerp);
}

/*
==============
SND_SubmixSetSlotFromLUA
==============
*/

void __fastcall SND_SubmixSetSlotFromLUA(const char *name)
{
  ?SND_SubmixSetSlotFromLUA@@YAXPEBD@Z(name);
}

/*
==============
SND_SubmixClearAllFromSource
==============
*/

void __fastcall SND_SubmixClearAllFromSource(SndSubmixType source, float fadeTimeSec)
{
  ?SND_SubmixClearAllFromSource@@YAXW4SndSubmixType@@M@Z(source, fadeTimeSec);
}

/*
==============
SND_SubmixGetRequest
==============
*/

SndSubmixReq *__fastcall SND_SubmixGetRequest(int idx)
{
  return ?SND_SubmixGetRequest@@YAPEAUSndSubmixReq@@H@Z(idx);
}

/*
==============
SND_SubmixDebugGetZones
==============
*/

void __fastcall SND_SubmixDebugGetZones(unsigned int *zoneA, float *lerpA, unsigned int *zoneB, float *lerpB)
{
  ?SND_SubmixDebugGetZones@@YAXPEAIPEAM01@Z(zoneA, lerpA, zoneB, lerpB);
}

/*
==============
SND_SubmixGetVolmodFocusAmount
==============
*/

double __fastcall SND_SubmixGetVolmodFocusAmount(const int volmodIndex)
{
  double result; 

  *(float *)&result = ?SND_SubmixGetVolmodFocusAmount@@YAMH@Z(volmodIndex);
  return result;
}

/*
==============
SND_SubmixStopAllFromVoiceAlias
==============
*/

void SND_SubmixStopAllFromVoiceAlias(void)
{
  ?SND_SubmixStopAllFromVoiceAlias@@YAXXZ();
}

/*
==============
SND_SubmixDebugGetData
==============
*/

bool __fastcall SND_SubmixDebugGetData(const int idx, int *type, unsigned int *id, float *effect, float *maxAttnLinear, float *minCutoffLpfHz, float *maxCutoffHpfHz)
{
  return ?SND_SubmixDebugGetData@@YA_NHPEAHPEAIPEAM222@Z(idx, type, id, effect, maxAttnLinear, minCutoffLpfHz, maxCutoffHpfHz);
}

/*
==============
SND_SubmixClearAll
==============
*/

void __fastcall SND_SubmixClearAll(float fadeTimeSec)
{
  ?SND_SubmixClearAll@@YAXM@Z(fadeTimeSec);
}

/*
==============
SND_SubmixInit
==============
*/

void SND_SubmixInit(void)
{
  ?SND_SubmixInit@@YAXXZ();
}

/*
==============
SND_SubmixSetOnVoiceStart
==============
*/

void __fastcall SND_SubmixSetOnVoiceStart(SndVoice *voice, float dt)
{
  ?SND_SubmixSetOnVoiceStart@@YAXPEAUSndVoice@@M@Z(voice, dt);
}

/*
==============
SND_SubmixGetVolmodFocusConeId
==============
*/

unsigned int __fastcall SND_SubmixGetVolmodFocusConeId(const int volmodIndex)
{
  return ?SND_SubmixGetVolmodFocusConeId@@YAIH@Z(volmodIndex);
}

/*
==============
SND_SubmixSave
==============
*/

void __fastcall SND_SubmixSave(MemoryFile *memFile)
{
  ?SND_SubmixSave@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SND_SubmixRateLimit
==============
*/

void __fastcall SND_SubmixRateLimit(unsigned int count, const float *rate, const float *negrate, const float *target, float *delta, float *value, const float rangeMin, const float rangeMax)
{
  ?SND_SubmixRateLimit@@YAXIPEIBM00PEIAM1MM@Z(count, rate, negrate, target, delta, value, rangeMin, rangeMax);
}

/*
==============
SND_SubmixStopFromVoice
==============
*/

void __fastcall SND_SubmixStopFromVoice(SndVoice *voice)
{
  ?SND_SubmixStopFromVoice@@YAXPEAUSndVoice@@@Z(voice);
}

/*
==============
SND_SubmixAddFromSource
==============
*/

void __fastcall SND_SubmixAddFromSource(SndSubmixType source, unsigned int id, double fadeTimeSec, double scale)
{
  __int64 v11; 
  bool v14; 
  bool v15; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const SndDuck *v24; 
  unsigned int v26; 
  SndSubmixReq *requests; 
  SndSubmixReq *Available; 
  char *fmt; 
  float fmta; 
  __int64 fadeTimeSeca; 
  double fadeTimeSecb; 
  float fadeTimeSecc; 
  __int64 scalea; 
  double scaleb; 
  float scalec; 
  double v45; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v11 = source;
  __asm
  {
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm3
  }
  v14 = id == 0;
  if ( !id )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 498, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm8, xmm7
    vcomiss xmm6, xmm7
    vmovss  xmm9, cs:__real@3f800000
    vcomiss xmm6, xmm9
  }
  if ( !v14 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+98h+var_60], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  qword ptr [rsp+98h+scale], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  qword ptr [rsp+98h+fadeTimeSec], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 500, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( scale ) && ( scale ) <= ( 1.0f )", "scale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fadeTimeSecb, scaleb, v45) )
      __debugbreak();
  }
  if ( (unsigned int)v11 >= 7 )
  {
    LODWORD(scalea) = 7;
    LODWORD(fadeTimeSeca) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 501, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( SND_SUBMIX_TYPE_COUNT )", "source doesn't index SND_SUBMIX_TYPE_COUNT\n\t%i not in [0, %i)", fadeTimeSeca, scalea) )
      __debugbreak();
  }
  v21 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( !v21->current.enabled )
  {
    v22 = DCONST_DVARBOOL_snd_submix_disable_script;
    if ( !DCONST_DVARBOOL_snd_submix_disable_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_script") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( !v22->current.enabled )
    {
      if ( id && (_RAX = SND_GetDuckById(id), (v24 = _RAX) != NULL) )
      {
        __asm { vmovss  xmm0, dword ptr [rax+58h] }
        v26 = 0;
        __asm
        {
          vcomiss xmm0, cs:__real@37803e84
          vmulss  xmm0, xmm0, cs:__real@447a0000
          vcvttss2si r14d, xmm0
        }
        requests = s_sndSubmix.requests;
        while ( requests->id != id )
        {
          ++v26;
          ++requests;
          if ( v26 >= 0x8D )
          {
            Available = SND_SubmixFindAvailable();
            if ( Available )
            {
              __asm
              {
                vmovss  [rsp+98h+scale], xmm9
                vmovss  [rsp+98h+fadeTimeSec], xmm8
              }
              SND_SubmixAddNew(Available, v24, NULL, v11, _ER14, fadeTimeSecc, scalec);
            }
            else
            {
              LODWORD(fmt) = id;
              Com_PrintError(9, "SOUND: no free submix for %s request def \"%s\" %x.\n", s_sndSubmixSourceNames[v11], v24->name, fmt);
            }
            goto LABEL_31;
          }
        }
        if ( !SND_SubmixAssert(requests, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 382, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
          __debugbreak();
        __asm
        {
          vmovaps xmm3, xmm8; fadeTimeSec
          vmovss  dword ptr [rsp+98h+fmt], xmm9
        }
        SND_SubmixAdjustRequest(requests, v11, _ER14, *(const float *)&_XMM3, fmta);
      }
      else
      {
        Com_PrintError(9, "SOUND: did not find def %x for %s submix.\n", id, s_sndSubmixSourceNames[v11]);
      }
    }
  }
LABEL_31:
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
SND_SubmixAddFromVoiceAlias
==============
*/
SndSubmixReq *SND_SubmixAddFromVoiceAlias(SndVoice *voice)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  int v6; 
  int SoundFileLengthMS; 
  SndSubmixReq *Available; 
  SndSubmixReq *v14; 
  float fadeTimeSec; 
  float scale; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 438, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( voice->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 439, ASSERT_TYPE_ASSERT, "(voice->submixRef == nullptr)", (const char *)&queryFormat, "voice->submixRef == nullptr") )
    __debugbreak();
  if ( !voice->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 440, ASSERT_TYPE_ASSERT, "(voice->submixDef != nullptr)", (const char *)&queryFormat, "voice->submixDef != nullptr") )
    __debugbreak();
  v3 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 0i64;
  v4 = DCONST_DVARBOOL_snd_submix_disable_alias;
  if ( !DCONST_DVARBOOL_snd_submix_disable_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    return 0i64;
  _RDI = voice->submixDef;
  v6 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rdi+58h]
    vcomiss xmm1, xmm0
  }
  if ( (voice->alias->flags & 1) == 0 )
  {
    SoundFileLengthMS = SND_GetSoundFileLengthMS(voice->assetEntry);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+48h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si esi, xmm1
    }
    v6 = SoundFileLengthMS + _ESI;
  }
  Available = SND_SubmixFindAvailable();
  v14 = Available;
  if ( !Available )
  {
    Com_PrintError(9, "SOUND: no free submix for ALIAS request def \"%s\" %x.\n", _RDI->name, _RDI->id);
    return 0i64;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm1, cs:__real@bf800000
    vmovss  [rsp+48h+scale], xmm0
    vmovss  [rsp+48h+fadeTimeSec], xmm1
  }
  SND_SubmixAddNew(Available, _RDI, voice, 3, v6, fadeTimeSec, scale);
  return v14;
}

/*
==============
SND_SubmixAddNew
==============
*/
void SND_SubmixAddNew(SndSubmixReq *submix, const SndDuck *const def, SndVoice *voice, const int type, const int endTime, const float fadeTimeSec, const float scale)
{
  int v15; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBX = submix;
  if ( !submix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 410, ASSERT_TYPE_ASSERT, "(submix)", (const char *)&queryFormat, "submix") )
    __debugbreak();
  if ( _RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 411, ASSERT_TYPE_ASSERT, "(submix->def == nullptr)", (const char *)&queryFormat, "submix->def == nullptr") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 412, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 413, ASSERT_TYPE_ASSERT, "(def->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "def->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( endTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 414, ASSERT_TYPE_ASSERT, "(endTime >= 0)", (const char *)&queryFormat, "endTime >= 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+58h+fadeTimeSec]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  _RBX->id = def->id;
  _RBX->def = def;
  _RBX->startTime = g_snd.time;
  if ( endTime )
    v15 = endTime + g_snd.time;
  else
    v15 = 0;
  __asm { vmovss  xmm0, [rsp+58h+scale] }
  _RBX->endTime = v15;
  __asm
  {
    vmovaps xmm1, xmm6; fadeTimeSec
    vmovss  dword ptr [rbx+20h], xmm0
  }
  *(float *)&_XMM0 = SND_SubmixCaculateFadeInTime(def, *(float *)&_XMM1);
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  _RBX->fadeOutTimeSec = def->fadeOut;
  _RBX->voice = voice;
  if ( voice )
    voice->submixRef = _RBX;
  if ( (((_BYTE)_RBX + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &_RBX->type) )
    __debugbreak();
  _InterlockedExchange(&_RBX->type, type);
  if ( !SND_SubmixAssert(_RBX, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 432, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( submix, true ))", (const char *)&queryFormat, "SND_SubmixAssert( submix, true )") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
SND_SubmixAdjustRequest
==============
*/

void __fastcall SND_SubmixAdjustRequest(SndSubmixReq *submix, const int type, const int endTime, double fadeTimeSec, const float scale)
{
  int v12; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = submix;
  __asm { vmovaps xmm6, xmm3 }
  if ( !submix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 553, ASSERT_TYPE_ASSERT, "(submix)", (const char *)&queryFormat, "submix") )
    __debugbreak();
  if ( !_RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 554, ASSERT_TYPE_ASSERT, "(submix->def != nullptr)", (const char *)&queryFormat, "submix->def != nullptr") )
    __debugbreak();
  if ( !_RBX->def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 555, ASSERT_TYPE_ASSERT, "(submix->def->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "submix->def->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( endTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 556, ASSERT_TYPE_ASSERT, "(endTime >= 0)", (const char *)&queryFormat, "endTime >= 0") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovss  xmm0, [rsp+48h+scale]
    vmovss  dword ptr [rbx+20h], xmm0
  }
  _RBX->startTime = g_snd.time;
  if ( endTime )
    v12 = endTime + g_snd.time;
  else
    v12 = 0;
  _RBX->endTime = v12;
  __asm { vmovaps xmm1, xmm6; fadeTimeSec }
  *(float *)&_XMM0 = SND_SubmixCaculateFadeInTime(_RBX->def, *(float *)&_XMM1);
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  if ( !SND_SubmixAssert(_RBX, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 564, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( submix, true ))", (const char *)&queryFormat, "SND_SubmixAssert( submix, true )") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
SND_SubmixAssert
==============
*/
char SND_SubmixAssert(const SndSubmixReq *const req, const bool assertVoice)
{
  unsigned int type; 
  bool v6; 
  bool v7; 
  bool v9; 
  int endTime; 
  SndVoice *voice; 
  SndFileLoadingState loadingState; 
  const char *v14; 
  int v15; 
  const char *v16; 
  SndSubmixReq *submixRef; 

  _RBX = req;
  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 114, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( _RBX->type < -1 )
  {
    if ( _RBX->type != -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 149, ASSERT_TYPE_ASSERT, "(req->type == SND_SUBMIX_TYPE_EXPIRED)", (const char *)&queryFormat, "req->type == SND_SUBMIX_TYPE_EXPIRED") )
      __debugbreak();
    if ( _RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 150, ASSERT_TYPE_ASSERT, "(req->def == nullptr)", (const char *)&queryFormat, "req->def == nullptr") )
      __debugbreak();
    if ( _RBX->voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 151, ASSERT_TYPE_ASSERT, "(req->voice == nullptr)", (const char *)&queryFormat, "req->voice == nullptr") )
      __debugbreak();
    if ( !_RBX->id )
      return 1;
    v14 = "req->id == SND_INVALID_HASH";
    v15 = 152;
    v16 = "(req->id == static_cast< SndStringHash >( 0 ))";
LABEL_73:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", v15, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v14) )
      __debugbreak();
    return 1;
  }
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !_RBX->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 117, ASSERT_TYPE_ASSERT, "(req->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "req->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( !_RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 118, ASSERT_TYPE_ASSERT, "(req->def != nullptr)", (const char *)&queryFormat, "req->def != nullptr") )
    __debugbreak();
  if ( _RBX->def->id != _RBX->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 119, ASSERT_TYPE_ASSERT, "(req->def->id == req->id)", (const char *)&queryFormat, "req->def->id == req->id") )
    __debugbreak();
  if ( _RBX->id != _RBX->def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 120, ASSERT_TYPE_ASSERT, "(req->id == req->def->id)", (const char *)&queryFormat, "req->id == req->def->id") )
    __debugbreak();
  type = _RBX->type;
  v6 = type <= 0xFFFFFFFD;
  if ( type == -3 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 121, ASSERT_TYPE_ASSERT, "(req->type != SND_SUBMIX_TYPE_EXPIRED)", (const char *)&queryFormat, "req->type != SND_SUBMIX_TYPE_EXPIRED");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+18h]
  }
  if ( !v6 )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 122, ASSERT_TYPE_ASSERT, "(req->fadeInTimeSec >= 0.0f)", (const char *)&queryFormat, "req->fadeInTimeSec >= 0.0f");
    v6 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, dword ptr [rbx+1Ch]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 123, ASSERT_TYPE_ASSERT, "(req->fadeOutTimeSec >= 0.0f)", (const char *)&queryFormat, "req->fadeOutTimeSec >= 0.0f") )
    __debugbreak();
  endTime = _RBX->endTime;
  if ( endTime < _RBX->startTime && endTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 124, ASSERT_TYPE_ASSERT, "(req->endTime >= req->startTime || req->endTime == 0)", (const char *)&queryFormat, "req->endTime >= req->startTime || req->endTime == 0") )
    __debugbreak();
  if ( !_RBX->voice || !assertVoice )
    return 1;
  if ( _RBX->type != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 127, ASSERT_TYPE_ASSERT, "(req->type == SND_SUBMIX_TYPE_ALIAS)", (const char *)&queryFormat, "req->type == SND_SUBMIX_TYPE_ALIAS") )
    __debugbreak();
  voice = _RBX->voice;
  loadingState = voice->soundFileInfo.loadingState;
  if ( voice->soundFileInfo.loadingState )
  {
    if ( loadingState == SFLS_LOADED )
    {
      if ( voice->submixRef != _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 135, ASSERT_TYPE_ASSERT, "(req->voice->submixRef == req)", (const char *)&queryFormat, "req->voice->submixRef == req") )
        __debugbreak();
      if ( _RBX->voice->submixDef != _RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 136, ASSERT_TYPE_ASSERT, "(req->voice->submixDef == req->def)", (const char *)&queryFormat, "req->voice->submixDef == req->def") )
        __debugbreak();
      if ( _RBX->voice->submixDef->id == _RBX->id )
        return 1;
      v14 = "req->voice->submixDef->id == req->id";
      v15 = 137;
      v16 = "(req->voice->submixDef->id == req->id)";
    }
    else
    {
      if ( loadingState != SFLS_LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 141, ASSERT_TYPE_ASSERT, "(req->voice->soundFileInfo.loadingState == SFLS_LOADING)", (const char *)&queryFormat, "req->voice->soundFileInfo.loadingState == SFLS_LOADING") )
        __debugbreak();
      submixRef = _RBX->voice->submixRef;
      if ( submixRef != _RBX && submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 142, ASSERT_TYPE_ASSERT, "(req->voice->submixRef == req || req->voice->submixRef == nullptr)", (const char *)&queryFormat, "req->voice->submixRef == req || req->voice->submixRef == nullptr") )
        __debugbreak();
      if ( _RBX->voice->submixDef != _RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 143, ASSERT_TYPE_ASSERT, "(req->voice->submixDef == req->def)", (const char *)&queryFormat, "req->voice->submixDef == req->def") )
        __debugbreak();
      if ( _RBX->voice->submixDef->id == _RBX->id )
        return 1;
      v14 = "req->voice->submixDef->id == req->id";
      v15 = 144;
      v16 = "(req->voice->submixDef->id == req->id)";
    }
    goto LABEL_73;
  }
  if ( voice->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 130, ASSERT_TYPE_ASSERT, "(req->voice->submixRef == nullptr)", (const char *)&queryFormat, "req->voice->submixRef == nullptr") )
    __debugbreak();
  if ( _RBX->voice->submixDef )
  {
    v14 = "req->voice->submixDef == nullptr";
    v15 = 131;
    v16 = "(req->voice->submixDef == nullptr)";
    goto LABEL_73;
  }
  return 1;
}

/*
==============
SND_SubmixCaculateFadeInTime
==============
*/

float __fastcall SND_SubmixCaculateFadeInTime(const SndDuck *def, double fadeTimeSec)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1556, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixCalculateAmplitudeFromVoiceAsset
==============
*/
float SND_SubmixCalculateAmplitudeFromVoiceAsset(const SndVoice *const voice)
{
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _R13 = voice;
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1522, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( !_R13->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1523, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  if ( !_R13->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1524, ASSERT_TYPE_ASSERT, "(voice->submixDef)", (const char *)&queryFormat, "voice->submixDef") )
    __debugbreak();
  if ( !_R13->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1525, ASSERT_TYPE_ASSERT, "(voice->submixRef)", (const char *)&queryFormat, "voice->submixRef") )
    __debugbreak();
  if ( !_R13->submixRef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1526, ASSERT_TYPE_ASSERT, "(voice->submixRef->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "voice->submixRef->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( _R13->submixRef->id != _R13->submixDef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1527, ASSERT_TYPE_ASSERT, "(voice->submixRef->id == voice->submixDef->id)", (const char *)&queryFormat, "voice->submixRef->id == voice->submixDef->id") )
    __debugbreak();
  if ( !_R13->assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1529, ASSERT_TYPE_ASSERT, "(voice->assetEntry)", (const char *)&queryFormat, "voice->assetEntry") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [r13+2Ch]
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixCalculateDistanceFromVoicePosition
==============
*/
float SND_SubmixCalculateDistanceFromVoicePosition(const SndVoice *const voice)
{
  int v7; 
  vec3_t to; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1644, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( !voice->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1645, ASSERT_TYPE_ASSERT, "(voice->submixDef)", (const char *)&queryFormat, "voice->submixDef") )
    __debugbreak();
  if ( !voice->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1646, ASSERT_TYPE_ASSERT, "(voice->submixRef)", (const char *)&queryFormat, "voice->submixRef") )
    __debugbreak();
  if ( !voice->submixRef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1647, ASSERT_TYPE_ASSERT, "(voice->submixRef->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "voice->submixRef->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( voice->submixRef->id != voice->submixDef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1648, ASSERT_TYPE_ASSERT, "(voice->submixRef->id == voice->submixDef->id)", (const char *)&queryFormat, "voice->submixRef->id == voice->submixDef->id") )
    __debugbreak();
  if ( !voice->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1650, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  if ( !SND_IsAliasSpatial(voice->alias) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1651, ASSERT_TYPE_ASSERT, "(SND_IsAliasSpatial( voice->alias ))", (const char *)&queryFormat, "SND_IsAliasSpatial( voice->alias )") )
    __debugbreak();
  GetSecureSndVec3(&voice->org.origin, &to, s_soundvoiceorg_aab_X, s_soundvoiceorg_aab_Y, s_soundvoiceorg_aab_Z);
  *(double *)&_XMM0 = SND_DistSqToNearestListener(&to);
  __asm
  {
    vmovss  [rsp+68h+var_38], xmm0
    vmovaps xmm6, xmm0
  }
  if ( (v7 & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1657, ASSERT_TYPE_ASSERT, "(!IS_NAN( distance ))", (const char *)&queryFormat, "!IS_NAN( distance )") )
      __debugbreak();
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixCalculateEffectIfAny
==============
*/
bool SND_SubmixCalculateEffectIfAny(const SndSubmixReq *const req, float *effect)
{
  bool result; 
  unsigned int endTime; 
  bool v25; 
  bool v26; 
  bool v31; 
  bool v32; 
  unsigned int fadeOutCurve; 
  char v43; 
  char v44; 
  char v48; 
  char v49; 
  char v54; 
  char v55; 
  const SndVoice *voice; 
  bool v62; 
  bool v63; 
  bool v64; 
  const SndDuck *def; 
  char v77; 
  bool v78; 
  double v90; 
  double v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  double v104; 
  int v113; 

  _RDI = effect;
  _RBX = req;
  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1259, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1260, ASSERT_TYPE_ASSERT, "(effect)", (const char *)&queryFormat, "effect") )
    __debugbreak();
  if ( _RBX->type == -3 )
  {
    *_RDI = 1.0;
    return 0;
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3a83126f
    vmovaps [rsp+0C8h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+0C8h+var_28], xmm7
    vmovaps [rsp+0C8h+var_38], xmm8
    vmovaps [rsp+0C8h+var_48], xmm9
    vmovaps [rsp+0C8h+var_58], xmm10
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  endTime = _RBX->endTime;
  __asm
  {
    vmovaps [rsp+0C8h+var_68], xmm11
    vmovaps [rsp+0C8h+var_78], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovsd  xmm12, cs:__real@3ff0000000000000
    vmulss  xmm0, xmm0, xmm1
    vsubss  xmm7, xmm0, dword ptr [rdx+4Ch]
    vmovaps xmm9, xmm6
    vxorpd  xmm13, xmm13, xmm13
    vxorps  xmm8, xmm8, xmm8
  }
  v25 = 0;
  if ( !endTime )
    goto LABEL_29;
  v25 = g_snd.time < endTime;
  v26 = g_snd.time <= endTime;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm11, xmm0, xmm1
    vcomiss xmm11, xmm8
  }
  if ( g_snd.time <= endTime )
  {
LABEL_29:
    __asm { vcomiss xmm7, xmm8 }
    if ( v25 )
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
LABEL_37:
      voice = _RBX->voice;
      if ( voice )
      {
        _RAX = _RBX->def;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+54h]
          vcomiss xmm0, cs:__real@37803e84
        }
        *(float *)&_XMM0 = SND_SubmixCalculateDistanceFromVoicePosition(voice);
        __asm
        {
          vmovss  [rsp+0C8h+arg_0], xmm0
          vmovaps xmm9, xmm0
        }
        v62 = (v113 & 0x7F800000u) < 0x7F800000;
        v63 = (v113 & 0x7F800000u) <= 0x7F800000;
        if ( (v113 & 0x7F800000) == 2139095040 )
        {
          v64 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1332, ASSERT_TYPE_ASSERT, "(!IS_NAN( distance ))", (const char *)&queryFormat, "!IS_NAN( distance )");
          v62 = 0;
          v63 = !v64;
          if ( v64 )
            __debugbreak();
        }
        _RAX = _RBX->def;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+50h]
          vmovss  xmm2, dword ptr [rax+54h]
          vmulss  xmm0, xmm0, xmm0
          vcomiss xmm9, xmm0
        }
        if ( v62 )
        {
          __asm { vmovaps xmm9, xmm6 }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm2, xmm2
            vcomiss xmm9, xmm0
          }
          if ( v62 )
          {
            __asm
            {
              vsqrtss xmm1, xmm9, xmm9
              vdivss  xmm0, xmm6, xmm2
              vmulss  xmm1, xmm1, xmm0
              vsubss  xmm9, xmm6, xmm1
              vcomiss xmm9, xmm8
              vcomiss xmm9, xmm6
            }
            if ( !v63 )
            {
              __asm
              {
                vmovsd  [rsp+0C8h+var_90], xmm12
                vcvtss2sd xmm0, xmm9, xmm9
                vmovsd  [rsp+0C8h+var_98], xmm13
                vmovsd  [rsp+0C8h+var_A0], xmm0
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1350, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( distanceEffect ) && ( distanceEffect ) <= ( 1.0f )", "distanceEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v93, v98, v103) )
                __debugbreak();
            }
          }
          else
          {
            __asm { vxorps  xmm9, xmm9, xmm9 }
          }
        }
        def = _RBX->def;
        __asm { vmovaps xmm0, xmm6 }
        v77 = 0;
        v78 = !def->trackAmplitude;
        if ( def->trackAmplitude )
          SND_SubmixCalculateAmplitudeFromVoiceAsset(_RBX->voice);
        __asm
        {
          vminss  xmm1, xmm9, xmm7
          vmulss  xmm2, xmm1, dword ptr [rbx+20h]
          vmulss  xmm7, xmm2, xmm0
          vcomiss xmm7, xmm8
        }
        if ( v77 )
          goto LABEL_53;
        __asm { vcomiss xmm7, xmm6 }
        if ( !(v77 | v78) )
        {
LABEL_53:
          __asm
          {
            vmovsd  [rsp+0C8h+var_90], xmm12
            vcvtss2sd xmm0, xmm7, xmm7
            vmovsd  [rsp+0C8h+var_98], xmm13
            vmovsd  [rsp+0C8h+var_A0], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1382, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( finalEffect ) && ( finalEffect ) <= ( 1.0f )", "finalEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v94, v99, v104) )
            __debugbreak();
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm7, xmm7, dword ptr [rbx+20h]
          vcomiss xmm7, xmm8
          vcomiss xmm7, xmm6
        }
      }
      __asm { vmovss  dword ptr [rdi], xmm7 }
      result = 1;
      goto LABEL_56;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vcomiss xmm7, xmm0
    }
    if ( !v25 )
    {
      __asm { vmovaps xmm7, xmm6 }
      goto LABEL_37;
    }
    __asm { vdivss  xmm1, xmm7, xmm0; t }
    *(double *)&_XMM0 = SND_SubmixFade(_RBX->def->fadeInCurve, *(float *)&_XMM1);
    __asm
    {
      vcomiss xmm0, xmm8
      vmovaps xmm7, xmm0
    }
    if ( !v54 )
    {
      __asm { vcomiss xmm0, xmm6 }
      if ( v54 | v55 )
        goto LABEL_37;
    }
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm12
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0C8h+var_98], xmm13
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1314, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeEffect ) && ( timeEffect ) <= ( 1.0f )", "timeEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v92, v97, v102) )
      goto LABEL_37;
LABEL_35:
    __debugbreak();
    goto LABEL_37;
  }
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+1Ch]
    vcomiss xmm10, xmm8
  }
  if ( g_snd.time < endTime )
  {
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1278, ASSERT_TYPE_ASSERT, "(fadeOut >= 0.0f)", (const char *)&queryFormat, "fadeOut >= 0.0f");
    v25 = 0;
    v26 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v25 )
  {
    __asm { vcomiss xmm11, xmm10 }
    if ( v26 )
    {
      __asm { vcomiss xmm10, xmm8 }
      if ( v26 )
      {
        v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1287, ASSERT_TYPE_ASSERT, "(fadeOut > 0.0f)", (const char *)&queryFormat, "fadeOut > 0.0f");
        v25 = 0;
        if ( v32 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vcomiss xmm7, xmm0
        vdivss  xmm3, xmm6, xmm10
      }
      fadeOutCurve = _RBX->def->fadeOutCurve;
      if ( v25 )
      {
        __asm
        {
          vdivss  xmm0, xmm7, xmm0
          vsubss  xmm0, xmm6, xmm0
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm2, xmm1, xmm11
          vmulss  xmm3, xmm2, xmm3
          vsubss  xmm0, xmm6, xmm3
          vmaxss  xmm1, xmm0, xmm8; t
        }
        *(double *)&_XMM0 = SND_SubmixFade(fadeOutCurve, *(float *)&_XMM1);
        __asm
        {
          vmaxss  xmm7, xmm0, xmm8
          vcomiss xmm7, xmm8
        }
        if ( !v43 )
        {
          __asm { vcomiss xmm7, xmm6 }
          if ( v43 | v44 )
            goto LABEL_37;
        }
        __asm
        {
          vmovsd  [rsp+0C8h+var_90], xmm12
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+0C8h+var_98], xmm13
          vmovsd  [rsp+0C8h+var_A0], xmm0
        }
        if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1299, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeEffect ) && ( timeEffect ) <= ( 1.0f )", "timeEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v90, v95, v100) )
          goto LABEL_37;
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm3, xmm11
          vsubss  xmm1, xmm6, xmm0; t
        }
        *(double *)&_XMM0 = SND_SubmixFade(fadeOutCurve, *(float *)&_XMM1);
        __asm
        {
          vcomiss xmm0, xmm8
          vmovaps xmm7, xmm0
        }
        if ( !v48 )
        {
          __asm { vcomiss xmm0, xmm6 }
          if ( v48 | v49 )
            goto LABEL_37;
        }
        __asm
        {
          vmovsd  [rsp+0C8h+var_90], xmm12
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  [rsp+0C8h+var_98], xmm13
          vmovsd  [rsp+0C8h+var_A0], xmm1
        }
        if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1304, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeEffect ) && ( timeEffect ) <= ( 1.0f )", "timeEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v91, v96, v101) )
          goto LABEL_37;
      }
      goto LABEL_35;
    }
  }
  *_RDI = 0.0;
  result = 0;
LABEL_56:
  __asm
  {
    vmovaps xmm12, [rsp+0C8h+var_78]
    vmovaps xmm11, [rsp+0C8h+var_68]
    vmovaps xmm10, [rsp+0C8h+var_58]
    vmovaps xmm9, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_38]
    vmovaps xmm7, [rsp+0C8h+var_28]
    vmovaps xmm6, [rsp+0C8h+var_18]
    vmovaps xmm13, [rsp+0C8h+var_88]
  }
  return result;
}

/*
==============
SND_SubmixClearAll
==============
*/

void __fastcall SND_SubmixClearAll(double fadeTimeSec)
{
  unsigned int v2; 

  v2 = 0;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  do
  {
    __asm { vmovaps xmm1, xmm6; fadeTimeSec }
    SND_SubmixClearForFade(&s_sndSubmix.requests[v2++], *(const float *)&_XMM1);
  }
  while ( v2 < 0x8D );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
SND_SubmixClearAllFromSource
==============
*/

void __fastcall SND_SubmixClearAllFromSource(SndSubmixType source, double fadeTimeSec)
{
  unsigned int v7; 
  volatile int *p_type; 
  int v12; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( (unsigned int)source >= SND_SUBMIX_TYPE_COUNT )
  {
    v12 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( SND_SUBMIX_TYPE_COUNT )", "source doesn't index SND_SUBMIX_TYPE_COUNT\n\t%i not in [0, %i)", source, v12) )
      __debugbreak();
  }
  v7 = 0;
  p_type = &s_sndSubmix.requests[0].type;
  do
  {
    if ( *p_type == source )
    {
      __asm { vmovaps xmm1, xmm6; fadeTimeSec }
      SND_SubmixClearForFade((SndSubmixReq *)(p_type - 1), *(const float *)&_XMM1);
    }
    ++v7;
    p_type += 12;
  }
  while ( v7 < 0x8D );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
SND_SubmixClearForFade
==============
*/

void __fastcall SND_SubmixClearForFade(SndSubmixReq *req, double fadeTimeSec)
{
  const SndDuck *def; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = req;
  __asm { vmovaps xmm6, xmm1 }
  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 570, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( _RBX->type != -3 )
  {
    def = _RBX->def;
    __asm { vmovaps [rsp+58h+var_28], xmm7 }
    _RBX->endTime = g_snd.time;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1570, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm6, xmm7
      vcomiss xmm6, xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rbx+1Ch], xmm6
    }
    if ( !SND_SubmixAssert(_RBX, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 577, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
SND_SubmixClearFromSource
==============
*/

void __fastcall SND_SubmixClearFromSource(SndSubmixType source, unsigned int id, double fadeTimeSec)
{
  unsigned int v9; 
  volatile int *p_type; 
  __int64 v13; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 635, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( (unsigned int)source >= SND_SUBMIX_TYPE_COUNT )
  {
    LODWORD(v13) = source;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 637, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( SND_SUBMIX_TYPE_COUNT )", "source doesn't index SND_SUBMIX_TYPE_COUNT\n\t%i not in [0, %i)", v13, 7) )
      __debugbreak();
  }
  v9 = 0;
  p_type = &s_sndSubmix.requests[0].type;
  while ( 1 )
  {
    if ( *p_type == source )
    {
      if ( *p_type == -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 646, ASSERT_TYPE_ASSERT, "(!SND_SubmixIsExpired( req ))", (const char *)&queryFormat, "!SND_SubmixIsExpired( req )") )
        __debugbreak();
      if ( *(_DWORD *)(*(_QWORD *)(p_type + 1) + 64i64) == id )
        break;
    }
    ++v9;
    p_type += 12;
    if ( v9 >= 0x8D )
      goto LABEL_16;
  }
  __asm { vmovaps xmm1, xmm6; fadeTimeSec }
  SND_SubmixClearForFade((SndSubmixReq *)(p_type - 1), *(double *)&_XMM1);
LABEL_16:
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
SND_SubmixClearFromVoiceAlias
==============
*/
void SND_SubmixClearFromVoiceAlias(unsigned int id)
{
  unsigned int v4; 
  volatile int *p_type; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 614, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@bf800000 }
  v4 = 0;
  p_type = &s_sndSubmix.requests[0].type;
  do
  {
    if ( *p_type == 3 )
    {
      if ( *p_type == -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 623, ASSERT_TYPE_ASSERT, "(!SND_SubmixIsExpired( req ))", (const char *)&queryFormat, "!SND_SubmixIsExpired( req )") )
        __debugbreak();
      if ( *(_DWORD *)(*(_QWORD *)(p_type + 1) + 64i64) == id )
      {
        __asm { vmovaps xmm1, xmm6; fadeTimeSec }
        SND_SubmixClearForFade((SndSubmixReq *)(p_type - 1), *(double *)&_XMM1);
      }
    }
    ++v4;
    p_type += 12;
  }
  while ( v4 < 0x8D );
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
SND_SubmixDebugDumpActive_f
==============
*/
void SND_SubmixDebugDumpActive_f()
{
  unsigned int v0; 
  SndSubmixReq *requests; 
  unsigned int i; 
  const char *v3; 
  const SndDuck *DuckById; 
  volatile int *p_type; 
  unsigned int v6; 
  const char *v7; 
  const SndDuck *v8; 
  unsigned int v9; 
  unsigned int v10; 
  _DWORD *v11; 
  __int64 v12; 
  __int64 v13; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_OCCLUSION);
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SOUND_VOICE_UPDATE);
  v0 = 0;
  requests = s_sndSubmix.requests;
  for ( i = 0; i < 0x8D; ++i )
  {
    if ( !requests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1870, ASSERT_TYPE_ASSERT, "(sub)", (const char *)&queryFormat, "sub") )
      __debugbreak();
    if ( requests->id )
    {
      DuckById = SND_GetDuckById(requests->id);
      v3 = "NOT_FOUND";
      if ( DuckById )
        v3 = (const char *)DuckById;
    }
    else
    {
      v3 = "INVALID";
    }
    Com_Printf(0, "%3d: type %s def %s\n", i, "fixme", v3);
    ++requests;
  }
  p_type = &s_sndSubmix.requests[0].type;
  do
  {
    if ( v0 >= 0x8D )
    {
      LODWORD(v13) = 141;
      LODWORD(v12) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.requests ) ) + 0 ) )", "idx doesn't index s_sndSubmix.requests\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( p_type == (volatile int *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1883, ASSERT_TYPE_ASSERT, "(sub)", (const char *)&queryFormat, "sub") )
      __debugbreak();
    v6 = *((_DWORD *)p_type - 1);
    if ( v6 )
    {
      v8 = SND_GetDuckById(v6);
      v7 = "NOT_FOUND";
      if ( v8 )
        v7 = (const char *)v8;
    }
    else
    {
      v7 = "INVALID";
    }
    v9 = v0 + 1;
    v10 = v0 + 1;
    if ( v0 + 1 < 0x8D )
    {
      v11 = p_type + 11;
      if ( v10 >= 0x8D )
      {
        LODWORD(v13) = 141;
        LODWORD(v12) = v0 + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.requests ) ) + 0 ) )", "idx doesn't index s_sndSubmix.requests\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      do
      {
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1894, ASSERT_TYPE_ASSERT, "(otherSubmix)", (const char *)&queryFormat, "otherSubmix") )
          __debugbreak();
        if ( *v11 == v6 )
          Com_Printf(0, "Submixes %3d and 3%d are dupes for duck \"%s\"\n", v0, v10, v7);
        ++v10;
        v11 += 12;
      }
      while ( v10 < 0x8D );
      v9 = v0 + 1;
    }
    p_type += 12;
    v0 = v9;
  }
  while ( v9 < 0x8D );
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_SubmixDebugGetData
==============
*/
char SND_SubmixDebugGetData(const int idx, int *type, unsigned int *id, float *effect, float *maxAttnLinear, float *minCutoffLpfHz, float *maxCutoffHpfHz)
{
  SndSubmixReq *Request; 
  SndSubmixReq *v14; 
  __int64 v17; 
  int v18; 
  __int64 v21; 
  unsigned __int64 v28; 
  int v37; 
  __int64 v41; 
  unsigned __int64 v48; 
  int v60; 
  unsigned __int64 v70; 

  if ( idx < 0 )
    return 0;
  if ( (unsigned int)idx >= 0x8D )
    return 0;
  Request = SND_SubmixGetRequest(idx);
  v14 = Request;
  if ( !Request || Request->type == -3 )
    return 0;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( type )
    *type = Request->type;
  if ( id )
    *id = Request->id;
  if ( effect )
    *effect = Request->effect;
  _RSI = maxAttnLinear;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  v17 = 0i64;
  if ( maxAttnLinear )
  {
    if ( !Request->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1941, ASSERT_TYPE_ASSERT, "(req->def)", (const char *)&queryFormat, "req->def") )
      __debugbreak();
    if ( !v14->def->attenuation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1942, ASSERT_TYPE_ASSERT, "(req->def->attenuation)", (const char *)&queryFormat, "req->def->attenuation") )
      __debugbreak();
    v18 = 0;
    __asm { vmovaps xmm1, xmm6 }
    _R9 = v14->def->attenuation;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      __asm
      {
        vmovups xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmm1, xmm2
      }
      v21 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4]
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4+10h]
        }
        v21 += 8i64;
        v18 += 8;
      }
      while ( v21 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm1, xmm0, xmm1
        vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
        vminss  xmm1, xmm1, xmm0
      }
    }
    _RCX = v18;
    if ( v18 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v18 >= 4 )
      {
        _R8 = (__int64)&_R9[v18 + 2];
        v28 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v18 - 4) >> 2) + 1;
        _RCX = v18 + 4 * v28;
        do
        {
          __asm { vmovss  xmm0, dword ptr [r8-8] }
          _R8 += 16i64;
          __asm
          {
            vminss  xmm2, xmm0, xmm1
            vmovss  xmm1, dword ptr [r8-14h]
            vmovss  xmm0, dword ptr [r8-10h]
            vminss  xmm3, xmm1, xmm2
            vmovss  xmm1, dword ptr [r8-0Ch]
            vminss  xmm2, xmm0, xmm3
            vminss  xmm1, xmm1, xmm2
          }
          --v28;
        }
        while ( v28 );
      }
      while ( _RCX < s_sndSubmix.volmod_groupcount )
      {
        __asm { vmovss  xmm0, dword ptr [r9+rcx*4] }
        ++_RCX;
        __asm { vminss  xmm1, xmm0, xmm1 }
      }
    }
    __asm { vmovss  dword ptr [rsi], xmm1 }
  }
  _RSI = minCutoffLpfHz;
  if ( minCutoffLpfHz )
  {
    if ( !v14->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1954, ASSERT_TYPE_ASSERT, "(req->def)", (const char *)&queryFormat, "req->def") )
      __debugbreak();
    if ( !v14->def->lpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1955, ASSERT_TYPE_ASSERT, "(req->def->lpf)", (const char *)&queryFormat, "req->def->lpf") )
      __debugbreak();
    v37 = 0;
    _R9 = v14->def->lpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      __asm
      {
        vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmm2, xmm1
      }
      v41 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4]
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4+10h]
        }
        v41 += 8i64;
        v37 += 8;
      }
      while ( v41 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm1, xmm2
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm6, xmm6, 0F5h ; 'õ'
        vminss  xmm6, xmm6, xmm0
      }
    }
    _RCX = v37;
    if ( v37 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v37 >= 4 )
      {
        _R8 = (__int64)&_R9[v37 + 2];
        v48 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v37 - 4) >> 2) + 1;
        _RCX = v37 + 4 * v48;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r8-8]
            vmovss  xmm1, dword ptr [r8-4]
          }
          _R8 += 16i64;
          __asm
          {
            vminss  xmm2, xmm0, xmm6
            vmovss  xmm0, dword ptr [r8-10h]
            vminss  xmm3, xmm1, xmm2
            vmovss  xmm1, dword ptr [r8-0Ch]
            vminss  xmm2, xmm0, xmm3
            vminss  xmm6, xmm1, xmm2
          }
          --v48;
        }
        while ( v48 );
      }
      while ( _RCX < s_sndSubmix.volmod_groupcount )
      {
        __asm { vmovss  xmm0, dword ptr [r9+rcx*4] }
        ++_RCX;
        __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, cs:__real@46bb8000
      vmovss  dword ptr [rsi], xmm2
    }
  }
  _RSI = maxCutoffHpfHz;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  if ( maxCutoffHpfHz )
  {
    if ( !v14->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1971, ASSERT_TYPE_ASSERT, "(req->def)", (const char *)&queryFormat, "req->def") )
      __debugbreak();
    if ( !v14->def->hpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1972, ASSERT_TYPE_ASSERT, "(req->def->hpf)", (const char *)&queryFormat, "req->def->hpf") )
      __debugbreak();
    v60 = 0;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    _R8 = v14->def->hpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
      do
      {
        __asm
        {
          vmaxps  xmm2, xmm2, xmmword ptr [r8+rbx*4]
          vmaxps  xmm1, xmm1, xmmword ptr [r8+rbx*4+10h]
        }
        v17 += 8i64;
        v60 += 8;
      }
      while ( v17 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vmaxps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vmaxps  xmm1, xmm0, xmm1
        vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
        vmaxss  xmm1, xmm1, xmm0
      }
    }
    _RCX = v60;
    if ( v60 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v60 >= 4 )
      {
        _RAX = (__int64)&_R8[v60 + 2];
        v70 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v60 - 4) >> 2) + 1;
        _RCX += 4 * v70;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax-8]
            vmaxss  xmm2, xmm0, xmm1
            vmovss  xmm1, dword ptr [rax-4]
            vmovss  xmm0, dword ptr [rax]
            vmaxss  xmm3, xmm1, xmm2
            vmovss  xmm1, dword ptr [rax+4]
          }
          _RAX += 16i64;
          __asm
          {
            vmaxss  xmm2, xmm0, xmm3
            vmaxss  xmm1, xmm1, xmm2
          }
          --v70;
        }
        while ( v70 );
      }
      while ( _RCX < s_sndSubmix.volmod_groupcount )
      {
        __asm { vmovss  xmm0, dword ptr [r8+rcx*4] }
        ++_RCX;
        __asm { vmaxss  xmm1, xmm0, xmm1 }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@46bb8000
      vmovss  dword ptr [rsi], xmm0
    }
  }
  return 1;
}

/*
==============
SND_SubmixDebugGetDataUnique
==============
*/
char SND_SubmixDebugGetDataUnique(const int idx, int *type, unsigned int *id, float *effect, float *maxAttnLinear, float *minCutoffLpfHz, float *maxCutoffHpfHz)
{
  __int64 v10; 
  const SndDuck *def; 
  __int64 v12; 
  int v15; 
  __int64 v18; 
  unsigned __int64 v25; 
  int v33; 
  __int64 v37; 
  unsigned __int64 v44; 
  int v56; 
  unsigned __int64 v66; 

  if ( idx < 0 || (unsigned int)idx >= 0x8D )
    return 0;
  v10 = idx;
  if ( type )
    *type = 8;
  if ( id )
    *id = s_sndSubmix.uniques[idx].id;
  if ( effect )
    *effect = s_sndSubmix.uniques[idx].effect;
  def = s_sndSubmix.uniques[idx].def;
  if ( !def )
    return 0;
  v12 = 0i64;
  _RSI = maxAttnLinear;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovss  xmm6, cs:__real@3f800000
  }
  if ( maxAttnLinear )
  {
    if ( !def->attenuation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2015, ASSERT_TYPE_ASSERT, "(sub->def->attenuation)", (const char *)&queryFormat, "sub->def->attenuation") )
      __debugbreak();
    v15 = 0;
    __asm { vmovaps xmm1, xmm6 }
    _R9 = s_sndSubmix.uniques[v10].def->attenuation;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      __asm
      {
        vmovups xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmm1, xmm2
      }
      v18 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4]
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4+10h]
        }
        v18 += 8i64;
        v15 += 8;
      }
      while ( v18 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm1, xmm0, xmm1
        vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
        vminss  xmm1, xmm1, xmm0
      }
    }
    _RCX = v15;
    if ( v15 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v15 >= 4 )
      {
        _RDX = (__int64)&_R9[v15 + 2];
        v25 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - _RCX - 4) >> 2) + 1;
        _RCX += 4 * v25;
        do
        {
          __asm { vmovss  xmm0, dword ptr [rdx-8] }
          _RDX += 16i64;
          __asm
          {
            vminss  xmm2, xmm0, xmm1
            vmovss  xmm1, dword ptr [rdx-14h]
            vminss  xmm0, xmm1, xmm2
            vminss  xmm3, xmm0, dword ptr [rdx-10h]
            vmovss  xmm0, dword ptr [rdx-0Ch]
            vminss  xmm1, xmm0, xmm3
          }
          --v25;
        }
        while ( v25 );
      }
      while ( _RCX < s_sndSubmix.volmod_groupcount )
      {
        __asm { vmovss  xmm0, dword ptr [r9+rcx*4] }
        ++_RCX;
        __asm { vminss  xmm1, xmm0, xmm1 }
      }
    }
    __asm { vmovss  dword ptr [rsi], xmm1 }
  }
  _RSI = minCutoffLpfHz;
  if ( minCutoffLpfHz )
  {
    if ( !s_sndSubmix.uniques[v10].def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2027, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
      __debugbreak();
    if ( !s_sndSubmix.uniques[v10].def->lpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2028, ASSERT_TYPE_ASSERT, "(sub->def->lpf)", (const char *)&queryFormat, "sub->def->lpf") )
      __debugbreak();
    v33 = 0;
    _R9 = s_sndSubmix.uniques[v10].def->lpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      __asm
      {
        vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmm2, xmm1
      }
      v37 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4]
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4+10h]
        }
        v37 += 8i64;
        v33 += 8;
      }
      while ( v37 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm1, xmm2
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm6, xmm6, 0F5h ; 'õ'
        vminss  xmm6, xmm6, xmm0
      }
    }
    _RCX = v33;
    if ( v33 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v33 >= 4 )
      {
        _R8 = (__int64)&_R9[v33 + 2];
        v44 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v33 - 4) >> 2) + 1;
        _RCX = v33 + 4 * v44;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r8-8]
            vmovss  xmm1, dword ptr [r8-4]
          }
          _R8 += 16i64;
          __asm
          {
            vminss  xmm2, xmm0, xmm6
            vmovss  xmm0, dword ptr [r8-10h]
            vminss  xmm3, xmm1, xmm2
            vmovss  xmm1, dword ptr [r8-0Ch]
            vminss  xmm2, xmm0, xmm3
            vminss  xmm6, xmm1, xmm2
          }
          --v44;
        }
        while ( v44 );
      }
      while ( _RCX < s_sndSubmix.volmod_groupcount )
      {
        __asm { vmovss  xmm0, dword ptr [r9+rcx*4] }
        ++_RCX;
        __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, cs:__real@46bb8000
      vmovss  dword ptr [rsi], xmm2
    }
  }
  _RSI = maxCutoffHpfHz;
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  if ( maxCutoffHpfHz )
  {
    if ( !s_sndSubmix.uniques[v10].def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2044, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
      __debugbreak();
    if ( !s_sndSubmix.uniques[v10].def->hpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2045, ASSERT_TYPE_ASSERT, "(sub->def->hpf)", (const char *)&queryFormat, "sub->def->hpf") )
      __debugbreak();
    v56 = 0;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    _R8 = s_sndSubmix.uniques[v10].def->hpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
      do
      {
        __asm
        {
          vmaxps  xmm2, xmm2, xmmword ptr [r8+rbx*4]
          vmaxps  xmm1, xmm1, xmmword ptr [r8+rbx*4+10h]
        }
        v12 += 8i64;
        v56 += 8;
      }
      while ( v12 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vmaxps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vmaxps  xmm1, xmm0, xmm1
        vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
        vmaxss  xmm1, xmm1, xmm0
      }
    }
    _RCX = v56;
    if ( v56 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v56 >= 4 )
      {
        _RAX = (__int64)&_R8[v56 + 2];
        v66 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v56 - 4) >> 2) + 1;
        _RCX += 4 * v66;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax-8]
            vmaxss  xmm2, xmm0, xmm1
            vmovss  xmm1, dword ptr [rax-4]
            vmovss  xmm0, dword ptr [rax]
            vmaxss  xmm3, xmm1, xmm2
            vmovss  xmm1, dword ptr [rax+4]
          }
          _RAX += 16i64;
          __asm
          {
            vmaxss  xmm2, xmm0, xmm3
            vmaxss  xmm1, xmm1, xmm2
          }
          --v66;
        }
        while ( v66 );
      }
      while ( _RCX < s_sndSubmix.volmod_groupcount )
      {
        __asm { vmovss  xmm0, dword ptr [r8+rcx*4] }
        ++_RCX;
        __asm { vmaxss  xmm1, xmm0, xmm1 }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@46bb8000
      vmovss  dword ptr [rsi], xmm0
    }
  }
  return 1;
}

/*
==============
SND_SubmixDebugGetNameForId
==============
*/
const SndDuck *SND_SubmixDebugGetNameForId(unsigned int id)
{
  const SndDuck *result; 

  if ( !id )
    return (const SndDuck *)"INVALID";
  result = SND_GetDuckById(id);
  if ( !result )
    return (const SndDuck *)"NOT_FOUND";
  return result;
}

/*
==============
SND_SubmixDebugGetNameForSlot
==============
*/
const SndDuck *SND_SubmixDebugGetNameForSlot(SndSubmixType slot)
{
  SndSubmixReq *v1; 
  const SndDuck *DuckById; 
  const char *v4; 

  v1 = SND_SubmixFindSlot(slot);
  if ( !v1 )
    return (const SndDuck *)"NONE";
  if ( !v1->id )
    return (const SndDuck *)"INVALID";
  DuckById = SND_GetDuckById(v1->id);
  v4 = "NOT_FOUND";
  if ( DuckById )
    return DuckById;
  return (const SndDuck *)v4;
}

/*
==============
SND_SubmixDebugGetZones
==============
*/
void SND_SubmixDebugGetZones(unsigned int *zoneA, float *lerpA, unsigned int *zoneB, float *lerpB)
{
  unsigned int v6; 
  unsigned int id; 

  v6 = 0;
  if ( zoneA )
  {
    if ( s_sndSubmix.requestsForZones[0] )
      id = s_sndSubmix.requestsForZones[0]->id;
    else
      id = 0;
    *zoneA = id;
  }
  if ( zoneB )
  {
    if ( s_sndSubmix.requestsForZones[1] )
      v6 = s_sndSubmix.requestsForZones[1]->id;
    *zoneB = v6;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( lerpA )
  {
    _RAX = s_sndSubmix.requestsForZones[0];
    if ( s_sndSubmix.requestsForZones[0] )
      __asm { vmovss  xmm1, dword ptr [rax+20h] }
    else
      __asm { vxorps  xmm1, xmm1, xmm1 }
    __asm { vmovss  dword ptr [rdx], xmm1 }
  }
  if ( lerpB )
  {
    _RAX = s_sndSubmix.requestsForZones[1];
    if ( s_sndSubmix.requestsForZones[1] )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+20h]
        vmovss  dword ptr [r9], xmm0
      }
    }
    else
    {
      if ( s_sndSubmix.requestsForZones[0] )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vsubss  xmm0, xmm0, dword ptr [rax+20h]
        }
      }
      __asm { vmovss  dword ptr [r9], xmm0 }
    }
  }
}

/*
==============
SND_SubmixFade
==============
*/

float __fastcall SND_SubmixFade(unsigned int fadeType, double t)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( fadeType == g_snd.logFastHash )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000
      vsubss  xmm1, xmm3, xmm6
      vmulss  xmm0, xmm1, xmm1
      vmulss  xmm2, xmm0, xmm1
      vsubss  xmm0, xmm3, xmm2
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else if ( fadeType == g_snd.logSlowHash )
  {
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm0, xmm0, xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else if ( fadeType == g_snd.flatEndedHash )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm2, xmm0, xmm6
      vmulss  xmm4, xmm6, xmm6
      vmulss  xmm1, xmm4, cs:__real@40400000
      vmulss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm6
      vaddss  xmm0, xmm3, xmm0
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else if ( fadeType == g_snd.flatMiddleHash )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmulss  xmm2, xmm6, cs:__real@40400000
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm3, xmm1, xmm1
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm0, xmm4, xmm1
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixFindAvailable
==============
*/
SndSubmixReq *SND_SubmixFindAvailable()
{
  int v0; 
  volatile int *i; 

  v0 = 0;
  for ( i = &s_sndSubmix.requests[0].type; ; i += 12 )
  {
    if ( *i == -3 )
    {
      if ( ((unsigned __int8)i & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)i) )
        __debugbreak();
      if ( _InterlockedCompareExchange(i, -2, -3) == -3 )
        break;
    }
    if ( (unsigned int)++v0 >= 0x8D )
      return 0i64;
  }
  return (SndSubmixReq *)(i - 1);
}

/*
==============
SND_SubmixFindSlot
==============
*/
SndSubmixReq *SND_SubmixFindSlot(const int slot)
{
  int v1; 
  SndSubmixReq *i; 
  int v6; 

  v1 = 0;
  if ( (unsigned int)slot > 2 )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 393, ASSERT_TYPE_ASSERT, "( 0 ) <= ( slot ) && ( slot ) <= ( SND_SUBMIX_SLOT_COUNT )", "slot not in [0, SND_SUBMIX_SLOT_COUNT]\n\t%i not in [%i, %i]", slot, 0i64, v6) )
      __debugbreak();
  }
  for ( i = s_sndSubmix.requests; i->type != slot; ++i )
  {
    if ( (unsigned int)++v1 >= 0x8D )
      return 0i64;
  }
  if ( !SND_SubmixAssert(i, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 399, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
    __debugbreak();
  return i;
}

/*
==============
SND_SubmixGetHpFilterValue
==============
*/
float SND_SubmixGetHpFilterValue(const int volmodIndex)
{
  __int64 v5; 
  int v7; 
  int volmod_groupcount; 

  _RBX = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v7 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.hpfFilterValue ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.hpfFilterValue\n\t%i not in [0, %i)", volmodIndex, v7) )
      __debugbreak();
  }
  if ( (int)_RBX < 0 || (int)_RBX > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v5) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 274, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v5, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  _RCX = s_sndSubmix.hpfFilterValue;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixGetLpFilterValue
==============
*/
float SND_SubmixGetLpFilterValue(const int volmodIndex)
{
  __int64 v5; 
  int v7; 
  int volmod_groupcount; 

  _RBX = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v7 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 265, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.lpfFilterValue ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.lpfFilterValue\n\t%i not in [0, %i)", volmodIndex, v7) )
      __debugbreak();
  }
  if ( (int)_RBX < 0 || (int)_RBX > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v5) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 266, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v5, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  _RCX = s_sndSubmix.lpfFilterValue;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixGetRequest
==============
*/
SndSubmixReq *SND_SubmixGetRequest(int idx)
{
  __int64 v1; 
  int v4; 

  v1 = idx;
  if ( (unsigned int)idx >= 0x8D )
  {
    v4 = 141;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.requests ) ) + 0 ) )", "idx doesn't index s_sndSubmix.requests\n\t%i not in [0, %i)", idx, v4) )
      __debugbreak();
  }
  return &s_sndSubmix.requests[v1];
}

/*
==============
SND_SubmixGetVolmodActiveCount
==============
*/
__int64 SND_SubmixGetVolmodActiveCount()
{
  return (unsigned int)s_sndSubmix.volmod_groupcount;
}

/*
==============
SND_SubmixGetVolmodAttenuation
==============
*/
float SND_SubmixGetVolmodAttenuation(const int volmodIndex)
{
  __int64 v5; 
  int v7; 
  int volmod_groupcount; 

  _RBX = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v7 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.attenuationValue ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.attenuationValue\n\t%i not in [0, %i)", volmodIndex, v7) )
      __debugbreak();
  }
  if ( (int)_RBX < 0 || (int)_RBX > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v5) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 282, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v5, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  _RCX = s_sndSubmix.attenuationValue;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixGetVolmodFocusAmount
==============
*/
float SND_SubmixGetVolmodFocusAmount(const int volmodIndex)
{
  __int64 v5; 
  int v7; 
  int volmod_groupcount; 

  _RBX = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v7 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.focusAmount ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.focusAmount\n\t%i not in [0, %i)", volmodIndex, v7) )
      __debugbreak();
  }
  if ( (int)_RBX < 0 || (int)_RBX > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v5) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 290, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v5, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  _RCX = s_sndSubmix.focusAmount;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixGetVolmodFocusCone
==============
*/
const FocusCone *SND_SubmixGetVolmodFocusCone(const int volmodIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 
  int volmod_groupcount; 

  v1 = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.focusCone ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.focusCone\n\t%i not in [0, %i)", volmodIndex, v5) )
      __debugbreak();
  }
  if ( (int)v1 < 0 || (int)v1 > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 306, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v3, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  return s_sndSubmix.focusCone[v1];
}

/*
==============
SND_SubmixGetVolmodFocusConeId
==============
*/
__int64 SND_SubmixGetVolmodFocusConeId(const int volmodIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 
  int volmod_groupcount; 

  v1 = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 297, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.focusConeId ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.focusConeId\n\t%i not in [0, %i)", volmodIndex, v5) )
      __debugbreak();
  }
  if ( (int)v1 < 0 || (int)v1 > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 298, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v3, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  return s_sndSubmix.focusConeId[v1];
}

/*
==============
SND_SubmixInit
==============
*/
void SND_SubmixInit(void)
{
  SND_SubmixResetGlobalState();
  Cmd_AddCommandInternal("snd_dumpSubmixActive", SND_SubmixDebugDumpActive_f, &SND_SubmixDebugDumpActive_f_VAR);
}

/*
==============
SND_SubmixRateLimit
==============
*/
void SND_SubmixRateLimit(unsigned int count, const float *rate, const float *negrate, const float *target, float *delta, float *value, const float rangeMin, const float rangeMax)
{
  const float **v11; 
  const float *v13; 
  __int64 v14; 
  float *v15; 
  float *v16; 
  bool v19; 
  __int64 v22; 
  bool v27; 
  bool v32; 
  __int64 v33; 
  bool v38; 
  __int64 v40; 
  bool v45; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  _BYTE v65[48]; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v11 = (const float **)((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64);
  *v11 = negrate;
  _RBX = (float *)target;
  v11[1] = rate;
  v13 = negrate;
  v14 = count;
  if ( ((unsigned __int8)rate & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 889, ASSERT_TYPE_ASSERT, "((((intptr_t)rate) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)rate) & 15) == 0") )
    __debugbreak();
  if ( ((unsigned __int8)v13 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 890, ASSERT_TYPE_ASSERT, "((((intptr_t)negrate) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)negrate) & 15) == 0") )
    __debugbreak();
  if ( ((unsigned __int8)_RBX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 891, ASSERT_TYPE_ASSERT, "((((intptr_t)target) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)target) & 15) == 0") )
    __debugbreak();
  v15 = delta;
  if ( ((unsigned __int8)delta & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 892, ASSERT_TYPE_ASSERT, "((((intptr_t)delta) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)delta) & 15) == 0") )
    __debugbreak();
  v16 = value;
  if ( ((unsigned __int8)value & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 893, ASSERT_TYPE_ASSERT, "((((intptr_t)value) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)value) & 15) == 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+0B8h+rangeMax]
    vmovss  xmm7, [rsp+0B8h+rangeMin]
  }
  if ( (_DWORD)v14 )
  {
    _R13 = (char *)((char *)value - (char *)_RBX);
    v19 = value <= _RBX;
    _RDI = _RBX;
    v22 = v14;
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+r13]
        vcomiss xmm7, xmm2
      }
      if ( !v19 )
        goto LABEL_57;
      __asm { vcomiss xmm2, xmm6 }
      if ( !v19 )
      {
LABEL_57:
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0B8h+var_80], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  [rsp+0B8h+var_88], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0B8h+var_90], xmm2
        }
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 898, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( value[i] ) && ( value[i] ) <= ( rangeMax )", "value[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v53, v57, v61);
        v19 = !v27;
        if ( v27 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]
        vcomiss xmm7, xmm2
      }
      if ( !v19 )
        goto LABEL_58;
      __asm { vcomiss xmm2, xmm6 }
      if ( !v19 )
      {
LABEL_58:
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0B8h+var_80], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  [rsp+0B8h+var_88], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0B8h+var_90], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 899, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( target[i] ) && ( target[i] ) <= ( rangeMax )", "target[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v54, v58, v62) )
          __debugbreak();
      }
      ++_RDI;
      v32 = v22-- == 0;
      v19 = v32 || v22 == 0;
    }
    while ( v22 );
    v16 = value;
    v15 = delta;
    v13 = *v11;
  }
  SND_DspSub(v14, _RBX, v16, v15);
  SND_DspMin(v14, v15, *(const float **)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 8), v15);
  SND_DspMax(v14, v15, v13, v15);
  if ( ((unsigned __int8)v16 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 349, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v16) )
    __debugbreak();
  if ( ((unsigned __int8)v15 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 350, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v15) )
    __debugbreak();
  if ( ((unsigned __int8)v16 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 351, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v16) )
    __debugbreak();
  if ( (v14 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 352, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v14) )
    __debugbreak();
  v33 = (unsigned int)v14 >> 3;
  if ( (unsigned int)v14 >> 3 )
  {
    _RCX = v16;
    _RAX = v16;
    do
    {
      _RCX += 8;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vaddps  ymm0, ymm0, ymmword ptr [r14+rax]
      }
      _RAX += 8;
      __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
      --v33;
    }
    while ( v33 );
  }
  if ( (_DWORD)v14 )
  {
    v32 = v16 < _RBX;
    _RSI = (char *)v16 - (char *)_RBX;
    v38 = v32 || _RSI == 0;
    v40 = v14;
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+rsi]
        vcomiss xmm7, xmm2
      }
      if ( !v38 )
        goto LABEL_59;
      __asm { vcomiss xmm2, xmm6 }
      if ( !v38 )
      {
LABEL_59:
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0B8h+var_80], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  [rsp+0B8h+var_88], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0B8h+var_90], xmm2
        }
        v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 914, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( value[i] ) && ( value[i] ) <= ( rangeMax )", "value[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v55, v59, v63);
        v38 = !v45;
        if ( v45 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]
        vcomiss xmm7, xmm2
      }
      if ( !v38 )
        goto LABEL_51;
      __asm { vcomiss xmm2, xmm6 }
      if ( !v38 )
      {
LABEL_51:
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+0B8h+var_80], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  [rsp+0B8h+var_88], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0B8h+var_90], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 915, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( target[i] ) && ( target[i] ) <= ( rangeMax )", "target[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v56, v60, v64) )
          __debugbreak();
      }
      ++_RBX;
      v32 = v40-- == 0;
      v38 = v32 || v40 == 0;
    }
    while ( v40 );
  }
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
}

/*
==============
SND_SubmixReclaim
==============
*/
void SND_SubmixReclaim(SndSubmixReq *req)
{
  SndVoice *voice; 
  volatile int *p_type; 

  if ( !SND_SubmixAssert(req, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 659, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
    __debugbreak();
  voice = req->voice;
  if ( voice )
  {
    voice->submixRef = NULL;
    req->voice->submixDef = NULL;
  }
  *(_QWORD *)&req->id = 0i64;
  req->def = NULL;
  *(_QWORD *)&req->startTime = 0i64;
  *(_QWORD *)&req->fadeInTimeSec = 0i64;
  *(_QWORD *)&req->scale = 0i64;
  req->voice = NULL;
  p_type = &req->type;
  if ( ((unsigned __int8)p_type & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_type) )
    __debugbreak();
  _InterlockedExchange(p_type, -3);
}

/*
==============
SND_SubmixResetGlobalState
==============
*/
float *SND_SubmixResetGlobalState()
{
  unsigned int *v0; 
  unsigned int i; 
  unsigned int v3; 
  SndSubmixReq **v4; 
  unsigned int v5; 
  SndSubmixReq *requests; 
  __int64 v7; 
  volatile __int32 *p_type; 
  unsigned int v9; 
  SndSubmix *uniques; 
  __int64 v11; 
  __int64 v12; 
  const FocusCone **focusCone; 
  float *result; 
  int v15; 

  v0 = &s_sndSubmix.idsForZones[1];
  for ( i = 0; i < 2; i += 2 )
  {
    *(_QWORD *)(v0 - 1) = 0i64;
    v0 += 2;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vmovss  cs:s_sndSubmix.lerpForZones, xmm0
  }
  v3 = 0;
  v4 = &s_sndSubmix.requestsForZones[1];
  do
  {
    v3 += 2;
    *(v4 - 1) = NULL;
    *v4 = NULL;
    v4 += 2;
  }
  while ( v3 < 2 );
  v5 = 0;
  requests = s_sndSubmix.requests;
  do
  {
    v7 = (int)v5;
    *(_QWORD *)&s_sndSubmix.requests[v7].id = 0i64;
    p_type = &s_sndSubmix.requests[v5].type;
    s_sndSubmix.requests[v7].def = NULL;
    *(_QWORD *)&s_sndSubmix.requests[v7].startTime = 0i64;
    *(_QWORD *)&s_sndSubmix.requests[v7].fadeInTimeSec = 0i64;
    *(_QWORD *)&s_sndSubmix.requests[v7].scale = 0i64;
    s_sndSubmix.requests[v7].voice = NULL;
    requests->id = 0;
    if ( ((unsigned __int8)p_type & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_sndSubmix.requests[v5].type) )
      __debugbreak();
    ++v5;
    ++requests;
    _InterlockedExchange(p_type, -3);
  }
  while ( v5 < 0x8D );
  v9 = 0;
  uniques = s_sndSubmix.uniques;
  do
  {
    v11 = (int)v9;
    ++uniques;
    ++v9;
    v12 = v11;
    *(_QWORD *)&s_sndSubmix.uniques[v12].id = 0i64;
    *(_QWORD *)&s_sndSubmix.uniques[v12].effect = 0i64;
    s_sndSubmix.uniques[v12].def = NULL;
    uniques[-1].id = 0;
  }
  while ( v9 < 0x8D );
  s_sndSubmix.unique_count = 0;
  focusCone = s_sndSubmix.focusCone;
  s_sndSubmix.volmod_groupcount = 128;
  result = s_sndSubmix.hpfFilterValue;
  v15 = 0;
  do
  {
    *(result - 256) = 1.0;
    ++v15;
    *result = 0.0;
    ++focusCone;
    *(result - 128) = 1.0;
    result[128] = 0.0;
    result[256] = 0.0;
    ++result;
    *(focusCone - 1) = NULL;
  }
  while ( v15 < s_sndSubmix.volmod_groupcount );
  return result;
}

/*
==============
SND_SubmixRestore
==============
*/
void SND_SubmixRestore(MemoryFile *memFile)
{
  int v3; 
  int v4; 
  unsigned int v6; 
  SndSubmixReq *v8; 
  int v9; 
  const SndDuck *DuckById; 
  int v11; 
  SndVoice *v12; 
  int v13; 
  const dvar_t *v14; 
  unsigned int *focusConeId; 
  const FocusCone **focusCone; 
  const FocusCone *FocusConeById; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  int v21[3]; 
  char v22; 
  unsigned int p; 
  unsigned int v24; 

  SND_SubmixResetGlobalState();
  MemFile_ReadData(memFile, 4ui64, &p);
  v3 = p;
  v4 = p;
  if ( p != 0x7FFFFFFF )
  {
    _RBP = &s_sndSubmix;
    v6 = p;
    while ( 1 )
    {
      if ( v6 >= 0x8D )
      {
        LODWORD(v19) = 141;
        LODWORD(v18) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.requests ) ) + 0 ) )", "idx doesn't index s_sndSubmix.requests\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      _RBX = v4;
      v8 = &s_sndSubmix.requests[_RBX];
      MemFile_ReadData(memFile, 4ui64, &v24);
      v9 = v24;
      v8->id = v24;
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 992, ASSERT_TYPE_ASSERT, "(sub->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id != SND_INVALID_HASH") )
        __debugbreak();
      if ( !v8->id )
        break;
      DuckById = SND_GetDuckById(v8->id);
      s_sndSubmix.requests[_RBX].def = DuckById;
      if ( !DuckById )
        goto LABEL_12;
LABEL_14:
      MemFile_ReadData(memFile, 1ui64, &v22);
      s_sndSubmix.requests[_RBX].type = v22;
      v11 = SND_RestoreVoiceIndex(memFile);
      if ( v11 < 0 || (unsigned __int64)v11 >= 0x63 )
      {
        if ( v11 != 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1003, ASSERT_TYPE_ASSERT, "(voiceIndex == int(2147483647))", (const char *)&queryFormat, "voiceIndex == SND_SUBMIX_NO_VOICE") )
          __debugbreak();
        v12 = NULL;
      }
      else
      {
        v12 = &g_snd.voices[v11];
      }
      s_sndSubmix.requests[_RBX].voice = v12;
      MemFile_ReadData(memFile, 4ui64, &v20);
      s_sndSubmix.requests[_RBX].startTime = v20 + g_snd.time;
      MemFile_ReadData(memFile, 4ui64, v21);
      v13 = v21[0];
      s_sndSubmix.requests[_RBX].endTime = v21[0];
      if ( v13 )
        s_sndSubmix.requests[_RBX].endTime = g_snd.time + v13;
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+rbx*8+38h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+rbx*8+3Ch], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+rbx*8+40h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      v14 = DVARBOOL_snd_submix_restore_workaround_enable;
      __asm { vmovss  dword ptr [rbp+rbx*8+44h], xmm0 }
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_restore_workaround_enable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled && !s_sndSubmix.requests[_RBX].def )
        SND_SubmixReclaim(&s_sndSubmix.requests[_RBX]);
      MemFile_ReadData(memFile, 4ui64, &p);
      v3 = p;
      v4 = p;
      v6 = p;
      if ( p == 0x7FFFFFFF )
        goto LABEL_30;
    }
    s_sndSubmix.requests[_RBX].def = NULL;
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 994, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
      __debugbreak();
    goto LABEL_14;
  }
LABEL_30:
  MemFile_ReadData(memFile, 0x200ui64, s_sndSubmix.attenuationValue);
  MemFile_ReadData(memFile, 0x200ui64, s_sndSubmix.hpfFilterValue);
  MemFile_ReadData(memFile, 0x200ui64, s_sndSubmix.lpfFilterValue);
  MemFile_ReadData(memFile, 0x200ui64, s_sndSubmix.focusAmount);
  focusConeId = s_sndSubmix.focusConeId;
  MemFile_ReadData(memFile, 0x200ui64, s_sndSubmix.focusConeId);
  focusCone = s_sndSubmix.focusCone;
  do
  {
    FocusConeById = SND_GetFocusConeById(*focusConeId++);
    *focusCone++ = FocusConeById;
  }
  while ( (__int64)focusConeId < (__int64)s_sndSubmix.focusCone );
}

/*
==============
SND_SubmixSave
==============
*/
void SND_SubmixSave(MemoryFile *memFile)
{
  unsigned int v1; 
  const SndVoice *v4; 
  int v5; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16[16]; 
  char v17; 
  unsigned int p; 
  int v19; 

  v1 = 0;
  _RBX = &s_sndSubmix.requests[0].type;
  do
  {
    if ( !SND_SubmixAssert((const SndSubmixReq *const)(_RBX - 1), 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1050, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( sub, true ))", (const char *)&queryFormat, "SND_SubmixAssert( sub, true )") )
      __debugbreak();
    if ( *_RBX != -3 && *_RBX != 1 )
    {
      p = v1;
      MemFile_WriteData(memFile, 4ui64, &p);
      v19 = *((_DWORD *)_RBX - 1);
      MemFile_WriteData(memFile, 4ui64, &v19);
      if ( *(int *)_RBX < -128 || *(int *)_RBX > 127 )
      {
        LODWORD(v12) = 127;
        LODWORD(v11) = -128;
        LODWORD(v10) = *_RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1066, ASSERT_TYPE_ASSERT, "( (-128) ) <= ( sub->type ) && ( sub->type ) <= ( 127 )", "sub->type not in [SCHAR_MIN, SCHAR_MAX]\n\t%i not in [%i, %i]", v10, v11, v12) )
          __debugbreak();
      }
      v17 = *_RBX;
      MemFile_WriteData(memFile, 1ui64, &v17);
      v4 = *(const SndVoice **)(_RBX + 9);
      if ( v4 )
      {
        SND_SaveVoiceIndex(memFile, v4);
      }
      else
      {
        v13 = 0x7FFFFFFF;
        MemFile_WriteData(memFile, 4ui64, &v13);
      }
      v14 = *((_DWORD *)_RBX + 3) - g_snd.time;
      MemFile_WriteData(memFile, 4ui64, &v14);
      v5 = 0;
      if ( *((_DWORD *)_RBX + 4) )
        v5 = *((_DWORD *)_RBX + 4) - g_snd.time;
      v15 = v5;
      MemFile_WriteData(memFile, 4ui64, &v15);
      __asm { vmovss  xmm1, dword ptr [rbx+14h]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
      __asm { vmovss  xmm1, dword ptr [rbx+18h]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
      __asm { vmovss  xmm1, dword ptr [rbx+1Ch]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
      __asm { vmovss  xmm1, dword ptr [rbx+20h]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
    }
    ++v1;
    _RBX += 12;
  }
  while ( v1 < 0x8D );
  v16[0] = 0x7FFFFFFF;
  MemFile_WriteData(memFile, 4ui64, v16);
  MemFile_WriteData(memFile, 0x200ui64, s_sndSubmix.attenuationValue);
  MemFile_WriteData(memFile, 0x200ui64, s_sndSubmix.hpfFilterValue);
  MemFile_WriteData(memFile, 0x200ui64, s_sndSubmix.lpfFilterValue);
  MemFile_WriteData(memFile, 0x200ui64, s_sndSubmix.focusAmount);
  MemFile_WriteData(memFile, 0x200ui64, s_sndSubmix.focusConeId);
}

/*
==============
SND_SubmixSetOnVoiceStart
==============
*/

void __fastcall SND_SubmixSetOnVoiceStart(SndVoice *voice, double dt)
{
  const dvar_t *v7; 
  SndSubmixReq *submixRef; 
  const char *v10; 
  int v11; 
  const char *v12; 
  SndSubmixReq *v15; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  SND_FaderUpdate(&voice->submixAttenuation, *(float *)&dt);
  __asm { vmovaps xmm1, xmm6; dt }
  SND_FaderUpdate(&voice->submixHpf, *(float *)&_XMM1);
  __asm { vmovaps xmm1, xmm6; dt }
  SND_FaderUpdate(&voice->submixLpf, *(float *)&_XMM1);
  v7 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    goto LABEL_14;
  _RCX = voice->submixDef;
  submixRef = voice->submixRef;
  if ( !_RCX )
  {
    if ( submixRef )
    {
      v10 = "voice->submixRef == nullptr";
      v11 = 1818;
      v12 = "(voice->submixRef == nullptr)";
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  if ( submixRef || voice->soundFileInfo.loadingState != SFLS_LOADED )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+54h]
    vcomiss xmm0, cs:__real@37803e84
  }
  if ( voice->soundFileInfo.loadingState > (unsigned int)SFLS_LOADED )
    goto LABEL_25;
  __asm { vcomiss xmm0, cs:__real@b7803e84 }
  if ( voice->soundFileInfo.loadingState < (unsigned int)SFLS_LOADED )
  {
LABEL_25:
    if ( !SND_IsAliasSpatial(voice->alias) )
    {
      Com_PrintError(9, "SOUND: cannot use a submix duck with distance \"%s\" on a 2d alias \"%s\"\n", voice->submixDef, voice->alias->aliasName);
      goto LABEL_14;
    }
  }
  v15 = SND_SubmixAddFromVoiceAlias(voice);
  if ( !v15 )
  {
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_submix_disable_alias, "snd_submix_disable_alias") )
      goto LABEL_22;
    Com_PrintError(9, "SOUND: failed to get submix for duck \"%s\" on alias \"%s\"\n", voice->submixDef, voice->alias->aliasName);
LABEL_14:
    voice->submixDef = NULL;
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    return;
  }
  voice->submixRef = v15;
  if ( !SND_SubmixAssert(v15, 1) )
  {
    v10 = "SND_SubmixAssert( req, true )";
    v11 = 1855;
    v12 = "(SND_SubmixAssert( req, true ))";
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", v11, ASSERT_TYPE_ASSERT, v12, (const char *)&queryFormat, v10) )
      __debugbreak();
  }
LABEL_22:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
SND_SubmixSetSlotFromLUA
==============
*/
void SND_SubmixSetSlotFromLUA(const char *name)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  SndSubmixReq *Slot; 
  SndSubmixReq *v5; 
  unsigned int v7; 
  const SndDuck *DuckById; 
  float fadeTimeSec; 
  float scale; 

  v1 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
  {
    v3 = DCONST_DVARBOOL_snd_submix_disable_lua;
    if ( !DCONST_DVARBOOL_snd_submix_disable_lua && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_lua") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
    {
      Slot = SND_SubmixFindSlot(0);
      v5 = Slot;
      if ( name )
      {
        if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 693, ASSERT_TYPE_ASSERT, "(name[0])", (const char *)&queryFormat, "name[0]") )
          __debugbreak();
        v7 = SND_HashName(name);
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 695, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
          __debugbreak();
        if ( v5->def->id != v7 )
        {
          if ( v7 && (DuckById = SND_GetDuckById(v7)) != NULL )
          {
            if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_submix_disable_lua, "snd_submix_disable_lua") )
            {
              __asm
              {
                vmovss  xmm0, cs:__real@3f800000
                vmovss  xmm1, cs:__real@bf800000
                vmovss  [rsp+48h+scale], xmm0
                vmovss  [rsp+48h+fadeTimeSec], xmm1
              }
              SND_SubmixAddNew(v5, DuckById, NULL, 0, 0, fadeTimeSec, scale);
            }
          }
          else
          {
            Com_PrintError(9, "SOUND: failed to get submix for def \"%s\" requested from LUA\n", name);
          }
        }
      }
      else
      {
        __asm { vmovss  xmm1, cs:__real@bf800000; fadeTimeSec }
        SND_SubmixClearForFade(Slot, *(double *)&_XMM1);
      }
    }
  }
}

/*
==============
SND_SubmixSetSlotsFromZones
==============
*/

void __fastcall SND_SubmixSetSlotsFromZones(unsigned int idA, unsigned int idB, double lerp)
{
  const dvar_t *v4; 
  const dvar_t *v8; 
  unsigned int zoneB; 
  unsigned int id; 

  v4 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
  {
    v8 = DCONST_DVARBOOL_snd_submix_disable_zone;
    if ( !DCONST_DVARBOOL_snd_submix_disable_zone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_zone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
    {
      zoneB = 0;
      s_sndSubmix.idsForZones[0] = idA;
      s_sndSubmix.idsForZones[1] = idB;
      __asm { vmovss  cs:s_sndSubmix.lerpForZones, xmm6 }
      if ( s_sndSubmix.requestsForZones[0] )
        id = s_sndSubmix.requestsForZones[0]->id;
      else
        id = 0;
      if ( s_sndSubmix.requestsForZones[1] )
        zoneB = s_sndSubmix.requestsForZones[1]->id;
      __asm { vmovaps xmm3, xmm6; lerp }
      SND_SubmixDebugRecordZones(g_snd.time, idA, idB, *(float *)&_XMM3, id, zoneB);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
SND_SubmixStopAllByBank
==============
*/
void SND_SubmixStopAllByBank(const SndDuck *const ducks, const int duckCount)
{
  unsigned int v3; 
  SndSubmixReq *requests; 
  const SndDuck *v5; 
  unsigned __int64 def; 

  if ( ducks && duckCount > 0 )
  {
    v3 = 0;
    requests = s_sndSubmix.requests;
    v5 = &ducks[duckCount];
    do
    {
      def = (unsigned __int64)requests->def;
      if ( def >= (unsigned __int64)ducks && def < (unsigned __int64)v5 )
        SND_SubmixReclaim(requests);
      ++v3;
      ++requests;
    }
    while ( v3 < 0x8D );
  }
}

/*
==============
SND_SubmixStopAllFromVoiceAlias
==============
*/

void __fastcall SND_SubmixStopAllFromVoiceAlias(__int64 a1, double _XMM1_8)
{
  unsigned int v2; 
  SndSubmixReq *requests; 

  v2 = 0;
  requests = s_sndSubmix.requests;
  do
  {
    if ( requests->type == 99 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; fadeTimeSec }
      SND_SubmixClearForFade(requests, _XMM1_8);
    }
    ++v2;
    ++requests;
  }
  while ( v2 < 0x8D );
}

/*
==============
SND_SubmixStopFromVoice
==============
*/
void SND_SubmixStopFromVoice(SndVoice *voice)
{
  int endTime; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 853, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  _RBX = voice->submixRef;
  if ( _RBX )
  {
    if ( !SND_SubmixAssert(_RBX, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 860, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
    if ( voice->paused )
      goto LABEL_17;
    __asm
    {
      vmovss  xmm0, cs:__real@37803e84
      vcomiss xmm0, dword ptr [rbx+24h]
    }
    if ( voice->paused )
    {
LABEL_17:
      SND_SubmixReclaim(_RBX);
    }
    else
    {
      _RAX = _RBX->def;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rax+58h]
      }
      if ( !voice->paused )
      {
        endTime = _RBX->endTime;
        if ( !endTime || g_snd.time < endTime )
          _RBX->endTime = g_snd.time;
      }
      _RBX->voice = NULL;
      voice->submixRef = NULL;
      voice->submixDef = NULL;
      if ( !SND_SubmixAssert(_RBX, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 875, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
        __debugbreak();
    }
  }
}

/*
==============
SND_SubmixUpdate
==============
*/

void __fastcall SND_SubmixUpdate(double dt, const bool isSplitscreen)
{
  const dvar_t *v10; 
  int v12; 
  float *attenuationValue; 
  __int64 i; 
  int v16; 
  float *hpfFilterValue; 
  __int64 j; 
  float *lpfFilterValue; 
  __int64 k; 
  float *focusAmount; 
  __int64 m; 
  __int64 v23; 
  unsigned int *focusConeId; 
  const FocusCone **focusCone; 
  __int64 v26; 
  const dvar_t *v27; 
  const char *string; 
  SndSubmixReq *Slot; 
  SndSubmixReq *Available; 
  unsigned int v32; 
  const SndDuck *DuckById; 
  int v35; 
  unsigned int v36; 
  unsigned int v37; 
  SndSubmixReq *updated; 
  unsigned int n; 
  int v65; 
  const SndDuck **p_def; 
  char v69; 
  const dvar_t *v71; 
  int v72; 
  float *v73; 
  __int64 ii; 
  int v75; 
  float *v76; 
  __int64 jj; 
  float *v78; 
  __int64 kk; 
  float *v80; 
  __int64 mm; 
  __int64 v82; 
  unsigned int *v83; 
  const FocusCone **v84; 
  __int64 v85; 
  const dvar_t *v86; 
  float *v87; 
  __int64 nn; 
  const dvar_t *v89; 
  float *v90; 
  __int64 i1; 
  const dvar_t *v92; 
  float *v93; 
  __int64 i2; 
  const dvar_t *v95; 
  float *v96; 
  __int64 i3; 
  __int64 v98; 
  unsigned int *v99; 
  const FocusCone **v100; 
  __int64 v101; 
  float fadeTimeSec; 
  double fadeTimeSeca; 
  float scale; 
  double scalea; 
  double v109; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 

  __asm
  {
    vmovaps [rsp+0B8h+var_78], xmm10
    vmovaps xmm10, xmm0
  }
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_OCCLUSION) && SND_CanDoPhysicsQuery() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1395, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_OCCLUSION ) || !SND_CanDoPhysicsQuery())", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_OCCLUSION ) || !SND_CanDoPhysicsQuery()") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_VOICE_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1396, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_VOICE_UPDATE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_VOICE_UPDATE )") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  [rsp+0B8h+arg_10], xmm1
    }
    v12 = v115;
    attenuationValue = s_sndSubmix.attenuationValue;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0B8h+arg_10], xmm0
    }
    for ( i = 128i64; i; --i )
      *(_DWORD *)attenuationValue++ = v12;
    v16 = v116;
    hpfFilterValue = s_sndSubmix.hpfFilterValue;
    __asm { vmovss  [rsp+0B8h+arg_10], xmm1 }
    for ( j = 128i64; j; --j )
      *(_DWORD *)hpfFilterValue++ = v16;
    lpfFilterValue = s_sndSubmix.lpfFilterValue;
    for ( k = 128i64; k; --k )
      *(_DWORD *)lpfFilterValue++ = v117;
    __asm { vmovss  [rsp+0B8h+arg_10], xmm0 }
    focusAmount = s_sndSubmix.focusAmount;
    for ( m = 128i64; m; --m )
      *(_DWORD *)focusAmount++ = v118;
    v23 = 8i64;
    focusConeId = s_sndSubmix.focusConeId;
    do
    {
      *(_QWORD *)focusConeId = 0i64;
      *((_QWORD *)focusConeId + 1) = 0i64;
      *((_QWORD *)focusConeId + 2) = 0i64;
      focusConeId += 16;
      *((_QWORD *)focusConeId - 5) = 0i64;
      *((_QWORD *)focusConeId - 4) = 0i64;
      *((_QWORD *)focusConeId - 3) = 0i64;
      *((_QWORD *)focusConeId - 2) = 0i64;
      *((_QWORD *)focusConeId - 1) = 0i64;
      --v23;
    }
    while ( v23 );
    focusCone = s_sndSubmix.focusCone;
    v26 = 16i64;
    do
    {
      *focusCone = NULL;
      focusCone[1] = NULL;
      focusCone[2] = NULL;
      focusCone += 8;
      *(focusCone - 5) = NULL;
      *(focusCone - 4) = NULL;
      *(focusCone - 3) = NULL;
      *(focusCone - 2) = NULL;
      *(focusCone - 1) = NULL;
      --v26;
    }
    while ( v26 );
  }
  else
  {
    v27 = DCONST_DVARSTR_snd_submix_debug;
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm6
      vmovaps [rsp+0B8h+var_58], xmm8
      vmovaps [rsp+0B8h+var_68], xmm9
    }
    if ( !DCONST_DVARSTR_snd_submix_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    string = v27->current.string;
    Slot = SND_SubmixFindSlot(1);
    Available = Slot;
    __asm { vmovss  xmm8, cs:__real@3f800000 }
    if ( string && *string )
    {
      v32 = SND_HashName(string);
      if ( v32 )
      {
        if ( !Available || Available->id != v32 )
        {
          DuckById = SND_GetDuckById(v32);
          if ( DuckById )
          {
            if ( Available || (Available = SND_SubmixFindAvailable()) != NULL )
            {
              Com_Printf(0, "SOUND: setting submix slot for def \"%s\" requested from DEBUG dvar\n", string);
              __asm
              {
                vmovss  xmm0, cs:__real@bf800000
                vmovss  [rsp+0B8h+scale], xmm8
                vmovss  [rsp+0B8h+fadeTimeSec], xmm0
              }
              SND_SubmixAddNew(Available, DuckById, NULL, 1, 0, fadeTimeSec, scale);
            }
            else
            {
              Com_PrintError(9, "SOUND: failed to get submix slot for def \"%s\" requested from DEBUG dvar\n", string);
            }
          }
          else
          {
            Com_PrintError(9, "SOUND: failed to get submix for def \"%s\" requested from DEBUG dvar\n", string);
          }
        }
      }
      else
      {
        Com_PrintError(9, "SOUND: failed to get hash for def \"%s\" requested from DEBUG dvar\n", string);
      }
    }
    else if ( Slot )
    {
      __asm { vmovss  xmm1, cs:__real@bf800000; fadeTimeSec }
      SND_SubmixClearForFade(Slot, *(double *)&_XMM1);
    }
    __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
    v35 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_SubmixUpdate");
    v36 = s_sndSubmix.idsForZones[1];
    v37 = s_sndSubmix.idsForZones[0];
    __asm
    {
      vmovss  xmm6, cs:s_sndSubmix.lerpForZones
      vxorps  xmm7, xmm7, xmm7
    }
    if ( s_sndSubmix.idsForZones[1] )
    {
      if ( s_sndSubmix.idsForZones[0] == s_sndSubmix.idsForZones[1] )
      {
        v36 = 0;
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      else
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( s_sndSubmix.idsForZones[0] < s_sndSubmix.idsForZones[1] )
          goto LABEL_127;
        __asm { vcomiss xmm6, xmm8 }
        if ( s_sndSubmix.idsForZones[0] > s_sndSubmix.idsForZones[1] )
        {
LABEL_127:
          __asm
          {
            vmovsd  xmm0, cs:__real@3ff0000000000000
            vmovsd  [rsp+0B8h+var_80], xmm0
            vxorpd  xmm1, xmm1, xmm1
            vmovsd  qword ptr [rsp+0B8h+scale], xmm1
            vcvtss2sd xmm2, xmm6, xmm6
            vmovsd  qword ptr [rsp+0B8h+fadeTimeSec], xmm2
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1711, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fadeTimeSeca, scalea, v109) )
            __debugbreak();
        }
      }
    }
    else
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    __asm { vsubss  xmm2, xmm8, xmm6; lerp }
    updated = SND_SubmixUpdateSlotFromZone(s_sndSubmix.requestsForZones[0], v37, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm6; lerp }
    s_sndSubmix.requestsForZones[0] = updated;
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm9, cs:__real@80000000
    }
    s_sndSubmix.requestsForZones[1] = SND_SubmixUpdateSlotFromZone(s_sndSubmix.requestsForZones[1], v36, *(float *)&_XMM2);
    _RDI = &g_snd.voices[0].submixAttenuation.rate;
    for ( n = 0; n < 0x63; ++n )
    {
      if ( !SND_IsVoiceFree(n) )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi-8]
          vmovss  xmm0, dword ptr [rdi]
        }
        *(_RDI - 1) = 1.0;
        __asm
        {
          vandps  xmm0, xmm0, xmm6
          vcmpless xmm1, xmm0, xmm9
          vblendvps xmm0, xmm2, xmm8, xmm1
          vmovss  dword ptr [rdi-8], xmm0
          vmovss  xmm2, dword ptr [rdi+10h]
          vmovss  xmm0, dword ptr [rdi+18h]
          vandps  xmm0, xmm0, xmm6
          vcmpless xmm1, xmm0, xmm9
        }
        _RDI[5] = 1.0;
        __asm
        {
          vblendvps xmm0, xmm2, xmm8, xmm1
          vmovss  dword ptr [rdi+10h], xmm0
          vmovss  xmm2, dword ptr [rdi+4]
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vandps  xmm0, xmm0, xmm6
          vcmpless xmm1, xmm0, xmm9
          vblendvps xmm0, xmm2, xmm8, xmm1
          vmovss  dword ptr [rdi+4], xmm0
        }
        _RDI[2] = 1.0;
      }
      _RDI += 492;
    }
    SND_SubmixUpdateCollateUniques();
    v65 = 0;
    __asm
    {
      vmovaps xmm9, [rsp+0B8h+var_68]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
    if ( s_sndSubmix.unique_count > 0 )
    {
      p_def = &s_sndSubmix.uniques[0].def;
      do
      {
        if ( !*((_DWORD *)p_def - 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1454, ASSERT_TYPE_ASSERT, "(sub->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id != SND_INVALID_HASH") )
          __debugbreak();
        v69 = *((_BYTE *)p_def - 12);
        if ( ((v69 & 1) == 0 || !isSplitscreen) && (!g_snd.paused || (v69 & 2) != 0) && (v69 & 4) != 0 )
          SND_SubmixUpdateVoiceFaders(*p_def);
        ++v65;
        p_def += 3;
      }
      while ( v65 < s_sndSubmix.unique_count );
    }
    __asm { vmovaps xmm0, xmm10; dt }
    s_sndSubmix.volmod_groupcount = SND_SubmixUpdateBuffers(*(const float *)&_XMM0);
    g_snd.updateDuckUsec = Sys_Microseconds() - v35;
    Sys_ProfEndNamedEvent();
    v71 = DCONST_DVARBOOL_snd_submix_disable;
    if ( !DCONST_DVARBOOL_snd_submix_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v71);
    if ( v71->current.enabled )
    {
      __asm { vmovss  [rsp+0B8h+arg_10], xmm8 }
      v72 = v119;
      v73 = s_sndSubmix.attenuationValue;
      __asm { vmovss  [rsp+0B8h+arg_10], xmm7 }
      for ( ii = 128i64; ii; --ii )
        *(_DWORD *)v73++ = v72;
      v75 = v120;
      v76 = s_sndSubmix.hpfFilterValue;
      __asm { vmovss  [rsp+0B8h+arg_10], xmm8 }
      for ( jj = 128i64; jj; --jj )
        *(_DWORD *)v76++ = v75;
      v78 = s_sndSubmix.lpfFilterValue;
      for ( kk = 128i64; kk; --kk )
        *(_DWORD *)v78++ = v121;
      __asm { vmovss  [rsp+0B8h+arg_10], xmm7 }
      v80 = s_sndSubmix.focusAmount;
      for ( mm = 128i64; mm; --mm )
        *(_DWORD *)v80++ = v122;
      v82 = 8i64;
      v83 = s_sndSubmix.focusConeId;
      do
      {
        *(_QWORD *)v83 = 0i64;
        *((_QWORD *)v83 + 1) = 0i64;
        *((_QWORD *)v83 + 2) = 0i64;
        v83 += 16;
        *((_QWORD *)v83 - 5) = 0i64;
        *((_QWORD *)v83 - 4) = 0i64;
        *((_QWORD *)v83 - 3) = 0i64;
        *((_QWORD *)v83 - 2) = 0i64;
        *((_QWORD *)v83 - 1) = 0i64;
        --v82;
      }
      while ( v82 );
      v84 = s_sndSubmix.focusCone;
      v85 = 16i64;
      do
      {
        *v84 = NULL;
        v84[1] = NULL;
        v84[2] = NULL;
        v84 += 8;
        *(v84 - 5) = NULL;
        *(v84 - 4) = NULL;
        *(v84 - 3) = NULL;
        *(v84 - 2) = NULL;
        *(v84 - 1) = NULL;
        --v85;
      }
      while ( v85 );
    }
    else
    {
      v86 = DCONST_DVARBOOL_snd_submix_disable_att;
      if ( !DCONST_DVARBOOL_snd_submix_disable_att && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_att") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v86);
      if ( v86->current.enabled )
      {
        __asm { vmovss  [rsp+0B8h+arg_10], xmm8 }
        v87 = s_sndSubmix.attenuationValue;
        for ( nn = 128i64; nn; --nn )
          *(_DWORD *)v87++ = v123;
      }
      v89 = DCONST_DVARBOOL_snd_submix_disable_hpf;
      if ( !DCONST_DVARBOOL_snd_submix_disable_hpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_hpf") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v89);
      if ( v89->current.enabled )
      {
        __asm { vmovss  [rsp+0B8h+arg_10], xmm7 }
        v90 = s_sndSubmix.hpfFilterValue;
        for ( i1 = 128i64; i1; --i1 )
          *(_DWORD *)v90++ = v124;
      }
      v92 = DCONST_DVARBOOL_snd_submix_disable_lpf;
      if ( !DCONST_DVARBOOL_snd_submix_disable_lpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_lpf") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v92);
      if ( v92->current.enabled )
      {
        __asm { vmovss  [rsp+0B8h+arg_10], xmm8 }
        v93 = s_sndSubmix.lpfFilterValue;
        for ( i2 = 128i64; i2; --i2 )
          *(_DWORD *)v93++ = v125;
      }
      v95 = DCONST_DVARBOOL_snd_submix_disable_focuscone;
      if ( !DCONST_DVARBOOL_snd_submix_disable_focuscone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_focuscone") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v95);
      if ( v95->current.enabled )
      {
        __asm { vmovss  [rsp+0B8h+arg_10], xmm7 }
        v96 = s_sndSubmix.focusAmount;
        for ( i3 = 128i64; i3; --i3 )
          *(_DWORD *)v96++ = v126;
        v98 = 8i64;
        v99 = s_sndSubmix.focusConeId;
        do
        {
          *(_QWORD *)v99 = 0i64;
          *((_QWORD *)v99 + 1) = 0i64;
          *((_QWORD *)v99 + 2) = 0i64;
          v99 += 16;
          *((_QWORD *)v99 - 5) = 0i64;
          *((_QWORD *)v99 - 4) = 0i64;
          *((_QWORD *)v99 - 3) = 0i64;
          *((_QWORD *)v99 - 2) = 0i64;
          *((_QWORD *)v99 - 1) = 0i64;
          --v98;
        }
        while ( v98 );
        v100 = s_sndSubmix.focusCone;
        v101 = 16i64;
        do
        {
          *v100 = NULL;
          v100[1] = NULL;
          v100[2] = NULL;
          v100 += 8;
          *(v100 - 5) = NULL;
          *(v100 - 4) = NULL;
          *(v100 - 3) = NULL;
          *(v100 - 2) = NULL;
          *(v100 - 1) = NULL;
          --v101;
        }
        while ( v101 );
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+0B8h+var_58]
      vmovaps xmm7, [rsp+0B8h+var_48]
    }
  }
  __asm { vmovaps xmm10, [rsp+0B8h+var_78] }
}

/*
==============
SND_SubmixUpdateBuffers
==============
*/

__int64 __fastcall SND_SubmixUpdateBuffers(double dt)
{
  signed __int64 v1; 
  void *v11; 
  signed int volmodinfoCount; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v20; 
  int *v21; 
  __int64 i; 
  int v23; 
  int *v24; 
  __int64 j; 
  int v26; 
  int *v27; 
  __int64 k; 
  int v29; 
  int *v30; 
  __int64 m; 
  int v32; 
  int *v33; 
  __int64 n; 
  int v35; 
  int *v36; 
  __int64 ii; 
  int v38; 
  int *v39; 
  __int64 jj; 
  __int64 v41; 
  unsigned int *focusConeId; 
  unsigned int *v43; 
  __int64 v48; 
  int v49; 
  const SndDuck *def; 
  bool v52; 
  bool v53; 
  unsigned int *focusCone; 
  unsigned int v60; 
  unsigned int v63; 
  unsigned int v66; 
  unsigned int v69; 
  unsigned int v72; 
  unsigned int v75; 
  unsigned int v78; 
  unsigned int v81; 
  unsigned int v84; 
  unsigned int v87; 
  unsigned int v90; 
  unsigned int v93; 
  unsigned int v96; 
  unsigned int v99; 
  unsigned int v102; 
  unsigned int v105; 
  float *attenuation; 
  const float *hpf; 
  float *lpf; 
  const float *focusAmount; 
  const float *v114; 
  __int64 v115; 
  unsigned int v118; 
  __int64 v120; 
  unsigned __int64 v121; 
  __int64 v124; 
  __int64 v128; 
  __int64 v131; 
  __int64 v134; 
  unsigned __int64 v135; 
  __int64 v137; 
  __int64 v140; 
  __int64 v142; 
  const float *v145; 
  __int64 v147; 
  unsigned __int64 v148; 
  int v150; 
  __int64 v152; 
  __int64 v156; 
  __int64 v160; 
  unsigned __int64 v161; 
  __int64 v164; 
  __int64 v169; 
  bool v172; 
  bool v173; 
  __int64 v174; 
  bool v182; 
  bool v185; 
  bool v188; 
  int v194; 
  _DWORD *v195; 
  __int64 kk; 
  int v199; 
  _DWORD *v200; 
  __int64 mm; 
  const FocusCone **v203; 
  const FocusCone *FocusConeById; 
  bool v205; 
  bool v206; 
  bool v214; 
  bool v217; 
  bool v220; 
  __int64 result; 
  __int64 v233; 
  float *value; 
  double v235; 
  double v236; 
  char v237[5232]; 
  char v246; 

  v11 = alloca(v1);
  __asm
  {
    vmovaps [rsp+1578h+var_38], xmm6
    vmovaps [rsp+1578h+var_48], xmm7
    vmovaps [rsp+1578h+var_58], xmm8
    vmovaps [rsp+1578h+var_68], xmm9
    vmovaps [rsp+1578h+var_78], xmm10
    vmovaps [rsp+1578h+var_88], xmm11
    vmovaps [rsp+1578h+var_98], xmm12
    vmovaps [rsp+1578h+var_A8], xmm13
  }
  _RBP = (unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1460) = (unsigned __int64)&v233 ^ _security_cookie;
  __asm { vmovaps xmm13, xmm0 }
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1141, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  volmodinfoCount = g_snd.globals->volmodinfoCount;
  *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = volmodinfoCount;
  if ( volmodinfoCount > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1143, ASSERT_TYPE_ASSERT, "(groupCountActual <= 128)", (const char *)&queryFormat, "groupCountActual <= SND_MAX_VOLMOD") )
    __debugbreak();
  v15 = 8i64;
  LODWORD(v16) = volmodinfoCount + (8 - volmodinfoCount % 8) % 8;
  *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v16;
  v17 = v16 & 7;
  *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v17;
  if ( (v16 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1146, ASSERT_TYPE_ASSERT, "((groupCount & 7) == 0)", (const char *)&queryFormat, "(groupCount & 7) == 0") )
    __debugbreak();
  if ( (int)v16 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1147, ASSERT_TYPE_ASSERT, "(groupCount <= 128)", (const char *)&queryFormat, "groupCount <= SND_MAX_VOLMOD") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rbp+0], xmm8
  }
  v20 = *(_DWORD *)_RBP;
  v21 = (int *)(_RBP + 2144);
  __asm { vmovss  dword ptr [rbp+0], xmm7 }
  for ( i = (unsigned int)v16; i; --i )
    *v21++ = v20;
  v23 = *(_DWORD *)_RBP;
  v24 = (int *)(_RBP + 2656);
  __asm { vmovss  dword ptr [rbp+0], xmm8 }
  for ( j = (unsigned int)v16; j; --j )
    *v24++ = v23;
  v26 = *(_DWORD *)_RBP;
  v27 = (int *)(_RBP + 3168);
  __asm { vmovss  dword ptr [rbp+0], xmm7 }
  for ( k = (unsigned int)v16; k; --k )
    *v27++ = v26;
  v29 = *(_DWORD *)_RBP;
  v30 = (int *)(_RBP + 3680);
  __asm { vmovss  dword ptr [rbp+0], xmm8 }
  for ( m = (unsigned int)v16; m; --m )
    *v30++ = v29;
  v32 = *(_DWORD *)_RBP;
  v33 = (int *)(_RBP + 1120);
  __asm { vmovss  dword ptr [rbp+0], xmm7 }
  for ( n = (unsigned int)v16; n; --n )
    *v33++ = v32;
  v35 = *(_DWORD *)_RBP;
  v36 = (int *)(_RBP + 1632);
  for ( ii = (unsigned int)v16; ii; --ii )
    *v36++ = v35;
  __asm { vmovss  dword ptr [rbp+0], xmm7 }
  v38 = *(_DWORD *)_RBP;
  v39 = (int *)(_RBP + 96);
  for ( jj = (unsigned int)v16; jj; --jj )
    *v39++ = v38;
  v41 = (unsigned int)v16;
  *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = (unsigned int)v16;
  memset_0((void *)(_RBP + 608), 0, 0x200ui64);
  focusConeId = s_sndSubmix.focusConeId;
  v43 = s_sndSubmix.focusConeId;
  do
  {
    *(_QWORD *)v43 = 0i64;
    *((_QWORD *)v43 + 1) = 0i64;
    *((_QWORD *)v43 + 2) = 0i64;
    v43 += 16;
    *((_QWORD *)v43 - 5) = 0i64;
    *((_QWORD *)v43 - 4) = 0i64;
    *((_QWORD *)v43 - 3) = 0i64;
    *((_QWORD *)v43 - 2) = 0i64;
    *((_QWORD *)v43 - 1) = 0i64;
    --v15;
  }
  while ( v15 );
  v53 = s_sndSubmix.unique_count <= 0;
  __asm { vmovsd  xmm10, cs:__real@3ff0000000000000 }
  *(_DWORD *)_RBP = 0;
  __asm { vxorpd  xmm9, xmm9, xmm9 }
  if ( !v53 )
  {
    __asm
    {
      vmovss  xmm11, cs:__real@49742403
      vmovsd  xmm12, cs:__real@412e848069676bfd
    }
    v48 = 0i64;
    *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    v49 = 0;
    do
    {
      _R14 = v48;
      if ( s_sndSubmix.uniques[_R14].id )
      {
        def = s_sndSubmix.uniques[_R14].def;
        if ( !def )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1188, ASSERT_TYPE_ASSERT, "(submixDef)", (const char *)&queryFormat, "submixDef") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 172, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
        }
        v52 = 0;
        v53 = 1;
        for ( _RBX = 0i64; _RBX < 512; v53 = (unsigned __int64)_RBX <= 0x200 )
        {
          _RAX = def->attenuation;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rax]
            vcomiss xmm0, xmm7
          }
          if ( v52 )
            goto LABEL_294;
          __asm { vcomiss xmm0, xmm11 }
          if ( !v53 )
          {
LABEL_294:
            __asm
            {
              vmovsd  [rsp+1578h+var_1540], xmm12
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+1578h+var_1548], xmm9
              vmovsd  [rsp+1578h+value], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 176, ASSERT_TYPE_ASSERT, "( SND_dBToLinear((-100.0f)) ) <= ( val ) && ( val ) <= ( SND_dBToLinear( (120.0f) ) )", "val not in [SND_dBToLinear(SND_SUBMIX_ATTENUATION_MAX_DB), SND_dBToLinear( SND_SUBMIX_AMPLIFICATION_MAX_DB )]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236) )
              __debugbreak();
          }
          _RBX += 4i64;
          v52 = (unsigned __int64)_RBX < 0x200;
        }
        for ( _RCX = 0i64; _RCX < 128; _RCX += 16i64 )
        {
          focusCone = def->focusCone;
          v60 = focusCone[_RCX];
          if ( v60 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax]
              vcomiss xmm0, dword ptr [rbp+rcx+260h]
            }
            s_sndSubmix.focusConeId[_RCX] = v60;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+260h], xmm0 }
          }
          v63 = focusCone[_RCX + 1];
          if ( v63 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+4]
              vcomiss xmm0, dword ptr [rbp+rcx+264h]
            }
            s_sndSubmix.focusConeId[_RCX + 1] = v63;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+264h], xmm0 }
          }
          v66 = focusCone[_RCX + 2];
          if ( v66 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+8]
              vcomiss xmm0, dword ptr [rbp+rcx+268h]
            }
            s_sndSubmix.focusConeId[_RCX + 2] = v66;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+268h], xmm0 }
          }
          v69 = focusCone[_RCX + 3];
          if ( v69 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+0Ch]
              vcomiss xmm0, dword ptr [rbp+rcx+26Ch]
            }
            s_sndSubmix.focusConeId[_RCX + 3] = v69;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+26Ch], xmm0 }
          }
          v72 = focusCone[_RCX + 4];
          if ( v72 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+10h]
              vcomiss xmm0, dword ptr [rbp+rcx+270h]
            }
            s_sndSubmix.focusConeId[_RCX + 4] = v72;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+270h], xmm0 }
          }
          v75 = focusCone[_RCX + 5];
          if ( v75 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+14h]
              vcomiss xmm0, dword ptr [rbp+rcx+274h]
            }
            s_sndSubmix.focusConeId[_RCX + 5] = v75;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+274h], xmm0 }
          }
          v78 = focusCone[_RCX + 6];
          if ( v78 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+18h]
              vcomiss xmm0, dword ptr [rbp+rcx+278h]
            }
            s_sndSubmix.focusConeId[_RCX + 6] = v78;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+278h], xmm0 }
          }
          v81 = focusCone[_RCX + 7];
          if ( v81 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+1Ch]
              vcomiss xmm0, dword ptr [rbp+rcx+27Ch]
            }
            s_sndSubmix.focusConeId[_RCX + 7] = v81;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+27Ch], xmm0 }
          }
          v84 = focusCone[_RCX + 8];
          if ( v84 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+20h]
              vcomiss xmm0, dword ptr [rbp+rcx+280h]
            }
            s_sndSubmix.focusConeId[_RCX + 8] = v84;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+280h], xmm0 }
          }
          v87 = focusCone[_RCX + 9];
          if ( v87 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+24h]
              vcomiss xmm0, dword ptr [rbp+rcx+284h]
            }
            s_sndSubmix.focusConeId[_RCX + 9] = v87;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+284h], xmm0 }
          }
          v90 = focusCone[_RCX + 10];
          if ( v90 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+28h]
              vcomiss xmm0, dword ptr [rbp+rcx+288h]
            }
            s_sndSubmix.focusConeId[_RCX + 10] = v90;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+288h], xmm0 }
          }
          v93 = focusCone[_RCX + 11];
          if ( v93 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+2Ch]
              vcomiss xmm0, dword ptr [rbp+rcx+28Ch]
            }
            s_sndSubmix.focusConeId[_RCX + 11] = v93;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+28Ch], xmm0 }
          }
          v96 = focusCone[_RCX + 12];
          if ( v96 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+30h]
              vcomiss xmm0, dword ptr [rbp+rcx+290h]
            }
            s_sndSubmix.focusConeId[_RCX + 12] = v96;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+290h], xmm0 }
          }
          v99 = focusCone[_RCX + 13];
          if ( v99 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+34h]
              vcomiss xmm0, dword ptr [rbp+rcx+294h]
            }
            s_sndSubmix.focusConeId[_RCX + 13] = v99;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+294h], xmm0 }
          }
          v102 = focusCone[_RCX + 14];
          if ( v102 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+38h]
              vcomiss xmm0, dword ptr [rbp+rcx+298h]
            }
            s_sndSubmix.focusConeId[_RCX + 14] = v102;
            focusCone = def->focusCone;
            __asm { vmovss  dword ptr [rbp+rcx+298h], xmm0 }
          }
          v105 = focusCone[_RCX + 15];
          if ( v105 )
          {
            _RAX = def->focusAmount;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rax+3Ch]
              vcomiss xmm0, dword ptr [rbp+rcx+29Ch]
              vmovss  dword ptr [rbp+rcx+29Ch], xmm0
            }
            s_sndSubmix.focusConeId[_RCX + 15] = v105;
          }
        }
        attenuation = def->attenuation;
        _RAX = &s_sndSubmix;
        __asm { vmovss  xmm6, dword ptr [rax+r14*8+1AA0h] }
        hpf = def->hpf;
        lpf = def->lpf;
        focusAmount = def->focusAmount;
        __asm { vmovss  dword ptr [rbp+10h], xmm6 }
        if ( (*(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1208, ASSERT_TYPE_ASSERT, "(!IS_NAN(effect))", (const char *)&queryFormat, "!IS_NAN(effect)") )
          __debugbreak();
        v114 = attenuation;
        v115 = *(unsigned int *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
        SND_DspSub(*(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC), (const float *)(_RBP + 1120), v114, (float *)(_RBP + 96));
        *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((_BYTE)_RBP + 96) & 0x1F;
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v115) )
          __debugbreak();
        __asm
        {
          vmovaps xmm0, xmm6
          vshufps xmm0, xmm0, xmm0, 0
        }
        v118 = (unsigned int)v115 >> 3;
        __asm
        {
          vinsertf128 ymm0, ymm0, xmm0, 1
          vmovups ymmword ptr [rbp+40h], ymm0
        }
        if ( (unsigned int)v115 >> 3 )
        {
          _RAX = _RBP + 96;
          v120 = v118;
          v121 = _RBP + 96;
          do
          {
            _RAX += 32i64;
            __asm { vmulps  ymm0, ymm0, ymmword ptr [rcx] }
            v121 += 32i64;
            __asm
            {
              vmovups ymmword ptr [rax-20h], ymm0
              vmovups ymm0, ymmword ptr [rbp+40h]
            }
            --v120;
          }
          while ( v120 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 1120) )
          __debugbreak();
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v115) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 96;
          v124 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+460h]
              vsubps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v124;
          }
          while ( v124 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 371, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 96) )
          __debugbreak();
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 372, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 2144) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 373, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 2144) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 374, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v115) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 2144;
          v128 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+60h]
              vmulps  ymm0, ymm0, ymmword ptr [rbp+rax+860h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v128;
          }
          while ( v128 );
        }
        SND_DspSub(v115, (const float *)(_RBP + 1632), hpf, (float *)(_RBP + 96));
        v131 = *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
        if ( v131 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v115) )
          __debugbreak();
        if ( v118 )
        {
          __asm { vmovups ymm1, ymmword ptr [rbp+40h] }
          _RAX = _RBP + 96;
          v134 = v118;
          v135 = _RBP + 96;
          do
          {
            _RAX += 32i64;
            __asm { vmulps  ymm0, ymm1, ymmword ptr [rcx] }
            v135 += 32i64;
            __asm { vmovups ymmword ptr [rax-20h], ymm0 }
            --v134;
          }
          while ( v134 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 1632) )
          __debugbreak();
        if ( v131 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v115) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 96;
          v137 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+660h]
              vsubps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v137;
          }
          while ( v137 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 437, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 2656) )
          __debugbreak();
        if ( v131 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 438, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
          __debugbreak();
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 439, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 2656) )
          __debugbreak();
        v140 = *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
        if ( *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 440, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18)) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 2656;
          v142 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+0A60h]
              vmaxps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v142;
          }
          while ( v142 );
        }
        v145 = lpf;
        v16 = *(unsigned int *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
        SND_DspSub(*(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC), (const float *)(_RBP + 1120), v145, (float *)(_RBP + 96));
        if ( v131 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v140) )
          __debugbreak();
        if ( v118 )
        {
          _RAX = _RBP + 96;
          v147 = v118;
          v148 = _RBP + 96;
          do
          {
            _RAX += 32i64;
            v148 += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+40h]
              vmulps  ymm0, ymm0, ymmword ptr [rcx-20h]
              vmovups ymmword ptr [rax-20h], ymm0
            }
            --v147;
          }
          while ( v147 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 1120) )
          __debugbreak();
        if ( v131 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        v150 = *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
        if ( v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v140) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 96;
          v152 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+460h]
              vsubps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v152;
          }
          while ( v152 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 415, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 3168) )
          __debugbreak();
        if ( v131 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 416, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
          __debugbreak();
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 417, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 3168) )
          __debugbreak();
        if ( v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 418, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v16) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 3168;
          v156 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+0C60h]
              vminps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v156;
          }
          while ( v156 );
        }
        SND_DspSub(v16, (const float *)(_RBP + 1632), focusAmount, (float *)(_RBP + 96));
        if ( v131 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        v41 = v16;
        if ( v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v16) )
          __debugbreak();
        if ( v118 )
        {
          _RAX = _RBP + 96;
          v160 = v118;
          v161 = _RBP + 96;
          do
          {
            _RAX += 32i64;
            v161 += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+40h]
              vmulps  ymm0, ymm0, ymmword ptr [rcx-20h]
              vmovups ymmword ptr [rax-20h], ymm0
            }
            --v160;
          }
          while ( v160 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 1632) )
          __debugbreak();
        if ( v131 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 96) )
            __debugbreak();
        }
        if ( v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v16) )
          __debugbreak();
        if ( v118 )
        {
          _RCX = _RBP + 96;
          v164 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+660h]
              vsubps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v164;
          }
          while ( v164 );
        }
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 437, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", _RBP + 3680) )
          __debugbreak();
        if ( v131 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 438, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", _RBP + 96) )
          __debugbreak();
        if ( (((_BYTE)_RBP + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 439, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBP + 3680) )
          __debugbreak();
        if ( v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 440, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v16) )
          __debugbreak();
        _RDI = 0i64;
        if ( v118 )
        {
          _RCX = _RBP + 3680;
          v169 = v118;
          _RAX = 0i64;
          do
          {
            _RCX += 32i64;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+rax+0E60h]
              vmaxps  ymm0, ymm0, ymmword ptr [rbp+rax+60h]
            }
            _RAX += 32i64;
            __asm { vmovups ymmword ptr [rcx-20h], ymm0 }
            --v169;
          }
          while ( v169 );
        }
        v172 = 0;
        v173 = (_DWORD)v16 == 0;
        if ( (int)v16 > 0 )
        {
          v174 = v16;
          do
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rbp+rdi+860h]
              vmovss  xmm0, cs:SND_SUBMIX_ATTENUATION_MAX
              vcomiss xmm0, xmm2
            }
            if ( !v173 )
              goto LABEL_295;
            __asm { vcomiss xmm2, cs:SND_SUBMIX_AMPLIFICATION_MAX }
            if ( !v173 )
            {
LABEL_295:
              __asm
              {
                vmovss  xmm0, cs:SND_SUBMIX_AMPLIFICATION_MAX
                vmovss  xmm1, cs:SND_SUBMIX_ATTENUATION_MAX
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+1578h+var_1540], xmm0
                vcvtss2sd xmm1, xmm1, xmm1
                vmovsd  [rsp+1578h+var_1548], xmm1
                vcvtss2sd xmm2, xmm2, xmm2
                vmovsd  [rsp+1578h+value], xmm2
              }
              v182 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1219, ASSERT_TYPE_ASSERT, "( SND_SUBMIX_ATTENUATION_MAX ) <= ( vAttenuationTarget[j] ) && ( vAttenuationTarget[j] ) <= ( SND_SUBMIX_AMPLIFICATION_MAX )", "vAttenuationTarget[j] not in [SND_SUBMIX_ATTENUATION_MAX, SND_SUBMIX_AMPLIFICATION_MAX]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236);
              v172 = 0;
              v173 = !v182;
              if ( v182 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+rdi+0A60h]
              vcomiss xmm0, xmm7
            }
            if ( v172 )
              goto LABEL_296;
            __asm { vcomiss xmm0, xmm8 }
            if ( !v173 )
            {
LABEL_296:
              __asm
              {
                vmovsd  [rsp+1578h+var_1540], xmm10
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+1578h+var_1548], xmm9
                vmovsd  [rsp+1578h+value], xmm0
              }
              v185 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1220, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vHpfFilterTarget[j] ) && ( vHpfFilterTarget[j] ) <= ( 1.0f )", "vHpfFilterTarget[j] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236);
              v173 = !v185;
              if ( v185 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+rdi+0C60h]
              vcomiss xmm0, xmm7
              vcomiss xmm0, xmm8
            }
            if ( !v173 )
            {
              __asm
              {
                vmovsd  [rsp+1578h+var_1540], xmm10
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+1578h+var_1548], xmm9
                vmovsd  [rsp+1578h+value], xmm0
              }
              v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1221, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vLpfFilterTarget[j] ) && ( vLpfFilterTarget[j] ) <= ( 1.0f )", "vLpfFilterTarget[j] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236);
              v173 = !v188;
              if ( v188 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+rdi+0E60h]
              vcomiss xmm0, xmm7
              vcomiss xmm0, xmm8
            }
            if ( !v173 )
            {
              __asm
              {
                vmovsd  [rsp+1578h+var_1540], xmm10
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+1578h+var_1548], xmm9
                vmovsd  [rsp+1578h+value], xmm0
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1222, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vFocusAmountTarget[j] ) && ( vFocusAmountTarget[j] ) <= ( 1.0f )", "vFocusAmountTarget[j] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236) )
                __debugbreak();
            }
            _RDI += 4i64;
            v172 = v174-- == 0;
            v173 = v172 || v174 == 0;
          }
          while ( v174 );
          LODWORD(v16) = *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
          v41 = *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
        }
        v49 = *(_DWORD *)_RBP;
        v17 = v150;
      }
      ++v49;
      v48 = *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) + 1i64;
      *(_DWORD *)_RBP = v49;
      v53 = v49 < s_sndSubmix.unique_count;
      *(_QWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v48;
    }
    while ( v53 );
    volmodinfoCount = *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
    focusConeId = s_sndSubmix.focusConeId;
  }
  __asm
  {
    vmulss  xmm0, xmm13, cs:__real@41200000
    vminss  xmm1, xmm0, cs:__real@3dcccccd
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbp+8], xmm1
  }
  v194 = *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v195 = (_DWORD *)(_RBP + 4192);
  __asm
  {
    vmovss  xmm1, cs:SND_SUBMIX_ATTENUATION_MAX
    vmovss  dword ptr [rbp+8], xmm0
    vmovss  xmm0, cs:SND_SUBMIX_AMPLIFICATION_MAX
    vmovss  dword ptr [rsp+1578h+var_1540], xmm0
    vmovss  dword ptr [rsp+1578h+var_1548], xmm1
  }
  for ( kk = v41; kk; --kk )
    *v195++ = v194;
  v199 = *(_DWORD *)(((unsigned __int64)v237 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v200 = (_DWORD *)(_RBP + 608);
  for ( mm = v41; mm; --mm )
    *v200++ = v199;
  SND_SubmixRateLimit(v16, (const float *)(_RBP + 4192), (const float *)(_RBP + 608), (const float *)(_RBP + 2144), (float *)(_RBP + 4704), s_sndSubmix.attenuationValue, *(const float *)&v235, *(const float *)&v236);
  __asm
  {
    vmovss  dword ptr [rsp+1578h+var_1540], xmm8
    vmovss  dword ptr [rsp+1578h+var_1548], xmm7
  }
  _RDI = s_sndSubmix.hpfFilterValue;
  SND_SubmixRateLimit(v16, (const float *)(_RBP + 4192), (const float *)(_RBP + 608), (const float *)(_RBP + 2656), (float *)(_RBP + 4704), s_sndSubmix.hpfFilterValue, *(const float *)&v235, *(const float *)&v236);
  __asm
  {
    vmovss  dword ptr [rsp+1578h+var_1540], xmm8
    vmovss  dword ptr [rsp+1578h+var_1548], xmm7
  }
  SND_SubmixRateLimit(v16, (const float *)(_RBP + 4192), (const float *)(_RBP + 608), (const float *)(_RBP + 3168), (float *)(_RBP + 4704), s_sndSubmix.lpfFilterValue, *(const float *)&v235, *(const float *)&v236);
  __asm
  {
    vmovss  dword ptr [rsp+1578h+var_1540], xmm8
    vmovss  dword ptr [rsp+1578h+var_1548], xmm7
  }
  SND_SubmixRateLimit(v16, (const float *)(_RBP + 4192), (const float *)(_RBP + 608), (const float *)(_RBP + 3680), (float *)(_RBP + 4704), s_sndSubmix.focusAmount, *(const float *)&v235, *(const float *)&v236);
  v203 = s_sndSubmix.focusCone;
  do
  {
    FocusConeById = SND_GetFocusConeById(*focusConeId++);
    *v203++ = FocusConeById;
  }
  while ( (__int64)focusConeId < (__int64)s_sndSubmix.focusCone );
  v205 = 0;
  v206 = (_DWORD)v16 == 0;
  if ( (int)v16 > 0 )
  {
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rdi-400h]
        vmovss  xmm0, cs:SND_SUBMIX_ATTENUATION_MAX
        vcomiss xmm0, xmm2
      }
      if ( !v206 )
        goto LABEL_297;
      __asm { vcomiss xmm2, cs:SND_SUBMIX_AMPLIFICATION_MAX }
      if ( !v206 )
      {
LABEL_297:
        __asm
        {
          vmovss  xmm0, cs:SND_SUBMIX_AMPLIFICATION_MAX
          vmovss  xmm1, cs:SND_SUBMIX_ATTENUATION_MAX
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+1578h+var_1540], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+1578h+var_1548], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+1578h+value], xmm2
        }
        v214 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1246, ASSERT_TYPE_ASSERT, "( SND_SUBMIX_ATTENUATION_MAX ) <= ( s_sndSubmix.attenuationValue[i] ) && ( s_sndSubmix.attenuationValue[i] ) <= ( SND_SUBMIX_AMPLIFICATION_MAX )", "s_sndSubmix.attenuationValue[i] not in [SND_SUBMIX_ATTENUATION_MAX, SND_SUBMIX_AMPLIFICATION_MAX]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236);
        v205 = 0;
        v206 = !v214;
        if ( v214 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vcomiss xmm0, xmm7
      }
      if ( v205 )
        goto LABEL_298;
      __asm { vcomiss xmm0, xmm8 }
      if ( !v206 )
      {
LABEL_298:
        __asm
        {
          vmovsd  [rsp+1578h+var_1540], xmm10
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+1578h+var_1548], xmm9
          vmovsd  [rsp+1578h+value], xmm0
        }
        v217 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1247, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( s_sndSubmix.hpfFilterValue[i] ) && ( s_sndSubmix.hpfFilterValue[i] ) <= ( 1.0f )", "s_sndSubmix.hpfFilterValue[i] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236);
        v206 = !v217;
        if ( v217 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-200h]
        vcomiss xmm0, xmm7
        vcomiss xmm0, xmm8
      }
      if ( !v206 )
      {
        __asm
        {
          vmovsd  [rsp+1578h+var_1540], xmm10
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+1578h+var_1548], xmm9
          vmovsd  [rsp+1578h+value], xmm0
        }
        v220 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1248, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( s_sndSubmix.lpfFilterValue[i] ) && ( s_sndSubmix.lpfFilterValue[i] ) <= ( 1.0f )", "s_sndSubmix.lpfFilterValue[i] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236);
        v206 = !v220;
        if ( v220 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+200h]
        vcomiss xmm0, xmm7
        vcomiss xmm0, xmm8
      }
      if ( !v206 )
      {
        __asm
        {
          vmovsd  [rsp+1578h+var_1540], xmm10
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+1578h+var_1548], xmm9
          vmovsd  [rsp+1578h+value], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1249, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( s_sndSubmix.focusAmount[i] ) && ( s_sndSubmix.focusAmount[i] ) <= ( 1.0f )", "s_sndSubmix.focusAmount[i] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&value, v235, v236) )
          __debugbreak();
      }
      ++_RDI;
      v205 = v41-- == 0;
      v206 = v205 || v41 == 0;
    }
    while ( v41 );
  }
  result = (unsigned int)volmodinfoCount;
  _R11 = &v246;
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
  }
  return result;
}

/*
==============
SND_SubmixUpdateCollateUniques
==============
*/
void SND_SubmixUpdateCollateUniques()
{
  int v1; 
  unsigned int i; 
  int v4; 
  __int64 v5; 
  char v8; 
  char v9; 
  const SndDuck *def; 
  __int64 v11; 
  __int64 v12; 

  _RBX = s_sndSubmix.uniques;
  memset_0(s_sndSubmix.uniques, 0, sizeof(s_sndSubmix.uniques));
  v1 = 0;
  _RSI = s_sndSubmix.requests;
  for ( i = 0; i < 0x8D; ++i )
  {
    if ( v1 > (int)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1592, ASSERT_TYPE_ASSERT, "(uniqueCount <= i)", (const char *)&queryFormat, "uniqueCount <= i") )
      __debugbreak();
    if ( !SND_SubmixAssert(_RSI, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1596, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
    if ( _RSI->type != -3 )
    {
      if ( SND_SubmixCalculateEffectIfAny(_RSI, &_RSI->effect) )
      {
        v4 = 0;
        v5 = 0i64;
        if ( v1 > 0 )
        {
          while ( 1 )
          {
            if ( !_RBX->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1613, ASSERT_TYPE_ASSERT, "(sub->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id != SND_INVALID_HASH") )
              __debugbreak();
            if ( !_RBX->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1614, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
              __debugbreak();
            if ( _RSI->id == _RBX->id )
              break;
            ++v4;
            ++v5;
            ++_RBX;
            if ( v5 >= v1 )
              goto LABEL_22;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+24h]
            vmaxss  xmm1, xmm0, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm1
          }
        }
LABEL_22:
        if ( v4 == v1 )
        {
          if ( s_sndSubmix.uniques[v5].id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1625, ASSERT_TYPE_ASSERT, "(sub->id == static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id == SND_INVALID_HASH") )
            __debugbreak();
          s_sndSubmix.uniques[v5].id = _RSI->id;
          s_sndSubmix.uniques[v5].effect = _RSI->effect;
          *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^= (*((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^ _RSI->def->disableInSplitscreen) & 1;
          v8 = *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^ (*((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^ (2 * _RSI->def->updateWhilePaused)) & 2;
          *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) = v8;
          v9 = v8 & 0xFB | (_RSI->def->duckAlias != 0 ? 4 : 0);
          def = s_sndSubmix.uniques[v5].def;
          *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) = v9;
          if ( def && def->id != _RSI->def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1631, ASSERT_TYPE_ASSERT, "(sub->def == nullptr || sub->def->id == req->def->id)", (const char *)&queryFormat, "sub->def == nullptr || sub->def->id == req->def->id") )
            __debugbreak();
          ++v1;
          s_sndSubmix.uniques[v5].def = _RSI->def;
          if ( (unsigned int)v1 >= 0x8D )
          {
            LODWORD(v12) = 141;
            LODWORD(v11) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( uniqueCount ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.uniques ) ) + 0 ) )", "uniqueCount doesn't index s_sndSubmix.uniques\n\t%i not in [0, %i)", v11, v12) )
              __debugbreak();
          }
        }
        _RBX = s_sndSubmix.uniques;
      }
      else
      {
        SND_SubmixReclaim(_RSI);
      }
    }
    ++_RSI;
  }
  s_sndSubmix.unique_count = v1;
}

/*
==============
SND_SubmixUpdateSlotFromZone
==============
*/

SndSubmixReq *__fastcall SND_SubmixUpdateSlotFromZone(SndSubmixReq *req, unsigned int id, double lerp)
{
  SndSubmixReq *result; 
  const SndDuck *DuckById; 
  SndSubmixReq *Available; 
  SndSubmixReq *v23; 
  float fmt; 
  double v25; 
  float v26; 
  double v27; 
  float v28; 
  double v29; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm2
  }
  if ( id )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vcomiss xmm6, cs:__real@3f800000
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+68h+var_30], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_38], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 742, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( scale ) && ( scale ) <= ( 1.0f )", "scale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v25, v27, v29) )
      __debugbreak();
    __asm { vmovss  xmm7, cs:__real@bf800000 }
    if ( req && req->type != -3 )
    {
      if ( req->id == id )
      {
        __asm
        {
          vmovaps xmm3, xmm7; fadeTimeSec
          vmovss  dword ptr [rsp+68h+fmt], xmm6
        }
        SND_SubmixAdjustRequest(req, 6, 0, *(double *)&_XMM3, fmt);
        result = req;
        goto LABEL_5;
      }
      __asm { vmovaps xmm1, xmm7; fadeTimeSec }
      SND_SubmixClearForFade(req, *(double *)&_XMM1);
    }
    DuckById = SND_GetDuckById(id);
    if ( DuckById )
    {
      Available = SND_SubmixFindAvailable();
      v23 = Available;
      if ( Available )
      {
        __asm
        {
          vmovss  dword ptr [rsp+68h+var_38], xmm6
          vmovss  dword ptr [rsp+68h+var_40], xmm7
        }
        SND_SubmixAddNew(Available, DuckById, NULL, 6, 0, v26, v28);
        result = v23;
        goto LABEL_5;
      }
    }
  }
  else if ( req )
  {
    __asm { vmovss  xmm1, cs:__real@bf800000; fadeTimeSec }
    SND_SubmixClearForFade(req, *(double *)&_XMM1);
  }
  result = NULL;
LABEL_5:
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
SND_SubmixUpdateVoiceFaders
==============
*/
void SND_SubmixUpdateVoiceFaders(const SndDuck *const submixDef)
{
  int v7; 
  __int128 v34; 
  char v37; 
  int v38; 
  int v39; 
  int v40; 

  __asm { vmovaps [rsp+78h+var_38], xmm7 }
  _RSI = submixDef;
  __asm { vmovaps [rsp+78h+var_48], xmm8 }
  if ( !submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1665, ASSERT_TYPE_ASSERT, "(submixDef)", (const char *)&queryFormat, "submixDef", v34) )
    __debugbreak();
  if ( !_RSI->duckAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1666, ASSERT_TYPE_ASSERT, "(submixDef->duckAlias != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "submixDef->duckAlias != SND_INVALID_HASH") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@80000000
  }
  v7 = 0;
  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RBX = &g_snd.voices[0].submixAttenuation.rate;
  do
  {
    if ( !SND_IsVoiceFree(v7) && _RSI->duckAlias == *(_DWORD *)(*((_QWORD *)_RBX - 26) + 32i64) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+94h]
        vminss  xmm6, xmm0, dword ptr [rbx-4]
        vmovss  [rsp+78h+arg_0], xmm6
      }
      if ( (v38 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbx-8]
        vmovss  xmm0, dword ptr [rbx]
        vandps  xmm0, xmm0, xmm7
        vcmpless xmm1, xmm0, xmm8
        vblendvps xmm0, xmm2, xmm6, xmm1
        vmovss  dword ptr [rbx-8], xmm0
        vmovss  dword ptr [rbx-4], xmm6
        vmovss  xmm1, dword ptr [rsi+98h]
        vmaxss  xmm6, xmm1, dword ptr [rbx+14h]
        vmovss  [rsp+78h+arg_0], xmm6
      }
      if ( (v39 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+10h]
        vmovss  xmm0, dword ptr [rbx+18h]
        vandps  xmm0, xmm0, xmm7
        vcmpless xmm1, xmm0, xmm8
        vblendvps xmm0, xmm2, xmm6, xmm1
        vmovss  dword ptr [rbx+10h], xmm0
        vmovss  dword ptr [rbx+14h], xmm6
        vmovss  xmm1, dword ptr [rsi+9Ch]
        vminss  xmm6, xmm1, dword ptr [rbx+8]
        vmovss  [rsp+78h+arg_0], xmm6
      }
      if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+4]
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vandps  xmm0, xmm0, xmm7
        vcmpless xmm1, xmm0, xmm8
        vblendvps xmm0, xmm2, xmm6, xmm1
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  dword ptr [rbx+8], xmm6
      }
    }
    ++v7;
    _RBX += 492;
  }
  while ( v7 < 99 );
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  _R11 = &v37;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
SND_SubmixVoiceRestore
==============
*/
void SND_SubmixVoiceRestore(MemoryFile *memFile, SndVoice *voice)
{
  const SndDuck *DuckById; 
  SndSubmixReq *Request; 
  const dvar_t *v6; 
  unsigned int p; 
  int idx; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1719, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1720, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  DuckById = NULL;
  voice->submixDef = NULL;
  voice->submixRef = NULL;
  Request = NULL;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p )
  {
    DuckById = SND_GetDuckById(p);
    if ( !DuckById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1732, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  MemFile_ReadData(memFile, 4ui64, &idx);
  if ( idx == 0x7FFFFFFF )
    goto LABEL_21;
  Request = SND_SubmixGetRequest(idx);
  if ( !Request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1739, ASSERT_TYPE_ASSERT, "(ref)", (const char *)&queryFormat, "ref") )
    __debugbreak();
  v6 = DVARBOOL_snd_submix_restore_workaround_enable;
  if ( !DVARBOOL_snd_submix_restore_workaround_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_restore_workaround_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled || !Request || Request->type != -3 )
  {
LABEL_21:
    if ( DuckById )
    {
      voice->submixDef = DuckById;
      voice->submixRef = Request;
    }
    else if ( Request )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1767, ASSERT_TYPE_ASSERT, "(ref == nullptr)", (const char *)&queryFormat, "ref == nullptr") )
        __debugbreak();
    }
  }
}

/*
==============
SND_SubmixVoiceSave
==============
*/
void SND_SubmixVoiceSave(MemoryFile *memFile, const SndVoice *voice)
{
  const SndDuck *submixDef; 
  SndSubmixReq *submixRef; 
  SndSubmixReq *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1774, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1775, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( voice->submixRef && !voice->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1777, ASSERT_TYPE_ASSERT, "(voice->submixRef == nullptr || voice->submixDef != nullptr)", (const char *)&queryFormat, "voice->submixRef == nullptr || voice->submixDef != nullptr") )
    __debugbreak();
  submixDef = voice->submixDef;
  if ( submixDef )
  {
    if ( !submixDef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1781, ASSERT_TYPE_ASSERT, "(voice->submixDef->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "voice->submixDef->id != SND_INVALID_HASH") )
      __debugbreak();
    p = voice->submixDef->id;
  }
  else
  {
    p = 0;
  }
  MemFile_WriteData(memFile, 4ui64, &p);
  submixRef = voice->submixRef;
  if ( submixRef )
  {
    if ( !SND_SubmixAssert(submixRef, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1791, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( voice->submixRef, true ))", (const char *)&queryFormat, "SND_SubmixAssert( voice->submixRef, true )") )
      __debugbreak();
    if ( !voice->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1792, ASSERT_TYPE_ASSERT, "(voice->submixDef != nullptr)", (const char *)&queryFormat, "voice->submixDef != nullptr") )
      __debugbreak();
    v6 = voice->submixRef;
    if ( !SND_SubmixAssert(v6, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 201, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
    v7 = (__int64)((unsigned __int128)(((char *)v6 - (char *)s_sndSubmix.requests) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
    v8 = (v7 >> 63) + v7;
    if ( (unsigned int)v8 >= 0x8D )
    {
      LODWORD(v9) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.requests ) ) + 0 ) )", "idx doesn't index s_sndSubmix.requests\n\t%i not in [0, %i)", v9, 141) )
        __debugbreak();
    }
    if ( (_DWORD)v8 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1794, ASSERT_TYPE_ASSERT, "(idx != 2147483647)", (const char *)&queryFormat, "idx != SND_VOICE_NO_SUBMIX") )
      __debugbreak();
    p = v8;
  }
  else
  {
    p = 0x7FFFFFFF;
  }
  MemFile_WriteData(memFile, 4ui64, &p);
}

