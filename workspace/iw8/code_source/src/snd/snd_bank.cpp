/*
==============
SND_FindRowFocusCone
==============
*/

void *__fastcall SND_FindRowFocusCone(unsigned int id)
{
  return ?SND_FindRowFocusCone@@YAPEAXI@Z(id);
}

/*
==============
SND_GetAllMusicStates
==============
*/

int __fastcall SND_GetAllMusicStates(unsigned int *states, int maxStates)
{
  return ?SND_GetAllMusicStates@@YAHPEAIH@Z(states, maxStates);
}

/*
==============
SND_FindSoundTableAmbientElement
==============
*/

void *__fastcall SND_FindSoundTableAmbientElement(unsigned int id)
{
  return ?SND_FindSoundTableAmbientElement@@YAPEAXI@Z(id);
}

/*
==============
SoundBankTransient_Register
==============
*/

SndBankTransient *__fastcall SoundBankTransient_Register(const char *name)
{
  return ?SoundBankTransient_Register@@YAPEAUSndBankTransient@@PEBD@Z(name);
}

/*
==============
SND_GetDuckById
==============
*/

const SndDuck *__fastcall SND_GetDuckById(unsigned int id)
{
  return ?SND_GetDuckById@@YAPEBUSndDuck@@I@Z(id);
}

/*
==============
SND_FindAlias
==============
*/

SndAliasList *__fastcall SND_FindAlias(const char *name)
{
  return ?SND_FindAlias@@YAPEAUSndAliasList@@PEBD@Z(name);
}

/*
==============
SND_FindRowVfCurve
==============
*/

void *__fastcall SND_FindRowVfCurve(unsigned int id)
{
  return ?SND_FindRowVfCurve@@YAPEAXI@Z(id);
}

/*
==============
SND_FindRowHpfCurve
==============
*/

void *__fastcall SND_FindRowHpfCurve(unsigned int id)
{
  return ?SND_FindRowHpfCurve@@YAPEAXI@Z(id);
}

/*
==============
SND_FindRowLpfCurve
==============
*/

void *__fastcall SND_FindRowLpfCurve(unsigned int id)
{
  return ?SND_FindRowLpfCurve@@YAPEAXI@Z(id);
}

/*
==============
SoundBankTransient_Register_FastFile
==============
*/

SndBankTransient *__fastcall SoundBankTransient_Register_FastFile(const char *name)
{
  return ?SoundBankTransient_Register_FastFile@@YAPEAUSndBankTransient@@PEBD@Z(name);
}

/*
==============
SND_GetOcclusionShapeById
==============
*/

const OcclusionShape *__fastcall SND_GetOcclusionShapeById(const unsigned int id)
{
  return ?SND_GetOcclusionShapeById@@YAPEBUOcclusionShape@@I@Z(id);
}

/*
==============
SND_DevAllocatePrecachedAliasIndex
==============
*/

bool __fastcall SND_DevAllocatePrecachedAliasIndex(unsigned __int16 *outIndex, const char *aliasName, const int limit)
{
  return ?SND_DevAllocatePrecachedAliasIndex@@YA_NPEAGPEBDH@Z(outIndex, aliasName, limit);
}

/*
==============
SND_GetHpfCurveById
==============
*/

const SndCurve *__fastcall SND_GetHpfCurveById(const unsigned int id)
{
  return ?SND_GetHpfCurveById@@YAPEBUSndCurve@@I@Z(id);
}

/*
==============
SND_BankEnumAliasLists
==============
*/

void __fastcall SND_BankEnumAliasLists(void (__fastcall *func)(SndAliasList *))
{
  ?SND_BankEnumAliasLists@@YAXP6AXPEAUSndAliasList@@@Z@Z(func);
}

/*
==============
SND_FindAliasId
==============
*/

unsigned int __fastcall SND_FindAliasId(const char *name)
{
  return ?SND_FindAliasId@@YAIPEBD@Z(name);
}

/*
==============
SND_FindPrecachedLoopedAliasIndex
==============
*/

bool __fastcall SND_FindPrecachedLoopedAliasIndex(const char *name, unsigned __int16 *outIndex)
{
  return ?SND_FindPrecachedLoopedAliasIndex@@YA_NPEBDPEAG@Z(name, outIndex);
}

/*
==============
SoundBankResident_Register_FastFile
==============
*/

SndBankResident *__fastcall SoundBankResident_Register_FastFile(const char *name)
{
  return ?SoundBankResident_Register_FastFile@@YAPEAUSndBankResident@@PEBD@Z(name);
}

/*
==============
SND_BankDetailStreaming_RemoveScriptBankRequest
==============
*/

void __fastcall SND_BankDetailStreaming_RemoveScriptBankRequest(const unsigned int detailBankName)
{
  ?SND_BankDetailStreaming_RemoveScriptBankRequest@@YAXI@Z(detailBankName);
}

/*
==============
SND_GetSoundTableById
==============
*/

const SoundTable *__fastcall SND_GetSoundTableById(const unsigned int id)
{
  return ?SND_GetSoundTableById@@YAPEBUSoundTable@@I@Z(id);
}

/*
==============
SND_FindSoundTableOcclusion
==============
*/

void *__fastcall SND_FindSoundTableOcclusion(unsigned int id)
{
  return ?SND_FindSoundTableOcclusion@@YAPEAXI@Z(id);
}

/*
==============
SND_GetFutz
==============
*/

const SndFutz *__fastcall SND_GetFutz(unsigned int id)
{
  return ?SND_GetFutz@@YAPEBUSndFutz@@I@Z(id);
}

/*
==============
SND_GetDuckByName
==============
*/

const SndDuck *__fastcall SND_GetDuckByName(const char *name)
{
  return ?SND_GetDuckByName@@YAPEBUSndDuck@@PEBD@Z(name);
}

/*
==============
SNDL_RemoveBank
==============
*/

void __fastcall SNDL_RemoveBank(const SndBank *bank, bool waitForSync)
{
  ?SNDL_RemoveBank@@YAXPEBUSndBank@@_N@Z(bank, waitForSync);
}

/*
==============
SND_BankDetailStreaming_BankSizeBytes
==============
*/

int __fastcall SND_BankDetailStreaming_BankSizeBytes(const SndBankInfo *bankInfo)
{
  return ?SND_BankDetailStreaming_BankSizeBytes@@YAHPEBUSndBankInfo@@@Z(bankInfo);
}

/*
==============
SND_FindSoundTableTimescale
==============
*/

void *__fastcall SND_FindSoundTableTimescale(unsigned int id)
{
  return ?SND_FindSoundTableTimescale@@YAPEAXI@Z(id);
}

/*
==============
SND_BankDetailStreaming_Reset
==============
*/

void SND_BankDetailStreaming_Reset(void)
{
  ?SND_BankDetailStreaming_Reset@@YAXXZ();
}

/*
==============
SND_BankAliasLookup
==============
*/

SndAliasList *__fastcall SND_BankAliasLookup(unsigned int key)
{
  return ?SND_BankAliasLookup@@YAPEAUSndAliasList@@I@Z(key);
}

/*
==============
SND_FindSoundTableFilter
==============
*/

void *__fastcall SND_FindSoundTableFilter(unsigned int id)
{
  return ?SND_FindSoundTableFilter@@YAPEAXI@Z(id);
}

/*
==============
SND_BankDevhost
==============
*/

void SND_BankDevhost(void)
{
  ?SND_BankDevhost@@YAXXZ();
}

/*
==============
SND_FindPrecachedAliasIndex
==============
*/

bool __fastcall SND_FindPrecachedAliasIndex(const char *name, unsigned __int16 *outIndex)
{
  return ?SND_FindPrecachedAliasIndex@@YA_NPEBDPEAG@Z(name, outIndex);
}

/*
==============
SND_BankDetailStreaming_Init
==============
*/

void SND_BankDetailStreaming_Init(void)
{
  ?SND_BankDetailStreaming_Init@@YAXXZ();
}

/*
==============
SND_FindRowFutz
==============
*/

void *__fastcall SND_FindRowFutz(unsigned int id)
{
  return ?SND_FindRowFutz@@YAPEAXI@Z(id);
}

/*
==============
SND_GetMasterByConfig
==============
*/

const SndMaster *__fastcall SND_GetMasterByConfig()
{
  return ?SND_GetMasterByConfig@@YAPEBUSndMaster@@XZ();
}

/*
==============
SND_FindMusicState
==============
*/

void *__fastcall SND_FindMusicState(unsigned int id)
{
  return ?SND_FindMusicState@@YAPEAXI@Z(id);
}

/*
==============
SND_SV_LookupSoundLength
==============
*/

int __fastcall SND_SV_LookupSoundLength(const char *name, const bool useApproximation, const bool findLongest)
{
  return ?SND_SV_LookupSoundLength@@YAHPEBD_N1@Z(name, useApproximation, findLongest);
}

/*
==============
SND_FindRowAlias
==============
*/

void *__fastcall SND_FindRowAlias(unsigned int id)
{
  return ?SND_FindRowAlias@@YAPEAXI@Z(id);
}

/*
==============
SND_GetFocusConeById
==============
*/

const FocusCone *__fastcall SND_GetFocusConeById(const unsigned int id)
{
  return ?SND_GetFocusConeById@@YAPEBUFocusCone@@I@Z(id);
}

/*
==============
SNDL_SwapBank
==============
*/

void __fastcall SNDL_SwapBank(SndBank *fromBank, SndBank *toBank)
{
  ?SNDL_SwapBank@@YAXPEAUSndBank@@0@Z(fromBank, toBank);
}

/*
==============
SND_BankDetailStreaming_AddBankRequest
==============
*/

void __fastcall SND_BankDetailStreaming_AddBankRequest(const SndBankTransient *detailBank, SndBankStreamCategory category, int priority)
{
  ?SND_BankDetailStreaming_AddBankRequest@@YAXPEBUSndBankTransient@@W4SndBankStreamCategory@@H@Z(detailBank, category, priority);
}

/*
==============
SND_GetTotalBankStreamBytesUsed
==============
*/

int __fastcall SND_GetTotalBankStreamBytesUsed()
{
  return ?SND_GetTotalBankStreamBytesUsed@@YAHXZ();
}

/*
==============
SND_FindDuck
==============
*/

void *__fastcall SND_FindDuck(unsigned int id)
{
  return ?SND_FindDuck@@YAPEAXI@Z(id);
}

/*
==============
SND_Missing
==============
*/

void __fastcall SND_Missing(const char *name)
{
  ?SND_Missing@@YAXPEBD@Z(name);
}

/*
==============
SND_FindRowEntChannel
==============
*/

void *__fastcall SND_FindRowEntChannel(unsigned int id)
{
  return ?SND_FindRowEntChannel@@YAPEAXI@Z(id);
}

/*
==============
SND_BankDetailStreaming_RemoveBankRequest
==============
*/

void __fastcall SND_BankDetailStreaming_RemoveBankRequest(const SndBankTransient *detailBank)
{
  ?SND_BankDetailStreaming_RemoveBankRequest@@YAXPEBUSndBankTransient@@@Z(detailBank);
}

/*
==============
SND_FindSoundTableZone
==============
*/

void *__fastcall SND_FindSoundTableZone(unsigned int id)
{
  return ?SND_FindSoundTableZone@@YAPEAXI@Z(id);
}

/*
==============
SND_FindSoundTablePLRADSRZone
==============
*/

void *__fastcall SND_FindSoundTablePLRADSRZone(unsigned int id)
{
  return ?SND_FindSoundTablePLRADSRZone@@YAPEAXI@Z(id);
}

/*
==============
SND_BankStreamUpdate
==============
*/

void SND_BankStreamUpdate(void)
{
  ?SND_BankStreamUpdate@@YAXXZ();
}

/*
==============
SND_GetDopplerPresetById
==============
*/

const DopplerPreset *__fastcall SND_GetDopplerPresetById(const unsigned int id)
{
  return ?SND_GetDopplerPresetById@@YAPEBUDopplerPreset@@I@Z(id);
}

/*
==============
SND_IsAliasNameLooping
==============
*/

bool __fastcall SND_IsAliasNameLooping(const char *name)
{
  return ?SND_IsAliasNameLooping@@YA_NPEBD@Z(name);
}

/*
==============
SoundBankResident_Register
==============
*/

SndBankResident *__fastcall SoundBankResident_Register(const char *name)
{
  return ?SoundBankResident_Register@@YAPEAUSndBankResident@@PEBD@Z(name);
}

/*
==============
SND_BankInit
==============
*/

void SND_BankInit(void)
{
  ?SND_BankInit@@YAXXZ();
}

/*
==============
SND_TryFindAliasForCaching
==============
*/

bool __fastcall SND_TryFindAliasForCaching(const char *name, SndAliasList **outAlias, bool *outIsAlwaysLoaded)
{
  return ?SND_TryFindAliasForCaching@@YA_NPEBDPEAPEAUSndAliasList@@PEA_N@Z(name, outAlias, outIsAlwaysLoaded);
}

/*
==============
SND_FindRowSpeakerMap
==============
*/

void *__fastcall SND_FindRowSpeakerMap(unsigned int id)
{
  return ?SND_FindRowSpeakerMap@@YAPEAXI@Z(id);
}

/*
==============
SND_GetLpfCurveById
==============
*/

const SndCurve *__fastcall SND_GetLpfCurveById(const unsigned int id)
{
  return ?SND_GetLpfCurveById@@YAPEBUSndCurve@@I@Z(id);
}

/*
==============
SND_FindWeapReflDefWithClass
==============
*/

const WeaponReflectionDef *__fastcall SND_FindWeapReflDefWithClass(unsigned int id, unsigned int weaponClass)
{
  return ?SND_FindWeapReflDefWithClass@@YAPEBUWeaponReflectionDef@@II@Z(id, weaponClass);
}

/*
==============
SND_GetMasterCurrent
==============
*/

const SndMaster *__fastcall SND_GetMasterCurrent()
{
  return ?SND_GetMasterCurrent@@YAPEBUSndMaster@@XZ();
}

/*
==============
SND_GetRadverb
==============
*/

const SndSendEffectParams *__fastcall SND_GetRadverb(unsigned int id)
{
  return ?SND_GetRadverb@@YAPEBUSndSendEffectParams@@I@Z(id);
}

/*
==============
SND_FindSoundTableAmbientEvent
==============
*/

void *__fastcall SND_FindSoundTableAmbientEvent(unsigned int id)
{
  return ?SND_FindSoundTableAmbientEvent@@YAPEAXI@Z(id);
}

/*
==============
SND_GetFutzById
==============
*/

const SndFutz *__fastcall SND_GetFutzById(const unsigned int id)
{
  return ?SND_GetFutzById@@YAPEBUSndFutz@@I@Z(id);
}

/*
==============
SND_TryFindAlias
==============
*/

SndAliasList *__fastcall SND_TryFindAlias(const char *name)
{
  return ?SND_TryFindAlias@@YAPEAUSndAliasList@@PEBD@Z(name);
}

/*
==============
SND_FindPrecachedAliasFromIndex
==============
*/

bool __fastcall SND_FindPrecachedAliasFromIndex(unsigned __int16 index, const char **outName)
{
  return ?SND_FindPrecachedAliasFromIndex@@YA_NGPEAPEBD@Z(index, outName);
}

/*
==============
SND_BankDetailStreaming_Update
==============
*/

void SND_BankDetailStreaming_Update(void)
{
  ?SND_BankDetailStreaming_Update@@YAXXZ();
}

/*
==============
SND_BankDetailStreaming_BankIsActive
==============
*/

bool __fastcall SND_BankDetailStreaming_BankIsActive(const SndBankTransient *detailBank)
{
  return ?SND_BankDetailStreaming_BankIsActive@@YA_NPEBUSndBankTransient@@@Z(detailBank);
}

/*
==============
SND_FindSoundTableReverb
==============
*/

void *__fastcall SND_FindSoundTableReverb(unsigned int id)
{
  return ?SND_FindSoundTableReverb@@YAPEAXI@Z(id);
}

/*
==============
SND_FindSoundTableNPCADSRZone
==============
*/

void *__fastcall SND_FindSoundTableNPCADSRZone(unsigned int id)
{
  return ?SND_FindSoundTableNPCADSRZone@@YAPEAXI@Z(id);
}

/*
==============
SND_AliasCount
==============
*/

unsigned int __fastcall SND_AliasCount()
{
  return ?SND_AliasCount@@YAIXZ();
}

/*
==============
SND_FindSoundTableADSR
==============
*/

void *__fastcall SND_FindSoundTableADSR(unsigned int id)
{
  return ?SND_FindSoundTableADSR@@YAPEAXI@Z(id);
}

/*
==============
SND_BankDetailStreaming_ActiveBanksLoaded
==============
*/

bool __fastcall SND_BankDetailStreaming_ActiveBanksLoaded()
{
  return ?SND_BankDetailStreaming_ActiveBanksLoaded@@YA_NXZ();
}

/*
==============
SND_GetVfCurveById
==============
*/

const SndCurve *__fastcall SND_GetVfCurveById(const unsigned int id)
{
  return ?SND_GetVfCurveById@@YAPEBUSndCurve@@I@Z(id);
}

/*
==============
SND_GetSpeakerMapById
==============
*/

