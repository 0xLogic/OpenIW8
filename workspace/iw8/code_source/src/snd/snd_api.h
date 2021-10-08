/*
==============
SND_PhysicsQuery
==============
*/

bool __fastcall SND_PhysicsQuery(void *data)
{
  return ?SND_PhysicsQuery@@YA_NPEAX@Z(data);
}

/*
==============
SND_PhysicsQuery
==============
*/
bool SND_PhysicsQuery(void *data)
{
  return !SND_CanDoPhysicsQuery();
}

