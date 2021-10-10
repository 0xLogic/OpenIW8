/*
==============
Live_GetNecessaryCPUSpeed
==============
*/

double __fastcall Live_GetNecessaryCPUSpeed(const int playerCount)
{
  double result; 

  *(float *)&result = ?Live_GetNecessaryCPUSpeed@@YAMH@Z(playerCount);
  return result;
}

/*
==============
Live_GetNecessaryBandwidth
==============
*/

int __fastcall Live_GetNecessaryBandwidth(const int playerCount)
{
  return ?Live_GetNecessaryBandwidth@@YAHH@Z(playerCount);
}

/*
==============
Live_GetNecessaryBandwidth
==============
*/
__int64 Live_GetNecessaryBandwidth(const int playerCount)
{
  const dvar_t *v2; 

  if ( playerCount <= 2 )
    return band_2players->current.unsignedInt;
  if ( playerCount <= 4 )
    return band_4players->current.unsignedInt;
  if ( playerCount <= 8 )
    return band_8players->current.unsignedInt;
  if ( playerCount <= 12 )
    return band_12players->current.unsignedInt;
  if ( playerCount <= 18 )
    return band_18players->current.unsignedInt;
  v2 = band_24players;
  if ( playerCount > 24 )
    v2 = band_lotsplayers;
  return v2->current.unsignedInt;
}

/*
==============
Live_GetNecessaryCPUSpeed
==============
*/
float Live_GetNecessaryCPUSpeed(const int playerCount)
{
  const dvar_t *v2; 

  if ( playerCount <= 8 )
    return cpu_speed_8players->current.value;
  if ( playerCount <= 12 )
    return cpu_speed_12players->current.value;
  if ( playerCount <= 18 )
    return cpu_speed_18players->current.value;
  v2 = cpu_speed_24players;
  if ( playerCount > 24 )
    v2 = cpu_speed_lotsplayers;
  return v2->current.value;
}

