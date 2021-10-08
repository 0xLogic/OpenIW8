/*
==============
Path_GetNodeTeam
==============
*/

int __fastcall Path_GetNodeTeam(team_t team)
{
  return ?Path_GetNodeTeam@@YAHW4team_t@@@Z(team);
}

/*
==============
Path_AddToNumClaimedOverlapNodes
==============
*/

void __fastcall Path_AddToNumClaimedOverlapNodes(pathnode_t *node, int nodeTeam, int amount)
{
  ?Path_AddToNumClaimedOverlapNodes@@YAXPEAUpathnode_t@@HH@Z(node, nodeTeam, amount);
}

/*
==============
Path_NodeOwnerSentHandle
==============
*/

SentientHandle *__fastcall Path_NodeOwnerSentHandle(pathnode_t *node, int nodeTeam)
{
  return ?Path_NodeOwnerSentHandle@@YAPEAVSentientHandle@@PEAUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_IsWallRunNode
==============
*/

int __fastcall Path_IsWallRunNode(const pathnode_t *node)
{
  return ?Path_IsWallRunNode@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_NodeMaxNumTeamOwners
==============
*/

int __fastcall Path_NodeMaxNumTeamOwners(const pathnode_t *node)
{
  return ?Path_NodeMaxNumTeamOwners@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_NodeSetFreeTime_Claimed
==============
*/

void __fastcall Path_NodeSetFreeTime_Claimed(pathnode_t *node, int nodeTeam)
{
  ?Path_NodeSetFreeTime_Claimed@@YAXPEAUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_NodeSetFreeTime
==============
*/

void __fastcall Path_NodeSetFreeTime(pathnode_t *node, int nodeTeam, int time)
{
  ?Path_NodeSetFreeTime@@YAXPEAUpathnode_t@@HH@Z(node, nodeTeam, time);
}

/*
==============
Path_NodeGetFreeTime
==============
*/

int __fastcall Path_NodeGetFreeTime(const pathnode_t *node, int nodeTeam)
{
  return ?Path_NodeGetFreeTime@@YAHPEBUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_NodeIgnoresAngles
==============
*/

int __fastcall Path_NodeIgnoresAngles(const pathnode_t *node)
{
  return ?Path_NodeIgnoresAngles@@YAHPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_NodeIsClaimed
==============
*/

bool __fastcall Path_NodeIsClaimed(const pathnode_t *node, int nodeTeam)
{
  return ?Path_NodeIsClaimed@@YA_NPEBUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_NodeOwnerSentHandleConst
==============
*/

const SentientHandle *__fastcall Path_NodeOwnerSentHandleConst(const pathnode_t *const node, int nodeTeam)
{
  return ?Path_NodeOwnerSentHandleConst@@YAPEBVSentientHandle@@QEBUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_GetNumClaimedOverlapNodes
==============
*/

int __fastcall Path_GetNumClaimedOverlapNodes(const pathnode_t *node, int nodeTeam)
{
  return ?Path_GetNumClaimedOverlapNodes@@YAHPEBUpathnode_t@@H@Z(node, nodeTeam);
}

/*
==============
Path_NodeIsClaimed
==============
*/
bool Path_NodeIsClaimed(const pathnode_t *node, int nodeTeam)
{
  bool v4; 
  const char *GameType; 
  int v6; 
  int v7; 
  unsigned int v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  __int64 v14; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 444, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v6 )
    {
      v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v6 )
        v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v4 = v6 == 0;
  }
  else
  {
    v4 = 1;
  }
  if ( v4 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v7 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v9 = SV_GameMP_GetGameType();
    v10 = *(unsigned __int8 *)v9 - (unsigned __int8)aBr_2[0];
    if ( !v10 )
    {
      v10 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v10 )
        v10 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)aBr_2[2];
    }
    v8 = (v10 != 0) + 1;
  }
  else
  {
    v8 = 1;
  }
  if ( nodeTeam >= v8 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v11 = SV_GameMP_GetGameType();
      v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
      if ( !v12 )
      {
        v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v12 )
          v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v12 != 0) + 1;
    }
    LODWORD(v14) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v14, v7) )
      __debugbreak();
  }
  return node->dynamic.iFreeTime[nodeTeam] == 0x7FFFFFFF;
}

