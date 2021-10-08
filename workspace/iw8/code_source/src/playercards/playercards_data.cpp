/*
==============
PlayerCards_GetPatchCount
==============
*/

unsigned int __fastcall PlayerCards_GetPatchCount()
{
  return ?PlayerCards_GetPatchCount@@YAIXZ();
}

/*
==============
PlayerCards_GetPatchNameByRef
==============
*/

const char *__fastcall PlayerCards_GetPatchNameByRef(const unsigned int refId)
{
  return ?PlayerCards_GetPatchNameByRef@@YAPEBDI@Z(refId);
}

/*
==============
PlayerCards_GetBackgroundHideUnlessUnlocked
==============
*/

bool __fastcall PlayerCards_GetBackgroundHideUnlessUnlocked(const unsigned int refId)
{
  return ?PlayerCards_GetBackgroundHideUnlessUnlocked@@YA_NI@Z(refId);
}

/*
==============
PlayerCards_GetBackgroundImageNameByRef
==============
*/

const char *__fastcall PlayerCards_GetBackgroundImageNameByRef(const unsigned int refId)
{
  return ?PlayerCards_GetBackgroundImageNameByRef@@YAPEBDI@Z(refId);
}

/*
==============
PlayerCards_GetPatchImageNameByRef
==============
*/

const char *__fastcall PlayerCards_GetPatchImageNameByRef(const unsigned int refId)
{
  return ?PlayerCards_GetPatchImageNameByRef@@YAPEBDI@Z(refId);
}

/*
==============
PlayerCards_GetPatchHideUnlessUnlocked
==============
*/

bool __fastcall PlayerCards_GetPatchHideUnlessUnlocked(const unsigned int refId)
{
  return ?PlayerCards_GetPatchHideUnlessUnlocked@@YA_NI@Z(refId);
}

/*
==============
PlayerCards_GetBackgroundCount
==============
*/

unsigned int __fastcall PlayerCards_GetBackgroundCount()
{
  return ?PlayerCards_GetBackgroundCount@@YAIXZ();
}

/*
==============
PlayerCards_GetBackgroundImageByRef
==============
*/

const GfxImage *__fastcall PlayerCards_GetBackgroundImageByRef(const unsigned int refId)
{
  return ?PlayerCards_GetBackgroundImageByRef@@YAPEBUGfxImage@@I@Z(refId);
}

/*
==============
PlayerCards_GetEntitlementID
==============
*/

unsigned int __fastcall PlayerCards_GetEntitlementID(const unsigned int refId)
{
  return ?PlayerCards_GetEntitlementID@@YAII@Z(refId);
}

/*
==============
PlayerCards_GetPatchImageByRef
==============
*/

const GfxImage *__fastcall PlayerCards_GetPatchImageByRef(const unsigned int refId)
{
  return ?PlayerCards_GetPatchImageByRef@@YAPEBUGfxImage@@I@Z(refId);
}

/*
==============
PlayerCards_GetPatchCategoryByRef
==============
*/

const char *__fastcall PlayerCards_GetPatchCategoryByRef(const unsigned int refId)
{
  return ?PlayerCards_GetPatchCategoryByRef@@YAPEBDI@Z(refId);
}

/*
==============
PlayerCards_GetBackgroundCount
==============
*/
int PlayerCards_GetBackgroundCount()
{
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/callingCards.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_data.cpp", 21, ASSERT_TYPE_SANITY, "( table )", (const char *)&queryFormat, "table") )
    __debugbreak();
  return StringTable_GetRowCount(tablePtr);
}

/*
==============
PlayerCards_GetBackgroundHideUnlessUnlocked
==============
*/
bool PlayerCards_GetBackgroundHideUnlessUnlocked(const unsigned int refId)
{
  const char *TableStringByRef; 
  __int64 v2; 
  char v3; 
  bool v4; 

  TableStringByRef = PlayerCards_GetTableStringByRef("mp/callingCards.csv", refId, 0, 6u);
  v2 = 0i64;
  while ( 1 )
  {
    v3 = aTrue_5[v2++];
    v4 = v3 == TableStringByRef[v2 - 1];
    if ( v3 != TableStringByRef[v2 - 1] )
      break;
    if ( v2 == 5 )
      return v3 == TableStringByRef[4];
  }
  return v4;
}

/*
==============
PlayerCards_GetBackgroundImageByRef
==============
*/
GfxImage *PlayerCards_GetBackgroundImageByRef(const unsigned int refId)
{
  const char *TableStringByRef; 

  TableStringByRef = PlayerCards_GetTableStringByRef("mp/callingCards.csv", refId, 0, 2u);
  if ( TableStringByRef && *TableStringByRef )
    return Image_Register(TableStringByRef, IMAGE_TRACK_UI);
  else
    return 0i64;
}

