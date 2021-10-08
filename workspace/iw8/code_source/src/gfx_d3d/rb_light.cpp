/*
==============
R_LightSightTrace
==============
*/

int __fastcall R_LightSightTrace(int oldHitNum, const vec3_t *start, const vec3_t *end, unsigned int bmodelIndex, int brushmask)
{
  return ?R_LightSightTrace@@YAHHAEBTvec3_t@@0IH@Z(oldHitNum, start, end, bmodelIndex, brushmask);
}

/*
==============
R_LightSightTrace
==============
*/
int R_LightSightTrace(int oldHitNum, const vec3_t *start, const vec3_t *end, unsigned int bmodelIndex, int brushmask)
{
  return PhysicsQuery_LegacyLightSightTrace(PHYSICS_WORLD_ID_CLIENT_FIRST, start, end, brushmask);
}

