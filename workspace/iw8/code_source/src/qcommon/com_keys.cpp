/*
==============
Com_Keys_GetCommandForBinding
==============
*/

const char *__fastcall Com_Keys_GetCommandForBinding(const int keyBinding)
{
  return ?Com_Keys_GetCommandForBinding@@YAPEBDH@Z(keyBinding);
}

/*
==============
Com_Keys_KeynumToString
==============
*/

const char *__fastcall Com_Keys_KeynumToString(int keynum)
{
  return ?Com_Keys_KeynumToString@@YAPEBDH@Z(keynum);
}

/*
==============
Com_Keys_InitLocalizedKeyNames
==============
*/

void Com_Keys_InitLocalizedKeyNames(void)
{
  ?Com_Keys_InitLocalizedKeyNames@@YAXXZ();
}

/*
==============
Com_Keys_StringToKeynum
==============
*/

int __fastcall Com_Keys_StringToKeynum(const char *str)
{
  return ?Com_Keys_StringToKeynum@@YAHPEBD@Z(str);
}

/*
==============
Com_Keys_GetBindingForCommand
==============
*/

int __fastcall Com_Keys_GetBindingForCommand(const char *cmd)
{
  return ?Com_Keys_GetBindingForCommand@@YAHPEBD@Z(cmd);
}

/*
==============
Com_Keys_KeynumToLocalizedKeyName
==============
*/

const char *__fastcall Com_Keys_KeynumToLocalizedKeyName(int controllerIndex, int keynum)
{
  return ?Com_Keys_KeynumToLocalizedKeyName@@YAPEBDHH@Z(controllerIndex, keynum);
}

/*
==============
Com_Keys_GetBindingForCommand
==============
*/
__int64 Com_Keys_GetBindingForCommand(const char *cmd)
{
  const char *const *v2; 
  unsigned int i; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  v2 = BIND_COMMANDS;
  for ( i = 0; i < 0xFF; ++i )
  {
    v4 = *v2;
    v5 = 0x7FFFFFFFi64;
    if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(cmd - v4);
    while ( 1 )
    {
      v7 = (unsigned __int8)v4[(_QWORD)v6];
      v8 = v5;
      v9 = *(unsigned __int8 *)v4++;
      --v5;
      if ( !v8 )
        return i;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return i;
    }
    ++v2;
  }
  return 0i64;
}

/*
==============
Com_Keys_GetCommandForBinding
==============
*/
const char *Com_Keys_GetCommandForBinding(const int keyBinding)
{
  __int64 v1; 
  int v4; 

  v1 = keyBinding;
  if ( (unsigned int)keyBinding >= 0xFF )
  {
    v4 = 255;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_keys.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( keyBinding ) < (unsigned)( BIND_COUNT )", "keyBinding doesn't index BIND_COUNT\n\t%i not in [0, %i)", keyBinding, v4) )
      __debugbreak();
  }
  return BIND_COMMANDS[v1];
}

/*
==============
Com_Keys_InitLocalizedKeyNames
==============
*/
void Com_Keys_InitLocalizedKeyNames(void)
{
  const keyname_t *v0; 
  __int64 keynum; 
  const char *name; 

  v0 = KEYNAME_LOCREFS;
  do
  {
    keynum = v0->keynum;
    name = v0->name;
    ++v0;
    s_keyNameLocRefs[keynum] = name;
  }
  while ( v0 != (const keyname_t *)BIND_COMMANDS );
}

