/*
==============
G_SoundEntity_ClearSystem
==============
*/

void G_SoundEntity_ClearSystem(void)
{
  ?G_SoundEntity_ClearSystem@@YAXXZ();
}

/*
==============
GScr_SoundEntity_SpawnSound
==============
*/

void __fastcall GScr_SoundEntity_SpawnSound(scrContext_t *scrContext)
{
  ?GScr_SoundEntity_SpawnSound@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_SoundEntity_ScaleSoundVolume
==============
*/

void __fastcall GScr_SoundEntity_ScaleSoundVolume(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_SoundEntity_ScaleSoundVolume@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
GScr_SoundEntity_TriggerSoundStop
==============
*/

void __fastcall GScr_SoundEntity_TriggerSoundStop(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_SoundEntity_TriggerSoundStop@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
GScr_SoundEntity_FreeAll
==============
*/

void __fastcall GScr_SoundEntity_FreeAll(scrContext_t *scrContext)
{
  ?GScr_SoundEntity_FreeAll@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_SaveSoundEntities
==============
*/

void __fastcall G_SaveSoundEntities(MemoryFile *memFile)
{
  ?G_SaveSoundEntities@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GScr_SoundEntity_TriggerSoundStart
==============
*/

void __fastcall GScr_SoundEntity_TriggerSoundStart(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_SoundEntity_TriggerSoundStart@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
G_LoadSoundEntities
==============
*/

void __fastcall G_LoadSoundEntities(SaveGame *save)
{
  ?G_LoadSoundEntities@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
GScr_SoundEntity_ScaleSoundPitch
==============
*/

void __fastcall GScr_SoundEntity_ScaleSoundPitch(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_SoundEntity_ScaleSoundPitch@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
ScrCmd_SoundEntity_Delete
==============
*/

void __fastcall ScrCmd_SoundEntity_Delete(scrContext_t *scrContext, const scr_entref_t entref)
{
  ?ScrCmd_SoundEntity_Delete@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
GScr_SoundEntity_FreeAll
==============
*/
void GScr_SoundEntity_FreeAll(scrContext_t *scrContext)
{
  ServerSoundEntity *v1; 
  signed int v2; 
  SoundEntFreeElem *v3; 
  int v5; 
  __int64 v6; 

  v1 = s_serverSoundEntities;
  v2 = 0;
  v3 = s_soundGapQueue;
  do
  {
    if ( v1->spawned )
    {
      if ( v2 < 0 )
      {
        LODWORD(v6) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 35, ASSERT_TYPE_ASSERT, "( num ) >= ( 0 )", "num >= 0\n\t%i, %i", v6, 0i64) )
          __debugbreak();
      }
      if ( v3 == s_soundGapFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 39, ASSERT_TYPE_ASSERT, "( thisItem != s_soundGapFirst )", (const char *)&queryFormat, "thisItem != s_soundGapFirst") )
        __debugbreak();
      if ( v3 == s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 40, ASSERT_TYPE_ASSERT, "( thisItem != s_soundGapLast )", (const char *)&queryFormat, "thisItem != s_soundGapLast") )
        __debugbreak();
      if ( v3->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 41, ASSERT_TYPE_ASSERT, "( thisItem->next == 0 )", (const char *)&queryFormat, "thisItem->next == NULL") )
        __debugbreak();
      if ( s_soundGapLast )
        s_soundGapLast->next = v3;
      else
        s_soundGapFirst = v3;
      s_soundGapLast = v3;
      v3->next = NULL;
      Scr_FreeEntityNum(scrContext, v2, ENTITY_CLASS_SOUNDENTITY);
      v5 = s_soundEntityCount;
      v1->spawned = 0;
      if ( v5 <= 0 )
      {
        LODWORD(v6) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 163, ASSERT_TYPE_ASSERT, "( s_soundEntityCount ) > ( 0 )", "s_soundEntityCount > 0\n\t%i, %i", v6, 0i64) )
          __debugbreak();
        v5 = s_soundEntityCount;
      }
      s_soundEntityCount = v5 - 1;
    }
    ++v2;
    ++v3;
    ++v1;
  }
  while ( v2 < 128 );
}

/*
==============
GScr_SoundEntity_ScaleSoundPitch
==============
*/
void GScr_SoundEntity_ScaleSoundPitch(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  int NumParam; 
  int v8; 
  int Int; 
  gentity_s *v12; 
  int v15; 
  vec3_t origin; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  entnum = entref.entnum;
  entclass = entref.entclass;
  NumParam = Scr_GetNumParam(scrContext);
  v8 = NumParam;
  if ( NumParam < 1 || NumParam > 2 )
    Scr_Error(COM_ERR_5673, scrContext, "Usage: ScaleSoundPitch( <pitch>, [blendTimeMs] )");
  if ( entclass != ENTITY_CLASS_SOUNDENTITY )
    Scr_Error(COM_ERR_5674, scrContext, "ScaleSoundPitch is only valid on a SoundEntity");
  if ( entnum >= 0x80 )
    Scr_Error(COM_ERR_5675, scrContext, "Invalid SoundEntity entnum");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmovss  [rsp+68h+var_48], xmm0
    vmovaps xmm6, xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    Scr_ParamError(COM_ERR_5676, scrContext, 0, "ScaleSoundPitch - pitch cannot be NAN.");
  Int = 0;
  if ( v8 > 1 )
    Int = Scr_GetInt(scrContext, 1u);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+68h+origin], xmm0
    vmovss  dword ptr [rsp+68h+origin+4], xmm0
    vmovss  dword ptr [rsp+68h+origin+8], xmm0
  }
  v12 = G_Utils_SpawnEventEntity(&origin, 222);
  __asm { vmovaps xmm0, xmm6; pitch }
  v12->s.eventParm2 = entnum;
  v12->s.eventParm = BG_SoundEntity_PackScalePitchEventParam(*(float *)&_XMM0, Int);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
GScr_SoundEntity_ScaleSoundVolume
==============
*/
void GScr_SoundEntity_ScaleSoundVolume(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  int NumParam; 
  int v8; 
  int Int; 
  gentity_s *v12; 
  int v15; 
  vec3_t origin; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  entnum = entref.entnum;
  entclass = entref.entclass;
  NumParam = Scr_GetNumParam(scrContext);
  v8 = NumParam;
  if ( NumParam < 1 || NumParam > 2 )
    Scr_Error(COM_ERR_5669, scrContext, "Usage: ScaleSoundVolume( <volume>, [blendTimeMs] )");
  if ( entclass != ENTITY_CLASS_SOUNDENTITY )
    Scr_Error(COM_ERR_5670, scrContext, "ScaleSoundVolume is only valid on a SoundEntity");
  if ( entnum >= 0x80 )
    Scr_Error(COM_ERR_5671, scrContext, "Invalid SoundEntity entnum");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmovss  [rsp+68h+var_48], xmm0
    vmovaps xmm6, xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    Scr_ParamError(COM_ERR_5672, scrContext, 0, "ScaleSoundVolume - volume cannot be NAN.");
  Int = 0;
  if ( v8 > 1 )
    Int = Scr_GetInt(scrContext, 1u);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+68h+origin], xmm0
    vmovss  dword ptr [rsp+68h+origin+4], xmm0
    vmovss  dword ptr [rsp+68h+origin+8], xmm0
  }
  v12 = G_Utils_SpawnEventEntity(&origin, 221);
  __asm { vmovaps xmm0, xmm6; volume }
  v12->s.eventParm2 = entnum;
  v12->s.eventParm = BG_SoundEntity_PackScaleVolumeEventParam(*(float *)&_XMM0, Int);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
