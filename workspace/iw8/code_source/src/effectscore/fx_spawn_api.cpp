/*
==============
FX_SpawnOrientedEffectForCEntity
==============
*/

ParticleSystemHandle __fastcall FX_SpawnOrientedEffectForCEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int fxEntNum, const int timeValue, centity_t *cent, const Material *markMaterialOverride)
{
  return ?FX_SpawnOrientedEffectForCEntity@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@HHPEAUcentity_t@@PEBUMaterial@@@Z(localClientNum, def, msecBegin, origin, axis, fxEntNum, timeValue, cent, markMaterialOverride);
}

/*
==============
FX_PlayOrientedEffectWithMarkEntity
==============
*/

ParticleSystemHandle __fastcall FX_PlayOrientedEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int startMsec, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly, unsigned __int8 markBoneIndex, const Material *markMaterialOverride)
{
  return ?FX_PlayOrientedEffectWithMarkEntity@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@GI_NEPEBUMaterial@@@Z(localClientNum, def, startMsec, origin, axis, spawnFlags, markEntnum, markGivenModelsOnly, markBoneIndex, markMaterialOverride);
}

/*
==============
FX_PlayBoltedOffsetEffectWithMarkEntity
==============
*/

ParticleSystemHandle __fastcall FX_PlayBoltedOffsetEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int dobjHandle, int boneIndex, const vec3_t *worldOrigin, const tmat33_t<vec3_t> *worldAxis, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly, unsigned __int8 markBoneIndex, const Material *markMaterialOverride)
{
  return ?FX_PlayBoltedOffsetEffectWithMarkEntity@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HHHAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@GI_NEPEBUMaterial@@@Z(localClientNum, def, msecBegin, dobjHandle, boneIndex, worldOrigin, worldAxis, spawnFlags, markEntnum, markGivenModelsOnly, markBoneIndex, markMaterialOverride);
}

/*
==============
FX_SpawnOrientedEffectForClientEffect
==============
*/

ParticleSystemHandle __fastcall FX_SpawnOrientedEffectForClientEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int fxEntNum, const int timeValue, const Material *markMaterialOverride)
{
  return ?FX_SpawnOrientedEffectForClientEffect@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@HHPEBUMaterial@@@Z(localClientNum, def, msecBegin, origin, axis, fxEntNum, timeValue, markMaterialOverride);
}

/*
==============
FX_PlayBoltedEffect
==============
*/

ParticleSystemHandle __fastcall FX_PlayBoltedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int dobjHandle, int boneIndex, unsigned __int16 spawnFlags)
{
  return ?FX_PlayBoltedEffect@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HHHG@Z(localClientNum, def, msecBegin, dobjHandle, boneIndex, spawnFlags);
}

/*
==============
FX_PlayOrientedEffectWithMarkViewmodel
==============
*/

ParticleSystemHandle __fastcall FX_PlayOrientedEffectWithMarkViewmodel(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int startMsec, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned __int8 markBoneIndex, const Material *markMaterialOverride)
{
  return ?FX_PlayOrientedEffectWithMarkViewmodel@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@EPEBUMaterial@@@Z(localClientNum, def, startMsec, origin, axis, markBoneIndex, markMaterialOverride);
}

/*
==============
FX_PlayBoltedToPredictedEnt
==============
*/

ParticleSystemHandle __fastcall FX_PlayBoltedToPredictedEnt(const LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int predictedEntIdx, int boneIndex, unsigned __int16 spawnFlags)
{
  return ?FX_PlayBoltedToPredictedEnt@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HHHG@Z(localClientNum, def, msecBegin, predictedEntIdx, boneIndex, spawnFlags);
}

/*
==============
FX_PlayOrientedEffect
==============
*/

ParticleSystemHandle __fastcall FX_PlayOrientedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int startMsec, const vec3_t *origin, const tmat33_t<vec3_t> *axis)
{
  return ?FX_PlayOrientedEffect@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(localClientNum, def, startMsec, origin, axis);
}

