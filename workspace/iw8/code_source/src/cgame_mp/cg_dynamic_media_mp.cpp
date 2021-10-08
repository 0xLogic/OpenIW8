/*
==============
CgDynamicMediaMP::CgDynamicMediaMP
==============
*/

void __fastcall CgDynamicMediaMP::CgDynamicMediaMP(CgDynamicMediaMP *this)
{
  ??0CgDynamicMediaMP@@QEAA@XZ(this);
}

/*
==============
CgDynamicMediaMP::RegisterEffectCallback
==============
*/

void __fastcall CgDynamicMediaMP::RegisterEffectCallback(const unsigned int effectIndex, const char *effectName)
{
  ?RegisterEffectCallback@CgDynamicMediaMP@@CAXIPEBD@Z(effectIndex, effectName);
}

/*
==============
CgDynamicMediaMP::LoadFx
==============
*/

void __fastcall CgDynamicMediaMP::LoadFx(CgDynamicMediaMP *this)
{
  ?LoadFx@CgDynamicMediaMP@@QEAAXXZ(this);
}

/*
==============
CgDynamicMediaMP::GetCgDynamicMediaMP
==============
*/

CgDynamicMediaMP *__fastcall CgDynamicMediaMP::GetCgDynamicMediaMP()
{
  return ?GetCgDynamicMediaMP@CgDynamicMediaMP@@SAPEAV1@XZ();
}

/*
==============
CgDynamicMediaMP::CgDynamicMediaMP
==============
*/
void CgDynamicMediaMP::CgDynamicMediaMP(CgDynamicMediaMP *this)
{
  FXRegisteredDef *m_fxs; 
  __int64 v3; 

  m_fxs = this->m_fxs;
  v3 = 512i64;
  CgDynamicMedia::CgDynamicMedia(this, this->m_fxs, 0x200u);
  this->__vftable = (CgDynamicMediaMP_vtbl *)&CgDynamicMediaMP::`vftable';
  do
  {
    FXRegisteredDef::FXRegisteredDef(m_fxs++);
    --v3;
  }
  while ( v3 );
}

/*
==============
CgDynamicMediaMP::GetCgDynamicMediaMP
==============
*/
CgDynamicMedia *CgDynamicMediaMP::GetCgDynamicMediaMP()
{
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_dynamic_media_mp.cpp", 8, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tCgDynamicMedia accessed when not MP type", "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return CgDynamicMedia::GetCgDynamicMedia();
}

/*
==============
CgDynamicMediaMP::LoadFx
==============
*/
void CgDynamicMediaMP::LoadFx(CgDynamicMediaMP *this)
{
  CgDynamicMedia::ClearMediaCache(this);
  NetConstStrings_CallForAllOfType(NETCONSTSTRINGTYPE_VFX, 1u, CgDynamicMediaMP::RegisterEffectCallback);
}

/*
==============
CgDynamicMediaMP::RegisterEffectCallback
==============
*/
void CgDynamicMediaMP::RegisterEffectCallback(const unsigned int effectIndex, const char *effectName)
{
  CgDynamicMedia *CgDynamicMedia; 
  FXRegisteredDef *Fx; 

  if ( !effectIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_dynamic_media_mp.cpp", 23, ASSERT_TYPE_ASSERT, "(effectIndex != 0)", "%s\n\tEffect index 0 is reserved for the 'empty' vfx", "effectIndex != 0") )
    __debugbreak();
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_dynamic_media_mp.cpp", 8, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tCgDynamicMedia accessed when not MP type", "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
  Fx = CgDynamicMedia::GetFx(CgDynamicMedia, effectIndex);
  FX_LoadEffect(effectName, Fx);
}