/*
==============
Path_GetNodeTeam
==============
*/
__int64 Path_GetNodeTeam(team_t team)
{
  __int32 v2; 
  unsigned int v3; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 

  v2 = team - 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v3 = 2;
    if ( team <= TEAM_TWO )
      v3 = v2;
    if ( v3 >= 3 )
    {
      v8 = 3;
      v6 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    return v3;
  }
  else
  {
    v5 = 1;
    if ( team <= TEAM_ONE )
      v5 = v2;
    if ( v5 >= 2 )
    {
      v9 = 2;
      v7 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    return v5;
  }
}

/*
==============
Path_NodeIgnoresAngles
==============
*/
_BOOL8 Path_NodeIgnoresAngles(const pathnode_t *node)
{
  unsigned __int16 type; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 752, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  type = node->constant.type;
  return type == 25 || type == 20;
}

/*
==============
Path_IsWallRunNode
==============
*/
_BOOL8 Path_IsWallRunNode(const pathnode_t *node)
{
  return (unsigned __int16)(node->constant.type - 29) <= 1u && node->constant.target;
}

/*
==============
Path_GetNumClaimedOverlapNodes
==============
*/
__int64 Path_GetNumClaimedOverlapNodes(const pathnode_t *node, int nodeTeam)
{
  bool v4; 
  const char *GameType; 
  int v6; 
  int v7; 
  unsigned int v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  __int64 v14; 

  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v6 )
    {
      v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v6 )
        v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v4 = v6 == 0;
  }
  else
  {
    v4 = 1;
  }
  if ( v4 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v7 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v9 = SV_GameMP_GetGameType();
    v10 = *(unsigned __int8 *)v9 - (unsigned __int8)aBr_2[0];
    if ( !v10 )
    {
      v10 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v10 )
        v10 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)aBr_2[2];
    }
    v8 = (v10 != 0) + 1;
  }
  else
  {
    v8 = 1;
  }
  if ( nodeTeam >= v8 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v11 = SV_GameMP_GetGameType();
      v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
      if ( !v12 )
      {
        v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v12 )
          v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v12 != 0) + 1;
    }
    LODWORD(v14) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 403, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v14, v7) )
      __debugbreak();
  }
  return node->dynamic.wOverlapCount[nodeTeam];
}

/*
==============
Path_AddToNumClaimedOverlapNodes
==============
*/
void Path_AddToNumClaimedOverlapNodes(pathnode_t *node, int nodeTeam, int amount)
{
  bool v6; 
  const char *GameType; 
  int v8; 
  int v9; 
  unsigned int v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  int v14; 
  int v15; 
  unsigned __int8 *v16; 
  int v17; 
  __int64 v18; 

  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v8 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v8 )
    {
      v8 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v8 )
        v8 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v6 = v8 == 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 389, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v9 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v11 = SV_GameMP_GetGameType();
    v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
    if ( !v12 )
    {
      v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v12 )
        v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
    }
    v10 = (v12 != 0) + 1;
  }
  else
  {
    v10 = 1;
  }
  if ( nodeTeam >= v10 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v13 = SV_GameMP_GetGameType();
      v14 = *(unsigned __int8 *)v13 - (unsigned __int8)aBr_2[0];
      if ( !v14 )
      {
        v14 = *((unsigned __int8 *)v13 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v14 )
          v14 = *((unsigned __int8 *)v13 + 2) - (unsigned __int8)aBr_2[2];
      }
      v9 = (v14 != 0) + 1;
    }
    LODWORD(v18) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 390, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v18, v9) )
      __debugbreak();
  }
  v15 = node->dynamic.wOverlapCount[nodeTeam];
  v16 = &node->dynamic.wOverlapCount[nodeTeam];
  v17 = amount + v15;
  if ( v17 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 393, ASSERT_TYPE_ASSERT, "( newAmount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "newAmount", "0", v17, 0i64) )
    __debugbreak();
  *v16 = truncate_cast<unsigned char,int>(v17);
}

/*
==============
Path_NodeGetFreeTime
==============
*/
__int64 Path_NodeGetFreeTime(const pathnode_t *node, int nodeTeam)
{
  bool v4; 
  const char *GameType; 
  int v6; 
  int v7; 
  unsigned int v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  __int64 v14; 

  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v6 )
    {
      v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v6 )
        v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v4 = v6 == 0;
  }
  else
  {
    v4 = 1;
  }
  if ( v4 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 413, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v7 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v9 = SV_GameMP_GetGameType();
    v10 = *(unsigned __int8 *)v9 - (unsigned __int8)aBr_2[0];
    if ( !v10 )
    {
      v10 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v10 )
        v10 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)aBr_2[2];
    }
    v8 = (v10 != 0) + 1;
  }
  else
  {
    v8 = 1;
  }
  if ( nodeTeam >= v8 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v11 = SV_GameMP_GetGameType();
      v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
      if ( !v12 )
      {
        v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v12 )
          v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v12 != 0) + 1;
    }
    LODWORD(v14) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 414, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v14, v7) )
      __debugbreak();
  }
  return (unsigned int)node->dynamic.iFreeTime[nodeTeam];
}

/*
==============
Path_NodeMaxNumTeamOwners
==============
*/
__int64 Path_NodeMaxNumTeamOwners(const pathnode_t *node)
{
  const char *GameType; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !BG_BotSystemEnabled() )
    return 1i64;
  GameType = SV_GameMP_GetGameType();
  if ( *GameType == aBr_2[0] && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
    return 1i64;
  else
    return 2i64;
}

