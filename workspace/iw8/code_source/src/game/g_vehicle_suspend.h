/*
==============
GVehicleSuspendManager::ForEachSuspendedVehicle<G_PlayerUse_SuspendedVehicleCallback>
==============
*/

void __fastcall GVehicleSuspendManager::ForEachSuspendedVehicle<G_PlayerUse_SuspendedVehicleCallback>(GVehicleSuspendManager *this, G_PlayerUse_SuspendedVehicleCallback callback)
{
  ??$ForEachSuspendedVehicle@UG_PlayerUse_SuspendedVehicleCallback@@@GVehicleSuspendManager@@QEBAXUG_PlayerUse_SuspendedVehicleCallback@@@Z(this, callback);
}

/*
==============
GVehicleSuspendManager::ForEachSuspendedVehicle<G_PlayerUse_SuspendedVehicleCallback>
==============
*/
void GVehicleSuspendManager::ForEachSuspendedVehicle<G_PlayerUse_SuspendedVehicleCallback>(GVehicleSuspendManager *this, G_PlayerUse_SuspendedVehicleCallback callback)
{
  unsigned __int8 *p_usableScriptablePartCount; 
  __int64 v4; 
  unsigned __int16 v5; 
  unsigned int ScriptableIndexForEntityNum; 

  p_usableScriptablePartCount = &this->m_infos[0].usableScriptablePartCount;
  v4 = 256i64;
  do
  {
    v5 = *((_WORD *)p_usableScriptablePartCount - 1);
    if ( v5 != 2047 )
    {
      if ( *p_usableScriptablePartCount )
      {
        ScriptableIndexForEntityNum = ScriptableSv_GetScriptableIndexForEntityNum(v5);
        G_PlayerUse_DisableScriptableVehicle(ScriptableIndexForEntityNum, *p_usableScriptablePartCount, (const VehicleUsableParts *)(p_usableScriptablePartCount - 90), callback.m_playerMask);
      }
    }
    p_usableScriptablePartCount += 92;
    --v4;
  }
  while ( v4 );
}

