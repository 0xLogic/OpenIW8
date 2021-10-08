/*
==============
BG_UnloadSoundBankList
==============
*/

void __fastcall BG_UnloadSoundBankList(SoundBankListDef *soundBankList)
{
  ?BG_UnloadSoundBankList@@YAXPEAUSoundBankListDef@@@Z(soundBankList);
}

/*
==============
BG_LoadSoundBankList
==============
*/

void __fastcall BG_LoadSoundBankList(SoundBankListDef *soundBankList)
{
  ?BG_LoadSoundBankList@@YAXPEAUSoundBankListDef@@@Z(soundBankList);
}

/*
==============
BG_SoundBankList_GetSoundBankCount
==============
*/

int __fastcall BG_SoundBankList_GetSoundBankCount()
{
  return ?BG_SoundBankList_GetSoundBankCount@@YAHXZ();
}

/*
==============
BG_SoundBankList_GetSoundBankName
==============
*/

unsigned int __fastcall BG_SoundBankList_GetSoundBankName(int soundBankListIndex)
{
  return ?BG_SoundBankList_GetSoundBankName@@YAIH@Z(soundBankListIndex);
}

/*
==============
GScr_SetTransientSoundbank
==============
*/

void __fastcall GScr_SetTransientSoundbank(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_SetTransientSoundbank@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
BG_LoadSoundBankList
==============
*/
void BG_LoadSoundBankList(SoundBankListDef *soundBankList)
{
  if ( !soundBankList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist.cpp", 9, ASSERT_TYPE_ASSERT, "(soundBankList)", (const char *)&queryFormat, "soundBankList") )
    __debugbreak();
  if ( s_soundBankList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist.cpp", 10, ASSERT_TYPE_ASSERT, "(!s_soundBankList)", (const char *)&queryFormat, "!s_soundBankList") )
    __debugbreak();
  s_soundBankList = soundBankList;
}

/*
==============
BG_SoundBankList_GetSoundBankCount
==============
*/
SoundBankListDef *BG_SoundBankList_GetSoundBankCount()
{
  SoundBankListDef *result; 

  result = s_soundBankList;
  if ( s_soundBankList )
    return (SoundBankListDef *)s_soundBankList->soundBankCount;
  return result;
}

/*
==============
BG_SoundBankList_GetSoundBankName
==============
*/
SoundBankListDef *BG_SoundBankList_GetSoundBankName(int soundBankListIndex)
{
  SoundBankListDef *result; 
  __int64 v2; 

  result = s_soundBankList;
  v2 = soundBankListIndex;
  if ( s_soundBankList )
  {
    if ( soundBankListIndex >= (unsigned int)s_soundBankList->soundBankCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( soundBankListIndex ) < (unsigned)( s_soundBankList->soundBankCount )", "soundBankListIndex doesn't index s_soundBankList->soundBankCount\n\t%i not in [0, %i)", soundBankListIndex, s_soundBankList->soundBankCount) )
        __debugbreak();
      result = s_soundBankList;
    }
    return (SoundBankListDef *)result->soundBankNames[v2];
  }
  return result;
}

/*
==============
BG_UnloadSoundBankList
==============
*/
void BG_UnloadSoundBankList(SoundBankListDef *soundBankList)
{
  if ( !soundBankList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist.cpp", 17, ASSERT_TYPE_ASSERT, "(soundBankList)", (const char *)&queryFormat, "soundBankList") )
    __debugbreak();
  if ( s_soundBankList != soundBankList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist.cpp", 18, ASSERT_TYPE_ASSERT, "(s_soundBankList == soundBankList)", (const char *)&queryFormat, "s_soundBankList == soundBankList") )
    __debugbreak();
  s_soundBankList = NULL;
}

/*
==============
GScr_SetTransientSoundbank
==============
*/
void GScr_SetTransientSoundbank(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gentity_s *v4; 
  const char *String; 
  int v6; 
  const char *v7; 
  const char *v8; 
  char v9; 
  int v10; 
  int v11; 
  char v12; 
  int Int; 
  SoundBankListDef *v14; 
  __int64 v15; 
  unsigned int v16; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  unsigned __int64 v21; 
  int v22; 

  Entity = GetEntity(entref);
  v4 = Entity;
  if ( Entity->s.eType == ET_SOUND && Entity->s.lerp.u.anonymous.data[0] == 3 )
  {
    String = Scr_GetString(scrContext, 0);
    v6 = 0;
    v7 = String;
    v8 = String;
    if ( String && (v9 = *String) != 0 )
    {
      v10 = 5381;
      do
      {
        v11 = v9;
        ++v8;
        v12 = v9 | 0x20;
        if ( (unsigned int)(v11 - 65) >= 0x1A )
          v12 = v11;
        v10 = 65599 * v10 + v12;
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
    Int = Scr_GetInt(scrContext, 1u);
    v14 = s_soundBankList;
    v22 = Int;
    if ( s_soundBankList )
    {
      if ( s_soundBankList->soundBankCount )
      {
        v15 = 0i64;
        while ( 1 )
        {
          v16 = v14->soundBankNames[v15];
          if ( !v16 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_soundbanklist.cpp", 83, ASSERT_TYPE_ASSERT, "(soundBankListName != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "soundBankListName != SND_INVALID_HASH") )
              __debugbreak();
            v14 = s_soundBankList;
          }
          if ( v10 == v16 )
            break;
          ++v6;
          ++v15;
          if ( v6 >= v14->soundBankCount )
            goto LABEL_23;
        }
        v18 = v4->s.lerp.u.anonymous.data[3];
        v19 = 1i64 << v6;
        v20 = v4->s.lerp.u.anonymous.data[4];
        v21 = (unsigned __int64)(1i64 << v6) >> 32;
        if ( v22 )
        {
          v4->s.lerp.u.anonymous.data[4] = v21 | v20;
          v4->s.lerp.u.anonymous.data[3] = v19 | v18;
        }
        else
        {
          v4->s.lerp.u.anonymous.data[4] = ~(_DWORD)v21 & v20;
          v4->s.lerp.u.anonymous.data[3] = ~(_DWORD)v19 & v18;
        }
      }
      else
      {
LABEL_23:
        v17 = j_va("Transient soundbank '%s' not found in soundbanklist asset.\n", v7);
        Scr_Error(COM_ERR_5792, scrContext, v17);
      }
    }
    else
    {
      Scr_Error(COM_ERR_5791, scrContext, "Cannot set transient soundbank without a soundbanklist asset.\n");
    }
  }
  else
  {
    Scr_Error(COM_ERR_5824, scrContext, "Entity is not a sound_transient_soundbanks\n");
  }
}

