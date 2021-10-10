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
void SND_SubmixAddFromSource(SndSubmixType source, unsigned int id, float fadeTimeSec, float scale)
{
  __int64 v6; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const SndDuck *DuckById; 
  const SndDuck *v11; 
  float length; 
  int v13; 
  int v14; 
  SndSubmixReq *i; 
  SndSubmixReq *Available; 
  char *fmt; 
  __int64 fadeTimeSeca; 
  __int64 scalea; 

  v6 = source;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 498, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
    __debugbreak();
  if ( fadeTimeSec < 0.0 && fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 499, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f || fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec >= 0.0f || fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
    __debugbreak();
  if ( scale < 0.0 || scale > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 500, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( scale ) && ( scale ) <= ( 1.0f )", "scale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", scale, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 7 )
  {
    LODWORD(scalea) = 7;
    LODWORD(fadeTimeSeca) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 501, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( SND_SUBMIX_TYPE_COUNT )", "source doesn't index SND_SUBMIX_TYPE_COUNT\n\t%i not in [0, %i)", fadeTimeSeca, scalea) )
      __debugbreak();
  }
  v8 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    v9 = DCONST_DVARBOOL_snd_submix_disable_script;
    if ( !DCONST_DVARBOOL_snd_submix_disable_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_script") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled )
    {
      if ( id && (DuckById = SND_GetDuckById(id), (v11 = DuckById) != NULL) )
      {
        length = DuckById->length;
        v13 = 0;
        v14 = 0;
        if ( length >= 0.0000152879 )
          v14 = (int)(float)(length * 1000.0);
        for ( i = s_sndSubmix.requests; i->id != id; ++i )
        {
          if ( (unsigned int)++v13 >= 0x8D )
          {
            Available = SND_SubmixFindAvailable();
            if ( Available )
            {
              SND_SubmixAddNew(Available, v11, NULL, v6, v14, fadeTimeSec, 1.0);
            }
            else
            {
              LODWORD(fmt) = id;
              Com_PrintError(9, "SOUND: no free submix for %s request def \"%s\" %x.\n", s_sndSubmixSourceNames[v6], v11->name, fmt);
            }
            return;
          }
        }
        if ( !SND_SubmixAssert(i, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 382, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
          __debugbreak();
        SND_SubmixAdjustRequest(i, v6, v14, fadeTimeSec, 1.0);
      }
      else
      {
        Com_PrintError(9, "SOUND: did not find def %x for %s submix.\n", id, s_sndSubmixSourceNames[v6]);
      }
    }
  }
}

/*
==============
SND_SubmixAddFromVoiceAlias
==============
*/
SndSubmixReq *SND_SubmixAddFromVoiceAlias(SndVoice *voice)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  const SndDuck *submixDef; 
  int v5; 
  float length; 
  SndSubmixReq *Available; 
  SndSubmixReq *v8; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 438, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( voice->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 439, ASSERT_TYPE_ASSERT, "(voice->submixRef == nullptr)", (const char *)&queryFormat, "voice->submixRef == nullptr") )
    __debugbreak();
  if ( !voice->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 440, ASSERT_TYPE_ASSERT, "(voice->submixDef != nullptr)", (const char *)&queryFormat, "voice->submixDef != nullptr") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return 0i64;
  v3 = DCONST_DVARBOOL_snd_submix_disable_alias;
  if ( !DCONST_DVARBOOL_snd_submix_disable_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 0i64;
  submixDef = voice->submixDef;
  v5 = 0;
  length = submixDef->length;
  if ( length <= 0.0 )
  {
    if ( (voice->alias->flags & 1) == 0 )
      v5 = SND_GetSoundFileLengthMS(voice->assetEntry) + (int)(float)(submixDef->fadeOut * 1000.0);
  }
  else
  {
    v5 = (int)(float)(length * 1000.0);
  }
  Available = SND_SubmixFindAvailable();
  v8 = Available;
  if ( !Available )
  {
    Com_PrintError(9, "SOUND: no free submix for ALIAS request def \"%s\" %x.\n", submixDef->name, submixDef->id);
    return 0i64;
  }
  SND_SubmixAddNew(Available, submixDef, voice, 3, v5, -1.0, 1.0);
  return v8;
}

/*
==============
SND_SubmixAddNew
==============
*/
void SND_SubmixAddNew(SndSubmixReq *submix, const SndDuck *const def, SndVoice *voice, const int type, const int endTime, const float fadeTimeSec, const float scale)
{
  int v11; 

  if ( !submix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 410, ASSERT_TYPE_ASSERT, "(submix)", (const char *)&queryFormat, "submix") )
    __debugbreak();
  if ( submix->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 411, ASSERT_TYPE_ASSERT, "(submix->def == nullptr)", (const char *)&queryFormat, "submix->def == nullptr") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 412, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 413, ASSERT_TYPE_ASSERT, "(def->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "def->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( endTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 414, ASSERT_TYPE_ASSERT, "(endTime >= 0)", (const char *)&queryFormat, "endTime >= 0") )
    __debugbreak();
  if ( fadeTimeSec < 0.0 && fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 415, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f || fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec >= 0.0f || fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
    __debugbreak();
  submix->id = def->id;
  submix->def = def;
  submix->startTime = g_snd.time;
  if ( endTime )
    v11 = endTime + g_snd.time;
  else
    v11 = 0;
  submix->endTime = v11;
  submix->scale = scale;
  submix->fadeInTimeSec = SND_SubmixCaculateFadeInTime(def, fadeTimeSec);
  submix->fadeOutTimeSec = def->fadeOut;
  submix->voice = voice;
  if ( voice )
    voice->submixRef = submix;
  if ( (((_BYTE)submix + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &submix->type) )
    __debugbreak();
  _InterlockedExchange(&submix->type, type);
  if ( !SND_SubmixAssert(submix, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 432, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( submix, true ))", (const char *)&queryFormat, "SND_SubmixAssert( submix, true )") )
    __debugbreak();
}

/*
==============
SND_SubmixAdjustRequest
==============
*/
void SND_SubmixAdjustRequest(SndSubmixReq *submix, const int type, const int endTime, const float fadeTimeSec, const float scale)
{
  int v7; 

  if ( !submix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 553, ASSERT_TYPE_ASSERT, "(submix)", (const char *)&queryFormat, "submix") )
    __debugbreak();
  if ( !submix->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 554, ASSERT_TYPE_ASSERT, "(submix->def != nullptr)", (const char *)&queryFormat, "submix->def != nullptr") )
    __debugbreak();
  if ( !submix->def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 555, ASSERT_TYPE_ASSERT, "(submix->def->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "submix->def->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( endTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 556, ASSERT_TYPE_ASSERT, "(endTime >= 0)", (const char *)&queryFormat, "endTime >= 0") )
    __debugbreak();
  if ( fadeTimeSec < 0.0 && fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 557, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f || fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec >= 0.0f || fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
    __debugbreak();
  submix->scale = scale;
  submix->startTime = g_snd.time;
  if ( endTime )
    v7 = endTime + g_snd.time;
  else
    v7 = 0;
  submix->endTime = v7;
  submix->fadeInTimeSec = SND_SubmixCaculateFadeInTime(submix->def, fadeTimeSec);
  if ( !SND_SubmixAssert(submix, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 564, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( submix, true ))", (const char *)&queryFormat, "SND_SubmixAssert( submix, true )") )
    __debugbreak();
}

/*
==============
SND_SubmixAssert
==============
*/
char SND_SubmixAssert(const SndSubmixReq *const req, const bool assertVoice)
{
  int endTime; 
  SndVoice *voice; 
  SndFileLoadingState loadingState; 
  const char *v7; 
  int v8; 
  const char *v9; 
  SndSubmixReq *submixRef; 

  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 114, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( req->type < -1 )
  {
    if ( req->type != -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 149, ASSERT_TYPE_ASSERT, "(req->type == SND_SUBMIX_TYPE_EXPIRED)", (const char *)&queryFormat, "req->type == SND_SUBMIX_TYPE_EXPIRED") )
      __debugbreak();
    if ( req->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 150, ASSERT_TYPE_ASSERT, "(req->def == nullptr)", (const char *)&queryFormat, "req->def == nullptr") )
      __debugbreak();
    if ( req->voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 151, ASSERT_TYPE_ASSERT, "(req->voice == nullptr)", (const char *)&queryFormat, "req->voice == nullptr") )
      __debugbreak();
    if ( !req->id )
      return 1;
    v7 = "req->id == SND_INVALID_HASH";
    v8 = 152;
    v9 = "(req->id == static_cast< SndStringHash >( 0 ))";
LABEL_73:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", v8, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v7) )
      __debugbreak();
    return 1;
  }
  if ( !req->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 117, ASSERT_TYPE_ASSERT, "(req->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "req->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( !req->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 118, ASSERT_TYPE_ASSERT, "(req->def != nullptr)", (const char *)&queryFormat, "req->def != nullptr") )
    __debugbreak();
  if ( req->def->id != req->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 119, ASSERT_TYPE_ASSERT, "(req->def->id == req->id)", (const char *)&queryFormat, "req->def->id == req->id") )
    __debugbreak();
  if ( req->id != req->def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 120, ASSERT_TYPE_ASSERT, "(req->id == req->def->id)", (const char *)&queryFormat, "req->id == req->def->id") )
    __debugbreak();
  if ( req->type == -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 121, ASSERT_TYPE_ASSERT, "(req->type != SND_SUBMIX_TYPE_EXPIRED)", (const char *)&queryFormat, "req->type != SND_SUBMIX_TYPE_EXPIRED") )
    __debugbreak();
  if ( req->fadeInTimeSec < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 122, ASSERT_TYPE_ASSERT, "(req->fadeInTimeSec >= 0.0f)", (const char *)&queryFormat, "req->fadeInTimeSec >= 0.0f") )
    __debugbreak();
  if ( req->fadeOutTimeSec < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 123, ASSERT_TYPE_ASSERT, "(req->fadeOutTimeSec >= 0.0f)", (const char *)&queryFormat, "req->fadeOutTimeSec >= 0.0f") )
    __debugbreak();
  endTime = req->endTime;
  if ( endTime < req->startTime && endTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 124, ASSERT_TYPE_ASSERT, "(req->endTime >= req->startTime || req->endTime == 0)", (const char *)&queryFormat, "req->endTime >= req->startTime || req->endTime == 0") )
    __debugbreak();
  if ( !req->voice || !assertVoice )
    return 1;
  if ( req->type != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 127, ASSERT_TYPE_ASSERT, "(req->type == SND_SUBMIX_TYPE_ALIAS)", (const char *)&queryFormat, "req->type == SND_SUBMIX_TYPE_ALIAS") )
    __debugbreak();
  voice = req->voice;
  loadingState = voice->soundFileInfo.loadingState;
  if ( voice->soundFileInfo.loadingState )
  {
    if ( loadingState == SFLS_LOADED )
    {
      if ( voice->submixRef != req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 135, ASSERT_TYPE_ASSERT, "(req->voice->submixRef == req)", (const char *)&queryFormat, "req->voice->submixRef == req") )
        __debugbreak();
      if ( req->voice->submixDef != req->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 136, ASSERT_TYPE_ASSERT, "(req->voice->submixDef == req->def)", (const char *)&queryFormat, "req->voice->submixDef == req->def") )
        __debugbreak();
      if ( req->voice->submixDef->id == req->id )
        return 1;
      v7 = "req->voice->submixDef->id == req->id";
      v8 = 137;
      v9 = "(req->voice->submixDef->id == req->id)";
    }
    else
    {
      if ( loadingState != SFLS_LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 141, ASSERT_TYPE_ASSERT, "(req->voice->soundFileInfo.loadingState == SFLS_LOADING)", (const char *)&queryFormat, "req->voice->soundFileInfo.loadingState == SFLS_LOADING") )
        __debugbreak();
      submixRef = req->voice->submixRef;
      if ( submixRef != req && submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 142, ASSERT_TYPE_ASSERT, "(req->voice->submixRef == req || req->voice->submixRef == nullptr)", (const char *)&queryFormat, "req->voice->submixRef == req || req->voice->submixRef == nullptr") )
        __debugbreak();
      if ( req->voice->submixDef != req->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 143, ASSERT_TYPE_ASSERT, "(req->voice->submixDef == req->def)", (const char *)&queryFormat, "req->voice->submixDef == req->def") )
        __debugbreak();
      if ( req->voice->submixDef->id == req->id )
        return 1;
      v7 = "req->voice->submixDef->id == req->id";
      v8 = 144;
      v9 = "(req->voice->submixDef->id == req->id)";
    }
    goto LABEL_73;
  }
  if ( voice->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 130, ASSERT_TYPE_ASSERT, "(req->voice->submixRef == nullptr)", (const char *)&queryFormat, "req->voice->submixRef == nullptr") )
    __debugbreak();
  if ( req->voice->submixDef )
  {
    v7 = "req->voice->submixDef == nullptr";
    v8 = 131;
    v9 = "(req->voice->submixDef == nullptr)";
    goto LABEL_73;
  }
  return 1;
}

