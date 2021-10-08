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
  __int64 v13; 
  FontIcon *v18; 
  unsigned int v19; 
  bool result; 
  const GfxImage *image; 

  _RDI = outIcon;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !outIcon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 178, ASSERT_TYPE_ASSERT, "(outIcon)", (const char *)&queryFormat, "outIcon") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  v13 = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcmpeqss xmm2, xmm6, xmm0
    vblendvps xmm0, xmm6, xmm1, xmm2
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( !fontIconsTableRowCount )
    goto LABEL_10;
  _R9 = s_fontIconsTable;
  v18 = s_fontIconsTable;
  while ( 1 )
  {
    v19 = v18->unicodeCodePoint;
    if ( v18->unicodeCodePoint )
      break;
LABEL_9:
    v13 = (unsigned int)(v13 + 1);
    ++v18;
    if ( (unsigned int)v13 >= fontIconsTableRowCount )
      goto LABEL_10;
  }
  if ( v19 != unicodeCodePoint )
  {
    if ( v19 > unicodeCodePoint )
      goto LABEL_10;
    goto LABEL_9;
  }
  _RCX = v13;
  image = s_fontIconsTable[_RCX].image;
  if ( !image )
  {
LABEL_10:
    result = 0;
    goto LABEL_11;
  }
  outIcon->image = image;
  __asm
  {
    vmovss  xmm5, dword ptr [r9+rcx*8+4]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm3, xmm3, xmm3
    vdivss  xmm6, xmm1, xmm0
    vcvtsi2ss xmm3, xmm3, ebp
  }
  if ( !noMinSize )
  {
    __asm
    {
      vmovss  xmm2, [rsp+48h+arg_10]
      vmovss  xmm4, cs:__real@41a00000
      vmulss  xmm0, xmm3, xmm5
      vmulss  xmm1, xmm0, xmm2
      vcomiss xmm1, xmm4
    }
  }
  __asm
  {
    vmulss  xmm0, xmm3, xmm5
    vmovss  dword ptr [rdi+18h], xmm0
    vmulss  xmm2, xmm0, xmm6
    vsubss  xmm0, xmm3, dword ptr [rdi+18h]
    vmovss  dword ptr [rdi+14h], xmm2
  }
  outIcon->xOffset = 0.0;
  result = 1;
  __asm
  {
    vmulss  xmm0, xmm0, dword ptr [r9+rcx*8+8]
    vsubss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+10h], xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
LABEL_11:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  __asm { vmovss  xmm2, cs:__real@3f800000; fontScale }
  if ( !FontIcons_GetIcon(GlyphFromUTF8, 16, *(float *)&_XMM2, 0, &outIcon) )
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
  __int64 v3; 
  const char *ColumnValueForRow; 
  int v6; 
  StringTable *v7; 
  const char *v8; 
  const GfxImage *v9; 
  StringTable *v10; 
  const char *v11; 
  StringTable *v12; 
  const char *v14; 
  StringTable *v15; 
  const char *v17; 
  StringTable *v18; 
  const char *v19; 
  const char *stringRef; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
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
  _RBP = s_fontIconsTable;
  memset_0(s_fontIconsTable, 0, sizeof(s_fontIconsTable));
  v3 = 0i64;
  if ( v1 )
  {
    do
    {
      _RDI = 6 * v3;
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v3, 1);
      v6 = atoi(ColumnValueForRow);
      v7 = tablePtr;
      s_fontIconsTable[v3].unicodeCodePoint = v6;
      v8 = StringTable_GetColumnValueForRow(v7, v3, 2);
      if ( *v8 )
      {
        v9 = Image_Register(v8, IMAGE_TRACK_MISC);
        v10 = tablePtr;
        s_fontIconsTable[v3].image = v9;
        v11 = StringTable_GetColumnValueForRow(v10, v3, 8);
        _XMM0_8 = atof(v11);
        v12 = tablePtr;
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rbp+rdi*8+8], xmm1
        }
        v14 = StringTable_GetColumnValueForRow(v12, v3, 6);
        _XMM0_8 = atof(v14);
        v15 = tablePtr;
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rbp+rdi*8+4], xmm1
        }
        v17 = StringTable_GetColumnValueForRow(v15, v3, 0);
        v18 = tablePtr;
        s_fontIconsTable[v3].stringRef = v17;
        v19 = StringTable_GetColumnValueForRow(v18, v3, 4);
        stringRef = s_fontIconsTable[v3].stringRef;
        s_fontIconsTable[v3].keyboardKeyName = v19;
        if ( !strcmp_0(stringRef, "left_stick_forward") )
        {
          ICON_LEFT_STICK_FORWARD = s_fontIconsTable[v3].unicodeCodePoint;
          v21 = StringTable_GetColumnValueForRow(tablePtr, (int)v3 + 1, 0);
          if ( strcmp_0(v21, "right_stick_forward") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 128, ASSERT_TYPE_ASSERT, "(strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, 0 ), \"right_stick_forward\" ) == 0)", (const char *)&queryFormat, "strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, FONT_ICONS_COL_STRING_REF ), \"right_stick_forward\" ) == 0") )
            __debugbreak();
          stringRef = s_fontIconsTable[v3].stringRef;
        }
        if ( !strcmp_0(stringRef, "left_stick_centered") )
        {
          ICON_LEFT_STICK_CENTERED = s_fontIconsTable[v3].unicodeCodePoint;
          v22 = StringTable_GetColumnValueForRow(tablePtr, (int)v3 + 1, 0);
          if ( strcmp_0(v22, "right_stick_centered") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 133, ASSERT_TYPE_ASSERT, "(strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, 0 ), \"right_stick_centered\" ) == 0)", (const char *)&queryFormat, "strcmp( StringTable_GetColumnValueForRow( table, rowIndex + 1, FONT_ICONS_COL_STRING_REF ), \"right_stick_centered\" ) == 0") )
            __debugbreak();
          stringRef = s_fontIconsTable[v3].stringRef;
        }
        if ( !strcmp_0(stringRef, "right_stick_centered") )
        {
          ICON_RIGHT_STICK_CENTERED = s_fontIconsTable[v3].unicodeCodePoint;
          v23 = StringTable_GetColumnValueForRow(tablePtr, (int)v3 - 1, 0);
          if ( strcmp_0(v23, "left_stick_centered") )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font_icons.cpp", 138, ASSERT_TYPE_ASSERT, "(strcmp( StringTable_GetColumnValueForRow( table, rowIndex - 1, 0 ), \"left_stick_centered\" ) == 0)", (const char *)&queryFormat, "strcmp( StringTable_GetColumnValueForRow( table, rowIndex - 1, FONT_ICONS_COL_STRING_REF ), \"left_stick_centered\" ) == 0") )
              __debugbreak();
          }
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < fontIconsTableRowCount );
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

