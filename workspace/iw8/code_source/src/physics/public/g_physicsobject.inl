/*
==============
G_PhysicsObject_InitDetailCache
==============
*/

void __fastcall G_PhysicsObject_InitDetailCache(const gentity_s *gEntity, G_PhysicsObject *physicsObject, const vec3_t *entityOrigin, const vec4_t *entityQuat)
{
  ?G_PhysicsObject_InitDetailCache@@YAXPEBUgentity_s@@PEAVG_PhysicsObject@@AEBTvec3_t@@AEBTvec4_t@@@Z(gEntity, physicsObject, entityOrigin, entityQuat);
}

/*
==============
G_PhysicsObject_InitDetailCache
==============
*/
void G_PhysicsObject_InitDetailCache(const gentity_s *gEntity, G_PhysicsObject *physicsObject, const vec3_t *entityOrigin, const vec4_t *entityQuat)
{
  if ( !physicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\g_physicsobject.inl", 14, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
    __debugbreak();
  physicsObject->detailCache.position.v[0] = entityOrigin->v[0];
  physicsObject->detailCache.position.v[1] = entityOrigin->v[1];
  physicsObject->detailCache.position.v[2] = entityOrigin->v[2];
  if ( ((gEntity->r.modelType - 1) & 0xFD) != 0 )
  {
    physicsObject->detailCache.orientationAsQuat.v[0] = entityQuat->v[0];
    physicsObject->detailCache.orientationAsQuat.v[1] = entityQuat->v[1];
    physicsObject->detailCache.orientationAsQuat.v[2] = entityQuat->v[2];
    physicsObject->detailCache.orientationAsQuat.v[3] = entityQuat->v[3];
  }
  else
  {
    physicsObject->detailCache.orientationAsQuat = quat_identity;
  }
  physicsObject->detailCache.cached = 0;
}

