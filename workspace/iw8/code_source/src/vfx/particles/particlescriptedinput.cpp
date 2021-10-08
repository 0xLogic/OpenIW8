/*
==============
Particle_ParseToScriptedInputNodeDef
==============
*/

void __fastcall Particle_ParseToScriptedInputNodeDef(ParticleSystemDef *pParticleSystemDef, ParticleScriptedInputNodeDef *pScriptedInputNodeDef, const char *pData)
{
  ?Particle_ParseToScriptedInputNodeDef@@YAXPEAUParticleSystemDef@@PEATParticleScriptedInputNodeDef@@PEBD@Z(pParticleSystemDef, pScriptedInputNodeDef, pData);
}

/*
==============
Particle_ParseToScriptedInputNodeDef
==============
*/
void Particle_ParseToScriptedInputNodeDef(ParticleSystemDef *pParticleSystemDef, ParticleScriptedInputNodeDef *pScriptedInputNodeDef, const char *pData)
{
  if ( !pParticleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlescriptedinput.cpp", 12, ASSERT_TYPE_ASSERT, "(pParticleSystemDef)", (const char *)&queryFormat, "pParticleSystemDef") )
    __debugbreak();
  if ( !pScriptedInputNodeDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlescriptedinput.cpp", 13, ASSERT_TYPE_ASSERT, "(pScriptedInputNodeDef)", (const char *)&queryFormat, "pScriptedInputNodeDef") )
    __debugbreak();
  if ( !pData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlescriptedinput.cpp", 14, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  if ( pScriptedInputNodeDef->nodeBase.m_type )
  {
    if ( pScriptedInputNodeDef->nodeBase.m_type == PARTICLE_SCRIPTED_INPUT_NODE_EMITTER_DISABLE )
      ParticleScriptedInputNodeEmitterDisable::Parse(pParticleSystemDef, pData, &pScriptedInputNodeDef->nodeBase, 0);
  }
  else
  {
    ParticleScriptedInputNodeKVP::Parse(pParticleSystemDef, pData, &pScriptedInputNodeDef->nodeBase, 0);
  }
}

