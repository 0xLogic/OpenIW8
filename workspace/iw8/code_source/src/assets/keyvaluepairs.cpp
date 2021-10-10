/*
==============
KeyValuePairs_GetValue
==============
*/

bool __fastcall KeyValuePairs_GetValue(const char *key, XHash *namespaceKey, const char **outValue)
{
  return ?KeyValuePairs_GetValue@@YA_NPEBDUXHash@@PEAPEBD@Z(key, namespaceKey, outValue);
}

/*
==============
KeyValuePairs_Remove
==============
*/

void __fastcall KeyValuePairs_Remove(const KeyValuePairs *kvp)
{
  ?KeyValuePairs_Remove@@YAXPEBUKeyValuePairs@@@Z(kvp);
}

/*
==============
KeyValuePairs_Add
==============
*/

void __fastcall KeyValuePairs_Add(const KeyValuePairs *kvp)
{
  ?KeyValuePairs_Add@@YAXPEBUKeyValuePairs@@@Z(kvp);
}

/*
==============
KeyValuePairs_GetNextValue
==============
*/

bool __fastcall KeyValuePairs_GetNextValue(const char *key, XHash *namespaceKey, const char **outValue)
{
  return ?KeyValuePairs_GetNextValue@@YA_NPEBDUXHash@@PEAPEBD@Z(key, namespaceKey, outValue);
}

/*
==============
KeyValuePairs_Add
==============
*/
void KeyValuePairs_Add(const KeyValuePairs *kvp)
{
  unsigned __int64 i; 

  for ( i = 0i64; i < 0x81; ++i )
  {
    if ( !s_keyValuePairs[i] )
    {
      s_keyValuePairs[i] = kvp;
      return;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\assets\\keyvaluepairs.cpp", 106, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Exceeded %zu KVP files", 0x81ui64) )
    __debugbreak();
}

/*
==============
KeyValuePairs_GetNextValue
==============
*/
bool KeyValuePairs_GetNextValue(const char *key, XHash *namespaceKey, const char **outValue)
{
  const char *v6; 
  __int64 v7; 
  char v8; 
  int v9; 
  bool v10; 
  int v11; 
  __int64 v12; 
  unsigned int v13; 
  const KeyValuePairs *v14; 
  unsigned __int64 v15; 
  const char *name; 
  unsigned __int64 hashPacked; 
  char v18; 
  char *v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  char v26; 
  KeyValuePair *keyValuePairs; 
  bool result; 
  XHash xhash; 
  const KeyValuePairs *v30; 

  if ( (namespaceKey->hashPacked & 0x7FFFFFFFFFFFFFFFi64) != 0 )
  {
    xhash = *namespaceKey;
  }
  else
  {
    v6 = "GLOBAL";
    xhash.name = NULL;
    v7 = 0xCBF29CE484222325ui64;
    xhash.hashPacked = 0i64;
    v8 = 71;
    do
    {
      v9 = v8;
      ++v6;
      v10 = (unsigned __int8)(v8 - 65) <= 0x19u;
      v8 = *v6;
      v11 = v9 + 32;
      if ( !v10 )
        v11 = v9;
      v7 = 0x100000001B3i64 * (v11 ^ (unsigned __int64)v7);
    }
    while ( v8 );
    xhash.hashPacked = v7 & 0x7FFFFFFFFFFFFFFFi64;
    DB_SetHashDebugName(&xhash, "GLOBAL", 1);
  }
  *namespaceKey = xhash;
  v12 = 0i64;
  v13 = KeyValuePairs_HashKey(key);
  while ( 1 )
  {
    v14 = s_keyValuePairs[v12];
    v30 = v14;
    if ( v14 )
    {
      v15 = namespaceKey->hashPacked & 0x7FFFFFFFFFFFFFFFi64;
      if ( !v15 )
        goto LABEL_34;
      name = v14->name;
      hashPacked = 0i64;
      xhash.name = NULL;
      xhash.hashPacked = 0i64;
      if ( name )
      {
        v18 = *name;
        v19 = (char *)name;
        if ( *name )
        {
          v20 = 0xCBF29CE484222325ui64;
          do
          {
            v21 = v18;
            ++v19;
            v10 = (unsigned __int8)(v18 - 65) <= 0x19u;
            v18 = *v19;
            v22 = v21 + 32;
            if ( !v10 )
              v22 = v21;
            v20 = 0x100000001B3i64 * (v22 ^ (unsigned __int64)v20);
          }
          while ( v18 );
          v23 = v20 & 0x7FFFFFFFFFFFFFFFi64;
        }
        else
        {
          v23 = 0i64;
        }
        xhash.hashPacked = v23;
        DB_SetHashDebugName(&xhash, name, 1);
        v14 = v30;
        hashPacked = xhash.hashPacked;
      }
      if ( v15 == (hashPacked & 0x7FFFFFFFFFFFFFFFi64) )
      {
LABEL_34:
        v24 = 0;
        v25 = 0i64;
        if ( v14->numVariables > 0 )
          break;
      }
    }
LABEL_29:
    if ( (unsigned __int64)++v12 >= 129 )
    {
      *outValue = NULL;
      return 0;
    }
  }
  v26 = 0;
  keyValuePairs = v14->keyValuePairs;
  while ( keyValuePairs->keyHash != v13 )
  {
LABEL_28:
    ++v24;
    ++v25;
    ++keyValuePairs;
    if ( v25 >= v14->numVariables )
      goto LABEL_29;
  }
  if ( !v26 && *outValue )
  {
    if ( keyValuePairs->value == *outValue )
      v26 = 1;
    goto LABEL_28;
  }
  result = 1;
  *outValue = v14->keyValuePairs[v24].value;
  return result;
}

