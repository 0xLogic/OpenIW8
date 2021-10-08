/*
==============
SV_ClientAntiCheatMP_Reset
==============
*/

void __fastcall SV_ClientAntiCheatMP_Reset(SvClientAntiCheatData *const data)
{
  ?SV_ClientAntiCheatMP_Reset@@YAXQEAUSvClientAntiCheatData@@@Z(data);
}

/*
==============
SV_ClientAntiCheatMP_Reset
==============
*/
void SV_ClientAntiCheatMP_Reset(SvClientAntiCheatData *const data)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.h", 95, ASSERT_TYPE_ASSERT, "( data )", (const char *)&queryFormat, "data") )
    __debugbreak();
  DebugWipe(data, 0x5B20ui64);
  *(_QWORD *)&data->playerKnockAndKillsCount = 0i64;
  memset_0(data->recentlySightedClients, -1, sizeof(data->recentlySightedClients));
  data->lastRecordedAnglesTime = -1;
  data->pitchVelocityDigest.m_processedWeightTotal = 0.0;
  data->pitchVelocityDigest.m_min = 1.797693134862316e308;
  data->pitchVelocityDigest.m_max = 2.225073858507201e-308;
  data->pitchVelocityDigest.m_unprocessedWeightTotal = 0.0;
  *(_QWORD *)&data->pitchVelocityDigest.m_unprocessedCentroidBufferIndex = 0i64;
  memset_0(data->pitchVelocityDigest.m_processedCentroids, 0, 0x1200ui64);
  data->yawVelocityDigest.m_min = 1.797693134862316e308;
  data->yawVelocityDigest.m_max = 2.225073858507201e-308;
  data->yawVelocityDigest.m_processedWeightTotal = 0.0;
  data->yawVelocityDigest.m_unprocessedWeightTotal = 0.0;
  *(_QWORD *)&data->yawVelocityDigest.m_unprocessedCentroidBufferIndex = 0i64;
  memset_0(data->yawVelocityDigest.m_processedCentroids, 0, 0x1200ui64);
  data->pitchAccelDigest.m_min = 1.797693134862316e308;
  data->pitchAccelDigest.m_max = 2.225073858507201e-308;
  data->pitchAccelDigest.m_processedWeightTotal = 0.0;
  data->pitchAccelDigest.m_unprocessedWeightTotal = 0.0;
  *(_QWORD *)&data->pitchAccelDigest.m_unprocessedCentroidBufferIndex = 0i64;
  memset_0(data->pitchAccelDigest.m_processedCentroids, 0, 0x1200ui64);
  data->yawAccelDigest.m_min = 1.797693134862316e308;
  data->yawAccelDigest.m_max = 2.225073858507201e-308;
  data->yawAccelDigest.m_processedWeightTotal = 0.0;
  data->yawAccelDigest.m_unprocessedWeightTotal = 0.0;
  *(_QWORD *)&data->yawAccelDigest.m_unprocessedCentroidBufferIndex = 0i64;
  memset_0(data->yawAccelDigest.m_processedCentroids, 0, 0x1200ui64);
  data->speedIndex = 0;
  data->hasSentPerMatchStats = 0;
}

