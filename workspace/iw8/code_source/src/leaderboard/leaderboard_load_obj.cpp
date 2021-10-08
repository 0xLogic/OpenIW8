/*
==============
LB_VR_GenerateLeaderboardDef
==============
*/

LeaderboardDef *__fastcall LB_VR_GenerateLeaderboardDef(const char *name)
{
  return ?LB_VR_GenerateLeaderboardDef@@YAPEAULeaderboardDef@@PEBD@Z(name);
}

/*
==============
LB_LoadDef
==============
*/

LeaderboardDef *__fastcall LB_LoadDef(const char *name, bool isVirtualLB)
{
  return ?LB_LoadDef@@YAPEAULeaderboardDef@@PEBD_N@Z(name, isVirtualLB);
}

/*
==============
LB_VR_FindSourceColumn
==============
*/

LbColumnDef *__fastcall LB_VR_FindSourceColumn(LeaderboardDef *lbDef, const int id, const char *name)
{
  return ?LB_VR_FindSourceColumn@@YAPEAULbColumnDef@@PEAULeaderboardDef@@HPEBD@Z(lbDef, id, name);
}

/*
==============
LB_VR_LoadDef
==============
*/

VirtualLeaderboardDef *__fastcall LB_VR_LoadDef(const char *name)
{
  return ?LB_VR_LoadDef@@YAPEAUVirtualLeaderboardDef@@PEBD@Z(name);
}

/*
==============
LB_LoadDef
==============
*/
LeaderboardDef *LB_LoadDef(const char *name, bool isVirtualLB)
{
  const char **physicsLibrary; 

  if ( isVirtualLB )
    return LB_VR_GenerateLeaderboardDef(name);
  physicsLibrary = (const char **)DB_FindXAssetHeader(ASSET_TYPE_LEADERBOARD, name, 1).physicsLibrary;
  if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 623, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  if ( DB_IsXAssetDefault(ASSET_TYPE_LEADERBOARD, *physicsLibrary) )
    return LB_VR_GenerateLeaderboardDef(name);
  else
    return (LeaderboardDef *)physicsLibrary;
}

/*
==============
LB_LoadDef_FastFile
==============
*/
LeaderboardDef *LB_LoadDef_FastFile(const char *name)
{
  const char **physicsLibrary; 

  physicsLibrary = (const char **)DB_FindXAssetHeader(ASSET_TYPE_LEADERBOARD, name, 1).physicsLibrary;
  if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 623, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  if ( DB_IsXAssetDefault(ASSET_TYPE_LEADERBOARD, *physicsLibrary) )
    return 0i64;
  return (LeaderboardDef *)physicsLibrary;
}

