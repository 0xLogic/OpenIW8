/*
==============
R_GetTrackingZoneName
==============
*/

const char *__fastcall R_GetTrackingZoneName()
{
  return ?R_GetTrackingZoneName@@YAPEBDXZ();
}

/*
==============
R_GetTrackingZoneName
==============
*/
const char *R_GetTrackingZoneName()
{
  unsigned __int16 CurrentZoneLoadIndex; 

  if ( Sys_IsDatabaseThread() && (CurrentZoneLoadIndex = DB_Zones_GetCurrentZoneLoadIndex()) != 0 )
    return DB_Zones_GetZoneNameFromIndex(CurrentZoneLoadIndex);
  else
    return "<unknown>";
}