/*
==============
SND_SubmixCaculateFadeInTime
==============
*/
float SND_SubmixCaculateFadeInTime(const SndDuck *def, float fadeTimeSec)
{
  float fadeIn; 

  fadeIn = fadeTimeSec;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1556, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( fadeTimeSec < 0.0 )
  {
    if ( fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1560, ASSERT_TYPE_ASSERT, "(fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
      __debugbreak();
    fadeIn = def->fadeIn;
    if ( fadeIn < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1563, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f)", (const char *)&queryFormat, "fadeTimeSec >= 0.0f") )
      __debugbreak();
  }
  return fadeIn;
}

/*
==============
SND_SubmixCalculateAmplitudeFromVoiceAsset
==============
*/
float SND_SubmixCalculateAmplitudeFromVoiceAsset(const SndVoice *const voice)
{
  float v2; 
  const SndAssetBankEntry *assetEntry; 
  unsigned __int16 i2; 
  unsigned __int8 e3; 
  unsigned __int8 EnvelopeLoudness2; 
  unsigned __int16 i1; 
  int frameCount; 
  unsigned __int8 EnvelopeLoudness1; 
  unsigned __int8 EnvelopeLoudness0; 
  int v11; 
  double v12; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1522, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  if ( !voice->alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1523, ASSERT_TYPE_ASSERT, "(voice->alias)", (const char *)&queryFormat, "voice->alias") )
    __debugbreak();
  if ( !voice->submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1524, ASSERT_TYPE_ASSERT, "(voice->submixDef)", (const char *)&queryFormat, "voice->submixDef") )
    __debugbreak();
  if ( !voice->submixRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1525, ASSERT_TYPE_ASSERT, "(voice->submixRef)", (const char *)&queryFormat, "voice->submixRef") )
    __debugbreak();
  if ( !voice->submixRef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1526, ASSERT_TYPE_ASSERT, "(voice->submixRef->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "voice->submixRef->id != SND_INVALID_HASH") )
    __debugbreak();
  if ( voice->submixRef->id != voice->submixDef->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1527, ASSERT_TYPE_ASSERT, "(voice->submixRef->id == voice->submixDef->id)", (const char *)&queryFormat, "voice->submixRef->id == voice->submixDef->id") )
    __debugbreak();
  if ( !voice->assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1529, ASSERT_TYPE_ASSERT, "(voice->assetEntry)", (const char *)&queryFormat, "voice->assetEntry") )
    __debugbreak();
  v2 = FLOAT_1_0;
  if ( voice->priorityVolume > 0.0 )
  {
    if ( (voice->alias->flags & 1) == 0 )
    {
      assetEntry = voice->assetEntry;
      i2 = assetEntry->EnvelopeTime2;
      e3 = assetEntry->EnvelopeLoudness3;
      EnvelopeLoudness2 = assetEntry->EnvelopeLoudness2;
      i1 = assetEntry->EnvelopeTime1;
      frameCount = assetEntry->frameCount;
      EnvelopeLoudness1 = assetEntry->EnvelopeLoudness1;
      EnvelopeLoudness0 = assetEntry->EnvelopeLoudness0;
      v11 = truncate_cast<int,unsigned __int64>(voice->framesPlayed);
      v12 = SND_AssetEnvelope(v11, frameCount, EnvelopeLoudness0, EnvelopeLoudness1, EnvelopeLoudness2, e3, i1, i2);
      v2 = *(float *)&v12;
    }
    if ( (LODWORD(v2) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1547, ASSERT_TYPE_ASSERT, "(!IS_NAN( amplitude ))", (const char *)&queryFormat, "!IS_NAN( amplitude )") )
      __debugbreak();
  }
  return v2;
}

/*
==============
SND_SubmixCalculateDistanceFromVoicePosition
==============
*/
float SND_SubmixCalculateDistanceFromVoicePosition(const SndVoice *const voice)
{
  double v2; 
  vec3_t to; 

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
  v2 = SND_DistSqToNearestListener(&to);
  if ( (LODWORD(v2) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1657, ASSERT_TYPE_ASSERT, "(!IS_NAN( distance ))", (const char *)&queryFormat, "!IS_NAN( distance )", LODWORD(v2)) )
    __debugbreak();
  return *(float *)&v2;
}

/*
==============
SND_SubmixCalculateEffectIfAny
==============
*/
char SND_SubmixCalculateEffectIfAny(const SndSubmixReq *const req, float *effect)
{
  const SndDuck *def; 
  int endTime; 
  float v8; 
  float v11; 
  float v12; 
  float fadeOutTimeSec; 
  float fadeInTimeSec; 
  unsigned int fadeOutCurve; 
  __int128 v17; 
  double v20; 
  float v21; 
  double v22; 
  SndVoice *voice; 
  float v24; 
  float v25; 
  int v26; 
  __int128 distance_low; 
  float v28; 
  const SndDuck *v29; 
  float distance; 
  __int128 v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  float v36; 

  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1259, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( !effect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1260, ASSERT_TYPE_ASSERT, "(effect)", (const char *)&queryFormat, "effect") )
    __debugbreak();
  if ( req->type == -3 )
  {
    *effect = 1.0;
    return 0;
  }
  def = req->def;
  endTime = req->endTime;
  v8 = (float)((float)(g_snd.time - req->startTime) * 0.001) - def->startDelay;
  _XMM9 = LODWORD(FLOAT_1_0);
  __asm { vxorpd  xmm13, xmm13, xmm13 }
  if ( endTime && (v12 = (float)(g_snd.time - endTime) * 0.001, v11 = v12, v12 > 0.0) )
  {
    fadeOutTimeSec = req->fadeOutTimeSec;
    if ( fadeOutTimeSec < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1278, ASSERT_TYPE_ASSERT, "(fadeOut >= 0.0f)", (const char *)&queryFormat, "fadeOut >= 0.0f") )
      __debugbreak();
    if ( v8 < 0.0 || v12 > fadeOutTimeSec )
    {
      *effect = 0.0;
      return 0;
    }
    if ( fadeOutTimeSec <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1287, ASSERT_TYPE_ASSERT, "(fadeOut > 0.0f)", (const char *)&queryFormat, "fadeOut > 0.0f") )
      __debugbreak();
    fadeInTimeSec = req->fadeInTimeSec;
    fadeOutCurve = req->def->fadeOutCurve;
    if ( v8 >= fadeInTimeSec )
    {
      v20 = SND_SubmixFade(fadeOutCurve, 1.0 - (float)((float)(1.0 / fadeOutTimeSec) * v12));
      LODWORD(_XMM7) = LODWORD(v20);
      if ( (*(float *)&v20 < 0.0 || *(float *)&v20 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1304, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeEffect ) && ( timeEffect ) <= ( 1.0f )", "timeEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v20, *(double *)&_XMM13, DOUBLE_1_0) )
        goto LABEL_35;
    }
    else
    {
      v17 = LODWORD(FLOAT_1_0);
      *(float *)&v17 = 1.0 - (float)((float)((float)((float)(1.0 - (float)(v8 / fadeInTimeSec)) * fadeOutTimeSec) + v11) * (float)(1.0 / fadeOutTimeSec));
      _XMM0 = v17;
      __asm { vmaxss  xmm1, xmm0, xmm8; t }
      *(double *)&_XMM0 = SND_SubmixFade(fadeOutCurve, *(float *)&_XMM1);
      __asm { vmaxss  xmm7, xmm0, xmm8 }
      if ( (*(float *)&_XMM7 < 0.0 || *(float *)&_XMM7 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1299, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeEffect ) && ( timeEffect ) <= ( 1.0f )", "timeEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM7, *(double *)&_XMM13, DOUBLE_1_0) )
LABEL_35:
        __debugbreak();
    }
  }
  else
  {
    if ( v8 < 0.0 )
    {
      LODWORD(_XMM7) = 0;
      goto LABEL_37;
    }
    v21 = req->fadeInTimeSec;
    if ( v8 >= v21 )
    {
      *(float *)&_XMM7 = FLOAT_1_0;
    }
    else
    {
      v22 = SND_SubmixFade(def->fadeInCurve, v8 / v21);
      LODWORD(_XMM7) = LODWORD(v22);
      if ( (*(float *)&v22 < 0.0 || *(float *)&v22 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1314, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( timeEffect ) && ( timeEffect ) <= ( 1.0f )", "timeEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v22, *(double *)&_XMM13, DOUBLE_1_0) )
        goto LABEL_35;
    }
  }
LABEL_37:
  voice = req->voice;
  if ( voice )
  {
    distance_low = LODWORD(req->def->distance);
    if ( *(float *)&distance_low <= 0.0000152879 )
    {
      if ( *(float *)&distance_low >= -0.0000152879 )
        goto LABEL_62;
      *(float *)&distance_low = SND_SubmixCalculateDistanceFromVoicePosition(voice);
      if ( (distance_low & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1362, ASSERT_TYPE_ASSERT, "(!IS_NAN( distance ))", (const char *)&queryFormat, "!IS_NAN( distance )") )
        __debugbreak();
      v32 = req->def->distance * req->def->distance;
      if ( *(float *)&distance_low < v32 )
      {
        v33 = distance_low;
        *(float *)&v33 = *(float *)&distance_low / v32;
        _XMM9 = v33;
        if ( ((float)(*(float *)&distance_low / v32) < 0.0 || *(float *)&v33 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1366, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( distanceEffect ) && ( distanceEffect ) <= ( 1.0f )", "distanceEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v33, *(double *)&_XMM13, DOUBLE_1_0) )
LABEL_50:
          __debugbreak();
LABEL_62:
        v34 = FLOAT_1_0;
        if ( req->def->trackAmplitude )
          v34 = SND_SubmixCalculateAmplitudeFromVoiceAsset(req->voice);
        __asm { vminss  xmm1, xmm9, xmm7 }
        v36 = (float)(*(float *)&_XMM1 * req->scale) * v34;
        v24 = v36;
        if ( v36 >= 0.0 && v36 <= 1.0 )
          goto LABEL_69;
        v26 = 1382;
        goto LABEL_67;
      }
    }
    else
    {
      v28 = SND_SubmixCalculateDistanceFromVoicePosition(voice);
      if ( (LODWORD(v28) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1332, ASSERT_TYPE_ASSERT, "(!IS_NAN( distance ))", (const char *)&queryFormat, "!IS_NAN( distance )") )
        __debugbreak();
      v29 = req->def;
      distance = v29->distance;
      if ( v28 >= (float)(v29->minDistance * v29->minDistance) )
      {
        if ( v28 >= (float)(distance * distance) )
        {
          _XMM9 = 0i64;
          goto LABEL_62;
        }
        v31 = LODWORD(FLOAT_1_0);
        *(float *)&v31 = 1.0 - (float)(fsqrt(v28) * (float)(1.0 / distance));
        _XMM9 = v31;
        if ( (*(float *)&v31 < 0.0 || *(float *)&v31 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1350, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( distanceEffect ) && ( distanceEffect ) <= ( 1.0f )", "distanceEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v31, *(double *)&_XMM13, DOUBLE_1_0) )
          goto LABEL_50;
        goto LABEL_62;
      }
    }
    _XMM9 = LODWORD(FLOAT_1_0);
    goto LABEL_62;
  }
  v25 = *(float *)&_XMM7 * req->scale;
  v24 = v25;
  if ( v25 >= 0.0 && v25 <= 1.0 )
    goto LABEL_69;
  v26 = 1324;
LABEL_67:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", v26, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( finalEffect ) && ( finalEffect ) <= ( 1.0f )", "finalEffect not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v24, *(double *)&_XMM13, DOUBLE_1_0) )
    __debugbreak();
LABEL_69:
  *effect = v24;
  return 1;
}

/*
==============
SND_SubmixClearAll
==============
*/
void SND_SubmixClearAll(float fadeTimeSec)
{
  unsigned int i; 

  for ( i = 0; i < 0x8D; ++i )
    SND_SubmixClearForFade(&s_sndSubmix.requests[i], fadeTimeSec);
}

/*
==============
SND_SubmixClearAllFromSource
==============
*/
void SND_SubmixClearAllFromSource(SndSubmixType source, float fadeTimeSec)
{
  unsigned int v3; 
  volatile int *p_type; 
  __int64 v5; 
  int v6; 

  if ( fadeTimeSec < 0.0 && fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 593, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f || fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec >= 0.0f || fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
    __debugbreak();
  if ( (unsigned int)source >= SND_SUBMIX_TYPE_COUNT )
  {
    v6 = 7;
    LODWORD(v5) = source;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( SND_SUBMIX_TYPE_COUNT )", "source doesn't index SND_SUBMIX_TYPE_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v3 = 0;
  p_type = &s_sndSubmix.requests[0].type;
  do
  {
    if ( *p_type == source )
      SND_SubmixClearForFade((SndSubmixReq *)(p_type - 1), fadeTimeSec);
    ++v3;
    p_type += 12;
  }
  while ( v3 < 0x8D );
}

/*
==============
SND_SubmixClearForFade
==============
*/
void SND_SubmixClearForFade(SndSubmixReq *req, const float fadeTimeSec)
{
  float fadeOut; 
  const SndDuck *def; 

  fadeOut = fadeTimeSec;
  if ( !req && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 570, ASSERT_TYPE_ASSERT, "(req)", (const char *)&queryFormat, "req") )
    __debugbreak();
  if ( req->type != -3 )
  {
    def = req->def;
    req->endTime = g_snd.time;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1570, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( fadeTimeSec < 0.0 )
    {
      if ( fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1574, ASSERT_TYPE_ASSERT, "(fadeTimeSec == (-1.0f))", (const char *)&queryFormat, "fadeTimeSec == SND_SUBMIX_USE_DEF_FADE") )
        __debugbreak();
      fadeOut = def->fadeOut;
    }
    if ( fadeOut < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1577, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f)", (const char *)&queryFormat, "fadeTimeSec >= 0.0f") )
      __debugbreak();
    req->fadeOutTimeSec = fadeOut;
    if ( !SND_SubmixAssert(req, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 577, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
  }
}

/*
==============
SND_SubmixClearFromSource
==============
*/
void SND_SubmixClearFromSource(SndSubmixType source, unsigned int id, float fadeTimeSec)
{
  int v5; 
  volatile int *i; 
  __int64 v7; 

  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 635, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
    __debugbreak();
  if ( fadeTimeSec < 0.0 && fadeTimeSec != -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 636, ASSERT_TYPE_ASSERT, "(fadeTimeSec >= 0.0f || fadeTimeSec== (-1.0f))", (const char *)&queryFormat, "fadeTimeSec >= 0.0f || fadeTimeSec== SND_SUBMIX_USE_DEF_FADE") )
    __debugbreak();
  if ( (unsigned int)source >= SND_SUBMIX_TYPE_COUNT )
  {
    LODWORD(v7) = source;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 637, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( SND_SUBMIX_TYPE_COUNT )", "source doesn't index SND_SUBMIX_TYPE_COUNT\n\t%i not in [0, %i)", v7, 7) )
      __debugbreak();
  }
  v5 = 0;
  for ( i = &s_sndSubmix.requests[0].type; ; i += 12 )
  {
    if ( *i == source )
    {
      if ( *i == -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 646, ASSERT_TYPE_ASSERT, "(!SND_SubmixIsExpired( req ))", (const char *)&queryFormat, "!SND_SubmixIsExpired( req )") )
        __debugbreak();
      if ( *(_DWORD *)(*(_QWORD *)(i + 1) + 64i64) == id )
        break;
    }
    if ( (unsigned int)++v5 >= 0x8D )
      return;
  }
  SND_SubmixClearForFade((SndSubmixReq *)(i - 1), fadeTimeSec);
}

