/*
==============
BG_UnsetPerk
==============
*/

void __fastcall BG_UnsetPerk(bitarray<64> *perks, unsigned int perkIndex)
{
  ?BG_UnsetPerk@@YAXPEAV?$bitarray@$0EA@@@I@Z(perks, perkIndex);
}

/*
==============
BG_HasPerk
==============
*/

bool __fastcall BG_HasPerk(const bitarray<64> *r_perks, unsigned int perkIndex)
{
  return ?BG_HasPerk@@YA_NAEBV?$bitarray@$0EA@@@I@Z(r_perks, perkIndex);
}

/*
==============
BG_SetPerk
==============
*/

void __fastcall BG_SetPerk(bitarray<64> *perks, unsigned int perkIndex)
{
  ?BG_SetPerk@@YAXPEAV?$bitarray@$0EA@@@I@Z(perks, perkIndex);
}

/*
==============
BG_HasPerk
==============
*/
bool BG_HasPerk(const bitarray<64> *r_perks, unsigned int perkIndex)
{
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v4; 

  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(perkIndex);
  v4 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex < 0 )
    return 0;
  if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", PerkNetworkPriorityIndex, 64) )
    __debugbreak();
  return ((0x80000000 >> (v4 & 0x1F)) & r_perks->array[v4 >> 5]) != 0;
}

/*
==============
BG_SetPerk
==============
*/
void BG_SetPerk(bitarray<64> *perks, unsigned int perkIndex)
{
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v5; 
  const char *PerkNameForCodeIndex; 

  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(perkIndex);
  v5 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", PerkNetworkPriorityIndex, 64) )
      __debugbreak();
    perks->array[v5 >> 5] |= 0x80000000 >> (v5 & 0x1F);
  }
  else
  {
    PerkNameForCodeIndex = BG_GetPerkNameForCodeIndex(perkIndex);
    Com_PrintWarning(0, "WARNING: BG_SetPerk: Attempting to set invalid perk '%s' - ensure perk is registered as valid networked perk\n", PerkNameForCodeIndex);
  }
}

/*
==============
BG_UnsetPerk
==============
*/
void BG_UnsetPerk(bitarray<64> *perks, unsigned int perkIndex)
{
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v5; 
  const char *PerkNameForCodeIndex; 

  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(perkIndex);
  v5 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", PerkNetworkPriorityIndex, 64) )
      __debugbreak();
    perks->array[v5 >> 5] &= ~(0x80000000 >> (v5 & 0x1F));
  }
  else
  {
    PerkNameForCodeIndex = BG_GetPerkNameForCodeIndex(perkIndex);
    Com_PrintWarning(0, "WARNING: BG_UnsetPerk: Attempting to unset invalid perk '%s' - ensure perk is registered as valid networked perk\n", PerkNameForCodeIndex);
  }
}