/*
==============
Path_NodeOwnerSentHandle
==============
*/
SentientHandle *Path_NodeOwnerSentHandle(pathnode_t *node, int nodeTeam)
{
  bool v4; 
  const char *GameType; 
  int v6; 
  int v7; 
  unsigned int v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  __int64 v14; 

  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v6 )
    {
      v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v6 )
        v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v4 = v6 == 0;
  }
  else
  {
    v4 = 1;
  }
  if ( v4 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 366, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v7 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v9 = SV_GameMP_GetGameType();
    v10 = *(unsigned __int8 *)v9 - (unsigned __int8)aBr_2[0];
    if ( !v10 )
    {
      v10 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v10 )
        v10 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)aBr_2[2];
    }
    v8 = (v10 != 0) + 1;
  }
  else
  {
    v8 = 1;
  }
  if ( nodeTeam >= v8 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v11 = SV_GameMP_GetGameType();
      v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
      if ( !v12 )
      {
        v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v12 )
          v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v12 != 0) + 1;
    }
    LODWORD(v14) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 367, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v14, v7) )
      __debugbreak();
  }
  return (SentientHandle *)((char *)&node->dynamic + 4 * nodeTeam);
}

/*
==============
Path_NodeOwnerSentHandleConst
==============
*/
const SentientHandle *Path_NodeOwnerSentHandleConst(const pathnode_t *const node, int nodeTeam)
{
  bool v4; 
  const char *GameType; 
  int v6; 
  int v7; 
  unsigned int v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  __int64 v14; 

  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v6 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v6 )
    {
      v6 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v6 )
        v6 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v4 = v6 == 0;
  }
  else
  {
    v4 = 1;
  }
  if ( v4 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v7 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v9 = SV_GameMP_GetGameType();
    v10 = *(unsigned __int8 *)v9 - (unsigned __int8)aBr_2[0];
    if ( !v10 )
    {
      v10 = *((unsigned __int8 *)v9 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v10 )
        v10 = *((unsigned __int8 *)v9 + 2) - (unsigned __int8)aBr_2[2];
    }
    v8 = (v10 != 0) + 1;
  }
  else
  {
    v8 = 1;
  }
  if ( nodeTeam >= v8 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v11 = SV_GameMP_GetGameType();
      v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
      if ( !v12 )
      {
        v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v12 )
          v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
      }
      v7 = (v12 != 0) + 1;
    }
    LODWORD(v14) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v14, v7) )
      __debugbreak();
  }
  return (const SentientHandle *)((char *)&node->dynamic + 4 * nodeTeam);
}

/*
==============
Path_NodeSetFreeTime
==============
*/
void Path_NodeSetFreeTime(pathnode_t *node, int nodeTeam, int time)
{
  bool v6; 
  const char *GameType; 
  int v8; 
  int v9; 
  unsigned int v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 

  if ( BG_BotSystemEnabled() )
  {
    GameType = SV_GameMP_GetGameType();
    v8 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
    if ( !v8 )
    {
      v8 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
      if ( !v8 )
        v8 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
    }
    v6 = v8 == 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 )
    nodeTeam = 0;
  if ( !node )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 424, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
  }
  v9 = 1;
  if ( BG_BotSystemEnabled() )
  {
    v11 = SV_GameMP_GetGameType();
    v12 = *(unsigned __int8 *)v11 - (unsigned __int8)aBr_2[0];
    if ( !v12 )
    {
      v12 = *((unsigned __int8 *)v11 + 1) - (unsigned __int8)aBr_2[1];
      if ( !v12 )
        v12 = *((unsigned __int8 *)v11 + 2) - (unsigned __int8)aBr_2[2];
    }
    v10 = (v12 != 0) + 1;
  }
  else
  {
    v10 = 1;
  }
  if ( nodeTeam >= v10 )
  {
    if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( BG_BotSystemEnabled() )
    {
      v13 = SV_GameMP_GetGameType();
      v14 = *(unsigned __int8 *)v13 - (unsigned __int8)aBr_2[0];
      if ( !v14 )
      {
        v14 = *((unsigned __int8 *)v13 + 1) - (unsigned __int8)aBr_2[1];
        if ( !v14 )
          v14 = *((unsigned __int8 *)v13 + 2) - (unsigned __int8)aBr_2[2];
      }
      v9 = (v14 != 0) + 1;
    }
    LODWORD(v15) = nodeTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 425, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", v15, v9) )
      __debugbreak();
  }
  node->dynamic.iFreeTime[nodeTeam] = time;
}

/*
==============
Path_NodeSetFreeTime_Claimed
==============
*/
void Path_NodeSetFreeTime_Claimed(pathnode_t *node, int nodeTeam)
{
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 433, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  Path_NodeSetFreeTime(node, nodeTeam, 0x7FFFFFFF);
}