GScr_SoundEntity_SpawnSound
==============
*/
void GScr_SoundEntity_SpawnSound(scrContext_t *scrContext)
{
  int v2; 

  v2 = ReserveNewIndex();
  if ( v2 == -1 )
  {
    Scr_AddEntityNum(scrContext, -1, ENTITY_CLASS_SOUNDENTITY);
  }
  else
  {
    ++s_soundEntityCount;
    s_serverSoundEntities[v2].spawned = 1;
    Scr_AddEntityNum(scrContext, v2, ENTITY_CLASS_SOUNDENTITY);
  }
}

/*
==============
GScr_SoundEntity_TriggerSoundStart
==============
*/
void GScr_SoundEntity_TriggerSoundStart(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  const char *String; 
  unsigned __int16 v6; 
  const char *v7; 
  gentity_s *v8; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  entclass = entref.entclass;
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_5639, scrContext, "TriggerSoundStart requires 2 parameters");
  if ( entclass != ENTITY_CLASS_SOUNDENTITY )
    Scr_Error(COM_ERR_5298, scrContext, "TriggerSoundStart is only valid on a SoundEntity");
  if ( entnum >= 0x80 )
    Scr_Error(COM_ERR_5299, scrContext, "Invalid SoundEntity entnum");
  String = Scr_GetString(scrContext, 0);
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v6 = GConfigStrings::ms_gConfigStrings->GetSoundAliasIndex(GConfigStrings::ms_gConfigStrings, String);
  if ( (unsigned __int16)(v6 - 1) > 0x7FFFu )
  {
    v7 = j_va("'%s' does has not have a valid index (%i)", String, v6);
    Scr_ParamError(COM_ERR_5640, scrContext, 0, v7);
  }
  Scr_GetVector(scrContext, 1u, &vectorValue);
  v8 = G_Utils_SpawnEventEntity(&vectorValue, 219);
  v8->s.eventParm2 = entnum;
  v8->s.eventParm = v6;
}