/*
==============
SND_SubmixClearFromVoiceAlias
==============
*/
void SND_SubmixClearFromVoiceAlias(unsigned int id)
{
  unsigned int v2; 
  volatile int *p_type; 

  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 614, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
    __debugbreak();
  v2 = 0;
  p_type = &s_sndSubmix.requests[0].type;
  do
  {
    if ( *p_type == 3 )
    {
      if ( *p_type == -3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 623, ASSERT_TYPE_ASSERT, "(!SND_SubmixIsExpired( req ))", (const char *)&queryFormat, "!SND_SubmixIsExpired( req )") )
        __debugbreak();
      if ( *(_DWORD *)(*(_QWORD *)(p_type + 1) + 64i64) == id )
        SND_SubmixClearForFade((SndSubmixReq *)(p_type - 1), -1.0);
    }
    ++v2;
    p_type += 12;
  }
  while ( v2 < 0x8D );
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
  SndSubmixReq *v11; 
  __int64 v13; 
  int v14; 
  float *attenuation; 
  __int64 v19; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  int v34; 
  float *lpf; 
  __int64 v38; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int64 v44; 
  int v53; 
  float *hpf; 
  __int64 v60; 
  float *v61; 
  unsigned __int64 v62; 

  if ( idx < 0 )
    return 0;
  if ( (unsigned int)idx >= 0x8D )
    return 0;
  Request = SND_SubmixGetRequest(idx);
  v11 = Request;
  if ( !Request || Request->type == -3 )
    return 0;
  if ( type )
    *type = Request->type;
  if ( id )
    *id = Request->id;
  if ( effect )
    *effect = Request->effect;
  *(float *)&_XMM6 = FLOAT_1_0;
  v13 = 0i64;
  if ( maxAttnLinear )
  {
    if ( !Request->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1941, ASSERT_TYPE_ASSERT, "(req->def)", (const char *)&queryFormat, "req->def") )
      __debugbreak();
    if ( !v11->def->attenuation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1942, ASSERT_TYPE_ASSERT, "(req->def->attenuation)", (const char *)&queryFormat, "req->def->attenuation") )
      __debugbreak();
    v14 = 0;
    *(float *)&_XMM1 = FLOAT_1_0;
    attenuation = v11->def->attenuation;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      _XMM2 = _xmm;
      _XMM1 = _xmm;
      v19 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4]
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4+10h]
        }
        v19 += 8i64;
        v14 += 8;
      }
      while ( v19 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm1, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM1, _XMM1, 245);
      __asm { vminss  xmm1, xmm1, xmm0 }
    }
    v23 = v14;
    if ( v14 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v14 >= 4 )
      {
        v24 = (__int64)&attenuation[v14 + 2];
        v25 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v14 - 4) >> 2) + 1;
        v23 = v14 + 4 * v25;
        do
        {
          _XMM0 = *(unsigned int *)(v24 - 8);
          v24 += 16i64;
          __asm { vminss  xmm2, xmm0, xmm1 }
          _XMM1 = *(unsigned int *)(v24 - 20);
          _XMM0 = *(unsigned int *)(v24 - 16);
          __asm { vminss  xmm3, xmm1, xmm2 }
          _XMM1 = *(unsigned int *)(v24 - 12);
          __asm
          {
            vminss  xmm2, xmm0, xmm3
            vminss  xmm1, xmm1, xmm2
          }
          --v25;
        }
        while ( v25 );
      }
      while ( v23 < s_sndSubmix.volmod_groupcount )
      {
        _XMM0 = LODWORD(attenuation[v23++]);
        __asm { vminss  xmm1, xmm0, xmm1 }
      }
    }
    *maxAttnLinear = *(float *)&_XMM1;
  }
  if ( minCutoffLpfHz )
  {
    if ( !v11->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1954, ASSERT_TYPE_ASSERT, "(req->def)", (const char *)&queryFormat, "req->def") )
      __debugbreak();
    if ( !v11->def->lpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1955, ASSERT_TYPE_ASSERT, "(req->def->lpf)", (const char *)&queryFormat, "req->def->lpf") )
      __debugbreak();
    v34 = 0;
    lpf = v11->def->lpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      _XMM1 = _xmm;
      _XMM2 = _xmm;
      v38 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4]
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4+10h]
        }
        v38 += 8i64;
        v34 += 8;
      }
      while ( v38 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm1, xmm2
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm6, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM6, _XMM6, 245);
      __asm { vminss  xmm6, xmm6, xmm0 }
    }
    v42 = v34;
    if ( v34 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v34 >= 4 )
      {
        v43 = (__int64)&lpf[v34 + 2];
        v44 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v34 - 4) >> 2) + 1;
        v42 = v34 + 4 * v44;
        do
        {
          _XMM0 = *(unsigned int *)(v43 - 8);
          _XMM1 = *(unsigned int *)(v43 - 4);
          v43 += 16i64;
          __asm { vminss  xmm2, xmm0, xmm6 }
          _XMM0 = *(unsigned int *)(v43 - 16);
          __asm { vminss  xmm3, xmm1, xmm2 }
          _XMM1 = *(unsigned int *)(v43 - 12);
          __asm
          {
            vminss  xmm2, xmm0, xmm3
            vminss  xmm6, xmm1, xmm2
          }
          --v44;
        }
        while ( v44 );
      }
      while ( v42 < s_sndSubmix.volmod_groupcount )
      {
        _XMM0 = LODWORD(lpf[v42++]);
        __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    *minCutoffLpfHz = (float)((float)(*(float *)&_XMM6 * *(float *)&_XMM6) * *(float *)&_XMM6) * 24000.0;
  }
  if ( maxCutoffHpfHz )
  {
    if ( !v11->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1971, ASSERT_TYPE_ASSERT, "(req->def)", (const char *)&queryFormat, "req->def") )
      __debugbreak();
    if ( !v11->def->hpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1972, ASSERT_TYPE_ASSERT, "(req->def->hpf)", (const char *)&queryFormat, "req->def->hpf") )
      __debugbreak();
    v53 = 0;
    _XMM1 = 0i64;
    hpf = v11->def->hpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      _XMM2 = 0i64;
      do
      {
        __asm
        {
          vmaxps  xmm2, xmm2, xmmword ptr [r8+rbx*4]
          vmaxps  xmm1, xmm1, xmmword ptr [r8+rbx*4+10h]
        }
        v13 += 8i64;
        v53 += 8;
      }
      while ( v13 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vmaxps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vmaxps  xmm1, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM1, _XMM1, 245);
      __asm { vmaxss  xmm1, xmm1, xmm0 }
    }
    v60 = v53;
    if ( v53 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v53 >= 4 )
      {
        v61 = &hpf[v53 + 2];
        v62 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v53 - 4) >> 2) + 1;
        v60 += 4 * v62;
        do
        {
          _XMM0 = *((unsigned int *)v61 - 2);
          __asm { vmaxss  xmm2, xmm0, xmm1 }
          _XMM1 = *((unsigned int *)v61 - 1);
          _XMM0 = *(unsigned int *)v61;
          __asm { vmaxss  xmm3, xmm1, xmm2 }
          _XMM1 = *((unsigned int *)v61 + 1);
          v61 += 4;
          __asm
          {
            vmaxss  xmm2, xmm0, xmm3
            vmaxss  xmm1, xmm1, xmm2
          }
          --v62;
        }
        while ( v62 );
      }
      while ( v60 < s_sndSubmix.volmod_groupcount )
      {
        _XMM0 = LODWORD(hpf[v60++]);
        __asm { vmaxss  xmm1, xmm0, xmm1 }
      }
    }
    *maxCutoffHpfHz = *(float *)&_XMM1 * 24000.0;
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
  __int64 v7; 
  const SndDuck *def; 
  __int64 v9; 
  int v11; 
  float *attenuation; 
  __int64 v16; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  int v30; 
  float *lpf; 
  __int64 v34; 
  __int64 v38; 
  __int64 v39; 
  unsigned __int64 v40; 
  int v49; 
  float *hpf; 
  __int64 v56; 
  float *v57; 
  unsigned __int64 v58; 

  if ( idx < 0 || (unsigned int)idx >= 0x8D )
    return 0;
  v7 = idx;
  if ( type )
    *type = 8;
  if ( id )
    *id = s_sndSubmix.uniques[idx].id;
  if ( effect )
    *effect = s_sndSubmix.uniques[idx].effect;
  def = s_sndSubmix.uniques[idx].def;
  if ( !def )
    return 0;
  v9 = 0i64;
  *(float *)&_XMM6 = FLOAT_1_0;
  if ( maxAttnLinear )
  {
    if ( !def->attenuation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2015, ASSERT_TYPE_ASSERT, "(sub->def->attenuation)", (const char *)&queryFormat, "sub->def->attenuation") )
      __debugbreak();
    v11 = 0;
    *(float *)&_XMM1 = FLOAT_1_0;
    attenuation = s_sndSubmix.uniques[v7].def->attenuation;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      _XMM2 = _xmm;
      _XMM1 = _xmm;
      v16 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4]
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4+10h]
        }
        v16 += 8i64;
        v11 += 8;
      }
      while ( v16 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm1, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM1, _XMM1, 245);
      __asm { vminss  xmm1, xmm1, xmm0 }
    }
    v20 = v11;
    if ( v11 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v11 >= 4 )
      {
        v21 = (__int64)&attenuation[v11 + 2];
        v22 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - v20 - 4) >> 2) + 1;
        v20 += 4 * v22;
        do
        {
          _XMM0 = *(unsigned int *)(v21 - 8);
          v21 += 16i64;
          __asm { vminss  xmm2, xmm0, xmm1 }
          _XMM1 = *(unsigned int *)(v21 - 20);
          __asm
          {
            vminss  xmm0, xmm1, xmm2
            vminss  xmm3, xmm0, dword ptr [rdx-10h]
          }
          _XMM0 = *(unsigned int *)(v21 - 12);
          __asm { vminss  xmm1, xmm0, xmm3 }
          --v22;
        }
        while ( v22 );
      }
      while ( v20 < s_sndSubmix.volmod_groupcount )
      {
        _XMM0 = LODWORD(attenuation[v20++]);
        __asm { vminss  xmm1, xmm0, xmm1 }
      }
    }
    *maxAttnLinear = *(float *)&_XMM1;
  }
  if ( minCutoffLpfHz )
  {
    if ( !s_sndSubmix.uniques[v7].def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2027, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
      __debugbreak();
    if ( !s_sndSubmix.uniques[v7].def->lpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2028, ASSERT_TYPE_ASSERT, "(sub->def->lpf)", (const char *)&queryFormat, "sub->def->lpf") )
      __debugbreak();
    v30 = 0;
    lpf = s_sndSubmix.uniques[v7].def->lpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      _XMM1 = _xmm;
      _XMM2 = _xmm;
      v34 = 0i64;
      do
      {
        __asm
        {
          vminps  xmm1, xmm1, xmmword ptr [r9+rax*4]
          vminps  xmm2, xmm2, xmmword ptr [r9+rax*4+10h]
        }
        v34 += 8i64;
        v30 += 8;
      }
      while ( v34 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vminps  xmm1, xmm1, xmm2
        vmovhlps xmm0, xmm1, xmm1
        vminps  xmm6, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM6, _XMM6, 245);
      __asm { vminss  xmm6, xmm6, xmm0 }
    }
    v38 = v30;
    if ( v30 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v30 >= 4 )
      {
        v39 = (__int64)&lpf[v30 + 2];
        v40 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v30 - 4) >> 2) + 1;
        v38 = v30 + 4 * v40;
        do
        {
          _XMM0 = *(unsigned int *)(v39 - 8);
          _XMM1 = *(unsigned int *)(v39 - 4);
          v39 += 16i64;
          __asm { vminss  xmm2, xmm0, xmm6 }
          _XMM0 = *(unsigned int *)(v39 - 16);
          __asm { vminss  xmm3, xmm1, xmm2 }
          _XMM1 = *(unsigned int *)(v39 - 12);
          __asm
          {
            vminss  xmm2, xmm0, xmm3
            vminss  xmm6, xmm1, xmm2
          }
          --v40;
        }
        while ( v40 );
      }
      while ( v38 < s_sndSubmix.volmod_groupcount )
      {
        _XMM0 = LODWORD(lpf[v38++]);
        __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    *minCutoffLpfHz = (float)((float)(*(float *)&_XMM6 * *(float *)&_XMM6) * *(float *)&_XMM6) * 24000.0;
  }
  if ( maxCutoffHpfHz )
  {
    if ( !s_sndSubmix.uniques[v7].def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2044, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
      __debugbreak();
    if ( !s_sndSubmix.uniques[v7].def->hpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 2045, ASSERT_TYPE_ASSERT, "(sub->def->hpf)", (const char *)&queryFormat, "sub->def->hpf") )
      __debugbreak();
    v49 = 0;
    _XMM1 = 0i64;
    hpf = s_sndSubmix.uniques[v7].def->hpf;
    if ( s_sndSubmix.volmod_groupcount > 0 && s_sndSubmix.volmod_groupcount >= 8u )
    {
      _XMM2 = 0i64;
      do
      {
        __asm
        {
          vmaxps  xmm2, xmm2, xmmword ptr [r8+rbx*4]
          vmaxps  xmm1, xmm1, xmmword ptr [r8+rbx*4+10h]
        }
        v9 += 8i64;
        v49 += 8;
      }
      while ( v9 < s_sndSubmix.volmod_groupcount - s_sndSubmix.volmod_groupcount % 8 );
      __asm
      {
        vmaxps  xmm1, xmm2, xmm1
        vmovhlps xmm0, xmm1, xmm1
        vmaxps  xmm1, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM1, _XMM1, 245);
      __asm { vmaxss  xmm1, xmm1, xmm0 }
    }
    v56 = v49;
    if ( v49 < (__int64)s_sndSubmix.volmod_groupcount )
    {
      if ( s_sndSubmix.volmod_groupcount - (__int64)v49 >= 4 )
      {
        v57 = &hpf[v49 + 2];
        v58 = ((unsigned __int64)(s_sndSubmix.volmod_groupcount - (__int64)v49 - 4) >> 2) + 1;
        v56 += 4 * v58;
        do
        {
          _XMM0 = *((unsigned int *)v57 - 2);
          __asm { vmaxss  xmm2, xmm0, xmm1 }
          _XMM1 = *((unsigned int *)v57 - 1);
          _XMM0 = *(unsigned int *)v57;
          __asm { vmaxss  xmm3, xmm1, xmm2 }
          _XMM1 = *((unsigned int *)v57 + 1);
          v57 += 4;
          __asm
          {
            vmaxss  xmm2, xmm0, xmm3
            vmaxss  xmm1, xmm1, xmm2
          }
          --v58;
        }
        while ( v58 );
      }
      while ( v56 < s_sndSubmix.volmod_groupcount )
      {
        _XMM0 = LODWORD(hpf[v56++]);
        __asm { vmaxss  xmm1, xmm0, xmm1 }
      }
    }
    *maxCutoffHpfHz = *(float *)&_XMM1 * 24000.0;
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
  unsigned int v4; 
  unsigned int id; 
  float v6; 
  float scale; 

  v4 = 0;
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
      v4 = s_sndSubmix.requestsForZones[1]->id;
    *zoneB = v4;
  }
  v6 = 0.0;
  if ( lerpA )
  {
    if ( s_sndSubmix.requestsForZones[0] )
      scale = s_sndSubmix.requestsForZones[0]->scale;
    else
      scale = 0.0;
    *lerpA = scale;
  }
  if ( lerpB )
  {
    if ( s_sndSubmix.requestsForZones[1] )
    {
      *lerpB = s_sndSubmix.requestsForZones[1]->scale;
    }
    else
    {
      if ( s_sndSubmix.requestsForZones[0] )
        v6 = 1.0 - s_sndSubmix.requestsForZones[0]->scale;
      *lerpB = v6;
    }
  }
}

