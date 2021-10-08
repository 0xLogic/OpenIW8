/*
==============
IWString_GetUnsignedDecimalLength
==============
*/

unsigned int __fastcall IWString_GetUnsignedDecimalLength(unsigned int value)
{
  return ?IWString_GetUnsignedDecimalLength@@YAII@Z(value);
}

/*
==============
IWString_FromHex2
==============
*/

bool __fastcall IWString_FromHex2(unsigned __int8 *outValue, const char *text)
{
  return ?IWString_FromHex2@@YA_NPEAEPEBD@Z(outValue, text);
}

/*
==============
IWString_ToUnsignedDecimal
==============
*/

void __fastcall IWString_ToUnsignedDecimal(char *outText, unsigned int valueTextLen, unsigned __int64 value)
{
  ?IWString_ToUnsignedDecimal@@YAXPEADI_K@Z(outText, valueTextLen, value);
}

/*
==============
IWString_AppendUnsignedDecimal
==============
*/

char *__fastcall IWString_AppendUnsignedDecimal(char *outText, unsigned int value)
{
  return ?IWString_AppendUnsignedDecimal@@YAPEADPEADI@Z(outText, value);
}

/*
==============
IWString_ToHex6
==============
*/

void __fastcall IWString_ToHex6(char *outText, unsigned int value)
{
  ?IWString_ToHex6@@YAXPEADI@Z(outText, value);
}

/*
==============
IWString_ParseFloat64
==============
*/

const char *__fastcall IWString_ParseFloat64(long double *outValue, const char *text, unsigned __int64 textLen)
{
  return ?IWString_ParseFloat64@@YAPEBDPEANPEBD_K@Z(outValue, text, textLen);
}

/*
==============
IWString_ToHex8
==============
*/

void __fastcall IWString_ToHex8(char *outText, unsigned int value)
{
  ?IWString_ToHex8@@YAXPEADI@Z(outText, value);
}

/*
==============
IWString_FromHex8
==============
*/

bool __fastcall IWString_FromHex8(unsigned int *outValue, const char *text)
{
  return ?IWString_FromHex8@@YA_NPEAIPEBD@Z(outValue, text);
}

/*
==============
IWString_ToHex16
==============
*/

void __fastcall IWString_ToHex16(char *outText, unsigned __int64 value)
{
  ?IWString_ToHex16@@YAXPEAD_K@Z(outText, value);
}

/*
==============
IWString_ToUnsignedDecimal
==============
*/

void __fastcall IWString_ToUnsignedDecimal(char *outText, unsigned int valueTextLen, unsigned int value)
{
  ?IWString_ToUnsignedDecimal@@YAXPEADII@Z(outText, valueTextLen, value);
}

/*
==============
IWString_AppendSignedDecimal
==============
*/

char *__fastcall IWString_AppendSignedDecimal(char *outText, int value)
{
  return ?IWString_AppendSignedDecimal@@YAPEADPEADH@Z(outText, value);
}

/*
==============
IWString_GetUnsignedDecimalLength
==============
*/

unsigned int __fastcall IWString_GetUnsignedDecimalLength(unsigned __int64 value)
{
  return ?IWString_GetUnsignedDecimalLength@@YAI_K@Z(value);
}

/*
==============
IWString_FindText
==============
*/

const char *__fastcall IWString_FindText(const char *text, unsigned __int64 textLen, const char *key, unsigned __int64 keyLen)
{
  return ?IWString_FindText@@YAPEBDPEBD_K01@Z(text, textLen, key, keyLen);
}

/*
==============
IWString_AppendUnsignedDecimalWithLeadingZeros
==============
*/

char *__fastcall IWString_AppendUnsignedDecimalWithLeadingZeros(char *outText, unsigned __int64 value, unsigned int lenMin)
{
  return ?IWString_AppendUnsignedDecimalWithLeadingZeros@@YAPEADPEAD_KI@Z(outText, value, lenMin);
}

/*
==============
IWString_ToSignedDecimal
==============
*/

void __fastcall IWString_ToSignedDecimal(char *outText, unsigned int valueTextLen, __int64 value)
{
  ?IWString_ToSignedDecimal@@YAXPEADI_J@Z(outText, valueTextLen, value);
}

/*
==============
IWString_GetSignedDecimalLength
==============
*/

unsigned int __fastcall IWString_GetSignedDecimalLength(int value)
{
  return ?IWString_GetSignedDecimalLength@@YAIH@Z(value);
}

/*
==============
IWString_FromUnsignedDecimal
==============
*/

const char *__fastcall IWString_FromUnsignedDecimal(unsigned int *outValue, const char *text, const char *textEnd)
{
  return ?IWString_FromUnsignedDecimal@@YAPEBDPEAIPEBD1@Z(outValue, text, textEnd);
}

/*
==============
IWString_ToHex2
==============
*/

void __fastcall IWString_ToHex2(char *outText, unsigned int value)
{
  ?IWString_ToHex2@@YAXPEADI@Z(outText, value);
}

/*
==============
IWString_NormalizePathPossiblyUNC
==============
*/

unsigned __int64 __fastcall IWString_NormalizePathPossiblyUNC(char *outPath, const char *path, unsigned __int64 pathLen, int slash)
{
  return ?IWString_NormalizePathPossiblyUNC@@YA_KPEADPEBD_KH@Z(outPath, path, pathLen, slash);
}

/*
==============
IWString_EscapeCString
==============
*/

unsigned __int64 __fastcall IWString_EscapeCString(char *outText, const char *inText, unsigned __int64 inTextLen)
{
  return ?IWString_EscapeCString@@YA_KPEADPEBD_K@Z(outText, inText, inTextLen);
}

/*
==============
IWString_FormatTable_GetColumnWidths
==============
*/

void __fastcall IWString_FormatTable_GetColumnWidths(unsigned int *outColumnWidths, char *tempRowText, unsigned __int64 tempRowTextSize, const IWString_FormatTable_Column *columns, unsigned int columnCount, unsigned int rowCount, const void *userContext, bool printHeader)
{
  ?IWString_FormatTable_GetColumnWidths@@YAXPEAIPEAD_KPEBUIWString_FormatTable_Column@@IIPEBX_N@Z(outColumnWidths, tempRowText, tempRowTextSize, columns, columnCount, rowCount, userContext, printHeader);
}

/*
==============
IWString_NormalizePath
==============
*/

unsigned __int64 __fastcall IWString_NormalizePath(char *outPath, const char *path, unsigned __int64 pathLen, int slash)
{
  return ?IWString_NormalizePath@@YA_KPEADPEBD_KH@Z(outPath, path, pathLen, slash);
}

/*
==============
IWString_FromHex6
==============
*/

bool __fastcall IWString_FromHex6(unsigned int *outValue, const char *text)
{
  return ?IWString_FromHex6@@YA_NPEAIPEBD@Z(outValue, text);
}

/*
==============
IWString_FindToLowerText
==============
*/

const char *__fastcall IWString_FindToLowerText(const char *text, unsigned __int64 textLen, const char *key, unsigned __int64 keyLen)
{
  return ?IWString_FindToLowerText@@YAPEBDPEBD_K01@Z(text, textLen, key, keyLen);
}

/*
==============
IWString_FormatTable
==============
*/

void __fastcall IWString_FormatTable(char *tempRowText, unsigned __int64 tempRowTextSize, const IWString_FormatTable_Column *columns, unsigned int columnCount, unsigned int rowCount, const void *userContext, const IWString_FormatTable_Config *formatTableConfig, const unsigned int *columnWidths, const unsigned int *optionalRowOrder)
{
  ?IWString_FormatTable@@YAXPEAD_KPEBUIWString_FormatTable_Column@@IIPEBXPEBUIWString_FormatTable_Config@@PEBI5@Z(tempRowText, tempRowTextSize, columns, columnCount, rowCount, userContext, formatTableConfig, columnWidths, optionalRowOrder);
}