/*
==============
GScr_SoundEntity_TriggerSoundStop
==============
*/
void GScr_SoundEntity_TriggerSoundStop(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v6; 
  vec3_t origin; 

  entnum = entref.entnum;
  if ( entref.entclass != ENTITY_CLASS_SOUNDENTITY )
    Scr_Error(COM_ERR_5641, scrContext, "TriggerSoundStop is only valid on a SoundEntity");
  if ( entnum >= 0x80 )
    Scr_Error(COM_ERR_5642, scrContext, "Invalid SoundEntity entnum");
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+48h+origin], xmm0
    vmovss  dword ptr [rsp+48h+origin+4], xmm0
    vmovss  dword ptr [rsp+48h+origin+8], xmm0
  }
  v6 = G_Utils_SpawnEventEntity(&origin, 220);
  v6->s.eventParm2 = entnum;
  v6->s.eventParm = 0;
}

/*
==============
G_LoadSoundEntities
==============
*/
void G_LoadSoundEntities(SaveGame *save)
{
  SoundEntFreeElem *v2; 
  int v3; 
  bool v4; 
  SoundEntFreeElem *v5; 
  SoundEntFreeElem *v6; 
  SoundEntFreeElem *v7; 
  __int64 v8; 
  __int64 v9; 
  int v10[14]; 
  char buffer; 
  char v12; 
  char v13; 
  char v14; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 499, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(&s_soundEntityCount, 4, save);
  v2 = NULL;
  v3 = 0;
  if ( s_soundEntityCount > 0 )
  {
    do
    {
      SaveMemory_LoadRead(&buffer, 1, save);
      if ( (unsigned int)buffer >= 0x80 )
      {
        LODWORD(v9) = 128;
        LODWORD(v8) = buffer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 507, ASSERT_TYPE_ASSERT, "(unsigned)( idx ) < (unsigned)( ( 128 ) )", "idx doesn't index SOUND_ENTITY_MAX\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v4 = ++v3 < s_soundEntityCount;
      s_serverSoundEntities[buffer].spawned = 1;
    }
    while ( v4 );
  }
  v5 = s_soundGapQueue;
  do
  {
    SaveMemory_LoadRead(&v12, 1, save);
    if ( v12 < 0 )
      v6 = NULL;
    else
      v6 = &s_soundGapQueue[v12];
    v5->next = v6;
    ++v5;
  }
  while ( (__int64)v5 < (__int64)&s_soundGapLast );
  SaveMemory_LoadRead(&v13, 1, save);
  if ( v13 < 0 )
    v7 = NULL;
  else
    v7 = &s_soundGapQueue[v13];
  s_soundGapFirst = v7;
  SaveMemory_LoadRead(&v14, 1, save);
  if ( v14 >= 0 )
    v2 = &s_soundGapQueue[v14];
  s_soundGapLast = v2;
  SaveMemory_LoadRead(&s_soundGaplessNextIndex, 4, save);
  SaveMemory_LoadRead(v10, 4, save);
  if ( v10[0] != -1 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14411D8F0, 587i64);
}

/*
==============
G_SaveSoundEntities
==============
*/
void G_SaveSoundEntities(MemoryFile *memFile)
{
  int v2; 
  int v3; 
  __int64 v4; 
  SoundEntFreeElem *v5; 
  int v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  char p; 
  int v12; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 457, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = 0;
  MemFile_WriteData(memFile, 4ui64, &s_soundEntityCount);
  v3 = 0;
  v4 = 0i64;
  do
  {
    if ( s_serverSoundEntities[v4].spawned )
    {
      ++v2;
      if ( (unsigned int)(v3 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)v3, "signed", v4) )
        __debugbreak();
      p = v3;
      if ( (unsigned int)(char)v3 >= 0x80 )
      {
        LODWORD(v10) = 128;
        LODWORD(v9) = (char)v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 477, ASSERT_TYPE_ASSERT, "(unsigned)( idxEncoded ) < (unsigned)( ( 128 ) )", "idxEncoded doesn't index SOUND_ENTITY_MAX\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      MemFile_WriteData(memFile, 1ui64, &p);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 128 );
  if ( v2 != s_soundEntityCount )
  {
    LODWORD(v10) = s_soundEntityCount;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 481, ASSERT_TYPE_ASSERT, "( countAsserter ) == ( s_soundEntityCount )", "countAsserter == s_soundEntityCount\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  v5 = s_soundGapQueue;
  do
  {
    if ( v5->next )
      v6 = SoundGapQueue_IndexForElem(v5->next);
    else
      v6 = -1;
    p = truncate_cast<signed char,int>(v6);
    MemFile_WriteData(memFile, 1ui64, &p);
    ++v5;
  }
  while ( (__int64)v5 < (__int64)&s_soundGapLast );
  if ( s_soundGapFirst )
    v7 = SoundGapQueue_IndexForElem(s_soundGapFirst);
  else
    v7 = -1;
  p = truncate_cast<signed char,int>(v7);
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( s_soundGapLast )
    v8 = SoundGapQueue_IndexForElem(s_soundGapLast);
  else
    v8 = -1;
  p = truncate_cast<signed char,int>(v8);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 4ui64, &s_soundGaplessNextIndex);
  v12 = -1;
  MemFile_WriteData(memFile, 4ui64, &v12);
}

/*
==============
G_SoundEntity_ClearSystem
==============
*/
void G_SoundEntity_ClearSystem(void)
{
  s_soundGapFirst = NULL;
  s_soundGapLast = NULL;
  s_soundGaplessNextIndex = 0;
  s_soundEntityCount = 0;
  memset_0(s_soundGapQueue, 0, sizeof(s_soundGapQueue));
  memset_0(s_serverSoundEntities, 0, sizeof(s_serverSoundEntities));
}

/*
==============
ScrCmd_SoundEntity_Delete
==============
*/
void ScrCmd_SoundEntity_Delete(scrContext_t *scrContext, const scr_entref_t entref)
{
  int entnum; 
  __int64 v4; 
  __int64 v5; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  if ( entref.entclass != ENTITY_CLASS_SOUNDENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 195, ASSERT_TYPE_ASSERT, "( entref.entclass ) == ( ENTITY_CLASS_SOUNDENTITY )", "entref.entclass == ENTITY_CLASS_SOUNDENTITY\n\t%i, %i", (unsigned __int8)entref.entclass, 9) )
    __debugbreak();
  if ( entclass == ENTITY_CLASS_SOUNDENTITY )
  {
    if ( (unsigned int)entnum >= 0x80 )
    {
      LODWORD(v5) = 128;
      LODWORD(v4) = entnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( soundEntityId ) < (unsigned)( ( sizeof( *array_counter( s_serverSoundEntities ) ) + 0 ) )", "soundEntityId doesn't index ARRAY_COUNT( s_serverSoundEntities )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( entnum >= 0 && (unsigned int)entnum < 0x80 && s_serverSoundEntities[entnum].spawned )
      ScrCmd_SoundEntity_Release(scrContext, entnum);
  }
}

/*
==============
ScrCmd_SoundEntity_Release
==============
*/
void ScrCmd_SoundEntity_Release(scrContext_t *scrContext, int soundEntityId)
{
  __int64 v2; 
  SoundEntFreeElem *v4; 
  int v5; 
  __int64 v6; 
  __int64 v8; 

  v2 = soundEntityId;
  if ( soundEntityId < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 35, ASSERT_TYPE_ASSERT, "( num ) >= ( 0 )", "num >= 0\n\t%i, %i", soundEntityId, 0i64) )
    __debugbreak();
  if ( (int)v2 >= 128 )
  {
    LODWORD(v8) = 128;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 36, ASSERT_TYPE_ASSERT, "( num ) < ( ( 128 ) )", "num < SOUND_ENTITY_MAX\n\t%i, %i", v6, v8) )
      __debugbreak();
  }
  v4 = &s_soundGapQueue[v2];
  if ( v4 == s_soundGapFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 39, ASSERT_TYPE_ASSERT, "( thisItem != s_soundGapFirst )", (const char *)&queryFormat, "thisItem != s_soundGapFirst") )
    __debugbreak();
  if ( v4 == s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 40, ASSERT_TYPE_ASSERT, "( thisItem != s_soundGapLast )", (const char *)&queryFormat, "thisItem != s_soundGapLast") )
    __debugbreak();
  if ( v4->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 41, ASSERT_TYPE_ASSERT, "( thisItem->next == 0 )", (const char *)&queryFormat, "thisItem->next == NULL") )
    __debugbreak();
  if ( s_soundGapLast )
    s_soundGapLast->next = v4;
  else
    s_soundGapFirst = &s_soundGapQueue[v2];
  s_soundGapLast = &s_soundGapQueue[v2];
  v4->next = NULL;
  Scr_FreeEntityNum(scrContext, v2, ENTITY_CLASS_SOUNDENTITY);
  v5 = s_soundEntityCount;
  s_serverSoundEntities[v2].spawned = 0;
  if ( v5 > 0 )
  {
    s_soundEntityCount = v5 - 1;
  }
  else
  {
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 163, ASSERT_TYPE_ASSERT, "( s_soundEntityCount ) > ( 0 )", "s_soundEntityCount > 0\n\t%i, %i", v6, 0i64) )
      __debugbreak();
    --s_soundEntityCount;
  }
}

