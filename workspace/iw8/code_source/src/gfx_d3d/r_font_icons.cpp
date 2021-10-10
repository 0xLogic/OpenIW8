/*
==============
FontIcons_GetPCKeyImages
==============
*/

bool __fastcall FontIcons_GetPCKeyImages(GfxImage **background, bool isUnbound)
{
  return ?FontIcons_GetPCKeyImages@@YA_NPEAPEAUGfxImage@@_N@Z(background, isUnbound);
}

/*
==============
FontIcons_IsCodePointAnIcon
==============
*/

bool __fastcall FontIcons_IsCodePointAnIcon(unsigned int unicodeCodePoint)
{
  return ?FontIcons_IsCodePointAnIcon@@YA_NI@Z(unicodeCodePoint);
}

/*
==============
FontIcons_GetIconNameForBindButton
==============
*/

bool __fastcall FontIcons_GetIconNameForBindButton(LocalClientNum_t localClientNum, const int bindButton, const unsigned __int64 outIconNameSize, char *outIconName)
{
  return ?FontIcons_GetIconNameForBindButton@@YA_NW4LocalClientNum_t@@H_KPEAD@Z(localClientNum, bindButton, outIconNameSize, outIconName);
}

/*
==============
FontIcons_IsButtonCodePoint
==============
*/

bool __fastcall FontIcons_IsButtonCodePoint(int letter)
{
  return ?FontIcons_IsButtonCodePoint@@YA_NH@Z(letter);
}

/*
==============
FontIcons_GetIconReference
==============
*/

bool __fastcall FontIcons_GetIconReference(LocalClientNum_t localClientNum, const char *name, InputContext inputContext, unsigned __int64 resultBufferSize, char *outResult)
{
  return ?FontIcons_GetIconReference@@YA_NW4LocalClientNum_t@@PEBDW4InputContext@@_KPEAD@Z(localClientNum, name, inputContext, resultBufferSize, outResult);
}

/*
==============
FontIcons_DoesRequireBacking
==============
*/

bool __fastcall FontIcons_DoesRequireBacking(unsigned int unicodeCodePoint)
{
  return ?FontIcons_DoesRequireBacking@@YA_NI@Z(unicodeCodePoint);
}

/*
==============
FontIcons_GetIcon
==============
*/

bool __fastcall FontIcons_GetIcon(unsigned int unicodeCodePoint, int fontHeight, float fontScale, int noMinSize, FontIconRenderInfo *outIcon)
{
  return ?FontIcons_GetIcon@@YA_NIHMHPEAUFontIconRenderInfo@@@Z(unicodeCodePoint, fontHeight, fontScale, noMinSize, outIcon);
}

/*
==============
FontIcons_Init
==============
*/

void FontIcons_Init(void)
{
  ?FontIcons_Init@@YAXXZ();
}

/*
==============
FontIcons_GetIconNameForDirective
==============
*/

bool __fastcall FontIcons_GetIconNameForDirective(LocalClientNum_t localClientNum, const char *directive, const unsigned __int64 outIconNameSize, char *outIconName)
{
  return ?FontIcons_GetIconNameForDirective@@YA_NW4LocalClientNum_t@@PEBD_KPEAD@Z(localClientNum, directive, outIconNameSize, outIconName);
}

/*
==============
FontIcons_HasIconReference
==============
*/

bool __fastcall FontIcons_HasIconReference(LocalClientNum_t localClientNum, const char *name, InputContext inputContext)
{
  return ?FontIcons_HasIconReference@@YA_NW4LocalClientNum_t@@PEBDW4InputContext@@@Z(localClientNum, name, inputContext);
}

/*
==============
FontIcons_DoesRequireBacking
==============
*/
bool FontIcons_DoesRequireBacking(unsigned int unicodeCodePoint)
{
  return unicodeCodePoint >= 0x20 && (unicodeCodePoint - 2010 <= 3 || unicodeCodePoint - 1984 > 0x13F);
}

/*
==============
FontIcons_GetIcon
==============
*/

