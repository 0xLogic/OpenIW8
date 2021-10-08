/*
==============
BG_CalloutMarkerPingPoolUsesEnt
==============
*/

bool __fastcall BG_CalloutMarkerPingPoolUsesEnt(CalloutMarkerPingPool pool)
{
  return ?BG_CalloutMarkerPingPoolUsesEnt@@YA_NW4CalloutMarkerPingPool@@@Z(pool);
}

/*
==============
BG_CalloutMarkerPing_ViewIndexToPool
==============
*/

CalloutMarkerPingPool __fastcall BG_CalloutMarkerPing_ViewIndexToPool(unsigned __int8 viewIndex)
{
  return ?BG_CalloutMarkerPing_ViewIndexToPool@@YA?AW4CalloutMarkerPingPool@@E@Z(viewIndex);
}

/*
==============
BG_CalloutMarkerPingPoolUsesEnt
==============
*/
bool BG_CalloutMarkerPingPoolUsesEnt(CalloutMarkerPingPool pool)
{
  return pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u;
}

/*
==============
BG_CalloutMarkerPing_ViewIndexToPool
==============
*/
__int64 BG_CalloutMarkerPing_ViewIndexToPool(unsigned __int8 viewIndex)
{
  unsigned int v2; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  if ( viewIndex >= 0x34u )
  {
    v7 = 52;
    v5 = viewIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( 13 * 4 )", "viewIndex doesn't index CALLOUT_MARKER_PING_PLAYER_WHOLE_TEAM_POOL_SIZE\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( viewIndex / 0xDu >= 4 )
  {
    LODWORD(v6) = 4;
    LODWORD(v4) = viewIndex / 0xDu;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( teammateIndex ) < (unsigned)( 4 )", "teammateIndex doesn't index CALLOUT_MARKER_PING_MAX_TEAM_SIZE\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  v2 = viewIndex % 0xDu;
  if ( v2 >= 0xD )
  {
    LODWORD(v6) = 13;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_calloutmarkerping_mp.h", 181, ASSERT_TYPE_ASSERT, "(unsigned)( poolIndex ) < (unsigned)( 13 )", "poolIndex doesn't index CALLOUT_MARKER_PING_LOCAL_PLAYER_POOL_SIZE\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return (unsigned __int8)v2;
}