/*
==============
IWString_AppendUnsignedDecimal
==============
*/

char *__fastcall IWString_AppendUnsignedDecimal(char *outText, unsigned __int64 value)
{
  return ?IWString_AppendUnsignedDecimal@@YAPEADPEAD_K@Z(outText, value);
}

/*
==============
IWString_FromHex4
==============
*/

bool __fastcall IWString_FromHex4(unsigned __int16 *outValue, const char *text)
{
  return ?IWString_FromHex4@@YA_NPEAGPEBD@Z(outValue, text);
}

/*
==============
IWString_ToHex4
==============
*/

void __fastcall IWString_ToHex4(char *outText, unsigned int value)
{
  ?IWString_ToHex4@@YAXPEADI@Z(outText, value);
}

/*
==============
IWString_GetSignedDecimalLength
==============
*/

unsigned int __fastcall IWString_GetSignedDecimalLength(__int64 value)
{
  return ?IWString_GetSignedDecimalLength@@YAI_J@Z(value);
}

/*
==============
IWString_FromHex16
==============
*/

bool __fastcall IWString_FromHex16(unsigned __int64 *outValue, const char *text)
{
  return ?IWString_FromHex16@@YA_NPEA_KPEBD@Z(outValue, text);
}

/*
==============
IWString_AppendSignedDecimal
==============
*/

char *__fastcall IWString_AppendSignedDecimal(char *outText, __int64 value)
{
  return ?IWString_AppendSignedDecimal@@YAPEADPEAD_J@Z(outText, value);
}

/*
==============
IWString_AppendUnsignedDecimalWithLeadingZeros
==============
*/

char *__fastcall IWString_AppendUnsignedDecimalWithLeadingZeros(char *outText, unsigned int value, unsigned int lenMin)
{
  return ?IWString_AppendUnsignedDecimalWithLeadingZeros@@YAPEADPEADII@Z(outText, value, lenMin);
}

/*
==============
IWString_ToSignedDecimal
==============
*/

void __fastcall IWString_ToSignedDecimal(char *outText, unsigned int valueTextLen, int value)
{
  ?IWString_ToSignedDecimal@@YAXPEADIH@Z(outText, valueTextLen, value);
}

/*
==============
IWString_MatchWildcardCI
==============
*/

bool __fastcall IWString_MatchWildcardCI(const char *text, unsigned __int64 textLen, const char *wildcardExpression, unsigned __int64 wildcardExpressionLen)
{
  return ?IWString_MatchWildcardCI@@YA_NPEBD_K01@Z(text, textLen, wildcardExpression, wildcardExpressionLen);
}

/*
==============
IWString_UnescapeCString
==============
*/

unsigned __int64 __fastcall IWString_UnescapeCString(char *outText, const char *inText, unsigned __int64 inTextLen)
{
  return ?IWString_UnescapeCString@@YA_KPEADPEBD_K@Z(outText, inText, inTextLen);
}

/*
==============
IWString_AppendSignedDecimal
==============
*/
char *IWString_AppendSignedDecimal(char *outText, int value)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = -value;
  if ( value >= 0 )
    v2 = value;
  if ( v2 < 0x186A0 )
  {
    if ( v2 < 0x64 )
    {
      v3 = 2 - (v2 < 0xA);
    }
    else if ( v2 < 0x3E8 )
    {
      v3 = 3;
    }
    else
    {
      v3 = 5 - (v2 < 0x2710);
    }
  }
  else if ( v2 < 0x989680 )
  {
    v3 = 7 - (v2 < 0xF4240);
  }
  else if ( v2 < 0x5F5E100 )
  {
    v3 = 8;
  }
  else
  {
    v3 = 10 - (v2 < 0x3B9ACA00);
  }
  if ( value < 0 )
    *outText++ = 45;
  return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, v2, v3);
}

/*
==============
IWString_AppendSignedDecimal
==============
*/
char *IWString_AppendSignedDecimal(char *outText, __int64 value)
{
  __int64 v2; 
  unsigned int v3; 

  v2 = -value;
  if ( value >= 0 )
    v2 = value;
  if ( (unsigned int)v2 < 0x186A0 )
  {
    if ( (unsigned int)v2 < 0x64 )
    {
      v3 = 2 - ((unsigned int)v2 < 0xA);
    }
    else if ( (unsigned int)v2 < 0x3E8 )
    {
      v3 = 3;
    }
    else
    {
      v3 = 5 - ((unsigned int)v2 < 0x2710);
    }
  }
  else if ( (unsigned int)v2 < 0x989680 )
  {
    v3 = 7 - ((unsigned int)v2 < 0xF4240);
  }
  else if ( (unsigned int)v2 < 0x5F5E100 )
  {
    v3 = 8;
  }
  else
  {
    v3 = 10 - ((unsigned int)v2 < 0x3B9ACA00);
  }
  if ( value < 0 )
    *outText++ = 45;
  return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, v2, v3);
}

/*
==============
IWString_AppendUnsignedDecimal
==============
*/
char *IWString_AppendUnsignedDecimal(char *outText, unsigned int value)
{
  if ( value < 0x186A0 )
  {
    if ( value < 0x64 )
    {
      return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, value, 2 - (unsigned int)(value < 0xA));
    }
    else if ( value < 0x3E8 )
    {
      return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, value, 3u);
    }
    else
    {
      return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, value, 5 - (unsigned int)(value < 0x2710));
    }
  }
  else if ( value < 0x989680 )
  {
    return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, value, 7 - (unsigned int)(value < 0xF4240));
  }
  else if ( value < 0x5F5E100 )
  {
    return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, value, 8u);
  }
  else
  {
    return IWString_AppendUnsignedDecimalT_unsigned_int_(outText, value, 10 - (unsigned int)(value < 0x3B9ACA00));
  }
}

/*
==============
IWString_AppendUnsignedDecimal
==============
*/
char *IWString_AppendUnsignedDecimal(char *outText, unsigned __int64 value)
{
  if ( value < 0x2540BE400i64 )
  {
    if ( value < 0x186A0 )
    {
      if ( value < 0x64 )
      {
        return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 2 - (unsigned int)(value < 0xA));
      }
      else if ( value < 0x3E8 )
      {
        return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 3u);
      }
      else
      {
        return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 5 - (unsigned int)(value < 0x2710));
      }
    }
    else if ( value < 0x989680 )
    {
      return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 7 - (unsigned int)(value < 0xF4240));
    }
    else if ( value < 0x5F5E100 )
    {
      return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 8u);
    }
    else
    {
      return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 10 - (unsigned int)(value < 0x3B9ACA00));
    }
  }
  else if ( value < 0x38D7EA4C68000i64 )
  {
    if ( value < 0xE8D4A51000i64 )
    {
      return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 12 - (unsigned int)(value < 0x174876E800i64));
    }
    else if ( value < 0x9184E72A000i64 )
    {
      return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 0xDu);
    }
    else
    {
      return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 15 - (unsigned int)(value < 0x5AF3107A4000i64));
    }
  }
  else if ( value < 0x16345785D8A0000i64 )
  {
    return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 17 - (unsigned int)(value < 0x2386F26FC10000i64));
  }
  else if ( value < 0xDE0B6B3A7640000i64 )
  {
    return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 0x12u);
  }
  else
  {
    return IWString_AppendUnsignedDecimalT_unsigned___int64_(outText, value, 20 - (unsigned int)(value < 0x8AC7230489E80000ui64));
  }
}

