/*
==============
DB_IsAssetNameValid
==============
*/

bool __fastcall DB_IsAssetNameValid(const char *const name)
{
  return ?DB_IsAssetNameValid@@YA_NQEBD@Z(name);
}

/*
==============
DB_FixAssetNameAllowEmpty
==============
*/

void __fastcall DB_FixAssetNameAllowEmpty(char *const destBuffer, const unsigned __int64 length, const char *const name)
{
  ?DB_FixAssetNameAllowEmpty@@YAXQEAD_KQEBD@Z(destBuffer, length, name);
}

/*
==============
DB_FixAssetNameAllowEmpty
==============
*/
void DB_FixAssetNameAllowEmpty(char *const destBuffer, const unsigned __int64 length, const char *const name)
{
  unsigned __int64 v3; 
  char *v6; 
  const char *v7; 
  signed __int64 v8; 
  char v9; 
  char v10; 
  char *v11; 

  v3 = 0i64;
  v6 = destBuffer;
  v7 = name;
  if ( !destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 20, ASSERT_TYPE_ASSERT, "(destBuffer)", (const char *)&queryFormat, "destBuffer") )
    __debugbreak();
  if ( !length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 21, ASSERT_TYPE_ASSERT, "(length)", (const char *)&queryFormat, "length") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 22, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v8 = 0i64;
  while ( 1 )
  {
    v9 = *v7;
    if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", v8, "signed", v8) )
      __debugbreak();
    if ( v8 >= length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 31, ASSERT_TYPE_ASSERT, "( ( truncate_cast<size_t>( source - name ) < length ) )", "( name ) = %s", name) )
      __debugbreak();
    if ( !v9 )
      break;
    if ( v9 >= 65 && v9 <= 90 )
    {
      v10 = v9 + 32;
      goto LABEL_30;
    }
    if ( v9 == 92 )
    {
      v10 = 47;
      goto LABEL_30;
    }
    if ( !v3 && v9 <= 32 || v9 == 44 || v9 == 124 || v9 == 32 )
    {
      ++v7;
      ++v8;
    }
    else
    {
      v10 = v9;
LABEL_30:
      *v6 = v10;
      v11 = v6;
      if ( v9 <= 32 )
        v11 = (char *)v3;
      ++v7;
      ++v8;
      v3 = (unsigned __int64)v11;
      ++v6;
    }
  }
  if ( v3 )
  {
    if ( v3 >= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 43, ASSERT_TYPE_ASSERT, "(lastNonWhitespace < dest)", (const char *)&queryFormat, "lastNonWhitespace < dest") )
      __debugbreak();
    *(_BYTE *)(v3 + 1) = 0;
  }
  else
  {
    *v6 = 0;
  }
}

/*
==============
DB_IsAssetNameValid
==============
*/
bool DB_IsAssetNameValid(const char *const name)
{
  const char *v1; 
  char v2; 
  __int64 v3; 
  char v4; 

  v1 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v2 = *v1;
  if ( *v1 && v2 > 32 )
  {
    v3 = 0x1000000000001001i64;
    while ( 1 )
    {
      v4 = v2;
      if ( (unsigned __int8)(v2 - 65) <= 0x19u || (unsigned __int8)(v2 - 32) <= 0x3Cu && _bittest64(&v3, (char)(v2 - 32)) )
        break;
      if ( v2 == 124 )
        break;
      v2 = *++v1;
      if ( !v2 )
        return v4 > 32;
    }
  }
  return 0;
}

