/*
==============
G_PlayerMask_AddAll
==============
*/

void __fastcall G_PlayerMask_AddAll(PlayerMask *mask)
{
  ?G_PlayerMask_AddAll@@YAXPEAUPlayerMask@@@Z(mask);
}

/*
==============
G_PlayerMask_RemoveTeam
==============
*/

void __fastcall G_PlayerMask_RemoveTeam(PlayerMask *mask, team_t team)
{
  ?G_PlayerMask_RemoveTeam@@YAXPEAUPlayerMask@@W4team_t@@@Z(mask, team);
}

/*
==============
G_PlayerMask_RemoveClient
==============
*/

void __fastcall G_PlayerMask_RemoveClient(PlayerMask *mask, int clientNum)
{
  ?G_PlayerMask_RemoveClient@@YAXPEAUPlayerMask@@H@Z(mask, clientNum);
}

/*
==============
G_PlayerMask_RemoveAll
==============
*/

void __fastcall G_PlayerMask_RemoveAll(PlayerMask *mask)
{
  ?G_PlayerMask_RemoveAll@@YAXPEAUPlayerMask@@@Z(mask);
}

/*
==============
G_PlayerMask_AddClient
==============
*/

void __fastcall G_PlayerMask_AddClient(PlayerMask *mask, int clientNum)
{
  ?G_PlayerMask_AddClient@@YAXPEAUPlayerMask@@H@Z(mask, clientNum);
}

/*
==============
G_PlayerMask_IsPlayerInMask
==============
*/

bool __fastcall G_PlayerMask_IsPlayerInMask(const PlayerMask *mask, const playerState_s *ps, const team_t *overrideTeam)
{
  return ?G_PlayerMask_IsPlayerInMask@@YA_NPEBUPlayerMask@@PEBUplayerState_s@@PEBW4team_t@@@Z(mask, ps, overrideTeam);
}

/*
==============
G_PlayerMask_SetInverted
==============
*/

void __fastcall G_PlayerMask_SetInverted(PlayerMask *mask, bool inverted)
{
  ?G_PlayerMask_SetInverted@@YAXPEAUPlayerMask@@_N@Z(mask, inverted);
}

/*
==============
G_PlayerMask_AddTeam
==============
*/

void __fastcall G_PlayerMask_AddTeam(PlayerMask *mask, team_t team)
{
  ?G_PlayerMask_AddTeam@@YAXPEAUPlayerMask@@W4team_t@@@Z(mask, team);
}

/*
==============
G_PlayerMask_AddAll
==============
*/
void G_PlayerMask_AddAll(PlayerMask *mask)
{
  mask->mode[0] = 0;
  *(_QWORD *)mask->mask.array = 0i64;
  *(_QWORD *)&mask->mask.array[2] = 0i64;
  *(_QWORD *)&mask->mask.array[4] = 0i64;
  *(_QWORD *)&mask->mask.array[6] = 0i64;
}