/*
==============
IWString_AppendUnsignedDecimalWithLeadingZeros
==============
*/
char *IWString_AppendUnsignedDecimalWithLeadingZeros(char *outText, unsigned int value, unsigned int lenMin)
{
  char *v4; 
  int v5; 
  int v6; 
  __int64 v7; 

  v4 = outText;
  if ( value < 0x186A0 )
  {
    if ( value < 0x64 )
    {
      v5 = 2 - (value < 0xA);
    }
    else if ( value < 0x3E8 )
    {
      v5 = 3;
    }
    else
    {
      v5 = 5 - (value < 0x2710);
    }
  }
  else if ( value < 0x989680 )
  {
    v5 = 7 - (value < 0xF4240);
  }
  else if ( value < 0x5F5E100 )
  {
    v5 = 8;
  }
  else
  {
    v5 = 10 - (value < 0x3B9ACA00);
  }
  v6 = lenMin - v5;
  if ( v6 > 0 )
  {
    v7 = v6;
    memset_0(outText, 48, v6);
    v4 += v7;
  }
  return IWString_AppendUnsignedDecimalT_unsigned_int_(v4, value, v5);
}

/*
==============
IWString_AppendUnsignedDecimalWithLeadingZeros
==============
*/
char *IWString_AppendUnsignedDecimalWithLeadingZeros(char *outText, unsigned __int64 value, unsigned int lenMin)
{
  char *v4; 
  int v5; 
  int v6; 
  __int64 v7; 

  v4 = outText;
  if ( value < 0x2540BE400i64 )
  {
    if ( value < 0x186A0 )
    {
      if ( value < 0x64 )
      {
        v5 = 2 - (value < 0xA);
      }
      else if ( value < 0x3E8 )
      {
        v5 = 3;
      }
      else
      {
        v5 = 5 - (value < 0x2710);
      }
    }
    else if ( value < 0x989680 )
    {
      v5 = 7 - (value < 0xF4240);
    }
    else if ( value < 0x5F5E100 )
    {
      v5 = 8;
    }
    else
    {
      v5 = 10 - (value < 0x3B9ACA00);
    }
  }
  else if ( value < 0x38D7EA4C68000i64 )
  {
    if ( value < 0xE8D4A51000i64 )
    {
      v5 = 12 - (value < 0x174876E800i64);
    }
    else if ( value < 0x9184E72A000i64 )
    {
      v5 = 13;
    }
    else
    {
      v5 = 15 - (value < 0x5AF3107A4000i64);
    }
  }
  else if ( value < 0x16345785D8A0000i64 )
  {
    v5 = 17 - (value < 0x2386F26FC10000i64);
  }
  else if ( value < 0xDE0B6B3A7640000i64 )
  {
    v5 = 18;
  }
  else
  {
    v5 = 20 - (value < 0x8AC7230489E80000ui64);
  }
  v6 = lenMin - v5;
  if ( v6 > 0 )
  {
    v7 = v6;
    memset_0(outText, 48, v6);
    v4 += v7;
  }
  return IWString_AppendUnsignedDecimalT_unsigned___int64_(v4, value, v5);
}

/*
==============
IWString_EscapeCString
==============
*/
signed __int64 IWString_EscapeCString(char *outText, const char *inText, unsigned __int64 inTextLen)
{
  const char *v3; 
  const char *v4; 
  char *i; 
  char v7; 
  char v8; 

  v3 = &inText[inTextLen];
  v4 = inText;
  if ( outText < &inText[inTextLen] && &outText[inTextLen] >= inText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 97, ASSERT_TYPE_ASSERT, "(outText >= inText + inTextLen || outText + inTextLen < inText)", (const char *)&queryFormat, "outText >= inText + inTextLen || outText + inTextLen < inText") )
    __debugbreak();
  for ( i = outText; v4 != v3; ++i )
  {
    v7 = *v4++;
    if ( (unsigned __int8)v7 < 0x60u && (v8 = s_IWString_EscapeCString_charRemapTable[v7]) != 0 )
    {
      *i++ = 92;
      *i = v8;
    }
    else
    {
      *i = v7;
    }
  }
  *i = 0;
  return i - outText;
}

/*
==============
IWString_FindText
==============
*/
const char *IWString_FindText(const char *text, unsigned __int64 textLen, const char *key, unsigned __int64 keyLen)
{
  const char *v5; 
  char v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  v5 = text;
  if ( !keyLen )
    return text;
  if ( !textLen )
    return 0i64;
  v7 = *key;
  v8 = &text[textLen];
  v9 = key + 1;
  if ( textLen >= keyLen )
  {
    do
    {
      v10 = v5;
      if ( v5 == v8 )
        break;
      while ( *v10 != v7 )
      {
        if ( ++v10 == v8 )
          return 0i64;
      }
      if ( !v10 )
        break;
      v5 = v10 + 1;
      if ( !memcmp_0(v10 + 1, v9, keyLen - 1) )
        return v10;
    }
    while ( v8 - v5 >= keyLen );
  }
  return 0i64;
}

/*
==============
IWString_FindToLowerText
==============
*/
const char *IWString_FindToLowerText(const char *text, unsigned __int64 textLen, const char *key, unsigned __int64 keyLen)
{
  const char *v5; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  v5 = text;
  if ( !keyLen )
    return text;
  if ( !textLen )
    return 0i64;
  v7 = *key;
  v8 = &text[textLen];
  v9 = key + 1;
  if ( textLen >= keyLen )
  {
    do
    {
      v10 = v5;
      if ( v5 == v8 )
        break;
      while ( *v10 + ((unsigned int)(*v10 - 65) < 0x1A ? 0x20 : 0) != v7 )
      {
        if ( ++v10 == v8 )
          return 0i64;
      }
      if ( !v10 )
        break;
      v5 = v10 + 1;
      if ( !memcmp_0(v10 + 1, v9, keyLen - 1) )
        return v10;
    }
    while ( v8 - v5 >= keyLen );
  }
  return 0i64;
}

/*
==============
IWString_FormatTable
==============
*/
void IWString_FormatTable(char *tempRowText, unsigned __int64 tempRowTextSize, const IWString_FormatTable_Column *columns, unsigned int columnCount, unsigned int rowCount, const void *userContext, const IWString_FormatTable_Config *formatTableConfig, const unsigned int *columnWidths, const unsigned int *optionalRowOrder)
{
  const IWString_FormatTable_Config *v12; 
  unsigned int v13; 
  void (__fastcall *EmitLine)(const char *, unsigned int, const void *); 
  const char *columnSeparator; 
  const char *linePrefix; 
  const char *lineSuffix; 
  char *v18; 
  const unsigned int *v19; 
  char topBorderChar; 
  __int64 v21; 
  unsigned int v22; 
  IWString_FormatTable_BorderCellAccessor v23; 
  IWString_FormatTable_RowCellAccessor cellAccessor; 
  char *v25; 
  char *v26; 
  char *v27; 

  v12 = formatTableConfig;
  v13 = columnCount;
  EmitLine = formatTableConfig->EmitLine;
  columnSeparator = formatTableConfig->columnSeparator;
  linePrefix = formatTableConfig->linePrefix;
  lineSuffix = formatTableConfig->lineSuffix;
  v25 = (char *)columnSeparator;
  v27 = (char *)linePrefix;
  v26 = (char *)lineSuffix;
  if ( !EmitLine )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 918, ASSERT_TYPE_ASSERT, "(EmitLine)", (const char *)&queryFormat, "EmitLine") )
      __debugbreak();
    lineSuffix = v26;
    linePrefix = v27;
    columnSeparator = v25;
  }
  v18 = &tempRowText[tempRowTextSize];
  v19 = columnWidths;
  if ( formatTableConfig->printHeader )
    IWString_FormatTable_EmitLine_IWString_FormatTable_HeaderCellAccessor_(tempRowText, v18, columns, v13, userContext, columnWidths, columnSeparator, linePrefix, lineSuffix, EmitLine, formatTableConfig->headerJustify, (IWString_FormatTable_HeaderCellAccessor)rowCount);
  topBorderChar = formatTableConfig->topBorderChar;
  if ( topBorderChar )
    IWString_FormatTable_EmitLine_IWString_FormatTable_BorderCellAccessor_(tempRowText, v18, columns, v13, userContext, columnWidths, v25, v27, v26, EmitLine, IWString_Justify_Left, (IWString_FormatTable_BorderCellAccessor)topBorderChar);
  v21 = 0i64;
  if ( rowCount )
  {
    do
    {
      if ( optionalRowOrder )
        v22 = optionalRowOrder[v21];
      else
        v22 = v21;
      if ( v22 >= rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 934, ASSERT_TYPE_ASSERT, "(reorderedRowIndex < rowCount)", (const char *)&queryFormat, "reorderedRowIndex < rowCount") )
        __debugbreak();
      cellAccessor.rowIndex = v22;
      v19 = columnWidths;
      IWString_FormatTable_EmitLine_IWString_FormatTable_RowCellAccessor_(tempRowText, v18, columns, columnCount, userContext, columnWidths, v25, v27, v26, EmitLine, IWString_Justify_INVALID, cellAccessor);
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (_DWORD)v21 != rowCount );
    v12 = formatTableConfig;
    v13 = columnCount;
  }
  v23.borderChar = v12->bottomBorderChar;
  if ( v23.borderChar )
    IWString_FormatTable_EmitLine_IWString_FormatTable_BorderCellAccessor_(tempRowText, v18, columns, v13, userContext, v19, v25, v27, v26, EmitLine, IWString_Justify_Left, v23);
}