/*
==============
LB_VR_FindSourceColumn
==============
*/
LbColumnDef *LB_VR_FindSourceColumn(LeaderboardDef *lbDef, const int id, const char *name)
{
  int v6; 
  LbColumnDef *columns; 
  __int64 v8; 
  int *i; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  signed __int64 v14; 
  char v15; 
  __int64 v16; 
  char v17; 

  if ( !lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 679, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  v6 = 0;
  if ( lbDef->columnCount <= 0 )
    return 0i64;
  columns = lbDef->columns;
  v8 = 0i64;
  for ( i = &columns->id; *i != id; i += 14 )
  {
    ++v6;
    if ( ++v8 >= lbDef->columnCount )
      return 0i64;
  }
  if ( name )
  {
    v11 = name;
    v12 = 0x7FFFFFFFi64;
    v13 = columns[v6].name;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v14 = v13 - name;
    do
    {
      v15 = v11[v14];
      v16 = v12;
      v17 = *v11++;
      --v12;
      if ( !v16 )
        break;
      if ( v15 != v17 )
      {
        Com_PrintWarning(22, "WARNING Virtual column name (%s) does not match source leaderboard(%s) column name (%s)\n", name, lbDef->name, lbDef->columns[v6].name);
        return &lbDef->columns[v6];
      }
    }
    while ( v15 );
  }
  return &lbDef->columns[v6];
}

/*
==============
LB_VR_GenerateLeaderboardDef
==============
*/

LeaderboardDef *__fastcall LB_VR_GenerateLeaderboardDef(const char *name, double _XMM1_8)
{
  const char **physicsLibrary; 
  const char *v6; 
  LeaderboardDef *Def_FastFile; 
  int v10; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  LbColumnDef *SourceColumn; 
  int v21; 
  LbColType v22; 
  LbColType type; 

  physicsLibrary = (const char **)DB_FindXAssetHeader(ASSET_TYPE_VIRTUAL_LEADERBOARD, name, 1).physicsLibrary;
  if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 637, ASSERT_TYPE_ASSERT, "(vlbDef)", (const char *)&queryFormat, "vlbDef") )
    __debugbreak();
  if ( DB_IsXAssetDefault(ASSET_TYPE_VIRTUAL_LEADERBOARD, *physicsLibrary) )
  {
    Com_PrintWarning(22, "Failed to load VirtualLeaderboardDef %s\n", name);
    return 0i64;
  }
  else
  {
    if ( *((int *)physicsLibrary + 8) > 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 726, ASSERT_TYPE_ASSERT, "(vlbDef->columnCount <= ( 4 + (10) ))", (const char *)&queryFormat, "vlbDef->columnCount <= LB_VR_MAX_COLS") )
      __debugbreak();
    v6 = physicsLibrary[1];
    Def_FastFile = LB_LoadDef_FastFile(v6);
    if ( Def_FastFile || (Def_FastFile = LB_VR_GenerateLeaderboardDef(v6)) != NULL )
    {
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpxor   xmm1, xmm1, xmm1
      }
      s_generatedVirtualLbDef.columns = s_generatedVirtualLbCols;
      s_generatedVirtualLbDef.name = NULL;
      __asm
      {
        vmovdqu xmmword ptr cs:s_generatedVirtualLbDef.id, xmm0
        vmovdqu xmmword ptr cs:s_generatedVirtualLbDef.updateType, xmm1
      }
      memset_0(s_generatedVirtualLbCols, 0, sizeof(s_generatedVirtualLbCols));
      *(_QWORD *)&s_generatedVirtualLbDef.xpColId = -1i64;
      v10 = 0;
      s_generatedVirtualLbDef.id = *((_DWORD *)physicsLibrary + 4);
      s_generatedVirtualLbDef.name = *physicsLibrary;
      s_generatedVirtualLbDef.sourceLbId = *((_DWORD *)physicsLibrary + 5);
      s_generatedVirtualLbDef.sourceLbWidth = Def_FastFile->sourceLbWidth;
      s_generatedVirtualLbDef.columnCount = *((_DWORD *)physicsLibrary + 8);
      s_generatedVirtualLbDef.updateType = LBUPDATE_TYPE_VIRTUAL;
      s_generatedVirtualLbDef.trackTypes = Def_FastFile->trackTypes;
      s_generatedVirtualLbDef.rankColIdX = *((_DWORD *)physicsLibrary + 9);
      s_generatedVirtualLbDef.rankColIdY = *((_DWORD *)physicsLibrary + 10);
      if ( *((int *)physicsLibrary + 8) > 0 )
      {
        _RDI = 0i64;
        v12 = 0i64;
        do
        {
          v13 = physicsLibrary[3];
          v14 = *(_DWORD *)&v13[v12 + 8];
          if ( (unsigned int)(v14 - 65523) > 3 )
          {
            _RBP = LB_VR_FindSourceColumn(Def_FastFile, v14, *(const char **)&v13[v12]);
            if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 776, ASSERT_TYPE_ASSERT, "(sourceColumn)", (const char *)&queryFormat, "sourceColumn") )
              __debugbreak();
            _RAX = s_generatedVirtualLbDef.columns;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+0]
              vmovups ymmword ptr [rdi+rax], ymm0
              vmovups xmm1, xmmword ptr [rbp+20h]
              vmovups xmmword ptr [rdi+rax+20h], xmm1
              vmovsd  xmm0, qword ptr [rbp+30h]
              vmovsd  qword ptr [rdi+rax+30h], xmm0
            }
            type = s_generatedVirtualLbDef.columns[_RDI].type;
            if ( type == LBCOL_TYPE_LEVELXP )
            {
              s_generatedVirtualLbDef.xpColId = s_generatedVirtualLbDef.columns[_RDI].id;
            }
            else if ( type == LBCOL_TYPE_PRESTIGE )
            {
              s_generatedVirtualLbDef.prestigeColId = s_generatedVirtualLbDef.columns[_RDI].id;
            }
          }
          else
          {
            _RBP = LB_VR_FindSourceColumn(Def_FastFile, *(_DWORD *)&v13[v12 + 12], NULL);
            SourceColumn = LB_VR_FindSourceColumn(Def_FastFile, *(_DWORD *)&physicsLibrary[3][v12 + 16], NULL);
            if ( (!_RBP || !SourceColumn) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 764, ASSERT_TYPE_ASSERT, "(xColumn && yColumn)", (const char *)&queryFormat, "xColumn && yColumn") )
              __debugbreak();
            _RAX = s_generatedVirtualLbDef.columns;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+0]
              vmovups ymmword ptr [rdi+rax], ymm0
              vmovups xmm1, xmmword ptr [rbp+20h]
              vmovups xmmword ptr [rdi+rax+20h], xmm1
              vmovsd  xmm0, qword ptr [rbp+30h]
              vmovsd  qword ptr [rdi+rax+30h], xmm0
            }
            s_generatedVirtualLbDef.columns[_RDI].id = *(_DWORD *)&physicsLibrary[3][v12 + 8];
            s_generatedVirtualLbDef.columns[_RDI].name = *(const char **)&physicsLibrary[3][v12];
            s_generatedVirtualLbDef.columns[_RDI].uiCalColX = *(_DWORD *)&physicsLibrary[3][v12 + 12];
            s_generatedVirtualLbDef.columns[_RDI].uiCalColY = *(_DWORD *)&physicsLibrary[3][v12 + 16];
            if ( *(_DWORD *)&physicsLibrary[3][v12 + 8] == 65523 || *(_DWORD *)&physicsLibrary[3][v12 + 8] == 65524 )
            {
              v21 = 2;
            }
            else if ( *(_DWORD *)&physicsLibrary[3][v12 + 8] == 65525 )
            {
              v21 = 3;
            }
            else
            {
              v21 = 0;
            }
            s_generatedVirtualLbDef.columns[_RDI].precision = v21;
            v22 = LBCOL_TYPE_NUMBER;
            if ( *(_DWORD *)&physicsLibrary[3][v12 + 8] == 65523 )
              v22 = LBCOL_TYPE_PERCENT;
            s_generatedVirtualLbDef.columns[_RDI].type = v22;
          }
          ++v10;
          v12 += 24i64;
          ++_RDI;
        }
        while ( v10 < *((_DWORD *)physicsLibrary + 8) );
      }
      return &s_generatedVirtualLbDef;
    }
    else
    {
      Com_PrintError(22, "Error loading Virtual LeaderboardDef %s: Invalid source leaderboard: %s\n", *physicsLibrary, physicsLibrary[1]);
      return 0i64;
    }
  }
}

/*
==============
LB_VR_LoadDef
==============
*/
VirtualLeaderboardDef *LB_VR_LoadDef(const char *name)
{
  const char **physicsLibrary; 

  physicsLibrary = (const char **)DB_FindXAssetHeader(ASSET_TYPE_VIRTUAL_LEADERBOARD, name, 1).physicsLibrary;
  if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard_load_obj.cpp", 637, ASSERT_TYPE_ASSERT, "(vlbDef)", (const char *)&queryFormat, "vlbDef") )
    __debugbreak();
  if ( DB_IsXAssetDefault(ASSET_TYPE_VIRTUAL_LEADERBOARD, *physicsLibrary) )
    return 0i64;
  return (VirtualLeaderboardDef *)physicsLibrary;
}