const SpeakerMap *__fastcall SND_GetSpeakerMapById(const unsigned int id)
{
  return ?SND_GetSpeakerMapById@@YAPEBUSpeakerMap@@I@Z(id);
}

/*
==============
SND_DevFindPrecachedAliasIndex
==============
*/

bool __fastcall SND_DevFindPrecachedAliasIndex(const char *name, unsigned __int16 *outIndex)
{
  return ?SND_DevFindPrecachedAliasIndex@@YA_NPEBDPEAG@Z(name, outIndex);
}

/*
==============
SND_BankUpdate
==============
*/

bool __fastcall SND_BankUpdate()
{
  return ?SND_BankUpdate@@YA_NXZ();
}

/*
==============
SND_FindInIndex
==============
*/

bool __fastcall SND_FindInIndex(unsigned int key, const SndBank *bank, SndAliasList **result)
{
  return ?SND_FindInIndex@@YA_NIPEBUSndBank@@PEAPEAUSndAliasList@@@Z(key, bank, result);
}

/*
==============
SND_FindSoundTableMix
==============
*/

void *__fastcall SND_FindSoundTableMix(unsigned int id)
{
  return ?SND_FindSoundTableMix@@YAPEAXI@Z(id);
}

/*
==============
SND_FindAliasLookup
==============
*/

SndAliasLookup __fastcall SND_FindAliasLookup(const char *name)
{
  return ?SND_FindAliasLookup@@YA?AUSndAliasLookup@@PEBD@Z(name);
}

/*
==============
SND_FindRowRvbCurve
==============
*/

void *__fastcall SND_FindRowRvbCurve(unsigned int id)
{
  return ?SND_FindRowRvbCurve@@YAPEAXI@Z(id);
}

/*
==============
SND_FindAliasFromId
==============
*/

SndAliasList *__fastcall SND_FindAliasFromId(unsigned int hash)
{
  return ?SND_FindAliasFromId@@YAPEAUSndAliasList@@I@Z(hash);
}

/*
==============
SND_GetMusicState
==============
*/

SndMusicState *__fastcall SND_GetMusicState(unsigned int id)
{
  return ?SND_GetMusicState@@YAPEAUSndMusicState@@I@Z(id);
}

/*
==============
SND_FindRowRadverb
==============
*/

void *__fastcall SND_FindRowRadverb(unsigned int id)
{
  return ?SND_FindRowRadverb@@YAPEAXI@Z(id);
}

/*
==============
SNDL_AddBank
==============
*/

void __fastcall SNDL_AddBank(const SndBank *bank, bool isPreloading)
{
  ?SNDL_AddBank@@YAXPEBUSndBank@@_N@Z(bank, isPreloading);
}

/*
==============
SND_FindRowOcclusionShape
==============
*/

void *__fastcall SND_FindRowOcclusionShape(unsigned int id)
{
  return ?SND_FindRowOcclusionShape@@YAPEAXI@Z(id);
}

/*
==============
SND_FindSoundTableAmbientDef
==============
*/

void *__fastcall SND_FindSoundTableAmbientDef(unsigned int id)
{
  return ?SND_FindSoundTableAmbientDef@@YAPEAXI@Z(id);
}

/*
==============
SND_GetRvbCurveById
==============
*/

const SndCurve *__fastcall SND_GetRvbCurveById(const unsigned int id)
{
  return ?SND_GetRvbCurveById@@YAPEBUSndCurve@@I@Z(id);
}

/*
==============
SND_BankDetailStreaming_AddScriptBankRequest
==============
*/

void __fastcall SND_BankDetailStreaming_AddScriptBankRequest(const unsigned int detailBankName, int priority)
{
  ?SND_BankDetailStreaming_AddScriptBankRequest@@YAXIH@Z(detailBankName, priority);
}

/*
==============
SND_FindRowDopplerPreset
==============
*/

void *__fastcall SND_FindRowDopplerPreset(unsigned int id)
{
  return ?SND_FindRowDopplerPreset@@YAPEAXI@Z(id);
}

/*
==============
SNDL_AddBank
==============
*/
void SNDL_AddBank(const SndBank *bank, bool isPreloading)
{
  const char *v4; 
  unsigned int v5; 
  SndBankInfo **bankStack; 
  const SndBank **p_bank; 
  unsigned int v8; 
  SndBankInfo **v9; 
  __int64 v10; 
  SndBankInfo *v11; 
  unsigned int v12; 
  SndBankInfo **v13; 
  bool v14; 
  unsigned int v15; 
  __int64 v16; 
  SndBankInfo **v17; 
  SndBankInfo *v18; 
  unsigned int v19; 
  SndBankInfo **v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  SndAliasList *v25; 
  int flags; 
  unsigned int id; 
  char v28; 
  unsigned int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  SndAliasList *i; 
  SndBankPrecacheEntry *v36; 
  const char **p_aliasName; 
  bool v38; 
  StreamKey *loadedStreamKey; 
  SndBankInfo *v40; 

  g_sb.loadGate = 1;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v4 = "SOUND: Preloading Bank %s\n";
  if ( !isPreloading )
    v4 = "SOUND: Adding Bank %s\n";
  Com_Printf(9, v4, bank->name);
  if ( g_sb.bankCount > 0x320 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 493, ASSERT_TYPE_ASSERT, "(g_sb.bankCount <= ( 32 + 768 ))", (const char *)&queryFormat, "g_sb.bankCount <= SND_MAX_BANKS") )
    __debugbreak();
  if ( !g_sb.bankCount )
    memset_0(g_sb.bankInfos, 0, sizeof(g_sb.bankInfos));
  SND_AssertBankIndexValid(bank);
  if ( isPreloading )
  {
LABEL_12:
    v8 = 2;
    v9 = &g_sb.bankStack[1];
    v10 = 31i64;
    do
    {
      v11 = *v9;
      if ( !(*v9)->bank )
      {
        v12 = v8;
        if ( v8 < 0x20 )
        {
          v13 = &g_sb.bankStack[v8];
          while ( !(*v13)->bank )
          {
            ++v12;
            ++v13;
            if ( v12 >= 0x20 )
              goto LABEL_23;
          }
          *v9 = *v13;
          g_sb.bankStack[v12] = v11;
        }
      }
LABEL_23:
      ++v8;
      ++v9;
      --v10;
    }
    while ( v10 );
    v15 = 34;
    v16 = 767i64;
    v17 = &g_sb.bankStack[33];
    do
    {
      v18 = *v17;
      if ( !(*v17)->bank )
      {
        v19 = v15;
        if ( v15 < 0x320 )
        {
          v20 = &g_sb.bankStack[v15];
          while ( !(*v20)->bank )
          {
            ++v19;
            ++v20;
            if ( v19 >= 0x320 )
              goto LABEL_32;
          }
          *v17 = *v20;
          g_sb.bankStack[v19] = v18;
        }
      }
LABEL_32:
      ++v15;
      ++v17;
      --v16;
    }
    while ( v16 );
    v40 = SND_AddBankToStack(bank, isPreloading);
    p_bank = &v40->bank;
    if ( v40 )
      ++g_sb.bankCount;
    else
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14410AC60, 598i64, bank->name);
    if ( isPreloading )
      goto LABEL_70;
  }
  else
  {
    v5 = 0;
    bankStack = g_sb.bankStack;
    while ( 1 )
    {
      p_bank = (const SndBank **)*bankStack;
      v40 = *bankStack;
      if ( (*bankStack)->bank == bank )
        break;
      ++v5;
      ++bankStack;
      if ( v5 >= 0x320 )
        goto LABEL_12;
    }
    v14 = *((_BYTE *)p_bank + 908) == 10;
    *((_BYTE *)p_bank + 913) = 0;
    if ( v14 && (*p_bank)->streamInfo.alwaysLoaded )
      *((_BYTE *)p_bank + 912) = 1;
  }
  if ( !p_bank )
    goto LABEL_75;
  if ( !SND_ShouldPrecacheBank(bank) || *((_BYTE *)p_bank + 914) )
    goto LABEL_70;
  v22 = 0;
  v23 = 0;
  if ( !bank->aliasCount )
    goto LABEL_69;
  do
  {
    v24 = v22;
    v25 = &bank->alias[v24];
    flags = v25->head->flags;
    if ( (flags & 0x80000) == 0 )
      goto LABEL_67;
    id = v25->id;
    v28 = flags & 1;
    if ( v28 )
    {
      LODWORD(v21) = (8405025 * (unsigned __int64)id) >> 32;
      v29 = 511 * (id / 0x1FF);
    }
    else
    {
      LODWORD(v21) = (68174085 * (unsigned __int64)id) >> 32;
      v29 = 32256 * (id / 0x7E00);
    }
    v30 = v25->id - v29;
    v31 = 0;
    v32 = 511;
    if ( !v28 )
      v32 = 32256;
    if ( !v28 )
      v31 = 511;
    v33 = 0;
    v34 = 2i64 * (v31 + (int)v30);
    for ( i = g_sb.precacheLookup[v31 + (int)v30].aliasList; i; i = g_sb.precacheLookup[v31 + (int)v21].aliasList )
    {
      if ( i->id == id )
        break;
      if ( v33 >= v32 )
        goto LABEL_60;
      ++v33;
      v21 = (unsigned int)(((int)v30 + 1) >> 31);
      LODWORD(v21) = ((int)v30 + 1) % v32;
      v30 = (unsigned int)v21;
      v34 = 2i64 * (v31 + (int)v21);
    }
    if ( v33 >= v32 )
    {
LABEL_60:
      SND_PrintBankAliasStats(v34, v21, v30);
      if ( (bank->alias[v24].head->flags & 1) != 0 )
      {
        if ( v33 < v32 )
          goto LABEL_67;
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 604, ASSERT_TYPE_ASSERT, "(count < hashTableSize)", "%s\n\tToo many precached looping sound alias lists loaded at once", "count < hashTableSize");
      }
      else
      {
        if ( v33 < v32 )
          goto LABEL_67;
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 608, ASSERT_TYPE_ASSERT, "(count < hashTableSize)", "%s\n\tToo many precached non-looping sound alias lists loaded at once", "count < hashTableSize");
      }
      if ( v38 )
        __debugbreak();
    }
    else
    {
      v36 = &g_sb.precacheLookup[v31 + (int)v30];
      p_aliasName = &v36->aliasList->aliasName;
      if ( !v36->aliasList )
      {
        v36->aliasList = v25;
        ++v23;
        p_aliasName = &v25->aliasName;
      }
      if ( I_strnicmp(bank->alias[v24].aliasName, *p_aliasName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 594, ASSERT_TYPE_ASSERT, "(!I_stricmp( bank->alias[i].aliasName, lookup->aliasList->aliasName ))", "%s\n\tSound alias hash collision.  Consider renaming %s or %s", "!I_stricmp( bank->alias[i].aliasName, lookup->aliasList->aliasName )", bank->alias[v24].aliasName, v36->aliasList->aliasName) )
        __debugbreak();
      ++v36->refCount;
    }
LABEL_67:
    ++v22;
  }
  while ( v22 < bank->aliasCount );
  p_bank = &v40->bank;
LABEL_69:
  *((_BYTE *)p_bank + 914) = 1;
  Com_Printf(9, "***** Added %d precached aliases for sound bank %s\n", v23, bank->name);
LABEL_70:
  if ( p_bank )
  {
    loadedStreamKey = bank->streamInfo.loadedStreamKey;
    if ( loadedStreamKey )
    {
      if ( !loadedStreamKey->assetHash )
      {
        loadedStreamKey->assetHash = (unsigned __int64)p_bank;
        *((_BYTE *)p_bank + 912) = 0;
        *((_BYTE *)p_bank + 908) = 0;
        *((_WORD *)p_bank + 292) = 0;
        *((_WORD *)p_bank + 152) = 0;
        *((_WORD *)p_bank + 432) = 0;
      }
    }
    else
    {
      Com_PrintError(9, "SOUND ERROR: fast file data does not contain a streamKey for sound bank %s\n", bank->name);
      *((_BYTE *)p_bank + 908) = 11;
    }
  }
LABEL_75:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
}

/*
==============
SNDL_RemoveBank
==============
*/
void SNDL_RemoveBank(const SndBank *bank, bool waitForSync)
{
  int v3; 
  SndBankInfo **bankStack; 
  unsigned int v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  SndMusicSet *musicSets; 
  unsigned int i; 
  SndMusicSet *v10; 
  SndMusicSet *v11; 
  SndMusicState **p_state; 
  __int64 v13; 
  SndMusicAssetInstance *musicPlaybacks; 
  unsigned int v15; 
  unsigned int v16; 
  SndAliasList *v17; 
  int flags; 
  unsigned int id; 
  char v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  int v24; 
  SndAliasList *aliasList; 
  SndBankInfo **v26; 
  __int64 v27; 
  bool v28; 
  __int64 v29; 
  unsigned int v31; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = 0;
  bankStack = g_sb.bankStack;
  v5 = 0;
  v31 = 0;
  while ( (*bankStack)->bank != bank )
  {
    ++v5;
    ++bankStack;
    v31 = v5;
    if ( v5 >= 0x320 )
      goto LABEL_59;
  }
  if ( g_sb.bankUnloadInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 672, ASSERT_TYPE_ASSERT, "( ( g_sb.bankUnloadInProgress == 0 ) )", "( g_sb.bankUnloadInProgress ) = %i", g_sb.bankUnloadInProgress) )
    __debugbreak();
  v6 = (unsigned __int64)&g_sb.bankUnloadInProgress & 3;
  if ( ((unsigned __int8)&g_sb.bankUnloadInProgress & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sb.bankUnloadInProgress) )
    __debugbreak();
  _InterlockedIncrement(&g_sb.bankUnloadInProgress);
  while ( g_sb.banksInUse )
    Com_Printf(9, "SNDL_RemoveBank() waiting on %d bank references\n", (unsigned int)g_sb.banksInUse);
  Com_Printf(9, "SOUND: Removing Bank %d %s\n", v5, bank->name);
  v7 = 0;
  if ( bank->musicSetCount )
  {
    do
    {
      musicSets = bank->musicSets;
      for ( i = 0; i < musicSets[v7].stateCount; v3 = 0 )
      {
        v10 = musicSets;
        if ( g_snd.musicCurrentState && musicSets[v7].states[i].id == g_snd.musicCurrentState->id )
        {
          SNDL_ResetMusicState(g_snd.musicCurrentState);
          g_snd.musicCurrentState = NULL;
          g_snd.musicCurrentStateId = 0;
          v10 = bank->musicSets;
        }
        v11 = v10;
        if ( g_snd.musicRequestedState && v10[v7].states[i].id == g_snd.musicRequestedState->id )
        {
          SNDL_ResetMusicState(g_snd.musicRequestedState);
          g_snd.musicRequestedState = NULL;
          v11 = bank->musicSets;
        }
        if ( g_snd.musicPreviousState && v11[v7].states[i].id == g_snd.musicPreviousState->id )
        {
          SNDL_ResetMusicState(g_snd.musicPreviousState);
          g_snd.musicPreviousState = NULL;
        }
        p_state = &g_snd.musicPlaybacks[0].state;
        v13 = 16i64;
        musicPlaybacks = g_snd.musicPlaybacks;
        do
        {
          if ( *p_state && bank->musicSets[v7].states[i].id == (*p_state)->id )
            SND_ReleaseMusicAssetInstance(musicPlaybacks);
          ++musicPlaybacks;
          p_state += 5;
          --v13;
        }
        while ( v13 );
        musicSets = bank->musicSets;
        ++i;
      }
      ++v7;
    }
    while ( v7 < bank->musicSetCount );
    v6 = (unsigned __int64)&g_sb.bankUnloadInProgress & 3;
  }
  if ( waitForSync )
    SD_Sync();
  SND_UnloadAssetBank(v5);
  if ( SND_ShouldPrecacheBank(bank) && g_sb.bankStack[v5]->aliasesPrecached )
  {
    v15 = 0;
    v16 = 0;
    if ( bank->aliasCount )
    {
      do
      {
        v17 = &bank->alias[v16];
        flags = v17->head->flags;
        if ( (flags & 0x80000) != 0 )
        {
          id = v17->id;
          v20 = flags & 1;
          if ( v20 )
            v21 = 511 * (id / 0x1FF);
          else
            v21 = 32256 * (id / 0x7E00);
          v22 = v17->id - v21;
          v23 = 511;
          if ( !v20 )
            v3 = 511;
          if ( !v20 )
            v23 = 32256;
          v24 = 0;
          while ( 1 )
          {
            aliasList = g_sb.precacheLookup[v3 + v22].aliasList;
            if ( aliasList )
            {
              if ( aliasList->id == id )
                break;
            }
            ++v24;
            v22 = (v22 + 1) % v23;
            if ( v24 >= v23 )
              goto LABEL_49;
          }
          if ( v24 >= v23 || (v27 = v3 + v22, aliasList->id != id) || (v28 = g_sb.precacheLookup[v27].refCount == 1, --g_sb.precacheLookup[v27].refCount, !v28) )
          {
LABEL_49:
            v3 = 0;
            goto LABEL_50;
          }
          v3 = 0;
          g_sb.precacheLookup[v27].aliasList = NULL;
          ++v15;
        }
LABEL_50:
        ++v16;
      }
      while ( v16 < bank->aliasCount );
      v5 = v31;
      v6 = (unsigned __int64)&g_sb.bankUnloadInProgress & 3;
    }
    Com_Printf(9, "***** Removed %d precached aliases for sound bank %s\n", v15, bank->name);
  }
  v26 = &g_sb.bankStack[v5];
  (*v26)->bank = NULL;
  (*v26)->mixerStopTime = 0;
  (*v26)->bankActive = 0;
  (*v26)->aliasesPrecached = 0;
  --g_sb.bankCount;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sb.bankUnloadInProgress) )
    __debugbreak();
  if ( _InterlockedDecrement(&g_sb.bankUnloadInProgress) )
  {
    LODWORD(v29) = g_sb.bankUnloadInProgress;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 788, ASSERT_TYPE_ASSERT, "( ( g_sb.bankUnloadInProgress == 0 ) )", "( g_sb.bankUnloadInProgress ) = %i", v29) )
      __debugbreak();
  }
