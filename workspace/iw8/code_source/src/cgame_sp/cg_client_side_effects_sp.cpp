/*
==============
CgClientSideEffectsSystemSP::ResetSounds
==============
*/

void __fastcall CgClientSideEffectsSystemSP::ResetSounds(CgClientSideEffectsSystemSP *this)
{
  ?ResetSounds@CgClientSideEffectsSystemSP@@AEAAXXZ(this);
}

/*
==============
CgClientSideEffectsSystemSP::Restore
==============
*/

void __fastcall CgClientSideEffectsSystemSP::Restore(CgClientSideEffectsSystemSP *this, MemoryFile *const memFile, const LocalClientNum_t localClientNum)
{
  ?Restore@CgClientSideEffectsSystemSP@@QEAAXQEAUMemoryFile@@W4LocalClientNum_t@@@Z(this, memFile, localClientNum);
}

/*
==============
CgClientSideEffectsSystemSP::Save
==============
*/

void __fastcall CgClientSideEffectsSystemSP::Save(CgClientSideEffectsSystemSP *this, MemoryFile *const memFile, const LocalClientNum_t localClientNum)
{
  ?Save@CgClientSideEffectsSystemSP@@QEAAXQEAUMemoryFile@@W4LocalClientNum_t@@@Z(this, memFile, localClientNum);
}

/*
==============
CgClientSideEffectsSystemSP::Start
==============
*/

void __fastcall CgClientSideEffectsSystemSP::Start(CgClientSideEffectsSystemSP *this, const bool spawnEffects)
{
  ?Start@CgClientSideEffectsSystemSP@@UEAAX_N@Z(this, spawnEffects);
}

/*
==============
CgClientSideEffectsSystemSP::ResetSounds
==============
*/

void __fastcall CgClientSideEffectsSystemSP::ResetSounds(CgClientSideEffectsSystemSP *this)
{
  CgClientSideEffectsSystem::ClearMemory(this);
}

/*
==============
CgClientSideEffectsSystemSP::Restore
==============
*/
void CgClientSideEffectsSystemSP::Restore(CgClientSideEffectsSystemSP *this, MemoryFile *const memFile, const LocalClientNum_t localClientNum)
{
  MapEnts *mapEnts; 
  __int64 v6; 
  unsigned int i; 
  __int64 v8; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_client_side_effects_sp.cpp", 56, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  v6 = 0i64;
  for ( i = 0; i < mapEnts->clientSideEffects.exploderCount; this->m_activeExploderFXHandles[v8] = p )
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    v8 = i++;
  }
  if ( mapEnts->clientSideEffects.oneshotEffectCount )
  {
    do
    {
      MemFile_ReadData(memFile, 4ui64, &p);
      this->m_activeOneshotFXHandles[v6] = p;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < mapEnts->clientSideEffects.oneshotEffectCount );
  }
}

/*
==============
CgClientSideEffectsSystemSP::Save
==============
*/
void CgClientSideEffectsSystemSP::Save(CgClientSideEffectsSystemSP *this, MemoryFile *const memFile, const LocalClientNum_t localClientNum)
{
  MapEnts *mapEnts; 
  __int64 v6; 
  unsigned int i; 
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_client_side_effects_sp.cpp", 37, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  v6 = 0i64;
  for ( i = 0; i < mapEnts->clientSideEffects.exploderCount; ++i )
  {
    p = this->m_activeExploderFXHandles[i];
    MemFile_WriteData(memFile, 4ui64, &p);
  }
  if ( mapEnts->clientSideEffects.oneshotEffectCount )
  {
    do
    {
      p = this->m_activeOneshotFXHandles[v6];
      MemFile_WriteData(memFile, 4ui64, &p);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < mapEnts->clientSideEffects.oneshotEffectCount );
  }
}

/*
==============
CgClientSideEffectsSystemSP::Start
==============
*/
void CgClientSideEffectsSystemSP::Start(CgClientSideEffectsSystemSP *this, const bool spawnEffects)
{
  if ( CG_HaveMapEntsEffects() )
  {
    if ( !cls.m_activeGameMapName[0] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
        __debugbreak();
      if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_client_side_effects_sp.cpp", 12, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
        __debugbreak();
    }
    CgClientSideEffectsSystem::LoadEffects(this, cls.m_activeGameMapName, "scripts/sp/maps");
    if ( spawnEffects )
    {
      CgClientSideEffectsSystem::StartEffects(this);
    }
    else
    {
      CgClientSideEffectsSystem::ClearMemory(this);
      CgClientSideEffectsSystem::StartSounds(this);
    }
  }
}