/*
==============
FX_PlayBoltedEffectWithMarkEntity
==============
*/

ParticleSystemHandle __fastcall FX_PlayBoltedEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int dobjHandle, int boneIndex, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly, unsigned __int8 markBoneIndex)
{
  return ?FX_PlayBoltedEffectWithMarkEntity@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HHHGI_NE@Z(localClientNum, def, msecBegin, dobjHandle, boneIndex, spawnFlags, markEntnum, markGivenModelsOnly, markBoneIndex);
}

/*
==============
FX_TransferBoltFromPredictedEntToCEnt
==============
*/

bool __fastcall FX_TransferBoltFromPredictedEntToCEnt(const LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, int predictedEntIdx, int boneIndex, const int centNum)
{
  return ?FX_TransferBoltFromPredictedEntToCEnt@@YA_NW4LocalClientNum_t@@PEBUParticleSystemDef@@HHH@Z(localClientNum, pSystemDef, predictedEntIdx, boneIndex, centNum);
}

/*
==============
FX_PlayDynamicBoltedEffect
==============
*/

ParticleSystemHandle __fastcall FX_PlayDynamicBoltedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int entityNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned int markEntnum, int applyDynamicBoltRotation, unsigned __int16 spawnFlags, const Material *markMaterialOverride)
{
  return ?FX_PlayDynamicBoltedEffect@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HHAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@IHGPEBUMaterial@@@Z(localClientNum, def, msecBegin, entityNum, origin, axis, markEntnum, applyDynamicBoltRotation, spawnFlags, markMaterialOverride);
}

/*
==============
FX_PlayBoltedToDynEntEffect
==============
*/

ParticleSystemHandle __fastcall FX_PlayBoltedToDynEntEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, unsigned int dynEntId, unsigned int partIndex, unsigned __int16 spawnFlags)
{
  return ?FX_PlayBoltedToDynEntEffect@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HIIG@Z(localClientNum, def, msecBegin, dynEntId, partIndex, spawnFlags);
}

/*
==============
FX_PlayBoltedOffsetToDynEntEffectWithMarkEntity
==============
*/

ParticleSystemHandle __fastcall FX_PlayBoltedOffsetToDynEntEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, unsigned int dynEntId, unsigned int partIndex, const vec3_t *worldOrigin, const tmat33_t<vec3_t> *worldAxis)
{
  return ?FX_PlayBoltedOffsetToDynEntEffectWithMarkEntity@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HIIAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(localClientNum, def, msecBegin, dynEntId, partIndex, worldOrigin, worldAxis);
}

/*
==============
FX_PlayBoltedEffect
==============
*/
ParticleSystemHandle FX_PlayBoltedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int dobjHandle, int boneIndex, unsigned __int16 spawnFlags)
{
  const Material *markMaterialOverride; 
  FxSystem *System; 
  __int64 fxEntNum; 
  __int64 timeValue; 
  orientation_t orient; 

  if ( !FX_GetBoneOrientation(localClientNum, dobjHandle, boneIndex, &orient) )
    return 0;
  if ( (unsigned int)dobjHandle >= 0xFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((1 << 12) - 1) )", "dobjHandle doesn't index FX_DOBJ_HANDLE_NONE\n\t%i not in [0, %i)", dobjHandle, 4095) )
    __debugbreak();
  if ( (unsigned int)boneIndex >= 0xFFFF )
  {
    LODWORD(timeValue) = 0xFFFF;
    LODWORD(fxEntNum) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ((1 << 16) - 1) )", "boneIndex doesn't index FX_BONE_INDEX_NONE\n\t%i not in [0, %i)", fxEntNum, timeValue) )
      __debugbreak();
  }
  if ( (boneIndex & 0x8000) != 0 && dobjHandle < 2048 )
  {
    Com_PrintWarning(21, "Trying to play bolted effect on client-only bone (%d) on a non-client-only entity (%d).  This is not currently supported.\n", (unsigned int)boneIndex, (unsigned int)dobjHandle);
    return 0;
  }
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_7;
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, &orient.origin, &orient.axis, dobjHandle, boneIndex, &orIdentity, 0xFFFFFFFF, 0x7FFu, 0, 0, 0, 0xFEu, spawnFlags, markMaterialOverride);
}

