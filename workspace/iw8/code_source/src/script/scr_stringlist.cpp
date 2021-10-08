/*
==============
SL_GetStringLen
==============
*/

unsigned __int64 __fastcall SL_GetStringLen(scr_string_t stringValue)
{
  return ?SL_GetStringLen@@YA_KW4scr_string_t@@@Z(stringValue);
}

/*
==============
Scr_SetStringFromCharString
==============
*/

void __fastcall Scr_SetStringFromCharString(scr_string_t *to, const char *from)
{
  ?Scr_SetStringFromCharString@@YAXPEAW4scr_string_t@@PEBD@Z(to, from);
}

/*
==============
SL_Shutdown
==============
*/

void SL_Shutdown(void)
{
  ?SL_Shutdown@@YAXXZ();
}

/*
==============
SL_DebugConvertToString
==============
*/

const char *__fastcall SL_DebugConvertToString(scr_string_t stringValue)
{
  return ?SL_DebugConvertToString@@YAPEBDW4scr_string_t@@@Z(stringValue);
}

/*
==============
SL_GetHashCode
==============
*/

unsigned int __fastcall SL_GetHashCode(unsigned __int64 len, unsigned int rawHash)
{
  return ?SL_GetHashCode@@YAI_KI@Z(len, rawHash);
}

/*
==============
Scr_AllocGameString
==============
*/

scr_string_t __fastcall Scr_AllocGameString(const char *s, int sys)
{
  return ?Scr_AllocGameString@@YA?AW4scr_string_t@@PEBDH@Z(s, sys);
}

/*
==============
SL_GetStringForInt
==============
*/

scr_string_t __fastcall SL_GetStringForInt(int i)
{
  return ?SL_GetStringForInt@@YA?AW4scr_string_t@@H@Z(i);
}

/*
==============
SL_IsLowercaseString
==============
*/

int __fastcall SL_IsLowercaseString(scr_string_t stringValue)
{
  return ?SL_IsLowercaseString@@YAHW4scr_string_t@@@Z(stringValue);
}

/*
==============
SL_FindString
==============
*/

scr_string_t __fastcall SL_FindString(const char *str)
{
  return ?SL_FindString@@YA?AW4scr_string_t@@PEBD@Z(str);
}

/*
==============
Scr_AllocGlobalString
==============
*/

scr_string_t __fastcall Scr_AllocGlobalString(const char *s)
{
  return ?Scr_AllocGlobalString@@YA?AW4scr_string_t@@PEBD@Z(s);
}

/*
==============
SL_GetLowercaseString
==============
*/

scr_string_t __fastcall SL_GetLowercaseString(const char *str, unsigned int user)
{
  return ?SL_GetLowercaseString@@YA?AW4scr_string_t@@PEBDI@Z(str, user);
}

/*
==============
SL_AllocString_Free
==============
*/

void __fastcall SL_AllocString_Free(const char *str)
{
  ?SL_AllocString_Free@@YAXPEBD@Z(str);
}

/*
==============
FindShortStringByHash
==============
*/

const char *__fastcall FindShortStringByHash(unsigned int hash)
{
  return ?FindShortStringByHash@@YAPEBDI@Z(hash);
}

/*
==============
SL_RemoveRefToString
==============
*/

void __fastcall SL_RemoveRefToString(scr_string_t stringValue)
{
  ?SL_RemoveRefToString@@YAXW4scr_string_t@@@Z(stringValue);
}

/*
==============
SL_ConvertToString
==============
*/

const char *__fastcall SL_ConvertToString(scr_string_t stringValue)
{
  return ?SL_ConvertToString@@YAPEBDW4scr_string_t@@@Z(stringValue);
}

/*
==============
SL_AllocString_Copy
==============
*/

const char *__fastcall SL_AllocString_Copy(const char *in)
{
  return ?SL_AllocString_Copy@@YAPEBDPEBD@Z(in);
}

/*
==============
SL_GetLowercaseString_
==============
*/

scr_string_t __fastcall SL_GetLowercaseString_(const char *str, unsigned int user, int type)
{
  return ?SL_GetLowercaseString_@@YA?AW4scr_string_t@@PEBDIH@Z(str, user, type);
}

/*
==============
Scr_CreateCanonicalFilename
==============
*/

scr_string_t __fastcall Scr_CreateCanonicalFilename(const scrContext_t *scrContext, const char *filename)
{
  return ?Scr_CreateCanonicalFilename@@YA?AW4scr_string_t@@AEBUscrContext_t@@PEBD@Z(scrContext, filename);
}

/*
==============
SL_TransferSystem
==============
*/

void __fastcall SL_TransferSystem(unsigned int from, unsigned int to)
{
  ?SL_TransferSystem@@YAXII@Z(from, to);
}

/*
==============
SL_ShutdownSystem
==============
*/

void __fastcall SL_ShutdownSystem(unsigned int user)
{
  ?SL_ShutdownSystem@@YAXI@Z(user);
}

/*
==============
SL_AddRefToString
==============
*/

void __fastcall SL_AddRefToString(scr_string_t stringValue)
{
  ?SL_AddRefToString@@YAXW4scr_string_t@@@Z(stringValue);
}

/*
==============
Scr_ShutdownGameStrings
==============
*/

void Scr_ShutdownGameStrings(void)
{
  ?Scr_ShutdownGameStrings@@YAXXZ();
}

/*
==============
SL_EndLoadScripts
==============
*/