LABEL_59:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SNDL_SwapBank
==============
*/
void SNDL_SwapBank(SndBank *fromBank, SndBank *toBank)
{
  SndBank *v3; 
  char v4; 
  SndBankInfo **bankStack; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  SndMusicSet *musicSets; 
  unsigned int i; 
  SndMusicSet *v11; 
  SndMusicSet *v12; 
  SndMusicState **p_state; 
  __int64 v14; 
  SndMusicAssetInstance *musicPlaybacks; 
  SndBankInfo **v16; 
  char *v17; 
  __int64 v18; 
  SndBank *v19; 
  __int64 v20; 
  __m256i v21; 
  __int128 v22; 
  SndBank *v23; 
  __int64 v24; 
  __int128 v25; 
  char *v26; 
  SndBank *v27; 
  __m256i v28; 
  SndBankStreamInfo v29; 
  SndBankInfo *v30; 
  StreamKey *loadedStreamKey; 
  __int64 v32; 
  char v33[520]; 

  v3 = fromBank;
  Sys_EnterCriticalSection(CRITSECT_SOUND_UPDATE);
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 801, ASSERT_TYPE_ASSERT, "(fromBank)", (const char *)&queryFormat, "fromBank") )
    __debugbreak();
  if ( !toBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 802, ASSERT_TYPE_ASSERT, "(toBank)", (const char *)&queryFormat, "toBank") )
    __debugbreak();
  SND_AssertBankIndexValid(v3);
  SND_AssertBankIndexValid(toBank);
  v4 = 0;
  bankStack = g_sb.bankStack;
  v6 = -1;
  v7 = 0;
  while ( (*bankStack)->bank != toBank )
  {
    ++v7;
    ++bankStack;
    if ( v7 >= 0x320 )
      goto LABEL_32;
  }
  v4 = 1;
  v6 = v7;
  SND_StopBankSounds(toBank);
  if ( toBank->musicSetCount )
  {
    v8 = 0;
    do
    {
      musicSets = toBank->musicSets;
      for ( i = 0; i < musicSets[v8].stateCount; ++i )
      {
        v11 = musicSets;
        if ( g_snd.musicCurrentState && musicSets[v8].states[i].id == g_snd.musicCurrentState->id )
        {
          SNDL_ResetMusicState(g_snd.musicCurrentState);
          g_snd.musicCurrentState = NULL;
          g_snd.musicCurrentStateId = 0;
          v11 = toBank->musicSets;
        }
        v12 = v11;
        if ( g_snd.musicRequestedState && v11[v8].states[i].id == g_snd.musicRequestedState->id )
        {
          SNDL_ResetMusicState(g_snd.musicRequestedState);
          g_snd.musicRequestedState = NULL;
          v12 = toBank->musicSets;
        }
        if ( g_snd.musicPreviousState && v12[v8].states[i].id == g_snd.musicPreviousState->id )
        {
          SNDL_ResetMusicState(g_snd.musicPreviousState);
          g_snd.musicPreviousState = NULL;
        }
        p_state = &g_snd.musicPlaybacks[0].state;
        v14 = 16i64;
        musicPlaybacks = g_snd.musicPlaybacks;
        do
        {
          if ( *p_state && toBank->musicSets[v8].states[i].id == (*p_state)->id )
            SND_ReleaseMusicAssetInstance(musicPlaybacks);
          ++musicPlaybacks;
          p_state += 5;
          --v14;
        }
        while ( v14 );
        musicSets = toBank->musicSets;
      }
      ++v8;
    }
    while ( v8 < toBank->musicSetCount );
    v3 = fromBank;
    v4 = 1;
    v6 = v7;
  }
  SD_Sync();
  SND_UnloadAssetBank(v7);
  v16 = &g_sb.bankStack[v7];
  memset_0(&(*v16)->load, 0, sizeof((*v16)->load));
  (*v16)->load.bank = toBank;
LABEL_32:
  v17 = v33;
  v18 = 4i64;
  v19 = v3;
  v20 = 4i64;
  do
  {
    v17 += 128;
    v21 = *(__m256i *)&v19->name;
    v22 = *(_OWORD *)&v19->soundTable.ambientEvents;
    v19 = (SndBank *)((char *)v19 + 128);
    *((__m256i *)v17 - 4) = v21;
    *((__m256i *)v17 - 3) = *(__m256i *)&v19[-1].lpfCurveCount;
    *((__m256i *)v17 - 2) = *(__m256i *)&v19[-1].rvbCurveCount;
    *((_OWORD *)v17 - 2) = *(_OWORD *)&v19[-1].futzCount;
    *((_OWORD *)v17 - 1) = v22;
    --v20;
  }
  while ( v20 );
  v23 = toBank;
  v24 = 4i64;
  do
  {
    v3 = (SndBank *)((char *)v3 + 128);
    v25 = *(_OWORD *)&v23->name;
    v23 = (SndBank *)((char *)v23 + 128);
    *(_OWORD *)&v3[-1].focusConeCount = v25;
    *(_OWORD *)&v3[-1].vfCurveCount = *(_OWORD *)&v23[-1].vfCurveCount;
    *(_OWORD *)&v3[-1].lpfCurveCount = *(_OWORD *)&v23[-1].lpfCurveCount;
    *(_OWORD *)&v3[-1].hpfCurveCount = *(_OWORD *)&v23[-1].hpfCurveCount;
    *(_OWORD *)&v3[-1].rvbCurveCount = *(_OWORD *)&v23[-1].rvbCurveCount;
    *(_OWORD *)&v3[-1].speakerMapCount = *(_OWORD *)&v23[-1].speakerMapCount;
    *(_OWORD *)&v3[-1].futzCount = *(_OWORD *)&v23[-1].futzCount;
    v3[-1].streamInfo = v23[-1].streamInfo;
    --v24;
  }
  while ( v24 );
  v26 = v33;
  v27 = toBank;
  do
  {
    v27 = (SndBank *)((char *)v27 + 128);
    v28 = *(__m256i *)v26;
    v29 = (SndBankStreamInfo)*((_OWORD *)v26 + 7);
    v26 += 128;
    *(__m256i *)&v27[-1].focusConeCount = v28;
    *(__m256i *)&v27[-1].lpfCurveCount = *((__m256i *)v26 - 3);
    *(__m256i *)&v27[-1].rvbCurveCount = *((__m256i *)v26 - 2);
    *(_OWORD *)&v27[-1].futzCount = *((_OWORD *)v26 - 2);
    v27[-1].streamInfo = v29;
    --v18;
  }
  while ( v18 );
  if ( v4 )
  {
    if ( v6 >= 0x320 )
    {
      LODWORD(v32) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 871, ASSERT_TYPE_ASSERT, "(unsigned)( bankIndex ) < (unsigned)( ( 32 + 768 ) )", "bankIndex doesn't index SND_MAX_BANKS\n\t%i not in [0, %i)", v32, 800) )
        __debugbreak();
    }
    v30 = g_sb.bankStack[v6];
    loadedStreamKey = toBank->streamInfo.loadedStreamKey;
    if ( loadedStreamKey )
    {
      if ( !loadedStreamKey->assetHash )
      {
        loadedStreamKey->assetHash = (unsigned __int64)v30;
        v30->bankActive = 0;
        v30->load.state = SND_BANK_STATE_NEW;
        *(_WORD *)&v30->load.loadAssetBank.indicesLoaded = 0;
        *(_WORD *)&v30->load.streamAssetBank.indicesLoaded = 0;
        *(_WORD *)&v30->load.streamAssetPatchBank.indicesLoaded = 0;
      }
    }
    else
    {
      Com_PrintError(9, "SOUND ERROR: fast file data does not contain a streamKey for sound bank %s\n", toBank->name);
      v30->load.state = SND_BANK_STATE_ERROR;
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_UPDATE);
}

/*
==============
SND_AddBankToStack
==============
*/
SndBankInfo *SND_AddBankToStack(const SndBank *bank, bool isPreloading)
{
  bool alwaysLoaded; 
  unsigned __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  SndBankInfo **bankStack; 
  const char ***v9; 
  const SndBank *v10; 
  const char *name; 
  __int64 v12; 
  const char *v13; 
  signed __int64 v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  SndBankInfo *v18; 
  SndBankInfo **v19; 
  unsigned int v20; 
  __int64 v21; 
  SndBankInfo *v22; 
  unsigned int v23; 
  SndBankInfo **v24; 
  unsigned int v25; 
  __int64 v26; 
  SndBankInfo **v27; 
  SndBankInfo *v28; 
  unsigned int v29; 
  SndBankInfo **v30; 
  int v31; 

  alwaysLoaded = bank->streamInfo.alwaysLoaded;
  v3 = 32i64;
  v5 = 800i64;
  if ( alwaysLoaded )
    v3 = 0i64;
  if ( alwaysLoaded )
    v5 = 32i64;
  v31 = v3;
  if ( v3 >= v5 )
    goto LABEL_9;
  v6 = (unsigned int)v3;
  while ( g_sb.bankStack[v6]->bank )
  {
    LODWORD(v3) = v3 + 1;
    ++v6;
    v31 = v3;
    if ( v6 >= v5 )
      goto LABEL_9;
  }
  if ( (v3 & 0x80000000) != 0i64 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 426, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    bankStack = g_sb.bankStack;
    do
    {
      v9 = (const char ***)*bankStack;
      v10 = (*bankStack)->bank;
      if ( v10 )
      {
        name = v10->name;
        v12 = 0x7FFFFFFFi64;
        v13 = bank->name;
        if ( !v10->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v14 = name - v13;
        do
        {
          v15 = v13[v14];
          v16 = v12;
          v17 = *v13++;
          --v12;
          if ( !v16 )
            break;
          if ( v15 != v17 )
            goto LABEL_27;
        }
        while ( v15 );
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 439, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Bank %s already added!", **v9) )
          __debugbreak();
      }
LABEL_27:
      ++bankStack;
    }
    while ( (__int64)bankStack < (__int64)&g_sb.loadGate );
    v18 = g_sb.bankStack[v31];
    v18->mixerStopTime = 0;
    v18->bankActive = 0;
    *(_WORD *)&v18->aliasesPrecached = 0;
    v18->streamInUse = 0;
    v18->streamPriority = 0;
    v18->bank = bank;
    v18->bankPreloading = isPreloading;
    memset_0(&v18->load, 0, sizeof(v18->load));
    v19 = &g_sb.bankStack[1];
    v20 = 2;
    v18->load.bank = bank;
    *(_DWORD *)v18->load.loadAssetBank.fileHandle = -16777217;
    *(_DWORD *)v18->load.streamAssetBank.fileHandle = -16777217;
    v21 = 31i64;
    *(_DWORD *)v18->load.streamAssetPatchBank.fileHandle = -16777217;
    do
    {
      v22 = *v19;
      if ( !(*v19)->bank )
      {
        v23 = v20;
        if ( v20 < 0x20 )
        {
          v24 = &g_sb.bankStack[v20];
          while ( !(*v24)->bank )
          {
            ++v23;
            ++v24;
            if ( v23 >= 0x20 )
              goto LABEL_36;
          }
          *v19 = *v24;
          g_sb.bankStack[v23] = v22;
        }
      }
LABEL_36:
      ++v20;
      ++v19;
      --v21;
    }
    while ( v21 );
    v25 = 34;
    v26 = 767i64;
    v27 = &g_sb.bankStack[33];
    do
    {
      v28 = *v27;
      if ( !(*v27)->bank )
      {
        v29 = v25;
        if ( v25 < 0x320 )
        {
          v30 = &g_sb.bankStack[v25];
          while ( !(*v30)->bank )
          {
            ++v29;
            ++v30;
            if ( v29 >= 0x320 )
              goto LABEL_45;
          }
          *v27 = *v30;
          g_sb.bankStack[v29] = v28;
        }
      }
LABEL_45:
      ++v25;
      ++v27;
      --v26;
    }
    while ( v26 );
    SND_FixLangOrderRange(0, 0x20u);
    SND_FixLangOrderRange(0x20u, 0x320u);
    return v18;
  }
}

/*
==============
SND_AliasCount
==============
*/
__int64 SND_AliasCount()
{
  unsigned int v0; 
  SndBankInfo **bankStack; 
  __int64 v2; 
  const SndBank *bank; 

  v0 = 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  bankStack = g_sb.bankStack;
  v2 = 800i64;
  do
  {
    bank = (*bankStack)->bank;
    if ( bank && (*bankStack)->bankActive )
      v0 += bank->aliasCount;
    ++bankStack;
    --v2;
  }
  while ( v2 );
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v0;
}

/*
==============
SND_AssertBankIndexValid
==============
*/
void SND_AssertBankIndexValid(const SndBank *bank)
{
  unsigned int aliasCount; 
  __int64 i; 
  unsigned int j; 
  SndAliasList *v5; 
  unsigned int id; 
  __int64 next; 
  SndIndexEntry *aliasIndex; 
  __int64 v9; 

  if ( !*bank->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 225, ASSERT_TYPE_ASSERT, "(*(bank->name))", (const char *)&queryFormat, "*(bank->name)") )
    __debugbreak();
  if ( !*bank->zone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 226, ASSERT_TYPE_ASSERT, "(*(bank->zone))", (const char *)&queryFormat, "*(bank->zone)") )
    __debugbreak();
  if ( !*bank->soundLanguage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 227, ASSERT_TYPE_ASSERT, "(*(bank->soundLanguage))", (const char *)&queryFormat, "*(bank->soundLanguage)") )
    __debugbreak();
  aliasCount = bank->aliasCount;
  for ( i = 0i64; (unsigned int)i < aliasCount; i = (unsigned int)(i + 1) )
  {
    if ( bank->aliasIndex[i].value == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 232, ASSERT_TYPE_ASSERT, "(bank->aliasIndex[i].value != ((unsigned short) 0xFFFF))", (const char *)&queryFormat, "bank->aliasIndex[i].value != SND_BANK_INVALID_VALUE") )
      __debugbreak();
    if ( bank->aliasIndex[i].value >= bank->aliasCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 233, ASSERT_TYPE_ASSERT, "(bank->aliasIndex[i].value < bank->aliasCount)", (const char *)&queryFormat, "bank->aliasIndex[i].value < bank->aliasCount") )
      __debugbreak();
    aliasCount = bank->aliasCount;
  }
  for ( j = 0; j < aliasCount; ++j )
  {
    v5 = NULL;
    if ( !aliasCount || (id = bank->alias[j].id, next = id % aliasCount, id % aliasCount == 0xFFFF) )
    {
LABEL_27:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 243, ASSERT_TYPE_ASSERT, "(SND_FindInIndex(bank->alias[i].id, bank, &value ))", (const char *)&queryFormat, "SND_FindInIndex(bank->alias[i].id, bank, &value )") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 244, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
        __debugbreak();
    }
    else
    {
      aliasIndex = bank->aliasIndex;
      while ( 1 )
      {
        v9 = next;
        if ( aliasIndex[next].value == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 174, ASSERT_TYPE_ASSERT, "(bank->aliasIndex[idx].value != ((unsigned short) 0xFFFF))", (const char *)&queryFormat, "bank->aliasIndex[idx].value != SND_BANK_INVALID_VALUE") )
          __debugbreak();
        aliasIndex = bank->aliasIndex;
        if ( bank->alias[aliasIndex[v9].value].id == id )
          break;
        next = aliasIndex[v9].next;
        if ( (_DWORD)next == 0xFFFF )
          goto LABEL_27;
      }
      v5 = &bank->alias[aliasIndex[v9].value];
    }
    if ( v5 != &bank->alias[j] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 245, ASSERT_TYPE_ASSERT, "(value == bank->alias+i)", (const char *)&queryFormat, "value == bank->alias+i") )
      __debugbreak();
    aliasCount = bank->aliasCount;
  }
}

/*
==============
SND_BankAliasLookup
==============
*/
SndAliasList *SND_BankAliasLookup(unsigned int key)
{
  SndBank *outBankInfo; 

  return SND_BankAndAliasLookup(key, 0, (const SndBank **)&outBankInfo);
}

