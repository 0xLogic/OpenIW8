/*
==============
MSG_GetNetFieldListsNameForGameType
==============
*/

const char *__fastcall MSG_GetNetFieldListsNameForGameType(const char *const gameType)
{
  return ?MSG_GetNetFieldListsNameForGameType@@YAPEBDQEBD@Z(gameType);
}

/*
==============
MSG_GetNetFieldList
==============
*/

const NetFieldList *__fastcall MSG_GetNetFieldList(const char *const gameType, const NetFieldList_ID listID)
{
  return ?MSG_GetNetFieldList@@YAPEBUNetFieldList@@QEBDW4NetFieldList_ID@@@Z(gameType, listID);
}

/*
==============
MSG_GetNetFieldList
==============
*/
const NetFieldList *MSG_GetNetFieldList(const char *const gameType, const NetFieldList_ID listID)
{
  if ( I_strcmp(gameType, "br") && I_strcmp(gameType, "brtdm") )
    return MSG_GetNetFieldListForListSet(NetFieldListSet_ID_default, listID);
  else
    return MSG_GetNetFieldListForListSet(NetFieldListSet_ID_br, listID);
}

/*
==============
MSG_GetNetFieldListsNameForGameType
==============
*/
const char *MSG_GetNetFieldListsNameForGameType(const char *const gameType)
{
  if ( I_strcmp(gameType, "br") && I_strcmp(gameType, "brtdm") )
    return MSG_GetNetFieldListsNameForListSet(NetFieldListSet_ID_default);
  else
    return MSG_GetNetFieldListsNameForListSet(NetFieldListSet_ID_br);
}

