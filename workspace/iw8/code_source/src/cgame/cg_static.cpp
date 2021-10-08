/*
==============
CgStatic::GetPlayerEvents
==============
*/

BgPlayerEvents *__fastcall CgStatic::GetPlayerEvents(CgStatic *this, const int entityIndex)
{
  return ?GetPlayerEvents@CgStatic@@UEAAPEAVBgPlayerEvents@@H@Z(this, entityIndex);
}

/*
==============
CgStatic::CreateWeaponPhysics
==============
*/

void __fastcall CgStatic::CreateWeaponPhysics(CgStatic *this, const DObj *obj, const Weapon *heldWeapon)
{
  ?CreateWeaponPhysics@CgStatic@@UEAAXPEBUDObj@@AEBUWeapon@@@Z(this, obj, heldWeapon);
}

/*
==============
CgStatic::GetLeftHandIKTargetModel
==============
*/

XModel *__fastcall CgStatic::GetLeftHandIKTargetModel(CgStatic *this)
{
  return ?GetLeftHandIKTargetModel@CgStatic@@UEBAPEAUXModel@@XZ(this);
}

/*
==============
CgStatic::GetRightHandIKTargetModel
==============
*/

XModel *__fastcall CgStatic::GetRightHandIKTargetModel(CgStatic *this)
{
  return ?GetRightHandIKTargetModel@CgStatic@@UEBAPEAUXModel@@XZ(this);
}

/*
==============
CgStatic::UsingLowLodClientEntityEvents
==============
*/

bool __fastcall CgStatic::UsingLowLodClientEntityEvents(CgStatic *this)
{
  return ?UsingLowLodClientEntityEvents@CgStatic@@UEBA_NXZ(this);
}

/*
==============
CgStatic::IsWeaponWorldModelLoaded
==============
*/

bool __fastcall CgStatic::IsWeaponWorldModelLoaded(CgStatic *this, const Weapon *r_weapon)
{
  return ?IsWeaponWorldModelLoaded@CgStatic@@UEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
CgStatic::IsClient
==============
*/

bool __fastcall CgStatic::IsClient(CgStatic *this)
{
  return ?IsClient@CgStatic@@UEBA_NXZ(this);
}

/*
==============
CgStatic::CreateWeaponPhysics
==============
*/
void CgStatic::CreateWeaponPhysics(CgStatic *this, const DObj *obj, const Weapon *heldWeapon)
{
  __int64 entnum; 
  unsigned int v6; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int64 v9; 

  if ( ((unsigned __int8 (__fastcall *)(CgStatic *, _QWORD, const Weapon *))this->HasCharacterInfo)(this, (unsigned int)obj->entnum - 1, heldWeapon) )
  {
    entnum = obj->entnum;
    v6 = entnum - 1;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( v6 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v9) = entnum - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v9, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(14792 * entnum + *(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] - 14792);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v6);
    }
    CharacterInfo->createWeaponPhysics = 1;
  }
}

/*
==============
CgStatic::GetLeftHandIKTargetModel
==============
*/
XModel *CgStatic::GetLeftHandIKTargetModel(CgStatic *this)
{
  return cg_tagIKTargetModelLeft;
}

/*
==============
CgStatic::GetPlayerEvents
==============
*/
BgPlayerEvents *CgStatic::GetPlayerEvents(CgStatic *this, const int entityIndex)
{
  return 0i64;
}

/*
==============
CgStatic::GetRightHandIKTargetModel
==============
*/
XModel *CgStatic::GetRightHandIKTargetModel(CgStatic *this)
{
  return cg_tagIKTargetModelRight;
}

/*
==============
CgStatic::IsClient
==============
*/
char CgStatic::IsClient(CgStatic *this)
{
  return 1;
}

/*
==============
CgStatic::IsWeaponWorldModelLoaded
==============
*/
__int64 CgStatic::IsWeaponWorldModelLoaded(CgStatic *this, const Weapon *r_weapon)
{
  __int64 m_localClientNum; 
  __int64 v5; 
  __int64 v6; 
  LocalClientNum_t v7; 

  m_localClientNum = this->m_localClientNum;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    v7 = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v7) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v5) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[m_localClientNum] )
  {
    LODWORD(v6) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v6) )
      __debugbreak();
  }
  return ((__int64 (__fastcall *)(CgWeaponSystem *, const Weapon *))CgWeaponSystem::ms_weaponSystemArray[m_localClientNum]->IsWeaponWorldModelLoaded)(CgWeaponSystem::ms_weaponSystemArray[m_localClientNum], r_weapon);
}

/*
==============
CgStatic::UsingLowLodClientEntityEvents
==============
*/
__int64 CgStatic::UsingLowLodClientEntityEvents(CgStatic *this)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals )
    return LocalClientGlobals->m_usingLowLodClientEntityEvents;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.cpp", 72, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return MEMORY[0xC10B5];
}