/*
==============
SND_BankAndAliasLookup
==============
*/
SndAliasList *SND_BankAndAliasLookup(unsigned int key, bool findInactiveBanks, const SndBank **outBankInfo)
{
  int v6; 
  __int64 v7; 
  const SndBank *bank; 
  bool v9; 
  SndAliasList *result; 

  if ( !outBankInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 942, ASSERT_TYPE_ASSERT, "(outBankInfo)", (const char *)&queryFormat, "outBankInfo") )
    __debugbreak();
  while ( g_sb.bankUnloadInProgress )
  {
    Com_Printf(9, "SND_BankAliasLookup() waiting on bank unload\n");
    Sys_Sleep(1);
  }
  if ( ((unsigned __int8)&g_sb.banksInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sb.banksInUse) )
    __debugbreak();
  _InterlockedIncrement(&g_sb.banksInUse);
  v6 = 0;
  result = NULL;
  while ( 1 )
  {
    v7 = (unsigned int)(799 - v6);
    bank = g_sb.bankInfos[v7].bank;
    v9 = LOBYTE(g_sb.bankStack[116 * v7 - 92686]) || findInactiveBanks && !g_sb.bankInfos[v7].bankPreloading;
    if ( bank && v9 && SND_FindInIndex(key, bank, &result) )
      break;
    if ( (unsigned int)++v6 >= 0x320 )
      goto LABEL_21;
  }
  *outBankInfo = bank;
LABEL_21:
  if ( ((unsigned __int64)&g_sb.banksInUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_sb.banksInUse) )
    __debugbreak();
  _InterlockedDecrement(&g_sb.banksInUse);
  return result;
}

/*
==============
SND_BankCompareStreamPriority
==============
*/
__int64 SND_BankCompareStreamPriority(const void *first, const void *second)
{
  int v4; 
  int v5; 

  if ( !first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2676, ASSERT_TYPE_ASSERT, "(firstRequest)", (const char *)&queryFormat, "firstRequest") )
    __debugbreak();
  if ( !second && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2677, ASSERT_TYPE_ASSERT, "(secondRequest)", (const char *)&queryFormat, "secondRequest") )
    __debugbreak();
  v4 = *((_DWORD *)first + 7);
  if ( v4 >= *((_DWORD *)second + 7) )
  {
    if ( v4 > *((_DWORD *)second + 7) )
      return 0xFFFFFFFFi64;
    v5 = *((_DWORD *)first + 6);
    if ( v5 >= *((_DWORD *)second + 6) )
    {
      if ( v5 <= *((_DWORD *)second + 6) )
        return 0i64;
      return 0xFFFFFFFFi64;
    }
  }
  return 1i64;
}

/*
==============
SND_BankDetailStreaming_ActiveBanksLoaded
==============
*/
__int64 SND_BankDetailStreaming_ActiveBanksLoaded()
{
  SndBankInfo **v0; 
  SndBankInfo *v1; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v0 = &g_sb.bankStack[32];
  while ( 1 )
  {
    v1 = *v0;
    if ( (*v0)->bank )
    {
      if ( v1->streamIsActive && !v1->bankActive )
        break;
    }
    if ( (__int64)++v0 >= (__int64)&g_sb.loadGate )
    {
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      return 1i64;
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return 0i64;
}

/*
==============
SND_BankDetailStreaming_AddBankRequest
==============
*/
void SND_BankDetailStreaming_AddBankRequest(const SndBankTransient *detailBank, SndBankStreamCategory category, int priority)
{
  int numDetailStreamRequests; 
  int v7; 
  SndBankDetailStreamingRequest *detailStreamRequests; 
  SndBankDetailStreamingRequest *v9; 
  const char *name; 
  char v11; 
  int v12; 
  char v13; 
  bool v14; 
  const SndBankTransient ***v15; 
  __int64 v16; 

  if ( !detailBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2521, ASSERT_TYPE_ASSERT, "(detailBank)", (const char *)&queryFormat, "detailBank") )
    __debugbreak();
  if ( category == SND_BANK_STREAM_CATEGORY_SCRIPTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2522, ASSERT_TYPE_ASSERT, "(category != SND_BANK_STREAM_CATEGORY_SCRIPTS)", "%s\n\tUse SND_BankDetailStreaming_AddScriptBankRequest() for category SND_BANK_STREAM_CATEGORY_SCRIPTS", "category != SND_BANK_STREAM_CATEGORY_SCRIPTS") )
    __debugbreak();
  if ( priority <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2523, ASSERT_TYPE_ASSERT, "(priority > 0)", (const char *)&queryFormat, "priority > 0") )
    __debugbreak();
  numDetailStreamRequests = g_sb.numDetailStreamRequests;
  v7 = 0;
  if ( g_sb.numDetailStreamRequests <= 0 )
  {
LABEL_14:
    if ( g_sb.numDetailStreamRequests >= 0x300u )
    {
      LODWORD(v16) = g_sb.numDetailStreamRequests;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2537, ASSERT_TYPE_ASSERT, "(unsigned)( g_sb.numDetailStreamRequests ) < (unsigned)( ( sizeof( *array_counter( g_sb.detailStreamRequests ) ) + 0 ) )", "g_sb.numDetailStreamRequests doesn't index ARRAY_COUNT( g_sb.detailStreamRequests )\n\t%i not in [0, %i)", v16, 768) )
        __debugbreak();
      numDetailStreamRequests = g_sb.numDetailStreamRequests;
    }
    v9 = &g_sb.detailStreamRequests[numDetailStreamRequests];
    g_sb.numDetailStreamRequests = numDetailStreamRequests + 1;
    v9->detailBank = detailBank;
    name = detailBank->bank.name;
    if ( detailBank->bank.name && (v11 = *name) != 0 )
    {
      v12 = 5381;
      do
      {
        ++name;
        v13 = v11 | 0x20;
        if ( (unsigned int)(v11 - 65) >= 0x1A )
          v13 = v11;
        v12 = 65599 * v12 + v13;
        v11 = *name;
      }
      while ( *name );
      if ( !v12 )
        v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    v9->detailBankName = v12;
    v9->bankInfo = NULL;
    v9->streamPriority = priority;
    v9->streamCategory = category;
    Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
    v15 = (const SndBankTransient ***)&g_sb.bankStack[32];
    while ( **v15 != detailBank )
    {
      if ( (__int64)++v15 >= (__int64)&g_sb.loadGate )
        goto LABEL_38;
    }
    v9->bankInfo = (SndBankInfo *)*v15;
LABEL_38:
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    if ( !v9->bankInfo )
      Com_PrintError(9, "SND_BankDetailStreaming_AddBankRequest could not find SndBankInfo for transient bank %s\n", detailBank->bank.name);
  }
  else
  {
    detailStreamRequests = g_sb.detailStreamRequests;
    while ( detailStreamRequests->detailBank != detailBank )
    {
      ++v7;
      ++detailStreamRequests;
      if ( v7 >= g_sb.numDetailStreamRequests )
        goto LABEL_14;
    }
    if ( detailStreamRequests->streamCategory > category )
      category = detailStreamRequests->streamCategory;
    v14 = detailStreamRequests->streamPriority <= priority;
    detailStreamRequests->streamCategory = category;
    if ( !v14 )
      priority = detailStreamRequests->streamPriority;
    detailStreamRequests->streamPriority = priority;
  }
}

/*
==============
SND_BankDetailStreaming_AddScriptBankRequest
==============
*/
void SND_BankDetailStreaming_AddScriptBankRequest(const unsigned int detailBankName, int priority)
{
  int numScriptDetailStreamRequests; 
  int v5; 
  __int64 v6; 
  SndBankDetailStreamingRequest *v7; 
  SndBankInfo **v8; 
  const SndBank *bank; 
  const char *name; 
  char v11; 
  int v12; 
  char v13; 
  __int64 v14; 

  if ( !detailBankName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2586, ASSERT_TYPE_ASSERT, "(detailBankName != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "detailBankName != SND_INVALID_HASH") )
    __debugbreak();
  numScriptDetailStreamRequests = g_sb.numScriptDetailStreamRequests;
  v5 = 0;
  if ( g_sb.numScriptDetailStreamRequests <= 0 )
  {
LABEL_8:
    if ( g_sb.numScriptDetailStreamRequests >= 0x40u )
    {
      LODWORD(v14) = g_sb.numScriptDetailStreamRequests;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2599, ASSERT_TYPE_ASSERT, "(unsigned)( g_sb.numScriptDetailStreamRequests ) < (unsigned)( ( sizeof( *array_counter( g_sb.scriptDetailStreamRequests ) ) + 0 ) )", "g_sb.numScriptDetailStreamRequests doesn't index ARRAY_COUNT( g_sb.scriptDetailStreamRequests )\n\t%i not in [0, %i)", v14, 64) )
        __debugbreak();
      numScriptDetailStreamRequests = g_sb.numScriptDetailStreamRequests;
    }
    v7 = &g_sb.scriptDetailStreamRequests[numScriptDetailStreamRequests];
    g_sb.numScriptDetailStreamRequests = numScriptDetailStreamRequests + 1;
    v7->detailBank = NULL;
    v7->detailBankName = detailBankName;
    v7->bankInfo = NULL;
    v7->streamPriority = priority;
    v7->streamCategory = SND_BANK_STREAM_CATEGORY_SCRIPTS;
    Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
    v8 = &g_sb.bankStack[32];
    while ( 1 )
    {
      bank = (*v8)->bank;
      if ( bank )
      {
        name = bank->name;
        if ( name && (v11 = *name) != 0 )
        {
          v12 = 5381;
          do
          {
            ++name;
            v13 = v11 | 0x20;
            if ( (unsigned int)(v11 - 65) >= 0x1A )
              v13 = v11;
            v12 = 65599 * v12 + v13;
            v11 = *name;
          }
          while ( *name );
          if ( !v12 )
            v12 = 1;
        }
        else
        {
          v12 = 0;
        }
        if ( v12 == detailBankName )
          break;
      }
      if ( (__int64)++v8 >= (__int64)&g_sb.loadGate )
        goto LABEL_31;
    }
    v7->bankInfo = *v8;
LABEL_31:
    Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
    if ( !v7->bankInfo )
      Com_PrintError(9, "SND_BankDetailStreaming_AddScriptBankRequest could not find SndBankInfo for transient bank\n");
  }
  else
  {
    v6 = 0i64;
    while ( g_sb.scriptDetailStreamRequests[v6].detailBankName != detailBankName )
    {
      ++v5;
      ++v6;
      if ( v5 >= g_sb.numScriptDetailStreamRequests )
        goto LABEL_8;
    }
    if ( g_sb.scriptDetailStreamRequests[v6].streamPriority > priority )
      priority = g_sb.scriptDetailStreamRequests[v6].streamPriority;
    g_sb.scriptDetailStreamRequests[v6].streamPriority = priority;
  }
}

/*
==============
SND_BankDetailStreaming_BankIsActive
==============
*/
_BOOL8 SND_BankDetailStreaming_BankIsActive(const SndBankTransient *detailBank)
{
  bool streamIsActive; 
  SndBankInfo **v3; 

  if ( !detailBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2646, ASSERT_TYPE_ASSERT, "(detailBank)", (const char *)&queryFormat, "detailBank") )
    __debugbreak();
  streamIsActive = 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = &g_sb.bankStack[32];
  while ( (const SndBankTransient *)(*v3)->bank != detailBank )
  {
    if ( (__int64)++v3 >= (__int64)&g_sb.loadGate )
      goto LABEL_9;
  }
  streamIsActive = (*v3)->streamIsActive;
LABEL_9:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return streamIsActive;
}

/*
==============
SND_BankDetailStreaming_BankSizeBytes
==============
*/
__int64 SND_BankDetailStreaming_BankSizeBytes(const SndBankInfo *bankInfo)
{
  if ( !bankInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2509, ASSERT_TYPE_ASSERT, "(bankInfo)", (const char *)&queryFormat, "bankInfo") )
    __debugbreak();
  if ( !bankInfo->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2510, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
    __debugbreak();
  return bankInfo->bank->streamInfo.loadedStreamKey->dataSize;
}

/*
==============
SND_BankDetailStreaming_Init
==============
*/
void SND_BankDetailStreaming_Init(void)
{
  SndBankInfo **v0; 
  __int64 v1; 
  SndBankInfo *v2; 
  SndBankInfo *v3; 
  SndBankInfo *v4; 
  SndBankInfo *v5; 

  v0 = &g_sb.bankStack[1];
  do
  {
    v1 = (__int64)*(v0 - 1);
    *(_DWORD *)(v1 + 920) = 0;
    *(_WORD *)(v1 + 915) = 0;
    v2 = *v0;
    v2->streamPriority = 0;
    *(_WORD *)&v2->streamIsActive = 0;
    v3 = v0[1];
    v3->streamPriority = 0;
    *(_WORD *)&v3->streamIsActive = 0;
    v4 = v0[2];
    v4->streamPriority = 0;
    *(_WORD *)&v4->streamIsActive = 0;
    v5 = v0[3];
    v0 += 5;
    v5->streamPriority = 0;
    *(_WORD *)&v5->streamIsActive = 0;
  }
  while ( (__int64)v0 < (__int64)&g_sb.banksInUse );
  g_sb.numDetailStreamRequests = 0;
  g_sb.numScriptDetailStreamRequests = 0;
  g_sb.scriptedSoundbanksStateBitfield = 0i64;
}

/*
==============
SND_BankDetailStreaming_RemoveBankRequest
==============
*/
void SND_BankDetailStreaming_RemoveBankRequest(const SndBankTransient *detailBank)
{
  int v2; 
  SndBankDetailStreamingRequest *i; 

  if ( !detailBank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2565, ASSERT_TYPE_ASSERT, "(detailBank)", (const char *)&queryFormat, "detailBank") )
    __debugbreak();
  v2 = 0;
  if ( g_sb.numDetailStreamRequests > 0 )
  {
    for ( i = g_sb.detailStreamRequests; i->detailBank != detailBank; ++i )
    {
      if ( ++v2 >= g_sb.numDetailStreamRequests )
        return;
    }
    *i = g_sb.detailStreamRequests[--g_sb.numDetailStreamRequests];
  }
}