/*
==============
IWString_FormatTable_GetColumnWidths
==============
*/
void IWString_FormatTable_GetColumnWidths(unsigned int *outColumnWidths, char *tempRowText, unsigned __int64 tempRowTextSize, const IWString_FormatTable_Column *columns, unsigned int columnCount, unsigned int rowCount, const void *userContext, bool printHeader)
{
  __int64 v8; 
  const IWString_FormatTable_Column *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int (__fastcall *GetText)(char *, unsigned int, unsigned int, const void *); 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  const IWString_FormatTable_Column *v19; 

  v19 = columns;
  v8 = 0i64;
  if ( columnCount )
  {
    do
    {
      v11 = &columns[v8];
      v12 = (unsigned int)v8;
      if ( printHeader )
      {
        v13 = -1i64;
        do
          ++v13;
        while ( v11->headerName[v13] );
      }
      else
      {
        LODWORD(v13) = 0;
      }
      GetText = v11->GetText;
      if ( !GetText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 824, ASSERT_TYPE_ASSERT, "(GetText)", (const char *)&queryFormat, "GetText") )
        __debugbreak();
      v15 = 0;
      if ( rowCount )
      {
        do
        {
          v16 = GetText(tempRowText, v8, v15, userContext);
          v17 = v16;
          if ( (unsigned int)v13 > v16 )
            v16 = v13;
          LODWORD(v13) = v16;
          if ( v17 >= tempRowTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 829, ASSERT_TYPE_ASSERT, "(cellTextLen < tempRowTextSize)", (const char *)&queryFormat, "cellTextLen < tempRowTextSize") )
            __debugbreak();
          ++v15;
        }
        while ( v15 != rowCount );
        v12 = (unsigned int)v8;
      }
      columns = v19;
      v8 = (unsigned int)(v8 + 1);
      outColumnWidths[v12] = v13;
    }
    while ( (_DWORD)v8 != columnCount );
  }
}

/*
==============
IWString_FormatTable_GetJustifyOffset
==============
*/
__int64 IWString_FormatTable_GetJustifyOffset(unsigned int columnWidth, unsigned int textLen, IWString_Justify justify)
{
  if ( textLen > columnWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 800, ASSERT_TYPE_ASSERT, "(textLen <= columnWidth)", (const char *)&queryFormat, "textLen <= columnWidth") )
    __debugbreak();
  if ( justify == IWString_Justify_Left )
    return 0i64;
  if ( justify == IWString_Justify_Center )
    return (columnWidth - textLen) >> 1;
  if ( justify != IWString_Justify_Right )
  {
    CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 810, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
    __debugbreak();
  }
  return columnWidth - textLen;
}

/*
==============
IWString_FromHex16
==============
*/
char IWString_FromHex16(unsigned __int64 *outValue, const char *text)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  int v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v46; 
  unsigned int v48; 
  unsigned int v49; 

  v2 = *text;
  v3 = 87;
  v4 = text[2];
  v5 = text[3];
  v6 = 87;
  v7 = text[4];
  v8 = 87;
  v9 = text[5];
  v10 = text[6];
  v11 = text[7];
  v12 = text[8];
  if ( (unsigned int)(v2 - 48) < 0xA )
    v6 = 48;
  v13 = text[9];
  v14 = v2 - v6;
  v15 = text[1];
  if ( (unsigned int)(v15 - 48) < 0xA )
    v8 = 48;
  v16 = v15 - v8;
  v17 = 87;
  if ( (unsigned int)(v4 - 48) < 0xA )
    v17 = 48;
  v18 = v4 - v17;
  v19 = 87;
  if ( (unsigned int)(v5 - 48) < 0xA )
    v19 = 48;
  v20 = v5 - v19;
  v21 = 87;
  if ( (unsigned int)(v7 - 48) < 0xA )
    v21 = 48;
  v22 = v7 - v21;
  v23 = 87;
  if ( (unsigned int)(v9 - 48) < 0xA )
    v23 = 48;
  v24 = v9 - v23;
  v25 = 87;
  if ( (unsigned int)(v10 - 48) < 0xA )
    v25 = 48;
  v26 = v10 - v25;
  v27 = 87;
  if ( (unsigned int)(v11 - 48) < 0xA )
    v27 = 48;
  v28 = v11 - v27;
  v29 = 87;
  if ( (unsigned int)(v12 - 48) < 0xA )
    v29 = 48;
  v30 = v12 - v29;
  v31 = 87;
  if ( (unsigned int)(v13 - 48) < 0xA )
    v31 = 48;
  v32 = text[10];
  v33 = v13 - v31;
  v34 = 87;
  if ( (unsigned int)(v32 - 48) < 0xA )
    v34 = 48;
  v35 = v32 - v34;
  v36 = 87;
  if ( (unsigned int)(text[11] - 48) < 0xA )
    v36 = 48;
  v37 = text[11] - v36;
  v38 = 87;
  v46 = v37;
  if ( (unsigned int)(text[12] - 48) < 0xA )
    v38 = 48;
  v39 = text[12] - v38;
  v40 = 87;
  v49 = v39;
  if ( (unsigned int)(text[13] - 48) < 0xA )
    v40 = 48;
  v41 = text[13] - v40;
  v42 = 87;
  v48 = v41;
  if ( (unsigned int)(text[14] - 48) < 0xA )
    v42 = 48;
  v43 = text[14] - v42;
  v44 = text[15];
  if ( (unsigned int)(v44 - 48) < 0xA )
    v3 = 48;
  if ( (v14 | v16 | v18 | v20 | v22 | v24 | v26 | v28 | v30 | v33 | v35 | v46 | v49 | v48 | v43 | (v44 - v3)) > 0xF )
    return 0;
  *outValue = (unsigned int)(v44 - v3) | (16 * (v43 | (16 * (v48 | (16 * (v49 | (16 * (v46 | (16 * (v35 | (16 * (v33 | (16 * (v30 | (16 * (v28 | (16 * (v26 | (16 * (v24 | (16 * (v22 | (16 * (v20 | (16 * (v18 | (16 * (v16 | (16i64 * v14)))))))))))))))))))))))))))));
  return 1;
}