/*
==============
Com_Keys_KeynumToLocalizedKeyName
==============
*/
char *Com_Keys_KeynumToLocalizedKeyName(int controllerIndex, int keynum)
{
  __int64 v2; 
  char *result; 
  unsigned int v5; 
  const keyname_t *v6; 
  int v7; 
  unsigned int v8; 
  char v9; 
  char v10; 

  v2 = keynum;
  if ( (unsigned int)keynum > 0xDD )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_keys.cpp", 731, ASSERT_TYPE_ASSERT, "(keynum >= 0 && keynum < K_LAST_KEY)", (const char *)&queryFormat, "keynum >= 0 && keynum < K_LAST_KEY") )
      __debugbreak();
    if ( (unsigned int)v2 > 0xDD )
      return (char *)&queryFormat.fmt + 3;
  }
  result = (char *)IN_GetLocalizedKeyName(controllerIndex, v2, s_keyNameLocRefs[v2]);
  if ( !result )
  {
    if ( (unsigned int)(v2 - 32) > 0x5E )
    {
      if ( (_DWORD)v2 == -1 )
      {
        return "<KEY NOT FOUND>";
      }
      else
      {
        v6 = KEYNAMES;
        if ( KEYNAMES[0].name )
        {
          while ( (_DWORD)v2 != v6->keynum )
          {
            ++v6;
            if ( !v6->name )
              goto LABEL_13;
          }
          return (char *)v6->name;
        }
        else
        {
LABEL_13:
          if ( (unsigned int)(v2 - 33) > 0x5D || (_DWORD)v2 == 34 || (_DWORD)v2 == 59 )
          {
            *(_WORD *)tinystr = 30768;
            v7 = (int)v2 >> 4;
            v8 = v2 & 0xF;
            tinystr[4] = 0;
            v9 = 87;
            v10 = 87;
            if ( v7 <= 9 )
              v10 = 48;
            tinystr[2] = v7 + v10;
            result = tinystr;
            if ( v8 <= 9 )
              v9 = 48;
            tinystr[3] = v8 + v9;
          }
          else
          {
            tinystr[0] = toupper(v2);
            result = tinystr;
            tinystr[1] = 0;
          }
        }
      }
    }
    else
    {
      v5 = toupper(v2);
      return j_va("%c", v5);
    }
  }
  return result;
}

/*
==============
Com_Keys_KeynumToString
==============
*/
char *Com_Keys_KeynumToString(int keynum)
{
  char v1; 
  char *result; 
  const keyname_t *v3; 
  int v4; 
  unsigned int v5; 
  char v6; 
  char v7; 

  v1 = keynum;
  if ( keynum == -1 )
    return "<KEY NOT FOUND>";
  if ( (unsigned int)keynum <= 0xDD )
  {
    v3 = KEYNAMES;
    if ( KEYNAMES[0].name )
    {
      while ( keynum != v3->keynum )
      {
        ++v3;
        if ( !v3->name )
          goto LABEL_10;
      }
      return (char *)v3->name;
    }
    else
    {
LABEL_10:
      if ( (unsigned int)(keynum - 33) > 0x5D || keynum == 34 || keynum == 59 )
      {
        *(_WORD *)tinystr = 30768;
        v4 = keynum >> 4;
        v5 = v1 & 0xF;
        tinystr[4] = 0;
        v6 = 87;
        v7 = 87;
        if ( v4 <= 9 )
          v7 = 48;
        tinystr[2] = v4 + v7;
        result = tinystr;
        if ( v5 <= 9 )
          v6 = 48;
        tinystr[3] = v5 + v6;
      }
      else
      {
        tinystr[0] = toupper(keynum);
        result = tinystr;
        tinystr[1] = 0;
      }
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_keys.cpp", 694, ASSERT_TYPE_ASSERT, "(keynum >= 0 && keynum < K_LAST_KEY)", (const char *)&queryFormat, "keynum >= 0 && keynum < K_LAST_KEY") )
      __debugbreak();
    return "<OUT OF RANGE>";
  }
  return result;
}

/*
==============
Com_Keys_StringToKeynum
==============
*/
int Com_Keys_StringToKeynum(const char *str)
{
  char v2; 
  char v3; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  const char *name; 
  const keyname_t *v10; 

  if ( !str )
    return -1;
  v2 = *str;
  if ( !*str )
    return -1;
  v3 = str[1];
  if ( !v3 )
    return tolower(v2);
  if ( v2 == 48 && v3 == 120 )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( str[v5] );
    if ( (_DWORD)v5 == 4 )
    {
      v6 = str[2];
      if ( (unsigned int)(v6 - 48) > 9 )
      {
        if ( (unsigned int)(v6 - 97) > 5 )
          v7 = 0;
        else
          v7 = 16 * (v6 - 87);
      }
      else
      {
        v7 = 16 * (v6 - 48);
      }
      v8 = str[3];
      if ( (unsigned int)(v8 - 48) <= 9 )
        return v7 + v8 - 48;
      if ( (unsigned int)(v8 - 97) > 5 )
        return v7;
      return v7 + v8 - 87;
    }
  }
  name = KEYNAMES[0].name;
  v10 = KEYNAMES;
  if ( !KEYNAMES[0].name )
    return -1;
  while ( I_stricmp(str, name) )
  {
    name = v10[1].name;
    ++v10;
    if ( !name )
      return -1;
  }
  return v10->keynum;
}

