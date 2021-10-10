/*
==============
DamageParts_Get
==============
*/

DamageParts *__fastcall DamageParts_Get(int partsIdx)
{
  return ?DamageParts_Get@@YAPEAVDamageParts@@H@Z(partsIdx);
}

/*
==============
DamageParts::ApplyDamage
==============
*/

int __fastcall DamageParts::ApplyDamage(DamageParts *this, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName)
{
  return ?ApplyDamage@DamageParts@@QEAAHPEBUgentity_s@@0PEBTvec3_t@@1HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@@Z(this, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
}

/*
==============
InitDamageParts
==============
*/

void __fastcall InitDamageParts(scrContext_t *scrContext, scr_entref_t entref)
{
  ?InitDamageParts@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DamageParts::DamageParts
==============
*/

void __fastcall DamageParts::DamageParts(DamageParts *this)
{
  ??0DamageParts@@QEAA@XZ(this);
}

/*
==============
Scr_DamageDamagePart
==============
*/

void __fastcall Scr_DamageDamagePart(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_DamageDamagePart@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DamageParts_Update
==============
*/

void DamageParts_Update(void)
{
  ?DamageParts_Update@@YAXXZ();
}

/*
==============
DamageParts_Free
==============
*/

void __fastcall DamageParts_Free(int partsIdx)
{
  ?DamageParts_Free@@YAXH@Z(partsIdx);
}

/*
==============
DamageParts::AddDamageSubPartDamageNotify
==============
*/

void __fastcall DamageParts::AddDamageSubPartDamageNotify(DamageParts *this, int iPart, int iSubPart, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName, const scr_string_t subPartName)
{
  ?AddDamageSubPartDamageNotify@DamageParts@@QEAAXHHPEBUgentity_s@@0PEBTvec3_t@@1HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@55@Z(this, iPart, iSubPart, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName, partName, subPartName);
}

/*
==============
Scr_DestroyAllDamageParts
==============
*/

void __fastcall Scr_DestroyAllDamageParts(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_DestroyAllDamageParts@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DamageParts::ApplyDamage_Internal
==============
*/

int __fastcall DamageParts::ApplyDamage_Internal(DamageParts *this, unsigned int partIndex, unsigned int subPartIndex, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName)
{
  return ?ApplyDamage_Internal@DamageParts@@QEAAHIIPEBUgentity_s@@0PEBTvec3_t@@1HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@@Z(this, partIndex, subPartIndex, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
}

/*
==============
DamageParts::AddDamagePartNotify
==============
*/

void __fastcall DamageParts::AddDamagePartNotify(DamageParts *this, int iPart, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName)
{
  ?AddDamagePartNotify@DamageParts@@QEAAXHPEBUgentity_s@@0PEBTvec3_t@@1HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@5@Z(this, iPart, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName, partName);
}

/*
==============
Scr_SetDamagePartHealth
==============
*/

void __fastcall Scr_SetDamagePartHealth(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_SetDamagePartHealth@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DamageParts::FillDamageParams
==============
*/

void __fastcall DamageParts::FillDamageParams(DamageParts *this, DamageParts::DamageParams *pParams, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName)
{
  ?FillDamageParams@DamageParts@@QEAAXPEAUDamageParams@1@PEBUgentity_s@@1PEBTvec3_t@@2HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@6@Z(this, pParams, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName, partName);
}

/*
==============
AddDamagePart
==============
*/

void __fastcall AddDamagePart(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AddDamagePart@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DamageParts::AddDamageSubPartNotify
==============
*/

void __fastcall DamageParts::AddDamageSubPartNotify(DamageParts *this, int iPart, int iSubPart, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName, const scr_string_t subPartName, int state)
{
  ?AddDamageSubPartNotify@DamageParts@@QEAAXHHPEBUgentity_s@@0PEBTvec3_t@@1HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@55H@Z(this, iPart, iSubPart, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName, partName, subPartName, state);
}

/*
==============
DamageParts::GetDamageSubPartState
==============
*/

int __fastcall DamageParts::GetDamageSubPartState(DamageParts *this, int iPart)
{
  return ?GetDamageSubPartState@DamageParts@@QEAAHH@Z(this, iPart);
}

/*
==============
Scr_DestroyDamagePart
==============
*/

void __fastcall Scr_DestroyDamagePart(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_DestroyDamagePart@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
Scr_GetDamagePartHealth
==============
*/

void __fastcall Scr_GetDamagePartHealth(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_GetDamagePartHealth@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DamageParts::ApplyRadiusDamage
==============
*/

int __fastcall DamageParts::ApplyRadiusDamage(DamageParts *this, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName)
{
  return ?ApplyRadiusDamage@DamageParts@@QEAAHPEBUgentity_s@@0PEBTvec3_t@@1HIHAEBUWeapon@@_NW4hitLocation_t@@HW4scr_string_t@@@Z(this, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
}

/*
==============
DamageParts::ProcessPartNotifies
==============
*/

void __fastcall DamageParts::ProcessPartNotifies(DamageParts *this, DamageParts::DamageParams *deadPartNotifies, int numParts, const scr_string_t notify, bool bIncludeTagName, bool bIncludeSubPartName, bool bIncludeSubPartState)
{
  ?ProcessPartNotifies@DamageParts@@QEAAXPEAUDamageParams@1@HW4scr_string_t@@_N22@Z(this, deadPartNotifies, numParts, notify, bIncludeTagName, bIncludeSubPartName, bIncludeSubPartState);
}

/*
==============
DamageParts::IsSubPartAlive
==============
*/

bool __fastcall DamageParts::IsSubPartAlive(DamageParts *this, const scr_string_t damageTag)
{
  return ?IsSubPartAlive@DamageParts@@QEBA_NW4scr_string_t@@@Z(this, damageTag);
}

/*
==============
DamageParts::DamageParts
==============
*/
void DamageParts::DamageParts(DamageParts *this)
{
  this->m_damagePartsCount = 0;
  memset_0(this->m_damageParts, 0, sizeof(this->m_damageParts));
  memset_0(this->m_damagePartNotifies, 0, sizeof(this->m_damagePartNotifies));
  memset_0(this->m_damageSubPartNotifies, 0, 0xF78ui64);
  this->m_nextSubPartDamageNotify = 0;
}

/*
==============
AddDamagePart
==============
*/
void AddDamagePart(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gentity_s *v4; 
  sentient_s *sentient; 
  const char *v6; 
  const char *v7; 
  DamageParts *v8; 
  unsigned int m_damagePartsCount; 
  const char *v10; 
  __int64 v11; 
  scr_string_t ConstString; 
  int Int; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  scr_string_t v18; 
  scr_string_t v19; 
  scr_string_t ConstLowercaseString; 
  unsigned int v21; 
  const char *v22; 
  const char *v23; 
  __int64 v24; 
  scr_string_t v25; 
  scr_string_t v26; 
  scr_string_t v27; 

  Entity = GetEntity(entref);
  v4 = Entity;
  if ( Entity )
  {
    sentient = Entity->sentient;
    if ( sentient )
    {
      if ( sentient->iDamageParts == -1 )
      {
        v7 = j_va("AddDamagePart: entity %d needs to have InitDestructionParts called on it first.", (unsigned int)v4->s.number);
        Scr_Error(COM_ERR_2793, scrContext, v7);
        sentient = v4->sentient;
      }
      if ( sentient->iDamageParts >= 0x48u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( pEnt->sentient->iDamageParts ) < (unsigned)( DamageParts_GetMaxPartCount() )", "pEnt->sentient->iDamageParts doesn't index DamageParts_GetMaxPartCount()\n\t%i not in [0, %i)", sentient->iDamageParts, 72) )
        __debugbreak();
      v8 = &s_damageParts[v4->sentient->iDamageParts];
      m_damagePartsCount = v8->m_damagePartsCount;
      if ( m_damagePartsCount == 10 )
      {
        v10 = j_va("AddDamagePart: entity %d has too many destruction parts", (unsigned int)v4->s.number);
        Scr_Error(COM_ERR_2794, scrContext, v10);
        m_damagePartsCount = v8->m_damagePartsCount;
      }
      v8->m_damagePartsCount = m_damagePartsCount + 1;
      v11 = (__int64)&v8->m_damageParts[m_damagePartsCount];
      ConstString = Scr_GetConstString(scrContext, 0);
      Scr_SetString((scr_string_t *)v11, ConstString);
      Int = Scr_GetInt(scrContext, 1u);
      *(_DWORD *)(v11 + 48) = Int;
      *(_DWORD *)(v11 + 52) = Int;
      if ( Scr_GetNumParam(scrContext) > 2 )
      {
        v14 = *(_DWORD *)(v11 + 44);
        if ( v14 == 10 )
        {
          v15 = SL_ConvertToString((scr_string_t)*(_DWORD *)v11);
          v16 = j_va("AddDamagePart: entity %d has too many damage sub parts for part %s", (unsigned int)v4->s.number, v15);
          Scr_Error(COM_ERR_2795, scrContext, v16);
          v14 = *(_DWORD *)(v11 + 44);
        }
        v17 = v11 + 20i64 * v14 + 4;
        *(_DWORD *)(v11 + 44) = v14 + 1;
        v18 = Scr_GetConstString(scrContext, 2u);
        Scr_SetString((scr_string_t *)v17, v18);
        *(_DWORD *)(v17 + 4) = Scr_GetInt(scrContext, 3u);
        v19 = Scr_GetConstString(scrContext, 4u);
        *(_DWORD *)(v17 + 12) = G_Combat_GetHitLocationIndexFromString(v19);
        *(_DWORD *)(v17 + 8) = *(_DWORD *)(v17 + 4);
        ConstLowercaseString = Scr_GetConstLowercaseString(scrContext, 5u);
        Scr_SetString((scr_string_t *)(v17 + 16), ConstLowercaseString);
      }
      if ( Scr_GetNumParam(scrContext) > 6 )
      {
        v21 = *(_DWORD *)(v11 + 44);
        if ( v21 == 10 )
        {
          v22 = SL_ConvertToString((scr_string_t)*(_DWORD *)v11);
          v23 = j_va("AddDamagePart: entity %d has too many damage sub parts for part %s", (unsigned int)v4->s.number, v22);
          Scr_Error(COM_ERR_2796, scrContext, v23);
          v21 = *(_DWORD *)(v11 + 44);
        }
        v24 = v11 + 20i64 * v21 + 4;
        *(_DWORD *)(v11 + 44) = v21 + 1;
        v25 = Scr_GetConstString(scrContext, 6u);
        Scr_SetString((scr_string_t *)v24, v25);
        *(_DWORD *)(v24 + 4) = Scr_GetInt(scrContext, 7u);
        v26 = Scr_GetConstString(scrContext, 8u);
        *(_DWORD *)(v24 + 12) = G_Combat_GetHitLocationIndexFromString(v26);
        *(_DWORD *)(v24 + 8) = *(_DWORD *)(v24 + 4);
        v27 = Scr_GetConstLowercaseString(scrContext, 9u);
        Scr_SetString((scr_string_t *)(v24 + 16), v27);
      }
    }
    else
    {
      v6 = j_va("AddDamagePart: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)v4->s.number);
      Scr_Error(COM_ERR_2792, scrContext, v6);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2791, scrContext, "AddDamagePart: invalid entity!");
  }
}

/*
==============
DamageParts::AddDamagePartNotify
==============
*/
void DamageParts::AddDamagePartNotify(DamageParts *this, int iPart, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName)
{
  DamageParts::FillDamageParams(this, &this->m_damagePartNotifies[iPart], pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, (const scr_string_t)0, partName);
}

/*
==============
DamageParts::AddDamageSubPartDamageNotify
==============
*/
void DamageParts::AddDamageSubPartDamageNotify(DamageParts *this, int iPart, int iSubPart, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName, const scr_string_t subPartName)
{
  __int64 m_nextSubPartDamageNotify; 
  DamageParts::DamageParams *v18; 

  m_nextSubPartDamageNotify = this->m_nextSubPartDamageNotify;
  this->m_nextSubPartDamageNotify = ((int)m_nextSubPartDamageNotify + 1) % 10;
  v18 = &this->m_damageSubPartDamageNotifies[m_nextSubPartDamageNotify];
  DamageParts::FillDamageParams(this, v18, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, (const scr_string_t)0, partName);
  Scr_SetString(&v18->m_subPartName, subPartName);
}

/*
==============
DamageParts::AddDamageSubPartNotify
==============
*/
void DamageParts::AddDamageSubPartNotify(DamageParts *this, int iPart, int iSubPart, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName, const scr_string_t subPartName, int state)
{
  DamageParts::DamageParams *v18; 

  v18 = &this->m_damageSubPartNotifies[2 * iPart + iSubPart];
  DamageParts::FillDamageParams(this, v18, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, (const scr_string_t)0, partName);
  Scr_SetString(&v18->m_subPartName, subPartName);
  v18->m_subPartState = state;
}

/*
==============
DamageParts::ApplyDamage
==============
*/
int DamageParts::ApplyDamage(DamageParts *this, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName)
{
  unsigned int v15; 
  int m_entNum; 
  unsigned int v17; 
  DObj *ServerDObjForEntnum; 
  char v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  scr_string_t v24; 
  unsigned __int8 ReverseBoneIndex; 
  vec3_t *hitDira; 
  unsigned __int8 index; 
  char v28; 
  unsigned int v29; 
  unsigned int v30; 

  if ( (damageFlags & 1) != 0 )
    return DamageParts::ApplyRadiusDamage(this, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
  v15 = 0;
  v30 = 0;
  m_entNum = this->m_entNum;
  v17 = 0;
  v29 = 0;
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(m_entNum);
  if ( !ServerDObjForEntnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 579, ASSERT_TYPE_ASSERT, "( pObj )", (const char *)&queryFormat, "pObj") )
    __debugbreak();
  if ( modelIndex >= (unsigned int)ServerDObjForEntnum->numModels )
  {
    LODWORD(hitDira) = modelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 580, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( pObj->numModels )", "modelIndex doesn't index pObj->numModels\n\t%i not in [0, %i)", hitDira, ServerDObjForEntnum->numModels) )
      __debugbreak();
  }
  index = -2;
  if ( XModelGetBoneIndex(ServerDObjForEntnum->models[modelIndex], tagName, 0, &index) )
  {
    v19 = 0;
    v20 = 0;
    v28 = 0;
    if ( this->m_damagePartsCount )
    {
      do
      {
        v21 = 0i64;
        v22 = v20;
        if ( this->m_damageParts[v22].m_subPartCount )
        {
          do
          {
            v23 = v22 * 56 + 20 * v21;
            if ( hitLoc == *(hitLocation_t *)((char *)&this->m_damageParts[0].m_subParts[0].m_hitLoc + v23) )
            {
              v24 = *(scr_string_t *)((char *)&this->m_damageParts[0].m_subParts[0].m_damageTag + v23);
              v29 = v20;
              v30 = v21;
              v28 = 1;
              ReverseBoneIndex = DObjGetReverseBoneIndex(ServerDObjForEntnum, v24);
              if ( ReverseBoneIndex != 0xFF && (unsigned int)GetGenerationGap(ServerDObjForEntnum, modelIndex, ReverseBoneIndex, index) <= 0x270E )
              {
                v17 = v20;
                v15 = v21;
                v19 = 1;
              }
            }
            v21 = (unsigned int)(v21 + 1);
          }
          while ( (unsigned int)v21 < this->m_damageParts[v22].m_subPartCount );
        }
        ++v20;
      }
      while ( v20 < this->m_damagePartsCount );
      if ( v19 )
        return DamageParts::ApplyDamage_Internal(this, v17, v15, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
      if ( v28 )
      {
        v17 = v29;
        v15 = v30;
        return DamageParts::ApplyDamage_Internal(this, v17, v15, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
      }
    }
  }
  return damage;
}

/*
==============
DamageParts::ApplyDamage_Internal
==============
*/
__int64 DamageParts::ApplyDamage_Internal(DamageParts *this, unsigned int partIndex, unsigned int subPartIndex, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex)
{
  unsigned int v14; 
  const gentity_s *v16; 
  __int64 v17; 
  char *v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  const char *v23; 
  const char *v24; 
  __int64 m_nextSubPartDamageNotify; 
  scr_string_t v26; 
  const gentity_s *v27; 
  DamageParts::DamageParams *v28; 
  int v29; 
  unsigned int v30; 
  char *v31; 
  unsigned int v32; 
  _DWORD *v33; 
  scr_string_t v34; 
  hitLocation_t v35; 
  int v36; 
  gentity_s *v37; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v39; 
  actor_s *v40; 
  const dvar_t *v41; 
  unsigned int v42; 
  char *v44; 
  int v45; 
  int v46; 
  int v47; 
  gentity_s *v48; 
  AIActorInterface *v49; 
  actor_s *actor; 
  const dvar_t *v51; 
  int v52; 
  const char *v53; 
  vec3_t *v54; 
  __int64 v55; 
  scr_string_t partName; 
  int v57; 
  AIActorInterface v58; 
  AIAgentInterface v59; 
  AIScriptedInterface *v60; 

  v14 = partIndex;
  v16 = pInflictor;
  if ( subPartIndex == 3 )
  {
LABEL_55:
    v42 = damage;
    v44 = (char *)this + 56 * partIndex;
    v45 = *((_DWORD *)v44 + 14);
    if ( v45 )
    {
      v46 = v45 - damage;
      v47 = 0;
      if ( v46 > 0 )
        v47 = v46;
      *((_DWORD *)v44 + 14) = v47;
      if ( !v47 )
      {
        v48 = &g_entities[this->m_entNum];
        AIActorInterface::AIActorInterface(&v58);
        v49 = NULL;
        v59.__vftable = NULL;
        if ( v48 )
        {
          actor = v48->actor;
          if ( actor )
          {
            AIActorInterface::SetActor(&v58, actor);
            v49 = &v58;
            v59.__vftable = (AIAgentInterface_vtbl *)&v58;
          }
        }
        if ( v49 && AIScriptedInterface::InNonDamageableScriptedState(v49) && !*(_BYTE *)(v49->GetAI(v49) + 1850) )
          *((_DWORD *)v44 + 14) = 1;
      }
      v51 = DVARBOOL_g_debugDamage;
      if ( !DVARBOOL_g_debugDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugDamage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v51);
      if ( v51->current.enabled )
      {
        v52 = *((_DWORD *)v44 + 14);
        v53 = SL_ConvertToString((scr_string_t)*((_DWORD *)v44 + 1));
        LODWORD(v55) = v52;
        LODWORD(v54) = damage;
        Com_Printf(15, "ent:%d hitloc:%s part:%s damage:%d curHealth:%d\n", (unsigned int)this->m_entNum, g_HitLocNames_0[hitLoc], v53, v54, v55);
      }
      if ( !*((_DWORD *)v44 + 14) )
        DamageParts::FillDamageParams(this, &this->m_damagePartNotifies[v14], v16, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, (const scr_string_t)0, *((const scr_string_t *)v44 + 1));
    }
    return v42;
  }
  v17 = partIndex;
  v18 = (char *)this + 20 * subPartIndex + v17 * 56;
  if ( *((int *)v18 + 4) <= 0 )
  {
    v14 = partIndex;
    v16 = pInflictor;
    goto LABEL_55;
  }
  if ( subPartIndex >= this->m_damageParts[v17].m_subPartCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 213, ASSERT_TYPE_ASSERT, "(subPartIndex < m_damageParts[partIndex].m_subPartCount)", (const char *)&queryFormat, "subPartIndex < m_damageParts[partIndex].m_subPartCount") )
    __debugbreak();
  v57 = *((_DWORD *)v18 + 4);
  v19 = v57 - damage;
  v20 = 0;
  if ( v57 - damage > 0 )
    v20 = v57 - damage;
  *((_DWORD *)v18 + 4) = v20;
  v21 = DVARBOOL_g_debugDamage;
  if ( !DVARBOOL_g_debugDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    v22 = *((_DWORD *)v18 + 4);
    v23 = SL_ConvertToString((scr_string_t)*((_DWORD *)v18 + 2));
    v24 = SL_ConvertToString(this->m_damageParts[v17].m_partName);
    LODWORD(v55) = damage;
    Com_Printf(15, "ent:%d hitloc:%s part:%s subpart:%s damage:%d curHealth:%d\n", (unsigned int)this->m_entNum, g_HitLocNames_0[hitLoc], v24, v23, v55, v22);
  }
  m_nextSubPartDamageNotify = this->m_nextSubPartDamageNotify;
  v26 = *((_DWORD *)v18 + 2);
  partName = this->m_damageParts[v17].m_partName;
  this->m_nextSubPartDamageNotify = ((int)m_nextSubPartDamageNotify + 1) % 10;
  v27 = pInflictor;
  v28 = &this->m_damageSubPartDamageNotifies[m_nextSubPartDamageNotify];
  DamageParts::FillDamageParams(this, v28, pInflictor, pAttacker, hitDir, hitPos, damage, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, (const scr_string_t)0, partName);
  Scr_SetString(&v28->m_subPartName, v26);
  if ( *((_DWORD *)v18 + 4) )
  {
    v35 = hitLoc;
  }
  else
  {
    v29 = 0;
    v30 = 0;
    v31 = (char *)this + 56 * (int)partIndex;
    v32 = *((_DWORD *)v31 + 12);
    if ( v32 )
    {
      v33 = v31 + 16;
      do
      {
        if ( !*v33 )
          v29 |= 1 << v30;
        ++v30;
        v33 += 5;
      }
      while ( v30 < v32 );
    }
    v34 = *((_DWORD *)v18 + 2);
    v35 = hitLoc;
    DamageParts::FillDamageParams(this, &this->m_damageSubPartNotifies[subPartIndex + 2 * partIndex], pInflictor, pAttacker, hitDir, hitPos, v57, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, (const scr_string_t)0, (const scr_string_t)this->m_damageParts[v17].m_partName);
    Scr_SetString(&this->m_damageSubPartNotifies[subPartIndex + 2 * partIndex].m_subPartName, v34);
    this->m_damageSubPartNotifies[subPartIndex + 2 * partIndex].m_subPartState = v29;
    v27 = pInflictor;
  }
  if ( v19 >= 0 )
    return 0i64;
  v36 = 0;
  if ( v19 + this->m_damageParts[v17].m_currentPartHealth > 0 )
    v36 = v19 + this->m_damageParts[v17].m_currentPartHealth;
  this->m_damageParts[v17].m_currentPartHealth = v36;
  if ( v36 )
    goto LABEL_46;
  v37 = &g_entities[this->m_entNum];
  AIActorInterface::AIActorInterface(&v58);
  AIAgentInterface::AIAgentInterface(&v59);
  v60 = NULL;
  v59.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( v37->agent && SV_Agent_IsScripted(v37->s.number) )
  {
    ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v37);
    if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
      __debugbreak();
    if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
      __debugbreak();
    AINewAgentInterface::SetAgent((AINewAgentInterface *)&v59, ScriptedAgentInfo);
    v60 = &v59;
    v39 = &v59;
  }
  else
  {
    v40 = v37->actor;
    if ( v40 )
    {
      if ( !v40->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v58, v37->actor);
      v60 = &v58;
    }
    v39 = (AIAgentInterface *)v60;
    if ( !v60 )
      goto LABEL_46;
  }
  if ( AIScriptedInterface::InNonDamageableScriptedState(v60) && !*(_BYTE *)(v39->GetAI(v39) + 1850) )
    this->m_damageParts[v17].m_currentPartHealth = 1;
LABEL_46:
  v41 = DVARBOOL_g_debugDamage;
  if ( !DVARBOOL_g_debugDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  v42 = damage - v57;
  if ( v41->current.enabled )
    Com_Printf(15, "\tdamage to part:%d curHealth:%d\n", v42, (unsigned int)this->m_damageParts[v17].m_currentPartHealth);
  if ( !this->m_damageParts[v17].m_currentPartHealth )
    DamageParts::FillDamageParams(this, &this->m_damagePartNotifies[partIndex], v27, pAttacker, hitDir, hitPos, v42, damageFlags, damageMOD, weapon, bWeaponIsAlt, v35, modelIndex, (const scr_string_t)0, (const scr_string_t)this->m_damageParts[v17].m_partName);
  return v42;
}

/*
==============
DamageParts::ApplyRadiusDamage
==============
*/
__int64 DamageParts::ApplyRadiusDamage(DamageParts *this, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName)
{
  int v13; 
  unsigned int v15; 
  const gentity_s *v17; 
  __int128 i; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int128 v22; 
  const dvar_t *v24; 
  unsigned int m_damagePartsCount; 
  float value; 
  float v27; 
  int v28; 
  unsigned int *p_m_subPartCount; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  unsigned int v34; 
  __int64 v35; 
  __int64 v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v43; 
  float v44; 
  __int128 v45; 
  float v46; 
  float v47; 
  __int128 v48; 
  int v49; 
  float v50; 
  float v51; 
  __int128 v52; 
  const dvar_t *v53; 
  unsigned int v54; 
  int v55; 
  unsigned int v56; 
  __int64 v57; 
  unsigned int v61; 
  vec3_t outPos; 
  int v66[40]; 

  v13 = 0;
  *(float *)&_XMM7 = FLOAT_3_4028235e38;
  v15 = 0;
  v17 = &g_entities[this->m_entNum];
  v61 = 0;
  for ( i = 0i64; v15 < this->m_damagePartsCount; v13 += 2 )
  {
    v19 = 0i64;
    v20 = v15;
    if ( this->m_damageParts[v20].m_subPartCount )
    {
      do
      {
        v21 = v13 + (int)v19;
        if ( G_Utils_DObjGetWorldTagPos(v17, *(scr_string_t *)((char *)&this->m_damageParts[0].m_subParts[v19].m_damageTag + v20 * 56), &outPos) )
        {
          v22 = LODWORD(hitPos->v[1]);
          *(float *)&v22 = fsqrt((float)((float)((float)(hitPos->v[1] - outPos.v[1]) * (float)(hitPos->v[1] - outPos.v[1])) + (float)((float)(hitPos->v[0] - outPos.v[0]) * (float)(hitPos->v[0] - outPos.v[0]))) + (float)((float)(hitPos->v[2] - outPos.v[2]) * (float)(hitPos->v[2] - outPos.v[2])));
          _XMM1 = v22;
          v66[v21] = v22;
          __asm { vminss  xmm7, xmm1, xmm7 }
        }
        else
        {
          v66[v21] = 2139095039;
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < this->m_damageParts[v20].m_subPartCount );
    }
    ++v15;
  }
  v24 = DCONST_DVARFLT_g_damagePartDamageRadius;
  if ( !DCONST_DVARFLT_g_damagePartDamageRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_damagePartDamageRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  m_damagePartsCount = this->m_damagePartsCount;
  value = v24->current.value;
  if ( m_damagePartsCount )
  {
    v27 = (float)damage;
    v28 = 0;
    p_m_subPartCount = &this->m_damageParts[0].m_subPartCount;
    v30 = m_damagePartsCount;
    do
    {
      v31 = *p_m_subPartCount;
      v32 = 0;
      if ( *p_m_subPartCount >= 4 )
      {
        v33 = v28;
        v34 = ((v31 - 4) >> 2) + 1;
        v35 = v34;
        v32 = 4 * v34;
        do
        {
          v36 = v33;
          v37 = *(float *)&v66[v33] - *(float *)&_XMM7;
          if ( v37 <= value )
          {
            v38 = (float)((float)((float)((float)(value - v37) / value) * (float)((float)(value - v37) / value)) * (float)((float)(value - v37) / value)) * v27;
            v39 = i;
            *(float *)&v39 = *(float *)&i + v38;
            i = v39;
          }
          else
          {
            v38 = 0.0;
          }
          *(float *)&v66[v33 + 20] = v38;
          v40 = *(float *)&v66[v33 + 1] - *(float *)&_XMM7;
          if ( v40 <= value )
          {
            v41 = (float)((float)((float)((float)(value - v40) / value) * (float)((float)(value - v40) / value)) * (float)((float)(value - v40) / value)) * v27;
            v42 = i;
            *(float *)&v42 = *(float *)&i + v41;
            i = v42;
          }
          else
          {
            v41 = 0.0;
          }
          *(float *)&v66[v33 + 21] = v41;
          v43 = *(float *)&v66[v33 + 2] - *(float *)&_XMM7;
          if ( v43 <= value )
          {
            v44 = (float)((float)((float)((float)(value - v43) / value) * (float)((float)(value - v43) / value)) * (float)((float)(value - v43) / value)) * v27;
            v45 = i;
            *(float *)&v45 = *(float *)&i + v44;
            i = v45;
          }
          else
          {
            v44 = 0.0;
          }
          *(float *)&v66[v33 + 22] = v44;
          v46 = *(float *)&v66[v33 + 3] - *(float *)&_XMM7;
          if ( v46 <= value )
          {
            v47 = (float)((float)((float)((float)(value - v46) / value) * (float)((float)(value - v46) / value)) * (float)((float)(value - v46) / value)) * v27;
            v48 = i;
            *(float *)&v48 = *(float *)&i + v47;
            i = v48;
          }
          else
          {
            v47 = 0.0;
          }
          v33 += 4;
          *(float *)&v66[v36 + 23] = v47;
          --v35;
        }
        while ( v35 );
      }
      for ( ; v32 < v31; *(float *)&v66[v49 + 20] = v51 )
      {
        v49 = v28 + v32;
        v50 = *(float *)&v66[v28 + v32] - *(float *)&_XMM7;
        if ( v50 <= value )
        {
          v51 = (float)((float)((float)((float)(value - v50) / value) * (float)((float)(value - v50) / value)) * (float)((float)(value - v50) / value)) * v27;
          v52 = i;
          *(float *)&v52 = *(float *)&i + v51;
          i = v52;
        }
        else
        {
          v51 = 0.0;
        }
        ++v32;
      }
      v28 += 2;
      p_m_subPartCount += 14;
      --v30;
    }
    while ( v30 );
  }
  v53 = DVARBOOL_g_debugDamage;
  if ( !DVARBOOL_g_debugDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled )
    Com_Printf(15, "ent:%d radius damage:%d\n", (unsigned int)this->m_entNum, (unsigned int)damage);
  v54 = 0;
  if ( !this->m_damagePartsCount )
    return 0i64;
  v55 = 0;
  do
  {
    v56 = 0;
    v57 = v54;
    if ( this->m_damageParts[v57].m_subPartCount )
    {
      do
      {
        if ( *(float *)&v66[v55 + v56 + 20] > 0.0 )
        {
          _XMM1 = 0i64;
          __asm { vroundss xmm2, xmm1, xmm3, 1 }
          v61 += DamageParts::ApplyDamage_Internal(this, v54, v56, pInflictor, pAttacker, hitDir, hitPos, (int)*(float *)&_XMM2, damageFlags, damageMOD, weapon, bWeaponIsAlt, hitLoc, modelIndex, tagName);
        }
        ++v56;
      }
      while ( v56 < this->m_damageParts[v57].m_subPartCount );
    }
    ++v54;
    v55 += 2;
  }
  while ( v54 < this->m_damagePartsCount );
  return v61;
}

/*
==============
DamageParts_Free
==============
*/
void DamageParts_Free(int partsIdx)
{
  __int64 v1; 
  int v3; 

  v1 = partsIdx;
  if ( (unsigned int)partsIdx >= 0x48 )
  {
    v3 = 72;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( partsIdx ) < (unsigned)( DamageParts_GetMaxPartCount() )", "partsIdx doesn't index DamageParts_GetMaxPartCount()\n\t%i not in [0, %i)", partsIdx, v3) )
      __debugbreak();
  }
  DamageParts_Free(&s_damageParts[v1]);
}

/*
==============
DamageParts_Free
==============
*/
void DamageParts_Free(DamageParts *pParts)
{
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  bool *p_m_bNotifyPending; 
  scr_string_t *p_m_subPartName; 
  __int64 v11; 

  if ( !pParts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 99, ASSERT_TYPE_ASSERT, "( pParts )", (const char *)&queryFormat, "pParts") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 65, ASSERT_TYPE_ASSERT, "( pParts )", (const char *)&queryFormat, "pParts") )
      __debugbreak();
  }
  v2 = 0;
  if ( pParts->m_damagePartsCount )
  {
    v3 = 0;
    do
    {
      v4 = v2;
      Scr_SetString(&pParts->m_damagePartNotifies[v4].m_partName, (scr_string_t)0);
      v5 = v2;
      Scr_SetString(&pParts->m_damageParts[v5].m_partName, (scr_string_t)0);
      v6 = 0i64;
      for ( pParts->m_damagePartNotifies[v4].m_bNotifyPending = 0; (unsigned int)v6 < pParts->m_damageParts[v5].m_subPartCount; pParts->m_damageSubPartNotifies[v7].m_bNotifyPending = 0 )
      {
        v7 = v3 + (int)v6;
        Scr_SetString(&pParts->m_damageSubPartNotifies[v7].m_partName, (scr_string_t)0);
        Scr_SetString(&pParts->m_damageSubPartNotifies[v7].m_subPartName, (scr_string_t)0);
        v8 = v5 * 56 + 20 * v6;
        Scr_SetString((scr_string_t *)((char *)&pParts->m_damageParts[0].m_subParts[0].m_subPartName + v8), (scr_string_t)0);
        Scr_SetString((scr_string_t *)((char *)&pParts->m_damageParts[0].m_subParts[0].m_damageTag + v8), (scr_string_t)0);
        v6 = (unsigned int)(v6 + 1);
      }
      ++v2;
      v3 += 2;
    }
    while ( v2 < pParts->m_damagePartsCount );
  }
  p_m_bNotifyPending = &pParts->m_damageSubPartDamageNotifies[0].m_bNotifyPending;
  p_m_subPartName = &pParts->m_damageSubPartDamageNotifies[0].m_subPartName;
  v11 = 10i64;
  do
  {
    Scr_SetString(p_m_subPartName - 17, (scr_string_t)0);
    Scr_SetString(p_m_subPartName, (scr_string_t)0);
    p_m_subPartName += 33;
    *p_m_bNotifyPending = 0;
    p_m_bNotifyPending += 132;
    --v11;
  }
  while ( v11 );
  pParts->m_nextSubPartDamageNotify = 0;
  pParts->m_damagePartsCount = 0;
  memset_0(pParts->m_damageParts, 0, sizeof(pParts->m_damageParts));
}

/*
==============
DamageParts_Get
==============
*/
DamageParts *DamageParts_Get(int partsIdx)
{
  __int64 v1; 
  int v4; 

  v1 = partsIdx;
  if ( (unsigned int)partsIdx >= 0x48 )
  {
    v4 = 72;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( partsIdx ) < (unsigned)( DamageParts_GetMaxPartCount() )", "partsIdx doesn't index DamageParts_GetMaxPartCount()\n\t%i not in [0, %i)", partsIdx, v4) )
      __debugbreak();
  }
  return &s_damageParts[v1];
}

/*
==============
DamageParts_Update
==============
*/
void DamageParts_Update(void)
{
  DamageParts *v0; 
  __int64 v1; 

  v0 = s_damageParts;
  v1 = 72i64;
  do
  {
    DamageParts::ProcessPartNotifies(v0, v0->m_damageSubPartDamageNotifies, 10, (const scr_string_t)scr_const.damage_subpart, 0, 1, 0);
    DamageParts::ProcessPartNotifies(v0, v0->m_damagePartNotifies, 10, (const scr_string_t)scr_const.damage_part_died, 0, 0, 0);
    DamageParts::ProcessPartNotifies(v0, v0->m_damageSubPartNotifies, 20, (const scr_string_t)scr_const.damage_subpart_died, 0, 1, 1);
    ++v0;
    --v1;
  }
  while ( v1 );
}

/*
==============
DamageParts::FillDamageParams
==============
*/
void DamageParts::FillDamageParams(DamageParts *this, DamageParts::DamageParams *pParams, const gentity_s *pInflictor, const gentity_s *pAttacker, const vec3_t *hitDir, const vec3_t *hitPos, int damage, unsigned int damageFlags, int damageMOD, const Weapon *weapon, bool bWeaponIsAlt, hitLocation_t hitLoc, int modelIndex, const scr_string_t tagName, const scr_string_t partName)
{
  int v16; 
  int number; 

  v16 = 2047;
  if ( pInflictor )
    number = pInflictor->s.number;
  else
    number = 2047;
  pParams->m_inflictorEntNum = number;
  if ( pAttacker )
    v16 = pAttacker->s.number;
  pParams->m_attackerEntNum = v16;
  pParams->m_damage = damage;
  pParams->m_damageFlags = damageFlags;
  pParams->m_damageMoD = damageMOD;
  if ( hitPos )
    pParams->m_hitPos = *hitPos;
  else
    pParams->m_hitPos = vec3_origin;
  if ( hitDir )
    pParams->m_hitDir = *hitDir;
  else
    pParams->m_hitDir = vec3_origin;
  pParams->m_hitLoc = hitLoc;
  pParams->m_modelIdx = modelIndex;
  Scr_SetString(&pParams->m_partName, partName);
  Scr_SetString(&pParams->m_tagName, tagName);
  pParams->m_weapon = *weapon;
  pParams->m_bWeaponIsAlt = bWeaponIsAlt;
  pParams->m_bNotifyPending = 1;
}

/*
==============
DamageParts::GetDamageSubPartState
==============
*/
__int64 DamageParts::GetDamageSubPartState(DamageParts *this, int iPart)
{
  unsigned int v2; 
  char *v3; 
  unsigned int v4; 
  unsigned int v5; 
  _DWORD *v6; 

  v2 = 0;
  v3 = (char *)this + 56 * iPart;
  v4 = 0;
  v5 = *((_DWORD *)v3 + 12);
  if ( v5 )
  {
    v6 = v3 + 16;
    do
    {
      if ( !*v6 )
        v2 |= 1 << v4;
      ++v4;
      v6 += 5;
    }
    while ( v4 < v5 );
  }
  return v2;
}

/*
==============
GetGenerationGap
==============
*/
__int64 GetGenerationGap(DObj *pObj, int startModel, unsigned __int8 parentIndex, unsigned __int8 localChildIndex)
{
  __int64 v5; 
  const XModel **models; 
  unsigned int v8; 
  __int64 v9; 
  const XModel *v10; 
  const XModel **v11; 
  unsigned __int8 numBones; 
  __int64 v13; 
  unsigned __int8 v14; 
  const XModel *v15; 
  unsigned __int8 numRootBones; 
  int numModels; 
  unsigned __int8 v18; 
  __int64 v20; 
  __int64 v21; 

  v5 = startModel;
  if ( !pObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 517, ASSERT_TYPE_ASSERT, "( pObj )", (const char *)&queryFormat, "pObj") )
    __debugbreak();
  if ( (unsigned int)v5 >= pObj->numModels )
  {
    LODWORD(v20) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( startModel ) < (unsigned)( pObj->numModels )", "startModel doesn't index pObj->numModels\n\t%i not in [0, %i)", v20, pObj->numModels) )
      __debugbreak();
  }
  models = pObj->models;
  v8 = 0;
  v9 = v5;
  v10 = models[v5];
  v11 = &models[pObj->numModels];
  while ( 1 )
  {
    if ( (unsigned int)v5 >= pObj->numModels )
    {
      LODWORD(v21) = pObj->numModels;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 502, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( pObj->numModels )", "modelIndex doesn't index pObj->numModels\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    numBones = pObj->models[v9]->numBones;
    if ( localChildIndex >= numBones )
    {
      LODWORD(v21) = numBones;
      LODWORD(v20) = localChildIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 503, ASSERT_TYPE_ASSERT, "(unsigned)( localIndex ) < (unsigned)( pObj->models[modelIndex]->numBones )", "localIndex doesn't index pObj->models[modelIndex]->numBones\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v13 = 0i64;
    v14 = localChildIndex;
    if ( pObj->numModels )
    {
      do
      {
        if ( v13 == v9 )
          break;
        v15 = pObj->models[v13++];
        v14 += v15->numBones;
      }
      while ( v13 < pObj->numModels );
    }
    if ( v14 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 529, ASSERT_TYPE_ASSERT, "( curUnlocalizedParentIndex != 255 )", (const char *)&queryFormat, "curUnlocalizedParentIndex != NO_BONEINDEX") )
      __debugbreak();
    if ( v14 == parentIndex )
      break;
    numRootBones = v10->numRootBones;
    if ( localChildIndex >= numRootBones )
    {
      localChildIndex -= v10->parentList[localChildIndex - numRootBones];
      ++v8;
    }
    else
    {
      localChildIndex = *((_BYTE *)v11 + v9);
      if ( localChildIndex == 0xFF )
        return 0xFFFFFFFFi64;
      numModels = pObj->numModels;
      LODWORD(v5) = 0;
      v9 = 0i64;
      if ( pObj->numModels )
      {
        do
        {
          v18 = pObj->models[v9]->numBones;
          if ( localChildIndex <= v18 )
            break;
          localChildIndex -= v18;
          LODWORD(v5) = v5 + 1;
          ++v9;
        }
        while ( (int)v5 < numModels );
      }
      if ( (unsigned int)v5 >= numModels )
      {
        LODWORD(v21) = pObj->numModels;
        LODWORD(v20) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( curModelIndex ) < (unsigned)( pObj->numModels )", "curModelIndex doesn't index pObj->numModels\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v10 = pObj->models[v9];
    }
  }
  return v8;
}

/*
==============
InitDamageParts
==============
*/
void InitDamageParts(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gentity_s *v4; 
  sentient_s *sentient; 
  const char *v6; 
  __int64 iDamageParts; 
  int v8; 
  int v9; 
  unsigned int *p_m_damagePartsCount; 
  __int64 v11; 
  const char *v12; 

  Entity = GetEntity(entref);
  v4 = Entity;
  if ( Entity )
  {
    sentient = Entity->sentient;
    if ( sentient )
    {
      iDamageParts = sentient->iDamageParts;
      v8 = -1;
      if ( (int)iDamageParts >= 0 )
      {
        if ( (unsigned int)iDamageParts >= 0x48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( partsIdx ) < (unsigned)( DamageParts_GetMaxPartCount() )", "partsIdx doesn't index DamageParts_GetMaxPartCount()\n\t%i not in [0, %i)", iDamageParts, 72) )
          __debugbreak();
        DamageParts_Free(&s_damageParts[iDamageParts]);
        v4->sentient->iDamageParts = -1;
      }
      v9 = 0;
      p_m_damagePartsCount = &s_damageParts[0].m_damagePartsCount;
      while ( *p_m_damagePartsCount )
      {
        ++v9;
        p_m_damagePartsCount += 1463;
        if ( (__int64)p_m_damagePartsCount >= (__int64)&unk_14A6102B4 )
          goto LABEL_15;
      }
      v11 = v9;
      s_damageParts[v11].m_damagePartsCount = 0;
      memset_0(s_damageParts[v11].m_damageParts, 0, sizeof(s_damageParts[v11].m_damageParts));
      memset_0(s_damageParts[v11].m_damagePartNotifies, 0, sizeof(s_damageParts[v11].m_damagePartNotifies));
      memset_0(s_damageParts[v11].m_damageSubPartNotifies, 0, sizeof(s_damageParts[v11].m_damageSubPartNotifies));
      memset_0(s_damageParts[v11].m_damageSubPartDamageNotifies, 0, sizeof(s_damageParts[v11].m_damageSubPartDamageNotifies));
      s_damageParts[v11].m_nextSubPartDamageNotify = 0;
      v8 = v9;
      if ( v9 != -1 )
        goto LABEL_16;
LABEL_15:
      v12 = j_va("InitDamageParts: Exceeded max number of damageables with ent %d: max %d.", (unsigned int)v4->s.number, 72i64);
      Scr_Error(COM_ERR_2790, scrContext, v12);
LABEL_16:
      v4->sentient->iDamageParts = v8;
      s_damageParts[v4->sentient->iDamageParts].m_entNum = v4->s.number;
    }
    else
    {
      v6 = j_va("InitDamageParts: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)v4->s.number);
      Scr_Error(COM_ERR_2789, scrContext, v6);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2788, scrContext, "InitDamageParts: invalid entity!");
  }
}

/*
==============
DamageParts::IsSubPartAlive
==============
*/
bool DamageParts::IsSubPartAlive(DamageParts *this, const scr_string_t damageTag)
{
  unsigned int m_damagePartsCount; 
  int v3; 
  scr_string_t *i; 
  unsigned int v5; 
  __int64 v6; 
  scr_string_t *v7; 

  m_damagePartsCount = this->m_damagePartsCount;
  v3 = 0;
  if ( !m_damagePartsCount )
    return 1;
  for ( i = &this->m_damageParts[0].m_subParts[0].m_damageTag; ; i += 14 )
  {
    v5 = *((_DWORD *)i + 6);
    v6 = 0i64;
    if ( v5 )
      break;
LABEL_7:
    if ( ++v3 >= m_damagePartsCount )
      return 1;
  }
  v7 = i;
  while ( damageTag != *v7 )
  {
    v6 = (unsigned int)(v6 + 1);
    v7 += 5;
    if ( (unsigned int)v6 >= v5 )
      goto LABEL_7;
  }
  return this->m_damageParts[v3].m_subParts[v6].m_currentHealth > 0;
}

/*
==============
DamageParts::ProcessPartNotifies
==============
*/
void DamageParts::ProcessPartNotifies(DamageParts *this, DamageParts::DamageParams *deadPartNotifies, int numParts, const scr_string_t notify, bool bIncludeTagName, bool bIncludeSubPartName, bool bIncludeSubPartState)
{
  __int64 v8; 
  const gentity_s *v10; 
  char v11; 
  scrContext_t *v12; 
  __int64 v13; 
  int *p_m_attackerEntNum; 
  __int64 v15; 
  unsigned int CanonicalString; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  const char *v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 

  v8 = numParts;
  if ( this->m_entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_damage_parts.cpp", 630, ASSERT_TYPE_ASSERT, "(unsigned)( m_entNum ) < (unsigned)( ( 2048 ) )", "m_entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", this->m_entNum, 2048) )
    __debugbreak();
  v10 = &g_entities[this->m_entNum];
  v11 = 0;
  v12 = ScriptContext_Server();
  v13 = v8;
  if ( (int)v8 > 0 )
  {
    p_m_attackerEntNum = &deadPartNotifies->m_attackerEntNum;
    do
    {
      if ( *((_BYTE *)p_m_attackerEntNum + 117) )
      {
        if ( !v11 )
        {
          Scr_MakeArray(v12);
          v11 = 1;
        }
        Scr_MakeStruct(v12);
        v15 = *p_m_attackerEntNum;
        if ( (_DWORD)v15 == 2047 )
          goto LABEL_21;
        if ( (unsigned int)v15 >= 0x800 )
        {
          LODWORD(v34) = 2048;
          LODWORD(v33) = *p_m_attackerEntNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v15] )
LABEL_21:
          Scr_AddUndefined(v12);
        else
          GScr_AddEntity(&g_entities[*p_m_attackerEntNum]);
        CanonicalString = SL_GetCanonicalString("attacker");
        Scr_AddStructField(v12, CanonicalString);
        Scr_AddInt(v12, p_m_attackerEntNum[1]);
        v17 = SL_GetCanonicalString("amount");
        Scr_AddStructField(v12, v17);
        Scr_AddConstString(v12, *g_combat_modNames[p_m_attackerEntNum[3]]);
        v18 = SL_GetCanonicalString("type");
        Scr_AddStructField(v12, v18);
        Scr_AddInt(v12, p_m_attackerEntNum[2]);
        v19 = SL_GetCanonicalString("flags");
        Scr_AddStructField(v12, v19);
        Scr_AddVector(v12, (const float *)p_m_attackerEntNum + 7);
        v20 = SL_GetCanonicalString("point");
        Scr_AddStructField(v12, v20);
        Scr_AddVector(v12, (const float *)p_m_attackerEntNum + 4);
        v21 = SL_GetCanonicalString("direction");
        Scr_AddStructField(v12, v21);
        if ( *((_WORD *)p_m_attackerEntNum + 28) )
          GScr_Weapon_AddParam(v12, (const Weapon *)(p_m_attackerEntNum + 14), *((_BYTE *)p_m_attackerEntNum + 116));
        else
          Scr_AddUndefined(v12);
        v22 = SL_GetCanonicalString("weapon");
        Scr_AddStructField(v12, v22);
        Scr_AddConstString(v12, (scr_string_t)p_m_attackerEntNum[13]);
        v23 = SL_GetCanonicalString("partname");
        Scr_AddStructField(v12, v23);
        if ( bIncludeTagName )
        {
          Scr_AddConstString(v12, (scr_string_t)p_m_attackerEntNum[12]);
          v24 = SL_GetCanonicalString("tagname");
          Scr_AddStructField(v12, v24);
        }
        if ( bIncludeSubPartName )
        {
          Scr_AddConstString(v12, (scr_string_t)p_m_attackerEntNum[30]);
          v25 = SL_GetCanonicalString("subpartname");
          Scr_AddStructField(v12, v25);
        }
        v26 = p_m_attackerEntNum[11];
        if ( (int)v26 > 0 && *(_DWORD *)&v10->attachModelNames[2 * v26 + 26] )
        {
          v27 = *((unsigned __int16 *)&v10->pAnimTree + v26 + 3);
          if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
            __debugbreak();
          v28 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v27);
          Scr_AddString(v12, v28);
          v29 = SL_GetCanonicalString("modelname");
          Scr_AddStructField(v12, v29);
          Scr_AddConstString(v12, *(scr_string_t *)&v10->attachModelNames[2 * p_m_attackerEntNum[11] + 26]);
        }
        else
        {
          Scr_AddString(v12, (const char *)&queryFormat.fmt + 3);
          v30 = SL_GetCanonicalString("modelname");
          Scr_AddStructField(v12, v30);
          Scr_AddString(v12, (const char *)&queryFormat.fmt + 3);
        }
        v31 = SL_GetCanonicalString("attachtag");
        Scr_AddStructField(v12, v31);
        if ( bIncludeSubPartState )
        {
          Scr_AddInt(v12, p_m_attackerEntNum[31]);
          v32 = SL_GetCanonicalString("subpartstate");
          Scr_AddStructField(v12, v32);
        }
        Scr_AddArray(v12);
        *((_BYTE *)p_m_attackerEntNum + 117) = 0;
      }
      p_m_attackerEntNum += 33;
      --v13;
    }
    while ( v13 );
    if ( v11 )
      GScr_Notify(v10, notify, 1u);
  }
}

/*
==============
Scr_DamageDamagePart
==============
*/
void Scr_DamageDamagePart(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  sentient_s *sentient; 
  const char *v5; 
  int iDamageParts; 
  DamageParts *v7; 
  const char *v8; 
  int damage; 
  scr_string_t ConstString; 
  const char *v11; 
  scr_string_t v12; 
  unsigned int m_damagePartsCount; 
  unsigned int v14; 
  int *i; 
  __int64 v16; 
  unsigned int m_subPartCount; 
  scr_string_t tagName; 
  unsigned int v19; 
  __int64 v20; 
  vec3_t forward; 

  Entity = GetEntity(entref);
  if ( !Entity )
    Scr_Error(COM_ERR_2797, scrContext, "DamageDamagePart: invalid entity!");
  sentient = Entity->sentient;
  if ( !sentient )
  {
    v5 = j_va("DamageDamagePart: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)Entity->s.number);
    Scr_Error(COM_ERR_2798, scrContext, v5);
    sentient = Entity->sentient;
  }
  iDamageParts = sentient->iDamageParts;
  if ( iDamageParts != -1 )
  {
    v7 = DamageParts_Get(iDamageParts);
    if ( !v7 )
    {
      v8 = j_va("DamageDamagePart: Unable to find damage parts for ent %d.", (unsigned int)Entity->s.number);
      Scr_Error(COM_ERR_2799, scrContext, v8);
    }
    damage = Scr_GetInt(scrContext, 0);
    ConstString = Scr_GetConstString(scrContext, 1u);
    if ( !ConstString )
    {
      v11 = j_va("DamageDamagePart: invalid part name for damage part for ent %d.  Must be non-null.", (unsigned int)Entity->s.number);
      Scr_Error(COM_ERR_2800, scrContext, v11);
    }
    v12 = 0;
    if ( Scr_GetNumParam(scrContext) > 2 )
      v12 = Scr_GetConstString(scrContext, 2u);
    AngleVectors(&Entity->r.currentAngles, &forward, NULL, NULL);
    LODWORD(forward.v[0]) ^= _xmm;
    LODWORD(forward.v[2]) ^= _xmm;
    LODWORD(forward.v[1]) ^= _xmm;
    m_damagePartsCount = v7->m_damagePartsCount;
    v14 = 0;
    if ( m_damagePartsCount )
    {
      for ( i = &v7->m_damageParts[0].m_currentPartHealth; *(i - 13) != ConstString || *i <= 0 && *(i - 1); i += 14 )
      {
        if ( ++v14 >= m_damagePartsCount )
          return;
      }
      v16 = v14;
      m_subPartCount = v7->m_damageParts[v16].m_subPartCount;
      if ( v12 )
      {
        v19 = 0;
        if ( m_subPartCount )
        {
          do
          {
            v20 = v16 * 56 + 20i64 * v19;
            if ( *(scr_string_t *)((char *)&v7->m_damageParts[0].m_subParts[0].m_subPartName + v20) == v12 )
              DamageParts::ApplyDamage(v7, NULL, NULL, &forward, &Entity->r.currentOrigin, damage, 0, 2, &NULL_WEAPON, 0, *(hitLocation_t *)((char *)&v7->m_damageParts[0].m_subParts[0].m_hitLoc + v20), 0, *(const scr_string_t *)((char *)&v7->m_damageParts[0].m_subParts[0].m_damageTag + v20));
            ++v19;
          }
          while ( v19 < v7->m_damageParts[v16].m_subPartCount );
        }
      }
      else
      {
        if ( m_subPartCount )
          tagName = v7->m_damageParts[v16].m_subParts[0].m_damageTag;
        else
          tagName = scr_const.j_spine4;
        DamageParts::ApplyDamage_Internal(v7, v14, 3u, NULL, NULL, &forward, &Entity->r.currentOrigin, damage, 0, 16, &NULL_WEAPON, 0, HITLOC_NONE, 0, tagName);
      }
    }
  }
}

/*
==============
Scr_DestroyAllDamageParts
==============
*/
void Scr_DestroyAllDamageParts(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  sentient_s *sentient; 
  const char *v5; 
  int iDamageParts; 
  DamageParts *v7; 
  const char *v8; 
  unsigned int i; 
  __int64 v10; 
  int damage; 
  vec3_t forward; 

  Entity = GetEntity(entref);
  if ( !Entity )
    Scr_Error(COM_ERR_2805, scrContext, "DestroyAllDamageParts: invalid entity!");
  sentient = Entity->sentient;
  if ( !sentient )
  {
    v5 = j_va("DestroyAllDamageParts: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)Entity->s.number);
    Scr_Error(COM_ERR_2806, scrContext, v5);
    sentient = Entity->sentient;
  }
  iDamageParts = sentient->iDamageParts;
  if ( iDamageParts != -1 )
  {
    v7 = DamageParts_Get(iDamageParts);
    if ( !v7 )
    {
      v8 = j_va("DestroyDamagePart: Unable to find damage parts for ent %d.", (unsigned int)Entity->s.number);
      Scr_Error(COM_ERR_2807, scrContext, v8);
    }
    AngleVectors(&Entity->r.currentAngles, &forward, NULL, NULL);
    LODWORD(forward.v[0]) ^= _xmm;
    LODWORD(forward.v[2]) ^= _xmm;
    LODWORD(forward.v[1]) ^= _xmm;
    for ( i = 0; i < v7->m_damagePartsCount; ++i )
    {
      v10 = i;
      damage = v7->m_damageParts[v10].m_currentPartHealth;
      if ( damage > 0 )
      {
        if ( v7->m_damageParts[v10].m_subPartCount )
          DamageParts::ApplyDamage(v7, NULL, NULL, &forward, &Entity->r.currentOrigin, damage, 0, 16, &NULL_WEAPON, 0, HITLOC_NONE, 0, (const scr_string_t)v7->m_damageParts[v10].m_subParts[0].m_damageTag);
      }
    }
  }
}

/*
==============
Scr_DestroyDamagePart
==============
*/
void Scr_DestroyDamagePart(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  sentient_s *sentient; 
  const char *v5; 
  scr_string_t tagName; 
  const char *v7; 
  DamageParts *v8; 
  const char *v9; 
  unsigned int m_damagePartsCount; 
  unsigned int v11; 
  int *i; 
  vec3_t forward; 

  Entity = GetEntity(entref);
  if ( !Entity )
    Scr_Error(COM_ERR_2801, scrContext, "DestroyDamagePart: invalid entity!");
  sentient = Entity->sentient;
  if ( !sentient )
  {
    v5 = j_va("DestroyDamagePart: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)Entity->s.number);
    Scr_Error(COM_ERR_2802, scrContext, v5);
    sentient = Entity->sentient;
  }
  if ( sentient->iDamageParts != -1 )
  {
    tagName = Scr_GetConstString(scrContext, 0);
    if ( !tagName )
    {
      v7 = j_va("DestroyDamagePart: invalid part name for damage part for ent %d.  Must be non-null.", (unsigned int)Entity->s.number);
      Scr_Error(COM_ERR_2803, scrContext, v7);
    }
    v8 = DamageParts_Get(Entity->sentient->iDamageParts);
    if ( !v8 )
    {
      v9 = j_va("DestroyDamagePart: Unable to find damage parts for ent %d.", (unsigned int)Entity->s.number);
      Scr_Error(COM_ERR_2804, scrContext, v9);
    }
    AngleVectors(&Entity->r.currentAngles, &forward, NULL, NULL);
    LODWORD(forward.v[0]) ^= _xmm;
    LODWORD(forward.v[2]) ^= _xmm;
    LODWORD(forward.v[1]) ^= _xmm;
    m_damagePartsCount = v8->m_damagePartsCount;
    v11 = 0;
    if ( m_damagePartsCount )
    {
      for ( i = &v8->m_damageParts[0].m_currentPartHealth; *(i - 13) != tagName || *i <= 0 && *(i - 1); i += 14 )
      {
        if ( ++v11 >= m_damagePartsCount )
          return;
      }
      DamageParts::ApplyDamage_Internal(v8, v11, 3u, NULL, NULL, &forward, &Entity->r.currentOrigin, v8->m_damageParts[v11].m_currentPartHealth, 0, 16, &NULL_WEAPON, 0, HITLOC_NONE, 0, tagName);
    }
  }
}

/*
==============
Scr_GetDamagePartHealth
==============
*/
void Scr_GetDamagePartHealth(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  sentient_s *sentient; 
  const char *v5; 
  int iDamageParts; 
  DamageParts *v7; 
  const char *v8; 
  scr_string_t ConstString; 
  const char *v10; 
  __int64 v11; 
  scr_string_t v12; 
  unsigned int m_damagePartsCount; 
  unsigned int v14; 
  DamagePart *i; 
  __int64 v16; 
  int m_currentPartHealth; 
  unsigned int m_subPartCount; 
  DamagePart::SubPart *j; 

  Entity = GetEntity(entref);
  if ( !Entity )
    Scr_Error(COM_ERR_2808, scrContext, "GetDamagePartHealth: invalid entity!");
  sentient = Entity->sentient;
  if ( !sentient )
  {
    v5 = j_va("GetDamagePartHealth: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)Entity->s.number);
    Scr_Error(COM_ERR_2809, scrContext, v5);
    sentient = Entity->sentient;
  }
  iDamageParts = sentient->iDamageParts;
  if ( iDamageParts != -1 )
  {
    v7 = DamageParts_Get(iDamageParts);
    if ( !v7 )
    {
      v8 = j_va("GetDamagePartHealth: Unable to find damage parts for ent %d.", (unsigned int)Entity->s.number);
      Scr_Error(COM_ERR_2810, scrContext, v8);
    }
    ConstString = Scr_GetConstString(scrContext, 0);
    if ( !ConstString )
    {
      v10 = j_va("GetDamagePartHealth: invalid part name specified.  must be non null.");
      Scr_Error(COM_ERR_2811, scrContext, v10);
    }
    v11 = 0i64;
    v12 = 0;
    if ( Scr_GetNumParam(scrContext) > 1 )
      v12 = Scr_GetConstString(scrContext, 1u);
    m_damagePartsCount = v7->m_damagePartsCount;
    v14 = 0;
    if ( m_damagePartsCount )
    {
      for ( i = v7->m_damageParts; i->m_partName != ConstString; ++i )
      {
        if ( ++v14 >= m_damagePartsCount )
          return;
      }
      v16 = v14;
      if ( v12 )
      {
        m_subPartCount = v7->m_damageParts[v16].m_subPartCount;
        if ( !m_subPartCount )
          return;
        for ( j = v7->m_damageParts[v16].m_subParts; j->m_subPartName != v12; ++j )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= m_subPartCount )
            return;
        }
        m_currentPartHealth = *(int *)((char *)&v7->m_damageParts[0].m_subParts[v11].m_currentHealth + v16 * 56);
      }
      else
      {
        m_currentPartHealth = v7->m_damageParts[v16].m_currentPartHealth;
      }
      Scr_AddInt(scrContext, m_currentPartHealth);
    }
  }
}

/*
==============
Scr_SetDamagePartHealth
==============
*/
void Scr_SetDamagePartHealth(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  sentient_s *sentient; 
  const char *v5; 
  int iDamageParts; 
  DamageParts *v7; 
  const char *v8; 
  unsigned int v9; 
  scr_string_t ConstString; 
  const char *v11; 
  __int64 v12; 
  scr_string_t v13; 
  int Int; 
  VariableType Type; 
  double Float; 
  const char *v17; 
  unsigned int m_damagePartsCount; 
  __int64 v19; 
  DamagePart *i; 
  __int64 v21; 
  int m_maxPartHealth; 
  unsigned int m_subPartCount; 
  __int64 v24; 
  int v25; 

  Entity = GetEntity(entref);
  if ( !Entity )
    Scr_Error(COM_ERR_2812, scrContext, "SetDamagePartHealth: invalid entity!");
  sentient = Entity->sentient;
  if ( !sentient )
  {
    v5 = j_va("SetDamagePartHealth: entity %d is not a sentient.  Currently only supporting sentients.", (unsigned int)Entity->s.number);
    Scr_Error(COM_ERR_2813, scrContext, v5);
    sentient = Entity->sentient;
  }
  iDamageParts = sentient->iDamageParts;
  if ( iDamageParts == -1 )
    return;
  v7 = DamageParts_Get(iDamageParts);
  if ( !v7 )
  {
    v8 = j_va("SetDamagePartHealth: Unable to find damage parts for ent %d.", (unsigned int)Entity->s.number);
    Scr_Error(COM_ERR_2814, scrContext, v8);
  }
  v9 = 1;
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( !ConstString )
  {
    v11 = j_va("SetDamagePartHealth: invalid part name specified.  must be non null.");
    Scr_Error(COM_ERR_2815, scrContext, v11);
  }
  v12 = 0i64;
  v13 = 0;
  Int = 9999;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_STRING )
  {
    v9 = 2;
    v13 = Scr_GetConstString(scrContext, 1u);
  }
  if ( Scr_GetNumParam(scrContext) > v9 )
  {
    Type = Scr_GetType(scrContext, v9);
    if ( Type == VAR_INTEGER )
    {
      Int = Scr_GetInt(scrContext, v9);
    }
    else
    {
      if ( Type != VAR_FLOAT )
        goto LABEL_20;
      Float = Scr_GetFloat(scrContext, v9);
      Int = (int)*(float *)&Float;
    }
    if ( Int <= 0 )
    {
      v17 = j_va("SetDamagePartHealth: cannot set health to <= 0 with this function.  Use DamageDamagePart instead.");
      Scr_Error(COM_ERR_2816, scrContext, v17);
    }
  }
LABEL_20:
  m_damagePartsCount = v7->m_damagePartsCount;
  v19 = 0i64;
  if ( m_damagePartsCount )
  {
    for ( i = v7->m_damageParts; i->m_partName != ConstString; ++i )
    {
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= m_damagePartsCount )
        return;
    }
    v21 = v19;
    if ( v13 )
    {
      m_subPartCount = v7->m_damageParts[v21].m_subPartCount;
      if ( m_subPartCount )
      {
        while ( *(scr_string_t *)((char *)&v7->m_damageParts[0].m_subParts[v12].m_subPartName + v21 * 56) != v13 )
        {
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= m_subPartCount )
            return;
        }
        v24 = v21 * 56 + 20 * v12;
        v25 = *(int *)((char *)&v7->m_damageParts[0].m_subParts[0].m_maxHealth + v24);
        if ( Int < v25 )
          v25 = Int;
        *(int *)((char *)&v7->m_damageParts[0].m_subParts[0].m_currentHealth + v24) = v25;
      }
    }
    else
    {
      m_maxPartHealth = v7->m_damageParts[v21].m_maxPartHealth;
      if ( Int < m_maxPartHealth )
        m_maxPartHealth = Int;
      v7->m_damageParts[v21].m_currentPartHealth = m_maxPartHealth;
    }
  }
}