/*
==============
IWString_FromHex2
==============
*/
bool IWString_FromHex2(unsigned __int8 *outValue, const char *text)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  bool result; 

  v2 = *text;
  v3 = 87;
  v4 = 87;
  if ( (unsigned int)(v2 - 48) < 0xA )
    v4 = 48;
  v5 = v2 - v4;
  v6 = text[1];
  if ( (unsigned int)(v6 - 48) < 0xA )
    v3 = 48;
  v7 = v6 - v3;
  if ( (v5 | v7) > 0xF )
    return 0;
  result = 1;
  *outValue = v7 | (16 * v5);
  return result;
}

/*
==============
IWString_FromHex4
==============
*/
bool IWString_FromHex4(unsigned __int16 *outValue, const char *text)
{
  int v2; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  bool result; 

  v2 = *text;
  v4 = text[2];
  v5 = 87;
  v6 = 87;
  v7 = 87;
  if ( (unsigned int)(v2 - 48) < 0xA )
    v6 = 48;
  v8 = v2 - v6;
  v9 = text[1];
  if ( (unsigned int)(v9 - 48) < 0xA )
    v7 = 48;
  v10 = v9 - v7;
  v11 = 87;
  if ( (unsigned int)(v4 - 48) < 0xA )
    v11 = 48;
  v12 = v4 - v11;
  v13 = text[3];
  if ( (unsigned int)(v13 - 48) < 0xA )
    v5 = 48;
  v14 = v13 - v5;
  if ( (v8 | v10 | v12 | v14) > 0xF )
    return 0;
  result = 1;
  *outValue = v14 | (16 * (v12 | (16 * (v10 | (16 * v8)))));
  return result;
}

/*
==============
IWString_FromHex6
==============
*/
bool IWString_FromHex6(unsigned int *outValue, const char *text)
{
  int v2; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  bool result; 

  v2 = *text;
  v4 = text[2];
  v5 = 87;
  v6 = text[3];
  v7 = text[4];
  v8 = 87;
  v9 = 87;
  if ( (unsigned int)(v2 - 48) < 0xA )
    v8 = 48;
  v10 = v2 - v8;
  v11 = text[1];
  if ( (unsigned int)(v11 - 48) < 0xA )
    v9 = 48;
  v12 = v11 - v9;
  v13 = 87;
  if ( (unsigned int)(v4 - 48) < 0xA )
    v13 = 48;
  v14 = v4 - v13;
  v15 = 87;
  if ( (unsigned int)(v6 - 48) < 0xA )
    v15 = 48;
  v16 = v6 - v15;
  v17 = 87;
  if ( (unsigned int)(v7 - 48) < 0xA )
    v17 = 48;
  v18 = v7 - v17;
  v19 = text[5];
  if ( (unsigned int)(v19 - 48) < 0xA )
    v5 = 48;
  v20 = v19 - v5;
  if ( (v10 | v12 | v14 | v16 | v18 | v20) > 0xF )
    return 0;
  result = 1;
  *outValue = v20 | (16 * (v18 | (16 * (v16 | (16 * (v14 | (16 * (v12 | (16 * v10)))))))));
  return result;
}

/*
==============
IWString_FromHex8
==============
*/
bool IWString_FromHex8(unsigned int *outValue, const char *text)
{
  int v2; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  unsigned int v26; 
  bool result; 

  v2 = *text;
  v4 = text[2];
  v5 = 87;
  v6 = text[3];
  v7 = text[4];
  v8 = 87;
  v9 = text[5];
  v10 = text[6];
  v11 = 87;
  if ( (unsigned int)(v2 - 48) < 0xA )
    v8 = 48;
  v12 = v2 - v8;
  v13 = text[1];
  if ( (unsigned int)(v13 - 48) < 0xA )
    v11 = 48;
  v14 = v13 - v11;
  v15 = 87;
  if ( (unsigned int)(v4 - 48) < 0xA )
    v15 = 48;
  v16 = v4 - v15;
  v17 = 87;
  if ( (unsigned int)(v6 - 48) < 0xA )
    v17 = 48;
  v18 = v6 - v17;
  v19 = 87;
  if ( (unsigned int)(v7 - 48) < 0xA )
    v19 = 48;
  v20 = v7 - v19;
  v21 = 87;
  if ( (unsigned int)(v9 - 48) < 0xA )
    v21 = 48;
  v22 = v9 - v21;
  v23 = 87;
  if ( (unsigned int)(v10 - 48) < 0xA )
    v23 = 48;
  v24 = v10 - v23;
  v25 = text[7];
  if ( (unsigned int)(v25 - 48) < 0xA )
    v5 = 48;
  v26 = v25 - v5;
  if ( (v12 | v14 | v16 | v18 | v20 | v22 | v24 | v26) > 0xF )
    return 0;
  result = 1;
  *outValue = v26 | (16 * (v24 | (16 * (v22 | (16 * (v20 | (16 * (v18 | (16 * (v16 | (16 * (v14 | (16 * v12)))))))))))));
  return result;
}

/*
==============
IWString_FromUnsignedDecimal
==============
*/
const char *IWString_FromUnsignedDecimal(unsigned int *outValue, const char *text, const char *textEnd)
{
  unsigned int v3; 
  int v4; 
  const char *v5; 
  unsigned int i; 

  if ( text == textEnd )
    return 0i64;
  v3 = *text - 48;
  if ( v3 > 9 )
    return 0i64;
  v4 = text[1];
  v5 = text + 1;
  for ( i = v4 - 48; i <= 9; i = *v5 - 48 )
  {
    ++v5;
    v3 = i + 10 * v3;
  }
  *outValue = v3;
  return v5;
}

/*
==============
IWString_GetSignedDecimalLength
==============
*/
__int64 IWString_GetSignedDecimalLength(int value)
{
  unsigned int v1; 

  v1 = -value;
  if ( value >= 0 )
    v1 = value;
  if ( v1 < 0x186A0 )
  {
    if ( v1 < 0x64 )
    {
      return 2 - (v1 < 0xA) + (unsigned int)(value < 0);
    }
    else if ( v1 < 0x3E8 )
    {
      return (unsigned int)(value < 0) + 3;
    }
    else
    {
      return 5 - (v1 < 0x2710) + (unsigned int)(value < 0);
    }
  }
  else if ( v1 < 0x989680 )
  {
    return 7 - (v1 < 0xF4240) + (unsigned int)(value < 0);
  }
  else if ( v1 < 0x5F5E100 )
  {
    return (unsigned int)(value < 0) + 8;
  }
  else
  {
    return 10 - (v1 < 0x3B9ACA00) + (unsigned int)(value < 0);
  }
}

