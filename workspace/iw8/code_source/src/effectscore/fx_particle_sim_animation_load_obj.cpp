/*
==============
FX_ParticleSimAnimation_Register
==============
*/

FxParticleSimAnimation *__fastcall FX_ParticleSimAnimation_Register(const char *name, bool quad)
{
  return ?FX_ParticleSimAnimation_Register@@YAPEAUFxParticleSimAnimation@@PEBD_N@Z(name, quad);
}

/*
==============
FX_ParticleSimAnimation_Register
==============
*/
FxParticleSimAnimation *FX_ParticleSimAnimation_Register(const char *name, bool quad)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_particle_sim_animation_load_obj.cpp", 197, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_particle_sim_animation_load_obj.cpp", 188, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_PARTICLE_SIM_ANIMATION, name, 1).particleSimAnimation;
}

