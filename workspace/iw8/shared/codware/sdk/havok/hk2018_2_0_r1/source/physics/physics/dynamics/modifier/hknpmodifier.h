/*
==============
hknpModifier::manifoldFullCastCallback
==============
*/

void __fastcall hknpModifier::manifoldFullCastCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBody *cdBodyA, const hknpCdBody *cdBodyB, hknpModifier::ManifoldFullCastCallbackInput *input)
{
  ?manifoldFullCastCallback@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBody@@2PEIAUManifoldFullCastCallbackInput@1@@Z(this, tl, sharedData, cdBodyA, cdBodyB, input);
}

/*
==============
hknpModifier::~hknpModifier
==============
*/

void __fastcall hknpModifier::~hknpModifier(hknpModifier *this)
{
  ??1hknpModifier@@UEAA@XZ(this);
}

/*
==============
hknpModifier::manifoldProcessCallback
==============
*/

void __fastcall hknpModifier::manifoldProcessCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, hknpManifold *manifold)
{
  ?manifoldProcessCallback@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBodyBase@@2PEIAUhknpManifold@@@Z(this, tl, sharedData, cdBodyA, cdBodyB, manifold);
}

/*
==============
hknpModifier::postParticleBodyImpulseApplied
==============
*/

void __fastcall hknpModifier::postParticleBodyImpulseApplied(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, int particleIndex, const hkArrayView<hknpParticleBodyContact> *contacts)
{
  ?postParticleBodyImpulseApplied@hknpModifier@@UEAAXAEBVhknpParticleSimulationThreadContext@@AEBVhknpParticlesCollider@@HAEBV?$hkArrayView@UhknpParticleBodyContact@@@@@Z(this, tl, particlesCollider, particleIndex, contacts);
}

/*
==============
hknpModifier::preConstraintJacobianSetup
==============
*/

void __fastcall hknpModifier::preConstraintJacobianSetup(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpConstraint *constraintIn, hkVector4f *invMassFactorAInOut, hkVector4f *invMassFactorBInOut)
{
  ?preConstraintJacobianSetup@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpConstraint@@AEAVhkVector4f@@2@Z(this, tl, constraintIn, invMassFactorAInOut, invMassFactorBInOut);
}

/*
==============
hknpModifier::postParticlesExitedBroadPhase
==============
*/

void __fastcall hknpModifier::postParticlesExitedBroadPhase(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hkArrayView<int> *particleIndices)
{
  ?postParticlesExitedBroadPhase@hknpModifier@@UEAAXAEBVhknpParticleSimulationThreadContext@@AEBVhknpParticlesCollider@@AEBV?$hkArrayView@H@@@Z(this, tl, particlesCollider, particleIndices);
}

/*
==============
hknpModifier::postContactSolve
==============
*/

void __fastcall hknpModifier::postContactSolve(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifier::ContactSolverCallbackInput *input, const hkVector4f *contactImpulses, float frictionFactor)
{
  ?postContactSolve@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBUContactSolverCallbackInput@1@AEBVhkVector4f@@M@Z(this, tl, input, contactImpulses, frictionFactor);
}

/*
==============
hknpModifier::modifyMotionIntegration
==============
*/

void __fastcall hknpModifier::modifyMotionIntegration(hknpModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hknpMotion *oldVelocityIn, hknpModifier::Velocity *velocityInOut)
{
  ?modifyMotionIntegration@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@UhknpMotionId@@AEAVhknpMotion@@AEAUVelocity@1@@Z(this, tl, motionId, oldVelocityIn, velocityInOut);
}

/*
==============
hknpModifier::manifoldDestroyedCallback
==============
*/

void __fastcall hknpModifier::manifoldDestroyedCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpBodyId *bodyIdA, const hknpBodyId *bodyIdB, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeyA, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeyB, const hknpManifoldCollisionCache *cache)
{
  ?manifoldDestroyedCallback@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpBodyId@@2AEBU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@3PEBUhknpManifoldCollisionCache@@@Z(this, tl, sharedData, bodyIdA, bodyIdB, shapeKeyA, shapeKeyB, cache);
}

/*
==============
hknpModifier::modifyAirDensityAndVelocity
==============
*/

void __fastcall hknpModifier::modifyAirDensityAndVelocity(hknpModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hknpMotion *motion, float *airDensityInOut, hkVector4f *airVelocityInOut)
{
  ?modifyAirDensityAndVelocity@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@UhknpMotionId@@AEAVhknpMotion@@AEAMAEAVhkVector4f@@@Z(this, tl, motionId, motion, airDensityInOut, airVelocityInOut);
}

/*
==============
hknpModifier::postConstraintExport
==============
*/

