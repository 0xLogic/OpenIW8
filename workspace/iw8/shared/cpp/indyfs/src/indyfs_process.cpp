/*
==============
indyfs_process_pid
==============
*/

unsigned __int64 __fastcall indyfs_process_pid()
{
  return ?indyfs_process_pid@@YA_KXZ();
}

/*
==============
indyfs_process_tid
==============
*/

unsigned __int64 __fastcall indyfs_process_tid()
{
  return ?indyfs_process_tid@@YA_KXZ();
}

/*
==============
indyfs_process_pid
==============
*/
unsigned __int64 indyfs_process_pid()
{
  return GetCurrentProcessId();
}

/*
==============
indyfs_process_tid
==============
*/
unsigned __int64 indyfs_process_tid()
{
  return GetCurrentThreadId();
}

