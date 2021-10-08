/*
==============
ParticleEmitterDef::GetDataFlags
==============
*/

ParticleDataFlags __fastcall ParticleEmitterDef::GetDataFlags(ParticleEmitterDef *this)
{
  return ?GetDataFlags@ParticleEmitterDef@@QEBA?AW4ParticleDataFlags@@XZ(this);
}

/*
==============
ParticleSystemDef::SetOcclusionOverrideEmitter
==============
*/

void __fastcall ParticleSystemDef::SetOcclusionOverrideEmitter(ParticleSystemDef *this, ParticleEmitterDef *emitter)
{
  ?SetOcclusionOverrideEmitter@ParticleSystemDef@@QEAAXPEAUParticleEmitterDef@@@Z(this, emitter);
}

/*
==============
ParticleSystemDef::SetOcclusionOverrideEmitter
==============
*/
void ParticleSystemDef::SetOcclusionOverrideEmitter(ParticleSystemDef *this, ParticleEmitterDef *emitter)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int numEmitters; 
  __int64 v6; 
  __int64 v7; 

  v2 = (unsigned __int128)(((char *)emitter - (char *)this->emitterDefs) * (__int128)0x6666666666666667i64) >> 64;
  v4 = ((unsigned __int64)v2 >> 63) + (v2 >> 6);
  if ( (unsigned __int64)(v4 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v4, "signed", v4) )
    __debugbreak();
  numEmitters = this->numEmitters;
  this->occlusionOverrideEmitterIndex = v4;
  if ( (unsigned int)v4 >= numEmitters )
  {
    LODWORD(v7) = numEmitters;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particledb.h", 3080, ASSERT_TYPE_ASSERT, "(unsigned)( occlusionOverrideEmitterIndex ) < (unsigned)( numEmitters )", "occlusionOverrideEmitterIndex doesn't index numEmitters\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
}

/*
==============
ParticleEmitterDef::GetDataFlags
==============
*/
__int64 ParticleEmitterDef::GetDataFlags(ParticleEmitterDef *this)
{
  if ( this->m_dataFlags )
    return (unsigned int)this->m_dataFlags;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particledb.h", 2954, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
    __debugbreak();
  return (unsigned int)this->m_dataFlags;
}