/*
==============
SND_SubmixFade
==============
*/
float SND_SubmixFade(unsigned int fadeType, float t)
{
  if ( t < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 328, ASSERT_TYPE_ASSERT, "(t>= 0.0f)", (const char *)&queryFormat, "t>= 0.0f") )
    __debugbreak();
  if ( fadeType == g_snd.logFastHash )
    return 1.0 - (float)((float)((float)(1.0 - t) * (float)(1.0 - t)) * (float)(1.0 - t));
  if ( fadeType == g_snd.logSlowHash )
    return (float)(t * t) * t;
  if ( fadeType == g_snd.flatEndedHash )
    return (float)((float)(1.0 - t) * (float)((float)(t * t) * 3.0)) + (float)((float)(t * t) * t);
  if ( fadeType == g_snd.flatMiddleHash )
    return (float)((float)((float)(1.0 - t) * (float)(1.0 - t)) * (float)(t * 3.0)) + (float)((float)(t * t) * t);
  return t;
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
  __int64 v1; 
  __int64 v3; 
  int v5; 
  int volmod_groupcount; 

  v1 = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.hpfFilterValue ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.hpfFilterValue\n\t%i not in [0, %i)", volmodIndex, v5) )
      __debugbreak();
  }
  if ( (int)v1 < 0 || (int)v1 > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 274, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v3, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  return s_sndSubmix.hpfFilterValue[v1];
}

/*
==============
SND_SubmixGetLpFilterValue
==============
*/
float SND_SubmixGetLpFilterValue(const int volmodIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 
  int volmod_groupcount; 

  v1 = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 265, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.lpfFilterValue ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.lpfFilterValue\n\t%i not in [0, %i)", volmodIndex, v5) )
      __debugbreak();
  }
  if ( (int)v1 < 0 || (int)v1 > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 266, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v3, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  return s_sndSubmix.lpfFilterValue[v1];
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
  __int64 v1; 
  __int64 v3; 
  int v5; 
  int volmod_groupcount; 

  v1 = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.attenuationValue ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.attenuationValue\n\t%i not in [0, %i)", volmodIndex, v5) )
      __debugbreak();
  }
  if ( (int)v1 < 0 || (int)v1 > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 282, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v3, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  return s_sndSubmix.lpfFilterValue[v1 - 128];
}

/*
==============
SND_SubmixGetVolmodFocusAmount
==============
*/
float SND_SubmixGetVolmodFocusAmount(const int volmodIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 
  int volmod_groupcount; 

  v1 = volmodIndex;
  if ( (unsigned int)volmodIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( volmodIndex ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.focusAmount ) ) + 0 ) )", "volmodIndex doesn't index s_sndSubmix.focusAmount\n\t%i not in [0, %i)", volmodIndex, v5) )
      __debugbreak();
  }
  if ( (int)v1 < 0 || (int)v1 > s_sndSubmix.volmod_groupcount )
  {
    volmod_groupcount = s_sndSubmix.volmod_groupcount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 290, ASSERT_TYPE_ASSERT, "( 0 ) <= ( volmodIndex ) && ( volmodIndex ) <= ( s_sndSubmix.volmod_groupcount )", "volmodIndex not in [0, s_sndSubmix.volmod_groupcount]\n\t%i not in [%i, %i]", v3, 0i64, volmod_groupcount) )
      __debugbreak();
  }
  return s_sndSubmix.focusAmount[v1];
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
  const float **v8; 
  const float *v10; 
  __int64 v11; 
  float *v12; 
  __m256 *v13; 
  const float *v14; 
  __int64 v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  __m256 *v19; 
  __m256 *v20; 
  signed __int64 v21; 
  __m256 v22; 
  signed __int64 v23; 
  __int64 v24; 
  float v25; 
  float v26; 
  _BYTE v27[16]; 

  v8 = (const float **)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0ui64);
  *v8 = negrate;
  v8[1] = rate;
  v10 = negrate;
  v11 = count;
  if ( ((unsigned __int8)rate & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 889, ASSERT_TYPE_ASSERT, "((((intptr_t)rate) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)rate) & 15) == 0") )
    __debugbreak();
  if ( ((unsigned __int8)v10 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 890, ASSERT_TYPE_ASSERT, "((((intptr_t)negrate) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)negrate) & 15) == 0") )
    __debugbreak();
  if ( ((unsigned __int8)target & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 891, ASSERT_TYPE_ASSERT, "((((intptr_t)target) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)target) & 15) == 0") )
    __debugbreak();
  v12 = delta;
  if ( ((unsigned __int8)delta & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 892, ASSERT_TYPE_ASSERT, "((((intptr_t)delta) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)delta) & 15) == 0") )
    __debugbreak();
  v13 = (__m256 *)value;
  if ( ((unsigned __int8)value & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 893, ASSERT_TYPE_ASSERT, "((((intptr_t)value) & 15) == 0)", (const char *)&queryFormat, "(((intptr_t)value) & 15) == 0") )
    __debugbreak();
  if ( (_DWORD)v11 )
  {
    v14 = target;
    v15 = v11;
    do
    {
      v16 = *(const float *)((char *)v14 + (char *)value - (char *)target);
      if ( (rangeMin > v16 || v16 > rangeMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 898, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( value[i] ) && ( value[i] ) <= ( rangeMax )", "value[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v16, rangeMin, rangeMax) )
        __debugbreak();
      v17 = *v14;
      if ( (rangeMin > *v14 || v17 > rangeMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 899, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( target[i] ) && ( target[i] ) <= ( rangeMax )", "target[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v17, rangeMin, rangeMax) )
        __debugbreak();
      ++v14;
      --v15;
    }
    while ( v15 );
    v13 = (__m256 *)value;
    v12 = delta;
    v10 = *v8;
  }
  SND_DspSub(v11, target, v13->m256_f32, v12);
  SND_DspMin(v11, v12, *(const float **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFE0ui64) + 8), v12);
  SND_DspMax(v11, v12, v10, v12);
  if ( ((unsigned __int8)v13 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 349, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v13) )
    __debugbreak();
  if ( ((unsigned __int8)v12 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 350, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v12) )
    __debugbreak();
  if ( ((unsigned __int8)v13 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 351, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v13) )
    __debugbreak();
  if ( (v11 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 352, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v11) )
    __debugbreak();
  v18 = (unsigned int)v11 >> 3;
  if ( (unsigned int)v11 >> 3 )
  {
    v19 = v13;
    v20 = v13;
    v21 = (char *)v12 - (char *)v13;
    do
    {
      ++v19;
      v22 = _mm256_add_ps(*v20, *(__m256 *)((char *)v20 + v21));
      ++v20;
      v19[-1] = v22;
      --v18;
    }
    while ( v18 );
  }
  if ( (_DWORD)v11 )
  {
    v23 = (char *)v13 - (char *)target;
    v24 = v11;
    do
    {
      v25 = *(const float *)((char *)target + v23);
      if ( (rangeMin > v25 || v25 > rangeMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 914, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( value[i] ) && ( value[i] ) <= ( rangeMax )", "value[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v25, rangeMin, rangeMax) )
        __debugbreak();
      v26 = *target;
      if ( (rangeMin > *target || v26 > rangeMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 915, ASSERT_TYPE_ASSERT, "( rangeMin ) <= ( target[i] ) && ( target[i] ) <= ( rangeMax )", "target[i] not in [rangeMin, rangeMax]\n\t%g not in [%g, %g]", v26, rangeMin, rangeMax) )
        __debugbreak();
      ++target;
      --v24;
    }
    while ( v24 );
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
  unsigned int v2; 
  SndSubmixReq **v3; 
  unsigned int v4; 
  SndSubmixReq *requests; 
  __int64 v6; 
  volatile __int32 *p_type; 
  unsigned int v8; 
  SndSubmix *uniques; 
  __int64 v10; 
  __int64 v11; 
  const FocusCone **focusCone; 
  float *result; 
  int v14; 

  v0 = &s_sndSubmix.idsForZones[1];
  for ( i = 0; i < 2; i += 2 )
  {
    *(_QWORD *)(v0 - 1) = 0i64;
    v0 += 2;
  }
  s_sndSubmix.lerpForZones = FLOAT_N1_0;
  v2 = 0;
  v3 = &s_sndSubmix.requestsForZones[1];
  do
  {
    v2 += 2;
    *(v3 - 1) = NULL;
    *v3 = NULL;
    v3 += 2;
  }
  while ( v2 < 2 );
  v4 = 0;
  requests = s_sndSubmix.requests;
  do
  {
    v6 = (int)v4;
    *(_QWORD *)&s_sndSubmix.requests[v6].id = 0i64;
    p_type = &s_sndSubmix.requests[v4].type;
    s_sndSubmix.requests[v6].def = NULL;
    *(_QWORD *)&s_sndSubmix.requests[v6].startTime = 0i64;
    *(_QWORD *)&s_sndSubmix.requests[v6].fadeInTimeSec = 0i64;
    *(_QWORD *)&s_sndSubmix.requests[v6].scale = 0i64;
    s_sndSubmix.requests[v6].voice = NULL;
    requests->id = 0;
    if ( ((unsigned __int8)p_type & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_sndSubmix.requests[v4].type) )
      __debugbreak();
    ++v4;
    ++requests;
    _InterlockedExchange(p_type, -3);
  }
  while ( v4 < 0x8D );
  v8 = 0;
  uniques = s_sndSubmix.uniques;
  do
  {
    v10 = (int)v8;
    ++uniques;
    ++v8;
    v11 = v10;
    *(_QWORD *)&s_sndSubmix.uniques[v11].id = 0i64;
    *(_QWORD *)&s_sndSubmix.uniques[v11].effect = 0i64;
    s_sndSubmix.uniques[v11].def = NULL;
    uniques[-1].id = 0;
  }
  while ( v8 < 0x8D );
  s_sndSubmix.unique_count = 0;
  focusCone = s_sndSubmix.focusCone;
  s_sndSubmix.volmod_groupcount = 128;
  result = s_sndSubmix.hpfFilterValue;
  v14 = 0;
  do
  {
    *(result - 256) = 1.0;
    ++v14;
    *result = 0.0;
    ++focusCone;
    *(result - 128) = 1.0;
    result[128] = 0.0;
    result[256] = 0.0;
    ++result;
    *(focusCone - 1) = NULL;
  }
  while ( v14 < s_sndSubmix.volmod_groupcount );
  return result;
}

/*
==============
SND_SubmixRestore
==============
*/
void SND_SubmixRestore(MemoryFile *memFile)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  __int64 v5; 
  SndSubmixReq *v6; 
  int v7; 
  const SndDuck *DuckById; 
  int v9; 
  SndVoice *v10; 
  int v11; 
  double Float; 
  double v13; 
  double v14; 
  double v15; 
  const dvar_t *v16; 
  unsigned int *focusConeId; 
  const FocusCone **focusCone; 
  const FocusCone *FocusConeById; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  int v23[3]; 
  char v24; 
  unsigned int p; 
  unsigned int v26; 

  SND_SubmixResetGlobalState();
  MemFile_ReadData(memFile, 4ui64, &p);
  v2 = p;
  v3 = p;
  if ( p != 0x7FFFFFFF )
  {
    v4 = p;
    while ( 1 )
    {
      if ( v4 >= 0x8D )
      {
        LODWORD(v21) = 141;
        LODWORD(v20) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.requests ) ) + 0 ) )", "idx doesn't index s_sndSubmix.requests\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v5 = v3;
      v6 = &s_sndSubmix.requests[v5];
      MemFile_ReadData(memFile, 4ui64, &v26);
      v7 = v26;
      v6->id = v26;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 992, ASSERT_TYPE_ASSERT, "(sub->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id != SND_INVALID_HASH") )
        __debugbreak();
      if ( !v6->id )
        break;
      DuckById = SND_GetDuckById(v6->id);
      s_sndSubmix.requests[v5].def = DuckById;
      if ( !DuckById )
        goto LABEL_12;