/*
==============
FX_PlayBoltedEffectWithMarkEntity
==============
*/
ParticleSystemHandle FX_PlayBoltedEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int dobjHandle, int boneIndex, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly)
{
  const Material *markMaterialOverride; 
  FxSystem *System; 
  __int64 fxEntNum; 
  __int64 timeValue; 
  orientation_t orient; 

  if ( !FX_GetBoneOrientation(localClientNum, dobjHandle, boneIndex, &orient) )
    return 0;
  if ( (unsigned int)dobjHandle >= 0xFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((1 << 12) - 1) )", "dobjHandle doesn't index FX_DOBJ_HANDLE_NONE\n\t%i not in [0, %i)", dobjHandle, 4095) )
    __debugbreak();
  if ( (unsigned int)boneIndex >= 0xFFFF )
  {
    LODWORD(timeValue) = 0xFFFF;
    LODWORD(fxEntNum) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ((1 << 16) - 1) )", "boneIndex doesn't index FX_BONE_INDEX_NONE\n\t%i not in [0, %i)", fxEntNum, timeValue) )
      __debugbreak();
  }
  if ( (boneIndex & 0x8000) != 0 && dobjHandle < 2048 )
  {
    Com_PrintWarning(21, "Trying to play bolted effect on client-only bone (%d) on a non-client-only entity (%d).  This is not currently supported.\n", (unsigned int)boneIndex, (unsigned int)dobjHandle);
    return 0;
  }
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_7;
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, &orient.origin, &orient.axis, dobjHandle, boneIndex, &orIdentity, 0xFFFFFFFF, markEntnum, markGivenModelsOnly, 0, 0, 0xFEu, spawnFlags, markMaterialOverride);
}

/*
==============
FX_PlayBoltedOffsetEffectWithMarkEntity
==============
*/
ParticleSystemHandle FX_PlayBoltedOffsetEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int dobjHandle, int boneIndex, const vec3_t *worldOrigin, const tmat33_t<vec3_t> *worldAxis, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly, unsigned __int8 markBoneIndex, const Material *markMaterialOverride)
{
  float v17; 
  float v18; 
  float v19; 
  FxSystem *System; 
  __int64 fxEntNum; 
  int fxEntNuma; 
  __int64 timeValue; 
  int timeValuea; 
  orientation_t orFirst; 
  orientation_t orient; 
  orientation_t out; 
  orientation_t boltOffset; 

  if ( !FX_GetBoneOrientation(localClientNum, dobjHandle, boneIndex, &orient) )
    return 0;
  if ( (unsigned int)dobjHandle >= 0xFFF )
  {
    timeValuea = 4095;
    fxEntNuma = dobjHandle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((1 << 12) - 1) )", "dobjHandle doesn't index FX_DOBJ_HANDLE_NONE\n\t%i not in [0, %i)", fxEntNuma, timeValuea) )
      __debugbreak();
  }
  if ( (unsigned int)boneIndex >= 0xFFFF )
  {
    LODWORD(timeValue) = 0xFFFF;
    LODWORD(fxEntNum) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ((1 << 16) - 1) )", "boneIndex doesn't index FX_BONE_INDEX_NONE\n\t%i not in [0, %i)", fxEntNum, timeValue) )
      __debugbreak();
  }
  v17 = worldOrigin->v[0];
  orFirst.origin.v[1] = worldOrigin->v[1];
  *(__m256i *)orFirst.axis.m[0].v = *(__m256i *)worldAxis->m[0].v;
  v18 = worldAxis->m[2].v[2];
  orFirst.origin.v[0] = v17;
  v19 = worldOrigin->v[2];
  orFirst.axis.m[2].v[2] = v18;
  orFirst.origin.v[2] = v19;
  OrientationInvert(&orient, &out);
  OrientationConcatenate(&orFirst, &out, &boltOffset);
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, worldOrigin, worldAxis, dobjHandle, boneIndex, &boltOffset, 0xFFFFFFFF, markEntnum, markGivenModelsOnly, 0, 0, markBoneIndex, spawnFlags, markMaterialOverride);
}

