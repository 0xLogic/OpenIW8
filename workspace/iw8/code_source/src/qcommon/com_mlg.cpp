/*
==============
MLG_ShouldAcceptVoiceDataFromClient
==============
*/

bool __fastcall MLG_ShouldAcceptVoiceDataFromClient(LocalClientNum_t localClientNum, int incomingVOIPClientNum)
{
  return ?MLG_ShouldAcceptVoiceDataFromClient@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, incomingVOIPClientNum);
}

/*
==============
MLG_IsLocalPlayerMLGSpectator
==============
*/

bool __fastcall MLG_IsLocalPlayerMLGSpectator(LocalClientNum_t localClientNum)
{
  return ?MLG_IsLocalPlayerMLGSpectator@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
MLG_IsCoDCasterEnabled
==============
*/

bool __fastcall MLG_IsCoDCasterEnabled()
{
  return ?MLG_IsCoDCasterEnabled@@YA_NXZ();
}

/*
==============
MLG_GetLoadoutTypeFromName
==============
*/

bool __fastcall MLG_GetLoadoutTypeFromName(const char *loadoutTypeName, MLGLoadoutType *mlgLoadoutTypeOut)
{
  return ?MLG_GetLoadoutTypeFromName@@YA_NPEBDAEAW4MLGLoadoutType@@@Z(loadoutTypeName, mlgLoadoutTypeOut);
}

/*
==============
MLG_GetLoadoutNameFromType
==============
*/

bool __fastcall MLG_GetLoadoutNameFromType(MLGLoadoutType loadoutType, const char **loadoutNameOut)
{
  return ?MLG_GetLoadoutNameFromType@@YA_NW4MLGLoadoutType@@PEAPEBD@Z(loadoutType, loadoutNameOut);
}

/*
==============
MLG_GetLoadoutNameFromType
==============
*/
char MLG_GetLoadoutNameFromType(MLGLoadoutType loadoutType, const char **loadoutNameOut)
{
  if ( (unsigned int)loadoutType > MLG_LOADOUT_FIELD_UPGRADE )
    return 0;
  *loadoutNameOut = s_loadoutTypeNames[loadoutType];
  return 1;
}

/*
==============
MLG_GetLoadoutTypeFromName
==============
*/
char MLG_GetLoadoutTypeFromName(const char *loadoutTypeName, MLGLoadoutType *mlgLoadoutTypeOut)
{
  unsigned int v3; 
  const char **v4; 
  MLGLoadoutType v5; 
  const char **v6; 
  const char *v7; 
  __int64 v8; 
  const char *v9; 
  signed __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 

  if ( !loadoutTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_mlg.cpp", 129, ASSERT_TYPE_ASSERT, "(loadoutTypeName)", (const char *)&queryFormat, "loadoutTypeName") )
    __debugbreak();
  v3 = 0;
  v4 = s_loadoutTypeNames;
  v5 = MLG_LOADOUT_RIG_SUPER;
  v6 = s_loadoutTypeNames;
  do
  {
    v7 = *v6;
    v8 = 0x7FFFFFFFi64;
    v9 = loadoutTypeName;
    if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !loadoutTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v10 = v7 - loadoutTypeName;
    while ( 1 )
    {
      v11 = v9[v10];
      v12 = v8;
      v13 = *v9++;
      --v8;
      if ( !v12 )
      {
LABEL_15:
        *mlgLoadoutTypeOut = v5;
        return 1;
      }
      if ( v11 != v13 )
        break;
      if ( !v11 )
        goto LABEL_15;
    }
    ++v5;
    ++v6;
  }
  while ( (unsigned int)v5 < MLG_LOADOUT_COUNT );
  Com_Printf(32, "MLG_GetLoadoutTypeFromName: Invalid loadout type name '%s'\nValid Loadout Type Names:\n", loadoutTypeName);
  do
  {
    Com_Printf(32, "'%s'", *v4);
    ++v3;
    ++v4;
  }
  while ( v3 < 0xC );
  *mlgLoadoutTypeOut = MLG_LOADOUT_INVALID;
  return 0;
}

/*
==============
MLG_IsCoDCasterEnabled
==============
*/
char MLG_IsCoDCasterEnabled()
{
  char result; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  result = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_OFFHAND_END|0x80);
  if ( result )
  {
    v1 = DVARBOOL_com_devCodcasterEnabled;
    if ( !DVARBOOL_com_devCodcasterEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_devCodcasterEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      return 1;
    }
    else
    {
      v2 = DVARBOOL_com_codcasterEnabled;
      if ( !DVARBOOL_com_codcasterEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      return v2->current.enabled;
    }
  }
  return result;
}

/*
==============
MLG_IsLocalPlayerMLGSpectator
==============
*/
bool MLG_IsLocalPlayerMLGSpectator(LocalClientNum_t localClientNum)
{
  CgMLGSpectator *MLGSpectator; 

  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return 0;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  return CgMLGSpectator::IsLocalClientMLGSpectator(MLGSpectator, localClientNum) != 0;
}

/*
==============
MLG_ShouldAcceptVoiceDataFromClient
==============
*/
char MLG_ShouldAcceptVoiceDataFromClient(LocalClientNum_t localClientNum, int incomingVOIPClientNum)
{
  CgMLGSpectator *MLGSpectator; 
  const dvar_t *v5; 

  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return 1;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  if ( !CgMLGSpectator::IsLocalClientMLGSpectator(MLGSpectator, localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_mlg.cpp", 83, ASSERT_TYPE_ASSERT, "(cgMLGSpectator->IsLocalClientMLGSpectator( localClientNum ))", (const char *)&queryFormat, "cgMLGSpectator->IsLocalClientMLGSpectator( localClientNum )") )
    __debugbreak();
  if ( CgMLGSpectator::ShouldListenInToClient(MLGSpectator, localClientNum, incomingVOIPClientNum) )
    return 1;
  v5 = DVARBOOL_voice_debug;
  if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    Com_Printf(25, "Ignoring voice packet from client %i because we shouldn't be listening in to that player\n", (unsigned int)incomingVOIPClientNum);
  return 0;
}

