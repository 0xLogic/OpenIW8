/*
==============
Dvar_ValidatePtr
==============
*/

const dvar_t *__fastcall Dvar_ValidatePtr(const dvar_t *dvar)
{
  return ?Dvar_ValidatePtr@@YAPEBUdvar_t@@PEBU1@@Z(dvar);
}

/*
==============
Dvar_ValidatePtr
==============
*/
const dvar_t *Dvar_ValidatePtr(const dvar_t *dvar)
{
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  return dvar;
}