/*
==============
KeyValuePairs_GetValue
==============
*/
bool KeyValuePairs_GetValue(const char *key, XHash *namespaceKey, const char **outValue)
{
  unsigned int v5; 
  int v6; 
  const KeyValuePairs **i; 
  const KeyValuePairs *v8; 
  unsigned __int64 v9; 
  const char *name; 
  unsigned __int64 hashPacked; 
  char v12; 
  char *v13; 
  __int64 v14; 
  int v15; 
  bool v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  KeyValuePair *keyValuePairs; 
  bool result; 
  XHash xhash; 
  const KeyValuePairs *v24; 

  *outValue = NULL;
  v5 = KeyValuePairs_HashKey(key);
  v6 = 0;
  for ( i = s_keyValuePairs; ; ++i )
  {
    v8 = *i;
    v24 = *i;
    if ( *i )
    {
      v9 = namespaceKey->hashPacked & 0x7FFFFFFFFFFFFFFFi64;
      if ( !v9 )
        goto LABEL_23;
      name = v8->name;
      hashPacked = 0i64;
      xhash.name = NULL;
      xhash.hashPacked = 0i64;
      if ( name )
      {
        v12 = *name;
        v13 = (char *)name;
        if ( *name )
        {
          v14 = 0xCBF29CE484222325ui64;
          do
          {
            v15 = v12;
            ++v13;
            v16 = (unsigned __int8)(v12 - 65) <= 0x19u;
            v12 = *v13;
            v17 = v15 + 32;
            if ( !v16 )
              v17 = v15;
            v14 = 0x100000001B3i64 * (v17 ^ (unsigned __int64)v14);
          }
          while ( v12 );
          v18 = v14 & 0x7FFFFFFFFFFFFFFFi64;
        }
        else
        {
          v18 = 0i64;
        }
        xhash.hashPacked = v18;
        DB_SetHashDebugName(&xhash, name, 1);
        v8 = v24;
        hashPacked = xhash.hashPacked;
      }
      if ( v9 == (hashPacked & 0x7FFFFFFFFFFFFFFFi64) )
      {
LABEL_23:
        v19 = 0;
        v20 = 0i64;
        if ( v8->numVariables > 0 )
          break;
      }
    }
LABEL_18:
    if ( (unsigned int)++v6 >= 0x81 )
      return 0;
  }
  keyValuePairs = v8->keyValuePairs;
  while ( keyValuePairs->keyHash != v5 )
  {
    ++v19;
    ++v20;
    ++keyValuePairs;
    if ( v20 >= v8->numVariables )
      goto LABEL_18;
  }
  result = 1;
  *outValue = v8->keyValuePairs[v19].value;
  return result;
}

/*
==============
KeyValuePairs_HashKey
==============
*/
__int64 KeyValuePairs_HashKey(const char *key)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  const char *v4; 
  int v5; 

  v1 = -1i64;
  do
    ++v1;
  while ( key[v1] );
  v2 = 0;
  v3 = 64i64;
  v4 = key;
  if ( v1 < 0x40 )
    v3 = v1;
  if ( key > &key[v3] )
    v3 = 0i64;
  if ( v3 )
  {
    do
    {
      v5 = *(unsigned __int8 *)v4++;
      v2 = v5 ^ (16777619 * v2);
    }
    while ( v4 - key != v3 );
  }
  return v2;
}

/*
==============
KeyValuePairs_Remove
==============
*/
void KeyValuePairs_Remove(const KeyValuePairs *kvp)
{
  unsigned __int64 i; 

  for ( i = 0i64; i < 0x81; ++i )
  {
    if ( s_keyValuePairs[i] == kvp )
    {
      s_keyValuePairs[i] = NULL;
      return;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\assets\\keyvaluepairs.cpp", 119, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "KeyValuePair %s already removed, or was never added", kvp->name) )
    __debugbreak();
}

