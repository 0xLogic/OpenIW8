/*
==============
MemBudget_ContentMemRead_GetContentMem
==============
*/

const MemBudget_PollArray *__fastcall MemBudget_ContentMemRead_GetContentMem(MemBudget_HardwareType hardware, MemBudget_BuildType build)
{
  return ?MemBudget_ContentMemRead_GetContentMem@@YAAEBUMemBudget_PollArray@@W4MemBudget_HardwareType@@W4MemBudget_BuildType@@@Z(hardware, build);
}

/*
==============
MemBudget_ContentMemRead_Init
==============
*/

void MemBudget_ContentMemRead_Init(void)
{
  ?MemBudget_ContentMemRead_Init@@YAXXZ();
}

/*
==============
MemBudget_ContentMemRead_GetContentMem
==============
*/
MemBudget_PollArray *MemBudget_ContentMemRead_GetContentMem(MemBudget_HardwareType hardware, MemBudget_BuildType build)
{
  unsigned __int8 v2; 
  unsigned __int8 v3; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v2 = build;
  v3 = hardware;
  if ( (unsigned __int8)hardware >= 4u )
  {
    v8 = 4;
    v6 = (unsigned __int8)hardware;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( hardware ) < (unsigned)( ( sizeof( *array_counter( s_contentMemFiles ) ) + 0 ) )", "hardware doesn't index ARRAY_COUNT( s_contentMemFiles )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( v2 >= 3u )
  {
    LODWORD(v7) = 3;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( build ) < (unsigned)( ( sizeof( *array_counter( s_contentMemFiles[0] ) ) + 0 ) )", "build doesn't index ARRAY_COUNT( s_contentMemFiles[0] )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_contentMemFiles[v3][v2];
}

/*
==============
MemBudget_ContentMemRead_Init
==============
*/
void MemBudget_ContentMemRead_Init(void)
{
  unsigned int i; 
  unsigned int j; 

  Com_Printf(0, "****** CONTENTMEM DIFFS ******\n");
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 3; ++j )
      MemBudget_ContentMemRead_ParseFile((const MemBudget_HardwareType)(unsigned __int8)i, (const MemBudget_BuildType)(unsigned __int8)j);
  }
  Com_Printf(0, "****** CONTENTMEM DIFFS ******\n");
}