/*
==============
PlayerCards_GetBackgroundImageNameByRef
==============
*/
const char *PlayerCards_GetBackgroundImageNameByRef(const unsigned int refId)
{
  return PlayerCards_GetTableStringByRef("mp/callingCards.csv", refId, 0, 2u);
}

/*
==============
PlayerCards_GetEntitlementID
==============
*/
int PlayerCards_GetEntitlementID(const unsigned int refId)
{
  const char *TableStringByRef; 

  TableStringByRef = PlayerCards_GetTableStringByRef("mp/emblemtable.csv", refId, 0, 5u);
  return atoi(TableStringByRef);
}

/*
==============
PlayerCards_GetPatchCategoryByRef
==============
*/
const char *PlayerCards_GetPatchCategoryByRef(const unsigned int refId)
{
  return PlayerCards_GetTableStringByRef("mp/emblemtable.csv", refId, 0, 4u);
}

/*
==============
PlayerCards_GetPatchCount
==============
*/
int PlayerCards_GetPatchCount()
{
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/emblemtable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_data.cpp", 21, ASSERT_TYPE_SANITY, "( table )", (const char *)&queryFormat, "table") )
    __debugbreak();
  return StringTable_GetRowCount(tablePtr);
}

/*
==============
PlayerCards_GetPatchHideUnlessUnlocked
==============
*/
bool PlayerCards_GetPatchHideUnlessUnlocked(const unsigned int refId)
{
  const char *TableStringByRef; 
  __int64 v2; 
  char v3; 
  bool v4; 

  TableStringByRef = PlayerCards_GetTableStringByRef("mp/emblemtable.csv", refId, 0, 6u);
  v2 = 0i64;
  while ( 1 )
  {
    v3 = aTrue_5[v2++];
    v4 = v3 == TableStringByRef[v2 - 1];
    if ( v3 != TableStringByRef[v2 - 1] )
      break;
    if ( v2 == 5 )
      return v3 == TableStringByRef[4];
  }
  return v4;
}

/*
==============
PlayerCards_GetPatchImageByRef
==============
*/
GfxImage *PlayerCards_GetPatchImageByRef(const unsigned int refId)
{
  const char *TableStringByRef; 

  TableStringByRef = PlayerCards_GetTableStringByRef("mp/emblemtable.csv", refId, 0, 2u);
  if ( TableStringByRef && *TableStringByRef )
    return Image_Register(TableStringByRef, IMAGE_TRACK_UI);
  else
    return 0i64;
}

/*
==============
PlayerCards_GetPatchImageNameByRef
==============
*/
const char *PlayerCards_GetPatchImageNameByRef(const unsigned int refId)
{
  return PlayerCards_GetTableStringByRef("mp/emblemtable.csv", refId, 0, 2u);
}

/*
==============
PlayerCards_GetPatchNameByRef
==============
*/
const char *PlayerCards_GetPatchNameByRef(const unsigned int refId)
{
  return PlayerCards_GetTableStringByRef("mp/emblemtable.csv", refId, 0, 3u);
}

/*
==============
PlayerCards_GetTableStringByRef
==============
*/
const char *PlayerCards_GetTableStringByRef(const char *tablePath, const unsigned int refId, const unsigned int refColumnNum, const unsigned int resultColumnNum)
{
  const char *v9; 
  StringTable *tablePtr; 
  char dest[16]; 

  if ( !tablePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_data.cpp", 34, ASSERT_TYPE_ASSERT, "(tablePath)", (const char *)&queryFormat, "tablePath") )
    __debugbreak();
  if ( Com_sprintf_truncate(dest, 0x10ui64, "%d", refId) >= 0 )
  {
    StringTable_GetAsset(tablePath, (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_data.cpp", 43, ASSERT_TYPE_SANITY, "( table )", (const char *)&queryFormat, "table") )
      __debugbreak();
    v9 = StringTable_Lookup(tablePtr, refColumnNum, dest, resultColumnNum);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_data.cpp", 46, ASSERT_TYPE_SANITY, "( string )", (const char *)&queryFormat, "string") )
      __debugbreak();
    return v9;
  }
  else
  {
    Com_PrintWarning(1, "PlayerCards_GetTableStringByRef: ID invalid - does not fit in buffer (%d)\n", refId);
    return (char *)&queryFormat.fmt + 3;
  }
}