/*
==============
FX_PlayBoltedOffsetToDynEntEffectWithMarkEntity
==============
*/
ParticleSystemHandle FX_PlayBoltedOffsetToDynEntEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, unsigned int dynEntId, unsigned int partIndex, const vec3_t *worldOrigin, const tmat33_t<vec3_t> *worldAxis)
{
  const char *pVFXName; 
  const char *Name; 
  float v12; 
  __m256i v13; 
  float v14; 
  float v15; 
  float v16; 
  const Material *markMaterialOverride; 
  unsigned __int8 markBoneIndex; 
  FxSystem *System; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  orientation_t orient; 
  orientation_t orFirst; 
  vec4_t quat; 
  orientation_t out; 
  orientation_t boltOffset; 

  pVFXName = FXRegisteredDef::GetName((FXRegisteredDef *)def);
  if ( !Particle_GetDynEntTransform(localClientNum, dynEntId, partIndex, &outOrigin, &quat, pVFXName) )
  {
    if ( FXRegisteredDef::GetName((FXRegisteredDef *)def) )
      Name = FXRegisteredDef::GetName((FXRegisteredDef *)def);
    else
      Name = "unknown";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 189, ASSERT_TYPE_ASSERT, "( ( dynEntTransformSuccess ) )", "( def->GetName() ? def->GetName() : \"unknown\" ) = %s", Name) )
      __debugbreak();
  }
  QuatToAxis(&quat, &axis);
  orient.origin.v[1] = outOrigin.v[1];
  orient.axis = axis;
  v12 = worldOrigin->v[1];
  orient.origin.v[0] = outOrigin.v[0];
  orFirst.origin.v[1] = v12;
  v13 = *(__m256i *)worldAxis->m[0].v;
  orient.origin.v[2] = outOrigin.v[2];
  v14 = worldOrigin->v[0];
  *(__m256i *)orFirst.axis.m[0].v = v13;
  v15 = worldAxis->m[2].v[2];
  orFirst.origin.v[0] = v14;
  v16 = worldOrigin->v[2];
  orFirst.axis.m[2].v[2] = v15;
  orFirst.origin.v[2] = v16;
  OrientationInvert(&orient, &out);
  OrientationConcatenate(&orFirst, &out, &boltOffset);
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_7;
  markBoneIndex = truncate_cast<unsigned char,unsigned int>(partIndex);
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, worldOrigin, worldAxis, dynEntId, partIndex, &boltOffset, 0xFFFFFFFF, dynEntId, 1, 0, 0, markBoneIndex, 0xAu, markMaterialOverride);
}

/*
==============
FX_PlayBoltedToDynEntEffect
==============
*/
ParticleSystemHandle FX_PlayBoltedToDynEntEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, unsigned int dynEntId, unsigned int partIndex, unsigned __int16 spawnFlags)
{
  const char *pVFXName; 
  const char *v10; 
  const Material *markMaterialOverride; 
  unsigned __int8 markBoneIndex; 
  FxSystem *System; 
  unsigned int markEntnum; 
  vec3_t outOrigin; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  pVFXName = FXRegisteredDef::GetName((FXRegisteredDef *)def);
  if ( !Particle_GetDynEntTransform(localClientNum, dynEntId, partIndex, &outOrigin, &quat, pVFXName) )
  {
    v10 = FXRegisteredDef::GetName((FXRegisteredDef *)def) ? FXRegisteredDef::GetName((FXRegisteredDef *)def) : "unknown";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 165, ASSERT_TYPE_ASSERT, "( ( dynEntTransformSuccess ) )", "( def->GetName() ? def->GetName() : \"unknown\" ) = %s", v10) )
      __debugbreak();
  }
  QuatToAxis(&quat, &axis);
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_7;
  if ( (spawnFlags & 2) != 0 )
    markBoneIndex = truncate_cast<unsigned char,unsigned int>(partIndex);
  else
    markBoneIndex = -2;
  System = FX_GetSystem(localClientNum);
  markEntnum = 2047;
  if ( (spawnFlags & 2) != 0 )
    markEntnum = dynEntId;
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, &outOrigin, &axis, dynEntId, partIndex, &orIdentity, 0xFFFFFFFF, markEntnum, (spawnFlags & 2) != 0, 0, 0, markBoneIndex, spawnFlags | 8, markMaterialOverride);
}