/*
==============
IWString_GetSignedDecimalLength
==============
*/
__int64 IWString_GetSignedDecimalLength(__int64 value)
{
  unsigned __int64 v1; 

  v1 = -value;
  if ( value >= 0 )
    v1 = value;
  if ( v1 < 0x2540BE400i64 )
  {
    if ( v1 < 0x186A0 )
    {
      if ( v1 < 0x64 )
      {
        return 2 - (v1 < 0xA) + (unsigned int)(value < 0);
      }
      else if ( v1 < 0x3E8 )
      {
        return (unsigned int)(value < 0) + 3;
      }
      else
      {
        return 5 - (v1 < 0x2710) + (unsigned int)(value < 0);
      }
    }
    else if ( v1 < 0x989680 )
    {
      return 7 - (v1 < 0xF4240) + (unsigned int)(value < 0);
    }
    else if ( v1 < 0x5F5E100 )
    {
      return (unsigned int)(value < 0) + 8;
    }
    else
    {
      return 10 - (v1 < 0x3B9ACA00) + (unsigned int)(value < 0);
    }
  }
  else if ( v1 < 0x38D7EA4C68000i64 )
  {
    if ( v1 < 0xE8D4A51000i64 )
    {
      return 12 - (v1 < 0x174876E800i64) + (unsigned int)(value < 0);
    }
    else if ( v1 < 0x9184E72A000i64 )
    {
      return (unsigned int)(value < 0) + 13;
    }
    else
    {
      return 15 - (v1 < 0x5AF3107A4000i64) + (unsigned int)(value < 0);
    }
  }
  else if ( v1 < 0x16345785D8A0000i64 )
  {
    return 17 - (v1 < 0x2386F26FC10000i64) + (unsigned int)(value < 0);
  }
  else if ( v1 < 0xDE0B6B3A7640000i64 )
  {
    return (unsigned int)(value < 0) + 18;
  }
  else
  {
    return 20 - (v1 < 0x8AC7230489E80000ui64) + (unsigned int)(value < 0);
  }
}

/*
==============
IWString_GetUnsignedDecimalLength
==============
*/
__int64 IWString_GetUnsignedDecimalLength(unsigned int value)
{
  if ( value < 0x186A0 )
  {
    if ( value < 0x64 )
    {
      return 2 - (unsigned int)(value < 0xA);
    }
    else if ( value < 0x3E8 )
    {
      return 3i64;
    }
    else
    {
      return 5 - (unsigned int)(value < 0x2710);
    }
  }
  else if ( value < 0x989680 )
  {
    return 7 - (unsigned int)(value < 0xF4240);
  }
  else if ( value < 0x5F5E100 )
  {
    return 8i64;
  }
  else
  {
    return 10 - (unsigned int)(value < 0x3B9ACA00);
  }
}

/*
==============
IWString_GetUnsignedDecimalLength
==============
*/
__int64 IWString_GetUnsignedDecimalLength(unsigned __int64 value)
{
  if ( value < 0x2540BE400i64 )
  {
    if ( value < 0x186A0 )
    {
      if ( value < 0x64 )
      {
        return 2 - (unsigned int)(value < 0xA);
      }
      else if ( value < 0x3E8 )
      {
        return 3i64;
      }
      else
      {
        return 5 - (unsigned int)(value < 0x2710);
      }
    }
    else if ( value < 0x989680 )
    {
      return 7 - (unsigned int)(value < 0xF4240);
    }
    else if ( value < 0x5F5E100 )
    {
      return 8i64;
    }
    else
    {
      return 10 - (unsigned int)(value < 0x3B9ACA00);
    }
  }
  else if ( value < 0x38D7EA4C68000i64 )
  {
    if ( value < 0xE8D4A51000i64 )
    {
      return 12 - (unsigned int)(value < 0x174876E800i64);
    }
    else if ( value < 0x9184E72A000i64 )
    {
      return 13i64;
    }
    else
    {
      return 15 - (unsigned int)(value < 0x5AF3107A4000i64);
    }
  }
  else if ( value < 0x16345785D8A0000i64 )
  {
    return 17 - (unsigned int)(value < 0x2386F26FC10000i64);
  }
  else if ( value < 0xDE0B6B3A7640000i64 )
  {
    return 18i64;
  }
  else
  {
    return 20 - (unsigned int)(value < 0x8AC7230489E80000ui64);
  }
}

/*
==============
IWString_MatchWildcardCI
==============
*/
char IWString_MatchWildcardCI(const char *text, unsigned __int64 textLen, const char *wildcardExpression, unsigned __int64 wildcardExpressionLen)
{
  const char *v4; 
  const char *v5; 
  const char *v6; 
  int v7; 
  const char *v9; 
  unsigned __int64 v10; 
  const char *v11; 

  v4 = &wildcardExpression[wildcardExpressionLen];
  v5 = text;
  v6 = &text[textLen];
  if ( wildcardExpression == &wildcardExpression[wildcardExpressionLen] )
    return v5 == v6;
  while ( 1 )
  {
    v7 = *wildcardExpression;
    if ( v7 == 42 )
      break;
    if ( v5 == v6 || v7 != 63 && *v5 + ((unsigned int)(*v5 - 65) < 0x1A ? 0x20 : 0) != v7 + ((unsigned int)(v7 - 65) < 0x1A ? 0x20 : 0) )
      return 0;
    ++v5;
    if ( ++wildcardExpression == v4 )
      return v5 == v6;
  }
  v9 = wildcardExpression + 1;
  v10 = v4 - (wildcardExpression + 1);
  if ( v10 )
  {
    v11 = &text[textLen];
    if ( v6 < v5 )
      return 0;
    while ( !IWString_MatchWildcardCI(v11, v6 - v11, v9, v10) )
    {
      if ( --v11 < v5 )
        return 0;
    }
  }
  return 1;
}

/*
==============
IWString_NormalizePath
==============
*/
signed __int64 IWString_NormalizePath(char *outPath, const char *path, unsigned __int64 pathLen, int slash)
{
  const char *v6; 
  char *v9; 
  __int64 v10; 
  const char *v11; 
  const char *i; 
  int v13; 
  bool v14; 
  signed __int64 v15; 
  char *v16; 
  bool v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  char *v20; 

  v6 = path;
  if ( outPath == path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 501, ASSERT_TYPE_ASSERT, "(outPath != path)", (const char *)&queryFormat, "outPath != path") )
    __debugbreak();
  if ( IWString_IsUNCPath(v6, pathLen) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 502, ASSERT_TYPE_ASSERT, "(!IWString_IsUNCPath( path, pathLen ))", (const char *)&queryFormat, "!IWString_IsUNCPath( path, pathLen )") )
    __debugbreak();
  if ( !pathLen )
    return 0i64;
  v9 = outPath;
  v10 = 0x100002200i64;
  v11 = &v6[pathLen];
  for ( i = v6; i != v11; ++i )
  {
    if ( *i > 0x20u )
      break;
    if ( !_bittest64(&v10, *i) )
      break;
  }
  while ( 1 )
  {
    v13 = i == v11 ? 0 : *i;
    v14 = v13 == 47 || v13 == 92;
    if ( i == v11 || v14 )
      break;
LABEL_26:
    ++i;
  }
  v15 = i - v6;
  if ( i != v6 )
  {
    if ( v15 == 1 )
    {
      if ( *v6 == 46 )
        goto LABEL_24;
      goto LABEL_21;
    }
    if ( v15 != 2 || *v6 != 46 || v6[1] != 46 )
    {
LABEL_21:
      memcpy_0(v9, v6, i - v6);
      v9 += v15;
      if ( v14 && i + 1 != v11 )
        *v9++ = slash;
      goto LABEL_24;
    }
    if ( v9 != outPath && --v9 != outPath )
    {
      do
      {
        v16 = v9 - 1;
        if ( *(v9 - 1) == slash )
          break;
        --v9;
      }
      while ( v16 != outPath );
    }
  }
LABEL_24:
  if ( i != v11 )
  {
    v6 = i + 1;
    goto LABEL_26;
  }
  v17 = outPath == v9;
  if ( outPath > v9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.h", 601, ASSERT_TYPE_ASSERT, "(begin <= end)", (const char *)&queryFormat, "begin <= end") )
      __debugbreak();
    v17 = outPath == v9;
  }
  if ( !v17 )
  {
    v18 = 0x100002200i64;
    do
    {
      v19 = *(v9 - 1);
      v20 = v9 - 1;
      if ( v19 > 0x20u )
        break;
      if ( !_bittest64(&v18, (char)v19) )
        break;
      --v9;
    }
    while ( outPath != v20 );
  }
  *v9 = 0;
  return v9 - outPath;
}

