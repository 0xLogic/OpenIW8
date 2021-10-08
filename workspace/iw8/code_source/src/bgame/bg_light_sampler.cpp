/*
==============
BG_LightSampler_ActiveGameModeSupportsLightSampling
==============
*/

bool __fastcall BG_LightSampler_ActiveGameModeSupportsLightSampling()
{
  return ?BG_LightSampler_ActiveGameModeSupportsLightSampling@@YA_NXZ();
}

/*
==============
BG_LightSampler_ActiveGameModeSupportsLightSampling
==============
*/
bool BG_LightSampler_ActiveGameModeSupportsLightSampling()
{
  return (((unsigned __int8)Com_GameMode_GetActiveGameMode() - 1) & 0xFD) == 0;
}

