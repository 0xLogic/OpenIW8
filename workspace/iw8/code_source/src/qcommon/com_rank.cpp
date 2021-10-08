/*
==============
CL_GetMaxXPFromFile
==============
*/

int __fastcall CL_GetMaxXPFromFile(const char *rankTableFile)
{
  return ?CL_GetMaxXPFromFile@@YAHPEBD@Z(rankTableFile);
}

/*
==============
Com_GetMaxRankAlien
==============
*/

int __fastcall Com_GetMaxRankAlien()
{
  return ?Com_GetMaxRankAlien@@YAHXZ();
}

/*
==============
Com_GetMaxXPAlien
==============
*/

int __fastcall Com_GetMaxXPAlien()
{
  return ?Com_GetMaxXPAlien@@YAHXZ();
}

/*
==============
Com_GetMaxPrestigeMP
==============
*/

int __fastcall Com_GetMaxPrestigeMP()
{
  return ?Com_GetMaxPrestigeMP@@YAHXZ();
}

/*
==============
Com_GetMaxRankMP
==============
*/

int __fastcall Com_GetMaxRankMP()
{
  return ?Com_GetMaxRankMP@@YAHXZ();
}

/*
==============
Com_GetRankForXpAlien
==============
*/

int __fastcall Com_GetRankForXpAlien(int xp)
{
  return ?Com_GetRankForXpAlien@@YAHH@Z(xp);
}

/*
==============
Com_GetXpForRankAlien
==============
*/

int __fastcall Com_GetXpForRankAlien(int rank)
{
  return ?Com_GetXpForRankAlien@@YAHH@Z(rank);
}

/*
==============
CL_GetRankDataFromTable
==============
*/

const char *__fastcall CL_GetRankDataFromTable(int rank, rankTableColumns_t column, const char *rankTableFile)
{
  return ?CL_GetRankDataFromTable@@YAPEBDHW4rankTableColumns_t@@PEBD@Z(rank, column, rankTableFile);
}

/*
==============
Com_GetRankDataMP
==============
*/

const char *__fastcall Com_GetRankDataMP(int rank, rankTableColumns_t column)
{
  return ?Com_GetRankDataMP@@YAPEBDHW4rankTableColumns_t@@@Z(rank, column);
}

/*
==============
Com_GetXpForRankMP
==============
*/

int __fastcall Com_GetXpForRankMP(int rank)
{
  return ?Com_GetXpForRankMP@@YAHH@Z(rank);
}

/*
==============
Com_GetRankIconForFile
==============
*/

const GfxImage *__fastcall Com_GetRankIconForFile(const char *rankFile, int rank, int prestige)
{
  return ?Com_GetRankIconForFile@@YAPEBUGfxImage@@PEBDHH@Z(rankFile, rank, prestige);
}

/*
==============
Com_GetMaxXPMP
==============
*/

int __fastcall Com_GetMaxXPMP()
{
  return ?Com_GetMaxXPMP@@YAHXZ();
}

/*
==============
Com_GetRankForXpMP
==============
*/

int __fastcall Com_GetRankForXpMP(int xp)
{
  return ?Com_GetRankForXpMP@@YAHH@Z(xp);
}

/*
==============
Com_GetRankIcon
==============
*/

const GfxImage *__fastcall Com_GetRankIcon(int rank, int prestige)
{
  return ?Com_GetRankIcon@@YAPEBUGfxImage@@HH@Z(rank, prestige);
}

/*
==============
Com_GetAlienRankIcon
==============
*/

const GfxImage *__fastcall Com_GetAlienRankIcon(int rank, int prestige)
{
  return ?Com_GetAlienRankIcon@@YAPEBUGfxImage@@HH@Z(rank, prestige);
}

/*
==============
Com_GetRankDataAlien
==============
*/

const char *__fastcall Com_GetRankDataAlien(int rank, rankTableColumns_t column)
{
  return ?Com_GetRankDataAlien@@YAPEBDHW4rankTableColumns_t@@@Z(rank, column);
}

