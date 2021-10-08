/*
==============
MemBudget_Project_GetFreeXB3MemTest
==============
*/

__int64 __fastcall MemBudget_Project_GetFreeXB3MemTest()
{
  return ?MemBudget_Project_GetFreeXB3MemTest@@YA_JXZ();
}

/*
==============
MemBudget_Project
==============
*/

void __fastcall MemBudget_Project(const MemBudget_PollData *currentPoll, MemBudget_PollData *outProject, MemBudget_HardwareType hardware, MemBudget_BuildType build)
{
  ?MemBudget_Project@@YAXAEBUMemBudget_PollData@@AEAU1@W4MemBudget_HardwareType@@W4MemBudget_BuildType@@@Z(currentPoll, outProject, hardware, build);
}

/*
==============
MemBudget_Project_GetMinimumDesiredFreeShipMem
==============
*/

__int64 __fastcall MemBudget_Project_GetMinimumDesiredFreeShipMem(bool bigmap)
{
  return ?MemBudget_Project_GetMinimumDesiredFreeShipMem@@YA_J_N@Z(bigmap);
}

/*
==============
MemBudget_Project_GetFreeXB3MemShip
==============
*/

__int64 __fastcall MemBudget_Project_GetFreeXB3MemShip()
{
  return ?MemBudget_Project_GetFreeXB3MemShip@@YA_JXZ();
}

/*
==============
MemBudget_Project_GetMemreportLevelFastfileBudget
==============
*/

__int64 __fastcall MemBudget_Project_GetMemreportLevelFastfileBudget()
{
  return ?MemBudget_Project_GetMemreportLevelFastfileBudget@@YA_JXZ();
}

/*
==============
MemBudget_Project_GetMemreportTotalBudget
==============
*/

__int64 __fastcall MemBudget_Project_GetMemreportTotalBudget()
{
  return ?MemBudget_Project_GetMemreportTotalBudget@@YA_JXZ();
}

/*
==============
MemBudget_Project_UpdateXB3Mem
==============
*/

void __fastcall MemBudget_Project_UpdateXB3Mem(const MemBudget_PollData *hudPoll)
{
  ?MemBudget_Project_UpdateXB3Mem@@YAXAEBUMemBudget_PollData@@@Z(hudPoll);
}

/*
==============
MemBudget_Project
==============
*/

void __fastcall MemBudget_Project(const MemBudget_PollArray *currentPoll, MemBudget_PollArray *outProject, MemBudget_HardwareType hardware, MemBudget_BuildType build)
{
  ?MemBudget_Project@@YAXAEBUMemBudget_PollArray@@AEAU1@W4MemBudget_HardwareType@@W4MemBudget_BuildType@@@Z(currentPoll, outProject, hardware, build);
}