LABEL_14:
      MemFile_ReadData(memFile, 1ui64, &v24);
      s_sndSubmix.requests[v5].type = v24;
      v9 = SND_RestoreVoiceIndex(memFile);
      if ( v9 < 0 || (unsigned __int64)v9 >= 0x63 )
      {
        if ( v9 != 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1003, ASSERT_TYPE_ASSERT, "(voiceIndex == int(2147483647))", (const char *)&queryFormat, "voiceIndex == SND_SUBMIX_NO_VOICE") )
          __debugbreak();
        v10 = NULL;
      }
      else
      {
        v10 = &g_snd.voices[v9];
      }
      s_sndSubmix.requests[v5].voice = v10;
      MemFile_ReadData(memFile, 4ui64, &v22);
      s_sndSubmix.requests[v5].startTime = v22 + g_snd.time;
      MemFile_ReadData(memFile, 4ui64, v23);
      v11 = v23[0];
      s_sndSubmix.requests[v5].endTime = v23[0];
      if ( v11 )
        s_sndSubmix.requests[v5].endTime = g_snd.time + v11;
      Float = MemFile_ReadFloat(memFile);
      s_sndSubmix.requests[v5].fadeInTimeSec = *(float *)&Float;
      v13 = MemFile_ReadFloat(memFile);
      s_sndSubmix.requests[v5].fadeOutTimeSec = *(float *)&v13;
      v14 = MemFile_ReadFloat(memFile);
      s_sndSubmix.requests[v5].scale = *(float *)&v14;
      v15 = MemFile_ReadFloat(memFile);
      v16 = DVARBOOL_snd_submix_restore_workaround_enable;
      s_sndSubmix.requests[v5].effect = *(float *)&v15;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_restore_workaround_enable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled && !s_sndSubmix.requests[v5].def )
        SND_SubmixReclaim(&s_sndSubmix.requests[v5]);
      MemFile_ReadData(memFile, 4ui64, &p);
      v2 = p;
      v3 = p;
      v4 = p;
      if ( p == 0x7FFFFFFF )
        goto LABEL_30;
    }
    s_sndSubmix.requests[v5].def = NULL;
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
  volatile int *p_type; 
  const SndVoice *v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12[16]; 
  char v13; 
  unsigned int p; 
  int v15; 

  v1 = 0;
  p_type = &s_sndSubmix.requests[0].type;
  do
  {
    if ( !SND_SubmixAssert((const SndSubmixReq *const)(p_type - 1), 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1050, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( sub, true ))", (const char *)&queryFormat, "SND_SubmixAssert( sub, true )") )
      __debugbreak();
    if ( *p_type != -3 && *p_type != 1 )
    {
      p = v1;
      MemFile_WriteData(memFile, 4ui64, &p);
      v15 = *((_DWORD *)p_type - 1);
      MemFile_WriteData(memFile, 4ui64, &v15);
      if ( *(int *)p_type < -128 || *(int *)p_type > 127 )
      {
        LODWORD(v8) = 127;
        LODWORD(v7) = -128;
        LODWORD(v6) = *p_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1066, ASSERT_TYPE_ASSERT, "( (-128) ) <= ( sub->type ) && ( sub->type ) <= ( 127 )", "sub->type not in [SCHAR_MIN, SCHAR_MAX]\n\t%i not in [%i, %i]", v6, v7, v8) )
          __debugbreak();
      }
      v13 = *p_type;
      MemFile_WriteData(memFile, 1ui64, &v13);
      v4 = *(const SndVoice **)(p_type + 9);
      if ( v4 )
      {
        SND_SaveVoiceIndex(memFile, v4);
      }
      else
      {
        v9 = 0x7FFFFFFF;
        MemFile_WriteData(memFile, 4ui64, &v9);
      }
      v10 = *((_DWORD *)p_type + 3) - g_snd.time;
      MemFile_WriteData(memFile, 4ui64, &v10);
      v5 = 0;
      if ( *((_DWORD *)p_type + 4) )
        v5 = *((_DWORD *)p_type + 4) - g_snd.time;
      v11 = v5;
      MemFile_WriteData(memFile, 4ui64, &v11);
      MemFile_WriteFloat(memFile, *((float *)p_type + 5));
      MemFile_WriteFloat(memFile, *((float *)p_type + 6));
      MemFile_WriteFloat(memFile, *((float *)p_type + 7));
      MemFile_WriteFloat(memFile, *((float *)p_type + 8));
    }
    ++v1;
    p_type += 12;
  }
  while ( v1 < 0x8D );
  v12[0] = 0x7FFFFFFF;
  MemFile_WriteData(memFile, 4ui64, v12);
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
void SND_SubmixSetOnVoiceStart(SndVoice *voice, float dt)
{
  const dvar_t *v3; 
  const SndDuck *submixDef; 
  SndSubmixReq *submixRef; 
  const char *v6; 
  int v7; 
  const char *v8; 
  float distance; 
  SndSubmixReq *v10; 

  SND_FaderUpdate(&voice->submixAttenuation, dt);
  SND_FaderUpdate(&voice->submixHpf, dt);
  SND_FaderUpdate(&voice->submixLpf, dt);
  v3 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    goto LABEL_14;
  submixDef = voice->submixDef;
  submixRef = voice->submixRef;
  if ( !submixDef )
  {
    if ( !submixRef )
      return;
    v6 = "voice->submixRef == nullptr";
    v7 = 1818;
    v8 = "(voice->submixRef == nullptr)";
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
      __debugbreak();
    return;
  }
  if ( !submixRef && voice->soundFileInfo.loadingState == SFLS_LOADED )
  {
    distance = submixDef->distance;
    if ( distance <= 0.0000152879 && distance >= -0.0000152879 || SND_IsAliasSpatial(voice->alias) )
    {
      v10 = SND_SubmixAddFromVoiceAlias(voice);
      if ( v10 )
      {
        voice->submixRef = v10;
        if ( SND_SubmixAssert(v10, 1) )
          return;
        v6 = "SND_SubmixAssert( req, true )";
        v7 = 1855;
        v8 = "(SND_SubmixAssert( req, true ))";
        goto LABEL_20;
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_submix_disable_alias, "snd_submix_disable_alias") )
        return;
      Com_PrintError(9, "SOUND: failed to get submix for duck \"%s\" on alias \"%s\"\n", voice->submixDef, voice->alias->aliasName);
    }
    else
    {
      Com_PrintError(9, "SOUND: cannot use a submix duck with distance \"%s\" on a 2d alias \"%s\"\n", voice->submixDef, voice->alias->aliasName);
    }
LABEL_14:
    voice->submixDef = NULL;
  }
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
  unsigned int v6; 
  const SndDuck *DuckById; 

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
        v6 = SND_HashName(name);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 695, ASSERT_TYPE_ASSERT, "(id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "id != SND_INVALID_HASH") )
          __debugbreak();
        if ( v5->def->id != v6 )
        {
          if ( v6 && (DuckById = SND_GetDuckById(v6)) != NULL )
          {
            if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_snd_submix_disable_lua, "snd_submix_disable_lua") )
              SND_SubmixAddNew(v5, DuckById, NULL, 0, 0, -1.0, 1.0);
          }
          else
          {
            Com_PrintError(9, "SOUND: failed to get submix for def \"%s\" requested from LUA\n", name);
          }
        }
      }
      else
      {
        SND_SubmixClearForFade(Slot, -1.0);
      }
    }
  }
}

/*
==============
SND_SubmixSetSlotsFromZones
==============
*/
void SND_SubmixSetSlotsFromZones(unsigned int idA, unsigned int idB, const float lerp)
{
  const dvar_t *v3; 
  const dvar_t *v6; 
  unsigned int zoneB; 
  unsigned int id; 

  v3 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    v6 = DCONST_DVARBOOL_snd_submix_disable_zone;
    if ( !DCONST_DVARBOOL_snd_submix_disable_zone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_zone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled )
    {
      zoneB = 0;
      s_sndSubmix.idsForZones[0] = idA;
      s_sndSubmix.idsForZones[1] = idB;
      s_sndSubmix.lerpForZones = lerp;
      if ( s_sndSubmix.requestsForZones[0] )
        id = s_sndSubmix.requestsForZones[0]->id;
      else
        id = 0;
      if ( s_sndSubmix.requestsForZones[1] )
        zoneB = s_sndSubmix.requestsForZones[1]->id;
      SND_SubmixDebugRecordZones(g_snd.time, idA, idB, lerp, id, zoneB);
    }
  }
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
void SND_SubmixStopAllFromVoiceAlias(void)
{
  unsigned int v0; 
  SndSubmixReq *requests; 

  v0 = 0;
  requests = s_sndSubmix.requests;
  do
  {
    if ( requests->type == 99 )
      SND_SubmixClearForFade(requests, 0.0);
    ++v0;
    ++requests;
  }
  while ( v0 < 0x8D );
}

