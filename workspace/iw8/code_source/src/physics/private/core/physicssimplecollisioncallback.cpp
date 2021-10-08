/*
==============
Physics_SimpleCollisionCallback_ShutdownForWorld
==============
*/

void __fastcall Physics_SimpleCollisionCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  ?Physics_SimpleCollisionCallback_ShutdownForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_SimpleCollisionCallback_RegisterBody
==============
*/

void __fastcall Physics_SimpleCollisionCallback_RegisterBody(Physics_WorldId worldId, unsigned int bodyId, void (__fastcall *callback)(Physics_SimpleCollisionCallback_Data *))
{
  ?Physics_SimpleCollisionCallback_RegisterBody@@YAXW4Physics_WorldId@@IP6AXPEAUPhysics_SimpleCollisionCallback_Data@@@Z@Z(worldId, bodyId, callback);
}

/*
==============
Physics_SimpleCollisionCallback_InitForWorld
==============
*/

void __fastcall Physics_SimpleCollisionCallback_InitForWorld(Physics_WorldId worldId)
{
  ?Physics_SimpleCollisionCallback_InitForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_SimpleCollisionCallback_UnregisterBody
==============
*/

void __fastcall Physics_SimpleCollisionCallback_UnregisterBody(Physics_WorldId worldId, unsigned int bodyId, void (__fastcall *callback)(Physics_SimpleCollisionCallback_Data *), bool allowCantFind)
{
  ?Physics_SimpleCollisionCallback_UnregisterBody@@YAXW4Physics_WorldId@@IP6AXPEAUPhysics_SimpleCollisionCallback_Data@@@Z_N@Z(worldId, bodyId, callback, allowCantFind);
}

/*
==============
Physics_SimpleCollisionCallback_InitForWorld
==============
*/

void __fastcall Physics_SimpleCollisionCallback_InitForWorld(Physics_WorldId worldId)
{
  HavokPhysics_SimpleCollisionCallback_InitForWorld(worldId);
}

/*
==============
Physics_SimpleCollisionCallback_RegisterBody
==============
*/
void Physics_SimpleCollisionCallback_RegisterBody(Physics_WorldId worldId, unsigned int bodyId, void (*callback)(Physics_SimpleCollisionCallback_Data *))
{
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicssimplecollisioncallback.cpp", 41, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicssimplecollisioncallback.cpp", 42, ASSERT_TYPE_ASSERT, "( callback )", (const char *)&queryFormat, "callback") )
    __debugbreak();
  HavokPhysics_SimpleCollisionCallback_RegisterBody(worldId, (hknpBodyId)bodyId, callback);
}

/*
==============
Physics_SimpleCollisionCallback_ShutdownForWorld
==============
*/

void __fastcall Physics_SimpleCollisionCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  HavokPhysics_SimpleCollisionCallback_ShutdownForWorld(worldId);
}

/*
==============
Physics_SimpleCollisionCallback_UnregisterBody
==============
*/
void Physics_SimpleCollisionCallback_UnregisterBody(Physics_WorldId worldId, unsigned int bodyId, void (*callback)(Physics_SimpleCollisionCallback_Data *), bool allowCantFind)
{
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicssimplecollisioncallback.cpp", 53, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicssimplecollisioncallback.cpp", 54, ASSERT_TYPE_ASSERT, "( callback )", (const char *)&queryFormat, "callback") )
    __debugbreak();
  HavokPhysics_SimpleCollisionCallback_UnregisterBody(worldId, (hknpBodyId)bodyId, callback, allowCantFind);
}

