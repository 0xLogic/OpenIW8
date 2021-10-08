/*
==============
MemBudget_BudgetFile_UpdateForHUD
==============
*/

void MemBudget_BudgetFile_UpdateForHUD(void)
{
  ?MemBudget_BudgetFile_UpdateForHUD@@YAXXZ();
}

/*
==============
MemBudget_BudgetFile_Init
==============
*/

void MemBudget_BudgetFile_Init(void)
{
  ?MemBudget_BudgetFile_Init@@YAXXZ();
}

/*
==============
MemBudgetMatch::AddString
==============
*/

void __fastcall MemBudgetMatch::AddString(MemBudgetMatch *this, const char *str)
{
  ?AddString@MemBudgetMatch@@QEAAXPEBD@Z(this, str);
}

/*
==============
MemBudget_BudgetFile_GetCurrentBudgets
==============
*/

const MemBudget_PollArray *__fastcall MemBudget_BudgetFile_GetCurrentBudgets()
{
  return ?MemBudget_BudgetFile_GetCurrentBudgets@@YAAEBUMemBudget_PollArray@@XZ();
}

/*
==============
MemBudget_BudgetFile_Update
==============
*/

void MemBudget_BudgetFile_Update(void)
{
  ?MemBudget_BudgetFile_Update@@YAXXZ();
}

/*
==============
MemBudget_BudgetFile_GetProjectedBudgets
==============
*/

const MemBudget_PollArray *__fastcall MemBudget_BudgetFile_GetProjectedBudgets(MemBudget_HardwareType hwType, MemBudget_BuildType buildType)
{
  return ?MemBudget_BudgetFile_GetProjectedBudgets@@YAAEBUMemBudget_PollArray@@W4MemBudget_HardwareType@@W4MemBudget_BuildType@@@Z(hwType, buildType);
}

