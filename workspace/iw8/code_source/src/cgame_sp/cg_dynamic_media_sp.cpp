/*
==============
CgDynamicMediaSP::GetCgDynamicMediaSP
==============
*/

CgDynamicMediaSP *__fastcall CgDynamicMediaSP::GetCgDynamicMediaSP()
{
  return ?GetCgDynamicMediaSP@CgDynamicMediaSP@@SAPEAV1@XZ();
}

/*
==============
CgDynamicMediaSP::CgDynamicMediaSP
==============
*/

void __fastcall CgDynamicMediaSP::CgDynamicMediaSP(CgDynamicMediaSP *this)
{
  ??0CgDynamicMediaSP@@QEAA@XZ(this);
}

/*
==============
CgDynamicMediaSP::LoadFx
==============
*/

void __fastcall CgDynamicMediaSP::LoadFx(CgDynamicMediaSP *this)
{
  ?LoadFx@CgDynamicMediaSP@@QEAAXXZ(this);
}

/*
==============
CgDynamicMediaSP::CgDynamicMediaSP
==============
*/
void CgDynamicMediaSP::CgDynamicMediaSP(CgDynamicMediaSP *this)
{
  FXRegisteredDef *m_fxs; 
  __int64 v3; 

  m_fxs = this->m_fxs;
  v3 = 1024i64;
  CgDynamicMedia::CgDynamicMedia(this, this->m_fxs, 0x400u);
  this->__vftable = (CgDynamicMediaSP_vtbl *)&CgDynamicMediaSP::`vftable';
  do
  {
    FXRegisteredDef::FXRegisteredDef(m_fxs++);
    --v3;
  }
  while ( v3 );
}

/*
==============
CgDynamicMediaSP::GetCgDynamicMediaSP
==============
*/
CgDynamicMedia *CgDynamicMediaSP::GetCgDynamicMediaSP()
{
  if ( (_BYTE)CgDynamicMedia::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_dynamic_media_sp.cpp", 11, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tCgDynamicMedia accessed when not SP type", "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return CgDynamicMedia::GetCgDynamicMedia();
}

/*
==============
CgDynamicMediaSP::LoadFx
==============
*/
void CgDynamicMediaSP::LoadFx(CgDynamicMediaSP *this)
{
  unsigned int i; 
  const char *ConfigString; 
  FXRegisteredDef *Fx; 

  CgDynamicMedia::ClearMediaCache(this);
  for ( i = 1; i < 0x400; ++i )
  {
    ConfigString = CL_GetConfigString(i + 2926);
    if ( !*ConfigString )
      break;
    Fx = CgDynamicMedia::GetFx(this, i);
    FX_LoadEffect(ConfigString, Fx);
  }
}

