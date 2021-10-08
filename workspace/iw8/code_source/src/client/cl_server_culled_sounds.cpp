/*
==============
CL_GetClientSoundInfo
==============
*/

clientSoundInfo_s *__fastcall CL_GetClientSoundInfo(int soundInfoIndex)
{
  return ?CL_GetClientSoundInfo@@YAPEAUclientSoundInfo_s@@H@Z(soundInfoIndex);
}

/*
==============
CL_CopySoundInfoOrientation
==============
*/

void __fastcall CL_CopySoundInfoOrientation(int serverSoundIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  ?CL_CopySoundInfoOrientation@@YAXHAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(serverSoundIndex, origin_out, axis_out);
}

/*
==============
CL_CopySoundInfoOrientation
==============
*/
void CL_CopySoundInfoOrientation(int serverSoundIndex, vec3_t *origin_out, tmat33_t<vec3_t> *axis_out)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  int v8; 

  v3 = serverSoundIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_server_culled_sounds.cpp", 10, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x400 )
  {
    v8 = 1024;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_server_culled_sounds.cpp", 11, ASSERT_TYPE_ASSERT, "(unsigned)( serverSoundIndex ) < (unsigned)( ( sizeof( *array_counter( cl_clientSoundInfos ) ) + 0 ) )", "serverSoundIndex doesn't index ARRAY_COUNT( cl_clientSoundInfos )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = v3;
  AnglesToAxis(&cl_clientSoundInfos[v6].soundAngles, axis_out);
  origin_out->v[0] = cl_clientSoundInfos[v6].soundOrigin.v[0];
  origin_out->v[1] = cl_clientSoundInfos[v6].soundOrigin.v[1];
  origin_out->v[2] = cl_clientSoundInfos[v6].soundOrigin.v[2];
}

/*
==============
CL_GetClientSoundInfo
==============
*/
clientSoundInfo_s *CL_GetClientSoundInfo(int soundInfoIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = soundInfoIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_server_culled_sounds.cpp", 20, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x400 )
  {
    v4 = 1024;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_server_culled_sounds.cpp", 21, ASSERT_TYPE_ASSERT, "(unsigned)( soundInfoIndex ) < (unsigned)( ( sizeof( *array_counter( cl_clientSoundInfos ) ) + 0 ) )", "soundInfoIndex doesn't index ARRAY_COUNT( cl_clientSoundInfos )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &cl_clientSoundInfos[v1];
}