bool __fastcall FontIcons_GetIcon(unsigned int unicodeCodePoint, int fontHeight, double fontScale, int noMinSize, FontIconRenderInfo *outIcon)
{
  __int64 v9; 
  FontIcon *i; 
  unsigned int v13; 
  bool result; 
  __int64 v15; 
  const GfxImage *image; 
  float scale; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 

  _XMM6 = *(_OWORD *)&fontScale;
  if ( !outIcon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 178, ASSERT_TYPE_ASSERT, "(outIcon)", (const char *)&queryFormat, "outIcon") )
    __debugbreak();
  v9 = 0i64;
  __asm
  {
    vcmpeqss xmm2, xmm6, xmm0
    vblendvps xmm0, xmm6, xmm1, xmm2
  }
  if ( !fontIconsTableRowCount )
    return 0;
  for ( i = s_fontIconsTable; ; ++i )
  {
    v13 = i->unicodeCodePoint;
    if ( i->unicodeCodePoint )
      break;
LABEL_9:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= fontIconsTableRowCount )
      return 0;
  }
  if ( v13 != unicodeCodePoint )
  {
    if ( v13 > unicodeCodePoint )
      return 0;
    goto LABEL_9;
  }
  v15 = v9;
  image = s_fontIconsTable[v15].image;
  if ( !image )
    return 0;
  outIcon->image = image;
  scale = s_fontIconsTable[v15].scale;
  v18 = (float)image->width / (float)image->height;
  v19 = (float)fontHeight;
  if ( noMinSize || (float)((float)(v19 * scale) * *(float *)&_XMM0) >= 20.0 )
    v20 = v19 * scale;
  else
    v20 = 20.0 / *(float *)&_XMM0;
  outIcon->height = v20;
  v21 = v19 - outIcon->height;
  outIcon->width = v20 * v18;
  outIcon->xOffset = 0.0;
  result = 1;
  outIcon->yOffset = (float)(v21 * s_fontIconsTable[v15].verticalAlignment) - (float)fontHeight;
  outIcon->advance = v20 * v18;
  return result;
}

/*
==============
FontIcons_GetIconNameForBindButton
==============
*/
char FontIcons_GetIconNameForBindButton(LocalClientNum_t localClientNum, const int bindButton, const unsigned __int64 outIconNameSize, char *outIconName)
{
  unsigned int v8; 
  __int64 v9; 
  unsigned int unicodeCodePoint; 
  __int64 v11; 
  FontIcon *v12; 
  unsigned int v13; 
  const GfxImage *image; 

  v8 = 1;
  while ( 1 )
  {
    if ( CL_Keys_GetActiveBinding(localClientNum, v8) == bindButton )
    {
      v9 = 0i64;
      if ( fontIconsTableRowCount )
        break;
    }
LABEL_14:
    if ( ++v8 >= 0xDE )
      return 0;
  }
  while ( 1 )
  {
    unicodeCodePoint = s_fontIconsTable[v9].unicodeCodePoint;
    if ( unicodeCodePoint )
    {
      if ( unicodeCodePoint == v8 )
        break;
    }
LABEL_13:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= fontIconsTableRowCount )
      goto LABEL_14;
  }
  v11 = 0i64;
  v12 = s_fontIconsTable;
  while ( 1 )
  {
    v13 = v12->unicodeCodePoint;
    if ( v12->unicodeCodePoint )
      break;
LABEL_10:
    v11 = (unsigned int)(v11 + 1);
    ++v12;
    if ( (unsigned int)v11 >= fontIconsTableRowCount )
      goto LABEL_13;
  }
  if ( v13 != v8 )
  {
    if ( v13 > v8 )
      goto LABEL_13;
    goto LABEL_10;
  }
  image = s_fontIconsTable[v11].image;
  if ( !image )
    goto LABEL_13;
  Core_strcpy(outIconName, outIconNameSize, image->name);
  return 1;
}

/*
==============
FontIcons_GetIconNameForDirective
==============
*/
char FontIcons_GetIconNameForDirective(LocalClientNum_t localClientNum, const char *directive, const unsigned __int64 outIconNameSize, char *outIconName)
{
  unsigned int GlyphFromUTF8; 
  int numBytesConsumed; 
  FontIconRenderInfo outIcon; 
  char dstString[8]; 

  UI_ReplaceDirective(localClientNum, directive, dstString, 6ui64, 0);
  GlyphFromUTF8 = GetGlyphFromUTF8((const unsigned __int8 *)dstString, &numBytesConsumed);
  if ( numBytesConsumed <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 271, ASSERT_TYPE_ASSERT, "(bytesConsumed > 0)", (const char *)&queryFormat, "bytesConsumed > 0") )
    __debugbreak();
  if ( !FontIcons_GetIcon(GlyphFromUTF8, 16, 1.0, 0, &outIcon) )
    return 0;
  Core_strcpy(outIconName, outIconNameSize, outIcon.image->name);
  return 1;
}

