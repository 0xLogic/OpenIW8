/*
==============
BG_LoadCodePerksTable
==============
*/

void BG_LoadCodePerksTable(void)
{
  ?BG_LoadCodePerksTable@@YAXXZ();
}

/*
==============
BG_GetPerkNameForCodeIndex
==============
*/

const char *__fastcall BG_GetPerkNameForCodeIndex(unsigned int perkIndex)
{
  return ?BG_GetPerkNameForCodeIndex@@YAPEBDI@Z(perkIndex);
}

/*
==============
BG_GetPerkCodeIndexForName
==============
*/

unsigned int __fastcall BG_GetPerkCodeIndexForName(const char *perkName)
{
  return ?BG_GetPerkCodeIndexForName@@YAIPEBD@Z(perkName);
}

/*
==============
BG_GetPerkNetworkPriorityIndex
==============
*/

int __fastcall BG_GetPerkNetworkPriorityIndex(unsigned int perkIndex)
{
  return ?BG_GetPerkNetworkPriorityIndex@@YAHI@Z(perkIndex);
}

/*
==============
BG_GetPerkCodeIndexForName
==============
*/
__int64 BG_GetPerkCodeIndexForName(const char *perkName)
{
  unsigned int v3; 
  const char **v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !perkName )
    return 68i64;
  v3 = 0;
  v4 = bg_perkNames;
LABEL_4:
  v5 = *v4;
  v6 = 0x7FFFFFFFi64;
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = (const char *)(perkName - v5);
  do
  {
    v8 = (unsigned __int8)v5[(_QWORD)v7];
    v9 = v6;
    v10 = *(unsigned __int8 *)v5++;
    --v6;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        ++v3;
        ++v4;
        if ( v3 < 0x44 )
          goto LABEL_4;
        return v3;
      }
    }
  }
  while ( v8 );
  return v3;
}

/*
==============
BG_GetPerkNameForCodeIndex
==============
*/
const char *BG_GetPerkNameForCodeIndex(unsigned int perkIndex)
{
  __int64 v1; 
  int v4; 

  v1 = perkIndex;
  if ( perkIndex >= 0x44 )
  {
    v4 = 68;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_perks.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( perkIndex ) < (unsigned)( PERK_COUNT )", "perkIndex doesn't index PERK_COUNT\n\t%i not in [0, %i)", perkIndex, v4) )
      __debugbreak();
  }
  return bg_perkNames[v1];
}

/*
==============
BG_GetPerkNetworkPriorityIndex
==============
*/
__int64 BG_GetPerkNetworkPriorityIndex(unsigned int perkIndex)
{
  __int64 v1; 
  __int64 result; 
  int v4; 

  v1 = perkIndex;
  if ( perkIndex >= 0x44 )
  {
    v4 = 68;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_perks.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( perkIndex ) < (unsigned)( ( sizeof( *array_counter( s_perkNetworkInfo ) ) + 0 ) )", "perkIndex doesn't index s_perkNetworkInfo\n\t%i not in [0, %i)", perkIndex, v4) )
      __debugbreak();
  }
  result = 0xFFFFFFFFi64;
  if ( s_perkNetworkInfo[v1].isActive )
    return s_perkNetworkInfo[v1].networkPriorityIndex;
  return result;
}

/*
==============
BG_LoadCodePerksTable
==============
*/
void BG_LoadCodePerksTable(void)
{
  unsigned int v0; 
  unsigned __int16 *p_networkPriorityIndex; 
  const char *ColumnValueForRow; 
  int v3; 
  StringTable *v4; 
  const char *v5; 
  StringTable *tablePtr; 

  StringTable_GetAsset("codePerks.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_perks.cpp", 103, ASSERT_TYPE_ASSERT, "(codePerksTable)", (const char *)&queryFormat, "codePerksTable") )
    __debugbreak();
  BG_VerifyCodePerksTable(tablePtr);
  v0 = 0;
  p_networkPriorityIndex = &s_perkNetworkInfo[0].networkPriorityIndex;
  do
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v0, 1);
    v3 = atoi(ColumnValueForRow);
    v4 = tablePtr;
    *((_BYTE *)p_networkPriorityIndex - 2) = v3 != 0;
    v5 = StringTable_GetColumnValueForRow(v4, v0++, 2);
    *p_networkPriorityIndex = atoi(v5);
    p_networkPriorityIndex += 2;
  }
  while ( v0 < 0x44 );
}

/*
==============
BG_VerifyCodePerksTable
==============
*/
void BG_VerifyCodePerksTable(const StringTable *codePerksTable)
{
  const char **v1; 
  unsigned int i; 
  const char *ColumnValueForRow; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  char *v19; 
  char *fmt; 
  char v21[64]; 

  v1 = bg_perkNames;
  memset(v21, 0, sizeof(v21));
  for ( i = 0; i < 0x44; ++i )
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(codePerksTable, i, 0);
    v5 = *v1;
    v6 = ColumnValueForRow;
    v7 = 0x7FFFFFFFi64;
    if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = v6 - v5;
    do
    {
      v9 = (unsigned __int8)v5[v8];
      v10 = v7;
      v11 = *(unsigned __int8 *)v5++;
      --v7;
      if ( !v10 )
        break;
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
        {
          LODWORD(fmt) = i;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F45B80, 442i64, *v1, fmt);
          break;
        }
      }
    }
    while ( v9 );
    v14 = StringTable_GetColumnValueForRow(codePerksTable, i, 1);
    if ( atoi(v14) )
    {
      v15 = StringTable_GetColumnValueForRow(codePerksTable, i, 2);
      v16 = atoi(v15);
      v17 = (int)v16;
      if ( v16 > 0x3F )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F45C00, 443i64, v16, *v1);
      if ( v21[v17] )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F45C80, 444i64, (unsigned int)v17);
      v21[v17] = 1;
    }
    ++v1;
  }
  v18 = 0;
  v19 = v21;
  do
  {
    if ( !*v19 )
      Com_Printf(34, "PERKS: Perk network priority index %d is still available for assignment in codePerks.csv!\n", v18);
    ++v18;
    ++v19;
  }
  while ( v18 < 0x40 );
}

