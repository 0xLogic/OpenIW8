/*
==============
VoiceMute_QueryAndRefreshUserStatus
==============
*/

int __fastcall VoiceMute_QueryAndRefreshUserStatus(XUID userId)
{
  return ?VoiceMute_QueryAndRefreshUserStatus@@YAHUXUID@@@Z(userId);
}

/*
==============
VoiceMute_RemoveUser
==============
*/

void __fastcall VoiceMute_RemoveUser(XUID userId)
{
  ?VoiceMute_RemoveUser@@YAXUXUID@@@Z(userId);
}

/*
==============
VoiceMute_AddUser
==============
*/

void __fastcall VoiceMute_AddUser(XUID userId)
{
  ?VoiceMute_AddUser@@YAXUXUID@@@Z(userId);
}

/*
==============
VoiceMute_Init
==============
*/

void VoiceMute_Init(void)
{
  ?VoiceMute_Init@@YAXXZ();
}

/*
==============
VoiceMute_AddUser
==============
*/
void VoiceMute_AddUser(XUID userId)
{
  const char *v1; 
  __int64 v2; 
  XUID userIda; 

  userIda.m_id = userId.m_id;
  if ( !XUID::IsValid(&userIda) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 158, ASSERT_TYPE_ASSERT, "(userId.IsValid())", (const char *)&queryFormat, "userId.IsValid()") )
    __debugbreak();
  if ( g_muteData.userCount > 0x80u )
  {
    LODWORD(v2) = g_muteData.userCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 162, ASSERT_TYPE_ASSERT, "( ( muteData->userCount <= 128 ) )", "( muteData->userCount ) = %i", v2) )
      __debugbreak();
  }
  if ( VoiceMute_FindUserIndex(userIda) != 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 164, ASSERT_TYPE_ASSERT, "(VoiceMute_FindUserIndex( userId ) == 128)", (const char *)&queryFormat, "VoiceMute_FindUserIndex( userId ) == MUTED_USER_NOT_FOUND") )
    __debugbreak();
  if ( VoiceMute_FindUserIndex(userIda) == 128 )
  {
    if ( g_muteData.userCount == 0x80 )
      VoiceMute_ObliterateUser(0);
    VoiceMute_InsertUser(userIda);
    v1 = XUID::ToDevString(&userIda);
    Com_Printf(25, "Voice: Adding Mute [XUID %s].\n", v1);
  }
}

/*
==============
VoiceMute_FindUserIndex
==============
*/
__int64 VoiceMute_FindUserIndex(XUID userId)
{
  unsigned __int8 userCount; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v5; 
  XUID v6; 
  XUID xuid; 
  XUID v8; 

  v6.m_id = userId.m_id;
  if ( !XUID::IsValid(&v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 89, ASSERT_TYPE_ASSERT, "(userId.IsValid())", (const char *)&queryFormat, "userId.IsValid()") )
    __debugbreak();
  userCount = g_muteData.userCount;
  if ( g_muteData.userCount > 0x80u )
  {
    LODWORD(v5) = g_muteData.userCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 93, ASSERT_TYPE_ASSERT, "( ( muteData->userCount <= 128 ) )", "( muteData->userCount ) = %i", v5) )
      __debugbreak();
    userCount = g_muteData.userCount;
  }
  v2 = userCount - 1i64;
  v3 = userCount - 1;
  if ( v2 < 0 )
    return 128i64;
  while ( 1 )
  {
    xuid.m_id = v6.m_id;
    v8.m_id = g_muteData.users[v2].m_id;
    if ( XUID::operator==(&v8, &xuid) )
      break;
    --v3;
    if ( --v2 < 0 )
      return 128i64;
  }
  return v3;
}

/*
==============
VoiceMute_Init
==============
*/
void VoiceMute_Init(void)
{
  if ( !s_IsInited )
  {
    s_IsInited = 1;
    memset_0(&g_muteData, 0, sizeof(g_muteData));
  }
}

