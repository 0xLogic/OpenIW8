/*
==============
StatMon_Reset
==============
*/

void StatMon_Reset(void)
{
  ?StatMon_Reset@@YAXXZ();
}

/*
==============
StatMon_GetStatsArray
==============
*/

void __fastcall StatMon_GetStatsArray(const statmonitor_s **array, int *count)
{
  ?StatMon_GetStatsArray@@YAXPEAPEBUstatmonitor_s@@PEAH@Z(array, count);
}

/*
==============
StatMon_Warning
==============
*/

void __fastcall StatMon_Warning(StatMon_Class smClass, StatMon_Type smType, int duration, const char *description, int value)
{
  ?StatMon_Warning@@YAXW4StatMon_Class@@W4StatMon_Type@@HPEBDH@Z(smClass, smType, duration, description, value);
}

/*
==============
StatMon_GetStatsArray
==============
*/
void StatMon_GetStatsArray(const statmonitor_s **array, int *count)
{
  *array = stats;
  *count = statCount;
}

/*
==============
StatMon_Reset
==============
*/
void StatMon_Reset(void)
{
  memset_0(stats, 0, sizeof(stats));
  statCount = 0;
}

/*
==============
StatMon_Warning
==============
*/
void StatMon_Warning(StatMon_Class smClass, StatMon_Type smType, int duration, const char *description, int value)
{
  __int64 v7; 
  __int64 v9; 
  bool v10; 
  __int64 v11; 
  __int64 v12; 

  v7 = smType;
  if ( com_statmon->current.enabled || com_statmon_demo->current.enabled && (unsigned int)(smType - 38) <= 1 )
  {
    if ( (unsigned int)smClass >= STATMON_CLASS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\statmonitor.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( smClass ) < (unsigned)( STATMON_CLASS_COUNT )", "smClass doesn't index STATMON_CLASS_COUNT\n\t%i not in [0, %i)", smClass, 2) )
      __debugbreak();
    if ( (unsigned int)v7 >= 0x2C )
    {
      LODWORD(v12) = 44;
      LODWORD(v11) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\statmonitor.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( smType ) < (unsigned)( STATMON_TYPE_COUNT )", "smType doesn't index STATMON_TYPE_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    Sys_EnterCriticalSection(CRITSECT_STATMON);
    v9 = v7;
    stats[v9].endtime = duration + Sys_Milliseconds();
    stats[v9].smClass = smClass;
    Core_strcpy(stats[v7].description, 0x100ui64, description);
    v10 = (int)v7 < statCount;
    stats[v9].value = value;
    if ( !v10 )
      statCount = v7 + 1;
    Sys_LeaveCriticalSection(CRITSECT_STATMON);
  }
}

