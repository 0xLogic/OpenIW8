/*
==============
Physics_ManifoldCache_SetRestitution
==============
*/

void __fastcall Physics_ManifoldCache_SetRestitution(Physics_ManifoldCache *manifoldCache, const float restitution)
{
  ?Physics_ManifoldCache_SetRestitution@@YAXAEAUPhysics_ManifoldCache@@M@Z(manifoldCache, restitution);
}

/*
==============
Physics_ManifoldCallback_ShutdownForWorld
==============
*/

void __fastcall Physics_ManifoldCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  ?Physics_ManifoldCallback_ShutdownForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_ManifoldCache_GetStaticFrictionExtra
==============
*/

double __fastcall Physics_ManifoldCache_GetStaticFrictionExtra(const Physics_ManifoldCache *manifoldCache)
{
  double result; 

  *(float *)&result = ?Physics_ManifoldCache_GetStaticFrictionExtra@@YAMAEBUPhysics_ManifoldCache@@@Z(manifoldCache);
  return result;
}

/*
==============
Physics_ManifoldCache_SetStaticFrictionExtra
==============
*/

void __fastcall Physics_ManifoldCache_SetStaticFrictionExtra(Physics_ManifoldCache *manifoldCache, const float staticFrictionExtra)
{
  ?Physics_ManifoldCache_SetStaticFrictionExtra@@YAXAEAUPhysics_ManifoldCache@@M@Z(manifoldCache, staticFrictionExtra);
}

/*
==============
Physics_ManifoldCache_SetFriction
==============
*/

void __fastcall Physics_ManifoldCache_SetFriction(Physics_ManifoldCache *manifoldCache, const float friction)
{
  ?Physics_ManifoldCache_SetFriction@@YAXAEAUPhysics_ManifoldCache@@M@Z(manifoldCache, friction);
}

/*
==============
Physics_ManifoldCallback_UnregisterBody
==============
*/

void __fastcall Physics_ManifoldCallback_UnregisterBody(Physics_WorldId worldId, unsigned int bodyId, void (__fastcall *callback)(Physics_ManifoldCallback_Data *), bool allowCantFind)
{
  ?Physics_ManifoldCallback_UnregisterBody@@YAXW4Physics_WorldId@@IP6AXPEAUPhysics_ManifoldCallback_Data@@@Z_N@Z(worldId, bodyId, callback, allowCantFind);
}

/*
==============
Physics_ManifoldCache_GetRestitution
==============
*/

double __fastcall Physics_ManifoldCache_GetRestitution(const Physics_ManifoldCache *manifoldCache)
{
  double result; 

  *(float *)&result = ?Physics_ManifoldCache_GetRestitution@@YAMAEBUPhysics_ManifoldCache@@@Z(manifoldCache);
  return result;
}

/*
==============
Physics_ManifoldCache_GetFriction
==============
*/

double __fastcall Physics_ManifoldCache_GetFriction(const Physics_ManifoldCache *manifoldCache)
{
  double result; 

  *(float *)&result = ?Physics_ManifoldCache_GetFriction@@YAMAEBUPhysics_ManifoldCache@@@Z(manifoldCache);
  return result;
}

/*
==============
Physics_ManifoldCallback_InitForWorld
==============
*/

void __fastcall Physics_ManifoldCallback_InitForWorld(Physics_WorldId worldId)
{
  ?Physics_ManifoldCallback_InitForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_ManifoldCallback_RegisterBody
==============
*/

void __fastcall Physics_ManifoldCallback_RegisterBody(Physics_WorldId worldId, unsigned int bodyId, void (__fastcall *callback)(Physics_ManifoldCallback_Data *))
{
  ?Physics_ManifoldCallback_RegisterBody@@YAXW4Physics_WorldId@@IP6AXPEAUPhysics_ManifoldCallback_Data@@@Z@Z(worldId, bodyId, callback);
}

/*
==============
Physics_ManifoldCache_GetFriction
==============
*/

double __fastcall Physics_ManifoldCache_GetFriction(const Physics_ManifoldCache *manifoldCache)
{
  return HavokPhysics_ManifoldCache_GetFriction(manifoldCache);
}

/*
==============
Physics_ManifoldCache_GetRestitution
==============
*/

double __fastcall Physics_ManifoldCache_GetRestitution(const Physics_ManifoldCache *manifoldCache)
{
  return HavokPhysics_ManifoldCache_GetRestitution(manifoldCache);
}

/*
==============
Physics_ManifoldCache_GetStaticFrictionExtra
==============
*/

double __fastcall Physics_ManifoldCache_GetStaticFrictionExtra(const Physics_ManifoldCache *manifoldCache)
{
  return HavokPhysics_ManifoldCache_GetStaticFrictionExtra(manifoldCache);
}

/*
==============
Physics_ManifoldCache_SetFriction
==============
*/

void __fastcall Physics_ManifoldCache_SetFriction(Physics_ManifoldCache *manifoldCache, const float friction)
{
  HavokPhysics_ManifoldCache_SetFriction(manifoldCache, friction);
}

/*
==============
Physics_ManifoldCache_SetRestitution
==============
*/

void __fastcall Physics_ManifoldCache_SetRestitution(Physics_ManifoldCache *manifoldCache, const float restitution)
{
  HavokPhysics_ManifoldCache_SetRestitution(manifoldCache, restitution);
}

/*
==============
Physics_ManifoldCache_SetStaticFrictionExtra
==============
*/

void __fastcall Physics_ManifoldCache_SetStaticFrictionExtra(Physics_ManifoldCache *manifoldCache, const float staticFrictionExtra)
{
  HavokPhysics_ManifoldCache_SetStaticFrictionExtra(manifoldCache, staticFrictionExtra);
}

/*
==============
Physics_ManifoldCallback_InitForWorld
==============
*/

void __fastcall Physics_ManifoldCallback_InitForWorld(Physics_WorldId worldId)
{
  HavokPhysics_ManifoldCallback_InitForWorld(worldId);
}

/*
==============
Physics_ManifoldCallback_RegisterBody
==============
*/
void Physics_ManifoldCallback_RegisterBody(Physics_WorldId worldId, unsigned int bodyId, void (*callback)(Physics_ManifoldCallback_Data *))
{
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsmanifoldcallback.cpp", 41, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsmanifoldcallback.cpp", 42, ASSERT_TYPE_ASSERT, "( callback )", (const char *)&queryFormat, "callback") )
    __debugbreak();
  HavokPhysics_ManifoldCallback_RegisterBody(worldId, (hknpBodyId)bodyId, callback);
}

/*
==============
Physics_ManifoldCallback_ShutdownForWorld
==============
*/

void __fastcall Physics_ManifoldCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  HavokPhysics_ManifoldCallback_ShutdownForWorld(worldId);
}

/*
==============
Physics_ManifoldCallback_UnregisterBody
==============
*/
void Physics_ManifoldCallback_UnregisterBody(Physics_WorldId worldId, unsigned int bodyId, void (*callback)(Physics_ManifoldCallback_Data *), bool allowCantFind)
{
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsmanifoldcallback.cpp", 53, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsmanifoldcallback.cpp", 54, ASSERT_TYPE_ASSERT, "( callback )", (const char *)&queryFormat, "callback") )
    __debugbreak();
  HavokPhysics_ManifoldCallback_UnregisterBody(worldId, (hknpBodyId)bodyId, callback, allowCantFind);
}

