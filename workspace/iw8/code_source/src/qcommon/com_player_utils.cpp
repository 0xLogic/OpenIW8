/*
==============
Com_PlayerUtils_ColorizeClanTag
==============
*/

void __fastcall Com_PlayerUtils_ColorizeClanTag(const char *rawTag, unsigned __int8 tagType, char *outBuffer, const unsigned __int64 outBufferSize, const unsigned __int8 postColor)
{
  ?Com_PlayerUtils_ColorizeClanTag@@YAXPEBDEPEAD_KE@Z(rawTag, tagType, outBuffer, outBufferSize, postColor);
}

/*
==============
Com_PlayerUtils_ColorizeNameAndClanTag
==============
*/

void __fastcall Com_PlayerUtils_ColorizeNameAndClanTag(const char *playerName, const char *playerTag, const unsigned __int8 tagType, char *outBuffer, const unsigned __int64 outBufferSize, const unsigned __int8 postColor)
{
  ?Com_PlayerUtils_ColorizeNameAndClanTag@@YAXPEBD0EPEAD_KE@Z(playerName, playerTag, tagType, outBuffer, outBufferSize, postColor);
}

/*
==============
Com_PlayerUtils_SocialMenu_Stricmp
==============
*/

int __fastcall Com_PlayerUtils_SocialMenu_Stricmp(const char *s0, const char *s1)
{
  return ?Com_PlayerUtils_SocialMenu_Stricmp@@YAHPEBD0@Z(s0, s1);
}

/*
==============
Com_PlayerUtils_ColorizeClanTag
==============
*/
void Com_PlayerUtils_ColorizeClanTag(const char *rawTag, unsigned __int8 tagType, char *outBuffer, const unsigned __int64 outBufferSize, const unsigned __int8 postColor)
{
  char *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !rawTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 14, ASSERT_TYPE_ASSERT, "(rawTag)", (const char *)&queryFormat, "rawTag") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 15, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( outBufferSize < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 16, ASSERT_TYPE_ASSERT, "(outBufferSize >= ((5 + 2 + 4) + 1))", (const char *)&queryFormat, "outBufferSize >= MAX_CLAN_SIZE") )
    __debugbreak();
  if ( !*rawTag )
  {
    *outBuffer = 0;
    return;
  }
  if ( !I_stricmp(rawTag, "iw") || !I_stricmp(rawTag, "rvn") )
    tagType = 3;
  if ( tagType == 2 )
  {
    v10 = 51i64;
    v9 = outBuffer;
  }
  else
  {
    v9 = outBuffer;
    if ( tagType != 3 )
    {
      Com_sprintf(outBuffer, outBufferSize, (const char *)&queryFormat, rawTag);
      return;
    }
    v10 = 49i64;
  }
  LODWORD(v11) = postColor;
  Com_sprintf(v9, outBufferSize, "^%c%s^%c", v10, rawTag, v11);
}

/*
==============
Com_PlayerUtils_ColorizeNameAndClanTag
==============
*/
void Com_PlayerUtils_ColorizeNameAndClanTag(const char *playerName, const char *playerTag, const unsigned __int8 tagType, char *outBuffer, const unsigned __int64 outBufferSize, const unsigned __int8 postColor)
{
  char *v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !playerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 50, ASSERT_TYPE_ASSERT, "(playerName)", (const char *)&queryFormat, "playerName") )
    __debugbreak();
  if ( !playerTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 51, ASSERT_TYPE_ASSERT, "(playerTag)", (const char *)&queryFormat, "playerTag") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 52, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( outBufferSize < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 53, ASSERT_TYPE_ASSERT, "(outBufferSize >= ((5 + 2 + 4) + 1))", (const char *)&queryFormat, "outBufferSize >= MAX_CLAN_SIZE") )
    __debugbreak();
  if ( !*playerTag )
  {
    Com_sprintf(outBuffer, outBufferSize, (const char *)&queryFormat, playerName);
    return;
  }
  if ( tagType == 2 )
  {
    v11 = 51i64;
    v10 = outBuffer;
  }
  else
  {
    v10 = outBuffer;
    if ( tagType != 3 )
    {
      Com_sprintf(outBuffer, outBufferSize, "[%s]%s", playerTag, playerName);
      return;
    }
    v11 = 49i64;
  }
  LODWORD(v12) = postColor;
  Com_sprintf(v10, outBufferSize, "[^%c%s^%c]%s", v11, playerTag, v12, playerName);
}

/*
==============
Com_PlayerUtils_SocialMenu_Stricmp
==============
*/
__int64 Com_PlayerUtils_SocialMenu_Stricmp(const char *s0, const char *s1)
{
  int v4; 
  unsigned int v5; 
  signed __int64 v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  bool v16; 

  v4 = 0x7FFFFFFF;
  v5 = 1;
  if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 102, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !s1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_player_utils.cpp", 103, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v6 = s0 - s1;
  while ( 1 )
  {
    v7 = (unsigned __int8)s1[v6];
    v8 = v4;
    v9 = *(unsigned __int8 *)s1++;
    --v4;
    if ( !v8 )
      return 0i64;
    if ( v7 != v9 )
    {
      v10 = v7 + 32;
      if ( v7 - 65 > 0x19 )
        v10 = v7;
      v11 = v9 + 32;
      v7 = v10;
      if ( v9 - 65 > 0x19 )
        v11 = v9;
      if ( v10 != v11 )
        break;
    }
    if ( !v7 )
      return 0i64;
  }
  if ( v10 - 97 > 0x19 )
  {
    v15 = v10 - 48;
    v13 = 0;
    v14 = (v15 > 9) + 1;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  if ( v11 - 97 > 0x19 )
  {
    LOBYTE(v13) = v11 - 48 > 9;
    ++v13;
  }
  v16 = v14 < v13;
  if ( v14 == v13 )
    v16 = v7 < v11;
  if ( v16 )
    return (unsigned int)-1;
  return v5;
}