void __fastcall SL_EndLoadScripts(const scrContext_t *scrContext)
{
  ?SL_EndLoadScripts@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
SL_FindLowercaseString
==============
*/

scr_string_t __fastcall SL_FindLowercaseString(const char *str)
{
  return ?SL_FindLowercaseString@@YA?AW4scr_string_t@@PEBD@Z(str);
}

/*
==============
SL_GetString
==============
*/

scr_string_t __fastcall SL_GetString(const char *str, unsigned int user)
{
  return ?SL_GetString@@YA?AW4scr_string_t@@PEBDI@Z(str, user);
}

/*
==============
SL_AllocString_Replace
==============
*/

void __fastcall SL_AllocString_Replace(const char **str, const char *in)
{
  ?SL_AllocString_Replace@@YAXPEAPEBDPEBD@Z(str, in);
}

/*
==============
SL_ConvertToStringSafe
==============
*/

const char *__fastcall SL_ConvertToStringSafe(scr_string_t stringValue)
{
  return ?SL_ConvertToStringSafe@@YAPEBDW4scr_string_t@@@Z(stringValue);
}

/*
==============
Scr_ShutdownGlobalStrings
==============
*/

void Scr_ShutdownGlobalStrings(void)
{
  ?Scr_ShutdownGlobalStrings@@YAXXZ();
}

/*
==============
Scr_CreateCanonicalFilenameNoExtension
==============
*/

scr_string_t __fastcall Scr_CreateCanonicalFilenameNoExtension(const char *filename)
{
  return ?Scr_CreateCanonicalFilenameNoExtension@@YA?AW4scr_string_t@@PEBD@Z(filename);
}

/*
==============
SL_IsString
==============
*/

int __fastcall SL_IsString(const char *str)
{
  return ?SL_IsString@@YAHPEBD@Z(str);
}

/*
==============
SL_RemoveRefToStringOfSize
==============
*/

void __fastcall SL_RemoveRefToStringOfSize(scr_string_t stringValue, unsigned int len)
{
  ?SL_RemoveRefToStringOfSize@@YAXW4scr_string_t@@I@Z(stringValue, len);
}

/*
==============
Scr_CreateCanonicalFilenameInternal
==============
*/

void __fastcall Scr_CreateCanonicalFilenameInternal(char *newFilename, const char *filename, int count)
{
  ?Scr_CreateCanonicalFilenameInternal@@YAXPEADPEBDH@Z(newFilename, filename, count);
}

/*
==============
SL_GetStringForVector
==============
*/

scr_string_t __fastcall SL_GetStringForVector(const float *v)
{
  return ?SL_GetStringForVector@@YA?AW4scr_string_t@@PEBM@Z(v);
}

/*
==============
SL_CheckExists
==============
*/

void __fastcall SL_CheckExists(scr_string_t stringValue)
{
  ?SL_CheckExists@@YAXW4scr_string_t@@@Z(stringValue);
}

/*
==============
SL_GetOpaqueStringCount
==============
*/

unsigned int __fastcall SL_GetOpaqueStringCount()
{
  return ?SL_GetOpaqueStringCount@@YAIXZ();
}

/*
==============
SL_BeginLoadScripts
==============
*/

void __fastcall SL_BeginLoadScripts(const scrContext_t *scrContext)
{
  ?SL_BeginLoadScripts@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
SL_Init
==============
*/

void SL_Init(void)
{
  ?SL_Init@@YAXXZ();
}

/*
==============
SL_GetLowercaseStringOfSize
==============
*/

scr_string_t __fastcall SL_GetLowercaseStringOfSize(const char *str, unsigned int user, unsigned __int64 len, int type)
{
  return ?SL_GetLowercaseStringOfSize@@YA?AW4scr_string_t@@PEBDI_KH@Z(str, user, len, type);
}

/*
==============
SL_GetStringForFloat
==============
*/

scr_string_t __fastcall SL_GetStringForFloat(float f)
{
  return ?SL_GetStringForFloat@@YA?AW4scr_string_t@@M@Z(f);
}

/*
==============
Scr_SetString
==============
*/

void __fastcall Scr_SetString(scr_string_t *to, scr_string_t from)
{
  ?Scr_SetString@@YAXPEAW4scr_string_t@@W41@@Z(to, from);
}

/*
==============
SL_GetSystemCount
==============
*/

unsigned int __fastcall SL_GetSystemCount(unsigned int user)
{
  return ?SL_GetSystemCount@@YAII@Z(user);
}

/*
==============
SL_ConvertFromString
==============
*/

scr_string_t __fastcall SL_ConvertFromString(const char *str)
{
  return ?SL_ConvertFromString@@YA?AW4scr_string_t@@PEBD@Z(str);
}

/*
==============
SL_RemoveRefToStringFree
==============
*/

void __fastcall SL_RemoveRefToStringFree(scr_string_t stringValue, RefString *refStr)
{
  ?SL_RemoveRefToStringFree@@YAXW4scr_string_t@@PEAURefString@@@Z(stringValue, refStr);
}

/*
==============
FindShortStringByHash
==============
*/
char *FindShortStringByHash(unsigned int hash)
{
  __int64 v2; 
  HashEntry *v3; 
  RefString *RefString_0; 
  unsigned int status_next; 
  char *v6; 
  __int64 v7; 
  HashEntry *v8; 
  HashEntry::<unnamed_type_u> v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  v2 = hash % 0x3FFFF + 1;
  if ( (unsigned int)v2 >= 0x40000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 448, ASSERT_TYPE_ASSERT, "(unsigned)( hashCode ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "hashCode doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", hash % 0x3FFFF + 1, 0x40000) )
    __debugbreak();
  v3 = &scrStringGlob.hashTable[v2];
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  if ( (v3->status_next & 0x180000) != 0x100000 )
    goto LABEL_28;
  RefString_0 = GetRefString_0(v3->u.prev);
  status_next = v3->status_next;
  v6 = (char *)RefString_0;
  if ( RefString_0->rawHash != hash )
  {
    v7 = status_next & 0x7FFFF;
    if ( (unsigned int)v7 >= 0x40000 )
    {
      LODWORD(v15) = 0x40000;
      LODWORD(v14) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 477, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v8 = &scrStringGlob.hashTable[v7];
    if ( v8 != v3 )
    {
      while ( 1 )
      {
        if ( (v8->status_next & 0x180000) != 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 481, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE") )
          __debugbreak();
        v9.prev = (unsigned int)v8->u;
        if ( !v9.prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
          __debugbreak();
        v10 = 16 * v9.prev;
        if ( v10 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
          __debugbreak();
        v6 = &scrMemTreePub.mt_buffer[v10];
        v11 = v8->status_next;
        if ( *((_DWORD *)v6 + 1) == hash )
          break;
        v12 = v11 & 0x7FFFF;
        if ( (unsigned int)v12 >= 0x40000 )
        {
          LODWORD(v15) = 0x40000;
          LODWORD(v14) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v8 = &scrStringGlob.hashTable[v12];
        if ( v8 == v3 )
          goto LABEL_28;
      }
      if ( (v11 & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 486, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
        __debugbreak();
      if ( (v3->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 487, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
        __debugbreak();
      goto LABEL_35;
    }
LABEL_28:
    Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
    return (char *)&queryFormat.fmt + 3;
  }
  if ( (status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 466, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
    __debugbreak();
LABEL_35:
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
  return v6 + 8;
}

/*
==============
FindStringOfSize
==============
*/
__int64 FindStringOfSize(const char *str, unsigned __int64 len)
{
  int v4; 
  unsigned int v5; 
  signed __int64 v6; 
  const char *v7; 
  int v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  HashEntry *v12; 
  RefString *RefString_0; 
  const char *v14; 
  scr_string_t prev; 
  bool v16; 
  __int64 v18; 
  HashEntry *v19; 
  HashEntry::<unnamed_type_u> v20; 
  __int64 v21; 
  char *v22; 
  __int64 v23; 
  __int64 v24; 

  Profile_Begin(468);
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 526, ASSERT_TYPE_ASSERT, "( str )", (const char *)&queryFormat, "str") )
    __debugbreak();
  v4 = truncate_cast<int,unsigned __int64>(len);
  v5 = 0;
  if ( str && *str )
  {
    v6 = v4;
    v7 = str;
    do
    {
      if ( v6 && v7 - str >= v6 )
        break;
      v8 = *v7++;
      v5 = v8 + 31 * v5;
    }
    while ( *v7 );
  }
  if ( len >= 0x100 )
  {
    v10 = ((len >> 2) * (unsigned __int128)0x400010000401ui64) >> 64;
    v9 = (len >> 2) - 0x3FFFF * ((v10 + (((len >> 2) - v10) >> 1)) >> 17);
  }
  else
  {
    LODWORD(v9) = v5 % 0x3FFFF;
  }
  v11 = (unsigned int)(v9 + 1);
  if ( (unsigned int)v11 >= 0x40000 )
  {
    LODWORD(v23) = v9 + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( hashCode ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "hashCode doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v23, 0x40000) )
      __debugbreak();
  }
  v12 = &scrStringGlob.hashTable[v11];
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  if ( (v12->status_next & 0x180000) == 0x100000 )
  {
    RefString_0 = GetRefString_0(v12->u.prev);
    if ( HIBYTE(RefString_0->data) == (unsigned __int8)len )
    {
      v14 = RefString_0->str;
      if ( !memcmp_0(RefString_0->str, str, len) )
      {
        if ( (v12->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 548, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
          __debugbreak();
        prev = v12->u.prev;
        if ( v14 == SL_ConvertToString(prev) )
          goto LABEL_26;
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 551, ASSERT_TYPE_ASSERT, "( refStr->str == SL_ConvertToString( stringValue ) )", (const char *)&queryFormat, "refStr->str == SL_ConvertToString( stringValue )");
LABEL_24:
        if ( v16 )
          __debugbreak();
LABEL_26:
        Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
        Profile_EndInternal(NULL);
        return (unsigned int)prev;
      }
    }
    v18 = v12->status_next & 0x7FFFF;
    if ( (unsigned int)v18 >= 0x40000 )
    {
      LODWORD(v24) = 0x40000;
      LODWORD(v23) = v12->status_next & 0x7FFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 563, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v19 = &scrStringGlob.hashTable[v18];
    if ( v19 != v12 )
    {
      while ( 1 )
      {
        if ( (v19->status_next & 0x180000) != 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 567, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE") )
          __debugbreak();
        v20.prev = (unsigned int)v19->u;
        if ( !v20.prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
          __debugbreak();
        v21 = 16 * v20.prev;
        if ( (unsigned int)v21 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
          __debugbreak();
        v22 = &scrMemTreePub.mt_buffer[v21];
        if ( (unsigned __int8)v22[3] == (unsigned __int8)len && !memcmp_0(v22 + 8, str, len) )
          break;
        LODWORD(v11) = v18;
        v18 = v19->status_next & 0x7FFFF;
        if ( (unsigned int)v18 >= 0x40000 )
        {
          LODWORD(v24) = 0x40000;
          LODWORD(v23) = v19->status_next & 0x7FFFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 596, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v19 = &scrStringGlob.hashTable[v18];
        if ( v19 == v12 )
          goto LABEL_58;
      }
      if ( (unsigned int)v11 >= 0x40000 )
      {
        LODWORD(v24) = 0x40000;
        LODWORD(v23) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 573, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      scrStringGlob.hashTable[(unsigned int)v11].status_next = v19->status_next & 0x7FFFF | scrStringGlob.hashTable[(unsigned int)v11].status_next & 0x180000;
      v19->status_next = v19->status_next & 0x180000 | v12->status_next & 0x7FFFF;
      v12->status_next &= 0x180000u;
      v12->status_next |= v18;
      prev = v19->u.prev;
      v19->u.prev = v12->u.prev;
      v12->u.prev = prev;
      if ( (v19->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 581, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
        __debugbreak();
      if ( (v12->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 582, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
        __debugbreak();
      if ( v22 + 8 == SL_ConvertToString(prev) )
        goto LABEL_26;
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 584, ASSERT_TYPE_ASSERT, "( refStr->str == SL_ConvertToString( stringValue ) )", (const char *)&queryFormat, "refStr->str == SL_ConvertToString( stringValue )");
      goto LABEL_24;
    }
  }
LABEL_58:
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
  Profile_EndInternal(NULL);
  return 0i64;
}

/*
==============
SL_AddRefToString
==============
*/
void SL_AddRefToString(scr_string_t stringValue)
{
  __int64 v1; 
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  RefString *RefString_0; 
  volatile signed __int32 *p_data; 
  volatile int v7; 
  const char *v8; 
  int v9; 
  __int64 v10; 

  v1 = (unsigned int)stringValue;
  if ( stringValue )
  {
    Profile_Begin(468);
    if ( scrStringDebugGlob )
    {
      v2 = v1;
      if ( !scrStringDebugGlob->refCount[v1] )
      {
        v3 = SL_DebugConvertToString((scr_string_t)v1);
        v9 = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1116, ASSERT_TYPE_ASSERT, "(scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)])", "%s\n\t%d '%s'", "scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)]", v9, v3) )
          __debugbreak();
      }
      if ( scrStringDebugGlob->refCount[v2] >= 0x10000 )
      {
        v4 = SL_DebugConvertToString((scr_string_t)v1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1117, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] < 65536 ) )", "%s\n\t( SL_DebugConvertToString( stringValue ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] < 65536 )", v4) )
          __debugbreak();
      }
      Sys_InterlockedIncrement(&scrStringDebugGlob->totalRefCount);
      Sys_InterlockedIncrement(&scrStringDebugGlob->refCount[v2]);
    }
    RefString_0 = GetRefString_0(v1);
    p_data = &RefString_0->data;
    if ( ((unsigned __int8)RefString_0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", RefString_0) )
      __debugbreak();
    _InterlockedIncrement(p_data);
    if ( !*(_WORD *)p_data )
    {
      if ( scrStringDebugGlob )
        v7 = scrStringDebugGlob->refCount[v1];
      else
        v7 = 0;
      v8 = SL_DebugConvertToString((scr_string_t)v1);
      LODWORD(v10) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1127, ASSERT_TYPE_ASSERT, "(refStr->refCount)", "%s\n\tstring: '%s', refCount: %d", "refStr->refCount", v8, v10) )
        __debugbreak();
    }
    Profile_EndInternal(NULL);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1103, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
  {
    __debugbreak();
  }
}

/*
==============
SL_AddUserInternal
==============
*/
void SL_AddUserInternal(RefString *refStr, unsigned int user)
{
  __int64 v2; 
  unsigned int v4; 
  signed __int64 v5; 
  unsigned __int64 v6; 
  const char *v7; 
  const char *v8; 
  volatile int *p_totalRefCount; 
  volatile signed __int32 *v10; 

  v2 = (unsigned __int8)refStr & 3;
  if ( !user )
    goto LABEL_25;
  v4 = user << 16;
  if ( ((unsigned __int8)refStr & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", refStr) )
    __debugbreak();
  _m_prefetchw(refStr);
  if ( (_InterlockedOr(&refStr->data, v4) & v4) == 0 )
  {
LABEL_25:
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", refStr) )
      __debugbreak();
    _InterlockedIncrement(&refStr->data);
    v5 = ((char *)refStr - scrMemTreePub.mt_buffer) / 16;
    if ( scrStringDebugGlob )
    {
      v6 = (unsigned int)v5;
      if ( scrStringDebugGlob->refCount[v6] >= 0x10000 )
      {
        v7 = SL_DebugConvertToString((scr_string_t)v5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 680, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(str)] < 65536 ) )", "%s\n\t( SL_DebugConvertToString( str ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(str)] < 65536 )", v7) )
          __debugbreak();
      }
      if ( scrStringDebugGlob->refCount[v6] < 0 )
      {
        v8 = SL_DebugConvertToString((scr_string_t)v5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 681, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(str)] >= 0 ) )", "%s\n\t( SL_DebugConvertToString( str ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(str)] >= 0 )", v8) )
          __debugbreak();
      }
      p_totalRefCount = &scrStringDebugGlob->totalRefCount;
      if ( ((unsigned __int8)scrStringDebugGlob & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scrStringDebugGlob->totalRefCount) )
        __debugbreak();
      _InterlockedIncrement(p_totalRefCount);
      v10 = &scrStringDebugGlob->refCount[v6];
      if ( (((_BYTE)(v6 * 4) + (_BYTE)scrStringDebugGlob) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)scrStringDebugGlob + v6 * 4) )
        __debugbreak();
      _InterlockedIncrement(v10);
    }
  }
}

/*
==============
SL_AllocString_Copy
==============
*/
const char *SL_AllocString_Copy(const char *in)
{
  __int64 v2; 
  scr_string_t StringOfSize; 

  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1561, ASSERT_TYPE_ASSERT, "(in)", (const char *)&queryFormat, "in") )
    __debugbreak();
  v2 = -1i64;
  while ( in[++v2] != 0 )
    ;
  StringOfSize = j_SL_GetStringOfSize(in, 0, (unsigned int)(v2 + 1), 22);
  return SL_ConvertToString(StringOfSize);
}

/*
==============
SL_AllocString_Free
==============
*/
void SL_AllocString_Free(const char *str)
{
  __int64 v2; 
  scr_string_t StringOfSize; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1584, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  v2 = -1i64;
  do
    ++v2;
  while ( str[v2] );
  StringOfSize = (unsigned int)FindStringOfSize(str, v2 + 1);
  if ( !StringOfSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1587, ASSERT_TYPE_ASSERT, "( out != ( static_cast< scr_string_t >( 0 ) ) )", "Could not find string '%s'", str) )
    __debugbreak();
  SL_RemoveRefToString(StringOfSize);
}

/*
==============
SL_AllocString_Replace
==============
*/
void SL_AllocString_Replace(const char **str, const char *in)
{
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  scr_string_t StringOfSize; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  scr_string_t v11; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1571, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( !in )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1572, ASSERT_TYPE_ASSERT, "(in)", (const char *)&queryFormat, "in") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1561, ASSERT_TYPE_ASSERT, "(in)", (const char *)&queryFormat, "in") )
      __debugbreak();
  }
  v4 = -1i64;
  v5 = -1i64;
  do
    v6 = in[++v5] == 0;
  while ( !v6 );
  StringOfSize = j_SL_GetStringOfSize(in, 0, (unsigned int)(v5 + 1), 22);
  v8 = SL_ConvertToString(StringOfSize);
  v9 = *str;
  v10 = v8;
  if ( *str )
  {
    do
      v6 = v9[++v4] == 0;
    while ( !v6 );
    v11 = (unsigned int)FindStringOfSize(*str, v4 + 1);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1587, ASSERT_TYPE_ASSERT, "( out != ( static_cast< scr_string_t >( 0 ) ) )", "Could not find string '%s'", v9) )
      __debugbreak();
    SL_RemoveRefToString(v11);
  }
  *str = v10;
}

/*
==============
SL_BeginLoadScripts
==============
*/
void SL_BeginLoadScripts(const scrContext_t *scrContext)
{
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 327, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", "Limit must be initialized before scripts can start loading") )
    __debugbreak();
  if ( g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 333, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData == nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData == nullptr") )
    __debugbreak();
  g_scrCanonicalStringPub.canonicalStringData = (CanonicalStringData *)Mem_HunkUser_AllocInternal(scrContext->m_varPub.canonicalStringHunkUser, 0x80000ui64, 4ui64, "SL_BeginLoadScripts");
  memset_0(g_scrCanonicalStringPub.canonicalStringData, 0, sizeof(CanonicalStringData));
  g_scrCanonicalStringPub.canonicalStringInstance = scrContext->m_Instance;
  *(_QWORD *)&g_scrCanonicalStringPub.canonicalStringBufferSize = 0i64;
}

/*
==============
SL_CheckExists
==============
*/
void SL_CheckExists(scr_string_t stringValue)
{
  const char *str; 
  RefString *RefString_0; 
  __int64 v4; 
  unsigned int v5; 
  const char *v6; 

  if ( scrStringDebugGlob && !scrStringDebugGlob->refCount[stringValue] )
  {
    if ( !stringValue )
    {
      str = "<NULL>";
      goto LABEL_17;
    }
    RefString_0 = GetRefString_0(stringValue);
    v4 = (unsigned __int8)(HIBYTE(RefString_0->data) - 1);
    if ( (_DWORD)v4 != HIBYTE(RefString_0->data) - 1 )
    {
      str = "<LONGSTRING>";
      goto LABEL_17;
    }
    str = RefString_0->str;
    if ( !RefString_0->str[v4] )
    {
      if ( HIBYTE(RefString_0->data) == 1 )
      {
        str = "<EMPTYSTRING>";
        goto LABEL_17;
      }
      v5 = 0;
      v6 = str;
      while ( *v6 >= 0x20u && *v6 <= 0x7Eu )
      {
        ++v5;
        ++v6;
        if ( v5 >= (unsigned int)v4 )
          goto LABEL_17;
      }
    }
    str = "<BINARY>";
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1091, ASSERT_TYPE_ASSERT, "(!scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)])", "%s\n\t%d '%s'", "!scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)]", stringValue, str) )
      __debugbreak();
  }
}

/*
==============
SL_ConvertFromString
==============
*/
signed __int64 SL_ConvertFromString(const char *str)
{
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 298, ASSERT_TYPE_ASSERT, "( str )", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( (unsigned __int64)(str - scrMemTreePub.mt_buffer) >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 210, ASSERT_TYPE_ASSERT, "( SL_IsString( str ) )", (const char *)&queryFormat, "SL_IsString( str )") )
    __debugbreak();
  return (str - scrMemTreePub.mt_buffer - 8) / 16;
}

/*
==============
SL_ConvertToString
==============
*/
char *SL_ConvertToString(scr_string_t stringValue)
{
  if ( !stringValue )
    return 0i64;
  if ( !scrStringDebugGlob && !*(_DWORD *)(4i64 * (unsigned int)stringValue) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 219, ASSERT_TYPE_ASSERT, "( ( stringValue == ( static_cast< scr_string_t >( 0 ) ) || scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( static_cast<unsigned int>(stringValue) ) = %i", "( stringValue == ( static_cast< scr_string_t >( 0 ) ) || scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", stringValue) )
    __debugbreak();
  return GetRefString_0(stringValue)->str;
}

/*
==============
SL_ConvertToStringSafe
==============
*/
char *SL_ConvertToStringSafe(scr_string_t stringValue)
{
  if ( !stringValue )
    return "(NULL)";
  if ( scrStringDebugGlob && !scrStringDebugGlob->refCount[stringValue] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 227, ASSERT_TYPE_ASSERT, "( ( stringValue == ( static_cast< scr_string_t >( 0 ) ) || !scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( static_cast<unsigned int>(stringValue) ) = %i", "( stringValue == ( static_cast< scr_string_t >( 0 ) ) || !scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", stringValue) )
    __debugbreak();
  return GetRefString_0(stringValue)->str;
}

/*
==============
SL_DebugConvertToString
==============
*/
const char *SL_DebugConvertToString(scr_string_t stringValue)
{
  RefString *RefString_0; 
  __int64 v3; 
  int v4; 
  char *i; 

  if ( !stringValue )
    return "<NULL>";
  RefString_0 = GetRefString_0(stringValue);
  v3 = (unsigned __int8)(HIBYTE(RefString_0->data) - 1);
  if ( (_DWORD)v3 != HIBYTE(RefString_0->data) - 1 )
    return "<LONGSTRING>";
  if ( !RefString_0->str[v3] )
  {
    if ( HIBYTE(RefString_0->data) == 1 )
      return "<EMPTYSTRING>";
    v4 = 0;
    if ( HIBYTE(RefString_0->data) == 1 )
      return RefString_0->str;
    for ( i = RefString_0->str; (unsigned __int8)*i >= 0x20u && (unsigned __int8)*i <= 0x7Eu; ++i )
    {
      if ( ++v4 >= (unsigned int)v3 )
        return RefString_0->str;
    }
  }
  return "<BINARY>";
}

/*
==============
SL_EndLoadScripts
==============
*/
void SL_EndLoadScripts(const scrContext_t *scrContext)
{
  unsigned int CanonicalString; 

  CanonicalString = SL_GetCanonicalString("origin");
  g_scrCanonicalStringPub.canonicalStringForOrigin = truncate_cast<unsigned short,unsigned int>(CanonicalString);
  if ( !g_scrCanonicalStringPub.canonicalStringForOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 358, ASSERT_TYPE_ASSERT, "(g_scrCanonicalStringPub.canonicalStringForOrigin)", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringForOrigin") )
    __debugbreak();
}

/*
==============
SL_FindLowercaseString
==============
*/
__int64 SL_FindLowercaseString(const char *str)
{
  __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 v5; 
  signed __int64 v6; 
  char *v7; 
  char v8; 
  char stra[8192]; 

  Profile_Begin(468);
  v2 = -1i64;
  do
    ++v2;
  while ( str[v2] );
  v3 = v2 + 1;
  if ( v3 <= 0x2000 )
  {
    v5 = 0i64;
    if ( v3 )
    {
      v6 = str - stra;
      do
      {
        v7 = &stra[v5];
        v8 = stra[v5 + v6] | 0x20;
        if ( (unsigned int)(stra[v5 + v6] - 65) >= 0x1A )
          v8 = stra[v5 + v6];
        ++v5;
        *v7 = v8;
      }
      while ( v5 < v3 );
    }
    Profile_EndInternal(NULL);
    return FindStringOfSize(stra, v3);
  }
  else
  {
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

/*
==============
SL_FindString
==============
*/
__int64 SL_FindString(const char *str)
{
  __int64 v1; 

  v1 = -1i64;
  do
    ++v1;
  while ( str[v1] );
  return FindStringOfSize(str, v1 + 1);
}

/*
==============
SL_FreeString
==============
*/
void SL_FreeString(scr_string_t stringValue, RefString *refStr, unsigned __int64 len)
{
  int v6; 
  char *str; 
  unsigned int v8; 
  signed __int64 v9; 
  char *v10; 
  int v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  HashEntry *v15; 
  unsigned int data_high; 
  const char *v17; 
  __int64 v18; 
  HashEntry *v19; 
  int v20; 
  __int64 status_next; 
  __int64 v22; 
  __int64 v23; 

  Profile_Begin(468);
  v6 = truncate_cast<int,unsigned __int64>(len);
  str = refStr->str;
  v8 = 0;
  if ( refStr != (RefString *)-8i64 && *str )
  {
    v9 = v6;
    v10 = refStr->str;
    do
    {
      if ( v9 && v10 - str >= v9 )
        break;
      v11 = *v10++;
      v8 = v11 + 31 * v8;
    }
    while ( *v10 );
  }
  if ( len >= 0x100 )
  {
    v13 = ((len >> 2) * (unsigned __int128)0x400010000401ui64) >> 64;
    v12 = (len >> 2) - 0x3FFFF * ((v13 + (((len >> 2) - v13) >> 1)) >> 17);
  }
  else
  {
    LODWORD(v12) = v8 % 0x3FFFF;
  }
  v14 = (unsigned int)(v12 + 1);
  if ( (unsigned int)v14 >= 0x40000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1154, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v12 + 1, 0x40000) )
    __debugbreak();
  v15 = &scrStringGlob.hashTable[v14];
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  data_high = HIWORD(refStr->data);
  if ( !(unsigned __int16)refStr->data )
  {
    if ( (_BYTE)data_high )
    {
      v17 = SL_DebugConvertToString(stringValue);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1172, ASSERT_TYPE_ASSERT, "(!refStr->user)", "%s\n\t%s: %d", "!refStr->user", v17, (unsigned __int8)data_high) )
        __debugbreak();
    }
    memset_0(refStr, 0, len + 8);
    MT_FreeIndex(stringValue, len + 8);
    if ( (v15->status_next & 0x180000) != 0x100000 )
    {
      LODWORD(v23) = v15->status_next;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1183, ASSERT_TYPE_ASSERT, "( ( (entry->status_next & HASH_STAT_MASK) == HASH_STAT_HEAD ) )", "%s\n\t( entry->status_next ) = %i", "( (entry->status_next & HASH_STAT_MASK) == HASH_STAT_HEAD )", v23) )
        __debugbreak();
    }
    v18 = v15->status_next & 0x7FFFF;
    if ( (unsigned int)v18 >= 0x40000 )
    {
      LODWORD(v23) = 0x40000;
      LODWORD(v22) = v15->status_next & 0x7FFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1187, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v19 = &scrStringGlob.hashTable[v18];
    if ( v15->u.prev == stringValue )
    {
      if ( v19 == v15 )
      {
        v19 = &scrStringGlob.hashTable[v14];
        LODWORD(v18) = v14;
      }
      else
      {
        v15->status_next = v19->status_next & 0x7FFFF | 0x100000;
        v15->u.prev = v19->u.prev;
        scrStringGlob.nextFreeEntry = &scrStringGlob.hashTable[v14];
      }
    }
    else
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v19 == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1212, ASSERT_TYPE_ASSERT, "( newEntry != entry )", (const char *)&queryFormat, "newEntry != entry") )
          __debugbreak();
        if ( (v19->status_next & 0x180000) != 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1213, ASSERT_TYPE_ASSERT, "( ( newEntry->status_next & HASH_STAT_MASK ) == HASH_STAT_MOVABLE )", (const char *)&queryFormat, "( newEntry->status_next & HASH_STAT_MASK ) == HASH_STAT_MOVABLE") )
          __debugbreak();
        if ( v19->u.prev == stringValue )
          break;
        LODWORD(v14) = v18;
        v18 = v19->status_next & 0x7FFFF;
        if ( (unsigned int)v18 >= 0x40000 )
        {
          LODWORD(v23) = 0x40000;
          LODWORD(v22) = v19->status_next & 0x7FFFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1226, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        ++v20;
        v19 = &scrStringGlob.hashTable[v18];
        if ( v20 >= 0x40000 )
        {
          LODWORD(v22) = stringValue;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1232, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SL_FreeString failed to match stringValue %d to anything in the hashTable. This indicates some internal error in the stringList like memory stomping.", v22) )
            __debugbreak();
          goto LABEL_55;
        }
      }
      if ( (unsigned int)v14 >= 0x40000 )
      {
        LODWORD(v23) = 0x40000;
        LODWORD(v22) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1217, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      scrStringGlob.hashTable[(unsigned int)v14].status_next = v19->status_next & 0x7FFFF | scrStringGlob.hashTable[(unsigned int)v14].status_next & 0x180000;
    }
    if ( (v19->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1244, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
      __debugbreak();
    status_next = scrStringGlob.hashTable[0].status_next;
    if ( (scrStringGlob.hashTable[0].status_next & 0x180000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1247, ASSERT_TYPE_ASSERT, "( (newNext & HASH_STAT_MASK) == HASH_STAT_FREE )", (const char *)&queryFormat, "(newNext & HASH_STAT_MASK) == HASH_STAT_FREE") )
      __debugbreak();
    v19->status_next = status_next;
    v19->u.prev = 0;
    if ( (unsigned int)status_next >= 0x40000 )
    {
      LODWORD(v23) = 0x40000;
      LODWORD(v22) = status_next;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1251, ASSERT_TYPE_ASSERT, "(unsigned)( newNext ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newNext doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    scrStringGlob.hashTable[status_next].u.prev = v18;
    scrStringGlob.hashTable[0].status_next = v18;
  }
LABEL_55:
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
  Profile_EndInternal(NULL);
}

/*
==============
SL_GetHashCode
==============
*/
__int64 SL_GetHashCode(unsigned __int64 len, unsigned int rawHash)
{
  if ( len >= 0x100 )
    return (unsigned int)((len >> 2) % 0x3FFFF) + 1;
  else
    return rawHash % 0x3FFFF + 1;
}

/*
==============
SL_GetLowercaseString
==============
*/
scr_string_t SL_GetLowercaseString(const char *str, unsigned int user)
{
  __int64 v2; 

  v2 = -1i64;
  while ( str[++v2] != 0 )
    ;
  return SL_GetLowercaseStringOfSize(str, user, (unsigned int)(v2 + 1), 7);
}

/*
==============
SL_GetLowercaseStringOfSize
==============
*/
scr_string_t SL_GetLowercaseStringOfSize(const char *str, unsigned int user, unsigned __int64 len, int type)
{
  unsigned int v9; 
  __int64 v10; 
  char v11; 
  char stra[8192]; 

  Profile_Begin(468);
  if ( len <= 0x2000 )
  {
    v9 = 0;
    if ( len )
    {
      v10 = 0i64;
      do
      {
        v11 = str[v10] | 0x20;
        if ( (unsigned int)(str[v10] - 65) >= 0x1A )
          v11 = str[v10];
        ++v9;
        stra[v10] = v11;
        v10 = v9;
      }
      while ( v9 < len );
    }
    Profile_EndInternal(NULL);
    return j_SL_GetStringOfSize(stra, user, len, type);
  }
  else
  {
    Profile_EndInternal(NULL);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440A54A8, 818i64, str);
    return 0;
  }
}

/*
==============
SL_GetLowercaseString_
==============
*/
scr_string_t SL_GetLowercaseString_(const char *str, unsigned int user, int type)
{
  __int64 v3; 

  v3 = -1i64;
  while ( str[++v3] != 0 )
    ;
  return SL_GetLowercaseStringOfSize(str, user, (unsigned int)(v3 + 1), type);
}

/*
==============
SL_GetOpaqueStringCount
==============
*/
__int64 SL_GetOpaqueStringCount()
{
  __int64 result; 

  result = g_scrCanonicalStringPub.opaqueStringCount;
  if ( !g_scrCanonicalStringPub.opaqueStringCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 320, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.opaqueStringCount > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.opaqueStringCount > 0") )
      __debugbreak();
    return g_scrCanonicalStringPub.opaqueStringCount;
  }
  return result;
}

/*
==============
SL_GetString
==============
*/
scr_string_t SL_GetString(const char *str, unsigned int user)
{
  __int64 v2; 

  v2 = -1i64;
  while ( str[++v2] != 0 )
    ;
  return j_SL_GetStringOfSize(str, user, (unsigned int)(v2 + 1), 7);
}

/*
==============
SL_GetStringForFloat
==============
*/

scr_string_t __fastcall SL_GetStringForFloat(double f)
{
  __int64 v3; 
  char dest[128]; 

  __asm
  {
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x80ui64, "%g", *(double *)&_XMM3);
  v3 = -1i64;
  while ( dest[++v3] != 0 )
    ;
  return j_SL_GetStringOfSize(dest, 0, (unsigned int)(v3 + 1), 17);
}

/*
==============
SL_GetStringForInt
==============
*/
scr_string_t SL_GetStringForInt(int i)
{
  __int64 v1; 
  char dest[128]; 

  Com_sprintf(dest, 0x80ui64, "%i", (unsigned int)i);
  v1 = -1i64;
  while ( dest[++v1] != 0 )
    ;
  return j_SL_GetStringOfSize(dest, 0, (unsigned int)(v1 + 1), 17);
}

/*
==============
SL_GetStringForVector
==============
*/
scr_string_t SL_GetStringForVector(const float *v)
{
  __int64 v8; 
  double v11; 
  double v12; 
  char dest[128]; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm3, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+0C8h+var_A0], xmm0
    vmovq   r9, xmm3
    vmovsd  [rsp+0C8h+var_A8], xmm1
  }
  Com_sprintf(dest, 0x80ui64, "(%g, %g, %g)", *(double *)&_XMM3, v11, v12);
  v8 = -1i64;
  while ( dest[++v8] != 0 )
    ;
  return j_SL_GetStringOfSize(dest, 0, (unsigned int)(v8 + 1), 17);
}

