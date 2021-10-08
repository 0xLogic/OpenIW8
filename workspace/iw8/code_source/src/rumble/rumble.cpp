/*
==============
Rumble_Shutdown
==============
*/

void Rumble_Shutdown(void)
{
  ?Rumble_Shutdown@@YAXXZ();
}

/*
==============
Rumble_IsInitialized
==============
*/

bool __fastcall Rumble_IsInitialized()
{
  return ?Rumble_IsInitialized@@YA_NXZ();
}

/*
==============
Rumble_GetInfo
==============
*/

const RumbleInfo *__fastcall Rumble_GetInfo(int index)
{
  return ?Rumble_GetInfo@@YAPEBURumbleInfo@@H@Z(index);
}

/*
==============
Rumble_GetIndex
==============
*/

int __fastcall Rumble_GetIndex(const RumbleInfo *info)
{
  return ?Rumble_GetIndex@@YAHPEBURumbleInfo@@@Z(info);
}

/*
==============
Rumble_Init
==============
*/

void __fastcall Rumble_Init(bool isFullInit)
{
  ?Rumble_Init@@YAX_N@Z(isFullInit);
}

/*
==============
Rumble_GetRumbleByName
==============
*/

RumbleInfo *__fastcall Rumble_GetRumbleByName(const char *rumbleName)
{
  return ?Rumble_GetRumbleByName@@YAPEAURumbleInfo@@PEBD@Z(rumbleName);
}

/*
==============
Rumble_Check_ConfigStringCallback
==============
*/
void Rumble_Check_ConfigStringCallback(const unsigned int rumbleIndex, const char *rumbleName)
{
  __int64 v2; 
  RumbleInfo *v4; 
  const char *name; 
  __int64 v6; 
  signed __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  v2 = (int)rumbleIndex;
  if ( rumbleIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_rumbles ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_rumbles )\n\t%i not in [0, %i)", rumbleIndex, 128) )
    __debugbreak();
  v4 = s_rumbles[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 28, ASSERT_TYPE_ASSERT, "(rumble)", (const char *)&queryFormat, "rumble") )
    __debugbreak();
  name = v4->name;
  v6 = 0x7FFFFFFFi64;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !rumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - rumbleName;
  do
  {
    v8 = rumbleName[v7];
    v9 = v6;
    v10 = *rumbleName++;
    --v6;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 29, ASSERT_TYPE_ASSERT, "(!I_strcmp( rumble->name, rumbleName ))", (const char *)&queryFormat, "!I_strcmp( rumble->name, rumbleName )") )
        __debugbreak();
      return;
    }
  }
  while ( v8 );
}

/*
==============
Rumble_GetIndex
==============
*/
__int64 Rumble_GetIndex(const RumbleInfo *info)
{
  __int64 result; 
  const RumbleInfo **i; 

  result = 0i64;
  for ( i = (const RumbleInfo **)s_rumbles; *i != info; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x80 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
Rumble_GetInfo
==============
*/
RumbleInfo *Rumble_GetInfo(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x80 )
  {
    v4 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_rumbles ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_rumbles )\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return s_rumbles[v1];
}

/*
==============
Rumble_GetRumbleByName
==============
*/
RumbleInfo *Rumble_GetRumbleByName(const char *rumbleName)
{
  int v2; 
  RumbleInfo **i; 
  RumbleInfo *v4; 
  const char *name; 
  int v6; 
  int v7; 

  if ( !rumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 94, ASSERT_TYPE_ASSERT, "(rumbleName)", (const char *)&queryFormat, "rumbleName") )
    __debugbreak();
  v2 = 0;
  for ( i = s_rumbles; ; ++i )
  {
    v4 = *i;
    if ( *i )
    {
      name = v4->name;
      do
      {
        v6 = (unsigned __int8)name[rumbleName - v4->name];
        v7 = *(unsigned __int8 *)name - v6;
        if ( v7 )
          break;
        ++name;
      }
      while ( v6 );
      if ( !v7 )
        break;
    }
    if ( (unsigned int)++v2 >= 0x80 )
      return 0i64;
  }
  return *i;
}

/*
==============
Rumble_Init
==============
*/
void Rumble_Init(bool isFullInit)
{
  if ( isFullInit )
  {
    if ( s_rumblesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 46, ASSERT_TYPE_ASSERT, "(!s_rumblesInitialized)", (const char *)&queryFormat, "!s_rumblesInitialized") )
      __debugbreak();
    s_rumbles[0] = RumbleInfo_Register("defaultrumble");
    NetConstStrings_CallForAllRumbleString(Rumble_Load);
    s_rumblesInitialized = 1;
  }
  else
  {
    if ( !s_rumblesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 58, ASSERT_TYPE_ASSERT, "(s_rumblesInitialized)", (const char *)&queryFormat, "s_rumblesInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllRumbleString(Rumble_Check_ConfigStringCallback);
  }
}

/*
==============
Rumble_IsInitialized
==============
*/
_BOOL8 Rumble_IsInitialized()
{
  return s_rumblesInitialized;
}

/*
==============
Rumble_Load
==============
*/
void Rumble_Load(const unsigned int rumbleIndex, const char *rumbleName)
{
  __int64 v2; 
  RumbleInfo *v4; 

  v2 = rumbleIndex;
  if ( rumbleIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 17, ASSERT_TYPE_ASSERT, "(unsigned)( rumbleIndex ) < (unsigned)( ( sizeof( *array_counter( s_rumbles ) ) + 0 ) )", "rumbleIndex doesn't index ARRAY_COUNT( s_rumbles )\n\t%i not in [0, %i)", rumbleIndex, 128) )
    __debugbreak();
  if ( !rumbleName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble.cpp", 18, ASSERT_TYPE_ASSERT, "(rumbleName)", (const char *)&queryFormat, "rumbleName") )
    __debugbreak();
  if ( *rumbleName )
    v4 = RumbleInfo_Register(rumbleName);
  else
    v4 = NULL;
  s_rumbles[v2] = v4;
}

/*
==============
Rumble_Shutdown
==============
*/
void Rumble_Shutdown(void)
{
  s_rumblesInitialized = 0;
  memset_0(s_rumbles, 0, sizeof(s_rumbles));
}

