/*
==============
registerHavokPhysicsShapeListPatches
==============
*/

void __fastcall registerHavokPhysicsShapeListPatches(hkReflect::Version::PatchHandler *man)
{
  ?registerHavokPhysicsShapeListPatches@@YAXAEAVPatchHandler@Version@hkReflect@@@Z(man);
}

/*
==============
registerHavokPhysicsShapeListPatches
==============
*/
void registerHavokPhysicsShapeListPatches(hkReflect::Version::PatchHandler *man)
{
  man->handlePatch(man, &pinfo);
}

