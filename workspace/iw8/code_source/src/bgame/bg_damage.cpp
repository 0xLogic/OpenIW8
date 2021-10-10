/*
==============
PM_Damage_CalcMeleeDamage
==============
*/

int __fastcall PM_Damage_CalcMeleeDamage(const BgHandler *handler, const bool isFatalDamage, const Weapon *weapon, bool isAlternate, __int16 victim)
{
  return ?PM_Damage_CalcMeleeDamage@@YAHPEBVBgHandler@@_NAEBUWeapon@@_NF@Z(handler, isFatalDamage, weapon, isAlternate, victim);
}

/*
==============
PM_Damage_CalcMeleeCountToFinisher
==============
*/

bool __fastcall PM_Damage_CalcMeleeCountToFinisher(const BgHandler *handler, const playerState_s *attackerPs, const Weapon *weapon, bool isAlternate, __int16 victim, int *outCountToFinisher)
{
  return ?PM_Damage_CalcMeleeCountToFinisher@@YA_NPEBVBgHandler@@PEBUplayerState_s@@AEBUWeapon@@_NFPEAH@Z(handler, attackerPs, weapon, isAlternate, victim, outCountToFinisher);
}

/*
==============
PM_Damage_CalcMeleeCountToFinisher
==============
*/
bool PM_Damage_CalcMeleeCountToFinisher(const BgHandler *handler, const playerState_s *attackerPs, const Weapon *weapon, bool isAlternate, __int16 victim, int *outCountToFinisher)
{
  bool result; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v11; 
  int v12; 
  unsigned __int64 v13; 
  int Int_Internal_DebugName; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  int v19[2]; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_damage.cpp", 49, ASSERT_TYPE_ASSERT, "( handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outCountToFinisher && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_damage.cpp", 50, ASSERT_TYPE_ASSERT, "( outCountToFinisher ) != ( nullptr )", "%s != %s\n\t%p, %p", "outCountToFinisher", "nullptr", NULL, NULL) )
    __debugbreak();
  v18 = 0;
  result = BG_GetMeleeCountToFinisher(weapon, isAlternate, &v18);
  if ( result )
  {
    if ( !handler->GetPlayerPerks((BgHandler *)handler, victim, (bitarray<64> *)v19) )
      goto LABEL_21;
    PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x40u);
    v11 = (unsigned int)PerkNetworkPriorityIndex;
    if ( PerkNetworkPriorityIndex >= 0 )
    {
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v17) = 64;
        LODWORD(v16) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v11 & 0x1F)) & v19[v11 >> 5]) != 0 )
      {
        *outCountToFinisher = 0x7FFFFFFF;
        return 1;
      }
    }
    v12 = BG_GetPerkNetworkPriorityIndex(0x3Fu);
    v13 = (unsigned int)v12;
    if ( v12 < 0 )
      goto LABEL_21;
    if ( (unsigned int)v12 >= 0x40 )
    {
      LODWORD(v17) = 64;
      LODWORD(v16) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v13 & 0x1F)) & v19[v13 >> 5]) != 0 )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARMPINT_perk_melee_resist_finisher_adjust, "perk_melee_resist_finisher_adjust");
      v15 = Int_Internal_DebugName + v18;
    }
    else
    {
LABEL_21:
      v15 = v18;
    }
    *outCountToFinisher = v15;
    return 1;
  }
  return result;
}

/*
==============
PM_Damage_CalcMeleeDamage
==============
*/
__int64 PM_Damage_CalcMeleeDamage(const BgHandler *handler, const bool isFatalDamage, const Weapon *weapon, bool isAlternate, __int16 victim)
{
  const dvar_t *v9; 
  int MeleeDamage; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v12; 
  int v14; 
  unsigned __int64 v15; 
  const dvar_t *v16; 
  __int64 v17; 
  __int64 v18; 
  int v19[2]; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_damage.cpp", 14, ASSERT_TYPE_ASSERT, "( handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( isFatalDamage )
  {
    v9 = DCONST_DVARINT_bg_MeleeFinisherDamage;
    if ( !DCONST_DVARINT_bg_MeleeFinisherDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_MeleeFinisherDamage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    return v9->current.unsignedInt;
  }
  else
  {
    MeleeDamage = BG_GetMeleeDamage(weapon, isAlternate);
    if ( handler->GetPlayerPerks((BgHandler *)handler, victim, (bitarray<64> *)v19) )
    {
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x40u);
      v12 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex >= 0 )
      {
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v18) = 64;
          LODWORD(v17) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v12 & 0x1F)) & v19[v12 >> 5]) != 0 )
          return 0i64;
      }
      v14 = BG_GetPerkNetworkPriorityIndex(0x3Fu);
      v15 = (unsigned int)v14;
      if ( v14 >= 0 )
      {
        if ( (unsigned int)v14 >= 0x40 )
        {
          LODWORD(v18) = 64;
          LODWORD(v17) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v15 & 0x1F)) & v19[v15 >> 5]) != 0 )
        {
          v16 = DCONST_DVARMPFLT_perk_melee_resist_factor;
          if ( !DCONST_DVARMPFLT_perk_melee_resist_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_melee_resist_factor") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          return (unsigned int)(int)(float)((float)MeleeDamage * v16->current.value);
        }
      }
    }
  }
  return (unsigned int)MeleeDamage;
}

