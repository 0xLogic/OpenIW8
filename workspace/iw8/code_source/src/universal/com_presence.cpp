/*
==============
Com_GetMapPresenceContext
==============
*/

bool __fastcall Com_GetMapPresenceContext(const char *mapname, unsigned int *outContext)
{
  return ?Com_GetMapPresenceContext@@YA_NPEBDPEAI@Z(mapname, outContext);
}

/*
==============
Com_GetGametypeContext
==============
*/

bool __fastcall Com_GetGametypeContext(const char *gametype, unsigned int *outContext)
{
  return ?Com_GetGametypeContext@@YA_NPEBDPEAI@Z(gametype, outContext);
}

/*
==============
Live_GetFirstMapForSource
==============
*/

const char *__fastcall Live_GetFirstMapForSource(const int mapPack, const bool isAliens)
{
  return ?Live_GetFirstMapForSource@@YAPEBDH_N@Z(mapPack, isAliens);
}

/*
==============
Live_GetMapCount
==============
*/

int __fastcall Live_GetMapCount()
{
  return ?Live_GetMapCount@@YAHXZ();
}

/*
==============
Live_GetGameTypeCount
==============
*/

int __fastcall Live_GetGameTypeCount()
{
  return ?Live_GetGameTypeCount@@YAHXZ();
}

/*
==============
Live_GetMapSource
==============
*/

int __fastcall Live_GetMapSource(const int mapIndex)
{
  return ?Live_GetMapSource@@YAHH@Z(mapIndex);
}

/*
==============
Live_GetMapIndex
==============
*/

int __fastcall Live_GetMapIndex(const char *mapname)
{
  return ?Live_GetMapIndex@@YAHPEBD@Z(mapname);
}

/*
==============
Com_GetGametypeContext
==============
*/
char Com_GetGametypeContext(const char *gametype, unsigned int *outContext)
{
  int v4; 
  const GametypeRichPresenceInfo *v5; 
  __int64 v6; 
  const GametypeRichPresenceInfo *v7; 
  const char *v8; 
  char v9; 
  __int64 v10; 
  char v11; 

  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 233, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  if ( !outContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 234, ASSERT_TYPE_ASSERT, "(outContext)", (const char *)&queryFormat, "outContext") )
    __debugbreak();
  v4 = 0;
  v5 = gametypeRichPresenceInfo;
  do
  {
    v6 = 0x7FFFFFFFi64;
    v7 = &gametypeRichPresenceInfo[v4];
    if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = (const char *)(gametype - (const char *)v7);
    while ( 1 )
    {
      v9 = v7->gametype[(_QWORD)v8];
      v10 = v6;
      v11 = v7->gametype[0];
      v7 = (const GametypeRichPresenceInfo *)((char *)v7 + 1);
      --v6;
      if ( !v10 )
      {
LABEL_18:
        *outContext = gametypeRichPresenceInfo[v4].context;
        return 1;
      }
      if ( v9 != v11 )
        break;
      if ( !v9 )
        goto LABEL_18;
    }
    ++v5;
    ++v4;
  }
  while ( v5->gametype[0] );
  Com_PrintWarning(25, "Unknown gametype '%s', must add it to xlast\n", gametype);
  return 0;
}

/*
==============
Com_GetMapPresenceContext
==============
*/
char Com_GetMapPresenceContext(const char *mapname, unsigned int *outContext)
{
  const MapnameRichPresenceInfo *v4; 
  int v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 187, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !outContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 188, ASSERT_TYPE_ASSERT, "(outContext)", (const char *)&queryFormat, "outContext") )
    __debugbreak();
  v4 = s_mapRichPresenceInfoMP;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) )
    v4 = s_mapRichPresenceInfoSP;
  v5 = 0;
  v6 = v4->mapname;
  if ( *v4->mapname )
  {
    v7 = 0i64;
    do
    {
      v8 = 0x7FFFFFFFi64;
      if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v9 = (const char *)(mapname - v6);
      while ( 1 )
      {
        v10 = (unsigned __int8)v6[(_QWORD)v9];
        v11 = v8;
        v12 = *(unsigned __int8 *)v6++;
        --v8;
        if ( !v11 )
        {
LABEL_26:
          *outContext = v4[v7].context;
          return 1;
        }
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
            break;
        }
        if ( !v10 )
          goto LABEL_26;
      }
      v7 = (unsigned int)++v5;
      v6 = v4[v5].mapname;
    }
    while ( *v6 );
  }
  Com_Printf(16, "Unknown map!  We must add %s to %s!\n", mapname, "c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp");
  *outContext = 0;
  return 1;
}

/*
==============
Live_GetFirstMapForSource
==============
*/
const char *Live_GetFirstMapForSource(const int mapPack, const bool isAliens)
{
  int v4; 
  const MapnameRichPresenceInfo *i; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 272, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER )") )
    __debugbreak();
  v4 = 0;
  for ( i = s_mapRichPresenceInfoMP; i->mapPack != mapPack || Com_IsCpMap(i->mapname) != isAliens; ++i )
  {
    if ( (unsigned int)++v4 >= 0x5A )
      return (char *)&queryFormat.fmt + 3;
  }
  return s_mapRichPresenceInfoMP[v4].mapname;
}

/*
==============
Live_GetGameTypeCount
==============
*/
__int64 Live_GetGameTypeCount()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 263, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER )") )
    __debugbreak();
  return 31i64;
}

/*
==============
Live_GetMapCount
==============
*/
__int64 Live_GetMapCount()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 256, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER )") )
    __debugbreak();
  return 89i64;
}

/*
==============
Live_GetMapIndex
==============
*/
__int64 Live_GetMapIndex(const char *mapname)
{
  const dvar_t *v1; 
  const char *v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v1 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 288, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature:: PRESENCE_MULTIPLAYER )") )
    __debugbreak();
  v3 = s_mapRichPresenceInfoMP[0].mapname;
  v4 = 0;
  if ( *s_mapRichPresenceInfoMP[0].mapname )
  {
    v5 = 0i64;
    do
    {
      v6 = 0x7FFFFFFFi64;
      if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v7 = (const char *)(mapname - v3);
      while ( 1 )
      {
        v8 = (unsigned __int8)v3[(_QWORD)v7];
        v9 = v6;
        v10 = *(unsigned __int8 *)v3++;
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
      ++v5;
      ++v4;
      v3 = s_mapRichPresenceInfoMP[v5].mapname;
    }
    while ( *v3 );
  }
  return 0xFFFFFFFFi64;
}

/*
==============
Live_GetMapSource
==============
*/
__int64 Live_GetMapSource(const int mapIndex)
{
  const dvar_t *v1; 
  __int64 v2; 
  __int64 v4; 

  v1 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  v2 = mapIndex;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 319, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PRESENCE_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PRESENCE_MULTIPLAYER )") )
    __debugbreak();
  if ( (int)v2 < 0 || disableDLC->current.enabled )
    return 2i64;
  if ( (int)v2 >= 90 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_presence.cpp", 330, ASSERT_TYPE_ASSERT, "( ( mapIndex >= 0 && mapIndex < static_cast<int>( ( sizeof( *array_counter( s_mapRichPresenceInfoMP ) ) + 0 ) ) ) )", "( mapIndex ) = %i", v4) )
      __debugbreak();
  }
  return (unsigned int)s_mapRichPresenceInfoMP[v2].mapPack;
}

