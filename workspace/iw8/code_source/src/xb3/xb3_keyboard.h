/*
==============
KeyStatus::KeyStatus
==============
*/

void __fastcall KeyStatus::KeyStatus(KeyStatus *this, const Windows::UI::Core::CorePhysicalKeyStatus *status)
{
  ??0KeyStatus@@QEAA@AEBVCorePhysicalKeyStatus@Core@UI@Windows@@@Z(this, status);
}

/*
==============
KeyStatus::KeyStatus
==============
*/
void KeyStatus::KeyStatus(KeyStatus *this, const Windows::UI::Core::CorePhysicalKeyStatus *status)
{
  unsigned int v4; 

  this->repeatCount = truncate_cast<unsigned short,unsigned int>((unsigned int)status->__vftable);
  v4 = HIDWORD(status->__vftable);
  if ( v4 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v4, "unsigned", HIDWORD(status->__vftable)) )
    __debugbreak();
  this->scanCode = v4;
  this->isExtendedKey = status->IsExtendedKey;
  this->isMenuKeyDown = status->IsMenuKeyDown;
  this->wasKeyDown = status->WasKeyDown;
  this->isKeyReleased = status->IsKeyReleased;
}