/*
==============
SoundGapQueue_IndexForElem
==============
*/
__int64 SoundGapQueue_IndexForElem(SoundEntFreeElem *elem)
{
  signed __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  if ( elem < s_soundGapQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 76, ASSERT_TYPE_ASSERT, "( elem >= s_soundGapQueue )", (const char *)&queryFormat, "elem >= s_soundGapQueue") )
    __debugbreak();
  if ( elem >= (SoundEntFreeElem *)&s_soundGapLast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 77, ASSERT_TYPE_ASSERT, "( elem < ( s_soundGapQueue + ( sizeof( *array_counter( s_soundGapQueue ) ) + 0 ) ) )", (const char *)&queryFormat, "elem < ( s_soundGapQueue + ARRAY_COUNT( s_soundGapQueue ) )") )
    __debugbreak();
  v2 = elem - s_soundGapQueue;
  if ( (int)v2 < 0 )
  {
    LODWORD(v4) = elem - s_soundGapQueue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 80, ASSERT_TYPE_ASSERT, "( soundEntityId ) >= ( 0 )", "soundEntityId >= 0\n\t%i, %i", v4, 0i64) )
      __debugbreak();
  }
  if ( (int)v2 >= 128 )
  {
    LODWORD(v5) = 128;
    LODWORD(v4) = elem - s_soundGapQueue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 81, ASSERT_TYPE_ASSERT, "( soundEntityId ) < ( ( 128 ) )", "soundEntityId < SOUND_ENTITY_MAX\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  if ( elem != &s_soundGapQueue[(int)v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\soundents\\soundentity_server.cpp", 83, ASSERT_TYPE_ASSERT, "( elem == &s_soundGapQueue[soundEntityId] )", (const char *)&queryFormat, "elem == &s_soundGapQueue[soundEntityId]") )
    __debugbreak();
  return (unsigned int)v2;
}

