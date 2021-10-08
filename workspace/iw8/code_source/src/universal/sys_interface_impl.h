/*
==============
Sys_ExitImmediately
==============
*/

void __fastcall __noreturn Sys_ExitImmediately(int errorCode)
{
  ?Sys_ExitImmediately@@YAXH@Z(errorCode);
}

/*
==============
Sys_Exception
==============
*/

void __fastcall Sys_Exception(void *exceptionPointer)
{
  ?Sys_Exception@@YAXPEAX@Z(exceptionPointer);
}

/*
==============
Sys_Abort
==============
*/

void __noreturn Sys_Abort(void)
{
  ?Sys_Abort@@YAXXZ();
}

/*
==============
Sys_Assert
==============
*/

void __fastcall Sys_Assert(const char *message)
{
  ?Sys_Assert@@YAXPEBD@Z(message);
}

/*
==============
Sys_Exit
==============
*/

void __fastcall __noreturn Sys_Exit(int errorCode)
{
  ?Sys_Exit@@YAXH@Z(errorCode);
}

/*
==============
Sys_Abort
==============
*/
void __noreturn Sys_Abort(void)
{
  abort();
}

/*
==============
Sys_Assert
==============
*/
void Sys_Assert(const char *message)
{
  ;
}

/*
==============
Sys_Exception
==============
*/
void Sys_Exception(void *exceptionPointer)
{
  ;
}

/*
==============
Sys_Exit
==============
*/
void __noreturn Sys_Exit(int errorCode)
{
  DLog_Shutdown();
  exit(errorCode);
}

/*
==============
Sys_ExitImmediately
==============
*/
void __noreturn Sys_ExitImmediately(int errorCode)
{
  _exit(errorCode);
}

