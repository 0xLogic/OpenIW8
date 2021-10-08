/*
==============
Com_DediMapCheck_CheckMap
==============
*/

void __fastcall Com_DediMapCheck_CheckMap(const char *mapName)
{
  ?Com_DediMapCheck_CheckMap@@YAXPEBD@Z(mapName);
}

/*
==============
Com_DediMapCheck_Init
==============
*/

void Com_DediMapCheck_Init(void)
{
  ?Com_DediMapCheck_Init@@YAXXZ();
}

/*
==============
Com_DediMapCheck_CheckMap
==============
*/
void Com_DediMapCheck_CheckMap(const char *mapName)
{
  int i; 
  const char *ColumnValueForRow; 
  __int64 v4; 
  const char *v5; 
  signed __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 

  if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && Mem_Paged_GetDevMemorySize() < 0x30000000 )
  {
    if ( !s_dediMapsCsv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dedi_map_check.cpp", 57, ASSERT_TYPE_ASSERT, "(s_dediMapsCsv)", (const char *)&queryFormat, "s_dediMapsCsv") )
      __debugbreak();
    if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dedi_map_check.cpp", 58, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
      __debugbreak();
    for ( i = 0; i < StringTable_GetRowCount(s_dediMapsCsv); ++i )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(s_dediMapsCsv, i, 0);
      if ( ColumnValueForRow )
      {
        v4 = 0x7FFFFFFFi64;
        v5 = mapName;
        if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v6 = ColumnValueForRow - mapName;
        do
        {
          v7 = (unsigned __int8)v5[v6];
          v8 = v4;
          v9 = *(unsigned __int8 *)v5++;
          --v4;
          if ( !v8 )
            break;
          if ( v7 != (_DWORD)v9 )
          {
            v10 = v7 + 32;
            if ( (unsigned int)(v7 - 65) > 0x19 )
              v10 = v7;
            v7 = v10;
            v11 = v9 + 32;
            if ( (unsigned int)(v9 - 65) > 0x19 )
              v11 = v9;
            if ( v7 != v11 )
              goto LABEL_24;
          }
        }
        while ( v7 );
        Sys_Error((const ObfuscateErrorText)&stru_143ED6B40, mapName, v9);
      }
LABEL_24:
      ;
    }
  }
}

/*
==============
Com_DediMapCheck_Init
==============
*/
void Com_DediMapCheck_Init(void)
{
  if ( s_dediMapsCsv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_dedi_map_check.cpp", 21, ASSERT_TYPE_ASSERT, "(s_dediMapsCsv == nullptr)", (const char *)&queryFormat, "s_dediMapsCsv == nullptr") )
    __debugbreak();
  StringTable_GetAsset("mp/dedimaps.csv", &s_dediMapsCsv);
}

