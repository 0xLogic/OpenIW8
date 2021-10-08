/*
==============
CgClientSideEffectsSystemMP::Start
==============
*/

void __fastcall CgClientSideEffectsSystemMP::Start(CgClientSideEffectsSystemMP *this, const bool spawnEffects)
{
  ?Start@CgClientSideEffectsSystemMP@@UEAAX_N@Z(this, spawnEffects);
}

/*
==============
CgClientSideEffectsSystemMP::Start
==============
*/
void CgClientSideEffectsSystemMP::Start(CgClientSideEffectsSystemMP *this, const bool spawnEffects)
{
  bool IsCpMap; 
  const char *v4; 

  if ( !cls.m_activeGameMapName[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_side_effects_mp.cpp", 18, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
      __debugbreak();
  }
  IsCpMap = Com_IsCpMap(cls.m_activeGameMapName);
  v4 = "scripts/cp/maps";
  if ( !IsCpMap )
    v4 = "scripts/mp/maps";
  CgClientSideEffectsSystem::LoadEffects(this, cls.m_activeGameMapName, v4);
  CgClientSideEffectsSystem::StartEffects(this);
}

