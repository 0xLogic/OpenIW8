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
  const char *v7; 
  __int64 v8; 
  char v9; 
  int v10; 
  bool v11; 
  int v12; 
  __int64 v16; 
  unsigned int v17; 
  const KeyValuePairs *v18; 
  __int64 v19; 
  const char *name; 
  unsigned __int64 hashPacked; 
  char v22; 
  char *v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  char v30; 
  KeyValuePair *keyValuePairs; 
  bool result; 
  XHash xhash; 
  const KeyValuePairs *v34; 

  _R14 = namespaceKey;
  if ( (namespaceKey->hashPacked & 0x7FFFFFFFFFFFFFFFi64) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rsp+58h+xhash.name], xmm0
    }
  }
  else
  {
    v7 = "GLOBAL";
    xhash.name = NULL;
    v8 = 0xCBF29CE484222325ui64;
    xhash.hashPacked = 0i64;
    v9 = 71;
    do
    {
      v10 = v9;
      ++v7;
      v11 = (unsigned __int8)(v9 - 65) <= 0x19u;
      v9 = *v7;
      v12 = v10 + 32;
      if ( !v11 )
        v12 = v10;
      v8 = 0x100000001B3i64 * (v12 ^ (unsigned __int64)v8);
    }
    while ( v9 );
    xhash.hashPacked = v8 & 0x7FFFFFFFFFFFFFFFi64;
    DB_SetHashDebugName(&xhash, "GLOBAL", 1);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+58h+xhash.name]
      vmovdqa xmmword ptr [rsp+58h+xhash.name], xmm0
    }
  }
  _RAX = &xhash;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [r14], xmm0
  }
  v16 = 0i64;
  v17 = KeyValuePairs_HashKey(key);
  while ( 1 )
  {
    v18 = s_keyValuePairs[v16];
    v34 = v18;
    if ( v18 )
    {
      v19 = _R14->hashPacked & 0x7FFFFFFFFFFFFFFFi64;
      if ( !v19 )
        goto LABEL_34;
      name = v18->name;
      hashPacked = 0i64;
      xhash.name = NULL;
      xhash.hashPacked = 0i64;
      if ( name )
      {
        v22 = *name;
        v23 = (char *)name;
        if ( *name )
        {
          v24 = 0xCBF29CE484222325ui64;
          do
          {
            v25 = v22;
            ++v23;
            v11 = (unsigned __int8)(v22 - 65) <= 0x19u;
            v22 = *v23;
            v26 = v25 + 32;
            if ( !v11 )
              v26 = v25;
            v24 = 0x100000001B3i64 * (v26 ^ (unsigned __int64)v24);
          }
          while ( v22 );
          v27 = v24 & 0x7FFFFFFFFFFFFFFFi64;
        }
        else
        {
          v27 = 0i64;
        }
        xhash.hashPacked = v27;
        DB_SetHashDebugName(&xhash, name, 1);
        v18 = v34;
        hashPacked = xhash.hashPacked;
      }
      if ( v19 == (hashPacked & 0x7FFFFFFFFFFFFFFFi64) )
      {
LABEL_34:
        v28 = 0;
        v29 = 0i64;
        if ( v18->numVariables > 0 )
          break;
      }
    }
LABEL_29:
    if ( (unsigned __int64)++v16 >= 129 )
    {
      *outValue = NULL;
      return 0;
    }
  }
  v30 = 0;
  keyValuePairs = v18->keyValuePairs;
  while ( keyValuePairs->keyHash != v17 )
  {
LABEL_28:
    ++v28;
    ++v29;
    ++keyValuePairs;
    if ( v29 >= v18->numVariables )
      goto LABEL_29;
  }
  if ( !v30 && *outValue )
  {
    if ( keyValuePairs->value == *outValue )
      v30 = 1;
    goto LABEL_28;
  }
  result = 1;
  *outValue = v18->keyValuePairs[v28].value;
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