/*
==============
FontIcons_GetIconReference
==============
*/
bool FontIcons_GetIconReference(LocalClientNum_t localClientNum, const char *name, InputContext inputContext, unsigned __int64 resultBufferSize, char *outResult)
{
  unsigned int v9; 
  __int64 v10; 
  const char *stringRef; 
  const char *v12; 
  int v13; 
  int v14; 
  const char *keyboardKeyName; 
  int v16; 
  int PhysicalAxisFromVirtualAxis; 
  int v18; 
  signed int unicodeCodePoint; 
  bool result; 
  const char *String; 

  memset_0(outResult, 0, resultBufferSize);
  v9 = fontIconsTableRowCount;
  v10 = 0i64;
  if ( !fontIconsTableRowCount )
    return 0;
  while ( 1 )
  {
    stringRef = s_fontIconsTable[v10].stringRef;
    if ( !stringRef )
      goto LABEL_21;
    v12 = (const char *)(name - stringRef);
    do
    {
      v13 = (unsigned __int8)v12[(_QWORD)stringRef];
      v14 = *(unsigned __int8 *)stringRef - v13;
      if ( v14 )
        break;
      ++stringRef;
    }
    while ( v13 );
    if ( v14 )
      goto LABEL_21;
    if ( !CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) )
    {
      keyboardKeyName = s_fontIconsTable[v10].keyboardKeyName;
      if ( *keyboardKeyName )
      {
        String = SEH_StringEd_GetString(keyboardKeyName);
        if ( !String )
          String = s_fontIconsTable[v10].keyboardKeyName;
        UI_ReplaceDirective(localClientNum, String, outResult, resultBufferSize, 0);
        return 1;
      }
    }
    v16 = 0;
    if ( !strcmp_0(name, "left_stick_forward") )
    {
      if ( CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 1) == 1 )
        v16 = 1;
    }
    else if ( !strcmp_0(name, "left_stick_centered") )
    {
      if ( !CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 0) )
        v16 = 1;
    }
    else if ( !strcmp_0(name, "right_stick_centered") )
    {
      PhysicalAxisFromVirtualAxis = CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 3);
      v18 = CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 2);
      if ( PhysicalAxisFromVirtualAxis == 3 && v18 == 2 )
        v16 = -1;
    }
    unicodeCodePoint = s_fontIconsTable[(unsigned int)(v16 + v10)].unicodeCodePoint;
    if ( unicodeCodePoint )
      break;
    v9 = fontIconsTableRowCount;
LABEL_21:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      return 0;
  }
  if ( unicodeCodePoint < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 73, ASSERT_TYPE_ASSERT, "(unicodeChar >= 0)", (const char *)&queryFormat, "unicodeChar >= 0") )
    __debugbreak();
  if ( unicodeCodePoint > 127 )
  {
    if ( unicodeCodePoint > 2047 )
    {
      if ( unicodeCodePoint > 0xFFFF )
      {
        if ( unicodeCodePoint <= 0x1FFFFF && resultBufferSize >= 4 )
        {
          *outResult = ((unicodeCodePoint >> 18) & 7) - 16;
          outResult[1] = ((unicodeCodePoint >> 12) & 0x3F) + 0x80;
          outResult[2] = ((unicodeCodePoint >> 6) & 0x3F) + 0x80;
          outResult[3] = (unicodeCodePoint & 0x3F) + 0x80;
          return 1;
        }
      }
      else if ( resultBufferSize >= 3 )
      {
        *outResult = ((unicodeCodePoint >> 12) & 0xF) - 32;
        outResult[1] = ((unicodeCodePoint >> 6) & 0x3F) + 0x80;
        outResult[2] = (unicodeCodePoint & 0x3F) + 0x80;
        return 1;
      }
    }
    else if ( resultBufferSize >= 2 )
    {
      *outResult = ((unicodeCodePoint >> 6) & 0x1F) - 64;
      outResult[1] = (unicodeCodePoint & 0x3F) + 0x80;
      return 1;
    }
  }
  else if ( resultBufferSize )
  {
    result = 1;
    *outResult = unicodeCodePoint & 0x7F;
    return result;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 393, ASSERT_TYPE_ASSERT, "((Com_Unicode_UTF8Encode( codePoint, outResult, resultBufferSize )) > (0))", (const char *)&queryFormat, "Com_Unicode_UTF8Encode( codePoint, outResult, resultBufferSize ) > 0") )
    __debugbreak();
  return 1;
}