/*
==============
CL_GetMaxXPFromFile
==============
*/
int CL_GetMaxXPFromFile(const char *rankTableFile)
{
  const char *v2; 
  const char *v3; 
  StringTable *tablePtr; 

  if ( !rankTableFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 228, ASSERT_TYPE_ASSERT, "(rankTableFile)", (const char *)&queryFormat, "rankTableFile") )
    __debugbreak();
  StringTable_GetAsset(rankTableFile, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 231, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v2 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  v3 = StringTable_Lookup(tablePtr, 0, v2, 7);
  return atoi(v3);
}

/*
==============
CL_GetRankDataFromTable
==============
*/
const char *CL_GetRankDataFromTable(int rank, rankTableColumns_t column, const char *rankTableFile)
{
  char dest; 
  StringTable *tablePtr; 

  if ( (unsigned int)column >= RANKTABLE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( column ) < (unsigned)( RANKTABLE_COUNT )", "column doesn't index RANKTABLE_COUNT\n\t%i not in [0, %i)", column, 18) )
    __debugbreak();
  if ( !rankTableFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 114, ASSERT_TYPE_ASSERT, "(rankTableFile)", (const char *)&queryFormat, "rankTableFile") )
    __debugbreak();
  StringTable_GetAsset(rankTableFile, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 117, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  Com_sprintf(&dest, 4ui64, "%i", (unsigned int)rank);
  return StringTable_Lookup(tablePtr, 0, &dest, column);
}

/*
==============
CL_GetRankForXpTable
==============
*/
int CL_GetRankForXpTable(const int xp, int maxRank, const char *rankTableFile)
{
  int v6; 
  const char *v7; 
  int v8; 
  int i; 
  const char *ColumnValueForRow; 
  int v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  __int64 v16; 
  StringTable *tablePtr; 

  if ( !rankTableFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 25, ASSERT_TYPE_ASSERT, "(rankTableFile)", (const char *)&queryFormat, "rankTableFile") )
    __debugbreak();
  StringTable_GetAsset(rankTableFile, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 28, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v6 = StringTable_LookupRowNumForValue(tablePtr, 0, "maxrank") + 1;
  if ( v6 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 31, ASSERT_TYPE_ASSERT, "(bottomrow >= 1)", (const char *)&queryFormat, "bottomrow >= 1") )
    __debugbreak();
  v7 = j_va("%d", (unsigned int)(maxRank - 1));
  v8 = StringTable_LookupRowNumForValue(tablePtr, 0, v7);
  if ( v8 < v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 33, ASSERT_TYPE_ASSERT, "(toprow >= bottomrow)", (const char *)&queryFormat, "toprow >= bottomrow") )
    __debugbreak();
  for ( i = v6 + (v8 - v6) / 2; v8 > v6; i = v6 + (v8 - v6) / 2 )
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, i, 2);
    v11 = atoi(ColumnValueForRow);
    v12 = StringTable_GetColumnValueForRow(tablePtr, i, 7);
    v13 = atoi(v12);
    if ( v13 < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 44, ASSERT_TYPE_ASSERT, "(maxxp >= minxp)", (const char *)&queryFormat, "maxxp >= minxp") )
      __debugbreak();
    if ( xp >= v11 )
    {
      if ( xp < v13 )
        break;
      v6 = i + 1;
    }
    else
    {
      v8 = i - 1;
    }
  }
  if ( i < 0 || i >= tablePtr->rowCount )
  {
    LODWORD(v16) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 55, ASSERT_TYPE_ASSERT, "( ( row >= 0 && row < table->rowCount ) )", "( row ) = %i", v16) )
      __debugbreak();
  }
  v14 = StringTable_GetColumnValueForRow(tablePtr, i, 0);
  return atoi(v14);
}

/*
==============
Com_GetAlienRankIcon
==============
*/
const GfxImage *Com_GetAlienRankIcon(int rank, int prestige)
{
  return Com_GetRankIconForFile("cp/zombies/rankIconTable.csv", rank, prestige);
}

/*
==============
Com_GetMaxPrestigeMP
==============
*/
__int64 Com_GetMaxPrestigeMP()
{
  const char *v0; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 208, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v0 = StringTable_Lookup(tablePtr, 0, "maxelder", 1);
  return (unsigned int)(atoi(v0) + 1);
}

