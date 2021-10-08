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
  _RBX = physicsObject;
  if ( !physicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\g_physicsobject.inl", 14, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
    __debugbreak();
  _RBX->detailCache.position.v[0] = entityOrigin->v[0];
  _RBX->detailCache.position.v[1] = entityOrigin->v[1];
  _RBX->detailCache.position.v[2] = entityOrigin->v[2];
  if ( ((gEntity->r.modelType - 1) & 0xFD) != 0 )
  {
    _RBX->detailCache.orientationAsQuat.v[0] = entityQuat->v[0];
    _RBX->detailCache.orientationAsQuat.v[1] = entityQuat->v[1];
    _RBX->detailCache.orientationAsQuat.v[2] = entityQuat->v[2];
    _RBX->detailCache.orientationAsQuat.v[3] = entityQuat->v[3];
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rbx+94h], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rbx+98h], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rbx+9Ch], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
      vmovss  dword ptr [rbx+0A0h], xmm1
    }
  }
  _RBX->detailCache.cached = 0;
}