/*
==============
FontIcons_GetPCKeyImages
==============
*/
char FontIcons_GetPCKeyImages(GfxImage **background, bool isUnbound)
{
  GfxImage *v4; 

  if ( !background && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 487, ASSERT_TYPE_ASSERT, "(background)", (const char *)&queryFormat, "background") )
    __debugbreak();
  if ( !s_fontIconsPCKeyImageBackground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 488, ASSERT_TYPE_ASSERT, "(s_fontIconsPCKeyImageBackground)", (const char *)&queryFormat, "s_fontIconsPCKeyImageBackground") )
    __debugbreak();
  v4 = s_fontIconsPCKeyImageUnboundBackground;
  if ( !s_fontIconsPCKeyImageUnboundBackground )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 489, ASSERT_TYPE_ASSERT, "(s_fontIconsPCKeyImageUnboundBackground)", (const char *)&queryFormat, "s_fontIconsPCKeyImageUnboundBackground") )
      __debugbreak();
    v4 = s_fontIconsPCKeyImageUnboundBackground;
  }
  if ( !background )
    return 0;
  if ( !isUnbound )
    v4 = s_fontIconsPCKeyImageBackground;
  if ( !v4 )
    return 0;
  *background = v4;
  return 1;
}

/*
==============
FontIcons_HasIconReference
==============
*/
char FontIcons_HasIconReference(LocalClientNum_t localClientNum, const char *name, InputContext inputContext)
{
  unsigned int v3; 
  __int64 v4; 
  const char *stringRef; 
  const char *v9; 
  int v10; 
  int v11; 
  const char *keyboardKeyName; 
  int v13; 
  int PhysicalAxisFromVirtualAxis; 
  int v15; 

  v3 = fontIconsTableRowCount;
  v4 = 0i64;
  if ( !fontIconsTableRowCount )
    return 0;
  while ( 1 )
  {
    stringRef = s_fontIconsTable[v4].stringRef;
    if ( !stringRef )
      goto LABEL_21;
    v9 = (const char *)(name - stringRef);
    do
    {
      v10 = (unsigned __int8)v9[(_QWORD)stringRef];
      v11 = *(unsigned __int8 *)stringRef - v10;
      if ( v11 )
        break;
      ++stringRef;
    }
    while ( v10 );
    if ( v11 )
      goto LABEL_21;
    if ( !CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) )
    {
      keyboardKeyName = s_fontIconsTable[v4].keyboardKeyName;
      if ( *keyboardKeyName )
        break;
    }
    v13 = 0;
    if ( !strcmp_0(name, "left_stick_forward") )
    {
      if ( CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 1) == 1 )
        v13 = 1;
    }
    else if ( !strcmp_0(name, "left_stick_centered") )
    {
      if ( !CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 0) )
        v13 = 1;
    }
    else if ( !strcmp_0(name, "right_stick_centered") )
    {
      PhysicalAxisFromVirtualAxis = CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 3);
      v15 = CL_GamepadGetPhysicalAxisFromVirtualAxis(localClientNum, 2);
      if ( PhysicalAxisFromVirtualAxis == 3 && v15 == 2 )
        v13 = -1;
    }
    if ( s_fontIconsTable[(unsigned int)(v13 + v4)].unicodeCodePoint )
      return 1;
    v3 = fontIconsTableRowCount;
LABEL_21:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0;
  }
  SEH_StringEd_GetString(keyboardKeyName);
  return 1;
}

/*
==============
FontIcons_Init
==============
*/

