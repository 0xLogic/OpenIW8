/*
==============
AimTarget_Init
==============
*/

void __fastcall AimTarget_Init(int aimTargetIndex)
{
  ?AimTarget_Init@@YAXH@Z(aimTargetIndex);
}

/*
==============
AimTarget_Load
==============
*/

void __fastcall AimTarget_Load(MemoryFile *memFile)
{
  ?AimTarget_Load@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AimTarget_GetClientTargetList
==============
*/

void __fastcall AimTarget_GetClientTargetList(LocalClientNum_t localClientNum, const AimTarget **targetList, int *targetCount)
{
  ?AimTarget_GetClientTargetList@@YAXW4LocalClientNum_t@@PEAPEBUAimTarget@@PEAH@Z(localClientNum, targetList, targetCount);
}

/*
==============
AimTarget_GetGlob
==============
*/

AimTargetGlob *__fastcall AimTarget_GetGlob(const int aimTargetIndex)
{
  return ?AimTarget_GetGlob@@YAPEAUAimTargetGlob@@H@Z(aimTargetIndex);
}

/*
==============
AimTarget_Save
==============
*/

void __fastcall AimTarget_Save(MemoryFile *memFile)
{
  ?AimTarget_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AimTarget_GetClientTargetList
==============
*/
void AimTarget_GetClientTargetList(LocalClientNum_t localClientNum, const AimTarget **targetList, int *targetCount)
{
  __int64 v3; 
  __int64 v6; 

  v3 = localClientNum;
  if ( !targetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 32, ASSERT_TYPE_ASSERT, "(targetList)", (const char *)&queryFormat, "targetList") )
    __debugbreak();
  if ( !targetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 33, ASSERT_TYPE_ASSERT, "(targetCount)", (const char *)&queryFormat, "targetCount") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( aimTargetIndex ) < (unsigned)( ( sizeof( *array_counter( s_atGlobArray ) ) + 0 ) )", "aimTargetIndex doesn't index ARRAY_COUNT( s_atGlobArray )\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  *targetList = s_atGlobArray[v3].clientTargets;
  *targetCount = s_atGlobArray[v3].clientTargetCount;
}

/*
==============
AimTarget_GetGlob
==============
*/
AimTargetGlob *AimTarget_GetGlob(const int aimTargetIndex)
{
  __int64 v1; 
  int v4; 

  v1 = aimTargetIndex;
  if ( (unsigned int)aimTargetIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( aimTargetIndex ) < (unsigned)( ( sizeof( *array_counter( s_atGlobArray ) ) + 0 ) )", "aimTargetIndex doesn't index ARRAY_COUNT( s_atGlobArray )\n\t%i not in [0, %i)", aimTargetIndex, v4) )
      __debugbreak();
  }
  return &s_atGlobArray[v1];
}

/*
==============
AimTarget_Init
==============
*/
void AimTarget_Init(int aimTargetIndex)
{
  __int64 v1; 
  int v3; 

  v1 = aimTargetIndex;
  if ( (unsigned int)aimTargetIndex >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 18, ASSERT_TYPE_ASSERT, "(unsigned)( aimTargetIndex ) < (unsigned)( ( sizeof( *array_counter( s_atGlobArray ) ) + 0 ) )", "aimTargetIndex doesn't index ARRAY_COUNT( s_atGlobArray )\n\t%i not in [0, %i)", aimTargetIndex, v3) )
      __debugbreak();
  }
  memset_0(&s_atGlobArray[v1], 0, sizeof(AimTargetGlob));
}

/*
==============
AimTarget_Load
==============
*/
void AimTarget_Load(MemoryFile *memFile)
{
  int v1; 
  int *p_targetCount; 
  int v4; 
  __int64 v5; 
  int p; 

  v1 = 0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_targetCount = &s_atGlobArray[0].targetCount;
    do
    {
      MemFile_ReadData(memFile, 4ui64, &p);
      v4 = p;
      *p_targetCount = p;
      if ( v4 > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 64, ASSERT_TYPE_ASSERT, "(s_atGlobArray[localClientNum].targetCount <= 32)", (const char *)&queryFormat, "s_atGlobArray[localClientNum].targetCount <= AIM_MAX_TARGET_COUNT") )
        __debugbreak();
      v5 = *p_targetCount;
      if ( (int)v5 > 0 )
        MemFile_ReadData(memFile, 48 * v5, &s_atGlobArray[v1]);
      ++v1;
      p_targetCount += 1156;
    }
    while ( v1 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
AimTarget_Save
==============
*/
void AimTarget_Save(MemoryFile *memFile)
{
  int v1; 
  int *p_targetCount; 
  __int64 v4; 
  int p; 

  v1 = 0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_targetCount = &s_atGlobArray[0].targetCount;
    do
    {
      if ( *p_targetCount > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target.cpp", 48, ASSERT_TYPE_ASSERT, "(s_atGlobArray[localClientNum].targetCount <= 32)", (const char *)&queryFormat, "s_atGlobArray[localClientNum].targetCount <= AIM_MAX_TARGET_COUNT") )
        __debugbreak();
      p = *p_targetCount;
      MemFile_WriteData(memFile, 4ui64, &p);
      v4 = *p_targetCount;
      if ( (int)v4 > 0 )
        MemFile_WriteData(memFile, 48 * v4, &s_atGlobArray[v1]);
      ++v1;
      p_targetCount += 1156;
    }
    while ( v1 < SLODWORD(cl_maxLocalClients) );
  }
}