/*
==============
MemBudgetMatch::AddString
==============
*/
void MemBudgetMatch::AddString(MemBudgetMatch *this, const char *str)
{
  unsigned int v4; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_budgetfile.cpp", 77, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  v4 = MemBudget_HashString(str);
  if ( this->matchHashes.m_size >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  *(_DWORD *)&this->matchHashes.m_data.m_buffer[4 * this->matchHashes.m_size++] = v4;
}

/*
==============
MemBudget_BudgetFile_CreateMatch
==============
*/
void MemBudget_BudgetFile_CreateMatch(const MemBudget_HardwareType hardware, const MemBudget_BuildType build, MemBudgetMatch *outMatch, const bool projection)
{
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  const char *HardwareTypeName; 
  const char *v9; 
  const char *BuildTypeName; 
  unsigned int v11; 
  MemBudget_GameModeType CurrentGameModeType; 
  const char *GameModeTypeName; 
  bool v14; 
  char v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 

  v6 = build;
  v7 = hardware;
  HardwareTypeName = MemBudget_GetHardwareTypeName(hardware);
  MemBudgetMatch::AddString(outMatch, HardwareTypeName);
  if ( v7 <= 1u )
  {
    v9 = "ps4";
  }
  else if ( v7 > 3u )
  {
    v19 = v7;
    v9 = (char *)&queryFormat.fmt + 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_budgetfile.cpp", 160, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown hw : %u", v19) )
      __debugbreak();
  }
  else
  {
    v9 = "xb3";
  }
  MemBudgetMatch::AddString(outMatch, v9);
  BuildTypeName = MemBudget_GetBuildTypeName((MemBudget_BuildType)v6);
  MemBudgetMatch::AddString(outMatch, BuildTypeName);
  if ( v6 <= 1u )
  {
    v11 = MemBudget_HashString("dev");
    if ( outMatch->matchHashes.m_size >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    *(_DWORD *)&outMatch->matchHashes.m_data.m_buffer[4 * outMatch->matchHashes.m_size++] = v11;
  }
  CurrentGameModeType = (unsigned __int8)MemBudget_GetCurrentGameModeType();
  GameModeTypeName = MemBudget_GetGameModeTypeName(CurrentGameModeType);
  MemBudgetMatch::AddString(outMatch, GameModeTypeName);
  if ( cls.m_activeGameMapName[0] )
    MemBudgetMatch::AddString(outMatch, cls.m_activeGameMapName);
  if ( (_BYTE)CurrentGameModeType )
  {
    v14 = Com_FrontEndScene_IsActive() || Com_FrontEnd_IsInFrontEnd();
    if ( Com_IsAnyLocalServerRunning() && !v14 || (v15 = 0, projection) )
      v15 = 1;
    if ( !CL_TransientsWorldMP_IsActive() )
      goto LABEL_33;
    v16 = MemBudget_HashString("trmap");
    if ( outMatch->matchHashes.m_size >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    *(_DWORD *)&outMatch->matchHashes.m_data.m_buffer[4 * outMatch->matchHashes.m_size++] = v16;
    if ( CL_TransientsWorldMP_IsBRMode() )
    {
      v17 = MemBudget_HashString("brmap");
      if ( outMatch->matchHashes.m_size >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      *(_DWORD *)&outMatch->matchHashes.m_data.m_buffer[4 * outMatch->matchHashes.m_size++] = v17;
    }
    if ( !projection )
    {
LABEL_33:
      if ( v15 )
      {
        v18 = MemBudget_HashString("server");
        if ( outMatch->matchHashes.m_size >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        *(_DWORD *)&outMatch->matchHashes.m_data.m_buffer[4 * outMatch->matchHashes.m_size++] = v18;
      }
    }
  }
}

/*
==============
MemBudget_BudgetFile_GetCurrentBudgets
==============
*/
MemBudget_PollArray *MemBudget_BudgetFile_GetCurrentBudgets()
{
  return &s_currentBudgets;
}

/*
==============
MemBudget_BudgetFile_GetProjectedBudgets
==============
*/
MemBudget_PollArray *MemBudget_BudgetFile_GetProjectedBudgets(MemBudget_HardwareType hwType, MemBudget_BuildType buildType)
{
  unsigned __int8 v2; 
  unsigned __int8 v3; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v2 = buildType;
  v3 = hwType;
  if ( (unsigned __int8)hwType >= 4u )
  {
    v8 = 4;
    v6 = (unsigned __int8)hwType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_budgetfile.cpp", 472, ASSERT_TYPE_ASSERT, "(unsigned)( hwType ) < (unsigned)( ( sizeof( *array_counter( s_allPlatConfigBudgets ) ) + 0 ) )", "hwType doesn't index ARRAY_COUNT( s_allPlatConfigBudgets )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( v2 >= 3u )
  {
    LODWORD(v7) = 3;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_budgetfile.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( buildType ) < (unsigned)( ( sizeof( *array_counter( s_allPlatConfigBudgets[0] ) ) + 0 ) )", "buildType doesn't index ARRAY_COUNT( s_allPlatConfigBudgets[0] )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_allPlatConfigBudgets + 3 * v3 + v2;
}

/*
==============
MemBudget_BudgetFile_Init
==============
*/

void MemBudget_BudgetFile_Init(void)
{
  MemBudget_BudgetFile_Update();
}

/*
==============
MemBudget_BudgetFile_ProcessForTarget
==============
*/
void MemBudget_BudgetFile_ProcessForTarget(const MemBudgetTable *table, const MemBudget_HardwareType hardware, const MemBudget_BuildType build, const bool projection, const MemBudget_PollArray *bootPoll, MemBudget_PollArray *outBudgets)
{
  bool v6; 
  char v7; 
  char v8; 
  unsigned __int64 v10; 
  char *v11; 
  unsigned __int64 m_size; 
  unsigned __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  bool v22; 
  unsigned __int64 XB3ShipBudgetBytes; 
  unsigned __int64 XB3BudgetBytes; 
  __int64 v25; 
  __int64 v26; 
  char v27; 
  char v29; 
  ntl::fixed_vector<unsigned int,9,0> v30; 

  v6 = projection;
  v7 = build;
  v29 = build;
  v8 = hardware;
  v27 = hardware;
  v30.m_size = 0i64;
  MemBudget_BudgetFile_CreateMatch((const MemBudget_HardwareType)(unsigned __int8)hardware, (const MemBudget_BuildType)(unsigned __int8)build, (MemBudgetMatch *)&v30, projection);
  memset_0(outBudgets, 0, sizeof(MemBudget_PollArray));
  v10 = 0i64;
  if ( table->rows.m_size )
  {
    v11 = &table->rows.m_data.m_buffer[42];
    m_size = v30.m_size;
    do
    {
      if ( v10 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v13 = 0i64;
      if ( *(_QWORD *)(v11 - 18) )
      {
        while ( 1 )
        {
          if ( v13 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          v14 = *(_DWORD *)&v11[4 * v13 - 42];
          v15 = 0i64;
          if ( !m_size )
            break;
          while ( 1 )
          {
            if ( v15 >= m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v15 >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            if ( *(_DWORD *)&v30.m_data.m_buffer[4 * v15] == v14 )
              break;
            if ( ++v15 >= m_size )
              goto LABEL_35;
          }
          if ( ++v13 >= *(_QWORD *)(v11 - 18) )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_21:
        v16 = *(_QWORD *)(v11 - 10);
        if ( *(v11 - 1) )
        {
          if ( *v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_budgetfile.cpp", 301, ASSERT_TYPE_ASSERT, "( !row.sinceBoot )", "Membudgets : Since_boot adds the initial boot reading, so using it with add_to is likely undesired") )
            __debugbreak();
          v17 = *(v11 - 2);
          if ( v17 >= 0x26u )
          {
            LODWORD(v26) = 38;
            LODWORD(v25) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 143, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( pollArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( pollArray.pollValues )\n\t%i not in [0, %i)", v25, v26) )
              __debugbreak();
          }
          v16 += outBudgets->pollValues[v17];
        }
        else if ( *v11 )
        {
          v16 += MemBudget_PollArray_Get(bootPoll, (const MemBudget_PollType)(unsigned __int8)*(v11 - 2));
        }
        v18 = *(v11 - 2);
        if ( v18 >= 0x26u )
        {
          LODWORD(v26) = 38;
          LODWORD(v25) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        outBudgets->pollValues[v18] = v16;
      }
LABEL_35:
      ++v10;
      v11 += 48;
    }
    while ( v10 < table->rows.m_size );
    v8 = v27;
    v6 = projection;
    v7 = v29;
  }
  if ( (unsigned __int8)MemBudget_GetCurrentGameModeType() )
  {
    v19 = v6 && v8 == 2;
    v20 = Com_FrontEndScene_IsActive() || Com_FrontEnd_IsInFrontEnd();
    v21 = Com_IsAnyLocalServerRunning() && !v20;
    v22 = CL_TransientsWorldMP_IsActive() && Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x80);
    outBudgets->pollValues[26] = CL_TransientsCommonMP_GetMemoryBudget();
    XB3ShipBudgetBytes = 0i64;
    if ( v22 && !v21 )
    {
      if ( v19 )
      {
        if ( v7 == 2 )
          XB3ShipBudgetBytes = CL_TransientsCollisionMP_GetXB3ShipBudgetBytes();
        else
          XB3ShipBudgetBytes = CL_TransientsCollisionMP_GetXB3DevBudgetBytes();
      }
      else
      {
        XB3ShipBudgetBytes = CL_TransientsCollisionMP_GetBudgetBytes();
      }
    }
    outBudgets->pollValues[28] = XB3ShipBudgetBytes;
    XB3BudgetBytes = 0i64;
    if ( v22 )
    {
      if ( v19 )
        XB3BudgetBytes = CL_TransientsWorldMP_GetXB3BudgetBytes();
      else
        XB3BudgetBytes = CL_TransientsWorldMP_GetBudgetBytes();
    }
    outBudgets->pollValues[27] = XB3BudgetBytes;
    if ( v21 && v22 )
      outBudgets->pollValues[23] = 0i64;
    outBudgets->pollValues[36] = Com_EmergencyMemory_GetSize();
  }
  ntl::fixed_vector<unsigned int,9,0>::~fixed_vector<unsigned int,9,0>(&v30);
}

/*
==============
MemBudget_BudgetFile_ProcessTable
==============
*/
void MemBudget_BudgetFile_ProcessTable(const StringTable *csvTable, MemBudgetTable *outTable)
{
  int ColumnCount; 
  int RowCount; 
  int v11; 
  int i; 
  const char *ColumnValueForRow; 
  const char *v17; 
  char PollTypeFromName; 
  const char *PollTypeName; 
  __int64 v20; 
  const char *v21; 
  int v22; 
  int v23; 
  int v25; 
  int v26; 
  __int64 v27; 
  const char *v28; 
  int v29; 
  int v30; 
  int v32; 
  int v33; 
  unsigned int v34; 
  MemBudgetTable::TableRow __that; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  ColumnCount = StringTable_GetColumnCount(csvTable);
  RowCount = StringTable_GetRowCount(csvTable);
  v11 = 0;
  if ( RowCount > 0 )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@49800000
      vmovss  xmm8, cs:__real@3f000000
      vmovss  xmm6, cs:__real@5f000000
    }
    do
    {
      __that.keys.m_size = 0i64;
      *(_WORD *)__that.pollType = 38;
      __that.sinceBoot = 0;
      __that.size = 0i64;
      for ( i = 0; i < ColumnCount; ++i )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(csvTable, v11, i);
        v17 = ColumnValueForRow;
        if ( !ColumnValueForRow || !*ColumnValueForRow )
          break;
        if ( (unsigned __int8)(*ColumnValueForRow - 48) <= 9u )
        {
          if ( __that.pollType[0] != 38 )
          {
            *(double *)&_XMM0 = atof(ColumnValueForRow);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm8
              vcomiss xmm3, xmm6
              vsubss  xmm3, xmm3, xmm6
              vcomiss xmm3, xmm6
              vcvttss2si rax, xmm3
            }
            __that.size = _RAX;
            if ( outTable->rows.m_size >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            MemBudgetTable::TableRow::TableRow((MemBudgetTable::TableRow *)outTable + outTable->rows.m_size, &__that);
            ++outTable->rows.m_size;
          }
          break;
        }
        PollTypeFromName = MemBudget_GetPollTypeFromName(ColumnValueForRow);
        if ( PollTypeFromName == 38 )
        {
          v20 = 0x7FFFFFFFi64;
          v21 = "add_to";
          while ( 1 )
          {
            v22 = (unsigned __int8)v21[v17 - "add_to"];
            v23 = *(unsigned __int8 *)v21++;
            if ( !v20-- )
            {
LABEL_21:
              __that.addTo = 1;
              goto LABEL_22;
            }
            if ( v22 != v23 )
            {
              v25 = v22 + 32;
              if ( (unsigned int)(v22 - 65) > 0x19 )
                v25 = v22;
              v22 = v25;
              v26 = v23 + 32;
              if ( (unsigned int)(v23 - 65) > 0x19 )
                v26 = v23;
              if ( v22 != v26 )
                break;
            }
            if ( !v22 )
              goto LABEL_21;
          }
          v27 = 0x7FFFFFFFi64;
          v28 = "since_boot";
          while ( 1 )
          {
            v29 = (unsigned __int8)v28[v17 - "since_boot"];
            v30 = *(unsigned __int8 *)v28++;
            if ( !v27-- )
            {
LABEL_33:
              __that.sinceBoot = 1;
              goto LABEL_22;
            }
            if ( v29 != v30 )
            {
              v32 = v29 + 32;
              if ( (unsigned int)(v29 - 65) > 0x19 )
                v32 = v29;
              v29 = v32;
              v33 = v30 + 32;
              if ( (unsigned int)(v30 - 65) > 0x19 )
                v33 = v30;
              if ( v29 != v33 )
                break;
            }
            if ( !v29 )
              goto LABEL_33;
          }
          v34 = MemBudget_HashString(v17);
          if ( __that.keys.m_size >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 171, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
            __debugbreak();
          *(_DWORD *)&__that.keys.m_data.m_buffer[4 * __that.keys.m_size++] = v34;
        }
        else
        {
          if ( __that.pollType[0] != 38 )
          {
            PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)__that.pollType[0]);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_budgetfile.cpp", 205, ASSERT_TYPE_ASSERT, "( row.pollType == MemBudget_PollType::Count )", "Can only specify one polltype per row: %s,%s on same row", PollTypeName, v17) )
              __debugbreak();
          }
          __that.pollType[0] = PollTypeFromName;
        }
LABEL_22:
        ;
      }
      ntl::fixed_vector<unsigned int,6,0>::~fixed_vector<unsigned int,6,0>(&__that.keys);
      ++v11;
    }
    while ( v11 < RowCount );
  }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
MemBudget_BudgetFile_Update
==============
*/
void MemBudget_BudgetFile_Update(void)
{
  unsigned __int8 CurrentHardwareType; 
  unsigned __int8 CurrentBuildType; 
  const MemBudget_PollArray *bootPoll; 
  unsigned int v3; 
  MemBudget_PollArray *outBudgets; 
  unsigned int i; 
  const MemBudget_PollArray *ContentMem; 
  StringTable *tablePtr[2]; 
  MemBudgetTable outTable; 

  tablePtr[1] = (StringTable *)-2i64;
  outTable.rows.m_size = 0i64;
  StringTable_GetAsset("budgets/membudgets.csv", (const StringTable **)tablePtr);
  if ( StringTable_GetRowCount(tablePtr[0]) )
  {
    MemBudget_BudgetFile_ProcessTable(tablePtr[0], &outTable);
    CurrentHardwareType = MemBudget_GetCurrentHardwareType();
    CurrentBuildType = MemBudget_GetCurrentBuildType();
    bootPoll = MemBudget_Poll_GetBootPoll();
    MemBudget_BudgetFile_ProcessForTarget(&outTable, (const MemBudget_HardwareType)CurrentHardwareType, (const MemBudget_BuildType)CurrentBuildType, 0, bootPoll, &s_currentBudgets);
    v3 = 0;
    outBudgets = &s_allPlatConfigBudgets;
    do
    {
      for ( i = 0; i < 3; ++i )
      {
        ContentMem = MemBudget_ContentMemRead_GetContentMem((MemBudget_HardwareType)(unsigned __int8)v3, (MemBudget_BuildType)(unsigned __int8)i);
        MemBudget_BudgetFile_ProcessForTarget(&outTable, (const MemBudget_HardwareType)(unsigned __int8)v3, (const MemBudget_BuildType)(unsigned __int8)i, 1, ContentMem, outBudgets++);
      }
      ++v3;
    }
    while ( v3 < 4 );
  }
  else
  {
    Com_PrintError(16, "No budget entries in '%s'\n", "budgets/membudgets.csv");
  }
  ntl::fixed_vector<MemBudgetTable::TableRow,256,0>::~fixed_vector<MemBudgetTable::TableRow,256,0>(&outTable.rows);
}

/*
==============
MemBudget_BudgetFile_UpdateForHUD
==============
*/
void MemBudget_BudgetFile_UpdateForHUD(void)
{
  unsigned __int8 CurrentHardwareType; 
  unsigned __int8 CurrentBuildType; 
  unsigned __int64 v2; 
  __int64 v3; 
  MemBudgetMatch outMatch; 

  v3 = -2i64;
  CurrentHardwareType = MemBudget_GetCurrentHardwareType();
  CurrentBuildType = MemBudget_GetCurrentBuildType();
  v2 = 0i64;
  outMatch.matchHashes.m_size = 0i64;
  MemBudget_BudgetFile_CreateMatch((const MemBudget_HardwareType)CurrentHardwareType, (const MemBudget_BuildType)CurrentBuildType, &outMatch, 0);
  if ( outMatch.matchHashes.m_size != s_lastHUDMatch.matchHashes.m_size )
  {
LABEL_18:
    MemBudget_BudgetFile_Update();
    MemBudgetMatch::operator=(&s_lastHUDMatch, &outMatch);
    goto LABEL_19;
  }
  if ( outMatch.matchHashes.m_size )
  {
    do
    {
      if ( v2 >= s_lastHUDMatch.matchHashes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()", v3) )
        __debugbreak();
      if ( v2 >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      if ( v2 >= outMatch.matchHashes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v2 >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      if ( *(_DWORD *)&outMatch.matchHashes.m_data.m_buffer[4 * v2] != *(_DWORD *)&s_lastHUDMatch.matchHashes.m_data.m_buffer[4 * v2] )
        goto LABEL_18;
    }
    while ( ++v2 < outMatch.matchHashes.m_size );
  }
LABEL_19:
  ntl::fixed_vector<unsigned int,9,0>::~fixed_vector<unsigned int,9,0>(&outMatch.matchHashes);
}

/*
==============
MemBudget_HashString
==============
*/
__int64 MemBudget_HashString(const char *const str)
{
  unsigned int v2; 
  char v3; 
  const char *v4; 
  char v5; 

  if ( str )
  {
    v3 = *str;
    v2 = 5381;
    if ( *str )
    {
      v4 = str;
      do
      {
        ++v4;
        v5 = v3 | 0x20;
        if ( (unsigned int)(v3 - 65) >= 0x1A )
          v5 = v3;
        v2 = 33 * v2 + v5;
        v3 = *v4;
      }
      while ( *v4 );
    }
  }
  else
  {
    v2 = 0;
  }
  StringHashValidator<65536,256,0>::CheckStringHash(&s_hashValidator, v2, str);
  return v2;
}

