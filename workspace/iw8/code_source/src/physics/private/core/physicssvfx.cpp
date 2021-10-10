/*
==============
PhysicsSVFX_UnregisterBody
==============
*/

void __fastcall PhysicsSVFX_UnregisterBody(Physics_WorldId worldId, unsigned int bodyId, LocalClientNum_t localClientNum)
{
  ?PhysicsSVFX_UnregisterBody@@YAXW4Physics_WorldId@@IW4LocalClientNum_t@@@Z(worldId, bodyId, localClientNum);
}

/*
==============
PhysicsSVFX_DrawDebug
==============
*/

void __fastcall PhysicsSVFX_DrawDebug(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?PhysicsSVFX_DrawDebug@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
PhysicsSVFX_UnregisterWorld
==============
*/

void __fastcall PhysicsSVFX_UnregisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  ?PhysicsSVFX_UnregisterWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
PhysicsSVFX_Update
==============
*/

void __fastcall PhysicsSVFX_Update(Physics_WorldId worldId, LocalClientNum_t localClientNum, float timeStep)
{
  ?PhysicsSVFX_Update@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@M@Z(worldId, localClientNum, timeStep);
}

/*
==============
PhysicsSVFX_SetupDvars
==============
*/

void PhysicsSVFX_SetupDvars(void)
{
  ?PhysicsSVFX_SetupDvars@@YAXXZ();
}

/*
==============
PhysicsSVFX_RegisterBody
==============
*/

void __fastcall PhysicsSVFX_RegisterBody(Physics_WorldId worldId, unsigned int bodyId, LocalClientNum_t localClientNum)
{
  ?PhysicsSVFX_RegisterBody@@YAXW4Physics_WorldId@@IW4LocalClientNum_t@@@Z(worldId, bodyId, localClientNum);
}

/*
==============
PhysicsSVFX_IsWorldRegistered
==============
*/

bool __fastcall PhysicsSVFX_IsWorldRegistered(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  return ?PhysicsSVFX_IsWorldRegistered@@YA_NW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
PhysicsSVFX_RegisterWorld
==============
*/

void __fastcall PhysicsSVFX_RegisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum, unsigned int rigidBodyCount)
{
  ?PhysicsSVFX_RegisterWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@I@Z(worldId, localClientNum, rigidBodyCount);
}

/*
==============
PhysicsSVFX_DrawDebug
==============
*/
void PhysicsSVFX_DrawDebug(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int integer; 

  integer = physicsSVFX_debugWorld->current.integer;
  if ( integer )
    HavokPhysicsSVFX_DrawDebugWorld(integer - 1, scrPlace, x, y, tabWidth, charHeight);
  if ( physicsSVFX_debugDrawSFX->current.enabled )
    HavokPhysicsSVFX_DrawSFX(scrPlace, x, y, tabWidth, charHeight);
  if ( physicsSVFX_debugDrawVFX->current.enabled )
    HavokPhysicsSVFX_DrawVFX(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
PhysicsSVFX_IsWorldRegistered
==============
*/

bool __fastcall PhysicsSVFX_IsWorldRegistered(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  return HavokPhysicsSVFX_IsWorldRegistered(worldId, localClientNum);
}

/*
==============
PhysicsSVFX_RegisterBody
==============
*/
void PhysicsSVFX_RegisterBody(Physics_WorldId worldId, unsigned int bodyId, LocalClientNum_t localClientNum)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicssvfx.cpp", 155, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    if ( Physics_HasVFXEventAsset(worldId, bodyId) || Physics_HasSFXEventAsset(worldId, bodyId) )
      HavokPhysicsSVFX_RegisterBody(worldId, (hknpBodyId)bodyId, LOCAL_CLIENT_0);
  }
}

/*
==============
PhysicsSVFX_RegisterWorld
==============
*/
void PhysicsSVFX_RegisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum, unsigned int rigidBodyCount)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
    HavokPhysicsSVFX_RegisterWorld(worldId, LOCAL_CLIENT_0, rigidBodyCount);
}

/*
==============
PhysicsSVFX_SetupDvars
==============
*/
void PhysicsSVFX_SetupDvars(void)
{
  physicsSVFX_debugWorld = Dvar_RegisterEnum("ROSNONPOL", s_PhysicsSVFX_DebugSectionNames, 0, 4u, "Show physics svfx world");
  physicsSVFX_debugDrawSFX = Dvar_RegisterBool("LTNNNNLQM", 0, 4u, "Show physics sfx event sounds");
  physicsSVFX_debugDrawVFX = Dvar_RegisterBool("MMLKPSTTT", 0, 4u, "Show physics vfx event sounds");
  physicsSVFX_debugDrawSFXHits = Dvar_RegisterBool("LQKSOSRQLM", 0, 4u, "Show physics sfx hit events");
  physicsSVFX_debugDrawVFXHits = Dvar_RegisterBool("LTKLOLRPMT", 0, 4u, "Show physics vfx hit events");
  physicsSVFX_debugDrawSFXHitsTime = Dvar_RegisterInt("LTQNPRPTKL", 120, 1, 600, 4u, "Time to show physicsSVFX_debugDrawSFXHits for");
  physicsSVFX_debugDrawVFXHitsTime = Dvar_RegisterInt("NRONOSMQNM", 120, 1, 600, 4u, "Time to show physicsSVFX_debugDrawVFXHits for");
  physicsSVFX_debugDrawSFXHitsAngleThreshold = Dvar_RegisterFloat("MNLTKOKSM", 90.0, 0.0, 90.0, 1.0, 4u, "Angle threshold to show physicsSVFX_debugDrawSFXHits for");
  physicsSVFX_debugDrawVFXHitsAngleThreshold = Dvar_RegisterFloat("OOKSORNMR", 90.0, 0.0, 90.0, 1.0, 4u, "Angle threshold to show physicsSVFX_debugDrawVFXHits for");
  physicsSVFX_debugDrawSFXHitsSpeedThreshold = Dvar_RegisterFloat("NNSMLKOQKK", 0.0, 0.0, 1000.0, 1.0, 4u, "Speed threshold to show physicsSVFX_debugDrawSFXHits for");
  physicsSVFX_debugDrawVFXHitsSpeedThreshold = Dvar_RegisterFloat("LPROPMKPSL", 0.0, 0.0, 1000.0, 1.0, 4u, "Speed threshold to show physicsSVFX_debugDrawVFXHits for");
}

/*
==============
PhysicsSVFX_UnregisterBody
==============
*/
void PhysicsSVFX_UnregisterBody(Physics_WorldId worldId, unsigned int bodyId, LocalClientNum_t localClientNum)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicssvfx.cpp", 199, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    if ( Physics_HasVFXEventAsset(worldId, bodyId) || Physics_HasSFXEventAsset(worldId, bodyId) )
      HavokPhysicsSVFX_UnregisterBody(worldId, (hknpBodyId)bodyId, LOCAL_CLIENT_0);
  }
}

/*
==============
PhysicsSVFX_UnregisterWorld
==============
*/
void PhysicsSVFX_UnregisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
    HavokPhysicsSVFX_UnregisterWorld(worldId, LOCAL_CLIENT_0);
}

/*
==============
PhysicsSVFX_Update
==============
*/
void PhysicsSVFX_Update(Physics_WorldId worldId, LocalClientNum_t localClientNum, float timeStep)
{
  if ( localClientNum == LOCAL_CLIENT_0 )
    HavokPhysicsSVFX_Update(worldId, LOCAL_CLIENT_0, timeStep);
}