/*
==============
G_PlayerMask_AddClient
==============
*/
void G_PlayerMask_AddClient(PlayerMask *mask, int clientNum)
{
  unsigned __int64 v2; 
  int v5; 
  int v6; 
  int v7; 

  v2 = (unsigned int)clientNum;
  if ( (unsigned int)clientNum >= 0xF8 )
  {
    v5 = 248;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_player_mask.cpp", 60, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "clientNum doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  if ( mask->mode[0] != 1 )
  {
    mask->mode[0] = 1;
    *(_QWORD *)mask->mask.array = 0i64;
    *(_QWORD *)&mask->mask.array[2] = 0i64;
    *(_QWORD *)&mask->mask.array[4] = 0i64;
    *(_QWORD *)&mask->mask.array[6] = 0i64;
  }
  if ( (unsigned int)v2 >= 0x100 )
  {
    v7 = 256;
    v6 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
      __debugbreak();
  }
  mask->mask.array[v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
}

/*
==============
G_PlayerMask_AddTeam
==============
*/
void G_PlayerMask_AddTeam(PlayerMask *mask, team_t team)
{
  unsigned __int64 v3; 

  v3 = (unsigned int)team;
  if ( mask->mode[0] != 2 )
  {
    mask->mode[0] = 2;
    *(_QWORD *)mask->mask.array = 0i64;
    *(_QWORD *)&mask->mask.array[2] = 0i64;
    *(_QWORD *)&mask->mask.array[4] = 0i64;
    *(_QWORD *)&mask->mask.array[6] = 0i64;
  }
  if ( (unsigned int)team >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", team, 256) )
    __debugbreak();
  mask->mask.array[v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
}

/*
==============
G_PlayerMask_IsPlayerInMask
==============
*/
__int64 G_PlayerMask_IsPlayerInMask(const PlayerMask *mask, const playerState_s *ps, const team_t *overrideTeam)
{
  const playerState_s *v4; 
  unsigned int v6; 
  GHandler *Handler; 
  unsigned __int64 clientNum; 
  unsigned int v9; 
  const PlayerMask *v10; 
  __int64 result; 
  __int64 v12; 
  team_t outTeam; 

  v4 = ps;
  if ( !mask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_player_mask.cpp", 14, ASSERT_TYPE_ASSERT, "( mask )", (const char *)&queryFormat, "mask") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_player_mask.cpp", 15, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LOBYTE(ps) = 1;
  if ( mask->mode[0] )
  {
    if ( mask->mode[0] == 1 )
    {
      clientNum = (unsigned int)v4->clientNum;
      if ( (unsigned int)clientNum >= 0x100 )
      {
        LODWORD(v12) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, 256) )
          __debugbreak();
      }
      LODWORD(ps) = 0x80000000 >> (clientNum & 0x1F);
      LOBYTE(ps) = ((unsigned int)ps & mask->mask.array[clientNum >> 5]) != 0;
    }
    else if ( mask->mode[0] == 2 )
    {
      if ( overrideTeam )
      {
        v6 = *overrideTeam;
        outTeam = *overrideTeam;
      }
      else
      {
        Handler = GHandler::getHandler();
        if ( !GHandler::GetPlayerTeam(Handler, v4->clientNum, &outTeam) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_player_mask.cpp", 31, ASSERT_TYPE_ASSERT, "(GHandler::getHandler()->GetPlayerTeam( ps->clientNum, &playerTeam ))", (const char *)&queryFormat, "GHandler::getHandler()->GetPlayerTeam( ps->clientNum, &playerTeam )") )
          __debugbreak();
        v6 = outTeam;
      }
      if ( v6 >= 0x100 )
      {
        LODWORD(v12) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, 256) )
          __debugbreak();
      }
      LODWORD(ps) = 0x80000000 >> (v6 & 0x1F);
      LOBYTE(ps) = ((unsigned int)ps & mask->mask.array[(unsigned __int64)v6 >> 5]) != 0;
    }
  }
  else
  {
    v9 = 0;
    v10 = mask;
    while ( !v10->mask.array[0] )
    {
      ++v9;
      v10 = (const PlayerMask *)((char *)v10 + 4);
      if ( v9 >= 8 )
      {
        LOBYTE(ps) = 1;
        goto LABEL_29;
      }
    }
    LOBYTE(ps) = 0;
  }
LABEL_29:
  result = (unsigned __int8)ps ^ 1u;
  if ( !mask->invert )
    return (unsigned int)ps;
  return result;
}

/*
==============
G_PlayerMask_RemoveAll
==============
*/
void G_PlayerMask_RemoveAll(PlayerMask *mask)
{
  mask->mode[0] = 0;
  *(_QWORD *)&mask->mask.array[1] = 0i64;
  *(_QWORD *)&mask->mask.array[3] = 0i64;
  *(_QWORD *)&mask->mask.array[5] = 0i64;
  mask->mask.array[7] = 0;
  mask->mask.array[0] = 0x40000000;
}

/*
==============
G_PlayerMask_RemoveClient
==============
*/
void G_PlayerMask_RemoveClient(PlayerMask *mask, int clientNum)
{
  unsigned __int64 v2; 
  int v5; 
  int v6; 
  int v7; 

  v2 = (unsigned int)clientNum;
  if ( (unsigned int)clientNum >= 0xF8 )
  {
    v5 = 248;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_player_mask.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "clientNum doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  if ( mask->mode[0] == 1 )
  {
    if ( (unsigned int)v2 >= 0x100 )
    {
      v7 = 256;
      v6 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
        __debugbreak();
    }
    mask->mask.array[v2 >> 5] &= ~(0x80000000 >> (v2 & 0x1F));
  }
  else
  {
    mask->mode[0] = 1;
    *(_QWORD *)mask->mask.array = 0i64;
    *(_QWORD *)&mask->mask.array[2] = 0i64;
    *(_QWORD *)&mask->mask.array[4] = 0i64;
    *(_QWORD *)&mask->mask.array[6] = 0i64;
  }
}

/*
==============
G_PlayerMask_RemoveTeam
==============
*/
void G_PlayerMask_RemoveTeam(PlayerMask *mask, team_t team)
{
  unsigned __int64 v3; 

  v3 = (unsigned int)team;
  if ( mask->mode[0] == 2 )
  {
    if ( (unsigned int)team >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", team, 256) )
      __debugbreak();
    mask->mask.array[v3 >> 5] &= ~(0x80000000 >> (v3 & 0x1F));
  }
  else
  {
    mask->mode[0] = 2;
    *(_QWORD *)mask->mask.array = 0i64;
    *(_QWORD *)&mask->mask.array[2] = 0i64;
    *(_QWORD *)&mask->mask.array[4] = 0i64;
    *(_QWORD *)&mask->mask.array[6] = 0i64;
  }
}

/*
==============
G_PlayerMask_SetInverted
==============
*/
void G_PlayerMask_SetInverted(PlayerMask *mask, bool inverted)
{
  mask->invert = inverted;
}