/*
==============
SND_SubmixStopFromVoice
==============
*/
void SND_SubmixStopFromVoice(SndVoice *voice)
{
  SndSubmixReq *submixRef; 
  int endTime; 

  if ( !voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 853, ASSERT_TYPE_ASSERT, "(voice)", (const char *)&queryFormat, "voice") )
    __debugbreak();
  submixRef = voice->submixRef;
  if ( submixRef )
  {
    if ( !SND_SubmixAssert(submixRef, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 860, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
    if ( voice->paused || submixRef->effect < 0.0000152879 )
    {
      SND_SubmixReclaim(submixRef);
    }
    else
    {
      if ( submixRef->def->length == 0.0 )
      {
        endTime = submixRef->endTime;
        if ( !endTime || g_snd.time < endTime )
          submixRef->endTime = g_snd.time;
      }
      submixRef->voice = NULL;
      voice->submixRef = NULL;
      voice->submixDef = NULL;
      if ( !SND_SubmixAssert(submixRef, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 875, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
        __debugbreak();
    }
  }
}

/*
==============
SND_SubmixUpdate
==============
*/
void SND_SubmixUpdate(float dt, const bool isSplitscreen)
{
  const dvar_t *v5; 
  float *attenuationValue; 
  __int64 i; 
  float *hpfFilterValue; 
  __int64 j; 
  float *lpfFilterValue; 
  __int64 k; 
  float *focusAmount; 
  __int64 m; 
  __int64 v14; 
  unsigned int *focusConeId; 
  const FocusCone **focusCone; 
  __int64 v17; 
  const dvar_t *v18; 
  const char *string; 
  SndSubmixReq *Slot; 
  SndSubmixReq *Available; 
  unsigned int v22; 
  const SndDuck *DuckById; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  float lerpForZones; 
  unsigned int *p_rate; 
  unsigned int n; 
  __int128 v32; 
  int v44; 
  const SndDuck **p_def; 
  char v46; 
  const dvar_t *v47; 
  float *v48; 
  __int64 ii; 
  float *v50; 
  __int64 jj; 
  float *v52; 
  __int64 kk; 
  float *v54; 
  __int64 mm; 
  __int64 v56; 
  unsigned int *v57; 
  const FocusCone **v58; 
  __int64 v59; 
  const dvar_t *v60; 
  float *v61; 
  __int64 nn; 
  const dvar_t *v63; 
  float *v64; 
  __int64 i1; 
  const dvar_t *v66; 
  float *v67; 
  __int64 i2; 
  const dvar_t *v69; 
  float *v70; 
  __int64 i3; 
  __int64 v72; 
  unsigned int *v73; 
  const FocusCone **v74; 
  __int64 v75; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_OCCLUSION) && SND_CanDoPhysicsQuery() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1395, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_OCCLUSION ) || !SND_CanDoPhysicsQuery())", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_OCCLUSION ) || !SND_CanDoPhysicsQuery()") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_SOUND_VOICE_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1396, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_VOICE_UPDATE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_SOUND_VOICE_UPDATE )") )
    __debugbreak();
  v5 = DCONST_DVARBOOL_snd_submix_dev_cutout;
  if ( !DCONST_DVARBOOL_snd_submix_dev_cutout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_dev_cutout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    attenuationValue = s_sndSubmix.attenuationValue;
    for ( i = 128i64; i; --i )
      *attenuationValue++ = FLOAT_1_0;
    hpfFilterValue = s_sndSubmix.hpfFilterValue;
    for ( j = 128i64; j; --j )
      *hpfFilterValue++ = 0.0;
    lpfFilterValue = s_sndSubmix.lpfFilterValue;
    for ( k = 128i64; k; --k )
      *lpfFilterValue++ = FLOAT_1_0;
    focusAmount = s_sndSubmix.focusAmount;
    for ( m = 128i64; m; --m )
      *focusAmount++ = 0.0;
    v14 = 8i64;
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
      --v14;
    }
    while ( v14 );
    focusCone = s_sndSubmix.focusCone;
    v17 = 16i64;
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
      --v17;
    }
    while ( v17 );
  }
  else
  {
    v18 = DCONST_DVARSTR_snd_submix_debug;
    if ( !DCONST_DVARSTR_snd_submix_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    string = v18->current.string;
    Slot = SND_SubmixFindSlot(1);
    Available = Slot;
    if ( string && *string )
    {
      v22 = SND_HashName(string);
      if ( v22 )
      {
        if ( !Available || Available->id != v22 )
        {
          DuckById = SND_GetDuckById(v22);
          if ( DuckById )
          {
            if ( Available || (Available = SND_SubmixFindAvailable()) != NULL )
            {
              Com_Printf(0, "SOUND: setting submix slot for def \"%s\" requested from DEBUG dvar\n", string);
              SND_SubmixAddNew(Available, DuckById, NULL, 1, 0, -1.0, 1.0);
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
      _XMM1 = LODWORD(FLOAT_N1_0);
      SND_SubmixClearForFade(Slot, -1.0);
    }
    v24 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_SubmixUpdate");
    v25 = s_sndSubmix.idsForZones[1];
    v26 = s_sndSubmix.idsForZones[0];
    lerpForZones = s_sndSubmix.lerpForZones;
    if ( s_sndSubmix.idsForZones[1] )
    {
      if ( s_sndSubmix.idsForZones[0] == s_sndSubmix.idsForZones[1] )
      {
        v25 = 0;
        lerpForZones = 0.0;
      }
      else if ( s_sndSubmix.lerpForZones < 0.0 || s_sndSubmix.lerpForZones > 1.0 )
      {
        __asm { vxorpd  xmm1, xmm1, xmm1 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1711, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", s_sndSubmix.lerpForZones, *(double *)&_XMM1, DOUBLE_1_0) )
          __debugbreak();
      }
    }
    else
    {
      lerpForZones = 0.0;
    }
    s_sndSubmix.requestsForZones[0] = SND_SubmixUpdateSlotFromZone(s_sndSubmix.requestsForZones[0], v26, 1.0 - lerpForZones);
    s_sndSubmix.requestsForZones[1] = SND_SubmixUpdateSlotFromZone(s_sndSubmix.requestsForZones[1], v25, lerpForZones);
    p_rate = (unsigned int *)&g_snd.voices[0].submixAttenuation.rate;
    for ( n = 0; n < 0x63; ++n )
    {
      if ( !SND_IsVoiceFree(n) )
      {
        _XMM2 = *(p_rate - 2);
        v32 = *p_rate;
        *(p_rate - 1) = 1065353216;
        _XMM0 = v32 & (unsigned int)_xmm;
        __asm
        {
          vcmpless xmm1, xmm0, xmm9
          vblendvps xmm0, xmm2, xmm8, xmm1
        }
        *(p_rate - 2) = _XMM0;
        _XMM2 = p_rate[4];
        _XMM0 = p_rate[6] & (unsigned __int128)(unsigned int)_xmm;
        __asm { vcmpless xmm1, xmm0, xmm9 }
        p_rate[5] = 1065353216;
        __asm { vblendvps xmm0, xmm2, xmm8, xmm1 }
        p_rate[4] = _XMM0;
        _XMM2 = p_rate[1];
        _XMM0 = p_rate[3] & (unsigned __int128)(unsigned int)_xmm;
        __asm
        {
          vcmpless xmm1, xmm0, xmm9
          vblendvps xmm0, xmm2, xmm8, xmm1
        }
        p_rate[1] = _XMM0;
        p_rate[2] = 1065353216;
      }
      p_rate += 492;
    }
    SND_SubmixUpdateCollateUniques();
    v44 = 0;
    if ( s_sndSubmix.unique_count > 0 )
    {
      p_def = &s_sndSubmix.uniques[0].def;
      do
      {
        if ( !*((_DWORD *)p_def - 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1454, ASSERT_TYPE_ASSERT, "(sub->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id != SND_INVALID_HASH") )
          __debugbreak();
        v46 = *((_BYTE *)p_def - 12);
        if ( ((v46 & 1) == 0 || !isSplitscreen) && (!g_snd.paused || (v46 & 2) != 0) && (v46 & 4) != 0 )
          SND_SubmixUpdateVoiceFaders(*p_def);
        ++v44;
        p_def += 3;
      }
      while ( v44 < s_sndSubmix.unique_count );
    }
    s_sndSubmix.volmod_groupcount = SND_SubmixUpdateBuffers(dt);
    g_snd.updateDuckUsec = Sys_Microseconds() - v24;
    Sys_ProfEndNamedEvent();
    v47 = DCONST_DVARBOOL_snd_submix_disable;
    if ( !DCONST_DVARBOOL_snd_submix_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled )
    {
      v48 = s_sndSubmix.attenuationValue;
      for ( ii = 128i64; ii; --ii )
        *v48++ = FLOAT_1_0;
      v50 = s_sndSubmix.hpfFilterValue;
      for ( jj = 128i64; jj; --jj )
        *v50++ = 0.0;
      v52 = s_sndSubmix.lpfFilterValue;
      for ( kk = 128i64; kk; --kk )
        *v52++ = FLOAT_1_0;
      v54 = s_sndSubmix.focusAmount;
      for ( mm = 128i64; mm; --mm )
        *v54++ = 0.0;
      v56 = 8i64;
      v57 = s_sndSubmix.focusConeId;
      do
      {
        *(_QWORD *)v57 = 0i64;
        *((_QWORD *)v57 + 1) = 0i64;
        *((_QWORD *)v57 + 2) = 0i64;
        v57 += 16;
        *((_QWORD *)v57 - 5) = 0i64;
        *((_QWORD *)v57 - 4) = 0i64;
        *((_QWORD *)v57 - 3) = 0i64;
        *((_QWORD *)v57 - 2) = 0i64;
        *((_QWORD *)v57 - 1) = 0i64;
        --v56;
      }
      while ( v56 );
      v58 = s_sndSubmix.focusCone;
      v59 = 16i64;
      do
      {
        *v58 = NULL;
        v58[1] = NULL;
        v58[2] = NULL;
        v58 += 8;
        *(v58 - 5) = NULL;
        *(v58 - 4) = NULL;
        *(v58 - 3) = NULL;
        *(v58 - 2) = NULL;
        *(v58 - 1) = NULL;
        --v59;
      }
      while ( v59 );
    }
    else
    {
      v60 = DCONST_DVARBOOL_snd_submix_disable_att;
      if ( !DCONST_DVARBOOL_snd_submix_disable_att && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_att") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v60);
      if ( v60->current.enabled )
      {
        v61 = s_sndSubmix.attenuationValue;
        for ( nn = 128i64; nn; --nn )
          *v61++ = FLOAT_1_0;
      }
      v63 = DCONST_DVARBOOL_snd_submix_disable_hpf;
      if ( !DCONST_DVARBOOL_snd_submix_disable_hpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_hpf") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v63->current.enabled )
      {
        v64 = s_sndSubmix.hpfFilterValue;
        for ( i1 = 128i64; i1; --i1 )
          *v64++ = 0.0;
      }
      v66 = DCONST_DVARBOOL_snd_submix_disable_lpf;
      if ( !DCONST_DVARBOOL_snd_submix_disable_lpf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_lpf") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      if ( v66->current.enabled )
      {
        v67 = s_sndSubmix.lpfFilterValue;
        for ( i2 = 128i64; i2; --i2 )
          *v67++ = FLOAT_1_0;
      }
      v69 = DCONST_DVARBOOL_snd_submix_disable_focuscone;
      if ( !DCONST_DVARBOOL_snd_submix_disable_focuscone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_submix_disable_focuscone") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v69);
      if ( v69->current.enabled )
      {
        v70 = s_sndSubmix.focusAmount;
        for ( i3 = 128i64; i3; --i3 )
          *v70++ = 0.0;
        v72 = 8i64;
        v73 = s_sndSubmix.focusConeId;
        do
        {
          *(_QWORD *)v73 = 0i64;
          *((_QWORD *)v73 + 1) = 0i64;
          *((_QWORD *)v73 + 2) = 0i64;
          v73 += 16;
          *((_QWORD *)v73 - 5) = 0i64;
          *((_QWORD *)v73 - 4) = 0i64;
          *((_QWORD *)v73 - 3) = 0i64;
          *((_QWORD *)v73 - 2) = 0i64;
          *((_QWORD *)v73 - 1) = 0i64;
          --v72;
        }
        while ( v72 );
        v74 = s_sndSubmix.focusCone;
        v75 = 16i64;
        do
        {
          *v74 = NULL;
          v74[1] = NULL;
          v74[2] = NULL;
          v74 += 8;
          *(v74 - 5) = NULL;
          *(v74 - 4) = NULL;
          *(v74 - 3) = NULL;
          *(v74 - 2) = NULL;
          *(v74 - 1) = NULL;
          --v75;
        }
        while ( v75 );
      }
    }
  }
}

/*
==============
SND_SubmixUpdateBuffers
==============
*/

__int64 __fastcall SND_SubmixUpdateBuffers(double dt)
{
  signed __int64 v1; 
  void *v3; 
  unsigned __int64 v4; 
  __int128 v5; 
  signed int volmodinfoCount; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  float v10; 
  float *v11; 
  __int64 i; 
  float v13; 
  float *v14; 
  __int64 j; 
  float v16; 
  float *v17; 
  __int64 k; 
  float v19; 
  float *v20; 
  __int64 m; 
  float v22; 
  float *v23; 
  __int64 n; 
  float v25; 
  float *v26; 
  __int64 ii; 
  float v28; 
  float *v29; 
  __int64 jj; 
  __int64 v31; 
  unsigned int *focusConeId; 
  unsigned int *v33; 
  bool v34; 
  __int64 v36; 
  float v37; 
  __int64 v38; 
  const SndDuck *def; 
  __int64 kk; 
  float v41; 
  unsigned __int64 mm; 
  unsigned int *focusCone; 
  unsigned int v44; 
  float v45; 
  unsigned int v46; 
  float v47; 
  unsigned int v48; 
  float v49; 
  unsigned int v50; 
  float v51; 
  unsigned int v52; 
  float v53; 
  unsigned int v54; 
  float v55; 
  unsigned int v56; 
  float v57; 
  unsigned int v58; 
  float v59; 
  unsigned int v60; 
  float v61; 
  unsigned int v62; 
  float v63; 
  unsigned int v64; 
  float v65; 
  unsigned int v66; 
  float v67; 
  unsigned int v68; 
  float v69; 
  unsigned int v70; 
  float v71; 
  unsigned int v72; 
  float v73; 
  unsigned int v74; 
  float v75; 
  float *attenuation; 
  __m128 effect_low; 
  const float *hpf; 
  float *lpf; 
  const float *focusAmount; 
  const float *v81; 
  __int64 v82; 
  unsigned int v84; 
  unsigned __int64 v86; 
  __int64 v87; 
  __m256 *v88; 
  __m256i v89; 
  unsigned __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  __m256i v93; 
  unsigned __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __m256i v97; 
  __int64 v98; 
  __m256 v99; 
  unsigned __int64 v100; 
  __int64 v101; 
  __m256 *v102; 
  __m256i v103; 
  unsigned __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __m256i v107; 
  __int64 v108; 
  unsigned __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  const float *v114; 
  unsigned __int64 v115; 
  __int64 v116; 
  unsigned __int64 v117; 
  int v118; 
  unsigned __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  __m256i v122; 
  unsigned __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  unsigned __int64 v128; 
  __int64 v129; 
  unsigned __int64 v130; 
  unsigned __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  __m256i v134; 
  __int64 v135; 
  unsigned __int64 v136; 
  __int64 v137; 
  __int64 v138; 
  __int64 v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  __int128 v147; 
  int v149; 
  _DWORD *v150; 
  __int64 nn; 
  int v152; 
  _DWORD *v153; 
  __int64 i1; 
  float *hpfFilterValue; 
  const FocusCone **v156; 
  const FocusCone *FocusConeById; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  __int64 v163; 
  __int64 v164; 
  __int64 v165; 
  char v166[5232]; 
  __int128 v167; 

  v3 = alloca(v1);
  v167 = _XMM9;
  v4 = (unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1460) = (unsigned __int64)&v163 ^ _security_cookie;
  v5 = *(_OWORD *)&dt;
  if ( !g_snd.globals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1141, ASSERT_TYPE_ASSERT, "(g_snd.globals)", (const char *)&queryFormat, "g_snd.globals") )
    __debugbreak();
  volmodinfoCount = g_snd.globals->volmodinfoCount;
  *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = volmodinfoCount;
  if ( volmodinfoCount > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1143, ASSERT_TYPE_ASSERT, "(groupCountActual <= 128)", (const char *)&queryFormat, "groupCountActual <= SND_MAX_VOLMOD") )
    __debugbreak();
  v7 = 8i64;
  LODWORD(v8) = volmodinfoCount + (8 - volmodinfoCount % 8) % 8;
  *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = v8;
  v9 = v8 & 7;
  *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = v9;
  if ( (v8 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1146, ASSERT_TYPE_ASSERT, "((groupCount & 7) == 0)", (const char *)&queryFormat, "(groupCount & 7) == 0") )
    __debugbreak();
  if ( (int)v8 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1147, ASSERT_TYPE_ASSERT, "(groupCount <= 128)", (const char *)&queryFormat, "groupCount <= SND_MAX_VOLMOD") )
    __debugbreak();
  *(const float *)v4 = FLOAT_1_0;
  v10 = *(float *)v4;
  v11 = (float *)(v4 + 2144);
  *(float *)v4 = 0;
  for ( i = (unsigned int)v8; i; --i )
    *v11++ = v10;
  v13 = *(float *)v4;
  v14 = (float *)(v4 + 2656);
  *(const float *)v4 = FLOAT_1_0;
  for ( j = (unsigned int)v8; j; --j )
    *v14++ = v13;
  v16 = *(float *)v4;
  v17 = (float *)(v4 + 3168);
  *(float *)v4 = 0;
  for ( k = (unsigned int)v8; k; --k )
    *v17++ = v16;
  v19 = *(float *)v4;
  v20 = (float *)(v4 + 3680);
  *(const float *)v4 = FLOAT_1_0;
  for ( m = (unsigned int)v8; m; --m )
    *v20++ = v19;
  v22 = *(float *)v4;
  v23 = (float *)(v4 + 1120);
  *(float *)v4 = 0;
  for ( n = (unsigned int)v8; n; --n )
    *v23++ = v22;
  v25 = *(float *)v4;
  v26 = (float *)(v4 + 1632);
  for ( ii = (unsigned int)v8; ii; --ii )
    *v26++ = v25;
  *(float *)v4 = 0;
  v28 = *(float *)v4;
  v29 = (float *)(v4 + 96);
  for ( jj = (unsigned int)v8; jj; --jj )
    *v29++ = v28;
  v31 = (unsigned int)v8;
  *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = (unsigned int)v8;
  memset_0((void *)(v4 + 608), 0, 0x200ui64);
  focusConeId = s_sndSubmix.focusConeId;
  v33 = s_sndSubmix.focusConeId;
  do
  {
    *(_QWORD *)v33 = 0i64;
    *((_QWORD *)v33 + 1) = 0i64;
    *((_QWORD *)v33 + 2) = 0i64;
    v33 += 16;
    *((_QWORD *)v33 - 5) = 0i64;
    *((_QWORD *)v33 - 4) = 0i64;
    *((_QWORD *)v33 - 3) = 0i64;
    *((_QWORD *)v33 - 2) = 0i64;
    *((_QWORD *)v33 - 1) = 0i64;
    --v7;
  }
  while ( v7 );
  v34 = s_sndSubmix.unique_count <= 0;
  *(_DWORD *)v4 = 0;
  __asm { vxorpd  xmm9, xmm9, xmm9 }
  if ( !v34 )
  {
    v36 = 0i64;
    *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    v37 = 0.0;
    do
    {
      v38 = v36;
      if ( s_sndSubmix.uniques[v38].id )
      {
        def = s_sndSubmix.uniques[v38].def;
        if ( !def )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1188, ASSERT_TYPE_ASSERT, "(submixDef)", (const char *)&queryFormat, "submixDef") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 172, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
        }
        for ( kk = 0i64; kk < 128; ++kk )
        {
          v41 = def->attenuation[kk];
          if ( (v41 < 0.0 || v41 > 1000000.2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 176, ASSERT_TYPE_ASSERT, "( SND_dBToLinear((-100.0f)) ) <= ( val ) && ( val ) <= ( SND_dBToLinear( (120.0f) ) )", "val not in [SND_dBToLinear(SND_SUBMIX_ATTENUATION_MAX_DB), SND_dBToLinear( SND_SUBMIX_AMPLIFICATION_MAX_DB )]\n\t%g not in [%g, %g]", v41, *(double *)&_XMM9, DOUBLE_1000000_205867171) )
            __debugbreak();
        }
        for ( mm = 0i64; (__int64)mm < 128; mm += 16i64 )
        {
          focusCone = def->focusCone;
          v44 = focusCone[mm];
          if ( v44 )
          {
            v45 = def->focusAmount[mm];
            if ( v45 > *(float *)(v4 + mm * 4 + 608) )
            {
              s_sndSubmix.focusConeId[mm] = v44;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 608) = v45;
            }
          }
          v46 = focusCone[mm + 1];
          if ( v46 )
          {
            v47 = def->focusAmount[mm + 1];
            if ( v47 > *(float *)(v4 + mm * 4 + 612) )
            {
              s_sndSubmix.focusConeId[mm + 1] = v46;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 612) = v47;
            }
          }
          v48 = focusCone[mm + 2];
          if ( v48 )
          {
            v49 = def->focusAmount[mm + 2];
            if ( v49 > *(float *)(v4 + mm * 4 + 616) )
            {
              s_sndSubmix.focusConeId[mm + 2] = v48;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 616) = v49;
            }
          }
          v50 = focusCone[mm + 3];
          if ( v50 )
          {
            v51 = def->focusAmount[mm + 3];
            if ( v51 > *(float *)(v4 + mm * 4 + 620) )
            {
              s_sndSubmix.focusConeId[mm + 3] = v50;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 620) = v51;
            }
          }
          v52 = focusCone[mm + 4];
          if ( v52 )
          {
            v53 = def->focusAmount[mm + 4];
            if ( v53 > *(float *)(v4 + mm * 4 + 624) )
            {
              s_sndSubmix.focusConeId[mm + 4] = v52;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 624) = v53;
            }
          }
          v54 = focusCone[mm + 5];
          if ( v54 )
          {
            v55 = def->focusAmount[mm + 5];
            if ( v55 > *(float *)(v4 + mm * 4 + 628) )
            {
              s_sndSubmix.focusConeId[mm + 5] = v54;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 628) = v55;
            }
          }
          v56 = focusCone[mm + 6];
          if ( v56 )
          {
            v57 = def->focusAmount[mm + 6];
            if ( v57 > *(float *)(v4 + mm * 4 + 632) )
            {
              s_sndSubmix.focusConeId[mm + 6] = v56;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 632) = v57;
            }
          }
          v58 = focusCone[mm + 7];
          if ( v58 )
          {
            v59 = def->focusAmount[mm + 7];
            if ( v59 > *(float *)(v4 + mm * 4 + 636) )
            {
              s_sndSubmix.focusConeId[mm + 7] = v58;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 636) = v59;
            }
          }
          v60 = focusCone[mm + 8];
          if ( v60 )
          {
            v61 = def->focusAmount[mm + 8];
            if ( v61 > *(float *)(v4 + mm * 4 + 640) )
            {
              s_sndSubmix.focusConeId[mm + 8] = v60;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 640) = v61;
            }
          }
          v62 = focusCone[mm + 9];
          if ( v62 )
          {
            v63 = def->focusAmount[mm + 9];
            if ( v63 > *(float *)(v4 + mm * 4 + 644) )
            {
              s_sndSubmix.focusConeId[mm + 9] = v62;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 644) = v63;
            }
          }
          v64 = focusCone[mm + 10];
          if ( v64 )
          {
            v65 = def->focusAmount[mm + 10];
            if ( v65 > *(float *)(v4 + mm * 4 + 648) )
            {
              s_sndSubmix.focusConeId[mm + 10] = v64;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 648) = v65;
            }
          }
          v66 = focusCone[mm + 11];
          if ( v66 )
          {
            v67 = def->focusAmount[mm + 11];
            if ( v67 > *(float *)(v4 + mm * 4 + 652) )
            {
              s_sndSubmix.focusConeId[mm + 11] = v66;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 652) = v67;
            }
          }
          v68 = focusCone[mm + 12];
          if ( v68 )
          {
            v69 = def->focusAmount[mm + 12];
            if ( v69 > *(float *)(v4 + mm * 4 + 656) )
            {
              s_sndSubmix.focusConeId[mm + 12] = v68;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 656) = v69;
            }
          }
          v70 = focusCone[mm + 13];
          if ( v70 )
          {
            v71 = def->focusAmount[mm + 13];
            if ( v71 > *(float *)(v4 + mm * 4 + 660) )
            {
              s_sndSubmix.focusConeId[mm + 13] = v70;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 660) = v71;
            }
          }
          v72 = focusCone[mm + 14];
          if ( v72 )
          {
            v73 = def->focusAmount[mm + 14];
            if ( v73 > *(float *)(v4 + mm * 4 + 664) )
            {
              s_sndSubmix.focusConeId[mm + 14] = v72;
              focusCone = def->focusCone;
              *(float *)(v4 + mm * 4 + 664) = v73;
            }
          }
          v74 = focusCone[mm + 15];
          if ( v74 )
          {
            v75 = def->focusAmount[mm + 15];
            if ( v75 > *(float *)(v4 + mm * 4 + 668) )
            {
              *(float *)(v4 + mm * 4 + 668) = v75;
              s_sndSubmix.focusConeId[mm + 15] = v74;
            }
          }
        }
        attenuation = def->attenuation;
        effect_low = (__m128)LODWORD(s_sndSubmix.uniques[v38].effect);
        hpf = def->hpf;
        lpf = def->lpf;
        focusAmount = def->focusAmount;
        *(float *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = effect_low.m128_f32[0];
        if ( (*(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1208, ASSERT_TYPE_ASSERT, "(!IS_NAN(effect))", (const char *)&queryFormat, "!IS_NAN(effect)") )
          __debugbreak();
        v81 = attenuation;
        v82 = *(unsigned int *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
        SND_DspSub(*(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC), (const float *)(v4 + 1120), v81, (float *)(v4 + 96));
        *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((_BYTE)v4 + 96) & 0x1F;
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v82) )
          __debugbreak();
        _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(effect_low, effect_low, 0);
        v84 = (unsigned int)v82 >> 3;
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        *(__m256 *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM0;
        if ( (unsigned int)v82 >> 3 )
        {
          v86 = v4 + 96;
          v87 = v84;
          v88 = (__m256 *)(v4 + 96);
          do
          {
            v86 += 32i64;
            v89 = (__m256i)_mm256_mul_ps(_YMM0, *v88++);
            *(__m256i *)(v86 - 32) = v89;
            _YMM0 = *(__m256 *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
            --v87;
          }
          while ( v87 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 1120) )
          __debugbreak();
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v82) )
          __debugbreak();
        if ( v84 )
        {
          v90 = v4 + 96;
          v91 = v84;
          v92 = 0i64;
          do
          {
            v90 += 32i64;
            v93 = (__m256i)_mm256_sub_ps(*(__m256 *)(v4 + v92 + 1120), *(__m256 *)(v4 + v92 + 96));
            v92 += 32i64;
            *(__m256i *)(v90 - 32) = v93;
            --v91;
          }
          while ( v91 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 371, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 96) )
          __debugbreak();
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 372, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 2144) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 373, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 2144) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 374, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v82) )
          __debugbreak();
        if ( v84 )
        {
          v94 = v4 + 2144;
          v95 = v84;
          v96 = 0i64;
          do
          {
            v94 += 32i64;
            v97 = (__m256i)_mm256_mul_ps(*(__m256 *)(v4 + v96 + 96), *(__m256 *)(v4 + v96 + 2144));
            v96 += 32i64;
            *(__m256i *)(v94 - 32) = v97;
            --v95;
          }
          while ( v95 );
        }
        SND_DspSub(v82, (const float *)(v4 + 1632), hpf, (float *)(v4 + 96));
        v98 = *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
        if ( v98 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v82) )
          __debugbreak();
        if ( v84 )
        {
          v99 = *(__m256 *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
          v100 = v4 + 96;
          v101 = v84;
          v102 = (__m256 *)(v4 + 96);
          do
          {
            v100 += 32i64;
            v103 = (__m256i)_mm256_mul_ps(v99, *v102++);
            *(__m256i *)(v100 - 32) = v103;
            --v101;
          }
          while ( v101 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 1632) )
          __debugbreak();
        if ( v98 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v82) )
          __debugbreak();
        if ( v84 )
        {
          v104 = v4 + 96;
          v105 = v84;
          v106 = 0i64;
          do
          {
            v104 += 32i64;
            v107 = (__m256i)_mm256_sub_ps(*(__m256 *)(v4 + v106 + 1632), *(__m256 *)(v4 + v106 + 96));
            v106 += 32i64;
            *(__m256i *)(v104 - 32) = v107;
            --v105;
          }
          while ( v105 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 437, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 2656) )
          __debugbreak();
        if ( v98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 438, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
          __debugbreak();
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 439, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 2656) )
          __debugbreak();
        v108 = *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
        if ( *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 440, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18)) )
          __debugbreak();
        if ( v84 )
        {
          v109 = v4 + 2656;
          v110 = v84;
          v111 = 0i64;
          do
          {
            v109 += 32i64;
            _YMM0 = *(__m256i *)(v4 + v111 + 2656);
            __asm { vmaxps  ymm0, ymm0, ymmword ptr [rbp+rax+60h] }
            v111 += 32i64;
            *(__m256i *)(v109 - 32) = _YMM0;
            --v110;
          }
          while ( v110 );
        }
        v114 = lpf;
        v8 = *(unsigned int *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
        SND_DspSub(*(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC), (const float *)(v4 + 1120), v114, (float *)(v4 + 96));
        if ( v98 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        if ( *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v108) )
          __debugbreak();
        if ( v84 )
        {
          v115 = v4 + 96;
          v116 = v84;
          v117 = v4 + 96;
          do
          {
            v115 += 32i64;
            v117 += 32i64;
            *(__m256 *)(v115 - 32) = _mm256_mul_ps(*(__m256 *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40), *(__m256 *)(v117 - 32));
            --v116;
          }
          while ( v116 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 1120) )
          __debugbreak();
        if ( v98 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        v118 = *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 4);
        if ( v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v108) )
          __debugbreak();
        if ( v84 )
        {
          v119 = v4 + 96;
          v120 = v84;
          v121 = 0i64;
          do
          {
            v119 += 32i64;
            v122 = (__m256i)_mm256_sub_ps(*(__m256 *)(v4 + v121 + 1120), *(__m256 *)(v4 + v121 + 96));
            v121 += 32i64;
            *(__m256i *)(v119 - 32) = v122;
            --v120;
          }
          while ( v120 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 415, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 3168) )
          __debugbreak();
        if ( v98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 416, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
          __debugbreak();
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 417, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 3168) )
          __debugbreak();
        if ( v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 418, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v8) )
          __debugbreak();
        if ( v84 )
        {
          v123 = v4 + 3168;
          v124 = v84;
          v125 = 0i64;
          do
          {
            v123 += 32i64;
            _YMM0 = *(__m256i *)(v4 + v125 + 3168);
            __asm { vminps  ymm0, ymm0, ymmword ptr [rbp+rax+60h] }
            v125 += 32i64;
            *(__m256i *)(v123 - 32) = _YMM0;
            --v124;
          }
          while ( v124 );
        }
        SND_DspSub(v8, (const float *)(v4 + 1632), focusAmount, (float *)(v4 + 96));
        if ( v98 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        v31 = v8;
        if ( v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v8) )
          __debugbreak();
        if ( v84 )
        {
          v128 = v4 + 96;
          v129 = v84;
          v130 = v4 + 96;
          do
          {
            v128 += 32i64;
            v130 += 32i64;
            *(__m256 *)(v128 - 32) = _mm256_mul_ps(*(__m256 *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40), *(__m256 *)(v130 - 32));
            --v129;
          }
          while ( v129 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 1632) )
          __debugbreak();
        if ( v98 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 96) )
            __debugbreak();
        }
        if ( v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v8) )
          __debugbreak();
        if ( v84 )
        {
          v131 = v4 + 96;
          v132 = v84;
          v133 = 0i64;
          do
          {
            v131 += 32i64;
            v134 = (__m256i)_mm256_sub_ps(*(__m256 *)(v4 + v133 + 1632), *(__m256 *)(v4 + v133 + 96));
            v133 += 32i64;
            *(__m256i *)(v131 - 32) = v134;
            --v132;
          }
          while ( v132 );
        }
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 437, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", v4 + 3680) )
          __debugbreak();
        if ( v98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 438, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", v4 + 96) )
          __debugbreak();
        if ( (((_BYTE)v4 + 96) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 439, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", v4 + 3680) )
          __debugbreak();
        if ( v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 440, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v8) )
          __debugbreak();
        v135 = 0i64;
        if ( v84 )
        {
          v136 = v4 + 3680;
          v137 = v84;
          v138 = 0i64;
          do
          {
            v136 += 32i64;
            _YMM0 = *(__m256i *)(v4 + v138 + 3680);
            __asm { vmaxps  ymm0, ymm0, ymmword ptr [rbp+rax+60h] }
            v138 += 32i64;
            *(__m256i *)(v136 - 32) = _YMM0;
            --v137;
          }
          while ( v137 );
        }
        if ( (int)v8 > 0 )
        {
          v141 = v8;
          do
          {
            v142 = *(float *)(v4 + v135 + 2144);
            if ( (SND_SUBMIX_ATTENUATION_MAX > v142 || v142 > SND_SUBMIX_AMPLIFICATION_MAX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1219, ASSERT_TYPE_ASSERT, "( SND_SUBMIX_ATTENUATION_MAX ) <= ( vAttenuationTarget[j] ) && ( vAttenuationTarget[j] ) <= ( SND_SUBMIX_AMPLIFICATION_MAX )", "vAttenuationTarget[j] not in [SND_SUBMIX_ATTENUATION_MAX, SND_SUBMIX_AMPLIFICATION_MAX]\n\t%g not in [%g, %g]", v142, SND_SUBMIX_ATTENUATION_MAX, SND_SUBMIX_AMPLIFICATION_MAX) )
              __debugbreak();
            v143 = *(float *)(v4 + v135 + 2656);
            if ( (v143 < 0.0 || v143 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1220, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vHpfFilterTarget[j] ) && ( vHpfFilterTarget[j] ) <= ( 1.0f )", "vHpfFilterTarget[j] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v143, *(double *)&_XMM9, DOUBLE_1_0) )
              __debugbreak();
            v144 = *(float *)(v4 + v135 + 3168);
            if ( (v144 < 0.0 || v144 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1221, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vLpfFilterTarget[j] ) && ( vLpfFilterTarget[j] ) <= ( 1.0f )", "vLpfFilterTarget[j] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v144, *(double *)&_XMM9, DOUBLE_1_0) )
              __debugbreak();
            v145 = *(float *)(v4 + v135 + 3680);
            if ( (v145 < 0.0 || v145 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1222, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vFocusAmountTarget[j] ) && ( vFocusAmountTarget[j] ) <= ( 1.0f )", "vFocusAmountTarget[j] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v145, *(double *)&_XMM9, DOUBLE_1_0) )
              __debugbreak();
            v135 += 4i64;
            --v141;
          }
          while ( v141 );
          LODWORD(v8) = *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
          v31 = *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
        }
        v37 = *(float *)v4;
        v9 = v118;
      }
      ++LODWORD(v37);
      v36 = *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) + 1i64;
      *(float *)v4 = v37;
      v34 = SLODWORD(v37) < s_sndSubmix.unique_count;
      *(_QWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v36;
    }
    while ( v34 );
    volmodinfoCount = *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
    focusConeId = s_sndSubmix.focusConeId;
  }
  v147 = v5;
  *(float *)&v147 = *(float *)&v5 * 10.0;
  _XMM0 = v147;
  __asm { vminss  xmm1, xmm0, cs:__real@3dcccccd }
  LODWORD(_XMM0) = _XMM1 ^ _xmm;
  *(float *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&_XMM1;
  v149 = *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v150 = (_DWORD *)(v4 + 4192);
  *(float *)&_XMM1 = SND_SUBMIX_ATTENUATION_MAX;
  *(float *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&_XMM0;
  *(float *)&v165 = SND_SUBMIX_AMPLIFICATION_MAX;
  *(float *)&v164 = *(float *)&_XMM1;
  for ( nn = v31; nn; --nn )
    *v150++ = v149;
  v152 = *(_DWORD *)(((unsigned __int64)v166 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  v153 = (_DWORD *)(v4 + 608);
  for ( i1 = v31; i1; --i1 )
    *v153++ = v152;
  SND_SubmixRateLimit(v8, (const float *)(v4 + 4192), (const float *)(v4 + 608), (const float *)(v4 + 2144), (float *)(v4 + 4704), s_sndSubmix.attenuationValue, *(const float *)&v164, *(const float *)&v165);
  hpfFilterValue = s_sndSubmix.hpfFilterValue;
  SND_SubmixRateLimit(v8, (const float *)(v4 + 4192), (const float *)(v4 + 608), (const float *)(v4 + 2656), (float *)(v4 + 4704), s_sndSubmix.hpfFilterValue, 0.0, 1.0);
  SND_SubmixRateLimit(v8, (const float *)(v4 + 4192), (const float *)(v4 + 608), (const float *)(v4 + 3168), (float *)(v4 + 4704), s_sndSubmix.lpfFilterValue, 0.0, 1.0);
  SND_SubmixRateLimit(v8, (const float *)(v4 + 4192), (const float *)(v4 + 608), (const float *)(v4 + 3680), (float *)(v4 + 4704), s_sndSubmix.focusAmount, 0.0, 1.0);
  v156 = s_sndSubmix.focusCone;
  do
  {
    FocusConeById = SND_GetFocusConeById(*focusConeId++);
    *v156++ = FocusConeById;
  }
  while ( (__int64)focusConeId < (__int64)s_sndSubmix.focusCone );
  if ( (int)v8 > 0 )
  {
    do
    {
      v158 = *(hpfFilterValue - 256);
      if ( (SND_SUBMIX_ATTENUATION_MAX > v158 || v158 > SND_SUBMIX_AMPLIFICATION_MAX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1246, ASSERT_TYPE_ASSERT, "( SND_SUBMIX_ATTENUATION_MAX ) <= ( s_sndSubmix.attenuationValue[i] ) && ( s_sndSubmix.attenuationValue[i] ) <= ( SND_SUBMIX_AMPLIFICATION_MAX )", "s_sndSubmix.attenuationValue[i] not in [SND_SUBMIX_ATTENUATION_MAX, SND_SUBMIX_AMPLIFICATION_MAX]\n\t%g not in [%g, %g]", v158, SND_SUBMIX_ATTENUATION_MAX, SND_SUBMIX_AMPLIFICATION_MAX) )
        __debugbreak();
      v159 = *hpfFilterValue;
      if ( (*hpfFilterValue < 0.0 || v159 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1247, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( s_sndSubmix.hpfFilterValue[i] ) && ( s_sndSubmix.hpfFilterValue[i] ) <= ( 1.0f )", "s_sndSubmix.hpfFilterValue[i] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v159, *(double *)&_XMM9, DOUBLE_1_0) )
        __debugbreak();
      v160 = *(hpfFilterValue - 128);
      if ( (v160 < 0.0 || v160 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1248, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( s_sndSubmix.lpfFilterValue[i] ) && ( s_sndSubmix.lpfFilterValue[i] ) <= ( 1.0f )", "s_sndSubmix.lpfFilterValue[i] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v160, *(double *)&_XMM9, DOUBLE_1_0) )
        __debugbreak();
      v161 = hpfFilterValue[128];
      if ( (v161 < 0.0 || v161 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1249, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( s_sndSubmix.focusAmount[i] ) && ( s_sndSubmix.focusAmount[i] ) <= ( 1.0f )", "s_sndSubmix.focusAmount[i] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v161, *(double *)&_XMM9, DOUBLE_1_0) )
        __debugbreak();
      ++hpfFilterValue;
      --v31;
    }
    while ( v31 );
  }
  return (unsigned int)volmodinfoCount;
}

/*
==============
SND_SubmixUpdateCollateUniques
==============
*/
void SND_SubmixUpdateCollateUniques()
{
  SndSubmix *uniques; 
  int v1; 
  SndSubmixReq *requests; 
  unsigned int i; 
  int v4; 
  __int64 v5; 
  char v8; 
  char v9; 
  const SndDuck *def; 
  __int64 v11; 
  __int64 v12; 

  uniques = s_sndSubmix.uniques;
  memset_0(s_sndSubmix.uniques, 0, sizeof(s_sndSubmix.uniques));
  v1 = 0;
  requests = s_sndSubmix.requests;
  for ( i = 0; i < 0x8D; ++i )
  {
    if ( v1 > (int)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1592, ASSERT_TYPE_ASSERT, "(uniqueCount <= i)", (const char *)&queryFormat, "uniqueCount <= i") )
      __debugbreak();
    if ( !SND_SubmixAssert(requests, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1596, ASSERT_TYPE_ASSERT, "(SND_SubmixAssert( req, true ))", (const char *)&queryFormat, "SND_SubmixAssert( req, true )") )
      __debugbreak();
    if ( requests->type != -3 )
    {
      if ( SND_SubmixCalculateEffectIfAny(requests, &requests->effect) )
      {
        v4 = 0;
        v5 = 0i64;
        if ( v1 > 0 )
        {
          while ( 1 )
          {
            if ( !uniques->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1613, ASSERT_TYPE_ASSERT, "(sub->id != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id != SND_INVALID_HASH") )
              __debugbreak();
            if ( !uniques->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1614, ASSERT_TYPE_ASSERT, "(sub->def)", (const char *)&queryFormat, "sub->def") )
              __debugbreak();
            if ( requests->id == uniques->id )
              break;
            ++v4;
            ++v5;
            ++uniques;
            if ( v5 >= v1 )
              goto LABEL_22;
          }
          _XMM0 = LODWORD(requests->effect);
          __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+8] }
          uniques->effect = *(float *)&_XMM1;
        }
LABEL_22:
        if ( v4 == v1 )
        {
          if ( s_sndSubmix.uniques[v5].id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1625, ASSERT_TYPE_ASSERT, "(sub->id == static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "sub->id == SND_INVALID_HASH") )
            __debugbreak();
          s_sndSubmix.uniques[v5].id = requests->id;
          s_sndSubmix.uniques[v5].effect = requests->effect;
          *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^= (*((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^ requests->def->disableInSplitscreen) & 1;
          v8 = *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^ (*((_BYTE *)&s_sndSubmix.uniques[v5] + 4) ^ (2 * requests->def->updateWhilePaused)) & 2;
          *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) = v8;
          v9 = v8 & 0xFB | (requests->def->duckAlias != 0 ? 4 : 0);
          def = s_sndSubmix.uniques[v5].def;
          *((_BYTE *)&s_sndSubmix.uniques[v5] + 4) = v9;
          if ( def && def->id != requests->def->id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1631, ASSERT_TYPE_ASSERT, "(sub->def == nullptr || sub->def->id == req->def->id)", (const char *)&queryFormat, "sub->def == nullptr || sub->def->id == req->def->id") )
            __debugbreak();
          ++v1;
          s_sndSubmix.uniques[v5].def = requests->def;
          if ( (unsigned int)v1 >= 0x8D )
          {
            LODWORD(v12) = 141;
            LODWORD(v11) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( uniqueCount ) < (unsigned)( ( sizeof( *array_counter( s_sndSubmix.uniques ) ) + 0 ) )", "uniqueCount doesn't index s_sndSubmix.uniques\n\t%i not in [0, %i)", v11, v12) )
              __debugbreak();
          }
        }
        uniques = s_sndSubmix.uniques;
      }
      else
      {
        SND_SubmixReclaim(requests);
      }
    }
    ++requests;
  }
  s_sndSubmix.unique_count = v1;
}