/*
==============
FX_PlayBoltedToPredictedEnt
==============
*/
ParticleSystemHandle FX_PlayBoltedToPredictedEnt(const LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int predictedEntIdx, int boneIndex, unsigned __int16 spawnFlags)
{
  CgPredictedEntitySystem *System; 
  const Material *markMaterialOverride; 
  FxSystem *v12; 
  bool outBoneVisible; 
  vec3_t outPos; 
  vec4_t out; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> axis; 

  FXRegisteredDef::GetName((FXRegisteredDef *)def);
  System = CgPredictedEntitySystem::GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 494, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  outPos.v[0] = 0.0;
  outPos.v[1] = 0.0;
  outPos.v[2] = 0.0;
  out = quat_identity;
  if ( CgPredictedEntitySystem::IsPredictedEntityInUse(System, predictedEntIdx - 2501) && CgPredictedEntitySystem::GetBoneTransform(System, predictedEntIdx - 2501, boneIndex, &outPos, &outAxis, &outBoneVisible) )
    AxisToQuat(&outAxis, &out);
  QuatToAxis(&out, &axis);
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_7;
  v12 = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(v12, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, &outPos, &axis, predictedEntIdx, boneIndex, &orIdentity, 0xFFFFFFFF, 0x7FFu, 0, 0, 0, 0xFEu, spawnFlags | 4, markMaterialOverride);
}

/*
==============
FX_PlayDynamicBoltedEffect
==============
*/
ParticleSystemHandle FX_PlayDynamicBoltedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, int entityNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned int markEntnum, int applyDynamicBoltRotation, unsigned __int16 spawnFlags, const Material *markMaterialOverride)
{
  if ( entityNum >= 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 73, ASSERT_TYPE_ASSERT, "(entityNum < ((1 << 12) - 1))", (const char *)&queryFormat, "entityNum < FX_DOBJ_HANDLE_NONE") )
    __debugbreak();
  return FX_PlayOrientedEffectWithViewmodelInfo(localClientNum, def, msecBegin, origin, axis, spawnFlags, markEntnum, 0, 0, 0, 0xFEu, entityNum, applyDynamicBoltRotation, markMaterialOverride);
}

/*
==============
FX_PlayOrientedEffect
==============
*/
ParticleSystemHandle FX_PlayOrientedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int startMsec, const vec3_t *origin, const tmat33_t<vec3_t> *axis)
{
  const Material *markMaterialOverride; 
  FxSystem *System; 

  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_7;
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, startMsec, origin, axis, 4095, 0xFFFF, &orIdentity, 0xFFFFFFFF, 0x7FFu, 0, 0, 0, 0xFEu, 0, markMaterialOverride);
}

/*
==============
FX_PlayOrientedEffectWithMarkEntity
==============
*/
ParticleSystemHandle FX_PlayOrientedEffectWithMarkEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int startMsec, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly, unsigned __int8 markBoneIndex, const Material *markMaterialOverride)
{
  FxSystem *System; 

  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, startMsec, origin, axis, 4095, 0xFFFF, &orIdentity, 0xFFFFFFFF, markEntnum, markGivenModelsOnly, 0, 0, markBoneIndex, spawnFlags, markMaterialOverride);
}

