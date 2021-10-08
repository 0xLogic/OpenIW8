/*
==============
BgStatic::RestoreActiveStatics
==============
*/

void __fastcall BgStatic::RestoreActiveStatics(BgStatic *activeBgs)
{
  ?RestoreActiveStatics@BgStatic@@SAXPEAV1@@Z(activeBgs);
}

/*
==============
BgStatic::~BgStatic
==============
*/

void __fastcall BgStatic::~BgStatic(BgStatic *this)
{
  ??1BgStatic@@UEAA@XZ(this);
}

/*
==============
BgStatic::WeaponModelLoadStatusMaybeDirtyThisFrameVerification
==============
*/

void __fastcall BgStatic::WeaponModelLoadStatusMaybeDirtyThisFrameVerification(BgStatic *this, const characterInfo_t *ci)
{
  ?WeaponModelLoadStatusMaybeDirtyThisFrameVerification@BgStatic@@UEBAXPEBUcharacterInfo_t@@@Z(this, ci);
}

/*
==============
BgStatic::GetActiveStatics
==============
*/

BgStatic *__fastcall BgStatic::GetActiveStatics()
{
  return ?GetActiveStatics@BgStatic@@SAPEAV1@XZ();
}

/*
==============
BgStatic::OverridePlayerHideParts
==============
*/

void __fastcall BgStatic::OverridePlayerHideParts(BgStatic *this, const int entNum, const DObjPartBits *hidePartBits)
{
  ?OverridePlayerHideParts@BgStatic@@UEBAXHPEIBUDObjPartBits@@@Z(this, entNum, hidePartBits);
}

/*
==============
BgStatic::GetActiveStatics
==============
*/
BgStatic *BgStatic::GetActiveStatics()
{
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  return *(BgStatic **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
}

/*
==============
BgStatic::~BgStatic
==============
*/
void BgStatic::~BgStatic(BgStatic *this)
{
  this->__vftable = (BgStatic_vtbl *)&BgStatic::`vftable';
  if ( *(BgStatic **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) == this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 135, ASSERT_TYPE_ASSERT, "(ms_activeBgs != this)", "%s\n\tTrying to destroy the active game state.", "ms_activeBgs != this") )
    __debugbreak();
}

/*
==============
BgStatic::OverridePlayerHideParts
==============
*/
void BgStatic::OverridePlayerHideParts(BgStatic *this, const int entNum, const DObjPartBits *hidePartBits)
{
  ;
}

/*
==============
BgStatic::WeaponModelLoadStatusMaybeDirtyThisFrameVerification
==============
*/
void BgStatic::WeaponModelLoadStatusMaybeDirtyThisFrameVerification(BgStatic *this, const characterInfo_t *ci)
{
  ;
}

/*
==============
BgStatic::RestoreActiveStatics
==============
*/
void BgStatic::RestoreActiveStatics(BgStatic *activeBgs)
{
  __int64 v2; 

  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v2 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 162, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == nullptr ) )", "( ms_activeBgs ) = %p", *(const void **)(v2 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = activeBgs;
}

