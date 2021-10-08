/*
==============
Stopwatch::Restart
==============
*/

unsigned __int64 __fastcall Stopwatch::Restart(Stopwatch *this)
{
  return ?Restart@Stopwatch@@QEAA_KXZ(this);
}

/*
==============
Stopwatch::Restart
==============
*/
unsigned __int64 Stopwatch::Restart(Stopwatch *this)
{
  unsigned __int64 v2; 
  __int64 v3; 

  if ( !this->m_started && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\stopwatch.h", 70, ASSERT_TYPE_ASSERT, "(IsStarted())", "%s\n\tStart should be called before restart", "IsStarted()") )
    __debugbreak();
  v2 = __rdtsc();
  v3 = v2 - this->m_ticks;
  this->m_ticks = v2;
  return v3;
}