/*
==============
MemBudget_Project
==============
*/
void MemBudget_Project(const MemBudget_PollArray *currentPoll, MemBudget_PollArray *outProject, MemBudget_HardwareType hardware, MemBudget_BuildType build)
{
  unsigned __int8 v5; 
  unsigned __int8 v7; 
  const MemBudget_PollArray *ContentMem; 
  const MemBudget_PollArray *CurrentBudgets; 
  const MemBudget_PollArray *ProjectedBudgets; 
  unsigned int v11; 
  signed __int64 v12; 
  MemBudget_PollArray *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 ParentPollType; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  const MemBudget_PollArray *v23; 

  v5 = hardware;
  v7 = build;
  memset_0(outProject, 0, sizeof(MemBudget_PollArray));
  ContentMem = MemBudget_ContentMemRead_GetContentMem((MemBudget_HardwareType)v5, (MemBudget_BuildType)v7);
  CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
  ProjectedBudgets = MemBudget_BudgetFile_GetProjectedBudgets((MemBudget_HardwareType)v5, (MemBudget_BuildType)v7);
  v11 = 0;
  v23 = ProjectedBudgets;
  v12 = (char *)currentPoll - (char *)outProject;
  v13 = outProject;
  v14 = 0x28000003C0i64;
  do
  {
    if ( MemBudget_Poll_UseBootValueForBudget((MemBudget_PollType)(unsigned __int8)v11) || (unsigned __int8)(v11 - 3) <= 1u )
    {
      v13->pollValues[0] = ContentMem->pollValues[(unsigned __int8)v11];
    }
    else if ( _bittest64(&v14, (unsigned __int8)v11) )
    {
      v13->pollValues[0] = 0i64;
    }
    else
    {
      v15 = (unsigned __int8)v11;
      v16 = CurrentBudgets->pollValues[v15];
      v17 = v23->pollValues[v15];
      if ( v16 || v17 )
      {
        v13->pollValues[0] = v17;
        ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)(unsigned __int8)v11);
        v19 = ParentPollType;
        if ( ParentPollType != 38 )
        {
          if ( (unsigned __int8)MemBudget_Poll_GetParentPollType((MemBudget_PollType)ParentPollType) != 38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_project.cpp", 134, ASSERT_TYPE_ASSERT, "(MemBudget_Poll_GetParentPollType( parentType ) == MemBudget_PollType::Count)", (const char *)&queryFormat, "MemBudget_Poll_GetParentPollType( parentType ) == MemBudget_PollType::Count") )
            __debugbreak();
          if ( v19 >= (unsigned __int8)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_project.cpp", 135, ASSERT_TYPE_ASSERT, "(parentType < pollType)", (const char *)&queryFormat, "parentType < pollType") )
            __debugbreak();
          v20 = v17 - *(__int64 *)((char *)v13->pollValues + v12);
          if ( v19 >= 0x26u )
          {
            LODWORD(v22) = 38;
            LODWORD(v21) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.h", 136, ASSERT_TYPE_ASSERT, "(unsigned)( pollType ) < (unsigned)( ( sizeof( *array_counter( outArray.pollValues ) ) + 0 ) )", "pollType doesn't index ARRAY_COUNT( outArray.pollValues )\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          outProject->pollValues[v19] += v20;
        }
      }
      else
      {
        v13->pollValues[0] = *(__int64 *)((char *)v13->pollValues + v12);
      }
      v14 = 0x28000003C0i64;
    }
    ++v11;
    v13 = (MemBudget_PollArray *)((char *)v13 + 8);
  }
  while ( v11 < 0x26 );
}

/*
==============
MemBudget_Project
==============
*/
void MemBudget_Project(const MemBudget_PollData *currentPoll, MemBudget_PollData *outProject, MemBudget_HardwareType hardware, MemBudget_BuildType build)
{
  unsigned __int8 v5; 
  unsigned __int8 v7; 
  const MemBudget_PollArray *ContentMem; 

  v5 = hardware;
  v7 = build;
  memset_0(outProject, 0, sizeof(MemBudget_PollData));
  MemBudget_Project(&currentPoll->readings, &outProject->readings, (MemBudget_HardwareType)v5, (MemBudget_BuildType)v7);
  outProject->readings.pollValues[0] = 0i64;
  outProject->readings.pollValues[1] = 0i64;
  ContentMem = MemBudget_ContentMemRead_GetContentMem((MemBudget_HardwareType)v5, (MemBudget_BuildType)v7);
  outProject->readings.pollValues[2] = MemBudget_Poll_CalcFreeMem(&outProject->readings, ContentMem);
}

/*
==============
MemBudget_Project_GetFreeXB3MemShip
==============
*/
__int64 MemBudget_Project_GetFreeXB3MemShip()
{
  return s_freeXB3Ship;
}

/*
==============
MemBudget_Project_GetFreeXB3MemTest
==============
*/
__int64 MemBudget_Project_GetFreeXB3MemTest()
{
  return s_freeXB3Test;
}

/*
==============
MemBudget_Project_GetMemreportLevelFastfileBudget
==============
*/
__int64 MemBudget_Project_GetMemreportLevelFastfileBudget()
{
  return s_memreportLevelFastfile;
}

/*
==============
MemBudget_Project_GetMemreportTotalBudget
==============
*/
__int64 MemBudget_Project_GetMemreportTotalBudget()
{
  return s_memreportTotal;
}

/*
==============
MemBudget_Project_GetMinimumDesiredFreeShipMem
==============
*/
__int64 MemBudget_Project_GetMinimumDesiredFreeShipMem(bool bigmap)
{
  __int64 result; 

  result = 524288000i64;
  if ( bigmap )
    return 734003200i64;
  return result;
}

/*
==============
MemBudget_Project_UpdateXB3Mem
==============
*/
void MemBudget_Project_UpdateXB3Mem(const MemBudget_PollData *hudPoll)
{
  MemBudget_BuildType v2; 
  MemBudget_HardwareType v3; 
  MemBudget_BuildType v4; 
  MemBudget_HardwareType v5; 
  const MemBudget_PollArray *ContentMem; 
  MemBudget_BuildType v7; 
  MemBudget_BuildType v8; 
  const MemBudget_PollArray *v9; 
  __int64 v10; 
  __int64 v11; 
  char v12[16040]; 
  MemBudget_PollArray outProject; 

  memset_0(v12, 0, 0x3FD8ui64);
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 2;
  MemBudget_Project(&hudPoll->readings, &outProject, v3, v2);
  LOBYTE(v4) = 1;
  LOBYTE(v5) = 2;
  outProject.pollValues[0] = 0i64;
  outProject.pollValues[1] = 0i64;
  ContentMem = MemBudget_ContentMemRead_GetContentMem(v5, v4);
  s_freeXB3Test = MemBudget_Poll_CalcFreeMem(&outProject, ContentMem);
  memset_0(v12, 0, 0x3FD8ui64);
  LOBYTE(v7) = 2;
  MemBudget_Project(&hudPoll->readings, &outProject, PhaseSpace, v7);
  LOBYTE(v8) = 2;
  outProject.pollValues[0] = 0i64;
  outProject.pollValues[1] = 0i64;
  v9 = MemBudget_ContentMemRead_GetContentMem(PhaseSpace, v8);
  v10 = MemBudget_Poll_CalcFreeMem(&outProject, v9);
  s_freeXB3Ship = v10;
  v11 = 524288000i64;
  if ( outProject.pollValues[27] > 0 )
    v11 = 734003200i64;
  s_memreportLevelFastfile = v10 + outProject.pollValues[19] - v11;
  s_memreportTotal = outProject.pollValues[27] + outProject.pollValues[28] + outProject.pollValues[29] + outProject.pollValues[26] + outProject.pollValues[22] + s_memreportLevelFastfile + outProject.pollValues[18];
}

