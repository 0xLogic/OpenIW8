/*
==============
LerpEntityStateBeamEntBonePair::SetEntityNum
==============
*/

void __fastcall LerpEntityStateBeamEntBonePair::SetEntityNum(LerpEntityStateBeamEntBonePair *this, const int entNum)
{
  ?SetEntityNum@LerpEntityStateBeamEntBonePair@@QEAAXH@Z(this, entNum);
}

/*
==============
LerpEntityStateBeamEntBonePair::SetEntityClientTagIndex
==============
*/

void __fastcall LerpEntityStateBeamEntBonePair::SetEntityClientTagIndex(LerpEntityStateBeamEntBonePair *this, const unsigned int clientTagIndex)
{
  ?SetEntityClientTagIndex@LerpEntityStateBeamEntBonePair@@QEAAXI@Z(this, clientTagIndex);
}

/*
==============
playerAnim_t::SetPrimaryAnim
==============
*/

void __fastcall playerAnim_t::SetPrimaryAnim(playerAnim_t *this, unsigned int anim)
{
  ?SetPrimaryAnim@playerAnim_t@@QEAAXI@Z(this, anim);
}

/*
==============
AgentAttachModelData::GetBitCount
==============
*/

unsigned int __fastcall AgentAttachModelData::GetBitCount()
{
  return ?GetBitCount@AgentAttachModelData@@SAIXZ();
}

/*
==============
LerpEntityStateBeamScript::GetBitCount
==============
*/

unsigned int __fastcall LerpEntityStateBeamScript::GetBitCount()
{
  return ?GetBitCount@LerpEntityStateBeamScript@@SAIXZ();
}

/*
==============
playerAnim_t::SetSecondaryAnim
==============
*/

void __fastcall playerAnim_t::SetSecondaryAnim(playerAnim_t *this, unsigned int anim)
{
  ?SetSecondaryAnim@playerAnim_t@@QEAAXI@Z(this, anim);
}

/*
==============
playerAnim_t::SetPrimaryAnim
==============
*/
void playerAnim_t::SetPrimaryAnim(playerAnim_t *this, unsigned int anim)
{
  __int16 v2; 

  v2 = anim;
  if ( anim >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.h", 1158, ASSERT_TYPE_ASSERT, "(unsigned)( anim ) < (unsigned)( (1 << 14) )", "anim doesn't index MAX_PLAYERANIM_ENTRY_COUNT\n\t%i not in [0, %i)", anim, 0x4000) )
    __debugbreak();
  *(_DWORD *)this &= 0xDFFF0007;
  *(_DWORD *)this |= 8 * (v2 & 0x1FFF | ((v2 & 0x2000) << 13));
}

/*
==============
playerAnim_t::SetSecondaryAnim
==============
*/
void playerAnim_t::SetSecondaryAnim(playerAnim_t *this, unsigned int anim)
{
  __int16 v2; 

  v2 = anim;
  if ( anim >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.h", 1178, ASSERT_TYPE_ASSERT, "(unsigned)( anim ) < (unsigned)( (1 << 14) )", "anim doesn't index MAX_PLAYERANIM_ENTRY_COUNT\n\t%i not in [0, %i)", anim, 0x4000) )
    __debugbreak();
  *(_DWORD *)this &= 0xA000FFFF;
  *(_DWORD *)this |= (v2 & 0x1FFF | (2 * (v2 & 0x2000))) << 16;
}

/*
==============
LerpEntityStateBeamEntBonePair::SetEntityClientTagIndex
==============
*/
void LerpEntityStateBeamEntBonePair::SetEntityClientTagIndex(LerpEntityStateBeamEntBonePair *this, const unsigned int clientTagIndex)
{
  int v4; 
  unsigned int v5; 
  int v6; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 74, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( !BgDynamicLimits::ms_data.m_clientTagBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 75, ASSERT_TYPE_ASSERT, "(ms_data.m_clientTagBits > 0)", (const char *)&queryFormat, "ms_data.m_clientTagBits > 0") )
    __debugbreak();
  v4 = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits);
  if ( clientTagIndex >= 1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits) )
  {
    v6 = 1 << SLOBYTE(BgDynamicLimits::ms_data.m_clientTagBits);
    v5 = clientTagIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.h", 540, ASSERT_TYPE_ASSERT, "( clientTagIndex ) < ( ( 1u << attachBits ) )", "%s < %s\n\t%i, %i", "clientTagIndex", "( 1u << attachBits )", v5, v6) )
      __debugbreak();
  }
  this->m_data = ((clientTagIndex & (v4 - 1)) << 11) | this->m_data & ~((v4 - 1) << 11);
}

/*
==============
LerpEntityStateBeamEntBonePair::SetEntityNum
==============
*/
void LerpEntityStateBeamEntBonePair::SetEntityNum(LerpEntityStateBeamEntBonePair *this, const int entNum)
{
  __int16 v2; 

  v2 = entNum;
  if ( entNum >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitystate.h", 520, ASSERT_TYPE_ASSERT, "(entNum < ( 1 << ( 11 ) ))", (const char *)&queryFormat, "entNum < ( 1 << GENTITYNUM_BITS )") )
    __debugbreak();
  this->m_data &= 0xFFFFF800;
  this->m_data |= v2 & 0x7FF;
}

/*
==============
AgentAttachModelData::GetBitCount
==============
*/
__int64 AgentAttachModelData::GetBitCount()
{
  unsigned int m_modelBits; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 82, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( !BgDynamicLimits::ms_data.m_modelBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 83, ASSERT_TYPE_ASSERT, "(ms_data.m_modelBits > 0)", (const char *)&queryFormat, "ms_data.m_modelBits > 0") )
    __debugbreak();
  m_modelBits = BgDynamicLimits::ms_data.m_modelBits;
  return m_modelBits + BgDynamicLimits::GetClientAttachTagBits();
}

/*
==============
LerpEntityStateBeamScript::GetBitCount
==============
*/
__int64 LerpEntityStateBeamScript::GetBitCount()
{
  unsigned int m_effectBits; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 66, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( !BgDynamicLimits::ms_data.m_effectBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 67, ASSERT_TYPE_ASSERT, "(ms_data.m_effectBits > 0)", (const char *)&queryFormat, "ms_data.m_effectBits > 0") )
    __debugbreak();
  m_effectBits = BgDynamicLimits::ms_data.m_effectBits;
  return m_effectBits + BgDynamicLimits::GetClientAttachTagBits();
}