/*
==============
VoiceMute_InsertUser
==============
*/
void VoiceMute_InsertUser(XUID userId)
{
  unsigned __int8 userCount; 
  XUID *v2; 
  unsigned __int8 v3; 
  __int64 v4; 
  XUID v5; 
  XUID xuid; 

  v5.m_id = userId.m_id;
  if ( !XUID::IsValid(&v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 138, ASSERT_TYPE_ASSERT, "(userId.IsValid())", (const char *)&queryFormat, "userId.IsValid()") )
    __debugbreak();
  userCount = g_muteData.userCount;
  if ( g_muteData.userCount >= 0x80u )
  {
    LODWORD(v4) = g_muteData.userCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( muteData->userCount ) < (unsigned)( 128 )", "muteData->userCount doesn't index MUTED_USER_LIST_MAX\n\t%i not in [0, %i)", v4, 128) )
      __debugbreak();
    userCount = g_muteData.userCount;
  }
  xuid.m_id = v5.m_id;
  v2 = &g_muteData.users[userCount];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 74, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  XUID::operator=(v2, &xuid);
  v3 = g_muteData.userCount + 1;
  g_muteData.userCount = v3;
  if ( v3 > 0x80u )
  {
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 147, ASSERT_TYPE_SANITY, "( ( muteData->userCount <= 128 ) )", "( muteData->userCount ) = %i", v4) )
      __debugbreak();
  }
}

/*
==============
VoiceMute_ObliterateUser
==============
*/
void VoiceMute_ObliterateUser(unsigned int userIndex)
{
  __int64 v1; 
  const XUID *v2; 
  __int64 v3; 
  XUID result; 

  v1 = userIndex;
  if ( userIndex == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 114, ASSERT_TYPE_ASSERT, "(userIndex != 128)", (const char *)&queryFormat, "userIndex != MUTED_USER_NOT_FOUND") )
    __debugbreak();
  if ( g_muteData.userCount <= (unsigned int)v1 )
  {
    LODWORD(v3) = g_muteData.userCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 118, ASSERT_TYPE_ASSERT, "( ( muteData->userCount > userIndex ) )", "( muteData->userCount ) = %i", v3) )
      __debugbreak();
  }
  if ( g_muteData.userCount > 0x80u )
  {
    LODWORD(v3) = g_muteData.userCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 119, ASSERT_TYPE_ASSERT, "( ( muteData->userCount <= 128 ) )", "( muteData->userCount ) = %i", v3) )
      __debugbreak();
  }
  memmove_0(&g_muteData.users[v1], &g_muteData.users[(unsigned int)(v1 + 1)], 8i64 * (g_muteData.userCount - (unsigned int)v1 - 1));
  --g_muteData.userCount;
  if ( (_DWORD)v1 == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 126, ASSERT_TYPE_ASSERT, "(userIndex != 128)", (const char *)&queryFormat, "userIndex != MUTED_USER_NOT_FOUND") )
    __debugbreak();
  v2 = XUID::NullXUID(&result);
  XUID::operator=(&g_muteData.users[g_muteData.userCount], v2);
}

/*
==============
VoiceMute_QueryAndRefreshUserStatus
==============
*/
__int64 VoiceMute_QueryAndRefreshUserStatus(XUID userId)
{
  unsigned int UserIndex; 
  const char *v3; 
  XUID userIda; 

  userIda.m_id = userId.m_id;
  if ( !XUID::IsValid(&userIda) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 208, ASSERT_TYPE_ASSERT, "(userId.IsValid())", (const char *)&queryFormat, "userId.IsValid()") )
    __debugbreak();
  UserIndex = VoiceMute_FindUserIndex(userIda);
  if ( UserIndex == 128 )
    return 0i64;
  if ( g_muteData.userCount <= UserIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 219, ASSERT_TYPE_SANITY, "( muteData->userCount > userIndex )", (const char *)&queryFormat, "muteData->userCount > userIndex") )
    __debugbreak();
  if ( g_muteData.userCount - UserIndex > 0xC8 )
  {
    VoiceMute_ObliterateUser(UserIndex);
    VoiceMute_InsertUser(userIda);
    v3 = XUID::ToDevString(&userIda);
    Com_Printf(25, "Voice: Refreshing Mute [XUID %s].\n", v3);
  }
  return 1i64;
}

/*
==============
VoiceMute_RemoveUser
==============
*/
void VoiceMute_RemoveUser(XUID userId)
{
  unsigned int UserIndex; 
  const char *v2; 
  XUID userIda; 

  userIda.m_id = userId.m_id;
  if ( !XUID::IsValid(&userIda) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\voicemute.cpp", 188, ASSERT_TYPE_ASSERT, "(userId.IsValid())", (const char *)&queryFormat, "userId.IsValid()") )
    __debugbreak();
  UserIndex = VoiceMute_FindUserIndex(userIda);
  if ( UserIndex != 128 )
  {
    VoiceMute_ObliterateUser(UserIndex);
    v2 = XUID::ToDevString(&userIda);
    Com_Printf(25, "Voice: Removing Mute [XUID %s].\n", v2);
  }
}

