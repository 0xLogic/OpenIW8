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
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  const char *BuildTypeName; 
  const char *HardwareTypeName; 
  unsigned int RowCount; 
  unsigned int v17; 
  const char *ColumnValueForRow; 
  const char *v26; 
  unsigned __int8 PollTypeFromName; 
  char v28; 
  char v29; 
  const char *v40; 
  const char *v41; 
  char *fmt; 
  __int64 v58; 
  double v59; 
  double v60; 
  __int64 v61; 
  double v62; 
  double v63; 
  double v64; 
  StringTable *tablePtr; 
  char dest[64]; 

  v12 = hardware;
  v13 = build;
  BuildTypeName = MemBudget_GetBuildTypeName((MemBudget_BuildType)(unsigned __int8)build);
  HardwareTypeName = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)v12);
  if ( Com_sprintf_truncate(dest, 0x40ui64, "budgets/ContentMem_%s_%s.csv", HardwareTypeName, BuildTypeName) > 0 )
  {
    StringTable_GetAsset(dest, (const StringTable **)&tablePtr);
    RowCount = StringTable_GetRowCount(tablePtr);
    if ( RowCount )
    {
      v17 = 0;
      __asm
      {
        vmovaps [rsp+168h+var_68], xmm8
        vmovss  xmm8, cs:__real@5f000000
        vmovaps [rsp+168h+var_78], xmm9
        vmovss  xmm9, cs:__real@5f800000
        vmovaps [rsp+168h+var_88], xmm10
        vmovss  xmm10, cs:__real@3f000000
        vmovaps [rsp+168h+var_98], xmm11
        vmovaps [rsp+168h+var_A8], xmm12
        vmovss  xmm12, cs:__real@49800000
        vmovaps [rsp+168h+var_B8], xmm13
        vmovss  xmm13, cs:__real@35800000
        vmovaps [rsp+168h+var_C8], xmm14
        vmovaps [rsp+168h+var_48], xmm6
        vmovaps [rsp+168h+var_58], xmm7
        vxorps  xmm11, xmm11, xmm11
        vxorpd  xmm14, xmm14, xmm14
      }
      do
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v17, 0);
        v26 = StringTable_GetColumnValueForRow(tablePtr, v17, 1);
        if ( ColumnValueForRow && *ColumnValueForRow )
        {
          PollTypeFromName = MemBudget_GetPollTypeFromName(ColumnValueForRow);
          if ( PollTypeFromName == 38 )
          {
            Com_PrintWarning(16, "WARNING: Unknown contentmem entry type: %s in %s\n", ColumnValueForRow, dest);
          }
          else
          {
            if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 48, ASSERT_TYPE_ASSERT, "(memStr)", (const char *)&queryFormat, "memStr") )
              __debugbreak();
            if ( !*v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 49, ASSERT_TYPE_ASSERT, "(memStr[0])", (const char *)&queryFormat, "memStr[0]") )
              __debugbreak();
            *(double *)&_XMM0 = atof(v26);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vxorps  xmm0, xmm0, xmm0
              vmulss  xmm7, xmm1, xmm12
              vcomiss xmm7, xmm11
              vcvtsi2ss xmm0, xmm0, r13
              vaddss  xmm0, xmm0, xmm9
            }
            if ( v28 )
              goto LABEL_37;
            __asm { vcomiss xmm7, xmm0 }
            if ( !(v28 | v29) )
            {
LABEL_37:
              __asm
              {
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+168h+var_130], xmm0
                vcvtss2sd xmm1, xmm7, xmm7
                vmovsd  [rsp+168h+var_138], xmm14
                vmovsd  [rsp+168h+var_140], xmm1
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 52, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( floatVal ) && ( floatVal ) <= ( std::numeric_limits<size_t>::max() )", "floatVal not in [0.0f, std::numeric_limits<size_t>::max()]\n\t%g not in [%g, %g]", v59, v62, v64) )
                __debugbreak();
            }
            __asm
            {
              vaddss  xmm0, xmm7, xmm10
              vcomiss xmm0, xmm8
              vsubss  xmm0, xmm0, xmm8
              vcomiss xmm0, xmm8
              vcvttss2si rbx, xmm0
            }
            if ( v12 >= 4u )
            {
              LODWORD(v61) = 4;
              LODWORD(v58) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 55, ASSERT_TYPE_ASSERT, "(unsigned)( hardware ) < (unsigned)( ( sizeof( *array_counter( s_contentMemFiles ) ) + 0 ) )", "hardware doesn't index ARRAY_COUNT( s_contentMemFiles )\n\t%i not in [0, %i)", v58, v61) )
                __debugbreak();
            }
            if ( v13 >= 3u )
            {
              LODWORD(v61) = 3;
              LODWORD(v58) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_contentmem_read.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( build ) < (unsigned)( ( sizeof( *array_counter( s_contentMemFiles[0] ) ) + 0 ) )", "build doesn't index ARRAY_COUNT( s_contentMemFiles[0] )\n\t%i not in [0, %i)", v58, v61) )
                __debugbreak();
            }
            if ( PollTypeFromName >= 0x26u )
            {
              LODWORD(v61) = 38;
              LODWORD(v58) = PollTypeFromName;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v58, v61) )
                __debugbreak();
            }
            s_contentMemFiles[v12][v13].pollValues[PollTypeFromName] = _RBX;
            if ( !PollTypeFromName )
            {
              __asm
              {
                vxorps  xmm6, xmm6, xmm6
                vcvtsi2ss xmm6, xmm6, rcx
              }
              if ( MemBudget_Poll_GetBootPoll()->pollValues[0] < 0 )
                __asm { vaddss  xmm6, xmm6, xmm9 }
              v40 = MemBudget_GetBuildTypeName((MemBudget_BuildType)v13);
              v41 = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)v12);
              __asm
              {
                vmulss  xmm0, xmm7, xmm13
                vcvtss2sd xmm4, xmm0, xmm0
                vmulss  xmm1, xmm6, xmm13
                vcvtss2sd xmm3, xmm1, xmm1
                vmovsd  [rsp+168h+var_138], xmm4
                vsubss  xmm0, xmm6, xmm7
                vmulss  xmm2, xmm0, xmm13
                vcvtss2sd xmm1, xmm2, xmm2
                vmovsd  [rsp+168h+var_140], xmm3
                vmovsd  [rsp+168h+fmt], xmm1
              }
              Com_Printf(0, "Contentmem Diff from %7s %5s : %.3fmb (%.3fmb - %.3fmb)\n", v41, v40, *(double *)&fmt, v60, v63);
            }
          }
        }
        ++v17;
      }
      while ( v17 < RowCount );
      __asm
      {
        vmovaps xmm14, [rsp+168h+var_C8]
        vmovaps xmm13, [rsp+168h+var_B8]
        vmovaps xmm12, [rsp+168h+var_A8]
        vmovaps xmm11, [rsp+168h+var_98]
        vmovaps xmm10, [rsp+168h+var_88]
        vmovaps xmm9, [rsp+168h+var_78]
        vmovaps xmm8, [rsp+168h+var_68]
        vmovaps xmm7, [rsp+168h+var_58]
        vmovaps xmm6, [rsp+168h+var_48]
      }
    }
    else
    {
      Com_PrintError(16, "No contentmem entries in '%s'\n", dest);
    }
  }
}