void __fastcall FontIcons_Init(double _XMM0_8)
{
  unsigned int v1; 
  __int64 v2; 
  const char *ColumnValueForRow; 
  int v4; 
  StringTable *v5; 
  const char *v6; 
  const GfxImage *v7; 
  StringTable *v8; 
  const char *v9; 
  StringTable *v10; 
  const char *v12; 
  StringTable *v13; 
  const char *v15; 
  StringTable *v16; 
  const char *v17; 
  const char *stringRef; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  StringTable *tablePtr; 

  StringTable_GetAsset("fontIcons.csv", (const StringTable **)&tablePtr);
  fontIconsTableRowCount = StringTable_GetRowCount(tablePtr);
  v1 = fontIconsTableRowCount;
  if ( fontIconsTableRowCount > 0x80 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 83, ASSERT_TYPE_ASSERT, "(fontIconsTableRowCount <= 128)", (const char *)&queryFormat, "fontIconsTableRowCount <= MAX_FONT_ICONS") )
      __debugbreak();
    v1 = fontIconsTableRowCount;
  }
  memset_0(s_fontIconsTable, 0, sizeof(s_fontIconsTable));
  v2 = 0i64;
  if ( v1 )
  {
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v2, 1);
      v4 = atoi(ColumnValueForRow);
      v5 = tablePtr;
      s_fontIconsTable[v2].unicodeCodePoint = v4;
      v6 = StringTable_GetColumnValueForRow(v5, v2, 2);
      if ( *v6 )
      {
        v7 = Image_Register(v6, IMAGE_TRACK_MISC);
        v8 = tablePtr;
        s_fontIconsTable[v2].image = v7;
        v9 = StringTable_GetColumnValueForRow(v8, v2, 8);
        _XMM0_8 = atof(v9);
        v10 = tablePtr;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        s_fontIconsTable[v2].verticalAlignment = *(float *)&_XMM1;
        v12 = StringTable_GetColumnValueForRow(v10, v2, 6);
        _XMM0_8 = atof(v12);
        v13 = tablePtr;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        s_fontIconsTable[v2].scale = *(float *)&_XMM1;
        v15 = StringTable_GetColumnValueForRow(v13, v2, 0);
        v16 = tablePtr;
        s_fontIconsTable[v2].stringRef = v15;
        v17 = StringTable_GetColumnValueForRow(v16, v2, 4);
        stringRef = s_fontIconsTable[v2].stringRef;
        s_fontIconsTable[v2].keyboardKeyName = v17;
        if ( !strcmp_0(stringRef, "left_stick_forward") )
        {
          ICON_LEFT_STICK_FORWARD = s_fontIconsTable[v2].unicodeCodePoint;
          v19 = StringTable_GetColumnValueForRow(tablePtr, (int)v2 + 1, 0);
          if ( strcmp_0(v19, "right_stick_forward") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 128, ASSERT_TYPE_ASSERT, "(strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, 0 ), \"right_stick_forward\" ) == 0)", (const char *)&queryFormat, "strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, FONT_ICONS_COL_STRING_REF ), \"right_stick_forward\" ) == 0") )
            __debugbreak();
          stringRef = s_fontIconsTable[v2].stringRef;
        }
        if ( !strcmp_0(stringRef, "left_stick_centered") )
        {
          ICON_LEFT_STICK_CENTERED = s_fontIconsTable[v2].unicodeCodePoint;
          v20 = StringTable_GetColumnValueForRow(tablePtr, (int)v2 + 1, 0);
          if ( strcmp_0(v20, "right_stick_centered") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 133, ASSERT_TYPE_ASSERT, "(strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, 0 ), \"right_stick_centered\" ) == 0)", (const char *)&queryFormat, "strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, FONT_ICONS_COL_STRING_REF ), \"right_stick_centered\" ) == 0") )
            __debugbreak();
          stringRef = s_fontIconsTable[v2].stringRef;
        }
        if ( !strcmp_0(stringRef, "right_stick_centered") )
        {
          ICON_RIGHT_STICK_CENTERED = s_fontIconsTable[v2].unicodeCodePoint;
          v21 = StringTable_GetColumnValueForRow(tablePtr, (int)v2 - 1, 0);
          if ( strcmp_0(v21, "left_stick_centered") )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 138, ASSERT_TYPE_ASSERT, "(strcmp( StringTable_GetColumnValueForRow( table, rowIndex - 1, 0 ), \"left_stick_centered\" ) == 0)", (const char *)&queryFormat, "strcmp( StringTable_GetColumnValueForRow( table, rowIndex - 1, FONT_ICONS_COL_STRING_REF ), \"left_stick_centered\" ) == 0") )
              __debugbreak();
          }
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < fontIconsTableRowCount );
  }
  s_fontIconsPCKeyImageBackground = Image_Register("ui_keybind_backing", IMAGE_TRACK_MISC);
  s_fontIconsPCKeyImageUnboundBackground = Image_Register("ui_keybind_backing_unbound", IMAGE_TRACK_MISC);
}

/*
==============
FontIcons_IsButtonCodePoint
==============
*/
bool FontIcons_IsButtonCodePoint(int letter)
{
  return (unsigned int)(letter - 2010) <= 0x17;
}

/*
==============
FontIcons_IsCodePointAnIcon
==============
*/
char FontIcons_IsCodePointAnIcon(unsigned int unicodeCodePoint)
{
  int v1; 
  FontIcon *i; 

  v1 = 0;
  if ( !fontIconsTableRowCount )
    return 0;
  for ( i = s_fontIconsTable; !i->unicodeCodePoint || i->unicodeCodePoint != unicodeCodePoint; ++i )
  {
    if ( ++v1 >= fontIconsTableRowCount )
      return 0;
  }
  return 1;
}