/*
==============
IWString_NormalizePathPossiblyUNC
==============
*/
unsigned __int64 IWString_NormalizePathPossiblyUNC(char *outPath, const char *path, unsigned __int64 pathLen, int slash)
{
  char *v4; 

  v4 = outPath;
  if ( pathLen >= 2 && (*path == 47 || *path == 92) && (path[1] == 47 || path[1] == 92) )
  {
    *outPath = slash;
    outPath[1] = slash;
    path += 2;
    v4 = outPath + 2;
    pathLen -= 2i64;
  }
  return v4 - outPath + IWString_NormalizePath(v4, path, pathLen, (unsigned __int8)slash);
}

/*
==============
IWString_ParseFloat64
==============
*/

const char *__fastcall IWString_ParseFloat64(long double *outValue, const char *text, unsigned __int64 textLen, double _XMM3_8)
{
  char v5; 
  const char *v6; 
  __int64 v7; 
  const char *i; 
  int v9; 
  unsigned int v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  const char *v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 

  _RSI = outValue;
  if ( !textLen )
    return 0i64;
  v5 = *text;
  v6 = &text[textLen];
  v7 = 0i64;
  i = &text[((*text - 43) & 0xFD) == 0];
  v9 = 0;
  v10 = 0;
  v11 = NULL;
  if ( i == v6 )
    return 0i64;
  do
  {
    v12 = *i;
    v13 = (unsigned int)(v12 - 48);
    if ( (unsigned int)v13 < 0xA )
    {
      if ( v10 >= 0x13 )
      {
        ++v9;
        ++v10;
      }
      else
      {
        ++v10;
        v7 = v13 + 10 * v7;
      }
      continue;
    }
    if ( v11 || v12 != 46 )
      break;
    v11 = i;
  }
  while ( ++i != v6 );
  if ( !v10 )
    return 0i64;
  if ( v11 )
    v9 += (_DWORD)v11 - (_DWORD)i + 1;
  if ( i == v6 || *i + ((unsigned int)(*i - 65) < 0x1A ? 0x20 : 0) != 101 )
    goto LABEL_26;
  v14 = i + 1;
  if ( v14 == v6 )
    return 0i64;
  v15 = *v14;
  v16 = &v14[((*v14 - 43) & 0xFD) == 0];
  if ( v16 == v6 )
    return 0i64;
  v17 = *v16 - 48;
  if ( v17 > 9 )
    return 0i64;
  for ( i = v16 + 1; i != v6; ++i )
  {
    v18 = *i - 48;
    if ( v18 > 9 )
      break;
    v17 = v18 + 10 * v17;
    if ( v17 > 0x8000 )
      return 0i64;
  }
  v19 = -v17;
  if ( v15 != 45 )
    v19 = v17;
  v9 += v19;
LABEL_26:
  if ( !v7 )
  {
    *_RSI = 0.0;
    return i;
  }
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2sd xmm3, xmm3, rdi
  }
  if ( v7 < 0 )
    __asm { vaddsd  xmm3, xmm3, cs:__real@43f0000000000000 }
  _RAX = 45i64;
  __asm
  {
    vxorpd  xmm2, xmm3, cs:__xmm@80000000000000008000000000000000
    vmovq   xmm1, rax
  }
  _RAX = v5;
  __asm
  {
    vmovq   xmm0, rax
    vpcmpeqq xmm1, xmm0, xmm1
    vblendvpd xmm4, xmm3, xmm2, xmm1
    vmovsd  [rsp+8+arg_10], xmm4
  }
  if ( !v9 )
  {
LABEL_39:
    __asm { vmovsd  qword ptr [rsi], xmm4 }
    return i;
  }
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v9 > 0x135 )
    {
      __asm
      {
        vmovsd  xmm0, cs:__real@7ff0000000000000
        vmulsd  xmm4, xmm4, xmm0
        vmovsd  qword ptr [rsi], xmm4
      }
      return i;
    }
    _RAX = v9;
    _RCX = s_powersOf10;
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+rax*8]
      vmulsd  xmm4, xmm4, xmm0
    }
    goto LABEL_39;
  }
  if ( (unsigned int)-v9 <= 0x135 )
  {
    _RAX = &s_powersOfOneOver10[-v9];
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmulsd  xmm4, xmm4, xmm0
      vmovsd  qword ptr [rsi], xmm4
    }
  }
  else
  {
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vmulsd  xmm4, xmm4, xmm0
      vmovsd  qword ptr [rsi], xmm4
    }
  }
  return i;
}

/*
==============
IWString_ToHex16
==============
*/
void IWString_ToHex16(char *outText, unsigned __int64 value)
{
  char v3; 
  char v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  char v8; 
  char v9; 
  unsigned __int64 v10; 
  char v11; 
  unsigned __int64 v12; 
  char v13; 
  char v14; 
  unsigned __int64 v15; 
  char v16; 
  char v17; 
  unsigned __int64 v18; 
  char v19; 
  char v20; 
  char v21; 
  char v22; 
  char v23; 
  unsigned __int64 v24; 
  char v25; 
  unsigned int v26; 
  char v27; 
  char v28; 
  unsigned __int64 v29; 
  char v30; 
  char v31; 
  unsigned int v32; 
  char v33; 
  unsigned int v34; 

  v3 = 87;
  v5 = 87;
  v6 = value >> 60;
  if ( (unsigned int)(value >> 60) < 0xA )
    v5 = 48;
  v7 = HIBYTE(value) & 0xF;
  *outText = v6 + v5;
  v8 = 87;
  if ( (unsigned int)v7 < 0xA )
    v8 = 48;
  outText[1] = v7 + v8;
  v9 = 87;
  v10 = (value >> 52) & 0xF;
  if ( (unsigned int)v10 < 0xA )
    v9 = 48;
  outText[2] = v10 + v9;
  v11 = 87;
  if ( (HIWORD(value) & 0xF) < 0xAu )
    v11 = 48;
  v12 = (value >> 44) & 0xF;
  outText[3] = (BYTE6(value) & 0xF) + v11;
  v13 = 87;
  if ( (unsigned int)v12 < 0xA )
    v13 = 48;
  v14 = v12 + v13;
  v15 = (value >> 40) & 0xF;
  outText[4] = v14;
  v16 = 87;
  if ( (unsigned int)v15 < 0xA )
    v16 = 48;
  v17 = v15 + v16;
  v18 = (value >> 36) & 0xF;
  outText[5] = v17;
  v19 = 87;
  if ( (unsigned int)v18 < 0xA )
    v19 = 48;
  outText[6] = v18 + v19;
  v20 = 87;
  if ( (BYTE4(value) & 0xFu) < 0xA )
    v20 = 48;
  outText[7] = (BYTE4(value) & 0xF) + v20;
  v21 = 87;
  if ( (unsigned int)value >> 28 < 0xA )
    v21 = 48;
  outText[8] = ((unsigned int)value >> 28) + v21;
  v22 = 87;
  if ( ((value >> 24) & 0xF) < 0xA )
    v22 = 48;
  outText[9] = (BYTE3(value) & 0xF) + v22;
  v23 = 87;
  v24 = (value >> 20) & 0xF;
  if ( (unsigned int)v24 < 0xA )
    v23 = 48;
  outText[10] = v24 + v23;
  v25 = 87;
  if ( ((value >> 16) & 0xF) < 0xA )
    v25 = 48;
  v26 = (unsigned __int16)value >> 12;
  outText[11] = (BYTE2(value) & 0xF) + v25;
  v27 = 87;
  if ( v26 < 0xA )
    v27 = 48;
  v28 = v26 + v27;
  v29 = (value >> 8) & 0xF;
  outText[12] = v28;
  v30 = 87;
  if ( (unsigned int)v29 < 0xA )
    v30 = 48;
  v31 = v29 + v30;
  v32 = (unsigned __int8)value >> 4;
  outText[13] = v31;
  v33 = 87;
  if ( v32 < 0xA )
    v33 = 48;
  v34 = value & 0xF;
  outText[14] = v32 + v33;
  if ( v34 < 0xA )
    v3 = 48;
  outText[15] = v34 + v3;
}

