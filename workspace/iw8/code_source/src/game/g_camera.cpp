/*
==============
G_IsCameraTransitionActive
==============
*/

bool __fastcall G_IsCameraTransitionActive(int clientNum)
{
  return ?G_IsCameraTransitionActive@@YA_NH@Z(clientNum);
}

/*
==============
G_IsCameraActive
==============
*/

bool __fastcall G_IsCameraActive(int clientNum)
{
  return ?G_IsCameraActive@@YA_NH@Z(clientNum);
}

/*
==============
G_IsCameraActive
==============
*/
bool G_IsCameraActive(int clientNum)
{
  const gentity_s *GEntity; 
  int maxclients; 

  if ( (unsigned int)clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_camera.cpp", 10, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  GEntity = G_GetGEntity(clientNum);
  return G_GetEntityPlayerStateConst(GEntity)->cameraTypeIndex != 0;
}

/*
==============
G_IsCameraTransitionActive
==============
*/
bool G_IsCameraTransitionActive(int clientNum)
{
  const gentity_s *GEntity; 
  int maxclients; 

  if ( (unsigned int)clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_camera.cpp", 22, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  GEntity = G_GetGEntity(clientNum);
  return G_GetEntityPlayerStateConst(GEntity)->cameraTransitionEnd > level.time;
}