/*
==============
SND_BankDetailStreaming_RemoveScriptBankRequest
==============
*/
void SND_BankDetailStreaming_RemoveScriptBankRequest(const unsigned int detailBankName)
{
  int v2; 
  SndBankDetailStreamingRequest *i; 

  if ( !detailBankName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2628, ASSERT_TYPE_ASSERT, "(detailBankName != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "detailBankName != SND_INVALID_HASH") )
    __debugbreak();
  v2 = 0;
  if ( g_sb.numScriptDetailStreamRequests > 0 )
  {
    for ( i = g_sb.scriptDetailStreamRequests; i->detailBankName != detailBankName; ++i )
    {
      if ( ++v2 >= g_sb.numScriptDetailStreamRequests )
        return;
    }
    *i = g_sb.scriptDetailStreamRequests[--g_sb.numScriptDetailStreamRequests];
  }
}

/*
==============
SND_BankDetailStreaming_Reset
==============
*/
void SND_BankDetailStreaming_Reset(void)
{
  *(_QWORD *)g_sb.bankStreamBytesUsed = 0i64;
  *(_QWORD *)&g_sb.bankStreamBytesUsed[2] = 0i64;
  g_sb.numDetailStreamRequests = 0;
}

/*
==============
SND_BankDetailStreaming_Update
==============
*/
void SND_BankDetailStreaming_Update(void)
{
  __int64 v0; 
  int v1; 
  SndBankInfo **v2; 
  SndBankInfo **v3; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  SndBankInfo *v6; 
  bool IsBankInUse; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  SndBankInfo *info[768]; 

  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_BankDetailStreaming_Update");
  qsort(g_sb.detailStreamRequests, g_sb.numDetailStreamRequests, 0x20ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SND_BankCompareStreamPriority);
  qsort(g_sb.scriptDetailStreamRequests, g_sb.numScriptDetailStreamRequests, 0x20ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SND_BankCompareStreamPriority);
  v0 = 0i64;
  v1 = 0;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = info;
  v3 = &g_sb.bankStack[32];
  do
  {
    v4 = *v3;
    bank = (*v3)->bank;
    if ( bank && !bank->streamInfo.alwaysLoaded )
    {
      if ( (unsigned int)v1 >= 0x300 )
      {
        LODWORD(v10) = 768;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2807, ASSERT_TYPE_ASSERT, "(unsigned)( transientBankCount ) < (unsigned)( 768 )", "transientBankCount doesn't index SND_MAX_TRANSIENT_BANKS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      ++v1;
      *v2++ = v4;
      v4->streamIsActive = 0;
      v4->streamPriority = 0;
    }
    ++v3;
  }
  while ( (__int64)v3 < (__int64)&g_sb.loadGate );
  SND_BankDetailStreaming_UpdateInternal(g_sb.detailStreamRequests, g_sb.numDetailStreamRequests);
  SND_BankDetailStreaming_UpdateInternal(g_sb.scriptDetailStreamRequests, g_sb.numScriptDetailStreamRequests);
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  if ( v1 > 0 )
  {
    do
    {
      v6 = info[v0];
      if ( !v6 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2826, ASSERT_TYPE_ASSERT, "(bankInfo)", (const char *)&queryFormat, "bankInfo") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2487, ASSERT_TYPE_ASSERT, "(bankInfo)", (const char *)&queryFormat, "bankInfo") )
          __debugbreak();
      }
      if ( !v6->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2488, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
        __debugbreak();
      IsBankInUse = SND_IsBankInUse(v6);
      v8 = !v6->streamIsActive;
      v6->streamInUse = IsBankInUse;
      if ( v8 )
      {
        if ( !v6->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2499, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
          __debugbreak();
        SND_StopBankSoundsWithBankInfo(v6);
        if ( v6->bankActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2833, ASSERT_TYPE_ASSERT, "(!bankInfo->bankActive)", (const char *)&queryFormat, "!bankInfo->bankActive") )
          __debugbreak();
      }
      ++v0;
    }
    while ( v0 < v1 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_BankDetailStreaming_UpdateInternal
==============
*/
void SND_BankDetailStreaming_UpdateInternal(SndBankDetailStreamingRequest *detailStreamRequests, int numDetailStreamRequests)
{
  const dvar_t *v2; 
  __int64 v3; 
  int integer; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  const dvar_t *v12; 
  char enabled; 
  const dvar_t *v14; 
  char v15; 
  const dvar_t *v16; 
  char v17; 
  const dvar_t *v18; 
  __int64 v19; 
  SndBankInfo **p_bankInfo; 
  SndBankInfo *v21; 
  __int64 v22; 
  unsigned int dataSize; 
  int v24; 
  int streamPriority; 
  char v26[8]; 
  int v27[4]; 

  v2 = DCONST_DVARINT_snd_transient_bank_budget_weapons;
  v3 = numDetailStreamRequests;
  if ( !DCONST_DVARINT_snd_transient_bank_budget_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_weapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v6 = DCONST_DVARINT_snd_transient_bank_budget_vehicles;
  v27[0] = integer;
  if ( !DCONST_DVARINT_snd_transient_bank_budget_vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_vehicles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  v8 = DCONST_DVARINT_snd_transient_bank_budget_scripts;
  v27[1] = v7;
  if ( !DCONST_DVARINT_snd_transient_bank_budget_scripts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_scripts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DCONST_DVARINT_snd_transient_bank_budget_triggers;
  v27[2] = v9;
  if ( !DCONST_DVARINT_snd_transient_bank_budget_triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_budget_triggers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  v12 = DCONST_DVARBOOL_snd_transient_bank_enabled_weapons;
  v27[3] = v11;
  if ( !DCONST_DVARBOOL_snd_transient_bank_enabled_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_enabled_weapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  enabled = v12->current.enabled;
  v14 = DCONST_DVARBOOL_snd_transient_bank_enabled_vehicles;
  v26[0] = enabled;
  if ( !DCONST_DVARBOOL_snd_transient_bank_enabled_vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_enabled_vehicles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.enabled;
  v16 = DCONST_DVARBOOL_snd_transient_bank_enabled_scripts;
  v26[1] = v15;
  if ( !DCONST_DVARBOOL_snd_transient_bank_enabled_scripts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_enabled_scripts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.enabled;
  v18 = DCONST_DVARBOOL_snd_transient_bank_enabled_triggers;
  v26[2] = v17;
  if ( !DCONST_DVARBOOL_snd_transient_bank_enabled_triggers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_transient_bank_enabled_triggers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v3;
  v26[3] = v18->current.enabled;
  if ( (int)v3 > 0 )
  {
    p_bankInfo = &detailStreamRequests->bankInfo;
    do
    {
      if ( !*((_DWORD *)p_bankInfo + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2763, ASSERT_TYPE_ASSERT, "(request->streamPriority)", (const char *)&queryFormat, "request->streamPriority") )
        __debugbreak();
      if ( v26[*((int *)p_bankInfo + 3)] )
      {
        v21 = *p_bankInfo;
        if ( *p_bankInfo )
        {
          if ( !v21->bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2510, ASSERT_TYPE_ASSERT, "(bankInfo->bank)", (const char *)&queryFormat, "bankInfo->bank") )
            __debugbreak();
          v22 = *((int *)p_bankInfo + 3);
          dataSize = v21->bank->streamInfo.loadedStreamKey->dataSize;
          v24 = v27[v22];
          if ( v24 < 0 || (int)(dataSize + g_sb.bankStreamBytesUsed[v22]) <= v24 )
          {
            (*p_bankInfo)->streamIsActive = 1;
            streamPriority = *((_DWORD *)p_bankInfo + 2);
            if ( (*p_bankInfo)->streamPriority > streamPriority )
              streamPriority = (*p_bankInfo)->streamPriority;
            (*p_bankInfo)->streamPriority = streamPriority;
            g_sb.bankStreamBytesUsed[*((int *)p_bankInfo + 3)] += dataSize;
          }
        }
        else
        {
          Com_PrintWarning(9, "SND_BankDetailStreaming_UpdateInternal(): Request for %s has no associated SndBankInfo\n", (const char *)(*(p_bankInfo - 2))->bank);
        }
      }
      p_bankInfo += 4;
      --v19;
    }
    while ( v19 );
  }
}

/*
==============
SND_BankDevhost
==============
*/
void SND_BankDevhost(void)
{
  SndBankInfo **bankStack; 
  char *v1; 
  char *p_dest; 
  int v3; 
  __int64 v4; 
  SndBankInfo *v5; 
  const SndBank *bank; 
  const char *zone; 
  char v8; 
  int v9; 
  char v10; 
  const char *soundLanguage; 
  char v12; 
  int v13; 
  char v14; 
  const SndBank **v15; 
  SndBankInfo *v16; 
  unsigned int v17; 
  const SndBank *v18; 
  int flags; 
  SndBankInfo *v20; 
  int v21; 
  int v22; 
  SndBankPrecacheEntry *v23; 
  unsigned int refCount; 
  SndBankPrecacheEntry *precacheLookup; 
  int v26; 
  unsigned int v27; 
  char msg[4]; 
  char v29; 
  char dest; 
  unsigned int bankCount; 
  BOOL loadGate; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  memset_0(msg, 0, 0x200B0ui64);
  bankStack = g_sb.bankStack;
  bankCount = g_sb.bankCount;
  v1 = &v29;
  p_dest = &dest;
  v3 = 0;
  loadGate = g_sb.loadGate;
  v33 = 0;
  v42 = 1;
  v4 = 800i64;
  do
  {
    v5 = *bankStack;
    bank = (*bankStack)->bank;
    if ( bank )
    {
      zone = bank->zone;
      if ( zone && (v8 = *zone) != 0 )
      {
        v9 = 5381;
        do
        {
          ++zone;
          v10 = v8 | 0x20;
          if ( (unsigned int)(v8 - 65) >= 0x1A )
            v10 = v8;
          v9 = 65599 * v9 + v10;
          v8 = *zone;
        }
        while ( *zone );
        if ( !v9 )
          v9 = 1;
      }
      else
      {
        v9 = 0;
      }
      *((_DWORD *)v1 - 1) = v9;
      soundLanguage = v5->bank->soundLanguage;
      if ( soundLanguage && (v12 = *soundLanguage) != 0 )
      {
        v13 = 5381;
        do
        {
          ++soundLanguage;
          v14 = v12 | 0x20;
          if ( (unsigned int)(v12 - 65) >= 0x1A )
            v14 = v12;
          v13 = 65599 * v13 + v14;
          v12 = *soundLanguage;
        }
        while ( *soundLanguage );
        if ( !v13 )
          v13 = 1;
      }
      else
      {
        v13 = 0;
      }
      *(_DWORD *)v1 = v13;
      Core_strcpy(p_dest - 64, 0x40ui64, v5->bank->zone);
      Core_strcpy(p_dest, 0x40ui64, (*bankStack)->bank->soundLanguage);
      v15 = (const SndBank **)*bankStack;
      *((_DWORD *)v1 + 33) = (*bankStack)->bank->aliasCount;
      *((_DWORD *)v1 + 34) = (*v15)->sendEffectCount;
      *(_QWORD *)(v1 + 140) = 0i64;
      *(_QWORD *)(v1 + 148) = 0i64;
      if ( SND_ShouldPrecacheBank(*v15) )
      {
        v16 = *bankStack;
        v17 = 0;
        v18 = (*bankStack)->bank;
        if ( v18->aliasCount )
        {
          do
          {
            flags = v18->alias[v17].head->flags;
            if ( (flags & 0x80000) != 0 )
            {
              if ( (flags & 1) != 0 )
                ++*((_DWORD *)v1 + 38);
              else
                ++*((_DWORD *)v1 + 37);
            }
            v18 = v16->bank;
            ++v17;
          }
          while ( v17 < v16->bank->aliasCount );
        }
      }
      v20 = *bankStack;
      v1[156] = !(*bankStack)->bank->streamInfo.alwaysLoaded;
      v33 += v20->bank->aliasCount;
      v34 += *((_DWORD *)v1 + 37);
      v35 += *((_DWORD *)v1 + 38);
    }
    p_dest += 164;
    ++bankStack;
    v1 += 164;
    --v4;
  }
  while ( v4 );
  v21 = 0;
  v36 = 32256;
  v22 = 0;
  v38 = 0;
  v40 = 0;
  v23 = &g_sb.precacheLookup[511];
  v37 = 511;
  do
  {
    if ( v23->aliasList )
    {
      refCount = v23->refCount;
      ++v21;
      if ( refCount > 1 )
        v22 = v22 + refCount - 1;
    }
    ++v23;
  }
  while ( (__int64)v23 < (__int64)g_sb.streamHeaderPool );
  v40 = v22;
  precacheLookup = g_sb.precacheLookup;
  v26 = 0;
  v38 = v21;
  v41 = 0;
  v39 = 0;
  do
  {
    if ( precacheLookup->aliasList )
    {
      v27 = precacheLookup->refCount;
      v39 = ++v3;
      if ( v27 > 1 )
        v26 = v26 + v27 - 1;
    }
    ++precacheLookup;
  }
  while ( (__int64)precacheLookup < (__int64)&g_sb.precacheLookup[511] );
  v41 = v26;
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  Com_DevhostSendMessage(3, 0x1Du, 0x200B0u, msg);
}

/*
==============
SND_BankEnumAliasLists
==============
*/
void SND_BankEnumAliasLists(void (*func)(SndAliasList *))
{
  unsigned int i; 
  SndBankInfo *v3; 
  const SndBank *bank; 
  unsigned int j; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  for ( i = 0; i < 0x320; ++i )
  {
    v3 = g_sb.bankStack[799 - i];
    bank = v3->bank;
    if ( v3->bank )
    {
      if ( v3->bankActive )
      {
        for ( j = 0; j < bank->aliasCount; ++j )
          func(&bank->alias[j]);
      }
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
}

/*
==============
SND_BankInit
==============
*/
void SND_BankInit(void)
{
  SndBankInfo **bankStack; 
  SndBankInfo *bankInfos; 
  __int64 v2; 
  __m256i v3; 
  __m256i v4; 
  double v5; 
  StreamKeyBehavior v6; 

  memset_0(&g_sb.bankCount, 0, 0x13EAB4ui64);
  bankStack = g_sb.bankStack;
  g_sb.bankMagic = 304297029;
  bankInfos = g_sb.bankInfos;
  v2 = 800i64;
  do
  {
    *bankStack++ = bankInfos++;
    --v2;
  }
  while ( v2 );
  LOBYTE(v5) = 1;
  v3.m256i_i64[1] = 0i64;
  v3.m256i_i64[3] = 0i64;
  v4.m256i_i64[3] = 0i64;
  v3.m256i_i64[0] = (__int64)SND_StreamedBankLoadedFrontend;
  v3.m256i_i64[2] = (__int64)SND_StreamedBankUnloadedFrontend;
  v4.m256i_i64[1] = (__int64)SND_StreamedBankPtrFixupNewBackend;
  v4.m256i_i64[2] = (__int64)SND_StreamedBankPtrFixupRelocateBackend;
  v4.m256i_i64[0] = (__int64)SND_StreamedBankDBPreRelease;
  *(__m256i *)&v6.loadedFrontend = v3;
  HIDWORD(v5) = 4096;
  *(__m256i *)&v6.dbPreRelease = v4;
  *(double *)&v6.forceFixedRegion = v5;
  StreamKey_SetBehavior(SKBI_SOUND, &v6);
}

/*
==============
SND_BankStreamUpdate
==============
*/
void SND_BankStreamUpdate(void)
{
  SndBankInfo **bankStack; 
  SndBankInfo *v1; 
  const SndBank *bank; 
  const dvar_t *v3; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  bankStack = g_sb.bankStack;
  do
  {
    v1 = *bankStack;
    bank = (*bankStack)->bank;
    if ( bank )
    {
      v3 = DCONST_DVARBOOL_stream_hintAudio;
      if ( !DCONST_DVARBOOL_stream_hintAudio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hintAudio") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.enabled && v1->load.state != SND_BANK_STATE_ERROR )
      {
        if ( !bank->streamInfo.loadedStreamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 101, ASSERT_TYPE_ASSERT, "(info->loadedStreamKey)", (const char *)&queryFormat, "info->loadedStreamKey") )
          __debugbreak();
        if ( bank->streamInfo.alwaysLoaded || v1->streamInUse )
        {
          Stream_UsedGeneric(bank->streamInfo.loadedStreamKey);
        }
        else if ( v1->streamIsActive )
        {
          Stream_RequestGeneric(bank->streamInfo.loadedStreamKey);
          Stream_BoostGeneric(bank->streamInfo.loadedStreamKey, v1->streamPriority);
          if ( v1->load.state == SND_BANK_STATE_READY_TO_USE && !v1->bankPreloading && Stream_GenericIsSafeToUse(v1->bank->streamInfo.loadedStreamKey) )
            v1->bankActive = 1;
        }
      }
    }
    ++bankStack;
  }
  while ( (__int64)bankStack < (__int64)&g_sb.loadGate );
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
}

/*
==============
SND_BankUpdate
==============
*/

bool __fastcall SND_BankUpdate()
{
  return SND_BankLoadUpdate();
}

/*
==============
SND_DevAllocatePrecachedAliasIndex
==============
*/
bool SND_DevAllocatePrecachedAliasIndex(unsigned __int16 *outIndex, const char *aliasName, const int limit)
{
  unsigned __int16 v3; 
  SndAliasList *v6; 
  unsigned __int16 v7; 
  __int64 v8; 
  bool result; 
  const char *v10; 
  char v11; 
  unsigned int v12; 
  char v13; 
  SndAliasList *v14; 
  const char **p_aliasName; 
  __int64 v16; 
  SndBank *outBankInfo; 

  v3 = limit;
  if ( limit > 511 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1175, ASSERT_TYPE_ASSERT, "( limit ) <= ( ( 512 - 1 ) )", "%s <= %s\n\t%i, %i", "limit", "SND_MAX_PRECACHED_LOOPED_ALIASES", limit, 511) )
    __debugbreak();
  v6 = NULL;
  v7 = 0;
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v8 = v7++;
    if ( !g_sb.precacheLookup[(unsigned int)v8].aliasList )
      break;
    if ( v7 >= v3 )
      return 0;
  }
  *outIndex = v7;
  if ( g_sb.bankMagic != 304297029 )
    goto LABEL_29;
  v10 = aliasName;
  if ( !aliasName )
    goto LABEL_22;
  v11 = *aliasName;
  if ( !*aliasName )
    goto LABEL_22;
  v12 = 5381;
  do
  {
    ++v10;
    v13 = v11 | 0x20;
    if ( (unsigned int)(v11 - 65) >= 0x1A )
      v13 = v11;
    v12 = 65599 * v12 + v13;
    v11 = *v10;
  }
  while ( *v10 );
  if ( !v12 )
    v12 = 1;
  v14 = SND_BankAndAliasLookup(v12, 0, (const SndBank **)&outBankInfo);
  p_aliasName = &v14->aliasName;
  if ( v14 && v14->count )
  {
    if ( I_strnicmp(aliasName, v14->aliasName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1032, ASSERT_TYPE_ASSERT, "(!I_stricmp(name,list->aliasName))", "%s\n\tSound alias hash collision.  Consider renaming %s or %s", "!I_stricmp(name,list->aliasName)", aliasName, *p_aliasName) )
      __debugbreak();
  }
  else
  {
LABEL_22:
    p_aliasName = NULL;
  }
  v6 = (SndAliasList *)p_aliasName;
  if ( !p_aliasName )
  {
LABEL_29:
    if ( SND_Active() )
      Com_PrintError(9, "Missing sound alias: %s\n", aliasName);
  }
  v16 = v8;
  result = 1;
  g_sb.precacheLookup[v16].aliasList = v6;
  g_sb.precacheLookup[v16].refCount = 1;
  return result;
}

/*
==============
SND_DevFindPrecachedAliasIndex
==============
*/
char SND_DevFindPrecachedAliasIndex(const char *name, unsigned __int16 *outIndex)
{
  char v4; 
  unsigned int v5; 
  char v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  SndAliasList *aliasList; 

  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1126, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  if ( name && (v4 = *name) != 0 )
  {
    v5 = 5381;
    do
    {
      ++name;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *name;
    }
    while ( *name );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = -1;
  v8 = 0;
  v9 = v5 % 0x1FF;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  while ( 1 )
  {
    aliasList = g_sb.precacheLookup[v9].aliasList;
    if ( aliasList )
    {
      if ( aliasList->id == v5 )
        break;
    }
    ++v8;
    v9 = (v9 + 1) % 0x1FF;
    if ( v8 >= 511 )
      goto LABEL_20;
  }
  v7 = v9;
LABEL_20:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  if ( v7 >= 0 )
  {
    *outIndex = truncate_cast<unsigned short,int>(v7 + 1);
    return 1;
  }
  else
  {
    *outIndex = 0;
    return 0;
  }
}

/*
==============
SND_FindAlias
==============
*/
SndAliasList *SND_FindAlias(const char *name)
{
  const char **p_aliasName; 
  unsigned int v3; 
  SndAliasList *v4; 
  SndBank *outBankInfo; 

  if ( g_sb.bankMagic != 304297029 )
  {
    p_aliasName = NULL;
LABEL_11:
    if ( SND_Active() )
      Com_PrintError(9, "Missing sound alias: %s\n", name);
    return (SndAliasList *)p_aliasName;
  }
  v3 = SND_HashName(name);
  if ( v3 && (v4 = SND_BankAndAliasLookup(v3, 0, (const SndBank **)&outBankInfo), (p_aliasName = &v4->aliasName) != NULL) && v4->count )
  {
    if ( I_strnicmp(name, v4->aliasName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1032, ASSERT_TYPE_ASSERT, "(!I_stricmp(name,list->aliasName))", "%s\n\tSound alias hash collision.  Consider renaming %s or %s", "!I_stricmp(name,list->aliasName)", name, *p_aliasName) )
      __debugbreak();
  }
  else
  {
    p_aliasName = NULL;
  }
  if ( !p_aliasName )
    goto LABEL_11;
  return (SndAliasList *)p_aliasName;
}

/*
==============
SND_FindAliasFromId
==============
*/
SndAliasList *SND_FindAliasFromId(unsigned int hash)
{
  SndBank *outBankInfo; 

  if ( g_sb.bankMagic == 304297029 && hash )
    return SND_BankAndAliasLookup(hash, 0, (const SndBank **)&outBankInfo);
  else
    return 0i64;
}

/*
==============
SND_FindAliasId
==============
*/
__int64 SND_FindAliasId(const char *name)
{
  const char *v2; 
  char v3; 
  unsigned int v4; 
  char v5; 
  SndAliasList *v6; 
  const char **p_aliasName; 
  SndBank *outBankInfo; 

  v2 = name;
  if ( !name )
    return 0i64;
  v3 = *name;
  if ( !*name )
    return 0i64;
  v4 = 5381;
  do
  {
    ++v2;
    v5 = v3 | 0x20;
    if ( (unsigned int)(v3 - 65) >= 0x1A )
      v5 = v3;
    v4 = 65599 * v4 + v5;
    v3 = *v2;
  }
  while ( *v2 );
  if ( !v4 )
    v4 = 1;
  if ( g_sb.bankMagic == 304297029 )
  {
    v6 = SND_BankAndAliasLookup(v4, 0, (const SndBank **)&outBankInfo);
    p_aliasName = &v6->aliasName;
    if ( v6 )
    {
      if ( I_strnicmp(name, v6->aliasName, 0x7FFFFFFFui64) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1107, ASSERT_TYPE_ASSERT, "(!I_stricmp( name, alias->aliasName ))", "%s\n\tSound alias hash collision.  Consider renaming %s or %s", "!I_stricmp( name, alias->aliasName )", name, *p_aliasName) )
          __debugbreak();
      }
      return v4;
    }
    if ( g_sb.bankMagic == 304297029 )
      return v4;
  }
  SND_LogRegisterString(name, v4);
  return v4;
}

/*
==============
SND_FindAliasLookup
==============
*/
SndAliasLookup SND_FindAliasLookup(const char *name)
{
  return (SndAliasLookup)name;
}

/*
==============
SND_FindDuck
==============
*/

const SndDuck *__fastcall SND_FindDuck(unsigned int id)
{
  return SND_GetDuckById(id);
}

/*
==============
SND_FindInIndex
==============
*/
char SND_FindInIndex(unsigned int key, const SndBank *bank, SndAliasList **result)
{
  unsigned int aliasCount; 
  __int64 next; 
  SndIndexEntry *aliasIndex; 
  __int64 v9; 
  SndAliasList *v10; 

  aliasCount = bank->aliasCount;
  if ( !aliasCount )
    return 0;
  next = key % aliasCount;
  if ( key % aliasCount == 0xFFFF )
    return 0;
  aliasIndex = bank->aliasIndex;
  while ( 1 )
  {
    v9 = next;
    if ( aliasIndex[next].value == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 174, ASSERT_TYPE_ASSERT, "(bank->aliasIndex[idx].value != ((unsigned short) 0xFFFF))", (const char *)&queryFormat, "bank->aliasIndex[idx].value != SND_BANK_INVALID_VALUE") )
      __debugbreak();
    aliasIndex = bank->aliasIndex;
    v10 = &bank->alias[aliasIndex[v9].value];
    if ( v10->id == key )
      break;
    next = aliasIndex[v9].next;
    if ( (_DWORD)next == 0xFFFF )
      return 0;
  }
  *result = v10;
  return 1;
}

/*
==============
SND_FindMusicState
==============
*/
__int64 SND_FindMusicState(unsigned int id)
{
  int v3; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int musicSetCount; 
  __int64 v7; 
  SndMusicSet *musicSets; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int stateCount; 
  __int64 v12; 

  if ( !id )
    return 0i64;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = 0;
  while ( 1 )
  {
    v4 = g_sb.bankStack[799 - v3];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        musicSetCount = bank->musicSetCount;
        v7 = 0i64;
        if ( musicSetCount )
          break;
      }
    }
LABEL_12:
    if ( (unsigned int)++v3 >= 0x320 )
    {
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      return 0i64;
    }
  }
  musicSets = bank->musicSets;
  while ( 1 )
  {
    v9 = (unsigned int)v7;
    v10 = 0;
    stateCount = musicSets[v7].stateCount;
    if ( stateCount )
      break;
LABEL_11:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= musicSetCount )
      goto LABEL_12;
  }
  while ( 1 )
  {
    v12 = v10;
    if ( musicSets[v7].states[v12].id == id )
      break;
    if ( ++v10 >= stateCount )
      goto LABEL_11;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return (__int64)&bank->musicSets[v9].states[v12];
}

/*
==============
SND_FindPrecachedAliasFromIndex
==============
*/
__int64 SND_FindPrecachedAliasFromIndex(unsigned __int16 index, const char **outName)
{
  unsigned __int16 v2; 
  unsigned __int8 v3; 
  SndAliasList *aliasList; 

  v2 = index - 1;
  v3 = 0;
  if ( (unsigned __int16)(index - 1) >= 0x7FFFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1241, ASSERT_TYPE_ASSERT, "(realIndex < ( (1 << 15) - 1 ))", (const char *)&queryFormat, "realIndex < SND_MAX_PRECACHED_ALIASES") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  aliasList = g_sb.precacheLookup[v2].aliasList;
  if ( aliasList )
  {
    v3 = 1;
    *outName = aliasList->aliasName;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v3;
}

/*
==============
SND_FindPrecachedAliasIndex
==============
*/
char SND_FindPrecachedAliasIndex(const char *name, unsigned __int16 *outIndex)
{
  char v4; 
  unsigned int v5; 
  char v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  SndAliasList *aliasList; 

  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1200, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  if ( name && (v4 = *name) != 0 )
  {
    v5 = 5381;
    do
    {
      ++name;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *name;
    }
    while ( *name );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = -1;
  v8 = 0;
  v9 = v5 % 0x7E00;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  while ( 1 )
  {
    aliasList = g_sb.precacheLookup[v9 + 511].aliasList;
    if ( aliasList )
    {
      if ( aliasList->id == v5 )
        break;
    }
    ++v8;
    v9 = (v9 + 1) % 0x7E00;
    if ( v8 >= 32256 )
      goto LABEL_20;
  }
  v7 = v9 + 511;
LABEL_20:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  if ( v7 >= 0 )
  {
    *outIndex = truncate_cast<unsigned short,int>(v7 + 1);
    return 1;
  }
  else
  {
    *outIndex = 0;
    return 0;
  }
}

/*
==============
SND_FindPrecachedLoopedAliasIndex
==============
*/
char SND_FindPrecachedLoopedAliasIndex(const char *name, unsigned __int16 *outIndex)
{
  char v4; 
  unsigned int v5; 
  char v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  SndAliasList *aliasList; 

  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1126, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  if ( name && (v4 = *name) != 0 )
  {
    v5 = 5381;
    do
    {
      ++name;
      v6 = v4 | 0x20;
      if ( (unsigned int)(v4 - 65) >= 0x1A )
        v6 = v4;
      v5 = 65599 * v5 + v6;
      v4 = *name;
    }
    while ( *name );
    if ( !v5 )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = -1;
  v8 = 0;
  v9 = v5 % 0x1FF;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  while ( 1 )
  {
    aliasList = g_sb.precacheLookup[v9].aliasList;
    if ( aliasList )
    {
      if ( aliasList->id == v5 )
        break;
    }
    ++v8;
    v9 = (v9 + 1) % 0x1FF;
    if ( v8 >= 511 )
      goto LABEL_20;
  }
  v7 = v9;
LABEL_20:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  if ( v7 >= 0 )
  {
    *outIndex = truncate_cast<unsigned short,int>(v7 + 1);
    return 1;
  }
  else
  {
    *outIndex = 0;
    return 0;
  }
}

/*
==============
SND_FindRowAlias
==============
*/
SndAliasList *SND_FindRowAlias(unsigned int id)
{
  SndBank *outBankInfo; 

  if ( g_sb.bankMagic == 304297029 && id )
    return SND_BankAndAliasLookup(id, 0, (const SndBank **)&outBankInfo);
  else
    return 0i64;
}

/*
==============
SND_FindRowDopplerPreset
==============
*/
DopplerPreset *SND_FindRowDopplerPreset(unsigned int id)
{
  DopplerPreset *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int dopplerPresetCount; 
  int v7; 
  DopplerPreset *dopplerPresets; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        dopplerPresetCount = bank->dopplerPresetCount;
        v7 = 0;
        if ( dopplerPresetCount )
        {
          dopplerPresets = bank->dopplerPresets;
          while ( dopplerPresets[v7].id != id )
          {
            if ( ++v7 >= dopplerPresetCount )
              goto LABEL_11;
          }
          v2 = &dopplerPresets[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowEntChannel
==============
*/
snd_entchannel_info_t *SND_FindRowEntChannel(unsigned int id)
{
  unsigned int entchannelCount; 
  __int64 v2; 
  snd_entchannel_info_t *entchannelInfo; 
  unsigned int *i; 

  if ( !g_snd.globals )
    return 0i64;
  entchannelCount = g_snd.globals->entchannelCount;
  v2 = 0i64;
  if ( !entchannelCount )
    return 0i64;
  entchannelInfo = g_snd.globals->entchannelInfo;
  for ( i = &entchannelInfo->id; *i != id; i += 31 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= entchannelCount )
      return 0i64;
  }
  return &entchannelInfo[v2];
}

/*
==============
SND_FindRowFocusCone
==============
*/
FocusCone *SND_FindRowFocusCone(unsigned int id)
{
  FocusCone *v3; 
  unsigned int i; 
  SndBankInfo *v5; 
  const SndBank *bank; 
  unsigned int focusConeCount; 
  int v8; 
  FocusCone *focusCones; 

  if ( !id )
    return 0i64;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v3 )
      break;
    v5 = g_sb.bankStack[799 - i];
    bank = v5->bank;
    if ( v5->bank )
    {
      if ( v5->bankActive )
      {
        focusConeCount = bank->focusConeCount;
        v8 = 0;
        if ( focusConeCount )
        {
          focusCones = bank->focusCones;
          while ( focusCones[v8].id != id )
          {
            if ( ++v8 >= focusConeCount )
              goto LABEL_13;
          }
          v3 = &focusCones[v8];
        }
      }
    }
LABEL_13:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v3;
}

/*
==============
SND_FindRowFutz
==============
*/
SndFutz *SND_FindRowFutz(unsigned int id)
{
  SndFutz *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int futzCount; 
  int v7; 
  SndFutz *futzs; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        futzCount = bank->futzCount;
        v7 = 0;
        if ( futzCount )
        {
          futzs = bank->futzs;
          while ( futzs[v7].id != id )
          {
            if ( ++v7 >= futzCount )
              goto LABEL_11;
          }
          v2 = &futzs[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowHpfCurve
==============
*/
SndCurve *SND_FindRowHpfCurve(unsigned int id)
{
  SndCurve *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int hpfCurveCount; 
  int v7; 
  SndCurve *hpfCurves; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        hpfCurveCount = bank->hpfCurveCount;
        v7 = 0;
        if ( hpfCurveCount )
        {
          hpfCurves = bank->hpfCurves;
          while ( hpfCurves[v7].id != id )
          {
            if ( ++v7 >= hpfCurveCount )
              goto LABEL_11;
          }
          v2 = &hpfCurves[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowLpfCurve
==============
*/
SndCurve *SND_FindRowLpfCurve(unsigned int id)
{
  SndCurve *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int lpfCurveCount; 
  int v7; 
  SndCurve *lpfCurves; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        lpfCurveCount = bank->lpfCurveCount;
        v7 = 0;
        if ( lpfCurveCount )
        {
          lpfCurves = bank->lpfCurves;
          while ( lpfCurves[v7].id != id )
          {
            if ( ++v7 >= lpfCurveCount )
              goto LABEL_11;
          }
          v2 = &lpfCurves[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowOcclusionShape
==============
*/
OcclusionShape *SND_FindRowOcclusionShape(unsigned int id)
{
  OcclusionShape *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int occlusionShapeCount; 
  int v7; 
  OcclusionShape *occlusionShapes; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        occlusionShapeCount = bank->occlusionShapeCount;
        v7 = 0;
        if ( occlusionShapeCount )
        {
          occlusionShapes = bank->occlusionShapes;
          while ( occlusionShapes[v7].id != id )
          {
            if ( ++v7 >= occlusionShapeCount )
              goto LABEL_11;
          }
          v2 = &occlusionShapes[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowRadverb
==============
*/
SndSendEffectParams *SND_FindRowRadverb(unsigned int id)
{
  SndSendEffectParams *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int sendEffectCount; 
  int v7; 
  SndSendEffectParams *sendEffects; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        sendEffectCount = bank->sendEffectCount;
        v7 = 0;
        if ( sendEffectCount )
        {
          sendEffects = bank->sendEffects;
          while ( sendEffects[v7].id != id )
          {
            if ( ++v7 >= sendEffectCount )
              goto LABEL_11;
          }
          v2 = &sendEffects[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowRvbCurve
==============
*/
SndCurve *SND_FindRowRvbCurve(unsigned int id)
{
  SndCurve *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int rvbCurveCount; 
  int v7; 
  SndCurve *rvbCurves; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        rvbCurveCount = bank->rvbCurveCount;
        v7 = 0;
        if ( rvbCurveCount )
        {
          rvbCurves = bank->rvbCurves;
          while ( rvbCurves[v7].id != id )
          {
            if ( ++v7 >= rvbCurveCount )
              goto LABEL_11;
          }
          v2 = &rvbCurves[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowSpeakerMap
==============
*/
SpeakerMap *SND_FindRowSpeakerMap(unsigned int id)
{
  SpeakerMap *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int speakerMapCount; 
  int v7; 
  SpeakerMap *speakerMaps; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        speakerMapCount = bank->speakerMapCount;
        v7 = 0;
        if ( speakerMapCount )
        {
          speakerMaps = bank->speakerMaps;
          while ( speakerMaps[v7].id != id )
          {
            if ( ++v7 >= speakerMapCount )
              goto LABEL_11;
          }
          v2 = &speakerMaps[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindRowVfCurve
==============
*/
SndCurve *SND_FindRowVfCurve(unsigned int id)
{
  SndCurve *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int vfCurveCount; 
  int v7; 
  SndCurve *vfCurves; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        vfCurveCount = bank->vfCurveCount;
        v7 = 0;
        if ( vfCurveCount )
        {
          vfCurves = bank->vfCurves;
          while ( vfCurves[v7].id != id )
          {
            if ( ++v7 >= vfCurveCount )
              goto LABEL_11;
          }
          v2 = &vfCurves[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableADSR
==============
*/
ADSRSetting *SND_FindSoundTableADSR(unsigned int id)
{
  ADSRSetting *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int adsrCount; 
  __int64 v7; 
  ADSRSetting *adsrSettings; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        adsrCount = bank->soundTable.adsrCount;
        v7 = 0i64;
        if ( adsrCount )
        {
          adsrSettings = bank->soundTable.adsrSettings;
          while ( adsrSettings[v7].id != id )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= adsrCount )
              goto LABEL_11;
          }
          v2 = &adsrSettings[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableAmbientDef
==============
*/
AmbientDef *SND_FindSoundTableAmbientDef(unsigned int id)
{
  AmbientDef *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int ambientDefCount; 
  __int64 v7; 
  AmbientDef *ambientDefs; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        ambientDefCount = bank->soundTable.ambientDefCount;
        v7 = 0i64;
        if ( ambientDefCount )
        {
          ambientDefs = bank->soundTable.ambientDefs;
          while ( ambientDefs[v7].id != id )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= ambientDefCount )
              goto LABEL_11;
          }
          v2 = &ambientDefs[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableAmbientElement
==============
*/
AmbientElement *SND_FindSoundTableAmbientElement(unsigned int id)
{
  AmbientElement *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int ambientElementsCount; 
  __int64 v7; 
  AmbientElement *ambientElements; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        ambientElementsCount = bank->soundTable.ambientElementsCount;
        v7 = 0i64;
        if ( ambientElementsCount )
        {
          ambientElements = bank->soundTable.ambientElements;
          while ( ambientElements[v7].id != id )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= ambientElementsCount )
              goto LABEL_11;
          }
          v2 = &ambientElements[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableAmbientEvent
==============
*/
AmbientEvent *SND_FindSoundTableAmbientEvent(unsigned int id)
{
  AmbientEvent *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int ambientEventCount; 
  __int64 v7; 
  AmbientEvent *ambientEvents; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        ambientEventCount = bank->soundTable.ambientEventCount;
        v7 = 0i64;
        if ( ambientEventCount )
        {
          ambientEvents = bank->soundTable.ambientEvents;
          while ( ambientEvents[v7].id != id )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= ambientEventCount )
              goto LABEL_11;
          }
          v2 = &ambientEvents[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableFilter
==============
*/
FilterDef *SND_FindSoundTableFilter(unsigned int id)
{
  FilterDef *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int filterCount; 
  __int64 v7; 
  FilterDef *filters; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        filterCount = bank->soundTable.filterCount;
        v7 = 0i64;
        if ( filterCount )
        {
          filters = bank->soundTable.filters;
          while ( filters[v7].id != id )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= filterCount )
              goto LABEL_11;
          }
          v2 = &filters[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableMix
==============
*/
MixDef *SND_FindSoundTableMix(unsigned int id)
{
  MixDef *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int mixCount; 
  int v7; 
  MixDef *mixes; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        mixCount = bank->soundTable.mixCount;
        v7 = 0;
        if ( mixCount )
        {
          mixes = bank->soundTable.mixes;
          while ( mixes[v7].id != id )
          {
            if ( ++v7 >= mixCount )
              goto LABEL_11;
          }
          v2 = &mixes[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableNPCADSRZone
==============
*/
AdsrZoneEntry *SND_FindSoundTableNPCADSRZone(unsigned int id)
{
  AdsrZoneEntry *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int npcADSRZoneCount; 
  unsigned int v7; 
  AdsrZoneEntry *npcADSRZones; 
  __int64 v9; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        npcADSRZoneCount = bank->soundTable.npcADSRZoneCount;
        v7 = 0;
        if ( npcADSRZoneCount )
        {
          npcADSRZones = bank->soundTable.npcADSRZones;
          while ( 1 )
          {
            v9 = v7;
            if ( npcADSRZones[v9].id == id )
              break;
            if ( ++v7 >= npcADSRZoneCount )
              goto LABEL_11;
          }
          v2 = &npcADSRZones[v9];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableOcclusion
==============
*/
OccludeDef *SND_FindSoundTableOcclusion(unsigned int id)
{
  OccludeDef *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int occlusionFilterCount; 
  __int64 v7; 
  OccludeDef *occlusionFilters; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        occlusionFilterCount = bank->soundTable.occlusionFilterCount;
        v7 = 0i64;
        if ( occlusionFilterCount )
        {
          occlusionFilters = bank->soundTable.occlusionFilters;
          while ( occlusionFilters[v7].id != id )
          {
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= occlusionFilterCount )
              goto LABEL_11;
          }
          v2 = &occlusionFilters[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTablePLRADSRZone
==============
*/
AdsrZoneEntry *SND_FindSoundTablePLRADSRZone(unsigned int id)
{
  AdsrZoneEntry *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int playerADSRZoneCount; 
  unsigned int v7; 
  AdsrZoneEntry *playerADSRZones; 
  __int64 v9; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        playerADSRZoneCount = bank->soundTable.playerADSRZoneCount;
        v7 = 0;
        if ( playerADSRZoneCount )
        {
          playerADSRZones = bank->soundTable.playerADSRZones;
          while ( 1 )
          {
            v9 = v7;
            if ( playerADSRZones[v9].id == id )
              break;
            if ( ++v7 >= playerADSRZoneCount )
              goto LABEL_11;
          }
          v2 = &playerADSRZones[v9];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableReverb
==============
*/
ReverbDef *SND_FindSoundTableReverb(unsigned int id)
{
  ReverbDef *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int reverbCount; 
  int v7; 
  ReverbDef *reverbs; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        reverbCount = bank->soundTable.reverbCount;
        v7 = 0;
        if ( reverbCount )
        {
          reverbs = bank->soundTable.reverbs;
          while ( reverbs[v7].id != id )
          {
            if ( ++v7 >= reverbCount )
              goto LABEL_11;
          }
          v2 = &reverbs[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableTimescale
==============
*/
TimescaleEntry *SND_FindSoundTableTimescale(unsigned int id)
{
  TimescaleEntry *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int timeScaleSettingCount; 
  int v7; 
  TimescaleEntry *timeScaleSettings; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        timeScaleSettingCount = bank->soundTable.timeScaleSettingCount;
        v7 = 0;
        if ( timeScaleSettingCount )
        {
          timeScaleSettings = bank->soundTable.timeScaleSettings;
          while ( timeScaleSettings[v7].id != id )
          {
            if ( ++v7 >= timeScaleSettingCount )
              goto LABEL_11;
          }
          v2 = &timeScaleSettings[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindSoundTableZone
==============
*/
ZoneDef *SND_FindSoundTableZone(unsigned int id)
{
  ZoneDef *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int zoneCount; 
  int v7; 
  ZoneDef *zones; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        zoneCount = bank->soundTable.zoneCount;
        v7 = 0;
        if ( zoneCount )
        {
          zones = bank->soundTable.zones;
          while ( zones[v7].id != id )
          {
            if ( ++v7 >= zoneCount )
              goto LABEL_11;
          }
          v2 = &zones[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_FindWeapReflDefWithClass
==============
*/
WeaponReflectionDef *SND_FindWeapReflDefWithClass(unsigned int id, unsigned int weaponClass)
{
  WeaponReflectionDef *j; 
  unsigned int i; 
  SndBankInfo *v6; 
  const SndBank *bank; 
  unsigned int weapReflectionCount; 
  __int64 v9; 
  WeaponReflectionDef *weapReflections; 
  WeaponReflectionDef *v11; 

  j = NULL;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  for ( i = 0; i < 0x320; ++i )
  {
    if ( j )
      break;
    v6 = g_sb.bankStack[799 - i];
    bank = v6->bank;
    if ( v6->bank )
    {
      if ( v6->bankActive )
      {
        weapReflectionCount = bank->weapReflectionCount;
        v9 = 0i64;
        if ( weapReflectionCount )
        {
          weapReflections = bank->weapReflections;
          while ( weapReflections[v9].id != id )
          {
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= weapReflectionCount )
              goto LABEL_16;
          }
          for ( j = &weapReflections[v9]; (unsigned int)v9 < weapReflectionCount; v9 = (unsigned int)(v9 + 1) )
          {
            v11 = &weapReflections[v9];
            if ( v11->id != id )
              break;
            if ( v11->weaponClassId == weaponClass )
            {
              j = &weapReflections[v9];
              break;
            }
          }
        }
      }
    }
LABEL_16:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return j;
}

/*
==============
SND_FixLangOrderRange
==============
*/
void SND_FixLangOrderRange(unsigned int startIndex, unsigned int endIndex)
{
  unsigned int v2; 
  unsigned int v4; 
  SndBankInfo **v5; 
  SndBankInfo **v6; 
  SndBankInfo *v7; 
  const char *soundLanguage; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  unsigned int v15; 
  SndBankInfo **v16; 
  SndBankInfo *v17; 
  const SndBank *bank; 
  __int64 v19; 
  const char *zone; 
  const char *v21; 
  __int64 v22; 
  char v23; 
  __int64 v24; 
  char v25; 
  SndBankInfo **v26; 
  SndBankInfo *v28; 
  SndBankInfo **v29; 

  if ( startIndex < endIndex )
  {
    v2 = startIndex;
    v4 = startIndex;
    v5 = &g_sb.bankStack[startIndex];
    v26 = v5;
    v6 = v5;
    v29 = v5;
    do
    {
      v7 = *v6;
      v28 = *v6;
      if ( (*v6)->bank )
      {
        soundLanguage = v7->bank->soundLanguage;
        v9 = 0x7FFFFFFFi64;
        v10 = "all";
        if ( !soundLanguage )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v5 = v26;
          v4 = startIndex;
          v7 = v28;
        }
        v11 = soundLanguage - "all";
        do
        {
          v12 = v10[v11];
          v13 = v9;
          v14 = *v10++;
          --v9;
          if ( !v13 )
            break;
          if ( v12 != v14 )
            goto LABEL_30;
        }
        while ( v12 );
        v15 = v4;
        v16 = v5;
        while ( 1 )
        {
          v17 = *v16;
          bank = (*v16)->bank;
          if ( bank && v15 != v2 )
          {
            v19 = 0x7FFFFFFFi64;
            zone = bank->zone;
            v21 = v7->bank->zone;
            if ( !zone && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
              __debugbreak();
            v22 = zone - v21;
            do
            {
              v23 = v21[v22];
              v24 = v19;
              v25 = *v21++;
              --v19;
              if ( !v24 )
                break;
              if ( v23 != v25 )
                goto LABEL_26;
            }
            while ( v23 );
            if ( v2 < v15 )
            {
              v6 = v29;
              *v29 = v17;
              g_sb.bankStack[v15] = v28;
              goto LABEL_30;
            }
          }
LABEL_26:
          ++v15;
          ++v16;
          if ( v15 >= endIndex )
            break;
          v7 = v28;
        }
        v6 = v29;
      }
LABEL_30:
      v4 = startIndex;
      v5 = v26;
      ++v6;
      ++v2;
      v29 = v6;
    }
    while ( v2 < endIndex );
  }
}

/*
==============
SND_GetAllMusicStates
==============
*/
__int64 SND_GetAllMusicStates(unsigned int *states, int maxStates)
{
  __int64 v3; 
  unsigned int v4; 
  int v5; 
  __int64 v6; 
  SndBankInfo *v7; 
  const SndBank *bank; 
  __int64 v9; 
  SndMusicSet *musicSets; 
  int v11; 

  v3 = maxStates;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v4 = 0;
  v5 = 0;
  v6 = 0i64;
  while ( 1 )
  {
    v7 = g_sb.bankStack[799 - v5];
    bank = v7->bank;
    if ( v7->bank )
    {
      if ( v7->bankActive )
      {
        v9 = 0i64;
        if ( bank->musicSetCount )
          break;
      }
    }
LABEL_9:
    if ( (unsigned int)++v5 >= 0x320 )
      goto LABEL_10;
  }
  while ( 1 )
  {
    musicSets = bank->musicSets;
    v11 = 0;
    if ( musicSets[v9].stateCount )
      break;
LABEL_8:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= bank->musicSetCount )
      goto LABEL_9;
  }
  while ( 1 )
  {
    ++v4;
    states[v6++] = musicSets[v9].states[v11].id;
    if ( v6 == v3 )
      break;
    musicSets = bank->musicSets;
    if ( ++v11 >= musicSets[v9].stateCount )
      goto LABEL_8;
  }
LABEL_10:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v4;
}

/*
==============
SND_GetDopplerPresetById
==============
*/
const DopplerPreset *SND_GetDopplerPresetById(const unsigned int id)
{
  const DopplerPreset *result; 

  result = (const DopplerPreset *)SND_FindRowDopplerPreset(id);
  if ( !result )
    return (const DopplerPreset *)SND_FindRowDopplerPreset(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetDuckById
==============
*/
SndDuck *SND_GetDuckById(unsigned int id)
{
  int v2; 
  SndBankInfo *v3; 
  const SndBank *bank; 
  unsigned int duckCount; 
  unsigned int v6; 
  __int64 v7; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = 0;
  while ( 1 )
  {
    v3 = g_sb.bankStack[799 - v2];
    bank = v3->bank;
    if ( v3->bank )
    {
      if ( v3->bankActive )
      {
        duckCount = bank->duckCount;
        v6 = 0;
        if ( duckCount )
          break;
      }
    }
LABEL_7:
    if ( (unsigned int)++v2 >= 0x320 )
    {
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      return 0i64;
    }
  }
  while ( 1 )
  {
    v7 = v6;
    if ( bank->ducks[v7].id == id )
      break;
    if ( ++v6 >= duckCount )
      goto LABEL_7;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return &bank->ducks[v7];
}

/*
==============
SND_GetDuckByName
==============
*/
const SndDuck *SND_GetDuckByName(const char *name)
{
  const char *v1; 
  char v2; 
  unsigned int v3; 
  char v4; 

  v1 = name;
  if ( !name )
    return SND_GetDuckById(0);
  v2 = *name;
  if ( !*name )
    return SND_GetDuckById(0);
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
  return SND_GetDuckById(v3);
}

/*
==============
SND_GetFocusConeById
==============
*/
FocusCone *SND_GetFocusConeById(const unsigned int id)
{
  FocusCone *v3; 
  unsigned int i; 
  SndBankInfo *v5; 
  const SndBank *bank; 
  unsigned int focusConeCount; 
  int v8; 
  FocusCone *focusCones; 

  if ( !id )
    return 0i64;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v3 )
      break;
    v5 = g_sb.bankStack[799 - i];
    bank = v5->bank;
    if ( v5->bank )
    {
      if ( v5->bankActive )
      {
        focusConeCount = bank->focusConeCount;
        v8 = 0;
        if ( focusConeCount )
        {
          focusCones = bank->focusCones;
          while ( focusCones[v8].id != id )
          {
            if ( ++v8 >= focusConeCount )
              goto LABEL_13;
          }
          v3 = &focusCones[v8];
        }
      }
    }
LABEL_13:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v3;
}

/*
==============
SND_GetFutz
==============
*/
const SndFutz *SND_GetFutz(unsigned int id)
{
  unsigned int defaultHash; 
  const SndFutz *result; 

  defaultHash = id;
  for ( result = (const SndFutz *)SND_FindRowFutz(id); !result; result = (const SndFutz *)SND_FindRowFutz(g_snd.defaultHash) )
  {
    if ( g_snd.defaultHash == defaultHash )
      break;
    defaultHash = g_snd.defaultHash;
  }
  return result;
}

/*
==============
SND_GetFutzById
==============
*/
const SndFutz *SND_GetFutzById(const unsigned int id)
{
  const SndFutz *result; 

  result = (const SndFutz *)SND_FindRowFutz(id);
  if ( !result )
    return (const SndFutz *)SND_FindRowFutz(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetHpfCurveById
==============
*/
const SndCurve *SND_GetHpfCurveById(const unsigned int id)
{
  const SndCurve *result; 

  result = (const SndCurve *)SND_FindRowHpfCurve(id);
  if ( !result )
    return (const SndCurve *)SND_FindRowHpfCurve(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetLpfCurveById
==============
*/
const SndCurve *SND_GetLpfCurveById(const unsigned int id)
{
  const SndCurve *result; 

  result = (const SndCurve *)SND_FindRowLpfCurve(id);
  if ( !result )
    return (const SndCurve *)SND_FindRowLpfCurve(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetMasterByConfig
==============
*/
const SndMaster *SND_GetMasterByConfig()
{
  const dvar_t *v0; 
  int integer; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  __int64 v10; 
  int v11; 
  char outName[64]; 

  v0 = DVARINT_profileMenuOption_presetMix;
  if ( !DVARINT_profileMenuOption_presetMix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_presetMix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  v2 = 0i64;
  if ( integer < 0 || (unsigned int)integer > 0xA )
  {
    v11 = 10;
    LODWORD(v10) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2321, ASSERT_TYPE_ASSERT, "( 0 ) <= ( index ) && ( index ) <= ( ( sizeof( *array_counter( g_masterPresetIds ) ) + 0 ) )", "index not in [0, ARRAY_COUNT( g_masterPresetIds )]\n\t%i not in [%i, %i]", v10, 0i64, v11) )
      __debugbreak();
  }
  R_Cinematic_GetNextFilename(outName, 0x40ui64);
  v3 = 0x7FFFFFFFi64;
  do
  {
    v4 = (unsigned __int8)outName[v2];
    v5 = v3;
    v6 = (unsigned __int8)aStartup[v2++];
    --v3;
    if ( !v5 )
      break;
    if ( v4 != v6 )
    {
      v7 = v4 + 32;
      if ( (unsigned int)(v4 - 65) > 0x19 )
        v7 = v4;
      v4 = v7;
      v8 = v6 + 32;
      if ( (unsigned int)(v6 - 65) > 0x19 )
        v8 = v6;
      if ( v4 != v8 )
        return SND_GetMaster(g_masterPresetIds[integer]);
    }
  }
  while ( v4 );
  integer = 1;
  return SND_GetMaster(g_masterPresetIds[integer]);
}

/*
==============
SND_GetMasterCurrent
==============
*/
const SndMaster *SND_GetMasterCurrent()
{
  const dvar_t *v0; 
  const char *string; 
  unsigned int v2; 
  const dvar_t *v3; 
  int integer; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v13; 
  int v14; 
  char outName[64]; 

  v0 = DCONST_DVARSTR_snd_master_override;
  if ( !DCONST_DVARSTR_snd_master_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_master_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  string = v0->current.string;
  if ( string && *string )
  {
    v2 = SND_HashName(string);
  }
  else
  {
    v3 = DVARINT_profileMenuOption_presetMix;
    if ( !DVARINT_profileMenuOption_presetMix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_presetMix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    integer = v3->current.integer;
    v5 = 0i64;
    if ( integer < 0 || (unsigned int)integer > 0xA )
    {
      v14 = 10;
      LODWORD(v13) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2321, ASSERT_TYPE_ASSERT, "( 0 ) <= ( index ) && ( index ) <= ( ( sizeof( *array_counter( g_masterPresetIds ) ) + 0 ) )", "index not in [0, ARRAY_COUNT( g_masterPresetIds )]\n\t%i not in [%i, %i]", v13, 0i64, v14) )
        __debugbreak();
    }
    R_Cinematic_GetNextFilename(outName, 0x40ui64);
    v6 = 0x7FFFFFFFi64;
    do
    {
      v7 = (unsigned __int8)outName[v5];
      v8 = v6;
      v9 = (unsigned __int8)aStartup[v5++];
      --v6;
      if ( !v8 )
        break;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          goto LABEL_24;
      }
    }
    while ( v7 );
    integer = 1;
LABEL_24:
    v2 = g_masterPresetIds[integer];
  }
  return SND_GetMaster(v2);
}

/*
==============
SND_GetMusicState
==============
*/
SndMusicState *SND_GetMusicState(unsigned int id)
{
  int v3; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int musicSetCount; 
  __int64 v7; 
  SndMusicSet *musicSets; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int stateCount; 
  __int64 v12; 

  if ( !id )
    return 0i64;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = 0;
  while ( 1 )
  {
    v4 = g_sb.bankStack[799 - v3];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        musicSetCount = bank->musicSetCount;
        v7 = 0i64;
        if ( musicSetCount )
          break;
      }
    }
LABEL_12:
    if ( (unsigned int)++v3 >= 0x320 )
    {
      Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
      return 0i64;
    }
  }
  musicSets = bank->musicSets;
  while ( 1 )
  {
    v9 = (unsigned int)v7;
    v10 = 0;
    stateCount = musicSets[v7].stateCount;
    if ( stateCount )
      break;
LABEL_11:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= musicSetCount )
      goto LABEL_12;
  }
  while ( 1 )
  {
    v12 = v10;
    if ( musicSets[v7].states[v12].id == id )
      break;
    if ( ++v10 >= stateCount )
      goto LABEL_11;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return &bank->musicSets[v9].states[v12];
}

/*
==============
SND_GetOcclusionShapeById
==============
*/
const OcclusionShape *SND_GetOcclusionShapeById(const unsigned int id)
{
  const OcclusionShape *result; 

  result = (const OcclusionShape *)SND_FindRowOcclusionShape(id);
  if ( !result )
    return (const OcclusionShape *)SND_FindRowOcclusionShape(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetRadverb
==============
*/
SndSendEffectParams *SND_GetRadverb(unsigned int id)
{
  SndSendEffectParams *v2; 
  unsigned int i; 
  SndBankInfo *v4; 
  const SndBank *bank; 
  unsigned int sendEffectCount; 
  int v7; 
  SndSendEffectParams *sendEffects; 

  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v2 = NULL;
  for ( i = 0; i < 0x320; ++i )
  {
    if ( v2 )
      break;
    v4 = g_sb.bankStack[799 - i];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive )
      {
        sendEffectCount = bank->sendEffectCount;
        v7 = 0;
        if ( sendEffectCount )
        {
          sendEffects = bank->sendEffects;
          while ( sendEffects[v7].id != id )
          {
            if ( ++v7 >= sendEffectCount )
              goto LABEL_11;
          }
          v2 = &sendEffects[v7];
        }
      }
    }
LABEL_11:
    ;
  }
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return v2;
}

/*
==============
SND_GetRvbCurveById
==============
*/
const SndCurve *SND_GetRvbCurveById(const unsigned int id)
{
  const SndCurve *result; 

  result = (const SndCurve *)SND_FindRowRvbCurve(id);
  if ( !result )
    return (const SndCurve *)SND_FindRowRvbCurve(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetSoundTableById
==============
*/
SoundTable *SND_GetSoundTableById(const unsigned int id)
{
  SoundTable *p_soundTable; 
  unsigned int v2; 
  int v3; 
  SndBankInfo *v4; 
  const SndBank *bank; 

  p_soundTable = NULL;
  v2 = id;
  if ( id == -1676108907 )
    v2 = 2139571485;
  Sys_EnterCriticalSection(CRITSECT_SOUND_BANK);
  v3 = 0;
  while ( 1 )
  {
    v4 = g_sb.bankStack[799 - v3];
    bank = v4->bank;
    if ( v4->bank )
    {
      if ( v4->bankActive && bank->soundTable.id == v2 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x320 )
      goto LABEL_10;
  }
  p_soundTable = &bank->soundTable;
LABEL_10:
  Sys_LeaveCriticalSection(CRITSECT_SOUND_BANK);
  return p_soundTable;
}

/*
==============
SND_GetSpeakerMapById
==============
*/
const SpeakerMap *SND_GetSpeakerMapById(const unsigned int id)
{
  const SpeakerMap *result; 

  result = (const SpeakerMap *)SND_FindRowSpeakerMap(id);
  if ( !result )
    return (const SpeakerMap *)SND_FindRowSpeakerMap(g_snd.defaultHash);
  return result;
}

/*
==============
SND_GetTotalBankStreamBytesUsed
==============
*/
__int64 SND_GetTotalBankStreamBytesUsed()
{
  return (unsigned int)(g_sb.bankStreamBytesUsed[1] + g_sb.bankStreamBytesUsed[2] + g_sb.bankStreamBytesUsed[3] + g_sb.bankStreamBytesUsed[0]);
}

/*
==============
SND_GetVfCurveById
==============
*/
const SndCurve *SND_GetVfCurveById(const unsigned int id)
{
  const SndCurve *result; 

  result = (const SndCurve *)SND_FindRowVfCurve(id);
  if ( !result )
    return (const SndCurve *)SND_FindRowVfCurve(g_snd.defaultHash);
  return result;
}

/*
==============
SND_IsAliasNameLooping
==============
*/
bool SND_IsAliasNameLooping(const char *name)
{
  SndAliasList *Alias; 

  Alias = SND_FindAlias(name);
  if ( Alias )
    LOBYTE(Alias) = Alias->head->flags & 1;
  return (char)Alias;
}

/*
==============
SND_Missing
==============
*/
void SND_Missing(const char *name)
{
  if ( SND_Active() )
    Com_PrintError(9, "Missing sound alias: %s\n", name);
}

/*
==============
SND_PrintBankAliasStats
==============
*/
void SND_PrintBankAliasStats()
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  int v3; 
  SndBankInfo **bankStack; 
  __int64 v5; 
  SndBankInfo *v6; 
  const SndBank *bank; 
  int v8; 
  int v9; 
  unsigned int aliasCount; 
  __int64 v11; 
  __int64 p_head; 
  int v13; 
  __int64 v14; 
  unsigned int *p_refCount; 
  int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int *v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  Com_Printf(9, "\nSound bank alias list stats:\n\n");
  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  Com_Printf(9, "%32s %10s %10s %10s %16s\n", "bank", "lang", "aliascount", "precached", "precached-looped");
  bankStack = g_sb.bankStack;
  v5 = 800i64;
  do
  {
    v6 = *bankStack;
    if ( (*bankStack)->bankActive )
    {
      bank = v6->bank;
      v8 = 0;
      v9 = 0;
      aliasCount = v6->bank->aliasCount;
      if ( aliasCount )
      {
        v11 = aliasCount;
        p_head = (__int64)&bank->alias->head;
        do
        {
          v13 = *(_DWORD *)(*(_QWORD *)p_head + 112i64);
          if ( (v13 & 0x80000) != 0 )
          {
            if ( (v13 & 1) != 0 )
              ++v9;
            else
              ++v8;
          }
          p_head += 32i64;
          --v11;
        }
        while ( v11 );
      }
      LODWORD(v26) = v9;
      LODWORD(v25) = v8;
      LODWORD(v22) = v6->bank->aliasCount;
      Com_Printf(9, "%32s %10s %10d %10d %16d\n", bank->zone, bank->soundLanguage, v22, v25, v26);
      v2 += v8;
      v1 += (*bankStack)->bank->aliasCount;
      v3 += v9;
    }
    ++bankStack;
    --v5;
  }
  while ( v5 );
  LODWORD(v26) = 511;
  LODWORD(v25) = v3;
  LODWORD(v22) = 32256;
  Com_Printf(9, "\nTotal loaded aliases: %d precached: %d/%d precached-looped: %d/%d\n", v1, v2, v22, v25, v26);
  LODWORD(v14) = 0;
  p_refCount = &g_sb.precacheLookup[511].refCount;
  v16 = 0;
  do
  {
    v17 = v14 + 1;
    if ( !*((_QWORD *)p_refCount - 1) )
      v17 = v14;
    v14 = v17;
    if ( *p_refCount > 1 )
      v16 = v16 + *p_refCount - 1;
    p_refCount += 4;
  }
  while ( (__int64)p_refCount < (__int64)&g_sb.streamHeaderPool[0].entrySize );
  v18 = 0;
  v19 = &g_sb.precacheLookup[0].refCount;
  v20 = 511i64;
  do
  {
    v21 = v0 + 1;
    if ( !*((_QWORD *)v19 - 1) )
      v21 = v0;
    v0 = v21;
    if ( *v19 > 1 )
      v18 = v18 + *v19 - 1;
    v19 += 4;
    --v20;
  }
  while ( v20 );
  LODWORD(v23) = v16;
  Com_Printf(9, "\nTotal slots used: %d/%d num reused: %d \n\n", v14, 32256i64, v23);
  LODWORD(v24) = v18;
  Com_Printf(9, "\nTotal loop slots used: %d/%d num reused: %d \n\n", v0, 511i64, v24);
}

/*
==============
SND_SV_LookupSoundLength
==============
*/
__int64 SND_SV_LookupSoundLength(const char *name, const bool useApproximation, const bool findLongest)
{
  unsigned int v7; 
  SndAliasList *v8; 
  SndAliasList *v9; 
  int v10; 
  unsigned int v11; 
  __int64 i; 
  SndAlias *v13; 
  int SoundFileLengthMS; 
  bool v15; 
  SndBank *outBankInfo; 
  SndStartAliasInfo info; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2952, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( g_sb.bankMagic != 304297029 )
  {
    Com_PrintError(9, "SND_SV_LookupSoundLength: alias \"%s\" SND_BankActive failed.\n", name);
    return 0i64;
  }
  v7 = SND_HashName(name);
  if ( v7 && (v8 = SND_BankAndAliasLookup(v7, 0, (const SndBank **)&outBankInfo), (v9 = v8) != NULL) )
  {
    v10 = 0;
    v11 = 0;
    if ( v8->count > 0 )
    {
      for ( i = 0i64; ; ++i )
      {
        v13 = &v9->head[i];
        if ( !v13->assetId )
          goto LABEL_30;
        if ( !v13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2977, ASSERT_TYPE_ASSERT, "(soundAlias)", (const char *)&queryFormat, "soundAlias") )
            __debugbreak();
          SoundFileLengthMS = 0;
          goto LABEL_27;
        }
        if ( useApproximation )
          break;
        info.alias = &v9->head[i];
        if ( !SND_FindAssetsForVoice(&info) )
        {
          Com_PrintError(9, "SND_SV_LookupSoundLength: alias \"%s\" sound data was not yet loaded when SND_SV_LookupSoundLength was called.\n", v13->aliasName);
          SoundFileLengthMS = 0;
          goto LABEL_27;
        }
        if ( !info.assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2928, ASSERT_TYPE_ASSERT, "(info.assetEntry)", (const char *)&queryFormat, "info.assetEntry") )
          __debugbreak();
        SoundFileLengthMS = SND_GetSoundFileLengthMS(info.assetEntry);
        if ( SoundFileLengthMS <= 0 )
        {
          v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2930, ASSERT_TYPE_ASSERT, "(assetDurationInMsec > 0)", (const char *)&queryFormat, "assetDurationInMsec > 0");
LABEL_25:
          if ( v15 )
            __debugbreak();
        }
LABEL_27:
        if ( SoundFileLengthMS > (int)v11 )
          v11 = SoundFileLengthMS;
        if ( !findLongest )
          return v11;
LABEL_30:
        if ( ++v10 >= v9->count )
          return v11;
      }
      SoundFileLengthMS = 100 * v13->maxDuration_dsec;
      if ( SoundFileLengthMS >= 0 )
        goto LABEL_27;
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 2943, ASSERT_TYPE_ASSERT, "(maxDurationInMsec >= 0)", (const char *)&queryFormat, "maxDurationInMsec >= 0");
      goto LABEL_25;
    }
    return v11;
  }
  else
  {
    Com_PrintError(9, "SND_SV_LookupSoundLength: alias \"%s\" not found.\n", name);
    return 0i64;
  }
}

/*
==============
SND_ShouldPrecacheBank
==============
*/
char SND_ShouldPrecacheBank(const SndBank *bank)
{
  const char *zone; 
  const char *v2; 
  __int64 v3; 
  signed __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 

  zone = bank->zone;
  v2 = "mp_frontend";
  v3 = 11i64;
  if ( !zone && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v4 = zone - "mp_frontend";
  while ( 1 )
  {
    v5 = (unsigned __int8)v2[v4];
    v6 = v3;
    v7 = *(unsigned __int8 *)v2++;
    --v3;
    if ( !v6 )
      return 0;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v9 = v7;
      if ( v5 != v9 )
        break;
    }
    if ( !v5 )
      return 0;
  }
  return 1;
}

/*
==============
SND_TryFindAlias
==============
*/
SndAliasList *SND_TryFindAlias(const char *name)
{
  unsigned int v3; 
  SndAliasList *v4; 
  const char **p_aliasName; 
  SndBank *outBankInfo; 

  if ( g_sb.bankMagic != 304297029 )
    return 0i64;
  v3 = SND_HashName(name);
  if ( !v3 )
    return 0i64;
  v4 = SND_BankAndAliasLookup(v3, 0, (const SndBank **)&outBankInfo);
  p_aliasName = &v4->aliasName;
  if ( !v4 || !v4->count )
    return 0i64;
  if ( I_strnicmp(name, v4->aliasName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1032, ASSERT_TYPE_ASSERT, "(!I_stricmp(name,list->aliasName))", "%s\n\tSound alias hash collision.  Consider renaming %s or %s", "!I_stricmp(name,list->aliasName)", name, *p_aliasName) )
  {
    __debugbreak();
    return (SndAliasList *)p_aliasName;
  }
  return (SndAliasList *)p_aliasName;
}

/*
==============
SND_TryFindAliasForCaching
==============
*/
char SND_TryFindAliasForCaching(const char *name, SndAliasList **outAlias, bool *outIsAlwaysLoaded)
{
  unsigned int v6; 
  SndAliasList *v7; 
  SndAliasList *v8; 
  SndBank *v9; 
  SndBank *outBankInfo; 

  if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1043, ASSERT_TYPE_ASSERT, "(outAlias)", (const char *)&queryFormat, "outAlias") )
    __debugbreak();
  if ( !outIsAlwaysLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1044, ASSERT_TYPE_ASSERT, "(outIsAlwaysLoaded)", (const char *)&queryFormat, "outIsAlwaysLoaded") )
    __debugbreak();
  if ( g_sb.bankMagic != 304297029 )
    return 0;
  v6 = SND_HashName(name);
  if ( !v6 )
    return 0;
  outBankInfo = NULL;
  v7 = SND_BankAndAliasLookup(v6, 1, (const SndBank **)&outBankInfo);
  v8 = v7;
  if ( !v7 || !v7->count )
    return 0;
  if ( !v7->head && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1066, ASSERT_TYPE_ASSERT, "(list->head != nullptr)", (const char *)&queryFormat, "list->head != nullptr") )
    __debugbreak();
  v9 = outBankInfo;
  if ( !outBankInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1067, ASSERT_TYPE_ASSERT, "(bank != nullptr)", (const char *)&queryFormat, "bank != nullptr") )
    __debugbreak();
  if ( I_strnicmp(name, v8->aliasName, 0x7FFFFFFFui64) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_bank.cpp", 1068, ASSERT_TYPE_ASSERT, "(!I_stricmp( name, list->aliasName ))", "%s\n\tSound alias hash collision.  Consider renaming %s or %s", "!I_stricmp( name, list->aliasName )", name, v8->aliasName) )
      __debugbreak();
  }
  *outAlias = v8;
  *outIsAlwaysLoaded = v9->streamInfo.alwaysLoaded;
  return 1;
}

/*
==============
SoundBankResident_Register
==============
*/
SndBankResident *SoundBankResident_Register(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_SOUND_BANK, name, 1).soundBankResident;
}

/*
==============
SoundBankResident_Register_FastFile
==============
*/
SndBankResident *SoundBankResident_Register_FastFile(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_SOUND_BANK, name, 1).soundBankResident;
}

/*
==============
SoundBankTransient_Register
==============
*/
SndBankTransient *SoundBankTransient_Register(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_SOUND_BANK_TRANSIENT, name, 1).soundBankTransient;
}

/*
==============
SoundBankTransient_Register_FastFile
==============
*/
SndBankTransient *SoundBankTransient_Register_FastFile(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_SOUND_BANK_TRANSIENT, name, 1).soundBankTransient;
}

