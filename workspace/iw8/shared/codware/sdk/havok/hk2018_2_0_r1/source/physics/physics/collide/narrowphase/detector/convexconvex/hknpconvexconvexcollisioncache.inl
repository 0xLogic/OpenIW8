/*
==============
hknpManifoldCollisionCache::accessProperty<HavokPhysics_VelocityCachingModifier::VelocityProperties>
==============
*/

HavokPhysics_VelocityCachingModifier::VelocityProperties *__fastcall hknpManifoldCollisionCache::accessProperty<HavokPhysics_VelocityCachingModifier::VelocityProperties>(hknpManifoldCollisionCache *this, hknpManifoldCollisionCache::PropertyKey key)
{
  return ??$accessProperty@UVelocityProperties@HavokPhysics_VelocityCachingModifier@@@hknpManifoldCollisionCache@@QEBAPEAUVelocityProperties@HavokPhysics_VelocityCachingModifier@@W4PropertyKey@0@@Z(this, key);
}

/*
==============
hknpManifoldCollisionCache::accessProperty<HavokPhysics_VelocityCachingModifier::VelocityProperties>
==============
*/
HavokPhysics_VelocityCachingModifier::VelocityProperties *hknpManifoldCollisionCache::accessProperty<HavokPhysics_VelocityCachingModifier::VelocityProperties>(hknpManifoldCollisionCache *this, hknpManifoldCollisionCache::PropertyKey key)
{
  if ( ((unsigned __int8)(1 << key) & this->m_propertyKeysUsed) != 0 )
    return (HavokPhysics_VelocityCachingModifier::VelocityProperties *)((char *)this + 16 * this->m_propertiesStartOffsetDiv16 + ((this->m_propertyOffsets >> (4 * key - 2)) & 0x3C));
  else
    return 0i64;
}