/*
==============
SND_SubmixUpdateSlotFromZone
==============
*/
SndSubmixReq *SND_SubmixUpdateSlotFromZone(SndSubmixReq *req, unsigned int id, float lerp)
{
  const SndDuck *DuckById; 
  SndSubmixReq *Available; 
  SndSubmixReq *v10; 

  if ( id )
  {
    if ( lerp < 0.0 || lerp > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 742, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( scale ) && ( scale ) <= ( 1.0f )", "scale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", lerp, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    if ( req && req->type != -3 )
    {
      if ( req->id == id )
      {
        SND_SubmixAdjustRequest(req, 6, 0, -1.0, lerp);
        return req;
      }
      SND_SubmixClearForFade(req, -1.0);
    }
    DuckById = SND_GetDuckById(id);
    if ( DuckById )
    {
      Available = SND_SubmixFindAvailable();
      v10 = Available;
      if ( Available )
      {
        SND_SubmixAddNew(Available, DuckById, NULL, 6, 0, -1.0, lerp);
        return v10;
      }
    }
  }
  else if ( req )
  {
    SND_SubmixClearForFade(req, -1.0);
  }
  return 0i64;
}

/*
==============
SND_SubmixUpdateVoiceFaders
==============
*/
void SND_SubmixUpdateVoiceFaders(const SndDuck *const submixDef)
{
  int v2; 
  float *p_rate; 

  if ( !submixDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1665, ASSERT_TYPE_ASSERT, "(submixDef)", (const char *)&queryFormat, "submixDef") )
    __debugbreak();
  if ( !submixDef->duckAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_submix.cpp", 1666, ASSERT_TYPE_ASSERT, "(submixDef->duckAlias != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "submixDef->duckAlias != SND_INVALID_HASH") )
    __debugbreak();
  v2 = 0;
  p_rate = &g_snd.voices[0].submixAttenuation.rate;
  do
  {
    if ( !SND_IsVoiceFree(v2) && submixDef->duckAlias == *(_DWORD *)(*((_QWORD *)p_rate - 26) + 32i64) )
    {
      _XMM0 = LODWORD(submixDef->aliasAttenuation);
      __asm { vminss  xmm6, xmm0, dword ptr [rbx-4] }
      if ( (_XMM6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
        __debugbreak();
      _XMM2 = *((unsigned int *)p_rate - 2);
      _XMM0 = *(unsigned int *)p_rate & (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm1, xmm0, xmm8
        vblendvps xmm0, xmm2, xmm6, xmm1
      }
      *(p_rate - 2) = *(float *)&_XMM0;
      *(p_rate - 1) = *(float *)&_XMM6;
      _XMM1 = LODWORD(submixDef->aliasHpf);
      __asm { vmaxss  xmm6, xmm1, dword ptr [rbx+14h] }
      if ( (_XMM6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
        __debugbreak();
      _XMM2 = *((unsigned int *)p_rate + 4);
      _XMM0 = (unsigned int)p_rate[6] & (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm1, xmm0, xmm8
        vblendvps xmm0, xmm2, xmm6, xmm1
      }
      p_rate[4] = *(float *)&_XMM0;
      p_rate[5] = *(float *)&_XMM6;
      _XMM1 = LODWORD(submixDef->aliasLpf);
      __asm { vminss  xmm6, xmm1, dword ptr [rbx+8] }
      if ( (_XMM6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
        __debugbreak();
      _XMM2 = *((unsigned int *)p_rate + 1);
      _XMM0 = (unsigned int)p_rate[3] & (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm1, xmm0, xmm8
        vblendvps xmm0, xmm2, xmm6, xmm1
      }
      p_rate[1] = *(float *)&_XMM0;
      p_rate[2] = *(float *)&_XMM6;
    }
    ++v2;
    p_rate += 492;
  }
  while ( v2 < 99 );
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

