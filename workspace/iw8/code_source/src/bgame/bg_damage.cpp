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
  const dvar_t *v10; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v13; 
  int v15; 
  unsigned __int64 v16; 
  const dvar_t *v17; 
  __int64 v21; 
  __int64 v22; 
  int v23[2]; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_damage.cpp", 14, ASSERT_TYPE_ASSERT, "( handler ) != ( nullptr )", "%s != %s\n\t%p, %p", "handler", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( isFatalDamage )
  {
    v10 = DCONST_DVARINT_bg_MeleeFinisherDamage;
    if ( !DCONST_DVARINT_bg_MeleeFinisherDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_MeleeFinisherDamage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    return v10->current.unsignedInt;
  }
  else
  {
    _EDI = BG_GetMeleeDamage(weapon, isAlternate);
    if ( handler->GetPlayerPerks((BgHandler *)handler, victim, (bitarray<64> *)v23) )
    {
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x40u);
      v13 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex >= 0 )
      {
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v22) = 64;
          LODWORD(v21) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v13 & 0x1F)) & v23[v13 >> 5]) != 0 )
          return 0i64;
      }
      v15 = BG_GetPerkNetworkPriorityIndex(0x3Fu);
      v16 = (unsigned int)v15;
      if ( v15 >= 0 )
      {
        if ( (unsigned int)v15 >= 0x40 )
        {
          LODWORD(v22) = 64;
          LODWORD(v21) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v16 & 0x1F)) & v23[v16 >> 5]) != 0 )
        {
          v17 = DCONST_DVARMPFLT_perk_melee_resist_factor;
          if ( !DCONST_DVARMPFLT_perk_melee_resist_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_melee_resist_factor") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, edi
            vmulss  xmm0, xmm0, dword ptr [rbx+28h]
            vcvttss2si edi, xmm0
          }
        }
      }
    }
  }
  return _EDI;
}