/*
==============
MemBudget_ContentMemRead_ParseFile
==============
*/
void MemBudget_ContentMemRead_ParseFile(const MemBudget_HardwareType hardware, const MemBudget_BuildType build)
{
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  const char *BuildTypeName; 
  const char *HardwareTypeName; 
  unsigned int RowCount; 
  unsigned int v9; 
  const char *ColumnValueForRow; 
  const char *v12; 
  unsigned __int8 PollTypeFromName; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  const MemBudget_PollArray *BootPoll; 
  __int128 v22; 
  __int128 v23; 
  const char *v24; 
  const char *v25; 
  __int64 v26; 
  __int64 v27; 
  StringTable *tablePtr; 
  char dest[64]; 
  __int128 v30; 

  v4 = hardware;
  v5 = build;
  BuildTypeName = MemBudget_GetBuildTypeName((MemBudget_BuildType)(unsigned __int8)build);
  HardwareTypeName = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)v4);
  if ( Com_sprintf_truncate(dest, 0x40ui64, "budgets/ContentMem_%s_%s.csv", HardwareTypeName, BuildTypeName) > 0 )
  {
    StringTable_GetAsset(dest, (const StringTable **)&tablePtr);
    RowCount = StringTable_GetRowCount(tablePtr);
    if ( RowCount )
    {
      v9 = 0;
      v30 = _XMM14;
      __asm { vxorpd  xmm14, xmm14, xmm14 }
      do
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v9, 0);
        v12 = StringTable_GetColumnValueForRow(tablePtr, v9, 1);
        if ( ColumnValueForRow && *ColumnValueForRow )
        {
          PollTypeFromName = MemBudget_GetPollTypeFromName(ColumnValueForRow);
          if ( PollTypeFromName == 38 )
          {
            Com_PrintWarning(16, "WARNING: Unknown contentmem entry type: %s in %s\n", ColumnValueForRow, dest);
          }
          else
          {
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 48, ASSERT_TYPE_ASSERT, "(memStr)", (const char *)&queryFormat, "memStr") )
              __debugbreak();
            if ( !*v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 49, ASSERT_TYPE_ASSERT, "(memStr[0])", (const char *)&queryFormat, "memStr[0]") )
              __debugbreak();
            *(double *)&_XMM0 = atof(v12);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            v16 = _XMM1;
            *(float *)&v16 = *(float *)&_XMM1 * 1048576.0;
            v15 = v16;
            *(float *)&v16 = (float)-1i64;
            v17 = *(float *)&v16 + 1.8446744e19;
            if ( ((float)(*(float *)&_XMM1 * 1048576.0) < 0.0 || *(float *)&v15 > v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 52, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( floatVal ) && ( floatVal ) <= ( std::numeric_limits<size_t>::max() )", "floatVal not in [0.0f, std::numeric_limits<size_t>::max()]\n\t%g not in [%g, %g]", *(float *)&v15, *(double *)&_XMM14, v17) )
              __debugbreak();
            v18 = v15;
            *(float *)&v18 = *(float *)&v15 + 0.5;
            _XMM0 = v18;
            v19 = 0i64;
            if ( (float)(*(float *)&v15 + 0.5) >= 9.223372e18 )
            {
              *(float *)&v18 = *(float *)&v18 - 9.223372e18;
              _XMM0 = v18;
              if ( *(float *)&v18 < 9.223372e18 )
                v19 = 0x8000000000000000ui64;
            }
            v20 = v19 + (unsigned int)(int)*(float *)&_XMM0;
            if ( v4 >= 4u )
            {
              LODWORD(v27) = 4;
              LODWORD(v26) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 55, ASSERT_TYPE_ASSERT, "(unsigned)( hardware ) < (unsigned)( ( sizeof( *array_counter( s_contentMemFiles ) ) + 0 ) )", "hardware doesn't index ARRAY_COUNT( s_contentMemFiles )\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            if ( v5 >= 3u )
            {
              LODWORD(v27) = 3;
              LODWORD(v26) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( build ) < (unsigned)( ( sizeof( *array_counter( s_contentMemFiles[0] ) ) + 0 ) )", "build doesn't index ARRAY_COUNT( s_contentMemFiles[0] )\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            if ( PollTypeFromName >= 0x26u )
            {
              LODWORD(v27) = 38;
              LODWORD(v26) = PollTypeFromName;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            s_contentMemFiles[v4][v5].pollValues[PollTypeFromName] = v20;
            if ( !PollTypeFromName )
            {
              BootPoll = MemBudget_Poll_GetBootPoll();
              v23 = 0i64;
              *(float *)&v23 = (float)BootPoll->pollValues[0];
              v22 = v23;
              if ( BootPoll->pollValues[0] < 0 )
              {
                *(float *)&v23 = *(float *)&v23 + 1.8446744e19;
                v22 = v23;
              }
              v24 = MemBudget_GetBuildTypeName((MemBudget_BuildType)v5);
              v25 = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)v4);
              *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v22 + 1);
              Com_Printf(0, "Contentmem Diff from %7s %5s : %.3fmb (%.3fmb - %.3fmb)\n", v25, v24, (float)((float)(*(float *)&v22 - *(float *)&v15) * 0.00000095367432), (float)(*(float *)&v22 * 0.00000095367432), (float)(*(float *)&v15 * 0.00000095367432));
            }
          }
        }
        ++v9;
      }
      while ( v9 < RowCount );
    }
    else
    {
      Com_PrintError(16, "No contentmem entries in '%s'\n", dest);
    }
  }
}