void __fastcall hknpModifier::postConstraintExport(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifier::ConstraintSolverCallbackInput *input, hkpSolverResults *solverResults)
{
  ?postConstraintExport@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBUConstraintSolverCallbackInput@1@PEAVhkpSolverResults@@@Z(this, tl, input, solverResults);
}

/*
==============
hknpModifier::modifyMotionGravity
==============
*/

void __fastcall hknpModifier::modifyMotionGravity(hknpModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hkVector4f *gravityInOut)
{
  ?modifyMotionGravity@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@UhknpMotionId@@AEAVhkVector4f@@@Z(this, tl, motionId, gravityInOut);
}

/*
==============
hknpModifier::postContactJacobianReused
==============
*/

void __fastcall hknpModifier::postContactJacobianReused(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpSolverInfo *solverInfo, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, hknpManifoldCollisionCache *cache, hknpStreamContactJacobian *jacobian)
{
  ?postContactJacobianReused@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBUhknpSolverInfo@@AEBUhknpCdBodyBase@@2PEAUhknpManifoldCollisionCache@@PEAUhknpStreamContactJacobian@@@Z(this, tl, solverInfo, cdBodyA, cdBodyB, cache, jacobian);
}

/*
==============
hknpModifier::manifoldCreatedCallback
==============
*/

void __fastcall hknpModifier::manifoldCreatedCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBody *cdBodyA, const hknpCdBody *cdBodyB, hknpModifier::ManifoldCreatedCallbackInput *input)
{
  ?manifoldCreatedCallback@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBody@@2PEIAUManifoldCreatedCallbackInput@1@@Z(this, tl, sharedData, cdBodyA, cdBodyB, input);
}

/*
==============
hknpModifier::postParticlesCollidedWithParticles
==============
*/

void __fastcall hknpModifier::postParticlesCollidedWithParticles(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hkArrayView<hknpParticleCollisionPair> *particlesCollided)
{
  ?postParticlesCollidedWithParticles@hknpModifier@@UEAAXAEBVhknpParticleSimulationThreadContext@@AEBVhknpParticlesCollider@@AEBV?$hkArrayView@UhknpParticleCollisionPair@@@@@Z(this, tl, particlesCollider, particlesCollided);
}

/*
==============
hknpModifier::postContactImpulseClipped
==============
*/

void __fastcall hknpModifier::postContactImpulseClipped(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifier::ContactSolverCallbackInput *input, const float *sumContactImpulseUnclipped, const float *sumContactImpulseClipped)
{
  ?postContactImpulseClipped@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBUContactSolverCallbackInput@1@AEBM2@Z(this, tl, input, sumContactImpulseUnclipped, sumContactImpulseClipped);
}

/*
==============
hknpModifier::postContactJacobianSetup
==============
*/

void __fastcall hknpModifier::postContactJacobianSetup(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpSolverInfo *solverInfo, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, const hknpManifoldCollisionCache *cache, const hknpManifold *manifold, hknpStreamContactJacobian *jacobian)
{
  ?postContactJacobianSetup@hknpModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBUhknpSolverInfo@@AEBUhknpCdBodyBase@@2PEBUhknpManifoldCollisionCache@@PEBUhknpManifold@@PEAUhknpStreamContactJacobian@@@Z(this, tl, solverInfo, cdBodyA, cdBodyB, cache, manifold, jacobian);
}

/*
==============
hknpModifier::postParticleParticleImpulseApplied
==============
*/

void __fastcall hknpModifier::postParticleParticleImpulseApplied(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hknpParticleParticleContact *hit)
{
  ?postParticleParticleImpulseApplied@hknpModifier@@UEAAXAEBVhknpParticleSimulationThreadContext@@AEBVhknpParticlesCollider@@AEBUhknpParticleParticleContact@@@Z(this, tl, particlesCollider, hit);
}

/*
==============
hknpModifier::postParticlesCollidedWithBodies
==============
*/

void __fastcall hknpModifier::postParticlesCollidedWithBodies(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hkArrayView<int> *particlesCollided)
{
  ?postParticlesCollidedWithBodies@hknpModifier@@UEAAXAEBVhknpParticleSimulationThreadContext@@AEBVhknpParticlesCollider@@AEBV?$hkArrayView@H@@@Z(this, tl, particlesCollider, particlesCollided);
}

/*
==============
hknpModifier::postCompositeQueryAabb
==============
*/

int __fastcall hknpModifier::postCompositeQueryAabb(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpAabbQuery *aabbQuery, const hknpShapeQueryInfo *queryShapeInfo, const hknpShapeQueryInfo *targetShapeInfo, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *keys, int numKeys, int maxNumKeys)
{
  return ?postCompositeQueryAabb@hknpModifier@@UEAAHAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpAabbQuery@@AEBUhknpShapeQueryInfo@@3PEAU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@HH@Z(this, tl, sharedData, aabbQuery, queryShapeInfo, targetShapeInfo, keys, numKeys, maxNumKeys);
}

