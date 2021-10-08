/*
==============
SvGameModeApplication::GetFrameDuration
==============
*/

int __fastcall SvGameModeApplication::GetFrameDuration(SvGameModeApplication *this)
{
  return ?GetFrameDuration@SvGameModeApplication@@QEBAHXZ(this);
}

/*
==============
SvGameModeApplication::SetFrameDuration
==============
*/

void __fastcall SvGameModeApplication::SetFrameDuration(SvGameModeApplication *this, const int frameDuration)
{
  ?SetFrameDuration@SvGameModeApplication@@QEAAXH@Z(this, frameDuration);
}

/*
==============
SvGameModeApplication::GetFrameDuration
==============
*/
__int64 SvGameModeApplication::GetFrameDuration(SvGameModeApplication *this)
{
  if ( this->m_frameDuration )
    return this->m_frameDuration;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  return this->m_frameDuration;
}

/*
==============
SvGameModeApplication::SetFrameDuration
==============
*/
void SvGameModeApplication::SetFrameDuration(SvGameModeApplication *this, const int frameDuration)
{
  __int64 v2; 
  unsigned int m_frameDuration; 

  v2 = (unsigned int)frameDuration;
  if ( frameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 169, ASSERT_TYPE_ASSERT, "( frameDuration > 0 )", (const char *)&queryFormat, "frameDuration > 0") )
    __debugbreak();
  this->m_frameDuration = v2;
  if ( (unsigned int)v2 > 0xFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v2, "unsigned", v2) )
      __debugbreak();
    m_frameDuration = this->m_frameDuration;
  }
  else
  {
    m_frameDuration = v2;
  }
  if ( (unsigned __int8)v2 != m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 174, ASSERT_TYPE_ASSERT, "( truncate_cast<byte>( m_frameDuration ) == m_frameDuration )", (const char *)&queryFormat, "truncate_cast<byte>( m_frameDuration ) == m_frameDuration") )
    __debugbreak();
}

