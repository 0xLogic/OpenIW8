/*
==============
BG_GameInterface_GameModeIsMP
==============
*/

bool __fastcall BG_GameInterface_GameModeIsMP(GameModeType gameMode)
{
  return ?BG_GameInterface_GameModeIsMP@@YA_NW4GameModeType@@@Z(gameMode);
}

/*
==============
BG_GameInterface_GameModeIsOnline
==============
*/

bool __fastcall BG_GameInterface_GameModeIsOnline(GameModeType gameMode)
{
  return ?BG_GameInterface_GameModeIsOnline@@YA_NW4GameModeType@@@Z(gameMode);
}

/*
==============
BG_GameInterface_GameModeIsMP
==============
*/
bool BG_GameInterface_GameModeIsMP(GameModeType gameMode)
{
  return (_BYTE)gameMode == HALF_HALF;
}

/*
==============
BG_GameInterface_GameModeIsOnline
==============
*/
bool BG_GameInterface_GameModeIsOnline(GameModeType gameMode)
{
  return (unsigned __int8)(gameMode - 2) <= 1u;
}