/*
==============
Com_GetMaxRankAlien
==============
*/
__int64 Com_GetMaxRankAlien()
{
  const char *v0; 
  StringTable *tablePtr; 

  StringTable_GetAsset("cp/zombies/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 180, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v0 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  return (unsigned int)(atoi(v0) + 1);
}

/*
==============
Com_GetMaxRankMP
==============
*/
__int64 Com_GetMaxRankMP()
{
  const char *v0; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 180, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v0 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  return (unsigned int)(atoi(v0) + 1);
}

/*
==============
Com_GetMaxXPAlien
==============
*/
int Com_GetMaxXPAlien()
{
  const char *v0; 
  const char *v1; 
  StringTable *tablePtr; 

  StringTable_GetAsset("cp/zombies/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 231, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v0 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  v1 = StringTable_Lookup(tablePtr, 0, v0, 7);
  return atoi(v1);
}

/*
==============
Com_GetMaxXPMP
==============
*/
int Com_GetMaxXPMP()
{
  const char *v0; 
  const char *v1; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 231, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v0 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  v1 = StringTable_Lookup(tablePtr, 0, v0, 7);
  return atoi(v1);
}

/*
==============
Com_GetRankDataAlien
==============
*/
const char *Com_GetRankDataAlien(int rank, rankTableColumns_t column)
{
  return CL_GetRankDataFromTable(rank, column, "cp/zombies/rankTable.csv");
}

/*
==============
Com_GetRankDataMP
==============
*/
const char *Com_GetRankDataMP(int rank, rankTableColumns_t column)
{
  return CL_GetRankDataFromTable(rank, column, "mp/rankTable.csv");
}

/*
==============
Com_GetRankForXpAlien
==============
*/
int Com_GetRankForXpAlien(int xp)
{
  const char *v2; 
  int v3; 
  StringTable *tablePtr; 

  StringTable_GetAsset("cp/zombies/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 180, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v2 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  v3 = atoi(v2);
  return CL_GetRankForXpTable(xp, v3 + 1, "cp/zombies/rankTable.csv");
}

/*
==============
Com_GetRankForXpMP
==============
*/
int Com_GetRankForXpMP(int xp)
{
  const char *v2; 
  int v3; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 180, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v2 = StringTable_Lookup(tablePtr, 0, "maxrank", 1);
  v3 = atoi(v2);
  return CL_GetRankForXpTable(xp, v3 + 1, "mp/rankTable.csv");
}

/*
==============
Com_GetRankIcon
==============
*/
const GfxImage *Com_GetRankIcon(int rank, int prestige)
{
  return Com_GetRankIconForFile("mp/rankIconTable.csv", rank, prestige);
}

/*
==============
Com_GetRankIconForFile
==============
*/
GfxImage *Com_GetRankIconForFile(const char *rankFile, int rank, int prestige)
{
  const char *v6; 
  __int64 v8; 
  char dest; 
  StringTable *tablePtr; 

  if ( rank < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 145, ASSERT_TYPE_ASSERT, "( ( rank >= 0 ) )", "( rank ) = %i", rank) )
    __debugbreak();
  if ( prestige < 0 )
  {
    LODWORD(v8) = prestige;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 146, ASSERT_TYPE_ASSERT, "( ( prestige >= 0 ) )", "( prestige ) = %i", v8) )
      __debugbreak();
  }
  StringTable_GetAsset(rankFile, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 149, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  Com_sprintf(&dest, 4ui64, "%i", (unsigned int)(rank + prestige));
  v6 = StringTable_Lookup(tablePtr, 0, &dest, 1);
  return Image_Register(v6, IMAGE_TRACK_HUD);
}

/*
==============
Com_GetXpForRankAlien
==============
*/
int Com_GetXpForRankAlien(int rank)
{
  const char *v2; 
  const char *v3; 
  StringTable *tablePtr; 

  StringTable_GetAsset("cp/zombies/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 81, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v2 = j_va("%d", (unsigned int)rank);
  v3 = StringTable_Lookup(tablePtr, 0, v2, 2);
  if ( *v3 )
    return atoi(v3);
  else
    return 100000000;
}

/*
==============
Com_GetXpForRankMP
==============
*/
int Com_GetXpForRankMP(int rank)
{
  const char *v2; 
  const char *v3; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/rankTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_rank.cpp", 81, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v2 = j_va("%d", (unsigned int)rank);
  v3 = StringTable_Lookup(tablePtr, 0, v2, 2);
  if ( *v3 )
    return atoi(v3);
  else
    return 100000000;
}