/*
==============
SL_GetStringLen
==============
*/
unsigned __int64 SL_GetStringLen(scr_string_t stringValue)
{
  RefString *RefString_0; 
  unsigned __int64 result; 

  RefString_0 = GetRefString_0(stringValue);
  for ( result = (unsigned __int8)(HIBYTE(RefString_0->data) - 1); RefString_0->str[result]; result += 256i64 )
    ;
  return result;
}

/*
==============
SL_GetSystemCount
==============
*/
__int64 SL_GetSystemCount(unsigned int user)
{
  unsigned __int8 v1; 
  unsigned int v2; 
  HashEntry *v3; 
  __int64 v4; 
  HashEntry::<unnamed_type_u> v5; 
  __int64 v6; 

  v1 = user;
  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1478, ASSERT_TYPE_ASSERT, "( user )", (const char *)&queryFormat, "user") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  v2 = 0;
  v3 = &scrStringGlob.hashTable[1];
  v4 = 0x3FFFFi64;
  do
  {
    if ( (v3->status_next & 0x180000) != 0 )
    {
      v5.prev = (unsigned int)v3->u;
      if ( !v5.prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
        __debugbreak();
      v6 = 16 * v5.prev;
      if ( (unsigned int)v6 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        __debugbreak();
      if ( (v1 & scrMemTreePub.mt_buffer[v6 + 2]) != 0 )
        ++v2;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
  return v2;
}

/*
==============
SL_Init
==============
*/
void SL_Init(void)
{
  HashEntry *v0; 
  __int64 v1; 
  unsigned int i; 

  if ( scrStringGlob.inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 383, ASSERT_TYPE_ASSERT, "( !scrStringGlob.inited )", (const char *)&queryFormat, "!scrStringGlob.inited") )
    __debugbreak();
  MT_Init();
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  v0 = &scrStringGlob.hashTable[1];
  scrStringGlob.hashTable[0].status_next = 0;
  LODWORD(v1) = 0;
  for ( i = 1; i < 0x40000; ++i )
  {
    v0->status_next = 0;
    scrStringGlob.hashTable[(unsigned int)v1].status_next |= i;
    v0->u.prev = v1;
    ++v0;
    v1 = i;
  }
  if ( (scrStringGlob.hashTable[v1].status_next & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 408, ASSERT_TYPE_ASSERT, "( !(scrStringGlob.hashTable[prev].status_next & HASH_NEXT_MASK) )", (const char *)&queryFormat, "!(scrStringGlob.hashTable[prev].status_next & HASH_NEXT_MASK)") )
    __debugbreak();
  scrStringGlob.hashTable[0].u.prev = v1;
  if ( scrStringDebugGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 161, ASSERT_TYPE_ASSERT, "( !scrStringDebugGlob )", (const char *)&queryFormat, "!scrStringDebugGlob") )
    __debugbreak();
  scrStringDebugGlob = &scrStringDebugGlobBuf;
  memset_0(&scrStringDebugGlobBuf, 0, 0x200000ui64);
  scrStringDebugGlob->totalRefCount = 0;
  scrStringGlob.inited = 1;
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
}

/*
==============
SL_IsLowercaseString
==============
*/
__int64 SL_IsLowercaseString(scr_string_t stringValue)
{
  const char *v2; 
  char v3; 
  char v4; 

  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 644, ASSERT_TYPE_ASSERT, "( static_cast<unsigned int>(stringValue) )", (const char *)&queryFormat, "static_cast<unsigned int>(stringValue)") )
    __debugbreak();
  v2 = SL_ConvertToString(stringValue);
  v3 = *v2;
  if ( !*v2 )
    return 1i64;
  while ( 1 )
  {
    v4 = v3 | 0x20;
    if ( (unsigned int)(v3 - 65) >= 0x1A )
      v4 = v3;
    if ( v3 != v4 )
      break;
    v3 = *++v2;
    if ( !v3 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
SL_IsString
==============
*/
_BOOL8 SL_IsString(const char *str)
{
  return (unsigned __int64)(str - scrMemTreePub.mt_buffer) < 0x800000;
}

/*
==============
SL_RemoveRefToString
==============
*/
void SL_RemoveRefToString(scr_string_t stringValue)
{
  __int64 v1; 
  RefString *RefString_0; 
  RefString *v3; 
  unsigned __int32 v4; 
  unsigned __int8 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  __int64 i; 
  const char *v10; 
  const char *v11; 

  v1 = (unsigned int)stringValue;
  if ( !stringValue )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1275, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
      __debugbreak();
    return;
  }
  Profile_Begin(468);
  RefString_0 = GetRefString_0(v1);
  v3 = RefString_0;
  if ( ((unsigned __int8)RefString_0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", RefString_0) )
    __debugbreak();
  v4 = _InterlockedDecrement(&v3->data) << 16;
  Profile_EndInternal(NULL);
  if ( v4 < __popcnt(BYTE2(v3->data)) )
    CrashReport_TriggerNow();
  if ( !v4 )
  {
    v5 = BYTE2(v3->data);
    if ( v5 )
    {
      v6 = SL_DebugConvertToString((scr_string_t)v1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1301, ASSERT_TYPE_ASSERT, "(!refStr->user)", "%s\n\t%s: %d", "!refStr->user", v6, v5) )
        __debugbreak();
      v7 = 1;
      v8 = 7i64;
      do
      {
        if ( ((unsigned __int8)v7 & BYTE2(v3->data)) != 0 )
          SL_AddRefToString((scr_string_t)v1);
        v7 = __ROL4__(v7, 1);
        --v8;
      }
      while ( v8 );
      return;
    }
    for ( i = (unsigned __int8)(HIBYTE(v3->data) - 1); v3->str[i]; i += 256i64 )
      ;
    SL_FreeString((scr_string_t)v1, v3, i + 1);
  }
  if ( scrStringDebugGlob )
  {
    if ( !scrStringDebugGlob->totalRefCount || !scrStringDebugGlob->refCount[v1] )
    {
      v10 = SL_DebugConvertToString((scr_string_t)v1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1320, ASSERT_TYPE_ASSERT, "(scrStringDebugGlob->totalRefCount && scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)])", "%s\n\tscrStringDebugGlob->totalRefCount: %i, stringValue: %i, scrStringDebugGlob->refCount[stringValue]: %i, string: '%s'", "scrStringDebugGlob->totalRefCount && scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)]", scrStringDebugGlob->totalRefCount, v1, scrStringDebugGlob->refCount[v1], v10) )
        __debugbreak();
    }
    if ( !scrStringDebugGlob->refCount[v1] )
    {
      v11 = SL_DebugConvertToString((scr_string_t)v1);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1321, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( SL_DebugConvertToString( stringValue ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", v11) )
        __debugbreak();
    }
    Sys_InterlockedDecrement(&scrStringDebugGlob->totalRefCount);
    Sys_InterlockedDecrement(&scrStringDebugGlob->refCount[v1]);
  }
}

/*
==============
SL_RemoveRefToStringFree
==============
*/
void SL_RemoveRefToStringFree(scr_string_t stringValue, RefString *refStr)
{
  __int64 i; 

  for ( i = (unsigned __int8)(HIBYTE(refStr->data) - 1); refStr->str[i]; i += 256i64 )
    ;
  SL_FreeString(stringValue, refStr, i + 1);
}

/*
==============
SL_RemoveRefToStringOfSize
==============
*/
void SL_RemoveRefToStringOfSize(scr_string_t stringValue, unsigned int len)
{
  __int64 v2; 
  unsigned __int64 v3; 
  RefString *RefString_0; 
  RefString *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  volatile int v10; 
  volatile int totalRefCount; 
  int v12; 
  int v13; 
  volatile int v14; 
  volatile int v15; 

  v2 = (unsigned int)stringValue;
  v3 = len;
  Profile_Begin(468);
  RefString_0 = GetRefString_0(v2);
  v5 = RefString_0;
  if ( ((unsigned __int8)RefString_0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", RefString_0) )
    __debugbreak();
  if ( (unsigned __int16)_InterlockedExchangeAdd(&v5->data, 0xFFFFFFFF) == 1 )
  {
    Profile_EndInternal(NULL);
    SL_FreeString((scr_string_t)v2, v5, v3);
    if ( scrStringDebugGlob )
    {
      if ( !scrStringDebugGlob->totalRefCount || !scrStringDebugGlob->refCount[v2] )
      {
        v8 = SL_DebugConvertToString((scr_string_t)v2);
        v15 = scrStringDebugGlob->refCount[v2];
        v13 = v2;
        totalRefCount = scrStringDebugGlob->totalRefCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1364, ASSERT_TYPE_ASSERT, "(scrStringDebugGlob->totalRefCount && scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)])", "%s\n\tscrStringDebugGlob->totalRefCount: %i, stringValue: %i, scrStringDebugGlob->refCount[stringValue]: %i, string: '%s'", "scrStringDebugGlob->totalRefCount && scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)]", totalRefCount, v13, v15, v8) )
          __debugbreak();
      }
      if ( !scrStringDebugGlob->refCount[v2] )
      {
        v9 = SL_DebugConvertToString((scr_string_t)v2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1365, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( SL_DebugConvertToString( stringValue ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", v9) )
          __debugbreak();
      }
      Sys_InterlockedDecrement(&scrStringDebugGlob->totalRefCount);
      Sys_InterlockedDecrement(&scrStringDebugGlob->refCount[v2]);
    }
  }
  else
  {
    if ( scrStringDebugGlob )
    {
      if ( !scrStringDebugGlob->totalRefCount || !scrStringDebugGlob->refCount[v2] )
      {
        v6 = SL_DebugConvertToString((scr_string_t)v2);
        v14 = scrStringDebugGlob->refCount[v2];
        v12 = v2;
        v10 = scrStringDebugGlob->totalRefCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1346, ASSERT_TYPE_ASSERT, "(scrStringDebugGlob->totalRefCount && scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)])", "%s\n\tscrStringDebugGlob->totalRefCount: %i, stringValue: %i, scrStringDebugGlob->refCount[stringValue]: %i, string: '%s'", "scrStringDebugGlob->totalRefCount && scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)]", v10, v12, v14, v6) )
          __debugbreak();
      }
      if ( !scrStringDebugGlob->refCount[v2] )
      {
        v7 = SL_DebugConvertToString((scr_string_t)v2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1347, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( SL_DebugConvertToString( stringValue ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", v7) )
          __debugbreak();
      }
      Sys_InterlockedDecrement(&scrStringDebugGlob->totalRefCount);
      Sys_InterlockedDecrement(&scrStringDebugGlob->refCount[v2]);
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
SL_Shutdown
==============
*/
void SL_Shutdown(void)
{
  scrStringDebugGlob_t *v0; 
  char v1; 
  unsigned int v2; 
  __int64 v3; 
  RefString *RefString_0; 
  int v5; 
  volatile unsigned int v6; 
  const char *v7; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( scrStringGlob.inited )
  {
    scrStringGlob.inited = 0;
    if ( !G_Main_ExitAfterToolComplete() )
    {
      v0 = scrStringDebugGlob;
      if ( scrStringDebugGlob )
      {
        if ( !scrStringDebugGlob->ignoreChecks )
        {
          v1 = 0;
          v2 = 1;
          v3 = 1i64;
          while ( 1 )
          {
            if ( v0->refCount[v3] )
            {
              v1 = 1;
              RefString_0 = GetRefString_0(v2);
              if ( !RefString_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 186, ASSERT_TYPE_ASSERT, "( ( refStr != nullptr ) )", "( refStr ) = %p", NULL) )
                __debugbreak();
              if ( LOWORD(RefString_0->data) != scrStringDebugGlob->refCount[v3] )
              {
                LODWORD(v12) = scrStringDebugGlob->refCount[v3];
                LODWORD(v11) = LOWORD(RefString_0->data);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 187, ASSERT_TYPE_ASSERT, "( refStr->refCount ) == ( static_cast<unsigned>(scrStringDebugGlob->refCount[i]) )", "%s == %s\n\t%i, %i", "refStr->refCount", "static_cast<unsigned>(scrStringDebugGlob->refCount[i])", v11, v12) )
                  __debugbreak();
              }
              v5 = BYTE2(RefString_0->data);
              v6 = scrStringDebugGlob->refCount[v3];
              v7 = SL_DebugConvertToString((scr_string_t)v2);
              LODWORD(v9) = v2;
              LODWORD(fmt) = v5;
              Com_Printf(24, "SCR_CHECK_LEAKS: string = '%s', refcount = %i, users = %#x, i = %i\n", v7, v6, fmt, v9);
            }
            ++v2;
            ++v3;
            if ( v2 >= 0x80000 )
              break;
            v0 = scrStringDebugGlob;
          }
          if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 191, ASSERT_TYPE_ASSERT, "( !leaks )", "SCR_CHECK_LEAKS: String leaks printed above") )
            __debugbreak();
          if ( scrStringDebugGlob->totalRefCount )
          {
            LODWORD(v10) = scrStringDebugGlob->totalRefCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 192, ASSERT_TYPE_ASSERT, "( ( !scrStringDebugGlob->totalRefCount ) )", "%s\n\t( scrStringDebugGlob->totalRefCount ) = %i", "( !scrStringDebugGlob->totalRefCount )", v10) )
              __debugbreak();
          }
        }
        scrStringDebugGlob = NULL;
      }
    }
  }
}

/*
==============
SL_ShutdownSystem
==============
*/
void SL_ShutdownSystem(unsigned int user)
{
  unsigned __int8 v1; 
  unsigned int v2; 
  scr_string_t *p_u; 
  scr_string_t v4; 
  unsigned int v5; 
  char *v6; 

  v1 = user;
  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1440, ASSERT_TYPE_ASSERT, "( user )", (const char *)&queryFormat, "user") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  v2 = 1;
  p_u = (scr_string_t *)&scrStringGlob.hashTable[1].u;
  do
  {
    do
    {
      if ( (*(p_u - 1) & 0x180000) == 0 )
        break;
      v4 = *p_u;
      if ( !*p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
        __debugbreak();
      v5 = 16 * v4;
      if ( v5 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        __debugbreak();
      v6 = &scrMemTreePub.mt_buffer[v5];
      if ( (v1 & (unsigned __int8)v6[2]) == 0 )
        break;
      v6[2] &= ~v1;
      scrStringGlob.nextFreeEntry = NULL;
      SL_RemoveRefToString(*p_u);
    }
    while ( scrStringGlob.nextFreeEntry );
    ++v2;
    p_u += 2;
  }
  while ( v2 < 0x40000 );
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
}

/*
==============
SL_TransferSystem
==============
*/
void SL_TransferSystem(unsigned int from, unsigned int to)
{
  unsigned __int8 v3; 
  HashEntry *v4; 
  __int64 v5; 
  HashEntry::<unnamed_type_u> v6; 
  unsigned int v7; 
  char *v8; 

  v3 = from;
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1527, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1528, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  v4 = &scrStringGlob.hashTable[1];
  v5 = 0x3FFFFi64;
  do
  {
    if ( (v4->status_next & 0x180000) != 0 )
    {
      v6.prev = (unsigned int)v4->u;
      if ( !v6.prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
        __debugbreak();
      v7 = 16 * v6.prev;
      if ( v7 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        __debugbreak();
      v8 = &scrMemTreePub.mt_buffer[v7];
      if ( (v3 & (unsigned __int8)v8[2]) != 0 )
        v8[2] = to | ~v3 & v8[2];
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
}

/*
==============
Scr_AllocGameString
==============
*/
scr_string_t Scr_AllocGameString(const char *s, int sys)
{
  __int64 v3; 

  if ( sys != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1394, ASSERT_TYPE_ASSERT, "( sys == SCR_SYS_GAME )", (const char *)&queryFormat, "sys == SCR_SYS_GAME") )
    __debugbreak();
  v3 = -1i64;
  while ( s[++v3] != 0 )
    ;
  return j_SL_GetStringOfSize(s, 1u, (unsigned int)(v3 + 1), 7);
}

/*
==============
Scr_AllocGlobalString
==============
*/
scr_string_t Scr_AllocGlobalString(const char *s)
{
  __int64 v1; 

  v1 = -1i64;
  while ( s[++v1] != 0 )
    ;
  return j_SL_GetStringOfSize(s, 0x40u, (unsigned int)(v1 + 1), 27);
}

/*
==============
Scr_CreateCanonicalFilename
==============
*/
scr_string_t Scr_CreateCanonicalFilename(const scrContext_t *scrContext, const char *filename)
{
  char *v3; 
  int v5; 
  char v6; 
  char v7; 
  bool v8; 
  const char *v9; 
  __int64 v10; 
  __int64 v12; 
  char str[1024]; 

  v3 = str;
  v5 = 1024;
  do
  {
    do
    {
      do
        v6 = *filename++;
      while ( v6 == 92 );
    }
    while ( v6 == 47 );
    if ( v6 >= 32 )
    {
      while ( 1 )
      {
        v7 = v6 | 0x20;
        if ( (unsigned int)(v6 - 65) >= 0x1A )
          v7 = v6;
        *v3++ = v7;
        if ( !--v5 )
        {
          LODWORD(v12) = 0;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440A5EF8, 819i64, filename, v12);
        }
        if ( v6 == 47 )
          break;
        v6 = *filename++;
        if ( v6 == 92 )
        {
          v6 = 47;
        }
        else if ( v6 < 32 )
        {
          break;
        }
      }
    }
  }
  while ( v6 );
  v8 = scrContext->m_Instance == SCRIPTINSTANCE_SERVER;
  v9 = ".csc";
  *v3 = 0;
  if ( v8 )
    v9 = ".gsc";
  if ( !I_EndsWith(str, v9) )
    I_strcat(str, 0x400ui64, v9);
  v10 = -1i64;
  do
    v8 = str[++v10] == 0;
  while ( !v8 );
  return j_SL_GetStringOfSize(str, 0, (unsigned int)(v10 + 1), 8);
}

/*
==============
Scr_CreateCanonicalFilenameInternal
==============
*/
void Scr_CreateCanonicalFilenameInternal(char *newFilename, const char *filename, int count)
{
  int v3; 
  char v6; 
  char v7; 
  char *fmt; 

  v3 = count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1596, ASSERT_TYPE_ASSERT, "( count )", (const char *)&queryFormat, "count") )
    __debugbreak();
  do
  {
    do
    {
      do
        v6 = *filename++;
      while ( v6 == 92 );
    }
    while ( v6 == 47 );
    if ( v6 >= 32 )
    {
      while ( 1 )
      {
        v7 = v6 | 0x20;
        if ( (unsigned int)(v6 - 65) >= 0x1A )
          v7 = v6;
        *newFilename++ = v7;
        if ( !--v3 )
        {
          LODWORD(fmt) = 0;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440A5EF8, 819i64, filename, fmt);
        }
        if ( v6 == 47 )
          break;
        v6 = *filename++;
        if ( v6 == 92 )
        {
          v6 = 47;
        }
        else if ( v6 < 32 )
        {
          break;
        }
      }
    }
  }
  while ( v6 );
  *newFilename = 0;
}

/*
==============
Scr_CreateCanonicalFilenameNoExtension
==============
*/
scr_string_t Scr_CreateCanonicalFilenameNoExtension(const char *filename)
{
  char *v2; 
  int v3; 
  char v4; 
  char v5; 
  __int64 v6; 
  __int64 v9; 
  char str[1024]; 

  v2 = str;
  v3 = 1024;
  do
  {
    do
    {
      do
        v4 = *filename++;
      while ( v4 == 92 );
    }
    while ( v4 == 47 );
    if ( v4 >= 32 )
    {
      while ( 1 )
      {
        v5 = v4 | 0x20;
        if ( (unsigned int)(v4 - 65) >= 0x1A )
          v5 = v4;
        *v2++ = v5;
        if ( !--v3 )
        {
          LODWORD(v9) = 0;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440A5EF8, 819i64, filename, v9);
        }
        if ( v4 == 47 )
          break;
        v4 = *filename++;
        if ( v4 == 92 )
        {
          v4 = 47;
        }
        else if ( v4 < 32 )
        {
          break;
        }
      }
    }
  }
  while ( v4 );
  *v2 = 0;
  v6 = -1i64;
  while ( str[++v6] != 0 )
    ;
  return j_SL_GetStringOfSize(str, 0, (unsigned int)(v6 + 1), 8);
}

/*
==============
Scr_SetString
==============
*/
void Scr_SetString(scr_string_t *to, scr_string_t from)
{
  if ( from )
    SL_AddRefToString(from);
  if ( *to )
    SL_RemoveRefToString(*to);
  *to = from;
}

/*
==============
Scr_SetStringFromCharString
==============
*/
void Scr_SetStringFromCharString(scr_string_t *to, const char *from)
{
  scr_string_t v4; 
  __int64 v5; 

  v4 = *to;
  if ( v4 )
    SL_RemoveRefToString(v4);
  v5 = -1i64;
  while ( from[++v5] != 0 )
    ;
  *to = j_SL_GetStringOfSize(from, 0, (unsigned int)(v5 + 1), 7);
}

/*
==============
Scr_ShutdownGameStrings
==============
*/
void Scr_ShutdownGameStrings(void)
{
  SL_ShutdownSystem(1u);
}

/*
==============
Scr_ShutdownGlobalStrings
==============
*/
void Scr_ShutdownGlobalStrings(void)
{
  SL_ShutdownSystem(0x40u);
}

/*
==============
SL_AddUser
==============
*/
void SL_AddUser(scr_string_t stringValue, unsigned int user)
{
  RefString *RefString_0; 

  RefString_0 = GetRefString_0(stringValue);
  SL_AddUserInternal(RefString_0, user);
}

/*
==============
SL_ConvertToLowercase
==============
*/
__int64 SL_ConvertToLowercase(scr_string_t stringValue, unsigned int user, int type)
{
  RefString *RefString_0; 
  __int64 i; 
  unsigned __int64 v8; 
  unsigned __int64 v10; 
  const char *v11; 
  signed __int64 v12; 
  char *v13; 
  char v14; 
  scr_string_t StringOfSize; 
  char str[8192]; 

  Profile_Begin(468);
  RefString_0 = GetRefString_0(stringValue);
  for ( i = (unsigned __int8)(HIBYTE(RefString_0->data) - 1); RefString_0->str[i]; i += 256i64 )
    ;
  v8 = i + 1;
  if ( (unsigned __int64)(i + 1) <= 0x2000 )
  {
    v10 = 0i64;
    v11 = SL_ConvertToString(stringValue);
    if ( v8 )
    {
      v12 = v11 - str;
      do
      {
        v13 = &str[v10];
        v14 = str[v10 + v12] | 0x20;
        if ( (unsigned int)(str[v10 + v12] - 65) >= 0x1A )
          v14 = str[v10 + v12];
        ++v10;
        *v13 = v14;
      }
      while ( v10 < v8 );
    }
    StringOfSize = j_SL_GetStringOfSize(str, user, v8, type);
    SL_RemoveRefToString(stringValue);
    Profile_EndInternal(NULL);
    return (unsigned int)StringOfSize;
  }
  else
  {
    Profile_EndInternal(NULL);
    return (unsigned int)stringValue;
  }
}

/*
==============
SL_DumpStringInfo
==============
*/
char SL_DumpStringInfo()
{
  unsigned int v0; 
  HashEntry::<unnamed_type_u> *p_u; 
  unsigned int i; 
  __int64 v3; 
  scrContext_t *First; 
  scrContext_t *j; 

  v0 = 0;
  p_u = &scrStringGlob.hashTable[1].u;
  for ( i = 1; i < 0x40000; ++i )
  {
    if ( p_u->prev )
    {
      v3 = 16 * p_u->prev;
      if ( (unsigned int)v3 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        __debugbreak();
      if ( scrMemTreePub.mt_buffer[v3 + 8] )
      {
        ++v0;
        Com_Printf(24, "%6d: %s\n", i, &scrMemTreePub.mt_buffer[v3 + 8]);
      }
    }
    p_u += 2;
  }
  Com_Printf(24, "  %d strings dumped\n", v0);
  LOBYTE(First) = Com_IsAnyLocalServerRunning();
  if ( (_BYTE)First )
  {
    First = ScriptContext_GetFirst();
    for ( j = First; First; j = First )
    {
      Scr_DumpScriptThreads(j, 1);
      Scr_DumpScriptVariablesDefault(j);
      First = ScriptContext_GetNext(j);
    }
  }
  return (char)First;
}

/*
==============
SL_GetRawHash
==============
*/
__int64 SL_GetRawHash(scr_string_t stringValue)
{
  return GetRefString_0(stringValue)->rawHash;
}

/*
==============
SL_GetStringOfSize
==============
*/
__int64 SL_GetStringOfSize(const char *str, unsigned int user, unsigned __int64 len, int type)
{
  int v7; 
  unsigned int v8; 
  signed __int64 v9; 
  const char *v10; 
  int v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  HashEntry *v15; 
  int v16; 
  RefString *RefString_0; 
  RefString *v18; 
  const char *v19; 
  scr_string_t prev; 
  __int64 v22; 
  int v23; 
  HashEntry *v24; 
  HashEntry::<unnamed_type_u> v25; 
  __int64 v26; 
  char *v27; 
  scr_string_t v28; 
  __int64 status_next; 
  unsigned __int64 v30; 
  unsigned int v31; 
  HashEntry *v32; 
  __int64 v33; 
  HashEntry::<unnamed_type_u> *p_u; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned int v42; 
  RefString *v43; 
  char *v44; 
  volatile int *p_totalRefCount; 
  volatile signed __int32 *v46; 
  char *v47; 
  __int64 v48; 
  __int64 v49; 
  int v50; 
  int v51; 
  unsigned __int64 v52; 
  HashEntry *v53; 

  Profile_Begin(468);
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 761, ASSERT_TYPE_ASSERT, "( str )", (const char *)&queryFormat, "str") )
    __debugbreak();
  v7 = truncate_cast<int,unsigned __int64>(len);
  v8 = 0;
  if ( str && *str )
  {
    v9 = v7;
    v10 = str;
    do
    {
      if ( v9 && v10 - str >= v9 )
        break;
      v11 = *v10++;
      v8 = v11 + 31 * v8;
    }
    while ( *v10 );
  }
  if ( len >= 0x100 )
  {
    v13 = ((len >> 2) * (unsigned __int128)0x400010000401ui64) >> 64;
    v12 = (len >> 2) - 0x3FFFF * ((v13 + (((len >> 2) - v13) >> 1)) >> 17);
  }
  else
  {
    LODWORD(v12) = v8 % 0x3FFFF;
  }
  v14 = (unsigned int)(v12 + 1);
  v51 = v14;
  if ( (unsigned int)v14 >= 0x40000 )
  {
    LODWORD(v48) = v12 + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( hashCode ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "hashCode doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, 0x40000) )
      __debugbreak();
  }
  v52 = v14;
  v15 = &scrStringGlob.hashTable[v14];
  v50 = (unsigned __int8)len;
  v53 = v15;
  Sys_EnterCriticalSection(CRITSECT_SCRIPT_STRING);
  v16 = v15->status_next & 0x180000;
  if ( v16 == 0x100000 )
  {
    RefString_0 = GetRefString_0(v15->u.prev);
    v18 = RefString_0;
    if ( HIBYTE(RefString_0->data) == (unsigned __int8)len )
    {
      v19 = RefString_0->str;
      if ( !memcmp_0(RefString_0->str, str, len) )
      {
        SL_AddUserInternal(v18, user);
        if ( (v15->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 785, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
          __debugbreak();
        prev = v15->u.prev;
        if ( v19 != SL_ConvertToString(prev) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 788, ASSERT_TYPE_ASSERT, "( refStr->str == SL_ConvertToString( static_cast< scr_string_t >( stringValue ) ) )", (const char *)&queryFormat, "refStr->str == SL_ConvertToString( static_cast< scr_string_t >( stringValue ) )") )
          __debugbreak();
        Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
        Profile_EndInternal(NULL);
        return (unsigned int)prev;
      }
    }
    v22 = v15->status_next & 0x7FFFF;
    if ( (unsigned int)v22 < 0x40000 )
      goto LABEL_30;
    v23 = 800;
LABEL_28:
    LODWORD(v49) = 0x40000;
    LODWORD(v48) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", v23, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
LABEL_30:
    while ( 1 )
    {
      v24 = &scrStringGlob.hashTable[v22];
      if ( v24 == v15 )
        break;
      if ( (v24->status_next & 0x180000) != 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 804, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE") )
        __debugbreak();
      v25.prev = (unsigned int)v24->u;
      if ( !v25.prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 158, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
        __debugbreak();
      v26 = 16 * v25.prev;
      if ( (unsigned int)v26 >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
        __debugbreak();
      v27 = &scrMemTreePub.mt_buffer[v26];
      if ( (unsigned __int8)v27[3] == v50 && !memcmp_0(v27 + 8, str, len) )
      {
        if ( (unsigned int)v14 >= 0x40000 )
        {
          LODWORD(v49) = 0x40000;
          LODWORD(v48) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 810, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        scrStringGlob.hashTable[(unsigned int)v14].status_next = scrStringGlob.hashTable[(unsigned int)v14].status_next & 0x180000 | v24->status_next & 0x7FFFF;
        v24->status_next = v24->status_next & 0x180000 | v15->status_next & 0x7FFFF;
        v15->status_next &= 0x180000u;
        v15->status_next |= v22;
        v28 = v24->u.prev;
        v24->u.prev = v15->u.prev;
        v15->u.prev = v28;
        SL_AddUserInternal((RefString *)v27, user);
        if ( (v24->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 820, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
          __debugbreak();
        if ( (v15->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 821, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
          __debugbreak();
        if ( v27 + 8 != SL_ConvertToString(v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 823, ASSERT_TYPE_ASSERT, "( refStr->str == SL_ConvertToString( static_cast< scr_string_t >( stringValue ) ) )", (const char *)&queryFormat, "refStr->str == SL_ConvertToString( static_cast< scr_string_t >( stringValue ) )") )
          __debugbreak();
        Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
        Profile_EndInternal(NULL);
        return (unsigned int)v28;
      }
      LODWORD(v14) = v22;
      v22 = v24->status_next & 0x7FFFF;
      if ( (unsigned int)v22 >= 0x40000 )
      {
        v23 = 835;
        goto LABEL_28;
      }
    }
    status_next = scrStringGlob.hashTable[0].status_next;
    if ( !scrStringGlob.hashTable[0].status_next )
    {
      j_SL_DumpStringInfo();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440A50A0, 816i64);
    }
    v30 = len;
    v31 = MT_AllocIndex(len + 8, type);
    if ( (unsigned int)status_next >= 0x40000 )
    {
      LODWORD(v49) = 0x40000;
      LODWORD(v48) = status_next;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 850, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    v32 = &scrStringGlob.hashTable[status_next];
    if ( (v32->status_next & 0x180000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 852, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_FREE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_FREE") )
      __debugbreak();
    v33 = v32->status_next & 0x7FFFF;
    scrStringGlob.hashTable[0].status_next = v33;
    if ( (unsigned int)v33 >= 0x40000 )
    {
      LODWORD(v49) = 0x40000;
      LODWORD(v48) = v33;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 857, ASSERT_TYPE_ASSERT, "(unsigned)( newNext ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newNext doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    scrStringGlob.hashTable[v33].u.prev = 0;
    v32->status_next = v15->status_next & 0x7FFFF | 0x80000;
    v15->status_next &= 0x180000u;
    v15->status_next |= status_next & 0x7FFFF;
    v32->u.prev = v15->u.prev;
    p_u = &v15->u;
  }
  else
  {
    if ( v16 )
    {
      if ( v16 != 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 892, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) == HASH_STAT_MOVABLE") )
        __debugbreak();
      v38 = v15->status_next & 0x7FFFF;
      LODWORD(v39) = v38;
      if ( (unsigned int)v38 >= 0x40000 )
      {
        LODWORD(v49) = 0x40000;
        LODWORD(v48) = v15->status_next & 0x7FFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 897, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v40 = (unsigned int)v38;
      if ( (scrStringGlob.hashTable[v38].status_next & 0x7FFFF) != (_DWORD)v14 )
      {
        do
        {
          v39 = scrStringGlob.hashTable[v40].status_next & 0x7FFFF;
          if ( (unsigned int)v39 >= 0x40000 )
          {
            LODWORD(v49) = 0x40000;
            LODWORD(v48) = scrStringGlob.hashTable[v40].status_next & 0x7FFFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 901, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
              __debugbreak();
          }
          v40 = (unsigned int)v39;
        }
        while ( (scrStringGlob.hashTable[v39].status_next & 0x7FFFF) != (_DWORD)v14 );
      }
      if ( !(_DWORD)v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 904, ASSERT_TYPE_ASSERT, "( prev )", (const char *)&queryFormat, "prev") )
        __debugbreak();
      v41 = scrStringGlob.hashTable[0].status_next;
      if ( !scrStringGlob.hashTable[0].status_next )
      {
        j_SL_DumpStringInfo();
        Com_Error_impl((errorParm_t)(v41 + 1), (const ObfuscateErrorText)&stru_1440A50A0, 817i64);
      }
      v31 = MT_AllocIndex(len + 8, type);
      if ( (unsigned int)v41 >= 0x40000 )
      {
        LODWORD(v49) = 0x40000;
        LODWORD(v48) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 917, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newIndex doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v14 = (unsigned __int64)&scrStringGlob.hashTable[v41];
      if ( (*(_DWORD *)v14 & 0x180000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 919, ASSERT_TYPE_ASSERT, "( (newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_FREE )", (const char *)&queryFormat, "(newEntry->status_next & HASH_STAT_MASK) == HASH_STAT_FREE") )
        __debugbreak();
      v42 = *(_DWORD *)v14 & 0x7FFFF;
      scrStringGlob.hashTable[0].status_next = v42;
      if ( v42 >= 0x40000 )
      {
        LODWORD(v49) = 0x40000;
        LODWORD(v48) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( newNext ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "newNext doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      scrStringGlob.hashTable[v42].u.prev = 0;
      if ( (unsigned int)v39 >= 0x40000 )
      {
        LODWORD(v49) = 0x40000;
        LODWORD(v48) = v39;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 927, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      scrStringGlob.hashTable[(unsigned int)v39].status_next &= 0x180000u;
      scrStringGlob.hashTable[(unsigned int)v39].status_next |= v41;
      v15 = v53;
      *(_DWORD *)v14 = v38 | 0x80000;
      p_u = &scrStringGlob.hashTable[v52].u;
      *(HashEntry::<unnamed_type_u> *)(v14 + 4) = (HashEntry::<unnamed_type_u>)p_u->prev;
      LODWORD(v14) = v51;
    }
    else
    {
      v35 = MT_AllocIndex(len + 8, type);
      p_u = &v15->u;
      v36 = v15->u.prev;
      v37 = v15->status_next & 0x7FFFF;
      v31 = v35;
      if ( (unsigned int)v36 >= 0x40000 )
      {
        LODWORD(v49) = 0x40000;
        LODWORD(v48) = v15->u.prev;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( prev ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "prev doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
        p_u = &v15->u;
      }
      if ( (unsigned int)v37 >= 0x40000 )
      {
        LODWORD(v49) = 0x40000;
        LODWORD(v48) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 881, ASSERT_TYPE_ASSERT, "(unsigned)( next ) < (unsigned)( ( sizeof( *array_counter( scrStringGlob.hashTable ) ) + 0 ) )", "next doesn't index ARRAY_COUNT( scrStringGlob.hashTable )\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      scrStringGlob.hashTable[v36].status_next &= 0x180000u;
      scrStringGlob.hashTable[v36].status_next |= v37;
      scrStringGlob.hashTable[v37].u.prev = v36;
    }
    if ( (v14 & 0x180000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 939, ASSERT_TYPE_ASSERT, "( !(hashCode & HASH_STAT_MASK) )", (const char *)&queryFormat, "!(hashCode & HASH_STAT_MASK)") )
      __debugbreak();
    v15->status_next = v14 | 0x100000;
    v30 = len;
  }
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 943, ASSERT_TYPE_ASSERT, "( stringValue )", (const char *)&queryFormat, "stringValue") )
    __debugbreak();
  p_u->prev = v31;
  v43 = GetRefString_0(v31);
  v44 = v43->str;
  memcpy_0(v43->str, str, v30);
  BYTE2(v43->data) = user;
  if ( (unsigned __int8)user != user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 950, ASSERT_TYPE_ASSERT, "( refStr->user == user )", (const char *)&queryFormat, "refStr->user == user") )
    __debugbreak();
  HIBYTE(v43->data) = v50;
  v43->rawHash = v8;
  LOWORD(v43->data) = 1;
  if ( scrStringDebugGlob )
  {
    p_totalRefCount = &scrStringDebugGlob->totalRefCount;
    if ( ((unsigned __int8)scrStringDebugGlob & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_totalRefCount) )
      __debugbreak();
    _InterlockedIncrement(p_totalRefCount);
    v46 = &scrStringDebugGlob->refCount[v31];
    if ( ((unsigned __int8)v46 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scrStringDebugGlob->refCount[v31]) )
      __debugbreak();
    _InterlockedIncrement(v46);
  }
  if ( (v15->status_next & 0x180000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 964, ASSERT_TYPE_ASSERT, "( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE )", (const char *)&queryFormat, "(entry->status_next & HASH_STAT_MASK) != HASH_STAT_FREE") )
    __debugbreak();
  if ( v31 )
  {
    if ( !scrStringDebugGlob && !*(_DWORD *)(4i64 * v31) )
    {
      LODWORD(v49) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 219, ASSERT_TYPE_ASSERT, "( ( stringValue == ( static_cast< scr_string_t >( 0 ) ) || scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( static_cast<unsigned int>(stringValue) ) = %i", "( stringValue == ( static_cast< scr_string_t >( 0 ) ) || scrStringDebugGlob || scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", v49) )
        __debugbreak();
    }
    v47 = GetRefString_0(v31)->str;
  }
  else
  {
    v47 = NULL;
  }
  if ( v44 != v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 965, ASSERT_TYPE_ASSERT, "( refStr->str == SL_ConvertToString( static_cast< scr_string_t >( stringValue ) ) )", (const char *)&queryFormat, "refStr->str == SL_ConvertToString( static_cast< scr_string_t >( stringValue ) )") )
    __debugbreak();
  Sys_LeaveCriticalSection(CRITSECT_SCRIPT_STRING);
  Profile_EndInternal(NULL);
  return v31;
}

/*
==============
SL_GetString_
==============
*/
scr_string_t SL_GetString_(const char *str, unsigned int user, int type)
{
  __int64 v3; 

  v3 = -1i64;
  while ( str[++v3] != 0 )
    ;
  return j_SL_GetStringOfSize(str, user, (unsigned int)(v3 + 1), type);
}

/*
==============
SL_GetUser
==============
*/
__int64 SL_GetUser(scr_string_t stringValue)
{
  return BYTE2(GetRefString_0(stringValue)->data);
}

/*
==============
SL_TransferRefToUser
==============
*/
void SL_TransferRefToUser(scr_string_t stringValue, unsigned int user)
{
  __int64 v2; 
  RefString *RefString_0; 
  volatile signed __int32 *p_data; 
  const char *v6; 
  const char *v7; 

  v2 = (unsigned int)stringValue;
  Profile_Begin(468);
  RefString_0 = GetRefString_0(v2);
  p_data = &RefString_0->data;
  if ( ((unsigned __int8)user & BYTE2(RefString_0->data)) != 0 )
  {
    if ( LOWORD(RefString_0->data) <= 1u )
    {
      v6 = SL_DebugConvertToString((scr_string_t)v2);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1064, ASSERT_TYPE_ASSERT, "( ( refStr->refCount > 1 ) )", "%s\n\t( SL_DebugConvertToString( stringValue ) ) = %s", "( refStr->refCount > 1 )", v6) )
        __debugbreak();
    }
    if ( scrStringDebugGlob )
    {
      if ( !scrStringDebugGlob->refCount[v2] )
      {
        v7 = SL_DebugConvertToString((scr_string_t)v2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.cpp", 1070, ASSERT_TYPE_ASSERT, "( ( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] ) )", "%s\n\t( SL_DebugConvertToString( stringValue ) ) = %s", "( scrStringDebugGlob->refCount[static_cast<unsigned int>(stringValue)] )", v7) )
          __debugbreak();
      }
      Sys_InterlockedDecrement(&scrStringDebugGlob->totalRefCount);
      Sys_InterlockedDecrement(&scrStringDebugGlob->refCount[v2]);
    }
    if ( ((unsigned __int8)p_data & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_data) )
      __debugbreak();
    _InterlockedDecrement(p_data);
  }
  else
  {
    if ( ((unsigned __int8)RefString_0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", RefString_0) )
      __debugbreak();
    _InterlockedOr(p_data, user << 16);
  }
  Profile_EndInternal(NULL);
}

