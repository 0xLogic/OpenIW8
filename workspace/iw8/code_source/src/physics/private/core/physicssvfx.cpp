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

void __fastcall PhysicsSVFX_DrawDebug(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  int integer; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, [rsp+58h+charHeight]
  }
  integer = physicsSVFX_debugWorld->current.integer;
  __asm { vmovaps xmm6, xmm3 }
  if ( integer )
  {
    __asm
    {
      vmovss  [rsp+58h+var_30], xmm7
      vmovss  [rsp+58h+var_38], xmm3
    }
    HavokPhysicsSVFX_DrawDebugWorld(integer - 1, scrPlace, x, y, v17, v20);
  }
  if ( physicsSVFX_debugDrawSFX->current.enabled )
  {
    __asm
    {
      vmovaps xmm3, xmm6; tabWidth
      vmovss  [rsp+58h+var_38], xmm7
    }
    HavokPhysicsSVFX_DrawSFX(scrPlace, x, y, *(float *)&_XMM3, v18);
  }
  if ( physicsSVFX_debugDrawVFX->current.enabled )
  {
    __asm
    {
      vmovaps xmm3, xmm6; tabWidth
      vmovss  [rsp+58h+var_38], xmm7
    }
    HavokPhysicsSVFX_DrawVFX(scrPlace, x, y, *(float *)&_XMM3, v19);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
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

void __fastcall PhysicsSVFX_SetupDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v13; 
  const dvar_t *v17; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  physicsSVFX_debugWorld = Dvar_RegisterEnum("ROSNONPOL", s_PhysicsSVFX_DebugSectionNames, 0, 4u, "Show physics svfx world");
  physicsSVFX_debugDrawSFX = Dvar_RegisterBool("LTNNNNLQM", 0, 4u, "Show physics sfx event sounds");
  physicsSVFX_debugDrawVFX = Dvar_RegisterBool("MMLKPSTTT", 0, 4u, "Show physics vfx event sounds");
  physicsSVFX_debugDrawSFXHits = Dvar_RegisterBool("LQKSOSRQLM", 0, 4u, "Show physics sfx hit events");
  physicsSVFX_debugDrawVFXHits = Dvar_RegisterBool("LTKLOLRPMT", 0, 4u, "Show physics vfx hit events");
  physicsSVFX_debugDrawSFXHitsTime = Dvar_RegisterInt("LTQNPRPTKL", 120, 1, 600, 4u, "Time to show physicsSVFX_debugDrawSFXHits for");
  __asm
  {
    vmovss  xmm6, cs:__real@42b40000
    vmovss  xmm7, cs:__real@3f800000
  }
  physicsSVFX_debugDrawVFXHitsTime = Dvar_RegisterInt("NRONOSMQNM", 120, 1, 600, 4u, "Time to show physicsSVFX_debugDrawVFXHits for");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
    vmovss  dword ptr [rsp+68h+description], xmm7
  }
  physicsSVFX_debugDrawSFXHitsAngleThreshold = Dvar_RegisterFloat("MNLTKOKSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, description, 4u, "Angle threshold to show physicsSVFX_debugDrawSFXHits for");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
    vmovss  dword ptr [rsp+68h+description], xmm7
  }
  v13 = Dvar_RegisterFloat("OOKSORNMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, descriptiona, 4u, "Angle threshold to show physicsSVFX_debugDrawVFXHits for");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  physicsSVFX_debugDrawVFXHitsAngleThreshold = v13;
  __asm
  {
    vmovss  dword ptr [rsp+68h+description], xmm7
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v17 = Dvar_RegisterFloat("NNSMLKOQKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, descriptionb, 4u, "Speed threshold to show physicsSVFX_debugDrawSFXHits for");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  physicsSVFX_debugDrawSFXHitsSpeedThreshold = v17;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  dword ptr [rsp+68h+description], xmm7
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  physicsSVFX_debugDrawVFXHitsSpeedThreshold = Dvar_RegisterFloat("LPROPMKPSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, descriptionc, 4u, "Speed threshold to show physicsSVFX_debugDrawVFXHits for");
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