/*
==============
FX_PlayOrientedEffectWithMarkViewmodel
==============
*/
ParticleSystemHandle FX_PlayOrientedEffectWithMarkViewmodel(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int startMsec, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned __int8 markBoneIndex, const Material *markMaterialOverride)
{
  FxSystem *System; 

  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, startMsec, origin, axis, 4095, 0xFFFF, &orIdentity, 0xFFFFFFFF, 0x7FFu, 1, 1, 0, markBoneIndex, 0, markMaterialOverride);
}

/*
==============
FX_PlayOrientedEffectWithViewmodelInfo
==============
*/
ParticleSystemHandle FX_PlayOrientedEffectWithViewmodelInfo(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, unsigned __int16 spawnFlags, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int markViewmodelClientIndex, unsigned __int8 markBoneIndex, int dynamicBoltEnt, int applyDynamicBoltRotation, const Material *markMaterialOverride)
{
  FxSystem *System; 

  if ( markViewmodelClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 20, ASSERT_TYPE_ASSERT, "(markViewmodelClientIndex == 0)", (const char *)&queryFormat, "markViewmodelClientIndex == 0") )
    __debugbreak();
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, -1, -1, 1, def, msecBegin, origin, axis, dynamicBoltEnt, 0xFFFF, &orIdentity, 0xFFFFFFFF, markEntnum, markGivenModelsOnly, markViewmodel, markViewmodelClientIndex, markBoneIndex, (applyDynamicBoltRotation != 0 ? 0x40 : 0) | spawnFlags, markMaterialOverride);
}

/*
==============
FX_SpawnOrientedEffectForCEntity
==============
*/
ParticleSystemHandle FX_SpawnOrientedEffectForCEntity(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int fxEntNum, const int timeValue, centity_t *cent, const Material *markMaterialOverride)
{
  unsigned __int16 initSpawnFlags; 
  FxSystem *System; 

  if ( Com_GameMode_SupportsFeature(WEAPON_DETONATING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 37, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::FX_ENTITIES ))", "%s\n\tUse FX_SpawnOrientedEffectForClientEffect instead", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::FX_ENTITIES )") )
    __debugbreak();
  initSpawnFlags = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId != 0 ? 0x200 : 0;
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, fxEntNum, timeValue, 0, def, msecBegin, origin, axis, 4095, 0xFFFF, &orIdentity, 0xFFFFFFFF, 0x7FFu, 0, 0, 0, 0xFEu, initSpawnFlags, markMaterialOverride);
}

/*
==============
FX_SpawnOrientedEffectForClientEffect
==============
*/
ParticleSystemHandle FX_SpawnOrientedEffectForClientEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int fxEntNum, const int timeValue, const Material *markMaterialOverride)
{
  FxSystem *System; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_DETONATING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 52, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::FX_ENTITIES ))", "%s\n\tUse FX_SpawnOrientedEffectForCEntity instead", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::FX_ENTITIES )") )
    __debugbreak();
  System = FX_GetSystem(localClientNum);
  return FX_InitSpawnCmd(System, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, fxEntNum, timeValue, 0, def, msecBegin, origin, axis, 4095, 0xFFFF, &orIdentity, 0xFFFFFFFF, 0x7FFu, 0, 0, 0, 0xFEu, 0, markMaterialOverride);
}

/*
==============
FX_TransferBoltFromPredictedEntToCEnt
==============
*/
bool FX_TransferBoltFromPredictedEntToCEnt(const LocalClientNum_t localClientNum, const ParticleSystemDef *pSystemDef, int predictedEntIdx, int boneIndex, const int centNum)
{
  __int64 v5; 
  ParticleManager *v9; 
  __int64 v11; 

  v5 = localClientNum;
  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 148, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v11) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  v9 = &g_particleManager[v5];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn_api.cpp", 150, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
    __debugbreak();
  return ParticleManager::TransferBoltFromPredictedEntToCEnt(v9, pSystemDef, predictedEntIdx, boneIndex, centNum);
}

