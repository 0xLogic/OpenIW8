/*
==============
Online_ErrorReporting::~Online_ErrorReporting
==============
*/

void __fastcall Online_ErrorReporting::~Online_ErrorReporting(Online_ErrorReporting *this)
{
  ??1Online_ErrorReporting@@UEAA@XZ(this);
}

/*
==============
Online_ErrorReporting::ShowLogOutput
==============
*/

bool __fastcall Online_ErrorReporting::ShowLogOutput(Online_ErrorReporting *this)
{
  return ?ShowLogOutput@Online_ErrorReporting@@UEAA_NXZ(this);
}

/*
==============
Online_ErrorReporting::ShowLogOutput
==============
*/
bool Online_ErrorReporting::ShowLogOutput(Online_ErrorReporting *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_onlineErrorDebug;
  if ( !DVARINT_onlineErrorDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlineErrorDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer != 0;
}

/*
==============
Online_ErrorReporting::~Online_ErrorReporting
==============
*/
void Online_ErrorReporting::~Online_ErrorReporting(Online_ErrorReporting *this)
{
  this->__vftable = (Online_ErrorReporting_vtbl *)&Online_ErrorReporting::`vftable';
}