/*
==============
IWString_ToHex2
==============
*/
void IWString_ToHex2(char *outText, unsigned int value)
{
  char v2; 
  char v3; 
  unsigned int v4; 
  unsigned int v5; 

  v2 = 87;
  v3 = 87;
  v4 = (unsigned __int8)value >> 4;
  if ( v4 < 0xA )
    v3 = 48;
  v5 = value & 0xF;
  *outText = v4 + v3;
  if ( v5 < 0xA )
    v2 = 48;
  outText[1] = v5 + v2;
}

/*
==============
IWString_ToHex4
==============
*/
void IWString_ToHex4(char *outText, unsigned int value)
{
  char v3; 
  char v4; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 
  char v8; 
  unsigned int v9; 
  char v10; 
  unsigned int v11; 

  v3 = 87;
  v4 = 87;
  v5 = (unsigned __int16)value >> 12;
  if ( v5 < 0xA )
    v4 = 48;
  *outText = v5 + v4;
  v6 = 87;
  v7 = (value >> 8) & 0xF;
  if ( v7 < 0xA )
    v6 = 48;
  v8 = v7 + v6;
  v9 = (unsigned __int8)value >> 4;
  outText[1] = v8;
  v10 = 87;
  if ( v9 < 0xA )
    v10 = 48;
  v11 = value & 0xF;
  outText[2] = v9 + v10;
  if ( v11 < 0xA )
    v3 = 48;
  outText[3] = v11 + v3;
}

/*
==============
IWString_ToHex6
==============
*/
void IWString_ToHex6(char *outText, unsigned int value)
{
  char v3; 
  char v4; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 
  char v8; 
  char v9; 
  unsigned int v10; 
  char v11; 
  char v12; 
  unsigned int v13; 
  char v14; 
  unsigned int v15; 

  v3 = 87;
  v4 = 87;
  v5 = (value >> 20) & 0xF;
  if ( v5 < 0xA )
    v4 = 48;
  *outText = v5 + v4;
  v6 = 87;
  if ( (HIWORD(value) & 0xF) < 0xAu )
    v6 = 48;
  v7 = (unsigned __int16)value >> 12;
  outText[1] = (BYTE2(value) & 0xF) + v6;
  v8 = 87;
  if ( v7 < 0xA )
    v8 = 48;
  v9 = v7 + v8;
  v10 = (value >> 8) & 0xF;
  outText[2] = v9;
  v11 = 87;
  if ( v10 < 0xA )
    v11 = 48;
  v12 = v10 + v11;
  v13 = (unsigned __int8)value >> 4;
  outText[3] = v12;
  v14 = 87;
  if ( v13 < 0xA )
    v14 = 48;
  v15 = value & 0xF;
  outText[4] = v13 + v14;
  if ( v15 < 0xA )
    v3 = 48;
  outText[5] = v15 + v3;
}

/*
==============
IWString_ToHex8
==============
*/
void IWString_ToHex8(char *outText, unsigned int value)
{
  char v3; 
  char v5; 
  unsigned int v6; 
  unsigned int v7; 
  char v8; 
  char v9; 
  unsigned int v10; 
  char v11; 
  unsigned int v12; 
  char v13; 
  char v14; 
  unsigned int v15; 
  char v16; 
  char v17; 
  unsigned int v18; 
  char v19; 
  unsigned int v20; 

  v3 = 87;
  v5 = 87;
  v6 = value >> 28;
  if ( value >> 28 < 0xA )
    v5 = 48;
  v7 = HIBYTE(value) & 0xF;
  *outText = v6 + v5;
  v8 = 87;
  if ( v7 < 0xA )
    v8 = 48;
  outText[1] = v7 + v8;
  v9 = 87;
  v10 = (value >> 20) & 0xF;
  if ( v10 < 0xA )
    v9 = 48;
  outText[2] = v10 + v9;
  v11 = 87;
  if ( (HIWORD(value) & 0xF) < 0xAu )
    v11 = 48;
  v12 = (unsigned __int16)value >> 12;
  outText[3] = (BYTE2(value) & 0xF) + v11;
  v13 = 87;
  if ( v12 < 0xA )
    v13 = 48;
  v14 = v12 + v13;
  v15 = (value >> 8) & 0xF;
  outText[4] = v14;
  v16 = 87;
  if ( v15 < 0xA )
    v16 = 48;
  v17 = v15 + v16;
  v18 = (unsigned __int8)value >> 4;
  outText[5] = v17;
  v19 = 87;
  if ( v18 < 0xA )
    v19 = 48;
  v20 = value & 0xF;
  outText[6] = v18 + v19;
  if ( v20 < 0xA )
    v3 = 48;
  outText[7] = v20 + v3;
}

/*
==============
IWString_ToSignedDecimal
==============
*/
void IWString_ToSignedDecimal(char *outText, unsigned int valueTextLen, int value)
{
  unsigned int v4; 
  int v5; 

  v4 = (unsigned int)value >> 31;
  if ( value < 0 )
    *outText = 45;
  v5 = -value;
  if ( !(_BYTE)v4 )
    v5 = value;
  IWString_ToUnsignedDecimalT_unsigned_int_(&outText[(unsigned __int8)v4], valueTextLen - (unsigned __int8)v4, v5);
}

/*
==============
IWString_ToSignedDecimal
==============
*/
void IWString_ToSignedDecimal(char *outText, unsigned int valueTextLen, __int64 value)
{
  unsigned __int64 v4; 
  __int64 v5; 

  v4 = (unsigned __int64)value >> 63;
  if ( value < 0 )
    *outText = 45;
  v5 = -value;
  if ( !(_BYTE)v4 )
    v5 = value;
  IWString_ToUnsignedDecimalT_unsigned___int64_(&outText[(unsigned __int8)v4], valueTextLen - (unsigned __int8)v4, v5);
}

/*
==============
IWString_ToUnsignedDecimal
==============
*/

void __fastcall IWString_ToUnsignedDecimal(char *outText, unsigned int valueTextLen, unsigned int value)
{
  IWString_ToUnsignedDecimalT_unsigned_int_(outText, valueTextLen, value);
}

/*
==============
IWString_ToUnsignedDecimal
==============
*/

void __fastcall IWString_ToUnsignedDecimal(char *outText, unsigned int valueTextLen, unsigned __int64 value)
{
  IWString_ToUnsignedDecimalT_unsigned___int64_(outText, valueTextLen, value);
}

/*
==============
IWString_UnescapeCString
==============
*/
signed __int64 IWString_UnescapeCString(char *outText, const char *inText, unsigned __int64 inTextLen)
{
  const char *v3; 
  const char *v4; 
  char *i; 
  int v7; 
  char v8; 

  v3 = &inText[inTextLen];
  v4 = inText;
  for ( i = outText; v4 != v3; ++i )
  {
    v7 = *v4++;
    if ( v7 == 92 )
    {
      if ( v4 == v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\string_util.cpp", 75, ASSERT_TYPE_ASSERT, "(inIt != inEnd)", (const char *)&queryFormat, "inIt != inEnd") )
        __debugbreak();
      v8 = *v4++;
      LOBYTE(v7) = s_IWString_UnescapeCString_charRemapTable[v8 & 0x7F];
    }
    *i = v7;
  }
  *i = 0;
  return i - outText;
}