/*
==============
hknpModifier::~hknpModifier
==============
*/
void hknpModifier::~hknpModifier(hknpModifier *this)
{
  this->__vftable = (hknpModifier_vtbl *)hknpModifier::`vftable';
}

/*
==============
hknpModifier::manifoldCreatedCallback
==============
*/
void hknpModifier::manifoldCreatedCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBody *cdBodyA)
{
  ;
}

/*
==============
hknpModifier::manifoldDestroyedCallback
==============
*/
void hknpModifier::manifoldDestroyedCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpBodyId *bodyIdA)
{
  ;
}

/*
==============
hknpModifier::manifoldFullCastCallback
==============
*/
void hknpModifier::manifoldFullCastCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBody *cdBodyA)
{
  ;
}

/*
==============
hknpModifier::manifoldProcessCallback
==============
*/
void hknpModifier::manifoldProcessCallback(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBodyBase *cdBodyA)
{
  ;
}

/*
==============
hknpModifier::modifyAirDensityAndVelocity
==============
*/
void hknpModifier::modifyAirDensityAndVelocity(hknpModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hknpMotion *motion)
{
  ;
}

/*
==============
hknpModifier::modifyMotionGravity
==============
*/
void hknpModifier::modifyMotionGravity(hknpModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hkVector4f *gravityInOut)
{
  ;
}

/*
==============
hknpModifier::modifyMotionIntegration
==============
*/
void hknpModifier::modifyMotionIntegration(hknpModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hknpMotion *oldVelocityIn)
{
  ;
}

/*
==============
hknpModifier::postCompositeQueryAabb
==============
*/
__int64 hknpModifier::postCompositeQueryAabb(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpAabbQuery *aabbQuery, const hknpShapeQueryInfo *queryShapeInfo, const hknpShapeQueryInfo *targetShapeInfo, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *keys, int numKeys)
{
  return (unsigned int)numKeys;
}

/*
==============
hknpModifier::postConstraintExport
==============
*/
void hknpModifier::postConstraintExport(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifier::ConstraintSolverCallbackInput *input, hkpSolverResults *solverResults)
{
  ;
}

/*
==============
hknpModifier::postContactImpulseClipped
==============
*/
void hknpModifier::postContactImpulseClipped(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifier::ContactSolverCallbackInput *input, const float *sumContactImpulseUnclipped)
{
  ;
}

/*
==============
hknpModifier::postContactJacobianReused
==============
*/
void hknpModifier::postContactJacobianReused(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpSolverInfo *solverInfo, const hknpCdBodyBase *cdBodyA)
{
  ;
}

/*
==============
hknpModifier::postContactJacobianSetup
==============
*/
void hknpModifier::postContactJacobianSetup(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpSolverInfo *solverInfo, const hknpCdBodyBase *cdBodyA)
{
  ;
}

/*
==============
hknpModifier::postContactSolve
==============
*/
void hknpModifier::postContactSolve(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpModifier::ContactSolverCallbackInput *input, const hkVector4f *contactImpulses)
{
  ;
}

/*
==============
hknpModifier::postParticleBodyImpulseApplied
==============
*/
void hknpModifier::postParticleBodyImpulseApplied(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, int particleIndex)
{
  ;
}

/*
==============
hknpModifier::postParticleParticleImpulseApplied
==============
*/
void hknpModifier::postParticleParticleImpulseApplied(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hknpParticleParticleContact *hit)
{
  ;
}

/*
==============
hknpModifier::postParticlesCollidedWithBodies
==============
*/
void hknpModifier::postParticlesCollidedWithBodies(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hkArrayView<int> *particlesCollided)
{
  ;
}

/*
==============
hknpModifier::postParticlesCollidedWithParticles
==============
*/
void hknpModifier::postParticlesCollidedWithParticles(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hkArrayView<hknpParticleCollisionPair> *particlesCollided)
{
  ;
}

/*
==============
hknpModifier::postParticlesExitedBroadPhase
==============
*/
void hknpModifier::postParticlesExitedBroadPhase(hknpModifier *this, const hknpParticleSimulationThreadContext *tl, const hknpParticlesCollider *particlesCollider, const hkArrayView<int> *particleIndices)
{
  ;
}

/*
==============
hknpModifier::preConstraintJacobianSetup
==============
*/
void hknpModifier::preConstraintJacobianSetup(hknpModifier *this, const hknpSimulationThreadContext *tl, const hknpConstraint *constraintIn, hkVector4f *invMassFactorAInOut)
{
  ;
}

